#pragma once

#include <cstdint>

namespace dc2 {

// One accepted transition, not a general-purpose menu auto-confirm. The owner
// advances this coordinator exactly once per authority frame. Pad hooks only
// read the cached result, so repeated read_pad/pad_button_read calls cannot
// create extra edges or skip the mandatory neutral frames.
class DungeonEntryIntent {
public:
    enum class Stage : std::uint8_t {
        Idle,
        WaitTree,
        FirstPress,
        FirstRelease,
        SecondPress,
        SecondRelease,
        WaitEvent,
        WaitGameplay,
        Failed,
    };

    enum class Failure : std::uint8_t {
        None,
        OverallTimeout,
        TreeTimeout,
        DestinationMismatch,
        FirstPressTimeout,
        FirstReleaseTimeout,
        SecondPressTimeout,
        SecondReleaseTimeout,
        EventTimeout,
        GameplayTimeout,
    };

    struct Observation {
        std::uint32_t tick = 0;
        std::uint32_t dungeonStatus = 0;
        bool treeValid = false;
        std::uint16_t map = 0;
        std::uint16_t floor = 0;
        std::uint16_t top = 0;
        std::uint16_t sub = 0;
        std::uint16_t gamePadCurrent = 0;
        std::uint16_t networkButtons = 0;
    };

    static constexpr std::uint16_t kCross = 0x0040u;

    bool request(std::uint16_t map, std::uint16_t floor, std::uint32_t tick = 0) {
        clear();
        // The tree's GLID_INFO stores its floor index in one byte.
        if (map >= 4096u || floor >= 256u)
            return false;
        room_ = 0x10000000u | (std::uint32_t(map) << 12u) | floor;
        requestedTick_ = tick;
        stageTick_ = tick;
        lastTick_ = tick - 1u;
        stage_ = Stage::WaitTree;
        return true;
    }

    bool active() const {
        return stage_ != Stage::Idle;
    }

    bool pending() const {
        return room_ != 0u && stage_ != Stage::Idle && stage_ != Stage::Failed;
    }

    bool matches(std::uint16_t map, std::uint16_t floor, std::uint16_t top,
                 std::uint16_t sub) const {
        return pending() && top == 0u && sub <= 1u &&
               map == expectedMap() && floor == expectedFloor();
    }

    // Returns true only after the controlled selector/event progression has
    // reached its gameplay-wait stage in the exact room. A process can begin
    // a same-room re-entry while the previous scene still reports status 0;
    // accepting that stale identity during WaitTree would cancel the two
    // required confirmation edges and strand the new selector.
    bool arrived(std::uint32_t room) {
        if (stage_ != Stage::WaitGameplay || room_ == 0u || room != room_)
            return false;
        clear();
        return true;
    }

