#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuItemCharaDataLoad__FP9mgCMemoryiPP17MENU_BGREAD_INFO2i
// Address: 0x2b90d0 - 0x2b957c
void MenuItemCharaDataLoad__FP9mgCMemoryiPP17MENU_BGREAD_INFO2i_0x2b90d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuItemCharaDataLoad__FP9mgCMemoryiPP17MENU_BGREAD_INFO2i_0x2b90d0");
#endif

    switch (ctx->pc) {
        case 0x2b90d0u: goto label_2b90d0;
        case 0x2b90d4u: goto label_2b90d4;
        case 0x2b90d8u: goto label_2b90d8;
        case 0x2b90dcu: goto label_2b90dc;
        case 0x2b90e0u: goto label_2b90e0;
        case 0x2b90e4u: goto label_2b90e4;
        case 0x2b90e8u: goto label_2b90e8;
        case 0x2b90ecu: goto label_2b90ec;
        case 0x2b90f0u: goto label_2b90f0;
        case 0x2b90f4u: goto label_2b90f4;
        case 0x2b90f8u: goto label_2b90f8;
        case 0x2b90fcu: goto label_2b90fc;
        case 0x2b9100u: goto label_2b9100;
        case 0x2b9104u: goto label_2b9104;
        case 0x2b9108u: goto label_2b9108;
        case 0x2b910cu: goto label_2b910c;
        case 0x2b9110u: goto label_2b9110;
        case 0x2b9114u: goto label_2b9114;
        case 0x2b9118u: goto label_2b9118;
        case 0x2b911cu: goto label_2b911c;
        case 0x2b9120u: goto label_2b9120;
        case 0x2b9124u: goto label_2b9124;
        case 0x2b9128u: goto label_2b9128;
        case 0x2b912cu: goto label_2b912c;
        case 0x2b9130u: goto label_2b9130;
        case 0x2b9134u: goto label_2b9134;
        case 0x2b9138u: goto label_2b9138;
        case 0x2b913cu: goto label_2b913c;
        case 0x2b9140u: goto label_2b9140;
        case 0x2b9144u: goto label_2b9144;
        case 0x2b9148u: goto label_2b9148;
        case 0x2b914cu: goto label_2b914c;
        case 0x2b9150u: goto label_2b9150;
        case 0x2b9154u: goto label_2b9154;
        case 0x2b9158u: goto label_2b9158;
        case 0x2b915cu: goto label_2b915c;
        case 0x2b9160u: goto label_2b9160;
        case 0x2b9164u: goto label_2b9164;
        case 0x2b9168u: goto label_2b9168;
        case 0x2b916cu: goto label_2b916c;
        case 0x2b9170u: goto label_2b9170;
        case 0x2b9174u: goto label_2b9174;
        case 0x2b9178u: goto label_2b9178;
        case 0x2b917cu: goto label_2b917c;
        case 0x2b9180u: goto label_2b9180;
        case 0x2b9184u: goto label_2b9184;
        case 0x2b9188u: goto label_2b9188;
        case 0x2b918cu: goto label_2b918c;
        case 0x2b9190u: goto label_2b9190;
        case 0x2b9194u: goto label_2b9194;
        case 0x2b9198u: goto label_2b9198;
        case 0x2b919cu: goto label_2b919c;
        case 0x2b91a0u: goto label_2b91a0;
        case 0x2b91a4u: goto label_2b91a4;
        case 0x2b91a8u: goto label_2b91a8;
        case 0x2b91acu: goto label_2b91ac;
        case 0x2b91b0u: goto label_2b91b0;
        case 0x2b91b4u: goto label_2b91b4;
        case 0x2b91b8u: goto label_2b91b8;
        case 0x2b91bcu: goto label_2b91bc;
        case 0x2b91c0u: goto label_2b91c0;
        case 0x2b91c4u: goto label_2b91c4;
        case 0x2b91c8u: goto label_2b91c8;
        case 0x2b91ccu: goto label_2b91cc;
        case 0x2b91d0u: goto label_2b91d0;
        case 0x2b91d4u: goto label_2b91d4;
        case 0x2b91d8u: goto label_2b91d8;
        case 0x2b91dcu: goto label_2b91dc;
        case 0x2b91e0u: goto label_2b91e0;
        case 0x2b91e4u: goto label_2b91e4;
        case 0x2b91e8u: goto label_2b91e8;
        case 0x2b91ecu: goto label_2b91ec;
        case 0x2b91f0u: goto label_2b91f0;
        case 0x2b91f4u: goto label_2b91f4;
        case 0x2b91f8u: goto label_2b91f8;
        case 0x2b91fcu: goto label_2b91fc;
        case 0x2b9200u: goto label_2b9200;
        case 0x2b9204u: goto label_2b9204;
        case 0x2b9208u: goto label_2b9208;
        case 0x2b920cu: goto label_2b920c;
        case 0x2b9210u: goto label_2b9210;
        case 0x2b9214u: goto label_2b9214;
        case 0x2b9218u: goto label_2b9218;
        case 0x2b921cu: goto label_2b921c;
        case 0x2b9220u: goto label_2b9220;
        case 0x2b9224u: goto label_2b9224;
        case 0x2b9228u: goto label_2b9228;
        case 0x2b922cu: goto label_2b922c;
        case 0x2b9230u: goto label_2b9230;
        case 0x2b9234u: goto label_2b9234;
        case 0x2b9238u: goto label_2b9238;
        case 0x2b923cu: goto label_2b923c;
        case 0x2b9240u: goto label_2b9240;
        case 0x2b9244u: goto label_2b9244;
        case 0x2b9248u: goto label_2b9248;
        case 0x2b924cu: goto label_2b924c;
        case 0x2b9250u: goto label_2b9250;
        case 0x2b9254u: goto label_2b9254;
        case 0x2b9258u: goto label_2b9258;
        case 0x2b925cu: goto label_2b925c;
        case 0x2b9260u: goto label_2b9260;
        case 0x2b9264u: goto label_2b9264;
        case 0x2b9268u: goto label_2b9268;
        case 0x2b926cu: goto label_2b926c;
        case 0x2b9270u: goto label_2b9270;
        case 0x2b9274u: goto label_2b9274;
        case 0x2b9278u: goto label_2b9278;
        case 0x2b927cu: goto label_2b927c;
        case 0x2b9280u: goto label_2b9280;
        case 0x2b9284u: goto label_2b9284;
        case 0x2b9288u: goto label_2b9288;
        case 0x2b928cu: goto label_2b928c;
        case 0x2b9290u: goto label_2b9290;
        case 0x2b9294u: goto label_2b9294;
        case 0x2b9298u: goto label_2b9298;
        case 0x2b929cu: goto label_2b929c;
        case 0x2b92a0u: goto label_2b92a0;
        case 0x2b92a4u: goto label_2b92a4;
        case 0x2b92a8u: goto label_2b92a8;
        case 0x2b92acu: goto label_2b92ac;
        case 0x2b92b0u: goto label_2b92b0;
        case 0x2b92b4u: goto label_2b92b4;
        case 0x2b92b8u: goto label_2b92b8;
        case 0x2b92bcu: goto label_2b92bc;
        case 0x2b92c0u: goto label_2b92c0;
        case 0x2b92c4u: goto label_2b92c4;
        case 0x2b92c8u: goto label_2b92c8;
        case 0x2b92ccu: goto label_2b92cc;
        case 0x2b92d0u: goto label_2b92d0;
        case 0x2b92d4u: goto label_2b92d4;
        case 0x2b92d8u: goto label_2b92d8;
        case 0x2b92dcu: goto label_2b92dc;
        case 0x2b92e0u: goto label_2b92e0;
        case 0x2b92e4u: goto label_2b92e4;
        case 0x2b92e8u: goto label_2b92e8;
        case 0x2b92ecu: goto label_2b92ec;
        case 0x2b92f0u: goto label_2b92f0;
        case 0x2b92f4u: goto label_2b92f4;
        case 0x2b92f8u: goto label_2b92f8;
        case 0x2b92fcu: goto label_2b92fc;
        case 0x2b9300u: goto label_2b9300;
        case 0x2b9304u: goto label_2b9304;
        case 0x2b9308u: goto label_2b9308;
        case 0x2b930cu: goto label_2b930c;
        case 0x2b9310u: goto label_2b9310;
        case 0x2b9314u: goto label_2b9314;
        case 0x2b9318u: goto label_2b9318;
        case 0x2b931cu: goto label_2b931c;
        case 0x2b9320u: goto label_2b9320;
        case 0x2b9324u: goto label_2b9324;
        case 0x2b9328u: goto label_2b9328;
        case 0x2b932cu: goto label_2b932c;
        case 0x2b9330u: goto label_2b9330;
        case 0x2b9334u: goto label_2b9334;
        case 0x2b9338u: goto label_2b9338;
        case 0x2b933cu: goto label_2b933c;
        case 0x2b9340u: goto label_2b9340;
        case 0x2b9344u: goto label_2b9344;
        case 0x2b9348u: goto label_2b9348;
        case 0x2b934cu: goto label_2b934c;
        case 0x2b9350u: goto label_2b9350;
        case 0x2b9354u: goto label_2b9354;
        case 0x2b9358u: goto label_2b9358;
        case 0x2b935cu: goto label_2b935c;
        case 0x2b9360u: goto label_2b9360;
        case 0x2b9364u: goto label_2b9364;
        case 0x2b9368u: goto label_2b9368;
        case 0x2b936cu: goto label_2b936c;
        case 0x2b9370u: goto label_2b9370;
        case 0x2b9374u: goto label_2b9374;
        case 0x2b9378u: goto label_2b9378;
        case 0x2b937cu: goto label_2b937c;
        case 0x2b9380u: goto label_2b9380;
        case 0x2b9384u: goto label_2b9384;
        case 0x2b9388u: goto label_2b9388;
        case 0x2b938cu: goto label_2b938c;
        case 0x2b9390u: goto label_2b9390;
        case 0x2b9394u: goto label_2b9394;
        case 0x2b9398u: goto label_2b9398;
        case 0x2b939cu: goto label_2b939c;
        case 0x2b93a0u: goto label_2b93a0;
        case 0x2b93a4u: goto label_2b93a4;
        case 0x2b93a8u: goto label_2b93a8;
        case 0x2b93acu: goto label_2b93ac;
        case 0x2b93b0u: goto label_2b93b0;
        case 0x2b93b4u: goto label_2b93b4;
        case 0x2b93b8u: goto label_2b93b8;
        case 0x2b93bcu: goto label_2b93bc;
        case 0x2b93c0u: goto label_2b93c0;
        case 0x2b93c4u: goto label_2b93c4;
        case 0x2b93c8u: goto label_2b93c8;
        case 0x2b93ccu: goto label_2b93cc;
        case 0x2b93d0u: goto label_2b93d0;
        case 0x2b93d4u: goto label_2b93d4;
        case 0x2b93d8u: goto label_2b93d8;
        case 0x2b93dcu: goto label_2b93dc;
        case 0x2b93e0u: goto label_2b93e0;
        case 0x2b93e4u: goto label_2b93e4;
        case 0x2b93e8u: goto label_2b93e8;
        case 0x2b93ecu: goto label_2b93ec;
        case 0x2b93f0u: goto label_2b93f0;
        case 0x2b93f4u: goto label_2b93f4;
        case 0x2b93f8u: goto label_2b93f8;
        case 0x2b93fcu: goto label_2b93fc;
        case 0x2b9400u: goto label_2b9400;
        case 0x2b9404u: goto label_2b9404;
        case 0x2b9408u: goto label_2b9408;
        case 0x2b940cu: goto label_2b940c;
        case 0x2b9410u: goto label_2b9410;
        case 0x2b9414u: goto label_2b9414;
        case 0x2b9418u: goto label_2b9418;
        case 0x2b941cu: goto label_2b941c;
        case 0x2b9420u: goto label_2b9420;
        case 0x2b9424u: goto label_2b9424;
        case 0x2b9428u: goto label_2b9428;
        case 0x2b942cu: goto label_2b942c;
        case 0x2b9430u: goto label_2b9430;
        case 0x2b9434u: goto label_2b9434;
        case 0x2b9438u: goto label_2b9438;
        case 0x2b943cu: goto label_2b943c;
        case 0x2b9440u: goto label_2b9440;
        case 0x2b9444u: goto label_2b9444;
        case 0x2b9448u: goto label_2b9448;
        case 0x2b944cu: goto label_2b944c;
        case 0x2b9450u: goto label_2b9450;
        case 0x2b9454u: goto label_2b9454;
        case 0x2b9458u: goto label_2b9458;
        case 0x2b945cu: goto label_2b945c;
        case 0x2b9460u: goto label_2b9460;
        case 0x2b9464u: goto label_2b9464;
        case 0x2b9468u: goto label_2b9468;
        case 0x2b946cu: goto label_2b946c;
        case 0x2b9470u: goto label_2b9470;
        case 0x2b9474u: goto label_2b9474;
        case 0x2b9478u: goto label_2b9478;
        case 0x2b947cu: goto label_2b947c;
        case 0x2b9480u: goto label_2b9480;
        case 0x2b9484u: goto label_2b9484;
        case 0x2b9488u: goto label_2b9488;
        case 0x2b948cu: goto label_2b948c;
        case 0x2b9490u: goto label_2b9490;
        case 0x2b9494u: goto label_2b9494;
        case 0x2b9498u: goto label_2b9498;
        case 0x2b949cu: goto label_2b949c;
        case 0x2b94a0u: goto label_2b94a0;
        case 0x2b94a4u: goto label_2b94a4;
        case 0x2b94a8u: goto label_2b94a8;
        case 0x2b94acu: goto label_2b94ac;
        case 0x2b94b0u: goto label_2b94b0;
        case 0x2b94b4u: goto label_2b94b4;
        case 0x2b94b8u: goto label_2b94b8;
        case 0x2b94bcu: goto label_2b94bc;
        case 0x2b94c0u: goto label_2b94c0;
        case 0x2b94c4u: goto label_2b94c4;
        case 0x2b94c8u: goto label_2b94c8;
        case 0x2b94ccu: goto label_2b94cc;
        case 0x2b94d0u: goto label_2b94d0;
        case 0x2b94d4u: goto label_2b94d4;
        case 0x2b94d8u: goto label_2b94d8;
        case 0x2b94dcu: goto label_2b94dc;
        case 0x2b94e0u: goto label_2b94e0;
        case 0x2b94e4u: goto label_2b94e4;
        case 0x2b94e8u: goto label_2b94e8;
        case 0x2b94ecu: goto label_2b94ec;
        case 0x2b94f0u: goto label_2b94f0;
        case 0x2b94f4u: goto label_2b94f4;
        case 0x2b94f8u: goto label_2b94f8;
        case 0x2b94fcu: goto label_2b94fc;
        case 0x2b9500u: goto label_2b9500;
        case 0x2b9504u: goto label_2b9504;
        case 0x2b9508u: goto label_2b9508;
        case 0x2b950cu: goto label_2b950c;
        case 0x2b9510u: goto label_2b9510;
        case 0x2b9514u: goto label_2b9514;
        case 0x2b9518u: goto label_2b9518;
        case 0x2b951cu: goto label_2b951c;
        case 0x2b9520u: goto label_2b9520;
        case 0x2b9524u: goto label_2b9524;
        case 0x2b9528u: goto label_2b9528;
        case 0x2b952cu: goto label_2b952c;
        case 0x2b9530u: goto label_2b9530;
        case 0x2b9534u: goto label_2b9534;
        case 0x2b9538u: goto label_2b9538;
        case 0x2b953cu: goto label_2b953c;
        case 0x2b9540u: goto label_2b9540;
        case 0x2b9544u: goto label_2b9544;
        case 0x2b9548u: goto label_2b9548;
        case 0x2b954cu: goto label_2b954c;
        case 0x2b9550u: goto label_2b9550;
        case 0x2b9554u: goto label_2b9554;
        case 0x2b9558u: goto label_2b9558;
        case 0x2b955cu: goto label_2b955c;
        case 0x2b9560u: goto label_2b9560;
        case 0x2b9564u: goto label_2b9564;
        case 0x2b9568u: goto label_2b9568;
        case 0x2b956cu: goto label_2b956c;
        case 0x2b9570u: goto label_2b9570;
        case 0x2b9574u: goto label_2b9574;
        case 0x2b9578u: goto label_2b9578;
        default: break;
    }

    ctx->pc = 0x2b90d0u;

