#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: BattleAreaBGMCtrl__Fv
// Address: 0x28cf00 - 0x28d1dc
void BattleAreaBGMCtrl__Fv_0x28cf00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BattleAreaBGMCtrl__Fv_0x28cf00");
#endif

    switch (ctx->pc) {
        case 0x28cf28u: goto label_28cf28;
        case 0x28cf30u: goto label_28cf30;
        case 0x28cf4cu: goto label_28cf4c;
        case 0x28cf74u: goto label_28cf74;
        case 0x28d07cu: goto label_28d07c;
        case 0x28d084u: goto label_28d084;
        case 0x28d0a0u: goto label_28d0a0;
        case 0x28d0acu: goto label_28d0ac;
        case 0x28d0b8u: goto label_28d0b8;
        case 0x28d104u: goto label_28d104;
        case 0x28d10cu: goto label_28d10c;
        case 0x28d11cu: goto label_28d11c;
        case 0x28d128u: goto label_28d128;
        case 0x28d134u: goto label_28d134;
        case 0x28d150u: goto label_28d150;
        case 0x28d164u: goto label_28d164;
        case 0x28d1a8u: goto label_28d1a8;
        case 0x28d1b4u: goto label_28d1b4;
        case 0x28d1c0u: goto label_28d1c0;
        default: break;
    }

    ctx->pc = 0x28cf00u;

    // 0x28cf00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28cf00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28cf04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28cf04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cf08: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28cf08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28cf0c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28cf0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x28cf10: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28cf10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x28cf14: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x28cf14u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x28cf18: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x28cf18u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x28cf1c: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x28cf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
    // 0x28cf20: 0xc0a0ed8  jal         func_283B60
    ctx->pc = 0x28CF20u;
    SET_GPR_U32(ctx, 31, 0x28CF28u);
    ctx->pc = 0x28CF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CF20u;
            // 0x28cf24: 0x24912f90  addiu       $s1, $a0, 0x2F90 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 12176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CF28u; }
        if (ctx->pc != 0x28CF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CF28u; }
        if (ctx->pc != 0x28CF28u) { return; }
    }
    ctx->pc = 0x28CF28u;
label_28cf28:
    // 0x28cf28: 0xc06ea8c  jal         func_1BAA30
    ctx->pc = 0x28CF28u;
    SET_GPR_U32(ctx, 31, 0x28CF30u);
    ctx->pc = 0x28CF2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CF28u;
            // 0x28cf2c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BAA30u;
    if (runtime->hasFunction(0x1BAA30u)) {
        auto targetFn = runtime->lookupFunction(0x1BAA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CF30u; }
        if (ctx->pc != 0x28CF30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dngGetDebugInfo__Fv_0x1baa30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CF30u; }
        if (ctx->pc != 0x28CF30u) { return; }
    }
    ctx->pc = 0x28CF30u;
label_28cf30:
    // 0x28cf30: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x28cf30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x28cf34: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x28CF34u;
    {
        const bool branch_taken_0x28cf34 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x28CF38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CF34u;
            // 0x28cf38: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cf34) {
            ctx->pc = 0x28CF54u;
            goto label_28cf54;
        }
    }
    ctx->pc = 0x28CF3Cu;
    // 0x28cf3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28cf3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28cf40: 0x8c24e534  lw          $a0, -0x1ACC($at)
    ctx->pc = 0x28cf40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960436)));
    // 0x28cf44: 0xc063a0c  jal         func_18E830
    ctx->pc = 0x28CF44u;
    SET_GPR_U32(ctx, 31, 0x28CF4Cu);
    ctx->pc = 0x28CF48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28CF44u;
            // 0x28cf48: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E830u;
    if (runtime->hasFunction(0x18E830u)) {
        auto targetFn = runtime->lookupFunction(0x18E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CF4Cu; }
        if (ctx->pc != 0x28CF4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSeStop__FUiii_0x18e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CF4Cu; }
        if (ctx->pc != 0x28CF4Cu) { return; }
    }
    ctx->pc = 0x28CF4Cu;
