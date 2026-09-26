#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Step__9CFragmentFP6CCPolyi
// Address: 0x2cbe60 - 0x2cc1c8
void Step__9CFragmentFP6CCPolyi_0x2cbe60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Step__9CFragmentFP6CCPolyi_0x2cbe60");
#endif

    switch (ctx->pc) {
        case 0x2cbeecu: goto label_2cbeec;
        case 0x2cbf0cu: goto label_2cbf0c;
        case 0x2cbf3cu: goto label_2cbf3c;
        case 0x2cbf50u: goto label_2cbf50;
        case 0x2cbf80u: goto label_2cbf80;
        case 0x2cbf9cu: goto label_2cbf9c;
        case 0x2cbfe0u: goto label_2cbfe0;
        case 0x2cbfecu: goto label_2cbfec;
        case 0x2cc00cu: goto label_2cc00c;
        case 0x2cc024u: goto label_2cc024;
        case 0x2cc148u: goto label_2cc148;
        default: break;
    }

    ctx->pc = 0x2cbe60u;

    // 0x2cbe60: 0x27bdfaa0  addiu       $sp, $sp, -0x560
    ctx->pc = 0x2cbe60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965920));
    // 0x2cbe64: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2cbe64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2cbe68: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2cbe68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2cbe6c: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2cbe6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2cbe70: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2cbe70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2cbe74: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2cbe74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2cbe78: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2cbe78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2cbe7c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2cbe7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbe80: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2cbe80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2cbe84: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2cbe84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbe88: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2cbe88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2cbe8c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2cbe8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2cbe90: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2cbe90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2cbe94: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2cbe94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2cbe98: 0x106000bf  beqz        $v1, . + 4 + (0xBF << 2)
    ctx->pc = 0x2CBE98u;
    {
        const bool branch_taken_0x2cbe98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBE9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBE98u;
            // 0x2cbe9c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbe98) {
            ctx->pc = 0x2CC198u;
            goto label_2cc198;
        }
    }
    ctx->pc = 0x2CBEA0u;
    // 0x2cbea0: 0xc6a10010  lwc1        $f1, 0x10($s5)
    ctx->pc = 0x2cbea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cbea4: 0x27a200b4  addiu       $v0, $sp, 0xB4
    ctx->pc = 0x2cbea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x2cbea8: 0xc6a00020  lwc1        $f0, 0x20($s5)
    ctx->pc = 0x2cbea8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cbeac: 0x27be00b8  addiu       $fp, $sp, 0xB8
    ctx->pc = 0x2cbeacu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2cbeb0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2cbeb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2cbeb4: 0x26a40020  addiu       $a0, $s5, 0x20
    ctx->pc = 0x2cbeb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x2cbeb8: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x2cbeb8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2cbebc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cbebcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cbec0: 0xe7a000b0  swc1        $f0, 0xB0($sp)
    ctx->pc = 0x2cbec0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x2cbec4: 0xc6a10014  lwc1        $f1, 0x14($s5)
    ctx->pc = 0x2cbec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cbec8: 0xc6a00024  lwc1        $f0, 0x24($s5)
    ctx->pc = 0x2cbec8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cbecc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cbeccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cbed0: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2cbed0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2cbed4: 0xc6a10018  lwc1        $f1, 0x18($s5)
    ctx->pc = 0x2cbed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cbed8: 0xc6a00028  lwc1        $f0, 0x28($s5)
    ctx->pc = 0x2cbed8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cbedc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cbedcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cbee0: 0xe7c00000  swc1        $f0, 0x0($fp)
    ctx->pc = 0x2cbee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 30), 0), bits); }
    // 0x2cbee4: 0xc04bff4  jal         func_12FFD0
    ctx->pc = 0x2CBEE4u;
    SET_GPR_U32(ctx, 31, 0x2CBEECu);
    ctx->pc = 0x2CBEE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBEE4u;
            // 0x2cbee8: 0xafa300bc  sw          $v1, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBEECu; }
        if (ctx->pc != 0x2CBEECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBEECu; }
        if (ctx->pc != 0x2CBEECu) { return; }
    }
    ctx->pc = 0x2CBEECu;
