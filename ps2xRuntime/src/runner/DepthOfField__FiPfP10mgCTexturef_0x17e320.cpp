#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DepthOfField__FiPfP10mgCTexturef
// Address: 0x17e320 - 0x17ea5c
void DepthOfField__FiPfP10mgCTexturef_0x17e320(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DepthOfField__FiPfP10mgCTexturef_0x17e320");
#endif

    switch (ctx->pc) {
        case 0x17e320u: goto label_17e320;
        case 0x17e324u: goto label_17e324;
        case 0x17e328u: goto label_17e328;
        case 0x17e32cu: goto label_17e32c;
        case 0x17e330u: goto label_17e330;
        case 0x17e334u: goto label_17e334;
        case 0x17e338u: goto label_17e338;
        case 0x17e33cu: goto label_17e33c;
        case 0x17e340u: goto label_17e340;
        case 0x17e344u: goto label_17e344;
        case 0x17e348u: goto label_17e348;
        case 0x17e34cu: goto label_17e34c;
        case 0x17e350u: goto label_17e350;
        case 0x17e354u: goto label_17e354;
        case 0x17e358u: goto label_17e358;
        case 0x17e35cu: goto label_17e35c;
        case 0x17e360u: goto label_17e360;
        case 0x17e364u: goto label_17e364;
        case 0x17e368u: goto label_17e368;
        case 0x17e36cu: goto label_17e36c;
        case 0x17e370u: goto label_17e370;
        case 0x17e374u: goto label_17e374;
        case 0x17e378u: goto label_17e378;
        case 0x17e37cu: goto label_17e37c;
        case 0x17e380u: goto label_17e380;
        case 0x17e384u: goto label_17e384;
        case 0x17e388u: goto label_17e388;
        case 0x17e38cu: goto label_17e38c;
        case 0x17e390u: goto label_17e390;
        case 0x17e394u: goto label_17e394;
        case 0x17e398u: goto label_17e398;
        case 0x17e39cu: goto label_17e39c;
        case 0x17e3a0u: goto label_17e3a0;
        case 0x17e3a4u: goto label_17e3a4;
        case 0x17e3a8u: goto label_17e3a8;
        case 0x17e3acu: goto label_17e3ac;
        case 0x17e3b0u: goto label_17e3b0;
        case 0x17e3b4u: goto label_17e3b4;
        case 0x17e3b8u: goto label_17e3b8;
        case 0x17e3bcu: goto label_17e3bc;
        case 0x17e3c0u: goto label_17e3c0;
        case 0x17e3c4u: goto label_17e3c4;
        case 0x17e3c8u: goto label_17e3c8;
        case 0x17e3ccu: goto label_17e3cc;
        case 0x17e3d0u: goto label_17e3d0;
        case 0x17e3d4u: goto label_17e3d4;
        case 0x17e3d8u: goto label_17e3d8;
        case 0x17e3dcu: goto label_17e3dc;
        case 0x17e3e0u: goto label_17e3e0;
        case 0x17e3e4u: goto label_17e3e4;
        case 0x17e3e8u: goto label_17e3e8;
        case 0x17e3ecu: goto label_17e3ec;
        case 0x17e3f0u: goto label_17e3f0;
        case 0x17e3f4u: goto label_17e3f4;
        case 0x17e3f8u: goto label_17e3f8;
        case 0x17e3fcu: goto label_17e3fc;
        case 0x17e400u: goto label_17e400;
        case 0x17e404u: goto label_17e404;
        case 0x17e408u: goto label_17e408;
        case 0x17e40cu: goto label_17e40c;
        case 0x17e410u: goto label_17e410;
        case 0x17e414u: goto label_17e414;
        case 0x17e418u: goto label_17e418;
        case 0x17e41cu: goto label_17e41c;
        case 0x17e420u: goto label_17e420;
        case 0x17e424u: goto label_17e424;
        case 0x17e428u: goto label_17e428;
        case 0x17e42cu: goto label_17e42c;
        case 0x17e430u: goto label_17e430;
        case 0x17e434u: goto label_17e434;
        case 0x17e438u: goto label_17e438;
        case 0x17e43cu: goto label_17e43c;
        case 0x17e440u: goto label_17e440;
        case 0x17e444u: goto label_17e444;
        case 0x17e448u: goto label_17e448;
        case 0x17e44cu: goto label_17e44c;
        case 0x17e450u: goto label_17e450;
        case 0x17e454u: goto label_17e454;
        case 0x17e458u: goto label_17e458;
        case 0x17e45cu: goto label_17e45c;
        case 0x17e460u: goto label_17e460;
        case 0x17e464u: goto label_17e464;
        case 0x17e468u: goto label_17e468;
        case 0x17e46cu: goto label_17e46c;
        case 0x17e470u: goto label_17e470;
        case 0x17e474u: goto label_17e474;
        case 0x17e478u: goto label_17e478;
        case 0x17e47cu: goto label_17e47c;
        case 0x17e480u: goto label_17e480;
        case 0x17e484u: goto label_17e484;
        case 0x17e488u: goto label_17e488;
        case 0x17e48cu: goto label_17e48c;
        case 0x17e490u: goto label_17e490;
        case 0x17e494u: goto label_17e494;
        case 0x17e498u: goto label_17e498;
        case 0x17e49cu: goto label_17e49c;
        case 0x17e4a0u: goto label_17e4a0;
        case 0x17e4a4u: goto label_17e4a4;
        case 0x17e4a8u: goto label_17e4a8;
        case 0x17e4acu: goto label_17e4ac;
        case 0x17e4b0u: goto label_17e4b0;
        case 0x17e4b4u: goto label_17e4b4;
        case 0x17e4b8u: goto label_17e4b8;
        case 0x17e4bcu: goto label_17e4bc;
        case 0x17e4c0u: goto label_17e4c0;
        case 0x17e4c4u: goto label_17e4c4;
        case 0x17e4c8u: goto label_17e4c8;
        case 0x17e4ccu: goto label_17e4cc;
        case 0x17e4d0u: goto label_17e4d0;
        case 0x17e4d4u: goto label_17e4d4;
        case 0x17e4d8u: goto label_17e4d8;
        case 0x17e4dcu: goto label_17e4dc;
        case 0x17e4e0u: goto label_17e4e0;
        case 0x17e4e4u: goto label_17e4e4;
        case 0x17e4e8u: goto label_17e4e8;
        case 0x17e4ecu: goto label_17e4ec;
        case 0x17e4f0u: goto label_17e4f0;
        case 0x17e4f4u: goto label_17e4f4;
        case 0x17e4f8u: goto label_17e4f8;
        case 0x17e4fcu: goto label_17e4fc;
        case 0x17e500u: goto label_17e500;
        case 0x17e504u: goto label_17e504;
        case 0x17e508u: goto label_17e508;
        case 0x17e50cu: goto label_17e50c;
        case 0x17e510u: goto label_17e510;
        case 0x17e514u: goto label_17e514;
        case 0x17e518u: goto label_17e518;
        case 0x17e51cu: goto label_17e51c;
        case 0x17e520u: goto label_17e520;
        case 0x17e524u: goto label_17e524;
        case 0x17e528u: goto label_17e528;
        case 0x17e52cu: goto label_17e52c;
        case 0x17e530u: goto label_17e530;
        case 0x17e534u: goto label_17e534;
        case 0x17e538u: goto label_17e538;
        case 0x17e53cu: goto label_17e53c;
        case 0x17e540u: goto label_17e540;
        case 0x17e544u: goto label_17e544;
        case 0x17e548u: goto label_17e548;
        case 0x17e54cu: goto label_17e54c;
        case 0x17e550u: goto label_17e550;
        case 0x17e554u: goto label_17e554;
        case 0x17e558u: goto label_17e558;
        case 0x17e55cu: goto label_17e55c;
        case 0x17e560u: goto label_17e560;
        case 0x17e564u: goto label_17e564;
        case 0x17e568u: goto label_17e568;
        case 0x17e56cu: goto label_17e56c;
        case 0x17e570u: goto label_17e570;
        case 0x17e574u: goto label_17e574;
        case 0x17e578u: goto label_17e578;
        case 0x17e57cu: goto label_17e57c;
        case 0x17e580u: goto label_17e580;
        case 0x17e584u: goto label_17e584;
        case 0x17e588u: goto label_17e588;
        case 0x17e58cu: goto label_17e58c;
        case 0x17e590u: goto label_17e590;
        case 0x17e594u: goto label_17e594;
        case 0x17e598u: goto label_17e598;
        case 0x17e59cu: goto label_17e59c;
        case 0x17e5a0u: goto label_17e5a0;
        case 0x17e5a4u: goto label_17e5a4;
        case 0x17e5a8u: goto label_17e5a8;
        case 0x17e5acu: goto label_17e5ac;
        case 0x17e5b0u: goto label_17e5b0;
        case 0x17e5b4u: goto label_17e5b4;
        case 0x17e5b8u: goto label_17e5b8;
        case 0x17e5bcu: goto label_17e5bc;
        case 0x17e5c0u: goto label_17e5c0;
        case 0x17e5c4u: goto label_17e5c4;
        case 0x17e5c8u: goto label_17e5c8;
        case 0x17e5ccu: goto label_17e5cc;
        case 0x17e5d0u: goto label_17e5d0;
        case 0x17e5d4u: goto label_17e5d4;
        case 0x17e5d8u: goto label_17e5d8;
        case 0x17e5dcu: goto label_17e5dc;
        case 0x17e5e0u: goto label_17e5e0;
        case 0x17e5e4u: goto label_17e5e4;
        case 0x17e5e8u: goto label_17e5e8;
        case 0x17e5ecu: goto label_17e5ec;
        case 0x17e5f0u: goto label_17e5f0;
        case 0x17e5f4u: goto label_17e5f4;
        case 0x17e5f8u: goto label_17e5f8;
        case 0x17e5fcu: goto label_17e5fc;
        case 0x17e600u: goto label_17e600;
        case 0x17e604u: goto label_17e604;
        case 0x17e608u: goto label_17e608;
        case 0x17e60cu: goto label_17e60c;
        case 0x17e610u: goto label_17e610;
        case 0x17e614u: goto label_17e614;
        case 0x17e618u: goto label_17e618;
        case 0x17e61cu: goto label_17e61c;
        case 0x17e620u: goto label_17e620;
        case 0x17e624u: goto label_17e624;
        case 0x17e628u: goto label_17e628;
        case 0x17e62cu: goto label_17e62c;
        case 0x17e630u: goto label_17e630;
        case 0x17e634u: goto label_17e634;
        case 0x17e638u: goto label_17e638;
        case 0x17e63cu: goto label_17e63c;
        case 0x17e640u: goto label_17e640;
        case 0x17e644u: goto label_17e644;
        case 0x17e648u: goto label_17e648;
        case 0x17e64cu: goto label_17e64c;
        case 0x17e650u: goto label_17e650;
        case 0x17e654u: goto label_17e654;
        case 0x17e658u: goto label_17e658;
        case 0x17e65cu: goto label_17e65c;
        case 0x17e660u: goto label_17e660;
        case 0x17e664u: goto label_17e664;
        case 0x17e668u: goto label_17e668;
        case 0x17e66cu: goto label_17e66c;
        case 0x17e670u: goto label_17e670;
        case 0x17e674u: goto label_17e674;
        case 0x17e678u: goto label_17e678;
        case 0x17e67cu: goto label_17e67c;
        case 0x17e680u: goto label_17e680;
        case 0x17e684u: goto label_17e684;
        case 0x17e688u: goto label_17e688;
        case 0x17e68cu: goto label_17e68c;
        case 0x17e690u: goto label_17e690;
        case 0x17e694u: goto label_17e694;
        case 0x17e698u: goto label_17e698;
        case 0x17e69cu: goto label_17e69c;
        case 0x17e6a0u: goto label_17e6a0;
        case 0x17e6a4u: goto label_17e6a4;
        case 0x17e6a8u: goto label_17e6a8;
        case 0x17e6acu: goto label_17e6ac;
        case 0x17e6b0u: goto label_17e6b0;
        case 0x17e6b4u: goto label_17e6b4;
        case 0x17e6b8u: goto label_17e6b8;
        case 0x17e6bcu: goto label_17e6bc;
        case 0x17e6c0u: goto label_17e6c0;
        case 0x17e6c4u: goto label_17e6c4;
        case 0x17e6c8u: goto label_17e6c8;
        case 0x17e6ccu: goto label_17e6cc;
        case 0x17e6d0u: goto label_17e6d0;
        case 0x17e6d4u: goto label_17e6d4;
        case 0x17e6d8u: goto label_17e6d8;
        case 0x17e6dcu: goto label_17e6dc;
        case 0x17e6e0u: goto label_17e6e0;
        case 0x17e6e4u: goto label_17e6e4;
        case 0x17e6e8u: goto label_17e6e8;
        case 0x17e6ecu: goto label_17e6ec;
        case 0x17e6f0u: goto label_17e6f0;
        case 0x17e6f4u: goto label_17e6f4;
        case 0x17e6f8u: goto label_17e6f8;
        case 0x17e6fcu: goto label_17e6fc;
        case 0x17e700u: goto label_17e700;
        case 0x17e704u: goto label_17e704;
        case 0x17e708u: goto label_17e708;
        case 0x17e70cu: goto label_17e70c;
        case 0x17e710u: goto label_17e710;
        case 0x17e714u: goto label_17e714;
        case 0x17e718u: goto label_17e718;
        case 0x17e71cu: goto label_17e71c;
        case 0x17e720u: goto label_17e720;
        case 0x17e724u: goto label_17e724;
        case 0x17e728u: goto label_17e728;
        case 0x17e72cu: goto label_17e72c;
        case 0x17e730u: goto label_17e730;
        case 0x17e734u: goto label_17e734;
        case 0x17e738u: goto label_17e738;
        case 0x17e73cu: goto label_17e73c;
        case 0x17e740u: goto label_17e740;
        case 0x17e744u: goto label_17e744;
        case 0x17e748u: goto label_17e748;
        case 0x17e74cu: goto label_17e74c;
        case 0x17e750u: goto label_17e750;
        case 0x17e754u: goto label_17e754;
        case 0x17e758u: goto label_17e758;
        case 0x17e75cu: goto label_17e75c;
        case 0x17e760u: goto label_17e760;
        case 0x17e764u: goto label_17e764;
        case 0x17e768u: goto label_17e768;
        case 0x17e76cu: goto label_17e76c;
        case 0x17e770u: goto label_17e770;
        case 0x17e774u: goto label_17e774;
        case 0x17e778u: goto label_17e778;
        case 0x17e77cu: goto label_17e77c;
        case 0x17e780u: goto label_17e780;
        case 0x17e784u: goto label_17e784;
        case 0x17e788u: goto label_17e788;
        case 0x17e78cu: goto label_17e78c;
        case 0x17e790u: goto label_17e790;
        case 0x17e794u: goto label_17e794;
        case 0x17e798u: goto label_17e798;
        case 0x17e79cu: goto label_17e79c;
        case 0x17e7a0u: goto label_17e7a0;
        case 0x17e7a4u: goto label_17e7a4;
        case 0x17e7a8u: goto label_17e7a8;
        case 0x17e7acu: goto label_17e7ac;
        case 0x17e7b0u: goto label_17e7b0;
        case 0x17e7b4u: goto label_17e7b4;
        case 0x17e7b8u: goto label_17e7b8;
        case 0x17e7bcu: goto label_17e7bc;
        case 0x17e7c0u: goto label_17e7c0;
        case 0x17e7c4u: goto label_17e7c4;
        case 0x17e7c8u: goto label_17e7c8;
        case 0x17e7ccu: goto label_17e7cc;
        case 0x17e7d0u: goto label_17e7d0;
        case 0x17e7d4u: goto label_17e7d4;
        case 0x17e7d8u: goto label_17e7d8;
        case 0x17e7dcu: goto label_17e7dc;
        case 0x17e7e0u: goto label_17e7e0;
        case 0x17e7e4u: goto label_17e7e4;
        case 0x17e7e8u: goto label_17e7e8;
        case 0x17e7ecu: goto label_17e7ec;
        case 0x17e7f0u: goto label_17e7f0;
        case 0x17e7f4u: goto label_17e7f4;
        case 0x17e7f8u: goto label_17e7f8;
        case 0x17e7fcu: goto label_17e7fc;
        case 0x17e800u: goto label_17e800;
        case 0x17e804u: goto label_17e804;
        case 0x17e808u: goto label_17e808;
        case 0x17e80cu: goto label_17e80c;
        case 0x17e810u: goto label_17e810;
        case 0x17e814u: goto label_17e814;
        case 0x17e818u: goto label_17e818;
        case 0x17e81cu: goto label_17e81c;
        case 0x17e820u: goto label_17e820;
        case 0x17e824u: goto label_17e824;
        case 0x17e828u: goto label_17e828;
        case 0x17e82cu: goto label_17e82c;
        case 0x17e830u: goto label_17e830;
        case 0x17e834u: goto label_17e834;
        case 0x17e838u: goto label_17e838;
        case 0x17e83cu: goto label_17e83c;
        case 0x17e840u: goto label_17e840;
        case 0x17e844u: goto label_17e844;
        case 0x17e848u: goto label_17e848;
        case 0x17e84cu: goto label_17e84c;
        case 0x17e850u: goto label_17e850;
        case 0x17e854u: goto label_17e854;
        case 0x17e858u: goto label_17e858;
        case 0x17e85cu: goto label_17e85c;
        case 0x17e860u: goto label_17e860;
        case 0x17e864u: goto label_17e864;
        case 0x17e868u: goto label_17e868;
        case 0x17e86cu: goto label_17e86c;
        case 0x17e870u: goto label_17e870;
        case 0x17e874u: goto label_17e874;
        case 0x17e878u: goto label_17e878;
        case 0x17e87cu: goto label_17e87c;
        case 0x17e880u: goto label_17e880;
        case 0x17e884u: goto label_17e884;
        case 0x17e888u: goto label_17e888;
        case 0x17e88cu: goto label_17e88c;
        case 0x17e890u: goto label_17e890;
        case 0x17e894u: goto label_17e894;
        case 0x17e898u: goto label_17e898;
        case 0x17e89cu: goto label_17e89c;
        case 0x17e8a0u: goto label_17e8a0;
        case 0x17e8a4u: goto label_17e8a4;
        case 0x17e8a8u: goto label_17e8a8;
        case 0x17e8acu: goto label_17e8ac;
        case 0x17e8b0u: goto label_17e8b0;
        case 0x17e8b4u: goto label_17e8b4;
        case 0x17e8b8u: goto label_17e8b8;
        case 0x17e8bcu: goto label_17e8bc;
        case 0x17e8c0u: goto label_17e8c0;
        case 0x17e8c4u: goto label_17e8c4;
        case 0x17e8c8u: goto label_17e8c8;
        case 0x17e8ccu: goto label_17e8cc;
        case 0x17e8d0u: goto label_17e8d0;
        case 0x17e8d4u: goto label_17e8d4;
        case 0x17e8d8u: goto label_17e8d8;
        case 0x17e8dcu: goto label_17e8dc;
        case 0x17e8e0u: goto label_17e8e0;
        case 0x17e8e4u: goto label_17e8e4;
        case 0x17e8e8u: goto label_17e8e8;
        case 0x17e8ecu: goto label_17e8ec;
        case 0x17e8f0u: goto label_17e8f0;
        case 0x17e8f4u: goto label_17e8f4;
        case 0x17e8f8u: goto label_17e8f8;
        case 0x17e8fcu: goto label_17e8fc;
        case 0x17e900u: goto label_17e900;
        case 0x17e904u: goto label_17e904;
        case 0x17e908u: goto label_17e908;
        case 0x17e90cu: goto label_17e90c;
        case 0x17e910u: goto label_17e910;
        case 0x17e914u: goto label_17e914;
        case 0x17e918u: goto label_17e918;
        case 0x17e91cu: goto label_17e91c;
        case 0x17e920u: goto label_17e920;
        case 0x17e924u: goto label_17e924;
        case 0x17e928u: goto label_17e928;
        case 0x17e92cu: goto label_17e92c;
        case 0x17e930u: goto label_17e930;
        case 0x17e934u: goto label_17e934;
        case 0x17e938u: goto label_17e938;
        case 0x17e93cu: goto label_17e93c;
        case 0x17e940u: goto label_17e940;
        case 0x17e944u: goto label_17e944;
        case 0x17e948u: goto label_17e948;
        case 0x17e94cu: goto label_17e94c;
        case 0x17e950u: goto label_17e950;
        case 0x17e954u: goto label_17e954;
        case 0x17e958u: goto label_17e958;
        case 0x17e95cu: goto label_17e95c;
        case 0x17e960u: goto label_17e960;
        case 0x17e964u: goto label_17e964;
        case 0x17e968u: goto label_17e968;
        case 0x17e96cu: goto label_17e96c;
        case 0x17e970u: goto label_17e970;
        case 0x17e974u: goto label_17e974;
        case 0x17e978u: goto label_17e978;
        case 0x17e97cu: goto label_17e97c;
        case 0x17e980u: goto label_17e980;
        case 0x17e984u: goto label_17e984;
        case 0x17e988u: goto label_17e988;
        case 0x17e98cu: goto label_17e98c;
        case 0x17e990u: goto label_17e990;
        case 0x17e994u: goto label_17e994;
        case 0x17e998u: goto label_17e998;
        case 0x17e99cu: goto label_17e99c;
        case 0x17e9a0u: goto label_17e9a0;
        case 0x17e9a4u: goto label_17e9a4;
        case 0x17e9a8u: goto label_17e9a8;
        case 0x17e9acu: goto label_17e9ac;
        case 0x17e9b0u: goto label_17e9b0;
        case 0x17e9b4u: goto label_17e9b4;
        case 0x17e9b8u: goto label_17e9b8;
        case 0x17e9bcu: goto label_17e9bc;
        case 0x17e9c0u: goto label_17e9c0;
        case 0x17e9c4u: goto label_17e9c4;
        case 0x17e9c8u: goto label_17e9c8;
        case 0x17e9ccu: goto label_17e9cc;
        case 0x17e9d0u: goto label_17e9d0;
        case 0x17e9d4u: goto label_17e9d4;
        case 0x17e9d8u: goto label_17e9d8;
        case 0x17e9dcu: goto label_17e9dc;
        case 0x17e9e0u: goto label_17e9e0;
        case 0x17e9e4u: goto label_17e9e4;
        case 0x17e9e8u: goto label_17e9e8;
        case 0x17e9ecu: goto label_17e9ec;
        case 0x17e9f0u: goto label_17e9f0;
        case 0x17e9f4u: goto label_17e9f4;
        case 0x17e9f8u: goto label_17e9f8;
        case 0x17e9fcu: goto label_17e9fc;
        case 0x17ea00u: goto label_17ea00;
        case 0x17ea04u: goto label_17ea04;
        case 0x17ea08u: goto label_17ea08;
        case 0x17ea0cu: goto label_17ea0c;
        case 0x17ea10u: goto label_17ea10;
        case 0x17ea14u: goto label_17ea14;
        case 0x17ea18u: goto label_17ea18;
        case 0x17ea1cu: goto label_17ea1c;
        case 0x17ea20u: goto label_17ea20;
        case 0x17ea24u: goto label_17ea24;
        case 0x17ea28u: goto label_17ea28;
        case 0x17ea2cu: goto label_17ea2c;
        case 0x17ea30u: goto label_17ea30;
        case 0x17ea34u: goto label_17ea34;
        case 0x17ea38u: goto label_17ea38;
        case 0x17ea3cu: goto label_17ea3c;
        case 0x17ea40u: goto label_17ea40;
        case 0x17ea44u: goto label_17ea44;
        case 0x17ea48u: goto label_17ea48;
        case 0x17ea4cu: goto label_17ea4c;
        case 0x17ea50u: goto label_17ea50;
        case 0x17ea54u: goto label_17ea54;
        case 0x17ea58u: goto label_17ea58;
        default: break;
    }

    ctx->pc = 0x17e320u;

label_17e320:
    // 0x17e320: 0x27bdfc60  addiu       $sp, $sp, -0x3A0
    ctx->pc = 0x17e320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966368));
