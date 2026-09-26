#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: WorldMoveInit__FP9mgCMemoryPii
// Address: 0x2ad9d0 - 0x2adcc0
void WorldMoveInit__FP9mgCMemoryPii_0x2ad9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("WorldMoveInit__FP9mgCMemoryPii_0x2ad9d0");
#endif

    switch (ctx->pc) {
        case 0x2ada14u: goto label_2ada14;
        case 0x2ada24u: goto label_2ada24;
        case 0x2ada30u: goto label_2ada30;
        case 0x2ada40u: goto label_2ada40;
        case 0x2ada5cu: goto label_2ada5c;
        case 0x2adab0u: goto label_2adab0;
        case 0x2adaccu: goto label_2adacc;
        case 0x2adae8u: goto label_2adae8;
        case 0x2adb7cu: goto label_2adb7c;
        case 0x2adb88u: goto label_2adb88;
        case 0x2adb98u: goto label_2adb98;
        case 0x2adba0u: goto label_2adba0;
        case 0x2adba8u: goto label_2adba8;
        case 0x2adbd8u: goto label_2adbd8;
        case 0x2adc00u: goto label_2adc00;
        case 0x2adc1cu: goto label_2adc1c;
        case 0x2adc38u: goto label_2adc38;
        case 0x2adc54u: goto label_2adc54;
        case 0x2adc6cu: goto label_2adc6c;
        case 0x2adc7cu: goto label_2adc7c;
        case 0x2adc9cu: goto label_2adc9c;
        default: break;
    }

    ctx->pc = 0x2ad9d0u;

    // 0x2ad9d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2ad9d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2ad9d4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2ad9d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2ad9d8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2ad9d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x2ad9dc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2ad9dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2ad9e0: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2ad9e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ad9e4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2ad9e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2ad9e8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ad9e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ad9ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ad9ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ad9f0: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x2ad9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x2ad9f4: 0x8c850024  lw          $a1, 0x24($a0)
    ctx->pc = 0x2ad9f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x2ad9f8: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x2ad9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x2ad9fc: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x2ad9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ada00: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x2ada00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x2ada04: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2ada04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2ada08: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2ada08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2ada0c: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x2ADA0Cu;
    SET_GPR_U32(ctx, 31, 0x2ADA14u);
    ctx->pc = 0x2ADA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADA0Cu;
            // 0x2ada10: 0x2484c9e0  addiu       $a0, $a0, -0x3620 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADA14u; }
        if (ctx->pc != 0x2ADA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADA14u; }
        if (ctx->pc != 0x2ADA14u) { return; }
    }
    ctx->pc = 0x2ADA14u;
label_2ada14:
    // 0x2ada14: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2ada14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2ada18: 0x240500bd  addiu       $a1, $zero, 0xBD
    ctx->pc = 0x2ada18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 189));
    // 0x2ada1c: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2ADA1Cu;
    SET_GPR_U32(ctx, 31, 0x2ADA24u);
    ctx->pc = 0x2ADA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADA1Cu;
            // 0x2ada20: 0x2484c9e0  addiu       $a0, $a0, -0x3620 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADA24u; }
        if (ctx->pc != 0x2ADA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADA24u; }
        if (ctx->pc != 0x2ADA24u) { return; }
    }
    ctx->pc = 0x2ADA24u;
label_2ada24:
    // 0x2ada24: 0x24040ba4  addiu       $a0, $zero, 0xBA4
    ctx->pc = 0x2ada24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2980));
    // 0x2ada28: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x2ADA28u;
    SET_GPR_U32(ctx, 31, 0x2ADA30u);
    ctx->pc = 0x2ADA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADA28u;
            // 0x2ada2c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADA30u; }
        if (ctx->pc != 0x2ADA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADA30u; }
        if (ctx->pc != 0x2ADA30u) { return; }
    }
    ctx->pc = 0x2ADA30u;
