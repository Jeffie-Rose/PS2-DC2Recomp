#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: NextThink__9CAquaFishFiP16NEXT_THINK_PARAM
// Address: 0x20e400 - 0x20eaa8
void NextThink__9CAquaFishFiP16NEXT_THINK_PARAM_0x20e400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("NextThink__9CAquaFishFiP16NEXT_THINK_PARAM_0x20e400");
#endif

    switch (ctx->pc) {
        case 0x20e400u: goto label_20e400;
        case 0x20e404u: goto label_20e404;
        case 0x20e408u: goto label_20e408;
        case 0x20e40cu: goto label_20e40c;
        case 0x20e410u: goto label_20e410;
        case 0x20e414u: goto label_20e414;
        case 0x20e418u: goto label_20e418;
        case 0x20e41cu: goto label_20e41c;
        case 0x20e420u: goto label_20e420;
        case 0x20e424u: goto label_20e424;
        case 0x20e428u: goto label_20e428;
        case 0x20e42cu: goto label_20e42c;
        case 0x20e430u: goto label_20e430;
        case 0x20e434u: goto label_20e434;
        case 0x20e438u: goto label_20e438;
        case 0x20e43cu: goto label_20e43c;
        case 0x20e440u: goto label_20e440;
        case 0x20e444u: goto label_20e444;
        case 0x20e448u: goto label_20e448;
        case 0x20e44cu: goto label_20e44c;
        case 0x20e450u: goto label_20e450;
        case 0x20e454u: goto label_20e454;
        case 0x20e458u: goto label_20e458;
        case 0x20e45cu: goto label_20e45c;
        case 0x20e460u: goto label_20e460;
        case 0x20e464u: goto label_20e464;
        case 0x20e468u: goto label_20e468;
        case 0x20e46cu: goto label_20e46c;
        case 0x20e470u: goto label_20e470;
        case 0x20e474u: goto label_20e474;
        case 0x20e478u: goto label_20e478;
        case 0x20e47cu: goto label_20e47c;
        case 0x20e480u: goto label_20e480;
        case 0x20e484u: goto label_20e484;
        case 0x20e488u: goto label_20e488;
        case 0x20e48cu: goto label_20e48c;
        case 0x20e490u: goto label_20e490;
        case 0x20e494u: goto label_20e494;
        case 0x20e498u: goto label_20e498;
        case 0x20e49cu: goto label_20e49c;
        case 0x20e4a0u: goto label_20e4a0;
        case 0x20e4a4u: goto label_20e4a4;
        case 0x20e4a8u: goto label_20e4a8;
        case 0x20e4acu: goto label_20e4ac;
        case 0x20e4b0u: goto label_20e4b0;
        case 0x20e4b4u: goto label_20e4b4;
        case 0x20e4b8u: goto label_20e4b8;
        case 0x20e4bcu: goto label_20e4bc;
        case 0x20e4c0u: goto label_20e4c0;
        case 0x20e4c4u: goto label_20e4c4;
        case 0x20e4c8u: goto label_20e4c8;
        case 0x20e4ccu: goto label_20e4cc;
        case 0x20e4d0u: goto label_20e4d0;
        case 0x20e4d4u: goto label_20e4d4;
        case 0x20e4d8u: goto label_20e4d8;
        case 0x20e4dcu: goto label_20e4dc;
        case 0x20e4e0u: goto label_20e4e0;
        case 0x20e4e4u: goto label_20e4e4;
        case 0x20e4e8u: goto label_20e4e8;
        case 0x20e4ecu: goto label_20e4ec;
        case 0x20e4f0u: goto label_20e4f0;
        case 0x20e4f4u: goto label_20e4f4;
        case 0x20e4f8u: goto label_20e4f8;
        case 0x20e4fcu: goto label_20e4fc;
        case 0x20e500u: goto label_20e500;
        case 0x20e504u: goto label_20e504;
        case 0x20e508u: goto label_20e508;
        case 0x20e50cu: goto label_20e50c;
        case 0x20e510u: goto label_20e510;
        case 0x20e514u: goto label_20e514;
        case 0x20e518u: goto label_20e518;
        case 0x20e51cu: goto label_20e51c;
        case 0x20e520u: goto label_20e520;
        case 0x20e524u: goto label_20e524;
        case 0x20e528u: goto label_20e528;
        case 0x20e52cu: goto label_20e52c;
        case 0x20e530u: goto label_20e530;
        case 0x20e534u: goto label_20e534;
        case 0x20e538u: goto label_20e538;
        case 0x20e53cu: goto label_20e53c;
        case 0x20e540u: goto label_20e540;
        case 0x20e544u: goto label_20e544;
        case 0x20e548u: goto label_20e548;
        case 0x20e54cu: goto label_20e54c;
        case 0x20e550u: goto label_20e550;
        case 0x20e554u: goto label_20e554;
        case 0x20e558u: goto label_20e558;
        case 0x20e55cu: goto label_20e55c;
        case 0x20e560u: goto label_20e560;
        case 0x20e564u: goto label_20e564;
        case 0x20e568u: goto label_20e568;
        case 0x20e56cu: goto label_20e56c;
        case 0x20e570u: goto label_20e570;
        case 0x20e574u: goto label_20e574;
        case 0x20e578u: goto label_20e578;
        case 0x20e57cu: goto label_20e57c;
        case 0x20e580u: goto label_20e580;
        case 0x20e584u: goto label_20e584;
        case 0x20e588u: goto label_20e588;
        case 0x20e58cu: goto label_20e58c;
        case 0x20e590u: goto label_20e590;
        case 0x20e594u: goto label_20e594;
        case 0x20e598u: goto label_20e598;
        case 0x20e59cu: goto label_20e59c;
        case 0x20e5a0u: goto label_20e5a0;
        case 0x20e5a4u: goto label_20e5a4;
        case 0x20e5a8u: goto label_20e5a8;
        case 0x20e5acu: goto label_20e5ac;
        case 0x20e5b0u: goto label_20e5b0;
        case 0x20e5b4u: goto label_20e5b4;
        case 0x20e5b8u: goto label_20e5b8;
        case 0x20e5bcu: goto label_20e5bc;
        case 0x20e5c0u: goto label_20e5c0;
        case 0x20e5c4u: goto label_20e5c4;
        case 0x20e5c8u: goto label_20e5c8;
        case 0x20e5ccu: goto label_20e5cc;
        case 0x20e5d0u: goto label_20e5d0;
        case 0x20e5d4u: goto label_20e5d4;
        case 0x20e5d8u: goto label_20e5d8;
        case 0x20e5dcu: goto label_20e5dc;
        case 0x20e5e0u: goto label_20e5e0;
        case 0x20e5e4u: goto label_20e5e4;
        case 0x20e5e8u: goto label_20e5e8;
        case 0x20e5ecu: goto label_20e5ec;
        case 0x20e5f0u: goto label_20e5f0;
        case 0x20e5f4u: goto label_20e5f4;
        case 0x20e5f8u: goto label_20e5f8;
        case 0x20e5fcu: goto label_20e5fc;
        case 0x20e600u: goto label_20e600;
        case 0x20e604u: goto label_20e604;
        case 0x20e608u: goto label_20e608;
        case 0x20e60cu: goto label_20e60c;
        case 0x20e610u: goto label_20e610;
        case 0x20e614u: goto label_20e614;
        case 0x20e618u: goto label_20e618;
        case 0x20e61cu: goto label_20e61c;
        case 0x20e620u: goto label_20e620;
        case 0x20e624u: goto label_20e624;
        case 0x20e628u: goto label_20e628;
        case 0x20e62cu: goto label_20e62c;
        case 0x20e630u: goto label_20e630;
        case 0x20e634u: goto label_20e634;
        case 0x20e638u: goto label_20e638;
        case 0x20e63cu: goto label_20e63c;
        case 0x20e640u: goto label_20e640;
        case 0x20e644u: goto label_20e644;
        case 0x20e648u: goto label_20e648;
        case 0x20e64cu: goto label_20e64c;
        case 0x20e650u: goto label_20e650;
        case 0x20e654u: goto label_20e654;
        case 0x20e658u: goto label_20e658;
        case 0x20e65cu: goto label_20e65c;
        case 0x20e660u: goto label_20e660;
        case 0x20e664u: goto label_20e664;
        case 0x20e668u: goto label_20e668;
        case 0x20e66cu: goto label_20e66c;
        case 0x20e670u: goto label_20e670;
        case 0x20e674u: goto label_20e674;
        case 0x20e678u: goto label_20e678;
        case 0x20e67cu: goto label_20e67c;
        case 0x20e680u: goto label_20e680;
        case 0x20e684u: goto label_20e684;
        case 0x20e688u: goto label_20e688;
        case 0x20e68cu: goto label_20e68c;
        case 0x20e690u: goto label_20e690;
        case 0x20e694u: goto label_20e694;
        case 0x20e698u: goto label_20e698;
        case 0x20e69cu: goto label_20e69c;
        case 0x20e6a0u: goto label_20e6a0;
        case 0x20e6a4u: goto label_20e6a4;
        case 0x20e6a8u: goto label_20e6a8;
        case 0x20e6acu: goto label_20e6ac;
        case 0x20e6b0u: goto label_20e6b0;
        case 0x20e6b4u: goto label_20e6b4;
        case 0x20e6b8u: goto label_20e6b8;
        case 0x20e6bcu: goto label_20e6bc;
        case 0x20e6c0u: goto label_20e6c0;
        case 0x20e6c4u: goto label_20e6c4;
        case 0x20e6c8u: goto label_20e6c8;
        case 0x20e6ccu: goto label_20e6cc;
        case 0x20e6d0u: goto label_20e6d0;
        case 0x20e6d4u: goto label_20e6d4;
        case 0x20e6d8u: goto label_20e6d8;
        case 0x20e6dcu: goto label_20e6dc;
        case 0x20e6e0u: goto label_20e6e0;
        case 0x20e6e4u: goto label_20e6e4;
        case 0x20e6e8u: goto label_20e6e8;
        case 0x20e6ecu: goto label_20e6ec;
        case 0x20e6f0u: goto label_20e6f0;
        case 0x20e6f4u: goto label_20e6f4;
        case 0x20e6f8u: goto label_20e6f8;
        case 0x20e6fcu: goto label_20e6fc;
        case 0x20e700u: goto label_20e700;
        case 0x20e704u: goto label_20e704;
        case 0x20e708u: goto label_20e708;
        case 0x20e70cu: goto label_20e70c;
        case 0x20e710u: goto label_20e710;
        case 0x20e714u: goto label_20e714;
        case 0x20e718u: goto label_20e718;
        case 0x20e71cu: goto label_20e71c;
        case 0x20e720u: goto label_20e720;
        case 0x20e724u: goto label_20e724;
        case 0x20e728u: goto label_20e728;
        case 0x20e72cu: goto label_20e72c;
        case 0x20e730u: goto label_20e730;
        case 0x20e734u: goto label_20e734;
        case 0x20e738u: goto label_20e738;
        case 0x20e73cu: goto label_20e73c;
        case 0x20e740u: goto label_20e740;
        case 0x20e744u: goto label_20e744;
        case 0x20e748u: goto label_20e748;
        case 0x20e74cu: goto label_20e74c;
        case 0x20e750u: goto label_20e750;
        case 0x20e754u: goto label_20e754;
        case 0x20e758u: goto label_20e758;
        case 0x20e75cu: goto label_20e75c;
        case 0x20e760u: goto label_20e760;
        case 0x20e764u: goto label_20e764;
        case 0x20e768u: goto label_20e768;
        case 0x20e76cu: goto label_20e76c;
        case 0x20e770u: goto label_20e770;
        case 0x20e774u: goto label_20e774;
        case 0x20e778u: goto label_20e778;
        case 0x20e77cu: goto label_20e77c;
        case 0x20e780u: goto label_20e780;
        case 0x20e784u: goto label_20e784;
        case 0x20e788u: goto label_20e788;
        case 0x20e78cu: goto label_20e78c;
        case 0x20e790u: goto label_20e790;
        case 0x20e794u: goto label_20e794;
        case 0x20e798u: goto label_20e798;
        case 0x20e79cu: goto label_20e79c;
        case 0x20e7a0u: goto label_20e7a0;
        case 0x20e7a4u: goto label_20e7a4;
        case 0x20e7a8u: goto label_20e7a8;
        case 0x20e7acu: goto label_20e7ac;
        case 0x20e7b0u: goto label_20e7b0;
        case 0x20e7b4u: goto label_20e7b4;
        case 0x20e7b8u: goto label_20e7b8;
        case 0x20e7bcu: goto label_20e7bc;
        case 0x20e7c0u: goto label_20e7c0;
        case 0x20e7c4u: goto label_20e7c4;
        case 0x20e7c8u: goto label_20e7c8;
        case 0x20e7ccu: goto label_20e7cc;
        case 0x20e7d0u: goto label_20e7d0;
        case 0x20e7d4u: goto label_20e7d4;
        case 0x20e7d8u: goto label_20e7d8;
        case 0x20e7dcu: goto label_20e7dc;
        case 0x20e7e0u: goto label_20e7e0;
        case 0x20e7e4u: goto label_20e7e4;
        case 0x20e7e8u: goto label_20e7e8;
        case 0x20e7ecu: goto label_20e7ec;
        case 0x20e7f0u: goto label_20e7f0;
        case 0x20e7f4u: goto label_20e7f4;
        case 0x20e7f8u: goto label_20e7f8;
        case 0x20e7fcu: goto label_20e7fc;
        case 0x20e800u: goto label_20e800;
        case 0x20e804u: goto label_20e804;
        case 0x20e808u: goto label_20e808;
        case 0x20e80cu: goto label_20e80c;
        case 0x20e810u: goto label_20e810;
        case 0x20e814u: goto label_20e814;
        case 0x20e818u: goto label_20e818;
        case 0x20e81cu: goto label_20e81c;
        case 0x20e820u: goto label_20e820;
        case 0x20e824u: goto label_20e824;
        case 0x20e828u: goto label_20e828;
        case 0x20e82cu: goto label_20e82c;
        case 0x20e830u: goto label_20e830;
        case 0x20e834u: goto label_20e834;
        case 0x20e838u: goto label_20e838;
        case 0x20e83cu: goto label_20e83c;
        case 0x20e840u: goto label_20e840;
        case 0x20e844u: goto label_20e844;
        case 0x20e848u: goto label_20e848;
        case 0x20e84cu: goto label_20e84c;
        case 0x20e850u: goto label_20e850;
        case 0x20e854u: goto label_20e854;
        case 0x20e858u: goto label_20e858;
        case 0x20e85cu: goto label_20e85c;
        case 0x20e860u: goto label_20e860;
        case 0x20e864u: goto label_20e864;
        case 0x20e868u: goto label_20e868;
        case 0x20e86cu: goto label_20e86c;
        case 0x20e870u: goto label_20e870;
        case 0x20e874u: goto label_20e874;
        case 0x20e878u: goto label_20e878;
        case 0x20e87cu: goto label_20e87c;
        case 0x20e880u: goto label_20e880;
        case 0x20e884u: goto label_20e884;
        case 0x20e888u: goto label_20e888;
        case 0x20e88cu: goto label_20e88c;
        case 0x20e890u: goto label_20e890;
        case 0x20e894u: goto label_20e894;
        case 0x20e898u: goto label_20e898;
        case 0x20e89cu: goto label_20e89c;
        case 0x20e8a0u: goto label_20e8a0;
        case 0x20e8a4u: goto label_20e8a4;
        case 0x20e8a8u: goto label_20e8a8;
        case 0x20e8acu: goto label_20e8ac;
        case 0x20e8b0u: goto label_20e8b0;
        case 0x20e8b4u: goto label_20e8b4;
        case 0x20e8b8u: goto label_20e8b8;
        case 0x20e8bcu: goto label_20e8bc;
        case 0x20e8c0u: goto label_20e8c0;
        case 0x20e8c4u: goto label_20e8c4;
        case 0x20e8c8u: goto label_20e8c8;
        case 0x20e8ccu: goto label_20e8cc;
        case 0x20e8d0u: goto label_20e8d0;
        case 0x20e8d4u: goto label_20e8d4;
        case 0x20e8d8u: goto label_20e8d8;
        case 0x20e8dcu: goto label_20e8dc;
        case 0x20e8e0u: goto label_20e8e0;
        case 0x20e8e4u: goto label_20e8e4;
        case 0x20e8e8u: goto label_20e8e8;
        case 0x20e8ecu: goto label_20e8ec;
        case 0x20e8f0u: goto label_20e8f0;
        case 0x20e8f4u: goto label_20e8f4;
        case 0x20e8f8u: goto label_20e8f8;
        case 0x20e8fcu: goto label_20e8fc;
        case 0x20e900u: goto label_20e900;
        case 0x20e904u: goto label_20e904;
        case 0x20e908u: goto label_20e908;
        case 0x20e90cu: goto label_20e90c;
        case 0x20e910u: goto label_20e910;
        case 0x20e914u: goto label_20e914;
        case 0x20e918u: goto label_20e918;
        case 0x20e91cu: goto label_20e91c;
        case 0x20e920u: goto label_20e920;
        case 0x20e924u: goto label_20e924;
        case 0x20e928u: goto label_20e928;
        case 0x20e92cu: goto label_20e92c;
        case 0x20e930u: goto label_20e930;
        case 0x20e934u: goto label_20e934;
        case 0x20e938u: goto label_20e938;
        case 0x20e93cu: goto label_20e93c;
        case 0x20e940u: goto label_20e940;
        case 0x20e944u: goto label_20e944;
        case 0x20e948u: goto label_20e948;
        case 0x20e94cu: goto label_20e94c;
        case 0x20e950u: goto label_20e950;
        case 0x20e954u: goto label_20e954;
        case 0x20e958u: goto label_20e958;
        case 0x20e95cu: goto label_20e95c;
        case 0x20e960u: goto label_20e960;
        case 0x20e964u: goto label_20e964;
        case 0x20e968u: goto label_20e968;
        case 0x20e96cu: goto label_20e96c;
        case 0x20e970u: goto label_20e970;
        case 0x20e974u: goto label_20e974;
        case 0x20e978u: goto label_20e978;
        case 0x20e97cu: goto label_20e97c;
        case 0x20e980u: goto label_20e980;
        case 0x20e984u: goto label_20e984;
        case 0x20e988u: goto label_20e988;
        case 0x20e98cu: goto label_20e98c;
        case 0x20e990u: goto label_20e990;
        case 0x20e994u: goto label_20e994;
        case 0x20e998u: goto label_20e998;
        case 0x20e99cu: goto label_20e99c;
        case 0x20e9a0u: goto label_20e9a0;
        case 0x20e9a4u: goto label_20e9a4;
        case 0x20e9a8u: goto label_20e9a8;
        case 0x20e9acu: goto label_20e9ac;
        case 0x20e9b0u: goto label_20e9b0;
        case 0x20e9b4u: goto label_20e9b4;
        case 0x20e9b8u: goto label_20e9b8;
        case 0x20e9bcu: goto label_20e9bc;
        case 0x20e9c0u: goto label_20e9c0;
        case 0x20e9c4u: goto label_20e9c4;
        case 0x20e9c8u: goto label_20e9c8;
        case 0x20e9ccu: goto label_20e9cc;
        case 0x20e9d0u: goto label_20e9d0;
        case 0x20e9d4u: goto label_20e9d4;
        case 0x20e9d8u: goto label_20e9d8;
        case 0x20e9dcu: goto label_20e9dc;
        case 0x20e9e0u: goto label_20e9e0;
        case 0x20e9e4u: goto label_20e9e4;
        case 0x20e9e8u: goto label_20e9e8;
        case 0x20e9ecu: goto label_20e9ec;
        case 0x20e9f0u: goto label_20e9f0;
        case 0x20e9f4u: goto label_20e9f4;
        case 0x20e9f8u: goto label_20e9f8;
        case 0x20e9fcu: goto label_20e9fc;
        case 0x20ea00u: goto label_20ea00;
        case 0x20ea04u: goto label_20ea04;
        case 0x20ea08u: goto label_20ea08;
        case 0x20ea0cu: goto label_20ea0c;
        case 0x20ea10u: goto label_20ea10;
        case 0x20ea14u: goto label_20ea14;
        case 0x20ea18u: goto label_20ea18;
        case 0x20ea1cu: goto label_20ea1c;
        case 0x20ea20u: goto label_20ea20;
        case 0x20ea24u: goto label_20ea24;
        case 0x20ea28u: goto label_20ea28;
        case 0x20ea2cu: goto label_20ea2c;
        case 0x20ea30u: goto label_20ea30;
        case 0x20ea34u: goto label_20ea34;
        case 0x20ea38u: goto label_20ea38;
        case 0x20ea3cu: goto label_20ea3c;
        case 0x20ea40u: goto label_20ea40;
        case 0x20ea44u: goto label_20ea44;
        case 0x20ea48u: goto label_20ea48;
        case 0x20ea4cu: goto label_20ea4c;
        case 0x20ea50u: goto label_20ea50;
        case 0x20ea54u: goto label_20ea54;
        case 0x20ea58u: goto label_20ea58;
        case 0x20ea5cu: goto label_20ea5c;
        case 0x20ea60u: goto label_20ea60;
        case 0x20ea64u: goto label_20ea64;
        case 0x20ea68u: goto label_20ea68;
        case 0x20ea6cu: goto label_20ea6c;
        case 0x20ea70u: goto label_20ea70;
        case 0x20ea74u: goto label_20ea74;
        case 0x20ea78u: goto label_20ea78;
        case 0x20ea7cu: goto label_20ea7c;
        case 0x20ea80u: goto label_20ea80;
        case 0x20ea84u: goto label_20ea84;
        case 0x20ea88u: goto label_20ea88;
        case 0x20ea8cu: goto label_20ea8c;
        case 0x20ea90u: goto label_20ea90;
        case 0x20ea94u: goto label_20ea94;
        case 0x20ea98u: goto label_20ea98;
        case 0x20ea9cu: goto label_20ea9c;
        case 0x20eaa0u: goto label_20eaa0;
        case 0x20eaa4u: goto label_20eaa4;
        default: break;
    }

    ctx->pc = 0x20e400u;

