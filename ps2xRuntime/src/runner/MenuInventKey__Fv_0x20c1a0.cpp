#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuInventKey__Fv
// Address: 0x20c1a0 - 0x20c8bc
void MenuInventKey__Fv_0x20c1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuInventKey__Fv_0x20c1a0");
#endif

    switch (ctx->pc) {
        case 0x20c1a0u: goto label_20c1a0;
        case 0x20c1a4u: goto label_20c1a4;
        case 0x20c1a8u: goto label_20c1a8;
        case 0x20c1acu: goto label_20c1ac;
        case 0x20c1b0u: goto label_20c1b0;
        case 0x20c1b4u: goto label_20c1b4;
        case 0x20c1b8u: goto label_20c1b8;
        case 0x20c1bcu: goto label_20c1bc;
        case 0x20c1c0u: goto label_20c1c0;
        case 0x20c1c4u: goto label_20c1c4;
        case 0x20c1c8u: goto label_20c1c8;
        case 0x20c1ccu: goto label_20c1cc;
        case 0x20c1d0u: goto label_20c1d0;
        case 0x20c1d4u: goto label_20c1d4;
        case 0x20c1d8u: goto label_20c1d8;
        case 0x20c1dcu: goto label_20c1dc;
        case 0x20c1e0u: goto label_20c1e0;
        case 0x20c1e4u: goto label_20c1e4;
        case 0x20c1e8u: goto label_20c1e8;
        case 0x20c1ecu: goto label_20c1ec;
        case 0x20c1f0u: goto label_20c1f0;
        case 0x20c1f4u: goto label_20c1f4;
        case 0x20c1f8u: goto label_20c1f8;
        case 0x20c1fcu: goto label_20c1fc;
        case 0x20c200u: goto label_20c200;
        case 0x20c204u: goto label_20c204;
        case 0x20c208u: goto label_20c208;
        case 0x20c20cu: goto label_20c20c;
        case 0x20c210u: goto label_20c210;
        case 0x20c214u: goto label_20c214;
        case 0x20c218u: goto label_20c218;
        case 0x20c21cu: goto label_20c21c;
        case 0x20c220u: goto label_20c220;
        case 0x20c224u: goto label_20c224;
        case 0x20c228u: goto label_20c228;
        case 0x20c22cu: goto label_20c22c;
        case 0x20c230u: goto label_20c230;
        case 0x20c234u: goto label_20c234;
        case 0x20c238u: goto label_20c238;
        case 0x20c23cu: goto label_20c23c;
        case 0x20c240u: goto label_20c240;
        case 0x20c244u: goto label_20c244;
        case 0x20c248u: goto label_20c248;
        case 0x20c24cu: goto label_20c24c;
        case 0x20c250u: goto label_20c250;
        case 0x20c254u: goto label_20c254;
        case 0x20c258u: goto label_20c258;
        case 0x20c25cu: goto label_20c25c;
        case 0x20c260u: goto label_20c260;
        case 0x20c264u: goto label_20c264;
        case 0x20c268u: goto label_20c268;
        case 0x20c26cu: goto label_20c26c;
        case 0x20c270u: goto label_20c270;
        case 0x20c274u: goto label_20c274;
        case 0x20c278u: goto label_20c278;
        case 0x20c27cu: goto label_20c27c;
        case 0x20c280u: goto label_20c280;
        case 0x20c284u: goto label_20c284;
        case 0x20c288u: goto label_20c288;
        case 0x20c28cu: goto label_20c28c;
        case 0x20c290u: goto label_20c290;
        case 0x20c294u: goto label_20c294;
        case 0x20c298u: goto label_20c298;
        case 0x20c29cu: goto label_20c29c;
        case 0x20c2a0u: goto label_20c2a0;
        case 0x20c2a4u: goto label_20c2a4;
        case 0x20c2a8u: goto label_20c2a8;
        case 0x20c2acu: goto label_20c2ac;
        case 0x20c2b0u: goto label_20c2b0;
        case 0x20c2b4u: goto label_20c2b4;
        case 0x20c2b8u: goto label_20c2b8;
        case 0x20c2bcu: goto label_20c2bc;
        case 0x20c2c0u: goto label_20c2c0;
        case 0x20c2c4u: goto label_20c2c4;
        case 0x20c2c8u: goto label_20c2c8;
        case 0x20c2ccu: goto label_20c2cc;
        case 0x20c2d0u: goto label_20c2d0;
        case 0x20c2d4u: goto label_20c2d4;
        case 0x20c2d8u: goto label_20c2d8;
        case 0x20c2dcu: goto label_20c2dc;
        case 0x20c2e0u: goto label_20c2e0;
        case 0x20c2e4u: goto label_20c2e4;
        case 0x20c2e8u: goto label_20c2e8;
        case 0x20c2ecu: goto label_20c2ec;
        case 0x20c2f0u: goto label_20c2f0;
        case 0x20c2f4u: goto label_20c2f4;
        case 0x20c2f8u: goto label_20c2f8;
        case 0x20c2fcu: goto label_20c2fc;
        case 0x20c300u: goto label_20c300;
        case 0x20c304u: goto label_20c304;
        case 0x20c308u: goto label_20c308;
        case 0x20c30cu: goto label_20c30c;
        case 0x20c310u: goto label_20c310;
        case 0x20c314u: goto label_20c314;
        case 0x20c318u: goto label_20c318;
        case 0x20c31cu: goto label_20c31c;
        case 0x20c320u: goto label_20c320;
        case 0x20c324u: goto label_20c324;
        case 0x20c328u: goto label_20c328;
        case 0x20c32cu: goto label_20c32c;
        case 0x20c330u: goto label_20c330;
        case 0x20c334u: goto label_20c334;
        case 0x20c338u: goto label_20c338;
        case 0x20c33cu: goto label_20c33c;
        case 0x20c340u: goto label_20c340;
        case 0x20c344u: goto label_20c344;
        case 0x20c348u: goto label_20c348;
        case 0x20c34cu: goto label_20c34c;
        case 0x20c350u: goto label_20c350;
        case 0x20c354u: goto label_20c354;
        case 0x20c358u: goto label_20c358;
        case 0x20c35cu: goto label_20c35c;
        case 0x20c360u: goto label_20c360;
        case 0x20c364u: goto label_20c364;
        case 0x20c368u: goto label_20c368;
        case 0x20c36cu: goto label_20c36c;
        case 0x20c370u: goto label_20c370;
        case 0x20c374u: goto label_20c374;
        case 0x20c378u: goto label_20c378;
        case 0x20c37cu: goto label_20c37c;
        case 0x20c380u: goto label_20c380;
        case 0x20c384u: goto label_20c384;
        case 0x20c388u: goto label_20c388;
        case 0x20c38cu: goto label_20c38c;
        case 0x20c390u: goto label_20c390;
        case 0x20c394u: goto label_20c394;
        case 0x20c398u: goto label_20c398;
        case 0x20c39cu: goto label_20c39c;
        case 0x20c3a0u: goto label_20c3a0;
        case 0x20c3a4u: goto label_20c3a4;
        case 0x20c3a8u: goto label_20c3a8;
        case 0x20c3acu: goto label_20c3ac;
        case 0x20c3b0u: goto label_20c3b0;
        case 0x20c3b4u: goto label_20c3b4;
        case 0x20c3b8u: goto label_20c3b8;
        case 0x20c3bcu: goto label_20c3bc;
        case 0x20c3c0u: goto label_20c3c0;
        case 0x20c3c4u: goto label_20c3c4;
        case 0x20c3c8u: goto label_20c3c8;
        case 0x20c3ccu: goto label_20c3cc;
        case 0x20c3d0u: goto label_20c3d0;
        case 0x20c3d4u: goto label_20c3d4;
        case 0x20c3d8u: goto label_20c3d8;
        case 0x20c3dcu: goto label_20c3dc;
        case 0x20c3e0u: goto label_20c3e0;
        case 0x20c3e4u: goto label_20c3e4;
        case 0x20c3e8u: goto label_20c3e8;
        case 0x20c3ecu: goto label_20c3ec;
        case 0x20c3f0u: goto label_20c3f0;
        case 0x20c3f4u: goto label_20c3f4;
        case 0x20c3f8u: goto label_20c3f8;
        case 0x20c3fcu: goto label_20c3fc;
        case 0x20c400u: goto label_20c400;
        case 0x20c404u: goto label_20c404;
        case 0x20c408u: goto label_20c408;
        case 0x20c40cu: goto label_20c40c;
        case 0x20c410u: goto label_20c410;
        case 0x20c414u: goto label_20c414;
        case 0x20c418u: goto label_20c418;
        case 0x20c41cu: goto label_20c41c;
        case 0x20c420u: goto label_20c420;
        case 0x20c424u: goto label_20c424;
        case 0x20c428u: goto label_20c428;
        case 0x20c42cu: goto label_20c42c;
        case 0x20c430u: goto label_20c430;
        case 0x20c434u: goto label_20c434;
        case 0x20c438u: goto label_20c438;
        case 0x20c43cu: goto label_20c43c;
        case 0x20c440u: goto label_20c440;
        case 0x20c444u: goto label_20c444;
        case 0x20c448u: goto label_20c448;
        case 0x20c44cu: goto label_20c44c;
        case 0x20c450u: goto label_20c450;
        case 0x20c454u: goto label_20c454;
        case 0x20c458u: goto label_20c458;
        case 0x20c45cu: goto label_20c45c;
        case 0x20c460u: goto label_20c460;
        case 0x20c464u: goto label_20c464;
        case 0x20c468u: goto label_20c468;
        case 0x20c46cu: goto label_20c46c;
        case 0x20c470u: goto label_20c470;
        case 0x20c474u: goto label_20c474;
        case 0x20c478u: goto label_20c478;
        case 0x20c47cu: goto label_20c47c;
        case 0x20c480u: goto label_20c480;
        case 0x20c484u: goto label_20c484;
        case 0x20c488u: goto label_20c488;
        case 0x20c48cu: goto label_20c48c;
        case 0x20c490u: goto label_20c490;
        case 0x20c494u: goto label_20c494;
        case 0x20c498u: goto label_20c498;
        case 0x20c49cu: goto label_20c49c;
        case 0x20c4a0u: goto label_20c4a0;
        case 0x20c4a4u: goto label_20c4a4;
        case 0x20c4a8u: goto label_20c4a8;
        case 0x20c4acu: goto label_20c4ac;
        case 0x20c4b0u: goto label_20c4b0;
        case 0x20c4b4u: goto label_20c4b4;
        case 0x20c4b8u: goto label_20c4b8;
        case 0x20c4bcu: goto label_20c4bc;
        case 0x20c4c0u: goto label_20c4c0;
        case 0x20c4c4u: goto label_20c4c4;
        case 0x20c4c8u: goto label_20c4c8;
        case 0x20c4ccu: goto label_20c4cc;
        case 0x20c4d0u: goto label_20c4d0;
        case 0x20c4d4u: goto label_20c4d4;
        case 0x20c4d8u: goto label_20c4d8;
        case 0x20c4dcu: goto label_20c4dc;
        case 0x20c4e0u: goto label_20c4e0;
        case 0x20c4e4u: goto label_20c4e4;
        case 0x20c4e8u: goto label_20c4e8;
        case 0x20c4ecu: goto label_20c4ec;
        case 0x20c4f0u: goto label_20c4f0;
        case 0x20c4f4u: goto label_20c4f4;
        case 0x20c4f8u: goto label_20c4f8;
        case 0x20c4fcu: goto label_20c4fc;
        case 0x20c500u: goto label_20c500;
        case 0x20c504u: goto label_20c504;
        case 0x20c508u: goto label_20c508;
        case 0x20c50cu: goto label_20c50c;
        case 0x20c510u: goto label_20c510;
        case 0x20c514u: goto label_20c514;
        case 0x20c518u: goto label_20c518;
        case 0x20c51cu: goto label_20c51c;
        case 0x20c520u: goto label_20c520;
        case 0x20c524u: goto label_20c524;
        case 0x20c528u: goto label_20c528;
        case 0x20c52cu: goto label_20c52c;
        case 0x20c530u: goto label_20c530;
        case 0x20c534u: goto label_20c534;
        case 0x20c538u: goto label_20c538;
        case 0x20c53cu: goto label_20c53c;
        case 0x20c540u: goto label_20c540;
        case 0x20c544u: goto label_20c544;
        case 0x20c548u: goto label_20c548;
        case 0x20c54cu: goto label_20c54c;
        case 0x20c550u: goto label_20c550;
        case 0x20c554u: goto label_20c554;
        case 0x20c558u: goto label_20c558;
        case 0x20c55cu: goto label_20c55c;
        case 0x20c560u: goto label_20c560;
        case 0x20c564u: goto label_20c564;
        case 0x20c568u: goto label_20c568;
        case 0x20c56cu: goto label_20c56c;
        case 0x20c570u: goto label_20c570;
        case 0x20c574u: goto label_20c574;
        case 0x20c578u: goto label_20c578;
        case 0x20c57cu: goto label_20c57c;
        case 0x20c580u: goto label_20c580;
        case 0x20c584u: goto label_20c584;
        case 0x20c588u: goto label_20c588;
        case 0x20c58cu: goto label_20c58c;
        case 0x20c590u: goto label_20c590;
        case 0x20c594u: goto label_20c594;
        case 0x20c598u: goto label_20c598;
        case 0x20c59cu: goto label_20c59c;
        case 0x20c5a0u: goto label_20c5a0;
        case 0x20c5a4u: goto label_20c5a4;
        case 0x20c5a8u: goto label_20c5a8;
        case 0x20c5acu: goto label_20c5ac;
        case 0x20c5b0u: goto label_20c5b0;
        case 0x20c5b4u: goto label_20c5b4;
        case 0x20c5b8u: goto label_20c5b8;
        case 0x20c5bcu: goto label_20c5bc;
        case 0x20c5c0u: goto label_20c5c0;
        case 0x20c5c4u: goto label_20c5c4;
        case 0x20c5c8u: goto label_20c5c8;
        case 0x20c5ccu: goto label_20c5cc;
        case 0x20c5d0u: goto label_20c5d0;
        case 0x20c5d4u: goto label_20c5d4;
        case 0x20c5d8u: goto label_20c5d8;
        case 0x20c5dcu: goto label_20c5dc;
        case 0x20c5e0u: goto label_20c5e0;
        case 0x20c5e4u: goto label_20c5e4;
        case 0x20c5e8u: goto label_20c5e8;
        case 0x20c5ecu: goto label_20c5ec;
        case 0x20c5f0u: goto label_20c5f0;
        case 0x20c5f4u: goto label_20c5f4;
        case 0x20c5f8u: goto label_20c5f8;
        case 0x20c5fcu: goto label_20c5fc;
        case 0x20c600u: goto label_20c600;
        case 0x20c604u: goto label_20c604;
        case 0x20c608u: goto label_20c608;
        case 0x20c60cu: goto label_20c60c;
        case 0x20c610u: goto label_20c610;
        case 0x20c614u: goto label_20c614;
        case 0x20c618u: goto label_20c618;
        case 0x20c61cu: goto label_20c61c;
        case 0x20c620u: goto label_20c620;
        case 0x20c624u: goto label_20c624;
        case 0x20c628u: goto label_20c628;
        case 0x20c62cu: goto label_20c62c;
        case 0x20c630u: goto label_20c630;
        case 0x20c634u: goto label_20c634;
        case 0x20c638u: goto label_20c638;
        case 0x20c63cu: goto label_20c63c;
        case 0x20c640u: goto label_20c640;
        case 0x20c644u: goto label_20c644;
        case 0x20c648u: goto label_20c648;
        case 0x20c64cu: goto label_20c64c;
        case 0x20c650u: goto label_20c650;
        case 0x20c654u: goto label_20c654;
        case 0x20c658u: goto label_20c658;
        case 0x20c65cu: goto label_20c65c;
        case 0x20c660u: goto label_20c660;
        case 0x20c664u: goto label_20c664;
        case 0x20c668u: goto label_20c668;
        case 0x20c66cu: goto label_20c66c;
        case 0x20c670u: goto label_20c670;
        case 0x20c674u: goto label_20c674;
        case 0x20c678u: goto label_20c678;
        case 0x20c67cu: goto label_20c67c;
        case 0x20c680u: goto label_20c680;
        case 0x20c684u: goto label_20c684;
        case 0x20c688u: goto label_20c688;
        case 0x20c68cu: goto label_20c68c;
        case 0x20c690u: goto label_20c690;
        case 0x20c694u: goto label_20c694;
        case 0x20c698u: goto label_20c698;
        case 0x20c69cu: goto label_20c69c;
        case 0x20c6a0u: goto label_20c6a0;
        case 0x20c6a4u: goto label_20c6a4;
        case 0x20c6a8u: goto label_20c6a8;
        case 0x20c6acu: goto label_20c6ac;
        case 0x20c6b0u: goto label_20c6b0;
        case 0x20c6b4u: goto label_20c6b4;
        case 0x20c6b8u: goto label_20c6b8;
        case 0x20c6bcu: goto label_20c6bc;
        case 0x20c6c0u: goto label_20c6c0;
        case 0x20c6c4u: goto label_20c6c4;
        case 0x20c6c8u: goto label_20c6c8;
        case 0x20c6ccu: goto label_20c6cc;
        case 0x20c6d0u: goto label_20c6d0;
        case 0x20c6d4u: goto label_20c6d4;
        case 0x20c6d8u: goto label_20c6d8;
        case 0x20c6dcu: goto label_20c6dc;
        case 0x20c6e0u: goto label_20c6e0;
        case 0x20c6e4u: goto label_20c6e4;
        case 0x20c6e8u: goto label_20c6e8;
        case 0x20c6ecu: goto label_20c6ec;
        case 0x20c6f0u: goto label_20c6f0;
        case 0x20c6f4u: goto label_20c6f4;
        case 0x20c6f8u: goto label_20c6f8;
        case 0x20c6fcu: goto label_20c6fc;
        case 0x20c700u: goto label_20c700;
        case 0x20c704u: goto label_20c704;
        case 0x20c708u: goto label_20c708;
        case 0x20c70cu: goto label_20c70c;
        case 0x20c710u: goto label_20c710;
        case 0x20c714u: goto label_20c714;
        case 0x20c718u: goto label_20c718;
        case 0x20c71cu: goto label_20c71c;
        case 0x20c720u: goto label_20c720;
        case 0x20c724u: goto label_20c724;
        case 0x20c728u: goto label_20c728;
        case 0x20c72cu: goto label_20c72c;
        case 0x20c730u: goto label_20c730;
        case 0x20c734u: goto label_20c734;
        case 0x20c738u: goto label_20c738;
        case 0x20c73cu: goto label_20c73c;
        case 0x20c740u: goto label_20c740;
        case 0x20c744u: goto label_20c744;
        case 0x20c748u: goto label_20c748;
        case 0x20c74cu: goto label_20c74c;
        case 0x20c750u: goto label_20c750;
        case 0x20c754u: goto label_20c754;
        case 0x20c758u: goto label_20c758;
        case 0x20c75cu: goto label_20c75c;
        case 0x20c760u: goto label_20c760;
        case 0x20c764u: goto label_20c764;
        case 0x20c768u: goto label_20c768;
        case 0x20c76cu: goto label_20c76c;
        case 0x20c770u: goto label_20c770;
        case 0x20c774u: goto label_20c774;
        case 0x20c778u: goto label_20c778;
        case 0x20c77cu: goto label_20c77c;
        case 0x20c780u: goto label_20c780;
        case 0x20c784u: goto label_20c784;
        case 0x20c788u: goto label_20c788;
        case 0x20c78cu: goto label_20c78c;
        case 0x20c790u: goto label_20c790;
        case 0x20c794u: goto label_20c794;
        case 0x20c798u: goto label_20c798;
        case 0x20c79cu: goto label_20c79c;
        case 0x20c7a0u: goto label_20c7a0;
        case 0x20c7a4u: goto label_20c7a4;
        case 0x20c7a8u: goto label_20c7a8;
        case 0x20c7acu: goto label_20c7ac;
        case 0x20c7b0u: goto label_20c7b0;
        case 0x20c7b4u: goto label_20c7b4;
        case 0x20c7b8u: goto label_20c7b8;
        case 0x20c7bcu: goto label_20c7bc;
        case 0x20c7c0u: goto label_20c7c0;
        case 0x20c7c4u: goto label_20c7c4;
        case 0x20c7c8u: goto label_20c7c8;
        case 0x20c7ccu: goto label_20c7cc;
        case 0x20c7d0u: goto label_20c7d0;
        case 0x20c7d4u: goto label_20c7d4;
        case 0x20c7d8u: goto label_20c7d8;
        case 0x20c7dcu: goto label_20c7dc;
        case 0x20c7e0u: goto label_20c7e0;
        case 0x20c7e4u: goto label_20c7e4;
        case 0x20c7e8u: goto label_20c7e8;
        case 0x20c7ecu: goto label_20c7ec;
        case 0x20c7f0u: goto label_20c7f0;
        case 0x20c7f4u: goto label_20c7f4;
        case 0x20c7f8u: goto label_20c7f8;
        case 0x20c7fcu: goto label_20c7fc;
        case 0x20c800u: goto label_20c800;
        case 0x20c804u: goto label_20c804;
        case 0x20c808u: goto label_20c808;
        case 0x20c80cu: goto label_20c80c;
        case 0x20c810u: goto label_20c810;
        case 0x20c814u: goto label_20c814;
        case 0x20c818u: goto label_20c818;
        case 0x20c81cu: goto label_20c81c;
        case 0x20c820u: goto label_20c820;
        case 0x20c824u: goto label_20c824;
        case 0x20c828u: goto label_20c828;
        case 0x20c82cu: goto label_20c82c;
        case 0x20c830u: goto label_20c830;
        case 0x20c834u: goto label_20c834;
        case 0x20c838u: goto label_20c838;
        case 0x20c83cu: goto label_20c83c;
        case 0x20c840u: goto label_20c840;
        case 0x20c844u: goto label_20c844;
        case 0x20c848u: goto label_20c848;
        case 0x20c84cu: goto label_20c84c;
        case 0x20c850u: goto label_20c850;
        case 0x20c854u: goto label_20c854;
        case 0x20c858u: goto label_20c858;
        case 0x20c85cu: goto label_20c85c;
        case 0x20c860u: goto label_20c860;
        case 0x20c864u: goto label_20c864;
        case 0x20c868u: goto label_20c868;
        case 0x20c86cu: goto label_20c86c;
        case 0x20c870u: goto label_20c870;
        case 0x20c874u: goto label_20c874;
        case 0x20c878u: goto label_20c878;
        case 0x20c87cu: goto label_20c87c;
        case 0x20c880u: goto label_20c880;
        case 0x20c884u: goto label_20c884;
        case 0x20c888u: goto label_20c888;
        case 0x20c88cu: goto label_20c88c;
        case 0x20c890u: goto label_20c890;
        case 0x20c894u: goto label_20c894;
        case 0x20c898u: goto label_20c898;
        case 0x20c89cu: goto label_20c89c;
        case 0x20c8a0u: goto label_20c8a0;
        case 0x20c8a4u: goto label_20c8a4;
        case 0x20c8a8u: goto label_20c8a8;
        case 0x20c8acu: goto label_20c8ac;
        case 0x20c8b0u: goto label_20c8b0;
        case 0x20c8b4u: goto label_20c8b4;
        case 0x20c8b8u: goto label_20c8b8;
        default: break;
    }

    ctx->pc = 0x20c1a0u;

