#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IntersectionPipeYPoly3__FPfPA4_fPfPA4_f
// Address: 0x2ddde0 - 0x2de1d0
void IntersectionPipeYPoly3__FPfPA4_fPfPA4_f_0x2ddde0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IntersectionPipeYPoly3__FPfPA4_fPfPA4_f_0x2ddde0");
#endif

    switch (ctx->pc) {
        case 0x2dde50u: goto label_2dde50;
        case 0x2dde60u: goto label_2dde60;
        case 0x2dde6cu: goto label_2dde6c;
        case 0x2dde7cu: goto label_2dde7c;
        case 0x2dde90u: goto label_2dde90;
        case 0x2ddea4u: goto label_2ddea4;
        case 0x2ddeb8u: goto label_2ddeb8;
        case 0x2ddee0u: goto label_2ddee0;
        case 0x2ddf18u: goto label_2ddf18;
        case 0x2ddf28u: goto label_2ddf28;
        case 0x2ddf90u: goto label_2ddf90;
        case 0x2ddfb0u: goto label_2ddfb0;
        case 0x2ddfccu: goto label_2ddfcc;
        case 0x2ddfe8u: goto label_2ddfe8;
        case 0x2de01cu: goto label_2de01c;
        case 0x2de15cu: goto label_2de15c;
        default: break;
    }

    ctx->pc = 0x2ddde0u;

    // 0x2ddde0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2ddde0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x2ddde4: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x2ddde4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
    // 0x2ddde8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2ddde8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2dddec: 0x24428d00  addiu       $v0, $v0, -0x7300
    ctx->pc = 0x2dddecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937856));
    // 0x2dddf0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x2dddf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
    // 0x2dddf4: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x2dddf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x2dddf8: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x2dddf8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dddfc: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x2dddfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x2dde00: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2dde00u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dde04: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2dde04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x2dde08: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2dde08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x2dde0c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2dde0cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dde10: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2dde10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x2dde14: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2dde14u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dde18: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2dde18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2dde1c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2dde1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dde20: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2dde20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2dde24: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2dde24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2dde28: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2dde28u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2dde2c: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x2dde2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dde30: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2dde30u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2dde34: 0x46000502  mul.s       $f20, $f0, $f0
    ctx->pc = 0x2dde34u;
    ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x2dde38: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2dde38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2dde3c: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x2dde3cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x2dde40: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x2dde40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2dde44: 0xe7a000b4  swc1        $f0, 0xB4($sp)
    ctx->pc = 0x2dde44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 180), bits); }
    // 0x2dde48: 0xc041bce  jal         func_106F38
    ctx->pc = 0x2DDE48u;
    SET_GPR_U32(ctx, 31, 0x2DDE50u);
    ctx->pc = 0x2DDE4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDE48u;
            // 0x2dde4c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F38u;
    if (runtime->hasFunction(0x106F38u)) {
        auto targetFn = runtime->lookupFunction(0x106F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDE50u; }
        if (ctx->pc != 0x2DDE50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0OuterProduct_0x106f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDE50u; }
        if (ctx->pc != 0x2DDE50u) { return; }
    }
    ctx->pc = 0x2DDE50u;
label_2dde50:
    // 0x2dde50: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2dde50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dde54: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2dde54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dde58: 0xc041bce  jal         func_106F38
    ctx->pc = 0x2DDE58u;
    SET_GPR_U32(ctx, 31, 0x2DDE60u);
    ctx->pc = 0x2DDE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDE58u;
            // 0x2dde5c: 0x27a600b0  addiu       $a2, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F38u;
    if (runtime->hasFunction(0x106F38u)) {
        auto targetFn = runtime->lookupFunction(0x106F38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDE60u; }
        if (ctx->pc != 0x2DDE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0OuterProduct_0x106f38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDE60u; }
        if (ctx->pc != 0x2DDE60u) { return; }
    }
    ctx->pc = 0x2DDE60u;
label_2dde60:
    // 0x2dde60: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2dde60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dde64: 0xc041be0  jal         func_106F80
    ctx->pc = 0x2DDE64u;
    SET_GPR_U32(ctx, 31, 0x2DDE6Cu);
    ctx->pc = 0x2DDE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDE64u;
            // 0x2dde68: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDE6Cu; }
        if (ctx->pc != 0x2DDE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDE6Cu; }
        if (ctx->pc != 0x2DDE6Cu) { return; }
    }
    ctx->pc = 0x2DDE6Cu;
