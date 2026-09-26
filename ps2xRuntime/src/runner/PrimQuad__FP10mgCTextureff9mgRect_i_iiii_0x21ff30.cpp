#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PrimQuad__FP10mgCTextureff9mgRect<i>iiii
// Address: 0x21ff30 - 0x220004
void PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PrimQuad__FP10mgCTextureff9mgRect_i_iiii_0x21ff30");
#endif

    switch (ctx->pc) {
        case 0x21ff84u: goto label_21ff84;
        case 0x21ff90u: goto label_21ff90;
        case 0x21ff9cu: goto label_21ff9c;
        case 0x21ffa8u: goto label_21ffa8;
        case 0x21ffc0u: goto label_21ffc0;
        case 0x21ffd4u: goto label_21ffd4;
        case 0x21ffdcu: goto label_21ffdc;
        default: break;
    }

    ctx->pc = 0x21ff30u;

    // 0x21ff30: 0x27bdfe70  addiu       $sp, $sp, -0x190
    ctx->pc = 0x21ff30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966896));
    // 0x21ff34: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x21ff34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x21ff38: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x21ff38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x21ff3c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x21ff3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x21ff40: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x21ff40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x21ff44: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x21ff44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ff48: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x21ff48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x21ff4c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x21ff4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ff50: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x21ff50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x21ff54: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x21ff54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ff58: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x21ff58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x21ff5c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x21ff5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ff60: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x21ff60u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x21ff64: 0x120802d  daddu       $s0, $t1, $zero
    ctx->pc = 0x21ff64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ff68: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x21ff68u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x21ff6c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x21ff6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x21ff70: 0x78a20000  lq          $v0, 0x0($a1)
    ctx->pc = 0x21ff70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x21ff74: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x21ff74u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x21ff78: 0x46006d06  mov.s       $f20, $f13
    ctx->pc = 0x21ff78u;
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    // 0x21ff7c: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x21FF7Cu;
    SET_GPR_U32(ctx, 31, 0x21FF84u);
    ctx->pc = 0x21FF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FF7Cu;
            // 0x21ff80: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FF84u; }
        if (ctx->pc != 0x21FF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FF84u; }
        if (ctx->pc != 0x21FF84u) { return; }
    }
    ctx->pc = 0x21FF84u;
label_21ff84:
    // 0x21ff84: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x21ff84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x21ff88: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x21FF88u;
    SET_GPR_U32(ctx, 31, 0x21FF90u);
    ctx->pc = 0x21FF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FF88u;
            // 0x21ff8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FF90u; }
        if (ctx->pc != 0x21FF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FF90u; }
        if (ctx->pc != 0x21FF90u) { return; }
    }
    ctx->pc = 0x21FF90u;
label_21ff90:
    // 0x21ff90: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x21ff90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x21ff94: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x21FF94u;
    SET_GPR_U32(ctx, 31, 0x21FF9Cu);
    ctx->pc = 0x21FF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FF94u;
            // 0x21ff98: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FF9Cu; }
        if (ctx->pc != 0x21FF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FF9Cu; }
        if (ctx->pc != 0x21FF9Cu) { return; }
    }
    ctx->pc = 0x21FF9Cu;
label_21ff9c:
    // 0x21ff9c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x21ff9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ffa0: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x21FFA0u;
    SET_GPR_U32(ctx, 31, 0x21FFA8u);
    ctx->pc = 0x21FFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FFA0u;
            // 0x21ffa4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FFA8u; }
        if (ctx->pc != 0x21FFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FFA8u; }
        if (ctx->pc != 0x21FFA8u) { return; }
    }
    ctx->pc = 0x21FFA8u;
label_21ffa8:
    // 0x21ffa8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x21ffa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ffac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x21ffacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ffb0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x21ffb0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ffb4: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x21ffb4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21ffb8: 0xc04d320  jal         func_134C80
    ctx->pc = 0x21FFB8u;
    SET_GPR_U32(ctx, 31, 0x21FFC0u);
    ctx->pc = 0x21FFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FFB8u;
            // 0x21ffbc: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FFC0u; }
        if (ctx->pc != 0x21FFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FFC0u; }
        if (ctx->pc != 0x21FFC0u) { return; }
    }
    ctx->pc = 0x21FFC0u;
label_21ffc0:
    // 0x21ffc0: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x21ffc0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x21ffc4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x21ffc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x21ffc8: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x21ffc8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
    // 0x21ffcc: 0xc087f98  jal         func_21FE60
    ctx->pc = 0x21FFCCu;
    SET_GPR_U32(ctx, 31, 0x21FFD4u);
    ctx->pc = 0x21FFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FFCCu;
            // 0x21ffd0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FE60u;
    if (runtime->hasFunction(0x21FE60u)) {
        auto targetFn = runtime->lookupFunction(0x21FE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FFD4u; }
        if (ctx->pc != 0x21FFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrimQuad__FP11mgCDrawPrimff9mgRect_i__0x21fe60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FFD4u; }
        if (ctx->pc != 0x21FFD4u) { return; }
    }
    ctx->pc = 0x21FFD4u;
label_21ffd4:
    // 0x21ffd4: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x21FFD4u;
    SET_GPR_U32(ctx, 31, 0x21FFDCu);
    ctx->pc = 0x21FFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x21FFD4u;
            // 0x21ffd8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FFDCu; }
        if (ctx->pc != 0x21FFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x21FFDCu; }
        if (ctx->pc != 0x21FFDCu) { return; }
    }
    ctx->pc = 0x21FFDCu;
label_21ffdc:
    // 0x21ffdc: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x21ffdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x21ffe0: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x21ffe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x21ffe4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x21ffe4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x21ffe8: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x21ffe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21ffec: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x21ffecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x21fff0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x21fff0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21fff4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x21fff4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21fff8: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x21fff8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21fffc: 0x3e00008  jr          $ra
    ctx->pc = 0x21FFFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x220000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x21FFFCu;
            // 0x220000: 0x27bd0190  addiu       $sp, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x220004u;
}
