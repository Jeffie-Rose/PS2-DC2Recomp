#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsSetAHD__FP12_SEN_CMR_SEQP12CSceneCmrSeq
// Address: 0x257490 - 0x257544
void scsSetAHD__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x257490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsSetAHD__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x257490");
#endif

    switch (ctx->pc) {
        case 0x2574d4u: goto label_2574d4;
        case 0x257500u: goto label_257500;
        default: break;
    }

    ctx->pc = 0x257490u;

    // 0x257490: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x257490u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x257494: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x257494u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x257498: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x257498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25749c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25749cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2574a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2574a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2574a4: 0x8ca2007c  lw          $v0, 0x7C($a1)
    ctx->pc = 0x2574a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 124)));
    // 0x2574a8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2574A8u;
    {
        const bool branch_taken_0x2574a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2574ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2574A8u;
            // 0x2574ac: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2574a8) {
            ctx->pc = 0x2574CCu;
            goto label_2574cc;
        }
    }
    ctx->pc = 0x2574B0u;
    // 0x2574b0: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x2574b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2574b4: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x2574b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x2574b8: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x2574b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2574bc: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x2574bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x2574c0: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x2574c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2574c4: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x2574C4u;
    {
        const bool branch_taken_0x2574c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2574C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2574C4u;
            // 0x2574c8: 0xe60000a8  swc1        $f0, 0xA8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2574c4) {
            ctx->pc = 0x25752Cu;
            goto label_25752c;
        }
    }
    ctx->pc = 0x2574CCu;
label_2574cc:
    // 0x2574cc: 0xc047a42  jal         func_11E908
    ctx->pc = 0x2574CCu;
    SET_GPR_U32(ctx, 31, 0x2574D4u);
    ctx->pc = 0x2574D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2574CCu;
            // 0x2574d0: 0xc62c0010  lwc1        $f12, 0x10($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2574D4u; }
        if (ctx->pc != 0x2574D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2574D4u; }
        if (ctx->pc != 0x2574D4u) { return; }
    }
    ctx->pc = 0x2574D4u;
label_2574d4:
    // 0x2574d4: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x2574d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2574d8: 0xc6010060  lwc1        $f1, 0x60($s0)
    ctx->pc = 0x2574d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2574dc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2574dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2574e0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2574e0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2574e4: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2574e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2574e8: 0xc6210014  lwc1        $f1, 0x14($s1)
    ctx->pc = 0x2574e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2574ec: 0xc6000064  lwc1        $f0, 0x64($s0)
    ctx->pc = 0x2574ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2574f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2574f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2574f4: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2574f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2574f8: 0xc047964  jal         func_11E590
    ctx->pc = 0x2574F8u;
    SET_GPR_U32(ctx, 31, 0x257500u);
    ctx->pc = 0x2574FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2574F8u;
            // 0x2574fc: 0xc62c0010  lwc1        $f12, 0x10($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257500u; }
        if (ctx->pc != 0x257500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257500u; }
        if (ctx->pc != 0x257500u) { return; }
    }
    ctx->pc = 0x257500u;
label_257500:
    // 0x257500: 0xc6220018  lwc1        $f2, 0x18($s1)
    ctx->pc = 0x257500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x257504: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x257504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257508: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x257508u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x25750c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x25750cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x257510: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x257510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x257514: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x257514u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257518: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x257518u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x25751c: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x25751cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257520: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x257520u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x257524: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x257524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257528: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x257528u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
label_25752c:
    // 0x25752c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x25752cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x257530: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x257530u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257534: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x257534u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x257538: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x257538u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25753c: 0x3e00008  jr          $ra
    ctx->pc = 0x25753Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x25753Cu;
            // 0x257540: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x257544u;
}
