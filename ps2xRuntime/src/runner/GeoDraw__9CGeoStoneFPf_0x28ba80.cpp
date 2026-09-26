#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GeoDraw__9CGeoStoneFPf
// Address: 0x28ba80 - 0x28bb68
void GeoDraw__9CGeoStoneFPf_0x28ba80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GeoDraw__9CGeoStoneFPf_0x28ba80");
#endif

    switch (ctx->pc) {
        case 0x28ba80u: goto label_28ba80;
        case 0x28ba84u: goto label_28ba84;
        case 0x28ba88u: goto label_28ba88;
        case 0x28ba8cu: goto label_28ba8c;
        case 0x28ba90u: goto label_28ba90;
        case 0x28ba94u: goto label_28ba94;
        case 0x28ba98u: goto label_28ba98;
        case 0x28ba9cu: goto label_28ba9c;
        case 0x28baa0u: goto label_28baa0;
        case 0x28baa4u: goto label_28baa4;
        case 0x28baa8u: goto label_28baa8;
        case 0x28baacu: goto label_28baac;
        case 0x28bab0u: goto label_28bab0;
        case 0x28bab4u: goto label_28bab4;
        case 0x28bab8u: goto label_28bab8;
        case 0x28babcu: goto label_28babc;
        case 0x28bac0u: goto label_28bac0;
        case 0x28bac4u: goto label_28bac4;
        case 0x28bac8u: goto label_28bac8;
        case 0x28baccu: goto label_28bacc;
        case 0x28bad0u: goto label_28bad0;
        case 0x28bad4u: goto label_28bad4;
        case 0x28bad8u: goto label_28bad8;
        case 0x28badcu: goto label_28badc;
        case 0x28bae0u: goto label_28bae0;
        case 0x28bae4u: goto label_28bae4;
        case 0x28bae8u: goto label_28bae8;
        case 0x28baecu: goto label_28baec;
        case 0x28baf0u: goto label_28baf0;
        case 0x28baf4u: goto label_28baf4;
        case 0x28baf8u: goto label_28baf8;
        case 0x28bafcu: goto label_28bafc;
        case 0x28bb00u: goto label_28bb00;
        case 0x28bb04u: goto label_28bb04;
        case 0x28bb08u: goto label_28bb08;
        case 0x28bb0cu: goto label_28bb0c;
        case 0x28bb10u: goto label_28bb10;
        case 0x28bb14u: goto label_28bb14;
        case 0x28bb18u: goto label_28bb18;
        case 0x28bb1cu: goto label_28bb1c;
        case 0x28bb20u: goto label_28bb20;
        case 0x28bb24u: goto label_28bb24;
        case 0x28bb28u: goto label_28bb28;
        case 0x28bb2cu: goto label_28bb2c;
        case 0x28bb30u: goto label_28bb30;
        case 0x28bb34u: goto label_28bb34;
        case 0x28bb38u: goto label_28bb38;
        case 0x28bb3cu: goto label_28bb3c;
        case 0x28bb40u: goto label_28bb40;
        case 0x28bb44u: goto label_28bb44;
        case 0x28bb48u: goto label_28bb48;
        case 0x28bb4cu: goto label_28bb4c;
        case 0x28bb50u: goto label_28bb50;
        case 0x28bb54u: goto label_28bb54;
        case 0x28bb58u: goto label_28bb58;
        case 0x28bb5cu: goto label_28bb5c;
        case 0x28bb60u: goto label_28bb60;
        case 0x28bb64u: goto label_28bb64;
        default: break;
    }

    ctx->pc = 0x28ba80u;

label_28ba80:
    // 0x28ba80: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x28ba80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_28ba84:
    // 0x28ba84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28ba84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_28ba88:
    // 0x28ba88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28ba88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_28ba8c:
    // 0x28ba8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28ba8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_28ba90:
    // 0x28ba90: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28ba90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28ba94:
    // 0x28ba94: 0x8c830660  lw          $v1, 0x660($a0)
    ctx->pc = 0x28ba94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1632)));
label_28ba98:
    // 0x28ba98: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
label_28ba9c:
    if (ctx->pc == 0x28BA9Cu) {
        ctx->pc = 0x28BA9Cu;
            // 0x28ba9c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28BAA0u;
        goto label_28baa0;
    }
    ctx->pc = 0x28BA98u;
    {
        const bool branch_taken_0x28ba98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BA98u;
            // 0x28ba9c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ba98) {
            ctx->pc = 0x28BB54u;
            goto label_28bb54;
        }
    }
    ctx->pc = 0x28BAA0u;
