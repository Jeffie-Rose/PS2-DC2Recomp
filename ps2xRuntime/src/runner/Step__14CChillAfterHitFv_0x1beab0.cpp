#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__14CChillAfterHitFv
// Address: 0x1beab0 - 0x1bec70
void Step__14CChillAfterHitFv_0x1beab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__14CChillAfterHitFv_0x1beab0");
#endif

    switch (ctx->pc) {
        case 0x1beae4u: goto label_1beae4;
        case 0x1beb00u: goto label_1beb00;
        case 0x1beb10u: goto label_1beb10;
        case 0x1beb38u: goto label_1beb38;
        case 0x1beba4u: goto label_1beba4;
        case 0x1bebc0u: goto label_1bebc0;
        default: break;
    }

    ctx->pc = 0x1beab0u;

    // 0x1beab0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1beab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1beab4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1beab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1beab8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1beab8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1beabc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1beabcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1beac0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1beac0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1beac4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1beac4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1beac8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1beac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1beacc: 0x10600061  beqz        $v1, . + 4 + (0x61 << 2)
    ctx->pc = 0x1BEACCu;
    {
        const bool branch_taken_0x1beacc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEAD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEACCu;
            // 0x1bead0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beacc) {
            ctx->pc = 0x1BEC54u;
            goto label_1bec54;
        }
    }
    ctx->pc = 0x1BEAD4u;
    // 0x1bead4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bead4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1bead8: 0x26720020  addiu       $s2, $s3, 0x20
    ctx->pc = 0x1bead8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x1beadc: 0x10000056  b           . + 4 + (0x56 << 2)
    ctx->pc = 0x1BEADCu;
    {
        const bool branch_taken_0x1beadc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEADCu;
            // 0x1beae0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beadc) {
            ctx->pc = 0x1BEC38u;
            goto label_1bec38;
        }
    }
    ctx->pc = 0x1BEAE4u;
label_1beae4:
    // 0x1beae4: 0x86430034  lh          $v1, 0x34($s2)
    ctx->pc = 0x1beae4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1beae8: 0x18600050  blez        $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x1BEAE8u;
    {
        const bool branch_taken_0x1beae8 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1beae8) {
            ctx->pc = 0x1BEC2Cu;
            goto label_1bec2c;
        }
    }
    ctx->pc = 0x1BEAF0u;
    // 0x1beaf0: 0xc64c0024  lwc1        $f12, 0x24($s2)
    ctx->pc = 0x1beaf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1beaf4: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x1beaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1beaf8: 0xc041c4a  jal         func_107128
    ctx->pc = 0x1BEAF8u;
    SET_GPR_U32(ctx, 31, 0x1BEB00u);
    ctx->pc = 0x1BEAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEAF8u;
            // 0x1beafc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEB00u; }
        if (ctx->pc != 0x1BEB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEB00u; }
        if (ctx->pc != 0x1BEB00u) { return; }
    }
    ctx->pc = 0x1BEB00u;
label_1beb00:
    // 0x1beb00: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1beb00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1beb04: 0x26440010  addiu       $a0, $s2, 0x10
    ctx->pc = 0x1beb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x1beb08: 0xc04bff4  jal         func_12FFD0
    ctx->pc = 0x1BEB08u;
    SET_GPR_U32(ctx, 31, 0x1BEB10u);
    ctx->pc = 0x1BEB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEB08u;
            // 0x1beb0c: 0xae42001c  sw          $v0, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEB10u; }
        if (ctx->pc != 0x1BEB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEB10u; }
        if (ctx->pc != 0x1BEB10u) { return; }
    }
    ctx->pc = 0x1BEB10u;
label_1beb10:
    // 0x1beb10: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x1beb10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
    // 0x1beb14: 0x34633333  ori         $v1, $v1, 0x3333
    ctx->pc = 0x1beb14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
    // 0x1beb18: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1beb18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1beb1c: 0x0  nop
    ctx->pc = 0x1beb1cu;
    // NOP
    // 0x1beb20: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1beb20u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1beb24: 0x0  nop
    ctx->pc = 0x1beb24u;
    // NOP
    // 0x1beb28: 0x45000004  bc1f        . + 4 + (0x4 << 2)
    ctx->pc = 0x1BEB28u;
    {
        const bool branch_taken_0x1beb28 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1BEB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEB28u;
            // 0x1beb2c: 0x26440010  addiu       $a0, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beb28) {
            ctx->pc = 0x1BEB3Cu;
            goto label_1beb3c;
        }
    }
    ctx->pc = 0x1BEB30u;
    // 0x1beb30: 0xc04bc8c  jal         func_12F230
    ctx->pc = 0x1BEB30u;
    SET_GPR_U32(ctx, 31, 0x1BEB38u);
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEB38u; }
        if (ctx->pc != 0x1BEB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEB38u; }
        if (ctx->pc != 0x1BEB38u) { return; }
    }
    ctx->pc = 0x1BEB38u;
