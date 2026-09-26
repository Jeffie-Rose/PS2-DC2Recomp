#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _defStopDMA
// Address: 0x10f680 - 0x10f68c
void _defStopDMA_0x10f680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_defStopDMA_0x10f680");
#endif

    ctx->pc = 0x10f680u;

    // 0x10f680: 0x8c840040  lw          $a0, 0x40($a0)
    ctx->pc = 0x10f680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x10f684: 0x8043ddc  j           func_10F770
    ctx->pc = 0x10F684u;
    ctx->pc = 0x10F688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10F684u;
            // 0x10f688: 0x2484004c  addiu       $a0, $a0, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10F770u;
    if (runtime->hasFunction(0x10F770u)) {
        auto targetFn = runtime->lookupFunction(0x10F770u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceIpuStopDMA_0x10f770(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x10F68Cu;
}
