#pragma once

#include <cstdint>
#include <vector>

namespace dc2_coop_net
{
constexpr uint32_t kMaxWorldEntities = 24u;

enum class Role : uint8_t
{
    None = 0,
    Host = 1,
    Guest = 2,
};

struct PlayerState
{
    uint32_t area = 0;
    uint32_t flags = 0;
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float facing = 0.0f;
    uint32_t motion = 0;
    float motionFrame = 0.0f;
};

struct EntityState
{
    uint16_t slot = 0;
    uint16_t flags = 0;
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
    float facing = 0.0f;
    int32_t hp = 0;
    int32_t maxHp = 0;
};

// Host-authored state for one room/zone. The first implementation publishes
// dungeon scene actors (monster slots 8+) so both clients observe one encounter
// layout instead of running two unrelated copies. Reliable events and durable
// room state will be layered on this snapshot channel.
struct WorldState
{
    uint32_t area = 0;
    uint32_t revision = 0;
    uint16_t map = 0;
    uint16_t floor = 0;
    uint16_t entityCount = 0;
    uint16_t reserved = 0;
    EntityState entities[kMaxWorldEntities]{};
};

Role role();
bool active();

// Sends this process's locally authoritative player state and drains any newer
// state for the other player. This is deliberately non-blocking: a stopped or
// disconnected session server must never stall the emulated EE thread.
bool exchange(const PlayerState &local, PlayerState &remote,
              const WorldState *publishedWorld = nullptr,
              WorldState *authoritativeWorld = nullptr);

// ---- Mod/chat side channel (rides the same v4 UDP transport) --------------
// Opaque payloads relayed to the peer. The engine never parses them; the Lua
// runtime consumes them (chat/roster, mod messages). Received payloads land in
// a bounded inbox polled once per guest frame.
bool sendModMessage(const void *data, uint32_t bytes);
bool pollModMessage(std::vector<uint8_t> &out, uint8_t &senderRole);

// ---- Gameplay event side channel ------------------------------------------
// Small typed events replicated peer-to-peer (chest opens, destructibles,
// pickups). The opener's local game produced the state; the peer replays the
// same presentation state. No reward metadata is transmitted.
enum class GameEventType : uint16_t
{
    Chest = 1,
    Destructible = 2,
    Pickup = 3,
};

struct GameEvent
{
    uint16_t type = 0;
    uint16_t slot = 0;
    int32_t value = 0;
    float f0 = 0.0f;
    uint32_t manager = 0;
};

bool sendGameEvent(const GameEvent &event);
bool pollGameEvent(GameEvent &out, uint8_t &senderRole);
}