label_2cbeec:
    // 0x2cbeec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2cbeecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbef0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2cbef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbef4: 0x26a60010  addiu       $a2, $s5, 0x10
    ctx->pc = 0x2cbef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x2cbef8: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x2cbef8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2cbefc: 0x27a800c0  addiu       $t0, $sp, 0xC0
    ctx->pc = 0x2cbefcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2cbf00: 0x2e0482d  daddu       $t1, $s7, $zero
    ctx->pc = 0x2cbf00u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbf04: 0xc053794  jal         func_14DE50
    ctx->pc = 0x2CBF04u;
    SET_GPR_U32(ctx, 31, 0x2CBF0Cu);
    ctx->pc = 0x2CBF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBF04u;
            // 0x2cbf08: 0x240a0004  addiu       $t2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DE50u;
    if (runtime->hasFunction(0x14DE50u)) {
        auto targetFn = runtime->lookupFunction(0x14DE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBF0Cu; }
        if (ctx->pc != 0x2CBF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHit__FP6CCPolyiPfPfPfii_0x14de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBF0Cu; }
        if (ctx->pc != 0x2CBF0Cu) { return; }
    }
    ctx->pc = 0x2CBF0Cu;
label_2cbf0c:
    // 0x2cbf0c: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x2cbf0cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
    // 0x2cbf10: 0x14200012  bnez        $at, . + 4 + (0x12 << 2)
    ctx->pc = 0x2CBF10u;
    {
        const bool branch_taken_0x2cbf10 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CBF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBF10u;
            // 0x2cbf14: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbf10) {
            ctx->pc = 0x2CBF5Cu;
            goto label_2cbf5c;
        }
    }
    ctx->pc = 0x2CBF18u;
    // 0x2cbf18: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2cbf18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2cbf1c: 0x26a40020  addiu       $a0, $s5, 0x20
    ctx->pc = 0x2cbf1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
    // 0x2cbf20: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2cbf20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2cbf24: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x2cbf24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2cbf28: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2cbf28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x2cbf2c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2cbf2cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbf30: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2cbf30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2cbf34: 0xc0b2f40  jal         func_2CBD00
    ctx->pc = 0x2CBF34u;
    SET_GPR_U32(ctx, 31, 0x2CBF3Cu);
    ctx->pc = 0x2CBF38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBF34u;
            // 0x2cbf38: 0x24450030  addiu       $a1, $v0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CBD00u;
    if (runtime->hasFunction(0x2CBD00u)) {
        auto targetFn = runtime->lookupFunction(0x2CBD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBF3Cu; }
        if (ctx->pc != 0x2CBF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcReflectionVector__FPfPfPf_0x2cbd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBF3Cu; }
        if (ctx->pc != 0x2CBF3Cu) { return; }
    }
    ctx->pc = 0x2CBF3Cu;
label_2cbf3c:
    // 0x2cbf3c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x2cbf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
    // 0x2cbf40: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2cbf40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2cbf44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2cbf44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2cbf48: 0xc041c4a  jal         func_107128
    ctx->pc = 0x2CBF48u;
    SET_GPR_U32(ctx, 31, 0x2CBF50u);
    ctx->pc = 0x2CBF4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBF48u;
            // 0x2cbf4c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBF50u; }
        if (ctx->pc != 0x2CBF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBF50u; }
        if (ctx->pc != 0x2CBF50u) { return; }
    }
    ctx->pc = 0x2CBF50u;
label_2cbf50:
    // 0x2cbf50: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2cbf50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2cbf54: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x2CBF54u;
    {
        const bool branch_taken_0x2cbf54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBF58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBF54u;
            // 0x2cbf58: 0xafa300dc  sw          $v1, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbf54) {
            ctx->pc = 0x2CC03Cu;
            goto label_2cc03c;
        }
    }
    ctx->pc = 0x2CBF5Cu;
label_2cbf5c:
    // 0x2cbf5c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2cbf5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbf60: 0x26a60010  addiu       $a2, $s5, 0x10
    ctx->pc = 0x2cbf60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 16));
    // 0x2cbf64: 0x27a700b0  addiu       $a3, $sp, 0xB0
    ctx->pc = 0x2cbf64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2cbf68: 0x24080020  addiu       $t0, $zero, 0x20
    ctx->pc = 0x2cbf68u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x2cbf6c: 0x27a900e0  addiu       $t1, $sp, 0xE0
    ctx->pc = 0x2cbf6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2cbf70: 0x27aa0160  addiu       $t2, $sp, 0x160
    ctx->pc = 0x2cbf70u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2cbf74: 0x2e0582d  daddu       $t3, $s7, $zero
    ctx->pc = 0x2cbf74u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbf78: 0xc0538ec  jal         func_14E3B0
    ctx->pc = 0x2CBF78u;
    SET_GPR_U32(ctx, 31, 0x2CBF80u);
    ctx->pc = 0x2CBF7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBF78u;
            // 0x2cbf7c: 0xffa00000  sd          $zero, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3B0u;
    if (runtime->hasFunction(0x14E3B0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBF80u; }
        if (ctx->pc != 0x2CBF80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHits__FP6CCPolyiPfPfiPiPA4_fii_0x14e3b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBF80u; }
        if (ctx->pc != 0x2CBF80u) { return; }
    }
    ctx->pc = 0x2CBF80u;
