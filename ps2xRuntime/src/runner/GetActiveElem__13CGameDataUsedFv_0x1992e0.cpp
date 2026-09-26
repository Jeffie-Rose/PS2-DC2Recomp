#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetActiveElem__13CGameDataUsedFv
// Address: 0x1992e0 - 0x199338
void GetActiveElem__13CGameDataUsedFv_0x1992e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetActiveElem__13CGameDataUsedFv_0x1992e0");
#endif

    switch (ctx->pc) {
        case 0x1992fcu: goto label_1992fc;
        default: break;
    }

    ctx->pc = 0x1992e0u;

    // 0x1992e0: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x1992e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1992e4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1992e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1992e8: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1992E8u;
    {
        const bool branch_taken_0x1992e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1992ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1992E8u;
            // 0x1992ec: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1992e8) {
            ctx->pc = 0x199330u;
            goto label_199330;
        }
    }
    ctx->pc = 0x1992F0u;
    // 0x1992f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1992f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1992f4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1992f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1992f8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1992f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1992fc:
    // 0x1992fc: 0x22840  sll         $a1, $v0, 1
    ctx->pc = 0x1992fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x199300: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x199300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x199304: 0x852821  addu        $a1, $a0, $a1
    ctx->pc = 0x199304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x199308: 0x84630026  lh          $v1, 0x26($v1)
    ctx->pc = 0x199308u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 38)));
    // 0x19930c: 0x84a50026  lh          $a1, 0x26($a1)
    ctx->pc = 0x19930cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 38)));
    // 0x199310: 0xa3082a  slt         $at, $a1, $v1
    ctx->pc = 0x199310u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x199314: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x199314u;
    {
        const bool branch_taken_0x199314 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x199314) {
            ctx->pc = 0x199320u;
            goto label_199320;
        }
    }
    ctx->pc = 0x19931Cu;
    // 0x19931c: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x19931cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_199320:
    // 0x199320: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x199320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x199324: 0x28c30004  slti        $v1, $a2, 0x4
    ctx->pc = 0x199324u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x199328: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x199328u;
    {
        const bool branch_taken_0x199328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x19932Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x199328u;
            // 0x19932c: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x199328) {
            ctx->pc = 0x1992FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1992fc;
        }
    }
    ctx->pc = 0x199330u;
label_199330:
    // 0x199330: 0x3e00008  jr          $ra
    ctx->pc = 0x199330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x199338u;
}
