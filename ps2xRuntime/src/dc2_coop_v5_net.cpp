#include "dc2_coop_v5_net.h"

#include <deque>
#include "dc2_authority_input_scheduler.h"
#include "dc2_input_edges.h"
#include "dc2_snapshot_freshness.h"

#include <algorithm>
#include <chrono>
#include <cmath>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <mutex>
#include <string>

#if defined(_WIN32)
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif
#include <winsock2.h>
#include <ws2tcpip.h>
#else
#include <arpa/inet.h>
#include <fcntl.h>
#include <sys/socket.h>
#include <unistd.h>
#endif

namespace dc2_coop_v5_net
{
namespace
{
using Clock = std::chrono::steady_clock;

#if defined(_WIN32)
using Socket = SOCKET;
constexpr Socket kInvalidSocket = INVALID_SOCKET;
#else
using Socket = int;
constexpr Socket kInvalidSocket = -1;
#endif

uint32_t fnv1a(const char *text)
{
    uint32_t hash = 2166136261u;
    for (const unsigned char *p = reinterpret_cast<const unsigned char *>(text);
         p && *p; ++p)
    {
        hash ^= *p;
        hash *= 16777619u;
    }
    return hash;
}

uint32_t crc32(const uint8_t *data, size_t size)
{
    uint32_t crc = 0xFFFFFFFFu;
    for (size_t i = 0; i < size; ++i)
    {
        crc ^= data[i];
        for (unsigned bit = 0; bit < 8u; ++bit)
            crc = (crc >> 1u) ^ (0xEDB88320u &
                  static_cast<uint32_t>(-static_cast<int32_t>(crc & 1u)));
    }
    return ~crc;
}

dc2_coop_v5::Role parseRole()
{
    const char *value = std::getenv("DC2_COOP_ROLE");
    if (!value)
        return dc2_coop_v5::Role::None;
    if (std::strcmp(value, "host") == 0 || std::strcmp(value, "HOST") == 0 ||
        std::strcmp(value, "1") == 0)
        return dc2_coop_v5::Role::PlayerOne;
    if (std::strcmp(value, "guest") == 0 || std::strcmp(value, "GUEST") == 0 ||
        std::strcmp(value, "2") == 0)
        return dc2_coop_v5::Role::PlayerTwo;
    if (std::strcmp(value, "authority") == 0 ||
        std::strcmp(value, "AUTHORITY") == 0 || std::strcmp(value, "3") == 0)
        return dc2_coop_v5::Role::Authority;
    return dc2_coop_v5::Role::None;
}

bool enabledByEnvironment()
{
    const char *value = std::getenv("DC2_COOP_V5");
    return value && *value && std::strcmp(value, "0") != 0;
}

bool traceScheduledInputs()
{
    static const bool enabled = [] {
        const char *value = std::getenv("DC2_COOP_TRACE_SCHEDULED_INPUT");
        return value && *value && std::strcmp(value, "0") != 0;
    }();
    return enabled;
}

bool sequenceNewer(uint32_t candidate, uint32_t current)
{
    return static_cast<int32_t>(candidate - current) > 0;
}

class Client
{
public:
    ~Client()
    {
        if (socket_ != kInvalidSocket)
        {
#if defined(_WIN32)
            closesocket(socket_);
#else
            close(socket_);
#endif
        }
#if defined(_WIN32)
        if (winsockReady_)
            WSACleanup();
#endif
    }

    void submitInput(uint16_t buttons, uint8_t lx, uint8_t ly,
                     uint8_t rx, uint8_t ry, uint32_t room)
    {
        std::lock_guard<std::mutex> lock(mutex_);
        if (!ensureStarted() || role_ == dc2_coop_v5::Role::Authority)
            return;
        dc2_coop_v5::InputFrame frame{};
        frame.playerId = role_ == dc2_coop_v5::Role::PlayerTwo ? 2u : 1u;
        frame.buttons = buttons;
        frame.leftX = lx;
        frame.leftY = ly;
        frame.rightX = rx;
        frame.rightY = ry;
        frame.acknowledgedTick = snapshot_.tick;
        if (room == 0u)
            room = localRoom_;
        sendPacket(dc2_coop_v5::MessageKind::Input, room,
                   reinterpret_cast<const uint8_t *>(&frame), sizeof(frame));
        drain();
    }

