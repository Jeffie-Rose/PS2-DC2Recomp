# Phase 1 findings — data-source resolution defect (2026-09-25)

## Defect found and fixed: disc data never mounted on machines without the hardcoded paths

`DC2_DATA_DIR` / `DC2_ISO_PATH` are the documented single data-source rule (G449,
`dc2OpenGameDataSource()` in `ps2_iso_mount.cpp`). Two call sites had their own private
hardcoded ISO candidate lists and never called the resolver:

- `ps2xRuntime/src/lib/Kernel/Stubs/CD.cpp` — `f55EnsureIsoMountOpen()` tried only
  `D:/ps2r/dc2/Dark Cloud 2 (USA) (v2.00).iso` and `Dark Cloud 2 (USA) (v2.00).iso`.
- `ps2xRuntime/src/lib/ps2_audio_parts/dc2_g386_voice_audio.inc` — `g386EnsureIsoOpen()`
  tried the same two paths.

Consequence on this machine: the guest ran with **no disc data at all**. The startup log
was full of `[ISO] Cannot open: D:/ps2r/dc2/...` and the game could not load any map,
even though the ISO existed and every override applied. This is a plausible root cause of
the long-standing "first town partially works / it is not the game" symptom, because it is
invisible unless you read stderr: the CPU, overrides, and renderer all start normally.

Fix: both sites now call `dc2OpenGameDataSource()` (single resolution rule:
`DC2_DATA_DIR` -> `DC2_ISO_PATH` -> legacy candidates). Files:

- `ps2xRuntime/src/lib/Kernel/Stubs/CD.cpp`
- `ps2xRuntime/src/lib/ps2_audio_parts/dc2_g386_voice_audio.inc`

## Verified after the fix

Same runner, route `route12-dungeon1-d02f01` (debug menu -> dungeon d02f01, masked lstick):

- `[ISO] Mounted: E:\Dark cloud 2\[PS2](2001) Dark Cloud 2.iso  iso9660_files=88`
- `[data] loaded DATA archive index: 6688 entries (DAT lba=0xb0c)`
- Progression: `loop=0` (menu) -> `loop=2` (dungeon) at scriptFrame 249.
- Player character loaded (`count=128`, `CActionChara` at `0xce39c0`), position moved
  during the recorded walk, then settled.
- No crashes, no asserts, no `Unimplemented` calls.
- Only missing files: `game.cfg`, `map/d/d02/f01/d02f01.sky`, `.efp` (known asset gaps,
  also recorded on the original dev host).

Route `route2-palace-combat` and `route3-palace-fight-palmbrinks` also reached `loop=2`
(scene `s51`), with the same `.sky`/`.efp`/`game.cfg` gaps.

## Harness added

`tools/phase1_route.ps1` — replays a recorded G525 route with console capture and prints
overrides, `[G361:pos]` progression, and errors. Prefers the masked `.lstick.txt` sidecar
when present. Logs under `logs/phase1/`.

## What "complete / fully runnable / fully moddable" still needs

### Complete
- Systematic per-scene pass: every story map, town, dungeon, and system reachable and
  interactive. The 13 recorded G525 routes are the seed set; a sweep that records
  loop/map/position and failure per route is the objective completeness matrix.
- Missing-asset audit: `.sky`, `.efp`, `game.cfg`, and any other disc files the loader
  asks for that the ISO lacks by name/shape.
- Save/load, chapter progression, Georama, Ridepod, fishing, invention, photography.

### Fully runnable
- Crash/stall soak per route; the present-thread debug-menu freeze and 4:3 culling/FOV
  stretch called out in the portfolio docs.
- Audio/video parity (ezMidi, VAG voice, FMV).
- Deterministic boot from a clean machine with only `DC2_ISO_PATH` set (this fix).

### Fully moddable (three tiers)
1. **No-rebuild (data/asset mods)** — a real `Mods/` framework: `manifest.json`
   (id/version/load-order/dependencies), a virtual file overlay that wins over the ISO for
   any disc path (textures today; models/maps/audio/data next), env-flag declarations, and
   memory patch lists. This is the tier that makes the game moddable by non-programmers.
2. **Rebuild (code mods)** — the existing `dc2_game_override_parts/*.inc` +
   `registerFunction` system, documented as the mod ABI.
3. **Runtime plugin ABI** — mods built as separate DLLs, loaded by the launcher, registering
   overrides/memory hooks without rebuilding the runner. The end state for "fully moddable".