label_17e324:
    // 0x17e324: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x17e324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_17e328:
    // 0x17e328: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x17e328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
label_17e32c:
    // 0x17e32c: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x17e32cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
label_17e330:
    // 0x17e330: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x17e330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
label_17e334:
    // 0x17e334: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x17e334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
label_17e338:
    // 0x17e338: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x17e338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_17e33c:
    // 0x17e33c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x17e33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_17e340:
    // 0x17e340: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x17e340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_17e344:
    // 0x17e344: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x17e344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_17e348:
    // 0x17e348: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x17e348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_17e34c:
    // 0x17e34c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x17e34cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_17e350:
    // 0x17e350: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x17e350u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_17e354:
    // 0x17e354: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x17e354u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_17e358:
    // 0x17e358: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x17e358u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_17e35c:
    // 0x17e35c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x17e35cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_17e360:
    // 0x17e360: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x17e360u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_17e364:
    // 0x17e364: 0xafa400fc  sw          $a0, 0xFC($sp)
    ctx->pc = 0x17e364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 4));
label_17e368:
    // 0x17e368: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x17e368u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_17e36c:
    // 0x17e36c: 0x122001aa  beqz        $s1, . + 4 + (0x1AA << 2)
label_17e370:
    if (ctx->pc == 0x17E370u) {
        ctx->pc = 0x17E370u;
            // 0x17e370: 0xafa500f8  sw          $a1, 0xF8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 5));
        ctx->pc = 0x17E374u;
        goto label_17e374;
    }
    ctx->pc = 0x17E36Cu;
    {
        const bool branch_taken_0x17e36c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E36Cu;
            // 0x17e370: 0xafa500f8  sw          $a1, 0xF8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e36c) {
            ctx->pc = 0x17EA18u;
            goto label_17ea18;
        }
    }
    ctx->pc = 0x17E374u;
