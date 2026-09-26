#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsFadeDelay__FP12_SEN_CMR_SEQP12CSceneCmrSeq
// Address: 0x258ad0 - 0x258b04
void scsFadeDelay__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x258ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsFadeDelay__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x258ad0");
#endif

    ctx->pc = 0x258ad0u;

    // 0x258ad0: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x258ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x258ad4: 0x8ca30040  lw          $v1, 0x40($a1)
    ctx->pc = 0x258ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x258ad8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x258ad8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x258adc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x258ADCu;
    {
        const bool branch_taken_0x258adc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x258adc) {
            ctx->pc = 0x258AF0u;
            goto label_258af0;
        }
    }
    ctx->pc = 0x258AE4u;
    // 0x258ae4: 0xaca00040  sw          $zero, 0x40($a1)
    ctx->pc = 0x258ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 0));
    // 0x258ae8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x258AE8u;
    {
        const bool branch_taken_0x258ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258AE8u;
            // 0x258aec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ae8) {
            ctx->pc = 0x258AFCu;
            goto label_258afc;
        }
    }
    ctx->pc = 0x258AF0u;
label_258af0:
    // 0x258af0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x258af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x258af4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x258af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x258af8: 0xaca30040  sw          $v1, 0x40($a1)
    ctx->pc = 0x258af8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 64), GPR_U32(ctx, 3));
label_258afc:
    // 0x258afc: 0x3e00008  jr          $ra
    ctx->pc = 0x258AFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x258B04u;
}
