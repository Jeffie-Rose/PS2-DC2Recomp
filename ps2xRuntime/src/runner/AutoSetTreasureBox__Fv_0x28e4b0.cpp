#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: AutoSetTreasureBox__Fv
// Address: 0x28e4b0 - 0x28eecc
void AutoSetTreasureBox__Fv_0x28e4b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("AutoSetTreasureBox__Fv_0x28e4b0");
#endif

    switch (ctx->pc) {
        case 0x28e4b0u: goto label_28e4b0;
        case 0x28e4b4u: goto label_28e4b4;
        case 0x28e4b8u: goto label_28e4b8;
        case 0x28e4bcu: goto label_28e4bc;
        case 0x28e4c0u: goto label_28e4c0;
        case 0x28e4c4u: goto label_28e4c4;
        case 0x28e4c8u: goto label_28e4c8;
        case 0x28e4ccu: goto label_28e4cc;
        case 0x28e4d0u: goto label_28e4d0;
        case 0x28e4d4u: goto label_28e4d4;
        case 0x28e4d8u: goto label_28e4d8;
        case 0x28e4dcu: goto label_28e4dc;
        case 0x28e4e0u: goto label_28e4e0;
        case 0x28e4e4u: goto label_28e4e4;
        case 0x28e4e8u: goto label_28e4e8;
        case 0x28e4ecu: goto label_28e4ec;
        case 0x28e4f0u: goto label_28e4f0;
        case 0x28e4f4u: goto label_28e4f4;
        case 0x28e4f8u: goto label_28e4f8;
        case 0x28e4fcu: goto label_28e4fc;
        case 0x28e500u: goto label_28e500;
        case 0x28e504u: goto label_28e504;
        case 0x28e508u: goto label_28e508;
        case 0x28e50cu: goto label_28e50c;
        case 0x28e510u: goto label_28e510;
        case 0x28e514u: goto label_28e514;
        case 0x28e518u: goto label_28e518;
        case 0x28e51cu: goto label_28e51c;
        case 0x28e520u: goto label_28e520;
        case 0x28e524u: goto label_28e524;
        case 0x28e528u: goto label_28e528;
        case 0x28e52cu: goto label_28e52c;
        case 0x28e530u: goto label_28e530;
        case 0x28e534u: goto label_28e534;
        case 0x28e538u: goto label_28e538;
        case 0x28e53cu: goto label_28e53c;
        case 0x28e540u: goto label_28e540;
        case 0x28e544u: goto label_28e544;
        case 0x28e548u: goto label_28e548;
        case 0x28e54cu: goto label_28e54c;
        case 0x28e550u: goto label_28e550;
        case 0x28e554u: goto label_28e554;
        case 0x28e558u: goto label_28e558;
        case 0x28e55cu: goto label_28e55c;
        case 0x28e560u: goto label_28e560;
        case 0x28e564u: goto label_28e564;
        case 0x28e568u: goto label_28e568;
        case 0x28e56cu: goto label_28e56c;
        case 0x28e570u: goto label_28e570;
        case 0x28e574u: goto label_28e574;
        case 0x28e578u: goto label_28e578;
        case 0x28e57cu: goto label_28e57c;
        case 0x28e580u: goto label_28e580;
        case 0x28e584u: goto label_28e584;
        case 0x28e588u: goto label_28e588;
        case 0x28e58cu: goto label_28e58c;
        case 0x28e590u: goto label_28e590;
        case 0x28e594u: goto label_28e594;
        case 0x28e598u: goto label_28e598;
        case 0x28e59cu: goto label_28e59c;
        case 0x28e5a0u: goto label_28e5a0;
        case 0x28e5a4u: goto label_28e5a4;
        case 0x28e5a8u: goto label_28e5a8;
        case 0x28e5acu: goto label_28e5ac;
        case 0x28e5b0u: goto label_28e5b0;
        case 0x28e5b4u: goto label_28e5b4;
        case 0x28e5b8u: goto label_28e5b8;
        case 0x28e5bcu: goto label_28e5bc;
        case 0x28e5c0u: goto label_28e5c0;
        case 0x28e5c4u: goto label_28e5c4;
        case 0x28e5c8u: goto label_28e5c8;
        case 0x28e5ccu: goto label_28e5cc;
        case 0x28e5d0u: goto label_28e5d0;
        case 0x28e5d4u: goto label_28e5d4;
        case 0x28e5d8u: goto label_28e5d8;
        case 0x28e5dcu: goto label_28e5dc;
        case 0x28e5e0u: goto label_28e5e0;
        case 0x28e5e4u: goto label_28e5e4;
        case 0x28e5e8u: goto label_28e5e8;
        case 0x28e5ecu: goto label_28e5ec;
        case 0x28e5f0u: goto label_28e5f0;
        case 0x28e5f4u: goto label_28e5f4;
        case 0x28e5f8u: goto label_28e5f8;
        case 0x28e5fcu: goto label_28e5fc;
        case 0x28e600u: goto label_28e600;
        case 0x28e604u: goto label_28e604;
        case 0x28e608u: goto label_28e608;
        case 0x28e60cu: goto label_28e60c;
        case 0x28e610u: goto label_28e610;
        case 0x28e614u: goto label_28e614;
        case 0x28e618u: goto label_28e618;
        case 0x28e61cu: goto label_28e61c;
        case 0x28e620u: goto label_28e620;
        case 0x28e624u: goto label_28e624;
        case 0x28e628u: goto label_28e628;
        case 0x28e62cu: goto label_28e62c;
        case 0x28e630u: goto label_28e630;
        case 0x28e634u: goto label_28e634;
        case 0x28e638u: goto label_28e638;
        case 0x28e63cu: goto label_28e63c;
        case 0x28e640u: goto label_28e640;
        case 0x28e644u: goto label_28e644;
        case 0x28e648u: goto label_28e648;
        case 0x28e64cu: goto label_28e64c;
        case 0x28e650u: goto label_28e650;
        case 0x28e654u: goto label_28e654;
        case 0x28e658u: goto label_28e658;
        case 0x28e65cu: goto label_28e65c;
        case 0x28e660u: goto label_28e660;
        case 0x28e664u: goto label_28e664;
        case 0x28e668u: goto label_28e668;
        case 0x28e66cu: goto label_28e66c;
        case 0x28e670u: goto label_28e670;
        case 0x28e674u: goto label_28e674;
        case 0x28e678u: goto label_28e678;
        case 0x28e67cu: goto label_28e67c;
        case 0x28e680u: goto label_28e680;
        case 0x28e684u: goto label_28e684;
        case 0x28e688u: goto label_28e688;
        case 0x28e68cu: goto label_28e68c;
        case 0x28e690u: goto label_28e690;
        case 0x28e694u: goto label_28e694;
        case 0x28e698u: goto label_28e698;
        case 0x28e69cu: goto label_28e69c;
        case 0x28e6a0u: goto label_28e6a0;
        case 0x28e6a4u: goto label_28e6a4;
        case 0x28e6a8u: goto label_28e6a8;
        case 0x28e6acu: goto label_28e6ac;
        case 0x28e6b0u: goto label_28e6b0;
        case 0x28e6b4u: goto label_28e6b4;
        case 0x28e6b8u: goto label_28e6b8;
        case 0x28e6bcu: goto label_28e6bc;
        case 0x28e6c0u: goto label_28e6c0;
        case 0x28e6c4u: goto label_28e6c4;
        case 0x28e6c8u: goto label_28e6c8;
        case 0x28e6ccu: goto label_28e6cc;
        case 0x28e6d0u: goto label_28e6d0;
        case 0x28e6d4u: goto label_28e6d4;
        case 0x28e6d8u: goto label_28e6d8;
        case 0x28e6dcu: goto label_28e6dc;
        case 0x28e6e0u: goto label_28e6e0;
        case 0x28e6e4u: goto label_28e6e4;
        case 0x28e6e8u: goto label_28e6e8;
        case 0x28e6ecu: goto label_28e6ec;
        case 0x28e6f0u: goto label_28e6f0;
        case 0x28e6f4u: goto label_28e6f4;
        case 0x28e6f8u: goto label_28e6f8;
        case 0x28e6fcu: goto label_28e6fc;
        case 0x28e700u: goto label_28e700;
        case 0x28e704u: goto label_28e704;
        case 0x28e708u: goto label_28e708;
        case 0x28e70cu: goto label_28e70c;
        case 0x28e710u: goto label_28e710;
        case 0x28e714u: goto label_28e714;
        case 0x28e718u: goto label_28e718;
        case 0x28e71cu: goto label_28e71c;
        case 0x28e720u: goto label_28e720;
        case 0x28e724u: goto label_28e724;
        case 0x28e728u: goto label_28e728;
        case 0x28e72cu: goto label_28e72c;
        case 0x28e730u: goto label_28e730;
        case 0x28e734u: goto label_28e734;
        case 0x28e738u: goto label_28e738;
        case 0x28e73cu: goto label_28e73c;
        case 0x28e740u: goto label_28e740;
        case 0x28e744u: goto label_28e744;
        case 0x28e748u: goto label_28e748;
        case 0x28e74cu: goto label_28e74c;
        case 0x28e750u: goto label_28e750;
        case 0x28e754u: goto label_28e754;
        case 0x28e758u: goto label_28e758;
        case 0x28e75cu: goto label_28e75c;
        case 0x28e760u: goto label_28e760;
        case 0x28e764u: goto label_28e764;
        case 0x28e768u: goto label_28e768;
        case 0x28e76cu: goto label_28e76c;
        case 0x28e770u: goto label_28e770;
        case 0x28e774u: goto label_28e774;
        case 0x28e778u: goto label_28e778;
        case 0x28e77cu: goto label_28e77c;
        case 0x28e780u: goto label_28e780;
        case 0x28e784u: goto label_28e784;
        case 0x28e788u: goto label_28e788;
        case 0x28e78cu: goto label_28e78c;
        case 0x28e790u: goto label_28e790;
        case 0x28e794u: goto label_28e794;
        case 0x28e798u: goto label_28e798;
        case 0x28e79cu: goto label_28e79c;
        case 0x28e7a0u: goto label_28e7a0;
        case 0x28e7a4u: goto label_28e7a4;
        case 0x28e7a8u: goto label_28e7a8;
        case 0x28e7acu: goto label_28e7ac;
        case 0x28e7b0u: goto label_28e7b0;
        case 0x28e7b4u: goto label_28e7b4;
        case 0x28e7b8u: goto label_28e7b8;
        case 0x28e7bcu: goto label_28e7bc;
        case 0x28e7c0u: goto label_28e7c0;
        case 0x28e7c4u: goto label_28e7c4;
        case 0x28e7c8u: goto label_28e7c8;
        case 0x28e7ccu: goto label_28e7cc;
        case 0x28e7d0u: goto label_28e7d0;
        case 0x28e7d4u: goto label_28e7d4;
        case 0x28e7d8u: goto label_28e7d8;
        case 0x28e7dcu: goto label_28e7dc;
        case 0x28e7e0u: goto label_28e7e0;
        case 0x28e7e4u: goto label_28e7e4;
        case 0x28e7e8u: goto label_28e7e8;
        case 0x28e7ecu: goto label_28e7ec;
        case 0x28e7f0u: goto label_28e7f0;
        case 0x28e7f4u: goto label_28e7f4;
        case 0x28e7f8u: goto label_28e7f8;
        case 0x28e7fcu: goto label_28e7fc;
        case 0x28e800u: goto label_28e800;
        case 0x28e804u: goto label_28e804;
        case 0x28e808u: goto label_28e808;
        case 0x28e80cu: goto label_28e80c;
        case 0x28e810u: goto label_28e810;
        case 0x28e814u: goto label_28e814;
        case 0x28e818u: goto label_28e818;
        case 0x28e81cu: goto label_28e81c;
        case 0x28e820u: goto label_28e820;
        case 0x28e824u: goto label_28e824;
        case 0x28e828u: goto label_28e828;
        case 0x28e82cu: goto label_28e82c;
        case 0x28e830u: goto label_28e830;
        case 0x28e834u: goto label_28e834;
        case 0x28e838u: goto label_28e838;
        case 0x28e83cu: goto label_28e83c;
        case 0x28e840u: goto label_28e840;
        case 0x28e844u: goto label_28e844;
        case 0x28e848u: goto label_28e848;
        case 0x28e84cu: goto label_28e84c;
        case 0x28e850u: goto label_28e850;
        case 0x28e854u: goto label_28e854;
        case 0x28e858u: goto label_28e858;
        case 0x28e85cu: goto label_28e85c;
        case 0x28e860u: goto label_28e860;
        case 0x28e864u: goto label_28e864;
        case 0x28e868u: goto label_28e868;
        case 0x28e86cu: goto label_28e86c;
        case 0x28e870u: goto label_28e870;
        case 0x28e874u: goto label_28e874;
        case 0x28e878u: goto label_28e878;
        case 0x28e87cu: goto label_28e87c;
        case 0x28e880u: goto label_28e880;
        case 0x28e884u: goto label_28e884;
        case 0x28e888u: goto label_28e888;
        case 0x28e88cu: goto label_28e88c;
        case 0x28e890u: goto label_28e890;
        case 0x28e894u: goto label_28e894;
        case 0x28e898u: goto label_28e898;
        case 0x28e89cu: goto label_28e89c;
        case 0x28e8a0u: goto label_28e8a0;
        case 0x28e8a4u: goto label_28e8a4;
        case 0x28e8a8u: goto label_28e8a8;
        case 0x28e8acu: goto label_28e8ac;
        case 0x28e8b0u: goto label_28e8b0;
        case 0x28e8b4u: goto label_28e8b4;
        case 0x28e8b8u: goto label_28e8b8;
        case 0x28e8bcu: goto label_28e8bc;
        case 0x28e8c0u: goto label_28e8c0;
        case 0x28e8c4u: goto label_28e8c4;
        case 0x28e8c8u: goto label_28e8c8;
        case 0x28e8ccu: goto label_28e8cc;
        case 0x28e8d0u: goto label_28e8d0;
        case 0x28e8d4u: goto label_28e8d4;
        case 0x28e8d8u: goto label_28e8d8;
        case 0x28e8dcu: goto label_28e8dc;
        case 0x28e8e0u: goto label_28e8e0;
        case 0x28e8e4u: goto label_28e8e4;
        case 0x28e8e8u: goto label_28e8e8;
        case 0x28e8ecu: goto label_28e8ec;
        case 0x28e8f0u: goto label_28e8f0;
        case 0x28e8f4u: goto label_28e8f4;
        case 0x28e8f8u: goto label_28e8f8;
        case 0x28e8fcu: goto label_28e8fc;
        case 0x28e900u: goto label_28e900;
        case 0x28e904u: goto label_28e904;
        case 0x28e908u: goto label_28e908;
        case 0x28e90cu: goto label_28e90c;
        case 0x28e910u: goto label_28e910;
        case 0x28e914u: goto label_28e914;
        case 0x28e918u: goto label_28e918;
        case 0x28e91cu: goto label_28e91c;
        case 0x28e920u: goto label_28e920;
        case 0x28e924u: goto label_28e924;
        case 0x28e928u: goto label_28e928;
        case 0x28e92cu: goto label_28e92c;
        case 0x28e930u: goto label_28e930;
        case 0x28e934u: goto label_28e934;
        case 0x28e938u: goto label_28e938;
        case 0x28e93cu: goto label_28e93c;
        case 0x28e940u: goto label_28e940;
        case 0x28e944u: goto label_28e944;
        case 0x28e948u: goto label_28e948;
        case 0x28e94cu: goto label_28e94c;
        case 0x28e950u: goto label_28e950;
        case 0x28e954u: goto label_28e954;
        case 0x28e958u: goto label_28e958;
        case 0x28e95cu: goto label_28e95c;
        case 0x28e960u: goto label_28e960;
        case 0x28e964u: goto label_28e964;
        case 0x28e968u: goto label_28e968;
        case 0x28e96cu: goto label_28e96c;
        case 0x28e970u: goto label_28e970;
        case 0x28e974u: goto label_28e974;
        case 0x28e978u: goto label_28e978;
        case 0x28e97cu: goto label_28e97c;
        case 0x28e980u: goto label_28e980;
        case 0x28e984u: goto label_28e984;
        case 0x28e988u: goto label_28e988;
        case 0x28e98cu: goto label_28e98c;
        case 0x28e990u: goto label_28e990;
        case 0x28e994u: goto label_28e994;
        case 0x28e998u: goto label_28e998;
        case 0x28e99cu: goto label_28e99c;
        case 0x28e9a0u: goto label_28e9a0;
        case 0x28e9a4u: goto label_28e9a4;
        case 0x28e9a8u: goto label_28e9a8;
        case 0x28e9acu: goto label_28e9ac;
        case 0x28e9b0u: goto label_28e9b0;
        case 0x28e9b4u: goto label_28e9b4;
        case 0x28e9b8u: goto label_28e9b8;
        case 0x28e9bcu: goto label_28e9bc;
        case 0x28e9c0u: goto label_28e9c0;
        case 0x28e9c4u: goto label_28e9c4;
        case 0x28e9c8u: goto label_28e9c8;
        case 0x28e9ccu: goto label_28e9cc;
        case 0x28e9d0u: goto label_28e9d0;
        case 0x28e9d4u: goto label_28e9d4;
        case 0x28e9d8u: goto label_28e9d8;
        case 0x28e9dcu: goto label_28e9dc;
        case 0x28e9e0u: goto label_28e9e0;
        case 0x28e9e4u: goto label_28e9e4;
        case 0x28e9e8u: goto label_28e9e8;
        case 0x28e9ecu: goto label_28e9ec;
        case 0x28e9f0u: goto label_28e9f0;
        case 0x28e9f4u: goto label_28e9f4;
        case 0x28e9f8u: goto label_28e9f8;
        case 0x28e9fcu: goto label_28e9fc;
        case 0x28ea00u: goto label_28ea00;
        case 0x28ea04u: goto label_28ea04;
        case 0x28ea08u: goto label_28ea08;
        case 0x28ea0cu: goto label_28ea0c;
        case 0x28ea10u: goto label_28ea10;
        case 0x28ea14u: goto label_28ea14;
        case 0x28ea18u: goto label_28ea18;
        case 0x28ea1cu: goto label_28ea1c;
        case 0x28ea20u: goto label_28ea20;
        case 0x28ea24u: goto label_28ea24;
        case 0x28ea28u: goto label_28ea28;
        case 0x28ea2cu: goto label_28ea2c;
        case 0x28ea30u: goto label_28ea30;
        case 0x28ea34u: goto label_28ea34;
        case 0x28ea38u: goto label_28ea38;
        case 0x28ea3cu: goto label_28ea3c;
        case 0x28ea40u: goto label_28ea40;
        case 0x28ea44u: goto label_28ea44;
        case 0x28ea48u: goto label_28ea48;
        case 0x28ea4cu: goto label_28ea4c;
        case 0x28ea50u: goto label_28ea50;
        case 0x28ea54u: goto label_28ea54;
        case 0x28ea58u: goto label_28ea58;
        case 0x28ea5cu: goto label_28ea5c;
        case 0x28ea60u: goto label_28ea60;
        case 0x28ea64u: goto label_28ea64;
        case 0x28ea68u: goto label_28ea68;
        case 0x28ea6cu: goto label_28ea6c;
        case 0x28ea70u: goto label_28ea70;
        case 0x28ea74u: goto label_28ea74;
        case 0x28ea78u: goto label_28ea78;
        case 0x28ea7cu: goto label_28ea7c;
        case 0x28ea80u: goto label_28ea80;
        case 0x28ea84u: goto label_28ea84;
        case 0x28ea88u: goto label_28ea88;
        case 0x28ea8cu: goto label_28ea8c;
        case 0x28ea90u: goto label_28ea90;
        case 0x28ea94u: goto label_28ea94;
        case 0x28ea98u: goto label_28ea98;
        case 0x28ea9cu: goto label_28ea9c;
        case 0x28eaa0u: goto label_28eaa0;
        case 0x28eaa4u: goto label_28eaa4;
        case 0x28eaa8u: goto label_28eaa8;
        case 0x28eaacu: goto label_28eaac;
        case 0x28eab0u: goto label_28eab0;
        case 0x28eab4u: goto label_28eab4;
        case 0x28eab8u: goto label_28eab8;
        case 0x28eabcu: goto label_28eabc;
        case 0x28eac0u: goto label_28eac0;
        case 0x28eac4u: goto label_28eac4;
        case 0x28eac8u: goto label_28eac8;
        case 0x28eaccu: goto label_28eacc;
        case 0x28ead0u: goto label_28ead0;
        case 0x28ead4u: goto label_28ead4;
        case 0x28ead8u: goto label_28ead8;
        case 0x28eadcu: goto label_28eadc;
        case 0x28eae0u: goto label_28eae0;
        case 0x28eae4u: goto label_28eae4;
        case 0x28eae8u: goto label_28eae8;
        case 0x28eaecu: goto label_28eaec;
        case 0x28eaf0u: goto label_28eaf0;
        case 0x28eaf4u: goto label_28eaf4;
        case 0x28eaf8u: goto label_28eaf8;
        case 0x28eafcu: goto label_28eafc;
        case 0x28eb00u: goto label_28eb00;
        case 0x28eb04u: goto label_28eb04;
        case 0x28eb08u: goto label_28eb08;
        case 0x28eb0cu: goto label_28eb0c;
        case 0x28eb10u: goto label_28eb10;
        case 0x28eb14u: goto label_28eb14;
        case 0x28eb18u: goto label_28eb18;
        case 0x28eb1cu: goto label_28eb1c;
        case 0x28eb20u: goto label_28eb20;
        case 0x28eb24u: goto label_28eb24;
        case 0x28eb28u: goto label_28eb28;
        case 0x28eb2cu: goto label_28eb2c;
        case 0x28eb30u: goto label_28eb30;
        case 0x28eb34u: goto label_28eb34;
        case 0x28eb38u: goto label_28eb38;
        case 0x28eb3cu: goto label_28eb3c;
        case 0x28eb40u: goto label_28eb40;
        case 0x28eb44u: goto label_28eb44;
        case 0x28eb48u: goto label_28eb48;
        case 0x28eb4cu: goto label_28eb4c;
        case 0x28eb50u: goto label_28eb50;
        case 0x28eb54u: goto label_28eb54;
        case 0x28eb58u: goto label_28eb58;
        case 0x28eb5cu: goto label_28eb5c;
        case 0x28eb60u: goto label_28eb60;
        case 0x28eb64u: goto label_28eb64;
        case 0x28eb68u: goto label_28eb68;
        case 0x28eb6cu: goto label_28eb6c;
        case 0x28eb70u: goto label_28eb70;
        case 0x28eb74u: goto label_28eb74;
        case 0x28eb78u: goto label_28eb78;
        case 0x28eb7cu: goto label_28eb7c;
        case 0x28eb80u: goto label_28eb80;
        case 0x28eb84u: goto label_28eb84;
        case 0x28eb88u: goto label_28eb88;
        case 0x28eb8cu: goto label_28eb8c;
        case 0x28eb90u: goto label_28eb90;
        case 0x28eb94u: goto label_28eb94;
        case 0x28eb98u: goto label_28eb98;
        case 0x28eb9cu: goto label_28eb9c;
        case 0x28eba0u: goto label_28eba0;
        case 0x28eba4u: goto label_28eba4;
        case 0x28eba8u: goto label_28eba8;
        case 0x28ebacu: goto label_28ebac;
        case 0x28ebb0u: goto label_28ebb0;
        case 0x28ebb4u: goto label_28ebb4;
        case 0x28ebb8u: goto label_28ebb8;
        case 0x28ebbcu: goto label_28ebbc;
        case 0x28ebc0u: goto label_28ebc0;
        case 0x28ebc4u: goto label_28ebc4;
        case 0x28ebc8u: goto label_28ebc8;
        case 0x28ebccu: goto label_28ebcc;
        case 0x28ebd0u: goto label_28ebd0;
        case 0x28ebd4u: goto label_28ebd4;
        case 0x28ebd8u: goto label_28ebd8;
        case 0x28ebdcu: goto label_28ebdc;
        case 0x28ebe0u: goto label_28ebe0;
        case 0x28ebe4u: goto label_28ebe4;
        case 0x28ebe8u: goto label_28ebe8;
        case 0x28ebecu: goto label_28ebec;
        case 0x28ebf0u: goto label_28ebf0;
        case 0x28ebf4u: goto label_28ebf4;
        case 0x28ebf8u: goto label_28ebf8;
        case 0x28ebfcu: goto label_28ebfc;
        case 0x28ec00u: goto label_28ec00;
        case 0x28ec04u: goto label_28ec04;
        case 0x28ec08u: goto label_28ec08;
        case 0x28ec0cu: goto label_28ec0c;
        case 0x28ec10u: goto label_28ec10;
        case 0x28ec14u: goto label_28ec14;
        case 0x28ec18u: goto label_28ec18;
        case 0x28ec1cu: goto label_28ec1c;
        case 0x28ec20u: goto label_28ec20;
        case 0x28ec24u: goto label_28ec24;
        case 0x28ec28u: goto label_28ec28;
        case 0x28ec2cu: goto label_28ec2c;
        case 0x28ec30u: goto label_28ec30;
        case 0x28ec34u: goto label_28ec34;
        case 0x28ec38u: goto label_28ec38;
        case 0x28ec3cu: goto label_28ec3c;
        case 0x28ec40u: goto label_28ec40;
        case 0x28ec44u: goto label_28ec44;
        case 0x28ec48u: goto label_28ec48;
        case 0x28ec4cu: goto label_28ec4c;
        case 0x28ec50u: goto label_28ec50;
        case 0x28ec54u: goto label_28ec54;
        case 0x28ec58u: goto label_28ec58;
        case 0x28ec5cu: goto label_28ec5c;
        case 0x28ec60u: goto label_28ec60;
        case 0x28ec64u: goto label_28ec64;
        case 0x28ec68u: goto label_28ec68;
        case 0x28ec6cu: goto label_28ec6c;
        case 0x28ec70u: goto label_28ec70;
        case 0x28ec74u: goto label_28ec74;
        case 0x28ec78u: goto label_28ec78;
        case 0x28ec7cu: goto label_28ec7c;
        case 0x28ec80u: goto label_28ec80;
        case 0x28ec84u: goto label_28ec84;
        case 0x28ec88u: goto label_28ec88;
        case 0x28ec8cu: goto label_28ec8c;
        case 0x28ec90u: goto label_28ec90;
        case 0x28ec94u: goto label_28ec94;
        case 0x28ec98u: goto label_28ec98;
        case 0x28ec9cu: goto label_28ec9c;
        case 0x28eca0u: goto label_28eca0;
        case 0x28eca4u: goto label_28eca4;
        case 0x28eca8u: goto label_28eca8;
        case 0x28ecacu: goto label_28ecac;
        case 0x28ecb0u: goto label_28ecb0;
        case 0x28ecb4u: goto label_28ecb4;
        case 0x28ecb8u: goto label_28ecb8;
        case 0x28ecbcu: goto label_28ecbc;
        case 0x28ecc0u: goto label_28ecc0;
        case 0x28ecc4u: goto label_28ecc4;
        case 0x28ecc8u: goto label_28ecc8;
        case 0x28ecccu: goto label_28eccc;
        case 0x28ecd0u: goto label_28ecd0;
        case 0x28ecd4u: goto label_28ecd4;
        case 0x28ecd8u: goto label_28ecd8;
        case 0x28ecdcu: goto label_28ecdc;
        case 0x28ece0u: goto label_28ece0;
        case 0x28ece4u: goto label_28ece4;
        case 0x28ece8u: goto label_28ece8;
        case 0x28ececu: goto label_28ecec;
        case 0x28ecf0u: goto label_28ecf0;
        case 0x28ecf4u: goto label_28ecf4;
        case 0x28ecf8u: goto label_28ecf8;
        case 0x28ecfcu: goto label_28ecfc;
        case 0x28ed00u: goto label_28ed00;
        case 0x28ed04u: goto label_28ed04;
        case 0x28ed08u: goto label_28ed08;
        case 0x28ed0cu: goto label_28ed0c;
        case 0x28ed10u: goto label_28ed10;
        case 0x28ed14u: goto label_28ed14;
        case 0x28ed18u: goto label_28ed18;
        case 0x28ed1cu: goto label_28ed1c;
        case 0x28ed20u: goto label_28ed20;
        case 0x28ed24u: goto label_28ed24;
        case 0x28ed28u: goto label_28ed28;
        case 0x28ed2cu: goto label_28ed2c;
        case 0x28ed30u: goto label_28ed30;
        case 0x28ed34u: goto label_28ed34;
        case 0x28ed38u: goto label_28ed38;
        case 0x28ed3cu: goto label_28ed3c;
        case 0x28ed40u: goto label_28ed40;
        case 0x28ed44u: goto label_28ed44;
        case 0x28ed48u: goto label_28ed48;
        case 0x28ed4cu: goto label_28ed4c;
        case 0x28ed50u: goto label_28ed50;
        case 0x28ed54u: goto label_28ed54;
        case 0x28ed58u: goto label_28ed58;
        case 0x28ed5cu: goto label_28ed5c;
        case 0x28ed60u: goto label_28ed60;
        case 0x28ed64u: goto label_28ed64;
        case 0x28ed68u: goto label_28ed68;
        case 0x28ed6cu: goto label_28ed6c;
        case 0x28ed70u: goto label_28ed70;
        case 0x28ed74u: goto label_28ed74;
        case 0x28ed78u: goto label_28ed78;
        case 0x28ed7cu: goto label_28ed7c;
        case 0x28ed80u: goto label_28ed80;
        case 0x28ed84u: goto label_28ed84;
        case 0x28ed88u: goto label_28ed88;
        case 0x28ed8cu: goto label_28ed8c;
        case 0x28ed90u: goto label_28ed90;
        case 0x28ed94u: goto label_28ed94;
        case 0x28ed98u: goto label_28ed98;
        case 0x28ed9cu: goto label_28ed9c;
        case 0x28eda0u: goto label_28eda0;
        case 0x28eda4u: goto label_28eda4;
        case 0x28eda8u: goto label_28eda8;
        case 0x28edacu: goto label_28edac;
        case 0x28edb0u: goto label_28edb0;
        case 0x28edb4u: goto label_28edb4;
        case 0x28edb8u: goto label_28edb8;
        case 0x28edbcu: goto label_28edbc;
        case 0x28edc0u: goto label_28edc0;
        case 0x28edc4u: goto label_28edc4;
        case 0x28edc8u: goto label_28edc8;
        case 0x28edccu: goto label_28edcc;
        case 0x28edd0u: goto label_28edd0;
        case 0x28edd4u: goto label_28edd4;
        case 0x28edd8u: goto label_28edd8;
        case 0x28eddcu: goto label_28eddc;
        case 0x28ede0u: goto label_28ede0;
        case 0x28ede4u: goto label_28ede4;
        case 0x28ede8u: goto label_28ede8;
        case 0x28edecu: goto label_28edec;
        case 0x28edf0u: goto label_28edf0;
        case 0x28edf4u: goto label_28edf4;
        case 0x28edf8u: goto label_28edf8;
        case 0x28edfcu: goto label_28edfc;
        case 0x28ee00u: goto label_28ee00;
        case 0x28ee04u: goto label_28ee04;
        case 0x28ee08u: goto label_28ee08;
        case 0x28ee0cu: goto label_28ee0c;
        case 0x28ee10u: goto label_28ee10;
        case 0x28ee14u: goto label_28ee14;
        case 0x28ee18u: goto label_28ee18;
        case 0x28ee1cu: goto label_28ee1c;
        case 0x28ee20u: goto label_28ee20;
        case 0x28ee24u: goto label_28ee24;
        case 0x28ee28u: goto label_28ee28;
        case 0x28ee2cu: goto label_28ee2c;
        case 0x28ee30u: goto label_28ee30;
        case 0x28ee34u: goto label_28ee34;
        case 0x28ee38u: goto label_28ee38;
        case 0x28ee3cu: goto label_28ee3c;
        case 0x28ee40u: goto label_28ee40;
        case 0x28ee44u: goto label_28ee44;
        case 0x28ee48u: goto label_28ee48;
        case 0x28ee4cu: goto label_28ee4c;
        case 0x28ee50u: goto label_28ee50;
        case 0x28ee54u: goto label_28ee54;
        case 0x28ee58u: goto label_28ee58;
        case 0x28ee5cu: goto label_28ee5c;
        case 0x28ee60u: goto label_28ee60;
        case 0x28ee64u: goto label_28ee64;
        case 0x28ee68u: goto label_28ee68;
        case 0x28ee6cu: goto label_28ee6c;
        case 0x28ee70u: goto label_28ee70;
        case 0x28ee74u: goto label_28ee74;
        case 0x28ee78u: goto label_28ee78;
        case 0x28ee7cu: goto label_28ee7c;
        case 0x28ee80u: goto label_28ee80;
        case 0x28ee84u: goto label_28ee84;
        case 0x28ee88u: goto label_28ee88;
        case 0x28ee8cu: goto label_28ee8c;
        case 0x28ee90u: goto label_28ee90;
        case 0x28ee94u: goto label_28ee94;
        case 0x28ee98u: goto label_28ee98;
        case 0x28ee9cu: goto label_28ee9c;
        case 0x28eea0u: goto label_28eea0;
        case 0x28eea4u: goto label_28eea4;
        case 0x28eea8u: goto label_28eea8;
        case 0x28eeacu: goto label_28eeac;
        case 0x28eeb0u: goto label_28eeb0;
        case 0x28eeb4u: goto label_28eeb4;
        case 0x28eeb8u: goto label_28eeb8;
        case 0x28eebcu: goto label_28eebc;
        case 0x28eec0u: goto label_28eec0;
        case 0x28eec4u: goto label_28eec4;
        case 0x28eec8u: goto label_28eec8;
        default: break;
    }

    ctx->pc = 0x28e4b0u;

