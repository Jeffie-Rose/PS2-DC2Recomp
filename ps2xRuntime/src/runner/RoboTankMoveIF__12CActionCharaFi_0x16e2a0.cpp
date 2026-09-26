#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RoboTankMoveIF__12CActionCharaFi
// Address: 0x16e2a0 - 0x16e9ec
void RoboTankMoveIF__12CActionCharaFi_0x16e2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RoboTankMoveIF__12CActionCharaFi_0x16e2a0");
#endif

    switch (ctx->pc) {
        case 0x16e2a0u: goto label_16e2a0;
        case 0x16e2a4u: goto label_16e2a4;
        case 0x16e2a8u: goto label_16e2a8;
        case 0x16e2acu: goto label_16e2ac;
        case 0x16e2b0u: goto label_16e2b0;
        case 0x16e2b4u: goto label_16e2b4;
        case 0x16e2b8u: goto label_16e2b8;
        case 0x16e2bcu: goto label_16e2bc;
        case 0x16e2c0u: goto label_16e2c0;
        case 0x16e2c4u: goto label_16e2c4;
        case 0x16e2c8u: goto label_16e2c8;
        case 0x16e2ccu: goto label_16e2cc;
        case 0x16e2d0u: goto label_16e2d0;
        case 0x16e2d4u: goto label_16e2d4;
        case 0x16e2d8u: goto label_16e2d8;
        case 0x16e2dcu: goto label_16e2dc;
        case 0x16e2e0u: goto label_16e2e0;
        case 0x16e2e4u: goto label_16e2e4;
        case 0x16e2e8u: goto label_16e2e8;
        case 0x16e2ecu: goto label_16e2ec;
        case 0x16e2f0u: goto label_16e2f0;
        case 0x16e2f4u: goto label_16e2f4;
        case 0x16e2f8u: goto label_16e2f8;
        case 0x16e2fcu: goto label_16e2fc;
        case 0x16e300u: goto label_16e300;
        case 0x16e304u: goto label_16e304;
        case 0x16e308u: goto label_16e308;
        case 0x16e30cu: goto label_16e30c;
        case 0x16e310u: goto label_16e310;
        case 0x16e314u: goto label_16e314;
        case 0x16e318u: goto label_16e318;
        case 0x16e31cu: goto label_16e31c;
        case 0x16e320u: goto label_16e320;
        case 0x16e324u: goto label_16e324;
        case 0x16e328u: goto label_16e328;
        case 0x16e32cu: goto label_16e32c;
        case 0x16e330u: goto label_16e330;
        case 0x16e334u: goto label_16e334;
        case 0x16e338u: goto label_16e338;
        case 0x16e33cu: goto label_16e33c;
        case 0x16e340u: goto label_16e340;
        case 0x16e344u: goto label_16e344;
        case 0x16e348u: goto label_16e348;
        case 0x16e34cu: goto label_16e34c;
        case 0x16e350u: goto label_16e350;
        case 0x16e354u: goto label_16e354;
        case 0x16e358u: goto label_16e358;
        case 0x16e35cu: goto label_16e35c;
        case 0x16e360u: goto label_16e360;
        case 0x16e364u: goto label_16e364;
        case 0x16e368u: goto label_16e368;
        case 0x16e36cu: goto label_16e36c;
        case 0x16e370u: goto label_16e370;
        case 0x16e374u: goto label_16e374;
        case 0x16e378u: goto label_16e378;
        case 0x16e37cu: goto label_16e37c;
        case 0x16e380u: goto label_16e380;
        case 0x16e384u: goto label_16e384;
        case 0x16e388u: goto label_16e388;
        case 0x16e38cu: goto label_16e38c;
        case 0x16e390u: goto label_16e390;
        case 0x16e394u: goto label_16e394;
        case 0x16e398u: goto label_16e398;
        case 0x16e39cu: goto label_16e39c;
        case 0x16e3a0u: goto label_16e3a0;
        case 0x16e3a4u: goto label_16e3a4;
        case 0x16e3a8u: goto label_16e3a8;
        case 0x16e3acu: goto label_16e3ac;
        case 0x16e3b0u: goto label_16e3b0;
        case 0x16e3b4u: goto label_16e3b4;
        case 0x16e3b8u: goto label_16e3b8;
        case 0x16e3bcu: goto label_16e3bc;
        case 0x16e3c0u: goto label_16e3c0;
        case 0x16e3c4u: goto label_16e3c4;
        case 0x16e3c8u: goto label_16e3c8;
        case 0x16e3ccu: goto label_16e3cc;
        case 0x16e3d0u: goto label_16e3d0;
        case 0x16e3d4u: goto label_16e3d4;
        case 0x16e3d8u: goto label_16e3d8;
        case 0x16e3dcu: goto label_16e3dc;
        case 0x16e3e0u: goto label_16e3e0;
        case 0x16e3e4u: goto label_16e3e4;
        case 0x16e3e8u: goto label_16e3e8;
        case 0x16e3ecu: goto label_16e3ec;
        case 0x16e3f0u: goto label_16e3f0;
        case 0x16e3f4u: goto label_16e3f4;
        case 0x16e3f8u: goto label_16e3f8;
        case 0x16e3fcu: goto label_16e3fc;
        case 0x16e400u: goto label_16e400;
        case 0x16e404u: goto label_16e404;
        case 0x16e408u: goto label_16e408;
        case 0x16e40cu: goto label_16e40c;
        case 0x16e410u: goto label_16e410;
        case 0x16e414u: goto label_16e414;
        case 0x16e418u: goto label_16e418;
        case 0x16e41cu: goto label_16e41c;
        case 0x16e420u: goto label_16e420;
        case 0x16e424u: goto label_16e424;
        case 0x16e428u: goto label_16e428;
        case 0x16e42cu: goto label_16e42c;
        case 0x16e430u: goto label_16e430;
        case 0x16e434u: goto label_16e434;
        case 0x16e438u: goto label_16e438;
        case 0x16e43cu: goto label_16e43c;
        case 0x16e440u: goto label_16e440;
        case 0x16e444u: goto label_16e444;
        case 0x16e448u: goto label_16e448;
        case 0x16e44cu: goto label_16e44c;
        case 0x16e450u: goto label_16e450;
        case 0x16e454u: goto label_16e454;
        case 0x16e458u: goto label_16e458;
        case 0x16e45cu: goto label_16e45c;
        case 0x16e460u: goto label_16e460;
        case 0x16e464u: goto label_16e464;
        case 0x16e468u: goto label_16e468;
        case 0x16e46cu: goto label_16e46c;
        case 0x16e470u: goto label_16e470;
        case 0x16e474u: goto label_16e474;
        case 0x16e478u: goto label_16e478;
        case 0x16e47cu: goto label_16e47c;
        case 0x16e480u: goto label_16e480;
        case 0x16e484u: goto label_16e484;
        case 0x16e488u: goto label_16e488;
        case 0x16e48cu: goto label_16e48c;
        case 0x16e490u: goto label_16e490;
        case 0x16e494u: goto label_16e494;
        case 0x16e498u: goto label_16e498;
        case 0x16e49cu: goto label_16e49c;
        case 0x16e4a0u: goto label_16e4a0;
        case 0x16e4a4u: goto label_16e4a4;
        case 0x16e4a8u: goto label_16e4a8;
        case 0x16e4acu: goto label_16e4ac;
        case 0x16e4b0u: goto label_16e4b0;
        case 0x16e4b4u: goto label_16e4b4;
        case 0x16e4b8u: goto label_16e4b8;
        case 0x16e4bcu: goto label_16e4bc;
        case 0x16e4c0u: goto label_16e4c0;
        case 0x16e4c4u: goto label_16e4c4;
        case 0x16e4c8u: goto label_16e4c8;
        case 0x16e4ccu: goto label_16e4cc;
        case 0x16e4d0u: goto label_16e4d0;
        case 0x16e4d4u: goto label_16e4d4;
        case 0x16e4d8u: goto label_16e4d8;
        case 0x16e4dcu: goto label_16e4dc;
        case 0x16e4e0u: goto label_16e4e0;
        case 0x16e4e4u: goto label_16e4e4;
        case 0x16e4e8u: goto label_16e4e8;
        case 0x16e4ecu: goto label_16e4ec;
        case 0x16e4f0u: goto label_16e4f0;
        case 0x16e4f4u: goto label_16e4f4;
        case 0x16e4f8u: goto label_16e4f8;
        case 0x16e4fcu: goto label_16e4fc;
        case 0x16e500u: goto label_16e500;
        case 0x16e504u: goto label_16e504;
        case 0x16e508u: goto label_16e508;
        case 0x16e50cu: goto label_16e50c;
        case 0x16e510u: goto label_16e510;
        case 0x16e514u: goto label_16e514;
        case 0x16e518u: goto label_16e518;
        case 0x16e51cu: goto label_16e51c;
        case 0x16e520u: goto label_16e520;
        case 0x16e524u: goto label_16e524;
        case 0x16e528u: goto label_16e528;
        case 0x16e52cu: goto label_16e52c;
        case 0x16e530u: goto label_16e530;
        case 0x16e534u: goto label_16e534;
        case 0x16e538u: goto label_16e538;
        case 0x16e53cu: goto label_16e53c;
        case 0x16e540u: goto label_16e540;
        case 0x16e544u: goto label_16e544;
        case 0x16e548u: goto label_16e548;
        case 0x16e54cu: goto label_16e54c;
        case 0x16e550u: goto label_16e550;
        case 0x16e554u: goto label_16e554;
        case 0x16e558u: goto label_16e558;
        case 0x16e55cu: goto label_16e55c;
        case 0x16e560u: goto label_16e560;
        case 0x16e564u: goto label_16e564;
        case 0x16e568u: goto label_16e568;
        case 0x16e56cu: goto label_16e56c;
        case 0x16e570u: goto label_16e570;
        case 0x16e574u: goto label_16e574;
        case 0x16e578u: goto label_16e578;
        case 0x16e57cu: goto label_16e57c;
        case 0x16e580u: goto label_16e580;
        case 0x16e584u: goto label_16e584;
        case 0x16e588u: goto label_16e588;
        case 0x16e58cu: goto label_16e58c;
        case 0x16e590u: goto label_16e590;
        case 0x16e594u: goto label_16e594;
        case 0x16e598u: goto label_16e598;
        case 0x16e59cu: goto label_16e59c;
        case 0x16e5a0u: goto label_16e5a0;
        case 0x16e5a4u: goto label_16e5a4;
        case 0x16e5a8u: goto label_16e5a8;
        case 0x16e5acu: goto label_16e5ac;
        case 0x16e5b0u: goto label_16e5b0;
        case 0x16e5b4u: goto label_16e5b4;
        case 0x16e5b8u: goto label_16e5b8;
        case 0x16e5bcu: goto label_16e5bc;
        case 0x16e5c0u: goto label_16e5c0;
        case 0x16e5c4u: goto label_16e5c4;
        case 0x16e5c8u: goto label_16e5c8;
        case 0x16e5ccu: goto label_16e5cc;
        case 0x16e5d0u: goto label_16e5d0;
        case 0x16e5d4u: goto label_16e5d4;
        case 0x16e5d8u: goto label_16e5d8;
        case 0x16e5dcu: goto label_16e5dc;
        case 0x16e5e0u: goto label_16e5e0;
        case 0x16e5e4u: goto label_16e5e4;
        case 0x16e5e8u: goto label_16e5e8;
        case 0x16e5ecu: goto label_16e5ec;
        case 0x16e5f0u: goto label_16e5f0;
        case 0x16e5f4u: goto label_16e5f4;
        case 0x16e5f8u: goto label_16e5f8;
        case 0x16e5fcu: goto label_16e5fc;
        case 0x16e600u: goto label_16e600;
        case 0x16e604u: goto label_16e604;
        case 0x16e608u: goto label_16e608;
        case 0x16e60cu: goto label_16e60c;
        case 0x16e610u: goto label_16e610;
        case 0x16e614u: goto label_16e614;
        case 0x16e618u: goto label_16e618;
        case 0x16e61cu: goto label_16e61c;
        case 0x16e620u: goto label_16e620;
        case 0x16e624u: goto label_16e624;
        case 0x16e628u: goto label_16e628;
        case 0x16e62cu: goto label_16e62c;
        case 0x16e630u: goto label_16e630;
        case 0x16e634u: goto label_16e634;
        case 0x16e638u: goto label_16e638;
        case 0x16e63cu: goto label_16e63c;
        case 0x16e640u: goto label_16e640;
        case 0x16e644u: goto label_16e644;
        case 0x16e648u: goto label_16e648;
        case 0x16e64cu: goto label_16e64c;
        case 0x16e650u: goto label_16e650;
        case 0x16e654u: goto label_16e654;
        case 0x16e658u: goto label_16e658;
        case 0x16e65cu: goto label_16e65c;
        case 0x16e660u: goto label_16e660;
        case 0x16e664u: goto label_16e664;
        case 0x16e668u: goto label_16e668;
        case 0x16e66cu: goto label_16e66c;
        case 0x16e670u: goto label_16e670;
        case 0x16e674u: goto label_16e674;
        case 0x16e678u: goto label_16e678;
        case 0x16e67cu: goto label_16e67c;
        case 0x16e680u: goto label_16e680;
        case 0x16e684u: goto label_16e684;
        case 0x16e688u: goto label_16e688;
        case 0x16e68cu: goto label_16e68c;
        case 0x16e690u: goto label_16e690;
        case 0x16e694u: goto label_16e694;
        case 0x16e698u: goto label_16e698;
        case 0x16e69cu: goto label_16e69c;
        case 0x16e6a0u: goto label_16e6a0;
        case 0x16e6a4u: goto label_16e6a4;
        case 0x16e6a8u: goto label_16e6a8;
        case 0x16e6acu: goto label_16e6ac;
        case 0x16e6b0u: goto label_16e6b0;
        case 0x16e6b4u: goto label_16e6b4;
        case 0x16e6b8u: goto label_16e6b8;
        case 0x16e6bcu: goto label_16e6bc;
        case 0x16e6c0u: goto label_16e6c0;
        case 0x16e6c4u: goto label_16e6c4;
        case 0x16e6c8u: goto label_16e6c8;
        case 0x16e6ccu: goto label_16e6cc;
        case 0x16e6d0u: goto label_16e6d0;
        case 0x16e6d4u: goto label_16e6d4;
        case 0x16e6d8u: goto label_16e6d8;
        case 0x16e6dcu: goto label_16e6dc;
        case 0x16e6e0u: goto label_16e6e0;
        case 0x16e6e4u: goto label_16e6e4;
        case 0x16e6e8u: goto label_16e6e8;
        case 0x16e6ecu: goto label_16e6ec;
        case 0x16e6f0u: goto label_16e6f0;
        case 0x16e6f4u: goto label_16e6f4;
        case 0x16e6f8u: goto label_16e6f8;
        case 0x16e6fcu: goto label_16e6fc;
        case 0x16e700u: goto label_16e700;
        case 0x16e704u: goto label_16e704;
        case 0x16e708u: goto label_16e708;
        case 0x16e70cu: goto label_16e70c;
        case 0x16e710u: goto label_16e710;
        case 0x16e714u: goto label_16e714;
        case 0x16e718u: goto label_16e718;
        case 0x16e71cu: goto label_16e71c;
        case 0x16e720u: goto label_16e720;
        case 0x16e724u: goto label_16e724;
        case 0x16e728u: goto label_16e728;
        case 0x16e72cu: goto label_16e72c;
        case 0x16e730u: goto label_16e730;
        case 0x16e734u: goto label_16e734;
        case 0x16e738u: goto label_16e738;
        case 0x16e73cu: goto label_16e73c;
        case 0x16e740u: goto label_16e740;
        case 0x16e744u: goto label_16e744;
        case 0x16e748u: goto label_16e748;
        case 0x16e74cu: goto label_16e74c;
        case 0x16e750u: goto label_16e750;
        case 0x16e754u: goto label_16e754;
        case 0x16e758u: goto label_16e758;
        case 0x16e75cu: goto label_16e75c;
        case 0x16e760u: goto label_16e760;
        case 0x16e764u: goto label_16e764;
        case 0x16e768u: goto label_16e768;
        case 0x16e76cu: goto label_16e76c;
        case 0x16e770u: goto label_16e770;
        case 0x16e774u: goto label_16e774;
        case 0x16e778u: goto label_16e778;
        case 0x16e77cu: goto label_16e77c;
        case 0x16e780u: goto label_16e780;
        case 0x16e784u: goto label_16e784;
        case 0x16e788u: goto label_16e788;
        case 0x16e78cu: goto label_16e78c;
        case 0x16e790u: goto label_16e790;
        case 0x16e794u: goto label_16e794;
        case 0x16e798u: goto label_16e798;
        case 0x16e79cu: goto label_16e79c;
        case 0x16e7a0u: goto label_16e7a0;
        case 0x16e7a4u: goto label_16e7a4;
        case 0x16e7a8u: goto label_16e7a8;
        case 0x16e7acu: goto label_16e7ac;
        case 0x16e7b0u: goto label_16e7b0;
        case 0x16e7b4u: goto label_16e7b4;
        case 0x16e7b8u: goto label_16e7b8;
        case 0x16e7bcu: goto label_16e7bc;
        case 0x16e7c0u: goto label_16e7c0;
        case 0x16e7c4u: goto label_16e7c4;
        case 0x16e7c8u: goto label_16e7c8;
        case 0x16e7ccu: goto label_16e7cc;
        case 0x16e7d0u: goto label_16e7d0;
        case 0x16e7d4u: goto label_16e7d4;
        case 0x16e7d8u: goto label_16e7d8;
        case 0x16e7dcu: goto label_16e7dc;
        case 0x16e7e0u: goto label_16e7e0;
        case 0x16e7e4u: goto label_16e7e4;
        case 0x16e7e8u: goto label_16e7e8;
        case 0x16e7ecu: goto label_16e7ec;
        case 0x16e7f0u: goto label_16e7f0;
        case 0x16e7f4u: goto label_16e7f4;
        case 0x16e7f8u: goto label_16e7f8;
        case 0x16e7fcu: goto label_16e7fc;
        case 0x16e800u: goto label_16e800;
        case 0x16e804u: goto label_16e804;
        case 0x16e808u: goto label_16e808;
        case 0x16e80cu: goto label_16e80c;
        case 0x16e810u: goto label_16e810;
        case 0x16e814u: goto label_16e814;
        case 0x16e818u: goto label_16e818;
        case 0x16e81cu: goto label_16e81c;
        case 0x16e820u: goto label_16e820;
        case 0x16e824u: goto label_16e824;
        case 0x16e828u: goto label_16e828;
        case 0x16e82cu: goto label_16e82c;
        case 0x16e830u: goto label_16e830;
        case 0x16e834u: goto label_16e834;
        case 0x16e838u: goto label_16e838;
        case 0x16e83cu: goto label_16e83c;
        case 0x16e840u: goto label_16e840;
        case 0x16e844u: goto label_16e844;
        case 0x16e848u: goto label_16e848;
        case 0x16e84cu: goto label_16e84c;
        case 0x16e850u: goto label_16e850;
        case 0x16e854u: goto label_16e854;
        case 0x16e858u: goto label_16e858;
        case 0x16e85cu: goto label_16e85c;
        case 0x16e860u: goto label_16e860;
        case 0x16e864u: goto label_16e864;
        case 0x16e868u: goto label_16e868;
        case 0x16e86cu: goto label_16e86c;
        case 0x16e870u: goto label_16e870;
        case 0x16e874u: goto label_16e874;
        case 0x16e878u: goto label_16e878;
        case 0x16e87cu: goto label_16e87c;
        case 0x16e880u: goto label_16e880;
        case 0x16e884u: goto label_16e884;
        case 0x16e888u: goto label_16e888;
        case 0x16e88cu: goto label_16e88c;
        case 0x16e890u: goto label_16e890;
        case 0x16e894u: goto label_16e894;
        case 0x16e898u: goto label_16e898;
        case 0x16e89cu: goto label_16e89c;
        case 0x16e8a0u: goto label_16e8a0;
        case 0x16e8a4u: goto label_16e8a4;
        case 0x16e8a8u: goto label_16e8a8;
        case 0x16e8acu: goto label_16e8ac;
        case 0x16e8b0u: goto label_16e8b0;
        case 0x16e8b4u: goto label_16e8b4;
        case 0x16e8b8u: goto label_16e8b8;
        case 0x16e8bcu: goto label_16e8bc;
        case 0x16e8c0u: goto label_16e8c0;
        case 0x16e8c4u: goto label_16e8c4;
        case 0x16e8c8u: goto label_16e8c8;
        case 0x16e8ccu: goto label_16e8cc;
        case 0x16e8d0u: goto label_16e8d0;
        case 0x16e8d4u: goto label_16e8d4;
        case 0x16e8d8u: goto label_16e8d8;
        case 0x16e8dcu: goto label_16e8dc;
        case 0x16e8e0u: goto label_16e8e0;
        case 0x16e8e4u: goto label_16e8e4;
        case 0x16e8e8u: goto label_16e8e8;
        case 0x16e8ecu: goto label_16e8ec;
        case 0x16e8f0u: goto label_16e8f0;
        case 0x16e8f4u: goto label_16e8f4;
        case 0x16e8f8u: goto label_16e8f8;
        case 0x16e8fcu: goto label_16e8fc;
        case 0x16e900u: goto label_16e900;
        case 0x16e904u: goto label_16e904;
        case 0x16e908u: goto label_16e908;
        case 0x16e90cu: goto label_16e90c;
        case 0x16e910u: goto label_16e910;
        case 0x16e914u: goto label_16e914;
        case 0x16e918u: goto label_16e918;
        case 0x16e91cu: goto label_16e91c;
        case 0x16e920u: goto label_16e920;
        case 0x16e924u: goto label_16e924;
        case 0x16e928u: goto label_16e928;
        case 0x16e92cu: goto label_16e92c;
        case 0x16e930u: goto label_16e930;
        case 0x16e934u: goto label_16e934;
        case 0x16e938u: goto label_16e938;
        case 0x16e93cu: goto label_16e93c;
        case 0x16e940u: goto label_16e940;
        case 0x16e944u: goto label_16e944;
        case 0x16e948u: goto label_16e948;
        case 0x16e94cu: goto label_16e94c;
        case 0x16e950u: goto label_16e950;
        case 0x16e954u: goto label_16e954;
        case 0x16e958u: goto label_16e958;
        case 0x16e95cu: goto label_16e95c;
        case 0x16e960u: goto label_16e960;
        case 0x16e964u: goto label_16e964;
        case 0x16e968u: goto label_16e968;
        case 0x16e96cu: goto label_16e96c;
        case 0x16e970u: goto label_16e970;
        case 0x16e974u: goto label_16e974;
        case 0x16e978u: goto label_16e978;
        case 0x16e97cu: goto label_16e97c;
        case 0x16e980u: goto label_16e980;
        case 0x16e984u: goto label_16e984;
        case 0x16e988u: goto label_16e988;
        case 0x16e98cu: goto label_16e98c;
        case 0x16e990u: goto label_16e990;
        case 0x16e994u: goto label_16e994;
        case 0x16e998u: goto label_16e998;
        case 0x16e99cu: goto label_16e99c;
        case 0x16e9a0u: goto label_16e9a0;
        case 0x16e9a4u: goto label_16e9a4;
        case 0x16e9a8u: goto label_16e9a8;
        case 0x16e9acu: goto label_16e9ac;
        case 0x16e9b0u: goto label_16e9b0;
        case 0x16e9b4u: goto label_16e9b4;
        case 0x16e9b8u: goto label_16e9b8;
        case 0x16e9bcu: goto label_16e9bc;
        case 0x16e9c0u: goto label_16e9c0;
        case 0x16e9c4u: goto label_16e9c4;
        case 0x16e9c8u: goto label_16e9c8;
        case 0x16e9ccu: goto label_16e9cc;
        case 0x16e9d0u: goto label_16e9d0;
        case 0x16e9d4u: goto label_16e9d4;
        case 0x16e9d8u: goto label_16e9d8;
        case 0x16e9dcu: goto label_16e9dc;
        case 0x16e9e0u: goto label_16e9e0;
        case 0x16e9e4u: goto label_16e9e4;
        case 0x16e9e8u: goto label_16e9e8;
        default: break;
    }

    ctx->pc = 0x16e2a0u;