label_20c1a0:
    // 0x20c1a0: 0x27bdfe20  addiu       $sp, $sp, -0x1E0
    ctx->pc = 0x20c1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966816));
label_20c1a4:
    // 0x20c1a4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x20c1a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_20c1a8:
    // 0x20c1a8: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x20c1a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_20c1ac:
    // 0x20c1ac: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x20c1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_20c1b0:
    // 0x20c1b0: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x20c1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_20c1b4:
    // 0x20c1b4: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x20c1b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_20c1b8:
    // 0x20c1b8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x20c1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_20c1bc:
    // 0x20c1bc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x20c1bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_20c1c0:
    // 0x20c1c0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x20c1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_20c1c4:
    // 0x20c1c4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20c1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_20c1c8:
    // 0x20c1c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20c1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_20c1cc:
    // 0x20c1cc: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x20c1ccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_20c1d0:
    // 0x20c1d0: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x20c1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_20c1d4:
    // 0x20c1d4: 0xc08f80c  jal         func_23E030
label_20c1d8:
    if (ctx->pc == 0x20C1D8u) {
        ctx->pc = 0x20C1D8u;
            // 0x20c1d8: 0xafa000b0  sw          $zero, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
        ctx->pc = 0x20C1DCu;
        goto label_20c1dc;
    }
    ctx->pc = 0x20C1D4u;
    SET_GPR_U32(ctx, 31, 0x20C1DCu);
    ctx->pc = 0x20C1D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C1D4u;
            // 0x20c1d8: 0xafa000b0  sw          $zero, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E030u;
    if (runtime->hasFunction(0x23E030u)) {
        auto targetFn = runtime->lookupFunction(0x23E030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C1DCu; }
        if (ctx->pc != 0x20C1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckSelectKey__12CMenuKeyFuncFv_0x23e030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C1DCu; }
        if (ctx->pc != 0x20C1DCu) { return; }
    }
    ctx->pc = 0x20C1DCu;
label_20c1dc:
    // 0x20c1dc: 0xc08f840  jal         func_23E100
label_20c1e0:
    if (ctx->pc == 0x20C1E0u) {
        ctx->pc = 0x20C1E0u;
            // 0x20c1e0: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->pc = 0x20C1E4u;
        goto label_20c1e4;
    }
    ctx->pc = 0x20C1DCu;
    SET_GPR_U32(ctx, 31, 0x20C1E4u);
    ctx->pc = 0x20C1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C1DCu;
            // 0x20c1e0: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E100u;
    if (runtime->hasFunction(0x23E100u)) {
        auto targetFn = runtime->lookupFunction(0x23E100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C1E4u; }
        if (ctx->pc != 0x20C1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLRKey__12CMenuKeyFuncFv_0x23e100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C1E4u; }
        if (ctx->pc != 0x20C1E4u) { return; }
    }
    ctx->pc = 0x20C1E4u;
label_20c1e4:
    // 0x20c1e4: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x20c1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_20c1e8:
    // 0x20c1e8: 0xc08f8c8  jal         func_23E320
label_20c1ec:
    if (ctx->pc == 0x20C1ECu) {
        ctx->pc = 0x20C1ECu;
            // 0x20c1ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20C1F0u;
        goto label_20c1f0;
    }
    ctx->pc = 0x20C1E8u;
    SET_GPR_U32(ctx, 31, 0x20C1F0u);
    ctx->pc = 0x20C1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C1E8u;
            // 0x20c1ec: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E320u;
    if (runtime->hasFunction(0x23E320u)) {
        auto targetFn = runtime->lookupFunction(0x23E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C1F0u; }
        if (ctx->pc != 0x20C1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckPushButton__12CMenuKeyFuncFv_0x23e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C1F0u; }
        if (ctx->pc != 0x20C1F0u) { return; }
    }
    ctx->pc = 0x20C1F0u;
label_20c1f0:
    // 0x20c1f0: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x20c1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_20c1f4:
    // 0x20c1f4: 0xc08f91c  jal         func_23E470
label_20c1f8:
    if (ctx->pc == 0x20C1F8u) {
        ctx->pc = 0x20C1F8u;
            // 0x20c1f8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20C1FCu;
        goto label_20c1fc;
    }
    ctx->pc = 0x20C1F4u;
    SET_GPR_U32(ctx, 31, 0x20C1FCu);
    ctx->pc = 0x20C1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C1F4u;
            // 0x20c1f8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E470u;
    if (runtime->hasFunction(0x23E470u)) {
        auto targetFn = runtime->lookupFunction(0x23E470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C1FCu; }
        if (ctx->pc != 0x20C1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckKeyInput__12CMenuKeyFuncFv_0x23e470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C1FCu; }
        if (ctx->pc != 0x20C1FCu) { return; }
    }
    ctx->pc = 0x20C1FCu;
