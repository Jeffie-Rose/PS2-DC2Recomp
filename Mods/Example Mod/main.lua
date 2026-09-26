-- Example tier-3 mod: loaded by the embedded Lua runtime.
local name = os.getenv("DC2_PLAYER_NAME") or "player"
local netUp = dc2.net.start()
dc2.chat.set_name(name)
dc2.hud.print("HUD online: " .. name)

local mods = dc2.mods.list()
dc2.log(string.format("mods loaded: %d", #mods))
for _, m in ipairs(mods) do
    dc2.log(string.format("  mod %s v%s (%s)", m.id, m.version, m.name))
end
dc2.log("Example Mod: main.lua loaded (player=" .. name .. ", net active="
        .. tostring(dc2.net.active()) .. ", transport=" .. tostring(netUp) .. ")")

local hooked = 0
local greeted = false

dc2.hook("game_frame", function(frame)
    hooked = hooked + 1
    if hooked == 1 then
        local lx, ly = dc2.input.left()
        dc2.log(string.format("input connected=%s buttons=0x%04x left=(%d,%d)",
            tostring(dc2.input.connected()), dc2.input.buttons(), lx, ly))
    end
    if hooked == 1 or hooked % 120 == 0 then
        local x, y, z = dc2.player.pos()
        dc2.log(string.format(
            "game_frame=%d loop=%d map=%d in_game=%s pos=(%.1f,%.1f,%.1f)",
            frame, dc2.game.loop(), dc2.game.map(),
            tostring(dc2.player.valid()), x, y, z))
    end
    if not greeted and frame > 30 and dc2.net.active() then
        greeted = true
        dc2.chat.send("hello from " .. name)
    end
end)

dc2.hook("chat_message", function(role, from, text)
    dc2.log(string.format("chat role=%d from=%s: %s", role, from, text))
end)

dc2.hook("map_load", function(loop, map)
    dc2.log(string.format("map_load loop=%d map=%d entities=%d main_id=%d",
        loop, map, dc2.entities.count(), dc2.entities.main_id()))
end)

dc2.hook("entity_spawn", function(slot, ptr)
    dc2.log(string.format("entity_spawn slot=%d ptr=0x%x", slot, ptr))
end)

dc2.hook("net_message", function(payload, role)
    dc2.log(string.format("net_message role=%d bytes=%d", role, #payload))
end)
