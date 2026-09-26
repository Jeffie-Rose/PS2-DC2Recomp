#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckEvent__19CTreasureBoxManagerFPff
// Address: 0x28cac0 - 0x28cba0
void CheckEvent__19CTreasureBoxManagerFPff_0x28cac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckEvent__19CTreasureBoxManagerFPff_0x28cac0");
#endif

    switch (ctx->pc) {
        case 0x28cac0u: goto label_28cac0;
        case 0x28cac4u: goto label_28cac4;
        case 0x28cac8u: goto label_28cac8;
        case 0x28caccu: goto label_28cacc;
        case 0x28cad0u: goto label_28cad0;
        case 0x28cad4u: goto label_28cad4;
        case 0x28cad8u: goto label_28cad8;
        case 0x28cadcu: goto label_28cadc;
        case 0x28cae0u: goto label_28cae0;
        case 0x28cae4u: goto label_28cae4;
        case 0x28cae8u: goto label_28cae8;
        case 0x28caecu: goto label_28caec;
        case 0x28caf0u: goto label_28caf0;
        case 0x28caf4u: goto label_28caf4;
        case 0x28caf8u: goto label_28caf8;
        case 0x28cafcu: goto label_28cafc;
        case 0x28cb00u: goto label_28cb00;
        case 0x28cb04u: goto label_28cb04;
        case 0x28cb08u: goto label_28cb08;
        case 0x28cb0cu: goto label_28cb0c;
        case 0x28cb10u: goto label_28cb10;
        case 0x28cb14u: goto label_28cb14;
        case 0x28cb18u: goto label_28cb18;
        case 0x28cb1cu: goto label_28cb1c;
        case 0x28cb20u: goto label_28cb20;
        case 0x28cb24u: goto label_28cb24;
        case 0x28cb28u: goto label_28cb28;
        case 0x28cb2cu: goto label_28cb2c;
        case 0x28cb30u: goto label_28cb30;
        case 0x28cb34u: goto label_28cb34;
        case 0x28cb38u: goto label_28cb38;
        case 0x28cb3cu: goto label_28cb3c;
        case 0x28cb40u: goto label_28cb40;
        case 0x28cb44u: goto label_28cb44;
        case 0x28cb48u: goto label_28cb48;
        case 0x28cb4cu: goto label_28cb4c;
        case 0x28cb50u: goto label_28cb50;
        case 0x28cb54u: goto label_28cb54;
        case 0x28cb58u: goto label_28cb58;
        case 0x28cb5cu: goto label_28cb5c;
        case 0x28cb60u: goto label_28cb60;
        case 0x28cb64u: goto label_28cb64;
        case 0x28cb68u: goto label_28cb68;
        case 0x28cb6cu: goto label_28cb6c;
        case 0x28cb70u: goto label_28cb70;
        case 0x28cb74u: goto label_28cb74;
        case 0x28cb78u: goto label_28cb78;
        case 0x28cb7cu: goto label_28cb7c;
        case 0x28cb80u: goto label_28cb80;
        case 0x28cb84u: goto label_28cb84;
        case 0x28cb88u: goto label_28cb88;
        case 0x28cb8cu: goto label_28cb8c;
        case 0x28cb90u: goto label_28cb90;
        case 0x28cb94u: goto label_28cb94;
        case 0x28cb98u: goto label_28cb98;
        case 0x28cb9cu: goto label_28cb9c;
        default: break;
    }

    ctx->pc = 0x28cac0u;

label_28cac0:
    // 0x28cac0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x28cac0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_28cac4:
    // 0x28cac4: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x28cac4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
label_28cac8:
    // 0x28cac8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x28cac8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_28cacc:
    // 0x28cacc: 0x34423c00  ori         $v0, $v0, 0x3C00
    ctx->pc = 0x28caccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)15360);
label_28cad0:
    // 0x28cad0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x28cad0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_28cad4:
    // 0x28cad4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x28cad4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28cad8:
    // 0x28cad8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x28cad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_28cadc:
    // 0x28cadc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x28cadcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28cae0:
    // 0x28cae0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28cae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_28cae4:
    // 0x28cae4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x28cae4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28cae8:
    // 0x28cae8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28cae8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_28caec:
    // 0x28caec: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28caecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28caf0:
    // 0x28caf0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x28caf0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_28caf4:
    // 0x28caf4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28caf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28caf8:
    // 0x28caf8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x28caf8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_28cafc:
    // 0x28cafc: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x28cafcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_28cb00:
    // 0x28cb00: 0xac830a9c  sw          $v1, 0xA9C($a0)
    ctx->pc = 0x28cb00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 2716), GPR_U32(ctx, 3));
label_28cb04:
    // 0x28cb04: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x28cb04u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_28cb08:
    // 0x28cb08: 0x2711821  addu        $v1, $s3, $s1
    ctx->pc = 0x28cb08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_28cb0c:
    // 0x28cb0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28cb0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28cb10:
    // 0x28cb10: 0x24640010  addiu       $a0, $v1, 0x10
    ctx->pc = 0x28cb10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_28cb14:
    // 0x28cb14: 0x80630064  lb          $v1, 0x64($v1)
    ctx->pc = 0x28cb14u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 100)));