label_1beb38:
    // 0x1beb38: 0xa2400031  sb          $zero, 0x31($s2)
    ctx->pc = 0x1beb38u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 49), (uint8_t)GPR_U32(ctx, 0));
label_1beb3c:
    // 0x1beb3c: 0x0  nop
    ctx->pc = 0x1beb3cu;
    // NOP
    // 0x1beb40: 0x82430032  lb          $v1, 0x32($s2)
    ctx->pc = 0x1beb40u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 50)));
    // 0x1beb44: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1BEB44u;
    {
        const bool branch_taken_0x1beb44 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1beb44) {
            ctx->pc = 0x1BEB54u;
            goto label_1beb54;
        }
    }
    ctx->pc = 0x1BEB4Cu;
    // 0x1beb4c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1beb4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1beb50: 0xa2430032  sb          $v1, 0x32($s2)
    ctx->pc = 0x1beb50u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 50), (uint8_t)GPR_U32(ctx, 3));
label_1beb54:
    // 0x1beb54: 0x0  nop
    ctx->pc = 0x1beb54u;
    // NOP
    // 0x1beb58: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x1beb58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1beb5c: 0xe6400044  swc1        $f0, 0x44($s2)
    ctx->pc = 0x1beb5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 68), bits); }
    // 0x1beb60: 0xc640003c  lwc1        $f0, 0x3C($s2)
    ctx->pc = 0x1beb60u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1beb64: 0xe6400048  swc1        $f0, 0x48($s2)
    ctx->pc = 0x1beb64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 72), bits); }
    // 0x1beb68: 0xc6400040  lwc1        $f0, 0x40($s2)
    ctx->pc = 0x1beb68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1beb6c: 0xe640004c  swc1        $f0, 0x4C($s2)
    ctx->pc = 0x1beb6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 76), bits); }
    // 0x1beb70: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x1beb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1beb74: 0xe6400038  swc1        $f0, 0x38($s2)
    ctx->pc = 0x1beb74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 56), bits); }
    // 0x1beb78: 0xc6400004  lwc1        $f0, 0x4($s2)
    ctx->pc = 0x1beb78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1beb7c: 0xe640003c  swc1        $f0, 0x3C($s2)
    ctx->pc = 0x1beb7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 60), bits); }
    // 0x1beb80: 0xc6400008  lwc1        $f0, 0x8($s2)
    ctx->pc = 0x1beb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1beb84: 0xe6400040  swc1        $f0, 0x40($s2)
    ctx->pc = 0x1beb84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 64), bits); }
    // 0x1beb88: 0x82430031  lb          $v1, 0x31($s2)
    ctx->pc = 0x1beb88u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 49)));
    // 0x1beb8c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1beb8cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1beb90: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
    ctx->pc = 0x1BEB90u;
    {
        const bool branch_taken_0x1beb90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEB90u;
            // 0x1beb94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beb90) {
            ctx->pc = 0x1BEBE4u;
            goto label_1bebe4;
        }
    }
    ctx->pc = 0x1BEB98u;
    // 0x1beb98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1beb98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1beb9c: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x1BEB9Cu;
    SET_GPR_U32(ctx, 31, 0x1BEBA4u);
    ctx->pc = 0x1BEBA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEB9Cu;
            // 0x1beba0: 0x26460010  addiu       $a2, $s2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEBA4u; }
        if (ctx->pc != 0x1BEBA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEBA4u; }
        if (ctx->pc != 0x1BEBA4u) { return; }
    }
    ctx->pc = 0x1BEBA4u;
label_1beba4:
    // 0x1beba4: 0x82420031  lb          $v0, 0x31($s2)
    ctx->pc = 0x1beba4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 49)));
    // 0x1beba8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1beba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1bebac: 0xa2420031  sb          $v0, 0x31($s2)
    ctx->pc = 0x1bebacu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 49), (uint8_t)GPR_U32(ctx, 2));
    // 0x1bebb0: 0xc6410028  lwc1        $f1, 0x28($s2)
    ctx->pc = 0x1bebb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bebb4: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x1bebb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bebb8: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x1BEBB8u;
    SET_GPR_U32(ctx, 31, 0x1BEBC0u);
    ctx->pc = 0x1BEBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEBB8u;
            // 0x1bebbc: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEBC0u; }
        if (ctx->pc != 0x1BEBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BEBC0u; }
        if (ctx->pc != 0x1BEBC0u) { return; }
    }
    ctx->pc = 0x1BEBC0u;
