#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MoveUnit__11CMonsterManFP14CActiveMonsterP6CCPolyi
// Address: 0x1df520 - 0x1dfaf8
void MoveUnit__11CMonsterManFP14CActiveMonsterP6CCPolyi_0x1df520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MoveUnit__11CMonsterManFP14CActiveMonsterP6CCPolyi_0x1df520");
#endif

    switch (ctx->pc) {
        case 0x1df520u: goto label_1df520;
        case 0x1df524u: goto label_1df524;
        case 0x1df528u: goto label_1df528;
        case 0x1df52cu: goto label_1df52c;
        case 0x1df530u: goto label_1df530;
        case 0x1df534u: goto label_1df534;
        case 0x1df538u: goto label_1df538;
        case 0x1df53cu: goto label_1df53c;
        case 0x1df540u: goto label_1df540;
        case 0x1df544u: goto label_1df544;
        case 0x1df548u: goto label_1df548;
        case 0x1df54cu: goto label_1df54c;
        case 0x1df550u: goto label_1df550;
        case 0x1df554u: goto label_1df554;
        case 0x1df558u: goto label_1df558;
        case 0x1df55cu: goto label_1df55c;
        case 0x1df560u: goto label_1df560;
        case 0x1df564u: goto label_1df564;
        case 0x1df568u: goto label_1df568;
        case 0x1df56cu: goto label_1df56c;
        case 0x1df570u: goto label_1df570;
        case 0x1df574u: goto label_1df574;
        case 0x1df578u: goto label_1df578;
        case 0x1df57cu: goto label_1df57c;
        case 0x1df580u: goto label_1df580;
        case 0x1df584u: goto label_1df584;
        case 0x1df588u: goto label_1df588;
        case 0x1df58cu: goto label_1df58c;
        case 0x1df590u: goto label_1df590;
        case 0x1df594u: goto label_1df594;
        case 0x1df598u: goto label_1df598;
        case 0x1df59cu: goto label_1df59c;
        case 0x1df5a0u: goto label_1df5a0;
        case 0x1df5a4u: goto label_1df5a4;
        case 0x1df5a8u: goto label_1df5a8;
        case 0x1df5acu: goto label_1df5ac;
        case 0x1df5b0u: goto label_1df5b0;
        case 0x1df5b4u: goto label_1df5b4;
        case 0x1df5b8u: goto label_1df5b8;
        case 0x1df5bcu: goto label_1df5bc;
        case 0x1df5c0u: goto label_1df5c0;
        case 0x1df5c4u: goto label_1df5c4;
        case 0x1df5c8u: goto label_1df5c8;
        case 0x1df5ccu: goto label_1df5cc;
        case 0x1df5d0u: goto label_1df5d0;
        case 0x1df5d4u: goto label_1df5d4;
        case 0x1df5d8u: goto label_1df5d8;
        case 0x1df5dcu: goto label_1df5dc;
        case 0x1df5e0u: goto label_1df5e0;
        case 0x1df5e4u: goto label_1df5e4;
        case 0x1df5e8u: goto label_1df5e8;
        case 0x1df5ecu: goto label_1df5ec;
        case 0x1df5f0u: goto label_1df5f0;
        case 0x1df5f4u: goto label_1df5f4;
        case 0x1df5f8u: goto label_1df5f8;
        case 0x1df5fcu: goto label_1df5fc;
        case 0x1df600u: goto label_1df600;
        case 0x1df604u: goto label_1df604;
        case 0x1df608u: goto label_1df608;
        case 0x1df60cu: goto label_1df60c;
        case 0x1df610u: goto label_1df610;
        case 0x1df614u: goto label_1df614;
        case 0x1df618u: goto label_1df618;
        case 0x1df61cu: goto label_1df61c;
        case 0x1df620u: goto label_1df620;
        case 0x1df624u: goto label_1df624;
        case 0x1df628u: goto label_1df628;
        case 0x1df62cu: goto label_1df62c;
        case 0x1df630u: goto label_1df630;
        case 0x1df634u: goto label_1df634;
        case 0x1df638u: goto label_1df638;
        case 0x1df63cu: goto label_1df63c;
        case 0x1df640u: goto label_1df640;
        case 0x1df644u: goto label_1df644;
        case 0x1df648u: goto label_1df648;
        case 0x1df64cu: goto label_1df64c;
        case 0x1df650u: goto label_1df650;
        case 0x1df654u: goto label_1df654;
        case 0x1df658u: goto label_1df658;
        case 0x1df65cu: goto label_1df65c;
        case 0x1df660u: goto label_1df660;
        case 0x1df664u: goto label_1df664;
        case 0x1df668u: goto label_1df668;
        case 0x1df66cu: goto label_1df66c;
        case 0x1df670u: goto label_1df670;
        case 0x1df674u: goto label_1df674;
        case 0x1df678u: goto label_1df678;
        case 0x1df67cu: goto label_1df67c;
        case 0x1df680u: goto label_1df680;
        case 0x1df684u: goto label_1df684;
        case 0x1df688u: goto label_1df688;
        case 0x1df68cu: goto label_1df68c;
        case 0x1df690u: goto label_1df690;
        case 0x1df694u: goto label_1df694;
        case 0x1df698u: goto label_1df698;
        case 0x1df69cu: goto label_1df69c;
        case 0x1df6a0u: goto label_1df6a0;
        case 0x1df6a4u: goto label_1df6a4;
        case 0x1df6a8u: goto label_1df6a8;
        case 0x1df6acu: goto label_1df6ac;
        case 0x1df6b0u: goto label_1df6b0;
        case 0x1df6b4u: goto label_1df6b4;
        case 0x1df6b8u: goto label_1df6b8;
        case 0x1df6bcu: goto label_1df6bc;
        case 0x1df6c0u: goto label_1df6c0;
        case 0x1df6c4u: goto label_1df6c4;
        case 0x1df6c8u: goto label_1df6c8;
        case 0x1df6ccu: goto label_1df6cc;
        case 0x1df6d0u: goto label_1df6d0;
        case 0x1df6d4u: goto label_1df6d4;
        case 0x1df6d8u: goto label_1df6d8;
        case 0x1df6dcu: goto label_1df6dc;
        case 0x1df6e0u: goto label_1df6e0;
        case 0x1df6e4u: goto label_1df6e4;
        case 0x1df6e8u: goto label_1df6e8;
        case 0x1df6ecu: goto label_1df6ec;
        case 0x1df6f0u: goto label_1df6f0;
        case 0x1df6f4u: goto label_1df6f4;
        case 0x1df6f8u: goto label_1df6f8;
        case 0x1df6fcu: goto label_1df6fc;
        case 0x1df700u: goto label_1df700;
        case 0x1df704u: goto label_1df704;
        case 0x1df708u: goto label_1df708;
        case 0x1df70cu: goto label_1df70c;
        case 0x1df710u: goto label_1df710;
        case 0x1df714u: goto label_1df714;
        case 0x1df718u: goto label_1df718;
        case 0x1df71cu: goto label_1df71c;
        case 0x1df720u: goto label_1df720;
        case 0x1df724u: goto label_1df724;
        case 0x1df728u: goto label_1df728;
        case 0x1df72cu: goto label_1df72c;
        case 0x1df730u: goto label_1df730;
        case 0x1df734u: goto label_1df734;
        case 0x1df738u: goto label_1df738;
        case 0x1df73cu: goto label_1df73c;
        case 0x1df740u: goto label_1df740;
        case 0x1df744u: goto label_1df744;
        case 0x1df748u: goto label_1df748;
        case 0x1df74cu: goto label_1df74c;
        case 0x1df750u: goto label_1df750;
        case 0x1df754u: goto label_1df754;
        case 0x1df758u: goto label_1df758;
        case 0x1df75cu: goto label_1df75c;
        case 0x1df760u: goto label_1df760;
        case 0x1df764u: goto label_1df764;
        case 0x1df768u: goto label_1df768;
        case 0x1df76cu: goto label_1df76c;
        case 0x1df770u: goto label_1df770;
        case 0x1df774u: goto label_1df774;
        case 0x1df778u: goto label_1df778;
        case 0x1df77cu: goto label_1df77c;
        case 0x1df780u: goto label_1df780;
        case 0x1df784u: goto label_1df784;
        case 0x1df788u: goto label_1df788;
        case 0x1df78cu: goto label_1df78c;
        case 0x1df790u: goto label_1df790;
        case 0x1df794u: goto label_1df794;
        case 0x1df798u: goto label_1df798;
        case 0x1df79cu: goto label_1df79c;
        case 0x1df7a0u: goto label_1df7a0;
        case 0x1df7a4u: goto label_1df7a4;
        case 0x1df7a8u: goto label_1df7a8;
        case 0x1df7acu: goto label_1df7ac;
        case 0x1df7b0u: goto label_1df7b0;
        case 0x1df7b4u: goto label_1df7b4;
        case 0x1df7b8u: goto label_1df7b8;
        case 0x1df7bcu: goto label_1df7bc;
        case 0x1df7c0u: goto label_1df7c0;
        case 0x1df7c4u: goto label_1df7c4;
        case 0x1df7c8u: goto label_1df7c8;
        case 0x1df7ccu: goto label_1df7cc;
        case 0x1df7d0u: goto label_1df7d0;
        case 0x1df7d4u: goto label_1df7d4;
        case 0x1df7d8u: goto label_1df7d8;
        case 0x1df7dcu: goto label_1df7dc;
        case 0x1df7e0u: goto label_1df7e0;
        case 0x1df7e4u: goto label_1df7e4;
        case 0x1df7e8u: goto label_1df7e8;
        case 0x1df7ecu: goto label_1df7ec;
        case 0x1df7f0u: goto label_1df7f0;
        case 0x1df7f4u: goto label_1df7f4;
        case 0x1df7f8u: goto label_1df7f8;
        case 0x1df7fcu: goto label_1df7fc;
        case 0x1df800u: goto label_1df800;
        case 0x1df804u: goto label_1df804;
        case 0x1df808u: goto label_1df808;
        case 0x1df80cu: goto label_1df80c;
        case 0x1df810u: goto label_1df810;
        case 0x1df814u: goto label_1df814;
        case 0x1df818u: goto label_1df818;
        case 0x1df81cu: goto label_1df81c;
        case 0x1df820u: goto label_1df820;
        case 0x1df824u: goto label_1df824;
        case 0x1df828u: goto label_1df828;
        case 0x1df82cu: goto label_1df82c;
        case 0x1df830u: goto label_1df830;
        case 0x1df834u: goto label_1df834;
        case 0x1df838u: goto label_1df838;
        case 0x1df83cu: goto label_1df83c;
        case 0x1df840u: goto label_1df840;
        case 0x1df844u: goto label_1df844;
        case 0x1df848u: goto label_1df848;
        case 0x1df84cu: goto label_1df84c;
        case 0x1df850u: goto label_1df850;
        case 0x1df854u: goto label_1df854;
        case 0x1df858u: goto label_1df858;
        case 0x1df85cu: goto label_1df85c;
        case 0x1df860u: goto label_1df860;
        case 0x1df864u: goto label_1df864;
        case 0x1df868u: goto label_1df868;
        case 0x1df86cu: goto label_1df86c;
        case 0x1df870u: goto label_1df870;
        case 0x1df874u: goto label_1df874;
        case 0x1df878u: goto label_1df878;
        case 0x1df87cu: goto label_1df87c;
        case 0x1df880u: goto label_1df880;
        case 0x1df884u: goto label_1df884;
        case 0x1df888u: goto label_1df888;
        case 0x1df88cu: goto label_1df88c;
        case 0x1df890u: goto label_1df890;
        case 0x1df894u: goto label_1df894;
        case 0x1df898u: goto label_1df898;
        case 0x1df89cu: goto label_1df89c;
        case 0x1df8a0u: goto label_1df8a0;
        case 0x1df8a4u: goto label_1df8a4;
        case 0x1df8a8u: goto label_1df8a8;
        case 0x1df8acu: goto label_1df8ac;
        case 0x1df8b0u: goto label_1df8b0;
        case 0x1df8b4u: goto label_1df8b4;
        case 0x1df8b8u: goto label_1df8b8;
        case 0x1df8bcu: goto label_1df8bc;
        case 0x1df8c0u: goto label_1df8c0;
        case 0x1df8c4u: goto label_1df8c4;
        case 0x1df8c8u: goto label_1df8c8;
        case 0x1df8ccu: goto label_1df8cc;
        case 0x1df8d0u: goto label_1df8d0;
        case 0x1df8d4u: goto label_1df8d4;
        case 0x1df8d8u: goto label_1df8d8;
        case 0x1df8dcu: goto label_1df8dc;
        case 0x1df8e0u: goto label_1df8e0;
        case 0x1df8e4u: goto label_1df8e4;
        case 0x1df8e8u: goto label_1df8e8;
        case 0x1df8ecu: goto label_1df8ec;
        case 0x1df8f0u: goto label_1df8f0;
        case 0x1df8f4u: goto label_1df8f4;
        case 0x1df8f8u: goto label_1df8f8;
        case 0x1df8fcu: goto label_1df8fc;
        case 0x1df900u: goto label_1df900;
        case 0x1df904u: goto label_1df904;
        case 0x1df908u: goto label_1df908;
        case 0x1df90cu: goto label_1df90c;
        case 0x1df910u: goto label_1df910;
        case 0x1df914u: goto label_1df914;
        case 0x1df918u: goto label_1df918;
        case 0x1df91cu: goto label_1df91c;
        case 0x1df920u: goto label_1df920;
        case 0x1df924u: goto label_1df924;
        case 0x1df928u: goto label_1df928;
        case 0x1df92cu: goto label_1df92c;
        case 0x1df930u: goto label_1df930;
        case 0x1df934u: goto label_1df934;
        case 0x1df938u: goto label_1df938;
        case 0x1df93cu: goto label_1df93c;
        case 0x1df940u: goto label_1df940;
        case 0x1df944u: goto label_1df944;
        case 0x1df948u: goto label_1df948;
        case 0x1df94cu: goto label_1df94c;
        case 0x1df950u: goto label_1df950;
        case 0x1df954u: goto label_1df954;
        case 0x1df958u: goto label_1df958;
        case 0x1df95cu: goto label_1df95c;
        case 0x1df960u: goto label_1df960;
        case 0x1df964u: goto label_1df964;
        case 0x1df968u: goto label_1df968;
        case 0x1df96cu: goto label_1df96c;
        case 0x1df970u: goto label_1df970;
        case 0x1df974u: goto label_1df974;
        case 0x1df978u: goto label_1df978;
        case 0x1df97cu: goto label_1df97c;
        case 0x1df980u: goto label_1df980;
        case 0x1df984u: goto label_1df984;
        case 0x1df988u: goto label_1df988;
        case 0x1df98cu: goto label_1df98c;
        case 0x1df990u: goto label_1df990;
        case 0x1df994u: goto label_1df994;
        case 0x1df998u: goto label_1df998;
        case 0x1df99cu: goto label_1df99c;
        case 0x1df9a0u: goto label_1df9a0;
        case 0x1df9a4u: goto label_1df9a4;
        case 0x1df9a8u: goto label_1df9a8;
        case 0x1df9acu: goto label_1df9ac;
        case 0x1df9b0u: goto label_1df9b0;
        case 0x1df9b4u: goto label_1df9b4;
        case 0x1df9b8u: goto label_1df9b8;
        case 0x1df9bcu: goto label_1df9bc;
        case 0x1df9c0u: goto label_1df9c0;
        case 0x1df9c4u: goto label_1df9c4;
        case 0x1df9c8u: goto label_1df9c8;
        case 0x1df9ccu: goto label_1df9cc;
        case 0x1df9d0u: goto label_1df9d0;
        case 0x1df9d4u: goto label_1df9d4;
        case 0x1df9d8u: goto label_1df9d8;
        case 0x1df9dcu: goto label_1df9dc;
        case 0x1df9e0u: goto label_1df9e0;
        case 0x1df9e4u: goto label_1df9e4;
        case 0x1df9e8u: goto label_1df9e8;
        case 0x1df9ecu: goto label_1df9ec;
        case 0x1df9f0u: goto label_1df9f0;
        case 0x1df9f4u: goto label_1df9f4;
        case 0x1df9f8u: goto label_1df9f8;
        case 0x1df9fcu: goto label_1df9fc;
        case 0x1dfa00u: goto label_1dfa00;
        case 0x1dfa04u: goto label_1dfa04;
        case 0x1dfa08u: goto label_1dfa08;
        case 0x1dfa0cu: goto label_1dfa0c;
        case 0x1dfa10u: goto label_1dfa10;
        case 0x1dfa14u: goto label_1dfa14;
        case 0x1dfa18u: goto label_1dfa18;
        case 0x1dfa1cu: goto label_1dfa1c;
        case 0x1dfa20u: goto label_1dfa20;
        case 0x1dfa24u: goto label_1dfa24;
        case 0x1dfa28u: goto label_1dfa28;
        case 0x1dfa2cu: goto label_1dfa2c;
        case 0x1dfa30u: goto label_1dfa30;
        case 0x1dfa34u: goto label_1dfa34;
        case 0x1dfa38u: goto label_1dfa38;
        case 0x1dfa3cu: goto label_1dfa3c;
        case 0x1dfa40u: goto label_1dfa40;
        case 0x1dfa44u: goto label_1dfa44;
        case 0x1dfa48u: goto label_1dfa48;
        case 0x1dfa4cu: goto label_1dfa4c;
        case 0x1dfa50u: goto label_1dfa50;
        case 0x1dfa54u: goto label_1dfa54;
        case 0x1dfa58u: goto label_1dfa58;
        case 0x1dfa5cu: goto label_1dfa5c;
        case 0x1dfa60u: goto label_1dfa60;
        case 0x1dfa64u: goto label_1dfa64;
        case 0x1dfa68u: goto label_1dfa68;
        case 0x1dfa6cu: goto label_1dfa6c;
        case 0x1dfa70u: goto label_1dfa70;
        case 0x1dfa74u: goto label_1dfa74;
        case 0x1dfa78u: goto label_1dfa78;
        case 0x1dfa7cu: goto label_1dfa7c;
        case 0x1dfa80u: goto label_1dfa80;
        case 0x1dfa84u: goto label_1dfa84;
        case 0x1dfa88u: goto label_1dfa88;
        case 0x1dfa8cu: goto label_1dfa8c;
        case 0x1dfa90u: goto label_1dfa90;
        case 0x1dfa94u: goto label_1dfa94;
        case 0x1dfa98u: goto label_1dfa98;
        case 0x1dfa9cu: goto label_1dfa9c;
        case 0x1dfaa0u: goto label_1dfaa0;
        case 0x1dfaa4u: goto label_1dfaa4;
        case 0x1dfaa8u: goto label_1dfaa8;
        case 0x1dfaacu: goto label_1dfaac;
        case 0x1dfab0u: goto label_1dfab0;
        case 0x1dfab4u: goto label_1dfab4;
        case 0x1dfab8u: goto label_1dfab8;
        case 0x1dfabcu: goto label_1dfabc;
        case 0x1dfac0u: goto label_1dfac0;
        case 0x1dfac4u: goto label_1dfac4;
        case 0x1dfac8u: goto label_1dfac8;
        case 0x1dfaccu: goto label_1dfacc;
        case 0x1dfad0u: goto label_1dfad0;
        case 0x1dfad4u: goto label_1dfad4;
        case 0x1dfad8u: goto label_1dfad8;
        case 0x1dfadcu: goto label_1dfadc;
        case 0x1dfae0u: goto label_1dfae0;
        case 0x1dfae4u: goto label_1dfae4;
        case 0x1dfae8u: goto label_1dfae8;
        case 0x1dfaecu: goto label_1dfaec;
        case 0x1dfaf0u: goto label_1dfaf0;
        case 0x1dfaf4u: goto label_1dfaf4;
        default: break;
    }

    ctx->pc = 0x1df520u;

