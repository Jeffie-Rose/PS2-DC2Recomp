// Embedded Lua mod runtime (tier 3). See ps2_lua.h.
#include "ps2_lua.h"
#include "ps2_mods.h"
#include "ps2_hud.h"
#include "ps2_input.h"
#include "../dc2_coop_net.h"
#include "../dc2_coop_v5_net.h"

extern "C" {
#include "lua.h"
#include "lauxlib.h"
#include "lualib.h"
}

#include <cstring>
#include <deque>
#include <filesystem>
#include <iostream>
#include <map>
#include <string>
#include <vector>

namespace
{
    lua_State* g_L = nullptr;
    uint8_t* g_rdram = nullptr;
    size_t g_rdramSize = 0;
    uint32_t g_frame = 0;
    bool g_hasFrameHooks = false;
    bool g_hasNetHooks = false;
    bool g_hasChatHooks = false;
    bool g_hasMapHooks = false;
    bool g_hasSpawnHooks = false;
    bool g_hasDespawnHooks = false;
    uint8_t g_entityValid[16]{}; // 128 slots, bit per slot

    // ---- chat / roster (rides the Mod channel) ----------------------------
    // Frames: "D2H|<name>" roster hello, "D2C|<text>" chat line. Plain UTF-8.
    constexpr const char* kHelloPrefix = "D2H|";
    constexpr const char* kChatPrefix = "D2C|";
    struct ChatLine
    {
        uint8_t role;
        std::string name;
        std::string text;
    };
    std::string g_playerName = "player";
    std::map<uint8_t, std::string> g_roster;
    std::deque<ChatLine> g_chatHistory;
    uint32_t g_lastAnnounceFrame = 0;

    // ---- transport selection -------------------------------------------------
    // Classic v4 runs the shared world between host and guest; v5 is the
    // experimental authority transport. Chat and mod messages ride whichever is
    // live, so the online features work on the classic path too.
    bool netActive()
    {
        return dc2_coop_v5_net::active() || dc2_coop_net::active();
    }
    uint8_t localNetRole()
    {
        if (dc2_coop_v5_net::active())
            return static_cast<uint8_t>(dc2_coop_v5_net::role());
        if (dc2_coop_net::active())
            return static_cast<uint8_t>(dc2_coop_net::role());
        return 0u;
    }
    bool netSend(const void* data, uint32_t bytes)
    {
        if (dc2_coop_v5_net::active())
            return dc2_coop_v5_net::sendModMessage(data, bytes);
        if (dc2_coop_net::active())
            return dc2_coop_net::sendModMessage(data, bytes);
        return false;
    }
    bool netPoll(std::vector<uint8_t>& out, uint8_t& role)
    {
        if (dc2_coop_v5_net::active() && dc2_coop_v5_net::pollModMessage(out, role))
            return true;
        if (dc2_coop_net::active() && dc2_coop_net::pollModMessage(out, role))
            return true;
        return false;
    }

    // Published once per guest frame by dc2LuaSetGameState().
    uint32_t g_scriptFrame = 0;
    uint32_t g_loop = 0;
    uint32_t g_map = 0;
    uint32_t g_charaId = 0;
    uint32_t g_charaCount = 0;
    uint32_t g_charaPtr = 0;
    uint32_t g_lastLoop = 0xFFFFFFFFu;
    uint32_t g_lastMap = 0xFFFFFFFFu;
    float g_px = 0.f, g_py = 0.f, g_pz = 0.f;

    uint8_t* memAt(lua_State* L, lua_Integer addr, size_t n)
    {
        if (g_rdram == nullptr)
        {
            luaL_error(L, "guest memory not available yet");
            return nullptr;
        }
        if (addr < 0)
        {
            luaL_error(L, "negative address");
            return nullptr;
        }
        const size_t a = static_cast<size_t>(addr) & 0x1FFFFFFFu;
        if (a + n > g_rdramSize)
        {
            luaL_error(L, "address 0x%llx out of range", static_cast<unsigned long long>(addr));
            return nullptr;
        }
        return g_rdram + a;
    }