label_20e400:
    // 0x20e400: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x20e400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_20e404:
    // 0x20e404: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x20e404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_20e408:
    // 0x20e408: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x20e408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_20e40c:
    // 0x20e40c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20e40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_20e410:
    // 0x20e410: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20e410u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20e414:
    // 0x20e414: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20e414u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20e418:
    // 0x20e418: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x20e418u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_20e41c:
    // 0x20e41c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x20e41cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_20e420:
    // 0x20e420: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x20e420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20e424:
    // 0x20e424: 0x6200198  bltz        $s1, . + 4 + (0x198 << 2)
label_20e428:
    if (ctx->pc == 0x20E428u) {
        ctx->pc = 0x20E428u;
            // 0x20e428: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x20E42Cu;
        goto label_20e42c;
    }
    ctx->pc = 0x20E424u;
    {
        const bool branch_taken_0x20e424 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x20E428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E424u;
            // 0x20e428: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e424) {
            ctx->pc = 0x20EA88u;
            goto label_20ea88;
        }
    }
    ctx->pc = 0x20E42Cu;
label_20e42c:
    // 0x20e42c: 0x2e21000a  sltiu       $at, $s1, 0xA
    ctx->pc = 0x20e42cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_20e430:
    // 0x20e430: 0x10200194  beqz        $at, . + 4 + (0x194 << 2)
label_20e434:
    if (ctx->pc == 0x20E434u) {
        ctx->pc = 0x20E434u;
            // 0x20e434: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x20E438u;
        goto label_20e438;
    }
    ctx->pc = 0x20E430u;
    {
        const bool branch_taken_0x20e430 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E430u;
            // 0x20e434: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e430) {
            ctx->pc = 0x20EA84u;
            goto label_20ea84;
        }
    }
    ctx->pc = 0x20E438u;
