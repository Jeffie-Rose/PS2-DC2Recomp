#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: LoadDungeonMapFile__FPcPci
// Address: 0x28f340 - 0x28fcf0
void LoadDungeonMapFile__FPcPci_0x28f340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("LoadDungeonMapFile__FPcPci_0x28f340");
#endif

    switch (ctx->pc) {
        case 0x28f340u: goto label_28f340;
        case 0x28f344u: goto label_28f344;
        case 0x28f348u: goto label_28f348;
        case 0x28f34cu: goto label_28f34c;
        case 0x28f350u: goto label_28f350;
        case 0x28f354u: goto label_28f354;
        case 0x28f358u: goto label_28f358;
        case 0x28f35cu: goto label_28f35c;
        case 0x28f360u: goto label_28f360;
        case 0x28f364u: goto label_28f364;
        case 0x28f368u: goto label_28f368;
        case 0x28f36cu: goto label_28f36c;
        case 0x28f370u: goto label_28f370;
        case 0x28f374u: goto label_28f374;
        case 0x28f378u: goto label_28f378;
        case 0x28f37cu: goto label_28f37c;
        case 0x28f380u: goto label_28f380;
        case 0x28f384u: goto label_28f384;
        case 0x28f388u: goto label_28f388;
        case 0x28f38cu: goto label_28f38c;
        case 0x28f390u: goto label_28f390;
        case 0x28f394u: goto label_28f394;
        case 0x28f398u: goto label_28f398;
        case 0x28f39cu: goto label_28f39c;
        case 0x28f3a0u: goto label_28f3a0;
        case 0x28f3a4u: goto label_28f3a4;
        case 0x28f3a8u: goto label_28f3a8;
        case 0x28f3acu: goto label_28f3ac;
        case 0x28f3b0u: goto label_28f3b0;
        case 0x28f3b4u: goto label_28f3b4;
        case 0x28f3b8u: goto label_28f3b8;
        case 0x28f3bcu: goto label_28f3bc;
        case 0x28f3c0u: goto label_28f3c0;
        case 0x28f3c4u: goto label_28f3c4;
        case 0x28f3c8u: goto label_28f3c8;
        case 0x28f3ccu: goto label_28f3cc;
        case 0x28f3d0u: goto label_28f3d0;
        case 0x28f3d4u: goto label_28f3d4;
        case 0x28f3d8u: goto label_28f3d8;
        case 0x28f3dcu: goto label_28f3dc;
        case 0x28f3e0u: goto label_28f3e0;
        case 0x28f3e4u: goto label_28f3e4;
        case 0x28f3e8u: goto label_28f3e8;
        case 0x28f3ecu: goto label_28f3ec;
        case 0x28f3f0u: goto label_28f3f0;
        case 0x28f3f4u: goto label_28f3f4;
        case 0x28f3f8u: goto label_28f3f8;
        case 0x28f3fcu: goto label_28f3fc;
        case 0x28f400u: goto label_28f400;
        case 0x28f404u: goto label_28f404;
        case 0x28f408u: goto label_28f408;
        case 0x28f40cu: goto label_28f40c;
        case 0x28f410u: goto label_28f410;
        case 0x28f414u: goto label_28f414;
        case 0x28f418u: goto label_28f418;
        case 0x28f41cu: goto label_28f41c;
        case 0x28f420u: goto label_28f420;
        case 0x28f424u: goto label_28f424;
        case 0x28f428u: goto label_28f428;
        case 0x28f42cu: goto label_28f42c;
        case 0x28f430u: goto label_28f430;
        case 0x28f434u: goto label_28f434;
        case 0x28f438u: goto label_28f438;
        case 0x28f43cu: goto label_28f43c;
        case 0x28f440u: goto label_28f440;
        case 0x28f444u: goto label_28f444;
        case 0x28f448u: goto label_28f448;
        case 0x28f44cu: goto label_28f44c;
        case 0x28f450u: goto label_28f450;
        case 0x28f454u: goto label_28f454;
        case 0x28f458u: goto label_28f458;
        case 0x28f45cu: goto label_28f45c;
        case 0x28f460u: goto label_28f460;
        case 0x28f464u: goto label_28f464;
        case 0x28f468u: goto label_28f468;
        case 0x28f46cu: goto label_28f46c;
        case 0x28f470u: goto label_28f470;
        case 0x28f474u: goto label_28f474;
        case 0x28f478u: goto label_28f478;
        case 0x28f47cu: goto label_28f47c;
        case 0x28f480u: goto label_28f480;
        case 0x28f484u: goto label_28f484;
        case 0x28f488u: goto label_28f488;
        case 0x28f48cu: goto label_28f48c;
        case 0x28f490u: goto label_28f490;
        case 0x28f494u: goto label_28f494;
        case 0x28f498u: goto label_28f498;
        case 0x28f49cu: goto label_28f49c;
        case 0x28f4a0u: goto label_28f4a0;
        case 0x28f4a4u: goto label_28f4a4;
        case 0x28f4a8u: goto label_28f4a8;
        case 0x28f4acu: goto label_28f4ac;
        case 0x28f4b0u: goto label_28f4b0;
        case 0x28f4b4u: goto label_28f4b4;
        case 0x28f4b8u: goto label_28f4b8;
        case 0x28f4bcu: goto label_28f4bc;
        case 0x28f4c0u: goto label_28f4c0;
        case 0x28f4c4u: goto label_28f4c4;
        case 0x28f4c8u: goto label_28f4c8;
        case 0x28f4ccu: goto label_28f4cc;
        case 0x28f4d0u: goto label_28f4d0;
        case 0x28f4d4u: goto label_28f4d4;
        case 0x28f4d8u: goto label_28f4d8;
        case 0x28f4dcu: goto label_28f4dc;
        case 0x28f4e0u: goto label_28f4e0;
        case 0x28f4e4u: goto label_28f4e4;
        case 0x28f4e8u: goto label_28f4e8;
        case 0x28f4ecu: goto label_28f4ec;
        case 0x28f4f0u: goto label_28f4f0;
        case 0x28f4f4u: goto label_28f4f4;
        case 0x28f4f8u: goto label_28f4f8;
        case 0x28f4fcu: goto label_28f4fc;
        case 0x28f500u: goto label_28f500;
        case 0x28f504u: goto label_28f504;
        case 0x28f508u: goto label_28f508;
        case 0x28f50cu: goto label_28f50c;
        case 0x28f510u: goto label_28f510;
        case 0x28f514u: goto label_28f514;
        case 0x28f518u: goto label_28f518;
        case 0x28f51cu: goto label_28f51c;
        case 0x28f520u: goto label_28f520;
        case 0x28f524u: goto label_28f524;
        case 0x28f528u: goto label_28f528;
        case 0x28f52cu: goto label_28f52c;
        case 0x28f530u: goto label_28f530;
        case 0x28f534u: goto label_28f534;
        case 0x28f538u: goto label_28f538;
        case 0x28f53cu: goto label_28f53c;
        case 0x28f540u: goto label_28f540;
        case 0x28f544u: goto label_28f544;
        case 0x28f548u: goto label_28f548;
        case 0x28f54cu: goto label_28f54c;
        case 0x28f550u: goto label_28f550;
        case 0x28f554u: goto label_28f554;
        case 0x28f558u: goto label_28f558;
        case 0x28f55cu: goto label_28f55c;
        case 0x28f560u: goto label_28f560;
        case 0x28f564u: goto label_28f564;
        case 0x28f568u: goto label_28f568;
        case 0x28f56cu: goto label_28f56c;
        case 0x28f570u: goto label_28f570;
        case 0x28f574u: goto label_28f574;
        case 0x28f578u: goto label_28f578;
        case 0x28f57cu: goto label_28f57c;
        case 0x28f580u: goto label_28f580;
        case 0x28f584u: goto label_28f584;
        case 0x28f588u: goto label_28f588;
        case 0x28f58cu: goto label_28f58c;
        case 0x28f590u: goto label_28f590;
        case 0x28f594u: goto label_28f594;
        case 0x28f598u: goto label_28f598;
        case 0x28f59cu: goto label_28f59c;
        case 0x28f5a0u: goto label_28f5a0;
        case 0x28f5a4u: goto label_28f5a4;
        case 0x28f5a8u: goto label_28f5a8;
        case 0x28f5acu: goto label_28f5ac;
        case 0x28f5b0u: goto label_28f5b0;
        case 0x28f5b4u: goto label_28f5b4;
        case 0x28f5b8u: goto label_28f5b8;
        case 0x28f5bcu: goto label_28f5bc;
        case 0x28f5c0u: goto label_28f5c0;
        case 0x28f5c4u: goto label_28f5c4;
        case 0x28f5c8u: goto label_28f5c8;
        case 0x28f5ccu: goto label_28f5cc;
        case 0x28f5d0u: goto label_28f5d0;
        case 0x28f5d4u: goto label_28f5d4;
        case 0x28f5d8u: goto label_28f5d8;
        case 0x28f5dcu: goto label_28f5dc;
        case 0x28f5e0u: goto label_28f5e0;
        case 0x28f5e4u: goto label_28f5e4;
        case 0x28f5e8u: goto label_28f5e8;
        case 0x28f5ecu: goto label_28f5ec;
        case 0x28f5f0u: goto label_28f5f0;
        case 0x28f5f4u: goto label_28f5f4;
        case 0x28f5f8u: goto label_28f5f8;
        case 0x28f5fcu: goto label_28f5fc;
        case 0x28f600u: goto label_28f600;
        case 0x28f604u: goto label_28f604;
        case 0x28f608u: goto label_28f608;
        case 0x28f60cu: goto label_28f60c;
        case 0x28f610u: goto label_28f610;
        case 0x28f614u: goto label_28f614;
        case 0x28f618u: goto label_28f618;
        case 0x28f61cu: goto label_28f61c;
        case 0x28f620u: goto label_28f620;
        case 0x28f624u: goto label_28f624;
        case 0x28f628u: goto label_28f628;
        case 0x28f62cu: goto label_28f62c;
        case 0x28f630u: goto label_28f630;
        case 0x28f634u: goto label_28f634;
        case 0x28f638u: goto label_28f638;
        case 0x28f63cu: goto label_28f63c;
        case 0x28f640u: goto label_28f640;
        case 0x28f644u: goto label_28f644;
        case 0x28f648u: goto label_28f648;
        case 0x28f64cu: goto label_28f64c;
        case 0x28f650u: goto label_28f650;
        case 0x28f654u: goto label_28f654;
        case 0x28f658u: goto label_28f658;
        case 0x28f65cu: goto label_28f65c;
        case 0x28f660u: goto label_28f660;
        case 0x28f664u: goto label_28f664;
        case 0x28f668u: goto label_28f668;
        case 0x28f66cu: goto label_28f66c;
        case 0x28f670u: goto label_28f670;
        case 0x28f674u: goto label_28f674;
        case 0x28f678u: goto label_28f678;
        case 0x28f67cu: goto label_28f67c;
        case 0x28f680u: goto label_28f680;
        case 0x28f684u: goto label_28f684;
        case 0x28f688u: goto label_28f688;
        case 0x28f68cu: goto label_28f68c;
        case 0x28f690u: goto label_28f690;
        case 0x28f694u: goto label_28f694;
        case 0x28f698u: goto label_28f698;
        case 0x28f69cu: goto label_28f69c;
        case 0x28f6a0u: goto label_28f6a0;
        case 0x28f6a4u: goto label_28f6a4;
        case 0x28f6a8u: goto label_28f6a8;
        case 0x28f6acu: goto label_28f6ac;
        case 0x28f6b0u: goto label_28f6b0;
        case 0x28f6b4u: goto label_28f6b4;
        case 0x28f6b8u: goto label_28f6b8;
        case 0x28f6bcu: goto label_28f6bc;
        case 0x28f6c0u: goto label_28f6c0;
        case 0x28f6c4u: goto label_28f6c4;
        case 0x28f6c8u: goto label_28f6c8;
        case 0x28f6ccu: goto label_28f6cc;
        case 0x28f6d0u: goto label_28f6d0;
        case 0x28f6d4u: goto label_28f6d4;
        case 0x28f6d8u: goto label_28f6d8;
        case 0x28f6dcu: goto label_28f6dc;
        case 0x28f6e0u: goto label_28f6e0;
        case 0x28f6e4u: goto label_28f6e4;
        case 0x28f6e8u: goto label_28f6e8;
        case 0x28f6ecu: goto label_28f6ec;
        case 0x28f6f0u: goto label_28f6f0;
        case 0x28f6f4u: goto label_28f6f4;
        case 0x28f6f8u: goto label_28f6f8;
        case 0x28f6fcu: goto label_28f6fc;
        case 0x28f700u: goto label_28f700;
        case 0x28f704u: goto label_28f704;
        case 0x28f708u: goto label_28f708;
        case 0x28f70cu: goto label_28f70c;
        case 0x28f710u: goto label_28f710;
        case 0x28f714u: goto label_28f714;
        case 0x28f718u: goto label_28f718;
        case 0x28f71cu: goto label_28f71c;
        case 0x28f720u: goto label_28f720;
        case 0x28f724u: goto label_28f724;
        case 0x28f728u: goto label_28f728;
        case 0x28f72cu: goto label_28f72c;
        case 0x28f730u: goto label_28f730;
        case 0x28f734u: goto label_28f734;
        case 0x28f738u: goto label_28f738;
        case 0x28f73cu: goto label_28f73c;
        case 0x28f740u: goto label_28f740;
        case 0x28f744u: goto label_28f744;
        case 0x28f748u: goto label_28f748;
        case 0x28f74cu: goto label_28f74c;
        case 0x28f750u: goto label_28f750;
        case 0x28f754u: goto label_28f754;
        case 0x28f758u: goto label_28f758;
        case 0x28f75cu: goto label_28f75c;
        case 0x28f760u: goto label_28f760;
        case 0x28f764u: goto label_28f764;
        case 0x28f768u: goto label_28f768;
        case 0x28f76cu: goto label_28f76c;
        case 0x28f770u: goto label_28f770;
        case 0x28f774u: goto label_28f774;
        case 0x28f778u: goto label_28f778;
        case 0x28f77cu: goto label_28f77c;
        case 0x28f780u: goto label_28f780;
        case 0x28f784u: goto label_28f784;
        case 0x28f788u: goto label_28f788;
        case 0x28f78cu: goto label_28f78c;
        case 0x28f790u: goto label_28f790;
        case 0x28f794u: goto label_28f794;
        case 0x28f798u: goto label_28f798;
        case 0x28f79cu: goto label_28f79c;
        case 0x28f7a0u: goto label_28f7a0;
        case 0x28f7a4u: goto label_28f7a4;
        case 0x28f7a8u: goto label_28f7a8;
        case 0x28f7acu: goto label_28f7ac;
        case 0x28f7b0u: goto label_28f7b0;
        case 0x28f7b4u: goto label_28f7b4;
        case 0x28f7b8u: goto label_28f7b8;
        case 0x28f7bcu: goto label_28f7bc;
        case 0x28f7c0u: goto label_28f7c0;
        case 0x28f7c4u: goto label_28f7c4;
        case 0x28f7c8u: goto label_28f7c8;
        case 0x28f7ccu: goto label_28f7cc;
        case 0x28f7d0u: goto label_28f7d0;
        case 0x28f7d4u: goto label_28f7d4;
        case 0x28f7d8u: goto label_28f7d8;
        case 0x28f7dcu: goto label_28f7dc;
        case 0x28f7e0u: goto label_28f7e0;
        case 0x28f7e4u: goto label_28f7e4;
        case 0x28f7e8u: goto label_28f7e8;
        case 0x28f7ecu: goto label_28f7ec;
        case 0x28f7f0u: goto label_28f7f0;
        case 0x28f7f4u: goto label_28f7f4;
        case 0x28f7f8u: goto label_28f7f8;
        case 0x28f7fcu: goto label_28f7fc;
        case 0x28f800u: goto label_28f800;
        case 0x28f804u: goto label_28f804;
        case 0x28f808u: goto label_28f808;
        case 0x28f80cu: goto label_28f80c;
        case 0x28f810u: goto label_28f810;
        case 0x28f814u: goto label_28f814;
        case 0x28f818u: goto label_28f818;
        case 0x28f81cu: goto label_28f81c;
        case 0x28f820u: goto label_28f820;
        case 0x28f824u: goto label_28f824;
        case 0x28f828u: goto label_28f828;
        case 0x28f82cu: goto label_28f82c;
        case 0x28f830u: goto label_28f830;
        case 0x28f834u: goto label_28f834;
        case 0x28f838u: goto label_28f838;
        case 0x28f83cu: goto label_28f83c;
        case 0x28f840u: goto label_28f840;
        case 0x28f844u: goto label_28f844;
        case 0x28f848u: goto label_28f848;
        case 0x28f84cu: goto label_28f84c;
        case 0x28f850u: goto label_28f850;
        case 0x28f854u: goto label_28f854;
        case 0x28f858u: goto label_28f858;
        case 0x28f85cu: goto label_28f85c;
        case 0x28f860u: goto label_28f860;
        case 0x28f864u: goto label_28f864;
        case 0x28f868u: goto label_28f868;
        case 0x28f86cu: goto label_28f86c;
        case 0x28f870u: goto label_28f870;
        case 0x28f874u: goto label_28f874;
        case 0x28f878u: goto label_28f878;
        case 0x28f87cu: goto label_28f87c;
        case 0x28f880u: goto label_28f880;
        case 0x28f884u: goto label_28f884;
        case 0x28f888u: goto label_28f888;
        case 0x28f88cu: goto label_28f88c;
        case 0x28f890u: goto label_28f890;
        case 0x28f894u: goto label_28f894;
        case 0x28f898u: goto label_28f898;
        case 0x28f89cu: goto label_28f89c;
        case 0x28f8a0u: goto label_28f8a0;
        case 0x28f8a4u: goto label_28f8a4;
        case 0x28f8a8u: goto label_28f8a8;
        case 0x28f8acu: goto label_28f8ac;
        case 0x28f8b0u: goto label_28f8b0;
        case 0x28f8b4u: goto label_28f8b4;
        case 0x28f8b8u: goto label_28f8b8;
        case 0x28f8bcu: goto label_28f8bc;
        case 0x28f8c0u: goto label_28f8c0;
        case 0x28f8c4u: goto label_28f8c4;
        case 0x28f8c8u: goto label_28f8c8;
        case 0x28f8ccu: goto label_28f8cc;
        case 0x28f8d0u: goto label_28f8d0;
        case 0x28f8d4u: goto label_28f8d4;
        case 0x28f8d8u: goto label_28f8d8;
        case 0x28f8dcu: goto label_28f8dc;
        case 0x28f8e0u: goto label_28f8e0;
        case 0x28f8e4u: goto label_28f8e4;
        case 0x28f8e8u: goto label_28f8e8;
        case 0x28f8ecu: goto label_28f8ec;
        case 0x28f8f0u: goto label_28f8f0;
        case 0x28f8f4u: goto label_28f8f4;
        case 0x28f8f8u: goto label_28f8f8;
        case 0x28f8fcu: goto label_28f8fc;
        case 0x28f900u: goto label_28f900;
        case 0x28f904u: goto label_28f904;
        case 0x28f908u: goto label_28f908;
        case 0x28f90cu: goto label_28f90c;
        case 0x28f910u: goto label_28f910;
        case 0x28f914u: goto label_28f914;
        case 0x28f918u: goto label_28f918;
        case 0x28f91cu: goto label_28f91c;
        case 0x28f920u: goto label_28f920;
        case 0x28f924u: goto label_28f924;
        case 0x28f928u: goto label_28f928;
        case 0x28f92cu: goto label_28f92c;
        case 0x28f930u: goto label_28f930;
        case 0x28f934u: goto label_28f934;
        case 0x28f938u: goto label_28f938;
        case 0x28f93cu: goto label_28f93c;
        case 0x28f940u: goto label_28f940;
        case 0x28f944u: goto label_28f944;
        case 0x28f948u: goto label_28f948;
        case 0x28f94cu: goto label_28f94c;
        case 0x28f950u: goto label_28f950;
        case 0x28f954u: goto label_28f954;
        case 0x28f958u: goto label_28f958;
        case 0x28f95cu: goto label_28f95c;
        case 0x28f960u: goto label_28f960;
        case 0x28f964u: goto label_28f964;
        case 0x28f968u: goto label_28f968;
        case 0x28f96cu: goto label_28f96c;
        case 0x28f970u: goto label_28f970;
        case 0x28f974u: goto label_28f974;
        case 0x28f978u: goto label_28f978;
        case 0x28f97cu: goto label_28f97c;
        case 0x28f980u: goto label_28f980;
        case 0x28f984u: goto label_28f984;
        case 0x28f988u: goto label_28f988;
        case 0x28f98cu: goto label_28f98c;
        case 0x28f990u: goto label_28f990;
        case 0x28f994u: goto label_28f994;
        case 0x28f998u: goto label_28f998;
        case 0x28f99cu: goto label_28f99c;
        case 0x28f9a0u: goto label_28f9a0;
        case 0x28f9a4u: goto label_28f9a4;
        case 0x28f9a8u: goto label_28f9a8;
        case 0x28f9acu: goto label_28f9ac;
        case 0x28f9b0u: goto label_28f9b0;
        case 0x28f9b4u: goto label_28f9b4;
        case 0x28f9b8u: goto label_28f9b8;
        case 0x28f9bcu: goto label_28f9bc;
        case 0x28f9c0u: goto label_28f9c0;
        case 0x28f9c4u: goto label_28f9c4;
        case 0x28f9c8u: goto label_28f9c8;
        case 0x28f9ccu: goto label_28f9cc;
        case 0x28f9d0u: goto label_28f9d0;
        case 0x28f9d4u: goto label_28f9d4;
        case 0x28f9d8u: goto label_28f9d8;
        case 0x28f9dcu: goto label_28f9dc;
        case 0x28f9e0u: goto label_28f9e0;
        case 0x28f9e4u: goto label_28f9e4;
        case 0x28f9e8u: goto label_28f9e8;
        case 0x28f9ecu: goto label_28f9ec;
        case 0x28f9f0u: goto label_28f9f0;
        case 0x28f9f4u: goto label_28f9f4;
        case 0x28f9f8u: goto label_28f9f8;
        case 0x28f9fcu: goto label_28f9fc;
        case 0x28fa00u: goto label_28fa00;
        case 0x28fa04u: goto label_28fa04;
        case 0x28fa08u: goto label_28fa08;
        case 0x28fa0cu: goto label_28fa0c;
        case 0x28fa10u: goto label_28fa10;
        case 0x28fa14u: goto label_28fa14;
        case 0x28fa18u: goto label_28fa18;
        case 0x28fa1cu: goto label_28fa1c;
        case 0x28fa20u: goto label_28fa20;
        case 0x28fa24u: goto label_28fa24;
        case 0x28fa28u: goto label_28fa28;
        case 0x28fa2cu: goto label_28fa2c;
        case 0x28fa30u: goto label_28fa30;
        case 0x28fa34u: goto label_28fa34;
        case 0x28fa38u: goto label_28fa38;
        case 0x28fa3cu: goto label_28fa3c;
        case 0x28fa40u: goto label_28fa40;
        case 0x28fa44u: goto label_28fa44;
        case 0x28fa48u: goto label_28fa48;
        case 0x28fa4cu: goto label_28fa4c;
        case 0x28fa50u: goto label_28fa50;
        case 0x28fa54u: goto label_28fa54;
        case 0x28fa58u: goto label_28fa58;
        case 0x28fa5cu: goto label_28fa5c;
        case 0x28fa60u: goto label_28fa60;
        case 0x28fa64u: goto label_28fa64;
        case 0x28fa68u: goto label_28fa68;
        case 0x28fa6cu: goto label_28fa6c;
        case 0x28fa70u: goto label_28fa70;
        case 0x28fa74u: goto label_28fa74;
        case 0x28fa78u: goto label_28fa78;
        case 0x28fa7cu: goto label_28fa7c;
        case 0x28fa80u: goto label_28fa80;
        case 0x28fa84u: goto label_28fa84;
        case 0x28fa88u: goto label_28fa88;
        case 0x28fa8cu: goto label_28fa8c;
        case 0x28fa90u: goto label_28fa90;
        case 0x28fa94u: goto label_28fa94;
        case 0x28fa98u: goto label_28fa98;
        case 0x28fa9cu: goto label_28fa9c;
        case 0x28faa0u: goto label_28faa0;
        case 0x28faa4u: goto label_28faa4;
        case 0x28faa8u: goto label_28faa8;
        case 0x28faacu: goto label_28faac;
        case 0x28fab0u: goto label_28fab0;
        case 0x28fab4u: goto label_28fab4;
        case 0x28fab8u: goto label_28fab8;
        case 0x28fabcu: goto label_28fabc;
        case 0x28fac0u: goto label_28fac0;
        case 0x28fac4u: goto label_28fac4;
        case 0x28fac8u: goto label_28fac8;
        case 0x28faccu: goto label_28facc;
        case 0x28fad0u: goto label_28fad0;
        case 0x28fad4u: goto label_28fad4;
        case 0x28fad8u: goto label_28fad8;
        case 0x28fadcu: goto label_28fadc;
        case 0x28fae0u: goto label_28fae0;
        case 0x28fae4u: goto label_28fae4;
        case 0x28fae8u: goto label_28fae8;
        case 0x28faecu: goto label_28faec;
        case 0x28faf0u: goto label_28faf0;
        case 0x28faf4u: goto label_28faf4;
        case 0x28faf8u: goto label_28faf8;
        case 0x28fafcu: goto label_28fafc;
        case 0x28fb00u: goto label_28fb00;
        case 0x28fb04u: goto label_28fb04;
        case 0x28fb08u: goto label_28fb08;
        case 0x28fb0cu: goto label_28fb0c;
        case 0x28fb10u: goto label_28fb10;
        case 0x28fb14u: goto label_28fb14;
        case 0x28fb18u: goto label_28fb18;
        case 0x28fb1cu: goto label_28fb1c;
        case 0x28fb20u: goto label_28fb20;
        case 0x28fb24u: goto label_28fb24;
        case 0x28fb28u: goto label_28fb28;
        case 0x28fb2cu: goto label_28fb2c;
        case 0x28fb30u: goto label_28fb30;
        case 0x28fb34u: goto label_28fb34;
        case 0x28fb38u: goto label_28fb38;
        case 0x28fb3cu: goto label_28fb3c;
        case 0x28fb40u: goto label_28fb40;
        case 0x28fb44u: goto label_28fb44;
        case 0x28fb48u: goto label_28fb48;
        case 0x28fb4cu: goto label_28fb4c;
        case 0x28fb50u: goto label_28fb50;
        case 0x28fb54u: goto label_28fb54;
        case 0x28fb58u: goto label_28fb58;
        case 0x28fb5cu: goto label_28fb5c;
        case 0x28fb60u: goto label_28fb60;
        case 0x28fb64u: goto label_28fb64;
        case 0x28fb68u: goto label_28fb68;
        case 0x28fb6cu: goto label_28fb6c;
        case 0x28fb70u: goto label_28fb70;
        case 0x28fb74u: goto label_28fb74;
        case 0x28fb78u: goto label_28fb78;
        case 0x28fb7cu: goto label_28fb7c;
        case 0x28fb80u: goto label_28fb80;
        case 0x28fb84u: goto label_28fb84;
        case 0x28fb88u: goto label_28fb88;
        case 0x28fb8cu: goto label_28fb8c;
        case 0x28fb90u: goto label_28fb90;
        case 0x28fb94u: goto label_28fb94;
        case 0x28fb98u: goto label_28fb98;
        case 0x28fb9cu: goto label_28fb9c;
        case 0x28fba0u: goto label_28fba0;
        case 0x28fba4u: goto label_28fba4;
        case 0x28fba8u: goto label_28fba8;
        case 0x28fbacu: goto label_28fbac;
        case 0x28fbb0u: goto label_28fbb0;
        case 0x28fbb4u: goto label_28fbb4;
        case 0x28fbb8u: goto label_28fbb8;
        case 0x28fbbcu: goto label_28fbbc;
        case 0x28fbc0u: goto label_28fbc0;
        case 0x28fbc4u: goto label_28fbc4;
        case 0x28fbc8u: goto label_28fbc8;
        case 0x28fbccu: goto label_28fbcc;
        case 0x28fbd0u: goto label_28fbd0;
        case 0x28fbd4u: goto label_28fbd4;
        case 0x28fbd8u: goto label_28fbd8;
        case 0x28fbdcu: goto label_28fbdc;
        case 0x28fbe0u: goto label_28fbe0;
        case 0x28fbe4u: goto label_28fbe4;
        case 0x28fbe8u: goto label_28fbe8;
        case 0x28fbecu: goto label_28fbec;
        case 0x28fbf0u: goto label_28fbf0;
        case 0x28fbf4u: goto label_28fbf4;
        case 0x28fbf8u: goto label_28fbf8;
        case 0x28fbfcu: goto label_28fbfc;
        case 0x28fc00u: goto label_28fc00;
        case 0x28fc04u: goto label_28fc04;
        case 0x28fc08u: goto label_28fc08;
        case 0x28fc0cu: goto label_28fc0c;
        case 0x28fc10u: goto label_28fc10;
        case 0x28fc14u: goto label_28fc14;
        case 0x28fc18u: goto label_28fc18;
        case 0x28fc1cu: goto label_28fc1c;
        case 0x28fc20u: goto label_28fc20;
        case 0x28fc24u: goto label_28fc24;
        case 0x28fc28u: goto label_28fc28;
        case 0x28fc2cu: goto label_28fc2c;
        case 0x28fc30u: goto label_28fc30;
        case 0x28fc34u: goto label_28fc34;
        case 0x28fc38u: goto label_28fc38;
        case 0x28fc3cu: goto label_28fc3c;
        case 0x28fc40u: goto label_28fc40;
        case 0x28fc44u: goto label_28fc44;
        case 0x28fc48u: goto label_28fc48;
        case 0x28fc4cu: goto label_28fc4c;
        case 0x28fc50u: goto label_28fc50;
        case 0x28fc54u: goto label_28fc54;
        case 0x28fc58u: goto label_28fc58;
        case 0x28fc5cu: goto label_28fc5c;
        case 0x28fc60u: goto label_28fc60;
        case 0x28fc64u: goto label_28fc64;
        case 0x28fc68u: goto label_28fc68;
        case 0x28fc6cu: goto label_28fc6c;
        case 0x28fc70u: goto label_28fc70;
        case 0x28fc74u: goto label_28fc74;
        case 0x28fc78u: goto label_28fc78;
        case 0x28fc7cu: goto label_28fc7c;
        case 0x28fc80u: goto label_28fc80;
        case 0x28fc84u: goto label_28fc84;
        case 0x28fc88u: goto label_28fc88;
        case 0x28fc8cu: goto label_28fc8c;
        case 0x28fc90u: goto label_28fc90;
        case 0x28fc94u: goto label_28fc94;
        case 0x28fc98u: goto label_28fc98;
        case 0x28fc9cu: goto label_28fc9c;
        case 0x28fca0u: goto label_28fca0;
        case 0x28fca4u: goto label_28fca4;
        case 0x28fca8u: goto label_28fca8;
        case 0x28fcacu: goto label_28fcac;
        case 0x28fcb0u: goto label_28fcb0;
        case 0x28fcb4u: goto label_28fcb4;
        case 0x28fcb8u: goto label_28fcb8;
        case 0x28fcbcu: goto label_28fcbc;
        case 0x28fcc0u: goto label_28fcc0;
        case 0x28fcc4u: goto label_28fcc4;
        case 0x28fcc8u: goto label_28fcc8;
        case 0x28fcccu: goto label_28fccc;
        case 0x28fcd0u: goto label_28fcd0;
        case 0x28fcd4u: goto label_28fcd4;
        case 0x28fcd8u: goto label_28fcd8;
        case 0x28fcdcu: goto label_28fcdc;
        case 0x28fce0u: goto label_28fce0;
        case 0x28fce4u: goto label_28fce4;
        case 0x28fce8u: goto label_28fce8;
        case 0x28fcecu: goto label_28fcec;
        default: break;
    }

    ctx->pc = 0x28f340u;

