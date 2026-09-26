#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DrawFireEffect__FPA4_fP14CFuncPointMngrP15CFuncPointCheckfP10mgCTextureP10mgCTexture
// Address: 0x29e3c0 - 0x29ea70
void DrawFireEffect__FPA4_fP14CFuncPointMngrP15CFuncPointCheckfP10mgCTextureP10mgCTexture_0x29e3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DrawFireEffect__FPA4_fP14CFuncPointMngrP15CFuncPointCheckfP10mgCTextureP10mgCTexture_0x29e3c0");
#endif

    switch (ctx->pc) {
        case 0x29e3c0u: goto label_29e3c0;
        case 0x29e3c4u: goto label_29e3c4;
        case 0x29e3c8u: goto label_29e3c8;
        case 0x29e3ccu: goto label_29e3cc;
        case 0x29e3d0u: goto label_29e3d0;
        case 0x29e3d4u: goto label_29e3d4;
        case 0x29e3d8u: goto label_29e3d8;
        case 0x29e3dcu: goto label_29e3dc;
        case 0x29e3e0u: goto label_29e3e0;
        case 0x29e3e4u: goto label_29e3e4;
        case 0x29e3e8u: goto label_29e3e8;
        case 0x29e3ecu: goto label_29e3ec;
        case 0x29e3f0u: goto label_29e3f0;
        case 0x29e3f4u: goto label_29e3f4;
        case 0x29e3f8u: goto label_29e3f8;
        case 0x29e3fcu: goto label_29e3fc;
        case 0x29e400u: goto label_29e400;
        case 0x29e404u: goto label_29e404;
        case 0x29e408u: goto label_29e408;
        case 0x29e40cu: goto label_29e40c;
        case 0x29e410u: goto label_29e410;
        case 0x29e414u: goto label_29e414;
        case 0x29e418u: goto label_29e418;
        case 0x29e41cu: goto label_29e41c;
        case 0x29e420u: goto label_29e420;
        case 0x29e424u: goto label_29e424;
        case 0x29e428u: goto label_29e428;
        case 0x29e42cu: goto label_29e42c;
        case 0x29e430u: goto label_29e430;
        case 0x29e434u: goto label_29e434;
        case 0x29e438u: goto label_29e438;
        case 0x29e43cu: goto label_29e43c;
        case 0x29e440u: goto label_29e440;
        case 0x29e444u: goto label_29e444;
        case 0x29e448u: goto label_29e448;
        case 0x29e44cu: goto label_29e44c;
        case 0x29e450u: goto label_29e450;
        case 0x29e454u: goto label_29e454;
        case 0x29e458u: goto label_29e458;
        case 0x29e45cu: goto label_29e45c;
        case 0x29e460u: goto label_29e460;
        case 0x29e464u: goto label_29e464;
        case 0x29e468u: goto label_29e468;
        case 0x29e46cu: goto label_29e46c;
        case 0x29e470u: goto label_29e470;
        case 0x29e474u: goto label_29e474;
        case 0x29e478u: goto label_29e478;
        case 0x29e47cu: goto label_29e47c;
        case 0x29e480u: goto label_29e480;
        case 0x29e484u: goto label_29e484;
        case 0x29e488u: goto label_29e488;
        case 0x29e48cu: goto label_29e48c;
        case 0x29e490u: goto label_29e490;
        case 0x29e494u: goto label_29e494;
        case 0x29e498u: goto label_29e498;
        case 0x29e49cu: goto label_29e49c;
        case 0x29e4a0u: goto label_29e4a0;
        case 0x29e4a4u: goto label_29e4a4;
        case 0x29e4a8u: goto label_29e4a8;
        case 0x29e4acu: goto label_29e4ac;
        case 0x29e4b0u: goto label_29e4b0;
        case 0x29e4b4u: goto label_29e4b4;
        case 0x29e4b8u: goto label_29e4b8;
        case 0x29e4bcu: goto label_29e4bc;
        case 0x29e4c0u: goto label_29e4c0;
        case 0x29e4c4u: goto label_29e4c4;
        case 0x29e4c8u: goto label_29e4c8;
        case 0x29e4ccu: goto label_29e4cc;
        case 0x29e4d0u: goto label_29e4d0;
        case 0x29e4d4u: goto label_29e4d4;
        case 0x29e4d8u: goto label_29e4d8;
        case 0x29e4dcu: goto label_29e4dc;
        case 0x29e4e0u: goto label_29e4e0;
        case 0x29e4e4u: goto label_29e4e4;
        case 0x29e4e8u: goto label_29e4e8;
        case 0x29e4ecu: goto label_29e4ec;
        case 0x29e4f0u: goto label_29e4f0;
        case 0x29e4f4u: goto label_29e4f4;
        case 0x29e4f8u: goto label_29e4f8;
        case 0x29e4fcu: goto label_29e4fc;
        case 0x29e500u: goto label_29e500;
        case 0x29e504u: goto label_29e504;
        case 0x29e508u: goto label_29e508;
        case 0x29e50cu: goto label_29e50c;
        case 0x29e510u: goto label_29e510;
        case 0x29e514u: goto label_29e514;
        case 0x29e518u: goto label_29e518;
        case 0x29e51cu: goto label_29e51c;
        case 0x29e520u: goto label_29e520;
        case 0x29e524u: goto label_29e524;
        case 0x29e528u: goto label_29e528;
        case 0x29e52cu: goto label_29e52c;
        case 0x29e530u: goto label_29e530;
        case 0x29e534u: goto label_29e534;
        case 0x29e538u: goto label_29e538;
        case 0x29e53cu: goto label_29e53c;
        case 0x29e540u: goto label_29e540;
        case 0x29e544u: goto label_29e544;
        case 0x29e548u: goto label_29e548;
        case 0x29e54cu: goto label_29e54c;
        case 0x29e550u: goto label_29e550;
        case 0x29e554u: goto label_29e554;
        case 0x29e558u: goto label_29e558;
        case 0x29e55cu: goto label_29e55c;
        case 0x29e560u: goto label_29e560;
        case 0x29e564u: goto label_29e564;
        case 0x29e568u: goto label_29e568;
        case 0x29e56cu: goto label_29e56c;
        case 0x29e570u: goto label_29e570;
        case 0x29e574u: goto label_29e574;
        case 0x29e578u: goto label_29e578;
        case 0x29e57cu: goto label_29e57c;
        case 0x29e580u: goto label_29e580;
        case 0x29e584u: goto label_29e584;
        case 0x29e588u: goto label_29e588;
        case 0x29e58cu: goto label_29e58c;
        case 0x29e590u: goto label_29e590;
        case 0x29e594u: goto label_29e594;
        case 0x29e598u: goto label_29e598;
        case 0x29e59cu: goto label_29e59c;
        case 0x29e5a0u: goto label_29e5a0;
        case 0x29e5a4u: goto label_29e5a4;
        case 0x29e5a8u: goto label_29e5a8;
        case 0x29e5acu: goto label_29e5ac;
        case 0x29e5b0u: goto label_29e5b0;
        case 0x29e5b4u: goto label_29e5b4;
        case 0x29e5b8u: goto label_29e5b8;
        case 0x29e5bcu: goto label_29e5bc;
        case 0x29e5c0u: goto label_29e5c0;
        case 0x29e5c4u: goto label_29e5c4;
        case 0x29e5c8u: goto label_29e5c8;
        case 0x29e5ccu: goto label_29e5cc;
        case 0x29e5d0u: goto label_29e5d0;
        case 0x29e5d4u: goto label_29e5d4;
        case 0x29e5d8u: goto label_29e5d8;
        case 0x29e5dcu: goto label_29e5dc;
        case 0x29e5e0u: goto label_29e5e0;
        case 0x29e5e4u: goto label_29e5e4;
        case 0x29e5e8u: goto label_29e5e8;
        case 0x29e5ecu: goto label_29e5ec;
        case 0x29e5f0u: goto label_29e5f0;
        case 0x29e5f4u: goto label_29e5f4;
        case 0x29e5f8u: goto label_29e5f8;
        case 0x29e5fcu: goto label_29e5fc;
        case 0x29e600u: goto label_29e600;
        case 0x29e604u: goto label_29e604;
        case 0x29e608u: goto label_29e608;
        case 0x29e60cu: goto label_29e60c;
        case 0x29e610u: goto label_29e610;
        case 0x29e614u: goto label_29e614;
        case 0x29e618u: goto label_29e618;
        case 0x29e61cu: goto label_29e61c;
        case 0x29e620u: goto label_29e620;
        case 0x29e624u: goto label_29e624;
        case 0x29e628u: goto label_29e628;
        case 0x29e62cu: goto label_29e62c;
        case 0x29e630u: goto label_29e630;
        case 0x29e634u: goto label_29e634;
        case 0x29e638u: goto label_29e638;
        case 0x29e63cu: goto label_29e63c;
        case 0x29e640u: goto label_29e640;
        case 0x29e644u: goto label_29e644;
        case 0x29e648u: goto label_29e648;
        case 0x29e64cu: goto label_29e64c;
        case 0x29e650u: goto label_29e650;
        case 0x29e654u: goto label_29e654;
        case 0x29e658u: goto label_29e658;
        case 0x29e65cu: goto label_29e65c;
        case 0x29e660u: goto label_29e660;
        case 0x29e664u: goto label_29e664;
        case 0x29e668u: goto label_29e668;
        case 0x29e66cu: goto label_29e66c;
        case 0x29e670u: goto label_29e670;
        case 0x29e674u: goto label_29e674;
        case 0x29e678u: goto label_29e678;
        case 0x29e67cu: goto label_29e67c;
        case 0x29e680u: goto label_29e680;
        case 0x29e684u: goto label_29e684;
        case 0x29e688u: goto label_29e688;
        case 0x29e68cu: goto label_29e68c;
        case 0x29e690u: goto label_29e690;
        case 0x29e694u: goto label_29e694;
        case 0x29e698u: goto label_29e698;
        case 0x29e69cu: goto label_29e69c;
        case 0x29e6a0u: goto label_29e6a0;
        case 0x29e6a4u: goto label_29e6a4;
        case 0x29e6a8u: goto label_29e6a8;
        case 0x29e6acu: goto label_29e6ac;
        case 0x29e6b0u: goto label_29e6b0;
        case 0x29e6b4u: goto label_29e6b4;
        case 0x29e6b8u: goto label_29e6b8;
        case 0x29e6bcu: goto label_29e6bc;
        case 0x29e6c0u: goto label_29e6c0;
        case 0x29e6c4u: goto label_29e6c4;
        case 0x29e6c8u: goto label_29e6c8;
        case 0x29e6ccu: goto label_29e6cc;
        case 0x29e6d0u: goto label_29e6d0;
        case 0x29e6d4u: goto label_29e6d4;
        case 0x29e6d8u: goto label_29e6d8;
        case 0x29e6dcu: goto label_29e6dc;
        case 0x29e6e0u: goto label_29e6e0;
        case 0x29e6e4u: goto label_29e6e4;
        case 0x29e6e8u: goto label_29e6e8;
        case 0x29e6ecu: goto label_29e6ec;
        case 0x29e6f0u: goto label_29e6f0;
        case 0x29e6f4u: goto label_29e6f4;
        case 0x29e6f8u: goto label_29e6f8;
        case 0x29e6fcu: goto label_29e6fc;
        case 0x29e700u: goto label_29e700;
        case 0x29e704u: goto label_29e704;
        case 0x29e708u: goto label_29e708;
        case 0x29e70cu: goto label_29e70c;
        case 0x29e710u: goto label_29e710;
        case 0x29e714u: goto label_29e714;
        case 0x29e718u: goto label_29e718;
        case 0x29e71cu: goto label_29e71c;
        case 0x29e720u: goto label_29e720;
        case 0x29e724u: goto label_29e724;
        case 0x29e728u: goto label_29e728;
        case 0x29e72cu: goto label_29e72c;
        case 0x29e730u: goto label_29e730;
        case 0x29e734u: goto label_29e734;
        case 0x29e738u: goto label_29e738;
        case 0x29e73cu: goto label_29e73c;
        case 0x29e740u: goto label_29e740;
        case 0x29e744u: goto label_29e744;
        case 0x29e748u: goto label_29e748;
        case 0x29e74cu: goto label_29e74c;
        case 0x29e750u: goto label_29e750;
        case 0x29e754u: goto label_29e754;
        case 0x29e758u: goto label_29e758;
        case 0x29e75cu: goto label_29e75c;
        case 0x29e760u: goto label_29e760;
        case 0x29e764u: goto label_29e764;
        case 0x29e768u: goto label_29e768;
        case 0x29e76cu: goto label_29e76c;
        case 0x29e770u: goto label_29e770;
        case 0x29e774u: goto label_29e774;
        case 0x29e778u: goto label_29e778;
        case 0x29e77cu: goto label_29e77c;
        case 0x29e780u: goto label_29e780;
        case 0x29e784u: goto label_29e784;
        case 0x29e788u: goto label_29e788;
        case 0x29e78cu: goto label_29e78c;
        case 0x29e790u: goto label_29e790;
        case 0x29e794u: goto label_29e794;
        case 0x29e798u: goto label_29e798;
        case 0x29e79cu: goto label_29e79c;
        case 0x29e7a0u: goto label_29e7a0;
        case 0x29e7a4u: goto label_29e7a4;
        case 0x29e7a8u: goto label_29e7a8;
        case 0x29e7acu: goto label_29e7ac;
        case 0x29e7b0u: goto label_29e7b0;
        case 0x29e7b4u: goto label_29e7b4;
        case 0x29e7b8u: goto label_29e7b8;
        case 0x29e7bcu: goto label_29e7bc;
        case 0x29e7c0u: goto label_29e7c0;
        case 0x29e7c4u: goto label_29e7c4;
        case 0x29e7c8u: goto label_29e7c8;
        case 0x29e7ccu: goto label_29e7cc;
        case 0x29e7d0u: goto label_29e7d0;
        case 0x29e7d4u: goto label_29e7d4;
        case 0x29e7d8u: goto label_29e7d8;
        case 0x29e7dcu: goto label_29e7dc;
        case 0x29e7e0u: goto label_29e7e0;
        case 0x29e7e4u: goto label_29e7e4;
        case 0x29e7e8u: goto label_29e7e8;
        case 0x29e7ecu: goto label_29e7ec;
        case 0x29e7f0u: goto label_29e7f0;
        case 0x29e7f4u: goto label_29e7f4;
        case 0x29e7f8u: goto label_29e7f8;
        case 0x29e7fcu: goto label_29e7fc;
        case 0x29e800u: goto label_29e800;
        case 0x29e804u: goto label_29e804;
        case 0x29e808u: goto label_29e808;
        case 0x29e80cu: goto label_29e80c;
        case 0x29e810u: goto label_29e810;
        case 0x29e814u: goto label_29e814;
        case 0x29e818u: goto label_29e818;
        case 0x29e81cu: goto label_29e81c;
        case 0x29e820u: goto label_29e820;
        case 0x29e824u: goto label_29e824;
        case 0x29e828u: goto label_29e828;
        case 0x29e82cu: goto label_29e82c;
        case 0x29e830u: goto label_29e830;
        case 0x29e834u: goto label_29e834;
        case 0x29e838u: goto label_29e838;
        case 0x29e83cu: goto label_29e83c;
        case 0x29e840u: goto label_29e840;
        case 0x29e844u: goto label_29e844;
        case 0x29e848u: goto label_29e848;
        case 0x29e84cu: goto label_29e84c;
        case 0x29e850u: goto label_29e850;
        case 0x29e854u: goto label_29e854;
        case 0x29e858u: goto label_29e858;
        case 0x29e85cu: goto label_29e85c;
        case 0x29e860u: goto label_29e860;
        case 0x29e864u: goto label_29e864;
        case 0x29e868u: goto label_29e868;
        case 0x29e86cu: goto label_29e86c;
        case 0x29e870u: goto label_29e870;
        case 0x29e874u: goto label_29e874;
        case 0x29e878u: goto label_29e878;
        case 0x29e87cu: goto label_29e87c;
        case 0x29e880u: goto label_29e880;
        case 0x29e884u: goto label_29e884;
        case 0x29e888u: goto label_29e888;
        case 0x29e88cu: goto label_29e88c;
        case 0x29e890u: goto label_29e890;
        case 0x29e894u: goto label_29e894;
        case 0x29e898u: goto label_29e898;
        case 0x29e89cu: goto label_29e89c;
        case 0x29e8a0u: goto label_29e8a0;
        case 0x29e8a4u: goto label_29e8a4;
        case 0x29e8a8u: goto label_29e8a8;
        case 0x29e8acu: goto label_29e8ac;
        case 0x29e8b0u: goto label_29e8b0;
        case 0x29e8b4u: goto label_29e8b4;
        case 0x29e8b8u: goto label_29e8b8;
        case 0x29e8bcu: goto label_29e8bc;
        case 0x29e8c0u: goto label_29e8c0;
        case 0x29e8c4u: goto label_29e8c4;
        case 0x29e8c8u: goto label_29e8c8;
        case 0x29e8ccu: goto label_29e8cc;
        case 0x29e8d0u: goto label_29e8d0;
        case 0x29e8d4u: goto label_29e8d4;
        case 0x29e8d8u: goto label_29e8d8;
        case 0x29e8dcu: goto label_29e8dc;
        case 0x29e8e0u: goto label_29e8e0;
        case 0x29e8e4u: goto label_29e8e4;
        case 0x29e8e8u: goto label_29e8e8;
        case 0x29e8ecu: goto label_29e8ec;
        case 0x29e8f0u: goto label_29e8f0;
        case 0x29e8f4u: goto label_29e8f4;
        case 0x29e8f8u: goto label_29e8f8;
        case 0x29e8fcu: goto label_29e8fc;
        case 0x29e900u: goto label_29e900;
        case 0x29e904u: goto label_29e904;
        case 0x29e908u: goto label_29e908;
        case 0x29e90cu: goto label_29e90c;
        case 0x29e910u: goto label_29e910;
        case 0x29e914u: goto label_29e914;
        case 0x29e918u: goto label_29e918;
        case 0x29e91cu: goto label_29e91c;
        case 0x29e920u: goto label_29e920;
        case 0x29e924u: goto label_29e924;
        case 0x29e928u: goto label_29e928;
        case 0x29e92cu: goto label_29e92c;
        case 0x29e930u: goto label_29e930;
        case 0x29e934u: goto label_29e934;
        case 0x29e938u: goto label_29e938;
        case 0x29e93cu: goto label_29e93c;
        case 0x29e940u: goto label_29e940;
        case 0x29e944u: goto label_29e944;
        case 0x29e948u: goto label_29e948;
        case 0x29e94cu: goto label_29e94c;
        case 0x29e950u: goto label_29e950;
        case 0x29e954u: goto label_29e954;
        case 0x29e958u: goto label_29e958;
        case 0x29e95cu: goto label_29e95c;
        case 0x29e960u: goto label_29e960;
        case 0x29e964u: goto label_29e964;
        case 0x29e968u: goto label_29e968;
        case 0x29e96cu: goto label_29e96c;
        case 0x29e970u: goto label_29e970;
        case 0x29e974u: goto label_29e974;
        case 0x29e978u: goto label_29e978;
        case 0x29e97cu: goto label_29e97c;
        case 0x29e980u: goto label_29e980;
        case 0x29e984u: goto label_29e984;
        case 0x29e988u: goto label_29e988;
        case 0x29e98cu: goto label_29e98c;
        case 0x29e990u: goto label_29e990;
        case 0x29e994u: goto label_29e994;
        case 0x29e998u: goto label_29e998;
        case 0x29e99cu: goto label_29e99c;
        case 0x29e9a0u: goto label_29e9a0;
        case 0x29e9a4u: goto label_29e9a4;
        case 0x29e9a8u: goto label_29e9a8;
        case 0x29e9acu: goto label_29e9ac;
        case 0x29e9b0u: goto label_29e9b0;
        case 0x29e9b4u: goto label_29e9b4;
        case 0x29e9b8u: goto label_29e9b8;
        case 0x29e9bcu: goto label_29e9bc;
        case 0x29e9c0u: goto label_29e9c0;
        case 0x29e9c4u: goto label_29e9c4;
        case 0x29e9c8u: goto label_29e9c8;
        case 0x29e9ccu: goto label_29e9cc;
        case 0x29e9d0u: goto label_29e9d0;
        case 0x29e9d4u: goto label_29e9d4;
        case 0x29e9d8u: goto label_29e9d8;
        case 0x29e9dcu: goto label_29e9dc;
        case 0x29e9e0u: goto label_29e9e0;
        case 0x29e9e4u: goto label_29e9e4;
        case 0x29e9e8u: goto label_29e9e8;
        case 0x29e9ecu: goto label_29e9ec;
        case 0x29e9f0u: goto label_29e9f0;
        case 0x29e9f4u: goto label_29e9f4;
        case 0x29e9f8u: goto label_29e9f8;
        case 0x29e9fcu: goto label_29e9fc;
        case 0x29ea00u: goto label_29ea00;
        case 0x29ea04u: goto label_29ea04;
        case 0x29ea08u: goto label_29ea08;
        case 0x29ea0cu: goto label_29ea0c;
        case 0x29ea10u: goto label_29ea10;
        case 0x29ea14u: goto label_29ea14;
        case 0x29ea18u: goto label_29ea18;
        case 0x29ea1cu: goto label_29ea1c;
        case 0x29ea20u: goto label_29ea20;
        case 0x29ea24u: goto label_29ea24;
        case 0x29ea28u: goto label_29ea28;
        case 0x29ea2cu: goto label_29ea2c;
        case 0x29ea30u: goto label_29ea30;
        case 0x29ea34u: goto label_29ea34;
        case 0x29ea38u: goto label_29ea38;
        case 0x29ea3cu: goto label_29ea3c;
        case 0x29ea40u: goto label_29ea40;
        case 0x29ea44u: goto label_29ea44;
        case 0x29ea48u: goto label_29ea48;
        case 0x29ea4cu: goto label_29ea4c;
        case 0x29ea50u: goto label_29ea50;
        case 0x29ea54u: goto label_29ea54;
        case 0x29ea58u: goto label_29ea58;
        case 0x29ea5cu: goto label_29ea5c;
        case 0x29ea60u: goto label_29ea60;
        case 0x29ea64u: goto label_29ea64;
        case 0x29ea68u: goto label_29ea68;
        case 0x29ea6cu: goto label_29ea6c;
        default: break;
    }

    ctx->pc = 0x29e3c0u;