label_28e4b0:
    // 0x28e4b0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x28e4b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_28e4b4:
    // 0x28e4b4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x28e4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28e4b8:
    // 0x28e4b8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x28e4b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_28e4bc:
    // 0x28e4bc: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x28e4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_28e4c0:
    // 0x28e4c0: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x28e4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_28e4c4:
    // 0x28e4c4: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x28e4c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_28e4c8:
    // 0x28e4c8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x28e4c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_28e4cc:
    // 0x28e4cc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x28e4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_28e4d0:
    // 0x28e4d0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x28e4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_28e4d4:
    // 0x28e4d4: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x28e4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_28e4d8:
    // 0x28e4d8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x28e4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_28e4dc:
    // 0x28e4dc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x28e4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_28e4e0:
    // 0x28e4e0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x28e4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_28e4e4:
    // 0x28e4e4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x28e4e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_28e4e8:
    // 0x28e4e8: 0x8f838dac  lw          $v1, -0x7254($gp)
    ctx->pc = 0x28e4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_28e4ec:
    // 0x28e4ec: 0x8f878da8  lw          $a3, -0x7258($gp)
    ctx->pc = 0x28e4ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938024)));
label_28e4f0:
    // 0x28e4f0: 0x24622f90  addiu       $v0, $v1, 0x2F90
    ctx->pc = 0x28e4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 12176));
label_28e4f4:
    // 0x28e4f4: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x28e4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_28e4f8:
    // 0x28e4f8: 0x8c77300c  lw          $s7, 0x300C($v1)
    ctx->pc = 0x28e4f8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12300)));
label_28e4fc:
    // 0x28e4fc: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x28e4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_28e500:
    // 0x28e500: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x28e500u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_28e504:
    // 0x28e504: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x28e504u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_28e508:
    // 0x28e508: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28e508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28e50c:
    // 0x28e50c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x28e50cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_28e510:
    // 0x28e510: 0x8c540004  lw          $s4, 0x4($v0)
    ctx->pc = 0x28e510u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_28e514:
    // 0x28e514: 0xc0a3628  jal         func_28D8A0
label_28e518:
    if (ctx->pc == 0x28E518u) {
        ctx->pc = 0x28E518u;
            // 0x28e518: 0x27a50178  addiu       $a1, $sp, 0x178 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
        ctx->pc = 0x28E51Cu;
        goto label_28e51c;
    }
    ctx->pc = 0x28E514u;
    SET_GPR_U32(ctx, 31, 0x28E51Cu);
    ctx->pc = 0x28E518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E514u;
            // 0x28e518: 0x27a50178  addiu       $a1, $sp, 0x178 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D8A0u;
    if (runtime->hasFunction(0x28D8A0u)) {
        auto targetFn = runtime->lookupFunction(0x28D8A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E51Cu; }
        if (ctx->pc != 0x28E51Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDungeonEventPoint__FPfPfi_0x28d8a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E51Cu; }
        if (ctx->pc != 0x28E51Cu) { return; }
    }
    ctx->pc = 0x28E51Cu;
label_28e51c:
    // 0x28e51c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28e51cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_28e520:
    // 0x28e520: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x28e520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_28e524:
    // 0x28e524: 0xc04e640  jal         func_139900
