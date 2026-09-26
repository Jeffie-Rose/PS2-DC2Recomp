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
// Address: 0x312200 - 0x3122d4
void BindPosition__FPfPfff_0x312200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("BindPosition__FPfPfff_0x312200");
#endif

    switch (ctx->pc) {
        case 0x31223cu: goto label_31223c;
        case 0x312244u: goto label_312244;
        case 0x31227cu: goto label_31227c;
        case 0x31229cu: goto label_31229c;
        case 0x3122a8u: goto label_3122a8;
        case 0x3122b4u: goto label_3122b4;
        default: break;
    }

    ctx->pc = 0x312200u;

    // 0x312200: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x312200u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x312204: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x312204u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x312208: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x312208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x31220c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x31220cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x312210: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x312210u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312214: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x312214u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x312218: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x312218u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31221c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x31221cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x312220: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x312220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x312224: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x312224u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x312228: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x312228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31222c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x31222cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x312230: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x312230u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x312234: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x312234u;
    SET_GPR_U32(ctx, 31, 0x31223Cu);
    ctx->pc = 0x312238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x312234u;
            // 0x312238: 0x46006d86  mov.s       $f22, $f13 (Delay Slot)
        ctx->f[22] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31223Cu; }
        if (ctx->pc != 0x31223Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31223Cu; }
        if (ctx->pc != 0x31223Cu) { return; }
    }
    ctx->pc = 0x31223Cu;
label_31223c:
    // 0x31223c: 0xc04bff4  jal         func_12FFD0
    ctx->pc = 0x31223Cu;
    SET_GPR_U32(ctx, 31, 0x312244u);
    ctx->pc = 0x312240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x31223Cu;
            // 0x312240: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312244u; }
        if (ctx->pc != 0x312244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x312244u; }
        if (ctx->pc != 0x312244u) { return; }
    }
    ctx->pc = 0x312244u;
label_312244:
    // 0x312244: 0x46140541  sub.s       $f21, $f0, $f20
    ctx->pc = 0x312244u;
    ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
    // 0x312248: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x312248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x31224c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x31224cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x312250: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x312250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x312254: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x312254u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x312258: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x312258u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31225c: 0x0  nop
    ctx->pc = 0x31225cu;
    // NOP
    // 0x312260: 0x46160001  sub.s       $f0, $f0, $f22
    ctx->pc = 0x312260u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[22]);
    // 0x312264: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x312264u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x312268: 0x46140303  div.s       $f12, $f0, $f20
    ctx->pc = 0x312268u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x31226c: 0x0  nop
    ctx->pc = 0x31226cu;
    // NOP
    // 0x312270: 0x0  nop
    ctx->pc = 0x312270u;
    // NOP
    // 0x312274: 0xc041c4a  jal         func_107128
    ctx->pc = 0x312274u;
    SET_GPR_U32(ctx, 31, 0x31227Cu);
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31227Cu; }
        if (ctx->pc != 0x31227Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31227Cu; }
        if (ctx->pc != 0x31227Cu) { return; }
    }
    ctx->pc = 0x31227Cu;
label_31227c:
    // 0x31227c: 0x4615b002  mul.s       $f0, $f22, $f21
    ctx->pc = 0x31227cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[22], ctx->f[21]);
    // 0x312280: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x312280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x312284: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x312284u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x312288: 0x46140303  div.s       $f12, $f0, $f20
    ctx->pc = 0x312288u;
    { if (ctx->f[20] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[20]); }
    // 0x31228c: 0x0  nop
    ctx->pc = 0x31228cu;
    // NOP
    // 0x312290: 0x0  nop
    ctx->pc = 0x312290u;
    // NOP
    // 0x312294: 0xc041c4a  jal         func_107128
    ctx->pc = 0x312294u;
    SET_GPR_U32(ctx, 31, 0x31229Cu);
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31229Cu; }
        if (ctx->pc != 0x31229Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31229Cu; }
        if (ctx->pc != 0x31229Cu) { return; }
    }
    ctx->pc = 0x31229Cu;
label_31229c:
    // 0x31229c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31229cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3122a0: 0xc04bcfc  jal         func_12F3F0
    ctx->pc = 0x3122A0u;
    SET_GPR_U32(ctx, 31, 0x3122A8u);
    ctx->pc = 0x3122A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3122A0u;
            // 0x3122a4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3F0u;
    if (runtime->hasFunction(0x12F3F0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3122A8u; }
        if (ctx->pc != 0x3122A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSubVector__FPfPf_0x12f3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3122A8u; }
        if (ctx->pc != 0x3122A8u) { return; }
    }
    ctx->pc = 0x3122A8u;
label_3122a8:
    // 0x3122a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3122a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3122ac: 0xc04bcf4  jal         func_12F3D0
    ctx->pc = 0x3122ACu;
    SET_GPR_U32(ctx, 31, 0x3122B4u);
    ctx->pc = 0x3122B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3122ACu;
            // 0x3122b0: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3122B4u; }
        if (ctx->pc != 0x3122B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3122B4u; }
        if (ctx->pc != 0x3122B4u) { return; }
    }
    ctx->pc = 0x3122B4u;
label_3122b4:
    // 0x3122b4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3122b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3122b8: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x3122b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x3122bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3122bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3122c0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3122c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3122c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3122c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3122c8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3122c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3122cc: 0x3e00008  jr          $ra
    ctx->pc = 0x3122CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3122D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3122CCu;
            // 0x3122d0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3122D4u;
}
