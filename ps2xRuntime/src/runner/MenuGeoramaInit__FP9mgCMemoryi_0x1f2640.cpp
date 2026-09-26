#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuGeoramaInit__FP9mgCMemoryi
// Address: 0x1f2640 - 0x1f31d4
void MenuGeoramaInit__FP9mgCMemoryi_0x1f2640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuGeoramaInit__FP9mgCMemoryi_0x1f2640");
#endif

    switch (ctx->pc) {
        case 0x1f2668u: goto label_1f2668;
        case 0x1f2670u: goto label_1f2670;
        case 0x1f2694u: goto label_1f2694;
        case 0x1f26acu: goto label_1f26ac;
        case 0x1f26b8u: goto label_1f26b8;
        case 0x1f26ccu: goto label_1f26cc;
        case 0x1f26e0u: goto label_1f26e0;
        case 0x1f26f8u: goto label_1f26f8;
        case 0x1f270cu: goto label_1f270c;
        case 0x1f2718u: goto label_1f2718;
        case 0x1f2750u: goto label_1f2750;
        case 0x1f2760u: goto label_1f2760;
        case 0x1f2770u: goto label_1f2770;
        case 0x1f2780u: goto label_1f2780;
        case 0x1f2794u: goto label_1f2794;
        case 0x1f2a04u: goto label_1f2a04;
        case 0x1f2a14u: goto label_1f2a14;
        case 0x1f2a24u: goto label_1f2a24;
        case 0x1f2a34u: goto label_1f2a34;
        case 0x1f2a54u: goto label_1f2a54;
        case 0x1f2a78u: goto label_1f2a78;
        case 0x1f2a9cu: goto label_1f2a9c;
        case 0x1f2ad4u: goto label_1f2ad4;
        case 0x1f2ae4u: goto label_1f2ae4;
        case 0x1f2b40u: goto label_1f2b40;
        case 0x1f2b58u: goto label_1f2b58;
        case 0x1f2bacu: goto label_1f2bac;
        case 0x1f2bb8u: goto label_1f2bb8;
        case 0x1f2bc0u: goto label_1f2bc0;
        case 0x1f2be4u: goto label_1f2be4;
        case 0x1f2bf4u: goto label_1f2bf4;
        case 0x1f2c00u: goto label_1f2c00;
        case 0x1f2c0cu: goto label_1f2c0c;
        case 0x1f2c2cu: goto label_1f2c2c;
        case 0x1f2c34u: goto label_1f2c34;
        case 0x1f2c54u: goto label_1f2c54;
        case 0x1f2c6cu: goto label_1f2c6c;
        case 0x1f2c84u: goto label_1f2c84;
        case 0x1f2c90u: goto label_1f2c90;
        case 0x1f2ca8u: goto label_1f2ca8;
        case 0x1f2cd8u: goto label_1f2cd8;
        case 0x1f2cfcu: goto label_1f2cfc;
        case 0x1f2d10u: goto label_1f2d10;
        case 0x1f2d24u: goto label_1f2d24;
        case 0x1f2d2cu: goto label_1f2d2c;
        case 0x1f2d3cu: goto label_1f2d3c;
        case 0x1f2d4cu: goto label_1f2d4c;
        case 0x1f2d58u: goto label_1f2d58;
        case 0x1f2d68u: goto label_1f2d68;
        case 0x1f2d88u: goto label_1f2d88;
        case 0x1f2d9cu: goto label_1f2d9c;
        case 0x1f2dacu: goto label_1f2dac;
        case 0x1f2e2cu: goto label_1f2e2c;
        case 0x1f2e3cu: goto label_1f2e3c;
        case 0x1f2e48u: goto label_1f2e48;
        case 0x1f2e70u: goto label_1f2e70;
        case 0x1f2eccu: goto label_1f2ecc;
        case 0x1f2ee8u: goto label_1f2ee8;
        case 0x1f2fa0u: goto label_1f2fa0;
        case 0x1f2fc0u: goto label_1f2fc0;
        case 0x1f2fe0u: goto label_1f2fe0;
        case 0x1f3000u: goto label_1f3000;
        case 0x1f3020u: goto label_1f3020;
        case 0x1f303cu: goto label_1f303c;
        case 0x1f3058u: goto label_1f3058;
        case 0x1f3074u: goto label_1f3074;
        case 0x1f3090u: goto label_1f3090;
        case 0x1f30acu: goto label_1f30ac;
        case 0x1f30c8u: goto label_1f30c8;
        case 0x1f30d0u: goto label_1f30d0;
        case 0x1f30e0u: goto label_1f30e0;
        case 0x1f310cu: goto label_1f310c;
        case 0x1f311cu: goto label_1f311c;
        case 0x1f3140u: goto label_1f3140;
        case 0x1f3150u: goto label_1f3150;
        case 0x1f3174u: goto label_1f3174;
        case 0x1f317cu: goto label_1f317c;
        case 0x1f3190u: goto label_1f3190;
        default: break;
    }

    ctx->pc = 0x1f2640u;

    // 0x1f2640: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1f2640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1f2644: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1f2644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x1f2648: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1f2648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x1f264c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1f264cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1f2650: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1f2650u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1f2654: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1f2654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1f2658: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1f2658u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1f265c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f265cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2660: 0xc08cb34  jal         func_232CD0
    ctx->pc = 0x1F2660u;
    SET_GPR_U32(ctx, 31, 0x1F2668u);
    ctx->pc = 0x1F2664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2660u;
            // 0x1f2664: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232CD0u;
    if (runtime->hasFunction(0x232CD0u)) {
        auto targetFn = runtime->lookupFunction(0x232CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2668u; }
        if (ctx->pc != 0x1F2668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuKeyCtrlEnv__Fi_0x232cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2668u; }
        if (ctx->pc != 0x1F2668u) { return; }
    }
    ctx->pc = 0x1F2668u;
label_1f2668:
    // 0x1f2668: 0xc04e780  jal         func_139E00
    ctx->pc = 0x1F2668u;
    SET_GPR_U32(ctx, 31, 0x1F2670u);
    ctx->pc = 0x1F266Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2668u;
            // 0x1f266c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2670u; }
        if (ctx->pc != 0x1F2670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2670u; }
        if (ctx->pc != 0x1F2670u) { return; }
    }
    ctx->pc = 0x1F2670u;
label_1f2670:
    // 0x1f2670: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1f2670u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x1f2674: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x1f2674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x1f2678: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x1f2678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x1f267c: 0x248492e0  addiu       $a0, $a0, -0x6D20
    ctx->pc = 0x1f267cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939360));
    // 0x1f2680: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1f2680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x1f2684: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x1f2684u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x1f2688: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1f2688u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x1f268c: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x1F268Cu;
    SET_GPR_U32(ctx, 31, 0x1F2694u);
    ctx->pc = 0x1F2690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F268Cu;
            // 0x1f2690: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2694u; }
        if (ctx->pc != 0x1F2694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2694u; }
        if (ctx->pc != 0x1F2694u) { return; }
    }
    ctx->pc = 0x1F2694u;
label_1f2694:
    // 0x1f2694: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x1f2694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x1f2698: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x1f2698u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x1f269c: 0x24a592e0  addiu       $a1, $a1, -0x6D20
    ctx->pc = 0x1f269cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939360));
    // 0x1f26a0: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x1f26a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1f26a4: 0xc08b2e8  jal         func_22CBA0
    ctx->pc = 0x1F26A4u;
    SET_GPR_U32(ctx, 31, 0x1F26ACu);
    ctx->pc = 0x1F26A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F26A4u;
            // 0x1f26a8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22CBA0u;
    if (runtime->hasFunction(0x22CBA0u)) {
        auto targetFn = runtime->lookupFunction(0x22CBA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F26ACu; }
        if (ctx->pc != 0x1F26ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCapture__FiP9mgCMemoryi_0x22cba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F26ACu; }
        if (ctx->pc != 0x1F26ACu) { return; }
    }
    ctx->pc = 0x1F26ACu;
label_1f26ac:
    // 0x1f26ac: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x1f26acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x1f26b0: 0xc08cb18  jal         func_232C60
    ctx->pc = 0x1F26B0u;
    SET_GPR_U32(ctx, 31, 0x1F26B8u);
    ctx->pc = 0x1F26B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F26B0u;
            // 0x1f26b4: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232C60u;
    if (runtime->hasFunction(0x232C60u)) {
        auto targetFn = runtime->lookupFunction(0x232C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F26B8u; }
        if (ctx->pc != 0x1F26B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMainImageDataEnter__Fi_0x232c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F26B8u; }
        if (ctx->pc != 0x1F26B8u) { return; }
    }
    ctx->pc = 0x1F26B8u;
label_1f26b8:
    // 0x1f26b8: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x1f26b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x1f26bc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1f26bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f26c0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1f26c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1f26c4: 0xc08d1d0  jal         func_234740
    ctx->pc = 0x1F26C4u;
    SET_GPR_U32(ctx, 31, 0x1F26CCu);
    ctx->pc = 0x1F26C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F26C4u;
            // 0x1f26c8: 0xac430054  sw          $v1, 0x54($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234740u;
    if (runtime->hasFunction(0x234740u)) {
        auto targetFn = runtime->lookupFunction(0x234740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F26CCu; }
        if (ctx->pc != 0x1F26CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainPosCfgBuffer__FPi_0x234740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F26CCu; }
        if (ctx->pc != 0x1F26CCu) { return; }
    }
    ctx->pc = 0x1F26CCu;
label_1f26cc:
    // 0x1f26cc: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1f26ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f26d0: 0x3c0601ed  lui         $a2, 0x1ED
    ctx->pc = 0x1f26d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)493 << 16));
    // 0x1f26d4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f26d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f26d8: 0xc094f98  jal         func_253E60
    ctx->pc = 0x1F26D8u;
    SET_GPR_U32(ctx, 31, 0x1F26E0u);
    ctx->pc = 0x1F26DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F26D8u;
            // 0x1f26dc: 0x24c692e0  addiu       $a2, $a2, -0x6D20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x253E60u;
    if (runtime->hasFunction(0x253E60u)) {
        auto targetFn = runtime->lookupFunction(0x253E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F26E0u; }
        if (ctx->pc != 0x1F26E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuDataAnalyze__FPciP9mgCMemory_0x253e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F26E0u; }
        if (ctx->pc != 0x1F26E0u) { return; }
    }
    ctx->pc = 0x1F26E0u;
label_1f26e0:
    // 0x1f26e0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f26e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f26e4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f26e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f26e8: 0x8c24d610  lw          $a0, -0x29F0($at)
    ctx->pc = 0x1f26e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956560)));
    // 0x1f26ec: 0x24a58930  addiu       $a1, $a1, -0x76D0
    ctx->pc = 0x1f26ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936880));
    // 0x1f26f0: 0xc052734  jal         func_149CD0
    ctx->pc = 0x1F26F0u;
    SET_GPR_U32(ctx, 31, 0x1F26F8u);
    ctx->pc = 0x1F26F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F26F0u;
            // 0x1f26f4: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F26F8u; }
        if (ctx->pc != 0x1F26F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F26F8u; }
        if (ctx->pc != 0x1F26F8u) { return; }
    }
    ctx->pc = 0x1F26F8u;
label_1f26f8:
    // 0x1f26f8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1f26f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1f26fc: 0x3c0601ed  lui         $a2, 0x1ED
    ctx->pc = 0x1f26fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)493 << 16));
    // 0x1f2700: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f2700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2704: 0xc094f98  jal         func_253E60
    ctx->pc = 0x1F2704u;
    SET_GPR_U32(ctx, 31, 0x1F270Cu);
    ctx->pc = 0x1F2708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2704u;
            // 0x1f2708: 0x24c692e0  addiu       $a2, $a2, -0x6D20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x253E60u;
    if (runtime->hasFunction(0x253E60u)) {
        auto targetFn = runtime->lookupFunction(0x253E60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F270Cu; }
        if (ctx->pc != 0x1F270Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuDataAnalyze__FPciP9mgCMemory_0x253e60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F270Cu; }
        if (ctx->pc != 0x1F270Cu) { return; }
    }
    ctx->pc = 0x1F270Cu;
label_1f270c:
    // 0x1f270c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x1f270cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x1f2710: 0xc07d518  jal         func_1F5460
    ctx->pc = 0x1F2710u;
    SET_GPR_U32(ctx, 31, 0x1F2718u);
    ctx->pc = 0x1F2714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2710u;
            // 0x1f2714: 0x248492e0  addiu       $a0, $a0, -0x6D20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F5460u;
    if (runtime->hasFunction(0x1F5460u)) {
        auto targetFn = runtime->lookupFunction(0x1F5460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2718u; }
        if (ctx->pc != 0x1F2718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitDownLoadAnaunce__FP9mgCMemory_0x1f5460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2718u; }
        if (ctx->pc != 0x1F2718u) { return; }
    }
    ctx->pc = 0x1F2718u;
