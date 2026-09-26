#include "runtime/ps2_pad.h"
#include "ps2_host_backend.h"
#include <cstring>
#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <iterator>
#include <cmath>
#include <string>
#include <utility>

namespace
{
    constexpr uint8_t kPadAnalogMarker = 0x73;
    constexpr uint8_t kPadStickCenter = 0x80;
    constexpr int kNoGamepad = -1;
    constexpr int kMaxGamepads = 4;

    constexpr uint16_t PAD_LEFT = 0x0080u;
    constexpr uint16_t PAD_DOWN = 0x0040u;
    constexpr uint16_t PAD_RIGHT = 0x0020u;
    constexpr uint16_t PAD_UP = 0x0010u;
    constexpr uint16_t PAD_START = 0x0008u;
    constexpr uint16_t PAD_R3 = 0x0004u;
    constexpr uint16_t PAD_L3 = 0x0002u;
    constexpr uint16_t PAD_SELECT = 0x0001u;
    constexpr uint16_t PAD_SQUARE = 0x8000u;
    constexpr uint16_t PAD_CROSS = 0x4000u;
    constexpr uint16_t PAD_CIRCLE = 0x2000u;
    constexpr uint16_t PAD_TRIANGLE = 0x1000u;
    constexpr uint16_t PAD_R1 = 0x0800u;
    constexpr uint16_t PAD_L1 = 0x0400u;
    constexpr uint16_t PAD_R2 = 0x0200u;
    constexpr uint16_t PAD_L2 = 0x0100u;

    bool coopKeyboardSplitEnabled()
    {
        auto on = [](const char *v) { return v && *v && std::strcmp(v, "0") != 0; };
        // v5 sessions must split too, or every process reads the P1 key layout.
        return on(std::getenv("DC2_COOP")) || on(std::getenv("DC2_COOP_V5"));
    }

    // A hidden authority is a pure simulation: it must never consume local input,
    // otherwise a keyboard/controller on the same machine also drives it.
    bool isCoopAuthority()
    {
        const char *role = std::getenv("DC2_COOP_ROLE");
        return role && (std::strcmp(role, "authority") == 0 ||
                        std::strcmp(role, "AUTHORITY") == 0 ||
                        std::strcmp(role, "3") == 0);
    }

    int localSessionInputPort(int requestedPort)
    {
        // A two-process session maps each game's normal PS2 port 0 onto one
        // physical host controller. Secondary guest-pad reads retain port 1.
        if (requestedPort != 0)
            return requestedPort;
        const char *role = std::getenv("DC2_COOP_ROLE");
        const char *value = std::getenv("DC2_COOP_LOCAL_PORT");
        if (!role || !*role || !value || !*value)
            return requestedPort;
        const int parsed = std::atoi(value);
        return parsed >= 0 && parsed < kMaxGamepads ? parsed : requestedPort;
    }

    // Which KEYBOARD layout a process reads for its local (port 0) pad. Without
    // this, a guest process on the same keyboard reads P1's WASD layout and both
    // windows move together. Role decides: host -> P1 (WASD), guest -> P2 (arrows
    // + numpad). DC2_COOP_KEYBOARD_PORT overrides. Non-coop keeps P1.
    int localKeyboardPort(int requestedPort)
    {
        if (requestedPort != 0)
            return requestedPort;
        const char *role = std::getenv("DC2_COOP_ROLE");
        if (role)
        {
            if (std::strcmp(role, "guest") == 0 || std::strcmp(role, "GUEST") == 0 ||
                std::strcmp(role, "2") == 0)
                return 1;
            if (std::strcmp(role, "host") == 0 || std::strcmp(role, "HOST") == 0 ||
                std::strcmp(role, "1") == 0)
                return 0;
        }
        const char *kbd = std::getenv("DC2_COOP_KEYBOARD_PORT");
        if (kbd && *kbd)
        {
            const int parsed = std::atoi(kbd);
            if (parsed == 0 || parsed == 1)
                return parsed;
        }
        return 0;
    }

    int getAvailableGamepadForPort(int port)
    {
        int found = 0;
        for (int gamepad = 0; gamepad < kMaxGamepads; ++gamepad)
        {
            if (IsGamepadAvailable(gamepad))
            {
                if (found == port)
                    return gamepad;
                ++found;
            }
        }
        return kNoGamepad;
    }

    int firstAvailableGamepad()
    {
        return getAvailableGamepadForPort(0);
    }
}