    void pumpAuthority(uint32_t room)
    {
        std::lock_guard<std::mutex> lock(mutex_);
        if (!ensureStarted() || role_ != dc2_coop_v5::Role::Authority)
            return;
        const auto now = Clock::now();
        if (lastHello_ == Clock::time_point{} ||
            now - lastHello_ >= std::chrono::milliseconds(500))
        {
            sendPacket(dc2_coop_v5::MessageKind::Hello, room, nullptr, 0u);
            lastHello_ = now;
        }
        drain();
    }

    bool getInput(uint32_t playerId, dc2_coop_v5::InputFrame &out,
                  uint32_t maxAgeMs)
    {
        std::lock_guard<std::mutex> lock(mutex_);
        if (playerId < 1u || playerId > 2u || !inputSeen_[playerId - 1u])
            return false;
        const auto index = playerId - 1u;
        if (localRoom_ != 0u && inputSeen_[index] &&
            inputRoom_[index] != localRoom_)
            return false;
        if (scheduledMode_[index])
        {
            const dc2::AuthorityInputState state = scheduledInputs_[index].current();
            out = {};
            out.playerId = playerId;
            out.buttons = state.buttons;
            out.commandFlags = dc2_coop_v5::kInputScheduled;
            out.leftX = state.leftX;
            out.leftY = state.leftY;
            out.rightX = state.rightX;
            out.rightY = state.rightY;
            out.acknowledgedTick = scheduledInputs_[index].cursorTick();
            return true;
        }
        if (Clock::now() - inputAt_[index] >
            std::chrono::milliseconds(maxAgeMs))
            return false;
        out = inputs_[index];
        return true;
    }

    uint16_t consumeButtons(uint32_t playerId, uint32_t simulationTick, uint32_t maxAgeMs)
    {
        std::lock_guard<std::mutex> lock(mutex_);
        if (playerId < 1u || playerId > 2u) return 0;
        const auto index = playerId - 1u;
        if (!inputSeen_[index] || Clock::now() - inputAt_[index] >
            std::chrono::milliseconds(maxAgeMs))
        {
            edges_[index].reset();
            return 0;
        }
        return edges_[index].consumeAtTick(simulationTick);
    }

    bool sampleInput(uint32_t playerId, uint32_t simulationTick,
                     uint32_t liveFrameTick, bool allowScheduled,
                     dc2_coop_v5::InputFrame &out, uint32_t maxAgeMs)
    {
        std::lock_guard<std::mutex> lock(mutex_);
        out = {};
        out.playerId = playerId;
        out.leftX = out.leftY = out.rightX = out.rightY = 0x80u;
        if (playerId < 1u || playerId > 2u)
            return false;

        const auto index = playerId - 1u;
        if (localRoom_ != 0u && inputSeen_[index] &&
            inputRoom_[index] != localRoom_)
            return false;
        if (scheduledMode_[index])
        {
            if (!allowScheduled)
                return false;
            const dc2::AuthorityInputState state =
                scheduledInputs_[index].sampleAt(simulationTick);
            out.buttons = state.buttons;
            out.commandFlags = dc2_coop_v5::kInputScheduled;
            out.leftX = state.leftX;
            out.leftY = state.leftY;
            out.rightX = state.rightX;
            out.rightY = state.rightY;
            out.acknowledgedTick = simulationTick;
            if (traceScheduledInputs() &&
                (!scheduledTraceSeen_[index] ||
                 scheduledTraceTick_[index] != simulationTick))
            {
                scheduledTraceSeen_[index] = true;
                scheduledTraceTick_[index] = simulationTick;
                std::fprintf(stderr,
                    "[DC2:V5Input] event=applied tick=%u player=%u "
                    "buttons=0x%04x lx=%u ly=%u rx=%u ry=%u\n",
                    simulationTick, playerId,
                    static_cast<unsigned>(state.buttons),
                    static_cast<unsigned>(state.leftX),
                    static_cast<unsigned>(state.leftY),
                    static_cast<unsigned>(state.rightX),
                    static_cast<unsigned>(state.rightY));
            }
            return true;
        }

        // Keep the deterministic cursor aligned even before a stream opts in,
        // so a trace may begin at any later snapshot tick without inheriting a
        // boot-time origin or wall-clock dependency.
        (void)scheduledInputs_[index].sampleAt(simulationTick);
        if (!inputSeen_[index] || Clock::now() - inputAt_[index] >
            std::chrono::milliseconds(maxAgeMs))
        {
            edges_[index].reset();
            return false;
        }

        out = inputs_[index];
        out.buttons = edges_[index].consumeAtTick(liveFrameTick);
        return true;
    }

