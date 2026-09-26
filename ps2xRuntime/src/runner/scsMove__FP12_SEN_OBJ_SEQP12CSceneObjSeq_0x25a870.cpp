#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsMove__FP12_SEN_OBJ_SEQP12CSceneObjSeq
// Address: 0x25a870 - 0x25ab54
void scsMove__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25a870(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsMove__FP12_SEN_OBJ_SEQP12CSceneObjSeq_0x25a870");
#endif

    switch (ctx->pc) {
        case 0x25a8b0u: goto label_25a8b0;
        case 0x25a928u: goto label_25a928;
        case 0x25a93cu: goto label_25a93c;
        case 0x25a94cu: goto label_25a94c;
        case 0x25a974u: goto label_25a974;
        case 0x25a9b0u: goto label_25a9b0;
        case 0x25a9e0u: goto label_25a9e0;
        case 0x25a9f4u: goto label_25a9f4;
        case 0x25aa1cu: goto label_25aa1c;
        case 0x25aa38u: goto label_25aa38;
        case 0x25aa90u: goto label_25aa90;
        case 0x25aaa4u: goto label_25aaa4;
        case 0x25aab4u: goto label_25aab4;
        case 0x25aadcu: goto label_25aadc;
        case 0x25ab18u: goto label_25ab18;
        default: break;
    }

    ctx->pc = 0x25a870u;

    // 0x25a870: 0x27bdaf20  addiu       $sp, $sp, -0x50E0
    ctx->pc = 0x25a870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294946592));
    // 0x25a874: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x25a874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x25a878: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x25a878u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25a87c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25a87cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x25a880: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x25a880u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a884: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x25a884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x25a888: 0x8ca30040  lw          $v1, 0x40($a1)
    ctx->pc = 0x25a888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 64)));
    // 0x25a88c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x25a88cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x25a890: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x25A890u;
    {
        const bool branch_taken_0x25a890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A890u;
            // 0x25a894: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a890) {
            ctx->pc = 0x25A9CCu;
            goto label_25a9cc;
        }
    }
    ctx->pc = 0x25A898u;
    // 0x25a898: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x25a898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x25a89c: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x25A89Cu;
    {
        const bool branch_taken_0x25a89c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25A8A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A89Cu;
            // 0x25a8a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a89c) {
            ctx->pc = 0x25A8B8u;
            goto label_25a8b8;
        }
    }
    ctx->pc = 0x25A8A4u;
    // 0x25a8a4: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x25a8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x25a8a8: 0xc041c5c  jal         func_107170
    ctx->pc = 0x25A8A8u;
    SET_GPR_U32(ctx, 31, 0x25A8B0u);
    ctx->pc = 0x25A8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A8A8u;
            // 0x25a8ac: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A8B0u; }
        if (ctx->pc != 0x25A8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A8B0u; }
        if (ctx->pc != 0x25A8B0u) { return; }
    }
    ctx->pc = 0x25A8B0u;
label_25a8b0:
    // 0x25a8b0: 0x10000044  b           . + 4 + (0x44 << 2)
    ctx->pc = 0x25A8B0u;
    {
        const bool branch_taken_0x25a8b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A8B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A8B0u;
            // 0x25a8b4: 0xae000040  sw          $zero, 0x40($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a8b0) {
            ctx->pc = 0x25A9C4u;
            goto label_25a9c4;
        }
    }
    ctx->pc = 0x25A8B8u;
