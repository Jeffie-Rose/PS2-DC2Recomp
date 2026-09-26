#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GyoraceCFGAnalyze__FPc
// Address: 0x21a310 - 0x21a320
void GyoraceCFGAnalyze__FPc_0x21a310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GyoraceCFGAnalyze__FPc_0x21a310");
#endif

    ctx->pc = 0x21a310u;

    // 0x21a310: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x21a310u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a314: 0x8f8492e8  lw          $a0, -0x6D18($gp)
    ctx->pc = 0x21a314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939368)));
    // 0x21a318: 0x8095378  j           func_254DE0
    ctx->pc = 0x21A318u;
    ctx->pc = 0x21A31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21A318u;
            // 0x21a31c: 0x8f8592ec  lw          $a1, -0x6D14($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939372)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x254DE0u;
    if (runtime->hasFunction(0x254DE0u)) {
        auto targetFn = runtime->lookupFunction(0x254DE0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        MenuCommandAnalyze__FPciPc_0x254de0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x21A320u;
}
