#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MotionProc__FP8mgCFrameUiUifP8Mot_ListP9mgCCamera
// Address: 0x14c350 - 0x14cb1c
void MotionProc__FP8mgCFrameUiUifP8Mot_ListP9mgCCamera_0x14c350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MotionProc__FP8mgCFrameUiUifP8Mot_ListP9mgCCamera_0x14c350");
#endif

    switch (ctx->pc) {
        case 0x14c350u: goto label_14c350;
        case 0x14c354u: goto label_14c354;
        case 0x14c358u: goto label_14c358;
        case 0x14c35cu: goto label_14c35c;
        case 0x14c360u: goto label_14c360;
        case 0x14c364u: goto label_14c364;
        case 0x14c368u: goto label_14c368;
        case 0x14c36cu: goto label_14c36c;
        case 0x14c370u: goto label_14c370;
        case 0x14c374u: goto label_14c374;
        case 0x14c378u: goto label_14c378;
        case 0x14c37cu: goto label_14c37c;
        case 0x14c380u: goto label_14c380;
        case 0x14c384u: goto label_14c384;
        case 0x14c388u: goto label_14c388;
        case 0x14c38cu: goto label_14c38c;
        case 0x14c390u: goto label_14c390;
        case 0x14c394u: goto label_14c394;
        case 0x14c398u: goto label_14c398;
        case 0x14c39cu: goto label_14c39c;
        case 0x14c3a0u: goto label_14c3a0;
        case 0x14c3a4u: goto label_14c3a4;
        case 0x14c3a8u: goto label_14c3a8;
        case 0x14c3acu: goto label_14c3ac;
        case 0x14c3b0u: goto label_14c3b0;
        case 0x14c3b4u: goto label_14c3b4;
        case 0x14c3b8u: goto label_14c3b8;
        case 0x14c3bcu: goto label_14c3bc;
        case 0x14c3c0u: goto label_14c3c0;
        case 0x14c3c4u: goto label_14c3c4;
        case 0x14c3c8u: goto label_14c3c8;
        case 0x14c3ccu: goto label_14c3cc;
        case 0x14c3d0u: goto label_14c3d0;
        case 0x14c3d4u: goto label_14c3d4;
        case 0x14c3d8u: goto label_14c3d8;
        case 0x14c3dcu: goto label_14c3dc;
        case 0x14c3e0u: goto label_14c3e0;
        case 0x14c3e4u: goto label_14c3e4;
        case 0x14c3e8u: goto label_14c3e8;
        case 0x14c3ecu: goto label_14c3ec;
        case 0x14c3f0u: goto label_14c3f0;
        case 0x14c3f4u: goto label_14c3f4;
        case 0x14c3f8u: goto label_14c3f8;
        case 0x14c3fcu: goto label_14c3fc;
        case 0x14c400u: goto label_14c400;
        case 0x14c404u: goto label_14c404;
        case 0x14c408u: goto label_14c408;
        case 0x14c40cu: goto label_14c40c;
        case 0x14c410u: goto label_14c410;
        case 0x14c414u: goto label_14c414;
        case 0x14c418u: goto label_14c418;
        case 0x14c41cu: goto label_14c41c;
        case 0x14c420u: goto label_14c420;
        case 0x14c424u: goto label_14c424;
        case 0x14c428u: goto label_14c428;
        case 0x14c42cu: goto label_14c42c;
        case 0x14c430u: goto label_14c430;
        case 0x14c434u: goto label_14c434;
        case 0x14c438u: goto label_14c438;
        case 0x14c43cu: goto label_14c43c;
        case 0x14c440u: goto label_14c440;
        case 0x14c444u: goto label_14c444;
        case 0x14c448u: goto label_14c448;
        case 0x14c44cu: goto label_14c44c;
        case 0x14c450u: goto label_14c450;
        case 0x14c454u: goto label_14c454;
        case 0x14c458u: goto label_14c458;
        case 0x14c45cu: goto label_14c45c;
        case 0x14c460u: goto label_14c460;
        case 0x14c464u: goto label_14c464;
        case 0x14c468u: goto label_14c468;
        case 0x14c46cu: goto label_14c46c;
        case 0x14c470u: goto label_14c470;
        case 0x14c474u: goto label_14c474;
        case 0x14c478u: goto label_14c478;
        case 0x14c47cu: goto label_14c47c;
        case 0x14c480u: goto label_14c480;
        case 0x14c484u: goto label_14c484;
        case 0x14c488u: goto label_14c488;
        case 0x14c48cu: goto label_14c48c;
        case 0x14c490u: goto label_14c490;
        case 0x14c494u: goto label_14c494;
        case 0x14c498u: goto label_14c498;
        case 0x14c49cu: goto label_14c49c;
        case 0x14c4a0u: goto label_14c4a0;
        case 0x14c4a4u: goto label_14c4a4;
        case 0x14c4a8u: goto label_14c4a8;
        case 0x14c4acu: goto label_14c4ac;
        case 0x14c4b0u: goto label_14c4b0;
        case 0x14c4b4u: goto label_14c4b4;
        case 0x14c4b8u: goto label_14c4b8;
        case 0x14c4bcu: goto label_14c4bc;
        case 0x14c4c0u: goto label_14c4c0;
        case 0x14c4c4u: goto label_14c4c4;
        case 0x14c4c8u: goto label_14c4c8;
        case 0x14c4ccu: goto label_14c4cc;
        case 0x14c4d0u: goto label_14c4d0;
        case 0x14c4d4u: goto label_14c4d4;
        case 0x14c4d8u: goto label_14c4d8;
        case 0x14c4dcu: goto label_14c4dc;
        case 0x14c4e0u: goto label_14c4e0;
        case 0x14c4e4u: goto label_14c4e4;
        case 0x14c4e8u: goto label_14c4e8;
        case 0x14c4ecu: goto label_14c4ec;
        case 0x14c4f0u: goto label_14c4f0;
        case 0x14c4f4u: goto label_14c4f4;
        case 0x14c4f8u: goto label_14c4f8;
        case 0x14c4fcu: goto label_14c4fc;
        case 0x14c500u: goto label_14c500;
        case 0x14c504u: goto label_14c504;
        case 0x14c508u: goto label_14c508;
        case 0x14c50cu: goto label_14c50c;
        case 0x14c510u: goto label_14c510;
        case 0x14c514u: goto label_14c514;
        case 0x14c518u: goto label_14c518;
        case 0x14c51cu: goto label_14c51c;
        case 0x14c520u: goto label_14c520;
        case 0x14c524u: goto label_14c524;
        case 0x14c528u: goto label_14c528;
        case 0x14c52cu: goto label_14c52c;
        case 0x14c530u: goto label_14c530;
        case 0x14c534u: goto label_14c534;
        case 0x14c538u: goto label_14c538;
        case 0x14c53cu: goto label_14c53c;
        case 0x14c540u: goto label_14c540;
        case 0x14c544u: goto label_14c544;
        case 0x14c548u: goto label_14c548;
        case 0x14c54cu: goto label_14c54c;
        case 0x14c550u: goto label_14c550;
        case 0x14c554u: goto label_14c554;
        case 0x14c558u: goto label_14c558;
        case 0x14c55cu: goto label_14c55c;
        case 0x14c560u: goto label_14c560;
        case 0x14c564u: goto label_14c564;
        case 0x14c568u: goto label_14c568;
        case 0x14c56cu: goto label_14c56c;
        case 0x14c570u: goto label_14c570;
        case 0x14c574u: goto label_14c574;
        case 0x14c578u: goto label_14c578;
        case 0x14c57cu: goto label_14c57c;
        case 0x14c580u: goto label_14c580;
        case 0x14c584u: goto label_14c584;
        case 0x14c588u: goto label_14c588;
        case 0x14c58cu: goto label_14c58c;
        case 0x14c590u: goto label_14c590;
        case 0x14c594u: goto label_14c594;
        case 0x14c598u: goto label_14c598;
        case 0x14c59cu: goto label_14c59c;
        case 0x14c5a0u: goto label_14c5a0;
        case 0x14c5a4u: goto label_14c5a4;
        case 0x14c5a8u: goto label_14c5a8;
        case 0x14c5acu: goto label_14c5ac;
        case 0x14c5b0u: goto label_14c5b0;
        case 0x14c5b4u: goto label_14c5b4;
        case 0x14c5b8u: goto label_14c5b8;
        case 0x14c5bcu: goto label_14c5bc;
        case 0x14c5c0u: goto label_14c5c0;
        case 0x14c5c4u: goto label_14c5c4;
        case 0x14c5c8u: goto label_14c5c8;
        case 0x14c5ccu: goto label_14c5cc;
        case 0x14c5d0u: goto label_14c5d0;
        case 0x14c5d4u: goto label_14c5d4;
        case 0x14c5d8u: goto label_14c5d8;
        case 0x14c5dcu: goto label_14c5dc;
        case 0x14c5e0u: goto label_14c5e0;
        case 0x14c5e4u: goto label_14c5e4;
        case 0x14c5e8u: goto label_14c5e8;
        case 0x14c5ecu: goto label_14c5ec;
        case 0x14c5f0u: goto label_14c5f0;
        case 0x14c5f4u: goto label_14c5f4;
        case 0x14c5f8u: goto label_14c5f8;
        case 0x14c5fcu: goto label_14c5fc;
        case 0x14c600u: goto label_14c600;
        case 0x14c604u: goto label_14c604;
        case 0x14c608u: goto label_14c608;
        case 0x14c60cu: goto label_14c60c;
        case 0x14c610u: goto label_14c610;
        case 0x14c614u: goto label_14c614;
        case 0x14c618u: goto label_14c618;
        case 0x14c61cu: goto label_14c61c;
        case 0x14c620u: goto label_14c620;
        case 0x14c624u: goto label_14c624;
        case 0x14c628u: goto label_14c628;
        case 0x14c62cu: goto label_14c62c;
        case 0x14c630u: goto label_14c630;
        case 0x14c634u: goto label_14c634;
        case 0x14c638u: goto label_14c638;
        case 0x14c63cu: goto label_14c63c;
        case 0x14c640u: goto label_14c640;
        case 0x14c644u: goto label_14c644;
        case 0x14c648u: goto label_14c648;
        case 0x14c64cu: goto label_14c64c;
        case 0x14c650u: goto label_14c650;
        case 0x14c654u: goto label_14c654;
        case 0x14c658u: goto label_14c658;
        case 0x14c65cu: goto label_14c65c;
        case 0x14c660u: goto label_14c660;
        case 0x14c664u: goto label_14c664;
        case 0x14c668u: goto label_14c668;
        case 0x14c66cu: goto label_14c66c;
        case 0x14c670u: goto label_14c670;
        case 0x14c674u: goto label_14c674;
        case 0x14c678u: goto label_14c678;
        case 0x14c67cu: goto label_14c67c;
        case 0x14c680u: goto label_14c680;
        case 0x14c684u: goto label_14c684;
        case 0x14c688u: goto label_14c688;
        case 0x14c68cu: goto label_14c68c;
        case 0x14c690u: goto label_14c690;
        case 0x14c694u: goto label_14c694;
        case 0x14c698u: goto label_14c698;
        case 0x14c69cu: goto label_14c69c;
        case 0x14c6a0u: goto label_14c6a0;
        case 0x14c6a4u: goto label_14c6a4;
        case 0x14c6a8u: goto label_14c6a8;
        case 0x14c6acu: goto label_14c6ac;
        case 0x14c6b0u: goto label_14c6b0;
        case 0x14c6b4u: goto label_14c6b4;
        case 0x14c6b8u: goto label_14c6b8;
        case 0x14c6bcu: goto label_14c6bc;
        case 0x14c6c0u: goto label_14c6c0;
        case 0x14c6c4u: goto label_14c6c4;
        case 0x14c6c8u: goto label_14c6c8;
        case 0x14c6ccu: goto label_14c6cc;
        case 0x14c6d0u: goto label_14c6d0;
        case 0x14c6d4u: goto label_14c6d4;
        case 0x14c6d8u: goto label_14c6d8;
        case 0x14c6dcu: goto label_14c6dc;
        case 0x14c6e0u: goto label_14c6e0;
        case 0x14c6e4u: goto label_14c6e4;
        case 0x14c6e8u: goto label_14c6e8;
        case 0x14c6ecu: goto label_14c6ec;
        case 0x14c6f0u: goto label_14c6f0;
        case 0x14c6f4u: goto label_14c6f4;
        case 0x14c6f8u: goto label_14c6f8;
        case 0x14c6fcu: goto label_14c6fc;
        case 0x14c700u: goto label_14c700;
        case 0x14c704u: goto label_14c704;
        case 0x14c708u: goto label_14c708;
        case 0x14c70cu: goto label_14c70c;
        case 0x14c710u: goto label_14c710;
        case 0x14c714u: goto label_14c714;
        case 0x14c718u: goto label_14c718;
        case 0x14c71cu: goto label_14c71c;
        case 0x14c720u: goto label_14c720;
        case 0x14c724u: goto label_14c724;
        case 0x14c728u: goto label_14c728;
        case 0x14c72cu: goto label_14c72c;
        case 0x14c730u: goto label_14c730;
        case 0x14c734u: goto label_14c734;
        case 0x14c738u: goto label_14c738;
        case 0x14c73cu: goto label_14c73c;
        case 0x14c740u: goto label_14c740;
        case 0x14c744u: goto label_14c744;
        case 0x14c748u: goto label_14c748;
        case 0x14c74cu: goto label_14c74c;
        case 0x14c750u: goto label_14c750;
        case 0x14c754u: goto label_14c754;
        case 0x14c758u: goto label_14c758;
        case 0x14c75cu: goto label_14c75c;
        case 0x14c760u: goto label_14c760;
        case 0x14c764u: goto label_14c764;
        case 0x14c768u: goto label_14c768;
        case 0x14c76cu: goto label_14c76c;
        case 0x14c770u: goto label_14c770;
        case 0x14c774u: goto label_14c774;
        case 0x14c778u: goto label_14c778;
        case 0x14c77cu: goto label_14c77c;
        case 0x14c780u: goto label_14c780;
        case 0x14c784u: goto label_14c784;
        case 0x14c788u: goto label_14c788;
        case 0x14c78cu: goto label_14c78c;
        case 0x14c790u: goto label_14c790;
        case 0x14c794u: goto label_14c794;
        case 0x14c798u: goto label_14c798;
        case 0x14c79cu: goto label_14c79c;
        case 0x14c7a0u: goto label_14c7a0;
        case 0x14c7a4u: goto label_14c7a4;
        case 0x14c7a8u: goto label_14c7a8;
        case 0x14c7acu: goto label_14c7ac;
        case 0x14c7b0u: goto label_14c7b0;
        case 0x14c7b4u: goto label_14c7b4;
        case 0x14c7b8u: goto label_14c7b8;
        case 0x14c7bcu: goto label_14c7bc;
        case 0x14c7c0u: goto label_14c7c0;
        case 0x14c7c4u: goto label_14c7c4;
        case 0x14c7c8u: goto label_14c7c8;
        case 0x14c7ccu: goto label_14c7cc;
        case 0x14c7d0u: goto label_14c7d0;
        case 0x14c7d4u: goto label_14c7d4;
        case 0x14c7d8u: goto label_14c7d8;
        case 0x14c7dcu: goto label_14c7dc;
        case 0x14c7e0u: goto label_14c7e0;
        case 0x14c7e4u: goto label_14c7e4;
        case 0x14c7e8u: goto label_14c7e8;
        case 0x14c7ecu: goto label_14c7ec;
        case 0x14c7f0u: goto label_14c7f0;
        case 0x14c7f4u: goto label_14c7f4;
        case 0x14c7f8u: goto label_14c7f8;
        case 0x14c7fcu: goto label_14c7fc;
        case 0x14c800u: goto label_14c800;
        case 0x14c804u: goto label_14c804;
        case 0x14c808u: goto label_14c808;
        case 0x14c80cu: goto label_14c80c;
        case 0x14c810u: goto label_14c810;
        case 0x14c814u: goto label_14c814;
        case 0x14c818u: goto label_14c818;
        case 0x14c81cu: goto label_14c81c;
        case 0x14c820u: goto label_14c820;
        case 0x14c824u: goto label_14c824;
        case 0x14c828u: goto label_14c828;
        case 0x14c82cu: goto label_14c82c;
        case 0x14c830u: goto label_14c830;
        case 0x14c834u: goto label_14c834;
        case 0x14c838u: goto label_14c838;
        case 0x14c83cu: goto label_14c83c;
        case 0x14c840u: goto label_14c840;
        case 0x14c844u: goto label_14c844;
        case 0x14c848u: goto label_14c848;
        case 0x14c84cu: goto label_14c84c;
        case 0x14c850u: goto label_14c850;
        case 0x14c854u: goto label_14c854;
        case 0x14c858u: goto label_14c858;
        case 0x14c85cu: goto label_14c85c;
        case 0x14c860u: goto label_14c860;
        case 0x14c864u: goto label_14c864;
        case 0x14c868u: goto label_14c868;
        case 0x14c86cu: goto label_14c86c;
        case 0x14c870u: goto label_14c870;
        case 0x14c874u: goto label_14c874;
        case 0x14c878u: goto label_14c878;
        case 0x14c87cu: goto label_14c87c;
        case 0x14c880u: goto label_14c880;
        case 0x14c884u: goto label_14c884;
        case 0x14c888u: goto label_14c888;
        case 0x14c88cu: goto label_14c88c;
        case 0x14c890u: goto label_14c890;
        case 0x14c894u: goto label_14c894;
        case 0x14c898u: goto label_14c898;
        case 0x14c89cu: goto label_14c89c;
        case 0x14c8a0u: goto label_14c8a0;
        case 0x14c8a4u: goto label_14c8a4;
        case 0x14c8a8u: goto label_14c8a8;
        case 0x14c8acu: goto label_14c8ac;
        case 0x14c8b0u: goto label_14c8b0;
        case 0x14c8b4u: goto label_14c8b4;
        case 0x14c8b8u: goto label_14c8b8;
        case 0x14c8bcu: goto label_14c8bc;
        case 0x14c8c0u: goto label_14c8c0;
        case 0x14c8c4u: goto label_14c8c4;
        case 0x14c8c8u: goto label_14c8c8;
        case 0x14c8ccu: goto label_14c8cc;
        case 0x14c8d0u: goto label_14c8d0;
        case 0x14c8d4u: goto label_14c8d4;
        case 0x14c8d8u: goto label_14c8d8;
        case 0x14c8dcu: goto label_14c8dc;
        case 0x14c8e0u: goto label_14c8e0;
        case 0x14c8e4u: goto label_14c8e4;
        case 0x14c8e8u: goto label_14c8e8;
        case 0x14c8ecu: goto label_14c8ec;
        case 0x14c8f0u: goto label_14c8f0;
        case 0x14c8f4u: goto label_14c8f4;
        case 0x14c8f8u: goto label_14c8f8;
        case 0x14c8fcu: goto label_14c8fc;
        case 0x14c900u: goto label_14c900;
        case 0x14c904u: goto label_14c904;
        case 0x14c908u: goto label_14c908;
        case 0x14c90cu: goto label_14c90c;
        case 0x14c910u: goto label_14c910;
        case 0x14c914u: goto label_14c914;
        case 0x14c918u: goto label_14c918;
        case 0x14c91cu: goto label_14c91c;
        case 0x14c920u: goto label_14c920;
        case 0x14c924u: goto label_14c924;
        case 0x14c928u: goto label_14c928;
        case 0x14c92cu: goto label_14c92c;
        case 0x14c930u: goto label_14c930;
        case 0x14c934u: goto label_14c934;
        case 0x14c938u: goto label_14c938;
        case 0x14c93cu: goto label_14c93c;
        case 0x14c940u: goto label_14c940;
        case 0x14c944u: goto label_14c944;
        case 0x14c948u: goto label_14c948;
        case 0x14c94cu: goto label_14c94c;
        case 0x14c950u: goto label_14c950;
        case 0x14c954u: goto label_14c954;
        case 0x14c958u: goto label_14c958;
        case 0x14c95cu: goto label_14c95c;
        case 0x14c960u: goto label_14c960;
        case 0x14c964u: goto label_14c964;
        case 0x14c968u: goto label_14c968;
        case 0x14c96cu: goto label_14c96c;
        case 0x14c970u: goto label_14c970;
        case 0x14c974u: goto label_14c974;
        case 0x14c978u: goto label_14c978;
        case 0x14c97cu: goto label_14c97c;
        case 0x14c980u: goto label_14c980;
        case 0x14c984u: goto label_14c984;
        case 0x14c988u: goto label_14c988;
        case 0x14c98cu: goto label_14c98c;
        case 0x14c990u: goto label_14c990;
        case 0x14c994u: goto label_14c994;
        case 0x14c998u: goto label_14c998;
        case 0x14c99cu: goto label_14c99c;
        case 0x14c9a0u: goto label_14c9a0;
        case 0x14c9a4u: goto label_14c9a4;
        case 0x14c9a8u: goto label_14c9a8;
        case 0x14c9acu: goto label_14c9ac;
        case 0x14c9b0u: goto label_14c9b0;
        case 0x14c9b4u: goto label_14c9b4;
        case 0x14c9b8u: goto label_14c9b8;
        case 0x14c9bcu: goto label_14c9bc;
        case 0x14c9c0u: goto label_14c9c0;
        case 0x14c9c4u: goto label_14c9c4;
        case 0x14c9c8u: goto label_14c9c8;
        case 0x14c9ccu: goto label_14c9cc;
        case 0x14c9d0u: goto label_14c9d0;
        case 0x14c9d4u: goto label_14c9d4;
        case 0x14c9d8u: goto label_14c9d8;
        case 0x14c9dcu: goto label_14c9dc;
        case 0x14c9e0u: goto label_14c9e0;
        case 0x14c9e4u: goto label_14c9e4;
        case 0x14c9e8u: goto label_14c9e8;
        case 0x14c9ecu: goto label_14c9ec;
        case 0x14c9f0u: goto label_14c9f0;
        case 0x14c9f4u: goto label_14c9f4;
        case 0x14c9f8u: goto label_14c9f8;
        case 0x14c9fcu: goto label_14c9fc;
        case 0x14ca00u: goto label_14ca00;
        case 0x14ca04u: goto label_14ca04;
        case 0x14ca08u: goto label_14ca08;
        case 0x14ca0cu: goto label_14ca0c;
        case 0x14ca10u: goto label_14ca10;
        case 0x14ca14u: goto label_14ca14;
        case 0x14ca18u: goto label_14ca18;
        case 0x14ca1cu: goto label_14ca1c;
        case 0x14ca20u: goto label_14ca20;
        case 0x14ca24u: goto label_14ca24;
        case 0x14ca28u: goto label_14ca28;
        case 0x14ca2cu: goto label_14ca2c;
        case 0x14ca30u: goto label_14ca30;
        case 0x14ca34u: goto label_14ca34;
        case 0x14ca38u: goto label_14ca38;
        case 0x14ca3cu: goto label_14ca3c;
        case 0x14ca40u: goto label_14ca40;
        case 0x14ca44u: goto label_14ca44;
        case 0x14ca48u: goto label_14ca48;
        case 0x14ca4cu: goto label_14ca4c;
        case 0x14ca50u: goto label_14ca50;
        case 0x14ca54u: goto label_14ca54;
        case 0x14ca58u: goto label_14ca58;
        case 0x14ca5cu: goto label_14ca5c;
        case 0x14ca60u: goto label_14ca60;
        case 0x14ca64u: goto label_14ca64;
        case 0x14ca68u: goto label_14ca68;
        case 0x14ca6cu: goto label_14ca6c;
        case 0x14ca70u: goto label_14ca70;
        case 0x14ca74u: goto label_14ca74;
        case 0x14ca78u: goto label_14ca78;
        case 0x14ca7cu: goto label_14ca7c;
        case 0x14ca80u: goto label_14ca80;
        case 0x14ca84u: goto label_14ca84;
        case 0x14ca88u: goto label_14ca88;
        case 0x14ca8cu: goto label_14ca8c;
        case 0x14ca90u: goto label_14ca90;
        case 0x14ca94u: goto label_14ca94;
        case 0x14ca98u: goto label_14ca98;
        case 0x14ca9cu: goto label_14ca9c;
        case 0x14caa0u: goto label_14caa0;
        case 0x14caa4u: goto label_14caa4;
        case 0x14caa8u: goto label_14caa8;
        case 0x14caacu: goto label_14caac;
        case 0x14cab0u: goto label_14cab0;
        case 0x14cab4u: goto label_14cab4;
        case 0x14cab8u: goto label_14cab8;
        case 0x14cabcu: goto label_14cabc;
        case 0x14cac0u: goto label_14cac0;
        case 0x14cac4u: goto label_14cac4;
        case 0x14cac8u: goto label_14cac8;
        case 0x14caccu: goto label_14cacc;
        case 0x14cad0u: goto label_14cad0;
        case 0x14cad4u: goto label_14cad4;
        case 0x14cad8u: goto label_14cad8;
        case 0x14cadcu: goto label_14cadc;
        case 0x14cae0u: goto label_14cae0;
        case 0x14cae4u: goto label_14cae4;
        case 0x14cae8u: goto label_14cae8;
        case 0x14caecu: goto label_14caec;
        case 0x14caf0u: goto label_14caf0;
        case 0x14caf4u: goto label_14caf4;
        case 0x14caf8u: goto label_14caf8;
        case 0x14cafcu: goto label_14cafc;
        case 0x14cb00u: goto label_14cb00;
        case 0x14cb04u: goto label_14cb04;
        case 0x14cb08u: goto label_14cb08;
        case 0x14cb0cu: goto label_14cb0c;
        case 0x14cb10u: goto label_14cb10;
        case 0x14cb14u: goto label_14cb14;
        case 0x14cb18u: goto label_14cb18;
        default: break;
    }

    ctx->pc = 0x14c350u;