label_28e528:
    if (ctx->pc == 0x28E528u) {
        ctx->pc = 0x28E528u;
            // 0x28e528: 0xafa200dc  sw          $v0, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
        ctx->pc = 0x28E52Cu;
        goto label_28e52c;
    }
    ctx->pc = 0x28E524u;
    SET_GPR_U32(ctx, 31, 0x28E52Cu);
    ctx->pc = 0x28E528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E524u;
            // 0x28e528: 0xafa200dc  sw          $v0, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E52Cu; }
        if (ctx->pc != 0x28E52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E52Cu; }
        if (ctx->pc != 0x28E52Cu) { return; }
    }
    ctx->pc = 0x28E52Cu;
label_28e52c:
    // 0x28e52c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x28e52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_28e530:
    // 0x28e530: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x28e530u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_28e534:
    // 0x28e534: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x28e534u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_28e538:
    // 0x28e538: 0x24a5d7a0  addiu       $a1, $a1, -0x2860
    ctx->pc = 0x28e538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956960));
label_28e53c:
    // 0x28e53c: 0xc04a234  jal         func_1288D0
label_28e540:
    if (ctx->pc == 0x28E540u) {
        ctx->pc = 0x28E540u;
            // 0x28e540: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x28E544u;
        goto label_28e544;
    }
    ctx->pc = 0x28E53Cu;
    SET_GPR_U32(ctx, 31, 0x28E544u);
    ctx->pc = 0x28E540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E53Cu;
            // 0x28e540: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E544u; }
        if (ctx->pc != 0x28E544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E544u; }
        if (ctx->pc != 0x28E544u) { return; }
    }
    ctx->pc = 0x28E544u;
label_28e544:
    // 0x28e544: 0x8f858d74  lw          $a1, -0x728C($gp)
    ctx->pc = 0x28e544u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_28e548:
    // 0x28e548: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x28e548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_28e54c:
    // 0x28e54c: 0xc0524c8  jal         func_149320
label_28e550:
    if (ctx->pc == 0x28E550u) {
        ctx->pc = 0x28E550u;
            // 0x28e550: 0x27a6017c  addiu       $a2, $sp, 0x17C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
        ctx->pc = 0x28E554u;
        goto label_28e554;
    }
    ctx->pc = 0x28E54Cu;
    SET_GPR_U32(ctx, 31, 0x28E554u);
    ctx->pc = 0x28E550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E54Cu;
            // 0x28e550: 0x27a6017c  addiu       $a2, $sp, 0x17C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 380));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E554u; }
        if (ctx->pc != 0x28E554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E554u; }
        if (ctx->pc != 0x28E554u) { return; }
    }
    ctx->pc = 0x28E554u;
label_28e554:
    // 0x28e554: 0x8fa3017c  lw          $v1, 0x17C($sp)
    ctx->pc = 0x28e554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
label_28e558:
    // 0x28e558: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_28e55c:
    if (ctx->pc == 0x28E55Cu) {
        ctx->pc = 0x28E55Cu;
            // 0x28e55c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->pc = 0x28E560u;
        goto label_28e560;
    }
    ctx->pc = 0x28E558u;
    {
        const bool branch_taken_0x28e558 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x28E55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E558u;
            // 0x28e55c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e558) {
            ctx->pc = 0x28E568u;
            goto label_28e568;
        }
    }
    ctx->pc = 0x28E560u;
label_28e560:
    // 0x28e560: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x28e560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_28e564:
    // 0x28e564: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x28e564u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_28e568:
    // 0x28e568: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x28e568u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_28e56c:
    // 0x28e56c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x28e56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_28e570:
    // 0x28e570: 0x8f828d74  lw          $v0, -0x728C($gp)
    ctx->pc = 0x28e570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_28e574:
    // 0x28e574: 0x24064000  addiu       $a2, $zero, 0x4000
    ctx->pc = 0x28e574u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_28e578:
    // 0x28e578: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28e578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28e57c:
    // 0x28e57c: 0xc04e79c  jal         func_139E70
label_28e580:
    if (ctx->pc == 0x28E580u) {
        ctx->pc = 0x28E580u;
            // 0x28e580: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x28E584u;
        goto label_28e584;
    }
    ctx->pc = 0x28E57Cu;
    SET_GPR_U32(ctx, 31, 0x28E584u);
    ctx->pc = 0x28E580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E57Cu;
            // 0x28e580: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E584u; }
        if (ctx->pc != 0x28E584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E584u; }
        if (ctx->pc != 0x28E584u) { return; }
    }
    ctx->pc = 0x28E584u;
label_28e584:
    // 0x28e584: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x28e584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_28e588:
    // 0x28e588: 0xc04e748  jal         func_139D20
label_28e58c:
    if (ctx->pc == 0x28E58Cu) {
        ctx->pc = 0x28E58Cu;
            // 0x28e58c: 0x24051a43  addiu       $a1, $zero, 0x1A43 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6723));
        ctx->pc = 0x28E590u;
        goto label_28e590;
    }
    ctx->pc = 0x28E588u;
    SET_GPR_U32(ctx, 31, 0x28E590u);
    ctx->pc = 0x28E58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E588u;
            // 0x28e58c: 0x24051a43  addiu       $a1, $zero, 0x1A43 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6723));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E590u; }
        if (ctx->pc != 0x28E590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E590u; }
        if (ctx->pc != 0x28E590u) { return; }
    }
    ctx->pc = 0x28E590u;
label_28e590:
    // 0x28e590: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x28e590u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_28e594:
    // 0x28e594: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28e594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e598:
    // 0x28e598: 0xc04e638  jal         func_1398E0
label_28e59c:
    if (ctx->pc == 0x28E59Cu) {
        ctx->pc = 0x28E59Cu;
            // 0x28e59c: 0x3464a40c  ori         $a0, $v1, 0xA40C (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41996);
        ctx->pc = 0x28E5A0u;
        goto label_28e5a0;
    }
    ctx->pc = 0x28E598u;
    SET_GPR_U32(ctx, 31, 0x28E5A0u);
    ctx->pc = 0x28E59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E598u;
            // 0x28e59c: 0x3464a40c  ori         $a0, $v1, 0xA40C (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)41996);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E5A0u; }
        if (ctx->pc != 0x28E5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E5A0u; }
        if (ctx->pc != 0x28E5A0u) { return; }
    }
    ctx->pc = 0x28E5A0u;
label_28e5a0:
    // 0x28e5a0: 0x8f858d74  lw          $a1, -0x728C($gp)
    ctx->pc = 0x28e5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_28e5a4:
    // 0x28e5a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28e5a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e5a8:
    // 0x28e5a8: 0x8fa6017c  lw          $a2, 0x17C($sp)
    ctx->pc = 0x28e5a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 380)));
label_28e5ac:
    // 0x28e5ac: 0xc0a37b8  jal         func_28DEE0
label_28e5b0:
    if (ctx->pc == 0x28E5B0u) {
        ctx->pc = 0x28E5B0u;
            // 0x28e5b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28E5B4u;
        goto label_28e5b4;
    }
    ctx->pc = 0x28E5ACu;
    SET_GPR_U32(ctx, 31, 0x28E5B4u);
    ctx->pc = 0x28E5B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E5ACu;
            // 0x28e5b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28DEE0u;
    if (runtime->hasFunction(0x28DEE0u)) {
        auto targetFn = runtime->lookupFunction(0x28DEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E5B4u; }
        if (ctx->pc != 0x28E5B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreatTresuarBoxInfo__FP22TRESURE_BOX_FLOOR_INFOPci_0x28dee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E5B4u; }
        if (ctx->pc != 0x28E5B4u) { return; }
    }
    ctx->pc = 0x28E5B4u;
label_28e5b4:
    // 0x28e5b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28e5b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28e5b8:
    // 0x28e5b8: 0xc0a37e4  jal         func_28DF90
label_28e5bc:
    if (ctx->pc == 0x28E5BCu) {
        ctx->pc = 0x28E5BCu;
            // 0x28e5bc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28E5C0u;
        goto label_28e5c0;
    }
    ctx->pc = 0x28E5B8u;
    SET_GPR_U32(ctx, 31, 0x28E5C0u);
    ctx->pc = 0x28E5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E5B8u;
            // 0x28e5bc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28DF90u;
    if (runtime->hasFunction(0x28DF90u)) {
        auto targetFn = runtime->lookupFunction(0x28DF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E5C0u; }
        if (ctx->pc != 0x28E5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PickupRandomItemCheckMax__FP22TRESURE_BOX_FLOOR_INFOi_0x28df90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E5C0u; }
        if (ctx->pc != 0x28E5C0u) { return; }
    }
    ctx->pc = 0x28E5C0u;
label_28e5c0:
    // 0x28e5c0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x28e5c0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e5c4:
    // 0x28e5c4: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x28e5c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28e5c8:
    // 0x28e5c8: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x28e5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
label_28e5cc:
    // 0x28e5cc: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x28e5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_28e5d0:
    // 0x28e5d0: 0xc0a3524  jal         func_28D490
label_28e5d4:
    if (ctx->pc == 0x28E5D4u) {
        ctx->pc = 0x28E5D4u;
            // 0x28e5d4: 0x24a50480  addiu       $a1, $a1, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1152));
        ctx->pc = 0x28E5D8u;
        goto label_28e5d8;
    }
    ctx->pc = 0x28E5D0u;
    SET_GPR_U32(ctx, 31, 0x28E5D8u);
    ctx->pc = 0x28E5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E5D0u;
            // 0x28e5d4: 0x24a50480  addiu       $a1, $a1, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D490u;
    if (runtime->hasFunction(0x28D490u)) {
        auto targetFn = runtime->lookupFunction(0x28D490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E5D8u; }
        if (ctx->pc != 0x28E5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapFlatPosition__FPfP11CAutoMapGen_0x28d490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E5D8u; }
        if (ctx->pc != 0x28E5D8u) { return; }
    }
    ctx->pc = 0x28E5D8u;
label_28e5d8:
    // 0x28e5d8: 0x104000d2  beqz        $v0, . + 4 + (0xD2 << 2)
label_28e5dc:
    if (ctx->pc == 0x28E5DCu) {
        ctx->pc = 0x28E5E0u;
        goto label_28e5e0;
    }
    ctx->pc = 0x28E5D8u;
    {
        const bool branch_taken_0x28e5d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e5d8) {
            ctx->pc = 0x28E924u;
            goto label_28e924;
        }
    }
    ctx->pc = 0x28E5E0u;
label_28e5e0:
    // 0x28e5e0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x28e5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_28e5e4:
    // 0x28e5e4: 0xc04c018  jal         func_130060
label_28e5e8:
    if (ctx->pc == 0x28E5E8u) {
        ctx->pc = 0x28E5E8u;
            // 0x28e5e8: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x28E5ECu;
        goto label_28e5ec;
    }
    ctx->pc = 0x28E5E4u;
    SET_GPR_U32(ctx, 31, 0x28E5ECu);
    ctx->pc = 0x28E5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E5E4u;
            // 0x28e5e8: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E5ECu; }
        if (ctx->pc != 0x28E5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E5ECu; }
        if (ctx->pc != 0x28E5ECu) { return; }
    }
    ctx->pc = 0x28E5ECu;
label_28e5ec:
    // 0x28e5ec: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x28e5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
label_28e5f0:
    // 0x28e5f0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28e5f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28e5f4:
    // 0x28e5f4: 0x0  nop
    ctx->pc = 0x28e5f4u;
    // NOP
label_28e5f8:
    // 0x28e5f8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x28e5f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28e5fc:
    // 0x28e5fc: 0x0  nop
    ctx->pc = 0x28e5fcu;
    // NOP
label_28e600:
    // 0x28e600: 0x450100c8  bc1t        . + 4 + (0xC8 << 2)
label_28e604:
    if (ctx->pc == 0x28E604u) {
        ctx->pc = 0x28E608u;
        goto label_28e608;
    }
    ctx->pc = 0x28E600u;
    {
        const bool branch_taken_0x28e600 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28e600) {
            ctx->pc = 0x28E924u;
            goto label_28e924;
        }
    }
    ctx->pc = 0x28E608u;
label_28e608:
    // 0x28e608: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x28e608u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_28e60c:
    // 0x28e60c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x28e60cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_28e610:
    // 0x28e610: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x28e610u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28e614:
    // 0x28e614: 0xc0a319c  jal         func_28C670
label_28e618:
    if (ctx->pc == 0x28E618u) {
        ctx->pc = 0x28E618u;
            // 0x28e618: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x28E61Cu;
        goto label_28e61c;
    }
    ctx->pc = 0x28E614u;
    SET_GPR_U32(ctx, 31, 0x28E61Cu);
    ctx->pc = 0x28E618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E614u;
            // 0x28e618: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C670u;
    if (runtime->hasFunction(0x28C670u)) {
        auto targetFn = runtime->lookupFunction(0x28C670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E61Cu; }
        if (ctx->pc != 0x28E61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckArea__19CTreasureBoxManagerFPff_0x28c670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E61Cu; }
        if (ctx->pc != 0x28E61Cu) { return; }
    }
    ctx->pc = 0x28E61Cu;
label_28e61c:
    // 0x28e61c: 0x104000c1  beqz        $v0, . + 4 + (0xC1 << 2)
label_28e620:
    if (ctx->pc == 0x28E620u) {
        ctx->pc = 0x28E624u;
        goto label_28e624;
    }
    ctx->pc = 0x28E61Cu;
    {
        const bool branch_taken_0x28e61c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e61c) {
            ctx->pc = 0x28E924u;
            goto label_28e924;
        }
    }
    ctx->pc = 0x28E624u;
label_28e624:
    // 0x28e624: 0xc04a0ea  jal         func_1283A8
label_28e628:
    if (ctx->pc == 0x28E628u) {
        ctx->pc = 0x28E62Cu;
        goto label_28e62c;
    }
    ctx->pc = 0x28E624u;
    SET_GPR_U32(ctx, 31, 0x28E62Cu);
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E62Cu; }
        if (ctx->pc != 0x28E62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E62Cu; }
        if (ctx->pc != 0x28E62Cu) { return; }
    }
    ctx->pc = 0x28E62Cu;
label_28e62c:
    // 0x28e62c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28e62cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28e630:
    // 0x28e630: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x28e630u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28e634:
    // 0x28e634: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x28e634u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_28e638:
    // 0x28e638: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x28e638u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e63c:
    // 0x28e63c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x28e63cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_28e640:
    // 0x28e640: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x28e640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_28e644:
    // 0x28e644: 0x34440fdb  ori         $a0, $v0, 0xFDB
    ctx->pc = 0x28e644u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_28e648:
    // 0x28e648: 0x241effff  addiu       $fp, $zero, -0x1
    ctx->pc = 0x28e648u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28e64c:
    // 0x28e64c: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x28e64cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_28e650:
    // 0x28e650: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x28e650u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28e654:
    // 0x28e654: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x28e654u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_28e658:
    // 0x28e658: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28e658u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28e65c:
    // 0x28e65c: 0x0  nop
    ctx->pc = 0x28e65cu;
    // NOP
label_28e660:
    // 0x28e660: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x28e660u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_28e664:
    // 0x28e664: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x28e664u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_28e668:
    // 0x28e668: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28e668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28e66c:
    // 0x28e66c: 0x0  nop
    ctx->pc = 0x28e66cu;
    // NOP
label_28e670:
    // 0x28e670: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x28e670u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_28e674:
    // 0x28e674: 0x0  nop
    ctx->pc = 0x28e674u;
    // NOP
label_28e678:
    // 0x28e678: 0x2ac10002  slti        $at, $s6, 0x2
    ctx->pc = 0x28e678u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
label_28e67c:
    // 0x28e67c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_28e680:
    if (ctx->pc == 0x28E680u) {
        ctx->pc = 0x28E680u;
            // 0x28e680: 0x46020501  sub.s       $f20, $f0, $f2 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->pc = 0x28E684u;
        goto label_28e684;
    }
    ctx->pc = 0x28E67Cu;
    {
        const bool branch_taken_0x28e67c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E67Cu;
            // 0x28e680: 0x46020501  sub.s       $f20, $f0, $f2 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e67c) {
            ctx->pc = 0x28E6A8u;
            goto label_28e6a8;
        }
    }
    ctx->pc = 0x28E684u;
label_28e684:
    // 0x28e684: 0x16c00002  bnez        $s6, . + 4 + (0x2 << 2)
label_28e688:
    if (ctx->pc == 0x28E688u) {
        ctx->pc = 0x28E68Cu;
        goto label_28e68c;
    }
    ctx->pc = 0x28E684u;
    {
        const bool branch_taken_0x28e684 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e684) {
            ctx->pc = 0x28E690u;
            goto label_28e690;
        }
    }
    ctx->pc = 0x28E68Cu;
label_28e68c:
    // 0x28e68c: 0x24150132  addiu       $s5, $zero, 0x132
    ctx->pc = 0x28e68cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 306));
label_28e690:
    // 0x28e690: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28e690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28e694:
    // 0x28e694: 0x16c20002  bne         $s6, $v0, . + 4 + (0x2 << 2)
label_28e698:
    if (ctx->pc == 0x28E698u) {
        ctx->pc = 0x28E69Cu;
        goto label_28e69c;
    }
    ctx->pc = 0x28E694u;
    {
        const bool branch_taken_0x28e694 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x28e694) {
            ctx->pc = 0x28E6A0u;
            goto label_28e6a0;
        }
    }
    ctx->pc = 0x28E69Cu;
label_28e69c:
    // 0x28e69c: 0x24150131  addiu       $s5, $zero, 0x131
    ctx->pc = 0x28e69cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 305));
label_28e6a0:
    // 0x28e6a0: 0x10000051  b           . + 4 + (0x51 << 2)
label_28e6a4:
    if (ctx->pc == 0x28E6A4u) {
        ctx->pc = 0x28E6A4u;
            // 0x28e6a4: 0x24110041  addiu       $s1, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->pc = 0x28E6A8u;
        goto label_28e6a8;
    }
    ctx->pc = 0x28E6A0u;
    {
        const bool branch_taken_0x28e6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E6A0u;
            // 0x28e6a4: 0x24110041  addiu       $s1, $zero, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e6a0) {
            ctx->pc = 0x28E7E8u;
            goto label_28e7e8;
        }
    }
    ctx->pc = 0x28E6A8u;
label_28e6a8:
    // 0x28e6a8: 0xc0724a4  jal         func_1C9290
label_28e6ac:
    if (ctx->pc == 0x28E6ACu) {
        ctx->pc = 0x28E6ACu;
            // 0x28e6ac: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x28E6B0u;
        goto label_28e6b0;
    }
    ctx->pc = 0x28E6A8u;
    SET_GPR_U32(ctx, 31, 0x28E6B0u);
    ctx->pc = 0x28E6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E6A8u;
            // 0x28e6ac: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E6B0u; }
        if (ctx->pc != 0x28E6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E6B0u; }
        if (ctx->pc != 0x28E6B0u) { return; }
    }
    ctx->pc = 0x28E6B0u;