    int l_log(lua_State* L)
    {
        size_t len = 0;
        const char* s = luaL_checklstring(L, 1, &len);
        std::cout << "[lua] " << std::string(s, len) << std::endl;
        return 0;
    }

    int l_frame(lua_State* L)
    {
        lua_pushinteger(L, static_cast<lua_Integer>(g_frame));
        return 1;
    }

    int l_hook(lua_State* L)
    {
        const char* event = luaL_checkstring(L, 1);
        luaL_checktype(L, 2, LUA_TFUNCTION);

        const char* table = nullptr;
        if (std::strcmp(event, "game_frame") == 0)
        {
            table = "dc2_frame_hooks";
            g_hasFrameHooks = true;
        }
        else if (std::strcmp(event, "net_message") == 0)
        {
            table = "dc2_net_hooks";
            g_hasNetHooks = true;
        }
        else if (std::strcmp(event, "chat_message") == 0)
        {
            table = "dc2_chat_hooks";
            g_hasChatHooks = true;
        }
        else if (std::strcmp(event, "map_load") == 0)
        {
            table = "dc2_map_hooks";
            g_hasMapHooks = true;
        }
        else if (std::strcmp(event, "entity_spawn") == 0)
        {
            table = "dc2_spawn_hooks";
            g_hasSpawnHooks = true;
        }
        else if (std::strcmp(event, "entity_despawn") == 0)
        {
            table = "dc2_despawn_hooks";
            g_hasDespawnHooks = true;
        }
        else
        {
            return luaL_error(L, "unknown hook '%s' (supported: game_frame, net_message, "
                                 "chat_message, map_load, entity_spawn, entity_despawn)", event);
        }

        lua_getfield(L, LUA_REGISTRYINDEX, table);
        if (!lua_istable(L, -1))
        {
            lua_pop(L, 1);
            lua_newtable(L);
            lua_pushvalue(L, -1);
            lua_setfield(L, LUA_REGISTRYINDEX, table);
        }
        const int n = static_cast<int>(luaL_len(L, -1));
        lua_pushvalue(L, 2);
        lua_rawseti(L, -2, n + 1);
        lua_pop(L, 1);
        return 0;
    }

    int l_net_active(lua_State* L)
    {
        lua_pushboolean(L, netActive());
        return 1;
    }
    int l_net_send(lua_State* L)
    {
        size_t len = 0;
        const char* s = luaL_checklstring(L, 1, &len);
        lua_pushboolean(L, netSend(s, static_cast<uint32_t>(len)));
        return 1;
    }
    int l_net_start(lua_State* L)
    {
        lua_pushboolean(L, netActive() || dc2_coop_v5_net::start());
        return 1;
    }

    int l_read_u8(lua_State* L)
    {
        uint8_t v = 0;
        std::memcpy(&v, memAt(L, luaL_checkinteger(L, 1), 1), 1);
        lua_pushinteger(L, v);
        return 1;
    }
    int l_read_u16(lua_State* L)
    {
        uint16_t v = 0;
        std::memcpy(&v, memAt(L, luaL_checkinteger(L, 1), 2), 2);
        lua_pushinteger(L, v);
        return 1;
    }
    int l_read_u32(lua_State* L)
    {
        uint32_t v = 0;
        std::memcpy(&v, memAt(L, luaL_checkinteger(L, 1), 4), 4);
        lua_pushinteger(L, static_cast<lua_Integer>(v));
        return 1;
    }
    int l_read_i32(lua_State* L)
    {
        int32_t v = 0;
        std::memcpy(&v, memAt(L, luaL_checkinteger(L, 1), 4), 4);
        lua_pushinteger(L, v);
        return 1;
    }
    int l_read_f32(lua_State* L)
    {
        float v = 0;
        std::memcpy(&v, memAt(L, luaL_checkinteger(L, 1), 4), 4);
        lua_pushnumber(L, v);
        return 1;
    }
    int l_write_u8(lua_State* L)
    {
        const uint8_t v = static_cast<uint8_t>(luaL_checkinteger(L, 2));
        std::memcpy(memAt(L, luaL_checkinteger(L, 1), 1), &v, 1);
        return 0;
    }
    int l_write_u16(lua_State* L)
    {
        const uint16_t v = static_cast<uint16_t>(luaL_checkinteger(L, 2));
        std::memcpy(memAt(L, luaL_checkinteger(L, 1), 2), &v, 2);
        return 0;
    }
    int l_write_u32(lua_State* L)
    {
        const uint32_t v = static_cast<uint32_t>(luaL_checkinteger(L, 2));
        std::memcpy(memAt(L, luaL_checkinteger(L, 1), 4), &v, 4);
        return 0;
    }
    int l_write_f32(lua_State* L)
    {
        const float v = static_cast<float>(luaL_checknumber(L, 2));
        std::memcpy(memAt(L, luaL_checkinteger(L, 1), 4), &v, 4);
        return 0;
    }

