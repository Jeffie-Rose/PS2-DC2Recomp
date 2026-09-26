#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsPosDelay__FP12_SEN_OBJ_SEQP12CSceneObjSeq
// Address: 0x25a800 - 0x25a834
void scsPosDelay__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25a800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsPosDelay__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25a800");
#endif

    ctx->pc = 0x25a800u;

    // 0x25a800: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x25a800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x25a804: 0x8ca30040  lw          $v1, 0x40($a1)
    ctx->pc = 0x25a804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x25a808: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x25a808u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25a80c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25A80Cu;
    {
        const bool branch_taken_0x25a80c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25a80c) {
            ctx->pc = 0x25A820u;
            goto label_25a820;
        }
    }
    ctx->pc = 0x25A814u;
    // 0x25a814: 0xaca00040  sw          $zero, 0x40($a1)
    ctx->pc = 0x25a814u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 0));
    // 0x25a818: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25A818u;
    {
        const bool branch_taken_0x25a818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A818u;
            // 0x25a81c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a818) {
            ctx->pc = 0x25A82Cu;
            goto label_25a82c;
        }
    }
    ctx->pc = 0x25A820u;
label_25a820:
    // 0x25a820: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x25a820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x25a824: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25a824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25a828: 0xaca30040  sw          $v1, 0x40($a1)
    ctx->pc = 0x25a828u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 3));
label_25a82c:
    // 0x25a82c: 0x3e00008  jr          $ra
    ctx->pc = 0x25A82Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25A834u;
}