label_28baa0:
    // 0x28baa0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x28baa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28baa4:
    // 0x28baa4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x28baa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_28baa8:
    // 0x28baa8: 0x320f809  jalr        $t9
label_28baac:
    if (ctx->pc == 0x28BAACu) {
        ctx->pc = 0x28BAACu;
            // 0x28baac: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x28BAB0u;
        goto label_28bab0;
    }
    ctx->pc = 0x28BAA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28BAB0u);
        ctx->pc = 0x28BAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BAA8u;
            // 0x28baac: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28BAB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28BAB0u; }
            if (ctx->pc != 0x28BAB0u) { return; }
        }
        }
    }
    ctx->pc = 0x28BAB0u;
label_28bab0:
    // 0x28bab0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x28bab0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28bab4:
    // 0x28bab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28bab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28bab8:
    // 0x28bab8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x28bab8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_28babc:
    // 0x28babc: 0x320f809  jalr        $t9
label_28bac0:
    if (ctx->pc == 0x28BAC0u) {
        ctx->pc = 0x28BAC0u;
            // 0x28bac0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x28BAC4u;
        goto label_28bac4;
    }
    ctx->pc = 0x28BABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28BAC4u);
        ctx->pc = 0x28BAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BABCu;
            // 0x28bac0: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28BAC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28BAC4u; }
            if (ctx->pc != 0x28BAC4u) { return; }
        }
        }
    }
    ctx->pc = 0x28BAC4u;
label_28bac4:
    // 0x28bac4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28bac4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28bac8:
    // 0x28bac8: 0xc04c018  jal         func_130060
label_28bacc:
    if (ctx->pc == 0x28BACCu) {
        ctx->pc = 0x28BACCu;
            // 0x28bacc: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x28BAD0u;
        goto label_28bad0;
    }
    ctx->pc = 0x28BAC8u;
    SET_GPR_U32(ctx, 31, 0x28BAD0u);
    ctx->pc = 0x28BACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28BAC8u;
            // 0x28bacc: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BAD0u; }
        if (ctx->pc != 0x28BAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BAD0u; }
        if (ctx->pc != 0x28BAD0u) { return; }
    }
    ctx->pc = 0x28BAD0u;
label_28bad0:
    // 0x28bad0: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x28bad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_28bad4:
    // 0x28bad4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28bad4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28bad8:
    // 0x28bad8: 0x0  nop
    ctx->pc = 0x28bad8u;
    // NOP
label_28badc:
    // 0x28badc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x28badcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28bae0:
    // 0x28bae0: 0x0  nop
    ctx->pc = 0x28bae0u;
    // NOP
label_28bae4:
    // 0x28bae4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_28bae8:
    if (ctx->pc == 0x28BAE8u) {
        ctx->pc = 0x28BAECu;
        goto label_28baec;
    }
    ctx->pc = 0x28BAE4u;
    {
        const bool branch_taken_0x28bae4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28bae4) {
            ctx->pc = 0x28BAF8u;
            goto label_28baf8;
        }
    }
    ctx->pc = 0x28BAECu;
label_28baec:
    // 0x28baec: 0x8e020668  lw          $v0, 0x668($s0)
    ctx->pc = 0x28baecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1640)));
label_28baf0:
    // 0x28baf0: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
label_28baf4:
    if (ctx->pc == 0x28BAF4u) {
        ctx->pc = 0x28BAF8u;
        goto label_28baf8;
    }
    ctx->pc = 0x28BAF0u;
    {
        const bool branch_taken_0x28baf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28baf0) {
            ctx->pc = 0x28BB40u;
            goto label_28bb40;
        }
    }
    ctx->pc = 0x28BAF8u;
label_28baf8:
    // 0x28baf8: 0x8e020668  lw          $v0, 0x668($s0)
    ctx->pc = 0x28baf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1640)));
label_28bafc:
    // 0x28bafc: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_28bb00:
    if (ctx->pc == 0x28BB00u) {
        ctx->pc = 0x28BB04u;
        goto label_28bb04;
    }
    ctx->pc = 0x28BAFCu;
    {
        const bool branch_taken_0x28bafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28bafc) {
            ctx->pc = 0x28BB24u;
            goto label_28bb24;
        }
    }
    ctx->pc = 0x28BB04u;