label_14c350:
    // 0x14c350: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x14c350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_14c354:
    // 0x14c354: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x14c354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_14c358:
    // 0x14c358: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x14c358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_14c35c:
    // 0x14c35c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x14c35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_14c360:
    // 0x14c360: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x14c360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_14c364:
    // 0x14c364: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x14c364u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14c368:
    // 0x14c368: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x14c368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_14c36c:
    // 0x14c36c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x14c36cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_14c370:
    // 0x14c370: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x14c370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_14c374:
    // 0x14c374: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x14c374u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_14c378:
    // 0x14c378: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x14c378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_14c37c:
    // 0x14c37c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x14c37cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14c380:
    // 0x14c380: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x14c380u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_14c384:
    // 0x14c384: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x14c384u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_14c388:
    // 0x14c388: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x14c388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_14c38c:
    // 0x14c38c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x14c38cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
label_14c390:
    // 0x14c390: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x14c390u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_14c394:
    // 0x14c394: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
label_14c398:
    if (ctx->pc == 0x14C398u) {
        ctx->pc = 0x14C398u;
            // 0x14c398: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14C39Cu;
        goto label_14c39c;
    }
    ctx->pc = 0x14C394u;
    {
        const bool branch_taken_0x14c394 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C398u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C394u;
            // 0x14c398: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c394) {
            ctx->pc = 0x14C3E4u;
            goto label_14c3e4;
        }
    }
    ctx->pc = 0x14C39Cu;
label_14c39c:
    // 0x14c39c: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x14c39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_14c3a0:
    // 0x14c3a0: 0x0  nop
    ctx->pc = 0x14c3a0u;
    // NOP
label_14c3a4:
    // 0x14c3a4: 0x1071821  addu        $v1, $t0, $a3
    ctx->pc = 0x14c3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
label_14c3a8:
    // 0x14c3a8: 0x34843  sra         $t1, $v1, 1
    ctx->pc = 0x14c3a8u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 3), 1));