label_2b90d0:
    // 0x2b90d0: 0x27bdfda0  addiu       $sp, $sp, -0x260
    ctx->pc = 0x2b90d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966688));
label_2b90d4:
    // 0x2b90d4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2b90d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_2b90d8:
    // 0x2b90d8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2b90d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2b90dc:
    // 0x2b90dc: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2b90dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2b90e0:
    // 0x2b90e0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2b90e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2b90e4:
    // 0x2b90e4: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2b90e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2b90e8:
    // 0x2b90e8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2b90e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2b90ec:
    // 0x2b90ec: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2b90ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2b90f0:
    // 0x2b90f0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2b90f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b90f4:
    // 0x2b90f4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b90f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2b90f8:
    // 0x2b90f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b90f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2b90fc:
    // 0x2b90fc: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2b90fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2b9100:
    // 0x2b9100: 0x10e00011  beqz        $a3, . + 4 + (0x11 << 2)
label_2b9104:
    if (ctx->pc == 0x2B9104u) {
        ctx->pc = 0x2B9104u;
            // 0x2b9104: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x2B9108u;
        goto label_2b9108;
    }
    ctx->pc = 0x2B9100u;
    {
        const bool branch_taken_0x2b9100 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9100u;
            // 0x2b9104: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9100) {
            ctx->pc = 0x2B9148u;
            goto label_2b9148;
        }
    }
    ctx->pc = 0x2B9108u;
label_2b9108:
    // 0x2b9108: 0xc0523b8  jal         func_148EE0
label_2b910c:
    if (ctx->pc == 0x2B910Cu) {
        ctx->pc = 0x2B9110u;
        goto label_2b9110;
    }
    ctx->pc = 0x2B9108u;
    SET_GPR_U32(ctx, 31, 0x2B9110u);
    ctx->pc = 0x148EE0u;
    if (runtime->hasFunction(0x148EE0u)) {
        auto targetFn = runtime->lookupFunction(0x148EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9110u; }
        if (ctx->pc != 0x2B9110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BreakReadBG__Fv_0x148ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9110u; }
        if (ctx->pc != 0x2B9110u) { return; }
    }
    ctx->pc = 0x2B9110u;
