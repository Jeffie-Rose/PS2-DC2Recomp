#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: GetePlaceParts__8CEditMapFPfPP10CEditPartsi
// Address: 0x1b2740 - 0x1b2a4c
void GetePlaceParts__8CEditMapFPfPP10CEditPartsi_0x1b2740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("GetePlaceParts__8CEditMapFPfPP10CEditPartsi_0x1b2740");
#endif

    switch (ctx->pc) {
        case 0x1b2740u: goto label_1b2740;
        case 0x1b2744u: goto label_1b2744;
        case 0x1b2748u: goto label_1b2748;
        case 0x1b274cu: goto label_1b274c;
        case 0x1b2750u: goto label_1b2750;
        case 0x1b2754u: goto label_1b2754;
        case 0x1b2758u: goto label_1b2758;
        case 0x1b275cu: goto label_1b275c;
        case 0x1b2760u: goto label_1b2760;
        case 0x1b2764u: goto label_1b2764;
        case 0x1b2768u: goto label_1b2768;
        case 0x1b276cu: goto label_1b276c;
        case 0x1b2770u: goto label_1b2770;
        case 0x1b2774u: goto label_1b2774;
        case 0x1b2778u: goto label_1b2778;
        case 0x1b277cu: goto label_1b277c;
        case 0x1b2780u: goto label_1b2780;
        case 0x1b2784u: goto label_1b2784;
        case 0x1b2788u: goto label_1b2788;
        case 0x1b278cu: goto label_1b278c;
        case 0x1b2790u: goto label_1b2790;
        case 0x1b2794u: goto label_1b2794;
        case 0x1b2798u: goto label_1b2798;
        case 0x1b279cu: goto label_1b279c;
        case 0x1b27a0u: goto label_1b27a0;
        case 0x1b27a4u: goto label_1b27a4;
        case 0x1b27a8u: goto label_1b27a8;
        case 0x1b27acu: goto label_1b27ac;
        case 0x1b27b0u: goto label_1b27b0;
        case 0x1b27b4u: goto label_1b27b4;
        case 0x1b27b8u: goto label_1b27b8;
        case 0x1b27bcu: goto label_1b27bc;
        case 0x1b27c0u: goto label_1b27c0;
        case 0x1b27c4u: goto label_1b27c4;
        case 0x1b27c8u: goto label_1b27c8;
        case 0x1b27ccu: goto label_1b27cc;
        case 0x1b27d0u: goto label_1b27d0;
        case 0x1b27d4u: goto label_1b27d4;
        case 0x1b27d8u: goto label_1b27d8;
        case 0x1b27dcu: goto label_1b27dc;
        case 0x1b27e0u: goto label_1b27e0;
        case 0x1b27e4u: goto label_1b27e4;
        case 0x1b27e8u: goto label_1b27e8;
        case 0x1b27ecu: goto label_1b27ec;
        case 0x1b27f0u: goto label_1b27f0;
        case 0x1b27f4u: goto label_1b27f4;
        case 0x1b27f8u: goto label_1b27f8;
        case 0x1b27fcu: goto label_1b27fc;
        case 0x1b2800u: goto label_1b2800;
        case 0x1b2804u: goto label_1b2804;
        case 0x1b2808u: goto label_1b2808;
        case 0x1b280cu: goto label_1b280c;
        case 0x1b2810u: goto label_1b2810;
        case 0x1b2814u: goto label_1b2814;
        case 0x1b2818u: goto label_1b2818;
        case 0x1b281cu: goto label_1b281c;
        case 0x1b2820u: goto label_1b2820;
        case 0x1b2824u: goto label_1b2824;
        case 0x1b2828u: goto label_1b2828;
        case 0x1b282cu: goto label_1b282c;
        case 0x1b2830u: goto label_1b2830;
        case 0x1b2834u: goto label_1b2834;
        case 0x1b2838u: goto label_1b2838;
        case 0x1b283cu: goto label_1b283c;
        case 0x1b2840u: goto label_1b2840;
        case 0x1b2844u: goto label_1b2844;
        case 0x1b2848u: goto label_1b2848;
        case 0x1b284cu: goto label_1b284c;
        case 0x1b2850u: goto label_1b2850;
        case 0x1b2854u: goto label_1b2854;
        case 0x1b2858u: goto label_1b2858;
        case 0x1b285cu: goto label_1b285c;
        case 0x1b2860u: goto label_1b2860;
        case 0x1b2864u: goto label_1b2864;
        case 0x1b2868u: goto label_1b2868;
        case 0x1b286cu: goto label_1b286c;
        case 0x1b2870u: goto label_1b2870;
        case 0x1b2874u: goto label_1b2874;
        case 0x1b2878u: goto label_1b2878;
        case 0x1b287cu: goto label_1b287c;
        case 0x1b2880u: goto label_1b2880;
        case 0x1b2884u: goto label_1b2884;
        case 0x1b2888u: goto label_1b2888;
        case 0x1b288cu: goto label_1b288c;
        case 0x1b2890u: goto label_1b2890;
        case 0x1b2894u: goto label_1b2894;
        case 0x1b2898u: goto label_1b2898;
        case 0x1b289cu: goto label_1b289c;
        case 0x1b28a0u: goto label_1b28a0;
        case 0x1b28a4u: goto label_1b28a4;
        case 0x1b28a8u: goto label_1b28a8;
        case 0x1b28acu: goto label_1b28ac;
        case 0x1b28b0u: goto label_1b28b0;
        case 0x1b28b4u: goto label_1b28b4;
        case 0x1b28b8u: goto label_1b28b8;
        case 0x1b28bcu: goto label_1b28bc;
        case 0x1b28c0u: goto label_1b28c0;
        case 0x1b28c4u: goto label_1b28c4;
        case 0x1b28c8u: goto label_1b28c8;
        case 0x1b28ccu: goto label_1b28cc;
        case 0x1b28d0u: goto label_1b28d0;
        case 0x1b28d4u: goto label_1b28d4;
        case 0x1b28d8u: goto label_1b28d8;
        case 0x1b28dcu: goto label_1b28dc;
        case 0x1b28e0u: goto label_1b28e0;
        case 0x1b28e4u: goto label_1b28e4;
        case 0x1b28e8u: goto label_1b28e8;
        case 0x1b28ecu: goto label_1b28ec;
        case 0x1b28f0u: goto label_1b28f0;
        case 0x1b28f4u: goto label_1b28f4;
        case 0x1b28f8u: goto label_1b28f8;
        case 0x1b28fcu: goto label_1b28fc;
        case 0x1b2900u: goto label_1b2900;
        case 0x1b2904u: goto label_1b2904;
        case 0x1b2908u: goto label_1b2908;
        case 0x1b290cu: goto label_1b290c;
        case 0x1b2910u: goto label_1b2910;
        case 0x1b2914u: goto label_1b2914;
        case 0x1b2918u: goto label_1b2918;
        case 0x1b291cu: goto label_1b291c;
        case 0x1b2920u: goto label_1b2920;
        case 0x1b2924u: goto label_1b2924;
        case 0x1b2928u: goto label_1b2928;
        case 0x1b292cu: goto label_1b292c;
        case 0x1b2930u: goto label_1b2930;
        case 0x1b2934u: goto label_1b2934;
        case 0x1b2938u: goto label_1b2938;
        case 0x1b293cu: goto label_1b293c;
        case 0x1b2940u: goto label_1b2940;
        case 0x1b2944u: goto label_1b2944;
        case 0x1b2948u: goto label_1b2948;
        case 0x1b294cu: goto label_1b294c;
        case 0x1b2950u: goto label_1b2950;
        case 0x1b2954u: goto label_1b2954;
        case 0x1b2958u: goto label_1b2958;
        case 0x1b295cu: goto label_1b295c;
        case 0x1b2960u: goto label_1b2960;
        case 0x1b2964u: goto label_1b2964;
        case 0x1b2968u: goto label_1b2968;
        case 0x1b296cu: goto label_1b296c;
        case 0x1b2970u: goto label_1b2970;
        case 0x1b2974u: goto label_1b2974;
        case 0x1b2978u: goto label_1b2978;
        case 0x1b297cu: goto label_1b297c;
        case 0x1b2980u: goto label_1b2980;
        case 0x1b2984u: goto label_1b2984;
        case 0x1b2988u: goto label_1b2988;
        case 0x1b298cu: goto label_1b298c;
        case 0x1b2990u: goto label_1b2990;
        case 0x1b2994u: goto label_1b2994;
        case 0x1b2998u: goto label_1b2998;
        case 0x1b299cu: goto label_1b299c;
        case 0x1b29a0u: goto label_1b29a0;
        case 0x1b29a4u: goto label_1b29a4;
        case 0x1b29a8u: goto label_1b29a8;
        case 0x1b29acu: goto label_1b29ac;
        case 0x1b29b0u: goto label_1b29b0;
        case 0x1b29b4u: goto label_1b29b4;
        case 0x1b29b8u: goto label_1b29b8;
        case 0x1b29bcu: goto label_1b29bc;
        case 0x1b29c0u: goto label_1b29c0;
        case 0x1b29c4u: goto label_1b29c4;
        case 0x1b29c8u: goto label_1b29c8;
        case 0x1b29ccu: goto label_1b29cc;
        case 0x1b29d0u: goto label_1b29d0;
        case 0x1b29d4u: goto label_1b29d4;
        case 0x1b29d8u: goto label_1b29d8;
        case 0x1b29dcu: goto label_1b29dc;
        case 0x1b29e0u: goto label_1b29e0;
        case 0x1b29e4u: goto label_1b29e4;
        case 0x1b29e8u: goto label_1b29e8;
        case 0x1b29ecu: goto label_1b29ec;
        case 0x1b29f0u: goto label_1b29f0;
        case 0x1b29f4u: goto label_1b29f4;
        case 0x1b29f8u: goto label_1b29f8;
        case 0x1b29fcu: goto label_1b29fc;
        case 0x1b2a00u: goto label_1b2a00;
        case 0x1b2a04u: goto label_1b2a04;
        case 0x1b2a08u: goto label_1b2a08;
        case 0x1b2a0cu: goto label_1b2a0c;
        case 0x1b2a10u: goto label_1b2a10;
        case 0x1b2a14u: goto label_1b2a14;
        case 0x1b2a18u: goto label_1b2a18;
        case 0x1b2a1cu: goto label_1b2a1c;
        case 0x1b2a20u: goto label_1b2a20;
        case 0x1b2a24u: goto label_1b2a24;
        case 0x1b2a28u: goto label_1b2a28;
        case 0x1b2a2cu: goto label_1b2a2c;
        case 0x1b2a30u: goto label_1b2a30;
        case 0x1b2a34u: goto label_1b2a34;
        case 0x1b2a38u: goto label_1b2a38;
        case 0x1b2a3cu: goto label_1b2a3c;
        case 0x1b2a40u: goto label_1b2a40;
        case 0x1b2a44u: goto label_1b2a44;
        case 0x1b2a48u: goto label_1b2a48;
        default: break;
    }

    ctx->pc = 0x1b2740u;

