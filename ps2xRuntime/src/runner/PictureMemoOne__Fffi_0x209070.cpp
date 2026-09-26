#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: PictureMemoOne__Fffi
// Address: 0x209070 - 0x209150
void PictureMemoOne__Fffi_0x209070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("PictureMemoOne__Fffi_0x209070");
#endif

    switch (ctx->pc) {
        case 0x209098u: goto label_209098;
        case 0x2090a4u: goto label_2090a4;
        case 0x2090b0u: goto label_2090b0;
        case 0x2090bcu: goto label_2090bc;
        case 0x2090c8u: goto label_2090c8;
        case 0x2090e0u: goto label_2090e0;
        case 0x2090f0u: goto label_2090f0;
        case 0x209104u: goto label_209104;
        case 0x209114u: goto label_209114;
        case 0x209130u: goto label_209130;
        case 0x209138u: goto label_209138;
        default: break;
    }

    ctx->pc = 0x209070u;

    // 0x209070: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x209070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x209074: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x209074u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x209078: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x209078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x20907c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x20907cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x209080: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x209080u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209084: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x209084u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x209088: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x209088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x20908c: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x20908cu;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
    // 0x209090: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x209090u;
    SET_GPR_U32(ctx, 31, 0x209098u);
    ctx->pc = 0x209094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209090u;
            // 0x209094: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209098u; }
        if (ctx->pc != 0x209098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209098u; }
        if (ctx->pc != 0x209098u) { return; }
    }
    ctx->pc = 0x209098u;
label_209098:
    // 0x209098: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x209098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x20909c: 0xc087ec4  jal         func_21FB10
    ctx->pc = 0x20909Cu;
    SET_GPR_U32(ctx, 31, 0x2090A4u);
    ctx->pc = 0x2090A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20909Cu;
            // 0x2090a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2090A4u; }
        if (ctx->pc != 0x2090A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2090A4u; }
        if (ctx->pc != 0x2090A4u) { return; }
    }
    ctx->pc = 0x2090A4u;
label_2090a4:
    // 0x2090a4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2090a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2090a8: 0xc04d430  jal         func_1350C0
    ctx->pc = 0x2090A8u;
    SET_GPR_U32(ctx, 31, 0x2090B0u);
    ctx->pc = 0x2090ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2090A8u;
            // 0x2090ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350C0u;
    if (runtime->hasFunction(0x1350C0u)) {
        auto targetFn = runtime->lookupFunction(0x1350C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2090B0u; }
        if (ctx->pc != 0x2090B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__11mgCDrawPrimFi_0x1350c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2090B0u; }
        if (ctx->pc != 0x2090B0u) { return; }
    }
    ctx->pc = 0x2090B0u;
label_2090b0:
    // 0x2090b0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2090b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2090b4: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x2090B4u;
    SET_GPR_U32(ctx, 31, 0x2090BCu);
    ctx->pc = 0x2090B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2090B4u;
            // 0x2090b8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2090BCu; }
        if (ctx->pc != 0x2090BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2090BCu; }
        if (ctx->pc != 0x2090BCu) { return; }
    }
    ctx->pc = 0x2090BCu;
label_2090bc:
    // 0x2090bc: 0x8f859110  lw          $a1, -0x6EF0($gp)
    ctx->pc = 0x2090bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938896)));
    // 0x2090c0: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x2090C0u;
    SET_GPR_U32(ctx, 31, 0x2090C8u);
    ctx->pc = 0x2090C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2090C0u;
            // 0x2090c4: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2090C8u; }
        if (ctx->pc != 0x2090C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2090C8u; }
        if (ctx->pc != 0x2090C8u) { return; }
    }
    ctx->pc = 0x2090C8u;