label_25a8b8:
    // 0x25a8b8: 0x14620041  bne         $v1, $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x25A8B8u;
    {
        const bool branch_taken_0x25a8b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x25a8b8) {
            ctx->pc = 0x25A9C0u;
            goto label_25a9c0;
        }
    }
    ctx->pc = 0x25A8C0u;
    // 0x25a8c0: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x25a8c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a8c4: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x25a8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x25a8c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25a8c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25a8cc: 0x0  nop
    ctx->pc = 0x25a8ccu;
    // NOP
    // 0x25a8d0: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x25a8d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x25a8d4: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x25a8d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a8d8: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x25a8d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x25a8dc: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x25a8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a8e0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25a8e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25a8e4: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x25a8e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x25a8e8: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x25a8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a8ec: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25a8ecu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25a8f0: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x25a8f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x25a8f4: 0xc6000074  lwc1        $f0, 0x74($s0)
    ctx->pc = 0x25a8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a8f8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25a8f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25a8fc: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x25a8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    // 0x25a900: 0xc6000074  lwc1        $f0, 0x74($s0)
    ctx->pc = 0x25a900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a904: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25a904u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25a908: 0xe7a00044  swc1        $f0, 0x44($sp)
    ctx->pc = 0x25a908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    // 0x25a90c: 0xc6000078  lwc1        $f0, 0x78($s0)
    ctx->pc = 0x25a90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a910: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25a910u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25a914: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x25a914u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x25a918: 0xc6000078  lwc1        $f0, 0x78($s0)
    ctx->pc = 0x25a918u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a91c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25a91cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25a920: 0xc06421c  jal         func_190870
    ctx->pc = 0x25A920u;
    SET_GPR_U32(ctx, 31, 0x25A928u);
    ctx->pc = 0x25A924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A920u;
            // 0x25a924: 0xe7a00048  swc1        $f0, 0x48($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A928u; }
        if (ctx->pc != 0x25A928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A928u; }
        if (ctx->pc != 0x25A928u) { return; }
    }
    ctx->pc = 0x25A928u;
label_25a928:
    // 0x25a928: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25a928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a92c: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x25a92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25a930: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x25a930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x25a934: 0xc0b1ed4  jal         func_2C7B50
    ctx->pc = 0x25A934u;
    SET_GPR_U32(ctx, 31, 0x25A93Cu);
    ctx->pc = 0x25A938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A934u;
            // 0x25a938: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7B50u;
    if (runtime->hasFunction(0x2C7B50u)) {
        auto targetFn = runtime->lookupFunction(0x2C7B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A93Cu; }
        if (ctx->pc != 0x25A93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetColPoly__6CSceneFP6CCPolyR9mgVu0FBOXi_0x2c7b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A93Cu; }
        if (ctx->pc != 0x25A93Cu) { return; }
    }
    ctx->pc = 0x25A93Cu;
label_25a93c:
    // 0x25a93c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25a93cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a940: 0x27a42850  addiu       $a0, $sp, 0x2850
    ctx->pc = 0x25a940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10320));
    // 0x25a944: 0xc041c5c  jal         func_107170
    ctx->pc = 0x25A944u;
    SET_GPR_U32(ctx, 31, 0x25A94Cu);
    ctx->pc = 0x25A948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A944u;
            // 0x25a948: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A94Cu; }
        if (ctx->pc != 0x25A94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A94Cu; }
        if (ctx->pc != 0x25A94Cu) { return; }
    }
    ctx->pc = 0x25A94Cu;
label_25a94c:
    // 0x25a94c: 0xc7a12854  lwc1        $f1, 0x2854($sp)
    ctx->pc = 0x25a94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25a950: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x25a950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x25a954: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25a954u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25a958: 0x27a42860  addiu       $a0, $sp, 0x2860
    ctx->pc = 0x25a958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10336));
    // 0x25a95c: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x25a95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x25a960: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25a960u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x25a964: 0xafa2285c  sw          $v0, 0x285C($sp)
    ctx->pc = 0x25a964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10332), GPR_U32(ctx, 2));
    // 0x25a968: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25a968u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25a96c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x25A96Cu;
    SET_GPR_U32(ctx, 31, 0x25A974u);
    ctx->pc = 0x25A970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A96Cu;
            // 0x25a970: 0xe7a02854  swc1        $f0, 0x2854($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10324), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A974u; }
        if (ctx->pc != 0x25A974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A974u; }
        if (ctx->pc != 0x25A974u) { return; }
    }
    ctx->pc = 0x25A974u;
