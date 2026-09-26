#pragma once
#include <cstdint>
#include <cstddef>
#include <string>
#include <vector>

// Runtime mod framework (tier-1, no rebuild required).
//
// Layout:
//   Mods/
//     <ModName>/
//       mod.ini          # manifest (see docs/MODDING.md)
//       files/...        # host files referenced by [overlay]
//
// dc2ModsInit() is idempotent and is called as soon as the game data source opens,
// so overlays are registered before the guest reads any file. It applies [env]
// flags and registers every [overlay] entry on the global ISO mount. [patch] bytes
// are collected and applied later by dc2ModsApplyPatches() on the first guest frame
// (the game tables are read during gameplay, not at mount time).
void dc2ModsInit();

// Applies all collected [patch] entries into guest RAM. Safe to call repeatedly;
// the write happens once. rdramSize is the guest RAM window size in bytes.
void dc2ModsApplyPatches(uint8_t* rdram, size_t rdramSize);

// Number of mods loaded / overlays registered / patches collected (for logging).
size_t dc2ModsLoadedCount();
size_t dc2ModsOverlayCount();
size_t dc2ModsPatchCount();

// Directories and ids of the mods that actually loaded (ascending load order).
// Used by the Lua bootstrap to find each mod's main.lua.
void dc2ModsLoadedDirs(std::vector<std::string>& dirs, std::vector<std::string>& ids);

// Full metadata for the loaded mods (id/name/version/dir). Backs dc2.mods.list().
struct Dc2ModInfo
{
    std::string id;
    std::string name;
    std::string version;
    std::string dir;
};
void dc2ModsGetLoaded(std::vector<Dc2ModInfo>& out);