label_1df520:
    // 0x1df520: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x1df520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
label_1df524:
    // 0x1df524: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1df524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1df528:
    // 0x1df528: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1df528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1df52c:
    // 0x1df52c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1df52cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1df530:
    // 0x1df530: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1df530u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1df534:
    // 0x1df534: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x1df534u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1df538:
    // 0x1df538: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1df538u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1df53c:
    // 0x1df53c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1df53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1df540:
    // 0x1df540: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1df540u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1df544:
    // 0x1df544: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1df544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1df548:
    // 0x1df548: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1df548u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1df54c:
    // 0x1df54c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1df54cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1df550:
    // 0x1df550: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1df550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1df554:
    // 0x1df554: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1df554u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1df558:
    // 0x1df558: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1df558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1df55c:
    // 0x1df55c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1df55cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1df560:
    // 0x1df560: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1df560u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1df564:
    // 0x1df564: 0x8c33c4d0  lw          $s3, -0x3B30($at)
    ctx->pc = 0x1df564u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952144)));
label_1df568:
    // 0x1df568: 0x320f809  jalr        $t9
label_1df56c:
    if (ctx->pc == 0x1DF56Cu) {
        ctx->pc = 0x1DF56Cu;
            // 0x1df56c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DF570u;
        goto label_1df570;
    }
    ctx->pc = 0x1DF568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DF570u);
        ctx->pc = 0x1DF56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF568u;
            // 0x1df56c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DF570u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DF570u; }
            if (ctx->pc != 0x1DF570u) { return; }
        }
        }
    }
    ctx->pc = 0x1DF570u;
label_1df570:
    // 0x1df570: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1df570u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1df574:
    // 0x1df574: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1df578:
    // 0x1df578: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1df578u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1df57c:
    // 0x1df57c: 0x320f809  jalr        $t9
label_1df580:
    if (ctx->pc == 0x1DF580u) {
        ctx->pc = 0x1DF580u;
            // 0x1df580: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1DF584u;
        goto label_1df584;
    }
    ctx->pc = 0x1DF57Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DF584u);
        ctx->pc = 0x1DF580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF57Cu;
            // 0x1df580: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DF584u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DF584u; }
            if (ctx->pc != 0x1DF584u) { return; }
        }
        }
    }
    ctx->pc = 0x1DF584u;
label_1df584:
    // 0x1df584: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1df584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1df588:
    // 0x1df588: 0xc041c5c  jal         func_107170
