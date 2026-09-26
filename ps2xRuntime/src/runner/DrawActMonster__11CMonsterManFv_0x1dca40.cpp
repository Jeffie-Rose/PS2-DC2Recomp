#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawActMonster__11CMonsterManFv
// Address: 0x1dca40 - 0x1dcb40
void DrawActMonster__11CMonsterManFv_0x1dca40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawActMonster__11CMonsterManFv_0x1dca40");
#endif

    switch (ctx->pc) {
        case 0x1dca40u: goto label_1dca40;
        case 0x1dca44u: goto label_1dca44;
        case 0x1dca48u: goto label_1dca48;
        case 0x1dca4cu: goto label_1dca4c;
        case 0x1dca50u: goto label_1dca50;
        case 0x1dca54u: goto label_1dca54;
        case 0x1dca58u: goto label_1dca58;
        case 0x1dca5cu: goto label_1dca5c;
        case 0x1dca60u: goto label_1dca60;
        case 0x1dca64u: goto label_1dca64;
        case 0x1dca68u: goto label_1dca68;
        case 0x1dca6cu: goto label_1dca6c;
        case 0x1dca70u: goto label_1dca70;
        case 0x1dca74u: goto label_1dca74;
        case 0x1dca78u: goto label_1dca78;
        case 0x1dca7cu: goto label_1dca7c;
        case 0x1dca80u: goto label_1dca80;
        case 0x1dca84u: goto label_1dca84;
        case 0x1dca88u: goto label_1dca88;
        case 0x1dca8cu: goto label_1dca8c;
        case 0x1dca90u: goto label_1dca90;
        case 0x1dca94u: goto label_1dca94;
        case 0x1dca98u: goto label_1dca98;
        case 0x1dca9cu: goto label_1dca9c;
        case 0x1dcaa0u: goto label_1dcaa0;
        case 0x1dcaa4u: goto label_1dcaa4;
        case 0x1dcaa8u: goto label_1dcaa8;
        case 0x1dcaacu: goto label_1dcaac;
        case 0x1dcab0u: goto label_1dcab0;
        case 0x1dcab4u: goto label_1dcab4;
        case 0x1dcab8u: goto label_1dcab8;
        case 0x1dcabcu: goto label_1dcabc;
        case 0x1dcac0u: goto label_1dcac0;
        case 0x1dcac4u: goto label_1dcac4;
        case 0x1dcac8u: goto label_1dcac8;
        case 0x1dcaccu: goto label_1dcacc;
        case 0x1dcad0u: goto label_1dcad0;
        case 0x1dcad4u: goto label_1dcad4;
        case 0x1dcad8u: goto label_1dcad8;
        case 0x1dcadcu: goto label_1dcadc;
        case 0x1dcae0u: goto label_1dcae0;
        case 0x1dcae4u: goto label_1dcae4;
        case 0x1dcae8u: goto label_1dcae8;
        case 0x1dcaecu: goto label_1dcaec;
        case 0x1dcaf0u: goto label_1dcaf0;
        case 0x1dcaf4u: goto label_1dcaf4;
        case 0x1dcaf8u: goto label_1dcaf8;
        case 0x1dcafcu: goto label_1dcafc;
        case 0x1dcb00u: goto label_1dcb00;
        case 0x1dcb04u: goto label_1dcb04;
        case 0x1dcb08u: goto label_1dcb08;
        case 0x1dcb0cu: goto label_1dcb0c;
        case 0x1dcb10u: goto label_1dcb10;
        case 0x1dcb14u: goto label_1dcb14;
        case 0x1dcb18u: goto label_1dcb18;
        case 0x1dcb1cu: goto label_1dcb1c;
        case 0x1dcb20u: goto label_1dcb20;
        case 0x1dcb24u: goto label_1dcb24;
        case 0x1dcb28u: goto label_1dcb28;
        case 0x1dcb2cu: goto label_1dcb2c;
        case 0x1dcb30u: goto label_1dcb30;
        case 0x1dcb34u: goto label_1dcb34;
        case 0x1dcb38u: goto label_1dcb38;
        case 0x1dcb3cu: goto label_1dcb3c;
        default: break;
    }

    ctx->pc = 0x1dca40u;

label_1dca40:
    // 0x1dca40: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1dca40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1dca44:
    // 0x1dca44: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1dca44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1dca48:
    // 0x1dca48: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1dca48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1dca4c:
    // 0x1dca4c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1dca4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1dca50:
    // 0x1dca50: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1dca50u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1dca54:
    // 0x1dca54: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1dca54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1dca58:
    // 0x1dca58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1dca58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1dca5c:
    // 0x1dca5c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1dca5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dca60:
    // 0x1dca60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1dca60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1dca64:
    // 0x1dca64: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1dca64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dca68:
    // 0x1dca68: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x1dca68u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