label_28f340:
    // 0x28f340: 0x27bdfc80  addiu       $sp, $sp, -0x380
    ctx->pc = 0x28f340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966400));
label_28f344:
    // 0x28f344: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28f348:
    // 0x28f348: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x28f348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_28f34c:
    // 0x28f34c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x28f34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_28f350:
    // 0x28f350: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x28f350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_28f354:
    // 0x28f354: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x28f354u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_28f358:
    // 0x28f358: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x28f358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_28f35c:
    // 0x28f35c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x28f35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_28f360:
    // 0x28f360: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28f360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_28f364:
    // 0x28f364: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28f364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_28f368:
    // 0x28f368: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x28f368u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_28f36c:
    // 0x28f36c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28f36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_28f370:
    // 0x28f370: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28f370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_28f374:
    // 0x28f374: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28f374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_28f378:
    // 0x28f378: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x28f378u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_28f37c:
    // 0x28f37c: 0x8f838dac  lw          $v1, -0x7254($gp)
    ctx->pc = 0x28f37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_28f380:
    // 0x28f380: 0xac622fec  sw          $v0, 0x2FEC($v1)
    ctx->pc = 0x28f380u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12268), GPR_U32(ctx, 2));
label_28f384:
    // 0x28f384: 0x24732f90  addiu       $s3, $v1, 0x2F90
    ctx->pc = 0x28f384u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 12176));
label_28f388:
    // 0x28f388: 0xac622fec  sw          $v0, 0x2FEC($v1)
    ctx->pc = 0x28f388u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12268), GPR_U32(ctx, 2));
label_28f38c:
    // 0x28f38c: 0xac603014  sw          $zero, 0x3014($v1)
    ctx->pc = 0x28f38cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12308), GPR_U32(ctx, 0));
label_28f390:
    // 0x28f390: 0xac603018  sw          $zero, 0x3018($v1)
    ctx->pc = 0x28f390u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12312), GPR_U32(ctx, 0));
label_28f394:
    // 0x28f394: 0xac602fe4  sw          $zero, 0x2FE4($v1)
    ctx->pc = 0x28f394u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12260), GPR_U32(ctx, 0));
label_28f398:
    // 0x28f398: 0xac602f98  sw          $zero, 0x2F98($v1)
    ctx->pc = 0x28f398u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12184), GPR_U32(ctx, 0));
label_28f39c:
    // 0x28f39c: 0xac602fa0  sw          $zero, 0x2FA0($v1)
    ctx->pc = 0x28f39cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12192), GPR_U32(ctx, 0));
label_28f3a0:
    // 0x28f3a0: 0xac602ff4  sw          $zero, 0x2FF4($v1)
    ctx->pc = 0x28f3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12276), GPR_U32(ctx, 0));
label_28f3a4:
    // 0x28f3a4: 0xa4603008  sh          $zero, 0x3008($v1)
    ctx->pc = 0x28f3a4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12296), (uint16_t)GPR_U32(ctx, 0));
label_28f3a8:
    // 0x28f3a8: 0xa4602fd6  sh          $zero, 0x2FD6($v1)
    ctx->pc = 0x28f3a8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12246), (uint16_t)GPR_U32(ctx, 0));
label_28f3ac:
    // 0x28f3ac: 0xfc603020  sd          $zero, 0x3020($v1)
    ctx->pc = 0x28f3acu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 12320), GPR_U64(ctx, 0));
label_28f3b0:
    // 0x28f3b0: 0xac603028  sw          $zero, 0x3028($v1)
    ctx->pc = 0x28f3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12328), GPR_U32(ctx, 0));
label_28f3b4:
    // 0x28f3b4: 0xa4602f9c  sh          $zero, 0x2F9C($v1)
    ctx->pc = 0x28f3b4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12188), (uint16_t)GPR_U32(ctx, 0));
label_28f3b8:
    // 0x28f3b8: 0xa060301c  sb          $zero, 0x301C($v1)
    ctx->pc = 0x28f3b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 12316), (uint8_t)GPR_U32(ctx, 0));
label_28f3bc:
    // 0x28f3bc: 0xa460302e  sh          $zero, 0x302E($v1)
    ctx->pc = 0x28f3bcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12334), (uint16_t)GPR_U32(ctx, 0));
label_28f3c0:
    // 0x28f3c0: 0x8c622f98  lw          $v0, 0x2F98($v1)
    ctx->pc = 0x28f3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12184)));
label_28f3c4:
    // 0x28f3c4: 0x34420400  ori         $v0, $v0, 0x400
    ctx->pc = 0x28f3c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
label_28f3c8:
    // 0x28f3c8: 0xc0685ac  jal         func_1A16B0
label_28f3cc:
    if (ctx->pc == 0x28F3CCu) {
        ctx->pc = 0x28F3CCu;
            // 0x28f3cc: 0xac622f98  sw          $v0, 0x2F98($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12184), GPR_U32(ctx, 2));
        ctx->pc = 0x28F3D0u;
        goto label_28f3d0;
    }
    ctx->pc = 0x28F3C8u;
    SET_GPR_U32(ctx, 31, 0x28F3D0u);
    ctx->pc = 0x28F3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F3C8u;
            // 0x28f3cc: 0xac622f98  sw          $v0, 0x2F98($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12184), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A16B0u;
    if (runtime->hasFunction(0x1A16B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A16B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F3D0u; }
        if (ctx->pc != 0x28F3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckItemDngKey__Fv_0x1a16b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F3D0u; }
        if (ctx->pc != 0x28F3D0u) { return; }
    }
    ctx->pc = 0x28F3D0u;
label_28f3d0:
    // 0x28f3d0: 0xc050db0  jal         func_1436C0
label_28f3d4:
    if (ctx->pc == 0x28F3D4u) {
        ctx->pc = 0x28F3D8u;
        goto label_28f3d8;
    }
    ctx->pc = 0x28F3D0u;
    SET_GPR_U32(ctx, 31, 0x28F3D8u);
    ctx->pc = 0x1436C0u;
    if (runtime->hasFunction(0x1436C0u)) {
        auto targetFn = runtime->lookupFunction(0x1436C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F3D8u; }
        if (ctx->pc != 0x28F3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInitLighting__Fv_0x1436c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F3D8u; }
        if (ctx->pc != 0x28F3D8u) { return; }
    }
    ctx->pc = 0x28F3D8u;
label_28f3d8:
    // 0x28f3d8: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x28f3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_28f3dc:
    // 0x28f3dc: 0xc0a9a0c  jal         func_2A6830
label_28f3e0:
    if (ctx->pc == 0x28F3E0u) {
        ctx->pc = 0x28F3E0u;
            // 0x28f3e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28F3E4u;
        goto label_28f3e4;
    }
    ctx->pc = 0x28F3DCu;
    SET_GPR_U32(ctx, 31, 0x28F3E4u);
    ctx->pc = 0x28F3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F3DCu;
            // 0x28f3e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6830u;
    if (runtime->hasFunction(0x2A6830u)) {
        auto targetFn = runtime->lookupFunction(0x2A6830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F3E4u; }
        if (ctx->pc != 0x28F3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AutoChangeEnvOffset__6CSceneFi_0x2a6830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F3E4u; }
        if (ctx->pc != 0x28F3E4u) { return; }
    }
    ctx->pc = 0x28F3E4u;
label_28f3e4:
    // 0x28f3e4: 0xc0738b8  jal         func_1CE2E0
label_28f3e8:
    if (ctx->pc == 0x28F3E8u) {
        ctx->pc = 0x28F3ECu;
        goto label_28f3ec;
    }
    ctx->pc = 0x28F3E4u;
    SET_GPR_U32(ctx, 31, 0x28F3ECu);
    ctx->pc = 0x1CE2E0u;
    if (runtime->hasFunction(0x1CE2E0u)) {
        auto targetFn = runtime->lookupFunction(0x1CE2E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F3ECu; }
        if (ctx->pc != 0x28F3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CommonStageClassInit__Fv_0x1ce2e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F3ECu; }
        if (ctx->pc != 0x28F3ECu) { return; }
    }
    ctx->pc = 0x28F3ECu;
