#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetQuestInfo__13CQuestManagerFi
// Address: 0x31a800 - 0x31a84c
void GetQuestInfo__13CQuestManagerFi_0x31a800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetQuestInfo__13CQuestManagerFi_0x31a800");
#endif

    switch (ctx->pc) {
        case 0x31a810u: goto label_31a810;
        default: break;
    }

    ctx->pc = 0x31a800u;

    // 0x31a800: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x31a800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x31a804: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x31a804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31a808: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x31A808u;
    {
        const bool branch_taken_0x31a808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A808u;
            // 0x31a80c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a808) {
            ctx->pc = 0x31A838u;
            goto label_31a838;
        }
    }
    ctx->pc = 0x31A810u;
label_31a810:
    // 0x31a810: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x31a810u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x31a814: 0x1071021  addu        $v0, $t0, $a3
    ctx->pc = 0x31a814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x31a818: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x31a818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x31a81c: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x31A81Cu;
    {
        const bool branch_taken_0x31a81c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x31A820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A81Cu;
            // 0x31a820: 0x24020394  addiu       $v0, $zero, 0x394 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 916));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a81c) {
            ctx->pc = 0x31A830u;
            goto label_31a830;
        }
    }
    ctx->pc = 0x31A824u;
    // 0x31a824: 0xc21018  mult        $v0, $a2, $v0
    ctx->pc = 0x31a824u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x31a828: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x31A828u;
    {
        const bool branch_taken_0x31a828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31A82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A828u;
            // 0x31a82c: 0x1021021  addu        $v0, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a828) {
            ctx->pc = 0x31A844u;
            goto label_31a844;
        }
    }
    ctx->pc = 0x31A830u;
label_31a830:
    // 0x31a830: 0x24e70394  addiu       $a3, $a3, 0x394
    ctx->pc = 0x31a830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 916));
    // 0x31a834: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x31a834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_31a838:
    // 0x31a838: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x31a838u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x31a83c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x31A83Cu;
    {
        const bool branch_taken_0x31a83c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31A840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x31A83Cu;
            // 0x31a840: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31a83c) {
            ctx->pc = 0x31A810u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31a810;
        }
    }
    ctx->pc = 0x31A844u;
label_31a844:
    // 0x31a844: 0x3e00008  jr          $ra
    ctx->pc = 0x31A844u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x31A84Cu;
}