label_2ada30:
    // 0x2ada30: 0x1040004e  beqz        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x2ADA30u;
    {
        const bool branch_taken_0x2ada30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADA34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADA30u;
            // 0x2ada34: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ada30) {
            ctx->pc = 0x2ADB6Cu;
            goto label_2adb6c;
        }
    }
    ctx->pc = 0x2ADA38u;
    // 0x2ada38: 0xc08dc2c  jal         func_2370B0
    ctx->pc = 0x2ADA38u;
    SET_GPR_U32(ctx, 31, 0x2ADA40u);
    ctx->pc = 0x2ADA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADA38u;
            // 0x2ada3c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2370B0u;
    if (runtime->hasFunction(0x2370B0u)) {
        auto targetFn = runtime->lookupFunction(0x2370B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADA40u; }
        if (ctx->pc != 0x2ADA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__14CBaseMenuClassFv_0x2370b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADA40u; }
        if (ctx->pc != 0x2ADA40u) { return; }
    }
    ctx->pc = 0x2ADA40u;
label_2ada40:
    // 0x2ada40: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2ada40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x2ada44: 0x26040118  addiu       $a0, $s0, 0x118
    ctx->pc = 0x2ada44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 280));
    // 0x2ada48: 0x24426230  addiu       $v0, $v0, 0x6230
    ctx->pc = 0x2ada48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25136));
    // 0x2ada4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ada4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ada50: 0xae02010c  sw          $v0, 0x10C($s0)
    ctx->pc = 0x2ada50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
    // 0x2ada54: 0xc049c86  jal         func_127218
    ctx->pc = 0x2ADA54u;
    SET_GPR_U32(ctx, 31, 0x2ADA5Cu);
    ctx->pc = 0x2ADA58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADA54u;
            // 0x2ada58: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADA5Cu; }
        if (ctx->pc != 0x2ADA5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADA5Cu; }
        if (ctx->pc != 0x2ADA5Cu) { return; }
    }
    ctx->pc = 0x2ADA5Cu;
label_2ada5c:
    // 0x2ada5c: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x2ada5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x2ada60: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2ada60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2ada64: 0xa2000184  sb          $zero, 0x184($s0)
    ctx->pc = 0x2ada64u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 388), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ada68: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x2ada68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
    // 0x2ada6c: 0xa2000b90  sb          $zero, 0xB90($s0)
    ctx->pc = 0x2ada6cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2960), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ada70: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ada70u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ada74: 0xa2000b91  sb          $zero, 0xB91($s0)
    ctx->pc = 0x2ada74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2961), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ada78: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2ada78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ada7c: 0xa200018c  sb          $zero, 0x18C($s0)
    ctx->pc = 0x2ada7cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 396), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ada80: 0xa200018d  sb          $zero, 0x18D($s0)
    ctx->pc = 0x2ada80u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 397), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ada84: 0xa2000b92  sb          $zero, 0xB92($s0)
    ctx->pc = 0x2ada84u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2962), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ada88: 0xae000a80  sw          $zero, 0xA80($s0)
    ctx->pc = 0x2ada88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2688), GPR_U32(ctx, 0));
    // 0x2ada8c: 0xae000a88  sw          $zero, 0xA88($s0)
    ctx->pc = 0x2ada8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2696), GPR_U32(ctx, 0));
    // 0x2ada90: 0xae030174  sw          $v1, 0x174($s0)
    ctx->pc = 0x2ada90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 372), GPR_U32(ctx, 3));
    // 0x2ada94: 0xae000178  sw          $zero, 0x178($s0)
    ctx->pc = 0x2ada94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 0));
    // 0x2ada98: 0xae00016c  sw          $zero, 0x16C($s0)
    ctx->pc = 0x2ada98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 364), GPR_U32(ctx, 0));
    // 0x2ada9c: 0xae020180  sw          $v0, 0x180($s0)
    ctx->pc = 0x2ada9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 384), GPR_U32(ctx, 2));
    // 0x2adaa0: 0xae000a74  sw          $zero, 0xA74($s0)
    ctx->pc = 0x2adaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2676), GPR_U32(ctx, 0));
    // 0x2adaa4: 0xae000188  sw          $zero, 0x188($s0)
    ctx->pc = 0x2adaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 392), GPR_U32(ctx, 0));
    // 0x2adaa8: 0xae0001a8  sw          $zero, 0x1A8($s0)
    ctx->pc = 0x2adaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 0));
    // 0x2adaac: 0xae000608  sw          $zero, 0x608($s0)
    ctx->pc = 0x2adaacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1544), GPR_U32(ctx, 0));
