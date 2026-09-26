#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsSetDist__FP12_SEN_CMR_SEQP12CSceneCmrSeq
// Address: 0x257420 - 0x257490
void scsSetDist__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x257420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsSetDist__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x257420");
#endif

    switch (ctx->pc) {
        case 0x257440u: goto label_257440;
        case 0x25745cu: goto label_25745c;
        default: break;
    }

    ctx->pc = 0x257420u;

    // 0x257420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x257420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x257424: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x257424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x257428: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x257428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25742c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25742cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x257430: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x257430u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257434: 0xc4ac0070  lwc1        $f12, 0x70($a1)
    ctx->pc = 0x257434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x257438: 0xc047a42  jal         func_11E908
    ctx->pc = 0x257438u;
    SET_GPR_U32(ctx, 31, 0x257440u);
    ctx->pc = 0x25743Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257438u;
            // 0x25743c: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257440u; }
        if (ctx->pc != 0x257440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257440u; }
        if (ctx->pc != 0x257440u) { return; }
    }
    ctx->pc = 0x257440u;
label_257440:
    // 0x257440: 0xc6220030  lwc1        $f2, 0x30($s1)
    ctx->pc = 0x257440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x257444: 0xc6010060  lwc1        $f1, 0x60($s0)
    ctx->pc = 0x257444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257448: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x257448u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x25744c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25744cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x257450: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x257450u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x257454: 0xc047964  jal         func_11E590
    ctx->pc = 0x257454u;
    SET_GPR_U32(ctx, 31, 0x25745Cu);
    ctx->pc = 0x257458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257454u;
            // 0x257458: 0xc60c0070  lwc1        $f12, 0x70($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25745Cu; }
        if (ctx->pc != 0x25745Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25745Cu; }
        if (ctx->pc != 0x25745Cu) { return; }
    }
    ctx->pc = 0x25745Cu;
label_25745c:
    // 0x25745c: 0xc6220030  lwc1        $f2, 0x30($s1)
    ctx->pc = 0x25745cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x257460: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x257460u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257464: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x257464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257468: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x257468u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x25746c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25746cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x257470: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x257470u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x257474: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x257474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257478: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x257478u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x25747c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25747cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x257480: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x257480u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257484: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x257484u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257488: 0x3e00008  jr          $ra
    ctx->pc = 0x257488u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x25748Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257488u;
            // 0x25748c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x257490u;
}
