#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: RoboAirMoveIF__12CActionCharaFii
// Address: 0x16f330 - 0x16fa28
void RoboAirMoveIF__12CActionCharaFii_0x16f330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("RoboAirMoveIF__12CActionCharaFii_0x16f330");
#endif

    switch (ctx->pc) {
        case 0x16f330u: goto label_16f330;
        case 0x16f334u: goto label_16f334;
        case 0x16f338u: goto label_16f338;
        case 0x16f33cu: goto label_16f33c;
        case 0x16f340u: goto label_16f340;
        case 0x16f344u: goto label_16f344;
        case 0x16f348u: goto label_16f348;
        case 0x16f34cu: goto label_16f34c;
        case 0x16f350u: goto label_16f350;
        case 0x16f354u: goto label_16f354;
        case 0x16f358u: goto label_16f358;
        case 0x16f35cu: goto label_16f35c;
        case 0x16f360u: goto label_16f360;
        case 0x16f364u: goto label_16f364;
        case 0x16f368u: goto label_16f368;
        case 0x16f36cu: goto label_16f36c;
        case 0x16f370u: goto label_16f370;
        case 0x16f374u: goto label_16f374;
        case 0x16f378u: goto label_16f378;
        case 0x16f37cu: goto label_16f37c;
        case 0x16f380u: goto label_16f380;
        case 0x16f384u: goto label_16f384;
        case 0x16f388u: goto label_16f388;
        case 0x16f38cu: goto label_16f38c;
        case 0x16f390u: goto label_16f390;
        case 0x16f394u: goto label_16f394;
        case 0x16f398u: goto label_16f398;
        case 0x16f39cu: goto label_16f39c;
        case 0x16f3a0u: goto label_16f3a0;
        case 0x16f3a4u: goto label_16f3a4;
        case 0x16f3a8u: goto label_16f3a8;
        case 0x16f3acu: goto label_16f3ac;
        case 0x16f3b0u: goto label_16f3b0;
        case 0x16f3b4u: goto label_16f3b4;
        case 0x16f3b8u: goto label_16f3b8;
        case 0x16f3bcu: goto label_16f3bc;
        case 0x16f3c0u: goto label_16f3c0;
        case 0x16f3c4u: goto label_16f3c4;
        case 0x16f3c8u: goto label_16f3c8;
        case 0x16f3ccu: goto label_16f3cc;
        case 0x16f3d0u: goto label_16f3d0;
        case 0x16f3d4u: goto label_16f3d4;
        case 0x16f3d8u: goto label_16f3d8;
        case 0x16f3dcu: goto label_16f3dc;
        case 0x16f3e0u: goto label_16f3e0;
        case 0x16f3e4u: goto label_16f3e4;
        case 0x16f3e8u: goto label_16f3e8;
        case 0x16f3ecu: goto label_16f3ec;
        case 0x16f3f0u: goto label_16f3f0;
        case 0x16f3f4u: goto label_16f3f4;
        case 0x16f3f8u: goto label_16f3f8;
        case 0x16f3fcu: goto label_16f3fc;
        case 0x16f400u: goto label_16f400;
        case 0x16f404u: goto label_16f404;
        case 0x16f408u: goto label_16f408;
        case 0x16f40cu: goto label_16f40c;
        case 0x16f410u: goto label_16f410;
        case 0x16f414u: goto label_16f414;
        case 0x16f418u: goto label_16f418;
        case 0x16f41cu: goto label_16f41c;
        case 0x16f420u: goto label_16f420;
        case 0x16f424u: goto label_16f424;
        case 0x16f428u: goto label_16f428;
        case 0x16f42cu: goto label_16f42c;
        case 0x16f430u: goto label_16f430;
        case 0x16f434u: goto label_16f434;
        case 0x16f438u: goto label_16f438;
        case 0x16f43cu: goto label_16f43c;
        case 0x16f440u: goto label_16f440;
        case 0x16f444u: goto label_16f444;
        case 0x16f448u: goto label_16f448;
        case 0x16f44cu: goto label_16f44c;
        case 0x16f450u: goto label_16f450;
        case 0x16f454u: goto label_16f454;
        case 0x16f458u: goto label_16f458;
        case 0x16f45cu: goto label_16f45c;
        case 0x16f460u: goto label_16f460;
        case 0x16f464u: goto label_16f464;
        case 0x16f468u: goto label_16f468;
        case 0x16f46cu: goto label_16f46c;
        case 0x16f470u: goto label_16f470;
        case 0x16f474u: goto label_16f474;
        case 0x16f478u: goto label_16f478;
        case 0x16f47cu: goto label_16f47c;
        case 0x16f480u: goto label_16f480;
        case 0x16f484u: goto label_16f484;
        case 0x16f488u: goto label_16f488;
        case 0x16f48cu: goto label_16f48c;
        case 0x16f490u: goto label_16f490;
        case 0x16f494u: goto label_16f494;
        case 0x16f498u: goto label_16f498;
        case 0x16f49cu: goto label_16f49c;
        case 0x16f4a0u: goto label_16f4a0;
        case 0x16f4a4u: goto label_16f4a4;
        case 0x16f4a8u: goto label_16f4a8;
        case 0x16f4acu: goto label_16f4ac;
        case 0x16f4b0u: goto label_16f4b0;
        case 0x16f4b4u: goto label_16f4b4;
        case 0x16f4b8u: goto label_16f4b8;
        case 0x16f4bcu: goto label_16f4bc;
        case 0x16f4c0u: goto label_16f4c0;
        case 0x16f4c4u: goto label_16f4c4;
        case 0x16f4c8u: goto label_16f4c8;
        case 0x16f4ccu: goto label_16f4cc;
        case 0x16f4d0u: goto label_16f4d0;
        case 0x16f4d4u: goto label_16f4d4;
        case 0x16f4d8u: goto label_16f4d8;
        case 0x16f4dcu: goto label_16f4dc;
        case 0x16f4e0u: goto label_16f4e0;
        case 0x16f4e4u: goto label_16f4e4;
        case 0x16f4e8u: goto label_16f4e8;
        case 0x16f4ecu: goto label_16f4ec;
        case 0x16f4f0u: goto label_16f4f0;
        case 0x16f4f4u: goto label_16f4f4;
        case 0x16f4f8u: goto label_16f4f8;
        case 0x16f4fcu: goto label_16f4fc;
        case 0x16f500u: goto label_16f500;
        case 0x16f504u: goto label_16f504;
        case 0x16f508u: goto label_16f508;
        case 0x16f50cu: goto label_16f50c;
        case 0x16f510u: goto label_16f510;
        case 0x16f514u: goto label_16f514;
        case 0x16f518u: goto label_16f518;
        case 0x16f51cu: goto label_16f51c;
        case 0x16f520u: goto label_16f520;
        case 0x16f524u: goto label_16f524;
        case 0x16f528u: goto label_16f528;
        case 0x16f52cu: goto label_16f52c;
        case 0x16f530u: goto label_16f530;
        case 0x16f534u: goto label_16f534;
        case 0x16f538u: goto label_16f538;
        case 0x16f53cu: goto label_16f53c;
        case 0x16f540u: goto label_16f540;
        case 0x16f544u: goto label_16f544;
        case 0x16f548u: goto label_16f548;
        case 0x16f54cu: goto label_16f54c;
        case 0x16f550u: goto label_16f550;
        case 0x16f554u: goto label_16f554;
        case 0x16f558u: goto label_16f558;
        case 0x16f55cu: goto label_16f55c;
        case 0x16f560u: goto label_16f560;
        case 0x16f564u: goto label_16f564;
        case 0x16f568u: goto label_16f568;
        case 0x16f56cu: goto label_16f56c;
        case 0x16f570u: goto label_16f570;
        case 0x16f574u: goto label_16f574;
        case 0x16f578u: goto label_16f578;
        case 0x16f57cu: goto label_16f57c;
        case 0x16f580u: goto label_16f580;
        case 0x16f584u: goto label_16f584;
        case 0x16f588u: goto label_16f588;
        case 0x16f58cu: goto label_16f58c;
        case 0x16f590u: goto label_16f590;
        case 0x16f594u: goto label_16f594;
        case 0x16f598u: goto label_16f598;
        case 0x16f59cu: goto label_16f59c;
        case 0x16f5a0u: goto label_16f5a0;
        case 0x16f5a4u: goto label_16f5a4;
        case 0x16f5a8u: goto label_16f5a8;
        case 0x16f5acu: goto label_16f5ac;
        case 0x16f5b0u: goto label_16f5b0;
        case 0x16f5b4u: goto label_16f5b4;
        case 0x16f5b8u: goto label_16f5b8;
        case 0x16f5bcu: goto label_16f5bc;
        case 0x16f5c0u: goto label_16f5c0;
        case 0x16f5c4u: goto label_16f5c4;
        case 0x16f5c8u: goto label_16f5c8;
        case 0x16f5ccu: goto label_16f5cc;
        case 0x16f5d0u: goto label_16f5d0;
        case 0x16f5d4u: goto label_16f5d4;
        case 0x16f5d8u: goto label_16f5d8;
        case 0x16f5dcu: goto label_16f5dc;
        case 0x16f5e0u: goto label_16f5e0;
        case 0x16f5e4u: goto label_16f5e4;
        case 0x16f5e8u: goto label_16f5e8;
        case 0x16f5ecu: goto label_16f5ec;
        case 0x16f5f0u: goto label_16f5f0;
        case 0x16f5f4u: goto label_16f5f4;
        case 0x16f5f8u: goto label_16f5f8;
        case 0x16f5fcu: goto label_16f5fc;
        case 0x16f600u: goto label_16f600;
        case 0x16f604u: goto label_16f604;
        case 0x16f608u: goto label_16f608;
        case 0x16f60cu: goto label_16f60c;
        case 0x16f610u: goto label_16f610;
        case 0x16f614u: goto label_16f614;
        case 0x16f618u: goto label_16f618;
        case 0x16f61cu: goto label_16f61c;
        case 0x16f620u: goto label_16f620;
        case 0x16f624u: goto label_16f624;
        case 0x16f628u: goto label_16f628;
        case 0x16f62cu: goto label_16f62c;
        case 0x16f630u: goto label_16f630;
        case 0x16f634u: goto label_16f634;
        case 0x16f638u: goto label_16f638;
        case 0x16f63cu: goto label_16f63c;
        case 0x16f640u: goto label_16f640;
        case 0x16f644u: goto label_16f644;
        case 0x16f648u: goto label_16f648;
        case 0x16f64cu: goto label_16f64c;
        case 0x16f650u: goto label_16f650;
        case 0x16f654u: goto label_16f654;
        case 0x16f658u: goto label_16f658;
        case 0x16f65cu: goto label_16f65c;
        case 0x16f660u: goto label_16f660;
        case 0x16f664u: goto label_16f664;
        case 0x16f668u: goto label_16f668;
        case 0x16f66cu: goto label_16f66c;
        case 0x16f670u: goto label_16f670;
        case 0x16f674u: goto label_16f674;
        case 0x16f678u: goto label_16f678;
        case 0x16f67cu: goto label_16f67c;
        case 0x16f680u: goto label_16f680;
        case 0x16f684u: goto label_16f684;
        case 0x16f688u: goto label_16f688;
        case 0x16f68cu: goto label_16f68c;
        case 0x16f690u: goto label_16f690;
        case 0x16f694u: goto label_16f694;
        case 0x16f698u: goto label_16f698;
        case 0x16f69cu: goto label_16f69c;
        case 0x16f6a0u: goto label_16f6a0;
        case 0x16f6a4u: goto label_16f6a4;
        case 0x16f6a8u: goto label_16f6a8;
        case 0x16f6acu: goto label_16f6ac;
        case 0x16f6b0u: goto label_16f6b0;
        case 0x16f6b4u: goto label_16f6b4;
        case 0x16f6b8u: goto label_16f6b8;
        case 0x16f6bcu: goto label_16f6bc;
        case 0x16f6c0u: goto label_16f6c0;
        case 0x16f6c4u: goto label_16f6c4;
        case 0x16f6c8u: goto label_16f6c8;
        case 0x16f6ccu: goto label_16f6cc;
        case 0x16f6d0u: goto label_16f6d0;
        case 0x16f6d4u: goto label_16f6d4;
        case 0x16f6d8u: goto label_16f6d8;
        case 0x16f6dcu: goto label_16f6dc;
        case 0x16f6e0u: goto label_16f6e0;
        case 0x16f6e4u: goto label_16f6e4;
        case 0x16f6e8u: goto label_16f6e8;
        case 0x16f6ecu: goto label_16f6ec;
        case 0x16f6f0u: goto label_16f6f0;
        case 0x16f6f4u: goto label_16f6f4;
        case 0x16f6f8u: goto label_16f6f8;
        case 0x16f6fcu: goto label_16f6fc;
        case 0x16f700u: goto label_16f700;
        case 0x16f704u: goto label_16f704;
        case 0x16f708u: goto label_16f708;
        case 0x16f70cu: goto label_16f70c;
        case 0x16f710u: goto label_16f710;
        case 0x16f714u: goto label_16f714;
        case 0x16f718u: goto label_16f718;
        case 0x16f71cu: goto label_16f71c;
        case 0x16f720u: goto label_16f720;
        case 0x16f724u: goto label_16f724;
        case 0x16f728u: goto label_16f728;
        case 0x16f72cu: goto label_16f72c;
        case 0x16f730u: goto label_16f730;
        case 0x16f734u: goto label_16f734;
        case 0x16f738u: goto label_16f738;
        case 0x16f73cu: goto label_16f73c;
        case 0x16f740u: goto label_16f740;
        case 0x16f744u: goto label_16f744;
        case 0x16f748u: goto label_16f748;
        case 0x16f74cu: goto label_16f74c;
        case 0x16f750u: goto label_16f750;
        case 0x16f754u: goto label_16f754;
        case 0x16f758u: goto label_16f758;
        case 0x16f75cu: goto label_16f75c;
        case 0x16f760u: goto label_16f760;
        case 0x16f764u: goto label_16f764;
        case 0x16f768u: goto label_16f768;
        case 0x16f76cu: goto label_16f76c;
        case 0x16f770u: goto label_16f770;
        case 0x16f774u: goto label_16f774;
        case 0x16f778u: goto label_16f778;
        case 0x16f77cu: goto label_16f77c;
        case 0x16f780u: goto label_16f780;
        case 0x16f784u: goto label_16f784;
        case 0x16f788u: goto label_16f788;
        case 0x16f78cu: goto label_16f78c;
        case 0x16f790u: goto label_16f790;
        case 0x16f794u: goto label_16f794;
        case 0x16f798u: goto label_16f798;
        case 0x16f79cu: goto label_16f79c;
        case 0x16f7a0u: goto label_16f7a0;
        case 0x16f7a4u: goto label_16f7a4;
        case 0x16f7a8u: goto label_16f7a8;
        case 0x16f7acu: goto label_16f7ac;
        case 0x16f7b0u: goto label_16f7b0;
        case 0x16f7b4u: goto label_16f7b4;
        case 0x16f7b8u: goto label_16f7b8;
        case 0x16f7bcu: goto label_16f7bc;
        case 0x16f7c0u: goto label_16f7c0;
        case 0x16f7c4u: goto label_16f7c4;
        case 0x16f7c8u: goto label_16f7c8;
        case 0x16f7ccu: goto label_16f7cc;
        case 0x16f7d0u: goto label_16f7d0;
        case 0x16f7d4u: goto label_16f7d4;
        case 0x16f7d8u: goto label_16f7d8;
        case 0x16f7dcu: goto label_16f7dc;
        case 0x16f7e0u: goto label_16f7e0;
        case 0x16f7e4u: goto label_16f7e4;
        case 0x16f7e8u: goto label_16f7e8;
        case 0x16f7ecu: goto label_16f7ec;
        case 0x16f7f0u: goto label_16f7f0;
        case 0x16f7f4u: goto label_16f7f4;
        case 0x16f7f8u: goto label_16f7f8;
        case 0x16f7fcu: goto label_16f7fc;
        case 0x16f800u: goto label_16f800;
        case 0x16f804u: goto label_16f804;
        case 0x16f808u: goto label_16f808;
        case 0x16f80cu: goto label_16f80c;
        case 0x16f810u: goto label_16f810;
        case 0x16f814u: goto label_16f814;
        case 0x16f818u: goto label_16f818;
        case 0x16f81cu: goto label_16f81c;
        case 0x16f820u: goto label_16f820;
        case 0x16f824u: goto label_16f824;
        case 0x16f828u: goto label_16f828;
        case 0x16f82cu: goto label_16f82c;
        case 0x16f830u: goto label_16f830;
        case 0x16f834u: goto label_16f834;
        case 0x16f838u: goto label_16f838;
        case 0x16f83cu: goto label_16f83c;
        case 0x16f840u: goto label_16f840;
        case 0x16f844u: goto label_16f844;
        case 0x16f848u: goto label_16f848;
        case 0x16f84cu: goto label_16f84c;
        case 0x16f850u: goto label_16f850;
        case 0x16f854u: goto label_16f854;
        case 0x16f858u: goto label_16f858;
        case 0x16f85cu: goto label_16f85c;
        case 0x16f860u: goto label_16f860;
        case 0x16f864u: goto label_16f864;
        case 0x16f868u: goto label_16f868;
        case 0x16f86cu: goto label_16f86c;
        case 0x16f870u: goto label_16f870;
        case 0x16f874u: goto label_16f874;
        case 0x16f878u: goto label_16f878;
        case 0x16f87cu: goto label_16f87c;
        case 0x16f880u: goto label_16f880;
        case 0x16f884u: goto label_16f884;
        case 0x16f888u: goto label_16f888;
        case 0x16f88cu: goto label_16f88c;
        case 0x16f890u: goto label_16f890;
        case 0x16f894u: goto label_16f894;
        case 0x16f898u: goto label_16f898;
        case 0x16f89cu: goto label_16f89c;
        case 0x16f8a0u: goto label_16f8a0;
        case 0x16f8a4u: goto label_16f8a4;
        case 0x16f8a8u: goto label_16f8a8;
        case 0x16f8acu: goto label_16f8ac;
        case 0x16f8b0u: goto label_16f8b0;
        case 0x16f8b4u: goto label_16f8b4;
        case 0x16f8b8u: goto label_16f8b8;
        case 0x16f8bcu: goto label_16f8bc;
        case 0x16f8c0u: goto label_16f8c0;
        case 0x16f8c4u: goto label_16f8c4;
        case 0x16f8c8u: goto label_16f8c8;
        case 0x16f8ccu: goto label_16f8cc;
        case 0x16f8d0u: goto label_16f8d0;
        case 0x16f8d4u: goto label_16f8d4;
        case 0x16f8d8u: goto label_16f8d8;
        case 0x16f8dcu: goto label_16f8dc;
        case 0x16f8e0u: goto label_16f8e0;
        case 0x16f8e4u: goto label_16f8e4;
        case 0x16f8e8u: goto label_16f8e8;
        case 0x16f8ecu: goto label_16f8ec;
        case 0x16f8f0u: goto label_16f8f0;
        case 0x16f8f4u: goto label_16f8f4;
        case 0x16f8f8u: goto label_16f8f8;
        case 0x16f8fcu: goto label_16f8fc;
        case 0x16f900u: goto label_16f900;
        case 0x16f904u: goto label_16f904;
        case 0x16f908u: goto label_16f908;
        case 0x16f90cu: goto label_16f90c;
        case 0x16f910u: goto label_16f910;
        case 0x16f914u: goto label_16f914;
        case 0x16f918u: goto label_16f918;
        case 0x16f91cu: goto label_16f91c;
        case 0x16f920u: goto label_16f920;
        case 0x16f924u: goto label_16f924;
        case 0x16f928u: goto label_16f928;
        case 0x16f92cu: goto label_16f92c;
        case 0x16f930u: goto label_16f930;
        case 0x16f934u: goto label_16f934;
        case 0x16f938u: goto label_16f938;
        case 0x16f93cu: goto label_16f93c;
        case 0x16f940u: goto label_16f940;
        case 0x16f944u: goto label_16f944;
        case 0x16f948u: goto label_16f948;
        case 0x16f94cu: goto label_16f94c;
        case 0x16f950u: goto label_16f950;
        case 0x16f954u: goto label_16f954;
        case 0x16f958u: goto label_16f958;
        case 0x16f95cu: goto label_16f95c;
        case 0x16f960u: goto label_16f960;
        case 0x16f964u: goto label_16f964;
        case 0x16f968u: goto label_16f968;
        case 0x16f96cu: goto label_16f96c;
        case 0x16f970u: goto label_16f970;
        case 0x16f974u: goto label_16f974;
        case 0x16f978u: goto label_16f978;
        case 0x16f97cu: goto label_16f97c;
        case 0x16f980u: goto label_16f980;
        case 0x16f984u: goto label_16f984;
        case 0x16f988u: goto label_16f988;
        case 0x16f98cu: goto label_16f98c;
        case 0x16f990u: goto label_16f990;
        case 0x16f994u: goto label_16f994;
        case 0x16f998u: goto label_16f998;
        case 0x16f99cu: goto label_16f99c;
        case 0x16f9a0u: goto label_16f9a0;
        case 0x16f9a4u: goto label_16f9a4;
        case 0x16f9a8u: goto label_16f9a8;
        case 0x16f9acu: goto label_16f9ac;
        case 0x16f9b0u: goto label_16f9b0;
        case 0x16f9b4u: goto label_16f9b4;
        case 0x16f9b8u: goto label_16f9b8;
        case 0x16f9bcu: goto label_16f9bc;
        case 0x16f9c0u: goto label_16f9c0;
        case 0x16f9c4u: goto label_16f9c4;
        case 0x16f9c8u: goto label_16f9c8;
        case 0x16f9ccu: goto label_16f9cc;
        case 0x16f9d0u: goto label_16f9d0;
        case 0x16f9d4u: goto label_16f9d4;
        case 0x16f9d8u: goto label_16f9d8;
        case 0x16f9dcu: goto label_16f9dc;
        case 0x16f9e0u: goto label_16f9e0;
        case 0x16f9e4u: goto label_16f9e4;
        case 0x16f9e8u: goto label_16f9e8;
        case 0x16f9ecu: goto label_16f9ec;
        case 0x16f9f0u: goto label_16f9f0;
        case 0x16f9f4u: goto label_16f9f4;
        case 0x16f9f8u: goto label_16f9f8;
        case 0x16f9fcu: goto label_16f9fc;
        case 0x16fa00u: goto label_16fa00;
        case 0x16fa04u: goto label_16fa04;
        case 0x16fa08u: goto label_16fa08;
        case 0x16fa0cu: goto label_16fa0c;
        case 0x16fa10u: goto label_16fa10;
        case 0x16fa14u: goto label_16fa14;
        case 0x16fa18u: goto label_16fa18;
        case 0x16fa1cu: goto label_16fa1c;
        case 0x16fa20u: goto label_16fa20;
        case 0x16fa24u: goto label_16fa24;
        default: break;
    }

    ctx->pc = 0x16f330u;