label_28cf4c:
    // 0x28cf4c: 0x1000009d  b           . + 4 + (0x9D << 2)
    ctx->pc = 0x28CF4Cu;
    {
        const bool branch_taken_0x28cf4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CF50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CF4Cu;
            // 0x28cf50: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cf4c) {
            ctx->pc = 0x28D1C4u;
            goto label_28d1c4;
        }
    }
    ctx->pc = 0x28CF54u;
label_28cf54:
    // 0x28cf54: 0x8f848db8  lw          $a0, -0x7248($gp)
    ctx->pc = 0x28cf54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
    // 0x28cf58: 0x3c034b18  lui         $v1, 0x4B18
    ctx->pc = 0x28cf58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)19224 << 16));
    // 0x28cf5c: 0x3463967f  ori         $v1, $v1, 0x967F
    ctx->pc = 0x28cf5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)38527);
    // 0x28cf60: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28cf60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28cf64: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28CF64u;
    {
        const bool branch_taken_0x28cf64 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CF64u;
            // 0x28cf68: 0x3c0343aa  lui         $v1, 0x43AA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17322 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cf64) {
            ctx->pc = 0x28CF78u;
            goto label_28cf78;
        }
    }
    ctx->pc = 0x28CF6Cu;
    // 0x28cf6c: 0xc076c84  jal         func_1DB210
    ctx->pc = 0x28CF6Cu;
    SET_GPR_U32(ctx, 31, 0x28CF74u);
    ctx->pc = 0x1DB210u;
    if (runtime->hasFunction(0x1DB210u)) {
        auto targetFn = runtime->lookupFunction(0x1DB210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CF74u; }
        if (ctx->pc != 0x28CF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsBattleStyleDist__11CMonsterManFv_0x1db210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28CF74u; }
        if (ctx->pc != 0x28CF74u) { return; }
    }
    ctx->pc = 0x28CF74u;
label_28cf74:
    // 0x28cf74: 0x3c0343aa  lui         $v1, 0x43AA
    ctx->pc = 0x28cf74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17322 << 16));
label_28cf78:
    // 0x28cf78: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28cf78u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28cf7c: 0x0  nop
    ctx->pc = 0x28cf7cu;
    // NOP
    // 0x28cf80: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x28cf80u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28cf84: 0x0  nop
    ctx->pc = 0x28cf84u;
    // NOP
    // 0x28cf88: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x28CF88u;
    {
        const bool branch_taken_0x28cf88 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28CF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CF88u;
            // 0x28cf8c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cf88) {
            ctx->pc = 0x28CF98u;
            goto label_28cf98;
        }
    }
    ctx->pc = 0x28CF90u;
    // 0x28cf90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28CF90u;
    {
        const bool branch_taken_0x28cf90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28CF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CF90u;
            // 0x28cf94: 0xa603075e  sh          $v1, 0x75E($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 1886), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cf90) {
            ctx->pc = 0x28CF9Cu;
            goto label_28cf9c;
        }
    }
    ctx->pc = 0x28CF98u;
label_28cf98:
    // 0x28cf98: 0xa600075e  sh          $zero, 0x75E($s0)
    ctx->pc = 0x28cf98u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 1886), (uint16_t)GPR_U32(ctx, 0));