label_29e3c0:
    // 0x29e3c0: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x29e3c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_29e3c4:
    // 0x29e3c4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x29e3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_29e3c8:
    // 0x29e3c8: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x29e3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_29e3cc:
    // 0x29e3cc: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x29e3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_29e3d0:
    // 0x29e3d0: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x29e3d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_29e3d4:
    // 0x29e3d4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x29e3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_29e3d8:
    // 0x29e3d8: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x29e3d8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29e3dc:
    // 0x29e3dc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x29e3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_29e3e0:
    // 0x29e3e0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x29e3e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29e3e4:
    // 0x29e3e4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x29e3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_29e3e8:
    // 0x29e3e8: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x29e3e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29e3ec:
    // 0x29e3ec: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x29e3ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_29e3f0:
    // 0x29e3f0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x29e3f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_29e3f4:
    // 0x29e3f4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x29e3f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_29e3f8:
    // 0x29e3f8: 0x12600191  beqz        $s3, . + 4 + (0x191 << 2)
label_29e3fc:
    if (ctx->pc == 0x29E3FCu) {
        ctx->pc = 0x29E3FCu;
            // 0x29e3fc: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->pc = 0x29E400u;
        goto label_29e400;
    }
    ctx->pc = 0x29E3F8u;
    {
        const bool branch_taken_0x29e3f8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E3F8u;
            // 0x29e3fc: 0xe7b40000  swc1        $f20, 0x0($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e3f8) {
            ctx->pc = 0x29EA40u;
            goto label_29ea40;
        }
    }
    ctx->pc = 0x29E400u;
label_29e400:
    // 0x29e400: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29e400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29e404:
    // 0x29e404: 0xc0a7604  jal         func_29D810
label_29e408:
    if (ctx->pc == 0x29E408u) {
        ctx->pc = 0x29E408u;
            // 0x29e408: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x29E40Cu;
        goto label_29e40c;
    }
    ctx->pc = 0x29E404u;
    SET_GPR_U32(ctx, 31, 0x29E40Cu);
    ctx->pc = 0x29E408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E404u;
            // 0x29e408: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D810u;
    if (runtime->hasFunction(0x29D810u)) {
        auto targetFn = runtime->lookupFunction(0x29D810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E40Cu; }
        if (ctx->pc != 0x29E40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableFuncNum__14CFuncPointMngrFi_0x29d810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E40Cu; }
        if (ctx->pc != 0x29E40Cu) { return; }
    }
    ctx->pc = 0x29E40Cu;
label_29e40c:
    // 0x29e40c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29e40cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29e410:
    // 0x29e410: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29e410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29e414:
    // 0x29e414: 0xc0a7604  jal         func_29D810
label_29e418:
    if (ctx->pc == 0x29E418u) {
        ctx->pc = 0x29E418u;
            // 0x29e418: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x29E41Cu;
        goto label_29e41c;
    }
    ctx->pc = 0x29E414u;
    SET_GPR_U32(ctx, 31, 0x29E41Cu);
    ctx->pc = 0x29E418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E414u;
            // 0x29e418: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D810u;
    if (runtime->hasFunction(0x29D810u)) {
        auto targetFn = runtime->lookupFunction(0x29D810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E41Cu; }
        if (ctx->pc != 0x29E41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnableFuncNum__14CFuncPointMngrFi_0x29d810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E41Cu; }
        if (ctx->pc != 0x29E41Cu) { return; }
    }
    ctx->pc = 0x29E41Cu;
label_29e41c:
    // 0x29e41c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_29e420:
    if (ctx->pc == 0x29E420u) {
        ctx->pc = 0x29E420u;
            // 0x29e420: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E424u;
        goto label_29e424;
    }
    ctx->pc = 0x29E41Cu;
    {
        const bool branch_taken_0x29e41c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E41Cu;
            // 0x29e420: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e41c) {
            ctx->pc = 0x29E42Cu;
            goto label_29e42c;
        }
    }
    ctx->pc = 0x29E424u;
label_29e424:
    // 0x29e424: 0x12200186  beqz        $s1, . + 4 + (0x186 << 2)
label_29e428:
    if (ctx->pc == 0x29E428u) {
        ctx->pc = 0x29E42Cu;
        goto label_29e42c;
    }
    ctx->pc = 0x29E424u;
    {
        const bool branch_taken_0x29e424 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e424) {
            ctx->pc = 0x29EA40u;
            goto label_29ea40;
        }
    }
    ctx->pc = 0x29E42Cu;