    int l_game_loop(lua_State* L) { lua_pushinteger(L, g_loop); return 1; }
    int l_game_map(lua_State* L) { lua_pushinteger(L, g_map); return 1; }
    int l_game_script_frame(lua_State* L) { lua_pushinteger(L, g_scriptFrame); return 1; }

    int l_player_ptr(lua_State* L) { lua_pushinteger(L, static_cast<lua_Integer>(g_charaPtr)); return 1; }
    int l_player_id(lua_State* L) { lua_pushinteger(L, static_cast<lua_Integer>(g_charaId)); return 1; }
    int l_player_count(lua_State* L) { lua_pushinteger(L, static_cast<lua_Integer>(g_charaCount)); return 1; }
    int l_player_valid(lua_State* L)
    {
        lua_pushboolean(L, g_charaPtr > 0x80000u && g_charaPtr < 0x2000000u);
        return 1;
    }
    int l_player_pos(lua_State* L)
    {
        lua_pushnumber(L, g_px);
        lua_pushnumber(L, g_py);
        lua_pushnumber(L, g_pz);
        return 3;
    }
    int l_player_set_pos(lua_State* L)
    {
        if (g_charaPtr <= 0x80000u || g_charaPtr >= 0x2000000u)
            return luaL_error(L, "player not in gameplay");
        const float x = static_cast<float>(luaL_checknumber(L, 1));
        const float y = static_cast<float>(luaL_checknumber(L, 2));
        const float z = static_cast<float>(luaL_checknumber(L, 3));
        std::memcpy(memAt(L, static_cast<lua_Integer>(g_charaPtr) + 0xE0, 4), &x, 4);
        std::memcpy(memAt(L, static_cast<lua_Integer>(g_charaPtr) + 0xE4, 4), &y, 4);
        std::memcpy(memAt(L, static_cast<lua_Integer>(g_charaPtr) + 0xE8, 4), &z, 4);
        return 0;
    }

    void refreshHudPlayers()
    {
        static auto label = [](uint8_t role) -> const char* {
            switch (role)
            {
                case 1: return "P1";
                case 2: return "P2";
                case 3: return "Host";
                default: return "?";
            }
        };
        const uint8_t self = localNetRole();
        std::vector<std::string> names;
        if (self != 0u && !g_playerName.empty())
            names.push_back(std::string(label(self)) + " " + g_playerName + " (you)");
        for (const auto& kv : g_roster)
        {
            if (kv.first == self)
                continue;
            names.push_back(std::string(label(kv.first)) + " " + kv.second);
        }
        dc2HudSetPlayers(names);
    }

    void addChatLine(uint8_t role, const std::string& name, const std::string& text)
    {
        g_chatHistory.push_back(ChatLine{role, name, text});
        if (g_chatHistory.size() > 64u)
            g_chatHistory.pop_front();
        std::cout << "[chat] " << name << ": " << text << std::endl;
        dc2HudPushChat(name, text);
    }

