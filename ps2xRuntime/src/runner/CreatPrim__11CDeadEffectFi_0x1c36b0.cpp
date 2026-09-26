#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CreatPrim__11CDeadEffectFi
// Address: 0x1c36b0 - 0x1c3924
void CreatPrim__11CDeadEffectFi_0x1c36b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CreatPrim__11CDeadEffectFi_0x1c36b0");
#endif

    switch (ctx->pc) {
        case 0x1c36f8u: goto label_1c36f8;
        case 0x1c3718u: goto label_1c3718;
        case 0x1c3740u: goto label_1c3740;
        case 0x1c3760u: goto label_1c3760;
        case 0x1c3780u: goto label_1c3780;
        case 0x1c37a4u: goto label_1c37a4;
        case 0x1c37d0u: goto label_1c37d0;
        case 0x1c37e0u: goto label_1c37e0;
        case 0x1c3800u: goto label_1c3800;
        case 0x1c3820u: goto label_1c3820;
        case 0x1c3854u: goto label_1c3854;
        case 0x1c3864u: goto label_1c3864;
        case 0x1c3884u: goto label_1c3884;
        case 0x1c38b8u: goto label_1c38b8;
        default: break;
    }

    ctx->pc = 0x1c36b0u;

    // 0x1c36b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1c36b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1c36b4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1c36b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1c36b8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1c36b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1c36bc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1c36bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x1c36c0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1c36c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c36c4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1c36c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1c36c8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1c36c8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1c36cc: 0x8c840024  lw          $a0, 0x24($a0)
    ctx->pc = 0x1c36ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
    // 0x1c36d0: 0x1080008d  beqz        $a0, . + 4 + (0x8D << 2)
    ctx->pc = 0x1C36D0u;
    {
        const bool branch_taken_0x1c36d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C36D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C36D0u;
            // 0x1c36d4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c36d0) {
            ctx->pc = 0x1C3908u;
            goto label_1c3908;
        }
    }
    ctx->pc = 0x1C36D8u;
    // 0x1c36d8: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x1c36d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1c36dc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1c36dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1c36e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c36e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1c36e4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1c36e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x1c36e8: 0x828021  addu        $s0, $a0, $v0
    ctx->pc = 0x1c36e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1c36ec: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x1c36ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x1c36f0: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x1C36F0u;
    SET_GPR_U32(ctx, 31, 0x1C36F8u);
    ctx->pc = 0x1C36F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C36F0u;
            // 0x1c36f4: 0xc6540014  lwc1        $f20, 0x14($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C36F8u; }
        if (ctx->pc != 0x1C36F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C36F8u; }
        if (ctx->pc != 0x1C36F8u) { return; }
    }
    ctx->pc = 0x1C36F8u;
label_1c36f8:
    // 0x1c36f8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x1c36f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1c36fc: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c36fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c3700: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c3700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c3704: 0x0  nop
    ctx->pc = 0x1c3704u;
    // NOP
    // 0x1c3708: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1c3708u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c370c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1c370cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c3710: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x1C3710u;
    SET_GPR_U32(ctx, 31, 0x1C3718u);
    ctx->pc = 0x1C3714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3710u;
            // 0x1c3714: 0xe6000010  swc1        $f0, 0x10($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3718u; }
        if (ctx->pc != 0x1C3718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3718u; }
        if (ctx->pc != 0x1C3718u) { return; }
    }
    ctx->pc = 0x1C3718u;
label_1c3718:
    // 0x1c3718: 0xc6420010  lwc1        $f2, 0x10($s2)
    ctx->pc = 0x1c3718u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c371c: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x1c371cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
    // 0x1c3720: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1c3720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
    // 0x1c3724: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c3724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c3728: 0x0  nop
    ctx->pc = 0x1c3728u;
    // NOP
    // 0x1c372c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1c372cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1c3730: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1c3730u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c3734: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1c3734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1c3738: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x1C3738u;
    SET_GPR_U32(ctx, 31, 0x1C3740u);
    ctx->pc = 0x1C373Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3738u;
            // 0x1c373c: 0xc6540014  lwc1        $f20, 0x14($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3740u; }
        if (ctx->pc != 0x1C3740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3740u; }
        if (ctx->pc != 0x1C3740u) { return; }
    }
    ctx->pc = 0x1C3740u;
label_1c3740:
    // 0x1c3740: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x1c3740u;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x1c3744: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1c3744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1c3748: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1c3748u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1c374c: 0x0  nop
    ctx->pc = 0x1c374cu;
    // NOP
    // 0x1c3750: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1c3750u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1c3754: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x1c3754u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1c3758: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x1C3758u;
    SET_GPR_U32(ctx, 31, 0x1C3760u);
    ctx->pc = 0x1C375Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3758u;
            // 0x1c375c: 0xe6000018  swc1        $f0, 0x18($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3760u; }
        if (ctx->pc != 0x1C3760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3760u; }
        if (ctx->pc != 0x1C3760u) { return; }
    }
    ctx->pc = 0x1C3760u;