label_1dca6c:
    // 0x1dca6c: 0x26101ef0  addiu       $s0, $s0, 0x1EF0
    ctx->pc = 0x1dca6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
label_1dca70:
    // 0x1dca70: 0x2921821  addu        $v1, $s4, $s2
    ctx->pc = 0x1dca70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
label_1dca74:
    // 0x1dca74: 0x8c650484  lw          $a1, 0x484($v1)
    ctx->pc = 0x1dca74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1156)));
label_1dca78:
    // 0x1dca78: 0x10a00025  beqz        $a1, . + 4 + (0x25 << 2)
label_1dca7c:
    if (ctx->pc == 0x1DCA7Cu) {
        ctx->pc = 0x1DCA7Cu;
            // 0x1dca7c: 0x24730484  addiu       $s3, $v1, 0x484 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1156));
        ctx->pc = 0x1DCA80u;
        goto label_1dca80;
    }
    ctx->pc = 0x1DCA78u;
    {
        const bool branch_taken_0x1dca78 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DCA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCA78u;
            // 0x1dca7c: 0x24730484  addiu       $s3, $v1, 0x484 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 1156));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dca78) {
            ctx->pc = 0x1DCB10u;
            goto label_1dcb10;
        }
    }
    ctx->pc = 0x1DCA80u;
label_1dca80:
    // 0x1dca80: 0x84a4068a  lh          $a0, 0x68A($a1)
    ctx->pc = 0x1dca80u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 1674)));
label_1dca84:
    // 0x1dca84: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1dca84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dca88:
    // 0x1dca88: 0x14830021  bne         $a0, $v1, . + 4 + (0x21 << 2)
label_1dca8c:
    if (ctx->pc == 0x1DCA8Cu) {
        ctx->pc = 0x1DCA90u;
        goto label_1dca90;
    }
    ctx->pc = 0x1DCA88u;
    {
        const bool branch_taken_0x1dca88 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dca88) {
            ctx->pc = 0x1DCB10u;
            goto label_1dcb10;
        }
    }
    ctx->pc = 0x1DCA90u;
label_1dca90:
    // 0x1dca90: 0x84a412e4  lh          $a0, 0x12E4($a1)
    ctx->pc = 0x1dca90u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4836)));
label_1dca94:
    // 0x1dca94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dca94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dca98:
    // 0x1dca98: 0x1083001d  beq         $a0, $v1, . + 4 + (0x1D << 2)
label_1dca9c:
    if (ctx->pc == 0x1DCA9Cu) {
        ctx->pc = 0x1DCAA0u;
        goto label_1dcaa0;
    }
    ctx->pc = 0x1DCA98u;
    {
        const bool branch_taken_0x1dca98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1dca98) {
            ctx->pc = 0x1DCB10u;
            goto label_1dcb10;
        }
    }
    ctx->pc = 0x1DCAA0u;
label_1dcaa0:
    // 0x1dcaa0: 0xc4a00100  lwc1        $f0, 0x100($a1)
    ctx->pc = 0x1dcaa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dcaa4:
    // 0x1dcaa4: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1dcaa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1dcaa8:
    // 0x1dcaa8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1dcaa8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dcaac:
    // 0x1dcaac: 0x0  nop
    ctx->pc = 0x1dcaacu;
    // NOP
label_1dcab0:
    // 0x1dcab0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1dcab0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dcab4:
    // 0x1dcab4: 0x0  nop
    ctx->pc = 0x1dcab4u;
    // NOP
label_1dcab8:
    // 0x1dcab8: 0x45010015  bc1t        . + 4 + (0x15 << 2)
label_1dcabc:
    if (ctx->pc == 0x1DCABCu) {
        ctx->pc = 0x1DCAC0u;
        goto label_1dcac0;
    }
    ctx->pc = 0x1DCAB8u;
    {
        const bool branch_taken_0x1dcab8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dcab8) {
            ctx->pc = 0x1DCB10u;
            goto label_1dcb10;
        }
    }
    ctx->pc = 0x1DCAC0u;
label_1dcac0:
    // 0x1dcac0: 0xc4a012e8  lwc1        $f0, 0x12E8($a1)
    ctx->pc = 0x1dcac0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dcac4:
    // 0x1dcac4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1dcac4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dcac8:
    // 0x1dcac8: 0x0  nop
    ctx->pc = 0x1dcac8u;
    // NOP
label_1dcacc:
    // 0x1dcacc: 0x45010010  bc1t        . + 4 + (0x10 << 2)
