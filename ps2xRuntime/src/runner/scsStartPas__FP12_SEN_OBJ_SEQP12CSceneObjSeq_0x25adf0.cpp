#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsStartPas__FP12_SEN_OBJ_SEQP12CSceneObjSeq
// Address: 0x25adf0 - 0x25af74
void scsStartPas__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25adf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsStartPas__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25adf0");
#endif

    switch (ctx->pc) {
        case 0x25ae18u: goto label_25ae18;
        case 0x25ae20u: goto label_25ae20;
        case 0x25ae34u: goto label_25ae34;
        case 0x25ae44u: goto label_25ae44;
        case 0x25aeacu: goto label_25aeac;
        case 0x25aec0u: goto label_25aec0;
        case 0x25aed0u: goto label_25aed0;
        case 0x25aef8u: goto label_25aef8;
        case 0x25af34u: goto label_25af34;
        case 0x25af50u: goto label_25af50;
        default: break;
    }

    ctx->pc = 0x25adf0u;

    // 0x25adf0: 0x27bdd770  addiu       $sp, $sp, -0x2890
    ctx->pc = 0x25adf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294956912));
    // 0x25adf4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25adf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25adf8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25adf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25adfc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25adfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25ae00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25ae00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ae04: 0x8ca20040  lw          $v0, 0x40($a1)
    ctx->pc = 0x25ae04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x25ae08: 0x1c400007  bgtz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x25AE08u;
    {
        const bool branch_taken_0x25ae08 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x25AE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AE08u;
            // 0x25ae0c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ae08) {
            ctx->pc = 0x25AE28u;
            goto label_25ae28;
        }
    }
    ctx->pc = 0x25AE10u;
    // 0x25ae10: 0xc095b04  jal         func_256C10
    ctx->pc = 0x25AE10u;
    SET_GPR_U32(ctx, 31, 0x25AE18u);
    ctx->pc = 0x25AE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AE10u;
            // 0x25ae14: 0x26040140  addiu       $a0, $s0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256C10u;
    if (runtime->hasFunction(0x256C10u)) {
        auto targetFn = runtime->lookupFunction(0x256C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AE18u; }
        if (ctx->pc != 0x25AE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Setup__9CCharaPasFv_0x256c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AE18u; }
        if (ctx->pc != 0x25AE18u) { return; }
    }
    ctx->pc = 0x25AE18u;
label_25ae18:
    // 0x25ae18: 0xc095b60  jal         func_256D80
    ctx->pc = 0x25AE18u;
    SET_GPR_U32(ctx, 31, 0x25AE20u);
    ctx->pc = 0x25AE1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AE18u;
            // 0x25ae1c: 0x26040140  addiu       $a0, $s0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256D80u;
    if (runtime->hasFunction(0x256D80u)) {
        auto targetFn = runtime->lookupFunction(0x256D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AE20u; }
        if (ctx->pc != 0x25AE20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__9CCharaPasFv_0x256d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AE20u; }
        if (ctx->pc != 0x25AE20u) { return; }
    }
    ctx->pc = 0x25AE20u;
label_25ae20:
    // 0x25ae20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25ae20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ae24: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x25ae24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_25ae28:
    // 0x25ae28: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x25ae28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25ae2c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x25AE2Cu;
    SET_GPR_U32(ctx, 31, 0x25AE34u);
    ctx->pc = 0x25AE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AE2Cu;
            // 0x25ae30: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AE34u; }
        if (ctx->pc != 0x25AE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AE34u; }
        if (ctx->pc != 0x25AE34u) { return; }
    }
    ctx->pc = 0x25AE34u;
label_25ae34:
    // 0x25ae34: 0x26040140  addiu       $a0, $s0, 0x140
    ctx->pc = 0x25ae34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
    // 0x25ae38: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x25ae38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x25ae3c: 0xc095b68  jal         func_256DA0
    ctx->pc = 0x25AE3Cu;
    SET_GPR_U32(ctx, 31, 0x25AE44u);
    ctx->pc = 0x25AE40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AE3Cu;
            // 0x25ae40: 0x26060084  addiu       $a2, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256DA0u;
    if (runtime->hasFunction(0x256DA0u)) {
        auto targetFn = runtime->lookupFunction(0x256DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AE44u; }
        if (ctx->pc != 0x25AE44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__9CCharaPasFPfPf_0x256da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AE44u; }
        if (ctx->pc != 0x25AE44u) { return; }
    }
    ctx->pc = 0x25AE44u;