label_1df58c:
    if (ctx->pc == 0x1DF58Cu) {
        ctx->pc = 0x1DF58Cu;
            // 0x1df58c: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->pc = 0x1DF590u;
        goto label_1df590;
    }
    ctx->pc = 0x1DF588u;
    SET_GPR_U32(ctx, 31, 0x1DF590u);
    ctx->pc = 0x1DF58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF588u;
            // 0x1df58c: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF590u; }
        if (ctx->pc != 0x1DF590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF590u; }
        if (ctx->pc != 0x1DF590u) { return; }
    }
    ctx->pc = 0x1DF590u;
label_1df590:
    // 0x1df590: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1df590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1df594:
    // 0x1df594: 0x26051470  addiu       $a1, $s0, 0x1470
    ctx->pc = 0x1df594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5232));
label_1df598:
    // 0x1df598: 0xc041c3e  jal         func_1070F8
label_1df59c:
    if (ctx->pc == 0x1DF59Cu) {
        ctx->pc = 0x1DF59Cu;
            // 0x1df59c: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1DF5A0u;
        goto label_1df5a0;
    }
    ctx->pc = 0x1DF598u;
    SET_GPR_U32(ctx, 31, 0x1DF5A0u);
    ctx->pc = 0x1DF59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF598u;
            // 0x1df59c: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF5A0u; }
        if (ctx->pc != 0x1DF5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF5A0u; }
        if (ctx->pc != 0x1DF5A0u) { return; }
    }
    ctx->pc = 0x1DF5A0u;
label_1df5a0:
    // 0x1df5a0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1df5a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1df5a4:
    // 0x1df5a4: 0xc041be0  jal         func_106F80
label_1df5a8:
    if (ctx->pc == 0x1DF5A8u) {
        ctx->pc = 0x1DF5A8u;
            // 0x1df5a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DF5ACu;
        goto label_1df5ac;
    }
    ctx->pc = 0x1DF5A4u;
    SET_GPR_U32(ctx, 31, 0x1DF5ACu);
    ctx->pc = 0x1DF5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF5A4u;
            // 0x1df5a8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF5ACu; }
        if (ctx->pc != 0x1DF5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF5ACu; }
        if (ctx->pc != 0x1DF5ACu) { return; }
    }
    ctx->pc = 0x1DF5ACu;
label_1df5ac:
    // 0x1df5ac: 0xc60c1480  lwc1        $f12, 0x1480($s0)
    ctx->pc = 0x1df5acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1df5b0:
    // 0x1df5b0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1df5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1df5b4:
    // 0x1df5b4: 0xc041e96  jal         func_107A58
label_1df5b8:
    if (ctx->pc == 0x1DF5B8u) {
        ctx->pc = 0x1DF5B8u;
            // 0x1df5b8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DF5BCu;
        goto label_1df5bc;
    }
    ctx->pc = 0x1DF5B4u;
    SET_GPR_U32(ctx, 31, 0x1DF5BCu);
    ctx->pc = 0x1DF5B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF5B4u;
            // 0x1df5b8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A58u;
    if (runtime->hasFunction(0x107A58u)) {
        auto targetFn = runtime->lookupFunction(0x107A58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF5BCu; }
        if (ctx->pc != 0x1DF5BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVectorXYZ_0x107a58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF5BCu; }
        if (ctx->pc != 0x1DF5BCu) { return; }
    }
    ctx->pc = 0x1DF5BCu;
label_1df5bc:
    // 0x1df5bc: 0x8e021348  lw          $v0, 0x1348($s0)
    ctx->pc = 0x1df5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4936)));
label_1df5c0:
    // 0x1df5c0: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1df5c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_1df5c4:
    // 0x1df5c4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1df5c8:
    if (ctx->pc == 0x1DF5C8u) {
        ctx->pc = 0x1DF5C8u;
            // 0x1df5c8: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x1DF5CCu;
        goto label_1df5cc;
    }
    ctx->pc = 0x1DF5C4u;
    {
        const bool branch_taken_0x1df5c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF5C4u;
            // 0x1df5c8: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df5c4) {
            ctx->pc = 0x1DF5E4u;
            goto label_1df5e4;
        }
    }
    ctx->pc = 0x1DF5CCu;
label_1df5cc:
    // 0x1df5cc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1df5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1df5d0:
    // 0x1df5d0: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1df5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1df5d4:
    // 0x1df5d4: 0xc041c38  jal         func_1070E0
label_1df5d8:
    if (ctx->pc == 0x1DF5D8u) {
        ctx->pc = 0x1DF5D8u;
            // 0x1df5d8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DF5DCu;
        goto label_1df5dc;
    }
    ctx->pc = 0x1DF5D4u;
    SET_GPR_U32(ctx, 31, 0x1DF5DCu);
    ctx->pc = 0x1DF5D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF5D4u;
            // 0x1df5d8: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF5DCu; }
        if (ctx->pc != 0x1DF5DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF5DCu; }
        if (ctx->pc != 0x1DF5DCu) { return; }
    }
    ctx->pc = 0x1DF5DCu;
label_1df5dc:
    // 0x1df5dc: 0x10000004  b           . + 4 + (0x4 << 2)
label_1df5e0:
    if (ctx->pc == 0x1DF5E0u) {
        ctx->pc = 0x1DF5E0u;
            // 0x1df5e0: 0x8e031330  lw          $v1, 0x1330($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4912)));
        ctx->pc = 0x1DF5E4u;
        goto label_1df5e4;
    }
    ctx->pc = 0x1DF5DCu;
    {
        const bool branch_taken_0x1df5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF5E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF5DCu;
            // 0x1df5e0: 0x8e031330  lw          $v1, 0x1330($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4912)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df5dc) {
            ctx->pc = 0x1DF5F0u;
            goto label_1df5f0;
        }
    }
    ctx->pc = 0x1DF5E4u;
label_1df5e4:
    // 0x1df5e4: 0xc041c5c  jal         func_107170
label_1df5e8:
    if (ctx->pc == 0x1DF5E8u) {
        ctx->pc = 0x1DF5E8u;
            // 0x1df5e8: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1DF5ECu;
        goto label_1df5ec;
    }
    ctx->pc = 0x1DF5E4u;
    SET_GPR_U32(ctx, 31, 0x1DF5ECu);
    ctx->pc = 0x1DF5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF5E4u;
            // 0x1df5e8: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF5ECu; }
        if (ctx->pc != 0x1DF5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF5ECu; }
        if (ctx->pc != 0x1DF5ECu) { return; }
    }
    ctx->pc = 0x1DF5ECu;
label_1df5ec:
    // 0x1df5ec: 0x8e031330  lw          $v1, 0x1330($s0)
    ctx->pc = 0x1df5ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4912)));
label_1df5f0:
    // 0x1df5f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1df5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1df5f4:
    // 0x1df5f4: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
label_1df5f8:
    if (ctx->pc == 0x1DF5F8u) {
        ctx->pc = 0x1DF5F8u;
            // 0x1df5f8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1DF5FCu;
        goto label_1df5fc;
    }
    ctx->pc = 0x1DF5F4u;
    {
        const bool branch_taken_0x1df5f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DF5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF5F4u;
            // 0x1df5f8: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df5f4) {
            ctx->pc = 0x1DF63Cu;
            goto label_1df63c;
        }
    }
    ctx->pc = 0x1DF5FCu;
label_1df5fc:
    // 0x1df5fc: 0x8e021348  lw          $v0, 0x1348($s0)
    ctx->pc = 0x1df5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4936)));
label_1df600:
    // 0x1df600: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1df600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_1df604:
    // 0x1df604: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_1df608:
    if (ctx->pc == 0x1DF608u) {
        ctx->pc = 0x1DF608u;
            // 0x1df608: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1DF60Cu;
        goto label_1df60c;
    }
    ctx->pc = 0x1DF604u;
    {
        const bool branch_taken_0x1df604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF604u;
            // 0x1df608: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df604) {
            ctx->pc = 0x1DF62Cu;
            goto label_1df62c;
        }
    }
    ctx->pc = 0x1DF60Cu;
label_1df60c:
    // 0x1df60c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1df60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1df610:
    // 0x1df610: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1df610u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1df614:
    // 0x1df614: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x1df614u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1df618:
    // 0x1df618: 0x27a700a0  addiu       $a3, $sp, 0xA0
    ctx->pc = 0x1df618u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_1df61c:
    // 0x1df61c: 0xc07753c  jal         func_1DD4F0
label_1df620:
    if (ctx->pc == 0x1DF620u) {
        ctx->pc = 0x1DF620u;
            // 0x1df620: 0x27a80080  addiu       $t0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1DF624u;
        goto label_1df624;
    }
    ctx->pc = 0x1DF61Cu;
    SET_GPR_U32(ctx, 31, 0x1DF624u);
    ctx->pc = 0x1DF620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF61Cu;
            // 0x1df620: 0x27a80080  addiu       $t0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD4F0u;
    if (runtime->hasFunction(0x1DD4F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DD4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF624u; }
        if (ctx->pc != 0x1DF624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CollisionCheck__11CMonsterManFP14CActiveMonsterPfPfPf_0x1dd4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF624u; }
        if (ctx->pc != 0x1DF624u) { return; }
    }
    ctx->pc = 0x1DF624u;
label_1df624:
    // 0x1df624: 0x10000008  b           . + 4 + (0x8 << 2)
label_1df628:
    if (ctx->pc == 0x1DF628u) {
        ctx->pc = 0x1DF628u;
            // 0x1df628: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x1DF62Cu;
        goto label_1df62c;
    }
    ctx->pc = 0x1DF624u;
    {
        const bool branch_taken_0x1df624 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF624u;
            // 0x1df628: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df624) {
            ctx->pc = 0x1DF648u;
            goto label_1df648;
        }
    }
    ctx->pc = 0x1DF62Cu;
label_1df62c:
    // 0x1df62c: 0xc041c5c  jal         func_107170
label_1df630:
    if (ctx->pc == 0x1DF630u) {
        ctx->pc = 0x1DF630u;
            // 0x1df630: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x1DF634u;
        goto label_1df634;
    }
    ctx->pc = 0x1DF62Cu;
    SET_GPR_U32(ctx, 31, 0x1DF634u);
    ctx->pc = 0x1DF630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF62Cu;
            // 0x1df630: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF634u; }
        if (ctx->pc != 0x1DF634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF634u; }
        if (ctx->pc != 0x1DF634u) { return; }
    }
    ctx->pc = 0x1DF634u;
label_1df634:
    // 0x1df634: 0x10000003  b           . + 4 + (0x3 << 2)
label_1df638:
    if (ctx->pc == 0x1DF638u) {
        ctx->pc = 0x1DF63Cu;
        goto label_1df63c;
    }
    ctx->pc = 0x1DF634u;
    {
        const bool branch_taken_0x1df634 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df634) {
            ctx->pc = 0x1DF644u;
            goto label_1df644;
        }
    }
    ctx->pc = 0x1DF63Cu;
label_1df63c:
    // 0x1df63c: 0xc041c5c  jal         func_107170
