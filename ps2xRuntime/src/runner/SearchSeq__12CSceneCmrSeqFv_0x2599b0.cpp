#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchSeq__12CSceneCmrSeqFv
// Address: 0x2599b0 - 0x2599f8
void SearchSeq__12CSceneCmrSeqFv_0x2599b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchSeq__12CSceneCmrSeqFv_0x2599b0");
#endif

    switch (ctx->pc) {
        case 0x2599c0u: goto label_2599c0;
        default: break;
    }

    ctx->pc = 0x2599b0u;

    // 0x2599b0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2599b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2599b4: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x2599b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2599b8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2599B8u;
    {
        const bool branch_taken_0x2599b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2599BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2599B8u;
            // 0x2599bc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2599b8) {
            ctx->pc = 0x2599DCu;
            goto label_2599dc;
        }
    }
    ctx->pc = 0x2599C0u;
label_2599c0:
    // 0x2599c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2599c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2599c4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2599C4u;
    {
        const bool branch_taken_0x2599c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2599c4) {
            ctx->pc = 0x2599D4u;
            goto label_2599d4;
        }
    }
    ctx->pc = 0x2599CCu;
    // 0x2599cc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2599CCu;
    {
        const bool branch_taken_0x2599cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2599D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2599CCu;
            // 0x2599d0: 0xac40005c  sw          $zero, 0x5C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2599cc) {
            ctx->pc = 0x2599F0u;
            goto label_2599f0;
        }
    }
    ctx->pc = 0x2599D4u;
label_2599d4:
    // 0x2599d4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2599d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2599d8: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x2599d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
label_2599dc:
    // 0x2599dc: 0x0  nop
    ctx->pc = 0x2599dcu;
    // NOP
    // 0x2599e0: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x2599e0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2599e4: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x2599E4u;
    {
        const bool branch_taken_0x2599e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2599e4) {
            ctx->pc = 0x2599C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2599c0;
        }
    }
    ctx->pc = 0x2599ECu;
    // 0x2599ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2599ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2599f0:
    // 0x2599f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2599F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2599F8u;
}