label_28f3ec:
    // 0x28f3ec: 0xc065b88  jal         func_196E20
label_28f3f0:
    if (ctx->pc == 0x28F3F0u) {
        ctx->pc = 0x28F3F4u;
        goto label_28f3f4;
    }
    ctx->pc = 0x28F3ECu;
    SET_GPR_U32(ctx, 31, 0x28F3F4u);
    ctx->pc = 0x196E20u;
    if (runtime->hasFunction(0x196E20u)) {
        auto targetFn = runtime->lookupFunction(0x196E20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F3F4u; }
        if (ctx->pc != 0x28F3F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReEquipFishingGameWeapon__Fv_0x196e20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F3F4u; }
        if (ctx->pc != 0x28F3F4u) { return; }
    }
    ctx->pc = 0x28F3F4u;
label_28f3f4:
    // 0x28f3f4: 0x8f848da8  lw          $a0, -0x7258($gp)
    ctx->pc = 0x28f3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938024)));
label_28f3f8:
    // 0x28f3f8: 0x8c950000  lw          $s5, 0x0($a0)
    ctx->pc = 0x28f3f8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_28f3fc:
    // 0x28f3fc: 0x151080  sll         $v0, $s5, 2
    ctx->pc = 0x28f3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_28f400:
    // 0x28f400: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x28f400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_28f404:
    // 0x28f404: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x28f404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_28f408:
    // 0x28f408: 0x8c560004  lw          $s6, 0x4($v0)
    ctx->pc = 0x28f408u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_28f40c:
    // 0x28f40c: 0xc0bdc7c  jal         func_2F71F0
label_28f410:
    if (ctx->pc == 0x28F410u) {
        ctx->pc = 0x28F410u;
            // 0x28f410: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28F414u;
        goto label_28f414;
    }
    ctx->pc = 0x28F40Cu;
    SET_GPR_U32(ctx, 31, 0x28F414u);
    ctx->pc = 0x28F410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F40Cu;
            // 0x28f410: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F71F0u;
    if (runtime->hasFunction(0x2F71F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F71F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F414u; }
        if (ctx->pc != 0x28F414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFloorInfoPtr__16CSaveDataDungeonFii_0x2f71f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F414u; }
        if (ctx->pc != 0x28F414u) { return; }
    }
    ctx->pc = 0x28F414u;
label_28f414:
    // 0x28f414: 0xaf828d88  sw          $v0, -0x7278($gp)
    ctx->pc = 0x28f414u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937992), GPR_U32(ctx, 2));
label_28f418:
    // 0x28f418: 0x26640014  addiu       $a0, $s3, 0x14
    ctx->pc = 0x28f418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
label_28f41c:
    // 0x28f41c: 0xc0be610  jal         func_2F9840
label_28f420:
    if (ctx->pc == 0x28F420u) {
        ctx->pc = 0x28F420u;
            // 0x28f420: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28F424u;
        goto label_28f424;
    }
    ctx->pc = 0x28F41Cu;
    SET_GPR_U32(ctx, 31, 0x28F424u);
    ctx->pc = 0x28F420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F41Cu;
            // 0x28f420: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9840u;
    if (runtime->hasFunction(0x2F9840u)) {
        auto targetFn = runtime->lookupFunction(0x2F9840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F424u; }
        if (ctx->pc != 0x28F424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsSealFloor__16CDngFloorManagerFi_0x2f9840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F424u; }
        if (ctx->pc != 0x28F424u) { return; }
    }
    ctx->pc = 0x28F424u;
label_28f424:
    // 0x28f424: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x28f424u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_28f428:
    // 0x28f428: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_28f42c:
    if (ctx->pc == 0x28F42Cu) {
        ctx->pc = 0x28F42Cu;
            // 0x28f42c: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->pc = 0x28F430u;
        goto label_28f430;
    }
    ctx->pc = 0x28F428u;
    {
        const bool branch_taken_0x28f428 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F428u;
            // 0x28f42c: 0x2443ffff  addiu       $v1, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f428) {
            ctx->pc = 0x28F448u;
            goto label_28f448;
        }
    }
    ctx->pc = 0x28F430u;
label_28f430:
    // 0x28f430: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28f434:
    // 0x28f434: 0x621804  sllv        $v1, $v0, $v1
    ctx->pc = 0x28f434u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 3) & 0x1F));
label_28f438:
    // 0x28f438: 0x9662000c  lhu         $v0, 0xC($s3)
    ctx->pc = 0x28f438u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 12)));
label_28f43c:
    // 0x28f43c: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x28f43cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_28f440:
    // 0x28f440: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x28f440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_28f444:
    // 0x28f444: 0xa662000c  sh          $v0, 0xC($s3)
    ctx->pc = 0x28f444u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 12), (uint16_t)GPR_U32(ctx, 2));
label_28f448:
    // 0x28f448: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x28f448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_28f44c:
    // 0x28f44c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x28f44cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
label_28f450:
    // 0x28f450: 0x1280000e  beqz        $s4, . + 4 + (0xE << 2)
label_28f454:
    if (ctx->pc == 0x28F454u) {
        ctx->pc = 0x28F454u;
            // 0x28f454: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x28F458u;
        goto label_28f458;
    }
    ctx->pc = 0x28F450u;
    {
        const bool branch_taken_0x28f450 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F450u;
            // 0x28f454: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f450) {
            ctx->pc = 0x28F48Cu;
            goto label_28f48c;
        }
    }
    ctx->pc = 0x28F458u;
label_28f458:
    // 0x28f458: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x28f458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_28f45c:
    // 0x28f45c: 0x2402feff  addiu       $v0, $zero, -0x101
    ctx->pc = 0x28f45cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_28f460:
    // 0x28f460: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x28f460u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_28f464:
    // 0x28f464: 0xc0683a8  jal         func_1A0EA0
label_28f468:
    if (ctx->pc == 0x28F468u) {
        ctx->pc = 0x28F468u;
            // 0x28f468: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x28F46Cu;
        goto label_28f46c;
    }
    ctx->pc = 0x28F464u;
    SET_GPR_U32(ctx, 31, 0x28F46Cu);
    ctx->pc = 0x28F468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F464u;
            // 0x28f468: 0xae620008  sw          $v0, 0x8($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F46Cu; }
        if (ctx->pc != 0x28F46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F46Cu; }
        if (ctx->pc != 0x28F46Cu) { return; }
    }
    ctx->pc = 0x28F46Cu;
label_28f46c:
    // 0x28f46c: 0xc067c94  jal         func_19F250
label_28f470:
    if (ctx->pc == 0x28F470u) {
        ctx->pc = 0x28F470u;
            // 0x28f470: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28F474u;
        goto label_28f474;
    }
    ctx->pc = 0x28F46Cu;
    SET_GPR_U32(ctx, 31, 0x28F474u);
    ctx->pc = 0x28F470u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F46Cu;
            // 0x28f470: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F250u;
    if (runtime->hasFunction(0x19F250u)) {
        auto targetFn = runtime->lookupFunction(0x19F250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F474u; }
        if (ctx->pc != 0x28F474u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowNPC__16CBattleCharaInfoFv_0x19f250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F474u; }
        if (ctx->pc != 0x28F474u) { return; }
    }
    ctx->pc = 0x28F474u;
label_28f474:
    // 0x28f474: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x28f474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_28f478:
    // 0x28f478: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_28f47c:
    if (ctx->pc == 0x28F47Cu) {
        ctx->pc = 0x28F480u;
        goto label_28f480;
    }
    ctx->pc = 0x28F478u;
    {
        const bool branch_taken_0x28f478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x28f478) {
            ctx->pc = 0x28F48Cu;
            goto label_28f48c;
        }
    }
    ctx->pc = 0x28F480u;
label_28f480:
    // 0x28f480: 0x8e620064  lw          $v0, 0x64($s3)
    ctx->pc = 0x28f480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 100)));
label_28f484:
    // 0x28f484: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x28f484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_28f488:
    // 0x28f488: 0xae620064  sw          $v0, 0x64($s3)
    ctx->pc = 0x28f488u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 100), GPR_U32(ctx, 2));
label_28f48c:
    // 0x28f48c: 0xc0a9fc0  jal         func_2A7F00
label_28f490:
    if (ctx->pc == 0x28F490u) {
        ctx->pc = 0x28F490u;
            // 0x28f490: 0x8f848dac  lw          $a0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->pc = 0x28F494u;
        goto label_28f494;
    }
    ctx->pc = 0x28F48Cu;
    SET_GPR_U32(ctx, 31, 0x28F494u);
    ctx->pc = 0x28F490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F48Cu;
            // 0x28f490: 0x8f848dac  lw          $a0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A7F00u;
    if (runtime->hasFunction(0x2A7F00u)) {
        auto targetFn = runtime->lookupFunction(0x2A7F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F494u; }
        if (ctx->pc != 0x28F494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopSeSrc__6CSceneFv_0x2a7f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F494u; }
        if (ctx->pc != 0x28F494u) { return; }
    }
    ctx->pc = 0x28F494u;
label_28f494:
    // 0x28f494: 0xc0635f0  jal         func_18D7C0
label_28f498:
    if (ctx->pc == 0x28F498u) {
        ctx->pc = 0x28F498u;
            // 0x28f498: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x28F49Cu;
        goto label_28f49c;
    }
    ctx->pc = 0x28F494u;
    SET_GPR_U32(ctx, 31, 0x28F49Cu);
    ctx->pc = 0x28F498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F494u;
            // 0x28f498: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D7C0u;
    if (runtime->hasFunction(0x18D7C0u)) {
        auto targetFn = runtime->lookupFunction(0x18D7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F49Cu; }
        if (ctx->pc != 0x28F49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSeAllStop__Fi_0x18d7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F49Cu; }
        if (ctx->pc != 0x28F49Cu) { return; }
    }
    ctx->pc = 0x28F49Cu;
label_28f49c:
    // 0x28f49c: 0xc0633f8  jal         func_18CFE0
label_28f4a0:
    if (ctx->pc == 0x28F4A0u) {
        ctx->pc = 0x28F4A0u;
            // 0x28f4a0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x28F4A4u;
        goto label_28f4a4;
    }
    ctx->pc = 0x28F49Cu;
    SET_GPR_U32(ctx, 31, 0x28F4A4u);
    ctx->pc = 0x28F4A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F49Cu;
            // 0x28f4a0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CFE0u;
    if (runtime->hasFunction(0x18CFE0u)) {
        auto targetFn = runtime->lookupFunction(0x18CFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F4A4u; }
        if (ctx->pc != 0x28F4A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndStopVoice__Fi_0x18cfe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F4A4u; }
        if (ctx->pc != 0x28F4A4u) { return; }
    }
    ctx->pc = 0x28F4A4u;
label_28f4a4:
    // 0x28f4a4: 0xc0b49fc  jal         func_2D27F0
label_28f4a8:
    if (ctx->pc == 0x28F4A8u) {
        ctx->pc = 0x28F4A8u;
            // 0x28f4a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28F4ACu;
        goto label_28f4ac;
    }
    ctx->pc = 0x28F4A4u;
    SET_GPR_U32(ctx, 31, 0x28F4ACu);
    ctx->pc = 0x28F4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F4A4u;
            // 0x28f4a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27F0u;
    if (runtime->hasFunction(0x2D27F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F4ACu; }
        if (ctx->pc != 0x28F4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapNo__FPc_0x2d27f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F4ACu; }
        if (ctx->pc != 0x28F4ACu) { return; }
    }
    ctx->pc = 0x28F4ACu;
label_28f4ac:
    // 0x28f4ac: 0xc0b49dc  jal         func_2D2770
label_28f4b0:
    if (ctx->pc == 0x28F4B0u) {
        ctx->pc = 0x28F4B0u;
            // 0x28f4b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28F4B4u;
        goto label_28f4b4;
    }
    ctx->pc = 0x28F4ACu;
    SET_GPR_U32(ctx, 31, 0x28F4B4u);
    ctx->pc = 0x28F4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F4ACu;
            // 0x28f4b0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2770u;
    if (runtime->hasFunction(0x2D2770u)) {
        auto targetFn = runtime->lookupFunction(0x2D2770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F4B4u; }
        if (ctx->pc != 0x28F4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapSndDataID__Fi_0x2d2770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F4B4u; }
        if (ctx->pc != 0x28F4B4u) { return; }
    }
    ctx->pc = 0x28F4B4u;
label_28f4b4:
    // 0x28f4b4: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x28f4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_28f4b8:
    // 0x28f4b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28f4b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28f4bc:
    // 0x28f4bc: 0x8f868d74  lw          $a2, -0x728C($gp)
    ctx->pc = 0x28f4bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_28f4c0:
    // 0x28f4c0: 0xc0a9b5c  jal         func_2A6D70
label_28f4c4:
    if (ctx->pc == 0x28F4C4u) {
        ctx->pc = 0x28F4C4u;
            // 0x28f4c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28F4C8u;
        goto label_28f4c8;
    }
    ctx->pc = 0x28F4C0u;
    SET_GPR_U32(ctx, 31, 0x28F4C8u);
    ctx->pc = 0x28F4C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F4C0u;
            // 0x28f4c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6D70u;
    if (runtime->hasFunction(0x2A6D70u)) {
        auto targetFn = runtime->lookupFunction(0x2A6D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F4C8u; }
        if (ctx->pc != 0x28F4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSound__6CSceneFiP1_0x2a6d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F4C8u; }
        if (ctx->pc != 0x28F4C8u) { return; }
    }
    ctx->pc = 0x28F4C8u;
label_28f4c8:
    // 0x28f4c8: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x28f4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_28f4cc:
    // 0x28f4cc: 0x3401906c  ori         $at, $zero, 0x906C
    ctx->pc = 0x28f4ccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36972);
label_28f4d0:
    // 0x28f4d0: 0x811821  addu        $v1, $a0, $at
    ctx->pc = 0x28f4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_28f4d4:
    // 0x28f4d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x28f4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_28f4d8:
    // 0x28f4d8: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
label_28f4dc:
    if (ctx->pc == 0x28F4DCu) {
        ctx->pc = 0x28F4DCu;
            // 0x28f4dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28F4E0u;
        goto label_28f4e0;
    }
    ctx->pc = 0x28F4D8u;
    {
        const bool branch_taken_0x28f4d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F4D8u;
            // 0x28f4dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f4d8) {
            ctx->pc = 0x28F5C0u;
            goto label_28f5c0;
        }
    }
    ctx->pc = 0x28F4E0u;
label_28f4e0:
    // 0x28f4e0: 0xc0a9b30  jal         func_2A6CC0
label_28f4e4:
    if (ctx->pc == 0x28F4E4u) {
        ctx->pc = 0x28F4E8u;
        goto label_28f4e8;
    }
    ctx->pc = 0x28F4E0u;
    SET_GPR_U32(ctx, 31, 0x28F4E8u);
    ctx->pc = 0x2A6CC0u;
    if (runtime->hasFunction(0x2A6CC0u)) {
        auto targetFn = runtime->lookupFunction(0x2A6CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F4E8u; }
        if (ctx->pc != 0x28F4E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDefBgmNo__6CSceneFi_0x2a6cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F4E8u; }
        if (ctx->pc != 0x28F4E8u) { return; }
    }
    ctx->pc = 0x28F4E8u;
label_28f4e8:
    // 0x28f4e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28f4e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28f4ec:
    // 0x28f4ec: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x28f4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28f4f0:
    // 0x28f4f0: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
label_28f4f4:
    if (ctx->pc == 0x28F4F4u) {
        ctx->pc = 0x28F4F8u;
        goto label_28f4f8;
    }
    ctx->pc = 0x28F4F0u;
    {
        const bool branch_taken_0x28f4f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x28f4f0) {
            ctx->pc = 0x28F504u;
            goto label_28f504;
        }
    }
    ctx->pc = 0x28F4F8u;
label_28f4f8:
    // 0x28f4f8: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x28f4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_28f4fc:
    // 0x28f4fc: 0xc0a98a0  jal         func_2A6280
label_28f500:
    if (ctx->pc == 0x28F500u) {
        ctx->pc = 0x28F500u;
            // 0x28f500: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28F504u;
        goto label_28f504;
    }
    ctx->pc = 0x28F4FCu;
    SET_GPR_U32(ctx, 31, 0x28F504u);
    ctx->pc = 0x28F500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F4FCu;
            // 0x28f500: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6280u;
    if (runtime->hasFunction(0x2A6280u)) {
        auto targetFn = runtime->lookupFunction(0x2A6280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F504u; }
        if (ctx->pc != 0x28F504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopBGM__6CSceneFi_0x2a6280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F504u; }
        if (ctx->pc != 0x28F504u) { return; }
    }
    ctx->pc = 0x28F504u;
label_28f504:
    // 0x28f504: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x28f504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_28f508:
    // 0x28f508: 0xc0a9ac4  jal         func_2A6B10
label_28f50c:
    if (ctx->pc == 0x28F50Cu) {
        ctx->pc = 0x28F50Cu;
            // 0x28f50c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28F510u;
        goto label_28f510;
    }
    ctx->pc = 0x28F508u;
    SET_GPR_U32(ctx, 31, 0x28F510u);
    ctx->pc = 0x28F50Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F508u;
            // 0x28f50c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6B10u;
    if (runtime->hasFunction(0x2A6B10u)) {
        auto targetFn = runtime->lookupFunction(0x2A6B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F510u; }
        if (ctx->pc != 0x28F510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLoadBGM__6CSceneFi_0x2a6b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F510u; }
        if (ctx->pc != 0x28F510u) { return; }
    }
    ctx->pc = 0x28F510u;
label_28f510:
    // 0x28f510: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_28f514:
    if (ctx->pc == 0x28F514u) {
        ctx->pc = 0x28F514u;
            // 0x28f514: 0x2402270f  addiu       $v0, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->pc = 0x28F518u;
        goto label_28f518;
    }
    ctx->pc = 0x28F510u;
    {
        const bool branch_taken_0x28f510 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F510u;
            // 0x28f514: 0x2402270f  addiu       $v0, $zero, 0x270F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9999));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f510) {
            ctx->pc = 0x28F520u;
            goto label_28f520;
        }
    }
    ctx->pc = 0x28F518u;
label_28f518:
    // 0x28f518: 0x16020009  bne         $s0, $v0, . + 4 + (0x9 << 2)
label_28f51c:
    if (ctx->pc == 0x28F51Cu) {
        ctx->pc = 0x28F520u;
        goto label_28f520;
    }
    ctx->pc = 0x28F518u;
    {
        const bool branch_taken_0x28f518 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x28f518) {
            ctx->pc = 0x28F540u;
            goto label_28f540;
        }
    }
    ctx->pc = 0x28F520u;
label_28f520:
    // 0x28f520: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x28f520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_28f524:
    // 0x28f524: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28f524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_28f528:
    // 0x28f528: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x28f528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28f52c:
    // 0x28f52c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28f52cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f530:
    // 0x28f530: 0xc0a9844  jal         func_2A6110
label_28f534:
    if (ctx->pc == 0x28F534u) {
        ctx->pc = 0x28F534u;
            // 0x28f534: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x28F538u;
        goto label_28f538;
    }
    ctx->pc = 0x28F530u;
    SET_GPR_U32(ctx, 31, 0x28F538u);
    ctx->pc = 0x28F534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F530u;
            // 0x28f534: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6110u;
    if (runtime->hasFunction(0x2A6110u)) {
        auto targetFn = runtime->lookupFunction(0x2A6110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F538u; }
        if (ctx->pc != 0x28F538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayBGM__6CSceneFiif_0x2a6110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F538u; }
        if (ctx->pc != 0x28F538u) { return; }
    }
    ctx->pc = 0x28F538u;
label_28f538:
    // 0x28f538: 0x10000023  b           . + 4 + (0x23 << 2)