label_28cf9c:
    // 0x28cf9c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x28cf9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x28cfa0: 0x30634000  andi        $v1, $v1, 0x4000
    ctx->pc = 0x28cfa0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
    // 0x28cfa4: 0x14600086  bnez        $v1, . + 4 + (0x86 << 2)
    ctx->pc = 0x28CFA4u;
    {
        const bool branch_taken_0x28cfa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28cfa4) {
            ctx->pc = 0x28D1C0u;
            goto label_28d1c0;
        }
    }
    ctx->pc = 0x28CFACu;
    // 0x28cfac: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x28cfacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x28cfb0: 0x14600083  bnez        $v1, . + 4 + (0x83 << 2)
    ctx->pc = 0x28CFB0u;
    {
        const bool branch_taken_0x28cfb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28cfb0) {
            ctx->pc = 0x28D1C0u;
            goto label_28d1c0;
        }
    }
    ctx->pc = 0x28CFB8u;
    // 0x28cfb8: 0x8e250084  lw          $a1, 0x84($s1)
    ctx->pc = 0x28cfb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
    // 0x28cfbc: 0x14a0000a  bnez        $a1, . + 4 + (0xA << 2)
    ctx->pc = 0x28CFBCu;
    {
        const bool branch_taken_0x28cfbc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x28CFC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CFBCu;
            // 0x28cfc0: 0xc6350088  lwc1        $f21, 0x88($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cfbc) {
            ctx->pc = 0x28CFE8u;
            goto label_28cfe8;
        }
    }
    ctx->pc = 0x28CFC4u;
    // 0x28cfc4: 0x3c0343aa  lui         $v1, 0x43AA
    ctx->pc = 0x28cfc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17322 << 16));
    // 0x28cfc8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28cfc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28cfcc: 0x0  nop
    ctx->pc = 0x28cfccu;
    // NOP
    // 0x28cfd0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x28cfd0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28cfd4: 0x0  nop
    ctx->pc = 0x28cfd4u;
    // NOP
    // 0x28cfd8: 0x45010004  bc1t        . + 4 + (0x4 << 2)
    ctx->pc = 0x28CFD8u;
    {
        const bool branch_taken_0x28cfd8 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28CFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CFD8u;
            // 0x28cfdc: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cfd8) {
            ctx->pc = 0x28CFECu;
            goto label_28cfec;
        }
    }
    ctx->pc = 0x28CFE0u;
    // 0x28cfe0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28cfe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28cfe4: 0xae230084  sw          $v1, 0x84($s1)
    ctx->pc = 0x28cfe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 3));
label_28cfe8:
    // 0x28cfe8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28cfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28cfec:
    // 0x28cfec: 0x14a3000a  bne         $a1, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x28CFECu;
    {
        const bool branch_taken_0x28cfec = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x28CFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28CFECu;
            // 0x28cff0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28cfec) {
            ctx->pc = 0x28D018u;
            goto label_28d018;
        }
    }
    ctx->pc = 0x28CFF4u;
    // 0x28cff4: 0x3c0343c8  lui         $v1, 0x43C8
    ctx->pc = 0x28cff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17352 << 16));
    // 0x28cff8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28cff8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28cffc: 0x0  nop
    ctx->pc = 0x28cffcu;
    // NOP
    // 0x28d000: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x28d000u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28d004: 0x0  nop
    ctx->pc = 0x28d004u;
    // NOP
    // 0x28d008: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x28D008u;
    {
        const bool branch_taken_0x28d008 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28D00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D008u;
            // 0x28d00c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d008) {
            ctx->pc = 0x28D014u;
            goto label_28d014;
        }
    }
    ctx->pc = 0x28D010u;
    // 0x28d010: 0xae230084  sw          $v1, 0x84($s1)
    ctx->pc = 0x28d010u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 3));
label_28d014:
    // 0x28d014: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x28d014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_28d018:
    // 0x28d018: 0x10a40050  beq         $a1, $a0, . + 4 + (0x50 << 2)
    ctx->pc = 0x28D018u;
    {
        const bool branch_taken_0x28d018 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x28D01Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D018u;
            // 0x28d01c: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d018) {
            ctx->pc = 0x28D15Cu;
            goto label_28d15c;
        }
    }
    ctx->pc = 0x28D020u;
    // 0x28d020: 0x10a30027  beq         $a1, $v1, . + 4 + (0x27 << 2)
    ctx->pc = 0x28D020u;
    {
        const bool branch_taken_0x28d020 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x28D024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D020u;
            // 0x28d024: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d020) {
            ctx->pc = 0x28D0C0u;
            goto label_28d0c0;
        }
    }
    ctx->pc = 0x28D028u;
    // 0x28d028: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x28D028u;
    {
        const bool branch_taken_0x28d028 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x28D02Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D028u;
            // 0x28d02c: 0x3c033d4c  lui         $v1, 0x3D4C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15692 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d028) {
            ctx->pc = 0x28D038u;
            goto label_28d038;
        }
    }
    ctx->pc = 0x28D030u;
    // 0x28d030: 0x10000063  b           . + 4 + (0x63 << 2)
    ctx->pc = 0x28D030u;
    {
        const bool branch_taken_0x28d030 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d030) {
            ctx->pc = 0x28D1C0u;
            goto label_28d1c0;
        }
    }
    ctx->pc = 0x28D038u;
