#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: Draw__11CFireRasterFPfPf
// Address: 0x184410 - 0x1847c0
void Draw__11CFireRasterFPfPf_0x184410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Draw__11CFireRasterFPfPf_0x184410");
#endif

    switch (ctx->pc) {
        case 0x184450u: goto label_184450;
        case 0x184460u: goto label_184460;
        case 0x18446cu: goto label_18446c;
        case 0x184478u: goto label_184478;
        case 0x184484u: goto label_184484;
        case 0x184490u: goto label_184490;
        case 0x18449cu: goto label_18449c;
        case 0x1844a8u: goto label_1844a8;
        case 0x1844b4u: goto label_1844b4;
        case 0x1844c0u: goto label_1844c0;
        case 0x1844ccu: goto label_1844cc;
        case 0x1844e4u: goto label_1844e4;
        case 0x1844fcu: goto label_1844fc;
        case 0x184534u: goto label_184534;
        case 0x18458cu: goto label_18458c;
        case 0x1845bcu: goto label_1845bc;
        case 0x184750u: goto label_184750;
        case 0x18475cu: goto label_18475c;
        case 0x18476cu: goto label_18476c;
        case 0x184778u: goto label_184778;
        case 0x184790u: goto label_184790;
        default: break;
    }

    ctx->pc = 0x184410u;

    // 0x184410: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x184410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
    // 0x184414: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x184414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x184418: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x184418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x18441c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x18441cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x184420: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x184420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x184424: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x184424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x184428: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x184428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18442c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18442cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x184430: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x184430u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184434: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x184434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x184438: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x184438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18443c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18443cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x184440: 0xafa400ac  sw          $a0, 0xAC($sp)
    ctx->pc = 0x184440u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 4));
    // 0x184444: 0xafa500a0  sw          $a1, 0xA0($sp)
    ctx->pc = 0x184444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 5));
    // 0x184448: 0xc04d0e8  jal         func_1343A0
    ctx->pc = 0x184448u;
    SET_GPR_U32(ctx, 31, 0x184450u);
    ctx->pc = 0x18444Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184448u;
            // 0x18444c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184450u; }
        if (ctx->pc != 0x184450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184450u; }
        if (ctx->pc != 0x184450u) { return; }
    }
    ctx->pc = 0x184450u;
label_184450:
    // 0x184450: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x184450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x184454: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x184454u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184458: 0xc04d104  jal         func_134410
    ctx->pc = 0x184458u;
    SET_GPR_U32(ctx, 31, 0x184460u);
    ctx->pc = 0x18445Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184458u;
            // 0x18445c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184460u; }
        if (ctx->pc != 0x184460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184460u; }
        if (ctx->pc != 0x184460u) { return; }
    }
    ctx->pc = 0x184460u;
label_184460:
    // 0x184460: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x184460u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x184464: 0xc04d3e4  jal         func_134F90
    ctx->pc = 0x184464u;
    SET_GPR_U32(ctx, 31, 0x18446Cu);
    ctx->pc = 0x184468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184464u;
            // 0x184468: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18446Cu; }
        if (ctx->pc != 0x18446Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18446Cu; }
        if (ctx->pc != 0x18446Cu) { return; }
    }
    ctx->pc = 0x18446Cu;
label_18446c:
    // 0x18446c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x18446cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x184470: 0xc04d424  jal         func_135090
    ctx->pc = 0x184470u;
    SET_GPR_U32(ctx, 31, 0x184478u);
    ctx->pc = 0x184474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184470u;
            // 0x184474: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184478u; }
        if (ctx->pc != 0x184478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184478u; }
        if (ctx->pc != 0x184478u) { return; }
    }
    ctx->pc = 0x184478u;
label_184478:
    // 0x184478: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x184478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x18447c: 0xc04d428  jal         func_1350A0
    ctx->pc = 0x18447Cu;
    SET_GPR_U32(ctx, 31, 0x184484u);
    ctx->pc = 0x184480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18447Cu;
            // 0x184480: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184484u; }
        if (ctx->pc != 0x184484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184484u; }
        if (ctx->pc != 0x184484u) { return; }
    }
    ctx->pc = 0x184484u;
label_184484:
    // 0x184484: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x184484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x184488: 0xc04d3b0  jal         func_134EC0
    ctx->pc = 0x184488u;
    SET_GPR_U32(ctx, 31, 0x184490u);
    ctx->pc = 0x18448Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184488u;
            // 0x18448c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184490u; }
        if (ctx->pc != 0x184490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184490u; }
        if (ctx->pc != 0x184490u) { return; }
    }
    ctx->pc = 0x184490u;
