#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__14CRepairManagerFv
// Address: 0x22df60 - 0x22e198
void Step__14CRepairManagerFv_0x22df60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__14CRepairManagerFv_0x22df60");
#endif

    switch (ctx->pc) {
        case 0x22df60u: goto label_22df60;
        case 0x22df64u: goto label_22df64;
        case 0x22df68u: goto label_22df68;
        case 0x22df6cu: goto label_22df6c;
        case 0x22df70u: goto label_22df70;
        case 0x22df74u: goto label_22df74;
        case 0x22df78u: goto label_22df78;
        case 0x22df7cu: goto label_22df7c;
        case 0x22df80u: goto label_22df80;
        case 0x22df84u: goto label_22df84;
        case 0x22df88u: goto label_22df88;
        case 0x22df8cu: goto label_22df8c;
        case 0x22df90u: goto label_22df90;
        case 0x22df94u: goto label_22df94;
        case 0x22df98u: goto label_22df98;
        case 0x22df9cu: goto label_22df9c;
        case 0x22dfa0u: goto label_22dfa0;
        case 0x22dfa4u: goto label_22dfa4;
        case 0x22dfa8u: goto label_22dfa8;
        case 0x22dfacu: goto label_22dfac;
        case 0x22dfb0u: goto label_22dfb0;
        case 0x22dfb4u: goto label_22dfb4;
        case 0x22dfb8u: goto label_22dfb8;
        case 0x22dfbcu: goto label_22dfbc;
        case 0x22dfc0u: goto label_22dfc0;
        case 0x22dfc4u: goto label_22dfc4;
        case 0x22dfc8u: goto label_22dfc8;
        case 0x22dfccu: goto label_22dfcc;
        case 0x22dfd0u: goto label_22dfd0;
        case 0x22dfd4u: goto label_22dfd4;
        case 0x22dfd8u: goto label_22dfd8;
        case 0x22dfdcu: goto label_22dfdc;
        case 0x22dfe0u: goto label_22dfe0;
        case 0x22dfe4u: goto label_22dfe4;
        case 0x22dfe8u: goto label_22dfe8;
        case 0x22dfecu: goto label_22dfec;
        case 0x22dff0u: goto label_22dff0;
        case 0x22dff4u: goto label_22dff4;
        case 0x22dff8u: goto label_22dff8;
        case 0x22dffcu: goto label_22dffc;
        case 0x22e000u: goto label_22e000;
        case 0x22e004u: goto label_22e004;
        case 0x22e008u: goto label_22e008;
        case 0x22e00cu: goto label_22e00c;
        case 0x22e010u: goto label_22e010;
        case 0x22e014u: goto label_22e014;
        case 0x22e018u: goto label_22e018;
        case 0x22e01cu: goto label_22e01c;
        case 0x22e020u: goto label_22e020;
        case 0x22e024u: goto label_22e024;
        case 0x22e028u: goto label_22e028;
        case 0x22e02cu: goto label_22e02c;
        case 0x22e030u: goto label_22e030;
        case 0x22e034u: goto label_22e034;
        case 0x22e038u: goto label_22e038;
        case 0x22e03cu: goto label_22e03c;
        case 0x22e040u: goto label_22e040;
        case 0x22e044u: goto label_22e044;
        case 0x22e048u: goto label_22e048;
        case 0x22e04cu: goto label_22e04c;
        case 0x22e050u: goto label_22e050;
        case 0x22e054u: goto label_22e054;
        case 0x22e058u: goto label_22e058;
        case 0x22e05cu: goto label_22e05c;
        case 0x22e060u: goto label_22e060;
        case 0x22e064u: goto label_22e064;
        case 0x22e068u: goto label_22e068;
        case 0x22e06cu: goto label_22e06c;
        case 0x22e070u: goto label_22e070;
        case 0x22e074u: goto label_22e074;
        case 0x22e078u: goto label_22e078;
        case 0x22e07cu: goto label_22e07c;
        case 0x22e080u: goto label_22e080;
        case 0x22e084u: goto label_22e084;
        case 0x22e088u: goto label_22e088;
        case 0x22e08cu: goto label_22e08c;
        case 0x22e090u: goto label_22e090;
        case 0x22e094u: goto label_22e094;
        case 0x22e098u: goto label_22e098;
        case 0x22e09cu: goto label_22e09c;
        case 0x22e0a0u: goto label_22e0a0;
        case 0x22e0a4u: goto label_22e0a4;
        case 0x22e0a8u: goto label_22e0a8;
        case 0x22e0acu: goto label_22e0ac;
        case 0x22e0b0u: goto label_22e0b0;
        case 0x22e0b4u: goto label_22e0b4;
        case 0x22e0b8u: goto label_22e0b8;
        case 0x22e0bcu: goto label_22e0bc;
        case 0x22e0c0u: goto label_22e0c0;
        case 0x22e0c4u: goto label_22e0c4;
        case 0x22e0c8u: goto label_22e0c8;
        case 0x22e0ccu: goto label_22e0cc;
        case 0x22e0d0u: goto label_22e0d0;
        case 0x22e0d4u: goto label_22e0d4;
        case 0x22e0d8u: goto label_22e0d8;
        case 0x22e0dcu: goto label_22e0dc;
        case 0x22e0e0u: goto label_22e0e0;
        case 0x22e0e4u: goto label_22e0e4;
        case 0x22e0e8u: goto label_22e0e8;
        case 0x22e0ecu: goto label_22e0ec;
        case 0x22e0f0u: goto label_22e0f0;
        case 0x22e0f4u: goto label_22e0f4;
        case 0x22e0f8u: goto label_22e0f8;
        case 0x22e0fcu: goto label_22e0fc;
        case 0x22e100u: goto label_22e100;
        case 0x22e104u: goto label_22e104;
        case 0x22e108u: goto label_22e108;
        case 0x22e10cu: goto label_22e10c;
        case 0x22e110u: goto label_22e110;
        case 0x22e114u: goto label_22e114;
        case 0x22e118u: goto label_22e118;
        case 0x22e11cu: goto label_22e11c;
        case 0x22e120u: goto label_22e120;
        case 0x22e124u: goto label_22e124;
        case 0x22e128u: goto label_22e128;
        case 0x22e12cu: goto label_22e12c;
        case 0x22e130u: goto label_22e130;
        case 0x22e134u: goto label_22e134;
        case 0x22e138u: goto label_22e138;
        case 0x22e13cu: goto label_22e13c;
        case 0x22e140u: goto label_22e140;
        case 0x22e144u: goto label_22e144;
        case 0x22e148u: goto label_22e148;
        case 0x22e14cu: goto label_22e14c;
        case 0x22e150u: goto label_22e150;
        case 0x22e154u: goto label_22e154;
        case 0x22e158u: goto label_22e158;
        case 0x22e15cu: goto label_22e15c;
        case 0x22e160u: goto label_22e160;
        case 0x22e164u: goto label_22e164;
        case 0x22e168u: goto label_22e168;
        case 0x22e16cu: goto label_22e16c;
        case 0x22e170u: goto label_22e170;
        case 0x22e174u: goto label_22e174;
        case 0x22e178u: goto label_22e178;
        case 0x22e17cu: goto label_22e17c;
        case 0x22e180u: goto label_22e180;
        case 0x22e184u: goto label_22e184;
        case 0x22e188u: goto label_22e188;
        case 0x22e18cu: goto label_22e18c;
        case 0x22e190u: goto label_22e190;
        case 0x22e194u: goto label_22e194;
        default: break;
    }

    ctx->pc = 0x22df60u;

