#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StartReadBG__Fv
// Address: 0x148cc0 - 0x148cc8
void StartReadBG__Fv_0x148cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StartReadBG__Fv_0x148cc0");
#endif

    ctx->pc = 0x148cc0u;

    // 0x148cc0: 0x8052234  j           func_1488D0
    ctx->pc = 0x148CC0u;
    ctx->pc = 0x1488D0u;
    if (runtime->hasFunction(0x1488D0u)) {
        auto targetFn = runtime->lookupFunction(0x1488D0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        InitReadBG__Fv_0x1488d0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x148CC8u;
}
