#!/usr/bin/env python3
"""Dark Cloud 2 (recomp) mod manager.

Manages the Mods/ folder that the runner reads (Mods/<id>/modinfo.json or
mod.ini). Standard library only.

Usage:
  python tools/mod_manager.py list
  python tools/mod_manager.py validate
  python tools/mod_manager.py enable  <id>
  python tools/mod_manager.py disable <id>
  python tools/mod_manager.py init    <id> [name]
  python tools/mod_manager.py run     [--iso PATH]
"""

from __future__ import annotations

import json
import os
import re
import subprocess
import sys
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
MODS_ROOT = Path(os.environ.get("DC2_MODS_DIR") or (ROOT / "Mods"))
DEFAULT_ISO = os.environ.get("DC2_ISO") or "Dark Cloud 2 (USA) (v2.00).iso"


def _find_runner() -> Path:
    """Runner lives in bin/ in a packaged build and in build64/... in the dev tree."""
    candidates = [
        ROOT / "bin" / "ps2EntryRunner.exe",
        ROOT / "build64" / "ps2xRuntime" / "ps2EntryRunner.exe",
        ROOT.parent / "build64" / "ps2xRuntime" / "ps2EntryRunner.exe",
    ]
    for candidate in candidates:
        if candidate.is_file():
            return candidate
    return candidates[0]


RUNNER = _find_runner()


def load_manifest(mod_dir: Path) -> dict | None:
    """Returns a normalized dict, or None when the folder is not a mod."""
    info = mod_dir / "modinfo.json"
    if info.is_file():
        try:
            data = json.loads(info.read_text(encoding="utf-8"))
        except Exception as exc:  # noqa: BLE001
            print(f"[!] {info}: invalid JSON: {exc}")
            return None
        data["_path"] = info
        data["_format"] = "json"
        data.setdefault("id", mod_dir.name)
        data.setdefault("name", data["id"])
        data.setdefault("version", "?")
        data.setdefault("enabled", True)
        data.setdefault("overlays", {})
        data.setdefault("patches", [])
        return data

    ini = mod_dir / "mod.ini"
    if ini.is_file():
        data: dict = {"_path": ini, "_format": "ini", "overlays": {}, "patches": []}
        for line in ini.read_text(encoding="utf-8", errors="replace").splitlines():
            line = line.strip()
            if not line or line[0] in "#;":
                continue
            m = re.match(r"([A-Za-z]+)\s*=\s*(.+)", line)
            if not m:
                continue
            key, val = m.group(1).lower(), m.group(2).strip()
            if key in ("id", "name", "version"):
                data[key] = val
            elif key == "enabled":
                data["enabled"] = val.lower() in ("1", "true", "yes", "on")
        data.setdefault("id", mod_dir.name)
        data.setdefault("name", data["id"])
        data.setdefault("version", "?")
        data.setdefault("enabled", True)
        return data

    return None


def all_mods() -> list[tuple[Path, dict]]:
    if not MODS_ROOT.is_dir():
        return []
    out = []
    for child in sorted(MODS_ROOT.iterdir()):
        if not child.is_dir():
            continue
        manifest = load_manifest(child)
        if manifest:
            out.append((child, manifest))
    return out


def cmd_list() -> int:
    mods = all_mods()
    if not mods:
        print(f"No mods under {MODS_ROOT}")
        return 0
    print(f"Mods under {MODS_ROOT}\n")
    print(f"{'id':<20} {'version':<10} {'on':<3} {'overlays':>8} {'patches':>7} {'name'}")
    print("-" * 78)
    for _, m in mods:
        ov = len(m.get("overlays") or {})
        packs = 1 if (Path(m["_path"]).parent / "packs").is_dir() else 0
        pt = m.get("patches") or []
        print(f"{m['id']:<20} {m['version']:<10} "
              f"{'yes' if m['enabled'] else 'no':<3} {ov:>8} {len(pt):>7} {m['name']}"
              + ("  [+packs]" if packs else ""))
    return 0


def _write_json_manifest(path: Path, data: dict) -> None:
    clean = {k: v for k, v in data.items() if not k.startswith("_")}
    path.write_text(json.dumps(clean, indent=2) + "\n", encoding="utf-8")