label_28e6b0:
    // 0x28e6b0: 0x2841005d  slti        $at, $v0, 0x5D
    ctx->pc = 0x28e6b0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)93) ? 1 : 0);
label_28e6b4:
    // 0x28e6b4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_28e6b8:
    if (ctx->pc == 0x28E6B8u) {
        ctx->pc = 0x28E6B8u;
            // 0x28e6b8: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28E6BCu;
        goto label_28e6bc;
    }
    ctx->pc = 0x28E6B4u;
    {
        const bool branch_taken_0x28e6b4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E6B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E6B4u;
            // 0x28e6b8: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e6b4) {
            ctx->pc = 0x28E6C0u;
            goto label_28e6c0;
        }
    }
    ctx->pc = 0x28E6BCu;
label_28e6bc:
    // 0x28e6bc: 0x24110002  addiu       $s1, $zero, 0x2
    ctx->pc = 0x28e6bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28e6c0:
    // 0x28e6c0: 0x28410061  slti        $at, $v0, 0x61
    ctx->pc = 0x28e6c0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)97) ? 1 : 0);
label_28e6c4:
    // 0x28e6c4: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_28e6c8:
    if (ctx->pc == 0x28E6C8u) {
        ctx->pc = 0x28E6CCu;
        goto label_28e6cc;
    }
    ctx->pc = 0x28E6C4u;
    {
        const bool branch_taken_0x28e6c4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e6c4) {
            ctx->pc = 0x28E6D0u;
            goto label_28e6d0;
        }
    }
    ctx->pc = 0x28E6CCu;
label_28e6cc:
    // 0x28e6cc: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x28e6ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_28e6d0:
    // 0x28e6d0: 0xc0724a4  jal         func_1C9290
label_28e6d4:
    if (ctx->pc == 0x28E6D4u) {
        ctx->pc = 0x28E6D4u;
            // 0x28e6d4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x28E6D8u;
        goto label_28e6d8;
    }
    ctx->pc = 0x28E6D0u;
    SET_GPR_U32(ctx, 31, 0x28E6D8u);
    ctx->pc = 0x28E6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E6D0u;
            // 0x28e6d4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E6D8u; }
        if (ctx->pc != 0x28E6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E6D8u; }
        if (ctx->pc != 0x28E6D8u) { return; }
    }
    ctx->pc = 0x28E6D8u;
label_28e6d8:
    // 0x28e6d8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x28e6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28e6dc:
    // 0x28e6dc: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
label_28e6e0:
    if (ctx->pc == 0x28E6E0u) {
        ctx->pc = 0x28E6E4u;
        goto label_28e6e4;
    }
    ctx->pc = 0x28E6DCu;
    {
        const bool branch_taken_0x28e6dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x28e6dc) {
            ctx->pc = 0x28E700u;
            goto label_28e700;
        }
    }
    ctx->pc = 0x28E6E4u;
label_28e6e4:
    // 0x28e6e4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28e6e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28e6e8:
    // 0x28e6e8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_28e6ec:
    if (ctx->pc == 0x28E6ECu) {
        ctx->pc = 0x28E6F0u;
        goto label_28e6f0;
    }
    ctx->pc = 0x28E6E8u;
    {
        const bool branch_taken_0x28e6e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x28e6e8) {
            ctx->pc = 0x28E6F8u;
            goto label_28e6f8;
        }
    }
    ctx->pc = 0x28E6F0u;
label_28e6f0:
    // 0x28e6f0: 0x10000004  b           . + 4 + (0x4 << 2)
label_28e6f4:
    if (ctx->pc == 0x28E6F4u) {
        ctx->pc = 0x28E6F4u;
            // 0x28e6f4: 0x36310008  ori         $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8);
        ctx->pc = 0x28E6F8u;
        goto label_28e6f8;
    }
    ctx->pc = 0x28E6F0u;
    {
        const bool branch_taken_0x28e6f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E6F0u;
            // 0x28e6f4: 0x36310008  ori         $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e6f0) {
            ctx->pc = 0x28E704u;
            goto label_28e704;
        }
    }
    ctx->pc = 0x28E6F8u;
label_28e6f8:
    // 0x28e6f8: 0x10000002  b           . + 4 + (0x2 << 2)
label_28e6fc:
    if (ctx->pc == 0x28E6FCu) {
        ctx->pc = 0x28E6FCu;
            // 0x28e6fc: 0x36310010  ori         $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)16);
        ctx->pc = 0x28E700u;
        goto label_28e700;
    }
    ctx->pc = 0x28E6F8u;
    {
        const bool branch_taken_0x28e6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E6FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E6F8u;
            // 0x28e6fc: 0x36310010  ori         $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e6f8) {
            ctx->pc = 0x28E704u;
            goto label_28e704;
        }
    }
    ctx->pc = 0x28E700u;
label_28e700:
    // 0x28e700: 0x36310020  ori         $s1, $s1, 0x20
    ctx->pc = 0x28e700u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)32);
label_28e704:
    // 0x28e704: 0x0  nop
    ctx->pc = 0x28e704u;
    // NOP
label_28e708:
    // 0x28e708: 0xc0724a4  jal         func_1C9290
label_28e70c:
    if (ctx->pc == 0x28E70Cu) {
        ctx->pc = 0x28E70Cu;
            // 0x28e70c: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x28E710u;
        goto label_28e710;
    }
    ctx->pc = 0x28E708u;
    SET_GPR_U32(ctx, 31, 0x28E710u);
    ctx->pc = 0x28E70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E708u;
            // 0x28e70c: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E710u; }
        if (ctx->pc != 0x28E710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E710u; }
        if (ctx->pc != 0x28E710u) { return; }
    }
    ctx->pc = 0x28E710u;
label_28e710:
    // 0x28e710: 0x2841005f  slti        $at, $v0, 0x5F
    ctx->pc = 0x28e710u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)95) ? 1 : 0);
label_28e714:
    // 0x28e714: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_28e718:
    if (ctx->pc == 0x28E718u) {
        ctx->pc = 0x28E718u;
            // 0x28e718: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x28E71Cu;
        goto label_28e71c;
    }
    ctx->pc = 0x28E714u;
    {
        const bool branch_taken_0x28e714 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E718u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E714u;
            // 0x28e718: 0x24030040  addiu       $v1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e714) {
            ctx->pc = 0x28E720u;
            goto label_28e720;
        }
    }
    ctx->pc = 0x28E71Cu;
label_28e71c:
    // 0x28e71c: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x28e71cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_28e720:
    // 0x28e720: 0x28410061  slti        $at, $v0, 0x61
    ctx->pc = 0x28e720u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)97) ? 1 : 0);
label_28e724:
    // 0x28e724: 0x14200002  bnez        $at, . + 4 + (0x2 << 2)
label_28e728:
    if (ctx->pc == 0x28E728u) {
        ctx->pc = 0x28E72Cu;
        goto label_28e72c;
    }
    ctx->pc = 0x28E724u;
    {
        const bool branch_taken_0x28e724 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e724) {
            ctx->pc = 0x28E730u;
            goto label_28e730;
        }
    }
    ctx->pc = 0x28E72Cu;
label_28e72c:
    // 0x28e72c: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x28e72cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_28e730:
    // 0x28e730: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x28e730u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
label_28e734:
    // 0x28e734: 0x32220080  andi        $v0, $s1, 0x80
    ctx->pc = 0x28e734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)128);
label_28e738:
    // 0x28e738: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_28e73c:
    if (ctx->pc == 0x28E73Cu) {
        ctx->pc = 0x28E740u;
        goto label_28e740;
    }
    ctx->pc = 0x28E738u;
    {
        const bool branch_taken_0x28e738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e738) {
            ctx->pc = 0x28E780u;
            goto label_28e780;
        }
    }
    ctx->pc = 0x28E740u;
label_28e740:
    // 0x28e740: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28e740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28e744:
    // 0x28e744: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28e744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28e748:
    // 0x28e748: 0xc0a381c  jal         func_28E070
label_28e74c:
    if (ctx->pc == 0x28E74Cu) {
        ctx->pc = 0x28E74Cu;
            // 0x28e74c: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->pc = 0x28E750u;
        goto label_28e750;
    }
    ctx->pc = 0x28E748u;
    SET_GPR_U32(ctx, 31, 0x28E750u);
    ctx->pc = 0x28E74Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E748u;
            // 0x28e74c: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E070u;
    if (runtime->hasFunction(0x28E070u)) {
        auto targetFn = runtime->lookupFunction(0x28E070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E750u; }
        if (ctx->pc != 0x28E750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PickupRandomItem__FP22TRESURE_BOX_FLOOR_INFOii_0x28e070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E750u; }
        if (ctx->pc != 0x28E750u) { return; }
    }
    ctx->pc = 0x28E750u;
label_28e750:
    // 0x28e750: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x28e750u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28e754:
    // 0x28e754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28e754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28e758:
    // 0x28e758: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x28e758u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_28e75c:
    // 0x28e75c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28e75cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28e760:
    // 0x28e760: 0xc0a381c  jal         func_28E070
label_28e764:
    if (ctx->pc == 0x28E764u) {
        ctx->pc = 0x28E764u;
            // 0x28e764: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->pc = 0x28E768u;
        goto label_28e768;
    }
    ctx->pc = 0x28E760u;
    SET_GPR_U32(ctx, 31, 0x28E768u);
    ctx->pc = 0x28E764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E760u;
            // 0x28e764: 0x2406ffce  addiu       $a2, $zero, -0x32 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967246));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E070u;
    if (runtime->hasFunction(0x28E070u)) {
        auto targetFn = runtime->lookupFunction(0x28E070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E768u; }
        if (ctx->pc != 0x28E768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PickupRandomItem__FP22TRESURE_BOX_FLOOR_INFOii_0x28e070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E768u; }
        if (ctx->pc != 0x28E768u) { return; }
    }
    ctx->pc = 0x28E768u;
label_28e768:
    // 0x28e768: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x28e768u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28e76c:
    // 0x28e76c: 0x8c530008  lw          $s3, 0x8($v0)
    ctx->pc = 0x28e76cu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_28e770:
    // 0x28e770: 0xc0a38a8  jal         func_28E2A0
label_28e774:
    if (ctx->pc == 0x28E774u) {
        ctx->pc = 0x28E774u;
            // 0x28e774: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x28E778u;
        goto label_28e778;
    }
    ctx->pc = 0x28E770u;
    SET_GPR_U32(ctx, 31, 0x28E778u);
    ctx->pc = 0x28E774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E770u;
            // 0x28e774: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E2A0u;
    if (runtime->hasFunction(0x28E2A0u)) {
        auto targetFn = runtime->lookupFunction(0x28E2A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E778u; }
        if (ctx->pc != 0x28E778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ScanEyePoint__FPf_0x28e2a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E778u; }
        if (ctx->pc != 0x28E778u) { return; }
    }
    ctx->pc = 0x28E778u;
label_28e778:
    // 0x28e778: 0x1000001b  b           . + 4 + (0x1B << 2)
label_28e77c:
    if (ctx->pc == 0x28E77Cu) {
        ctx->pc = 0x28E77Cu;
            // 0x28e77c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x28E780u;
        goto label_28e780;
    }
    ctx->pc = 0x28E778u;
    {
        const bool branch_taken_0x28e778 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E77Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E778u;
            // 0x28e77c: 0x46000506  mov.s       $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e778) {
            ctx->pc = 0x28E7E8u;
            goto label_28e7e8;
        }
    }
    ctx->pc = 0x28E780u;
label_28e780:
    // 0x28e780: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x28e780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
label_28e784:
    // 0x28e784: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_28e788:
    if (ctx->pc == 0x28E788u) {
        ctx->pc = 0x28E788u;
            // 0x28e788: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x28E78Cu;
        goto label_28e78c;
    }
    ctx->pc = 0x28E784u;
    {
        const bool branch_taken_0x28e784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E784u;
            // 0x28e788: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e784) {
            ctx->pc = 0x28E7A8u;
            goto label_28e7a8;
        }
    }
    ctx->pc = 0x28E78Cu;
label_28e78c:
    // 0x28e78c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28e78cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28e790:
    // 0x28e790: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28e790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28e794:
    // 0x28e794: 0xc0a381c  jal         func_28E070
label_28e798:
    if (ctx->pc == 0x28E798u) {
        ctx->pc = 0x28E798u;
            // 0x28e798: 0x2406ffe2  addiu       $a2, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->pc = 0x28E79Cu;
        goto label_28e79c;
    }
    ctx->pc = 0x28E794u;
    SET_GPR_U32(ctx, 31, 0x28E79Cu);
    ctx->pc = 0x28E798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E794u;
            // 0x28e798: 0x2406ffe2  addiu       $a2, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E070u;
    if (runtime->hasFunction(0x28E070u)) {
        auto targetFn = runtime->lookupFunction(0x28E070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E79Cu; }
        if (ctx->pc != 0x28E79Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PickupRandomItem__FP22TRESURE_BOX_FLOOR_INFOii_0x28e070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E79Cu; }
        if (ctx->pc != 0x28E79Cu) { return; }
    }
    ctx->pc = 0x28E79Cu;
label_28e79c:
    // 0x28e79c: 0x10000010  b           . + 4 + (0x10 << 2)
label_28e7a0:
    if (ctx->pc == 0x28E7A0u) {
        ctx->pc = 0x28E7A0u;
            // 0x28e7a0: 0x8c550000  lw          $s5, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x28E7A4u;
        goto label_28e7a4;
    }
    ctx->pc = 0x28E79Cu;
    {
        const bool branch_taken_0x28e79c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E7A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E79Cu;
            // 0x28e7a0: 0x8c550000  lw          $s5, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e79c) {
            ctx->pc = 0x28E7E0u;
            goto label_28e7e0;
        }
    }
    ctx->pc = 0x28E7A4u;
label_28e7a4:
    // 0x28e7a4: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x28e7a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_28e7a8:
    // 0x28e7a8: 0xc0724a4  jal         func_1C9290
label_28e7ac:
    if (ctx->pc == 0x28E7ACu) {
        ctx->pc = 0x28E7B0u;
        goto label_28e7b0;
    }
    ctx->pc = 0x28E7A8u;
    SET_GPR_U32(ctx, 31, 0x28E7B0u);
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E7B0u; }
        if (ctx->pc != 0x28E7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E7B0u; }
        if (ctx->pc != 0x28E7B0u) { return; }
    }
    ctx->pc = 0x28E7B0u;
label_28e7b0:
    // 0x28e7b0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28e7b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e7b4:
    // 0x28e7b4: 0xc0724a4  jal         func_1C9290
label_28e7b8:
    if (ctx->pc == 0x28E7B8u) {
        ctx->pc = 0x28E7B8u;
            // 0x28e7b8: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x28E7BCu;
        goto label_28e7bc;
    }
    ctx->pc = 0x28E7B4u;
    SET_GPR_U32(ctx, 31, 0x28E7BCu);
    ctx->pc = 0x28E7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E7B4u;
            // 0x28e7b8: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E7BCu; }
        if (ctx->pc != 0x28E7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E7BCu; }
        if (ctx->pc != 0x28E7BCu) { return; }
    }
    ctx->pc = 0x28E7BCu;
label_28e7bc:
    // 0x28e7bc: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x28e7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_28e7c0:
    // 0x28e7c0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_28e7c4:
    if (ctx->pc == 0x28E7C4u) {
        ctx->pc = 0x28E7C4u;
            // 0x28e7c4: 0x23043  sra         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
        ctx->pc = 0x28E7C8u;
        goto label_28e7c8;
    }
    ctx->pc = 0x28E7C0u;
    {
        const bool branch_taken_0x28e7c0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x28E7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E7C0u;
            // 0x28e7c4: 0x23043  sra         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e7c0) {
            ctx->pc = 0x28E7D0u;
            goto label_28e7d0;
        }
    }
    ctx->pc = 0x28E7C8u;
label_28e7c8:
    // 0x28e7c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28e7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_28e7cc:
    // 0x28e7cc: 0x23043  sra         $a2, $v0, 1
    ctx->pc = 0x28e7ccu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 1));
label_28e7d0:
    // 0x28e7d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28e7d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28e7d4:
    // 0x28e7d4: 0xc0a381c  jal         func_28E070
label_28e7d8:
    if (ctx->pc == 0x28E7D8u) {
        ctx->pc = 0x28E7D8u;
            // 0x28e7d8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28E7DCu;
        goto label_28e7dc;
    }
    ctx->pc = 0x28E7D4u;
    SET_GPR_U32(ctx, 31, 0x28E7DCu);
    ctx->pc = 0x28E7D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E7D4u;
            // 0x28e7d8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E070u;
    if (runtime->hasFunction(0x28E070u)) {
        auto targetFn = runtime->lookupFunction(0x28E070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E7DCu; }
        if (ctx->pc != 0x28E7DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PickupRandomItem__FP22TRESURE_BOX_FLOOR_INFOii_0x28e070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E7DCu; }
        if (ctx->pc != 0x28E7DCu) { return; }
    }
    ctx->pc = 0x28E7DCu;
label_28e7dc:
    // 0x28e7dc: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x28e7dcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_28e7e0:
    // 0x28e7e0: 0x8c520008  lw          $s2, 0x8($v0)
    ctx->pc = 0x28e7e0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_28e7e4:
    // 0x28e7e4: 0x0  nop
    ctx->pc = 0x28e7e4u;
    // NOP
label_28e7e8:
    // 0x28e7e8: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x28e7e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
label_28e7ec:
    // 0x28e7ec: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_28e7f0:
    if (ctx->pc == 0x28E7F0u) {
        ctx->pc = 0x28E7F4u;
        goto label_28e7f4;
    }
    ctx->pc = 0x28E7ECu;
    {
        const bool branch_taken_0x28e7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e7ec) {
            ctx->pc = 0x28E810u;
            goto label_28e810;
        }
    }
    ctx->pc = 0x28E7F4u;
label_28e7f4:
    // 0x28e7f4: 0x2a41000a  slti        $at, $s2, 0xA
    ctx->pc = 0x28e7f4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
label_28e7f8:
    // 0x28e7f8: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_28e7fc:
    if (ctx->pc == 0x28E7FCu) {
        ctx->pc = 0x28E800u;
        goto label_28e800;
    }
    ctx->pc = 0x28E7F8u;
    {
        const bool branch_taken_0x28e7f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e7f8) {
            ctx->pc = 0x28E810u;
            goto label_28e810;
        }
    }
    ctx->pc = 0x28E800u;
label_28e800:
    // 0x28e800: 0xc0724a4  jal         func_1C9290