    // Advance once at the all-loop frame boundary. The cached mask applies to
    // the following frame. Returns true when the stage or failure changes.
    bool advance(const Observation &observation) {
        if (!active() || stage_ == Stage::Failed || observation.tick == lastTick_)
            return false;
        lastTick_ = observation.tick;

        const Stage before = stage_;
        const Failure failureBefore = failure_;
        padMask_ = 0u;

        if (elapsed(observation.tick, requestedTick_) > kOverallTimeoutFrames) {
            fail(Failure::OverallTimeout);
            return true;
        }

        const bool destinationMatches = observation.treeValid &&
            observation.map == expectedMap() &&
            observation.floor == expectedFloor();

        switch (stage_) {
        case Stage::Idle:
        case Stage::Failed:
            break;

        case Stage::WaitTree:
            // Do not interfere with earlier loading loops. Once the native
            // selector is active, own P1/P2 pad state and hold it neutral until
            // the exact requested GLID is proven.
            ownsPad_ = observation.dungeonStatus == 4u;
            if (ownsPad_ && destinationMatches && observation.top == 0u &&
                observation.sub == 0u) {
                enter(Stage::FirstPress, observation.tick, kCross);
            } else if (ownsPad_ && observation.treeValid && !destinationMatches &&
                       elapsed(observation.tick, stageTick_) > kMismatchGraceFrames) {
                fail(Failure::DestinationMismatch);
            } else if (elapsed(observation.tick, stageTick_) > kTreeTimeoutFrames) {
                fail(Failure::TreeTimeout);
            }
            break;

        case Stage::FirstPress:
            ownsPad_ = true;
            if (observation.dungeonStatus == 4u && destinationMatches &&
                observation.top == 0u && observation.sub == 1u) {
                enter(Stage::FirstRelease, observation.tick, 0u);
            } else if (observation.dungeonStatus == 4u && destinationMatches &&
                       observation.top == 0u && observation.sub == 0u) {
                padMask_ = kCross;
            } else {
                padMask_ = 0u;
            }
            if (stage_ == Stage::FirstPress &&
                elapsed(observation.tick, stageTick_) > kPressTimeoutFrames)
                fail(Failure::FirstPressTimeout);
            break;

        case Stage::FirstRelease:
            ownsPad_ = true;
            padMask_ = 0u;
            if (observation.dungeonStatus == 4u && destinationMatches &&
                observation.top == 0u && observation.sub == 1u &&
                (observation.gamePadCurrent & kCross) == 0u &&
                elapsed(observation.tick, stageTick_) >= kReleaseFrames) {
                enter(Stage::SecondPress, observation.tick, kCross);
            } else if (elapsed(observation.tick, stageTick_) > kReleaseTimeoutFrames) {
                fail(Failure::FirstReleaseTimeout);
            }
            break;

        case Stage::SecondPress:
            ownsPad_ = true;
            if (observation.dungeonStatus == 2u || observation.top == 2u) {
                enter(Stage::SecondRelease, observation.tick, 0u);
            } else if (observation.dungeonStatus == 4u && destinationMatches &&
                       observation.top == 0u && observation.sub == 1u) {
                padMask_ = kCross;
            } else {
                padMask_ = 0u;
            }
            if (stage_ == Stage::SecondPress &&
                elapsed(observation.tick, stageTick_) > kPressTimeoutFrames)
                fail(Failure::SecondPressTimeout);
            break;

        case Stage::SecondRelease:
            ownsPad_ = true;
            padMask_ = 0u;
            if ((observation.gamePadCurrent & kCross) == 0u &&
                elapsed(observation.tick, stageTick_) >= kReleaseFrames) {
                enter(observation.dungeonStatus == 2u
                          ? Stage::WaitGameplay
                          : Stage::WaitEvent,
                      observation.tick, 0u);
            } else if (elapsed(observation.tick, stageTick_) > kReleaseTimeoutFrames) {
                fail(Failure::SecondReleaseTimeout);
            }
            break;

        case Stage::WaitEvent:
            ownsPad_ = true;
            padMask_ = 0u;
            if (observation.dungeonStatus == 2u || observation.dungeonStatus == 0u) {
                enter(Stage::WaitGameplay, observation.tick, 0u);
            } else if (elapsed(observation.tick, stageTick_) > kEventTimeoutFrames) {
                fail(Failure::EventTimeout);
            }
            break;

        case Stage::WaitGameplay:
            // Do not hand a held remote button directly to CGamePad after the
            // controlled release. A fresh neutral sample proves the next
            // player-authored press can form a real rising edge.
            padMask_ = 0u;
            ownsPad_ = observation.networkButtons != 0u ||
                       (observation.gamePadCurrent & kCross) != 0u;
            if (elapsed(observation.tick, stageTick_) > kGameplayTimeoutFrames)
                fail(Failure::GameplayTimeout);
            break;
        }

        return stage_ != before || failure_ != failureBefore;
    }

