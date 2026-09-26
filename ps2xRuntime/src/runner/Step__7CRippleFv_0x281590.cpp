#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__7CRippleFv
// Address: 0x281590 - 0x2815d4
void Step__7CRippleFv_0x281590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__7CRippleFv_0x281590");
#endif

    ctx->pc = 0x281590u;

    // 0x281590: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x281590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x281594: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x281594u;
    {
        const bool branch_taken_0x281594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x281598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281594u;
            // 0x281598: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281594) {
            ctx->pc = 0x2815A4u;
            goto label_2815a4;
        }
    }
    ctx->pc = 0x28159Cu;
    // 0x28159c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x28159Cu;
    {
        const bool branch_taken_0x28159c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28159c) {
            ctx->pc = 0x2815CCu;
            goto label_2815cc;
        }
    }
    ctx->pc = 0x2815A4u;
label_2815a4:
    // 0x2815a4: 0x8c820024  lw          $v0, 0x24($a0)
    ctx->pc = 0x2815a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2815a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2815a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2815ac: 0xac820024  sw          $v0, 0x24($a0)
    ctx->pc = 0x2815acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 2));
    // 0x2815b0: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x2815b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2815b4: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x2815b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2815b8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2815b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2815bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2815BCu;
    {
        const bool branch_taken_0x2815bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2815C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2815BCu;
            // 0x2815c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2815bc) {
            ctx->pc = 0x2815CCu;
            goto label_2815cc;
        }
    }
    ctx->pc = 0x2815C4u;
    // 0x2815c4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x2815c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x2815c8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2815c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2815cc:
    // 0x2815cc: 0x3e00008  jr          $ra
    ctx->pc = 0x2815CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2815D4u;
}
