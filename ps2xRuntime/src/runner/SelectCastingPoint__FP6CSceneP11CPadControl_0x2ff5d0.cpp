#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: SelectCastingPoint__FP6CSceneP11CPadControl
// Address: 0x2ff5d0 - 0x2ffb94
void SelectCastingPoint__FP6CSceneP11CPadControl_0x2ff5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("SelectCastingPoint__FP6CSceneP11CPadControl_0x2ff5d0");
#endif

    switch (ctx->pc) {
        case 0x2ff5d0u: goto label_2ff5d0;
        case 0x2ff5d4u: goto label_2ff5d4;
        case 0x2ff5d8u: goto label_2ff5d8;
        case 0x2ff5dcu: goto label_2ff5dc;
        case 0x2ff5e0u: goto label_2ff5e0;
        case 0x2ff5e4u: goto label_2ff5e4;
        case 0x2ff5e8u: goto label_2ff5e8;
        case 0x2ff5ecu: goto label_2ff5ec;
        case 0x2ff5f0u: goto label_2ff5f0;
        case 0x2ff5f4u: goto label_2ff5f4;
        case 0x2ff5f8u: goto label_2ff5f8;
        case 0x2ff5fcu: goto label_2ff5fc;
        case 0x2ff600u: goto label_2ff600;
        case 0x2ff604u: goto label_2ff604;
        case 0x2ff608u: goto label_2ff608;
        case 0x2ff60cu: goto label_2ff60c;
        case 0x2ff610u: goto label_2ff610;
        case 0x2ff614u: goto label_2ff614;
        case 0x2ff618u: goto label_2ff618;
        case 0x2ff61cu: goto label_2ff61c;
        case 0x2ff620u: goto label_2ff620;
        case 0x2ff624u: goto label_2ff624;
        case 0x2ff628u: goto label_2ff628;
        case 0x2ff62cu: goto label_2ff62c;
        case 0x2ff630u: goto label_2ff630;
        case 0x2ff634u: goto label_2ff634;
        case 0x2ff638u: goto label_2ff638;
        case 0x2ff63cu: goto label_2ff63c;
        case 0x2ff640u: goto label_2ff640;
        case 0x2ff644u: goto label_2ff644;
        case 0x2ff648u: goto label_2ff648;
        case 0x2ff64cu: goto label_2ff64c;
        case 0x2ff650u: goto label_2ff650;
        case 0x2ff654u: goto label_2ff654;
        case 0x2ff658u: goto label_2ff658;
        case 0x2ff65cu: goto label_2ff65c;
        case 0x2ff660u: goto label_2ff660;
        case 0x2ff664u: goto label_2ff664;
        case 0x2ff668u: goto label_2ff668;
        case 0x2ff66cu: goto label_2ff66c;
        case 0x2ff670u: goto label_2ff670;
        case 0x2ff674u: goto label_2ff674;
        case 0x2ff678u: goto label_2ff678;
        case 0x2ff67cu: goto label_2ff67c;
        case 0x2ff680u: goto label_2ff680;
        case 0x2ff684u: goto label_2ff684;
        case 0x2ff688u: goto label_2ff688;
        case 0x2ff68cu: goto label_2ff68c;
        case 0x2ff690u: goto label_2ff690;
        case 0x2ff694u: goto label_2ff694;
        case 0x2ff698u: goto label_2ff698;
        case 0x2ff69cu: goto label_2ff69c;
        case 0x2ff6a0u: goto label_2ff6a0;
        case 0x2ff6a4u: goto label_2ff6a4;
        case 0x2ff6a8u: goto label_2ff6a8;
        case 0x2ff6acu: goto label_2ff6ac;
        case 0x2ff6b0u: goto label_2ff6b0;
        case 0x2ff6b4u: goto label_2ff6b4;
        case 0x2ff6b8u: goto label_2ff6b8;
        case 0x2ff6bcu: goto label_2ff6bc;
        case 0x2ff6c0u: goto label_2ff6c0;
        case 0x2ff6c4u: goto label_2ff6c4;
        case 0x2ff6c8u: goto label_2ff6c8;
        case 0x2ff6ccu: goto label_2ff6cc;
        case 0x2ff6d0u: goto label_2ff6d0;
        case 0x2ff6d4u: goto label_2ff6d4;
        case 0x2ff6d8u: goto label_2ff6d8;
        case 0x2ff6dcu: goto label_2ff6dc;
        case 0x2ff6e0u: goto label_2ff6e0;
        case 0x2ff6e4u: goto label_2ff6e4;
        case 0x2ff6e8u: goto label_2ff6e8;
        case 0x2ff6ecu: goto label_2ff6ec;
        case 0x2ff6f0u: goto label_2ff6f0;
        case 0x2ff6f4u: goto label_2ff6f4;
        case 0x2ff6f8u: goto label_2ff6f8;
        case 0x2ff6fcu: goto label_2ff6fc;
        case 0x2ff700u: goto label_2ff700;
        case 0x2ff704u: goto label_2ff704;
        case 0x2ff708u: goto label_2ff708;
        case 0x2ff70cu: goto label_2ff70c;
        case 0x2ff710u: goto label_2ff710;
        case 0x2ff714u: goto label_2ff714;
        case 0x2ff718u: goto label_2ff718;
        case 0x2ff71cu: goto label_2ff71c;
        case 0x2ff720u: goto label_2ff720;
        case 0x2ff724u: goto label_2ff724;
        case 0x2ff728u: goto label_2ff728;
        case 0x2ff72cu: goto label_2ff72c;
        case 0x2ff730u: goto label_2ff730;
        case 0x2ff734u: goto label_2ff734;
        case 0x2ff738u: goto label_2ff738;
        case 0x2ff73cu: goto label_2ff73c;
        case 0x2ff740u: goto label_2ff740;
        case 0x2ff744u: goto label_2ff744;
        case 0x2ff748u: goto label_2ff748;
        case 0x2ff74cu: goto label_2ff74c;
        case 0x2ff750u: goto label_2ff750;
        case 0x2ff754u: goto label_2ff754;
        case 0x2ff758u: goto label_2ff758;
        case 0x2ff75cu: goto label_2ff75c;
        case 0x2ff760u: goto label_2ff760;
        case 0x2ff764u: goto label_2ff764;
        case 0x2ff768u: goto label_2ff768;
        case 0x2ff76cu: goto label_2ff76c;
        case 0x2ff770u: goto label_2ff770;
        case 0x2ff774u: goto label_2ff774;
        case 0x2ff778u: goto label_2ff778;
        case 0x2ff77cu: goto label_2ff77c;
        case 0x2ff780u: goto label_2ff780;
        case 0x2ff784u: goto label_2ff784;
        case 0x2ff788u: goto label_2ff788;
        case 0x2ff78cu: goto label_2ff78c;
        case 0x2ff790u: goto label_2ff790;
        case 0x2ff794u: goto label_2ff794;
        case 0x2ff798u: goto label_2ff798;
        case 0x2ff79cu: goto label_2ff79c;
        case 0x2ff7a0u: goto label_2ff7a0;
        case 0x2ff7a4u: goto label_2ff7a4;
        case 0x2ff7a8u: goto label_2ff7a8;
        case 0x2ff7acu: goto label_2ff7ac;
        case 0x2ff7b0u: goto label_2ff7b0;
        case 0x2ff7b4u: goto label_2ff7b4;
        case 0x2ff7b8u: goto label_2ff7b8;
        case 0x2ff7bcu: goto label_2ff7bc;
        case 0x2ff7c0u: goto label_2ff7c0;
        case 0x2ff7c4u: goto label_2ff7c4;
        case 0x2ff7c8u: goto label_2ff7c8;
        case 0x2ff7ccu: goto label_2ff7cc;
        case 0x2ff7d0u: goto label_2ff7d0;
        case 0x2ff7d4u: goto label_2ff7d4;
        case 0x2ff7d8u: goto label_2ff7d8;
        case 0x2ff7dcu: goto label_2ff7dc;
        case 0x2ff7e0u: goto label_2ff7e0;
        case 0x2ff7e4u: goto label_2ff7e4;
        case 0x2ff7e8u: goto label_2ff7e8;
        case 0x2ff7ecu: goto label_2ff7ec;
        case 0x2ff7f0u: goto label_2ff7f0;
        case 0x2ff7f4u: goto label_2ff7f4;
        case 0x2ff7f8u: goto label_2ff7f8;
        case 0x2ff7fcu: goto label_2ff7fc;
        case 0x2ff800u: goto label_2ff800;
        case 0x2ff804u: goto label_2ff804;
        case 0x2ff808u: goto label_2ff808;
        case 0x2ff80cu: goto label_2ff80c;
        case 0x2ff810u: goto label_2ff810;
        case 0x2ff814u: goto label_2ff814;
        case 0x2ff818u: goto label_2ff818;
        case 0x2ff81cu: goto label_2ff81c;
        case 0x2ff820u: goto label_2ff820;
        case 0x2ff824u: goto label_2ff824;
        case 0x2ff828u: goto label_2ff828;
        case 0x2ff82cu: goto label_2ff82c;
        case 0x2ff830u: goto label_2ff830;
        case 0x2ff834u: goto label_2ff834;
        case 0x2ff838u: goto label_2ff838;
        case 0x2ff83cu: goto label_2ff83c;
        case 0x2ff840u: goto label_2ff840;
        case 0x2ff844u: goto label_2ff844;
        case 0x2ff848u: goto label_2ff848;
        case 0x2ff84cu: goto label_2ff84c;
        case 0x2ff850u: goto label_2ff850;
        case 0x2ff854u: goto label_2ff854;
        case 0x2ff858u: goto label_2ff858;
        case 0x2ff85cu: goto label_2ff85c;
        case 0x2ff860u: goto label_2ff860;
        case 0x2ff864u: goto label_2ff864;
        case 0x2ff868u: goto label_2ff868;
        case 0x2ff86cu: goto label_2ff86c;
        case 0x2ff870u: goto label_2ff870;
        case 0x2ff874u: goto label_2ff874;
        case 0x2ff878u: goto label_2ff878;
        case 0x2ff87cu: goto label_2ff87c;
        case 0x2ff880u: goto label_2ff880;
        case 0x2ff884u: goto label_2ff884;
        case 0x2ff888u: goto label_2ff888;
        case 0x2ff88cu: goto label_2ff88c;
        case 0x2ff890u: goto label_2ff890;
        case 0x2ff894u: goto label_2ff894;
        case 0x2ff898u: goto label_2ff898;
        case 0x2ff89cu: goto label_2ff89c;
        case 0x2ff8a0u: goto label_2ff8a0;
        case 0x2ff8a4u: goto label_2ff8a4;
        case 0x2ff8a8u: goto label_2ff8a8;
        case 0x2ff8acu: goto label_2ff8ac;
        case 0x2ff8b0u: goto label_2ff8b0;
        case 0x2ff8b4u: goto label_2ff8b4;
        case 0x2ff8b8u: goto label_2ff8b8;
        case 0x2ff8bcu: goto label_2ff8bc;
        case 0x2ff8c0u: goto label_2ff8c0;
        case 0x2ff8c4u: goto label_2ff8c4;
        case 0x2ff8c8u: goto label_2ff8c8;
        case 0x2ff8ccu: goto label_2ff8cc;
        case 0x2ff8d0u: goto label_2ff8d0;
        case 0x2ff8d4u: goto label_2ff8d4;
        case 0x2ff8d8u: goto label_2ff8d8;
        case 0x2ff8dcu: goto label_2ff8dc;
        case 0x2ff8e0u: goto label_2ff8e0;
        case 0x2ff8e4u: goto label_2ff8e4;
        case 0x2ff8e8u: goto label_2ff8e8;
        case 0x2ff8ecu: goto label_2ff8ec;
        case 0x2ff8f0u: goto label_2ff8f0;
        case 0x2ff8f4u: goto label_2ff8f4;
        case 0x2ff8f8u: goto label_2ff8f8;
        case 0x2ff8fcu: goto label_2ff8fc;
        case 0x2ff900u: goto label_2ff900;
        case 0x2ff904u: goto label_2ff904;
        case 0x2ff908u: goto label_2ff908;
        case 0x2ff90cu: goto label_2ff90c;
        case 0x2ff910u: goto label_2ff910;
        case 0x2ff914u: goto label_2ff914;
        case 0x2ff918u: goto label_2ff918;
        case 0x2ff91cu: goto label_2ff91c;
        case 0x2ff920u: goto label_2ff920;
        case 0x2ff924u: goto label_2ff924;
        case 0x2ff928u: goto label_2ff928;
        case 0x2ff92cu: goto label_2ff92c;
        case 0x2ff930u: goto label_2ff930;
        case 0x2ff934u: goto label_2ff934;
        case 0x2ff938u: goto label_2ff938;
        case 0x2ff93cu: goto label_2ff93c;
        case 0x2ff940u: goto label_2ff940;
        case 0x2ff944u: goto label_2ff944;
        case 0x2ff948u: goto label_2ff948;
        case 0x2ff94cu: goto label_2ff94c;
        case 0x2ff950u: goto label_2ff950;
        case 0x2ff954u: goto label_2ff954;
        case 0x2ff958u: goto label_2ff958;
        case 0x2ff95cu: goto label_2ff95c;
        case 0x2ff960u: goto label_2ff960;
        case 0x2ff964u: goto label_2ff964;
        case 0x2ff968u: goto label_2ff968;
        case 0x2ff96cu: goto label_2ff96c;
        case 0x2ff970u: goto label_2ff970;
        case 0x2ff974u: goto label_2ff974;
        case 0x2ff978u: goto label_2ff978;
        case 0x2ff97cu: goto label_2ff97c;
        case 0x2ff980u: goto label_2ff980;
        case 0x2ff984u: goto label_2ff984;
        case 0x2ff988u: goto label_2ff988;
        case 0x2ff98cu: goto label_2ff98c;
        case 0x2ff990u: goto label_2ff990;
        case 0x2ff994u: goto label_2ff994;
        case 0x2ff998u: goto label_2ff998;
        case 0x2ff99cu: goto label_2ff99c;
        case 0x2ff9a0u: goto label_2ff9a0;
        case 0x2ff9a4u: goto label_2ff9a4;
        case 0x2ff9a8u: goto label_2ff9a8;
        case 0x2ff9acu: goto label_2ff9ac;
        case 0x2ff9b0u: goto label_2ff9b0;
        case 0x2ff9b4u: goto label_2ff9b4;
        case 0x2ff9b8u: goto label_2ff9b8;
        case 0x2ff9bcu: goto label_2ff9bc;
        case 0x2ff9c0u: goto label_2ff9c0;
        case 0x2ff9c4u: goto label_2ff9c4;
        case 0x2ff9c8u: goto label_2ff9c8;
        case 0x2ff9ccu: goto label_2ff9cc;
        case 0x2ff9d0u: goto label_2ff9d0;
        case 0x2ff9d4u: goto label_2ff9d4;
        case 0x2ff9d8u: goto label_2ff9d8;
        case 0x2ff9dcu: goto label_2ff9dc;
        case 0x2ff9e0u: goto label_2ff9e0;
        case 0x2ff9e4u: goto label_2ff9e4;
        case 0x2ff9e8u: goto label_2ff9e8;
        case 0x2ff9ecu: goto label_2ff9ec;
        case 0x2ff9f0u: goto label_2ff9f0;
        case 0x2ff9f4u: goto label_2ff9f4;
        case 0x2ff9f8u: goto label_2ff9f8;
        case 0x2ff9fcu: goto label_2ff9fc;
        case 0x2ffa00u: goto label_2ffa00;
        case 0x2ffa04u: goto label_2ffa04;
        case 0x2ffa08u: goto label_2ffa08;
        case 0x2ffa0cu: goto label_2ffa0c;
        case 0x2ffa10u: goto label_2ffa10;
        case 0x2ffa14u: goto label_2ffa14;
        case 0x2ffa18u: goto label_2ffa18;
        case 0x2ffa1cu: goto label_2ffa1c;
        case 0x2ffa20u: goto label_2ffa20;
        case 0x2ffa24u: goto label_2ffa24;
        case 0x2ffa28u: goto label_2ffa28;
        case 0x2ffa2cu: goto label_2ffa2c;
        case 0x2ffa30u: goto label_2ffa30;
        case 0x2ffa34u: goto label_2ffa34;
        case 0x2ffa38u: goto label_2ffa38;
        case 0x2ffa3cu: goto label_2ffa3c;
        case 0x2ffa40u: goto label_2ffa40;
        case 0x2ffa44u: goto label_2ffa44;
        case 0x2ffa48u: goto label_2ffa48;
        case 0x2ffa4cu: goto label_2ffa4c;
        case 0x2ffa50u: goto label_2ffa50;
        case 0x2ffa54u: goto label_2ffa54;
        case 0x2ffa58u: goto label_2ffa58;
        case 0x2ffa5cu: goto label_2ffa5c;
        case 0x2ffa60u: goto label_2ffa60;
        case 0x2ffa64u: goto label_2ffa64;
        case 0x2ffa68u: goto label_2ffa68;
        case 0x2ffa6cu: goto label_2ffa6c;
        case 0x2ffa70u: goto label_2ffa70;
        case 0x2ffa74u: goto label_2ffa74;
        case 0x2ffa78u: goto label_2ffa78;
        case 0x2ffa7cu: goto label_2ffa7c;
        case 0x2ffa80u: goto label_2ffa80;
        case 0x2ffa84u: goto label_2ffa84;
        case 0x2ffa88u: goto label_2ffa88;
        case 0x2ffa8cu: goto label_2ffa8c;
        case 0x2ffa90u: goto label_2ffa90;
        case 0x2ffa94u: goto label_2ffa94;
        case 0x2ffa98u: goto label_2ffa98;
        case 0x2ffa9cu: goto label_2ffa9c;
        case 0x2ffaa0u: goto label_2ffaa0;
        case 0x2ffaa4u: goto label_2ffaa4;
        case 0x2ffaa8u: goto label_2ffaa8;
        case 0x2ffaacu: goto label_2ffaac;
        case 0x2ffab0u: goto label_2ffab0;
        case 0x2ffab4u: goto label_2ffab4;
        case 0x2ffab8u: goto label_2ffab8;
        case 0x2ffabcu: goto label_2ffabc;
        case 0x2ffac0u: goto label_2ffac0;
        case 0x2ffac4u: goto label_2ffac4;
        case 0x2ffac8u: goto label_2ffac8;
        case 0x2ffaccu: goto label_2ffacc;
        case 0x2ffad0u: goto label_2ffad0;
        case 0x2ffad4u: goto label_2ffad4;
        case 0x2ffad8u: goto label_2ffad8;
        case 0x2ffadcu: goto label_2ffadc;
        case 0x2ffae0u: goto label_2ffae0;
        case 0x2ffae4u: goto label_2ffae4;
        case 0x2ffae8u: goto label_2ffae8;
        case 0x2ffaecu: goto label_2ffaec;
        case 0x2ffaf0u: goto label_2ffaf0;
        case 0x2ffaf4u: goto label_2ffaf4;
        case 0x2ffaf8u: goto label_2ffaf8;
        case 0x2ffafcu: goto label_2ffafc;
        case 0x2ffb00u: goto label_2ffb00;
        case 0x2ffb04u: goto label_2ffb04;
        case 0x2ffb08u: goto label_2ffb08;
        case 0x2ffb0cu: goto label_2ffb0c;
        case 0x2ffb10u: goto label_2ffb10;
        case 0x2ffb14u: goto label_2ffb14;
        case 0x2ffb18u: goto label_2ffb18;
        case 0x2ffb1cu: goto label_2ffb1c;
        case 0x2ffb20u: goto label_2ffb20;
        case 0x2ffb24u: goto label_2ffb24;
        case 0x2ffb28u: goto label_2ffb28;
        case 0x2ffb2cu: goto label_2ffb2c;
        case 0x2ffb30u: goto label_2ffb30;
        case 0x2ffb34u: goto label_2ffb34;
        case 0x2ffb38u: goto label_2ffb38;
        case 0x2ffb3cu: goto label_2ffb3c;
        case 0x2ffb40u: goto label_2ffb40;
        case 0x2ffb44u: goto label_2ffb44;
        case 0x2ffb48u: goto label_2ffb48;
        case 0x2ffb4cu: goto label_2ffb4c;
        case 0x2ffb50u: goto label_2ffb50;
        case 0x2ffb54u: goto label_2ffb54;
        case 0x2ffb58u: goto label_2ffb58;
        case 0x2ffb5cu: goto label_2ffb5c;
        case 0x2ffb60u: goto label_2ffb60;
        case 0x2ffb64u: goto label_2ffb64;
        case 0x2ffb68u: goto label_2ffb68;
        case 0x2ffb6cu: goto label_2ffb6c;
        case 0x2ffb70u: goto label_2ffb70;
        case 0x2ffb74u: goto label_2ffb74;
        case 0x2ffb78u: goto label_2ffb78;
        case 0x2ffb7cu: goto label_2ffb7c;
        case 0x2ffb80u: goto label_2ffb80;
        case 0x2ffb84u: goto label_2ffb84;
        case 0x2ffb88u: goto label_2ffb88;
        case 0x2ffb8cu: goto label_2ffb8c;
        case 0x2ffb90u: goto label_2ffb90;
        default: break;
    }

    ctx->pc = 0x2ff5d0u;

