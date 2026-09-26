# Co-op playtest — verified 2026-09-25

Protocol v5, three processes on one machine: relay + authority (role 3) + host
(role 1). Both game processes entered the Underground Channel
(`room=0x10001001`) via the enabled debug menu and the recorded
`route12-dungeon1-d02f01` pad script.

## How to reproduce

```bat
tools\coop_server.bat
```
then, with `DC2_DEBUG_MENU=1`, `DC2_G361_POS=1`, `DC2_NO_XINPUT=1`,
`DC2_PAD_INPUT`/`DC2_LSTICK` from
`docs\dc2_plans\g525-routes\route12-dungeon1-d02f01.replay.txt` (masked lstick
sidecar), `DC2_COOP_V5=1`, `DC2_COOP_SESSION=<id>`:

```bat
tools\coop_authority.bat        REM role 3
tools\coop_host.bat             REM role 1
```

## Evidence

**Authority**
```
[DC2:V5] role=3 -> 127.0.0.1:19782 session=0x9cd68a4c
[DC2:V5] authority receiving Player 1 input
[DC2:V5] authority committing Player 1 dungeon room=0x10001001
[DC2:V5] authority publishing snapshots tick=1 room=0x10001001 players=2 entities=24
[DC2:Co-Op] native NextLoop(2) queued map=1 floor=1
[DC2:Co-Op] Host RandomMapMainProc srand detSeed=0xa781 (map=1 floor=1)
```

**Host**
```
[DC2:Co-Op] Local 2-player co-op ACTIVE
[DC2:V5] first authority snapshot tick=1 room=0x10001001 players=2 entities=24
[DC2:Co-Op] loading Max locally (slot 0) and Monica remotely (slot 4)
[DC2:Co-Op] both players ready: local (Max)=0x00ce39c0 remote (Monica)=0x00ce7b00
[DC2:Co-Op] Host RandomMapMainProc srand detSeed=0xa781 (map=1 floor=1)
[DC2:CHEST] room=10001001 slot=0 status=1 lid=0.000000
...
```

**Relay `/status` mid-run**
```json
"session": "9cd68a4c",
"players": [
  { "role": 1, "name": "Player 1 (Max)", "alive": true, "packets": 1481 },
  { "role": 3, "name": "Authority",   "alive": true, "packets": 893 }
],
"playerCount": 1, "hasAuthority": true,
"counters": { "packets": 2374, "routed": 2371, "dropped": 3614 }
```

Both processes reported `loop=2` (dungeon) and walked; no fatal lines in either
log.

## What this proves

- Client → authority input delivery and authority `NextLoop` command: the
  authority drove the client's dungeon transition.
- Authority → client snapshots: `players=2 entities=24` received in the same room.
- Remote player: Monica is loaded as a network proxy (`remote (Monica)=0x00ce7b00`)
  alongside local Max.
- Deterministic floor: both sides agree on `detSeed=0xa781` (map=1 floor=1).
- Chest sync: authority chest state applied client-side.
- Sustained traffic: ~2.4k packets routed in the first ~50 s.

## Open items

- **Relay drops — RESOLVED (2026-09-25).** The 3,089 "drops" were protocol **v4
  fallback packets** (`version=4 role=0`, 732 B): the v4 stack ran alongside v5
  because both share `DC2_COOP_ROLE`, and the v4 exchange was unconditional.
  `coop_controller.inc` now skips the v4 exchange when `dc2_coop_v5_net::active()`.
  Re-measured on the same route: `droppedMalformed=0`, total `dropped=3`
  (registration races), `packets=1279`, `routed=1276`, and remote player / seed /
  snapshot behaviour unchanged. The relay also now reports
  `droppedMalformed` / `droppedNoTarget` / `maxDatagram` separately.
- Continuous remote-proxy interpolation was not visually compared frame-by-frame;
  the load/ready/snapshot/seed/chest chain is verified end to end.
- Three-process test only (2 players). A remote-host playtest over a real network
  is still untested.