label_1df640:
    if (ctx->pc == 0x1DF640u) {
        ctx->pc = 0x1DF640u;
            // 0x1df640: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x1DF644u;
        goto label_1df644;
    }
    ctx->pc = 0x1DF63Cu;
    SET_GPR_U32(ctx, 31, 0x1DF644u);
    ctx->pc = 0x1DF640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF63Cu;
            // 0x1df640: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF644u; }
        if (ctx->pc != 0x1DF644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF644u; }
        if (ctx->pc != 0x1DF644u) { return; }
    }
    ctx->pc = 0x1DF644u;
label_1df644:
    // 0x1df644: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1df644u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1df648:
    // 0x1df648: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1df648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1df64c:
    // 0x1df64c: 0xc041c5c  jal         func_107170
label_1df650:
    if (ctx->pc == 0x1DF650u) {
        ctx->pc = 0x1DF650u;
            // 0x1df650: 0xae00130c  sw          $zero, 0x130C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4876), GPR_U32(ctx, 0));
        ctx->pc = 0x1DF654u;
        goto label_1df654;
    }
    ctx->pc = 0x1DF64Cu;
    SET_GPR_U32(ctx, 31, 0x1DF654u);
    ctx->pc = 0x1DF650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF64Cu;
            // 0x1df650: 0xae00130c  sw          $zero, 0x130C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4876), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF654u; }
        if (ctx->pc != 0x1DF654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF654u; }
        if (ctx->pc != 0x1DF654u) { return; }
    }
    ctx->pc = 0x1DF654u;
label_1df654:
    // 0x1df654: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1df654u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1df658:
    // 0x1df658: 0xc041c5c  jal         func_107170
label_1df65c:
    if (ctx->pc == 0x1DF65Cu) {
        ctx->pc = 0x1DF65Cu;
            // 0x1df65c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1DF660u;
        goto label_1df660;
    }
    ctx->pc = 0x1DF658u;
    SET_GPR_U32(ctx, 31, 0x1DF660u);
    ctx->pc = 0x1DF65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF658u;
            // 0x1df65c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF660u; }
        if (ctx->pc != 0x1DF660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF660u; }
        if (ctx->pc != 0x1DF660u) { return; }
    }
    ctx->pc = 0x1DF660u;
label_1df660:
    // 0x1df660: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1df660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_1df664:
    // 0x1df664: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1df664u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1df668:
    // 0x1df668: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x1df668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1df66c:
    // 0x1df66c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1df66cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1df670:
    // 0x1df670: 0xc7a200c4  lwc1        $f2, 0xC4($sp)
    ctx->pc = 0x1df670u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1df674:
    // 0x1df674: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x1df674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1df678:
    // 0x1df678: 0x3c02447a  lui         $v0, 0x447A
    ctx->pc = 0x1df678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17530 << 16));
label_1df67c:
    // 0x1df67c: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x1df67cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1df680:
    // 0x1df680: 0xc7a100d4  lwc1        $f1, 0xD4($sp)
    ctx->pc = 0x1df680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1df684:
    // 0x1df684: 0x27a800e0  addiu       $t0, $sp, 0xE0
    ctx->pc = 0x1df684u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_1df688:
    // 0x1df688: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1df68c:
    // 0x1df68c: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1df68cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1df690:
    // 0x1df690: 0x240a0002  addiu       $t2, $zero, 0x2
    ctx->pc = 0x1df690u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1df694:
    // 0x1df694: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x1df694u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
label_1df698:
    // 0x1df698: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1df698u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1df69c:
    // 0x1df69c: 0xe7a200c4  swc1        $f2, 0xC4($sp)
    ctx->pc = 0x1df69cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
label_1df6a0:
    // 0x1df6a0: 0xc053794  jal         func_14DE50
label_1df6a4:
    if (ctx->pc == 0x1DF6A4u) {
        ctx->pc = 0x1DF6A4u;
            // 0x1df6a4: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->pc = 0x1DF6A8u;
        goto label_1df6a8;
    }
    ctx->pc = 0x1DF6A0u;
    SET_GPR_U32(ctx, 31, 0x1DF6A8u);
    ctx->pc = 0x1DF6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF6A0u;
            // 0x1df6a4: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x14DE50u;
    if (runtime->hasFunction(0x14DE50u)) {
        auto targetFn = runtime->lookupFunction(0x14DE50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF6A8u; }
        if (ctx->pc != 0x1DF6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHit__FP6CCPolyiPfPfPfii_0x14de50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF6A8u; }
        if (ctx->pc != 0x1DF6A8u) { return; }
    }
    ctx->pc = 0x1DF6A8u;
label_1df6a8:
    // 0x1df6a8: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_1df6ac:
    if (ctx->pc == 0x1DF6ACu) {
        ctx->pc = 0x1DF6B0u;
        goto label_1df6b0;
    }
    ctx->pc = 0x1DF6A8u;
    {
        const bool branch_taken_0x1df6a8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1df6a8) {
            ctx->pc = 0x1DF6C0u;
            goto label_1df6c0;
        }
    }
    ctx->pc = 0x1DF6B0u;
label_1df6b0:
    // 0x1df6b0: 0xc7a10064  lwc1        $f1, 0x64($sp)
    ctx->pc = 0x1df6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1df6b4:
    // 0x1df6b4: 0xc7a000e4  lwc1        $f0, 0xE4($sp)
    ctx->pc = 0x1df6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1df6b8:
    // 0x1df6b8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1df6b8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1df6bc:
    // 0x1df6bc: 0xe600130c  swc1        $f0, 0x130C($s0)
    ctx->pc = 0x1df6bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4876), bits); }
label_1df6c0:
    // 0x1df6c0: 0x8e021348  lw          $v0, 0x1348($s0)
    ctx->pc = 0x1df6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4936)));
label_1df6c4:
    // 0x1df6c4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1df6c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_1df6c8:
    // 0x1df6c8: 0x1440001f  bnez        $v0, . + 4 + (0x1F << 2)
label_1df6cc:
    if (ctx->pc == 0x1DF6CCu) {
        ctx->pc = 0x1DF6CCu;
            // 0x1df6cc: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x1DF6D0u;
        goto label_1df6d0;
    }
    ctx->pc = 0x1DF6C8u;
    {
        const bool branch_taken_0x1df6c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF6C8u;
            // 0x1df6cc: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df6c8) {
            ctx->pc = 0x1DF748u;
            goto label_1df748;
        }
    }
    ctx->pc = 0x1DF6D0u;
label_1df6d0:
    // 0x1df6d0: 0xc600010c  lwc1        $f0, 0x10C($s0)
    ctx->pc = 0x1df6d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1df6d4:
    // 0x1df6d4: 0xe6001360  swc1        $f0, 0x1360($s0)
    ctx->pc = 0x1df6d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4960), bits); }
label_1df6d8:
    // 0x1df6d8: 0x86020730  lh          $v0, 0x730($s0)
    ctx->pc = 0x1df6d8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1840)));
label_1df6dc:
    // 0x1df6dc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1df6e0:
    if (ctx->pc == 0x1DF6E0u) {
        ctx->pc = 0x1DF6E4u;
        goto label_1df6e4;
    }
    ctx->pc = 0x1DF6DCu;
    {
        const bool branch_taken_0x1df6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df6dc) {
            ctx->pc = 0x1DF708u;
            goto label_1df708;
        }
    }
    ctx->pc = 0x1DF6E4u;
label_1df6e4:
    // 0x1df6e4: 0xc6011360  lwc1        $f1, 0x1360($s0)
    ctx->pc = 0x1df6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4960)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1df6e8:
    // 0x1df6e8: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x1df6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
label_1df6ec:
    // 0x1df6ec: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1df6ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1df6f0:
    // 0x1df6f0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1df6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_1df6f4:
    // 0x1df6f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df6f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1df6f8:
    // 0x1df6f8: 0x0  nop
    ctx->pc = 0x1df6f8u;
    // NOP
label_1df6fc:
    // 0x1df6fc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1df6fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1df700:
    // 0x1df700: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x1df700u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_1df704:
    // 0x1df704: 0xe6001360  swc1        $f0, 0x1360($s0)
    ctx->pc = 0x1df704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4960), bits); }
label_1df708:
    // 0x1df708: 0xae001364  sw          $zero, 0x1364($s0)
    ctx->pc = 0x1df708u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4964), GPR_U32(ctx, 0));
label_1df70c:
    // 0x1df70c: 0x8e021348  lw          $v0, 0x1348($s0)
    ctx->pc = 0x1df70cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4936)));
label_1df710:
    // 0x1df710: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1df710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_1df714:
    // 0x1df714: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1df718:
    if (ctx->pc == 0x1DF718u) {
        ctx->pc = 0x1DF718u;
            // 0x1df718: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DF71Cu;
        goto label_1df71c;
    }
    ctx->pc = 0x1DF714u;
    {
        const bool branch_taken_0x1df714 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF714u;
            // 0x1df718: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df714) {
            ctx->pc = 0x1DF724u;
            goto label_1df724;
        }
    }
    ctx->pc = 0x1DF71Cu;
label_1df71c:
    // 0x1df71c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1df71cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1df720:
    // 0x1df720: 0xae021364  sw          $v0, 0x1364($s0)
    ctx->pc = 0x1df720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4964), GPR_U32(ctx, 2));
label_1df724:
    // 0x1df724: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1df724u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1df728:
    // 0x1df728: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1df728u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1df72c:
    // 0x1df72c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x1df72cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1df730:
    // 0x1df730: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x1df730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_1df734:
    // 0x1df734: 0x26071360  addiu       $a3, $s0, 0x1360
    ctx->pc = 0x1df734u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4960));
label_1df738:
    // 0x1df738: 0xc053d7c  jal         func_14F5F0
label_1df73c:
    if (ctx->pc == 0x1DF73Cu) {
        ctx->pc = 0x1DF73Cu;
            // 0x1df73c: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1DF740u;
        goto label_1df740;
    }
    ctx->pc = 0x1DF738u;
    SET_GPR_U32(ctx, 31, 0x1DF740u);
    ctx->pc = 0x1DF73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF738u;
            // 0x1df73c: 0x240a0002  addiu       $t2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14F5F0u;
    if (runtime->hasFunction(0x14F5F0u)) {
        auto targetFn = runtime->lookupFunction(0x14F5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF740u; }
        if (ctx->pc != 0x1DF740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MoveCheck__FPfPfPfP13MoveCheckInfoP6CCPolyii_0x14f5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF740u; }
        if (ctx->pc != 0x1DF740u) { return; }
    }
    ctx->pc = 0x1DF740u;
label_1df740:
    // 0x1df740: 0x10000006  b           . + 4 + (0x6 << 2)
label_1df744:
    if (ctx->pc == 0x1DF744u) {
        ctx->pc = 0x1DF744u;
            // 0x1df744: 0x8e021348  lw          $v0, 0x1348($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4936)));
        ctx->pc = 0x1DF748u;
        goto label_1df748;
    }
    ctx->pc = 0x1DF740u;
    {
        const bool branch_taken_0x1df740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF740u;
            // 0x1df744: 0x8e021348  lw          $v0, 0x1348($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4936)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df740) {
            ctx->pc = 0x1DF75Cu;
            goto label_1df75c;
        }
    }
    ctx->pc = 0x1DF748u;
