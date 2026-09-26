#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sndTransBdState__Fv
// Address: 0x18d570 - 0x18d57c
void sndTransBdState__Fv_0x18d570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sndTransBdState__Fv_0x18d570");
#endif

    ctx->pc = 0x18d570u;

    // 0x18d570: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x18d570u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
    // 0x18d574: 0x8062c68  j           func_18B1A0
    ctx->pc = 0x18D574u;
    ctx->pc = 0x18D578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D574u;
            // 0x18d578: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B1A0u;
    if (runtime->hasFunction(0x18B1A0u)) {
        auto targetFn = runtime->lookupFunction(0x18B1A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        TransBdState__6CSoundFi_0x18b1a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x18D57Cu;
}
