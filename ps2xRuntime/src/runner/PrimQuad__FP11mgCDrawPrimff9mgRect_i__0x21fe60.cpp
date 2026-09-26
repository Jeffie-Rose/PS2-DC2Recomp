#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PrimQuad__FP11mgCDrawPrimff9mgRect<i>
// Address: 0x21fe60 - 0x21ff24
void PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60");
#endif

    switch (ctx->pc) {
        case 0x21fea8u: goto label_21fea8;
        case 0x21febcu: goto label_21febc;
        case 0x21fed8u: goto label_21fed8;
        case 0x21ff00u: goto label_21ff00;
        default: break;
    }

    ctx->pc = 0x21fe60u;

    // 0x21fe60: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x21fe60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x21fe64: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x21fe64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x21fe68: 0x27a30060  addiu       $v1, $sp, 0x60
    ctx->pc = 0x21fe68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x21fe6c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x21fe6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x21fe70: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x21fe70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x21fe74: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x21fe74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x21fe78: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x21fe78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x21fe7c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x21fe7cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x21fe80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x21fe80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fe84: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x21fe84u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x21fe88: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x21fe88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21fe8c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x21fe8cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x21fe90: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x21fe90u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x21fe94: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x21fe94u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x21fe98: 0x8fb10064  lw          $s1, 0x64($sp)
    ctx->pc = 0x21fe98u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x21fe9c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x21fe9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21fea0: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x21FEA0u;
    SET_GPR_U32(ctx, 31, 0x21FEA8u);
    ctx->pc = 0x21FEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FEA0u;
            // 0x21fea4: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FEA8u; }
        if (ctx->pc != 0x21FEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FEA8u; }
        if (ctx->pc != 0x21FEA8u) { return; }
    }
    ctx->pc = 0x21FEA8u;
label_21fea8:
    // 0x21fea8: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x21fea8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x21feac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21feacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21feb0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x21feb0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x21feb4: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x21FEB4u;
    SET_GPR_U32(ctx, 31, 0x21FEBCu);
    ctx->pc = 0x21FEB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FEB4u;
            // 0x21feb8: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FEBCu; }
        if (ctx->pc != 0x21FEBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FEBCu; }
        if (ctx->pc != 0x21FEBCu) { return; }
    }
    ctx->pc = 0x21FEBCu;
label_21febc:
    // 0x21febc: 0x8fb2006c  lw          $s2, 0x6C($sp)
    ctx->pc = 0x21febcu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x21fec0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21fec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fec4: 0x8fb30068  lw          $s3, 0x68($sp)
    ctx->pc = 0x21fec4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x21fec8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x21fec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21fecc: 0x2323021  addu        $a2, $s1, $s2
    ctx->pc = 0x21feccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x21fed0: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x21FED0u;
    SET_GPR_U32(ctx, 31, 0x21FED8u);
    ctx->pc = 0x21FED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FED0u;
            // 0x21fed4: 0x532821  addu        $a1, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FED8u; }
        if (ctx->pc != 0x21FED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FED8u; }
        if (ctx->pc != 0x21FED8u) { return; }
    }
    ctx->pc = 0x21FED8u;
label_21fed8:
    // 0x21fed8: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x21fed8u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21fedc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x21fedcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21fee0: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x21fee0u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21fee4: 0x0  nop
    ctx->pc = 0x21fee4u;
    // NOP
    // 0x21fee8: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x21fee8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x21feec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x21feecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x21fef0: 0x4601ab00  add.s       $f12, $f21, $f1
    ctx->pc = 0x21fef0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[1]);
    // 0x21fef4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x21fef4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x21fef8: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x21FEF8u;
    SET_GPR_U32(ctx, 31, 0x21FF00u);
    ctx->pc = 0x21FEFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FEF8u;
            // 0x21fefc: 0x4600a340  add.s       $f13, $f20, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FF00u; }
        if (ctx->pc != 0x21FF00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FF00u; }
        if (ctx->pc != 0x21FF00u) { return; }
    }
    ctx->pc = 0x21FF00u;
label_21ff00:
    // 0x21ff00: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x21ff00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21ff04: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x21ff04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x21ff08: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x21ff08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21ff0c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x21ff0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21ff10: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x21ff10u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21ff14: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x21ff14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21ff18: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x21ff18u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21ff1c: 0x3e00008  jr          $ra
    ctx->pc = 0x21FF1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21FF20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FF1Cu;
            // 0x21ff20: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x21FF24u;
}
