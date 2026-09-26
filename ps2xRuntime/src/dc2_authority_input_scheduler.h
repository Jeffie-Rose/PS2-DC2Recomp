#pragma once

#include <array>
#include <cstddef>
#include <cstdint>

namespace dc2 {

// Complete controller state consumed by one authority-owned player stream.
// A scheduler instance deliberately has no player identity; callers own one
// instance per player so both streams follow the same deterministic contract.
struct AuthorityInputState {
    std::uint16_t buttons = 0u;
    std::uint8_t leftX = 0x80u;
    std::uint8_t leftY = 0x80u;
    std::uint8_t rightX = 0x80u;
    std::uint8_t rightY = 0x80u;

    friend constexpr bool operator==(const AuthorityInputState &lhs,
                                     const AuthorityInputState &rhs) noexcept {
        return lhs.buttons == rhs.buttons &&
               lhs.leftX == rhs.leftX && lhs.leftY == rhs.leftY &&
               lhs.rightX == rhs.rightX && lhs.rightY == rhs.rightY;
    }

    friend constexpr bool operator!=(const AuthorityInputState &lhs,
                                     const AuthorityInputState &rhs) noexcept {
        return !(lhs == rhs);
    }
};

struct ScheduledAuthorityInput {
    std::uint32_t targetTick = 0u;
    AuthorityInputState state{};
    // Zero preserves legacy arrival-ordered replacement. A non-zero sequence
    // opts this target tick into wrap-safe revision ordering.
    std::uint32_t sequence = 0u;
};

enum class AuthorityInputScheduleResult : std::uint8_t {
    Inserted,
    Replaced,
    RejectedStale,
    RejectedStaleSequence,
    RejectedTooFarFuture,
    RejectedCapacity,
};

// Fixed-storage, tick-indexed input queue. Tick ordering uses the conventional
// high-bit delta rule, so every compared tick must remain within half of the
// uint32 range. MaxFutureTicks enforces a much smaller unambiguous window for
// queued samples while still allowing the cursor to cross UINT32_MAX.
template <std::size_t Capacity = 64u, std::uint32_t MaxFutureTicks = 600u,
          std::uint32_t MaxHoldTicks = 120u>
class AuthorityInputScheduler {
    static_assert(Capacity > 0u, "authority input capacity must be non-zero");
    static_assert(MaxFutureTicks < 0x80000000u,
                  "future window must fit the wrap-safe tick interval");
    static_assert(MaxHoldTicks < 0x80000000u,
                  "hold window must fit the wrap-safe tick interval");

public:
    explicit constexpr AuthorityInputScheduler(
        std::uint32_t initialTick = 0u) noexcept
        : cursorTick_(initialTick) {}

    // Before the first sampleAt call, targetTick may equal initialTick. Once a
    // tick has been sampled, that tick is sealed: late replacement would break
    // sampleAt's within-tick idempotence and is therefore rejected as stale.
    [[nodiscard]] constexpr AuthorityInputScheduleResult schedule(
        const ScheduledAuthorityInput &sample) noexcept {
        if (isStale(sample.targetTick))
            return AuthorityInputScheduleResult::RejectedStale;

        if (forwardDistance(cursorTick_, sample.targetTick) > MaxFutureTicks)
            return AuthorityInputScheduleResult::RejectedTooFarFuture;

        std::size_t position = 0u;
        while (position < count_ &&
               tickBefore(entries_[position].targetTick, sample.targetTick)) {
            ++position;
        }

        if (position < count_ &&
            entries_[position].targetTick == sample.targetTick) {
            const std::uint32_t currentSequence = entries_[position].sequence;
            // Once a target tick has a sequence, an unversioned arrival cannot
            // downgrade it. This also makes one versioned and one unversioned
            // arrival resolve identically regardless of insertion order.
            if (currentSequence != 0u &&
                (sample.sequence == 0u ||
                 !serialAfter(sample.sequence, currentSequence))) {
                return AuthorityInputScheduleResult::RejectedStaleSequence;
            }
            entries_[position] = sample;
            return AuthorityInputScheduleResult::Replaced;
        }

        if (count_ == Capacity)
            return AuthorityInputScheduleResult::RejectedCapacity;

        for (std::size_t index = count_; index > position; --index)
            entries_[index] = entries_[index - 1u];
        entries_[position] = sample;
        ++count_;
        return AuthorityInputScheduleResult::Inserted;
    }

