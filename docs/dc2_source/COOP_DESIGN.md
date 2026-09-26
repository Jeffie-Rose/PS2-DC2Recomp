# Dark Cloud 2: 2-Player Co-Op Technical Design & Architecture

## Overview
This document details the reverse-engineered engine architecture and implementation for **2-Player Co-Op** in the native Dark Cloud 2 recompiled PC port.
It enables **Player 1 to control Max** and **Player 2 to control Monica** simultaneously in all dungeon floors.

---

## 1. Engine Character Architecture & Entity Management

### 1.1 The Scene Entity Table (`CScene`)
In Dark Cloud 2, the scene manager (`CScene`) manages all active entities in a dense table:
- **Table Capacity:** 128 entity slots (`scene + 0x0040u = 0x80u`).
- **Slot Array Base:** `scene + 0x0044u`
- **Slot Entry Size:** 64 bytes (`0x40u`)
- **Slot Layout:**
  - `+0x00`: Active flag (0 = unused, 1 = active entity)
  - `+0x34`: Pointer to character object (`CCharacter2*` / `CPlayer*`)
- **Slot Indexing:**
  - **Slot 0:** Reserved for Player Character 1 (Max)
  - **Slot 1:** Reserved for Player Character 2 (Monica)
  - **Slot 2:** Ridepod (Steve) / Monster transformation
  - **Slots 8–63:** Monsters, dungeon NPCs, interactable chests, keys, and props
  - **Slots 120–123:** Special dungeon environmental systems

### 1.2 Character Position & Transform Vector
Every character instance (`CCharacter2`) inherits from `mgCObject`:
- `object + 0x10`: `float posX`
- `object + 0x14`: `float posY`
- `object + 0x18`: `float posZ`
- `object + 0x1C`: `float posW` (1.0f)
- Virtual method `vtable + 0x10`: `SetPosition(float *pos)`
- Virtual method `vtable + 0x24`: `GetPosition(float *outPos)`

---

## 2. Input System & Controller Routing

### 2.1 Gamepad Hardware Detection (`ps2_pad.cpp`)
- Built on raylib / GLFW joystick backend (supporting XInput, DirectInput, DualSense, Xbox, Switch Pro).
- `port 0`: Primary Gamepad (Player 1) or primary keyboard.
- `port 1`: Secondary Gamepad (Player 2) or secondary keyboard bindings (Arrow keys + Numpad).

### 2.2 Guest Gamepad Structures
- **Global P1 `CGamePad`:** `0x003D76E0`
- **Global P1 `CPadControl`:** `0x003D7B60`
- **Player 2 Instances:**
  - `CGamePad` P2 allocated at `0x01FF0000u`
  - `CPadControl` P2 allocated at `0x01FF0200u`
- In each frame:
  1. `UpDate__8CGamePadFv` updates P1 from Port 0 and P2 from Port 1.
  2. `Update__11CPadControlFP8CGamePad` updates P1's virtual action map and P2's virtual action map.

---

## 3. Character Execution & Simulation Hook

### 3.1 Input & Action Dispatch (`EditControl`)
Address: `0x001A42B0` (`EditControl__FP6CSceneP11CPadControl`)
In vanilla, this function queries `scene + 0x2E50` (the active character index) and calls:
```c
CharaControl__FP6CSceneP11CPadControl(scene, padControl);
```
In Co-Op mode:
```c
// 1. Dispatch Player 1 controls to Max
scene->activeChrIndex = 0;
CharaControl(scene, padControlP1);

// 2. Dispatch Player 2 controls to Monica
scene->activeChrIndex = 1;
CharaControl(scene, padControlP2);
```
Because `CharaControl` executes the complete character locomotion, combo attacks, magic charging, blocking, and dodging state machine, both players gain full, native gameplay mechanics simultaneously.

### 3.2 Physics & Animation Stepping (`EditStepChara`)
Address: `0x001A76C0` (`EditStepChara__FP6CScene`)
In Co-Op mode:
```c
StepChara(scene, 0); // Step Max (physics, hitboxes, animations)
StepChara(scene, 1); // Step Monica (physics, hitboxes, animations)

// Step remaining entities (8..63)
for (int i = 8; i < 64; ++i) {
    StepChara(scene, i);
}
```

### 3.3 Character & Shadow Rendering (`EditDrawChara`)
Address: `0x001A77B0` (`EditDrawChara__FP6CScene`) and `0x001A7750` (`EditDrawShadowChara`)
In Co-Op mode:
```c
DrawChara(scene, 0, 0); // Render Max
DrawChara(scene, 1, 0); // Render Monica
DrawCharaShadow(scene, 0); // Render Max Shadow
DrawCharaShadow(scene, 1); // Render Monica Shadow
```

---

## 4. Dungeon Dual Character Spawning (`SetupMainUnit`)

Address: `0x001E8F30` (`SetupMainUnit`)
Called upon dungeon floor generation from `InitDungeonMain` (`0x001CC040`).
- Vanilla checks `activeChrNo` (`CUserDataManager + 0x44D96`) and only allocates/loads the selected character (Max or Monica).
- Co-Op hook executes:
  1. Allocation and mesh/texture binding for Max (`chr 0`) into `CScene` slot 0.
  2. Allocation and mesh/texture binding for Monica (`chr 1`) into `CScene` slot 1.
  3. Load equipment for both: Max equipped with Wrench/Hammer + Gun; Monica equipped with Sword + Brassard.
  4. Position Monica at `posMax + vec3(120.0f, 0.0f, 0.0f)` with matching floor elevation.

