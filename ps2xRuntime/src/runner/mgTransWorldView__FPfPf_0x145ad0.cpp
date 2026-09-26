#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgTransWorldView__FPfPf
// Address: 0x145ad0 - 0x145ae0
void mgTransWorldView__FPfPf_0x145ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgTransWorldView__FPfPf_0x145ad0");
#endif

    ctx->pc = 0x145ad0u;

    // 0x145ad0: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x145ad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145ad4: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x145ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x145ad8: 0x8041bb0  j           func_106EC0
    ctx->pc = 0x145AD8u;
    ctx->pc = 0x145ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145AD8u;
            // 0x145adc: 0x24a51060  addiu       $a1, $a1, 0x1060 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x145AE0u;
}