label_22df60:
    // 0x22df60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22df60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_22df64:
    // 0x22df64: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x22df64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_22df68:
    // 0x22df68: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x22df68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_22df6c:
    // 0x22df6c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x22df6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_22df70:
    // 0x22df70: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x22df70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_22df74:
    // 0x22df74: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x22df74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_22df78:
    // 0x22df78: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x22df78u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_22df7c:
    // 0x22df7c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x22df7cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_22df80:
    // 0x22df80: 0x8c8301b0  lw          $v1, 0x1B0($a0)
    ctx->pc = 0x22df80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 432)));
label_22df84:
    // 0x22df84: 0x10600048  beqz        $v1, . + 4 + (0x48 << 2)
label_22df88:
    if (ctx->pc == 0x22DF88u) {
        ctx->pc = 0x22DF88u;
            // 0x22df88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22DF8Cu;
        goto label_22df8c;
    }
    ctx->pc = 0x22DF84u;
    {
        const bool branch_taken_0x22df84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x22DF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DF84u;
            // 0x22df88: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22df84) {
            ctx->pc = 0x22E0A8u;
            goto label_22e0a8;
        }
    }
    ctx->pc = 0x22DF8Cu;
label_22df8c:
    // 0x22df8c: 0xc60001e4  lwc1        $f0, 0x1E4($s0)
    ctx->pc = 0x22df8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22df90:
    // 0x22df90: 0x3c023d32  lui         $v0, 0x3D32
    ctx->pc = 0x22df90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15666 << 16));