label_16e2a0:
    // 0x16e2a0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x16e2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_16e2a4:
    // 0x16e2a4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x16e2a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_16e2a8:
    // 0x16e2a8: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x16e2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_16e2ac:
    // 0x16e2ac: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x16e2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_16e2b0:
    // 0x16e2b0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x16e2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_16e2b4:
    // 0x16e2b4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16e2b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16e2b8:
    // 0x16e2b8: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x16e2b8u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_16e2bc:
    // 0x16e2bc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x16e2bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_16e2c0:
    // 0x16e2c0: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x16e2c0u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_16e2c4:
    // 0x16e2c4: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x16e2c4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_16e2c8:
    // 0x16e2c8: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x16e2c8u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_16e2cc:
    // 0x16e2cc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x16e2ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_16e2d0:
    // 0x16e2d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16e2d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16e2d4:
    // 0x16e2d4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x16e2d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_16e2d8:
    // 0x16e2d8: 0x320f809  jalr        $t9
label_16e2dc:
    if (ctx->pc == 0x16E2DCu) {
        ctx->pc = 0x16E2DCu;
            // 0x16e2dc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x16E2E0u;
        goto label_16e2e0;
    }
    ctx->pc = 0x16E2D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E2E0u);
        ctx->pc = 0x16E2DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E2D8u;
            // 0x16e2dc: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16E2E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E2E0u; }
            if (ctx->pc != 0x16E2E0u) { return; }
        }
        }
    }
    ctx->pc = 0x16E2E0u;
label_16e2e0:
    // 0x16e2e0: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x16e2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_16e2e4:
    // 0x16e2e4: 0xc041c5c  jal         func_107170
