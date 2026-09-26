# Dark Cloud 2 — PC port (static recompilation)

A native Windows port of **Dark Cloud 2 / Dark Chronicle** (NTSC-U, `SCUS_972.13`),
built on the [PS2Recomp](https://github.com/ran-j/PS2Recomp) static recompilation
platform. The retail game runs as native x64 code — not emulation — with modding,
scripting, and built-in online co-op.

## Features

- **Native PC port** — recompiled R5900 code + emulated PS2 hardware peripherals (GS/VU1/SPU2), 60 FPS patch (opt-in), resolution scaling, save files.
- **Built-in 2-player online co-op** — host-authoritative world sync (positions, chests, events), chat/roster HUD, classic relay protocol + experimental authority mode. Play with a friend over any TCP relay.
- **Mod framework** — drop-in mod folders (`Mods/<name>/modinfo.json`): file/`DATA.DAT` overlays, memory patches at boot, asset packs, per-mod settings. No tooling required to install.
- **Embedded Lua 5.4** — game scripts: `game_frame`/`map_load`/`entity_spawn` hooks, entity/player/input/memory/network/chat APIs.
- **GUI launcher** (`dc2_Launcher`) — pick your ISO, extract the game, configure graphics/60 FPS/debug options, scan mods, configure controllers, launch.
- **Debug/cheat menu** (opt-in) for quick warps and testing.

## Requirements

- **Windows 10/11 x64**
- **Visual Studio 2022 or 2019** (Community/Pro/Enterprise or Build Tools) with the *Desktop development with C++* workload
- **CMake + Ninja** (VS-bundled works; `build.bat` picks them up automatically)
- **.NET 8 SDK** *(optional — only to build `dc2_Launcher`)*
- **Your own copy of Dark Cloud 2** (NTSC-U `SCUS_972.13`). No game files are included in this repository — supply the disc/ISO yourself.

## Quick start

```bat
build.bat          :: configure + build (first run downloads deps; ~30-60 min)
play_game.bat      :: play (uses DATA\ folder, DC2_ISO env var, or an ISO in the repo root)
```

To play you need game data from exactly one of:

| Source | What to do |
|---|---|
| ISO file | Put `Dark Cloud 2 (USA) (v2.00).iso` (or any `*.iso`) in the repo root, or `set DC2_ISO=C:\path\to\game.iso` |
| Extracted folder | Extract the disc contents to a `DATA\` folder in the repo root (the launcher does this automatically) |

`SCUS_972.13` (the main ELF, at the disc root) must be present in the repo root or in `DATA\`.

## GUI launcher (recommended)

```bat
cd dc2_Launcher
dotnet build -c Release
dotnet run --project src\DC2Launcher.App -c Release
```

The launcher extracts your ISO into `DATA\`, writes settings to `Config\launcher_settings.json`,
and launches the game with your chosen options (60 FPS, debug menu, resolution, mods,
controller mapping).

## Co-op (2 players)

Classic relay mode (recommended, proven):

```bat
tools\coop_classic_server.bat   :: run once anywhere (or a public server)
tools\coop_classic_host.bat     :: player 1 (WASD)
tools\coop_classic_guest.bat    :: player 2 (arrow keys) — set DC2_COOP_SERVER to the relay host
```

Experimental authority mode lives in `tools\coop_authority.bat` / `coop_host.bat` / `coop_guest.bat`.
Details and troubleshooting: `docs/COOP.md`, `docs/COOP_PLAYTEST.md`.

## Modding

- Install mods: drop folders into `Mods\` (see `Mods\Example Mod\modinfo.json`).
- Manage mods: `tools\mods.bat` (or the launcher's Mods tab).
- Write Lua scripts + full API reference: `docs/MODDING.md`.
- HD texture packs (dump/upscale/replace pipeline): `docs/HD_TEXTURES.md`.

## Environment variables (common ones)

| Variable | Effect |
|---|---|
| `DC2_ISO_PATH` | ISO file to mount for game data |
| `DC2_DATA_DIR` | Extracted game folder to use instead of an ISO |
| `DC2_PATCH_60FPS` | `1` = 60 FPS mode (opt-in) |
| `DC2_DEBUG_MENU` | `1` = debug warp menu |
| `DC2_COOP` / `DC2_COOP_ROLE` / `DC2_COOP_SERVER` | co-op arm / role / relay address |
| `DC2_MEMCARD1_DIR` / `DC2_MEMCARD2_DIR` | save directories |

## Regenerating the game code (optional)

The recompiled game sources under `ps2xRuntime/src/runner/` are already generated and committed.
To regenerate them from your own ELF:

```bat
build.bat && build64\ps2xRecomp\ps2xRecomp.exe config_dc2_final.toml
```

then copy the output over `ps2xRuntime\src\runner\` and rebuild.

## Repository layout

| Path | Contents |
|---|---|
| `ps2xRuntime/` | runtime + all Dark Cloud 2 overrides, co-op netcode, mod/Lua/HUD subsystems |
| `ps2xRuntime/src/runner/` | recompiled game code (generated from `SCUS_972.13`) |
| `ps2xRecomp/` `ps2xAnalyzer/` `ps2xIOP/` `ps2xStudio/` `ps2xTest/` | recompiler toolchain (upstream PS2Recomp modules) |
| `dc2_Launcher/` | C# WPF launcher (ISO extraction, settings, mods, controller config) |
| `tools/` | mod manager, co-op scripts, relays, launcher scripts, dev harness |
| `Mods/` | installed mods (example included) |
| `docs/` | modding API, co-op docs, architecture registry, dev notes |
| `config_dc2_final.toml` | recompiler configuration (453 stubs + patches) |

## License

- The port, overrides, co-op, mod framework, Lua integration and tools: **GPL-3.0** (see `LICENSE`).
- `dc2_Launcher/`: **AGPL-3.0** (see `dc2_Launcher/LICENSE`), originally from [Red-tv141/DC2-PS2RECOMP](https://github.com/Red-tv141/DC2-PS2RECOMP).
- Upstream platform: [ran-j/PS2Recomp](https://github.com/ran-j/PS2Recomp), GPL-3.0.

This project contains **no game assets or game code derived from the ISO at runtime** — you must
own the game and supply `SCUS_972.13` yourself. Dark Cloud 2 is © Level-5 / Sony Computer
Entertainment; this project is not affiliated with or endorsed by either.

## Credits

- **ran-j** and the PS2Recomp contributors — recompilation platform.
- **Red-tv141/DC2-PS2RECOMP** — DC2 game-override lineage, recompiler config, C# launcher.
- The co-op, mod, Lua, and packaging work in this repository is an independent continuation of that lineage.