label_2b9110:
    // 0x2b9110: 0xc052330  jal         func_148CC0
label_2b9114:
    if (ctx->pc == 0x2B9114u) {
        ctx->pc = 0x2B9118u;
        goto label_2b9118;
    }
    ctx->pc = 0x2B9110u;
    SET_GPR_U32(ctx, 31, 0x2B9118u);
    ctx->pc = 0x148CC0u;
    if (runtime->hasFunction(0x148CC0u)) {
        auto targetFn = runtime->lookupFunction(0x148CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9118u; }
        if (ctx->pc != 0x2B9118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartReadBG__Fv_0x148cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9118u; }
        if (ctx->pc != 0x2B9118u) { return; }
    }
    ctx->pc = 0x2B9118u;
label_2b9118:
    // 0x2b9118: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2b9118u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b911c:
    // 0x2b911c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2b911cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9120:
    // 0x2b9120: 0x2c41021  addu        $v0, $s6, $a0
    ctx->pc = 0x2b9120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 4)));
label_2b9124:
    // 0x2b9124: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b9124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b9128:
    // 0x2b9128: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2b912c:
    if (ctx->pc == 0x2B912Cu) {
        ctx->pc = 0x2B9130u;
        goto label_2b9130;
    }
    ctx->pc = 0x2B9128u;
    {
        const bool branch_taken_0x2b9128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9128) {
            ctx->pc = 0x2B9134u;
            goto label_2b9134;
        }
    }
    ctx->pc = 0x2B9130u;
label_2b9130:
    // 0x2b9130: 0xa0400070  sb          $zero, 0x70($v0)
    ctx->pc = 0x2b9130u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 0));
label_2b9134:
    // 0x2b9134: 0x0  nop
    ctx->pc = 0x2b9134u;
    // NOP
label_2b9138:
    // 0x2b9138: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2b9138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2b913c:
    // 0x2b913c: 0x28620007  slti        $v0, $v1, 0x7
    ctx->pc = 0x2b913cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)7) ? 1 : 0);
label_2b9140:
    // 0x2b9140: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_2b9144:
    if (ctx->pc == 0x2B9144u) {
        ctx->pc = 0x2B9144u;
            // 0x2b9144: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x2B9148u;
        goto label_2b9148;
    }
    ctx->pc = 0x2B9140u;
    {
        const bool branch_taken_0x2b9140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9140u;
            // 0x2b9144: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9140) {
            ctx->pc = 0x2B9120u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b9120;
        }
    }
    ctx->pc = 0x2B9148u;
label_2b9148:
    // 0x2b9148: 0x6400003  bltz        $s2, . + 4 + (0x3 << 2)
label_2b914c:
    if (ctx->pc == 0x2B914Cu) {
        ctx->pc = 0x2B914Cu;
            // 0x2b914c: 0x2a410002  slti        $at, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->pc = 0x2B9150u;
        goto label_2b9150;
    }
    ctx->pc = 0x2B9148u;
    {
        const bool branch_taken_0x2b9148 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x2B914Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9148u;
            // 0x2b914c: 0x2a410002  slti        $at, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9148) {
            ctx->pc = 0x2B9158u;
            goto label_2b9158;
        }
    }
    ctx->pc = 0x2B9150u;
label_2b9150:
    // 0x2b9150: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_2b9154:
    if (ctx->pc == 0x2B9154u) {
        ctx->pc = 0x2B9154u;
            // 0x2b9154: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9158u;
        goto label_2b9158;
    }
    ctx->pc = 0x2B9150u;
    {
        const bool branch_taken_0x2b9150 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9150u;
            // 0x2b9154: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9150) {
            ctx->pc = 0x2B9160u;
            goto label_2b9160;
        }
    }
    ctx->pc = 0x2B9158u;
label_2b9158:
    // 0x2b9158: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b9158u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b915c:
    // 0x2b915c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2b915cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2b9160:
    // 0x2b9160: 0xc04e780  jal         func_139E00
label_2b9164:
    if (ctx->pc == 0x2B9164u) {
        ctx->pc = 0x2B9168u;
        goto label_2b9168;
    }
    ctx->pc = 0x2B9160u;
    SET_GPR_U32(ctx, 31, 0x2B9168u);
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9168u; }
        if (ctx->pc != 0x2B9168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9168u; }
        if (ctx->pc != 0x2B9168u) { return; }
    }
    ctx->pc = 0x2B9168u;
label_2b9168:
    // 0x2b9168: 0xc78084d0  lwc1        $f0, -0x7B30($gp)
    ctx->pc = 0x2b9168u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935760)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2b916c:
    // 0x2b916c: 0x878584d4  lh          $a1, -0x7B2C($gp)
    ctx->pc = 0x2b916cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935764)));
label_2b9170:
    // 0x2b9170: 0x938384d6  lbu         $v1, -0x7B2A($gp)
    ctx->pc = 0x2b9170u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935766)));
label_2b9174:
    // 0x2b9174: 0x27a60250  addiu       $a2, $sp, 0x250
    ctx->pc = 0x2b9174u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_2b9178:
    // 0x2b9178: 0x129880  sll         $s3, $s2, 2
    ctx->pc = 0x2b9178u;
    SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_2b917c:
    // 0x2b917c: 0x278284c0  addiu       $v0, $gp, -0x7B40
    ctx->pc = 0x2b917cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935744));
label_2b9180:
    // 0x2b9180: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2b9180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2b9184:
    // 0x2b9184: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x2b9184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
label_2b9188:
    // 0x2b9188: 0xa4c50004  sh          $a1, 0x4($a2)
    ctx->pc = 0x2b9188u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 4), (uint16_t)GPR_U32(ctx, 5));
label_2b918c:
    // 0x2b918c: 0xa0c30006  sb          $v1, 0x6($a2)
    ctx->pc = 0x2b918cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 6), (uint8_t)GPR_U32(ctx, 3));
label_2b9190:
    // 0x2b9190: 0xa3a00090  sb          $zero, 0x90($sp)
    ctx->pc = 0x2b9190u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 0));
label_2b9194:
    // 0x2b9194: 0xa3a000d0  sb          $zero, 0xD0($sp)
    ctx->pc = 0x2b9194u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 208), (uint8_t)GPR_U32(ctx, 0));
label_2b9198:
    // 0x2b9198: 0xa3a00110  sb          $zero, 0x110($sp)
    ctx->pc = 0x2b9198u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 272), (uint8_t)GPR_U32(ctx, 0));
label_2b919c:
    // 0x2b919c: 0xa3a00150  sb          $zero, 0x150($sp)
    ctx->pc = 0x2b919cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 336), (uint8_t)GPR_U32(ctx, 0));
label_2b91a0:
    // 0x2b91a0: 0xa3a00190  sb          $zero, 0x190($sp)
    ctx->pc = 0x2b91a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 400), (uint8_t)GPR_U32(ctx, 0));
label_2b91a4:
    // 0x2b91a4: 0xa3a001d0  sb          $zero, 0x1D0($sp)
    ctx->pc = 0x2b91a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 464), (uint8_t)GPR_U32(ctx, 0));
label_2b91a8:
    // 0x2b91a8: 0xa3a00210  sb          $zero, 0x210($sp)
    ctx->pc = 0x2b91a8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 528), (uint8_t)GPR_U32(ctx, 0));
label_2b91ac:
    // 0x2b91ac: 0xa3929b73  sb          $s2, -0x648D($gp)
    ctx->pc = 0x2b91acu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941555), (uint8_t)GPR_U32(ctx, 18));
label_2b91b0:
    // 0x2b91b0: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2b91b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b91b4:
    // 0x2b91b4: 0xc04a3dc  jal         func_128F70
label_2b91b8:
    if (ctx->pc == 0x2B91B8u) {
        ctx->pc = 0x2B91B8u;
            // 0x2b91b8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x2B91BCu;
        goto label_2b91bc;
    }
    ctx->pc = 0x2B91B4u;
    SET_GPR_U32(ctx, 31, 0x2B91BCu);
    ctx->pc = 0x2B91B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B91B4u;
            // 0x2b91b8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B91BCu; }
        if (ctx->pc != 0x2B91BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B91BCu; }
        if (ctx->pc != 0x2B91BCu) { return; }
    }
    ctx->pc = 0x2B91BCu;
label_2b91bc:
    // 0x2b91bc: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2b91bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2b91c0:
    // 0x2b91c0: 0x8424cc18  lh          $a0, -0x33E8($at)
    ctx->pc = 0x2b91c0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294954008)));
label_2b91c4:
    // 0x2b91c4: 0xc06571c  jal         func_195C70
label_2b91c8:
    if (ctx->pc == 0x2B91C8u) {
        ctx->pc = 0x2B91C8u;
            // 0x2b91c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B91CCu;
        goto label_2b91cc;
    }
    ctx->pc = 0x2B91C4u;
    SET_GPR_U32(ctx, 31, 0x2B91CCu);
    ctx->pc = 0x2B91C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B91C4u;
            // 0x2b91c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C70u;
    if (runtime->hasFunction(0x195C70u)) {
        auto targetFn = runtime->lookupFunction(0x195C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B91CCu; }
        if (ctx->pc != 0x2B91CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemFileName__Fii_0x195c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B91CCu; }
        if (ctx->pc != 0x2B91CCu) { return; }
    }
    ctx->pc = 0x2B91CCu;
