#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ExtendCommand__14CBaseMenuClassFii
// Address: 0x239f50 - 0x23a0c8
void ExtendCommand__14CBaseMenuClassFii_0x239f50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ExtendCommand__14CBaseMenuClassFii_0x239f50");
#endif

    switch (ctx->pc) {
        case 0x239f50u: goto label_239f50;
        case 0x239f54u: goto label_239f54;
        case 0x239f58u: goto label_239f58;
        case 0x239f5cu: goto label_239f5c;
        case 0x239f60u: goto label_239f60;
        case 0x239f64u: goto label_239f64;
        case 0x239f68u: goto label_239f68;
        case 0x239f6cu: goto label_239f6c;
        case 0x239f70u: goto label_239f70;
        case 0x239f74u: goto label_239f74;
        case 0x239f78u: goto label_239f78;
        case 0x239f7cu: goto label_239f7c;
        case 0x239f80u: goto label_239f80;
        case 0x239f84u: goto label_239f84;
        case 0x239f88u: goto label_239f88;
        case 0x239f8cu: goto label_239f8c;
        case 0x239f90u: goto label_239f90;
        case 0x239f94u: goto label_239f94;
        case 0x239f98u: goto label_239f98;
        case 0x239f9cu: goto label_239f9c;
        case 0x239fa0u: goto label_239fa0;
        case 0x239fa4u: goto label_239fa4;
        case 0x239fa8u: goto label_239fa8;
        case 0x239facu: goto label_239fac;
        case 0x239fb0u: goto label_239fb0;
        case 0x239fb4u: goto label_239fb4;
        case 0x239fb8u: goto label_239fb8;
        case 0x239fbcu: goto label_239fbc;
        case 0x239fc0u: goto label_239fc0;
        case 0x239fc4u: goto label_239fc4;
        case 0x239fc8u: goto label_239fc8;
        case 0x239fccu: goto label_239fcc;
        case 0x239fd0u: goto label_239fd0;
        case 0x239fd4u: goto label_239fd4;
        case 0x239fd8u: goto label_239fd8;
        case 0x239fdcu: goto label_239fdc;
        case 0x239fe0u: goto label_239fe0;
        case 0x239fe4u: goto label_239fe4;
        case 0x239fe8u: goto label_239fe8;
        case 0x239fecu: goto label_239fec;
        case 0x239ff0u: goto label_239ff0;
        case 0x239ff4u: goto label_239ff4;
        case 0x239ff8u: goto label_239ff8;
        case 0x239ffcu: goto label_239ffc;
        case 0x23a000u: goto label_23a000;
        case 0x23a004u: goto label_23a004;
        case 0x23a008u: goto label_23a008;
        case 0x23a00cu: goto label_23a00c;
        case 0x23a010u: goto label_23a010;
        case 0x23a014u: goto label_23a014;
        case 0x23a018u: goto label_23a018;
        case 0x23a01cu: goto label_23a01c;
        case 0x23a020u: goto label_23a020;
        case 0x23a024u: goto label_23a024;
        case 0x23a028u: goto label_23a028;
        case 0x23a02cu: goto label_23a02c;
        case 0x23a030u: goto label_23a030;
        case 0x23a034u: goto label_23a034;
        case 0x23a038u: goto label_23a038;
        case 0x23a03cu: goto label_23a03c;
        case 0x23a040u: goto label_23a040;
        case 0x23a044u: goto label_23a044;
        case 0x23a048u: goto label_23a048;
        case 0x23a04cu: goto label_23a04c;
        case 0x23a050u: goto label_23a050;
        case 0x23a054u: goto label_23a054;
        case 0x23a058u: goto label_23a058;
        case 0x23a05cu: goto label_23a05c;
        case 0x23a060u: goto label_23a060;
        case 0x23a064u: goto label_23a064;
        case 0x23a068u: goto label_23a068;
        case 0x23a06cu: goto label_23a06c;
        case 0x23a070u: goto label_23a070;
        case 0x23a074u: goto label_23a074;
        case 0x23a078u: goto label_23a078;
        case 0x23a07cu: goto label_23a07c;
        case 0x23a080u: goto label_23a080;
        case 0x23a084u: goto label_23a084;
        case 0x23a088u: goto label_23a088;
        case 0x23a08cu: goto label_23a08c;
        case 0x23a090u: goto label_23a090;
        case 0x23a094u: goto label_23a094;
        case 0x23a098u: goto label_23a098;
        case 0x23a09cu: goto label_23a09c;
        case 0x23a0a0u: goto label_23a0a0;
        case 0x23a0a4u: goto label_23a0a4;
        case 0x23a0a8u: goto label_23a0a8;
        case 0x23a0acu: goto label_23a0ac;
        case 0x23a0b0u: goto label_23a0b0;
        case 0x23a0b4u: goto label_23a0b4;
        case 0x23a0b8u: goto label_23a0b8;
        case 0x23a0bcu: goto label_23a0bc;
        case 0x23a0c0u: goto label_23a0c0;
        case 0x23a0c4u: goto label_23a0c4;
        default: break;
    }

    ctx->pc = 0x239f50u;

