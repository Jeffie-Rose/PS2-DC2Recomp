#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PickupCollision__7CSphidaFPfP6CCPoly9mgVu0FBOXi
// Address: 0x2ebca0 - 0x2ebd64
void PickupCollision__7CSphidaFPfP6CCPoly9mgVu0FBOXi_0x2ebca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PickupCollision__7CSphidaFPfP6CCPoly9mgVu0FBOXi_0x2ebca0");
#endif

    switch (ctx->pc) {
        case 0x2ebca0u: goto label_2ebca0;
        case 0x2ebca4u: goto label_2ebca4;
        case 0x2ebca8u: goto label_2ebca8;
        case 0x2ebcacu: goto label_2ebcac;
        case 0x2ebcb0u: goto label_2ebcb0;
        case 0x2ebcb4u: goto label_2ebcb4;
        case 0x2ebcb8u: goto label_2ebcb8;
        case 0x2ebcbcu: goto label_2ebcbc;
        case 0x2ebcc0u: goto label_2ebcc0;
        case 0x2ebcc4u: goto label_2ebcc4;
        case 0x2ebcc8u: goto label_2ebcc8;
        case 0x2ebcccu: goto label_2ebccc;
        case 0x2ebcd0u: goto label_2ebcd0;
        case 0x2ebcd4u: goto label_2ebcd4;
        case 0x2ebcd8u: goto label_2ebcd8;
        case 0x2ebcdcu: goto label_2ebcdc;
        case 0x2ebce0u: goto label_2ebce0;
        case 0x2ebce4u: goto label_2ebce4;
        case 0x2ebce8u: goto label_2ebce8;
        case 0x2ebcecu: goto label_2ebcec;
        case 0x2ebcf0u: goto label_2ebcf0;
        case 0x2ebcf4u: goto label_2ebcf4;
        case 0x2ebcf8u: goto label_2ebcf8;
        case 0x2ebcfcu: goto label_2ebcfc;
        case 0x2ebd00u: goto label_2ebd00;
        case 0x2ebd04u: goto label_2ebd04;
        case 0x2ebd08u: goto label_2ebd08;
        case 0x2ebd0cu: goto label_2ebd0c;
        case 0x2ebd10u: goto label_2ebd10;
        case 0x2ebd14u: goto label_2ebd14;
        case 0x2ebd18u: goto label_2ebd18;
        case 0x2ebd1cu: goto label_2ebd1c;
        case 0x2ebd20u: goto label_2ebd20;
        case 0x2ebd24u: goto label_2ebd24;
        case 0x2ebd28u: goto label_2ebd28;
        case 0x2ebd2cu: goto label_2ebd2c;
        case 0x2ebd30u: goto label_2ebd30;
        case 0x2ebd34u: goto label_2ebd34;
        case 0x2ebd38u: goto label_2ebd38;
        case 0x2ebd3cu: goto label_2ebd3c;
        case 0x2ebd40u: goto label_2ebd40;
        case 0x2ebd44u: goto label_2ebd44;
        case 0x2ebd48u: goto label_2ebd48;
        case 0x2ebd4cu: goto label_2ebd4c;
        case 0x2ebd50u: goto label_2ebd50;
        case 0x2ebd54u: goto label_2ebd54;
        case 0x2ebd58u: goto label_2ebd58;
        case 0x2ebd5cu: goto label_2ebd5c;
        case 0x2ebd60u: goto label_2ebd60;
        default: break;
    }

    ctx->pc = 0x2ebca0u;

label_2ebca0:
    // 0x2ebca0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2ebca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2ebca4:
    // 0x2ebca4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2ebca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2ebca8:
    // 0x2ebca8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ebca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2ebcac:
    // 0x2ebcac: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ebcacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2ebcb0:
    // 0x2ebcb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ebcb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2ebcb4:
    // 0x2ebcb4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2ebcb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ebcb8:
    // 0x2ebcb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ebcb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2ebcbc:
    // 0x2ebcbc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2ebcbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2ebcc0:
    // 0x2ebcc0: 0x78e30000  lq          $v1, 0x0($a3)
    ctx->pc = 0x2ebcc0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_2ebcc4:
    // 0x2ebcc4: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x2ebcc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_2ebcc8:
    // 0x2ebcc8: 0x78e20010  lq          $v0, 0x10($a3)
    ctx->pc = 0x2ebcc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 16)));