label_25a974:
    // 0x25a974: 0xc7a12864  lwc1        $f1, 0x2864($sp)
    ctx->pc = 0x25a974u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25a978: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x25a978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x25a97c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25a97cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25a980: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25a980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x25a984: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25a984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a988: 0xafa2286c  sw          $v0, 0x286C($sp)
    ctx->pc = 0x25a988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 10348), GPR_U32(ctx, 2));
    // 0x25a98c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x25a98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x25a990: 0x27a62850  addiu       $a2, $sp, 0x2850
    ctx->pc = 0x25a990u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 10320));
    // 0x25a994: 0x27a72860  addiu       $a3, $sp, 0x2860
    ctx->pc = 0x25a994u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 10336));
    // 0x25a998: 0x27a82870  addiu       $t0, $sp, 0x2870
    ctx->pc = 0x25a998u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 10352));
    // 0x25a99c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x25a99cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25a9a0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x25a9a0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25a9a4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25a9a4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25a9a8: 0xc053794  jal         func_14DE50
    ctx->pc = 0x25A9A8u;
    SET_GPR_U32(ctx, 31, 0x25A9B0u);
    ctx->pc = 0x25A9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A9A8u;
            // 0x25a9ac: 0xe7a02864  swc1        $f0, 0x2864($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10340), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DE50u;
    if (runtime->hasFunction(0x14DE50u)) {
        auto targetFn = runtime->lookupFunction(0x14DE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A9B0u; }
        if (ctx->pc != 0x25A9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHit__FP6CCPolyiPfPfPfii_0x14de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A9B0u; }
        if (ctx->pc != 0x25A9B0u) { return; }
    }
    ctx->pc = 0x25A9B0u;
label_25a9b0:
    // 0x25a9b0: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25A9B0u;
    {
        const bool branch_taken_0x25a9b0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x25a9b0) {
            ctx->pc = 0x25A9C0u;
            goto label_25a9c0;
        }
    }
    ctx->pc = 0x25A9B8u;
    // 0x25a9b8: 0xc7a02874  lwc1        $f0, 0x2874($sp)
    ctx->pc = 0x25a9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 10356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a9bc: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x25a9bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
label_25a9c0:
    // 0x25a9c0: 0xae000040  sw          $zero, 0x40($s0)
    ctx->pc = 0x25a9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 0));
label_25a9c4:
    // 0x25a9c4: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x25A9C4u;
    {
        const bool branch_taken_0x25a9c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A9C4u;
            // 0x25a9c8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a9c4) {
            ctx->pc = 0x25AB40u;
            goto label_25ab40;
        }
    }
    ctx->pc = 0x25A9CCu;
label_25a9cc:
    // 0x25a9cc: 0x1c60000c  bgtz        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x25A9CCu;
    {
        const bool branch_taken_0x25a9cc = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x25A9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A9CCu;
            // 0x25a9d0: 0x27a42880  addiu       $a0, $sp, 0x2880 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a9cc) {
            ctx->pc = 0x25AA00u;
            goto label_25aa00;
        }
    }
    ctx->pc = 0x25A9D4u;
    // 0x25a9d4: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x25a9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x25a9d8: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x25A9D8u;
    SET_GPR_U32(ctx, 31, 0x25A9E0u);
    ctx->pc = 0x25A9DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A9D8u;
            // 0x25a9dc: 0x26060070  addiu       $a2, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A9E0u; }
        if (ctx->pc != 0x25A9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A9E0u; }
        if (ctx->pc != 0x25A9E0u) { return; }
    }
    ctx->pc = 0x25A9E0u;