label_239f50:
    // 0x239f50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x239f50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_239f54:
    // 0x239f54: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x239f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_239f58:
    // 0x239f58: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x239f58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_239f5c:
    // 0x239f5c: 0xa0482d  daddu       $t1, $a1, $zero
    ctx->pc = 0x239f5cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_239f60:
    // 0x239f60: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x239f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_239f64:
    // 0x239f64: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x239f64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_239f68:
    // 0x239f68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x239f68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_239f6c:
    // 0x239f6c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x239f6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_239f70:
    // 0x239f70: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x239f70u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_239f74:
    // 0x239f74: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x239f74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239f78:
    // 0x239f78: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_239f7c:
    if (ctx->pc == 0x239F7Cu) {
        ctx->pc = 0x239F7Cu;
            // 0x239f7c: 0x26280058  addiu       $t0, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->pc = 0x239F80u;
        goto label_239f80;
    }
    ctx->pc = 0x239F78u;
    {
        const bool branch_taken_0x239f78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x239F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239F78u;
            // 0x239f7c: 0x26280058  addiu       $t0, $s1, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239f78) {
            ctx->pc = 0x239FB0u;
            goto label_239fb0;
        }
    }
    ctx->pc = 0x239F80u;
label_239f80:
    // 0x239f80: 0xc08dd34  jal         func_2374D0
label_239f84:
    if (ctx->pc == 0x239F84u) {
        ctx->pc = 0x239F88u;
        goto label_239f88;
    }
    ctx->pc = 0x239F80u;
    SET_GPR_U32(ctx, 31, 0x239F88u);
    ctx->pc = 0x2374D0u;
    if (runtime->hasFunction(0x2374D0u)) {
        auto targetFn = runtime->lookupFunction(0x2374D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239F88u; }
        if (ctx->pc != 0x239F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemCommandSelect__14CBaseMenuClassFii_0x2374d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239F88u; }
        if (ctx->pc != 0x239F88u) { return; }
    }
    ctx->pc = 0x239F88u;
label_239f88:
    // 0x239f88: 0x8e39010c  lw          $t9, 0x10C($s1)
    ctx->pc = 0x239f88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 268)));
label_239f8c:
    // 0x239f8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x239f8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_239f90:
    // 0x239f90: 0x3c0601ed  lui         $a2, 0x1ED
    ctx->pc = 0x239f90u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)493 << 16));
label_239f94:
    // 0x239f94: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x239f94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_239f98:
    // 0x239f98: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x239f98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_239f9c:
    // 0x239f9c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x239f9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_239fa0:
    // 0x239fa0: 0x320f809  jalr        $t9
label_239fa4:
    if (ctx->pc == 0x239FA4u) {
        ctx->pc = 0x239FA4u;
            // 0x239fa4: 0x24c6d800  addiu       $a2, $a2, -0x2800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957056));
        ctx->pc = 0x239FA8u;
        goto label_239fa8;
    }
    ctx->pc = 0x239FA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x239FA8u);
        ctx->pc = 0x239FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239FA0u;
            // 0x239fa4: 0x24c6d800  addiu       $a2, $a2, -0x2800 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957056));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x239FA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x239FA8u; }
            if (ctx->pc != 0x239FA8u) { return; }
        }
        }
    }
    ctx->pc = 0x239FA8u;
label_239fa8:
    // 0x239fa8: 0x10000042  b           . + 4 + (0x42 << 2)
label_239fac:
    if (ctx->pc == 0x239FACu) {
        ctx->pc = 0x239FACu;
            // 0x239fac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x239FB0u;
        goto label_239fb0;
    }
    ctx->pc = 0x239FA8u;
    {
        const bool branch_taken_0x239fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239FA8u;
            // 0x239fac: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239fa8) {
            ctx->pc = 0x23A0B4u;
            goto label_23a0b4;
        }
    }
    ctx->pc = 0x239FB0u;