    void clear() {
        room_ = 0u;
        requestedTick_ = 0u;
        stageTick_ = 0u;
        lastTick_ = 0u;
        stage_ = Stage::Idle;
        failure_ = Failure::None;
        ownsPad_ = false;
        padMask_ = 0u;
    }

    std::uint32_t room() const { return room_; }
    std::uint16_t expectedMap() const {
        return static_cast<std::uint16_t>((room_ >> 12u) & 0x0FFFu);
    }
    std::uint16_t expectedFloor() const {
        return static_cast<std::uint16_t>(room_ & 0x0FFFu);
    }
    Stage stage() const { return stage_; }
    Failure failure() const { return failure_; }
    bool ownsPad() const { return ownsPad_; }
    std::uint16_t padMask() const { return padMask_; }
    std::uint32_t stageElapsed(std::uint32_t tick) const {
        return elapsed(tick, stageTick_);
    }

    static const char *stageName(Stage stage) {
        switch (stage) {
        case Stage::Idle: return "idle";
        case Stage::WaitTree: return "wait_tree";
        case Stage::FirstPress: return "first_press";
        case Stage::FirstRelease: return "first_release";
        case Stage::SecondPress: return "second_press";
        case Stage::SecondRelease: return "second_release";
        case Stage::WaitEvent: return "wait_event";
        case Stage::WaitGameplay: return "wait_gameplay";
        case Stage::Failed: return "failed";
        }
        return "unknown";
    }

    static const char *failureName(Failure failure) {
        switch (failure) {
        case Failure::None: return "none";
        case Failure::OverallTimeout: return "overall_timeout";
        case Failure::TreeTimeout: return "tree_timeout";
        case Failure::DestinationMismatch: return "destination_mismatch";
        case Failure::FirstPressTimeout: return "first_press_timeout";
        case Failure::FirstReleaseTimeout: return "first_release_timeout";
        case Failure::SecondPressTimeout: return "second_press_timeout";
        case Failure::SecondReleaseTimeout: return "second_release_timeout";
        case Failure::EventTimeout: return "event_timeout";
        case Failure::GameplayTimeout: return "gameplay_timeout";
        }
        return "unknown";
    }

private:
    // The runner is normally 30-60 Hz. Frame deadlines are deterministic and
    // intentionally generous enough for slow asset loading and hidden windows.
    static constexpr std::uint32_t kOverallTimeoutFrames = 7200u;
    static constexpr std::uint32_t kTreeTimeoutFrames = 3600u;
    static constexpr std::uint32_t kMismatchGraceFrames = 120u;
    static constexpr std::uint32_t kPressTimeoutFrames = 240u;
    static constexpr std::uint32_t kReleaseTimeoutFrames = 240u;
    static constexpr std::uint32_t kReleaseFrames = 1u;
    static constexpr std::uint32_t kEventTimeoutFrames = 1200u;
    static constexpr std::uint32_t kGameplayTimeoutFrames = 5400u;

    static std::uint32_t elapsed(std::uint32_t now, std::uint32_t then) {
        return now - then;
    }

    void enter(Stage next, std::uint32_t tick, std::uint16_t mask) {
        stage_ = next;
        stageTick_ = tick;
        padMask_ = mask;
        ownsPad_ = next != Stage::Idle;
    }

    void fail(Failure reason) {
        failure_ = reason;
        stage_ = Stage::Failed;
        // Fail closed. A wrong/partial transition must never fall back to a
        // remote held button and accidentally select another native menu item.
        ownsPad_ = true;
        padMask_ = 0u;
    }

    std::uint32_t room_ = 0u;
    std::uint32_t requestedTick_ = 0u;
    std::uint32_t stageTick_ = 0u;
    std::uint32_t lastTick_ = 0u;
    Stage stage_ = Stage::Idle;
    Failure failure_ = Failure::None;
    bool ownsPad_ = false;
    std::uint16_t padMask_ = 0u;
};

} // namespace dc2
