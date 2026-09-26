#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsCharaDelay__FP12_SEN_CMR_SEQP12CSceneCmrSeq
// Address: 0x258fe0 - 0x259014
void scsCharaDelay__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x258fe0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsCharaDelay__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x258fe0");
#endif

    ctx->pc = 0x258fe0u;

    // 0x258fe0: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x258fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x258fe4: 0x8ca30048  lw          $v1, 0x48($a1)
    ctx->pc = 0x258fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 72)));
    // 0x258fe8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x258fe8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x258fec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x258FECu;
    {
        const bool branch_taken_0x258fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x258fec) {
            ctx->pc = 0x259000u;
            goto label_259000;
        }
    }
    ctx->pc = 0x258FF4u;
    // 0x258ff4: 0xaca00048  sw          $zero, 0x48($a1)
    ctx->pc = 0x258ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 0));
    // 0x258ff8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x258FF8u;
    {
        const bool branch_taken_0x258ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x258FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258FF8u;
            // 0x258ffc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x258ff8) {
            ctx->pc = 0x25900Cu;
            goto label_25900c;
        }
    }
    ctx->pc = 0x259000u;
label_259000:
    // 0x259000: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x259000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x259004: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x259004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x259008: 0xaca30048  sw          $v1, 0x48($a1)
    ctx->pc = 0x259008u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 72), GPR_U32(ctx, 3));
label_25900c:
    // 0x25900c: 0x3e00008  jr          $ra
    ctx->pc = 0x25900Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x259014u;
}