label_25ae44:
    // 0x25ae44: 0x8e230020  lw          $v1, 0x20($s1)
    ctx->pc = 0x25ae44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x25ae48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25ae48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ae4c: 0x1462003e  bne         $v1, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x25AE4Cu;
    {
        const bool branch_taken_0x25ae4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25AE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AE4Cu;
            // 0x25ae50: 0x26040140  addiu       $a0, $s0, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25ae4c) {
            ctx->pc = 0x25AF48u;
            goto label_25af48;
        }
    }
    ctx->pc = 0x25AE54u;
    // 0x25ae54: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x25ae54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ae58: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x25ae58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x25ae5c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25ae5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25ae60: 0x0  nop
    ctx->pc = 0x25ae60u;
    // NOP
    // 0x25ae64: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25ae64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25ae68: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x25ae68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x25ae6c: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x25ae6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ae70: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25ae70u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25ae74: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x25ae74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x25ae78: 0xc6000074  lwc1        $f0, 0x74($s0)
    ctx->pc = 0x25ae78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ae7c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25ae7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25ae80: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x25ae80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x25ae84: 0xc6000074  lwc1        $f0, 0x74($s0)
    ctx->pc = 0x25ae84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ae88: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25ae88u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25ae8c: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x25ae8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x25ae90: 0xc6000078  lwc1        $f0, 0x78($s0)
    ctx->pc = 0x25ae90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ae94: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25ae94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25ae98: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x25ae98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x25ae9c: 0xc6000078  lwc1        $f0, 0x78($s0)
    ctx->pc = 0x25ae9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25aea0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25aea0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25aea4: 0xc06421c  jal         func_190870
    ctx->pc = 0x25AEA4u;
    SET_GPR_U32(ctx, 31, 0x25AEACu);
    ctx->pc = 0x25AEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AEA4u;
            // 0x25aea8: 0xe7a00058  swc1        $f0, 0x58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AEACu; }
        if (ctx->pc != 0x25AEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AEACu; }
        if (ctx->pc != 0x25AEACu) { return; }
    }
    ctx->pc = 0x25AEACu;
label_25aeac:
    // 0x25aeac: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25aeacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aeb0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x25aeb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x25aeb4: 0x27a60040  addiu       $a2, $sp, 0x40
    ctx->pc = 0x25aeb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x25aeb8: 0xc0b1ed4  jal         func_2C7B50
    ctx->pc = 0x25AEB8u;
    SET_GPR_U32(ctx, 31, 0x25AEC0u);
    ctx->pc = 0x25AEBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AEB8u;
            // 0x25aebc: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7B50u;
    if (runtime->hasFunction(0x2C7B50u)) {
        auto targetFn = runtime->lookupFunction(0x2C7B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AEC0u; }
        if (ctx->pc != 0x25AEC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetColPoly__6CSceneFP6CCPolyR9mgVu0FBOXi_0x2c7b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AEC0u; }
        if (ctx->pc != 0x25AEC0u) { return; }
    }
    ctx->pc = 0x25AEC0u;
label_25aec0:
    // 0x25aec0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25aec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aec4: 0x27a42860  addiu       $a0, $sp, 0x2860
    ctx->pc = 0x25aec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10336));
    // 0x25aec8: 0xc041c5c  jal         func_107170
    ctx->pc = 0x25AEC8u;
    SET_GPR_U32(ctx, 31, 0x25AED0u);
    ctx->pc = 0x25AECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AEC8u;
            // 0x25aecc: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AED0u; }
        if (ctx->pc != 0x25AED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AED0u; }
        if (ctx->pc != 0x25AED0u) { return; }
    }
    ctx->pc = 0x25AED0u;