label_29e42c:
    // 0x29e42c: 0xc0516d0  jal         func_145B40
label_29e430:
    if (ctx->pc == 0x29E430u) {
        ctx->pc = 0x29E430u;
            // 0x29e430: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x29E434u;
        goto label_29e434;
    }
    ctx->pc = 0x29E42Cu;
    SET_GPR_U32(ctx, 31, 0x29E434u);
    ctx->pc = 0x29E430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E42Cu;
            // 0x29e430: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x145B40u;
    if (runtime->hasFunction(0x145B40u)) {
        auto targetFn = runtime->lookupFunction(0x145B40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E434u; }
        if (ctx->pc != 0x29E434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetCameraPos__FPf_0x145b40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E434u; }
        if (ctx->pc != 0x29E434u) { return; }
    }
    ctx->pc = 0x29E434u;
label_29e434:
    // 0x29e434: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29e434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_29e438:
    // 0x29e438: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x29e438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_29e43c:
    // 0x29e43c: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x29e43cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
label_29e440:
    // 0x29e440: 0xc04c0b4  jal         func_1302D0
label_29e444:
    if (ctx->pc == 0x29E444u) {
        ctx->pc = 0x29E444u;
            // 0x29e444: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E448u;
        goto label_29e448;
    }
    ctx->pc = 0x29E440u;
    SET_GPR_U32(ctx, 31, 0x29E448u);
    ctx->pc = 0x29E444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E440u;
            // 0x29e444: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1302D0u;
    if (runtime->hasFunction(0x1302D0u)) {
        auto targetFn = runtime->lookupFunction(0x1302D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E448u; }
        if (ctx->pc != 0x29E448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInversMatrix__FPA4_fPA4_f_0x1302d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E448u; }
        if (ctx->pc != 0x29E448u) { return; }
    }
    ctx->pc = 0x29E448u;
label_29e448:
    // 0x29e448: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x29e448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_29e44c:
    // 0x29e44c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x29e44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_29e450:
    // 0x29e450: 0xc041bb0  jal         func_106EC0
label_29e454:
    if (ctx->pc == 0x29E454u) {
        ctx->pc = 0x29E454u;
            // 0x29e454: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E458u;
        goto label_29e458;
    }
    ctx->pc = 0x29E450u;
    SET_GPR_U32(ctx, 31, 0x29E458u);
    ctx->pc = 0x29E454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E450u;
            // 0x29e454: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EC0u;
    if (runtime->hasFunction(0x106EC0u)) {
        auto targetFn = runtime->lookupFunction(0x106EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E458u; }
        if (ctx->pc != 0x29E458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ApplyMatrix_0x106ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E458u; }
        if (ctx->pc != 0x29E458u) { return; }
    }
    ctx->pc = 0x29E458u;
label_29e458:
    // 0x29e458: 0x83829930  lb          $v0, -0x66D0($gp)
    ctx->pc = 0x29e458u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940976)));
label_29e45c:
    // 0x29e45c: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_29e460:
    if (ctx->pc == 0x29E460u) {
        ctx->pc = 0x29E464u;
        goto label_29e464;
    }
    ctx->pc = 0x29E45Cu;
    {
        const bool branch_taken_0x29e45c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e45c) {
            ctx->pc = 0x29E4BCu;
            goto label_29e4bc;
        }
    }
    ctx->pc = 0x29E464u;
label_29e464:
    // 0x29e464: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x29e464u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_29e468:
    // 0x29e468: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29e468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_29e46c:
    // 0x29e46c: 0x24424f10  addiu       $v0, $v0, 0x4F10
    ctx->pc = 0x29e46cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20240));
label_29e470:
    // 0x29e470: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29e470u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_29e474:
    // 0x29e474: 0x24845dd0  addiu       $a0, $a0, 0x5DD0
    ctx->pc = 0x29e474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24016));
label_29e478:
    // 0x29e478: 0xac225dec  sw          $v0, 0x5DEC($at)
    ctx->pc = 0x29e478u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 24044), GPR_U32(ctx, 2));
label_29e47c:
    // 0x29e47c: 0x8c99001c  lw          $t9, 0x1C($a0)
    ctx->pc = 0x29e47cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_29e480:
    // 0x29e480: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x29e480u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_29e484:
    // 0x29e484: 0x320f809  jalr        $t9
label_29e488:
    if (ctx->pc == 0x29E488u) {
        ctx->pc = 0x29E48Cu;
        goto label_29e48c;
    }
    ctx->pc = 0x29E484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29E48Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x29E48Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29E48Cu; }
            if (ctx->pc != 0x29E48Cu) { return; }
        }
        }
    }
    ctx->pc = 0x29E48Cu;
label_29e48c:
    // 0x29e48c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x29e48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_29e490:
    // 0x29e490: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29e490u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_29e494:
    // 0x29e494: 0x244250b0  addiu       $v0, $v0, 0x50B0
    ctx->pc = 0x29e494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20656));
label_29e498:
    // 0x29e498: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29e498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_29e49c:
    // 0x29e49c: 0x24845dd0  addiu       $a0, $a0, 0x5DD0
    ctx->pc = 0x29e49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24016));
label_29e4a0:
    // 0x29e4a0: 0xac225dec  sw          $v0, 0x5DEC($at)
    ctx->pc = 0x29e4a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 24044), GPR_U32(ctx, 2));
label_29e4a4:
    // 0x29e4a4: 0x8c99001c  lw          $t9, 0x1C($a0)
    ctx->pc = 0x29e4a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_29e4a8:
    // 0x29e4a8: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x29e4a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_29e4ac:
    // 0x29e4ac: 0x320f809  jalr        $t9
label_29e4b0:
    if (ctx->pc == 0x29E4B0u) {
        ctx->pc = 0x29E4B4u;
        goto label_29e4b4;
    }
    ctx->pc = 0x29E4ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29E4B4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x29E4B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29E4B4u; }
            if (ctx->pc != 0x29E4B4u) { return; }
        }
        }
    }
    ctx->pc = 0x29E4B4u;
label_29e4b4:
    // 0x29e4b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29e4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29e4b8:
    // 0x29e4b8: 0xa3829930  sb          $v0, -0x66D0($gp)
    ctx->pc = 0x29e4b8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940976), (uint8_t)GPR_U32(ctx, 2));
label_29e4bc:
    // 0x29e4bc: 0x3c1201f0  lui         $s2, 0x1F0
    ctx->pc = 0x29e4bcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)496 << 16));
label_29e4c0:
    // 0x29e4c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x29e4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29e4c4:
    // 0x29e4c4: 0xc051150  jal         func_144540
label_29e4c8:
    if (ctx->pc == 0x29E4C8u) {
        ctx->pc = 0x29E4C8u;
            // 0x29e4c8: 0x26525dd0  addiu       $s2, $s2, 0x5DD0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24016));
        ctx->pc = 0x29E4CCu;
        goto label_29e4cc;
    }
    ctx->pc = 0x29E4C4u;
    SET_GPR_U32(ctx, 31, 0x29E4CCu);
    ctx->pc = 0x29E4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E4C4u;
            // 0x29e4c8: 0x26525dd0  addiu       $s2, $s2, 0x5DD0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 24016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x144540u;
    if (runtime->hasFunction(0x144540u)) {
        auto targetFn = runtime->lookupFunction(0x144540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E4CCu; }
        if (ctx->pc != 0x29E4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetpDrawEnv__Fi_0x144540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E4CCu; }
        if (ctx->pc != 0x29E4CCu) { return; }
    }
    ctx->pc = 0x29E4CCu;
label_29e4cc:
    // 0x29e4cc: 0xdc480000  ld          $t0, 0x0($v0)
    ctx->pc = 0x29e4ccu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_29e4d0:
    // 0x29e4d0: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x29e4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_29e4d4:
    // 0x29e4d4: 0xdc450008  ld          $a1, 0x8($v0)
    ctx->pc = 0x29e4d4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 8)));
label_29e4d8:
    // 0x29e4d8: 0x27a30100  addiu       $v1, $sp, 0x100
    ctx->pc = 0x29e4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_29e4dc:
    // 0x29e4dc: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x29e4dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_29e4e0:
    // 0x29e4e0: 0x27a60120  addiu       $a2, $sp, 0x120
    ctx->pc = 0x29e4e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_29e4e4:
    // 0x29e4e4: 0xfc880000  sd          $t0, 0x0($a0)
    ctx->pc = 0x29e4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 8));
label_29e4e8:
    // 0x29e4e8: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x29e4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
label_29e4ec:
    // 0x29e4ec: 0xdc450010  ld          $a1, 0x10($v0)
    ctx->pc = 0x29e4ecu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 16)));
label_29e4f0:
    // 0x29e4f0: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x29e4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
label_29e4f4:
    // 0x29e4f4: 0xdc450018  ld          $a1, 0x18($v0)
    ctx->pc = 0x29e4f4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 24)));
label_29e4f8:
    // 0x29e4f8: 0xffa50108  sd          $a1, 0x108($sp)
    ctx->pc = 0x29e4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 5));
label_29e4fc:
    // 0x29e4fc: 0xdc450020  ld          $a1, 0x20($v0)
    ctx->pc = 0x29e4fcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 32)));
label_29e500:
    // 0x29e500: 0xfce50000  sd          $a1, 0x0($a3)
    ctx->pc = 0x29e500u;
    WRITE64(ADD32(GPR_U32(ctx, 7), 0), GPR_U64(ctx, 5));
label_29e504:
    // 0x29e504: 0xdc450028  ld          $a1, 0x28($v0)
    ctx->pc = 0x29e504u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 40)));
label_29e508:
    // 0x29e508: 0xffa50118  sd          $a1, 0x118($sp)
    ctx->pc = 0x29e508u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 5));
label_29e50c:
    // 0x29e50c: 0xdc450030  ld          $a1, 0x30($v0)
    ctx->pc = 0x29e50cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 48)));
label_29e510:
    // 0x29e510: 0xfcc50000  sd          $a1, 0x0($a2)
    ctx->pc = 0x29e510u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 5));
label_29e514:
    // 0x29e514: 0xdc450038  ld          $a1, 0x38($v0)
    ctx->pc = 0x29e514u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 56)));
label_29e518:
    // 0x29e518: 0x1a000058  blez        $s0, . + 4 + (0x58 << 2)
label_29e51c:
    if (ctx->pc == 0x29E51Cu) {
        ctx->pc = 0x29E51Cu;
            // 0x29e51c: 0xffa50128  sd          $a1, 0x128($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 5));
        ctx->pc = 0x29E520u;
        goto label_29e520;
    }
    ctx->pc = 0x29E518u;
    {
        const bool branch_taken_0x29e518 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x29E51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E518u;
            // 0x29e51c: 0xffa50128  sd          $a1, 0x128($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e518) {
            ctx->pc = 0x29E67Cu;
            goto label_29e67c;
        }
    }
    ctx->pc = 0x29E520u;
label_29e520:
    // 0x29e520: 0x90690002  lbu         $t1, 0x2($v1)
    ctx->pc = 0x29e520u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_29e524:
    // 0x29e524: 0x2407fffe  addiu       $a3, $zero, -0x2
    ctx->pc = 0x29e524u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_29e528:
    // 0x29e528: 0x64080001  daddiu      $t0, $zero, 0x1
    ctx->pc = 0x29e528u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_29e52c:
    // 0x29e52c: 0x2402fff9  addiu       $v0, $zero, -0x7
    ctx->pc = 0x29e52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
label_29e530:
    // 0x29e530: 0x64060004  daddiu      $a2, $zero, 0x4
    ctx->pc = 0x29e530u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)4);
label_29e534:
    // 0x29e534: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x29e534u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29e538:
    // 0x29e538: 0x1273824  and         $a3, $t1, $a3
    ctx->pc = 0x29e538u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 9) & GPR_U64(ctx, 7));
label_29e53c:
    // 0x29e53c: 0xe83825  or          $a3, $a3, $t0
    ctx->pc = 0x29e53cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_29e540:
    // 0x29e540: 0xa0670002  sb          $a3, 0x2($v1)
    ctx->pc = 0x29e540u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 7));
label_29e544:
    // 0x29e544: 0x90670002  lbu         $a3, 0x2($v1)
    ctx->pc = 0x29e544u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
label_29e548:
    // 0x29e548: 0xe21024  and         $v0, $a3, $v0
    ctx->pc = 0x29e548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & GPR_U64(ctx, 2));
label_29e54c:
    // 0x29e54c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x29e54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
label_29e550:
    // 0x29e550: 0xc04e290  jal         func_138A40
label_29e554:
    if (ctx->pc == 0x29E554u) {
        ctx->pc = 0x29E554u;
            // 0x29e554: 0xa0620002  sb          $v0, 0x2($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x29E558u;
        goto label_29e558;
    }
    ctx->pc = 0x29E550u;
    SET_GPR_U32(ctx, 31, 0x29E558u);
    ctx->pc = 0x29E554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E550u;
            // 0x29e554: 0xa0620002  sb          $v0, 0x2($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138A40u;
    if (runtime->hasFunction(0x138A40u)) {
        auto targetFn = runtime->lookupFunction(0x138A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E558u; }
        if (ctx->pc != 0x29E558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetZBuf__10mgCDrawEnvFi_0x138a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E558u; }
        if (ctx->pc != 0x29E558u) { return; }
    }
    ctx->pc = 0x29E558u;
label_29e558:
    // 0x29e558: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x29e558u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_29e55c:
    // 0x29e55c: 0xc04e25c  jal         func_138970