label_20e438:
    // 0x20e438: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x20e438u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_20e43c:
    // 0x20e43c: 0x24a59de0  addiu       $a1, $a1, -0x6220
    ctx->pc = 0x20e43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942176));
label_20e440:
    // 0x20e440: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x20e440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_20e444:
    // 0x20e444: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x20e444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20e448:
    // 0x20e448: 0x600008  jr          $v1
label_20e44c:
    if (ctx->pc == 0x20E44Cu) {
        ctx->pc = 0x20E450u;
        goto label_20e450;
    }
    ctx->pc = 0x20E448u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20E450u: goto label_20e450;
            case 0x20E4ACu: goto label_20e4ac;
            case 0x20E91Cu: goto label_20e91c;
            case 0x20E958u: goto label_20e958;
            case 0x20E9ACu: goto label_20e9ac;
            case 0x20EA08u: goto label_20ea08;
            case 0x20EA84u: goto label_20ea84;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20E450u;
label_20e450:
    // 0x20e450: 0xc0941b0  jal         func_2506C0
label_20e454:
    if (ctx->pc == 0x20E454u) {
        ctx->pc = 0x20E454u;
            // 0x20e454: 0x24040082  addiu       $a0, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->pc = 0x20E458u;
        goto label_20e458;
    }
    ctx->pc = 0x20E450u;
    SET_GPR_U32(ctx, 31, 0x20E458u);
    ctx->pc = 0x20E454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E450u;
            // 0x20e454: 0x24040082  addiu       $a0, $zero, 0x82 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 130));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E458u; }
        if (ctx->pc != 0x20E458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E458u; }
        if (ctx->pc != 0x20E458u) { return; }
    }
    ctx->pc = 0x20E458u;
label_20e458:
    // 0x20e458: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x20e458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
label_20e45c:
    // 0x20e45c: 0xae400680  sw          $zero, 0x680($s2)
    ctx->pc = 0x20e45cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1664), GPR_U32(ctx, 0));
label_20e460:
    // 0x20e460: 0xae4206c4  sw          $v0, 0x6C4($s2)
    ctx->pc = 0x20e460u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1732), GPR_U32(ctx, 2));
label_20e464:
    // 0x20e464: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20e464u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_20e468:
    // 0x20e468: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x20e468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_20e46c:
    // 0x20e46c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20e46cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20e470:
    // 0x20e470: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x20e470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_20e474:
    // 0x20e474: 0x24a59dd0  addiu       $a1, $a1, -0x6230
    ctx->pc = 0x20e474u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942160));
label_20e478:
    // 0x20e478: 0xae4206f0  sw          $v0, 0x6F0($s2)
    ctx->pc = 0x20e478u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1776), GPR_U32(ctx, 2));
label_20e47c:
    // 0x20e47c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x20e47cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20e480:
    // 0x20e480: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x20e480u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_20e484:
    // 0x20e484: 0x320f809  jalr        $t9
label_20e488:
    if (ctx->pc == 0x20E488u) {
        ctx->pc = 0x20E488u;
            // 0x20e488: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E48Cu;
        goto label_20e48c;
    }
    ctx->pc = 0x20E484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20E48Cu);
        ctx->pc = 0x20E488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E484u;
            // 0x20e488: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20E48Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20E48Cu; }
            if (ctx->pc != 0x20E48Cu) { return; }
        }
        }
    }
    ctx->pc = 0x20E48Cu;
label_20e48c:
    // 0x20e48c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x20e48cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20e490:
    // 0x20e490: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x20e490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_20e494:
    // 0x20e494: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20e494u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20e498:
    // 0x20e498: 0x8f3900b8  lw          $t9, 0xB8($t9)
    ctx->pc = 0x20e498u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 184)));
label_20e49c:
    // 0x20e49c: 0x320f809  jalr        $t9
label_20e4a0:
    if (ctx->pc == 0x20E4A0u) {
        ctx->pc = 0x20E4A0u;
            // 0x20e4a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E4A4u;
        goto label_20e4a4;
    }
    ctx->pc = 0x20E49Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20E4A4u);
        ctx->pc = 0x20E4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E49Cu;
            // 0x20e4a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20E4A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20E4A4u; }
            if (ctx->pc != 0x20E4A4u) { return; }
        }
        }
    }
    ctx->pc = 0x20E4A4u;
label_20e4a4:
    // 0x20e4a4: 0x10000178  b           . + 4 + (0x178 << 2)
label_20e4a8:
    if (ctx->pc == 0x20E4A8u) {
        ctx->pc = 0x20E4A8u;
            // 0x20e4a8: 0xa65106ae  sh          $s1, 0x6AE($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1710), (uint16_t)GPR_U32(ctx, 17));
        ctx->pc = 0x20E4ACu;
        goto label_20e4ac;
    }
    ctx->pc = 0x20E4A4u;
    {
        const bool branch_taken_0x20e4a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E4A4u;
            // 0x20e4a8: 0xa65106ae  sh          $s1, 0x6AE($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1710), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e4a4) {
            ctx->pc = 0x20EA88u;
            goto label_20ea88;
        }
    }
    ctx->pc = 0x20E4ACu;
label_20e4ac:
    // 0x20e4ac: 0xa64006b0  sh          $zero, 0x6B0($s2)
    ctx->pc = 0x20e4acu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1712), (uint16_t)GPR_U32(ctx, 0));
label_20e4b0:
    // 0x20e4b0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20e4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20e4b4:
    // 0x20e4b4: 0xa64306b0  sh          $v1, 0x6B0($s2)
    ctx->pc = 0x20e4b4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1712), (uint16_t)GPR_U32(ctx, 3));
label_20e4b8:
    // 0x20e4b8: 0xae4006c4  sw          $zero, 0x6C4($s2)
    ctx->pc = 0x20e4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1732), GPR_U32(ctx, 0));
label_20e4bc:
    // 0x20e4bc: 0x864306b0  lh          $v1, 0x6B0($s2)
    ctx->pc = 0x20e4bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1712)));
label_20e4c0:
    // 0x20e4c0: 0x146000a2  bnez        $v1, . + 4 + (0xA2 << 2)
label_20e4c4:
    if (ctx->pc == 0x20E4C4u) {
        ctx->pc = 0x20E4C4u;
            // 0x20e4c4: 0x24040065  addiu       $a0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->pc = 0x20E4C8u;
        goto label_20e4c8;
    }
    ctx->pc = 0x20E4C0u;
    {
        const bool branch_taken_0x20e4c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E4C0u;
            // 0x20e4c4: 0x24040065  addiu       $a0, $zero, 0x65 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e4c0) {
            ctx->pc = 0x20E74Cu;
            goto label_20e74c;
        }
    }
    ctx->pc = 0x20E4C8u;
label_20e4c8:
    // 0x20e4c8: 0xc0941b0  jal         func_2506C0
label_20e4cc:
    if (ctx->pc == 0x20E4CCu) {
        ctx->pc = 0x20E4D0u;
        goto label_20e4d0;
    }
    ctx->pc = 0x20E4C8u;
    SET_GPR_U32(ctx, 31, 0x20E4D0u);
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E4D0u; }
        if (ctx->pc != 0x20E4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E4D0u; }
        if (ctx->pc != 0x20E4D0u) { return; }
    }
    ctx->pc = 0x20E4D0u;
label_20e4d0:
    // 0x20e4d0: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x20e4d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20e4d4:
    // 0x20e4d4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20e4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_20e4d8:
    // 0x20e4d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20e4d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20e4dc:
    // 0x20e4dc: 0x24a59dd0  addiu       $a1, $a1, -0x6230
    ctx->pc = 0x20e4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942160));
label_20e4e0:
    // 0x20e4e0: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x20e4e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_20e4e4:
    // 0x20e4e4: 0x320f809  jalr        $t9
label_20e4e8:
    if (ctx->pc == 0x20E4E8u) {
        ctx->pc = 0x20E4E8u;
            // 0x20e4e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E4ECu;
        goto label_20e4ec;
    }
    ctx->pc = 0x20E4E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20E4ECu);
        ctx->pc = 0x20E4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E4E4u;
            // 0x20e4e8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20E4ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20E4ECu; }
            if (ctx->pc != 0x20E4ECu) { return; }
        }
        }
    }
    ctx->pc = 0x20E4ECu;
label_20e4ec:
    // 0x20e4ec: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x20e4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_20e4f0:
    // 0x20e4f0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20e4f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20e4f4:
    // 0x20e4f4: 0xc0941c0  jal         func_250700
label_20e4f8:
    if (ctx->pc == 0x20E4F8u) {
        ctx->pc = 0x20E4FCu;
        goto label_20e4fc;
    }
    ctx->pc = 0x20E4F4u;
    SET_GPR_U32(ctx, 31, 0x20E4FCu);
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E4FCu; }
        if (ctx->pc != 0x20E4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E4FCu; }
        if (ctx->pc != 0x20E4FCu) { return; }
    }
    ctx->pc = 0x20E4FCu;
label_20e4fc:
    // 0x20e4fc: 0x24040065  addiu       $a0, $zero, 0x65
    ctx->pc = 0x20e4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_20e500:
    // 0x20e500: 0xc0941b0  jal         func_2506C0
label_20e504:
    if (ctx->pc == 0x20E504u) {
        ctx->pc = 0x20E504u;
            // 0x20e504: 0xae4006a8  sw          $zero, 0x6A8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1704), GPR_U32(ctx, 0));
        ctx->pc = 0x20E508u;
        goto label_20e508;
    }
    ctx->pc = 0x20E500u;
    SET_GPR_U32(ctx, 31, 0x20E508u);
    ctx->pc = 0x20E504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E500u;
            // 0x20e504: 0xae4006a8  sw          $zero, 0x6A8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1704), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E508u; }
        if (ctx->pc != 0x20E508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E508u; }
        if (ctx->pc != 0x20E508u) { return; }
    }
    ctx->pc = 0x20E508u;
label_20e508:
    // 0x20e508: 0x2841005f  slti        $at, $v0, 0x5F
    ctx->pc = 0x20e508u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)95) ? 1 : 0);
label_20e50c:
    // 0x20e50c: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_20e510:
    if (ctx->pc == 0x20E510u) {
        ctx->pc = 0x20E510u;
            // 0x20e510: 0x3c023fc9  lui         $v0, 0x3FC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
        ctx->pc = 0x20E514u;
        goto label_20e514;
    }
    ctx->pc = 0x20E50Cu;
    {
        const bool branch_taken_0x20e50c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E510u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E50Cu;
            // 0x20e510: 0x3c023fc9  lui         $v0, 0x3FC9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e50c) {
            ctx->pc = 0x20E53Cu;
            goto label_20e53c;
        }
    }
    ctx->pc = 0x20E514u;
label_20e514:
    // 0x20e514: 0x3c023fc9  lui         $v0, 0x3FC9
    ctx->pc = 0x20e514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16329 << 16));
label_20e518:
    // 0x20e518: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x20e518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_20e51c:
    // 0x20e51c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20e51cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20e520:
    // 0x20e520: 0xc0941c0  jal         func_250700
label_20e524:
    if (ctx->pc == 0x20E524u) {
        ctx->pc = 0x20E528u;
        goto label_20e528;
    }
    ctx->pc = 0x20E520u;
    SET_GPR_U32(ctx, 31, 0x20E528u);
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E528u; }
        if (ctx->pc != 0x20E528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E528u; }
        if (ctx->pc != 0x20E528u) { return; }
    }
    ctx->pc = 0x20E528u;
label_20e528:
    // 0x20e528: 0x3c023f49  lui         $v0, 0x3F49
    ctx->pc = 0x20e528u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16201 << 16));
label_20e52c:
    // 0x20e52c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x20e52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_20e530:
    // 0x20e530: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20e530u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20e534:
    // 0x20e534: 0x1000000e  b           . + 4 + (0xE << 2)
