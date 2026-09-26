#pragma once
#include <cstdint>
#include <istream>
#include <string>
#include <vector>

namespace dc2 {
struct LocalProcessMember { std::uint32_t pid; std::uint64_t created; };
inline bool readLocalProcessGroup(std::istream &input, std::vector<LocalProcessMember> &out) {
    std::string magic;
    unsigned count = 0;
    if (!(input >> magic >> count) || magic != "DC2LOCAL1" || count < 2 || count > 32) return false;
    std::vector<LocalProcessMember> members;
    for (unsigned i = 0; i < count; ++i) {
        std::uint64_t pid = 0, created = 0;
        if (!(input >> pid >> created) || !pid || pid > UINT32_MAX || !created) return false;
        for (const auto &member : members) if (member.pid == pid) return false;
        members.push_back({static_cast<std::uint32_t>(pid), created});
    }
    input >> std::ws;
    if (!input.eof()) return false;
    out = std::move(members);
    return true;
}
}