label_1f2718:
    // 0x1f2718: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x1f2718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x1f271c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f271cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2720: 0xa3828f74  sb          $v0, -0x708C($gp)
    ctx->pc = 0x1f2720u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938484), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f2724: 0xaf808fe8  sw          $zero, -0x7018($gp)
    ctx->pc = 0x1f2724u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938600), GPR_U32(ctx, 0));
    // 0x1f2728: 0xaf808fec  sw          $zero, -0x7014($gp)
    ctx->pc = 0x1f2728u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938604), GPR_U32(ctx, 0));
    // 0x1f272c: 0xaf808fcc  sw          $zero, -0x7034($gp)
    ctx->pc = 0x1f272cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938572), GPR_U32(ctx, 0));
    // 0x1f2730: 0xaf809020  sw          $zero, -0x6FE0($gp)
    ctx->pc = 0x1f2730u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938656), GPR_U32(ctx, 0));
    // 0x1f2734: 0xaf808f64  sw          $zero, -0x709C($gp)
    ctx->pc = 0x1f2734u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938468), GPR_U32(ctx, 0));
    // 0x1f2738: 0xaf808f7c  sw          $zero, -0x7084($gp)
    ctx->pc = 0x1f2738u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938492), GPR_U32(ctx, 0));
    // 0x1f273c: 0xaf808f80  sw          $zero, -0x7080($gp)
    ctx->pc = 0x1f273cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938496), GPR_U32(ctx, 0));
    // 0x1f2740: 0xa7808f6c  sh          $zero, -0x7094($gp)
    ctx->pc = 0x1f2740u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938476), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f2744: 0xa7808f70  sh          $zero, -0x7090($gp)
    ctx->pc = 0x1f2744u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938480), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f2748: 0xc08aa80  jal         func_22AA00
    ctx->pc = 0x1F2748u;
    SET_GPR_U32(ctx, 31, 0x1F2750u);
    ctx->pc = 0x1F274Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2748u;
            // 0x1f274c: 0xaf808f84  sw          $zero, -0x707C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938500), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AA00u;
    if (runtime->hasFunction(0x22AA00u)) {
        auto targetFn = runtime->lookupFunction(0x22AA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2750u; }
        if (ctx->pc != 0x1F2750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetTextureInfoAll__14CPosDataManageFv_0x22aa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2750u; }
        if (ctx->pc != 0x1F2750u) { return; }
    }
    ctx->pc = 0x1F2750u;
label_1f2750:
    // 0x1f2750: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x1f2750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x1f2754: 0x24051b92  addiu       $a1, $zero, 0x1B92
    ctx->pc = 0x1f2754u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7058));
    // 0x1f2758: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1F2758u;
    SET_GPR_U32(ctx, 31, 0x1F2760u);
    ctx->pc = 0x1F275Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2758u;
            // 0x1f275c: 0x248492e0  addiu       $a0, $a0, -0x6D20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2760u; }
        if (ctx->pc != 0x1F2760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2760u; }
        if (ctx->pc != 0x1F2760u) { return; }
    }
    ctx->pc = 0x1F2760u;
label_1f2760:
    // 0x1f2760: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1f2760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x1f2764: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f2764u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2768: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x1F2768u;
    SET_GPR_U32(ctx, 31, 0x1F2770u);
    ctx->pc = 0x1F276Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2768u;
            // 0x1f276c: 0x3464b900  ori         $a0, $v1, 0xB900 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)47360);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2770u; }
        if (ctx->pc != 0x1F2770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2770u; }
        if (ctx->pc != 0x1F2770u) { return; }
    }
    ctx->pc = 0x1F2770u;
label_1f2770:
    // 0x1f2770: 0x104000ce  beqz        $v0, . + 4 + (0xCE << 2)
    ctx->pc = 0x1F2770u;
    {
        const bool branch_taken_0x1f2770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2770u;
            // 0x1f2774: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2770) {
            ctx->pc = 0x1F2AACu;
            goto label_1f2aac;
        }
    }
    ctx->pc = 0x1F2778u;
    // 0x1f2778: 0xc08dc2c  jal         func_2370B0
    ctx->pc = 0x1F2778u;
    SET_GPR_U32(ctx, 31, 0x1F2780u);
    ctx->pc = 0x1F277Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2778u;
            // 0x1f277c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2370B0u;
    if (runtime->hasFunction(0x2370B0u)) {
        auto targetFn = runtime->lookupFunction(0x2370B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2780u; }
        if (ctx->pc != 0x1F2780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__14CBaseMenuClassFv_0x2370b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2780u; }
        if (ctx->pc != 0x1F2780u) { return; }
    }
    ctx->pc = 0x1F2780u;
label_1f2780:
    // 0x1f2780: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1f2780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
    // 0x1f2784: 0x26040170  addiu       $a0, $s0, 0x170
    ctx->pc = 0x1f2784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
    // 0x1f2788: 0x24425d40  addiu       $v0, $v0, 0x5D40
    ctx->pc = 0x1f2788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23872));
    // 0x1f278c: 0xc04e640  jal         func_139900
    ctx->pc = 0x1F278Cu;
    SET_GPR_U32(ctx, 31, 0x1F2794u);
    ctx->pc = 0x1F2790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F278Cu;
            // 0x1f2790: 0xae02010c  sw          $v0, 0x10C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 268), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2794u; }
        if (ctx->pc != 0x1F2794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2794u; }
        if (ctx->pc != 0x1F2794u) { return; }
    }
    ctx->pc = 0x1F2794u;
label_1f2794:
    // 0x1f2794: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f2794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f2798: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f2798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f279c: 0x3421b7f4  ori         $at, $at, 0xB7F4
    ctx->pc = 0x1f279cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47092);
    // 0x1f27a0: 0xae030148  sw          $v1, 0x148($s0)
    ctx->pc = 0x1f27a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 328), GPR_U32(ctx, 3));
    // 0x1f27a4: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x1f27a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f27a8: 0xae000150  sw          $zero, 0x150($s0)
    ctx->pc = 0x1f27a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 336), GPR_U32(ctx, 0));
    // 0x1f27ac: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f27acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f27b0: 0xae000154  sw          $zero, 0x154($s0)
    ctx->pc = 0x1f27b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 340), GPR_U32(ctx, 0));
    // 0x1f27b4: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f27b4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f27b8: 0x3c024310  lui         $v0, 0x4310
    ctx->pc = 0x1f27b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17168 << 16));
    // 0x1f27bc: 0xac20b7f0  sw          $zero, -0x4810($at)
    ctx->pc = 0x1f27bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948848), GPR_U32(ctx, 0));
    // 0x1f27c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f27c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f27c4: 0xae000144  sw          $zero, 0x144($s0)
    ctx->pc = 0x1f27c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 324), GPR_U32(ctx, 0));
    // 0x1f27c8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f27c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f27cc: 0xae00015c  sw          $zero, 0x15C($s0)
    ctx->pc = 0x1f27ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 348), GPR_U32(ctx, 0));
    // 0x1f27d0: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f27d0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f27d4: 0xae000160  sw          $zero, 0x160($s0)
    ctx->pc = 0x1f27d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 352), GPR_U32(ctx, 0));
    // 0x1f27d8: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x1f27d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x1f27dc: 0xa200014c  sb          $zero, 0x14C($s0)
    ctx->pc = 0x1f27dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 332), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f27e0: 0xae000110  sw          $zero, 0x110($s0)
    ctx->pc = 0x1f27e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 272), GPR_U32(ctx, 0));
    // 0x1f27e4: 0xae000114  sw          $zero, 0x114($s0)
    ctx->pc = 0x1f27e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 276), GPR_U32(ctx, 0));
    // 0x1f27e8: 0xae000118  sw          $zero, 0x118($s0)
    ctx->pc = 0x1f27e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 280), GPR_U32(ctx, 0));
    // 0x1f27ec: 0xac20b834  sw          $zero, -0x47CC($at)
    ctx->pc = 0x1f27ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948916), GPR_U32(ctx, 0));
    // 0x1f27f0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f27f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f27f4: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f27f4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f27f8: 0xac20b838  sw          $zero, -0x47C8($at)
    ctx->pc = 0x1f27f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948920), GPR_U32(ctx, 0));
    // 0x1f27fc: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f27fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f2800: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f2800u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f2804: 0xac20b830  sw          $zero, -0x47D0($at)
    ctx->pc = 0x1f2804u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948912), GPR_U32(ctx, 0));
    // 0x1f2808: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f2808u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f280c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f280cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f2810: 0xac20b82c  sw          $zero, -0x47D4($at)
    ctx->pc = 0x1f2810u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948908), GPR_U32(ctx, 0));
    // 0x1f2814: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f2814u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f2818: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f2818u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f281c: 0xac20b8f0  sw          $zero, -0x4710($at)
    ctx->pc = 0x1f281cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949104), GPR_U32(ctx, 0));
    // 0x1f2820: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f2820u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f2824: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f2824u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f2828: 0xac20b83c  sw          $zero, -0x47C4($at)
    ctx->pc = 0x1f2828u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948924), GPR_U32(ctx, 0));
    // 0x1f282c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f282cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f2830: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f2830u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f2834: 0xac20b8f4  sw          $zero, -0x470C($at)
    ctx->pc = 0x1f2834u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949108), GPR_U32(ctx, 0));
    // 0x1f2838: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f2838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f283c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f283cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f2840: 0xac20b8cc  sw          $zero, -0x4734($at)
    ctx->pc = 0x1f2840u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949068), GPR_U32(ctx, 0));
    // 0x1f2844: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f2844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f2848: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f2848u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f284c: 0xac20b840  sw          $zero, -0x47C0($at)
    ctx->pc = 0x1f284cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948928), GPR_U32(ctx, 0));
    // 0x1f2850: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f2850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f2854: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f2854u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f2858: 0xac20b85c  sw          $zero, -0x47A4($at)
    ctx->pc = 0x1f2858u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948956), GPR_U32(ctx, 0));
    // 0x1f285c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f285cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f2860: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f2860u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f2864: 0xac20b898  sw          $zero, -0x4768($at)
    ctx->pc = 0x1f2864u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949016), GPR_U32(ctx, 0));
    // 0x1f2868: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f2868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f286c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f286cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f2870: 0xac20b894  sw          $zero, -0x476C($at)
    ctx->pc = 0x1f2870u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949012), GPR_U32(ctx, 0));
    // 0x1f2874: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f2874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f2878: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f2878u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f287c: 0xac20b8d0  sw          $zero, -0x4730($at)
    ctx->pc = 0x1f287cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949072), GPR_U32(ctx, 0));
    // 0x1f2880: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f2880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f2884: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f2884u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f2888: 0xac20b844  sw          $zero, -0x47BC($at)
    ctx->pc = 0x1f2888u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948932), GPR_U32(ctx, 0));
    // 0x1f288c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f288cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f2890: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f2890u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f2894: 0xac20b860  sw          $zero, -0x47A0($at)
    ctx->pc = 0x1f2894u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948960), GPR_U32(ctx, 0));
    // 0x1f2898: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f2898u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f289c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f289cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f28a0: 0xac20b8a0  sw          $zero, -0x4760($at)
    ctx->pc = 0x1f28a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949024), GPR_U32(ctx, 0));
    // 0x1f28a4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f28a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f28a8: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f28a8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f28ac: 0xac20b89c  sw          $zero, -0x4764($at)
    ctx->pc = 0x1f28acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949020), GPR_U32(ctx, 0));
    // 0x1f28b0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f28b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f28b4: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f28b4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f28b8: 0xac20b8d4  sw          $zero, -0x472C($at)
    ctx->pc = 0x1f28b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949076), GPR_U32(ctx, 0));
    // 0x1f28bc: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f28bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f28c0: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f28c0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f28c4: 0xac20b848  sw          $zero, -0x47B8($at)
    ctx->pc = 0x1f28c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948936), GPR_U32(ctx, 0));
    // 0x1f28c8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f28c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f28cc: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f28ccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f28d0: 0xac20b864  sw          $zero, -0x479C($at)
    ctx->pc = 0x1f28d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948964), GPR_U32(ctx, 0));
    // 0x1f28d4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f28d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f28d8: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f28d8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f28dc: 0xac20b8a8  sw          $zero, -0x4758($at)
    ctx->pc = 0x1f28dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949032), GPR_U32(ctx, 0));
    // 0x1f28e0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f28e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f28e4: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f28e4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f28e8: 0xac20b8a4  sw          $zero, -0x475C($at)
    ctx->pc = 0x1f28e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949028), GPR_U32(ctx, 0));
    // 0x1f28ec: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f28ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f28f0: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f28f0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f28f4: 0xac20b8d8  sw          $zero, -0x4728($at)
    ctx->pc = 0x1f28f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949080), GPR_U32(ctx, 0));
    // 0x1f28f8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f28f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f28fc: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f28fcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f2900: 0xac20b84c  sw          $zero, -0x47B4($at)
    ctx->pc = 0x1f2900u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948940), GPR_U32(ctx, 0));
    // 0x1f2904: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f2904u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f2908: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f2908u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f290c: 0xac20b868  sw          $zero, -0x4798($at)
    ctx->pc = 0x1f290cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948968), GPR_U32(ctx, 0));
    // 0x1f2910: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f2910u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f2914: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f2914u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f2918: 0xac20b8b0  sw          $zero, -0x4750($at)
    ctx->pc = 0x1f2918u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949040), GPR_U32(ctx, 0));
    // 0x1f291c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f291cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f2920: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f2920u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f2924: 0xac20b8ac  sw          $zero, -0x4754($at)
    ctx->pc = 0x1f2924u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949036), GPR_U32(ctx, 0));
    // 0x1f2928: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f2928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f292c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f292cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f2930: 0xac20b8dc  sw          $zero, -0x4724($at)
    ctx->pc = 0x1f2930u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949084), GPR_U32(ctx, 0));
    // 0x1f2934: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f2934u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f2938: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f2938u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f293c: 0xac20b850  sw          $zero, -0x47B0($at)
    ctx->pc = 0x1f293cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948944), GPR_U32(ctx, 0));
    // 0x1f2940: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f2940u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f2944: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f2944u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f2948: 0xac20b86c  sw          $zero, -0x4794($at)
    ctx->pc = 0x1f2948u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948972), GPR_U32(ctx, 0));
    // 0x1f294c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f294cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f2950: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f2950u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f2954: 0xac20b8b8  sw          $zero, -0x4748($at)
    ctx->pc = 0x1f2954u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949048), GPR_U32(ctx, 0));
    // 0x1f2958: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f2958u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f295c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f295cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f2960: 0xac20b8b4  sw          $zero, -0x474C($at)
    ctx->pc = 0x1f2960u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949044), GPR_U32(ctx, 0));
    // 0x1f2964: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f2964u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f2968: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f2968u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f296c: 0xac20b8e0  sw          $zero, -0x4720($at)
    ctx->pc = 0x1f296cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949088), GPR_U32(ctx, 0));
    // 0x1f2970: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f2970u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f2974: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f2974u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f2978: 0xac20b854  sw          $zero, -0x47AC($at)
    ctx->pc = 0x1f2978u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948948), GPR_U32(ctx, 0));
    // 0x1f297c: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f297cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f2980: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f2980u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f2984: 0xac20b870  sw          $zero, -0x4790($at)
    ctx->pc = 0x1f2984u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948976), GPR_U32(ctx, 0));
    // 0x1f2988: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f2988u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f298c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f298cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f2990: 0xac20b8c0  sw          $zero, -0x4740($at)
    ctx->pc = 0x1f2990u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949056), GPR_U32(ctx, 0));
    // 0x1f2994: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f2994u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f2998: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f2998u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f299c: 0xac20b8bc  sw          $zero, -0x4744($at)
    ctx->pc = 0x1f299cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949052), GPR_U32(ctx, 0));
    // 0x1f29a0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f29a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f29a4: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f29a4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f29a8: 0xac20b8e4  sw          $zero, -0x471C($at)
    ctx->pc = 0x1f29a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949092), GPR_U32(ctx, 0));
    // 0x1f29ac: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f29acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f29b0: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f29b0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f29b4: 0xac20b858  sw          $zero, -0x47A8($at)
    ctx->pc = 0x1f29b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948952), GPR_U32(ctx, 0));
    // 0x1f29b8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f29b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f29bc: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f29bcu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f29c0: 0xac20b874  sw          $zero, -0x478C($at)
    ctx->pc = 0x1f29c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294948980), GPR_U32(ctx, 0));
    // 0x1f29c4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f29c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f29c8: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f29c8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f29cc: 0xac20b8c8  sw          $zero, -0x4738($at)
    ctx->pc = 0x1f29ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949064), GPR_U32(ctx, 0));
    // 0x1f29d0: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f29d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f29d4: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f29d4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f29d8: 0xac20b8c4  sw          $zero, -0x473C($at)
    ctx->pc = 0x1f29d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949060), GPR_U32(ctx, 0));
    // 0x1f29dc: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f29dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f29e0: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f29e0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f29e4: 0xac20b8e8  sw          $zero, -0x4718($at)
    ctx->pc = 0x1f29e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949096), GPR_U32(ctx, 0));
    // 0x1f29e8: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f29e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f29ec: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f29ecu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f29f0: 0xac20b8ec  sw          $zero, -0x4714($at)
    ctx->pc = 0x1f29f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949100), GPR_U32(ctx, 0));
    // 0x1f29f4: 0x3c010002  lui         $at, 0x2
    ctx->pc = 0x1f29f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)2 << 16));
    // 0x1f29f8: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f29f8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f29fc: 0xc049c86  jal         func_127218
    ctx->pc = 0x1F29FCu;
    SET_GPR_U32(ctx, 31, 0x1F2A04u);
    ctx->pc = 0x1F2A00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F29FCu;
            // 0x1f2a00: 0xac22b8c0  sw          $v0, -0x4740($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294949056), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2A04u; }
        if (ctx->pc != 0x1F2A04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2A04u; }
        if (ctx->pc != 0x1F2A04u) { return; }
    }
    ctx->pc = 0x1F2A04u;