label_28f53c:
    if (ctx->pc == 0x28F53Cu) {
        ctx->pc = 0x28F53Cu;
            // 0x28f53c: 0x26640024  addiu       $a0, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->pc = 0x28F540u;
        goto label_28f540;
    }
    ctx->pc = 0x28F538u;
    {
        const bool branch_taken_0x28f538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F538u;
            // 0x28f53c: 0x26640024  addiu       $a0, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f538) {
            ctx->pc = 0x28F5C8u;
            goto label_28f5c8;
        }
    }
    ctx->pc = 0x28F540u;
label_28f540:
    // 0x28f540: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x28f540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_28f544:
    // 0x28f544: 0xc0a98a0  jal         func_2A6280
label_28f548:
    if (ctx->pc == 0x28F548u) {
        ctx->pc = 0x28F548u;
            // 0x28f548: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28F54Cu;
        goto label_28f54c;
    }
    ctx->pc = 0x28F544u;
    SET_GPR_U32(ctx, 31, 0x28F54Cu);
    ctx->pc = 0x28F548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F544u;
            // 0x28f548: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6280u;
    if (runtime->hasFunction(0x2A6280u)) {
        auto targetFn = runtime->lookupFunction(0x2A6280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F54Cu; }
        if (ctx->pc != 0x28F54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopBGM__6CSceneFi_0x2a6280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F54Cu; }
        if (ctx->pc != 0x28F54Cu) { return; }
    }
    ctx->pc = 0x28F54Cu;
label_28f54c:
    // 0x28f54c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x28f54cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_28f550:
    // 0x28f550: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x28f550u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28f554:
    // 0x28f554: 0xc063594  jal         func_18D650
label_28f558:
    if (ctx->pc == 0x28F558u) {
        ctx->pc = 0x28F55Cu;
        goto label_28f55c;
    }
    ctx->pc = 0x28F554u;
    SET_GPR_U32(ctx, 31, 0x28F55Cu);
    ctx->pc = 0x18D650u;
    if (runtime->hasFunction(0x18D650u)) {
        auto targetFn = runtime->lookupFunction(0x18D650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F55Cu; }
        if (ctx->pc != 0x28F55Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndStep__Ff_0x18d650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F55Cu; }
        if (ctx->pc != 0x28F55Cu) { return; }
    }
    ctx->pc = 0x28F55Cu;
label_28f55c:
    // 0x28f55c: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x28f55cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_28f560:
    // 0x28f560: 0x8f868d74  lw          $a2, -0x728C($gp)
    ctx->pc = 0x28f560u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_28f564:
    // 0x28f564: 0xc0a9be4  jal         func_2A6F90
label_28f568:
    if (ctx->pc == 0x28F568u) {
        ctx->pc = 0x28F568u;
            // 0x28f568: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28F56Cu;
        goto label_28f56c;
    }
    ctx->pc = 0x28F564u;
    SET_GPR_U32(ctx, 31, 0x28F56Cu);
    ctx->pc = 0x28F568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F564u;
            // 0x28f568: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6F90u;
    if (runtime->hasFunction(0x2A6F90u)) {
        auto targetFn = runtime->lookupFunction(0x2A6F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F56Cu; }
        if (ctx->pc != 0x28F56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadBGM__6CSceneFiP1_0x2a6f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F56Cu; }
        if (ctx->pc != 0x28F56Cu) { return; }
    }
    ctx->pc = 0x28F56Cu;
label_28f56c:
    // 0x28f56c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_28f570:
    if (ctx->pc == 0x28F570u) {
        ctx->pc = 0x28F574u;
        goto label_28f574;
    }
    ctx->pc = 0x28F56Cu;
    {
        const bool branch_taken_0x28f56c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f56c) {
            ctx->pc = 0x28F5C4u;
            goto label_28f5c4;
        }
    }
    ctx->pc = 0x28F574u;
label_28f574:
    // 0x28f574: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x28f574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_28f578:
    // 0x28f578: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x28f578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_28f57c:
    // 0x28f57c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x28f57cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28f580:
    // 0x28f580: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28f580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f584:
    // 0x28f584: 0xc0a9844  jal         func_2A6110
label_28f588:
    if (ctx->pc == 0x28F588u) {
        ctx->pc = 0x28F588u;
            // 0x28f588: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x28F58Cu;
        goto label_28f58c;
    }
    ctx->pc = 0x28F584u;
    SET_GPR_U32(ctx, 31, 0x28F58Cu);
    ctx->pc = 0x28F588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F584u;
            // 0x28f588: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6110u;
    if (runtime->hasFunction(0x2A6110u)) {
        auto targetFn = runtime->lookupFunction(0x2A6110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F58Cu; }
        if (ctx->pc != 0x28F58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayBGM__6CSceneFiif_0x2a6110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F58Cu; }
        if (ctx->pc != 0x28F58Cu) { return; }
    }
    ctx->pc = 0x28F58Cu;
label_28f58c:
    // 0x28f58c: 0x1600000d  bnez        $s0, . + 4 + (0xD << 2)
label_28f590:
    if (ctx->pc == 0x28F590u) {
        ctx->pc = 0x28F594u;
        goto label_28f594;
    }
    ctx->pc = 0x28F58Cu;
    {
        const bool branch_taken_0x28f58c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f58c) {
            ctx->pc = 0x28F5C4u;
            goto label_28f5c4;
        }
    }
    ctx->pc = 0x28F594u;
label_28f594:
    // 0x28f594: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x28f594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_28f598:
    // 0x28f598: 0xc0a9938  jal         func_2A64E0
label_28f59c:
    if (ctx->pc == 0x28F59Cu) {
        ctx->pc = 0x28F59Cu;
            // 0x28f59c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x28F5A0u;
        goto label_28f5a0;
    }
    ctx->pc = 0x28F598u;
    SET_GPR_U32(ctx, 31, 0x28F5A0u);
    ctx->pc = 0x28F59Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F598u;
            // 0x28f59c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A64E0u;
    if (runtime->hasFunction(0x2A64E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A64E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F5A0u; }
        if (ctx->pc != 0x28F5A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AutoChangeBGMVol__6CSceneFi_0x2a64e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F5A0u; }
        if (ctx->pc != 0x28F5A0u) { return; }
    }
    ctx->pc = 0x28F5A0u;
label_28f5a0:
    // 0x28f5a0: 0xc0a9e50  jal         func_2A7940
label_28f5a4:
    if (ctx->pc == 0x28F5A4u) {
        ctx->pc = 0x28F5A4u;
            // 0x28f5a4: 0x8f848dac  lw          $a0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->pc = 0x28F5A8u;
        goto label_28f5a8;
    }
    ctx->pc = 0x28F5A0u;
    SET_GPR_U32(ctx, 31, 0x28F5A8u);
    ctx->pc = 0x28F5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F5A0u;
            // 0x28f5a4: 0x8f848dac  lw          $a0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A7940u;
    if (runtime->hasFunction(0x2A7940u)) {
        auto targetFn = runtime->lookupFunction(0x2A7940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F5A8u; }
        if (ctx->pc != 0x28F5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepSnd__6CSceneFv_0x2a7940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F5A8u; }
        if (ctx->pc != 0x28F5A8u) { return; }
    }
    ctx->pc = 0x28F5A8u;
label_28f5a8:
    // 0x28f5a8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x28f5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_28f5ac:
    // 0x28f5ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x28f5acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_28f5b0:
    // 0x28f5b0: 0xc063594  jal         func_18D650
label_28f5b4:
    if (ctx->pc == 0x28F5B4u) {
        ctx->pc = 0x28F5B8u;
        goto label_28f5b8;
    }
    ctx->pc = 0x28F5B0u;
    SET_GPR_U32(ctx, 31, 0x28F5B8u);
    ctx->pc = 0x18D650u;
    if (runtime->hasFunction(0x18D650u)) {
        auto targetFn = runtime->lookupFunction(0x18D650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F5B8u; }
        if (ctx->pc != 0x28F5B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndStep__Ff_0x18d650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F5B8u; }
        if (ctx->pc != 0x28F5B8u) { return; }
    }
    ctx->pc = 0x28F5B8u;
label_28f5b8:
    // 0x28f5b8: 0x10000002  b           . + 4 + (0x2 << 2)
label_28f5bc:
    if (ctx->pc == 0x28F5BCu) {
        ctx->pc = 0x28F5C0u;
        goto label_28f5c0;
    }
    ctx->pc = 0x28F5B8u;
    {
        const bool branch_taken_0x28f5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f5b8) {
            ctx->pc = 0x28F5C4u;
            goto label_28f5c4;
        }
    }
    ctx->pc = 0x28F5C0u;
label_28f5c0:
    // 0x28f5c0: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x28f5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_28f5c4:
    // 0x28f5c4: 0x26640024  addiu       $a0, $s3, 0x24
    ctx->pc = 0x28f5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
label_28f5c8:
    // 0x28f5c8: 0xc04a38a  jal         func_128E28
label_28f5cc:
    if (ctx->pc == 0x28F5CCu) {
        ctx->pc = 0x28F5CCu;
            // 0x28f5cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28F5D0u;
        goto label_28f5d0;
    }
    ctx->pc = 0x28F5C8u;
    SET_GPR_U32(ctx, 31, 0x28F5D0u);
    ctx->pc = 0x28F5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F5C8u;
            // 0x28f5cc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F5D0u; }
        if (ctx->pc != 0x28F5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F5D0u; }
        if (ctx->pc != 0x28F5D0u) { return; }
    }
    ctx->pc = 0x28F5D0u;
label_28f5d0:
    // 0x28f5d0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_28f5d4:
    if (ctx->pc == 0x28F5D4u) {
        ctx->pc = 0x28F5D4u;
            // 0x28f5d4: 0x26640024  addiu       $a0, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->pc = 0x28F5D8u;
        goto label_28f5d8;
    }
    ctx->pc = 0x28F5D0u;
    {
        const bool branch_taken_0x28f5d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F5D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F5D0u;
            // 0x28f5d4: 0x26640024  addiu       $a0, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f5d0) {
            ctx->pc = 0x28F5E0u;
            goto label_28f5e0;
        }
    }
    ctx->pc = 0x28F5D8u;
label_28f5d8:
    // 0x28f5d8: 0x10000004  b           . + 4 + (0x4 << 2)
label_28f5dc:
    if (ctx->pc == 0x28F5DCu) {
        ctx->pc = 0x28F5DCu;
            // 0x28f5dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28F5E0u;
        goto label_28f5e0;
    }
    ctx->pc = 0x28F5D8u;
    {
        const bool branch_taken_0x28f5d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F5DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F5D8u;
            // 0x28f5dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f5d8) {
            ctx->pc = 0x28F5ECu;
            goto label_28f5ec;
        }
    }
    ctx->pc = 0x28F5E0u;
label_28f5e0:
    // 0x28f5e0: 0xc04a3dc  jal         func_128F70
label_28f5e4:
    if (ctx->pc == 0x28F5E4u) {
        ctx->pc = 0x28F5E4u;
            // 0x28f5e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28F5E8u;
        goto label_28f5e8;
    }
    ctx->pc = 0x28F5E0u;
    SET_GPR_U32(ctx, 31, 0x28F5E8u);
    ctx->pc = 0x28F5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F5E0u;
            // 0x28f5e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F5E8u; }
        if (ctx->pc != 0x28F5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F5E8u; }
        if (ctx->pc != 0x28F5E8u) { return; }
    }
    ctx->pc = 0x28F5E8u;
label_28f5e8:
    // 0x28f5e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28f5ec:
    // 0x28f5ec: 0x104000e1  beqz        $v0, . + 4 + (0xE1 << 2)
label_28f5f0:
    if (ctx->pc == 0x28F5F0u) {
        ctx->pc = 0x28F5F4u;
        goto label_28f5f4;
    }
    ctx->pc = 0x28F5ECu;
    {
        const bool branch_taken_0x28f5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f5ec) {
            ctx->pc = 0x28F974u;
            goto label_28f974;
        }
    }
    ctx->pc = 0x28F5F4u;
label_28f5f4:
    // 0x28f5f4: 0xc0b49fc  jal         func_2D27F0
label_28f5f8:
    if (ctx->pc == 0x28F5F8u) {
        ctx->pc = 0x28F5F8u;
            // 0x28f5f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28F5FCu;
        goto label_28f5fc;
    }
    ctx->pc = 0x28F5F4u;
    SET_GPR_U32(ctx, 31, 0x28F5FCu);
    ctx->pc = 0x28F5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F5F4u;
            // 0x28f5f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27F0u;
    if (runtime->hasFunction(0x2D27F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F5FCu; }
        if (ctx->pc != 0x28F5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapNo__FPc_0x2d27f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F5FCu; }
        if (ctx->pc != 0x28F5FCu) { return; }
    }
    ctx->pc = 0x28F5FCu;
label_28f5fc:
    // 0x28f5fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28f5fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28f600:
    // 0x28f600: 0x6010006  bgez        $s0, . + 4 + (0x6 << 2)
label_28f604:
    if (ctx->pc == 0x28F604u) {
        ctx->pc = 0x28F604u;
            // 0x28f604: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x28F608u;
        goto label_28f608;
    }
    ctx->pc = 0x28F600u;
    {
        const bool branch_taken_0x28f600 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x28F604u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F600u;
            // 0x28f604: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f600) {
            ctx->pc = 0x28F61Cu;
            goto label_28f61c;
        }
    }
    ctx->pc = 0x28F608u;
label_28f608:
    // 0x28f608: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x28f608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_28f60c:
    // 0x28f60c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28f60cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28f610:
    // 0x28f610: 0xc04a0d2  jal         func_128348
label_28f614:
    if (ctx->pc == 0x28F614u) {
        ctx->pc = 0x28F614u;
            // 0x28f614: 0x2484d7e0  addiu       $a0, $a0, -0x2820 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957024));
        ctx->pc = 0x28F618u;
        goto label_28f618;
    }
    ctx->pc = 0x28F610u;
    SET_GPR_U32(ctx, 31, 0x28F618u);
    ctx->pc = 0x28F614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F610u;
            // 0x28f614: 0x2484d7e0  addiu       $a0, $a0, -0x2820 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F618u; }
        if (ctx->pc != 0x28F618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F618u; }
        if (ctx->pc != 0x28F618u) { return; }
    }
    ctx->pc = 0x28F618u;
label_28f618:
    // 0x28f618: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x28f618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_28f61c:
    // 0x28f61c: 0xc0a1454  jal         func_285150
label_28f620:
    if (ctx->pc == 0x28F620u) {
        ctx->pc = 0x28F624u;
        goto label_28f624;
    }
    ctx->pc = 0x28F61Cu;
    SET_GPR_U32(ctx, 31, 0x28F624u);
    ctx->pc = 0x285150u;
    if (runtime->hasFunction(0x285150u)) {
        auto targetFn = runtime->lookupFunction(0x285150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F624u; }
        if (ctx->pc != 0x28F624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__17SCN_LOADMAP_INFO2Fv_0x285150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F624u; }
        if (ctx->pc != 0x28F624u) { return; }
    }
    ctx->pc = 0x28F624u;
label_28f624:
    // 0x28f624: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x28f624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_28f628:
    // 0x28f628: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x28f628u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_28f62c:
    // 0x28f62c: 0xac2052c0  sw          $zero, 0x52C0($at)
    ctx->pc = 0x28f62cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 21184), GPR_U32(ctx, 0));
label_28f630:
    // 0x28f630: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28f634:
    // 0x28f634: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x28f634u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_28f638:
    // 0x28f638: 0x248452c0  addiu       $a0, $a0, 0x52C0
    ctx->pc = 0x28f638u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 21184));
label_28f63c:
    // 0x28f63c: 0xac2252c8  sw          $v0, 0x52C8($at)
    ctx->pc = 0x28f63cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 21192), GPR_U32(ctx, 2));
label_28f640:
    // 0x28f640: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x28f640u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_28f644:
    // 0x28f644: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x28f644u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_28f648:
    // 0x28f648: 0xac2252cc  sw          $v0, 0x52CC($at)
    ctx->pc = 0x28f648u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 21196), GPR_U32(ctx, 2));
label_28f64c:
    // 0x28f64c: 0x8f828d74  lw          $v0, -0x728C($gp)
    ctx->pc = 0x28f64cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_28f650:
    // 0x28f650: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x28f650u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_28f654:
    // 0x28f654: 0xac2052c4  sw          $zero, 0x52C4($at)
    ctx->pc = 0x28f654u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 21188), GPR_U32(ctx, 0));
label_28f658:
    // 0x28f658: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x28f658u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_28f65c:
    // 0x28f65c: 0xc0b7b1c  jal         func_2DEC70
label_28f660:
    if (ctx->pc == 0x28F660u) {
        ctx->pc = 0x28F660u;
            // 0x28f660: 0xac2252d4  sw          $v0, 0x52D4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 21204), GPR_U32(ctx, 2));
        ctx->pc = 0x28F664u;
        goto label_28f664;
    }
    ctx->pc = 0x28F65Cu;
    SET_GPR_U32(ctx, 31, 0x28F664u);
    ctx->pc = 0x28F660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F65Cu;
            // 0x28f660: 0xac2252d4  sw          $v0, 0x52D4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 21204), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DEC70u;
    if (runtime->hasFunction(0x2DEC70u)) {
        auto targetFn = runtime->lookupFunction(0x2DEC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F664u; }
        if (ctx->pc != 0x28F664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMainMapInfo__FP14MapJumpMapInfo_0x2dec70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F664u; }
        if (ctx->pc != 0x28F664u) { return; }
    }
    ctx->pc = 0x28F664u;
label_28f664:
    // 0x28f664: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x28f664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_28f668:
    // 0x28f668: 0xc0b7bd0  jal         func_2DEF40
label_28f66c:
    if (ctx->pc == 0x28F66Cu) {
        ctx->pc = 0x28F66Cu;
            // 0x28f66c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28F670u;
        goto label_28f670;
    }
    ctx->pc = 0x28F668u;
    SET_GPR_U32(ctx, 31, 0x28F670u);
    ctx->pc = 0x28F66Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F668u;
            // 0x28f66c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DEF40u;
    if (runtime->hasFunction(0x2DEF40u)) {
        auto targetFn = runtime->lookupFunction(0x2DEF40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F670u; }
        if (ctx->pc != 0x28F670u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLoadMapInfo__FP17SCN_LOADMAP_INFO2i_0x2def40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F670u; }
        if (ctx->pc != 0x28F670u) { return; }
    }
    ctx->pc = 0x28F670u;
label_28f670:
    // 0x28f670: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x28f670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_28f674:
    // 0x28f674: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x28f674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_28f678:
    // 0x28f678: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x28f678u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_28f67c:
    // 0x28f67c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x28f67cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28f680:
    // 0x28f680: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x28f680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_28f684:
    // 0x28f684: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28f684u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f688:
    // 0x28f688: 0xafa20230  sw          $v0, 0x230($sp)
    ctx->pc = 0x28f688u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 2));
label_28f68c:
    // 0x28f68c: 0xc0a179c  jal         func_285E70
label_28f690:
    if (ctx->pc == 0x28F690u) {
        ctx->pc = 0x28F690u;
            // 0x28f690: 0xafa6022c  sw          $a2, 0x22C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 6));
        ctx->pc = 0x28F694u;
        goto label_28f694;
    }
    ctx->pc = 0x28F68Cu;
    SET_GPR_U32(ctx, 31, 0x28F694u);
    ctx->pc = 0x28F690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F68Cu;
            // 0x28f690: 0xafa6022c  sw          $a2, 0x22C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285E70u;
    if (runtime->hasFunction(0x285E70u)) {
        auto targetFn = runtime->lookupFunction(0x285E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F694u; }
        if (ctx->pc != 0x28F694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteMap__6CSceneFii_0x285e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F694u; }
        if (ctx->pc != 0x28F694u) { return; }
    }
    ctx->pc = 0x28F694u;