    void sealInputTick(uint32_t simulationTick)
    {
        std::lock_guard<std::mutex> lock(mutex_);
        for (auto &scheduler : scheduledInputs_)
            (void)scheduler.sampleAt(simulationTick);
    }

    bool getInputRoom(uint32_t playerId, uint32_t &room, uint32_t maxAgeMs)
    {
        std::lock_guard<std::mutex> lock(mutex_);
        if (playerId < 1u || playerId > 2u || !inputSeen_[playerId - 1u])
            return false;
        if (Clock::now() - inputAt_[playerId - 1u] >
            std::chrono::milliseconds(maxAgeMs))
            return false;
        room = inputRoom_[playerId - 1u];
        return room != 0u;
    }

    void setLocalRoom(uint32_t room)
    {
        std::lock_guard<std::mutex> lock(mutex_);
        if (room != 0u && room != localRoom_)
        {
            for (uint32_t index = 0u; index < 2u; ++index)
            {
                if (!inputSeen_[index] || inputRoom_[index] == room)
                    continue;
                edges_[index].reset();
                scheduledInputs_[index].resetSealed(
                    scheduledInputs_[index].cursorTick());
                scheduledMode_[index] = false;
                scheduledTraceSeen_[index] = false;
                inputs_[index] = {};
                inputRoom_[index] = 0u;
                inputAt_[index] = {};
                inputSeen_[index] = false;
            }
        }
        localRoom_ = room;
    }

    void publish(uint32_t room, uint32_t tick, uint32_t floorSeed,
                 const dc2_coop_v5::SnapshotPlayer *players, uint16_t playerCount,
                 const dc2_coop_v5::SnapshotEntity *entities, uint16_t entityCount,
                 const dc2_coop_v5::SnapshotChest *chests)
    {
        std::lock_guard<std::mutex> lock(mutex_);
        if (!ensureStarted() || role_ != dc2_coop_v5::Role::Authority)
            return;
        drain();
        playerCount = std::min<uint16_t>(playerCount,
            static_cast<uint16_t>(dc2_coop_v5::kMaxPlayers));
        entityCount = std::min<uint16_t>(entityCount,
            static_cast<uint16_t>(dc2_coop_v5::kMaxEntities));
        uint8_t payload[sizeof(dc2_coop_v5::SnapshotPrefix) +
                        sizeof(dc2_coop_v5::SnapshotPlayer) * dc2_coop_v5::kMaxPlayers +
                        sizeof(dc2_coop_v5::SnapshotEntity) * dc2_coop_v5::kMaxEntities +
                        sizeof(dc2_coop_v5::SnapshotChest) * dc2_coop_v5::kMaxChests]{};
        dc2_coop_v5::SnapshotPrefix prefix{};
        prefix.floorSeed = floorSeed;
        prefix.playerCount = playerCount;
        prefix.entityCount = entityCount;
        size_t offset = 0u;
        std::memcpy(payload + offset, &prefix, sizeof(prefix));
        offset += sizeof(prefix);
        if (playerCount)
        {
            std::memcpy(payload + offset, players,
                        sizeof(dc2_coop_v5::SnapshotPlayer) * playerCount);
            offset += sizeof(dc2_coop_v5::SnapshotPlayer) * playerCount;
        }
        if (entityCount)
        {
            std::memcpy(payload + offset, entities,
                        sizeof(dc2_coop_v5::SnapshotEntity) * entityCount);
            offset += sizeof(dc2_coop_v5::SnapshotEntity) * entityCount;
        }
        if (chests)
        {
            for (uint32_t i = 0; i < dc2_coop_v5::kMaxChests; ++i)
                if (!std::isfinite(chests[i].lidAngle)) return;
            const size_t bytes = sizeof(dc2_coop_v5::SnapshotChest) * dc2_coop_v5::kMaxChests;
            std::memcpy(payload + offset, chests, bytes);
            offset += bytes;
        }
        sendPacket(dc2_coop_v5::MessageKind::Snapshot, room, payload,
                   static_cast<uint32_t>(offset), tick, true);
        if (!authoritySnapshotLogged_)
        {
            authoritySnapshotLogged_ = true;
            std::fprintf(stderr,
                "[DC2:V5] authority publishing snapshots tick=%u room=0x%08x players=%u entities=%u\n",
                tick, room, playerCount, entityCount);
        }
    }