label_1f2a04:
    // 0x1f2a04: 0x260401b4  addiu       $a0, $s0, 0x1B4
    ctx->pc = 0x1f2a04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 436));
    // 0x1f2a08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f2a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a0c: 0xc049c86  jal         func_127218
    ctx->pc = 0x1F2A0Cu;
    SET_GPR_U32(ctx, 31, 0x1F2A14u);
    ctx->pc = 0x1F2A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2A0Cu;
            // 0x1f2a10: 0x24060600  addiu       $a2, $zero, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2A14u; }
        if (ctx->pc != 0x1F2A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2A14u; }
        if (ctx->pc != 0x1F2A14u) { return; }
    }
    ctx->pc = 0x1F2A14u;
label_1f2a14:
    // 0x1f2a14: 0x260407b4  addiu       $a0, $s0, 0x7B4
    ctx->pc = 0x1f2a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1972));
    // 0x1f2a18: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f2a18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a1c: 0xc049c86  jal         func_127218
    ctx->pc = 0x1F2A1Cu;
    SET_GPR_U32(ctx, 31, 0x1F2A24u);
    ctx->pc = 0x1F2A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2A1Cu;
            // 0x1f2a20: 0x24066000  addiu       $a2, $zero, 0x6000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2A24u; }
        if (ctx->pc != 0x1F2A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2A24u; }
        if (ctx->pc != 0x1F2A24u) { return; }
    }
    ctx->pc = 0x1F2A24u;
label_1f2a24:
    // 0x1f2a24: 0x260467b8  addiu       $a0, $s0, 0x67B8
    ctx->pc = 0x1f2a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 26552));
    // 0x1f2a28: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f2a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a2c: 0xc049c86  jal         func_127218
    ctx->pc = 0x1F2A2Cu;
    SET_GPR_U32(ctx, 31, 0x1F2A34u);
    ctx->pc = 0x1F2A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2A2Cu;
            // 0x1f2a30: 0x24065400  addiu       $a2, $zero, 0x5400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2A34u; }
        if (ctx->pc != 0x1F2A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2A34u; }
        if (ctx->pc != 0x1F2A34u) { return; }
    }
    ctx->pc = 0x1F2A34u;
label_1f2a34:
    // 0x1f2a34: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f2a34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f2a38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f2a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a3c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f2a3cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f2a40: 0x24065400  addiu       $a2, $zero, 0x5400
    ctx->pc = 0x1f2a40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21504));
    // 0x1f2a44: 0xac20bbb8  sw          $zero, -0x4448($at)
    ctx->pc = 0x1f2a44u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294949816), GPR_U32(ctx, 0));
    // 0x1f2a48: 0x3401bbbc  ori         $at, $zero, 0xBBBC
    ctx->pc = 0x1f2a48u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48060);
    // 0x1f2a4c: 0xc049c86  jal         func_127218
    ctx->pc = 0x1F2A4Cu;
    SET_GPR_U32(ctx, 31, 0x1F2A54u);
    ctx->pc = 0x1F2A50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2A4Cu;
            // 0x1f2a50: 0x2012021  addu        $a0, $s0, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2A54u; }
        if (ctx->pc != 0x1F2A54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2A54u; }
        if (ctx->pc != 0x1F2A54u) { return; }
    }
    ctx->pc = 0x1F2A54u;
label_1f2a54:
    // 0x1f2a54: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f2a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f2a58: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f2a58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a5c: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f2a5cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f2a60: 0x24065400  addiu       $a2, $zero, 0x5400
    ctx->pc = 0x1f2a60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21504));
    // 0x1f2a64: 0xac200fbc  sw          $zero, 0xFBC($at)
    ctx->pc = 0x1f2a64u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4028), GPR_U32(ctx, 0));
    // 0x1f2a68: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f2a68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f2a6c: 0x34210fc0  ori         $at, $at, 0xFC0
    ctx->pc = 0x1f2a6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4032);
    // 0x1f2a70: 0xc049c86  jal         func_127218
    ctx->pc = 0x1F2A70u;
    SET_GPR_U32(ctx, 31, 0x1F2A78u);
    ctx->pc = 0x1F2A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2A70u;
            // 0x1f2a74: 0x2012021  addu        $a0, $s0, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2A78u; }
        if (ctx->pc != 0x1F2A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2A78u; }
        if (ctx->pc != 0x1F2A78u) { return; }
    }
    ctx->pc = 0x1F2A78u;
label_1f2a78:
    // 0x1f2a78: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f2a78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f2a7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f2a7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2a80: 0x2010821  addu        $at, $s0, $at
    ctx->pc = 0x1f2a80u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f2a84: 0x24065400  addiu       $a2, $zero, 0x5400
    ctx->pc = 0x1f2a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21504));
    // 0x1f2a88: 0xac2063c0  sw          $zero, 0x63C0($at)
    ctx->pc = 0x1f2a88u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 25536), GPR_U32(ctx, 0));
    // 0x1f2a8c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f2a8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f2a90: 0x342163c4  ori         $at, $at, 0x63C4
    ctx->pc = 0x1f2a90u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25540);
    // 0x1f2a94: 0xc049c86  jal         func_127218
    ctx->pc = 0x1F2A94u;
    SET_GPR_U32(ctx, 31, 0x1F2A9Cu);
    ctx->pc = 0x1F2A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2A94u;
            // 0x1f2a98: 0x2012021  addu        $a0, $s0, $at (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2A9Cu; }
        if (ctx->pc != 0x1F2A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2A9Cu; }
        if (ctx->pc != 0x1F2A9Cu) { return; }
    }
    ctx->pc = 0x1F2A9Cu;
label_1f2a9c:
    // 0x1f2a9c: 0xae0001a0  sw          $zero, 0x1A0($s0)
    ctx->pc = 0x1f2a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 416), GPR_U32(ctx, 0));
    // 0x1f2aa0: 0xae0001a4  sw          $zero, 0x1A4($s0)
    ctx->pc = 0x1f2aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 420), GPR_U32(ctx, 0));
    // 0x1f2aa4: 0xae0001a8  sw          $zero, 0x1A8($s0)
    ctx->pc = 0x1f2aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 424), GPR_U32(ctx, 0));
    // 0x1f2aa8: 0xae0001ac  sw          $zero, 0x1AC($s0)
    ctx->pc = 0x1f2aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 428), GPR_U32(ctx, 0));
label_1f2aac:
    // 0x1f2aac: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f2aacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f2ab0: 0x26040170  addiu       $a0, $s0, 0x170
    ctx->pc = 0x1f2ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
    // 0x1f2ab4: 0x8c239304  lw          $v1, -0x6CFC($at)
    ctx->pc = 0x1f2ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939396)));
    // 0x1f2ab8: 0x24062580  addiu       $a2, $zero, 0x2580
    ctx->pc = 0x1f2ab8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9600));
    // 0x1f2abc: 0xaf908ffc  sw          $s0, -0x7004($gp)
    ctx->pc = 0x1f2abcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938620), GPR_U32(ctx, 16));
    // 0x1f2ac0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f2ac0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f2ac4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1f2ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x1f2ac8: 0x8c229300  lw          $v0, -0x6D00($at)
    ctx->pc = 0x1f2ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294939392)));
    // 0x1f2acc: 0xc04e79c  jal         func_139E70
    ctx->pc = 0x1F2ACCu;
    SET_GPR_U32(ctx, 31, 0x1F2AD4u);
    ctx->pc = 0x1F2AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2ACCu;
            // 0x1f2ad0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2AD4u; }
        if (ctx->pc != 0x1F2AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2AD4u; }
        if (ctx->pc != 0x1F2AD4u) { return; }
    }
    ctx->pc = 0x1F2AD4u;
label_1f2ad4:
    // 0x1f2ad4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x1f2ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x1f2ad8: 0x24052580  addiu       $a1, $zero, 0x2580
    ctx->pc = 0x1f2ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9600));
    // 0x1f2adc: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1F2ADCu;
    SET_GPR_U32(ctx, 31, 0x1F2AE4u);
    ctx->pc = 0x1F2AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2ADCu;
            // 0x1f2ae0: 0x248492e0  addiu       $a0, $a0, -0x6D20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2AE4u; }
        if (ctx->pc != 0x1F2AE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2AE4u; }
        if (ctx->pc != 0x1F2AE4u) { return; }
    }
    ctx->pc = 0x1F2AE4u;
label_1f2ae4:
    // 0x1f2ae4: 0x8f848ffc  lw          $a0, -0x7004($gp)
    ctx->pc = 0x1f2ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938620)));
    // 0x1f2ae8: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x1f2ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x1f2aec: 0x24830170  addiu       $v1, $a0, 0x170
    ctx->pc = 0x1f2aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 368));
    // 0x1f2af0: 0xaf838ff4  sw          $v1, -0x700C($gp)
    ctx->pc = 0x1f2af0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938612), GPR_U32(ctx, 3));
    // 0x1f2af4: 0x8c422e60  lw          $v0, 0x2E60($v0)
    ctx->pc = 0x1f2af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11872)));
    // 0x1f2af8: 0xac820140  sw          $v0, 0x140($a0)
    ctx->pc = 0x1f2af8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 320), GPR_U32(ctx, 2));
    // 0x1f2afc: 0x8f828ffc  lw          $v0, -0x7004($gp)
    ctx->pc = 0x1f2afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938620)));
    // 0x1f2b00: 0x8c420140  lw          $v0, 0x140($v0)
    ctx->pc = 0x1f2b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
    // 0x1f2b04: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2B04u;
    {
        const bool branch_taken_0x1f2b04 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1f2b04) {
            ctx->pc = 0x1F2B18u;
            goto label_1f2b18;
        }
    }
    ctx->pc = 0x1F2B0Cu;
    // 0x1f2b0c: 0x2842000a  slti        $v0, $v0, 0xA
    ctx->pc = 0x1f2b0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
    // 0x1f2b10: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F2B10u;
    {
        const bool branch_taken_0x1f2b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2b10) {
            ctx->pc = 0x1F2B24u;
            goto label_1f2b24;
        }
    }
    ctx->pc = 0x1F2B18u;