label_28bb04:
    // 0x28bb04: 0xc047a42  jal         func_11E908
label_28bb08:
    if (ctx->pc == 0x28BB08u) {
        ctx->pc = 0x28BB08u;
            // 0x28bb08: 0xc60c0664  lwc1        $f12, 0x664($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x28BB0Cu;
        goto label_28bb0c;
    }
    ctx->pc = 0x28BB04u;
    SET_GPR_U32(ctx, 31, 0x28BB0Cu);
    ctx->pc = 0x28BB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28BB04u;
            // 0x28bb08: 0xc60c0664  lwc1        $f12, 0x664($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1636)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BB0Cu; }
        if (ctx->pc != 0x28BB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BB0Cu; }
        if (ctx->pc != 0x28BB0Cu) { return; }
    }
    ctx->pc = 0x28BB0Cu;
label_28bb0c:
    // 0x28bb0c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x28bb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_28bb10:
    // 0x28bb10: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x28bb10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_28bb14:
    // 0x28bb14: 0xc7a10044  lwc1        $f1, 0x44($sp)
    ctx->pc = 0x28bb14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28bb18:
    // 0x28bb18: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x28bb18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_28bb1c:
    // 0x28bb1c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28bb1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28bb20:
    // 0x28bb20: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x28bb20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_28bb24:
    // 0x28bb24: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x28bb24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28bb28:
    // 0x28bb28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28bb28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28bb2c:
    // 0x28bb2c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x28bb2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_28bb30:
    // 0x28bb30: 0x320f809  jalr        $t9
label_28bb34:
    if (ctx->pc == 0x28BB34u) {
        ctx->pc = 0x28BB34u;
            // 0x28bb34: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x28BB38u;
        goto label_28bb38;
    }
    ctx->pc = 0x28BB30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28BB38u);
        ctx->pc = 0x28BB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BB30u;
            // 0x28bb34: 0x27a50040  addiu       $a1, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28BB38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28BB38u; }
            if (ctx->pc != 0x28BB38u) { return; }
        }
        }
    }
    ctx->pc = 0x28BB38u;
label_28bb38:
    // 0x28bb38: 0xc05cc7c  jal         func_1731F0
label_28bb3c:
    if (ctx->pc == 0x28BB3Cu) {
        ctx->pc = 0x28BB3Cu;
            // 0x28bb3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28BB40u;
        goto label_28bb40;
    }
    ctx->pc = 0x28BB38u;
    SET_GPR_U32(ctx, 31, 0x28BB40u);
    ctx->pc = 0x28BB3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28BB38u;
            // 0x28bb3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1731F0u;
    if (runtime->hasFunction(0x1731F0u)) {
        auto targetFn = runtime->lookupFunction(0x1731F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BB40u; }
        if (ctx->pc != 0x28BB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__11CCharacter2Fv_0x1731f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BB40u; }
        if (ctx->pc != 0x28BB40u) { return; }
    }
    ctx->pc = 0x28BB40u;
label_28bb40:
    // 0x28bb40: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x28bb40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_28bb44:
    // 0x28bb44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28bb44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28bb48:
    // 0x28bb48: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x28bb48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_28bb4c:
    // 0x28bb4c: 0x320f809  jalr        $t9
label_28bb50:
    if (ctx->pc == 0x28BB50u) {
        ctx->pc = 0x28BB50u;
            // 0x28bb50: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x28BB54u;
        goto label_28bb54;
    }
    ctx->pc = 0x28BB4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28BB54u);
        ctx->pc = 0x28BB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BB4Cu;
            // 0x28bb50: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28BB54u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28BB54u; }
            if (ctx->pc != 0x28BB54u) { return; }
        }
        }
    }
    ctx->pc = 0x28BB54u;
label_28bb54:
    // 0x28bb54: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28bb54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_28bb58:
    // 0x28bb58: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28bb58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28bb5c:
    // 0x28bb5c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28bb5cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_28bb60:
    // 0x28bb60: 0x3e00008  jr          $ra
label_28bb64:
    if (ctx->pc == 0x28BB64u) {
        ctx->pc = 0x28BB64u;
            // 0x28bb64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x28BB68u;
        goto label_fallthrough_0x28bb60;
    }
    ctx->pc = 0x28BB60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BB60u;
            // 0x28bb64: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x28bb60:
    ctx->pc = 0x28BB68u;
}