label_1dcad0:
    if (ctx->pc == 0x1DCAD0u) {
        ctx->pc = 0x1DCAD4u;
        goto label_1dcad4;
    }
    ctx->pc = 0x1DCACCu;
    {
        const bool branch_taken_0x1dcacc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dcacc) {
            ctx->pc = 0x1DCB10u;
            goto label_1dcb10;
        }
    }
    ctx->pc = 0x1DCAD4u;
label_1dcad4:
    // 0x1dcad4: 0xc4a012ec  lwc1        $f0, 0x12EC($a1)
    ctx->pc = 0x1dcad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4844)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1dcad8:
    // 0x1dcad8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1dcad8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1dcadc:
    // 0x1dcadc: 0x0  nop
    ctx->pc = 0x1dcadcu;
    // NOP
label_1dcae0:
    // 0x1dcae0: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_1dcae4:
    if (ctx->pc == 0x1DCAE4u) {
        ctx->pc = 0x1DCAE8u;
        goto label_1dcae8;
    }
    ctx->pc = 0x1DCAE0u;
    {
        const bool branch_taken_0x1dcae0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1dcae0) {
            ctx->pc = 0x1DCB10u;
            goto label_1dcb10;
        }
    }
    ctx->pc = 0x1DCAE8u;
label_1dcae8:
    // 0x1dcae8: 0x84a21154  lh          $v0, 0x1154($a1)
    ctx->pc = 0x1dcae8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 4436)));
label_1dcaec:
    // 0x1dcaec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dcaecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dcaf0:
    // 0x1dcaf0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1dcaf0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dcaf4:
    // 0x1dcaf4: 0xc04ba14  jal         func_12E850
label_1dcaf8:
    if (ctx->pc == 0x1DCAF8u) {
        ctx->pc = 0x1DCAF8u;
            // 0x1dcaf8: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->pc = 0x1DCAFCu;
        goto label_1dcafc;
    }
    ctx->pc = 0x1DCAF4u;
    SET_GPR_U32(ctx, 31, 0x1DCAFCu);
    ctx->pc = 0x1DCAF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCAF4u;
            // 0x1dcaf8: 0x24450028  addiu       $a1, $v0, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCAFCu; }
        if (ctx->pc != 0x1DCAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DCAFCu; }
        if (ctx->pc != 0x1DCAFCu) { return; }
    }
    ctx->pc = 0x1DCAFCu;
label_1dcafc:
    // 0x1dcafc: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x1dcafcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1dcb00:
    // 0x1dcb00: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1dcb00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1dcb04:
    // 0x1dcb04: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1dcb04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1dcb08:
    // 0x1dcb08: 0x320f809  jalr        $t9
label_1dcb0c:
    if (ctx->pc == 0x1DCB0Cu) {
        ctx->pc = 0x1DCB10u;
        goto label_1dcb10;
    }
    ctx->pc = 0x1DCB08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DCB10u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DCB10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DCB10u; }
            if (ctx->pc != 0x1DCB10u) { return; }
        }
        }
    }
    ctx->pc = 0x1DCB10u;
label_1dcb10:
    // 0x1dcb10: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1dcb10u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1dcb14:
    // 0x1dcb14: 0x2a230018  slti        $v1, $s1, 0x18
    ctx->pc = 0x1dcb14u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)24) ? 1 : 0);
label_1dcb18:
    // 0x1dcb18: 0x1460ffd5  bnez        $v1, . + 4 + (-0x2B << 2)
label_1dcb1c:
    if (ctx->pc == 0x1DCB1Cu) {
        ctx->pc = 0x1DCB1Cu;
            // 0x1dcb1c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x1DCB20u;
        goto label_1dcb20;
    }
    ctx->pc = 0x1DCB18u;
    {
        const bool branch_taken_0x1dcb18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DCB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCB18u;
            // 0x1dcb1c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dcb18) {
            ctx->pc = 0x1DCA70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dca70;
        }
    }
    ctx->pc = 0x1DCB20u;
label_1dcb20:
    // 0x1dcb20: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1dcb20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1dcb24:
    // 0x1dcb24: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1dcb24u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1dcb28:
    // 0x1dcb28: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1dcb28u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1dcb2c:
    // 0x1dcb2c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dcb2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dcb30:
    // 0x1dcb30: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dcb30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dcb34:
    // 0x1dcb34: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dcb34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1dcb38:
    // 0x1dcb38: 0x3e00008  jr          $ra
label_1dcb3c:
    if (ctx->pc == 0x1DCB3Cu) {
        ctx->pc = 0x1DCB3Cu;
            // 0x1dcb3c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1DCB40u;
        goto label_fallthrough_0x1dcb38;
    }
    ctx->pc = 0x1DCB38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DCB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DCB38u;
            // 0x1dcb3c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1dcb38:
    ctx->pc = 0x1DCB40u;
}