label_2ff5d0:
    // 0x2ff5d0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x2ff5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_2ff5d4:
    // 0x2ff5d4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2ff5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2ff5d8:
    // 0x2ff5d8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x2ff5d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_2ff5dc:
    // 0x2ff5dc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x2ff5dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_2ff5e0:
    // 0x2ff5e0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x2ff5e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_2ff5e4:
    // 0x2ff5e4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2ff5e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ff5e8:
    // 0x2ff5e8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2ff5e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_2ff5ec:
    // 0x2ff5ec: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2ff5ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ff5f0:
    // 0x2ff5f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2ff5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2ff5f4:
    // 0x2ff5f4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2ff5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_2ff5f8:
    // 0x2ff5f8: 0x1260015c  beqz        $s3, . + 4 + (0x15C << 2)
label_2ff5fc:
    if (ctx->pc == 0x2FF5FCu) {
        ctx->pc = 0x2FF5FCu;
            // 0x2ff5fc: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x2FF600u;
        goto label_2ff600;
    }
    ctx->pc = 0x2FF5F8u;
    {
        const bool branch_taken_0x2ff5f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF5F8u;
            // 0x2ff5fc: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff5f8) {
            ctx->pc = 0x2FFB6Cu;
            goto label_2ffb6c;
        }
    }
    ctx->pc = 0x2FF600u;
label_2ff600:
    // 0x2ff600: 0xc0a0ed8  jal         func_283B60
label_2ff604:
    if (ctx->pc == 0x2FF604u) {
        ctx->pc = 0x2FF604u;
            // 0x2ff604: 0x8e852e50  lw          $a1, 0x2E50($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11856)));
        ctx->pc = 0x2FF608u;
        goto label_2ff608;
    }
    ctx->pc = 0x2FF600u;
    SET_GPR_U32(ctx, 31, 0x2FF608u);
    ctx->pc = 0x2FF604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF600u;
            // 0x2ff604: 0x8e852e50  lw          $a1, 0x2E50($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11856)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF608u; }
        if (ctx->pc != 0x2FF608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF608u; }
        if (ctx->pc != 0x2FF608u) { return; }
    }
    ctx->pc = 0x2FF608u;
