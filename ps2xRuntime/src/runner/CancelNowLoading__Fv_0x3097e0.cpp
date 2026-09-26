#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CancelNowLoading__Fv
// Address: 0x3097e0 - 0x3097ec
void CancelNowLoading__Fv_0x3097e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CancelNowLoading__Fv_0x3097e0");
#endif

    ctx->pc = 0x3097e0u;

    // 0x3097e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3097e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3097e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3097E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3097E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3097E4u;
            // 0x3097e8: 0xaf83a1a0  sw          $v1, -0x5E60($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294943136), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3097ECu;
}
