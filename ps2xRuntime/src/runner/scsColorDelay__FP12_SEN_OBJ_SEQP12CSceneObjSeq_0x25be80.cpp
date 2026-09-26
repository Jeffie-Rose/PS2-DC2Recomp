#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsColorDelay__FP12_SEN_OBJ_SEQP12CSceneObjSeq
// Address: 0x25be80 - 0x25beb4
void scsColorDelay__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25be80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsColorDelay__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25be80");
#endif

    ctx->pc = 0x25be80u;

    // 0x25be80: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x25be80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x25be84: 0x8ca30050  lw          $v1, 0x50($a1)
    ctx->pc = 0x25be84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
    // 0x25be88: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x25be88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25be8c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25BE8Cu;
    {
        const bool branch_taken_0x25be8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25be8c) {
            ctx->pc = 0x25BEA0u;
            goto label_25bea0;
        }
    }
    ctx->pc = 0x25BE94u;
    // 0x25be94: 0xaca00050  sw          $zero, 0x50($a1)
    ctx->pc = 0x25be94u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 0));
    // 0x25be98: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25BE98u;
    {
        const bool branch_taken_0x25be98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BE98u;
            // 0x25be9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25be98) {
            ctx->pc = 0x25BEACu;
            goto label_25beac;
        }
    }
    ctx->pc = 0x25BEA0u;
label_25bea0:
    // 0x25bea0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x25bea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x25bea4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25bea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25bea8: 0xaca30050  sw          $v1, 0x50($a1)
    ctx->pc = 0x25bea8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 3));
label_25beac:
    // 0x25beac: 0x3e00008  jr          $ra
    ctx->pc = 0x25BEACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25BEB4u;
}
