#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: videoDecBeginPut__FP8VideoDecPPUcPiPPUcPi
// Address: 0x29bcb0 - 0x29bcb8
void videoDecBeginPut__FP8VideoDecPPUcPiPPUcPi_0x29bcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("videoDecBeginPut__FP8VideoDecPPUcPiPPUcPi_0x29bcb0");
#endif

    ctx->pc = 0x29bcb0u;

    // 0x29bcb0: 0x80a67b0  j           func_299EC0
    ctx->pc = 0x29BCB0u;
    ctx->pc = 0x29BCB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29BCB0u;
            // 0x29bcb4: 0x24840048  addiu       $a0, $a0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x299EC0u;
    if (runtime->hasFunction(0x299EC0u)) {
        auto targetFn = runtime->lookupFunction(0x299EC0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        viBufBeginPut__FP5ViBufPPUcPiPPUcPi_0x299ec0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x29BCB8u;
}