label_239fb0:
    // 0x239fb0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x239fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_239fb4:
    // 0x239fb4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_239fb8:
    if (ctx->pc == 0x239FB8u) {
        ctx->pc = 0x239FB8u;
            // 0x239fb8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x239FBCu;
        goto label_239fbc;
    }
    ctx->pc = 0x239FB4u;
    {
        const bool branch_taken_0x239fb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x239FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239FB4u;
            // 0x239fb8: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239fb4) {
            ctx->pc = 0x239FCCu;
            goto label_239fcc;
        }
    }
    ctx->pc = 0x239FBCu;
label_239fbc:
    // 0x239fbc: 0xc08e404  jal         func_239010
label_239fc0:
    if (ctx->pc == 0x239FC0u) {
        ctx->pc = 0x239FC4u;
        goto label_239fc4;
    }
    ctx->pc = 0x239FBCu;
    SET_GPR_U32(ctx, 31, 0x239FC4u);
    ctx->pc = 0x239010u;
    if (runtime->hasFunction(0x239010u)) {
        auto targetFn = runtime->lookupFunction(0x239010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239FC4u; }
        if (ctx->pc != 0x239FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsSpectolTrans__14CBaseMenuClassFii_0x239010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239FC4u; }
        if (ctx->pc != 0x239FC4u) { return; }
    }
    ctx->pc = 0x239FC4u;
label_239fc4:
    // 0x239fc4: 0x1000003a  b           . + 4 + (0x3A << 2)
label_239fc8:
    if (ctx->pc == 0x239FC8u) {
        ctx->pc = 0x239FC8u;
            // 0x239fc8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x239FCCu;
        goto label_239fcc;
    }
    ctx->pc = 0x239FC4u;
    {
        const bool branch_taken_0x239fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239FC4u;
            // 0x239fc8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239fc4) {
            ctx->pc = 0x23A0B0u;
            goto label_23a0b0;
        }
    }
    ctx->pc = 0x239FCCu;
label_239fcc:
    // 0x239fcc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_239fd0:
    if (ctx->pc == 0x239FD0u) {
        ctx->pc = 0x239FD0u;
            // 0x239fd0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x239FD4u;
        goto label_239fd4;
    }
    ctx->pc = 0x239FCCu;
    {
        const bool branch_taken_0x239fcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x239FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239FCCu;
            // 0x239fd0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239fcc) {
            ctx->pc = 0x239FE4u;
            goto label_239fe4;
        }
    }
    ctx->pc = 0x239FD4u;
label_239fd4:
    // 0x239fd4: 0xc08e2b0  jal         func_238AC0
label_239fd8:
    if (ctx->pc == 0x239FD8u) {
        ctx->pc = 0x239FDCu;
        goto label_239fdc;
    }
    ctx->pc = 0x239FD4u;
    SET_GPR_U32(ctx, 31, 0x239FDCu);
    ctx->pc = 0x238AC0u;
    if (runtime->hasFunction(0x238AC0u)) {
        auto targetFn = runtime->lookupFunction(0x238AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239FDCu; }
        if (ctx->pc != 0x239FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemAskMode_HowMuch__14CBaseMenuClassFii_0x238ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239FDCu; }
        if (ctx->pc != 0x239FDCu) { return; }
    }
    ctx->pc = 0x239FDCu;
label_239fdc:
    // 0x239fdc: 0x10000034  b           . + 4 + (0x34 << 2)
label_239fe0:
    if (ctx->pc == 0x239FE0u) {
        ctx->pc = 0x239FE4u;
        goto label_239fe4;
    }
    ctx->pc = 0x239FDCu;
    {
        const bool branch_taken_0x239fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x239fdc) {
            ctx->pc = 0x23A0B0u;
            goto label_23a0b0;
        }
    }
    ctx->pc = 0x239FE4u;
label_239fe4:
    // 0x239fe4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_239fe8:
    if (ctx->pc == 0x239FE8u) {
        ctx->pc = 0x239FE8u;
            // 0x239fe8: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x239FECu;
        goto label_239fec;
    }
    ctx->pc = 0x239FE4u;
    {
        const bool branch_taken_0x239fe4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x239FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239FE4u;
            // 0x239fe8: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239fe4) {
            ctx->pc = 0x239FFCu;
            goto label_239ffc;
        }
    }
    ctx->pc = 0x239FECu;