label_14c3ac:
    // 0x14c3ac: 0x91880  sll         $v1, $t1, 2
    ctx->pc = 0x14c3acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_14c3b0:
    // 0x14c3b0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x14c3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_14c3b4:
    // 0x14c3b4: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14c3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14c3b8:
    // 0x14c3b8: 0xa3082b  sltu        $at, $a1, $v1
    ctx->pc = 0x14c3b8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_14c3bc:
    // 0x14c3bc: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_14c3c0:
    if (ctx->pc == 0x14C3C0u) {
        ctx->pc = 0x14C3C4u;
        goto label_14c3c4;
    }
    ctx->pc = 0x14C3BCu;
    {
        const bool branch_taken_0x14c3bc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c3bc) {
            ctx->pc = 0x14C3CCu;
            goto label_14c3cc;
        }
    }
    ctx->pc = 0x14C3C4u;
label_14c3c4:
    // 0x14c3c4: 0x10000003  b           . + 4 + (0x3 << 2)
label_14c3c8:
    if (ctx->pc == 0x14C3C8u) {
        ctx->pc = 0x14C3C8u;
            // 0x14c3c8: 0x25280001  addiu       $t0, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->pc = 0x14C3CCu;
        goto label_14c3cc;
    }
    ctx->pc = 0x14C3C4u;
    {
        const bool branch_taken_0x14c3c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C3C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C3C4u;
            // 0x14c3c8: 0x25280001  addiu       $t0, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c3c4) {
            ctx->pc = 0x14C3D4u;
            goto label_14c3d4;
        }
    }
    ctx->pc = 0x14C3CCu;
label_14c3cc:
    // 0x14c3cc: 0x0  nop
    ctx->pc = 0x14c3ccu;
    // NOP
label_14c3d0:
    // 0x14c3d0: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x14c3d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_14c3d4:
    // 0x14c3d4: 0x0  nop
    ctx->pc = 0x14c3d4u;
    // NOP
label_14c3d8:
    // 0x14c3d8: 0x107182a  slt         $v1, $t0, $a3
    ctx->pc = 0x14c3d8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_14c3dc:
    // 0x14c3dc: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_14c3e0:
    if (ctx->pc == 0x14C3E0u) {
        ctx->pc = 0x14C3E0u;
            // 0x14c3e0: 0x1071821  addu        $v1, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->pc = 0x14C3E4u;
        goto label_14c3e4;
    }
    ctx->pc = 0x14C3DCu;
    {
        const bool branch_taken_0x14c3dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C3DCu;
            // 0x14c3e0: 0x1071821  addu        $v1, $t0, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c3dc) {
            ctx->pc = 0x14C3A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14c3a8;
        }
    }
    ctx->pc = 0x14C3E4u;
label_14c3e4:
    // 0x14c3e4: 0x0  nop
    ctx->pc = 0x14c3e4u;
    // NOP
label_14c3e8:
    // 0x14c3e8: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x14c3e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_14c3ec:
    // 0x14c3ec: 0x2510ffff  addiu       $s0, $t0, -0x1
    ctx->pc = 0x14c3ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
label_14c3f0:
    // 0x14c3f0: 0x10200012  beqz        $at, . + 4 + (0x12 << 2)
label_14c3f4:
    if (ctx->pc == 0x14C3F4u) {
        ctx->pc = 0x14C3F4u;
            // 0x14c3f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14C3F8u;
        goto label_14c3f8;
    }
    ctx->pc = 0x14C3F0u;
    {
        const bool branch_taken_0x14c3f0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C3F0u;
            // 0x14c3f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c3f0) {
            ctx->pc = 0x14C43Cu;
            goto label_14c43c;
        }
    }
    ctx->pc = 0x14C3F8u;
label_14c3f8:
    // 0x14c3f8: 0x8e640014  lw          $a0, 0x14($s3)
    ctx->pc = 0x14c3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_14c3fc:
    // 0x14c3fc: 0x0  nop
    ctx->pc = 0x14c3fcu;
    // NOP
label_14c400:
    // 0x14c400: 0xa21821  addu        $v1, $a1, $v0
    ctx->pc = 0x14c400u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_14c404:
    // 0x14c404: 0x33843  sra         $a3, $v1, 1
    ctx->pc = 0x14c404u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 1));
label_14c408:
    // 0x14c408: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x14c408u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_14c40c:
    // 0x14c40c: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x14c40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_14c410:
    // 0x14c410: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x14c410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_14c414:
    // 0x14c414: 0xc3082b  sltu        $at, $a2, $v1
    ctx->pc = 0x14c414u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_14c418:
    // 0x14c418: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_14c41c:
    if (ctx->pc == 0x14C41Cu) {
        ctx->pc = 0x14C420u;
        goto label_14c420;
    }
    ctx->pc = 0x14C418u;
    {
        const bool branch_taken_0x14c418 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x14c418) {
            ctx->pc = 0x14C428u;
            goto label_14c428;
        }
    }
    ctx->pc = 0x14C420u;
label_14c420:
    // 0x14c420: 0x10000002  b           . + 4 + (0x2 << 2)
label_14c424:
    if (ctx->pc == 0x14C424u) {
        ctx->pc = 0x14C424u;
            // 0x14c424: 0x24e50001  addiu       $a1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->pc = 0x14C428u;
        goto label_14c428;
    }
    ctx->pc = 0x14C420u;
    {
        const bool branch_taken_0x14c420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C420u;
            // 0x14c424: 0x24e50001  addiu       $a1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c420) {
            ctx->pc = 0x14C42Cu;
            goto label_14c42c;
        }
    }
    ctx->pc = 0x14C428u;
label_14c428:
    // 0x14c428: 0xe0102d  daddu       $v0, $a3, $zero
    ctx->pc = 0x14c428u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_14c42c:
    // 0x14c42c: 0x0  nop
    ctx->pc = 0x14c42cu;
    // NOP
label_14c430:
    // 0x14c430: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x14c430u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_14c434:
    // 0x14c434: 0x1460fff3  bnez        $v1, . + 4 + (-0xD << 2)
label_14c438:
    if (ctx->pc == 0x14C438u) {
        ctx->pc = 0x14C438u;
            // 0x14c438: 0xa21821  addu        $v1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->pc = 0x14C43Cu;
        goto label_14c43c;
    }
    ctx->pc = 0x14C434u;
    {
        const bool branch_taken_0x14c434 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x14C438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C434u;
            // 0x14c438: 0xa21821  addu        $v1, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c434) {
            ctx->pc = 0x14C404u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14c404;
        }
    }
    ctx->pc = 0x14C43Cu;
label_14c43c:
    // 0x14c43c: 0x0  nop
    ctx->pc = 0x14c43cu;
    // NOP
label_14c440:
    // 0x14c440: 0x24b1ffff  addiu       $s1, $a1, -0x1
    ctx->pc = 0x14c440u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_14c444:
    // 0x14c444: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x14c444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_14c448:
    // 0x14c448: 0xc04d9ec  jal         func_1367B0
label_14c44c:
    if (ctx->pc == 0x14C44Cu) {
        ctx->pc = 0x14C44Cu;
            // 0x14c44c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14C450u;
        goto label_14c450;
    }
    ctx->pc = 0x14C448u;
    SET_GPR_U32(ctx, 31, 0x14C450u);
    ctx->pc = 0x14C44Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C448u;
            // 0x14c44c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1367B0u;
    if (runtime->hasFunction(0x1367B0u)) {
        auto targetFn = runtime->lookupFunction(0x1367B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C450u; }
        if (ctx->pc != 0x14C450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFrame__8mgCFrameFi_0x1367b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C450u; }
        if (ctx->pc != 0x14C450u) { return; }
    }
    ctx->pc = 0x14C450u;
label_14c450:
    // 0x14c450: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x14c450u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_14c454:
    // 0x14c454: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x14c454u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_14c458:
    // 0x14c458: 0x24020033  addiu       $v0, $zero, 0x33
    ctx->pc = 0x14c458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
label_14c45c:
    // 0x14c45c: 0x10620191  beq         $v1, $v0, . + 4 + (0x191 << 2)
label_14c460:
    if (ctx->pc == 0x14C460u) {
        ctx->pc = 0x14C460u;
            // 0x14c460: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->pc = 0x14C464u;
        goto label_14c464;
    }
    ctx->pc = 0x14C45Cu;
    {
        const bool branch_taken_0x14c45c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14C460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C45Cu;
            // 0x14c460: 0x24020032  addiu       $v0, $zero, 0x32 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c45c) {
            ctx->pc = 0x14CAA4u;
            goto label_14caa4;
        }
    }
    ctx->pc = 0x14C464u;
label_14c464:
    // 0x14c464: 0x1062017e  beq         $v1, $v0, . + 4 + (0x17E << 2)
label_14c468:
    if (ctx->pc == 0x14C468u) {
        ctx->pc = 0x14C468u;
            // 0x14c468: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->pc = 0x14C46Cu;
        goto label_14c46c;
    }
    ctx->pc = 0x14C464u;
    {
        const bool branch_taken_0x14c464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14C468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C464u;
            // 0x14c468: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c464) {
            ctx->pc = 0x14CA60u;
            goto label_14ca60;
        }
    }
    ctx->pc = 0x14C46Cu;
label_14c46c:
    // 0x14c46c: 0x10620153  beq         $v1, $v0, . + 4 + (0x153 << 2)
label_14c470:
    if (ctx->pc == 0x14C470u) {
        ctx->pc = 0x14C470u;
            // 0x14c470: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x14C474u;
        goto label_14c474;
    }
    ctx->pc = 0x14C46Cu;
    {
        const bool branch_taken_0x14c46c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14C470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C46Cu;
            // 0x14c470: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c46c) {
            ctx->pc = 0x14C9BCu;
            goto label_14c9bc;
        }
    }
    ctx->pc = 0x14C474u;
label_14c474:
    // 0x14c474: 0x10620136  beq         $v1, $v0, . + 4 + (0x136 << 2)
label_14c478:
    if (ctx->pc == 0x14C478u) {
        ctx->pc = 0x14C478u;
            // 0x14c478: 0x24020029  addiu       $v0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->pc = 0x14C47Cu;
        goto label_14c47c;
    }
    ctx->pc = 0x14C474u;
    {
        const bool branch_taken_0x14c474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14C478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C474u;
            // 0x14c478: 0x24020029  addiu       $v0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c474) {
            ctx->pc = 0x14C950u;
            goto label_14c950;
        }
    }
    ctx->pc = 0x14C47Cu;
label_14c47c:
    // 0x14c47c: 0x1062011f  beq         $v1, $v0, . + 4 + (0x11F << 2)
label_14c480:
    if (ctx->pc == 0x14C480u) {
        ctx->pc = 0x14C480u;
            // 0x14c480: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x14C484u;
        goto label_14c484;
    }
    ctx->pc = 0x14C47Cu;
    {
        const bool branch_taken_0x14c47c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14C480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C47Cu;
            // 0x14c480: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c47c) {
            ctx->pc = 0x14C8FCu;
            goto label_14c8fc;
        }
    }
    ctx->pc = 0x14C484u;
label_14c484:
    // 0x14c484: 0x10620100  beq         $v1, $v0, . + 4 + (0x100 << 2)
label_14c488:
    if (ctx->pc == 0x14C488u) {
        ctx->pc = 0x14C488u;
            // 0x14c488: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->pc = 0x14C48Cu;
        goto label_14c48c;
    }
    ctx->pc = 0x14C484u;
    {
        const bool branch_taken_0x14c484 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14C488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C484u;
            // 0x14c488: 0x2402001f  addiu       $v0, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c484) {
            ctx->pc = 0x14C888u;
            goto label_14c888;
        }
    }
    ctx->pc = 0x14C48Cu;
label_14c48c:
    // 0x14c48c: 0x106200e9  beq         $v1, $v0, . + 4 + (0xE9 << 2)
label_14c490:
    if (ctx->pc == 0x14C490u) {
        ctx->pc = 0x14C490u;
            // 0x14c490: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x14C494u;
        goto label_14c494;
    }
    ctx->pc = 0x14C48Cu;
    {
        const bool branch_taken_0x14c48c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14C490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C48Cu;
            // 0x14c490: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c48c) {
            ctx->pc = 0x14C834u;
            goto label_14c834;
        }
    }
    ctx->pc = 0x14C494u;
label_14c494:
    // 0x14c494: 0x106200d2  beq         $v1, $v0, . + 4 + (0xD2 << 2)
label_14c498:
    if (ctx->pc == 0x14C498u) {
        ctx->pc = 0x14C498u;
            // 0x14c498: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x14C49Cu;
        goto label_14c49c;
    }
    ctx->pc = 0x14C494u;
    {
        const bool branch_taken_0x14c494 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14C498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C494u;
            // 0x14c498: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c494) {
            ctx->pc = 0x14C7E0u;
            goto label_14c7e0;
        }
    }
    ctx->pc = 0x14C49Cu;
label_14c49c:
    // 0x14c49c: 0x10620065  beq         $v1, $v0, . + 4 + (0x65 << 2)
label_14c4a0:
    if (ctx->pc == 0x14C4A0u) {
        ctx->pc = 0x14C4A0u;
            // 0x14c4a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x14C4A4u;
        goto label_14c4a4;
    }
    ctx->pc = 0x14C49Cu;
    {
        const bool branch_taken_0x14c49c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14C4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C49Cu;
            // 0x14c4a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c49c) {
            ctx->pc = 0x14C634u;
            goto label_14c634;
        }
    }
    ctx->pc = 0x14C4A4u;
label_14c4a4:
    // 0x14c4a4: 0x10620052  beq         $v1, $v0, . + 4 + (0x52 << 2)
label_14c4a8:
    if (ctx->pc == 0x14C4A8u) {
        ctx->pc = 0x14C4A8u;
            // 0x14c4a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x14C4ACu;
        goto label_14c4ac;
    }
    ctx->pc = 0x14C4A4u;
    {
        const bool branch_taken_0x14c4a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x14C4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C4A4u;
            // 0x14c4a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c4a4) {
            ctx->pc = 0x14C5F0u;
            goto label_14c5f0;
        }
    }
    ctx->pc = 0x14C4ACu;