label_16f330:
    // 0x16f330: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x16f330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_16f334:
    // 0x16f334: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x16f334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_16f338:
    // 0x16f338: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x16f338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_16f33c:
    // 0x16f33c: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x16f33cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_16f340:
    // 0x16f340: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x16f340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_16f344:
    // 0x16f344: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x16f344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_16f348:
    // 0x16f348: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x16f348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_16f34c:
    // 0x16f34c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x16f34cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_16f350:
    // 0x16f350: 0xe7b80010  swc1        $f24, 0x10($sp)
    ctx->pc = 0x16f350u;
    { float f = ctx->f[24]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_16f354:
    // 0x16f354: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x16f354u;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_16f358:
    // 0x16f358: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x16f358u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_16f35c:
    // 0x16f35c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x16f35cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_16f360:
    // 0x16f360: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x16f360u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_16f364:
    // 0x16f364: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x16f364u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_16f368:
    // 0x16f368: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x16f368u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_16f36c:
    // 0x16f36c: 0x320f809  jalr        $t9
label_16f370:
    if (ctx->pc == 0x16F370u) {
        ctx->pc = 0x16F370u;
            // 0x16f370: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F374u;
        goto label_16f374;
    }
    ctx->pc = 0x16F36Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16F374u);
        ctx->pc = 0x16F370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F36Cu;
            // 0x16f370: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F374u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F374u; }
            if (ctx->pc != 0x16F374u) { return; }
        }
        }
    }
    ctx->pc = 0x16F374u;
label_16f374:
    // 0x16f374: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x16f374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_16f378:
    // 0x16f378: 0xc041c5c  jal         func_107170
label_16f37c:
    if (ctx->pc == 0x16F37Cu) {
        ctx->pc = 0x16F37Cu;
            // 0x16f37c: 0x26250080  addiu       $a1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->pc = 0x16F380u;
        goto label_16f380;
    }
    ctx->pc = 0x16F378u;
    SET_GPR_U32(ctx, 31, 0x16F380u);
    ctx->pc = 0x16F37Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F378u;
            // 0x16f37c: 0x26250080  addiu       $a1, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F380u; }
        if (ctx->pc != 0x16F380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F380u; }
        if (ctx->pc != 0x16F380u) { return; }
    }
    ctx->pc = 0x16F380u;