label_1b2740:
    // 0x1b2740: 0x27bdfd30  addiu       $sp, $sp, -0x2D0
    ctx->pc = 0x1b2740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966576));
label_1b2744:
    // 0x1b2744: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b2744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1b2748:
    // 0x1b2748: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1b2748u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1b274c:
    // 0x1b274c: 0x27a800dc  addiu       $t0, $sp, 0xDC
    ctx->pc = 0x1b274cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
label_1b2750:
    // 0x1b2750: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1b2750u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_1b2754:
    // 0x1b2754: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1b2754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_1b2758:
    // 0x1b2758: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x1b2758u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b275c:
    // 0x1b275c: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1b275cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1b2760:
    // 0x1b2760: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x1b2760u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1b2764:
    // 0x1b2764: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1b2764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1b2768:
    // 0x1b2768: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1b2768u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b276c:
    // 0x1b276c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1b276cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1b2770:
    // 0x1b2770: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1b2770u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1b2774:
    // 0x1b2774: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1b2774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1b2778:
    // 0x1b2778: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1b2778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1b277c:
    // 0x1b277c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1b277cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1b2780:
    // 0x1b2780: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1b2780u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1b2784:
    // 0x1b2784: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1b2784u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1b2788:
    // 0x1b2788: 0xafa600bc  sw          $a2, 0xBC($sp)
    ctx->pc = 0x1b2788u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 6));