label_29e560:
    if (ctx->pc == 0x29E560u) {
        ctx->pc = 0x29E560u;
            // 0x29e560: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x29E564u;
        goto label_29e564;
    }
    ctx->pc = 0x29E55Cu;
    SET_GPR_U32(ctx, 31, 0x29E564u);
    ctx->pc = 0x29E560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E55Cu;
            // 0x29e560: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138970u;
    if (runtime->hasFunction(0x138970u)) {
        auto targetFn = runtime->lookupFunction(0x138970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E564u; }
        if (ctx->pc != 0x29E564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAlpha__10mgCDrawEnvFi_0x138970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E564u; }
        if (ctx->pc != 0x29E564u) { return; }
    }
    ctx->pc = 0x29E564u;
label_29e564:
    // 0x29e564: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29e564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29e568:
    // 0x29e568: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29e568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29e56c:
    // 0x29e56c: 0xc04ec68  jal         func_13B1A0
label_29e570:
    if (ctx->pc == 0x29E570u) {
        ctx->pc = 0x29E570u;
            // 0x29e570: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E574u;
        goto label_29e574;
    }
    ctx->pc = 0x29E56Cu;
    SET_GPR_U32(ctx, 31, 0x29E574u);
    ctx->pc = 0x29E570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E56Cu;
            // 0x29e570: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B1A0u;
    if (runtime->hasFunction(0x13B1A0u)) {
        auto targetFn = runtime->lookupFunction(0x13B1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E574u; }
        if (ctx->pc != 0x29E574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BeginCreatePacket__11mgC3DSpriteFiP14mgCDrawManager_0x13b1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E574u; }
        if (ctx->pc != 0x29E574u) { return; }
    }
    ctx->pc = 0x29E574u;
label_29e574:
    // 0x29e574: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29e574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29e578:
    // 0x29e578: 0xc04ec80  jal         func_13B200
label_29e57c:
    if (ctx->pc == 0x29E57Cu) {
        ctx->pc = 0x29E57Cu;
            // 0x29e57c: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x29E580u;
        goto label_29e580;
    }
    ctx->pc = 0x29E578u;
    SET_GPR_U32(ctx, 31, 0x29E580u);
    ctx->pc = 0x29E57Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E578u;
            // 0x29e57c: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B200u;
    if (runtime->hasFunction(0x13B200u)) {
        auto targetFn = runtime->lookupFunction(0x13B200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E580u; }
        if (ctx->pc != 0x29E580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CPSetDrawEnv__11mgC3DSpriteFP10mgCDrawEnv_0x13b200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E580u; }
        if (ctx->pc != 0x29E580u) { return; }
    }
    ctx->pc = 0x29E580u;
label_29e580:
    // 0x29e580: 0xc04bc8c  jal         func_12F230
label_29e584:
    if (ctx->pc == 0x29E584u) {
        ctx->pc = 0x29E584u;
            // 0x29e584: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x29E588u;
        goto label_29e588;
    }
    ctx->pc = 0x29E580u;
    SET_GPR_U32(ctx, 31, 0x29E588u);
    ctx->pc = 0x29E584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E580u;
            // 0x29e584: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E588u; }
        if (ctx->pc != 0x29E588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E588u; }
        if (ctx->pc != 0x29E588u) { return; }
    }
    ctx->pc = 0x29E588u;
label_29e588:
    // 0x29e588: 0xc04bc8c  jal         func_12F230
label_29e58c:
    if (ctx->pc == 0x29E58Cu) {
        ctx->pc = 0x29E58Cu;
            // 0x29e58c: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x29E590u;
        goto label_29e590;
    }
    ctx->pc = 0x29E588u;
    SET_GPR_U32(ctx, 31, 0x29E590u);
    ctx->pc = 0x29E58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E588u;
            // 0x29e58c: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E590u; }
        if (ctx->pc != 0x29E590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E590u; }
        if (ctx->pc != 0x29E590u) { return; }
    }
    ctx->pc = 0x29E590u;
label_29e590:
    // 0x29e590: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x29e590u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_29e594:
    // 0x29e594: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x29e594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_29e598:
    // 0x29e598: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x29e598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
label_29e59c:
    // 0x29e59c: 0xc04bc8c  jal         func_12F230
label_29e5a0:
    if (ctx->pc == 0x29E5A0u) {
        ctx->pc = 0x29E5A0u;
            // 0x29e5a0: 0xafa20140  sw          $v0, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
        ctx->pc = 0x29E5A4u;
        goto label_29e5a4;
    }
    ctx->pc = 0x29E59Cu;
    SET_GPR_U32(ctx, 31, 0x29E5A4u);
    ctx->pc = 0x29E5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E59Cu;
            // 0x29e5a0: 0xafa20140  sw          $v0, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E5A4u; }
        if (ctx->pc != 0x29E5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E5A4u; }
        if (ctx->pc != 0x29E5A4u) { return; }
    }
    ctx->pc = 0x29E5A4u;
label_29e5a4:
    // 0x29e5a4: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x29e5a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_29e5a8:
    // 0x29e5a8: 0xc04ecbc  jal         func_13B2F0
label_29e5ac:
    if (ctx->pc == 0x29E5ACu) {
        ctx->pc = 0x29E5ACu;
            // 0x29e5ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E5B0u;
        goto label_29e5b0;
    }
    ctx->pc = 0x29E5A8u;
    SET_GPR_U32(ctx, 31, 0x29E5B0u);
    ctx->pc = 0x29E5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E5A8u;
            // 0x29e5ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B2F0u;
    if (runtime->hasFunction(0x13B2F0u)) {
        auto targetFn = runtime->lookupFunction(0x13B2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E5B0u; }
        if (ctx->pc != 0x29E5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CPSetTexture__11mgC3DSpriteFP10mgCTexture_0x13b2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E5B0u; }
        if (ctx->pc != 0x29E5B0u) { return; }
    }
    ctx->pc = 0x29E5B0u;
label_29e5b0:
    // 0x29e5b0: 0xc04ecd8  jal         func_13B360
label_29e5b4:
    if (ctx->pc == 0x29E5B4u) {
        ctx->pc = 0x29E5B4u;
            // 0x29e5b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E5B8u;
        goto label_29e5b8;
    }
    ctx->pc = 0x29E5B0u;
    SET_GPR_U32(ctx, 31, 0x29E5B8u);
    ctx->pc = 0x29E5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E5B0u;
            // 0x29e5b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B360u;
    if (runtime->hasFunction(0x13B360u)) {
        auto targetFn = runtime->lookupFunction(0x13B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E5B8u; }
        if (ctx->pc != 0x29E5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BeginCPSprite__11mgC3DSpriteFv_0x13b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E5B8u; }
        if (ctx->pc != 0x29E5B8u) { return; }
    }
    ctx->pc = 0x29E5B8u;
label_29e5b8:
    // 0x29e5b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29e5b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29e5bc:
    // 0x29e5bc: 0xc0a761c  jal         func_29D870
label_29e5c0:
    if (ctx->pc == 0x29E5C0u) {
        ctx->pc = 0x29E5C0u;
            // 0x29e5c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x29E5C4u;
        goto label_29e5c4;
    }
    ctx->pc = 0x29E5BCu;
    SET_GPR_U32(ctx, 31, 0x29E5C4u);
    ctx->pc = 0x29E5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E5BCu;
            // 0x29e5c0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D870u;
    if (runtime->hasFunction(0x29D870u)) {
        auto targetFn = runtime->lookupFunction(0x29D870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E5C4u; }
        if (ctx->pc != 0x29E5C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStart__14CFuncPointMngrFi_0x29d870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E5C4u; }
        if (ctx->pc != 0x29E5C4u) { return; }
    }
    ctx->pc = 0x29E5C4u;
label_29e5c4:
    // 0x29e5c4: 0xc0a762c  jal         func_29D8B0
label_29e5c8:
    if (ctx->pc == 0x29E5C8u) {
        ctx->pc = 0x29E5C8u;
            // 0x29e5c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E5CCu;
        goto label_29e5cc;
    }
    ctx->pc = 0x29E5C4u;
    SET_GPR_U32(ctx, 31, 0x29E5CCu);
    ctx->pc = 0x29E5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E5C4u;
            // 0x29e5c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E5CCu; }
        if (ctx->pc != 0x29E5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E5CCu; }
        if (ctx->pc != 0x29E5CCu) { return; }
    }
    ctx->pc = 0x29E5CCu;
label_29e5cc:
    // 0x29e5cc: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_29e5d0:
    if (ctx->pc == 0x29E5D0u) {
        ctx->pc = 0x29E5D4u;
        goto label_29e5d4;
    }
    ctx->pc = 0x29E5CCu;
    {
        const bool branch_taken_0x29e5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e5cc) {
            ctx->pc = 0x29E658u;
            goto label_29e658;
        }
    }
    ctx->pc = 0x29E5D4u;
label_29e5d4:
    // 0x29e5d4: 0x8c4301b0  lw          $v1, 0x1B0($v0)
    ctx->pc = 0x29e5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 432)));
label_29e5d8:
    // 0x29e5d8: 0x1060001b  beqz        $v1, . + 4 + (0x1B << 2)
label_29e5dc:
    if (ctx->pc == 0x29E5DCu) {
        ctx->pc = 0x29E5E0u;
        goto label_29e5e0;
    }
    ctx->pc = 0x29E5D8u;
    {
        const bool branch_taken_0x29e5d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e5d8) {
            ctx->pc = 0x29E648u;
            goto label_29e648;
        }
    }
    ctx->pc = 0x29E5E0u;
label_29e5e0:
    // 0x29e5e0: 0xc44001a0  lwc1        $f0, 0x1A0($v0)
    ctx->pc = 0x29e5e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29e5e4:
    // 0x29e5e4: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x29e5e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_29e5e8:
    // 0x29e5e8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x29e5e8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_29e5ec:
    // 0x29e5ec: 0x27aa0154  addiu       $t2, $sp, 0x154
    ctx->pc = 0x29e5ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
label_29e5f0:
    // 0x29e5f0: 0x24470020  addiu       $a3, $v0, 0x20
    ctx->pc = 0x29e5f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
label_29e5f4:
    // 0x29e5f4: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x29e5f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_29e5f8:
    // 0x29e5f8: 0x3c033ecc  lui         $v1, 0x3ECC
    ctx->pc = 0x29e5f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16076 << 16));
label_29e5fc:
    // 0x29e5fc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29e5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29e600:
    // 0x29e600: 0x3463cccd  ori         $v1, $v1, 0xCCCD
    ctx->pc = 0x29e600u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)52429);
label_29e604:
    // 0x29e604: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x29e604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_29e608:
    // 0x29e608: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x29e608u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_29e60c:
    // 0x29e60c: 0x27a80130  addiu       $t0, $sp, 0x130
    ctx->pc = 0x29e60cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_29e610:
    // 0x29e610: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x29e610u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_29e614:
    // 0x29e614: 0x27a90140  addiu       $t1, $sp, 0x140
    ctx->pc = 0x29e614u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_29e618:
    // 0x29e618: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x29e618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_29e61c:
    // 0x29e61c: 0xc44001a4  lwc1        $f0, 0x1A4($v0)
    ctx->pc = 0x29e61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29e620:
    // 0x29e620: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x29e620u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_29e624:
    // 0x29e624: 0xe5400000  swc1        $f0, 0x0($t2)
    ctx->pc = 0x29e624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
label_29e628:
    // 0x29e628: 0x78420180  lq          $v0, 0x180($v0)
    ctx->pc = 0x29e628u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 384)));
label_29e62c:
    // 0x29e62c: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x29e62cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_29e630:
    // 0x29e630: 0xc5400000  lwc1        $f0, 0x0($t2)
    ctx->pc = 0x29e630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29e634:
    // 0x29e634: 0xc7a20164  lwc1        $f2, 0x164($sp)
    ctx->pc = 0x29e634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_29e638:
    // 0x29e638: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x29e638u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_29e63c:
    // 0x29e63c: 0x46001000  add.s       $f0, $f2, $f0
    ctx->pc = 0x29e63cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
label_29e640:
    // 0x29e640: 0xc04ed64  jal         func_13B590
label_29e644:
    if (ctx->pc == 0x29E644u) {
        ctx->pc = 0x29E644u;
            // 0x29e644: 0xe7a00164  swc1        $f0, 0x164($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
        ctx->pc = 0x29E648u;
        goto label_29e648;
    }
    ctx->pc = 0x29E640u;
    SET_GPR_U32(ctx, 31, 0x29E648u);
    ctx->pc = 0x29E644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E640u;
            // 0x29e644: 0xe7a00164  swc1        $f0, 0x164($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B590u;
    if (runtime->hasFunction(0x13B590u)) {
        auto targetFn = runtime->lookupFunction(0x13B590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E648u; }
        if (ctx->pc != 0x29E648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CPSetSprite__11mgC3DSpriteFPfPfPfPfPf_0x13b590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E648u; }
        if (ctx->pc != 0x29E648u) { return; }
    }
    ctx->pc = 0x29E648u;
label_29e648:
    // 0x29e648: 0xc0a762c  jal         func_29D8B0
label_29e64c:
    if (ctx->pc == 0x29E64Cu) {
        ctx->pc = 0x29E64Cu;
            // 0x29e64c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E650u;
        goto label_29e650;
    }
    ctx->pc = 0x29E648u;
    SET_GPR_U32(ctx, 31, 0x29E650u);
    ctx->pc = 0x29E64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E648u;
            // 0x29e64c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E650u; }
        if (ctx->pc != 0x29E650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E650u; }
        if (ctx->pc != 0x29E650u) { return; }
    }
    ctx->pc = 0x29E650u;
