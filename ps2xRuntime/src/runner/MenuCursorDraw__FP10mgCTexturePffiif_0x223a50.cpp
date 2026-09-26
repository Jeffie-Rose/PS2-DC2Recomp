#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuCursorDraw__FP10mgCTexturePffiif
// Address: 0x223a50 - 0x223d3c
void MenuCursorDraw__FP10mgCTexturePffiif_0x223a50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuCursorDraw__FP10mgCTexturePffiif_0x223a50");
#endif

    switch (ctx->pc) {
        case 0x223aa4u: goto label_223aa4;
        case 0x223ad8u: goto label_223ad8;
        case 0x223b3cu: goto label_223b3c;
        case 0x223b48u: goto label_223b48;
        case 0x223b58u: goto label_223b58;
        case 0x223b64u: goto label_223b64;
        case 0x223b70u: goto label_223b70;
        case 0x223b88u: goto label_223b88;
        case 0x223ba0u: goto label_223ba0;
        case 0x223bc4u: goto label_223bc4;
        case 0x223be8u: goto label_223be8;
        case 0x223c28u: goto label_223c28;
        case 0x223c4cu: goto label_223c4c;
        case 0x223c90u: goto label_223c90;
        case 0x223cc0u: goto label_223cc0;
        case 0x223d00u: goto label_223d00;
        case 0x223d08u: goto label_223d08;
        default: break;
    }

    ctx->pc = 0x223a50u;

    // 0x223a50: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x223a50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
    // 0x223a54: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x223a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x223a58: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x223a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x223a5c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x223a5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x223a60: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x223a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x223a64: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x223a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x223a68: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x223a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x223a6c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x223a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x223a70: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x223a70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223a74: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x223a74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x223a78: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x223a78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223a7c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x223a7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x223a80: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x223a80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223a84: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x223a84u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x223a88: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x223a88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223a8c: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x223a8cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x223a90: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x223a90u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x223a94: 0x1240009c  beqz        $s2, . + 4 + (0x9C << 2)
    ctx->pc = 0x223A94u;
    {
        const bool branch_taken_0x223a94 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x223A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223A94u;
            // 0x223a98: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x223a94) {
            ctx->pc = 0x223D08u;
            goto label_223d08;
        }
    }
    ctx->pc = 0x223A9Cu;
    // 0x223a9c: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x223A9Cu;
    SET_GPR_U32(ctx, 31, 0x223AA4u);
    ctx->pc = 0x223AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223A9Cu;
            // 0x223aa0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223AA4u; }
        if (ctx->pc != 0x223AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223AA4u; }
        if (ctx->pc != 0x223AA4u) { return; }
    }
    ctx->pc = 0x223AA4u;
label_223aa4:
    // 0x223aa4: 0xdf8382c8  ld          $v1, -0x7D38($gp)
    ctx->pc = 0x223aa4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294935240)));
    // 0x223aa8: 0x27a701c8  addiu       $a3, $sp, 0x1C8
    ctx->pc = 0x223aa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
    // 0x223aac: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x223aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x223ab0: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x223ab0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x223ab4: 0x24420580  addiu       $v0, $v0, 0x580
    ctx->pc = 0x223ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1408));
    // 0x223ab8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x223ab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x223abc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x223abcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223ac0: 0xfce30000  sd          $v1, 0x0($a3)
    ctx->pc = 0x223ac0u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 3));
    // 0x223ac4: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x223ac4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x223ac8: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x223ac8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x223acc: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x223accu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
    // 0x223ad0: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x223AD0u;
    SET_GPR_U32(ctx, 31, 0x223AD8u);
    ctx->pc = 0x223AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223AD0u;
            // 0x223ad4: 0xfcc20010  sd          $v0, 0x10($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223AD8u; }
        if (ctx->pc != 0x223AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223AD8u; }
        if (ctx->pc != 0x223AD8u) { return; }
    }
    ctx->pc = 0x223AD8u;
