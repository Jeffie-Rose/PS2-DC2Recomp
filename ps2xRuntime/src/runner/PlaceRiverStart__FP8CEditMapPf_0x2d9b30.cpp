#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PlaceRiverStart__FP8CEditMapPf
// Address: 0x2d9b30 - 0x2d9b84
void PlaceRiverStart__FP8CEditMapPf_0x2d9b30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PlaceRiverStart__FP8CEditMapPf_0x2d9b30");
#endif

    switch (ctx->pc) {
        case 0x2d9b30u: goto label_2d9b30;
        case 0x2d9b34u: goto label_2d9b34;
        case 0x2d9b38u: goto label_2d9b38;
        case 0x2d9b3cu: goto label_2d9b3c;
        case 0x2d9b40u: goto label_2d9b40;
        case 0x2d9b44u: goto label_2d9b44;
        case 0x2d9b48u: goto label_2d9b48;
        case 0x2d9b4cu: goto label_2d9b4c;
        case 0x2d9b50u: goto label_2d9b50;
        case 0x2d9b54u: goto label_2d9b54;
        case 0x2d9b58u: goto label_2d9b58;
        case 0x2d9b5cu: goto label_2d9b5c;
        case 0x2d9b60u: goto label_2d9b60;
        case 0x2d9b64u: goto label_2d9b64;
        case 0x2d9b68u: goto label_2d9b68;
        case 0x2d9b6cu: goto label_2d9b6c;
        case 0x2d9b70u: goto label_2d9b70;
        case 0x2d9b74u: goto label_2d9b74;
        case 0x2d9b78u: goto label_2d9b78;
        case 0x2d9b7cu: goto label_2d9b7c;
        case 0x2d9b80u: goto label_2d9b80;
        default: break;
    }

    ctx->pc = 0x2d9b30u;

label_2d9b30:
    // 0x2d9b30: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2d9b30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2d9b34:
    // 0x2d9b34: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x2d9b34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_2d9b38:
    // 0x2d9b38: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d9b38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2d9b3c:
    // 0x2d9b3c: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x2d9b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
label_2d9b40:
    // 0x2d9b40: 0xaf839e40  sw          $v1, -0x61C0($gp)
    ctx->pc = 0x2d9b40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942272), GPR_U32(ctx, 3));
label_2d9b44:
    // 0x2d9b44: 0x24848950  addiu       $a0, $a0, -0x76B0
    ctx->pc = 0x2d9b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936912));
label_2d9b48:
    // 0x2d9b48: 0x78a50000  lq          $a1, 0x0($a1)
    ctx->pc = 0x2d9b48u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2d9b4c:
    // 0x2d9b4c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2d9b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2d9b50:
    // 0x2d9b50: 0x7c850000  sq          $a1, 0x0($a0)
    ctx->pc = 0x2d9b50u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 5));
label_2d9b54:
    // 0x2d9b54: 0x8f849e80  lw          $a0, -0x6180($gp)
    ctx->pc = 0x2d9b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942336)));
label_2d9b58:
    // 0x2d9b58: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_2d9b5c:
    if (ctx->pc == 0x2D9B5Cu) {
        ctx->pc = 0x2D9B5Cu;
            // 0x2d9b5c: 0xaf839e3c  sw          $v1, -0x61C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942268), GPR_U32(ctx, 3));
        ctx->pc = 0x2D9B60u;
        goto label_2d9b60;
    }
    ctx->pc = 0x2D9B58u;
    {
        const bool branch_taken_0x2d9b58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9B5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9B58u;
            // 0x2d9b5c: 0xaf839e3c  sw          $v1, -0x61C4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942268), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9b58) {
            ctx->pc = 0x2D9B78u;
            goto label_2d9b78;
        }
    }
    ctx->pc = 0x2D9B60u;
label_2d9b60:
    // 0x2d9b60: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2d9b60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2d9b64:
    // 0x2d9b64: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2d9b64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2d9b68:
    // 0x2d9b68: 0x24a50af0  addiu       $a1, $a1, 0xAF0
    ctx->pc = 0x2d9b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2800));
label_2d9b6c:
    // 0x2d9b6c: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x2d9b6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_2d9b70:
    // 0x2d9b70: 0x320f809  jalr        $t9
label_2d9b74:
    if (ctx->pc == 0x2D9B74u) {
        ctx->pc = 0x2D9B74u;
            // 0x2d9b74: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2D9B78u;
        goto label_2d9b78;
    }
    ctx->pc = 0x2D9B70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2D9B78u);
        ctx->pc = 0x2D9B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9B70u;
            // 0x2d9b74: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D9B78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D9B78u; }
            if (ctx->pc != 0x2D9B78u) { return; }
        }
        }
    }
    ctx->pc = 0x2D9B78u;
label_2d9b78:
    // 0x2d9b78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d9b78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d9b7c:
    // 0x2d9b7c: 0x3e00008  jr          $ra
label_2d9b80:
    if (ctx->pc == 0x2D9B80u) {
        ctx->pc = 0x2D9B80u;
            // 0x2d9b80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2D9B84u;
        goto label_fallthrough_0x2d9b7c;
    }
    ctx->pc = 0x2D9B7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9B7Cu;
            // 0x2d9b80: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2d9b7c:
    ctx->pc = 0x2D9B84u;
}