label_2adab0:
    // 0x2adab0: 0x2129821  addu        $s3, $s0, $s2
    ctx->pc = 0x2adab0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
    // 0x2adab4: 0x3c023e06  lui         $v0, 0x3E06
    ctx->pc = 0x2adab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15878 << 16));
    // 0x2adab8: 0xc66101a8  lwc1        $f1, 0x1A8($s3)
    ctx->pc = 0x2adab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2adabc: 0x34420a92  ori         $v0, $v0, 0xA92
    ctx->pc = 0x2adabcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
    // 0x2adac0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2adac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2adac4: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x2ADAC4u;
    SET_GPR_U32(ctx, 31, 0x2ADACCu);
    ctx->pc = 0x2ADAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADAC4u;
            // 0x2adac8: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADACCu; }
        if (ctx->pc != 0x2ADACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADACCu; }
        if (ctx->pc != 0x2ADACCu) { return; }
    }
    ctx->pc = 0x2ADACCu;
label_2adacc:
    // 0x2adacc: 0xe66001ac  swc1        $f0, 0x1AC($s3)
    ctx->pc = 0x2adaccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 428), bits); }
    // 0x2adad0: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x2adad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
    // 0x2adad4: 0xc6610608  lwc1        $f1, 0x608($s3)
    ctx->pc = 0x2adad4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 1544)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2adad8: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x2adad8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x2adadc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2adadcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2adae0: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x2ADAE0u;
    SET_GPR_U32(ctx, 31, 0x2ADAE8u);
    ctx->pc = 0x2ADAE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADAE0u;
            // 0x2adae4: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADAE8u; }
        if (ctx->pc != 0x2ADAE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADAE8u; }
        if (ctx->pc != 0x2ADAE8u) { return; }
    }
    ctx->pc = 0x2ADAE8u;