label_2cbf80:
    // 0x2cbf80: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2cbf80u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbf84: 0x12c0002d  beqz        $s6, . + 4 + (0x2D << 2)
    ctx->pc = 0x2CBF84u;
    {
        const bool branch_taken_0x2cbf84 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBF88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBF84u;
            // 0x2cbf88: 0x16082a  slt         $at, $zero, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbf84) {
            ctx->pc = 0x2CC03Cu;
            goto label_2cc03c;
        }
    }
    ctx->pc = 0x2CBF8Cu;
    // 0x2cbf8c: 0x1020002b  beqz        $at, . + 4 + (0x2B << 2)
    ctx->pc = 0x2CBF8Cu;
    {
        const bool branch_taken_0x2cbf8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBF90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBF8Cu;
            // 0x2cbf90: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbf8c) {
            ctx->pc = 0x2CC03Cu;
            goto label_2cc03c;
        }
    }
    ctx->pc = 0x2CBF94u;
    // 0x2cbf94: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2cbf94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbf98: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2cbf98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2cbf9c:
    // 0x2cbf9c: 0x25d2021  addu        $a0, $s2, $sp
    ctx->pc = 0x2cbf9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
    // 0x2cbfa0: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x2cbfa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2cbfa4: 0x8c8500e0  lw          $a1, 0xE0($a0)
    ctx->pc = 0x2cbfa4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 224)));
    // 0x2cbfa8: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x2cbfa8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2cbfac: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2cbfacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2cbfb0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x2cbfb0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x2cbfb4: 0x2842021  addu        $a0, $s4, $a0
    ctx->pc = 0x2cbfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2cbfb8: 0x84840044  lh          $a0, 0x44($a0)
    ctx->pc = 0x2cbfb8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 68)));
    // 0x2cbfbc: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CBFBCu;
    {
        const bool branch_taken_0x2cbfbc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2CBFC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBFBCu;
            // 0x2cbfc0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbfbc) {
            ctx->pc = 0x2CBFD4u;
            goto label_2cbfd4;
        }
    }
    ctx->pc = 0x2CBFC4u;
    // 0x2cbfc4: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CBFC4u;
    {
        const bool branch_taken_0x2cbfc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x2cbfc4) {
            ctx->pc = 0x2CBFD4u;
            goto label_2cbfd4;
        }
    }
    ctx->pc = 0x2CBFCCu;
    // 0x2cbfcc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x2CBFCCu;
    {
        const bool branch_taken_0x2cbfcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cbfcc) {
            ctx->pc = 0x2CC024u;
            goto label_2cc024;
        }
    }
    ctx->pc = 0x2CBFD4u;
label_2cbfd4:
    // 0x2cbfd4: 0x0  nop
    ctx->pc = 0x2cbfd4u;
    // NOP
    // 0x2cbfd8: 0xc06421c  jal         func_190870
    ctx->pc = 0x2CBFD8u;
    SET_GPR_U32(ctx, 31, 0x2CBFE0u);
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBFE0u; }
        if (ctx->pc != 0x2CBFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBFE0u; }
        if (ctx->pc != 0x2CBFE0u) { return; }
    }
    ctx->pc = 0x2CBFE0u;
label_2cbfe0:
    // 0x2cbfe0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cbfe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbfe4: 0xc0a1150  jal         func_284540
    ctx->pc = 0x2CBFE4u;
    SET_GPR_U32(ctx, 31, 0x2CBFECu);
    ctx->pc = 0x2CBFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBFE4u;
            // 0x2cbfe8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284540u;
    if (runtime->hasFunction(0x284540u)) {
        auto targetFn = runtime->lookupFunction(0x284540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBFECu; }
        if (ctx->pc != 0x2CBFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEffect__6CSceneFi_0x284540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CBFECu; }
        if (ctx->pc != 0x2CBFECu) { return; }
    }
    ctx->pc = 0x2CBFECu;