label_29e650:
    // 0x29e650: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_29e654:
    if (ctx->pc == 0x29E654u) {
        ctx->pc = 0x29E658u;
        goto label_29e658;
    }
    ctx->pc = 0x29E650u;
    {
        const bool branch_taken_0x29e650 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e650) {
            ctx->pc = 0x29E5D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29e5d4;
        }
    }
    ctx->pc = 0x29E658u;
label_29e658:
    // 0x29e658: 0xc0a7638  jal         func_29D8E0
label_29e65c:
    if (ctx->pc == 0x29E65Cu) {
        ctx->pc = 0x29E65Cu;
            // 0x29e65c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E660u;
        goto label_29e660;
    }
    ctx->pc = 0x29E658u;
    SET_GPR_U32(ctx, 31, 0x29E660u);
    ctx->pc = 0x29E65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E658u;
            // 0x29e65c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8E0u;
    if (runtime->hasFunction(0x29D8E0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E660u; }
        if (ctx->pc != 0x29E660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEnd__14CFuncPointMngrFv_0x29d8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E660u; }
        if (ctx->pc != 0x29E660u) { return; }
    }
    ctx->pc = 0x29E660u;
label_29e660:
    // 0x29e660: 0xc04edb0  jal         func_13B6C0
label_29e664:
    if (ctx->pc == 0x29E664u) {
        ctx->pc = 0x29E664u;
            // 0x29e664: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E668u;
        goto label_29e668;
    }
    ctx->pc = 0x29E660u;
    SET_GPR_U32(ctx, 31, 0x29E668u);
    ctx->pc = 0x29E664u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E660u;
            // 0x29e664: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B6C0u;
    if (runtime->hasFunction(0x13B6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13B6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E668u; }
        if (ctx->pc != 0x29E668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndCPSprite__11mgC3DSpriteFv_0x13b6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E668u; }
        if (ctx->pc != 0x29E668u) { return; }
    }
    ctx->pc = 0x29E668u;
label_29e668:
    // 0x29e668: 0xc04edfc  jal         func_13B7F0
label_29e66c:
    if (ctx->pc == 0x29E66Cu) {
        ctx->pc = 0x29E66Cu;
            // 0x29e66c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E670u;
        goto label_29e670;
    }
    ctx->pc = 0x29E668u;
    SET_GPR_U32(ctx, 31, 0x29E670u);
    ctx->pc = 0x29E66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E668u;
            // 0x29e66c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B7F0u;
    if (runtime->hasFunction(0x13B7F0u)) {
        auto targetFn = runtime->lookupFunction(0x13B7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E670u; }
        if (ctx->pc != 0x29E670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndCreatePacket__11mgC3DSpriteFv_0x13b7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E670u; }
        if (ctx->pc != 0x29E670u) { return; }
    }
    ctx->pc = 0x29E670u;
label_29e670:
    // 0x29e670: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29e670u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29e674:
    // 0x29e674: 0xc050c10  jal         func_143040
label_29e678:
    if (ctx->pc == 0x29E678u) {
        ctx->pc = 0x29E678u;
            // 0x29e678: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E67Cu;
        goto label_29e67c;
    }
    ctx->pc = 0x29E674u;
    SET_GPR_U32(ctx, 31, 0x29E67Cu);
    ctx->pc = 0x29E678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E674u;
            // 0x29e678: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143040u;
    if (runtime->hasFunction(0x143040u)) {
        auto targetFn = runtime->lookupFunction(0x143040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E67Cu; }
        if (ctx->pc != 0x29E67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP9mgCVisualPA4_f_0x143040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E67Cu; }
        if (ctx->pc != 0x29E67Cu) { return; }
    }
    ctx->pc = 0x29E67Cu;
label_29e67c:
    // 0x29e67c: 0x1e000003  bgtz        $s0, . + 4 + (0x3 << 2)
label_29e680:
    if (ctx->pc == 0x29E680u) {
        ctx->pc = 0x29E680u;
            // 0x29e680: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E684u;
        goto label_29e684;
    }
    ctx->pc = 0x29E67Cu;
    {
        const bool branch_taken_0x29e67c = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x29E680u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E67Cu;
            // 0x29e680: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e67c) {
            ctx->pc = 0x29E68Cu;
            goto label_29e68c;
        }
    }
    ctx->pc = 0x29E684u;
label_29e684:
    // 0x29e684: 0x1a2000ee  blez        $s1, . + 4 + (0xEE << 2)
label_29e688:
    if (ctx->pc == 0x29E688u) {
        ctx->pc = 0x29E68Cu;
        goto label_29e68c;
    }
    ctx->pc = 0x29E684u;
    {
        const bool branch_taken_0x29e684 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x29e684) {
            ctx->pc = 0x29EA40u;
            goto label_29ea40;
        }
    }
    ctx->pc = 0x29E68Cu;
label_29e68c:
    // 0x29e68c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29e68cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29e690:
    // 0x29e690: 0xc04ec68  jal         func_13B1A0
label_29e694:
    if (ctx->pc == 0x29E694u) {
        ctx->pc = 0x29E694u;
            // 0x29e694: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E698u;
        goto label_29e698;
    }
    ctx->pc = 0x29E690u;
    SET_GPR_U32(ctx, 31, 0x29E698u);
    ctx->pc = 0x29E694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E690u;
            // 0x29e694: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B1A0u;
    if (runtime->hasFunction(0x13B1A0u)) {
        auto targetFn = runtime->lookupFunction(0x13B1A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E698u; }
        if (ctx->pc != 0x29E698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BeginCreatePacket__11mgC3DSpriteFiP14mgCDrawManager_0x13b1a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E698u; }
        if (ctx->pc != 0x29E698u) { return; }
    }
    ctx->pc = 0x29E698u;
label_29e698:
    // 0x29e698: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x29e698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_29e69c:
    // 0x29e69c: 0xc04e290  jal         func_138A40
label_29e6a0:
    if (ctx->pc == 0x29E6A0u) {
        ctx->pc = 0x29E6A0u;
            // 0x29e6a0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x29E6A4u;
        goto label_29e6a4;
    }
    ctx->pc = 0x29E69Cu;
    SET_GPR_U32(ctx, 31, 0x29E6A4u);
    ctx->pc = 0x29E6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E69Cu;
            // 0x29e6a0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138A40u;
    if (runtime->hasFunction(0x138A40u)) {
        auto targetFn = runtime->lookupFunction(0x138A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E6A4u; }
        if (ctx->pc != 0x29E6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetZBuf__10mgCDrawEnvFi_0x138a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E6A4u; }
        if (ctx->pc != 0x29E6A4u) { return; }
    }
    ctx->pc = 0x29E6A4u;
label_29e6a4:
    // 0x29e6a4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x29e6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_29e6a8:
    // 0x29e6a8: 0xc04e25c  jal         func_138970
label_29e6ac:
    if (ctx->pc == 0x29E6ACu) {
        ctx->pc = 0x29E6ACu;
            // 0x29e6ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x29E6B0u;
        goto label_29e6b0;
    }
    ctx->pc = 0x29E6A8u;
    SET_GPR_U32(ctx, 31, 0x29E6B0u);
    ctx->pc = 0x29E6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E6A8u;
            // 0x29e6ac: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x138970u;
    if (runtime->hasFunction(0x138970u)) {
        auto targetFn = runtime->lookupFunction(0x138970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E6B0u; }
        if (ctx->pc != 0x29E6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAlpha__10mgCDrawEnvFi_0x138970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E6B0u; }
        if (ctx->pc != 0x29E6B0u) { return; }
    }
    ctx->pc = 0x29E6B0u;
label_29e6b0:
    // 0x29e6b0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29e6b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29e6b4:
    // 0x29e6b4: 0xc04ec80  jal         func_13B200
label_29e6b8:
    if (ctx->pc == 0x29E6B8u) {
        ctx->pc = 0x29E6B8u;
            // 0x29e6b8: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x29E6BCu;
        goto label_29e6bc;
    }
    ctx->pc = 0x29E6B4u;
    SET_GPR_U32(ctx, 31, 0x29E6BCu);
    ctx->pc = 0x29E6B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E6B4u;
            // 0x29e6b8: 0x27a500f0  addiu       $a1, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B200u;
    if (runtime->hasFunction(0x13B200u)) {
        auto targetFn = runtime->lookupFunction(0x13B200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E6BCu; }
        if (ctx->pc != 0x29E6BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CPSetDrawEnv__11mgC3DSpriteFP10mgCDrawEnv_0x13b200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E6BCu; }
        if (ctx->pc != 0x29E6BCu) { return; }
    }
    ctx->pc = 0x29E6BCu;
label_29e6bc:
    // 0x29e6bc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x29e6bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29e6c0:
    // 0x29e6c0: 0xc04ecbc  jal         func_13B2F0
label_29e6c4:
    if (ctx->pc == 0x29E6C4u) {
        ctx->pc = 0x29E6C4u;
            // 0x29e6c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E6C8u;
        goto label_29e6c8;
    }
    ctx->pc = 0x29E6C0u;
    SET_GPR_U32(ctx, 31, 0x29E6C8u);
    ctx->pc = 0x29E6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E6C0u;
            // 0x29e6c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B2F0u;
    if (runtime->hasFunction(0x13B2F0u)) {
        auto targetFn = runtime->lookupFunction(0x13B2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E6C8u; }
        if (ctx->pc != 0x29E6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CPSetTexture__11mgC3DSpriteFP10mgCTexture_0x13b2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E6C8u; }
        if (ctx->pc != 0x29E6C8u) { return; }
    }
    ctx->pc = 0x29E6C8u;
label_29e6c8:
    // 0x29e6c8: 0xc04ecd8  jal         func_13B360
label_29e6cc:
    if (ctx->pc == 0x29E6CCu) {
        ctx->pc = 0x29E6CCu;
            // 0x29e6cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E6D0u;
        goto label_29e6d0;
    }
    ctx->pc = 0x29E6C8u;
    SET_GPR_U32(ctx, 31, 0x29E6D0u);
    ctx->pc = 0x29E6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E6C8u;
            // 0x29e6cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B360u;
    if (runtime->hasFunction(0x13B360u)) {
        auto targetFn = runtime->lookupFunction(0x13B360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E6D0u; }
        if (ctx->pc != 0x29E6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BeginCPSprite__11mgC3DSpriteFv_0x13b360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E6D0u; }
        if (ctx->pc != 0x29E6D0u) { return; }
    }
    ctx->pc = 0x29E6D0u;
label_29e6d0:
    // 0x29e6d0: 0xc04bc8c  jal         func_12F230
label_29e6d4:
    if (ctx->pc == 0x29E6D4u) {
        ctx->pc = 0x29E6D4u;
            // 0x29e6d4: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x29E6D8u;
        goto label_29e6d8;
    }
    ctx->pc = 0x29E6D0u;
    SET_GPR_U32(ctx, 31, 0x29E6D8u);
    ctx->pc = 0x29E6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E6D0u;
            // 0x29e6d4: 0x27a40130  addiu       $a0, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E6D8u; }
        if (ctx->pc != 0x29E6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E6D8u; }
        if (ctx->pc != 0x29E6D8u) { return; }
    }
    ctx->pc = 0x29E6D8u;
label_29e6d8:
    // 0x29e6d8: 0xc04bc8c  jal         func_12F230
label_29e6dc:
    if (ctx->pc == 0x29E6DCu) {
        ctx->pc = 0x29E6DCu;
            // 0x29e6dc: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x29E6E0u;
        goto label_29e6e0;
    }
    ctx->pc = 0x29E6D8u;
    SET_GPR_U32(ctx, 31, 0x29E6E0u);
    ctx->pc = 0x29E6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E6D8u;
            // 0x29e6dc: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F230u;
    if (runtime->hasFunction(0x12F230u)) {
        auto targetFn = runtime->lookupFunction(0x12F230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E6E0u; }
        if (ctx->pc != 0x29E6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgZeroVector__FPf_0x12f230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E6E0u; }
        if (ctx->pc != 0x29E6E0u) { return; }
    }
    ctx->pc = 0x29E6E0u;
label_29e6e0:
    // 0x29e6e0: 0x3c024280  lui         $v0, 0x4280
    ctx->pc = 0x29e6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17024 << 16));
label_29e6e4:
    // 0x29e6e4: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x29e6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
label_29e6e8:
    // 0x29e6e8: 0xc04a0ea  jal         func_1283A8
label_29e6ec:
    if (ctx->pc == 0x29E6ECu) {
        ctx->pc = 0x29E6ECu;
            // 0x29e6ec: 0xafa20140  sw          $v0, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
        ctx->pc = 0x29E6F0u;
        goto label_29e6f0;
    }
    ctx->pc = 0x29E6E8u;
    SET_GPR_U32(ctx, 31, 0x29E6F0u);
    ctx->pc = 0x29E6ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E6E8u;
            // 0x29e6ec: 0xafa20140  sw          $v0, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E6F0u; }
        if (ctx->pc != 0x29E6F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E6F0u; }
        if (ctx->pc != 0x29E6F0u) { return; }
    }
    ctx->pc = 0x29E6F0u;
label_29e6f0:
    // 0x29e6f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29e6f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29e6f4:
    // 0x29e6f4: 0x3c053f00  lui         $a1, 0x3F00
    ctx->pc = 0x29e6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16128 << 16));