label_16e2e8:
    if (ctx->pc == 0x16E2E8u) {
        ctx->pc = 0x16E2E8u;
            // 0x16e2e8: 0x26250080  addiu       $a1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->pc = 0x16E2ECu;
        goto label_16e2ec;
    }
    ctx->pc = 0x16E2E4u;
    SET_GPR_U32(ctx, 31, 0x16E2ECu);
    ctx->pc = 0x16E2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E2E4u;
            // 0x16e2e8: 0x26250080  addiu       $a1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E2ECu; }
        if (ctx->pc != 0x16E2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E2ECu; }
        if (ctx->pc != 0x16E2ECu) { return; }
    }
    ctx->pc = 0x16E2ECu;
label_16e2ec:
    // 0x16e2ec: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x16e2ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_16e2f0:
    // 0x16e2f0: 0xc04c678  jal         func_1319E0
label_16e2f4:
    if (ctx->pc == 0x16E2F4u) {
        ctx->pc = 0x16E2F4u;
            // 0x16e2f4: 0x8c24d434  lw          $a0, -0x2BCC($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956084)));
        ctx->pc = 0x16E2F8u;
        goto label_16e2f8;
    }
    ctx->pc = 0x16E2F0u;
    SET_GPR_U32(ctx, 31, 0x16E2F8u);
    ctx->pc = 0x16E2F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E2F0u;
            // 0x16e2f4: 0x8c24d434  lw          $a0, -0x2BCC($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956084)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319E0u;
    if (runtime->hasFunction(0x1319E0u)) {
        auto targetFn = runtime->lookupFunction(0x1319E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E2F8u; }
        if (ctx->pc != 0x16E2F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAngle__15mgCCameraFollowFv_0x1319e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E2F8u; }
        if (ctx->pc != 0x16E2F8u) { return; }
    }
    ctx->pc = 0x16E2F8u;
label_16e2f8:
    // 0x16e2f8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x16e2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_16e2fc:
    // 0x16e2fc: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x16e2fcu;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_16e300:
    // 0x16e300: 0xc052cc0  jal         func_14B300
label_16e304:
    if (ctx->pc == 0x16E304u) {
        ctx->pc = 0x16E304u;
            // 0x16e304: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x16E308u;
        goto label_16e308;
    }
    ctx->pc = 0x16E300u;
    SET_GPR_U32(ctx, 31, 0x16E308u);
    ctx->pc = 0x16E304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E300u;
            // 0x16e304: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B300u;
    if (runtime->hasFunction(0x14B300u)) {
        auto targetFn = runtime->lookupFunction(0x14B300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E308u; }
        if (ctx->pc != 0x16E308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLXf__8CGamePadFv_0x14b300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E308u; }
        if (ctx->pc != 0x16E308u) { return; }
    }
    ctx->pc = 0x16E308u;
label_16e308:
    // 0x16e308: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x16e308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_16e30c:
    // 0x16e30c: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x16e30cu;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_16e310:
    // 0x16e310: 0xc052cd0  jal         func_14B340
label_16e314:
    if (ctx->pc == 0x16E314u) {
        ctx->pc = 0x16E314u;
            // 0x16e314: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x16E318u;
        goto label_16e318;
    }
    ctx->pc = 0x16E310u;
    SET_GPR_U32(ctx, 31, 0x16E318u);
    ctx->pc = 0x16E314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E310u;
            // 0x16e314: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B340u;
    if (runtime->hasFunction(0x14B340u)) {
        auto targetFn = runtime->lookupFunction(0x14B340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E318u; }
        if (ctx->pc != 0x16E318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLYf__8CGamePadFv_0x14b340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E318u; }
        if (ctx->pc != 0x16E318u) { return; }
    }
    ctx->pc = 0x16E318u;
label_16e318:
    // 0x16e318: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x16e318u;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_16e31c:
    // 0x16e31c: 0xc047964  jal         func_11E590
label_16e320:
    if (ctx->pc == 0x16E320u) {
        ctx->pc = 0x16E320u;
            // 0x16e320: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x16E324u;
        goto label_16e324;
    }
    ctx->pc = 0x16E31Cu;
    SET_GPR_U32(ctx, 31, 0x16E324u);
    ctx->pc = 0x16E320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E31Cu;
            // 0x16e320: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E324u; }
        if (ctx->pc != 0x16E324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E324u; }
        if (ctx->pc != 0x16E324u) { return; }
    }
    ctx->pc = 0x16E324u;
label_16e324:
    // 0x16e324: 0x4600b502  mul.s       $f20, $f22, $f0
    ctx->pc = 0x16e324u;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_16e328:
    // 0x16e328: 0xc047a42  jal         func_11E908
label_16e32c:
    if (ctx->pc == 0x16E32Cu) {
        ctx->pc = 0x16E32Cu;
            // 0x16e32c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x16E330u;
        goto label_16e330;
    }
    ctx->pc = 0x16E328u;
    SET_GPR_U32(ctx, 31, 0x16E330u);
    ctx->pc = 0x16E32Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E328u;
            // 0x16e32c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E330u; }
        if (ctx->pc != 0x16E330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E330u; }
        if (ctx->pc != 0x16E330u) { return; }
    }
    ctx->pc = 0x16E330u;
label_16e330:
    // 0x16e330: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x16e330u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_16e334:
    // 0x16e334: 0x4600a600  add.s       $f24, $f20, $f0
    ctx->pc = 0x16e334u;
    ctx->f[24] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_16e338:
    // 0x16e338: 0xc047a42  jal         func_11E908
label_16e33c:
    if (ctx->pc == 0x16E33Cu) {
        ctx->pc = 0x16E33Cu;
            // 0x16e33c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x16E340u;
        goto label_16e340;
    }
    ctx->pc = 0x16E338u;
    SET_GPR_U32(ctx, 31, 0x16E340u);
    ctx->pc = 0x16E33Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E338u;
            // 0x16e33c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E340u; }
        if (ctx->pc != 0x16E340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E340u; }
        if (ctx->pc != 0x16E340u) { return; }
    }
    ctx->pc = 0x16E340u;
label_16e340:
    // 0x16e340: 0x4600b047  neg.s       $f1, $f22
    ctx->pc = 0x16e340u;
    ctx->f[1] = FPU_NEG_S(ctx->f[22]);
label_16e344:
    // 0x16e344: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x16e344u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_16e348:
    // 0x16e348: 0xc047964  jal         func_11E590
label_16e34c:
    if (ctx->pc == 0x16E34Cu) {
        ctx->pc = 0x16E34Cu;
            // 0x16e34c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x16E350u;
        goto label_16e350;
    }
    ctx->pc = 0x16E348u;
    SET_GPR_U32(ctx, 31, 0x16E350u);
    ctx->pc = 0x16E34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E348u;
            // 0x16e34c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E350u; }
        if (ctx->pc != 0x16E350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E350u; }
        if (ctx->pc != 0x16E350u) { return; }
    }
    ctx->pc = 0x16E350u;
label_16e350:
    // 0x16e350: 0x4600b842  mul.s       $f1, $f23, $f0
    ctx->pc = 0x16e350u;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_16e354:
    // 0x16e354: 0x3c044000  lui         $a0, 0x4000
    ctx->pc = 0x16e354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16384 << 16));
label_16e358:
    // 0x16e358: 0x8e2306a8  lw          $v1, 0x6A8($s1)
    ctx->pc = 0x16e358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1704)));
label_16e35c:
    // 0x16e35c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x16e35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16e360:
    // 0x16e360: 0xc7808760  lwc1        $f0, -0x78A0($gp)
    ctx->pc = 0x16e360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16e364:
    // 0x16e364: 0x4601a500  add.s       $f20, $f20, $f1
    ctx->pc = 0x16e364u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_16e368:
    // 0x16e368: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x16e368u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16e36c:
    // 0x16e36c: 0x0  nop
    ctx->pc = 0x16e36cu;
    // NOP
label_16e370:
    // 0x16e370: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x16e370u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_16e374:
    // 0x16e374: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x16e374u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_16e378:
    // 0x16e378: 0x4600c602  mul.s       $f24, $f24, $f0
    ctx->pc = 0x16e378u;
    ctx->f[24] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
label_16e37c:
    // 0x16e37c: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_16e380:
    if (ctx->pc == 0x16E380u) {
        ctx->pc = 0x16E380u;
            // 0x16e380: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x16E384u;
        goto label_16e384;
    }
    ctx->pc = 0x16E37Cu;
    {
        const bool branch_taken_0x16e37c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16E380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E37Cu;
            // 0x16e380: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e37c) {
            ctx->pc = 0x16E3C8u;
            goto label_16e3c8;
        }
    }
    ctx->pc = 0x16E384u;
label_16e384:
    // 0x16e384: 0x8e2405a0  lw          $a0, 0x5A0($s1)
    ctx->pc = 0x16e384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
label_16e388:
    // 0x16e388: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x16e388u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_16e38c:
    // 0x16e38c: 0x8e250588  lw          $a1, 0x588($s1)
    ctx->pc = 0x16e38cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1416)));
label_16e390:
    // 0x16e390: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x16e390u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16e394:
    // 0x16e394: 0xc0631a8  jal         func_18C6A0
label_16e398:
    if (ctx->pc == 0x16E398u) {
        ctx->pc = 0x16E398u;
            // 0x16e398: 0x2408000c  addiu       $t0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x16E39Cu;
        goto label_16e39c;
    }
    ctx->pc = 0x16E394u;
    SET_GPR_U32(ctx, 31, 0x16E39Cu);
    ctx->pc = 0x16E398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E394u;
            // 0x16e398: 0x2408000c  addiu       $t0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C6A0u;
    if (runtime->hasFunction(0x18C6A0u)) {
        auto targetFn = runtime->lookupFunction(0x18C6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E39Cu; }
        if (ctx->pc != 0x16E39Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SeLoopPlayStop__11CLoopSeMngrFUiiii_0x18c6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E39Cu; }
        if (ctx->pc != 0x16E39Cu) { return; }
    }
    ctx->pc = 0x16E39Cu;
label_16e39c:
    // 0x16e39c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16e39cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16e3a0:
    // 0x16e3a0: 0x0  nop
    ctx->pc = 0x16e3a0u;
    // NOP
label_16e3a4:
    // 0x16e3a4: 0x46180032  c.eq.s      $f0, $f24
    ctx->pc = 0x16e3a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16e3a8:
    // 0x16e3a8: 0x0  nop
    ctx->pc = 0x16e3a8u;
    // NOP
label_16e3ac:
    // 0x16e3ac: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_16e3b0:
    if (ctx->pc == 0x16E3B0u) {
        ctx->pc = 0x16E3B0u;
            // 0x16e3b0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x16E3B4u;
        goto label_16e3b4;
    }
    ctx->pc = 0x16E3ACu;
    {
        const bool branch_taken_0x16e3ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16E3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E3ACu;
            // 0x16e3b0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e3ac) {
            ctx->pc = 0x16E3C4u;
            goto label_16e3c4;
        }
    }
    ctx->pc = 0x16E3B4u;
label_16e3b4:
    // 0x16e3b4: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x16e3b4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16e3b8:
    // 0x16e3b8: 0x0  nop
    ctx->pc = 0x16e3b8u;
    // NOP
label_16e3bc:
    // 0x16e3bc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_16e3c0:
    if (ctx->pc == 0x16E3C0u) {
        ctx->pc = 0x16E3C4u;
        goto label_16e3c4;
    }
    ctx->pc = 0x16E3BCu;
    {
        const bool branch_taken_0x16e3bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e3bc) {
            ctx->pc = 0x16E3C8u;
            goto label_16e3c8;
        }
    }
    ctx->pc = 0x16E3C4u;
label_16e3c4:
    // 0x16e3c4: 0xae22059c  sw          $v0, 0x59C($s1)
    ctx->pc = 0x16e3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1436), GPR_U32(ctx, 2));
label_16e3c8:
    // 0x16e3c8: 0x8e2306a8  lw          $v1, 0x6A8($s1)
    ctx->pc = 0x16e3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1704)));
label_16e3cc:
    // 0x16e3cc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x16e3ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_16e3d0:
    // 0x16e3d0: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_16e3d4:
    if (ctx->pc == 0x16E3D4u) {
        ctx->pc = 0x16E3D4u;
            // 0x16e3d4: 0x3c023fa6  lui         $v0, 0x3FA6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
        ctx->pc = 0x16E3D8u;
        goto label_16e3d8;
    }
    ctx->pc = 0x16E3D0u;
    {
        const bool branch_taken_0x16e3d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16E3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E3D0u;
            // 0x16e3d4: 0x3c023fa6  lui         $v0, 0x3FA6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e3d0) {
            ctx->pc = 0x16E3ECu;
            goto label_16e3ec;
        }
    }
    ctx->pc = 0x16E3D8u;
label_16e3d8:
    // 0x16e3d8: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x16e3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_16e3dc:
    // 0x16e3dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16e3dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16e3e0:
    // 0x16e3e0: 0x0  nop
    ctx->pc = 0x16e3e0u;
    // NOP
label_16e3e4:
    // 0x16e3e4: 0x4600c602  mul.s       $f24, $f24, $f0
    ctx->pc = 0x16e3e4u;
    ctx->f[24] = FPU_MUL_S(ctx->f[24], ctx->f[0]);