label_2ff608:
    // 0x2ff608: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2ff608u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ff60c:
    // 0x2ff60c: 0x12000157  beqz        $s0, . + 4 + (0x157 << 2)
label_2ff610:
    if (ctx->pc == 0x2FF610u) {
        ctx->pc = 0x2FF614u;
        goto label_2ff614;
    }
    ctx->pc = 0x2FF60Cu;
    {
        const bool branch_taken_0x2ff60c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff60c) {
            ctx->pc = 0x2FFB6Cu;
            goto label_2ffb6c;
        }
    }
    ctx->pc = 0x2FF614u;
label_2ff614:
    // 0x2ff614: 0x8e852e54  lw          $a1, 0x2E54($s4)
    ctx->pc = 0x2ff614u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 11860)));
label_2ff618:
    // 0x2ff618: 0xc0a0e30  jal         func_2838C0
label_2ff61c:
    if (ctx->pc == 0x2FF61Cu) {
        ctx->pc = 0x2FF61Cu;
            // 0x2ff61c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF620u;
        goto label_2ff620;
    }
    ctx->pc = 0x2FF618u;
    SET_GPR_U32(ctx, 31, 0x2FF620u);
    ctx->pc = 0x2FF61Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF618u;
            // 0x2ff61c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF620u; }
        if (ctx->pc != 0x2FF620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF620u; }
        if (ctx->pc != 0x2FF620u) { return; }
    }
    ctx->pc = 0x2FF620u;
label_2ff620:
    // 0x2ff620: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ff620u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ff624:
    // 0x2ff624: 0x12200151  beqz        $s1, . + 4 + (0x151 << 2)
label_2ff628:
    if (ctx->pc == 0x2FF628u) {
        ctx->pc = 0x2FF62Cu;
        goto label_2ff62c;
    }
    ctx->pc = 0x2FF624u;
    {
        const bool branch_taken_0x2ff624 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ff624) {
            ctx->pc = 0x2FFB6Cu;
            goto label_2ffb6c;
        }
    }
    ctx->pc = 0x2FF62Cu;
label_2ff62c:
    // 0x2ff62c: 0x8e390060  lw          $t9, 0x60($s1)
    ctx->pc = 0x2ff62cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_2ff630:
    // 0x2ff630: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2ff630u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2ff634:
    // 0x2ff634: 0x320f809  jalr        $t9
label_2ff638:
    if (ctx->pc == 0x2FF638u) {
        ctx->pc = 0x2FF638u;
            // 0x2ff638: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF63Cu;
        goto label_2ff63c;
    }
    ctx->pc = 0x2FF634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FF63Cu);
        ctx->pc = 0x2FF638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF634u;
            // 0x2ff638: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FF63Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FF63Cu; }
            if (ctx->pc != 0x2FF63Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2FF63Cu;
label_2ff63c:
    // 0x2ff63c: 0x240303e8  addiu       $v1, $zero, 0x3E8
    ctx->pc = 0x2ff63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_2ff640:
    // 0x2ff640: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_2ff644:
    if (ctx->pc == 0x2FF644u) {
        ctx->pc = 0x2FF648u;
        goto label_2ff648;
    }
    ctx->pc = 0x2FF640u;
    {
        const bool branch_taken_0x2ff640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2ff640) {
            ctx->pc = 0x2FF650u;
            goto label_2ff650;
        }
    }
    ctx->pc = 0x2FF648u;
label_2ff648:
    // 0x2ff648: 0x10000149  b           . + 4 + (0x149 << 2)
label_2ff64c:
    if (ctx->pc == 0x2FF64Cu) {
        ctx->pc = 0x2FF64Cu;
            // 0x2ff64c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x2FF650u;
        goto label_2ff650;
    }
    ctx->pc = 0x2FF648u;
    {
        const bool branch_taken_0x2ff648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF64Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF648u;
            // 0x2ff64c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff648) {
            ctx->pc = 0x2FFB70u;
            goto label_2ffb70;
        }
    }
    ctx->pc = 0x2FF650u;
label_2ff650:
    // 0x2ff650: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2ff650u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ff654:
    // 0x2ff654: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ff654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ff658:
    // 0x2ff658: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2ff658u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2ff65c:
    // 0x2ff65c: 0x320f809  jalr        $t9
label_2ff660:
    if (ctx->pc == 0x2FF660u) {
        ctx->pc = 0x2FF660u;
            // 0x2ff660: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x2FF664u;
        goto label_2ff664;
    }
    ctx->pc = 0x2FF65Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FF664u);
        ctx->pc = 0x2FF660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF65Cu;
            // 0x2ff660: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FF664u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FF664u; }
            if (ctx->pc != 0x2FF664u) { return; }
        }
        }
    }
    ctx->pc = 0x2FF664u;
label_2ff664:
    // 0x2ff664: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2ff664u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ff668:
    // 0x2ff668: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ff668u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ff66c:
    // 0x2ff66c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2ff66cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2ff670:
    // 0x2ff670: 0x320f809  jalr        $t9
label_2ff674:
    if (ctx->pc == 0x2FF674u) {
        ctx->pc = 0x2FF674u;
            // 0x2ff674: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x2FF678u;
        goto label_2ff678;
    }
    ctx->pc = 0x2FF670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FF678u);
        ctx->pc = 0x2FF674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF670u;
            // 0x2ff674: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FF678u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FF678u; }
            if (ctx->pc != 0x2FF678u) { return; }
        }
        }
    }
    ctx->pc = 0x2FF678u;
label_2ff678:
    // 0x2ff678: 0x27b200c4  addiu       $s2, $sp, 0xC4
    ctx->pc = 0x2ff678u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
label_2ff67c:
    // 0x2ff67c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2ff67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2ff680:
    // 0x2ff680: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x2ff680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2ff684:
    // 0x2ff684: 0xc04c154  jal         func_130550
label_2ff688:
    if (ctx->pc == 0x2FF688u) {
        ctx->pc = 0x2FF688u;
            // 0x2ff688: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x2FF68Cu;
        goto label_2ff68c;
    }
    ctx->pc = 0x2FF684u;
    SET_GPR_U32(ctx, 31, 0x2FF68Cu);
    ctx->pc = 0x2FF688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF684u;
            // 0x2ff688: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130550u;
    if (runtime->hasFunction(0x130550u)) {
        auto targetFn = runtime->lookupFunction(0x130550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF68Cu; }
        if (ctx->pc != 0x2FF68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgCreateMatrixPY__FPA4_fPff_0x130550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF68Cu; }
        if (ctx->pc != 0x2FF68Cu) { return; }
    }
    ctx->pc = 0x2FF68Cu;
label_2ff68c:
    // 0x2ff68c: 0xc04c678  jal         func_1319E0
label_2ff690:
    if (ctx->pc == 0x2FF690u) {
        ctx->pc = 0x2FF690u;
            // 0x2ff690: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF694u;
        goto label_2ff694;
    }
    ctx->pc = 0x2FF68Cu;
    SET_GPR_U32(ctx, 31, 0x2FF694u);
    ctx->pc = 0x2FF690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF68Cu;
            // 0x2ff690: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319E0u;
    if (runtime->hasFunction(0x1319E0u)) {
        auto targetFn = runtime->lookupFunction(0x1319E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF694u; }
        if (ctx->pc != 0x2FF694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAngle__15mgCCameraFollowFv_0x1319e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF694u; }
        if (ctx->pc != 0x2FF694u) { return; }
    }
    ctx->pc = 0x2FF694u;
label_2ff694:
    // 0x2ff694: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2ff694u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_2ff698:
    // 0x2ff698: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x2ff698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_2ff69c:
    // 0x2ff69c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ff69cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ff6a0:
    // 0x2ff6a0: 0xc04c374  jal         func_130DD0
label_2ff6a4:
    if (ctx->pc == 0x2FF6A4u) {
        ctx->pc = 0x2FF6A4u;
            // 0x2ff6a4: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x2FF6A8u;
        goto label_2ff6a8;
    }
    ctx->pc = 0x2FF6A0u;
    SET_GPR_U32(ctx, 31, 0x2FF6A8u);
    ctx->pc = 0x2FF6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF6A0u;
            // 0x2ff6a4: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF6A8u; }
        if (ctx->pc != 0x2FF6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF6A8u; }
        if (ctx->pc != 0x2FF6A8u) { return; }
    }
    ctx->pc = 0x2FF6A8u;
label_2ff6a8:
    // 0x2ff6a8: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x2ff6a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ff6ac:
    // 0x2ff6ac: 0xc04c374  jal         func_130DD0
label_2ff6b0:
    if (ctx->pc == 0x2FF6B0u) {
        ctx->pc = 0x2FF6B0u;
            // 0x2ff6b0: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x2FF6B4u;
        goto label_2ff6b4;
    }
    ctx->pc = 0x2FF6ACu;
    SET_GPR_U32(ctx, 31, 0x2FF6B4u);
    ctx->pc = 0x2FF6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF6ACu;
            // 0x2ff6b0: 0x46000b01  sub.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF6B4u; }
        if (ctx->pc != 0x2FF6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF6B4u; }
        if (ctx->pc != 0x2FF6B4u) { return; }
    }
    ctx->pc = 0x2FF6B4u;
label_2ff6b4:
    // 0x2ff6b4: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x2ff6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_2ff6b8:
    // 0x2ff6b8: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2ff6b8u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2ff6bc:
    // 0x2ff6bc: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2ff6bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2ff6c0:
    // 0x2ff6c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ff6c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ff6c4:
    // 0x2ff6c4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2ff6c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ff6c8:
    // 0x2ff6c8: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2ff6c8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ff6cc:
    // 0x2ff6cc: 0x0  nop
    ctx->pc = 0x2ff6ccu;
    // NOP
label_2ff6d0:
    // 0x2ff6d0: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_2ff6d4:
    if (ctx->pc == 0x2FF6D4u) {
        ctx->pc = 0x2FF6D4u;
            // 0x2ff6d4: 0x3c02becc  lui         $v0, 0xBECC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48844 << 16));
        ctx->pc = 0x2FF6D8u;
        goto label_2ff6d8;
    }
    ctx->pc = 0x2FF6D0u;
    {
        const bool branch_taken_0x2ff6d0 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FF6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF6D0u;
            // 0x2ff6d4: 0x3c02becc  lui         $v0, 0xBECC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48844 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff6d0) {
            ctx->pc = 0x2FF6F8u;
            goto label_2ff6f8;
        }
    }
    ctx->pc = 0x2FF6D8u;
label_2ff6d8:
    // 0x2ff6d8: 0xc04c374  jal         func_130DD0
label_2ff6dc:
    if (ctx->pc == 0x2FF6DCu) {
        ctx->pc = 0x2FF6DCu;
            // 0x2ff6dc: 0x4600a301  sub.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x2FF6E0u;
        goto label_2ff6e0;
    }
    ctx->pc = 0x2FF6D8u;
    SET_GPR_U32(ctx, 31, 0x2FF6E0u);
    ctx->pc = 0x2FF6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF6D8u;
            // 0x2ff6dc: 0x4600a301  sub.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF6E0u; }
        if (ctx->pc != 0x2FF6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF6E0u; }
        if (ctx->pc != 0x2FF6E0u) { return; }
    }
    ctx->pc = 0x2FF6E0u;
label_2ff6e0:
    // 0x2ff6e0: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x2ff6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_2ff6e4:
    // 0x2ff6e4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2ff6e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2ff6e8:
    // 0x2ff6e8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ff6e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ff6ec:
    // 0x2ff6ec: 0x0  nop
    ctx->pc = 0x2ff6ecu;
    // NOP