label_29e6f8:
    // 0x29e6f8: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x29e6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_29e6fc:
    // 0x29e6fc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x29e6fcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_29e700:
    // 0x29e700: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x29e700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_29e704:
    // 0x29e704: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29e704u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_29e708:
    // 0x29e708: 0x0  nop
    ctx->pc = 0x29e708u;
    // NOP
label_29e70c:
    // 0x29e70c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x29e70cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_29e710:
    // 0x29e710: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x29e710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_29e714:
    // 0x29e714: 0x3444cccd  ori         $a0, $v0, 0xCCCD
    ctx->pc = 0x29e714u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_29e718:
    // 0x29e718: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x29e718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_29e71c:
    // 0x29e71c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x29e71cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_29e720:
    // 0x29e720: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x29e720u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_29e724:
    // 0x29e724: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x29e724u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_29e728:
    // 0x29e728: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x29e728u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_29e72c:
    // 0x29e72c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x29e72cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_29e730:
    // 0x29e730: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29e730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29e734:
    // 0x29e734: 0x0  nop
    ctx->pc = 0x29e734u;
    // NOP
label_29e738:
    // 0x29e738: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x29e738u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_29e73c:
    // 0x29e73c: 0xc04a0ea  jal         func_1283A8
label_29e740:
    if (ctx->pc == 0x29E740u) {
        ctx->pc = 0x29E740u;
            // 0x29e740: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x29E744u;
        goto label_29e744;
    }
    ctx->pc = 0x29E73Cu;
    SET_GPR_U32(ctx, 31, 0x29E744u);
    ctx->pc = 0x29E740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E73Cu;
            // 0x29e740: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1283A8u;
    if (runtime->hasFunction(0x1283A8u)) {
        auto targetFn = runtime->lookupFunction(0x1283A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E744u; }
        if (ctx->pc != 0x29E744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        rand_0x1283a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E744u; }
        if (ctx->pc != 0x29E744u) { return; }
    }
    ctx->pc = 0x29E744u;
label_29e744:
    // 0x29e744: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29e744u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_29e748:
    // 0x29e748: 0x3c083f00  lui         $t0, 0x3F00
    ctx->pc = 0x29e748u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16128 << 16));
label_29e74c:
    // 0x29e74c: 0x3c063f80  lui         $a2, 0x3F80
    ctx->pc = 0x29e74cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16256 << 16));
label_29e750:
    // 0x29e750: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x29e750u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_29e754:
    // 0x29e754: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x29e754u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_29e758:
    // 0x29e758: 0x3c024f00  lui         $v0, 0x4F00
    ctx->pc = 0x29e758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20224 << 16));
label_29e75c:
    // 0x29e75c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29e75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29e760:
    // 0x29e760: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29e760u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29e764:
    // 0x29e764: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x29e764u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29e768:
    // 0x29e768: 0x0  nop
    ctx->pc = 0x29e768u;
    // NOP
label_29e76c:
    // 0x29e76c: 0x46000883  div.s       $f2, $f1, $f0
    ctx->pc = 0x29e76cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_29e770:
    // 0x29e770: 0x3c023d4c  lui         $v0, 0x3D4C
    ctx->pc = 0x29e770u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15692 << 16));
label_29e774:
    // 0x29e774: 0x3447cccd  ori         $a3, $v0, 0xCCCD
    ctx->pc = 0x29e774u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_29e778:
    // 0x29e778: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x29e778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_29e77c:
    // 0x29e77c: 0xafa2017c  sw          $v0, 0x17C($sp)
    ctx->pc = 0x29e77cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 2));
label_29e780:
    // 0x29e780: 0x44880800  mtc1        $t0, $f1
    ctx->pc = 0x29e780u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_29e784:
    // 0x29e784: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x29e784u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29e788:
    // 0x29e788: 0x0  nop
    ctx->pc = 0x29e788u;
    // NOP
label_29e78c:
    // 0x29e78c: 0x46011041  sub.s       $f1, $f2, $f1
    ctx->pc = 0x29e78cu;
    ctx->f[1] = FPU_SUB_S(ctx->f[2], ctx->f[1]);
label_29e790:
    // 0x29e790: 0x46010082  mul.s       $f2, $f0, $f1
    ctx->pc = 0x29e790u;
    ctx->f[2] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_29e794:
    // 0x29e794: 0x44860800  mtc1        $a2, $f1
    ctx->pc = 0x29e794u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_29e798:
    // 0x29e798: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x29e798u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_29e79c:
    // 0x29e79c: 0x0  nop
    ctx->pc = 0x29e79cu;
    // NOP
label_29e7a0:
    // 0x29e7a0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x29e7a0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_29e7a4:
    // 0x29e7a4: 0xc0a761c  jal         func_29D870
label_29e7a8:
    if (ctx->pc == 0x29E7A8u) {
        ctx->pc = 0x29E7A8u;
            // 0x29e7a8: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x29E7ACu;
        goto label_29e7ac;
    }
    ctx->pc = 0x29E7A4u;
    SET_GPR_U32(ctx, 31, 0x29E7ACu);
    ctx->pc = 0x29E7A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E7A4u;
            // 0x29e7a8: 0x46010542  mul.s       $f21, $f0, $f1 (Delay Slot)
        ctx->f[21] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D870u;
    if (runtime->hasFunction(0x29D870u)) {
        auto targetFn = runtime->lookupFunction(0x29D870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E7ACu; }
        if (ctx->pc != 0x29E7ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStart__14CFuncPointMngrFi_0x29d870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E7ACu; }
        if (ctx->pc != 0x29E7ACu) { return; }
    }
    ctx->pc = 0x29E7ACu;
label_29e7ac:
    // 0x29e7ac: 0xc0a762c  jal         func_29D8B0
label_29e7b0:
    if (ctx->pc == 0x29E7B0u) {
        ctx->pc = 0x29E7B0u;
            // 0x29e7b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E7B4u;
        goto label_29e7b4;
    }
    ctx->pc = 0x29E7ACu;
    SET_GPR_U32(ctx, 31, 0x29E7B4u);
    ctx->pc = 0x29E7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E7ACu;
            // 0x29e7b0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E7B4u; }
        if (ctx->pc != 0x29E7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E7B4u; }
        if (ctx->pc != 0x29E7B4u) { return; }
    }
    ctx->pc = 0x29E7B4u;
label_29e7b4:
    // 0x29e7b4: 0x10400042  beqz        $v0, . + 4 + (0x42 << 2)
label_29e7b8:
    if (ctx->pc == 0x29E7B8u) {
        ctx->pc = 0x29E7B8u;
            // 0x29e7b8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E7BCu;
        goto label_29e7bc;
    }
    ctx->pc = 0x29E7B4u;
    {
        const bool branch_taken_0x29e7b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E7B4u;
            // 0x29e7b8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e7b4) {
            ctx->pc = 0x29E8C0u;
            goto label_29e8c0;
        }
    }
    ctx->pc = 0x29E7BCu;
label_29e7bc:
    // 0x29e7bc: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x29e7bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_29e7c0:
    // 0x29e7c0: 0x1440003b  bnez        $v0, . + 4 + (0x3B << 2)
label_29e7c4:
    if (ctx->pc == 0x29E7C4u) {
        ctx->pc = 0x29E7C8u;
        goto label_29e7c8;
    }
    ctx->pc = 0x29E7C0u;
    {
        const bool branch_taken_0x29e7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e7c0) {
            ctx->pc = 0x29E8B0u;
            goto label_29e8b0;
        }
    }
    ctx->pc = 0x29E7C8u;
label_29e7c8:
    // 0x29e7c8: 0x8e2201b0  lw          $v0, 0x1B0($s1)
    ctx->pc = 0x29e7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 432)));
label_29e7cc:
    // 0x29e7cc: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_29e7d0:
    if (ctx->pc == 0x29E7D0u) {
        ctx->pc = 0x29E7D4u;
        goto label_29e7d4;
    }
    ctx->pc = 0x29E7CCu;
    {
        const bool branch_taken_0x29e7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e7cc) {
            ctx->pc = 0x29E8B0u;
            goto label_29e8b0;
        }
    }
    ctx->pc = 0x29E7D4u;
label_29e7d4:
    // 0x29e7d4: 0xc62001a0  lwc1        $f0, 0x1A0($s1)
    ctx->pc = 0x29e7d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29e7d8:
    // 0x29e7d8: 0x27b00154  addiu       $s0, $sp, 0x154
    ctx->pc = 0x29e7d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 340));
label_29e7dc:
    // 0x29e7dc: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x29e7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_29e7e0:
    // 0x29e7e0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x29e7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_29e7e4:
    // 0x29e7e4: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x29e7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_29e7e8:
    // 0x29e7e8: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x29e7e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_29e7ec:
    // 0x29e7ec: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x29e7ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_29e7f0:
    // 0x29e7f0: 0xc62001a4  lwc1        $f0, 0x1A4($s1)
    ctx->pc = 0x29e7f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29e7f4:
    // 0x29e7f4: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x29e7f4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_29e7f8:
    // 0x29e7f8: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x29e7f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_29e7fc:
    // 0x29e7fc: 0x7a220180  lq          $v0, 0x180($s1)
    ctx->pc = 0x29e7fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 384)));
label_29e800:
    // 0x29e800: 0xc041c3e  jal         func_1070F8
label_29e804:
    if (ctx->pc == 0x29E804u) {
        ctx->pc = 0x29E804u;
            // 0x29e804: 0x7cc20000  sq          $v0, 0x0($a2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
        ctx->pc = 0x29E808u;
        goto label_29e808;
    }
    ctx->pc = 0x29E800u;
    SET_GPR_U32(ctx, 31, 0x29E808u);
    ctx->pc = 0x29E804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E800u;
            // 0x29e804: 0x7cc20000  sq          $v0, 0x0($a2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E808u; }
        if (ctx->pc != 0x29E808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E808u; }
        if (ctx->pc != 0x29E808u) { return; }
    }
    ctx->pc = 0x29E808u;
label_29e808:
    // 0x29e808: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x29e808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_29e80c:
    // 0x29e80c: 0xc041be0  jal         func_106F80
label_29e810:
    if (ctx->pc == 0x29E810u) {
        ctx->pc = 0x29E810u;
            // 0x29e810: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E814u;
        goto label_29e814;
    }
    ctx->pc = 0x29E80Cu;
    SET_GPR_U32(ctx, 31, 0x29E814u);
    ctx->pc = 0x29E810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E80Cu;
            // 0x29e810: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E814u; }
        if (ctx->pc != 0x29E814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E814u; }
        if (ctx->pc != 0x29E814u) { return; }
    }
    ctx->pc = 0x29E814u;
label_29e814:
    // 0x29e814: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x29e814u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_29e818:
    // 0x29e818: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x29e818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_29e81c:
    // 0x29e81c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x29e81cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_29e820:
    // 0x29e820: 0xc041c4a  jal         func_107128
label_29e824:
    if (ctx->pc == 0x29E824u) {
        ctx->pc = 0x29E824u;
            // 0x29e824: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E828u;
        goto label_29e828;
    }
    ctx->pc = 0x29E820u;
    SET_GPR_U32(ctx, 31, 0x29E828u);
    ctx->pc = 0x29E824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E820u;
            // 0x29e824: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E828u; }
        if (ctx->pc != 0x29E828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E828u; }
        if (ctx->pc != 0x29E828u) { return; }
    }
    ctx->pc = 0x29E828u;
label_29e828:
    // 0x29e828: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x29e828u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_29e82c:
    // 0x29e82c: 0xc04bcf4  jal         func_12F3D0
label_29e830:
    if (ctx->pc == 0x29E830u) {
        ctx->pc = 0x29E830u;
            // 0x29e830: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x29E834u;
        goto label_29e834;
    }
    ctx->pc = 0x29E82Cu;
    SET_GPR_U32(ctx, 31, 0x29E834u);
    ctx->pc = 0x29E830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E82Cu;
            // 0x29e830: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E834u; }
        if (ctx->pc != 0x29E834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E834u; }
        if (ctx->pc != 0x29E834u) { return; }
    }
    ctx->pc = 0x29E834u;
label_29e834:
    // 0x29e834: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29e834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_29e838:
    // 0x29e838: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29e838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29e83c:
    // 0x29e83c: 0xafa2016c  sw          $v0, 0x16C($sp)
    ctx->pc = 0x29e83cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
label_29e840:
    // 0x29e840: 0xc7a40164  lwc1        $f4, 0x164($sp)
    ctx->pc = 0x29e840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
label_29e844:
    // 0x29e844: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x29e844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29e848:
    // 0x29e848: 0x3c023e99  lui         $v0, 0x3E99
    ctx->pc = 0x29e848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16025 << 16));
label_29e84c:
    // 0x29e84c: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x29e84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_29e850:
    // 0x29e850: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x29e850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_29e854:
    // 0x29e854: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x29e854u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_29e858:
    // 0x29e858: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x29e858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_29e85c:
    // 0x29e85c: 0x27a70170  addiu       $a3, $sp, 0x170
    ctx->pc = 0x29e85cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_29e860:
    // 0x29e860: 0x27a80130  addiu       $t0, $sp, 0x130
    ctx->pc = 0x29e860u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_29e864:
    // 0x29e864: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x29e864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_29e868:
    // 0x29e868: 0x27a90140  addiu       $t1, $sp, 0x140
    ctx->pc = 0x29e868u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_29e86c:
    // 0x29e86c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x29e86cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_29e870:
    // 0x29e870: 0x0  nop
    ctx->pc = 0x29e870u;
    // NOP
