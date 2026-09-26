#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsScaleDelay__FP12_SEN_OBJ_SEQP12CSceneObjSeq
// Address: 0x25bfb0 - 0x25bfe4
void scsScaleDelay__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25bfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsScaleDelay__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25bfb0");
#endif

    ctx->pc = 0x25bfb0u;

    // 0x25bfb0: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x25bfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x25bfb4: 0x8ca30054  lw          $v1, 0x54($a1)
    ctx->pc = 0x25bfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 84)));
    // 0x25bfb8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x25bfb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25bfbc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25BFBCu;
    {
        const bool branch_taken_0x25bfbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25bfbc) {
            ctx->pc = 0x25BFD0u;
            goto label_25bfd0;
        }
    }
    ctx->pc = 0x25BFC4u;
    // 0x25bfc4: 0xaca00054  sw          $zero, 0x54($a1)
    ctx->pc = 0x25bfc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 0));
    // 0x25bfc8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25BFC8u;
    {
        const bool branch_taken_0x25bfc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BFC8u;
            // 0x25bfcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25bfc8) {
            ctx->pc = 0x25BFDCu;
            goto label_25bfdc;
        }
    }
    ctx->pc = 0x25BFD0u;
label_25bfd0:
    // 0x25bfd0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x25bfd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x25bfd4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25bfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25bfd8: 0xaca30054  sw          $v1, 0x54($a1)
    ctx->pc = 0x25bfd8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 84), GPR_U32(ctx, 3));
label_25bfdc:
    // 0x25bfdc: 0x3e00008  jr          $ra
    ctx->pc = 0x25BFDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25BFE4u;
}
