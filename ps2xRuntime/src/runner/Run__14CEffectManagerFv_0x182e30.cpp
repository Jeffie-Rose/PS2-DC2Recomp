#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Run__14CEffectManagerFv
// Address: 0x182e30 - 0x182e68
void Run__14CEffectManagerFv_0x182e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Run__14CEffectManagerFv_0x182e30");
#endif

    ctx->pc = 0x182e30u;

    // 0x182e30: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x182e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x182e34: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x182E34u;
    {
        const bool branch_taken_0x182e34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x182e34) {
            ctx->pc = 0x182E60u;
            goto label_182e60;
        }
    }
    ctx->pc = 0x182E3Cu;
    // 0x182e3c: 0x8c830020  lw          $v1, 0x20($a0)
    ctx->pc = 0x182e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x182e40: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x182E40u;
    {
        const bool branch_taken_0x182e40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x182E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x182E40u;
            // 0x182e44: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x182e40) {
            ctx->pc = 0x182E54u;
            goto label_182e54;
        }
    }
    ctx->pc = 0x182E48u;
    // 0x182e48: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x182E48u;
    {
        const bool branch_taken_0x182e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182e48) {
            ctx->pc = 0x182E60u;
            goto label_182e60;
        }
    }
    ctx->pc = 0x182E50u;
    // 0x182e50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x182e50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_182e54:
    // 0x182e54: 0xac830038  sw          $v1, 0x38($a0)
    ctx->pc = 0x182e54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 3));
    // 0x182e58: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x182e58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x182e5c: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x182e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
label_182e60:
    // 0x182e60: 0x3e00008  jr          $ra
    ctx->pc = 0x182E60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x182E68u;
}
