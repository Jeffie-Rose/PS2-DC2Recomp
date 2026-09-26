#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetVibration__8CGamePadFiii
// Address: 0x14b530 - 0x14b588
void SetVibration__8CGamePadFiii_0x14b530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetVibration__8CGamePadFiii_0x14b530");
#endif

    ctx->pc = 0x14b530u;

    // 0x14b530: 0xac80046c  sw          $zero, 0x46C($a0)
    ctx->pc = 0x14b530u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 1132), GPR_U32(ctx, 0));
    // 0x14b534: 0x8c830468  lw          $v1, 0x468($a0)
    ctx->pc = 0x14b534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1128)));
    // 0x14b538: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x14B538u;
    {
        const bool branch_taken_0x14b538 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b538) {
            ctx->pc = 0x14B580u;
            goto label_14b580;
        }
    }
    ctx->pc = 0x14B540u;
    // 0x14b540: 0x4a0000f  bltz        $a1, . + 4 + (0xF << 2)
    ctx->pc = 0x14B540u;
    {
        const bool branch_taken_0x14b540 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x14b540) {
            ctx->pc = 0x14B580u;
            goto label_14b580;
        }
    }
    ctx->pc = 0x14B548u;
    // 0x14b548: 0x28a10002  slti        $at, $a1, 0x2
    ctx->pc = 0x14b548u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x14b54c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x14B54Cu;
    {
        const bool branch_taken_0x14b54c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b54c) {
            ctx->pc = 0x14B580u;
            goto label_14b580;
        }
    }
    ctx->pc = 0x14B554u;
    // 0x14b554: 0x4e10004  bgez        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x14B554u;
    {
        const bool branch_taken_0x14b554 = (GPR_S32(ctx, 7) >= 0);
        ctx->pc = 0x14B558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B554u;
            // 0x14b558: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b554) {
            ctx->pc = 0x14B568u;
            goto label_14b568;
        }
    }
    ctx->pc = 0x14B55Cu;
    // 0x14b55c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14B55Cu;
    {
        const bool branch_taken_0x14b55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14b55c) {
            ctx->pc = 0x14B580u;
            goto label_14b580;
        }
    }
    ctx->pc = 0x14B564u;
    // 0x14b564: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x14b564u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_14b568:
    // 0x14b568: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x14b568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x14b56c: 0x14a00002  bnez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x14B56Cu;
    {
        const bool branch_taken_0x14b56c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x14B570u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14B56Cu;
            // 0x14b570: 0xac670038  sw          $a3, 0x38($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14b56c) {
            ctx->pc = 0x14B578u;
            goto label_14b578;
        }
    }
    ctx->pc = 0x14B574u;
    // 0x14b574: 0x6302b  sltu        $a2, $zero, $a2
    ctx->pc = 0x14b574u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_14b578:
    // 0x14b578: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x14b578u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x14b57c: 0xa066002c  sb          $a2, 0x2C($v1)
    ctx->pc = 0x14b57cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 44), (uint8_t)GPR_U32(ctx, 6));
label_14b580:
    // 0x14b580: 0x3e00008  jr          $ra
    ctx->pc = 0x14B580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x14B588u;
}