label_2b91cc:
    // 0x2b91cc: 0x27b000d0  addiu       $s0, $sp, 0xD0
    ctx->pc = 0x2b91ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2b91d0:
    // 0x2b91d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b91d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b91d4:
    // 0x2b91d4: 0xc04a3dc  jal         func_128F70
label_2b91d8:
    if (ctx->pc == 0x2B91D8u) {
        ctx->pc = 0x2B91D8u;
            // 0x2b91d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B91DCu;
        goto label_2b91dc;
    }
    ctx->pc = 0x2B91D4u;
    SET_GPR_U32(ctx, 31, 0x2B91DCu);
    ctx->pc = 0x2B91D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B91D4u;
            // 0x2b91d8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B91DCu; }
        if (ctx->pc != 0x2B91DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B91DCu; }
        if (ctx->pc != 0x2B91DCu) { return; }
    }
    ctx->pc = 0x2B91DCu;
label_2b91dc:
    // 0x2b91dc: 0x83839b70  lb          $v1, -0x6490($gp)
    ctx->pc = 0x2b91dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941552)));
label_2b91e0:
    // 0x2b91e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2b91e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b91e4:
    // 0x2b91e4: 0x10620052  beq         $v1, $v0, . + 4 + (0x52 << 2)
label_2b91e8:
    if (ctx->pc == 0x2B91E8u) {
        ctx->pc = 0x2B91E8u;
            // 0x2b91e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B91ECu;
        goto label_2b91ec;
    }
    ctx->pc = 0x2B91E4u;
    {
        const bool branch_taken_0x2b91e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B91E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B91E4u;
            // 0x2b91e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b91e4) {
            ctx->pc = 0x2B9330u;
            goto label_2b9330;
        }
    }
    ctx->pc = 0x2B91ECu;
label_2b91ec:
    // 0x2b91ec: 0x10620037  beq         $v1, $v0, . + 4 + (0x37 << 2)
label_2b91f0:
    if (ctx->pc == 0x2B91F0u) {
        ctx->pc = 0x2B91F0u;
            // 0x2b91f0: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2B91F4u;
        goto label_2b91f4;
    }
    ctx->pc = 0x2B91ECu;
    {
        const bool branch_taken_0x2b91ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B91F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B91ECu;
            // 0x2b91f0: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b91ec) {
            ctx->pc = 0x2B92CCu;
            goto label_2b92cc;
        }
    }
    ctx->pc = 0x2B91F4u;
label_2b91f4:
    // 0x2b91f4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2b91f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2b91f8:
    // 0x2b91f8: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2b91fc:
    if (ctx->pc == 0x2B91FCu) {
        ctx->pc = 0x2B91FCu;
            // 0x2b91fc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2B9200u;
        goto label_2b9200;
    }
    ctx->pc = 0x2B91F8u;
    {
        const bool branch_taken_0x2b91f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2B91FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B91F8u;
            // 0x2b91fc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b91f8) {
            ctx->pc = 0x2B9210u;
            goto label_2b9210;
        }
    }
    ctx->pc = 0x2B9200u;
label_2b9200:
    // 0x2b9200: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2b9204:
    if (ctx->pc == 0x2B9204u) {
        ctx->pc = 0x2B9208u;
        goto label_2b9208;
    }
    ctx->pc = 0x2B9200u;
    {
        const bool branch_taken_0x2b9200 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9200) {
            ctx->pc = 0x2B9210u;
            goto label_2b9210;
        }
    }
    ctx->pc = 0x2B9208u;
label_2b9208:
    // 0x2b9208: 0x10000088  b           . + 4 + (0x88 << 2)
label_2b920c:
    if (ctx->pc == 0x2B920Cu) {
        ctx->pc = 0x2B920Cu;
            // 0x2b920c: 0xafa0025c  sw          $zero, 0x25C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 0));
        ctx->pc = 0x2B9210u;
        goto label_2b9210;
    }
    ctx->pc = 0x2B9208u;
    {
        const bool branch_taken_0x2b9208 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B920Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9208u;
            // 0x2b920c: 0xafa0025c  sw          $zero, 0x25C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9208) {
            ctx->pc = 0x2B942Cu;
            goto label_2b942c;
        }
    }
    ctx->pc = 0x2B9210u;
label_2b9210:
    // 0x2b9210: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_2b9214:
    if (ctx->pc == 0x2B9214u) {
        ctx->pc = 0x2B9214u;
            // 0x2b9214: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9218u;
        goto label_2b9218;
    }
    ctx->pc = 0x2B9210u;
    {
        const bool branch_taken_0x2b9210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2B9214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9210u;
            // 0x2b9214: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9210) {
            ctx->pc = 0x2B922Cu;
            goto label_2b922c;
        }
    }
    ctx->pc = 0x2B9218u;
label_2b9218:
    // 0x2b9218: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2b9218u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2b921c:
    // 0x2b921c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2b921cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2b9220:
    // 0x2b9220: 0xc04a3dc  jal         func_128F70
label_2b9224:
    if (ctx->pc == 0x2B9224u) {
        ctx->pc = 0x2B9224u;
            // 0x2b9224: 0x24a5f458  addiu       $a1, $a1, -0xBA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964312));
        ctx->pc = 0x2B9228u;
        goto label_2b9228;
    }
    ctx->pc = 0x2B9220u;
    SET_GPR_U32(ctx, 31, 0x2B9228u);
    ctx->pc = 0x2B9224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9220u;
            // 0x2b9224: 0x24a5f458  addiu       $a1, $a1, -0xBA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9228u; }
        if (ctx->pc != 0x2B9228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9228u; }
        if (ctx->pc != 0x2B9228u) { return; }
    }
    ctx->pc = 0x2B9228u;
label_2b9228:
    // 0x2b9228: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2b9228u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b922c:
    // 0x2b922c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2b922cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9230:
    // 0x2b9230: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b9230u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9234:
    // 0x2b9234: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x2b9234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
label_2b9238:
    // 0x2b9238: 0x2442cc10  addiu       $v0, $v0, -0x33F0
    ctx->pc = 0x2b9238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954000));
label_2b923c:
    // 0x2b923c: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2b923cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2b9240:
    // 0x2b9240: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2b9240u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2b9244:
    // 0x2b9244: 0x1880000b  blez        $a0, . + 4 + (0xB << 2)
label_2b9248:
    if (ctx->pc == 0x2B9248u) {
        ctx->pc = 0x2B9248u;
            // 0x2b9248: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B924Cu;
        goto label_2b924c;
    }
    ctx->pc = 0x2B9244u;
    {
        const bool branch_taken_0x2b9244 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2B9248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9244u;
            // 0x2b9248: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9244) {
            ctx->pc = 0x2B9274u;
            goto label_2b9274;
        }
    }
    ctx->pc = 0x2B924Cu;
label_2b924c:
    // 0x2b924c: 0xc06571c  jal         func_195C70
label_2b9250:
    if (ctx->pc == 0x2B9250u) {
        ctx->pc = 0x2B9254u;
        goto label_2b9254;
    }
    ctx->pc = 0x2B924Cu;
    SET_GPR_U32(ctx, 31, 0x2B9254u);
    ctx->pc = 0x195C70u;
    if (runtime->hasFunction(0x195C70u)) {
        auto targetFn = runtime->lookupFunction(0x195C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9254u; }
        if (ctx->pc != 0x2B9254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemFileName__Fii_0x195c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9254u; }
        if (ctx->pc != 0x2B9254u) { return; }
    }
    ctx->pc = 0x2B9254u;
label_2b9254:
    // 0x2b9254: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b9254u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9258:
    // 0x2b9258: 0x26420002  addiu       $v0, $s2, 0x2
    ctx->pc = 0x2b9258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_2b925c:
    // 0x2b925c: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2b925cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_2b9260:
    // 0x2b9260: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2b9260u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_2b9264:
    // 0x2b9264: 0xc04a3dc  jal         func_128F70
label_2b9268:
    if (ctx->pc == 0x2B9268u) {
        ctx->pc = 0x2B9268u;
            // 0x2b9268: 0x24440090  addiu       $a0, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->pc = 0x2B926Cu;
        goto label_2b926c;
    }
    ctx->pc = 0x2B9264u;
    SET_GPR_U32(ctx, 31, 0x2B926Cu);
    ctx->pc = 0x2B9268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9264u;
            // 0x2b9268: 0x24440090  addiu       $a0, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B926Cu; }
        if (ctx->pc != 0x2B926Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B926Cu; }
        if (ctx->pc != 0x2B926Cu) { return; }
    }
    ctx->pc = 0x2B926Cu;
label_2b926c:
    // 0x2b926c: 0x1000000f  b           . + 4 + (0xF << 2)
label_2b9270:
    if (ctx->pc == 0x2B9270u) {
        ctx->pc = 0x2B9274u;
        goto label_2b9274;
    }
    ctx->pc = 0x2B926Cu;
    {
        const bool branch_taken_0x2b926c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b926c) {
            ctx->pc = 0x2B92ACu;
            goto label_2b92ac;
        }
    }
    ctx->pc = 0x2B9274u;
