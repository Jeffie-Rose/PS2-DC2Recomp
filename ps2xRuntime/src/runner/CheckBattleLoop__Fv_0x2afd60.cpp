#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckBattleLoop__Fv
// Address: 0x2afd60 - 0x2afdac
void CheckBattleLoop__Fv_0x2afd60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckBattleLoop__Fv_0x2afd60");
#endif

    ctx->pc = 0x2afd60u;

    // 0x2afd60: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2afd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2afd64: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AFD64u;
    {
        const bool branch_taken_0x2afd64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2afd64) {
            ctx->pc = 0x2AFD74u;
            goto label_2afd74;
        }
    }
    ctx->pc = 0x2AFD6Cu;
    // 0x2afd6c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2AFD6Cu;
    {
        const bool branch_taken_0x2afd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AFD70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFD6Cu;
            // 0x2afd70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afd6c) {
            ctx->pc = 0x2AFDA4u;
            goto label_2afda4;
        }
    }
    ctx->pc = 0x2AFD74u;
label_2afd74:
    // 0x2afd74: 0x84430050  lh          $v1, 0x50($v0)
    ctx->pc = 0x2afd74u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x2afd78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2afd78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2afd7c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2AFD7Cu;
    {
        const bool branch_taken_0x2afd7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AFD80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFD7Cu;
            // 0x2afd80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afd7c) {
            ctx->pc = 0x2AFDA4u;
            goto label_2afda4;
        }
    }
    ctx->pc = 0x2AFD84u;
    // 0x2afd84: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x2afd84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x2afd88: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2AFD88u;
    {
        const bool branch_taken_0x2afd88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AFD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFD88u;
            // 0x2afd8c: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afd88) {
            ctx->pc = 0x2AFDA0u;
            goto label_2afda0;
        }
    }
    ctx->pc = 0x2AFD90u;
    // 0x2afd90: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AFD90u;
    {
        const bool branch_taken_0x2afd90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2AFD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFD90u;
            // 0x2afd94: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afd90) {
            ctx->pc = 0x2AFDA0u;
            goto label_2afda0;
        }
    }
    ctx->pc = 0x2AFD98u;
    // 0x2afd98: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2AFD98u;
    {
        const bool branch_taken_0x2afd98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2AFD9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AFD98u;
            // 0x2afd9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2afd98) {
            ctx->pc = 0x2AFDA4u;
            goto label_2afda4;
        }
    }
    ctx->pc = 0x2AFDA0u;
label_2afda0:
    // 0x2afda0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2afda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2afda4:
    // 0x2afda4: 0x3e00008  jr          $ra
    ctx->pc = 0x2AFDA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AFDACu;
}