label_20c1fc:
    // 0x20c1fc: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20c1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20c200:
    // 0x20c200: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x20c200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_20c204:
    // 0x20c204: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x20c204u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_20c208:
    // 0x20c208: 0x10620050  beq         $v1, $v0, . + 4 + (0x50 << 2)
label_20c20c:
    if (ctx->pc == 0x20C20Cu) {
        ctx->pc = 0x20C20Cu;
            // 0x20c20c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20C210u;
        goto label_20c210;
    }
    ctx->pc = 0x20C208u;
    {
        const bool branch_taken_0x20c208 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C208u;
            // 0x20c20c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c208) {
            ctx->pc = 0x20C34Cu;
            goto label_20c34c;
        }
    }
    ctx->pc = 0x20C210u;
label_20c210:
    // 0x20c210: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x20c210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_20c214:
    // 0x20c214: 0x10620049  beq         $v1, $v0, . + 4 + (0x49 << 2)
label_20c218:
    if (ctx->pc == 0x20C218u) {
        ctx->pc = 0x20C21Cu;
        goto label_20c21c;
    }
    ctx->pc = 0x20C214u;
    {
        const bool branch_taken_0x20c214 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x20c214) {
            ctx->pc = 0x20C33Cu;
            goto label_20c33c;
        }
    }
    ctx->pc = 0x20C21Cu;
label_20c21c:
    // 0x20c21c: 0x1060003c  beqz        $v1, . + 4 + (0x3C << 2)
label_20c220:
    if (ctx->pc == 0x20C220u) {
        ctx->pc = 0x20C220u;
            // 0x20c220: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x20C224u;
        goto label_20c224;
    }
    ctx->pc = 0x20C21Cu;
    {
        const bool branch_taken_0x20c21c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C21Cu;
            // 0x20c220: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c21c) {
            ctx->pc = 0x20C310u;
            goto label_20c310;
        }
    }
    ctx->pc = 0x20C224u;
label_20c224:
    // 0x20c224: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
label_20c228:
    if (ctx->pc == 0x20C228u) {
        ctx->pc = 0x20C228u;
            // 0x20c228: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20C22Cu;
        goto label_20c22c;
    }
    ctx->pc = 0x20C224u;
    {
        const bool branch_taken_0x20c224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C224u;
            // 0x20c228: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c224) {
            ctx->pc = 0x20C290u;
            goto label_20c290;
        }
    }
    ctx->pc = 0x20C22Cu;
label_20c22c:
    // 0x20c22c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_20c230:
    if (ctx->pc == 0x20C230u) {
        ctx->pc = 0x20C234u;
        goto label_20c234;
    }
    ctx->pc = 0x20C22Cu;
    {
        const bool branch_taken_0x20c22c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x20c22c) {
            ctx->pc = 0x20C23Cu;
            goto label_20c23c;
        }
    }
    ctx->pc = 0x20C234u;
label_20c234:
    // 0x20c234: 0x10000049  b           . + 4 + (0x49 << 2)
label_20c238:
    if (ctx->pc == 0x20C238u) {
        ctx->pc = 0x20C238u;
            // 0x20c238: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20C23Cu;
        goto label_20c23c;
    }
    ctx->pc = 0x20C234u;
    {
        const bool branch_taken_0x20c234 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C234u;
            // 0x20c238: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c234) {
            ctx->pc = 0x20C35Cu;
            goto label_20c35c;
        }
    }
    ctx->pc = 0x20C23Cu;
label_20c23c:
    // 0x20c23c: 0xc05239c  jal         func_148E70
label_20c240:
    if (ctx->pc == 0x20C240u) {
        ctx->pc = 0x20C244u;
        goto label_20c244;
    }
    ctx->pc = 0x20C23Cu;
    SET_GPR_U32(ctx, 31, 0x20C244u);
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C244u; }
        if (ctx->pc != 0x20C244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C244u; }
        if (ctx->pc != 0x20C244u) { return; }
    }
    ctx->pc = 0x20C244u;
label_20c244:
    // 0x20c244: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
label_20c248:
    if (ctx->pc == 0x20C248u) {
        ctx->pc = 0x20C24Cu;
        goto label_20c24c;
    }
    ctx->pc = 0x20C244u;
    {
        const bool branch_taken_0x20c244 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c244) {
            ctx->pc = 0x20C364u;
            goto label_20c364;
        }
    }
    ctx->pc = 0x20C24Cu;
label_20c24c:
    // 0x20c24c: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20c24cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20c250:
    // 0x20c250: 0x90820004  lbu         $v0, 0x4($a0)
    ctx->pc = 0x20c250u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
label_20c254:
    // 0x20c254: 0x14400043  bnez        $v0, . + 4 + (0x43 << 2)
label_20c258:
    if (ctx->pc == 0x20C258u) {
        ctx->pc = 0x20C25Cu;
        goto label_20c25c;
    }
    ctx->pc = 0x20C254u;
    {
        const bool branch_taken_0x20c254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c254) {
            ctx->pc = 0x20C364u;
            goto label_20c364;
        }
    }
    ctx->pc = 0x20C25Cu;
label_20c25c:
    // 0x20c25c: 0x8c99010c  lw          $t9, 0x10C($a0)
    ctx->pc = 0x20c25cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
label_20c260:
    // 0x20c260: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x20c260u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_20c264:
    // 0x20c264: 0x320f809  jalr        $t9
label_20c268:
    if (ctx->pc == 0x20C268u) {
        ctx->pc = 0x20C26Cu;
        goto label_20c26c;
    }
    ctx->pc = 0x20C264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20C26Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x20C26Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20C26Cu; }
            if (ctx->pc != 0x20C26Cu) { return; }
        }
        }
    }
    ctx->pc = 0x20C26Cu;
label_20c26c:
    // 0x20c26c: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20c26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20c270:
    // 0x20c270: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x20c270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c274:
    // 0x20c274: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x20c274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_20c278:
    // 0x20c278: 0xa4400000  sh          $zero, 0x0($v0)
    ctx->pc = 0x20c278u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 0));
label_20c27c:
    // 0x20c27c: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20c27cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20c280:
    // 0x20c280: 0xa0440004  sb          $a0, 0x4($v0)
    ctx->pc = 0x20c280u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4), (uint8_t)GPR_U32(ctx, 4));
label_20c284:
    // 0x20c284: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20c284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20c288:
    // 0x20c288: 0x10000036  b           . + 4 + (0x36 << 2)
label_20c28c:
    if (ctx->pc == 0x20C28Cu) {
        ctx->pc = 0x20C28Cu;
            // 0x20c28c: 0xac430010  sw          $v1, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
        ctx->pc = 0x20C290u;
        goto label_20c290;
    }
    ctx->pc = 0x20C288u;
    {
        const bool branch_taken_0x20c288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C288u;
            // 0x20c28c: 0xac430010  sw          $v1, 0x10($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c288) {
            ctx->pc = 0x20C364u;
            goto label_20c364;
        }
    }
    ctx->pc = 0x20C290u;
label_20c290:
    // 0x20c290: 0x84820110  lh          $v0, 0x110($a0)
    ctx->pc = 0x20c290u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 272)));
label_20c294:
    // 0x20c294: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_20c298:
    if (ctx->pc == 0x20C298u) {
        ctx->pc = 0x20C29Cu;
        goto label_20c29c;
    }
    ctx->pc = 0x20C294u;
    {
        const bool branch_taken_0x20c294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c294) {
            ctx->pc = 0x20C2ACu;
            goto label_20c2ac;
        }
    }
    ctx->pc = 0x20C29Cu;
label_20c29c:
    // 0x20c29c: 0xc088ff8  jal         func_223FE0
label_20c2a0:
    if (ctx->pc == 0x20C2A0u) {
        ctx->pc = 0x20C2A4u;
        goto label_20c2a4;
    }
    ctx->pc = 0x20C29Cu;
    SET_GPR_U32(ctx, 31, 0x20C2A4u);
    ctx->pc = 0x223FE0u;
    if (runtime->hasFunction(0x223FE0u)) {
        auto targetFn = runtime->lookupFunction(0x223FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C2A4u; }
        if (ctx->pc != 0x20C2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainFrameEndFlag__Fv_0x223fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C2A4u; }
        if (ctx->pc != 0x20C2A4u) { return; }
    }
    ctx->pc = 0x20C2A4u;
label_20c2a4:
    // 0x20c2a4: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_20c2a8:
    if (ctx->pc == 0x20C2A8u) {
        ctx->pc = 0x20C2ACu;
        goto label_20c2ac;
    }
    ctx->pc = 0x20C2A4u;
    {
        const bool branch_taken_0x20c2a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c2a4) {
            ctx->pc = 0x20C2D8u;
            goto label_20c2d8;
        }
    }
    ctx->pc = 0x20C2ACu;
label_20c2ac:
    // 0x20c2ac: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20c2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20c2b0:
    // 0x20c2b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c2b4:
    // 0x20c2b4: 0x84830110  lh          $v1, 0x110($a0)
    ctx->pc = 0x20c2b4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 272)));
label_20c2b8:
    // 0x20c2b8: 0x1462002a  bne         $v1, $v0, . + 4 + (0x2A << 2)
label_20c2bc:
    if (ctx->pc == 0x20C2BCu) {
        ctx->pc = 0x20C2C0u;
        goto label_20c2c0;
    }
    ctx->pc = 0x20C2B8u;
    {
        const bool branch_taken_0x20c2b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20c2b8) {
            ctx->pc = 0x20C364u;
            goto label_20c364;
        }
    }
    ctx->pc = 0x20C2C0u;
label_20c2c0:
    // 0x20c2c0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x20c2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_20c2c4:
    // 0x20c2c4: 0x2405fff8  addiu       $a1, $zero, -0x8
    ctx->pc = 0x20c2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
label_20c2c8:
    // 0x20c2c8: 0xc094558  jal         func_251560
label_20c2cc:
    if (ctx->pc == 0x20C2CCu) {
        ctx->pc = 0x20C2CCu;
            // 0x20c2cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20C2D0u;
        goto label_20c2d0;
    }
    ctx->pc = 0x20C2C8u;
    SET_GPR_U32(ctx, 31, 0x20C2D0u);
    ctx->pc = 0x20C2CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C2C8u;
            // 0x20c2cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251560u;
    if (runtime->hasFunction(0x251560u)) {
        auto targetFn = runtime->lookupFunction(0x251560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C2D0u; }
        if (ctx->pc != 0x20C2D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPiii_0x251560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C2D0u; }
        if (ctx->pc != 0x20C2D0u) { return; }
    }
    ctx->pc = 0x20C2D0u;
label_20c2d0:
    // 0x20c2d0: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_20c2d4:
    if (ctx->pc == 0x20C2D4u) {
        ctx->pc = 0x20C2D8u;
        goto label_20c2d8;
    }
    ctx->pc = 0x20C2D0u;
    {
        const bool branch_taken_0x20c2d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c2d0) {
            ctx->pc = 0x20C364u;
            goto label_20c364;
        }
    }
    ctx->pc = 0x20C2D8u;
label_20c2d8:
    // 0x20c2d8: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20c2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20c2dc:
    // 0x20c2dc: 0x8c99010c  lw          $t9, 0x10C($a0)
    ctx->pc = 0x20c2dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 268)));
label_20c2e0:
    // 0x20c2e0: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x20c2e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_20c2e4:
    // 0x20c2e4: 0x320f809  jalr        $t9
label_20c2e8:
    if (ctx->pc == 0x20C2E8u) {
        ctx->pc = 0x20C2ECu;
        goto label_20c2ec;
    }
    ctx->pc = 0x20C2E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20C2ECu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x20C2ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20C2ECu; }
            if (ctx->pc != 0x20C2ECu) { return; }
        }
        }
    }
    ctx->pc = 0x20C2ECu;
label_20c2ec:
    // 0x20c2ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c2f0:
    // 0x20c2f0: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x20c2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_20c2f4:
    // 0x20c2f4: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20c2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20c2f8:
    // 0x20c2f8: 0x84430110  lh          $v1, 0x110($v0)
    ctx->pc = 0x20c2f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 272)));
label_20c2fc:
    // 0x20c2fc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x20c2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_20c300:
    // 0x20c300: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
label_20c304:
    if (ctx->pc == 0x20C304u) {
        ctx->pc = 0x20C304u;
            // 0x20c304: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x20C308u;
        goto label_20c308;
    }
    ctx->pc = 0x20C300u;
    {
        const bool branch_taken_0x20c300 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20C304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C300u;
            // 0x20c304: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c300) {
            ctx->pc = 0x20C364u;
            goto label_20c364;
        }
    }
    ctx->pc = 0x20C308u;
label_20c308:
    // 0x20c308: 0x10000016  b           . + 4 + (0x16 << 2)
label_20c30c:
    if (ctx->pc == 0x20C30Cu) {
        ctx->pc = 0x20C30Cu;
            // 0x20c30c: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x20C310u;
        goto label_20c310;
    }
    ctx->pc = 0x20C308u;
    {
        const bool branch_taken_0x20c308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C308u;
            // 0x20c30c: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c308) {
            ctx->pc = 0x20C364u;
            goto label_20c364;
        }
    }
    ctx->pc = 0x20C310u;
label_20c310:
    // 0x20c310: 0xc087940  jal         func_21E500