    bool getSnapshot(Snapshot &out)
    {
        std::lock_guard<std::mutex> lock(mutex_);
        if (!snapshotSeen_ || !snapshotFreshness_.fresh(Clock::now()))
            return false;
        out = snapshot_;
        return true;
    }

    bool sendMod(const void *data, uint32_t bytes)
    {
        std::lock_guard<std::mutex> lock(mutex_);
        if (bytes == 0u || data == nullptr || !ensureStarted())
            return false;
        sendPacket(dc2_coop_v5::MessageKind::Mod, 0u,
                   static_cast<const uint8_t *>(data), bytes);
        return true;
    }

    bool startTransport()
    {
        std::lock_guard<std::mutex> lock(mutex_);
        return ensureStarted();
    }

    bool pollMod(std::vector<uint8_t> &out, uint8_t &senderRole)
    {
        std::lock_guard<std::mutex> lock(mutex_);
        if (modInbox_.empty())
            return false;
        out = std::move(modInbox_.front().first);
        senderRole = modInbox_.front().second;
        modInbox_.pop_front();
        return true;
    }

private:
    bool ensureStarted()
    {
        if (startAttempted_)
            return socket_ != kInvalidSocket;
        startAttempted_ = true;
        role_ = parseRole();
        if (!enabledByEnvironment() || role_ == dc2_coop_v5::Role::None)
            return false;
#if defined(_WIN32)
        WSADATA data{};
        if (WSAStartup(MAKEWORD(2, 2), &data) != 0)
            return false;
        winsockReady_ = true;
#endif
        std::string host = "127.0.0.1";
        uint16_t port = 19772u;
        if (const char *server = std::getenv("DC2_COOP_SERVER"))
        {
            const std::string value(server);
            const size_t colon = value.rfind(':');
            if (colon == std::string::npos)
                host = value;
            else
            {
                host = value.substr(0, colon);
                const int parsed = std::atoi(value.c_str() + colon + 1u);
                if (parsed > 0 && parsed <= 65535)
                    port = static_cast<uint16_t>(parsed);
            }
        }
        socket_ = socket(AF_INET, SOCK_DGRAM, IPPROTO_UDP);
        if (socket_ == kInvalidSocket)
            return false;
#if defined(_WIN32)
        u_long nonBlocking = 1u;
        ioctlsocket(socket_, FIONBIO, &nonBlocking);
#else
        fcntl(socket_, F_SETFL, fcntl(socket_, F_GETFL, 0) | O_NONBLOCK);
#endif
        server_.sin_family = AF_INET;
        server_.sin_port = htons(port);
        if (inet_pton(AF_INET, host.c_str(), &server_.sin_addr) != 1)
        {
            std::fprintf(stderr, "[DC2:V5] invalid server address '%s'\n", host.c_str());
            return false;
        }
        const char *sessionName = std::getenv("DC2_COOP_SESSION");
        session_ = fnv1a(sessionName && *sessionName ? sessionName : "local");
        std::fprintf(stderr, "[DC2:V5] role=%u -> %s:%u session=0x%08x\n",
                     static_cast<unsigned>(role_), host.c_str(),
                     static_cast<unsigned>(port), session_);
        return true;
    }

    void sendPacket(dc2_coop_v5::MessageKind kind, uint32_t room,
                    const uint8_t *payload, uint32_t payloadBytes,
                    uint32_t explicitTick = 0u,
                    bool hasExplicitTick = false)
    {
        if (payloadBytes + sizeof(dc2_coop_v5::Header) > dc2_coop_v5::kMaxDatagram)
            return;
        uint8_t packet[dc2_coop_v5::kMaxDatagram]{};
        dc2_coop_v5::Header header{};
        header.magic = dc2_coop_v5::kMagic;
        header.version = dc2_coop_v5::kVersion;
        header.kind = static_cast<uint8_t>(kind);
        header.role = static_cast<uint8_t>(role_);
        header.session = session_;
        header.sequence = ++sequence_;
        header.tick = hasExplicitTick ? explicitTick : header.sequence;
        header.room = room;
        header.payloadBytes = payloadBytes;
        header.payloadCrc32 = crc32(payload, payloadBytes);
        std::memcpy(packet, &header, sizeof(header));
        if (payloadBytes)
            std::memcpy(packet + sizeof(header), payload, payloadBytes);
        sendto(socket_, reinterpret_cast<const char *>(packet),
               static_cast<int>(sizeof(header) + payloadBytes), 0,
               reinterpret_cast<const sockaddr *>(&server_), sizeof(server_));
    }