label_1b278c:
    // 0x1b278c: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x1b278cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
label_1b2790:
    // 0x1b2790: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x1b2790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1b2794:
    // 0x1b2794: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x1b2794u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_1b2798:
    // 0x1b2798: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x1b2798u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
label_1b279c:
    // 0x1b279c: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x1b279cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_1b27a0:
    // 0x1b27a0: 0xc5140000  lwc1        $f20, 0x0($t0)
    ctx->pc = 0x1b27a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b27a4:
    // 0x1b27a4: 0xc06c4d8  jal         func_1B1360
label_1b27a8:
    if (ctx->pc == 0x1B27A8u) {
        ctx->pc = 0x1B27A8u;
            // 0x1b27a8: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1B27ACu;
        goto label_1b27ac;
    }
    ctx->pc = 0x1B27A4u;
    SET_GPR_U32(ctx, 31, 0x1B27ACu);
    ctx->pc = 0x1B27A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B27A4u;
            // 0x1b27a8: 0xad020000  sw          $v0, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1360u;
    if (runtime->hasFunction(0x1B1360u)) {
        auto targetFn = runtime->lookupFunction(0x1B1360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B27ACu; }
        if (ctx->pc != 0x1B27ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMatrix__8CEditMapFPA4_fPfi_0x1b1360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B27ACu; }
        if (ctx->pc != 0x1B27ACu) { return; }
    }
    ctx->pc = 0x1B27ACu;
label_1b27ac:
    // 0x1b27ac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b27acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1b27b0:
    // 0x1b27b0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1b27b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1b27b4:
    // 0x1b27b4: 0xafa001a4  sw          $zero, 0x1A4($sp)
    ctx->pc = 0x1b27b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 0));
label_1b27b8:
    // 0x1b27b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1b27b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b27bc:
    // 0x1b27bc: 0xafa301a0  sw          $v1, 0x1A0($sp)
    ctx->pc = 0x1b27bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 3));
label_1b27c0:
    // 0x1b27c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b27c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b27c4:
    // 0x1b27c4: 0xafa301a8  sw          $v1, 0x1A8($sp)
    ctx->pc = 0x1b27c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 3));
label_1b27c8:
    // 0x1b27c8: 0xafa301ac  sw          $v1, 0x1AC($sp)
    ctx->pc = 0x1b27c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 3));
label_1b27cc:
    // 0x1b27cc: 0xafa201b0  sw          $v0, 0x1B0($sp)
    ctx->pc = 0x1b27ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 2));
label_1b27d0:
    // 0x1b27d0: 0xafa001b4  sw          $zero, 0x1B4($sp)
    ctx->pc = 0x1b27d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 0));
label_1b27d4:
    // 0x1b27d4: 0xafa201b8  sw          $v0, 0x1B8($sp)
    ctx->pc = 0x1b27d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 2));
label_1b27d8:
    // 0x1b27d8: 0xafa301bc  sw          $v1, 0x1BC($sp)
    ctx->pc = 0x1b27d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 444), GPR_U32(ctx, 3));
label_1b27dc:
    // 0x1b27dc: 0xafa201c0  sw          $v0, 0x1C0($sp)
    ctx->pc = 0x1b27dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 2));
label_1b27e0:
    // 0x1b27e0: 0xafa001c4  sw          $zero, 0x1C4($sp)
    ctx->pc = 0x1b27e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 0));
label_1b27e4:
    // 0x1b27e4: 0xafa301c8  sw          $v1, 0x1C8($sp)
    ctx->pc = 0x1b27e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 3));
label_1b27e8:
    // 0x1b27e8: 0xafa301cc  sw          $v1, 0x1CC($sp)
    ctx->pc = 0x1b27e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 3));
label_1b27ec:
    // 0x1b27ec: 0xafa301f0  sw          $v1, 0x1F0($sp)
    ctx->pc = 0x1b27ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 3));
label_1b27f0:
    // 0x1b27f0: 0xafa001f4  sw          $zero, 0x1F4($sp)
    ctx->pc = 0x1b27f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 500), GPR_U32(ctx, 0));
label_1b27f4:
    // 0x1b27f4: 0xafa301f8  sw          $v1, 0x1F8($sp)
    ctx->pc = 0x1b27f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 504), GPR_U32(ctx, 3));