label_14c4ac:
    // 0x14c4ac: 0x1062003f  beq         $v1, $v0, . + 4 + (0x3F << 2)
label_14c4b0:
    if (ctx->pc == 0x14C4B0u) {
        ctx->pc = 0x14C4B4u;
        goto label_14c4b4;
    }
    ctx->pc = 0x14C4ACu;
    {
        const bool branch_taken_0x14c4ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14c4ac) {
            ctx->pc = 0x14C5ACu;
            goto label_14c5ac;
        }
    }
    ctx->pc = 0x14C4B4u;
label_14c4b4:
    // 0x14c4b4: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_14c4b8:
    if (ctx->pc == 0x14C4B8u) {
        ctx->pc = 0x14C4BCu;
        goto label_14c4bc;
    }
    ctx->pc = 0x14C4B4u;
    {
        const bool branch_taken_0x14c4b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c4b4) {
            ctx->pc = 0x14C4C4u;
            goto label_14c4c4;
        }
    }
    ctx->pc = 0x14C4BCu;
label_14c4bc:
    // 0x14c4bc: 0x1000018b  b           . + 4 + (0x18B << 2)
label_14c4c0:
    if (ctx->pc == 0x14C4C0u) {
        ctx->pc = 0x14C4C0u;
            // 0x14c4c0: 0x8e620018  lw          $v0, 0x18($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->pc = 0x14C4C4u;
        goto label_14c4c4;
    }
    ctx->pc = 0x14C4BCu;
    {
        const bool branch_taken_0x14c4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C4BCu;
            // 0x14c4c0: 0x8e620018  lw          $v0, 0x18($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c4bc) {
            ctx->pc = 0x14CAECu;
            goto label_14caec;
        }
    }
    ctx->pc = 0x14C4C4u;
label_14c4c4:
    // 0x14c4c4: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x14c4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_14c4c8:
    // 0x14c4c8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x14c4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_14c4cc:
    // 0x14c4cc: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x14c4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_14c4d0:
    // 0x14c4d0: 0xc041c5c  jal         func_107170
label_14c4d4:
    if (ctx->pc == 0x14C4D4u) {
        ctx->pc = 0x14C4D4u;
            // 0x14c4d4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x14C4D8u;
        goto label_14c4d8;
    }
    ctx->pc = 0x14C4D0u;
    SET_GPR_U32(ctx, 31, 0x14C4D8u);
    ctx->pc = 0x14C4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C4D0u;
            // 0x14c4d4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C4D8u; }
        if (ctx->pc != 0x14C4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C4D8u; }
        if (ctx->pc != 0x14C4D8u) { return; }
    }
    ctx->pc = 0x14C4D8u;
label_14c4d8:
    // 0x14c4d8: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x14c4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_14c4dc:
    // 0x14c4dc: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x14c4dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_14c4e0:
    // 0x14c4e0: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x14c4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_14c4e4:
    // 0x14c4e4: 0xc041c5c  jal         func_107170
label_14c4e8:
    if (ctx->pc == 0x14C4E8u) {
        ctx->pc = 0x14C4E8u;
            // 0x14c4e8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x14C4ECu;
        goto label_14c4ec;
    }
    ctx->pc = 0x14C4E4u;
    SET_GPR_U32(ctx, 31, 0x14C4ECu);
    ctx->pc = 0x14C4E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C4E4u;
            // 0x14c4e8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C4ECu; }
        if (ctx->pc != 0x14C4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C4ECu; }
        if (ctx->pc != 0x14C4ECu) { return; }
    }
    ctx->pc = 0x14C4ECu;
label_14c4ec:
    // 0x14c4ec: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x14c4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
label_14c4f0:
    // 0x14c4f0: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x14c4f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
label_14c4f4:
    // 0x14c4f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c4f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c4f8:
    // 0x14c4f8: 0x0  nop
    ctx->pc = 0x14c4f8u;
    // NOP
label_14c4fc:
    // 0x14c4fc: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x14c4fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14c500:
    // 0x14c500: 0x0  nop
    ctx->pc = 0x14c500u;
    // NOP
label_14c504:
    // 0x14c504: 0x45010013  bc1t        . + 4 + (0x13 << 2)
label_14c508:
    if (ctx->pc == 0x14C508u) {
        ctx->pc = 0x14C508u;
            // 0x14c508: 0x3c0238d1  lui         $v0, 0x38D1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
        ctx->pc = 0x14C50Cu;
        goto label_14c50c;
    }
    ctx->pc = 0x14C504u;
    {
        const bool branch_taken_0x14c504 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14C508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C504u;
            // 0x14c508: 0x3c0238d1  lui         $v0, 0x38D1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c504) {
            ctx->pc = 0x14C554u;
            goto label_14c554;
        }
    }
    ctx->pc = 0x14C50Cu;
label_14c50c:
    // 0x14c50c: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x14c50cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
label_14c510:
    // 0x14c510: 0x3442f972  ori         $v0, $v0, 0xF972
    ctx->pc = 0x14c510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63858);
label_14c514:
    // 0x14c514: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c514u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c518:
    // 0x14c518: 0x0  nop
    ctx->pc = 0x14c518u;
    // NOP
label_14c51c:
    // 0x14c51c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x14c51cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14c520:
    // 0x14c520: 0x0  nop
    ctx->pc = 0x14c520u;
    // NOP
label_14c524:
    // 0x14c524: 0x4500000a  bc1f        . + 4 + (0xA << 2)
label_14c528:
    if (ctx->pc == 0x14C528u) {
        ctx->pc = 0x14C528u;
            // 0x14c528: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x14C52Cu;
        goto label_14c52c;
    }
    ctx->pc = 0x14C524u;
    {
        const bool branch_taken_0x14c524 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14C528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C524u;
            // 0x14c528: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c524) {
            ctx->pc = 0x14C550u;
            goto label_14c550;
        }
    }
    ctx->pc = 0x14C52Cu;
label_14c52c:
    // 0x14c52c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x14c52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_14c530:
    // 0x14c530: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x14c530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_14c534:
    // 0x14c534: 0xc052e10  jal         func_14B840
label_14c538:
    if (ctx->pc == 0x14C538u) {
        ctx->pc = 0x14C538u;
            // 0x14c538: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x14C53Cu;
        goto label_14c53c;
    }
    ctx->pc = 0x14C534u;
    SET_GPR_U32(ctx, 31, 0x14C53Cu);
    ctx->pc = 0x14C538u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C534u;
            // 0x14c538: 0x27a60090  addiu       $a2, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B840u;
    if (runtime->hasFunction(0x14B840u)) {
        auto targetFn = runtime->lookupFunction(0x14B840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C53Cu; }
        if (ctx->pc != 0x14C53Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        QuatSlerp__FPfPffPf_0x14b840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C53Cu; }
        if (ctx->pc != 0x14C53Cu) { return; }
    }
    ctx->pc = 0x14C53Cu;
label_14c53c:
    // 0x14c53c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14c53cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_14c540:
    // 0x14c540: 0xc04d968  jal         func_1365A0
label_14c544:
    if (ctx->pc == 0x14C544u) {
        ctx->pc = 0x14C544u;
            // 0x14c544: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x14C548u;
        goto label_14c548;
    }
    ctx->pc = 0x14C540u;
    SET_GPR_U32(ctx, 31, 0x14C548u);
    ctx->pc = 0x14C544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C540u;
            // 0x14c544: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1365A0u;
    if (runtime->hasFunction(0x1365A0u)) {
        auto targetFn = runtime->lookupFunction(0x1365A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C548u; }
        if (ctx->pc != 0x14C548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTransMatrix__8mgCFrameFPf_0x1365a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C548u; }
        if (ctx->pc != 0x14C548u) { return; }
    }
    ctx->pc = 0x14C548u;
label_14c548:
    // 0x14c548: 0x10000167  b           . + 4 + (0x167 << 2)
label_14c54c:
    if (ctx->pc == 0x14C54Cu) {
        ctx->pc = 0x14C550u;
        goto label_14c550;
    }
    ctx->pc = 0x14C548u;
    {
        const bool branch_taken_0x14c548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c548) {
            ctx->pc = 0x14CAE8u;
            goto label_14cae8;
        }
    }
    ctx->pc = 0x14C550u;
label_14c550:
    // 0x14c550: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x14c550u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
label_14c554:
    // 0x14c554: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x14c554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
label_14c558:
    // 0x14c558: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c55c:
    // 0x14c55c: 0x0  nop
    ctx->pc = 0x14c55cu;
    // NOP
label_14c560:
    // 0x14c560: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x14c560u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14c564:
    // 0x14c564: 0x0  nop
    ctx->pc = 0x14c564u;
    // NOP
label_14c568:
    // 0x14c568: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_14c56c:
    if (ctx->pc == 0x14C56Cu) {
        ctx->pc = 0x14C56Cu;
            // 0x14c56c: 0x3c023f7f  lui         $v0, 0x3F7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
        ctx->pc = 0x14C570u;
        goto label_14c570;
    }
    ctx->pc = 0x14C568u;
    {
        const bool branch_taken_0x14c568 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14C56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C568u;
            // 0x14c56c: 0x3c023f7f  lui         $v0, 0x3F7F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c568) {
            ctx->pc = 0x14C580u;
            goto label_14c580;
        }
    }
    ctx->pc = 0x14C570u;
label_14c570:
    // 0x14c570: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14c570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_14c574:
    // 0x14c574: 0xc04d968  jal         func_1365A0
label_14c578:
    if (ctx->pc == 0x14C578u) {
        ctx->pc = 0x14C578u;
            // 0x14c578: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x14C57Cu;
        goto label_14c57c;
    }
    ctx->pc = 0x14C574u;
    SET_GPR_U32(ctx, 31, 0x14C57Cu);
    ctx->pc = 0x14C578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C574u;
            // 0x14c578: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1365A0u;
    if (runtime->hasFunction(0x1365A0u)) {
        auto targetFn = runtime->lookupFunction(0x1365A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C57Cu; }
        if (ctx->pc != 0x14C57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTransMatrix__8mgCFrameFPf_0x1365a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C57Cu; }
        if (ctx->pc != 0x14C57Cu) { return; }
    }
    ctx->pc = 0x14C57Cu;
label_14c57c:
    // 0x14c57c: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x14c57cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
label_14c580:
    // 0x14c580: 0x3442f972  ori         $v0, $v0, 0xF972
    ctx->pc = 0x14c580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63858);
label_14c584:
    // 0x14c584: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c588:
    // 0x14c588: 0x0  nop
    ctx->pc = 0x14c588u;
    // NOP
label_14c58c:
    // 0x14c58c: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x14c58cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14c590:
    // 0x14c590: 0x0  nop
    ctx->pc = 0x14c590u;
    // NOP
label_14c594:
    // 0x14c594: 0x45010154  bc1t        . + 4 + (0x154 << 2)
label_14c598:
    if (ctx->pc == 0x14C598u) {
        ctx->pc = 0x14C598u;
            // 0x14c598: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14C59Cu;
        goto label_14c59c;
    }
    ctx->pc = 0x14C594u;
    {
        const bool branch_taken_0x14c594 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14C598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C594u;
            // 0x14c598: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c594) {
            ctx->pc = 0x14CAE8u;
            goto label_14cae8;
        }
    }
    ctx->pc = 0x14C59Cu;
label_14c59c:
    // 0x14c59c: 0xc04d968  jal         func_1365A0
label_14c5a0:
    if (ctx->pc == 0x14C5A0u) {
        ctx->pc = 0x14C5A0u;
            // 0x14c5a0: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x14C5A4u;
        goto label_14c5a4;
    }
    ctx->pc = 0x14C59Cu;
    SET_GPR_U32(ctx, 31, 0x14C5A4u);
    ctx->pc = 0x14C5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C59Cu;
            // 0x14c5a0: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1365A0u;
    if (runtime->hasFunction(0x1365A0u)) {
        auto targetFn = runtime->lookupFunction(0x1365A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C5A4u; }
        if (ctx->pc != 0x14C5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTransMatrix__8mgCFrameFPf_0x1365a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C5A4u; }
        if (ctx->pc != 0x14C5A4u) { return; }
    }
    ctx->pc = 0x14C5A4u;
label_14c5a4:
    // 0x14c5a4: 0x10000150  b           . + 4 + (0x150 << 2)
label_14c5a8:
    if (ctx->pc == 0x14C5A8u) {
        ctx->pc = 0x14C5ACu;
        goto label_14c5ac;
    }
    ctx->pc = 0x14C5A4u;
    {
        const bool branch_taken_0x14c5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c5a4) {
            ctx->pc = 0x14CAE8u;
            goto label_14cae8;
        }
    }
    ctx->pc = 0x14C5ACu;
label_14c5ac:
    // 0x14c5ac: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x14c5acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_14c5b0:
    // 0x14c5b0: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x14c5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_14c5b4:
    // 0x14c5b4: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x14c5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_14c5b8:
    // 0x14c5b8: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x14c5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_14c5bc:
    // 0x14c5bc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x14c5bcu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_14c5c0:
    // 0x14c5c0: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x14c5c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_14c5c4:
    // 0x14c5c4: 0xc041e8a  jal         func_107A28
label_14c5c8:
    if (ctx->pc == 0x14C5C8u) {
        ctx->pc = 0x14C5C8u;
            // 0x14c5c8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x14C5CCu;
        goto label_14c5cc;
    }
    ctx->pc = 0x14C5C4u;
    SET_GPR_U32(ctx, 31, 0x14C5CCu);
    ctx->pc = 0x14C5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C5C4u;
            // 0x14c5c8: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A28u;
    if (runtime->hasFunction(0x107A28u)) {
        auto targetFn = runtime->lookupFunction(0x107A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C5CCu; }
        if (ctx->pc != 0x14C5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InterVectorXYZ_0x107a28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C5CCu; }
        if (ctx->pc != 0x14C5CCu) { return; }
    }
    ctx->pc = 0x14C5CCu;