---

## 5. Dynamic Shared Midpoint Camera & Leash Tether

Dark Cloud 2's camera follow controller is `mgCCameraFollow`:
- Follow target position: `camera + 0x70` (X), `camera + 0x74` (Y), `camera + 0x78` (Z)
- Distance (zoom): `camera + 0x90`

### 5.1 Midpoint Tracking
```cpp
vec3 posMax = *(vec3*)(rdram + charaMax + 0x10);
vec3 posMonica = *(vec3*)(rdram + charaMonica + 0x10);

vec3 midPoint = (posMax + posMonica) * 0.5f;
*(float*)(rdram + camera + 0x70) = midPoint.x;
*(float*)(rdram + camera + 0x74) = midPoint.y + 40.0f; // slight vertical offset
*(float*)(rdram + camera + 0x78) = midPoint.z;
```

### 5.2 Dynamic Zoom & Distance Scaling
```cpp
float dist = hypot(posMax.x - posMonica.x, posMax.z - posMonica.z);
float dynamicZoom = baseDistance + clamp(dist * 0.35f, 0.0f, 450.0f);
*(float*)(rdram + camera + 0x90) = dynamicZoom;
```

### 5.3 Soft Leash Tether
If `dist > 1400.0f`:
The player farther from the midpoint is gently nudged toward the midpoint by a spring vector:
```cpp
vec3 delta = midPoint - posFarther;
posFarther += normalize(delta) * (dist - 1400.0f) * 0.1f;
```
This ensures players cannot get separated into different rooms or pushed off-screen.

---

## 6. Controls Summary

| Action | Player 1 (Max) Gamepad 0 | Player 2 (Monica) Gamepad 1 | Player 2 Keyboard Alternative |
|---|---|---|---|
| **Movement** | Left Analog Stick | Left Analog Stick | Arrow Keys |
| **Right Hand Attack** | Cross / Square | Cross / Square | Numpad 0 / Enter |
| **Left Hand / Magic** | Triangle | Triangle | Numpad 1 |
| **Jump / Roll** | Circle | Circle | Numpad 2 |
| **Defend / Guard** | R1 | R1 | Numpad 3 |
| **Lock-On Target** | L1 | L1 | Numpad 7 |
| **Action / Talk / Open** | Square | Square | Numpad 0 |

---

## 7. Testing with Level-5 Developer Debug Menu

To test 2-Player Co-Op immediately without playing through early story events:
1. Launch [`run_coop.bat`](file:///e:/Dark%20cloud%202/run_coop.bat) (selects Option 1 by default).
2. The game boots straight into the Level-5 Developer Debug Menu (`DC2_DEBUG_MENU=1`).
3. Use D-Pad Up/Down to navigate to **`gcMAP_NO`** or dungeon selection (`dungeon 0` / Underground Channel Floor 1 `map/d/d01/f01`, or `d02` Rainbow Butterfly Wood).
4. Press Circle (or J on keyboard) to confirm and enter.
5. The dungeon loads immediately: Max (slot 0) and Monica (slot 1) spawn side-by-side.
6. Player 1 moves and attacks with Max; Player 2 moves and attacks with Monica simultaneously!
7. Press `F1` at any time to toggle the ImGui Host Inspector overlay.

---

## 8. Dedicated Server Architecture (Protocol v5)

To prevent peer-to-peer divergence and support 2+ players cleanly:
- **Topology**: Client-Server Architecture mediated via UDP relay (`dc2_coop_server_v5.py`, default port 19772).
- **Role 3 (Authority / Dedicated Simulation)**:
  - Runs headless or background master simulation.
  - Generates the canonical dungeon seed (`floorSeed`), manages all monster AI, monster health pools, combat outcomes, dropped items, and chest states.
  - Only instance executing `ThinkHost__11CMonsterManFv` (`0x001DFB00`).
  - Broadcasts CRC32-validated `SnapshotEntity`, `SnapshotPlayer`, and `SnapshotChest` packets to all connected clients at 60 Hz.
- **Roles 1 & 2 (Clients - Max & Monica)**:
  - Sample local controllers and push lightweight input frames (`InputFrame`) to the Authority.
  - Receive canonical entity snapshots.
  - Bypass local `ThinkHost` via `coop_think_host_stub` (`0x001DFB00`) so monsters are not double-simulated locally.
  - Render proxies with dynamic anime spring resetting (`ResetDAPosition__11CCharacter2Fv`, `0x001737B0`) to prevent visual stretching.

---

## 9. Bug Fixes & Technical Resolutions

### 9.1 Monster Ghosting & Attack Lockout
- **Cause**: In P2P (v4), when Player 2 killed a monster, Player 2's local memory freed the actor slot and stopped transmitting it. Player 1's local `ThinkHost` still had the monster alive in its own entity table, continuing to attack Player 1.
- **Resolution**: Under Protocol v5, clients bypass `ThinkHost`. Only the Server Authority runs `ThinkHost` and dictates entity death, destruction, and cleanup across all clients simultaneously.

### 9.2 Monica Anime Spring Hair Stretching
- **Cause**: `CCharacter2` maintains dynamic spring chains (`+0x12C` count, `+0x130` chain pointer) for hair and skirt physics. Relocating the character to proxy coordinates updated bones via `UpdatePosition` (`0x00173700`), but spring physics roots remained anchored at original world coordinates.
- **Resolution**: Called Level-5's internal `ResetDAPosition__11CCharacter2Fv` (`0x001737B0`) across all linked parts (`+0x678`) before drawing the proxy and after restoring local hero pose.