label_2adae8:
    // 0x2adae8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2adae8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2adaec: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2adaecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2adaf0: 0x2a220117  slti        $v0, $s1, 0x117
    ctx->pc = 0x2adaf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)279) ? 1 : 0);
    // 0x2adaf4: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x2ADAF4u;
    {
        const bool branch_taken_0x2adaf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ADAF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADAF4u;
            // 0x2adaf8: 0xe660060c  swc1        $f0, 0x60C($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 1548), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adaf4) {
            ctx->pc = 0x2ADAB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2adab0;
        }
    }
    ctx->pc = 0x2ADAFCu;
    // 0x2adafc: 0xae000a70  sw          $zero, 0xA70($s0)
    ctx->pc = 0x2adafcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2672), GPR_U32(ctx, 0));
    // 0x2adb00: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2adb00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2adb04: 0xae000a68  sw          $zero, 0xA68($s0)
    ctx->pc = 0x2adb04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2664), GPR_U32(ctx, 0));
    // 0x2adb08: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2adb08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2adb0c: 0xae000a6c  sw          $zero, 0xA6C($s0)
    ctx->pc = 0x2adb0cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2668), GPR_U32(ctx, 0));
    // 0x2adb10: 0xae00017c  sw          $zero, 0x17C($s0)
    ctx->pc = 0x2adb10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 0));
    // 0x2adb14: 0xae000198  sw          $zero, 0x198($s0)
    ctx->pc = 0x2adb14u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 0));
    // 0x2adb18: 0xae00019c  sw          $zero, 0x19C($s0)
    ctx->pc = 0x2adb18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 412), GPR_U32(ctx, 0));
    // 0x2adb1c: 0xae0001a0  sw          $zero, 0x1A0($s0)
    ctx->pc = 0x2adb1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 0));
    // 0x2adb20: 0xae0001a4  sw          $zero, 0x1A4($s0)
    ctx->pc = 0x2adb20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 0));
    // 0x2adb24: 0xa6030170  sh          $v1, 0x170($s0)
    ctx->pc = 0x2adb24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 368), (uint16_t)GPR_U32(ctx, 3));
    // 0x2adb28: 0xae000a78  sw          $zero, 0xA78($s0)
    ctx->pc = 0x2adb28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2680), GPR_U32(ctx, 0));
    // 0x2adb2c: 0xae000a7c  sw          $zero, 0xA7C($s0)
    ctx->pc = 0x2adb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2684), GPR_U32(ctx, 0));
    // 0x2adb30: 0xa6000b94  sh          $zero, 0xB94($s0)
    ctx->pc = 0x2adb30u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2964), (uint16_t)GPR_U32(ctx, 0));
    // 0x2adb34: 0xa6000b96  sh          $zero, 0xB96($s0)
    ctx->pc = 0x2adb34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2966), (uint16_t)GPR_U32(ctx, 0));
    // 0x2adb38: 0xa6000b98  sh          $zero, 0xB98($s0)
    ctx->pc = 0x2adb38u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2968), (uint16_t)GPR_U32(ctx, 0));
    // 0x2adb3c: 0xa6000b9a  sh          $zero, 0xB9A($s0)
    ctx->pc = 0x2adb3cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2970), (uint16_t)GPR_U32(ctx, 0));
    // 0x2adb40: 0xa6000b9c  sh          $zero, 0xB9C($s0)
    ctx->pc = 0x2adb40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2972), (uint16_t)GPR_U32(ctx, 0));
    // 0x2adb44: 0xa6000b9e  sh          $zero, 0xB9E($s0)
    ctx->pc = 0x2adb44u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2974), (uint16_t)GPR_U32(ctx, 0));
    // 0x2adb48: 0xa6000ba0  sh          $zero, 0xBA0($s0)
    ctx->pc = 0x2adb48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2976), (uint16_t)GPR_U32(ctx, 0));
    // 0x2adb4c: 0xa6000ba2  sh          $zero, 0xBA2($s0)
    ctx->pc = 0x2adb4cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2978), (uint16_t)GPR_U32(ctx, 0));
    // 0x2adb50: 0xa7809ad0  sh          $zero, -0x6530($gp)
    ctx->pc = 0x2adb50u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941392), (uint16_t)GPR_U32(ctx, 0));
    // 0x2adb54: 0xaf809ad4  sw          $zero, -0x652C($gp)
    ctx->pc = 0x2adb54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941396), GPR_U32(ctx, 0));
    // 0x2adb58: 0xa7809ad8  sh          $zero, -0x6528($gp)
    ctx->pc = 0x2adb58u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941400), (uint16_t)GPR_U32(ctx, 0));
    // 0x2adb5c: 0xaf809adc  sw          $zero, -0x6524($gp)
    ctx->pc = 0x2adb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941404), GPR_U32(ctx, 0));
    // 0x2adb60: 0xa7829aec  sh          $v0, -0x6514($gp)
    ctx->pc = 0x2adb60u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941420), (uint16_t)GPR_U32(ctx, 2));
    // 0x2adb64: 0xa7829ae8  sh          $v0, -0x6518($gp)
    ctx->pc = 0x2adb64u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941416), (uint16_t)GPR_U32(ctx, 2));
    // 0x2adb68: 0xa7829af0  sh          $v0, -0x6510($gp)
    ctx->pc = 0x2adb68u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294941424), (uint16_t)GPR_U32(ctx, 2));
label_2adb6c:
    // 0x2adb6c: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2adb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2adb70: 0xaf909b00  sw          $s0, -0x6500($gp)
    ctx->pc = 0x2adb70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941440), GPR_U32(ctx, 16));
    // 0x2adb74: 0xc04e780  jal         func_139E00
    ctx->pc = 0x2ADB74u;
    SET_GPR_U32(ctx, 31, 0x2ADB7Cu);
    ctx->pc = 0x2ADB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADB74u;
            // 0x2adb78: 0x2484c9e0  addiu       $a0, $a0, -0x3620 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADB7Cu; }
        if (ctx->pc != 0x2ADB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADB7Cu; }
        if (ctx->pc != 0x2ADB7Cu) { return; }
    }
    ctx->pc = 0x2ADB7Cu;
label_2adb7c:
    // 0x2adb7c: 0x8f849b00  lw          $a0, -0x6500($gp)
    ctx->pc = 0x2adb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941440)));
    // 0x2adb80: 0xc08dc6c  jal         func_2371B0
    ctx->pc = 0x2ADB80u;
    SET_GPR_U32(ctx, 31, 0x2ADB88u);
    ctx->pc = 0x2ADB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADB80u;
            // 0x2adb84: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2371B0u;
    if (runtime->hasFunction(0x2371B0u)) {
        auto targetFn = runtime->lookupFunction(0x2371B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADB88u; }
        if (ctx->pc != 0x2ADB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexBlock__14CBaseMenuClassFPi_0x2371b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADB88u; }
        if (ctx->pc != 0x2ADB88u) { return; }
    }
    ctx->pc = 0x2ADB88u;