label_1df748:
    // 0x1df748: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x1df748u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1df74c:
    // 0x1df74c: 0xc041c38  jal         func_1070E0
label_1df750:
    if (ctx->pc == 0x1DF750u) {
        ctx->pc = 0x1DF750u;
            // 0x1df750: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1DF754u;
        goto label_1df754;
    }
    ctx->pc = 0x1DF74Cu;
    SET_GPR_U32(ctx, 31, 0x1DF754u);
    ctx->pc = 0x1DF750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF74Cu;
            // 0x1df750: 0x27a60080  addiu       $a2, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF754u; }
        if (ctx->pc != 0x1DF754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF754u; }
        if (ctx->pc != 0x1DF754u) { return; }
    }
    ctx->pc = 0x1DF754u;
label_1df754:
    // 0x1df754: 0xae001368  sw          $zero, 0x1368($s0)
    ctx->pc = 0x1df754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4968), GPR_U32(ctx, 0));
label_1df758:
    // 0x1df758: 0x8e021348  lw          $v0, 0x1348($s0)
    ctx->pc = 0x1df758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4936)));
label_1df75c:
    // 0x1df75c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1df75cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_1df760:
    // 0x1df760: 0x14400074  bnez        $v0, . + 4 + (0x74 << 2)
label_1df764:
    if (ctx->pc == 0x1DF764u) {
        ctx->pc = 0x1DF768u;
        goto label_1df768;
    }
    ctx->pc = 0x1DF760u;
    {
        const bool branch_taken_0x1df760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df760) {
            ctx->pc = 0x1DF934u;
            goto label_1df934;
        }
    }
    ctx->pc = 0x1DF768u;
label_1df768:
    // 0x1df768: 0x8e021368  lw          $v0, 0x1368($s0)
    ctx->pc = 0x1df768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4968)));
label_1df76c:
    // 0x1df76c: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
label_1df770:
    if (ctx->pc == 0x1DF770u) {
        ctx->pc = 0x1DF770u;
            // 0x1df770: 0x27a30084  addiu       $v1, $sp, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
        ctx->pc = 0x1DF774u;
        goto label_1df774;
    }
    ctx->pc = 0x1DF76Cu;
    {
        const bool branch_taken_0x1df76c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF770u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF76Cu;
            // 0x1df770: 0x27a30084  addiu       $v1, $sp, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df76c) {
            ctx->pc = 0x1DF904u;
            goto label_1df904;
        }
    }
    ctx->pc = 0x1DF774u;
label_1df774:
    // 0x1df774: 0x86030730  lh          $v1, 0x730($s0)
    ctx->pc = 0x1df774u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1840)));
label_1df778:
    // 0x1df778: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1df778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1df77c:
    // 0x1df77c: 0x14620055  bne         $v1, $v0, . + 4 + (0x55 << 2)
label_1df780:
    if (ctx->pc == 0x1DF780u) {
        ctx->pc = 0x1DF780u;
            // 0x1df780: 0x27a30084  addiu       $v1, $sp, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
        ctx->pc = 0x1DF784u;
        goto label_1df784;
    }
    ctx->pc = 0x1DF77Cu;
    {
        const bool branch_taken_0x1df77c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DF780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF77Cu;
            // 0x1df780: 0x27a30084  addiu       $v1, $sp, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df77c) {
            ctx->pc = 0x1DF8D4u;
            goto label_1df8d4;
        }
    }
    ctx->pc = 0x1DF784u;
label_1df784:
    // 0x1df784: 0x240204b0  addiu       $v0, $zero, 0x4B0
    ctx->pc = 0x1df784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
label_1df788:
    // 0x1df788: 0xa6021158  sh          $v0, 0x1158($s0)
    ctx->pc = 0x1df788u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4440), (uint16_t)GPR_U32(ctx, 2));
label_1df78c:
    // 0x1df78c: 0x8e021368  lw          $v0, 0x1368($s0)
    ctx->pc = 0x1df78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4968)));
label_1df790:
    // 0x1df790: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1df794:
    if (ctx->pc == 0x1DF794u) {
        ctx->pc = 0x1DF794u;
            // 0x1df794: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1DF798u;
        goto label_1df798;
    }
    ctx->pc = 0x1DF790u;
    {
        const bool branch_taken_0x1df790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF790u;
            // 0x1df794: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df790) {
            ctx->pc = 0x1DF7DCu;
            goto label_1df7dc;
        }
    }
    ctx->pc = 0x1DF798u;
label_1df798:
    // 0x1df798: 0x861213b2  lh          $s2, 0x13B2($s0)
    ctx->pc = 0x1df798u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 5042)));
label_1df79c:
    // 0x1df79c: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
label_1df7a0:
    if (ctx->pc == 0x1DF7A0u) {
        ctx->pc = 0x1DF7A0u;
            // 0x1df7a0: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x1DF7A4u;
        goto label_1df7a4;
    }
    ctx->pc = 0x1DF79Cu;
    {
        const bool branch_taken_0x1df79c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF79Cu;
            // 0x1df7a0: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df79c) {
            ctx->pc = 0x1DF7C4u;
            goto label_1df7c4;
        }
    }
    ctx->pc = 0x1DF7A4u;
label_1df7a4:
    // 0x1df7a4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1df7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1df7a8:
    // 0x1df7a8: 0xc0a0f58  jal         func_283D60
label_1df7ac:
    if (ctx->pc == 0x1DF7ACu) {
        ctx->pc = 0x1DF7ACu;
            // 0x1df7ac: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->pc = 0x1DF7B0u;
        goto label_1df7b0;
    }
    ctx->pc = 0x1DF7A8u;
    SET_GPR_U32(ctx, 31, 0x1DF7B0u);
    ctx->pc = 0x1DF7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF7A8u;
            // 0x1df7ac: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF7B0u; }
        if (ctx->pc != 0x1DF7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF7B0u; }
        if (ctx->pc != 0x1DF7B0u) { return; }
    }
    ctx->pc = 0x1DF7B0u;
label_1df7b0:
    // 0x1df7b0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1df7b4:
    if (ctx->pc == 0x1DF7B4u) {
        ctx->pc = 0x1DF7B8u;
        goto label_1df7b8;
    }
    ctx->pc = 0x1DF7B0u;
    {
        const bool branch_taken_0x1df7b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df7b0) {
            ctx->pc = 0x1DF7C0u;
            goto label_1df7c0;
        }
    }
    ctx->pc = 0x1DF7B8u;
label_1df7b8:
    // 0x1df7b8: 0x8c5200d4  lw          $s2, 0xD4($v0)
    ctx->pc = 0x1df7b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 212)));
label_1df7bc:
    // 0x1df7bc: 0x0  nop
    ctx->pc = 0x1df7bcu;
    // NOP
label_1df7c0:
    // 0x1df7c0: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x1df7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1df7c4:
    // 0x1df7c4: 0x12420006  beq         $s2, $v0, . + 4 + (0x6 << 2)
label_1df7c8:
    if (ctx->pc == 0x1DF7C8u) {
        ctx->pc = 0x1DF7C8u;
            // 0x1df7c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1DF7CCu;
        goto label_1df7cc;
    }
    ctx->pc = 0x1DF7C4u;
    {
        const bool branch_taken_0x1df7c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF7C4u;
            // 0x1df7c8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df7c4) {
            ctx->pc = 0x1DF7E0u;
            goto label_1df7e0;
        }
    }
    ctx->pc = 0x1DF7CCu;
label_1df7cc:
    // 0x1df7cc: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x1df7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_1df7d0:
    // 0x1df7d0: 0x12420002  beq         $s2, $v0, . + 4 + (0x2 << 2)
label_1df7d4:
    if (ctx->pc == 0x1DF7D4u) {
        ctx->pc = 0x1DF7D8u;
        goto label_1df7d8;
    }
    ctx->pc = 0x1DF7D0u;
    {
        const bool branch_taken_0x1df7d0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x1df7d0) {
            ctx->pc = 0x1DF7DCu;
            goto label_1df7dc;
        }
    }
    ctx->pc = 0x1DF7D8u;
label_1df7d8:
    // 0x1df7d8: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x1df7d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1df7dc:
    // 0x1df7dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1df7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1df7e0:
    // 0x1df7e0: 0x16420012  bne         $s2, $v0, . + 4 + (0x12 << 2)
label_1df7e4:
    if (ctx->pc == 0x1DF7E4u) {
        ctx->pc = 0x1DF7E4u;
            // 0x1df7e4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DF7E8u;
        goto label_1df7e8;
    }
    ctx->pc = 0x1DF7E0u;
    {
        const bool branch_taken_0x1df7e0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DF7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF7E0u;
            // 0x1df7e4: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df7e0) {
            ctx->pc = 0x1DF82Cu;
            goto label_1df82c;
        }
    }
    ctx->pc = 0x1DF7E8u;
label_1df7e8:
    // 0x1df7e8: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1df7e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1df7ec:
    // 0x1df7ec: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1df7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1df7f0:
    // 0x1df7f0: 0x24a57fc0  addiu       $a1, $a1, 0x7FC0
    ctx->pc = 0x1df7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32704));
label_1df7f4:
    // 0x1df7f4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1df7f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1df7f8:
    // 0x1df7f8: 0xc0b8498  jal         func_2E1260
label_1df7fc:
    if (ctx->pc == 0x1DF7FCu) {
        ctx->pc = 0x1DF7FCu;
            // 0x1df7fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DF800u;
        goto label_1df800;
    }
    ctx->pc = 0x1DF7F8u;
    SET_GPR_U32(ctx, 31, 0x1DF800u);
    ctx->pc = 0x1DF7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF7F8u;
            // 0x1df7fc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF800u; }
        if (ctx->pc != 0x1DF800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF800u; }
        if (ctx->pc != 0x1DF800u) { return; }
    }
    ctx->pc = 0x1DF800u;
label_1df800:
    // 0x1df800: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1df800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1df804:
    // 0x1df804: 0x26051420  addiu       $a1, $s0, 0x1420
    ctx->pc = 0x1df804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5152));
label_1df808:
    // 0x1df808: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1df808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1df80c:
    // 0x1df80c: 0xc0b8894  jal         func_2E2250
label_1df810:
    if (ctx->pc == 0x1DF810u) {
        ctx->pc = 0x1DF810u;
            // 0x1df810: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1DF814u;
        goto label_1df814;
    }
    ctx->pc = 0x1DF80Cu;
    SET_GPR_U32(ctx, 31, 0x1DF814u);
    ctx->pc = 0x1DF810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF80Cu;
            // 0x1df810: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF814u; }
        if (ctx->pc != 0x1DF814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF814u; }
        if (ctx->pc != 0x1DF814u) { return; }
    }
    ctx->pc = 0x1DF814u;
label_1df814:
    // 0x1df814: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1df814u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1df818:
    // 0x1df818: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x1df818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1df81c:
    // 0x1df81c: 0xc063818  jal         func_18E060
label_1df820:
    if (ctx->pc == 0x1DF820u) {
        ctx->pc = 0x1DF820u;
            // 0x1df820: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DF824u;
        goto label_1df824;
    }
    ctx->pc = 0x1DF81Cu;
    SET_GPR_U32(ctx, 31, 0x1DF824u);
    ctx->pc = 0x1DF820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF81Cu;
            // 0x1df820: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF824u; }
        if (ctx->pc != 0x1DF824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF824u; }
        if (ctx->pc != 0x1DF824u) { return; }
    }
    ctx->pc = 0x1DF824u;
