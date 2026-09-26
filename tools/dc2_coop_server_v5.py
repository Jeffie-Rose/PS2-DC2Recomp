#!/usr/bin/env python3
"""Dedicated UDP relay for Dark Cloud 2 co-op (Protocol v5).

Architecture:
  - Authority (Role 3): the hidden simulation that owns the true world.
  - Player 1 (Role 1): host window.
  - Player 2 (Role 2): guest window.

Routing:
  - client (role 1/2) -> authority (role 3)
  - authority (role 3) -> all clients in the session

A small HTTP status endpoint backs the server browser:
  GET http://<bind>:<http-port>/status   -> JSON
  GET http://<bind>:<http-port>/healthz  -> "ok"
"""

from __future__ import annotations

import argparse
import json
import signal
import socket
import struct
import threading
import time
from http.server import BaseHTTPRequestHandler, ThreadingHTTPServer

MAGIC = 0x324F4344
HEADER = struct.Struct("<I H B B I I I I I I")
MAX_DATAGRAM = 1200
PEER_TTL_S = 10.0
ROLE_NAMES = {1: "Player 1 (Max)", 2: "Player 2 (Monica)", 3: "Authority"}

_lock = threading.Lock()
_peers: dict[tuple[int, int], dict] = {}
_started = time.time()
_counters = {
    "packets": 0,          # valid v5 packets
    "routed": 0,
    "dropped": 0,          # total dropped (malformed + no target)
    "droppedMalformed": 0, # bad magic/version/role/size
    "droppedNoTarget": 0,  # valid but no live route
    "maxDatagram": 0,
}
_trace_drops = 0
_traced = 0


def _status_snapshot() -> dict:
    now = time.monotonic()
    with _lock:
        sessions: dict[str, dict] = {}
        for (session, role), info in _peers.items():
            key = f"{session:08x}"
            entry = sessions.setdefault(key, {"session": key, "players": [], "authority": None})
            alive = (now - info["last_seen"]) < PEER_TTL_S
            record = {
                "role": role,
                "name": ROLE_NAMES.get(role, "?"),
                "address": f"{info['address'][0]}:{info['address'][1]}",
                "alive": alive,
                "packets": info["packets"],
                "lastSeenSecondsAgo": round(now - info["last_seen"], 2),
            }
            # The authority is the server, not a player.
            if role == 3:
                entry["authority"] = record
            else:
                entry["players"].append(record)
        uptime = round(time.time() - _started, 1)
        counters = dict(_counters)
    sessions_out = []
    for entry in sessions.values():
        entry["players"].sort(key=lambda p: p["role"])
        entry["playerCount"] = sum(1 for p in entry["players"] if p["alive"])
        entry["hasAuthority"] = bool(entry["authority"] and entry["authority"]["alive"])
        sessions_out.append(entry)
    sessions_out.sort(key=lambda e: e["session"])
    return {
        "server": "dc2-coop-v5",
        "uptimeSeconds": uptime,
        "sessions": sessions_out,
        "counters": counters,
    }


def _note_drop(sample, size: int) -> None:
    """Records a malformed datagram and traces a bounded sample of them."""
    global _traced  # noqa: PLW0603
    with _lock:
        _counters["dropped"] += 1
        _counters["droppedMalformed"] += 1
        if size > _counters["maxDatagram"]:
            _counters["maxDatagram"] = size
    if sample is not None and _traced < _trace_drops:
        _traced += 1
        print(f"[DC2:relay] malformed drop: size={size} magic=0x{sample[0]:08x} "
              f"version={sample[1]} role={sample[2]} kind={sample[3]}", flush=True)