label_29e874:
    // 0x29e874: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x29e874u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_29e878:
    // 0x29e878: 0x3c023e80  lui         $v0, 0x3E80
    ctx->pc = 0x29e878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16000 << 16));
label_29e87c:
    // 0x29e87c: 0x46002000  add.s       $f0, $f4, $f0
    ctx->pc = 0x29e87cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[4], ctx->f[0]);
label_29e880:
    // 0x29e880: 0xe7a00164  swc1        $f0, 0x164($sp)
    ctx->pc = 0x29e880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 356), bits); }
label_29e884:
    // 0x29e884: 0xc6200020  lwc1        $f0, 0x20($s1)
    ctx->pc = 0x29e884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29e888:
    // 0x29e888: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x29e888u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_29e88c:
    // 0x29e88c: 0x0  nop
    ctx->pc = 0x29e88cu;
    // NOP
label_29e890:
    // 0x29e890: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x29e890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_29e894:
    // 0x29e894: 0xc6200024  lwc1        $f0, 0x24($s1)
    ctx->pc = 0x29e894u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29e898:
    // 0x29e898: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x29e898u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_29e89c:
    // 0x29e89c: 0xe7a00174  swc1        $f0, 0x174($sp)
    ctx->pc = 0x29e89cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_29e8a0:
    // 0x29e8a0: 0xc6200028  lwc1        $f0, 0x28($s1)
    ctx->pc = 0x29e8a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29e8a4:
    // 0x29e8a4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x29e8a4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_29e8a8:
    // 0x29e8a8: 0xc04ed64  jal         func_13B590
label_29e8ac:
    if (ctx->pc == 0x29E8ACu) {
        ctx->pc = 0x29E8ACu;
            // 0x29e8ac: 0xe7a00178  swc1        $f0, 0x178($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
        ctx->pc = 0x29E8B0u;
        goto label_29e8b0;
    }
    ctx->pc = 0x29E8A8u;
    SET_GPR_U32(ctx, 31, 0x29E8B0u);
    ctx->pc = 0x29E8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E8A8u;
            // 0x29e8ac: 0xe7a00178  swc1        $f0, 0x178($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 376), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B590u;
    if (runtime->hasFunction(0x13B590u)) {
        auto targetFn = runtime->lookupFunction(0x13B590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E8B0u; }
        if (ctx->pc != 0x29E8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CPSetSprite__11mgC3DSpriteFPfPfPfPfPf_0x13b590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E8B0u; }
        if (ctx->pc != 0x29E8B0u) { return; }
    }
    ctx->pc = 0x29E8B0u;
label_29e8b0:
    // 0x29e8b0: 0xc0a762c  jal         func_29D8B0
label_29e8b4:
    if (ctx->pc == 0x29E8B4u) {
        ctx->pc = 0x29E8B4u;
            // 0x29e8b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E8B8u;
        goto label_29e8b8;
    }
    ctx->pc = 0x29E8B0u;
    SET_GPR_U32(ctx, 31, 0x29E8B8u);
    ctx->pc = 0x29E8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E8B0u;
            // 0x29e8b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E8B8u; }
        if (ctx->pc != 0x29E8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E8B8u; }
        if (ctx->pc != 0x29E8B8u) { return; }
    }
    ctx->pc = 0x29E8B8u;
label_29e8b8:
    // 0x29e8b8: 0x1440ffc0  bnez        $v0, . + 4 + (-0x40 << 2)
label_29e8bc:
    if (ctx->pc == 0x29E8BCu) {
        ctx->pc = 0x29E8BCu;
            // 0x29e8bc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E8C0u;
        goto label_29e8c0;
    }
    ctx->pc = 0x29E8B8u;
    {
        const bool branch_taken_0x29e8b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E8B8u;
            // 0x29e8bc: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e8b8) {
            ctx->pc = 0x29E7BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29e7bc;
        }
    }
    ctx->pc = 0x29E8C0u;
label_29e8c0:
    // 0x29e8c0: 0xc0a7638  jal         func_29D8E0
label_29e8c4:
    if (ctx->pc == 0x29E8C4u) {
        ctx->pc = 0x29E8C4u;
            // 0x29e8c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E8C8u;
        goto label_29e8c8;
    }
    ctx->pc = 0x29E8C0u;
    SET_GPR_U32(ctx, 31, 0x29E8C8u);
    ctx->pc = 0x29E8C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E8C0u;
            // 0x29e8c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8E0u;
    if (runtime->hasFunction(0x29D8E0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E8C8u; }
        if (ctx->pc != 0x29E8C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEnd__14CFuncPointMngrFv_0x29d8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E8C8u; }
        if (ctx->pc != 0x29E8C8u) { return; }
    }
    ctx->pc = 0x29E8C8u;
label_29e8c8:
    // 0x29e8c8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x29e8c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29e8cc:
    // 0x29e8cc: 0xc0a761c  jal         func_29D870
label_29e8d0:
    if (ctx->pc == 0x29E8D0u) {
        ctx->pc = 0x29E8D0u;
            // 0x29e8d0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x29E8D4u;
        goto label_29e8d4;
    }
    ctx->pc = 0x29E8CCu;
    SET_GPR_U32(ctx, 31, 0x29E8D4u);
    ctx->pc = 0x29E8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E8CCu;
            // 0x29e8d0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D870u;
    if (runtime->hasFunction(0x29D870u)) {
        auto targetFn = runtime->lookupFunction(0x29D870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E8D4u; }
        if (ctx->pc != 0x29E8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStart__14CFuncPointMngrFi_0x29d870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E8D4u; }
        if (ctx->pc != 0x29E8D4u) { return; }
    }
    ctx->pc = 0x29E8D4u;
label_29e8d4:
    // 0x29e8d4: 0xc0a762c  jal         func_29D8B0
label_29e8d8:
    if (ctx->pc == 0x29E8D8u) {
        ctx->pc = 0x29E8D8u;
            // 0x29e8d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E8DCu;
        goto label_29e8dc;
    }
    ctx->pc = 0x29E8D4u;
    SET_GPR_U32(ctx, 31, 0x29E8DCu);
    ctx->pc = 0x29E8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E8D4u;
            // 0x29e8d8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E8DCu; }
        if (ctx->pc != 0x29E8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E8DCu; }
        if (ctx->pc != 0x29E8DCu) { return; }
    }
    ctx->pc = 0x29E8DCu;
label_29e8dc:
    // 0x29e8dc: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_29e8e0:
    if (ctx->pc == 0x29E8E0u) {
        ctx->pc = 0x29E8E0u;
            // 0x29e8e0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E8E4u;
        goto label_29e8e4;
    }
    ctx->pc = 0x29E8DCu;
    {
        const bool branch_taken_0x29e8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29E8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E8DCu;
            // 0x29e8e0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e8dc) {
            ctx->pc = 0x29E980u;
            goto label_29e980;
        }
    }
    ctx->pc = 0x29E8E4u;
label_29e8e4:
    // 0x29e8e4: 0x8e0201b0  lw          $v0, 0x1B0($s0)
    ctx->pc = 0x29e8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
label_29e8e8:
    // 0x29e8e8: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_29e8ec:
    if (ctx->pc == 0x29E8ECu) {
        ctx->pc = 0x29E8F0u;
        goto label_29e8f0;
    }
    ctx->pc = 0x29E8E8u;
    {
        const bool branch_taken_0x29e8e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29e8e8) {
            ctx->pc = 0x29E970u;
            goto label_29e970;
        }
    }
    ctx->pc = 0x29E8F0u;
label_29e8f0:
    // 0x29e8f0: 0xc60001a0  lwc1        $f0, 0x1A0($s0)
    ctx->pc = 0x29e8f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29e8f4:
    // 0x29e8f4: 0x27a60160  addiu       $a2, $sp, 0x160
    ctx->pc = 0x29e8f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_29e8f8:
    // 0x29e8f8: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x29e8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_29e8fc:
    // 0x29e8fc: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x29e8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_29e900:
    // 0x29e900: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x29e900u;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_29e904:
    // 0x29e904: 0xe7a00150  swc1        $f0, 0x150($sp)
    ctx->pc = 0x29e904u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 336), bits); }
label_29e908:
    // 0x29e908: 0xc60001a4  lwc1        $f0, 0x1A4($s0)
    ctx->pc = 0x29e908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_29e90c:
    // 0x29e90c: 0x4600a802  mul.s       $f0, $f21, $f0
    ctx->pc = 0x29e90cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[21], ctx->f[0]);
label_29e910:
    // 0x29e910: 0xe7a00154  swc1        $f0, 0x154($sp)
    ctx->pc = 0x29e910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 340), bits); }
label_29e914:
    // 0x29e914: 0x7a020180  lq          $v0, 0x180($s0)
    ctx->pc = 0x29e914u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 384)));
label_29e918:
    // 0x29e918: 0xc041c3e  jal         func_1070F8
label_29e91c:
    if (ctx->pc == 0x29E91Cu) {
        ctx->pc = 0x29E91Cu;
            // 0x29e91c: 0x7cc20000  sq          $v0, 0x0($a2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
        ctx->pc = 0x29E920u;
        goto label_29e920;
    }
    ctx->pc = 0x29E918u;
    SET_GPR_U32(ctx, 31, 0x29E920u);
    ctx->pc = 0x29E91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E918u;
            // 0x29e91c: 0x7cc20000  sq          $v0, 0x0($a2) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E920u; }
        if (ctx->pc != 0x29E920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E920u; }
        if (ctx->pc != 0x29E920u) { return; }
    }
    ctx->pc = 0x29E920u;
label_29e920:
    // 0x29e920: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x29e920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_29e924:
    // 0x29e924: 0xc041be0  jal         func_106F80
label_29e928:
    if (ctx->pc == 0x29E928u) {
        ctx->pc = 0x29E928u;
            // 0x29e928: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E92Cu;
        goto label_29e92c;
    }
    ctx->pc = 0x29E924u;
    SET_GPR_U32(ctx, 31, 0x29E92Cu);
    ctx->pc = 0x29E928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E924u;
            // 0x29e928: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E92Cu; }
        if (ctx->pc != 0x29E92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E92Cu; }
        if (ctx->pc != 0x29E92Cu) { return; }
    }
    ctx->pc = 0x29E92Cu;
label_29e92c:
    // 0x29e92c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x29e92cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_29e930:
    // 0x29e930: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x29e930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_29e934:
    // 0x29e934: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x29e934u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_29e938:
    // 0x29e938: 0xc041c4a  jal         func_107128
label_29e93c:
    if (ctx->pc == 0x29E93Cu) {
        ctx->pc = 0x29E93Cu;
            // 0x29e93c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E940u;
        goto label_29e940;
    }
    ctx->pc = 0x29E938u;
    SET_GPR_U32(ctx, 31, 0x29E940u);
    ctx->pc = 0x29E93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E938u;
            // 0x29e93c: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107128u;
    if (runtime->hasFunction(0x107128u)) {
        auto targetFn = runtime->lookupFunction(0x107128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E940u; }
        if (ctx->pc != 0x29E940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0ScaleVector_0x107128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E940u; }
        if (ctx->pc != 0x29E940u) { return; }
    }
    ctx->pc = 0x29E940u;
label_29e940:
    // 0x29e940: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x29e940u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_29e944:
    // 0x29e944: 0xc04bcf4  jal         func_12F3D0
label_29e948:
    if (ctx->pc == 0x29E948u) {
        ctx->pc = 0x29E948u;
            // 0x29e948: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x29E94Cu;
        goto label_29e94c;
    }
    ctx->pc = 0x29E944u;
    SET_GPR_U32(ctx, 31, 0x29E94Cu);
    ctx->pc = 0x29E948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E944u;
            // 0x29e948: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12F3D0u;
    if (runtime->hasFunction(0x12F3D0u)) {
        auto targetFn = runtime->lookupFunction(0x12F3D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E94Cu; }
        if (ctx->pc != 0x29E94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAddVector__FPfPf_0x12f3d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E94Cu; }
        if (ctx->pc != 0x29E94Cu) { return; }
    }
    ctx->pc = 0x29E94Cu;
label_29e94c:
    // 0x29e94c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x29e94cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_29e950:
    // 0x29e950: 0x26070020  addiu       $a3, $s0, 0x20
    ctx->pc = 0x29e950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_29e954:
    // 0x29e954: 0xafa2016c  sw          $v0, 0x16C($sp)
    ctx->pc = 0x29e954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 364), GPR_U32(ctx, 2));
label_29e958:
    // 0x29e958: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29e958u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29e95c:
    // 0x29e95c: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x29e95cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
label_29e960:
    // 0x29e960: 0x27a60150  addiu       $a2, $sp, 0x150
    ctx->pc = 0x29e960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_29e964:
    // 0x29e964: 0x27a80130  addiu       $t0, $sp, 0x130
    ctx->pc = 0x29e964u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_29e968:
    // 0x29e968: 0xc04ed64  jal         func_13B590
label_29e96c:
    if (ctx->pc == 0x29E96Cu) {
        ctx->pc = 0x29E96Cu;
            // 0x29e96c: 0x27a90140  addiu       $t1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x29E970u;
        goto label_29e970;
    }
    ctx->pc = 0x29E968u;
    SET_GPR_U32(ctx, 31, 0x29E970u);
    ctx->pc = 0x29E96Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E968u;
            // 0x29e96c: 0x27a90140  addiu       $t1, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B590u;
    if (runtime->hasFunction(0x13B590u)) {
        auto targetFn = runtime->lookupFunction(0x13B590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E970u; }
        if (ctx->pc != 0x29E970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CPSetSprite__11mgC3DSpriteFPfPfPfPfPf_0x13b590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E970u; }
        if (ctx->pc != 0x29E970u) { return; }
    }
    ctx->pc = 0x29E970u;