label_2adb88:
    // 0x2adb88: 0x8f849b00  lw          $a0, -0x6500($gp)
    ctx->pc = 0x2adb88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941440)));
    // 0x2adb8c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2adb8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2adb90: 0xc08e898  jal         func_23A260
    ctx->pc = 0x2ADB90u;
    SET_GPR_U32(ctx, 31, 0x2ADB98u);
    ctx->pc = 0x2ADB94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADB90u;
            // 0x2adb94: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A260u;
    if (runtime->hasFunction(0x23A260u)) {
        auto targetFn = runtime->lookupFunction(0x23A260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADB98u; }
        if (ctx->pc != 0x2ADB98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOutMenu__14CBaseMenuClassFif_0x23a260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADB98u; }
        if (ctx->pc != 0x2ADB98u) { return; }
    }
    ctx->pc = 0x2ADB98u;
label_2adb98:
    // 0x2adb98: 0xc06421c  jal         func_190870
    ctx->pc = 0x2ADB98u;
    SET_GPR_U32(ctx, 31, 0x2ADBA0u);
    ctx->pc = 0x2ADB9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADB98u;
            // 0x2adb9c: 0xa3809ae4  sb          $zero, -0x651C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941412), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADBA0u; }
        if (ctx->pc != 0x2ADBA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADBA0u; }
        if (ctx->pc != 0x2ADBA0u) { return; }
    }
    ctx->pc = 0x2ADBA0u;
label_2adba0:
    // 0x2adba0: 0xc0b49b8  jal         func_2D26E0
    ctx->pc = 0x2ADBA0u;
    SET_GPR_U32(ctx, 31, 0x2ADBA8u);
    ctx->pc = 0x2ADBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADBA0u;
            // 0x2adba4: 0x8c442e60  lw          $a0, 0x2E60($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11872)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D26E0u;
    if (runtime->hasFunction(0x2D26E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D26E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADBA8u; }
        if (ctx->pc != 0x2ADBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapType__Fi_0x2d26e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADBA8u; }
        if (ctx->pc != 0x2ADBA8u) { return; }
    }
    ctx->pc = 0x2ADBA8u;
label_2adba8:
    // 0x2adba8: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x2adba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x2adbac: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x2adbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x2adbb0: 0x84630050  lh          $v1, 0x50($v1)
    ctx->pc = 0x2adbb0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x2adbb4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ADBB4u;
    {
        const bool branch_taken_0x2adbb4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2ADBB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADBB4u;
            // 0x2adbb8: 0x3c040038  lui         $a0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adbb4) {
            ctx->pc = 0x2ADBC4u;
            goto label_2adbc4;
        }
    }
    ctx->pc = 0x2ADBBCu;
    // 0x2adbbc: 0x8f829b00  lw          $v0, -0x6500($gp)
    ctx->pc = 0x2adbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941440)));
    // 0x2adbc0: 0xac400180  sw          $zero, 0x180($v0)
    ctx->pc = 0x2adbc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 384), GPR_U32(ctx, 0));
label_2adbc4:
    // 0x2adbc4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2adbc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2adbc8: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2adbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
    // 0x2adbcc: 0x24a5e968  addiu       $a1, $a1, -0x1698
    ctx->pc = 0x2adbccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961512));
    // 0x2adbd0: 0xc04b414  jal         func_12D050
    ctx->pc = 0x2ADBD0u;
    SET_GPR_U32(ctx, 31, 0x2ADBD8u);
    ctx->pc = 0x2ADBD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADBD0u;
            // 0x2adbd4: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADBD8u; }
        if (ctx->pc != 0x2ADBD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADBD8u; }
        if (ctx->pc != 0x2ADBD8u) { return; }
    }
    ctx->pc = 0x2ADBD8u;