label_1df824:
    // 0x1df824: 0x1000002a  b           . + 4 + (0x2A << 2)
label_1df828:
    if (ctx->pc == 0x1DF828u) {
        ctx->pc = 0x1DF82Cu;
        goto label_1df82c;
    }
    ctx->pc = 0x1DF824u;
    {
        const bool branch_taken_0x1df824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df824) {
            ctx->pc = 0x1DF8D0u;
            goto label_1df8d0;
        }
    }
    ctx->pc = 0x1DF82Cu;
label_1df82c:
    // 0x1df82c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x1df82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1df830:
    // 0x1df830: 0xc041c5c  jal         func_107170
label_1df834:
    if (ctx->pc == 0x1DF834u) {
        ctx->pc = 0x1DF834u;
            // 0x1df834: 0x26051420  addiu       $a1, $s0, 0x1420 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5152));
        ctx->pc = 0x1DF838u;
        goto label_1df838;
    }
    ctx->pc = 0x1DF830u;
    SET_GPR_U32(ctx, 31, 0x1DF838u);
    ctx->pc = 0x1DF834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF830u;
            // 0x1df834: 0x26051420  addiu       $a1, $s0, 0x1420 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 5152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF838u; }
        if (ctx->pc != 0x1DF838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF838u; }
        if (ctx->pc != 0x1DF838u) { return; }
    }
    ctx->pc = 0x1DF838u;
label_1df838:
    // 0x1df838: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1df838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_1df83c:
    // 0x1df83c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1df83cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1df840:
    // 0x1df840: 0xc0724bc  jal         func_1C92F0
label_1df844:
    if (ctx->pc == 0x1DF844u) {
        ctx->pc = 0x1DF848u;
        goto label_1df848;
    }
    ctx->pc = 0x1DF840u;
    SET_GPR_U32(ctx, 31, 0x1DF848u);
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF848u; }
        if (ctx->pc != 0x1DF848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF848u; }
        if (ctx->pc != 0x1DF848u) { return; }
    }
    ctx->pc = 0x1DF848u;
label_1df848:
    // 0x1df848: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1df848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1df84c:
    // 0x1df84c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1df84cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1df850:
    // 0x1df850: 0xc7a100f0  lwc1        $f1, 0xF0($sp)
    ctx->pc = 0x1df850u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1df854:
    // 0x1df854: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1df854u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1df858:
    // 0x1df858: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x1df858u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_1df85c:
    // 0x1df85c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1df85cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1df860:
    // 0x1df860: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1df860u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1df864:
    // 0x1df864: 0xc0724bc  jal         func_1C92F0
label_1df868:
    if (ctx->pc == 0x1DF868u) {
        ctx->pc = 0x1DF868u;
            // 0x1df868: 0xe7a000f0  swc1        $f0, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->pc = 0x1DF86Cu;
        goto label_1df86c;
    }
    ctx->pc = 0x1DF864u;
    SET_GPR_U32(ctx, 31, 0x1DF86Cu);
    ctx->pc = 0x1DF868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF864u;
            // 0x1df868: 0xe7a000f0  swc1        $f0, 0xF0($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF86Cu; }
        if (ctx->pc != 0x1DF86Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF86Cu; }
        if (ctx->pc != 0x1DF86Cu) { return; }
    }
    ctx->pc = 0x1DF86Cu;
label_1df86c:
    // 0x1df86c: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1df86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1df870:
    // 0x1df870: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1df870u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1df874:
    // 0x1df874: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1df874u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1df878:
    // 0x1df878: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1df878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1df87c:
    // 0x1df87c: 0xc7a100f8  lwc1        $f1, 0xF8($sp)
    ctx->pc = 0x1df87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1df880:
    // 0x1df880: 0x24a57fc8  addiu       $a1, $a1, 0x7FC8
    ctx->pc = 0x1df880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32712));
label_1df884:
    // 0x1df884: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x1df884u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_1df888:
    // 0x1df888: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1df888u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1df88c:
    // 0x1df88c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1df88cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1df890:
    // 0x1df890: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1df890u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1df894:
    // 0x1df894: 0xc0b8498  jal         func_2E1260
label_1df898:
    if (ctx->pc == 0x1DF898u) {
        ctx->pc = 0x1DF898u;
            // 0x1df898: 0xe7a000f8  swc1        $f0, 0xF8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
        ctx->pc = 0x1DF89Cu;
        goto label_1df89c;
    }
    ctx->pc = 0x1DF894u;
    SET_GPR_U32(ctx, 31, 0x1DF89Cu);
    ctx->pc = 0x1DF898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF894u;
            // 0x1df898: 0xe7a000f8  swc1        $f0, 0xF8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 248), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1260u;
    if (runtime->hasFunction(0x2E1260u)) {
        auto targetFn = runtime->lookupFunction(0x2E1260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF89Cu; }
        if (ctx->pc != 0x1DF89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateEffSpt__16CEffectScriptManFPcii_0x2e1260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF89Cu; }
        if (ctx->pc != 0x1DF89Cu) { return; }
    }
    ctx->pc = 0x1DF89Cu;
label_1df89c:
    // 0x1df89c: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1df89cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1df8a0:
    // 0x1df8a0: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x1df8a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_1df8a4:
    // 0x1df8a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1df8a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1df8a8:
    // 0x1df8a8: 0xc0b8894  jal         func_2E2250
label_1df8ac:
    if (ctx->pc == 0x1DF8ACu) {
        ctx->pc = 0x1DF8ACu;
            // 0x1df8ac: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1DF8B0u;
        goto label_1df8b0;
    }
    ctx->pc = 0x1DF8A8u;
    SET_GPR_U32(ctx, 31, 0x1DF8B0u);
    ctx->pc = 0x1DF8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF8A8u;
            // 0x1df8ac: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2250u;
    if (runtime->hasFunction(0x2E2250u)) {
        auto targetFn = runtime->lookupFunction(0x2E2250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF8B0u; }
        if (ctx->pc != 0x1DF8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptVect1__16CEffectScriptManFPfii_0x2e2250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF8B0u; }
        if (ctx->pc != 0x1DF8B0u) { return; }
    }
    ctx->pc = 0x1DF8B0u;
label_1df8b0:
    // 0x1df8b0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1df8b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1df8b4:
    // 0x1df8b4: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x1df8b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_1df8b8:
    // 0x1df8b8: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_1df8bc:
    if (ctx->pc == 0x1DF8BCu) {
        ctx->pc = 0x1DF8BCu;
            // 0x1df8bc: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x1DF8C0u;
        goto label_1df8c0;
    }
    ctx->pc = 0x1DF8B8u;
    {
        const bool branch_taken_0x1df8b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF8B8u;
            // 0x1df8bc: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df8b8) {
            ctx->pc = 0x1DF830u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1df830;
        }
    }
    ctx->pc = 0x1DF8C0u;
label_1df8c0:
    // 0x1df8c0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1df8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1df8c4:
    // 0x1df8c4: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x1df8c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1df8c8:
    // 0x1df8c8: 0xc063818  jal         func_18E060
label_1df8cc:
    if (ctx->pc == 0x1DF8CCu) {
        ctx->pc = 0x1DF8CCu;
            // 0x1df8cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DF8D0u;
        goto label_1df8d0;
    }
    ctx->pc = 0x1DF8C8u;
    SET_GPR_U32(ctx, 31, 0x1DF8D0u);
    ctx->pc = 0x1DF8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF8C8u;
            // 0x1df8cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF8D0u; }
        if (ctx->pc != 0x1DF8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF8D0u; }
        if (ctx->pc != 0x1DF8D0u) { return; }
    }
    ctx->pc = 0x1DF8D0u;
label_1df8d0:
    // 0x1df8d0: 0x27a30084  addiu       $v1, $sp, 0x84
    ctx->pc = 0x1df8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 132));
label_1df8d4:
    // 0x1df8d4: 0x3c02bf19  lui         $v0, 0xBF19
    ctx->pc = 0x1df8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48921 << 16));
label_1df8d8:
    // 0x1df8d8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x1df8d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1df8dc:
    // 0x1df8dc: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1df8dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_1df8e0:
    // 0x1df8e0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1df8e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1df8e4:
    // 0x1df8e4: 0x0  nop
    ctx->pc = 0x1df8e4u;
    // NOP
label_1df8e8:
    // 0x1df8e8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1df8e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1df8ec:
    // 0x1df8ec: 0x0  nop
    ctx->pc = 0x1df8ecu;
    // NOP
label_1df8f0:
    // 0x1df8f0: 0x45000010  bc1f        . + 4 + (0x10 << 2)
label_1df8f4:
    if (ctx->pc == 0x1DF8F4u) {
        ctx->pc = 0x1DF8F8u;
        goto label_1df8f8;
    }
    ctx->pc = 0x1DF8F0u;
    {
        const bool branch_taken_0x1df8f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1df8f0) {
            ctx->pc = 0x1DF934u;
            goto label_1df934;
        }
    }
    ctx->pc = 0x1DF8F8u;
label_1df8f8:
    // 0x1df8f8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1df8f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1df8fc:
    // 0x1df8fc: 0x1000000d  b           . + 4 + (0xD << 2)
label_1df900:
    if (ctx->pc == 0x1DF900u) {
        ctx->pc = 0x1DF900u;
            // 0x1df900: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->pc = 0x1DF904u;
        goto label_1df904;
    }
    ctx->pc = 0x1DF8FCu;
    {
        const bool branch_taken_0x1df8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF8FCu;
            // 0x1df900: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df8fc) {
            ctx->pc = 0x1DF934u;
            goto label_1df934;
        }
    }
    ctx->pc = 0x1DF904u;
label_1df904:
    // 0x1df904: 0x3c023f19  lui         $v0, 0x3F19
    ctx->pc = 0x1df904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16153 << 16));
label_1df908:
    // 0x1df908: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x1df908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1df90c:
    // 0x1df90c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1df90cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_1df910:
    // 0x1df910: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1df914:
    // 0x1df914: 0x3c02c060  lui         $v0, 0xC060
    ctx->pc = 0x1df914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49248 << 16));
label_1df918:
    // 0x1df918: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1df918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1df91c:
    // 0x1df91c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1df91cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1df920:
    // 0x1df920: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1df920u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1df924:
    // 0x1df924: 0x0  nop
    ctx->pc = 0x1df924u;
    // NOP
label_1df928:
    // 0x1df928: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1df92c:
    if (ctx->pc == 0x1DF92Cu) {
        ctx->pc = 0x1DF92Cu;
            // 0x1df92c: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->pc = 0x1DF930u;
        goto label_1df930;
    }
    ctx->pc = 0x1DF928u;
    {
        const bool branch_taken_0x1df928 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DF92Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF928u;
            // 0x1df92c: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df928) {
            ctx->pc = 0x1DF934u;
            goto label_1df934;
        }
    }
    ctx->pc = 0x1DF930u;
label_1df930:
    // 0x1df930: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x1df930u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_1df934:
    // 0x1df934: 0x860512e2  lh          $a1, 0x12E2($s0)
    ctx->pc = 0x1df934u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4834)));