label_20c314:
    if (ctx->pc == 0x20C314u) {
        ctx->pc = 0x20C314u;
            // 0x20c314: 0x8f849510  lw          $a0, -0x6AF0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939920)));
        ctx->pc = 0x20C318u;
        goto label_20c318;
    }
    ctx->pc = 0x20C310u;
    SET_GPR_U32(ctx, 31, 0x20C318u);
    ctx->pc = 0x20C314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C310u;
            // 0x20c314: 0x8f849510  lw          $a0, -0x6AF0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939920)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E500u;
    if (runtime->hasFunction(0x21E500u)) {
        auto targetFn = runtime->lookupFunction(0x21E500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C318u; }
        if (ctx->pc != 0x20C318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckMove__13CMenuMoveItemFv_0x21e500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C318u; }
        if (ctx->pc != 0x20C318u) { return; }
    }
    ctx->pc = 0x20C318u;
label_20c318:
    // 0x20c318: 0x8f829510  lw          $v0, -0x6AF0($gp)
    ctx->pc = 0x20c318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939920)));
label_20c31c:
    // 0x20c31c: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x20c31cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_20c320:
    // 0x20c320: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_20c324:
    if (ctx->pc == 0x20C324u) {
        ctx->pc = 0x20C324u;
            // 0x20c324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20C328u;
        goto label_20c328;
    }
    ctx->pc = 0x20C320u;
    {
        const bool branch_taken_0x20c320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C320u;
            // 0x20c324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c320) {
            ctx->pc = 0x20C32Cu;
            goto label_20c32c;
        }
    }
    ctx->pc = 0x20C328u;
label_20c328:
    // 0x20c328: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x20c328u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c32c:
    // 0x20c32c: 0xc082b1c  jal         func_20AC70
label_20c330:
    if (ctx->pc == 0x20C330u) {
        ctx->pc = 0x20C330u;
            // 0x20c330: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20C334u;
        goto label_20c334;
    }
    ctx->pc = 0x20C32Cu;
    SET_GPR_U32(ctx, 31, 0x20C334u);
    ctx->pc = 0x20C330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C32Cu;
            // 0x20c330: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20AC70u;
    if (runtime->hasFunction(0x20AC70u)) {
        auto targetFn = runtime->lookupFunction(0x20AC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C334u; }
        if (ctx->pc != 0x20C334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuInventPushKey__Fii_0x20ac70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C334u; }
        if (ctx->pc != 0x20C334u) { return; }
    }
    ctx->pc = 0x20C334u;
label_20c334:
    // 0x20c334: 0x1000000c  b           . + 4 + (0xC << 2)
label_20c338:
    if (ctx->pc == 0x20C338u) {
        ctx->pc = 0x20C338u;
            // 0x20c338: 0x8f849178  lw          $a0, -0x6E88($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
        ctx->pc = 0x20C33Cu;
        goto label_20c33c;
    }
    ctx->pc = 0x20C334u;
    {
        const bool branch_taken_0x20c334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C338u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C334u;
            // 0x20c338: 0x8f849178  lw          $a0, -0x6E88($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c334) {
            ctx->pc = 0x20C368u;
            goto label_20c368;
        }
    }
    ctx->pc = 0x20C33Cu;
label_20c33c:
    // 0x20c33c: 0xc081c44  jal         func_207110
label_20c340:
    if (ctx->pc == 0x20C340u) {
        ctx->pc = 0x20C344u;
        goto label_20c344;
    }
    ctx->pc = 0x20C33Cu;
    SET_GPR_U32(ctx, 31, 0x20C344u);
    ctx->pc = 0x207110u;
    if (runtime->hasFunction(0x207110u)) {
        auto targetFn = runtime->lookupFunction(0x207110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C344u; }
        if (ctx->pc != 0x20C344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsAccessAlbum__11CMenuInventFv_0x207110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C344u; }
        if (ctx->pc != 0x20C344u) { return; }
    }
    ctx->pc = 0x20C344u;
label_20c344:
    // 0x20c344: 0x10000007  b           . + 4 + (0x7 << 2)
label_20c348:
    if (ctx->pc == 0x20C348u) {
        ctx->pc = 0x20C34Cu;
        goto label_20c34c;
    }
    ctx->pc = 0x20C344u;
    {
        const bool branch_taken_0x20c344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c344) {
            ctx->pc = 0x20C364u;
            goto label_20c364;
        }
    }
    ctx->pc = 0x20C34Cu;
label_20c34c:
    // 0x20c34c: 0xc081b78  jal         func_206DE0
label_20c350:
    if (ctx->pc == 0x20C350u) {
        ctx->pc = 0x20C350u;
            // 0x20c350: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20C354u;
        goto label_20c354;
    }
    ctx->pc = 0x20C34Cu;
    SET_GPR_U32(ctx, 31, 0x20C354u);
    ctx->pc = 0x20C350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C34Cu;
            // 0x20c350: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x206DE0u;
    if (runtime->hasFunction(0x206DE0u)) {
        auto targetFn = runtime->lookupFunction(0x206DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C354u; }
        if (ctx->pc != 0x20C354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PhotoNetaEnter__11CMenuInventFii_0x206de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C354u; }
        if (ctx->pc != 0x20C354u) { return; }
    }
    ctx->pc = 0x20C354u;
label_20c354:
    // 0x20c354: 0x10000003  b           . + 4 + (0x3 << 2)
label_20c358:
    if (ctx->pc == 0x20C358u) {
        ctx->pc = 0x20C35Cu;
        goto label_20c35c;
    }
    ctx->pc = 0x20C354u;
    {
        const bool branch_taken_0x20c354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c354) {
            ctx->pc = 0x20C364u;
            goto label_20c364;
        }
    }
    ctx->pc = 0x20C35Cu;
label_20c35c:
    // 0x20c35c: 0xc08e7d4  jal         func_239F50
label_20c360:
    if (ctx->pc == 0x20C360u) {
        ctx->pc = 0x20C360u;
            // 0x20c360: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20C364u;
        goto label_20c364;
    }
    ctx->pc = 0x20C35Cu;
    SET_GPR_U32(ctx, 31, 0x20C364u);
    ctx->pc = 0x20C360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C35Cu;
            // 0x20c360: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F50u;
    if (runtime->hasFunction(0x239F50u)) {
        auto targetFn = runtime->lookupFunction(0x239F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C364u; }
        if (ctx->pc != 0x20C364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExtendCommand__14CBaseMenuClassFii_0x239f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C364u; }
        if (ctx->pc != 0x20C364u) { return; }
    }
    ctx->pc = 0x20C364u;
label_20c364:
    // 0x20c364: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20c364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20c368:
    // 0x20c368: 0xc080474  jal         func_2011D0
label_20c36c:
    if (ctx->pc == 0x20C36Cu) {
        ctx->pc = 0x20C370u;
        goto label_20c370;
    }
    ctx->pc = 0x20C368u;
    SET_GPR_U32(ctx, 31, 0x20C370u);
    ctx->pc = 0x2011D0u;
    if (runtime->hasFunction(0x2011D0u)) {
        auto targetFn = runtime->lookupFunction(0x2011D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C370u; }
        if (ctx->pc != 0x20C370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadCharaCheck__11CMenuInventFv_0x2011d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C370u; }
        if (ctx->pc != 0x20C370u) { return; }
    }
    ctx->pc = 0x20C370u;
label_20c370:
    // 0x20c370: 0x8f839178  lw          $v1, -0x6E88($gp)
    ctx->pc = 0x20c370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20c374:
    // 0x20c374: 0x84620110  lh          $v0, 0x110($v1)
    ctx->pc = 0x20c374u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 272)));
label_20c378:
    // 0x20c378: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_20c37c:
    if (ctx->pc == 0x20C37Cu) {
        ctx->pc = 0x20C380u;
        goto label_20c380;
    }
    ctx->pc = 0x20C378u;
    {
        const bool branch_taken_0x20c378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c378) {
            ctx->pc = 0x20C3B0u;
            goto label_20c3b0;
        }
    }
    ctx->pc = 0x20C380u;
label_20c380:
    // 0x20c380: 0x84620000  lh          $v0, 0x0($v1)
    ctx->pc = 0x20c380u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_20c384:
    // 0x20c384: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x20c384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20c388:
    // 0x20c388: 0x14500002  bne         $v0, $s0, . + 4 + (0x2 << 2)
label_20c38c:
    if (ctx->pc == 0x20C38Cu) {
        ctx->pc = 0x20C390u;
        goto label_20c390;
    }
    ctx->pc = 0x20C388u;
    {
        const bool branch_taken_0x20c388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x20c388) {
            ctx->pc = 0x20C394u;
            goto label_20c394;
        }
    }
    ctx->pc = 0x20C390u;
label_20c390:
    // 0x20c390: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20c390u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c394:
    // 0x20c394: 0xc08d208  jal         func_234820
label_20c398:
    if (ctx->pc == 0x20C398u) {
        ctx->pc = 0x20C39Cu;
        goto label_20c39c;
    }
    ctx->pc = 0x20C394u;
    SET_GPR_U32(ctx, 31, 0x20C39Cu);
    ctx->pc = 0x234820u;
    if (runtime->hasFunction(0x234820u)) {
        auto targetFn = runtime->lookupFunction(0x234820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C39Cu; }
        if (ctx->pc != 0x20C39Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCommonMenuModeID__Fv_0x234820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C39Cu; }
        if (ctx->pc != 0x20C39Cu) { return; }
    }
    ctx->pc = 0x20C39Cu;
label_20c39c:
    // 0x20c39c: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x20c39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
label_20c3a0:
    // 0x20c3a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x20c3a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20c3a4:
    // 0x20c3a4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x20c3a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20c3a8:
    // 0x20c3a8: 0xc08ad64  jal         func_22B590
label_20c3ac:
    if (ctx->pc == 0x20C3ACu) {
        ctx->pc = 0x20C3ACu;
            // 0x20c3ac: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x20C3B0u;
        goto label_20c3b0;
    }
    ctx->pc = 0x20C3A8u;
    SET_GPR_U32(ctx, 31, 0x20C3B0u);
    ctx->pc = 0x20C3ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C3A8u;
            // 0x20c3ac: 0x24060005  addiu       $a2, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B590u;
    if (runtime->hasFunction(0x22B590u)) {
        auto targetFn = runtime->lookupFunction(0x22B590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C3B0u; }
        if (ctx->pc != 0x20C3B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMainMenuIconMove__18CMenuPosDataManageFPiii_0x22b590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C3B0u; }
        if (ctx->pc != 0x20C3B0u) { return; }
    }
    ctx->pc = 0x20C3B0u;
label_20c3b0:
    // 0x20c3b0: 0xc08acc8  jal         func_22B320
label_20c3b4:
    if (ctx->pc == 0x20C3B4u) {
        ctx->pc = 0x20C3B4u;
            // 0x20c3b4: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->pc = 0x20C3B8u;
        goto label_20c3b8;
    }
    ctx->pc = 0x20C3B0u;
    SET_GPR_U32(ctx, 31, 0x20C3B8u);
    ctx->pc = 0x20C3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C3B0u;
            // 0x20c3b4: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B320u;
    if (runtime->hasFunction(0x22B320u)) {
        auto targetFn = runtime->lookupFunction(0x22B320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C3B8u; }
        if (ctx->pc != 0x20C3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FormStep__14CPosDataManageFv_0x22b320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C3B8u; }
        if (ctx->pc != 0x20C3B8u) { return; }
    }
    ctx->pc = 0x20C3B8u;
label_20c3b8:
    // 0x20c3b8: 0xc08139c  jal         func_204E70
label_20c3bc:
    if (ctx->pc == 0x20C3BCu) {
        ctx->pc = 0x20C3BCu;
            // 0x20c3bc: 0x8f849178  lw          $a0, -0x6E88($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
        ctx->pc = 0x20C3C0u;
        goto label_20c3c0;
    }
    ctx->pc = 0x20C3B8u;
    SET_GPR_U32(ctx, 31, 0x20C3C0u);
    ctx->pc = 0x20C3BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C3B8u;
            // 0x20c3bc: 0x8f849178  lw          $a0, -0x6E88($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x204E70u;
    if (runtime->hasFunction(0x204E70u)) {
        auto targetFn = runtime->lookupFunction(0x204E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C3C0u; }
        if (ctx->pc != 0x20C3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcTex__11CMenuInventFv_0x204e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C3C0u; }
        if (ctx->pc != 0x20C3C0u) { return; }
    }
    ctx->pc = 0x20C3C0u;
label_20c3c0:
    // 0x20c3c0: 0xc081114  jal         func_204450
label_20c3c4:
    if (ctx->pc == 0x20C3C4u) {
        ctx->pc = 0x20C3C4u;
            // 0x20c3c4: 0x8f849178  lw          $a0, -0x6E88($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
        ctx->pc = 0x20C3C8u;
        goto label_20c3c8;
    }
    ctx->pc = 0x20C3C0u;
    SET_GPR_U32(ctx, 31, 0x20C3C8u);
    ctx->pc = 0x20C3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C3C0u;
            // 0x20c3c4: 0x8f849178  lw          $a0, -0x6E88($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x204450u;
    if (runtime->hasFunction(0x204450u)) {
        auto targetFn = runtime->lookupFunction(0x204450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C3C8u; }
        if (ctx->pc != 0x20C3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcCursorPosition__11CMenuInventFv_0x204450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C3C8u; }
        if (ctx->pc != 0x20C3C8u) { return; }
    }
    ctx->pc = 0x20C3C8u;
label_20c3c8:
    // 0x20c3c8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x20c3c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_20c3cc:
    // 0x20c3cc: 0x8f859178  lw          $a1, -0x6E88($gp)
    ctx->pc = 0x20c3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20c3d0:
    // 0x20c3d0: 0x8c22ca40  lw          $v0, -0x35C0($at)
    ctx->pc = 0x20c3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
label_20c3d4:
    // 0x20c3d4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x20c3d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_20c3d8:
    // 0x20c3d8: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x20c3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_20c3dc:
    // 0x20c3dc: 0x8c3eca48  lw          $fp, -0x35B8($at)
    ctx->pc = 0x20c3dcu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953544)));
label_20c3e0:
    // 0x20c3e0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x20c3e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_20c3e4:
    // 0x20c3e4: 0x8c22ca4c  lw          $v0, -0x35B4($at)
    ctx->pc = 0x20c3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953548)));