label_25a9e0:
    // 0x25a9e0: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x25a9e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25a9e4: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x25a9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x25a9e8: 0x27a52880  addiu       $a1, $sp, 0x2880
    ctx->pc = 0x25a9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10368));
    // 0x25a9ec: 0xc041c1e  jal         func_107078
    ctx->pc = 0x25A9ECu;
    SET_GPR_U32(ctx, 31, 0x25A9F4u);
    ctx->pc = 0x25A9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25A9ECu;
            // 0x25a9f0: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107078u;
    if (runtime->hasFunction(0x107078u)) {
        auto targetFn = runtime->lookupFunction(0x107078u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A9F4u; }
        if (ctx->pc != 0x25A9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0DivVector_0x107078(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25A9F4u; }
        if (ctx->pc != 0x25A9F4u) { return; }
    }
    ctx->pc = 0x25A9F4u;
label_25a9f4:
    // 0x25a9f4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25a9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x25a9f8: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x25A9F8u;
    {
        const bool branch_taken_0x25a9f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25A9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25A9F8u;
            // 0x25a9fc: 0xae02009c  sw          $v0, 0x9C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25a9f8) {
            ctx->pc = 0x25AB30u;
            goto label_25ab30;
        }
    }
    ctx->pc = 0x25AA00u;
label_25aa00:
    // 0x25aa00: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x25aa00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x25aa04: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x25AA04u;
    {
        const bool branch_taken_0x25aa04 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25AA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AA04u;
            // 0x25aa08: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aa04) {
            ctx->pc = 0x25AA24u;
            goto label_25aa24;
        }
    }
    ctx->pc = 0x25AA0Cu;
    // 0x25aa0c: 0x26040070  addiu       $a0, $s0, 0x70
    ctx->pc = 0x25aa0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x25aa10: 0x26060090  addiu       $a2, $s0, 0x90
    ctx->pc = 0x25aa10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x25aa14: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x25AA14u;
    SET_GPR_U32(ctx, 31, 0x25AA1Cu);
    ctx->pc = 0x25AA18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AA14u;
            // 0x25aa18: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AA1Cu; }
        if (ctx->pc != 0x25AA1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AA1Cu; }
        if (ctx->pc != 0x25AA1Cu) { return; }
    }
    ctx->pc = 0x25AA1Cu;
label_25aa1c:
    // 0x25aa1c: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x25AA1Cu;
    {
        const bool branch_taken_0x25aa1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x25AA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AA1Cu;
            // 0x25aa20: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aa1c) {
            ctx->pc = 0x25AB2Cu;
            goto label_25ab2c;
        }
    }
    ctx->pc = 0x25AA24u;
label_25aa24:
    // 0x25aa24: 0x14620040  bne         $v1, $v0, . + 4 + (0x40 << 2)
    ctx->pc = 0x25AA24u;
    {
        const bool branch_taken_0x25aa24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x25AA28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AA24u;
            // 0x25aa28: 0x26040070  addiu       $a0, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25aa24) {
            ctx->pc = 0x25AB28u;
            goto label_25ab28;
        }
    }
    ctx->pc = 0x25AA2Cu;
    // 0x25aa2c: 0x26060090  addiu       $a2, $s0, 0x90
    ctx->pc = 0x25aa2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x25aa30: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x25AA30u;
    SET_GPR_U32(ctx, 31, 0x25AA38u);
    ctx->pc = 0x25AA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AA30u;
            // 0x25aa34: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AA38u; }
        if (ctx->pc != 0x25AA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AA38u; }
        if (ctx->pc != 0x25AA38u) { return; }
    }
    ctx->pc = 0x25AA38u;