label_16e3e8:
    // 0x16e3e8: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x16e3e8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_16e3ec:
    // 0x16e3ec: 0xe7b80070  swc1        $f24, 0x70($sp)
    ctx->pc = 0x16e3ecu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_16e3f0:
    // 0x16e3f0: 0xe7b40078  swc1        $f20, 0x78($sp)
    ctx->pc = 0x16e3f0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_16e3f4:
    // 0x16e3f4: 0xa220076d  sb          $zero, 0x76D($s1)
    ctx->pc = 0x16e3f4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1901), (uint8_t)GPR_U32(ctx, 0));
label_16e3f8:
    // 0x16e3f8: 0x86220772  lh          $v0, 0x772($s1)
    ctx->pc = 0x16e3f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1906)));
label_16e3fc:
    // 0x16e3fc: 0x10400098  beqz        $v0, . + 4 + (0x98 << 2)
label_16e400:
    if (ctx->pc == 0x16E400u) {
        ctx->pc = 0x16E400u;
            // 0x16e400: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->pc = 0x16E404u;
        goto label_16e404;
    }
    ctx->pc = 0x16E3FCu;
    {
        const bool branch_taken_0x16e3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E3FCu;
            // 0x16e400: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e3fc) {
            ctx->pc = 0x16E660u;
            goto label_16e660;
        }
    }
    ctx->pc = 0x16E404u;
label_16e404:
    // 0x16e404: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16e404u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16e408:
    // 0x16e408: 0x0  nop
    ctx->pc = 0x16e408u;
    // NOP
label_16e40c:
    // 0x16e40c: 0x46180032  c.eq.s      $f0, $f24
    ctx->pc = 0x16e40cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16e410:
    // 0x16e410: 0x0  nop
    ctx->pc = 0x16e410u;
    // NOP
label_16e414:
    // 0x16e414: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_16e418:
    if (ctx->pc == 0x16E418u) {
        ctx->pc = 0x16E418u;
            // 0x16e418: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->pc = 0x16E41Cu;
        goto label_16e41c;
    }
    ctx->pc = 0x16E414u;
    {
        const bool branch_taken_0x16e414 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16E418u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E414u;
            // 0x16e418: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e414) {
            ctx->pc = 0x16E42Cu;
            goto label_16e42c;
        }
    }
    ctx->pc = 0x16E41Cu;
label_16e41c:
    // 0x16e41c: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x16e41cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16e420:
    // 0x16e420: 0x0  nop
    ctx->pc = 0x16e420u;
    // NOP
label_16e424:
    // 0x16e424: 0x4501003b  bc1t        . + 4 + (0x3B << 2)
label_16e428:
    if (ctx->pc == 0x16E428u) {
        ctx->pc = 0x16E42Cu;
        goto label_16e42c;
    }
    ctx->pc = 0x16E424u;
    {
        const bool branch_taken_0x16e424 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e424) {
            ctx->pc = 0x16E514u;
            goto label_16e514;
        }
    }
    ctx->pc = 0x16E42Cu;
label_16e42c:
    // 0x16e42c: 0xc047c76  jal         func_11F1D8
label_16e430:
    if (ctx->pc == 0x16E430u) {
        ctx->pc = 0x16E430u;
            // 0x16e430: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x16E434u;
        goto label_16e434;
    }
    ctx->pc = 0x16E42Cu;
    SET_GPR_U32(ctx, 31, 0x16E434u);
    ctx->pc = 0x16E430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E42Cu;
            // 0x16e430: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E434u; }
        if (ctx->pc != 0x16E434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E434u; }
        if (ctx->pc != 0x16E434u) { return; }
    }
    ctx->pc = 0x16E434u;
label_16e434:
    // 0x16e434: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x16e434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_16e438:
    // 0x16e438: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x16e438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_16e43c:
    // 0x16e43c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x16e43cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_16e440:
    // 0x16e440: 0xc072408  jal         func_1C9020
label_16e444:
    if (ctx->pc == 0x16E444u) {
        ctx->pc = 0x16E444u;
            // 0x16e444: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x16E448u;
        goto label_16e448;
    }
    ctx->pc = 0x16E440u;
    SET_GPR_U32(ctx, 31, 0x16E448u);
    ctx->pc = 0x16E444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E440u;
            // 0x16e444: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9020u;
    if (runtime->hasFunction(0x1C9020u)) {
        auto targetFn = runtime->lookupFunction(0x1C9020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E448u; }
        if (ctx->pc != 0x16E448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        unitRotation__FP8mgCFrameff_0x1c9020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E448u; }
        if (ctx->pc != 0x16E448u) { return; }
    }
    ctx->pc = 0x16E448u;
label_16e448:
    // 0x16e448: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x16e448u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16e44c:
    // 0x16e44c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16e44cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16e450:
    // 0x16e450: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x16e450u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_16e454:
    // 0x16e454: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16e454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16e458:
    // 0x16e458: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x16e458u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_16e45c:
    // 0x16e45c: 0x320f809  jalr        $t9
label_16e460:
    if (ctx->pc == 0x16E460u) {
        ctx->pc = 0x16E460u;
            // 0x16e460: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x16E464u;
        goto label_16e464;
    }
    ctx->pc = 0x16E45Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E464u);
        ctx->pc = 0x16E460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E45Cu;
            // 0x16e460: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16E464u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E464u; }
            if (ctx->pc != 0x16E464u) { return; }
        }
        }
    }
    ctx->pc = 0x16E464u;
label_16e464:
    // 0x16e464: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x16e464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_16e468:
    // 0x16e468: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x16e468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
label_16e46c:
    // 0x16e46c: 0xe7b80080  swc1        $f24, 0x80($sp)
    ctx->pc = 0x16e46cu;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_16e470:
    // 0x16e470: 0xc04bff4  jal         func_12FFD0
label_16e474:
    if (ctx->pc == 0x16E474u) {
        ctx->pc = 0x16E474u;
            // 0x16e474: 0xe7b40088  swc1        $f20, 0x88($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->pc = 0x16E478u;
        goto label_16e478;
    }
    ctx->pc = 0x16E470u;
    SET_GPR_U32(ctx, 31, 0x16E478u);
    ctx->pc = 0x16E474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E470u;
            // 0x16e474: 0xe7b40088  swc1        $f20, 0x88($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E478u; }
        if (ctx->pc != 0x16E478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E478u; }
        if (ctx->pc != 0x16E478u) { return; }
    }
    ctx->pc = 0x16E478u;
label_16e478:
    // 0x16e478: 0xc62106ac  lwc1        $f1, 0x6AC($s1)
    ctx->pc = 0x16e478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16e47c:
    // 0x16e47c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16e47cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16e480:
    // 0x16e480: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16e480u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_16e484:
    // 0x16e484: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x16e484u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_16e488:
    // 0x16e488: 0x0  nop
    ctx->pc = 0x16e488u;
    // NOP
label_16e48c:
    // 0x16e48c: 0x0  nop
    ctx->pc = 0x16e48cu;
    // NOP
label_16e490:
    // 0x16e490: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x16e490u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16e494:
    // 0x16e494: 0x0  nop
    ctx->pc = 0x16e494u;
    // NOP
label_16e498:
    // 0x16e498: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_16e49c:
    if (ctx->pc == 0x16E49Cu) {
        ctx->pc = 0x16E49Cu;
            // 0x16e49c: 0x3c023f4c  lui         $v0, 0x3F4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
        ctx->pc = 0x16E4A0u;
        goto label_16e4a0;
    }
    ctx->pc = 0x16E498u;
    {
        const bool branch_taken_0x16e498 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16E49Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E498u;
            // 0x16e49c: 0x3c023f4c  lui         $v0, 0x3F4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e498) {
            ctx->pc = 0x16E4A8u;
            goto label_16e4a8;
        }
    }
    ctx->pc = 0x16E4A0u;
label_16e4a0:
    // 0x16e4a0: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x16e4a0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_16e4a4:
    // 0x16e4a4: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x16e4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_16e4a8:
    // 0x16e4a8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x16e4a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_16e4ac:
    // 0x16e4ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16e4acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16e4b0:
    // 0x16e4b0: 0x0  nop
    ctx->pc = 0x16e4b0u;
    // NOP
label_16e4b4:
    // 0x16e4b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16e4b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16e4b8:
    // 0x16e4b8: 0x0  nop
    ctx->pc = 0x16e4b8u;
    // NOP
label_16e4bc:
    // 0x16e4bc: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_16e4c0:
    if (ctx->pc == 0x16E4C0u) {
        ctx->pc = 0x16E4C4u;
        goto label_16e4c4;
    }
    ctx->pc = 0x16E4BCu;
    {
        const bool branch_taken_0x16e4bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e4bc) {
            ctx->pc = 0x16E4ECu;
            goto label_16e4ec;
        }
    }
    ctx->pc = 0x16E4C4u;
label_16e4c4:
    // 0x16e4c4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x16e4c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16e4c8:
    // 0x16e4c8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16e4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16e4cc:
    // 0x16e4cc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x16e4ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16e4d0:
    // 0x16e4d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16e4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16e4d4:
    // 0x16e4d4: 0x24a53680  addiu       $a1, $a1, 0x3680
    ctx->pc = 0x16e4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13952));
label_16e4d8:
    // 0x16e4d8: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x16e4d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_16e4dc:
    // 0x16e4dc: 0x320f809  jalr        $t9
label_16e4e0:
    if (ctx->pc == 0x16E4E0u) {
        ctx->pc = 0x16E4E0u;
            // 0x16e4e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16E4E4u;
        goto label_16e4e4;
    }
    ctx->pc = 0x16E4DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E4E4u);
        ctx->pc = 0x16E4E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E4DCu;
            // 0x16e4e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16E4E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E4E4u; }
            if (ctx->pc != 0x16E4E4u) { return; }
        }
        }
    }
    ctx->pc = 0x16E4E4u;
label_16e4e4:
    // 0x16e4e4: 0x10000014  b           . + 4 + (0x14 << 2)
label_16e4e8:
    if (ctx->pc == 0x16E4E8u) {
        ctx->pc = 0x16E4E8u;
            // 0x16e4e8: 0x86250770  lh          $a1, 0x770($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1904)));
        ctx->pc = 0x16E4ECu;
        goto label_16e4ec;
    }
    ctx->pc = 0x16E4E4u;
    {
        const bool branch_taken_0x16e4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E4E4u;
            // 0x16e4e8: 0x86250770  lh          $a1, 0x770($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1904)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e4e4) {
            ctx->pc = 0x16E538u;
            goto label_16e538;
        }
    }
    ctx->pc = 0x16E4ECu;
label_16e4ec:
    // 0x16e4ec: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x16e4ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16e4f0:
    // 0x16e4f0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16e4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16e4f4:
    // 0x16e4f4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x16e4f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16e4f8:
    // 0x16e4f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16e4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16e4fc:
    // 0x16e4fc: 0x24a53690  addiu       $a1, $a1, 0x3690
    ctx->pc = 0x16e4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13968));
label_16e500:
    // 0x16e500: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x16e500u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_16e504:
    // 0x16e504: 0x320f809  jalr        $t9
label_16e508:
    if (ctx->pc == 0x16E508u) {
        ctx->pc = 0x16E508u;
            // 0x16e508: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16E50Cu;
        goto label_16e50c;
    }
    ctx->pc = 0x16E504u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E50Cu);
        ctx->pc = 0x16E508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E504u;
            // 0x16e508: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16E50Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E50Cu; }
            if (ctx->pc != 0x16E50Cu) { return; }
        }
        }
    }
    ctx->pc = 0x16E50Cu;
label_16e50c:
    // 0x16e50c: 0x10000009  b           . + 4 + (0x9 << 2)
label_16e510:
    if (ctx->pc == 0x16E510u) {
        ctx->pc = 0x16E514u;
        goto label_16e514;
    }
    ctx->pc = 0x16E50Cu;
    {
        const bool branch_taken_0x16e50c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e50c) {
            ctx->pc = 0x16E534u;
            goto label_16e534;
        }
    }
    ctx->pc = 0x16E514u;
label_16e514:
    // 0x16e514: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x16e514u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16e518:
    // 0x16e518: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16e518u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16e51c:
    // 0x16e51c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x16e51cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16e520:
    // 0x16e520: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16e520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16e524:
    // 0x16e524: 0x24a536a0  addiu       $a1, $a1, 0x36A0
    ctx->pc = 0x16e524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13984));
label_16e528:
    // 0x16e528: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x16e528u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_16e52c:
    // 0x16e52c: 0x320f809  jalr        $t9
label_16e530:
    if (ctx->pc == 0x16E530u) {
        ctx->pc = 0x16E530u;
            // 0x16e530: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16E534u;
        goto label_16e534;
    }
    ctx->pc = 0x16E52Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E534u);
        ctx->pc = 0x16E530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E52Cu;
            // 0x16e530: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16E534u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E534u; }
            if (ctx->pc != 0x16E534u) { return; }
        }
        }
    }
    ctx->pc = 0x16E534u;
label_16e534:
    // 0x16e534: 0x86250770  lh          $a1, 0x770($s1)
    ctx->pc = 0x16e534u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1904)));
label_16e538:
    // 0x16e538: 0xc0a0ed8  jal         func_283B60