label_184490:
    // 0x184490: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x184490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x184494: 0xc04d3b8  jal         func_134EE0
    ctx->pc = 0x184494u;
    SET_GPR_U32(ctx, 31, 0x18449Cu);
    ctx->pc = 0x184498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184494u;
            // 0x184498: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18449Cu; }
        if (ctx->pc != 0x18449Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18449Cu; }
        if (ctx->pc != 0x18449Cu) { return; }
    }
    ctx->pc = 0x18449Cu;
label_18449c:
    // 0x18449c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x18449cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1844a0: 0xc04d3bc  jal         func_134EF0
    ctx->pc = 0x1844A0u;
    SET_GPR_U32(ctx, 31, 0x1844A8u);
    ctx->pc = 0x1844A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1844A0u;
            // 0x1844a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1844A8u; }
        if (ctx->pc != 0x1844A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1844A8u; }
        if (ctx->pc != 0x1844A8u) { return; }
    }
    ctx->pc = 0x1844A8u;
label_1844a8:
    // 0x1844a8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1844a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1844ac: 0xc04d128  jal         func_1344A0
    ctx->pc = 0x1844ACu;
    SET_GPR_U32(ctx, 31, 0x1844B4u);
    ctx->pc = 0x1844B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1844ACu;
            // 0x1844b0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1844B4u; }
        if (ctx->pc != 0x1844B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1844B4u; }
        if (ctx->pc != 0x1844B4u) { return; }
    }
    ctx->pc = 0x1844B4u;
label_1844b4:
    // 0x1844b4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1844b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1844b8: 0xc04d44c  jal         func_135130
    ctx->pc = 0x1844B8u;
    SET_GPR_U32(ctx, 31, 0x1844C0u);
    ctx->pc = 0x1844BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1844B8u;
            // 0x1844bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1844C0u; }
        if (ctx->pc != 0x1844C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1844C0u; }
        if (ctx->pc != 0x1844C0u) { return; }
    }
    ctx->pc = 0x1844C0u;
label_1844c0:
    // 0x1844c0: 0x8fa500ac  lw          $a1, 0xAC($sp)
    ctx->pc = 0x1844c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1844c4: 0xc04d368  jal         func_134DA0
    ctx->pc = 0x1844C4u;
    SET_GPR_U32(ctx, 31, 0x1844CCu);
    ctx->pc = 0x1844C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1844C4u;
            // 0x1844c8: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1844CCu; }
        if (ctx->pc != 0x1844CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1844CCu; }
        if (ctx->pc != 0x1844CCu) { return; }
    }
    ctx->pc = 0x1844CCu;
label_1844cc:
    // 0x1844cc: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x1844ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1844d0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1844d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1844d4: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x1844d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
    // 0x1844d8: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x1844d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1844dc: 0xc04d360  jal         func_134D80
    ctx->pc = 0x1844DCu;
    SET_GPR_U32(ctx, 31, 0x1844E4u);
    ctx->pc = 0x1844E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1844DCu;
            // 0x1844e0: 0x623025  or          $a2, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D80u;
    if (runtime->hasFunction(0x134D80u)) {
        auto targetFn = runtime->lookupFunction(0x134D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1844E4u; }
        if (ctx->pc != 0x1844E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Direct__11mgCDrawPrimFUlUl_0x134d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1844E4u; }
        if (ctx->pc != 0x1844E4u) { return; }
    }
    ctx->pc = 0x1844E4u;
label_1844e4:
    // 0x1844e4: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1844e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x1844e8: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1844e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1844ec: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1844ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1844f0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1844f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1844f4: 0xc04d320  jal         func_134C80
    ctx->pc = 0x1844F4u;
    SET_GPR_U32(ctx, 31, 0x1844FCu);
    ctx->pc = 0x1844F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1844F4u;
            // 0x1844f8: 0x24080020  addiu       $t0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1844FCu; }
        if (ctx->pc != 0x1844FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1844FCu; }
        if (ctx->pc != 0x1844FCu) { return; }
    }
    ctx->pc = 0x1844FCu;