label_1b27f8:
    // 0x1b27f8: 0xafa301fc  sw          $v1, 0x1FC($sp)
    ctx->pc = 0x1b27f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 508), GPR_U32(ctx, 3));
label_1b27fc:
    // 0x1b27fc: 0xafa30200  sw          $v1, 0x200($sp)
    ctx->pc = 0x1b27fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 3));
label_1b2800:
    // 0x1b2800: 0xafa00204  sw          $zero, 0x204($sp)
    ctx->pc = 0x1b2800u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 0));
label_1b2804:
    // 0x1b2804: 0xafa20208  sw          $v0, 0x208($sp)
    ctx->pc = 0x1b2804u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 520), GPR_U32(ctx, 2));
label_1b2808:
    // 0x1b2808: 0xafa3020c  sw          $v1, 0x20C($sp)
    ctx->pc = 0x1b2808u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 524), GPR_U32(ctx, 3));
label_1b280c:
    // 0x1b280c: 0xafa3021c  sw          $v1, 0x21C($sp)
    ctx->pc = 0x1b280cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 540), GPR_U32(ctx, 3));
label_1b2810:
    // 0x1b2810: 0xafa20210  sw          $v0, 0x210($sp)
    ctx->pc = 0x1b2810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 528), GPR_U32(ctx, 2));
label_1b2814:
    // 0x1b2814: 0xafa20218  sw          $v0, 0x218($sp)
    ctx->pc = 0x1b2814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 536), GPR_U32(ctx, 2));
label_1b2818:
    // 0x1b2818: 0xafa00214  sw          $zero, 0x214($sp)
    ctx->pc = 0x1b2818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 532), GPR_U32(ctx, 0));
label_1b281c:
    // 0x1b281c: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x1b281cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
label_1b2820:
    // 0x1b2820: 0x245201a0  addiu       $s2, $v0, 0x1A0
    ctx->pc = 0x1b2820u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 416));
label_1b2824:
    // 0x1b2824: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b2824u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1b2828:
    // 0x1b2828: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b2828u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b282c:
    // 0x1b282c: 0xc041e96  jal         func_107A58
label_1b2830:
    if (ctx->pc == 0x1B2830u) {
        ctx->pc = 0x1B2830u;
            // 0x1b2830: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B2834u;
        goto label_1b2834;
    }
    ctx->pc = 0x1B282Cu;
    SET_GPR_U32(ctx, 31, 0x1B2834u);
    ctx->pc = 0x1B2830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B282Cu;
            // 0x1b2830: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A58u;
    if (runtime->hasFunction(0x107A58u)) {
        auto targetFn = runtime->lookupFunction(0x107A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2834u; }
        if (ctx->pc != 0x1B2834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVectorXYZ_0x107a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2834u; }
        if (ctx->pc != 0x1B2834u) { return; }
    }
    ctx->pc = 0x1B2834u;
label_1b2834:
    // 0x1b2834: 0x26440050  addiu       $a0, $s2, 0x50
    ctx->pc = 0x1b2834u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
label_1b2838:
    // 0x1b2838: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1b2838u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1b283c:
    // 0x1b283c: 0xc041e96  jal         func_107A58
label_1b2840:
    if (ctx->pc == 0x1B2840u) {
        ctx->pc = 0x1B2840u;
            // 0x1b2840: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B2844u;
        goto label_1b2844;
    }
    ctx->pc = 0x1B283Cu;
    SET_GPR_U32(ctx, 31, 0x1B2844u);
    ctx->pc = 0x1B2840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B283Cu;
            // 0x1b2840: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A58u;
    if (runtime->hasFunction(0x107A58u)) {
        auto targetFn = runtime->lookupFunction(0x107A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2844u; }
        if (ctx->pc != 0x1B2844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVectorXYZ_0x107a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2844u; }
        if (ctx->pc != 0x1B2844u) { return; }
    }
    ctx->pc = 0x1B2844u;
label_1b2844:
    // 0x1b2844: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b2844u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b2848:
    // 0x1b2848: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x1b2848u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_1b284c:
    // 0x1b284c: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_1b2850:
    if (ctx->pc == 0x1B2850u) {
        ctx->pc = 0x1B2850u;
            // 0x1b2850: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x1B2854u;
        goto label_1b2854;
    }
    ctx->pc = 0x1B284Cu;
    {
        const bool branch_taken_0x1b284c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B2850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B284Cu;
            // 0x1b2850: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b284c) {
            ctx->pc = 0x1B281Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b281c;
        }
    }
    ctx->pc = 0x1B2854u;
label_1b2854:
    // 0x1b2854: 0x17082a  slt         $at, $zero, $s7
    ctx->pc = 0x1b2854u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_1b2858:
    // 0x1b2858: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1b2858u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b285c:
    // 0x1b285c: 0x10200066  beqz        $at, . + 4 + (0x66 << 2)
label_1b2860:
    if (ctx->pc == 0x1B2860u) {
        ctx->pc = 0x1B2860u;
            // 0x1b2860: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B2864u;
        goto label_1b2864;
    }
    ctx->pc = 0x1B285Cu;
    {
        const bool branch_taken_0x1b285c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B2860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B285Cu;
            // 0x1b2860: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b285c) {
            ctx->pc = 0x1B29F8u;
            goto label_1b29f8;
        }
    }
    ctx->pc = 0x1B2864u;
label_1b2864:
    // 0x1b2864: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1b2864u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b2868:
    // 0x1b2868: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x1b2868u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_1b286c:
    // 0x1b286c: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x1b286cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1b2870:
    // 0x1b2870: 0x8c520000  lw          $s2, 0x0($v0)
    ctx->pc = 0x1b2870u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1b2874:
    // 0x1b2874: 0x82420070  lb          $v0, 0x70($s2)
    ctx->pc = 0x1b2874u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 112)));
