#pragma once
#include <cstdint>

// Reads the effective live pad the guest reads: active-high scePad button bits
// and 0..255 analog axes (0x80 centre). Implemented in dc2_game_override.cpp
// where the g_pad_live_* state lives. Any out-pointer may be null.
void dc2GetLivePad(uint16_t* mask, uint8_t* lx, uint8_t* ly,
                   uint8_t* rx, uint8_t* ry, bool* connected);