label_28e804:
    if (ctx->pc == 0x28E804u) {
        ctx->pc = 0x28E804u;
            // 0x28e804: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x28E808u;
        goto label_28e808;
    }
    ctx->pc = 0x28E800u;
    SET_GPR_U32(ctx, 31, 0x28E808u);
    ctx->pc = 0x28E804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E800u;
            // 0x28e804: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E808u; }
        if (ctx->pc != 0x28E808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E808u; }
        if (ctx->pc != 0x28E808u) { return; }
    }
    ctx->pc = 0x28E808u;
label_28e808:
    // 0x28e808: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x28e808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_28e80c:
    // 0x28e80c: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x28e80cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_28e810:
    // 0x28e810: 0x2a42000a  slti        $v0, $s2, 0xA
    ctx->pc = 0x28e810u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)10) ? 1 : 0);
label_28e814:
    // 0x28e814: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_28e818:
    if (ctx->pc == 0x28E818u) {
        ctx->pc = 0x28E81Cu;
        goto label_28e81c;
    }
    ctx->pc = 0x28E814u;
    {
        const bool branch_taken_0x28e814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e814) {
            ctx->pc = 0x28E86Cu;
            goto label_28e86c;
        }
    }
    ctx->pc = 0x28E81Cu;
label_28e81c:
    // 0x28e81c: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x28e81cu;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28e820:
    // 0x28e820: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x28e820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_28e824:
    // 0x28e824: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x28e824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_28e828:
    // 0x28e828: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28e828u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28e82c:
    // 0x28e82c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28e82cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28e830:
    // 0x28e830: 0xc0724bc  jal         func_1C92F0
label_28e834:
    if (ctx->pc == 0x28E834u) {
        ctx->pc = 0x28E834u;
            // 0x28e834: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x28E838u;
        goto label_28e838;
    }
    ctx->pc = 0x28E830u;
    SET_GPR_U32(ctx, 31, 0x28E838u);
    ctx->pc = 0x28E834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E830u;
            // 0x28e834: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E838u; }
        if (ctx->pc != 0x28E838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E838u; }
        if (ctx->pc != 0x28E838u) { return; }
    }
    ctx->pc = 0x28E838u;
label_28e838:
    // 0x28e838: 0x44920800  mtc1        $s2, $f1
    ctx->pc = 0x28e838u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28e83c:
    // 0x28e83c: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x28e83cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_28e840:
    // 0x28e840: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x28e840u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_28e844:
    // 0x28e844: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28e844u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_28e848:
    // 0x28e848: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x28e848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_28e84c:
    // 0x28e84c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x28e84cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_28e850:
    // 0x28e850: 0x0  nop
    ctx->pc = 0x28e850u;
    // NOP
label_28e854:
    // 0x28e854: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x28e854u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_28e858:
    // 0x28e858: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x28e858u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28e85c:
    // 0x28e85c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28e85cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28e860:
    // 0x28e860: 0xc0a248c  jal         func_289230
label_28e864:
    if (ctx->pc == 0x28E864u) {
        ctx->pc = 0x28E864u;
            // 0x28e864: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x28E868u;
        goto label_28e868;
    }
    ctx->pc = 0x28E860u;
    SET_GPR_U32(ctx, 31, 0x28E868u);
    ctx->pc = 0x28E864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E860u;
            // 0x28e864: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E868u; }
        if (ctx->pc != 0x28E868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E868u; }
        if (ctx->pc != 0x28E868u) { return; }
    }
    ctx->pc = 0x28E868u;
label_28e868:
    // 0x28e868: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28e868u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e86c:
    // 0x28e86c: 0x0  nop
    ctx->pc = 0x28e86cu;
    // NOP
label_28e870:
    // 0x28e870: 0x2a620003  slti        $v0, $s3, 0x3
    ctx->pc = 0x28e870u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
label_28e874:
    // 0x28e874: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_28e878:
    if (ctx->pc == 0x28E878u) {
        ctx->pc = 0x28E87Cu;
        goto label_28e87c;
    }
    ctx->pc = 0x28E874u;
    {
        const bool branch_taken_0x28e874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e874) {
            ctx->pc = 0x28E898u;
            goto label_28e898;
        }
    }
    ctx->pc = 0x28E87Cu;
label_28e87c:
    // 0x28e87c: 0x2a61000a  slti        $at, $s3, 0xA
    ctx->pc = 0x28e87cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
label_28e880:
    // 0x28e880: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_28e884:
    if (ctx->pc == 0x28E884u) {
        ctx->pc = 0x28E888u;
        goto label_28e888;
    }
    ctx->pc = 0x28E880u;
    {
        const bool branch_taken_0x28e880 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e880) {
            ctx->pc = 0x28E898u;
            goto label_28e898;
        }
    }
    ctx->pc = 0x28E888u;
label_28e888:
    // 0x28e888: 0xc0724a4  jal         func_1C9290
label_28e88c:
    if (ctx->pc == 0x28E88Cu) {
        ctx->pc = 0x28E88Cu;
            // 0x28e88c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x28E890u;
        goto label_28e890;
    }
    ctx->pc = 0x28E888u;
    SET_GPR_U32(ctx, 31, 0x28E890u);
    ctx->pc = 0x28E88Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E888u;
            // 0x28e88c: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E890u; }
        if (ctx->pc != 0x28E890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E890u; }
        if (ctx->pc != 0x28E890u) { return; }
    }
    ctx->pc = 0x28E890u;
label_28e890:
    // 0x28e890: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x28e890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_28e894:
    // 0x28e894: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x28e894u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_28e898:
    // 0x28e898: 0x2a62000a  slti        $v0, $s3, 0xA
    ctx->pc = 0x28e898u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)10) ? 1 : 0);
label_28e89c:
    // 0x28e89c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_28e8a0:
    if (ctx->pc == 0x28E8A0u) {
        ctx->pc = 0x28E8A4u;
        goto label_28e8a4;
    }
    ctx->pc = 0x28E89Cu;
    {
        const bool branch_taken_0x28e89c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e89c) {
            ctx->pc = 0x28E8F4u;
            goto label_28e8f4;
        }
    }
    ctx->pc = 0x28E8A4u;
label_28e8a4:
    // 0x28e8a4: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x28e8a4u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28e8a8:
    // 0x28e8a8: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x28e8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_28e8ac:
    // 0x28e8ac: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x28e8acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_28e8b0:
    // 0x28e8b0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x28e8b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_28e8b4:
    // 0x28e8b4: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28e8b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28e8b8:
    // 0x28e8b8: 0xc0724bc  jal         func_1C92F0
label_28e8bc:
    if (ctx->pc == 0x28E8BCu) {
        ctx->pc = 0x28E8BCu;
            // 0x28e8bc: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x28E8C0u;
        goto label_28e8c0;
    }
    ctx->pc = 0x28E8B8u;
    SET_GPR_U32(ctx, 31, 0x28E8C0u);
    ctx->pc = 0x28E8BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E8B8u;
            // 0x28e8bc: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C92F0u;
    if (runtime->hasFunction(0x1C92F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C92F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E8C0u; }
        if (ctx->pc != 0x28E8C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fRand__Ff_0x1c92f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E8C0u; }
        if (ctx->pc != 0x28E8C0u) { return; }
    }
    ctx->pc = 0x28E8C0u;
label_28e8c0:
    // 0x28e8c0: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x28e8c0u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28e8c4:
    // 0x28e8c4: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x28e8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_28e8c8:
    // 0x28e8c8: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x28e8c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_28e8cc:
    // 0x28e8cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x28e8ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_28e8d0:
    // 0x28e8d0: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x28e8d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_28e8d4:
    // 0x28e8d4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x28e8d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_28e8d8:
    // 0x28e8d8: 0x0  nop
    ctx->pc = 0x28e8d8u;
    // NOP
label_28e8dc:
    // 0x28e8dc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x28e8dcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_28e8e0:
    // 0x28e8e0: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x28e8e0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28e8e4:
    // 0x28e8e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28e8e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28e8e8:
    // 0x28e8e8: 0xc0a248c  jal         func_289230
label_28e8ec:
    if (ctx->pc == 0x28E8ECu) {
        ctx->pc = 0x28E8ECu;
            // 0x28e8ec: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x28E8F0u;
        goto label_28e8f0;
    }
    ctx->pc = 0x28E8E8u;
    SET_GPR_U32(ctx, 31, 0x28E8F0u);
    ctx->pc = 0x28E8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E8E8u;
            // 0x28e8ec: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E8F0u; }
        if (ctx->pc != 0x28E8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E8F0u; }
        if (ctx->pc != 0x28E8F0u) { return; }
    }
    ctx->pc = 0x28E8F0u;
label_28e8f0:
    // 0x28e8f0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x28e8f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28e8f4:
    // 0x28e8f4: 0x0  nop
    ctx->pc = 0x28e8f4u;
    // NOP
label_28e8f8:
    // 0x28e8f8: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x28e8f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28e8fc:
    // 0x28e8fc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x28e8fcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_28e900:
    // 0x28e900: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x28e900u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28e904:
    // 0x28e904: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x28e904u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28e908:
    // 0x28e908: 0x3c0502d  daddu       $t2, $fp, $zero
    ctx->pc = 0x28e908u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_28e90c:
    // 0x28e90c: 0x260582d  daddu       $t3, $s3, $zero
    ctx->pc = 0x28e90cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28e910:
    // 0x28e910: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x28e910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_28e914:
    // 0x28e914: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28e914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28e918:
    // 0x28e918: 0xc0a3154  jal         func_28C550
label_28e91c:
    if (ctx->pc == 0x28E91Cu) {
        ctx->pc = 0x28E91Cu;
            // 0x28e91c: 0x27a60150  addiu       $a2, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x28E920u;
        goto label_28e920;
    }
    ctx->pc = 0x28E918u;
    SET_GPR_U32(ctx, 31, 0x28E920u);
    ctx->pc = 0x28E91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E918u;
            // 0x28e91c: 0x27a60150  addiu       $a2, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C550u;
    if (runtime->hasFunction(0x28C550u)) {
        auto targetFn = runtime->lookupFunction(0x28C550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E920u; }
        if (ctx->pc != 0x28E920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PutTreasureBox__19CTreasureBoxManagerFiPffiiiii_0x28c550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E920u; }
        if (ctx->pc != 0x28E920u) { return; }
    }
    ctx->pc = 0x28E920u;
label_28e920:
    // 0x28e920: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28e920u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e924:
    // 0x28e924: 0x0  nop
    ctx->pc = 0x28e924u;
    // NOP
label_28e928:
    // 0x28e928: 0x1620ff27  bnez        $s1, . + 4 + (-0xD9 << 2)
label_28e92c:
    if (ctx->pc == 0x28E92Cu) {
        ctx->pc = 0x28E930u;
        goto label_28e930;
    }
    ctx->pc = 0x28E928u;
    {
        const bool branch_taken_0x28e928 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e928) {
            ctx->pc = 0x28E5C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28e5c8;
        }
    }
    ctx->pc = 0x28E930u;
label_28e930:
    // 0x28e930: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x28e930u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_28e934:
    // 0x28e934: 0x2ac20008  slti        $v0, $s6, 0x8
    ctx->pc = 0x28e934u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)8) ? 1 : 0);
label_28e938:
    // 0x28e938: 0x1440ff23  bnez        $v0, . + 4 + (-0xDD << 2)
label_28e93c:
    if (ctx->pc == 0x28E93Cu) {
        ctx->pc = 0x28E93Cu;
            // 0x28e93c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x28E940u;
        goto label_28e940;
    }
    ctx->pc = 0x28E938u;
    {
        const bool branch_taken_0x28e938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28E93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E938u;
            // 0x28e93c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e938) {
            ctx->pc = 0x28E5C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28e5c8;
        }
    }
    ctx->pc = 0x28E940u;
label_28e940:
    // 0x28e940: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28e940u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e944:
    // 0x28e944: 0x10000046  b           . + 4 + (0x46 << 2)
label_28e948:
    if (ctx->pc == 0x28E948u) {
        ctx->pc = 0x28E948u;
            // 0x28e948: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28E94Cu;
        goto label_28e94c;
    }
    ctx->pc = 0x28E944u;
    {
        const bool branch_taken_0x28e944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28E948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28E944u;
            // 0x28e948: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28e944) {
            ctx->pc = 0x28EA60u;
            goto label_28ea60;
        }
    }
    ctx->pc = 0x28E94Cu;
label_28e94c:
    // 0x28e94c: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x28e94cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_28e950:
    // 0x28e950: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x28e950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_28e954:
    // 0x28e954: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x28e954u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_28e958:
    // 0x28e958: 0x84330000  lh          $s3, 0x0($at)
    ctx->pc = 0x28e958u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 0)));
label_28e95c:
    // 0x28e95c: 0x2a6200f5  slti        $v0, $s3, 0xF5
    ctx->pc = 0x28e95cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)245) ? 1 : 0);
label_28e960:
    // 0x28e960: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
label_28e964:
    if (ctx->pc == 0x28E964u) {
        ctx->pc = 0x28E968u;
        goto label_28e968;
    }
    ctx->pc = 0x28E960u;
    {
        const bool branch_taken_0x28e960 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28e960) {
            ctx->pc = 0x28EA58u;
            goto label_28ea58;
        }
    }
    ctx->pc = 0x28E968u;
label_28e968:
    // 0x28e968: 0x2a61010d  slti        $at, $s3, 0x10D
    ctx->pc = 0x28e968u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)269) ? 1 : 0);
label_28e96c:
    // 0x28e96c: 0x1020003a  beqz        $at, . + 4 + (0x3A << 2)
label_28e970:
    if (ctx->pc == 0x28E970u) {
        ctx->pc = 0x28E974u;
        goto label_28e974;
    }
    ctx->pc = 0x28E96Cu;
    {
        const bool branch_taken_0x28e96c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e96c) {
            ctx->pc = 0x28EA58u;
            goto label_28ea58;
        }
    }
    ctx->pc = 0x28E974u;
label_28e974:
    // 0x28e974: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x28e974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_28e978:
    // 0x28e978: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28e978u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28e97c:
    // 0x28e97c: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x28e97cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_28e980:
    // 0x28e980: 0x84350040  lh          $s5, 0x40($at)
    ctx->pc = 0x28e980u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 64)));
label_28e984:
    // 0x28e984: 0x0  nop
    ctx->pc = 0x28e984u;
    // NOP
label_28e988:
    // 0x28e988: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x28e988u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
label_28e98c:
    // 0x28e98c: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x28e98cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_28e990:
    // 0x28e990: 0xc0a3524  jal         func_28D490
label_28e994:
    if (ctx->pc == 0x28E994u) {
        ctx->pc = 0x28E994u;
            // 0x28e994: 0x24a50480  addiu       $a1, $a1, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1152));
        ctx->pc = 0x28E998u;
        goto label_28e998;
    }
    ctx->pc = 0x28E990u;
    SET_GPR_U32(ctx, 31, 0x28E998u);
    ctx->pc = 0x28E994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E990u;
            // 0x28e994: 0x24a50480  addiu       $a1, $a1, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D490u;
    if (runtime->hasFunction(0x28D490u)) {
        auto targetFn = runtime->lookupFunction(0x28D490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E998u; }
        if (ctx->pc != 0x28E998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapFlatPosition__FPfP11CAutoMapGen_0x28d490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E998u; }
        if (ctx->pc != 0x28E998u) { return; }
    }
    ctx->pc = 0x28E998u;
label_28e998:
    // 0x28e998: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_28e99c:
    if (ctx->pc == 0x28E99Cu) {
        ctx->pc = 0x28E9A0u;
        goto label_28e9a0;
    }
    ctx->pc = 0x28E998u;
    {
        const bool branch_taken_0x28e998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e998) {
            ctx->pc = 0x28EA4Cu;
            goto label_28ea4c;
        }
    }
    ctx->pc = 0x28E9A0u;
label_28e9a0:
    // 0x28e9a0: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x28e9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_28e9a4:
    // 0x28e9a4: 0xc04c018  jal         func_130060
label_28e9a8:
    if (ctx->pc == 0x28E9A8u) {
        ctx->pc = 0x28E9A8u;
            // 0x28e9a8: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x28E9ACu;
        goto label_28e9ac;
    }
    ctx->pc = 0x28E9A4u;
    SET_GPR_U32(ctx, 31, 0x28E9ACu);
    ctx->pc = 0x28E9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E9A4u;
            // 0x28e9a8: 0x27a50160  addiu       $a1, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E9ACu; }
        if (ctx->pc != 0x28E9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E9ACu; }
        if (ctx->pc != 0x28E9ACu) { return; }
    }
    ctx->pc = 0x28E9ACu;
label_28e9ac:
    // 0x28e9ac: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x28e9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
label_28e9b0:
    // 0x28e9b0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28e9b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28e9b4:
    // 0x28e9b4: 0x0  nop
    ctx->pc = 0x28e9b4u;
    // NOP
label_28e9b8:
    // 0x28e9b8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x28e9b8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28e9bc:
    // 0x28e9bc: 0x0  nop
    ctx->pc = 0x28e9bcu;
    // NOP
label_28e9c0:
    // 0x28e9c0: 0x45010022  bc1t        . + 4 + (0x22 << 2)
label_28e9c4:
    if (ctx->pc == 0x28E9C4u) {
        ctx->pc = 0x28E9C8u;
        goto label_28e9c8;
    }
    ctx->pc = 0x28E9C0u;
    {
        const bool branch_taken_0x28e9c0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28e9c0) {
            ctx->pc = 0x28EA4Cu;
            goto label_28ea4c;
        }
    }
    ctx->pc = 0x28E9C8u;
label_28e9c8:
    // 0x28e9c8: 0xc0a3870  jal         func_28E1C0
label_28e9cc:
    if (ctx->pc == 0x28E9CCu) {
        ctx->pc = 0x28E9CCu;
            // 0x28e9cc: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->pc = 0x28E9D0u;
        goto label_28e9d0;
    }
    ctx->pc = 0x28E9C8u;
    SET_GPR_U32(ctx, 31, 0x28E9D0u);
    ctx->pc = 0x28E9CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28E9C8u;
            // 0x28e9cc: 0x27a40160  addiu       $a0, $sp, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E1C0u;
    if (runtime->hasFunction(0x28E1C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E9D0u; }
        if (ctx->pc != 0x28E9D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckObjectPutArea__FPf_0x28e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E9D0u; }
        if (ctx->pc != 0x28E9D0u) { return; }
    }
    ctx->pc = 0x28E9D0u;
label_28e9d0:
    // 0x28e9d0: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_28e9d4:
    if (ctx->pc == 0x28E9D4u) {
        ctx->pc = 0x28E9D8u;
        goto label_28e9d8;
    }
    ctx->pc = 0x28E9D0u;
    {
        const bool branch_taken_0x28e9d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28e9d0) {
            ctx->pc = 0x28EA4Cu;
            goto label_28ea4c;
        }
    }
    ctx->pc = 0x28E9D8u;
