#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__14CFuncPointMngrFiP15CFuncPointCheck
// Address: 0x29dfc0 - 0x29dfc8
void Step__14CFuncPointMngrFiP15CFuncPointCheck_0x29dfc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__14CFuncPointMngrFiP15CFuncPointCheck_0x29dfc0");
#endif

    ctx->pc = 0x29dfc0u;

    // 0x29dfc0: 0x80a77f4  j           func_29DFD0
    ctx->pc = 0x29DFC0u;
    ctx->pc = 0x29DFD0u;
    if (runtime->hasFunction(0x29DFD0u)) {
        auto targetFn = runtime->lookupFunction(0x29DFD0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        UpdateFlag__14CFuncPointMngrFiP15CFuncPointCheck_0x29dfd0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x29DFC8u;
}