label_1f2b18:
    // 0x1f2b18: 0xaf808ffc  sw          $zero, -0x7004($gp)
    ctx->pc = 0x1f2b18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938620), GPR_U32(ctx, 0));
    // 0x1f2b1c: 0x100001a5  b           . + 4 + (0x1A5 << 2)
    ctx->pc = 0x1F2B1Cu;
    {
        const bool branch_taken_0x1f2b1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2B20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2B1Cu;
            // 0x1f2b20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2b1c) {
            ctx->pc = 0x1F31B4u;
            goto label_1f31b4;
        }
    }
    ctx->pc = 0x1F2B24u;
label_1f2b24:
    // 0x1f2b24: 0x8f8494f4  lw          $a0, -0x6B0C($gp)
    ctx->pc = 0x1f2b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
    // 0x1f2b28: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1f2b28u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f2b2c: 0xa3808fc8  sb          $zero, -0x7038($gp)
    ctx->pc = 0x1f2b2cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938568), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f2b30: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1f2b30u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x1f2b34: 0xaf809004  sw          $zero, -0x6FFC($gp)
    ctx->pc = 0x1f2b34u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938628), GPR_U32(ctx, 0));
    // 0x1f2b38: 0xc04c510  jal         func_131440
    ctx->pc = 0x1F2B38u;
    SET_GPR_U32(ctx, 31, 0x1F2B40u);
    ctx->pc = 0x1F2B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2B38u;
            // 0x1f2b3c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131440u;
    if (runtime->hasFunction(0x131440u)) {
        auto targetFn = runtime->lookupFunction(0x131440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2B40u; }
        if (ctx->pc != 0x1F2B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__9mgCCameraFfff_0x131440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2B40u; }
        if (ctx->pc != 0x1F2B40u) { return; }
    }
    ctx->pc = 0x1F2B40u;
label_1f2b40:
    // 0x1f2b40: 0x8f8494f4  lw          $a0, -0x6B0C($gp)
    ctx->pc = 0x1f2b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
    // 0x1f2b44: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x1f2b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
    // 0x1f2b48: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1f2b48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1f2b4c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1f2b4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x1f2b50: 0xc04c4f8  jal         func_1313E0
    ctx->pc = 0x1F2B50u;
    SET_GPR_U32(ctx, 31, 0x1F2B58u);
    ctx->pc = 0x1F2B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2B50u;
            // 0x1f2b54: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1313E0u;
    if (runtime->hasFunction(0x1313E0u)) {
        auto targetFn = runtime->lookupFunction(0x1313E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2B58u; }
        if (ctx->pc != 0x1F2B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__9mgCCameraFfff_0x1313e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2B58u; }
        if (ctx->pc != 0x1F2B58u) { return; }
    }
    ctx->pc = 0x1F2B58u;
label_1f2b58:
    // 0x1f2b58: 0x8f8294f4  lw          $v0, -0x6B0C($gp)
    ctx->pc = 0x1f2b58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
    // 0x1f2b5c: 0x3c06c270  lui         $a2, 0xC270
    ctx->pc = 0x1f2b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)49776 << 16));
    // 0x1f2b60: 0x3c054320  lui         $a1, 0x4320
    ctx->pc = 0x1f2b60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17184 << 16));
    // 0x1f2b64: 0x3c0443aa  lui         $a0, 0x43AA
    ctx->pc = 0x1f2b64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17322 << 16));
    // 0x1f2b68: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x1f2b68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x1f2b6c: 0xac460080  sw          $a2, 0x80($v0)
    ctx->pc = 0x1f2b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 6));
    // 0x1f2b70: 0x8f8294f4  lw          $v0, -0x6B0C($gp)
    ctx->pc = 0x1f2b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
    // 0x1f2b74: 0xac400084  sw          $zero, 0x84($v0)
    ctx->pc = 0x1f2b74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 132), GPR_U32(ctx, 0));
    // 0x1f2b78: 0x8f8294f4  lw          $v0, -0x6B0C($gp)
    ctx->pc = 0x1f2b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
    // 0x1f2b7c: 0xac400088  sw          $zero, 0x88($v0)
    ctx->pc = 0x1f2b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 136), GPR_U32(ctx, 0));
    // 0x1f2b80: 0x8f8294f4  lw          $v0, -0x6B0C($gp)
    ctx->pc = 0x1f2b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
    // 0x1f2b84: 0xac400090  sw          $zero, 0x90($v0)
    ctx->pc = 0x1f2b84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 144), GPR_U32(ctx, 0));
    // 0x1f2b88: 0x8f8294f4  lw          $v0, -0x6B0C($gp)
    ctx->pc = 0x1f2b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
    // 0x1f2b8c: 0xac450094  sw          $a1, 0x94($v0)
    ctx->pc = 0x1f2b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 148), GPR_U32(ctx, 5));
    // 0x1f2b90: 0x8f8294f4  lw          $v0, -0x6B0C($gp)
    ctx->pc = 0x1f2b90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
    // 0x1f2b94: 0xac440098  sw          $a0, 0x98($v0)
    ctx->pc = 0x1f2b94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 152), GPR_U32(ctx, 4));
    // 0x1f2b98: 0x8f8294f4  lw          $v0, -0x6B0C($gp)
    ctx->pc = 0x1f2b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
    // 0x1f2b9c: 0xac4300a0  sw          $v1, 0xA0($v0)
    ctx->pc = 0x1f2b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 3));
    // 0x1f2ba0: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x1f2ba0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
    // 0x1f2ba4: 0xc0a0f58  jal         func_283D60
    ctx->pc = 0x1F2BA4u;
    SET_GPR_U32(ctx, 31, 0x1F2BACu);
    ctx->pc = 0x1F2BA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2BA4u;
            // 0x1f2ba8: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2BACu; }
        if (ctx->pc != 0x1F2BACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2BACu; }
        if (ctx->pc != 0x1F2BACu) { return; }
    }
    ctx->pc = 0x1F2BACu;
label_1f2bac:
    // 0x1f2bac: 0x8f848ffc  lw          $a0, -0x7004($gp)
    ctx->pc = 0x1f2bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938620)));
    // 0x1f2bb0: 0xc07e6bc  jal         func_1F9AF0
    ctx->pc = 0x1F2BB0u;
    SET_GPR_U32(ctx, 31, 0x1F2BB8u);
    ctx->pc = 0x1F2BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2BB0u;
            // 0x1f2bb4: 0xaf828ff8  sw          $v0, -0x7008($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938616), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9AF0u;
    if (runtime->hasFunction(0x1F9AF0u)) {
        auto targetFn = runtime->lookupFunction(0x1F9AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2BB8u; }
        if (ctx->pc != 0x1F2BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachFormInfo__12CMenuGeoramaFv_0x1f9af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2BB8u; }
        if (ctx->pc != 0x1F2BB8u) { return; }
    }
    ctx->pc = 0x1F2BB8u;
label_1f2bb8:
    // 0x1f2bb8: 0xc08ef58  jal         func_23BD60
    ctx->pc = 0x1F2BB8u;
    SET_GPR_U32(ctx, 31, 0x1F2BC0u);
    ctx->pc = 0x1F2BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2BB8u;
            // 0x1f2bbc: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23BD60u;
    if (runtime->hasFunction(0x23BD60u)) {
        auto targetFn = runtime->lookupFunction(0x23BD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2BC0u; }
        if (ctx->pc != 0x1F2BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachFuncData__12CMenuKeyFuncFv_0x23bd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2BC0u; }
        if (ctx->pc != 0x1F2BC0u) { return; }
    }
    ctx->pc = 0x1F2BC0u;
label_1f2bc0:
    // 0x1f2bc0: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x1f2bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x1f2bc4: 0x8c420138  lw          $v0, 0x138($v0)
    ctx->pc = 0x1f2bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
    // 0x1f2bc8: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F2BC8u;
    {
        const bool branch_taken_0x1f2bc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2bc8) {
            ctx->pc = 0x1F2BD4u;
            goto label_1f2bd4;
        }
    }
    ctx->pc = 0x1F2BD0u;
    // 0x1f2bd0: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x1f2bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_1f2bd4:
    // 0x1f2bd4: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x1f2bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x1f2bd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f2bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2bdc: 0xc08f078  jal         func_23C1E0
    ctx->pc = 0x1F2BDCu;
    SET_GPR_U32(ctx, 31, 0x1F2BE4u);
    ctx->pc = 0x1F2BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2BDCu;
            // 0x1f2be0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C1E0u;
    if (runtime->hasFunction(0x23C1E0u)) {
        auto targetFn = runtime->lookupFunction(0x23C1E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2BE4u; }
        if (ctx->pc != 0x1F2BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVibeCnt__12CMenuKeyFuncFii_0x23c1e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2BE4u; }
        if (ctx->pc != 0x1F2BE4u) { return; }
    }
    ctx->pc = 0x1F2BE4u;
label_1f2be4:
    // 0x1f2be4: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x1f2be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x1f2be8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f2be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2bec: 0xc08f08c  jal         func_23C230
    ctx->pc = 0x1F2BECu;
    SET_GPR_U32(ctx, 31, 0x1F2BF4u);
    ctx->pc = 0x1F2BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2BECu;
            // 0x1f2bf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C230u;
    if (runtime->hasFunction(0x23C230u)) {
        auto targetFn = runtime->lookupFunction(0x23C230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2BF4u; }
        if (ctx->pc != 0x1F2BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVibeR__12CMenuKeyFuncFii_0x23c230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2BF4u; }
        if (ctx->pc != 0x1F2BF4u) { return; }
    }
    ctx->pc = 0x1F2BF4u;
label_1f2bf4:
    // 0x1f2bf4: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x1f2bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x1f2bf8: 0xc08f020  jal         func_23C080
    ctx->pc = 0x1F2BF8u;
    SET_GPR_U32(ctx, 31, 0x1F2C00u);
    ctx->pc = 0x1F2BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2BF8u;
            // 0x1f2bfc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C080u;
    if (runtime->hasFunction(0x23C080u)) {
        auto targetFn = runtime->lookupFunction(0x23C080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2C00u; }
        if (ctx->pc != 0x1F2C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWakuMoveMethod__12CMenuKeyFuncFi_0x23c080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2C00u; }
        if (ctx->pc != 0x1F2C00u) { return; }
    }
    ctx->pc = 0x1F2C00u;
label_1f2c00:
    // 0x1f2c00: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x1f2c00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x1f2c04: 0xc08f02c  jal         func_23C0B0
    ctx->pc = 0x1F2C04u;
    SET_GPR_U32(ctx, 31, 0x1F2C0Cu);
    ctx->pc = 0x1F2C08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2C04u;
            // 0x1f2c08: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C0B0u;
    if (runtime->hasFunction(0x23C0B0u)) {
        auto targetFn = runtime->lookupFunction(0x23C0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2C0Cu; }
        if (ctx->pc != 0x1F2C0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWakuType__12CMenuKeyFuncFi_0x23c0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2C0Cu; }
        if (ctx->pc != 0x1F2C0Cu) { return; }
    }
    ctx->pc = 0x1F2C0Cu;
label_1f2c0c:
    // 0x1f2c0c: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x1f2c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
    // 0x1f2c10: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f2c10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f2c14: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f2c14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f2c18: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x1f2c18u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f2c1c: 0xac22d630  sw          $v0, -0x29D0($at)
    ctx->pc = 0x1f2c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956592), GPR_U32(ctx, 2));
    // 0x1f2c20: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f2c20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f2c24: 0xc08cab4  jal         func_232AD0
    ctx->pc = 0x1F2C24u;
    SET_GPR_U32(ctx, 31, 0x1F2C2Cu);
    ctx->pc = 0x1F2C28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2C24u;
            // 0x1f2c28: 0xac20d62c  sw          $zero, -0x29D4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956588), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232AD0u;
    if (runtime->hasFunction(0x232AD0u)) {
        auto targetFn = runtime->lookupFunction(0x232AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2C2Cu; }
        if (ctx->pc != 0x1F2C2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuSysData__Fv_0x232ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2C2Cu; }
        if (ctx->pc != 0x1F2C2Cu) { return; }
    }
    ctx->pc = 0x1F2C2Cu;
label_1f2c2c:
    // 0x1f2c2c: 0xc08d20c  jal         func_234830
    ctx->pc = 0x1F2C2Cu;
    SET_GPR_U32(ctx, 31, 0x1F2C34u);
    ctx->pc = 0x1F2C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2C2Cu;
            // 0x1f2c30: 0xaf828fd0  sw          $v0, -0x7030($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938576), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234830u;
    if (runtime->hasFunction(0x234830u)) {
        auto targetFn = runtime->lookupFunction(0x234830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2C34u; }
        if (ctx->pc != 0x1F2C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CursorSaveOptionState__Fv_0x234830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2C34u; }
        if (ctx->pc != 0x1F2C34u) { return; }
    }
    ctx->pc = 0x1F2C34u;
