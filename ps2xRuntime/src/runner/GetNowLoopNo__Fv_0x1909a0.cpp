#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetNowLoopNo__Fv
// Address: 0x1909a0 - 0x1909a8
void GetNowLoopNo__Fv_0x1909a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetNowLoopNo__Fv_0x1909a0");
#endif

    ctx->pc = 0x1909a0u;

    // 0x1909a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1909A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1909A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1909A0u;
            // 0x1909a4: 0x8f828adc  lw          $v0, -0x7524($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937308)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1909A8u;
}