label_2090c8:
    // 0x2090c8: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2090c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x2090cc: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2090ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2090d0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2090d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2090d4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2090d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2090d8: 0xc04d320  jal         func_134C80
    ctx->pc = 0x2090D8u;
    SET_GPR_U32(ctx, 31, 0x2090E0u);
    ctx->pc = 0x2090DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2090D8u;
            // 0x2090dc: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2090E0u; }
        if (ctx->pc != 0x2090E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2090E0u; }
        if (ctx->pc != 0x2090E0u) { return; }
    }
    ctx->pc = 0x2090E0u;
label_2090e0:
    // 0x2090e0: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2090e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2090e4: 0x2405006e  addiu       $a1, $zero, 0x6E
    ctx->pc = 0x2090e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x2090e8: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x2090E8u;
    SET_GPR_U32(ctx, 31, 0x2090F0u);
    ctx->pc = 0x2090ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2090E8u;
            // 0x2090ec: 0x24060162  addiu       $a2, $zero, 0x162 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 354));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2090F0u; }
        if (ctx->pc != 0x2090F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2090F0u; }
        if (ctx->pc != 0x2090F0u) { return; }
    }
    ctx->pc = 0x2090F0u;
label_2090f0:
    // 0x2090f0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2090f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2090f4: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x2090f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2090f8: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2090f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2090fc: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x2090FCu;
    SET_GPR_U32(ctx, 31, 0x209104u);
    ctx->pc = 0x209100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2090FCu;
            // 0x209100: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209104u; }
        if (ctx->pc != 0x209104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209104u; }
        if (ctx->pc != 0x209104u) { return; }
    }
    ctx->pc = 0x209104u;
label_209104:
    // 0x209104: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x209104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x209108: 0x24050090  addiu       $a1, $zero, 0x90
    ctx->pc = 0x209108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x20910c: 0xc04d35c  jal         func_134D70
    ctx->pc = 0x20910Cu;
    SET_GPR_U32(ctx, 31, 0x209114u);
    ctx->pc = 0x209110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20910Cu;
            // 0x209110: 0x24060184  addiu       $a2, $zero, 0x184 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D70u;
    if (runtime->hasFunction(0x134D70u)) {
        auto targetFn = runtime->lookupFunction(0x134D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209114u; }
        if (ctx->pc != 0x209114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd__11mgCDrawPrimFii_0x134d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209114u; }
        if (ctx->pc != 0x209114u) { return; }
    }
    ctx->pc = 0x209114u;
label_209114:
    // 0x209114: 0x3c024208  lui         $v0, 0x4208
    ctx->pc = 0x209114u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16904 << 16));
    // 0x209118: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x209118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x20911c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20911cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x209120: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x209120u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x209124: 0x46150300  add.s       $f12, $f0, $f21
    ctx->pc = 0x209124u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
    // 0x209128: 0xc04d2cc  jal         func_134B30
    ctx->pc = 0x209128u;
    SET_GPR_U32(ctx, 31, 0x209130u);
    ctx->pc = 0x20912Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209128u;
            // 0x20912c: 0x46140340  add.s       $f13, $f0, $f20 (Delay Slot)
        ctx->f[13] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B30u;
    if (runtime->hasFunction(0x134B30u)) {
        auto targetFn = runtime->lookupFunction(0x134B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209130u; }
        if (ctx->pc != 0x209130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFfff_0x134b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209130u; }
        if (ctx->pc != 0x209130u) { return; }
    }
    ctx->pc = 0x209130u;
label_209130:
    // 0x209130: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x209130u;
    SET_GPR_U32(ctx, 31, 0x209138u);
    ctx->pc = 0x209134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209130u;
            // 0x209134: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209138u; }
        if (ctx->pc != 0x209138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209138u; }
        if (ctx->pc != 0x209138u) { return; }
    }
    ctx->pc = 0x209138u;
label_209138:
    // 0x209138: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x209138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20913c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x20913cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x209140: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x209140u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x209144: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x209144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x209148: 0x3e00008  jr          $ra
    ctx->pc = 0x209148u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20914Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209148u;
            // 0x20914c: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x209150u;
}
