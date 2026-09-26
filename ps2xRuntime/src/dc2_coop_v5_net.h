#pragma once

#include "dc2_coop_protocol_v5.h"

#include <cstdint>
#include <vector>

namespace dc2_coop_v5_net
{
using dc2_coop_v5::InputFrame;
using dc2_coop_v5::SnapshotEntity;
using dc2_coop_v5::SnapshotPlayer;

struct Snapshot
{
    uint32_t sequence = 0u;
    uint32_t tick = 0u;
    uint32_t room = 0u;
    uint32_t floorSeed = 0u;
    uint16_t playerCount = 0u;
    uint16_t entityCount = 0u;
    SnapshotPlayer players[dc2_coop_v5::kMaxPlayers]{};
    SnapshotEntity entities[dc2_coop_v5::kMaxEntities]{};
    bool hasChests = false;
    dc2_coop_v5::SnapshotChest chests[dc2_coop_v5::kMaxChests]{};
};

// V5 is opt-in with DC2_COOP_V5=1 while the playable v4 path remains as a
// fallback. DC2_COOP_ROLE selects host/player 1, guest/player 2, or authority.
bool active();
dc2_coop_v5::Role role();
bool isAuthority();

// The EE thread publishes the room it is actually simulating. The next input
// packet carries this destination so Role 3 can enter the same room directly.
void setLocalRoom(uint32_t room);

// Visible processes call this once per present tick with their locally sampled
// controller. It also drains authoritative snapshots without blocking.
void submitLocalInput(uint16_t buttons, uint8_t leftX, uint8_t leftY,
                      uint8_t rightX, uint8_t rightY, uint32_t room = 0u);

// The hidden authority calls pumpAuthority from its present thread, then reads
// the newest inputs. Inputs expire after maxAgeMs so packet loss can never leave
// a held attack or direction stuck forever.
void pumpAuthority(uint32_t room = 0u);
// Atomically sample the complete controller state for one authority simulation
// tick. Ordinary packets retain the live arrival/edge behavior above. Packets
// carrying kInputScheduled are instead applied at acknowledgedTick and are
// idempotent when either native pad hook reads the same tick repeatedly.
bool sampleAuthorityInput(uint32_t playerId, uint32_t simulationTick,
                          uint32_t liveFrameTick, bool allowScheduled,
                          InputFrame &out, uint32_t maxAgeMs = 250u);
// Frame-boundary guard: silently seals a scheduled tick that published without
// any native pad read so a due pulse can never leak into a later snapshot.
void sealAuthorityInputTick(uint32_t simulationTick);
bool latestAuthorityInput(uint32_t playerId, InputFrame &out,
                          uint32_t maxAgeMs = 250u);
// EE pad-read only; do not consume transitions from the presentation thread.
uint16_t consumeAuthorityButtons(uint32_t playerId, uint32_t simulationTick,
                                 uint32_t maxAgeMs = 250u);
bool latestAuthorityRoom(uint32_t playerId, uint32_t &room,
                         uint32_t maxAgeMs = 1000u);

// Role 3 publishes after its canonical DC2 simulation step. Visual clients can
// retrieve the newest CRC-validated snapshot from their EE thread.
void publishSnapshot(uint32_t room, uint32_t tick, uint32_t floorSeed,
                     const SnapshotPlayer *players, uint16_t playerCount,
                     const SnapshotEntity *entities, uint16_t entityCount,
                     const dc2_coop_v5::SnapshotChest *chests = nullptr);
bool latestSnapshot(Snapshot &out);

// ---- Mod message channel -------------------------------------------------
// Opaque payloads relayed over the same v5 transport. The engine never parses
// them; they are delivered to the Lua runtime (dc2.hook("net_message", ...)).
// Received messages land in a small bounded inbox and are polled once per guest
// frame, so a Lua handler may safely call sendModMessage without re-entering the
// transport mutex.
bool sendModMessage(const void *data, uint32_t bytes);
bool pollModMessage(std::vector<uint8_t> &out, uint8_t &senderRole);

// Opens the transport on demand. Normally the first input submit does this from
// gameplay; scripted mods/tests can call it directly.
bool start();
}
