# Dark Cloud 2 co-op

Two protocols are available:

- **Classic v4 (recommended, working):** two windows (host + guest), host owns the
  world, both players and monsters are synchronized. Use
  `tools\coop_classic_server.bat` + `tools\coop_classic_host.bat` +
  `tools\coop_classic_guest.bat`, or the launcher's **Classic** buttons.
- **v5 authority (experimental):** hidden authority plus clients. Transport, chat,
  and snapshots are verified, but remote-avatar rendering is still being fixed.

The rest of this document covers v5. For classic v4, the controls table below
applies (host WASD, guest arrows) and both windows run the game normally: use the
debug menu to reach the same dungeon and the other hero appears in the world.

**Chat and mod messages also work on classic v4** — they ride the same v4 UDP
transport, so `dc2.chat.*`, `dc2.net.*` and the HUD roster are identical on both
protocols. Lua detects the live transport automatically.

## v5 architecture

Three processes plus a relay:

| Process | Role | Script |
|---|---|---|
| Relay | routes packets | `tools\coop_server.bat` |
| Authority | 3 | `tools\coop_authority.bat` |
| Player 1 | 1 (host) | `tools\coop_host.bat` |
| Player 2 | 2 (guest) | `tools\coop_guest.bat` |

All four must share `DC2_COOP_SESSION` (default `local`) and `DC2_COOP_SERVER`
(default `127.0.0.1:19772`). Override the ISO with `DC2_ISO`, or set
`DC2_ISO_PATH` directly. Set `DC2_PLAYER_NAME` per player.

## Run

```bat
tools\coop_server.bat                 REM terminal 1
tools\coop_authority.bat              REM terminal 2 (hidden simulation)
tools\coop_host.bat                   REM terminal 3 (Player 1)
tools\coop_guest.bat                  REM terminal 4 (Player 2) - same PC or another
```

For a remote player, set `DC2_COOP_SERVER=<host-ip>:19772` before the client
scripts and open UDP 19772.

## Controls (two windows on one keyboard)

| Role | Keyboard | Controller |
|---|---|---|
| Host (P1) | WASD + J/K/L/I, Q/E, Enter/Tab | first gamepad (`DC2_COOP_LOCAL_PORT=0`) |
| Guest (P2) | Arrow keys + Numpad 1/2/3/5/0 | second gamepad (`DC2_COOP_LOCAL_PORT=1`) |

Each process reads only its own layout (chosen by role), so one keyboard drives
the two windows independently. The **authority takes no local input at all** and
its window is hidden (`DC2_NO_XINPUT=1`, `DC2_COOP_HIDE_WINDOW=1`). In the server
browser the authority is listed as the session's `authority`, not counted as a
player. On a single PC with one gamepad, use the keyboard for P2.

## What the authority synchronizes

Implemented in `ps2xRuntime/src/dc2_game_override_parts/coop_controller.inc`:

- **Remote player** — 60 Hz snapshots convert to the interpolated/predicted proxy
  (`dc2_coop_receive_remote_sample`); the client also corrects its own position when
  it diverges >100 units from the authority.
- **World entities** — monster-slot actors applied via `convertWorld` +
  `dc2_coop_apply_authoritative_world`, with stable IDs
  (`stableEntityId(room, floorSeed, spawnSlot)`).
- **Chests** — `DC2_COOP_CHEST_SYNC=1` applies authority chest status/lid state.
- **Gilda** — wallet synchronized with a version counter.
- **Pause** — remote pause requests mirrored.

## Chat and roster

Built into the runtime on the same transport:

- In-game chat + player list render on the HUD (bottom-left / top-right).
- Console mirror: `[chat] name: text`.
- Lua: `dc2.chat.send`, `dc2.chat.players`, `dc2.hook("chat_message", ...)`.
- Custom mod traffic: `dc2.net.send` / `dc2.hook("net_message", ...)`.

The relay forwards the `Mod` message kind by role (client → authority,
authority → clients), so chat and mod messages take the same path as game state.

## Verification status

- **Verified live (2026-09-25):** relay + host + authority; `Mod` messages and
  chat/roster delivered in both directions; Lua `net_message` / `chat_message`
  hooks fired; HUD rendered.
- **Playtested end-to-end (2026-09-25):** with the debug menu enabled and the
  recorded `route12-dungeon1-d02f01` pad script, the authority and host both
  entered the Underground Channel (`room=0x10001001`). The authority received
  client input, committed the dungeon, and published `players=2 entities=24`;
  the host received the snapshot, loaded local Max plus a remote Monica proxy,
  matched the deterministic floor seed (`detSeed=0xa781`), and applied chest
  state. No fatal lines either side. Full evidence: `docs/COOP_PLAYTEST.md`.
- **Still open:** three-process/local only (no real-network test) and frame-by-frame
  interpolation comparison. The relay "drops" seen on 2026-09-25 were v4 fallback
  packets; when v5 is active the v4 exchange is now skipped, and the relay reports
  malformed vs no-target drops separately.

## Server browser

The relay also serves a small JSON status endpoint (default port 19773):

```
curl http://127.0.0.1:19773/status     # sessions, players, liveness, counters
curl http://127.0.0.1:19773/healthz    # "ok"
```

`/status` reports every session with its players (role, display name, address,
`alive`, packet count, `lastSeenSecondsAgo`), `playerCount`, `hasAuthority`, and
server counters (`packets` / `routed` / `dropped` / `droppedMalformed` /
`droppedNoTarget` / `maxDatagram`). Change the port with `--http-port` on
`dc2_coop_server_v5.py`.

The **launcher's Co-op tab** keeps a list of relays and aggregates their sessions
into one browser (session id, player count, authority present, roles). Add a
relay with "Add current" and it is polled every 2 s; the list persists in
`Config/launcher_settings.json`.

## Environment flags

| Flag | Meaning |
|---|---|
| `DC2_COOP_V5=1` | enable the v5 transport (set by the scripts) |
| `DC2_COOP_ROLE` | `host` \| `guest` \| `authority` |
| `DC2_COOP_SERVER` | `host:port` of the relay |
| `DC2_COOP_SESSION` | shared session id |
| `DC2_PLAYER_NAME` | chat/roster name |
| `DC2_COOP_CHEST_SYNC=1` | apply authority chest state |
| `DC2_CHAT_HUD=0` | hide the chat/roster overlay |