label_223ad8:
    // 0x223ad8: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x223ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
    // 0x223adc: 0x27b601b4  addiu       $s6, $sp, 0x1B4
    ctx->pc = 0x223adcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 436));
    // 0x223ae0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x223ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x223ae4: 0x27b701b8  addiu       $s7, $sp, 0x1B8
    ctx->pc = 0x223ae4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 440));
    // 0x223ae8: 0xc44001c8  lwc1        $f0, 0x1C8($v0)
    ctx->pc = 0x223ae8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223aec: 0x27b501bc  addiu       $s5, $sp, 0x1BC
    ctx->pc = 0x223aecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 444));
    // 0x223af0: 0x27b401c0  addiu       $s4, $sp, 0x1C0
    ctx->pc = 0x223af0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x223af4: 0x27b301c4  addiu       $s3, $sp, 0x1C4
    ctx->pc = 0x223af4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 452));
    // 0x223af8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x223af8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x223afc: 0x4600a042  mul.s       $f1, $f20, $f0
    ctx->pc = 0x223afcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x223b00: 0xe7a101b0  swc1        $f1, 0x1B0($sp)
    ctx->pc = 0x223b00u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 432), bits); }
    // 0x223b04: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x223b04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223b08: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x223b08u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x223b0c: 0xe6c00000  swc1        $f0, 0x0($s6)
    ctx->pc = 0x223b0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 22), 0), bits); }
    // 0x223b10: 0xe6e10000  swc1        $f1, 0x0($s7)
    ctx->pc = 0x223b10u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 23), 0), bits); }
    // 0x223b14: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x223b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223b18: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x223b18u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x223b1c: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x223b1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x223b20: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x223b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223b24: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x223b24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x223b28: 0xe6800000  swc1        $f0, 0x0($s4)
    ctx->pc = 0x223b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 0), bits); }
    // 0x223b2c: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x223b2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223b30: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x223b30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x223b34: 0xc047a42  jal         func_11E908
    ctx->pc = 0x223B34u;
    SET_GPR_U32(ctx, 31, 0x223B3Cu);
    ctx->pc = 0x223B38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223B34u;
            // 0x223b38: 0xe6600000  swc1        $f0, 0x0($s3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223B3Cu; }
        if (ctx->pc != 0x223B3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223B3Cu; }
        if (ctx->pc != 0x223B3Cu) { return; }
    }
    ctx->pc = 0x223B3Cu;
label_223b3c:
    // 0x223b3c: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x223b3cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x223b40: 0xc047964  jal         func_11E590
    ctx->pc = 0x223B40u;
    SET_GPR_U32(ctx, 31, 0x223B48u);
    ctx->pc = 0x223B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223B40u;
            // 0x223b44: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223B48u; }
        if (ctx->pc != 0x223B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223B48u; }
        if (ctx->pc != 0x223B48u) { return; }
    }
    ctx->pc = 0x223B48u;
label_223b48:
    // 0x223b48: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x223b48u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x223b4c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x223b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x223b50: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x223B50u;
    SET_GPR_U32(ctx, 31, 0x223B58u);
    ctx->pc = 0x223B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223B50u;
            // 0x223b54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223B58u; }
        if (ctx->pc != 0x223B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223B58u; }
        if (ctx->pc != 0x223B58u) { return; }
    }
    ctx->pc = 0x223B58u;
label_223b58:
    // 0x223b58: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x223b58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x223b5c: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x223B5Cu;
    SET_GPR_U32(ctx, 31, 0x223B64u);
    ctx->pc = 0x223B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223B5Cu;
            // 0x223b60: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223B64u; }
        if (ctx->pc != 0x223B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223B64u; }
        if (ctx->pc != 0x223B64u) { return; }
    }
    ctx->pc = 0x223B64u;
label_223b64:
    // 0x223b64: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x223b64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223b68: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x223B68u;
    SET_GPR_U32(ctx, 31, 0x223B70u);
    ctx->pc = 0x223B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223B68u;
            // 0x223b6c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223B70u; }
        if (ctx->pc != 0x223B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223B70u; }
        if (ctx->pc != 0x223B70u) { return; }
    }
    ctx->pc = 0x223B70u;
label_223b70:
    // 0x223b70: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x223b70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x223b74: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x223b74u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223b78: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x223b78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x223b7c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x223b7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x223b80: 0xc04d320  jal         func_134C80
    ctx->pc = 0x223B80u;
    SET_GPR_U32(ctx, 31, 0x223B88u);
    ctx->pc = 0x223B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223B80u;
            // 0x223b84: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223B88u; }
        if (ctx->pc != 0x223B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223B88u; }
        if (ctx->pc != 0x223B88u) { return; }
    }
    ctx->pc = 0x223B88u;
label_223b88:
    // 0x223b88: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x223b88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x223b8c: 0x8c25ce50  lw          $a1, -0x31B0($at)
    ctx->pc = 0x223b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954576)));
    // 0x223b90: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x223b90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x223b94: 0x8c26ce54  lw          $a2, -0x31AC($at)
    ctx->pc = 0x223b94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954580)));
    // 0x223b98: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x223B98u;
    SET_GPR_U32(ctx, 31, 0x223BA0u);
    ctx->pc = 0x223B9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223B98u;
            // 0x223b9c: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223BA0u; }
        if (ctx->pc != 0x223BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223BA0u; }
        if (ctx->pc != 0x223BA0u) { return; }
    }
    ctx->pc = 0x223BA0u;