label_1844fc:
    // 0x1844fc: 0x8f848798  lw          $a0, -0x7868($gp)
    ctx->pc = 0x1844fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
    // 0x184500: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x184500u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184504: 0x8f85879c  lw          $a1, -0x7864($gp)
    ctx->pc = 0x184504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936476)));
    // 0x184508: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x184508u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18450c: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x18450cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x184510: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x184510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x184514: 0x4b100  sll         $s6, $a0, 4
    ctx->pc = 0x184514u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x184518: 0x5a900  sll         $s5, $a1, 4
    ctx->pc = 0x184518u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x18451c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x18451cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x184520: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x184520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x184524: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x184524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x184528: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x184528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x18452c: 0x38100  sll         $s0, $v1, 4
    ctx->pc = 0x18452cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x184530: 0x28900  sll         $s1, $v0, 4
    ctx->pc = 0x184530u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_184534:
    // 0x184534: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x184534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x184538: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x184538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x18453c: 0x24520070  addiu       $s2, $v0, 0x70
    ctx->pc = 0x18453cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x184540: 0x8c420088  lw          $v0, 0x88($v0)
    ctx->pc = 0x184540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 136)));
    // 0x184544: 0x1840008c  blez        $v0, . + 4 + (0x8C << 2)
    ctx->pc = 0x184544u;
    {
        const bool branch_taken_0x184544 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x184544) {
            ctx->pc = 0x184778u;
            goto label_184778;
        }
    }
    ctx->pc = 0x18454Cu;
    // 0x18454c: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x18454cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x184550: 0x8fa500a0  lw          $a1, 0xA0($sp)
    ctx->pc = 0x184550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x184554: 0xc6800000  lwc1        $f0, 0x0($s4)
    ctx->pc = 0x184554u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184558: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x184558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x18455c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x18455cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184560: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x184560u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x184564: 0xe7a001e0  swc1        $f0, 0x1E0($sp)
    ctx->pc = 0x184564u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 480), bits); }
    // 0x184568: 0xc6410004  lwc1        $f1, 0x4($s2)
    ctx->pc = 0x184568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18456c: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x18456cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184570: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x184570u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x184574: 0xe7a001e4  swc1        $f0, 0x1E4($sp)
    ctx->pc = 0x184574u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 484), bits); }
    // 0x184578: 0xc6410008  lwc1        $f1, 0x8($s2)
    ctx->pc = 0x184578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x18457c: 0xc6800008  lwc1        $f0, 0x8($s4)
    ctx->pc = 0x18457cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184580: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x184580u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x184584: 0xc041c38  jal         func_1070E0
    ctx->pc = 0x184584u;
    SET_GPR_U32(ctx, 31, 0x18458Cu);
    ctx->pc = 0x184588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184584u;
            // 0x184588: 0xe7a001e8  swc1        $f0, 0x1E8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18458Cu; }
        if (ctx->pc != 0x18458Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18458Cu; }
        if (ctx->pc != 0x18458Cu) { return; }
    }
    ctx->pc = 0x18458Cu;
label_18458c:
    // 0x18458c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18458cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x184590: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x184590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x184594: 0xafa201ec  sw          $v0, 0x1EC($sp)
    ctx->pc = 0x184594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 2));
    // 0x184598: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x184598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
    // 0x18459c: 0xc6420010  lwc1        $f2, 0x10($s2)
    ctx->pc = 0x18459cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1845a0: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x1845a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
    // 0x1845a4: 0xc6810000  lwc1        $f1, 0x0($s4)
    ctx->pc = 0x1845a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1845a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1845a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1845ac: 0xc6800004  lwc1        $f0, 0x4($s4)
    ctx->pc = 0x1845acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1845b0: 0x46011302  mul.s       $f12, $f2, $f1
    ctx->pc = 0x1845b0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x1845b4: 0xc0516ec  jal         func_145BB0
    ctx->pc = 0x1845B4u;
    SET_GPR_U32(ctx, 31, 0x1845BCu);
    ctx->pc = 0x1845B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1845B4u;
            // 0x1845b8: 0x46001342  mul.s       $f13, $f2, $f0 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145BB0u;
    if (runtime->hasFunction(0x145BB0u)) {
        auto targetFn = runtime->lookupFunction(0x145BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1845BCu; }
        if (ctx->pc != 0x1845BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransWorldPrim3DSprite__FPiPiPfffi_0x145bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1845BCu; }
        if (ctx->pc != 0x1845BCu) { return; }
    }
    ctx->pc = 0x1845BCu;