label_1df938:
    // 0x1df938: 0xc0a0ed8  jal         func_283B60
label_1df93c:
    if (ctx->pc == 0x1DF93Cu) {
        ctx->pc = 0x1DF93Cu;
            // 0x1df93c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1DF940u;
        goto label_1df940;
    }
    ctx->pc = 0x1DF938u;
    SET_GPR_U32(ctx, 31, 0x1DF940u);
    ctx->pc = 0x1DF93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF938u;
            // 0x1df93c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF940u; }
        if (ctx->pc != 0x1DF940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF940u; }
        if (ctx->pc != 0x1DF940u) { return; }
    }
    ctx->pc = 0x1DF940u;
label_1df940:
    // 0x1df940: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1df944:
    if (ctx->pc == 0x1DF944u) {
        ctx->pc = 0x1DF948u;
        goto label_1df948;
    }
    ctx->pc = 0x1DF940u;
    {
        const bool branch_taken_0x1df940 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df940) {
            ctx->pc = 0x1DF984u;
            goto label_1df984;
        }
    }
    ctx->pc = 0x1DF948u;
label_1df948:
    // 0x1df948: 0xc6011480  lwc1        $f1, 0x1480($s0)
    ctx->pc = 0x1df948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5248)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1df94c:
    // 0x1df94c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1df94cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1df950:
    // 0x1df950: 0x0  nop
    ctx->pc = 0x1df950u;
    // NOP
label_1df954:
    // 0x1df954: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x1df954u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1df958:
    // 0x1df958: 0x0  nop
    ctx->pc = 0x1df958u;
    // NOP
label_1df95c:
    // 0x1df95c: 0x45010009  bc1t        . + 4 + (0x9 << 2)
label_1df960:
    if (ctx->pc == 0x1DF960u) {
        ctx->pc = 0x1DF960u;
            // 0x1df960: 0x26041470  addiu       $a0, $s0, 0x1470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5232));
        ctx->pc = 0x1DF964u;
        goto label_1df964;
    }
    ctx->pc = 0x1DF95Cu;
    {
        const bool branch_taken_0x1df95c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DF960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF95Cu;
            // 0x1df960: 0x26041470  addiu       $a0, $s0, 0x1470 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 5232));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df95c) {
            ctx->pc = 0x1DF984u;
            goto label_1df984;
        }
    }
    ctx->pc = 0x1DF964u;
label_1df964:
    // 0x1df964: 0xc04c018  jal         func_130060
label_1df968:
    if (ctx->pc == 0x1DF968u) {
        ctx->pc = 0x1DF968u;
            // 0x1df968: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x1DF96Cu;
        goto label_1df96c;
    }
    ctx->pc = 0x1DF964u;
    SET_GPR_U32(ctx, 31, 0x1DF96Cu);
    ctx->pc = 0x1DF968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF964u;
            // 0x1df968: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF96Cu; }
        if (ctx->pc != 0x1DF96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF96Cu; }
        if (ctx->pc != 0x1DF96Cu) { return; }
    }
    ctx->pc = 0x1DF96Cu;
label_1df96c:
    // 0x1df96c: 0xc6011484  lwc1        $f1, 0x1484($s0)
    ctx->pc = 0x1df96cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1df970:
    // 0x1df970: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1df970u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1df974:
    // 0x1df974: 0x0  nop
    ctx->pc = 0x1df974u;
    // NOP
label_1df978:
    // 0x1df978: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1df97c:
    if (ctx->pc == 0x1DF97Cu) {
        ctx->pc = 0x1DF980u;
        goto label_1df980;
    }
    ctx->pc = 0x1DF978u;
    {
        const bool branch_taken_0x1df978 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1df978) {
            ctx->pc = 0x1DF984u;
            goto label_1df984;
        }
    }
    ctx->pc = 0x1DF980u;
label_1df980:
    // 0x1df980: 0xae001480  sw          $zero, 0x1480($s0)
    ctx->pc = 0x1df980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 5248), GPR_U32(ctx, 0));
label_1df984:
    // 0x1df984: 0xc60e1494  lwc1        $f14, 0x1494($s0)
    ctx->pc = 0x1df984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1df988:
    // 0x1df988: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1df988u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1df98c:
    // 0x1df98c: 0x0  nop
    ctx->pc = 0x1df98cu;
    // NOP
label_1df990:
    // 0x1df990: 0x460e0032  c.eq.s      $f0, $f14
    ctx->pc = 0x1df990u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[14])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1df994:
    // 0x1df994: 0x0  nop
    ctx->pc = 0x1df994u;
    // NOP
label_1df998:
    // 0x1df998: 0x45010010  bc1t        . + 4 + (0x10 << 2)
label_1df99c:
    if (ctx->pc == 0x1DF99Cu) {
        ctx->pc = 0x1DF99Cu;
            // 0x1df99c: 0x27b10074  addiu       $s1, $sp, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
        ctx->pc = 0x1DF9A0u;
        goto label_1df9a0;
    }
    ctx->pc = 0x1DF998u;
    {
        const bool branch_taken_0x1df998 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DF99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF998u;
            // 0x1df99c: 0x27b10074  addiu       $s1, $sp, 0x74 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 116));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df998) {
            ctx->pc = 0x1DF9DCu;
            goto label_1df9dc;
        }
    }
    ctx->pc = 0x1DF9A0u;
label_1df9a0:
    // 0x1df9a0: 0xc60d1490  lwc1        $f13, 0x1490($s0)
    ctx->pc = 0x1df9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1df9a4:
    // 0x1df9a4: 0xc62c0000  lwc1        $f12, 0x0($s1)
    ctx->pc = 0x1df9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1df9a8:
    // 0x1df9a8: 0xc04c2d8  jal         func_130B60
label_1df9ac:
    if (ctx->pc == 0x1DF9ACu) {
        ctx->pc = 0x1DF9ACu;
            // 0x1df9ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DF9B0u;
        goto label_1df9b0;
    }
    ctx->pc = 0x1DF9A8u;
    SET_GPR_U32(ctx, 31, 0x1DF9B0u);
    ctx->pc = 0x1DF9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF9A8u;
            // 0x1df9ac: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130B60u;
    if (runtime->hasFunction(0x130B60u)) {
        auto targetFn = runtime->lookupFunction(0x130B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF9B0u; }
        if (ctx->pc != 0x1DF9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleInterpolate__Ffffi_0x130b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF9B0u; }
        if (ctx->pc != 0x1DF9B0u) { return; }
    }
    ctx->pc = 0x1DF9B0u;
label_1df9b0:
    // 0x1df9b0: 0xe6200000  swc1        $f0, 0x0($s1)
    ctx->pc = 0x1df9b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
label_1df9b4:
    // 0x1df9b4: 0x3c023d49  lui         $v0, 0x3D49
    ctx->pc = 0x1df9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15689 << 16));
label_1df9b8:
    // 0x1df9b8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1df9b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1df9bc:
    // 0x1df9bc: 0xc60d1490  lwc1        $f13, 0x1490($s0)
    ctx->pc = 0x1df9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1df9c0:
    // 0x1df9c0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1df9c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1df9c4:
    // 0x1df9c4: 0xc04c344  jal         func_130D10
label_1df9c8:
    if (ctx->pc == 0x1DF9C8u) {
        ctx->pc = 0x1DF9C8u;
            // 0x1df9c8: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1DF9CCu;
        goto label_1df9cc;
    }
    ctx->pc = 0x1DF9C4u;
    SET_GPR_U32(ctx, 31, 0x1DF9CCu);
    ctx->pc = 0x1DF9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF9C4u;
            // 0x1df9c8: 0xc62c0000  lwc1        $f12, 0x0($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130D10u;
    if (runtime->hasFunction(0x130D10u)) {
        auto targetFn = runtime->lookupFunction(0x130D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF9CCu; }
        if (ctx->pc != 0x1DF9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleCmp__Ffff_0x130d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF9CCu; }
        if (ctx->pc != 0x1DF9CCu) { return; }
    }
    ctx->pc = 0x1DF9CCu;
label_1df9cc:
    // 0x1df9cc: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1df9d0:
    if (ctx->pc == 0x1DF9D0u) {
        ctx->pc = 0x1DF9D4u;
        goto label_1df9d4;
    }
    ctx->pc = 0x1DF9CCu;
    {
        const bool branch_taken_0x1df9cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df9cc) {
            ctx->pc = 0x1DF9F0u;
            goto label_1df9f0;
        }
    }
    ctx->pc = 0x1DF9D4u;
label_1df9d4:
    // 0x1df9d4: 0x10000006  b           . + 4 + (0x6 << 2)
label_1df9d8:
    if (ctx->pc == 0x1DF9D8u) {
        ctx->pc = 0x1DF9D8u;
            // 0x1df9d8: 0xae001494  sw          $zero, 0x1494($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5268), GPR_U32(ctx, 0));
        ctx->pc = 0x1DF9DCu;
        goto label_1df9dc;
    }
    ctx->pc = 0x1DF9D4u;
    {
        const bool branch_taken_0x1df9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF9D4u;
            // 0x1df9d8: 0xae001494  sw          $zero, 0x1494($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 5268), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df9d4) {
            ctx->pc = 0x1DF9F0u;
            goto label_1df9f0;
        }
    }
    ctx->pc = 0x1DF9DCu;
label_1df9dc:
    // 0x1df9dc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1df9dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1df9e0:
    // 0x1df9e0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df9e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1df9e4:
    // 0x1df9e4: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1df9e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1df9e8:
    // 0x1df9e8: 0x320f809  jalr        $t9
label_1df9ec:
    if (ctx->pc == 0x1DF9ECu) {
        ctx->pc = 0x1DF9ECu;
            // 0x1df9ec: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1DF9F0u;
        goto label_1df9f0;
    }
    ctx->pc = 0x1DF9E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DF9F0u);
        ctx->pc = 0x1DF9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF9E8u;
            // 0x1df9ec: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DF9F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DF9F0u; }
            if (ctx->pc != 0x1DF9F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1DF9F0u;
label_1df9f0:
    // 0x1df9f0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1df9f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1df9f4:
    // 0x1df9f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df9f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1df9f8:
    // 0x1df9f8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1df9f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1df9fc:
    // 0x1df9fc: 0x320f809  jalr        $t9
label_1dfa00:
    if (ctx->pc == 0x1DFA00u) {
        ctx->pc = 0x1DFA00u;
            // 0x1dfa00: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x1DFA04u;
        goto label_1dfa04;
    }
    ctx->pc = 0x1DF9FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DFA04u);
        ctx->pc = 0x1DFA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF9FCu;
            // 0x1dfa00: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DFA04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DFA04u; }
            if (ctx->pc != 0x1DFA04u) { return; }
        }
        }
    }
    ctx->pc = 0x1DFA04u;
label_1dfa04:
    // 0x1dfa04: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1dfa04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1dfa08:
    // 0x1dfa08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dfa08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dfa0c:
    // 0x1dfa0c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1dfa0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1dfa10:
    // 0x1dfa10: 0x320f809  jalr        $t9