label_16f380:
    // 0x16f380: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x16f380u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_16f384:
    // 0x16f384: 0xc04c678  jal         func_1319E0
label_16f388:
    if (ctx->pc == 0x16F388u) {
        ctx->pc = 0x16F388u;
            // 0x16f388: 0x8c24d434  lw          $a0, -0x2BCC($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956084)));
        ctx->pc = 0x16F38Cu;
        goto label_16f38c;
    }
    ctx->pc = 0x16F384u;
    SET_GPR_U32(ctx, 31, 0x16F38Cu);
    ctx->pc = 0x16F388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F384u;
            // 0x16f388: 0x8c24d434  lw          $a0, -0x2BCC($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956084)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319E0u;
    if (runtime->hasFunction(0x1319E0u)) {
        auto targetFn = runtime->lookupFunction(0x1319E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F38Cu; }
        if (ctx->pc != 0x16F38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetAngle__15mgCCameraFollowFv_0x1319e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F38Cu; }
        if (ctx->pc != 0x16F38Cu) { return; }
    }
    ctx->pc = 0x16F38Cu;
label_16f38c:
    // 0x16f38c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x16f38cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_16f390:
    // 0x16f390: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x16f390u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_16f394:
    // 0x16f394: 0xc052cc0  jal         func_14B300
label_16f398:
    if (ctx->pc == 0x16F398u) {
        ctx->pc = 0x16F398u;
            // 0x16f398: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x16F39Cu;
        goto label_16f39c;
    }
    ctx->pc = 0x16F394u;
    SET_GPR_U32(ctx, 31, 0x16F39Cu);
    ctx->pc = 0x16F398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F394u;
            // 0x16f398: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B300u;
    if (runtime->hasFunction(0x14B300u)) {
        auto targetFn = runtime->lookupFunction(0x14B300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F39Cu; }
        if (ctx->pc != 0x16F39Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLXf__8CGamePadFv_0x14b300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F39Cu; }
        if (ctx->pc != 0x16F39Cu) { return; }
    }
    ctx->pc = 0x16F39Cu;
label_16f39c:
    // 0x16f39c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x16f39cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_16f3a0:
    // 0x16f3a0: 0x46000586  mov.s       $f22, $f0
    ctx->pc = 0x16f3a0u;
    ctx->f[22] = FPU_MOV_S(ctx->f[0]);
label_16f3a4:
    // 0x16f3a4: 0xc052cd0  jal         func_14B340
label_16f3a8:
    if (ctx->pc == 0x16F3A8u) {
        ctx->pc = 0x16F3A8u;
            // 0x16f3a8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x16F3ACu;
        goto label_16f3ac;
    }
    ctx->pc = 0x16F3A4u;
    SET_GPR_U32(ctx, 31, 0x16F3ACu);
    ctx->pc = 0x16F3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F3A4u;
            // 0x16f3a8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B340u;
    if (runtime->hasFunction(0x14B340u)) {
        auto targetFn = runtime->lookupFunction(0x14B340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F3ACu; }
        if (ctx->pc != 0x16F3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLYf__8CGamePadFv_0x14b340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F3ACu; }
        if (ctx->pc != 0x16F3ACu) { return; }
    }
    ctx->pc = 0x16F3ACu;
label_16f3ac:
    // 0x16f3ac: 0x460005c6  mov.s       $f23, $f0
    ctx->pc = 0x16f3acu;
    ctx->f[23] = FPU_MOV_S(ctx->f[0]);
label_16f3b0:
    // 0x16f3b0: 0xc047964  jal         func_11E590
label_16f3b4:
    if (ctx->pc == 0x16F3B4u) {
        ctx->pc = 0x16F3B4u;
            // 0x16f3b4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x16F3B8u;
        goto label_16f3b8;
    }
    ctx->pc = 0x16F3B0u;
    SET_GPR_U32(ctx, 31, 0x16F3B8u);
    ctx->pc = 0x16F3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F3B0u;
            // 0x16f3b4: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F3B8u; }
        if (ctx->pc != 0x16F3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F3B8u; }
        if (ctx->pc != 0x16F3B8u) { return; }
    }
    ctx->pc = 0x16F3B8u;
label_16f3b8:
    // 0x16f3b8: 0x4600b502  mul.s       $f20, $f22, $f0
    ctx->pc = 0x16f3b8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[22], ctx->f[0]);
label_16f3bc:
    // 0x16f3bc: 0xc047a42  jal         func_11E908
label_16f3c0:
    if (ctx->pc == 0x16F3C0u) {
        ctx->pc = 0x16F3C0u;
            // 0x16f3c0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x16F3C4u;
        goto label_16f3c4;
    }
    ctx->pc = 0x16F3BCu;
    SET_GPR_U32(ctx, 31, 0x16F3C4u);
    ctx->pc = 0x16F3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F3BCu;
            // 0x16f3c0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F3C4u; }
        if (ctx->pc != 0x16F3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F3C4u; }
        if (ctx->pc != 0x16F3C4u) { return; }
    }
    ctx->pc = 0x16F3C4u;
label_16f3c4:
    // 0x16f3c4: 0x4600b802  mul.s       $f0, $f23, $f0
    ctx->pc = 0x16f3c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_16f3c8:
    // 0x16f3c8: 0x4600a600  add.s       $f24, $f20, $f0
    ctx->pc = 0x16f3c8u;
    ctx->f[24] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_16f3cc:
    // 0x16f3cc: 0xc047a42  jal         func_11E908
label_16f3d0:
    if (ctx->pc == 0x16F3D0u) {
        ctx->pc = 0x16F3D0u;
            // 0x16f3d0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x16F3D4u;
        goto label_16f3d4;
    }
    ctx->pc = 0x16F3CCu;
    SET_GPR_U32(ctx, 31, 0x16F3D4u);
    ctx->pc = 0x16F3D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F3CCu;
            // 0x16f3d0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F3D4u; }
        if (ctx->pc != 0x16F3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F3D4u; }
        if (ctx->pc != 0x16F3D4u) { return; }
    }
    ctx->pc = 0x16F3D4u;
label_16f3d4:
    // 0x16f3d4: 0x4600b047  neg.s       $f1, $f22
    ctx->pc = 0x16f3d4u;
    ctx->f[1] = FPU_NEG_S(ctx->f[22]);
label_16f3d8:
    // 0x16f3d8: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x16f3d8u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_16f3dc:
    // 0x16f3dc: 0xc047964  jal         func_11E590
label_16f3e0:
    if (ctx->pc == 0x16F3E0u) {
        ctx->pc = 0x16F3E0u;
            // 0x16f3e0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x16F3E4u;
        goto label_16f3e4;
    }
    ctx->pc = 0x16F3DCu;
    SET_GPR_U32(ctx, 31, 0x16F3E4u);
    ctx->pc = 0x16F3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F3DCu;
            // 0x16f3e0: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F3E4u; }
        if (ctx->pc != 0x16F3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F3E4u; }
        if (ctx->pc != 0x16F3E4u) { return; }
    }
    ctx->pc = 0x16F3E4u;
label_16f3e4:
    // 0x16f3e4: 0x4600b842  mul.s       $f1, $f23, $f0
    ctx->pc = 0x16f3e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[23], ctx->f[0]);
label_16f3e8:
    // 0x16f3e8: 0xa220076d  sb          $zero, 0x76D($s1)
    ctx->pc = 0x16f3e8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1901), (uint8_t)GPR_U32(ctx, 0));
label_16f3ec:
    // 0x16f3ec: 0x3c0440e0  lui         $a0, 0x40E0
    ctx->pc = 0x16f3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16608 << 16));
label_16f3f0:
    // 0x16f3f0: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x16f3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
label_16f3f4:
    // 0x16f3f4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x16f3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_16f3f8:
    // 0x16f3f8: 0xc6200780  lwc1        $f0, 0x780($s1)
    ctx->pc = 0x16f3f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16f3fc:
    // 0x16f3fc: 0x4601a040  add.s       $f1, $f20, $f1
    ctx->pc = 0x16f3fcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[20], ctx->f[1]);
label_16f400:
    // 0x16f400: 0x4483a000  mtc1        $v1, $f20
    ctx->pc = 0x16f400u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_16f404:
    // 0x16f404: 0x46180000  add.s       $f0, $f0, $f24
    ctx->pc = 0x16f404u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[24]);
label_16f408:
    // 0x16f408: 0xe6200780  swc1        $f0, 0x780($s1)
    ctx->pc = 0x16f408u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1920), bits); }
label_16f40c:
    // 0x16f40c: 0xc6200788  lwc1        $f0, 0x788($s1)
    ctx->pc = 0x16f40cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16f410:
    // 0x16f410: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x16f410u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_16f414:
    // 0x16f414: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x16f414u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_16f418:
    // 0x16f418: 0xe6200788  swc1        $f0, 0x788($s1)
    ctx->pc = 0x16f418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1928), bits); }
label_16f41c:
    // 0x16f41c: 0x8e2306a8  lw          $v1, 0x6A8($s1)
    ctx->pc = 0x16f41cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1704)));
label_16f420:
    // 0x16f420: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_16f424:
    if (ctx->pc == 0x16F424u) {
        ctx->pc = 0x16F428u;
        goto label_16f428;
    }
    ctx->pc = 0x16F420u;
    {
        const bool branch_taken_0x16f420 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x16f420) {
            ctx->pc = 0x16F434u;
            goto label_16f434;
        }
    }
    ctx->pc = 0x16F428u;
label_16f428:
    // 0x16f428: 0x4600a086  mov.s       $f2, $f20
    ctx->pc = 0x16f428u;
    ctx->f[2] = FPU_MOV_S(ctx->f[20]);
label_16f42c:
    // 0x16f42c: 0x3c024080  lui         $v0, 0x4080
    ctx->pc = 0x16f42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16512 << 16));
label_16f430:
    // 0x16f430: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x16f430u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_16f434:
    // 0x16f434: 0xc6200780  lwc1        $f0, 0x780($s1)
    ctx->pc = 0x16f434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16f438:
    // 0x16f438: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x16f438u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16f43c:
    // 0x16f43c: 0x0  nop
    ctx->pc = 0x16f43cu;
    // NOP
label_16f440:
    // 0x16f440: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_16f444:
    if (ctx->pc == 0x16F444u) {
        ctx->pc = 0x16F448u;
        goto label_16f448;
    }
    ctx->pc = 0x16F440u;
    {
        const bool branch_taken_0x16f440 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16f440) {
            ctx->pc = 0x16F44Cu;
            goto label_16f44c;
        }
    }
    ctx->pc = 0x16F448u;
label_16f448:
    // 0x16f448: 0xe6220780  swc1        $f2, 0x780($s1)
    ctx->pc = 0x16f448u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1920), bits); }
label_16f44c:
    // 0x16f44c: 0xc6200780  lwc1        $f0, 0x780($s1)
    ctx->pc = 0x16f44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16f450:
    // 0x16f450: 0x46001047  neg.s       $f1, $f2
    ctx->pc = 0x16f450u;
    ctx->f[1] = FPU_NEG_S(ctx->f[2]);
label_16f454:
    // 0x16f454: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16f454u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16f458:
    // 0x16f458: 0x0  nop
    ctx->pc = 0x16f458u;
    // NOP
label_16f45c:
    // 0x16f45c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_16f460:
    if (ctx->pc == 0x16F460u) {
        ctx->pc = 0x16F464u;
        goto label_16f464;
    }
    ctx->pc = 0x16F45Cu;
    {
        const bool branch_taken_0x16f45c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16f45c) {
            ctx->pc = 0x16F468u;
            goto label_16f468;
        }
    }
    ctx->pc = 0x16F464u;
label_16f464:
    // 0x16f464: 0xe6210780  swc1        $f1, 0x780($s1)
    ctx->pc = 0x16f464u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1920), bits); }
label_16f468:
    // 0x16f468: 0xc6200788  lwc1        $f0, 0x788($s1)
    ctx->pc = 0x16f468u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16f46c:
    // 0x16f46c: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x16f46cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16f470:
    // 0x16f470: 0x0  nop
    ctx->pc = 0x16f470u;
    // NOP
label_16f474:
    // 0x16f474: 0x45010002  bc1t        . + 4 + (0x2 << 2)
