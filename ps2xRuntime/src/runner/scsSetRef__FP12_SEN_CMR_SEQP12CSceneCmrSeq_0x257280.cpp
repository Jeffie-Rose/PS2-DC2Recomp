#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: scsSetRef__FP12_SEN_CMR_SEQP12CSceneCmrSeq
// Address: 0x257280 - 0x257348
void scsSetRef__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x257280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("scsSetRef__FP12_SEN_CMR_SEQP12CSceneCmrSeq_0x257280");
#endif

    switch (ctx->pc) {
        case 0x2572a0u: goto label_2572a0;
        case 0x2572b0u: goto label_2572b0;
        case 0x2572d8u: goto label_2572d8;
        case 0x2572ecu: goto label_2572ec;
        case 0x25730cu: goto label_25730c;
        case 0x25731cu: goto label_25731c;
        case 0x25732cu: goto label_25732c;
        default: break;
    }

    ctx->pc = 0x257280u;

    // 0x257280: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x257280u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x257284: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x257284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x257288: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x257288u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x25728c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x25728cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257290: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x257290u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x257294: 0x24850020  addiu       $a1, $a0, 0x20
    ctx->pc = 0x257294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x257298: 0xc041c5c  jal         func_107170
    ctx->pc = 0x257298u;
    SET_GPR_U32(ctx, 31, 0x2572A0u);
    ctx->pc = 0x25729Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257298u;
            // 0x25729c: 0x26240060  addiu       $a0, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2572A0u; }
        if (ctx->pc != 0x2572A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2572A0u; }
        if (ctx->pc != 0x2572A0u) { return; }
    }
    ctx->pc = 0x2572A0u;
label_2572a0:
    // 0x2572a0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2572a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2572a4: 0x26250060  addiu       $a1, $s1, 0x60
    ctx->pc = 0x2572a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x2572a8: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x2572A8u;
    SET_GPR_U32(ctx, 31, 0x2572B0u);
    ctx->pc = 0x2572ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2572A8u;
            // 0x2572ac: 0x26260050  addiu       $a2, $s1, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2572B0u; }
        if (ctx->pc != 0x2572B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2572B0u; }
        if (ctx->pc != 0x2572B0u) { return; }
    }
    ctx->pc = 0x2572B0u;
label_2572b0:
    // 0x2572b0: 0xc7a10030  lwc1        $f1, 0x30($sp)
    ctx->pc = 0x2572b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2572b4: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x2572b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2572b8: 0xc7a00038  lwc1        $f0, 0x38($sp)
    ctx->pc = 0x2572b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2572bc: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x2572bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x2572c0: 0x27b00048  addiu       $s0, $sp, 0x48
    ctx->pc = 0x2572c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2572c4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2572c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2572c8: 0xe7a10040  swc1        $f1, 0x40($sp)
    ctx->pc = 0x2572c8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x2572cc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x2572ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x2572d0: 0xc041be0  jal         func_106F80
    ctx->pc = 0x2572D0u;
    SET_GPR_U32(ctx, 31, 0x2572D8u);
    ctx->pc = 0x2572D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2572D0u;
            // 0x2572d4: 0xafa0004c  sw          $zero, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2572D8u; }
        if (ctx->pc != 0x2572D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2572D8u; }
        if (ctx->pc != 0x2572D8u) { return; }
    }
    ctx->pc = 0x2572D8u;
label_2572d8:
    // 0x2572d8: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x2572d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2572dc: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x2572dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2572e0: 0x46000347  neg.s       $f13, $f0
    ctx->pc = 0x2572e0u;
    ctx->f[13] = FPU_NEG_S(ctx->f[0]);
    // 0x2572e4: 0xc047c76  jal         func_11F1D8
    ctx->pc = 0x2572E4u;
    SET_GPR_U32(ctx, 31, 0x2572ECu);
    ctx->pc = 0x2572E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2572E4u;
            // 0x2572e8: 0x46000b07  neg.s       $f12, $f1 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2572ECu; }
        if (ctx->pc != 0x2572ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2572ECu; }
        if (ctx->pc != 0x2572ECu) { return; }
    }
    ctx->pc = 0x2572ECu;
label_2572ec:
    // 0x2572ec: 0xe6200070  swc1        $f0, 0x70($s1)
    ctx->pc = 0x2572ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
    // 0x2572f0: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x2572f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2572f4: 0xc6210054  lwc1        $f1, 0x54($s1)
    ctx->pc = 0x2572f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2572f8: 0x26250050  addiu       $a1, $s1, 0x50
    ctx->pc = 0x2572f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 80));
    // 0x2572fc: 0xc6200064  lwc1        $f0, 0x64($s1)
    ctx->pc = 0x2572fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x257300: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x257300u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x257304: 0xc041c5c  jal         func_107170
    ctx->pc = 0x257304u;
    SET_GPR_U32(ctx, 31, 0x25730Cu);
    ctx->pc = 0x257308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257304u;
            // 0x257308: 0xe6200074  swc1        $f0, 0x74($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25730Cu; }
        if (ctx->pc != 0x25730Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25730Cu; }
        if (ctx->pc != 0x25730Cu) { return; }
    }
    ctx->pc = 0x25730Cu;
label_25730c:
    // 0x25730c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x25730cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x257310: 0x26250060  addiu       $a1, $s1, 0x60
    ctx->pc = 0x257310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x257314: 0xc041c5c  jal         func_107170
    ctx->pc = 0x257314u;
    SET_GPR_U32(ctx, 31, 0x25731Cu);
    ctx->pc = 0x257318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257314u;
            // 0x257318: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25731Cu; }
        if (ctx->pc != 0x25731Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25731Cu; }
        if (ctx->pc != 0x25731Cu) { return; }
    }
    ctx->pc = 0x25731Cu;
label_25731c:
    // 0x25731c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x25731cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x257320: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x257320u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x257324: 0xc04c018  jal         func_130060
    ctx->pc = 0x257324u;
    SET_GPR_U32(ctx, 31, 0x25732Cu);
    ctx->pc = 0x257328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x257324u;
            // 0x257328: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25732Cu; }
        if (ctx->pc != 0x25732Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x25732Cu; }
        if (ctx->pc != 0x25732Cu) { return; }
    }
    ctx->pc = 0x25732Cu;
label_25732c:
    // 0x25732c: 0xe6200078  swc1        $f0, 0x78($s1)
    ctx->pc = 0x25732cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
    // 0x257330: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x257330u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x257334: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x257334u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x257338: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x257338u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25733c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25733cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x257340: 0x3e00008  jr          $ra
    ctx->pc = 0x257340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x257344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x257340u;
            // 0x257344: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x257348u;
}
