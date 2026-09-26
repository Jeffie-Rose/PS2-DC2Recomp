#pragma once
#include <string>
#include <vector>

// Host-side overlay HUD: chat log + player roster, drawn by the present loop
// after the game frame. Fed by the Lua runtime via ps2_lua.cpp.
void dc2HudPushChat(const std::string& speaker, const std::string& text);
void dc2HudSetPlayers(const std::vector<std::string>& names);
void dc2HudSetEnabled(bool enabled);
bool dc2HudIsEnabled();
void dc2HudDraw();