label_17e374:
    // 0x17e374: 0xc04b120  jal         func_12C480
label_17e378:
    if (ctx->pc == 0x17E378u) {
        ctx->pc = 0x17E378u;
            // 0x17e378: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x17E37Cu;
        goto label_17e37c;
    }
    ctx->pc = 0x17E374u;
    SET_GPR_U32(ctx, 31, 0x17E37Cu);
    ctx->pc = 0x17E378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E374u;
            // 0x17e378: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C480u;
    if (runtime->hasFunction(0x12C480u)) {
        auto targetFn = runtime->lookupFunction(0x12C480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E37Cu; }
        if (ctx->pc != 0x17E37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10mgCTextureFv_0x12c480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E37Cu; }
        if (ctx->pc != 0x17E37Cu) { return; }
    }
    ctx->pc = 0x17E37Cu;
label_17e37c:
    // 0x17e37c: 0xc04b120  jal         func_12C480
label_17e380:
    if (ctx->pc == 0x17E380u) {
        ctx->pc = 0x17E380u;
            // 0x17e380: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x17E384u;
        goto label_17e384;
    }
    ctx->pc = 0x17E37Cu;
    SET_GPR_U32(ctx, 31, 0x17E384u);
    ctx->pc = 0x17E380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E37Cu;
            // 0x17e380: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C480u;
    if (runtime->hasFunction(0x12C480u)) {
        auto targetFn = runtime->lookupFunction(0x12C480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E384u; }
        if (ctx->pc != 0x17E384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10mgCTextureFv_0x12c480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E384u; }
        if (ctx->pc != 0x17E384u) { return; }
    }
    ctx->pc = 0x17E384u;
label_17e384:
    // 0x17e384: 0xc0510c0  jal         func_144300
label_17e388:
    if (ctx->pc == 0x17E388u) {
        ctx->pc = 0x17E388u;
            // 0x17e388: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x17E38Cu;
        goto label_17e38c;
    }
    ctx->pc = 0x17E384u;
    SET_GPR_U32(ctx, 31, 0x17E38Cu);
    ctx->pc = 0x17E388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E384u;
            // 0x17e388: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144300u;
    if (runtime->hasFunction(0x144300u)) {
        auto targetFn = runtime->lookupFunction(0x144300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E38Cu; }
        if (ctx->pc != 0x17E38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetFrameBuffer__FP10mgCTexture_0x144300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E38Cu; }
        if (ctx->pc != 0x17E38Cu) { return; }
    }
    ctx->pc = 0x17E38Cu;
label_17e38c:
    // 0x17e38c: 0x86220000  lh          $v0, 0x0($s1)
    ctx->pc = 0x17e38cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_17e390:
    // 0x17e390: 0x26260008  addiu       $a2, $s1, 0x8
    ctx->pc = 0x17e390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_17e394:
    // 0x17e394: 0x27a50178  addiu       $a1, $sp, 0x178
    ctx->pc = 0x17e394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 376));
label_17e398:
    // 0x17e398: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x17e398u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_17e39c:
    // 0x17e39c: 0xa7a20170  sh          $v0, 0x170($sp)
    ctx->pc = 0x17e39cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 368), (uint16_t)GPR_U32(ctx, 2));
label_17e3a0:
    // 0x17e3a0: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x17e3a0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_17e3a4:
    // 0x17e3a4: 0xa7a20172  sh          $v0, 0x172($sp)
    ctx->pc = 0x17e3a4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 370), (uint16_t)GPR_U32(ctx, 2));
label_17e3a8:
    // 0x17e3a8: 0x86220004  lh          $v0, 0x4($s1)
    ctx->pc = 0x17e3a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_17e3ac:
    // 0x17e3ac: 0xa7a20174  sh          $v0, 0x174($sp)
    ctx->pc = 0x17e3acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 372), (uint16_t)GPR_U32(ctx, 2));
label_17e3b0:
    // 0x17e3b0: 0x86220006  lh          $v0, 0x6($s1)
    ctx->pc = 0x17e3b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
label_17e3b4:
    // 0x17e3b4: 0xa7a20176  sh          $v0, 0x176($sp)
    ctx->pc = 0x17e3b4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 374), (uint16_t)GPR_U32(ctx, 2));
label_17e3b8:
    // 0x17e3b8: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x17e3b8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_17e3bc:
    // 0x17e3bc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x17e3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_17e3c0:
    // 0x17e3c0: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x17e3c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_17e3c4:
    // 0x17e3c4: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x17e3c4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_17e3c8:
    // 0x17e3c8: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x17e3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_17e3cc:
    // 0x17e3cc: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x17e3ccu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
label_17e3d0:
    // 0x17e3d0: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_17e3d4:
    if (ctx->pc == 0x17E3D4u) {
        ctx->pc = 0x17E3D4u;
            // 0x17e3d4: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x17E3D8u;
        goto label_17e3d8;
    }
    ctx->pc = 0x17E3D0u;
    {
        const bool branch_taken_0x17e3d0 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x17E3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E3D0u;
            // 0x17e3d4: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e3d0) {
            ctx->pc = 0x17E3B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17e3b8;
        }
    }
    ctx->pc = 0x17E3D8u;
label_17e3d8:
    // 0x17e3d8: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x17e3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_17e3dc:
    // 0x17e3dc: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x17e3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_17e3e0:
    // 0x17e3e0: 0x27a401e0  addiu       $a0, $sp, 0x1E0
    ctx->pc = 0x17e3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_17e3e4:
    // 0x17e3e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17e3e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17e3e8:
    // 0x17e3e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17e3e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17e3ec:
    // 0x17e3ec: 0x27b00100  addiu       $s0, $sp, 0x100
    ctx->pc = 0x17e3ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_17e3f0:
    // 0x17e3f0: 0xafa30198  sw          $v1, 0x198($sp)
    ctx->pc = 0x17e3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 408), GPR_U32(ctx, 3));
label_17e3f4:
    // 0x17e3f4: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x17e3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_17e3f8:
    // 0x17e3f8: 0xafa3019c  sw          $v1, 0x19C($sp)
    ctx->pc = 0x17e3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 3));
label_17e3fc:
    // 0x17e3fc: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x17e3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_17e400:
    // 0x17e400: 0xafa301a0  sw          $v1, 0x1A0($sp)
    ctx->pc = 0x17e400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 3));
label_17e404:
    // 0x17e404: 0xde230038  ld          $v1, 0x38($s1)
    ctx->pc = 0x17e404u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 56)));
label_17e408:
    // 0x17e408: 0xffa301a8  sd          $v1, 0x1A8($sp)
    ctx->pc = 0x17e408u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 424), GPR_U64(ctx, 3));
label_17e40c:
    // 0x17e40c: 0xde230040  ld          $v1, 0x40($s1)
    ctx->pc = 0x17e40cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 64)));
label_17e410:
    // 0x17e410: 0xffa301b0  sd          $v1, 0x1B0($sp)
    ctx->pc = 0x17e410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 3));
label_17e414:
    // 0x17e414: 0xde230048  ld          $v1, 0x48($s1)
    ctx->pc = 0x17e414u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 72)));
label_17e418:
    // 0x17e418: 0xffa301b8  sd          $v1, 0x1B8($sp)
    ctx->pc = 0x17e418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 440), GPR_U64(ctx, 3));
label_17e41c:
    // 0x17e41c: 0xc6230050  lwc1        $f3, 0x50($s1)
    ctx->pc = 0x17e41cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_17e420:
    // 0x17e420: 0xc6220054  lwc1        $f2, 0x54($s1)
    ctx->pc = 0x17e420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_17e424:
    // 0x17e424: 0xc6210058  lwc1        $f1, 0x58($s1)
    ctx->pc = 0x17e424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_17e428:
    // 0x17e428: 0xc620005c  lwc1        $f0, 0x5C($s1)
    ctx->pc = 0x17e428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17e42c:
    // 0x17e42c: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x17e42cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_17e430:
    // 0x17e430: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x17e430u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_17e434:
    // 0x17e434: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x17e434u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_17e438:
    // 0x17e438: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x17e438u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_17e43c:
    // 0x17e43c: 0x8e270060  lw          $a3, 0x60($s1)
    ctx->pc = 0x17e43cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_17e440:
    // 0x17e440: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e444:
    // 0x17e444: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x17e444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
label_17e448:
    // 0x17e448: 0xafa701d0  sw          $a3, 0x1D0($sp)
    ctx->pc = 0x17e448u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 7));
label_17e44c:
    // 0x17e44c: 0x33900  sll         $a3, $v1, 4
    ctx->pc = 0x17e44cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_17e450:
    // 0x17e450: 0x8e230064  lw          $v1, 0x64($s1)
    ctx->pc = 0x17e450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 100)));
label_17e454:
    // 0x17e454: 0x24100  sll         $t0, $v0, 4
    ctx->pc = 0x17e454u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_17e458:
    // 0x17e458: 0xafa301d4  sw          $v1, 0x1D4($sp)
    ctx->pc = 0x17e458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 468), GPR_U32(ctx, 3));
label_17e45c:
    // 0x17e45c: 0x8e220068  lw          $v0, 0x68($s1)
    ctx->pc = 0x17e45cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_17e460:
    // 0x17e460: 0xc04f8e4  jal         func_13E390
label_17e464:
    if (ctx->pc == 0x17E464u) {
        ctx->pc = 0x17E464u;
            // 0x17e464: 0xafa201d8  sw          $v0, 0x1D8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 2));
        ctx->pc = 0x17E468u;
        goto label_17e468;
    }
    ctx->pc = 0x17E460u;
    SET_GPR_U32(ctx, 31, 0x17E468u);
    ctx->pc = 0x17E464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E460u;
            // 0x17e464: 0xafa201d8  sw          $v0, 0x1D8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E468u; }
        if (ctx->pc != 0x17E468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E468u; }
        if (ctx->pc != 0x17E468u) { return; }
    }
    ctx->pc = 0x17E468u;
label_17e468:
    // 0x17e468: 0x8f838780  lw          $v1, -0x7880($gp)
    ctx->pc = 0x17e468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_17e46c:
    // 0x17e46c: 0x27a401f0  addiu       $a0, $sp, 0x1F0
    ctx->pc = 0x17e46cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_17e470:
    // 0x17e470: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x17e470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
label_17e474:
    // 0x17e474: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17e474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17e478:
    // 0x17e478: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17e478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17e47c:
    // 0x17e47c: 0x338c0  sll         $a3, $v1, 3
    ctx->pc = 0x17e47cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_17e480:
    // 0x17e480: 0xc04f8e4  jal         func_13E390
label_17e484:
    if (ctx->pc == 0x17E484u) {
        ctx->pc = 0x17E484u;
            // 0x17e484: 0x240c0  sll         $t0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x17E488u;
        goto label_17e488;
    }
    ctx->pc = 0x17E480u;
    SET_GPR_U32(ctx, 31, 0x17E488u);
    ctx->pc = 0x17E484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E480u;
            // 0x17e484: 0x240c0  sll         $t0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E488u; }
        if (ctx->pc != 0x17E488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E488u; }
        if (ctx->pc != 0x17E488u) { return; }
    }
    ctx->pc = 0x17E488u;