    void callChatHooks(lua_State* L, uint8_t role, const std::string& name, const std::string& text)
    {
        if (!g_hasChatHooks)
            return;
        lua_getfield(L, LUA_REGISTRYINDEX, "dc2_chat_hooks");
        if (!lua_istable(L, -1))
        {
            lua_pop(L, 1);
            return;
        }
        const int n = static_cast<int>(luaL_len(L, -1));
        for (int i = 1; i <= n; ++i)
        {
            lua_rawgeti(L, -1, i);
            lua_pushinteger(L, role);
            lua_pushlstring(L, name.c_str(), name.size());
            lua_pushlstring(L, text.c_str(), text.size());
            if (lua_pcall(L, 3, 0, 0) != LUA_OK)
            {
                std::cerr << "[lua] chat_message hook error: " << lua_tostring(L, -1) << std::endl;
                lua_pop(L, 1);
            }
        }
        lua_pop(L, 1);
    }

    bool sendPrefixed(const char* prefix, const std::string& body)
    {
        const std::string payload = std::string(prefix) + body;
        return netSend(payload.data(), static_cast<uint32_t>(payload.size()));
    }

    // Consumes chat/roster frames; returns true when the payload was one.
    bool handleChatPayload(lua_State* L, const std::vector<uint8_t>& msg, uint8_t role)
    {
        const size_t helloLen = std::strlen(kHelloPrefix);
        const size_t chatLen = std::strlen(kChatPrefix);
        const char* data = reinterpret_cast<const char*>(msg.data());
        if (msg.size() >= helloLen && std::memcmp(data, kHelloPrefix, helloLen) == 0)
        {
            g_roster[role] = std::string(data + helloLen, msg.size() - helloLen);
            std::cout << "[chat] roster role=" << static_cast<int>(role)
                      << " name=" << g_roster[role] << std::endl;
            refreshHudPlayers();
            return true;
        }
        if (msg.size() >= chatLen && std::memcmp(data, kChatPrefix, chatLen) == 0)
        {
            const std::string text(data + chatLen, msg.size() - chatLen);
            auto it = g_roster.find(role);
            const std::string name = it != g_roster.end()
                ? it->second
                : ("role" + std::to_string(static_cast<int>(role)));
            addChatLine(role, name, text);
            callChatHooks(L, role, name, text);
            return true;
        }
        return false;
    }

    int l_chat_set_name(lua_State* L)
    {
        g_playerName = luaL_checkstring(L, 1);
        sendPrefixed(kHelloPrefix, g_playerName);
        refreshHudPlayers();
        return 0;
    }
    int l_chat_send(lua_State* L)
    {
        const std::string text = luaL_checkstring(L, 1);
        if (text.empty())
            return 0;
        sendPrefixed(kChatPrefix, text);
        addChatLine(localNetRole(), g_playerName, text);
        return 0;
    }
    int l_chat_players(lua_State* L)
    {
        lua_newtable(L);
        int index = 1;
        for (const auto& kv : g_roster)
        {
            lua_newtable(L);
            lua_pushinteger(L, kv.first);
            lua_setfield(L, -2, "role");
            lua_pushlstring(L, kv.second.c_str(), kv.second.size());
            lua_setfield(L, -2, "name");
            lua_rawseti(L, -2, index++);
        }
        return 1;
    }
    int l_chat_history(lua_State* L)
    {
        lua_newtable(L);
        int index = 1;
        for (const ChatLine& line : g_chatHistory)
        {
            lua_newtable(L);
            lua_pushinteger(L, line.role);
            lua_setfield(L, -2, "role");
            lua_pushlstring(L, line.name.c_str(), line.name.size());
            lua_setfield(L, -2, "name");
            lua_pushlstring(L, line.text.c_str(), line.text.size());
            lua_setfield(L, -2, "text");
            lua_rawseti(L, -2, index++);
        }
        return 1;
    }

    int l_hud_print(lua_State* L)
    {
        const char* s = luaL_checkstring(L, 1);
        dc2HudPushChat("", s);
        return 0;
    }

    // ---- entity (character slot) access -----------------------------------
    constexpr lua_Integer kMainScene = 0x01DD8260;
    constexpr lua_Integer kCharaArray = 0x78;
    constexpr lua_Integer kCharaStride = 0x40;