label_2ff6f0:
    // 0x2ff6f0: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2ff6f0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2ff6f4:
    // 0x2ff6f4: 0x3c02becc  lui         $v0, 0xBECC
    ctx->pc = 0x2ff6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48844 << 16));
label_2ff6f8:
    // 0x2ff6f8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2ff6f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2ff6fc:
    // 0x2ff6fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ff6fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ff700:
    // 0x2ff700: 0x0  nop
    ctx->pc = 0x2ff700u;
    // NOP
label_2ff704:
    // 0x2ff704: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x2ff704u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ff708:
    // 0x2ff708: 0x0  nop
    ctx->pc = 0x2ff708u;
    // NOP
label_2ff70c:
    // 0x2ff70c: 0x4500000c  bc1f        . + 4 + (0xC << 2)
label_2ff710:
    if (ctx->pc == 0x2FF710u) {
        ctx->pc = 0x2FF710u;
            // 0x2ff710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF714u;
        goto label_2ff714;
    }
    ctx->pc = 0x2FF70Cu;
    {
        const bool branch_taken_0x2ff70c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FF710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF70Cu;
            // 0x2ff710: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff70c) {
            ctx->pc = 0x2FF740u;
            goto label_2ff740;
        }
    }
    ctx->pc = 0x2FF714u;
label_2ff714:
    // 0x2ff714: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x2ff714u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_2ff718:
    // 0x2ff718: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2ff718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2ff71c:
    // 0x2ff71c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ff71cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ff720:
    // 0x2ff720: 0xc04c374  jal         func_130DD0
label_2ff724:
    if (ctx->pc == 0x2FF724u) {
        ctx->pc = 0x2FF724u;
            // 0x2ff724: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->pc = 0x2FF728u;
        goto label_2ff728;
    }
    ctx->pc = 0x2FF720u;
    SET_GPR_U32(ctx, 31, 0x2FF728u);
    ctx->pc = 0x2FF724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF720u;
            // 0x2ff724: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF728u; }
        if (ctx->pc != 0x2FF728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF728u; }
        if (ctx->pc != 0x2FF728u) { return; }
    }
    ctx->pc = 0x2FF728u;
label_2ff728:
    // 0x2ff728: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x2ff728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_2ff72c:
    // 0x2ff72c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2ff72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2ff730:
    // 0x2ff730: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ff730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ff734:
    // 0x2ff734: 0x0  nop
    ctx->pc = 0x2ff734u;
    // NOP
label_2ff738:
    // 0x2ff738: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x2ff738u;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2ff73c:
    // 0x2ff73c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ff73cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ff740:
    // 0x2ff740: 0xc0bb1c4  jal         func_2EC710
label_2ff744:
    if (ctx->pc == 0x2FF744u) {
        ctx->pc = 0x2FF748u;
        goto label_2ff748;
    }
    ctx->pc = 0x2FF740u;
    SET_GPR_U32(ctx, 31, 0x2FF748u);
    ctx->pc = 0x2EC710u;
    if (runtime->hasFunction(0x2EC710u)) {
        auto targetFn = runtime->lookupFunction(0x2EC710u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF748u; }
        if (ctx->pc != 0x2FF748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Rotate__14CCameraControlFf_0x2ec710(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF748u; }
        if (ctx->pc != 0x2FF748u) { return; }
    }
    ctx->pc = 0x2FF748u;
label_2ff748:
    // 0x2ff748: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ff748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ff74c:
    // 0x2ff74c: 0xc0bb548  jal         func_2ED520
label_2ff750:
    if (ctx->pc == 0x2FF750u) {
        ctx->pc = 0x2FF750u;
            // 0x2ff750: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2FF754u;
        goto label_2ff754;
    }
    ctx->pc = 0x2FF74Cu;
    SET_GPR_U32(ctx, 31, 0x2FF754u);
    ctx->pc = 0x2FF750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF74Cu;
            // 0x2ff750: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED520u;
    if (runtime->hasFunction(0x2ED520u)) {
        auto targetFn = runtime->lookupFunction(0x2ED520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF754u; }
        if (ctx->pc != 0x2FF754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Analog__11CPadControlFi_0x2ed520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF754u; }
        if (ctx->pc != 0x2FF754u) { return; }
    }
    ctx->pc = 0x2FF754u;
label_2ff754:
    // 0x2ff754: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x2ff754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_2ff758:
    // 0x2ff758: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2ff758u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2ff75c:
    // 0x2ff75c: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2ff75cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2ff760:
    // 0x2ff760: 0x3c0642c8  lui         $a2, 0x42C8
    ctx->pc = 0x2ff760u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17096 << 16));
label_2ff764:
    // 0x2ff764: 0xc782a008  lwc1        $f2, -0x5FF8($gp)
    ctx->pc = 0x2ff764u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_2ff768:
    // 0x2ff768: 0x3c053f80  lui         $a1, 0x3F80
    ctx->pc = 0x2ff768u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16256 << 16));
label_2ff76c:
    // 0x2ff76c: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x2ff76cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_2ff770:
    // 0x2ff770: 0x3c043f00  lui         $a0, 0x3F00
    ctx->pc = 0x2ff770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16128 << 16));
label_2ff774:
    // 0x2ff774: 0x3c034370  lui         $v1, 0x4370
    ctx->pc = 0x2ff774u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17264 << 16));
label_2ff778:
    // 0x2ff778: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x2ff778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
label_2ff77c:
    // 0x2ff77c: 0x46001001  sub.s       $f0, $f2, $f0
    ctx->pc = 0x2ff77cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[2], ctx->f[0]);
label_2ff780:
    // 0x2ff780: 0xc4219ce0  lwc1        $f1, -0x6320($at)
    ctx->pc = 0x2ff780u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294941920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ff784:
    // 0x2ff784: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x2ff784u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2ff788:
    // 0x2ff788: 0xe780a008  swc1        $f0, -0x5FF8($gp)
    ctx->pc = 0x2ff788u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942728), bits); }
label_2ff78c:
    // 0x2ff78c: 0xc780a008  lwc1        $f0, -0x5FF8($gp)
    ctx->pc = 0x2ff78cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ff790:
    // 0x2ff790: 0x468008e0  cvt.s.w     $f3, $f1
    ctx->pc = 0x2ff790u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
label_2ff794:
    // 0x2ff794: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x2ff794u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
label_2ff798:
    // 0x2ff798: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x2ff798u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ff79c:
    // 0x2ff79c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x2ff79cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2ff7a0:
    // 0x2ff7a0: 0x0  nop
    ctx->pc = 0x2ff7a0u;
    // NOP
label_2ff7a4:
    // 0x2ff7a4: 0x46020880  add.s       $f2, $f1, $f2
    ctx->pc = 0x2ff7a4u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2ff7a8:
    // 0x2ff7a8: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2ff7a8u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ff7ac:
    // 0x2ff7ac: 0x0  nop
    ctx->pc = 0x2ff7acu;
    // NOP
label_2ff7b0:
    // 0x2ff7b0: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x2ff7b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2ff7b4:
    // 0x2ff7b4: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2ff7b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2ff7b8:
    // 0x2ff7b8: 0x0  nop
    ctx->pc = 0x2ff7b8u;
    // NOP
label_2ff7bc:
    // 0x2ff7bc: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x2ff7bcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_2ff7c0:
    // 0x2ff7c0: 0x46020034  c.lt.s      $f0, $f2
    ctx->pc = 0x2ff7c0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ff7c4:
    // 0x2ff7c4: 0x0  nop
    ctx->pc = 0x2ff7c4u;
    // NOP
label_2ff7c8:
    // 0x2ff7c8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2ff7cc:
    if (ctx->pc == 0x2FF7CCu) {
        ctx->pc = 0x2FF7CCu;
            // 0x2ff7cc: 0x46020840  add.s       $f1, $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->pc = 0x2FF7D0u;
        goto label_2ff7d0;
    }
    ctx->pc = 0x2FF7C8u;
    {
        const bool branch_taken_0x2ff7c8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FF7CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF7C8u;
            // 0x2ff7cc: 0x46020840  add.s       $f1, $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff7c8) {
            ctx->pc = 0x2FF7D4u;
            goto label_2ff7d4;
        }
    }
    ctx->pc = 0x2FF7D0u;
label_2ff7d0:
    // 0x2ff7d0: 0xe782a008  swc1        $f2, -0x5FF8($gp)
    ctx->pc = 0x2ff7d0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942728), bits); }
label_2ff7d4:
    // 0x2ff7d4: 0xc780a008  lwc1        $f0, -0x5FF8($gp)
    ctx->pc = 0x2ff7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ff7d8:
    // 0x2ff7d8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2ff7d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ff7dc:
    // 0x2ff7dc: 0x0  nop
    ctx->pc = 0x2ff7dcu;
    // NOP
label_2ff7e0:
    // 0x2ff7e0: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2ff7e4:
    if (ctx->pc == 0x2FF7E4u) {
        ctx->pc = 0x2FF7E8u;
        goto label_2ff7e8;
    }
    ctx->pc = 0x2FF7E0u;
    {
        const bool branch_taken_0x2ff7e0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ff7e0) {
            ctx->pc = 0x2FF7ECu;
            goto label_2ff7ec;
        }
    }
    ctx->pc = 0x2FF7E8u;
label_2ff7e8:
    // 0x2ff7e8: 0xe781a008  swc1        $f1, -0x5FF8($gp)
    ctx->pc = 0x2ff7e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942728), bits); }
label_2ff7ec:
    // 0x2ff7ec: 0xc784a008  lwc1        $f4, -0x5FF8($gp)
    ctx->pc = 0x2ff7ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294942728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_2ff7f0:
    // 0x2ff7f0: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x2ff7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
label_2ff7f4:
    // 0x2ff7f4: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x2ff7f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_2ff7f8:
    // 0x2ff7f8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x2ff7f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2ff7fc:
    // 0x2ff7fc: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x2ff7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_2ff800:
    // 0x2ff800: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x2ff800u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ff804:
    // 0x2ff804: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x2ff804u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
label_2ff808:
    // 0x2ff808: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ff808u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ff80c:
    // 0x2ff80c: 0x460320c1  sub.s       $f3, $f4, $f3
    ctx->pc = 0x2ff80cu;
    ctx->f[3] = FPU_SUB_S(ctx->f[4], ctx->f[3]);
label_2ff810:
    // 0x2ff810: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x2ff810u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_2ff814:
    // 0x2ff814: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x2ff814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2ff818:
    // 0x2ff818: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x2ff818u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_2ff81c:
    // 0x2ff81c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2ff81cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2ff820:
    // 0x2ff820: 0x46001803  div.s       $f0, $f3, $f0
    ctx->pc = 0x2ff820u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[3], ctx->f[0]); }
label_2ff824:
    // 0x2ff824: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ff824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ff828:
    // 0x2ff828: 0x0  nop
    ctx->pc = 0x2ff828u;
    // NOP
label_2ff82c:
    // 0x2ff82c: 0xe780a00c  swc1        $f0, -0x5FF4($gp)
    ctx->pc = 0x2ff82cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942732), bits); }
label_2ff830:
    // 0x2ff830: 0x46000006  mov.s       $f0, $f0
    ctx->pc = 0x2ff830u;
    ctx->f[0] = FPU_MOV_S(ctx->f[0]);
label_2ff834:
    // 0x2ff834: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x2ff834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_2ff838:
    // 0x2ff838: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2ff838u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_2ff83c:
    // 0x2ff83c: 0x2442d970  addiu       $v0, $v0, -0x2690
    ctx->pc = 0x2ff83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957424));
label_2ff840:
    // 0x2ff840: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x2ff840u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2ff844:
    // 0x2ff844: 0x0  nop
    ctx->pc = 0x2ff844u;
    // NOP