label_223ba0:
    // 0x223ba0: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x223ba0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x223ba4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x223ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x223ba8: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x223ba8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223bac: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x223bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x223bb0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x223bb0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x223bb4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x223bb4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x223bb8: 0x46011300  add.s       $f12, $f2, $f1
    ctx->pc = 0x223bb8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x223bbc: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x223BBCu;
    SET_GPR_U32(ctx, 31, 0x223BC4u);
    ctx->pc = 0x223BC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223BBCu;
            // 0x223bc0: 0x46001340  add.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223BC4u; }
        if (ctx->pc != 0x223BC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223BC4u; }
        if (ctx->pc != 0x223BC4u) { return; }
    }
    ctx->pc = 0x223BC4u;
label_223bc4:
    // 0x223bc4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x223bc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x223bc8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x223bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x223bcc: 0x8c23ce50  lw          $v1, -0x31B0($at)
    ctx->pc = 0x223bccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954576)));
    // 0x223bd0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x223bd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x223bd4: 0x8c22ce58  lw          $v0, -0x31A8($at)
    ctx->pc = 0x223bd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954584)));
    // 0x223bd8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x223bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x223bdc: 0x8c26ce54  lw          $a2, -0x31AC($at)
    ctx->pc = 0x223bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954580)));
    // 0x223be0: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x223BE0u;
    SET_GPR_U32(ctx, 31, 0x223BE8u);
    ctx->pc = 0x223BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223BE0u;
            // 0x223be4: 0x622821  addu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223BE8u; }
        if (ctx->pc != 0x223BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223BE8u; }
        if (ctx->pc != 0x223BE8u) { return; }
    }
    ctx->pc = 0x223BE8u;
label_223be8:
    // 0x223be8: 0xc7a401b0  lwc1        $f4, 0x1B0($sp)
    ctx->pc = 0x223be8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x223bec: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x223becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x223bf0: 0xc6c50000  lwc1        $f5, 0x0($s6)
    ctx->pc = 0x223bf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x223bf4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x223bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x223bf8: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x223bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x223bfc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x223bfcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x223c00: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x223c00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223c04: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x223c04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x223c08: 0x4615201a  mula.s      $f4, $f21
    ctx->pc = 0x223c08u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[21]);
    // 0x223c0c: 0x461428dd  msub.s      $f3, $f5, $f20
    ctx->pc = 0x223c0cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[20]));
    // 0x223c10: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x223c10u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x223c14: 0x46020b00  add.s       $f12, $f1, $f2
    ctx->pc = 0x223c14u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x223c18: 0x4614201a  mula.s      $f4, $f20
    ctx->pc = 0x223c18u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[20]);
    // 0x223c1c: 0x4615285c  madd.s      $f1, $f5, $f21
    ctx->pc = 0x223c1cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[5], ctx->f[21]));
    // 0x223c20: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x223C20u;
    SET_GPR_U32(ctx, 31, 0x223C28u);
    ctx->pc = 0x223C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223C20u;
            // 0x223c24: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223C28u; }
        if (ctx->pc != 0x223C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223C28u; }
        if (ctx->pc != 0x223C28u) { return; }
    }
    ctx->pc = 0x223C28u;
label_223c28:
    // 0x223c28: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x223c28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x223c2c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x223c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x223c30: 0x8c23ce54  lw          $v1, -0x31AC($at)
    ctx->pc = 0x223c30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954580)));
    // 0x223c34: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x223c34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x223c38: 0x8c22ce5c  lw          $v0, -0x31A4($at)
    ctx->pc = 0x223c38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954588)));
    // 0x223c3c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x223c3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x223c40: 0x8c25ce50  lw          $a1, -0x31B0($at)
    ctx->pc = 0x223c40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954576)));
    // 0x223c44: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x223C44u;
    SET_GPR_U32(ctx, 31, 0x223C4Cu);
    ctx->pc = 0x223C48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223C44u;
            // 0x223c48: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223C4Cu; }
        if (ctx->pc != 0x223C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223C4Cu; }
        if (ctx->pc != 0x223C4Cu) { return; }
    }
    ctx->pc = 0x223C4Cu;
