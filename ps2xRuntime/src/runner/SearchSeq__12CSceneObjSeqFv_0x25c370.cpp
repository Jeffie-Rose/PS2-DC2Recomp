#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SearchSeq__12CSceneObjSeqFv
// Address: 0x25c370 - 0x25c3b8
void SearchSeq__12CSceneObjSeqFv_0x25c370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SearchSeq__12CSceneObjSeqFv_0x25c370");
#endif

    switch (ctx->pc) {
        case 0x25c380u: goto label_25c380;
        default: break;
    }

    ctx->pc = 0x25c370u;

    // 0x25c370: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x25c370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x25c374: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x25c374u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x25c378: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25C378u;
    {
        const bool branch_taken_0x25c378 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C378u;
            // 0x25c37c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c378) {
            ctx->pc = 0x25C39Cu;
            goto label_25c39c;
        }
    }
    ctx->pc = 0x25C380u;
label_25c380:
    // 0x25c380: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x25c380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x25c384: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x25C384u;
    {
        const bool branch_taken_0x25c384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c384) {
            ctx->pc = 0x25C394u;
            goto label_25c394;
        }
    }
    ctx->pc = 0x25C38Cu;
    // 0x25c38c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x25C38Cu;
    {
        const bool branch_taken_0x25c38c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25C390u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25C38Cu;
            // 0x25c390: 0xac40004c  sw          $zero, 0x4C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25c38c) {
            ctx->pc = 0x25C3B0u;
            goto label_25c3b0;
        }
    }
    ctx->pc = 0x25C394u;
label_25c394:
    // 0x25c394: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x25c394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x25c398: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x25c398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
label_25c39c:
    // 0x25c39c: 0x0  nop
    ctx->pc = 0x25c39cu;
    // NOP
    // 0x25c3a0: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x25c3a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x25c3a4: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x25C3A4u;
    {
        const bool branch_taken_0x25c3a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x25c3a4) {
            ctx->pc = 0x25C380u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25c380;
        }
    }
    ctx->pc = 0x25C3ACu;
    // 0x25c3ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25c3acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25c3b0:
    // 0x25c3b0: 0x3e00008  jr          $ra
    ctx->pc = 0x25C3B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25C3B8u;
}
