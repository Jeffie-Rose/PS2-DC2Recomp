#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Stop__14CEffectManagerFv
// Address: 0x182e70 - 0x182ec8
void Stop__14CEffectManagerFv_0x182e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Stop__14CEffectManagerFv_0x182e70");
#endif

    switch (ctx->pc) {
        case 0x182e90u: goto label_182e90;
        default: break;
    }

    ctx->pc = 0x182e70u;

    // 0x182e70: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x182e70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x182e74: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x182e74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x182e78: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x182e78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x182e7c: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x182e7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x182e80: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x182E80u;
    {
        const bool branch_taken_0x182e80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x182E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182E80u;
            // 0x182e84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182e80) {
            ctx->pc = 0x182EC0u;
            goto label_182ec0;
        }
    }
    ctx->pc = 0x182E88u;
    // 0x182e88: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x182E88u;
    {
        const bool branch_taken_0x182e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x182E8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182E88u;
            // 0x182e8c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182e88) {
            ctx->pc = 0x182EB0u;
            goto label_182eb0;
        }
    }
    ctx->pc = 0x182E90u;
label_182e90:
    // 0x182e90: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x182e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x182e94: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x182e94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x182e98: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x182e98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
    // 0x182e9c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x182E9Cu;
    {
        const bool branch_taken_0x182e9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x182e9c) {
            ctx->pc = 0x182EA8u;
            goto label_182ea8;
        }
    }
    ctx->pc = 0x182EA4u;
    // 0x182ea4: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x182ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
label_182ea8:
    // 0x182ea8: 0x24c60310  addiu       $a2, $a2, 0x310
    ctx->pc = 0x182ea8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 784));
    // 0x182eac: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x182eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_182eb0:
    // 0x182eb0: 0x8c83002c  lw          $v1, 0x2C($a0)
    ctx->pc = 0x182eb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
    // 0x182eb4: 0xa3182a  slt         $v1, $a1, $v1
    ctx->pc = 0x182eb4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x182eb8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x182EB8u;
    {
        const bool branch_taken_0x182eb8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x182eb8) {
            ctx->pc = 0x182E90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_182e90;
        }
    }
    ctx->pc = 0x182EC0u;
label_182ec0:
    // 0x182ec0: 0x3e00008  jr          $ra
    ctx->pc = 0x182EC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182EC8u;
}
