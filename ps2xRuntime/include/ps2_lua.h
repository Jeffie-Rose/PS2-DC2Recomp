#pragma once
#include <cstdint>
#include <cstddef>

// Embedded Lua mod runtime (tier 3). One lua_State is shared by all mods.
//
// dc2LuaInitFromMods() is called by the mod loader once manifests are applied; it
// creates the state, registers the `dc2` API, and runs each loaded mod's main.lua.
//
// dc2LuaFrame() is called once per guest frame from the frame-end override. It
// publishes the guest RAM window used by dc2.memory.* and dispatches game_frame
// hooks. When no mod registered a hook this is two stores.
void dc2LuaInitFromMods();
void dc2LuaFrame(uint32_t frameNo, uint8_t* rdram, size_t rdramSize);
bool dc2LuaHasFrameHooks();

// Published by the frame-end override every guest frame; backs dc2.game.* and
// dc2.player.*. charaPtr is the main CActionChara (0 when not in gameplay).
void dc2LuaSetGameState(uint32_t scriptFrame, uint32_t loopNo, uint32_t mapNo,
                        uint32_t charaId, uint32_t charaCount, uint32_t charaPtr,
                        float px, float py, float pz);
