#include "dc2_authority_input_scheduler.h"

#include <cstdint>
#include <iostream>
#include <limits>

namespace {

using dc2::AuthorityInputScheduleResult;
using dc2::AuthorityInputScheduler;
using dc2::AuthorityInputState;

int failures = 0;

void expect(bool condition, const char *message) {
    if (condition)
        return;
    std::cerr << "FAIL: " << message << '\n';
    ++failures;
}

AuthorityInputState state(std::uint16_t buttons, std::uint8_t leftX,
                          std::uint8_t leftY, std::uint8_t rightX,
                          std::uint8_t rightY) {
    return AuthorityInputState{buttons, leftX, leftY, rightX, rightY};
}

void testNeutralInitialState() {
    AuthorityInputScheduler<> scheduler;
    const AuthorityInputState expected{};

    expect(scheduler.current() == expected,
           "new scheduler must expose neutral controller state");
    expect(scheduler.sampleAt(0u) == expected,
           "first unscheduled tick must sample neutral");
    expect(scheduler.sampleAt(0u) == expected,
           "same-tick neutral sample must be idempotent");
    expect(scheduler.pendingCount() == 0u,
           "neutral scheduler must have no pending samples");
}

void testOutOfOrderInsertionAndDeterministicApplication() {
    AuthorityInputScheduler<8u, 32u> scheduler(9u);
    const auto at10 = state(0x0010u, 1u, 2u, 3u, 4u);
    const auto at11 = state(0x0020u, 5u, 6u, 7u, 8u);
    const auto at12 = state(0x0040u, 9u, 10u, 11u, 12u);

    expect(scheduler.schedule(12u, at12) ==
               AuthorityInputScheduleResult::Inserted,
           "future sample should insert");
    expect(scheduler.schedule(10u, at10) ==
               AuthorityInputScheduleResult::Inserted,
           "earlier out-of-order sample should insert");
    expect(scheduler.schedule(11u, at11) ==
               AuthorityInputScheduleResult::Inserted,
           "middle out-of-order sample should insert");

    expect(scheduler.sampleAt(9u) == AuthorityInputState{},
           "state must stay neutral before the first target tick");
    expect(scheduler.sampleAt(10u) == at10,
           "tick 10 must apply its exact buttons and axes");
    expect(scheduler.sampleAt(11u) == at11,
           "tick 11 must apply its exact buttons and axes");
    expect(scheduler.sampleAt(12u) == at12,
           "tick 12 must apply its exact buttons and axes");
    expect(scheduler.sampleAt(13u) == at12,
           "last full state must remain held without a new sample");
    expect(scheduler.pendingCount() == 0u,
           "all due samples must be removed from bounded storage");
}

void testSameTickReplacement() {
    AuthorityInputScheduler<2u, 16u> scheduler;
    const auto original = state(1u, 10u, 20u, 30u, 40u);
    const auto replacement = state(2u, 50u, 60u, 70u, 80u);

    expect(scheduler.schedule(4u, original) ==
               AuthorityInputScheduleResult::Inserted,
           "first same-tick candidate should insert");
    expect(scheduler.schedule(4u, replacement) ==
               AuthorityInputScheduleResult::Replaced,
           "new sample for an unconsumed tick should replace the old sample");
    expect(scheduler.pendingCount() == 1u,
           "same-tick replacement must not consume extra capacity");
    expect(scheduler.sampleAt(4u) == replacement,
           "replacement must be the only state applied at its tick");
}

void testVersionedSameTickReplacement() {
    AuthorityInputScheduler<4u, 16u> scheduler;
    const auto original = state(1u, 10u, 20u, 30u, 40u);
    const auto stale = state(2u, 11u, 21u, 31u, 41u);
    const auto newest = state(3u, 12u, 22u, 32u, 42u);

    expect(scheduler.schedule(4u, original, 10u) ==
               AuthorityInputScheduleResult::Inserted,
           "first versioned sample should insert");
    expect(scheduler.schedule(4u, stale, 10u) ==
               AuthorityInputScheduleResult::RejectedStaleSequence,
           "equal non-zero sequence must be rejected");
    expect(scheduler.schedule(4u, stale, 9u) ==
               AuthorityInputScheduleResult::RejectedStaleSequence,
           "older non-zero sequence must be rejected");
    expect(scheduler.schedule(4u, stale) ==
               AuthorityInputScheduleResult::RejectedStaleSequence,
           "unversioned arrival must not downgrade a versioned target");
    expect(scheduler.schedule(4u, newest, 11u) ==
               AuthorityInputScheduleResult::Replaced,
           "newer non-zero sequence must replace the target");
    expect(scheduler.pendingCount() == 1u,
           "rejected versioned replacements must not alter queue size");
    expect(scheduler.sampleAt(4u) == newest,
           "newest sequence must determine the applied state");

    AuthorityInputScheduler<2u, 16u> unversionedFirst;
    AuthorityInputScheduler<2u, 16u> versionedFirst;
    expect(unversionedFirst.schedule(5u, original) ==
               AuthorityInputScheduleResult::Inserted,
           "unversioned-first fixture should insert");
    expect(unversionedFirst.schedule(5u, newest, 7u) ==
               AuthorityInputScheduleResult::Replaced,
           "versioned sample must replace an unversioned target");
    expect(versionedFirst.schedule(5u, newest, 7u) ==
               AuthorityInputScheduleResult::Inserted,
           "versioned-first fixture should insert");
    expect(versionedFirst.schedule(5u, original) ==
               AuthorityInputScheduleResult::RejectedStaleSequence,
           "unversioned sample must lose regardless of arrival order");
    expect(unversionedFirst.sampleAt(5u) == newest &&
               versionedFirst.sampleAt(5u) == newest,
           "mixed versioned arrivals must resolve deterministically");
}

void testSequenceWrap() {
    constexpr std::uint32_t max = std::numeric_limits<std::uint32_t>::max();
    AuthorityInputScheduler<2u, 16u> scheduler;
    const auto beforeWrap = state(1u, 1u, 2u, 3u, 4u);
    const auto atWrap = state(2u, 5u, 6u, 7u, 8u);
    const auto afterWrap = state(3u, 9u, 10u, 11u, 12u);

    expect(scheduler.schedule(6u, beforeWrap, max - 1u) ==
               AuthorityInputScheduleResult::Inserted,
           "pre-wrap sequence should insert");
    expect(scheduler.schedule(6u, atWrap, max) ==
               AuthorityInputScheduleResult::Replaced,
           "next pre-wrap sequence should replace");
    expect(scheduler.schedule(6u, afterWrap, 1u) ==
               AuthorityInputScheduleResult::Replaced,
           "non-zero sequence after wrap must compare as newer");
    expect(scheduler.schedule(6u, beforeWrap, max) ==
               AuthorityInputScheduleResult::RejectedStaleSequence,
           "pre-wrap sequence must be stale after wrap");
    expect(scheduler.schedule(6u, atWrap, 1u) ==
               AuthorityInputScheduleResult::RejectedStaleSequence,
           "equal post-wrap sequence must be rejected");
    expect(scheduler.sampleAt(6u) == afterWrap,
           "wrap-safe newest sequence must be applied");
}

void testBoundedCapacity() {
    AuthorityInputScheduler<2u, 16u> scheduler;
    const auto first = state(1u, 1u, 1u, 1u, 1u);
    const auto second = state(2u, 2u, 2u, 2u, 2u);
    const auto replacement = state(3u, 3u, 3u, 3u, 3u);

    expect(scheduler.capacity() == 2u,
           "reported capacity must match fixed template capacity");
    expect(scheduler.schedule(1u, first) ==
               AuthorityInputScheduleResult::Inserted,
           "first bounded sample should insert");
    expect(scheduler.schedule(2u, second) ==
               AuthorityInputScheduleResult::Inserted,
           "second bounded sample should insert");
    expect(scheduler.schedule(3u, first) ==
               AuthorityInputScheduleResult::RejectedCapacity,
           "full scheduler must reject another distinct tick");
    expect(scheduler.schedule(1u, replacement) ==
               AuthorityInputScheduleResult::Replaced,
           "full scheduler must still permit same-tick replacement");
    expect(scheduler.pendingCount() == 2u,
           "capacity rejection and replacement must preserve queue size");
    expect(scheduler.sampleAt(1u) == replacement,
           "replacement in a full scheduler must remain deterministic");
    expect(scheduler.sampleAt(2u) == second,
           "capacity rejection must not disturb later queued state");
}

void testStaleAndFutureRejection() {
    AuthorityInputScheduler<4u, 8u> scheduler(100u);
    const auto sample = state(7u, 7u, 7u, 7u, 7u);

    expect(scheduler.maxFutureTicks() == 8u,
           "reported future window must match the template bound");
    expect(scheduler.schedule(99u, sample) ==
               AuthorityInputScheduleResult::RejectedStale,
           "sample older than the initial cursor must be rejected");
    expect(scheduler.schedule(100u, sample) ==
               AuthorityInputScheduleResult::Inserted,
           "initial cursor tick may be scheduled before it is sampled");
    expect(scheduler.schedule(109u, sample) ==
               AuthorityInputScheduleResult::RejectedTooFarFuture,
           "sample beyond the configured future window must be rejected");
    expect(scheduler.schedule(108u, sample) ==
               AuthorityInputScheduleResult::Inserted,
           "sample on the inclusive future boundary must be accepted");

    expect(scheduler.sampleAt(100u) == sample,
           "initial-tick sample must apply when the cursor is first read");
    expect(scheduler.schedule(100u, {}) ==
               AuthorityInputScheduleResult::RejectedStale,
           "sampled tick must be sealed against late replacement");
    expect(scheduler.schedule(99u, {}) ==
               AuthorityInputScheduleResult::RejectedStale,
           "older tick must remain stale after sampling starts");
}

void testWithinTickIdempotenceAndSkippedTicks() {
    AuthorityInputScheduler<8u, 32u> scheduler;
    const auto early = state(1u, 10u, 11u, 12u, 13u);
    const auto middle = state(2u, 20u, 21u, 22u, 23u);
    const auto latest = state(3u, 30u, 31u, 32u, 33u);

    expect(scheduler.schedule(5u, early) ==
               AuthorityInputScheduleResult::Inserted,
           "tick 5 fixture should insert");
    expect(scheduler.schedule(6u, middle) ==
               AuthorityInputScheduleResult::Inserted,
           "tick 6 fixture should insert");
    expect(scheduler.schedule(7u, latest) ==
               AuthorityInputScheduleResult::Inserted,
           "tick 7 fixture should insert");

    expect(scheduler.sampleAt(5u) == early,
           "first due state must apply at tick 5");
    expect(scheduler.sampleAt(5u) == early,
           "repeated sampleAt call in one tick must be idempotent");
    expect(scheduler.schedule(5u, latest) ==
               AuthorityInputScheduleResult::RejectedStale,
           "late same-tick insertion must not alter an observed tick");
    expect(scheduler.sampleAt(7u) == latest,
           "skipping a tick must apply all due samples and return the newest");
    expect(scheduler.pendingCount() == 0u,
           "skipped-tick application must drain every due sample");
    expect(scheduler.sampleAt(6u) == latest,
           "older sampleAt call must not rewind scheduler state");
}

void testMaximumHoldAndLaterSamples() {
    AuthorityInputScheduler<4u, 32u, 3u> scheduler(10u);
    const auto axisOnly = state(0u, 0x90u, 0x80u, 0x80u, 0x80u);
    const auto later = state(0x0040u, 1u, 2u, 3u, 4u);

    expect(scheduler.maxHoldTicks() == 3u,
           "reported hold policy must match the template bound");
    expect(scheduler.schedule(10u, axisOnly) ==
               AuthorityInputScheduleResult::Inserted,
           "axis-only non-neutral state should insert");
    expect(scheduler.schedule(15u, later) ==
               AuthorityInputScheduleResult::Inserted,
           "later sample should remain queued across hold expiry");
    expect(scheduler.sampleAt(10u) == axisOnly,
           "new non-neutral state should apply on its target tick");
    expect(scheduler.sampleAt(11u) == axisOnly,
           "state should remain held for its second sampled tick");
    expect(scheduler.sampleAt(12u) == axisOnly,
           "state should remain held through MaxHoldTicks samples");
    expect(scheduler.sampleAt(13u) == AuthorityInputState{},
           "state must auto-neutralize after MaxHoldTicks samples");
    expect(scheduler.pendingCount() == 1u,
           "auto-neutralization must not discard a later queued sample");
    expect(scheduler.sampleAt(14u) == AuthorityInputState{},
           "state must remain neutral until another sample is due");
    expect(scheduler.sampleAt(15u) == later,
           "queued later sample must apply after auto-neutralization");
}

void testMaximumHoldAcrossTickWrap() {
    constexpr std::uint32_t max = std::numeric_limits<std::uint32_t>::max();
    AuthorityInputScheduler<4u, 8u, 2u> scheduler(max - 1u);
    const auto active = state(0x0020u, 1u, 2u, 3u, 4u);
    const auto later = state(0x0040u, 5u, 6u, 7u, 8u);

    expect(scheduler.schedule(max, active) ==
               AuthorityInputScheduleResult::Inserted,
           "pre-wrap hold sample should insert");
    expect(scheduler.schedule(2u, later) ==
               AuthorityInputScheduleResult::Inserted,
           "post-wrap later sample should insert");
    expect(scheduler.sampleAt(max) == active,
           "hold must start on the pre-wrap target");
    expect(scheduler.sampleAt(0u) == active,
           "hold must remain active for its second tick across wrap");
    expect(scheduler.sampleAt(1u) == AuthorityInputState{},
           "hold must expire at the wrap-safe tick distance");
    expect(scheduler.sampleAt(2u) == later,
           "post-wrap queued sample must still apply after expiry");
}

void testResetSealed() {
    AuthorityInputScheduler<4u, 16u> scheduler(10u);
    const auto active = state(0x0040u, 1u, 2u, 3u, 4u);

    expect(scheduler.schedule(10u, active) ==
               AuthorityInputScheduleResult::Inserted,
           "sealed-reset fixture should insert");
    expect(scheduler.sampleAt(10u) == active,
           "sealed-reset fixture should become active");

    scheduler.resetSealed(10u);
    expect(scheduler.current() == AuthorityInputState{},
           "sealed reset must restore neutral state");
    expect(scheduler.pendingCount() == 0u,
           "sealed reset must discard pending input");
    expect(scheduler.hasSampled(),
           "sealed reset must retain a sampled cursor");
    expect(scheduler.schedule(10u, active) ==
               AuthorityInputScheduleResult::RejectedStale,
           "sealed current tick must reject a late arrival");
    expect(scheduler.sampleAt(10u) == AuthorityInputState{},
           "sealed current tick must remain neutral when re-read");
    expect(scheduler.schedule(11u, active) ==
               AuthorityInputScheduleResult::Inserted,
           "next tick must remain schedulable after sealed reset");
    expect(scheduler.sampleAt(11u) == active,
           "next-tick input must apply after sealed reset");
}

void testResetSealedAcrossTickWrap() {
    constexpr std::uint32_t max = std::numeric_limits<std::uint32_t>::max();
    AuthorityInputScheduler<2u, 8u> scheduler;
    const auto active = state(0x0080u, 9u, 10u, 11u, 12u);

    scheduler.resetSealed(max);
    expect(scheduler.schedule(max, active) ==
               AuthorityInputScheduleResult::RejectedStale,
           "sealed pre-wrap tick must reject reopening");
    expect(scheduler.schedule(0u, active) ==
               AuthorityInputScheduleResult::Inserted,
           "tick zero must be a valid future tick after sealed wrap");
    expect(scheduler.sampleAt(0u) == active,
           "post-wrap sample must apply after sealed reset");
}

void testUint32Wrap() {
    constexpr std::uint32_t max = std::numeric_limits<std::uint32_t>::max();
    AuthorityInputScheduler<4u, 8u> scheduler(max - 2u);
    const auto beforeWrap = state(1u, 1u, 2u, 3u, 4u);
    const auto afterWrap = state(2u, 5u, 6u, 7u, 8u);

    expect(scheduler.schedule(1u, afterWrap) ==
               AuthorityInputScheduleResult::Inserted,
           "small future target across UINT32 wrap must insert");
    expect(scheduler.schedule(max, beforeWrap) ==
               AuthorityInputScheduleResult::Inserted,
           "out-of-order pre-wrap target must sort before post-wrap target");
    expect(scheduler.schedule(6u, afterWrap) ==
               AuthorityInputScheduleResult::RejectedTooFarFuture,
           "future window must remain bounded across UINT32 wrap");

    expect(scheduler.sampleAt(max - 1u) == AuthorityInputState{},
           "pre-wrap state must remain neutral before its target");
    expect(scheduler.sampleAt(max) == beforeWrap,
           "pre-wrap target must apply normally");
    expect(scheduler.sampleAt(0u) == beforeWrap,
           "held state must cross UINT32 wrap");
    expect(scheduler.sampleAt(1u) == afterWrap,
           "post-wrap target must apply in wrap-safe order");
}

void testReset() {
    AuthorityInputScheduler<4u, 8u> scheduler;
    const auto active = state(0xFFFFu, 0u, 1u, 2u, 3u);
    expect(scheduler.schedule(1u, active) ==
               AuthorityInputScheduleResult::Inserted,
           "pre-reset fixture should insert");
    expect(scheduler.sampleAt(1u) == active,
           "fixture must become active before reset");

    expect(scheduler.schedule(2u, active) ==
               AuthorityInputScheduleResult::Inserted,
           "pending pre-reset fixture should insert");
    scheduler.reset(50u);
    expect(!scheduler.hasSampled(), "reset must clear sampled status");
    expect(scheduler.cursorTick() == 50u,
           "reset must install the requested initial tick");
    expect(scheduler.pendingCount() == 0u,
           "reset must discard all pending samples");
    expect(scheduler.current() == AuthorityInputState{},
           "reset must restore neutral controller state");
}

} // namespace

int main() {
    testNeutralInitialState();
    testOutOfOrderInsertionAndDeterministicApplication();
    testSameTickReplacement();
    testVersionedSameTickReplacement();
    testSequenceWrap();
    testBoundedCapacity();
    testStaleAndFutureRejection();
    testWithinTickIdempotenceAndSkippedTicks();
    testMaximumHoldAndLaterSamples();
    testMaximumHoldAcrossTickWrap();
    testResetSealed();
    testResetSealedAcrossTickWrap();
    testUint32Wrap();
    testReset();

    if (failures != 0) {
        std::cerr << failures << " authority input scheduler test(s) failed\n";
        return 1;
    }

    std::cout << "authority input scheduler tests passed\n";
    return 0;
}