label_22df94:
    // 0x22df94: 0x3442b8c3  ori         $v0, $v0, 0xB8C3
    ctx->pc = 0x22df94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47299);
label_22df98:
    // 0x22df98: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22df98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22df9c:
    // 0x22df9c: 0x0  nop
    ctx->pc = 0x22df9cu;
    // NOP
label_22dfa0:
    // 0x22dfa0: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x22dfa0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_22dfa4:
    // 0x22dfa4: 0xc047a42  jal         func_11E908
label_22dfa8:
    if (ctx->pc == 0x22DFA8u) {
        ctx->pc = 0x22DFA8u;
            // 0x22dfa8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x22DFACu;
        goto label_22dfac;
    }
    ctx->pc = 0x22DFA4u;
    SET_GPR_U32(ctx, 31, 0x22DFACu);
    ctx->pc = 0x22DFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22DFA4u;
            // 0x22dfa8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DFACu; }
        if (ctx->pc != 0x22DFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22DFACu; }
        if (ctx->pc != 0x22DFACu) { return; }
    }
    ctx->pc = 0x22DFACu;
label_22dfac:
    // 0x22dfac: 0x8e0401b0  lw          $a0, 0x1B0($s0)
    ctx->pc = 0x22dfacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
label_22dfb0:
    // 0x22dfb0: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x22dfb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
label_22dfb4:
    // 0x22dfb4: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x22dfb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
label_22dfb8:
    // 0x22dfb8: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x22dfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_22dfbc:
    // 0x22dfbc: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x22dfbcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_22dfc0:
    // 0x22dfc0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x22dfc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_22dfc4:
    // 0x22dfc4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22dfc4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22dfc8:
    // 0x22dfc8: 0x0  nop
    ctx->pc = 0x22dfc8u;
    // NOP
label_22dfcc:
    // 0x22dfcc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x22dfccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_22dfd0:
    // 0x22dfd0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22dfd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22dfd4:
    // 0x22dfd4: 0x46000d40  add.s       $f21, $f1, $f0
    ctx->pc = 0x22dfd4u;
    ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_22dfd8:
    // 0x22dfd8: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x22dfd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_22dfdc:
    // 0x22dfdc: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x22dfdcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_22dfe0:
    // 0x22dfe0: 0x4600ab46  mov.s       $f13, $f21
    ctx->pc = 0x22dfe0u;
    ctx->f[13] = FPU_MOV_S(ctx->f[21]);
label_22dfe4:
    // 0x22dfe4: 0x320f809  jalr        $t9
label_22dfe8:
    if (ctx->pc == 0x22DFE8u) {
        ctx->pc = 0x22DFE8u;
            // 0x22dfe8: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x22DFECu;
        goto label_22dfec;
    }
    ctx->pc = 0x22DFE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22DFECu);
        ctx->pc = 0x22DFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22DFE4u;
            // 0x22dfe8: 0x4600ab86  mov.s       $f14, $f21 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22DFECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22DFECu; }
            if (ctx->pc != 0x22DFECu) { return; }
        }
        }
    }
    ctx->pc = 0x22DFECu;
label_22dfec:
    // 0x22dfec: 0x8e0401b0  lw          $a0, 0x1B0($s0)
    ctx->pc = 0x22dfecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
label_22dff0:
    // 0x22dff0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22dff0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22dff4:
    // 0x22dff4: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x22dff4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_22dff8:
    // 0x22dff8: 0x320f809  jalr        $t9
label_22dffc:
    if (ctx->pc == 0x22DFFCu) {
        ctx->pc = 0x22E000u;
        goto label_22e000;
    }
    ctx->pc = 0x22DFF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22E000u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x22E000u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22E000u; }
            if (ctx->pc != 0x22E000u) { return; }
        }
        }
    }
    ctx->pc = 0x22E000u;