label_20c3e8:
    // 0x20c3e8: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x20c3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_20c3ec:
    // 0x20c3ec: 0x84a20014  lh          $v0, 0x14($a1)
    ctx->pc = 0x20c3ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 20)));
label_20c3f0:
    // 0x20c3f0: 0x2c41000c  sltiu       $at, $v0, 0xC
    ctx->pc = 0x20c3f0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_20c3f4:
    // 0x20c3f4: 0x10200123  beqz        $at, . + 4 + (0x123 << 2)
label_20c3f8:
    if (ctx->pc == 0x20C3F8u) {
        ctx->pc = 0x20C3F8u;
            // 0x20c3f8: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x20C3FCu;
        goto label_20c3fc;
    }
    ctx->pc = 0x20C3F4u;
    {
        const bool branch_taken_0x20c3f4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C3F4u;
            // 0x20c3f8: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c3f4) {
            ctx->pc = 0x20C884u;
            goto label_20c884;
        }
    }
    ctx->pc = 0x20C3FCu;
label_20c3fc:
    // 0x20c3fc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20c3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_20c400:
    // 0x20c400: 0x24639d90  addiu       $v1, $v1, -0x6270
    ctx->pc = 0x20c400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294942096));
label_20c404:
    // 0x20c404: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20c404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20c408:
    // 0x20c408: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20c408u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20c40c:
    // 0x20c40c: 0x400008  jr          $v0
label_20c410:
    if (ctx->pc == 0x20C410u) {
        ctx->pc = 0x20C414u;
        goto label_20c414;
    }
    ctx->pc = 0x20C40Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x20C414u: goto label_20c414;
            case 0x20C648u: goto label_20c648;
            default: break;
        }
        return;
    }
    ctx->pc = 0x20C414u;
label_20c414:
    // 0x20c414: 0x8f8490d4  lw          $a0, -0x6F2C($gp)
    ctx->pc = 0x20c414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
label_20c418:
    // 0x20c418: 0xc07faac  jal         func_1FEAB0
label_20c41c:
    if (ctx->pc == 0x20C41Cu) {
        ctx->pc = 0x20C41Cu;
            // 0x20c41c: 0x8ca50124  lw          $a1, 0x124($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 292)));
        ctx->pc = 0x20C420u;
        goto label_20c420;
    }
    ctx->pc = 0x20C418u;
    SET_GPR_U32(ctx, 31, 0x20C420u);
    ctx->pc = 0x20C41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C418u;
            // 0x20c41c: 0x8ca50124  lw          $a1, 0x124($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 292)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEAB0u;
    if (runtime->hasFunction(0x1FEAB0u)) {
        auto targetFn = runtime->lookupFunction(0x1FEAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C420u; }
        if (ctx->pc != 0x20C420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPhotoInfo__15CInventUserDataFi_0x1feab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C420u; }
        if (ctx->pc != 0x20C420u) { return; }
    }
    ctx->pc = 0x20C420u;
label_20c420:
    // 0x20c420: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20c420u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20c424:
    // 0x20c424: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_20c428:
    if (ctx->pc == 0x20C428u) {
        ctx->pc = 0x20C42Cu;
        goto label_20c42c;
    }
    ctx->pc = 0x20C424u;
    {
        const bool branch_taken_0x20c424 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c424) {
            ctx->pc = 0x20C438u;
            goto label_20c438;
        }
    }
    ctx->pc = 0x20C42Cu;
label_20c42c:
    // 0x20c42c: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20c42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20c430:
    // 0x20c430: 0xc080780  jal         func_201E00
label_20c434:
    if (ctx->pc == 0x20C434u) {
        ctx->pc = 0x20C434u;
            // 0x20c434: 0x8c850124  lw          $a1, 0x124($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
        ctx->pc = 0x20C438u;
        goto label_20c438;
    }
    ctx->pc = 0x20C430u;
    SET_GPR_U32(ctx, 31, 0x20C438u);
    ctx->pc = 0x20C434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C430u;
            // 0x20c434: 0x8c850124  lw          $a1, 0x124($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 292)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201E00u;
    if (runtime->hasFunction(0x201E00u)) {
        auto targetFn = runtime->lookupFunction(0x201E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C438u; }
        if (ctx->pc != 0x20C438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SelectedNetaPhotoAlready__11CMenuInventFi_0x201e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C438u; }
        if (ctx->pc != 0x20C438u) { return; }
    }
    ctx->pc = 0x20C438u;
label_20c438:
    // 0x20c438: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20c438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20c43c:
    // 0x20c43c: 0x8c440ec0  lw          $a0, 0xEC0($v0)
    ctx->pc = 0x20c43cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3776)));
label_20c440:
    // 0x20c440: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_20c444:
    if (ctx->pc == 0x20C444u) {
        ctx->pc = 0x20C448u;
        goto label_20c448;
    }
    ctx->pc = 0x20C440u;
    {
        const bool branch_taken_0x20c440 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c440) {
            ctx->pc = 0x20C46Cu;
            goto label_20c46c;
        }
    }
    ctx->pc = 0x20C448u;
label_20c448:
    // 0x20c448: 0x27b100f4  addiu       $s1, $sp, 0xF4
    ctx->pc = 0x20c448u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
label_20c44c:
    // 0x20c44c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20c44cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_20c450:
    // 0x20c450: 0x24a59d70  addiu       $a1, $a1, -0x6290
    ctx->pc = 0x20c450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942064));
label_20c454:
    // 0x20c454: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x20c454u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_20c458:
    // 0x20c458: 0xc08974c  jal         func_225D30
label_20c45c:
    if (ctx->pc == 0x20C45Cu) {
        ctx->pc = 0x20C45Cu;
            // 0x20c45c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20C460u;
        goto label_20c460;
    }
    ctx->pc = 0x20C458u;
    SET_GPR_U32(ctx, 31, 0x20C460u);
    ctx->pc = 0x20C45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C458u;
            // 0x20c45c: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C460u; }
        if (ctx->pc != 0x20C460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C460u; }
        if (ctx->pc != 0x20C460u) { return; }
    }
    ctx->pc = 0x20C460u;
label_20c460:
    // 0x20c460: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x20c460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20c464:
    // 0x20c464: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x20c464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
label_20c468:
    // 0x20c468: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x20c468u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_20c46c:
    // 0x20c46c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x20c46cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_20c470:
    // 0x20c470: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x20c470u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_20c474:
    // 0x20c474: 0x8c25cb38  lw          $a1, -0x34C8($at)
    ctx->pc = 0x20c474u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953784)));
label_20c478:
    // 0x20c478: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x20c478u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20c47c:
    // 0x20c47c: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x20c47cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_20c480:
    // 0x20c480: 0xc082220  jal         func_208880
label_20c484:
    if (ctx->pc == 0x20C484u) {
        ctx->pc = 0x20C484u;
            // 0x20c484: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20C488u;
        goto label_20c488;
    }
    ctx->pc = 0x20C480u;
    SET_GPR_U32(ctx, 31, 0x20C488u);
    ctx->pc = 0x20C484u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C480u;
            // 0x20c484: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208880u;
    if (runtime->hasFunction(0x208880u)) {
        auto targetFn = runtime->lookupFunction(0x208880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C488u; }
        if (ctx->pc != 0x20C488u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsgNetaName__FP7CDC2MesP16CMenuPosDataFormP17USER_PICTURE_INFOPii_0x208880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C488u; }
        if (ctx->pc != 0x20C488u) { return; }
    }
    ctx->pc = 0x20C488u;
label_20c488:
    // 0x20c488: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x20c488u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_20c48c:
    // 0x20c48c: 0x8c31ca5c  lw          $s1, -0x35A4($at)
    ctx->pc = 0x20c48cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
label_20c490:
    // 0x20c490: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_20c494:
    if (ctx->pc == 0x20C494u) {
        ctx->pc = 0x20C498u;
        goto label_20c498;
    }
    ctx->pc = 0x20C490u;
    {
        const bool branch_taken_0x20c490 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c490) {
            ctx->pc = 0x20C5C4u;
            goto label_20c5c4;
        }
    }
    ctx->pc = 0x20C498u;
label_20c498:
    // 0x20c498: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20c498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20c49c:
    // 0x20c49c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x20c49cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_20c4a0:
    // 0x20c4a0: 0x84830014  lh          $v1, 0x14($a0)
    ctx->pc = 0x20c4a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
label_20c4a4:
    // 0x20c4a4: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_20c4a8:
    if (ctx->pc == 0x20C4A8u) {
        ctx->pc = 0x20C4A8u;
            // 0x20c4a8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x20C4ACu;
        goto label_20c4ac;
    }
    ctx->pc = 0x20C4A4u;
    {
        const bool branch_taken_0x20c4a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20C4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C4A4u;
            // 0x20c4a8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c4a4) {
            ctx->pc = 0x20C4B4u;
            goto label_20c4b4;
        }
    }
    ctx->pc = 0x20C4ACu;
label_20c4ac:
    // 0x20c4ac: 0x14620021  bne         $v1, $v0, . + 4 + (0x21 << 2)
label_20c4b0:
    if (ctx->pc == 0x20C4B0u) {
        ctx->pc = 0x20C4B0u;
            // 0x20c4b0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x20C4B4u;
        goto label_20c4b4;
    }
    ctx->pc = 0x20C4ACu;
    {
        const bool branch_taken_0x20c4ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20C4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C4ACu;
            // 0x20c4b0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c4ac) {
            ctx->pc = 0x20C534u;
            goto label_20c534;
        }
    }
    ctx->pc = 0x20C4B4u;
label_20c4b4:
    // 0x20c4b4: 0x8c840ee8  lw          $a0, 0xEE8($a0)
    ctx->pc = 0x20c4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3816)));
label_20c4b8:
    // 0x20c4b8: 0x10800042  beqz        $a0, . + 4 + (0x42 << 2)
label_20c4bc:
    if (ctx->pc == 0x20C4BCu) {
        ctx->pc = 0x20C4C0u;
        goto label_20c4c0;
    }
    ctx->pc = 0x20C4B8u;
    {
        const bool branch_taken_0x20c4b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c4b8) {
            ctx->pc = 0x20C5C4u;
            goto label_20c5c4;
        }
    }
    ctx->pc = 0x20C4C0u;
label_20c4c0:
    // 0x20c4c0: 0x8f8290d8  lw          $v0, -0x6F28($gp)
    ctx->pc = 0x20c4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938840)));
label_20c4c4:
    // 0x20c4c4: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_20c4c8:
    if (ctx->pc == 0x20C4C8u) {
        ctx->pc = 0x20C4C8u;
            // 0x20c4c8: 0x27b000f4  addiu       $s0, $sp, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
        ctx->pc = 0x20C4CCu;
        goto label_20c4cc;
    }
    ctx->pc = 0x20C4C4u;
    {
        const bool branch_taken_0x20c4c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C4C4u;
            // 0x20c4c8: 0x27b000f4  addiu       $s0, $sp, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c4c4) {
            ctx->pc = 0x20C5C4u;
            goto label_20c5c4;
        }
    }
    ctx->pc = 0x20C4CCu;
label_20c4cc:
    // 0x20c4cc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20c4ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_20c4d0:
    // 0x20c4d0: 0x24a59d78  addiu       $a1, $a1, -0x6288
    ctx->pc = 0x20c4d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942072));
label_20c4d4:
    // 0x20c4d4: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x20c4d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_20c4d8:
    // 0x20c4d8: 0xc08974c  jal         func_225D30
label_20c4dc:
    if (ctx->pc == 0x20C4DCu) {
        ctx->pc = 0x20C4DCu;
            // 0x20c4dc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20C4E0u;
        goto label_20c4e0;
    }
    ctx->pc = 0x20C4D8u;
    SET_GPR_U32(ctx, 31, 0x20C4E0u);
    ctx->pc = 0x20C4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C4D8u;
            // 0x20c4dc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C4E0u; }
        if (ctx->pc != 0x20C4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C4E0u; }
        if (ctx->pc != 0x20C4E0u) { return; }
    }
    ctx->pc = 0x20C4E0u;
label_20c4e0:
    // 0x20c4e0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x20c4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20c4e4:
    // 0x20c4e4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x20c4e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_20c4e8:
    // 0x20c4e8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20c4e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c4ec:
    // 0x20c4ec: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x20c4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
label_20c4f0:
    // 0x20c4f0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x20c4f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_20c4f4:
    // 0x20c4f4: 0x8c22cb4c  lw          $v0, -0x34B4($at)
    ctx->pc = 0x20c4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953804)));
label_20c4f8:
    // 0x20c4f8: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x20c4f8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
label_20c4fc:
    // 0x20c4fc: 0xae201c34  sw          $zero, 0x1C34($s1)
    ctx->pc = 0x20c4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 7220), GPR_U32(ctx, 0));
label_20c500:
    // 0x20c500: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20c500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20c504:
    // 0x20c504: 0x8c45012c  lw          $a1, 0x12C($v0)
    ctx->pc = 0x20c504u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 300)));
label_20c508:
    // 0x20c508: 0xc07fa10  jal         func_1FE840
label_20c50c:
    if (ctx->pc == 0x20C50Cu) {
        ctx->pc = 0x20C50Cu;
            // 0x20c50c: 0x8f8490d8  lw          $a0, -0x6F28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938840)));
        ctx->pc = 0x20C510u;
        goto label_20c510;
    }
    ctx->pc = 0x20C508u;
    SET_GPR_U32(ctx, 31, 0x20C510u);
    ctx->pc = 0x20C50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C508u;
            // 0x20c50c: 0x8f8490d8  lw          $a0, -0x6F28($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938840)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE840u;
    if (runtime->hasFunction(0x1FE840u)) {
        auto targetFn = runtime->lookupFunction(0x1FE840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C510u; }
        if (ctx->pc != 0x20C510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAlbumPhotoInfo__13CDC2AlbumDataFi_0x1fe840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C510u; }
        if (ctx->pc != 0x20C510u) { return; }
    }
    ctx->pc = 0x20C510u;
