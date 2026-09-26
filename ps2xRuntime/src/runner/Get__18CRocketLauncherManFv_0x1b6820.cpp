#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Get__18CRocketLauncherManFv
// Address: 0x1b6820 - 0x1b686c
void Get__18CRocketLauncherManFv_0x1b6820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Get__18CRocketLauncherManFv_0x1b6820");
#endif

    switch (ctx->pc) {
        case 0x1b6828u: goto label_1b6828;
        default: break;
    }

    ctx->pc = 0x1b6820u;

    // 0x1b6820: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1b6820u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1b6824: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1b6824u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b6828:
    // 0x1b6828: 0x851021  addu        $v0, $a0, $a1
    ctx->pc = 0x1b6828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1b682c: 0x8c420174  lw          $v0, 0x174($v0)
    ctx->pc = 0x1b682cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 372)));
    // 0x1b6830: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1B6830u;
    {
        const bool branch_taken_0x1b6830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B6834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6830u;
            // 0x1b6834: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6830) {
            ctx->pc = 0x1B6850u;
            goto label_1b6850;
        }
    }
    ctx->pc = 0x1B6838u;
    // 0x1b6838: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1b6838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1b683c: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1b683cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1b6840: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1b6840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b6844: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1b6844u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1b6848: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1B6848u;
    {
        const bool branch_taken_0x1b6848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B684Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6848u;
            // 0x1b684c: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6848) {
            ctx->pc = 0x1B6864u;
            goto label_1b6864;
        }
    }
    ctx->pc = 0x1B6850u;
label_1b6850:
    // 0x1b6850: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b6850u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b6854: 0x28620018  slti        $v0, $v1, 0x18
    ctx->pc = 0x1b6854u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)24) ? 1 : 0);
    // 0x1b6858: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x1B6858u;
    {
        const bool branch_taken_0x1b6858 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B685Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B6858u;
            // 0x1b685c: 0x24a50190  addiu       $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b6858) {
            ctx->pc = 0x1B6828u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b6828;
        }
    }
    ctx->pc = 0x1B6860u;
    // 0x1b6860: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1b6860u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b6864:
    // 0x1b6864: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1B686Cu;
}