    int l_entities_count(lua_State* L)
    {
        lua_pushinteger(L, static_cast<lua_Integer>(g_charaCount));
        return 1;
    }
    int l_entities_id(lua_State* L)
    {
        lua_pushinteger(L, static_cast<lua_Integer>(g_charaId));
        return 1;
    }
    int l_entities_ptr(lua_State* L)
    {
        const lua_Integer i = luaL_checkinteger(L, 1);
        if (g_rdram == nullptr || i < 0 || static_cast<uint32_t>(i) >= g_charaCount)
        {
            lua_pushinteger(L, 0);
            return 1;
        }
        uint32_t ptr = 0;
        std::memcpy(&ptr, memAt(L, kMainScene + kCharaArray + i * kCharaStride, 4), 4);
        lua_pushinteger(L, static_cast<lua_Integer>(ptr));
        return 1;
    }
    int l_entities_pos(lua_State* L)
    {
        const lua_Integer i = luaL_checkinteger(L, 1);
        float x = 0.f, y = 0.f, z = 0.f;
        if (g_rdram != nullptr && i >= 0 && static_cast<uint32_t>(i) < g_charaCount)
        {
            uint32_t ptr = 0;
            std::memcpy(&ptr, memAt(L, kMainScene + kCharaArray + i * kCharaStride, 4), 4);
            if (ptr > 0x80000u && ptr < 0x2000000u)
            {
                std::memcpy(&x, memAt(L, static_cast<lua_Integer>(ptr) + 0xE0, 4), 4);
                std::memcpy(&y, memAt(L, static_cast<lua_Integer>(ptr) + 0xE4, 4), 4);
                std::memcpy(&z, memAt(L, static_cast<lua_Integer>(ptr) + 0xE8, 4), 4);
            }
        }
        lua_pushnumber(L, x);
        lua_pushnumber(L, y);
        lua_pushnumber(L, z);
        return 3;
    }

    // ---- input (the effective pad the guest reads) -------------------------
    int l_input_connected(lua_State* L)
    {
        bool connected = false;
        dc2GetLivePad(nullptr, nullptr, nullptr, nullptr, nullptr, &connected);
        lua_pushboolean(L, connected);
        return 1;
    }
    int l_input_buttons(lua_State* L)
    {
        uint16_t mask = 0u;
        dc2GetLivePad(&mask, nullptr, nullptr, nullptr, nullptr, nullptr);
        lua_pushinteger(L, static_cast<lua_Integer>(mask));
        return 1;
    }
    int l_input_left(lua_State* L)
    {
        uint8_t lx = 0x80u, ly = 0x80u;
        dc2GetLivePad(nullptr, &lx, &ly, nullptr, nullptr, nullptr);
        lua_pushinteger(L, lx);
        lua_pushinteger(L, ly);
        return 2;
    }
    int l_input_right(lua_State* L)
    {
        uint8_t rx = 0x80u, ry = 0x80u;
        dc2GetLivePad(nullptr, nullptr, nullptr, &rx, &ry, nullptr);
        lua_pushinteger(L, rx);
        lua_pushinteger(L, ry);
        return 2;
    }

    void callSlotHooks(lua_State* L, const char* table, uint32_t slot, uint32_t ptr)
    {
        lua_getfield(L, LUA_REGISTRYINDEX, table);
        if (!lua_istable(L, -1))
        {
            lua_pop(L, 1);
            return;
        }
        const int n = static_cast<int>(luaL_len(L, -1));
        for (int i = 1; i <= n; ++i)
        {
            lua_rawgeti(L, -1, i);
            lua_pushinteger(L, static_cast<lua_Integer>(slot));
            lua_pushinteger(L, static_cast<lua_Integer>(ptr));
            if (lua_pcall(L, 2, 0, 0) != LUA_OK)
            {
                std::cerr << "[lua] " << table << " hook error: " << lua_tostring(L, -1) << std::endl;
                lua_pop(L, 1);
            }
        }
        lua_pop(L, 1);
    }