label_1845bc:
    // 0x1845bc: 0x1040006e  beqz        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x1845BCu;
    {
        const bool branch_taken_0x1845bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1845bc) {
            ctx->pc = 0x184778u;
            goto label_184778;
        }
    }
    ctx->pc = 0x1845C4u;
    // 0x1845c4: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x1845c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x1845c8: 0x56082a  slt         $at, $v0, $s6
    ctx->pc = 0x1845c8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1845cc: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1845CCu;
    {
        const bool branch_taken_0x1845cc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1845cc) {
            ctx->pc = 0x1845D8u;
            goto label_1845d8;
        }
    }
    ctx->pc = 0x1845D4u;
    // 0x1845d4: 0xafb601c0  sw          $s6, 0x1C0($sp)
    ctx->pc = 0x1845d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 22));
label_1845d8:
    // 0x1845d8: 0x27a301c4  addiu       $v1, $sp, 0x1C4
    ctx->pc = 0x1845d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 452));
    // 0x1845dc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1845dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1845e0: 0x55082a  slt         $at, $v0, $s5
    ctx->pc = 0x1845e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x1845e4: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1845E4u;
    {
        const bool branch_taken_0x1845e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1845e4) {
            ctx->pc = 0x1845F0u;
            goto label_1845f0;
        }
    }
    ctx->pc = 0x1845ECu;
    // 0x1845ec: 0xac750000  sw          $s5, 0x0($v1)
    ctx->pc = 0x1845ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 21));
label_1845f0:
    // 0x1845f0: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x1845f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x1845f4: 0x56082a  slt         $at, $v0, $s6
    ctx->pc = 0x1845f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
    // 0x1845f8: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x1845F8u;
    {
        const bool branch_taken_0x1845f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1845f8) {
            ctx->pc = 0x184604u;
            goto label_184604;
        }
    }
    ctx->pc = 0x184600u;
    // 0x184600: 0xafb601d0  sw          $s6, 0x1D0($sp)
    ctx->pc = 0x184600u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 22));
label_184604:
    // 0x184604: 0x0  nop
    ctx->pc = 0x184604u;
    // NOP
    // 0x184608: 0x27a401d4  addiu       $a0, $sp, 0x1D4
    ctx->pc = 0x184608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 468));
    // 0x18460c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x18460cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x184610: 0x55082a  slt         $at, $v0, $s5
    ctx->pc = 0x184610u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
    // 0x184614: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x184614u;
    {
        const bool branch_taken_0x184614 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x184614) {
            ctx->pc = 0x184620u;
            goto label_184620;
        }
    }
    ctx->pc = 0x18461Cu;
    // 0x18461c: 0xac950000  sw          $s5, 0x0($a0)
    ctx->pc = 0x18461cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 21));
label_184620:
    // 0x184620: 0x8fa201c0  lw          $v0, 0x1C0($sp)
    ctx->pc = 0x184620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x184624: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x184624u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x184628: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x184628u;
    {
        const bool branch_taken_0x184628 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x184628) {
            ctx->pc = 0x184634u;
            goto label_184634;
        }
    }
    ctx->pc = 0x184630u;
    // 0x184630: 0xafb001c0  sw          $s0, 0x1C0($sp)
    ctx->pc = 0x184630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 16));
label_184634:
    // 0x184634: 0x0  nop
    ctx->pc = 0x184634u;
    // NOP
    // 0x184638: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x184638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x18463c: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x18463cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x184640: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x184640u;
    {
        const bool branch_taken_0x184640 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x184640) {
            ctx->pc = 0x18464Cu;
            goto label_18464c;
        }
    }
    ctx->pc = 0x184648u;
    // 0x184648: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x184648u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
label_18464c:
    // 0x18464c: 0x0  nop
    ctx->pc = 0x18464cu;
    // NOP
    // 0x184650: 0x8fa201d0  lw          $v0, 0x1D0($sp)
    ctx->pc = 0x184650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x184654: 0x202082a  slt         $at, $s0, $v0
    ctx->pc = 0x184654u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x184658: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x184658u;
    {
        const bool branch_taken_0x184658 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x184658) {
            ctx->pc = 0x184664u;
            goto label_184664;
        }
    }
    ctx->pc = 0x184660u;
    // 0x184660: 0xafb001d0  sw          $s0, 0x1D0($sp)
    ctx->pc = 0x184660u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 16));
label_184664:
    // 0x184664: 0x0  nop
    ctx->pc = 0x184664u;
    // NOP
    // 0x184668: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x184668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18466c: 0x222082a  slt         $at, $s1, $v0
    ctx->pc = 0x18466cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x184670: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x184670u;
    {
        const bool branch_taken_0x184670 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x184670) {
            ctx->pc = 0x18467Cu;
            goto label_18467c;
        }
    }
    ctx->pc = 0x184678u;
    // 0x184678: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x184678u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