label_17e488:
    // 0x17e488: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x17e488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_17e48c:
    // 0x17e48c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x17e48cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_17e490:
    // 0x17e490: 0x27a201e4  addiu       $v0, $sp, 0x1E4
    ctx->pc = 0x17e490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 484));
label_17e494:
    // 0x17e494: 0x8c5e0000  lw          $fp, 0x0($v0)
    ctx->pc = 0x17e494u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17e498:
    // 0x17e498: 0x27a201e8  addiu       $v0, $sp, 0x1E8
    ctx->pc = 0x17e498u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 488));
label_17e49c:
    // 0x17e49c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x17e49cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17e4a0:
    // 0x17e4a0: 0x27a201ec  addiu       $v0, $sp, 0x1EC
    ctx->pc = 0x17e4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 492));
label_17e4a4:
    // 0x17e4a4: 0x8c570000  lw          $s7, 0x0($v0)
    ctx->pc = 0x17e4a4u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17e4a8:
    // 0x17e4a8: 0xc04d0e8  jal         func_1343A0
label_17e4ac:
    if (ctx->pc == 0x17E4ACu) {
        ctx->pc = 0x17E4ACu;
            // 0x17e4ac: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->pc = 0x17E4B0u;
        goto label_17e4b0;
    }
    ctx->pc = 0x17E4A8u;
    SET_GPR_U32(ctx, 31, 0x17E4B0u);
    ctx->pc = 0x17E4ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E4A8u;
            // 0x17e4ac: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E4B0u; }
        if (ctx->pc != 0x17E4B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E4B0u; }
        if (ctx->pc != 0x17E4B0u) { return; }
    }
    ctx->pc = 0x17E4B0u;
label_17e4b0:
    // 0x17e4b0: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x17e4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_17e4b4:
    // 0x17e4b4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17e4b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17e4b8:
    // 0x17e4b8: 0xc04d104  jal         func_134410
label_17e4bc:
    if (ctx->pc == 0x17E4BCu) {
        ctx->pc = 0x17E4BCu;
            // 0x17e4bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17E4C0u;
        goto label_17e4c0;
    }
    ctx->pc = 0x17E4B8u;
    SET_GPR_U32(ctx, 31, 0x17E4C0u);
    ctx->pc = 0x17E4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E4B8u;
            // 0x17e4bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E4C0u; }
        if (ctx->pc != 0x17E4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E4C0u; }
        if (ctx->pc != 0x17E4C0u) { return; }
    }
    ctx->pc = 0x17E4C0u;
label_17e4c0:
    // 0x17e4c0: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x17e4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_17e4c4:
    // 0x17e4c4: 0xc04d3e4  jal         func_134F90
label_17e4c8:
    if (ctx->pc == 0x17E4C8u) {
        ctx->pc = 0x17E4C8u;
            // 0x17e4c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x17E4CCu;
        goto label_17e4cc;
    }
    ctx->pc = 0x17E4C4u;
    SET_GPR_U32(ctx, 31, 0x17E4CCu);
    ctx->pc = 0x17E4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E4C4u;
            // 0x17e4c8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E4CCu; }
        if (ctx->pc != 0x17E4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E4CCu; }
        if (ctx->pc != 0x17E4CCu) { return; }
    }
    ctx->pc = 0x17E4CCu;
label_17e4cc:
    // 0x17e4cc: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x17e4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_17e4d0:
    // 0x17e4d0: 0xc04d3fc  jal         func_134FF0
label_17e4d4:
    if (ctx->pc == 0x17E4D4u) {
        ctx->pc = 0x17E4D4u;
            // 0x17e4d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x17E4D8u;
        goto label_17e4d8;
    }
    ctx->pc = 0x17E4D0u;
    SET_GPR_U32(ctx, 31, 0x17E4D8u);
    ctx->pc = 0x17E4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E4D0u;
            // 0x17e4d4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134FF0u;
    if (runtime->hasFunction(0x134FF0u)) {
        auto targetFn = runtime->lookupFunction(0x134FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E4D8u; }
        if (ctx->pc != 0x17E4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTest__11mgCDrawPrimFi_0x134ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E4D8u; }
        if (ctx->pc != 0x17E4D8u) { return; }
    }
    ctx->pc = 0x17E4D8u;
label_17e4d8:
    // 0x17e4d8: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x17e4d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_17e4dc:
    // 0x17e4dc: 0xc04d3bc  jal         func_134EF0
label_17e4e0:
    if (ctx->pc == 0x17E4E0u) {
        ctx->pc = 0x17E4E0u;
            // 0x17e4e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17E4E4u;
        goto label_17e4e4;
    }
    ctx->pc = 0x17E4DCu;
    SET_GPR_U32(ctx, 31, 0x17E4E4u);
    ctx->pc = 0x17E4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E4DCu;
            // 0x17e4e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EF0u;
    if (runtime->hasFunction(0x134EF0u)) {
        auto targetFn = runtime->lookupFunction(0x134EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E4E4u; }
        if (ctx->pc != 0x17E4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaTestEnable__11mgCDrawPrimFi_0x134ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E4E4u; }
        if (ctx->pc != 0x17E4E4u) { return; }
    }
    ctx->pc = 0x17E4E4u;
label_17e4e4:
    // 0x17e4e4: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x17e4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_17e4e8:
    // 0x17e4e8: 0xc04d424  jal         func_135090
label_17e4ec:
    if (ctx->pc == 0x17E4ECu) {
        ctx->pc = 0x17E4ECu;
            // 0x17e4ec: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x17E4F0u;
        goto label_17e4f0;
    }
    ctx->pc = 0x17E4E8u;
    SET_GPR_U32(ctx, 31, 0x17E4F0u);
    ctx->pc = 0x17E4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E4E8u;
            // 0x17e4ec: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135090u;
    if (runtime->hasFunction(0x135090u)) {
        auto targetFn = runtime->lookupFunction(0x135090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E4F0u; }
        if (ctx->pc != 0x17E4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ZMask__11mgCDrawPrimFi_0x135090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E4F0u; }
        if (ctx->pc != 0x17E4F0u) { return; }
    }
    ctx->pc = 0x17E4F0u;
label_17e4f0:
    // 0x17e4f0: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x17e4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_17e4f4:
    // 0x17e4f4: 0xc04d428  jal         func_1350A0
label_17e4f8:
    if (ctx->pc == 0x17E4F8u) {
        ctx->pc = 0x17E4F8u;
            // 0x17e4f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x17E4FCu;
        goto label_17e4fc;
    }
    ctx->pc = 0x17E4F4u;
    SET_GPR_U32(ctx, 31, 0x17E4FCu);
    ctx->pc = 0x17E4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E4F4u;
            // 0x17e4f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E4FCu; }
        if (ctx->pc != 0x17E4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E4FCu; }
        if (ctx->pc != 0x17E4FCu) { return; }
    }
    ctx->pc = 0x17E4FCu;
label_17e4fc:
    // 0x17e4fc: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x17e4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_17e500:
    // 0x17e500: 0xc04d3b0  jal         func_134EC0
label_17e504:
    if (ctx->pc == 0x17E504u) {
        ctx->pc = 0x17E504u;
            // 0x17e504: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x17E508u;
        goto label_17e508;
    }
    ctx->pc = 0x17E500u;
    SET_GPR_U32(ctx, 31, 0x17E508u);
    ctx->pc = 0x17E504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E500u;
            // 0x17e504: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EC0u;
    if (runtime->hasFunction(0x134EC0u)) {
        auto targetFn = runtime->lookupFunction(0x134EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E508u; }
        if (ctx->pc != 0x17E508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlendEnable__11mgCDrawPrimFi_0x134ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E508u; }
        if (ctx->pc != 0x17E508u) { return; }
    }
    ctx->pc = 0x17E508u;
label_17e508:
    // 0x17e508: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x17e508u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_17e50c:
    // 0x17e50c: 0x27b2032c  addiu       $s2, $sp, 0x32C
    ctx->pc = 0x17e50cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 812));
label_17e510:
    // 0x17e510: 0x24424f10  addiu       $v0, $v0, 0x4F10
    ctx->pc = 0x17e510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20240));
label_17e514:
    // 0x17e514: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x17e514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_17e518:
    // 0x17e518: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x17e518u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_17e51c:
    // 0x17e51c: 0x8c99001c  lw          $t9, 0x1C($a0)
    ctx->pc = 0x17e51cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_17e520:
    // 0x17e520: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x17e520u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_17e524:
    // 0x17e524: 0x320f809  jalr        $t9
label_17e528:
    if (ctx->pc == 0x17E528u) {
        ctx->pc = 0x17E52Cu;
        goto label_17e52c;
    }
    ctx->pc = 0x17E524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17E52Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x17E52Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17E52Cu; }
            if (ctx->pc != 0x17E52Cu) { return; }
        }
        }
    }
    ctx->pc = 0x17E52Cu;
label_17e52c:
    // 0x17e52c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x17e52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_17e530:
    // 0x17e530: 0x27a40330  addiu       $a0, $sp, 0x330
    ctx->pc = 0x17e530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 816));
label_17e534:
    // 0x17e534: 0x24425100  addiu       $v0, $v0, 0x5100
    ctx->pc = 0x17e534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20736));
label_17e538:
    // 0x17e538: 0xc04f9fc  jal         func_13E7F0
label_17e53c:
    if (ctx->pc == 0x17E53Cu) {
        ctx->pc = 0x17E53Cu;
            // 0x17e53c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x17E540u;
        goto label_17e540;
    }
    ctx->pc = 0x17E538u;
    SET_GPR_U32(ctx, 31, 0x17E540u);
    ctx->pc = 0x17E53Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E538u;
            // 0x17e53c: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E7F0u;
    if (runtime->hasFunction(0x13E7F0u)) {
        auto targetFn = runtime->lookupFunction(0x13E7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E540u; }
        if (ctx->pc != 0x17E540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13mgCVisualAttrFv_0x13e7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E540u; }
        if (ctx->pc != 0x17E540u) { return; }
    }
    ctx->pc = 0x17E540u;
label_17e540:
    // 0x17e540: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x17e540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_17e544:
    // 0x17e544: 0x8c99001c  lw          $t9, 0x1C($a0)
    ctx->pc = 0x17e544u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_17e548:
    // 0x17e548: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x17e548u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_17e54c:
    // 0x17e54c: 0x320f809  jalr        $t9
label_17e550:
    if (ctx->pc == 0x17E550u) {
        ctx->pc = 0x17E554u;
        goto label_17e554;
    }
    ctx->pc = 0x17E54Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17E554u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x17E554u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17E554u; }
            if (ctx->pc != 0x17E554u) { return; }
        }
        }
    }
    ctx->pc = 0x17E554u;
label_17e554:
    // 0x17e554: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x17e554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_17e558:
    // 0x17e558: 0x27a40360  addiu       $a0, $sp, 0x360
    ctx->pc = 0x17e558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
label_17e55c:
    // 0x17e55c: 0x24425070  addiu       $v0, $v0, 0x5070
    ctx->pc = 0x17e55cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20592));
label_17e560:
    // 0x17e560: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17e560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17e564:
    // 0x17e564: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x17e564u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_17e568:
    // 0x17e568: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17e568u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17e56c:
    // 0x17e56c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17e56cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17e570:
    // 0x17e570: 0xc04f8e4  jal         func_13E390
label_17e574:
    if (ctx->pc == 0x17E574u) {
        ctx->pc = 0x17E574u;
            // 0x17e574: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17E578u;
        goto label_17e578;
    }
    ctx->pc = 0x17E570u;
    SET_GPR_U32(ctx, 31, 0x17E578u);
    ctx->pc = 0x17E574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E570u;
            // 0x17e574: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E578u; }
        if (ctx->pc != 0x17E578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E578u; }
        if (ctx->pc != 0x17E578u) { return; }
    }
    ctx->pc = 0x17E578u;
label_17e578:
    // 0x17e578: 0x27a40370  addiu       $a0, $sp, 0x370
    ctx->pc = 0x17e578u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
label_17e57c:
    // 0x17e57c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17e57cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17e580:
    // 0x17e580: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x17e580u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17e584:
    // 0x17e584: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x17e584u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17e588:
    // 0x17e588: 0xc04f8e4  jal         func_13E390
label_17e58c:
    if (ctx->pc == 0x17E58Cu) {
        ctx->pc = 0x17E58Cu;
            // 0x17e58c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17E590u;
        goto label_17e590;
    }
    ctx->pc = 0x17E588u;
    SET_GPR_U32(ctx, 31, 0x17E590u);
    ctx->pc = 0x17E58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E588u;
            // 0x17e58c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E590u; }
        if (ctx->pc != 0x17E590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E590u; }
        if (ctx->pc != 0x17E590u) { return; }
    }
    ctx->pc = 0x17E590u;
