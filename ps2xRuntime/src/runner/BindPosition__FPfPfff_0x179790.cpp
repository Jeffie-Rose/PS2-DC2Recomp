#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: BindPosition__FPfPfff
// Address: 0x179790 - 0x179864
void BindPosition__FPfPfff_0x179790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BindPosition__FPfPfff_0x179790");
#endif

    switch (ctx->pc) {
        case 0x1797ccu: goto label_1797cc;
        case 0x1797d4u: goto label_1797d4;
        case 0x17980cu: goto label_17980c;
        case 0x17982cu: goto label_17982c;
        case 0x179838u: goto label_179838;
        case 0x179844u: goto label_179844;
        default: break;
    }

    ctx->pc = 0x179790u;

    // 0x179790: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x179790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x179794: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x179794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x179798: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x179798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17979c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x17979cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1797a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1797a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1797a4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x1797a4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1797a8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1797a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1797ac: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1797acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x1797b0: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x1797b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1797b4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1797b4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1797b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1797b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1797bc: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x1797bcu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x1797c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1797c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1797c4: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x1797C4u;
    SET_GPR_U32(ctx, 31, 0x1797CCu);
    ctx->pc = 0x1797C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1797C4u;
            // 0x1797c8: 0x46006d86  mov.s       $f22, $f13 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1797CCu; }
        if (ctx->pc != 0x1797CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1797CCu; }
        if (ctx->pc != 0x1797CCu) { return; }
    }
    ctx->pc = 0x1797CCu;
label_1797cc:
    // 0x1797cc: 0xc04bff4  jal         func_12FFD0
    ctx->pc = 0x1797CCu;
    SET_GPR_U32(ctx, 31, 0x1797D4u);
    ctx->pc = 0x1797D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1797CCu;
            // 0x1797d0: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1797D4u; }
        if (ctx->pc != 0x1797D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1797D4u; }
        if (ctx->pc != 0x1797D4u) { return; }
    }
    ctx->pc = 0x1797D4u;
label_1797d4:
    // 0x1797d4: 0x46140541  sub.s       $f21, $f0, $f20
    ctx->pc = 0x1797d4u;
    ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x1797d8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1797d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1797dc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x1797dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1797e0: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x1797e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1797e4: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x1797e4u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x1797e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1797e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1797ec: 0x0  nop
    ctx->pc = 0x1797ecu;
    // NOP
    // 0x1797f0: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x1797f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x1797f4: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x1797f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x1797f8: 0x46140303  div.s       $f12, $f0, $f20
    ctx->pc = 0x1797f8u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x1797fc: 0x0  nop
    ctx->pc = 0x1797fcu;
    // NOP
    // 0x179800: 0x0  nop
    ctx->pc = 0x179800u;
    // NOP
    // 0x179804: 0xc041c4a  jal         func_107128
    ctx->pc = 0x179804u;
    SET_GPR_U32(ctx, 31, 0x17980Cu);
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17980Cu; }
        if (ctx->pc != 0x17980Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17980Cu; }
        if (ctx->pc != 0x17980Cu) { return; }
    }
    ctx->pc = 0x17980Cu;
label_17980c:
    // 0x17980c: 0x4615b002  mul.s       $f0, $f22, $f21
    ctx->pc = 0x17980cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[21]);
    // 0x179810: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x179810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x179814: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x179814u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x179818: 0x46140303  div.s       $f12, $f0, $f20
    ctx->pc = 0x179818u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x17981c: 0x0  nop
    ctx->pc = 0x17981cu;
    // NOP
    // 0x179820: 0x0  nop
    ctx->pc = 0x179820u;
    // NOP
    // 0x179824: 0xc041c4a  jal         func_107128
    ctx->pc = 0x179824u;
    SET_GPR_U32(ctx, 31, 0x17982Cu);
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17982Cu; }
        if (ctx->pc != 0x17982Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17982Cu; }
        if (ctx->pc != 0x17982Cu) { return; }
    }
    ctx->pc = 0x17982Cu;
label_17982c:
    // 0x17982c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17982cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x179830: 0xc04bcfc  jal         func_12F3F0
    ctx->pc = 0x179830u;
    SET_GPR_U32(ctx, 31, 0x179838u);
    ctx->pc = 0x179834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x179830u;
            // 0x179834: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3F0u;
    if (runtime->hasFunction(0x12F3F0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179838u; }
        if (ctx->pc != 0x179838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSubVector__FPfPf_0x12f3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179838u; }
        if (ctx->pc != 0x179838u) { return; }
    }
    ctx->pc = 0x179838u;
label_179838:
    // 0x179838: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x179838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17983c: 0xc04bcf4  jal         func_12F3D0
    ctx->pc = 0x17983Cu;
    SET_GPR_U32(ctx, 31, 0x179844u);
    ctx->pc = 0x179840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17983Cu;
            // 0x179840: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179844u; }
        if (ctx->pc != 0x179844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x179844u; }
        if (ctx->pc != 0x179844u) { return; }
    }
    ctx->pc = 0x179844u;
label_179844:
    // 0x179844: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x179844u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x179848: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x179848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x17984c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17984cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x179850: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x179850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x179854: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x179854u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x179858: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x179858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x17985c: 0x3e00008  jr          $ra
    ctx->pc = 0x17985Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x179860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17985Cu;
            // 0x179860: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x179864u;
}