label_2b9274:
    // 0x2b9274: 0x0  nop
    ctx->pc = 0x2b9274u;
    // NOP
label_2b9278:
    // 0x2b9278: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x2b9278u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
label_2b927c:
    // 0x2b927c: 0x2442caa0  addiu       $v0, $v0, -0x3560
    ctx->pc = 0x2b927cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953632));
label_2b9280:
    // 0x2b9280: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2b9280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2b9284:
    // 0x2b9284: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2b9284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2b9288:
    // 0x2b9288: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_2b928c:
    if (ctx->pc == 0x2B928Cu) {
        ctx->pc = 0x2B928Cu;
            // 0x2b928c: 0x24530004  addiu       $s3, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x2B9290u;
        goto label_2b9290;
    }
    ctx->pc = 0x2B9288u;
    {
        const bool branch_taken_0x2b9288 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B928Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9288u;
            // 0x2b928c: 0x24530004  addiu       $s3, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9288) {
            ctx->pc = 0x2B92ACu;
            goto label_2b92ac;
        }
    }
    ctx->pc = 0x2B9290u;
label_2b9290:
    // 0x2b9290: 0xc05af58  jal         func_16BD60
label_2b9294:
    if (ctx->pc == 0x2B9294u) {
        ctx->pc = 0x2B9298u;
        goto label_2b9298;
    }
    ctx->pc = 0x2B9290u;
    SET_GPR_U32(ctx, 31, 0x2B9298u);
    ctx->pc = 0x16BD60u;
    if (runtime->hasFunction(0x16BD60u)) {
        auto targetFn = runtime->lookupFunction(0x16BD60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9298u; }
        if (ctx->pc != 0x2B9298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetParent__12CActionCharaFv_0x16bd60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9298u; }
        if (ctx->pc != 0x2B9298u) { return; }
    }
    ctx->pc = 0x2B9298u;
label_2b9298:
    // 0x2b9298: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x2b9298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2b929c:
    // 0x2b929c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2b929cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2b92a0:
    // 0x2b92a0: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x2b92a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_2b92a4:
    // 0x2b92a4: 0x320f809  jalr        $t9
label_2b92a8:
    if (ctx->pc == 0x2B92A8u) {
        ctx->pc = 0x2B92A8u;
            // 0x2b92a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B92ACu;
        goto label_2b92ac;
    }
    ctx->pc = 0x2B92A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2B92ACu);
        ctx->pc = 0x2B92A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B92A4u;
            // 0x2b92a8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2B92ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2B92ACu; }
            if (ctx->pc != 0x2B92ACu) { return; }
        }
        }
    }
    ctx->pc = 0x2B92ACu;
label_2b92ac:
    // 0x2b92ac: 0x0  nop
    ctx->pc = 0x2b92acu;
    // NOP
label_2b92b0:
    // 0x2b92b0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2b92b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2b92b4:
    // 0x2b92b4: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x2b92b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_2b92b8:
    // 0x2b92b8: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x2b92b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_2b92bc:
    // 0x2b92bc: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_2b92c0:
    if (ctx->pc == 0x2B92C0u) {
        ctx->pc = 0x2B92C0u;
            // 0x2b92c0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x2B92C4u;
        goto label_2b92c4;
    }
    ctx->pc = 0x2B92BCu;
    {
        const bool branch_taken_0x2b92bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B92C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B92BCu;
            // 0x2b92c0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b92bc) {
            ctx->pc = 0x2B9234u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b9234;
        }
    }
    ctx->pc = 0x2B92C4u;
label_2b92c4:
    // 0x2b92c4: 0x10000058  b           . + 4 + (0x58 << 2)
label_2b92c8:
    if (ctx->pc == 0x2B92C8u) {
        ctx->pc = 0x2B92CCu;
        goto label_2b92cc;
    }
    ctx->pc = 0x2B92C4u;
    {
        const bool branch_taken_0x2b92c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b92c4) {
            ctx->pc = 0x2B9428u;
            goto label_2b9428;
        }
    }
    ctx->pc = 0x2B92CCu;
label_2b92cc:
    // 0x2b92cc: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x2b92ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2b92d0:
    // 0x2b92d0: 0xc04a3dc  jal         func_128F70
label_2b92d4:
    if (ctx->pc == 0x2B92D4u) {
        ctx->pc = 0x2B92D4u;
            // 0x2b92d4: 0x24a5f458  addiu       $a1, $a1, -0xBA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964312));
        ctx->pc = 0x2B92D8u;
        goto label_2b92d8;
    }
    ctx->pc = 0x2B92D0u;
    SET_GPR_U32(ctx, 31, 0x2B92D8u);
    ctx->pc = 0x2B92D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B92D0u;
            // 0x2b92d4: 0x24a5f458  addiu       $a1, $a1, -0xBA8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B92D8u; }
        if (ctx->pc != 0x2B92D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B92D8u; }
        if (ctx->pc != 0x2B92D8u) { return; }
    }
    ctx->pc = 0x2B92D8u;
label_2b92d8:
    // 0x2b92d8: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2b92d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2b92dc:
    // 0x2b92dc: 0x8424cc14  lh          $a0, -0x33EC($at)
    ctx->pc = 0x2b92dcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294954004)));
label_2b92e0:
    // 0x2b92e0: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x2b92e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2b92e4:
    // 0x2b92e4: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_2b92e8:
    if (ctx->pc == 0x2B92E8u) {
        ctx->pc = 0x2B92ECu;
        goto label_2b92ec;
    }
    ctx->pc = 0x2B92E4u;
    {
        const bool branch_taken_0x2b92e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b92e4) {
            ctx->pc = 0x2B9300u;
            goto label_2b9300;
        }
    }
    ctx->pc = 0x2B92ECu;
label_2b92ec:
    // 0x2b92ec: 0xc06571c  jal         func_195C70
label_2b92f0:
    if (ctx->pc == 0x2B92F0u) {
        ctx->pc = 0x2B92F0u;
            // 0x2b92f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B92F4u;
        goto label_2b92f4;
    }
    ctx->pc = 0x2B92ECu;
    SET_GPR_U32(ctx, 31, 0x2B92F4u);
    ctx->pc = 0x2B92F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B92ECu;
            // 0x2b92f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C70u;
    if (runtime->hasFunction(0x195C70u)) {
        auto targetFn = runtime->lookupFunction(0x195C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B92F4u; }
        if (ctx->pc != 0x2B92F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemFileName__Fii_0x195c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B92F4u; }
        if (ctx->pc != 0x2B92F4u) { return; }
    }
    ctx->pc = 0x2B92F4u;
label_2b92f4:
    // 0x2b92f4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b92f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b92f8:
    // 0x2b92f8: 0xc04a3dc  jal         func_128F70
label_2b92fc:
    if (ctx->pc == 0x2B92FCu) {
        ctx->pc = 0x2B92FCu;
            // 0x2b92fc: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x2B9300u;
        goto label_2b9300;
    }
    ctx->pc = 0x2B92F8u;
    SET_GPR_U32(ctx, 31, 0x2B9300u);
    ctx->pc = 0x2B92FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B92F8u;
            // 0x2b92fc: 0x27a40190  addiu       $a0, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9300u; }
        if (ctx->pc != 0x2B9300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9300u; }
        if (ctx->pc != 0x2B9300u) { return; }
    }
    ctx->pc = 0x2B9300u;
label_2b9300:
    // 0x2b9300: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2b9300u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2b9304:
    // 0x2b9304: 0x8424cc16  lh          $a0, -0x33EA($at)
    ctx->pc = 0x2b9304u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294954006)));
label_2b9308:
    // 0x2b9308: 0x4082a  slt         $at, $zero, $a0
    ctx->pc = 0x2b9308u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2b930c:
    // 0x2b930c: 0x10200046  beqz        $at, . + 4 + (0x46 << 2)
label_2b9310:
    if (ctx->pc == 0x2B9310u) {
        ctx->pc = 0x2B9310u;
            // 0x2b9310: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B9314u;
        goto label_2b9314;
    }
    ctx->pc = 0x2B930Cu;
    {
        const bool branch_taken_0x2b930c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B930Cu;
            // 0x2b9310: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b930c) {
            ctx->pc = 0x2B9428u;
            goto label_2b9428;
        }
    }
    ctx->pc = 0x2B9314u;
label_2b9314:
    // 0x2b9314: 0xc06571c  jal         func_195C70
label_2b9318:
    if (ctx->pc == 0x2B9318u) {
        ctx->pc = 0x2B931Cu;
        goto label_2b931c;
    }
    ctx->pc = 0x2B9314u;
    SET_GPR_U32(ctx, 31, 0x2B931Cu);
    ctx->pc = 0x195C70u;
    if (runtime->hasFunction(0x195C70u)) {
        auto targetFn = runtime->lookupFunction(0x195C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B931Cu; }
        if (ctx->pc != 0x2B931Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemFileName__Fii_0x195c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B931Cu; }
        if (ctx->pc != 0x2B931Cu) { return; }
    }
    ctx->pc = 0x2B931Cu;
label_2b931c:
    // 0x2b931c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b931cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9320:
    // 0x2b9320: 0xc04a3dc  jal         func_128F70