label_239fec:
    // 0x239fec: 0xc08e508  jal         func_239420
label_239ff0:
    if (ctx->pc == 0x239FF0u) {
        ctx->pc = 0x239FF4u;
        goto label_239ff4;
    }
    ctx->pc = 0x239FECu;
    SET_GPR_U32(ctx, 31, 0x239FF4u);
    ctx->pc = 0x239420u;
    if (runtime->hasFunction(0x239420u)) {
        auto targetFn = runtime->lookupFunction(0x239420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239FF4u; }
        if (ctx->pc != 0x239FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsSpectolFusion__14CBaseMenuClassFii_0x239420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239FF4u; }
        if (ctx->pc != 0x239FF4u) { return; }
    }
    ctx->pc = 0x239FF4u;
label_239ff4:
    // 0x239ff4: 0x1000002e  b           . + 4 + (0x2E << 2)
label_239ff8:
    if (ctx->pc == 0x239FF8u) {
        ctx->pc = 0x239FF8u;
            // 0x239ff8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x239FFCu;
        goto label_239ffc;
    }
    ctx->pc = 0x239FF4u;
    {
        const bool branch_taken_0x239ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239FF4u;
            // 0x239ff8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ff4) {
            ctx->pc = 0x23A0B0u;
            goto label_23a0b0;
        }
    }
    ctx->pc = 0x239FFCu;
label_239ffc:
    // 0x239ffc: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_23a000:
    if (ctx->pc == 0x23A000u) {
        ctx->pc = 0x23A000u;
            // 0x23a000: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x23A004u;
        goto label_23a004;
    }
    ctx->pc = 0x239FFCu;
    {
        const bool branch_taken_0x239ffc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23A000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239FFCu;
            // 0x23a000: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ffc) {
            ctx->pc = 0x23A014u;
            goto label_23a014;
        }
    }
    ctx->pc = 0x23A004u;
label_23a004:
    // 0x23a004: 0xc08e5f4  jal         func_2397D0
label_23a008:
    if (ctx->pc == 0x23A008u) {
        ctx->pc = 0x23A00Cu;
        goto label_23a00c;
    }
    ctx->pc = 0x23A004u;
    SET_GPR_U32(ctx, 31, 0x23A00Cu);
    ctx->pc = 0x2397D0u;
    if (runtime->hasFunction(0x2397D0u)) {
        auto targetFn = runtime->lookupFunction(0x2397D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A00Cu; }
        if (ctx->pc != 0x23A00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsTrush__14CBaseMenuClassFii_0x2397d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A00Cu; }
        if (ctx->pc != 0x23A00Cu) { return; }
    }
    ctx->pc = 0x23A00Cu;
label_23a00c:
    // 0x23a00c: 0x10000028  b           . + 4 + (0x28 << 2)
label_23a010:
    if (ctx->pc == 0x23A010u) {
        ctx->pc = 0x23A010u;
            // 0x23a010: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23A014u;
        goto label_23a014;
    }
    ctx->pc = 0x23A00Cu;
    {
        const bool branch_taken_0x23a00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A010u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A00Cu;
            // 0x23a010: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a00c) {
            ctx->pc = 0x23A0B0u;
            goto label_23a0b0;
        }
    }
    ctx->pc = 0x23A014u;
label_23a014:
    // 0x23a014: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_23a018:
    if (ctx->pc == 0x23A018u) {
        ctx->pc = 0x23A018u;
            // 0x23a018: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x23A01Cu;
        goto label_23a01c;
    }
    ctx->pc = 0x23A014u;
    {
        const bool branch_taken_0x23a014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23A018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A014u;
            // 0x23a018: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a014) {
            ctx->pc = 0x23A03Cu;
            goto label_23a03c;
        }
    }
    ctx->pc = 0x23A01Cu;
label_23a01c:
    // 0x23a01c: 0x85050002  lh          $a1, 0x2($t0)
    ctx->pc = 0x23a01cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_23a020:
    // 0x23a020: 0x120302d  daddu       $a2, $t1, $zero
    ctx->pc = 0x23a020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_23a024:
    // 0x23a024: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x23a024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_23a028:
    // 0x23a028: 0x278995b8  addiu       $t1, $gp, -0x6A48
    ctx->pc = 0x23a028u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294940088));