label_2ff848:
    // 0x2ff848: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x2ff848u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_2ff84c:
    // 0x2ff84c: 0xe780a00c  swc1        $f0, -0x5FF4($gp)
    ctx->pc = 0x2ff84cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294942732), bits); }
label_2ff850:
    // 0x2ff850: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x2ff850u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2ff854:
    // 0x2ff854: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x2ff854u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
label_2ff858:
    // 0x2ff858: 0xc041bb0  jal         func_106EC0
label_2ff85c:
    if (ctx->pc == 0x2FF85Cu) {
        ctx->pc = 0x2FF85Cu;
            // 0x2ff85c: 0xe7a400e8  swc1        $f4, 0xE8($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
        ctx->pc = 0x2FF860u;
        goto label_2ff860;
    }
    ctx->pc = 0x2FF858u;
    SET_GPR_U32(ctx, 31, 0x2FF860u);
    ctx->pc = 0x2FF85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF858u;
            // 0x2ff85c: 0xe7a400e8  swc1        $f4, 0xE8($sp) (Delay Slot)
        { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF860u; }
        if (ctx->pc != 0x2FF860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF860u; }
        if (ctx->pc != 0x2FF860u) { return; }
    }
    ctx->pc = 0x2FF860u;
label_2ff860:
    // 0x2ff860: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ff860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ff864:
    // 0x2ff864: 0xc04c6a0  jal         func_131A80
label_2ff868:
    if (ctx->pc == 0x2FF868u) {
        ctx->pc = 0x2FF868u;
            // 0x2ff868: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x2FF86Cu;
        goto label_2ff86c;
    }
    ctx->pc = 0x2FF864u;
    SET_GPR_U32(ctx, 31, 0x2FF86Cu);
    ctx->pc = 0x2FF868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF864u;
            // 0x2ff868: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A80u;
    if (runtime->hasFunction(0x131A80u)) {
        auto targetFn = runtime->lookupFunction(0x131A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF86Cu; }
        if (ctx->pc != 0x2FF86Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFollowOffset__15mgCCameraFollowFPf_0x131a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF86Cu; }
        if (ctx->pc != 0x2FF86Cu) { return; }
    }
    ctx->pc = 0x2FF86Cu;
label_2ff86c:
    // 0x2ff86c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2ff86cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2ff870:
    // 0x2ff870: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2ff870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2ff874:
    // 0x2ff874: 0xc041c38  jal         func_1070E0
label_2ff878:
    if (ctx->pc == 0x2FF878u) {
        ctx->pc = 0x2FF878u;
            // 0x2ff878: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x2FF87Cu;
        goto label_2ff87c;
    }
    ctx->pc = 0x2FF874u;
    SET_GPR_U32(ctx, 31, 0x2FF87Cu);
    ctx->pc = 0x2FF878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF874u;
            // 0x2ff878: 0x27a60100  addiu       $a2, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF87Cu; }
        if (ctx->pc != 0x2FF87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF87Cu; }
        if (ctx->pc != 0x2FF87Cu) { return; }
    }
    ctx->pc = 0x2FF87Cu;
label_2ff87c:
    // 0x2ff87c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ff87cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ff880:
    // 0x2ff880: 0xc04c574  jal         func_1315D0
label_2ff884:
    if (ctx->pc == 0x2FF884u) {
        ctx->pc = 0x2FF884u;
            // 0x2ff884: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x2FF888u;
        goto label_2ff888;
    }
    ctx->pc = 0x2FF880u;
    SET_GPR_U32(ctx, 31, 0x2FF888u);
    ctx->pc = 0x2FF884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF880u;
            // 0x2ff884: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF888u; }
        if (ctx->pc != 0x2FF888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF888u; }
        if (ctx->pc != 0x2FF888u) { return; }
    }
    ctx->pc = 0x2FF888u;
label_2ff888:
    // 0x2ff888: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2ff888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2ff88c:
    // 0x2ff88c: 0xc04c028  jal         func_1300A0
label_2ff890:
    if (ctx->pc == 0x2FF890u) {
        ctx->pc = 0x2FF890u;
            // 0x2ff890: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x2FF894u;
        goto label_2ff894;
    }
    ctx->pc = 0x2FF88Cu;
    SET_GPR_U32(ctx, 31, 0x2FF894u);
    ctx->pc = 0x2FF890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF88Cu;
            // 0x2ff890: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1300A0u;
    if (runtime->hasFunction(0x1300A0u)) {
        auto targetFn = runtime->lookupFunction(0x1300A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF894u; }
        if (ctx->pc != 0x2FF894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVectorXZ__FPfPf_0x1300a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF894u; }
        if (ctx->pc != 0x2FF894u) { return; }
    }
    ctx->pc = 0x2FF894u;
label_2ff894:
    // 0x2ff894: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x2ff894u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_2ff898:
    // 0x2ff898: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2ff898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2ff89c:
    // 0x2ff89c: 0xc04c028  jal         func_1300A0
label_2ff8a0:
    if (ctx->pc == 0x2FF8A0u) {
        ctx->pc = 0x2FF8A0u;
            // 0x2ff8a0: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x2FF8A4u;
        goto label_2ff8a4;
    }
    ctx->pc = 0x2FF89Cu;
    SET_GPR_U32(ctx, 31, 0x2FF8A4u);
    ctx->pc = 0x2FF8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF89Cu;
            // 0x2ff8a0: 0x27a500e0  addiu       $a1, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1300A0u;
    if (runtime->hasFunction(0x1300A0u)) {
        auto targetFn = runtime->lookupFunction(0x1300A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF8A4u; }
        if (ctx->pc != 0x2FF8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVectorXZ__FPfPf_0x1300a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF8A4u; }
        if (ctx->pc != 0x2FF8A4u) { return; }
    }
    ctx->pc = 0x2FF8A4u;
label_2ff8a4:
    // 0x2ff8a4: 0x0  nop
    ctx->pc = 0x2ff8a4u;
    // NOP
label_2ff8a8:
    // 0x2ff8a8: 0x0  nop
    ctx->pc = 0x2ff8a8u;
    // NOP
label_2ff8ac:
    // 0x2ff8ac: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x2ff8acu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_2ff8b0:
    // 0x2ff8b0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2ff8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_2ff8b4:
    // 0x2ff8b4: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x2ff8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2ff8b8:
    // 0x2ff8b8: 0xc041c3e  jal         func_1070F8
label_2ff8bc:
    if (ctx->pc == 0x2FF8BCu) {
        ctx->pc = 0x2FF8BCu;
            // 0x2ff8bc: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x2FF8C0u;
        goto label_2ff8c0;
    }
    ctx->pc = 0x2FF8B8u;
    SET_GPR_U32(ctx, 31, 0x2FF8C0u);
    ctx->pc = 0x2FF8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF8B8u;
            // 0x2ff8bc: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF8C0u; }
        if (ctx->pc != 0x2FF8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF8C0u; }
        if (ctx->pc != 0x2FF8C0u) { return; }
    }
    ctx->pc = 0x2FF8C0u;
label_2ff8c0:
    // 0x2ff8c0: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x2ff8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_2ff8c4:
    // 0x2ff8c4: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2ff8c4u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_2ff8c8:
    // 0x2ff8c8: 0xc041c4a  jal         func_107128
label_2ff8cc:
    if (ctx->pc == 0x2FF8CCu) {
        ctx->pc = 0x2FF8CCu;
            // 0x2ff8cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF8D0u;
        goto label_2ff8d0;
    }
    ctx->pc = 0x2FF8C8u;
    SET_GPR_U32(ctx, 31, 0x2FF8D0u);
    ctx->pc = 0x2FF8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF8C8u;
            // 0x2ff8cc: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF8D0u; }
        if (ctx->pc != 0x2FF8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF8D0u; }
        if (ctx->pc != 0x2FF8D0u) { return; }
    }
    ctx->pc = 0x2FF8D0u;
label_2ff8d0:
    // 0x2ff8d0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2ff8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2ff8d4:
    // 0x2ff8d4: 0x27a50120  addiu       $a1, $sp, 0x120
    ctx->pc = 0x2ff8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_2ff8d8:
    // 0x2ff8d8: 0xc041c38  jal         func_1070E0
label_2ff8dc:
    if (ctx->pc == 0x2FF8DCu) {
        ctx->pc = 0x2FF8DCu;
            // 0x2ff8dc: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x2FF8E0u;
        goto label_2ff8e0;
    }
    ctx->pc = 0x2FF8D8u;
    SET_GPR_U32(ctx, 31, 0x2FF8E0u);
    ctx->pc = 0x2FF8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF8D8u;
            // 0x2ff8dc: 0x27a60110  addiu       $a2, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF8E0u; }
        if (ctx->pc != 0x2FF8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF8E0u; }
        if (ctx->pc != 0x2FF8E0u) { return; }
    }
    ctx->pc = 0x2FF8E0u;
label_2ff8e0:
    // 0x2ff8e0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2ff8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_2ff8e4:
    // 0x2ff8e4: 0x27a60100  addiu       $a2, $sp, 0x100
    ctx->pc = 0x2ff8e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2ff8e8:
    // 0x2ff8e8: 0xc041c3e  jal         func_1070F8
label_2ff8ec:
    if (ctx->pc == 0x2FF8ECu) {
        ctx->pc = 0x2FF8ECu;
            // 0x2ff8ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF8F0u;
        goto label_2ff8f0;
    }
    ctx->pc = 0x2FF8E8u;
    SET_GPR_U32(ctx, 31, 0x2FF8F0u);
    ctx->pc = 0x2FF8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF8E8u;
            // 0x2ff8ec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF8F0u; }
        if (ctx->pc != 0x2FF8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF8F0u; }
        if (ctx->pc != 0x2FF8F0u) { return; }
    }
    ctx->pc = 0x2FF8F0u;
label_2ff8f0:
    // 0x2ff8f0: 0xc7a100d0  lwc1        $f1, 0xD0($sp)
    ctx->pc = 0x2ff8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ff8f4:
    // 0x2ff8f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ff8f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ff8f8:
    // 0x2ff8f8: 0xc7a000d8  lwc1        $f0, 0xD8($sp)
    ctx->pc = 0x2ff8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ff8fc:
    // 0x2ff8fc: 0xe7a100f0  swc1        $f1, 0xF0($sp)
    ctx->pc = 0x2ff8fcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
label_2ff900:
    // 0x2ff900: 0xe7a000f8  swc1        $f0, 0xF8($sp)
    ctx->pc = 0x2ff900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
label_2ff904:
    // 0x2ff904: 0x8e3500c4  lw          $s5, 0xC4($s1)
    ctx->pc = 0x2ff904u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 196)));
label_2ff908:
    // 0x2ff908: 0xc0baff8  jal         func_2EBFE0
label_2ff90c:
    if (ctx->pc == 0x2FF90Cu) {
        ctx->pc = 0x2FF90Cu;
            // 0x2ff90c: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x2FF910u;
        goto label_2ff910;
    }
    ctx->pc = 0x2FF908u;
    SET_GPR_U32(ctx, 31, 0x2FF910u);
    ctx->pc = 0x2FF90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF908u;
            // 0x2ff90c: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBFE0u;
    if (runtime->hasFunction(0x2EBFE0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF910u; }
        if (ctx->pc != 0x2FF910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BitSetRotCameraCancel__14CCameraControlFi_0x2ebfe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF910u; }
        if (ctx->pc != 0x2FF910u) { return; }
    }
    ctx->pc = 0x2FF910u;
label_2ff910:
    // 0x2ff910: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ff910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ff914:
    // 0x2ff914: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2ff914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ff918:
    // 0x2ff918: 0xc0693a0  jal         func_1A4E80
