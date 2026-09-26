#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SelectMax__14CMenuQuestViewFv
// Address: 0x294d40 - 0x294d70
void SelectMax__14CMenuQuestViewFv_0x294d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SelectMax__14CMenuQuestViewFv_0x294d40");
#endif

    ctx->pc = 0x294d40u;

    // 0x294d40: 0x838398dc  lb          $v1, -0x6724($gp)
    ctx->pc = 0x294d40u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940892)));
    // 0x294d44: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x294D44u;
    {
        const bool branch_taken_0x294d44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x294D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294D44u;
            // 0x294d48: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294d44) {
            ctx->pc = 0x294D58u;
            goto label_294d58;
        }
    }
    ctx->pc = 0x294D4Cu;
    // 0x294d4c: 0x8f829894  lw          $v0, -0x676C($gp)
    ctx->pc = 0x294d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940820)));
    // 0x294d50: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x294D50u;
    {
        const bool branch_taken_0x294d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294D50u;
            // 0x294d54: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294d50) {
            ctx->pc = 0x294D68u;
            goto label_294d68;
        }
    }
    ctx->pc = 0x294D58u;
label_294d58:
    // 0x294d58: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x294D58u;
    {
        const bool branch_taken_0x294d58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x294d58) {
            ctx->pc = 0x294D68u;
            goto label_294d68;
        }
    }
    ctx->pc = 0x294D60u;
    // 0x294d60: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x294D60u;
    {
        const bool branch_taken_0x294d60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294D64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294D60u;
            // 0x294d64: 0x24020035  addiu       $v0, $zero, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294d60) {
            ctx->pc = 0x294D68u;
            goto label_294d68;
        }
    }
    ctx->pc = 0x294D68u;
label_294d68:
    // 0x294d68: 0x3e00008  jr          $ra
    ctx->pc = 0x294D68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x294D70u;
}