label_16f478:
    if (ctx->pc == 0x16F478u) {
        ctx->pc = 0x16F47Cu;
        goto label_16f47c;
    }
    ctx->pc = 0x16F474u;
    {
        const bool branch_taken_0x16f474 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16f474) {
            ctx->pc = 0x16F480u;
            goto label_16f480;
        }
    }
    ctx->pc = 0x16F47Cu;
label_16f47c:
    // 0x16f47c: 0xe6220788  swc1        $f2, 0x788($s1)
    ctx->pc = 0x16f47cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1928), bits); }
label_16f480:
    // 0x16f480: 0xc6200788  lwc1        $f0, 0x788($s1)
    ctx->pc = 0x16f480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16f484:
    // 0x16f484: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x16f484u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16f488:
    // 0x16f488: 0x0  nop
    ctx->pc = 0x16f488u;
    // NOP
label_16f48c:
    // 0x16f48c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_16f490:
    if (ctx->pc == 0x16F490u) {
        ctx->pc = 0x16F494u;
        goto label_16f494;
    }
    ctx->pc = 0x16F48Cu;
    {
        const bool branch_taken_0x16f48c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x16f48c) {
            ctx->pc = 0x16F498u;
            goto label_16f498;
        }
    }
    ctx->pc = 0x16F494u;
label_16f494:
    // 0x16f494: 0xe6210788  swc1        $f1, 0x788($s1)
    ctx->pc = 0x16f494u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1928), bits); }
label_16f498:
    // 0x16f498: 0xc6350780  lwc1        $f21, 0x780($s1)
    ctx->pc = 0x16f498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_16f49c:
    // 0x16f49c: 0x3c023f75  lui         $v0, 0x3F75
    ctx->pc = 0x16f49cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16245 << 16));
label_16f4a0:
    // 0x16f4a0: 0x3443c28f  ori         $v1, $v0, 0xC28F
    ctx->pc = 0x16f4a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49807);
label_16f4a4:
    // 0x16f4a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x16f4a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_16f4a8:
    // 0x16f4a8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x16f4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_16f4ac:
    // 0x16f4ac: 0xe7b50080  swc1        $f21, 0x80($sp)
    ctx->pc = 0x16f4acu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 128), bits); }
label_16f4b0:
    // 0x16f4b0: 0xc6360788  lwc1        $f22, 0x788($s1)
    ctx->pc = 0x16f4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_16f4b4:
    // 0x16f4b4: 0xe7b60088  swc1        $f22, 0x88($sp)
    ctx->pc = 0x16f4b4u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 136), bits); }
label_16f4b8:
    // 0x16f4b8: 0xc6200780  lwc1        $f0, 0x780($s1)
    ctx->pc = 0x16f4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1920)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16f4bc:
    // 0x16f4bc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x16f4bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_16f4c0:
    // 0x16f4c0: 0xe6200780  swc1        $f0, 0x780($s1)
    ctx->pc = 0x16f4c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1920), bits); }
label_16f4c4:
    // 0x16f4c4: 0xc6200788  lwc1        $f0, 0x788($s1)
    ctx->pc = 0x16f4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16f4c8:
    // 0x16f4c8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x16f4c8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_16f4cc:
    // 0x16f4cc: 0xe6200788  swc1        $f0, 0x788($s1)
    ctx->pc = 0x16f4ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 1928), bits); }
label_16f4d0:
    // 0x16f4d0: 0x8e2306a8  lw          $v1, 0x6A8($s1)
    ctx->pc = 0x16f4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1704)));
label_16f4d4:
    // 0x16f4d4: 0x1462003e  bne         $v1, $v0, . + 4 + (0x3E << 2)
label_16f4d8:
    if (ctx->pc == 0x16F4D8u) {
        ctx->pc = 0x16F4D8u;
            // 0x16f4d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x16F4DCu;
        goto label_16f4dc;
    }
    ctx->pc = 0x16F4D4u;
    {
        const bool branch_taken_0x16f4d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16F4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F4D4u;
            // 0x16f4d8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f4d4) {
            ctx->pc = 0x16F5D0u;
            goto label_16f5d0;
        }
    }
    ctx->pc = 0x16F4DCu;
label_16f4dc:
    // 0x16f4dc: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x16f4dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_16f4e0:
    // 0x16f4e0: 0xae22059c  sw          $v0, 0x59C($s1)
    ctx->pc = 0x16f4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1436), GPR_U32(ctx, 2));
label_16f4e4:
    // 0x16f4e4: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x16f4e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16f4e8:
    // 0x16f4e8: 0x8e2405a0  lw          $a0, 0x5A0($s1)
    ctx->pc = 0x16f4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
label_16f4ec:
    // 0x16f4ec: 0x8e250588  lw          $a1, 0x588($s1)
    ctx->pc = 0x16f4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1416)));
label_16f4f0:
    // 0x16f4f0: 0xc0631a8  jal         func_18C6A0
label_16f4f4:
    if (ctx->pc == 0x16F4F4u) {
        ctx->pc = 0x16F4F4u;
            // 0x16f4f4: 0x2408000c  addiu       $t0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x16F4F8u;
        goto label_16f4f8;
    }
    ctx->pc = 0x16F4F0u;
    SET_GPR_U32(ctx, 31, 0x16F4F8u);
    ctx->pc = 0x16F4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F4F0u;
            // 0x16f4f4: 0x2408000c  addiu       $t0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C6A0u;
    if (runtime->hasFunction(0x18C6A0u)) {
        auto targetFn = runtime->lookupFunction(0x18C6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F4F8u; }
        if (ctx->pc != 0x16F4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SeLoopPlayStop__11CLoopSeMngrFUiiii_0x18c6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F4F8u; }
        if (ctx->pc != 0x16F4F8u) { return; }
    }
    ctx->pc = 0x16F4F8u;
label_16f4f8:
    // 0x16f4f8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16f4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16f4fc:
    // 0x16f4fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16f4fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16f500:
    // 0x16f500: 0xc05af3c  jal         func_16BCF0
label_16f504:
    if (ctx->pc == 0x16F504u) {
        ctx->pc = 0x16F504u;
            // 0x16f504: 0x24a53708  addiu       $a1, $a1, 0x3708 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14088));
        ctx->pc = 0x16F508u;
        goto label_16f508;
    }
    ctx->pc = 0x16F500u;
    SET_GPR_U32(ctx, 31, 0x16F508u);
    ctx->pc = 0x16F504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F500u;
            // 0x16f504: 0x24a53708  addiu       $a1, $a1, 0x3708 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BCF0u;
    if (runtime->hasFunction(0x16BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x16BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F508u; }
        if (ctx->pc != 0x16F508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchObject__12CActionCharaFPc_0x16bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F508u; }
        if (ctx->pc != 0x16F508u) { return; }
    }
    ctx->pc = 0x16F508u;
label_16f508:
    // 0x16f508: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x16f508u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16f50c:
    // 0x16f50c: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
label_16f510:
    if (ctx->pc == 0x16F510u) {
        ctx->pc = 0x16F514u;
        goto label_16f514;
    }
    ctx->pc = 0x16F50Cu;
    {
        const bool branch_taken_0x16f50c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f50c) {
            ctx->pc = 0x16F564u;
            goto label_16f564;
        }
    }
    ctx->pc = 0x16F514u;
label_16f514:
    // 0x16f514: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x16f514u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16f518:
    // 0x16f518: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16f518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16f51c:
    // 0x16f51c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x16f51cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_16f520:
    // 0x16f520: 0x320f809  jalr        $t9
label_16f524:
    if (ctx->pc == 0x16F524u) {
        ctx->pc = 0x16F524u;
            // 0x16f524: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x16F528u;
        goto label_16f528;
    }
    ctx->pc = 0x16F520u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16F528u);
        ctx->pc = 0x16F524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F520u;
            // 0x16f524: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F528u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F528u; }
            if (ctx->pc != 0x16F528u) { return; }
        }
        }
    }
    ctx->pc = 0x16F528u;
label_16f528:
    // 0x16f528: 0x27b30094  addiu       $s3, $sp, 0x94
    ctx->pc = 0x16f528u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
label_16f52c:
    // 0x16f52c: 0x3c023f01  lui         $v0, 0x3F01
    ctx->pc = 0x16f52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16129 << 16));
label_16f530:
    // 0x16f530: 0xc6610000  lwc1        $f1, 0x0($s3)
    ctx->pc = 0x16f530u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16f534:
    // 0x16f534: 0x3442b7a6  ori         $v0, $v0, 0xB7A6
    ctx->pc = 0x16f534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)47014);
label_16f538:
    // 0x16f538: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16f538u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16f53c:
    // 0x16f53c: 0x0  nop
    ctx->pc = 0x16f53cu;
    // NOP
label_16f540:
    // 0x16f540: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x16f540u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_16f544:
    // 0x16f544: 0xc04c374  jal         func_130DD0
label_16f548:
    if (ctx->pc == 0x16F548u) {
        ctx->pc = 0x16F548u;
            // 0x16f548: 0xe66c0000  swc1        $f12, 0x0($s3) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->pc = 0x16F54Cu;
        goto label_16f54c;
    }
    ctx->pc = 0x16F544u;
    SET_GPR_U32(ctx, 31, 0x16F54Cu);
    ctx->pc = 0x16F548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F544u;
            // 0x16f548: 0xe66c0000  swc1        $f12, 0x0($s3) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F54Cu; }
        if (ctx->pc != 0x16F54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F54Cu; }
        if (ctx->pc != 0x16F54Cu) { return; }
    }
    ctx->pc = 0x16F54Cu;
label_16f54c:
    // 0x16f54c: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x16f54cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
label_16f550:
    // 0x16f550: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16f550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16f554:
    // 0x16f554: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x16f554u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16f558:
    // 0x16f558: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x16f558u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_16f55c:
    // 0x16f55c: 0x320f809  jalr        $t9
label_16f560:
    if (ctx->pc == 0x16F560u) {
        ctx->pc = 0x16F560u;
            // 0x16f560: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x16F564u;
        goto label_16f564;
    }
    ctx->pc = 0x16F55Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16F564u);
        ctx->pc = 0x16F560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F55Cu;
            // 0x16f560: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F564u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F564u; }
            if (ctx->pc != 0x16F564u) { return; }
        }
        }
    }
    ctx->pc = 0x16F564u;
label_16f564:
    // 0x16f564: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16f564u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16f568:
    // 0x16f568: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16f568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16f56c:
    // 0x16f56c: 0xc05af3c  jal         func_16BCF0
label_16f570:
    if (ctx->pc == 0x16F570u) {
        ctx->pc = 0x16F570u;
            // 0x16f570: 0x24a53710  addiu       $a1, $a1, 0x3710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14096));
        ctx->pc = 0x16F574u;
        goto label_16f574;
    }
    ctx->pc = 0x16F56Cu;
    SET_GPR_U32(ctx, 31, 0x16F574u);
    ctx->pc = 0x16F570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F56Cu;
            // 0x16f570: 0x24a53710  addiu       $a1, $a1, 0x3710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BCF0u;
    if (runtime->hasFunction(0x16BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x16BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F574u; }
        if (ctx->pc != 0x16F574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchObject__12CActionCharaFPc_0x16bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F574u; }
        if (ctx->pc != 0x16F574u) { return; }
    }
    ctx->pc = 0x16F574u;
label_16f574:
    // 0x16f574: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x16f574u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16f578:
    // 0x16f578: 0x12600015  beqz        $s3, . + 4 + (0x15 << 2)
label_16f57c:
    if (ctx->pc == 0x16F57Cu) {
        ctx->pc = 0x16F580u;
        goto label_16f580;
    }
    ctx->pc = 0x16F578u;
    {
        const bool branch_taken_0x16f578 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f578) {
            ctx->pc = 0x16F5D0u;
            goto label_16f5d0;
        }
    }
    ctx->pc = 0x16F580u;
label_16f580:
    // 0x16f580: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x16f580u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_16f584:
    // 0x16f584: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16f584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16f588:
    // 0x16f588: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x16f588u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_16f58c:
    // 0x16f58c: 0x320f809  jalr        $t9
label_16f590:
    if (ctx->pc == 0x16F590u) {
        ctx->pc = 0x16F590u;
            // 0x16f590: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x16F594u;
        goto label_16f594;
    }
    ctx->pc = 0x16F58Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16F594u);
        ctx->pc = 0x16F590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F58Cu;
            // 0x16f590: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F594u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F594u; }
            if (ctx->pc != 0x16F594u) { return; }
        }
        }
    }
    ctx->pc = 0x16F594u;
label_16f594:
    // 0x16f594: 0x27b20094  addiu       $s2, $sp, 0x94
    ctx->pc = 0x16f594u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 148));