label_22e000:
    // 0x22e000: 0x3c023eeb  lui         $v0, 0x3EEB
    ctx->pc = 0x22e000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16107 << 16));
label_22e004:
    // 0x22e004: 0x3442851f  ori         $v0, $v0, 0x851F
    ctx->pc = 0x22e004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
label_22e008:
    // 0x22e008: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22e008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22e00c:
    // 0x22e00c: 0x0  nop
    ctx->pc = 0x22e00cu;
    // NOP
label_22e010:
    // 0x22e010: 0x4600a834  c.lt.s      $f21, $f0
    ctx->pc = 0x22e010u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22e014:
    // 0x22e014: 0x0  nop
    ctx->pc = 0x22e014u;
    // NOP
label_22e018:
    // 0x22e018: 0x4500000e  bc1f        . + 4 + (0xE << 2)
label_22e01c:
    if (ctx->pc == 0x22E01Cu) {
        ctx->pc = 0x22E01Cu;
            // 0x22e01c: 0x3c023fc9  lui         $v0, 0x3FC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
        ctx->pc = 0x22E020u;
        goto label_22e020;
    }
    ctx->pc = 0x22E018u;
    {
        const bool branch_taken_0x22e018 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x22E01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E018u;
            // 0x22e01c: 0x3c023fc9  lui         $v0, 0x3FC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e018) {
            ctx->pc = 0x22E054u;
            goto label_22e054;
        }
    }
    ctx->pc = 0x22E020u;
label_22e020:
    // 0x22e020: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x22e020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_22e024:
    // 0x22e024: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22e024u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22e028:
    // 0x22e028: 0x0  nop
    ctx->pc = 0x22e028u;
    // NOP
label_22e02c:
    // 0x22e02c: 0x46140034  c.lt.s      $f0, $f20
    ctx->pc = 0x22e02cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22e030:
    // 0x22e030: 0x0  nop
    ctx->pc = 0x22e030u;
    // NOP
label_22e034:
    // 0x22e034: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_22e038:
    if (ctx->pc == 0x22E038u) {
        ctx->pc = 0x22E03Cu;
        goto label_22e03c;
    }
    ctx->pc = 0x22E034u;
    {
        const bool branch_taken_0x22e034 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22e034) {
            ctx->pc = 0x22E054u;
            goto label_22e054;
        }
    }
    ctx->pc = 0x22E03Cu;
label_22e03c:
    // 0x22e03c: 0x8e0401b0  lw          $a0, 0x1B0($s0)
    ctx->pc = 0x22e03cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
label_22e040:
    // 0x22e040: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22e040u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e044:
    // 0x22e044: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22e044u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22e048:
    // 0x22e048: 0x8f3900f8  lw          $t9, 0xF8($t9)
    ctx->pc = 0x22e048u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 248)));
label_22e04c:
    // 0x22e04c: 0x320f809  jalr        $t9
label_22e050:
    if (ctx->pc == 0x22E050u) {
        ctx->pc = 0x22E050u;
            // 0x22e050: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x22E054u;
        goto label_22e054;
    }
    ctx->pc = 0x22E04Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22E054u);
        ctx->pc = 0x22E050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E04Cu;
            // 0x22e050: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22E054u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22E054u; }
            if (ctx->pc != 0x22E054u) { return; }
        }
        }
    }
    ctx->pc = 0x22E054u;
label_22e054:
    // 0x22e054: 0xc60101e4  lwc1        $f1, 0x1E4($s0)
    ctx->pc = 0x22e054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22e058:
    // 0x22e058: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22e058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_22e05c:
    // 0x22e05c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22e05cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22e060:
    // 0x22e060: 0x0  nop
    ctx->pc = 0x22e060u;
    // NOP
label_22e064:
    // 0x22e064: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x22e064u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_22e068:
    // 0x22e068: 0xe60001e4  swc1        $f0, 0x1E4($s0)
    ctx->pc = 0x22e068u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 484), bits); }
label_22e06c:
    // 0x22e06c: 0x8e0401b0  lw          $a0, 0x1B0($s0)
    ctx->pc = 0x22e06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
label_22e070:
    // 0x22e070: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22e070u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22e074:
    // 0x22e074: 0x8f39010c  lw          $t9, 0x10C($t9)
    ctx->pc = 0x22e074u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 268)));
label_22e078:
    // 0x22e078: 0x320f809  jalr        $t9