label_25aa38:
    // 0x25aa38: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x25aa38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25aa3c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x25aa3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x25aa40: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x25aa40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x25aa44: 0x0  nop
    ctx->pc = 0x25aa44u;
    // NOP
    // 0x25aa48: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25aa48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25aa4c: 0xe7a02890  swc1        $f0, 0x2890($sp)
    ctx->pc = 0x25aa4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10384), bits); }
    // 0x25aa50: 0xc6000070  lwc1        $f0, 0x70($s0)
    ctx->pc = 0x25aa50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25aa54: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25aa54u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25aa58: 0xe7a028a0  swc1        $f0, 0x28A0($sp)
    ctx->pc = 0x25aa58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10400), bits); }
    // 0x25aa5c: 0xc6000074  lwc1        $f0, 0x74($s0)
    ctx->pc = 0x25aa5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25aa60: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25aa60u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25aa64: 0xe7a02894  swc1        $f0, 0x2894($sp)
    ctx->pc = 0x25aa64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10388), bits); }
    // 0x25aa68: 0xc6000074  lwc1        $f0, 0x74($s0)
    ctx->pc = 0x25aa68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25aa6c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25aa6cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25aa70: 0xe7a028a4  swc1        $f0, 0x28A4($sp)
    ctx->pc = 0x25aa70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10404), bits); }
    // 0x25aa74: 0xc6000078  lwc1        $f0, 0x78($s0)
    ctx->pc = 0x25aa74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25aa78: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25aa78u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25aa7c: 0xe7a02898  swc1        $f0, 0x2898($sp)
    ctx->pc = 0x25aa7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10392), bits); }
    // 0x25aa80: 0xc6000078  lwc1        $f0, 0x78($s0)
    ctx->pc = 0x25aa80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25aa84: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x25aa84u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x25aa88: 0xc06421c  jal         func_190870
    ctx->pc = 0x25AA88u;
    SET_GPR_U32(ctx, 31, 0x25AA90u);
    ctx->pc = 0x25AA8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AA88u;
            // 0x25aa8c: 0xe7a028a8  swc1        $f0, 0x28A8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 10408), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AA90u; }
        if (ctx->pc != 0x25AA90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AA90u; }
        if (ctx->pc != 0x25AA90u) { return; }
    }
    ctx->pc = 0x25AA90u;
label_25aa90:
    // 0x25aa90: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25aa90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aa94: 0x27a528b0  addiu       $a1, $sp, 0x28B0
    ctx->pc = 0x25aa94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 10416));
    // 0x25aa98: 0x27a62890  addiu       $a2, $sp, 0x2890
    ctx->pc = 0x25aa98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 10384));
    // 0x25aa9c: 0xc0b1ed4  jal         func_2C7B50
    ctx->pc = 0x25AA9Cu;
    SET_GPR_U32(ctx, 31, 0x25AAA4u);
    ctx->pc = 0x25AAA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AA9Cu;
            // 0x25aaa0: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C7B50u;
    if (runtime->hasFunction(0x2C7B50u)) {
        auto targetFn = runtime->lookupFunction(0x2C7B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AAA4u; }
        if (ctx->pc != 0x25AAA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetColPoly__6CSceneFP6CCPolyR9mgVu0FBOXi_0x2c7b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AAA4u; }
        if (ctx->pc != 0x25AAA4u) { return; }
    }
    ctx->pc = 0x25AAA4u;
label_25aaa4:
    // 0x25aaa4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x25aaa4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aaa8: 0x27a450b0  addiu       $a0, $sp, 0x50B0
    ctx->pc = 0x25aaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20656));
    // 0x25aaac: 0xc041c5c  jal         func_107170
    ctx->pc = 0x25AAACu;
    SET_GPR_U32(ctx, 31, 0x25AAB4u);
    ctx->pc = 0x25AAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AAACu;
            // 0x25aab0: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AAB4u; }
        if (ctx->pc != 0x25AAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AAB4u; }
        if (ctx->pc != 0x25AAB4u) { return; }
    }
    ctx->pc = 0x25AAB4u;