label_2ff91c:
    if (ctx->pc == 0x2FF91Cu) {
        ctx->pc = 0x2FF91Cu;
            // 0x2ff91c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF920u;
        goto label_2ff920;
    }
    ctx->pc = 0x2FF918u;
    SET_GPR_U32(ctx, 31, 0x2FF920u);
    ctx->pc = 0x2FF91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF918u;
            // 0x2ff91c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4E80u;
    if (runtime->hasFunction(0x1A4E80u)) {
        auto targetFn = runtime->lookupFunction(0x1A4E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF920u; }
        if (ctx->pc != 0x2FF920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditCameraControl__FP6CSceneP11CPadControlPA4_f_0x1a4e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF920u; }
        if (ctx->pc != 0x2FF920u) { return; }
    }
    ctx->pc = 0x2FF920u;
label_2ff920:
    // 0x2ff920: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2ff920u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ff924:
    // 0x2ff924: 0xc0baff4  jal         func_2EBFD0
label_2ff928:
    if (ctx->pc == 0x2FF928u) {
        ctx->pc = 0x2FF928u;
            // 0x2ff928: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FF92Cu;
        goto label_2ff92c;
    }
    ctx->pc = 0x2FF924u;
    SET_GPR_U32(ctx, 31, 0x2FF92Cu);
    ctx->pc = 0x2FF928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF924u;
            // 0x2ff928: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBFD0u;
    if (runtime->hasFunction(0x2EBFD0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF92Cu; }
        if (ctx->pc != 0x2FF92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRotCameraCancel__14CCameraControlFi_0x2ebfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF92Cu; }
        if (ctx->pc != 0x2FF92Cu) { return; }
    }
    ctx->pc = 0x2FF92Cu;
label_2ff92c:
    // 0x2ff92c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2ff92cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2ff930:
    // 0x2ff930: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x2ff930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_2ff934:
    // 0x2ff934: 0xc0c098c  jal         func_302630
label_2ff938:
    if (ctx->pc == 0x2FF938u) {
        ctx->pc = 0x2FF938u;
            // 0x2ff938: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x2FF93Cu;
        goto label_2ff93c;
    }
    ctx->pc = 0x2FF934u;
    SET_GPR_U32(ctx, 31, 0x2FF93Cu);
    ctx->pc = 0x2FF938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF934u;
            // 0x2ff938: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x302630u;
    if (runtime->hasFunction(0x302630u)) {
        auto targetFn = runtime->lookupFunction(0x302630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF93Cu; }
        if (ctx->pc != 0x2FF93Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckCasting__FP6CScenePfPf_0x302630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF93Cu; }
        if (ctx->pc != 0x2FF93Cu) { return; }
    }
    ctx->pc = 0x2FF93Cu;
label_2ff93c:
    // 0x2ff93c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ff93cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ff940:
    // 0x2ff940: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x2ff940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_2ff944:
    // 0x2ff944: 0xc04c028  jal         func_1300A0
label_2ff948:
    if (ctx->pc == 0x2FF948u) {
        ctx->pc = 0x2FF948u;
            // 0x2ff948: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x2FF94Cu;
        goto label_2ff94c;
    }
    ctx->pc = 0x2FF944u;
    SET_GPR_U32(ctx, 31, 0x2FF94Cu);
    ctx->pc = 0x2FF948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF944u;
            // 0x2ff948: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1300A0u;
    if (runtime->hasFunction(0x1300A0u)) {
        auto targetFn = runtime->lookupFunction(0x1300A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF94Cu; }
        if (ctx->pc != 0x2FF94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVectorXZ__FPfPf_0x1300a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF94Cu; }
        if (ctx->pc != 0x2FF94Cu) { return; }
    }
    ctx->pc = 0x2FF94Cu;
label_2ff94c:
    // 0x2ff94c: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x2ff94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_2ff950:
    // 0x2ff950: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ff950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ff954:
    // 0x2ff954: 0x0  nop
    ctx->pc = 0x2ff954u;
    // NOP
label_2ff958:
    // 0x2ff958: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x2ff958u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ff95c:
    // 0x2ff95c: 0x0  nop
    ctx->pc = 0x2ff95cu;
    // NOP
label_2ff960:
    // 0x2ff960: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_2ff964:
    if (ctx->pc == 0x2FF964u) {
        ctx->pc = 0x2FF968u;
        goto label_2ff968;
    }
    ctx->pc = 0x2FF960u;
    {
        const bool branch_taken_0x2ff960 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ff960) {
            ctx->pc = 0x2FF96Cu;
            goto label_2ff96c;
        }
    }
    ctx->pc = 0x2FF968u;
label_2ff968:
    // 0x2ff968: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ff968u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ff96c:
    // 0x2ff96c: 0x1a200004  blez        $s1, . + 4 + (0x4 << 2)
label_2ff970:
    if (ctx->pc == 0x2FF970u) {
        ctx->pc = 0x2FF974u;
        goto label_2ff974;
    }
    ctx->pc = 0x2FF96Cu;
    {
        const bool branch_taken_0x2ff96c = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x2ff96c) {
            ctx->pc = 0x2FF980u;
            goto label_2ff980;
        }
    }
    ctx->pc = 0x2FF974u;
label_2ff974:
    // 0x2ff974: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2ff974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2ff978:
    // 0x2ff978: 0x10000002  b           . + 4 + (0x2 << 2)
label_2ff97c:
    if (ctx->pc == 0x2FF97Cu) {
        ctx->pc = 0x2FF97Cu;
            // 0x2ff97c: 0xaf829fd0  sw          $v0, -0x6030($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942672), GPR_U32(ctx, 2));
        ctx->pc = 0x2FF980u;
        goto label_2ff980;
    }
    ctx->pc = 0x2FF978u;
    {
        const bool branch_taken_0x2ff978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF978u;
            // 0x2ff97c: 0xaf829fd0  sw          $v0, -0x6030($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942672), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff978) {
            ctx->pc = 0x2FF984u;
            goto label_2ff984;
        }
    }
    ctx->pc = 0x2FF980u;
label_2ff980:
    // 0x2ff980: 0xaf809fd0  sw          $zero, -0x6030($gp)
    ctx->pc = 0x2ff980u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942672), GPR_U32(ctx, 0));
label_2ff984:
    // 0x2ff984: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x2ff984u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_2ff988:
    // 0x2ff988: 0x3c0301f6  lui         $v1, 0x1F6
    ctx->pc = 0x2ff988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)502 << 16));
label_2ff98c:
    // 0x2ff98c: 0x78a40000  lq          $a0, 0x0($a1)
    ctx->pc = 0x2ff98cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2ff990:
    // 0x2ff990: 0x24639cc0  addiu       $v1, $v1, -0x6340
    ctx->pc = 0x2ff990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294941888));
label_2ff994:
    // 0x2ff994: 0x3c0201f6  lui         $v0, 0x1F6
    ctx->pc = 0x2ff994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)502 << 16));
label_2ff998:
    // 0x2ff998: 0x24429cd0  addiu       $v0, $v0, -0x6330
    ctx->pc = 0x2ff998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941904));
label_2ff99c:
    // 0x2ff99c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x2ff99cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
label_2ff9a0:
    // 0x2ff9a0: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2ff9a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2ff9a4:
    // 0x2ff9a4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x2ff9a4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_2ff9a8:
    // 0x2ff9a8: 0x8f829fd0  lw          $v0, -0x6030($gp)
    ctx->pc = 0x2ff9a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942672)));
label_2ff9ac:
    // 0x2ff9ac: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2ff9b0:
    if (ctx->pc == 0x2FF9B0u) {
        ctx->pc = 0x2FF9B0u;
            // 0x2ff9b0: 0x3c02c7c3  lui         $v0, 0xC7C3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51139 << 16));
        ctx->pc = 0x2FF9B4u;
        goto label_2ff9b4;
    }
    ctx->pc = 0x2FF9ACu;
    {
        const bool branch_taken_0x2ff9ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF9ACu;
            // 0x2ff9b0: 0x3c02c7c3  lui         $v0, 0xC7C3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51139 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff9ac) {
            ctx->pc = 0x2FF9D4u;
            goto label_2ff9d4;
        }
    }
    ctx->pc = 0x2FF9B4u;
label_2ff9b4:
    // 0x2ff9b4: 0xc0c3e74  jal         func_30F9D0
label_2ff9b8:
    if (ctx->pc == 0x2FF9B8u) {
        ctx->pc = 0x2FF9B8u;
            // 0x2ff9b8: 0xc7ac00e4  lwc1        $f12, 0xE4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2FF9BCu;
        goto label_2ff9bc;
    }
    ctx->pc = 0x2FF9B4u;
    SET_GPR_U32(ctx, 31, 0x2FF9BCu);
    ctx->pc = 0x2FF9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF9B4u;
            // 0x2ff9b8: 0xc7ac00e4  lwc1        $f12, 0xE4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x30F9D0u;
    if (runtime->hasFunction(0x30F9D0u)) {
        auto targetFn = runtime->lookupFunction(0x30F9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF9BCu; }
        if (ctx->pc != 0x2FF9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWaterLevel__Ff_0x30f9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF9BCu; }
        if (ctx->pc != 0x2FF9BCu) { return; }
    }
    ctx->pc = 0x2FF9BCu;
label_2ff9bc:
    // 0x2ff9bc: 0x24040066  addiu       $a0, $zero, 0x66
    ctx->pc = 0x2ff9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_2ff9c0:
    // 0x2ff9c0: 0xc0c6564  jal         func_319590
label_2ff9c4:
    if (ctx->pc == 0x2FF9C4u) {
        ctx->pc = 0x2FF9C4u;
            // 0x2ff9c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2FF9C8u;
        goto label_2ff9c8;
    }
    ctx->pc = 0x2FF9C0u;
    SET_GPR_U32(ctx, 31, 0x2FF9C8u);
    ctx->pc = 0x2FF9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF9C0u;
            // 0x2ff9c4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x319590u;
    if (runtime->hasFunction(0x319590u)) {
        auto targetFn = runtime->lookupFunction(0x319590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF9C8u; }
        if (ctx->pc != 0x2FF9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShowHelpMes__Fii_0x319590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF9C8u; }
        if (ctx->pc != 0x2FF9C8u) { return; }
    }
    ctx->pc = 0x2FF9C8u;
label_2ff9c8:
    // 0x2ff9c8: 0x10000012  b           . + 4 + (0x12 << 2)
label_2ff9cc:
    if (ctx->pc == 0x2FF9CCu) {
        ctx->pc = 0x2FF9CCu;
            // 0x2ff9cc: 0xc7a000e4  lwc1        $f0, 0xE4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x2FF9D0u;
        goto label_2ff9d0;
    }
    ctx->pc = 0x2FF9C8u;
    {
        const bool branch_taken_0x2ff9c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FF9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF9C8u;
            // 0x2ff9cc: 0xc7a000e4  lwc1        $f0, 0xE4($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ff9c8) {
            ctx->pc = 0x2FFA14u;
            goto label_2ffa14;
        }
    }
    ctx->pc = 0x2FF9D0u;
label_2ff9d0:
    // 0x2ff9d0: 0x3c02c7c3  lui         $v0, 0xC7C3
    ctx->pc = 0x2ff9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51139 << 16));
label_2ff9d4:
    // 0x2ff9d4: 0x34425000  ori         $v0, $v0, 0x5000
    ctx->pc = 0x2ff9d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20480);
label_2ff9d8:
    // 0x2ff9d8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2ff9d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2ff9dc:
    // 0x2ff9dc: 0xc0c3e74  jal         func_30F9D0