label_1f2c34:
    // 0x1f2c34: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F2C34u;
    {
        const bool branch_taken_0x1f2c34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f2c34) {
            ctx->pc = 0x1F2C84u;
            goto label_1f2c84;
        }
    }
    ctx->pc = 0x1F2C3Cu;
    // 0x1f2c3c: 0x8f828fd0  lw          $v0, -0x7030($gp)
    ctx->pc = 0x1f2c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938576)));
    // 0x1f2c40: 0x8f848ffc  lw          $a0, -0x7004($gp)
    ctx->pc = 0x1f2c40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938620)));
    // 0x1f2c44: 0x84460050  lh          $a2, 0x50($v0)
    ctx->pc = 0x1f2c44u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
    // 0x1f2c48: 0x84470052  lh          $a3, 0x52($v0)
    ctx->pc = 0x1f2c48u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 82)));
    // 0x1f2c4c: 0xc07e72c  jal         func_1F9CB0
    ctx->pc = 0x1F2C4Cu;
    SET_GPR_U32(ctx, 31, 0x1F2C54u);
    ctx->pc = 0x1F2C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2C4Cu;
            // 0x1f2c50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9CB0u;
    if (runtime->hasFunction(0x1F9CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1F9CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2C54u; }
        if (ctx->pc != 0x1F2C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetGeoListInfo__12CMenuGeoramaFiii_0x1f9cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2C54u; }
        if (ctx->pc != 0x1F2C54u) { return; }
    }
    ctx->pc = 0x1F2C54u;
label_1f2c54:
    // 0x1f2c54: 0x8f828fd0  lw          $v0, -0x7030($gp)
    ctx->pc = 0x1f2c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938576)));
    // 0x1f2c58: 0x8f848ffc  lw          $a0, -0x7004($gp)
    ctx->pc = 0x1f2c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938620)));
    // 0x1f2c5c: 0x84460054  lh          $a2, 0x54($v0)
    ctx->pc = 0x1f2c5cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1f2c60: 0x84470056  lh          $a3, 0x56($v0)
    ctx->pc = 0x1f2c60u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 86)));
    // 0x1f2c64: 0xc07e72c  jal         func_1F9CB0
    ctx->pc = 0x1F2C64u;
    SET_GPR_U32(ctx, 31, 0x1F2C6Cu);
    ctx->pc = 0x1F2C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2C64u;
            // 0x1f2c68: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9CB0u;
    if (runtime->hasFunction(0x1F9CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1F9CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2C6Cu; }
        if (ctx->pc != 0x1F2C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetGeoListInfo__12CMenuGeoramaFiii_0x1f9cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2C6Cu; }
        if (ctx->pc != 0x1F2C6Cu) { return; }
    }
    ctx->pc = 0x1F2C6Cu;
label_1f2c6c:
    // 0x1f2c6c: 0x8f828fd0  lw          $v0, -0x7030($gp)
    ctx->pc = 0x1f2c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938576)));
    // 0x1f2c70: 0x8f848ffc  lw          $a0, -0x7004($gp)
    ctx->pc = 0x1f2c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938620)));
    // 0x1f2c74: 0x84460058  lh          $a2, 0x58($v0)
    ctx->pc = 0x1f2c74u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x1f2c78: 0x8447005a  lh          $a3, 0x5A($v0)
    ctx->pc = 0x1f2c78u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 90)));
    // 0x1f2c7c: 0xc07e72c  jal         func_1F9CB0
    ctx->pc = 0x1F2C7Cu;
    SET_GPR_U32(ctx, 31, 0x1F2C84u);
    ctx->pc = 0x1F2C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2C7Cu;
            // 0x1f2c80: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9CB0u;
    if (runtime->hasFunction(0x1F9CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1F9CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2C84u; }
        if (ctx->pc != 0x1F2C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetGeoListInfo__12CMenuGeoramaFiii_0x1f9cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2C84u; }
        if (ctx->pc != 0x1F2C84u) { return; }
    }
    ctx->pc = 0x1F2C84u;
label_1f2c84:
    // 0x1f2c84: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x1f2c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x1f2c88: 0xc08abbc  jal         func_22AEF0
    ctx->pc = 0x1F2C88u;
    SET_GPR_U32(ctx, 31, 0x1F2C90u);
    ctx->pc = 0x1F2C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2C88u;
            // 0x1f2c8c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AEF0u;
    if (runtime->hasFunction(0x22AEF0u)) {
        auto targetFn = runtime->lookupFunction(0x22AEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2C90u; }
        if (ctx->pc != 0x1F2C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFi_0x22aef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2C90u; }
        if (ctx->pc != 0x1F2C90u) { return; }
    }
    ctx->pc = 0x1F2C90u;
label_1f2c90:
    // 0x1f2c90: 0x8f839450  lw          $v1, -0x6BB0($gp)
    ctx->pc = 0x1f2c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x1f2c94: 0x9463001c  lhu         $v1, 0x1C($v1)
    ctx->pc = 0x1f2c94u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 28)));
    // 0x1f2c98: 0x2464fff6  addiu       $a0, $v1, -0xA
    ctx->pc = 0x1f2c98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967286));
    // 0x1f2c9c: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x1f2c9cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1f2ca0: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F2CA0u;
    {
        const bool branch_taken_0x1f2ca0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2CA0u;
            // 0x1f2ca4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2ca0) {
            ctx->pc = 0x1F2CC8u;
            goto label_1f2cc8;
        }
    }
    ctx->pc = 0x1F2CA8u;
label_1f2ca8:
    // 0x1f2ca8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f2ca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f2cac: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x1f2cacu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f2cb0: 0xa4182a  slt         $v1, $a1, $a0
    ctx->pc = 0x1f2cb0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x1f2cb4: 0x24420080  addiu       $v0, $v0, 0x80
    ctx->pc = 0x1f2cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 128));
    // 0x1f2cb8: 0x0  nop
    ctx->pc = 0x1f2cb8u;
    // NOP
    // 0x1f2cbc: 0x0  nop
    ctx->pc = 0x1f2cbcu;
    // NOP
    // 0x1f2cc0: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1F2CC0u;
    {
        const bool branch_taken_0x1f2cc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f2cc0) {
            ctx->pc = 0x1F2CA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f2ca8;
        }
    }
    ctx->pc = 0x1F2CC8u;
label_1f2cc8:
    // 0x1f2cc8: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x1f2cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x1f2ccc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f2cccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f2cd0: 0xc08ab90  jal         func_22AE40
    ctx->pc = 0x1F2CD0u;
    SET_GPR_U32(ctx, 31, 0x1F2CD8u);
    ctx->pc = 0x1F2CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2CD0u;
            // 0x1f2cd4: 0x24a58938  addiu       $a1, $a1, -0x76C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2CD8u; }
        if (ctx->pc != 0x1F2CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2CD8u; }
        if (ctx->pc != 0x1F2CD8u) { return; }
    }
    ctx->pc = 0x1F2CD8u;
label_1f2cd8:
    // 0x1f2cd8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f2cd8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2cdc: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1F2CDCu;
    {
        const bool branch_taken_0x1f2cdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2CDCu;
            // 0x1f2ce0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2cdc) {
            ctx->pc = 0x1F2D24u;
            goto label_1f2d24;
        }
    }
    ctx->pc = 0x1F2CE4u;
    // 0x1f2ce4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2ce4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2ce8: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1f2ce8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f2cec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f2cecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2cf0: 0x2406fffd  addiu       $a2, $zero, -0x3
    ctx->pc = 0x1f2cf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1f2cf4: 0xc0896cc  jal         func_225B30
    ctx->pc = 0x1F2CF4u;
    SET_GPR_U32(ctx, 31, 0x1F2CFCu);
    ctx->pc = 0x1F2CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2CF4u;
            // 0x1f2cf8: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B30u;
    if (runtime->hasFunction(0x225B30u)) {
        auto targetFn = runtime->lookupFunction(0x225B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2CFCu; }
        if (ctx->pc != 0x1F2CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRGBACalcParam__16CMenuPosDataFormFiii_0x225b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2CFCu; }
        if (ctx->pc != 0x1F2CFCu) { return; }
    }
    ctx->pc = 0x1F2CFCu;
label_1f2cfc:
    // 0x1f2cfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2cfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2d00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f2d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2d04: 0x2406fffd  addiu       $a2, $zero, -0x3
    ctx->pc = 0x1f2d04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1f2d08: 0xc0896cc  jal         func_225B30
    ctx->pc = 0x1F2D08u;
    SET_GPR_U32(ctx, 31, 0x1F2D10u);
    ctx->pc = 0x1F2D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2D08u;
            // 0x1f2d0c: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B30u;
    if (runtime->hasFunction(0x225B30u)) {
        auto targetFn = runtime->lookupFunction(0x225B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2D10u; }
        if (ctx->pc != 0x1F2D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRGBACalcParam__16CMenuPosDataFormFiii_0x225b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2D10u; }
        if (ctx->pc != 0x1F2D10u) { return; }
    }
    ctx->pc = 0x1F2D10u;
label_1f2d10:
    // 0x1f2d10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f2d10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2d14: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1f2d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f2d18: 0x2406fffd  addiu       $a2, $zero, -0x3
    ctx->pc = 0x1f2d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1f2d1c: 0xc0896cc  jal         func_225B30
    ctx->pc = 0x1F2D1Cu;
    SET_GPR_U32(ctx, 31, 0x1F2D24u);
    ctx->pc = 0x1F2D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2D1Cu;
            // 0x1f2d20: 0x24070040  addiu       $a3, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B30u;
    if (runtime->hasFunction(0x225B30u)) {
        auto targetFn = runtime->lookupFunction(0x225B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2D24u; }
        if (ctx->pc != 0x1F2D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRGBACalcParam__16CMenuPosDataFormFiii_0x225b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2D24u; }
        if (ctx->pc != 0x1F2D24u) { return; }
    }
    ctx->pc = 0x1F2D24u;
label_1f2d24:
    // 0x1f2d24: 0xc065a18  jal         func_196860
    ctx->pc = 0x1F2D24u;
    SET_GPR_U32(ctx, 31, 0x1F2D2Cu);
    ctx->pc = 0x196860u;
    if (runtime->hasFunction(0x196860u)) {
        auto targetFn = runtime->lookupFunction(0x196860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2D2Cu; }
        if (ctx->pc != 0x1F2D2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMesBuffer__Fv_0x196860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2D2Cu; }
        if (ctx->pc != 0x1F2D2Cu) { return; }
    }
    ctx->pc = 0x1F2D2Cu;
label_1f2d2c:
    // 0x1f2d2c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f2d2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2d30: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1f2d30u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2d34: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1f2d34u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2d38: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1f2d38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f2d3c:
    // 0x1f2d3c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x1f2d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x1f2d40: 0x2405022f  addiu       $a1, $zero, 0x22F
    ctx->pc = 0x1f2d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 559));
    // 0x1f2d44: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1F2D44u;
    SET_GPR_U32(ctx, 31, 0x1F2D4Cu);
    ctx->pc = 0x1F2D48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2D44u;
            // 0x1f2d48: 0x248492e0  addiu       $a0, $a0, -0x6D20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2D4Cu; }
        if (ctx->pc != 0x1F2D4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2D4Cu; }
        if (ctx->pc != 0x1F2D4Cu) { return; }
    }
    ctx->pc = 0x1F2D4Cu;
label_1f2d4c:
    // 0x1f2d4c: 0x240422d0  addiu       $a0, $zero, 0x22D0
    ctx->pc = 0x1f2d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8912));
    // 0x1f2d50: 0xc04e638  jal         func_1398E0
    ctx->pc = 0x1F2D50u;
    SET_GPR_U32(ctx, 31, 0x1F2D58u);
    ctx->pc = 0x1F2D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2D50u;
            // 0x1f2d54: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2D58u; }
        if (ctx->pc != 0x1F2D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2D58u; }
        if (ctx->pc != 0x1F2D58u) { return; }
    }
    ctx->pc = 0x1F2D58u;
label_1f2d58:
    // 0x1f2d58: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F2D58u;
    {
        const bool branch_taken_0x1f2d58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2D58u;
            // 0x1f2d5c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2d58) {
            ctx->pc = 0x1F2D68u;
            goto label_1f2d68;
        }
    }
    ctx->pc = 0x1F2D60u;
    // 0x1f2d60: 0xc0874b4  jal         func_21D2D0
    ctx->pc = 0x1F2D60u;
    SET_GPR_U32(ctx, 31, 0x1F2D68u);
    ctx->pc = 0x21D2D0u;
    if (runtime->hasFunction(0x21D2D0u)) {
        auto targetFn = runtime->lookupFunction(0x21D2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2D68u; }
        if (ctx->pc != 0x1F2D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__7CDC2MesFv_0x21d2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2D68u; }
        if (ctx->pc != 0x1F2D68u) { return; }
    }
    ctx->pc = 0x1F2D68u;