label_2dde6c:
    // 0x2dde6c: 0xc7cc000c  lwc1        $f12, 0xC($fp)
    ctx->pc = 0x2dde6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2dde70: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2dde70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dde74: 0xc041c4a  jal         func_107128
    ctx->pc = 0x2DDE74u;
    SET_GPR_U32(ctx, 31, 0x2DDE7Cu);
    ctx->pc = 0x2DDE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDE74u;
            // 0x2dde78: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDE7Cu; }
        if (ctx->pc != 0x2DDE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDE7Cu; }
        if (ctx->pc != 0x2DDE7Cu) { return; }
    }
    ctx->pc = 0x2DDE7Cu;
label_2dde7c:
    // 0x2dde7c: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2dde7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2dde80: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2dde80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dde84: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x2dde84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2dde88: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x2DDE88u;
    SET_GPR_U32(ctx, 31, 0x2DDE90u);
    ctx->pc = 0x2DDE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDE88u;
            // 0x2dde8c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDE90u; }
        if (ctx->pc != 0x2DDE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDE90u; }
        if (ctx->pc != 0x2DDE90u) { return; }
    }
    ctx->pc = 0x2DDE90u;
label_2dde90:
    // 0x2dde90: 0x27b100e0  addiu       $s1, $sp, 0xE0
    ctx->pc = 0x2dde90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2dde94: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x2dde94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dde98: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dde98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dde9c: 0xc041c3e  jal         func_1070F8
    ctx->pc = 0x2DDE9Cu;
    SET_GPR_U32(ctx, 31, 0x2DDEA4u);
    ctx->pc = 0x2DDEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDE9Cu;
            // 0x2ddea0: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDEA4u; }
        if (ctx->pc != 0x2DDEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDEA4u; }
        if (ctx->pc != 0x2DDEA4u) { return; }
    }
    ctx->pc = 0x2DDEA4u;
label_2ddea4:
    // 0x2ddea4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x2ddea4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2ddea8: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2ddea8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddeac: 0x26e60010  addiu       $a2, $s7, 0x10
    ctx->pc = 0x2ddeacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x2ddeb0: 0xc04bf44  jal         func_12FD10
    ctx->pc = 0x2DDEB0u;
    SET_GPR_U32(ctx, 31, 0x2DDEB8u);
    ctx->pc = 0x2DDEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDEB0u;
            // 0x2ddeb4: 0x26e70020  addiu       $a3, $s7, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FD10u;
    if (runtime->hasFunction(0x12FD10u)) {
        auto targetFn = runtime->lookupFunction(0x12FD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDEB8u; }
        if (ctx->pc != 0x2DDEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCheckPointPoly3_XZ__FPfPfPfPf_0x12fd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDEB8u; }
        if (ctx->pc != 0x2DDEB8u) { return; }
    }
    ctx->pc = 0x2DDEB8u;
label_2ddeb8:
    // 0x2ddeb8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2DDEB8u;
    {
        const bool branch_taken_0x2ddeb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDEB8u;
            // 0x2ddebc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddeb8) {
            ctx->pc = 0x2DDED0u;
            goto label_2dded0;
        }
    }
    ctx->pc = 0x2DDEC0u;
    // 0x2ddec0: 0x27a200d0  addiu       $v0, $sp, 0xD0
    ctx->pc = 0x2ddec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x2ddec4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ddec4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2ddec8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2ddec8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2ddecc: 0x7e820000  sq          $v0, 0x0($s4)
    ctx->pc = 0x2ddeccu;
    WRITE128(ADD32(GPR_U32(ctx, 20), 0), GPR_VEC(ctx, 2));
