# Dark Cloud 2 co-op: current implementation and online roadmap

## Current status

The default `run_coop.ps1` / `run_coop.bat` path now launches a two-process
localhost session. Each player therefore has
an independent game window, renderer, camera, menu stack, and controller path.
The experimental alternating-frame split compositor is disabled for this mode;
it caused visible flashing and could not isolate menus or cameras.

The current server milestone synchronizes player position and a first
authoritative monster snapshot in the same dungeon.
Both clients currently need to enter the same dungeon and floor independently.
Rainbow Butterfly Wood floor 1 (`d02/f01`) is the current baseline test floor.
Monster transforms and HP are shared experimentally; pickups, doors, procedural
floor state, transitions, and save state are not authoritative yet and must not
be described as finished co-op.

DC2's playable Max and Monica model/animation banks are singleton state. Trying
to construct a second full playable hero produced a dark/green corrupted remote
model, bind poses, and collateral UI resource damage. Each process now constructs
only its locally controlled hero. The remote player is a lightweight render-only
proxy: the valid local hero is redrawn transiently at the received position,
then its local transform is restored. Remote animation mutation is deliberately
disabled because calling the game's motion state machine from a draw hook leaks
model state outside the fields that can be safely restored. Both clients currently use
the same room hero (`DC2_COOP_CHARACTER=max` by default); a future dedicated
network-avatar renderer is needed for mixed hero types and transformations.
Dungeon transport is serviced from the per-frame draw boundary;
some floors do not return through the registered `DngStep` boundary every frame.

The room hero is pinned in `CUserDataManager::ActiveChrNo` before model
construction and on each gameplay frame. Vanilla character switching remains
locked during a network session because the original swap path frees/rebuilds
scene slots and deletes the other player's proxy. A future character-choice
change must coordinate a safe room reload.

Protocol v4 groups clients into rooms by `(session, area, dungeon/map, floor)`.
Both players publish their local player and monster observations. The Host owns
monster transforms and AI; the Guest accepts that snapshot. P2 may propose only
a lower monster HP value, allowing either player's attacks to contribute without
letting a stale Guest snapshot heal or reposition an enemy. The stable 24-entry
`CMonsterMan` array is used as encounter identity. Death behavior is driven by
an explicit one-shot lifecycle transition on the Guest; synchronizing HP alone
left a zero-HP monster active because it bypassed DC2's death/fade state. This
death transition is implemented but still needs a fresh two-client confirmation.
Loot, doors, chests,
floor seed, Ridepod/monster transformations, and durable room state are not yet
synchronized.

Start/pause is a room-level request. Either player can enter the game's real
pause loop; the request flag is relayed while paused so both processes freeze,
show their own pause overlay, and resume their own audio when the requesting
player releases pause. A release latch prevents one held Start press from
repeatedly closing and reopening pause, and a mirrored client cannot dismiss
another player's active pause request. One request/mirror/release cycle has been
confirmed in a live two-client session. Inventory menus remain local and do not
share cursor or selection state.

Both network clients retain the exact floor-authored spawn transform. An older
45-unit Guest offset could place Player 2 beyond Rainbow Butterfly Wood's small
initial collision polygon and make him fall out of bounds; render-only remote
proxies do not collide, so an overlapping first frame is safe. Dungeon sound
banks now use the real ezMidi/SPU2 compatibility path by default. The former
loading-workaround bypass remains available only as
`DC2_SKIP_DUNGEON_AUDIO=1` for emergency diagnosis.

Each local instance uses its own memory-card directory under `coop_saves` to
avoid concurrent writes to one PS2 save. The localhost UDP relay is
`tools/dc2_coop_server.py`; `DC2_COOP_SERVER`, `DC2_COOP_SESSION`, and
`DC2_COOP_ROLE` also allow the two clients to be launched manually.

### Legacy single-process prototype

The native recomp also contains an experimental single-process two-player dungeon mode. Its flashing alternating-frame compositor is now disabled by default and requires `DC2_COOP_SPLIT=1`; it is retained only as a diagnostic and is not the supported co-op path.

