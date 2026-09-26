#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetGiftBoxItem__13CGameDataUsedFii
// Address: 0x1998b0 - 0x199918
void SetGiftBoxItem__13CGameDataUsedFii_0x1998b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetGiftBoxItem__13CGameDataUsedFii_0x1998b0");
#endif

    switch (ctx->pc) {
        case 0x1998d0u: goto label_1998d0;
        default: break;
    }

    ctx->pc = 0x1998b0u;

    // 0x1998b0: 0x84870000  lh          $a3, 0x0($a0)
    ctx->pc = 0x1998b0u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1998b4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1998b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1998b8: 0x14e30015  bne         $a3, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1998B8u;
    {
        const bool branch_taken_0x1998b8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 3));
        ctx->pc = 0x1998BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1998B8u;
            // 0x1998bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1998b8) {
            ctx->pc = 0x199910u;
            goto label_199910;
        }
    }
    ctx->pc = 0x1998C0u;
    // 0x1998c0: 0x4c10011  bgez        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1998C0u;
    {
        const bool branch_taken_0x1998c0 = (GPR_S32(ctx, 6) >= 0);
        ctx->pc = 0x1998C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1998C0u;
            // 0x1998c4: 0x61840  sll         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1998c0) {
            ctx->pc = 0x199908u;
            goto label_199908;
        }
    }
    ctx->pc = 0x1998C8u;
    // 0x1998c8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1998c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1998cc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1998ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1998d0:
    // 0x1998d0: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x1998d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1998d4: 0x84630010  lh          $v1, 0x10($v1)
    ctx->pc = 0x1998d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1998d8: 0x1c600005  bgtz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1998D8u;
    {
        const bool branch_taken_0x1998d8 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1998DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1998D8u;
            // 0x1998dc: 0x61840  sll         $v1, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1998d8) {
            ctx->pc = 0x1998F0u;
            goto label_1998f0;
        }
    }
    ctx->pc = 0x1998E0u;
    // 0x1998e0: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x1998e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1998e4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1998e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1998e8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1998E8u;
    {
        const bool branch_taken_0x1998e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1998ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1998E8u;
            // 0x1998ec: 0xa4650010  sh          $a1, 0x10($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1998e8) {
            ctx->pc = 0x199910u;
            goto label_199910;
        }
    }
    ctx->pc = 0x1998F0u;
label_1998f0:
    // 0x1998f0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1998f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1998f4: 0x28c30003  slti        $v1, $a2, 0x3
    ctx->pc = 0x1998f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x1998f8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1998F8u;
    {
        const bool branch_taken_0x1998f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1998FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1998F8u;
            // 0x1998fc: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1998f8) {
            ctx->pc = 0x1998D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1998d0;
        }
    }
    ctx->pc = 0x199900u;
    // 0x199900: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x199900u;
    {
        const bool branch_taken_0x199900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x199900) {
            ctx->pc = 0x199910u;
            goto label_199910;
        }
    }
    ctx->pc = 0x199908u;
label_199908:
    // 0x199908: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x199908u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x19990c: 0xa4650010  sh          $a1, 0x10($v1)
    ctx->pc = 0x19990cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 5));
label_199910:
    // 0x199910: 0x3e00008  jr          $ra
    ctx->pc = 0x199910u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x199918u;
}