label_1f2d68:
    // 0x1f2d68: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x1f2d68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x1f2d6c: 0x24639460  addiu       $v1, $v1, -0x6BA0
    ctx->pc = 0x1f2d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939744));
    // 0x1f2d70: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1f2d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x1f2d74: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x1f2d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x1f2d78: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1f2d78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1f2d7c: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x1f2d7cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1f2d80: 0xc0874e8  jal         func_21D3A0
    ctx->pc = 0x1F2D80u;
    SET_GPR_U32(ctx, 31, 0x1F2D88u);
    ctx->pc = 0x1F2D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2D80u;
            // 0x1f2d84: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D3A0u;
    if (runtime->hasFunction(0x21D3A0u)) {
        auto targetFn = runtime->lookupFunction(0x21D3A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2D88u; }
        if (ctx->pc != 0x1F2D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MsgPreset__7CDC2MesFi_0x21d3a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2D88u; }
        if (ctx->pc != 0x1F2D88u) { return; }
    }
    ctx->pc = 0x1F2D88u;
label_1f2d88:
    // 0x1f2d88: 0xae2021d4  sw          $zero, 0x21D4($s1)
    ctx->pc = 0x1f2d88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8660), GPR_U32(ctx, 0));
    // 0x1f2d8c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f2d8cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f2d90: 0x8c22d624  lw          $v0, -0x29DC($at)
    ctx->pc = 0x1f2d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
    // 0x1f2d94: 0xc08d1bc  jal         func_2346F0
    ctx->pc = 0x1F2D94u;
    SET_GPR_U32(ctx, 31, 0x1F2D9Cu);
    ctx->pc = 0x1F2D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2D94u;
            // 0x1f2d98: 0xae221b2c  sw          $v0, 0x1B2C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 6956), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2346F0u;
    if (runtime->hasFunction(0x2346F0u)) {
        auto targetFn = runtime->lookupFunction(0x2346F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2D9Cu; }
        if (ctx->pc != 0x1F2D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainMessageBuffer__Fv_0x2346f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2D9Cu; }
        if (ctx->pc != 0x1F2D9Cu) { return; }
    }
    ctx->pc = 0x1F2D9Cu;
label_1f2d9c:
    // 0x1f2d9c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f2d9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2da0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f2da0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2da4: 0xc0874d8  jal         func_21D360
    ctx->pc = 0x1F2DA4u;
    SET_GPR_U32(ctx, 31, 0x1F2DACu);
    ctx->pc = 0x1F2DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2DA4u;
            // 0x1f2da8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D360u;
    if (runtime->hasFunction(0x21D360u)) {
        auto targetFn = runtime->lookupFunction(0x21D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2DACu; }
        if (ctx->pc != 0x1F2DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMessData__7CDC2MesFPsPs_0x21d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2DACu; }
        if (ctx->pc != 0x1F2DACu) { return; }
    }
    ctx->pc = 0x1F2DACu;
label_1f2dac:
    // 0x1f2dac: 0x2403000f  addiu       $v1, $zero, 0xF
    ctx->pc = 0x1f2dacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x1f2db0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f2db0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2db4: 0xae2300c0  sw          $v1, 0xC0($s1)
    ctx->pc = 0x1f2db4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 3));
    // 0x1f2db8: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x1f2db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
    // 0x1f2dbc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F2DBCu;
    {
        const bool branch_taken_0x1f2dbc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F2DC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2DBCu;
            // 0x1f2dc0: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2dbc) {
            ctx->pc = 0x1F2DC8u;
            goto label_1f2dc8;
        }
    }
    ctx->pc = 0x1F2DC4u;
    // 0x1f2dc4: 0xae2200c0  sw          $v0, 0xC0($s1)
    ctx->pc = 0x1f2dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 192), GPR_U32(ctx, 2));
label_1f2dc8:
    // 0x1f2dc8: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x1f2dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x1f2dcc: 0xae2200c4  sw          $v0, 0xC4($s1)
    ctx->pc = 0x1f2dccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 196), GPR_U32(ctx, 2));
    // 0x1f2dd0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1f2dd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1f2dd4: 0x27829030  addiu       $v0, $gp, -0x6FD0
    ctx->pc = 0x1f2dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938672));
    // 0x1f2dd8: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x1f2dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x1f2ddc: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x1f2ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
    // 0x1f2de0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1f2de0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f2de4: 0x24429478  addiu       $v0, $v0, -0x6B88
    ctx->pc = 0x1f2de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939768));
    // 0x1f2de8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1f2de8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1f2dec: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x1f2decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x1f2df0: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x1f2df0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f2df4: 0x2a820005  slti        $v0, $s4, 0x5
    ctx->pc = 0x1f2df4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1f2df8: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
    ctx->pc = 0x1F2DF8u;
    {
        const bool branch_taken_0x1f2df8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2DF8u;
            // 0x1f2dfc: 0x26730002  addiu       $s3, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2df8) {
            ctx->pc = 0x1F2D3Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f2d3c;
        }
    }
    ctx->pc = 0x1F2E00u;
    // 0x1f2e00: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f2e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f2e04: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x1f2e04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x1f2e08: 0xa3828184  sb          $v0, -0x7E7C($gp)
    ctx->pc = 0x1f2e08u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294934916), (uint8_t)GPR_U32(ctx, 2));
    // 0x1f2e0c: 0x248492e0  addiu       $a0, $a0, -0x6D20
    ctx->pc = 0x1f2e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939360));
    // 0x1f2e10: 0x27858188  addiu       $a1, $gp, -0x7E78
    ctx->pc = 0x1f2e10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294934920));
    // 0x1f2e14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f2e14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2e18: 0xa3809040  sb          $zero, -0x6FC0($gp)
    ctx->pc = 0x1f2e18u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938688), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f2e1c: 0xa3809044  sb          $zero, -0x6FBC($gp)
    ctx->pc = 0x1f2e1cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938692), (uint8_t)GPR_U32(ctx, 0));
    // 0x1f2e20: 0xa7809038  sh          $zero, -0x6FC8($gp)
    ctx->pc = 0x1f2e20u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938680), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f2e24: 0xc094470  jal         func_2511C0
    ctx->pc = 0x1F2E24u;
    SET_GPR_U32(ctx, 31, 0x1F2E2Cu);
    ctx->pc = 0x1F2E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2E24u;
            // 0x1f2e28: 0xa780903c  sh          $zero, -0x6FC4($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294938684), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2511C0u;
    if (runtime->hasFunction(0x2511C0u)) {
        auto targetFn = runtime->lookupFunction(0x2511C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2E2Cu; }
        if (ctx->pc != 0x1F2E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCommonReadData__FP9mgCMemoryPPci_0x2511c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2E2Cu; }
        if (ctx->pc != 0x1F2E2Cu) { return; }
    }
    ctx->pc = 0x1F2E2Cu;
label_1f2e2c:
    // 0x1f2e2c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x1f2e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x1f2e30: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x1f2e30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
    // 0x1f2e34: 0xc04e748  jal         func_139D20
    ctx->pc = 0x1F2E34u;
    SET_GPR_U32(ctx, 31, 0x1F2E3Cu);
    ctx->pc = 0x1F2E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2E34u;
            // 0x1f2e38: 0x248492e0  addiu       $a0, $a0, -0x6D20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2E3Cu; }
        if (ctx->pc != 0x1F2E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2E3Cu; }
        if (ctx->pc != 0x1F2E3Cu) { return; }
    }
    ctx->pc = 0x1F2E3Cu;
label_1f2e3c:
    // 0x1f2e3c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x1f2e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
    // 0x1f2e40: 0xc04e780  jal         func_139E00
    ctx->pc = 0x1F2E40u;
    SET_GPR_U32(ctx, 31, 0x1F2E48u);
    ctx->pc = 0x1F2E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2E40u;
            // 0x1f2e44: 0x248492e0  addiu       $a0, $a0, -0x6D20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2E48u; }
        if (ctx->pc != 0x1F2E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2E48u; }
        if (ctx->pc != 0x1F2E48u) { return; }
    }
    ctx->pc = 0x1F2E48u;
label_1f2e48:
    // 0x1f2e48: 0x8f828ffc  lw          $v0, -0x7004($gp)
    ctx->pc = 0x1f2e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938620)));
    // 0x1f2e4c: 0x2403ffec  addiu       $v1, $zero, -0x14
    ctx->pc = 0x1f2e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967276));
    // 0x1f2e50: 0xa7839024  sh          $v1, -0x6FDC($gp)
    ctx->pc = 0x1f2e50u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938660), (uint16_t)GPR_U32(ctx, 3));
    // 0x1f2e54: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x1f2e54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x1f2e58: 0x24a592e0  addiu       $a1, $a1, -0x6D20
    ctx->pc = 0x1f2e58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939360));
    // 0x1f2e5c: 0x27a60064  addiu       $a2, $sp, 0x64
    ctx->pc = 0x1f2e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    // 0x1f2e60: 0x27a70068  addiu       $a3, $sp, 0x68
    ctx->pc = 0x1f2e60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 104));
    // 0x1f2e64: 0x8c440140  lw          $a0, 0x140($v0)
    ctx->pc = 0x1f2e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 320)));
    // 0x1f2e68: 0xc07d72c  jal         func_1F5CB0
    ctx->pc = 0x1F2E68u;
    SET_GPR_U32(ctx, 31, 0x1F2E70u);
    ctx->pc = 0x1F2E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2E68u;
            // 0x1f2e6c: 0x27a8006c  addiu       $t0, $sp, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F5CB0u;
    if (runtime->hasFunction(0x1F5CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1F5CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2E70u; }
        if (ctx->pc != 0x1F2E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeDownLoadAnaunce__FiP9mgCMemoryPiPiPi_0x1f5cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2E70u; }
        if (ctx->pc != 0x1F2E70u) { return; }
    }
    ctx->pc = 0x1F2E70u;
label_1f2e70:
    // 0x1f2e70: 0xc7a1006c  lwc1        $f1, 0x6C($sp)
    ctx->pc = 0x1f2e70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2e74: 0x3c024364  lui         $v0, 0x4364
    ctx->pc = 0x1f2e74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17252 << 16));
    // 0x1f2e78: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1f2e78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
    // 0x1f2e7c: 0x3c0601ed  lui         $a2, 0x1ED
    ctx->pc = 0x1f2e7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)493 << 16));
    // 0x1f2e80: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x1f2e80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
    // 0x1f2e84: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x1f2e84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x1f2e88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f2e88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2e8c: 0xaf809014  sw          $zero, -0x6FEC($gp)
    ctx->pc = 0x1f2e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938644), GPR_U32(ctx, 0));
    // 0x1f2e90: 0xa7809018  sh          $zero, -0x6FE8($gp)
    ctx->pc = 0x1f2e90u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938648), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f2e94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f2e94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2e98: 0xac209310  sw          $zero, -0x6CF0($at)
    ctx->pc = 0x1f2e98u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294939408), GPR_U32(ctx, 0));
    // 0x1f2e9c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1f2e9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2ea0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1f2ea0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1f2ea4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f2ea4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2ea8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1f2ea8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2eac: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x1f2eacu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2eb0: 0x24c69580  addiu       $a2, $a2, -0x6A80
    ctx->pc = 0x1f2eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940032));
    // 0x1f2eb4: 0x24a59310  addiu       $a1, $a1, -0x6CF0
    ctx->pc = 0x1f2eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939408));
    // 0x1f2eb8: 0x24639350  addiu       $v1, $v1, -0x6CB0
    ctx->pc = 0x1f2eb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939472));
    // 0x1f2ebc: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1f2ebcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x1f2ec0: 0xe7819010  swc1        $f1, -0x6FF0($gp)
    ctx->pc = 0x1f2ec0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294938640), bits); }
    // 0x1f2ec4: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x1F2EC4u;
    {
        const bool branch_taken_0x1f2ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2EC4u;
            // 0x1f2ec8: 0xe7809010  swc1        $f0, -0x6FF0($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294938640), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2ec4) {
            ctx->pc = 0x1F2F70u;
            goto label_1f2f70;
        }
    }
    ctx->pc = 0x1F2ECCu;
label_1f2ecc:
    // 0x1f2ecc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f2eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f2ed0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1f2ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1f2ed4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1f2ed4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1f2ed8: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1f2ed8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f2edc: 0x95840  sll         $t3, $t1, 1
    ctx->pc = 0x1f2edcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
    // 0x1f2ee0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1F2EE0u;
    {
        const bool branch_taken_0x1f2ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2EE0u;
            // 0x1f2ee4: 0x1425021  addu        $t2, $t2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2ee0) {
            ctx->pc = 0x1F2F00u;
            goto label_1f2f00;
        }
    }
    ctx->pc = 0x1F2EE8u;
