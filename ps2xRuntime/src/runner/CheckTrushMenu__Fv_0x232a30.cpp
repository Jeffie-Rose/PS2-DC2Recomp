#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckTrushMenu__Fv
// Address: 0x232a30 - 0x232a5c
void CheckTrushMenu__Fv_0x232a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckTrushMenu__Fv_0x232a30");
#endif

    ctx->pc = 0x232a30u;

    // 0x232a30: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x232a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x232a34: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x232a34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x232a38: 0x84630050  lh          $v1, 0x50($v1)
    ctx->pc = 0x232a38u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x232a3c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x232A3Cu;
    {
        const bool branch_taken_0x232a3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x232A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232A3Cu;
            // 0x232a40: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232a3c) {
            ctx->pc = 0x232A54u;
            goto label_232a54;
        }
    }
    ctx->pc = 0x232A44u;
    // 0x232a44: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x232a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x232a48: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x232A48u;
    {
        const bool branch_taken_0x232a48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x232A4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232A48u;
            // 0x232a4c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232a48) {
            ctx->pc = 0x232A54u;
            goto label_232a54;
        }
    }
    ctx->pc = 0x232A50u;
    // 0x232a50: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x232a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_232a54:
    // 0x232a54: 0x3e00008  jr          $ra
    ctx->pc = 0x232A54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x232A5Cu;
}
