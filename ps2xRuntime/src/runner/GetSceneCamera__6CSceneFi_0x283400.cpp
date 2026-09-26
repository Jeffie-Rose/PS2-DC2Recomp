#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetSceneCamera__6CSceneFi
// Address: 0x283400 - 0x28343c
void GetSceneCamera__6CSceneFi_0x283400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetSceneCamera__6CSceneFi_0x283400");
#endif

    ctx->pc = 0x283400u;

    // 0x283400: 0x4a00006  bltz        $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x283400u;
    {
        const bool branch_taken_0x283400 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x283404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283400u;
            // 0x283404: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283400) {
            ctx->pc = 0x28341Cu;
            goto label_28341c;
        }
    }
    ctx->pc = 0x283408u;
    // 0x283408: 0x8c822044  lw          $v0, 0x2044($a0)
    ctx->pc = 0x283408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8260)));
    // 0x28340c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x28340cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x283410: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x283410u;
    {
        const bool branch_taken_0x283410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x283414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x283410u;
            // 0x283414: 0x510c0  sll         $v0, $a1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x283410) {
            ctx->pc = 0x283424u;
            goto label_283424;
        }
    }
    ctx->pc = 0x283418u;
    // 0x283418: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x283418u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28341c:
    // 0x28341c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28341Cu;
    {
        const bool branch_taken_0x28341c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28341c) {
            ctx->pc = 0x283434u;
            goto label_283434;
        }
    }
    ctx->pc = 0x283424u;
label_283424:
    // 0x283424: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x283424u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x283428: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x283428u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x28342c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x28342cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x283430: 0x24422048  addiu       $v0, $v0, 0x2048
    ctx->pc = 0x283430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8264));
label_283434:
    // 0x283434: 0x3e00008  jr          $ra
    ctx->pc = 0x283434u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28343Cu;
}
