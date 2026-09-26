#!/usr/bin/env python3
"""Tiny UDP session relay for the two-process Dark Cloud 2 co-op prototype."""

from __future__ import annotations

import argparse
import signal
import socket
import struct
import time


MAGIC = 0x324F4344
VERSION = 4
HEADER = struct.Struct("<I H B B I I")
STATE_PREFIX = struct.Struct("<I H B B I I I I")
MAX_DATAGRAM = 1200


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("--bind", default="127.0.0.1")
    parser.add_argument("--port", type=int, default=19772)
    args = parser.parse_args()

    running = True

    def stop(_signum: int, _frame: object) -> None:
        nonlocal running
        running = False

    signal.signal(signal.SIGINT, stop)
    signal.signal(signal.SIGTERM, stop)

    # A room is one session + one area. Clients in different areas remain in
    # the same shared world session but do not receive scene-local actors until
    # one joins the other's room. Host packets are the authoritative room
    # snapshots; Guest packets contribute only Player 2's state.
    peers: dict[tuple[int, int, int], tuple[tuple[str, int], bytes, float]] = {}
    last_area: dict[tuple[int, int], int] = {}
    with socket.socket(socket.AF_INET, socket.SOCK_DGRAM) as server:
        server.bind((args.bind, args.port))
        # Windows reports an ICMP "port unreachable" response from a client
        # that just closed as WSAECONNRESET on the next UDP recvfrom. UDP is
        # connectionless, so that must not terminate the relay for the other
        # player or for clients which reconnect.
        if hasattr(socket, "SIO_UDP_CONNRESET"):
            try:
                server.ioctl(socket.SIO_UDP_CONNRESET, False)
            except OSError:
                pass
        server.settimeout(0.25)
        print(f"[DC2:SessionServer] listening on {args.bind}:{args.port}", flush=True)
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
            if len(data) < STATE_PREFIX.size or len(data) > MAX_DATAGRAM:
                continue
            magic, version, role, _reserved, session, _sequence, area, _flags = STATE_PREFIX.unpack_from(data)
            if magic != MAGIC or version != VERSION or role not in (1, 2):
                continue

            identity = (session, role)
            prior_area = last_area.get(identity)
            if prior_area is not None and prior_area != area:
                peers.pop((session, prior_area, role), None)
            last_area[identity] = area

            key = (session, area, role)
            first_seen = key not in peers or peers[key][0] != address
            peers[key] = (address, data, time.monotonic())
            if first_seen:
                label = "host/player-1" if role == 1 else "guest/player-2"
                print(f"[DC2:SessionServer] {label} entered room session=0x{session:08x} room=0x{area:08x} from {address[0]}:{address[1]}", flush=True)

            # Track latest host room globally per session
            if role == 1:
                peers[(session, 0xFFFFFFFF, 1)] = (address, data, time.monotonic())

            other = peers.get((session, area, 2 if role == 1 else 1))
            if other and time.monotonic() - other[2] < 5.0:
                server.sendto(data, other[0])
                # Immediately return the other side's last authoritative state too.
                server.sendto(other[1], address)
            elif role == 2:
                # If guest is in a different room, send the host's latest state so guest receives dungeon invites
                host_state = peers.get((session, 0xFFFFFFFF, 1))
                if host_state and time.monotonic() - host_state[2] < 5.0:
                    server.sendto(host_state[1], address)

    return 0


if __name__ == "__main__":
    raise SystemExit(main())
