# Modding Dark Cloud 2 (recomp)

The runner supports three modding tiers, from "drop a folder" to "write C++".

## Tier 1 — no rebuild (runtime mods)

Put a folder under `Mods/` next to `ps2EntryRunner.exe`:

```
Mods/
  MyMod/
    modinfo.json
    files/                 # host files your overlay entries point at
    packs/                 # optional asset pack tree (see below)
```

`modinfo.json`:

```json
{
  "id": "my_mod",
  "name": "My Mod",
  "version": "1.0.0",
  "loadOrder": 10,
  "enabled": true,
  "requires": ["base_mod"],
  "env": { "DC2_PATCH_60FPS": 1 },
  "overlays": {
    "/GAME.CFG": "files/game.cfg",
    "/map/m/m01/m01.map": "files/m01.map"
  },
  "patches": [
    { "address": "0x01FFF000", "bytes": "DE AD BE EF" }
  ]
}
```

An older `mod.ini` (INI) manifest is still supported as a fallback if
`modinfo.json` is absent.

### Semantics

- **Overlay** — a mod file shadows the disc for that guest path. Paths match
  case-insensitively with `/` separators and any `;1` version suffix stripped. This
  covers both loose disc files (`fioOpen`, `sceCdSearchFile`) **and DATA.DAT archive
  entries** (models, maps, most content), because overlay files get their own synthetic
  LBA in the mount and the existing sector-read path serves them unchanged.
- **Pack tree** (`packs/`) — the coopdx `dynos/packs` equivalent. Every file under
  `Mods/<id>/packs/` (or a global `packs/`, or `DC2_PACKS_DIR`) is registered as an
  overlay with its path relative to the pack root. A file at
  `packs/MyPack/map/m/m01/m01.map` shadows `/map/m/m01/m01.map`.
- **Patch** — bytes written into guest RAM once, at the first `mgEndFrame`. Addresses
  above `0x01FFFFFF` are masked to physical. Data tables read during gameplay are safe
  to patch here; values the boot path already consumed are not.
- **Env** — set before the runtime's flag reads, so `env` can enable any documented
  `DC2_*` flag (see `docs/dc2_plans/env-flags.md`).
- **Load order** — ascending `loadOrder`; on a path collision the later mod wins.
- Logs: every action prints `[mods] ...` on stdout/stderr. `Mods/Example Mod/` is a
  working self-test (JSON manifest + explicit overlay + pack tree + patch).

### Textures (existing)

HD texture replacement is separate and already shipped: PNGs named by PCSX2 texture
hash under `Mods/HD Texture/`, enabled with `DC2_TEXTURE_REPLACEMENTS=1` or
`DC2_MODS_ENABLED=1`. `DC2_TEXTURE_DUMP=1` dumps the originals in the same naming
scheme.

## Managing mods

```
tools\mods.bat list
tools\mods.bat validate
tools\mods.bat enable  <id>
tools\mods.bat disable <id>
tools\mods.bat init    <id> ["Display Name"]
tools\mods.bat run     [--iso PATH]
```

`validate` checks that every overlay source file exists, every patch has
`address`/`bytes`, and `main.lua` is readable. `init` scaffolds
`Mods/<id>/{modinfo.json,main.lua,files/,packs/}`.

## Tier 2 — rebuild (code mods)

Gameplay overrides live in `ps2xRuntime/src/dc2_game_override_parts/*.inc` and are
registered by `registerFunction(address, fn)` / `bindAddressHandler(address, name)`.
Rebuild with `build_runner.bat`. This is the escape hatch for new mechanics.

## Tier 3 — scripted mods (embedded Lua)

A mod can ship `main.lua` next to its manifest. It is loaded by the runner's embedded
Lua 5.4 with the standard libraries plus a `dc2` API:

```lua
dc2.log("hello from my mod")          -- prints "[lua] hello from my mod"

dc2.hook("game_frame", function(f)    -- f = guest frame number (mgEndFrame count)
    -- runs once per guest frame
end)

dc2.frame()                           -- current guest frame number

-- game state (published by the frame-end override every frame)
dc2.game.loop()          -- 0 menu, 1 edit/town, 2 dungeon, 3 title
dc2.game.map()           -- current map number
dc2.game.script_frame()  -- script clock

dc2.player.valid()       -- true when a main character is live
dc2.player.pos()         -- x, y, z
dc2.player.set_pos(x,y,z)
dc2.player.ptr()         -- CActionChara guest address
dc2.player.id()          -- character id (0 = Max, ...)
dc2.player.count()

-- character slots (128-slot scene table; most are empty - check ptr > 0)
dc2.entities.count()     -- slot count
dc2.entities.main_id()   -- active character id
dc2.entities.ptr(i)      -- CActionChara guest address for slot i (0 if empty)
dc2.entities.pos(i)      -- x, y, z for slot i

dc2.hook("map_load", function(loop, map) ... end)   -- loop/map transition
dc2.hook("entity_spawn", function(slot, ptr) ... end)
dc2.hook("entity_despawn", function(slot, ptr) ... end)

-- effective pad the game reads (scePad active-high bits; axes 0..255, 0x80 centre)
dc2.input.connected()
dc2.input.buttons()
dc2.input.left()         -- lx, ly
dc2.input.right()        -- rx, ry

-- guest RAM (physical addresses, masked to 0x01FFFFFF, bounds-checked)
local hp  = dc2.memory.read_u16(0x01DD8260 + 0x2E50)
dc2.memory.write_u32(0x00376C50, 1)
-- read/write: u8, u16, u32, i32, f32

-- co-op transport (requires a v5 session: DC2_COOP_V5=1 + DC2_COOP_ROLE)
dc2.net.start()                      -- open the transport on demand
dc2.net.active()                     -- is the v5 transport up
dc2.net.send("payload")              -- opaque bytes to the other side(s)
dc2.hook("net_message", function(payload, senderRole) ... end)

-- built-in chat + roster (rides the Mod channel; coopdx-style)
dc2.chat.set_name("Jeff")            -- announces this player
dc2.chat.send("hello")               -- sends and echoes locally
dc2.chat.players()                   -- array of { role =, name = }
dc2.chat.history()                   -- array of { role =, name =, text = }
dc2.hook("chat_message", function(role, from, text) ... end)

-- host overlay HUD (drawn over the game window; chat shows automatically)
dc2.hud.print("text")

-- loaded mods
dc2.mods.list()          -- array of { id =, name =, version =, dir = }
```

Net routing follows the v5 relay: a client's messages go to the authority, the
authority's messages broadcast to clients. The engine never parses the payload.
Messages received during a frame are polled on the next guest frame, so a handler
may call `dc2.net.send` safely.

`Mods/Example Mod/main.lua` is a working example. Errors are caught per hook and
logged; a broken mod does not take down the runner.

Not yet in the API: entity iteration, `map_load`/`enemy_spawn` events, HUD/input
helpers, and model/asset helpers. See `docs/architecture/COOPDX_FOR_DC2.md`.