- Player 1 is Max, controlled by controller 1 or WASD plus J/K/L/I.
- Player 2 is Monica, controlled by controller 2 or the arrow keys plus the numpad.
- Both character models are created from independent memory pools.
- Both characters render and receive a dungeon simulation step during normal free roam.
- Dungeon menus and scripted events remain Player-1-authoritative.
- The existing camera remains the primary-player camera. `DC2_COOP_LEASH=1` enables a soft 1,400-unit tether, but it is off by default.

This is a playable prototype, not yet a finished compatibility claim. Combat, every weapon/action state, doors, ridepod/monster transformations, death/revival, floor exits, and every dungeon still need hands-on regression testing.

## What fixed the loading regression

The first co-op attempt made three incorrect assumptions:

1. A `CScene` slot's `+0x00` word is an activity/flag field, not its character pointer. The character pointer is at descriptor offset `+0x34`.
2. Dungeon slots 1 through 3 are Max's equipment objects. Monica belongs in slot 4, with her equipment in slots 5 through 7.
3. Generated recomp functions are resumable. Calling one once and forcing the program counter back to its entry address discards yielded continuations and can strand dungeon loading.

The corrected implementation uses the real `CScene::GetCharacter` layout, places Monica's bank at slots 4 through 7, gives her a separately allocated character arena, and drives generated guest calls until their return-address sentinel is reached.

The earlier hooks named `EditControl`, `EditStepChara`, and `EditDrawChara` are map-editor functions, not the shipping dungeon loop. Runtime co-op now hooks the actual dungeon update (`DngStep`) and the `CActionChara` direct, shadow, and effect virtual draw paths.

## Engine layout used by the implementation

### Scene character descriptors

- Descriptor base: `scene + 0x44`
- Descriptor stride: `0x40`
- Activity/flags: descriptor `+0x00`
- Character pointer: descriptor `+0x34`
- Player 1: slot 0; equipment slots 1-3
- Legacy single-process Player 2: slot 4; equipment slots 5-7
- Network sessions do not allocate slot 4; the remote avatar is render-only
- Dungeon enemy identity comes from `CMonsterMan+0x484` (24 pointer slots)

### Player 2 input

Monica owns separate guest `CGamePad` and `CPadControl` objects. During Monica's step, the co-op wrapper temporarily switches the game's primary pad/control buffers, `MainChara`, and the scene's active-character index to the P2 versions. All values are restored before returning to the normal dungeon loop.

Controller 2 is read from host pad port 1. In co-op mode the keyboard is split so arrow keys are reserved for P2; P1 retains WASD. P2 keyboard bindings are:

| Action | Key |
|---|---|
| Move | Arrow keys |
| Cross | Numpad 2, Numpad 0, or Right Ctrl |
| Circle | Numpad 3, decimal, or Right Shift |
| Square | Numpad 1 or Numpad 4 |
| Triangle | Numpad 5 |
| L1 / R1 | Numpad 7 / Numpad 9 |
| Start / Select | Numpad Enter / Numpad Plus |

## Running it

Use `run_coop.ps1` or `run_coop.bat` from the project root. The launchers prefer the newly built executable at `PS2Recomp/build64/ps2xRuntime/ps2EntryRunner.exe`.

For diagnostics, add `DC2_COOP_TRACE=1`. The expected milestones are:

```text
[DC2:Co-Op] loading Max locally (slot 0); remote uses the lightweight network render proxy
[DC2:Session] remote player connected
[DC2:World] joined room=0x... area=1 map=... floor=... entities=24
```

The headless automated dungeon route uses the recomp's existing `DC2_F64_STALL_TICKS=120` test-only shortcut to pass a long entrance-event script. Normal launchers do not set this; they preserve the event/cutscene behavior.

## Remaining local co-op work

Recommended order:

1. Test P2 locomotion, attacks, guard, lock-on, damage, death, and item interactions with a physical second controller.
2. Audit hard-coded `MainChara` reads reached outside the scoped P2 simulation step.
3. Define ownership for doors, chests, pickups, floor exits, pause/menu state, and character transformations.
4. Add a shared-camera midpoint/zoom controller, or keep the optional leash for the first milestone.
5. Run the full dungeon matrix and verify repeated floor transitions do not leak or retain stale scene pointers.

## Online, separate-screen shared-world design

