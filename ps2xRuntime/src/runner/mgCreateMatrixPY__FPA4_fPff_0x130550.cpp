#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgCreateMatrixPY__FPA4_fPff
// Address: 0x130550 - 0x1305ac
void mgCreateMatrixPY__FPA4_fPff_0x130550(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgCreateMatrixPY__FPA4_fPff_0x130550");
#endif

    switch (ctx->pc) {
        case 0x130574u: goto label_130574;
        case 0x130584u: goto label_130584;
        default: break;
    }

    ctx->pc = 0x130550u;

    // 0x130550: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x130550u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x130554: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x130554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x130558: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x130558u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x13055c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x13055cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x130560: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x130560u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x130564: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x130564u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x130568: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x130568u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13056c: 0xc04c050  jal         func_130140
    ctx->pc = 0x13056Cu;
    SET_GPR_U32(ctx, 31, 0x130574u);
    ctx->pc = 0x130570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13056Cu;
            // 0x130570: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130574u; }
        if (ctx->pc != 0x130574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130574u; }
        if (ctx->pc != 0x130574u) { return; }
    }
    ctx->pc = 0x130574u;
label_130574:
    // 0x130574: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x130574u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x130578: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x130578u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13057c: 0xc041cf6  jal         func_1073D8
    ctx->pc = 0x13057Cu;
    SET_GPR_U32(ctx, 31, 0x130584u);
    ctx->pc = 0x130580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13057Cu;
            // 0x130580: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130584u; }
        if (ctx->pc != 0x130584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x130584u; }
        if (ctx->pc != 0x130584u) { return; }
    }
    ctx->pc = 0x130584u;
label_130584:
    // 0x130584: 0x7a040000  lq          $a0, 0x0($s0)
    ctx->pc = 0x130584u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x130588: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x130588u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x13058c: 0x7e240030  sq          $a0, 0x30($s1)
    ctx->pc = 0x13058cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), GPR_VEC(ctx, 4));
    // 0x130590: 0xae23003c  sw          $v1, 0x3C($s1)
    ctx->pc = 0x130590u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
    // 0x130594: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x130594u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x130598: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x130598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x13059c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x13059cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1305a0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1305a0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1305a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1305A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1305A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1305A4u;
            // 0x1305a8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1305ACu;
}
