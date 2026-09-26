#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsSetAngle__FP12_SEN_CMR_SEQP12CSceneCmrSeq
// Address: 0x257390 - 0x257400
void scsSetAngle__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x257390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsSetAngle__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x257390");
#endif

    switch (ctx->pc) {
        case 0x2573b0u: goto label_2573b0;
        case 0x2573ccu: goto label_2573cc;
        default: break;
    }

    ctx->pc = 0x257390u;

    // 0x257390: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x257390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x257394: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x257394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x257398: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x257398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25739c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25739cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2573a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2573a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2573a4: 0xc48c0030  lwc1        $f12, 0x30($a0)
    ctx->pc = 0x2573a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2573a8: 0xc047a42  jal         func_11E908
    ctx->pc = 0x2573A8u;
    SET_GPR_U32(ctx, 31, 0x2573B0u);
    ctx->pc = 0x2573ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2573A8u;
            // 0x2573ac: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2573B0u; }
        if (ctx->pc != 0x2573B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2573B0u; }
        if (ctx->pc != 0x2573B0u) { return; }
    }
    ctx->pc = 0x2573B0u;
label_2573b0:
    // 0x2573b0: 0xc6020078  lwc1        $f2, 0x78($s0)
    ctx->pc = 0x2573b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2573b4: 0xc6010060  lwc1        $f1, 0x60($s0)
    ctx->pc = 0x2573b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2573b8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2573b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2573bc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2573bcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2573c0: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2573c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2573c4: 0xc047964  jal         func_11E590
    ctx->pc = 0x2573C4u;
    SET_GPR_U32(ctx, 31, 0x2573CCu);
    ctx->pc = 0x2573C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2573C4u;
            // 0x2573c8: 0xc62c0030  lwc1        $f12, 0x30($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2573CCu; }
        if (ctx->pc != 0x2573CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2573CCu; }
        if (ctx->pc != 0x2573CCu) { return; }
    }
    ctx->pc = 0x2573CCu;
label_2573cc:
    // 0x2573cc: 0xc6020078  lwc1        $f2, 0x78($s0)
    ctx->pc = 0x2573ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2573d0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2573d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2573d4: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x2573d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2573d8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2573d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2573dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2573dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2573e0: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x2573e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x2573e4: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x2573e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2573e8: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x2573e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x2573ec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2573ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2573f0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2573f0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2573f4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2573f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2573f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2573F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2573FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2573F8u;
            // 0x2573fc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x257400u;
}