label_2dded0:
    // 0x2dded0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2dded0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dded4: 0x26e60010  addiu       $a2, $s7, 0x10
    ctx->pc = 0x2dded4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
    // 0x2dded8: 0xc04bf44  jal         func_12FD10
    ctx->pc = 0x2DDED8u;
    SET_GPR_U32(ctx, 31, 0x2DDEE0u);
    ctx->pc = 0x2DDEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDED8u;
            // 0x2ddedc: 0x26e70020  addiu       $a3, $s7, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FD10u;
    if (runtime->hasFunction(0x12FD10u)) {
        auto targetFn = runtime->lookupFunction(0x12FD10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDEE0u; }
        if (ctx->pc != 0x2DDEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCheckPointPoly3_XZ__FPfPfPfPf_0x12fd10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDEE0u; }
        if (ctx->pc != 0x2DDEE0u) { return; }
    }
    ctx->pc = 0x2DDEE0u;
label_2ddee0:
    // 0x2ddee0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2DDEE0u;
    {
        const bool branch_taken_0x2ddee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ddee0) {
            ctx->pc = 0x2DDEFCu;
            goto label_2ddefc;
        }
    }
    ctx->pc = 0x2DDEE8u;
    // 0x2ddee8: 0x7a230000  lq          $v1, 0x0($s1)
    ctx->pc = 0x2ddee8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2ddeec: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x2ddeecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2ddef0: 0x2821021  addu        $v0, $s4, $v0
    ctx->pc = 0x2ddef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2ddef4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ddef4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2ddef8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2ddef8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_2ddefc:
    // 0x2ddefc: 0x7bc30000  lq          $v1, 0x0($fp)
    ctx->pc = 0x2ddefcu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x2ddf00: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x2ddf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2ddf04: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2ddf04u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddf08: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ddf08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddf0c: 0x109100  sll         $s2, $s0, 4
    ctx->pc = 0x2ddf0cu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2ddf10: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2ddf10u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x2ddf14: 0xafa000f4  sw          $zero, 0xF4($sp)
    ctx->pc = 0x2ddf14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 0));
label_2ddf18:
    // 0x2ddf18: 0x2f19821  addu        $s3, $s7, $s1
    ctx->pc = 0x2ddf18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 17)));
    // 0x2ddf1c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2ddf1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddf20: 0xc04c044  jal         func_130110
    ctx->pc = 0x2DDF20u;
    SET_GPR_U32(ctx, 31, 0x2DDF28u);
    ctx->pc = 0x2DDF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDF20u;
            // 0x2ddf24: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130110u;
    if (runtime->hasFunction(0x130110u)) {
        auto targetFn = runtime->lookupFunction(0x130110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDF28u; }
        if (ctx->pc != 0x2DDF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVectorXZ2__FPfPf_0x130110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDF28u; }
        if (ctx->pc != 0x2DDF28u) { return; }
    }
    ctx->pc = 0x2DDF28u;
label_2ddf28:
    // 0x2ddf28: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x2ddf28u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2ddf2c: 0x0  nop
    ctx->pc = 0x2ddf2cu;
    // NOP
    // 0x2ddf30: 0x45000006  bc1f        . + 4 + (0x6 << 2)
    ctx->pc = 0x2DDF30u;
    {
        const bool branch_taken_0x2ddf30 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ddf30) {
            ctx->pc = 0x2DDF4Cu;
            goto label_2ddf4c;
        }
    }
    ctx->pc = 0x2DDF38u;
    // 0x2ddf38: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x2ddf38u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ddf3c: 0x2921021  addu        $v0, $s4, $s2
    ctx->pc = 0x2ddf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 18)));
    // 0x2ddf40: 0x26520010  addiu       $s2, $s2, 0x10
    ctx->pc = 0x2ddf40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x2ddf44: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ddf44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2ddf48: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2ddf48u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_2ddf4c:
    // 0x2ddf4c: 0x0  nop
    ctx->pc = 0x2ddf4cu;
    // NOP
    // 0x2ddf50: 0x7a630000  lq          $v1, 0x0($s3)
    ctx->pc = 0x2ddf50u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2ddf54: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x2ddf54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
    // 0x2ddf58: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x2ddf58u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x2ddf5c: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x2ddf5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x2ddf60: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x2ddf60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x2ddf64: 0x2ac20003  slti        $v0, $s6, 0x3
    ctx->pc = 0x2ddf64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x2ddf68: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2ddf68u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x2ddf6c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x2DDF6Cu;
    {
        const bool branch_taken_0x2ddf6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DDF70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDF6Cu;
            // 0x2ddf70: 0xac800004  sw          $zero, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddf6c) {
            ctx->pc = 0x2DDF18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ddf18;
        }
    }
    ctx->pc = 0x2DDF74u;
    // 0x2ddf74: 0x27b10110  addiu       $s1, $sp, 0x110
    ctx->pc = 0x2ddf74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x2ddf78: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x2ddf78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2ddf7c: 0x2823821  addu        $a3, $s4, $v0
    ctx->pc = 0x2ddf7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2ddf80: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2ddf80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2ddf84: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x2ddf84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x2ddf88: 0xc04be64  jal         func_12F990
    ctx->pc = 0x2DDF88u;
    SET_GPR_U32(ctx, 31, 0x2DDF90u);
    ctx->pc = 0x2DDF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDF88u;
            // 0x2ddf8c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F990u;
    if (runtime->hasFunction(0x12F990u)) {
        auto targetFn = runtime->lookupFunction(0x12F990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDF90u; }
        if (ctx->pc != 0x2DDF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgIntersectionSphereLine__FPfPfPfPA4_f_0x12f990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDF90u; }
        if (ctx->pc != 0x2DDF90u) { return; }
    }
    ctx->pc = 0x2DDF90u;