label_16f598:
    // 0x16f598: 0x3c023efb  lui         $v0, 0x3EFB
    ctx->pc = 0x16f598u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16123 << 16));
label_16f59c:
    // 0x16f59c: 0xc6410000  lwc1        $f1, 0x0($s2)
    ctx->pc = 0x16f59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16f5a0:
    // 0x16f5a0: 0x344253d2  ori         $v0, $v0, 0x53D2
    ctx->pc = 0x16f5a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21458);
label_16f5a4:
    // 0x16f5a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16f5a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16f5a8:
    // 0x16f5a8: 0x0  nop
    ctx->pc = 0x16f5a8u;
    // NOP
label_16f5ac:
    // 0x16f5ac: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x16f5acu;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_16f5b0:
    // 0x16f5b0: 0xc04c374  jal         func_130DD0
label_16f5b4:
    if (ctx->pc == 0x16F5B4u) {
        ctx->pc = 0x16F5B4u;
            // 0x16f5b4: 0xe64c0000  swc1        $f12, 0x0($s2) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->pc = 0x16F5B8u;
        goto label_16f5b8;
    }
    ctx->pc = 0x16F5B0u;
    SET_GPR_U32(ctx, 31, 0x16F5B8u);
    ctx->pc = 0x16F5B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F5B0u;
            // 0x16f5b4: 0xe64c0000  swc1        $f12, 0x0($s2) (Delay Slot)
        { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x130DD0u;
    if (runtime->hasFunction(0x130DD0u)) {
        auto targetFn = runtime->lookupFunction(0x130DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F5B8u; }
        if (ctx->pc != 0x16F5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgAngleLimit__Ff_0x130dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F5B8u; }
        if (ctx->pc != 0x16F5B8u) { return; }
    }
    ctx->pc = 0x16F5B8u;
label_16f5b8:
    // 0x16f5b8: 0xe6400000  swc1        $f0, 0x0($s2)
    ctx->pc = 0x16f5b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 0), bits); }
label_16f5bc:
    // 0x16f5bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x16f5bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_16f5c0:
    // 0x16f5c0: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x16f5c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_16f5c4:
    // 0x16f5c4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x16f5c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_16f5c8:
    // 0x16f5c8: 0x320f809  jalr        $t9
label_16f5cc:
    if (ctx->pc == 0x16F5CCu) {
        ctx->pc = 0x16F5CCu;
            // 0x16f5cc: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x16F5D0u;
        goto label_16f5d0;
    }
    ctx->pc = 0x16F5C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16F5D0u);
        ctx->pc = 0x16F5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F5C8u;
            // 0x16f5cc: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F5D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F5D0u; }
            if (ctx->pc != 0x16F5D0u) { return; }
        }
        }
    }
    ctx->pc = 0x16F5D0u;
label_16f5d0:
    // 0x16f5d0: 0x8e2306a8  lw          $v1, 0x6A8($s1)
    ctx->pc = 0x16f5d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1704)));
label_16f5d4:
    // 0x16f5d4: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x16f5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_16f5d8:
    // 0x16f5d8: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_16f5dc:
    if (ctx->pc == 0x16F5DCu) {
        ctx->pc = 0x16F5DCu;
            // 0x16f5dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x16F5E0u;
        goto label_16f5e0;
    }
    ctx->pc = 0x16F5D8u;
    {
        const bool branch_taken_0x16f5d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x16F5DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F5D8u;
            // 0x16f5dc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f5d8) {
            ctx->pc = 0x16F5FCu;
            goto label_16f5fc;
        }
    }
    ctx->pc = 0x16F5E0u;
label_16f5e0:
    // 0x16f5e0: 0x24060015  addiu       $a2, $zero, 0x15
    ctx->pc = 0x16f5e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_16f5e4:
    // 0x16f5e4: 0xae22059c  sw          $v0, 0x59C($s1)
    ctx->pc = 0x16f5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 1436), GPR_U32(ctx, 2));
label_16f5e8:
    // 0x16f5e8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x16f5e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_16f5ec:
    // 0x16f5ec: 0x8e2405a0  lw          $a0, 0x5A0($s1)
    ctx->pc = 0x16f5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1440)));
label_16f5f0:
    // 0x16f5f0: 0x8e250588  lw          $a1, 0x588($s1)
    ctx->pc = 0x16f5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1416)));
label_16f5f4:
    // 0x16f5f4: 0xc0631a8  jal         func_18C6A0
label_16f5f8:
    if (ctx->pc == 0x16F5F8u) {
        ctx->pc = 0x16F5F8u;
            // 0x16f5f8: 0x2408000c  addiu       $t0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x16F5FCu;
        goto label_16f5fc;
    }
    ctx->pc = 0x16F5F4u;
    SET_GPR_U32(ctx, 31, 0x16F5FCu);
    ctx->pc = 0x16F5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F5F4u;
            // 0x16f5f8: 0x2408000c  addiu       $t0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18C6A0u;
    if (runtime->hasFunction(0x18C6A0u)) {
        auto targetFn = runtime->lookupFunction(0x18C6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F5FCu; }
        if (ctx->pc != 0x16F5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SeLoopPlayStop__11CLoopSeMngrFUiiii_0x18c6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F5FCu; }
        if (ctx->pc != 0x16F5FCu) { return; }
    }
    ctx->pc = 0x16F5FCu;
label_16f5fc:
    // 0x16f5fc: 0x86220772  lh          $v0, 0x772($s1)
    ctx->pc = 0x16f5fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1906)));
label_16f600:
    // 0x16f600: 0x10400097  beqz        $v0, . + 4 + (0x97 << 2)
label_16f604:
    if (ctx->pc == 0x16F604u) {
        ctx->pc = 0x16F604u;
            // 0x16f604: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->pc = 0x16F608u;
        goto label_16f608;
    }
    ctx->pc = 0x16F600u;
    {
        const bool branch_taken_0x16f600 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F600u;
            // 0x16f604: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f600) {
            ctx->pc = 0x16F860u;
            goto label_16f860;
        }
    }
    ctx->pc = 0x16F608u;
label_16f608:
    // 0x16f608: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16f608u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16f60c:
    // 0x16f60c: 0x0  nop
    ctx->pc = 0x16f60cu;
    // NOP
label_16f610:
    // 0x16f610: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x16f610u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16f614:
    // 0x16f614: 0x0  nop
    ctx->pc = 0x16f614u;
    // NOP
label_16f618:
    // 0x16f618: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_16f61c:
    if (ctx->pc == 0x16F61Cu) {
        ctx->pc = 0x16F61Cu;
            // 0x16f61c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x16F620u;
        goto label_16f620;
    }
    ctx->pc = 0x16F618u;
    {
        const bool branch_taken_0x16f618 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16F61Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F618u;
            // 0x16f61c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f618) {
            ctx->pc = 0x16F630u;
            goto label_16f630;
        }
    }
    ctx->pc = 0x16F620u;
label_16f620:
    // 0x16f620: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x16f620u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16f624:
    // 0x16f624: 0x0  nop
    ctx->pc = 0x16f624u;
    // NOP
label_16f628:
    // 0x16f628: 0x4501003a  bc1t        . + 4 + (0x3A << 2)
label_16f62c:
    if (ctx->pc == 0x16F62Cu) {
        ctx->pc = 0x16F630u;
        goto label_16f630;
    }
    ctx->pc = 0x16F628u;
    {
        const bool branch_taken_0x16f628 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16f628) {
            ctx->pc = 0x16F714u;
            goto label_16f714;
        }
    }
    ctx->pc = 0x16F630u;
label_16f630:
    // 0x16f630: 0xc047c76  jal         func_11F1D8
label_16f634:
    if (ctx->pc == 0x16F634u) {
        ctx->pc = 0x16F634u;
            // 0x16f634: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x16F638u;
        goto label_16f638;
    }
    ctx->pc = 0x16F630u;
    SET_GPR_U32(ctx, 31, 0x16F638u);
    ctx->pc = 0x16F634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F630u;
            // 0x16f634: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F638u; }
        if (ctx->pc != 0x16F638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F638u; }
        if (ctx->pc != 0x16F638u) { return; }
    }
    ctx->pc = 0x16F638u;
label_16f638:
    // 0x16f638: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x16f638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_16f63c:
    // 0x16f63c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x16f63cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_16f640:
    // 0x16f640: 0xc072408  jal         func_1C9020
label_16f644:
    if (ctx->pc == 0x16F644u) {
        ctx->pc = 0x16F644u;
            // 0x16f644: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x16F648u;
        goto label_16f648;
    }
    ctx->pc = 0x16F640u;
    SET_GPR_U32(ctx, 31, 0x16F648u);
    ctx->pc = 0x16F644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F640u;
            // 0x16f644: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9020u;
    if (runtime->hasFunction(0x1C9020u)) {
        auto targetFn = runtime->lookupFunction(0x1C9020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F648u; }
        if (ctx->pc != 0x16F648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        unitRotation__FP8mgCFrameff_0x1c9020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F648u; }
        if (ctx->pc != 0x16F648u) { return; }
    }
    ctx->pc = 0x16F648u;
label_16f648:
    // 0x16f648: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x16f648u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16f64c:
    // 0x16f64c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16f64cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16f650:
    // 0x16f650: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x16f650u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_16f654:
    // 0x16f654: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16f654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16f658:
    // 0x16f658: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x16f658u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_16f65c:
    // 0x16f65c: 0x320f809  jalr        $t9
label_16f660:
    if (ctx->pc == 0x16F660u) {
        ctx->pc = 0x16F660u;
            // 0x16f660: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x16F664u;
        goto label_16f664;
    }
    ctx->pc = 0x16F65Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16F664u);
        ctx->pc = 0x16F660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F65Cu;
            // 0x16f660: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F664u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F664u; }
            if (ctx->pc != 0x16F664u) { return; }
        }
        }
    }
    ctx->pc = 0x16F664u;
label_16f664:
    // 0x16f664: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x16f664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_16f668:
    // 0x16f668: 0xafa000a4  sw          $zero, 0xA4($sp)
    ctx->pc = 0x16f668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 0));
label_16f66c:
    // 0x16f66c: 0xe7b500a0  swc1        $f21, 0xA0($sp)
    ctx->pc = 0x16f66cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
label_16f670:
    // 0x16f670: 0xc04bff4  jal         func_12FFD0
label_16f674:
    if (ctx->pc == 0x16F674u) {
        ctx->pc = 0x16F674u;
            // 0x16f674: 0xe7b600a8  swc1        $f22, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->pc = 0x16F678u;
        goto label_16f678;
    }
    ctx->pc = 0x16F670u;
    SET_GPR_U32(ctx, 31, 0x16F678u);
    ctx->pc = 0x16F674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F670u;
            // 0x16f674: 0xe7b600a8  swc1        $f22, 0xA8($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F678u; }
        if (ctx->pc != 0x16F678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F678u; }
        if (ctx->pc != 0x16F678u) { return; }
    }
    ctx->pc = 0x16F678u;
label_16f678:
    // 0x16f678: 0xc62106ac  lwc1        $f1, 0x6AC($s1)
    ctx->pc = 0x16f678u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16f67c:
    // 0x16f67c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16f67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16f680:
    // 0x16f680: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16f680u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_16f684:
    // 0x16f684: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x16f684u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_16f688:
    // 0x16f688: 0x0  nop
    ctx->pc = 0x16f688u;
    // NOP
label_16f68c:
    // 0x16f68c: 0x0  nop
    ctx->pc = 0x16f68cu;
    // NOP
label_16f690:
    // 0x16f690: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x16f690u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16f694:
    // 0x16f694: 0x0  nop
    ctx->pc = 0x16f694u;
    // NOP
label_16f698:
    // 0x16f698: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_16f69c:
    if (ctx->pc == 0x16F69Cu) {
        ctx->pc = 0x16F69Cu;
            // 0x16f69c: 0x3c023f4c  lui         $v0, 0x3F4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
        ctx->pc = 0x16F6A0u;
        goto label_16f6a0;
    }
    ctx->pc = 0x16F698u;
    {
        const bool branch_taken_0x16f698 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16F69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F698u;
            // 0x16f69c: 0x3c023f4c  lui         $v0, 0x3F4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f698) {
            ctx->pc = 0x16F6A8u;
            goto label_16f6a8;
        }
    }
    ctx->pc = 0x16F6A0u;
label_16f6a0:
    // 0x16f6a0: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x16f6a0u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_16f6a4:
    // 0x16f6a4: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x16f6a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_16f6a8:
    // 0x16f6a8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x16f6a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_16f6ac:
    // 0x16f6ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16f6acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16f6b0:
    // 0x16f6b0: 0x0  nop
    ctx->pc = 0x16f6b0u;
    // NOP