label_1b2878:
    // 0x1b2878: 0x401026  xor         $v0, $v0, $zero
    ctx->pc = 0x1b2878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 0));
label_1b287c:
    // 0x1b287c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x1b287cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_1b2880:
    // 0x1b2880: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
label_1b2884:
    if (ctx->pc == 0x1B2884u) {
        ctx->pc = 0x1B2888u;
        goto label_1b2888;
    }
    ctx->pc = 0x1B2880u;
    {
        const bool branch_taken_0x1b2880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2880) {
            ctx->pc = 0x1B29E8u;
            goto label_1b29e8;
        }
    }
    ctx->pc = 0x1B2888u;
label_1b2888:
    // 0x1b2888: 0x8e560324  lw          $s6, 0x324($s2)
    ctx->pc = 0x1b2888u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 804)));
label_1b288c:
    // 0x1b288c: 0x12c00056  beqz        $s6, . + 4 + (0x56 << 2)
label_1b2890:
    if (ctx->pc == 0x1B2890u) {
        ctx->pc = 0x1B2894u;
        goto label_1b2894;
    }
    ctx->pc = 0x1B288Cu;
    {
        const bool branch_taken_0x1b288c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b288c) {
            ctx->pc = 0x1B29E8u;
            goto label_1b29e8;
        }
    }
    ctx->pc = 0x1B2894u;
label_1b2894:
    // 0x1b2894: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x1b2894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_1b2898:
    // 0x1b2898: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1b2898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_1b289c:
    // 0x1b289c: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
label_1b28a0:
    if (ctx->pc == 0x1B28A0u) {
        ctx->pc = 0x1B28A4u;
        goto label_1b28a4;
    }
    ctx->pc = 0x1B289Cu;
    {
        const bool branch_taken_0x1b289c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b289c) {
            ctx->pc = 0x1B29E8u;
            goto label_1b29e8;
        }
    }
    ctx->pc = 0x1B28A4u;
label_1b28a4:
    // 0x1b28a4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1b28a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b28a8:
    // 0x1b28a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b28a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b28ac:
    // 0x1b28ac: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1b28acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1b28b0:
    // 0x1b28b0: 0x320f809  jalr        $t9
label_1b28b4:
    if (ctx->pc == 0x1B28B4u) {
        ctx->pc = 0x1B28B4u;
            // 0x1b28b4: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->pc = 0x1B28B8u;
        goto label_1b28b8;
    }
    ctx->pc = 0x1B28B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B28B8u);
        ctx->pc = 0x1B28B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B28B0u;
            // 0x1b28b4: 0x27a50250  addiu       $a1, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B28B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B28B8u; }
            if (ctx->pc != 0x1B28B8u) { return; }
        }
        }
    }
    ctx->pc = 0x1B28B8u;
label_1b28b8:
    // 0x1b28b8: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1b28b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1b28bc:
    // 0x1b28bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1b28bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b28c0:
    // 0x1b28c0: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1b28c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1b28c4:
    // 0x1b28c4: 0x320f809  jalr        $t9
label_1b28c8:
    if (ctx->pc == 0x1B28C8u) {
        ctx->pc = 0x1B28C8u;
            // 0x1b28c8: 0x27a50260  addiu       $a1, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->pc = 0x1B28CCu;
        goto label_1b28cc;
    }
    ctx->pc = 0x1B28C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1B28CCu);
        ctx->pc = 0x1B28C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B28C4u;
            // 0x1b28c8: 0x27a50260  addiu       $a1, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1B28CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1B28CCu; }
            if (ctx->pc != 0x1B28CCu) { return; }
        }
        }
    }
    ctx->pc = 0x1B28CCu;
label_1b28cc:
    // 0x1b28cc: 0x27b30264  addiu       $s3, $sp, 0x264
    ctx->pc = 0x1b28ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 612));
label_1b28d0:
    // 0x1b28d0: 0xc66c0000  lwc1        $f12, 0x0($s3)
    ctx->pc = 0x1b28d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1b28d4:
    // 0x1b28d4: 0xc06c3d4  jal         func_1B0F50
label_1b28d8:
    if (ctx->pc == 0x1B28D8u) {
        ctx->pc = 0x1B28D8u;
            // 0x1b28d8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1B28DCu;
        goto label_1b28dc;
    }
    ctx->pc = 0x1B28D4u;
    SET_GPR_U32(ctx, 31, 0x1B28DCu);
    ctx->pc = 0x1B28D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B28D4u;
            // 0x1b28d8: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B0F50u;
    if (runtime->hasFunction(0x1B0F50u)) {
        auto targetFn = runtime->lookupFunction(0x1B0F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B28DCu; }
        if (ctx->pc != 0x1B28DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvEditAngle__8CEditMapFf_0x1b0f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B28DCu; }
        if (ctx->pc != 0x1B28DCu) { return; }
    }
    ctx->pc = 0x1B28DCu;
label_1b28dc:
    // 0x1b28dc: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1b28dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1b28e0:
    // 0x1b28e0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1b28e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1b28e4:
    // 0x1b28e4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x1b28e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1b28e8:
    // 0x1b28e8: 0xc06c4d8  jal         func_1B1360
