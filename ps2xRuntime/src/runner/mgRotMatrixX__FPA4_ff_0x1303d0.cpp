#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgRotMatrixX__FPA4_ff
// Address: 0x1303d0 - 0x130424
void mgRotMatrixX__FPA4_ff_0x1303d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgRotMatrixX__FPA4_ff_0x1303d0");
#endif

    switch (ctx->pc) {
        case 0x1303ecu: goto label_1303ec;
        case 0x1303f4u: goto label_1303f4;
        case 0x130404u: goto label_130404;
        default: break;
    }

    ctx->pc = 0x1303d0u;

    // 0x1303d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1303d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1303d4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1303d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1303d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1303d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1303dc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1303dcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1303e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1303e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1303e4: 0xc04c050  jal         func_130140
    ctx->pc = 0x1303E4u;
    SET_GPR_U32(ctx, 31, 0x1303ECu);
    ctx->pc = 0x1303E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1303E4u;
            // 0x1303e8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1303ECu; }
        if (ctx->pc != 0x1303ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1303ECu; }
        if (ctx->pc != 0x1303ECu) { return; }
    }
    ctx->pc = 0x1303ECu;
label_1303ec:
    // 0x1303ec: 0xc047964  jal         func_11E590
    ctx->pc = 0x1303ECu;
    SET_GPR_U32(ctx, 31, 0x1303F4u);
    ctx->pc = 0x1303F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1303ECu;
            // 0x1303f0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1303F4u; }
        if (ctx->pc != 0x1303F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1303F4u; }
        if (ctx->pc != 0x1303F4u) { return; }
    }
    ctx->pc = 0x1303F4u;
label_1303f4:
    // 0x1303f4: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x1303f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x1303f8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1303f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1303fc: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1303FCu;
    SET_GPR_U32(ctx, 31, 0x130404u);
    ctx->pc = 0x130400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1303FCu;
            // 0x130400: 0xe6000014  swc1        $f0, 0x14($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130404u; }
        if (ctx->pc != 0x130404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130404u; }
        if (ctx->pc != 0x130404u) { return; }
    }
    ctx->pc = 0x130404u;
label_130404:
    // 0x130404: 0xe6000018  swc1        $f0, 0x18($s0)
    ctx->pc = 0x130404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x130408: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x130408u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x13040c: 0xe6000024  swc1        $f0, 0x24($s0)
    ctx->pc = 0x13040cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 36), bits); }
    // 0x130410: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x130410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130414: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x130414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x130418: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x130418u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13041c: 0x3e00008  jr          $ra
    ctx->pc = 0x13041Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13041Cu;
            // 0x130420: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x130424u;
}