label_2adbd8:
    // 0x2adbd8: 0x8f839b00  lw          $v1, -0x6500($gp)
    ctx->pc = 0x2adbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941440)));
    // 0x2adbdc: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2adbdcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2adbe0: 0x24040258  addiu       $a0, $zero, 0x258
    ctx->pc = 0x2adbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x2adbe4: 0xac62017c  sw          $v0, 0x17C($v1)
    ctx->pc = 0x2adbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 380), GPR_U32(ctx, 2));
    // 0x2adbe8: 0x8c23ca04  lw          $v1, -0x35FC($at)
    ctx->pc = 0x2adbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953476)));
    // 0x2adbec: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2adbecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
    // 0x2adbf0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2adbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x2adbf4: 0x8c22ca00  lw          $v0, -0x3600($at)
    ctx->pc = 0x2adbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953472)));
    // 0x2adbf8: 0xc08cac4  jal         func_232B10
    ctx->pc = 0x2ADBF8u;
    SET_GPR_U32(ctx, 31, 0x2ADC00u);
    ctx->pc = 0x2ADBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADBF8u;
            // 0x2adbfc: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232B10u;
    if (runtime->hasFunction(0x232B10u)) {
        auto targetFn = runtime->lookupFunction(0x232B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADC00u; }
        if (ctx->pc != 0x2ADC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBitFlagMenu__Fi_0x232b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADC00u; }
        if (ctx->pc != 0x2ADC00u) { return; }
    }
    ctx->pc = 0x2ADC00u;
label_2adc00:
    // 0x2adc00: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ADC00u;
    {
        const bool branch_taken_0x2adc00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADC00u;
            // 0x2adc04: 0x24040268  addiu       $a0, $zero, 0x268 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 616));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adc00) {
            ctx->pc = 0x2ADC14u;
            goto label_2adc14;
        }
    }
    ctx->pc = 0x2ADC08u;
    // 0x2adc08: 0x8f829b00  lw          $v0, -0x6500($gp)
    ctx->pc = 0x2adc08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941440)));
    // 0x2adc0c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2adc0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2adc10: 0xa4430170  sh          $v1, 0x170($v0)
    ctx->pc = 0x2adc10u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 368), (uint16_t)GPR_U32(ctx, 3));
label_2adc14:
    // 0x2adc14: 0xc08cac4  jal         func_232B10
    ctx->pc = 0x2ADC14u;
    SET_GPR_U32(ctx, 31, 0x2ADC1Cu);
    ctx->pc = 0x232B10u;
    if (runtime->hasFunction(0x232B10u)) {
        auto targetFn = runtime->lookupFunction(0x232B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADC1Cu; }
        if (ctx->pc != 0x2ADC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBitFlagMenu__Fi_0x232b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADC1Cu; }
        if (ctx->pc != 0x2ADC1Cu) { return; }
    }
    ctx->pc = 0x2ADC1Cu;
label_2adc1c:
    // 0x2adc1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ADC1Cu;
    {
        const bool branch_taken_0x2adc1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADC1Cu;
            // 0x2adc20: 0x24040280  addiu       $a0, $zero, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adc1c) {
            ctx->pc = 0x2ADC30u;
            goto label_2adc30;
        }
    }
    ctx->pc = 0x2ADC24u;
    // 0x2adc24: 0x8f829b00  lw          $v0, -0x6500($gp)
    ctx->pc = 0x2adc24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941440)));
    // 0x2adc28: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2adc28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2adc2c: 0xa4430170  sh          $v1, 0x170($v0)
    ctx->pc = 0x2adc2cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 368), (uint16_t)GPR_U32(ctx, 3));
label_2adc30:
    // 0x2adc30: 0xc08cac4  jal         func_232B10
    ctx->pc = 0x2ADC30u;
    SET_GPR_U32(ctx, 31, 0x2ADC38u);
    ctx->pc = 0x232B10u;
    if (runtime->hasFunction(0x232B10u)) {
        auto targetFn = runtime->lookupFunction(0x232B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADC38u; }
        if (ctx->pc != 0x2ADC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBitFlagMenu__Fi_0x232b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADC38u; }
        if (ctx->pc != 0x2ADC38u) { return; }
    }
    ctx->pc = 0x2ADC38u;