label_2b9324:
    if (ctx->pc == 0x2B9324u) {
        ctx->pc = 0x2B9324u;
            // 0x2b9324: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->pc = 0x2B9328u;
        goto label_2b9328;
    }
    ctx->pc = 0x2B9320u;
    SET_GPR_U32(ctx, 31, 0x2B9328u);
    ctx->pc = 0x2B9324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9320u;
            // 0x2b9324: 0x27a401d0  addiu       $a0, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9328u; }
        if (ctx->pc != 0x2B9328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9328u; }
        if (ctx->pc != 0x2B9328u) { return; }
    }
    ctx->pc = 0x2B9328u;
label_2b9328:
    // 0x2b9328: 0x1000003f  b           . + 4 + (0x3F << 2)
label_2b932c:
    if (ctx->pc == 0x2B932Cu) {
        ctx->pc = 0x2B9330u;
        goto label_2b9330;
    }
    ctx->pc = 0x2B9328u;
    {
        const bool branch_taken_0x2b9328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9328) {
            ctx->pc = 0x2B9428u;
            goto label_2b9428;
        }
    }
    ctx->pc = 0x2B9330u;
label_2b9330:
    // 0x2b9330: 0x83839b71  lb          $v1, -0x648F($gp)
    ctx->pc = 0x2b9330u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941553)));
label_2b9334:
    // 0x2b9334: 0x278284d8  addiu       $v0, $gp, -0x7B28
    ctx->pc = 0x2b9334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935768));
label_2b9338:
    // 0x2b9338: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b9338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b933c:
    // 0x2b933c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x2b933cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2b9340:
    // 0x2b9340: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_2b9344:
    if (ctx->pc == 0x2B9344u) {
        ctx->pc = 0x2B9344u;
            // 0x2b9344: 0xa3a20250  sb          $v0, 0x250($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 592), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2B9348u;
        goto label_2b9348;
    }
    ctx->pc = 0x2B9340u;
    {
        const bool branch_taken_0x2b9340 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9340u;
            // 0x2b9344: 0xa3a20250  sb          $v0, 0x250($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 592), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9340) {
            ctx->pc = 0x2B9360u;
            goto label_2b9360;
        }
    }
    ctx->pc = 0x2B9348u;
label_2b9348:
    // 0x2b9348: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b9348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2b934c:
    // 0x2b934c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b934cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b9350:
    // 0x2b9350: 0xa3a20250  sb          $v0, 0x250($sp)
    ctx->pc = 0x2b9350u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 592), (uint8_t)GPR_U32(ctx, 2));
label_2b9354:
    // 0x2b9354: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2b9354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2b9358:
    // 0x2b9358: 0xc0664fc  jal         func_1993F0
label_2b935c:
    if (ctx->pc == 0x2B935Cu) {
        ctx->pc = 0x2B935Cu;
            // 0x2b935c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9360u;
        goto label_2b9360;
    }
    ctx->pc = 0x2B9358u;
    SET_GPR_U32(ctx, 31, 0x2B9360u);
    ctx->pc = 0x2B935Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9358u;
            // 0x2b935c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1993F0u;
    if (runtime->hasFunction(0x1993F0u)) {
        auto targetFn = runtime->lookupFunction(0x1993F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9360u; }
        if (ctx->pc != 0x2B9360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainCharaModelName__FiPci_0x1993f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9360u; }
        if (ctx->pc != 0x2B9360u) { return; }
    }
    ctx->pc = 0x2B9360u;
label_2b9360:
    // 0x2b9360: 0x83829b71  lb          $v0, -0x648F($gp)
    ctx->pc = 0x2b9360u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941553)));
label_2b9364:
    // 0x2b9364: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2b9364u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b9368:
    // 0x2b9368: 0x14460005  bne         $v0, $a2, . + 4 + (0x5 << 2)
label_2b936c:
    if (ctx->pc == 0x2B936Cu) {
        ctx->pc = 0x2B936Cu;
            // 0x2b936c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2B9370u;
        goto label_2b9370;
    }
    ctx->pc = 0x2B9368u;
    {
        const bool branch_taken_0x2b9368 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x2B936Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9368u;
            // 0x2b936c: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9368) {
            ctx->pc = 0x2B9380u;
            goto label_2b9380;
        }
    }
    ctx->pc = 0x2B9370u;
label_2b9370:
    // 0x2b9370: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2b9370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2b9374:
    // 0x2b9374: 0xa3a20250  sb          $v0, 0x250($sp)
    ctx->pc = 0x2b9374u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 592), (uint8_t)GPR_U32(ctx, 2));
label_2b9378:
    // 0x2b9378: 0xc0664fc  jal         func_1993F0
label_2b937c:
    if (ctx->pc == 0x2B937Cu) {
        ctx->pc = 0x2B937Cu;
            // 0x2b937c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x2B9380u;
        goto label_2b9380;
    }
    ctx->pc = 0x2B9378u;
    SET_GPR_U32(ctx, 31, 0x2B9380u);
    ctx->pc = 0x2B937Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9378u;
            // 0x2b937c: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1993F0u;
    if (runtime->hasFunction(0x1993F0u)) {
        auto targetFn = runtime->lookupFunction(0x1993F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9380u; }
        if (ctx->pc != 0x2B9380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainCharaModelName__FiPci_0x1993f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9380u; }
        if (ctx->pc != 0x2B9380u) { return; }
    }
    ctx->pc = 0x2B9380u;
label_2b9380:
    // 0x2b9380: 0x83829b74  lb          $v0, -0x648C($gp)
    ctx->pc = 0x2b9380u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941556)));
label_2b9384:
    // 0x2b9384: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_2b9388:
    if (ctx->pc == 0x2B9388u) {
        ctx->pc = 0x2B9388u;
            // 0x2b9388: 0x2082a  slt         $at, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x2B938Cu;
        goto label_2b938c;
    }
    ctx->pc = 0x2B9384u;
    {
        const bool branch_taken_0x2b9384 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2B9388u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9384u;
            // 0x2b9388: 0x2082a  slt         $at, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9384) {
            ctx->pc = 0x2B9390u;
            goto label_2b9390;
        }
    }
    ctx->pc = 0x2B938Cu;
label_2b938c:
    // 0x2b938c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2b938cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_2b9390:
    // 0x2b9390: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
label_2b9394:
    if (ctx->pc == 0x2B9394u) {
        ctx->pc = 0x2B9398u;
        goto label_2b9398;
    }
    ctx->pc = 0x2B9390u;
    {
        const bool branch_taken_0x2b9390 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9390) {
            ctx->pc = 0x2B9428u;
            goto label_2b9428;
        }
    }
    ctx->pc = 0x2B9398u;
label_2b9398:
    // 0x2b9398: 0xa3a00090  sb          $zero, 0x90($sp)
    ctx->pc = 0x2b9398u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 144), (uint8_t)GPR_U32(ctx, 0));
label_2b939c:
    // 0x2b939c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b939cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b93a0:
    // 0x2b93a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2b93a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b93a4:
    // 0x2b93a4: 0x3c0201f1  lui         $v0, 0x1F1
    ctx->pc = 0x2b93a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)497 << 16));
label_2b93a8:
    // 0x2b93a8: 0x2442cc10  addiu       $v0, $v0, -0x33F0
    ctx->pc = 0x2b93a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954000));
label_2b93ac:
    // 0x2b93ac: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2b93acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2b93b0:
    // 0x2b93b0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x2b93b0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2b93b4:
    // 0x2b93b4: 0x18800009  blez        $a0, . + 4 + (0x9 << 2)
label_2b93b8:
    if (ctx->pc == 0x2B93B8u) {
        ctx->pc = 0x2B93B8u;
            // 0x2b93b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2B93BCu;
        goto label_2b93bc;
    }
    ctx->pc = 0x2B93B4u;
    {
        const bool branch_taken_0x2b93b4 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2B93B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B93B4u;
            // 0x2b93b8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b93b4) {
            ctx->pc = 0x2B93DCu;
            goto label_2b93dc;
        }
    }
    ctx->pc = 0x2B93BCu;
label_2b93bc:
    // 0x2b93bc: 0xc06571c  jal         func_195C70
label_2b93c0:
    if (ctx->pc == 0x2B93C0u) {
        ctx->pc = 0x2B93C4u;
        goto label_2b93c4;
    }
    ctx->pc = 0x2B93BCu;
    SET_GPR_U32(ctx, 31, 0x2B93C4u);
    ctx->pc = 0x195C70u;
    if (runtime->hasFunction(0x195C70u)) {
        auto targetFn = runtime->lookupFunction(0x195C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B93C4u; }
        if (ctx->pc != 0x2B93C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemFileName__Fii_0x195c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B93C4u; }
        if (ctx->pc != 0x2B93C4u) { return; }
    }
    ctx->pc = 0x2B93C4u;
label_2b93c4:
    // 0x2b93c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2b93c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b93c8:
    // 0x2b93c8: 0x26220002  addiu       $v0, $s1, 0x2
    ctx->pc = 0x2b93c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_2b93cc:
    // 0x2b93cc: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x2b93ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_2b93d0:
    // 0x2b93d0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x2b93d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_2b93d4:
    // 0x2b93d4: 0xc04a3dc  jal         func_128F70