label_18467c:
    // 0x18467c: 0x0  nop
    ctx->pc = 0x18467cu;
    // NOP
    // 0x184680: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x184680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x184684: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x184684u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x184688: 0x8f878798  lw          $a3, -0x7868($gp)
    ctx->pc = 0x184688u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936472)));
    // 0x18468c: 0x8fa501c0  lw          $a1, 0x1C0($sp)
    ctx->pc = 0x18468cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x184690: 0x8f84879c  lw          $a0, -0x7864($gp)
    ctx->pc = 0x184690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936476)));
    // 0x184694: 0x8fa301d0  lw          $v1, 0x1D0($sp)
    ctx->pc = 0x184694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x184698: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x184698u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x18469c: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x18469cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x1846a0: 0x24a50028  addiu       $a1, $a1, 0x28
    ctx->pc = 0x1846a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
    // 0x1846a4: 0x44100  sll         $t0, $a0, 4
    ctx->pc = 0x1846a4u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x1846a8: 0x671823  subu        $v1, $v1, $a3
    ctx->pc = 0x1846a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x1846ac: 0xc82023  subu        $a0, $a2, $t0
    ctx->pc = 0x1846acu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
    // 0x1846b0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x1846b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
    // 0x1846b4: 0x24860028  addiu       $a2, $a0, 0x28
    ctx->pc = 0x1846b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), 40));
    // 0x1846b8: 0x2472ffd8  addiu       $s2, $v1, -0x28
    ctx->pc = 0x1846b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967256));
    // 0x1846bc: 0x4a10002  bgez        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1846BCu;
    {
        const bool branch_taken_0x1846bc = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x1846C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1846BCu;
            // 0x1846c0: 0x2453ffd8  addiu       $s3, $v0, -0x28 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1846bc) {
            ctx->pc = 0x1846C8u;
            goto label_1846c8;
        }
    }
    ctx->pc = 0x1846C4u;
    // 0x1846c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1846c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1846c8:
    // 0x1846c8: 0x4c10002  bgez        $a2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1846C8u;
    {
        const bool branch_taken_0x1846c8 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x1846c8) {
            ctx->pc = 0x1846D4u;
            goto label_1846d4;
        }
    }
    ctx->pc = 0x1846D0u;
    // 0x1846d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1846d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1846d4:
    // 0x1846d4: 0x0  nop
    ctx->pc = 0x1846d4u;
    // NOP
    // 0x1846d8: 0x6410002  bgez        $s2, . + 4 + (0x2 << 2)
    ctx->pc = 0x1846D8u;
    {
        const bool branch_taken_0x1846d8 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x1846d8) {
            ctx->pc = 0x1846E4u;
            goto label_1846e4;
        }
    }
    ctx->pc = 0x1846E0u;
    // 0x1846e0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1846e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1846e4:
    // 0x1846e4: 0x0  nop
    ctx->pc = 0x1846e4u;
    // NOP
    // 0x1846e8: 0x6610002  bgez        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x1846E8u;
    {
        const bool branch_taken_0x1846e8 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x1846e8) {
            ctx->pc = 0x1846F4u;
            goto label_1846f4;
        }
    }
    ctx->pc = 0x1846F0u;
    // 0x1846f0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1846f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1846f4:
    // 0x1846f4: 0x0  nop
    ctx->pc = 0x1846f4u;
    // NOP
    // 0x1846f8: 0x8f828780  lw          $v0, -0x7880($gp)
    ctx->pc = 0x1846f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
    // 0x1846fc: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x1846fcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x184700: 0x65082a  slt         $at, $v1, $a1
    ctx->pc = 0x184700u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x184704: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x184704u;
    {
        const bool branch_taken_0x184704 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x184704) {
            ctx->pc = 0x184710u;
            goto label_184710;
        }
    }
    ctx->pc = 0x18470Cu;
    // 0x18470c: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x18470cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_184710:
    // 0x184710: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x184710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
    // 0x184714: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x184714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x184718: 0x46082a  slt         $at, $v0, $a2
    ctx->pc = 0x184718u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x18471c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x18471Cu;
    {
        const bool branch_taken_0x18471c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18471c) {
            ctx->pc = 0x184728u;
            goto label_184728;
        }
    }
    ctx->pc = 0x184724u;
    // 0x184724: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x184724u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_184728:
    // 0x184728: 0x72082a  slt         $at, $v1, $s2
    ctx->pc = 0x184728u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x18472c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x18472Cu;
    {
        const bool branch_taken_0x18472c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18472c) {
            ctx->pc = 0x184738u;
            goto label_184738;
        }
    }
    ctx->pc = 0x184734u;
    // 0x184734: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x184734u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_184738:
    // 0x184738: 0x53082a  slt         $at, $v0, $s3
    ctx->pc = 0x184738u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x18473c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x18473Cu;
    {
        const bool branch_taken_0x18473c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18473c) {
            ctx->pc = 0x184748u;
            goto label_184748;
        }
    }
    ctx->pc = 0x184744u;
    // 0x184744: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x184744u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_184748:
    // 0x184748: 0xc04d34c  jal         func_134D30
    ctx->pc = 0x184748u;
    SET_GPR_U32(ctx, 31, 0x184750u);
    ctx->pc = 0x18474Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184748u;
            // 0x18474c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D30u;
    if (runtime->hasFunction(0x134D30u)) {
        auto targetFn = runtime->lookupFunction(0x134D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184750u; }
        if (ctx->pc != 0x184750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd4__11mgCDrawPrimFii_0x134d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184750u; }
        if (ctx->pc != 0x184750u) { return; }
    }
    ctx->pc = 0x184750u;
