#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _SPHIDA_RESET_POWGAGE__FP12RS_STACKDATAi
// Address: 0x276050 - 0x276088
void ps2__SPHIDA_RESET_POWGAGE__FP12RS_STACKDATAi_0x276050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__SPHIDA_RESET_POWGAGE__FP12RS_STACKDATAi_0x276050");
#endif

    ctx->pc = 0x276050u;

    // 0x276050: 0x8f849ed4  lw          $a0, -0x612C($gp)
    ctx->pc = 0x276050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942420)));
    // 0x276054: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x276054u;
    {
        const bool branch_taken_0x276054 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x276058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x276054u;
            // 0x276058: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x276054) {
            ctx->pc = 0x276064u;
            goto label_276064;
        }
    }
    ctx->pc = 0x27605Cu;
    // 0x27605c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x27605Cu;
    {
        const bool branch_taken_0x27605c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x276060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27605Cu;
            // 0x276060: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27605c) {
            ctx->pc = 0x276080u;
            goto label_276080;
        }
    }
    ctx->pc = 0x276064u;
label_276064:
    // 0x276064: 0x2403fff6  addiu       $v1, $zero, -0xA
    ctx->pc = 0x276064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967286));
    // 0x276068: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x276068u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
    // 0x27606c: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x27606cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x276070: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x276070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276074: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x276074u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x276078: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x276078u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x27607c: 0xac830014  sw          $v1, 0x14($a0)
    ctx->pc = 0x27607cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 3));
label_276080:
    // 0x276080: 0x3e00008  jr          $ra
    ctx->pc = 0x276080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x276088u;
}
