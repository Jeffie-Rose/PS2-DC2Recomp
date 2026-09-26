#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSubGameSaveData__Fv
// Address: 0x190890 - 0x190898
void GetSubGameSaveData__Fv_0x190890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSubGameSaveData__Fv_0x190890");
#endif

    ctx->pc = 0x190890u;

    // 0x190890: 0x3e00008  jr          $ra
    ctx->pc = 0x190890u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x190894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x190890u;
            // 0x190894: 0x8f828af8  lw          $v0, -0x7508($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937336)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x190898u;
}
