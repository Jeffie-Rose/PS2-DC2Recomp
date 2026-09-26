#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: __ct__13CGeyserEffectFv
// Address: 0x2f8a40 - 0x2f8ac0
void ps2___ct__13CGeyserEffectFv_0x2f8a40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___ct__13CGeyserEffectFv_0x2f8a40");
#endif

    switch (ctx->pc) {
        case 0x2f8a40u: goto label_2f8a40;
        case 0x2f8a44u: goto label_2f8a44;
        case 0x2f8a48u: goto label_2f8a48;
        case 0x2f8a4cu: goto label_2f8a4c;
        case 0x2f8a50u: goto label_2f8a50;
        case 0x2f8a54u: goto label_2f8a54;
        case 0x2f8a58u: goto label_2f8a58;
        case 0x2f8a5cu: goto label_2f8a5c;
        case 0x2f8a60u: goto label_2f8a60;
        case 0x2f8a64u: goto label_2f8a64;
        case 0x2f8a68u: goto label_2f8a68;
        case 0x2f8a6cu: goto label_2f8a6c;
        case 0x2f8a70u: goto label_2f8a70;
        case 0x2f8a74u: goto label_2f8a74;
        case 0x2f8a78u: goto label_2f8a78;
        case 0x2f8a7cu: goto label_2f8a7c;
        case 0x2f8a80u: goto label_2f8a80;
        case 0x2f8a84u: goto label_2f8a84;
        case 0x2f8a88u: goto label_2f8a88;
        case 0x2f8a8cu: goto label_2f8a8c;
        case 0x2f8a90u: goto label_2f8a90;
        case 0x2f8a94u: goto label_2f8a94;
        case 0x2f8a98u: goto label_2f8a98;
        case 0x2f8a9cu: goto label_2f8a9c;
        case 0x2f8aa0u: goto label_2f8aa0;
        case 0x2f8aa4u: goto label_2f8aa4;
        case 0x2f8aa8u: goto label_2f8aa8;
        case 0x2f8aacu: goto label_2f8aac;
        case 0x2f8ab0u: goto label_2f8ab0;
        case 0x2f8ab4u: goto label_2f8ab4;
        case 0x2f8ab8u: goto label_2f8ab8;
        case 0x2f8abcu: goto label_2f8abc;
        default: break;
    }

    ctx->pc = 0x2f8a40u;

label_2f8a40:
    // 0x2f8a40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2f8a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2f8a44:
    // 0x2f8a44: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2f8a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2f8a48:
    // 0x2f8a48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2f8a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2f8a4c:
    // 0x2f8a4c: 0x24424f10  addiu       $v0, $v0, 0x4F10
    ctx->pc = 0x2f8a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20240));
label_2f8a50:
    // 0x2f8a50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2f8a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2f8a54:
    // 0x2f8a54: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f8a54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f8a58:
    // 0x2f8a58: 0xac82003c  sw          $v0, 0x3C($a0)
    ctx->pc = 0x2f8a58u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 2));
label_2f8a5c:
    // 0x2f8a5c: 0x8e19003c  lw          $t9, 0x3C($s0)
    ctx->pc = 0x2f8a5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_2f8a60:
    // 0x2f8a60: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2f8a60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2f8a64:
    // 0x2f8a64: 0x320f809  jalr        $t9
label_2f8a68:
    if (ctx->pc == 0x2F8A68u) {
        ctx->pc = 0x2F8A68u;
            // 0x2f8a68: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x2F8A6Cu;
        goto label_2f8a6c;
    }
    ctx->pc = 0x2F8A64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F8A6Cu);
        ctx->pc = 0x2F8A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8A64u;
            // 0x2f8a68: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F8A6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F8A6Cu; }
            if (ctx->pc != 0x2F8A6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2F8A6Cu;
label_2f8a6c:
    // 0x2f8a6c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2f8a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2f8a70:
    // 0x2f8a70: 0x244250b0  addiu       $v0, $v0, 0x50B0
    ctx->pc = 0x2f8a70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20656));
label_2f8a74:
    // 0x2f8a74: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x2f8a74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
label_2f8a78:
    // 0x2f8a78: 0x8e19003c  lw          $t9, 0x3C($s0)
    ctx->pc = 0x2f8a78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_2f8a7c:
    // 0x2f8a7c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2f8a7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2f8a80:
    // 0x2f8a80: 0x320f809  jalr        $t9
label_2f8a84:
    if (ctx->pc == 0x2F8A84u) {
        ctx->pc = 0x2F8A84u;
            // 0x2f8a84: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x2F8A88u;
        goto label_2f8a88;
    }
    ctx->pc = 0x2F8A80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F8A88u);
        ctx->pc = 0x2F8A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8A80u;
            // 0x2f8a84: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F8A88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F8A88u; }
            if (ctx->pc != 0x2F8A88u) { return; }
        }
        }
    }
    ctx->pc = 0x2F8A88u;
label_2f8a88:
    // 0x2f8a88: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2f8a88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_2f8a8c:
    // 0x2f8a8c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x2f8a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
label_2f8a90:
    // 0x2f8a90: 0x8e19003c  lw          $t9, 0x3C($s0)
    ctx->pc = 0x2f8a90u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_2f8a94:
    // 0x2f8a94: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2f8a94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2f8a98:
    // 0x2f8a98: 0x320f809  jalr        $t9
label_2f8a9c:
    if (ctx->pc == 0x2F8A9Cu) {
        ctx->pc = 0x2F8A9Cu;
            // 0x2f8a9c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->pc = 0x2F8AA0u;
        goto label_2f8aa0;
    }
    ctx->pc = 0x2F8A98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2F8AA0u);
        ctx->pc = 0x2F8A9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8A98u;
            // 0x2f8a9c: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2F8AA0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2F8AA0u; }
            if (ctx->pc != 0x2F8AA0u) { return; }
        }
        }
    }
    ctx->pc = 0x2F8AA0u;
label_2f8aa0:
    // 0x2f8aa0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f8aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f8aa4:
    // 0x2f8aa4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2f8aa4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f8aa8:
    // 0x2f8aa8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2f8aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2f8aac:
    // 0x2f8aac: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x2f8aacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_2f8ab0:
    // 0x2f8ab0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2f8ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2f8ab4:
    // 0x2f8ab4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2f8ab4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2f8ab8:
    // 0x2f8ab8: 0x3e00008  jr          $ra
label_2f8abc:
    if (ctx->pc == 0x2F8ABCu) {
        ctx->pc = 0x2F8ABCu;
            // 0x2f8abc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2F8AC0u;
        goto label_fallthrough_0x2f8ab8;
    }
    ctx->pc = 0x2F8AB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8ABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2F8AB8u;
            // 0x2f8abc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2f8ab8:
    ctx->pc = 0x2F8AC0u;
}
