#!/usr/bin/env python3
"""Dark Cloud 2 (recomp) launcher.

Tabs:
  Play  - ISO + options, single-player launch
  Mods  - list/enable/disable/validate/create mods (tools/mod_manager.py)
  Co-op - start the relay/authority/host/guest and show server-browser status

Standard library only (tkinter). Config: Config/launcher_settings.json
"""

from __future__ import annotations

import json
import subprocess
import sys
import time
import tkinter as tk
from pathlib import Path
from tkinter import messagebox, ttk
from urllib.error import URLError
from urllib.request import urlopen

sys.path.insert(0, str(Path(__file__).resolve().parent))
import mod_manager as mm  # noqa: E402

ROOT = mm.ROOT
RUNNER = mm.RUNNER
CONFIG = ROOT / "Config" / "launcher_settings.json"
DEFAULT_ISO = mm.DEFAULT_ISO


class Launcher:
    def __init__(self, root: tk.Tk) -> None:
        self.root = root
        self.root.title("Dark Cloud 2 - Launcher")
        self.root.geometry("880x600")
        self.procs: dict[str, subprocess.Popen] = {}
        self.cfg = self.load_config()

        self.status_var = tk.StringVar(value="ready")
        ttk.Label(root, textvariable=self.status_var, relief="sunken", anchor="w").pack(
            side="bottom", fill="x")

        self.nb = ttk.Notebook(root)
        self.nb.pack(fill="both", expand=True)
        self.build_play_tab()
        self.build_mods_tab()
        self.build_coop_tab()
        self.bind_process_cleanup()

    # ---- config ----------------------------------------------------------
    def load_config(self) -> dict:
        base = {
            "iso": DEFAULT_ISO,
            "fps60": True,
            "debug_menu": False,
            "textures": False,
            "coop_server": "127.0.0.1:19772",
            "coop_http": 19773,
            "coop_session": "local",
            "player_name": "Player",
            "relays": [],
        }
        try:
            base.update(json.loads(CONFIG.read_text(encoding="utf-8")))
        except Exception:  # noqa: BLE001
            pass
        return base

    def save_config(self) -> None:
        CONFIG.parent.mkdir(parents=True, exist_ok=True)
        CONFIG.write_text(json.dumps(self.cfg, indent=2) + "\n", encoding="utf-8")

    # ---- shared ----------------------------------------------------------
    def game_env(self) -> dict:
        import os
        env = dict(os.environ)
        env["DC2_ISO_PATH"] = self.cfg["iso"]
        env["DC2_MODS_DIR"] = str(mm.MODS_ROOT)
        if self.cfg["fps60"]:
            env["DC2_PATCH_60FPS"] = "1"
        if self.cfg["debug_menu"]:
            env["DC2_DEBUG_MENU"] = "1"
        if self.cfg["textures"]:
            env["DC2_TEXTURE_REPLACEMENTS"] = "1"
        return env

    def start_runner(self, key: str, extra: dict) -> None:
        if not RUNNER.is_file():
            messagebox.showerror("Launcher", f"Runner not built:\n{RUNNER}")
            return
        env = self.game_env()
        env.update(extra)
        self.stop(key)
        self.procs[key] = subprocess.Popen(
            [str(RUNNER), "SCUS_972.13"], cwd=str(ROOT), env=env,
            creationflags=subprocess.CREATE_NEW_CONSOLE if hasattr(subprocess, "CREATE_NEW_CONSOLE") else 0,
        )
        self.set_status(f"{key} started (pid {self.procs[key].pid})")

    def stop(self, key: str) -> None:
        proc = self.procs.pop(key, None)
        if proc and proc.poll() is None:
            proc.terminate()

    def stop_all(self) -> None:
        for key in list(self.procs):
            self.stop(key)

    def bind_process_cleanup(self) -> None:
        self.root.protocol("WM_DELETE_WINDOW", lambda: (self.stop_all(), self.root.destroy()))

    def set_status(self, text: str) -> None:
        self.status_var.set(text)

    # ---- Play tab --------------------------------------------------------
    def build_play_tab(self) -> None:
        frame = ttk.Frame(self.nb, padding=12)
        self.nb.add(frame, text="Play")

        ttk.Label(frame, text="Dark Cloud 2 ISO").grid(row=0, column=0, sticky="w")
        self.iso_var = tk.StringVar(value=self.cfg["iso"])
        ttk.Entry(frame, textvariable=self.iso_var, width=90).grid(row=0, column=1, columnspan=3, sticky="we", pady=4)
        ttk.Button(frame, text="Browse...", command=self.browse_iso).grid(row=0, column=4, padx=4)

        self.fps_var = tk.BooleanVar(value=self.cfg["fps60"])
        self.dbg_var = tk.BooleanVar(value=self.cfg["debug_menu"])
        self.tex_var = tk.BooleanVar(value=self.cfg["textures"])
        ttk.Checkbutton(frame, text="60 FPS patch", variable=self.fps_var).grid(row=1, column=1, sticky="w")
        ttk.Checkbutton(frame, text="Debug menu", variable=self.dbg_var).grid(row=1, column=2, sticky="w")
        ttk.Checkbutton(frame, text="HD textures", variable=self.tex_var).grid(row=1, column=3, sticky="w")

        ttk.Button(frame, text="Save settings", command=self.persist_settings).grid(row=2, column=1, pady=10, sticky="w")
        ttk.Button(frame, text="Launch single player", command=self.launch_single).grid(row=2, column=2, pady=10, sticky="w")

        ttk.Label(frame, text="Mods and ISO paths are shared with the Mods and Co-op tabs.").grid(
            row=3, column=1, columnspan=3, sticky="w", pady=(8, 0))
        frame.columnconfigure(1, weight=1)

    def browse_iso(self) -> None:
        from tkinter import filedialog
        path = filedialog.askopenfilename(filetypes=[("Disc images", "*.iso"), ("All files", "*.*")])
        if path:
            self.iso_var.set(path)

    def persist_settings(self) -> None:
        self.cfg.update({
            "iso": self.iso_var.get(),
            "fps60": self.fps_var.get(),
            "debug_menu": self.dbg_var.get(),
            "textures": self.tex_var.get(),
            "coop_server": self.coop_server_var.get(),
            "coop_http": int(self.coop_http_var.get() or 19773),
            "coop_session": self.session_var.get(),
            "player_name": self.name_var.get(),
            "relays": list(self.relay_list.get(0, "end")),
        })
        self.save_config()
        self.set_status("settings saved")

    def launch_single(self) -> None:
        self.persist_settings()
        self.start_runner("game", {})

    # ---- Mods tab --------------------------------------------------------
    def build_mods_tab(self) -> None:
        frame = ttk.Frame(self.nb, padding=12)
        self.nb.add(frame, text="Mods")

        self.mod_tree = ttk.Treeview(frame, columns=("id", "version", "on", "ov", "pt", "name"),
                                     show="headings", height=16)
        for col, w in (("id", 150), ("version", 80), ("on", 50), ("ov", 60), ("pt", 60), ("name", 300)):
            self.mod_tree.heading(col, text=col)
            self.mod_tree.column(col, width=w, anchor="w")
        self.mod_tree.grid(row=0, column=0, columnspan=6, sticky="nsew")

        buttons = [
            ("Refresh", self.refresh_mods),
            ("Enable", lambda: self.set_mod(True)),
            ("Disable", lambda: self.set_mod(False)),
            ("Validate", self.validate_mods),
            ("New mod...", self.new_mod),
            ("Open Mods folder", self.open_mods),
        ]
        for i, (label, cmd) in enumerate(buttons):
            ttk.Button(frame, text=label, command=cmd).grid(row=1, column=i, padx=3, pady=8, sticky="w")
        frame.rowconfigure(0, weight=1)
        frame.columnconfigure(0, weight=1)
        self.refresh_mods()

    def refresh_mods(self) -> None:
        self.mod_tree.delete(*self.mod_tree.get_children())
        self._mods = mm.all_mods()
        for _, m in self._mods:
            ov = len(m.get("overlays") or {})
            pt = len(m.get("patches") or [])
            self.mod_tree.insert("", "end", values=(
                m["id"], m["version"], "yes" if m["enabled"] else "no", ov, pt, m["name"]))

    def selected_mod(self) -> str | None:
        sel = self.mod_tree.selection()
        if not sel:
            return None
        return self.mod_tree.item(sel[0], "values")[0]

    def set_mod(self, enabled: bool) -> None:
        mod_id = self.selected_mod()
        if not mod_id:
            return
        mm.cmd_set_enabled(mod_id, enabled)
        self.refresh_mods()
        self.set_status(f"{mod_id} {'enabled' if enabled else 'disabled'}")

    def validate_mods(self) -> None:
        import io
        import contextlib
        buf = io.StringIO()
        with contextlib.redirect_stdout(buf):
            rc = mm.cmd_validate()
        self.set_status("mods valid" if rc == 0 else "mod validation found problems")
        messagebox.showinfo("Validate mods", buf.getvalue())

    def new_mod(self) -> None:
        from tkinter import simpledialog
        mod_id = simpledialog.askstring("New mod", "Mod id (folder name):")
        if not mod_id:
            return
        name = simpledialog.askstring("New mod", "Display name:") or mod_id
        mm.cmd_init(mod_id, name)
        self.refresh_mods()
        self.set_status(f"created {mod_id}")

    def open_mods(self) -> None:
        import os
        os.startfile(str(mm.MODS_ROOT))  # noqa: S606

    # ---- Co-op tab -------------------------------------------------------
    def build_coop_tab(self) -> None:
        frame = ttk.Frame(self.nb, padding=12)
        self.nb.add(frame, text="Co-op")

        ttk.Label(frame, text="Relay host:port").grid(row=0, column=0, sticky="w")
        self.coop_server_var = tk.StringVar(value=self.cfg["coop_server"])
        ttk.Entry(frame, textvariable=self.coop_server_var, width=24).grid(row=0, column=1, sticky="w")
        ttk.Label(frame, text="HTTP status port").grid(row=0, column=2, sticky="w", padx=(12, 0))
        self.coop_http_var = tk.StringVar(value=str(self.cfg["coop_http"]))
        ttk.Entry(frame, textvariable=self.coop_http_var, width=8).grid(row=0, column=3, sticky="w")
        ttk.Label(frame, text="Session").grid(row=0, column=4, sticky="w", padx=(12, 0))
        self.session_var = tk.StringVar(value=self.cfg["coop_session"])
        ttk.Entry(frame, textvariable=self.session_var, width=14).grid(row=0, column=5, sticky="w")
        ttk.Label(frame, text="Player name").grid(row=0, column=6, sticky="w", padx=(12, 0))
        self.name_var = tk.StringVar(value=self.cfg["player_name"])
        ttk.Entry(frame, textvariable=self.name_var, width=14).grid(row=0, column=7, sticky="w")

        ttk.Button(frame, text="v5 relay", command=self.start_relay).grid(row=1, column=1, pady=8, sticky="w")
        ttk.Button(frame, text="v5 Authority", command=lambda: self.start_coop_role("authority")).grid(row=1, column=2, sticky="w")
        ttk.Button(frame, text="v5 Host", command=lambda: self.start_coop_role("host")).grid(row=1, column=3, sticky="w")
        ttk.Button(frame, text="v5 Guest", command=lambda: self.start_coop_role("guest")).grid(row=1, column=4, sticky="w")
        ttk.Button(frame, text="Stop all", command=self.stop_all).grid(row=1, column=5, sticky="w")

        # Classic v4 (recommended): two windows, host owns the world, both see each other.
        ttk.Button(frame, text="Classic relay (v4)", command=self.start_classic_relay).grid(row=2, column=0, sticky="w", pady=(4, 0))
        ttk.Button(frame, text="Classic Host (v4)", command=lambda: self.start_classic_role("host")).grid(row=2, column=1, sticky="w", pady=(4, 0))
        ttk.Button(frame, text="Classic Guest (v4)", command=lambda: self.start_classic_role("guest")).grid(row=2, column=2, sticky="w", pady=(4, 0))
        ttk.Label(frame, text="(recommended)").grid(row=2, column=3, sticky="w", pady=(4, 0))

        browser = ttk.LabelFrame(frame, text="Server browser", padding=6)
        browser.grid(row=3, column=0, columnspan=8, sticky="nsew", pady=(8, 0))
        self.relay_list = tk.Listbox(browser, height=5, width=26)
        self.relay_list.grid(row=0, column=0, rowspan=3, sticky="nsew")
        ttk.Button(browser, text="Add current", command=self.add_current_relay).grid(row=0, column=1, sticky="w", padx=4)
        ttk.Button(browser, text="Remove", command=self.remove_selected_relay).grid(row=1, column=1, sticky="w", padx=4)
        ttk.Button(browser, text="Refresh", command=self.poll_status).grid(row=2, column=1, sticky="w", padx=4)

        self.session_tree = ttk.Treeview(
            browser, columns=("relay", "session", "players", "authority", "roles"),
            show="headings", height=10)
        for col, w in (("relay", 150), ("session", 90), ("players", 60), ("authority", 70), ("roles", 330)):
            self.session_tree.heading(col, text=col)
            self.session_tree.column(col, width=w, anchor="w")
        self.session_tree.grid(row=0, column=2, rowspan=3, sticky="nsew", padx=(8, 0))
        browser.columnconfigure(2, weight=1)

        self.header_status = tk.StringVar(value="")
        ttk.Label(frame, textvariable=self.header_status).grid(row=4, column=0, columnspan=8, sticky="w", pady=(4, 0))
        frame.rowconfigure(3, weight=1)

        for url in (self.cfg.get("relays") or [self.current_relay_url()]):
            self.relay_list.insert("end", url)
        self.poll_status()

    def coop_env(self, role: str) -> dict:
        env = {
            "DC2_COOP_V5": "1",
            "DC2_COOP_ROLE": role,
            "DC2_COOP_SERVER": self.coop_server_var.get(),
            "DC2_COOP_SESSION": self.session_var.get(),
            "DC2_PLAYER_NAME": self.name_var.get(),
        }
        if role == "authority":
            # Hidden simulation: never take local input and keep its window off-screen.
            env["DC2_NO_XINPUT"] = "1"
            env["DC2_COOP_HIDE_WINDOW"] = "1"
        elif role == "host":
            env["DC2_COOP_LOCAL_PORT"] = "0"
        elif role == "guest":
            env["DC2_COOP_LOCAL_PORT"] = "1"
        return env

    def start_relay(self) -> None:
        import os
        host, _, port = self.coop_server_var.get().partition(":")
        env = dict(os.environ)
        self.stop("relay")
        self.procs["relay"] = subprocess.Popen(
            [sys.executable, str(ROOT / "tools" / "dc2_coop_server_v5.py"),
             "--port", port or "19772", "--http-port", self.coop_http_var.get() or "19773"],
            cwd=str(ROOT), env=env,
            creationflags=subprocess.CREATE_NEW_CONSOLE if hasattr(subprocess, "CREATE_NEW_CONSOLE") else 0,
        )
        self.set_status(f"relay started (pid {self.procs['relay'].pid})")

    def classic_env(self, role: str) -> dict:
        env = {
            "DC2_COOP": "1",
            "DC2_COOP_ROLE": role,
            "DC2_COOP_SERVER": self.coop_server_var.get(),
            "DC2_COOP_SESSION": self.session_var.get(),
            "DC2_COOP_LOCAL_PORT": "0" if role == "host" else "1",
            "DC2_G127_SEED_MENU": "1",
            "DC2_G376_SEED_FMV_SKIP": "1",
        }
        if role == "guest":
            env["DC2_NO_AUDIO"] = "1"
        return env

    def start_classic_role(self, role: str) -> None:
        self.persist_settings()
        self.start_runner("classic_" + role, self.classic_env(role))

    def start_classic_relay(self) -> None:
        import os
        _host, _, port = self.coop_server_var.get().partition(":")
        self.stop("classic_relay")
        self.procs["classic_relay"] = subprocess.Popen(
            [sys.executable, str(ROOT / "tools" / "dc2_coop_server.py"),
             "--port", port or "19772"],
            cwd=str(ROOT), env=dict(os.environ),
            creationflags=subprocess.CREATE_NEW_CONSOLE if hasattr(subprocess, "CREATE_NEW_CONSOLE") else 0,
        )
        self.set_status(f"classic relay started (pid {self.procs['classic_relay'].pid})")

    def start_coop_role(self, role: str) -> None:
        self.persist_settings()
        self.start_runner(role, self.coop_env(role))

    def current_relay_url(self) -> str:
        host = (self.coop_server_var.get().split(":") or ["127.0.0.1"])[0] or "127.0.0.1"
        port = self.coop_http_var.get() or "19773"
        return f"http://{host}:{port}"

    def add_current_relay(self) -> None:
        url = self.current_relay_url()
        if url not in self.relay_list.get(0, "end"):
            self.relay_list.insert("end", url)

    def remove_selected_relay(self) -> None:
        for idx in reversed(self.relay_list.curselection()):
            self.relay_list.delete(idx)

    def poll_status(self) -> None:
        self.session_tree.delete(*self.session_tree.get_children())
        urls = list(self.relay_list.get(0, "end")) or [self.current_relay_url()]
        sessions = 0
        players = 0
        errors: list[str] = []
        for url in urls:
            try:
                with urlopen(url.rstrip("/") + "/status", timeout=1) as resp:  # noqa: S310
                    data = json.loads(resp.read().decode())
            except (URLError, OSError, ValueError) as exc:
                errors.append(f"{url}: {exc}")
                continue
            for session in data.get("sessions", []):
                roles = ", ".join(
                    f"{p['role']}:{p['name']}" + ("" if p["alive"] else " (stale)")
                    for p in session.get("players", []))
                self.session_tree.insert("", "end", values=(
                    url, session["session"], session.get("playerCount"),
                    "yes" if session.get("hasAuthority") else "no", roles))
                sessions += 1
                players += session.get("playerCount") or 0
        text = f"relays={len(urls)}  sessions={sessions}  players={players}"
        if errors:
            text += "  |  " + "; ".join(errors[:3])
        self.header_status.set(text)
        self.root.after(2000, self.poll_status)


def main() -> int:
    root = tk.Tk()
    app = Launcher(root)
    app.set_status("ready")
    root.mainloop()
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
