#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Initialize__12mgCFrameBaseFv
// Address: 0x136510 - 0x136518
void Initialize__12mgCFrameBaseFv_0x136510(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Initialize__12mgCFrameBaseFv_0x136510");
#endif

    ctx->pc = 0x136510u;

    // 0x136510: 0x804d904  j           func_136410
    ctx->pc = 0x136510u;
    ctx->pc = 0x136410u;
    if (runtime->hasFunction(0x136410u)) {
        auto targetFn = runtime->lookupFunction(0x136410u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        Initialize__9mgCObjectFv_0x136410(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x136518u;
}
