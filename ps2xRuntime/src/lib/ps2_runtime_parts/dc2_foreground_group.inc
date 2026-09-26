// Compiled beside the Windows scheduler, not the raylib runtime TU.
#include <chrono>
#include <fstream>
#include "../../dc2_local_process_group.h"

void dc2UpdateForegroundGroup(void *nativeWindow)
{
#if defined(_WIN32)
    static bool configured = false;
    if (configured || !nativeWindow) return;
    const char *path = std::getenv("DC2_COOP_LOCAL_GROUP_FILE");
    const char *role = std::getenv("DC2_COOP_ROLE");
    if (!path || !*path || !role ||
        (std::strcmp(role, "host") != 0 && std::strcmp(role, "guest") != 0)) return;
    static auto nextAttempt = std::chrono::steady_clock::time_point{};
    const auto now = std::chrono::steady_clock::now();
    if (now < nextAttempt) return;
    nextAttempt = now + std::chrono::seconds(1);

    using GroupFn = BOOL (WINAPI *)(HWND, DWORD, HANDLE *);
    using OwnerFn = DWORD (WINAPI *)(HWND, LPDWORD);
    static GroupFn setGroup = reinterpret_cast<GroupFn>(
        GetProcAddress(GetModuleHandleW(L"user32.dll"), "SetAdditionalForegroundBoostProcesses"));
    static OwnerFn ownerOf = reinterpret_cast<OwnerFn>(
        GetProcAddress(GetModuleHandleW(L"user32.dll"), "GetWindowThreadProcessId"));
    if (!setGroup || !ownerOf) {
        std::fprintf(stderr, "[DC2:ForegroundGroup] unavailable on this Windows version; scheduling unchanged\n");
        configured = true;
        return;
    }
    std::ifstream input(path);
    if (!input) return; // Launcher publishes only after every child has started.
    std::vector<dc2::LocalProcessMember> members;
    if (!dc2::readLocalProcessGroup(input, members)) return;
    DWORD owner = 0;
    ownerOf(static_cast<HWND>(nativeWindow), &owner);
    if (owner != GetCurrentProcessId()) return;
    bool selfSeen = false, valid = true;
    std::vector<HANDLE> peers;
    for (const auto &member : members) {
        HANDLE process = OpenProcess(PROCESS_QUERY_LIMITED_INFORMATION | PROCESS_SET_INFORMATION,
                                     FALSE, member.pid);
        if (!process) { valid = false; break; }
        FILETIME created{}, exited{}, kernel{}, user{};
        const bool sameProcess = GetProcessTimes(process, &created, &exited, &kernel, &user) &&
            ((static_cast<uint64_t>(created.dwHighDateTime) << 32) | created.dwLowDateTime) == member.created;
        if (!sameProcess) { CloseHandle(process); valid = false; break; }
        if (member.pid == owner) { selfSeen = true; CloseHandle(process); }
        else peers.push_back(process);
    }
    if (valid && selfSeen && !peers.empty()) {
        const BOOL ok = setGroup(static_cast<HWND>(nativeWindow), static_cast<DWORD>(peers.size()), peers.data());
        const DWORD error = ok ? 0 : GetLastError();
        std::fprintf(stderr, "[DC2:ForegroundGroup] role=%s peers=%zu registered=%u error=%lu\n",
                     role, peers.size(), ok ? 1u : 0u, static_cast<unsigned long>(error));
        configured = true; // Report a failed registration, not a per-frame retry flood.
    }
    for (HANDLE process : peers) CloseHandle(process);
    // Windows holds references after registration; destroying the window tears
    // down its relationship. No affinity, registry or global priority edits.
#else
    (void)nativeWindow;
#endif
}