label_1b28ec:
    if (ctx->pc == 0x1B28ECu) {
        ctx->pc = 0x1B28ECu;
            // 0x1b28ec: 0x27a60250  addiu       $a2, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->pc = 0x1B28F0u;
        goto label_1b28f0;
    }
    ctx->pc = 0x1B28E8u;
    SET_GPR_U32(ctx, 31, 0x1B28F0u);
    ctx->pc = 0x1B28ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B28E8u;
            // 0x1b28ec: 0x27a60250  addiu       $a2, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B1360u;
    if (runtime->hasFunction(0x1B1360u)) {
        auto targetFn = runtime->lookupFunction(0x1B1360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B28F0u; }
        if (ctx->pc != 0x1B28F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMatrix__8CEditMapFPA4_fPfi_0x1b1360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B28F0u; }
        if (ctx->pc != 0x1B28F0u) { return; }
    }
    ctx->pc = 0x1B28F0u;
label_1b28f0:
    // 0x1b28f0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1b28f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1b28f4:
    // 0x1b28f4: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1b28f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1b28f8:
    // 0x1b28f8: 0xc06c4ec  jal         func_1B13B0
label_1b28fc:
    if (ctx->pc == 0x1B28FCu) {
        ctx->pc = 0x1B28FCu;
            // 0x1b28fc: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x1B2900u;
        goto label_1b2900;
    }
    ctx->pc = 0x1B28F8u;
    SET_GPR_U32(ctx, 31, 0x1B2900u);
    ctx->pc = 0x1B28FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B28F8u;
            // 0x1b28fc: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B13B0u;
    if (runtime->hasFunction(0x1B13B0u)) {
        auto targetFn = runtime->lookupFunction(0x1B13B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2900u; }
        if (ctx->pc != 0x1B2900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetInversMatrix__8CEditMapFPA4_fPA4_f_0x1b13b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2900u; }
        if (ctx->pc != 0x1B2900u) { return; }
    }
    ctx->pc = 0x1B2900u;
label_1b2900:
    // 0x1b2900: 0x27a40240  addiu       $a0, $sp, 0x240
    ctx->pc = 0x1b2900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_1b2904:
    // 0x1b2904: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1b2904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1b2908:
    // 0x1b2908: 0xc041c3e  jal         func_1070F8
label_1b290c:
    if (ctx->pc == 0x1B290Cu) {
        ctx->pc = 0x1B290Cu;
            // 0x1b290c: 0x27a60250  addiu       $a2, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->pc = 0x1B2910u;
        goto label_1b2910;
    }
    ctx->pc = 0x1B2908u;
    SET_GPR_U32(ctx, 31, 0x1B2910u);
    ctx->pc = 0x1B290Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2908u;
            // 0x1b290c: 0x27a60250  addiu       $a2, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2910u; }
        if (ctx->pc != 0x1B2910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2910u; }
        if (ctx->pc != 0x1B2910u) { return; }
    }
    ctx->pc = 0x1B2910u;
label_1b2910:
    // 0x1b2910: 0xc6600000  lwc1        $f0, 0x0($s3)
    ctx->pc = 0x1b2910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b2914:
    // 0x1b2914: 0xc04c374  jal         func_130DD0
label_1b2918:
    if (ctx->pc == 0x1B2918u) {
        ctx->pc = 0x1B2918u;
            // 0x1b2918: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x1B291Cu;
        goto label_1b291c;
    }
    ctx->pc = 0x1B2914u;
    SET_GPR_U32(ctx, 31, 0x1B291Cu);
    ctx->pc = 0x1B2918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2914u;
            // 0x1b2918: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B291Cu; }
        if (ctx->pc != 0x1B291Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B291Cu; }
        if (ctx->pc != 0x1B291Cu) { return; }
    }
    ctx->pc = 0x1B291Cu;
label_1b291c:
    // 0x1b291c: 0x27b301a0  addiu       $s3, $sp, 0x1A0
    ctx->pc = 0x1b291cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_1b2920:
    // 0x1b2920: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1b2920u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1b2924:
    // 0x1b2924: 0x0  nop
    ctx->pc = 0x1b2924u;
    // NOP
label_1b2928:
    // 0x1b2928: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x1b2928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_1b292c:
    // 0x1b292c: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x1b292cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_1b2930:
    // 0x1b2930: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1b2930u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1b2934:
    // 0x1b2934: 0xc04c228  jal         func_1308A0
label_1b2938:
    if (ctx->pc == 0x1B2938u) {
        ctx->pc = 0x1B2938u;
            // 0x1b2938: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1B293Cu;
        goto label_1b293c;
    }
    ctx->pc = 0x1B2934u;
    SET_GPR_U32(ctx, 31, 0x1B293Cu);
    ctx->pc = 0x1B2938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2934u;
            // 0x1b2938: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1308A0u;
    if (runtime->hasFunction(0x1308A0u)) {
        auto targetFn = runtime->lookupFunction(0x1308A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B293Cu; }
        if (ctx->pc != 0x1B293Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgApplyMatrixN__FPA4_fPA4_fPA4_fi_0x1308a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B293Cu; }
        if (ctx->pc != 0x1B293Cu) { return; }
    }
    ctx->pc = 0x1B293Cu;
label_1b293c:
    // 0x1b293c: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x1b293cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_1b2940:
    // 0x1b2940: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x1b2940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1b2944:
    // 0x1b2944: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x1b2944u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1b2948:
    // 0x1b2948: 0xc04c228  jal         func_1308A0
label_1b294c:
    if (ctx->pc == 0x1B294Cu) {
        ctx->pc = 0x1B294Cu;
            // 0x1b294c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1B2950u;
        goto label_1b2950;
    }
    ctx->pc = 0x1B2948u;
    SET_GPR_U32(ctx, 31, 0x1B2950u);
    ctx->pc = 0x1B294Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2948u;
            // 0x1b294c: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1308A0u;
    if (runtime->hasFunction(0x1308A0u)) {
        auto targetFn = runtime->lookupFunction(0x1308A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2950u; }
        if (ctx->pc != 0x1B2950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgApplyMatrixN__FPA4_fPA4_fPA4_fi_0x1308a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2950u; }
        if (ctx->pc != 0x1B2950u) { return; }
    }
    ctx->pc = 0x1B2950u;