// G449: launcher controller remapping (DC2_CONTROLLER_CONFIG). Included here because it
// needs the scePad bit constants and firstAvailableGamepad() above, and because raylib's
// input API is only reachable from this TU. Entirely inert when the flag is unset.
#include "ps2_pad_parts/g449_controller_config.inc"

bool PSPadBackend::readState(int port, int /*slot*/, uint8_t *data, size_t size)
{
    if (!data || size < 32)
        return false;

    std::memset(data, 0, 32);
    data[0] = 0x01;
    data[1] = kPadAnalogMarker;
    data[2] = 0xFF;
    data[3] = 0xFF;
    data[4] = data[5] = data[6] = data[7] = kPadStickCenter;

    // The hidden authority is a pure simulation: report a neutral pad so local
    // keyboard/gamepad cannot drive it.
    if (isCoopAuthority())
        return true;

    uint16_t btns = 0xFFFFu;
    const int inputPort = localSessionInputPort(port);
    const int gamepad = getAvailableGamepadForPort(inputPort);
    const bool useGamepad = (gamepad != kNoGamepad);
    auto clearBit = [&btns](uint16_t mask)
    { btns &= ~mask; };

    float lx = 0.0f, ly = 0.0f, rx = 0.0f, ry = 0.0f;

    if (useGamepad)
    {
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_LEFT_FACE_UP))
            clearBit(PAD_UP);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_LEFT_FACE_DOWN))
            clearBit(PAD_DOWN);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_LEFT_FACE_LEFT))
            clearBit(PAD_LEFT);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_LEFT_FACE_RIGHT))
            clearBit(PAD_RIGHT);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_RIGHT_FACE_DOWN))
            clearBit(PAD_CROSS);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_RIGHT_FACE_RIGHT))
            clearBit(PAD_CIRCLE);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_RIGHT_FACE_LEFT))
            clearBit(PAD_SQUARE);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_RIGHT_FACE_UP))
            clearBit(PAD_TRIANGLE);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_LEFT_TRIGGER_1))
            clearBit(PAD_L1);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_RIGHT_TRIGGER_1))
            clearBit(PAD_R1);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_LEFT_TRIGGER_2))
            clearBit(PAD_L2);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_RIGHT_TRIGGER_2))
            clearBit(PAD_R2);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_MIDDLE_RIGHT))
            clearBit(PAD_START);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_MIDDLE_LEFT))
            clearBit(PAD_SELECT);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_LEFT_THUMB))
            clearBit(PAD_L3);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_RIGHT_THUMB))
            clearBit(PAD_R3);

        lx = GetGamepadAxisMovement(gamepad, GAMEPAD_AXIS_LEFT_X);
        ly = GetGamepadAxisMovement(gamepad, GAMEPAD_AXIS_LEFT_Y);
        rx = GetGamepadAxisMovement(gamepad, GAMEPAD_AXIS_RIGHT_X);
        ry = GetGamepadAxisMovement(gamepad, GAMEPAD_AXIS_RIGHT_Y);
    }

    // Keyboard support is active for all sessions and merges seamlessly with gamepad.
    // The layout a process reads is chosen by role (see localKeyboardPort): host P1,
    // guest P2, so two windows on one keyboard are independently controllable.
    const int kbPort = localKeyboardPort(port);
    if (kbPort == 0)
    {
        // Player 1 Keyboard: WASD + J/K/L/I / Space / Enter / Tab / Q/E
        float kbLx = 0.0f, kbLy = 0.0f;
        if ((!coopKeyboardSplitEnabled() && IsKeyDown(KEY_UP)) || IsKeyDown(KEY_W))
        {
            clearBit(PAD_UP);
            kbLy -= 1.0f;
        }
        if ((!coopKeyboardSplitEnabled() && IsKeyDown(KEY_DOWN)) || IsKeyDown(KEY_S))
        {
            clearBit(PAD_DOWN);
            kbLy += 1.0f;
        }
        if ((!coopKeyboardSplitEnabled() && IsKeyDown(KEY_LEFT)) || IsKeyDown(KEY_A))
        {
            clearBit(PAD_LEFT);
            kbLx -= 1.0f;
        }
        if ((!coopKeyboardSplitEnabled() && IsKeyDown(KEY_RIGHT)) || IsKeyDown(KEY_D))
        {
            clearBit(PAD_RIGHT);
            kbLx += 1.0f;
        }
        // Action buttons: J (Square/Attack), K (Cross/Confirm), L (Circle/Action), I (Triangle/Menu)
        if (IsKeyDown(KEY_K) || IsKeyDown(KEY_X) || IsKeyDown(KEY_SPACE))
            clearBit(PAD_CROSS);
        if (IsKeyDown(KEY_L) || IsKeyDown(KEY_C) || IsKeyDown(KEY_ESCAPE))
            clearBit(PAD_CIRCLE);
        if (IsKeyDown(KEY_J) || IsKeyDown(KEY_Z))
            clearBit(PAD_SQUARE);
        if (IsKeyDown(KEY_I) || IsKeyDown(KEY_V))
            clearBit(PAD_TRIANGLE);

        if (IsKeyDown(KEY_Q))
            clearBit(PAD_L1);
        if (IsKeyDown(KEY_E))
            clearBit(PAD_R1);
        if (IsKeyDown(KEY_LEFT_SHIFT))
            clearBit(PAD_L2);
        if (IsKeyDown(KEY_RIGHT_SHIFT))
            clearBit(PAD_R2);
        if (IsKeyDown(KEY_ENTER))
            clearBit(PAD_START);
        if (IsKeyDown(KEY_TAB))
            clearBit(PAD_SELECT);

        // Apply keyboard directional deflection if gamepad stick is neutral
        if (std::abs(lx) < 0.15f && kbLx != 0.0f)
            lx = kbLx;
        if (std::abs(ly) < 0.15f && kbLy != 0.0f)
            ly = kbLy;
    }
    else if (kbPort == 1)
    {
        // Player 2 Keyboard: Arrow keys + Numpad
        float kbLx = 0.0f, kbLy = 0.0f;
        if (IsKeyDown(KEY_UP))
        {
            clearBit(PAD_UP);
            kbLy -= 1.0f;
        }
        if (IsKeyDown(KEY_DOWN))
        {
            clearBit(PAD_DOWN);
            kbLy += 1.0f;
        }
        if (IsKeyDown(KEY_LEFT))
        {
            clearBit(PAD_LEFT);
            kbLx -= 1.0f;
        }
        if (IsKeyDown(KEY_RIGHT))
        {
            clearBit(PAD_RIGHT);
            kbLx += 1.0f;
        }

        // P2 Numpad: 1 (Square/Attack), 2 (Cross/Confirm), 3 (Circle/Action), 5 (Triangle/Menu), 0 (Cross/Jump)
        if (IsKeyDown(KEY_KP_2) || IsKeyDown(KEY_KP_0) || IsKeyDown(KEY_RIGHT_CONTROL))
            clearBit(PAD_CROSS);
        if (IsKeyDown(KEY_KP_3) || IsKeyDown(KEY_KP_DECIMAL) || IsKeyDown(KEY_RIGHT_SHIFT))
            clearBit(PAD_CIRCLE);
        if (IsKeyDown(KEY_KP_1) || IsKeyDown(KEY_KP_4))
            clearBit(PAD_SQUARE);
        if (IsKeyDown(KEY_KP_5))
            clearBit(PAD_TRIANGLE);

        if (IsKeyDown(KEY_KP_7))
            clearBit(PAD_L1);
        if (IsKeyDown(KEY_KP_9))
            clearBit(PAD_R1);
        if (IsKeyDown(KEY_KP_ENTER))
            clearBit(PAD_START);
        if (IsKeyDown(KEY_KP_ADD))
            clearBit(PAD_SELECT);

        if (std::abs(lx) < 0.15f && kbLx != 0.0f)
            lx = kbLx;
        if (std::abs(ly) < 0.15f && kbLy != 0.0f)
            ly = kbLy;
    }

    data[6] = static_cast<uint8_t>(128 + lx * 127);
    data[7] = static_cast<uint8_t>(128 + ly * 127);
    data[4] = static_cast<uint8_t>(128 + rx * 127);
    data[5] = static_cast<uint8_t>(128 + ry * 127);

    // PHASE F21 — synthetic press removed from backend. The pad_button_read_stub
    // in dc2_game_override.cpp owns the synthetic schedule and must be the ONLY
    // synth source. Reason: read_pad__FP10PAD_STATUSii (decomp 0x14a490, line
    // 64443-64453) RESETS its state machine when the button mask CHANGES between
    // calls. Two synthetic sources with mismatched masks would thrash the state
    // and never deliver a button into CGamePad+0x04.

    data[2] = static_cast<uint8_t>(btns & 0xFF);
    data[3] = static_cast<uint8_t>(btns >> 8);
    return true;
}