label_2b93d8:
    if (ctx->pc == 0x2B93D8u) {
        ctx->pc = 0x2B93D8u;
            // 0x2b93d8: 0x24440090  addiu       $a0, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->pc = 0x2B93DCu;
        goto label_2b93dc;
    }
    ctx->pc = 0x2B93D4u;
    SET_GPR_U32(ctx, 31, 0x2B93DCu);
    ctx->pc = 0x2B93D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B93D4u;
            // 0x2b93d8: 0x24440090  addiu       $a0, $v0, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B93DCu; }
        if (ctx->pc != 0x2B93DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B93DCu; }
        if (ctx->pc != 0x2B93DCu) { return; }
    }
    ctx->pc = 0x2B93DCu;
label_2b93dc:
    // 0x2b93dc: 0x0  nop
    ctx->pc = 0x2b93dcu;
    // NOP
label_2b93e0:
    // 0x2b93e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b93e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2b93e4:
    // 0x2b93e4: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x2b93e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_2b93e8:
    // 0x2b93e8: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_2b93ec:
    if (ctx->pc == 0x2B93ECu) {
        ctx->pc = 0x2B93ECu;
            // 0x2b93ec: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x2B93F0u;
        goto label_2b93f0;
    }
    ctx->pc = 0x2B93E8u;
    {
        const bool branch_taken_0x2b93e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B93ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B93E8u;
            // 0x2b93ec: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b93e8) {
            ctx->pc = 0x2B93A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b93a4;
        }
    }
    ctx->pc = 0x2B93F0u;
label_2b93f0:
    // 0x2b93f0: 0x278284c8  addiu       $v0, $gp, -0x7B38
    ctx->pc = 0x2b93f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935752));
label_2b93f4:
    // 0x2b93f4: 0x27b00210  addiu       $s0, $sp, 0x210
    ctx->pc = 0x2b93f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
label_2b93f8:
    // 0x2b93f8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2b93f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2b93fc:
    // 0x2b93fc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2b93fcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b9400:
    // 0x2b9400: 0xc04a3dc  jal         func_128F70
label_2b9404:
    if (ctx->pc == 0x2B9404u) {
        ctx->pc = 0x2B9404u;
            // 0x2b9404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9408u;
        goto label_2b9408;
    }
    ctx->pc = 0x2B9400u;
    SET_GPR_U32(ctx, 31, 0x2B9408u);
    ctx->pc = 0x2B9404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9400u;
            // 0x2b9404: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9408u; }
        if (ctx->pc != 0x2B9408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9408u; }
        if (ctx->pc != 0x2B9408u) { return; }
    }
    ctx->pc = 0x2B9408u;
label_2b9408:
    // 0x2b9408: 0x83839b71  lb          $v1, -0x648F($gp)
    ctx->pc = 0x2b9408u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941553)));
label_2b940c:
    // 0x2b940c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b940cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b9410:
    // 0x2b9410: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_2b9414:
    if (ctx->pc == 0x2B9414u) {
        ctx->pc = 0x2B9418u;
        goto label_2b9418;
    }
    ctx->pc = 0x2B9410u;
    {
        const bool branch_taken_0x2b9410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b9410) {
            ctx->pc = 0x2B9428u;
            goto label_2b9428;
        }
    }
    ctx->pc = 0x2B9418u;
label_2b9418:
    // 0x2b9418: 0x16400002  bnez        $s2, . + 4 + (0x2 << 2)
label_2b941c:
    if (ctx->pc == 0x2B941Cu) {
        ctx->pc = 0x2B941Cu;
            // 0x2b941c: 0xa3a00110  sb          $zero, 0x110($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 272), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2B9420u;
        goto label_2b9420;
    }
    ctx->pc = 0x2B9418u;
    {
        const bool branch_taken_0x2b9418 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B941Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9418u;
            // 0x2b941c: 0xa3a00110  sb          $zero, 0x110($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 272), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9418) {
            ctx->pc = 0x2B9424u;
            goto label_2b9424;
        }
    }
    ctx->pc = 0x2B9420u;
label_2b9420:
    // 0x2b9420: 0xa3a00150  sb          $zero, 0x150($sp)
    ctx->pc = 0x2b9420u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 336), (uint8_t)GPR_U32(ctx, 0));
label_2b9424:
    // 0x2b9424: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x2b9424u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
label_2b9428:
    // 0x2b9428: 0xafa0025c  sw          $zero, 0x25C($sp)
    ctx->pc = 0x2b9428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 0));
label_2b942c:
    // 0x2b942c: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2b942cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9430:
    // 0x2b9430: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2b9430u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9434:
    // 0x2b9434: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2b9434u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9438:
    // 0x2b9438: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b9438u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b943c:
    // 0x2b943c: 0x2d09021  addu        $s2, $s6, $s0
    ctx->pc = 0x2b943cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_2b9440:
    // 0x2b9440: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2b9440u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b9444:
    // 0x2b9444: 0x1080003c  beqz        $a0, . + 4 + (0x3C << 2)
label_2b9448:
    if (ctx->pc == 0x2B9448u) {
        ctx->pc = 0x2B9448u;
            // 0x2b9448: 0x23d1021  addu        $v0, $s1, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
        ctx->pc = 0x2B944Cu;
        goto label_2b944c;
    }
    ctx->pc = 0x2B9444u;
    {
        const bool branch_taken_0x2b9444 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9444u;
            // 0x2b9448: 0x23d1021  addu        $v0, $s1, $sp (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9444) {
            ctx->pc = 0x2B9538u;
            goto label_2b9538;
        }
    }
    ctx->pc = 0x2B944Cu;
label_2b944c:
    // 0x2b944c: 0x24550090  addiu       $s5, $v0, 0x90
    ctx->pc = 0x2b944cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
label_2b9450:
    // 0x2b9450: 0x82a20000  lb          $v0, 0x0($s5)
    ctx->pc = 0x2b9450u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_2b9454:
    // 0x2b9454: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_2b9458:
    if (ctx->pc == 0x2B9458u) {
        ctx->pc = 0x2B945Cu;
        goto label_2b945c;
    }
    ctx->pc = 0x2B9454u;
    {
        const bool branch_taken_0x2b9454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9454) {
            ctx->pc = 0x2B9538u;
            goto label_2b9538;
        }
    }
    ctx->pc = 0x2B945Cu;
label_2b945c:
    // 0x2b945c: 0x83839b72  lb          $v1, -0x648E($gp)
    ctx->pc = 0x2b945cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941554)));
label_2b9460:
    // 0x2b9460: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2b9460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b9464:
    // 0x2b9464: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_2b9468:
    if (ctx->pc == 0x2B9468u) {
        ctx->pc = 0x2B946Cu;
        goto label_2b946c;
    }
    ctx->pc = 0x2B9464u;
    {
        const bool branch_taken_0x2b9464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2b9464) {
            ctx->pc = 0x2B9480u;
            goto label_2b9480;
        }
    }
    ctx->pc = 0x2B946Cu;
label_2b946c:
    // 0x2b946c: 0x14600032  bnez        $v1, . + 4 + (0x32 << 2)
label_2b9470:
    if (ctx->pc == 0x2B9470u) {
        ctx->pc = 0x2B9474u;
        goto label_2b9474;
    }
    ctx->pc = 0x2B946Cu;
    {
        const bool branch_taken_0x2b946c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b946c) {
            ctx->pc = 0x2B9538u;
            goto label_2b9538;
        }
    }
    ctx->pc = 0x2B9474u;
label_2b9474:
    // 0x2b9474: 0x83829b75  lb          $v0, -0x648B($gp)
    ctx->pc = 0x2b9474u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941557)));
label_2b9478:
    // 0x2b9478: 0x1662002f  bne         $s3, $v0, . + 4 + (0x2F << 2)
label_2b947c:
    if (ctx->pc == 0x2B947Cu) {
        ctx->pc = 0x2B9480u;
        goto label_2b9480;
    }
    ctx->pc = 0x2B9478u;
    {
        const bool branch_taken_0x2b9478 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x2b9478) {
            ctx->pc = 0x2B9538u;
            goto label_2b9538;
        }
    }
    ctx->pc = 0x2B9480u;
label_2b9480:
    // 0x2b9480: 0x27d1821  addu        $v1, $s3, $sp
    ctx->pc = 0x2b9480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 29)));
label_2b9484:
    // 0x2b9484: 0x80630250  lb          $v1, 0x250($v1)
    ctx->pc = 0x2b9484u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 592)));
label_2b9488:
    // 0x2b9488: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2b9488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_2b948c:
    // 0x2b948c: 0x24424c10  addiu       $v0, $v0, 0x4C10
    ctx->pc = 0x2b948cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19472));
label_2b9490:
    // 0x2b9490: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2b9490u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2b9494:
    // 0x2b9494: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2b9494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b9498:
    // 0x2b9498: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x2b9498u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2b949c:
    // 0x2b949c: 0xc04a3dc  jal         func_128F70
label_2b94a0:
    if (ctx->pc == 0x2B94A0u) {
        ctx->pc = 0x2B94A0u;
            // 0x2b94a0: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->pc = 0x2B94A4u;
        goto label_2b94a4;
    }
    ctx->pc = 0x2B949Cu;
    SET_GPR_U32(ctx, 31, 0x2B94A4u);
    ctx->pc = 0x2B94A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B949Cu;
            // 0x2b94a0: 0x24840020  addiu       $a0, $a0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B94A4u; }
        if (ctx->pc != 0x2B94A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B94A4u; }
        if (ctx->pc != 0x2B94A4u) { return; }
    }
    ctx->pc = 0x2B94A4u;
