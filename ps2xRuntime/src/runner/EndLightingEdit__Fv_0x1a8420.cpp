#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EndLightingEdit__Fv
// Address: 0x1a8420 - 0x1a8428
void EndLightingEdit__Fv_0x1a8420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EndLightingEdit__Fv_0x1a8420");
#endif

    ctx->pc = 0x1a8420u;

    // 0x1a8420: 0x806a104  j           func_1A8410
    ctx->pc = 0x1A8420u;
    ctx->pc = 0x1A8410u;
    if (runtime->hasFunction(0x1A8410u)) {
        auto targetFn = runtime->lookupFunction(0x1A8410u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        InitLightingEdit__Fv_0x1a8410(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A8428u;
}