    void drain()
    {        uint8_t packet[dc2_coop_v5::kMaxDatagram]{};
        for (;;)
        {
            sockaddr_in from{};
#if defined(_WIN32)
            int fromLen = sizeof(from);
#else
            socklen_t fromLen = sizeof(from);
#endif
            const int bytes = recvfrom(socket_, reinterpret_cast<char *>(packet),
                                       sizeof(packet), 0,
                                       reinterpret_cast<sockaddr *>(&from), &fromLen);
            if (bytes < 0)
                break;
            // A short datagram must not hide valid packets queued behind it.
            if (bytes < static_cast<int>(sizeof(dc2_coop_v5::Header)))
                continue;
            if (from.sin_family != server_.sin_family ||
                from.sin_addr.s_addr != server_.sin_addr.s_addr ||
                from.sin_port != server_.sin_port)
                continue;
            dc2_coop_v5::Header header{};
            std::memcpy(&header, packet, sizeof(header));
            const uint8_t *payload = packet + sizeof(header);
            const uint32_t actualPayload = static_cast<uint32_t>(bytes) - sizeof(header);
            if (header.magic != dc2_coop_v5::kMagic ||
                header.version != dc2_coop_v5::kVersion ||
                header.session != session_ || header.payloadBytes != actualPayload ||
                crc32(payload, actualPayload) != header.payloadCrc32)
                continue;

            const auto kind = static_cast<dc2_coop_v5::MessageKind>(header.kind);
            if (kind == dc2_coop_v5::MessageKind::Mod)
            {
                if (actualPayload > 0u && modInbox_.size() < 64u)
                    modInbox_.emplace_back(
                        std::vector<uint8_t>(payload, payload + actualPayload),
                        header.role);
                continue;
            }
            if (role_ == dc2_coop_v5::Role::Authority &&
                kind == dc2_coop_v5::MessageKind::Input &&
                (header.role == static_cast<uint8_t>(dc2_coop_v5::Role::PlayerOne) ||
                 header.role == static_cast<uint8_t>(dc2_coop_v5::Role::PlayerTwo)) &&
                actualPayload == sizeof(dc2_coop_v5::InputFrame))
            {
                const uint32_t index = header.role - 1u;
                dc2_coop_v5::InputFrame candidate{};
                std::memcpy(&candidate, payload, sizeof(candidate));
                if (candidate.playerId != index + 1u)
                    continue;

                const bool scheduledPacket = (candidate.commandFlags &
                    dc2_coop_v5::kInputScheduled) != 0u;
                const auto now = Clock::now();
                const bool reconnectExpired = !scheduledPacket &&
                    inputSeen_[index] &&
                    now - inputAt_[index] > std::chrono::seconds(2);
                const bool ordinarySequenceAccepted =
                    !inputSequenceSeen_[index] ||
                    sequenceNewer(header.sequence, inputSequence_[index]);
                if (!scheduledPacket && !ordinarySequenceAccepted &&
                    !reconnectExpired)
                    continue;

                if (reconnectExpired)
                {
                    edges_[index].reset();
                    scheduledInputs_[index].resetSealed(
                        scheduledInputs_[index].cursorTick());
                    scheduledMode_[index] = false;
                    scheduledTraceSeen_[index] = false;
                    inputs_[index] = {};
                    inputRoom_[index] = 0u;
                    inputSeen_[index] = false;
                    inputSequenceSeen_[index] = false;
                }

                const bool firstInput = !inputSeen_[index];
                const bool roomChanged = inputSeen_[index] &&
                    inputRoom_[index] != header.room;
                // Room/entry ownership remains on the ordinary live path. A
                // deterministic trace may opt in only after that player has
                // established the exact room it is scheduling against.
                if (scheduledPacket && (!inputSeen_[index] || roomChanged))
                {
                    std::fprintf(stderr,
                        "[DC2:V5] scheduled input rejected player=%u "
                        "target=%u result=room_unestablished\n",
                        index + 1u, candidate.acknowledgedTick);
                    continue;
                }

                if (scheduledPacket)
                {
                    const dc2::AuthorityInputState state{
                        candidate.buttons, candidate.leftX, candidate.leftY,
                        candidate.rightX, candidate.rightY};
                    const auto result = scheduledInputs_[index].schedule(
                        candidate.acknowledgedTick, state, header.sequence);
                    if (result != dc2::AuthorityInputScheduleResult::Inserted &&
                        result != dc2::AuthorityInputScheduleResult::Replaced)
                    {
                        std::fprintf(stderr,
                            "[DC2:V5] scheduled input rejected player=%u "
                            "target=%u result=%u\n",
                            index + 1u, candidate.acknowledgedTick,
                            static_cast<unsigned>(result));
                        continue;
                    }
                    if (!scheduledMode_[index])
                        scheduledTraceSeen_[index] = false;
                    scheduledMode_[index] = true;
                    // A scheduled full-state stream owns its buttons; no
                    // arrival-ordered edge may leak into it.
                    edges_[index].reset();
                    if (!inputSequenceSeen_[index] ||
                        sequenceNewer(header.sequence, inputSequence_[index]))
                    {
                        inputSequence_[index] = header.sequence;
                        inputSequenceSeen_[index] = true;
                    }
                }
                else
                {
                    if (!inputSeen_[index] || roomChanged ||
                        now - inputAt_[index] > std::chrono::milliseconds(250))
                        edges_[index].reset();
                    if (roomChanged || scheduledMode_[index])
                    {
                        scheduledInputs_[index].resetSealed(
                            scheduledInputs_[index].cursorTick());
                        scheduledMode_[index] = false;
                        scheduledTraceSeen_[index] = false;
                    }
                    edges_[index].push(candidate.buttons);
                    inputSequence_[index] = header.sequence;
                    inputSequenceSeen_[index] = true;
                }

                inputs_[index] = candidate;
                inputRoom_[index] = header.room;
                inputAt_[index] = now;
                inputSeen_[index] = true;
                if (firstInput)
                    std::fprintf(stderr,
                        "[DC2:V5] authority receiving Player %u input\n",
                        index + 1u);
                continue;
            }

            if (role_ != dc2_coop_v5::Role::Authority &&
                kind == dc2_coop_v5::MessageKind::Snapshot &&
                header.role == static_cast<uint8_t>(dc2_coop_v5::Role::Authority) &&
                header.sequence > snapshot_.sequence &&
                actualPayload >= sizeof(dc2_coop_v5::SnapshotPrefix))
            {
                dc2_coop_v5::SnapshotPrefix prefix{};
                std::memcpy(&prefix, payload, sizeof(prefix));
                if (prefix.playerCount > dc2_coop_v5::kMaxPlayers ||
                    prefix.entityCount > dc2_coop_v5::kMaxEntities)
                    continue;
                const uint32_t expected = sizeof(prefix) +
                    prefix.playerCount * sizeof(dc2_coop_v5::SnapshotPlayer) +
                    prefix.entityCount * sizeof(dc2_coop_v5::SnapshotEntity);
                constexpr uint32_t chestBytes = sizeof(dc2_coop_v5::SnapshotChest) * dc2_coop_v5::kMaxChests;
                if (actualPayload != expected && actualPayload != expected + chestBytes)
                    continue;
                Snapshot next{};
                next.sequence = header.sequence;
                next.tick = header.tick;
                next.room = header.room;
                next.floorSeed = prefix.floorSeed;
                next.playerCount = prefix.playerCount;
                next.entityCount = prefix.entityCount;
                size_t offset = sizeof(prefix);
                if (next.playerCount)
                {
                    std::memcpy(next.players, payload + offset,
                                next.playerCount * sizeof(next.players[0]));
                    offset += next.playerCount * sizeof(next.players[0]);
                }
                if (next.entityCount)
                    std::memcpy(next.entities, payload + offset,
                                next.entityCount * sizeof(next.entities[0]));
                if (actualPayload == expected + chestBytes)
                {
                    next.hasChests = true;
                    std::memcpy(next.chests, payload + expected, chestBytes);
                    bool valid = true;
                    for (const auto &chest : next.chests)
                        valid = valid && std::isfinite(chest.lidAngle);
                    if (!valid) continue;
                }
                snapshot_ = next;
                snapshotSeen_ = true;
                snapshotFreshness_.received(Clock::now());
                if (!snapshotLogged_)
                {
                    snapshotLogged_ = true;
                    std::fprintf(stderr,
                        "[DC2:V5] first authority snapshot tick=%u room=0x%08x players=%u entities=%u\n",
                        header.tick, header.room, prefix.playerCount, prefix.entityCount);
                }
            }
        }
    }

