#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsPRDelay__FP12_SEN_CMR_SEQP12CSceneCmrSeq
// Address: 0x257170 - 0x2571a4
void scsPRDelay__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x257170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsPRDelay__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x257170");
#endif

    ctx->pc = 0x257170u;

    // 0x257170: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x257170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x257174: 0x8ca30038  lw          $v1, 0x38($a1)
    ctx->pc = 0x257174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 56)));
    // 0x257178: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x257178u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25717c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25717Cu;
    {
        const bool branch_taken_0x25717c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25717c) {
            ctx->pc = 0x257190u;
            goto label_257190;
        }
    }
    ctx->pc = 0x257184u;
    // 0x257184: 0xaca00038  sw          $zero, 0x38($a1)
    ctx->pc = 0x257184u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 0));
    // 0x257188: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x257188u;
    {
        const bool branch_taken_0x257188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25718Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257188u;
            // 0x25718c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257188) {
            ctx->pc = 0x25719Cu;
            goto label_25719c;
        }
    }
    ctx->pc = 0x257190u;
label_257190:
    // 0x257190: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x257190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x257194: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x257194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257198: 0xaca30038  sw          $v1, 0x38($a1)
    ctx->pc = 0x257198u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 56), GPR_U32(ctx, 3));
label_25719c:
    // 0x25719c: 0x3e00008  jr          $ra
    ctx->pc = 0x25719Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2571A4u;
}