label_28d038:
    // 0x28d038: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28d038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x28d03c: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x28d03cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x28d040: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28d040u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d044: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28d044u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28d048: 0x0  nop
    ctx->pc = 0x28d048u;
    // NOP
    // 0x28d04c: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x28d04cu;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
    // 0x28d050: 0x4601a834  c.lt.s      $f21, $f1
    ctx->pc = 0x28d050u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28d054: 0x0  nop
    ctx->pc = 0x28d054u;
    // NOP
    // 0x28d058: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x28D058u;
    {
        const bool branch_taken_0x28d058 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x28D05Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D058u;
            // 0x28d05c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d058) {
            ctx->pc = 0x28D084u;
            goto label_28d084;
        }
    }
    ctx->pc = 0x28D060u;
    // 0x28d060: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x28d060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x28d064: 0xae220084  sw          $v0, 0x84($s1)
    ctx->pc = 0x28d064u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
    // 0x28d068: 0x46000d46  mov.s       $f21, $f1
    ctx->pc = 0x28d068u;
    ctx->f[21] = FPU_MOV_S(ctx->f[1]);
    // 0x28d06c: 0x8c24e534  lw          $a0, -0x1ACC($at)
    ctx->pc = 0x28d06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960436)));
    // 0x28d070: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28d070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d074: 0xc063818  jal         func_18E060
    ctx->pc = 0x28D074u;
    SET_GPR_U32(ctx, 31, 0x28D07Cu);
    ctx->pc = 0x28D078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D074u;
            // 0x28d078: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D07Cu; }
        if (ctx->pc != 0x28D07Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D07Cu; }
        if (ctx->pc != 0x28D07Cu) { return; }
    }
    ctx->pc = 0x28D07Cu;
label_28d07c:
    // 0x28d07c: 0xc0a9884  jal         func_2A6210
    ctx->pc = 0x28D07Cu;
    SET_GPR_U32(ctx, 31, 0x28D084u);
    ctx->pc = 0x28D080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D07Cu;
            // 0x28d080: 0x8f848dac  lw          $a0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6210u;
    if (runtime->hasFunction(0x2A6210u)) {
        auto targetFn = runtime->lookupFunction(0x2A6210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D084u; }
        if (ctx->pc != 0x28D084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PauseBGM__6CSceneFv_0x2a6210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D084u; }
        if (ctx->pc != 0x28D084u) { return; }
    }
    ctx->pc = 0x28D084u;
label_28d084:
    // 0x28d084: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x28d084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
    // 0x28d088: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28d088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x28d08c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28d08cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d090: 0x0  nop
    ctx->pc = 0x28d090u;
    // NOP
    // 0x28d094: 0x46150501  sub.s       $f20, $f0, $f21
    ctx->pc = 0x28d094u;
    ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[21]);
    // 0x28d098: 0xc0a9838  jal         func_2A60E0
    ctx->pc = 0x28D098u;
    SET_GPR_U32(ctx, 31, 0x28D0A0u);
    ctx->pc = 0x28D09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D098u;
            // 0x28d09c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A60E0u;
    if (runtime->hasFunction(0x2A60E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A60E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D0A0u; }
        if (ctx->pc != 0x28D0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveBgmInfo__6CSceneFv_0x2a60e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D0A0u; }
        if (ctx->pc != 0x28D0A0u) { return; }
    }
    ctx->pc = 0x28D0A0u;
label_28d0a0:
    // 0x28d0a0: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x28d0a0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x28d0a4: 0xc0a9838  jal         func_2A60E0
    ctx->pc = 0x28D0A4u;
    SET_GPR_U32(ctx, 31, 0x28D0ACu);
    ctx->pc = 0x28D0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D0A4u;
            // 0x28d0a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A60E0u;
    if (runtime->hasFunction(0x2A60E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A60E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D0ACu; }
        if (ctx->pc != 0x28D0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveBgmInfo__6CSceneFv_0x2a60e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D0ACu; }
        if (ctx->pc != 0x28D0ACu) { return; }
    }
    ctx->pc = 0x28D0ACu;
