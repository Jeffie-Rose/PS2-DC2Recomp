#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _defRestartDMA
// Address: 0x10f690 - 0x10f69c
void _defRestartDMA_0x10f690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_defRestartDMA_0x10f690");
#endif

    ctx->pc = 0x10f690u;

    // 0x10f690: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x10f690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x10f694: 0x8043e16  j           func_10F858
    ctx->pc = 0x10F694u;
    ctx->pc = 0x10F698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F694u;
            // 0x10f698: 0x2484004c  addiu       $a0, $a0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F858u;
    if (runtime->hasFunction(0x10F858u)) {
        auto targetFn = runtime->lookupFunction(0x10F858u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceIpuRestartDMA_0x10f858(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10F69Cu;
}
