#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mt_test__FP12RS_STACKDATAi
// Address: 0x2dec00 - 0x2dec08
void mt_test__FP12RS_STACKDATAi_0x2dec00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mt_test__FP12RS_STACKDATAi_0x2dec00");
#endif

    ctx->pc = 0x2dec00u;

    // 0x2dec00: 0x3e00008  jr          $ra
    ctx->pc = 0x2DEC00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DEC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DEC00u;
            // 0x2dec04: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DEC08u;
}