label_28d0ac:
    // 0x28d0ac: 0xc44c0014  lwc1        $f12, 0x14($v0)
    ctx->pc = 0x28d0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28d0b0: 0xc0a98e8  jal         func_2A63A0
    ctx->pc = 0x28D0B0u;
    SET_GPR_U32(ctx, 31, 0x28D0B8u);
    ctx->pc = 0x28D0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D0B0u;
            // 0x28d0b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A63A0u;
    if (runtime->hasFunction(0x2A63A0u)) {
        auto targetFn = runtime->lookupFunction(0x2A63A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D0B8u; }
        if (ctx->pc != 0x28D0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVolfBGM__6CSceneFf_0x2a63a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D0B8u; }
        if (ctx->pc != 0x28D0B8u) { return; }
    }
    ctx->pc = 0x28D0B8u;
label_28d0b8:
    // 0x28d0b8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x28D0B8u;
    {
        const bool branch_taken_0x28d0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D0B8u;
            // 0x28d0bc: 0xe6350088  swc1        $f21, 0x88($s1) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d0b8) {
            ctx->pc = 0x28D1C0u;
            goto label_28d1c0;
        }
    }
    ctx->pc = 0x28D0C0u;
label_28d0c0:
    // 0x28d0c0: 0x3c023c88  lui         $v0, 0x3C88
    ctx->pc = 0x28d0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15496 << 16));
    // 0x28d0c4: 0x34428889  ori         $v0, $v0, 0x8889
    ctx->pc = 0x28d0c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x28d0c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28d0c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d0cc: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x28d0ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28d0d0: 0x0  nop
    ctx->pc = 0x28d0d0u;
    // NOP
    // 0x28d0d4: 0x4600ad41  sub.s       $f21, $f21, $f0
    ctx->pc = 0x28d0d4u;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[0]);
    // 0x28d0d8: 0x4601a836  c.le.s      $f21, $f1
    ctx->pc = 0x28d0d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28d0dc: 0x0  nop
    ctx->pc = 0x28d0dcu;
    // NOP
    // 0x28d0e0: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x28D0E0u;
    {
        const bool branch_taken_0x28d0e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x28D0E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D0E0u;
            // 0x28d0e4: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d0e0) {
            ctx->pc = 0x28D13Cu;
            goto label_28d13c;
        }
    }
    ctx->pc = 0x28D0E8u;
    // 0x28d0e8: 0xae240084  sw          $a0, 0x84($s1)
    ctx->pc = 0x28d0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 4));
    // 0x28d0ec: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x28d0ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x28d0f0: 0x8c24e534  lw          $a0, -0x1ACC($at)
    ctx->pc = 0x28d0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960436)));
    // 0x28d0f4: 0x46000d46  mov.s       $f21, $f1
    ctx->pc = 0x28d0f4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[1]);
    // 0x28d0f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28d0f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d0fc: 0xc063a0c  jal         func_18E830
    ctx->pc = 0x28D0FCu;
    SET_GPR_U32(ctx, 31, 0x28D104u);
    ctx->pc = 0x28D100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D0FCu;
            // 0x28d100: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E830u;
    if (runtime->hasFunction(0x18E830u)) {
        auto targetFn = runtime->lookupFunction(0x18E830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D104u; }
        if (ctx->pc != 0x28D104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSeStop__FUiii_0x18e830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D104u; }
        if (ctx->pc != 0x28D104u) { return; }
    }
    ctx->pc = 0x28D104u;
label_28d104:
    // 0x28d104: 0xc0a9890  jal         func_2A6240
    ctx->pc = 0x28D104u;
    SET_GPR_U32(ctx, 31, 0x28D10Cu);
    ctx->pc = 0x28D108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D104u;
            // 0x28d108: 0x8f848dac  lw          $a0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6240u;
    if (runtime->hasFunction(0x2A6240u)) {
        auto targetFn = runtime->lookupFunction(0x2A6240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D10Cu; }
        if (ctx->pc != 0x28D10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RePlayBGM__6CSceneFv_0x2a6240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D10Cu; }
        if (ctx->pc != 0x28D10Cu) { return; }
    }
    ctx->pc = 0x28D10Cu;
