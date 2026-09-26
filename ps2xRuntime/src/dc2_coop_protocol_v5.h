#pragma once

// Wire contract for the staged dedicated-authority path.  The currently
// playable two-process mode still uses dc2_coop_net.{h,cpp} protocol v4.

#include <cstdint>

namespace dc2_coop_v5
{
constexpr uint32_t kMagic = 0x324F4344u;
constexpr uint16_t kVersion = 5u;
constexpr uint32_t kMaxPlayers = 2u;
constexpr uint32_t kMaxEntities = 24u;
constexpr uint32_t kMaxChests = 24u;
constexpr uint32_t kMaxDatagram = 1200u;

// Opt-in deterministic trace input. When set, InputFrame::acknowledgedTick is
// the exact authority simulation/snapshot tick at which the complete pad state
// becomes active. Without this bit the field retains its ordinary snapshot-ACK
// meaning and the existing arrival-driven live-input path is unchanged.
constexpr uint16_t kInputScheduled = 0x0001u;

enum class Role : uint8_t
{
    None = 0,
    PlayerOne = 1,
    PlayerTwo = 2,
    Authority = 3,
};

enum class MessageKind : uint8_t
{
    Input = 1,
    Snapshot = 2,
    TransitionRequest = 3,
    TransitionResponse = 4,
    Hello = 5,
    Mod = 6, // opaque mod payload; relayed verbatim, never parsed by the engine
};

#pragma pack(push, 1)
struct Header
{
    uint32_t magic;
    uint16_t version;
    uint8_t kind;
    uint8_t role;
    uint32_t session;
    uint32_t sequence;
    uint32_t tick;
    uint32_t room;
    uint32_t payloadBytes;
    uint32_t payloadCrc32;
};

struct InputFrame
{
    uint32_t playerId;
    uint16_t buttons;
    uint16_t commandFlags;
    uint8_t leftX;
    uint8_t leftY;
    uint8_t rightX;
    uint8_t rightY;
    uint32_t acknowledgedTick;
};

struct SnapshotPrefix
{
    uint32_t floorSeed;
    uint16_t playerCount;
    uint16_t entityCount;
};

struct SnapshotPlayer
{
    uint32_t playerId;
    uint32_t flags;
    float x;
    float y;
    float z;
    float facing;
    uint32_t motion;
    float motionFrame;
    int32_t hp;
    int32_t maxHp;
};

struct SnapshotEntity
{
    uint64_t entityId;
    uint16_t spawnSlot;
    uint16_t flags;
    float x;
    float y;
    float z;
    float facing;
    int32_t hp;
    int32_t maxHp;
    uint32_t state;
};

// Optional full chest tail, ordered by native slot. Identity is scoped to
// the enclosing room/floor seed. No inventory or reward commit is implied.
struct SnapshotChest
{
    uint8_t status;
    float lidAngle;
};

struct TransitionRequest
{
    uint32_t requestId;
    uint16_t mapId;
    uint16_t floorId;
    uint32_t sourceRoom;
    uint32_t flags;
};

struct TransitionResponse
{
    uint32_t requestId;
    uint8_t targetRole;
    uint8_t accepted;
    uint16_t reason;
    uint32_t destinationRoom;
    uint32_t floorSeed;
};
#pragma pack(pop)

constexpr uint64_t stableEntityId(uint32_t room, uint16_t floorSeed,
                                  uint16_t spawnSlot)
{
    return (static_cast<uint64_t>(room) << 32u) |
           (static_cast<uint64_t>(floorSeed) << 16u) |
           static_cast<uint64_t>(spawnSlot);
}

static_assert(sizeof(Header) == 32u, "v5 header layout changed");
static_assert(sizeof(InputFrame) == 16u, "v5 input layout changed");
static_assert(sizeof(SnapshotPrefix) == 8u, "v5 snapshot prefix layout changed");
static_assert(sizeof(SnapshotPlayer) == 40u, "v5 player layout changed");
static_assert(sizeof(SnapshotEntity) == 40u, "v5 entity layout changed");
static_assert(sizeof(SnapshotChest) == 5u, "v5 chest layout changed");
static_assert(1080u + kMaxChests * sizeof(SnapshotChest) == kMaxDatagram,
              "full chest tail must fit the existing datagram limit");
static_assert(sizeof(TransitionRequest) == 16u, "v5 transition request layout changed");
static_assert(sizeof(TransitionResponse) == 16u, "v5 transition response layout changed");
static_assert(sizeof(Header) + sizeof(SnapshotPrefix) +
              kMaxPlayers * sizeof(SnapshotPlayer) +
              kMaxEntities * sizeof(SnapshotEntity) == 1080u,
              "v5 maximum snapshot must stay below safe UDP size");
}