label_22e07c:
    if (ctx->pc == 0x22E07Cu) {
        ctx->pc = 0x22E07Cu;
            // 0x22e07c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E080u;
        goto label_22e080;
    }
    ctx->pc = 0x22E078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22E080u);
        ctx->pc = 0x22E07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E078u;
            // 0x22e07c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22E080u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22E080u; }
            if (ctx->pc != 0x22E080u) { return; }
        }
        }
    }
    ctx->pc = 0x22E080u;
label_22e080:
    // 0x22e080: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_22e084:
    if (ctx->pc == 0x22E084u) {
        ctx->pc = 0x22E084u;
            // 0x22e084: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E088u;
        goto label_22e088;
    }
    ctx->pc = 0x22E080u;
    {
        const bool branch_taken_0x22e080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E080u;
            // 0x22e084: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e080) {
            ctx->pc = 0x22E0ACu;
            goto label_22e0ac;
        }
    }
    ctx->pc = 0x22E088u;
label_22e088:
    // 0x22e088: 0x8e0201b0  lw          $v0, 0x1B0($s0)
    ctx->pc = 0x22e088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
label_22e08c:
    // 0x22e08c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x22e08cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_22e090:
    // 0x22e090: 0x8c4502e4  lw          $a1, 0x2E4($v0)
    ctx->pc = 0x22e090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 740)));
label_22e094:
    // 0x22e094: 0xc04b950  jal         func_12E540
label_22e098:
    if (ctx->pc == 0x22E098u) {
        ctx->pc = 0x22E098u;
            // 0x22e098: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->pc = 0x22E09Cu;
        goto label_22e09c;
    }
    ctx->pc = 0x22E094u;
    SET_GPR_U32(ctx, 31, 0x22E09Cu);
    ctx->pc = 0x22E098u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22E094u;
            // 0x22e098: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E09Cu; }
        if (ctx->pc != 0x22E09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E09Cu; }
        if (ctx->pc != 0x22E09Cu) { return; }
    }
    ctx->pc = 0x22E09Cu;
label_22e09c:
    // 0x22e09c: 0xae0001b0  sw          $zero, 0x1B0($s0)
    ctx->pc = 0x22e09cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 0));
label_22e0a0:
    // 0x22e0a0: 0xae0001d8  sw          $zero, 0x1D8($s0)
    ctx->pc = 0x22e0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 472), GPR_U32(ctx, 0));
label_22e0a4:
    // 0x22e0a4: 0xae0001d0  sw          $zero, 0x1D0($s0)
    ctx->pc = 0x22e0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 464), GPR_U32(ctx, 0));
label_22e0a8:
    // 0x22e0a8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x22e0a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e0ac:
    // 0x22e0ac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x22e0acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e0b0:
    // 0x22e0b0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x22e0b0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e0b4:
    // 0x22e0b4: 0x2121821  addu        $v1, $s0, $s2
    ctx->pc = 0x22e0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_22e0b8:
    // 0x22e0b8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x22e0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_22e0bc:
    // 0x22e0bc: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_22e0c0:
    if (ctx->pc == 0x22E0C0u) {
        ctx->pc = 0x22E0C0u;
            // 0x22e0c0: 0x24650004  addiu       $a1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x22E0C4u;
        goto label_22e0c4;
    }
    ctx->pc = 0x22E0BCu;
    {
        const bool branch_taken_0x22e0bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E0BCu;
            // 0x22e0c0: 0x24650004  addiu       $a1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e0bc) {
            ctx->pc = 0x22E0F0u;
            goto label_22e0f0;
        }
    }
    ctx->pc = 0x22E0C4u;
label_22e0c4:
    // 0x22e0c4: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x22e0c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_22e0c8:
    // 0x22e0c8: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
label_22e0cc:
    if (ctx->pc == 0x22E0CCu) {
        ctx->pc = 0x22E0D0u;
        goto label_22e0d0;
    }
    ctx->pc = 0x22E0C8u;
    {
        const bool branch_taken_0x22e0c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e0c8) {
            ctx->pc = 0x22E0E4u;
            goto label_22e0e4;
        }
    }
    ctx->pc = 0x22E0D0u;