label_184750:
    // 0x184750: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x184750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x184754: 0xc04d318  jal         func_134C60
    ctx->pc = 0x184754u;
    SET_GPR_U32(ctx, 31, 0x18475Cu);
    ctx->pc = 0x184758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184754u;
            // 0x184758: 0x27a501c0  addiu       $a1, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18475Cu; }
        if (ctx->pc != 0x18475Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18475Cu; }
        if (ctx->pc != 0x18475Cu) { return; }
    }
    ctx->pc = 0x18475Cu;
label_18475c:
    // 0x18475c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x18475cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184760: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x184760u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x184764: 0xc04d34c  jal         func_134D30
    ctx->pc = 0x184764u;
    SET_GPR_U32(ctx, 31, 0x18476Cu);
    ctx->pc = 0x184768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184764u;
            // 0x184768: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D30u;
    if (runtime->hasFunction(0x134D30u)) {
        auto targetFn = runtime->lookupFunction(0x134D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18476Cu; }
        if (ctx->pc != 0x18476Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd4__11mgCDrawPrimFii_0x134d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18476Cu; }
        if (ctx->pc != 0x18476Cu) { return; }
    }
    ctx->pc = 0x18476Cu;
label_18476c:
    // 0x18476c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x18476cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x184770: 0xc04d318  jal         func_134C60
    ctx->pc = 0x184770u;
    SET_GPR_U32(ctx, 31, 0x184778u);
    ctx->pc = 0x184774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184770u;
            // 0x184774: 0x27a501d0  addiu       $a1, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C60u;
    if (runtime->hasFunction(0x134C60u)) {
        auto targetFn = runtime->lookupFunction(0x134C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184778u; }
        if (ctx->pc != 0x184778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFPi_0x134c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184778u; }
        if (ctx->pc != 0x184778u) { return; }
    }
    ctx->pc = 0x184778u;
label_184778:
    // 0x184778: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x184778u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x18477c: 0x2bc20014  slti        $v0, $fp, 0x14
    ctx->pc = 0x18477cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x184780: 0x1440ff6c  bnez        $v0, . + 4 + (-0x94 << 2)
    ctx->pc = 0x184780u;
    {
        const bool branch_taken_0x184780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x184784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x184780u;
            // 0x184784: 0x26f70020  addiu       $s7, $s7, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x184780) {
            ctx->pc = 0x184534u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_184534;
        }
    }
    ctx->pc = 0x184788u;
    // 0x184788: 0xc04d1a4  jal         func_134690
    ctx->pc = 0x184788u;
    SET_GPR_U32(ctx, 31, 0x184790u);
    ctx->pc = 0x18478Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x184788u;
            // 0x18478c: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184790u; }
        if (ctx->pc != 0x184790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x184790u; }
        if (ctx->pc != 0x184790u) { return; }
    }
    ctx->pc = 0x184790u;
label_184790:
    // 0x184790: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x184790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x184794: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x184794u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x184798: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x184798u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18479c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18479cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1847a0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1847a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1847a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1847a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1847a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1847a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1847ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1847acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1847b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1847b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1847b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1847b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1847b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1847B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1847BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1847B8u;
            // 0x1847bc: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1847C0u;
}
