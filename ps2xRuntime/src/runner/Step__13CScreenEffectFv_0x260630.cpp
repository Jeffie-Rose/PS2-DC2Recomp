#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__13CScreenEffectFv
// Address: 0x260630 - 0x260638
void Step__13CScreenEffectFv_0x260630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__13CScreenEffectFv_0x260630");
#endif

    ctx->pc = 0x260630u;

    // 0x260630: 0x809807c  j           func_2601F0
    ctx->pc = 0x260630u;
    ctx->pc = 0x2601F0u;
    if (runtime->hasFunction(0x2601F0u)) {
        auto targetFn = runtime->lookupFunction(0x2601F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        StepRaster__7CRasterFv_0x2601f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x260638u;
}
