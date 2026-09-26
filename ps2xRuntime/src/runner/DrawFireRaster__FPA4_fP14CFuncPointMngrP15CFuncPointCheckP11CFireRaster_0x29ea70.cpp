#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawFireRaster__FPA4_fP14CFuncPointMngrP15CFuncPointCheckP11CFireRaster
// Address: 0x29ea70 - 0x29eb84
void DrawFireRaster__FPA4_fP14CFuncPointMngrP15CFuncPointCheckP11CFireRaster_0x29ea70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawFireRaster__FPA4_fP14CFuncPointMngrP15CFuncPointCheckP11CFireRaster_0x29ea70");
#endif

    switch (ctx->pc) {
        case 0x29eaa4u: goto label_29eaa4;
        case 0x29eaacu: goto label_29eaac;
        case 0x29eab4u: goto label_29eab4;
        case 0x29eaecu: goto label_29eaec;
        case 0x29eb10u: goto label_29eb10;
        case 0x29eb50u: goto label_29eb50;
        case 0x29eb58u: goto label_29eb58;
        case 0x29eb68u: goto label_29eb68;
        default: break;
    }

    ctx->pc = 0x29ea70u;

    // 0x29ea70: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x29ea70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x29ea74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x29ea74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x29ea78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x29ea78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x29ea7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x29ea7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29ea80: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x29ea80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ea84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29ea84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29ea88: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x29ea88u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ea8c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x29ea8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ea90: 0x12200035  beqz        $s1, . + 4 + (0x35 << 2)
    ctx->pc = 0x29EA90u;
    {
        const bool branch_taken_0x29ea90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29EA90u;
            // 0x29ea94: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ea90) {
            ctx->pc = 0x29EB68u;
            goto label_29eb68;
        }
    }
    ctx->pc = 0x29EA98u;
    // 0x29ea98: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29ea98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29ea9c: 0xc0a761c  jal         func_29D870
    ctx->pc = 0x29EA9Cu;
    SET_GPR_U32(ctx, 31, 0x29EAA4u);
    ctx->pc = 0x29EAA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29EA9Cu;
            // 0x29eaa0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D870u;
    if (runtime->hasFunction(0x29D870u)) {
        auto targetFn = runtime->lookupFunction(0x29D870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EAA4u; }
        if (ctx->pc != 0x29EAA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStart__14CFuncPointMngrFi_0x29d870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EAA4u; }
        if (ctx->pc != 0x29EAA4u) { return; }
    }
    ctx->pc = 0x29EAA4u;
label_29eaa4:
    // 0x29eaa4: 0xc0a762c  jal         func_29D8B0
    ctx->pc = 0x29EAA4u;
    SET_GPR_U32(ctx, 31, 0x29EAACu);
    ctx->pc = 0x29EAA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29EAA4u;
            // 0x29eaa8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EAACu; }
        if (ctx->pc != 0x29EAACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EAACu; }
        if (ctx->pc != 0x29EAACu) { return; }
    }
    ctx->pc = 0x29EAACu;
label_29eaac:
    // 0x29eaac: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x29EAACu;
    {
        const bool branch_taken_0x29eaac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29EAB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29EAACu;
            // 0x29eab0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eaac) {
            ctx->pc = 0x29EB60u;
            goto label_29eb60;
        }
    }
    ctx->pc = 0x29EAB4u;
label_29eab4:
    // 0x29eab4: 0x8e0201b0  lw          $v0, 0x1B0($s0)
    ctx->pc = 0x29eab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
    // 0x29eab8: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x29EAB8u;
    {
        const bool branch_taken_0x29eab8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29eab8) {
            ctx->pc = 0x29EB50u;
            goto label_29eb50;
        }
    }
    ctx->pc = 0x29EAC0u;
    // 0x29eac0: 0x8e020034  lw          $v0, 0x34($s0)
    ctx->pc = 0x29eac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x29eac4: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x29EAC4u;
    {
        const bool branch_taken_0x29eac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29eac4) {
            ctx->pc = 0x29EB50u;
            goto label_29eb50;
        }
    }
    ctx->pc = 0x29EACCu;
    // 0x29eacc: 0x7a030180  lq          $v1, 0x180($s0)
    ctx->pc = 0x29eaccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 384)));
    // 0x29ead0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x29ead0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29ead4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29ead4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x29ead8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x29ead8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29eadc: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x29eadcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29eae0: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x29eae0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x29eae4: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x29EAE4u;
    SET_GPR_U32(ctx, 31, 0x29EAECu);
    ctx->pc = 0x29EAE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29EAE4u;
            // 0x29eae8: 0xafa2005c  sw          $v0, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EAECu; }
        if (ctx->pc != 0x29EAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EAECu; }
        if (ctx->pc != 0x29EAECu) { return; }
    }
    ctx->pc = 0x29EAECu;
