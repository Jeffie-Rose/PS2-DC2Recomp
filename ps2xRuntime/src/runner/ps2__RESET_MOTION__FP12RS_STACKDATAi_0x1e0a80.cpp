#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _RESET_MOTION__FP12RS_STACKDATAi
// Address: 0x1e0a80 - 0x1e0aac
void ps2__RESET_MOTION__FP12RS_STACKDATAi_0x1e0a80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__RESET_MOTION__FP12RS_STACKDATAi_0x1e0a80");
#endif

    switch (ctx->pc) {
        case 0x1e0a80u: goto label_1e0a80;
        case 0x1e0a84u: goto label_1e0a84;
        case 0x1e0a88u: goto label_1e0a88;
        case 0x1e0a8cu: goto label_1e0a8c;
        case 0x1e0a90u: goto label_1e0a90;
        case 0x1e0a94u: goto label_1e0a94;
        case 0x1e0a98u: goto label_1e0a98;
        case 0x1e0a9cu: goto label_1e0a9c;
        case 0x1e0aa0u: goto label_1e0aa0;
        case 0x1e0aa4u: goto label_1e0aa4;
        case 0x1e0aa8u: goto label_1e0aa8;
        default: break;
    }

    ctx->pc = 0x1e0a80u;

label_1e0a80:
    // 0x1e0a80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e0a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e0a84:
    // 0x1e0a84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e0a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1e0a88:
    // 0x1e0a88: 0x8f848e70  lw          $a0, -0x7190($gp)
    ctx->pc = 0x1e0a88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938224)));
label_1e0a8c:
    // 0x1e0a8c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1e0a8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1e0a90:
    // 0x1e0a90: 0x8f3900b4  lw          $t9, 0xB4($t9)
    ctx->pc = 0x1e0a90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 180)));
label_1e0a94:
    // 0x1e0a94: 0x320f809  jalr        $t9
label_1e0a98:
    if (ctx->pc == 0x1E0A98u) {
        ctx->pc = 0x1E0A9Cu;
        goto label_1e0a9c;
    }
    ctx->pc = 0x1E0A94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1E0A9Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E0A9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E0A9Cu; }
            if (ctx->pc != 0x1E0A9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1E0A9Cu;
label_1e0a9c:
    // 0x1e0a9c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e0a9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e0aa0:
    // 0x1e0aa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1e0aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e0aa4:
    // 0x1e0aa4: 0x3e00008  jr          $ra
label_1e0aa8:
    if (ctx->pc == 0x1E0AA8u) {
        ctx->pc = 0x1E0AA8u;
            // 0x1e0aa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1E0AACu;
        goto label_fallthrough_0x1e0aa4;
    }
    ctx->pc = 0x1E0AA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E0AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E0AA4u;
            // 0x1e0aa8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e0aa4:
    ctx->pc = 0x1E0AACu;
}