label_14c5cc:
    // 0x14c5cc: 0x8eb90000  lw          $t9, 0x0($s5)
    ctx->pc = 0x14c5ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_14c5d0:
    // 0x14c5d0: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x14c5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14c5d4:
    // 0x14c5d4: 0xc7ad0084  lwc1        $f13, 0x84($sp)
    ctx->pc = 0x14c5d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_14c5d8:
    // 0x14c5d8: 0xc7ae0088  lwc1        $f14, 0x88($sp)
    ctx->pc = 0x14c5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_14c5dc:
    // 0x14c5dc: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x14c5dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_14c5e0:
    // 0x14c5e0: 0x320f809  jalr        $t9
label_14c5e4:
    if (ctx->pc == 0x14C5E4u) {
        ctx->pc = 0x14C5E4u;
            // 0x14c5e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14C5E8u;
        goto label_14c5e8;
    }
    ctx->pc = 0x14C5E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14C5E8u);
        ctx->pc = 0x14C5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C5E0u;
            // 0x14c5e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x14C5E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x14C5E8u; }
            if (ctx->pc != 0x14C5E8u) { return; }
        }
        }
    }
    ctx->pc = 0x14C5E8u;
label_14c5e8:
    // 0x14c5e8: 0x1000013f  b           . + 4 + (0x13F << 2)
label_14c5ec:
    if (ctx->pc == 0x14C5ECu) {
        ctx->pc = 0x14C5F0u;
        goto label_14c5f0;
    }
    ctx->pc = 0x14C5E8u;
    {
        const bool branch_taken_0x14c5e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c5e8) {
            ctx->pc = 0x14CAE8u;
            goto label_14cae8;
        }
    }
    ctx->pc = 0x14C5F0u;
label_14c5f0:
    // 0x14c5f0: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x14c5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_14c5f4:
    // 0x14c5f4: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x14c5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_14c5f8:
    // 0x14c5f8: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x14c5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_14c5fc:
    // 0x14c5fc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x14c5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_14c600:
    // 0x14c600: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x14c600u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_14c604:
    // 0x14c604: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x14c604u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_14c608:
    // 0x14c608: 0xc041e8a  jal         func_107A28
label_14c60c:
    if (ctx->pc == 0x14C60Cu) {
        ctx->pc = 0x14C60Cu;
            // 0x14c60c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x14C610u;
        goto label_14c610;
    }
    ctx->pc = 0x14C608u;
    SET_GPR_U32(ctx, 31, 0x14C610u);
    ctx->pc = 0x14C60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C608u;
            // 0x14c60c: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A28u;
    if (runtime->hasFunction(0x107A28u)) {
        auto targetFn = runtime->lookupFunction(0x107A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C610u; }
        if (ctx->pc != 0x14C610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InterVectorXYZ_0x107a28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C610u; }
        if (ctx->pc != 0x14C610u) { return; }
    }
    ctx->pc = 0x14C610u;
label_14c610:
    // 0x14c610: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x14c610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14c614:
    // 0x14c614: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14c614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14c618:
    // 0x14c618: 0xe6a000e0  swc1        $f0, 0xE0($s5)
    ctx->pc = 0x14c618u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 224), bits); }
label_14c61c:
    // 0x14c61c: 0xc7a00084  lwc1        $f0, 0x84($sp)
    ctx->pc = 0x14c61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14c620:
    // 0x14c620: 0xe6a000e4  swc1        $f0, 0xE4($s5)
    ctx->pc = 0x14c620u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 228), bits); }
label_14c624:
    // 0x14c624: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x14c624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_14c628:
    // 0x14c628: 0xe6a000e8  swc1        $f0, 0xE8($s5)
    ctx->pc = 0x14c628u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 232), bits); }
label_14c62c:
    // 0x14c62c: 0x1000012e  b           . + 4 + (0x12E << 2)
label_14c630:
    if (ctx->pc == 0x14C630u) {
        ctx->pc = 0x14C630u;
            // 0x14c630: 0xaea20040  sw          $v0, 0x40($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 2));
        ctx->pc = 0x14C634u;
        goto label_14c634;
    }
    ctx->pc = 0x14C62Cu;
    {
        const bool branch_taken_0x14c62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C62Cu;
            // 0x14c630: 0xaea20040  sw          $v0, 0x40($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c62c) {
            ctx->pc = 0x14CAE8u;
            goto label_14cae8;
        }
    }
    ctx->pc = 0x14C634u;
label_14c634:
    // 0x14c634: 0x8ea300f8  lw          $v1, 0xF8($s5)
    ctx->pc = 0x14c634u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 248)));
label_14c638:
    // 0x14c638: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x14c638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
label_14c63c:
    // 0x14c63c: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x14c63cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
label_14c640:
    // 0x14c640: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c640u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c644:
    // 0x14c644: 0x0  nop
    ctx->pc = 0x14c644u;
    // NOP
label_14c648:
    // 0x14c648: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x14c648u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14c64c:
    // 0x14c64c: 0x8c750030  lw          $s5, 0x30($v1)
    ctx->pc = 0x14c64cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_14c650:
    // 0x14c650: 0x45010026  bc1t        . + 4 + (0x26 << 2)
label_14c654:
    if (ctx->pc == 0x14C654u) {
        ctx->pc = 0x14C654u;
            // 0x14c654: 0x8e740000  lw          $s4, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x14C658u;
        goto label_14c658;
    }
    ctx->pc = 0x14C650u;
    {
        const bool branch_taken_0x14c650 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x14C654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C650u;
            // 0x14c654: 0x8e740000  lw          $s4, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c650) {
            ctx->pc = 0x14C6ECu;
            goto label_14c6ec;
        }
    }
    ctx->pc = 0x14C658u;
label_14c658:
    // 0x14c658: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x14c658u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
label_14c65c:
    // 0x14c65c: 0x3442f972  ori         $v0, $v0, 0xF972
    ctx->pc = 0x14c65cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63858);
label_14c660:
    // 0x14c660: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c660u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c664:
    // 0x14c664: 0x0  nop
    ctx->pc = 0x14c664u;
    // NOP
label_14c668:
    // 0x14c668: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x14c668u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14c66c:
    // 0x14c66c: 0x0  nop
    ctx->pc = 0x14c66cu;
    // NOP
label_14c670:
    // 0x14c670: 0x4500001f  bc1f        . + 4 + (0x1F << 2)
label_14c674:
    if (ctx->pc == 0x14C674u) {
        ctx->pc = 0x14C674u;
            // 0x14c674: 0x3c0238d1  lui         $v0, 0x38D1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
        ctx->pc = 0x14C678u;
        goto label_14c678;
    }
    ctx->pc = 0x14C670u;
    {
        const bool branch_taken_0x14c670 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x14C674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C670u;
            // 0x14c674: 0x3c0238d1  lui         $v0, 0x38D1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c670) {
            ctx->pc = 0x14C6F0u;
            goto label_14c6f0;
        }
    }
    ctx->pc = 0x14C678u;
label_14c678:
    // 0x14c678: 0x10000018  b           . + 4 + (0x18 << 2)
label_14c67c:
    if (ctx->pc == 0x14C67Cu) {
        ctx->pc = 0x14C67Cu;
            // 0x14c67c: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x14C680u;
        goto label_14c680;
    }
    ctx->pc = 0x14C678u;
    {
        const bool branch_taken_0x14c678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C67Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C678u;
            // 0x14c67c: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c678) {
            ctx->pc = 0x14C6DCu;
            goto label_14c6dc;
        }
    }
    ctx->pc = 0x14C680u;
label_14c680:
    // 0x14c680: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x14c680u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_14c684:
    // 0x14c684: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x14c684u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_14c688:
    // 0x14c688: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x14c688u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_14c68c:
    // 0x14c68c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x14c68cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_14c690:
    // 0x14c690: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x14c690u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_14c694:
    // 0x14c694: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x14c694u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_14c698:
    // 0x14c698: 0x24b2ffff  addiu       $s2, $a1, -0x1
    ctx->pc = 0x14c698u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_14c69c:
    // 0x14c69c: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x14c69cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_14c6a0:
    // 0x14c6a0: 0xc041e8a  jal         func_107A28
label_14c6a4:
    if (ctx->pc == 0x14C6A4u) {
        ctx->pc = 0x14C6A4u;
            // 0x14c6a4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x14C6A8u;
        goto label_14c6a8;
    }
    ctx->pc = 0x14C6A0u;
    SET_GPR_U32(ctx, 31, 0x14C6A8u);
    ctx->pc = 0x14C6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C6A0u;
            // 0x14c6a4: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A28u;
    if (runtime->hasFunction(0x107A28u)) {
        auto targetFn = runtime->lookupFunction(0x107A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C6A8u; }
        if (ctx->pc != 0x14C6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InterVectorXYZ_0x107a28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C6A8u; }
        if (ctx->pc != 0x14C6A8u) { return; }
    }
    ctx->pc = 0x14C6A8u;
label_14c6a8:
    // 0x14c6a8: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x14c6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_14c6ac:
    // 0x14c6ac: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x14c6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_14c6b0:
    // 0x14c6b0: 0xc041e82  jal         func_107A08
label_14c6b4:
    if (ctx->pc == 0x14C6B4u) {
        ctx->pc = 0x14C6B4u;
            // 0x14c6b4: 0x2a22021  addu        $a0, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->pc = 0x14C6B8u;
        goto label_14c6b8;
    }
    ctx->pc = 0x14C6B0u;
    SET_GPR_U32(ctx, 31, 0x14C6B8u);
    ctx->pc = 0x14C6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C6B0u;
            // 0x14c6b4: 0x2a22021  addu        $a0, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A08u;
    if (runtime->hasFunction(0x107A08u)) {
        auto targetFn = runtime->lookupFunction(0x107A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C6B8u; }
        if (ctx->pc != 0x14C6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVectorXYZ_0x107a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C6B8u; }
        if (ctx->pc != 0x14C6B8u) { return; }
    }
    ctx->pc = 0x14C6B8u;
label_14c6b8:
    // 0x14c6b8: 0x8e730018  lw          $s3, 0x18($s3)
    ctx->pc = 0x14c6b8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_14c6bc:
    // 0x14c6bc: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_14c6c0:
    if (ctx->pc == 0x14C6C0u) {
        ctx->pc = 0x14C6C4u;
        goto label_14c6c4;
    }
    ctx->pc = 0x14C6BCu;
    {
        const bool branch_taken_0x14c6bc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c6bc) {
            ctx->pc = 0x14C6CCu;
            goto label_14c6cc;
        }
    }
    ctx->pc = 0x14C6C4u;
label_14c6c4:
    // 0x14c6c4: 0x10000004  b           . + 4 + (0x4 << 2)
label_14c6c8:
    if (ctx->pc == 0x14C6C8u) {
        ctx->pc = 0x14C6CCu;
        goto label_14c6cc;
    }
    ctx->pc = 0x14C6C4u;
    {
        const bool branch_taken_0x14c6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c6c4) {
            ctx->pc = 0x14C6D8u;
            goto label_14c6d8;
        }
    }
    ctx->pc = 0x14C6CCu;
label_14c6cc:
    // 0x14c6cc: 0x0  nop
    ctx->pc = 0x14c6ccu;
    // NOP
label_14c6d0:
    // 0x14c6d0: 0x10000107  b           . + 4 + (0x107 << 2)
label_14c6d4:
    if (ctx->pc == 0x14C6D4u) {
        ctx->pc = 0x14C6D4u;
            // 0x14c6d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14C6D8u;
        goto label_14c6d8;
    }
    ctx->pc = 0x14C6D0u;
    {
        const bool branch_taken_0x14c6d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C6D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C6D0u;
            // 0x14c6d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c6d0) {
            ctx->pc = 0x14CAF0u;
            goto label_14caf0;
        }
    }
    ctx->pc = 0x14C6D8u;
label_14c6d8:
    // 0x14c6d8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x14c6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_14c6dc:
    // 0x14c6dc: 0x1282ffe8  beq         $s4, $v0, . + 4 + (-0x18 << 2)
label_14c6e0:
    if (ctx->pc == 0x14C6E0u) {
        ctx->pc = 0x14C6E4u;
        goto label_14c6e4;
    }
    ctx->pc = 0x14C6DCu;
    {
        const bool branch_taken_0x14c6dc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x14c6dc) {
            ctx->pc = 0x14C680u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14c680;
        }
    }
    ctx->pc = 0x14C6E4u;
label_14c6e4:
    // 0x14c6e4: 0x1000003b  b           . + 4 + (0x3B << 2)
label_14c6e8:
    if (ctx->pc == 0x14C6E8u) {
        ctx->pc = 0x14C6ECu;
        goto label_14c6ec;
    }
    ctx->pc = 0x14C6E4u;
    {
        const bool branch_taken_0x14c6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c6e4) {
            ctx->pc = 0x14C7D4u;
            goto label_14c7d4;
        }
    }
    ctx->pc = 0x14C6ECu;
label_14c6ec:
    // 0x14c6ec: 0x3c0238d1  lui         $v0, 0x38D1
    ctx->pc = 0x14c6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)14545 << 16));
label_14c6f0:
    // 0x14c6f0: 0x3442b717  ori         $v0, $v0, 0xB717
    ctx->pc = 0x14c6f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46871);
label_14c6f4:
    // 0x14c6f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c6f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c6f8:
    // 0x14c6f8: 0x0  nop
    ctx->pc = 0x14c6f8u;
    // NOP
label_14c6fc:
    // 0x14c6fc: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x14c6fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14c700:
    // 0x14c700: 0x0  nop
    ctx->pc = 0x14c700u;
    // NOP
label_14c704:
    // 0x14c704: 0x45000015  bc1f        . + 4 + (0x15 << 2)
