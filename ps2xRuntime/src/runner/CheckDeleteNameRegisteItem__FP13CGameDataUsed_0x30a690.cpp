#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckDeleteNameRegisteItem__FP13CGameDataUsed
// Address: 0x30a690 - 0x30a6c8
void CheckDeleteNameRegisteItem__FP13CGameDataUsed_0x30a690(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckDeleteNameRegisteItem__FP13CGameDataUsed_0x30a690");
#endif

    ctx->pc = 0x30a690u;

    // 0x30a690: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x30A690u;
    {
        const bool branch_taken_0x30a690 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x30A694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A690u;
            // 0x30a694: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a690) {
            ctx->pc = 0x30A6A0u;
            goto label_30a6a0;
        }
    }
    ctx->pc = 0x30A698u;
    // 0x30a698: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x30A698u;
    {
        const bool branch_taken_0x30a698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30a698) {
            ctx->pc = 0x30A6C0u;
            goto label_30a6c0;
        }
    }
    ctx->pc = 0x30A6A0u;
label_30a6a0:
    // 0x30a6a0: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x30a6a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x30a6a4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x30a6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x30a6a8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x30A6A8u;
    {
        const bool branch_taken_0x30a6a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x30A6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A6A8u;
            // 0x30a6ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a6a8) {
            ctx->pc = 0x30A6C0u;
            goto label_30a6c0;
        }
    }
    ctx->pc = 0x30A6B0u;
    // 0x30a6b0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x30a6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x30a6b4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x30A6B4u;
    {
        const bool branch_taken_0x30a6b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x30A6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30A6B4u;
            // 0x30a6b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30a6b4) {
            ctx->pc = 0x30A6C0u;
            goto label_30a6c0;
        }
    }
    ctx->pc = 0x30A6BCu;
    // 0x30a6bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x30a6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30a6c0:
    // 0x30a6c0: 0x3e00008  jr          $ra
    ctx->pc = 0x30A6C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30A6C8u;
}
