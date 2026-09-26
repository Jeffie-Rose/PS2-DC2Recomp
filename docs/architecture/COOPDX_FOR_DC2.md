# COOPDX-for-DC2: target architecture

North star: **`coop-deluxe/sm64coopdx`**, but for Dark Cloud 2.
That project is a native PC port of SM64 with (a) online co-op that synchronizes all
entities and levels, (b) a first-class Lua modding API, (c) runtime asset packs
(`dynos/packs`), and (d) dedicated servers and a community ecosystem.

Our canonical platform is the static-recomp runtime (`E:\DC2_Canonical`,
`build64\ps2xRuntime\ps2EntryRunner.exe`), with co-op v5 already partially built
(`dc2_coop_v5_net.cpp`, `coop_controller.inc`, Python authority backend).

## Component map

| coopdx component | DC2 equivalent | Status |
|---|---|---|
| Native port core | Static recomp of `SCUS_972.13` (7,810 functions) | working, bootable |
| `mods/<id>/modinfo.json` + `main.lua` | `Mods/<id>/` JSON manifest + `main.lua` (Lua 5.4) | live |
| Lua API (hooks/events/objects/chat) | Embedded Lua 5.4 + `dc2` API (`log`/`frame`/`game`/`player`/`memory`/`hook`/`net`) | first two groups live |
| Chat / player list / nametags | v5 `Mod` message channel (relay forwards it) | channel live, UI missing |
| `dynos/packs` runtime assets | `Mods/` overlay (loose files + DATA.DAT entries) + `packs/` trees | live |
| Entity/level sync co-op | co-op v5 authority (snapshots, input frames) | partial |
| Dedicated server (`coopdx-server`) | `backend_server/` authority (Python) | partial |
| Server browser / master list | launcher + relay | not started |
| Launcher/mod manager | `tools/dc2_Launcher` (C#) | source present, scanner only |

## Phases

**P2.1 — Mod engine (done 2026-09-25).** Manifest discovery, `[env]`, `[overlay]`
(loose disc files *and* DATA.DAT archive entries), `[patch]` to guest RAM, logs.
Foundation only; no scripting yet.

**P2.2 — JSON manifest + assets.** `modinfo.json` (id/name/version/authors/loadOrder/
dependencies/client/server flags) parsed with a vendored minimal JSON reader. Keep the
overlay/patch engine; add a `packs/` convention for runtime asset packs (models, maps,
audio) mirroring `dynos/packs`.

**P2.3 — Lua runtime.** Vendor Lua 5.4 into the runner. Each mod's `main.lua` is loaded
in a sandboxed state. API surface, roughly:
- `hook_event("game_frame" | "map_load" | "player_spawn" | "enemy_spawn" | "chat", fn)`
- `hook_function(guest_address_or_symbol, fn)` — same override table as `registerFunction`
- `memory.read_u8/u16/u32/f32(addr)`, `memory.write_*` — guarded guest RAM access
- `player.get_pos/set_pos`, `player.hp`, `characters`, `inventory`
- `input.bind`, `hud.draw_text`, `ui.dialog`
- `net.send(table)`, `net.on("message", fn)` — routed through co-op v5
- `mods.require(id)`, `log.info/warn/error`
Deliverable: a "hello world" mod that draws HUD text and moves the player, no rebuild.

**P2.4 — Co-op completion (coopdx parity core).** Finish v5 authority: canonical
seed/AI/HP/chest state, 60 Hz CRC snapshots, entity spawn sync, player interpolation,
chat, player list, nametags, shared camera policy. Client mods vs server mods, with
server-authoritative validation like coopdx.

**P2.5 — Dedicated server + discovery.** Native (or keep Python) authority server, a
server browser, and mod sync so a client can join a server whose mod set differs.

**P2.6 — Distribution.** Launcher mod manager over `modinfo.json` (start from
`ModScannerService`/`ModModels` in `tools/dc2_Launcher`), versioning, and one-click
pack installs.

## Constraints specific to a recomp (vs. a decomp port)

- We cannot freely call internal engine functions from Lua the way coopdx can; every
  API entry point must go through a guest address wrapper (`registerFunction`), a
  member offset verified against Ghidra/PCSX2, or a hook in an override part.
  **Address/offset tables are the API's backbone** — they must live in data, not code.
- Asset packs replace bytes at the file/archive layer (already possible via overlay);
  unlike decomp ports we do not re-encode engine formats.
- Sync must own the guest state (authority), because the recompiled engine assumes a
  single player. `coop_controller.inc` already intercepts the pad and character paths;
  extend that rather than patching engine internals wholesale.

## Immediate next steps

1. Land JSON manifest + `packs/` convention (P2.2).
2. Vendor Lua 5.4 and expose the first four API groups: `log`, `memory`, `hook_event`,
   `player` (P2.3).
3. Convert the co-op v5 authority into the network backend for `net.*`.
