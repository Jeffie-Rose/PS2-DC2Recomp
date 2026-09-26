#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _ASQ_MOTION_TRG__FP12RS_STACKDATAi
// Address: 0x26e910 - 0x26e918
void ps2__ASQ_MOTION_TRG__FP12RS_STACKDATAi_0x26e910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__ASQ_MOTION_TRG__FP12RS_STACKDATAi_0x26e910");
#endif

    ctx->pc = 0x26e910u;

    // 0x26e910: 0x3e00008  jr          $ra
    ctx->pc = 0x26E910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26E914u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26E910u;
            // 0x26e914: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26E918u;
}