label_1f2ee8:
    // 0x1f2ee8: 0xcb1021  addu        $v0, $a2, $t3
    ctx->pc = 0x1f2ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x1f2eec: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x1f2eecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f2ef0: 0x256b0002  addiu       $t3, $t3, 0x2
    ctx->pc = 0x1f2ef0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 2));
    // 0x1f2ef4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1f2ef4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1f2ef8: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1f2ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1f2efc: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x1f2efcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_1f2f00:
    // 0x1f2f00: 0x1a41021  addu        $v0, $t5, $a0
    ctx->pc = 0x1f2f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 4)));
    // 0x1f2f04: 0x80420008  lb          $v0, 0x8($v0)
    ctx->pc = 0x1f2f04u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1f2f08: 0x441fff7  bgez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x1F2F08u;
    {
        const bool branch_taken_0x1f2f08 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1f2f08) {
            ctx->pc = 0x1F2EE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f2ee8;
        }
    }
    ctx->pc = 0x1F2F10u;
    // 0x1f2f10: 0x448a0000  mtc1        $t2, $f0
    ctx->pc = 0x1f2f10u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2f14: 0xac2021  addu        $a0, $a1, $t4
    ctx->pc = 0x1f2f14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
    // 0x1f2f18: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1f2f18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x1f2f1c: 0xe4800004  swc1        $f0, 0x4($a0)
    ctx->pc = 0x1f2f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x1f2f20: 0x87829018  lh          $v0, -0x6FE8($gp)
    ctx->pc = 0x1f2f20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294938648)));
    // 0x1f2f24: 0xc7819010  lwc1        $f1, -0x6FF0($gp)
    ctx->pc = 0x1f2f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938640)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2f28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1f2f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f2f2c: 0xa7829018  sh          $v0, -0x6FE8($gp)
    ctx->pc = 0x1f2f2cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938648), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f2f30: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x1f2f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2f34: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f2f34u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f2f38: 0x0  nop
    ctx->pc = 0x1f2f38u;
    // NOP
    // 0x1f2f3c: 0x45000009  bc1f        . + 4 + (0x9 << 2)
    ctx->pc = 0x1F2F3Cu;
    {
        const bool branch_taken_0x1f2f3c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f2f3c) {
            ctx->pc = 0x1F2F64u;
            goto label_1f2f64;
        }
    }
    ctx->pc = 0x1F2F44u;
    // 0x1f2f44: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F2F44u;
    {
        const bool branch_taken_0x1f2f44 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2F44u;
            // 0x1f2f48: 0x3c0201ed  lui         $v0, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2f44) {
            ctx->pc = 0x1F2F60u;
            goto label_1f2f60;
        }
    }
    ctx->pc = 0x1F2F4Cu;
    // 0x1f2f4c: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x1f2f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
    // 0x1f2f50: 0x24429314  addiu       $v0, $v0, -0x6CEC
    ctx->pc = 0x1f2f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294939412));
    // 0x1f2f54: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f2f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f2f58: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F2F58u;
    {
        const bool branch_taken_0x1f2f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F2F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2F58u;
            // 0x1f2f5c: 0xe4410000  swc1        $f1, 0x0($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2f58) {
            ctx->pc = 0x1F2F80u;
            goto label_1f2f80;
        }
    }
    ctx->pc = 0x1F2F60u;
label_1f2f60:
    // 0x1f2f60: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1f2f60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1f2f64:
    // 0x1f2f64: 0x0  nop
    ctx->pc = 0x1f2f64u;
    // NOP
    // 0x1f2f68: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x1f2f68u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x1f2f6c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1f2f6cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1f2f70:
    // 0x1f2f70: 0x6c1021  addu        $v0, $v1, $t4
    ctx->pc = 0x1f2f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
    // 0x1f2f74: 0x8c4d0000  lw          $t5, 0x0($v0)
    ctx->pc = 0x1f2f74u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f2f78: 0x15a0ffd4  bnez        $t5, . + 4 + (-0x2C << 2)
    ctx->pc = 0x1F2F78u;
    {
        const bool branch_taken_0x1f2f78 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F2F7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2F78u;
            // 0x1f2f7c: 0x91040  sll         $v0, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f2f78) {
            ctx->pc = 0x1F2ECCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f2ecc;
        }
    }
    ctx->pc = 0x1F2F80u;
label_1f2f80:
    // 0x1f2f80: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x1f2f80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x1f2f84: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f2f84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f2f88: 0x3c0601ed  lui         $a2, 0x1ED
    ctx->pc = 0x1f2f88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)493 << 16));
    // 0x1f2f8c: 0x3c0701ed  lui         $a3, 0x1ED
    ctx->pc = 0x1f2f8cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)493 << 16));
    // 0x1f2f90: 0x24a58948  addiu       $a1, $a1, -0x76B8
    ctx->pc = 0x1f2f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936904));
    // 0x1f2f94: 0x24c69420  addiu       $a2, $a2, -0x6BE0
    ctx->pc = 0x1f2f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939680));
    // 0x1f2f98: 0xc08aaec  jal         func_22ABB0
    ctx->pc = 0x1F2F98u;
    SET_GPR_U32(ctx, 31, 0x1F2FA0u);
    ctx->pc = 0x1F2F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2F98u;
            // 0x1f2f9c: 0x24e79424  addiu       $a3, $a3, -0x6BDC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939684));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22ABB0u;
    if (runtime->hasFunction(0x22ABB0u)) {
        auto targetFn = runtime->lookupFunction(0x22ABB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2FA0u; }
        if (ctx->pc != 0x1F2FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEtcTblValue__14CPosDataManageFPcRiRi_0x22abb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2FA0u; }
        if (ctx->pc != 0x1F2FA0u) { return; }
    }
    ctx->pc = 0x1F2FA0u;
label_1f2fa0:
    // 0x1f2fa0: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x1f2fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x1f2fa4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f2fa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f2fa8: 0x3c0601ed  lui         $a2, 0x1ED
    ctx->pc = 0x1f2fa8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)493 << 16));
    // 0x1f2fac: 0x3c0701ed  lui         $a3, 0x1ED
    ctx->pc = 0x1f2facu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)493 << 16));
    // 0x1f2fb0: 0x24a58958  addiu       $a1, $a1, -0x76A8
    ctx->pc = 0x1f2fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936920));
    // 0x1f2fb4: 0x24c69428  addiu       $a2, $a2, -0x6BD8
    ctx->pc = 0x1f2fb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939688));
    // 0x1f2fb8: 0xc08aaec  jal         func_22ABB0
    ctx->pc = 0x1F2FB8u;
    SET_GPR_U32(ctx, 31, 0x1F2FC0u);
    ctx->pc = 0x1F2FBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2FB8u;
            // 0x1f2fbc: 0x24e7942c  addiu       $a3, $a3, -0x6BD4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939692));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22ABB0u;
    if (runtime->hasFunction(0x22ABB0u)) {
        auto targetFn = runtime->lookupFunction(0x22ABB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2FC0u; }
        if (ctx->pc != 0x1F2FC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEtcTblValue__14CPosDataManageFPcRiRi_0x22abb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2FC0u; }
        if (ctx->pc != 0x1F2FC0u) { return; }
    }
    ctx->pc = 0x1F2FC0u;
label_1f2fc0:
    // 0x1f2fc0: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x1f2fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x1f2fc4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f2fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f2fc8: 0x3c0601ed  lui         $a2, 0x1ED
    ctx->pc = 0x1f2fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)493 << 16));
    // 0x1f2fcc: 0x3c0701ed  lui         $a3, 0x1ED
    ctx->pc = 0x1f2fccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)493 << 16));
    // 0x1f2fd0: 0x24a58970  addiu       $a1, $a1, -0x7690
    ctx->pc = 0x1f2fd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936944));
    // 0x1f2fd4: 0x24c69438  addiu       $a2, $a2, -0x6BC8
    ctx->pc = 0x1f2fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939704));
    // 0x1f2fd8: 0xc08aaec  jal         func_22ABB0
    ctx->pc = 0x1F2FD8u;
    SET_GPR_U32(ctx, 31, 0x1F2FE0u);
    ctx->pc = 0x1F2FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2FD8u;
            // 0x1f2fdc: 0x24e7943c  addiu       $a3, $a3, -0x6BC4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939708));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22ABB0u;
    if (runtime->hasFunction(0x22ABB0u)) {
        auto targetFn = runtime->lookupFunction(0x22ABB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2FE0u; }
        if (ctx->pc != 0x1F2FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEtcTblValue__14CPosDataManageFPcRiRi_0x22abb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F2FE0u; }
        if (ctx->pc != 0x1F2FE0u) { return; }
    }
    ctx->pc = 0x1F2FE0u;
label_1f2fe0:
    // 0x1f2fe0: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x1f2fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x1f2fe4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f2fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f2fe8: 0x3c0601ed  lui         $a2, 0x1ED
    ctx->pc = 0x1f2fe8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)493 << 16));
    // 0x1f2fec: 0x3c0701ed  lui         $a3, 0x1ED
    ctx->pc = 0x1f2fecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)493 << 16));
    // 0x1f2ff0: 0x24a58988  addiu       $a1, $a1, -0x7678
    ctx->pc = 0x1f2ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936968));
    // 0x1f2ff4: 0x24c69430  addiu       $a2, $a2, -0x6BD0
    ctx->pc = 0x1f2ff4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939696));
    // 0x1f2ff8: 0xc08aaec  jal         func_22ABB0
    ctx->pc = 0x1F2FF8u;
    SET_GPR_U32(ctx, 31, 0x1F3000u);
    ctx->pc = 0x1F2FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F2FF8u;
            // 0x1f2ffc: 0x24e79434  addiu       $a3, $a3, -0x6BCC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939700));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22ABB0u;
    if (runtime->hasFunction(0x22ABB0u)) {
        auto targetFn = runtime->lookupFunction(0x22ABB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3000u; }
        if (ctx->pc != 0x1F3000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEtcTblValue__14CPosDataManageFPcRiRi_0x22abb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3000u; }
        if (ctx->pc != 0x1F3000u) { return; }
    }
    ctx->pc = 0x1F3000u;
label_1f3000:
    // 0x1f3000: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x1f3000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x1f3004: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f3004u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f3008: 0x3c0601ed  lui         $a2, 0x1ED
    ctx->pc = 0x1f3008u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)493 << 16));
    // 0x1f300c: 0x3c0701ed  lui         $a3, 0x1ED
    ctx->pc = 0x1f300cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)493 << 16));
    // 0x1f3010: 0x24a589a0  addiu       $a1, $a1, -0x7660
    ctx->pc = 0x1f3010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936992));
    // 0x1f3014: 0x24c69440  addiu       $a2, $a2, -0x6BC0
    ctx->pc = 0x1f3014u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939712));
    // 0x1f3018: 0xc08aaec  jal         func_22ABB0
    ctx->pc = 0x1F3018u;
    SET_GPR_U32(ctx, 31, 0x1F3020u);
    ctx->pc = 0x1F301Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3018u;
            // 0x1f301c: 0x24e79444  addiu       $a3, $a3, -0x6BBC (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294939716));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22ABB0u;
    if (runtime->hasFunction(0x22ABB0u)) {
        auto targetFn = runtime->lookupFunction(0x22ABB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3020u; }
        if (ctx->pc != 0x1F3020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEtcTblValue__14CPosDataManageFPcRiRi_0x22abb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3020u; }
        if (ctx->pc != 0x1F3020u) { return; }
    }
    ctx->pc = 0x1F3020u;
label_1f3020:
    // 0x1f3020: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x1f3020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x1f3024: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f3024u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f3028: 0x3c0601ed  lui         $a2, 0x1ED
    ctx->pc = 0x1f3028u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)493 << 16));
    // 0x1f302c: 0x24a58948  addiu       $a1, $a1, -0x76B8
    ctx->pc = 0x1f302cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936904));
    // 0x1f3030: 0x24c693d0  addiu       $a2, $a2, -0x6C30
    ctx->pc = 0x1f3030u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939600));
    // 0x1f3034: 0xc08ab30  jal         func_22ACC0
    ctx->pc = 0x1F3034u;
    SET_GPR_U32(ctx, 31, 0x1F303Cu);
    ctx->pc = 0x1F3038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3034u;
            // 0x1f3038: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22ACC0u;
    if (runtime->hasFunction(0x22ACC0u)) {
        auto targetFn = runtime->lookupFunction(0x22ACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F303Cu; }
        if (ctx->pc != 0x1F303Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEtcTbl2Value__14CPosDataManageFPcPfi_0x22acc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F303Cu; }
        if (ctx->pc != 0x1F303Cu) { return; }
    }
    ctx->pc = 0x1F303Cu;
label_1f303c:
    // 0x1f303c: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x1f303cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x1f3040: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f3040u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f3044: 0x3c0601ed  lui         $a2, 0x1ED
    ctx->pc = 0x1f3044u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)493 << 16));
    // 0x1f3048: 0x24a58958  addiu       $a1, $a1, -0x76A8
    ctx->pc = 0x1f3048u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936920));
    // 0x1f304c: 0x24c693e0  addiu       $a2, $a2, -0x6C20
    ctx->pc = 0x1f304cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939616));
    // 0x1f3050: 0xc08ab30  jal         func_22ACC0
    ctx->pc = 0x1F3050u;
    SET_GPR_U32(ctx, 31, 0x1F3058u);
    ctx->pc = 0x1F3054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3050u;
            // 0x1f3054: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22ACC0u;
    if (runtime->hasFunction(0x22ACC0u)) {
        auto targetFn = runtime->lookupFunction(0x22ACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3058u; }
        if (ctx->pc != 0x1F3058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEtcTbl2Value__14CPosDataManageFPcPfi_0x22acc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3058u; }
        if (ctx->pc != 0x1F3058u) { return; }
    }
    ctx->pc = 0x1F3058u;
label_1f3058:
    // 0x1f3058: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x1f3058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x1f305c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f305cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f3060: 0x3c0601ed  lui         $a2, 0x1ED
    ctx->pc = 0x1f3060u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)493 << 16));
    // 0x1f3064: 0x24a58970  addiu       $a1, $a1, -0x7690
    ctx->pc = 0x1f3064u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936944));
    // 0x1f3068: 0x24c69400  addiu       $a2, $a2, -0x6C00
    ctx->pc = 0x1f3068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939648));
    // 0x1f306c: 0xc08ab30  jal         func_22ACC0
    ctx->pc = 0x1F306Cu;
    SET_GPR_U32(ctx, 31, 0x1F3074u);
    ctx->pc = 0x1F3070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F306Cu;
            // 0x1f3070: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22ACC0u;
    if (runtime->hasFunction(0x22ACC0u)) {
        auto targetFn = runtime->lookupFunction(0x22ACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3074u; }
        if (ctx->pc != 0x1F3074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEtcTbl2Value__14CPosDataManageFPcPfi_0x22acc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3074u; }
        if (ctx->pc != 0x1F3074u) { return; }
    }
    ctx->pc = 0x1F3074u;