label_28f694:
    // 0x28f694: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x28f694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_28f698:
    // 0x28f698: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28f698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f69c:
    // 0x28f69c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x28f69cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_28f6a0:
    // 0x28f6a0: 0xc0a1738  jal         func_285CE0
label_28f6a4:
    if (ctx->pc == 0x28F6A4u) {
        ctx->pc = 0x28F6A4u;
            // 0x28f6a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28F6A8u;
        goto label_28f6a8;
    }
    ctx->pc = 0x28F6A0u;
    SET_GPR_U32(ctx, 31, 0x28F6A8u);
    ctx->pc = 0x28F6A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F6A0u;
            // 0x28f6a4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285CE0u;
    if (runtime->hasFunction(0x285CE0u)) {
        auto targetFn = runtime->lookupFunction(0x285CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F6A8u; }
        if (ctx->pc != 0x28F6A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadMap__6CSceneFiP17SCN_LOADMAP_INFO2i_0x285ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F6A8u; }
        if (ctx->pc != 0x28F6A8u) { return; }
    }
    ctx->pc = 0x28F6A8u;
label_28f6a8:
    // 0x28f6a8: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x28f6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_28f6ac:
    // 0x28f6ac: 0xc0a12d8  jal         func_284B60
label_28f6b0:
    if (ctx->pc == 0x28F6B0u) {
        ctx->pc = 0x28F6B0u;
            // 0x28f6b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28F6B4u;
        goto label_28f6b4;
    }
    ctx->pc = 0x28F6ACu;
    SET_GPR_U32(ctx, 31, 0x28F6B4u);
    ctx->pc = 0x28F6B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F6ACu;
            // 0x28f6b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284B60u;
    if (runtime->hasFunction(0x284B60u)) {
        auto targetFn = runtime->lookupFunction(0x284B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F6B4u; }
        if (ctx->pc != 0x28F6B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNowMapNo__6CSceneFi_0x284b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F6B4u; }
        if (ctx->pc != 0x28F6B4u) { return; }
    }
    ctx->pc = 0x28F6B4u;
label_28f6b4:
    // 0x28f6b4: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x28f6b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_28f6b8:
    // 0x28f6b8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x28f6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28f6bc:
    // 0x28f6bc: 0xc0a11b4  jal         func_2846D0
label_28f6c0:
    if (ctx->pc == 0x28F6C0u) {
        ctx->pc = 0x28F6C0u;
            // 0x28f6c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28F6C4u;
        goto label_28f6c4;
    }
    ctx->pc = 0x28F6BCu;
    SET_GPR_U32(ctx, 31, 0x28F6C4u);
    ctx->pc = 0x28F6C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F6BCu;
            // 0x28f6c0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2846D0u;
    if (runtime->hasFunction(0x2846D0u)) {
        auto targetFn = runtime->lookupFunction(0x2846D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F6C4u; }
        if (ctx->pc != 0x28F6C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActive__6CSceneFii_0x2846d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F6C4u; }
        if (ctx->pc != 0x28F6C4u) { return; }
    }
    ctx->pc = 0x28F6C4u;
label_28f6c4:
    // 0x28f6c4: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x28f6c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_28f6c8:
    // 0x28f6c8: 0xc0a0f58  jal         func_283D60
label_28f6cc:
    if (ctx->pc == 0x28F6CCu) {
        ctx->pc = 0x28F6CCu;
            // 0x28f6cc: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->pc = 0x28F6D0u;
        goto label_28f6d0;
    }
    ctx->pc = 0x28F6C8u;
    SET_GPR_U32(ctx, 31, 0x28F6D0u);
    ctx->pc = 0x28F6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F6C8u;
            // 0x28f6cc: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F6D0u; }
        if (ctx->pc != 0x28F6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F6D0u; }
        if (ctx->pc != 0x28F6D0u) { return; }
    }
    ctx->pc = 0x28F6D0u;
label_28f6d0:
    // 0x28f6d0: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x28f6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_28f6d4:
    // 0x28f6d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28f6d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28f6d8:
    // 0x28f6d8: 0xc0a0c64  jal         func_283190
label_28f6dc:
    if (ctx->pc == 0x28F6DCu) {
        ctx->pc = 0x28F6DCu;
            // 0x28f6dc: 0xaf828db4  sw          $v0, -0x724C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938036), GPR_U32(ctx, 2));
        ctx->pc = 0x28F6E0u;
        goto label_28f6e0;
    }
    ctx->pc = 0x28F6D8u;
    SET_GPR_U32(ctx, 31, 0x28F6E0u);
    ctx->pc = 0x28F6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F6D8u;
            // 0x28f6dc: 0xaf828db4  sw          $v0, -0x724C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938036), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F6E0u; }
        if (ctx->pc != 0x28F6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F6E0u; }
        if (ctx->pc != 0x28F6E0u) { return; }
    }
    ctx->pc = 0x28F6E0u;
label_28f6e0:
    // 0x28f6e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28f6e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28f6e4:
    // 0x28f6e4: 0x1200002b  beqz        $s0, . + 4 + (0x2B << 2)
label_28f6e8:
    if (ctx->pc == 0x28F6E8u) {
        ctx->pc = 0x28F6ECu;
        goto label_28f6ec;
    }
    ctx->pc = 0x28F6E4u;
    {
        const bool branch_taken_0x28f6e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f6e4) {
            ctx->pc = 0x28F794u;
            goto label_28f794;
        }
    }
    ctx->pc = 0x28F6ECu;
label_28f6ec:
    // 0x28f6ec: 0x12800029  beqz        $s4, . + 4 + (0x29 << 2)
label_28f6f0:
    if (ctx->pc == 0x28F6F0u) {
        ctx->pc = 0x28F6F4u;
        goto label_28f6f4;
    }
    ctx->pc = 0x28F6ECu;
    {
        const bool branch_taken_0x28f6ec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f6ec) {
            ctx->pc = 0x28F794u;
            goto label_28f794;
        }
    }
    ctx->pc = 0x28F6F4u;
label_28f6f4:
    // 0x28f6f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28f6f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28f6f8:
    // 0x28f6f8: 0xc04e780  jal         func_139E00
label_28f6fc:
    if (ctx->pc == 0x28F6FCu) {
        ctx->pc = 0x28F6FCu;
            // 0x28f6fc: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->pc = 0x28F700u;
        goto label_28f700;
    }
    ctx->pc = 0x28F6F8u;
    SET_GPR_U32(ctx, 31, 0x28F700u);
    ctx->pc = 0x28F6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F6F8u;
            // 0x28f6fc: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F700u; }
        if (ctx->pc != 0x28F700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F700u; }
        if (ctx->pc != 0x28F700u) { return; }
    }
    ctx->pc = 0x28F700u;
label_28f700:
    // 0x28f700: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28f700u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28f704:
    // 0x28f704: 0xc04e714  jal         func_139C50
label_28f708:
    if (ctx->pc == 0x28F708u) {
        ctx->pc = 0x28F708u;
            // 0x28f708: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x28F70Cu;
        goto label_28f70c;
    }
    ctx->pc = 0x28F704u;
    SET_GPR_U32(ctx, 31, 0x28F70Cu);
    ctx->pc = 0x28F708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F704u;
            // 0x28f708: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C50u;
    if (runtime->hasFunction(0x139C50u)) {
        auto targetFn = runtime->lookupFunction(0x139C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F70Cu; }
        if (ctx->pc != 0x28F70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAllocTest__9mgCMemoryFi_0x139c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F70Cu; }
        if (ctx->pc != 0x28F70Cu) { return; }
    }
    ctx->pc = 0x28F70Cu;
label_28f70c:
    // 0x28f70c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x28f70cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28f710:
    // 0x28f710: 0x12400020  beqz        $s2, . + 4 + (0x20 << 2)
label_28f714:
    if (ctx->pc == 0x28F714u) {
        ctx->pc = 0x28F718u;
        goto label_28f718;
    }
    ctx->pc = 0x28F710u;
    {
        const bool branch_taken_0x28f710 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f710) {
            ctx->pc = 0x28F794u;
            goto label_28f794;
        }
    }
    ctx->pc = 0x28F718u;
label_28f718:
    // 0x28f718: 0x3c170038  lui         $s7, 0x38
    ctx->pc = 0x28f718u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)56 << 16));
label_28f71c:
    // 0x28f71c: 0x24050066  addiu       $a1, $zero, 0x66
    ctx->pc = 0x28f71cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_28f720:
    // 0x28f720: 0x26f71ef0  addiu       $s7, $s7, 0x1EF0
    ctx->pc = 0x28f720u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 7920));
label_28f724:
    // 0x28f724: 0xc04b950  jal         func_12E540
label_28f728:
    if (ctx->pc == 0x28F728u) {
        ctx->pc = 0x28F728u;
            // 0x28f728: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28F72Cu;
        goto label_28f72c;
    }
    ctx->pc = 0x28F724u;
    SET_GPR_U32(ctx, 31, 0x28F72Cu);
    ctx->pc = 0x28F728u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F724u;
            // 0x28f728: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F72Cu; }
        if (ctx->pc != 0x28F72Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F72Cu; }
        if (ctx->pc != 0x28F72Cu) { return; }
    }
    ctx->pc = 0x28F72Cu;
label_28f72c:
    // 0x28f72c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x28f72cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_28f730:
    // 0x28f730: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x28f730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_28f734:
    // 0x28f734: 0x24a5d800  addiu       $a1, $a1, -0x2800
    ctx->pc = 0x28f734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957056));
label_28f738:
    // 0x28f738: 0xc04a234  jal         func_1288D0
label_28f73c:
    if (ctx->pc == 0x28F73Cu) {
        ctx->pc = 0x28F73Cu;
            // 0x28f73c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28F740u;
        goto label_28f740;
    }
    ctx->pc = 0x28F738u;
    SET_GPR_U32(ctx, 31, 0x28F740u);
    ctx->pc = 0x28F73Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F738u;
            // 0x28f73c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F740u; }
        if (ctx->pc != 0x28F740u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F740u; }
        if (ctx->pc != 0x28F740u) { return; }
    }
    ctx->pc = 0x28F740u;
label_28f740:
    // 0x28f740: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x28f740u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_28f744:
    // 0x28f744: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28f744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28f748:
    // 0x28f748: 0x27a60374  addiu       $a2, $sp, 0x374
    ctx->pc = 0x28f748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 884));
label_28f74c:
    // 0x28f74c: 0xc0524dc  jal         func_149370
label_28f750:
    if (ctx->pc == 0x28F750u) {
        ctx->pc = 0x28F750u;
            // 0x28f750: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28F754u;
        goto label_28f754;
    }
    ctx->pc = 0x28F74Cu;
    SET_GPR_U32(ctx, 31, 0x28F754u);
    ctx->pc = 0x28F750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F74Cu;
            // 0x28f750: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F754u; }
        if (ctx->pc != 0x28F754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F754u; }
        if (ctx->pc != 0x28F754u) { return; }
    }
    ctx->pc = 0x28F754u;
label_28f754:
    // 0x28f754: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_28f758:
    if (ctx->pc == 0x28F758u) {
        ctx->pc = 0x28F75Cu;
        goto label_28f75c;
    }
    ctx->pc = 0x28F754u;
    {
        const bool branch_taken_0x28f754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f754) {
            ctx->pc = 0x28F794u;
            goto label_28f794;
        }
    }
    ctx->pc = 0x28F75Cu;
label_28f75c:
    // 0x28f75c: 0x8fa30374  lw          $v1, 0x374($sp)
    ctx->pc = 0x28f75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 884)));
label_28f760:
    // 0x28f760: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_28f764:
    if (ctx->pc == 0x28F764u) {
        ctx->pc = 0x28F764u;
            // 0x28f764: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->pc = 0x28F768u;
        goto label_28f768;
    }
    ctx->pc = 0x28F760u;
    {
        const bool branch_taken_0x28f760 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x28F764u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F760u;
            // 0x28f764: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f760) {
            ctx->pc = 0x28F770u;
            goto label_28f770;
        }
    }
    ctx->pc = 0x28F768u;
label_28f768:
    // 0x28f768: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x28f768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_28f76c:
    // 0x28f76c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x28f76cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_28f770:
    // 0x28f770: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x28f770u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_28f774:
    // 0x28f774: 0xc04e748  jal         func_139D20
label_28f778:
    if (ctx->pc == 0x28F778u) {
        ctx->pc = 0x28F778u;
            // 0x28f778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28F77Cu;
        goto label_28f77c;
    }
    ctx->pc = 0x28F774u;
    SET_GPR_U32(ctx, 31, 0x28F77Cu);
    ctx->pc = 0x28F778u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F774u;
            // 0x28f778: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F77Cu; }
        if (ctx->pc != 0x28F77Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F77Cu; }
        if (ctx->pc != 0x28F77Cu) { return; }
    }
    ctx->pc = 0x28F77Cu;
label_28f77c:
    // 0x28f77c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x28f77cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_28f780:
    // 0x28f780: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x28f780u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_28f784:
    // 0x28f784: 0x24060066  addiu       $a2, $zero, 0x66
    ctx->pc = 0x28f784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_28f788:
    // 0x28f788: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x28f788u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28f78c:
    // 0x28f78c: 0xc04b6a4  jal         func_12DA90
label_28f790:
    if (ctx->pc == 0x28F790u) {
        ctx->pc = 0x28F790u;
            // 0x28f790: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28F794u;
        goto label_28f794;
    }
    ctx->pc = 0x28F78Cu;
    SET_GPR_U32(ctx, 31, 0x28F794u);
    ctx->pc = 0x28F790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F78Cu;
            // 0x28f790: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F794u; }
        if (ctx->pc != 0x28F794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F794u; }
        if (ctx->pc != 0x28F794u) { return; }
    }
    ctx->pc = 0x28F794u;
label_28f794:
    // 0x28f794: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x28f794u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_28f798:
    // 0x28f798: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x28f798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28f79c:
    // 0x28f79c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28f79cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28f7a0:
    // 0x28f7a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28f7a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28f7a4:
    // 0x28f7a4: 0xac22f710  sw          $v0, -0x8F0($at)
    ctx->pc = 0x28f7a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965008), GPR_U32(ctx, 2));
label_28f7a8:
    // 0x28f7a8: 0xc04a38a  jal         func_128E28
label_28f7ac:
    if (ctx->pc == 0x28F7ACu) {
        ctx->pc = 0x28F7ACu;
            // 0x28f7ac: 0x24a5d818  addiu       $a1, $a1, -0x27E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957080));
        ctx->pc = 0x28F7B0u;
        goto label_28f7b0;
    }
    ctx->pc = 0x28F7A8u;
    SET_GPR_U32(ctx, 31, 0x28F7B0u);
    ctx->pc = 0x28F7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F7A8u;
            // 0x28f7ac: 0x24a5d818  addiu       $a1, $a1, -0x27E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F7B0u; }
        if (ctx->pc != 0x28F7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F7B0u; }
        if (ctx->pc != 0x28F7B0u) { return; }
    }
    ctx->pc = 0x28F7B0u;
label_28f7b0:
    // 0x28f7b0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_28f7b4:
    if (ctx->pc == 0x28F7B4u) {
        ctx->pc = 0x28F7B4u;
            // 0x28f7b4: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x28F7B8u;
        goto label_28f7b8;
    }
    ctx->pc = 0x28F7B0u;
    {
        const bool branch_taken_0x28f7b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F7B0u;
            // 0x28f7b4: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f7b0) {
            ctx->pc = 0x28F7C0u;
            goto label_28f7c0;
        }
    }
    ctx->pc = 0x28F7B8u;
label_28f7b8:
    // 0x28f7b8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28f7b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28f7bc:
    // 0x28f7bc: 0xac20f710  sw          $zero, -0x8F0($at)
    ctx->pc = 0x28f7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965008), GPR_U32(ctx, 0));
label_28f7c0:
    // 0x28f7c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28f7c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28f7c4:
    // 0x28f7c4: 0xc04a38a  jal         func_128E28
label_28f7c8:
    if (ctx->pc == 0x28F7C8u) {
        ctx->pc = 0x28F7C8u;
            // 0x28f7c8: 0x24a5d820  addiu       $a1, $a1, -0x27E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957088));
        ctx->pc = 0x28F7CCu;
        goto label_28f7cc;
    }
    ctx->pc = 0x28F7C4u;
    SET_GPR_U32(ctx, 31, 0x28F7CCu);
    ctx->pc = 0x28F7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F7C4u;
            // 0x28f7c8: 0x24a5d820  addiu       $a1, $a1, -0x27E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F7CCu; }
        if (ctx->pc != 0x28F7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F7CCu; }
        if (ctx->pc != 0x28F7CCu) { return; }
    }
    ctx->pc = 0x28F7CCu;
label_28f7cc:
    // 0x28f7cc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_28f7d0:
    if (ctx->pc == 0x28F7D0u) {
        ctx->pc = 0x28F7D0u;
            // 0x28f7d0: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x28F7D4u;
        goto label_28f7d4;
    }
    ctx->pc = 0x28F7CCu;
    {
        const bool branch_taken_0x28f7cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F7CCu;
            // 0x28f7d0: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f7cc) {
            ctx->pc = 0x28F7E0u;
            goto label_28f7e0;
        }
    }
    ctx->pc = 0x28F7D4u;
label_28f7d4:
    // 0x28f7d4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28f7d8:
    // 0x28f7d8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28f7d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28f7dc:
    // 0x28f7dc: 0xac22f710  sw          $v0, -0x8F0($at)
    ctx->pc = 0x28f7dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965008), GPR_U32(ctx, 2));
label_28f7e0:
    // 0x28f7e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28f7e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28f7e4:
    // 0x28f7e4: 0xc04a38a  jal         func_128E28
label_28f7e8:
    if (ctx->pc == 0x28F7E8u) {
        ctx->pc = 0x28F7E8u;
            // 0x28f7e8: 0x24a5d828  addiu       $a1, $a1, -0x27D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957096));
        ctx->pc = 0x28F7ECu;
        goto label_28f7ec;
    }
    ctx->pc = 0x28F7E4u;
    SET_GPR_U32(ctx, 31, 0x28F7ECu);
    ctx->pc = 0x28F7E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F7E4u;
            // 0x28f7e8: 0x24a5d828  addiu       $a1, $a1, -0x27D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F7ECu; }
        if (ctx->pc != 0x28F7ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F7ECu; }
        if (ctx->pc != 0x28F7ECu) { return; }
    }
    ctx->pc = 0x28F7ECu;
label_28f7ec:
    // 0x28f7ec: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_28f7f0:
    if (ctx->pc == 0x28F7F0u) {
        ctx->pc = 0x28F7F0u;
            // 0x28f7f0: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x28F7F4u;
        goto label_28f7f4;
    }
    ctx->pc = 0x28F7ECu;
    {
        const bool branch_taken_0x28f7ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F7ECu;
            // 0x28f7f0: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f7ec) {
            ctx->pc = 0x28F800u;
            goto label_28f800;
        }
    }
    ctx->pc = 0x28F7F4u;
label_28f7f4:
    // 0x28f7f4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28f7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28f7f8:
    // 0x28f7f8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28f7f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28f7fc:
    // 0x28f7fc: 0xac22f710  sw          $v0, -0x8F0($at)
    ctx->pc = 0x28f7fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965008), GPR_U32(ctx, 2));
label_28f800:
    // 0x28f800: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28f800u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28f804:
    // 0x28f804: 0xc04a38a  jal         func_128E28
label_28f808:
    if (ctx->pc == 0x28F808u) {
        ctx->pc = 0x28F808u;
            // 0x28f808: 0x24a5d830  addiu       $a1, $a1, -0x27D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957104));
        ctx->pc = 0x28F80Cu;
        goto label_28f80c;
    }
    ctx->pc = 0x28F804u;
    SET_GPR_U32(ctx, 31, 0x28F80Cu);
    ctx->pc = 0x28F808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F804u;
            // 0x28f808: 0x24a5d830  addiu       $a1, $a1, -0x27D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F80Cu; }
        if (ctx->pc != 0x28F80Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F80Cu; }
        if (ctx->pc != 0x28F80Cu) { return; }
    }
    ctx->pc = 0x28F80Cu;
