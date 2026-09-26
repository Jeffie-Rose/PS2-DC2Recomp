#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__14CActiveMonsterFv
// Address: 0x1d9e80 - 0x1d9e88
void Step__14CActiveMonsterFv_0x1d9e80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__14CActiveMonsterFv_0x1d9e80");
#endif

    ctx->pc = 0x1d9e80u;

    // 0x1d9e80: 0x805c7a0  j           func_171E80
    ctx->pc = 0x1D9E80u;
    ctx->pc = 0x171E80u;
    if (runtime->hasFunction(0x171E80u)) {
        auto targetFn = runtime->lookupFunction(0x171E80u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        Step__12CActionCharaFv_0x171e80(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1D9E88u;
}