label_2ff9e0:
    if (ctx->pc == 0x2FF9E0u) {
        ctx->pc = 0x2FF9E4u;
        goto label_2ff9e4;
    }
    ctx->pc = 0x2FF9DCu;
    SET_GPR_U32(ctx, 31, 0x2FF9E4u);
    ctx->pc = 0x30F9D0u;
    if (runtime->hasFunction(0x30F9D0u)) {
        auto targetFn = runtime->lookupFunction(0x30F9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF9E4u; }
        if (ctx->pc != 0x2FF9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWaterLevel__Ff_0x30f9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF9E4u; }
        if (ctx->pc != 0x2FF9E4u) { return; }
    }
    ctx->pc = 0x2FF9E4u;
label_2ff9e4:
    // 0x2ff9e4: 0x2404006a  addiu       $a0, $zero, 0x6A
    ctx->pc = 0x2ff9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
label_2ff9e8:
    // 0x2ff9e8: 0xc0c6564  jal         func_319590
label_2ff9ec:
    if (ctx->pc == 0x2FF9ECu) {
        ctx->pc = 0x2FF9ECu;
            // 0x2ff9ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2FF9F0u;
        goto label_2ff9f0;
    }
    ctx->pc = 0x2FF9E8u;
    SET_GPR_U32(ctx, 31, 0x2FF9F0u);
    ctx->pc = 0x2FF9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FF9E8u;
            // 0x2ff9ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x319590u;
    if (runtime->hasFunction(0x319590u)) {
        auto targetFn = runtime->lookupFunction(0x319590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF9F0u; }
        if (ctx->pc != 0x2FF9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShowHelpMes__Fii_0x319590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FF9F0u; }
        if (ctx->pc != 0x2FF9F0u) { return; }
    }
    ctx->pc = 0x2FF9F0u;
label_2ff9f0:
    // 0x2ff9f0: 0x27a200e4  addiu       $v0, $sp, 0xE4
    ctx->pc = 0x2ff9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 228));
label_2ff9f4:
    // 0x2ff9f4: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x2ff9f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2ff9f8:
    // 0x2ff9f8: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x2ff9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ff9fc:
    // 0x2ff9fc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x2ff9fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ffa00:
    // 0x2ffa00: 0x0  nop
    ctx->pc = 0x2ffa00u;
    // NOP
label_2ffa04:
    // 0x2ffa04: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_2ffa08:
    if (ctx->pc == 0x2FFA08u) {
        ctx->pc = 0x2FFA0Cu;
        goto label_2ffa0c;
    }
    ctx->pc = 0x2FFA04u;
    {
        const bool branch_taken_0x2ffa04 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ffa04) {
            ctx->pc = 0x2FFA10u;
            goto label_2ffa10;
        }
    }
    ctx->pc = 0x2FFA0Cu;
label_2ffa0c:
    // 0x2ffa0c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x2ffa0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_2ffa10:
    // 0x2ffa10: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x2ffa10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ffa14:
    // 0x2ffa14: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2ffa14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2ffa18:
    // 0x2ffa18: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ffa18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ffa1c:
    // 0x2ffa1c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2ffa1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2ffa20:
    // 0x2ffa20: 0xe4209cc4  swc1        $f0, -0x633C($at)
    ctx->pc = 0x2ffa20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294941892), bits); }
label_2ffa24:
    // 0x2ffa24: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2ffa24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2ffa28:
    // 0x2ffa28: 0xc0bb548  jal         func_2ED520
label_2ffa2c:
    if (ctx->pc == 0x2FFA2Cu) {
        ctx->pc = 0x2FFA2Cu;
            // 0x2ffa2c: 0xe4209cd4  swc1        $f0, -0x632C($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294941908), bits); }
        ctx->pc = 0x2FFA30u;
        goto label_2ffa30;
    }
    ctx->pc = 0x2FFA28u;
    SET_GPR_U32(ctx, 31, 0x2FFA30u);
    ctx->pc = 0x2FFA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFA28u;
            // 0x2ffa2c: 0xe4209cd4  swc1        $f0, -0x632C($at) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294941908), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED520u;
    if (runtime->hasFunction(0x2ED520u)) {
        auto targetFn = runtime->lookupFunction(0x2ED520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFA30u; }
        if (ctx->pc != 0x2FFA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Analog__11CPadControlFi_0x2ed520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFA30u; }
        if (ctx->pc != 0x2FFA30u) { return; }
    }
    ctx->pc = 0x2FFA30u;
label_2ffa30:
    // 0x2ffa30: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x2ffa30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_2ffa34:
    // 0x2ffa34: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2ffa34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2ffa38:
    // 0x2ffa38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2ffa38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_2ffa3c:
    // 0x2ffa3c: 0x0  nop
    ctx->pc = 0x2ffa3cu;
    // NOP
label_2ffa40:
    // 0x2ffa40: 0x46000087  neg.s       $f2, $f0
    ctx->pc = 0x2ffa40u;
    ctx->f[2] = FPU_NEG_S(ctx->f[0]);
label_2ffa44:
    // 0x2ffa44: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x2ffa44u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
label_2ffa48:
    // 0x2ffa48: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2ffa48u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ffa4c:
    // 0x2ffa4c: 0x0  nop
    ctx->pc = 0x2ffa4cu;
    // NOP
label_2ffa50:
    // 0x2ffa50: 0x46001034  c.lt.s      $f2, $f0
    ctx->pc = 0x2ffa50u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[2], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ffa54:
    // 0x2ffa54: 0x0  nop
    ctx->pc = 0x2ffa54u;
    // NOP
label_2ffa58:
    // 0x2ffa58: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_2ffa5c:
    if (ctx->pc == 0x2FFA5Cu) {
        ctx->pc = 0x2FFA5Cu;
            // 0x2ffa5c: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->pc = 0x2FFA60u;
        goto label_2ffa60;
    }
    ctx->pc = 0x2FFA58u;
    {
        const bool branch_taken_0x2ffa58 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2FFA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFA58u;
            // 0x2ffa5c: 0x46001046  mov.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_MOV_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffa58) {
            ctx->pc = 0x2FFA6Cu;
            goto label_2ffa6c;
        }
    }
    ctx->pc = 0x2FFA60u;
label_2ffa60:
    // 0x2ffa60: 0x10000002  b           . + 4 + (0x2 << 2)
label_2ffa64:
    if (ctx->pc == 0x2FFA64u) {
        ctx->pc = 0x2FFA64u;
            // 0x2ffa64: 0x46001047  neg.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_NEG_S(ctx->f[2]);
        ctx->pc = 0x2FFA68u;
        goto label_2ffa68;
    }
    ctx->pc = 0x2FFA60u;
    {
        const bool branch_taken_0x2ffa60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFA60u;
            // 0x2ffa64: 0x46001047  neg.s       $f1, $f2 (Delay Slot)
        ctx->f[1] = FPU_NEG_S(ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffa60) {
            ctx->pc = 0x2FFA6Cu;
            goto label_2ffa6c;
        }
    }
    ctx->pc = 0x2FFA68u;
label_2ffa68:
    // 0x2ffa68: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x2ffa68u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_2ffa6c:
    // 0x2ffa6c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x2ffa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_2ffa70:
    // 0x2ffa70: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x2ffa70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_2ffa74:
    // 0x2ffa74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2ffa74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2ffa78:
    // 0x2ffa78: 0x0  nop
    ctx->pc = 0x2ffa78u;
    // NOP
label_2ffa7c:
    // 0x2ffa7c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2ffa7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2ffa80:
    // 0x2ffa80: 0x0  nop
    ctx->pc = 0x2ffa80u;
    // NOP
label_2ffa84:
    // 0x2ffa84: 0x45010013  bc1t        . + 4 + (0x13 << 2)
label_2ffa88:
    if (ctx->pc == 0x2FFA88u) {
        ctx->pc = 0x2FFA8Cu;
        goto label_2ffa8c;
    }
    ctx->pc = 0x2FFA84u;
    {
        const bool branch_taken_0x2ffa84 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2ffa84) {
            ctx->pc = 0x2FFAD4u;
            goto label_2ffad4;
        }
    }
    ctx->pc = 0x2FFA8Cu;
label_2ffa8c:
    // 0x2ffa8c: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x2ffa8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2ffa90:
    // 0x2ffa90: 0xc04c374  jal         func_130DD0
label_2ffa94:
    if (ctx->pc == 0x2FFA94u) {
        ctx->pc = 0x2FFA94u;
            // 0x2ffa94: 0x46020300  add.s       $f12, $f0, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->pc = 0x2FFA98u;
        goto label_2ffa98;
    }
    ctx->pc = 0x2FFA90u;
    SET_GPR_U32(ctx, 31, 0x2FFA98u);
    ctx->pc = 0x2FFA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFA90u;
            // 0x2ffa94: 0x46020300  add.s       $f12, $f0, $f2 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFA98u; }
        if (ctx->pc != 0x2FFA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFA98u; }
        if (ctx->pc != 0x2FFA98u) { return; }
    }
    ctx->pc = 0x2FFA98u;
label_2ffa98:
    // 0x2ffa98: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x2ffa98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_2ffa9c:
    // 0x2ffa9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ffa9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ffaa0:
    // 0x2ffaa0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2ffaa0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ffaa4:
    // 0x2ffaa4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x2ffaa4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_2ffaa8:
    // 0x2ffaa8: 0x320f809  jalr        $t9
label_2ffaac:
    if (ctx->pc == 0x2FFAACu) {
        ctx->pc = 0x2FFAACu;
            // 0x2ffaac: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x2FFAB0u;
        goto label_2ffab0;
    }
    ctx->pc = 0x2FFAA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FFAB0u);
        ctx->pc = 0x2FFAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFAA8u;
            // 0x2ffaac: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FFAB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FFAB0u; }
            if (ctx->pc != 0x2FFAB0u) { return; }
        }
        }
    }
    ctx->pc = 0x2FFAB0u;
label_2ffab0:
    // 0x2ffab0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2ffab0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ffab4:
    // 0x2ffab4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2ffab4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2ffab8:
    // 0x2ffab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ffab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ffabc:
    // 0x2ffabc: 0x24a51fb0  addiu       $a1, $a1, 0x1FB0
    ctx->pc = 0x2ffabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8112));
label_2ffac0:
    // 0x2ffac0: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x2ffac0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_2ffac4:
    // 0x2ffac4: 0x320f809  jalr        $t9
label_2ffac8:
    if (ctx->pc == 0x2FFAC8u) {
        ctx->pc = 0x2FFAC8u;
            // 0x2ffac8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FFACCu;
        goto label_2ffacc;
    }
    ctx->pc = 0x2FFAC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FFACCu);
        ctx->pc = 0x2FFAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFAC4u;
            // 0x2ffac8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FFACCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FFACCu; }
            if (ctx->pc != 0x2FFACCu) { return; }
        }
        }
    }
    ctx->pc = 0x2FFACCu;
label_2ffacc:
    // 0x2ffacc: 0x10000008  b           . + 4 + (0x8 << 2)
label_2ffad0:
    if (ctx->pc == 0x2FFAD0u) {
        ctx->pc = 0x2FFAD4u;
        goto label_2ffad4;
    }
    ctx->pc = 0x2FFACCu;
    {
        const bool branch_taken_0x2ffacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffacc) {
            ctx->pc = 0x2FFAF0u;
            goto label_2ffaf0;
        }
    }
    ctx->pc = 0x2FFAD4u;
label_2ffad4:
    // 0x2ffad4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2ffad4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ffad8:
    // 0x2ffad8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2ffad8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2ffadc:
    // 0x2ffadc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2ffadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ffae0:
    // 0x2ffae0: 0x24a51f28  addiu       $a1, $a1, 0x1F28
    ctx->pc = 0x2ffae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7976));
label_2ffae4:
    // 0x2ffae4: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x2ffae4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_2ffae8:
    // 0x2ffae8: 0x320f809  jalr        $t9
