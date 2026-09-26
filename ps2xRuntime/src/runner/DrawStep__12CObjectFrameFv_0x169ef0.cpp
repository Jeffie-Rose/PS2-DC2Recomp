#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawStep__12CObjectFrameFv
// Address: 0x169ef0 - 0x169ef8
void DrawStep__12CObjectFrameFv_0x169ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawStep__12CObjectFrameFv_0x169ef0");
#endif

    ctx->pc = 0x169ef0u;

    // 0x169ef0: 0x805a744  j           func_169D10
    ctx->pc = 0x169EF0u;
    ctx->pc = 0x169D10u;
    if (runtime->hasFunction(0x169D10u)) {
        auto targetFn = runtime->lookupFunction(0x169D10u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        DrawStep__7CObjectFv_0x169d10(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x169EF8u;
}