label_1dfa14:
    if (ctx->pc == 0x1DFA14u) {
        ctx->pc = 0x1DFA14u;
            // 0x1dfa14: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1DFA18u;
        goto label_1dfa18;
    }
    ctx->pc = 0x1DFA10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DFA18u);
        ctx->pc = 0x1DFA14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFA10u;
            // 0x1dfa14: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DFA18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DFA18u; }
            if (ctx->pc != 0x1DFA18u) { return; }
        }
        }
    }
    ctx->pc = 0x1DFA18u;
label_1dfa18:
    // 0x1dfa18: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x1dfa18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_1dfa1c:
    // 0x1dfa1c: 0xc041c5c  jal         func_107170
label_1dfa20:
    if (ctx->pc == 0x1DFA20u) {
        ctx->pc = 0x1DFA20u;
            // 0x1dfa20: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x1DFA24u;
        goto label_1dfa24;
    }
    ctx->pc = 0x1DFA1Cu;
    SET_GPR_U32(ctx, 31, 0x1DFA24u);
    ctx->pc = 0x1DFA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFA1Cu;
            // 0x1dfa20: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFA24u; }
        if (ctx->pc != 0x1DFA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFA24u; }
        if (ctx->pc != 0x1DFA24u) { return; }
    }
    ctx->pc = 0x1DFA24u;
label_1dfa24:
    // 0x1dfa24: 0x8e031200  lw          $v1, 0x1200($s0)
    ctx->pc = 0x1dfa24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4608)));
label_1dfa28:
    // 0x1dfa28: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_1dfa2c:
    if (ctx->pc == 0x1DFA2Cu) {
        ctx->pc = 0x1DFA30u;
        goto label_1dfa30;
    }
    ctx->pc = 0x1DFA28u;
    {
        const bool branch_taken_0x1dfa28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfa28) {
            ctx->pc = 0x1DFA98u;
            goto label_1dfa98;
        }
    }
    ctx->pc = 0x1DFA30u;
label_1dfa30:
    // 0x1dfa30: 0x86041204  lh          $a0, 0x1204($s0)
    ctx->pc = 0x1dfa30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4612)));
label_1dfa34:
    // 0x1dfa34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1dfa34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1dfa38:
    // 0x1dfa38: 0x14830017  bne         $a0, $v1, . + 4 + (0x17 << 2)
label_1dfa3c:
    if (ctx->pc == 0x1DFA3Cu) {
        ctx->pc = 0x1DFA40u;
        goto label_1dfa40;
    }
    ctx->pc = 0x1DFA38u;
    {
        const bool branch_taken_0x1dfa38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dfa38) {
            ctx->pc = 0x1DFA98u;
            goto label_1dfa98;
        }
    }
    ctx->pc = 0x1DFA40u;
label_1dfa40:
    // 0x1dfa40: 0x8e0411fc  lw          $a0, 0x11FC($s0)
    ctx->pc = 0x1dfa40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4604)));
label_1dfa44:
    // 0x1dfa44: 0xc059cc0  jal         func_167300
label_1dfa48:
    if (ctx->pc == 0x1DFA48u) {
        ctx->pc = 0x1DFA48u;
            // 0x1dfa48: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x1DFA4Cu;
        goto label_1dfa4c;
    }
    ctx->pc = 0x1DFA44u;
    SET_GPR_U32(ctx, 31, 0x1DFA4Cu);
    ctx->pc = 0x1DFA48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFA44u;
            // 0x1dfa48: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x167300u;
    if (runtime->hasFunction(0x167300u)) {
        auto targetFn = runtime->lookupFunction(0x167300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFA4Cu; }
        if (ctx->pc != 0x1DFA4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLWMatrix__9CMapPartsFPA4_f_0x167300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFA4Cu; }
        if (ctx->pc != 0x1DFA4Cu) { return; }
    }
    ctx->pc = 0x1DFA4Cu;
label_1dfa4c:
    // 0x1dfa4c: 0x8e041200  lw          $a0, 0x1200($s0)
    ctx->pc = 0x1dfa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4608)));
label_1dfa50:
    // 0x1dfa50: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1dfa50u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1dfa54:
    // 0x1dfa54: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1dfa54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1dfa58:
    // 0x1dfa58: 0x320f809  jalr        $t9
label_1dfa5c:
    if (ctx->pc == 0x1DFA5Cu) {
        ctx->pc = 0x1DFA5Cu;
            // 0x1dfa5c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1DFA60u;
        goto label_1dfa60;
    }
    ctx->pc = 0x1DFA58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DFA60u);
        ctx->pc = 0x1DFA5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFA58u;
            // 0x1dfa5c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DFA60u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DFA60u; }
            if (ctx->pc != 0x1DFA60u) { return; }
        }
        }
    }
    ctx->pc = 0x1DFA60u;
label_1dfa60:
    // 0x1dfa60: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1dfa60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_1dfa64:
    // 0x1dfa64: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x1dfa64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_1dfa68:
    // 0x1dfa68: 0xc041bb0  jal         func_106EC0
label_1dfa6c:
    if (ctx->pc == 0x1DFA6Cu) {
        ctx->pc = 0x1DFA6Cu;
            // 0x1dfa6c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DFA70u;
        goto label_1dfa70;
    }
    ctx->pc = 0x1DFA68u;
    SET_GPR_U32(ctx, 31, 0x1DFA70u);
    ctx->pc = 0x1DFA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFA68u;
            // 0x1dfa6c: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFA70u; }
        if (ctx->pc != 0x1DFA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DFA70u; }
        if (ctx->pc != 0x1DFA70u) { return; }
    }
    ctx->pc = 0x1DFA70u;
label_1dfa70:
    // 0x1dfa70: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1dfa70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1dfa74:
    // 0x1dfa74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dfa74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dfa78:
    // 0x1dfa78: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1dfa78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1dfa7c:
    // 0x1dfa7c: 0x320f809  jalr        $t9
label_1dfa80:
    if (ctx->pc == 0x1DFA80u) {
        ctx->pc = 0x1DFA80u;
            // 0x1dfa80: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1DFA84u;
        goto label_1dfa84;
    }
    ctx->pc = 0x1DFA7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DFA84u);
        ctx->pc = 0x1DFA80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFA7Cu;
            // 0x1dfa80: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DFA84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DFA84u; }
            if (ctx->pc != 0x1DFA84u) { return; }
        }
        }
    }
    ctx->pc = 0x1DFA84u;
label_1dfa84:
    // 0x1dfa84: 0x8e041200  lw          $a0, 0x1200($s0)
    ctx->pc = 0x1dfa84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4608)));
label_1dfa88:
    // 0x1dfa88: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1dfa88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1dfa8c:
    // 0x1dfa8c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1dfa8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1dfa90:
    // 0x1dfa90: 0x320f809  jalr        $t9
label_1dfa94:
    if (ctx->pc == 0x1DFA94u) {
        ctx->pc = 0x1DFA94u;
            // 0x1dfa94: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1DFA98u;
        goto label_1dfa98;
    }
    ctx->pc = 0x1DFA90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DFA98u);
        ctx->pc = 0x1DFA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFA90u;
            // 0x1dfa94: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DFA98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DFA98u; }
            if (ctx->pc != 0x1DFA98u) { return; }
        }
        }
    }
    ctx->pc = 0x1DFA98u;
label_1dfa98:
    // 0x1dfa98: 0x8e0411fc  lw          $a0, 0x11FC($s0)
    ctx->pc = 0x1dfa98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4604)));
label_1dfa9c:
    // 0x1dfa9c: 0x1080000e  beqz        $a0, . + 4 + (0xE << 2)
label_1dfaa0:
    if (ctx->pc == 0x1DFAA0u) {
        ctx->pc = 0x1DFAA4u;
        goto label_1dfaa4;
    }
    ctx->pc = 0x1DFA9Cu;
    {
        const bool branch_taken_0x1dfa9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dfa9c) {
            ctx->pc = 0x1DFAD8u;
            goto label_1dfad8;
        }
    }
    ctx->pc = 0x1DFAA4u;
label_1dfaa4:
    // 0x1dfaa4: 0x86051204  lh          $a1, 0x1204($s0)
    ctx->pc = 0x1dfaa4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4612)));
label_1dfaa8:
    // 0x1dfaa8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dfaa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dfaac:
    // 0x1dfaac: 0x14a3000a  bne         $a1, $v1, . + 4 + (0xA << 2)
label_1dfab0:
    if (ctx->pc == 0x1DFAB0u) {
        ctx->pc = 0x1DFAB4u;
        goto label_1dfab4;
    }
    ctx->pc = 0x1DFAACu;
    {
        const bool branch_taken_0x1dfaac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1dfaac) {
            ctx->pc = 0x1DFAD8u;
            goto label_1dfad8;
        }
    }
    ctx->pc = 0x1DFAB4u;
label_1dfab4:
    // 0x1dfab4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1dfab4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1dfab8:
    // 0x1dfab8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1dfab8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1dfabc:
    // 0x1dfabc: 0x320f809  jalr        $t9
label_1dfac0:
    if (ctx->pc == 0x1DFAC0u) {
        ctx->pc = 0x1DFAC0u;
            // 0x1dfac0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x1DFAC4u;
        goto label_1dfac4;
    }
    ctx->pc = 0x1DFABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DFAC4u);
        ctx->pc = 0x1DFAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFABCu;
            // 0x1dfac0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DFAC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DFAC4u; }
            if (ctx->pc != 0x1DFAC4u) { return; }
        }
        }
    }
    ctx->pc = 0x1DFAC4u;
label_1dfac4:
    // 0x1dfac4: 0x8e0411fc  lw          $a0, 0x11FC($s0)
    ctx->pc = 0x1dfac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4604)));
label_1dfac8:
    // 0x1dfac8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1dfac8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1dfacc:
    // 0x1dfacc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x1dfaccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_1dfad0:
    // 0x1dfad0: 0x320f809  jalr        $t9
label_1dfad4:
    if (ctx->pc == 0x1DFAD4u) {
        ctx->pc = 0x1DFAD4u;
            // 0x1dfad4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x1DFAD8u;
        goto label_1dfad8;
    }
    ctx->pc = 0x1DFAD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DFAD8u);
        ctx->pc = 0x1DFAD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFAD0u;
            // 0x1dfad4: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DFAD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DFAD8u; }
            if (ctx->pc != 0x1DFAD8u) { return; }
        }
        }
    }
    ctx->pc = 0x1DFAD8u;
label_1dfad8:
    // 0x1dfad8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1dfad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1dfadc:
    // 0x1dfadc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1dfadcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1dfae0:
    // 0x1dfae0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1dfae0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1dfae4:
    // 0x1dfae4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1dfae4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1dfae8:
    // 0x1dfae8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1dfae8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1dfaec:
    // 0x1dfaec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1dfaecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1dfaf0:
    // 0x1dfaf0: 0x3e00008  jr          $ra
label_1dfaf4:
    if (ctx->pc == 0x1DFAF4u) {
        ctx->pc = 0x1DFAF4u;
            // 0x1dfaf4: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x1DFAF8u;
        goto label_fallthrough_0x1dfaf0;
    }
    ctx->pc = 0x1DFAF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFAF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DFAF0u;
            // 0x1dfaf4: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1dfaf0:
    ctx->pc = 0x1DFAF8u;
}
