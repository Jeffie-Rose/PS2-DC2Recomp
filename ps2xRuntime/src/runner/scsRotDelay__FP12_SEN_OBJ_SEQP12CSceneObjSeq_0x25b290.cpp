#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsRotDelay__FP12_SEN_OBJ_SEQP12CSceneObjSeq
// Address: 0x25b290 - 0x25b2c4
void scsRotDelay__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25b290(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsRotDelay__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25b290");
#endif

    ctx->pc = 0x25b290u;

    // 0x25b290: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x25b290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x25b294: 0x8ca30044  lw          $v1, 0x44($a1)
    ctx->pc = 0x25b294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x25b298: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x25b298u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25b29c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25B29Cu;
    {
        const bool branch_taken_0x25b29c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25b29c) {
            ctx->pc = 0x25B2B0u;
            goto label_25b2b0;
        }
    }
    ctx->pc = 0x25B2A4u;
    // 0x25b2a4: 0xaca00044  sw          $zero, 0x44($a1)
    ctx->pc = 0x25b2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 0));
    // 0x25b2a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x25B2A8u;
    {
        const bool branch_taken_0x25b2a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25B2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25B2A8u;
            // 0x25b2ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25b2a8) {
            ctx->pc = 0x25B2BCu;
            goto label_25b2bc;
        }
    }
    ctx->pc = 0x25B2B0u;
label_25b2b0:
    // 0x25b2b0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x25b2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x25b2b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25b2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25b2b8: 0xaca30044  sw          $v1, 0x44($a1)
    ctx->pc = 0x25b2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 3));
label_25b2bc:
    // 0x25b2bc: 0x3e00008  jr          $ra
    ctx->pc = 0x25B2BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25B2C4u;
}