// ---------------------------------------------------------------------------
// PHASE G7 / COOP: live host controller (XInput on Windows, via raylib's GLFW joystick
// backend) mapped to the scePad bit layout. Polled once per host present frame on
// the raylib/main thread (see g7_poll_live_pad in dc2_game_override.cpp) and
// published to snapshots the guest pad read consumes. Supports port 0 (Player 1)
// and port 1 (Player 2).
extern "C" bool dc2_poll_host_pad_port(int port, bool allowKeyboard, uint16_t *outMask,
                                       uint8_t *outLX, uint8_t *outLY,
                                       uint8_t *outRX, uint8_t *outRY)
{
    // Hidden authority: never report local input.
    if (isCoopAuthority())
    {
        if (outMask) *outMask = 0u;
        if (outLX) *outLX = kPadStickCenter;
        if (outLY) *outLY = kPadStickCenter;
        if (outRX) *outRX = kPadStickCenter;
        if (outRY) *outRY = kPadStickCenter;
        return false;
    }

    const int inputPort = localSessionInputPort(port);
    // G449: launcher controller config applies to Port 0.
    if (inputPort == 0 && g449PollConfiguredPad(outMask, outLX, outLY, outRX, outRY))
        return true;

    const int gamepad = getAvailableGamepadForPort(inputPort);
    const bool padConnected = (gamepad != kNoGamepad);
    (void)allowKeyboard;

    uint16_t mask = 0u; // active-high
    auto press = [&mask](uint16_t bit) { mask |= bit; };

    auto deflect = [](float x, float y) -> std::pair<uint8_t, uint8_t> {
        float mag = std::sqrt(x * x + y * y);
        constexpr float kDead = 0.20f;
        if (mag < kDead) { x = 0.f; y = 0.f; }
        auto toByte = [](float v) -> uint8_t {
            int b = 128 + static_cast<int>(v * 127.0f);
            if (b < 0) b = 0; else if (b > 255) b = 255;
            return static_cast<uint8_t>(b);
        };
        return { toByte(x), toByte(y) };
    };

    uint8_t lx = kPadStickCenter, ly = kPadStickCenter;
    uint8_t rx = kPadStickCenter, ry = kPadStickCenter;

    if (padConnected)
    {
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_LEFT_FACE_UP))    press(PAD_UP);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_LEFT_FACE_DOWN))  press(PAD_DOWN);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_LEFT_FACE_LEFT))  press(PAD_LEFT);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_LEFT_FACE_RIGHT)) press(PAD_RIGHT);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_RIGHT_FACE_DOWN)) press(PAD_CROSS);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_RIGHT_FACE_RIGHT))press(PAD_CIRCLE);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_RIGHT_FACE_LEFT)) press(PAD_SQUARE);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_RIGHT_FACE_UP))   press(PAD_TRIANGLE);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_LEFT_TRIGGER_1))  press(PAD_L1);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_RIGHT_TRIGGER_1)) press(PAD_R1);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_LEFT_TRIGGER_2))  press(PAD_L2);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_RIGHT_TRIGGER_2)) press(PAD_R2);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_MIDDLE_RIGHT))    press(PAD_START);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_MIDDLE_LEFT))     press(PAD_SELECT);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_LEFT_THUMB))      press(PAD_L3);
        if (IsGamepadButtonDown(gamepad, GAMEPAD_BUTTON_RIGHT_THUMB))     press(PAD_R3);

        if (GetGamepadAxisMovement(gamepad, GAMEPAD_AXIS_LEFT_TRIGGER)  > -0.5f) press(PAD_L2);
        if (GetGamepadAxisMovement(gamepad, GAMEPAD_AXIS_RIGHT_TRIGGER) > -0.5f) press(PAD_R2);

        auto l = deflect(GetGamepadAxisMovement(gamepad, GAMEPAD_AXIS_LEFT_X),
                         GetGamepadAxisMovement(gamepad, GAMEPAD_AXIS_LEFT_Y));
        auto r = deflect(GetGamepadAxisMovement(gamepad, GAMEPAD_AXIS_RIGHT_X),
                         GetGamepadAxisMovement(gamepad, GAMEPAD_AXIS_RIGHT_Y));
        lx = l.first; ly = l.second; rx = r.first; ry = r.second;
    }

    // Keyboard support is active for all sessions and merges seamlessly with gamepad
    if (inputPort == 0) // P1 keyboard: WASD + J/K/L/I / Space / Enter / Tab / Q/E
    {
        if ((!coopKeyboardSplitEnabled() && IsKeyDown(KEY_UP)) || IsKeyDown(KEY_W))    press(PAD_UP);
        if ((!coopKeyboardSplitEnabled() && IsKeyDown(KEY_DOWN)) || IsKeyDown(KEY_S))  press(PAD_DOWN);
        if ((!coopKeyboardSplitEnabled() && IsKeyDown(KEY_LEFT)) || IsKeyDown(KEY_A))  press(PAD_LEFT);
        if ((!coopKeyboardSplitEnabled() && IsKeyDown(KEY_RIGHT)) || IsKeyDown(KEY_D)) press(PAD_RIGHT);

        if (IsKeyDown(KEY_K) || IsKeyDown(KEY_X) || IsKeyDown(KEY_SPACE)) press(PAD_CROSS);
        if (IsKeyDown(KEY_L) || IsKeyDown(KEY_C) || IsKeyDown(KEY_ESCAPE)) press(PAD_CIRCLE);
        if (IsKeyDown(KEY_J) || IsKeyDown(KEY_Z)) press(PAD_SQUARE);
        if (IsKeyDown(KEY_I) || IsKeyDown(KEY_V)) press(PAD_TRIANGLE);

        if (IsKeyDown(KEY_Q)) press(PAD_L1);
        if (IsKeyDown(KEY_E)) press(PAD_R1);
        if (IsKeyDown(KEY_LEFT_SHIFT)) press(PAD_L2);
        if (IsKeyDown(KEY_RIGHT_SHIFT)) press(PAD_R2);
        if (IsKeyDown(KEY_ENTER)) press(PAD_START);
        if (IsKeyDown(KEY_TAB)) press(PAD_SELECT);

        float kx = (IsKeyDown(KEY_D) ? 1.f : 0.f) - (IsKeyDown(KEY_A) ? 1.f : 0.f);
        float ky = (IsKeyDown(KEY_S) ? 1.f : 0.f) - (IsKeyDown(KEY_W) ? 1.f : 0.f);
        if (kx != 0.f || ky != 0.f)
        {
            auto l = deflect(kx, ky);
            lx = l.first; ly = l.second;
        }
    }
    else if (inputPort == 1) // P2 keyboard: Arrow keys + Numpad
    {
        if (IsKeyDown(KEY_UP))    press(PAD_UP);
        if (IsKeyDown(KEY_DOWN))  press(PAD_DOWN);
        if (IsKeyDown(KEY_LEFT))  press(PAD_LEFT);
        if (IsKeyDown(KEY_RIGHT)) press(PAD_RIGHT);

        if (IsKeyDown(KEY_KP_2) || IsKeyDown(KEY_KP_0) || IsKeyDown(KEY_RIGHT_CONTROL)) press(PAD_CROSS);
        if (IsKeyDown(KEY_KP_3) || IsKeyDown(KEY_KP_DECIMAL) || IsKeyDown(KEY_RIGHT_SHIFT)) press(PAD_CIRCLE);
        if (IsKeyDown(KEY_KP_1) || IsKeyDown(KEY_KP_4)) press(PAD_SQUARE);
        if (IsKeyDown(KEY_KP_5)) press(PAD_TRIANGLE);

        if (IsKeyDown(KEY_KP_7)) press(PAD_L1);
        if (IsKeyDown(KEY_KP_9)) press(PAD_R1);
        if (IsKeyDown(KEY_KP_ENTER)) press(PAD_START);
        if (IsKeyDown(KEY_KP_ADD)) press(PAD_SELECT);

        float kx = (IsKeyDown(KEY_RIGHT) ? 1.f : 0.f) - (IsKeyDown(KEY_LEFT) ? 1.f : 0.f);
        float ky = (IsKeyDown(KEY_DOWN) ? 1.f : 0.f) - (IsKeyDown(KEY_UP) ? 1.f : 0.f);
        if (kx != 0.f || ky != 0.f)
        {
            auto l = deflect(kx, ky);
            lx = l.first; ly = l.second;
        }
    }

    if (outMask) *outMask = mask;
    if (outLX) *outLX = lx;
    if (outLY) *outLY = ly;
    if (outRX) *outRX = rx;
    if (outRY) *outRY = ry;
    return true;
}

extern "C" bool dc2_poll_host_pad(bool allowKeyboard, uint16_t *outMask,
                                  uint8_t *outLX, uint8_t *outLY,
                                  uint8_t *outRX, uint8_t *outRY)
{
    return dc2_poll_host_pad_port(0, allowKeyboard, outMask, outLX, outLY, outRX, outRY);
}