label_2cbfec:
    // 0x2cbfec: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2cbfecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbff0: 0x1220000c  beqz        $s1, . + 4 + (0xC << 2)
    ctx->pc = 0x2CBFF0u;
    {
        const bool branch_taken_0x2cbff0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CBFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CBFF0u;
            // 0x2cbff4: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cbff0) {
            ctx->pc = 0x2CC024u;
            goto label_2cc024;
        }
    }
    ctx->pc = 0x2CBFF8u;
    // 0x2cbff8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cbff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cbffc: 0x24a501d8  addiu       $a1, $a1, 0x1D8
    ctx->pc = 0x2cbffcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 472));
    // 0x2cc000: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2cc000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cc004: 0xc0b8498  jal         func_2E1260
    ctx->pc = 0x2CC004u;
    SET_GPR_U32(ctx, 31, 0x2CC00Cu);
    ctx->pc = 0x2CC008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC004u;
            // 0x2cc008: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC00Cu; }
        if (ctx->pc != 0x2CC00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC00Cu; }
        if (ctx->pc != 0x2CC00Cu) { return; }
    }
    ctx->pc = 0x2CC00Cu;
label_2cc00c:
    // 0x2cc00c: 0x27d1021  addu        $v0, $s3, $sp
    ctx->pc = 0x2cc00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
    // 0x2cc010: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2cc010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2cc014: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2cc014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc018: 0x24450160  addiu       $a1, $v0, 0x160
    ctx->pc = 0x2cc018u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 352));
    // 0x2cc01c: 0xc0b8894  jal         func_2E2250
    ctx->pc = 0x2CC01Cu;
    SET_GPR_U32(ctx, 31, 0x2CC024u);
    ctx->pc = 0x2CC020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC01Cu;
            // 0x2cc020: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC024u; }
        if (ctx->pc != 0x2CC024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CC024u; }
        if (ctx->pc != 0x2CC024u) { return; }
    }
    ctx->pc = 0x2CC024u;
label_2cc024:
    // 0x2cc024: 0x0  nop
    ctx->pc = 0x2cc024u;
    // NOP
    // 0x2cc028: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2cc028u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2cc02c: 0x216182a  slt         $v1, $s0, $s6
    ctx->pc = 0x2cc02cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x2cc030: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x2cc030u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x2cc034: 0x1460ffd9  bnez        $v1, . + 4 + (-0x27 << 2)
    ctx->pc = 0x2CC034u;
    {
        const bool branch_taken_0x2cc034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CC038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC034u;
            // 0x2cc038: 0x26730010  addiu       $s3, $s3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc034) {
            ctx->pc = 0x2CBF9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cbf9c;
        }
    }
    ctx->pc = 0x2CC03Cu;