label_2ddf90:
    // 0x2ddf90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ddf90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddf94: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2ddf94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2ddf98: 0x27b10120  addiu       $s1, $sp, 0x120
    ctx->pc = 0x2ddf98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
    // 0x2ddf9c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x2ddf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2ddfa0: 0x2823821  addu        $a3, $s4, $v0
    ctx->pc = 0x2ddfa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2ddfa4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2ddfa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2ddfa8: 0xc04be64  jal         func_12F990
    ctx->pc = 0x2DDFA8u;
    SET_GPR_U32(ctx, 31, 0x2DDFB0u);
    ctx->pc = 0x2DDFACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDFA8u;
            // 0x2ddfac: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F990u;
    if (runtime->hasFunction(0x12F990u)) {
        auto targetFn = runtime->lookupFunction(0x12F990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDFB0u; }
        if (ctx->pc != 0x2DDFB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgIntersectionSphereLine__FPfPfPfPA4_f_0x12f990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDFB0u; }
        if (ctx->pc != 0x2DDFB0u) { return; }
    }
    ctx->pc = 0x2DDFB0u;
label_2ddfb0:
    // 0x2ddfb0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2ddfb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2ddfb4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2ddfb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddfb8: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x2ddfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2ddfbc: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2ddfbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2ddfc0: 0x2823821  addu        $a3, $s4, $v0
    ctx->pc = 0x2ddfc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
    // 0x2ddfc4: 0xc04be64  jal         func_12F990
    ctx->pc = 0x2DDFC4u;
    SET_GPR_U32(ctx, 31, 0x2DDFCCu);
    ctx->pc = 0x2DDFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDFC4u;
            // 0x2ddfc8: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F990u;
    if (runtime->hasFunction(0x12F990u)) {
        auto targetFn = runtime->lookupFunction(0x12F990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDFCCu; }
        if (ctx->pc != 0x2DDFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgIntersectionSphereLine__FPfPfPfPA4_f_0x12f990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDFCCu; }
        if (ctx->pc != 0x2DDFCCu) { return; }
    }
    ctx->pc = 0x2DDFCCu;
label_2ddfcc:
    // 0x2ddfcc: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2ddfccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2ddfd0: 0x1e000003  bgtz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2DDFD0u;
    {
        const bool branch_taken_0x2ddfd0 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x2DDFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDFD0u;
            // 0x2ddfd4: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddfd0) {
            ctx->pc = 0x2DDFE0u;
            goto label_2ddfe0;
        }
    }
    ctx->pc = 0x2DDFD8u;
    // 0x2ddfd8: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x2DDFD8u;
    {
        const bool branch_taken_0x2ddfd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DDFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDFD8u;
            // 0x2ddfdc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ddfd8) {
            ctx->pc = 0x2DE19Cu;
            goto label_2de19c;
        }
    }
    ctx->pc = 0x2DDFE0u;