label_28e9d8:
    // 0x28e9d8: 0xc04a0ea  jal         func_1283A8
label_28e9dc:
    if (ctx->pc == 0x28E9DCu) {
        ctx->pc = 0x28E9E0u;
        goto label_28e9e0;
    }
    ctx->pc = 0x28E9D8u;
    SET_GPR_U32(ctx, 31, 0x28E9E0u);
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E9E0u; }
        if (ctx->pc != 0x28E9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28E9E0u; }
        if (ctx->pc != 0x28E9E0u) { return; }
    }
    ctx->pc = 0x28E9E0u;
label_28e9e0:
    // 0x28e9e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28e9e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28e9e4:
    // 0x28e9e4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28e9e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28e9e8:
    // 0x28e9e8: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x28e9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_28e9ec:
    // 0x28e9ec: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x28e9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_28e9f0:
    // 0x28e9f0: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x28e9f0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_28e9f4:
    // 0x28e9f4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x28e9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_28e9f8:
    // 0x28e9f8: 0x344c0fdb  ori         $t4, $v0, 0xFDB
    ctx->pc = 0x28e9f8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_28e9fc:
    // 0x28e9fc: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x28e9fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_28ea00:
    // 0x28ea00: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x28ea00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_28ea04:
    // 0x28ea04: 0x24070101  addiu       $a3, $zero, 0x101
    ctx->pc = 0x28ea04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
label_28ea08:
    // 0x28ea08: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x28ea08u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28ea0c:
    // 0x28ea0c: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x28ea0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28ea10:
    // 0x28ea10: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x28ea10u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28ea14:
    // 0x28ea14: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x28ea14u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ea18:
    // 0x28ea18: 0x448c1000  mtc1        $t4, $f2
    ctx->pc = 0x28ea18u;
    { uint32_t bits = GPR_U32(ctx, 12); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_28ea1c:
    // 0x28ea1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x28ea1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28ea20:
    // 0x28ea20: 0x0  nop
    ctx->pc = 0x28ea20u;
    // NOP
label_28ea24:
    // 0x28ea24: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x28ea24u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_28ea28:
    // 0x28ea28: 0x46010042  mul.s       $f1, $f0, $f1
    ctx->pc = 0x28ea28u;
    ctx->f[1] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_28ea2c:
    // 0x28ea2c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ea2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28ea30:
    // 0x28ea30: 0x0  nop
    ctx->pc = 0x28ea30u;
    // NOP
label_28ea34:
    // 0x28ea34: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x28ea34u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_28ea38:
    // 0x28ea38: 0x0  nop
    ctx->pc = 0x28ea38u;
    // NOP
label_28ea3c:
    // 0x28ea3c: 0x0  nop
    ctx->pc = 0x28ea3cu;
    // NOP
label_28ea40:
    // 0x28ea40: 0xc0a3154  jal         func_28C550
label_28ea44:
    if (ctx->pc == 0x28EA44u) {
        ctx->pc = 0x28EA44u;
            // 0x28ea44: 0x46020301  sub.s       $f12, $f0, $f2 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->pc = 0x28EA48u;
        goto label_28ea48;
    }
    ctx->pc = 0x28EA40u;
    SET_GPR_U32(ctx, 31, 0x28EA48u);
    ctx->pc = 0x28EA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28EA40u;
            // 0x28ea44: 0x46020301  sub.s       $f12, $f0, $f2 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C550u;
    if (runtime->hasFunction(0x28C550u)) {
        auto targetFn = runtime->lookupFunction(0x28C550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EA48u; }
        if (ctx->pc != 0x28EA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PutTreasureBox__19CTreasureBoxManagerFiPffiiiii_0x28c550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EA48u; }
        if (ctx->pc != 0x28EA48u) { return; }
    }
    ctx->pc = 0x28EA48u;
label_28ea48:
    // 0x28ea48: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x28ea48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28ea4c:
    // 0x28ea4c: 0x0  nop
    ctx->pc = 0x28ea4cu;
    // NOP
label_28ea50:
    // 0x28ea50: 0x1220ffcd  beqz        $s1, . + 4 + (-0x33 << 2)
label_28ea54:
    if (ctx->pc == 0x28EA54u) {
        ctx->pc = 0x28EA58u;
        goto label_28ea58;
    }
    ctx->pc = 0x28EA50u;
    {
        const bool branch_taken_0x28ea50 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ea50) {
            ctx->pc = 0x28E988u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28e988;
        }
    }
    ctx->pc = 0x28EA58u;
label_28ea58:
    // 0x28ea58: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x28ea58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_28ea5c:
    // 0x28ea5c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28ea5cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28ea60:
    // 0x28ea60: 0x8f838db8  lw          $v1, -0x7248($gp)
    ctx->pc = 0x28ea60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_28ea64:
    // 0x28ea64: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x28ea64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_28ea68:
    // 0x28ea68: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x28ea68u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_28ea6c:
    // 0x28ea6c: 0x8c22fff4  lw          $v0, -0xC($at)
    ctx->pc = 0x28ea6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294967284)));
label_28ea70:
    // 0x28ea70: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x28ea70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_28ea74:
    // 0x28ea74: 0x1440ffb5  bnez        $v0, . + 4 + (-0x4B << 2)
label_28ea78:
    if (ctx->pc == 0x28EA78u) {
        ctx->pc = 0x28EA7Cu;
        goto label_28ea7c;
    }
    ctx->pc = 0x28EA74u;
    {
        const bool branch_taken_0x28ea74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ea74) {
            ctx->pc = 0x28E94Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28e94c;
        }
    }
    ctx->pc = 0x28EA7Cu;
label_28ea7c:
    // 0x28ea7c: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x28ea7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_28ea80:
    // 0x28ea80: 0xc0724a4  jal         func_1C9290
label_28ea84:
    if (ctx->pc == 0x28EA84u) {
        ctx->pc = 0x28EA84u;
            // 0x28ea84: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28EA88u;
        goto label_28ea88;
    }
    ctx->pc = 0x28EA80u;
    SET_GPR_U32(ctx, 31, 0x28EA88u);
    ctx->pc = 0x28EA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28EA80u;
            // 0x28ea84: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EA88u; }
        if (ctx->pc != 0x28EA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EA88u; }
        if (ctx->pc != 0x28EA88u) { return; }
    }
    ctx->pc = 0x28EA88u;
label_28ea88:
    // 0x28ea88: 0x2841004c  slti        $at, $v0, 0x4C
    ctx->pc = 0x28ea88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)76) ? 1 : 0);
label_28ea8c:
    // 0x28ea8c: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_28ea90:
    if (ctx->pc == 0x28EA90u) {
        ctx->pc = 0x28EA90u;
            // 0x28ea90: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x28EA94u;
        goto label_28ea94;
    }
    ctx->pc = 0x28EA8Cu;
    {
        const bool branch_taken_0x28ea8c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EA8Cu;
            // 0x28ea90: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ea8c) {
            ctx->pc = 0x28EA9Cu;
            goto label_28ea9c;
        }
    }
    ctx->pc = 0x28EA94u;
label_28ea94:
    // 0x28ea94: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28ea94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28ea98:
    // 0x28ea98: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x28ea98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_28ea9c:
    // 0x28ea9c: 0xc0724a4  jal         func_1C9290
label_28eaa0:
    if (ctx->pc == 0x28EAA0u) {
        ctx->pc = 0x28EAA4u;
        goto label_28eaa4;
    }
    ctx->pc = 0x28EA9Cu;
    SET_GPR_U32(ctx, 31, 0x28EAA4u);
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EAA4u; }
        if (ctx->pc != 0x28EAA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EAA4u; }
        if (ctx->pc != 0x28EAA4u) { return; }
    }
    ctx->pc = 0x28EAA4u;
label_28eaa4:
    // 0x28eaa4: 0x28410051  slti        $at, $v0, 0x51
    ctx->pc = 0x28eaa4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)81) ? 1 : 0);
label_28eaa8:
    // 0x28eaa8: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_28eaac:
    if (ctx->pc == 0x28EAACu) {
        ctx->pc = 0x28EAACu;
            // 0x28eaac: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x28EAB0u;
        goto label_28eab0;
    }
    ctx->pc = 0x28EAA8u;
    {
        const bool branch_taken_0x28eaa8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EAA8u;
            // 0x28eaac: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eaa8) {
            ctx->pc = 0x28EAB8u;
            goto label_28eab8;
        }
    }
    ctx->pc = 0x28EAB0u;
label_28eab0:
    // 0x28eab0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28eab0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28eab4:
    // 0x28eab4: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x28eab4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_28eab8:
    // 0x28eab8: 0xc0724a4  jal         func_1C9290
label_28eabc:
    if (ctx->pc == 0x28EABCu) {
        ctx->pc = 0x28EAC0u;
        goto label_28eac0;
    }
    ctx->pc = 0x28EAB8u;
    SET_GPR_U32(ctx, 31, 0x28EAC0u);
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EAC0u; }
        if (ctx->pc != 0x28EAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EAC0u; }
        if (ctx->pc != 0x28EAC0u) { return; }
    }
    ctx->pc = 0x28EAC0u;
label_28eac0:
    // 0x28eac0: 0x2841005b  slti        $at, $v0, 0x5B
    ctx->pc = 0x28eac0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)91) ? 1 : 0);
label_28eac4:
    // 0x28eac4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_28eac8:
    if (ctx->pc == 0x28EAC8u) {
        ctx->pc = 0x28EAC8u;
            // 0x28eac8: 0x10082a  slt         $at, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->pc = 0x28EACCu;
        goto label_28eacc;
    }
    ctx->pc = 0x28EAC4u;
    {
        const bool branch_taken_0x28eac4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EAC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EAC4u;
            // 0x28eac8: 0x10082a  slt         $at, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eac4) {
            ctx->pc = 0x28EAD4u;
            goto label_28ead4;
        }
    }
    ctx->pc = 0x28EACCu;
label_28eacc:
    // 0x28eacc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28eaccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28ead0:
    // 0x28ead0: 0x10082a  slt         $at, $zero, $s0
    ctx->pc = 0x28ead0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_28ead4:
    // 0x28ead4: 0x10200024  beqz        $at, . + 4 + (0x24 << 2)
label_28ead8:
    if (ctx->pc == 0x28EAD8u) {
        ctx->pc = 0x28EAD8u;
            // 0x28ead8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28EADCu;
        goto label_28eadc;
    }
    ctx->pc = 0x28EAD4u;
    {
        const bool branch_taken_0x28ead4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EAD4u;
            // 0x28ead8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ead4) {
            ctx->pc = 0x28EB68u;
            goto label_28eb68;
        }
    }
    ctx->pc = 0x28EADCu;
label_28eadc:
    // 0x28eadc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28eadcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28eae0:
    // 0x28eae0: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x28eae0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
label_28eae4:
    // 0x28eae4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x28eae4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_28eae8:
    // 0x28eae8: 0xc0a3524  jal         func_28D490
label_28eaec:
    if (ctx->pc == 0x28EAECu) {
        ctx->pc = 0x28EAECu;
            // 0x28eaec: 0x24a50480  addiu       $a1, $a1, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1152));
        ctx->pc = 0x28EAF0u;
        goto label_28eaf0;
    }
    ctx->pc = 0x28EAE8u;
    SET_GPR_U32(ctx, 31, 0x28EAF0u);
    ctx->pc = 0x28EAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28EAE8u;
            // 0x28eaec: 0x24a50480  addiu       $a1, $a1, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D490u;
    if (runtime->hasFunction(0x28D490u)) {
        auto targetFn = runtime->lookupFunction(0x28D490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EAF0u; }
        if (ctx->pc != 0x28EAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapFlatPosition__FPfP11CAutoMapGen_0x28d490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EAF0u; }
        if (ctx->pc != 0x28EAF0u) { return; }
    }
    ctx->pc = 0x28EAF0u;
label_28eaf0:
    // 0x28eaf0: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_28eaf4:
    if (ctx->pc == 0x28EAF4u) {
        ctx->pc = 0x28EAF8u;
        goto label_28eaf8;
    }
    ctx->pc = 0x28EAF0u;
    {
        const bool branch_taken_0x28eaf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28eaf0) {
            ctx->pc = 0x28EB58u;
            goto label_28eb58;
        }
    }
    ctx->pc = 0x28EAF8u;
label_28eaf8:
    // 0x28eaf8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x28eaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_28eafc:
    // 0x28eafc: 0xc04c018  jal         func_130060
label_28eb00:
    if (ctx->pc == 0x28EB00u) {
        ctx->pc = 0x28EB00u;
            // 0x28eb00: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x28EB04u;
        goto label_28eb04;
    }
    ctx->pc = 0x28EAFCu;
    SET_GPR_U32(ctx, 31, 0x28EB04u);
    ctx->pc = 0x28EB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28EAFCu;
            // 0x28eb00: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EB04u; }
        if (ctx->pc != 0x28EB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EB04u; }
        if (ctx->pc != 0x28EB04u) { return; }
    }
    ctx->pc = 0x28EB04u;
label_28eb04:
    // 0x28eb04: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x28eb04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
label_28eb08:
    // 0x28eb08: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x28eb08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28eb0c:
    // 0x28eb0c: 0x0  nop
    ctx->pc = 0x28eb0cu;
    // NOP
label_28eb10:
    // 0x28eb10: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x28eb10u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28eb14:
    // 0x28eb14: 0x0  nop
    ctx->pc = 0x28eb14u;
    // NOP
label_28eb18:
    // 0x28eb18: 0x4501fff1  bc1t        . + 4 + (-0xF << 2)
label_28eb1c:
    if (ctx->pc == 0x28EB1Cu) {
        ctx->pc = 0x28EB20u;
        goto label_28eb20;
    }
    ctx->pc = 0x28EB18u;
    {
        const bool branch_taken_0x28eb18 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28eb18) {
            ctx->pc = 0x28EAE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28eae0;
        }
    }
    ctx->pc = 0x28EB20u;
label_28eb20:
    // 0x28eb20: 0xc0a3870  jal         func_28E1C0
label_28eb24:
    if (ctx->pc == 0x28EB24u) {
        ctx->pc = 0x28EB24u;
            // 0x28eb24: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x28EB28u;
        goto label_28eb28;
    }
    ctx->pc = 0x28EB20u;
    SET_GPR_U32(ctx, 31, 0x28EB28u);
    ctx->pc = 0x28EB24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28EB20u;
            // 0x28eb24: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E1C0u;
    if (runtime->hasFunction(0x28E1C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EB28u; }
        if (ctx->pc != 0x28EB28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckObjectPutArea__FPf_0x28e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EB28u; }
        if (ctx->pc != 0x28EB28u) { return; }
    }
    ctx->pc = 0x28EB28u;
label_28eb28:
    // 0x28eb28: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_28eb2c:
    if (ctx->pc == 0x28EB2Cu) {
        ctx->pc = 0x28EB30u;
        goto label_28eb30;
    }
    ctx->pc = 0x28EB28u;
    {
        const bool branch_taken_0x28eb28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28eb28) {
            ctx->pc = 0x28EB48u;
            goto label_28eb48;
        }
    }
    ctx->pc = 0x28EB30u;
label_28eb30:
    // 0x28eb30: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x28eb30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_28eb34:
    // 0x28eb34: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x28eb34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_28eb38:
    // 0x28eb38: 0xc0a3034  jal         func_28C0D0
label_28eb3c:
    if (ctx->pc == 0x28EB3Cu) {
        ctx->pc = 0x28EB3Cu;
            // 0x28eb3c: 0x24844b20  addiu       $a0, $a0, 0x4B20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19232));
        ctx->pc = 0x28EB40u;
        goto label_28eb40;
    }
    ctx->pc = 0x28EB38u;
    SET_GPR_U32(ctx, 31, 0x28EB40u);
    ctx->pc = 0x28EB3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28EB38u;
            // 0x28eb3c: 0x24844b20  addiu       $a0, $a0, 0x4B20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C0D0u;
    if (runtime->hasFunction(0x28C0D0u)) {
        auto targetFn = runtime->lookupFunction(0x28C0D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EB40u; }
        if (ctx->pc != 0x28EB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCircle__13CRandomCircleFPf_0x28c0d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EB40u; }
        if (ctx->pc != 0x28EB40u) { return; }
    }
    ctx->pc = 0x28EB40u;
label_28eb40:
    // 0x28eb40: 0x10000005  b           . + 4 + (0x5 << 2)
label_28eb44:
    if (ctx->pc == 0x28EB44u) {
        ctx->pc = 0x28EB48u;
        goto label_28eb48;
    }
    ctx->pc = 0x28EB40u;
    {
        const bool branch_taken_0x28eb40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28eb40) {
            ctx->pc = 0x28EB58u;
            goto label_28eb58;
        }
    }
    ctx->pc = 0x28EB48u;
label_28eb48:
    // 0x28eb48: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x28eb48u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_28eb4c:
    // 0x28eb4c: 0x2a410065  slti        $at, $s2, 0x65
    ctx->pc = 0x28eb4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)101) ? 1 : 0);
label_28eb50:
    // 0x28eb50: 0x1420ffe3  bnez        $at, . + 4 + (-0x1D << 2)
label_28eb54:
    if (ctx->pc == 0x28EB54u) {
        ctx->pc = 0x28EB58u;
        goto label_28eb58;
    }
    ctx->pc = 0x28EB50u;
    {
        const bool branch_taken_0x28eb50 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x28eb50) {
            ctx->pc = 0x28EAE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28eae0;
        }
    }
    ctx->pc = 0x28EB58u;
label_28eb58:
    // 0x28eb58: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x28eb58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_28eb5c:
    // 0x28eb5c: 0x230102a  slt         $v0, $s1, $s0
    ctx->pc = 0x28eb5cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_28eb60:
    // 0x28eb60: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
label_28eb64:
    if (ctx->pc == 0x28EB64u) {
        ctx->pc = 0x28EB64u;
            // 0x28eb64: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28EB68u;
        goto label_28eb68;
    }
    ctx->pc = 0x28EB60u;
    {
        const bool branch_taken_0x28eb60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28EB64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EB60u;
            // 0x28eb64: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28eb60) {
            ctx->pc = 0x28EAE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28eae0;
        }
    }
    ctx->pc = 0x28EB68u;
label_28eb68:
    // 0x28eb68: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x28eb68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_28eb6c:
    // 0x28eb6c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28eb6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28eb70:
    // 0x28eb70: 0xc0be5a4  jal         func_2F9690
