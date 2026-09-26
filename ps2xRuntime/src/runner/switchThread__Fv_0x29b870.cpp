#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: switchThread__Fv
// Address: 0x29b870 - 0x29b878
void switchThread__Fv_0x29b870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("switchThread__Fv_0x29b870");
#endif

    ctx->pc = 0x29b870u;

    // 0x29b870: 0x8043fe4  j           func_10FF90
    ctx->pc = 0x29B870u;
    ctx->pc = 0x29B874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29B870u;
            // 0x29b874: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10FF90u;
    if (runtime->hasFunction(0x10FF90u)) {
        auto targetFn = runtime->lookupFunction(0x10FF90u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        RotateThreadReadyQueue_0x10ff90(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x29B878u;
}