label_1c3760:
    // 0x1c3760: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x1c3760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
    // 0x1c3764: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x1c3764u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x1c3768: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c3768u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c376c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1c376cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c3770: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1c3770u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1c3774: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1c3774u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x1c3778: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x1C3778u;
    SET_GPR_U32(ctx, 31, 0x1C3780u);
    ctx->pc = 0x1C377Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3778u;
            // 0x1c377c: 0xe6000020  swc1        $f0, 0x20($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3780u; }
        if (ctx->pc != 0x1C3780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3780u; }
        if (ctx->pc != 0x1C3780u) { return; }
    }
    ctx->pc = 0x1C3780u;
label_1c3780:
    // 0x1c3780: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x1c3780u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x1c3784: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1c3784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1c3788: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x1c3788u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c378c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c378cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c3790: 0x0  nop
    ctx->pc = 0x1c3790u;
    // NOP
    // 0x1c3794: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1c3794u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1c3798: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c3798u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c379c: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x1C379Cu;
    SET_GPR_U32(ctx, 31, 0x1C37A4u);
    ctx->pc = 0x1C37A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C379Cu;
            // 0x1c37a0: 0xe6000024  swc1        $f0, 0x24($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C37A4u; }
        if (ctx->pc != 0x1C37A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C37A4u; }
        if (ctx->pc != 0x1C37A4u) { return; }
    }
    ctx->pc = 0x1C37A4u;
label_1c37a4:
    // 0x1c37a4: 0x3c044100  lui         $a0, 0x4100
    ctx->pc = 0x1c37a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16640 << 16));
    // 0x1c37a8: 0x3c034080  lui         $v1, 0x4080
    ctx->pc = 0x1c37a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16512 << 16));
    // 0x1c37ac: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1c37acu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c37b0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c37b0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c37b4: 0x0  nop
    ctx->pc = 0x1c37b4u;
    // NOP
    // 0x1c37b8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1c37b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1c37bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1c37bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1c37c0: 0x1620001f  bnez        $s1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1C37C0u;
    {
        const bool branch_taken_0x1c37c0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C37C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C37C0u;
            // 0x1c37c4: 0xe6000028  swc1        $f0, 0x28($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c37c0) {
            ctx->pc = 0x1C3840u;
            goto label_1c3840;
        }
    }
    ctx->pc = 0x1C37C8u;
    // 0x1c37c8: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x1C37C8u;
    SET_GPR_U32(ctx, 31, 0x1C37D0u);
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C37D0u; }
        if (ctx->pc != 0x1C37D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C37D0u; }
        if (ctx->pc != 0x1C37D0u) { return; }
    }
    ctx->pc = 0x1C37D0u;
label_1c37d0:
    // 0x1c37d0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1c37d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1c37d4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c37d4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c37d8: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C37D8u;
    SET_GPR_U32(ctx, 31, 0x1C37E0u);
    ctx->pc = 0x1C37DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C37D8u;
            // 0x1c37dc: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C37E0u; }
        if (ctx->pc != 0x1C37E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C37E0u; }
        if (ctx->pc != 0x1C37E0u) { return; }
    }
    ctx->pc = 0x1C37E0u;
label_1c37e0:
    // 0x1c37e0: 0x24430014  addiu       $v1, $v0, 0x14
    ctx->pc = 0x1c37e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1c37e4: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x1c37e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x1c37e8: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1c37e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1c37ec: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x1c37ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1c37f0: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1c37f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1c37f4: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x1c37f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x1c37f8: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x1C37F8u;
    SET_GPR_U32(ctx, 31, 0x1C3800u);
    ctx->pc = 0x1C37FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C37F8u;
            // 0x1c37fc: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3800u; }
        if (ctx->pc != 0x1C3800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3800u; }
        if (ctx->pc != 0x1C3800u) { return; }
    }
    ctx->pc = 0x1C3800u;
label_1c3800:
    // 0x1c3800: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x1c3800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c3804: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1c3804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
    // 0x1c3808: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c3808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c380c: 0x0  nop
    ctx->pc = 0x1c380cu;
    // NOP
    // 0x1c3810: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1c3810u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1c3814: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c3814u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c3818: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x1C3818u;
    SET_GPR_U32(ctx, 31, 0x1C3820u);
    ctx->pc = 0x1C381Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C3818u;
            // 0x1c381c: 0xe6000030  swc1        $f0, 0x30($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3820u; }
        if (ctx->pc != 0x1C3820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3820u; }
        if (ctx->pc != 0x1C3820u) { return; }
    }
    ctx->pc = 0x1C3820u;
