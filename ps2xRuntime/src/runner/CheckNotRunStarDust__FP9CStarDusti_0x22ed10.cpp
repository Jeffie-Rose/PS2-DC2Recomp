#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckNotRunStarDust__FP9CStarDusti
// Address: 0x22ed10 - 0x22ed74
void CheckNotRunStarDust__FP9CStarDusti_0x22ed10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckNotRunStarDust__FP9CStarDusti_0x22ed10");
#endif

    switch (ctx->pc) {
        case 0x22ed34u: goto label_22ed34;
        default: break;
    }

    ctx->pc = 0x22ed10u;

    // 0x22ed10: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22ED10u;
    {
        const bool branch_taken_0x22ed10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ED14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22ED10u;
            // 0x22ed14: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ed10) {
            ctx->pc = 0x22ED20u;
            goto label_22ed20;
        }
    }
    ctx->pc = 0x22ED18u;
    // 0x22ed18: 0x1ca00003  bgtz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22ED18u;
    {
        const bool branch_taken_0x22ed18 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x22ED1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22ED18u;
            // 0x22ed1c: 0x5082a  slt         $at, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ed18) {
            ctx->pc = 0x22ED28u;
            goto label_22ed28;
        }
    }
    ctx->pc = 0x22ED20u;
label_22ed20:
    // 0x22ed20: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x22ED20u;
    {
        const bool branch_taken_0x22ed20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ed20) {
            ctx->pc = 0x22ED6Cu;
            goto label_22ed6c;
        }
    }
    ctx->pc = 0x22ED28u;
label_22ed28:
    // 0x22ed28: 0x1020000e  beqz        $at, . + 4 + (0xE << 2)
    ctx->pc = 0x22ED28u;
    {
        const bool branch_taken_0x22ed28 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ED2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22ED28u;
            // 0x22ed2c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ed28) {
            ctx->pc = 0x22ED64u;
            goto label_22ed64;
        }
    }
    ctx->pc = 0x22ED30u;
    // 0x22ed30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22ed30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22ed34:
    // 0x22ed34: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x22ed34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x22ed38: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x22ed38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x22ed3c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x22ED3Cu;
    {
        const bool branch_taken_0x22ed3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22ED40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22ED3Cu;
            // 0x22ed40: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ed3c) {
            ctx->pc = 0x22ED54u;
            goto label_22ed54;
        }
    }
    ctx->pc = 0x22ED44u;
    // 0x22ed44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x22ed44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x22ed48: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x22ed48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x22ed4c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x22ED4Cu;
    {
        const bool branch_taken_0x22ed4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ED50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22ED4Cu;
            // 0x22ed50: 0x821021  addu        $v0, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ed4c) {
            ctx->pc = 0x22ED6Cu;
            goto label_22ed6c;
        }
    }
    ctx->pc = 0x22ED54u;
label_22ed54:
    // 0x22ed54: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22ed54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22ed58: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x22ed58u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x22ed5c: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x22ED5Cu;
    {
        const bool branch_taken_0x22ed5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22ED60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22ED5Cu;
            // 0x22ed60: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ed5c) {
            ctx->pc = 0x22ED34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22ed34;
        }
    }
    ctx->pc = 0x22ED64u;
label_22ed64:
    // 0x22ed64: 0x0  nop
    ctx->pc = 0x22ed64u;
    // NOP
    // 0x22ed68: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22ed68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22ed6c:
    // 0x22ed6c: 0x3e00008  jr          $ra
    ctx->pc = 0x22ED6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22ED74u;
}