    std::mutex mutex_;
    Socket socket_ = kInvalidSocket;
    sockaddr_in server_{};
    dc2_coop_v5::Role role_ = dc2_coop_v5::Role::None;
    uint32_t session_ = 0u;
    uint32_t sequence_ = 0u;
    std::deque<std::pair<std::vector<uint8_t>, uint8_t>> modInbox_;
    dc2_coop_v5::InputFrame inputs_[2]{};
    dc2::InputEdges edges_[2];
    dc2::AuthorityInputScheduler<> scheduledInputs_[2];
    bool scheduledMode_[2]{};
    uint32_t scheduledTraceTick_[2]{};
    bool scheduledTraceSeen_[2]{};
    uint32_t inputSequence_[2]{};
    bool inputSequenceSeen_[2]{};
    uint32_t inputRoom_[2]{};
    Clock::time_point inputAt_[2]{};
    bool inputSeen_[2]{};
    Snapshot snapshot_{};
    dc2::SnapshotFreshness snapshotFreshness_;
    bool snapshotSeen_ = false;
    bool snapshotLogged_ = false;
    bool authoritySnapshotLogged_ = false;
    bool startAttempted_ = false;
    Clock::time_point lastHello_{};
    uint32_t localRoom_ = 0u;
#if defined(_WIN32)
    bool winsockReady_ = false;
#endif
};

Client &client()
{
    static Client value;
    return value;
}
}

bool active()
{
    static const bool value = enabledByEnvironment() &&
        parseRole() != dc2_coop_v5::Role::None;
    return value;
}

dc2_coop_v5::Role role()
{
    static const dc2_coop_v5::Role value =
        enabledByEnvironment() ? parseRole() : dc2_coop_v5::Role::None;
    return value;
}

bool isAuthority()
{
    return role() == dc2_coop_v5::Role::Authority;
}

void setLocalRoom(uint32_t room)
{
    client().setLocalRoom(room);
}

void submitLocalInput(uint16_t buttons, uint8_t leftX, uint8_t leftY,
                      uint8_t rightX, uint8_t rightY, uint32_t room)
{
    client().submitInput(buttons, leftX, leftY, rightX, rightY, room);
}

void pumpAuthority(uint32_t room)
{
    client().pumpAuthority(room);
}

bool latestAuthorityInput(uint32_t playerId, InputFrame &out, uint32_t maxAgeMs)
{
    return client().getInput(playerId, out, maxAgeMs);
}

bool sampleAuthorityInput(uint32_t playerId, uint32_t simulationTick,
                          uint32_t liveFrameTick, bool allowScheduled,
                          InputFrame &out, uint32_t maxAgeMs)
{
    return client().sampleInput(playerId, simulationTick, liveFrameTick,
                                allowScheduled, out, maxAgeMs);
}

void sealAuthorityInputTick(uint32_t simulationTick)
{
    client().sealInputTick(simulationTick);
}

uint16_t consumeAuthorityButtons(uint32_t playerId, uint32_t simulationTick, uint32_t maxAgeMs)
{
    return client().consumeButtons(playerId, simulationTick, maxAgeMs);
}

bool latestAuthorityRoom(uint32_t playerId, uint32_t &room, uint32_t maxAgeMs)
{
    return client().getInputRoom(playerId, room, maxAgeMs);
}

void publishSnapshot(uint32_t room, uint32_t tick, uint32_t floorSeed,
                     const SnapshotPlayer *players, uint16_t playerCount,
                     const SnapshotEntity *entities, uint16_t entityCount,
                     const dc2_coop_v5::SnapshotChest *chests)
{
    client().publish(room, tick, floorSeed, players, playerCount, entities, entityCount, chests);
}

bool latestSnapshot(Snapshot &out)
{
    return client().getSnapshot(out);
}

bool sendModMessage(const void *data, uint32_t bytes)
{
    return client().sendMod(data, bytes);
}

bool pollModMessage(std::vector<uint8_t> &out, uint8_t &senderRole)
{
    return client().pollMod(out, senderRole);
}

bool start()
{
    return client().startTransport();
}
}
