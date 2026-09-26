#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ExeScript__14CBaseMenuClassFPc
// Address: 0x239f30 - 0x239f44
void ExeScript__14CBaseMenuClassFPc_0x239f30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExeScript__14CBaseMenuClassFPc_0x239f30");
#endif

    ctx->pc = 0x239f30u;

    // 0x239f30: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x239f30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239f34: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x239f34u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x239f38: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x239f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x239f3c: 0x8095378  j           func_254DE0
    ctx->pc = 0x239F3Cu;
    ctx->pc = 0x239F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239F3Cu;
            // 0x239f40: 0x8c840008  lw          $a0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x254DE0u;
    if (runtime->hasFunction(0x254DE0u)) {
        auto targetFn = runtime->lookupFunction(0x254DE0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        MenuCommandAnalyze__FPciPc_0x254de0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x239F44u;
}
