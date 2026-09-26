#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditDebugEnd__Fv
// Address: 0x1a8400 - 0x1a8408
void EditDebugEnd__Fv_0x1a8400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditDebugEnd__Fv_0x1a8400");
#endif

    ctx->pc = 0x1a8400u;

    // 0x1a8400: 0x8069e28  j           func_1A78A0
    ctx->pc = 0x1A8400u;
    ctx->pc = 0x1A78A0u;
    if (runtime->hasFunction(0x1A78A0u)) {
        auto targetFn = runtime->lookupFunction(0x1A78A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        EditDebugInit__Fv_0x1a78a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1A8408u;
}