label_29e970:
    // 0x29e970: 0xc0a762c  jal         func_29D8B0
label_29e974:
    if (ctx->pc == 0x29E974u) {
        ctx->pc = 0x29E974u;
            // 0x29e974: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E978u;
        goto label_29e978;
    }
    ctx->pc = 0x29E970u;
    SET_GPR_U32(ctx, 31, 0x29E978u);
    ctx->pc = 0x29E974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E970u;
            // 0x29e974: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8B0u;
    if (runtime->hasFunction(0x29D8B0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E978u; }
        if (ctx->pc != 0x29E978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Get__14CFuncPointMngrFv_0x29d8b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E978u; }
        if (ctx->pc != 0x29E978u) { return; }
    }
    ctx->pc = 0x29E978u;
label_29e978:
    // 0x29e978: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_29e97c:
    if (ctx->pc == 0x29E97Cu) {
        ctx->pc = 0x29E97Cu;
            // 0x29e97c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E980u;
        goto label_29e980;
    }
    ctx->pc = 0x29E978u;
    {
        const bool branch_taken_0x29e978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29E97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29E978u;
            // 0x29e97c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29e978) {
            ctx->pc = 0x29E8E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29e8e4;
        }
    }
    ctx->pc = 0x29E980u;
label_29e980:
    // 0x29e980: 0xc0a7638  jal         func_29D8E0
label_29e984:
    if (ctx->pc == 0x29E984u) {
        ctx->pc = 0x29E984u;
            // 0x29e984: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E988u;
        goto label_29e988;
    }
    ctx->pc = 0x29E980u;
    SET_GPR_U32(ctx, 31, 0x29E988u);
    ctx->pc = 0x29E984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E980u;
            // 0x29e984: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29D8E0u;
    if (runtime->hasFunction(0x29D8E0u)) {
        auto targetFn = runtime->lookupFunction(0x29D8E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E988u; }
        if (ctx->pc != 0x29E988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEnd__14CFuncPointMngrFv_0x29d8e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E988u; }
        if (ctx->pc != 0x29E988u) { return; }
    }
    ctx->pc = 0x29E988u;
label_29e988:
    // 0x29e988: 0xc04edb0  jal         func_13B6C0
label_29e98c:
    if (ctx->pc == 0x29E98Cu) {
        ctx->pc = 0x29E98Cu;
            // 0x29e98c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E990u;
        goto label_29e990;
    }
    ctx->pc = 0x29E988u;
    SET_GPR_U32(ctx, 31, 0x29E990u);
    ctx->pc = 0x29E98Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E988u;
            // 0x29e98c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B6C0u;
    if (runtime->hasFunction(0x13B6C0u)) {
        auto targetFn = runtime->lookupFunction(0x13B6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E990u; }
        if (ctx->pc != 0x29E990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndCPSprite__11mgC3DSpriteFv_0x13b6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E990u; }
        if (ctx->pc != 0x29E990u) { return; }
    }
    ctx->pc = 0x29E990u;
label_29e990:
    // 0x29e990: 0xc04edfc  jal         func_13B7F0
label_29e994:
    if (ctx->pc == 0x29E994u) {
        ctx->pc = 0x29E994u;
            // 0x29e994: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29E998u;
        goto label_29e998;
    }
    ctx->pc = 0x29E990u;
    SET_GPR_U32(ctx, 31, 0x29E998u);
    ctx->pc = 0x29E994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E990u;
            // 0x29e994: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13B7F0u;
    if (runtime->hasFunction(0x13B7F0u)) {
        auto targetFn = runtime->lookupFunction(0x13B7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E998u; }
        if (ctx->pc != 0x29E998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndCreatePacket__11mgC3DSpriteFv_0x13b7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E998u; }
        if (ctx->pc != 0x29E998u) { return; }
    }
    ctx->pc = 0x29E998u;
label_29e998:
    // 0x29e998: 0x83829934  lb          $v0, -0x66CC($gp)
    ctx->pc = 0x29e998u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940980)));
label_29e99c:
    // 0x29e99c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_29e9a0:
    if (ctx->pc == 0x29E9A0u) {
        ctx->pc = 0x29E9A4u;
        goto label_29e9a4;
    }
    ctx->pc = 0x29E99Cu;
    {
        const bool branch_taken_0x29e99c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e99c) {
            ctx->pc = 0x29E9B8u;
            goto label_29e9b8;
        }
    }
    ctx->pc = 0x29E9A4u;
label_29e9a4:
    // 0x29e9a4: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29e9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_29e9a8:
    // 0x29e9a8: 0xc04d924  jal         func_136490
label_29e9ac:
    if (ctx->pc == 0x29E9ACu) {
        ctx->pc = 0x29E9ACu;
            // 0x29e9ac: 0x24845e20  addiu       $a0, $a0, 0x5E20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24096));
        ctx->pc = 0x29E9B0u;
        goto label_29e9b0;
    }
    ctx->pc = 0x29E9A8u;
    SET_GPR_U32(ctx, 31, 0x29E9B0u);
    ctx->pc = 0x29E9ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E9A8u;
            // 0x29e9ac: 0x24845e20  addiu       $a0, $a0, 0x5E20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136490u;
    if (runtime->hasFunction(0x136490u)) {
        auto targetFn = runtime->lookupFunction(0x136490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E9B0u; }
        if (ctx->pc != 0x29E9B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__8mgCFrameFv_0x136490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E9B0u; }
        if (ctx->pc != 0x29E9B0u) { return; }
    }
    ctx->pc = 0x29E9B0u;
label_29e9b0:
    // 0x29e9b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29e9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29e9b4:
    // 0x29e9b4: 0xa3829934  sb          $v0, -0x66CC($gp)
    ctx->pc = 0x29e9b4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940980), (uint8_t)GPR_U32(ctx, 2));
label_29e9b8:
    // 0x29e9b8: 0x3c0201f0  lui         $v0, 0x1F0
    ctx->pc = 0x29e9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)496 << 16));
label_29e9bc:
    // 0x29e9bc: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29e9bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_29e9c0:
    // 0x29e9c0: 0x24425f30  addiu       $v0, $v0, 0x5F30
    ctx->pc = 0x29e9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24368));
label_29e9c4:
    // 0x29e9c4: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29e9c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_29e9c8:
    // 0x29e9c8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x29e9c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29e9cc:
    // 0x29e9cc: 0xac225f10  sw          $v0, 0x5F10($at)
    ctx->pc = 0x29e9ccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 24336), GPR_U32(ctx, 2));
label_29e9d0:
    // 0x29e9d0: 0xc04dd64  jal         func_137590
label_29e9d4:
    if (ctx->pc == 0x29E9D4u) {
        ctx->pc = 0x29E9D4u;
            // 0x29e9d4: 0x24845e20  addiu       $a0, $a0, 0x5E20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24096));
        ctx->pc = 0x29E9D8u;
        goto label_29e9d8;
    }
    ctx->pc = 0x29E9D0u;
    SET_GPR_U32(ctx, 31, 0x29E9D8u);
    ctx->pc = 0x29E9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E9D0u;
            // 0x29e9d4: 0x24845e20  addiu       $a0, $a0, 0x5E20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137590u;
    if (runtime->hasFunction(0x137590u)) {
        auto targetFn = runtime->lookupFunction(0x137590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E9D8u; }
        if (ctx->pc != 0x29E9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTransMatrix__8mgCFrameFPA4_f_0x137590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E9D8u; }
        if (ctx->pc != 0x29E9D8u) { return; }
    }
    ctx->pc = 0x29E9D8u;
label_29e9d8:
    // 0x29e9d8: 0x83829938  lb          $v0, -0x66C8($gp)
    ctx->pc = 0x29e9d8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940984)));
label_29e9dc:
    // 0x29e9dc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_29e9e0:
    if (ctx->pc == 0x29E9E0u) {
        ctx->pc = 0x29E9E4u;
        goto label_29e9e4;
    }
    ctx->pc = 0x29E9DCu;
    {
        const bool branch_taken_0x29e9dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29e9dc) {
            ctx->pc = 0x29E9F8u;
            goto label_29e9f8;
        }
    }
    ctx->pc = 0x29E9E4u;
label_29e9e4:
    // 0x29e9e4: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29e9e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_29e9e8:
    // 0x29e9e8: 0xc04d6d8  jal         func_135B60
label_29e9ec:
    if (ctx->pc == 0x29E9ECu) {
        ctx->pc = 0x29E9ECu;
            // 0x29e9ec: 0x24845fe0  addiu       $a0, $a0, 0x5FE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24544));
        ctx->pc = 0x29E9F0u;
        goto label_29e9f0;
    }
    ctx->pc = 0x29E9E8u;
    SET_GPR_U32(ctx, 31, 0x29E9F0u);
    ctx->pc = 0x29E9ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29E9E8u;
            // 0x29e9ec: 0x24845fe0  addiu       $a0, $a0, 0x5FE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135B60u;
    if (runtime->hasFunction(0x135B60u)) {
        auto targetFn = runtime->lookupFunction(0x135B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E9F0u; }
        if (ctx->pc != 0x29E9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__12mgCFrameAttrFv_0x135b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29E9F0u; }
        if (ctx->pc != 0x29E9F0u) { return; }
    }
    ctx->pc = 0x29E9F0u;
label_29e9f0:
    // 0x29e9f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29e9f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29e9f4:
    // 0x29e9f4: 0xa3829938  sb          $v0, -0x66C8($gp)
    ctx->pc = 0x29e9f4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940984), (uint8_t)GPR_U32(ctx, 2));
label_29e9f8:
    // 0x29e9f8: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29e9f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_29e9fc:
    // 0x29e9fc: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29e9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_29ea00:
    // 0x29ea00: 0xac325f18  sw          $s2, 0x5F18($at)
    ctx->pc = 0x29ea00u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 24344), GPR_U32(ctx, 18));
label_29ea04:
    // 0x29ea04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29ea04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29ea08:
    // 0x29ea08: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29ea08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_29ea0c:
    // 0x29ea0c: 0x24845e20  addiu       $a0, $a0, 0x5E20
    ctx->pc = 0x29ea0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24096));
label_29ea10:
    // 0x29ea10: 0xac226028  sw          $v0, 0x6028($at)
    ctx->pc = 0x29ea10u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 24616), GPR_U32(ctx, 2));
label_29ea14:
    // 0x29ea14: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x29ea14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_29ea18:
    // 0x29ea18: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29ea18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_29ea1c:
    // 0x29ea1c: 0xac225ff8  sw          $v0, 0x5FF8($at)
    ctx->pc = 0x29ea1cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 24568), GPR_U32(ctx, 2));
label_29ea20:
    // 0x29ea20: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29ea20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29ea24:
    // 0x29ea24: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29ea24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_29ea28:
    // 0x29ea28: 0xac226010  sw          $v0, 0x6010($at)
    ctx->pc = 0x29ea28u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 24592), GPR_U32(ctx, 2));
label_29ea2c:
    // 0x29ea2c: 0x3c0201f0  lui         $v0, 0x1F0
    ctx->pc = 0x29ea2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)496 << 16));
label_29ea30:
    // 0x29ea30: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29ea30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_29ea34:
    // 0x29ea34: 0x24425fe0  addiu       $v0, $v0, 0x5FE0
    ctx->pc = 0x29ea34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24544));
label_29ea38:
    // 0x29ea38: 0xc050bf4  jal         func_142FD0
label_29ea3c:
    if (ctx->pc == 0x29EA3Cu) {
        ctx->pc = 0x29EA3Cu;
            // 0x29ea3c: 0xac225f14  sw          $v0, 0x5F14($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 24340), GPR_U32(ctx, 2));
        ctx->pc = 0x29EA40u;
        goto label_29ea40;
    }
    ctx->pc = 0x29EA38u;
    SET_GPR_U32(ctx, 31, 0x29EA40u);
    ctx->pc = 0x29EA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29EA38u;
            // 0x29ea3c: 0xac225f14  sw          $v0, 0x5F14($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 24340), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EA40u; }
        if (ctx->pc != 0x29EA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29EA40u; }
        if (ctx->pc != 0x29EA40u) { return; }
    }
    ctx->pc = 0x29EA40u;
label_29ea40:
    // 0x29ea40: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x29ea40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_29ea44:
    // 0x29ea44: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x29ea44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_29ea48:
    // 0x29ea48: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x29ea48u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_29ea4c:
    // 0x29ea4c: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x29ea4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_29ea50:
    // 0x29ea50: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x29ea50u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_29ea54:
    // 0x29ea54: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x29ea54u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_29ea58:
    // 0x29ea58: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x29ea58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_29ea5c:
    // 0x29ea5c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x29ea5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_29ea60:
    // 0x29ea60: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x29ea60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29ea64:
    // 0x29ea64: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x29ea64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29ea68:
    // 0x29ea68: 0x3e00008  jr          $ra
label_29ea6c:
    if (ctx->pc == 0x29EA6Cu) {
        ctx->pc = 0x29EA6Cu;
            // 0x29ea6c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x29EA70u;
        goto label_fallthrough_0x29ea68;
    }
    ctx->pc = 0x29EA68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29EA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29EA68u;
            // 0x29ea6c: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x29ea68:
    ctx->pc = 0x29EA70u;
}
