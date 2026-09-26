#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckSameRacerFish__Fi
// Address: 0x21a390 - 0x21a3d4
void CheckSameRacerFish__Fi_0x21a390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckSameRacerFish__Fi_0x21a390");
#endif

    switch (ctx->pc) {
        case 0x21a3a0u: goto label_21a3a0;
        default: break;
    }

    ctx->pc = 0x21a390u;

    // 0x21a390: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x21a390u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a394: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x21a394u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21a398: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x21a398u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
    // 0x21a39c: 0x24a5fea0  addiu       $a1, $a1, -0x160
    ctx->pc = 0x21a39cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966944));
label_21a3a0:
    // 0x21a3a0: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x21a3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x21a3a4: 0x84630000  lh          $v1, 0x0($v1)
    ctx->pc = 0x21a3a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x21a3a8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x21A3A8u;
    {
        const bool branch_taken_0x21a3a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x21a3a8) {
            ctx->pc = 0x21A3B8u;
            goto label_21a3b8;
        }
    }
    ctx->pc = 0x21A3B0u;
    // 0x21a3b0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x21A3B0u;
    {
        const bool branch_taken_0x21a3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a3b0) {
            ctx->pc = 0x21A3CCu;
            goto label_21a3cc;
        }
    }
    ctx->pc = 0x21A3B8u;
label_21a3b8:
    // 0x21a3b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x21a3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x21a3bc: 0x28430006  slti        $v1, $v0, 0x6
    ctx->pc = 0x21a3bcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x21a3c0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x21A3C0u;
    {
        const bool branch_taken_0x21a3c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x21A3C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21A3C0u;
            // 0x21a3c4: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21a3c0) {
            ctx->pc = 0x21A3A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_21a3a0;
        }
    }
    ctx->pc = 0x21A3C8u;
    // 0x21a3c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x21a3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_21a3cc:
    // 0x21a3cc: 0x3e00008  jr          $ra
    ctx->pc = 0x21A3CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21A3D4u;
}
