#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchReferBlock__11CMonsterManFv
// Address: 0x1db810 - 0x1db850
void SearchReferBlock__11CMonsterManFv_0x1db810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchReferBlock__11CMonsterManFv_0x1db810");
#endif

    switch (ctx->pc) {
        case 0x1db81cu: goto label_1db81c;
        default: break;
    }

    ctx->pc = 0x1db810u;

    // 0x1db810: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1db810u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db814: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1db814u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1db818: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1db818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1db81c:
    // 0x1db81c: 0x861821  addu        $v1, $a0, $a2
    ctx->pc = 0x1db81cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1db820: 0x8c6304f0  lw          $v1, 0x4F0($v1)
    ctx->pc = 0x1db820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1264)));
    // 0x1db824: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DB824u;
    {
        const bool branch_taken_0x1db824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1db824) {
            ctx->pc = 0x1DB834u;
            goto label_1db834;
        }
    }
    ctx->pc = 0x1DB82Cu;
    // 0x1db82c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1DB82Cu;
    {
        const bool branch_taken_0x1db82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1db82c) {
            ctx->pc = 0x1DB848u;
            goto label_1db848;
        }
    }
    ctx->pc = 0x1DB834u;
label_1db834:
    // 0x1db834: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1db834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1db838: 0x2843000c  slti        $v1, $v0, 0xC
    ctx->pc = 0x1db838u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)12) ? 1 : 0);
    // 0x1db83c: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1DB83Cu;
    {
        const bool branch_taken_0x1db83c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DB840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DB83Cu;
            // 0x1db840: 0x24c614c0  addiu       $a2, $a2, 0x14C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 5312));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1db83c) {
            ctx->pc = 0x1DB81Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1db81c;
        }
    }
    ctx->pc = 0x1DB844u;
    // 0x1db844: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1db844u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1db848:
    // 0x1db848: 0x3e00008  jr          $ra
    ctx->pc = 0x1DB848u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1DB850u;
}