label_28d10c:
    // 0x28d10c: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x28d10cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
    // 0x28d110: 0x4600ad06  mov.s       $f20, $f21
    ctx->pc = 0x28d110u;
    ctx->f[20] = FPU_MOV_S(ctx->f[21]);
    // 0x28d114: 0xc0a9838  jal         func_2A60E0
    ctx->pc = 0x28D114u;
    SET_GPR_U32(ctx, 31, 0x28D11Cu);
    ctx->pc = 0x28D118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D114u;
            // 0x28d118: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A60E0u;
    if (runtime->hasFunction(0x2A60E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A60E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D11Cu; }
        if (ctx->pc != 0x28D11Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveBgmInfo__6CSceneFv_0x2a60e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D11Cu; }
        if (ctx->pc != 0x28D11Cu) { return; }
    }
    ctx->pc = 0x28D11Cu;
label_28d11c:
    // 0x28d11c: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x28d11cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x28d120: 0xc0a9838  jal         func_2A60E0
    ctx->pc = 0x28D120u;
    SET_GPR_U32(ctx, 31, 0x28D128u);
    ctx->pc = 0x28D124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D120u;
            // 0x28d124: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A60E0u;
    if (runtime->hasFunction(0x2A60E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A60E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D128u; }
        if (ctx->pc != 0x28D128u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveBgmInfo__6CSceneFv_0x2a60e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D128u; }
        if (ctx->pc != 0x28D128u) { return; }
    }
    ctx->pc = 0x28D128u;
label_28d128:
    // 0x28d128: 0xc44c0014  lwc1        $f12, 0x14($v0)
    ctx->pc = 0x28d128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28d12c: 0xc0a98e8  jal         func_2A63A0
    ctx->pc = 0x28D12Cu;
    SET_GPR_U32(ctx, 31, 0x28D134u);
    ctx->pc = 0x28D130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D12Cu;
            // 0x28d130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A63A0u;
    if (runtime->hasFunction(0x2A63A0u)) {
        auto targetFn = runtime->lookupFunction(0x2A63A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D134u; }
        if (ctx->pc != 0x28D134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVolfBGM__6CSceneFf_0x2a63a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D134u; }
        if (ctx->pc != 0x28D134u) { return; }
    }
    ctx->pc = 0x28D134u;
label_28d134:
    // 0x28d134: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28D134u;
    {
        const bool branch_taken_0x28d134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28D138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D134u;
            // 0x28d138: 0xe6350088  swc1        $f21, 0x88($s1) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x28d134) {
            ctx->pc = 0x28D154u;
            goto label_28d154;
        }
    }
    ctx->pc = 0x28D13Cu;
label_28d13c:
    // 0x28d13c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28d13cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28d140: 0x8c24e534  lw          $a0, -0x1ACC($at)
    ctx->pc = 0x28d140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294960436)));
    // 0x28d144: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x28d144u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x28d148: 0xc063b38  jal         func_18ECE0
    ctx->pc = 0x28D148u;
    SET_GPR_U32(ctx, 31, 0x28D150u);
    ctx->pc = 0x28D14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D148u;
            // 0x28d14c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18ECE0u;
    if (runtime->hasFunction(0x18ECE0u)) {
        auto targetFn = runtime->lookupFunction(0x18ECE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D150u; }
        if (ctx->pc != 0x28D150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetSeVolf__FUiifi_0x18ece0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D150u; }
        if (ctx->pc != 0x28D150u) { return; }
    }
    ctx->pc = 0x28D150u;
label_28d150:
    // 0x28d150: 0xe6350088  swc1        $f21, 0x88($s1)
    ctx->pc = 0x28d150u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 136), bits); }
label_28d154:
    // 0x28d154: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x28D154u;
    {
        const bool branch_taken_0x28d154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28d154) {
            ctx->pc = 0x28D1C0u;
            goto label_28d1c0;
        }
    }
    ctx->pc = 0x28D15Cu;