label_28cb18:
    // 0x28cb18: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_28cb1c:
    if (ctx->pc == 0x28CB1Cu) {
        ctx->pc = 0x28CB20u;
        goto label_28cb20;
    }
    ctx->pc = 0x28CB18u;
    {
        const bool branch_taken_0x28cb18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x28cb18) {
            ctx->pc = 0x28CB64u;
            goto label_28cb64;
        }
    }
    ctx->pc = 0x28CB20u;
label_28cb20:
    // 0x28cb20: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x28cb20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28cb24:
    // 0x28cb24: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x28cb24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_28cb28:
    // 0x28cb28: 0x320f809  jalr        $t9
label_28cb2c:
    if (ctx->pc == 0x28CB2Cu) {
        ctx->pc = 0x28CB2Cu;
            // 0x28cb2c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x28CB30u;
        goto label_28cb30;
    }
    ctx->pc = 0x28CB28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28CB30u);
        ctx->pc = 0x28CB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CB28u;
            // 0x28cb2c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28CB30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28CB30u; }
            if (ctx->pc != 0x28CB30u) { return; }
        }
        }
    }
    ctx->pc = 0x28CB30u;
label_28cb30:
    // 0x28cb30: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x28cb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_28cb34:
    // 0x28cb34: 0xc04c018  jal         func_130060
label_28cb38:
    if (ctx->pc == 0x28CB38u) {
        ctx->pc = 0x28CB38u;
            // 0x28cb38: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28CB3Cu;
        goto label_28cb3c;
    }
    ctx->pc = 0x28CB34u;
    SET_GPR_U32(ctx, 31, 0x28CB3Cu);
    ctx->pc = 0x28CB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CB34u;
            // 0x28cb38: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CB3Cu; }
        if (ctx->pc != 0x28CB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CB3Cu; }
        if (ctx->pc != 0x28CB3Cu) { return; }
    }
    ctx->pc = 0x28CB3Cu;
label_28cb3c:
    // 0x28cb3c: 0x46150034  c.lt.s      $f0, $f21
    ctx->pc = 0x28cb3cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28cb40:
    // 0x28cb40: 0x0  nop
    ctx->pc = 0x28cb40u;
    // NOP
label_28cb44:
    // 0x28cb44: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_28cb48:
    if (ctx->pc == 0x28CB48u) {
        ctx->pc = 0x28CB4Cu;
        goto label_28cb4c;
    }
    ctx->pc = 0x28CB44u;
    {
        const bool branch_taken_0x28cb44 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x28cb44) {
            ctx->pc = 0x28CB64u;
            goto label_28cb64;
        }
    }
    ctx->pc = 0x28CB4Cu;
label_28cb4c:
    // 0x28cb4c: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x28cb4cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28cb50:
    // 0x28cb50: 0x0  nop
    ctx->pc = 0x28cb50u;
    // NOP
label_28cb54:
    // 0x28cb54: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_28cb58:
    if (ctx->pc == 0x28CB58u) {
        ctx->pc = 0x28CB5Cu;
        goto label_28cb5c;
    }
    ctx->pc = 0x28CB54u;
    {
        const bool branch_taken_0x28cb54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28cb54) {
            ctx->pc = 0x28CB64u;
            goto label_28cb64;
        }
    }
    ctx->pc = 0x28CB5Cu;
label_28cb5c:
    // 0x28cb5c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x28cb5cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_28cb60:
    // 0x28cb60: 0xae700a9c  sw          $s0, 0xA9C($s3)
    ctx->pc = 0x28cb60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 2716), GPR_U32(ctx, 16));
label_28cb64:
    // 0x28cb64: 0x0  nop
    ctx->pc = 0x28cb64u;
    // NOP
label_28cb68:
    // 0x28cb68: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28cb68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28cb6c:
    // 0x28cb6c: 0x2a020018  slti        $v0, $s0, 0x18
    ctx->pc = 0x28cb6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
label_28cb70:
    // 0x28cb70: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_28cb74:
    if (ctx->pc == 0x28CB74u) {
        ctx->pc = 0x28CB74u;
            // 0x28cb74: 0x26310070  addiu       $s1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->pc = 0x28CB78u;
        goto label_28cb78;
    }
    ctx->pc = 0x28CB70u;
    {
        const bool branch_taken_0x28cb70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28CB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CB70u;
            // 0x28cb74: 0x26310070  addiu       $s1, $s1, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cb70) {
            ctx->pc = 0x28CB08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28cb08;
        }
    }
    ctx->pc = 0x28CB78u;
label_28cb78:
    // 0x28cb78: 0x8e620a9c  lw          $v0, 0xA9C($s3)
    ctx->pc = 0x28cb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 2716)));
label_28cb7c:
    // 0x28cb7c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x28cb7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_28cb80:
    // 0x28cb80: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28cb80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_28cb84:
    // 0x28cb84: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x28cb84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_28cb88:
    // 0x28cb88: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x28cb88u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28cb8c:
    // 0x28cb8c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28cb8cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28cb90:
    // 0x28cb90: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28cb90u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28cb94:
    // 0x28cb94: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x28cb94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28cb98:
    // 0x28cb98: 0x3e00008  jr          $ra
label_28cb9c:
    if (ctx->pc == 0x28CB9Cu) {
        ctx->pc = 0x28CB9Cu;
            // 0x28cb9c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x28CBA0u;
        goto label_fallthrough_0x28cb98;
    }
    ctx->pc = 0x28CB98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28CB9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CB98u;
            // 0x28cb9c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x28cb98:
    ctx->pc = 0x28CBA0u;
}