label_20e538:
    if (ctx->pc == 0x20E538u) {
        ctx->pc = 0x20E538u;
            // 0x20e538: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x20E53Cu;
        goto label_20e53c;
    }
    ctx->pc = 0x20E534u;
    {
        const bool branch_taken_0x20e534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E534u;
            // 0x20e538: 0x46010301  sub.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e534) {
            ctx->pc = 0x20E570u;
            goto label_20e570;
        }
    }
    ctx->pc = 0x20E53Cu;
label_20e53c:
    // 0x20e53c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x20e53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_20e540:
    // 0x20e540: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20e540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20e544:
    // 0x20e544: 0xc0941c0  jal         func_250700
label_20e548:
    if (ctx->pc == 0x20E548u) {
        ctx->pc = 0x20E54Cu;
        goto label_20e54c;
    }
    ctx->pc = 0x20E544u;
    SET_GPR_U32(ctx, 31, 0x20E54Cu);
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E54Cu; }
        if (ctx->pc != 0x20E54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E54Cu; }
        if (ctx->pc != 0x20E54Cu) { return; }
    }
    ctx->pc = 0x20E54Cu;
label_20e54c:
    // 0x20e54c: 0x3c033f49  lui         $v1, 0x3F49
    ctx->pc = 0x20e54cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16201 << 16));
label_20e550:
    // 0x20e550: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x20e550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_20e554:
    // 0x20e554: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x20e554u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_20e558:
    // 0x20e558: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x20e558u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_20e55c:
    // 0x20e55c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x20e55cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_20e560:
    // 0x20e560: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20e560u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20e564:
    // 0x20e564: 0x0  nop
    ctx->pc = 0x20e564u;
    // NOP
label_20e568:
    // 0x20e568: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x20e568u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_20e56c:
    // 0x20e56c: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x20e56cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20e570:
    // 0x20e570: 0xc04c374  jal         func_130DD0
label_20e574:
    if (ctx->pc == 0x20E574u) {
        ctx->pc = 0x20E578u;
        goto label_20e578;
    }
    ctx->pc = 0x20E570u;
    SET_GPR_U32(ctx, 31, 0x20E578u);
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E578u; }
        if (ctx->pc != 0x20E578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E578u; }
        if (ctx->pc != 0x20E578u) { return; }
    }
    ctx->pc = 0x20E578u;
label_20e578:
    // 0x20e578: 0x3c024150  lui         $v0, 0x4150
    ctx->pc = 0x20e578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16720 << 16));
label_20e57c:
    // 0x20e57c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20e57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20e580:
    // 0x20e580: 0xae420694  sw          $v0, 0x694($s2)
    ctx->pc = 0x20e580u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1684), GPR_U32(ctx, 2));
label_20e584:
    // 0x20e584: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x20e584u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20e588:
    // 0x20e588: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x20e588u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_20e58c:
    // 0x20e58c: 0x320f809  jalr        $t9
label_20e590:
    if (ctx->pc == 0x20E590u) {
        ctx->pc = 0x20E590u;
            // 0x20e590: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x20E594u;
        goto label_20e594;
    }
    ctx->pc = 0x20E58Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20E594u);
        ctx->pc = 0x20E590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E58Cu;
            // 0x20e590: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20E594u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20E594u; }
            if (ctx->pc != 0x20E594u) { return; }
        }
        }
    }
    ctx->pc = 0x20E594u;
label_20e594:
    // 0x20e594: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x20e594u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20e598:
    // 0x20e598: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20e598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20e59c:
    // 0x20e59c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x20e59cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_20e5a0:
    // 0x20e5a0: 0x320f809  jalr        $t9
label_20e5a4:
    if (ctx->pc == 0x20E5A4u) {
        ctx->pc = 0x20E5A4u;
            // 0x20e5a4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x20E5A8u;
        goto label_20e5a8;
    }
    ctx->pc = 0x20E5A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20E5A8u);
        ctx->pc = 0x20E5A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E5A0u;
            // 0x20e5a4: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20E5A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20E5A8u; }
            if (ctx->pc != 0x20E5A8u) { return; }
        }
        }
    }
    ctx->pc = 0x20E5A8u;
label_20e5a8:
    // 0x20e5a8: 0x27a30070  addiu       $v1, $sp, 0x70
    ctx->pc = 0x20e5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_20e5ac:
    // 0x20e5ac: 0x27a20080  addiu       $v0, $sp, 0x80
    ctx->pc = 0x20e5acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_20e5b0:
    // 0x20e5b0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x20e5b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_20e5b4:
    // 0x20e5b4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x20e5b4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
label_20e5b8:
    // 0x20e5b8: 0x8e420924  lw          $v0, 0x924($s2)
    ctx->pc = 0x20e5b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2340)));
label_20e5bc:
    // 0x20e5bc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20e5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_20e5c0:
    // 0x20e5c0: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_20e5c4:
    if (ctx->pc == 0x20E5C4u) {
        ctx->pc = 0x20E5C4u;
            // 0x20e5c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E5C8u;
        goto label_20e5c8;
    }
    ctx->pc = 0x20E5C0u;
    {
        const bool branch_taken_0x20e5c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E5C0u;
            // 0x20e5c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e5c0) {
            ctx->pc = 0x20E634u;
            goto label_20e634;
        }
    }
    ctx->pc = 0x20E5C8u;
label_20e5c8:
    // 0x20e5c8: 0xc0941b0  jal         func_2506C0
label_20e5cc:
    if (ctx->pc == 0x20E5CCu) {
        ctx->pc = 0x20E5CCu;
            // 0x20e5cc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x20E5D0u;
        goto label_20e5d0;
    }
    ctx->pc = 0x20E5C8u;
    SET_GPR_U32(ctx, 31, 0x20E5D0u);
    ctx->pc = 0x20E5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E5C8u;
            // 0x20e5cc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E5D0u; }
        if (ctx->pc != 0x20E5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E5D0u; }
        if (ctx->pc != 0x20E5D0u) { return; }
    }
    ctx->pc = 0x20E5D0u;
label_20e5d0:
    // 0x20e5d0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_20e5d4:
    if (ctx->pc == 0x20E5D4u) {
        ctx->pc = 0x20E5D8u;
        goto label_20e5d8;
    }
    ctx->pc = 0x20E5D0u;
    {
        const bool branch_taken_0x20e5d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e5d0) {
            ctx->pc = 0x20E5F8u;
            goto label_20e5f8;
        }
    }
    ctx->pc = 0x20E5D8u;
label_20e5d8:
    // 0x20e5d8: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x20e5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20e5dc:
    // 0x20e5dc: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x20e5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
label_20e5e0:
    // 0x20e5e0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x20e5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_20e5e4:
    // 0x20e5e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20e5e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20e5e8:
    // 0x20e5e8: 0x0  nop
    ctx->pc = 0x20e5e8u;
    // NOP
label_20e5ec:
    // 0x20e5ec: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20e5ecu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20e5f0:
    // 0x20e5f0: 0x10000008  b           . + 4 + (0x8 << 2)
label_20e5f4:
    if (ctx->pc == 0x20E5F4u) {
        ctx->pc = 0x20E5F4u;
            // 0x20e5f4: 0xe7a00074  swc1        $f0, 0x74($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
        ctx->pc = 0x20E5F8u;
        goto label_20e5f8;
    }
    ctx->pc = 0x20E5F0u;
    {
        const bool branch_taken_0x20e5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E5F0u;
            // 0x20e5f4: 0xe7a00074  swc1        $f0, 0x74($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e5f0) {
            ctx->pc = 0x20E614u;
            goto label_20e614;
        }
    }
    ctx->pc = 0x20E5F8u;
label_20e5f8:
    // 0x20e5f8: 0xc7a10074  lwc1        $f1, 0x74($sp)
    ctx->pc = 0x20e5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20e5fc:
    // 0x20e5fc: 0x3c023e49  lui         $v0, 0x3E49
    ctx->pc = 0x20e5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15945 << 16));
label_20e600:
    // 0x20e600: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x20e600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_20e604:
    // 0x20e604: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20e604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20e608:
    // 0x20e608: 0x0  nop
    ctx->pc = 0x20e608u;
    // NOP
label_20e60c:
    // 0x20e60c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x20e60cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_20e610:
    // 0x20e610: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x20e610u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_20e614:
    // 0x20e614: 0xc04c374  jal         func_130DD0
label_20e618:
    if (ctx->pc == 0x20E618u) {
        ctx->pc = 0x20E618u;
            // 0x20e618: 0xc7ac0074  lwc1        $f12, 0x74($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x20E61Cu;
        goto label_20e61c;
    }
    ctx->pc = 0x20E614u;
    SET_GPR_U32(ctx, 31, 0x20E61Cu);
    ctx->pc = 0x20E618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E614u;
            // 0x20e618: 0xc7ac0074  lwc1        $f12, 0x74($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E61Cu; }
        if (ctx->pc != 0x20E61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E61Cu; }
        if (ctx->pc != 0x20E61Cu) { return; }
    }
    ctx->pc = 0x20E61Cu;
label_20e61c:
    // 0x20e61c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x20e61cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20e620:
    // 0x20e620: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20e620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20e624:
    // 0x20e624: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x20e624u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_20e628:
    // 0x20e628: 0x320f809  jalr        $t9
label_20e62c:
    if (ctx->pc == 0x20E62Cu) {
        ctx->pc = 0x20E62Cu;
            // 0x20e62c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x20E630u;
        goto label_20e630;
    }
    ctx->pc = 0x20E628u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20E630u);
        ctx->pc = 0x20E62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E628u;
            // 0x20e62c: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20E630u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20E630u; }
            if (ctx->pc != 0x20E630u) { return; }
        }
        }
    }
    ctx->pc = 0x20E630u;
label_20e630:
    // 0x20e630: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20e630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20e634:
    // 0x20e634: 0xc0835bc  jal         func_20D6F0
label_20e638:
    if (ctx->pc == 0x20E638u) {
        ctx->pc = 0x20E638u;
            // 0x20e638: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x20E63Cu;
        goto label_20e63c;
    }
    ctx->pc = 0x20E634u;
    SET_GPR_U32(ctx, 31, 0x20E63Cu);
    ctx->pc = 0x20E638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E634u;
            // 0x20e638: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D6F0u;
    if (runtime->hasFunction(0x20D6F0u)) {
        auto targetFn = runtime->lookupFunction(0x20D6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E63Cu; }
        if (ctx->pc != 0x20E63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDirVect__9CAquaFishFPf_0x20d6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E63Cu; }
        if (ctx->pc != 0x20E63Cu) { return; }
    }
    ctx->pc = 0x20E63Cu;
label_20e63c:
    // 0x20e63c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x20e63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_20e640:
    // 0x20e640: 0x27a30090  addiu       $v1, $sp, 0x90
    ctx->pc = 0x20e640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_20e644:
    // 0x20e644: 0x2442f940  addiu       $v0, $v0, -0x6C0
    ctx->pc = 0x20e644u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965568));
label_20e648:
    // 0x20e648: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x20e648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_20e64c:
    // 0x20e64c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x20e64cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_20e650:
    // 0x20e650: 0xc041c7a  jal         func_1071E8
label_20e654:
    if (ctx->pc == 0x20E654u) {
        ctx->pc = 0x20E654u;
            // 0x20e654: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->pc = 0x20E658u;
        goto label_20e658;
    }
    ctx->pc = 0x20E650u;
    SET_GPR_U32(ctx, 31, 0x20E658u);
    ctx->pc = 0x20E654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E650u;
            // 0x20e654: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E658u; }
        if (ctx->pc != 0x20E658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E658u; }
        if (ctx->pc != 0x20E658u) { return; }
    }
    ctx->pc = 0x20E658u;
label_20e658:
    // 0x20e658: 0xc7ac0074  lwc1        $f12, 0x74($sp)
    ctx->pc = 0x20e658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_20e65c:
    // 0x20e65c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x20e65cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_20e660:
    // 0x20e660: 0xc041cf6  jal         func_1073D8