label_2cc03c:
    // 0x2cc03c: 0x0  nop
    ctx->pc = 0x2cc03cu;
    // NOP
    // 0x2cc040: 0xc7a400b0  lwc1        $f4, 0xB0($sp)
    ctx->pc = 0x2cc040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2cc044: 0xc6a20010  lwc1        $f2, 0x10($s5)
    ctx->pc = 0x2cc044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2cc048: 0xc7c10000  lwc1        $f1, 0x0($fp)
    ctx->pc = 0x2cc048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cc04c: 0xc6a00018  lwc1        $f0, 0x18($s5)
    ctx->pc = 0x2cc04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc050: 0x46022081  sub.s       $f2, $f4, $f2
    ctx->pc = 0x2cc050u;
    ctx->f[2] = FPU_SUB_S(ctx->f[4], ctx->f[2]);
    // 0x2cc054: 0x12e00017  beqz        $s7, . + 4 + (0x17 << 2)
    ctx->pc = 0x2CC054u;
    {
        const bool branch_taken_0x2cc054 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC054u;
            // 0x2cc058: 0x460008c1  sub.s       $f3, $f1, $f0 (Delay Slot)
        ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc054) {
            ctx->pc = 0x2CC0B4u;
            goto label_2cc0b4;
        }
    }
    ctx->pc = 0x2CC05Cu;
    // 0x2cc05c: 0xe6a40010  swc1        $f4, 0x10($s5)
    ctx->pc = 0x2cc05cu;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
    // 0x2cc060: 0x27a300b4  addiu       $v1, $sp, 0xB4
    ctx->pc = 0x2cc060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
    // 0x2cc064: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x2cc064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc068: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x2cc068u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x2cc06c: 0xe6a00014  swc1        $f0, 0x14($s5)
    ctx->pc = 0x2cc06cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 20), bits); }
    // 0x2cc070: 0xc7c00000  lwc1        $f0, 0x0($fp)
    ctx->pc = 0x2cc070u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc074: 0xe6a00018  swc1        $f0, 0x18($s5)
    ctx->pc = 0x2cc074u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 24), bits); }
    // 0x2cc078: 0xaea4001c  sw          $a0, 0x1C($s5)
    ctx->pc = 0x2cc078u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 4));
    // 0x2cc07c: 0xc6a10030  lwc1        $f1, 0x30($s5)
    ctx->pc = 0x2cc07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cc080: 0xc6a00020  lwc1        $f0, 0x20($s5)
    ctx->pc = 0x2cc080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc084: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cc084u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cc088: 0xe6a00020  swc1        $f0, 0x20($s5)
    ctx->pc = 0x2cc088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 32), bits); }
    // 0x2cc08c: 0xc6a10034  lwc1        $f1, 0x34($s5)
    ctx->pc = 0x2cc08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cc090: 0xc6a00024  lwc1        $f0, 0x24($s5)
    ctx->pc = 0x2cc090u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc094: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cc094u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cc098: 0xe6a00024  swc1        $f0, 0x24($s5)
    ctx->pc = 0x2cc098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 36), bits); }
    // 0x2cc09c: 0xc6a10038  lwc1        $f1, 0x38($s5)
    ctx->pc = 0x2cc09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cc0a0: 0xc6a00028  lwc1        $f0, 0x28($s5)
    ctx->pc = 0x2cc0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc0a4: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x2cc0a4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x2cc0a8: 0xe6a00028  swc1        $f0, 0x28($s5)
    ctx->pc = 0x2cc0a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 40), bits); }
    // 0x2cc0ac: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2CC0ACu;
    {
        const bool branch_taken_0x2cc0ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CC0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC0ACu;
            // 0x2cc0b0: 0xaea4002c  sw          $a0, 0x2C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc0ac) {
            ctx->pc = 0x2CC0F0u;
            goto label_2cc0f0;
        }
    }
    ctx->pc = 0x2CC0B4u;
label_2cc0b4:
    // 0x2cc0b4: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x2cc0b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc0b8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2cc0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2cc0bc: 0xe6a00010  swc1        $f0, 0x10($s5)
    ctx->pc = 0x2cc0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 16), bits); }
    // 0x2cc0c0: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x2cc0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc0c4: 0xe6a00014  swc1        $f0, 0x14($s5)
    ctx->pc = 0x2cc0c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 20), bits); }
    // 0x2cc0c8: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x2cc0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc0cc: 0xe6a00018  swc1        $f0, 0x18($s5)
    ctx->pc = 0x2cc0ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 24), bits); }
    // 0x2cc0d0: 0xaea3001c  sw          $v1, 0x1C($s5)
    ctx->pc = 0x2cc0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 28), GPR_U32(ctx, 3));
    // 0x2cc0d4: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x2cc0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc0d8: 0xe6a00020  swc1        $f0, 0x20($s5)
    ctx->pc = 0x2cc0d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 32), bits); }
    // 0x2cc0dc: 0xc7a000d4  lwc1        $f0, 0xD4($sp)
    ctx->pc = 0x2cc0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc0e0: 0xe6a00024  swc1        $f0, 0x24($s5)
    ctx->pc = 0x2cc0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 36), bits); }
    // 0x2cc0e4: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x2cc0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc0e8: 0xe6a00028  swc1        $f0, 0x28($s5)
    ctx->pc = 0x2cc0e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 40), bits); }
    // 0x2cc0ec: 0xaea3002c  sw          $v1, 0x2C($s5)
    ctx->pc = 0x2cc0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 44), GPR_U32(ctx, 3));