label_23a02c:
    // 0x23a02c: 0xc08e674  jal         func_2399D0
label_23a030:
    if (ctx->pc == 0x23A030u) {
        ctx->pc = 0x23A030u;
            // 0x23a030: 0x244800c0  addiu       $t0, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->pc = 0x23A034u;
        goto label_23a034;
    }
    ctx->pc = 0x23A02Cu;
    SET_GPR_U32(ctx, 31, 0x23A034u);
    ctx->pc = 0x23A030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23A02Cu;
            // 0x23a030: 0x244800c0  addiu       $t0, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2399D0u;
    if (runtime->hasFunction(0x2399D0u)) {
        auto targetFn = runtime->lookupFunction(0x2399D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A034u; }
        if (ctx->pc != 0x23A034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsItemUseNum__14CBaseMenuClassFiiiP13CGameDataUsedP14CItemUseTarget_0x2399d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A034u; }
        if (ctx->pc != 0x23A034u) { return; }
    }
    ctx->pc = 0x23A034u;
label_23a034:
    // 0x23a034: 0x1000001e  b           . + 4 + (0x1E << 2)
label_23a038:
    if (ctx->pc == 0x23A038u) {
        ctx->pc = 0x23A038u;
            // 0x23a038: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23A03Cu;
        goto label_23a03c;
    }
    ctx->pc = 0x23A034u;
    {
        const bool branch_taken_0x23a034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A034u;
            // 0x23a038: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a034) {
            ctx->pc = 0x23A0B0u;
            goto label_23a0b0;
        }
    }
    ctx->pc = 0x23A03Cu;
label_23a03c:
    // 0x23a03c: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_23a040:
    if (ctx->pc == 0x23A040u) {
        ctx->pc = 0x23A040u;
            // 0x23a040: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x23A044u;
        goto label_23a044;
    }
    ctx->pc = 0x23A03Cu;
    {
        const bool branch_taken_0x23a03c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23A040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A03Cu;
            // 0x23a040: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a03c) {
            ctx->pc = 0x23A054u;
            goto label_23a054;
        }
    }
    ctx->pc = 0x23A044u;
label_23a044:
    // 0x23a044: 0xc08e6a0  jal         func_239A80
label_23a048:
    if (ctx->pc == 0x23A048u) {
        ctx->pc = 0x23A04Cu;
        goto label_23a04c;
    }
    ctx->pc = 0x23A044u;
    SET_GPR_U32(ctx, 31, 0x23A04Cu);
    ctx->pc = 0x239A80u;
    if (runtime->hasFunction(0x239A80u)) {
        auto targetFn = runtime->lookupFunction(0x239A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A04Cu; }
        if (ctx->pc != 0x23A04Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SelectInGiftBox__14CBaseMenuClassFii_0x239a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23A04Cu; }
        if (ctx->pc != 0x23A04Cu) { return; }
    }
    ctx->pc = 0x23A04Cu;
label_23a04c:
    // 0x23a04c: 0x10000018  b           . + 4 + (0x18 << 2)
label_23a050:
    if (ctx->pc == 0x23A050u) {
        ctx->pc = 0x23A050u;
            // 0x23a050: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23A054u;
        goto label_23a054;
    }
    ctx->pc = 0x23A04Cu;
    {
        const bool branch_taken_0x23a04c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A04Cu;
            // 0x23a050: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a04c) {
            ctx->pc = 0x23A0B0u;
            goto label_23a0b0;
        }
    }
    ctx->pc = 0x23A054u;
label_23a054:
    // 0x23a054: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_23a058:
    if (ctx->pc == 0x23A058u) {
        ctx->pc = 0x23A058u;
            // 0x23a058: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x23A05Cu;
        goto label_23a05c;
    }
    ctx->pc = 0x23A054u;
    {
        const bool branch_taken_0x23a054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23A058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A054u;
            // 0x23a058: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a054) {
            ctx->pc = 0x23A074u;
            goto label_23a074;
        }
    }
    ctx->pc = 0x23A05Cu;
label_23a05c:
    // 0x23a05c: 0x8c99010c  lw          $t9, 0x10C($a0)
    ctx->pc = 0x23a05cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
label_23a060:
    // 0x23a060: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x23a060u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_23a064:
    // 0x23a064: 0x320f809  jalr        $t9