label_1bebc0:
    // 0x1bebc0: 0xe6400028  swc1        $f0, 0x28($s2)
    ctx->pc = 0x1bebc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 40), bits); }
    // 0x1bebc4: 0x3c033f19  lui         $v1, 0x3F19
    ctx->pc = 0x1bebc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16153 << 16));
    // 0x1bebc8: 0xc640002c  lwc1        $f0, 0x2C($s2)
    ctx->pc = 0x1bebc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1bebcc: 0x3463999a  ori         $v1, $v1, 0x999A
    ctx->pc = 0x1bebccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)39322);
    // 0x1bebd0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1bebd0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1bebd4: 0x0  nop
    ctx->pc = 0x1bebd4u;
    // NOP
    // 0x1bebd8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1bebd8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1bebdc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x1BEBDCu;
    {
        const bool branch_taken_0x1bebdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEBE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEBDCu;
            // 0x1bebe0: 0xe640002c  swc1        $f0, 0x2C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 44), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bebdc) {
            ctx->pc = 0x1BEC10u;
            goto label_1bec10;
        }
    }
    ctx->pc = 0x1BEBE4u;
label_1bebe4:
    // 0x1bebe4: 0x0  nop
    ctx->pc = 0x1bebe4u;
    // NOP
    // 0x1bebe8: 0x82450033  lb          $a1, 0x33($s2)
    ctx->pc = 0x1bebe8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 51)));
    // 0x1bebec: 0x86440034  lh          $a0, 0x34($s2)
    ctx->pc = 0x1bebecu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1bebf0: 0x3c033e4c  lui         $v1, 0x3E4C
    ctx->pc = 0x1bebf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15948 << 16));
    // 0x1bebf4: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x1bebf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
    // 0x1bebf8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1bebf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1bebfc: 0x851823  subu        $v1, $a0, $a1
    ctx->pc = 0x1bebfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x1bec00: 0xa6430034  sh          $v1, 0x34($s2)
    ctx->pc = 0x1bec00u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 52), (uint16_t)GPR_U32(ctx, 3));
    // 0x1bec04: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x1bec04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1bec08: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1bec08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1bec0c: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x1bec0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
label_1bec10:
    // 0x1bec10: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1bec10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1bec14: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x1bec14u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x1bec18: 0x86430034  lh          $v1, 0x34($s2)
    ctx->pc = 0x1bec18u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x1bec1c: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x1bec1cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1bec20: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BEC20u;
    {
        const bool branch_taken_0x1bec20 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bec20) {
            ctx->pc = 0x1BEC2Cu;
            goto label_1bec2c;
        }
    }
    ctx->pc = 0x1BEC28u;
    // 0x1bec28: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1bec28u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bec2c:
    // 0x1bec2c: 0x0  nop
    ctx->pc = 0x1bec2cu;
    // NOP
    // 0x1bec30: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1bec30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1bec34: 0x26520050  addiu       $s2, $s2, 0x50
    ctx->pc = 0x1bec34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_1bec38:
    // 0x1bec38: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x1bec38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x1bec3c: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x1bec3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1bec40: 0x1460ffa8  bnez        $v1, . + 4 + (-0x58 << 2)
    ctx->pc = 0x1BEC40u;
    {
        const bool branch_taken_0x1bec40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bec40) {
            ctx->pc = 0x1BEAE4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1beae4;
        }
    }
    ctx->pc = 0x1BEC48u;
    // 0x1bec48: 0x16200002  bnez        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1BEC48u;
    {
        const bool branch_taken_0x1bec48 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bec48) {
            ctx->pc = 0x1BEC54u;
            goto label_1bec54;
        }
    }
    ctx->pc = 0x1BEC50u;
    // 0x1bec50: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1bec50u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_1bec54:
    // 0x1bec54: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1bec54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1bec58: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1bec58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1bec5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1bec5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1bec60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1bec60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1bec64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1bec64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1bec68: 0x3e00008  jr          $ra
    ctx->pc = 0x1BEC68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BEC68u;
            // 0x1bec6c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BEC70u;
}
