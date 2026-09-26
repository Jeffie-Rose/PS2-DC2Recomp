# Friend repo comparison — `Red-tv141/DC2-PS2RECOMP`

Compared 2026-09-26: `E:\DC2_Canonical` (our consolidated tree, branch `dc2-integration`)
vs a fresh `git clone --depth 1` of https://github.com/Red-tv141/DC2-PS2RECOMP
(719 files, 44.4 MB, `config_dc2_final.toml` 28,436 B, `plans.rar`, G654/G743 lineage).

## Lineage

- **Their repo**: the DC2 gameplay fork of `ran-j/PS2Recomp` (`ps2xRuntime` + 25 override
  `.inc`, `dc2_game_override.cpp`, plans/phase arithmetic through G654/G743). No co-op,
  no mod system, no Lua, no packaging.
- **Ours**: the `E:\Dark cloud 2\PS2Recomp` lineage (through G716) merged with the older
  co-op tree, plus everything built in this project (co-op v4/v5, mod framework, Lua,
  launcher, packaging). Two override parts exist only here.

## Feature matrix

| Feature | Their repo | Canonical |
|---|---|---|
| Static recomp runner | yes | yes |
| Upper-lineage perf work | G654/G743 | G716 |
| 2-player co-op | no | v4 classic + v5 authority (experimental) |
| Chat / roster / HUD | no | yes |
| Mod framework (`modinfo.json`, packs, overlay, patches) | no | yes |
| Embedded Lua 5.4 API | no | yes |
| Mod manager / launcher / server browser | no | yes |
| Distribution packaging (`dist/`, zip) | no | yes (`tools/make_dist.ps1`) |
| `dc2_game_override.cpp` driver | yes | yes |

## Override parts (25 shared files)

- **17 identical** (byte-for-byte).
- **4 differ only by line endings** (`g619_env_flag_cache.inc`, `fmv_ipu.inc`,
  `g385_game_audio.inc`, `g381_dead_stub_repairs.inc`) — line content is identical.
- **4 have real content divergence**:

| File | ours | theirs | repo-only lines | ours-only lines |
|---|---|---|---|---|
| `common_state.inc` | 1032 | 973 | 38 (G743 env-memo promotion, 60fps notes) | 97 |
| `dungeon_runtime.inc` | 1178 | 1165 | 2 (trace) | 15 |
| `object_init_and_pad.inc` | 2711 | 2649 | 6 (scripted-input request) | 68 |
| `frame_end_and_core_helpers.inc` | 1140 | 1371 | **277** (G434/G476/G721–G745 perf diagnostics) | 46 |

- **Only in ours**: `coop_controller.inc`, `pure_engine_overrides.inc`.

### Reading the delta

Theirs is not a superset. Our tree carries the newer co-op/mod work and the G716
rasterizer line; theirs carries the G654–G745 **frame-level perf diagnostics**
(thread-CPU slot table, G726 kick spin, G734–G739 executor/parse columns, G745
parse-work correction). Those 277 lines are exactly the workstream we deferred in
Phase 0 (`MERGE_NOTE_frame_end_G599_G740.md`): they require their supporting files
(`g735ThreadCpuNs`, `g713_exec_*_ns`, `g297GsSpinNs`, `g739DispatchReport`,
`g_dc2RenderedFrame`) which do not exist in our lineage.

## Recommendations

1. **Keep canonical as the game/platform.** Their repo has no feature we lack except
   perf diagnostics.
2. **Optional port (diagnostics only):** bring over the F3-lineage thread-CPU
   instrumentation as one unit (supporting accessors + `frame_end` blocks). This is
   measurement-only and must not be mixed with gameplay changes.
3. **Config:** their `config_dc2_final.toml` (28,436 B) is the newest recompiler
   config; a copy is kept at `docs/dc2_source/config_dc2_final.toml` for reference.
   Our runner is pre-generated and does not need it at runtime.
4. **They could take from us:** co-op, mod framework, Lua, launcher, packaging.

## Port status (2026-09-26): G721–G745 diagnostics, scoped

Ported and verified:

| Item | What landed | Where |
|---|---|---|
| G734 | executor busy/idle monotonic totals, gated on `DC2_G182_EE_STAT` | `ps2_g713_pipeline.cpp` (ring + drain + exec-loop park), accessors `g713_exec_busy_ns`/`g713_exec_idle_ns` |
| G735 | 3-slot thread-CPU table (`DuplicateHandle`+`GetThreadTimes`), capture calls at all three thread entries | `ps2_g713_pipeline.cpp`/`.inc`, `runtime_mtvu_and_env.inc` (slot 1), `ps2_gif_arbiter.cpp` (slot 2) |
| G738 | `g_dc2RenderedFrame` rendered-frame clock; per-window columns primed from first non-zero read | `memory_page_table_and_translate.inc`, `frame_end_and_core_helpers.inc` |
| G742 | `waitSrc=` disclosure appended to `[G182:ee]` | `frame_end_and_core_helpers.inc` |
| G599 family | `[G734:gsx]` and `[G735:cpu]` print on the same n/window cadence as `[G182:ee]`/`[G303:vu1w]` | `frame_end_and_core_helpers.inc` |

Deferred (dependencies absent from this lineage):

- **G739** — needs their G646-table ballast/oracle counters.
- **G745** — needs the G726 kick spin; the MTVU worker in this tree parks on a condition
  variable and has no spin to subtract.
- **G736/G737** route/GL-command censuses and their reporter includes.

Verification: two 75 s boot captures with `DC2_G182_EE_STAT=1` (one also with
`DC2_G713_PIPE=1`). `[G182:ee] ... waitSrc=none(...)` and `[G735:cpu]` print in both;
`[G734:gsx]` prints only with the pipeline armed (busy/idle/occupancy/cpu), and the
priming law holds (no first-window blowups; `vu1CpuMs/f=0.00` until the worker starts).
No crash, no behaviour change on the default path.

## Re-running the comparison

```powershell
git clone --depth 1 https://github.com/Red-tv141/DC2-PS2RECOMP $env:TEMP\DC2-PS2RECOMP-redtv141
# override parts: hash/line compare against E:\DC2_Canonical\ps2xRuntime\src\dc2_game_override_parts
```