label_28eb74:
    if (ctx->pc == 0x28EB74u) {
        ctx->pc = 0x28EB74u;
            // 0x28eb74: 0x24440014  addiu       $a0, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->pc = 0x28EB78u;
        goto label_28eb78;
    }
    ctx->pc = 0x28EB70u;
    SET_GPR_U32(ctx, 31, 0x28EB78u);
    ctx->pc = 0x28EB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28EB70u;
            // 0x28eb74: 0x24440014  addiu       $a0, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9690u;
    if (runtime->hasFunction(0x2F9690u)) {
        auto targetFn = runtime->lookupFunction(0x2F9690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EB78u; }
        if (ctx->pc != 0x28EB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsGeoStone__16CDngFloorManagerFi_0x2f9690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EB78u; }
        if (ctx->pc != 0x28EB78u) { return; }
    }
    ctx->pc = 0x28EB78u;
label_28eb78:
    // 0x28eb78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28eb78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28eb7c:
    // 0x28eb7c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_28eb80:
    if (ctx->pc == 0x28EB80u) {
        ctx->pc = 0x28EB84u;
        goto label_28eb84;
    }
    ctx->pc = 0x28EB7Cu;
    {
        const bool branch_taken_0x28eb7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x28eb7c) {
            ctx->pc = 0x28EBA8u;
            goto label_28eba8;
        }
    }
    ctx->pc = 0x28EB84u;
label_28eb84:
    // 0x28eb84: 0x8f848da8  lw          $a0, -0x7258($gp)
    ctx->pc = 0x28eb84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938024)));
label_28eb88:
    // 0x28eb88: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x28eb88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_28eb8c:
    // 0x28eb8c: 0xc0bdc7c  jal         func_2F71F0
label_28eb90:
    if (ctx->pc == 0x28EB90u) {
        ctx->pc = 0x28EB90u;
            // 0x28eb90: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28EB94u;
        goto label_28eb94;
    }
    ctx->pc = 0x28EB8Cu;
    SET_GPR_U32(ctx, 31, 0x28EB94u);
    ctx->pc = 0x28EB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28EB8Cu;
            // 0x28eb90: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F71F0u;
    if (runtime->hasFunction(0x2F71F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F71F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EB94u; }
        if (ctx->pc != 0x28EB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFloorInfoPtr__16CSaveDataDungeonFii_0x2f71f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EB94u; }
        if (ctx->pc != 0x28EB94u) { return; }
    }
    ctx->pc = 0x28EB94u;
label_28eb94:
    // 0x28eb94: 0x9443000e  lhu         $v1, 0xE($v0)
    ctx->pc = 0x28eb94u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 14)));
label_28eb98:
    // 0x28eb98: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x28eb98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
label_28eb9c:
    // 0x28eb9c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_28eba0:
    if (ctx->pc == 0x28EBA0u) {
        ctx->pc = 0x28EBA4u;
        goto label_28eba4;
    }
    ctx->pc = 0x28EB9Cu;
    {
        const bool branch_taken_0x28eb9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28eb9c) {
            ctx->pc = 0x28EBA8u;
            goto label_28eba8;
        }
    }
    ctx->pc = 0x28EBA4u;
label_28eba4:
    // 0x28eba4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28eba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28eba8:
    // 0x28eba8: 0x12000035  beqz        $s0, . + 4 + (0x35 << 2)
label_28ebac:
    if (ctx->pc == 0x28EBACu) {
        ctx->pc = 0x28EBB0u;
        goto label_28ebb0;
    }
    ctx->pc = 0x28EBA8u;
    {
        const bool branch_taken_0x28eba8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x28eba8) {
            ctx->pc = 0x28EC80u;
            goto label_28ec80;
        }
    }
    ctx->pc = 0x28EBB0u;
label_28ebb0:
    // 0x28ebb0: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x28ebb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
label_28ebb4:
    // 0x28ebb4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x28ebb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_28ebb8:
    // 0x28ebb8: 0xc0a3524  jal         func_28D490
label_28ebbc:
    if (ctx->pc == 0x28EBBCu) {
        ctx->pc = 0x28EBBCu;
            // 0x28ebbc: 0x24a50480  addiu       $a1, $a1, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1152));
        ctx->pc = 0x28EBC0u;
        goto label_28ebc0;
    }
    ctx->pc = 0x28EBB8u;
    SET_GPR_U32(ctx, 31, 0x28EBC0u);
    ctx->pc = 0x28EBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28EBB8u;
            // 0x28ebbc: 0x24a50480  addiu       $a1, $a1, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D490u;
    if (runtime->hasFunction(0x28D490u)) {
        auto targetFn = runtime->lookupFunction(0x28D490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EBC0u; }
        if (ctx->pc != 0x28EBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapFlatPosition__FPfP11CAutoMapGen_0x28d490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EBC0u; }
        if (ctx->pc != 0x28EBC0u) { return; }
    }
    ctx->pc = 0x28EBC0u;
label_28ebc0:
    // 0x28ebc0: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_28ebc4:
    if (ctx->pc == 0x28EBC4u) {
        ctx->pc = 0x28EBC8u;
        goto label_28ebc8;
    }
    ctx->pc = 0x28EBC0u;
    {
        const bool branch_taken_0x28ebc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ebc0) {
            ctx->pc = 0x28EC80u;
            goto label_28ec80;
        }
    }
    ctx->pc = 0x28EBC8u;
label_28ebc8:
    // 0x28ebc8: 0xc0a3870  jal         func_28E1C0
label_28ebcc:
    if (ctx->pc == 0x28EBCCu) {
        ctx->pc = 0x28EBCCu;
            // 0x28ebcc: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x28EBD0u;
        goto label_28ebd0;
    }
    ctx->pc = 0x28EBC8u;
    SET_GPR_U32(ctx, 31, 0x28EBD0u);
    ctx->pc = 0x28EBCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28EBC8u;
            // 0x28ebcc: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E1C0u;
    if (runtime->hasFunction(0x28E1C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EBD0u; }
        if (ctx->pc != 0x28EBD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckObjectPutArea__FPf_0x28e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EBD0u; }
        if (ctx->pc != 0x28EBD0u) { return; }
    }
    ctx->pc = 0x28EBD0u;
label_28ebd0:
    // 0x28ebd0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_28ebd4:
    if (ctx->pc == 0x28EBD4u) {
        ctx->pc = 0x28EBD8u;
        goto label_28ebd8;
    }
    ctx->pc = 0x28EBD0u;
    {
        const bool branch_taken_0x28ebd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ebd0) {
            ctx->pc = 0x28EC78u;
            goto label_28ec78;
        }
    }
    ctx->pc = 0x28EBD8u;
label_28ebd8:
    // 0x28ebd8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x28ebd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_28ebdc:
    // 0x28ebdc: 0xc04c018  jal         func_130060
label_28ebe0:
    if (ctx->pc == 0x28EBE0u) {
        ctx->pc = 0x28EBE0u;
            // 0x28ebe0: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x28EBE4u;
        goto label_28ebe4;
    }
    ctx->pc = 0x28EBDCu;
    SET_GPR_U32(ctx, 31, 0x28EBE4u);
    ctx->pc = 0x28EBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28EBDCu;
            // 0x28ebe0: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EBE4u; }
        if (ctx->pc != 0x28EBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EBE4u; }
        if (ctx->pc != 0x28EBE4u) { return; }
    }
    ctx->pc = 0x28EBE4u;
label_28ebe4:
    // 0x28ebe4: 0x3c0343a0  lui         $v1, 0x43A0
    ctx->pc = 0x28ebe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
label_28ebe8:
    // 0x28ebe8: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28ebe8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28ebec:
    // 0x28ebec: 0x0  nop
    ctx->pc = 0x28ebecu;
    // NOP
label_28ebf0:
    // 0x28ebf0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x28ebf0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28ebf4:
    // 0x28ebf4: 0x0  nop
    ctx->pc = 0x28ebf4u;
    // NOP
label_28ebf8:
    // 0x28ebf8: 0x4501001f  bc1t        . + 4 + (0x1F << 2)
label_28ebfc:
    if (ctx->pc == 0x28EBFCu) {
        ctx->pc = 0x28EC00u;
        goto label_28ec00;
    }
    ctx->pc = 0x28EBF8u;
    {
        const bool branch_taken_0x28ebf8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28ebf8) {
            ctx->pc = 0x28EC78u;
            goto label_28ec78;
        }
    }
    ctx->pc = 0x28EC00u;
label_28ec00:
    // 0x28ec00: 0xc7a10154  lwc1        $f1, 0x154($sp)
    ctx->pc = 0x28ec00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28ec04:
    // 0x28ec04: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x28ec04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_28ec08:
    // 0x28ec08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ec08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28ec0c:
    // 0x28ec0c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x28ec0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_28ec10:
    // 0x28ec10: 0x248451c0  addiu       $a0, $a0, 0x51C0
    ctx->pc = 0x28ec10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20928));
label_28ec14:
    // 0x28ec14: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28ec14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_28ec18:
    // 0x28ec18: 0xafa2015c  sw          $v0, 0x15C($sp)
    ctx->pc = 0x28ec18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 2));
label_28ec1c:
    // 0x28ec1c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28ec1cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28ec20:
    // 0x28ec20: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x28ec20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_28ec24:
    // 0x28ec24: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x28ec24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28ec28:
    // 0x28ec28: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x28ec28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_28ec2c:
    // 0x28ec2c: 0x320f809  jalr        $t9
label_28ec30:
    if (ctx->pc == 0x28EC30u) {
        ctx->pc = 0x28EC30u;
            // 0x28ec30: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x28EC34u;
        goto label_28ec34;
    }
    ctx->pc = 0x28EC2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28EC34u);
        ctx->pc = 0x28EC30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EC2Cu;
            // 0x28ec30: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28EC34u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28EC34u; }
            if (ctx->pc != 0x28EC34u) { return; }
        }
        }
    }
    ctx->pc = 0x28EC34u;
label_28ec34:
    // 0x28ec34: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28ec34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28ec38:
    // 0x28ec38: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x28ec38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28ec3c:
    // 0x28ec3c: 0xac205824  sw          $zero, 0x5824($at)
    ctx->pc = 0x28ec3cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 22564), GPR_U32(ctx, 0));
label_28ec40:
    // 0x28ec40: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28ec40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28ec44:
    // 0x28ec44: 0xac235820  sw          $v1, 0x5820($at)
    ctx->pc = 0x28ec44u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 22560), GPR_U32(ctx, 3));
label_28ec48:
    // 0x28ec48: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28ec48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28ec4c:
    // 0x28ec4c: 0xac235828  sw          $v1, 0x5828($at)
    ctx->pc = 0x28ec4cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 22568), GPR_U32(ctx, 3));
label_28ec50:
    // 0x28ec50: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28ec50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28ec54:
    // 0x28ec54: 0x8c240480  lw          $a0, 0x480($at)
    ctx->pc = 0x28ec54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 1152)));
label_28ec58:
    // 0x28ec58: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_28ec5c:
    if (ctx->pc == 0x28EC5Cu) {
        ctx->pc = 0x28EC60u;
        goto label_28ec60;
    }
    ctx->pc = 0x28EC58u;
    {
        const bool branch_taken_0x28ec58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ec58) {
            ctx->pc = 0x28EC80u;
            goto label_28ec80;
        }
    }
    ctx->pc = 0x28EC60u;
label_28ec60:
    // 0x28ec60: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x28ec60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28ec64:
    // 0x28ec64: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x28ec64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_28ec68:
    // 0x28ec68: 0x320f809  jalr        $t9
label_28ec6c:
    if (ctx->pc == 0x28EC6Cu) {
        ctx->pc = 0x28EC6Cu;
            // 0x28ec6c: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x28EC70u;
        goto label_28ec70;
    }
    ctx->pc = 0x28EC68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28EC70u);
        ctx->pc = 0x28EC6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EC68u;
            // 0x28ec6c: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28EC70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28EC70u; }
            if (ctx->pc != 0x28EC70u) { return; }
        }
        }
    }
    ctx->pc = 0x28EC70u;
label_28ec70:
    // 0x28ec70: 0x10000003  b           . + 4 + (0x3 << 2)
label_28ec74:
    if (ctx->pc == 0x28EC74u) {
        ctx->pc = 0x28EC78u;
        goto label_28ec78;
    }
    ctx->pc = 0x28EC70u;
    {
        const bool branch_taken_0x28ec70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ec70) {
            ctx->pc = 0x28EC80u;
            goto label_28ec80;
        }
    }
    ctx->pc = 0x28EC78u;
label_28ec78:
    // 0x28ec78: 0x1600ffcd  bnez        $s0, . + 4 + (-0x33 << 2)
label_28ec7c:
    if (ctx->pc == 0x28EC7Cu) {
        ctx->pc = 0x28EC80u;
        goto label_28ec80;
    }
    ctx->pc = 0x28EC78u;
    {
        const bool branch_taken_0x28ec78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ec78) {
            ctx->pc = 0x28EBB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28ebb0;
        }
    }
    ctx->pc = 0x28EC80u;
label_28ec80:
    // 0x28ec80: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28ec80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28ec84:
    // 0x28ec84: 0x1000001c  b           . + 4 + (0x1C << 2)
label_28ec88:
    if (ctx->pc == 0x28EC88u) {
        ctx->pc = 0x28EC88u;
            // 0x28ec88: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28EC8Cu;
        goto label_28ec8c;
    }
    ctx->pc = 0x28EC84u;
    {
        const bool branch_taken_0x28ec84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28EC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EC84u;
            // 0x28ec88: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ec84) {
            ctx->pc = 0x28ECF8u;
            goto label_28ecf8;
        }
    }
    ctx->pc = 0x28EC8Cu;
label_28ec8c:
    // 0x28ec8c: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x28ec8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
label_28ec90:
    // 0x28ec90: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x28ec90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_28ec94:
    // 0x28ec94: 0xc0a3524  jal         func_28D490
label_28ec98:
    if (ctx->pc == 0x28EC98u) {
        ctx->pc = 0x28EC98u;
            // 0x28ec98: 0x24a50480  addiu       $a1, $a1, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1152));
        ctx->pc = 0x28EC9Cu;
        goto label_28ec9c;
    }
    ctx->pc = 0x28EC94u;
    SET_GPR_U32(ctx, 31, 0x28EC9Cu);
    ctx->pc = 0x28EC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28EC94u;
            // 0x28ec98: 0x24a50480  addiu       $a1, $a1, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D490u;
    if (runtime->hasFunction(0x28D490u)) {
        auto targetFn = runtime->lookupFunction(0x28D490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EC9Cu; }
        if (ctx->pc != 0x28EC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapFlatPosition__FPfP11CAutoMapGen_0x28d490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EC9Cu; }
        if (ctx->pc != 0x28EC9Cu) { return; }
    }
    ctx->pc = 0x28EC9Cu;
label_28ec9c:
    // 0x28ec9c: 0x1040007a  beqz        $v0, . + 4 + (0x7A << 2)
label_28eca0:
    if (ctx->pc == 0x28ECA0u) {
        ctx->pc = 0x28ECA4u;
        goto label_28eca4;
    }
    ctx->pc = 0x28EC9Cu;
    {
        const bool branch_taken_0x28ec9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ec9c) {
            ctx->pc = 0x28EE88u;
            goto label_28ee88;
        }
    }
    ctx->pc = 0x28ECA4u;
label_28eca4:
    // 0x28eca4: 0xc0a3870  jal         func_28E1C0
label_28eca8:
    if (ctx->pc == 0x28ECA8u) {
        ctx->pc = 0x28ECA8u;
            // 0x28eca8: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x28ECACu;
        goto label_28ecac;
    }
    ctx->pc = 0x28ECA4u;
    SET_GPR_U32(ctx, 31, 0x28ECACu);
    ctx->pc = 0x28ECA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28ECA4u;
            // 0x28eca8: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E1C0u;
    if (runtime->hasFunction(0x28E1C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28ECACu; }
        if (ctx->pc != 0x28ECACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckObjectPutArea__FPf_0x28e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28ECACu; }
        if (ctx->pc != 0x28ECACu) { return; }
    }
    ctx->pc = 0x28ECACu;
label_28ecac:
    // 0x28ecac: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_28ecb0:
    if (ctx->pc == 0x28ECB0u) {
        ctx->pc = 0x28ECB4u;
        goto label_28ecb4;
    }
    ctx->pc = 0x28ECACu;
    {
        const bool branch_taken_0x28ecac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ecac) {
            ctx->pc = 0x28ECF8u;
            goto label_28ecf8;
        }
    }
    ctx->pc = 0x28ECB4u;
label_28ecb4:
    // 0x28ecb4: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x28ecb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_28ecb8:
    // 0x28ecb8: 0xc04c018  jal         func_130060
label_28ecbc:
    if (ctx->pc == 0x28ECBCu) {
        ctx->pc = 0x28ECBCu;
            // 0x28ecbc: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x28ECC0u;
        goto label_28ecc0;
    }
    ctx->pc = 0x28ECB8u;
    SET_GPR_U32(ctx, 31, 0x28ECC0u);
    ctx->pc = 0x28ECBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28ECB8u;
            // 0x28ecbc: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28ECC0u; }
        if (ctx->pc != 0x28ECC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28ECC0u; }
        if (ctx->pc != 0x28ECC0u) { return; }
    }
    ctx->pc = 0x28ECC0u;
label_28ecc0:
    // 0x28ecc0: 0x3c0343a0  lui         $v1, 0x43A0
    ctx->pc = 0x28ecc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
label_28ecc4:
    // 0x28ecc4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28ecc4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28ecc8:
    // 0x28ecc8: 0x0  nop
    ctx->pc = 0x28ecc8u;
    // NOP
label_28eccc:
    // 0x28eccc: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x28ecccu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28ecd0:
    // 0x28ecd0: 0x0  nop
    ctx->pc = 0x28ecd0u;
    // NOP
label_28ecd4:
    // 0x28ecd4: 0x45010008  bc1t        . + 4 + (0x8 << 2)
label_28ecd8:
    if (ctx->pc == 0x28ECD8u) {
        ctx->pc = 0x28ECDCu;
        goto label_28ecdc;
    }
    ctx->pc = 0x28ECD4u;
    {
        const bool branch_taken_0x28ecd4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28ecd4) {
            ctx->pc = 0x28ECF8u;
            goto label_28ecf8;
        }
    }
    ctx->pc = 0x28ECDCu;
label_28ecdc:
    // 0x28ecdc: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x28ecdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_28ece0:
    // 0x28ece0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x28ece0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28ece4:
    // 0x28ece4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x28ece4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_28ece8:
    // 0x28ece8: 0x320f809  jalr        $t9
label_28ecec:
    if (ctx->pc == 0x28ECECu) {
        ctx->pc = 0x28ECECu;
            // 0x28ecec: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x28ECF0u;
        goto label_28ecf0;
    }
    ctx->pc = 0x28ECE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28ECF0u);
        ctx->pc = 0x28ECECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28ECE8u;
            // 0x28ecec: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28ECF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28ECF0u; }
            if (ctx->pc != 0x28ECF0u) { return; }
        }
        }
    }
    ctx->pc = 0x28ECF0u;