label_20e664:
    if (ctx->pc == 0x20E664u) {
        ctx->pc = 0x20E664u;
            // 0x20e664: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E668u;
        goto label_20e668;
    }
    ctx->pc = 0x20E660u;
    SET_GPR_U32(ctx, 31, 0x20E668u);
    ctx->pc = 0x20E664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E660u;
            // 0x20e664: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1073D8u;
    if (runtime->hasFunction(0x1073D8u)) {
        auto targetFn = runtime->lookupFunction(0x1073D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E668u; }
        if (ctx->pc != 0x20E668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0RotMatrixY_0x1073d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E668u; }
        if (ctx->pc != 0x20E668u) { return; }
    }
    ctx->pc = 0x20E668u;
label_20e668:
    // 0x20e668: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x20e668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_20e66c:
    // 0x20e66c: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x20e66cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_20e670:
    // 0x20e670: 0xc041bb0  jal         func_106EC0
label_20e674:
    if (ctx->pc == 0x20E674u) {
        ctx->pc = 0x20E674u;
            // 0x20e674: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x20E678u;
        goto label_20e678;
    }
    ctx->pc = 0x20E670u;
    SET_GPR_U32(ctx, 31, 0x20E678u);
    ctx->pc = 0x20E674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E670u;
            // 0x20e674: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E678u; }
        if (ctx->pc != 0x20E678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E678u; }
        if (ctx->pc != 0x20E678u) { return; }
    }
    ctx->pc = 0x20E678u;
label_20e678:
    // 0x20e678: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x20e678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_20e67c:
    // 0x20e67c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x20e67cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_20e680:
    // 0x20e680: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x20e680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_20e684:
    // 0x20e684: 0xafa3006c  sw          $v1, 0x6C($sp)
    ctx->pc = 0x20e684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 3));
label_20e688:
    // 0x20e688: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20e688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20e68c:
    // 0x20e68c: 0xc041c4a  jal         func_107128
label_20e690:
    if (ctx->pc == 0x20E690u) {
        ctx->pc = 0x20E690u;
            // 0x20e690: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E694u;
        goto label_20e694;
    }
    ctx->pc = 0x20E68Cu;
    SET_GPR_U32(ctx, 31, 0x20E694u);
    ctx->pc = 0x20E690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E68Cu;
            // 0x20e690: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E694u; }
        if (ctx->pc != 0x20E694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E694u; }
        if (ctx->pc != 0x20E694u) { return; }
    }
    ctx->pc = 0x20E694u;
label_20e694:
    // 0x20e694: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x20e694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_20e698:
    // 0x20e698: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x20e698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_20e69c:
    // 0x20e69c: 0xc041c38  jal         func_1070E0
label_20e6a0:
    if (ctx->pc == 0x20E6A0u) {
        ctx->pc = 0x20E6A0u;
            // 0x20e6a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E6A4u;
        goto label_20e6a4;
    }
    ctx->pc = 0x20E69Cu;
    SET_GPR_U32(ctx, 31, 0x20E6A4u);
    ctx->pc = 0x20E6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E69Cu;
            // 0x20e6a0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070E0u;
    if (runtime->hasFunction(0x1070E0u)) {
        auto targetFn = runtime->lookupFunction(0x1070E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E6A4u; }
        if (ctx->pc != 0x20E6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0AddVector_0x1070e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E6A4u; }
        if (ctx->pc != 0x20E6A4u) { return; }
    }
    ctx->pc = 0x20E6A4u;
label_20e6a4:
    // 0x20e6a4: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x20e6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_20e6a8:
    // 0x20e6a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20e6a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20e6ac:
    // 0x20e6ac: 0xc0941c0  jal         func_250700
label_20e6b0:
    if (ctx->pc == 0x20E6B0u) {
        ctx->pc = 0x20E6B4u;
        goto label_20e6b4;
    }
    ctx->pc = 0x20E6ACu;
    SET_GPR_U32(ctx, 31, 0x20E6B4u);
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E6B4u; }
        if (ctx->pc != 0x20E6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E6B4u; }
        if (ctx->pc != 0x20E6B4u) { return; }
    }
    ctx->pc = 0x20E6B4u;
label_20e6b4:
    // 0x20e6b4: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x20e6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_20e6b8:
    // 0x20e6b8: 0x27a30054  addiu       $v1, $sp, 0x54
    ctx->pc = 0x20e6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 84));
label_20e6bc:
    // 0x20e6bc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x20e6bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_20e6c0:
    // 0x20e6c0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x20e6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20e6c4:
    // 0x20e6c4: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x20e6c4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
label_20e6c8:
    // 0x20e6c8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20e6c8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20e6cc:
    // 0x20e6cc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x20e6ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_20e6d0:
    // 0x20e6d0: 0x8e420924  lw          $v0, 0x924($s2)
    ctx->pc = 0x20e6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 2340)));
label_20e6d4:
    // 0x20e6d4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x20e6d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_20e6d8:
    // 0x20e6d8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_20e6dc:
    if (ctx->pc == 0x20E6DCu) {
        ctx->pc = 0x20E6DCu;
            // 0x20e6dc: 0x27a20050  addiu       $v0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x20E6E0u;
        goto label_20e6e0;
    }
    ctx->pc = 0x20E6D8u;
    {
        const bool branch_taken_0x20e6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E6D8u;
            // 0x20e6dc: 0x27a20050  addiu       $v0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e6d8) {
            ctx->pc = 0x20E6FCu;
            goto label_20e6fc;
        }
    }
    ctx->pc = 0x20E6E0u;
label_20e6e0:
    // 0x20e6e0: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x20e6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20e6e4:
    // 0x20e6e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20e6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_20e6e8:
    // 0x20e6e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20e6e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20e6ec:
    // 0x20e6ec: 0x0  nop
    ctx->pc = 0x20e6ecu;
    // NOP
label_20e6f0:
    // 0x20e6f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x20e6f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_20e6f4:
    // 0x20e6f4: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x20e6f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_20e6f8:
    // 0x20e6f8: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x20e6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_20e6fc:
    // 0x20e6fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20e6fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20e700:
    // 0x20e700: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x20e700u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_20e704:
    // 0x20e704: 0x7e420660  sq          $v0, 0x660($s2)
    ctx->pc = 0x20e704u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 1632), GPR_VEC(ctx, 2));
label_20e708:
    // 0x20e708: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x20e708u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20e70c:
    // 0x20e70c: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x20e70cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_20e710:
    // 0x20e710: 0x320f809  jalr        $t9
label_20e714:
    if (ctx->pc == 0x20E714u) {
        ctx->pc = 0x20E714u;
            // 0x20e714: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x20E718u;
        goto label_20e718;
    }
    ctx->pc = 0x20E710u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20E718u);
        ctx->pc = 0x20E714u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E710u;
            // 0x20e714: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20E718u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20E718u; }
            if (ctx->pc != 0x20E718u) { return; }
        }
        }
    }
    ctx->pc = 0x20E718u;
label_20e718:
    // 0x20e718: 0x3c023e23  lui         $v0, 0x3E23
    ctx->pc = 0x20e718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15907 << 16));
label_20e71c:
    // 0x20e71c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x20e71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_20e720:
    // 0x20e720: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20e720u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20e724:
    // 0x20e724: 0xc0835dc  jal         func_20D770
label_20e728:
    if (ctx->pc == 0x20E728u) {
        ctx->pc = 0x20E728u;
            // 0x20e728: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E72Cu;
        goto label_20e72c;
    }
    ctx->pc = 0x20E724u;
    SET_GPR_U32(ctx, 31, 0x20E72Cu);
    ctx->pc = 0x20E728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E724u;
            // 0x20e728: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D770u;
    if (runtime->hasFunction(0x20D770u)) {
        auto targetFn = runtime->lookupFunction(0x20D770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E72Cu; }
        if (ctx->pc != 0x20E72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NormalGetNextVelo__9CAquaFishFf_0x20d770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E72Cu; }
        if (ctx->pc != 0x20E72Cu) { return; }
    }
    ctx->pc = 0x20E72Cu;
label_20e72c:
    // 0x20e72c: 0xc0835fc  jal         func_20D7F0
label_20e730:
    if (ctx->pc == 0x20E730u) {
        ctx->pc = 0x20E730u;
            // 0x20e730: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E734u;
        goto label_20e734;
    }
    ctx->pc = 0x20E72Cu;
    SET_GPR_U32(ctx, 31, 0x20E734u);
    ctx->pc = 0x20E730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E72Cu;
            // 0x20e730: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D7F0u;
    if (runtime->hasFunction(0x20D7F0u)) {
        auto targetFn = runtime->lookupFunction(0x20D7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E734u; }
        if (ctx->pc != 0x20E734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NormalGetNextRotY__9CAquaFishFv_0x20d7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E734u; }
        if (ctx->pc != 0x20E734u) { return; }
    }
    ctx->pc = 0x20E734u;
label_20e734:
    // 0x20e734: 0x3c033e77  lui         $v1, 0x3E77
    ctx->pc = 0x20e734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15991 << 16));
label_20e738:
    // 0x20e738: 0xae4006a8  sw          $zero, 0x6A8($s2)
    ctx->pc = 0x20e738u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1704), GPR_U32(ctx, 0));
label_20e73c:
    // 0x20e73c: 0x346475fa  ori         $a0, $v1, 0x75FA
    ctx->pc = 0x20e73cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)30202);
label_20e740:
    // 0x20e740: 0x3c0341c0  lui         $v1, 0x41C0
    ctx->pc = 0x20e740u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16832 << 16));
label_20e744:
    // 0x20e744: 0xae440690  sw          $a0, 0x690($s2)
    ctx->pc = 0x20e744u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1680), GPR_U32(ctx, 4));
label_20e748:
    // 0x20e748: 0xae430694  sw          $v1, 0x694($s2)
    ctx->pc = 0x20e748u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1684), GPR_U32(ctx, 3));
label_20e74c:
    // 0x20e74c: 0x864406b0  lh          $a0, 0x6B0($s2)
    ctx->pc = 0x20e74cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1712)));
label_20e750:
    // 0x20e750: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x20e750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20e754:
    // 0x20e754: 0x14830055  bne         $a0, $v1, . + 4 + (0x55 << 2)
label_20e758:
    if (ctx->pc == 0x20E758u) {
        ctx->pc = 0x20E75Cu;
        goto label_20e75c;
    }
    ctx->pc = 0x20E754u;
    {
        const bool branch_taken_0x20e754 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x20e754) {
            ctx->pc = 0x20E8ACu;
            goto label_20e8ac;
        }
    }
    ctx->pc = 0x20E75Cu;
label_20e75c:
    // 0x20e75c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x20e75cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20e760:
    // 0x20e760: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20e760u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_20e764:
    // 0x20e764: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20e764u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20e768:
    // 0x20e768: 0x24a59dd0  addiu       $a1, $a1, -0x6230
    ctx->pc = 0x20e768u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942160));
label_20e76c:
    // 0x20e76c: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x20e76cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_20e770:
    // 0x20e770: 0x320f809  jalr        $t9
label_20e774:
    if (ctx->pc == 0x20E774u) {
        ctx->pc = 0x20E774u;
            // 0x20e774: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E778u;
        goto label_20e778;
    }
    ctx->pc = 0x20E770u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20E778u);
        ctx->pc = 0x20E774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E770u;
            // 0x20e774: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20E778u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20E778u; }
            if (ctx->pc != 0x20E778u) { return; }
        }
        }
    }
    ctx->pc = 0x20E778u;
label_20e778:
    // 0x20e778: 0xc0941b0  jal         func_2506C0
label_20e77c:
    if (ctx->pc == 0x20E77Cu) {
        ctx->pc = 0x20E77Cu;
            // 0x20e77c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x20E780u;
        goto label_20e780;
    }
    ctx->pc = 0x20E778u;
    SET_GPR_U32(ctx, 31, 0x20E780u);
    ctx->pc = 0x20E77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E778u;
            // 0x20e77c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E780u; }
        if (ctx->pc != 0x20E780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E780u; }
        if (ctx->pc != 0x20E780u) { return; }
    }
    ctx->pc = 0x20E780u;
