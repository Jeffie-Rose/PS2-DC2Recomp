#include "dc2_coop_net.h"
#include "dc2_coop_protocol_v5.h"

#include <cstddef>
#include <deque>

#include <chrono>
#include <cstdio>
#include <cstdlib>
#include <cstring>
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
#include <netdb.h>
#include <sys/socket.h>
#include <unistd.h>
#endif

namespace dc2_coop_net
{
namespace
{
constexpr uint32_t kMagic = 0x324F4344u; // "DCO2" in little endian.
constexpr uint16_t kVersion = 4u;
constexpr uint32_t kReady = 1u;

#pragma pack(push, 1)
struct WireState
{
    uint32_t magic;
    uint16_t version;
    uint8_t role;
    uint8_t reserved;
    uint32_t session;
    uint32_t sequence;
    uint32_t area;
    uint32_t flags;
    float x;
    float y;
    float z;
    float facing;
    uint32_t motion;
    float motionFrame;
    uint32_t worldRevision;
    uint16_t worldMap;
    uint16_t worldFloor;
    uint16_t entityCount;
    uint16_t worldReserved;
    EntityState entities[kMaxWorldEntities];
};
#pragma pack(pop)

static_assert(sizeof(EntityState) == 28u, "co-op entity packet layout changed");
static_assert(sizeof(WireState) == 732u, "co-op wire packet layout changed");

// Side-channel datagram: chat + mod messages ride the same v4 UDP transport.
// Distinguished from a state packet by length (state is exactly 732 bytes).
constexpr uint8_t kWireKindMod = 2u;
#pragma pack(push, 1)
struct WireMod
{
    uint32_t magic;
    uint16_t version;
    uint8_t role;
    uint8_t kind;
    uint32_t session;
    uint32_t sequence;
    uint16_t bytes;
    uint8_t payload[512];
};
#pragma pack(pop)

// Typed gameplay event datagram (chest/destructible/pickup replication).
constexpr uint8_t kWireKindEvent = 3u;
#pragma pack(push, 1)
struct WireEvent
{
    uint32_t magic;
    uint16_t version;
    uint8_t role;
    uint8_t kind;
    uint32_t session;
    uint32_t sequence;
    uint16_t type;
    uint16_t slot;
    int32_t value;
    float f0;
    uint32_t manager;
};
#pragma pack(pop)
static_assert(sizeof(WireEvent) == 32u, "co-op event packet layout changed");

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
    for (const unsigned char *p = reinterpret_cast<const unsigned char *>(text); p && *p; ++p)
    {
        hash ^= *p;
        hash *= 16777619u;
    }
    return hash;
}

Role parseRole()
{
    const char *value = std::getenv("DC2_COOP_ROLE");
    if (!value)
        return Role::None;
    if (std::strcmp(value, "host") == 0 || std::strcmp(value, "HOST") == 0 ||
        std::strcmp(value, "1") == 0)
        return Role::Host;
    if (std::strcmp(value, "guest") == 0 || std::strcmp(value, "GUEST") == 0 ||
        std::strcmp(value, "2") == 0)
        return Role::Guest;
    return Role::None;
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

    bool exchange(const PlayerState &local, PlayerState &remote,
                  const WorldState *publishedWorld,
                  WorldState *authoritativeWorld)
    {
        if (!ensureStarted())
            return false;

        WireState packet{};
        packet.magic = kMagic;
        packet.version = kVersion;
        packet.role = static_cast<uint8_t>(role());
        packet.session = session_;
        packet.sequence = ++sequence_;
        packet.area = local.area;
        packet.flags = local.flags | kReady;
        packet.x = local.x;
        packet.y = local.y;
        packet.z = local.z;
        packet.facing = local.facing;
        packet.motion = local.motion;
        packet.motionFrame = local.motionFrame;
        if (publishedWorld)
        {
            packet.worldRevision = publishedWorld->revision;
            packet.worldMap = publishedWorld->map;
            packet.worldFloor = publishedWorld->floor;
            packet.worldReserved = publishedWorld->reserved;
            packet.entityCount = publishedWorld->entityCount > kMaxWorldEntities
                ? static_cast<uint16_t>(kMaxWorldEntities)
                : publishedWorld->entityCount;
            for (uint16_t i = 0; i < packet.entityCount; ++i)
                packet.entities[i] = publishedWorld->entities[i];
        }

        sendto(socket_, reinterpret_cast<const char *>(&packet), sizeof(packet), 0,
               reinterpret_cast<const sockaddr *>(&server_), sizeof(server_));

        uint8_t buffer[sizeof(WireState)]{};
        bool received = false;
        for (;;)
        {
            sockaddr_in from{};
#if defined(_WIN32)
            int fromLen = sizeof(from);
#else
            socklen_t fromLen = sizeof(from);
#endif
            const int bytes = recvfrom(socket_, reinterpret_cast<char *>(buffer),
                                       sizeof(buffer), 0,
                                       reinterpret_cast<sockaddr *>(&from), &fromLen);
            if (bytes < 0)
                break;

            if (bytes == static_cast<int>(sizeof(WireState)))
            {
                WireState incoming{};
                std::memcpy(&incoming, buffer, sizeof(incoming));
                if (incoming.magic != kMagic || incoming.version != kVersion ||
                    incoming.session != session_ ||
                    incoming.role == static_cast<uint8_t>(role()) ||
                    incoming.sequence <= remoteSequence_)
                    continue;

                remoteSequence_ = incoming.sequence;
                remote.area = incoming.area;
                remote.flags = incoming.flags;
                remote.x = incoming.x;
                remote.y = incoming.y;
                remote.z = incoming.z;
                remote.facing = incoming.facing;
                remote.motion = incoming.motion;
                remote.motionFrame = incoming.motionFrame;
                // Both sides publish their local observation. The Guest consumes
                // the Host snapshot as authority; the Host uses the Guest snapshot
                // only as a damage proposal and never accepts its transforms.
                if (authoritativeWorld)
                {
                    authoritativeWorld->area = incoming.area;
                    authoritativeWorld->revision = incoming.worldRevision;
                    authoritativeWorld->map = incoming.worldMap;
                    authoritativeWorld->floor = incoming.worldFloor;
                    authoritativeWorld->reserved = incoming.worldReserved;
                    authoritativeWorld->entityCount = incoming.entityCount > kMaxWorldEntities
                        ? static_cast<uint16_t>(kMaxWorldEntities)
                        : incoming.entityCount;
                    for (uint16_t i = 0; i < authoritativeWorld->entityCount; ++i)
                        authoritativeWorld->entities[i] = incoming.entities[i];
                }
                received = true;
                continue;
            }

            if (bytes >= static_cast<int>(offsetof(WireMod, payload)))
            {
                WireMod mod{};
                std::memcpy(&mod, buffer,
                            static_cast<size_t>(bytes) < sizeof(mod)
                                ? static_cast<size_t>(bytes) : sizeof(mod));
                // Only consume the datagram when it really is a mod message; a
                // short event datagram must fall through to the event branch.
                if (mod.magic == kMagic && mod.version == kVersion &&
                    mod.session == session_ && mod.kind == kWireKindMod &&
                    mod.role != static_cast<uint8_t>(role()))
                {
                    const uint32_t count = mod.bytes > sizeof(mod.payload)
                        ? static_cast<uint32_t>(sizeof(mod.payload)) : mod.bytes;
                    if (count != 0u &&
                        bytes >= static_cast<int>(offsetof(WireMod, payload) + count) &&
                        modInbox_.size() < 64u)
                    {
                        modInbox_.emplace_back(
                            std::vector<uint8_t>(mod.payload, mod.payload + count), mod.role);
                    }
                    continue;
                }
            }

            if (bytes == static_cast<int>(sizeof(WireEvent)))
            {
                WireEvent event{};
                std::memcpy(&event, buffer, sizeof(event));
                if (event.magic == kMagic && event.version == kVersion &&
                    event.session == session_ && event.kind == kWireKindEvent &&
                    event.role != static_cast<uint8_t>(role()) &&
                    eventInbox_.size() < 64u)
                {
                    GameEvent out{};
                    out.type = event.type;
                    out.slot = event.slot;
                    out.value = event.value;
                    out.f0 = event.f0;
                    out.manager = event.manager;
                    eventInbox_.emplace_back(out, event.role);
                }
                continue;
            }
        }

        if (received && !remoteSeen_)
        {
            remoteSeen_ = true;
            std::fprintf(stderr, "[DC2:Session] remote player connected\n");
        }
        return received;
    }

    bool sendMod(const void *data, uint32_t bytes)
    {
        if (data == nullptr || bytes == 0u || bytes > sizeof(WireMod::payload) ||
            !ensureStarted())
            return false;
        WireMod packet{};
        packet.magic = kMagic;
        packet.version = kVersion;
        packet.role = static_cast<uint8_t>(role());
        packet.kind = kWireKindMod;
        packet.session = session_;
        packet.sequence = ++sequence_;
        packet.bytes = static_cast<uint16_t>(bytes);
        std::memcpy(packet.payload, data, bytes);
        sendto(socket_, reinterpret_cast<const char *>(&packet),
               static_cast<int>(offsetof(WireMod, payload) + bytes), 0,
               reinterpret_cast<const sockaddr *>(&server_), sizeof(server_));
        return true;
    }

    bool pollMod(std::vector<uint8_t> &out, uint8_t &senderRole)
    {
        if (modInbox_.empty())
            return false;
        out = std::move(modInbox_.front().first);
        senderRole = modInbox_.front().second;
        modInbox_.pop_front();
        return true;
    }

    bool sendGame(const GameEvent &event)
    {
        if (!ensureStarted())
            return false;
        WireEvent packet{};
        packet.magic = kMagic;
        packet.version = kVersion;
        packet.role = static_cast<uint8_t>(role());
        packet.kind = kWireKindEvent;
        packet.session = session_;
        packet.sequence = ++sequence_;
        packet.type = event.type;
        packet.slot = event.slot;
        packet.value = event.value;
        packet.f0 = event.f0;
        packet.manager = event.manager;
        sendto(socket_, reinterpret_cast<const char *>(&packet), sizeof(packet), 0,
               reinterpret_cast<const sockaddr *>(&server_), sizeof(server_));
        return true;
    }

    bool pollGame(GameEvent &out, uint8_t &senderRole)
    {
        if (eventInbox_.empty())
            return false;
        out = eventInbox_.front().first;
        senderRole = eventInbox_.front().second;
        eventInbox_.pop_front();
        return true;
    }

private:
    bool ensureStarted()
    {
        if (startAttempted_)
            return socket_ != kInvalidSocket;
        startAttempted_ = true;
        if (role() == Role::None)
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
            std::string value(server);
            const size_t colon = value.rfind(':');
            if (colon != std::string::npos)
            {
                host = value.substr(0, colon);
                const int parsed = std::atoi(value.c_str() + colon + 1u);
                if (parsed > 0 && parsed <= 65535)
                    port = static_cast<uint16_t>(parsed);
            }
            else if (!value.empty())
            {
                host = value;
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
            std::fprintf(stderr, "[DC2:Session] invalid server address '%s'\n", host.c_str());
            return false;
        }

        const char *sessionName = std::getenv("DC2_COOP_SESSION");
        session_ = fnv1a(sessionName && *sessionName ? sessionName : "local");
        std::fprintf(stderr, "[DC2:Session] %s client -> %s:%u session=0x%08x\n",
                     role() == Role::Host ? "host/player-1" : "guest/player-2",
                     host.c_str(), static_cast<unsigned>(port), session_);
        return true;
    }

    Socket socket_ = kInvalidSocket;
    sockaddr_in server_{};
    uint32_t session_ = 0u;
    uint32_t sequence_ = 0u;
    uint32_t remoteSequence_ = 0u;
    std::deque<std::pair<std::vector<uint8_t>, uint8_t>> modInbox_;
    std::deque<std::pair<GameEvent, uint8_t>> eventInbox_;
    bool startAttempted_ = false;
    bool remoteSeen_ = false;
#if defined(_WIN32)
    bool winsockReady_ = false;
#endif
};

Client &clientInstance()
{
    static Client value;
    return value;
}
}

Role role()
{
    static const Role value = parseRole();
    return value;
}

bool active()
{
    return role() != Role::None;
}

bool exchange(const PlayerState &local, PlayerState &remote,
              const WorldState *publishedWorld,
              WorldState *authoritativeWorld)
{
    return clientInstance().exchange(local, remote, publishedWorld, authoritativeWorld);
}

bool sendModMessage(const void *data, uint32_t bytes)
{
    return clientInstance().sendMod(data, bytes);
}

bool pollModMessage(std::vector<uint8_t> &out, uint8_t &senderRole)
{
    return clientInstance().pollMod(out, senderRole);
}

bool sendGameEvent(const GameEvent &event)
{
    return clientInstance().sendGame(event);
}

bool pollGameEvent(GameEvent &out, uint8_t &senderRole)
{
    return clientInstance().pollGame(out, senderRole);
}
}
