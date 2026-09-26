#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsMotionDelay__FP12_SEN_OBJ_SEQP12CSceneObjSeq
// Address: 0x25ba90 - 0x25bac4
void scsMotionDelay__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25ba90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsMotionDelay__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25ba90");
#endif

    ctx->pc = 0x25ba90u;

    // 0x25ba90: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x25ba90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x25ba94: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x25ba94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x25ba98: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x25ba98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25ba9c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25BA9Cu;
    {
        const bool branch_taken_0x25ba9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25ba9c) {
            ctx->pc = 0x25BAB0u;
            goto label_25bab0;
        }
    }
    ctx->pc = 0x25BAA4u;
    // 0x25baa4: 0xaca00048  sw          $zero, 0x48($a1)
    ctx->pc = 0x25baa4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 0));
    // 0x25baa8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25BAA8u;
    {
        const bool branch_taken_0x25baa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25BAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25BAA8u;
            // 0x25baac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25baa8) {
            ctx->pc = 0x25BABCu;
            goto label_25babc;
        }
    }
    ctx->pc = 0x25BAB0u;
label_25bab0:
    // 0x25bab0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x25bab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x25bab4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25bab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25bab8: 0xaca30048  sw          $v1, 0x48($a1)
    ctx->pc = 0x25bab8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 3));
label_25babc:
    // 0x25babc: 0x3e00008  jr          $ra
    ctx->pc = 0x25BABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25BAC4u;
}