label_20c510:
    // 0x20c510: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x20c510u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_20c514:
    // 0x20c514: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x20c514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20c518:
    // 0x20c518: 0x8c25cb4c  lw          $a1, -0x34B4($at)
    ctx->pc = 0x20c518u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953804)));
label_20c51c:
    // 0x20c51c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x20c51cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20c520:
    // 0x20c520: 0x27a700f0  addiu       $a3, $sp, 0xF0
    ctx->pc = 0x20c520u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_20c524:
    // 0x20c524: 0xc082220  jal         func_208880
label_20c528:
    if (ctx->pc == 0x20C528u) {
        ctx->pc = 0x20C528u;
            // 0x20c528: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20C52Cu;
        goto label_20c52c;
    }
    ctx->pc = 0x20C524u;
    SET_GPR_U32(ctx, 31, 0x20C52Cu);
    ctx->pc = 0x20C528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C524u;
            // 0x20c528: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x208880u;
    if (runtime->hasFunction(0x208880u)) {
        auto targetFn = runtime->lookupFunction(0x208880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C52Cu; }
        if (ctx->pc != 0x20C52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsgNetaName__FP7CDC2MesP16CMenuPosDataFormP17USER_PICTURE_INFOPii_0x208880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C52Cu; }
        if (ctx->pc != 0x20C52Cu) { return; }
    }
    ctx->pc = 0x20C52Cu;
label_20c52c:
    // 0x20c52c: 0x10000025  b           . + 4 + (0x25 << 2)
label_20c530:
    if (ctx->pc == 0x20C530u) {
        ctx->pc = 0x20C534u;
        goto label_20c534;
    }
    ctx->pc = 0x20C52Cu;
    {
        const bool branch_taken_0x20c52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c52c) {
            ctx->pc = 0x20C5C4u;
            goto label_20c5c4;
        }
    }
    ctx->pc = 0x20C534u;
label_20c534:
    // 0x20c534: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
label_20c538:
    if (ctx->pc == 0x20C538u) {
        ctx->pc = 0x20C53Cu;
        goto label_20c53c;
    }
    ctx->pc = 0x20C534u;
    {
        const bool branch_taken_0x20c534 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x20c534) {
            ctx->pc = 0x20C5C4u;
            goto label_20c5c4;
        }
    }
    ctx->pc = 0x20C53Cu;
label_20c53c:
    // 0x20c53c: 0x84820112  lh          $v0, 0x112($a0)
    ctx->pc = 0x20c53cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 274)));
label_20c540:
    // 0x20c540: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_20c544:
    if (ctx->pc == 0x20C544u) {
        ctx->pc = 0x20C548u;
        goto label_20c548;
    }
    ctx->pc = 0x20C540u;
    {
        const bool branch_taken_0x20c540 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20c540) {
            ctx->pc = 0x20C5C4u;
            goto label_20c5c4;
        }
    }
    ctx->pc = 0x20C548u;
label_20c548:
    // 0x20c548: 0x84820110  lh          $v0, 0x110($a0)
    ctx->pc = 0x20c548u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 272)));
label_20c54c:
    // 0x20c54c: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_20c550:
    if (ctx->pc == 0x20C550u) {
        ctx->pc = 0x20C550u;
            // 0x20c550: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20C554u;
        goto label_20c554;
    }
    ctx->pc = 0x20C54Cu;
    {
        const bool branch_taken_0x20c54c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C550u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C54Cu;
            // 0x20c550: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c54c) {
            ctx->pc = 0x20C5C4u;
            goto label_20c5c4;
        }
    }
    ctx->pc = 0x20C554u;
label_20c554:
    // 0x20c554: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x20c554u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c558:
    // 0x20c558: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x20c558u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c55c:
    // 0x20c55c: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20c55cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20c560:
    // 0x20c560: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x20c560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_20c564:
    // 0x20c564: 0x8c440f00  lw          $a0, 0xF00($v0)
    ctx->pc = 0x20c564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3840)));
label_20c568:
    // 0x20c568: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
label_20c56c:
    if (ctx->pc == 0x20C56Cu) {
        ctx->pc = 0x20C56Cu;
            // 0x20c56c: 0x27b400f4  addiu       $s4, $sp, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
        ctx->pc = 0x20C570u;
        goto label_20c570;
    }
    ctx->pc = 0x20C568u;
    {
        const bool branch_taken_0x20c568 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C568u;
            // 0x20c56c: 0x27b400f4  addiu       $s4, $sp, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 244));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c568) {
            ctx->pc = 0x20C5B0u;
            goto label_20c5b0;
        }
    }
    ctx->pc = 0x20C570u;
label_20c570:
    // 0x20c570: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20c570u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_20c574:
    // 0x20c574: 0x24a59d80  addiu       $a1, $a1, -0x6280
    ctx->pc = 0x20c574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942080));
label_20c578:
    // 0x20c578: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x20c578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_20c57c:
    // 0x20c57c: 0xc08974c  jal         func_225D30
label_20c580:
    if (ctx->pc == 0x20C580u) {
        ctx->pc = 0x20C580u;
            // 0x20c580: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20C584u;
        goto label_20c584;
    }
    ctx->pc = 0x20C57Cu;
    SET_GPR_U32(ctx, 31, 0x20C584u);
    ctx->pc = 0x20C580u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C57Cu;
            // 0x20c580: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C584u; }
        if (ctx->pc != 0x20C584u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C584u; }
        if (ctx->pc != 0x20C584u) { return; }
    }
    ctx->pc = 0x20C584u;
label_20c584:
    // 0x20c584: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x20c584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_20c588:
    // 0x20c588: 0x6000009  bltz        $s0, . + 4 + (0x9 << 2)
label_20c58c:
    if (ctx->pc == 0x20C58Cu) {
        ctx->pc = 0x20C58Cu;
            // 0x20c58c: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x20C590u;
        goto label_20c590;
    }
    ctx->pc = 0x20C588u;
    {
        const bool branch_taken_0x20c588 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x20C58Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C588u;
            // 0x20c58c: 0x8e840000  lw          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c588) {
            ctx->pc = 0x20C5B0u;
            goto label_20c5b0;
        }
    }
    ctx->pc = 0x20C590u;
label_20c590:
    // 0x20c590: 0x2a010014  slti        $at, $s0, 0x14
    ctx->pc = 0x20c590u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)20) ? 1 : 0);
label_20c594:
    // 0x20c594: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_20c598:
    if (ctx->pc == 0x20C598u) {
        ctx->pc = 0x20C598u;
            // 0x20c598: 0x2332821  addu        $a1, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->pc = 0x20C59Cu;
        goto label_20c59c;
    }
    ctx->pc = 0x20C594u;
    {
        const bool branch_taken_0x20c594 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C594u;
            // 0x20c598: 0x2332821  addu        $a1, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c594) {
            ctx->pc = 0x20C5B0u;
            goto label_20c5b0;
        }
    }
    ctx->pc = 0x20C59Cu;
label_20c59c:
    // 0x20c59c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20c59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c5a0:
    // 0x20c5a0: 0xaca21b94  sw          $v0, 0x1B94($a1)
    ctx->pc = 0x20c5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7060), GPR_U32(ctx, 2));
label_20c5a4:
    // 0x20c5a4: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x20c5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_20c5a8:
    // 0x20c5a8: 0xaca41b98  sw          $a0, 0x1B98($a1)
    ctx->pc = 0x20c5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 7064), GPR_U32(ctx, 4));
label_20c5ac:
    // 0x20c5ac: 0xac431c34  sw          $v1, 0x1C34($v0)
    ctx->pc = 0x20c5acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7220), GPR_U32(ctx, 3));
label_20c5b0:
    // 0x20c5b0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20c5b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20c5b4:
    // 0x20c5b4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x20c5b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_20c5b8:
    // 0x20c5b8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x20c5b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_20c5bc:
    // 0x20c5bc: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_20c5c0:
    if (ctx->pc == 0x20C5C0u) {
        ctx->pc = 0x20C5C0u;
            // 0x20c5c0: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->pc = 0x20C5C4u;
        goto label_20c5c4;
    }
    ctx->pc = 0x20C5BCu;
    {
        const bool branch_taken_0x20c5bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C5BCu;
            // 0x20c5c0: 0x26730008  addiu       $s3, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c5bc) {
            ctx->pc = 0x20C55Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20c55c;
        }
    }
    ctx->pc = 0x20C5C4u;
label_20c5c4:
    // 0x20c5c4: 0x0  nop
    ctx->pc = 0x20c5c4u;
    // NOP
label_20c5c8:
    // 0x20c5c8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x20c5c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_20c5cc:
    // 0x20c5cc: 0x8c27cb3c  lw          $a3, -0x34C4($at)
    ctx->pc = 0x20c5ccu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953788)));
label_20c5d0:
    // 0x20c5d0: 0x10e000ac  beqz        $a3, . + 4 + (0xAC << 2)
label_20c5d4:
    if (ctx->pc == 0x20C5D4u) {
        ctx->pc = 0x20C5D8u;
        goto label_20c5d8;
    }
    ctx->pc = 0x20C5D0u;
    {
        const bool branch_taken_0x20c5d0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c5d0) {
            ctx->pc = 0x20C884u;
            goto label_20c884;
        }
    }
    ctx->pc = 0x20C5D8u;
label_20c5d8:
    // 0x20c5d8: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x20c5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
label_20c5dc:
    // 0x20c5dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20c5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20c5e0:
    // 0x20c5e0: 0x24040172  addiu       $a0, $zero, 0x172
    ctx->pc = 0x20c5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 370));
label_20c5e4:
    // 0x20c5e4: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_20c5e8:
    if (ctx->pc == 0x20C5E8u) {
        ctx->pc = 0x20C5E8u;
            // 0x20c5e8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x20C5ECu;
        goto label_20c5ec;
    }
    ctx->pc = 0x20C5E4u;
    {
        const bool branch_taken_0x20c5e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20C5E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C5E4u;
            // 0x20c5e8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c5e4) {
            ctx->pc = 0x20C5F4u;
            goto label_20c5f4;
        }
    }
    ctx->pc = 0x20C5ECu;
label_20c5ec:
    // 0x20c5ec: 0x24040150  addiu       $a0, $zero, 0x150
    ctx->pc = 0x20c5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_20c5f0:
    // 0x20c5f0: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x20c5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_20c5f4:
    // 0x20c5f4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x20c5f4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_20c5f8:
    // 0x20c5f8: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x20c5f8u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20c5fc:
    // 0x20c5fc: 0x0  nop
    ctx->pc = 0x20c5fcu;
    // NOP
label_20c600:
    // 0x20c600: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x20c600u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_20c604:
    // 0x20c604: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20c604u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_20c608:
    // 0x20c608: 0xe4e1000c  swc1        $f1, 0xC($a3)
    ctx->pc = 0x20c608u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
label_20c60c:
    // 0x20c60c: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x20c60cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
label_20c610:
    // 0x20c610: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20c610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20c614:
    // 0x20c614: 0x8443060c  lh          $v1, 0x60C($v0)
    ctx->pc = 0x20c614u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1548)));
label_20c618:
    // 0x20c618: 0x28610003  slti        $at, $v1, 0x3
    ctx->pc = 0x20c618u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_20c61c:
    // 0x20c61c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_20c620:
    if (ctx->pc == 0x20C620u) {
        ctx->pc = 0x20C620u;
            // 0x20c620: 0x2405026b  addiu       $a1, $zero, 0x26B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 619));
        ctx->pc = 0x20C624u;
        goto label_20c624;
    }
    ctx->pc = 0x20C61Cu;
    {
        const bool branch_taken_0x20c61c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C61Cu;
            // 0x20c620: 0x2405026b  addiu       $a1, $zero, 0x26B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 619));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c61c) {
            ctx->pc = 0x20C638u;
            goto label_20c638;
        }
    }
    ctx->pc = 0x20C624u;
label_20c624:
    // 0x20c624: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x20c624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_20c628:
    // 0x20c628: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x20c628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_20c62c:
    // 0x20c62c: 0xc0877b8  jal         func_21DEE0
label_20c630:
    if (ctx->pc == 0x20C630u) {
        ctx->pc = 0x20C630u;
            // 0x20c630: 0x432823  subu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x20C634u;
        goto label_20c634;
    }
    ctx->pc = 0x20C62Cu;
    SET_GPR_U32(ctx, 31, 0x20C634u);
    ctx->pc = 0x20C630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C62Cu;
            // 0x20c630: 0x432823  subu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DEE0u;
    if (runtime->hasFunction(0x21DEE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C634u; }
        if (ctx->pc != 0x20C634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNoOne__7CDC2MesFi_0x21dee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C634u; }
        if (ctx->pc != 0x20C634u) { return; }
    }
    ctx->pc = 0x20C634u;
label_20c634:
    // 0x20c634: 0x2405026a  addiu       $a1, $zero, 0x26A
    ctx->pc = 0x20c634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 618));
label_20c638:
    // 0x20c638: 0xc0877e0  jal         func_21DF80
label_20c63c:
    if (ctx->pc == 0x20C63Cu) {
        ctx->pc = 0x20C63Cu;
            // 0x20c63c: 0x8fa400d0  lw          $a0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->pc = 0x20C640u;
        goto label_20c640;
    }
    ctx->pc = 0x20C638u;
    SET_GPR_U32(ctx, 31, 0x20C640u);
    ctx->pc = 0x20C63Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C638u;
            // 0x20c63c: 0x8fa400d0  lw          $a0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C640u; }
        if (ctx->pc != 0x20C640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C640u; }
        if (ctx->pc != 0x20C640u) { return; }
    }
    ctx->pc = 0x20C640u;
label_20c640:
    // 0x20c640: 0x10000091  b           . + 4 + (0x91 << 2)
label_20c644:
    if (ctx->pc == 0x20C644u) {
        ctx->pc = 0x20C644u;
            // 0x20c644: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->pc = 0x20C648u;
        goto label_20c648;
    }
    ctx->pc = 0x20C640u;
    {
        const bool branch_taken_0x20c640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C640u;
            // 0x20c644: 0x8fa200b0  lw          $v0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c640) {
            ctx->pc = 0x20C888u;
            goto label_20c888;
        }
    }
    ctx->pc = 0x20C648u;