label_16e53c:
    if (ctx->pc == 0x16E53Cu) {
        ctx->pc = 0x16E53Cu;
            // 0x16e53c: 0x8f849da4  lw          $a0, -0x625C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942116)));
        ctx->pc = 0x16E540u;
        goto label_16e540;
    }
    ctx->pc = 0x16E538u;
    SET_GPR_U32(ctx, 31, 0x16E540u);
    ctx->pc = 0x16E53Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E538u;
            // 0x16e53c: 0x8f849da4  lw          $a0, -0x625C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942116)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E540u; }
        if (ctx->pc != 0x16E540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E540u; }
        if (ctx->pc != 0x16E540u) { return; }
    }
    ctx->pc = 0x16E540u;
label_16e540:
    // 0x16e540: 0x104000a5  beqz        $v0, . + 4 + (0xA5 << 2)
label_16e544:
    if (ctx->pc == 0x16E544u) {
        ctx->pc = 0x16E548u;
        goto label_16e548;
    }
    ctx->pc = 0x16E540u;
    {
        const bool branch_taken_0x16e540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e540) {
            ctx->pc = 0x16E7D8u;
            goto label_16e7d8;
        }
    }
    ctx->pc = 0x16E548u;
label_16e548:
    // 0x16e548: 0x8444068a  lh          $a0, 0x68A($v0)
    ctx->pc = 0x16e548u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1674)));
label_16e54c:
    // 0x16e54c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16e54cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16e550:
    // 0x16e550: 0x148300a1  bne         $a0, $v1, . + 4 + (0xA1 << 2)
label_16e554:
    if (ctx->pc == 0x16E554u) {
        ctx->pc = 0x16E558u;
        goto label_16e558;
    }
    ctx->pc = 0x16E550u;
    {
        const bool branch_taken_0x16e550 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16e550) {
            ctx->pc = 0x16E7D8u;
            goto label_16e7d8;
        }
    }
    ctx->pc = 0x16E558u;
label_16e558:
    // 0x16e558: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x16e558u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16e55c:
    // 0x16e55c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16e55cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16e560:
    // 0x16e560: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x16e560u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_16e564:
    // 0x16e564: 0x320f809  jalr        $t9
label_16e568:
    if (ctx->pc == 0x16E568u) {
        ctx->pc = 0x16E568u;
            // 0x16e568: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x16E56Cu;
        goto label_16e56c;
    }
    ctx->pc = 0x16E564u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E56Cu);
        ctx->pc = 0x16E568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E564u;
            // 0x16e568: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16E56Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E56Cu; }
            if (ctx->pc != 0x16E56Cu) { return; }
        }
        }
    }
    ctx->pc = 0x16E56Cu;
label_16e56c:
    // 0x16e56c: 0xc7a30090  lwc1        $f3, 0x90($sp)
    ctx->pc = 0x16e56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_16e570:
    // 0x16e570: 0xc7a20060  lwc1        $f2, 0x60($sp)
    ctx->pc = 0x16e570u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16e574:
    // 0x16e574: 0xc7a10098  lwc1        $f1, 0x98($sp)
    ctx->pc = 0x16e574u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16e578:
    // 0x16e578: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x16e578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16e57c:
    // 0x16e57c: 0x46021b01  sub.s       $f12, $f3, $f2
    ctx->pc = 0x16e57cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_16e580:
    // 0x16e580: 0xc047c76  jal         func_11F1D8
label_16e584:
    if (ctx->pc == 0x16E584u) {
        ctx->pc = 0x16E584u;
            // 0x16e584: 0x46000b41  sub.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x16E588u;
        goto label_16e588;
    }
    ctx->pc = 0x16E580u;
    SET_GPR_U32(ctx, 31, 0x16E588u);
    ctx->pc = 0x16E584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E580u;
            // 0x16e584: 0x46000b41  sub.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E588u; }
        if (ctx->pc != 0x16E588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E588u; }
        if (ctx->pc != 0x16E588u) { return; }
    }
    ctx->pc = 0x16E588u;
label_16e588:
    // 0x16e588: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x16e588u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16e58c:
    // 0x16e58c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x16e58cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_16e590:
    // 0x16e590: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16e590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16e594:
    // 0x16e594: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x16e594u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_16e598:
    // 0x16e598: 0x320f809  jalr        $t9
label_16e59c:
    if (ctx->pc == 0x16E59Cu) {
        ctx->pc = 0x16E59Cu;
            // 0x16e59c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x16E5A0u;
        goto label_16e5a0;
    }
    ctx->pc = 0x16E598u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E5A0u);
        ctx->pc = 0x16E59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E598u;
            // 0x16e59c: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16E5A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E5A0u; }
            if (ctx->pc != 0x16E5A0u) { return; }
        }
        }
    }
    ctx->pc = 0x16E5A0u;
label_16e5a0:
    // 0x16e5a0: 0xc7a100a4  lwc1        $f1, 0xA4($sp)
    ctx->pc = 0x16e5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16e5a4:
    // 0x16e5a4: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x16e5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_16e5a8:
    // 0x16e5a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16e5a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16e5ac:
    // 0x16e5ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16e5acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16e5b0:
    // 0x16e5b0: 0x0  nop
    ctx->pc = 0x16e5b0u;
    // NOP
label_16e5b4:
    // 0x16e5b4: 0x4601a501  sub.s       $f20, $f20, $f1
    ctx->pc = 0x16e5b4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_16e5b8:
    // 0x16e5b8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x16e5b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16e5bc:
    // 0x16e5bc: 0x0  nop
    ctx->pc = 0x16e5bcu;
    // NOP
label_16e5c0:
    // 0x16e5c0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_16e5c4:
    if (ctx->pc == 0x16E5C4u) {
        ctx->pc = 0x16E5C4u;
            // 0x16e5c4: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->pc = 0x16E5C8u;
        goto label_16e5c8;
    }
    ctx->pc = 0x16E5C0u;
    {
        const bool branch_taken_0x16e5c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16E5C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E5C0u;
            // 0x16e5c4: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e5c0) {
            ctx->pc = 0x16E5E0u;
            goto label_16e5e0;
        }
    }
    ctx->pc = 0x16E5C8u;
label_16e5c8:
    // 0x16e5c8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x16e5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_16e5cc:
    // 0x16e5cc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16e5ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16e5d0:
    // 0x16e5d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16e5d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16e5d4:
    // 0x16e5d4: 0x0  nop
    ctx->pc = 0x16e5d4u;
    // NOP
label_16e5d8:
    // 0x16e5d8: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x16e5d8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_16e5dc:
    // 0x16e5dc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x16e5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_16e5e0:
    // 0x16e5e0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16e5e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16e5e4:
    // 0x16e5e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16e5e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16e5e8:
    // 0x16e5e8: 0x0  nop
    ctx->pc = 0x16e5e8u;
    // NOP
label_16e5ec:
    // 0x16e5ec: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x16e5ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16e5f0:
    // 0x16e5f0: 0x0  nop
    ctx->pc = 0x16e5f0u;
    // NOP
label_16e5f4:
    // 0x16e5f4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_16e5f8:
    if (ctx->pc == 0x16E5F8u) {
        ctx->pc = 0x16E5F8u;
            // 0x16e5f8: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->pc = 0x16E5FCu;
        goto label_16e5fc;
    }
    ctx->pc = 0x16E5F4u;
    {
        const bool branch_taken_0x16e5f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16E5F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E5F4u;
            // 0x16e5f8: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e5f4) {
            ctx->pc = 0x16E610u;
            goto label_16e610;
        }
    }
    ctx->pc = 0x16E5FCu;
label_16e5fc:
    // 0x16e5fc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x16e5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_16e600:
    // 0x16e600: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16e600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16e604:
    // 0x16e604: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16e604u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16e608:
    // 0x16e608: 0x0  nop
    ctx->pc = 0x16e608u;
    // NOP
label_16e60c:
    // 0x16e60c: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x16e60cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_16e610:
    // 0x16e610: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16e610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16e614:
    // 0x16e614: 0xc05af24  jal         func_16BC90
label_16e618:
    if (ctx->pc == 0x16E618u) {
        ctx->pc = 0x16E618u;
            // 0x16e618: 0x24a53678  addiu       $a1, $a1, 0x3678 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13944));
        ctx->pc = 0x16E61Cu;
        goto label_16e61c;
    }
    ctx->pc = 0x16E614u;
    SET_GPR_U32(ctx, 31, 0x16E61Cu);
    ctx->pc = 0x16E618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E614u;
            // 0x16e618: 0x24a53678  addiu       $a1, $a1, 0x3678 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BC90u;
    if (runtime->hasFunction(0x16BC90u)) {
        auto targetFn = runtime->lookupFunction(0x16BC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E61Cu; }
        if (ctx->pc != 0x16E61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchChara__12CActionCharaFPc_0x16bc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E61Cu; }
        if (ctx->pc != 0x16E61Cu) { return; }
    }
    ctx->pc = 0x16E61Cu;
label_16e61c:
    // 0x16e61c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16e61cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16e620:
    // 0x16e620: 0x1200006d  beqz        $s0, . + 4 + (0x6D << 2)
label_16e624:
    if (ctx->pc == 0x16E624u) {
        ctx->pc = 0x16E628u;
        goto label_16e628;
    }
    ctx->pc = 0x16E620u;
    {
        const bool branch_taken_0x16e620 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e620) {
            ctx->pc = 0x16E7D8u;
            goto label_16e7d8;
        }
    }
    ctx->pc = 0x16E628u;
label_16e628:
    // 0x16e628: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x16e628u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_16e62c:
    // 0x16e62c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x16e62cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_16e630:
    // 0x16e630: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x16e630u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_16e634:
    // 0x16e634: 0xc072408  jal         func_1C9020
label_16e638:
    if (ctx->pc == 0x16E638u) {
        ctx->pc = 0x16E638u;
            // 0x16e638: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x16E63Cu;
        goto label_16e63c;
    }
    ctx->pc = 0x16E634u;
    SET_GPR_U32(ctx, 31, 0x16E63Cu);
    ctx->pc = 0x16E638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E634u;
            // 0x16e638: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9020u;
    if (runtime->hasFunction(0x1C9020u)) {
        auto targetFn = runtime->lookupFunction(0x1C9020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E63Cu; }
        if (ctx->pc != 0x16E63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        unitRotation__FP8mgCFrameff_0x1c9020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E63Cu; }
        if (ctx->pc != 0x16E63Cu) { return; }
    }
    ctx->pc = 0x16E63Cu;
label_16e63c:
    // 0x16e63c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x16e63cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16e640:
    // 0x16e640: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16e640u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16e644:
    // 0x16e644: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x16e644u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_16e648:
    // 0x16e648: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16e648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16e64c:
    // 0x16e64c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x16e64cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_16e650:
    // 0x16e650: 0x320f809  jalr        $t9
label_16e654:
    if (ctx->pc == 0x16E654u) {
        ctx->pc = 0x16E654u;
            // 0x16e654: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x16E658u;
        goto label_16e658;
    }
    ctx->pc = 0x16E650u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E658u);
        ctx->pc = 0x16E654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E650u;
            // 0x16e654: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16E658u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E658u; }
            if (ctx->pc != 0x16E658u) { return; }
        }
        }
    }
    ctx->pc = 0x16E658u;
label_16e658:
    // 0x16e658: 0x10000060  b           . + 4 + (0x60 << 2)
label_16e65c:
    if (ctx->pc == 0x16E65Cu) {
        ctx->pc = 0x16E65Cu;
            // 0x16e65c: 0x8e2306a8  lw          $v1, 0x6A8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1704)));
        ctx->pc = 0x16E660u;
        goto label_16e660;
    }
    ctx->pc = 0x16E658u;
    {
        const bool branch_taken_0x16e658 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E658u;
            // 0x16e65c: 0x8e2306a8  lw          $v1, 0x6A8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1704)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e658) {
            ctx->pc = 0x16E7DCu;
            goto label_16e7dc;
        }
    }
    ctx->pc = 0x16E660u;
label_16e660:
    // 0x16e660: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16e660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16e664:
    // 0x16e664: 0xc05af24  jal         func_16BC90
label_16e668:
    if (ctx->pc == 0x16E668u) {
        ctx->pc = 0x16E668u;
            // 0x16e668: 0x24a53678  addiu       $a1, $a1, 0x3678 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13944));
        ctx->pc = 0x16E66Cu;
        goto label_16e66c;
    }
    ctx->pc = 0x16E664u;
    SET_GPR_U32(ctx, 31, 0x16E66Cu);
    ctx->pc = 0x16E668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E664u;
            // 0x16e668: 0x24a53678  addiu       $a1, $a1, 0x3678 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BC90u;
    if (runtime->hasFunction(0x16BC90u)) {
        auto targetFn = runtime->lookupFunction(0x16BC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E66Cu; }
        if (ctx->pc != 0x16E66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchChara__12CActionCharaFPc_0x16bc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E66Cu; }
        if (ctx->pc != 0x16E66Cu) { return; }
    }
    ctx->pc = 0x16E66Cu;
label_16e66c:
    // 0x16e66c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x16e66cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16e670:
    // 0x16e670: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_16e674:
    if (ctx->pc == 0x16E674u) {
        ctx->pc = 0x16E678u;
        goto label_16e678;
    }
    ctx->pc = 0x16E670u;
    {
        const bool branch_taken_0x16e670 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e670) {
            ctx->pc = 0x16E6A8u;
            goto label_16e6a8;
        }
    }
    ctx->pc = 0x16E678u;
label_16e678:
    // 0x16e678: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x16e678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
