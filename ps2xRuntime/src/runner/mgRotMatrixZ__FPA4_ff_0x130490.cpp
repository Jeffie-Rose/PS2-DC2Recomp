#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgRotMatrixZ__FPA4_ff
// Address: 0x130490 - 0x1304e4
void mgRotMatrixZ__FPA4_ff_0x130490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgRotMatrixZ__FPA4_ff_0x130490");
#endif

    switch (ctx->pc) {
        case 0x1304acu: goto label_1304ac;
        case 0x1304b4u: goto label_1304b4;
        case 0x1304c4u: goto label_1304c4;
        default: break;
    }

    ctx->pc = 0x130490u;

    // 0x130490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x130490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x130494: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x130494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x130498: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x130498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13049c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x13049cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x1304a0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1304a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1304a4: 0xc04c050  jal         func_130140
    ctx->pc = 0x1304A4u;
    SET_GPR_U32(ctx, 31, 0x1304ACu);
    ctx->pc = 0x1304A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1304A4u;
            // 0x1304a8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1304ACu; }
        if (ctx->pc != 0x1304ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1304ACu; }
        if (ctx->pc != 0x1304ACu) { return; }
    }
    ctx->pc = 0x1304ACu;
label_1304ac:
    // 0x1304ac: 0xc047964  jal         func_11E590
    ctx->pc = 0x1304ACu;
    SET_GPR_U32(ctx, 31, 0x1304B4u);
    ctx->pc = 0x1304B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1304ACu;
            // 0x1304b0: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1304B4u; }
        if (ctx->pc != 0x1304B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1304B4u; }
        if (ctx->pc != 0x1304B4u) { return; }
    }
    ctx->pc = 0x1304B4u;
label_1304b4:
    // 0x1304b4: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x1304b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x1304b8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1304b8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x1304bc: 0xc047a42  jal         func_11E908
    ctx->pc = 0x1304BCu;
    SET_GPR_U32(ctx, 31, 0x1304C4u);
    ctx->pc = 0x1304C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1304BCu;
            // 0x1304c0: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1304C4u; }
        if (ctx->pc != 0x1304C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1304C4u; }
        if (ctx->pc != 0x1304C4u) { return; }
    }
    ctx->pc = 0x1304C4u;
label_1304c4:
    // 0x1304c4: 0xe6000004  swc1        $f0, 0x4($s0)
    ctx->pc = 0x1304c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x1304c8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1304c8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1304cc: 0xe6000010  swc1        $f0, 0x10($s0)
    ctx->pc = 0x1304ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
    // 0x1304d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1304d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1304d4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1304d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x1304d8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1304d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1304dc: 0x3e00008  jr          $ra
    ctx->pc = 0x1304DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1304E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1304DCu;
            // 0x1304e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1304E4u;
}
