#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsFishingRod__13CGameDataUsedFv
// Address: 0x1992b0 - 0x1992d8
void IsFishingRod__13CGameDataUsedFv_0x1992b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsFishingRod__13CGameDataUsedFv_0x1992b0");
#endif

    ctx->pc = 0x1992b0u;

    // 0x1992b0: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x1992b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x1992b4: 0x2402012e  addiu       $v0, $zero, 0x12E
    ctx->pc = 0x1992b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
    // 0x1992b8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1992B8u;
    {
        const bool branch_taken_0x1992b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1992BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1992B8u;
            // 0x1992bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1992b8) {
            ctx->pc = 0x1992D0u;
            goto label_1992d0;
        }
    }
    ctx->pc = 0x1992C0u;
    // 0x1992c0: 0x2402012f  addiu       $v0, $zero, 0x12F
    ctx->pc = 0x1992c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 303));
    // 0x1992c4: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1992C4u;
    {
        const bool branch_taken_0x1992c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1992C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1992C4u;
            // 0x1992c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1992c4) {
            ctx->pc = 0x1992D0u;
            goto label_1992d0;
        }
    }
    ctx->pc = 0x1992CCu;
    // 0x1992cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1992ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1992d0:
    // 0x1992d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1992D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1992D8u;
}