label_2cc0f0:
    // 0x2cc0f0: 0x3c033d80  lui         $v1, 0x3D80
    ctx->pc = 0x2cc0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15744 << 16));
    // 0x2cc0f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2cc0f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc0f8: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x2cc0f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x2cc0fc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2cc0fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2cc100: 0xc6a10040  lwc1        $f1, 0x40($s5)
    ctx->pc = 0x2cc100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cc104: 0x46022002  mul.s       $f0, $f4, $f2
    ctx->pc = 0x2cc104u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
    // 0x2cc108: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x2cc108u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cc10c: 0xe6a10040  swc1        $f1, 0x40($s5)
    ctx->pc = 0x2cc10cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 64), bits); }
    // 0x2cc110: 0xaea00044  sw          $zero, 0x44($s5)
    ctx->pc = 0x2cc110u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 68), GPR_U32(ctx, 0));
    // 0x2cc114: 0x46032002  mul.s       $f0, $f4, $f3
    ctx->pc = 0x2cc114u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
    // 0x2cc118: 0xc6a10048  lwc1        $f1, 0x48($s5)
    ctx->pc = 0x2cc118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cc11c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2cc11cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2cc120: 0xe6a00048  swc1        $f0, 0x48($s5)
    ctx->pc = 0x2cc120u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 72), bits); }
    // 0x2cc124: 0x3c0440c9  lui         $a0, 0x40C9
    ctx->pc = 0x2cc124u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16585 << 16));
    // 0x2cc128: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x2cc128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x2cc12c: 0x34840fdb  ori         $a0, $a0, 0xFDB
    ctx->pc = 0x2cc12cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x2cc130: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x2cc130u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2cc134: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x2cc134u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2cc138: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2cc138u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2cc13c: 0x3c04c049  lui         $a0, 0xC049
    ctx->pc = 0x2cc13cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49225 << 16));
    // 0x2cc140: 0x34830fdb  ori         $v1, $a0, 0xFDB
    ctx->pc = 0x2cc140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)4059);
    // 0x2cc144: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2cc144u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2cc148:
    // 0x2cc148: 0x2a61821  addu        $v1, $s5, $a2
    ctx->pc = 0x2cc148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
    // 0x2cc14c: 0xc4600040  lwc1        $f0, 0x40($v1)
    ctx->pc = 0x2cc14cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc150: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x2cc150u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cc154: 0x0  nop
    ctx->pc = 0x2cc154u;
    // NOP
    // 0x2cc158: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC158u;
    {
        const bool branch_taken_0x2cc158 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2CC15Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC158u;
            // 0x2cc15c: 0x24640040  addiu       $a0, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc158) {
            ctx->pc = 0x2CC168u;
            goto label_2cc168;
        }
    }
    ctx->pc = 0x2CC160u;
    // 0x2cc160: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x2cc160u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x2cc164: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2cc164u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2cc168:
    // 0x2cc168: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x2cc168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2cc16c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2cc16cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2cc170: 0x0  nop
    ctx->pc = 0x2cc170u;
    // NOP
    // 0x2cc174: 0x45000003  bc1f        . + 4 + (0x3 << 2)
    ctx->pc = 0x2CC174u;
    {
        const bool branch_taken_0x2cc174 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2cc174) {
            ctx->pc = 0x2CC184u;
            goto label_2cc184;
        }
    }
    ctx->pc = 0x2CC17Cu;
    // 0x2cc17c: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x2cc17cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x2cc180: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x2cc180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_2cc184:
    // 0x2cc184: 0x0  nop
    ctx->pc = 0x2cc184u;
    // NOP
    // 0x2cc188: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2cc188u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2cc18c: 0x28a30003  slti        $v1, $a1, 0x3
    ctx->pc = 0x2cc18cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2cc190: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
    ctx->pc = 0x2CC190u;
    {
        const bool branch_taken_0x2cc190 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2CC194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC190u;
            // 0x2cc194: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cc190) {
            ctx->pc = 0x2CC148u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cc148;
        }
    }
    ctx->pc = 0x2CC198u;
label_2cc198:
    // 0x2cc198: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2cc198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2cc19c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2cc19cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2cc1a0: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2cc1a0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2cc1a4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2cc1a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2cc1a8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2cc1a8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2cc1ac: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2cc1acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2cc1b0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2cc1b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2cc1b4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2cc1b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2cc1b8: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2cc1b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2cc1bc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2cc1bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2cc1c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CC1C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CC1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CC1C0u;
            // 0x2cc1c4: 0x27bd0560  addiu       $sp, $sp, 0x560 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1376));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CC1C8u;
}