label_2ebccc:
    // 0x2ebccc: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x2ebcccu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
label_2ebcd0:
    // 0x2ebcd0: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x2ebcd0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
label_2ebcd4:
    // 0x2ebcd4: 0x8c820028  lw          $v0, 0x28($a0)
    ctx->pc = 0x2ebcd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_2ebcd8:
    // 0x2ebcd8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2ebcdc:
    if (ctx->pc == 0x2EBCDCu) {
        ctx->pc = 0x2EBCDCu;
            // 0x2ebcdc: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EBCE0u;
        goto label_2ebce0;
    }
    ctx->pc = 0x2EBCD8u;
    {
        const bool branch_taken_0x2ebcd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBCDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBCD8u;
            // 0x2ebcdc: 0x100802d  daddu       $s0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebcd8) {
            ctx->pc = 0x2EBCECu;
            goto label_2ebcec;
        }
    }
    ctx->pc = 0x2EBCE0u;
label_2ebce0:
    // 0x2ebce0: 0x8e420208  lw          $v0, 0x208($s2)
    ctx->pc = 0x2ebce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 520)));
label_2ebce4:
    // 0x2ebce4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2ebce8:
    if (ctx->pc == 0x2EBCE8u) {
        ctx->pc = 0x2EBCE8u;
            // 0x2ebce8: 0x26440090  addiu       $a0, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->pc = 0x2EBCECu;
        goto label_2ebcec;
    }
    ctx->pc = 0x2EBCE4u;
    {
        const bool branch_taken_0x2ebce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2EBCE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBCE4u;
            // 0x2ebce8: 0x26440090  addiu       $a0, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebce4) {
            ctx->pc = 0x2EBCF4u;
            goto label_2ebcf4;
        }
    }
    ctx->pc = 0x2EBCECu;
label_2ebcec:
    // 0x2ebcec: 0x10000016  b           . + 4 + (0x16 << 2)
label_2ebcf0:
    if (ctx->pc == 0x2EBCF0u) {
        ctx->pc = 0x2EBCF0u;
            // 0x2ebcf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EBCF4u;
        goto label_2ebcf4;
    }
    ctx->pc = 0x2EBCECu;
    {
        const bool branch_taken_0x2ebcec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EBCF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBCECu;
            // 0x2ebcf0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebcec) {
            ctx->pc = 0x2EBD48u;
            goto label_2ebd48;
        }
    }
    ctx->pc = 0x2EBCF4u;
label_2ebcf4:
    // 0x2ebcf4: 0xc04c018  jal         func_130060
label_2ebcf8:
    if (ctx->pc == 0x2EBCF8u) {
        ctx->pc = 0x2EBCF8u;
            // 0x2ebcf8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EBCFCu;
        goto label_2ebcfc;
    }
    ctx->pc = 0x2EBCF4u;
    SET_GPR_U32(ctx, 31, 0x2EBCFCu);
    ctx->pc = 0x2EBCF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBCF4u;
            // 0x2ebcf8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBCFCu; }
        if (ctx->pc != 0x2EBCFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBCFCu; }
        if (ctx->pc != 0x2EBCFCu) { return; }
    }
    ctx->pc = 0x2EBCFCu;
label_2ebcfc:
    // 0x2ebcfc: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x2ebcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
label_2ebd00:
    // 0x2ebd00: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ebd00u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ebd04:
    // 0x2ebd04: 0x0  nop
    ctx->pc = 0x2ebd04u;
    // NOP
label_2ebd08:
    // 0x2ebd08: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ebd08u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ebd0c:
    // 0x2ebd0c: 0x0  nop
    ctx->pc = 0x2ebd0cu;
    // NOP
