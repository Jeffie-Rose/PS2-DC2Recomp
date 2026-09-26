#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _DELETE_SWORD_EFFECT__FP12RS_STACKDATAi
// Address: 0x276fa0 - 0x276fac
void ps2__DELETE_SWORD_EFFECT__FP12RS_STACKDATAi_0x276fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__DELETE_SWORD_EFFECT__FP12RS_STACKDATAi_0x276fa0");
#endif

    ctx->pc = 0x276fa0u;

    // 0x276fa0: 0xaf8097e8  sw          $zero, -0x6818($gp)
    ctx->pc = 0x276fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940648), GPR_U32(ctx, 0));
    // 0x276fa4: 0x3e00008  jr          $ra
    ctx->pc = 0x276FA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x276FA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276FA4u;
            // 0x276fa8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x276FACu;
}