label_1b2950:
    // 0x1b2950: 0x26c401b0  addiu       $a0, $s6, 0x1B0
    ctx->pc = 0x1b2950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 432));
label_1b2954:
    // 0x1b2954: 0x27a50270  addiu       $a1, $sp, 0x270
    ctx->pc = 0x1b2954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_1b2958:
    // 0x1b2958: 0x27a602cc  addiu       $a2, $sp, 0x2CC
    ctx->pc = 0x1b2958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 716));
label_1b295c:
    // 0x1b295c: 0xc068d50  jal         func_1A3540
label_1b2960:
    if (ctx->pc == 0x1B2960u) {
        ctx->pc = 0x1B2960u;
            // 0x1b2960: 0x27a702a0  addiu       $a3, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->pc = 0x1B2964u;
        goto label_1b2964;
    }
    ctx->pc = 0x1B295Cu;
    SET_GPR_U32(ctx, 31, 0x1B2964u);
    ctx->pc = 0x1B2960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B295Cu;
            // 0x1b2960: 0x27a702a0  addiu       $a3, $sp, 0x2A0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3540u;
    if (runtime->hasFunction(0x1A3540u)) {
        auto targetFn = runtime->lookupFunction(0x1A3540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2964u; }
        if (ctx->pc != 0x1B2964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        OverlapPoly3XZ__14CEditCollisionFPA4_fPfP9mgVu0FBOX_0x1a3540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2964u; }
        if (ctx->pc != 0x1B2964u) { return; }
    }
    ctx->pc = 0x1B2964u;
label_1b2964:
    // 0x1b2964: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_1b2968:
    if (ctx->pc == 0x1B2968u) {
        ctx->pc = 0x1B296Cu;
        goto label_1b296c;
    }
    ctx->pc = 0x1B2964u;
    {
        const bool branch_taken_0x1b2964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2964) {
            ctx->pc = 0x1B29D8u;
            goto label_1b29d8;
        }
    }
    ctx->pc = 0x1B296Cu;
label_1b296c:
    // 0x1b296c: 0xc7a102cc  lwc1        $f1, 0x2CC($sp)
    ctx->pc = 0x1b296cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b2970:
    // 0x1b2970: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1b2970u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b2974:
    // 0x1b2974: 0x0  nop
    ctx->pc = 0x1b2974u;
    // NOP
label_1b2978:
    // 0x1b2978: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1b2978u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b297c:
    // 0x1b297c: 0x0  nop
    ctx->pc = 0x1b297cu;
    // NOP
label_1b2980:
    // 0x1b2980: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1b2984:
    if (ctx->pc == 0x1B2984u) {
        ctx->pc = 0x1B2988u;
        goto label_1b2988;
    }
    ctx->pc = 0x1B2980u;
    {
        const bool branch_taken_0x1b2980 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b2980) {
            ctx->pc = 0x1B298Cu;
            goto label_1b298c;
        }
    }
    ctx->pc = 0x1B2988u;
label_1b2988:
    // 0x1b2988: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1b2988u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1b298c:
    // 0x1b298c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1b298cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1b2990:
    // 0x1b2990: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1b2990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_1b2994:
    // 0x1b2994: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b2994u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1b2998:
    // 0x1b2998: 0x0  nop
    ctx->pc = 0x1b2998u;
    // NOP
label_1b299c:
    // 0x1b299c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1b299cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b29a0:
    // 0x1b29a0: 0x0  nop
    ctx->pc = 0x1b29a0u;
    // NOP
label_1b29a4:
    // 0x1b29a4: 0x4501000c  bc1t        . + 4 + (0xC << 2)
label_1b29a8:
    if (ctx->pc == 0x1B29A8u) {
        ctx->pc = 0x1B29ACu;
        goto label_1b29ac;
    }
    ctx->pc = 0x1B29A4u;
    {
        const bool branch_taken_0x1b29a4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b29a4) {
            ctx->pc = 0x1B29D8u;
            goto label_1b29d8;
        }
    }
    ctx->pc = 0x1B29ACu;
label_1b29ac:
    // 0x1b29ac: 0xc7a102a4  lwc1        $f1, 0x2A4($sp)
    ctx->pc = 0x1b29acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1b29b0:
    // 0x1b29b0: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x1b29b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1b29b4:
    // 0x1b29b4: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_1b29b8:
    if (ctx->pc == 0x1B29B8u) {
        ctx->pc = 0x1B29B8u;
            // 0x1b29b8: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x1B29BCu;
        goto label_1b29bc;
    }
    ctx->pc = 0x1B29B4u;
    {
        const bool branch_taken_0x1b29b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B29B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B29B4u;
            // 0x1b29b8: 0x46000800  add.s       $f0, $f1, $f0 (Delay Slot)
        ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b29b4) {
            ctx->pc = 0x1B29CCu;
            goto label_1b29cc;
        }
    }
    ctx->pc = 0x1B29BCu;
label_1b29bc:
    // 0x1b29bc: 0x46150036  c.le.s      $f0, $f21
    ctx->pc = 0x1b29bcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1b29c0:
    // 0x1b29c0: 0x0  nop
    ctx->pc = 0x1b29c0u;
    // NOP
