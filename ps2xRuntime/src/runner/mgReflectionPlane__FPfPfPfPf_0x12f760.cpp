#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgReflectionPlane__FPfPfPfPf
// Address: 0x12f760 - 0x12f7f0
void mgReflectionPlane__FPfPfPfPf_0x12f760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgReflectionPlane__FPfPfPfPf_0x12f760");
#endif

    switch (ctx->pc) {
        case 0x12f790u: goto label_12f790;
        case 0x12f7acu: goto label_12f7ac;
        case 0x12f7bcu: goto label_12f7bc;
        case 0x12f7ccu: goto label_12f7cc;
        default: break;
    }

    ctx->pc = 0x12f760u;

    // 0x12f760: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x12f760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x12f764: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x12f764u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x12f768: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x12f768u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x12f76c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x12f76cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x12f770: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x12f770u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f774: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x12f774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x12f778: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x12f778u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f77c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x12f77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x12f780: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x12f780u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f784: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x12f784u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f788: 0xc04bd6c  jal         func_12F5B0
    ctx->pc = 0x12F788u;
    SET_GPR_U32(ctx, 31, 0x12F790u);
    ctx->pc = 0x12F78Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F788u;
            // 0x12f78c: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F5B0u;
    if (runtime->hasFunction(0x12F5B0u)) {
        auto targetFn = runtime->lookupFunction(0x12F5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F790u; }
        if (ctx->pc != 0x12F790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistPlanePoint__FPfPfPf_0x12f5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F790u; }
        if (ctx->pc != 0x12F790u) { return; }
    }
    ctx->pc = 0x12F790u;
label_12f790:
    // 0x12f790: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x12f790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x12f794: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x12f794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f798: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x12f798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x12f79c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x12f79cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x12f7a0: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x12f7a0u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x12f7a4: 0xc041c4a  jal         func_107128
    ctx->pc = 0x12F7A4u;
    SET_GPR_U32(ctx, 31, 0x12F7ACu);
    ctx->pc = 0x12F7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F7A4u;
            // 0x12f7a8: 0x4600a307  neg.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F7ACu; }
        if (ctx->pc != 0x12F7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F7ACu; }
        if (ctx->pc != 0x12F7ACu) { return; }
    }
    ctx->pc = 0x12F7ACu;
label_12f7ac:
    // 0x12f7ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x12f7acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f7b0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x12f7b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f7b4: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x12F7B4u;
    SET_GPR_U32(ctx, 31, 0x12F7BCu);
    ctx->pc = 0x12F7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F7B4u;
            // 0x12f7b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F7BCu; }
        if (ctx->pc != 0x12F7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F7BCu; }
        if (ctx->pc != 0x12F7BCu) { return; }
    }
    ctx->pc = 0x12F7BCu;
label_12f7bc:
    // 0x12f7bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x12f7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f7c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x12f7c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f7c4: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x12F7C4u;
    SET_GPR_U32(ctx, 31, 0x12F7CCu);
    ctx->pc = 0x12F7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12F7C4u;
            // 0x12f7c8: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F7CCu; }
        if (ctx->pc != 0x12F7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12F7CCu; }
        if (ctx->pc != 0x12F7CCu) { return; }
    }
    ctx->pc = 0x12F7CCu;
label_12f7cc:
    // 0x12f7cc: 0x4600a006  mov.s       $f0, $f20
    ctx->pc = 0x12f7ccu;
    ctx->f[0] = FPU_MOV_S(ctx->f[20]);
    // 0x12f7d0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x12f7d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x12f7d4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x12f7d4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x12f7d8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x12f7d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x12f7dc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x12f7dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x12f7e0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x12f7e0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x12f7e4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x12f7e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x12f7e8: 0x3e00008  jr          $ra
    ctx->pc = 0x12F7E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x12F7ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12F7E8u;
            // 0x12f7ec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x12F7F0u;
}