label_14c708:
    if (ctx->pc == 0x14C708u) {
        ctx->pc = 0x14C70Cu;
        goto label_14c70c;
    }
    ctx->pc = 0x14C704u;
    {
        const bool branch_taken_0x14c704 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14c704) {
            ctx->pc = 0x14C75Cu;
            goto label_14c75c;
        }
    }
    ctx->pc = 0x14C70Cu;
label_14c70c:
    // 0x14c70c: 0x10000011  b           . + 4 + (0x11 << 2)
label_14c710:
    if (ctx->pc == 0x14C710u) {
        ctx->pc = 0x14C710u;
            // 0x14c710: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x14C714u;
        goto label_14c714;
    }
    ctx->pc = 0x14C70Cu;
    {
        const bool branch_taken_0x14c70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C70Cu;
            // 0x14c710: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c70c) {
            ctx->pc = 0x14C754u;
            goto label_14c754;
        }
    }
    ctx->pc = 0x14C714u;
label_14c714:
    // 0x14c714: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x14c714u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_14c718:
    // 0x14c718: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x14c718u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_14c71c:
    // 0x14c71c: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x14c71cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_14c720:
    // 0x14c720: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x14c720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_14c724:
    // 0x14c724: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x14c724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14c728:
    // 0x14c728: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x14c728u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_14c72c:
    // 0x14c72c: 0xc041e82  jal         func_107A08
label_14c730:
    if (ctx->pc == 0x14C730u) {
        ctx->pc = 0x14C730u;
            // 0x14c730: 0x2a22021  addu        $a0, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->pc = 0x14C734u;
        goto label_14c734;
    }
    ctx->pc = 0x14C72Cu;
    SET_GPR_U32(ctx, 31, 0x14C734u);
    ctx->pc = 0x14C730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C72Cu;
            // 0x14c730: 0x2a22021  addu        $a0, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A08u;
    if (runtime->hasFunction(0x107A08u)) {
        auto targetFn = runtime->lookupFunction(0x107A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C734u; }
        if (ctx->pc != 0x14C734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVectorXYZ_0x107a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C734u; }
        if (ctx->pc != 0x14C734u) { return; }
    }
    ctx->pc = 0x14C734u;
label_14c734:
    // 0x14c734: 0x8e730018  lw          $s3, 0x18($s3)
    ctx->pc = 0x14c734u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_14c738:
    // 0x14c738: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_14c73c:
    if (ctx->pc == 0x14C73Cu) {
        ctx->pc = 0x14C740u;
        goto label_14c740;
    }
    ctx->pc = 0x14C738u;
    {
        const bool branch_taken_0x14c738 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c738) {
            ctx->pc = 0x14C748u;
            goto label_14c748;
        }
    }
    ctx->pc = 0x14C740u;
label_14c740:
    // 0x14c740: 0x10000003  b           . + 4 + (0x3 << 2)
label_14c744:
    if (ctx->pc == 0x14C744u) {
        ctx->pc = 0x14C748u;
        goto label_14c748;
    }
    ctx->pc = 0x14C740u;
    {
        const bool branch_taken_0x14c740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c740) {
            ctx->pc = 0x14C750u;
            goto label_14c750;
        }
    }
    ctx->pc = 0x14C748u;
label_14c748:
    // 0x14c748: 0x100000e9  b           . + 4 + (0xE9 << 2)
label_14c74c:
    if (ctx->pc == 0x14C74Cu) {
        ctx->pc = 0x14C74Cu;
            // 0x14c74c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14C750u;
        goto label_14c750;
    }
    ctx->pc = 0x14C748u;
    {
        const bool branch_taken_0x14c748 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C748u;
            // 0x14c74c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c748) {
            ctx->pc = 0x14CAF0u;
            goto label_14caf0;
        }
    }
    ctx->pc = 0x14C750u;
label_14c750:
    // 0x14c750: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x14c750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_14c754:
    // 0x14c754: 0x1282ffef  beq         $s4, $v0, . + 4 + (-0x11 << 2)
label_14c758:
    if (ctx->pc == 0x14C758u) {
        ctx->pc = 0x14C75Cu;
        goto label_14c75c;
    }
    ctx->pc = 0x14C754u;
    {
        const bool branch_taken_0x14c754 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x14c754) {
            ctx->pc = 0x14C714u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14c714;
        }
    }
    ctx->pc = 0x14C75Cu;
label_14c75c:
    // 0x14c75c: 0x0  nop
    ctx->pc = 0x14c75cu;
    // NOP
label_14c760:
    // 0x14c760: 0x3c023f7f  lui         $v0, 0x3F7F
    ctx->pc = 0x14c760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16255 << 16));
label_14c764:
    // 0x14c764: 0x3442f972  ori         $v0, $v0, 0xF972
    ctx->pc = 0x14c764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63858);
label_14c768:
    // 0x14c768: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c768u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c76c:
    // 0x14c76c: 0x0  nop
    ctx->pc = 0x14c76cu;
    // NOP
label_14c770:
    // 0x14c770: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x14c770u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14c774:
    // 0x14c774: 0x0  nop
    ctx->pc = 0x14c774u;
    // NOP
label_14c778:
    // 0x14c778: 0x45010016  bc1t        . + 4 + (0x16 << 2)
label_14c77c:
    if (ctx->pc == 0x14C77Cu) {
        ctx->pc = 0x14C780u;
        goto label_14c780;
    }
    ctx->pc = 0x14C778u;
    {
        const bool branch_taken_0x14c778 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x14c778) {
            ctx->pc = 0x14C7D4u;
            goto label_14c7d4;
        }
    }
    ctx->pc = 0x14C780u;
label_14c780:
    // 0x14c780: 0x10000012  b           . + 4 + (0x12 << 2)
label_14c784:
    if (ctx->pc == 0x14C784u) {
        ctx->pc = 0x14C784u;
            // 0x14c784: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x14C788u;
        goto label_14c788;
    }
    ctx->pc = 0x14C780u;
    {
        const bool branch_taken_0x14c780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C780u;
            // 0x14c784: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c780) {
            ctx->pc = 0x14C7CCu;
            goto label_14c7cc;
        }
    }
    ctx->pc = 0x14C788u;
label_14c788:
    // 0x14c788: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x14c788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_14c78c:
    // 0x14c78c: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x14c78cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_14c790:
    // 0x14c790: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x14c790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_14c794:
    // 0x14c794: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x14c794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_14c798:
    // 0x14c798: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x14c798u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_14c79c:
    // 0x14c79c: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x14c79cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_14c7a0:
    // 0x14c7a0: 0xc041e82  jal         func_107A08
label_14c7a4:
    if (ctx->pc == 0x14C7A4u) {
        ctx->pc = 0x14C7A4u;
            // 0x14c7a4: 0x2a22021  addu        $a0, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->pc = 0x14C7A8u;
        goto label_14c7a8;
    }
    ctx->pc = 0x14C7A0u;
    SET_GPR_U32(ctx, 31, 0x14C7A8u);
    ctx->pc = 0x14C7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C7A0u;
            // 0x14c7a4: 0x2a22021  addu        $a0, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A08u;
    if (runtime->hasFunction(0x107A08u)) {
        auto targetFn = runtime->lookupFunction(0x107A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C7A8u; }
        if (ctx->pc != 0x14C7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVectorXYZ_0x107a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C7A8u; }
        if (ctx->pc != 0x14C7A8u) { return; }
    }
    ctx->pc = 0x14C7A8u;
label_14c7a8:
    // 0x14c7a8: 0x8e730018  lw          $s3, 0x18($s3)
    ctx->pc = 0x14c7a8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_14c7ac:
    // 0x14c7ac: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_14c7b0:
    if (ctx->pc == 0x14C7B0u) {
        ctx->pc = 0x14C7B4u;
        goto label_14c7b4;
    }
    ctx->pc = 0x14C7ACu;
    {
        const bool branch_taken_0x14c7ac = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c7ac) {
            ctx->pc = 0x14C7BCu;
            goto label_14c7bc;
        }
    }
    ctx->pc = 0x14C7B4u;
label_14c7b4:
    // 0x14c7b4: 0x10000004  b           . + 4 + (0x4 << 2)
label_14c7b8:
    if (ctx->pc == 0x14C7B8u) {
        ctx->pc = 0x14C7BCu;
        goto label_14c7bc;
    }
    ctx->pc = 0x14C7B4u;
    {
        const bool branch_taken_0x14c7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c7b4) {
            ctx->pc = 0x14C7C8u;
            goto label_14c7c8;
        }
    }
    ctx->pc = 0x14C7BCu;
label_14c7bc:
    // 0x14c7bc: 0x0  nop
    ctx->pc = 0x14c7bcu;
    // NOP
label_14c7c0:
    // 0x14c7c0: 0x100000cb  b           . + 4 + (0xCB << 2)
label_14c7c4:
    if (ctx->pc == 0x14C7C4u) {
        ctx->pc = 0x14C7C4u;
            // 0x14c7c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14C7C8u;
        goto label_14c7c8;
    }
    ctx->pc = 0x14C7C0u;
    {
        const bool branch_taken_0x14c7c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C7C0u;
            // 0x14c7c4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c7c0) {
            ctx->pc = 0x14CAF0u;
            goto label_14caf0;
        }
    }
    ctx->pc = 0x14C7C8u;
label_14c7c8:
    // 0x14c7c8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x14c7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_14c7cc:
    // 0x14c7cc: 0x1282ffee  beq         $s4, $v0, . + 4 + (-0x12 << 2)
label_14c7d0:
    if (ctx->pc == 0x14C7D0u) {
        ctx->pc = 0x14C7D4u;
        goto label_14c7d4;
    }
    ctx->pc = 0x14C7CCu;
    {
        const bool branch_taken_0x14c7cc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x14c7cc) {
            ctx->pc = 0x14C788u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14c788;
        }
    }
    ctx->pc = 0x14C7D4u;
label_14c7d4:
    // 0x14c7d4: 0x0  nop
    ctx->pc = 0x14c7d4u;
    // NOP
label_14c7d8:
    // 0x14c7d8: 0x100000c5  b           . + 4 + (0xC5 << 2)
label_14c7dc:
    if (ctx->pc == 0x14C7DCu) {
        ctx->pc = 0x14C7DCu;
            // 0x14c7dc: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14C7E0u;
        goto label_14c7e0;
    }
    ctx->pc = 0x14C7D8u;
    {
        const bool branch_taken_0x14c7d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C7D8u;
            // 0x14c7dc: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c7d8) {
            ctx->pc = 0x14CAF0u;
            goto label_14caf0;
        }
    }
    ctx->pc = 0x14C7E0u;
label_14c7e0:
    // 0x14c7e0: 0x124000c1  beqz        $s2, . + 4 + (0xC1 << 2)
label_14c7e4:
    if (ctx->pc == 0x14C7E4u) {
        ctx->pc = 0x14C7E8u;
        goto label_14c7e8;
    }
    ctx->pc = 0x14C7E0u;
    {
        const bool branch_taken_0x14c7e0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c7e0) {
            ctx->pc = 0x14CAE8u;
            goto label_14cae8;
        }
    }
    ctx->pc = 0x14C7E8u;
label_14c7e8:
    // 0x14c7e8: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x14c7e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_14c7ec:
    // 0x14c7ec: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x14c7ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_14c7f0:
    // 0x14c7f0: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x14c7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_14c7f4:
    // 0x14c7f4: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x14c7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_14c7f8:
    // 0x14c7f8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x14c7f8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_14c7fc:
    // 0x14c7fc: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x14c7fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_14c800:
    // 0x14c800: 0xc041e8a  jal         func_107A28
label_14c804:
    if (ctx->pc == 0x14C804u) {
        ctx->pc = 0x14C804u;
            // 0x14c804: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x14C808u;
        goto label_14c808;
    }
    ctx->pc = 0x14C800u;
    SET_GPR_U32(ctx, 31, 0x14C808u);
    ctx->pc = 0x14C804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C800u;
            // 0x14c804: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A28u;
    if (runtime->hasFunction(0x107A28u)) {
        auto targetFn = runtime->lookupFunction(0x107A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C808u; }
        if (ctx->pc != 0x14C808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InterVectorXYZ_0x107a28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C808u; }
        if (ctx->pc != 0x14C808u) { return; }
    }
    ctx->pc = 0x14C808u;
label_14c808:
    // 0x14c808: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x14c808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_14c80c:
    // 0x14c80c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14c80cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_14c810:
    // 0x14c810: 0xc04ddf8  jal         func_1377E0
label_14c814:
    if (ctx->pc == 0x14C814u) {
        ctx->pc = 0x14C814u;
            // 0x14c814: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14C818u;
        goto label_14c818;
    }
    ctx->pc = 0x14C810u;
    SET_GPR_U32(ctx, 31, 0x14C818u);
    ctx->pc = 0x14C814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C810u;
            // 0x14c814: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1377E0u;
    if (runtime->hasFunction(0x1377E0u)) {
        auto targetFn = runtime->lookupFunction(0x1377E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C818u; }
        if (ctx->pc != 0x14C818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition__8mgCFrameFPfPf_0x1377e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C818u; }
        if (ctx->pc != 0x14C818u) { return; }
    }
    ctx->pc = 0x14C818u;
label_14c818:
    // 0x14c818: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x14c818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14c81c:
    // 0x14c81c: 0xc7ad0084  lwc1        $f13, 0x84($sp)
    ctx->pc = 0x14c81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_14c820:
    // 0x14c820: 0xc7ae0088  lwc1        $f14, 0x88($sp)
    ctx->pc = 0x14c820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_14c824:
    // 0x14c824: 0xc04c4f8  jal         func_1313E0
label_14c828:
    if (ctx->pc == 0x14C828u) {
        ctx->pc = 0x14C828u;
            // 0x14c828: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14C82Cu;
        goto label_14c82c;
    }
    ctx->pc = 0x14C824u;
    SET_GPR_U32(ctx, 31, 0x14C82Cu);
    ctx->pc = 0x14C828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C824u;
            // 0x14c828: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1313E0u;
    if (runtime->hasFunction(0x1313E0u)) {
        auto targetFn = runtime->lookupFunction(0x1313E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C82Cu; }
        if (ctx->pc != 0x14C82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__9mgCCameraFfff_0x1313e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C82Cu; }
        if (ctx->pc != 0x14C82Cu) { return; }
    }
    ctx->pc = 0x14C82Cu;