    [[nodiscard]] constexpr AuthorityInputScheduleResult schedule(
        std::uint32_t targetTick,
        const AuthorityInputState &state,
        std::uint32_t sequence = 0u) noexcept {
        return schedule(ScheduledAuthorityInput{targetTick, state, sequence});
    }

    // Applies every queued sample due at or before tick in deterministic target
    // order. Skipped simulation ticks therefore resolve to the newest due full
    // state. Re-reading the same tick, or accidentally reading an older tick,
    // never mutates the scheduler.
    [[nodiscard]] constexpr AuthorityInputState sampleAt(
        std::uint32_t tick) noexcept {
        if (sampled_ && !tickAfter(tick, cursorTick_))
            return current_;
        if (!sampled_ && tickBefore(tick, cursorTick_))
            return current_;

        cursorTick_ = tick;
        sampled_ = true;

        while (count_ > 0u && !tickAfter(entries_[0].targetTick, tick)) {
            current_ = entries_[0].state;
            heldSinceTick_ = entries_[0].targetTick;
            holdActive_ = !isNeutral(current_);
            eraseFront();
        }

        // The state is returned for at most MaxHoldTicks consecutive authority
        // ticks, including its target tick. Expiry never drains future input.
        if (holdActive_ &&
            forwardDistance(heldSinceTick_, tick) >= MaxHoldTicks) {
            current_ = {};
            holdActive_ = false;
        }
        return current_;
    }

    constexpr void reset(std::uint32_t initialTick = 0u) noexcept {
        entries_ = {};
        count_ = 0u;
        cursorTick_ = initialTick;
        sampled_ = false;
        current_ = {};
        heldSinceTick_ = 0u;
        holdActive_ = false;
    }

    // Use at a room/mode boundary reached during currentTick. Unlike reset(),
    // this leaves that tick sampled and therefore sealed against late arrivals.
    constexpr void resetSealed(std::uint32_t currentTick) noexcept {
        reset(currentTick);
        sampled_ = true;
    }

    [[nodiscard]] constexpr std::size_t pendingCount() const noexcept {
        return count_;
    }

    [[nodiscard]] static constexpr std::size_t capacity() noexcept {
        return Capacity;
    }

    [[nodiscard]] static constexpr std::uint32_t maxFutureTicks() noexcept {
        return MaxFutureTicks;
    }

    [[nodiscard]] static constexpr std::uint32_t maxHoldTicks() noexcept {
        return MaxHoldTicks;
    }

    [[nodiscard]] constexpr bool hasSampled() const noexcept {
        return sampled_;
    }

    [[nodiscard]] constexpr std::uint32_t cursorTick() const noexcept {
        return cursorTick_;
    }

    [[nodiscard]] constexpr AuthorityInputState current() const noexcept {
        return current_;
    }

private:
    [[nodiscard]] static constexpr bool tickBefore(std::uint32_t lhs,
                                                   std::uint32_t rhs) noexcept {
        return ((lhs - rhs) & 0x80000000u) != 0u;
    }

    [[nodiscard]] static constexpr bool tickAfter(std::uint32_t lhs,
                                                  std::uint32_t rhs) noexcept {
        return tickBefore(rhs, lhs);
    }

    [[nodiscard]] static constexpr bool serialAfter(
        std::uint32_t lhs, std::uint32_t rhs) noexcept {
        return lhs != rhs && ((lhs - rhs) & 0x80000000u) == 0u;
    }

    [[nodiscard]] static constexpr std::uint32_t forwardDistance(
        std::uint32_t from, std::uint32_t to) noexcept {
        return to - from;
    }

    [[nodiscard]] constexpr bool isStale(std::uint32_t targetTick) const noexcept {
        if (sampled_)
            return !tickAfter(targetTick, cursorTick_);
        return tickBefore(targetTick, cursorTick_);
    }

    [[nodiscard]] static constexpr bool isNeutral(
        const AuthorityInputState &state) noexcept {
        return state == AuthorityInputState{};
    }

    constexpr void eraseFront() noexcept {
        for (std::size_t index = 1u; index < count_; ++index)
            entries_[index - 1u] = entries_[index];
        --count_;
    }

    std::array<ScheduledAuthorityInput, Capacity> entries_{};
    std::size_t count_ = 0u;
    std::uint32_t cursorTick_ = 0u;
    bool sampled_ = false;
    AuthorityInputState current_{};
    std::uint32_t heldSinceTick_ = 0u;
    bool holdActive_ = false;
};

} // namespace dc2