label_22e0d0:
    // 0x22e0d0: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x22e0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_22e0d4:
    // 0x22e0d4: 0x2131821  addu        $v1, $s0, $s3
    ctx->pc = 0x22e0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_22e0d8:
    // 0x22e0d8: 0xac600048  sw          $zero, 0x48($v1)
    ctx->pc = 0x22e0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 72), GPR_U32(ctx, 0));
label_22e0dc:
    // 0x22e0dc: 0x10000004  b           . + 4 + (0x4 << 2)
label_22e0e0:
    if (ctx->pc == 0x22E0E0u) {
        ctx->pc = 0x22E0E0u;
            // 0x22e0e0: 0xac600040  sw          $zero, 0x40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
        ctx->pc = 0x22E0E4u;
        goto label_22e0e4;
    }
    ctx->pc = 0x22E0DCu;
    {
        const bool branch_taken_0x22e0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22E0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E0DCu;
            // 0x22e0e0: 0xac600040  sw          $zero, 0x40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e0dc) {
            ctx->pc = 0x22E0F0u;
            goto label_22e0f0;
        }
    }
    ctx->pc = 0x22E0E4u;
label_22e0e4:
    // 0x22e0e4: 0x0  nop
    ctx->pc = 0x22e0e4u;
    // NOP
label_22e0e8:
    // 0x22e0e8: 0xc08b558  jal         func_22D560
label_22e0ec:
    if (ctx->pc == 0x22E0ECu) {
        ctx->pc = 0x22E0F0u;
        goto label_22e0f0;
    }
    ctx->pc = 0x22E0E8u;
    SET_GPR_U32(ctx, 31, 0x22E0F0u);
    ctx->pc = 0x22D560u;
    if (runtime->hasFunction(0x22D560u)) {
        auto targetFn = runtime->lookupFunction(0x22D560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E0F0u; }
        if (ctx->pc != 0x22E0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__13CRepairEffectFv_0x22d560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E0F0u; }
        if (ctx->pc != 0x22E0F0u) { return; }
    }
    ctx->pc = 0x22E0F0u;
label_22e0f0:
    // 0x22e0f0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x22e0f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_22e0f4:
    // 0x22e0f4: 0x2a230008  slti        $v1, $s1, 0x8
    ctx->pc = 0x22e0f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
label_22e0f8:
    // 0x22e0f8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x22e0f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_22e0fc:
    // 0x22e0fc: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
label_22e100:
    if (ctx->pc == 0x22E100u) {
        ctx->pc = 0x22E100u;
            // 0x22e100: 0x26730030  addiu       $s3, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->pc = 0x22E104u;
        goto label_22e104;
    }
    ctx->pc = 0x22E0FCu;
    {
        const bool branch_taken_0x22e0fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E0FCu;
            // 0x22e100: 0x26730030  addiu       $s3, $s3, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e0fc) {
            ctx->pc = 0x22E0B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22e0b4;
        }
    }
    ctx->pc = 0x22E104u;
label_22e104:
    // 0x22e104: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x22e104u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_22e108:
    // 0x22e108: 0x1460001a  bnez        $v1, . + 4 + (0x1A << 2)
label_22e10c:
    if (ctx->pc == 0x22E10Cu) {
        ctx->pc = 0x22E10Cu;
            // 0x22e10c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E110u;
        goto label_22e110;
    }
    ctx->pc = 0x22E108u;
    {
        const bool branch_taken_0x22e108 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E108u;
            // 0x22e10c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e108) {
            ctx->pc = 0x22E174u;
            goto label_22e174;
        }
    }
    ctx->pc = 0x22E110u;
label_22e110:
    // 0x22e110: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22e110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e114:
    // 0x22e114: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x22e114u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22e118:
    // 0x22e118: 0x2061821  addu        $v1, $s0, $a2
    ctx->pc = 0x22e118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 6)));
label_22e11c:
    // 0x22e11c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x22e11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_22e120:
    // 0x22e120: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_22e124:
    if (ctx->pc == 0x22E124u) {
        ctx->pc = 0x22E128u;
        goto label_22e128;
    }
    ctx->pc = 0x22E120u;
    {
        const bool branch_taken_0x22e120 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e120) {
            ctx->pc = 0x22E12Cu;
            goto label_22e12c;
        }
    }
    ctx->pc = 0x22E128u;
label_22e128:
    // 0x22e128: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22e128u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22e12c:
    // 0x22e12c: 0x0  nop
    ctx->pc = 0x22e12cu;
    // NOP
