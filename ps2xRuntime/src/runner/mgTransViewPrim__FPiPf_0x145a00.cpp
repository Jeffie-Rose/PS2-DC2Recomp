#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: mgTransViewPrim__FPiPf
// Address: 0x145a00 - 0x145acc
void mgTransViewPrim__FPiPf_0x145a00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("mgTransViewPrim__FPiPf_0x145a00");
#endif

    switch (ctx->pc) {
        case 0x145a2cu: goto label_145a2c;
        case 0x145a80u: goto label_145a80;
        case 0x145a98u: goto label_145a98;
        case 0x145aa4u: goto label_145aa4;
        case 0x145ab4u: goto label_145ab4;
        default: break;
    }

    ctx->pc = 0x145a00u;

    // 0x145a00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x145a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x145a04: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x145a04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145a08: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x145a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x145a0c: 0x3c050038  lui         $a1, 0x38
    ctx->pc = 0x145a0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)56 << 16));
    // 0x145a10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x145a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x145a14: 0x24a50f10  addiu       $a1, $a1, 0xF10
    ctx->pc = 0x145a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3856));
    // 0x145a18: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x145a18u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x145a1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x145a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x145a20: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x145a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x145a24: 0xc041bb0  jal         func_106EC0
    ctx->pc = 0x145A24u;
    SET_GPR_U32(ctx, 31, 0x145A2Cu);
    ctx->pc = 0x145A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145A24u;
            // 0x145a28: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145A2Cu; }
        if (ctx->pc != 0x145A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145A2Cu; }
        if (ctx->pc != 0x145A2Cu) { return; }
    }
    ctx->pc = 0x145A2Cu;
label_145a2c:
    // 0x145a2c: 0xc7a1004c  lwc1        $f1, 0x4C($sp)
    ctx->pc = 0x145a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x145a30: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x145a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x145a34: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x145a34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x145a38: 0x27b00044  addiu       $s0, $sp, 0x44
    ctx->pc = 0x145a38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x145a3c: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x145a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145a40: 0x27b10048  addiu       $s1, $sp, 0x48
    ctx->pc = 0x145a40u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x145a44: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x145a44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x145a48: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x145a48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x145a4c: 0x0  nop
    ctx->pc = 0x145a4cu;
    // NOP
    // 0x145a50: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x145a50u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x145a54: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x145a54u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x145a58: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x145a58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x145a5c: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x145a5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145a60: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x145a60u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x145a64: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x145a64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
    // 0x145a68: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x145a68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145a6c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x145a6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x145a70: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x145a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x145a74: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x145a74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145a78: 0xc0a248c  jal         func_289230
    ctx->pc = 0x145A78u;
    SET_GPR_U32(ctx, 31, 0x145A80u);
    ctx->pc = 0x145A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145A78u;
            // 0x145a7c: 0x46001b02  mul.s       $f12, $f3, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145A80u; }
        if (ctx->pc != 0x145A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145A80u; }
        if (ctx->pc != 0x145A80u) { return; }
    }
    ctx->pc = 0x145A80u;
label_145a80:
    // 0x145a80: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x145a80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x145a84: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x145a84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x145a88: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x145a88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
    // 0x145a8c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x145a8cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x145a90: 0xc0a248c  jal         func_289230
    ctx->pc = 0x145A90u;
    SET_GPR_U32(ctx, 31, 0x145A98u);
    ctx->pc = 0x145A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145A90u;
            // 0x145a94: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145A98u; }
        if (ctx->pc != 0x145A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145A98u; }
        if (ctx->pc != 0x145A98u) { return; }
    }
    ctx->pc = 0x145A98u;
label_145a98:
    // 0x145a98: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x145a98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x145a9c: 0xc0a248c  jal         func_289230
    ctx->pc = 0x145A9Cu;
    SET_GPR_U32(ctx, 31, 0x145AA4u);
    ctx->pc = 0x145AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145A9Cu;
            // 0x145aa0: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145AA4u; }
        if (ctx->pc != 0x145AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145AA4u; }
        if (ctx->pc != 0x145AA4u) { return; }
    }
    ctx->pc = 0x145AA4u;
label_145aa4:
    // 0x145aa4: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x145aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x145aa8: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x145aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x145aac: 0xc05160c  jal         func_145830
    ctx->pc = 0x145AACu;
    SET_GPR_U32(ctx, 31, 0x145AB4u);
    ctx->pc = 0x145AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x145AACu;
            // 0x145ab0: 0xae40000c  sw          $zero, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145830u;
    if (runtime->hasFunction(0x145830u)) {
        auto targetFn = runtime->lookupFunction(0x145830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145AB4u; }
        if (ctx->pc != 0x145AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        prim_clip_check__FPf_0x145830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x145AB4u; }
        if (ctx->pc != 0x145AB4u) { return; }
    }
    ctx->pc = 0x145AB4u;
label_145ab4:
    // 0x145ab4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x145ab4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x145ab8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x145ab8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x145abc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x145abcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x145ac0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x145ac0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x145ac4: 0x3e00008  jr          $ra
    ctx->pc = 0x145AC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x145AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x145AC4u;
            // 0x145ac8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x145ACCu;
}
