#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SubGameCFGAnalyze__FPc
// Address: 0x2c5b20 - 0x2c5b30
void SubGameCFGAnalyze__FPc_0x2c5b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SubGameCFGAnalyze__FPc_0x2c5b20");
#endif

    ctx->pc = 0x2c5b20u;

    // 0x2c5b20: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2c5b20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c5b24: 0x8f849d44  lw          $a0, -0x62BC($gp)
    ctx->pc = 0x2c5b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942020)));
    // 0x2c5b28: 0x8095378  j           func_254DE0
    ctx->pc = 0x2C5B28u;
    ctx->pc = 0x2C5B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C5B28u;
            // 0x2c5b2c: 0x8f859d48  lw          $a1, -0x62B8($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942024)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x254DE0u;
    if (runtime->hasFunction(0x254DE0u)) {
        auto targetFn = runtime->lookupFunction(0x254DE0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        MenuCommandAnalyze__FPciPc_0x254de0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2C5B30u;
}