label_20e780:
    // 0x20e780: 0xa6420700  sh          $v0, 0x700($s2)
    ctx->pc = 0x20e780u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1792), (uint16_t)GPR_U32(ctx, 2));
label_20e784:
    // 0x20e784: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x20e784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_20e788:
    // 0x20e788: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x20e788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_20e78c:
    // 0x20e78c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20e78cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20e790:
    // 0x20e790: 0xc0941c0  jal         func_250700
label_20e794:
    if (ctx->pc == 0x20E794u) {
        ctx->pc = 0x20E798u;
        goto label_20e798;
    }
    ctx->pc = 0x20E790u;
    SET_GPR_U32(ctx, 31, 0x20E798u);
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E798u; }
        if (ctx->pc != 0x20E798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E798u; }
        if (ctx->pc != 0x20E798u) { return; }
    }
    ctx->pc = 0x20E798u;
label_20e798:
    // 0x20e798: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x20e798u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
label_20e79c:
    // 0x20e79c: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x20e79cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_20e7a0:
    // 0x20e7a0: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x20e7a0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_20e7a4:
    // 0x20e7a4: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x20e7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_20e7a8:
    // 0x20e7a8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20e7a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20e7ac:
    // 0x20e7ac: 0x0  nop
    ctx->pc = 0x20e7acu;
    // NOP
label_20e7b0:
    // 0x20e7b0: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x20e7b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_20e7b4:
    // 0x20e7b4: 0x3c023ca3  lui         $v0, 0x3CA3
    ctx->pc = 0x20e7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
label_20e7b8:
    // 0x20e7b8: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x20e7b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_20e7bc:
    // 0x20e7bc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x20e7bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_20e7c0:
    // 0x20e7c0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20e7c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20e7c4:
    // 0x20e7c4: 0xc0941c0  jal         func_250700
label_20e7c8:
    if (ctx->pc == 0x20E7C8u) {
        ctx->pc = 0x20E7C8u;
            // 0x20e7c8: 0xe6400704  swc1        $f0, 0x704($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1796), bits); }
        ctx->pc = 0x20E7CCu;
        goto label_20e7cc;
    }
    ctx->pc = 0x20E7C4u;
    SET_GPR_U32(ctx, 31, 0x20E7CCu);
    ctx->pc = 0x20E7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E7C4u;
            // 0x20e7c8: 0xe6400704  swc1        $f0, 0x704($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1796), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E7CCu; }
        if (ctx->pc != 0x20E7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E7CCu; }
        if (ctx->pc != 0x20E7CCu) { return; }
    }
    ctx->pc = 0x20E7CCu;
label_20e7cc:
    // 0x20e7cc: 0x3c033c23  lui         $v1, 0x3C23
    ctx->pc = 0x20e7ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15395 << 16));
label_20e7d0:
    // 0x20e7d0: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x20e7d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_20e7d4:
    // 0x20e7d4: 0x3463d70a  ori         $v1, $v1, 0xD70A
    ctx->pc = 0x20e7d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55050);
label_20e7d8:
    // 0x20e7d8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x20e7d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_20e7dc:
    // 0x20e7dc: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20e7dcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20e7e0:
    // 0x20e7e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20e7e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20e7e4:
    // 0x20e7e4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x20e7e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_20e7e8:
    // 0x20e7e8: 0xe6400708  swc1        $f0, 0x708($s2)
    ctx->pc = 0x20e7e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1800), bits); }
label_20e7ec:
    // 0x20e7ec: 0xc0941c0  jal         func_250700
label_20e7f0:
    if (ctx->pc == 0x20E7F0u) {
        ctx->pc = 0x20E7F0u;
            // 0x20e7f0: 0xae400914  sw          $zero, 0x914($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2324), GPR_U32(ctx, 0));
        ctx->pc = 0x20E7F4u;
        goto label_20e7f4;
    }
    ctx->pc = 0x20E7ECu;
    SET_GPR_U32(ctx, 31, 0x20E7F4u);
    ctx->pc = 0x20E7F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E7ECu;
            // 0x20e7f0: 0xae400914  sw          $zero, 0x914($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 2324), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E7F4u; }
        if (ctx->pc != 0x20E7F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E7F4u; }
        if (ctx->pc != 0x20E7F4u) { return; }
    }
    ctx->pc = 0x20E7F4u;
label_20e7f4:
    // 0x20e7f4: 0x3c033df5  lui         $v1, 0x3DF5
    ctx->pc = 0x20e7f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15861 << 16));
label_20e7f8:
    // 0x20e7f8: 0x3c023dcc  lui         $v0, 0x3DCC
    ctx->pc = 0x20e7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15820 << 16));
label_20e7fc:
    // 0x20e7fc: 0x3464c28f  ori         $a0, $v1, 0xC28F
    ctx->pc = 0x20e7fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)49807);
label_20e800:
    // 0x20e800: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x20e800u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_20e804:
    // 0x20e804: 0x3443cccd  ori         $v1, $v0, 0xCCCD
    ctx->pc = 0x20e804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_20e808:
    // 0x20e808: 0x3c023e4c  lui         $v0, 0x3E4C
    ctx->pc = 0x20e808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15948 << 16));
label_20e80c:
    // 0x20e80c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x20e80cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_20e810:
    // 0x20e810: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x20e810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_20e814:
    // 0x20e814: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20e814u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20e818:
    // 0x20e818: 0x0  nop
    ctx->pc = 0x20e818u;
    // NOP
label_20e81c:
    // 0x20e81c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x20e81cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_20e820:
    // 0x20e820: 0xe64006d4  swc1        $f0, 0x6D4($s2)
    ctx->pc = 0x20e820u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1748), bits); }
label_20e824:
    // 0x20e824: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20e824u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20e828:
    // 0x20e828: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x20e828u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20e82c:
    // 0x20e82c: 0x0  nop
    ctx->pc = 0x20e82cu;
    // NOP
label_20e830:
    // 0x20e830: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x20e830u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_20e834:
    // 0x20e834: 0x0  nop
    ctx->pc = 0x20e834u;
    // NOP
label_20e838:
    // 0x20e838: 0x45000006  bc1f        . + 4 + (0x6 << 2)
label_20e83c:
    if (ctx->pc == 0x20E83Cu) {
        ctx->pc = 0x20E83Cu;
            // 0x20e83c: 0xae4006d0  sw          $zero, 0x6D0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1744), GPR_U32(ctx, 0));
        ctx->pc = 0x20E840u;
        goto label_20e840;
    }
    ctx->pc = 0x20E838u;
    {
        const bool branch_taken_0x20e838 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20E83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E838u;
            // 0x20e83c: 0xae4006d0  sw          $zero, 0x6D0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1744), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e838) {
            ctx->pc = 0x20E854u;
            goto label_20e854;
        }
    }
    ctx->pc = 0x20E840u;
label_20e840:
    // 0x20e840: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x20e840u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_20e844:
    // 0x20e844: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20e844u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20e848:
    // 0x20e848: 0x0  nop
    ctx->pc = 0x20e848u;
    // NOP
label_20e84c:
    // 0x20e84c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x20e84cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_20e850:
    // 0x20e850: 0xe64006d0  swc1        $f0, 0x6D0($s2)
    ctx->pc = 0x20e850u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1744), bits); }
label_20e854:
    // 0x20e854: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x20e854u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_20e858:
    // 0x20e858: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x20e858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_20e85c:
    // 0x20e85c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20e85cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20e860:
    // 0x20e860: 0xc0941c0  jal         func_250700
label_20e864:
    if (ctx->pc == 0x20E864u) {
        ctx->pc = 0x20E868u;
        goto label_20e868;
    }
    ctx->pc = 0x20E860u;
    SET_GPR_U32(ctx, 31, 0x20E868u);
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E868u; }
        if (ctx->pc != 0x20E868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E868u; }
        if (ctx->pc != 0x20E868u) { return; }
    }
    ctx->pc = 0x20E868u;
label_20e868:
    // 0x20e868: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x20e868u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
label_20e86c:
    // 0x20e86c: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x20e86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_20e870:
    // 0x20e870: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x20e870u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
label_20e874:
    // 0x20e874: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20e874u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20e878:
    // 0x20e878: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20e878u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20e87c:
    // 0x20e87c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x20e87cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_20e880:
    // 0x20e880: 0xc0941c0  jal         func_250700
label_20e884:
    if (ctx->pc == 0x20E884u) {
        ctx->pc = 0x20E884u;
            // 0x20e884: 0xe640070c  swc1        $f0, 0x70C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1804), bits); }
        ctx->pc = 0x20E888u;
        goto label_20e888;
    }
    ctx->pc = 0x20E880u;
    SET_GPR_U32(ctx, 31, 0x20E888u);
    ctx->pc = 0x20E884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E880u;
            // 0x20e884: 0xe640070c  swc1        $f0, 0x70C($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1804), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E888u; }
        if (ctx->pc != 0x20E888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E888u; }
        if (ctx->pc != 0x20E888u) { return; }
    }
    ctx->pc = 0x20E888u;
label_20e888:
    // 0x20e888: 0x3c044248  lui         $a0, 0x4248
    ctx->pc = 0x20e888u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16968 << 16));
label_20e88c:
    // 0x20e88c: 0x3c034020  lui         $v1, 0x4020
    ctx->pc = 0x20e88cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16416 << 16));
label_20e890:
    // 0x20e890: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x20e890u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_20e894:
    // 0x20e894: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20e894u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20e898:
    // 0x20e898: 0x0  nop
    ctx->pc = 0x20e898u;
    // NOP
label_20e89c:
    // 0x20e89c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x20e89cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_20e8a0:
    // 0x20e8a0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x20e8a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_20e8a4:
    // 0x20e8a4: 0xe6400694  swc1        $f0, 0x694($s2)
    ctx->pc = 0x20e8a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1684), bits); }
label_20e8a8:
    // 0x20e8a8: 0xae4006a8  sw          $zero, 0x6A8($s2)
    ctx->pc = 0x20e8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1704), GPR_U32(ctx, 0));
label_20e8ac:
    // 0x20e8ac: 0x864406b0  lh          $a0, 0x6B0($s2)
    ctx->pc = 0x20e8acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1712)));
label_20e8b0:
    // 0x20e8b0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20e8b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20e8b4:
    // 0x20e8b4: 0x14830073  bne         $a0, $v1, . + 4 + (0x73 << 2)
label_20e8b8:
    if (ctx->pc == 0x20E8B8u) {
        ctx->pc = 0x20E8BCu;
        goto label_20e8bc;
    }
    ctx->pc = 0x20E8B4u;
    {
        const bool branch_taken_0x20e8b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x20e8b4) {
            ctx->pc = 0x20EA84u;
            goto label_20ea84;
        }
    }
    ctx->pc = 0x20E8BCu;
label_20e8bc:
    // 0x20e8bc: 0xa64006c0  sh          $zero, 0x6C0($s2)
    ctx->pc = 0x20e8bcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1728), (uint16_t)GPR_U32(ctx, 0));
label_20e8c0:
    // 0x20e8c0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20e8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_20e8c4:
    // 0x20e8c4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x20e8c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_20e8c8:
    // 0x20e8c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20e8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20e8cc:
    // 0x20e8cc: 0x24a59dd0  addiu       $a1, $a1, -0x6230
    ctx->pc = 0x20e8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942160));
label_20e8d0:
    // 0x20e8d0: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x20e8d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_20e8d4:
    // 0x20e8d4: 0x320f809  jalr        $t9
label_20e8d8:
    if (ctx->pc == 0x20E8D8u) {
        ctx->pc = 0x20E8D8u;
            // 0x20e8d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E8DCu;
        goto label_20e8dc;
    }
    ctx->pc = 0x20E8D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20E8DCu);
        ctx->pc = 0x20E8D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E8D4u;
            // 0x20e8d8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20E8DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20E8DCu; }
            if (ctx->pc != 0x20E8DCu) { return; }
        }
        }
    }
    ctx->pc = 0x20E8DCu;
label_20e8dc:
    // 0x20e8dc: 0x3c024220  lui         $v0, 0x4220
    ctx->pc = 0x20e8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16928 << 16));