    int l_mods_list(lua_State* L)
    {
        std::vector<Dc2ModInfo> mods;
        dc2ModsGetLoaded(mods);
        lua_newtable(L);
        int index = 1;
        for (const Dc2ModInfo& m : mods)
        {
            lua_newtable(L);
            lua_pushlstring(L, m.id.c_str(), m.id.size());
            lua_setfield(L, -2, "id");
            lua_pushlstring(L, m.name.c_str(), m.name.size());
            lua_setfield(L, -2, "name");
            lua_pushlstring(L, m.version.c_str(), m.version.size());
            lua_setfield(L, -2, "version");
            lua_pushlstring(L, m.dir.c_str(), m.dir.size());
            lua_setfield(L, -2, "dir");
            lua_rawseti(L, -2, index++);
        }
        return 1;
    }

    void registerApi(lua_State* L)
    {
        lua_newtable(L);
        lua_pushcfunction(L, l_log);
        lua_setfield(L, -2, "log");
        lua_pushcfunction(L, l_frame);
        lua_setfield(L, -2, "frame");
        lua_pushcfunction(L, l_hook);
        lua_setfield(L, -2, "hook");

        lua_newtable(L);
        lua_pushcfunction(L, l_read_u8);
        lua_setfield(L, -2, "read_u8");
        lua_pushcfunction(L, l_read_u16);
        lua_setfield(L, -2, "read_u16");
        lua_pushcfunction(L, l_read_u32);
        lua_setfield(L, -2, "read_u32");
        lua_pushcfunction(L, l_read_i32);
        lua_setfield(L, -2, "read_i32");
        lua_pushcfunction(L, l_read_f32);
        lua_setfield(L, -2, "read_f32");
        lua_pushcfunction(L, l_write_u8);
        lua_setfield(L, -2, "write_u8");
        lua_pushcfunction(L, l_write_u16);
        lua_setfield(L, -2, "write_u16");
        lua_pushcfunction(L, l_write_u32);
        lua_setfield(L, -2, "write_u32");
        lua_pushcfunction(L, l_write_f32);
        lua_setfield(L, -2, "write_f32");
        lua_setfield(L, -2, "memory");

        lua_newtable(L);
        lua_pushcfunction(L, l_game_loop);
        lua_setfield(L, -2, "loop");
        lua_pushcfunction(L, l_game_map);
        lua_setfield(L, -2, "map");
        lua_pushcfunction(L, l_game_script_frame);
        lua_setfield(L, -2, "script_frame");
        lua_setfield(L, -2, "game");

        lua_newtable(L);
        lua_pushcfunction(L, l_player_ptr);
        lua_setfield(L, -2, "ptr");
        lua_pushcfunction(L, l_player_id);
        lua_setfield(L, -2, "id");
        lua_pushcfunction(L, l_player_count);
        lua_setfield(L, -2, "count");
        lua_pushcfunction(L, l_player_valid);
        lua_setfield(L, -2, "valid");
        lua_pushcfunction(L, l_player_pos);
        lua_setfield(L, -2, "pos");
        lua_pushcfunction(L, l_player_set_pos);
        lua_setfield(L, -2, "set_pos");
        lua_setfield(L, -2, "player");

        lua_newtable(L);
        lua_pushcfunction(L, l_net_active);
        lua_setfield(L, -2, "active");
        lua_pushcfunction(L, l_net_send);
        lua_setfield(L, -2, "send");
        lua_pushcfunction(L, l_net_start);
        lua_setfield(L, -2, "start");
        lua_setfield(L, -2, "net");

        lua_newtable(L);
        lua_pushcfunction(L, l_chat_set_name);
        lua_setfield(L, -2, "set_name");
        lua_pushcfunction(L, l_chat_send);
        lua_setfield(L, -2, "send");
        lua_pushcfunction(L, l_chat_players);
        lua_setfield(L, -2, "players");
        lua_pushcfunction(L, l_chat_history);
        lua_setfield(L, -2, "history");
        lua_setfield(L, -2, "chat");

        lua_newtable(L);
        lua_pushcfunction(L, l_hud_print);
        lua_setfield(L, -2, "print");
        lua_setfield(L, -2, "hud");

        lua_newtable(L);
        lua_pushcfunction(L, l_entities_count);
        lua_setfield(L, -2, "count");
        lua_pushcfunction(L, l_entities_id);
        lua_setfield(L, -2, "main_id");
        lua_pushcfunction(L, l_entities_ptr);
        lua_setfield(L, -2, "ptr");
        lua_pushcfunction(L, l_entities_pos);
        lua_setfield(L, -2, "pos");
        lua_setfield(L, -2, "entities");

        lua_newtable(L);
        lua_pushcfunction(L, l_input_connected);
        lua_setfield(L, -2, "connected");
        lua_pushcfunction(L, l_input_buttons);
        lua_setfield(L, -2, "buttons");
        lua_pushcfunction(L, l_input_left);
        lua_setfield(L, -2, "left");
        lua_pushcfunction(L, l_input_right);
        lua_setfield(L, -2, "right");
        lua_setfield(L, -2, "input");

        lua_newtable(L);
        lua_pushcfunction(L, l_mods_list);
        lua_setfield(L, -2, "list");
        lua_setfield(L, -2, "mods");

        lua_setglobal(L, "dc2");
    }