class _StatusHandler(BaseHTTPRequestHandler):
    def do_GET(self) -> None:  # noqa: N802
        if self.path.rstrip("/") in ("/status", ""):
            body = json.dumps(_status_snapshot(), indent=2).encode()
            self.send_response(200)
            self.send_header("Content-Type", "application/json")
            self.send_header("Content-Length", str(len(body)))
            self.end_headers()
            self.wfile.write(body)
        elif self.path.rstrip("/") == "/healthz":
            self.send_response(200)
            self.send_header("Content-Type", "text/plain")
            self.end_headers()
            self.wfile.write(b"ok")
        else:
            self.send_response(404)
            self.end_headers()

    def log_message(self, *args) -> None:  # silence per-request logs
        return


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--bind", default="127.0.0.1")
    parser.add_argument("--port", type=int, default=19772)
    parser.add_argument("--http-port", type=int, default=19773)
    parser.add_argument("--quiet", action="store_true")
    parser.add_argument("--trace-drops", type=int, default=0,
                        help="log the first N malformed datagrams with a small header sample")
    args = parser.parse_args()
    global _trace_drops  # noqa: PLW0603
    _trace_drops = args.trace_drops

    running = True

    def stop(_signum: int, _frame: object) -> None:
        nonlocal running
        running = False

    signal.signal(signal.SIGINT, stop)
    signal.signal(signal.SIGTERM, stop)

    def log(msg: str) -> None:
        if not args.quiet:
            print(msg, flush=True)

    httpd = ThreadingHTTPServer((args.bind, args.http_port), _StatusHandler)
    threading.Thread(target=httpd.serve_forever, daemon=True).start()
    log(f"[DC2:DedicatedServer] status: http://{args.bind}:{args.http_port}/status")

    with socket.socket(socket.AF_INET, socket.SOCK_DGRAM) as server:
        server.bind((args.bind, args.port))
        if hasattr(socket, "SIO_UDP_CONNRESET"):
            try:
                server.ioctl(socket.SIO_UDP_CONNRESET, False)
            except OSError:
                pass
        server.settimeout(0.25)
        log(f"[DC2:DedicatedServer] listening on {args.bind}:{args.port} (v5)")
        log("  Waiting for Authority (3), Player 1 (1), Player 2 (2)...")

        while running:
            try:
                data, address = server.recvfrom(MAX_DATAGRAM)
            except socket.timeout:
                continue
            except ConnectionResetError:
                continue
            except OSError as exc:
                if getattr(exc, "winerror", None) == 10054:
                    continue
                raise

            if len(data) < HEADER.size or len(data) > MAX_DATAGRAM:
                _note_drop(None, len(data))
                continue
            magic, version, kind, role, session, seq, tick, room, payload_bytes, crc = HEADER.unpack_from(data)
            if magic != MAGIC or version != 5 or role not in (1, 2, 3):
                _note_drop((magic, version, role, kind), len(data))
                continue

            now = time.monotonic()
            key = (session, role)
            with _lock:
                _counters["packets"] += 1
                if len(data) > _counters["maxDatagram"]:
                    _counters["maxDatagram"] = len(data)
                info = _peers.get(key)
                first_seen = info is None or info["address"] != address
                if info is None:
                    info = {"address": address, "last_seen": now, "packets": 0}
                    _peers[key] = info
                info["address"] = address
                info["last_seen"] = now
                info["packets"] += 1

            if first_seen:
                log(f"[DC2:DedicatedServer] {ROLE_NAMES.get(role, 'Unknown')} registered "
                    f"from {address[0]}:{address[1]} (session=0x{session:08x})")

            routed = False
            if role in (1, 2):
                with _lock:
                    auth = _peers.get((session, 3))
                    auth_addr = auth["address"] if auth and (now - auth["last_seen"] < PEER_TTL_S) else None
                if auth_addr:
                    server.sendto(data, auth_addr)
                    routed = True
            elif role == 3:
                with _lock:
                    targets = [
                        info["address"] for k, info in _peers.items()
                        if k[0] == session and k[1] in (1, 2)
                        and (now - info["last_seen"] < PEER_TTL_S)
                    ]
                for target in targets:
                    server.sendto(data, target)
                routed = bool(targets)

            with _lock:
                if routed:
                    _counters["routed"] += 1
                else:
                    _counters["dropped"] += 1
                    _counters["droppedNoTarget"] += 1

    httpd.shutdown()
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
