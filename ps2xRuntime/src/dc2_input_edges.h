#pragma once
#include <cstdint>
#include <deque>

namespace dc2 {
// One stream per player. Owned under the network client's mutex. Repeated held
// states collapse; press/release transitions survive until an EE pad read.
class InputEdges {
    std::deque<std::uint16_t> pending_;
    std::uint16_t received_ = 0, consumed_ = 0;
    std::uint32_t tick_ = 0;
    bool tickSeen_ = false;
public:
    void push(std::uint16_t buttons) {
        if (buttons == received_) return;
        received_ = buttons;
        if (pending_.size() >= 64) {
            // Bounded backlog: release first on overload, then reconcile.
            pending_.clear();
            pending_.push_back(0);
        }
        pending_.push_back(buttons);
    }
    std::uint16_t consume() {
        if (!pending_.empty()) {
            consumed_ = pending_.front();
            pending_.pop_front();
        }
        return consumed_;
    }
    std::uint16_t consumeAtTick(std::uint32_t tick) {
        if (tickSeen_ && tick_ == tick) return consumed_;
        tick_ = tick;
        tickSeen_ = true;
        return consume();
    }
    void reset() {
        pending_.clear(); received_ = consumed_ = 0;
        tickSeen_ = false;
    }
};
}