Separate screens are feasible, but they should be built as one recomp process per player rather than two cameras inside one process. Dark Cloud 2 has many singleton globals for the active scene, player, camera, menus, and event runner; duplicating all of those safely inside one process would be much harder than networking two independent game instances.

The recommended model is a true dedicated server architecture (3 instances):

```text
               +-------------------------------------------+
               |        Dedicated Master Authority         |
               |       (Headless / Low-res Instance)       |
               | - Authoritative Monster AI & Transforms   |
               | - Dungeon Floor Generation & Seeds        |
               | - Chests, Keys, Gates, & Drops            |
               +-------------------------------------------+
                              ^             |
                Inputs (UDP)  |             |  Authoritative Snapshots
                              |             v
          +-------------------+             +-------------------+
          |                                                     |
+--------------------------+                         +--------------------------+
|  Client 1 (Player 1/Max) |                         | Client 2 (Player 2/Mon.) |
| - Local Camera & Menus   |                         | - Local Camera & Menus   |
| - Independent Audio/GPU  |                         | - Independent Audio/GPU  |
| - Renders P2 as Proxy    |                         | - Renders P1 as Proxy    |
+--------------------------+                         +--------------------------+
```

### Protocol v5 Architecture
- **Master Authority Instance (`DC2_COOP_ROLE=authority` / Role 3)**: Runs the master simulation. Owns monster encounters (`CMonsterMan`), procedural dungeon seeds, chests, and combat damage resolution.
- **Player 1 Instance (`DC2_COOP_ROLE=1` / Role 1)**: Player 1 controls Max locally. Sends inputs to the Master Authority.
- **Player 2 Instance (`DC2_COOP_ROLE=2` / Role 2)**: Player 2 controls Monica locally. Sends inputs to the Master Authority.
- **Session Relay (`tools/dc2_coop_server_v5.py`)**: Routes input datagrams from clients to the Master Authority, and broadcasts snapshots from the Authority to both clients.
- **Launcher**: Launch all 3 instances with one click via `launch_dedicated_coop.bat` or Option 5 in `mod_tool.bat`.

- Send player inputs frequently.
- Send character/monster snapshots at a lower fixed rate and interpolate remote actors.
- Send damage, drops, chests, doors, quests, georama edits, inventory transfers, and area transitions as reliable ordered events.
- Let the host own dungeon seeds, enemy spawning, loot rolls, and conflict resolution.
- Do not mirror the entire PS2 memory image or attempt whole-game rollback; the state is too large and contains transient pointers and renderer/audio state.

### Independent areas and dungeon invitations

Each process can remain in a different map because it owns its own scene and camera. Shared persistent state lives in a small authoritative world service or host journal.

When one player enters a dungeon, the host can broadcast:

```text
DungeonJoinOffer { dungeon, floor, seed, hostPlayer, expiresAt }
```

The other client displays an Accept / Decline / Later popup at a safe UI boundary:

- Accept: finish the current safe action, save local area state, and load the host's dungeon/floor/seed at a transition barrier.
- Decline: remain in the current area while the host continues.
- Later: keep the offer available until it expires or the dungeon state no longer permits joining.

Joining mid-floor requires the host to send an initial authoritative snapshot: cleared rooms, monsters and HP, opened chests, collected drops, doors, keys, time, and player spawn point. Late clients should never regenerate the floor independently and guess at that state.

### Practical milestones

1. Two-process localhost prototype: independent camera/UI/input and remote movement snapshots. **Implemented; hands-on controller testing remains.**
2. Identify maps/floors in the protocol and isolate scene rooms. **Implemented; transitions and procedural seeds remain.**
3. Host-authoritative monster transforms plus shared HP proposals. **Implemented; a two-client monster kill is confirmed, while loot remains local.**
4. Host-authoritative pickups, chests, doors, transformations, and reliable events.
5. Dungeon join offers and safe transition barriers.
6. Independent areas backed by revisioned shared-world persistence.
7. Internet transport, reconnect, host migration, authentication, and save-conflict recovery.

This progression reuses the local work: the second controllable character and scoped player-context switching become the remote-avatar simulation path, while each client keeps its own renderer and camera.