label_29eaec:
    // 0x29eaec: 0xc60101a4  lwc1        $f1, 0x1A4($s0)
    ctx->pc = 0x29eaecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x29eaf0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x29eaf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x29eaf4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x29eaf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x29eaf8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x29eaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x29eafc: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x29eafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x29eb00: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x29eb00u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x29eb04: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x29eb04u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x29eb08: 0xc0516c8  jal         func_145B20
    ctx->pc = 0x29EB08u;
    SET_GPR_U32(ctx, 31, 0x29EB10u);
    ctx->pc = 0x29EB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29EB08u;
            // 0x29eb0c: 0xe7a00054  swc1        $f0, 0x54($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x145B20u;
    if (runtime->hasFunction(0x145B20u)) {
        auto targetFn = runtime->lookupFunction(0x145B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EB10u; }
        if (ctx->pc != 0x29EB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetDistFromCamera__FPf_0x145b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EB10u; }
        if (ctx->pc != 0x29EB10u) { return; }
    }
    ctx->pc = 0x29EB10u;
label_29eb10:
    // 0x29eb10: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x29eb10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
    // 0x29eb14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29eb14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29eb18: 0x0  nop
    ctx->pc = 0x29eb18u;
    // NOP
    // 0x29eb1c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x29eb1cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29eb20: 0x0  nop
    ctx->pc = 0x29eb20u;
    // NOP
    // 0x29eb24: 0x4501000a  bc1t        . + 4 + (0xA << 2)
    ctx->pc = 0x29EB24u;
    {
        const bool branch_taken_0x29eb24 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x29EB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29EB24u;
            // 0x29eb28: 0x3c0243c8  lui         $v0, 0x43C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17352 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eb24) {
            ctx->pc = 0x29EB50u;
            goto label_29eb50;
        }
    }
    ctx->pc = 0x29EB2Cu;
    // 0x29eb2c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29eb2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x29eb30: 0x0  nop
    ctx->pc = 0x29eb30u;
    // NOP
    // 0x29eb34: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x29eb34u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x29eb38: 0x0  nop
    ctx->pc = 0x29eb38u;
    // NOP
    // 0x29eb3c: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x29EB3Cu;
    {
        const bool branch_taken_0x29eb3c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x29EB40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29EB3Cu;
            // 0x29eb40: 0x260601a0  addiu       $a2, $s0, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 416));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eb3c) {
            ctx->pc = 0x29EB50u;
            goto label_29eb50;
        }
    }
    ctx->pc = 0x29EB44u;
    // 0x29eb44: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29eb44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29eb48: 0xc061104  jal         func_184410
    ctx->pc = 0x29EB48u;
    SET_GPR_U32(ctx, 31, 0x29EB50u);
    ctx->pc = 0x29EB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29EB48u;
            // 0x29eb4c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x184410u;
    if (runtime->hasFunction(0x184410u)) {
        auto targetFn = runtime->lookupFunction(0x184410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EB50u; }
        if (ctx->pc != 0x29EB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__11CFireRasterFPfPf_0x184410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EB50u; }
        if (ctx->pc != 0x29EB50u) { return; }
    }
    ctx->pc = 0x29EB50u;
label_29eb50:
    // 0x29eb50: 0xc0a762c  jal         func_29D8B0
    ctx->pc = 0x29EB50u;
    SET_GPR_U32(ctx, 31, 0x29EB58u);
    ctx->pc = 0x29EB54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29EB50u;
            // 0x29eb54: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EB58u; }
        if (ctx->pc != 0x29EB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EB58u; }
        if (ctx->pc != 0x29EB58u) { return; }
    }
    ctx->pc = 0x29EB58u;
label_29eb58:
    // 0x29eb58: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
    ctx->pc = 0x29EB58u;
    {
        const bool branch_taken_0x29eb58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29EB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29EB58u;
            // 0x29eb5c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29eb58) {
            ctx->pc = 0x29EAB4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29eab4;
        }
    }
    ctx->pc = 0x29EB60u;
label_29eb60:
    // 0x29eb60: 0xc0a7638  jal         func_29D8E0
    ctx->pc = 0x29EB60u;
    SET_GPR_U32(ctx, 31, 0x29EB68u);
    ctx->pc = 0x29EB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29EB60u;
            // 0x29eb64: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8E0u;
    if (runtime->hasFunction(0x29D8E0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EB68u; }
        if (ctx->pc != 0x29EB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEnd__14CFuncPointMngrFv_0x29d8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EB68u; }
        if (ctx->pc != 0x29EB68u) { return; }
    }
    ctx->pc = 0x29EB68u;
label_29eb68:
    // 0x29eb68: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x29eb68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x29eb6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x29eb6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x29eb70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x29eb70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x29eb74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29eb74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29eb78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29eb78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29eb7c: 0x3e00008  jr          $ra
    ctx->pc = 0x29EB7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EB80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29EB7Cu;
            // 0x29eb80: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x29EB84u;
}