label_17e590:
    // 0x17e590: 0x27a40310  addiu       $a0, $sp, 0x310
    ctx->pc = 0x17e590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 784));
label_17e594:
    // 0x17e594: 0x8c99001c  lw          $t9, 0x1C($a0)
    ctx->pc = 0x17e594u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_17e598:
    // 0x17e598: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x17e598u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_17e59c:
    // 0x17e59c: 0x320f809  jalr        $t9
label_17e5a0:
    if (ctx->pc == 0x17E5A0u) {
        ctx->pc = 0x17E5A4u;
        goto label_17e5a4;
    }
    ctx->pc = 0x17E59Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x17E5A4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x17E5A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x17E5A4u; }
            if (ctx->pc != 0x17E5A4u) { return; }
        }
        }
    }
    ctx->pc = 0x17E5A4u;
label_17e5a4:
    // 0x17e5a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x17e5a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_17e5a8:
    // 0x17e5a8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x17e5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_17e5ac:
    // 0x17e5ac: 0xafa20340  sw          $v0, 0x340($sp)
    ctx->pc = 0x17e5acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 832), GPR_U32(ctx, 2));
label_17e5b0:
    // 0x17e5b0: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x17e5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_17e5b4:
    // 0x17e5b4: 0xc04b154  jal         func_12C550
label_17e5b8:
    if (ctx->pc == 0x17E5B8u) {
        ctx->pc = 0x17E5B8u;
            // 0x17e5b8: 0xafa5033c  sw          $a1, 0x33C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 828), GPR_U32(ctx, 5));
        ctx->pc = 0x17E5BCu;
        goto label_17e5bc;
    }
    ctx->pc = 0x17E5B4u;
    SET_GPR_U32(ctx, 31, 0x17E5BCu);
    ctx->pc = 0x17E5B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E5B4u;
            // 0x17e5b8: 0xafa5033c  sw          $a1, 0x33C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 828), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C550u;
    if (runtime->hasFunction(0x12C550u)) {
        auto targetFn = runtime->lookupFunction(0x12C550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E5BCu; }
        if (ctx->pc != 0x17E5BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Bilinear__10mgCTextureFi_0x12c550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E5BCu; }
        if (ctx->pc != 0x17E5BCu) { return; }
    }
    ctx->pc = 0x17E5BCu;
label_17e5bc:
    // 0x17e5bc: 0x93a501ac  lbu         $a1, 0x1AC($sp)
    ctx->pc = 0x17e5bcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 428)));
label_17e5c0:
    // 0x17e5c0: 0x30030001  andi        $v1, $zero, 0x1
    ctx->pc = 0x17e5c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
label_17e5c4:
    // 0x17e5c4: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x17e5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_17e5c8:
    // 0x17e5c8: 0x2403fffb  addiu       $v1, $zero, -0x5
    ctx->pc = 0x17e5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
label_17e5cc:
    // 0x17e5cc: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x17e5ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
label_17e5d0:
    // 0x17e5d0: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x17e5d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_17e5d4:
    // 0x17e5d4: 0xa3a301ac  sb          $v1, 0x1AC($sp)
    ctx->pc = 0x17e5d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 428), (uint8_t)GPR_U32(ctx, 3));
label_17e5d8:
    // 0x17e5d8: 0x8fa300fc  lw          $v1, 0xFC($sp)
    ctx->pc = 0x17e5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_17e5dc:
    // 0x17e5dc: 0x3082a  slt         $at, $zero, $v1
    ctx->pc = 0x17e5dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_17e5e0:
    // 0x17e5e0: 0x1020010c  beqz        $at, . + 4 + (0x10C << 2)
label_17e5e4:
    if (ctx->pc == 0x17E5E4u) {
        ctx->pc = 0x17E5E4u;
            // 0x17e5e4: 0xafa000c0  sw          $zero, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
        ctx->pc = 0x17E5E8u;
        goto label_17e5e8;
    }
    ctx->pc = 0x17E5E0u;
    {
        const bool branch_taken_0x17e5e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x17E5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E5E0u;
            // 0x17e5e4: 0xafa000c0  sw          $zero, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e5e0) {
            ctx->pc = 0x17EA14u;
            goto label_17ea14;
        }
    }
    ctx->pc = 0x17E5E8u;
label_17e5e8:
    // 0x17e5e8: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x17e5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
label_17e5ec:
    // 0x17e5ec: 0x8fa201f0  lw          $v0, 0x1F0($sp)
    ctx->pc = 0x17e5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_17e5f0:
    // 0x17e5f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17e5f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_17e5f4:
    // 0x17e5f4: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x17e5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_17e5f8:
    // 0x17e5f8: 0x27a60170  addiu       $a2, $sp, 0x170
    ctx->pc = 0x17e5f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_17e5fc:
    // 0x17e5fc: 0x27a701f0  addiu       $a3, $sp, 0x1F0
    ctx->pc = 0x17e5fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_17e600:
    // 0x17e600: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17e600u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_17e604:
    // 0x17e604: 0x2442fff8  addiu       $v0, $v0, -0x8
    ctx->pc = 0x17e604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_17e608:
    // 0x17e608: 0xafa201f0  sw          $v0, 0x1F0($sp)
    ctx->pc = 0x17e608u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
label_17e60c:
    // 0x17e60c: 0x27a201f8  addiu       $v0, $sp, 0x1F8
    ctx->pc = 0x17e60cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 504));
label_17e610:
    // 0x17e610: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17e610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17e614:
    // 0x17e614: 0x2443fff8  addiu       $v1, $v0, -0x8
    ctx->pc = 0x17e614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_17e618:
    // 0x17e618: 0x27a201f8  addiu       $v0, $sp, 0x1F8
    ctx->pc = 0x17e618u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 504));
label_17e61c:
    // 0x17e61c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17e61cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_17e620:
    // 0x17e620: 0x27a201f4  addiu       $v0, $sp, 0x1F4
    ctx->pc = 0x17e620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 500));
label_17e624:
    // 0x17e624: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17e624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17e628:
    // 0x17e628: 0x2443fff8  addiu       $v1, $v0, -0x8
    ctx->pc = 0x17e628u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_17e62c:
    // 0x17e62c: 0x27a201f4  addiu       $v0, $sp, 0x1F4
    ctx->pc = 0x17e62cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 500));
label_17e630:
    // 0x17e630: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17e630u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_17e634:
    // 0x17e634: 0x27a201fc  addiu       $v0, $sp, 0x1FC
    ctx->pc = 0x17e634u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 508));
label_17e638:
    // 0x17e638: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17e638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17e63c:
    // 0x17e63c: 0x2443fff8  addiu       $v1, $v0, -0x8
    ctx->pc = 0x17e63cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_17e640:
    // 0x17e640: 0x27a201fc  addiu       $v0, $sp, 0x1FC
    ctx->pc = 0x17e640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 508));
label_17e644:
    // 0x17e644: 0xc051244  jal         func_144910
label_17e648:
    if (ctx->pc == 0x17E648u) {
        ctx->pc = 0x17E648u;
            // 0x17e648: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x17E64Cu;
        goto label_17e64c;
    }
    ctx->pc = 0x17E644u;
    SET_GPR_U32(ctx, 31, 0x17E64Cu);
    ctx->pc = 0x17E648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E644u;
            // 0x17e648: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144910u;
    if (runtime->hasFunction(0x144910u)) {
        auto targetFn = runtime->lookupFunction(0x144910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E64Cu; }
        if (ctx->pc != 0x17E64Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkMoveImage__FP10mgCTexture9mgRect_i_P10mgCTexture9mgRect_i_P10mgCDrawEnv_0x144910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E64Cu; }
        if (ctx->pc != 0x17E64Cu) { return; }
    }
    ctx->pc = 0x17E64Cu;
label_17e64c:
    // 0x17e64c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x17e64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_17e650:
    // 0x17e650: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x17e650u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_17e654:
    // 0x17e654: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x17e654u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_17e658:
    // 0x17e658: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x17e658u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_17e65c:
    // 0x17e65c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17e65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_17e660:
    // 0x17e660: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x17e660u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
label_17e664:
    // 0x17e664: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17e664u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17e668:
    // 0x17e668: 0x30500001  andi        $s0, $v0, 0x1
    ctx->pc = 0x17e668u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_17e66c:
    // 0x17e66c: 0x24820008  addiu       $v0, $a0, 0x8
    ctx->pc = 0x17e66cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_17e670:
    // 0x17e670: 0xafa201f0  sw          $v0, 0x1F0($sp)
    ctx->pc = 0x17e670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 2));
label_17e674:
    // 0x17e674: 0x27a201f8  addiu       $v0, $sp, 0x1F8
    ctx->pc = 0x17e674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 504));
label_17e678:
    // 0x17e678: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17e678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17e67c:
    // 0x17e67c: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x17e67cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_17e680:
    // 0x17e680: 0x27a201f8  addiu       $v0, $sp, 0x1F8
    ctx->pc = 0x17e680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 504));
label_17e684:
    // 0x17e684: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17e684u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_17e688:
    // 0x17e688: 0x27a201f4  addiu       $v0, $sp, 0x1F4
    ctx->pc = 0x17e688u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 500));
label_17e68c:
    // 0x17e68c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17e68cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17e690:
    // 0x17e690: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x17e690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_17e694:
    // 0x17e694: 0x27a201f4  addiu       $v0, $sp, 0x1F4
    ctx->pc = 0x17e694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 500));
label_17e698:
    // 0x17e698: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17e698u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_17e69c:
    // 0x17e69c: 0x27a201fc  addiu       $v0, $sp, 0x1FC
    ctx->pc = 0x17e69cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 508));
label_17e6a0:
    // 0x17e6a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x17e6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17e6a4:
    // 0x17e6a4: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x17e6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_17e6a8:
    // 0x17e6a8: 0x27a201fc  addiu       $v0, $sp, 0x1FC
    ctx->pc = 0x17e6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 508));
label_17e6ac:
    // 0x17e6ac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x17e6acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_17e6b0:
    // 0x17e6b0: 0xc64c0000  lwc1        $f12, 0x0($s2)
    ctx->pc = 0x17e6b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_17e6b4:
    // 0x17e6b4: 0x27a201f4  addiu       $v0, $sp, 0x1F4
    ctx->pc = 0x17e6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 500));
label_17e6b8:
    // 0x17e6b8: 0x8c560000  lw          $s6, 0x0($v0)
    ctx->pc = 0x17e6b8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17e6bc:
    // 0x17e6bc: 0x8fb301f0  lw          $s3, 0x1F0($sp)
    ctx->pc = 0x17e6bcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_17e6c0:
    // 0x17e6c0: 0x46006543  div.s       $f21, $f12, $f0
    ctx->pc = 0x17e6c0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[12], ctx->f[0]); }
label_17e6c4:
    // 0x17e6c4: 0x27a201f8  addiu       $v0, $sp, 0x1F8
    ctx->pc = 0x17e6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 504));
label_17e6c8:
    // 0x17e6c8: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x17e6c8u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17e6cc:
    // 0x17e6cc: 0x27a201fc  addiu       $v0, $sp, 0x1FC
    ctx->pc = 0x17e6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 508));
label_17e6d0:
    // 0x17e6d0: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x17e6d0u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_17e6d4:
    // 0x17e6d4: 0x0  nop
    ctx->pc = 0x17e6d4u;
    // NOP
label_17e6d8:
    // 0x17e6d8: 0x0  nop
    ctx->pc = 0x17e6d8u;
    // NOP
label_17e6dc:
    // 0x17e6dc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x17e6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_17e6e0:
    // 0x17e6e0: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_17e6e4:
    if (ctx->pc == 0x17E6E4u) {
        ctx->pc = 0x17E6E8u;
        goto label_17e6e8;
    }
    ctx->pc = 0x17E6E0u;
    {
        const bool branch_taken_0x17e6e0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x17e6e0) {
            ctx->pc = 0x17E6F4u;
            goto label_17e6f4;
        }
    }
    ctx->pc = 0x17E6E8u;
label_17e6e8:
    // 0x17e6e8: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