label_16e67c:
    // 0x16e67c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16e67cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16e680:
    // 0x16e680: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x16e680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_16e684:
    // 0x16e684: 0xc072408  jal         func_1C9020
label_16e688:
    if (ctx->pc == 0x16E688u) {
        ctx->pc = 0x16E688u;
            // 0x16e688: 0x8e440070  lw          $a0, 0x70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
        ctx->pc = 0x16E68Cu;
        goto label_16e68c;
    }
    ctx->pc = 0x16E684u;
    SET_GPR_U32(ctx, 31, 0x16E68Cu);
    ctx->pc = 0x16E688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E684u;
            // 0x16e688: 0x8e440070  lw          $a0, 0x70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9020u;
    if (runtime->hasFunction(0x1C9020u)) {
        auto targetFn = runtime->lookupFunction(0x1C9020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E68Cu; }
        if (ctx->pc != 0x16E68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        unitRotation__FP8mgCFrameff_0x1c9020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E68Cu; }
        if (ctx->pc != 0x16E68Cu) { return; }
    }
    ctx->pc = 0x16E68Cu;
label_16e68c:
    // 0x16e68c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x16e68cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16e690:
    // 0x16e690: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16e690u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16e694:
    // 0x16e694: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x16e694u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_16e698:
    // 0x16e698: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16e698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16e69c:
    // 0x16e69c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x16e69cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_16e6a0:
    // 0x16e6a0: 0x320f809  jalr        $t9
label_16e6a4:
    if (ctx->pc == 0x16E6A4u) {
        ctx->pc = 0x16E6A4u;
            // 0x16e6a4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x16E6A8u;
        goto label_16e6a8;
    }
    ctx->pc = 0x16E6A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E6A8u);
        ctx->pc = 0x16E6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E6A0u;
            // 0x16e6a4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16E6A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E6A8u; }
            if (ctx->pc != 0x16E6A8u) { return; }
        }
        }
    }
    ctx->pc = 0x16E6A8u;
label_16e6a8:
    // 0x16e6a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16e6a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16e6ac:
    // 0x16e6ac: 0x0  nop
    ctx->pc = 0x16e6acu;
    // NOP
label_16e6b0:
    // 0x16e6b0: 0x46180032  c.eq.s      $f0, $f24
    ctx->pc = 0x16e6b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[24])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16e6b4:
    // 0x16e6b4: 0x0  nop
    ctx->pc = 0x16e6b4u;
    // NOP
label_16e6b8:
    // 0x16e6b8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_16e6bc:
    if (ctx->pc == 0x16E6BCu) {
        ctx->pc = 0x16E6BCu;
            // 0x16e6bc: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->pc = 0x16E6C0u;
        goto label_16e6c0;
    }
    ctx->pc = 0x16E6B8u;
    {
        const bool branch_taken_0x16e6b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16E6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E6B8u;
            // 0x16e6bc: 0x4600c306  mov.s       $f12, $f24 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[24]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e6b8) {
            ctx->pc = 0x16E6D0u;
            goto label_16e6d0;
        }
    }
    ctx->pc = 0x16E6C0u;
label_16e6c0:
    // 0x16e6c0: 0x46140032  c.eq.s      $f0, $f20
    ctx->pc = 0x16e6c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16e6c4:
    // 0x16e6c4: 0x0  nop
    ctx->pc = 0x16e6c4u;
    // NOP
label_16e6c8:
    // 0x16e6c8: 0x4501003b  bc1t        . + 4 + (0x3B << 2)
label_16e6cc:
    if (ctx->pc == 0x16E6CCu) {
        ctx->pc = 0x16E6D0u;
        goto label_16e6d0;
    }
    ctx->pc = 0x16E6C8u;
    {
        const bool branch_taken_0x16e6c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e6c8) {
            ctx->pc = 0x16E7B8u;
            goto label_16e7b8;
        }
    }
    ctx->pc = 0x16E6D0u;
label_16e6d0:
    // 0x16e6d0: 0xc047c76  jal         func_11F1D8
label_16e6d4:
    if (ctx->pc == 0x16E6D4u) {
        ctx->pc = 0x16E6D4u;
            // 0x16e6d4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x16E6D8u;
        goto label_16e6d8;
    }
    ctx->pc = 0x16E6D0u;
    SET_GPR_U32(ctx, 31, 0x16E6D8u);
    ctx->pc = 0x16E6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E6D0u;
            // 0x16e6d4: 0x4600a346  mov.s       $f13, $f20 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E6D8u; }
        if (ctx->pc != 0x16E6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E6D8u; }
        if (ctx->pc != 0x16E6D8u) { return; }
    }
    ctx->pc = 0x16E6D8u;
label_16e6d8:
    // 0x16e6d8: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x16e6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_16e6dc:
    // 0x16e6dc: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x16e6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_16e6e0:
    // 0x16e6e0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x16e6e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_16e6e4:
    // 0x16e6e4: 0xc072408  jal         func_1C9020
label_16e6e8:
    if (ctx->pc == 0x16E6E8u) {
        ctx->pc = 0x16E6E8u;
            // 0x16e6e8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x16E6ECu;
        goto label_16e6ec;
    }
    ctx->pc = 0x16E6E4u;
    SET_GPR_U32(ctx, 31, 0x16E6ECu);
    ctx->pc = 0x16E6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E6E4u;
            // 0x16e6e8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9020u;
    if (runtime->hasFunction(0x1C9020u)) {
        auto targetFn = runtime->lookupFunction(0x1C9020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E6ECu; }
        if (ctx->pc != 0x16E6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        unitRotation__FP8mgCFrameff_0x1c9020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E6ECu; }
        if (ctx->pc != 0x16E6ECu) { return; }
    }
    ctx->pc = 0x16E6ECu;
label_16e6ec:
    // 0x16e6ec: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x16e6ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16e6f0:
    // 0x16e6f0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16e6f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16e6f4:
    // 0x16e6f4: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x16e6f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_16e6f8:
    // 0x16e6f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16e6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16e6fc:
    // 0x16e6fc: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x16e6fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_16e700:
    // 0x16e700: 0x320f809  jalr        $t9
label_16e704:
    if (ctx->pc == 0x16E704u) {
        ctx->pc = 0x16E704u;
            // 0x16e704: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x16E708u;
        goto label_16e708;
    }
    ctx->pc = 0x16E700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E708u);
        ctx->pc = 0x16E704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E700u;
            // 0x16e704: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16E708u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E708u; }
            if (ctx->pc != 0x16E708u) { return; }
        }
        }
    }
    ctx->pc = 0x16E708u;
label_16e708:
    // 0x16e708: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x16e708u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_16e70c:
    // 0x16e70c: 0xafa000b4  sw          $zero, 0xB4($sp)
    ctx->pc = 0x16e70cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 0));
label_16e710:
    // 0x16e710: 0xe7b800b0  swc1        $f24, 0xB0($sp)
    ctx->pc = 0x16e710u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
label_16e714:
    // 0x16e714: 0xc04bff4  jal         func_12FFD0
label_16e718:
    if (ctx->pc == 0x16E718u) {
        ctx->pc = 0x16E718u;
            // 0x16e718: 0xe7b400b8  swc1        $f20, 0xB8($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
        ctx->pc = 0x16E71Cu;
        goto label_16e71c;
    }
    ctx->pc = 0x16E714u;
    SET_GPR_U32(ctx, 31, 0x16E71Cu);
    ctx->pc = 0x16E718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E714u;
            // 0x16e718: 0xe7b400b8  swc1        $f20, 0xB8($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E71Cu; }
        if (ctx->pc != 0x16E71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E71Cu; }
        if (ctx->pc != 0x16E71Cu) { return; }
    }
    ctx->pc = 0x16E71Cu;
label_16e71c:
    // 0x16e71c: 0xc62106ac  lwc1        $f1, 0x6AC($s1)
    ctx->pc = 0x16e71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16e720:
    // 0x16e720: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16e720u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16e724:
    // 0x16e724: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16e724u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_16e728:
    // 0x16e728: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x16e728u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_16e72c:
    // 0x16e72c: 0x0  nop
    ctx->pc = 0x16e72cu;
    // NOP
label_16e730:
    // 0x16e730: 0x0  nop
    ctx->pc = 0x16e730u;
    // NOP
label_16e734:
    // 0x16e734: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x16e734u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16e738:
    // 0x16e738: 0x0  nop
    ctx->pc = 0x16e738u;
    // NOP
label_16e73c:
    // 0x16e73c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_16e740:
    if (ctx->pc == 0x16E740u) {
        ctx->pc = 0x16E740u;
            // 0x16e740: 0x3c023f4c  lui         $v0, 0x3F4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
        ctx->pc = 0x16E744u;
        goto label_16e744;
    }
    ctx->pc = 0x16E73Cu;
    {
        const bool branch_taken_0x16e73c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16E740u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E73Cu;
            // 0x16e740: 0x3c023f4c  lui         $v0, 0x3F4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e73c) {
            ctx->pc = 0x16E74Cu;
            goto label_16e74c;
        }
    }
    ctx->pc = 0x16E744u;
label_16e744:
    // 0x16e744: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x16e744u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_16e748:
    // 0x16e748: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x16e748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_16e74c:
    // 0x16e74c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x16e74cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_16e750:
    // 0x16e750: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16e750u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16e754:
    // 0x16e754: 0x0  nop
    ctx->pc = 0x16e754u;
    // NOP
label_16e758:
    // 0x16e758: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16e758u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16e75c:
    // 0x16e75c: 0x0  nop
    ctx->pc = 0x16e75cu;
    // NOP
label_16e760:
    // 0x16e760: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_16e764:
    if (ctx->pc == 0x16E764u) {
        ctx->pc = 0x16E768u;
        goto label_16e768;
    }
    ctx->pc = 0x16E760u;
    {
        const bool branch_taken_0x16e760 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16e760) {
            ctx->pc = 0x16E790u;
            goto label_16e790;
        }
    }
    ctx->pc = 0x16E768u;
label_16e768:
    // 0x16e768: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x16e768u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16e76c:
    // 0x16e76c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16e76cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16e770:
    // 0x16e770: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x16e770u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16e774:
    // 0x16e774: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16e774u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16e778:
    // 0x16e778: 0x24a53680  addiu       $a1, $a1, 0x3680
    ctx->pc = 0x16e778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13952));
label_16e77c:
    // 0x16e77c: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x16e77cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_16e780:
    // 0x16e780: 0x320f809  jalr        $t9
label_16e784:
    if (ctx->pc == 0x16E784u) {
        ctx->pc = 0x16E784u;
            // 0x16e784: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16E788u;
        goto label_16e788;
    }
    ctx->pc = 0x16E780u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E788u);
        ctx->pc = 0x16E784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E780u;
            // 0x16e784: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16E788u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E788u; }
            if (ctx->pc != 0x16E788u) { return; }
        }
        }
    }
    ctx->pc = 0x16E788u;
label_16e788:
    // 0x16e788: 0x10000013  b           . + 4 + (0x13 << 2)
label_16e78c:
    if (ctx->pc == 0x16E78Cu) {
        ctx->pc = 0x16E790u;
        goto label_16e790;
    }
    ctx->pc = 0x16E788u;
    {
        const bool branch_taken_0x16e788 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e788) {
            ctx->pc = 0x16E7D8u;
            goto label_16e7d8;
        }
    }
    ctx->pc = 0x16E790u;
label_16e790:
    // 0x16e790: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x16e790u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16e794:
    // 0x16e794: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16e794u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16e798:
    // 0x16e798: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x16e798u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16e79c:
    // 0x16e79c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16e79cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16e7a0:
    // 0x16e7a0: 0x24a53690  addiu       $a1, $a1, 0x3690
    ctx->pc = 0x16e7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13968));
label_16e7a4:
    // 0x16e7a4: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x16e7a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_16e7a8:
    // 0x16e7a8: 0x320f809  jalr        $t9
label_16e7ac:
    if (ctx->pc == 0x16E7ACu) {
        ctx->pc = 0x16E7ACu;
            // 0x16e7ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16E7B0u;
        goto label_16e7b0;
    }
    ctx->pc = 0x16E7A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E7B0u);
        ctx->pc = 0x16E7ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E7A8u;
            // 0x16e7ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16E7B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E7B0u; }
            if (ctx->pc != 0x16E7B0u) { return; }
        }
        }
    }
    ctx->pc = 0x16E7B0u;
label_16e7b0:
    // 0x16e7b0: 0x10000009  b           . + 4 + (0x9 << 2)
label_16e7b4:
    if (ctx->pc == 0x16E7B4u) {
        ctx->pc = 0x16E7B8u;
        goto label_16e7b8;
    }
    ctx->pc = 0x16E7B0u;
    {
        const bool branch_taken_0x16e7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e7b0) {
            ctx->pc = 0x16E7D8u;
            goto label_16e7d8;
        }
    }
    ctx->pc = 0x16E7B8u;
label_16e7b8:
    // 0x16e7b8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x16e7b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16e7bc:
    // 0x16e7bc: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16e7bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16e7c0:
    // 0x16e7c0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x16e7c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16e7c4:
    // 0x16e7c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16e7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16e7c8:
    // 0x16e7c8: 0x24a536a0  addiu       $a1, $a1, 0x36A0
    ctx->pc = 0x16e7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13984));