label_1b29c4:
    // 0x1b29c4: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1b29c8:
    if (ctx->pc == 0x1B29C8u) {
        ctx->pc = 0x1B29CCu;
        goto label_1b29cc;
    }
    ctx->pc = 0x1B29C4u;
    {
        const bool branch_taken_0x1b29c4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1b29c4) {
            ctx->pc = 0x1B29D8u;
            goto label_1b29d8;
        }
    }
    ctx->pc = 0x1B29CCu;
label_1b29cc:
    // 0x1b29cc: 0x0  nop
    ctx->pc = 0x1b29ccu;
    // NOP
label_1b29d0:
    // 0x1b29d0: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1b29d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1b29d4:
    // 0x1b29d4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1b29d4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_1b29d8:
    // 0x1b29d8: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b29d8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_1b29dc:
    // 0x1b29dc: 0x2a820002  slti        $v0, $s4, 0x2
    ctx->pc = 0x1b29dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
label_1b29e0:
    // 0x1b29e0: 0x1440ffd0  bnez        $v0, . + 4 + (-0x30 << 2)
label_1b29e4:
    if (ctx->pc == 0x1B29E4u) {
        ctx->pc = 0x1B29E4u;
            // 0x1b29e4: 0x26730050  addiu       $s3, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->pc = 0x1B29E8u;
        goto label_1b29e8;
    }
    ctx->pc = 0x1B29E0u;
    {
        const bool branch_taken_0x1b29e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B29E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B29E0u;
            // 0x1b29e4: 0x26730050  addiu       $s3, $s3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b29e0) {
            ctx->pc = 0x1B2924u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b2924;
        }
    }
    ctx->pc = 0x1B29E8u;
label_1b29e8:
    // 0x1b29e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1b29e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1b29ec:
    // 0x1b29ec: 0x217102a  slt         $v0, $s0, $s7
    ctx->pc = 0x1b29ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 23)) ? 1 : 0);
label_1b29f0:
    // 0x1b29f0: 0x1440ff9d  bnez        $v0, . + 4 + (-0x63 << 2)
label_1b29f4:
    if (ctx->pc == 0x1B29F4u) {
        ctx->pc = 0x1B29F4u;
            // 0x1b29f4: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x1B29F8u;
        goto label_1b29f8;
    }
    ctx->pc = 0x1B29F0u;
    {
        const bool branch_taken_0x1b29f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1B29F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B29F0u;
            // 0x1b29f4: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b29f0) {
            ctx->pc = 0x1B2868u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1b2868;
        }
    }
    ctx->pc = 0x1B29F8u;
label_1b29f8:
    // 0x1b29f8: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_1b29fc:
    if (ctx->pc == 0x1B29FCu) {
        ctx->pc = 0x1B29FCu;
            // 0x1b29fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1B2A00u;
        goto label_1b2a00;
    }
    ctx->pc = 0x1B29F8u;
    {
        const bool branch_taken_0x1b29f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1B29FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B29F8u;
            // 0x1b29fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1b29f8) {
            ctx->pc = 0x1B2A14u;
            goto label_1b2a14;
        }
    }
    ctx->pc = 0x1B2A00u;
label_1b2a00:
    // 0x1b2a00: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x1b2a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_1b2a04:
    // 0x1b2a04: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1b2a04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1b2a08:
    // 0x1b2a08: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1b2a08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1b2a0c:
    // 0x1b2a0c: 0xc06c4f0  jal         func_1B13C0
label_1b2a10:
    if (ctx->pc == 0x1B2A10u) {
        ctx->pc = 0x1B2A10u;
            // 0x1b2a10: 0xe4550004  swc1        $f21, 0x4($v0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->pc = 0x1B2A14u;
        goto label_1b2a14;
    }
    ctx->pc = 0x1B2A0Cu;
    SET_GPR_U32(ctx, 31, 0x1B2A14u);
    ctx->pc = 0x1B2A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2A0Cu;
            // 0x1b2a10: 0xe4550004  swc1        $f21, 0x4($v0) (Delay Slot)
        { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B13C0u;
    if (runtime->hasFunction(0x1B13C0u)) {
        auto targetFn = runtime->lookupFunction(0x1B13C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2A14u; }
        if (ctx->pc != 0x1B2A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvertParts__8CEditMapFP10CEditParts_0x1b13c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1B2A14u; }
        if (ctx->pc != 0x1B2A14u) { return; }
    }
    ctx->pc = 0x1B2A14u;
label_1b2a14:
    // 0x1b2a14: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1b2a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1b2a18:
    // 0x1b2a18: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1b2a18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1b2a1c:
    // 0x1b2a1c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1b2a1cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1b2a20:
    // 0x1b2a20: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1b2a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1b2a24:
    // 0x1b2a24: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1b2a24u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1b2a28:
    // 0x1b2a28: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1b2a28u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1b2a2c:
    // 0x1b2a2c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1b2a2cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1b2a30:
    // 0x1b2a30: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1b2a30u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1b2a34:
    // 0x1b2a34: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1b2a34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1b2a38:
    // 0x1b2a38: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1b2a38u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1b2a3c:
    // 0x1b2a3c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1b2a3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1b2a40:
    // 0x1b2a40: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1b2a40u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1b2a44:
    // 0x1b2a44: 0x3e00008  jr          $ra
label_1b2a48:
    if (ctx->pc == 0x1B2A48u) {
        ctx->pc = 0x1B2A48u;
            // 0x1b2a48: 0x27bd02d0  addiu       $sp, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->pc = 0x1B2A4Cu;
        goto label_fallthrough_0x1b2a44;
    }
    ctx->pc = 0x1B2A44u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B2A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1B2A44u;
            // 0x1b2a48: 0x27bd02d0  addiu       $sp, $sp, 0x2D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1b2a44:
    ctx->pc = 0x1B2A4Cu;
}