label_17e6ec:
    if (ctx->pc == 0x17E6ECu) {
        ctx->pc = 0x17E6F0u;
        goto label_17e6f0;
    }
    ctx->pc = 0x17E6E8u;
    {
        const bool branch_taken_0x17e6e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x17e6e8) {
            ctx->pc = 0x17E6F4u;
            goto label_17e6f4;
        }
    }
    ctx->pc = 0x17E6F0u;
label_17e6f0:
    // 0x17e6f0: 0x2610fffe  addiu       $s0, $s0, -0x2
    ctx->pc = 0x17e6f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967294));
label_17e6f4:
    // 0x17e6f4: 0xdf828a38  ld          $v0, -0x75C8($gp)
    ctx->pc = 0x17e6f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294937144)));
label_17e6f8:
    // 0x17e6f8: 0x27a30390  addiu       $v1, $sp, 0x390
    ctx->pc = 0x17e6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
label_17e6fc:
    // 0x17e6fc: 0xc0516b8  jal         func_145AE0
label_17e700:
    if (ctx->pc == 0x17E700u) {
        ctx->pc = 0x17E700u;
            // 0x17e700: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->pc = 0x17E704u;
        goto label_17e704;
    }
    ctx->pc = 0x17E6FCu;
    SET_GPR_U32(ctx, 31, 0x17E704u);
    ctx->pc = 0x17E700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E6FCu;
            // 0x17e700: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145AE0u;
    if (runtime->hasFunction(0x145AE0u)) {
        auto targetFn = runtime->lookupFunction(0x145AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E704u; }
        if (ctx->pc != 0x17E704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransZPrim__Ff_0x145ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E704u; }
        if (ctx->pc != 0x17E704u) { return; }
    }
    ctx->pc = 0x17E704u;
label_17e704:
    // 0x17e704: 0xafa20390  sw          $v0, 0x390($sp)
    ctx->pc = 0x17e704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 912), GPR_U32(ctx, 2));
label_17e708:
    // 0x17e708: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x17e708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_17e70c:
    // 0x17e70c: 0xc0516b8  jal         func_145AE0
label_17e710:
    if (ctx->pc == 0x17E710u) {
        ctx->pc = 0x17E710u;
            // 0x17e710: 0x4600ab00  add.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x17E714u;
        goto label_17e714;
    }
    ctx->pc = 0x17E70Cu;
    SET_GPR_U32(ctx, 31, 0x17E714u);
    ctx->pc = 0x17E710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E70Cu;
            // 0x17e710: 0x4600ab00  add.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x145AE0u;
    if (runtime->hasFunction(0x145AE0u)) {
        auto targetFn = runtime->lookupFunction(0x145AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E714u; }
        if (ctx->pc != 0x17E714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgTransZPrim__Ff_0x145ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E714u; }
        if (ctx->pc != 0x17E714u) { return; }
    }
    ctx->pc = 0x17E714u;
label_17e714:
    // 0x17e714: 0xafa20394  sw          $v0, 0x394($sp)
    ctx->pc = 0x17e714u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 916), GPR_U32(ctx, 2));
label_17e718:
    // 0x17e718: 0x27a60398  addiu       $a2, $sp, 0x398
    ctx->pc = 0x17e718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 920));
label_17e71c:
    // 0x17e71c: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x17e71cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_17e720:
    // 0x17e720: 0xdf838a40  ld          $v1, -0x75C0($gp)
    ctx->pc = 0x17e720u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294937152)));
label_17e724:
    // 0x17e724: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17e724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17e728:
    // 0x17e728: 0x0  nop
    ctx->pc = 0x17e728u;
    // NOP
label_17e72c:
    // 0x17e72c: 0x46140302  mul.s       $f12, $f0, $f20
    ctx->pc = 0x17e72cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
label_17e730:
    // 0x17e730: 0xc0a248c  jal         func_289230
label_17e734:
    if (ctx->pc == 0x17E734u) {
        ctx->pc = 0x17E734u;
            // 0x17e734: 0xfcc30000  sd          $v1, 0x0($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
        ctx->pc = 0x17E738u;
        goto label_17e738;
    }
    ctx->pc = 0x17E730u;
    SET_GPR_U32(ctx, 31, 0x17E738u);
    ctx->pc = 0x17E734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E730u;
            // 0x17e734: 0xfcc30000  sd          $v1, 0x0($a2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E738u; }
        if (ctx->pc != 0x17E738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E738u; }
        if (ctx->pc != 0x17E738u) { return; }
    }
    ctx->pc = 0x17E738u;
label_17e738:
    // 0x17e738: 0xafa20398  sw          $v0, 0x398($sp)
    ctx->pc = 0x17e738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 920), GPR_U32(ctx, 2));
label_17e73c:
    // 0x17e73c: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x17e73cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_17e740:
    // 0x17e740: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17e740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17e744:
    // 0x17e744: 0xc0a248c  jal         func_289230
label_17e748:
    if (ctx->pc == 0x17E748u) {
        ctx->pc = 0x17E748u;
            // 0x17e748: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->pc = 0x17E74Cu;
        goto label_17e74c;
    }
    ctx->pc = 0x17E744u;
    SET_GPR_U32(ctx, 31, 0x17E74Cu);
    ctx->pc = 0x17E748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E744u;
            // 0x17e748: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E74Cu; }
        if (ctx->pc != 0x17E74Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E74Cu; }
        if (ctx->pc != 0x17E74Cu) { return; }
    }
    ctx->pc = 0x17E74Cu;
label_17e74c:
    // 0x17e74c: 0xafa2039c  sw          $v0, 0x39C($sp)
    ctx->pc = 0x17e74cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 924), GPR_U32(ctx, 2));
label_17e750:
    // 0x17e750: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x17e750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_17e754:
    // 0x17e754: 0xc04d128  jal         func_1344A0
label_17e758:
    if (ctx->pc == 0x17E758u) {
        ctx->pc = 0x17E758u;
            // 0x17e758: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x17E75Cu;
        goto label_17e75c;
    }
    ctx->pc = 0x17E754u;
    SET_GPR_U32(ctx, 31, 0x17E75Cu);
    ctx->pc = 0x17E758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E754u;
            // 0x17e758: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E75Cu; }
        if (ctx->pc != 0x17E75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E75Cu; }
        if (ctx->pc != 0x17E75Cu) { return; }
    }
    ctx->pc = 0x17E75Cu;
label_17e75c:
    // 0x17e75c: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x17e75cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_17e760:
    // 0x17e760: 0xc04d368  jal         func_134DA0
label_17e764:
    if (ctx->pc == 0x17E764u) {
        ctx->pc = 0x17E764u;
            // 0x17e764: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x17E768u;
        goto label_17e768;
    }
    ctx->pc = 0x17E760u;
    SET_GPR_U32(ctx, 31, 0x17E768u);
    ctx->pc = 0x17E764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E760u;
            // 0x17e764: 0x27a50170  addiu       $a1, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134DA0u;
    if (runtime->hasFunction(0x134DA0u)) {
        auto targetFn = runtime->lookupFunction(0x134DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E768u; }
        if (ctx->pc != 0x17E768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Texture__11mgCDrawPrimFP10mgCTexture_0x134da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E768u; }
        if (ctx->pc != 0x17E768u) { return; }
    }
    ctx->pc = 0x17E768u;
label_17e768:
    // 0x17e768: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x17e768u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_17e76c:
    // 0x17e76c: 0x2933823  subu        $a3, $s4, $s3
    ctx->pc = 0x17e76cu;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_17e770:
    // 0x17e770: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x17e770u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_17e774:
    // 0x17e774: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x17e774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_17e778:
    // 0x17e778: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x17e778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_17e77c:
    // 0x17e77c: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x17e77cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_17e780:
    // 0x17e780: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x17e780u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_17e784:
    // 0x17e784: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x17e784u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_17e788:
    // 0x17e788: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17e788u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17e78c:
    // 0x17e78c: 0x0  nop
    ctx->pc = 0x17e78cu;
    // NOP
label_17e790:
    // 0x17e790: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17e790u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_17e794:
    // 0x17e794: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x17e794u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
label_17e798:
    // 0x17e798: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x17e798u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_17e79c:
    // 0x17e79c: 0x0  nop
    ctx->pc = 0x17e79cu;
    // NOP
label_17e7a0:
    // 0x17e7a0: 0x46020543  div.s       $f21, $f0, $f2
    ctx->pc = 0x17e7a0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
label_17e7a4:
    // 0x17e7a4: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x17e7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_17e7a8:
    // 0x17e7a8: 0x623025  or          $a2, $v1, $v0
    ctx->pc = 0x17e7a8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_17e7ac:
    // 0x17e7ac: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x17e7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_17e7b0:
    // 0x17e7b0: 0x44930000  mtc1        $s3, $f0
    ctx->pc = 0x17e7b0u;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17e7b4:
    // 0x17e7b4: 0x0  nop
    ctx->pc = 0x17e7b4u;
    // NOP
label_17e7b8:
    // 0x17e7b8: 0x46020d83  div.s       $f22, $f1, $f2
    ctx->pc = 0x17e7b8u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[22] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
label_17e7bc:
    // 0x17e7bc: 0x46800620  cvt.s.w     $f24, $f0
    ctx->pc = 0x17e7bcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[24] = FPU_CVT_S_W(tmp); }
label_17e7c0:
    // 0x17e7c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x17e7c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17e7c4:
    // 0x17e7c4: 0xc04d360  jal         func_134D80
label_17e7c8:
    if (ctx->pc == 0x17E7C8u) {
        ctx->pc = 0x17E7C8u;
            // 0x17e7c8: 0x468005e0  cvt.s.w     $f23, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x17E7CCu;
        goto label_17e7cc;
    }
    ctx->pc = 0x17E7C4u;
    SET_GPR_U32(ctx, 31, 0x17E7CCu);
    ctx->pc = 0x17E7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E7C4u;
            // 0x17e7c8: 0x468005e0  cvt.s.w     $f23, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[23] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D80u;
    if (runtime->hasFunction(0x134D80u)) {
        auto targetFn = runtime->lookupFunction(0x134D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E7CCu; }
        if (ctx->pc != 0x17E7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Direct__11mgCDrawPrimFUlUl_0x134d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E7CCu; }
        if (ctx->pc != 0x17E7CCu) { return; }
    }
    ctx->pc = 0x17E7CCu;
label_17e7cc:
    // 0x17e7cc: 0x8fa80398  lw          $t0, 0x398($sp)
    ctx->pc = 0x17e7ccu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 920)));
label_17e7d0:
    // 0x17e7d0: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x17e7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_17e7d4:
    // 0x17e7d4: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x17e7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_17e7d8:
    // 0x17e7d8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x17e7d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17e7dc:
    // 0x17e7dc: 0xc04d320  jal         func_134C80
label_17e7e0:
    if (ctx->pc == 0x17E7E0u) {
        ctx->pc = 0x17E7E0u;
            // 0x17e7e0: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17E7E4u;
        goto label_17e7e4;
    }
    ctx->pc = 0x17E7DCu;
    SET_GPR_U32(ctx, 31, 0x17E7E4u);
    ctx->pc = 0x17E7E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E7DCu;
            // 0x17e7e0: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E7E4u; }
        if (ctx->pc != 0x17E7E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E7E4u; }
        if (ctx->pc != 0x17E7E4u) { return; }
    }
    ctx->pc = 0x17E7E4u;
label_17e7e4:
    // 0x17e7e4: 0xc0a248c  jal         func_289230
label_17e7e8:
    if (ctx->pc == 0x17E7E8u) {
        ctx->pc = 0x17E7E8u;
            // 0x17e7e8: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->pc = 0x17E7ECu;
        goto label_17e7ec;
    }
    ctx->pc = 0x17E7E4u;
    SET_GPR_U32(ctx, 31, 0x17E7ECu);
    ctx->pc = 0x17E7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E7E4u;
            // 0x17e7e8: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E7ECu; }
        if (ctx->pc != 0x17E7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E7ECu; }
        if (ctx->pc != 0x17E7ECu) { return; }
    }
    ctx->pc = 0x17E7ECu;
label_17e7ec:
    // 0x17e7ec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x17e7ecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17e7f0:
    // 0x17e7f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17e7f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17e7f4:
    // 0x17e7f4: 0x26c60010  addiu       $a2, $s6, 0x10
    ctx->pc = 0x17e7f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
label_17e7f8:
    // 0x17e7f8: 0xc04d34c  jal         func_134D30
