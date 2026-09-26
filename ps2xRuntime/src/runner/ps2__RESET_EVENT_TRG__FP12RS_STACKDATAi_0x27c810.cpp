#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _RESET_EVENT_TRG__FP12RS_STACKDATAi
// Address: 0x27c810 - 0x27c820
void ps2__RESET_EVENT_TRG__FP12RS_STACKDATAi_0x27c810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__RESET_EVENT_TRG__FP12RS_STACKDATAi_0x27c810");
#endif

    ctx->pc = 0x27c810u;

    // 0x27c810: 0x8f8397dc  lw          $v1, -0x6824($gp)
    ctx->pc = 0x27c810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
    // 0x27c814: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27c814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27c818: 0x3e00008  jr          $ra
    ctx->pc = 0x27C818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C818u;
            // 0x27c81c: 0xac602e88  sw          $zero, 0x2E88($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 11912), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27C820u;
}