label_28ecf0:
    // 0x28ecf0: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x28ecf0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_28ecf4:
    // 0x28ecf4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28ecf4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28ecf8:
    // 0x28ecf8: 0x2a01000c  slti        $at, $s0, 0xC
    ctx->pc = 0x28ecf8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
label_28ecfc:
    // 0x28ecfc: 0x10200062  beqz        $at, . + 4 + (0x62 << 2)
label_28ed00:
    if (ctx->pc == 0x28ED00u) {
        ctx->pc = 0x28ED04u;
        goto label_28ed04;
    }
    ctx->pc = 0x28ECFCu;
    {
        const bool branch_taken_0x28ecfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ecfc) {
            ctx->pc = 0x28EE88u;
            goto label_28ee88;
        }
    }
    ctx->pc = 0x28ED04u;
label_28ed04:
    // 0x28ed04: 0x3c0301ea  lui         $v1, 0x1EA
    ctx->pc = 0x28ed04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)490 << 16));
label_28ed08:
    // 0x28ed08: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x28ed08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
label_28ed0c:
    // 0x28ed0c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x28ed0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_28ed10:
    // 0x28ed10: 0x24720004  addiu       $s2, $v1, 0x4
    ctx->pc = 0x28ed10u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_28ed14:
    // 0x28ed14: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x28ed14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_28ed18:
    // 0x28ed18: 0x1460ffdc  bnez        $v1, . + 4 + (-0x24 << 2)
label_28ed1c:
    if (ctx->pc == 0x28ED1Cu) {
        ctx->pc = 0x28ED20u;
        goto label_28ed20;
    }
    ctx->pc = 0x28ED18u;
    {
        const bool branch_taken_0x28ed18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ed18) {
            ctx->pc = 0x28EC8Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28ec8c;
        }
    }
    ctx->pc = 0x28ED20u;
label_28ed20:
    // 0x28ed20: 0x10000059  b           . + 4 + (0x59 << 2)
label_28ed24:
    if (ctx->pc == 0x28ED24u) {
        ctx->pc = 0x28ED28u;
        goto label_28ed28;
    }
    ctx->pc = 0x28ED20u;
    {
        const bool branch_taken_0x28ed20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ed20) {
            ctx->pc = 0x28EE88u;
            goto label_28ee88;
        }
    }
    ctx->pc = 0x28ED28u;
label_28ed28:
    // 0x28ed28: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x28ed28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
label_28ed2c:
    // 0x28ed2c: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x28ed2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_28ed30:
    // 0x28ed30: 0xc0a3524  jal         func_28D490
label_28ed34:
    if (ctx->pc == 0x28ED34u) {
        ctx->pc = 0x28ED34u;
            // 0x28ed34: 0x24a50480  addiu       $a1, $a1, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1152));
        ctx->pc = 0x28ED38u;
        goto label_28ed38;
    }
    ctx->pc = 0x28ED30u;
    SET_GPR_U32(ctx, 31, 0x28ED38u);
    ctx->pc = 0x28ED34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28ED30u;
            // 0x28ed34: 0x24a50480  addiu       $a1, $a1, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28D490u;
    if (runtime->hasFunction(0x28D490u)) {
        auto targetFn = runtime->lookupFunction(0x28D490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28ED38u; }
        if (ctx->pc != 0x28ED38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapFlatPosition__FPfP11CAutoMapGen_0x28d490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28ED38u; }
        if (ctx->pc != 0x28ED38u) { return; }
    }
    ctx->pc = 0x28ED38u;
label_28ed38:
    // 0x28ed38: 0x10400057  beqz        $v0, . + 4 + (0x57 << 2)
label_28ed3c:
    if (ctx->pc == 0x28ED3Cu) {
        ctx->pc = 0x28ED40u;
        goto label_28ed40;
    }
    ctx->pc = 0x28ED38u;
    {
        const bool branch_taken_0x28ed38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ed38) {
            ctx->pc = 0x28EE98u;
            goto label_28ee98;
        }
    }
    ctx->pc = 0x28ED40u;
label_28ed40:
    // 0x28ed40: 0xc0a3870  jal         func_28E1C0
label_28ed44:
    if (ctx->pc == 0x28ED44u) {
        ctx->pc = 0x28ED44u;
            // 0x28ed44: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x28ED48u;
        goto label_28ed48;
    }
    ctx->pc = 0x28ED40u;
    SET_GPR_U32(ctx, 31, 0x28ED48u);
    ctx->pc = 0x28ED44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28ED40u;
            // 0x28ed44: 0x27a40150  addiu       $a0, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E1C0u;
    if (runtime->hasFunction(0x28E1C0u)) {
        auto targetFn = runtime->lookupFunction(0x28E1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28ED48u; }
        if (ctx->pc != 0x28ED48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckObjectPutArea__FPf_0x28e1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28ED48u; }
        if (ctx->pc != 0x28ED48u) { return; }
    }
    ctx->pc = 0x28ED48u;
label_28ed48:
    // 0x28ed48: 0x1040004f  beqz        $v0, . + 4 + (0x4F << 2)
label_28ed4c:
    if (ctx->pc == 0x28ED4Cu) {
        ctx->pc = 0x28ED50u;
        goto label_28ed50;
    }
    ctx->pc = 0x28ED48u;
    {
        const bool branch_taken_0x28ed48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ed48) {
            ctx->pc = 0x28EE88u;
            goto label_28ee88;
        }
    }
    ctx->pc = 0x28ED50u;
label_28ed50:
    // 0x28ed50: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x28ed50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_28ed54:
    // 0x28ed54: 0xc04c018  jal         func_130060
label_28ed58:
    if (ctx->pc == 0x28ED58u) {
        ctx->pc = 0x28ED58u;
            // 0x28ed58: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->pc = 0x28ED5Cu;
        goto label_28ed5c;
    }
    ctx->pc = 0x28ED54u;
    SET_GPR_U32(ctx, 31, 0x28ED5Cu);
    ctx->pc = 0x28ED58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28ED54u;
            // 0x28ed58: 0x27a50150  addiu       $a1, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28ED5Cu; }
        if (ctx->pc != 0x28ED5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28ED5Cu; }
        if (ctx->pc != 0x28ED5Cu) { return; }
    }
    ctx->pc = 0x28ED5Cu;
label_28ed5c:
    // 0x28ed5c: 0x3c0343a0  lui         $v1, 0x43A0
    ctx->pc = 0x28ed5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17312 << 16));
label_28ed60:
    // 0x28ed60: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x28ed60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_28ed64:
    // 0x28ed64: 0x0  nop
    ctx->pc = 0x28ed64u;
    // NOP
label_28ed68:
    // 0x28ed68: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x28ed68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_28ed6c:
    // 0x28ed6c: 0x0  nop
    ctx->pc = 0x28ed6cu;
    // NOP
label_28ed70:
    // 0x28ed70: 0x45010045  bc1t        . + 4 + (0x45 << 2)
label_28ed74:
    if (ctx->pc == 0x28ED74u) {
        ctx->pc = 0x28ED78u;
        goto label_28ed78;
    }
    ctx->pc = 0x28ED70u;
    {
        const bool branch_taken_0x28ed70 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x28ed70) {
            ctx->pc = 0x28EE88u;
            goto label_28ee88;
        }
    }
    ctx->pc = 0x28ED78u;
label_28ed78:
    // 0x28ed78: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28ed78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28ed7c:
    // 0x28ed7c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x28ed7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_28ed80:
    // 0x28ed80: 0x8c2606f8  lw          $a2, 0x6F8($at)
    ctx->pc = 0x28ed80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 1784)));
label_28ed84:
    // 0x28ed84: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28ed84u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28ed88:
    // 0x28ed88: 0x3c0301ea  lui         $v1, 0x1EA
    ctx->pc = 0x28ed88u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)490 << 16));
label_28ed8c:
    // 0x28ed8c: 0xc7a10150  lwc1        $f1, 0x150($sp)
    ctx->pc = 0x28ed8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28ed90:
    // 0x28ed90: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x28ed90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
label_28ed94:
    // 0x28ed94: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28ed94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28ed98:
    // 0x28ed98: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x28ed98u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_28ed9c:
    // 0x28ed9c: 0xc422063c  lwc1        $f2, 0x63C($at)
    ctx->pc = 0x28ed9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 1596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28eda0:
    // 0x28eda0: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x28eda0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_28eda4:
    // 0x28eda4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x28eda4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_28eda8:
    // 0x28eda8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x28eda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_28edac:
    // 0x28edac: 0x245001d4  addiu       $s0, $v0, 0x1D4
    ctx->pc = 0x28edacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 468));
label_28edb0:
    // 0x28edb0: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x28edb0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_28edb4:
    // 0x28edb4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28edb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28edb8:
    // 0x28edb8: 0x46020303  div.s       $f12, $f0, $f2
    ctx->pc = 0x28edb8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_28edbc:
    // 0x28edbc: 0x0  nop
    ctx->pc = 0x28edbcu;
    // NOP
label_28edc0:
    // 0x28edc0: 0x0  nop
    ctx->pc = 0x28edc0u;
    // NOP
label_28edc4:
    // 0x28edc4: 0xc0a248c  jal         func_289230
label_28edc8:
    if (ctx->pc == 0x28EDC8u) {
        ctx->pc = 0x28EDCCu;
        goto label_28edcc;
    }
    ctx->pc = 0x28EDC4u;
    SET_GPR_U32(ctx, 31, 0x28EDCCu);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EDCCu; }
        if (ctx->pc != 0x28EDCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EDCCu; }
        if (ctx->pc != 0x28EDCCu) { return; }
    }
    ctx->pc = 0x28EDCCu;
label_28edcc:
    // 0x28edcc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28edccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28edd0:
    // 0x28edd0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28edd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28edd4:
    // 0x28edd4: 0xc4220640  lwc1        $f2, 0x640($at)
    ctx->pc = 0x28edd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_28edd8:
    // 0x28edd8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x28edd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_28eddc:
    // 0x28eddc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x28eddcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_28ede0:
    // 0x28ede0: 0xc7a10158  lwc1        $f1, 0x158($sp)
    ctx->pc = 0x28ede0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_28ede4:
    // 0x28ede4: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x28ede4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
label_28ede8:
    // 0x28ede8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x28ede8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_28edec:
    // 0x28edec: 0x46020303  div.s       $f12, $f0, $f2
    ctx->pc = 0x28edecu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_28edf0:
    // 0x28edf0: 0x0  nop
    ctx->pc = 0x28edf0u;
    // NOP
label_28edf4:
    // 0x28edf4: 0x0  nop
    ctx->pc = 0x28edf4u;
    // NOP
label_28edf8:
    // 0x28edf8: 0xc0a248c  jal         func_289230
label_28edfc:
    if (ctx->pc == 0x28EDFCu) {
        ctx->pc = 0x28EE00u;
        goto label_28ee00;
    }
    ctx->pc = 0x28EDF8u;
    SET_GPR_U32(ctx, 31, 0x28EE00u);
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EE00u; }
        if (ctx->pc != 0x28EE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EE00u; }
        if (ctx->pc != 0x28EE00u) { return; }
    }
    ctx->pc = 0x28EE00u;
label_28ee00:
    // 0x28ee00: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x28ee00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_28ee04:
    // 0x28ee04: 0x224082a  slt         $at, $s1, $a0
    ctx->pc = 0x28ee04u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_28ee08:
    // 0x28ee08: 0x1420000f  bnez        $at, . + 4 + (0xF << 2)
label_28ee0c:
    if (ctx->pc == 0x28EE0Cu) {
        ctx->pc = 0x28EE10u;
        goto label_28ee10;
    }
    ctx->pc = 0x28EE08u;
    {
        const bool branch_taken_0x28ee08 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ee08) {
            ctx->pc = 0x28EE48u;
            goto label_28ee48;
        }
    }
    ctx->pc = 0x28EE10u;
label_28ee10:
    // 0x28ee10: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x28ee10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_28ee14:
    // 0x28ee14: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x28ee14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_28ee18:
    // 0x28ee18: 0x223082a  slt         $at, $s1, $v1
    ctx->pc = 0x28ee18u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_28ee1c:
    // 0x28ee1c: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_28ee20:
    if (ctx->pc == 0x28EE20u) {
        ctx->pc = 0x28EE24u;
        goto label_28ee24;
    }
    ctx->pc = 0x28EE1Cu;
    {
        const bool branch_taken_0x28ee1c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ee1c) {
            ctx->pc = 0x28EE48u;
            goto label_28ee48;
        }
    }
    ctx->pc = 0x28EE24u;
label_28ee24:
    // 0x28ee24: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x28ee24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_28ee28:
    // 0x28ee28: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x28ee28u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_28ee2c:
    // 0x28ee2c: 0x14200006  bnez        $at, . + 4 + (0x6 << 2)
label_28ee30:
    if (ctx->pc == 0x28EE30u) {
        ctx->pc = 0x28EE34u;
        goto label_28ee34;
    }
    ctx->pc = 0x28EE2Cu;
    {
        const bool branch_taken_0x28ee2c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ee2c) {
            ctx->pc = 0x28EE48u;
            goto label_28ee48;
        }
    }
    ctx->pc = 0x28EE34u;
label_28ee34:
    // 0x28ee34: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x28ee34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_28ee38:
    // 0x28ee38: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x28ee38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_28ee3c:
    // 0x28ee3c: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x28ee3cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_28ee40:
    // 0x28ee40: 0x14200011  bnez        $at, . + 4 + (0x11 << 2)
label_28ee44:
    if (ctx->pc == 0x28EE44u) {
        ctx->pc = 0x28EE48u;
        goto label_28ee48;
    }
    ctx->pc = 0x28EE40u;
    {
        const bool branch_taken_0x28ee40 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x28ee40) {
            ctx->pc = 0x28EE88u;
            goto label_28ee88;
        }
    }
    ctx->pc = 0x28EE48u;
label_28ee48:
    // 0x28ee48: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x28ee48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_28ee4c:
    // 0x28ee4c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x28ee4cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_28ee50:
    // 0x28ee50: 0xc0a32f8  jal         func_28CBE0
label_28ee54:
    if (ctx->pc == 0x28EE54u) {
        ctx->pc = 0x28EE54u;
            // 0x28ee54: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28EE58u;
        goto label_28ee58;
    }
    ctx->pc = 0x28EE50u;
    SET_GPR_U32(ctx, 31, 0x28EE58u);
    ctx->pc = 0x28EE54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28EE50u;
            // 0x28ee54: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CBE0u;
    if (runtime->hasFunction(0x28CBE0u)) {
        auto targetFn = runtime->lookupFunction(0x28CBE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EE58u; }
        if (ctx->pc != 0x28EE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetKeyDoorIndex__Fii_0x28cbe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EE58u; }
        if (ctx->pc != 0x28EE58u) { return; }
    }
    ctx->pc = 0x28EE58u;
label_28ee58:
    // 0x28ee58: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x28ee58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28ee5c:
    // 0x28ee5c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x28ee5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28ee60:
    // 0x28ee60: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x28ee60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_28ee64:
    // 0x28ee64: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x28ee64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_28ee68:
    // 0x28ee68: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x28ee68u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_28ee6c:
    // 0x28ee6c: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x28ee6cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28ee70:
    // 0x28ee70: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x28ee70u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_28ee74:
    // 0x28ee74: 0xa0502d  daddu       $t2, $a1, $zero
    ctx->pc = 0x28ee74u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28ee78:
    // 0x28ee78: 0xc0a3154  jal         func_28C550
label_28ee7c:
    if (ctx->pc == 0x28EE7Cu) {
        ctx->pc = 0x28EE7Cu;
            // 0x28ee7c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28EE80u;
        goto label_28ee80;
    }
    ctx->pc = 0x28EE78u;
    SET_GPR_U32(ctx, 31, 0x28EE80u);
    ctx->pc = 0x28EE7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28EE78u;
            // 0x28ee7c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C550u;
    if (runtime->hasFunction(0x28C550u)) {
        auto targetFn = runtime->lookupFunction(0x28C550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EE80u; }
        if (ctx->pc != 0x28EE80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PutTreasureBox__19CTreasureBoxManagerFiPffiiiii_0x28c550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28EE80u; }
        if (ctx->pc != 0x28EE80u) { return; }
    }
    ctx->pc = 0x28EE80u;
label_28ee80:
    // 0x28ee80: 0x10000005  b           . + 4 + (0x5 << 2)
label_28ee84:
    if (ctx->pc == 0x28EE84u) {
        ctx->pc = 0x28EE88u;
        goto label_28ee88;
    }
    ctx->pc = 0x28EE80u;
    {
        const bool branch_taken_0x28ee80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28ee80) {
            ctx->pc = 0x28EE98u;
            goto label_28ee98;
        }
    }
    ctx->pc = 0x28EE88u;
label_28ee88:
    // 0x28ee88: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28ee88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28ee8c:
    // 0x28ee8c: 0x8c2306f8  lw          $v1, 0x6F8($at)
    ctx->pc = 0x28ee8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 1784)));
label_28ee90:
    // 0x28ee90: 0x461ffa5  bgez        $v1, . + 4 + (-0x5B << 2)
label_28ee94:
    if (ctx->pc == 0x28EE94u) {
        ctx->pc = 0x28EE98u;
        goto label_28ee98;
    }
    ctx->pc = 0x28EE90u;
    {
        const bool branch_taken_0x28ee90 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x28ee90) {
            ctx->pc = 0x28ED28u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28ed28;
        }
    }
    ctx->pc = 0x28EE98u;
label_28ee98:
    // 0x28ee98: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x28ee98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_28ee9c:
    // 0x28ee9c: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x28ee9cu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_28eea0:
    // 0x28eea0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x28eea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_28eea4:
    // 0x28eea4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x28eea4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_28eea8:
    // 0x28eea8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x28eea8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_28eeac:
    // 0x28eeac: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x28eeacu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_28eeb0:
    // 0x28eeb0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x28eeb0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28eeb4:
    // 0x28eeb4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x28eeb4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28eeb8:
    // 0x28eeb8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x28eeb8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28eebc:
    // 0x28eebc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x28eebcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28eec0:
    // 0x28eec0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x28eec0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28eec4:
    // 0x28eec4: 0x3e00008  jr          $ra
label_28eec8:
    if (ctx->pc == 0x28EEC8u) {
        ctx->pc = 0x28EEC8u;
            // 0x28eec8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x28EECCu;
        goto label_fallthrough_0x28eec4;
    }
    ctx->pc = 0x28EEC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28EEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28EEC4u;
            // 0x28eec8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x28eec4:
    ctx->pc = 0x28EECCu;
}