label_16f6b4:
    // 0x16f6b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16f6b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16f6b8:
    // 0x16f6b8: 0x0  nop
    ctx->pc = 0x16f6b8u;
    // NOP
label_16f6bc:
    // 0x16f6bc: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_16f6c0:
    if (ctx->pc == 0x16F6C0u) {
        ctx->pc = 0x16F6C4u;
        goto label_16f6c4;
    }
    ctx->pc = 0x16F6BCu;
    {
        const bool branch_taken_0x16f6bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16f6bc) {
            ctx->pc = 0x16F6ECu;
            goto label_16f6ec;
        }
    }
    ctx->pc = 0x16F6C4u;
label_16f6c4:
    // 0x16f6c4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x16f6c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16f6c8:
    // 0x16f6c8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16f6c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16f6cc:
    // 0x16f6cc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x16f6ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16f6d0:
    // 0x16f6d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16f6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16f6d4:
    // 0x16f6d4: 0x24a53680  addiu       $a1, $a1, 0x3680
    ctx->pc = 0x16f6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13952));
label_16f6d8:
    // 0x16f6d8: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x16f6d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_16f6dc:
    // 0x16f6dc: 0x320f809  jalr        $t9
label_16f6e0:
    if (ctx->pc == 0x16F6E0u) {
        ctx->pc = 0x16F6E0u;
            // 0x16f6e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F6E4u;
        goto label_16f6e4;
    }
    ctx->pc = 0x16F6DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16F6E4u);
        ctx->pc = 0x16F6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F6DCu;
            // 0x16f6e0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F6E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F6E4u; }
            if (ctx->pc != 0x16F6E4u) { return; }
        }
        }
    }
    ctx->pc = 0x16F6E4u;
label_16f6e4:
    // 0x16f6e4: 0x10000014  b           . + 4 + (0x14 << 2)
label_16f6e8:
    if (ctx->pc == 0x16F6E8u) {
        ctx->pc = 0x16F6E8u;
            // 0x16f6e8: 0x86250770  lh          $a1, 0x770($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1904)));
        ctx->pc = 0x16F6ECu;
        goto label_16f6ec;
    }
    ctx->pc = 0x16F6E4u;
    {
        const bool branch_taken_0x16f6e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F6E4u;
            // 0x16f6e8: 0x86250770  lh          $a1, 0x770($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1904)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f6e4) {
            ctx->pc = 0x16F738u;
            goto label_16f738;
        }
    }
    ctx->pc = 0x16F6ECu;
label_16f6ec:
    // 0x16f6ec: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x16f6ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16f6f0:
    // 0x16f6f0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16f6f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16f6f4:
    // 0x16f6f4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x16f6f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16f6f8:
    // 0x16f6f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16f6f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16f6fc:
    // 0x16f6fc: 0x24a53690  addiu       $a1, $a1, 0x3690
    ctx->pc = 0x16f6fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13968));
label_16f700:
    // 0x16f700: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x16f700u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_16f704:
    // 0x16f704: 0x320f809  jalr        $t9
label_16f708:
    if (ctx->pc == 0x16F708u) {
        ctx->pc = 0x16F708u;
            // 0x16f708: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F70Cu;
        goto label_16f70c;
    }
    ctx->pc = 0x16F704u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16F70Cu);
        ctx->pc = 0x16F708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F704u;
            // 0x16f708: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F70Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F70Cu; }
            if (ctx->pc != 0x16F70Cu) { return; }
        }
        }
    }
    ctx->pc = 0x16F70Cu;
label_16f70c:
    // 0x16f70c: 0x10000009  b           . + 4 + (0x9 << 2)
label_16f710:
    if (ctx->pc == 0x16F710u) {
        ctx->pc = 0x16F714u;
        goto label_16f714;
    }
    ctx->pc = 0x16F70Cu;
    {
        const bool branch_taken_0x16f70c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f70c) {
            ctx->pc = 0x16F734u;
            goto label_16f734;
        }
    }
    ctx->pc = 0x16F714u;
label_16f714:
    // 0x16f714: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x16f714u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16f718:
    // 0x16f718: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16f718u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16f71c:
    // 0x16f71c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x16f71cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16f720:
    // 0x16f720: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16f720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16f724:
    // 0x16f724: 0x24a536a0  addiu       $a1, $a1, 0x36A0
    ctx->pc = 0x16f724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13984));
label_16f728:
    // 0x16f728: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x16f728u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_16f72c:
    // 0x16f72c: 0x320f809  jalr        $t9
label_16f730:
    if (ctx->pc == 0x16F730u) {
        ctx->pc = 0x16F730u;
            // 0x16f730: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F734u;
        goto label_16f734;
    }
    ctx->pc = 0x16F72Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16F734u);
        ctx->pc = 0x16F730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F72Cu;
            // 0x16f730: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F734u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F734u; }
            if (ctx->pc != 0x16F734u) { return; }
        }
        }
    }
    ctx->pc = 0x16F734u;
label_16f734:
    // 0x16f734: 0x86250770  lh          $a1, 0x770($s1)
    ctx->pc = 0x16f734u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 1904)));
label_16f738:
    // 0x16f738: 0xc0a0ed8  jal         func_283B60
label_16f73c:
    if (ctx->pc == 0x16F73Cu) {
        ctx->pc = 0x16F73Cu;
            // 0x16f73c: 0x8f849da4  lw          $a0, -0x625C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942116)));
        ctx->pc = 0x16F740u;
        goto label_16f740;
    }
    ctx->pc = 0x16F738u;
    SET_GPR_U32(ctx, 31, 0x16F740u);
    ctx->pc = 0x16F73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F738u;
            // 0x16f73c: 0x8f849da4  lw          $a0, -0x625C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942116)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F740u; }
        if (ctx->pc != 0x16F740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F740u; }
        if (ctx->pc != 0x16F740u) { return; }
    }
    ctx->pc = 0x16F740u;
label_16f740:
    // 0x16f740: 0x104000a6  beqz        $v0, . + 4 + (0xA6 << 2)
label_16f744:
    if (ctx->pc == 0x16F744u) {
        ctx->pc = 0x16F744u;
            // 0x16f744: 0x26240080  addiu       $a0, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->pc = 0x16F748u;
        goto label_16f748;
    }
    ctx->pc = 0x16F740u;
    {
        const bool branch_taken_0x16f740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x16F744u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F740u;
            // 0x16f744: 0x26240080  addiu       $a0, $s1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f740) {
            ctx->pc = 0x16F9DCu;
            goto label_16f9dc;
        }
    }
    ctx->pc = 0x16F748u;
label_16f748:
    // 0x16f748: 0x8444068a  lh          $a0, 0x68A($v0)
    ctx->pc = 0x16f748u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 1674)));
label_16f74c:
    // 0x16f74c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16f74cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_16f750:
    // 0x16f750: 0x148300a1  bne         $a0, $v1, . + 4 + (0xA1 << 2)
label_16f754:
    if (ctx->pc == 0x16F754u) {
        ctx->pc = 0x16F758u;
        goto label_16f758;
    }
    ctx->pc = 0x16F750u;
    {
        const bool branch_taken_0x16f750 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x16f750) {
            ctx->pc = 0x16F9D8u;
            goto label_16f9d8;
        }
    }
    ctx->pc = 0x16F758u;
label_16f758:
    // 0x16f758: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x16f758u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_16f75c:
    // 0x16f75c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x16f75cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16f760:
    // 0x16f760: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x16f760u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_16f764:
    // 0x16f764: 0x320f809  jalr        $t9
label_16f768:
    if (ctx->pc == 0x16F768u) {
        ctx->pc = 0x16F768u;
            // 0x16f768: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x16F76Cu;
        goto label_16f76c;
    }
    ctx->pc = 0x16F764u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16F76Cu);
        ctx->pc = 0x16F768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F764u;
            // 0x16f768: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F76Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F76Cu; }
            if (ctx->pc != 0x16F76Cu) { return; }
        }
        }
    }
    ctx->pc = 0x16F76Cu;
label_16f76c:
    // 0x16f76c: 0xc7a300b0  lwc1        $f3, 0xB0($sp)
    ctx->pc = 0x16f76cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_16f770:
    // 0x16f770: 0xc7a20070  lwc1        $f2, 0x70($sp)
    ctx->pc = 0x16f770u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_16f774:
    // 0x16f774: 0xc7a100b8  lwc1        $f1, 0xB8($sp)
    ctx->pc = 0x16f774u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16f778:
    // 0x16f778: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x16f778u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_16f77c:
    // 0x16f77c: 0x46021b01  sub.s       $f12, $f3, $f2
    ctx->pc = 0x16f77cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[3], ctx->f[2]);
label_16f780:
    // 0x16f780: 0xc047c76  jal         func_11F1D8
label_16f784:
    if (ctx->pc == 0x16F784u) {
        ctx->pc = 0x16F784u;
            // 0x16f784: 0x46000b41  sub.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x16F788u;
        goto label_16f788;
    }
    ctx->pc = 0x16F780u;
    SET_GPR_U32(ctx, 31, 0x16F788u);
    ctx->pc = 0x16F784u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F780u;
            // 0x16f784: 0x46000b41  sub.s       $f13, $f1, $f0 (Delay Slot)
        ctx->f[13] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F788u; }
        if (ctx->pc != 0x16F788u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F788u; }
        if (ctx->pc != 0x16F788u) { return; }
    }
    ctx->pc = 0x16F788u;
label_16f788:
    // 0x16f788: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x16f788u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16f78c:
    // 0x16f78c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x16f78cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
label_16f790:
    // 0x16f790: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16f790u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16f794:
    // 0x16f794: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x16f794u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_16f798:
    // 0x16f798: 0x320f809  jalr        $t9
label_16f79c:
    if (ctx->pc == 0x16F79Cu) {
        ctx->pc = 0x16F79Cu;
            // 0x16f79c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x16F7A0u;
        goto label_16f7a0;
    }
    ctx->pc = 0x16F798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16F7A0u);
        ctx->pc = 0x16F79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F798u;
            // 0x16f79c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F7A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F7A0u; }
            if (ctx->pc != 0x16F7A0u) { return; }
        }
        }
    }
    ctx->pc = 0x16F7A0u;
label_16f7a0:
    // 0x16f7a0: 0xc7a100c4  lwc1        $f1, 0xC4($sp)
    ctx->pc = 0x16f7a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16f7a4:
    // 0x16f7a4: 0x3c02c049  lui         $v0, 0xC049
    ctx->pc = 0x16f7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49225 << 16));
label_16f7a8:
    // 0x16f7a8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16f7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16f7ac:
    // 0x16f7ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16f7acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16f7b0:
    // 0x16f7b0: 0x0  nop
    ctx->pc = 0x16f7b0u;
    // NOP
label_16f7b4:
    // 0x16f7b4: 0x4601a501  sub.s       $f20, $f20, $f1
    ctx->pc = 0x16f7b4u;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[1]);
label_16f7b8:
    // 0x16f7b8: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x16f7b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16f7bc:
    // 0x16f7bc: 0x0  nop
    ctx->pc = 0x16f7bcu;
    // NOP
label_16f7c0:
    // 0x16f7c0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_16f7c4:
    if (ctx->pc == 0x16F7C4u) {
        ctx->pc = 0x16F7C4u;
            // 0x16f7c4: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->pc = 0x16F7C8u;
        goto label_16f7c8;
    }
    ctx->pc = 0x16F7C0u;
    {
        const bool branch_taken_0x16f7c0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16F7C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F7C0u;
            // 0x16f7c4: 0x3c024049  lui         $v0, 0x4049 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f7c0) {
            ctx->pc = 0x16F7E0u;
            goto label_16f7e0;
        }
    }
    ctx->pc = 0x16F7C8u;
label_16f7c8:
    // 0x16f7c8: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x16f7c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_16f7cc:
    // 0x16f7cc: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16f7ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16f7d0:
    // 0x16f7d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16f7d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16f7d4:
    // 0x16f7d4: 0x0  nop
    ctx->pc = 0x16f7d4u;
    // NOP
label_16f7d8:
    // 0x16f7d8: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x16f7d8u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_16f7dc:
    // 0x16f7dc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x16f7dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_16f7e0:
    // 0x16f7e0: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16f7e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16f7e4:
    // 0x16f7e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16f7e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16f7e8:
    // 0x16f7e8: 0x0  nop
    ctx->pc = 0x16f7e8u;
    // NOP