label_1c3820:
    // 0x1c3820: 0x3c044100  lui         $a0, 0x4100
    ctx->pc = 0x1c3820u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16640 << 16));
    // 0x1c3824: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x1c3824u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x1c3828: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1c3828u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c382c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c382cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c3830: 0x0  nop
    ctx->pc = 0x1c3830u;
    // NOP
    // 0x1c3834: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1c3834u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1c3838: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c3838u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c383c: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x1c383cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_1c3840:
    // 0x1c3840: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c3840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c3844: 0x16230024  bne         $s1, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x1C3844u;
    {
        const bool branch_taken_0x1c3844 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c3844) {
            ctx->pc = 0x1C38D8u;
            goto label_1c38d8;
        }
    }
    ctx->pc = 0x1C384Cu;
    // 0x1c384c: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x1C384Cu;
    SET_GPR_U32(ctx, 31, 0x1C3854u);
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3854u; }
        if (ctx->pc != 0x1C3854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3854u; }
        if (ctx->pc != 0x1C3854u) { return; }
    }
    ctx->pc = 0x1C3854u;
label_1c3854:
    // 0x1c3854: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1c3854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1c3858: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c3858u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c385c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x1C385Cu;
    SET_GPR_U32(ctx, 31, 0x1C3864u);
    ctx->pc = 0x1C3860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C385Cu;
            // 0x1c3860: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3864u; }
        if (ctx->pc != 0x1C3864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3864u; }
        if (ctx->pc != 0x1C3864u) { return; }
    }
    ctx->pc = 0x1C3864u;
label_1c3864:
    // 0x1c3864: 0x24430014  addiu       $v1, $v0, 0x14
    ctx->pc = 0x1c3864u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x1c3868: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x1c3868u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x1c386c: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x1c386cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
    // 0x1c3870: 0x8e03003c  lw          $v1, 0x3C($s0)
    ctx->pc = 0x1c3870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
    // 0x1c3874: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1c3874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1c3878: 0xae030040  sw          $v1, 0x40($s0)
    ctx->pc = 0x1c3878u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 3));
    // 0x1c387c: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x1C387Cu;
    SET_GPR_U32(ctx, 31, 0x1C3884u);
    ctx->pc = 0x1C3880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C387Cu;
            // 0x1c3880: 0xae020034  sw          $v0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3884u; }
        if (ctx->pc != 0x1C3884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C3884u; }
        if (ctx->pc != 0x1C3884u) { return; }
    }
    ctx->pc = 0x1C3884u;
label_1c3884:
    // 0x1c3884: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1c3884u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x1c3888: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x1c3888u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1c388c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x1c388cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x1c3890: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x1c3890u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
    // 0x1c3894: 0xc6420018  lwc1        $f2, 0x18($s2)
    ctx->pc = 0x1c3894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1c3898: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1c3898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x1c389c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1c389cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x1c38a0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1c38a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1c38a4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1c38a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c38a8: 0x0  nop
    ctx->pc = 0x1c38a8u;
    // NOP
    // 0x1c38ac: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c38acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c38b0: 0xc04c3b8  jal         func_130EE0
    ctx->pc = 0x1C38B0u;
    SET_GPR_U32(ctx, 31, 0x1C38B8u);
    ctx->pc = 0x1C38B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C38B0u;
            // 0x1c38b4: 0xe6000030  swc1        $f0, 0x30($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130EE0u;
    if (runtime->hasFunction(0x130EE0u)) {
        auto targetFn = runtime->lookupFunction(0x130EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C38B8u; }
        if (ctx->pc != 0x1C38B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgRnd__Fv_0x130ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C38B8u; }
        if (ctx->pc != 0x1C38B8u) { return; }
    }
    ctx->pc = 0x1C38B8u;
label_1c38b8:
    // 0x1c38b8: 0x3c044280  lui         $a0, 0x4280
    ctx->pc = 0x1c38b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17024 << 16));
    // 0x1c38bc: 0x3c034200  lui         $v1, 0x4200
    ctx->pc = 0x1c38bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16896 << 16));
    // 0x1c38c0: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x1c38c0u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x1c38c4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1c38c4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1c38c8: 0x0  nop
    ctx->pc = 0x1c38c8u;
    // NOP
    // 0x1c38cc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1c38ccu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1c38d0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1c38d0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1c38d4: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x1c38d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_1c38d8:
    // 0x1c38d8: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x1c38d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1c38dc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c38dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c38e0: 0xae430030  sw          $v1, 0x30($s2)
    ctx->pc = 0x1c38e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 3));
    // 0x1c38e4: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x1c38e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x1c38e8: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x1c38e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
    // 0x1c38ec: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x1c38ecu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1c38f0: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1C38F0u;
    {
        const bool branch_taken_0x1c38f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c38f0) {
            ctx->pc = 0x1C38FCu;
            goto label_1c38fc;
        }
    }
    ctx->pc = 0x1C38F8u;
    // 0x1c38f8: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x1c38f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
label_1c38fc:
    // 0x1c38fc: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x1c38fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
    // 0x1c3900: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1c3900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1c3904: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x1c3904u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
label_1c3908:
    // 0x1c3908: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1c3908u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1c390c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1c390cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1c3910: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1c3910u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c3914: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1c3914u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c3918: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1c3918u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c391c: 0x3e00008  jr          $ra
    ctx->pc = 0x1C391Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C3920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C391Cu;
            // 0x1c3920: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C3924u;
}
