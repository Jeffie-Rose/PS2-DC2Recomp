#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SetCreateItemFlag__15CInventUserDataFii
// Address: 0x1ff070 - 0x1ff0d4
void SetCreateItemFlag__15CInventUserDataFii_0x1ff070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SetCreateItemFlag__15CInventUserDataFii_0x1ff070");
#endif

    switch (ctx->pc) {
        case 0x1ff0a0u: goto label_1ff0a0;
        default: break;
    }

    ctx->pc = 0x1ff070u;

    // 0x1ff070: 0x5082a  slt         $at, $zero, $a1
    ctx->pc = 0x1ff070u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1ff074: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x1FF074u;
    {
        const bool branch_taken_0x1ff074 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF074u;
            // 0x1ff078: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff074) {
            ctx->pc = 0x1FF098u;
            goto label_1ff098;
        }
    }
    ctx->pc = 0x1FF07Cu;
    // 0x1ff07c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ff07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ff080: 0x246506d8  addiu       $a1, $v1, 0x6D8
    ctx->pc = 0x1ff080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 1752));
    // 0x1ff084: 0x846306d8  lh          $v1, 0x6D8($v1)
    ctx->pc = 0x1ff084u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1752)));
    // 0x1ff088: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1FF088u;
    {
        const bool branch_taken_0x1ff088 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1ff088) {
            ctx->pc = 0x1FF098u;
            goto label_1ff098;
        }
    }
    ctx->pc = 0x1FF090u;
    // 0x1ff090: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1FF090u;
    {
        const bool branch_taken_0x1ff090 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF090u;
            // 0x1ff094: 0xa4a60000  sh          $a2, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff090) {
            ctx->pc = 0x1FF0CCu;
            goto label_1ff0cc;
        }
    }
    ctx->pc = 0x1FF098u;
label_1ff098:
    // 0x1ff098: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ff098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ff09c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x1ff09cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ff0a0:
    // 0x1ff0a0: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x1ff0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x1ff0a4: 0x846306d8  lh          $v1, 0x6D8($v1)
    ctx->pc = 0x1ff0a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1752)));
    // 0x1ff0a8: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1FF0A8u;
    {
        const bool branch_taken_0x1ff0a8 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1FF0ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF0A8u;
            // 0x1ff0ac: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff0a8) {
            ctx->pc = 0x1FF0BCu;
            goto label_1ff0bc;
        }
    }
    ctx->pc = 0x1FF0B0u;
    // 0x1ff0b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1ff0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1ff0b4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1FF0B4u;
    {
        const bool branch_taken_0x1ff0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1FF0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF0B4u;
            // 0x1ff0b8: 0xa46606d8  sh          $a2, 0x6D8($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 1752), (uint16_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff0b4) {
            ctx->pc = 0x1FF0CCu;
            goto label_1ff0cc;
        }
    }
    ctx->pc = 0x1FF0BCu;
label_1ff0bc:
    // 0x1ff0bc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ff0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1ff0c0: 0x28a30100  slti        $v1, $a1, 0x100
    ctx->pc = 0x1ff0c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1ff0c4: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
    ctx->pc = 0x1FF0C4u;
    {
        const bool branch_taken_0x1ff0c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1FF0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1FF0C4u;
            // 0x1ff0c8: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ff0c4) {
            ctx->pc = 0x1FF0A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ff0a0;
        }
    }
    ctx->pc = 0x1FF0CCu;
label_1ff0cc:
    // 0x1ff0cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1FF0CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1FF0D4u;
}
