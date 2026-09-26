#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgRotMatrixY__FPA4_ff
// Address: 0x130430 - 0x130484
void mgRotMatrixY__FPA4_ff_0x130430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgRotMatrixY__FPA4_ff_0x130430");
#endif

    switch (ctx->pc) {
        case 0x13044cu: goto label_13044c;
        case 0x130454u: goto label_130454;
        case 0x130464u: goto label_130464;
        default: break;
    }

    ctx->pc = 0x130430u;

    // 0x130430: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x130430u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x130434: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x130434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x130438: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x130438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x13043c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x13043cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x130440: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x130440u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130444: 0xc04c050  jal         func_130140
    ctx->pc = 0x130444u;
    SET_GPR_U32(ctx, 31, 0x13044Cu);
    ctx->pc = 0x130448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x130444u;
            // 0x130448: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13044Cu; }
        if (ctx->pc != 0x13044Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13044Cu; }
        if (ctx->pc != 0x13044Cu) { return; }
    }
    ctx->pc = 0x13044Cu;
label_13044c:
    // 0x13044c: 0xc047964  jal         func_11E590
    ctx->pc = 0x13044Cu;
    SET_GPR_U32(ctx, 31, 0x130454u);
    ctx->pc = 0x130450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13044Cu;
            // 0x130450: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130454u; }
        if (ctx->pc != 0x130454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130454u; }
        if (ctx->pc != 0x130454u) { return; }
    }
    ctx->pc = 0x130454u;
label_130454:
    // 0x130454: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x130454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x130458: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x130458u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x13045c: 0xc047a42  jal         func_11E908
    ctx->pc = 0x13045Cu;
    SET_GPR_U32(ctx, 31, 0x130464u);
    ctx->pc = 0x130460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13045Cu;
            // 0x130460: 0xe6000000  swc1        $f0, 0x0($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130464u; }
        if (ctx->pc != 0x130464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130464u; }
        if (ctx->pc != 0x130464u) { return; }
    }
    ctx->pc = 0x130464u;
label_130464:
    // 0x130464: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x130464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    // 0x130468: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x130468u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x13046c: 0xe6000008  swc1        $f0, 0x8($s0)
    ctx->pc = 0x13046cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 8), bits); }
    // 0x130470: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x130470u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x130474: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x130474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x130478: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x130478u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13047c: 0x3e00008  jr          $ra
    ctx->pc = 0x13047Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x130480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13047Cu;
            // 0x130480: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x130484u;
}