label_16f7ec:
    // 0x16f7ec: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x16f7ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16f7f0:
    // 0x16f7f0: 0x0  nop
    ctx->pc = 0x16f7f0u;
    // NOP
label_16f7f4:
    // 0x16f7f4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_16f7f8:
    if (ctx->pc == 0x16F7F8u) {
        ctx->pc = 0x16F7F8u;
            // 0x16f7f8: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->pc = 0x16F7FCu;
        goto label_16f7fc;
    }
    ctx->pc = 0x16F7F4u;
    {
        const bool branch_taken_0x16f7f4 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16F7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F7F4u;
            // 0x16f7f8: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f7f4) {
            ctx->pc = 0x16F810u;
            goto label_16f810;
        }
    }
    ctx->pc = 0x16F7FCu;
label_16f7fc:
    // 0x16f7fc: 0x3c0240c9  lui         $v0, 0x40C9
    ctx->pc = 0x16f7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16585 << 16));
label_16f800:
    // 0x16f800: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x16f800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_16f804:
    // 0x16f804: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16f804u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16f808:
    // 0x16f808: 0x0  nop
    ctx->pc = 0x16f808u;
    // NOP
label_16f80c:
    // 0x16f80c: 0x4600a501  sub.s       $f20, $f20, $f0
    ctx->pc = 0x16f80cu;
    ctx->f[20] = FPU_SUB_S(ctx->f[20], ctx->f[0]);
label_16f810:
    // 0x16f810: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16f810u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16f814:
    // 0x16f814: 0xc05af24  jal         func_16BC90
label_16f818:
    if (ctx->pc == 0x16F818u) {
        ctx->pc = 0x16F818u;
            // 0x16f818: 0x24a53678  addiu       $a1, $a1, 0x3678 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13944));
        ctx->pc = 0x16F81Cu;
        goto label_16f81c;
    }
    ctx->pc = 0x16F814u;
    SET_GPR_U32(ctx, 31, 0x16F81Cu);
    ctx->pc = 0x16F818u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F814u;
            // 0x16f818: 0x24a53678  addiu       $a1, $a1, 0x3678 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BC90u;
    if (runtime->hasFunction(0x16BC90u)) {
        auto targetFn = runtime->lookupFunction(0x16BC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F81Cu; }
        if (ctx->pc != 0x16F81Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchChara__12CActionCharaFPc_0x16bc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F81Cu; }
        if (ctx->pc != 0x16F81Cu) { return; }
    }
    ctx->pc = 0x16F81Cu;
label_16f81c:
    // 0x16f81c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x16f81cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16f820:
    // 0x16f820: 0x1200006d  beqz        $s0, . + 4 + (0x6D << 2)
label_16f824:
    if (ctx->pc == 0x16F824u) {
        ctx->pc = 0x16F828u;
        goto label_16f828;
    }
    ctx->pc = 0x16F820u;
    {
        const bool branch_taken_0x16f820 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f820) {
            ctx->pc = 0x16F9D8u;
            goto label_16f9d8;
        }
    }
    ctx->pc = 0x16F828u;
label_16f828:
    // 0x16f828: 0x8e040070  lw          $a0, 0x70($s0)
    ctx->pc = 0x16f828u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 112)));
label_16f82c:
    // 0x16f82c: 0x3c024040  lui         $v0, 0x4040
    ctx->pc = 0x16f82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16448 << 16));
label_16f830:
    // 0x16f830: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x16f830u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_16f834:
    // 0x16f834: 0xc072408  jal         func_1C9020
label_16f838:
    if (ctx->pc == 0x16F838u) {
        ctx->pc = 0x16F838u;
            // 0x16f838: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x16F83Cu;
        goto label_16f83c;
    }
    ctx->pc = 0x16F834u;
    SET_GPR_U32(ctx, 31, 0x16F83Cu);
    ctx->pc = 0x16F838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F834u;
            // 0x16f838: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9020u;
    if (runtime->hasFunction(0x1C9020u)) {
        auto targetFn = runtime->lookupFunction(0x1C9020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F83Cu; }
        if (ctx->pc != 0x16F83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        unitRotation__FP8mgCFrameff_0x1c9020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F83Cu; }
        if (ctx->pc != 0x16F83Cu) { return; }
    }
    ctx->pc = 0x16F83Cu;
label_16f83c:
    // 0x16f83c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x16f83cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_16f840:
    // 0x16f840: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16f840u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16f844:
    // 0x16f844: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x16f844u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_16f848:
    // 0x16f848: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16f848u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16f84c:
    // 0x16f84c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x16f84cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_16f850:
    // 0x16f850: 0x320f809  jalr        $t9
label_16f854:
    if (ctx->pc == 0x16F854u) {
        ctx->pc = 0x16F854u;
            // 0x16f854: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x16F858u;
        goto label_16f858;
    }
    ctx->pc = 0x16F850u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16F858u);
        ctx->pc = 0x16F854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F850u;
            // 0x16f854: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F858u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F858u; }
            if (ctx->pc != 0x16F858u) { return; }
        }
        }
    }
    ctx->pc = 0x16F858u;
label_16f858:
    // 0x16f858: 0x1000005f  b           . + 4 + (0x5F << 2)
label_16f85c:
    if (ctx->pc == 0x16F85Cu) {
        ctx->pc = 0x16F860u;
        goto label_16f860;
    }
    ctx->pc = 0x16F858u;
    {
        const bool branch_taken_0x16f858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f858) {
            ctx->pc = 0x16F9D8u;
            goto label_16f9d8;
        }
    }
    ctx->pc = 0x16F860u;
label_16f860:
    // 0x16f860: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16f860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16f864:
    // 0x16f864: 0xc05af24  jal         func_16BC90
label_16f868:
    if (ctx->pc == 0x16F868u) {
        ctx->pc = 0x16F868u;
            // 0x16f868: 0x24a53678  addiu       $a1, $a1, 0x3678 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13944));
        ctx->pc = 0x16F86Cu;
        goto label_16f86c;
    }
    ctx->pc = 0x16F864u;
    SET_GPR_U32(ctx, 31, 0x16F86Cu);
    ctx->pc = 0x16F868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F864u;
            // 0x16f868: 0x24a53678  addiu       $a1, $a1, 0x3678 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BC90u;
    if (runtime->hasFunction(0x16BC90u)) {
        auto targetFn = runtime->lookupFunction(0x16BC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F86Cu; }
        if (ctx->pc != 0x16F86Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchChara__12CActionCharaFPc_0x16bc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F86Cu; }
        if (ctx->pc != 0x16F86Cu) { return; }
    }
    ctx->pc = 0x16F86Cu;
label_16f86c:
    // 0x16f86c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x16f86cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_16f870:
    // 0x16f870: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_16f874:
    if (ctx->pc == 0x16F874u) {
        ctx->pc = 0x16F878u;
        goto label_16f878;
    }
    ctx->pc = 0x16F870u;
    {
        const bool branch_taken_0x16f870 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f870) {
            ctx->pc = 0x16F8A8u;
            goto label_16f8a8;
        }
    }
    ctx->pc = 0x16F878u;
label_16f878:
    // 0x16f878: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x16f878u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
label_16f87c:
    // 0x16f87c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16f87cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16f880:
    // 0x16f880: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x16f880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_16f884:
    // 0x16f884: 0xc072408  jal         func_1C9020
label_16f888:
    if (ctx->pc == 0x16F888u) {
        ctx->pc = 0x16F888u;
            // 0x16f888: 0x8e440070  lw          $a0, 0x70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
        ctx->pc = 0x16F88Cu;
        goto label_16f88c;
    }
    ctx->pc = 0x16F884u;
    SET_GPR_U32(ctx, 31, 0x16F88Cu);
    ctx->pc = 0x16F888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F884u;
            // 0x16f888: 0x8e440070  lw          $a0, 0x70($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 112)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9020u;
    if (runtime->hasFunction(0x1C9020u)) {
        auto targetFn = runtime->lookupFunction(0x1C9020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F88Cu; }
        if (ctx->pc != 0x16F88Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        unitRotation__FP8mgCFrameff_0x1c9020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F88Cu; }
        if (ctx->pc != 0x16F88Cu) { return; }
    }
    ctx->pc = 0x16F88Cu;
label_16f88c:
    // 0x16f88c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x16f88cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_16f890:
    // 0x16f890: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x16f890u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_16f894:
    // 0x16f894: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x16f894u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_16f898:
    // 0x16f898: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16f898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_16f89c:
    // 0x16f89c: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x16f89cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_16f8a0:
    // 0x16f8a0: 0x320f809  jalr        $t9
label_16f8a4:
    if (ctx->pc == 0x16F8A4u) {
        ctx->pc = 0x16F8A4u;
            // 0x16f8a4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x16F8A8u;
        goto label_16f8a8;
    }
    ctx->pc = 0x16F8A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16F8A8u);
        ctx->pc = 0x16F8A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F8A0u;
            // 0x16f8a4: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F8A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F8A8u; }
            if (ctx->pc != 0x16F8A8u) { return; }
        }
        }
    }
    ctx->pc = 0x16F8A8u;
label_16f8a8:
    // 0x16f8a8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x16f8a8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16f8ac:
    // 0x16f8ac: 0x0  nop
    ctx->pc = 0x16f8acu;
    // NOP
label_16f8b0:
    // 0x16f8b0: 0x46150032  c.eq.s      $f0, $f21
    ctx->pc = 0x16f8b0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[21])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16f8b4:
    // 0x16f8b4: 0x0  nop
    ctx->pc = 0x16f8b4u;
    // NOP
label_16f8b8:
    // 0x16f8b8: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_16f8bc:
    if (ctx->pc == 0x16F8BCu) {
        ctx->pc = 0x16F8BCu;
            // 0x16f8bc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x16F8C0u;
        goto label_16f8c0;
    }
    ctx->pc = 0x16F8B8u;
    {
        const bool branch_taken_0x16f8b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x16F8BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F8B8u;
            // 0x16f8bc: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f8b8) {
            ctx->pc = 0x16F8D0u;
            goto label_16f8d0;
        }
    }
    ctx->pc = 0x16F8C0u;
label_16f8c0:
    // 0x16f8c0: 0x46160032  c.eq.s      $f0, $f22
    ctx->pc = 0x16f8c0u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[22])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16f8c4:
    // 0x16f8c4: 0x0  nop
    ctx->pc = 0x16f8c4u;
    // NOP
label_16f8c8:
    // 0x16f8c8: 0x4501003b  bc1t        . + 4 + (0x3B << 2)
label_16f8cc:
    if (ctx->pc == 0x16F8CCu) {
        ctx->pc = 0x16F8D0u;
        goto label_16f8d0;
    }
    ctx->pc = 0x16F8C8u;
    {
        const bool branch_taken_0x16f8c8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16f8c8) {
            ctx->pc = 0x16F9B8u;
            goto label_16f9b8;
        }
    }
    ctx->pc = 0x16F8D0u;
label_16f8d0:
    // 0x16f8d0: 0xc047c76  jal         func_11F1D8
label_16f8d4:
    if (ctx->pc == 0x16F8D4u) {
        ctx->pc = 0x16F8D4u;
            // 0x16f8d4: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x16F8D8u;
        goto label_16f8d8;
    }
    ctx->pc = 0x16F8D0u;
    SET_GPR_U32(ctx, 31, 0x16F8D8u);
    ctx->pc = 0x16F8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F8D0u;
            // 0x16f8d4: 0x4600b346  mov.s       $f13, $f22 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11F1D8u;
    if (runtime->hasFunction(0x11F1D8u)) {
        auto targetFn = runtime->lookupFunction(0x11F1D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F8D8u; }
        if (ctx->pc != 0x16F8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        atan2f_0x11f1d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F8D8u; }
        if (ctx->pc != 0x16F8D8u) { return; }
    }
    ctx->pc = 0x16F8D8u;
label_16f8d8:
    // 0x16f8d8: 0x8e240070  lw          $a0, 0x70($s1)
    ctx->pc = 0x16f8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 112)));
label_16f8dc:
    // 0x16f8dc: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x16f8dcu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_16f8e0:
    // 0x16f8e0: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x16f8e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_16f8e4:
    // 0x16f8e4: 0xc072408  jal         func_1C9020