label_28d15c:
    // 0x28d15c: 0xc0a9838  jal         func_2A60E0
    ctx->pc = 0x28D15Cu;
    SET_GPR_U32(ctx, 31, 0x28D164u);
    ctx->pc = 0x28D160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D15Cu;
            // 0x28d160: 0x8f848dac  lw          $a0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A60E0u;
    if (runtime->hasFunction(0x2A60E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A60E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D164u; }
        if (ctx->pc != 0x28D164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveBgmInfo__6CSceneFv_0x2a60e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D164u; }
        if (ctx->pc != 0x28D164u) { return; }
    }
    ctx->pc = 0x28D164u;
label_28d164:
    // 0x28d164: 0xc454000c  lwc1        $f20, 0xC($v0)
    ctx->pc = 0x28d164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28d168: 0x3c023d08  lui         $v0, 0x3D08
    ctx->pc = 0x28d168u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15624 << 16));
    // 0x28d16c: 0x34438889  ori         $v1, $v0, 0x8889
    ctx->pc = 0x28d16cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34953);
    // 0x28d170: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28d170u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x28d174: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28d174u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x28d178: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28d178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x28d17c: 0x0  nop
    ctx->pc = 0x28d17cu;
    // NOP
    // 0x28d180: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x28d180u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
    // 0x28d184: 0x4601a034  c.lt.s      $f20, $f1
    ctx->pc = 0x28d184u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x28d188: 0x0  nop
    ctx->pc = 0x28d188u;
    // NOP
    // 0x28d18c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x28D18Cu;
    {
        const bool branch_taken_0x28d18c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28d18c) {
            ctx->pc = 0x28D19Cu;
            goto label_28d19c;
        }
    }
    ctx->pc = 0x28D194u;
    // 0x28d194: 0xae200084  sw          $zero, 0x84($s1)
    ctx->pc = 0x28d194u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
    // 0x28d198: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x28d198u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
label_28d19c:
    // 0x28d19c: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x28d19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
    // 0x28d1a0: 0xc0a9838  jal         func_2A60E0
    ctx->pc = 0x28D1A0u;
    SET_GPR_U32(ctx, 31, 0x28D1A8u);
    ctx->pc = 0x28D1A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D1A0u;
            // 0x28d1a4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A60E0u;
    if (runtime->hasFunction(0x2A60E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A60E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D1A8u; }
        if (ctx->pc != 0x28D1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveBgmInfo__6CSceneFv_0x2a60e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D1A8u; }
        if (ctx->pc != 0x28D1A8u) { return; }
    }
    ctx->pc = 0x28D1A8u;
label_28d1a8:
    // 0x28d1a8: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x28d1a8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x28d1ac: 0xc0a9838  jal         func_2A60E0
    ctx->pc = 0x28D1ACu;
    SET_GPR_U32(ctx, 31, 0x28D1B4u);
    ctx->pc = 0x28D1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D1ACu;
            // 0x28d1b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A60E0u;
    if (runtime->hasFunction(0x2A60E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A60E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D1B4u; }
        if (ctx->pc != 0x28D1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveBgmInfo__6CSceneFv_0x2a60e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D1B4u; }
        if (ctx->pc != 0x28D1B4u) { return; }
    }
    ctx->pc = 0x28D1B4u;
label_28d1b4:
    // 0x28d1b4: 0xc44c0014  lwc1        $f12, 0x14($v0)
    ctx->pc = 0x28d1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x28d1b8: 0xc0a98e8  jal         func_2A63A0
    ctx->pc = 0x28D1B8u;
    SET_GPR_U32(ctx, 31, 0x28D1C0u);
    ctx->pc = 0x28D1BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28D1B8u;
            // 0x28d1bc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A63A0u;
    if (runtime->hasFunction(0x2A63A0u)) {
        auto targetFn = runtime->lookupFunction(0x2A63A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D1C0u; }
        if (ctx->pc != 0x28D1C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVolfBGM__6CSceneFf_0x2a63a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28D1C0u; }
        if (ctx->pc != 0x28D1C0u) { return; }
    }
    ctx->pc = 0x28D1C0u;
label_28d1c0:
    // 0x28d1c0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28d1c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_28d1c4:
    // 0x28d1c4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x28d1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x28d1c8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28d1c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28d1cc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x28d1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x28d1d0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28d1d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28d1d4: 0x3e00008  jr          $ra
    ctx->pc = 0x28D1D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28D1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28D1D4u;
            // 0x28d1d8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28D1DCu;
}