label_16e7cc:
    // 0x16e7cc: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x16e7ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_16e7d0:
    // 0x16e7d0: 0x320f809  jalr        $t9
label_16e7d4:
    if (ctx->pc == 0x16E7D4u) {
        ctx->pc = 0x16E7D4u;
            // 0x16e7d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16E7D8u;
        goto label_16e7d8;
    }
    ctx->pc = 0x16E7D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E7D8u);
        ctx->pc = 0x16E7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E7D0u;
            // 0x16e7d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16E7D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E7D8u; }
            if (ctx->pc != 0x16E7D8u) { return; }
        }
        }
    }
    ctx->pc = 0x16E7D8u;
label_16e7d8:
    // 0x16e7d8: 0x8e2306a8  lw          $v1, 0x6A8($s1)
    ctx->pc = 0x16e7d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1704)));
label_16e7dc:
    // 0x16e7dc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x16e7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_16e7e0:
    // 0x16e7e0: 0x14620070  bne         $v1, $v0, . + 4 + (0x70 << 2)
label_16e7e4:
    if (ctx->pc == 0x16E7E4u) {
        ctx->pc = 0x16E7E4u;
            // 0x16e7e4: 0x26240080  addiu       $a0, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->pc = 0x16E7E8u;
        goto label_16e7e8;
    }
    ctx->pc = 0x16E7E0u;
    {
        const bool branch_taken_0x16e7e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16E7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E7E0u;
            // 0x16e7e4: 0x26240080  addiu       $a0, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e7e0) {
            ctx->pc = 0x16E9A4u;
            goto label_16e9a4;
        }
    }
    ctx->pc = 0x16E7E8u;
label_16e7e8:
    // 0x16e7e8: 0xc04bff4  jal         func_12FFD0
label_16e7ec:
    if (ctx->pc == 0x16E7ECu) {
        ctx->pc = 0x16E7ECu;
            // 0x16e7ec: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x16E7F0u;
        goto label_16e7f0;
    }
    ctx->pc = 0x16E7E8u;
    SET_GPR_U32(ctx, 31, 0x16E7F0u);
    ctx->pc = 0x16E7ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E7E8u;
            // 0x16e7ec: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E7F0u; }
        if (ctx->pc != 0x16E7F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E7F0u; }
        if (ctx->pc != 0x16E7F0u) { return; }
    }
    ctx->pc = 0x16E7F0u;
label_16e7f0:
    // 0x16e7f0: 0x3c023d0e  lui         $v0, 0x3D0E
    ctx->pc = 0x16e7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15630 << 16));
label_16e7f4:
    // 0x16e7f4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16e7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16e7f8:
    // 0x16e7f8: 0x3442fa35  ori         $v0, $v0, 0xFA35
    ctx->pc = 0x16e7f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64053);
label_16e7fc:
    // 0x16e7fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16e7fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16e800:
    // 0x16e800: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x16e800u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16e804:
    // 0x16e804: 0x24a536b0  addiu       $a1, $a1, 0x36B0
    ctx->pc = 0x16e804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14000));
label_16e808:
    // 0x16e808: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x16e808u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_16e80c:
    // 0x16e80c: 0xc05af3c  jal         func_16BCF0
label_16e810:
    if (ctx->pc == 0x16E810u) {
        ctx->pc = 0x16E810u;
            // 0x16e810: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x16E814u;
        goto label_16e814;
    }
    ctx->pc = 0x16E80Cu;
    SET_GPR_U32(ctx, 31, 0x16E814u);
    ctx->pc = 0x16E810u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E80Cu;
            // 0x16e810: 0x46000d02  mul.s       $f20, $f1, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BCF0u;
    if (runtime->hasFunction(0x16BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x16BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E814u; }
        if (ctx->pc != 0x16E814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchObject__12CActionCharaFPc_0x16bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E814u; }
        if (ctx->pc != 0x16E814u) { return; }
    }
    ctx->pc = 0x16E814u;
label_16e814:
    // 0x16e814: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16e814u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16e818:
    // 0x16e818: 0x12000014  beqz        $s0, . + 4 + (0x14 << 2)
label_16e81c:
    if (ctx->pc == 0x16E81Cu) {
        ctx->pc = 0x16E820u;
        goto label_16e820;
    }
    ctx->pc = 0x16E818u;
    {
        const bool branch_taken_0x16e818 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e818) {
            ctx->pc = 0x16E86Cu;
            goto label_16e86c;
        }
    }
    ctx->pc = 0x16E820u;
label_16e820:
    // 0x16e820: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16e820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16e824:
    // 0x16e824: 0xc04de4c  jal         func_137930
label_16e828:
    if (ctx->pc == 0x16E828u) {
        ctx->pc = 0x16E828u;
            // 0x16e828: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x16E82Cu;
        goto label_16e82c;
    }
    ctx->pc = 0x16E824u;
    SET_GPR_U32(ctx, 31, 0x16E82Cu);
    ctx->pc = 0x16E828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E824u;
            // 0x16e828: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137930u;
    if (runtime->hasFunction(0x137930u)) {
        auto targetFn = runtime->lookupFunction(0x137930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E82Cu; }
        if (ctx->pc != 0x16E82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRotType__8mgCFrameFi_0x137930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E82Cu; }
        if (ctx->pc != 0x16E82Cu) { return; }
    }
    ctx->pc = 0x16E82Cu;
label_16e82c:
    // 0x16e82c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x16e82cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16e830:
    // 0x16e830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16e830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16e834:
    // 0x16e834: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x16e834u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_16e838:
    // 0x16e838: 0x320f809  jalr        $t9
label_16e83c:
    if (ctx->pc == 0x16E83Cu) {
        ctx->pc = 0x16E83Cu;
            // 0x16e83c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x16E840u;
        goto label_16e840;
    }
    ctx->pc = 0x16E838u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E840u);
        ctx->pc = 0x16E83Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E838u;
            // 0x16e83c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16E840u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E840u; }
            if (ctx->pc != 0x16E840u) { return; }
        }
        }
    }
    ctx->pc = 0x16E840u;
label_16e840:
    // 0x16e840: 0x27b200c8  addiu       $s2, $sp, 0xC8
    ctx->pc = 0x16e840u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_16e844:
    // 0x16e844: 0xc6400000  lwc1        $f0, 0x0($s2)
    ctx->pc = 0x16e844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16e848:
    // 0x16e848: 0x46140300  add.s       $f12, $f0, $f20
    ctx->pc = 0x16e848u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_16e84c:
    // 0x16e84c: 0xc04c374  jal         func_130DD0
label_16e850:
    if (ctx->pc == 0x16E850u) {
        ctx->pc = 0x16E850u;
            // 0x16e850: 0xe64c0000  swc1        $f12, 0x0($s2) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->pc = 0x16E854u;
        goto label_16e854;
    }
    ctx->pc = 0x16E84Cu;
    SET_GPR_U32(ctx, 31, 0x16E854u);
    ctx->pc = 0x16E850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E84Cu;
            // 0x16e850: 0xe64c0000  swc1        $f12, 0x0($s2) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E854u; }
        if (ctx->pc != 0x16E854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E854u; }
        if (ctx->pc != 0x16E854u) { return; }
    }
    ctx->pc = 0x16E854u;
label_16e854:
    // 0x16e854: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x16e854u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_16e858:
    // 0x16e858: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16e858u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16e85c:
    // 0x16e85c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x16e85cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16e860:
    // 0x16e860: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x16e860u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_16e864:
    // 0x16e864: 0x320f809  jalr        $t9
label_16e868:
    if (ctx->pc == 0x16E868u) {
        ctx->pc = 0x16E868u;
            // 0x16e868: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x16E86Cu;
        goto label_16e86c;
    }
    ctx->pc = 0x16E864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E86Cu);
        ctx->pc = 0x16E868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E864u;
            // 0x16e868: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16E86Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E86Cu; }
            if (ctx->pc != 0x16E86Cu) { return; }
        }
        }
    }
    ctx->pc = 0x16E86Cu;
label_16e86c:
    // 0x16e86c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16e86cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16e870:
    // 0x16e870: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16e870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16e874:
    // 0x16e874: 0xc05af3c  jal         func_16BCF0
label_16e878:
    if (ctx->pc == 0x16E878u) {
        ctx->pc = 0x16E878u;
            // 0x16e878: 0x24a536b8  addiu       $a1, $a1, 0x36B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14008));
        ctx->pc = 0x16E87Cu;
        goto label_16e87c;
    }
    ctx->pc = 0x16E874u;
    SET_GPR_U32(ctx, 31, 0x16E87Cu);
    ctx->pc = 0x16E878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E874u;
            // 0x16e878: 0x24a536b8  addiu       $a1, $a1, 0x36B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BCF0u;
    if (runtime->hasFunction(0x16BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x16BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E87Cu; }
        if (ctx->pc != 0x16E87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchObject__12CActionCharaFPc_0x16bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E87Cu; }
        if (ctx->pc != 0x16E87Cu) { return; }
    }
    ctx->pc = 0x16E87Cu;
label_16e87c:
    // 0x16e87c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x16e87cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16e880:
    // 0x16e880: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
label_16e884:
    if (ctx->pc == 0x16E884u) {
        ctx->pc = 0x16E888u;
        goto label_16e888;
    }
    ctx->pc = 0x16E880u;
    {
        const bool branch_taken_0x16e880 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e880) {
            ctx->pc = 0x16E8D4u;
            goto label_16e8d4;
        }
    }
    ctx->pc = 0x16E888u;
label_16e888:
    // 0x16e888: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16e888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16e88c:
    // 0x16e88c: 0xc04de4c  jal         func_137930
label_16e890:
    if (ctx->pc == 0x16E890u) {
        ctx->pc = 0x16E890u;
            // 0x16e890: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x16E894u;
        goto label_16e894;
    }
    ctx->pc = 0x16E88Cu;
    SET_GPR_U32(ctx, 31, 0x16E894u);
    ctx->pc = 0x16E890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E88Cu;
            // 0x16e890: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137930u;
    if (runtime->hasFunction(0x137930u)) {
        auto targetFn = runtime->lookupFunction(0x137930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E894u; }
        if (ctx->pc != 0x16E894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRotType__8mgCFrameFi_0x137930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E894u; }
        if (ctx->pc != 0x16E894u) { return; }
    }
    ctx->pc = 0x16E894u;
label_16e894:
    // 0x16e894: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x16e894u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16e898:
    // 0x16e898: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16e898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16e89c:
    // 0x16e89c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x16e89cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_16e8a0:
    // 0x16e8a0: 0x320f809  jalr        $t9
label_16e8a4:
    if (ctx->pc == 0x16E8A4u) {
        ctx->pc = 0x16E8A4u;
            // 0x16e8a4: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x16E8A8u;
        goto label_16e8a8;
    }
    ctx->pc = 0x16E8A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E8A8u);
        ctx->pc = 0x16E8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E8A0u;
            // 0x16e8a4: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16E8A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E8A8u; }
            if (ctx->pc != 0x16E8A8u) { return; }
        }
        }
    }
    ctx->pc = 0x16E8A8u;
label_16e8a8:
    // 0x16e8a8: 0x27b000c8  addiu       $s0, $sp, 0xC8
    ctx->pc = 0x16e8a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_16e8ac:
    // 0x16e8ac: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x16e8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16e8b0:
    // 0x16e8b0: 0x46140300  add.s       $f12, $f0, $f20
    ctx->pc = 0x16e8b0u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_16e8b4:
    // 0x16e8b4: 0xc04c374  jal         func_130DD0
label_16e8b8:
    if (ctx->pc == 0x16E8B8u) {
        ctx->pc = 0x16E8B8u;
            // 0x16e8b8: 0xe60c0000  swc1        $f12, 0x0($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->pc = 0x16E8BCu;
        goto label_16e8bc;
    }
    ctx->pc = 0x16E8B4u;
    SET_GPR_U32(ctx, 31, 0x16E8BCu);
    ctx->pc = 0x16E8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E8B4u;
            // 0x16e8b8: 0xe60c0000  swc1        $f12, 0x0($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E8BCu; }
        if (ctx->pc != 0x16E8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E8BCu; }
        if (ctx->pc != 0x16E8BCu) { return; }
    }
    ctx->pc = 0x16E8BCu;
label_16e8bc:
    // 0x16e8bc: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x16e8bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_16e8c0:
    // 0x16e8c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16e8c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16e8c4:
    // 0x16e8c4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x16e8c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16e8c8:
    // 0x16e8c8: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x16e8c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_16e8cc:
    // 0x16e8cc: 0x320f809  jalr        $t9
label_16e8d0:
    if (ctx->pc == 0x16E8D0u) {
        ctx->pc = 0x16E8D0u;
            // 0x16e8d0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x16E8D4u;
        goto label_16e8d4;
    }
    ctx->pc = 0x16E8CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E8D4u);
        ctx->pc = 0x16E8D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E8CCu;
            // 0x16e8d0: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16E8D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E8D4u; }
            if (ctx->pc != 0x16E8D4u) { return; }
        }
        }
    }
    ctx->pc = 0x16E8D4u;
label_16e8d4:
    // 0x16e8d4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16e8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16e8d8:
    // 0x16e8d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16e8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16e8dc:
    // 0x16e8dc: 0xc05af3c  jal         func_16BCF0