label_16f8e8:
    if (ctx->pc == 0x16F8E8u) {
        ctx->pc = 0x16F8E8u;
            // 0x16f8e8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->pc = 0x16F8ECu;
        goto label_16f8ec;
    }
    ctx->pc = 0x16F8E4u;
    SET_GPR_U32(ctx, 31, 0x16F8ECu);
    ctx->pc = 0x16F8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F8E4u;
            // 0x16f8e8: 0x46000306  mov.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9020u;
    if (runtime->hasFunction(0x1C9020u)) {
        auto targetFn = runtime->lookupFunction(0x1C9020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F8ECu; }
        if (ctx->pc != 0x16F8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        unitRotation__FP8mgCFrameff_0x1c9020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F8ECu; }
        if (ctx->pc != 0x16F8ECu) { return; }
    }
    ctx->pc = 0x16F8ECu;
label_16f8ec:
    // 0x16f8ec: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x16f8ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16f8f0:
    // 0x16f8f0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x16f8f0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_16f8f4:
    // 0x16f8f4: 0x46000346  mov.s       $f13, $f0
    ctx->pc = 0x16f8f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[0]);
label_16f8f8:
    // 0x16f8f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16f8f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16f8fc:
    // 0x16f8fc: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x16f8fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_16f900:
    // 0x16f900: 0x320f809  jalr        $t9
label_16f904:
    if (ctx->pc == 0x16F904u) {
        ctx->pc = 0x16F904u;
            // 0x16f904: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x16F908u;
        goto label_16f908;
    }
    ctx->pc = 0x16F900u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16F908u);
        ctx->pc = 0x16F904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F900u;
            // 0x16f904: 0x4600a386  mov.s       $f14, $f20 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F908u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F908u; }
            if (ctx->pc != 0x16F908u) { return; }
        }
        }
    }
    ctx->pc = 0x16F908u;
label_16f908:
    // 0x16f908: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x16f908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_16f90c:
    // 0x16f90c: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x16f90cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
label_16f910:
    // 0x16f910: 0xe7b500d0  swc1        $f21, 0xD0($sp)
    ctx->pc = 0x16f910u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_16f914:
    // 0x16f914: 0xc04bff4  jal         func_12FFD0
label_16f918:
    if (ctx->pc == 0x16F918u) {
        ctx->pc = 0x16F918u;
            // 0x16f918: 0xe7b600d8  swc1        $f22, 0xD8($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
        ctx->pc = 0x16F91Cu;
        goto label_16f91c;
    }
    ctx->pc = 0x16F914u;
    SET_GPR_U32(ctx, 31, 0x16F91Cu);
    ctx->pc = 0x16F918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F914u;
            // 0x16f918: 0xe7b600d8  swc1        $f22, 0xD8($sp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x12FFD0u;
    if (runtime->hasFunction(0x12FFD0u)) {
        auto targetFn = runtime->lookupFunction(0x12FFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F91Cu; }
        if (ctx->pc != 0x16F91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPf_0x12ffd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F91Cu; }
        if (ctx->pc != 0x16F91Cu) { return; }
    }
    ctx->pc = 0x16F91Cu;
label_16f91c:
    // 0x16f91c: 0xc62106ac  lwc1        $f1, 0x6AC($s1)
    ctx->pc = 0x16f91cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 1708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_16f920:
    // 0x16f920: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x16f920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_16f924:
    // 0x16f924: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x16f924u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_16f928:
    // 0x16f928: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x16f928u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_16f92c:
    // 0x16f92c: 0x0  nop
    ctx->pc = 0x16f92cu;
    // NOP
label_16f930:
    // 0x16f930: 0x0  nop
    ctx->pc = 0x16f930u;
    // NOP
label_16f934:
    // 0x16f934: 0x46020836  c.le.s      $f1, $f2
    ctx->pc = 0x16f934u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16f938:
    // 0x16f938: 0x0  nop
    ctx->pc = 0x16f938u;
    // NOP
label_16f93c:
    // 0x16f93c: 0x45010003  bc1t        . + 4 + (0x3 << 2)
label_16f940:
    if (ctx->pc == 0x16F940u) {
        ctx->pc = 0x16F940u;
            // 0x16f940: 0x3c023f4c  lui         $v0, 0x3F4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
        ctx->pc = 0x16F944u;
        goto label_16f944;
    }
    ctx->pc = 0x16F93Cu;
    {
        const bool branch_taken_0x16f93c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x16F940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F93Cu;
            // 0x16f940: 0x3c023f4c  lui         $v0, 0x3F4C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16f93c) {
            ctx->pc = 0x16F94Cu;
            goto label_16f94c;
        }
    }
    ctx->pc = 0x16F944u;
label_16f944:
    // 0x16f944: 0x46001046  mov.s       $f1, $f2
    ctx->pc = 0x16f944u;
    ctx->f[1] = FPU_MOV_S(ctx->f[2]);
label_16f948:
    // 0x16f948: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x16f948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_16f94c:
    // 0x16f94c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x16f94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_16f950:
    // 0x16f950: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x16f950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_16f954:
    // 0x16f954: 0x0  nop
    ctx->pc = 0x16f954u;
    // NOP
label_16f958:
    // 0x16f958: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x16f958u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_16f95c:
    // 0x16f95c: 0x0  nop
    ctx->pc = 0x16f95cu;
    // NOP
label_16f960:
    // 0x16f960: 0x4501000b  bc1t        . + 4 + (0xB << 2)
label_16f964:
    if (ctx->pc == 0x16F964u) {
        ctx->pc = 0x16F968u;
        goto label_16f968;
    }
    ctx->pc = 0x16F960u;
    {
        const bool branch_taken_0x16f960 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x16f960) {
            ctx->pc = 0x16F990u;
            goto label_16f990;
        }
    }
    ctx->pc = 0x16F968u;
label_16f968:
    // 0x16f968: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x16f968u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16f96c:
    // 0x16f96c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16f96cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16f970:
    // 0x16f970: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x16f970u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16f974:
    // 0x16f974: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16f974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16f978:
    // 0x16f978: 0x24a53680  addiu       $a1, $a1, 0x3680
    ctx->pc = 0x16f978u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13952));
label_16f97c:
    // 0x16f97c: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x16f97cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_16f980:
    // 0x16f980: 0x320f809  jalr        $t9
label_16f984:
    if (ctx->pc == 0x16F984u) {
        ctx->pc = 0x16F984u;
            // 0x16f984: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F988u;
        goto label_16f988;
    }
    ctx->pc = 0x16F980u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16F988u);
        ctx->pc = 0x16F984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F980u;
            // 0x16f984: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F988u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F988u; }
            if (ctx->pc != 0x16F988u) { return; }
        }
        }
    }
    ctx->pc = 0x16F988u;
label_16f988:
    // 0x16f988: 0x10000013  b           . + 4 + (0x13 << 2)
label_16f98c:
    if (ctx->pc == 0x16F98Cu) {
        ctx->pc = 0x16F990u;
        goto label_16f990;
    }
    ctx->pc = 0x16F988u;
    {
        const bool branch_taken_0x16f988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f988) {
            ctx->pc = 0x16F9D8u;
            goto label_16f9d8;
        }
    }
    ctx->pc = 0x16F990u;
label_16f990:
    // 0x16f990: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x16f990u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16f994:
    // 0x16f994: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16f994u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16f998:
    // 0x16f998: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x16f998u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16f99c:
    // 0x16f99c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16f99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16f9a0:
    // 0x16f9a0: 0x24a53690  addiu       $a1, $a1, 0x3690
    ctx->pc = 0x16f9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13968));
label_16f9a4:
    // 0x16f9a4: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x16f9a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_16f9a8:
    // 0x16f9a8: 0x320f809  jalr        $t9
label_16f9ac:
    if (ctx->pc == 0x16F9ACu) {
        ctx->pc = 0x16F9ACu;
            // 0x16f9ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F9B0u;
        goto label_16f9b0;
    }
    ctx->pc = 0x16F9A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16F9B0u);
        ctx->pc = 0x16F9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F9A8u;
            // 0x16f9ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F9B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F9B0u; }
            if (ctx->pc != 0x16F9B0u) { return; }
        }
        }
    }
    ctx->pc = 0x16F9B0u;
label_16f9b0:
    // 0x16f9b0: 0x10000009  b           . + 4 + (0x9 << 2)
label_16f9b4:
    if (ctx->pc == 0x16F9B4u) {
        ctx->pc = 0x16F9B8u;
        goto label_16f9b8;
    }
    ctx->pc = 0x16F9B0u;
    {
        const bool branch_taken_0x16f9b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f9b0) {
            ctx->pc = 0x16F9D8u;
            goto label_16f9d8;
        }
    }
    ctx->pc = 0x16F9B8u;
label_16f9b8:
    // 0x16f9b8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x16f9b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_16f9bc:
    // 0x16f9bc: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x16f9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_16f9c0:
    // 0x16f9c0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x16f9c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16f9c4:
    // 0x16f9c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16f9c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16f9c8:
    // 0x16f9c8: 0x24a536a0  addiu       $a1, $a1, 0x36A0
    ctx->pc = 0x16f9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13984));
label_16f9cc:
    // 0x16f9cc: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x16f9ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_16f9d0:
    // 0x16f9d0: 0x320f809  jalr        $t9
label_16f9d4:
    if (ctx->pc == 0x16F9D4u) {
        ctx->pc = 0x16F9D4u;
            // 0x16f9d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x16F9D8u;
        goto label_16f9d8;
    }
    ctx->pc = 0x16F9D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x16F9D8u);
        ctx->pc = 0x16F9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16F9D0u;
            // 0x16f9d4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x16F9D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x16F9D8u; }
            if (ctx->pc != 0x16F9D8u) { return; }
        }
        }
    }
    ctx->pc = 0x16F9D8u;
label_16f9d8:
    // 0x16f9d8: 0x26240080  addiu       $a0, $s1, 0x80
    ctx->pc = 0x16f9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 128));
label_16f9dc:
    // 0x16f9dc: 0xc041c5c  jal         func_107170
label_16f9e0:
    if (ctx->pc == 0x16F9E0u) {
        ctx->pc = 0x16F9E0u;
            // 0x16f9e0: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x16F9E4u;
        goto label_16f9e4;
    }
    ctx->pc = 0x16F9DCu;
    SET_GPR_U32(ctx, 31, 0x16F9E4u);
    ctx->pc = 0x16F9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F9DCu;
            // 0x16f9e0: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F9E4u; }
        if (ctx->pc != 0x16F9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F9E4u; }
        if (ctx->pc != 0x16F9E4u) { return; }
    }
    ctx->pc = 0x16F9E4u;
label_16f9e4:
    // 0x16f9e4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16f9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16f9e8:
    // 0x16f9e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16f9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_16f9ec:
    // 0x16f9ec: 0xc05b1e8  jal         func_16C7A0
label_16f9f0:
    if (ctx->pc == 0x16F9F0u) {
        ctx->pc = 0x16F9F0u;
            // 0x16f9f0: 0xa222076c  sb          $v0, 0x76C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1900), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x16F9F4u;
        goto label_16f9f4;
    }
    ctx->pc = 0x16F9ECu;
    SET_GPR_U32(ctx, 31, 0x16F9F4u);
    ctx->pc = 0x16F9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x16F9ECu;
            // 0x16f9f0: 0xa222076c  sb          $v0, 0x76C($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1900), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16C7A0u;
    if (runtime->hasFunction(0x16C7A0u)) {
        auto targetFn = runtime->lookupFunction(0x16C7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F9F4u; }
        if (ctx->pc != 0x16F9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RockOn__12CActionCharaFv_0x16c7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16F9F4u; }
        if (ctx->pc != 0x16F9F4u) { return; }
    }
    ctx->pc = 0x16F9F4u;
label_16f9f4:
    // 0x16f9f4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x16f9f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_16f9f8:
    // 0x16f9f8: 0xc7b80010  lwc1        $f24, 0x10($sp)
    ctx->pc = 0x16f9f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[24] = f; }
label_16f9fc:
    // 0x16f9fc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x16f9fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_16fa00:
    // 0x16fa00: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x16fa00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_16fa04:
    // 0x16fa04: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x16fa04u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_16fa08:
    // 0x16fa08: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x16fa08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_16fa0c:
    // 0x16fa0c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x16fa0cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_16fa10:
    // 0x16fa10: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x16fa10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_16fa14:
    // 0x16fa14: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x16fa14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_16fa18:
    // 0x16fa18: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x16fa18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_16fa1c:
    // 0x16fa1c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x16fa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_16fa20:
    // 0x16fa20: 0x3e00008  jr          $ra
label_16fa24:
    if (ctx->pc == 0x16FA24u) {
        ctx->pc = 0x16FA24u;
            // 0x16fa24: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x16FA28u;
        goto label_fallthrough_0x16fa20;
    }
    ctx->pc = 0x16FA20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16FA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16FA20u;
            // 0x16fa24: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x16fa20:
    ctx->pc = 0x16FA28u;
}