label_20c648:
    // 0x20c648: 0xdf8291a8  ld          $v0, -0x6E58($gp)
    ctx->pc = 0x20c648u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294939048)));
label_20c64c:
    // 0x20c64c: 0x27a301d8  addiu       $v1, $sp, 0x1D8
    ctx->pc = 0x20c64cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
label_20c650:
    // 0x20c650: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x20c650u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_20c654:
    // 0x20c654: 0x8ca20118  lw          $v0, 0x118($a1)
    ctx->pc = 0x20c654u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 280)));
label_20c658:
    // 0x20c658: 0x8f8490d4  lw          $a0, -0x6F2C($gp)
    ctx->pc = 0x20c658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
label_20c65c:
    // 0x20c65c: 0xafa201d8  sw          $v0, 0x1D8($sp)
    ctx->pc = 0x20c65cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 2));
label_20c660:
    // 0x20c660: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x20c660u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_20c664:
    // 0x20c664: 0xafa201dc  sw          $v0, 0x1DC($sp)
    ctx->pc = 0x20c664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 476), GPR_U32(ctx, 2));
label_20c668:
    // 0x20c668: 0x90a2024c  lbu         $v0, 0x24C($a1)
    ctx->pc = 0x20c668u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 588)));
label_20c66c:
    // 0x20c66c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20c66cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_20c670:
    // 0x20c670: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x20c670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_20c674:
    // 0x20c674: 0x8c5701d8  lw          $s7, 0x1D8($v0)
    ctx->pc = 0x20c674u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 472)));
label_20c678:
    // 0x20c678: 0xc07fc5c  jal         func_1FF170
label_20c67c:
    if (ctx->pc == 0x20C67Cu) {
        ctx->pc = 0x20C67Cu;
            // 0x20c67c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20C680u;
        goto label_20c680;
    }
    ctx->pc = 0x20C678u;
    SET_GPR_U32(ctx, 31, 0x20C680u);
    ctx->pc = 0x20C67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C678u;
            // 0x20c67c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF170u;
    if (runtime->hasFunction(0x1FF170u)) {
        auto targetFn = runtime->lookupFunction(0x1FF170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C680u; }
        if (ctx->pc != 0x20C680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetHatsumeiNum__15CInventUserDataFv_0x1ff170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C680u; }
        if (ctx->pc != 0x20C680u) { return; }
    }
    ctx->pc = 0x20C680u;
label_20c680:
    // 0x20c680: 0x8f839178  lw          $v1, -0x6E88($gp)
    ctx->pc = 0x20c680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20c684:
    // 0x20c684: 0x3c024294  lui         $v0, 0x4294
    ctx->pc = 0x20c684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17044 << 16));
label_20c688:
    // 0x20c688: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20c688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20c68c:
    // 0x20c68c: 0x8c710ee0  lw          $s1, 0xEE0($v1)
    ctx->pc = 0x20c68cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3808)));
label_20c690:
    // 0x20c690: 0xc634000c  lwc1        $f20, 0xC($s1)
    ctx->pc = 0x20c690u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20c694:
    // 0x20c694: 0xc0a248c  jal         func_289230
label_20c698:
    if (ctx->pc == 0x20C698u) {
        ctx->pc = 0x20C698u;
            // 0x20c698: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->pc = 0x20C69Cu;
        goto label_20c69c;
    }
    ctx->pc = 0x20C694u;
    SET_GPR_U32(ctx, 31, 0x20C69Cu);
    ctx->pc = 0x20C698u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C694u;
            // 0x20c698: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C69Cu; }
        if (ctx->pc != 0x20C69Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C69Cu; }
        if (ctx->pc != 0x20C69Cu) { return; }
    }
    ctx->pc = 0x20C69Cu;
label_20c69c:
    // 0x20c69c: 0xc6210010  lwc1        $f1, 0x10($s1)
    ctx->pc = 0x20c69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_20c6a0:
    // 0x20c6a0: 0x3c034150  lui         $v1, 0x4150
    ctx->pc = 0x20c6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16720 << 16));
label_20c6a4:
    // 0x20c6a4: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x20c6a4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20c6a8:
    // 0x20c6a8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20c6a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20c6ac:
    // 0x20c6ac: 0x171040  sll         $v0, $s7, 1
    ctx->pc = 0x20c6acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
label_20c6b0:
    // 0x20c6b0: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x20c6b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_20c6b4:
    // 0x20c6b4: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x20c6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_20c6b8:
    // 0x20c6b8: 0x571023  subu        $v0, $v0, $s7
    ctx->pc = 0x20c6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_20c6bc:
    // 0x20c6bc: 0x46010040  add.s       $f1, $f0, $f1
    ctx->pc = 0x20c6bcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_20c6c0:
    // 0x20c6c0: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x20c6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_20c6c4:
    // 0x20c6c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20c6c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20c6c8:
    // 0x20c6c8: 0x0  nop
    ctx->pc = 0x20c6c8u;
    // NOP
label_20c6cc:
    // 0x20c6cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x20c6ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_20c6d0:
    // 0x20c6d0: 0xc0a248c  jal         func_289230
label_20c6d4:
    if (ctx->pc == 0x20C6D4u) {
        ctx->pc = 0x20C6D4u;
            // 0x20c6d4: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x20C6D8u;
        goto label_20c6d8;
    }
    ctx->pc = 0x20C6D0u;
    SET_GPR_U32(ctx, 31, 0x20C6D8u);
    ctx->pc = 0x20C6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C6D0u;
            // 0x20c6d4: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C6D8u; }
        if (ctx->pc != 0x20C6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C6D8u; }
        if (ctx->pc != 0x20C6D8u) { return; }
    }
    ctx->pc = 0x20C6D8u;
label_20c6d8:
    // 0x20c6d8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x20c6d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20c6dc:
    // 0x20c6dc: 0x3c024130  lui         $v0, 0x4130
    ctx->pc = 0x20c6dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16688 << 16));
label_20c6e0:
    // 0x20c6e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x20c6e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_20c6e4:
    // 0x20c6e4: 0xc0a248c  jal         func_289230
label_20c6e8:
    if (ctx->pc == 0x20C6E8u) {
        ctx->pc = 0x20C6E8u;
            // 0x20c6e8: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->pc = 0x20C6ECu;
        goto label_20c6ec;
    }
    ctx->pc = 0x20C6E4u;
    SET_GPR_U32(ctx, 31, 0x20C6ECu);
    ctx->pc = 0x20C6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C6E4u;
            // 0x20c6e8: 0x46140300  add.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C6ECu; }
        if (ctx->pc != 0x20C6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C6ECu; }
        if (ctx->pc != 0x20C6ECu) { return; }
    }
    ctx->pc = 0x20C6ECu;
label_20c6ec:
    // 0x20c6ec: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x20c6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
label_20c6f0:
    // 0x20c6f0: 0x6e1000f  bgez        $s7, . + 4 + (0xF << 2)
label_20c6f4:
    if (ctx->pc == 0x20C6F4u) {
        ctx->pc = 0x20C6F4u;
            // 0x20c6f4: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20C6F8u;
        goto label_20c6f8;
    }
    ctx->pc = 0x20C6F0u;
    {
        const bool branch_taken_0x20c6f0 = (GPR_S32(ctx, 23) >= 0);
        ctx->pc = 0x20C6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C6F0u;
            // 0x20c6f4: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c6f0) {
            ctx->pc = 0x20C730u;
            goto label_20c730;
        }
    }
    ctx->pc = 0x20C6F8u;
label_20c6f8:
    // 0x20c6f8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20c6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c6fc:
    // 0x20c6fc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20c6fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20c700:
    // 0x20c700: 0x9d1821  addu        $v1, $a0, $sp
    ctx->pc = 0x20c700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_20c704:
    // 0x20c704: 0xbd1021  addu        $v0, $a1, $sp
    ctx->pc = 0x20c704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 29)));
label_20c708:
    // 0x20c708: 0xac600130  sw          $zero, 0x130($v1)
    ctx->pc = 0x20c708u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 304), GPR_U32(ctx, 0));
label_20c70c:
    // 0x20c70c: 0x244200f0  addiu       $v0, $v0, 0xF0
    ctx->pc = 0x20c70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
label_20c710:
    // 0x20c710: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x20c710u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 22));
label_20c714:
    // 0x20c714: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x20c714u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_20c718:
    // 0x20c718: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x20c718u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
label_20c71c:
    // 0x20c71c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x20c71cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_20c720:
    // 0x20c720: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x20c720u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_20c724:
    // 0x20c724: 0x2631002e  addiu       $s1, $s1, 0x2E
    ctx->pc = 0x20c724u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 46));
label_20c728:
    // 0x20c728: 0x4c0fff5  bltz        $a2, . + 4 + (-0xB << 2)
label_20c72c:
    if (ctx->pc == 0x20C72Cu) {
        ctx->pc = 0x20C72Cu;
            // 0x20c72c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x20C730u;
        goto label_20c730;
    }
    ctx->pc = 0x20C728u;
    {
        const bool branch_taken_0x20c728 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x20C72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C728u;
            // 0x20c72c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c728) {
            ctx->pc = 0x20C700u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20c700;
        }
    }
    ctx->pc = 0x20C730u;
label_20c730:
    // 0x20c730: 0x2a010007  slti        $at, $s0, 0x7
    ctx->pc = 0x20c730u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
label_20c734:
    // 0x20c734: 0x1020002c  beqz        $at, . + 4 + (0x2C << 2)
label_20c738:
    if (ctx->pc == 0x20C738u) {
        ctx->pc = 0x20C738u;
            // 0x20c738: 0x109840  sll         $s3, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x20C73Cu;
        goto label_20c73c;
    }
    ctx->pc = 0x20C734u;
    {
        const bool branch_taken_0x20c734 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C734u;
            // 0x20c738: 0x109840  sll         $s3, $s0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c734) {
            ctx->pc = 0x20C7E8u;
            goto label_20c7e8;
        }
    }
    ctx->pc = 0x20C73Cu;
label_20c73c:
    // 0x20c73c: 0x10a080  sll         $s4, $s0, 2
    ctx->pc = 0x20c73cu;
    SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_20c740:
    // 0x20c740: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x20c740u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_20c744:
    // 0x20c744: 0x2f09021  addu        $s2, $s7, $s0
    ctx->pc = 0x20c744u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
label_20c748:
    // 0x20c748: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x20c748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_20c74c:
    // 0x20c74c: 0x26230002  addiu       $v1, $s1, 0x2
    ctx->pc = 0x20c74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_20c750:
    // 0x20c750: 0x244400f0  addiu       $a0, $v0, 0xF0
    ctx->pc = 0x20c750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
label_20c754:
    // 0x20c754: 0x24460170  addiu       $a2, $v0, 0x170
    ctx->pc = 0x20c754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
label_20c758:
    // 0x20c758: 0xac960000  sw          $s6, 0x0($a0)
    ctx->pc = 0x20c758u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 22));
label_20c75c:
    // 0x20c75c: 0xac910004  sw          $s1, 0x4($a0)
    ctx->pc = 0x20c75cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 17));
label_20c760:
    // 0x20c760: 0x8fa200ec  lw          $v0, 0xEC($sp)
    ctx->pc = 0x20c760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
label_20c764:
    // 0x20c764: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x20c764u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_20c768:
    // 0x20c768: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x20c768u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_20c76c:
    // 0x20c76c: 0x8f8490d4  lw          $a0, -0x6F2C($gp)
    ctx->pc = 0x20c76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
label_20c770:
    // 0x20c770: 0xc07fc38  jal         func_1FF0E0
label_20c774:
    if (ctx->pc == 0x20C774u) {
        ctx->pc = 0x20C774u;
            // 0x20c774: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20C778u;
        goto label_20c778;
    }
    ctx->pc = 0x20C770u;
    SET_GPR_U32(ctx, 31, 0x20C778u);
    ctx->pc = 0x20C774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C770u;
            // 0x20c774: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF0E0u;
    if (runtime->hasFunction(0x1FF0E0u)) {
        auto targetFn = runtime->lookupFunction(0x1FF0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C778u; }
        if (ctx->pc != 0x20C778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCreateItemID__15CInventUserDataFi_0x1ff0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C778u; }
        if (ctx->pc != 0x20C778u) { return; }
    }
    ctx->pc = 0x20C778u;
label_20c778:
    // 0x20c778: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x20c778u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20c77c:
    // 0x20c77c: 0xc065810  jal         func_196040
label_20c780:
    if (ctx->pc == 0x20C780u) {
        ctx->pc = 0x20C780u;
            // 0x20c780: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20C784u;
        goto label_20c784;
    }
    ctx->pc = 0x20C77Cu;
    SET_GPR_U32(ctx, 31, 0x20C784u);
    ctx->pc = 0x20C780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C77Cu;
            // 0x20c780: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196040u;
    if (runtime->hasFunction(0x196040u)) {
        auto targetFn = runtime->lookupFunction(0x196040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C784u; }
        if (ctx->pc != 0x20C784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessage__Fi_0x196040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C784u; }
        if (ctx->pc != 0x20C784u) { return; }
    }
    ctx->pc = 0x20C784u;
label_20c784:
    // 0x20c784: 0x29d2021  addu        $a0, $s4, $sp
    ctx->pc = 0x20c784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
label_20c788:
    // 0x20c788: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x20c788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_20c78c:
    // 0x20c78c: 0x24850130  addiu       $a1, $a0, 0x130
    ctx->pc = 0x20c78cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 304));
label_20c790:
    // 0x20c790: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x20c790u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_20c794:
    // 0x20c794: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
label_20c798:
    if (ctx->pc == 0x20C798u) {
        ctx->pc = 0x20C798u;
            // 0x20c798: 0xac8301b0  sw          $v1, 0x1B0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 432), GPR_U32(ctx, 3));
        ctx->pc = 0x20C79Cu;
        goto label_20c79c;
    }
    ctx->pc = 0x20C794u;
    {
        const bool branch_taken_0x20c794 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C794u;
            // 0x20c798: 0xac8301b0  sw          $v1, 0x1B0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 432), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c794) {
            ctx->pc = 0x20C7BCu;
            goto label_20c7bc;
        }
    }
    ctx->pc = 0x20C79Cu;
