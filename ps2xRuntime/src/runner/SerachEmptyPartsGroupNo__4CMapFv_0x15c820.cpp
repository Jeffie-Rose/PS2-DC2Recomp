#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SerachEmptyPartsGroupNo__4CMapFv
// Address: 0x15c820 - 0x15c870
void SerachEmptyPartsGroupNo__4CMapFv_0x15c820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SerachEmptyPartsGroupNo__4CMapFv_0x15c820");
#endif

    switch (ctx->pc) {
        case 0x15c830u: goto label_15c830;
        default: break;
    }

    ctx->pc = 0x15c820u;

    // 0x15c820: 0x8c850108  lw          $a1, 0x108($a0)
    ctx->pc = 0x15c820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 264)));
    // 0x15c824: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x15c824u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15c828: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15C828u;
    {
        const bool branch_taken_0x15c828 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15C82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C828u;
            // 0x15c82c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c828) {
            ctx->pc = 0x15C858u;
            goto label_15c858;
        }
    }
    ctx->pc = 0x15C830u;
label_15c830:
    // 0x15c830: 0x8c63010c  lw          $v1, 0x10C($v1)
    ctx->pc = 0x15c830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
    // 0x15c834: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x15c834u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x15c838: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x15c838u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x15c83c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x15c83cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x15c840: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15C840u;
    {
        const bool branch_taken_0x15c840 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c840) {
            ctx->pc = 0x15C850u;
            goto label_15c850;
        }
    }
    ctx->pc = 0x15C848u;
    // 0x15c848: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15C848u;
    {
        const bool branch_taken_0x15c848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c848) {
            ctx->pc = 0x15C868u;
            goto label_15c868;
        }
    }
    ctx->pc = 0x15C850u;
label_15c850:
    // 0x15c850: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x15c850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x15c854: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x15c854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_15c858:
    // 0x15c858: 0x45182a  slt         $v1, $v0, $a1
    ctx->pc = 0x15c858u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x15c85c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x15C85Cu;
    {
        const bool branch_taken_0x15c85c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x15C860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15C85Cu;
            // 0x15c860: 0x861821  addu        $v1, $a0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15c85c) {
            ctx->pc = 0x15C830u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_15c830;
        }
    }
    ctx->pc = 0x15C864u;
    // 0x15c864: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x15c864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_15c868:
    // 0x15c868: 0x3e00008  jr          $ra
    ctx->pc = 0x15C868u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15C870u;
}