label_28f80c:
    // 0x28f80c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_28f810:
    if (ctx->pc == 0x28F810u) {
        ctx->pc = 0x28F810u;
            // 0x28f810: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x28F814u;
        goto label_28f814;
    }
    ctx->pc = 0x28F80Cu;
    {
        const bool branch_taken_0x28f80c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F80Cu;
            // 0x28f810: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f80c) {
            ctx->pc = 0x28F820u;
            goto label_28f820;
        }
    }
    ctx->pc = 0x28F814u;
label_28f814:
    // 0x28f814: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28f814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28f818:
    // 0x28f818: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28f818u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28f81c:
    // 0x28f81c: 0xac22f710  sw          $v0, -0x8F0($at)
    ctx->pc = 0x28f81cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965008), GPR_U32(ctx, 2));
label_28f820:
    // 0x28f820: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28f820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28f824:
    // 0x28f824: 0xc04a38a  jal         func_128E28
label_28f828:
    if (ctx->pc == 0x28F828u) {
        ctx->pc = 0x28F828u;
            // 0x28f828: 0x24a5d838  addiu       $a1, $a1, -0x27C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957112));
        ctx->pc = 0x28F82Cu;
        goto label_28f82c;
    }
    ctx->pc = 0x28F824u;
    SET_GPR_U32(ctx, 31, 0x28F82Cu);
    ctx->pc = 0x28F828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F824u;
            // 0x28f828: 0x24a5d838  addiu       $a1, $a1, -0x27C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128E28u;
    if (runtime->hasFunction(0x128E28u)) {
        auto targetFn = runtime->lookupFunction(0x128E28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F82Cu; }
        if (ctx->pc != 0x28F82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcmp_0x128e28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F82Cu; }
        if (ctx->pc != 0x28F82Cu) { return; }
    }
    ctx->pc = 0x28F82Cu;
label_28f82c:
    // 0x28f82c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_28f830:
    if (ctx->pc == 0x28F830u) {
        ctx->pc = 0x28F834u;
        goto label_28f834;
    }
    ctx->pc = 0x28F82Cu;
    {
        const bool branch_taken_0x28f82c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f82c) {
            ctx->pc = 0x28F840u;
            goto label_28f840;
        }
    }
    ctx->pc = 0x28F834u;
label_28f834:
    // 0x28f834: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x28f834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_28f838:
    // 0x28f838: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28f838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28f83c:
    // 0x28f83c: 0xac22f710  sw          $v0, -0x8F0($at)
    ctx->pc = 0x28f83cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294965008), GPR_U32(ctx, 2));
label_28f840:
    // 0x28f840: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28f840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28f844:
    // 0x28f844: 0x8c22f710  lw          $v0, -0x8F0($at)
    ctx->pc = 0x28f844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294965008)));
label_28f848:
    // 0x28f848: 0x4400013  bltz        $v0, . + 4 + (0x13 << 2)
label_28f84c:
    if (ctx->pc == 0x28F84Cu) {
        ctx->pc = 0x28F84Cu;
            // 0x28f84c: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x28F850u;
        goto label_28f850;
    }
    ctx->pc = 0x28F848u;
    {
        const bool branch_taken_0x28f848 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x28F84Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F848u;
            // 0x28f84c: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f848) {
            ctx->pc = 0x28F898u;
            goto label_28f898;
        }
    }
    ctx->pc = 0x28F850u;
label_28f850:
    // 0x28f850: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28f850u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28f854:
    // 0x28f854: 0x2484f700  addiu       $a0, $a0, -0x900
    ctx->pc = 0x28f854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964992));
label_28f858:
    // 0x28f858: 0xc0711dc  jal         func_1C4770
label_28f85c:
    if (ctx->pc == 0x28F85Cu) {
        ctx->pc = 0x28F85Cu;
            // 0x28f85c: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x28F860u;
        goto label_28f860;
    }
    ctx->pc = 0x28F858u;
    SET_GPR_U32(ctx, 31, 0x28F860u);
    ctx->pc = 0x28F85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F858u;
            // 0x28f85c: 0x24060030  addiu       $a2, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4770u;
    if (runtime->hasFunction(0x1C4770u)) {
        auto targetFn = runtime->lookupFunction(0x1C4770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F860u; }
        if (ctx->pc != 0x28F860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init_LightBoll__18CMapEffectsManegerFP9mgCMemoryi_0x1c4770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F860u; }
        if (ctx->pc != 0x28F860u) { return; }
    }
    ctx->pc = 0x28F860u;
label_28f860:
    // 0x28f860: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x28f860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_28f864:
    // 0x28f864: 0xc0a0e30  jal         func_2838C0
label_28f868:
    if (ctx->pc == 0x28F868u) {
        ctx->pc = 0x28F868u;
            // 0x28f868: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28F86Cu;
        goto label_28f86c;
    }
    ctx->pc = 0x28F864u;
    SET_GPR_U32(ctx, 31, 0x28F86Cu);
    ctx->pc = 0x28F868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F864u;
            // 0x28f868: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F86Cu; }
        if (ctx->pc != 0x28F86Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F86Cu; }
        if (ctx->pc != 0x28F86Cu) { return; }
    }
    ctx->pc = 0x28F86Cu;
label_28f86c:
    // 0x28f86c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28f86cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28f870:
    // 0x28f870: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_28f874:
    if (ctx->pc == 0x28F874u) {
        ctx->pc = 0x28F874u;
            // 0x28f874: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28F878u;
        goto label_28f878;
    }
    ctx->pc = 0x28F870u;
    {
        const bool branch_taken_0x28f870 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F870u;
            // 0x28f874: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f870) {
            ctx->pc = 0x28F898u;
            goto label_28f898;
        }
    }
    ctx->pc = 0x28F878u;
label_28f878:
    // 0x28f878: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x28f878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_28f87c:
    // 0x28f87c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28f87cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28f880:
    // 0x28f880: 0xc071234  jal         func_1C48D0
label_28f884:
    if (ctx->pc == 0x28F884u) {
        ctx->pc = 0x28F884u;
            // 0x28f884: 0x2484f700  addiu       $a0, $a0, -0x900 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964992));
        ctx->pc = 0x28F888u;
        goto label_28f888;
    }
    ctx->pc = 0x28F880u;
    SET_GPR_U32(ctx, 31, 0x28F888u);
    ctx->pc = 0x28F884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F880u;
            // 0x28f884: 0x2484f700  addiu       $a0, $a0, -0x900 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C48D0u;
    if (runtime->hasFunction(0x1C48D0u)) {
        auto targetFn = runtime->lookupFunction(0x1C48D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F888u; }
        if (ctx->pc != 0x28F888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__18CMapEffectsManegerFP9mgCCamera_0x1c48d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F888u; }
        if (ctx->pc != 0x28F888u) { return; }
    }
    ctx->pc = 0x28F888u;
label_28f888:
    // 0x28f888: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x28f888u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_28f88c:
    // 0x28f88c: 0x2a420010  slti        $v0, $s2, 0x10
    ctx->pc = 0x28f88cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
label_28f890:
    // 0x28f890: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_28f894:
    if (ctx->pc == 0x28F894u) {
        ctx->pc = 0x28F898u;
        goto label_28f898;
    }
    ctx->pc = 0x28F890u;
    {
        const bool branch_taken_0x28f890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f890) {
            ctx->pc = 0x28F878u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28f878;
        }
    }
    ctx->pc = 0x28F898u;
label_28f898:
    // 0x28f898: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28f898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28f89c:
    // 0x28f89c: 0xc04e780  jal         func_139E00
label_28f8a0:
    if (ctx->pc == 0x28F8A0u) {
        ctx->pc = 0x28F8A0u;
            // 0x28f8a0: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->pc = 0x28F8A4u;
        goto label_28f8a4;
    }
    ctx->pc = 0x28F89Cu;
    SET_GPR_U32(ctx, 31, 0x28F8A4u);
    ctx->pc = 0x28F8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F89Cu;
            // 0x28f8a0: 0xae00001c  sw          $zero, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F8A4u; }
        if (ctx->pc != 0x28F8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F8A4u; }
        if (ctx->pc != 0x28F8A4u) { return; }
    }
    ctx->pc = 0x28F8A4u;
label_28f8a4:
    // 0x28f8a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28f8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28f8a8:
    // 0x28f8a8: 0xc04e714  jal         func_139C50
label_28f8ac:
    if (ctx->pc == 0x28F8ACu) {
        ctx->pc = 0x28F8ACu;
            // 0x28f8ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x28F8B0u;
        goto label_28f8b0;
    }
    ctx->pc = 0x28F8A8u;
    SET_GPR_U32(ctx, 31, 0x28F8B0u);
    ctx->pc = 0x28F8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F8A8u;
            // 0x28f8ac: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C50u;
    if (runtime->hasFunction(0x139C50u)) {
        auto targetFn = runtime->lookupFunction(0x139C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F8B0u; }
        if (ctx->pc != 0x28F8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAllocTest__9mgCMemoryFi_0x139c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F8B0u; }
        if (ctx->pc != 0x28F8B0u) { return; }
    }
    ctx->pc = 0x28F8B0u;
label_28f8b0:
    // 0x28f8b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28f8b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28f8b4:
    // 0x28f8b4: 0x1220002e  beqz        $s1, . + 4 + (0x2E << 2)
label_28f8b8:
    if (ctx->pc == 0x28F8B8u) {
        ctx->pc = 0x28F8B8u;
            // 0x28f8b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x28F8BCu;
        goto label_28f8bc;
    }
    ctx->pc = 0x28F8B4u;
    {
        const bool branch_taken_0x28f8b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F8B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F8B4u;
            // 0x28f8b8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f8b4) {
            ctx->pc = 0x28F970u;
            goto label_28f970;
        }
    }
    ctx->pc = 0x28F8BCu;
label_28f8bc:
    // 0x28f8bc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x28f8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_28f8c0:
    // 0x28f8c0: 0x12a20008  beq         $s5, $v0, . + 4 + (0x8 << 2)
label_28f8c4:
    if (ctx->pc == 0x28F8C4u) {
        ctx->pc = 0x28F8C4u;
            // 0x28f8c4: 0x2ac10010  slti        $at, $s6, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->pc = 0x28F8C8u;
        goto label_28f8c8;
    }
    ctx->pc = 0x28F8C0u;
    {
        const bool branch_taken_0x28f8c0 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 2));
        ctx->pc = 0x28F8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F8C0u;
            // 0x28f8c4: 0x2ac10010  slti        $at, $s6, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f8c0) {
            ctx->pc = 0x28F8E4u;
            goto label_28f8e4;
        }
    }
    ctx->pc = 0x28F8C8u;
label_28f8c8:
    // 0x28f8c8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x28f8c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_28f8cc:
    // 0x28f8cc: 0x26a60001  addiu       $a2, $s5, 0x1
    ctx->pc = 0x28f8ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_28f8d0:
    // 0x28f8d0: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x28f8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_28f8d4:
    // 0x28f8d4: 0xc04a234  jal         func_1288D0
label_28f8d8:
    if (ctx->pc == 0x28F8D8u) {
        ctx->pc = 0x28F8D8u;
            // 0x28f8d8: 0x24a5d840  addiu       $a1, $a1, -0x27C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957120));
        ctx->pc = 0x28F8DCu;
        goto label_28f8dc;
    }
    ctx->pc = 0x28F8D4u;
    SET_GPR_U32(ctx, 31, 0x28F8DCu);
    ctx->pc = 0x28F8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F8D4u;
            // 0x28f8d8: 0x24a5d840  addiu       $a1, $a1, -0x27C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F8DCu; }
        if (ctx->pc != 0x28F8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F8DCu; }
        if (ctx->pc != 0x28F8DCu) { return; }
    }
    ctx->pc = 0x28F8DCu;
label_28f8dc:
    // 0x28f8dc: 0x1000000d  b           . + 4 + (0xD << 2)
label_28f8e0:
    if (ctx->pc == 0x28F8E0u) {
        ctx->pc = 0x28F8E0u;
            // 0x28f8e0: 0x27a40290  addiu       $a0, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->pc = 0x28F8E4u;
        goto label_28f8e4;
    }
    ctx->pc = 0x28F8DCu;
    {
        const bool branch_taken_0x28f8dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F8E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F8DCu;
            // 0x28f8e0: 0x27a40290  addiu       $a0, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f8dc) {
            ctx->pc = 0x28F914u;
            goto label_28f914;
        }
    }
    ctx->pc = 0x28F8E4u;
label_28f8e4:
    // 0x28f8e4: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_28f8e8:
    if (ctx->pc == 0x28F8E8u) {
        ctx->pc = 0x28F8E8u;
            // 0x28f8e8: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x28F8ECu;
        goto label_28f8ec;
    }
    ctx->pc = 0x28F8E4u;
    {
        const bool branch_taken_0x28f8e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F8E4u;
            // 0x28f8e8: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f8e4) {
            ctx->pc = 0x28F904u;
            goto label_28f904;
        }
    }
    ctx->pc = 0x28F8ECu;
label_28f8ec:
    // 0x28f8ec: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x28f8ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_28f8f0:
    // 0x28f8f0: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x28f8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_28f8f4:
    // 0x28f8f4: 0xc04a234  jal         func_1288D0
label_28f8f8:
    if (ctx->pc == 0x28F8F8u) {
        ctx->pc = 0x28F8F8u;
            // 0x28f8f8: 0x24a5d860  addiu       $a1, $a1, -0x27A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957152));
        ctx->pc = 0x28F8FCu;
        goto label_28f8fc;
    }
    ctx->pc = 0x28F8F4u;
    SET_GPR_U32(ctx, 31, 0x28F8FCu);
    ctx->pc = 0x28F8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F8F4u;
            // 0x28f8f8: 0x24a5d860  addiu       $a1, $a1, -0x27A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F8FCu; }
        if (ctx->pc != 0x28F8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F8FCu; }
        if (ctx->pc != 0x28F8FCu) { return; }
    }
    ctx->pc = 0x28F8FCu;
label_28f8fc:
    // 0x28f8fc: 0x10000004  b           . + 4 + (0x4 << 2)
label_28f900:
    if (ctx->pc == 0x28F900u) {
        ctx->pc = 0x28F904u;
        goto label_28f904;
    }
    ctx->pc = 0x28F8FCu;
    {
        const bool branch_taken_0x28f8fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f8fc) {
            ctx->pc = 0x28F910u;
            goto label_28f910;
        }
    }
    ctx->pc = 0x28F904u;
label_28f904:
    // 0x28f904: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x28f904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_28f908:
    // 0x28f908: 0xc04a234  jal         func_1288D0
label_28f90c:
    if (ctx->pc == 0x28F90Cu) {
        ctx->pc = 0x28F90Cu;
            // 0x28f90c: 0x24a5d880  addiu       $a1, $a1, -0x2780 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957184));
        ctx->pc = 0x28F910u;
        goto label_28f910;
    }
    ctx->pc = 0x28F908u;
    SET_GPR_U32(ctx, 31, 0x28F910u);
    ctx->pc = 0x28F90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F908u;
            // 0x28f90c: 0x24a5d880  addiu       $a1, $a1, -0x2780 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F910u; }
        if (ctx->pc != 0x28F910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F910u; }
        if (ctx->pc != 0x28F910u) { return; }
    }
    ctx->pc = 0x28F910u;
label_28f910:
    // 0x28f910: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x28f910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
label_28f914:
    // 0x28f914: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28f914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28f918:
    // 0x28f918: 0xc0524c8  jal         func_149320
label_28f91c:
    if (ctx->pc == 0x28F91Cu) {
        ctx->pc = 0x28F91Cu;
            // 0x28f91c: 0x27a60378  addiu       $a2, $sp, 0x378 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 888));
        ctx->pc = 0x28F920u;
        goto label_28f920;
    }
    ctx->pc = 0x28F918u;
    SET_GPR_U32(ctx, 31, 0x28F920u);
    ctx->pc = 0x28F91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F918u;
            // 0x28f91c: 0x27a60378  addiu       $a2, $sp, 0x378 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F920u; }
        if (ctx->pc != 0x28F920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F920u; }
        if (ctx->pc != 0x28F920u) { return; }
    }
    ctx->pc = 0x28F920u;
label_28f920:
    // 0x28f920: 0x8fa30378  lw          $v1, 0x378($sp)
    ctx->pc = 0x28f920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 888)));
label_28f924:
    // 0x28f924: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_28f928:
    if (ctx->pc == 0x28F928u) {
        ctx->pc = 0x28F928u;
            // 0x28f928: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->pc = 0x28F92Cu;
        goto label_28f92c;
    }
    ctx->pc = 0x28F924u;
    {
        const bool branch_taken_0x28f924 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x28F928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F924u;
            // 0x28f928: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f924) {
            ctx->pc = 0x28F934u;
            goto label_28f934;
        }
    }
    ctx->pc = 0x28F92Cu;
label_28f92c:
    // 0x28f92c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x28f92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_28f930:
    // 0x28f930: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x28f930u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_28f934:
    // 0x28f934: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x28f934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_28f938:
    // 0x28f938: 0xc04e748  jal         func_139D20
label_28f93c:
    if (ctx->pc == 0x28F93Cu) {
        ctx->pc = 0x28F93Cu;
            // 0x28f93c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28F940u;
        goto label_28f940;
    }
    ctx->pc = 0x28F938u;
    SET_GPR_U32(ctx, 31, 0x28F940u);
    ctx->pc = 0x28F93Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F938u;
            // 0x28f93c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F940u; }
        if (ctx->pc != 0x28F940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F940u; }
        if (ctx->pc != 0x28F940u) { return; }
    }
    ctx->pc = 0x28F940u;
label_28f940:
    // 0x28f940: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x28f940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_28f944:
    // 0x28f944: 0x2405006a  addiu       $a1, $zero, 0x6A
    ctx->pc = 0x28f944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
label_28f948:
    // 0x28f948: 0xc04b950  jal         func_12E540
label_28f94c:
    if (ctx->pc == 0x28F94Cu) {
        ctx->pc = 0x28F94Cu;
            // 0x28f94c: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->pc = 0x28F950u;
        goto label_28f950;
    }
    ctx->pc = 0x28F948u;
    SET_GPR_U32(ctx, 31, 0x28F950u);
    ctx->pc = 0x28F94Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F948u;
            // 0x28f94c: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F950u; }
        if (ctx->pc != 0x28F950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F950u; }
        if (ctx->pc != 0x28F950u) { return; }
    }
    ctx->pc = 0x28F950u;
label_28f950:
    // 0x28f950: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x28f950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_28f954:
    // 0x28f954: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28f954u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28f958:
    // 0x28f958: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x28f958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
label_28f95c:
    // 0x28f95c: 0x2406006a  addiu       $a2, $zero, 0x6A
    ctx->pc = 0x28f95cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
label_28f960:
    // 0x28f960: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x28f960u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28f964:
    // 0x28f964: 0xc04b6a4  jal         func_12DA90
label_28f968:
    if (ctx->pc == 0x28F968u) {
        ctx->pc = 0x28F968u;
            // 0x28f968: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28F96Cu;
        goto label_28f96c;
    }
    ctx->pc = 0x28F964u;
    SET_GPR_U32(ctx, 31, 0x28F96Cu);
    ctx->pc = 0x28F968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28F964u;
            // 0x28f968: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F96Cu; }
        if (ctx->pc != 0x28F96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28F96Cu; }
        if (ctx->pc != 0x28F96Cu) { return; }
    }
    ctx->pc = 0x28F96Cu;
label_28f96c:
    // 0x28f96c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28f96cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_28f970:
    // 0x28f970: 0xae02001c  sw          $v0, 0x1C($s0)
    ctx->pc = 0x28f970u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
label_28f974:
    // 0x28f974: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28f974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28f978:
    // 0x28f978: 0x8c22064c  lw          $v0, 0x64C($at)
    ctx->pc = 0x28f978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 1612)));
