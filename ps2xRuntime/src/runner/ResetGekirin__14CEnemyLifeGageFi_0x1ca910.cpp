#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ResetGekirin__14CEnemyLifeGageFi
// Address: 0x1ca910 - 0x1ca958
void ResetGekirin__14CEnemyLifeGageFi_0x1ca910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ResetGekirin__14CEnemyLifeGageFi_0x1ca910");
#endif

    switch (ctx->pc) {
        case 0x1ca91cu: goto label_1ca91c;
        default: break;
    }

    ctx->pc = 0x1ca910u;

    // 0x1ca910: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ca910u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca914: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1ca914u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ca918: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1ca918u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ca91c:
    // 0x1ca91c: 0x881821  addu        $v1, $a0, $t0
    ctx->pc = 0x1ca91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x1ca920: 0xe5082a  slt         $at, $a3, $a1
    ctx->pc = 0x1ca920u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1ca924: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA924u;
    {
        const bool branch_taken_0x1ca924 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA924u;
            // 0x1ca928: 0xa0600025  sb          $zero, 0x25($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 37), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca924) {
            ctx->pc = 0x1CA934u;
            goto label_1ca934;
        }
    }
    ctx->pc = 0x1CA92Cu;
    // 0x1ca92c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1CA92Cu;
    {
        const bool branch_taken_0x1ca92c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CA930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA92Cu;
            // 0x1ca930: 0xa0600024  sb          $zero, 0x24($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 36), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca92c) {
            ctx->pc = 0x1CA93Cu;
            goto label_1ca93c;
        }
    }
    ctx->pc = 0x1CA934u;
label_1ca934:
    // 0x1ca934: 0x0  nop
    ctx->pc = 0x1ca934u;
    // NOP
    // 0x1ca938: 0xa0660024  sb          $a2, 0x24($v1)
    ctx->pc = 0x1ca938u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 36), (uint8_t)GPR_U32(ctx, 6));
label_1ca93c:
    // 0x1ca93c: 0x0  nop
    ctx->pc = 0x1ca93cu;
    // NOP
    // 0x1ca940: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1ca940u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x1ca944: 0x28e30010  slti        $v1, $a3, 0x10
    ctx->pc = 0x1ca944u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1ca948: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1CA948u;
    {
        const bool branch_taken_0x1ca948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA948u;
            // 0x1ca94c: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca948) {
            ctx->pc = 0x1CA91Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ca91c;
        }
    }
    ctx->pc = 0x1CA950u;
    // 0x1ca950: 0x3e00008  jr          $ra
    ctx->pc = 0x1CA950u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA958u;
}