    bool runFile(const std::string& path)
    {
        if (luaL_loadfile(g_L, path.c_str()) != LUA_OK)
        {
            std::cerr << "[lua] load error " << path << ": " << lua_tostring(g_L, -1) << std::endl;
            lua_pop(g_L, 1);
            return false;
        }
        if (lua_pcall(g_L, 0, 0, 0) != LUA_OK)
        {
            std::cerr << "[lua] runtime error " << path << ": " << lua_tostring(g_L, -1) << std::endl;
            lua_pop(g_L, 1);
            return false;
        }
        return true;
    }
} // namespace

void dc2LuaInitFromMods()
{
    if (g_L != nullptr)
        return;

    std::vector<std::string> dirs;
    std::vector<std::string> ids;
    dc2ModsLoadedDirs(dirs, ids);
    if (dirs.empty())
        return;

    g_L = luaL_newstate();
    if (g_L == nullptr)
    {
        std::cerr << "[lua] failed to create state" << std::endl;
        return;
    }
    luaL_openlibs(g_L);
    registerApi(g_L);

    size_t loaded = 0;
    for (size_t i = 0; i < dirs.size(); ++i)
    {
        const std::filesystem::path script = std::filesystem::path(dirs[i]) / "main.lua";
        if (!std::filesystem::is_regular_file(script))
            continue;
        if (runFile(script.string()))
        {
            ++loaded;
            std::cout << "[lua] loaded " << (i < ids.size() ? ids[i] : dirs[i])
                      << " (main.lua)" << std::endl;
        }
    }
    std::cout << "[lua] " << loaded << " script(s) loaded" << std::endl;
}

void dc2LuaFrame(uint32_t frameNo, uint8_t* rdram, size_t rdramSize)
{
    g_rdram = rdram;
    g_rdramSize = rdramSize;
    g_frame = frameNo;

    if (g_L == nullptr)
        return;

    if (g_hasFrameHooks)
    {
        lua_getfield(g_L, LUA_REGISTRYINDEX, "dc2_frame_hooks");
        if (lua_istable(g_L, -1))
        {
            const int n = static_cast<int>(luaL_len(g_L, -1));
            for (int i = 1; i <= n; ++i)
            {
                lua_rawgeti(g_L, -1, i);
                lua_pushinteger(g_L, static_cast<lua_Integer>(frameNo));
                if (lua_pcall(g_L, 1, 0, 0) != LUA_OK)
                {
                    std::cerr << "[lua] game_frame hook error: " << lua_tostring(g_L, -1) << std::endl;
                    lua_pop(g_L, 1);
                }
            }
        }
        lua_pop(g_L, 1);
    }

    // Mod messages are polled here (once per guest frame, on the same thread as
    // the hooks) so a net_message handler can call dc2.net.send without
    // re-entering the transport mutex that drain() holds.
    if (g_hasNetHooks)
    {
        std::vector<uint8_t> msg;
        uint8_t senderRole = 0;
        int budget = 8;
        while (budget-- > 0 && netPoll(msg, senderRole))
        {
            handleChatPayload(g_L, msg, senderRole);
            lua_getfield(g_L, LUA_REGISTRYINDEX, "dc2_net_hooks");
            if (!lua_istable(g_L, -1))
            {
                lua_pop(g_L, 1);
                break;
            }
            const int n = static_cast<int>(luaL_len(g_L, -1));
            for (int i = 1; i <= n; ++i)
            {
                lua_rawgeti(g_L, -1, i);
                lua_pushlstring(g_L, reinterpret_cast<const char*>(msg.data()), msg.size());
                lua_pushinteger(g_L, senderRole);
                if (lua_pcall(g_L, 2, 0, 0) != LUA_OK)
                {
                    std::cerr << "[lua] net_message hook error: " << lua_tostring(g_L, -1) << std::endl;
                    lua_pop(g_L, 1);
                }
            }
            lua_pop(g_L, 1);
        }
    }

    // Roster heartbeat: announce our name periodically while the transport is up.
    if (netActive() && !g_playerName.empty() &&
        (g_lastAnnounceFrame == 0u || frameNo - g_lastAnnounceFrame >= 300u))
    {
        g_lastAnnounceFrame = frameNo;
        sendPrefixed(kHelloPrefix, g_playerName);
    }
}

