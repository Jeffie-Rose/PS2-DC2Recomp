#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _RESET_MOS__FP12RS_STACKDATAi
// Address: 0x2d1c20 - 0x2d1c50
void ps2__RESET_MOS__FP12RS_STACKDATAi_0x2d1c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__RESET_MOS__FP12RS_STACKDATAi_0x2d1c20");
#endif

    switch (ctx->pc) {
        case 0x2d1c20u: goto label_2d1c20;
        case 0x2d1c24u: goto label_2d1c24;
        case 0x2d1c28u: goto label_2d1c28;
        case 0x2d1c2cu: goto label_2d1c2c;
        case 0x2d1c30u: goto label_2d1c30;
        case 0x2d1c34u: goto label_2d1c34;
        case 0x2d1c38u: goto label_2d1c38;
        case 0x2d1c3cu: goto label_2d1c3c;
        case 0x2d1c40u: goto label_2d1c40;
        case 0x2d1c44u: goto label_2d1c44;
        case 0x2d1c48u: goto label_2d1c48;
        case 0x2d1c4cu: goto label_2d1c4c;
        default: break;
    }

    ctx->pc = 0x2d1c20u;

label_2d1c20:
    // 0x2d1c20: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d1c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2d1c24:
    // 0x2d1c24: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2d1c24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2d1c28:
    // 0x2d1c28: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d1c28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d1c2c:
    // 0x2d1c2c: 0x8c24d430  lw          $a0, -0x2BD0($at)
    ctx->pc = 0x2d1c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956080)));
label_2d1c30:
    // 0x2d1c30: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2d1c30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d1c34:
    // 0x2d1c34: 0x8f3900b4  lw          $t9, 0xB4($t9)
    ctx->pc = 0x2d1c34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 180)));
label_2d1c38:
    // 0x2d1c38: 0x320f809  jalr        $t9
label_2d1c3c:
    if (ctx->pc == 0x2D1C3Cu) {
        ctx->pc = 0x2D1C40u;
        goto label_2d1c40;
    }
    ctx->pc = 0x2D1C38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D1C40u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D1C40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D1C40u; }
            if (ctx->pc != 0x2D1C40u) { return; }
        }
        }
    }
    ctx->pc = 0x2D1C40u;
label_2d1c40:
    // 0x2d1c40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d1c40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d1c44:
    // 0x2d1c44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d1c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d1c48:
    // 0x2d1c48: 0x3e00008  jr          $ra
label_2d1c4c:
    if (ctx->pc == 0x2D1C4Cu) {
        ctx->pc = 0x2D1C4Cu;
            // 0x2d1c4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2D1C50u;
        goto label_fallthrough_0x2d1c48;
    }
    ctx->pc = 0x2D1C48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D1C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D1C48u;
            // 0x2d1c4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2d1c48:
    ctx->pc = 0x2D1C50u;
}