label_2ffaec:
    if (ctx->pc == 0x2FFAECu) {
        ctx->pc = 0x2FFAECu;
            // 0x2ffaec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FFAF0u;
        goto label_2ffaf0;
    }
    ctx->pc = 0x2FFAE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FFAF0u);
        ctx->pc = 0x2FFAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFAE8u;
            // 0x2ffaec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FFAF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FFAF0u; }
            if (ctx->pc != 0x2FFAF0u) { return; }
        }
        }
    }
    ctx->pc = 0x2FFAF0u;
label_2ffaf0:
    // 0x2ffaf0: 0xc052334  jal         func_148CD0
label_2ffaf4:
    if (ctx->pc == 0x2FFAF4u) {
        ctx->pc = 0x2FFAF8u;
        goto label_2ffaf8;
    }
    ctx->pc = 0x2FFAF0u;
    SET_GPR_U32(ctx, 31, 0x2FFAF8u);
    ctx->pc = 0x148CD0u;
    if (runtime->hasFunction(0x148CD0u)) {
        auto targetFn = runtime->lookupFunction(0x148CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFAF8u; }
        if (ctx->pc != 0x2FFAF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBG__Fv_0x148cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFAF8u; }
        if (ctx->pc != 0x2FFAF8u) { return; }
    }
    ctx->pc = 0x2FFAF8u;
label_2ffaf8:
    // 0x2ffaf8: 0x8f829fd0  lw          $v0, -0x6030($gp)
    ctx->pc = 0x2ffaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942672)));
label_2ffafc:
    // 0x2ffafc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2ffb00:
    if (ctx->pc == 0x2FFB00u) {
        ctx->pc = 0x2FFB00u;
            // 0x2ffb00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FFB04u;
        goto label_2ffb04;
    }
    ctx->pc = 0x2FFAFCu;
    {
        const bool branch_taken_0x2ffafc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FFB00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFAFCu;
            // 0x2ffb00: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ffafc) {
            ctx->pc = 0x2FFB3Cu;
            goto label_2ffb3c;
        }
    }
    ctx->pc = 0x2FFB04u;
label_2ffb04:
    // 0x2ffb04: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ffb04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ffb08:
    // 0x2ffb08: 0xc0bb538  jal         func_2ED4E0
label_2ffb0c:
    if (ctx->pc == 0x2FFB0Cu) {
        ctx->pc = 0x2FFB0Cu;
            // 0x2ffb0c: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->pc = 0x2FFB10u;
        goto label_2ffb10;
    }
    ctx->pc = 0x2FFB08u;
    SET_GPR_U32(ctx, 31, 0x2FFB10u);
    ctx->pc = 0x2FFB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFB08u;
            // 0x2ffb0c: 0x24050078  addiu       $a1, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFB10u; }
        if (ctx->pc != 0x2FFB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFB10u; }
        if (ctx->pc != 0x2FFB10u) { return; }
    }
    ctx->pc = 0x2FFB10u;
label_2ffb10:
    // 0x2ffb10: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2ffb14:
    if (ctx->pc == 0x2FFB14u) {
        ctx->pc = 0x2FFB18u;
        goto label_2ffb18;
    }
    ctx->pc = 0x2FFB10u;
    {
        const bool branch_taken_0x2ffb10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffb10) {
            ctx->pc = 0x2FFB38u;
            goto label_2ffb38;
        }
    }
    ctx->pc = 0x2FFB18u;
label_2ffb18:
    // 0x2ffb18: 0xc0bff68  jal         func_2FFDA0
label_2ffb1c:
    if (ctx->pc == 0x2FFB1Cu) {
        ctx->pc = 0x2FFB1Cu;
            // 0x2ffb1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FFB20u;
        goto label_2ffb20;
    }
    ctx->pc = 0x2FFB18u;
    SET_GPR_U32(ctx, 31, 0x2FFB20u);
    ctx->pc = 0x2FFB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFB18u;
            // 0x2ffb1c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FFDA0u;
    if (runtime->hasFunction(0x2FFDA0u)) {
        auto targetFn = runtime->lookupFunction(0x2FFDA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFB20u; }
        if (ctx->pc != 0x2FFB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitCasting__FP6CScene_0x2ffda0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFB20u; }
        if (ctx->pc != 0x2FFB20u) { return; }
    }
    ctx->pc = 0x2FFB20u;
label_2ffb20:
    // 0x2ffb20: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_2ffb24:
    if (ctx->pc == 0x2FFB24u) {
        ctx->pc = 0x2FFB28u;
        goto label_2ffb28;
    }
    ctx->pc = 0x2FFB20u;
    {
        const bool branch_taken_0x2ffb20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffb20) {
            ctx->pc = 0x2FFB6Cu;
            goto label_2ffb6c;
        }
    }
    ctx->pc = 0x2FFB28u;
label_2ffb28:
    // 0x2ffb28: 0xc0bf1d0  jal         func_2FC740
label_2ffb2c:
    if (ctx->pc == 0x2FFB2Cu) {
        ctx->pc = 0x2FFB2Cu;
            // 0x2ffb2c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2FFB30u;
        goto label_2ffb30;
    }
    ctx->pc = 0x2FFB28u;
    SET_GPR_U32(ctx, 31, 0x2FFB30u);
    ctx->pc = 0x2FFB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFB28u;
            // 0x2ffb2c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC740u;
    if (runtime->hasFunction(0x2FC740u)) {
        auto targetFn = runtime->lookupFunction(0x2FC740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFB30u; }
        if (ctx->pc != 0x2FFB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextMode__Fi_0x2fc740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFB30u; }
        if (ctx->pc != 0x2FFB30u) { return; }
    }
    ctx->pc = 0x2FFB30u;
label_2ffb30:
    // 0x2ffb30: 0x1000000e  b           . + 4 + (0xE << 2)
label_2ffb34:
    if (ctx->pc == 0x2FFB34u) {
        ctx->pc = 0x2FFB38u;
        goto label_2ffb38;
    }
    ctx->pc = 0x2FFB30u;
    {
        const bool branch_taken_0x2ffb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffb30) {
            ctx->pc = 0x2FFB6Cu;
            goto label_2ffb6c;
        }
    }
    ctx->pc = 0x2FFB38u;
label_2ffb38:
    // 0x2ffb38: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2ffb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ffb3c:
    // 0x2ffb3c: 0xc0bb538  jal         func_2ED4E0
label_2ffb40:
    if (ctx->pc == 0x2FFB40u) {
        ctx->pc = 0x2FFB40u;
            // 0x2ffb40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2FFB44u;
        goto label_2ffb44;
    }
    ctx->pc = 0x2FFB3Cu;
    SET_GPR_U32(ctx, 31, 0x2FFB44u);
    ctx->pc = 0x2FFB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFB3Cu;
            // 0x2ffb40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ED4E0u;
    if (runtime->hasFunction(0x2ED4E0u)) {
        auto targetFn = runtime->lookupFunction(0x2ED4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFB44u; }
        if (ctx->pc != 0x2FFB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Btn__11CPadControlFi_0x2ed4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFB44u; }
        if (ctx->pc != 0x2FFB44u) { return; }
    }
    ctx->pc = 0x2FFB44u;
label_2ffb44:
    // 0x2ffb44: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2ffb48:
    if (ctx->pc == 0x2FFB48u) {
        ctx->pc = 0x2FFB4Cu;
        goto label_2ffb4c;
    }
    ctx->pc = 0x2FFB44u;
    {
        const bool branch_taken_0x2ffb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffb44) {
            ctx->pc = 0x2FFB6Cu;
            goto label_2ffb6c;
        }
    }
    ctx->pc = 0x2FFB4Cu;
label_2ffb4c:
    // 0x2ffb4c: 0xc0523b8  jal         func_148EE0
label_2ffb50:
    if (ctx->pc == 0x2FFB50u) {
        ctx->pc = 0x2FFB54u;
        goto label_2ffb54;
    }
    ctx->pc = 0x2FFB4Cu;
    SET_GPR_U32(ctx, 31, 0x2FFB54u);
    ctx->pc = 0x148EE0u;
    if (runtime->hasFunction(0x148EE0u)) {
        auto targetFn = runtime->lookupFunction(0x148EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFB54u; }
        if (ctx->pc != 0x2FFB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BreakReadBG__Fv_0x148ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFB54u; }
        if (ctx->pc != 0x2FFB54u) { return; }
    }
    ctx->pc = 0x2FFB54u;
label_2ffb54:
    // 0x2ffb54: 0xc0bfd3c  jal         func_2FF4F0
label_2ffb58:
    if (ctx->pc == 0x2FFB58u) {
        ctx->pc = 0x2FFB58u;
            // 0x2ffb58: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FFB5Cu;
        goto label_2ffb5c;
    }
    ctx->pc = 0x2FFB54u;
    SET_GPR_U32(ctx, 31, 0x2FFB5Cu);
    ctx->pc = 0x2FFB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFB54u;
            // 0x2ffb58: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FF4F0u;
    if (runtime->hasFunction(0x2FF4F0u)) {
        auto targetFn = runtime->lookupFunction(0x2FF4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFB5Cu; }
        if (ctx->pc != 0x2FFB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndSelectCastingPoint__FP6CScene_0x2ff4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFB5Cu; }
        if (ctx->pc != 0x2FFB5Cu) { return; }
    }
    ctx->pc = 0x2FFB5Cu;
label_2ffb5c:
    // 0x2ffb5c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2ffb60:
    if (ctx->pc == 0x2FFB60u) {
        ctx->pc = 0x2FFB64u;
        goto label_2ffb64;
    }
    ctx->pc = 0x2FFB5Cu;
    {
        const bool branch_taken_0x2ffb5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ffb5c) {
            ctx->pc = 0x2FFB6Cu;
            goto label_2ffb6c;
        }
    }
    ctx->pc = 0x2FFB64u;
label_2ffb64:
    // 0x2ffb64: 0xc0bf1d0  jal         func_2FC740
label_2ffb68:
    if (ctx->pc == 0x2FFB68u) {
        ctx->pc = 0x2FFB68u;
            // 0x2ffb68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FFB6Cu;
        goto label_2ffb6c;
    }
    ctx->pc = 0x2FFB64u;
    SET_GPR_U32(ctx, 31, 0x2FFB6Cu);
    ctx->pc = 0x2FFB68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFB64u;
            // 0x2ffb68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FC740u;
    if (runtime->hasFunction(0x2FC740u)) {
        auto targetFn = runtime->lookupFunction(0x2FC740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFB6Cu; }
        if (ctx->pc != 0x2FFB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNextMode__Fi_0x2fc740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FFB6Cu; }
        if (ctx->pc != 0x2FFB6Cu) { return; }
    }
    ctx->pc = 0x2FFB6Cu;
label_2ffb6c:
    // 0x2ffb6c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2ffb6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2ffb70:
    // 0x2ffb70: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2ffb70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2ffb74:
    // 0x2ffb74: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x2ffb74u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2ffb78:
    // 0x2ffb78: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2ffb78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2ffb7c:
    // 0x2ffb7c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2ffb7cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2ffb80:
    // 0x2ffb80: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2ffb80u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2ffb84:
    // 0x2ffb84: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2ffb84u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2ffb88:
    // 0x2ffb88: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2ffb88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2ffb8c:
    // 0x2ffb8c: 0x3e00008  jr          $ra
label_2ffb90:
    if (ctx->pc == 0x2FFB90u) {
        ctx->pc = 0x2FFB90u;
            // 0x2ffb90: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x2FFB94u;
        goto label_fallthrough_0x2ffb8c;
    }
    ctx->pc = 0x2FFB8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FFB90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FFB8Cu;
            // 0x2ffb90: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2ffb8c:
    ctx->pc = 0x2FFB94u;
}