label_20e8e0:
    // 0x20e8e0: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20e8e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20e8e4:
    // 0x20e8e4: 0xc0941c0  jal         func_250700
label_20e8e8:
    if (ctx->pc == 0x20E8E8u) {
        ctx->pc = 0x20E8ECu;
        goto label_20e8ec;
    }
    ctx->pc = 0x20E8E4u;
    SET_GPR_U32(ctx, 31, 0x20E8ECu);
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E8ECu; }
        if (ctx->pc != 0x20E8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E8ECu; }
        if (ctx->pc != 0x20E8ECu) { return; }
    }
    ctx->pc = 0x20E8ECu;
label_20e8ec:
    // 0x20e8ec: 0xae4006a8  sw          $zero, 0x6A8($s2)
    ctx->pc = 0x20e8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1704), GPR_U32(ctx, 0));
label_20e8f0:
    // 0x20e8f0: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x20e8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
label_20e8f4:
    // 0x20e8f4: 0xae420694  sw          $v0, 0x694($s2)
    ctx->pc = 0x20e8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1684), GPR_U32(ctx, 2));
label_20e8f8:
    // 0x20e8f8: 0x82420922  lb          $v0, 0x922($s2)
    ctx->pc = 0x20e8f8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 2338)));
label_20e8fc:
    // 0x20e8fc: 0x28420008  slti        $v0, $v0, 0x8
    ctx->pc = 0x20e8fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_20e900:
    // 0x20e900: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_20e904:
    if (ctx->pc == 0x20E904u) {
        ctx->pc = 0x20E904u;
            // 0x20e904: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E908u;
        goto label_20e908;
    }
    ctx->pc = 0x20E900u;
    {
        const bool branch_taken_0x20e900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20E904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E900u;
            // 0x20e904: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e900) {
            ctx->pc = 0x20E90Cu;
            goto label_20e90c;
        }
    }
    ctx->pc = 0x20E908u;
label_20e908:
    // 0x20e908: 0xa2400922  sb          $zero, 0x922($s2)
    ctx->pc = 0x20e908u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2338), (uint8_t)GPR_U32(ctx, 0));
label_20e90c:
    // 0x20e90c: 0xc0836e0  jal         func_20DB80
label_20e910:
    if (ctx->pc == 0x20E910u) {
        ctx->pc = 0x20E914u;
        goto label_20e914;
    }
    ctx->pc = 0x20E90Cu;
    SET_GPR_U32(ctx, 31, 0x20E914u);
    ctx->pc = 0x20DB80u;
    if (runtime->hasFunction(0x20DB80u)) {
        auto targetFn = runtime->lookupFunction(0x20DB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E914u; }
        if (ctx->pc != 0x20E914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NextRootNormal__9CAquaFishFv_0x20db80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E914u; }
        if (ctx->pc != 0x20E914u) { return; }
    }
    ctx->pc = 0x20E914u;
label_20e914:
    // 0x20e914: 0x1000005b  b           . + 4 + (0x5B << 2)
label_20e918:
    if (ctx->pc == 0x20E918u) {
        ctx->pc = 0x20E91Cu;
        goto label_20e91c;
    }
    ctx->pc = 0x20E914u;
    {
        const bool branch_taken_0x20e914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e914) {
            ctx->pc = 0x20EA84u;
            goto label_20ea84;
        }
    }
    ctx->pc = 0x20E91Cu;
label_20e91c:
    // 0x20e91c: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x20e91cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_20e920:
    // 0x20e920: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x20e920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20e924:
    // 0x20e924: 0xc0941b0  jal         func_2506C0
label_20e928:
    if (ctx->pc == 0x20E928u) {
        ctx->pc = 0x20E928u;
            // 0x20e928: 0x7e420660  sq          $v0, 0x660($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 1632), GPR_VEC(ctx, 2));
        ctx->pc = 0x20E92Cu;
        goto label_20e92c;
    }
    ctx->pc = 0x20E924u;
    SET_GPR_U32(ctx, 31, 0x20E92Cu);
    ctx->pc = 0x20E928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E924u;
            // 0x20e928: 0x7e420660  sq          $v0, 0x660($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 1632), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E92Cu; }
        if (ctx->pc != 0x20E92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E92Cu; }
        if (ctx->pc != 0x20E92Cu) { return; }
    }
    ctx->pc = 0x20E92Cu;
label_20e92c:
    // 0x20e92c: 0x3c033f33  lui         $v1, 0x3F33
    ctx->pc = 0x20e92cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16179 << 16));
label_20e930:
    // 0x20e930: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x20e930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_20e934:
    // 0x20e934: 0x34643333  ori         $a0, $v1, 0x3333
    ctx->pc = 0x20e934u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)13107);
label_20e938:
    // 0x20e938: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x20e938u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_20e93c:
    // 0x20e93c: 0x652823  subu        $a1, $v1, $a1
    ctx->pc = 0x20e93cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_20e940:
    // 0x20e940: 0x52840  sll         $a1, $a1, 1
    ctx->pc = 0x20e940u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_20e944:
    // 0x20e944: 0x3c034170  lui         $v1, 0x4170
    ctx->pc = 0x20e944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16752 << 16));
label_20e948:
    // 0x20e948: 0xae4506c4  sw          $a1, 0x6C4($s2)
    ctx->pc = 0x20e948u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1732), GPR_U32(ctx, 5));
label_20e94c:
    // 0x20e94c: 0xae4406f0  sw          $a0, 0x6F0($s2)
    ctx->pc = 0x20e94cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1776), GPR_U32(ctx, 4));
label_20e950:
    // 0x20e950: 0x1000004c  b           . + 4 + (0x4C << 2)
label_20e954:
    if (ctx->pc == 0x20E954u) {
        ctx->pc = 0x20E954u;
            // 0x20e954: 0xae430694  sw          $v1, 0x694($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1684), GPR_U32(ctx, 3));
        ctx->pc = 0x20E958u;
        goto label_20e958;
    }
    ctx->pc = 0x20E950u;
    {
        const bool branch_taken_0x20e950 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E950u;
            // 0x20e954: 0xae430694  sw          $v1, 0x694($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1684), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e950) {
            ctx->pc = 0x20EA84u;
            goto label_20ea84;
        }
    }
    ctx->pc = 0x20E958u;
label_20e958:
    // 0x20e958: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x20e958u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20e95c:
    // 0x20e95c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20e95cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_20e960:
    // 0x20e960: 0x24a59dc0  addiu       $a1, $a1, -0x6240
    ctx->pc = 0x20e960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942144));
label_20e964:
    // 0x20e964: 0x8f3900b0  lw          $t9, 0xB0($t9)
    ctx->pc = 0x20e964u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 176)));
label_20e968:
    // 0x20e968: 0x320f809  jalr        $t9
label_20e96c:
    if (ctx->pc == 0x20E96Cu) {
        ctx->pc = 0x20E96Cu;
            // 0x20e96c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20E970u;
        goto label_20e970;
    }
    ctx->pc = 0x20E968u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20E970u);
        ctx->pc = 0x20E96Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E968u;
            // 0x20e96c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20E970u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20E970u; }
            if (ctx->pc != 0x20E970u) { return; }
        }
        }
    }
    ctx->pc = 0x20E970u;
label_20e970:
    // 0x20e970: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x20e970u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
label_20e974:
    // 0x20e974: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20e974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20e978:
    // 0x20e978: 0xc0835fc  jal         func_20D7F0
label_20e97c:
    if (ctx->pc == 0x20E97Cu) {
        ctx->pc = 0x20E97Cu;
            // 0x20e97c: 0x7e420660  sq          $v0, 0x660($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 1632), GPR_VEC(ctx, 2));
        ctx->pc = 0x20E980u;
        goto label_20e980;
    }
    ctx->pc = 0x20E978u;
    SET_GPR_U32(ctx, 31, 0x20E980u);
    ctx->pc = 0x20E97Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E978u;
            // 0x20e97c: 0x7e420660  sq          $v0, 0x660($s2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 18), 1632), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D7F0u;
    if (runtime->hasFunction(0x20D7F0u)) {
        auto targetFn = runtime->lookupFunction(0x20D7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E980u; }
        if (ctx->pc != 0x20E980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NormalGetNextRotY__9CAquaFishFv_0x20d7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E980u; }
        if (ctx->pc != 0x20E980u) { return; }
    }
    ctx->pc = 0x20E980u;
label_20e980:
    // 0x20e980: 0x3c023e06  lui         $v0, 0x3E06
    ctx->pc = 0x20e980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15878 << 16));
label_20e984:
    // 0x20e984: 0xae4006a8  sw          $zero, 0x6A8($s2)
    ctx->pc = 0x20e984u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1704), GPR_U32(ctx, 0));
label_20e988:
    // 0x20e988: 0x34430a92  ori         $v1, $v0, 0xA92
    ctx->pc = 0x20e988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2706);
label_20e98c:
    // 0x20e98c: 0x3c0241c0  lui         $v0, 0x41C0
    ctx->pc = 0x20e98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16832 << 16));
label_20e990:
    // 0x20e990: 0xae430690  sw          $v1, 0x690($s2)
    ctx->pc = 0x20e990u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1680), GPR_U32(ctx, 3));
label_20e994:
    // 0x20e994: 0xae420694  sw          $v0, 0x694($s2)
    ctx->pc = 0x20e994u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1684), GPR_U32(ctx, 2));
label_20e998:
    // 0x20e998: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x20e998u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_20e99c:
    // 0x20e99c: 0xc083bd4  jal         func_20EF50
label_20e9a0:
    if (ctx->pc == 0x20E9A0u) {
        ctx->pc = 0x20E9A0u;
            // 0x20e9a0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x20E9A4u;
        goto label_20e9a4;
    }
    ctx->pc = 0x20E99Cu;
    SET_GPR_U32(ctx, 31, 0x20E9A4u);
    ctx->pc = 0x20E9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E99Cu;
            // 0x20e9a0: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20EF50u;
    if (runtime->hasFunction(0x20EF50u)) {
        auto targetFn = runtime->lookupFunction(0x20EF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E9A4u; }
        if (ctx->pc != 0x20E9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartFishEffect__12CAquaFishEffFi_0x20ef50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E9A4u; }
        if (ctx->pc != 0x20E9A4u) { return; }
    }
    ctx->pc = 0x20E9A4u;
label_20e9a4:
    // 0x20e9a4: 0x10000037  b           . + 4 + (0x37 << 2)
label_20e9a8:
    if (ctx->pc == 0x20E9A8u) {
        ctx->pc = 0x20E9A8u;
            // 0x20e9a8: 0xa6400920  sh          $zero, 0x920($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2336), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x20E9ACu;
        goto label_20e9ac;
    }
    ctx->pc = 0x20E9A4u;
    {
        const bool branch_taken_0x20e9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E9A4u;
            // 0x20e9a8: 0xa6400920  sh          $zero, 0x920($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 2336), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e9a4) {
            ctx->pc = 0x20EA84u;
            goto label_20ea84;
        }
    }
    ctx->pc = 0x20E9ACu;
label_20e9ac:
    // 0x20e9ac: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_20e9b0:
    if (ctx->pc == 0x20E9B0u) {
        ctx->pc = 0x20E9B4u;
        goto label_20e9b4;
    }
    ctx->pc = 0x20E9ACu;
    {
        const bool branch_taken_0x20e9ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x20e9ac) {
            ctx->pc = 0x20E9C4u;
            goto label_20e9c4;
        }
    }
    ctx->pc = 0x20E9B4u;
label_20e9b4:
    // 0x20e9b4: 0x86020018  lh          $v0, 0x18($s0)
    ctx->pc = 0x20e9b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_20e9b8:
    // 0x20e9b8: 0xa64206c8  sh          $v0, 0x6C8($s2)
    ctx->pc = 0x20e9b8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1736), (uint16_t)GPR_U32(ctx, 2));
label_20e9bc:
    // 0x20e9bc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x20e9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_20e9c0:
    // 0x20e9c0: 0xae4206cc  sw          $v0, 0x6CC($s2)
    ctx->pc = 0x20e9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1740), GPR_U32(ctx, 2));