label_20c79c:
    // 0x20c79c: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x20c79cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
label_20c7a0:
    // 0x20c7a0: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x20c7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_20c7a4:
    // 0x20c7a4: 0x2442f150  addiu       $v0, $v0, -0xEB0
    ctx->pc = 0x20c7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963536));
label_20c7a8:
    // 0x20c7a8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20c7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20c7ac:
    // 0x20c7ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20c7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20c7b0:
    // 0x20c7b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x20c7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_20c7b4:
    // 0x20c7b4: 0x10000006  b           . + 4 + (0x6 << 2)
label_20c7b8:
    if (ctx->pc == 0x20C7B8u) {
        ctx->pc = 0x20C7B8u;
            // 0x20c7b8: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x20C7BCu;
        goto label_20c7bc;
    }
    ctx->pc = 0x20C7B4u;
    {
        const bool branch_taken_0x20c7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20C7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C7B4u;
            // 0x20c7b8: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c7b4) {
            ctx->pc = 0x20C7D0u;
            goto label_20c7d0;
        }
    }
    ctx->pc = 0x20C7BCu;
label_20c7bc:
    // 0x20c7bc: 0x0  nop
    ctx->pc = 0x20c7bcu;
    // NOP
label_20c7c0:
    // 0x20c7c0: 0x1ea00003  bgtz        $s5, . + 4 + (0x3 << 2)
label_20c7c4:
    if (ctx->pc == 0x20C7C4u) {
        ctx->pc = 0x20C7C8u;
        goto label_20c7c8;
    }
    ctx->pc = 0x20C7C0u;
    {
        const bool branch_taken_0x20c7c0 = (GPR_S32(ctx, 21) > 0);
        if (branch_taken_0x20c7c0) {
            ctx->pc = 0x20C7D0u;
            goto label_20c7d0;
        }
    }
    ctx->pc = 0x20C7C8u;
label_20c7c8:
    // 0x20c7c8: 0x8f8282a4  lw          $v0, -0x7D5C($gp)
    ctx->pc = 0x20c7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935204)));
label_20c7cc:
    // 0x20c7cc: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x20c7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_20c7d0:
    // 0x20c7d0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x20c7d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_20c7d4:
    // 0x20c7d4: 0x2a020007  slti        $v0, $s0, 0x7
    ctx->pc = 0x20c7d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)7) ? 1 : 0);
label_20c7d8:
    // 0x20c7d8: 0x2631002e  addiu       $s1, $s1, 0x2E
    ctx->pc = 0x20c7d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 46));
label_20c7dc:
    // 0x20c7dc: 0x26730002  addiu       $s3, $s3, 0x2
    ctx->pc = 0x20c7dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
label_20c7e0:
    // 0x20c7e0: 0x1440ffd7  bnez        $v0, . + 4 + (-0x29 << 2)
label_20c7e4:
    if (ctx->pc == 0x20C7E4u) {
        ctx->pc = 0x20C7E4u;
            // 0x20c7e4: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x20C7E8u;
        goto label_20c7e8;
    }
    ctx->pc = 0x20C7E0u;
    {
        const bool branch_taken_0x20c7e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20C7E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C7E0u;
            // 0x20c7e4: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20c7e0) {
            ctx->pc = 0x20C740u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20c740;
        }
    }
    ctx->pc = 0x20C7E8u;
label_20c7e8:
    // 0x20c7e8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x20c7e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_20c7ec:
    // 0x20c7ec: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x20c7ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_20c7f0:
    // 0x20c7f0: 0xc087720  jal         func_21DC80
label_20c7f4:
    if (ctx->pc == 0x20C7F4u) {
        ctx->pc = 0x20C7F4u;
            // 0x20c7f4: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x20C7F8u;
        goto label_20c7f8;
    }
    ctx->pc = 0x20C7F0u;
    SET_GPR_U32(ctx, 31, 0x20C7F8u);
    ctx->pc = 0x20C7F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C7F0u;
            // 0x20c7f4: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C7F8u; }
        if (ctx->pc != 0x20C7F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C7F8u; }
        if (ctx->pc != 0x20C7F8u) { return; }
    }
    ctx->pc = 0x20C7F8u;
label_20c7f8:
    // 0x20c7f8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x20c7f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_20c7fc:
    // 0x20c7fc: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x20c7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_20c800:
    // 0x20c800: 0xc0877c4  jal         func_21DF10
label_20c804:
    if (ctx->pc == 0x20C804u) {
        ctx->pc = 0x20C804u;
            // 0x20c804: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x20C808u;
        goto label_20c808;
    }
    ctx->pc = 0x20C800u;
    SET_GPR_U32(ctx, 31, 0x20C808u);
    ctx->pc = 0x20C804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C800u;
            // 0x20c804: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF10u;
    if (runtime->hasFunction(0x21DF10u)) {
        auto targetFn = runtime->lookupFunction(0x21DF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C808u; }
        if (ctx->pc != 0x20C808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemPos__7CDC2MesFPii_0x21df10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C808u; }
        if (ctx->pc != 0x20C808u) { return; }
    }
    ctx->pc = 0x20C808u;
label_20c808:
    // 0x20c808: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x20c808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_20c80c:
    // 0x20c80c: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x20c80cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_20c810:
    // 0x20c810: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x20c810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_20c814:
    // 0x20c814: 0x24c6f130  addiu       $a2, $a2, -0xED0
    ctx->pc = 0x20c814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963504));
label_20c818:
    // 0x20c818: 0xc087798  jal         func_21DE60
label_20c81c:
    if (ctx->pc == 0x20C81Cu) {
        ctx->pc = 0x20C81Cu;
            // 0x20c81c: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x20C820u;
        goto label_20c820;
    }
    ctx->pc = 0x20C818u;
    SET_GPR_U32(ctx, 31, 0x20C820u);
    ctx->pc = 0x20C81Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C818u;
            // 0x20c81c: 0x24070006  addiu       $a3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DE60u;
    if (runtime->hasFunction(0x21DE60u)) {
        auto targetFn = runtime->lookupFunction(0x21DE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C820u; }
        if (ctx->pc != 0x20C820u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNo__7CDC2MesFPiPii_0x21de60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C820u; }
        if (ctx->pc != 0x20C820u) { return; }
    }
    ctx->pc = 0x20C820u;
label_20c820:
    // 0x20c820: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x20c820u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_20c824:
    // 0x20c824: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x20c824u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_20c828:
    // 0x20c828: 0xc0877c4  jal         func_21DF10
label_20c82c:
    if (ctx->pc == 0x20C82Cu) {
        ctx->pc = 0x20C82Cu;
            // 0x20c82c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x20C830u;
        goto label_20c830;
    }
    ctx->pc = 0x20C828u;
    SET_GPR_U32(ctx, 31, 0x20C830u);
    ctx->pc = 0x20C82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C828u;
            // 0x20c82c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF10u;
    if (runtime->hasFunction(0x21DF10u)) {
        auto targetFn = runtime->lookupFunction(0x21DF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C830u; }
        if (ctx->pc != 0x20C830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemPos__7CDC2MesFPii_0x21df10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C830u; }
        if (ctx->pc != 0x20C830u) { return; }
    }
    ctx->pc = 0x20C830u;
label_20c830:
    // 0x20c830: 0xc08085c  jal         func_202170
label_20c834:
    if (ctx->pc == 0x20C834u) {
        ctx->pc = 0x20C834u;
            // 0x20c834: 0x8f849178  lw          $a0, -0x6E88($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
        ctx->pc = 0x20C838u;
        goto label_20c838;
    }
    ctx->pc = 0x20C830u;
    SET_GPR_U32(ctx, 31, 0x20C838u);
    ctx->pc = 0x20C834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C830u;
            // 0x20c834: 0x8f849178  lw          $a0, -0x6E88($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x202170u;
    if (runtime->hasFunction(0x202170u)) {
        auto targetFn = runtime->lookupFunction(0x202170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C838u; }
        if (ctx->pc != 0x20C838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNowPosItemExist__11CMenuInventFv_0x202170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C838u; }
        if (ctx->pc != 0x20C838u) { return; }
    }
    ctx->pc = 0x20C838u;
label_20c838:
    // 0x20c838: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20c838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20c83c:
    // 0x20c83c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20c83cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20c840:
    // 0x20c840: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20c840u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20c844:
    // 0x20c844: 0x84830014  lh          $v1, 0x14($a0)
    ctx->pc = 0x20c844u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
label_20c848:
    // 0x20c848: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
label_20c84c:
    if (ctx->pc == 0x20C84Cu) {
        ctx->pc = 0x20C850u;
        goto label_20c850;
    }
    ctx->pc = 0x20C848u;
    {
        const bool branch_taken_0x20c848 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20c848) {
            ctx->pc = 0x20C878u;
            goto label_20c878;
        }
    }
    ctx->pc = 0x20C850u;
label_20c850:
    // 0x20c850: 0x8c850114  lw          $a1, 0x114($a0)
    ctx->pc = 0x20c850u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 276)));
label_20c854:
    // 0x20c854: 0xc07fc38  jal         func_1FF0E0
label_20c858:
    if (ctx->pc == 0x20C858u) {
        ctx->pc = 0x20C858u;
            // 0x20c858: 0x8f8490d4  lw          $a0, -0x6F2C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
        ctx->pc = 0x20C85Cu;
        goto label_20c85c;
    }
    ctx->pc = 0x20C854u;
    SET_GPR_U32(ctx, 31, 0x20C85Cu);
    ctx->pc = 0x20C858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C854u;
            // 0x20c858: 0x8f8490d4  lw          $a0, -0x6F2C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF0E0u;
    if (runtime->hasFunction(0x1FF0E0u)) {
        auto targetFn = runtime->lookupFunction(0x1FF0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C85Cu; }
        if (ctx->pc != 0x20C85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCreateItemID__15CInventUserDataFi_0x1ff0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C85Cu; }
        if (ctx->pc != 0x20C85Cu) { return; }
    }
    ctx->pc = 0x20C85Cu;
label_20c85c:
    // 0x20c85c: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
label_20c860:
    if (ctx->pc == 0x20C860u) {
        ctx->pc = 0x20C864u;
        goto label_20c864;
    }
    ctx->pc = 0x20C85Cu;
    {
        const bool branch_taken_0x20c85c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x20c85c) {
            ctx->pc = 0x20C878u;
            goto label_20c878;
        }
    }
    ctx->pc = 0x20C864u;
label_20c864:
    // 0x20c864: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x20c864u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_20c868:
    // 0x20c868: 0xc0877e0  jal         func_21DF80
label_20c86c:
    if (ctx->pc == 0x20C86Cu) {
        ctx->pc = 0x20C86Cu;
            // 0x20c86c: 0x24050269  addiu       $a1, $zero, 0x269 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 617));
        ctx->pc = 0x20C870u;
        goto label_20c870;
    }
    ctx->pc = 0x20C868u;
    SET_GPR_U32(ctx, 31, 0x20C870u);
    ctx->pc = 0x20C86Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C868u;
            // 0x20c86c: 0x24050269  addiu       $a1, $zero, 0x269 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 617));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C870u; }
        if (ctx->pc != 0x20C870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C870u; }
        if (ctx->pc != 0x20C870u) { return; }
    }
    ctx->pc = 0x20C870u;
label_20c870:
    // 0x20c870: 0x10000004  b           . + 4 + (0x4 << 2)
label_20c874:
    if (ctx->pc == 0x20C874u) {
        ctx->pc = 0x20C878u;
        goto label_20c878;
    }
    ctx->pc = 0x20C870u;
    {
        const bool branch_taken_0x20c870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20c870) {
            ctx->pc = 0x20C884u;
            goto label_20c884;
        }
    }
    ctx->pc = 0x20C878u;
label_20c878:
    // 0x20c878: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x20c878u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_20c87c:
    // 0x20c87c: 0xc0877f0  jal         func_21DFC0
label_20c880:
    if (ctx->pc == 0x20C880u) {
        ctx->pc = 0x20C880u;
            // 0x20c880: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20C884u;
        goto label_20c884;
    }
    ctx->pc = 0x20C87Cu;
    SET_GPR_U32(ctx, 31, 0x20C884u);
    ctx->pc = 0x20C880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20C87Cu;
            // 0x20c880: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DFC0u;
    if (runtime->hasFunction(0x21DFC0u)) {
        auto targetFn = runtime->lookupFunction(0x21DFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C884u; }
        if (ctx->pc != 0x20C884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFP13CGameDataUsed_0x21dfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20C884u; }
        if (ctx->pc != 0x20C884u) { return; }
    }
    ctx->pc = 0x20C884u;
label_20c884:
    // 0x20c884: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x20c884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_20c888:
    // 0x20c888: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x20c888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20c88c:
    // 0x20c88c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x20c88cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_20c890:
    // 0x20c890: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x20c890u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_20c894:
    // 0x20c894: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x20c894u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_20c898:
    // 0x20c898: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x20c898u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_20c89c:
    // 0x20c89c: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x20c89cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20c8a0:
    // 0x20c8a0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x20c8a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_20c8a4:
    // 0x20c8a4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x20c8a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_20c8a8:
    // 0x20c8a8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x20c8a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20c8ac:
    // 0x20c8ac: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20c8acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20c8b0:
    // 0x20c8b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20c8b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20c8b4:
    // 0x20c8b4: 0x3e00008  jr          $ra
label_20c8b8:
    if (ctx->pc == 0x20C8B8u) {
        ctx->pc = 0x20C8B8u;
            // 0x20c8b8: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->pc = 0x20C8BCu;
        goto label_fallthrough_0x20c8b4;
    }
    ctx->pc = 0x20C8B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20C8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20C8B4u;
            // 0x20c8b8: 0x27bd01e0  addiu       $sp, $sp, 0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x20c8b4:
    ctx->pc = 0x20C8BCu;
}