label_2ebd10:
    // 0x2ebd10: 0x4500000d  bc1f        . + 4 + (0xD << 2)
label_2ebd14:
    if (ctx->pc == 0x2EBD14u) {
        ctx->pc = 0x2EBD14u;
            // 0x2ebd14: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2EBD18u;
        goto label_2ebd18;
    }
    ctx->pc = 0x2EBD10u;
    {
        const bool branch_taken_0x2ebd10 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2EBD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBD10u;
            // 0x2ebd14: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ebd10) {
            ctx->pc = 0x2EBD48u;
            goto label_2ebd48;
        }
    }
    ctx->pc = 0x2EBD18u;
label_2ebd18:
    // 0x2ebd18: 0x8e440208  lw          $a0, 0x208($s2)
    ctx->pc = 0x2ebd18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 520)));
label_2ebd1c:
    // 0x2ebd1c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2ebd1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2ebd20:
    // 0x2ebd20: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2ebd20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2ebd24:
    // 0x2ebd24: 0x320f809  jalr        $t9
label_2ebd28:
    if (ctx->pc == 0x2EBD28u) {
        ctx->pc = 0x2EBD28u;
            // 0x2ebd28: 0x26450090  addiu       $a1, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->pc = 0x2EBD2Cu;
        goto label_2ebd2c;
    }
    ctx->pc = 0x2EBD24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2EBD2Cu);
        ctx->pc = 0x2EBD28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBD24u;
            // 0x2ebd28: 0x26450090  addiu       $a1, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2EBD2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2EBD2Cu; }
            if (ctx->pc != 0x2EBD2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2EBD2Cu;
label_2ebd2c:
    // 0x2ebd2c: 0x8e440208  lw          $a0, 0x208($s2)
    ctx->pc = 0x2ebd2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 520)));
label_2ebd30:
    // 0x2ebd30: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ebd30u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ebd34:
    // 0x2ebd34: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2ebd34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ebd38:
    // 0x2ebd38: 0xc051ef4  jal         func_147BD0
label_2ebd3c:
    if (ctx->pc == 0x2EBD3Cu) {
        ctx->pc = 0x2EBD3Cu;
            // 0x2ebd3c: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2EBD40u;
        goto label_2ebd40;
    }
    ctx->pc = 0x2EBD38u;
    SET_GPR_U32(ctx, 31, 0x2EBD40u);
    ctx->pc = 0x2EBD3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBD38u;
            // 0x2ebd3c: 0x27a60050  addiu       $a2, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x147BD0u;
    if (runtime->hasFunction(0x147BD0u)) {
        auto targetFn = runtime->lookupFunction(0x147BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBD40u; }
        if (ctx->pc != 0x2EBD40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PickUpNearPoly__9CColFrameFP6CCPolyRC9mgVu0FBOXi_0x147bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2EBD40u; }
        if (ctx->pc != 0x2EBD40u) { return; }
    }
    ctx->pc = 0x2EBD40u;
label_2ebd40:
    // 0x2ebd40: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x2ebd40u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2ebd44:
    // 0x2ebd44: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2ebd44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ebd48:
    // 0x2ebd48: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2ebd48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2ebd4c:
    // 0x2ebd4c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2ebd4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ebd50:
    // 0x2ebd50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2ebd50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ebd54:
    // 0x2ebd54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ebd54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ebd58:
    // 0x2ebd58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ebd58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2ebd5c:
    // 0x2ebd5c: 0x3e00008  jr          $ra
label_2ebd60:
    if (ctx->pc == 0x2EBD60u) {
        ctx->pc = 0x2EBD60u;
            // 0x2ebd60: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2EBD64u;
        goto label_fallthrough_0x2ebd5c;
    }
    ctx->pc = 0x2EBD5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EBD60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2EBD5Cu;
            // 0x2ebd60: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2ebd5c:
    ctx->pc = 0x2EBD64u;
}
