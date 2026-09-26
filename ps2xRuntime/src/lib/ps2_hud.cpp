// Host-side overlay HUD (chat + roster). See ps2_hud.h.
#include "ps2_hud.h"

#include "raylib.h"

#include <algorithm>
#include <cstdlib>
#include <cstring>
#include <deque>
#include <mutex>
#include <utility>

namespace
{
    std::mutex g_mutex;
    std::deque<std::pair<std::string, std::string>> g_chat; // speaker, text
    std::vector<std::string> g_players;
    constexpr size_t kMaxChatLines = 6;

    bool g_enabled = []() {
        const char* e = std::getenv("DC2_CHAT_HUD");
        if (e == nullptr)
            return true; // visible by default; it only draws when there is content
        return std::strcmp(e, "0") != 0;
    }();
} // namespace

void dc2HudPushChat(const std::string& speaker, const std::string& text)
{
    std::lock_guard<std::mutex> lock(g_mutex);
    g_chat.emplace_back(speaker, text);
    while (g_chat.size() > 64u)
        g_chat.pop_front();
}

void dc2HudSetPlayers(const std::vector<std::string>& names)
{
    std::lock_guard<std::mutex> lock(g_mutex);
    g_players = names;
}

void dc2HudSetEnabled(bool enabled)
{
    std::lock_guard<std::mutex> lock(g_mutex);
    g_enabled = enabled;
}

bool dc2HudIsEnabled()
{
    std::lock_guard<std::mutex> lock(g_mutex);
    return g_enabled;
}

void dc2HudDraw()
{
    std::lock_guard<std::mutex> lock(g_mutex);
    if (!g_enabled)
        return;

    const int screenW = GetScreenWidth();
    const int screenH = GetScreenHeight();
    const int fontSize = 18;
    const int lineH = 22;

    // ---- chat: bottom-left, last kMaxChatLines lines ----------------------
    if (!g_chat.empty())
    {
        const size_t shown = std::min(kMaxChatLines, g_chat.size());
        const int boxW = std::min(screenW - 16, 640);
        const int boxH = static_cast<int>(shown) * lineH + 10;
        const int boxY = screenH - boxH - 8;
        DrawRectangle(8, boxY, boxW, boxH, Fade(BLACK, 0.55f));

        int y = boxY + 5;
        for (size_t i = g_chat.size() - shown; i < g_chat.size(); ++i)
        {
            std::string line = g_chat[i].first.empty()
                                   ? g_chat[i].second
                                   : (g_chat[i].first + ": " + g_chat[i].second);
            DrawText(line.c_str(), 14, y, fontSize, RAYWHITE);
            y += lineH;
        }
    }

    // ---- players: top-right ----------------------------------------------
    if (!g_players.empty())
    {
        const int boxW = 200;
        const int boxH = static_cast<int>(g_players.size()) * lineH + 26;
        const int boxX = screenW - boxW - 8;
        DrawRectangle(boxX, 8, boxW, boxH, Fade(BLACK, 0.55f));
        DrawText("PLAYERS", boxX + 8, 12, fontSize - 2, SKYBLUE);
        int y = 12 + lineH;
        for (const std::string& name : g_players)
        {
            DrawText(name.c_str(), boxX + 8, y, fontSize, LIME);
            y += lineH;
        }
    }
}
