#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckRunStarDust__FP9CStarDusti
// Address: 0x22ed80 - 0x22eddc
void CheckRunStarDust__FP9CStarDusti_0x22ed80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckRunStarDust__FP9CStarDusti_0x22ed80");
#endif

    switch (ctx->pc) {
        case 0x22eda4u: goto label_22eda4;
        default: break;
    }

    ctx->pc = 0x22ed80u;

    // 0x22ed80: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22ED80u;
    {
        const bool branch_taken_0x22ed80 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ED84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22ED80u;
            // 0x22ed84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ed80) {
            ctx->pc = 0x22ED90u;
            goto label_22ed90;
        }
    }
    ctx->pc = 0x22ED88u;
    // 0x22ed88: 0x1ca00003  bgtz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x22ED88u;
    {
        const bool branch_taken_0x22ed88 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x22ED8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22ED88u;
            // 0x22ed8c: 0x5082a  slt         $at, $zero, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ed88) {
            ctx->pc = 0x22ED98u;
            goto label_22ed98;
        }
    }
    ctx->pc = 0x22ED90u;
label_22ed90:
    // 0x22ed90: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x22ED90u;
    {
        const bool branch_taken_0x22ed90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ed90) {
            ctx->pc = 0x22EDD4u;
            goto label_22edd4;
        }
    }
    ctx->pc = 0x22ED98u;
label_22ed98:
    // 0x22ed98: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
    ctx->pc = 0x22ED98u;
    {
        const bool branch_taken_0x22ed98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x22ED9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22ED98u;
            // 0x22ed9c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ed98) {
            ctx->pc = 0x22EDCCu;
            goto label_22edcc;
        }
    }
    ctx->pc = 0x22EDA0u;
    // 0x22eda0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22eda0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22eda4:
    // 0x22eda4: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x22eda4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x22eda8: 0x90420012  lbu         $v0, 0x12($v0)
    ctx->pc = 0x22eda8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 18)));
    // 0x22edac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22EDACu;
    {
        const bool branch_taken_0x22edac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22EDB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EDACu;
            // 0x22edb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22edac) {
            ctx->pc = 0x22EDBCu;
            goto label_22edbc;
        }
    }
    ctx->pc = 0x22EDB4u;
    // 0x22edb4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x22EDB4u;
    {
        const bool branch_taken_0x22edb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22edb4) {
            ctx->pc = 0x22EDD4u;
            goto label_22edd4;
        }
    }
    ctx->pc = 0x22EDBCu;
label_22edbc:
    // 0x22edbc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22edbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22edc0: 0x65102a  slt         $v0, $v1, $a1
    ctx->pc = 0x22edc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x22edc4: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x22EDC4u;
    {
        const bool branch_taken_0x22edc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22EDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22EDC4u;
            // 0x22edc8: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22edc4) {
            ctx->pc = 0x22EDA4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22eda4;
        }
    }
    ctx->pc = 0x22EDCCu;
label_22edcc:
    // 0x22edcc: 0x0  nop
    ctx->pc = 0x22edccu;
    // NOP
    // 0x22edd0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22edd0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22edd4:
    // 0x22edd4: 0x3e00008  jr          $ra
    ctx->pc = 0x22EDD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x22EDDCu;
}