label_28f97c:
    // 0x28f97c: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_28f980:
    if (ctx->pc == 0x28F980u) {
        ctx->pc = 0x28F980u;
            // 0x28f980: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x28F984u;
        goto label_28f984;
    }
    ctx->pc = 0x28F97Cu;
    {
        const bool branch_taken_0x28f97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F97Cu;
            // 0x28f980: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f97c) {
            ctx->pc = 0x28F9E8u;
            goto label_28f9e8;
        }
    }
    ctx->pc = 0x28F984u;
label_28f984:
    // 0x28f984: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x28f984u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f988:
    // 0x28f988: 0x1000000e  b           . + 4 + (0xE << 2)
label_28f98c:
    if (ctx->pc == 0x28F98Cu) {
        ctx->pc = 0x28F98Cu;
            // 0x28f98c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x28F990u;
        goto label_28f990;
    }
    ctx->pc = 0x28F988u;
    {
        const bool branch_taken_0x28f988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28F98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F988u;
            // 0x28f98c: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f988) {
            ctx->pc = 0x28F9C4u;
            goto label_28f9c4;
        }
    }
    ctx->pc = 0x28F990u;
label_28f990:
    // 0x28f990: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x28f990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_28f994:
    // 0x28f994: 0x8c22064c  lw          $v0, 0x64C($at)
    ctx->pc = 0x28f994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 1612)));
label_28f998:
    // 0x28f998: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x28f998u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_28f99c:
    // 0x28f99c: 0xa4440004  sh          $a0, 0x4($v0)
    ctx->pc = 0x28f99cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4), (uint16_t)GPR_U32(ctx, 4));
label_28f9a0:
    // 0x28f9a0: 0x24c6001c  addiu       $a2, $a2, 0x1C
    ctx->pc = 0x28f9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
label_28f9a4:
    // 0x28f9a4: 0xa4400006  sh          $zero, 0x6($v0)
    ctx->pc = 0x28f9a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 6), (uint16_t)GPR_U32(ctx, 0));
label_28f9a8:
    // 0x28f9a8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x28f9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_28f9ac:
    // 0x28f9ac: 0xa4440008  sh          $a0, 0x8($v0)
    ctx->pc = 0x28f9acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 8), (uint16_t)GPR_U32(ctx, 4));
label_28f9b0:
    // 0x28f9b0: 0xa040000a  sb          $zero, 0xA($v0)
    ctx->pc = 0x28f9b0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 10), (uint8_t)GPR_U32(ctx, 0));
label_28f9b4:
    // 0x28f9b4: 0xa040000b  sb          $zero, 0xB($v0)
    ctx->pc = 0x28f9b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 11), (uint8_t)GPR_U32(ctx, 0));
label_28f9b8:
    // 0x28f9b8: 0xa440000c  sh          $zero, 0xC($v0)
    ctx->pc = 0x28f9b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 0));
label_28f9bc:
    // 0x28f9bc: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x28f9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
label_28f9c0:
    // 0x28f9c0: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x28f9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_28f9c4:
    // 0x28f9c4: 0x0  nop
    ctx->pc = 0x28f9c4u;
    // NOP
label_28f9c8:
    // 0x28f9c8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28f9c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28f9cc:
    // 0x28f9cc: 0x84230638  lh          $v1, 0x638($at)
    ctx->pc = 0x28f9ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 1592)));
label_28f9d0:
    // 0x28f9d0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28f9d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28f9d4:
    // 0x28f9d4: 0x8422063a  lh          $v0, 0x63A($at)
    ctx->pc = 0x28f9d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 1594)));
label_28f9d8:
    // 0x28f9d8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x28f9d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_28f9dc:
    // 0x28f9dc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x28f9dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_28f9e0:
    // 0x28f9e0: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_28f9e4:
    if (ctx->pc == 0x28F9E4u) {
        ctx->pc = 0x28F9E4u;
            // 0x28f9e4: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x28F9E8u;
        goto label_28f9e8;
    }
    ctx->pc = 0x28F9E0u;
    {
        const bool branch_taken_0x28f9e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28F9E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28F9E0u;
            // 0x28f9e4: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28f9e0) {
            ctx->pc = 0x28F990u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28f990;
        }
    }
    ctx->pc = 0x28F9E8u;
label_28f9e8:
    // 0x28f9e8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28f9e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28f9ec:
    // 0x28f9ec: 0xac200654  sw          $zero, 0x654($at)
    ctx->pc = 0x28f9ecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1620), GPR_U32(ctx, 0));
label_28f9f0:
    // 0x28f9f0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x28f9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f9f4:
    // 0x28f9f4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28f9f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28f9f8:
    // 0x28f9f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28f9f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28f9fc:
    // 0x28f9fc: 0xac200668  sw          $zero, 0x668($at)
    ctx->pc = 0x28f9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1640), GPR_U32(ctx, 0));
label_28fa00:
    // 0x28fa00: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28fa00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28fa04:
    // 0x28fa04: 0xac20067c  sw          $zero, 0x67C($at)
    ctx->pc = 0x28fa04u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1660), GPR_U32(ctx, 0));
label_28fa08:
    // 0x28fa08: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28fa08u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28fa0c:
    // 0x28fa0c: 0xac200690  sw          $zero, 0x690($at)
    ctx->pc = 0x28fa0cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1680), GPR_U32(ctx, 0));
label_28fa10:
    // 0x28fa10: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28fa10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28fa14:
    // 0x28fa14: 0xac2006a4  sw          $zero, 0x6A4($at)
    ctx->pc = 0x28fa14u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1700), GPR_U32(ctx, 0));
label_28fa18:
    // 0x28fa18: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28fa18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28fa1c:
    // 0x28fa1c: 0xac2006b8  sw          $zero, 0x6B8($at)
    ctx->pc = 0x28fa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1720), GPR_U32(ctx, 0));
label_28fa20:
    // 0x28fa20: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28fa20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28fa24:
    // 0x28fa24: 0xac2006cc  sw          $zero, 0x6CC($at)
    ctx->pc = 0x28fa24u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1740), GPR_U32(ctx, 0));
label_28fa28:
    // 0x28fa28: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28fa28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28fa2c:
    // 0x28fa2c: 0xac2006e0  sw          $zero, 0x6E0($at)
    ctx->pc = 0x28fa2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1760), GPR_U32(ctx, 0));
label_28fa30:
    // 0x28fa30: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28fa30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28fa34:
    // 0x28fa34: 0xac200630  sw          $zero, 0x630($at)
    ctx->pc = 0x28fa34u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1584), GPR_U32(ctx, 0));
label_28fa38:
    // 0x28fa38: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28fa38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28fa3c:
    // 0x28fa3c: 0xac200634  sw          $zero, 0x634($at)
    ctx->pc = 0x28fa3cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1588), GPR_U32(ctx, 0));
label_28fa40:
    // 0x28fa40: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28fa40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28fa44:
    // 0x28fa44: 0xac200644  sw          $zero, 0x644($at)
    ctx->pc = 0x28fa44u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1604), GPR_U32(ctx, 0));
label_28fa48:
    // 0x28fa48: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28fa48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28fa4c:
    // 0x28fa4c: 0xac200648  sw          $zero, 0x648($at)
    ctx->pc = 0x28fa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1608), GPR_U32(ctx, 0));
label_28fa50:
    // 0x28fa50: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28fa50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28fa54:
    // 0x28fa54: 0xac200480  sw          $zero, 0x480($at)
    ctx->pc = 0x28fa54u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1152), GPR_U32(ctx, 0));
label_28fa58:
    // 0x28fa58: 0x3c0301ea  lui         $v1, 0x1EA
    ctx->pc = 0x28fa58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)490 << 16));
label_28fa5c:
    // 0x28fa5c: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x28fa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
label_28fa60:
    // 0x28fa60: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x28fa60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_28fa64:
    // 0x28fa64: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x28fa64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_28fa68:
    // 0x28fa68: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x28fa68u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_28fa6c:
    // 0x28fa6c: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x28fa6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_28fa70:
    // 0x28fa70: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x28fa70u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
label_28fa74:
    // 0x28fa74: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x28fa74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_28fa78:
    // 0x28fa78: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x28fa78u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_28fa7c:
    // 0x28fa7c: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x28fa7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
label_28fa80:
    // 0x28fa80: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x28fa80u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
label_28fa84:
    // 0x28fa84: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x28fa84u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
label_28fa88:
    // 0x28fa88: 0xacc0001c  sw          $zero, 0x1C($a2)
    ctx->pc = 0x28fa88u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
label_28fa8c:
    // 0x28fa8c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_28fa90:
    if (ctx->pc == 0x28FA90u) {
        ctx->pc = 0x28FA90u;
            // 0x28fa90: 0xacc00020  sw          $zero, 0x20($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
        ctx->pc = 0x28FA94u;
        goto label_28fa94;
    }
    ctx->pc = 0x28FA8Cu;
    {
        const bool branch_taken_0x28fa8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28FA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FA8Cu;
            // 0x28fa90: 0xacc00020  sw          $zero, 0x20($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fa8c) {
            ctx->pc = 0x28FA60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28fa60;
        }
    }
    ctx->pc = 0x28FA94u;
label_28fa94:
    // 0x28fa94: 0x2881000c  slti        $at, $a0, 0xC
    ctx->pc = 0x28fa94u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
label_28fa98:
    // 0x28fa98: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_28fa9c:
    if (ctx->pc == 0x28FA9Cu) {
        ctx->pc = 0x28FA9Cu;
            // 0x28fa9c: 0x42880  sll         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->pc = 0x28FAA0u;
        goto label_28faa0;
    }
    ctx->pc = 0x28FA98u;
    {
        const bool branch_taken_0x28fa98 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FA98u;
            // 0x28fa9c: 0x42880  sll         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fa98) {
            ctx->pc = 0x28FAC8u;
            goto label_28fac8;
        }
    }
    ctx->pc = 0x28FAA0u;
label_28faa0:
    // 0x28faa0: 0x3c0301ea  lui         $v1, 0x1EA
    ctx->pc = 0x28faa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)490 << 16));
label_28faa4:
    // 0x28faa4: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x28faa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
label_28faa8:
    // 0x28faa8: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x28faa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_28faac:
    // 0x28faac: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x28faacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_28fab0:
    // 0x28fab0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x28fab0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_28fab4:
    // 0x28fab4: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x28fab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_28fab8:
    // 0x28fab8: 0x2882000c  slti        $v0, $a0, 0xC
    ctx->pc = 0x28fab8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
label_28fabc:
    // 0x28fabc: 0x0  nop
    ctx->pc = 0x28fabcu;
    // NOP
label_28fac0:
    // 0x28fac0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_28fac4:
    if (ctx->pc == 0x28FAC4u) {
        ctx->pc = 0x28FAC8u;
        goto label_28fac8;
    }
    ctx->pc = 0x28FAC0u;
    {
        const bool branch_taken_0x28fac0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28fac0) {
            ctx->pc = 0x28FAA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28faa8;
        }
    }
    ctx->pc = 0x28FAC8u;
label_28fac8:
    // 0x28fac8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28fac8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28facc:
    // 0x28facc: 0xac2004b4  sw          $zero, 0x4B4($at)
    ctx->pc = 0x28faccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1204), GPR_U32(ctx, 0));
label_28fad0:
    // 0x28fad0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x28fad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28fad4:
    // 0x28fad4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28fad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28fad8:
    // 0x28fad8: 0xac2004bc  sw          $zero, 0x4BC($at)
    ctx->pc = 0x28fad8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1212), GPR_U32(ctx, 0));
label_28fadc:
    // 0x28fadc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28fadcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28fae0:
    // 0x28fae0: 0xac2206f8  sw          $v0, 0x6F8($at)
    ctx->pc = 0x28fae0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1784), GPR_U32(ctx, 2));
label_28fae4:
    // 0x28fae4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28fae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28fae8:
    // 0x28fae8: 0xac2006fc  sw          $zero, 0x6FC($at)
    ctx->pc = 0x28fae8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1788), GPR_U32(ctx, 0));
label_28faec:
    // 0x28faec: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28faecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28faf0:
    // 0x28faf0: 0xac200704  sw          $zero, 0x704($at)
    ctx->pc = 0x28faf0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1796), GPR_U32(ctx, 0));
label_28faf4:
    // 0x28faf4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28faf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28faf8:
    // 0x28faf8: 0xa42004b8  sh          $zero, 0x4B8($at)
    ctx->pc = 0x28faf8u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 1208), (uint16_t)GPR_U32(ctx, 0));
label_28fafc:
    // 0x28fafc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28fafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28fb00:
    // 0x28fb00: 0x12800026  beqz        $s4, . + 4 + (0x26 << 2)
label_28fb04:
    if (ctx->pc == 0x28FB04u) {
        ctx->pc = 0x28FB04u;
            // 0x28fb04: 0xa42004ba  sh          $zero, 0x4BA($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 1210), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x28FB08u;
        goto label_28fb08;
    }
    ctx->pc = 0x28FB00u;
    {
        const bool branch_taken_0x28fb00 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x28FB04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FB00u;
            // 0x28fb04: 0xa42004ba  sh          $zero, 0x4BA($at) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 1), 1210), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fb00) {
            ctx->pc = 0x28FB9Cu;
            goto label_28fb9c;
        }
    }
    ctx->pc = 0x28FB08u;
label_28fb08:
    // 0x28fb08: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x28fb08u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_28fb0c:
    // 0x28fb0c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x28fb0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28fb10:
    // 0x28fb10: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x28fb10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_28fb14:
    // 0x28fb14: 0xc04a234  jal         func_1288D0
label_28fb18:
    if (ctx->pc == 0x28FB18u) {
        ctx->pc = 0x28FB18u;
            // 0x28fb18: 0x24a5d8a0  addiu       $a1, $a1, -0x2760 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957216));
        ctx->pc = 0x28FB1Cu;
        goto label_28fb1c;
    }
    ctx->pc = 0x28FB14u;
    SET_GPR_U32(ctx, 31, 0x28FB1Cu);
    ctx->pc = 0x28FB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FB14u;
            // 0x28fb18: 0x24a5d8a0  addiu       $a1, $a1, -0x2760 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FB1Cu; }
        if (ctx->pc != 0x28FB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FB1Cu; }
        if (ctx->pc != 0x28FB1Cu) { return; }
    }
    ctx->pc = 0x28FB1Cu;
label_28fb1c:
    // 0x28fb1c: 0xc04e640  jal         func_139900
label_28fb20:
    if (ctx->pc == 0x28FB20u) {
        ctx->pc = 0x28FB20u;
            // 0x28fb20: 0x27a40340  addiu       $a0, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->pc = 0x28FB24u;
        goto label_28fb24;
    }
    ctx->pc = 0x28FB1Cu;
    SET_GPR_U32(ctx, 31, 0x28FB24u);
    ctx->pc = 0x28FB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FB1Cu;
            // 0x28fb20: 0x27a40340  addiu       $a0, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FB24u; }
        if (ctx->pc != 0x28FB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FB24u; }
        if (ctx->pc != 0x28FB24u) { return; }
    }
    ctx->pc = 0x28FB24u;
label_28fb24:
    // 0x28fb24: 0x8f858d74  lw          $a1, -0x728C($gp)
    ctx->pc = 0x28fb24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_28fb28:
    // 0x28fb28: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x28fb28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_28fb2c:
    // 0x28fb2c: 0xc0524c8  jal         func_149320
label_28fb30:
    if (ctx->pc == 0x28FB30u) {
        ctx->pc = 0x28FB30u;
            // 0x28fb30: 0x27a6037c  addiu       $a2, $sp, 0x37C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 892));
        ctx->pc = 0x28FB34u;
        goto label_28fb34;
    }
    ctx->pc = 0x28FB2Cu;
    SET_GPR_U32(ctx, 31, 0x28FB34u);
    ctx->pc = 0x28FB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FB2Cu;
            // 0x28fb30: 0x27a6037c  addiu       $a2, $sp, 0x37C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 892));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FB34u; }
        if (ctx->pc != 0x28FB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FB34u; }
        if (ctx->pc != 0x28FB34u) { return; }
    }
    ctx->pc = 0x28FB34u;
label_28fb34:
    // 0x28fb34: 0x8fa3037c  lw          $v1, 0x37C($sp)
    ctx->pc = 0x28fb34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 892)));
label_28fb38:
    // 0x28fb38: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_28fb3c:
    if (ctx->pc == 0x28FB3Cu) {
        ctx->pc = 0x28FB3Cu;
            // 0x28fb3c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->pc = 0x28FB40u;
        goto label_28fb40;
    }
    ctx->pc = 0x28FB38u;
    {
        const bool branch_taken_0x28fb38 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x28FB3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FB38u;
            // 0x28fb3c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fb38) {
            ctx->pc = 0x28FB48u;
            goto label_28fb48;
        }
    }
    ctx->pc = 0x28FB40u;
label_28fb40:
    // 0x28fb40: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x28fb40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_28fb44:
    // 0x28fb44: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x28fb44u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_28fb48:
    // 0x28fb48: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x28fb48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_28fb4c:
    // 0x28fb4c: 0x27a40340  addiu       $a0, $sp, 0x340
    ctx->pc = 0x28fb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
label_28fb50:
    // 0x28fb50: 0x8f828d74  lw          $v0, -0x728C($gp)
    ctx->pc = 0x28fb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_28fb54:
    // 0x28fb54: 0x34068000  ori         $a2, $zero, 0x8000
    ctx->pc = 0x28fb54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_28fb58:
    // 0x28fb58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x28fb58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_28fb5c:
    // 0x28fb5c: 0xc04e79c  jal         func_139E70
label_28fb60:
    if (ctx->pc == 0x28FB60u) {
        ctx->pc = 0x28FB60u;
            // 0x28fb60: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x28FB64u;
        goto label_28fb64;
    }
    ctx->pc = 0x28FB5Cu;
    SET_GPR_U32(ctx, 31, 0x28FB64u);
    ctx->pc = 0x28FB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FB5Cu;
            // 0x28fb60: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FB64u; }
        if (ctx->pc != 0x28FB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FB64u; }
        if (ctx->pc != 0x28FB64u) { return; }
    }
    ctx->pc = 0x28FB64u;
label_28fb64:
    // 0x28fb64: 0x8f858d74  lw          $a1, -0x728C($gp)
    ctx->pc = 0x28fb64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_28fb68:
    // 0x28fb68: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x28fb68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_28fb6c:
    // 0x28fb6c: 0x8fa6037c  lw          $a2, 0x37C($sp)
    ctx->pc = 0x28fb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 892)));
label_28fb70:
    // 0x28fb70: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x28fb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
label_28fb74:
    // 0x28fb74: 0xc075654  jal         func_1D5950
label_28fb78:
    if (ctx->pc == 0x28FB78u) {
        ctx->pc = 0x28FB78u;
            // 0x28fb78: 0x27a70340  addiu       $a3, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->pc = 0x28FB7Cu;
        goto label_28fb7c;
    }
    ctx->pc = 0x28FB74u;
    SET_GPR_U32(ctx, 31, 0x28FB7Cu);
    ctx->pc = 0x28FB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FB74u;
            // 0x28fb78: 0x27a70340  addiu       $a3, $sp, 0x340 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D5950u;
    if (runtime->hasFunction(0x1D5950u)) {
        auto targetFn = runtime->lookupFunction(0x1D5950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FB7Cu; }
        if (ctx->pc != 0x28FB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetupRoomInfo__11CAutoMapGenFPciP9mgCMemory_0x1d5950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FB7Cu; }
        if (ctx->pc != 0x28FB7Cu) { return; }
    }
    ctx->pc = 0x28FB7Cu;
label_28fb7c:
    // 0x28fb7c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28fb7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28fb80:
    // 0x28fb80: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x28fb80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_28fb84:
    // 0x28fb84: 0x8c2204bc  lw          $v0, 0x4BC($at)
    ctx->pc = 0x28fb84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 1212)));
label_28fb88:
    // 0x28fb88: 0x24840480  addiu       $a0, $a0, 0x480
    ctx->pc = 0x28fb88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1152));
label_28fb8c:
    // 0x28fb8c: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x28fb8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