label_2ddfe0:
    // 0x2ddfe0: 0xc041bd6  jal         func_106F58
    ctx->pc = 0x2DDFE0u;
    SET_GPR_U32(ctx, 31, 0x2DDFE8u);
    ctx->pc = 0x2DDFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DDFE0u;
            // 0x2ddfe4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F58u;
    if (runtime->hasFunction(0x106F58u)) {
        auto targetFn = runtime->lookupFunction(0x106F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDFE8u; }
        if (ctx->pc != 0x2DDFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InnerProduct_0x106f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DDFE8u; }
        if (ctx->pc != 0x2DDFE8u) { return; }
    }
    ctx->pc = 0x2DDFE8u;
label_2ddfe8:
    // 0x2ddfe8: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x2ddfe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2ddfec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2ddfecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2ddff0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2ddff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x2ddff4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2ddff4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ddff8: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x2ddff8u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
    // 0x2ddffc: 0x0  nop
    ctx->pc = 0x2ddffcu;
    // NOP
    // 0x2de000: 0x0  nop
    ctx->pc = 0x2de000u;
    // NOP
    // 0x2de004: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x2de004u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2de008: 0x10200062  beqz        $at, . + 4 + (0x62 << 2)
    ctx->pc = 0x2DE008u;
    {
        const bool branch_taken_0x2de008 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE00Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE008u;
            // 0x2de00c: 0x2a010009  slti        $at, $s0, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de008) {
            ctx->pc = 0x2DE194u;
            goto label_2de194;
        }
    }
    ctx->pc = 0x2DE010u;
    // 0x2de010: 0x1420004f  bnez        $at, . + 4 + (0x4F << 2)
    ctx->pc = 0x2DE010u;
    {
        const bool branch_taken_0x2de010 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE010u;
            // 0x2de014: 0x2604fff8  addiu       $a0, $s0, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de010) {
            ctx->pc = 0x2DE150u;
            goto label_2de150;
        }
    }
    ctx->pc = 0x2DE018u;
    // 0x2de018: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2de018u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2de01c:
    // 0x2de01c: 0x2853021  addu        $a2, $s4, $a1
    ctx->pc = 0x2de01cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x2de020: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2de020u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x2de024: 0xc6a50000  lwc1        $f5, 0x0($s5)
    ctx->pc = 0x2de024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2de028: 0x64102a  slt         $v0, $v1, $a0
    ctx->pc = 0x2de028u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x2de02c: 0xc4c40000  lwc1        $f4, 0x0($a2)
    ctx->pc = 0x2de02cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2de030: 0x24a50080  addiu       $a1, $a1, 0x80
    ctx->pc = 0x2de030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 128));
    // 0x2de034: 0xc6a30008  lwc1        $f3, 0x8($s5)
    ctx->pc = 0x2de034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2de038: 0xc4c20008  lwc1        $f2, 0x8($a2)
    ctx->pc = 0x2de038u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2de03c: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x2de03cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x2de040: 0x46040019  suba.s      $f0, $f4
    ctx->pc = 0x2de040u;
    ctx->f[31] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2de044: 0x4602189d  msub.s      $f2, $f3, $f2
    ctx->pc = 0x2de044u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2de048: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x2de048u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2de04c: 0xe4c20004  swc1        $f2, 0x4($a2)
    ctx->pc = 0x2de04cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x2de050: 0xc6a50000  lwc1        $f5, 0x0($s5)
    ctx->pc = 0x2de050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2de054: 0xc4c40010  lwc1        $f4, 0x10($a2)
    ctx->pc = 0x2de054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2de058: 0xc6a30008  lwc1        $f3, 0x8($s5)
    ctx->pc = 0x2de058u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2de05c: 0xc4c20018  lwc1        $f2, 0x18($a2)
    ctx->pc = 0x2de05cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2de060: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x2de060u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x2de064: 0x46040019  suba.s      $f0, $f4
    ctx->pc = 0x2de064u;
    ctx->f[31] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2de068: 0x4602189d  msub.s      $f2, $f3, $f2
    ctx->pc = 0x2de068u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2de06c: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x2de06cu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2de070: 0xe4c20014  swc1        $f2, 0x14($a2)
    ctx->pc = 0x2de070u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x2de074: 0xc6a50000  lwc1        $f5, 0x0($s5)
    ctx->pc = 0x2de074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2de078: 0xc4c40020  lwc1        $f4, 0x20($a2)
    ctx->pc = 0x2de078u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2de07c: 0xc6a30008  lwc1        $f3, 0x8($s5)
    ctx->pc = 0x2de07cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2de080: 0xc4c20028  lwc1        $f2, 0x28($a2)
    ctx->pc = 0x2de080u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2de084: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x2de084u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x2de088: 0x46040019  suba.s      $f0, $f4
    ctx->pc = 0x2de088u;
    ctx->f[31] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2de08c: 0x4602189d  msub.s      $f2, $f3, $f2
    ctx->pc = 0x2de08cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2de090: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x2de090u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2de094: 0xe4c20024  swc1        $f2, 0x24($a2)
    ctx->pc = 0x2de094u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 36), bits); }
    // 0x2de098: 0xc6a50000  lwc1        $f5, 0x0($s5)
    ctx->pc = 0x2de098u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2de09c: 0xc4c40030  lwc1        $f4, 0x30($a2)
    ctx->pc = 0x2de09cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2de0a0: 0xc6a30008  lwc1        $f3, 0x8($s5)
    ctx->pc = 0x2de0a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2de0a4: 0xc4c20038  lwc1        $f2, 0x38($a2)
    ctx->pc = 0x2de0a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2de0a8: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x2de0a8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x2de0ac: 0x46040019  suba.s      $f0, $f4
    ctx->pc = 0x2de0acu;
    ctx->f[31] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2de0b0: 0x4602189d  msub.s      $f2, $f3, $f2
    ctx->pc = 0x2de0b0u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2de0b4: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x2de0b4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2de0b8: 0xe4c20034  swc1        $f2, 0x34($a2)
    ctx->pc = 0x2de0b8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 52), bits); }
    // 0x2de0bc: 0xc6a50000  lwc1        $f5, 0x0($s5)
    ctx->pc = 0x2de0bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2de0c0: 0xc4c40040  lwc1        $f4, 0x40($a2)
    ctx->pc = 0x2de0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2de0c4: 0xc6a30008  lwc1        $f3, 0x8($s5)
    ctx->pc = 0x2de0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2de0c8: 0xc4c20048  lwc1        $f2, 0x48($a2)
    ctx->pc = 0x2de0c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2de0cc: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x2de0ccu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x2de0d0: 0x46040019  suba.s      $f0, $f4
    ctx->pc = 0x2de0d0u;
    ctx->f[31] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2de0d4: 0x4602189d  msub.s      $f2, $f3, $f2
    ctx->pc = 0x2de0d4u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2de0d8: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x2de0d8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2de0dc: 0xe4c20044  swc1        $f2, 0x44($a2)
    ctx->pc = 0x2de0dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 68), bits); }
    // 0x2de0e0: 0xc6a50000  lwc1        $f5, 0x0($s5)
    ctx->pc = 0x2de0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2de0e4: 0xc4c40050  lwc1        $f4, 0x50($a2)
    ctx->pc = 0x2de0e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2de0e8: 0xc6a30008  lwc1        $f3, 0x8($s5)
    ctx->pc = 0x2de0e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2de0ec: 0xc4c20058  lwc1        $f2, 0x58($a2)
    ctx->pc = 0x2de0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2de0f0: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x2de0f0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x2de0f4: 0x46040019  suba.s      $f0, $f4
    ctx->pc = 0x2de0f4u;
    ctx->f[31] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2de0f8: 0x4602189d  msub.s      $f2, $f3, $f2
    ctx->pc = 0x2de0f8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2de0fc: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x2de0fcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2de100: 0xe4c20054  swc1        $f2, 0x54($a2)
    ctx->pc = 0x2de100u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 84), bits); }
    // 0x2de104: 0xc6a50000  lwc1        $f5, 0x0($s5)
    ctx->pc = 0x2de104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2de108: 0xc4c40060  lwc1        $f4, 0x60($a2)
    ctx->pc = 0x2de108u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2de10c: 0xc6a30008  lwc1        $f3, 0x8($s5)
    ctx->pc = 0x2de10cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2de110: 0xc4c20068  lwc1        $f2, 0x68($a2)
    ctx->pc = 0x2de110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2de114: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x2de114u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x2de118: 0x46040019  suba.s      $f0, $f4
    ctx->pc = 0x2de118u;
    ctx->f[31] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2de11c: 0x4602189d  msub.s      $f2, $f3, $f2
    ctx->pc = 0x2de11cu;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2de120: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x2de120u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2de124: 0xe4c20064  swc1        $f2, 0x64($a2)
    ctx->pc = 0x2de124u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 100), bits); }
    // 0x2de128: 0xc6a50000  lwc1        $f5, 0x0($s5)
    ctx->pc = 0x2de128u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2de12c: 0xc4c40070  lwc1        $f4, 0x70($a2)
    ctx->pc = 0x2de12cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2de130: 0xc6a30008  lwc1        $f3, 0x8($s5)
    ctx->pc = 0x2de130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2de134: 0xc4c20078  lwc1        $f2, 0x78($a2)
    ctx->pc = 0x2de134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2de138: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x2de138u;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x2de13c: 0x46040019  suba.s      $f0, $f4
    ctx->pc = 0x2de13cu;
    ctx->f[31] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2de140: 0x4602189d  msub.s      $f2, $f3, $f2
    ctx->pc = 0x2de140u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2de144: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x2de144u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2de148: 0x1440ffb4  bnez        $v0, . + 4 + (-0x4C << 2)
    ctx->pc = 0x2DE148u;
    {
        const bool branch_taken_0x2de148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE14Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE148u;
            // 0x2de14c: 0xe4c20074  swc1        $f2, 0x74($a2) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de148) {
            ctx->pc = 0x2DE01Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2de01c;
        }
    }
    ctx->pc = 0x2DE150u;
