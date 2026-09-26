#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsSetSyncObj__FP12_SEN_CMR_SEQP12CSceneCmrSeq
// Address: 0x258560 - 0x258638
void scsSetSyncObj__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x258560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsSetSyncObj__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x258560");
#endif

    switch (ctx->pc) {
        case 0x258594u: goto label_258594;
        case 0x2585b8u: goto label_2585b8;
        case 0x2585c0u: goto label_2585c0;
        case 0x2585ecu: goto label_2585ec;
        default: break;
    }

    ctx->pc = 0x258560u;

    // 0x258560: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x258560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x258564: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x258564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x258568: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x258568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25856c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x25856cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x258570: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x258570u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x258574: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x258574u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x258578: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x258578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x25857c: 0xaca20080  sw          $v0, 0x80($a1)
    ctx->pc = 0x25857cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 128), GPR_U32(ctx, 2));
    // 0x258580: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x258580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x258584: 0xaca20084  sw          $v0, 0x84($a1)
    ctx->pc = 0x258584u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 132), GPR_U32(ctx, 2));
    // 0x258588: 0x26040090  addiu       $a0, $s0, 0x90
    ctx->pc = 0x258588u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x25858c: 0xc041c5c  jal         func_107170
    ctx->pc = 0x25858Cu;
    SET_GPR_U32(ctx, 31, 0x258594u);
    ctx->pc = 0x258590u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x25858Cu;
            // 0x258590: 0x26250020  addiu       $a1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258594u; }
        if (ctx->pc != 0x258594u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x258594u; }
        if (ctx->pc != 0x258594u) { return; }
    }
    ctx->pc = 0x258594u;
label_258594:
    // 0x258594: 0xc6200010  lwc1        $f0, 0x10($s1)
    ctx->pc = 0x258594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258598: 0x260400ac  addiu       $a0, $s0, 0xAC
    ctx->pc = 0x258598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 172));
    // 0x25859c: 0x2625003c  addiu       $a1, $s1, 0x3C
    ctx->pc = 0x25859cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x2585a0: 0xe60000a0  swc1        $f0, 0xA0($s0)
    ctx->pc = 0x2585a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 160), bits); }
    // 0x2585a4: 0xc6200014  lwc1        $f0, 0x14($s1)
    ctx->pc = 0x2585a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2585a8: 0xe60000a4  swc1        $f0, 0xA4($s0)
    ctx->pc = 0x2585a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 164), bits); }
    // 0x2585ac: 0xc6200018  lwc1        $f0, 0x18($s1)
    ctx->pc = 0x2585acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2585b0: 0xc04a3dc  jal         func_128F70
    ctx->pc = 0x2585B0u;
    SET_GPR_U32(ctx, 31, 0x2585B8u);
    ctx->pc = 0x2585B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2585B0u;
            // 0x2585b4: 0xe60000a8  swc1        $f0, 0xA8($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 168), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2585B8u; }
        if (ctx->pc != 0x2585B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2585B8u; }
        if (ctx->pc != 0x2585B8u) { return; }
    }
    ctx->pc = 0x2585B8u;
label_2585b8:
    // 0x2585b8: 0xc047a42  jal         func_11E908
    ctx->pc = 0x2585B8u;
    SET_GPR_U32(ctx, 31, 0x2585C0u);
    ctx->pc = 0x2585BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2585B8u;
            // 0x2585bc: 0xc60c00a0  lwc1        $f12, 0xA0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2585C0u; }
        if (ctx->pc != 0x2585C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2585C0u; }
        if (ctx->pc != 0x2585C0u) { return; }
    }
    ctx->pc = 0x2585C0u;
label_2585c0:
    // 0x2585c0: 0xc60200a8  lwc1        $f2, 0xA8($s0)
    ctx->pc = 0x2585c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2585c4: 0xc6010060  lwc1        $f1, 0x60($s0)
    ctx->pc = 0x2585c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2585c8: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2585c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x2585cc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2585ccu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2585d0: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x2585d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x2585d4: 0xc60100a4  lwc1        $f1, 0xA4($s0)
    ctx->pc = 0x2585d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2585d8: 0xc6000064  lwc1        $f0, 0x64($s0)
    ctx->pc = 0x2585d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2585dc: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2585dcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2585e0: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x2585e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x2585e4: 0xc047964  jal         func_11E590
    ctx->pc = 0x2585E4u;
    SET_GPR_U32(ctx, 31, 0x2585ECu);
    ctx->pc = 0x2585E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2585E4u;
            // 0x2585e8: 0xc60c00a0  lwc1        $f12, 0xA0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2585ECu; }
        if (ctx->pc != 0x2585ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2585ECu; }
        if (ctx->pc != 0x2585ECu) { return; }
    }
    ctx->pc = 0x2585ECu;
label_2585ec:
    // 0x2585ec: 0xc60200a8  lwc1        $f2, 0xA8($s0)
    ctx->pc = 0x2585ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2585f0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2585f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2585f4: 0xc6010068  lwc1        $f1, 0x68($s0)
    ctx->pc = 0x2585f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2585f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2585f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2585fc: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x2585fcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x258600: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x258600u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x258604: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x258604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    // 0x258608: 0xc60000a0  lwc1        $f0, 0xA0($s0)
    ctx->pc = 0x258608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25860c: 0xe6000070  swc1        $f0, 0x70($s0)
    ctx->pc = 0x25860cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 112), bits); }
    // 0x258610: 0xc60000a4  lwc1        $f0, 0xA4($s0)
    ctx->pc = 0x258610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x258614: 0xe6000074  swc1        $f0, 0x74($s0)
    ctx->pc = 0x258614u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 116), bits); }
    // 0x258618: 0xc60000a8  lwc1        $f0, 0xA8($s0)
    ctx->pc = 0x258618u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25861c: 0xe6000078  swc1        $f0, 0x78($s0)
    ctx->pc = 0x25861cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 120), bits); }
    // 0x258620: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x258620u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
    // 0x258624: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x258624u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x258628: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x258628u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25862c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25862cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x258630: 0x3e00008  jr          $ra
    ctx->pc = 0x258630u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x258634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x258630u;
            // 0x258634: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x258638u;
}
