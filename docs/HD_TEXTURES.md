# HD Texture Packs (dump & replace)

The runtime supports PCSX2-compatible HD texture replacement, compiled into every build.
Textures are matched by a key derived from the GS texture state and named:

```
<TEX0Hash>-<CLUTHash>-<TEX0Bits>.png
```

e.g. `587821e9371c5799-e34acfcd25ac1cd1-80402653.png` (512x512 -> 1024x1024 replacement verified working).

## Quick start

1. **Dump textures** (run the game with):
   ```
   set DC2_TEXTURE_DUMP=1
   set DC2_MODS_DIR=<game folder>\Mods
   ```
   PNGs appear in `Mods\Texture Dump\`. Textures <=16x16 are skipped on purpose
   (solid colours / noise). Dumping is **live-driven**: a texture must be rendered
   at least once to be captured, so visit the scenes you want to cover.

2. **Upscale** the PNGs (keep the exact filenames). Real-ESRGAN example:
   ```
   realesrgan-ncnn-vulkan.exe -i "Mods\Texture Dump" -o "Mods\HD Texture" -n realesrgan-x4plus -s 4 -f png
   ```
   For cel-shaded / anime-style game textures `realesrgan-x4plus-anime` or
   `RealESRGAN_x4plus_anime_6B` usually looks better than the photo model.
   Alpha is preserved (RGBA PNGs).

3. **Install the pack**: put the upscaled PNGs in `Mods\HD Texture\`.
   Enable either:
   - the launcher's Mods option (auto-enables when `Mods\HD Texture\` exists), or
   - `set DC2_TEXTURE_REPLACEMENTS=1`

   The whole pack is preloaded into RAM at startup (disable with `DC2_PRELOAD_TEXTURES=0`).
   Verify in the log: `Replacement PNGs indexed: N` and per-texture
   `REPLACED id=... original=WxH replacement=WxH`.

## Flag reference

| Variable | Effect |
|---|---|
| `DC2_TEXTURE_DUMP` | `1` = write PNGs to `Mods\Texture Dump\` |
| `DC2_TEXTURE_REPLACEMENTS` | `1` = load replacements from `Mods\HD Texture\` |
| `DC2_MODS_DIR` | Root for `HD Texture` / `Texture Dump` folders (default `Mods`) |
| `DC2_PRELOAD_TEXTURES` | `0` disables startup preload (loads on demand instead) |
| `DC2_MODS_ENABLED` | `1` + existing `Mods\HD Texture\` also enables replacements |

## Coverage notes

- "All of it" requires visiting every scene: dungeons, towns, menus, character
  close-ups, cutscenes, the georama editor, etc. The debug menu
  (`DC2_DEBUG_MENU=1`) and the scripted routes under `docs/` help automate this.
- Some effects (water, sky gradients, lightmaps) are computed framebuffer effects,
  not textures — they will not be in the dump.
- Movies (.PSS FMVs) are **not** covered by this system; they are decoded video and
  would need a separate external-video replacement feature.

## Packaging an HD pack

Ship the pack as a normal mod:

```
Mods/
  HD Texture/            <- upscaled PNGs
  modinfo.json           <- optional, for the mod manager to list it
```

Multi-GB packs are fine (they never enter `DATA.DAT`; they are loaded from disk).
