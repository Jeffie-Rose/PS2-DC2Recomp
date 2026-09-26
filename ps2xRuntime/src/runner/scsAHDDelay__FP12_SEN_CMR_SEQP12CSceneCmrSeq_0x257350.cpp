#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsAHDDelay__FP12_SEN_CMR_SEQP12CSceneCmrSeq
// Address: 0x257350 - 0x257384
void scsAHDDelay__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x257350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsAHDDelay__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x257350");
#endif

    ctx->pc = 0x257350u;

    // 0x257350: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x257350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x257354: 0x8ca3003c  lw          $v1, 0x3C($a1)
    ctx->pc = 0x257354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 60)));
    // 0x257358: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x257358u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25735c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x25735Cu;
    {
        const bool branch_taken_0x25735c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x25735c) {
            ctx->pc = 0x257370u;
            goto label_257370;
        }
    }
    ctx->pc = 0x257364u;
    // 0x257364: 0xaca0003c  sw          $zero, 0x3C($a1)
    ctx->pc = 0x257364u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 0));
    // 0x257368: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x257368u;
    {
        const bool branch_taken_0x257368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25736Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257368u;
            // 0x25736c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x257368) {
            ctx->pc = 0x25737Cu;
            goto label_25737c;
        }
    }
    ctx->pc = 0x257370u;
label_257370:
    // 0x257370: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x257370u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x257374: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x257374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x257378: 0xaca3003c  sw          $v1, 0x3C($a1)
    ctx->pc = 0x257378u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 60), GPR_U32(ctx, 3));
label_25737c:
    // 0x25737c: 0x3e00008  jr          $ra
    ctx->pc = 0x25737Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x257384u;
}