label_14c82c:
    // 0x14c82c: 0x100000ae  b           . + 4 + (0xAE << 2)
label_14c830:
    if (ctx->pc == 0x14C830u) {
        ctx->pc = 0x14C834u;
        goto label_14c834;
    }
    ctx->pc = 0x14C82Cu;
    {
        const bool branch_taken_0x14c82c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c82c) {
            ctx->pc = 0x14CAE8u;
            goto label_14cae8;
        }
    }
    ctx->pc = 0x14C834u;
label_14c834:
    // 0x14c834: 0x124000ac  beqz        $s2, . + 4 + (0xAC << 2)
label_14c838:
    if (ctx->pc == 0x14C838u) {
        ctx->pc = 0x14C83Cu;
        goto label_14c83c;
    }
    ctx->pc = 0x14C834u;
    {
        const bool branch_taken_0x14c834 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c834) {
            ctx->pc = 0x14CAE8u;
            goto label_14cae8;
        }
    }
    ctx->pc = 0x14C83Cu;
label_14c83c:
    // 0x14c83c: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x14c83cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_14c840:
    // 0x14c840: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x14c840u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_14c844:
    // 0x14c844: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x14c844u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_14c848:
    // 0x14c848: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x14c848u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_14c84c:
    // 0x14c84c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x14c84cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_14c850:
    // 0x14c850: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x14c850u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_14c854:
    // 0x14c854: 0xc041e8a  jal         func_107A28
label_14c858:
    if (ctx->pc == 0x14C858u) {
        ctx->pc = 0x14C858u;
            // 0x14c858: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x14C85Cu;
        goto label_14c85c;
    }
    ctx->pc = 0x14C854u;
    SET_GPR_U32(ctx, 31, 0x14C85Cu);
    ctx->pc = 0x14C858u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C854u;
            // 0x14c858: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A28u;
    if (runtime->hasFunction(0x107A28u)) {
        auto targetFn = runtime->lookupFunction(0x107A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C85Cu; }
        if (ctx->pc != 0x14C85Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InterVectorXYZ_0x107a28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C85Cu; }
        if (ctx->pc != 0x14C85Cu) { return; }
    }
    ctx->pc = 0x14C85Cu;
label_14c85c:
    // 0x14c85c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x14c85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_14c860:
    // 0x14c860: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x14c860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_14c864:
    // 0x14c864: 0xc04ddf8  jal         func_1377E0
label_14c868:
    if (ctx->pc == 0x14C868u) {
        ctx->pc = 0x14C868u;
            // 0x14c868: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14C86Cu;
        goto label_14c86c;
    }
    ctx->pc = 0x14C864u;
    SET_GPR_U32(ctx, 31, 0x14C86Cu);
    ctx->pc = 0x14C868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C864u;
            // 0x14c868: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1377E0u;
    if (runtime->hasFunction(0x1377E0u)) {
        auto targetFn = runtime->lookupFunction(0x1377E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C86Cu; }
        if (ctx->pc != 0x14C86Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWorldPosition__8mgCFrameFPfPf_0x1377e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C86Cu; }
        if (ctx->pc != 0x14C86Cu) { return; }
    }
    ctx->pc = 0x14C86Cu;
label_14c86c:
    // 0x14c86c: 0xc7ac0080  lwc1        $f12, 0x80($sp)
    ctx->pc = 0x14c86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_14c870:
    // 0x14c870: 0xc7ad0084  lwc1        $f13, 0x84($sp)
    ctx->pc = 0x14c870u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_14c874:
    // 0x14c874: 0xc7ae0088  lwc1        $f14, 0x88($sp)
    ctx->pc = 0x14c874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_14c878:
    // 0x14c878: 0xc04c510  jal         func_131440
label_14c87c:
    if (ctx->pc == 0x14C87Cu) {
        ctx->pc = 0x14C87Cu;
            // 0x14c87c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x14C880u;
        goto label_14c880;
    }
    ctx->pc = 0x14C878u;
    SET_GPR_U32(ctx, 31, 0x14C880u);
    ctx->pc = 0x14C87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C878u;
            // 0x14c87c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131440u;
    if (runtime->hasFunction(0x131440u)) {
        auto targetFn = runtime->lookupFunction(0x131440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C880u; }
        if (ctx->pc != 0x14C880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__9mgCCameraFfff_0x131440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C880u; }
        if (ctx->pc != 0x14C880u) { return; }
    }
    ctx->pc = 0x14C880u;
label_14c880:
    // 0x14c880: 0x10000099  b           . + 4 + (0x99 << 2)
label_14c884:
    if (ctx->pc == 0x14C884u) {
        ctx->pc = 0x14C888u;
        goto label_14c888;
    }
    ctx->pc = 0x14C880u;
    {
        const bool branch_taken_0x14c880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c880) {
            ctx->pc = 0x14CAE8u;
            goto label_14cae8;
        }
    }
    ctx->pc = 0x14C888u;
label_14c888:
    // 0x14c888: 0x8ea400f8  lw          $a0, 0xF8($s5)
    ctx->pc = 0x14c888u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 248)));
label_14c88c:
    // 0x14c88c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14c88cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_14c890:
    // 0x14c890: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c890u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c894:
    // 0x14c894: 0x8c99001c  lw          $t9, 0x1C($a0)
    ctx->pc = 0x14c894u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_14c898:
    // 0x14c898: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x14c898u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_14c89c:
    // 0x14c89c: 0x320f809  jalr        $t9
label_14c8a0:
    if (ctx->pc == 0x14C8A0u) {
        ctx->pc = 0x14C8A0u;
            // 0x14c8a0: 0x46140541  sub.s       $f21, $f0, $f20 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
        ctx->pc = 0x14C8A4u;
        goto label_14c8a4;
    }
    ctx->pc = 0x14C89Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14C8A4u);
        ctx->pc = 0x14C8A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C89Cu;
            // 0x14c8a0: 0x46140541  sub.s       $f21, $f0, $f20 (Delay Slot)
        ctx->f[21] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x14C8A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x14C8A4u; }
            if (ctx->pc != 0x14C8A4u) { return; }
        }
        }
    }
    ctx->pc = 0x14C8A4u;
label_14c8a4:
    // 0x14c8a4: 0x8e680010  lw          $t0, 0x10($s3)
    ctx->pc = 0x14c8a4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_14c8a8:
    // 0x14c8a8: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x14c8a8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_14c8ac:
    // 0x14c8ac: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x14c8acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_14c8b0:
    // 0x14c8b0: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x14c8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_14c8b4:
    // 0x14c8b4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14c8b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c8b8:
    // 0x14c8b8: 0x8e650004  lw          $a1, 0x4($s3)
    ctx->pc = 0x14c8b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_14c8bc:
    // 0x14c8bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14c8bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14c8c0:
    // 0x14c8c0: 0x1063821  addu        $a3, $t0, $a2
    ctx->pc = 0x14c8c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_14c8c4:
    // 0x14c8c4: 0x1043021  addu        $a2, $t0, $a0
    ctx->pc = 0x14c8c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_14c8c8:
    // 0x14c8c8: 0xc4e20000  lwc1        $f2, 0x0($a3)
    ctx->pc = 0x14c8c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14c8cc:
    // 0x14c8cc: 0x52040  sll         $a0, $a1, 1
    ctx->pc = 0x14c8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_14c8d0:
    // 0x14c8d0: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x14c8d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14c8d4:
    // 0x14c8d4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x14c8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_14c8d8:
    // 0x14c8d8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x14c8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_14c8dc:
    // 0x14c8dc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x14c8dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_14c8e0:
    // 0x14c8e0: 0x4602a81a  mula.s      $f21, $f2
    ctx->pc = 0x14c8e0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[21], ctx->f[2]);
label_14c8e4:
    // 0x14c8e4: 0x4601a05c  madd.s      $f1, $f20, $f1
    ctx->pc = 0x14c8e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[1]));
label_14c8e8:
    // 0x14c8e8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x14c8e8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_14c8ec:
    // 0x14c8ec: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x14c8ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_14c8f0:
    // 0x14c8f0: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x14c8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_14c8f4:
    // 0x14c8f4: 0x1000007c  b           . + 4 + (0x7C << 2)
label_14c8f8:
    if (ctx->pc == 0x14C8F8u) {
        ctx->pc = 0x14C8F8u;
            // 0x14c8f8: 0xac430028  sw          $v1, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
        ctx->pc = 0x14C8FCu;
        goto label_14c8fc;
    }
    ctx->pc = 0x14C8F4u;
    {
        const bool branch_taken_0x14c8f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C8F4u;
            // 0x14c8f8: 0xac430028  sw          $v1, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c8f4) {
            ctx->pc = 0x14CAE8u;
            goto label_14cae8;
        }
    }
    ctx->pc = 0x14C8FCu;
label_14c8fc:
    // 0x14c8fc: 0x8ea400f8  lw          $a0, 0xF8($s5)
    ctx->pc = 0x14c8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 248)));
label_14c900:
    // 0x14c900: 0x8c99001c  lw          $t9, 0x1C($a0)
    ctx->pc = 0x14c900u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
label_14c904:
    // 0x14c904: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x14c904u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_14c908:
    // 0x14c908: 0x320f809  jalr        $t9
label_14c90c:
    if (ctx->pc == 0x14C90Cu) {
        ctx->pc = 0x14C910u;
        goto label_14c910;
    }
    ctx->pc = 0x14C908u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x14C910u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x14C910u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x14C910u; }
            if (ctx->pc != 0x14C910u) { return; }
        }
        }
    }
    ctx->pc = 0x14C910u;
label_14c910:
    // 0x14c910: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x14c910u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_14c914:
    // 0x14c914: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x14c914u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_14c918:
    // 0x14c918: 0x8e670004  lw          $a3, 0x4($s3)
    ctx->pc = 0x14c918u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_14c91c:
    // 0x14c91c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x14c91cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_14c920:
    // 0x14c920: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x14c920u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_14c924:
    // 0x14c924: 0xc42821  addu        $a1, $a2, $a0
    ctx->pc = 0x14c924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_14c928:
    // 0x14c928: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x14c928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_14c92c:
    // 0x14c92c: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x14c92cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_14c930:
    // 0x14c930: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x14c930u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_14c934:
    // 0x14c934: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x14c934u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_14c938:
    // 0x14c938: 0xc041e8a  jal         func_107A28
label_14c93c:
    if (ctx->pc == 0x14C93Cu) {
        ctx->pc = 0x14C93Cu;
            // 0x14c93c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x14C940u;
        goto label_14c940;
    }
    ctx->pc = 0x14C938u;
    SET_GPR_U32(ctx, 31, 0x14C940u);
    ctx->pc = 0x14C93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C938u;
            // 0x14c93c: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107A28u;
    if (runtime->hasFunction(0x107A28u)) {
        auto targetFn = runtime->lookupFunction(0x107A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C940u; }
        if (ctx->pc != 0x14C940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0InterVectorXYZ_0x107a28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C940u; }
        if (ctx->pc != 0x14C940u) { return; }
    }
    ctx->pc = 0x14C940u;
label_14c940:
    // 0x14c940: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x14c940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_14c944:
    // 0x14c944: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14c944u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14c948:
    // 0x14c948: 0x10000067  b           . + 4 + (0x67 << 2)
label_14c94c:
    if (ctx->pc == 0x14C94Cu) {
        ctx->pc = 0x14C94Cu;
            // 0x14c94c: 0xac430028  sw          $v1, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
        ctx->pc = 0x14C950u;
        goto label_14c950;
    }
    ctx->pc = 0x14C948u;
    {
        const bool branch_taken_0x14c948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14C94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14C948u;
            // 0x14c94c: 0xac430028  sw          $v1, 0x28($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14c948) {
            ctx->pc = 0x14CAE8u;
            goto label_14cae8;
        }
    }
    ctx->pc = 0x14C950u;
label_14c950:
    // 0x14c950: 0x12400065  beqz        $s2, . + 4 + (0x65 << 2)
label_14c954:
    if (ctx->pc == 0x14C954u) {
        ctx->pc = 0x14C958u;
        goto label_14c958;
    }
    ctx->pc = 0x14C950u;
    {
        const bool branch_taken_0x14c950 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c950) {
            ctx->pc = 0x14CAE8u;
            goto label_14cae8;
        }
    }
    ctx->pc = 0x14C958u;
label_14c958:
    // 0x14c958: 0x8e670010  lw          $a3, 0x10($s3)
    ctx->pc = 0x14c958u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_14c95c:
    // 0x14c95c: 0x103100  sll         $a2, $s0, 4
    ctx->pc = 0x14c95cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_14c960:
    // 0x14c960: 0x112900  sll         $a1, $s1, 4
    ctx->pc = 0x14c960u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_14c964:
    // 0x14c964: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14c964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_14c968:
    // 0x14c968: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c968u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c96c:
    // 0x14c96c: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x14c96cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
label_14c970:
    // 0x14c970: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14c970u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14c974:
    // 0x14c974: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x14c974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_14c978:
    // 0x14c978: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x14c978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_14c97c:
    // 0x14c97c: 0x46140101  sub.s       $f4, $f0, $f20
    ctx->pc = 0x14c97cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_14c980:
    // 0x14c980: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14c980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_14c984:
    // 0x14c984: 0xe63021  addu        $a2, $a3, $a2
    ctx->pc = 0x14c984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_14c988:
    // 0x14c988: 0xe52821  addu        $a1, $a3, $a1
    ctx->pc = 0x14c988u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_14c98c:
    // 0x14c98c: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x14c98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_14c990:
    // 0x14c990: 0xc4a20000  lwc1        $f2, 0x0($a1)
    ctx->pc = 0x14c990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14c994:
    // 0x14c994: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14c994u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c998:
    // 0x14c998: 0x4603201a  mula.s      $f4, $f3
    ctx->pc = 0x14c998u;
    ctx->f[31] = FPU_MUL_S(ctx->f[4], ctx->f[3]);