label_20e9c4:
    // 0x20e9c4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_20e9c8:
    if (ctx->pc == 0x20E9C8u) {
        ctx->pc = 0x20E9C8u;
            // 0x20e9c8: 0x2404012c  addiu       $a0, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->pc = 0x20E9CCu;
        goto label_20e9cc;
    }
    ctx->pc = 0x20E9C4u;
    {
        const bool branch_taken_0x20e9c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E9C4u;
            // 0x20e9c8: 0x2404012c  addiu       $a0, $zero, 0x12C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e9c4) {
            ctx->pc = 0x20E9D8u;
            goto label_20e9d8;
        }
    }
    ctx->pc = 0x20E9CCu;
label_20e9cc:
    // 0x20e9cc: 0x864206c8  lh          $v0, 0x6C8($s2)
    ctx->pc = 0x20e9ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 1736)));
label_20e9d0:
    // 0x20e9d0: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
label_20e9d4:
    if (ctx->pc == 0x20E9D4u) {
        ctx->pc = 0x20E9D8u;
        goto label_20e9d8;
    }
    ctx->pc = 0x20E9D0u;
    {
        const bool branch_taken_0x20e9d0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x20e9d0) {
            ctx->pc = 0x20E9F0u;
            goto label_20e9f0;
        }
    }
    ctx->pc = 0x20E9D8u;
label_20e9d8:
    // 0x20e9d8: 0xa64006b0  sh          $zero, 0x6B0($s2)
    ctx->pc = 0x20e9d8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1712), (uint16_t)GPR_U32(ctx, 0));
label_20e9dc:
    // 0x20e9dc: 0xc0941b0  jal         func_2506C0
label_20e9e0:
    if (ctx->pc == 0x20E9E0u) {
        ctx->pc = 0x20E9E0u;
            // 0x20e9e0: 0x24110006  addiu       $s1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x20E9E4u;
        goto label_20e9e4;
    }
    ctx->pc = 0x20E9DCu;
    SET_GPR_U32(ctx, 31, 0x20E9E4u);
    ctx->pc = 0x20E9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E9DCu;
            // 0x20e9e0: 0x24110006  addiu       $s1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E9E4u; }
        if (ctx->pc != 0x20E9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E9E4u; }
        if (ctx->pc != 0x20E9E4u) { return; }
    }
    ctx->pc = 0x20E9E4u;
label_20e9e4:
    // 0x20e9e4: 0x2443012c  addiu       $v1, $v0, 0x12C
    ctx->pc = 0x20e9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 300));
label_20e9e8:
    // 0x20e9e8: 0x10000026  b           . + 4 + (0x26 << 2)
label_20e9ec:
    if (ctx->pc == 0x20E9ECu) {
        ctx->pc = 0x20E9ECu;
            // 0x20e9ec: 0xae4306a8  sw          $v1, 0x6A8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1704), GPR_U32(ctx, 3));
        ctx->pc = 0x20E9F0u;
        goto label_20e9f0;
    }
    ctx->pc = 0x20E9E8u;
    {
        const bool branch_taken_0x20e9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20E9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20E9E8u;
            // 0x20e9ec: 0xae4306a8  sw          $v1, 0x6A8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1704), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20e9e8) {
            ctx->pc = 0x20EA84u;
            goto label_20ea84;
        }
    }
    ctx->pc = 0x20E9F0u;
label_20e9f0:
    // 0x20e9f0: 0x240400d2  addiu       $a0, $zero, 0xD2
    ctx->pc = 0x20e9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 210));
label_20e9f4:
    // 0x20e9f4: 0xc0941b0  jal         func_2506C0
label_20e9f8:
    if (ctx->pc == 0x20E9F8u) {
        ctx->pc = 0x20E9F8u;
            // 0x20e9f8: 0xa64006b0  sh          $zero, 0x6B0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1712), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x20E9FCu;
        goto label_20e9fc;
    }
    ctx->pc = 0x20E9F4u;
    SET_GPR_U32(ctx, 31, 0x20E9FCu);
    ctx->pc = 0x20E9F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20E9F4u;
            // 0x20e9f8: 0xa64006b0  sh          $zero, 0x6B0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 1712), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E9FCu; }
        if (ctx->pc != 0x20E9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20E9FCu; }
        if (ctx->pc != 0x20E9FCu) { return; }
    }
    ctx->pc = 0x20E9FCu;
label_20e9fc:
    // 0x20e9fc: 0x24430096  addiu       $v1, $v0, 0x96
    ctx->pc = 0x20e9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 150));
label_20ea00:
    // 0x20ea00: 0x10000020  b           . + 4 + (0x20 << 2)
label_20ea04:
    if (ctx->pc == 0x20EA04u) {
        ctx->pc = 0x20EA04u;
            // 0x20ea04: 0xae4306a8  sw          $v1, 0x6A8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1704), GPR_U32(ctx, 3));
        ctx->pc = 0x20EA08u;
        goto label_20ea08;
    }
    ctx->pc = 0x20EA00u;
    {
        const bool branch_taken_0x20ea00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20EA00u;
            // 0x20ea04: 0xae4306a8  sw          $v1, 0x6A8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 1704), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ea00) {
            ctx->pc = 0x20EA84u;
            goto label_20ea84;
        }
    }
    ctx->pc = 0x20EA08u;
label_20ea08:
    // 0x20ea08: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x20ea08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_20ea0c:
    // 0x20ea0c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20ea0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20ea10:
    // 0x20ea10: 0xc0941c0  jal         func_250700
label_20ea14:
    if (ctx->pc == 0x20EA14u) {
        ctx->pc = 0x20EA18u;
        goto label_20ea18;
    }
    ctx->pc = 0x20EA10u;
    SET_GPR_U32(ctx, 31, 0x20EA18u);
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EA18u; }
        if (ctx->pc != 0x20EA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EA18u; }
        if (ctx->pc != 0x20EA18u) { return; }
    }
    ctx->pc = 0x20EA18u;
label_20ea18:
    // 0x20ea18: 0x3c0341f0  lui         $v1, 0x41F0
    ctx->pc = 0x20ea18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16880 << 16));
label_20ea1c:
    // 0x20ea1c: 0x3c0241d8  lui         $v0, 0x41D8
    ctx->pc = 0x20ea1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16856 << 16));
label_20ea20:
    // 0x20ea20: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20ea20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20ea24:
    // 0x20ea24: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20ea24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20ea28:
    // 0x20ea28: 0xc0941c0  jal         func_250700
label_20ea2c:
    if (ctx->pc == 0x20EA2Cu) {
        ctx->pc = 0x20EA2Cu;
            // 0x20ea2c: 0x46010501  sub.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x20EA30u;
        goto label_20ea30;
    }
    ctx->pc = 0x20EA28u;
    SET_GPR_U32(ctx, 31, 0x20EA30u);
    ctx->pc = 0x20EA2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20EA28u;
            // 0x20ea2c: 0x46010501  sub.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EA30u; }
        if (ctx->pc != 0x20EA30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EA30u; }
        if (ctx->pc != 0x20EA30u) { return; }
    }
    ctx->pc = 0x20EA30u;
label_20ea30:
    // 0x20ea30: 0x3c034188  lui         $v1, 0x4188
    ctx->pc = 0x20ea30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16776 << 16));
label_20ea34:
    // 0x20ea34: 0x3c024208  lui         $v0, 0x4208
    ctx->pc = 0x20ea34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16904 << 16));
label_20ea38:
    // 0x20ea38: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x20ea38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20ea3c:
    // 0x20ea3c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20ea3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20ea40:
    // 0x20ea40: 0xc0941c0  jal         func_250700
label_20ea44:
    if (ctx->pc == 0x20EA44u) {
        ctx->pc = 0x20EA44u;
            // 0x20ea44: 0x46000d40  add.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x20EA48u;
        goto label_20ea48;
    }
    ctx->pc = 0x20EA40u;
    SET_GPR_U32(ctx, 31, 0x20EA48u);
    ctx->pc = 0x20EA44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20EA40u;
            // 0x20ea44: 0x46000d40  add.s       $f21, $f1, $f0 (Delay Slot)
        ctx->f[21] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x250700u;
    if (runtime->hasFunction(0x250700u)) {
        auto targetFn = runtime->lookupFunction(0x250700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EA48u; }
        if (ctx->pc != 0x20EA48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandF__Ff_0x250700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EA48u; }
        if (ctx->pc != 0x20EA48u) { return; }
    }
    ctx->pc = 0x20EA48u;
label_20ea48:
    // 0x20ea48: 0x3c024188  lui         $v0, 0x4188
    ctx->pc = 0x20ea48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16776 << 16));
label_20ea4c:
    // 0x20ea4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20ea4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20ea50:
    // 0x20ea50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20ea50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20ea54:
    // 0x20ea54: 0xe6540660  swc1        $f20, 0x660($s2)
    ctx->pc = 0x20ea54u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1632), bits); }
label_20ea58:
    // 0x20ea58: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x20ea58u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_20ea5c:
    // 0x20ea5c: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x20ea5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_20ea60:
    // 0x20ea60: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x20ea60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_20ea64:
    // 0x20ea64: 0xe6550664  swc1        $f21, 0x664($s2)
    ctx->pc = 0x20ea64u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1636), bits); }
label_20ea68:
    // 0x20ea68: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20ea68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20ea6c:
    // 0x20ea6c: 0xc0835dc  jal         func_20D770
label_20ea70:
    if (ctx->pc == 0x20EA70u) {
        ctx->pc = 0x20EA70u;
            // 0x20ea70: 0xe6400668  swc1        $f0, 0x668($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1640), bits); }
        ctx->pc = 0x20EA74u;
        goto label_20ea74;
    }
    ctx->pc = 0x20EA6Cu;
    SET_GPR_U32(ctx, 31, 0x20EA74u);
    ctx->pc = 0x20EA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20EA6Cu;
            // 0x20ea70: 0xe6400668  swc1        $f0, 0x668($s2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 1640), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x20D770u;
    if (runtime->hasFunction(0x20D770u)) {
        auto targetFn = runtime->lookupFunction(0x20D770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EA74u; }
        if (ctx->pc != 0x20EA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NormalGetNextVelo__9CAquaFishFf_0x20d770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20EA74u; }
        if (ctx->pc != 0x20EA74u) { return; }
    }
    ctx->pc = 0x20EA74u;
label_20ea74:
    // 0x20ea74: 0x3c0441c0  lui         $a0, 0x41C0
    ctx->pc = 0x20ea74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16832 << 16));
label_20ea78:
    // 0x20ea78: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x20ea78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20ea7c:
    // 0x20ea7c: 0xae440694  sw          $a0, 0x694($s2)
    ctx->pc = 0x20ea7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 1684), GPR_U32(ctx, 4));
label_20ea80:
    // 0x20ea80: 0xa64306c0  sh          $v1, 0x6C0($s2)
    ctx->pc = 0x20ea80u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1728), (uint16_t)GPR_U32(ctx, 3));
label_20ea84:
    // 0x20ea84: 0xa65106ae  sh          $s1, 0x6AE($s2)
    ctx->pc = 0x20ea84u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 1710), (uint16_t)GPR_U32(ctx, 17));
label_20ea88:
    // 0x20ea88: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20ea88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_20ea8c:
    // 0x20ea8c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x20ea8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_20ea90:
    // 0x20ea90: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x20ea90u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20ea94:
    // 0x20ea94: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x20ea94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20ea98:
    // 0x20ea98: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20ea98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20ea9c:
    // 0x20ea9c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20ea9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20eaa0:
    // 0x20eaa0: 0x3e00008  jr          $ra
label_20eaa4:
    if (ctx->pc == 0x20EAA4u) {
        ctx->pc = 0x20EAA4u;
            // 0x20eaa4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x20EAA8u;
        goto label_fallthrough_0x20eaa0;
    }
    ctx->pc = 0x20EAA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20EAA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20EAA0u;
            // 0x20eaa4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x20eaa0:
    ctx->pc = 0x20EAA8u;
}