label_22e130:
    // 0x22e130: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x22e130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_22e134:
    // 0x22e134: 0x28830008  slti        $v1, $a0, 0x8
    ctx->pc = 0x22e134u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)8) ? 1 : 0);
label_22e138:
    // 0x22e138: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_22e13c:
    if (ctx->pc == 0x22E13Cu) {
        ctx->pc = 0x22E13Cu;
            // 0x22e13c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x22E140u;
        goto label_22e140;
    }
    ctx->pc = 0x22E138u;
    {
        const bool branch_taken_0x22e138 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E13Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E138u;
            // 0x22e13c: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e138) {
            ctx->pc = 0x22E118u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22e118;
        }
    }
    ctx->pc = 0x22E140u;
label_22e140:
    // 0x22e140: 0x8e0401b0  lw          $a0, 0x1B0($s0)
    ctx->pc = 0x22e140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
label_22e144:
    // 0x22e144: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22e144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22e148:
    // 0x22e148: 0x4180a  movz        $v1, $zero, $a0
    ctx->pc = 0x22e148u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0));
label_22e14c:
    // 0x22e14c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_22e150:
    if (ctx->pc == 0x22E150u) {
        ctx->pc = 0x22E154u;
        goto label_22e154;
    }
    ctx->pc = 0x22E14Cu;
    {
        const bool branch_taken_0x22e14c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22e14c) {
            ctx->pc = 0x22E158u;
            goto label_22e158;
        }
    }
    ctx->pc = 0x22E154u;
label_22e154:
    // 0x22e154: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22e154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22e158:
    // 0x22e158: 0x14a00006  bnez        $a1, . + 4 + (0x6 << 2)
label_22e15c:
    if (ctx->pc == 0x22E15Cu) {
        ctx->pc = 0x22E160u;
        goto label_22e160;
    }
    ctx->pc = 0x22E158u;
    {
        const bool branch_taken_0x22e158 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x22e158) {
            ctx->pc = 0x22E174u;
            goto label_22e174;
        }
    }
    ctx->pc = 0x22E160u;
label_22e160:
    // 0x22e160: 0x920301e8  lbu         $v1, 0x1E8($s0)
    ctx->pc = 0x22e160u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 488)));
label_22e164:
    // 0x22e164: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_22e168:
    if (ctx->pc == 0x22E168u) {
        ctx->pc = 0x22E168u;
            // 0x22e168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22E16Cu;
        goto label_22e16c;
    }
    ctx->pc = 0x22E164u;
    {
        const bool branch_taken_0x22e164 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x22E168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E164u;
            // 0x22e168: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22e164) {
            ctx->pc = 0x22E174u;
            goto label_22e174;
        }
    }
    ctx->pc = 0x22E16Cu;
label_22e16c:
    // 0x22e16c: 0xc08b614  jal         func_22D850
label_22e170:
    if (ctx->pc == 0x22E170u) {
        ctx->pc = 0x22E174u;
        goto label_22e174;
    }
    ctx->pc = 0x22E16Cu;
    SET_GPR_U32(ctx, 31, 0x22E174u);
    ctx->pc = 0x22D850u;
    if (runtime->hasFunction(0x22D850u)) {
        auto targetFn = runtime->lookupFunction(0x22D850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E174u; }
        if (ctx->pc != 0x22E174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__14CRepairManagerFv_0x22d850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22E174u; }
        if (ctx->pc != 0x22E174u) { return; }
    }
    ctx->pc = 0x22E174u;
label_22e174:
    // 0x22e174: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x22e174u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_22e178:
    // 0x22e178: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x22e178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_22e17c:
    // 0x22e17c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x22e17cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22e180:
    // 0x22e180: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x22e180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_22e184:
    // 0x22e184: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x22e184u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22e188:
    // 0x22e188: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22e188u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22e18c:
    // 0x22e18c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22e18cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22e190:
    // 0x22e190: 0x3e00008  jr          $ra
label_22e194:
    if (ctx->pc == 0x22E194u) {
        ctx->pc = 0x22E194u;
            // 0x22e194: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x22E198u;
        goto label_fallthrough_0x22e190;
    }
    ctx->pc = 0x22E190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22E194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22E190u;
            // 0x22e194: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x22e190:
    ctx->pc = 0x22E198u;
}