label_17e7fc:
    if (ctx->pc == 0x17E7FCu) {
        ctx->pc = 0x17E7FCu;
            // 0x17e7fc: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->pc = 0x17E800u;
        goto label_17e800;
    }
    ctx->pc = 0x17E7F8u;
    SET_GPR_U32(ctx, 31, 0x17E800u);
    ctx->pc = 0x17E7FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E7F8u;
            // 0x17e7fc: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D30u;
    if (runtime->hasFunction(0x134D30u)) {
        auto targetFn = runtime->lookupFunction(0x134D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E800u; }
        if (ctx->pc != 0x17E800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd4__11mgCDrawPrimFii_0x134d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E800u; }
        if (ctx->pc != 0x17E800u) { return; }
    }
    ctx->pc = 0x17E800u;
label_17e800:
    // 0x17e800: 0xc0a248c  jal         func_289230
label_17e804:
    if (ctx->pc == 0x17E804u) {
        ctx->pc = 0x17E804u;
            // 0x17e804: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->pc = 0x17E808u;
        goto label_17e808;
    }
    ctx->pc = 0x17E800u;
    SET_GPR_U32(ctx, 31, 0x17E808u);
    ctx->pc = 0x17E804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E800u;
            // 0x17e804: 0x4600bb06  mov.s       $f12, $f23 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[23]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E808u; }
        if (ctx->pc != 0x17E808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E808u; }
        if (ctx->pc != 0x17E808u) { return; }
    }
    ctx->pc = 0x17E808u;
label_17e808:
    // 0x17e808: 0x8fa70390  lw          $a3, 0x390($sp)
    ctx->pc = 0x17e808u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 912)));
label_17e80c:
    // 0x17e80c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x17e80cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17e810:
    // 0x17e810: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17e810u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17e814:
    // 0x17e814: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x17e814u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_17e818:
    // 0x17e818: 0xc04d2ec  jal         func_134BB0
label_17e81c:
    if (ctx->pc == 0x17E81Cu) {
        ctx->pc = 0x17E81Cu;
            // 0x17e81c: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17E820u;
        goto label_17e820;
    }
    ctx->pc = 0x17E818u;
    SET_GPR_U32(ctx, 31, 0x17E820u);
    ctx->pc = 0x17E81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E818u;
            // 0x17e81c: 0x3c0302d  daddu       $a2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134BB0u;
    if (runtime->hasFunction(0x134BB0u)) {
        auto targetFn = runtime->lookupFunction(0x134BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E820u; }
        if (ctx->pc != 0x17E820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFiii_0x134bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E820u; }
        if (ctx->pc != 0x17E820u) { return; }
    }
    ctx->pc = 0x17E820u;
label_17e820:
    // 0x17e820: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x17e820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17e824:
    // 0x17e824: 0x26a6fff0  addiu       $a2, $s5, -0x10
    ctx->pc = 0x17e824u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967280));
label_17e828:
    // 0x17e828: 0xc04d34c  jal         func_134D30
label_17e82c:
    if (ctx->pc == 0x17E82Cu) {
        ctx->pc = 0x17E82Cu;
            // 0x17e82c: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->pc = 0x17E830u;
        goto label_17e830;
    }
    ctx->pc = 0x17E828u;
    SET_GPR_U32(ctx, 31, 0x17E830u);
    ctx->pc = 0x17E82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E828u;
            // 0x17e82c: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D30u;
    if (runtime->hasFunction(0x134D30u)) {
        auto targetFn = runtime->lookupFunction(0x134D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E830u; }
        if (ctx->pc != 0x17E830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd4__11mgCDrawPrimFii_0x134d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E830u; }
        if (ctx->pc != 0x17E830u) { return; }
    }
    ctx->pc = 0x17E830u;
label_17e830:
    // 0x17e830: 0x8fa70390  lw          $a3, 0x390($sp)
    ctx->pc = 0x17e830u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 912)));
label_17e834:
    // 0x17e834: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17e834u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17e838:
    // 0x17e838: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x17e838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_17e83c:
    // 0x17e83c: 0xc04d2ec  jal         func_134BB0
label_17e840:
    if (ctx->pc == 0x17E840u) {
        ctx->pc = 0x17E840u;
            // 0x17e840: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17E844u;
        goto label_17e844;
    }
    ctx->pc = 0x17E83Cu;
    SET_GPR_U32(ctx, 31, 0x17E844u);
    ctx->pc = 0x17E840u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E83Cu;
            // 0x17e840: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134BB0u;
    if (runtime->hasFunction(0x134BB0u)) {
        auto targetFn = runtime->lookupFunction(0x134BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E844u; }
        if (ctx->pc != 0x17E844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFiii_0x134bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E844u; }
        if (ctx->pc != 0x17E844u) { return; }
    }
    ctx->pc = 0x17E844u;
label_17e844:
    // 0x17e844: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x17e844u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17e848:
    // 0x17e848: 0x0  nop
    ctx->pc = 0x17e848u;
    // NOP
label_17e84c:
    // 0x17e84c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17e84cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_17e850:
    // 0x17e850: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x17e850u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17e854:
    // 0x17e854: 0x0  nop
    ctx->pc = 0x17e854u;
    // NOP
label_17e858:
    // 0x17e858: 0x4500002c  bc1f        . + 4 + (0x2C << 2)
label_17e85c:
    if (ctx->pc == 0x17E85Cu) {
        ctx->pc = 0x17E860u;
        goto label_17e860;
    }
    ctx->pc = 0x17E858u;
    {
        const bool branch_taken_0x17e858 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x17e858) {
            ctx->pc = 0x17E90Cu;
            goto label_17e90c;
        }
    }
    ctx->pc = 0x17E860u;
label_17e860:
    // 0x17e860: 0x8fa80398  lw          $t0, 0x398($sp)
    ctx->pc = 0x17e860u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 920)));
label_17e864:
    // 0x17e864: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x17e864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_17e868:
    // 0x17e868: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x17e868u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_17e86c:
    // 0x17e86c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x17e86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_17e870:
    // 0x17e870: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x17e870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_17e874:
    // 0x17e874: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x17e874u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_17e878:
    // 0x17e878: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x17e878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_17e87c:
    // 0x17e87c: 0xc04d320  jal         func_134C80
label_17e880:
    if (ctx->pc == 0x17E880u) {
        ctx->pc = 0x17E880u;
            // 0x17e880: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17E884u;
        goto label_17e884;
    }
    ctx->pc = 0x17E87Cu;
    SET_GPR_U32(ctx, 31, 0x17E884u);
    ctx->pc = 0x17E880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E87Cu;
            // 0x17e880: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E884u; }
        if (ctx->pc != 0x17E884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E884u; }
        if (ctx->pc != 0x17E884u) { return; }
    }
    ctx->pc = 0x17E884u;
label_17e884:
    // 0x17e884: 0xc0a248c  jal         func_289230
label_17e888:
    if (ctx->pc == 0x17E888u) {
        ctx->pc = 0x17E888u;
            // 0x17e888: 0x4616c300  add.s       $f12, $f24, $f22 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[24], ctx->f[22]);
        ctx->pc = 0x17E88Cu;
        goto label_17e88c;
    }
    ctx->pc = 0x17E884u;
    SET_GPR_U32(ctx, 31, 0x17E88Cu);
    ctx->pc = 0x17E888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E884u;
            // 0x17e888: 0x4616c300  add.s       $f12, $f24, $f22 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[24], ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E88Cu; }
        if (ctx->pc != 0x17E88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E88Cu; }
        if (ctx->pc != 0x17E88Cu) { return; }
    }
    ctx->pc = 0x17E88Cu;
label_17e88c:
    // 0x17e88c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x17e88cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17e890:
    // 0x17e890: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17e890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17e894:
    // 0x17e894: 0x26c60010  addiu       $a2, $s6, 0x10
    ctx->pc = 0x17e894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
label_17e898:
    // 0x17e898: 0xc04d34c  jal         func_134D30
label_17e89c:
    if (ctx->pc == 0x17E89Cu) {
        ctx->pc = 0x17E89Cu;
            // 0x17e89c: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->pc = 0x17E8A0u;
        goto label_17e8a0;
    }
    ctx->pc = 0x17E898u;
    SET_GPR_U32(ctx, 31, 0x17E8A0u);
    ctx->pc = 0x17E89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E898u;
            // 0x17e89c: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D30u;
    if (runtime->hasFunction(0x134D30u)) {
        auto targetFn = runtime->lookupFunction(0x134D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E8A0u; }
        if (ctx->pc != 0x17E8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd4__11mgCDrawPrimFii_0x134d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E8A0u; }
        if (ctx->pc != 0x17E8A0u) { return; }
    }
    ctx->pc = 0x17E8A0u;
label_17e8a0:
    // 0x17e8a0: 0xc0a248c  jal         func_289230
label_17e8a4:
    if (ctx->pc == 0x17E8A4u) {
        ctx->pc = 0x17E8A4u;
            // 0x17e8a4: 0x4615bb00  add.s       $f12, $f23, $f21 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[23], ctx->f[21]);
        ctx->pc = 0x17E8A8u;
        goto label_17e8a8;
    }
    ctx->pc = 0x17E8A0u;
    SET_GPR_U32(ctx, 31, 0x17E8A8u);
    ctx->pc = 0x17E8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E8A0u;
            // 0x17e8a4: 0x4615bb00  add.s       $f12, $f23, $f21 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[23], ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E8A8u; }
        if (ctx->pc != 0x17E8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E8A8u; }
        if (ctx->pc != 0x17E8A8u) { return; }
    }
    ctx->pc = 0x17E8A8u;
label_17e8a8:
    // 0x17e8a8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x17e8a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17e8ac:
    // 0x17e8ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x17e8acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_17e8b0:
    // 0x17e8b0: 0x101080  sll         $v0, $s0, 2
    ctx->pc = 0x17e8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_17e8b4:
    // 0x17e8b4: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x17e8b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_17e8b8:
    // 0x17e8b8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x17e8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_17e8bc:
    // 0x17e8bc: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x17e8bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_17e8c0:
    // 0x17e8c0: 0x8c530390  lw          $s3, 0x390($v0)
    ctx->pc = 0x17e8c0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 912)));
label_17e8c4:
    // 0x17e8c4: 0xc04d2ec  jal         func_134BB0
label_17e8c8:
    if (ctx->pc == 0x17E8C8u) {
        ctx->pc = 0x17E8C8u;
            // 0x17e8c8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17E8CCu;
        goto label_17e8cc;
    }
    ctx->pc = 0x17E8C4u;
    SET_GPR_U32(ctx, 31, 0x17E8CCu);
    ctx->pc = 0x17E8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E8C4u;
            // 0x17e8c8: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134BB0u;
    if (runtime->hasFunction(0x134BB0u)) {
        auto targetFn = runtime->lookupFunction(0x134BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E8CCu; }
        if (ctx->pc != 0x17E8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFiii_0x134bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E8CCu; }
        if (ctx->pc != 0x17E8CCu) { return; }
    }
    ctx->pc = 0x17E8CCu;
label_17e8cc:
    // 0x17e8cc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17e8ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_17e8d0:
    // 0x17e8d0: 0x26a6fff0  addiu       $a2, $s5, -0x10
    ctx->pc = 0x17e8d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967280));
label_17e8d4:
    // 0x17e8d4: 0xc04d34c  jal         func_134D30
label_17e8d8:
    if (ctx->pc == 0x17E8D8u) {
        ctx->pc = 0x17E8D8u;
            // 0x17e8d8: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->pc = 0x17E8DCu;
        goto label_17e8dc;
    }
    ctx->pc = 0x17E8D4u;
    SET_GPR_U32(ctx, 31, 0x17E8DCu);
    ctx->pc = 0x17E8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E8D4u;
            // 0x17e8d8: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134D30u;
    if (runtime->hasFunction(0x134D30u)) {
        auto targetFn = runtime->lookupFunction(0x134D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E8DCu; }
        if (ctx->pc != 0x17E8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureCrd4__11mgCDrawPrimFii_0x134d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E8DCu; }
        if (ctx->pc != 0x17E8DCu) { return; }
    }
    ctx->pc = 0x17E8DCu;
label_17e8dc:
    // 0x17e8dc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x17e8dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_17e8e0:
    // 0x17e8e0: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x17e8e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_17e8e4:
    // 0x17e8e4: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x17e8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_17e8e8:
    // 0x17e8e8: 0xc04d2ec  jal         func_134BB0