label_2de150:
    // 0x2de150: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x2de150u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2de154: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
    ctx->pc = 0x2DE154u;
    {
        const bool branch_taken_0x2de154 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DE158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE154u;
            // 0x2de158: 0x32100  sll         $a0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de154) {
            ctx->pc = 0x2DE194u;
            goto label_2de194;
        }
    }
    ctx->pc = 0x2DE15Cu;
label_2de15c:
    // 0x2de15c: 0x2842821  addu        $a1, $s4, $a0
    ctx->pc = 0x2de15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
    // 0x2de160: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2de160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x2de164: 0xc6a50000  lwc1        $f5, 0x0($s5)
    ctx->pc = 0x2de164u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x2de168: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x2de168u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x2de16c: 0xc4a40000  lwc1        $f4, 0x0($a1)
    ctx->pc = 0x2de16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x2de170: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x2de170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x2de174: 0xc6a30008  lwc1        $f3, 0x8($s5)
    ctx->pc = 0x2de174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2de178: 0xc4a20008  lwc1        $f2, 0x8($a1)
    ctx->pc = 0x2de178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2de17c: 0x46042902  mul.s       $f4, $f5, $f4
    ctx->pc = 0x2de17cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[4]);
    // 0x2de180: 0x46040019  suba.s      $f0, $f4
    ctx->pc = 0x2de180u;
    ctx->f[31] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x2de184: 0x4602189d  msub.s      $f2, $f3, $f2
    ctx->pc = 0x2de184u;
    ctx->f[2] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[3], ctx->f[2]));
    // 0x2de188: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x2de188u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x2de18c: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x2DE18Cu;
    {
        const bool branch_taken_0x2de18c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DE190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE18Cu;
            // 0x2de190: 0xe4a20004  swc1        $f2, 0x4($a1) (Delay Slot)
        { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2de18c) {
            ctx->pc = 0x2DE15Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2de15c;
        }
    }
    ctx->pc = 0x2DE194u;
label_2de194:
    // 0x2de194: 0x0  nop
    ctx->pc = 0x2de194u;
    // NOP
    // 0x2de198: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2de198u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2de19c:
    // 0x2de19c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2de19cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2de1a0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2de1a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2de1a4: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x2de1a4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2de1a8: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x2de1a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2de1ac: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x2de1acu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2de1b0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2de1b0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2de1b4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2de1b4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2de1b8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2de1b8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2de1bc: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2de1bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2de1c0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2de1c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de1c4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2de1c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de1c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE1C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DE1C8u;
            // 0x2de1cc: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DE1D0u;
}
