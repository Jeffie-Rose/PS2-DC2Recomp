#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RemoveMtnStart__FP8CEditMapPfPf
// Address: 0x2d9c80 - 0x2d9cf8
void RemoveMtnStart__FP8CEditMapPfPf_0x2d9c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RemoveMtnStart__FP8CEditMapPfPf_0x2d9c80");
#endif

    switch (ctx->pc) {
        case 0x2d9c80u: goto label_2d9c80;
        case 0x2d9c84u: goto label_2d9c84;
        case 0x2d9c88u: goto label_2d9c88;
        case 0x2d9c8cu: goto label_2d9c8c;
        case 0x2d9c90u: goto label_2d9c90;
        case 0x2d9c94u: goto label_2d9c94;
        case 0x2d9c98u: goto label_2d9c98;
        case 0x2d9c9cu: goto label_2d9c9c;
        case 0x2d9ca0u: goto label_2d9ca0;
        case 0x2d9ca4u: goto label_2d9ca4;
        case 0x2d9ca8u: goto label_2d9ca8;
        case 0x2d9cacu: goto label_2d9cac;
        case 0x2d9cb0u: goto label_2d9cb0;
        case 0x2d9cb4u: goto label_2d9cb4;
        case 0x2d9cb8u: goto label_2d9cb8;
        case 0x2d9cbcu: goto label_2d9cbc;
        case 0x2d9cc0u: goto label_2d9cc0;
        case 0x2d9cc4u: goto label_2d9cc4;
        case 0x2d9cc8u: goto label_2d9cc8;
        case 0x2d9cccu: goto label_2d9ccc;
        case 0x2d9cd0u: goto label_2d9cd0;
        case 0x2d9cd4u: goto label_2d9cd4;
        case 0x2d9cd8u: goto label_2d9cd8;
        case 0x2d9cdcu: goto label_2d9cdc;
        case 0x2d9ce0u: goto label_2d9ce0;
        case 0x2d9ce4u: goto label_2d9ce4;
        case 0x2d9ce8u: goto label_2d9ce8;
        case 0x2d9cecu: goto label_2d9cec;
        case 0x2d9cf0u: goto label_2d9cf0;
        case 0x2d9cf4u: goto label_2d9cf4;
        default: break;
    }

    ctx->pc = 0x2d9c80u;

label_2d9c80:
    // 0x2d9c80: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d9c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2d9c84:
    // 0x2d9c84: 0x3c0701f6  lui         $a3, 0x1F6
    ctx->pc = 0x2d9c84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)502 << 16));
label_2d9c88:
    // 0x2d9c88: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d9c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d9c8c:
    // 0x2d9c8c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x2d9c8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_2d9c90:
    // 0x2d9c90: 0xaf839e44  sw          $v1, -0x61BC($gp)
    ctx->pc = 0x2d9c90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942276), GPR_U32(ctx, 3));
label_2d9c94:
    // 0x2d9c94: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x2d9c94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_2d9c98:
    // 0x2d9c98: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x2d9c98u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2d9c9c:
    // 0x2d9c9c: 0x24e78960  addiu       $a3, $a3, -0x76A0
    ctx->pc = 0x2d9c9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936928));
label_2d9ca0:
    // 0x2d9ca0: 0x24848970  addiu       $a0, $a0, -0x7690
    ctx->pc = 0x2d9ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936944));
label_2d9ca4:
    // 0x2d9ca4: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2d9ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2d9ca8:
    // 0x2d9ca8: 0x7ce50000  sq          $a1, 0x0($a3)
    ctx->pc = 0x2d9ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 5));
label_2d9cac:
    // 0x2d9cac: 0x78c50000  lq          $a1, 0x0($a2)
    ctx->pc = 0x2d9cacu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_2d9cb0:
    // 0x2d9cb0: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x2d9cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
label_2d9cb4:
    // 0x2d9cb4: 0x8f849e84  lw          $a0, -0x617C($gp)
    ctx->pc = 0x2d9cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942340)));
label_2d9cb8:
    // 0x2d9cb8: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_2d9cbc:
    if (ctx->pc == 0x2D9CBCu) {
        ctx->pc = 0x2D9CBCu;
            // 0x2d9cbc: 0xaf839e3c  sw          $v1, -0x61C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942268), GPR_U32(ctx, 3));
        ctx->pc = 0x2D9CC0u;
        goto label_2d9cc0;
    }
    ctx->pc = 0x2D9CB8u;
    {
        const bool branch_taken_0x2d9cb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9CB8u;
            // 0x2d9cbc: 0xaf839e3c  sw          $v1, -0x61C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942268), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9cb8) {
            ctx->pc = 0x2D9CECu;
            goto label_2d9cec;
        }
    }
    ctx->pc = 0x2D9CC0u;
label_2d9cc0:
    // 0x2d9cc0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2d9cc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d9cc4:
    // 0x2d9cc4: 0x8f3900b4  lw          $t9, 0xB4($t9)
    ctx->pc = 0x2d9cc4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 180)));
label_2d9cc8:
    // 0x2d9cc8: 0x320f809  jalr        $t9
label_2d9ccc:
    if (ctx->pc == 0x2D9CCCu) {
        ctx->pc = 0x2D9CD0u;
        goto label_2d9cd0;
    }
    ctx->pc = 0x2D9CC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D9CD0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D9CD0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D9CD0u; }
            if (ctx->pc != 0x2D9CD0u) { return; }
        }
        }
    }
    ctx->pc = 0x2D9CD0u;
label_2d9cd0:
    // 0x2d9cd0: 0x8f849e84  lw          $a0, -0x617C($gp)
    ctx->pc = 0x2d9cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942340)));
label_2d9cd4:
    // 0x2d9cd4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d9cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2d9cd8:
    // 0x2d9cd8: 0x24a50af8  addiu       $a1, $a1, 0xAF8
    ctx->pc = 0x2d9cd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2808));
label_2d9cdc:
    // 0x2d9cdc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2d9cdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d9ce0:
    // 0x2d9ce0: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x2d9ce0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_2d9ce4:
    // 0x2d9ce4: 0x320f809  jalr        $t9
label_2d9ce8:
    if (ctx->pc == 0x2D9CE8u) {
        ctx->pc = 0x2D9CE8u;
            // 0x2d9ce8: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2D9CECu;
        goto label_2d9cec;
    }
    ctx->pc = 0x2D9CE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D9CECu);
        ctx->pc = 0x2D9CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9CE4u;
            // 0x2d9ce8: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D9CECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D9CECu; }
            if (ctx->pc != 0x2D9CECu) { return; }
        }
        }
    }
    ctx->pc = 0x2D9CECu;
label_2d9cec:
    // 0x2d9cec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d9cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d9cf0:
    // 0x2d9cf0: 0x3e00008  jr          $ra
label_2d9cf4:
    if (ctx->pc == 0x2D9CF4u) {
        ctx->pc = 0x2D9CF4u;
            // 0x2d9cf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2D9CF8u;
        goto label_fallthrough_0x2d9cf0;
    }
    ctx->pc = 0x2D9CF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9CF0u;
            // 0x2d9cf4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2d9cf0:
    ctx->pc = 0x2D9CF8u;
}