label_2b94a4:
    // 0x2b94a4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2b94a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b94a8:
    // 0x2b94a8: 0xac400074  sw          $zero, 0x74($v0)
    ctx->pc = 0x2b94a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 116), GPR_U32(ctx, 0));
label_2b94ac:
    // 0x2b94ac: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2b94acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b94b0:
    // 0x2b94b0: 0xc04a3dc  jal         func_128F70
label_2b94b4:
    if (ctx->pc == 0x2B94B4u) {
        ctx->pc = 0x2B94B4u;
            // 0x2b94b4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B94B8u;
        goto label_2b94b8;
    }
    ctx->pc = 0x2B94B0u;
    SET_GPR_U32(ctx, 31, 0x2B94B8u);
    ctx->pc = 0x2B94B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B94B0u;
            // 0x2b94b4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B94B8u; }
        if (ctx->pc != 0x2B94B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B94B8u; }
        if (ctx->pc != 0x2B94B8u) { return; }
    }
    ctx->pc = 0x2B94B8u;
label_2b94b8:
    // 0x2b94b8: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2b94b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b94bc:
    // 0x2b94bc: 0xc04a2da  jal         func_128B68
label_2b94c0:
    if (ctx->pc == 0x2B94C0u) {
        ctx->pc = 0x2B94C0u;
            // 0x2b94c0: 0x24a40020  addiu       $a0, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->pc = 0x2B94C4u;
        goto label_2b94c4;
    }
    ctx->pc = 0x2B94BCu;
    SET_GPR_U32(ctx, 31, 0x2B94C4u);
    ctx->pc = 0x2B94C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B94BCu;
            // 0x2b94c0: 0x24a40020  addiu       $a0, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B94C4u; }
        if (ctx->pc != 0x2B94C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B94C4u; }
        if (ctx->pc != 0x2B94C4u) { return; }
    }
    ctx->pc = 0x2B94C4u;
label_2b94c4:
    // 0x2b94c4: 0x8e830024  lw          $v1, 0x24($s4)
    ctx->pc = 0x2b94c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
label_2b94c8:
    // 0x2b94c8: 0x27a6025c  addiu       $a2, $sp, 0x25C
    ctx->pc = 0x2b94c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 604));
label_2b94cc:
    // 0x2b94cc: 0x8e820020  lw          $v0, 0x20($s4)
    ctx->pc = 0x2b94ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_2b94d0:
    // 0x2b94d0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x2b94d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_2b94d4:
    // 0x2b94d4: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2b94d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2b94d8:
    // 0x2b94d8: 0xafa0025c  sw          $zero, 0x25C($sp)
    ctx->pc = 0x2b94d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 0));
label_2b94dc:
    // 0x2b94dc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2b94dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b94e0:
    // 0x2b94e0: 0xa0400070  sb          $zero, 0x70($v0)
    ctx->pc = 0x2b94e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 0));
label_2b94e4:
    // 0x2b94e4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2b94e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b94e8:
    // 0x2b94e8: 0xc05224c  jal         func_148930
label_2b94ec:
    if (ctx->pc == 0x2B94ECu) {
        ctx->pc = 0x2B94ECu;
            // 0x2b94ec: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->pc = 0x2B94F0u;
        goto label_2b94f0;
    }
    ctx->pc = 0x2B94E8u;
    SET_GPR_U32(ctx, 31, 0x2B94F0u);
    ctx->pc = 0x2B94ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B94E8u;
            // 0x2b94ec: 0x24440020  addiu       $a0, $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B94F0u; }
        if (ctx->pc != 0x2B94F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B94F0u; }
        if (ctx->pc != 0x2B94F0u) { return; }
    }
    ctx->pc = 0x2B94F0u;
label_2b94f0:
    // 0x2b94f0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2b94f4:
    if (ctx->pc == 0x2B94F4u) {
        ctx->pc = 0x2B94F8u;
        goto label_2b94f8;
    }
    ctx->pc = 0x2B94F0u;
    {
        const bool branch_taken_0x2b94f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b94f0) {
            ctx->pc = 0x2B9504u;
            goto label_2b9504;
        }
    }
    ctx->pc = 0x2B94F8u;
label_2b94f8:
    // 0x2b94f8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2b94f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2b94fc:
    // 0x2b94fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2b94fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b9500:
    // 0x2b9500: 0xa0430070  sb          $v1, 0x70($v0)
    ctx->pc = 0x2b9500u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 112), (uint8_t)GPR_U32(ctx, 3));
label_2b9504:
    // 0x2b9504: 0x0  nop
    ctx->pc = 0x2b9504u;
    // NOP
label_2b9508:
    // 0x2b9508: 0x8fa3025c  lw          $v1, 0x25C($sp)
    ctx->pc = 0x2b9508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
label_2b950c:
    // 0x2b950c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2b950cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_2b9510:
    // 0x2b9510: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2b9514:
    if (ctx->pc == 0x2B9514u) {
        ctx->pc = 0x2B9514u;
            // 0x2b9514: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x2B9518u;
        goto label_2b9518;
    }
    ctx->pc = 0x2B9510u;
    {
        const bool branch_taken_0x2b9510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9510u;
            // 0x2b9514: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9510) {
            ctx->pc = 0x2B9520u;
            goto label_2b9520;
        }
    }
    ctx->pc = 0x2B9518u;
label_2b9518:
    // 0x2b9518: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2b9518u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_2b951c:
    // 0x2b951c: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2b951cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2b9520:
    // 0x2b9520: 0xc04e748  jal         func_139D20
label_2b9524:
    if (ctx->pc == 0x2B9524u) {
        ctx->pc = 0x2B9524u;
            // 0x2b9524: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9528u;
        goto label_2b9528;
    }
    ctx->pc = 0x2B9520u;
    SET_GPR_U32(ctx, 31, 0x2B9528u);
    ctx->pc = 0x2B9524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9520u;
            // 0x2b9524: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9528u; }
        if (ctx->pc != 0x2B9528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9528u; }
        if (ctx->pc != 0x2B9528u) { return; }
    }
    ctx->pc = 0x2B9528u;
label_2b9528:
    // 0x2b9528: 0xc04e780  jal         func_139E00
label_2b952c:
    if (ctx->pc == 0x2B952Cu) {
        ctx->pc = 0x2B952Cu;
            // 0x2b952c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2B9530u;
        goto label_2b9530;
    }
    ctx->pc = 0x2B9528u;
    SET_GPR_U32(ctx, 31, 0x2B9530u);
    ctx->pc = 0x2B952Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9528u;
            // 0x2b952c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9530u; }
        if (ctx->pc != 0x2B9530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B9530u; }
        if (ctx->pc != 0x2B9530u) { return; }
    }
    ctx->pc = 0x2B9530u;
label_2b9530:
    // 0x2b9530: 0x8fa2025c  lw          $v0, 0x25C($sp)
    ctx->pc = 0x2b9530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
label_2b9534:
    // 0x2b9534: 0x2e2b821  addu        $s7, $s7, $v0
    ctx->pc = 0x2b9534u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_2b9538:
    // 0x2b9538: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2b9538u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2b953c:
    // 0x2b953c: 0x2a620007  slti        $v0, $s3, 0x7
    ctx->pc = 0x2b953cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)7) ? 1 : 0);
label_2b9540:
    // 0x2b9540: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2b9540u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2b9544:
    // 0x2b9544: 0x1440ffbd  bnez        $v0, . + 4 + (-0x43 << 2)
label_2b9548:
    if (ctx->pc == 0x2B9548u) {
        ctx->pc = 0x2B9548u;
            // 0x2b9548: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->pc = 0x2B954Cu;
        goto label_2b954c;
    }
    ctx->pc = 0x2B9544u;
    {
        const bool branch_taken_0x2b9544 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9544u;
            // 0x2b9548: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9544) {
            ctx->pc = 0x2B943Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b943c;
        }
    }
    ctx->pc = 0x2B954Cu;
label_2b954c:
    // 0x2b954c: 0x2e0102d  daddu       $v0, $s7, $zero
    ctx->pc = 0x2b954cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2b9550:
    // 0x2b9550: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2b9550u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2b9554:
    // 0x2b9554: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2b9554u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2b9558:
    // 0x2b9558: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2b9558u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2b955c:
    // 0x2b955c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2b955cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2b9560:
    // 0x2b9560: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2b9560u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2b9564:
    // 0x2b9564: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2b9564u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2b9568:
    // 0x2b9568: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b9568u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2b956c:
    // 0x2b956c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b956cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2b9570:
    // 0x2b9570: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b9570u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2b9574:
    // 0x2b9574: 0x3e00008  jr          $ra
label_2b9578:
    if (ctx->pc == 0x2B9578u) {
        ctx->pc = 0x2B9578u;
            // 0x2b9578: 0x27bd0260  addiu       $sp, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->pc = 0x2B957Cu;
        goto label_fallthrough_0x2b9574;
    }
    ctx->pc = 0x2B9574u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B9578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B9574u;
            // 0x2b9578: 0x27bd0260  addiu       $sp, $sp, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2b9574:
    ctx->pc = 0x2B957Cu;
}