label_17e8ec:
    if (ctx->pc == 0x17E8ECu) {
        ctx->pc = 0x17E8ECu;
            // 0x17e8ec: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x17E8F0u;
        goto label_17e8f0;
    }
    ctx->pc = 0x17E8E8u;
    SET_GPR_U32(ctx, 31, 0x17E8F0u);
    ctx->pc = 0x17E8ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E8E8u;
            // 0x17e8ec: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134BB0u;
    if (runtime->hasFunction(0x134BB0u)) {
        auto targetFn = runtime->lookupFunction(0x134BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E8F0u; }
        if (ctx->pc != 0x17E8F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex4__11mgCDrawPrimFiii_0x134bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E8F0u; }
        if (ctx->pc != 0x17E8F0u) { return; }
    }
    ctx->pc = 0x17E8F0u;
label_17e8f0:
    // 0x17e8f0: 0x44910000  mtc1        $s1, $f0
    ctx->pc = 0x17e8f0u;
    { uint32_t bits = GPR_U32(ctx, 17); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_17e8f4:
    // 0x17e8f4: 0x4615bdc0  add.s       $f23, $f23, $f21
    ctx->pc = 0x17e8f4u;
    ctx->f[23] = FPU_ADD_S(ctx->f[23], ctx->f[21]);
label_17e8f8:
    // 0x17e8f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x17e8f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_17e8fc:
    // 0x17e8fc: 0x4600b834  c.lt.s      $f23, $f0
    ctx->pc = 0x17e8fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[23], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_17e900:
    // 0x17e900: 0x0  nop
    ctx->pc = 0x17e900u;
    // NOP
label_17e904:
    // 0x17e904: 0x4501ffd6  bc1t        . + 4 + (-0x2A << 2)
label_17e908:
    if (ctx->pc == 0x17E908u) {
        ctx->pc = 0x17E908u;
            // 0x17e908: 0x4616c600  add.s       $f24, $f24, $f22 (Delay Slot)
        ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[22]);
        ctx->pc = 0x17E90Cu;
        goto label_17e90c;
    }
    ctx->pc = 0x17E904u;
    {
        const bool branch_taken_0x17e904 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x17E908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17E904u;
            // 0x17e908: 0x4616c600  add.s       $f24, $f24, $f22 (Delay Slot)
        ctx->f[24] = FPU_ADD_S(ctx->f[24], ctx->f[22]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e904) {
            ctx->pc = 0x17E860u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17e860;
        }
    }
    ctx->pc = 0x17E90Cu;
label_17e90c:
    // 0x17e90c: 0x0  nop
    ctx->pc = 0x17e90cu;
    // NOP
label_17e910:
    // 0x17e910: 0xc04d1a4  jal         func_134690
label_17e914:
    if (ctx->pc == 0x17E914u) {
        ctx->pc = 0x17E914u;
            // 0x17e914: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->pc = 0x17E918u;
        goto label_17e918;
    }
    ctx->pc = 0x17E910u;
    SET_GPR_U32(ctx, 31, 0x17E918u);
    ctx->pc = 0x17E914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x17E910u;
            // 0x17e914: 0x27a40200  addiu       $a0, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E918u; }
        if (ctx->pc != 0x17E918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17E918u; }
        if (ctx->pc != 0x17E918u) { return; }
    }
    ctx->pc = 0x17E918u;
label_17e918:
    // 0x17e918: 0x8fa400e0  lw          $a0, 0xE0($sp)
    ctx->pc = 0x17e918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_17e91c:
    // 0x17e91c: 0x3c035555  lui         $v1, 0x5555
    ctx->pc = 0x17e91cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)21845 << 16));
label_17e920:
    // 0x17e920: 0x8fa601f0  lw          $a2, 0x1F0($sp)
    ctx->pc = 0x17e920u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_17e924:
    // 0x17e924: 0x34635556  ori         $v1, $v1, 0x5556
    ctx->pc = 0x17e924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)21846);
label_17e928:
    // 0x17e928: 0x27b00170  addiu       $s0, $sp, 0x170
    ctx->pc = 0x17e928u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_17e92c:
    // 0x17e92c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x17e92cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_17e930:
    // 0x17e930: 0xafa400e0  sw          $a0, 0xE0($sp)
    ctx->pc = 0x17e930u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 4));
label_17e934:
    // 0x17e934: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x17e934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_17e938:
    // 0x17e938: 0xafa601e0  sw          $a2, 0x1E0($sp)
    ctx->pc = 0x17e938u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 6));
label_17e93c:
    // 0x17e93c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x17e93cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_17e940:
    // 0x17e940: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x17e940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
label_17e944:
    // 0x17e944: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x17e944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_17e948:
    // 0x17e948: 0x8fa400fc  lw          $a0, 0xFC($sp)
    ctx->pc = 0x17e948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_17e94c:
    // 0x17e94c: 0xa4282a  slt         $a1, $a1, $a0
    ctx->pc = 0x17e94cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_17e950:
    // 0x17e950: 0x27a401f4  addiu       $a0, $sp, 0x1F4
    ctx->pc = 0x17e950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 500));
label_17e954:
    // 0x17e954: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x17e954u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17e958:
    // 0x17e958: 0x27a401e4  addiu       $a0, $sp, 0x1E4
    ctx->pc = 0x17e958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 484));
label_17e95c:
    // 0x17e95c: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x17e95cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_17e960:
    // 0x17e960: 0x27a401f8  addiu       $a0, $sp, 0x1F8
    ctx->pc = 0x17e960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 504));
label_17e964:
    // 0x17e964: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x17e964u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17e968:
    // 0x17e968: 0x27a401e8  addiu       $a0, $sp, 0x1E8
    ctx->pc = 0x17e968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 488));
label_17e96c:
    // 0x17e96c: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x17e96cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_17e970:
    // 0x17e970: 0x27a401fc  addiu       $a0, $sp, 0x1FC
    ctx->pc = 0x17e970u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 508));
label_17e974:
    // 0x17e974: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x17e974u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17e978:
    // 0x17e978: 0x27a401ec  addiu       $a0, $sp, 0x1EC
    ctx->pc = 0x17e978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 492));
label_17e97c:
    // 0x17e97c: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x17e97cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_17e980:
    // 0x17e980: 0x27a401e8  addiu       $a0, $sp, 0x1E8
    ctx->pc = 0x17e980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 488));
label_17e984:
    // 0x17e984: 0x8fa601e0  lw          $a2, 0x1E0($sp)
    ctx->pc = 0x17e984u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
label_17e988:
    // 0x17e988: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x17e988u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17e98c:
    // 0x17e98c: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x17e98cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_17e990:
    // 0x17e990: 0xe63823  subu        $a3, $a3, $a2
    ctx->pc = 0x17e990u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_17e994:
    // 0x17e994: 0x873021  addu        $a2, $a0, $a3
    ctx->pc = 0x17e994u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_17e998:
    // 0x17e998: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x17e998u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_17e99c:
    // 0x17e99c: 0xafa601f0  sw          $a2, 0x1F0($sp)
    ctx->pc = 0x17e99cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 6));
label_17e9a0:
    // 0x17e9a0: 0x640018  mult        $zero, $v1, $a0
    ctx->pc = 0x17e9a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_17e9a4:
    // 0x17e9a4: 0x43fc2  srl         $a3, $a0, 31
    ctx->pc = 0x17e9a4u;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
label_17e9a8:
    // 0x17e9a8: 0x8fa401f0  lw          $a0, 0x1F0($sp)
    ctx->pc = 0x17e9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
label_17e9ac:
    // 0x17e9ac: 0x3010  mfhi        $a2
    ctx->pc = 0x17e9acu;
    SET_GPR_U64(ctx, 6, ctx->hi);
label_17e9b0:
    // 0x17e9b0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x17e9b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
label_17e9b4:
    // 0x17e9b4: 0x863021  addu        $a2, $a0, $a2
    ctx->pc = 0x17e9b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_17e9b8:
    // 0x17e9b8: 0x27a401f8  addiu       $a0, $sp, 0x1F8
    ctx->pc = 0x17e9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 504));
label_17e9bc:
    // 0x17e9bc: 0xac860000  sw          $a2, 0x0($a0)
    ctx->pc = 0x17e9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 6));
label_17e9c0:
    // 0x17e9c0: 0x27a401ec  addiu       $a0, $sp, 0x1EC
    ctx->pc = 0x17e9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 492));
label_17e9c4:
    // 0x17e9c4: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x17e9c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17e9c8:
    // 0x17e9c8: 0x27a401e4  addiu       $a0, $sp, 0x1E4
    ctx->pc = 0x17e9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 484));
label_17e9cc:
    // 0x17e9cc: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x17e9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17e9d0:
    // 0x17e9d0: 0x27a401f4  addiu       $a0, $sp, 0x1F4
    ctx->pc = 0x17e9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 500));
label_17e9d4:
    // 0x17e9d4: 0xe63023  subu        $a2, $a3, $a2
    ctx->pc = 0x17e9d4u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_17e9d8:
    // 0x17e9d8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x17e9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_17e9dc:
    // 0x17e9dc: 0x863821  addu        $a3, $a0, $a2
    ctx->pc = 0x17e9dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_17e9e0:
    // 0x17e9e0: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x17e9e0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
label_17e9e4:
    // 0x17e9e4: 0x27a401f4  addiu       $a0, $sp, 0x1F4
    ctx->pc = 0x17e9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 500));
label_17e9e8:
    // 0x17e9e8: 0x660018  mult        $zero, $v1, $a2
    ctx->pc = 0x17e9e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_17e9ec:
    // 0x17e9ec: 0xac870000  sw          $a3, 0x0($a0)
    ctx->pc = 0x17e9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 7));
label_17e9f0:
    // 0x17e9f0: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x17e9f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_17e9f4:
    // 0x17e9f4: 0x637c2  srl         $a2, $a2, 31
    ctx->pc = 0x17e9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
label_17e9f8:
    // 0x17e9f8: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x17e9f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_17e9fc:
    // 0x17e9fc: 0x2010  mfhi        $a0
    ctx->pc = 0x17e9fcu;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_17ea00:
    // 0x17ea00: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x17ea00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_17ea04:
    // 0x17ea04: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x17ea04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_17ea08:
    // 0x17ea08: 0x27a301fc  addiu       $v1, $sp, 0x1FC
    ctx->pc = 0x17ea08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 508));
label_17ea0c:
    // 0x17ea0c: 0x14a0fef7  bnez        $a1, . + 4 + (-0x109 << 2)
label_17ea10:
    if (ctx->pc == 0x17EA10u) {
        ctx->pc = 0x17EA10u;
            // 0x17ea10: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->pc = 0x17EA14u;
        goto label_17ea14;
    }
    ctx->pc = 0x17EA0Cu;
    {
        const bool branch_taken_0x17ea0c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x17EA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EA0Cu;
            // 0x17ea10: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17ea0c) {
            ctx->pc = 0x17E5ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17e5ec;
        }
    }
    ctx->pc = 0x17EA14u;
label_17ea14:
    // 0x17ea14: 0x0  nop
    ctx->pc = 0x17ea14u;
    // NOP
label_17ea18:
    // 0x17ea18: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x17ea18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_17ea1c:
    // 0x17ea1c: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x17ea1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_17ea20:
    // 0x17ea20: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x17ea20u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_17ea24:
    // 0x17ea24: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x17ea24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_17ea28:
    // 0x17ea28: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x17ea28u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_17ea2c:
    // 0x17ea2c: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x17ea2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_17ea30:
    // 0x17ea30: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x17ea30u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_17ea34:
    // 0x17ea34: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x17ea34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_17ea38:
    // 0x17ea38: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x17ea38u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_17ea3c:
    // 0x17ea3c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x17ea3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_17ea40:
    // 0x17ea40: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x17ea40u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_17ea44:
    // 0x17ea44: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x17ea44u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_17ea48:
    // 0x17ea48: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x17ea48u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_17ea4c:
    // 0x17ea4c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x17ea4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_17ea50:
    // 0x17ea50: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x17ea50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_17ea54:
    // 0x17ea54: 0x3e00008  jr          $ra
label_17ea58:
    if (ctx->pc == 0x17EA58u) {
        ctx->pc = 0x17EA58u;
            // 0x17ea58: 0x27bd03a0  addiu       $sp, $sp, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
        ctx->pc = 0x17EA5Cu;
        goto label_fallthrough_0x17ea54;
    }
    ctx->pc = 0x17EA54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17EA58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17EA54u;
            // 0x17ea58: 0x27bd03a0  addiu       $sp, $sp, 0x3A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 928));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x17ea54:
    ctx->pc = 0x17EA5Cu;
}