def cmd_set_enabled(mod_id: str, enabled: bool) -> int:
    for _, m in all_mods():
        if m["id"] != mod_id:
            continue
        path = Path(m["_path"])
        if m["_format"] == "json":
            m["enabled"] = enabled
            _write_json_manifest(path, m)
        else:
            text = path.read_text(encoding="utf-8", errors="replace")
            heading = "enabled = true" if enabled else "enabled = false"
            if re.search(r"(?mi)^enabled\s*=", text):
                text = re.sub(r"(?mi)^enabled\s*=.*$",
                              heading, text, count=1)
            elif "[mod]" in text.lower():
                text = re.sub(r"(?mi)^\[mod\]\s*$",
                              "[mod]\n" + heading, text, count=1)
            else:
                text = "[mod]\n" + heading + "\n" + text
            path.write_text(text, encoding="utf-8")
        state = "enabled" if enabled else "disabled"
        print(f"[+] {mod_id} {state} ({path.name})")
        return 0
    print(f"[!] no mod with id '{mod_id}'")
    return 1


def cmd_validate() -> int:
    mods = all_mods()
    problems = 0
    for mod_dir, m in mods:
        issues: list[str] = []
        for guest, rel in (m.get("overlays") or {}).items():
            host = mod_dir / rel
            if not host.is_file():
                issues.append(f"overlay missing: {guest} -> {rel}")
        for i, patch in enumerate(m.get("patches") or [], 1):
            if not isinstance(patch, dict) or "address" not in patch or "bytes" not in patch:
                issues.append(f"patch #{i}: needs 'address' and 'bytes'")
        main_lua = mod_dir / "main.lua"
        if main_lua.exists():
            try:
                main_lua.read_text(encoding="utf-8")
            except Exception as exc:  # noqa: BLE001
                issues.append(f"main.lua unreadable: {exc}")
        if issues:
            problems += len(issues)
            print(f"[!] {m['id']}:")
            for issue in issues:
                print(f"      {issue}")
        else:
            print(f"[ok] {m['id']} v{m['version']}")
    print(f"\n{len(mods)} mod(s), {problems} problem(s)")
    return 1 if problems else 0


def cmd_init(mod_id: str, name: str | None) -> int:
    mod_dir = MODS_ROOT / mod_id
    if mod_dir.exists():
        print(f"[!] {mod_dir} already exists")
        return 1
    (mod_dir / "files").mkdir(parents=True)
    (mod_dir / "packs").mkdir()
    _write_json_manifest(mod_dir / "modinfo.json", {
        "id": mod_id,
        "name": name or mod_id,
        "version": "1.0.0",
        "loadOrder": 100,
        "enabled": True,
        "env": {},
        "overlays": {},
        "patches": [],
    })
    (mod_dir / "main.lua").write_text(
        'dc2.log("' + (name or mod_id) + ' loaded")\n\n'
        'dc2.hook("game_frame", function(frame)\n'
        '    if frame % 600 == 0 then\n'
        '        dc2.hud.print("' + (name or mod_id) + ' running")\n'
        '    end\n'
        'end)\n',
        encoding="utf-8",
    )
    print(f"[+] created {mod_dir}")
    return 0


def cmd_run(iso: str | None) -> int:
    if not RUNNER.is_file():
        print(f"[!] runner not built: {RUNNER}")
        return 1
    env = dict(os.environ)
    env["DC2_MODS_DIR"] = str(MODS_ROOT)
    env["DC2_ISO_PATH"] = iso or env.get("DC2_ISO_PATH") or DEFAULT_ISO
    print(f"[*] mods : {MODS_ROOT}")
    print(f"[*] iso  : {env['DC2_ISO_PATH']}")
    return subprocess.call([str(RUNNER), "SCUS_972.13"], cwd=str(ROOT), env=env)


def main(argv: list[str]) -> int:
    cmd = argv[1] if len(argv) > 1 else "list"
    if cmd == "list":
        return cmd_list()
    if cmd == "validate":
        return cmd_validate()
    if cmd == "enable" and len(argv) > 2:
        return cmd_set_enabled(argv[2], True)
    if cmd == "disable" and len(argv) > 2:
        return cmd_set_enabled(argv[2], False)
    if cmd == "init" and len(argv) > 2:
        return cmd_init(argv[2], argv[3] if len(argv) > 3 else None)
    if cmd == "run":
        iso = None
        if "--iso" in argv:
            iso = argv[argv.index("--iso") + 1]
        return cmd_run(iso)
    print(__doc__)
    return 2


if __name__ == "__main__":
    raise SystemExit(main(sys.argv))