label_1f3074:
    // 0x1f3074: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x1f3074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x1f3078: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f3078u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f307c: 0x3c0601ed  lui         $a2, 0x1ED
    ctx->pc = 0x1f307cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)493 << 16));
    // 0x1f3080: 0x24a58988  addiu       $a1, $a1, -0x7678
    ctx->pc = 0x1f3080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936968));
    // 0x1f3084: 0x24c693f0  addiu       $a2, $a2, -0x6C10
    ctx->pc = 0x1f3084u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939632));
    // 0x1f3088: 0xc08ab30  jal         func_22ACC0
    ctx->pc = 0x1F3088u;
    SET_GPR_U32(ctx, 31, 0x1F3090u);
    ctx->pc = 0x1F308Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3088u;
            // 0x1f308c: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22ACC0u;
    if (runtime->hasFunction(0x22ACC0u)) {
        auto targetFn = runtime->lookupFunction(0x22ACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3090u; }
        if (ctx->pc != 0x1F3090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEtcTbl2Value__14CPosDataManageFPcPfi_0x22acc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3090u; }
        if (ctx->pc != 0x1F3090u) { return; }
    }
    ctx->pc = 0x1F3090u;
label_1f3090:
    // 0x1f3090: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x1f3090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x1f3094: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f3094u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f3098: 0x3c0601ed  lui         $a2, 0x1ED
    ctx->pc = 0x1f3098u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)493 << 16));
    // 0x1f309c: 0x24a589a0  addiu       $a1, $a1, -0x7660
    ctx->pc = 0x1f309cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936992));
    // 0x1f30a0: 0x24c69410  addiu       $a2, $a2, -0x6BF0
    ctx->pc = 0x1f30a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939664));
    // 0x1f30a4: 0xc08ab30  jal         func_22ACC0
    ctx->pc = 0x1F30A4u;
    SET_GPR_U32(ctx, 31, 0x1F30ACu);
    ctx->pc = 0x1F30A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F30A4u;
            // 0x1f30a8: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22ACC0u;
    if (runtime->hasFunction(0x22ACC0u)) {
        auto targetFn = runtime->lookupFunction(0x22ACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F30ACu; }
        if (ctx->pc != 0x1F30ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEtcTbl2Value__14CPosDataManageFPcPfi_0x22acc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F30ACu; }
        if (ctx->pc != 0x1F30ACu) { return; }
    }
    ctx->pc = 0x1F30ACu;
label_1f30ac:
    // 0x1f30ac: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x1f30acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
    // 0x1f30b0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x1f30b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
    // 0x1f30b4: 0x3c0601ed  lui         $a2, 0x1ED
    ctx->pc = 0x1f30b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)493 << 16));
    // 0x1f30b8: 0x24a589c0  addiu       $a1, $a1, -0x7640
    ctx->pc = 0x1f30b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294937024));
    // 0x1f30bc: 0x24c69450  addiu       $a2, $a2, -0x6BB0
    ctx->pc = 0x1f30bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939728));
    // 0x1f30c0: 0xc08ab30  jal         func_22ACC0
    ctx->pc = 0x1F30C0u;
    SET_GPR_U32(ctx, 31, 0x1F30C8u);
    ctx->pc = 0x1F30C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F30C0u;
            // 0x1f30c4: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22ACC0u;
    if (runtime->hasFunction(0x22ACC0u)) {
        auto targetFn = runtime->lookupFunction(0x22ACC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F30C8u; }
        if (ctx->pc != 0x1F30C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEtcTbl2Value__14CPosDataManageFPcPfi_0x22acc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F30C8u; }
        if (ctx->pc != 0x1F30C8u) { return; }
    }
    ctx->pc = 0x1F30C8u;
label_1f30c8:
    // 0x1f30c8: 0xc07e374  jal         func_1F8DD0
    ctx->pc = 0x1F30C8u;
    SET_GPR_U32(ctx, 31, 0x1F30D0u);
    ctx->pc = 0x1F30CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F30C8u;
            // 0x1f30cc: 0x8f848ffc  lw          $a0, -0x7004($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938620)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F8DD0u;
    if (runtime->hasFunction(0x1F8DD0u)) {
        auto targetFn = runtime->lookupFunction(0x1F8DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F30D0u; }
        if (ctx->pc != 0x1F30D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UpdateGeoramaPartsList__12CMenuGeoramaFv_0x1f8dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F30D0u; }
        if (ctx->pc != 0x1F30D0u) { return; }
    }
    ctx->pc = 0x1F30D0u;
label_1f30d0:
    // 0x1f30d0: 0x8f908ffc  lw          $s0, -0x7004($gp)
    ctx->pc = 0x1f30d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938620)));
    // 0x1f30d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f30d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f30d8: 0xc07e754  jal         func_1F9D50
    ctx->pc = 0x1F30D8u;
    SET_GPR_U32(ctx, 31, 0x1F30E0u);
    ctx->pc = 0x1F30DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F30D8u;
            // 0x1f30dc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9D50u;
    if (runtime->hasFunction(0x1F9D50u)) {
        auto targetFn = runtime->lookupFunction(0x1F9D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F30E0u; }
        if (ctx->pc != 0x1F30E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowViewModeMax__12CMenuGeoramaFi_0x1f9d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F30E0u; }
        if (ctx->pc != 0x1F30E0u) { return; }
    }
    ctx->pc = 0x1F30E0u;
label_1f30e0:
    // 0x1f30e0: 0x24480001  addiu       $t0, $v0, 0x1
    ctx->pc = 0x1f30e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1f30e4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f30e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f30e8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1f30e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x1f30ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1f30ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f30f0: 0x3443b7f4  ori         $v1, $v0, 0xB7F4
    ctx->pc = 0x1f30f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47092);
    // 0x1f30f4: 0x24090008  addiu       $t1, $zero, 0x8
    ctx->pc = 0x1f30f4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f30f8: 0x3442b7f8  ori         $v0, $v0, 0xB7F8
    ctx->pc = 0x1f30f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47096);
    // 0x1f30fc: 0x2032821  addu        $a1, $s0, $v1
    ctx->pc = 0x1f30fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x1f3100: 0x2023021  addu        $a2, $s0, $v0
    ctx->pc = 0x1f3100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x1f3104: 0xc08ec6c  jal         func_23B1B0
    ctx->pc = 0x1F3104u;
    SET_GPR_U32(ctx, 31, 0x1F310Cu);
    ctx->pc = 0x1F3108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3104u;
            // 0x1f3108: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23B1B0u;
    if (runtime->hasFunction(0x23B1B0u)) {
        auto targetFn = runtime->lookupFunction(0x23B1B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F310Cu; }
        if (ctx->pc != 0x1F310Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuKeySelectCheck__FiPiPiiiii_0x23b1b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F310Cu; }
        if (ctx->pc != 0x1F310Cu) { return; }
    }
    ctx->pc = 0x1F310Cu;
label_1f310c:
    // 0x1f310c: 0x8f908ffc  lw          $s0, -0x7004($gp)
    ctx->pc = 0x1f310cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938620)));
    // 0x1f3110: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f3110u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3114: 0xc07e754  jal         func_1F9D50
    ctx->pc = 0x1F3114u;
    SET_GPR_U32(ctx, 31, 0x1F311Cu);
    ctx->pc = 0x1F3118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3114u;
            // 0x1f3118: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9D50u;
    if (runtime->hasFunction(0x1F9D50u)) {
        auto targetFn = runtime->lookupFunction(0x1F9D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F311Cu; }
        if (ctx->pc != 0x1F311Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowViewModeMax__12CMenuGeoramaFi_0x1f9d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F311Cu; }
        if (ctx->pc != 0x1F311Cu) { return; }
    }
    ctx->pc = 0x1F311Cu;
label_1f311c:
    // 0x1f311c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f311cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f3120: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f3120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3124: 0x3421b7f4  ori         $at, $at, 0xB7F4
    ctx->pc = 0x1f3124u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47092);
    // 0x1f3128: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1f3128u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f312c: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x1f312cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f3130: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f3130u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f3134: 0x3421b7f8  ori         $at, $at, 0xB7F8
    ctx->pc = 0x1f3134u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47096);
    // 0x1f3138: 0xc07c960  jal         func_1F2580
    ctx->pc = 0x1F3138u;
    SET_GPR_U32(ctx, 31, 0x1F3140u);
    ctx->pc = 0x1F313Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3138u;
            // 0x1f313c: 0x2012821  addu        $a1, $s0, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F2580u;
    if (runtime->hasFunction(0x1F2580u)) {
        auto targetFn = runtime->lookupFunction(0x1F2580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3140u; }
        if (ctx->pc != 0x1F3140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckMenuLine__FPiPiii_0x1f2580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3140u; }
        if (ctx->pc != 0x1F3140u) { return; }
    }
    ctx->pc = 0x1F3140u;
label_1f3140:
    // 0x1f3140: 0x8f908ffc  lw          $s0, -0x7004($gp)
    ctx->pc = 0x1f3140u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938620)));
    // 0x1f3144: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1f3144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3148: 0xc07e754  jal         func_1F9D50
    ctx->pc = 0x1F3148u;
    SET_GPR_U32(ctx, 31, 0x1F3150u);
    ctx->pc = 0x1F314Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3148u;
            // 0x1f314c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F9D50u;
    if (runtime->hasFunction(0x1F9D50u)) {
        auto targetFn = runtime->lookupFunction(0x1F9D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3150u; }
        if (ctx->pc != 0x1F3150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowViewModeMax__12CMenuGeoramaFi_0x1f9d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3150u; }
        if (ctx->pc != 0x1F3150u) { return; }
    }
    ctx->pc = 0x1F3150u;
label_1f3150:
    // 0x1f3150: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f3150u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f3154: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1f3154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3158: 0x3421b7fc  ori         $at, $at, 0xB7FC
    ctx->pc = 0x1f3158u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47100);
    // 0x1f315c: 0x24070008  addiu       $a3, $zero, 0x8
    ctx->pc = 0x1f315cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1f3160: 0x2012021  addu        $a0, $s0, $at
    ctx->pc = 0x1f3160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
    // 0x1f3164: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1f3164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
    // 0x1f3168: 0x3421b800  ori         $at, $at, 0xB800
    ctx->pc = 0x1f3168u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)47104);
    // 0x1f316c: 0xc07c960  jal         func_1F2580
    ctx->pc = 0x1F316Cu;
    SET_GPR_U32(ctx, 31, 0x1F3174u);
    ctx->pc = 0x1F3170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F316Cu;
            // 0x1f3170: 0x2012821  addu        $a1, $s0, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F2580u;
    if (runtime->hasFunction(0x1F2580u)) {
        auto targetFn = runtime->lookupFunction(0x1F2580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3174u; }
        if (ctx->pc != 0x1F3174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckMenuLine__FPiPiii_0x1f2580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3174u; }
        if (ctx->pc != 0x1F3174u) { return; }
    }
    ctx->pc = 0x1F3174u;
label_1f3174:
    // 0x1f3174: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f3174u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f3178: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1f3178u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1f317c:
    // 0x1f317c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x1f317cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
    // 0x1f3180: 0x2442e390  addiu       $v0, $v0, -0x1C70
    ctx->pc = 0x1f3180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960016));
    // 0x1f3184: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x1f3184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1f3188: 0xc0684dc  jal         func_1A1370
    ctx->pc = 0x1F3188u;
    SET_GPR_U32(ctx, 31, 0x1F3190u);
    ctx->pc = 0x1F318Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F3188u;
            // 0x1f318c: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1370u;
    if (runtime->hasFunction(0x1A1370u)) {
        auto targetFn = runtime->lookupFunction(0x1A1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3190u; }
        if (ctx->pc != 0x1F3190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserItemHaveNum__Fi_0x1a1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F3190u; }
        if (ctx->pc != 0x1F3190u) { return; }
    }
    ctx->pc = 0x1F3190u;
label_1f3190:
    // 0x1f3190: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x1f3190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
    // 0x1f3194: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1f3194u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f3198: 0x246392c0  addiu       $v1, $v1, -0x6D40
    ctx->pc = 0x1f3198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939328));
    // 0x1f319c: 0x712021  addu        $a0, $v1, $s1
    ctx->pc = 0x1f319cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x1f31a0: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x1f31a0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1f31a4: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x1f31a4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1f31a8: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x1F31A8u;
    {
        const bool branch_taken_0x1f31a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F31ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F31A8u;
            // 0x1f31ac: 0x26310002  addiu       $s1, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f31a8) {
            ctx->pc = 0x1F317Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f317c;
        }
    }
    ctx->pc = 0x1F31B0u;
    // 0x1f31b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f31b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f31b4:
    // 0x1f31b4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1f31b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1f31b8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1f31b8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f31bc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1f31bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f31c0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1f31c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f31c4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1f31c4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f31c8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1f31c8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f31cc: 0x3e00008  jr          $ra
    ctx->pc = 0x1F31CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F31D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F31CCu;
            // 0x1f31d0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F31D4u;
}
