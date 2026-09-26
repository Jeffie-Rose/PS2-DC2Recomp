#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DPrimEnterSprite__FP11mgCDrawPrimiiiiffff
// Address: 0x2e8e20 - 0x2e8ef0
void DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DPrimEnterSprite__FP11mgCDrawPrimiiiiffff_0x2e8e20");
#endif

    switch (ctx->pc) {
        case 0x2e8e74u: goto label_2e8e74;
        case 0x2e8e9cu: goto label_2e8e9c;
        case 0x2e8eacu: goto label_2e8eac;
        case 0x2e8ec0u: goto label_2e8ec0;
        default: break;
    }

    ctx->pc = 0x2e8e20u;

    // 0x2e8e20: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2e8e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2e8e24: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2e8e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x2e8e28: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2e8e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2e8e2c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2e8e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2e8e30: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2e8e30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8e34: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2e8e34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2e8e38: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2e8e38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8e3c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2e8e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2e8e40: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2e8e40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8e44: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2e8e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2e8e48: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2e8e48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8e4c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x2e8e4cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x2e8e50: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x2e8e50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8e54: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2e8e54u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2e8e58: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2e8e58u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2e8e5c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2e8e5cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2e8e60: 0x460065c6  mov.s       $f23, $f12
    ctx->pc = 0x2e8e60u;
    ctx->f[23] = FPU_MOV_S(ctx->f[12]);
    // 0x2e8e64: 0x46006d86  mov.s       $f22, $f13
    ctx->pc = 0x2e8e64u;
    ctx->f[22] = FPU_MOV_S(ctx->f[13]);
    // 0x2e8e68: 0x46007546  mov.s       $f21, $f14
    ctx->pc = 0x2e8e68u;
    ctx->f[21] = FPU_MOV_S(ctx->f[14]);
    // 0x2e8e6c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2E8E6Cu;
    SET_GPR_U32(ctx, 31, 0x2E8E74u);
    ctx->pc = 0x2E8E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8E6Cu;
            // 0x2e8e70: 0x46007d06  mov.s       $f20, $f15 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[15]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8E74u; }
        if (ctx->pc != 0x2E8E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8E74u; }
        if (ctx->pc != 0x2E8E74u) { return; }
    }
    ctx->pc = 0x2E8E74u;
label_2e8e74:
    // 0x2e8e74: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x2e8e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x2e8e78: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e8e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8e7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e8e7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e8e80: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2e8e80u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e8e84: 0x4600ad43  div.s       $f21, $f21, $f0
    ctx->pc = 0x2e8e84u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[21], ctx->f[0]); }
    // 0x2e8e88: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x2e8e88u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x2e8e8c: 0x0  nop
    ctx->pc = 0x2e8e8cu;
    // NOP
    // 0x2e8e90: 0x4615bb01  sub.s       $f12, $f23, $f21
    ctx->pc = 0x2e8e90u;
    ctx->f[12] = FPU_SUB_S(ctx->f[23], ctx->f[21]);
    // 0x2e8e94: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x2E8E94u;
    SET_GPR_U32(ctx, 31, 0x2E8E9Cu);
    ctx->pc = 0x2E8E98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8E94u;
            // 0x2e8e98: 0x4614b341  sub.s       $f13, $f22, $f20 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[22], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8E9Cu; }
        if (ctx->pc != 0x2E8E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8E9Cu; }
        if (ctx->pc != 0x2E8E9Cu) { return; }
    }
    ctx->pc = 0x2E8E9Cu;
label_2e8e9c:
    // 0x2e8e9c: 0x2712821  addu        $a1, $s3, $s1
    ctx->pc = 0x2e8e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
    // 0x2e8ea0: 0x2503021  addu        $a2, $s2, $s0
    ctx->pc = 0x2e8ea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
    // 0x2e8ea4: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2E8EA4u;
    SET_GPR_U32(ctx, 31, 0x2E8EACu);
    ctx->pc = 0x2E8EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8EA4u;
            // 0x2e8ea8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8EACu; }
        if (ctx->pc != 0x2E8EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8EACu; }
        if (ctx->pc != 0x2E8EACu) { return; }
    }
    ctx->pc = 0x2E8EACu;
label_2e8eac:
    // 0x2e8eac: 0x4615bb00  add.s       $f12, $f23, $f21
    ctx->pc = 0x2e8eacu;
    ctx->f[12] = FPU_ADD_S(ctx->f[23], ctx->f[21]);
    // 0x2e8eb0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e8eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e8eb4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2e8eb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2e8eb8: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x2E8EB8u;
    SET_GPR_U32(ctx, 31, 0x2E8EC0u);
    ctx->pc = 0x2E8EBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8EB8u;
            // 0x2e8ebc: 0x4614b340  add.s       $f13, $f22, $f20 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[22], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8EC0u; }
        if (ctx->pc != 0x2E8EC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E8EC0u; }
        if (ctx->pc != 0x2E8EC0u) { return; }
    }
    ctx->pc = 0x2E8EC0u;
label_2e8ec0:
    // 0x2e8ec0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2e8ec0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e8ec4: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x2e8ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
    // 0x2e8ec8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2e8ec8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e8ecc: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2e8eccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2e8ed0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2e8ed0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e8ed4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2e8ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2e8ed8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2e8ed8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e8edc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2e8edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2e8ee0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2e8ee0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e8ee4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2e8ee4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e8ee8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E8EE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E8EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E8EE8u;
            // 0x2e8eec: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E8EF0u;
}