label_14c99c:
    // 0x14c99c: 0x4602a09c  madd.s      $f2, $f20, $f2
    ctx->pc = 0x14c99cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[2]));
label_14c9a0:
    // 0x14c9a0: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x14c9a0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_14c9a4:
    // 0x14c9a4: 0x0  nop
    ctx->pc = 0x14c9a4u;
    // NOP
label_14c9a8:
    // 0x14c9a8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x14c9a8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_14c9ac:
    // 0x14c9ac: 0xc04c570  jal         func_1315C0
label_14c9b0:
    if (ctx->pc == 0x14C9B0u) {
        ctx->pc = 0x14C9B0u;
            // 0x14c9b0: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x14C9B4u;
        goto label_14c9b4;
    }
    ctx->pc = 0x14C9ACu;
    SET_GPR_U32(ctx, 31, 0x14C9B4u);
    ctx->pc = 0x14C9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14C9ACu;
            // 0x14c9b0: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315C0u;
    if (runtime->hasFunction(0x1315C0u)) {
        auto targetFn = runtime->lookupFunction(0x1315C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C9B4u; }
        if (ctx->pc != 0x14C9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRoll__9mgCCameraFf_0x1315c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14C9B4u; }
        if (ctx->pc != 0x14C9B4u) { return; }
    }
    ctx->pc = 0x14C9B4u;
label_14c9b4:
    // 0x14c9b4: 0x1000004c  b           . + 4 + (0x4C << 2)
label_14c9b8:
    if (ctx->pc == 0x14C9B8u) {
        ctx->pc = 0x14C9BCu;
        goto label_14c9bc;
    }
    ctx->pc = 0x14C9B4u;
    {
        const bool branch_taken_0x14c9b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c9b4) {
            ctx->pc = 0x14CAE8u;
            goto label_14cae8;
        }
    }
    ctx->pc = 0x14C9BCu;
label_14c9bc:
    // 0x14c9bc: 0x1240004a  beqz        $s2, . + 4 + (0x4A << 2)
label_14c9c0:
    if (ctx->pc == 0x14C9C0u) {
        ctx->pc = 0x14C9C4u;
        goto label_14c9c4;
    }
    ctx->pc = 0x14C9BCu;
    {
        const bool branch_taken_0x14c9bc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c9bc) {
            ctx->pc = 0x14CAE8u;
            goto label_14cae8;
        }
    }
    ctx->pc = 0x14C9C4u;
label_14c9c4:
    // 0x14c9c4: 0x8e660010  lw          $a2, 0x10($s3)
    ctx->pc = 0x14c9c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_14c9c8:
    // 0x14c9c8: 0x102900  sll         $a1, $s0, 4
    ctx->pc = 0x14c9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_14c9cc:
    // 0x14c9cc: 0x112100  sll         $a0, $s1, 4
    ctx->pc = 0x14c9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_14c9d0:
    // 0x14c9d0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x14c9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_14c9d4:
    // 0x14c9d4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14c9d4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14c9d8:
    // 0x14c9d8: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x14c9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_14c9dc:
    // 0x14c9dc: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x14c9dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_14c9e0:
    // 0x14c9e0: 0x3c034334  lui         $v1, 0x4334
    ctx->pc = 0x14c9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17204 << 16));
label_14c9e4:
    // 0x14c9e4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x14c9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_14c9e8:
    // 0x14c9e8: 0xc52821  addu        $a1, $a2, $a1
    ctx->pc = 0x14c9e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_14c9ec:
    // 0x14c9ec: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x14c9ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
label_14c9f0:
    // 0x14c9f0: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x14c9f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_14c9f4:
    // 0x14c9f4: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x14c9f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_14c9f8:
    // 0x14c9f8: 0xc4820000  lwc1        $f2, 0x0($a0)
    ctx->pc = 0x14c9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_14c9fc:
    // 0x14c9fc: 0x46140141  sub.s       $f5, $f0, $f20
    ctx->pc = 0x14c9fcu;
    ctx->f[5] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_14ca00:
    // 0x14ca00: 0x4603281a  mula.s      $f5, $f3
    ctx->pc = 0x14ca00u;
    ctx->f[31] = FPU_MUL_S(ctx->f[5], ctx->f[3]);
label_14ca04:
    // 0x14ca04: 0x4602a09c  madd.s      $f2, $f20, $f2
    ctx->pc = 0x14ca04u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[20], ctx->f[2]));
label_14ca08:
    // 0x14ca08: 0x46022082  mul.s       $f2, $f4, $f2
    ctx->pc = 0x14ca08u;
    ctx->f[2] = FPU_MUL_S(ctx->f[4], ctx->f[2]);
label_14ca0c:
    // 0x14ca0c: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14ca0cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14ca10:
    // 0x14ca10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14ca10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14ca14:
    // 0x14ca14: 0x0  nop
    ctx->pc = 0x14ca14u;
    // NOP
label_14ca18:
    // 0x14ca18: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x14ca18u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_14ca1c:
    // 0x14ca1c: 0x0  nop
    ctx->pc = 0x14ca1cu;
    // NOP
label_14ca20:
    // 0x14ca20: 0x0  nop
    ctx->pc = 0x14ca20u;
    // NOP
label_14ca24:
    // 0x14ca24: 0xc047a7e  jal         func_11E9F8
label_14ca28:
    if (ctx->pc == 0x14CA28u) {
        ctx->pc = 0x14CA28u;
            // 0x14ca28: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x14CA2Cu;
        goto label_14ca2c;
    }
    ctx->pc = 0x14CA24u;
    SET_GPR_U32(ctx, 31, 0x14CA2Cu);
    ctx->pc = 0x14CA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CA24u;
            // 0x14ca28: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E9F8u;
    if (runtime->hasFunction(0x11E9F8u)) {
        auto targetFn = runtime->lookupFunction(0x11E9F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CA2Cu; }
        if (ctx->pc != 0x14CA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        tanf_0x11e9f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CA2Cu; }
        if (ctx->pc != 0x14CA2Cu) { return; }
    }
    ctx->pc = 0x14CA2Cu;
label_14ca2c:
    // 0x14ca2c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14ca2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_14ca30:
    // 0x14ca30: 0x3c0343f0  lui         $v1, 0x43F0
    ctx->pc = 0x14ca30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17392 << 16));
label_14ca34:
    // 0x14ca34: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x14ca34u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_14ca38:
    // 0x14ca38: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x14ca38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_14ca3c:
    // 0x14ca3c: 0x0  nop
    ctx->pc = 0x14ca3cu;
    // NOP
label_14ca40:
    // 0x14ca40: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x14ca40u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
label_14ca44:
    // 0x14ca44: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x14ca44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_14ca48:
    // 0x14ca48: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x14ca48u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_14ca4c:
    // 0x14ca4c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14ca4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14ca50:
    // 0x14ca50: 0xc050d88  jal         func_143620
label_14ca54:
    if (ctx->pc == 0x14CA54u) {
        ctx->pc = 0x14CA54u;
            // 0x14ca54: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x14CA58u;
        goto label_14ca58;
    }
    ctx->pc = 0x14CA50u;
    SET_GPR_U32(ctx, 31, 0x14CA58u);
    ctx->pc = 0x14CA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14CA50u;
            // 0x14ca54: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x143620u;
    if (runtime->hasFunction(0x143620u)) {
        auto targetFn = runtime->lookupFunction(0x143620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CA58u; }
        if (ctx->pc != 0x14CA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetProjection__Ff_0x143620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x14CA58u; }
        if (ctx->pc != 0x14CA58u) { return; }
    }
    ctx->pc = 0x14CA58u;
label_14ca58:
    // 0x14ca58: 0x10000023  b           . + 4 + (0x23 << 2)
label_14ca5c:
    if (ctx->pc == 0x14CA5Cu) {
        ctx->pc = 0x14CA60u;
        goto label_14ca60;
    }
    ctx->pc = 0x14CA58u;
    {
        const bool branch_taken_0x14ca58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x14ca58) {
            ctx->pc = 0x14CAE8u;
            goto label_14cae8;
        }
    }
    ctx->pc = 0x14CA60u;
label_14ca60:
    // 0x14ca60: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x14ca60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_14ca64:
    // 0x14ca64: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14ca64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_14ca68:
    // 0x14ca68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14ca68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14ca6c:
    // 0x14ca6c: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x14ca6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_14ca70:
    // 0x14ca70: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x14ca70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_14ca74:
    // 0x14ca74: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x14ca74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14ca78:
    // 0x14ca78: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14ca78u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14ca7c:
    // 0x14ca7c: 0x0  nop
    ctx->pc = 0x14ca7cu;
    // NOP
label_14ca80:
    // 0x14ca80: 0x45000004  bc1f        . + 4 + (0x4 << 2)
label_14ca84:
    if (ctx->pc == 0x14CA84u) {
        ctx->pc = 0x14CA88u;
        goto label_14ca88;
    }
    ctx->pc = 0x14CA80u;
    {
        const bool branch_taken_0x14ca80 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14ca80) {
            ctx->pc = 0x14CA94u;
            goto label_14ca94;
        }
    }
    ctx->pc = 0x14CA88u;
label_14ca88:
    // 0x14ca88: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x14ca88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_14ca8c:
    // 0x14ca8c: 0x10000016  b           . + 4 + (0x16 << 2)
label_14ca90:
    if (ctx->pc == 0x14CA90u) {
        ctx->pc = 0x14CA90u;
            // 0x14ca90: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->pc = 0x14CA94u;
        goto label_14ca94;
    }
    ctx->pc = 0x14CA8Cu;
    {
        const bool branch_taken_0x14ca8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CA8Cu;
            // 0x14ca90: 0xac400018  sw          $zero, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ca8c) {
            ctx->pc = 0x14CAE8u;
            goto label_14cae8;
        }
    }
    ctx->pc = 0x14CA94u;
label_14ca94:
    // 0x14ca94: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x14ca94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_14ca98:
    // 0x14ca98: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x14ca98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_14ca9c:
    // 0x14ca9c: 0x10000012  b           . + 4 + (0x12 << 2)
label_14caa0:
    if (ctx->pc == 0x14CAA0u) {
        ctx->pc = 0x14CAA0u;
            // 0x14caa0: 0xac430018  sw          $v1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
        ctx->pc = 0x14CAA4u;
        goto label_14caa4;
    }
    ctx->pc = 0x14CA9Cu;
    {
        const bool branch_taken_0x14ca9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CA9Cu;
            // 0x14caa0: 0xac430018  sw          $v1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14ca9c) {
            ctx->pc = 0x14CAE8u;
            goto label_14cae8;
        }
    }
    ctx->pc = 0x14CAA4u;
label_14caa4:
    // 0x14caa4: 0x8e630010  lw          $v1, 0x10($s3)
    ctx->pc = 0x14caa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_14caa8:
    // 0x14caa8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x14caa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_14caac:
    // 0x14caac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14caacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_14cab0:
    // 0x14cab0: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x14cab0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_14cab4:
    // 0x14cab4: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x14cab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_14cab8:
    // 0x14cab8: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x14cab8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_14cabc:
    // 0x14cabc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x14cabcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_14cac0:
    // 0x14cac0: 0x0  nop
    ctx->pc = 0x14cac0u;
    // NOP
label_14cac4:
    // 0x14cac4: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_14cac8:
    if (ctx->pc == 0x14CAC8u) {
        ctx->pc = 0x14CACCu;
        goto label_14cacc;
    }
    ctx->pc = 0x14CAC4u;
    {
        const bool branch_taken_0x14cac4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x14cac4) {
            ctx->pc = 0x14CADCu;
            goto label_14cadc;
        }
    }
    ctx->pc = 0x14CACCu;
label_14cacc:
    // 0x14cacc: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x14caccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_14cad0:
    // 0x14cad0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x14cad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_14cad4:
    // 0x14cad4: 0x10000004  b           . + 4 + (0x4 << 2)
label_14cad8:
    if (ctx->pc == 0x14CAD8u) {
        ctx->pc = 0x14CAD8u;
            // 0x14cad8: 0xac430018  sw          $v1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
        ctx->pc = 0x14CADCu;
        goto label_14cadc;
    }
    ctx->pc = 0x14CAD4u;
    {
        const bool branch_taken_0x14cad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14CAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CAD4u;
            // 0x14cad8: 0xac430018  sw          $v1, 0x18($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14cad4) {
            ctx->pc = 0x14CAE8u;
            goto label_14cae8;
        }
    }
    ctx->pc = 0x14CADCu;
label_14cadc:
    // 0x14cadc: 0x8ea200f4  lw          $v0, 0xF4($s5)
    ctx->pc = 0x14cadcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 244)));
label_14cae0:
    // 0x14cae0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14cae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14cae4:
    // 0x14cae4: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x14cae4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_14cae8:
    // 0x14cae8: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x14cae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_14caec:
    // 0x14caec: 0x0  nop
    ctx->pc = 0x14caecu;
    // NOP
label_14caf0:
    // 0x14caf0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x14caf0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_14caf4:
    // 0x14caf4: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x14caf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_14caf8:
    // 0x14caf8: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x14caf8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_14cafc:
    // 0x14cafc: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x14cafcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_14cb00:
    // 0x14cb00: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x14cb00u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_14cb04:
    // 0x14cb04: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x14cb04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_14cb08:
    // 0x14cb08: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x14cb08u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_14cb0c:
    // 0x14cb0c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x14cb0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_14cb10:
    // 0x14cb10: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x14cb10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14cb14:
    // 0x14cb14: 0x3e00008  jr          $ra
label_14cb18:
    if (ctx->pc == 0x14CB18u) {
        ctx->pc = 0x14CB18u;
            // 0x14cb18: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x14CB1Cu;
        goto label_fallthrough_0x14cb14;
    }
    ctx->pc = 0x14CB14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14CB18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14CB14u;
            // 0x14cb18: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x14cb14:
    ctx->pc = 0x14CB1Cu;
}
