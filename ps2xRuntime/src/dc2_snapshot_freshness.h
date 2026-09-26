#pragma once
#include <chrono>

namespace dc2 {
// Receipt time, not the remote tick, bounds how long a frame is authoritative.
class SnapshotFreshness {
public:
    using Clock = std::chrono::steady_clock;
    void received(Clock::time_point now) { received_ = now; seen_ = true; }
    bool fresh(Clock::time_point now) const {
        return seen_ && now >= received_ &&
               now - received_ < std::chrono::milliseconds(500);
    }
private:
    Clock::time_point received_{};
    bool seen_ = false;
};
}
