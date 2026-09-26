#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsQuakeDelay__FP12_SEN_CMR_SEQP12CSceneCmrSeq
// Address: 0x258c20 - 0x258c54
void scsQuakeDelay__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x258c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsQuakeDelay__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x258c20");
#endif

    ctx->pc = 0x258c20u;

    // 0x258c20: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x258c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x258c24: 0x8ca30044  lw          $v1, 0x44($a1)
    ctx->pc = 0x258c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 68)));
    // 0x258c28: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x258c28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x258c2c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x258C2Cu;
    {
        const bool branch_taken_0x258c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x258c2c) {
            ctx->pc = 0x258C40u;
            goto label_258c40;
        }
    }
    ctx->pc = 0x258C34u;
    // 0x258c34: 0xaca00044  sw          $zero, 0x44($a1)
    ctx->pc = 0x258c34u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 0));
    // 0x258c38: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x258C38u;
    {
        const bool branch_taken_0x258c38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258C3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258C38u;
            // 0x258c3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258c38) {
            ctx->pc = 0x258C4Cu;
            goto label_258c4c;
        }
    }
    ctx->pc = 0x258C40u;
label_258c40:
    // 0x258c40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x258c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x258c44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x258c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x258c48: 0xaca30044  sw          $v1, 0x44($a1)
    ctx->pc = 0x258c48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 68), GPR_U32(ctx, 3));
label_258c4c:
    // 0x258c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x258C4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x258C54u;
}
