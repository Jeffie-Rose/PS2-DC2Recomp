#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetMatrix__7CObjectFPA4_f
// Address: 0x1699f0 - 0x169ab8
void GetMatrix__7CObjectFPA4_f_0x1699f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetMatrix__7CObjectFPA4_f_0x1699f0");
#endif

    switch (ctx->pc) {
        case 0x169a10u: goto label_169a10;
        case 0x169a4cu: goto label_169a4c;
        case 0x169a70u: goto label_169a70;
        case 0x169a94u: goto label_169a94;
        default: break;
    }

    ctx->pc = 0x1699f0u;

    // 0x1699f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1699f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1699f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1699f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1699f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1699f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1699fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1699fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x169a00: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x169a00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169a04: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x169a04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169a08: 0xc04c050  jal         func_130140
    ctx->pc = 0x169A08u;
    SET_GPR_U32(ctx, 31, 0x169A10u);
    ctx->pc = 0x169A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169A08u;
            // 0x169a0c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130140u;
    if (runtime->hasFunction(0x130140u)) {
        auto targetFn = runtime->lookupFunction(0x130140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169A10u; }
        if (ctx->pc != 0x169A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgUnitMatrix__FPA4_f_0x130140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169A10u; }
        if (ctx->pc != 0x169A10u) { return; }
    }
    ctx->pc = 0x169A10u;
label_169a10:
    // 0x169a10: 0xc6200030  lwc1        $f0, 0x30($s1)
    ctx->pc = 0x169a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169a14: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x169a14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x169a18: 0x0  nop
    ctx->pc = 0x169a18u;
    // NOP
    // 0x169a1c: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x169a1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x169a20: 0xc6200034  lwc1        $f0, 0x34($s1)
    ctx->pc = 0x169a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169a24: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x169a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x169a28: 0xc6200038  lwc1        $f0, 0x38($s1)
    ctx->pc = 0x169a28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x169a2c: 0xe6000028  swc1        $f0, 0x28($s0)
    ctx->pc = 0x169a2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 40), bits); }
    // 0x169a30: 0xc62c0020  lwc1        $f12, 0x20($s1)
    ctx->pc = 0x169a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x169a34: 0x460c0832  c.eq.s      $f1, $f12
    ctx->pc = 0x169a34u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x169a38: 0x0  nop
    ctx->pc = 0x169a38u;
    // NOP
    // 0x169a3c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x169A3Cu;
    {
        const bool branch_taken_0x169a3c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x169A40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169A3Cu;
            // 0x169a40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169a3c) {
            ctx->pc = 0x169A4Cu;
            goto label_169a4c;
        }
    }
    ctx->pc = 0x169A44u;
    // 0x169a44: 0xc041ccc  jal         func_107330
    ctx->pc = 0x169A44u;
    SET_GPR_U32(ctx, 31, 0x169A4Cu);
    ctx->pc = 0x169A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169A44u;
            // 0x169a48: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107330u;
    if (runtime->hasFunction(0x107330u)) {
        auto targetFn = runtime->lookupFunction(0x107330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169A4Cu; }
        if (ctx->pc != 0x169A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixX_0x107330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169A4Cu; }
        if (ctx->pc != 0x169A4Cu) { return; }
    }
    ctx->pc = 0x169A4Cu;
label_169a4c:
    // 0x169a4c: 0xc62c0024  lwc1        $f12, 0x24($s1)
    ctx->pc = 0x169a4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x169a50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x169a50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169a54: 0x0  nop
    ctx->pc = 0x169a54u;
    // NOP
    // 0x169a58: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x169a58u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x169a5c: 0x0  nop
    ctx->pc = 0x169a5cu;
    // NOP
    // 0x169a60: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x169A60u;
    {
        const bool branch_taken_0x169a60 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x169A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169A60u;
            // 0x169a64: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169a60) {
            ctx->pc = 0x169A70u;
            goto label_169a70;
        }
    }
    ctx->pc = 0x169A68u;
    // 0x169a68: 0xc041cf6  jal         func_1073D8
    ctx->pc = 0x169A68u;
    SET_GPR_U32(ctx, 31, 0x169A70u);
    ctx->pc = 0x169A6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169A68u;
            // 0x169a6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169A70u; }
        if (ctx->pc != 0x169A70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169A70u; }
        if (ctx->pc != 0x169A70u) { return; }
    }
    ctx->pc = 0x169A70u;
label_169a70:
    // 0x169a70: 0xc62c0028  lwc1        $f12, 0x28($s1)
    ctx->pc = 0x169a70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x169a74: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x169a74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x169a78: 0x0  nop
    ctx->pc = 0x169a78u;
    // NOP
    // 0x169a7c: 0x460c0032  c.eq.s      $f0, $f12
    ctx->pc = 0x169a7cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[12])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x169a80: 0x0  nop
    ctx->pc = 0x169a80u;
    // NOP
    // 0x169a84: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x169A84u;
    {
        const bool branch_taken_0x169a84 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x169A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169A84u;
            // 0x169a88: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169a84) {
            ctx->pc = 0x169A94u;
            goto label_169a94;
        }
    }
    ctx->pc = 0x169A8Cu;
    // 0x169a8c: 0xc041ca2  jal         func_107288
    ctx->pc = 0x169A8Cu;
    SET_GPR_U32(ctx, 31, 0x169A94u);
    ctx->pc = 0x169A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169A8Cu;
            // 0x169a90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107288u;
    if (runtime->hasFunction(0x107288u)) {
        auto targetFn = runtime->lookupFunction(0x107288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169A94u; }
        if (ctx->pc != 0x169A94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixZ_0x107288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169A94u; }
        if (ctx->pc != 0x169A94u) { return; }
    }
    ctx->pc = 0x169A94u;
label_169a94:
    // 0x169a94: 0x7a240010  lq          $a0, 0x10($s1)
    ctx->pc = 0x169a94u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x169a98: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x169a98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x169a9c: 0x7e040030  sq          $a0, 0x30($s0)
    ctx->pc = 0x169a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 48), GPR_VEC(ctx, 4));
    // 0x169aa0: 0xae03003c  sw          $v1, 0x3C($s0)
    ctx->pc = 0x169aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 3));
    // 0x169aa4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x169aa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x169aa8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x169aa8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x169aac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x169aacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169ab0: 0x3e00008  jr          $ra
    ctx->pc = 0x169AB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169AB0u;
            // 0x169ab4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x169AB8u;
}