label_23a068:
    if (ctx->pc == 0x23A068u) {
        ctx->pc = 0x23A06Cu;
        goto label_23a06c;
    }
    ctx->pc = 0x23A064u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23A06Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x23A06Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23A06Cu; }
            if (ctx->pc != 0x23A06Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23A06Cu;
label_23a06c:
    // 0x23a06c: 0x10000010  b           . + 4 + (0x10 << 2)
label_23a070:
    if (ctx->pc == 0x23A070u) {
        ctx->pc = 0x23A070u;
            // 0x23a070: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23A074u;
        goto label_23a074;
    }
    ctx->pc = 0x23A06Cu;
    {
        const bool branch_taken_0x23a06c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A06Cu;
            // 0x23a070: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a06c) {
            ctx->pc = 0x23A0B0u;
            goto label_23a0b0;
        }
    }
    ctx->pc = 0x23A074u;
label_23a074:
    // 0x23a074: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_23a078:
    if (ctx->pc == 0x23A078u) {
        ctx->pc = 0x23A078u;
            // 0x23a078: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x23A07Cu;
        goto label_23a07c;
    }
    ctx->pc = 0x23A074u;
    {
        const bool branch_taken_0x23a074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23A078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A074u;
            // 0x23a078: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a074) {
            ctx->pc = 0x23A094u;
            goto label_23a094;
        }
    }
    ctx->pc = 0x23A07Cu;
label_23a07c:
    // 0x23a07c: 0x8c99010c  lw          $t9, 0x10C($a0)
    ctx->pc = 0x23a07cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
label_23a080:
    // 0x23a080: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x23a080u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_23a084:
    // 0x23a084: 0x320f809  jalr        $t9
label_23a088:
    if (ctx->pc == 0x23A088u) {
        ctx->pc = 0x23A08Cu;
        goto label_23a08c;
    }
    ctx->pc = 0x23A084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23A08Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x23A08Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23A08Cu; }
            if (ctx->pc != 0x23A08Cu) { return; }
        }
        }
    }
    ctx->pc = 0x23A08Cu;
label_23a08c:
    // 0x23a08c: 0x10000008  b           . + 4 + (0x8 << 2)
label_23a090:
    if (ctx->pc == 0x23A090u) {
        ctx->pc = 0x23A090u;
            // 0x23a090: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23A094u;
        goto label_23a094;
    }
    ctx->pc = 0x23A08Cu;
    {
        const bool branch_taken_0x23a08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23A090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A08Cu;
            // 0x23a090: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23a08c) {
            ctx->pc = 0x23A0B0u;
            goto label_23a0b0;
        }
    }
    ctx->pc = 0x23A094u;
label_23a094:
    // 0x23a094: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_23a098:
    if (ctx->pc == 0x23A098u) {
        ctx->pc = 0x23A09Cu;
        goto label_23a09c;
    }
    ctx->pc = 0x23A094u;
    {
        const bool branch_taken_0x23a094 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23a094) {
            ctx->pc = 0x23A0B0u;
            goto label_23a0b0;
        }
    }
    ctx->pc = 0x23A09Cu;
label_23a09c:
    // 0x23a09c: 0x8c99010c  lw          $t9, 0x10C($a0)
    ctx->pc = 0x23a09cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
label_23a0a0:
    // 0x23a0a0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x23a0a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_23a0a4:
    // 0x23a0a4: 0x320f809  jalr        $t9
label_23a0a8:
    if (ctx->pc == 0x23A0A8u) {
        ctx->pc = 0x23A0ACu;
        goto label_23a0ac;
    }
    ctx->pc = 0x23A0A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x23A0ACu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x23A0ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x23A0ACu; }
            if (ctx->pc != 0x23A0ACu) { return; }
        }
        }
    }
    ctx->pc = 0x23A0ACu;
label_23a0ac:
    // 0x23a0ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23a0acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23a0b0:
    // 0x23a0b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x23a0b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23a0b4:
    // 0x23a0b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x23a0b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23a0b8:
    // 0x23a0b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x23a0b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_23a0bc:
    // 0x23a0bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x23a0bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_23a0c0:
    // 0x23a0c0: 0x3e00008  jr          $ra
label_23a0c4:
    if (ctx->pc == 0x23A0C4u) {
        ctx->pc = 0x23A0C4u;
            // 0x23a0c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x23A0C8u;
        goto label_fallthrough_0x23a0c0;
    }
    ctx->pc = 0x23A0C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x23A0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23A0C0u;
            // 0x23a0c4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x23a0c0:
    ctx->pc = 0x23A0C8u;
}