bool dc2LuaHasFrameHooks()
{
    return g_hasFrameHooks;
}

void dc2LuaSetGameState(uint32_t scriptFrame, uint32_t loopNo, uint32_t mapNo,
                        uint32_t charaId, uint32_t charaCount, uint32_t charaPtr,
                        float px, float py, float pz)
{
    g_scriptFrame = scriptFrame;
    g_loop = loopNo;
    g_map = mapNo;
    g_charaId = charaId;
    g_charaCount = charaCount;
    g_charaPtr = charaPtr;
    g_px = px;
    g_py = py;
    g_pz = pz;

    // map_load fires on a loop or map transition (including the first publish).
    if (g_L != nullptr && g_hasMapHooks && (loopNo != g_lastLoop || mapNo != g_lastMap))
    {
        lua_getfield(g_L, LUA_REGISTRYINDEX, "dc2_map_hooks");
        if (lua_istable(g_L, -1))
        {
            const int n = static_cast<int>(luaL_len(g_L, -1));
            for (int i = 1; i <= n; ++i)
            {
                lua_rawgeti(g_L, -1, i);
                lua_pushinteger(g_L, static_cast<lua_Integer>(loopNo));
                lua_pushinteger(g_L, static_cast<lua_Integer>(mapNo));
                if (lua_pcall(g_L, 2, 0, 0) != LUA_OK)
                {
                    std::cerr << "[lua] map_load hook error: " << lua_tostring(g_L, -1) << std::endl;
                    lua_pop(g_L, 1);
                }
            }
        }
        lua_pop(g_L, 1);
    }
    g_lastLoop = loopNo;
    g_lastMap = mapNo;

    // entity_spawn / entity_despawn: watch the 128-slot character table for slots
    // becoming valid/invalid. Cheap (128 dword reads/frame) and only armed when a
    // mod asked for the hooks.
    if (g_L != nullptr && g_rdram != nullptr && (g_hasSpawnHooks || g_hasDespawnHooks))
    {
        const uint32_t slots = g_charaCount < 128u ? g_charaCount : 128u;
        for (uint32_t i = 0; i < slots; ++i)
        {
            uint32_t ptr = 0;
            std::memcpy(&ptr, g_rdram + (0x1DD8260u + 0x78u + i * 0x40u), 4);
            const bool valid = ptr > 0x80000u && ptr < 0x2000000u;
            const uint8_t bit = static_cast<uint8_t>(1u << (i & 7u));
            const bool was = (g_entityValid[i >> 3] & bit) != 0u;
            if (valid == was)
                continue;
            if (valid)
                g_entityValid[i >> 3] |= bit;
            else
                g_entityValid[i >> 3] &= static_cast<uint8_t>(~bit);
            if (valid && g_hasSpawnHooks)
                callSlotHooks(g_L, "dc2_spawn_hooks", i, ptr);
            else if (!valid && g_hasDespawnHooks)
                callSlotHooks(g_L, "dc2_despawn_hooks", i, ptr);
        }
    }
}