label_2adc38:
    // 0x2adc38: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2ADC38u;
    {
        const bool branch_taken_0x2adc38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2adc38) {
            ctx->pc = 0x2ADC4Cu;
            goto label_2adc4c;
        }
    }
    ctx->pc = 0x2ADC40u;
    // 0x2adc40: 0x8f829b00  lw          $v0, -0x6500($gp)
    ctx->pc = 0x2adc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941440)));
    // 0x2adc44: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2adc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2adc48: 0xa4430170  sh          $v1, 0x170($v0)
    ctx->pc = 0x2adc48u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 368), (uint16_t)GPR_U32(ctx, 3));
label_2adc4c:
    // 0x2adc4c: 0xc052330  jal         func_148CC0
    ctx->pc = 0x2ADC4Cu;
    SET_GPR_U32(ctx, 31, 0x2ADC54u);
    ctx->pc = 0x148CC0u;
    if (runtime->hasFunction(0x148CC0u)) {
        auto targetFn = runtime->lookupFunction(0x148CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADC54u; }
        if (ctx->pc != 0x2ADC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartReadBG__Fv_0x148cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADC54u; }
        if (ctx->pc != 0x2ADC54u) { return; }
    }
    ctx->pc = 0x2ADC54u;
label_2adc54:
    // 0x2adc54: 0x8f829b00  lw          $v0, -0x6500($gp)
    ctx->pc = 0x2adc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941440)));
    // 0x2adc58: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2adc58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x2adc5c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2adc5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2adc60: 0x84460170  lh          $a2, 0x170($v0)
    ctx->pc = 0x2adc60u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 368)));
    // 0x2adc64: 0xc04a234  jal         func_1288D0
    ctx->pc = 0x2ADC64u;
    SET_GPR_U32(ctx, 31, 0x2ADC6Cu);
    ctx->pc = 0x2ADC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADC64u;
            // 0x2adc68: 0x24a5e978  addiu       $a1, $a1, -0x1688 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADC6Cu; }
        if (ctx->pc != 0x2ADC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADC6Cu; }
        if (ctx->pc != 0x2ADC6Cu) { return; }
    }
    ctx->pc = 0x2ADC6Cu;
label_2adc6c:
    // 0x2adc6c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2adc6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2adc70: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2adc70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x2adc74: 0xc094440  jal         func_251100
    ctx->pc = 0x2ADC74u;
    SET_GPR_U32(ctx, 31, 0x2ADC7Cu);
    ctx->pc = 0x2ADC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADC74u;
            // 0x2adc78: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251100u;
    if (runtime->hasFunction(0x251100u)) {
        auto targetFn = runtime->lookupFunction(0x251100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADC7Cu; }
        if (ctx->pc != 0x2ADC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileMenu__FPcP1i_0x251100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADC7Cu; }
        if (ctx->pc != 0x2ADC7Cu) { return; }
    }
    ctx->pc = 0x2ADC7Cu;
label_2adc7c:
    // 0x2adc7c: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x2adc7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2adc80: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2ADC80u;
    {
        const bool branch_taken_0x2adc80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ADC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADC80u;
            // 0x2adc84: 0x22902  srl         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2adc80) {
            ctx->pc = 0x2ADC90u;
            goto label_2adc90;
        }
    }
    ctx->pc = 0x2ADC88u;
    // 0x2adc88: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x2adc88u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
    // 0x2adc8c: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2adc8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2adc90:
    // 0x2adc90: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x2adc90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
    // 0x2adc94: 0xc04e748  jal         func_139D20
    ctx->pc = 0x2ADC94u;
    SET_GPR_U32(ctx, 31, 0x2ADC9Cu);
    ctx->pc = 0x2ADC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADC94u;
            // 0x2adc98: 0x2484c9e0  addiu       $a0, $a0, -0x3620 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADC9Cu; }
        if (ctx->pc != 0x2ADC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ADC9Cu; }
        if (ctx->pc != 0x2ADC9Cu) { return; }
    }
    ctx->pc = 0x2ADC9Cu;
label_2adc9c:
    // 0x2adc9c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2adc9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2adca0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2adca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2adca4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2adca4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2adca8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2adca8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2adcac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2adcacu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2adcb0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2adcb0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2adcb4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2adcb4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2adcb8: 0x3e00008  jr          $ra
    ctx->pc = 0x2ADCB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ADCBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ADCB8u;
            // 0x2adcbc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2ADCC0u;
}