label_28fb90:
    // 0x28fb90: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28fb90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28fb94:
    // 0x28fb94: 0xc07637c  jal         func_1D8DF0
label_28fb98:
    if (ctx->pc == 0x28FB98u) {
        ctx->pc = 0x28FB98u;
            // 0x28fb98: 0xac2204bc  sw          $v0, 0x4BC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 1212), GPR_U32(ctx, 2));
        ctx->pc = 0x28FB9Cu;
        goto label_28fb9c;
    }
    ctx->pc = 0x28FB94u;
    SET_GPR_U32(ctx, 31, 0x28FB9Cu);
    ctx->pc = 0x28FB98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FB94u;
            // 0x28fb98: 0xac2204bc  sw          $v0, 0x4BC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 1212), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D8DF0u;
    if (runtime->hasFunction(0x1D8DF0u)) {
        auto targetFn = runtime->lookupFunction(0x1D8DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FB9Cu; }
        if (ctx->pc != 0x28FB9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Build__11CAutoMapGenFv_0x1d8df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FB9Cu; }
        if (ctx->pc != 0x28FB9Cu) { return; }
    }
    ctx->pc = 0x28FB9Cu;
label_28fb9c:
    // 0x28fb9c: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x28fb9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
label_28fba0:
    // 0x28fba0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28fba0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28fba4:
    // 0x28fba4: 0x2484f3b0  addiu       $a0, $a0, -0xC50
    ctx->pc = 0x28fba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964144));
label_28fba8:
    // 0x28fba8: 0xc0b3414  jal         func_2CD050
label_28fbac:
    if (ctx->pc == 0x28FBACu) {
        ctx->pc = 0x28FBACu;
            // 0x28fbac: 0xae600058  sw          $zero, 0x58($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 0));
        ctx->pc = 0x28FBB0u;
        goto label_28fbb0;
    }
    ctx->pc = 0x28FBA8u;
    SET_GPR_U32(ctx, 31, 0x28FBB0u);
    ctx->pc = 0x28FBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FBA8u;
            // 0x28fbac: 0xae600058  sw          $zero, 0x58($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 88), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD050u;
    if (runtime->hasFunction(0x2CD050u)) {
        auto targetFn = runtime->lookupFunction(0x2CD050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FBB0u; }
        if (ctx->pc != 0x28FBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__4CPotFi_0x2cd050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FBB0u; }
        if (ctx->pc != 0x28FBB0u) { return; }
    }
    ctx->pc = 0x28FBB0u;
label_28fbb0:
    // 0x28fbb0: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x28fbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
label_28fbb4:
    // 0x28fbb4: 0xc0b31e8  jal         func_2CC7A0
label_28fbb8:
    if (ctx->pc == 0x28FBB8u) {
        ctx->pc = 0x28FBB8u;
            // 0x28fbb8: 0x2484f430  addiu       $a0, $a0, -0xBD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964272));
        ctx->pc = 0x28FBBCu;
        goto label_28fbbc;
    }
    ctx->pc = 0x28FBB4u;
    SET_GPR_U32(ctx, 31, 0x28FBBCu);
    ctx->pc = 0x28FBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FBB4u;
            // 0x28fbb8: 0x2484f430  addiu       $a0, $a0, -0xBD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CC7A0u;
    if (runtime->hasFunction(0x2CC7A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CC7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FBBCu; }
        if (ctx->pc != 0x28FBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__5CBPotFv_0x2cc7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FBBCu; }
        if (ctx->pc != 0x28FBBCu) { return; }
    }
    ctx->pc = 0x28FBBCu;
label_28fbbc:
    // 0x28fbbc: 0xc09897c  jal         func_2625F0
label_28fbc0:
    if (ctx->pc == 0x28FBC0u) {
        ctx->pc = 0x28FBC0u;
            // 0x28fbc0: 0xaf808de0  sw          $zero, -0x7220($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938080), GPR_U32(ctx, 0));
        ctx->pc = 0x28FBC4u;
        goto label_28fbc4;
    }
    ctx->pc = 0x28FBBCu;
    SET_GPR_U32(ctx, 31, 0x28FBC4u);
    ctx->pc = 0x28FBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FBBCu;
            // 0x28fbc0: 0xaf808de0  sw          $zero, -0x7220($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938080), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2625F0u;
    if (runtime->hasFunction(0x2625F0u)) {
        auto targetFn = runtime->lookupFunction(0x2625F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FBC4u; }
        if (ctx->pc != 0x28FBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EdEventMapInit__Fv_0x2625f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FBC4u; }
        if (ctx->pc != 0x28FBC4u) { return; }
    }
    ctx->pc = 0x28FBC4u;
label_28fbc4:
    // 0x28fbc4: 0x8f848db8  lw          $a0, -0x7248($gp)
    ctx->pc = 0x28fbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_28fbc8:
    // 0x28fbc8: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_28fbcc:
    if (ctx->pc == 0x28FBCCu) {
        ctx->pc = 0x28FBD0u;
        goto label_28fbd0;
    }
    ctx->pc = 0x28FBC8u;
    {
        const bool branch_taken_0x28fbc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x28fbc8) {
            ctx->pc = 0x28FBD8u;
            goto label_28fbd8;
        }
    }
    ctx->pc = 0x28FBD0u;
label_28fbd0:
    // 0x28fbd0: 0xc076bb0  jal         func_1DAEC0
label_28fbd4:
    if (ctx->pc == 0x28FBD4u) {
        ctx->pc = 0x28FBD4u;
            // 0x28fbd4: 0x8f858dac  lw          $a1, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->pc = 0x28FBD8u;
        goto label_28fbd8;
    }
    ctx->pc = 0x28FBD0u;
    SET_GPR_U32(ctx, 31, 0x28FBD8u);
    ctx->pc = 0x28FBD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FBD0u;
            // 0x28fbd4: 0x8f858dac  lw          $a1, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DAEC0u;
    if (runtime->hasFunction(0x1DAEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DAEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FBD8u; }
        if (ctx->pc != 0x28FBD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CMonsterManFP6CScene_0x1daec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FBD8u; }
        if (ctx->pc != 0x28FBD8u) { return; }
    }
    ctx->pc = 0x28FBD8u;
label_28fbd8:
    // 0x28fbd8: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x28fbd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_28fbdc:
    // 0x28fbdc: 0xc0a0f58  jal         func_283D60
label_28fbe0:
    if (ctx->pc == 0x28FBE0u) {
        ctx->pc = 0x28FBE0u;
            // 0x28fbe0: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->pc = 0x28FBE4u;
        goto label_28fbe4;
    }
    ctx->pc = 0x28FBDCu;
    SET_GPR_U32(ctx, 31, 0x28FBE4u);
    ctx->pc = 0x28FBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FBDCu;
            // 0x28fbe0: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FBE4u; }
        if (ctx->pc != 0x28FBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FBE4u; }
        if (ctx->pc != 0x28FBE4u) { return; }
    }
    ctx->pc = 0x28FBE4u;
label_28fbe4:
    // 0x28fbe4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28fbe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28fbe8:
    // 0x28fbe8: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x28fbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_28fbec:
    // 0x28fbec: 0xac2004c0  sw          $zero, 0x4C0($at)
    ctx->pc = 0x28fbecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1216), GPR_U32(ctx, 0));
label_28fbf0:
    // 0x28fbf0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x28fbf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_28fbf4:
    // 0x28fbf4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28fbf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28fbf8:
    // 0x28fbf8: 0xac2004c4  sw          $zero, 0x4C4($at)
    ctx->pc = 0x28fbf8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1220), GPR_U32(ctx, 0));
label_28fbfc:
    // 0x28fbfc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28fbfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28fc00:
    // 0x28fc00: 0xac2005f0  sw          $zero, 0x5F0($at)
    ctx->pc = 0x28fc00u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1520), GPR_U32(ctx, 0));
label_28fc04:
    // 0x28fc04: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28fc04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28fc08:
    // 0x28fc08: 0xac200628  sw          $zero, 0x628($at)
    ctx->pc = 0x28fc08u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1576), GPR_U32(ctx, 0));
label_28fc0c:
    // 0x28fc0c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28fc0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28fc10:
    // 0x28fc10: 0xac2004c8  sw          $zero, 0x4C8($at)
    ctx->pc = 0x28fc10u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1224), GPR_U32(ctx, 0));
label_28fc14:
    // 0x28fc14: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28fc14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28fc18:
    // 0x28fc18: 0xa420062c  sh          $zero, 0x62C($at)
    ctx->pc = 0x28fc18u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 1580), (uint16_t)GPR_U32(ctx, 0));
label_28fc1c:
    // 0x28fc1c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28fc1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28fc20:
    // 0x28fc20: 0x84270638  lh          $a3, 0x638($at)
    ctx->pc = 0x28fc20u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 1592)));
label_28fc24:
    // 0x28fc24: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28fc24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28fc28:
    // 0x28fc28: 0x8428063a  lh          $t0, 0x63A($at)
    ctx->pc = 0x28fc28u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 1594)));
label_28fc2c:
    // 0x28fc2c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28fc2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28fc30:
    // 0x28fc30: 0x8c26064c  lw          $a2, 0x64C($at)
    ctx->pc = 0x28fc30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 1612)));
label_28fc34:
    // 0x28fc34: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28fc34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28fc38:
    // 0x28fc38: 0xc42c063c  lwc1        $f12, 0x63C($at)
    ctx->pc = 0x28fc38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 1596)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_28fc3c:
    // 0x28fc3c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x28fc3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_28fc40:
    // 0x28fc40: 0xc42d0640  lwc1        $f13, 0x640($at)
    ctx->pc = 0x28fc40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 1600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_28fc44:
    // 0x28fc44: 0xc07524c  jal         func_1D4930
label_28fc48:
    if (ctx->pc == 0x28FC48u) {
        ctx->pc = 0x28FC48u;
            // 0x28fc48: 0x248404c0  addiu       $a0, $a0, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1216));
        ctx->pc = 0x28FC4Cu;
        goto label_28fc4c;
    }
    ctx->pc = 0x28FC44u;
    SET_GPR_U32(ctx, 31, 0x28FC4Cu);
    ctx->pc = 0x28FC48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FC44u;
            // 0x28fc48: 0x248404c0  addiu       $a0, $a0, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4930u;
    if (runtime->hasFunction(0x1D4930u)) {
        auto targetFn = runtime->lookupFunction(0x1D4930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FC4Cu; }
        if (ctx->pc != 0x28FC4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMapInfo__14CMiniMapSymbolFP4CMapP13CAutoMapPartsiiff_0x1d4930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FC4Cu; }
        if (ctx->pc != 0x28FC4Cu) { return; }
    }
    ctx->pc = 0x28FC4Cu;
label_28fc4c:
    // 0x28fc4c: 0x8e71007c  lw          $s1, 0x7C($s3)
    ctx->pc = 0x28fc4cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 124)));
label_28fc50:
    // 0x28fc50: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x28fc50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28fc54:
    // 0x28fc54: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28fc54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28fc58:
    // 0x28fc58: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x28fc58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_28fc5c:
    // 0x28fc5c: 0x8c590010  lw          $t9, 0x10($v0)
    ctx->pc = 0x28fc5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_28fc60:
    // 0x28fc60: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x28fc60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_28fc64:
    // 0x28fc64: 0x320f809  jalr        $t9
label_28fc68:
    if (ctx->pc == 0x28FC68u) {
        ctx->pc = 0x28FC68u;
            // 0x28fc68: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x28FC6Cu;
        goto label_28fc6c;
    }
    ctx->pc = 0x28FC64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x28FC6Cu);
        ctx->pc = 0x28FC68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FC64u;
            // 0x28fc68: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x28FC6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x28FC6Cu; }
            if (ctx->pc != 0x28FC6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x28FC6Cu;
label_28fc6c:
    // 0x28fc6c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28fc6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_28fc70:
    // 0x28fc70: 0x2a020018  slti        $v0, $s0, 0x18
    ctx->pc = 0x28fc70u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
label_28fc74:
    // 0x28fc74: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_28fc78:
    if (ctx->pc == 0x28FC78u) {
        ctx->pc = 0x28FC78u;
            // 0x28fc78: 0x26520070  addiu       $s2, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->pc = 0x28FC7Cu;
        goto label_28fc7c;
    }
    ctx->pc = 0x28FC74u;
    {
        const bool branch_taken_0x28fc74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28FC78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FC74u;
            // 0x28fc78: 0x26520070  addiu       $s2, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28fc74) {
            ctx->pc = 0x28FC58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_28fc58;
        }
    }
    ctx->pc = 0x28FC7Cu;
label_28fc7c:
    // 0x28fc7c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x28fc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_28fc80:
    // 0x28fc80: 0xc0a3058  jal         func_28C160
label_28fc84:
    if (ctx->pc == 0x28FC84u) {
        ctx->pc = 0x28FC84u;
            // 0x28fc84: 0x24844b20  addiu       $a0, $a0, 0x4B20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19232));
        ctx->pc = 0x28FC88u;
        goto label_28fc88;
    }
    ctx->pc = 0x28FC80u;
    SET_GPR_U32(ctx, 31, 0x28FC88u);
    ctx->pc = 0x28FC84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FC80u;
            // 0x28fc84: 0x24844b20  addiu       $a0, $a0, 0x4B20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C160u;
    if (runtime->hasFunction(0x28C160u)) {
        auto targetFn = runtime->lookupFunction(0x28C160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FC88u; }
        if (ctx->pc != 0x28FC88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Clear__13CRandomCircleFv_0x28c160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FC88u; }
        if (ctx->pc != 0x28FC88u) { return; }
    }
    ctx->pc = 0x28FC88u;
label_28fc88:
    // 0x28fc88: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x28fc88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_28fc8c:
    // 0x28fc8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28fc8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28fc90:
    // 0x28fc90: 0xc0a2ef0  jal         func_28BBC0
label_28fc94:
    if (ctx->pc == 0x28FC94u) {
        ctx->pc = 0x28FC94u;
            // 0x28fc94: 0x248451c0  addiu       $a0, $a0, 0x51C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20928));
        ctx->pc = 0x28FC98u;
        goto label_28fc98;
    }
    ctx->pc = 0x28FC90u;
    SET_GPR_U32(ctx, 31, 0x28FC98u);
    ctx->pc = 0x28FC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FC90u;
            // 0x28fc94: 0x248451c0  addiu       $a0, $a0, 0x51C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28BBC0u;
    if (runtime->hasFunction(0x28BBC0u)) {
        auto targetFn = runtime->lookupFunction(0x28BBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FC98u; }
        if (ctx->pc != 0x28FC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFlag__9CGeoStoneFi_0x28bbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FC98u; }
        if (ctx->pc != 0x28FC98u) { return; }
    }
    ctx->pc = 0x28FC98u;
label_28fc98:
    // 0x28fc98: 0xc06e58c  jal         func_1B9630
label_28fc9c:
    if (ctx->pc == 0x28FC9Cu) {
        ctx->pc = 0x28FC9Cu;
            // 0x28fc9c: 0x27848de8  addiu       $a0, $gp, -0x7218 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938088));
        ctx->pc = 0x28FCA0u;
        goto label_28fca0;
    }
    ctx->pc = 0x28FC98u;
    SET_GPR_U32(ctx, 31, 0x28FCA0u);
    ctx->pc = 0x28FC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FC98u;
            // 0x28fc9c: 0x27848de8  addiu       $a0, $gp, -0x7218 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9630u;
    if (runtime->hasFunction(0x1B9630u)) {
        auto targetFn = runtime->lookupFunction(0x1B9630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FCA0u; }
        if (ctx->pc != 0x28FCA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Clear__16CPullItemManagerFv_0x1b9630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FCA0u; }
        if (ctx->pc != 0x28FCA0u) { return; }
    }
    ctx->pc = 0x28FCA0u;
label_28fca0:
    // 0x28fca0: 0x8f858dac  lw          $a1, -0x7254($gp)
    ctx->pc = 0x28fca0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_28fca4:
    // 0x28fca4: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x28fca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_28fca8:
    // 0x28fca8: 0xc06ea70  jal         func_1BA9C0
label_28fcac:
    if (ctx->pc == 0x28FCACu) {
        ctx->pc = 0x28FCACu;
            // 0x28fcac: 0x24840710  addiu       $a0, $a0, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
        ctx->pc = 0x28FCB0u;
        goto label_28fcb0;
    }
    ctx->pc = 0x28FCA8u;
    SET_GPR_U32(ctx, 31, 0x28FCB0u);
    ctx->pc = 0x28FCACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FCA8u;
            // 0x28fcac: 0x24840710  addiu       $a0, $a0, 0x710 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA9C0u;
    if (runtime->hasFunction(0x1BA9C0u)) {
        auto targetFn = runtime->lookupFunction(0x1BA9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FCB0u; }
        if (ctx->pc != 0x28FCB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CColPrimManFP6CScene_0x1ba9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FCB0u; }
        if (ctx->pc != 0x28FCB0u) { return; }
    }
    ctx->pc = 0x28FCB0u;
label_28fcb0:
    // 0x28fcb0: 0xc0b8554  jal         func_2E1550
label_28fcb4:
    if (ctx->pc == 0x28FCB4u) {
        ctx->pc = 0x28FCB4u;
            // 0x28fcb4: 0x8f848ddc  lw          $a0, -0x7224($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
        ctx->pc = 0x28FCB8u;
        goto label_28fcb8;
    }
    ctx->pc = 0x28FCB0u;
    SET_GPR_U32(ctx, 31, 0x28FCB8u);
    ctx->pc = 0x28FCB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28FCB0u;
            // 0x28fcb4: 0x8f848ddc  lw          $a0, -0x7224($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E1550u;
    if (runtime->hasFunction(0x2E1550u)) {
        auto targetFn = runtime->lookupFunction(0x2E1550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FCB8u; }
        if (ctx->pc != 0x28FCB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AllClearEffSpt__16CEffectScriptManFv_0x2e1550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FCB8u; }
        if (ctx->pc != 0x28FCB8u) { return; }
    }
    ctx->pc = 0x28FCB8u;
label_28fcb8:
    // 0x28fcb8: 0xc0bddb4  jal         func_2F76D0
label_28fcbc:
    if (ctx->pc == 0x28FCBCu) {
        ctx->pc = 0x28FCC0u;
        goto label_28fcc0;
    }
    ctx->pc = 0x28FCB8u;
    SET_GPR_U32(ctx, 31, 0x28FCC0u);
    ctx->pc = 0x2F76D0u;
    if (runtime->hasFunction(0x2F76D0u)) {
        auto targetFn = runtime->lookupFunction(0x2F76D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FCC0u; }
        if (ctx->pc != 0x28FCC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitS51Thunder__Fv_0x2f76d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28FCC0u; }
        if (ctx->pc != 0x28FCC0u) { return; }
    }
    ctx->pc = 0x28FCC0u;
label_28fcc0:
    // 0x28fcc0: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x28fcc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_28fcc4:
    // 0x28fcc4: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x28fcc4u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_28fcc8:
    // 0x28fcc8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x28fcc8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_28fccc:
    // 0x28fccc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x28fcccu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_28fcd0:
    // 0x28fcd0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x28fcd0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_28fcd4:
    // 0x28fcd4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28fcd4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_28fcd8:
    // 0x28fcd8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28fcd8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_28fcdc:
    // 0x28fcdc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28fcdcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_28fce0:
    // 0x28fce0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28fce0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_28fce4:
    // 0x28fce4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28fce4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_28fce8:
    // 0x28fce8: 0x3e00008  jr          $ra
label_28fcec:
    if (ctx->pc == 0x28FCECu) {
        ctx->pc = 0x28FCECu;
            // 0x28fcec: 0x27bd0380  addiu       $sp, $sp, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
        ctx->pc = 0x28FCF0u;
        goto label_fallthrough_0x28fce8;
    }
    ctx->pc = 0x28FCE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28FCECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28FCE8u;
            // 0x28fcec: 0x27bd0380  addiu       $sp, $sp, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x28fce8:
    ctx->pc = 0x28FCF0u;
}