label_223c4c:
    // 0x223c4c: 0xc6850000  lwc1        $f5, 0x0($s4)
    ctx->pc = 0x223c4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x223c50: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x223c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x223c54: 0xc6640000  lwc1        $f4, 0x0($s3)
    ctx->pc = 0x223c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x223c58: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x223c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x223c5c: 0xc6210000  lwc1        $f1, 0x0($s1)
    ctx->pc = 0x223c5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x223c60: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x223c60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x223c64: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x223c64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223c68: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x223c68u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x223c6c: 0x4615281a  mula.s      $f5, $f21
    ctx->pc = 0x223c6cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[21]);
    // 0x223c70: 0x461420dd  msub.s      $f3, $f4, $f20
    ctx->pc = 0x223c70u;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[20]));
    // 0x223c74: 0x46030840  add.s       $f1, $f1, $f3
    ctx->pc = 0x223c74u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[3]);
    // 0x223c78: 0x46011300  add.s       $f12, $f2, $f1
    ctx->pc = 0x223c78u;
    ctx->f[12] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x223c7c: 0x4614281a  mula.s      $f5, $f20
    ctx->pc = 0x223c7cu;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
    // 0x223c80: 0x4615205c  madd.s      $f1, $f4, $f21
    ctx->pc = 0x223c80u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[21]));
    // 0x223c84: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x223c84u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x223c88: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x223C88u;
    SET_GPR_U32(ctx, 31, 0x223C90u);
    ctx->pc = 0x223C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223C88u;
            // 0x223c8c: 0x46001340  add.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223C90u; }
        if (ctx->pc != 0x223C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223C90u; }
        if (ctx->pc != 0x223C90u) { return; }
    }
    ctx->pc = 0x223C90u;
label_223c90:
    // 0x223c90: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x223c90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x223c94: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x223c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x223c98: 0x8c26ce50  lw          $a2, -0x31B0($at)
    ctx->pc = 0x223c98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954576)));
    // 0x223c9c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x223c9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x223ca0: 0x8c25ce58  lw          $a1, -0x31A8($at)
    ctx->pc = 0x223ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954584)));
    // 0x223ca4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x223ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x223ca8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x223ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x223cac: 0x8c23ce54  lw          $v1, -0x31AC($at)
    ctx->pc = 0x223cacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954580)));
    // 0x223cb0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x223cb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x223cb4: 0x8c22ce5c  lw          $v0, -0x31A4($at)
    ctx->pc = 0x223cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294954588)));
    // 0x223cb8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x223CB8u;
    SET_GPR_U32(ctx, 31, 0x223CC0u);
    ctx->pc = 0x223CBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223CB8u;
            // 0x223cbc: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223CC0u; }
        if (ctx->pc != 0x223CC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223CC0u; }
        if (ctx->pc != 0x223CC0u) { return; }
    }
    ctx->pc = 0x223CC0u;
label_223cc0:
    // 0x223cc0: 0xc6e50000  lwc1        $f5, 0x0($s7)
    ctx->pc = 0x223cc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x223cc4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x223cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
    // 0x223cc8: 0xc6a40000  lwc1        $f4, 0x0($s5)
    ctx->pc = 0x223cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x223ccc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x223cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x223cd0: 0xc6220000  lwc1        $f2, 0x0($s1)
    ctx->pc = 0x223cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x223cd4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x223cd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x223cd8: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x223cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x223cdc: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x223cdcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x223ce0: 0x4615281a  mula.s      $f5, $f21
    ctx->pc = 0x223ce0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[21]);
    // 0x223ce4: 0x461420dd  msub.s      $f3, $f4, $f20
    ctx->pc = 0x223ce4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[20]));
    // 0x223ce8: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x223ce8u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x223cec: 0x46020b00  add.s       $f12, $f1, $f2
    ctx->pc = 0x223cecu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x223cf0: 0x4614281a  mula.s      $f5, $f20
    ctx->pc = 0x223cf0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[20]);
    // 0x223cf4: 0x4615205c  madd.s      $f1, $f4, $f21
    ctx->pc = 0x223cf4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[21]));
    // 0x223cf8: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x223CF8u;
    SET_GPR_U32(ctx, 31, 0x223D00u);
    ctx->pc = 0x223CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223CF8u;
            // 0x223cfc: 0x46010340  add.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223D00u; }
        if (ctx->pc != 0x223D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223D00u; }
        if (ctx->pc != 0x223D00u) { return; }
    }
    ctx->pc = 0x223D00u;
label_223d00:
    // 0x223d00: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x223D00u;
    SET_GPR_U32(ctx, 31, 0x223D08u);
    ctx->pc = 0x223D04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x223D00u;
            // 0x223d04: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223D08u; }
        if (ctx->pc != 0x223D08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x223D08u; }
        if (ctx->pc != 0x223D08u) { return; }
    }
    ctx->pc = 0x223D08u;
label_223d08:
    // 0x223d08: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x223d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x223d0c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x223d0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x223d10: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x223d10u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x223d14: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x223d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x223d18: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x223d18u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x223d1c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x223d1cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x223d20: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x223d20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x223d24: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x223d24u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x223d28: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x223d28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x223d2c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x223d2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x223d30: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x223d30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x223d34: 0x3e00008  jr          $ra
    ctx->pc = 0x223D34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x223D38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x223D34u;
            // 0x223d38: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x223D3Cu;
}