label_25aab4:
    // 0x25aab4: 0xc7a150b4  lwc1        $f1, 0x50B4($sp)
    ctx->pc = 0x25aab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20660)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25aab8: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x25aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x25aabc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x25aabcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25aac0: 0x27a450c0  addiu       $a0, $sp, 0x50C0
    ctx->pc = 0x25aac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 20672));
    // 0x25aac4: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x25aac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x25aac8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25aac8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x25aacc: 0xafa250bc  sw          $v0, 0x50BC($sp)
    ctx->pc = 0x25aaccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20668), GPR_U32(ctx, 2));
    // 0x25aad0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25aad0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x25aad4: 0xc041c5c  jal         func_107170
    ctx->pc = 0x25AAD4u;
    SET_GPR_U32(ctx, 31, 0x25AADCu);
    ctx->pc = 0x25AAD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AAD4u;
            // 0x25aad8: 0xe7a050b4  swc1        $f0, 0x50B4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20660), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AADCu; }
        if (ctx->pc != 0x25AADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AADCu; }
        if (ctx->pc != 0x25AADCu) { return; }
    }
    ctx->pc = 0x25AADCu;
label_25aadc:
    // 0x25aadc: 0xc7a150c4  lwc1        $f1, 0x50C4($sp)
    ctx->pc = 0x25aadcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25aae0: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x25aae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x25aae4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x25aae4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x25aae8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25aae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x25aaec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x25aaecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25aaf0: 0xafa250cc  sw          $v0, 0x50CC($sp)
    ctx->pc = 0x25aaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20684), GPR_U32(ctx, 2));
    // 0x25aaf4: 0x27a428b0  addiu       $a0, $sp, 0x28B0
    ctx->pc = 0x25aaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 10416));
    // 0x25aaf8: 0x27a650b0  addiu       $a2, $sp, 0x50B0
    ctx->pc = 0x25aaf8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 20656));
    // 0x25aafc: 0x27a750c0  addiu       $a3, $sp, 0x50C0
    ctx->pc = 0x25aafcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 20672));
    // 0x25ab00: 0x27a850d0  addiu       $t0, $sp, 0x50D0
    ctx->pc = 0x25ab00u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 20688));
    // 0x25ab04: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x25ab04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ab08: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x25ab08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25ab0c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25ab0cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x25ab10: 0xc053794  jal         func_14DE50
    ctx->pc = 0x25AB10u;
    SET_GPR_U32(ctx, 31, 0x25AB18u);
    ctx->pc = 0x25AB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25AB10u;
            // 0x25ab14: 0xe7a050c4  swc1        $f0, 0x50C4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20676), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DE50u;
    if (runtime->hasFunction(0x14DE50u)) {
        auto targetFn = runtime->lookupFunction(0x14DE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AB18u; }
        if (ctx->pc != 0x25AB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHit__FP6CCPolyiPfPfPfii_0x14de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25AB18u; }
        if (ctx->pc != 0x25AB18u) { return; }
    }
    ctx->pc = 0x25AB18u;
label_25ab18:
    // 0x25ab18: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x25AB18u;
    {
        const bool branch_taken_0x25ab18 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x25ab18) {
            ctx->pc = 0x25AB28u;
            goto label_25ab28;
        }
    }
    ctx->pc = 0x25AB20u;
    // 0x25ab20: 0xc7a050d4  lwc1        $f0, 0x50D4($sp)
    ctx->pc = 0x25ab20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 20692)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25ab24: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x25ab24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
label_25ab28:
    // 0x25ab28: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x25ab28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_25ab2c:
    // 0x25ab2c: 0xae02007c  sw          $v0, 0x7C($s0)
    ctx->pc = 0x25ab2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
label_25ab30:
    // 0x25ab30: 0x8e030040  lw          $v1, 0x40($s0)
    ctx->pc = 0x25ab30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x25ab34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x25ab34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x25ab38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x25ab38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x25ab3c: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x25ab3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
label_25ab40:
    // 0x25ab40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25ab40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25ab44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25ab44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25ab48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25ab48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25ab4c: 0x3e00008  jr          $ra
    ctx->pc = 0x25AB4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25AB50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25AB4Cu;
            // 0x25ab50: 0x27bd50e0  addiu       $sp, $sp, 0x50E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 20704));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x25AB54u;
}
