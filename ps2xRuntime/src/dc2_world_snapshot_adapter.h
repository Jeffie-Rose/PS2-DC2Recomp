#pragma once
#include "dc2_coop_net.h"
#include "dc2_coop_v5_net.h"
#include <cmath>

namespace dc2::adapter {
// The current visual adapter requires the complete fixed-role player set.
// Reject partial or malformed frames before changing either players or world.
inline bool validPlayers(const dc2_coop_v5_net::Snapshot &source) {
    if (source.playerCount != dc2_coop_v5::kMaxPlayers) return false;
    bool seen[dc2_coop_v5::kMaxPlayers]{};
    for (std::uint16_t i = 0; i < source.playerCount; ++i) {
        const auto &player = source.players[i];
        if (player.playerId == 0 || player.playerId > dc2_coop_v5::kMaxPlayers ||
            seen[player.playerId - 1] || !std::isfinite(player.x) ||
            !std::isfinite(player.y) || !std::isfinite(player.z) ||
            !std::isfinite(player.facing) || !std::isfinite(player.motionFrame) ||
            player.motionFrame < 0.0f || player.motionFrame >= 100000.0f ||
            player.motion >= 4096u) return false;
        seen[player.playerId - 1] = true;
    }
    return true;
}
// Validate completely before replacing a compatibility world. Never append a
// dedicated snapshot onto entities supplied by a different authority.
inline bool convertWorld(const dc2_coop_v5_net::Snapshot &source,
                         std::uint16_t map, std::uint16_t floor,
                         dc2_coop_net::WorldState &destination) {
    if (source.entityCount > dc2_coop_net::kMaxWorldEntities) return false;
    dc2_coop_net::WorldState next{};
    next.area = source.room;
    next.revision = source.tick;
    next.map = map; next.floor = floor;
    next.reserved = static_cast<std::uint16_t>(source.floorSeed);
    bool occupied[dc2_coop_net::kMaxWorldEntities]{};
    for (std::uint16_t i = 0; i < source.entityCount; ++i) {
        const auto &item = source.entities[i];
        const auto slot = (item.flags & (1u << 8))
            ? static_cast<std::uint16_t>(item.state & 0xffffu) : item.spawnSlot;
        if (slot >= dc2_coop_net::kMaxWorldEntities || occupied[slot] ||
            !item.entityId || item.entityId != dc2_coop_v5::stableEntityId(
                source.room, static_cast<std::uint16_t>(source.floorSeed), item.spawnSlot) ||
            !std::isfinite(item.x) || !std::isfinite(item.y) || !std::isfinite(item.z) ||
            !std::isfinite(item.facing)) return false;
        occupied[slot] = true;
        next.entities[next.entityCount++] = {slot, item.flags, item.x, item.y,
                                             item.z, item.facing, item.hp, item.maxHp};
    }
    destination = next;
    return true;
}
}