label_25aed0:
    // 0x25aed0: 0xc7a12864  lwc1        $f1, 0x2864($sp)
    ctx->pc = 0x25aed0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25aed4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x25aed4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x25aed8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25aed8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25aedc: 0x27a42870  addiu       $a0, $sp, 0x2870
    ctx->pc = 0x25aedcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10352));
    // 0x25aee0: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x25aee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x25aee4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25aee4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x25aee8: 0xafa2286c  sw          $v0, 0x286C($sp)
    ctx->pc = 0x25aee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10348), GPR_U32(ctx, 2));
    // 0x25aeec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25aeecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25aef0: 0xc041c5c  jal         func_107170
    ctx->pc = 0x25AEF0u;
    SET_GPR_U32(ctx, 31, 0x25AEF8u);
    ctx->pc = 0x25AEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AEF0u;
            // 0x25aef4: 0xe7a02864  swc1        $f0, 0x2864($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10340), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AEF8u; }
        if (ctx->pc != 0x25AEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AEF8u; }
        if (ctx->pc != 0x25AEF8u) { return; }
    }
    ctx->pc = 0x25AEF8u;
label_25aef8:
    // 0x25aef8: 0xc7a12874  lwc1        $f1, 0x2874($sp)
    ctx->pc = 0x25aef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25aefc: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x25aefcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x25af00: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25af00u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25af04: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25af04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x25af08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25af08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25af0c: 0xafa2287c  sw          $v0, 0x287C($sp)
    ctx->pc = 0x25af0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10364), GPR_U32(ctx, 2));
    // 0x25af10: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x25af10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x25af14: 0x27a62860  addiu       $a2, $sp, 0x2860
    ctx->pc = 0x25af14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 10336));
    // 0x25af18: 0x27a72870  addiu       $a3, $sp, 0x2870
    ctx->pc = 0x25af18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 10352));
    // 0x25af1c: 0x27a82880  addiu       $t0, $sp, 0x2880
    ctx->pc = 0x25af1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 10368));
    // 0x25af20: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x25af20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25af24: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x25af24u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25af28: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25af28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25af2c: 0xc053794  jal         func_14DE50
    ctx->pc = 0x25AF2Cu;
    SET_GPR_U32(ctx, 31, 0x25AF34u);
    ctx->pc = 0x25AF30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AF2Cu;
            // 0x25af30: 0xe7a02874  swc1        $f0, 0x2874($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10356), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DE50u;
    if (runtime->hasFunction(0x14DE50u)) {
        auto targetFn = runtime->lookupFunction(0x14DE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AF34u; }
        if (ctx->pc != 0x25AF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHit__FP6CCPolyiPfPfPfii_0x14de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AF34u; }
        if (ctx->pc != 0x25AF34u) { return; }
    }
    ctx->pc = 0x25AF34u;
label_25af34:
    // 0x25af34: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25AF34u;
    {
        const bool branch_taken_0x25af34 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x25af34) {
            ctx->pc = 0x25AF44u;
            goto label_25af44;
        }
    }
    ctx->pc = 0x25AF3Cu;
    // 0x25af3c: 0xc7a02884  lwc1        $f0, 0x2884($sp)
    ctx->pc = 0x25af3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25af40: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x25af40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
label_25af44:
    // 0x25af44: 0x26040140  addiu       $a0, $s0, 0x140
    ctx->pc = 0x25af44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 320));
label_25af48:
    // 0x25af48: 0xc095bcc  jal         func_256F30
    ctx->pc = 0x25AF48u;
    SET_GPR_U32(ctx, 31, 0x25AF50u);
    ctx->pc = 0x256F30u;
    if (runtime->hasFunction(0x256F30u)) {
        auto targetFn = runtime->lookupFunction(0x256F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AF50u; }
        if (ctx->pc != 0x25AF50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEnd__9CCharaPasFv_0x256f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AF50u; }
        if (ctx->pc != 0x25AF50u) { return; }
    }
    ctx->pc = 0x25AF50u;
label_25af50:
    // 0x25af50: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25AF50u;
    {
        const bool branch_taken_0x25af50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AF50u;
            // 0x25af54: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25af50) {
            ctx->pc = 0x25AF60u;
            goto label_25af60;
        }
    }
    ctx->pc = 0x25AF58u;
    // 0x25af58: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x25af58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
    // 0x25af5c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x25af5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_25af60:
    // 0x25af60: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25af60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25af64: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25af64u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25af68: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25af68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25af6c: 0x3e00008  jr          $ra
    ctx->pc = 0x25AF6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25AF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AF6Cu;
            // 0x25af70: 0x27bd2890  addiu       $sp, $sp, 0x2890 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 10384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25AF74u;
}
