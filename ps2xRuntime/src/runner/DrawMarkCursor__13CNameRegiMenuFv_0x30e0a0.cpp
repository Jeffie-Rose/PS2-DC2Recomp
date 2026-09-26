#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawMarkCursor__13CNameRegiMenuFv
// Address: 0x30e0a0 - 0x30e160
void DrawMarkCursor__13CNameRegiMenuFv_0x30e0a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawMarkCursor__13CNameRegiMenuFv_0x30e0a0");
#endif

    switch (ctx->pc) {
        case 0x30e0ccu: goto label_30e0cc;
        case 0x30e0d4u: goto label_30e0d4;
        case 0x30e10cu: goto label_30e10c;
        case 0x30e114u: goto label_30e114;
        case 0x30e150u: goto label_30e150;
        default: break;
    }

    ctx->pc = 0x30e0a0u;

    // 0x30e0a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x30e0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x30e0a4: 0x3c023d56  lui         $v0, 0x3D56
    ctx->pc = 0x30e0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15702 << 16));
    // 0x30e0a8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x30e0a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30e0ac: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x30e0acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x30e0b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30e0b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x30e0b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30e0b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30e0b8: 0xc481013c  lwc1        $f1, 0x13C($a0)
    ctx->pc = 0x30e0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e0bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x30e0bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e0c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x30e0c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x30e0c4: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x30E0C4u;
    SET_GPR_U32(ctx, 31, 0x30E0CCu);
    ctx->pc = 0x30E0C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E0C4u;
            // 0x30e0c8: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E0CCu; }
        if (ctx->pc != 0x30E0CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E0CCu; }
        if (ctx->pc != 0x30E0CCu) { return; }
    }
    ctx->pc = 0x30E0CCu;
label_30e0cc:
    // 0x30e0cc: 0xc047964  jal         func_11E590
    ctx->pc = 0x30E0CCu;
    SET_GPR_U32(ctx, 31, 0x30E0D4u);
    ctx->pc = 0x30E0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E0CCu;
            // 0x30e0d0: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E0D4u; }
        if (ctx->pc != 0x30E0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E0D4u; }
        if (ctx->pc != 0x30E0D4u) { return; }
    }
    ctx->pc = 0x30E0D4u;
label_30e0d4:
    // 0x30e0d4: 0x3c0240c0  lui         $v0, 0x40C0
    ctx->pc = 0x30e0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16576 << 16));
    // 0x30e0d8: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x30e0d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30e0dc: 0xc6010134  lwc1        $f1, 0x134($s0)
    ctx->pc = 0x30e0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e0e0: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x30e0e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x30e0e4: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x30e0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
    // 0x30e0e8: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x30e0e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
    // 0x30e0ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x30e0ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30e0f0: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x30e0f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x30e0f4: 0xc601013c  lwc1        $f1, 0x13C($s0)
    ctx->pc = 0x30e0f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e0f8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x30e0f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x30e0fc: 0x0  nop
    ctx->pc = 0x30e0fcu;
    // NOP
    // 0x30e100: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x30e100u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x30e104: 0xc04c374  jal         func_130DD0
    ctx->pc = 0x30E104u;
    SET_GPR_U32(ctx, 31, 0x30E10Cu);
    ctx->pc = 0x30E108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E104u;
            // 0x30e108: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E10Cu; }
        if (ctx->pc != 0x30E10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E10Cu; }
        if (ctx->pc != 0x30E10Cu) { return; }
    }
    ctx->pc = 0x30E10Cu;
label_30e10c:
    // 0x30e10c: 0xc047a42  jal         func_11E908
    ctx->pc = 0x30E10Cu;
    SET_GPR_U32(ctx, 31, 0x30E114u);
    ctx->pc = 0x30E110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E10Cu;
            // 0x30e110: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E114u; }
        if (ctx->pc != 0x30E114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E114u; }
        if (ctx->pc != 0x30E114u) { return; }
    }
    ctx->pc = 0x30E114u;
label_30e114:
    // 0x30e114: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x30e114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
    // 0x30e118: 0x8f84a1e8  lw          $a0, -0x5E18($gp)
    ctx->pc = 0x30e118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294943208)));
    // 0x30e11c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x30e11cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x30e120: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x30e120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x30e124: 0xc6010138  lwc1        $f1, 0x138($s0)
    ctx->pc = 0x30e124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x30e128: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x30e128u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x30e12c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x30e12cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x30e130: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x30e130u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x30e134: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x30e134u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x30e138: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x30e138u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x30e13c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x30e13cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x30e140: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x30e140u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x30e144: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x30e144u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x30e148: 0xc088e94  jal         func_223A50
    ctx->pc = 0x30E148u;
    SET_GPR_U32(ctx, 31, 0x30E150u);
    ctx->pc = 0x30E14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x30E148u;
            // 0x30e14c: 0xe7a0002c  swc1        $f0, 0x2C($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 44), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x223A50u;
    if (runtime->hasFunction(0x223A50u)) {
        auto targetFn = runtime->lookupFunction(0x223A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E150u; }
        if (ctx->pc != 0x30E150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCursorDraw__FP10mgCTexturePffiif_0x223a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x30E150u; }
        if (ctx->pc != 0x30E150u) { return; }
    }
    ctx->pc = 0x30E150u;
label_30e150:
    // 0x30e150: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x30e150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x30e154: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x30e154u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x30e158: 0x3e00008  jr          $ra
    ctx->pc = 0x30E158u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x30E15Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30E158u;
            // 0x30e15c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x30E160u;
}