label_16e8e0:
    if (ctx->pc == 0x16E8E0u) {
        ctx->pc = 0x16E8E0u;
            // 0x16e8e0: 0x24a536c0  addiu       $a1, $a1, 0x36C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14016));
        ctx->pc = 0x16E8E4u;
        goto label_16e8e4;
    }
    ctx->pc = 0x16E8DCu;
    SET_GPR_U32(ctx, 31, 0x16E8E4u);
    ctx->pc = 0x16E8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E8DCu;
            // 0x16e8e0: 0x24a536c0  addiu       $a1, $a1, 0x36C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BCF0u;
    if (runtime->hasFunction(0x16BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x16BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E8E4u; }
        if (ctx->pc != 0x16E8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchObject__12CActionCharaFPc_0x16bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E8E4u; }
        if (ctx->pc != 0x16E8E4u) { return; }
    }
    ctx->pc = 0x16E8E4u;
label_16e8e4:
    // 0x16e8e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x16e8e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16e8e8:
    // 0x16e8e8: 0x12400014  beqz        $s2, . + 4 + (0x14 << 2)
label_16e8ec:
    if (ctx->pc == 0x16E8ECu) {
        ctx->pc = 0x16E8F0u;
        goto label_16e8f0;
    }
    ctx->pc = 0x16E8E8u;
    {
        const bool branch_taken_0x16e8e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x16e8e8) {
            ctx->pc = 0x16E93Cu;
            goto label_16e93c;
        }
    }
    ctx->pc = 0x16E8F0u;
label_16e8f0:
    // 0x16e8f0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16e8f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16e8f4:
    // 0x16e8f4: 0xc04de4c  jal         func_137930
label_16e8f8:
    if (ctx->pc == 0x16E8F8u) {
        ctx->pc = 0x16E8F8u;
            // 0x16e8f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x16E8FCu;
        goto label_16e8fc;
    }
    ctx->pc = 0x16E8F4u;
    SET_GPR_U32(ctx, 31, 0x16E8FCu);
    ctx->pc = 0x16E8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E8F4u;
            // 0x16e8f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137930u;
    if (runtime->hasFunction(0x137930u)) {
        auto targetFn = runtime->lookupFunction(0x137930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E8FCu; }
        if (ctx->pc != 0x16E8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRotType__8mgCFrameFi_0x137930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E8FCu; }
        if (ctx->pc != 0x16E8FCu) { return; }
    }
    ctx->pc = 0x16E8FCu;
label_16e8fc:
    // 0x16e8fc: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x16e8fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16e900:
    // 0x16e900: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16e900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16e904:
    // 0x16e904: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x16e904u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_16e908:
    // 0x16e908: 0x320f809  jalr        $t9
label_16e90c:
    if (ctx->pc == 0x16E90Cu) {
        ctx->pc = 0x16E90Cu;
            // 0x16e90c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x16E910u;
        goto label_16e910;
    }
    ctx->pc = 0x16E908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E910u);
        ctx->pc = 0x16E90Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E908u;
            // 0x16e90c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16E910u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E910u; }
            if (ctx->pc != 0x16E910u) { return; }
        }
        }
    }
    ctx->pc = 0x16E910u;
label_16e910:
    // 0x16e910: 0x27b000c8  addiu       $s0, $sp, 0xC8
    ctx->pc = 0x16e910u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_16e914:
    // 0x16e914: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x16e914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16e918:
    // 0x16e918: 0x46140300  add.s       $f12, $f0, $f20
    ctx->pc = 0x16e918u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_16e91c:
    // 0x16e91c: 0xc04c374  jal         func_130DD0
label_16e920:
    if (ctx->pc == 0x16E920u) {
        ctx->pc = 0x16E920u;
            // 0x16e920: 0xe60c0000  swc1        $f12, 0x0($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->pc = 0x16E924u;
        goto label_16e924;
    }
    ctx->pc = 0x16E91Cu;
    SET_GPR_U32(ctx, 31, 0x16E924u);
    ctx->pc = 0x16E920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E91Cu;
            // 0x16e920: 0xe60c0000  swc1        $f12, 0x0($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E924u; }
        if (ctx->pc != 0x16E924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E924u; }
        if (ctx->pc != 0x16E924u) { return; }
    }
    ctx->pc = 0x16E924u;
label_16e924:
    // 0x16e924: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x16e924u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_16e928:
    // 0x16e928: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16e928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16e92c:
    // 0x16e92c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x16e92cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16e930:
    // 0x16e930: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x16e930u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_16e934:
    // 0x16e934: 0x320f809  jalr        $t9
label_16e938:
    if (ctx->pc == 0x16E938u) {
        ctx->pc = 0x16E938u;
            // 0x16e938: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x16E93Cu;
        goto label_16e93c;
    }
    ctx->pc = 0x16E934u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E93Cu);
        ctx->pc = 0x16E938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E934u;
            // 0x16e938: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16E93Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E93Cu; }
            if (ctx->pc != 0x16E93Cu) { return; }
        }
        }
    }
    ctx->pc = 0x16E93Cu;
label_16e93c:
    // 0x16e93c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16e93cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16e940:
    // 0x16e940: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16e940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16e944:
    // 0x16e944: 0xc05af3c  jal         func_16BCF0
label_16e948:
    if (ctx->pc == 0x16E948u) {
        ctx->pc = 0x16E948u;
            // 0x16e948: 0x24a536c8  addiu       $a1, $a1, 0x36C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14024));
        ctx->pc = 0x16E94Cu;
        goto label_16e94c;
    }
    ctx->pc = 0x16E944u;
    SET_GPR_U32(ctx, 31, 0x16E94Cu);
    ctx->pc = 0x16E948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E944u;
            // 0x16e948: 0x24a536c8  addiu       $a1, $a1, 0x36C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BCF0u;
    if (runtime->hasFunction(0x16BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x16BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E94Cu; }
        if (ctx->pc != 0x16E94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchObject__12CActionCharaFPc_0x16bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E94Cu; }
        if (ctx->pc != 0x16E94Cu) { return; }
    }
    ctx->pc = 0x16E94Cu;
label_16e94c:
    // 0x16e94c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x16e94cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16e950:
    // 0x16e950: 0x12400013  beqz        $s2, . + 4 + (0x13 << 2)
label_16e954:
    if (ctx->pc == 0x16E954u) {
        ctx->pc = 0x16E954u;
            // 0x16e954: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16E958u;
        goto label_16e958;
    }
    ctx->pc = 0x16E950u;
    {
        const bool branch_taken_0x16e950 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x16E954u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E950u;
            // 0x16e954: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16e950) {
            ctx->pc = 0x16E9A0u;
            goto label_16e9a0;
        }
    }
    ctx->pc = 0x16E958u;
label_16e958:
    // 0x16e958: 0xc04de4c  jal         func_137930
label_16e95c:
    if (ctx->pc == 0x16E95Cu) {
        ctx->pc = 0x16E95Cu;
            // 0x16e95c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x16E960u;
        goto label_16e960;
    }
    ctx->pc = 0x16E958u;
    SET_GPR_U32(ctx, 31, 0x16E960u);
    ctx->pc = 0x16E95Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E958u;
            // 0x16e95c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137930u;
    if (runtime->hasFunction(0x137930u)) {
        auto targetFn = runtime->lookupFunction(0x137930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E960u; }
        if (ctx->pc != 0x16E960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRotType__8mgCFrameFi_0x137930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E960u; }
        if (ctx->pc != 0x16E960u) { return; }
    }
    ctx->pc = 0x16E960u;
label_16e960:
    // 0x16e960: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x16e960u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16e964:
    // 0x16e964: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16e964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16e968:
    // 0x16e968: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x16e968u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_16e96c:
    // 0x16e96c: 0x320f809  jalr        $t9
label_16e970:
    if (ctx->pc == 0x16E970u) {
        ctx->pc = 0x16E970u;
            // 0x16e970: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x16E974u;
        goto label_16e974;
    }
    ctx->pc = 0x16E96Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E974u);
        ctx->pc = 0x16E970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E96Cu;
            // 0x16e970: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16E974u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E974u; }
            if (ctx->pc != 0x16E974u) { return; }
        }
        }
    }
    ctx->pc = 0x16E974u;
label_16e974:
    // 0x16e974: 0x27b000c8  addiu       $s0, $sp, 0xC8
    ctx->pc = 0x16e974u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_16e978:
    // 0x16e978: 0xc6000000  lwc1        $f0, 0x0($s0)
    ctx->pc = 0x16e978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16e97c:
    // 0x16e97c: 0x46140300  add.s       $f12, $f0, $f20
    ctx->pc = 0x16e97cu;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_16e980:
    // 0x16e980: 0xc04c374  jal         func_130DD0
label_16e984:
    if (ctx->pc == 0x16E984u) {
        ctx->pc = 0x16E984u;
            // 0x16e984: 0xe60c0000  swc1        $f12, 0x0($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->pc = 0x16E988u;
        goto label_16e988;
    }
    ctx->pc = 0x16E980u;
    SET_GPR_U32(ctx, 31, 0x16E988u);
    ctx->pc = 0x16E984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E980u;
            // 0x16e984: 0xe60c0000  swc1        $f12, 0x0($s0) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E988u; }
        if (ctx->pc != 0x16E988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E988u; }
        if (ctx->pc != 0x16E988u) { return; }
    }
    ctx->pc = 0x16E988u;
label_16e988:
    // 0x16e988: 0xe6000000  swc1        $f0, 0x0($s0)
    ctx->pc = 0x16e988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 0), bits); }
label_16e98c:
    // 0x16e98c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16e98cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16e990:
    // 0x16e990: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x16e990u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16e994:
    // 0x16e994: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x16e994u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_16e998:
    // 0x16e998: 0x320f809  jalr        $t9
label_16e99c:
    if (ctx->pc == 0x16E99Cu) {
        ctx->pc = 0x16E99Cu;
            // 0x16e99c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x16E9A0u;
        goto label_16e9a0;
    }
    ctx->pc = 0x16E998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16E9A0u);
        ctx->pc = 0x16E99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E998u;
            // 0x16e99c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16E9A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16E9A0u; }
            if (ctx->pc != 0x16E9A0u) { return; }
        }
        }
    }
    ctx->pc = 0x16E9A0u;
label_16e9a0:
    // 0x16e9a0: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x16e9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_16e9a4:
    // 0x16e9a4: 0xc041c5c  jal         func_107170
label_16e9a8:
    if (ctx->pc == 0x16E9A8u) {
        ctx->pc = 0x16E9A8u;
            // 0x16e9a8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x16E9ACu;
        goto label_16e9ac;
    }
    ctx->pc = 0x16E9A4u;
    SET_GPR_U32(ctx, 31, 0x16E9ACu);
    ctx->pc = 0x16E9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E9A4u;
            // 0x16e9a8: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E9ACu; }
        if (ctx->pc != 0x16E9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E9ACu; }
        if (ctx->pc != 0x16E9ACu) { return; }
    }
    ctx->pc = 0x16E9ACu;
label_16e9ac:
    // 0x16e9ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16e9acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16e9b0:
    // 0x16e9b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16e9b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16e9b4:
    // 0x16e9b4: 0xc05b1e8  jal         func_16C7A0
label_16e9b8:
    if (ctx->pc == 0x16E9B8u) {
        ctx->pc = 0x16E9B8u;
            // 0x16e9b8: 0xa222076c  sb          $v0, 0x76C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1900), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x16E9BCu;
        goto label_16e9bc;
    }
    ctx->pc = 0x16E9B4u;
    SET_GPR_U32(ctx, 31, 0x16E9BCu);
    ctx->pc = 0x16E9B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16E9B4u;
            // 0x16e9b8: 0xa222076c  sb          $v0, 0x76C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1900), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16C7A0u;
    if (runtime->hasFunction(0x16C7A0u)) {
        auto targetFn = runtime->lookupFunction(0x16C7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E9BCu; }
        if (ctx->pc != 0x16E9BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RockOn__12CActionCharaFv_0x16c7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16E9BCu; }
        if (ctx->pc != 0x16E9BCu) { return; }
    }
    ctx->pc = 0x16E9BCu;
label_16e9bc:
    // 0x16e9bc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x16e9bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_16e9c0:
    // 0x16e9c0: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x16e9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_16e9c4:
    // 0x16e9c4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x16e9c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16e9c8:
    // 0x16e9c8: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x16e9c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_16e9cc:
    // 0x16e9cc: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x16e9ccu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16e9d0:
    // 0x16e9d0: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x16e9d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_16e9d4:
    // 0x16e9d4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x16e9d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16e9d8:
    // 0x16e9d8: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x16e9d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_16e9dc:
    // 0x16e9dc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x16e9dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_16e9e0:
    // 0x16e9e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16e9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16e9e4:
    // 0x16e9e4: 0x3e00008  jr          $ra
label_16e9e8:
    if (ctx->pc == 0x16E9E8u) {
        ctx->pc = 0x16E9E8u;
            // 0x16e9e8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x16E9ECu;
        goto label_fallthrough_0x16e9e4;
    }
    ctx->pc = 0x16E9E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16E9E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16E9E4u;
            // 0x16e9e8: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x16e9e4:
    ctx->pc = 0x16E9ECu;
}
