# Merge note: frame_end_and_core_helpers.inc (F1 canonical <- F3)

Source compared: `E:\DC2_Canonical` (F1, canonical) vs
`E:\Dark cloud 2\archive\recomp_forks\DC2-PS2RECOMP-0.9.4` (F3, archived 2026-09-25).

## Result

F3's `frame_end_and_core_helpers.inc` (1339 lines) is a **superset** of F1's (1080 lines) for
G-phase content: zero G-tokens exist only in F1. The raw diff was 272 added / 11 changed lines.

The additions split into two groups.

### Merged now (self-contained, no new subsystem required)

| Phase | Change | Why it matters |
|---|---|---|
| **G599** | Publish the script clock: `g_dc2ScriptFrame.store(g598_script_frame(n), ...)` in `f29_mgendframe_probe`. | **F1 declares and READS `g_dc2ScriptFrame` in many GS-side probes but never wrote it** — the global was permanently 0, so every script-clock-keyed diagnostic (G600 sky probe, G716 authority, page digests, VRAM materialization, etc.) was miswindowed. The extern was already staged at `dc2_game_override.cpp:341` with a G599 comment, confirming the store was lost in fork divergence. |
| **G740** | Guard the `[G147:gif] parserOther` subtraction against a negative value; print `imageMs` and `n/a(cross-thread)`. | `packet` is timed on the PARSE thread while `draw`/`image` run on the EXEC thread, so the old code printed a meaningless (often negative) residue. |

### Deferred (requires F3-lineage perf instrumentation F1 does not have)

These blocks were **not** merged because they reference symbols absent from F1:

| Phase | Required symbol(s) | Status in F1 |
|---|---|---|
| G734 | `g713_exec_busy_ns`, `g713_exec_idle_ns`, `g713_exec_cpu_ns` | absent (F1 has `g182ThreadCpuNs`, `g156ThreadCpuNs` instead) |
| G735 | `g735ThreadCpuNs`, slot table `kG735SlotVu1/Parse`, `g735CaptureThreadHandle` | absent |
| G736 | same slot-table reader | absent |
| G738 | `g_dc2RenderedFrame` | absent |
| G739 | `g739DispatchReport` | absent |
| G742 | (only a `waitSrc=` disclosure on `[G182:ee]`) | cosmetic; skipped |
| G745 | `g297GsSpinNs`, `parseWorkMs` | absent |

F1 and F3 are two divergent post-G654 branches: F1 continued the GS/rasterizer/co-op lineage
(files through G716), F3 continued the frame-level thread-CPU/diagnostic lineage (through G745).
Porting the deferred blocks is a self-contained workstream: bring over F3's thread-CPU slot table,
the G713 executor CPU accessors, the G297 GS-spin counter, `g_dc2RenderedFrame`, and
`g739DispatchReport` as one unit, then re-apply the reporter changes.

## Reference

Full diff: `C:\Users\armor\AppData\Local\Temp\opencode\frame_end_f1_f3.diff` (session temp; regenerate with
`git diff --no-index F1_file F3_file`).

F3 file: `E:\Dark cloud 2\archive\recomp_forks\DC2-PS2RECOMP-0.9.4\ps2xRuntime\src\dc2_game_override_parts\frame_end_and_core_helpers.inc`

## Verification of the other three shared override files

Compared G-phase token sets F1 vs F2 and F1 vs F3:

| File | F1-only phases | F2-only phases | F3-only phases |
|---|---|---|---|
| `common_state.inc` | *(none)* | *(none)* | G182, G303, G496, G732, G734, G737, G738, G743 |
| `object_init_and_pad.inc` | *(none)* | *(none)* | *(none)* |
| `dungeon_runtime.inc` | *(none)* | *(none)* | *(none)* |

**Conclusion:** F1 is a superset for `object_init_and_pad.inc` and `dungeon_runtime.inc`. The only
content F1 lacks across all three files is the F3 thread-CPU/perf-diagnostic lineage, identical in
nature to the deferred `frame_end` blocks above. No blind copy was performed; F1 stays canonical
apart from the two merged fixes.
