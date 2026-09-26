#pragma once
#include <cstddef>
#include <cstdint>
#include <cstring>
#include <cmath>
#include "dc2_coop_protocol_v5.h"

namespace dc2::adapter {
// Verified from _SET_TB_STATUS (0x264440), _SET_TB_ANGLE (0x2644c0),
// PutTreasureBox (0x28c550). These are observations, not loot commits.
struct ChestObservation {
    std::uint8_t status{};
    float lidAngle{};
    // CheckEvent (0x28cac0) only selects status 1. Other states are not
    // assumed to mean "opened": traps/mimics need their own lifecycle.
    bool interactable() const { return status == 1; }
};
inline bool readChest(const std::uint8_t* memory, std::size_t size,
                      std::uint32_t manager, std::uint32_t slot,
                      ChestObservation& output) {
    if (!memory || !manager || slot >= 24) return false;
    const std::uint64_t base = std::uint64_t(manager) + slot * 0x70ull;
    if (base + 0x65 > size) return false;
    ChestObservation value{};
    value.status = memory[base + 0x64];
    std::memcpy(&value.lidAngle, memory + base + 0x60, sizeof(float));
    if (!std::isfinite(value.lidAngle)) return false;
    output = value;
    return true;
}
inline bool readSelectedChest(const std::uint8_t* memory, std::size_t size,
                              std::uint32_t manager, std::uint32_t& slot,
                              ChestObservation& output) {
    // _SET_TB_STATUS selects manager+0xa9c; CheckEvent initializes it to -1.
    if (!memory || !manager || std::uint64_t(manager) + 0xaa0 > size) return false;
    std::uint32_t selected{};
    std::memcpy(&selected, memory + manager + 0xa9c, sizeof(selected));
    ChestObservation next{};
    if (!readChest(memory, size, manager, selected, next)) return false;
    slot = selected;
    output = next;
    return true;
}
inline bool collectChests(const std::uint8_t* memory, std::size_t size,
                          std::uint32_t manager,
                          dc2_coop_v5::SnapshotChest (&output)[dc2_coop_v5::kMaxChests]) {
    dc2_coop_v5::SnapshotChest next[dc2_coop_v5::kMaxChests]{};
    for (std::uint32_t slot = 0; slot < dc2_coop_v5::kMaxChests; ++slot) {
        ChestObservation observed{};
        if (!readChest(memory, size, manager, slot, observed)) return false;
        next[slot] = {observed.status, observed.lidAngle};
    }
    std::memcpy(output, next, sizeof(next));
    return true;
}
inline bool applyChests(std::uint8_t* memory, std::size_t size, std::uint32_t manager,
                        const dc2_coop_v5::SnapshotChest (&source)[dc2_coop_v5::kMaxChests]) {
    // Validate the complete destination and frame before any guest memory write.
    // Only presentation/interaction status is replicated, never reward metadata.
    if (!memory || !manager || std::uint64_t(manager) +
        (dc2_coop_v5::kMaxChests - 1) * 0x70ull + 0x65 > size) return false;
    for (const auto &chest : source)
        if (!std::isfinite(chest.lidAngle)) return false;
    for (std::uint32_t slot = 0; slot < dc2_coop_v5::kMaxChests; ++slot) {
        const auto base = std::size_t(manager) + slot * 0x70u;
        std::memcpy(memory + base + 0x60, &source[slot].lidAngle, sizeof(float));
        memory[base + 0x64] = source[slot].status;
    }
    return true;
}
}
