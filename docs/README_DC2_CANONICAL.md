# DC2_Canonical — canonical Dark Cloud 2 recomp build tree

This is the single consolidated source tree for the Dark Cloud 2 static-recompilation
effort. It was created on 2026-09-25 by copying the newest working fork
(`E:\Dark cloud 2\PS2Recomp`) and grafting the unique assets from the other forks.

**Platform decision:** the static-recomp runtime (`ps2EntryRunner.exe`) is the canonical
game. It compiles the retail MIPS from `SCUS_972.13` to native C++ and runs it. This is
not emulation; only the PS2 hardware peripherals (GS/VU1/SPU2) are emulated.

## Build

```
build_runner.bat            # configure + build ps2EntryRunner (full, slow: ~847 steps)
build_runner.bat runtime    # configure + build ps2_runtime only (fast validation)
build_runner.bat clean ...  # delete CMakeCache.txt first (full reconfigure)
```

Toolchain: VS2019 BuildTools LLVM `clang-cl` + bundled Ninja (exact paths in the .bat).
`build64/_deps` is pre-seeded, so `FETCHCONTENT_FULLY_DISCONNECTED=ON` is used to avoid
re-downloading raylib. Delete `build64/_deps` to force a fresh fetch.

Output: `build64\ps2xRuntime\ps2EntryRunner.exe` (~74.5 MB, staged FFmpeg DLLs beside it).

## Run

```
set DC2_ISO_PATH=E:\Dark cloud 2\[PS2](2001) Dark Cloud 2.iso
build64\ps2xRuntime\ps2EntryRunner.exe SCUS_972.13
```

`SCUS_972.13` is gitignored (retail data); copy it into the tree root to boot.
Expected startup: 5 game overrides apply, including the 2-player co-op override:
`Applied 5 matching override(s)` / `Override resolution summary: 167 total (41 resolved, 126 unresolved)`.
The 126 "unresolved" entries are SDK/debug symbol binds absent from `PS2_STUB_LIST`;
they are not gameplay overrides (gameplay binds are address-based and always register).

## Launcher

```
tools\launcher.bat
```

Three tabs: **Play** (ISO + 60 FPS/debug/HD-texture toggles, launch), **Mods**
(list/enable/disable/validate/create, wraps `tools\mod_manager.py`), **Co-op**
(start relay/authority/host/guest and poll the server-browser status endpoint).
Settings persist to `Config\launcher_settings.json`.

## Layout

| Path | Contents |
|---|---|
| `ps2xRuntime/` | runtime + game overrides (the game lives here) |
| `ps2xRuntime/src/dc2_game_override.cpp` | `#include`s all 27 override parts |
| `ps2xRuntime/src/dc2_game_override_parts/` | 27 `.inc` gameplay/GS/co-op overrides |
| `ps2xRuntime/src/dc2_coop_v5_net.cpp` | co-op v5 client/server networking |
| `ps2xRecomp/` `ps2xAnalyzer/` `ps2xIOP/` `ps2xStudio/` `ps2xTest/` | recompiler + tools |
| `tools/dc2_Launcher/` | C# launcher (source); includes mod manifest/scanner stubs |
| `docs/dc2_plans/` | 783 G-phase fix logs + phase history (G1–G654) |
| `docs/dc2_source/` | co-op design, project state, fork merge notes |
| `docs/architecture/subsystem_map.json` | machine-readable subsystem registry |

## Provenance (consolidation 2026-09-25)

| Fork | Disposition | Unique content grafted |
|---|---|---|
| `E:\Dark cloud 2\PS2Recomp` | base; kept as fallback | all |
| `E:\Dark cloud 2\archive\recomp_forks\DC2-PS2RECOMP-0.9.4` | archived 2026-09-25 | G1–G654 plans; 2 `.inc` fixes |
| `E:\Dark cloud 2\archive\recomp_forks\DC2-PS2RECOMP-main` | archived 2026-09-25 | C# launcher sources |
| `E:\DC2_Recom-Jeff\PS2Recomp` | kept as fallback | `include/ghidra/dc2_types.h` |
| `E:\Dark cloud 2\archive\recomp_forks\PS2Recomp-rasterizer-2` | archived 2026-09-25 | none (bare upstream) |

Merged changes (see `docs/dc2_source/MERGE_NOTE_frame_end_G599_G740.md`):
- **G599** — publish `g_dc2ScriptFrame` (was declared and read, never stored; it stayed 0).
- **G740** — refuse the cross-thread negative `parserOther` diagnostic.
- Deferred: F3's G734/G735/G736/G738/G739/G745 thread-CPU perf blocks, which need F3's
  instrumentation subsystem (not present in this lineage).

## Verification

- `ps2_runtime` and `ps2EntryRunner` build clean (0 errors) with clang-cl 12.0.0.
- Boot test 2026-09-25 16:42: raylib 5.5 + OpenGL 3.3 (RTX 4070 Ti), all 5 override
  descriptors applied, 60 s of live guest execution, no crash.

## Next

1. Playability pass: title → Palm Brinks → dungeon → save, verified against PCSX2 MCP.
2. Mod framework: `Mods/manifest.json` loader (reuse `tools/dc2_Launcher` Mod* sources).
3. Finish co-op v5 authority path (`dc2_coop_v5_net` + backend_server).
