#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsSetPos__FP12_SEN_CMR_SEQP12CSceneCmrSeq
// Address: 0x2571b0 - 0x257278
void scsSetPos__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x2571b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsSetPos__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x2571b0");
#endif

    switch (ctx->pc) {
        case 0x2571d0u: goto label_2571d0;
        case 0x2571e0u: goto label_2571e0;
        case 0x257208u: goto label_257208;
        case 0x25721cu: goto label_25721c;
        case 0x25723cu: goto label_25723c;
        case 0x25724cu: goto label_25724c;
        case 0x25725cu: goto label_25725c;
        default: break;
    }

    ctx->pc = 0x2571b0u;

    // 0x2571b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2571b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2571b4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2571b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2571b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2571b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2571bc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2571bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2571c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2571c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2571c4: 0x24850010  addiu       $a1, $a0, 0x10
    ctx->pc = 0x2571c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2571c8: 0xc041c5c  jal         func_107170
    ctx->pc = 0x2571C8u;
    SET_GPR_U32(ctx, 31, 0x2571D0u);
    ctx->pc = 0x2571CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2571C8u;
            // 0x2571cc: 0x26240050  addiu       $a0, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2571D0u; }
        if (ctx->pc != 0x2571D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2571D0u; }
        if (ctx->pc != 0x2571D0u) { return; }
    }
    ctx->pc = 0x2571D0u;
label_2571d0:
    // 0x2571d0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2571d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2571d4: 0x26250060  addiu       $a1, $s1, 0x60
    ctx->pc = 0x2571d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x2571d8: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x2571D8u;
    SET_GPR_U32(ctx, 31, 0x2571E0u);
    ctx->pc = 0x2571DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2571D8u;
            // 0x2571dc: 0x26260050  addiu       $a2, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2571E0u; }
        if (ctx->pc != 0x2571E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2571E0u; }
        if (ctx->pc != 0x2571E0u) { return; }
    }
    ctx->pc = 0x2571E0u;
label_2571e0:
    // 0x2571e0: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x2571e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2571e4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2571e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2571e8: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2571e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2571ec: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x2571ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x2571f0: 0x27b00048  addiu       $s0, $sp, 0x48
    ctx->pc = 0x2571f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2571f4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2571f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2571f8: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x2571f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2571fc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2571fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x257200: 0xc041be0  jal         func_106F80
    ctx->pc = 0x257200u;
    SET_GPR_U32(ctx, 31, 0x257208u);
    ctx->pc = 0x257204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257200u;
            // 0x257204: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257208u; }
        if (ctx->pc != 0x257208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x257208u; }
        if (ctx->pc != 0x257208u) { return; }
    }
    ctx->pc = 0x257208u;
label_257208:
    // 0x257208: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x257208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25720c: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x25720cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257210: 0x46000347  neg.s       $f13, $f0
    ctx->pc = 0x257210u;
    ctx->f[13] = FPU_NEG_S(ctx->f[0]);
    // 0x257214: 0xc047c76  jal         func_11F1D8
    ctx->pc = 0x257214u;
    SET_GPR_U32(ctx, 31, 0x25721Cu);
    ctx->pc = 0x257218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257214u;
            // 0x257218: 0x46000b07  neg.s       $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25721Cu; }
        if (ctx->pc != 0x25721Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25721Cu; }
        if (ctx->pc != 0x25721Cu) { return; }
    }
    ctx->pc = 0x25721Cu;
label_25721c:
    // 0x25721c: 0xe6200070  swc1        $f0, 0x70($s1)
    ctx->pc = 0x25721cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    // 0x257220: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x257220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x257224: 0xc6210054  lwc1        $f1, 0x54($s1)
    ctx->pc = 0x257224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x257228: 0x26250050  addiu       $a1, $s1, 0x50
    ctx->pc = 0x257228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x25722c: 0xc6200064  lwc1        $f0, 0x64($s1)
    ctx->pc = 0x25722cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257230: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x257230u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x257234: 0xc041c5c  jal         func_107170
    ctx->pc = 0x257234u;
    SET_GPR_U32(ctx, 31, 0x25723Cu);
    ctx->pc = 0x257238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257234u;
            // 0x257238: 0xe6200074  swc1        $f0, 0x74($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25723Cu; }
        if (ctx->pc != 0x25723Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25723Cu; }
        if (ctx->pc != 0x25723Cu) { return; }
    }
    ctx->pc = 0x25723Cu;
label_25723c:
    // 0x25723c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x25723cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x257240: 0x26250060  addiu       $a1, $s1, 0x60
    ctx->pc = 0x257240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x257244: 0xc041c5c  jal         func_107170
    ctx->pc = 0x257244u;
    SET_GPR_U32(ctx, 31, 0x25724Cu);
    ctx->pc = 0x257248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257244u;
            // 0x257248: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25724Cu; }
        if (ctx->pc != 0x25724Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25724Cu; }
        if (ctx->pc != 0x25724Cu) { return; }
    }
    ctx->pc = 0x25724Cu;
label_25724c:
    // 0x25724c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x25724cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x257250: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x257250u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x257254: 0xc04c018  jal         func_130060
    ctx->pc = 0x257254u;
    SET_GPR_U32(ctx, 31, 0x25725Cu);
    ctx->pc = 0x257258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257254u;
            // 0x257258: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25725Cu; }
        if (ctx->pc != 0x25725Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25725Cu; }
        if (ctx->pc != 0x25725Cu) { return; }
    }
    ctx->pc = 0x25725Cu;
label_25725c:
    // 0x25725c: 0xe6200078  swc1        $f0, 0x78($s1)
    ctx->pc = 0x25725cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
    // 0x257260: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x257260u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257264: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x257264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x257268: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x257268u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25726c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25726cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257270: 0x3e00008  jr          $ra
    ctx->pc = 0x257270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257270u;
            // 0x257274: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x257278u;
}
