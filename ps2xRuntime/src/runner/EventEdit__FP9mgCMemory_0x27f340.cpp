#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EventEdit__FP9mgCMemory
// Address: 0x27f340 - 0x280024
void EventEdit__FP9mgCMemory_0x27f340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EventEdit__FP9mgCMemory_0x27f340");
#endif

    switch (ctx->pc) {
        case 0x27f340u: goto label_27f340;
        case 0x27f344u: goto label_27f344;
        case 0x27f348u: goto label_27f348;
        case 0x27f34cu: goto label_27f34c;
        case 0x27f350u: goto label_27f350;
        case 0x27f354u: goto label_27f354;
        case 0x27f358u: goto label_27f358;
        case 0x27f35cu: goto label_27f35c;
        case 0x27f360u: goto label_27f360;
        case 0x27f364u: goto label_27f364;
        case 0x27f368u: goto label_27f368;
        case 0x27f36cu: goto label_27f36c;
        case 0x27f370u: goto label_27f370;
        case 0x27f374u: goto label_27f374;
        case 0x27f378u: goto label_27f378;
        case 0x27f37cu: goto label_27f37c;
        case 0x27f380u: goto label_27f380;
        case 0x27f384u: goto label_27f384;
        case 0x27f388u: goto label_27f388;
        case 0x27f38cu: goto label_27f38c;
        case 0x27f390u: goto label_27f390;
        case 0x27f394u: goto label_27f394;
        case 0x27f398u: goto label_27f398;
        case 0x27f39cu: goto label_27f39c;
        case 0x27f3a0u: goto label_27f3a0;
        case 0x27f3a4u: goto label_27f3a4;
        case 0x27f3a8u: goto label_27f3a8;
        case 0x27f3acu: goto label_27f3ac;
        case 0x27f3b0u: goto label_27f3b0;
        case 0x27f3b4u: goto label_27f3b4;
        case 0x27f3b8u: goto label_27f3b8;
        case 0x27f3bcu: goto label_27f3bc;
        case 0x27f3c0u: goto label_27f3c0;
        case 0x27f3c4u: goto label_27f3c4;
        case 0x27f3c8u: goto label_27f3c8;
        case 0x27f3ccu: goto label_27f3cc;
        case 0x27f3d0u: goto label_27f3d0;
        case 0x27f3d4u: goto label_27f3d4;
        case 0x27f3d8u: goto label_27f3d8;
        case 0x27f3dcu: goto label_27f3dc;
        case 0x27f3e0u: goto label_27f3e0;
        case 0x27f3e4u: goto label_27f3e4;
        case 0x27f3e8u: goto label_27f3e8;
        case 0x27f3ecu: goto label_27f3ec;
        case 0x27f3f0u: goto label_27f3f0;
        case 0x27f3f4u: goto label_27f3f4;
        case 0x27f3f8u: goto label_27f3f8;
        case 0x27f3fcu: goto label_27f3fc;
        case 0x27f400u: goto label_27f400;
        case 0x27f404u: goto label_27f404;
        case 0x27f408u: goto label_27f408;
        case 0x27f40cu: goto label_27f40c;
        case 0x27f410u: goto label_27f410;
        case 0x27f414u: goto label_27f414;
        case 0x27f418u: goto label_27f418;
        case 0x27f41cu: goto label_27f41c;
        case 0x27f420u: goto label_27f420;
        case 0x27f424u: goto label_27f424;
        case 0x27f428u: goto label_27f428;
        case 0x27f42cu: goto label_27f42c;
        case 0x27f430u: goto label_27f430;
        case 0x27f434u: goto label_27f434;
        case 0x27f438u: goto label_27f438;
        case 0x27f43cu: goto label_27f43c;
        case 0x27f440u: goto label_27f440;
        case 0x27f444u: goto label_27f444;
        case 0x27f448u: goto label_27f448;
        case 0x27f44cu: goto label_27f44c;
        case 0x27f450u: goto label_27f450;
        case 0x27f454u: goto label_27f454;
        case 0x27f458u: goto label_27f458;
        case 0x27f45cu: goto label_27f45c;
        case 0x27f460u: goto label_27f460;
        case 0x27f464u: goto label_27f464;
        case 0x27f468u: goto label_27f468;
        case 0x27f46cu: goto label_27f46c;
        case 0x27f470u: goto label_27f470;
        case 0x27f474u: goto label_27f474;
        case 0x27f478u: goto label_27f478;
        case 0x27f47cu: goto label_27f47c;
        case 0x27f480u: goto label_27f480;
        case 0x27f484u: goto label_27f484;
        case 0x27f488u: goto label_27f488;
        case 0x27f48cu: goto label_27f48c;
        case 0x27f490u: goto label_27f490;
        case 0x27f494u: goto label_27f494;
        case 0x27f498u: goto label_27f498;
        case 0x27f49cu: goto label_27f49c;
        case 0x27f4a0u: goto label_27f4a0;
        case 0x27f4a4u: goto label_27f4a4;
        case 0x27f4a8u: goto label_27f4a8;
        case 0x27f4acu: goto label_27f4ac;
        case 0x27f4b0u: goto label_27f4b0;
        case 0x27f4b4u: goto label_27f4b4;
        case 0x27f4b8u: goto label_27f4b8;
        case 0x27f4bcu: goto label_27f4bc;
        case 0x27f4c0u: goto label_27f4c0;
        case 0x27f4c4u: goto label_27f4c4;
        case 0x27f4c8u: goto label_27f4c8;
        case 0x27f4ccu: goto label_27f4cc;
        case 0x27f4d0u: goto label_27f4d0;
        case 0x27f4d4u: goto label_27f4d4;
        case 0x27f4d8u: goto label_27f4d8;
        case 0x27f4dcu: goto label_27f4dc;
        case 0x27f4e0u: goto label_27f4e0;
        case 0x27f4e4u: goto label_27f4e4;
        case 0x27f4e8u: goto label_27f4e8;
        case 0x27f4ecu: goto label_27f4ec;
        case 0x27f4f0u: goto label_27f4f0;
        case 0x27f4f4u: goto label_27f4f4;
        case 0x27f4f8u: goto label_27f4f8;
        case 0x27f4fcu: goto label_27f4fc;
        case 0x27f500u: goto label_27f500;
        case 0x27f504u: goto label_27f504;
        case 0x27f508u: goto label_27f508;
        case 0x27f50cu: goto label_27f50c;
        case 0x27f510u: goto label_27f510;
        case 0x27f514u: goto label_27f514;
        case 0x27f518u: goto label_27f518;
        case 0x27f51cu: goto label_27f51c;
        case 0x27f520u: goto label_27f520;
        case 0x27f524u: goto label_27f524;
        case 0x27f528u: goto label_27f528;
        case 0x27f52cu: goto label_27f52c;
        case 0x27f530u: goto label_27f530;
        case 0x27f534u: goto label_27f534;
        case 0x27f538u: goto label_27f538;
        case 0x27f53cu: goto label_27f53c;
        case 0x27f540u: goto label_27f540;
        case 0x27f544u: goto label_27f544;
        case 0x27f548u: goto label_27f548;
        case 0x27f54cu: goto label_27f54c;
        case 0x27f550u: goto label_27f550;
        case 0x27f554u: goto label_27f554;
        case 0x27f558u: goto label_27f558;
        case 0x27f55cu: goto label_27f55c;
        case 0x27f560u: goto label_27f560;
        case 0x27f564u: goto label_27f564;
        case 0x27f568u: goto label_27f568;
        case 0x27f56cu: goto label_27f56c;
        case 0x27f570u: goto label_27f570;
        case 0x27f574u: goto label_27f574;
        case 0x27f578u: goto label_27f578;
        case 0x27f57cu: goto label_27f57c;
        case 0x27f580u: goto label_27f580;
        case 0x27f584u: goto label_27f584;
        case 0x27f588u: goto label_27f588;
        case 0x27f58cu: goto label_27f58c;
        case 0x27f590u: goto label_27f590;
        case 0x27f594u: goto label_27f594;
        case 0x27f598u: goto label_27f598;
        case 0x27f59cu: goto label_27f59c;
        case 0x27f5a0u: goto label_27f5a0;
        case 0x27f5a4u: goto label_27f5a4;
        case 0x27f5a8u: goto label_27f5a8;
        case 0x27f5acu: goto label_27f5ac;
        case 0x27f5b0u: goto label_27f5b0;
        case 0x27f5b4u: goto label_27f5b4;
        case 0x27f5b8u: goto label_27f5b8;
        case 0x27f5bcu: goto label_27f5bc;
        case 0x27f5c0u: goto label_27f5c0;
        case 0x27f5c4u: goto label_27f5c4;
        case 0x27f5c8u: goto label_27f5c8;
        case 0x27f5ccu: goto label_27f5cc;
        case 0x27f5d0u: goto label_27f5d0;
        case 0x27f5d4u: goto label_27f5d4;
        case 0x27f5d8u: goto label_27f5d8;
        case 0x27f5dcu: goto label_27f5dc;
        case 0x27f5e0u: goto label_27f5e0;
        case 0x27f5e4u: goto label_27f5e4;
        case 0x27f5e8u: goto label_27f5e8;
        case 0x27f5ecu: goto label_27f5ec;
        case 0x27f5f0u: goto label_27f5f0;
        case 0x27f5f4u: goto label_27f5f4;
        case 0x27f5f8u: goto label_27f5f8;
        case 0x27f5fcu: goto label_27f5fc;
        case 0x27f600u: goto label_27f600;
        case 0x27f604u: goto label_27f604;
        case 0x27f608u: goto label_27f608;
        case 0x27f60cu: goto label_27f60c;
        case 0x27f610u: goto label_27f610;
        case 0x27f614u: goto label_27f614;
        case 0x27f618u: goto label_27f618;
        case 0x27f61cu: goto label_27f61c;
        case 0x27f620u: goto label_27f620;
        case 0x27f624u: goto label_27f624;
        case 0x27f628u: goto label_27f628;
        case 0x27f62cu: goto label_27f62c;
        case 0x27f630u: goto label_27f630;
        case 0x27f634u: goto label_27f634;
        case 0x27f638u: goto label_27f638;
        case 0x27f63cu: goto label_27f63c;
        case 0x27f640u: goto label_27f640;
        case 0x27f644u: goto label_27f644;
        case 0x27f648u: goto label_27f648;
        case 0x27f64cu: goto label_27f64c;
        case 0x27f650u: goto label_27f650;
        case 0x27f654u: goto label_27f654;
        case 0x27f658u: goto label_27f658;
        case 0x27f65cu: goto label_27f65c;
        case 0x27f660u: goto label_27f660;
        case 0x27f664u: goto label_27f664;
        case 0x27f668u: goto label_27f668;
        case 0x27f66cu: goto label_27f66c;
        case 0x27f670u: goto label_27f670;
        case 0x27f674u: goto label_27f674;
        case 0x27f678u: goto label_27f678;
        case 0x27f67cu: goto label_27f67c;
        case 0x27f680u: goto label_27f680;
        case 0x27f684u: goto label_27f684;
        case 0x27f688u: goto label_27f688;
        case 0x27f68cu: goto label_27f68c;
        case 0x27f690u: goto label_27f690;
        case 0x27f694u: goto label_27f694;
        case 0x27f698u: goto label_27f698;
        case 0x27f69cu: goto label_27f69c;
        case 0x27f6a0u: goto label_27f6a0;
        case 0x27f6a4u: goto label_27f6a4;
        case 0x27f6a8u: goto label_27f6a8;
        case 0x27f6acu: goto label_27f6ac;
        case 0x27f6b0u: goto label_27f6b0;
        case 0x27f6b4u: goto label_27f6b4;
        case 0x27f6b8u: goto label_27f6b8;
        case 0x27f6bcu: goto label_27f6bc;
        case 0x27f6c0u: goto label_27f6c0;
        case 0x27f6c4u: goto label_27f6c4;
        case 0x27f6c8u: goto label_27f6c8;
        case 0x27f6ccu: goto label_27f6cc;
        case 0x27f6d0u: goto label_27f6d0;
        case 0x27f6d4u: goto label_27f6d4;
        case 0x27f6d8u: goto label_27f6d8;
        case 0x27f6dcu: goto label_27f6dc;
        case 0x27f6e0u: goto label_27f6e0;
        case 0x27f6e4u: goto label_27f6e4;
        case 0x27f6e8u: goto label_27f6e8;
        case 0x27f6ecu: goto label_27f6ec;
        case 0x27f6f0u: goto label_27f6f0;
        case 0x27f6f4u: goto label_27f6f4;
        case 0x27f6f8u: goto label_27f6f8;
        case 0x27f6fcu: goto label_27f6fc;
        case 0x27f700u: goto label_27f700;
        case 0x27f704u: goto label_27f704;
        case 0x27f708u: goto label_27f708;
        case 0x27f70cu: goto label_27f70c;
        case 0x27f710u: goto label_27f710;
        case 0x27f714u: goto label_27f714;
        case 0x27f718u: goto label_27f718;
        case 0x27f71cu: goto label_27f71c;
        case 0x27f720u: goto label_27f720;
        case 0x27f724u: goto label_27f724;
        case 0x27f728u: goto label_27f728;
        case 0x27f72cu: goto label_27f72c;
        case 0x27f730u: goto label_27f730;
        case 0x27f734u: goto label_27f734;
        case 0x27f738u: goto label_27f738;
        case 0x27f73cu: goto label_27f73c;
        case 0x27f740u: goto label_27f740;
        case 0x27f744u: goto label_27f744;
        case 0x27f748u: goto label_27f748;
        case 0x27f74cu: goto label_27f74c;
        case 0x27f750u: goto label_27f750;
        case 0x27f754u: goto label_27f754;
        case 0x27f758u: goto label_27f758;
        case 0x27f75cu: goto label_27f75c;
        case 0x27f760u: goto label_27f760;
        case 0x27f764u: goto label_27f764;
        case 0x27f768u: goto label_27f768;
        case 0x27f76cu: goto label_27f76c;
        case 0x27f770u: goto label_27f770;
        case 0x27f774u: goto label_27f774;
        case 0x27f778u: goto label_27f778;
        case 0x27f77cu: goto label_27f77c;
        case 0x27f780u: goto label_27f780;
        case 0x27f784u: goto label_27f784;
        case 0x27f788u: goto label_27f788;
        case 0x27f78cu: goto label_27f78c;
        case 0x27f790u: goto label_27f790;
        case 0x27f794u: goto label_27f794;
        case 0x27f798u: goto label_27f798;
        case 0x27f79cu: goto label_27f79c;
        case 0x27f7a0u: goto label_27f7a0;
        case 0x27f7a4u: goto label_27f7a4;
        case 0x27f7a8u: goto label_27f7a8;
        case 0x27f7acu: goto label_27f7ac;
        case 0x27f7b0u: goto label_27f7b0;
        case 0x27f7b4u: goto label_27f7b4;
        case 0x27f7b8u: goto label_27f7b8;
        case 0x27f7bcu: goto label_27f7bc;
        case 0x27f7c0u: goto label_27f7c0;
        case 0x27f7c4u: goto label_27f7c4;
        case 0x27f7c8u: goto label_27f7c8;
        case 0x27f7ccu: goto label_27f7cc;
        case 0x27f7d0u: goto label_27f7d0;
        case 0x27f7d4u: goto label_27f7d4;
        case 0x27f7d8u: goto label_27f7d8;
        case 0x27f7dcu: goto label_27f7dc;
        case 0x27f7e0u: goto label_27f7e0;
        case 0x27f7e4u: goto label_27f7e4;
        case 0x27f7e8u: goto label_27f7e8;
        case 0x27f7ecu: goto label_27f7ec;
        case 0x27f7f0u: goto label_27f7f0;
        case 0x27f7f4u: goto label_27f7f4;
        case 0x27f7f8u: goto label_27f7f8;
        case 0x27f7fcu: goto label_27f7fc;
        case 0x27f800u: goto label_27f800;
        case 0x27f804u: goto label_27f804;
        case 0x27f808u: goto label_27f808;
        case 0x27f80cu: goto label_27f80c;
        case 0x27f810u: goto label_27f810;
        case 0x27f814u: goto label_27f814;
        case 0x27f818u: goto label_27f818;
        case 0x27f81cu: goto label_27f81c;
        case 0x27f820u: goto label_27f820;
        case 0x27f824u: goto label_27f824;
        case 0x27f828u: goto label_27f828;
        case 0x27f82cu: goto label_27f82c;
        case 0x27f830u: goto label_27f830;
        case 0x27f834u: goto label_27f834;
        case 0x27f838u: goto label_27f838;
        case 0x27f83cu: goto label_27f83c;
        case 0x27f840u: goto label_27f840;
        case 0x27f844u: goto label_27f844;
        case 0x27f848u: goto label_27f848;
        case 0x27f84cu: goto label_27f84c;
        case 0x27f850u: goto label_27f850;
        case 0x27f854u: goto label_27f854;
        case 0x27f858u: goto label_27f858;
        case 0x27f85cu: goto label_27f85c;
        case 0x27f860u: goto label_27f860;
        case 0x27f864u: goto label_27f864;
        case 0x27f868u: goto label_27f868;
        case 0x27f86cu: goto label_27f86c;
        case 0x27f870u: goto label_27f870;
        case 0x27f874u: goto label_27f874;
        case 0x27f878u: goto label_27f878;
        case 0x27f87cu: goto label_27f87c;
        case 0x27f880u: goto label_27f880;
        case 0x27f884u: goto label_27f884;
        case 0x27f888u: goto label_27f888;
        case 0x27f88cu: goto label_27f88c;
        case 0x27f890u: goto label_27f890;
        case 0x27f894u: goto label_27f894;
        case 0x27f898u: goto label_27f898;
        case 0x27f89cu: goto label_27f89c;
        case 0x27f8a0u: goto label_27f8a0;
        case 0x27f8a4u: goto label_27f8a4;
        case 0x27f8a8u: goto label_27f8a8;
        case 0x27f8acu: goto label_27f8ac;
        case 0x27f8b0u: goto label_27f8b0;
        case 0x27f8b4u: goto label_27f8b4;
        case 0x27f8b8u: goto label_27f8b8;
        case 0x27f8bcu: goto label_27f8bc;
        case 0x27f8c0u: goto label_27f8c0;
        case 0x27f8c4u: goto label_27f8c4;
        case 0x27f8c8u: goto label_27f8c8;
        case 0x27f8ccu: goto label_27f8cc;
        case 0x27f8d0u: goto label_27f8d0;
        case 0x27f8d4u: goto label_27f8d4;
        case 0x27f8d8u: goto label_27f8d8;
        case 0x27f8dcu: goto label_27f8dc;
        case 0x27f8e0u: goto label_27f8e0;
        case 0x27f8e4u: goto label_27f8e4;
        case 0x27f8e8u: goto label_27f8e8;
        case 0x27f8ecu: goto label_27f8ec;
        case 0x27f8f0u: goto label_27f8f0;
        case 0x27f8f4u: goto label_27f8f4;
        case 0x27f8f8u: goto label_27f8f8;
        case 0x27f8fcu: goto label_27f8fc;
        case 0x27f900u: goto label_27f900;
        case 0x27f904u: goto label_27f904;
        case 0x27f908u: goto label_27f908;
        case 0x27f90cu: goto label_27f90c;
        case 0x27f910u: goto label_27f910;
        case 0x27f914u: goto label_27f914;
        case 0x27f918u: goto label_27f918;
        case 0x27f91cu: goto label_27f91c;
        case 0x27f920u: goto label_27f920;
        case 0x27f924u: goto label_27f924;
        case 0x27f928u: goto label_27f928;
        case 0x27f92cu: goto label_27f92c;
        case 0x27f930u: goto label_27f930;
        case 0x27f934u: goto label_27f934;
        case 0x27f938u: goto label_27f938;
        case 0x27f93cu: goto label_27f93c;
        case 0x27f940u: goto label_27f940;
        case 0x27f944u: goto label_27f944;
        case 0x27f948u: goto label_27f948;
        case 0x27f94cu: goto label_27f94c;
        case 0x27f950u: goto label_27f950;
        case 0x27f954u: goto label_27f954;
        case 0x27f958u: goto label_27f958;
        case 0x27f95cu: goto label_27f95c;
        case 0x27f960u: goto label_27f960;
        case 0x27f964u: goto label_27f964;
        case 0x27f968u: goto label_27f968;
        case 0x27f96cu: goto label_27f96c;
        case 0x27f970u: goto label_27f970;
        case 0x27f974u: goto label_27f974;
        case 0x27f978u: goto label_27f978;
        case 0x27f97cu: goto label_27f97c;
        case 0x27f980u: goto label_27f980;
        case 0x27f984u: goto label_27f984;
        case 0x27f988u: goto label_27f988;
        case 0x27f98cu: goto label_27f98c;
        case 0x27f990u: goto label_27f990;
        case 0x27f994u: goto label_27f994;
        case 0x27f998u: goto label_27f998;
        case 0x27f99cu: goto label_27f99c;
        case 0x27f9a0u: goto label_27f9a0;
        case 0x27f9a4u: goto label_27f9a4;
        case 0x27f9a8u: goto label_27f9a8;
        case 0x27f9acu: goto label_27f9ac;
        case 0x27f9b0u: goto label_27f9b0;
        case 0x27f9b4u: goto label_27f9b4;
        case 0x27f9b8u: goto label_27f9b8;
        case 0x27f9bcu: goto label_27f9bc;
        case 0x27f9c0u: goto label_27f9c0;
        case 0x27f9c4u: goto label_27f9c4;
        case 0x27f9c8u: goto label_27f9c8;
        case 0x27f9ccu: goto label_27f9cc;
        case 0x27f9d0u: goto label_27f9d0;
        case 0x27f9d4u: goto label_27f9d4;
        case 0x27f9d8u: goto label_27f9d8;
        case 0x27f9dcu: goto label_27f9dc;
        case 0x27f9e0u: goto label_27f9e0;
        case 0x27f9e4u: goto label_27f9e4;
        case 0x27f9e8u: goto label_27f9e8;
        case 0x27f9ecu: goto label_27f9ec;
        case 0x27f9f0u: goto label_27f9f0;
        case 0x27f9f4u: goto label_27f9f4;
        case 0x27f9f8u: goto label_27f9f8;
        case 0x27f9fcu: goto label_27f9fc;
        case 0x27fa00u: goto label_27fa00;
        case 0x27fa04u: goto label_27fa04;
        case 0x27fa08u: goto label_27fa08;
        case 0x27fa0cu: goto label_27fa0c;
        case 0x27fa10u: goto label_27fa10;
        case 0x27fa14u: goto label_27fa14;
        case 0x27fa18u: goto label_27fa18;
        case 0x27fa1cu: goto label_27fa1c;
        case 0x27fa20u: goto label_27fa20;
        case 0x27fa24u: goto label_27fa24;
        case 0x27fa28u: goto label_27fa28;
        case 0x27fa2cu: goto label_27fa2c;
        case 0x27fa30u: goto label_27fa30;
        case 0x27fa34u: goto label_27fa34;
        case 0x27fa38u: goto label_27fa38;
        case 0x27fa3cu: goto label_27fa3c;
        case 0x27fa40u: goto label_27fa40;
        case 0x27fa44u: goto label_27fa44;
        case 0x27fa48u: goto label_27fa48;
        case 0x27fa4cu: goto label_27fa4c;
        case 0x27fa50u: goto label_27fa50;
        case 0x27fa54u: goto label_27fa54;
        case 0x27fa58u: goto label_27fa58;
        case 0x27fa5cu: goto label_27fa5c;
        case 0x27fa60u: goto label_27fa60;
        case 0x27fa64u: goto label_27fa64;
        case 0x27fa68u: goto label_27fa68;
        case 0x27fa6cu: goto label_27fa6c;
        case 0x27fa70u: goto label_27fa70;
        case 0x27fa74u: goto label_27fa74;
        case 0x27fa78u: goto label_27fa78;
        case 0x27fa7cu: goto label_27fa7c;
        case 0x27fa80u: goto label_27fa80;
        case 0x27fa84u: goto label_27fa84;
        case 0x27fa88u: goto label_27fa88;
        case 0x27fa8cu: goto label_27fa8c;
        case 0x27fa90u: goto label_27fa90;
        case 0x27fa94u: goto label_27fa94;
        case 0x27fa98u: goto label_27fa98;
        case 0x27fa9cu: goto label_27fa9c;
        case 0x27faa0u: goto label_27faa0;
        case 0x27faa4u: goto label_27faa4;
        case 0x27faa8u: goto label_27faa8;
        case 0x27faacu: goto label_27faac;
        case 0x27fab0u: goto label_27fab0;
        case 0x27fab4u: goto label_27fab4;
        case 0x27fab8u: goto label_27fab8;
        case 0x27fabcu: goto label_27fabc;
        case 0x27fac0u: goto label_27fac0;
        case 0x27fac4u: goto label_27fac4;
        case 0x27fac8u: goto label_27fac8;
        case 0x27faccu: goto label_27facc;
        case 0x27fad0u: goto label_27fad0;
        case 0x27fad4u: goto label_27fad4;
        case 0x27fad8u: goto label_27fad8;
        case 0x27fadcu: goto label_27fadc;
        case 0x27fae0u: goto label_27fae0;
        case 0x27fae4u: goto label_27fae4;
        case 0x27fae8u: goto label_27fae8;
        case 0x27faecu: goto label_27faec;
        case 0x27faf0u: goto label_27faf0;
        case 0x27faf4u: goto label_27faf4;
        case 0x27faf8u: goto label_27faf8;
        case 0x27fafcu: goto label_27fafc;
        case 0x27fb00u: goto label_27fb00;
        case 0x27fb04u: goto label_27fb04;
        case 0x27fb08u: goto label_27fb08;
        case 0x27fb0cu: goto label_27fb0c;
        case 0x27fb10u: goto label_27fb10;
        case 0x27fb14u: goto label_27fb14;
        case 0x27fb18u: goto label_27fb18;
        case 0x27fb1cu: goto label_27fb1c;
        case 0x27fb20u: goto label_27fb20;
        case 0x27fb24u: goto label_27fb24;
        case 0x27fb28u: goto label_27fb28;
        case 0x27fb2cu: goto label_27fb2c;
        case 0x27fb30u: goto label_27fb30;
        case 0x27fb34u: goto label_27fb34;
        case 0x27fb38u: goto label_27fb38;
        case 0x27fb3cu: goto label_27fb3c;
        case 0x27fb40u: goto label_27fb40;
        case 0x27fb44u: goto label_27fb44;
        case 0x27fb48u: goto label_27fb48;
        case 0x27fb4cu: goto label_27fb4c;
        case 0x27fb50u: goto label_27fb50;
        case 0x27fb54u: goto label_27fb54;
        case 0x27fb58u: goto label_27fb58;
        case 0x27fb5cu: goto label_27fb5c;
        case 0x27fb60u: goto label_27fb60;
        case 0x27fb64u: goto label_27fb64;
        case 0x27fb68u: goto label_27fb68;
        case 0x27fb6cu: goto label_27fb6c;
        case 0x27fb70u: goto label_27fb70;
        case 0x27fb74u: goto label_27fb74;
        case 0x27fb78u: goto label_27fb78;
        case 0x27fb7cu: goto label_27fb7c;
        case 0x27fb80u: goto label_27fb80;
        case 0x27fb84u: goto label_27fb84;
        case 0x27fb88u: goto label_27fb88;
        case 0x27fb8cu: goto label_27fb8c;
        case 0x27fb90u: goto label_27fb90;
        case 0x27fb94u: goto label_27fb94;
        case 0x27fb98u: goto label_27fb98;
        case 0x27fb9cu: goto label_27fb9c;
        case 0x27fba0u: goto label_27fba0;
        case 0x27fba4u: goto label_27fba4;
        case 0x27fba8u: goto label_27fba8;
        case 0x27fbacu: goto label_27fbac;
        case 0x27fbb0u: goto label_27fbb0;
        case 0x27fbb4u: goto label_27fbb4;
        case 0x27fbb8u: goto label_27fbb8;
        case 0x27fbbcu: goto label_27fbbc;
        case 0x27fbc0u: goto label_27fbc0;
        case 0x27fbc4u: goto label_27fbc4;
        case 0x27fbc8u: goto label_27fbc8;
        case 0x27fbccu: goto label_27fbcc;
        case 0x27fbd0u: goto label_27fbd0;
        case 0x27fbd4u: goto label_27fbd4;
        case 0x27fbd8u: goto label_27fbd8;
        case 0x27fbdcu: goto label_27fbdc;
        case 0x27fbe0u: goto label_27fbe0;
        case 0x27fbe4u: goto label_27fbe4;
        case 0x27fbe8u: goto label_27fbe8;
        case 0x27fbecu: goto label_27fbec;
        case 0x27fbf0u: goto label_27fbf0;
        case 0x27fbf4u: goto label_27fbf4;
        case 0x27fbf8u: goto label_27fbf8;
        case 0x27fbfcu: goto label_27fbfc;
        case 0x27fc00u: goto label_27fc00;
        case 0x27fc04u: goto label_27fc04;
        case 0x27fc08u: goto label_27fc08;
        case 0x27fc0cu: goto label_27fc0c;
        case 0x27fc10u: goto label_27fc10;
        case 0x27fc14u: goto label_27fc14;
        case 0x27fc18u: goto label_27fc18;
        case 0x27fc1cu: goto label_27fc1c;
        case 0x27fc20u: goto label_27fc20;
        case 0x27fc24u: goto label_27fc24;
        case 0x27fc28u: goto label_27fc28;
        case 0x27fc2cu: goto label_27fc2c;
        case 0x27fc30u: goto label_27fc30;
        case 0x27fc34u: goto label_27fc34;
        case 0x27fc38u: goto label_27fc38;
        case 0x27fc3cu: goto label_27fc3c;
        case 0x27fc40u: goto label_27fc40;
        case 0x27fc44u: goto label_27fc44;
        case 0x27fc48u: goto label_27fc48;
        case 0x27fc4cu: goto label_27fc4c;
        case 0x27fc50u: goto label_27fc50;
        case 0x27fc54u: goto label_27fc54;
        case 0x27fc58u: goto label_27fc58;
        case 0x27fc5cu: goto label_27fc5c;
        case 0x27fc60u: goto label_27fc60;
        case 0x27fc64u: goto label_27fc64;
        case 0x27fc68u: goto label_27fc68;
        case 0x27fc6cu: goto label_27fc6c;
        case 0x27fc70u: goto label_27fc70;
        case 0x27fc74u: goto label_27fc74;
        case 0x27fc78u: goto label_27fc78;
        case 0x27fc7cu: goto label_27fc7c;
        case 0x27fc80u: goto label_27fc80;
        case 0x27fc84u: goto label_27fc84;
        case 0x27fc88u: goto label_27fc88;
        case 0x27fc8cu: goto label_27fc8c;
        case 0x27fc90u: goto label_27fc90;
        case 0x27fc94u: goto label_27fc94;
        case 0x27fc98u: goto label_27fc98;
        case 0x27fc9cu: goto label_27fc9c;
        case 0x27fca0u: goto label_27fca0;
        case 0x27fca4u: goto label_27fca4;
        case 0x27fca8u: goto label_27fca8;
        case 0x27fcacu: goto label_27fcac;
        case 0x27fcb0u: goto label_27fcb0;
        case 0x27fcb4u: goto label_27fcb4;
        case 0x27fcb8u: goto label_27fcb8;
        case 0x27fcbcu: goto label_27fcbc;
        case 0x27fcc0u: goto label_27fcc0;
        case 0x27fcc4u: goto label_27fcc4;
        case 0x27fcc8u: goto label_27fcc8;
        case 0x27fcccu: goto label_27fccc;
        case 0x27fcd0u: goto label_27fcd0;
        case 0x27fcd4u: goto label_27fcd4;
        case 0x27fcd8u: goto label_27fcd8;
        case 0x27fcdcu: goto label_27fcdc;
        case 0x27fce0u: goto label_27fce0;
        case 0x27fce4u: goto label_27fce4;
        case 0x27fce8u: goto label_27fce8;
        case 0x27fcecu: goto label_27fcec;
        case 0x27fcf0u: goto label_27fcf0;
        case 0x27fcf4u: goto label_27fcf4;
        case 0x27fcf8u: goto label_27fcf8;
        case 0x27fcfcu: goto label_27fcfc;
        case 0x27fd00u: goto label_27fd00;
        case 0x27fd04u: goto label_27fd04;
        case 0x27fd08u: goto label_27fd08;
        case 0x27fd0cu: goto label_27fd0c;
        case 0x27fd10u: goto label_27fd10;
        case 0x27fd14u: goto label_27fd14;
        case 0x27fd18u: goto label_27fd18;
        case 0x27fd1cu: goto label_27fd1c;
        case 0x27fd20u: goto label_27fd20;
        case 0x27fd24u: goto label_27fd24;
        case 0x27fd28u: goto label_27fd28;
        case 0x27fd2cu: goto label_27fd2c;
        case 0x27fd30u: goto label_27fd30;
        case 0x27fd34u: goto label_27fd34;
        case 0x27fd38u: goto label_27fd38;
        case 0x27fd3cu: goto label_27fd3c;
        case 0x27fd40u: goto label_27fd40;
        case 0x27fd44u: goto label_27fd44;
        case 0x27fd48u: goto label_27fd48;
        case 0x27fd4cu: goto label_27fd4c;
        case 0x27fd50u: goto label_27fd50;
        case 0x27fd54u: goto label_27fd54;
        case 0x27fd58u: goto label_27fd58;
        case 0x27fd5cu: goto label_27fd5c;
        case 0x27fd60u: goto label_27fd60;
        case 0x27fd64u: goto label_27fd64;
        case 0x27fd68u: goto label_27fd68;
        case 0x27fd6cu: goto label_27fd6c;
        case 0x27fd70u: goto label_27fd70;
        case 0x27fd74u: goto label_27fd74;
        case 0x27fd78u: goto label_27fd78;
        case 0x27fd7cu: goto label_27fd7c;
        case 0x27fd80u: goto label_27fd80;
        case 0x27fd84u: goto label_27fd84;
        case 0x27fd88u: goto label_27fd88;
        case 0x27fd8cu: goto label_27fd8c;
        case 0x27fd90u: goto label_27fd90;
        case 0x27fd94u: goto label_27fd94;
        case 0x27fd98u: goto label_27fd98;
        case 0x27fd9cu: goto label_27fd9c;
        case 0x27fda0u: goto label_27fda0;
        case 0x27fda4u: goto label_27fda4;
        case 0x27fda8u: goto label_27fda8;
        case 0x27fdacu: goto label_27fdac;
        case 0x27fdb0u: goto label_27fdb0;
        case 0x27fdb4u: goto label_27fdb4;
        case 0x27fdb8u: goto label_27fdb8;
        case 0x27fdbcu: goto label_27fdbc;
        case 0x27fdc0u: goto label_27fdc0;
        case 0x27fdc4u: goto label_27fdc4;
        case 0x27fdc8u: goto label_27fdc8;
        case 0x27fdccu: goto label_27fdcc;
        case 0x27fdd0u: goto label_27fdd0;
        case 0x27fdd4u: goto label_27fdd4;
        case 0x27fdd8u: goto label_27fdd8;
        case 0x27fddcu: goto label_27fddc;
        case 0x27fde0u: goto label_27fde0;
        case 0x27fde4u: goto label_27fde4;
        case 0x27fde8u: goto label_27fde8;
        case 0x27fdecu: goto label_27fdec;
        case 0x27fdf0u: goto label_27fdf0;
        case 0x27fdf4u: goto label_27fdf4;
        case 0x27fdf8u: goto label_27fdf8;
        case 0x27fdfcu: goto label_27fdfc;
        case 0x27fe00u: goto label_27fe00;
        case 0x27fe04u: goto label_27fe04;
        case 0x27fe08u: goto label_27fe08;
        case 0x27fe0cu: goto label_27fe0c;
        case 0x27fe10u: goto label_27fe10;
        case 0x27fe14u: goto label_27fe14;
        case 0x27fe18u: goto label_27fe18;
        case 0x27fe1cu: goto label_27fe1c;
        case 0x27fe20u: goto label_27fe20;
        case 0x27fe24u: goto label_27fe24;
        case 0x27fe28u: goto label_27fe28;
        case 0x27fe2cu: goto label_27fe2c;
        case 0x27fe30u: goto label_27fe30;
        case 0x27fe34u: goto label_27fe34;
        case 0x27fe38u: goto label_27fe38;
        case 0x27fe3cu: goto label_27fe3c;
        case 0x27fe40u: goto label_27fe40;
        case 0x27fe44u: goto label_27fe44;
        case 0x27fe48u: goto label_27fe48;
        case 0x27fe4cu: goto label_27fe4c;
        case 0x27fe50u: goto label_27fe50;
        case 0x27fe54u: goto label_27fe54;
        case 0x27fe58u: goto label_27fe58;
        case 0x27fe5cu: goto label_27fe5c;
        case 0x27fe60u: goto label_27fe60;
        case 0x27fe64u: goto label_27fe64;
        case 0x27fe68u: goto label_27fe68;
        case 0x27fe6cu: goto label_27fe6c;
        case 0x27fe70u: goto label_27fe70;
        case 0x27fe74u: goto label_27fe74;
        case 0x27fe78u: goto label_27fe78;
        case 0x27fe7cu: goto label_27fe7c;
        case 0x27fe80u: goto label_27fe80;
        case 0x27fe84u: goto label_27fe84;
        case 0x27fe88u: goto label_27fe88;
        case 0x27fe8cu: goto label_27fe8c;
        case 0x27fe90u: goto label_27fe90;
        case 0x27fe94u: goto label_27fe94;
        case 0x27fe98u: goto label_27fe98;
        case 0x27fe9cu: goto label_27fe9c;
        case 0x27fea0u: goto label_27fea0;
        case 0x27fea4u: goto label_27fea4;
        case 0x27fea8u: goto label_27fea8;
        case 0x27feacu: goto label_27feac;
        case 0x27feb0u: goto label_27feb0;
        case 0x27feb4u: goto label_27feb4;
        case 0x27feb8u: goto label_27feb8;
        case 0x27febcu: goto label_27febc;
        case 0x27fec0u: goto label_27fec0;
        case 0x27fec4u: goto label_27fec4;
        case 0x27fec8u: goto label_27fec8;
        case 0x27feccu: goto label_27fecc;
        case 0x27fed0u: goto label_27fed0;
        case 0x27fed4u: goto label_27fed4;
        case 0x27fed8u: goto label_27fed8;
        case 0x27fedcu: goto label_27fedc;
        case 0x27fee0u: goto label_27fee0;
        case 0x27fee4u: goto label_27fee4;
        case 0x27fee8u: goto label_27fee8;
        case 0x27feecu: goto label_27feec;
        case 0x27fef0u: goto label_27fef0;
        case 0x27fef4u: goto label_27fef4;
        case 0x27fef8u: goto label_27fef8;
        case 0x27fefcu: goto label_27fefc;
        case 0x27ff00u: goto label_27ff00;
        case 0x27ff04u: goto label_27ff04;
        case 0x27ff08u: goto label_27ff08;
        case 0x27ff0cu: goto label_27ff0c;
        case 0x27ff10u: goto label_27ff10;
        case 0x27ff14u: goto label_27ff14;
        case 0x27ff18u: goto label_27ff18;
        case 0x27ff1cu: goto label_27ff1c;
        case 0x27ff20u: goto label_27ff20;
        case 0x27ff24u: goto label_27ff24;
        case 0x27ff28u: goto label_27ff28;
        case 0x27ff2cu: goto label_27ff2c;
        case 0x27ff30u: goto label_27ff30;
        case 0x27ff34u: goto label_27ff34;
        case 0x27ff38u: goto label_27ff38;
        case 0x27ff3cu: goto label_27ff3c;
        case 0x27ff40u: goto label_27ff40;
        case 0x27ff44u: goto label_27ff44;
        case 0x27ff48u: goto label_27ff48;
        case 0x27ff4cu: goto label_27ff4c;
        case 0x27ff50u: goto label_27ff50;
        case 0x27ff54u: goto label_27ff54;
        case 0x27ff58u: goto label_27ff58;
        case 0x27ff5cu: goto label_27ff5c;
        case 0x27ff60u: goto label_27ff60;
        case 0x27ff64u: goto label_27ff64;
        case 0x27ff68u: goto label_27ff68;
        case 0x27ff6cu: goto label_27ff6c;
        case 0x27ff70u: goto label_27ff70;
        case 0x27ff74u: goto label_27ff74;
        case 0x27ff78u: goto label_27ff78;
        case 0x27ff7cu: goto label_27ff7c;
        case 0x27ff80u: goto label_27ff80;
        case 0x27ff84u: goto label_27ff84;
        case 0x27ff88u: goto label_27ff88;
        case 0x27ff8cu: goto label_27ff8c;
        case 0x27ff90u: goto label_27ff90;
        case 0x27ff94u: goto label_27ff94;
        case 0x27ff98u: goto label_27ff98;
        case 0x27ff9cu: goto label_27ff9c;
        case 0x27ffa0u: goto label_27ffa0;
        case 0x27ffa4u: goto label_27ffa4;
        case 0x27ffa8u: goto label_27ffa8;
        case 0x27ffacu: goto label_27ffac;
        case 0x27ffb0u: goto label_27ffb0;
        case 0x27ffb4u: goto label_27ffb4;
        case 0x27ffb8u: goto label_27ffb8;
        case 0x27ffbcu: goto label_27ffbc;
        case 0x27ffc0u: goto label_27ffc0;
        case 0x27ffc4u: goto label_27ffc4;
        case 0x27ffc8u: goto label_27ffc8;
        case 0x27ffccu: goto label_27ffcc;
        case 0x27ffd0u: goto label_27ffd0;
        case 0x27ffd4u: goto label_27ffd4;
        case 0x27ffd8u: goto label_27ffd8;
        case 0x27ffdcu: goto label_27ffdc;
        case 0x27ffe0u: goto label_27ffe0;
        case 0x27ffe4u: goto label_27ffe4;
        case 0x27ffe8u: goto label_27ffe8;
        case 0x27ffecu: goto label_27ffec;
        case 0x27fff0u: goto label_27fff0;
        case 0x27fff4u: goto label_27fff4;
        case 0x27fff8u: goto label_27fff8;
        case 0x27fffcu: goto label_27fffc;
        case 0x280000u: goto label_280000;
        case 0x280004u: goto label_280004;
        case 0x280008u: goto label_280008;
        case 0x28000cu: goto label_28000c;
        case 0x280010u: goto label_280010;
        case 0x280014u: goto label_280014;
        case 0x280018u: goto label_280018;
        case 0x28001cu: goto label_28001c;
        case 0x280020u: goto label_280020;
        default: break;
    }

    ctx->pc = 0x27f340u;

label_27f340:
    // 0x27f340: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x27f340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_27f344:
    // 0x27f344: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27f344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27f348:
    // 0x27f348: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x27f348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_27f34c:
    // 0x27f34c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27f34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_27f350:
    // 0x27f350: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27f350u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_27f354:
    // 0x27f354: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27f354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_27f358:
    // 0x27f358: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27f358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_27f35c:
    // 0x27f35c: 0x8f838ac8  lw          $v1, -0x7538($gp)
    ctx->pc = 0x27f35cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937288)));
label_27f360:
    // 0x27f360: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_27f364:
    if (ctx->pc == 0x27F364u) {
        ctx->pc = 0x27F364u;
            // 0x27f364: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27F368u;
        goto label_27f368;
    }
    ctx->pc = 0x27F360u;
    {
        const bool branch_taken_0x27f360 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27F364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F360u;
            // 0x27f364: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f360) {
            ctx->pc = 0x27F370u;
            goto label_27f370;
        }
    }
    ctx->pc = 0x27F368u;
label_27f368:
    // 0x27f368: 0x10000327  b           . + 4 + (0x327 << 2)
label_27f36c:
    if (ctx->pc == 0x27F36Cu) {
        ctx->pc = 0x27F36Cu;
            // 0x27f36c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27F370u;
        goto label_27f370;
    }
    ctx->pc = 0x27F368u;
    {
        const bool branch_taken_0x27f368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F36Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F368u;
            // 0x27f36c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f368) {
            ctx->pc = 0x280008u;
            goto label_280008;
        }
    }
    ctx->pc = 0x27F370u;
label_27f370:
    // 0x27f370: 0xc0956c8  jal         func_255B20
label_27f374:
    if (ctx->pc == 0x27F374u) {
        ctx->pc = 0x27F378u;
        goto label_27f378;
    }
    ctx->pc = 0x27F370u;
    SET_GPR_U32(ctx, 31, 0x27F378u);
    ctx->pc = 0x255B20u;
    if (runtime->hasFunction(0x255B20u)) {
        auto targetFn = runtime->lookupFunction(0x255B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F378u; }
        if (ctx->pc != 0x27F378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveCamera__Fv_0x255b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F378u; }
        if (ctx->pc != 0x27F378u) { return; }
    }
    ctx->pc = 0x27F378u;
label_27f378:
    // 0x27f378: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x27f378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_27f37c:
    // 0x27f37c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27f37cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27f380:
    // 0x27f380: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x27f380u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_27f384:
    // 0x27f384: 0xc052d0c  jal         func_14B430
label_27f388:
    if (ctx->pc == 0x27F388u) {
        ctx->pc = 0x27F388u;
            // 0x27f388: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->pc = 0x27F38Cu;
        goto label_27f38c;
    }
    ctx->pc = 0x27F384u;
    SET_GPR_U32(ctx, 31, 0x27F38Cu);
    ctx->pc = 0x27F388u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F384u;
            // 0x27f388: 0x24050200  addiu       $a1, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F38Cu; }
        if (ctx->pc != 0x27F38Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F38Cu; }
        if (ctx->pc != 0x27F38Cu) { return; }
    }
    ctx->pc = 0x27F38Cu;
label_27f38c:
    // 0x27f38c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_27f390:
    if (ctx->pc == 0x27F390u) {
        ctx->pc = 0x27F394u;
        goto label_27f394;
    }
    ctx->pc = 0x27F38Cu;
    {
        const bool branch_taken_0x27f38c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f38c) {
            ctx->pc = 0x27F3F0u;
            goto label_27f3f0;
        }
    }
    ctx->pc = 0x27F394u;
label_27f394:
    // 0x27f394: 0x3c0501f0  lui         $a1, 0x1F0
    ctx->pc = 0x27f394u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)496 << 16));
label_27f398:
    // 0x27f398: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x27f398u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_27f39c:
    // 0x27f39c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f39cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27f3a0:
    // 0x27f3a0: 0x24a55020  addiu       $a1, $a1, 0x5020
    ctx->pc = 0x27f3a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20512));
label_27f3a4:
    // 0x27f3a4: 0xc04c504  jal         func_131410
label_27f3a8:
    if (ctx->pc == 0x27F3A8u) {
        ctx->pc = 0x27F3A8u;
            // 0x27f3a8: 0xac205000  sw          $zero, 0x5000($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 20480), GPR_U32(ctx, 0));
        ctx->pc = 0x27F3ACu;
        goto label_27f3ac;
    }
    ctx->pc = 0x27F3A4u;
    SET_GPR_U32(ctx, 31, 0x27F3ACu);
    ctx->pc = 0x27F3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F3A4u;
            // 0x27f3a8: 0xac205000  sw          $zero, 0x5000($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 20480), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131410u;
    if (runtime->hasFunction(0x131410u)) {
        auto targetFn = runtime->lookupFunction(0x131410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F3ACu; }
        if (ctx->pc != 0x27F3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__9mgCCameraFPf_0x131410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F3ACu; }
        if (ctx->pc != 0x27F3ACu) { return; }
    }
    ctx->pc = 0x27F3ACu;
label_27f3ac:
    // 0x27f3ac: 0x3c0501f0  lui         $a1, 0x1F0
    ctx->pc = 0x27f3acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)496 << 16));
label_27f3b0:
    // 0x27f3b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f3b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27f3b4:
    // 0x27f3b4: 0xc04c518  jal         func_131460
label_27f3b8:
    if (ctx->pc == 0x27F3B8u) {
        ctx->pc = 0x27F3B8u;
            // 0x27f3b8: 0x24a55030  addiu       $a1, $a1, 0x5030 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20528));
        ctx->pc = 0x27F3BCu;
        goto label_27f3bc;
    }
    ctx->pc = 0x27F3B4u;
    SET_GPR_U32(ctx, 31, 0x27F3BCu);
    ctx->pc = 0x27F3B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F3B4u;
            // 0x27f3b8: 0x24a55030  addiu       $a1, $a1, 0x5030 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131460u;
    if (runtime->hasFunction(0x131460u)) {
        auto targetFn = runtime->lookupFunction(0x131460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F3BCu; }
        if (ctx->pc != 0x27F3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__9mgCCameraFPf_0x131460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F3BCu; }
        if (ctx->pc != 0x27F3BCu) { return; }
    }
    ctx->pc = 0x27F3BCu;
label_27f3bc:
    // 0x27f3bc: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x27f3bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_27f3c0:
    // 0x27f3c0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x27f3c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_27f3c4:
    // 0x27f3c4: 0x8c22500c  lw          $v0, 0x500C($at)
    ctx->pc = 0x27f3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20492)));
label_27f3c8:
    // 0x27f3c8: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x27f3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_27f3cc:
    // 0x27f3cc: 0xaf808710  sw          $zero, -0x78F0($gp)
    ctx->pc = 0x27f3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294936336), GPR_U32(ctx, 0));
label_27f3d0:
    // 0x27f3d0: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x27f3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_27f3d4:
    // 0x27f3d4: 0xc052d48  jal         func_14B520
label_27f3d8:
    if (ctx->pc == 0x27F3D8u) {
        ctx->pc = 0x27F3D8u;
            // 0x27f3d8: 0xac40001c  sw          $zero, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
        ctx->pc = 0x27F3DCu;
        goto label_27f3dc;
    }
    ctx->pc = 0x27F3D4u;
    SET_GPR_U32(ctx, 31, 0x27F3DCu);
    ctx->pc = 0x27F3D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F3D4u;
            // 0x27f3d8: 0xac40001c  sw          $zero, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B520u;
    if (runtime->hasFunction(0x14B520u)) {
        auto targetFn = runtime->lookupFunction(0x14B520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F3DCu; }
        if (ctx->pc != 0x27F3DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuModeOff__8CGamePadFv_0x14b520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F3DCu; }
        if (ctx->pc != 0x27F3DCu) { return; }
    }
    ctx->pc = 0x27F3DCu;
label_27f3dc:
    // 0x27f3dc: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x27f3dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_27f3e0:
    // 0x27f3e0: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x27f3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_27f3e4:
    // 0x27f3e4: 0x8c255010  lw          $a1, 0x5010($at)
    ctx->pc = 0x27f3e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20496)));
label_27f3e8:
    // 0x27f3e8: 0xc04b950  jal         func_12E540
label_27f3ec:
    if (ctx->pc == 0x27F3ECu) {
        ctx->pc = 0x27F3ECu;
            // 0x27f3ec: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->pc = 0x27F3F0u;
        goto label_27f3f0;
    }
    ctx->pc = 0x27F3E8u;
    SET_GPR_U32(ctx, 31, 0x27F3F0u);
    ctx->pc = 0x27F3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F3E8u;
            // 0x27f3ec: 0x24841ef0  addiu       $a0, $a0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F3F0u; }
        if (ctx->pc != 0x27F3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F3F0u; }
        if (ctx->pc != 0x27F3F0u) { return; }
    }
    ctx->pc = 0x27F3F0u;
label_27f3f0:
    // 0x27f3f0: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x27f3f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_27f3f4:
    // 0x27f3f4: 0x8c225000  lw          $v0, 0x5000($at)
    ctx->pc = 0x27f3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20480)));
label_27f3f8:
    // 0x27f3f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_27f3fc:
    if (ctx->pc == 0x27F3FCu) {
        ctx->pc = 0x27F3FCu;
            // 0x27f3fc: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x27F400u;
        goto label_27f400;
    }
    ctx->pc = 0x27F3F8u;
    {
        const bool branch_taken_0x27f3f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F3FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F3F8u;
            // 0x27f3fc: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f3f8) {
            ctx->pc = 0x27F408u;
            goto label_27f408;
        }
    }
    ctx->pc = 0x27F400u;
label_27f400:
    // 0x27f400: 0x10000301  b           . + 4 + (0x301 << 2)
label_27f404:
    if (ctx->pc == 0x27F404u) {
        ctx->pc = 0x27F404u;
            // 0x27f404: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27F408u;
        goto label_27f408;
    }
    ctx->pc = 0x27F400u;
    {
        const bool branch_taken_0x27f400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F400u;
            // 0x27f404: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f400) {
            ctx->pc = 0x280008u;
            goto label_280008;
        }
    }
    ctx->pc = 0x27F408u;
label_27f408:
    // 0x27f408: 0xc050d88  jal         func_143620
label_27f40c:
    if (ctx->pc == 0x27F40Cu) {
        ctx->pc = 0x27F40Cu;
            // 0x27f40c: 0xc42ce450  lwc1        $f12, -0x1BB0($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x27F410u;
        goto label_27f410;
    }
    ctx->pc = 0x27F408u;
    SET_GPR_U32(ctx, 31, 0x27F410u);
    ctx->pc = 0x27F40Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F408u;
            // 0x27f40c: 0xc42ce450  lwc1        $f12, -0x1BB0($at) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x143620u;
    if (runtime->hasFunction(0x143620u)) {
        auto targetFn = runtime->lookupFunction(0x143620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F410u; }
        if (ctx->pc != 0x27F410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetProjection__Ff_0x143620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F410u; }
        if (ctx->pc != 0x27F410u) { return; }
    }
    ctx->pc = 0x27F410u;
label_27f410:
    // 0x27f410: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27f414:
    // 0x27f414: 0xc04c574  jal         func_1315D0
label_27f418:
    if (ctx->pc == 0x27F418u) {
        ctx->pc = 0x27F418u;
            // 0x27f418: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x27F41Cu;
        goto label_27f41c;
    }
    ctx->pc = 0x27F414u;
    SET_GPR_U32(ctx, 31, 0x27F41Cu);
    ctx->pc = 0x27F418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F414u;
            // 0x27f418: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F41Cu; }
        if (ctx->pc != 0x27F41Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F41Cu; }
        if (ctx->pc != 0x27F41Cu) { return; }
    }
    ctx->pc = 0x27F41Cu;
label_27f41c:
    // 0x27f41c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f41cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27f420:
    // 0x27f420: 0xc04c578  jal         func_1315E0
label_27f424:
    if (ctx->pc == 0x27F424u) {
        ctx->pc = 0x27F424u;
            // 0x27f424: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x27F428u;
        goto label_27f428;
    }
    ctx->pc = 0x27F420u;
    SET_GPR_U32(ctx, 31, 0x27F428u);
    ctx->pc = 0x27F424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F420u;
            // 0x27f424: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315E0u;
    if (runtime->hasFunction(0x1315E0u)) {
        auto targetFn = runtime->lookupFunction(0x1315E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F428u; }
        if (ctx->pc != 0x27F428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRef__9mgCCameraFPf_0x1315e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F428u; }
        if (ctx->pc != 0x27F428u) { return; }
    }
    ctx->pc = 0x27F428u;
label_27f428:
    // 0x27f428: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x27f428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_27f42c:
    // 0x27f42c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x27f42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_27f430:
    // 0x27f430: 0x8c235004  lw          $v1, 0x5004($at)
    ctx->pc = 0x27f430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20484)));
label_27f434:
    // 0x27f434: 0x106201bf  beq         $v1, $v0, . + 4 + (0x1BF << 2)
label_27f438:
    if (ctx->pc == 0x27F438u) {
        ctx->pc = 0x27F438u;
            // 0x27f438: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x27F43Cu;
        goto label_27f43c;
    }
    ctx->pc = 0x27F434u;
    {
        const bool branch_taken_0x27f434 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27F438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F434u;
            // 0x27f438: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f434) {
            ctx->pc = 0x27FB34u;
            goto label_27fb34;
        }
    }
    ctx->pc = 0x27F43Cu;
label_27f43c:
    // 0x27f43c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27f43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27f440:
    // 0x27f440: 0x106200cc  beq         $v1, $v0, . + 4 + (0xCC << 2)
label_27f444:
    if (ctx->pc == 0x27F444u) {
        ctx->pc = 0x27F444u;
            // 0x27f444: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x27F448u;
        goto label_27f448;
    }
    ctx->pc = 0x27F440u;
    {
        const bool branch_taken_0x27f440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27F444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F440u;
            // 0x27f444: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f440) {
            ctx->pc = 0x27F774u;
            goto label_27f774;
        }
    }
    ctx->pc = 0x27F448u;
label_27f448:
    // 0x27f448: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27f448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27f44c:
    // 0x27f44c: 0x10650048  beq         $v1, $a1, . + 4 + (0x48 << 2)
label_27f450:
    if (ctx->pc == 0x27F450u) {
        ctx->pc = 0x27F450u;
            // 0x27f450: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x27F454u;
        goto label_27f454;
    }
    ctx->pc = 0x27F44Cu;
    {
        const bool branch_taken_0x27f44c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x27F450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F44Cu;
            // 0x27f450: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f44c) {
            ctx->pc = 0x27F570u;
            goto label_27f570;
        }
    }
    ctx->pc = 0x27F454u;
label_27f454:
    // 0x27f454: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_27f458:
    if (ctx->pc == 0x27F458u) {
        ctx->pc = 0x27F458u;
            // 0x27f458: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x27F45Cu;
        goto label_27f45c;
    }
    ctx->pc = 0x27F454u;
    {
        const bool branch_taken_0x27f454 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F458u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F454u;
            // 0x27f458: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f454) {
            ctx->pc = 0x27F464u;
            goto label_27f464;
        }
    }
    ctx->pc = 0x27F45Cu;
label_27f45c:
    // 0x27f45c: 0x100002c3  b           . + 4 + (0x2C3 << 2)
label_27f460:
    if (ctx->pc == 0x27F460u) {
        ctx->pc = 0x27F464u;
        goto label_27f464;
    }
    ctx->pc = 0x27F45Cu;
    {
        const bool branch_taken_0x27f45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f45c) {
            ctx->pc = 0x27FF6Cu;
            goto label_27ff6c;
        }
    }
    ctx->pc = 0x27F464u;
label_27f464:
    // 0x27f464: 0xc052cf0  jal         func_14B3C0
label_27f468:
    if (ctx->pc == 0x27F468u) {
        ctx->pc = 0x27F468u;
            // 0x27f468: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x27F46Cu;
        goto label_27f46c;
    }
    ctx->pc = 0x27F464u;
    SET_GPR_U32(ctx, 31, 0x27F46Cu);
    ctx->pc = 0x27F468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F464u;
            // 0x27f468: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F46Cu; }
        if (ctx->pc != 0x27F46Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F46Cu; }
        if (ctx->pc != 0x27F46Cu) { return; }
    }
    ctx->pc = 0x27F46Cu;
label_27f46c:
    // 0x27f46c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_27f470:
    if (ctx->pc == 0x27F470u) {
        ctx->pc = 0x27F470u;
            // 0x27f470: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x27F474u;
        goto label_27f474;
    }
    ctx->pc = 0x27F46Cu;
    {
        const bool branch_taken_0x27f46c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F46Cu;
            // 0x27f470: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f46c) {
            ctx->pc = 0x27F488u;
            goto label_27f488;
        }
    }
    ctx->pc = 0x27F474u;
label_27f474:
    // 0x27f474: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x27f474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_27f478:
    // 0x27f478: 0xc09fafc  jal         func_27EBF0
label_27f47c:
    if (ctx->pc == 0x27F47Cu) {
        ctx->pc = 0x27F47Cu;
            // 0x27f47c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x27F480u;
        goto label_27f480;
    }
    ctx->pc = 0x27F478u;
    SET_GPR_U32(ctx, 31, 0x27F480u);
    ctx->pc = 0x27F47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F478u;
            // 0x27f47c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27EBF0u;
    if (runtime->hasFunction(0x27EBF0u)) {
        auto targetFn = runtime->lookupFunction(0x27EBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F480u; }
        if (ctx->pc != 0x27F480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MoveCameraRef__FPfPf_0x27ebf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F480u; }
        if (ctx->pc != 0x27F480u) { return; }
    }
    ctx->pc = 0x27F480u;
label_27f480:
    // 0x27f480: 0x10000004  b           . + 4 + (0x4 << 2)
label_27f484:
    if (ctx->pc == 0x27F484u) {
        ctx->pc = 0x27F484u;
            // 0x27f484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27F488u;
        goto label_27f488;
    }
    ctx->pc = 0x27F480u;
    {
        const bool branch_taken_0x27f480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F480u;
            // 0x27f484: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f480) {
            ctx->pc = 0x27F494u;
            goto label_27f494;
        }
    }
    ctx->pc = 0x27F488u;
label_27f488:
    // 0x27f488: 0xc09fa88  jal         func_27EA20
label_27f48c:
    if (ctx->pc == 0x27F48Cu) {
        ctx->pc = 0x27F48Cu;
            // 0x27f48c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x27F490u;
        goto label_27f490;
    }
    ctx->pc = 0x27F488u;
    SET_GPR_U32(ctx, 31, 0x27F490u);
    ctx->pc = 0x27F48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F488u;
            // 0x27f48c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27EA20u;
    if (runtime->hasFunction(0x27EA20u)) {
        auto targetFn = runtime->lookupFunction(0x27EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F490u; }
        if (ctx->pc != 0x27F490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MoveCamera__FPfPf_0x27ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F490u; }
        if (ctx->pc != 0x27F490u) { return; }
    }
    ctx->pc = 0x27F490u;
label_27f490:
    // 0x27f490: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27f494:
    // 0x27f494: 0xc04c504  jal         func_131410
label_27f498:
    if (ctx->pc == 0x27F498u) {
        ctx->pc = 0x27F498u;
            // 0x27f498: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x27F49Cu;
        goto label_27f49c;
    }
    ctx->pc = 0x27F494u;
    SET_GPR_U32(ctx, 31, 0x27F49Cu);
    ctx->pc = 0x27F498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F494u;
            // 0x27f498: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131410u;
    if (runtime->hasFunction(0x131410u)) {
        auto targetFn = runtime->lookupFunction(0x131410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F49Cu; }
        if (ctx->pc != 0x27F49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__9mgCCameraFPf_0x131410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F49Cu; }
        if (ctx->pc != 0x27F49Cu) { return; }
    }
    ctx->pc = 0x27F49Cu;
label_27f49c:
    // 0x27f49c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f49cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27f4a0:
    // 0x27f4a0: 0xc04c518  jal         func_131460
label_27f4a4:
    if (ctx->pc == 0x27F4A4u) {
        ctx->pc = 0x27F4A4u;
            // 0x27f4a4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x27F4A8u;
        goto label_27f4a8;
    }
    ctx->pc = 0x27F4A0u;
    SET_GPR_U32(ctx, 31, 0x27F4A8u);
    ctx->pc = 0x27F4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F4A0u;
            // 0x27f4a4: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131460u;
    if (runtime->hasFunction(0x131460u)) {
        auto targetFn = runtime->lookupFunction(0x131460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F4A8u; }
        if (ctx->pc != 0x27F4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__9mgCCameraFPf_0x131460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F4A8u; }
        if (ctx->pc != 0x27F4A8u) { return; }
    }
    ctx->pc = 0x27F4A8u;
label_27f4a8:
    // 0x27f4a8: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x27f4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_27f4ac:
    // 0x27f4ac: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x27f4acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_27f4b0:
    // 0x27f4b0: 0xc052cf0  jal         func_14B3C0
label_27f4b4:
    if (ctx->pc == 0x27F4B4u) {
        ctx->pc = 0x27F4B4u;
            // 0x27f4b4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x27F4B8u;
        goto label_27f4b8;
    }
    ctx->pc = 0x27F4B0u;
    SET_GPR_U32(ctx, 31, 0x27F4B8u);
    ctx->pc = 0x27F4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F4B0u;
            // 0x27f4b4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F4B8u; }
        if (ctx->pc != 0x27F4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F4B8u; }
        if (ctx->pc != 0x27F4B8u) { return; }
    }
    ctx->pc = 0x27F4B8u;
label_27f4b8:
    // 0x27f4b8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_27f4bc:
    if (ctx->pc == 0x27F4BCu) {
        ctx->pc = 0x27F4BCu;
            // 0x27f4bc: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x27F4C0u;
        goto label_27f4c0;
    }
    ctx->pc = 0x27F4B8u;
    {
        const bool branch_taken_0x27f4b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F4BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F4B8u;
            // 0x27f4bc: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f4b8) {
            ctx->pc = 0x27F4E0u;
            goto label_27f4e0;
        }
    }
    ctx->pc = 0x27F4C0u;
label_27f4c0:
    // 0x27f4c0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x27f4c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_27f4c4:
    // 0x27f4c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27f4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_27f4c8:
    // 0x27f4c8: 0xc421e450  lwc1        $f1, -0x1BB0($at)
    ctx->pc = 0x27f4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27f4cc:
    // 0x27f4cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27f4ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27f4d0:
    // 0x27f4d0: 0x0  nop
    ctx->pc = 0x27f4d0u;
    // NOP
label_27f4d4:
    // 0x27f4d4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x27f4d4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_27f4d8:
    // 0x27f4d8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x27f4d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_27f4dc:
    // 0x27f4dc: 0xe420e450  swc1        $f0, -0x1BB0($at)
    ctx->pc = 0x27f4dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294960208), bits); }
label_27f4e0:
    // 0x27f4e0: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x27f4e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_27f4e4:
    // 0x27f4e4: 0xc052cf0  jal         func_14B3C0
label_27f4e8:
    if (ctx->pc == 0x27F4E8u) {
        ctx->pc = 0x27F4E8u;
            // 0x27f4e8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x27F4ECu;
        goto label_27f4ec;
    }
    ctx->pc = 0x27F4E4u;
    SET_GPR_U32(ctx, 31, 0x27F4ECu);
    ctx->pc = 0x27F4E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F4E4u;
            // 0x27f4e8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F4ECu; }
        if (ctx->pc != 0x27F4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F4ECu; }
        if (ctx->pc != 0x27F4ECu) { return; }
    }
    ctx->pc = 0x27F4ECu;
label_27f4ec:
    // 0x27f4ec: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_27f4f0:
    if (ctx->pc == 0x27F4F0u) {
        ctx->pc = 0x27F4F4u;
        goto label_27f4f4;
    }
    ctx->pc = 0x27F4ECu;
    {
        const bool branch_taken_0x27f4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f4ec) {
            ctx->pc = 0x27F514u;
            goto label_27f514;
        }
    }
    ctx->pc = 0x27F4F4u;
label_27f4f4:
    // 0x27f4f4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x27f4f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_27f4f8:
    // 0x27f4f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x27f4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_27f4fc:
    // 0x27f4fc: 0xc421e450  lwc1        $f1, -0x1BB0($at)
    ctx->pc = 0x27f4fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27f500:
    // 0x27f500: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x27f500u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27f504:
    // 0x27f504: 0x0  nop
    ctx->pc = 0x27f504u;
    // NOP
label_27f508:
    // 0x27f508: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x27f508u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_27f50c:
    // 0x27f50c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x27f50cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_27f510:
    // 0x27f510: 0xe420e450  swc1        $f0, -0x1BB0($at)
    ctx->pc = 0x27f510u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294960208), bits); }
label_27f514:
    // 0x27f514: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x27f514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_27f518:
    // 0x27f518: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x27f518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_27f51c:
    // 0x27f51c: 0xc420e450  lwc1        $f0, -0x1BB0($at)
    ctx->pc = 0x27f51cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27f520:
    // 0x27f520: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27f520u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27f524:
    // 0x27f524: 0x0  nop
    ctx->pc = 0x27f524u;
    // NOP
label_27f528:
    // 0x27f528: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x27f528u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27f52c:
    // 0x27f52c: 0x0  nop
    ctx->pc = 0x27f52cu;
    // NOP
label_27f530:
    // 0x27f530: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_27f534:
    if (ctx->pc == 0x27F534u) {
        ctx->pc = 0x27F538u;
        goto label_27f538;
    }
    ctx->pc = 0x27F530u;
    {
        const bool branch_taken_0x27f530 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x27f530) {
            ctx->pc = 0x27F540u;
            goto label_27f540;
        }
    }
    ctx->pc = 0x27F538u;
label_27f538:
    // 0x27f538: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x27f538u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_27f53c:
    // 0x27f53c: 0xe421e450  swc1        $f1, -0x1BB0($at)
    ctx->pc = 0x27f53cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294960208), bits); }
label_27f540:
    // 0x27f540: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x27f540u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_27f544:
    // 0x27f544: 0x3c0244fa  lui         $v0, 0x44FA
    ctx->pc = 0x27f544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17658 << 16));
label_27f548:
    // 0x27f548: 0xc420e450  lwc1        $f0, -0x1BB0($at)
    ctx->pc = 0x27f548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294960208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27f54c:
    // 0x27f54c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x27f54cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_27f550:
    // 0x27f550: 0x0  nop
    ctx->pc = 0x27f550u;
    // NOP
label_27f554:
    // 0x27f554: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x27f554u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27f558:
    // 0x27f558: 0x0  nop
    ctx->pc = 0x27f558u;
    // NOP
label_27f55c:
    // 0x27f55c: 0x45010283  bc1t        . + 4 + (0x283 << 2)
label_27f560:
    if (ctx->pc == 0x27F560u) {
        ctx->pc = 0x27F564u;
        goto label_27f564;
    }
    ctx->pc = 0x27F55Cu;
    {
        const bool branch_taken_0x27f55c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x27f55c) {
            ctx->pc = 0x27FF6Cu;
            goto label_27ff6c;
        }
    }
    ctx->pc = 0x27F564u;
label_27f564:
    // 0x27f564: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x27f564u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_27f568:
    // 0x27f568: 0x10000280  b           . + 4 + (0x280 << 2)
label_27f56c:
    if (ctx->pc == 0x27F56Cu) {
        ctx->pc = 0x27F56Cu;
            // 0x27f56c: 0xe421e450  swc1        $f1, -0x1BB0($at) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294960208), bits); }
        ctx->pc = 0x27F570u;
        goto label_27f570;
    }
    ctx->pc = 0x27F568u;
    {
        const bool branch_taken_0x27f568 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F56Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F568u;
            // 0x27f56c: 0xe421e450  swc1        $f1, -0x1BB0($at) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294960208), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f568) {
            ctx->pc = 0x27FF6Cu;
            goto label_27ff6c;
        }
    }
    ctx->pc = 0x27F570u;
label_27f570:
    // 0x27f570: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x27f570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27f574:
    // 0x27f574: 0xc052cf0  jal         func_14B3C0
label_27f578:
    if (ctx->pc == 0x27F578u) {
        ctx->pc = 0x27F578u;
            // 0x27f578: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x27F57Cu;
        goto label_27f57c;
    }
    ctx->pc = 0x27F574u;
    SET_GPR_U32(ctx, 31, 0x27F57Cu);
    ctx->pc = 0x27F578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F574u;
            // 0x27f578: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F57Cu; }
        if (ctx->pc != 0x27F57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F57Cu; }
        if (ctx->pc != 0x27F57Cu) { return; }
    }
    ctx->pc = 0x27F57Cu;
label_27f57c:
    // 0x27f57c: 0x14400069  bnez        $v0, . + 4 + (0x69 << 2)
label_27f580:
    if (ctx->pc == 0x27F580u) {
        ctx->pc = 0x27F580u;
            // 0x27f580: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x27F584u;
        goto label_27f584;
    }
    ctx->pc = 0x27F57Cu;
    {
        const bool branch_taken_0x27f57c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F57Cu;
            // 0x27f580: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f57c) {
            ctx->pc = 0x27F724u;
            goto label_27f724;
        }
    }
    ctx->pc = 0x27F584u;
label_27f584:
    // 0x27f584: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x27f584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_27f588:
    // 0x27f588: 0xc0956d4  jal         func_255B50
label_27f58c:
    if (ctx->pc == 0x27F58Cu) {
        ctx->pc = 0x27F58Cu;
            // 0x27f58c: 0x8c245014  lw          $a0, 0x5014($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20500)));
        ctx->pc = 0x27F590u;
        goto label_27f590;
    }
    ctx->pc = 0x27F588u;
    SET_GPR_U32(ctx, 31, 0x27F590u);
    ctx->pc = 0x27F58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F588u;
            // 0x27f58c: 0x8c245014  lw          $a0, 0x5014($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20500)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255B50u;
    if (runtime->hasFunction(0x255B50u)) {
        auto targetFn = runtime->lookupFunction(0x255B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F590u; }
        if (ctx->pc != 0x27F590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__Fi_0x255b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F590u; }
        if (ctx->pc != 0x27F590u) { return; }
    }
    ctx->pc = 0x27F590u;
label_27f590:
    // 0x27f590: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x27f590u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_27f594:
    // 0x27f594: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27f594u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27f598:
    // 0x27f598: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x27f598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_27f59c:
    // 0x27f59c: 0xc052d0c  jal         func_14B430
label_27f5a0:
    if (ctx->pc == 0x27F5A0u) {
        ctx->pc = 0x27F5A0u;
            // 0x27f5a0: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->pc = 0x27F5A4u;
        goto label_27f5a4;
    }
    ctx->pc = 0x27F59Cu;
    SET_GPR_U32(ctx, 31, 0x27F5A4u);
    ctx->pc = 0x27F5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F59Cu;
            // 0x27f5a0: 0x24052000  addiu       $a1, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F5A4u; }
        if (ctx->pc != 0x27F5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F5A4u; }
        if (ctx->pc != 0x27F5A4u) { return; }
    }
    ctx->pc = 0x27F5A4u;
label_27f5a4:
    // 0x27f5a4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_27f5a8:
    if (ctx->pc == 0x27F5A8u) {
        ctx->pc = 0x27F5ACu;
        goto label_27f5ac;
    }
    ctx->pc = 0x27F5A4u;
    {
        const bool branch_taken_0x27f5a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f5a4) {
            ctx->pc = 0x27F608u;
            goto label_27f608;
        }
    }
    ctx->pc = 0x27F5ACu;
label_27f5ac:
    // 0x27f5ac: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x27f5acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_27f5b0:
    // 0x27f5b0: 0x8c225014  lw          $v0, 0x5014($at)
    ctx->pc = 0x27f5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20500)));
label_27f5b4:
    // 0x27f5b4: 0x24530001  addiu       $s3, $v0, 0x1
    ctx->pc = 0x27f5b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_27f5b8:
    // 0x27f5b8: 0x2a610080  slti        $at, $s3, 0x80
    ctx->pc = 0x27f5b8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)128) ? 1 : 0);
label_27f5bc:
    // 0x27f5bc: 0x1020000a  beqz        $at, . + 4 + (0xA << 2)
label_27f5c0:
    if (ctx->pc == 0x27F5C0u) {
        ctx->pc = 0x27F5C0u;
            // 0x27f5c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27F5C4u;
        goto label_27f5c4;
    }
    ctx->pc = 0x27F5BCu;
    {
        const bool branch_taken_0x27f5bc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F5C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F5BCu;
            // 0x27f5c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f5bc) {
            ctx->pc = 0x27F5E8u;
            goto label_27f5e8;
        }
    }
    ctx->pc = 0x27F5C4u;
label_27f5c4:
    // 0x27f5c4: 0xc0956d4  jal         func_255B50
label_27f5c8:
    if (ctx->pc == 0x27F5C8u) {
        ctx->pc = 0x27F5C8u;
            // 0x27f5c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27F5CCu;
        goto label_27f5cc;
    }
    ctx->pc = 0x27F5C4u;
    SET_GPR_U32(ctx, 31, 0x27F5CCu);
    ctx->pc = 0x27F5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F5C4u;
            // 0x27f5c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255B50u;
    if (runtime->hasFunction(0x255B50u)) {
        auto targetFn = runtime->lookupFunction(0x255B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F5CCu; }
        if (ctx->pc != 0x27F5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__Fi_0x255b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F5CCu; }
        if (ctx->pc != 0x27F5CCu) { return; }
    }
    ctx->pc = 0x27F5CCu;
label_27f5cc:
    // 0x27f5cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27f5ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27f5d0:
    // 0x27f5d0: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
label_27f5d4:
    if (ctx->pc == 0x27F5D4u) {
        ctx->pc = 0x27F5D8u;
        goto label_27f5d8;
    }
    ctx->pc = 0x27F5D0u;
    {
        const bool branch_taken_0x27f5d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f5d0) {
            ctx->pc = 0x27F5E8u;
            goto label_27f5e8;
        }
    }
    ctx->pc = 0x27F5D8u;
label_27f5d8:
    // 0x27f5d8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x27f5d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_27f5dc:
    // 0x27f5dc: 0x2a620080  slti        $v0, $s3, 0x80
    ctx->pc = 0x27f5dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)128) ? 1 : 0);
label_27f5e0:
    // 0x27f5e0: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_27f5e4:
    if (ctx->pc == 0x27F5E4u) {
        ctx->pc = 0x27F5E8u;
        goto label_27f5e8;
    }
    ctx->pc = 0x27F5E0u;
    {
        const bool branch_taken_0x27f5e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f5e0) {
            ctx->pc = 0x27F5C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27f5c4;
        }
    }
    ctx->pc = 0x27F5E8u;
label_27f5e8:
    // 0x27f5e8: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
label_27f5ec:
    if (ctx->pc == 0x27F5ECu) {
        ctx->pc = 0x27F5ECu;
            // 0x27f5ec: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->pc = 0x27F5F0u;
        goto label_27f5f0;
    }
    ctx->pc = 0x27F5E8u;
    {
        const bool branch_taken_0x27f5e8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F5E8u;
            // 0x27f5ec: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f5e8) {
            ctx->pc = 0x27F604u;
            goto label_27f604;
        }
    }
    ctx->pc = 0x27F5F0u;
label_27f5f0:
    // 0x27f5f0: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x27f5f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_27f5f4:
    // 0x27f5f4: 0xc0956d4  jal         func_255B50
label_27f5f8:
    if (ctx->pc == 0x27F5F8u) {
        ctx->pc = 0x27F5F8u;
            // 0x27f5f8: 0x8c245014  lw          $a0, 0x5014($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20500)));
        ctx->pc = 0x27F5FCu;
        goto label_27f5fc;
    }
    ctx->pc = 0x27F5F4u;
    SET_GPR_U32(ctx, 31, 0x27F5FCu);
    ctx->pc = 0x27F5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F5F4u;
            // 0x27f5f8: 0x8c245014  lw          $a0, 0x5014($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20500)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255B50u;
    if (runtime->hasFunction(0x255B50u)) {
        auto targetFn = runtime->lookupFunction(0x255B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F5FCu; }
        if (ctx->pc != 0x27F5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__Fi_0x255b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F5FCu; }
        if (ctx->pc != 0x27F5FCu) { return; }
    }
    ctx->pc = 0x27F5FCu;
label_27f5fc:
    // 0x27f5fc: 0x10000002  b           . + 4 + (0x2 << 2)
label_27f600:
    if (ctx->pc == 0x27F600u) {
        ctx->pc = 0x27F600u;
            // 0x27f600: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27F604u;
        goto label_27f604;
    }
    ctx->pc = 0x27F5FCu;
    {
        const bool branch_taken_0x27f5fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F5FCu;
            // 0x27f600: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f5fc) {
            ctx->pc = 0x27F608u;
            goto label_27f608;
        }
    }
    ctx->pc = 0x27F604u;
label_27f604:
    // 0x27f604: 0xac335014  sw          $s3, 0x5014($at)
    ctx->pc = 0x27f604u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20500), GPR_U32(ctx, 19));
label_27f608:
    // 0x27f608: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x27f608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_27f60c:
    // 0x27f60c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x27f60cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_27f610:
    // 0x27f610: 0xc052d0c  jal         func_14B430
label_27f614:
    if (ctx->pc == 0x27F614u) {
        ctx->pc = 0x27F614u;
            // 0x27f614: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x27F618u;
        goto label_27f618;
    }
    ctx->pc = 0x27F610u;
    SET_GPR_U32(ctx, 31, 0x27F618u);
    ctx->pc = 0x27F614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F610u;
            // 0x27f614: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F618u; }
        if (ctx->pc != 0x27F618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F618u; }
        if (ctx->pc != 0x27F618u) { return; }
    }
    ctx->pc = 0x27F618u;
label_27f618:
    // 0x27f618: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_27f61c:
    if (ctx->pc == 0x27F61Cu) {
        ctx->pc = 0x27F620u;
        goto label_27f620;
    }
    ctx->pc = 0x27F618u;
    {
        const bool branch_taken_0x27f618 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f618) {
            ctx->pc = 0x27F678u;
            goto label_27f678;
        }
    }
    ctx->pc = 0x27F620u;
label_27f620:
    // 0x27f620: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x27f620u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_27f624:
    // 0x27f624: 0x8c225014  lw          $v0, 0x5014($at)
    ctx->pc = 0x27f624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20500)));
label_27f628:
    // 0x27f628: 0x2453ffff  addiu       $s3, $v0, -0x1
    ctx->pc = 0x27f628u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_27f62c:
    // 0x27f62c: 0x660000a  bltz        $s3, . + 4 + (0xA << 2)
label_27f630:
    if (ctx->pc == 0x27F630u) {
        ctx->pc = 0x27F630u;
            // 0x27f630: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27F634u;
        goto label_27f634;
    }
    ctx->pc = 0x27F62Cu;
    {
        const bool branch_taken_0x27f62c = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x27F630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F62Cu;
            // 0x27f630: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f62c) {
            ctx->pc = 0x27F658u;
            goto label_27f658;
        }
    }
    ctx->pc = 0x27F634u;
label_27f634:
    // 0x27f634: 0xc0956d4  jal         func_255B50
label_27f638:
    if (ctx->pc == 0x27F638u) {
        ctx->pc = 0x27F638u;
            // 0x27f638: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27F63Cu;
        goto label_27f63c;
    }
    ctx->pc = 0x27F634u;
    SET_GPR_U32(ctx, 31, 0x27F63Cu);
    ctx->pc = 0x27F638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F634u;
            // 0x27f638: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255B50u;
    if (runtime->hasFunction(0x255B50u)) {
        auto targetFn = runtime->lookupFunction(0x255B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F63Cu; }
        if (ctx->pc != 0x27F63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__Fi_0x255b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F63Cu; }
        if (ctx->pc != 0x27F63Cu) { return; }
    }
    ctx->pc = 0x27F63Cu;
label_27f63c:
    // 0x27f63c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27f63cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27f640:
    // 0x27f640: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
label_27f644:
    if (ctx->pc == 0x27F644u) {
        ctx->pc = 0x27F648u;
        goto label_27f648;
    }
    ctx->pc = 0x27F640u;
    {
        const bool branch_taken_0x27f640 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f640) {
            ctx->pc = 0x27F658u;
            goto label_27f658;
        }
    }
    ctx->pc = 0x27F648u;
label_27f648:
    // 0x27f648: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x27f648u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_27f64c:
    // 0x27f64c: 0x0  nop
    ctx->pc = 0x27f64cu;
    // NOP
label_27f650:
    // 0x27f650: 0x661fff8  bgez        $s3, . + 4 + (-0x8 << 2)
label_27f654:
    if (ctx->pc == 0x27F654u) {
        ctx->pc = 0x27F658u;
        goto label_27f658;
    }
    ctx->pc = 0x27F650u;
    {
        const bool branch_taken_0x27f650 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x27f650) {
            ctx->pc = 0x27F634u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27f634;
        }
    }
    ctx->pc = 0x27F658u;
label_27f658:
    // 0x27f658: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
label_27f65c:
    if (ctx->pc == 0x27F65Cu) {
        ctx->pc = 0x27F65Cu;
            // 0x27f65c: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->pc = 0x27F660u;
        goto label_27f660;
    }
    ctx->pc = 0x27F658u;
    {
        const bool branch_taken_0x27f658 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x27F65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F658u;
            // 0x27f65c: 0x3c0101f0  lui         $at, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f658) {
            ctx->pc = 0x27F674u;
            goto label_27f674;
        }
    }
    ctx->pc = 0x27F660u;
label_27f660:
    // 0x27f660: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x27f660u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_27f664:
    // 0x27f664: 0xc0956d4  jal         func_255B50
label_27f668:
    if (ctx->pc == 0x27F668u) {
        ctx->pc = 0x27F668u;
            // 0x27f668: 0x8c245014  lw          $a0, 0x5014($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20500)));
        ctx->pc = 0x27F66Cu;
        goto label_27f66c;
    }
    ctx->pc = 0x27F664u;
    SET_GPR_U32(ctx, 31, 0x27F66Cu);
    ctx->pc = 0x27F668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F664u;
            // 0x27f668: 0x8c245014  lw          $a0, 0x5014($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20500)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255B50u;
    if (runtime->hasFunction(0x255B50u)) {
        auto targetFn = runtime->lookupFunction(0x255B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F66Cu; }
        if (ctx->pc != 0x27F66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__Fi_0x255b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F66Cu; }
        if (ctx->pc != 0x27F66Cu) { return; }
    }
    ctx->pc = 0x27F66Cu;
label_27f66c:
    // 0x27f66c: 0x10000002  b           . + 4 + (0x2 << 2)
label_27f670:
    if (ctx->pc == 0x27F670u) {
        ctx->pc = 0x27F670u;
            // 0x27f670: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27F674u;
        goto label_27f674;
    }
    ctx->pc = 0x27F66Cu;
    {
        const bool branch_taken_0x27f66c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F66Cu;
            // 0x27f670: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f66c) {
            ctx->pc = 0x27F678u;
            goto label_27f678;
        }
    }
    ctx->pc = 0x27F674u;
label_27f674:
    // 0x27f674: 0xac335014  sw          $s3, 0x5014($at)
    ctx->pc = 0x27f674u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20500), GPR_U32(ctx, 19));
label_27f678:
    // 0x27f678: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x27f678u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_27f67c:
    // 0x27f67c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x27f67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_27f680:
    // 0x27f680: 0xc052d0c  jal         func_14B430
label_27f684:
    if (ctx->pc == 0x27F684u) {
        ctx->pc = 0x27F684u;
            // 0x27f684: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x27F688u;
        goto label_27f688;
    }
    ctx->pc = 0x27F680u;
    SET_GPR_U32(ctx, 31, 0x27F688u);
    ctx->pc = 0x27F684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F680u;
            // 0x27f684: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F688u; }
        if (ctx->pc != 0x27F688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F688u; }
        if (ctx->pc != 0x27F688u) { return; }
    }
    ctx->pc = 0x27F688u;
label_27f688:
    // 0x27f688: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_27f68c:
    if (ctx->pc == 0x27F68Cu) {
        ctx->pc = 0x27F68Cu;
            // 0x27f68c: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x27F690u;
        goto label_27f690;
    }
    ctx->pc = 0x27F688u;
    {
        const bool branch_taken_0x27f688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F68Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F688u;
            // 0x27f68c: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f688) {
            ctx->pc = 0x27F6ACu;
            goto label_27f6ac;
        }
    }
    ctx->pc = 0x27F690u;
label_27f690:
    // 0x27f690: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x27f690u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_27f694:
    // 0x27f694: 0x8c225018  lw          $v0, 0x5018($at)
    ctx->pc = 0x27f694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20504)));
label_27f698:
    // 0x27f698: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x27f698u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_27f69c:
    // 0x27f69c: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x27f69cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_27f6a0:
    // 0x27f6a0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x27f6a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_27f6a4:
    // 0x27f6a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27f6a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27f6a8:
    // 0x27f6a8: 0xac225018  sw          $v0, 0x5018($at)
    ctx->pc = 0x27f6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20504), GPR_U32(ctx, 2));
label_27f6ac:
    // 0x27f6ac: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x27f6acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_27f6b0:
    // 0x27f6b0: 0xc052d0c  jal         func_14B430
label_27f6b4:
    if (ctx->pc == 0x27F6B4u) {
        ctx->pc = 0x27F6B4u;
            // 0x27f6b4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x27F6B8u;
        goto label_27f6b8;
    }
    ctx->pc = 0x27F6B0u;
    SET_GPR_U32(ctx, 31, 0x27F6B8u);
    ctx->pc = 0x27F6B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F6B0u;
            // 0x27f6b4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F6B8u; }
        if (ctx->pc != 0x27F6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F6B8u; }
        if (ctx->pc != 0x27F6B8u) { return; }
    }
    ctx->pc = 0x27F6B8u;
label_27f6b8:
    // 0x27f6b8: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_27f6bc:
    if (ctx->pc == 0x27F6BCu) {
        ctx->pc = 0x27F6BCu;
            // 0x27f6bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27F6C0u;
        goto label_27f6c0;
    }
    ctx->pc = 0x27F6B8u;
    {
        const bool branch_taken_0x27f6b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F6B8u;
            // 0x27f6bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f6b8) {
            ctx->pc = 0x27F710u;
            goto label_27f710;
        }
    }
    ctx->pc = 0x27F6C0u;
label_27f6c0:
    // 0x27f6c0: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x27f6c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_27f6c4:
    // 0x27f6c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27f6c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27f6c8:
    // 0x27f6c8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x27f6c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_27f6cc:
    // 0x27f6cc: 0x320f809  jalr        $t9
label_27f6d0:
    if (ctx->pc == 0x27F6D0u) {
        ctx->pc = 0x27F6D0u;
            // 0x27f6d0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x27F6D4u;
        goto label_27f6d4;
    }
    ctx->pc = 0x27F6CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27F6D4u);
        ctx->pc = 0x27F6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F6CCu;
            // 0x27f6d0: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27F6D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27F6D4u; }
            if (ctx->pc != 0x27F6D4u) { return; }
        }
        }
    }
    ctx->pc = 0x27F6D4u;
label_27f6d4:
    // 0x27f6d4: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x27f6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_27f6d8:
    // 0x27f6d8: 0xc041c5c  jal         func_107170
label_27f6dc:
    if (ctx->pc == 0x27F6DCu) {
        ctx->pc = 0x27F6DCu;
            // 0x27f6dc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x27F6E0u;
        goto label_27f6e0;
    }
    ctx->pc = 0x27F6D8u;
    SET_GPR_U32(ctx, 31, 0x27F6E0u);
    ctx->pc = 0x27F6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F6D8u;
            // 0x27f6dc: 0x27a50070  addiu       $a1, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F6E0u; }
        if (ctx->pc != 0x27F6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F6E0u; }
        if (ctx->pc != 0x27F6E0u) { return; }
    }
    ctx->pc = 0x27F6E0u;
label_27f6e0:
    // 0x27f6e0: 0xc6210110  lwc1        $f1, 0x110($s1)
    ctx->pc = 0x27f6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27f6e4:
    // 0x27f6e4: 0x3c023f33  lui         $v0, 0x3F33
    ctx->pc = 0x27f6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16179 << 16));
label_27f6e8:
    // 0x27f6e8: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x27f6e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
label_27f6ec:
    // 0x27f6ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f6ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27f6f0:
    // 0x27f6f0: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x27f6f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_27f6f4:
    // 0x27f6f4: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x27f6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_27f6f8:
    // 0x27f6f8: 0xc7a00064  lwc1        $f0, 0x64($sp)
    ctx->pc = 0x27f6f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 100)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27f6fc:
    // 0x27f6fc: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x27f6fcu;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_27f700:
    // 0x27f700: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x27f700u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
label_27f704:
    // 0x27f704: 0xc04c518  jal         func_131460
label_27f708:
    if (ctx->pc == 0x27F708u) {
        ctx->pc = 0x27F708u;
            // 0x27f708: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->pc = 0x27F70Cu;
        goto label_27f70c;
    }
    ctx->pc = 0x27F704u;
    SET_GPR_U32(ctx, 31, 0x27F70Cu);
    ctx->pc = 0x27F708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F704u;
            // 0x27f708: 0xe7a00064  swc1        $f0, 0x64($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 100), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x131460u;
    if (runtime->hasFunction(0x131460u)) {
        auto targetFn = runtime->lookupFunction(0x131460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F70Cu; }
        if (ctx->pc != 0x27F70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__9mgCCameraFPf_0x131460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F70Cu; }
        if (ctx->pc != 0x27F70Cu) { return; }
    }
    ctx->pc = 0x27F70Cu;
label_27f70c:
    // 0x27f70c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27f70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27f710:
    // 0x27f710: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27f710u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27f714:
    // 0x27f714: 0xc09fb70  jal         func_27EDC0
label_27f718:
    if (ctx->pc == 0x27F718u) {
        ctx->pc = 0x27F718u;
            // 0x27f718: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27F71Cu;
        goto label_27f71c;
    }
    ctx->pc = 0x27F714u;
    SET_GPR_U32(ctx, 31, 0x27F71Cu);
    ctx->pc = 0x27F718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F714u;
            // 0x27f718: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27EDC0u;
    if (runtime->hasFunction(0x27EDC0u)) {
        auto targetFn = runtime->lookupFunction(0x27EDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F71Cu; }
        if (ctx->pc != 0x27F71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MoveChara__FP11CCharacter2P9mgCCameraP9mgCMemory_0x27edc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F71Cu; }
        if (ctx->pc != 0x27F71Cu) { return; }
    }
    ctx->pc = 0x27F71Cu;
label_27f71c:
    // 0x27f71c: 0x10000213  b           . + 4 + (0x213 << 2)
label_27f720:
    if (ctx->pc == 0x27F720u) {
        ctx->pc = 0x27F724u;
        goto label_27f724;
    }
    ctx->pc = 0x27F71Cu;
    {
        const bool branch_taken_0x27f71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f71c) {
            ctx->pc = 0x27FF6Cu;
            goto label_27ff6c;
        }
    }
    ctx->pc = 0x27F724u;
label_27f724:
    // 0x27f724: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27f724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27f728:
    // 0x27f728: 0xc052cf0  jal         func_14B3C0
label_27f72c:
    if (ctx->pc == 0x27F72Cu) {
        ctx->pc = 0x27F72Cu;
            // 0x27f72c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x27F730u;
        goto label_27f730;
    }
    ctx->pc = 0x27F728u;
    SET_GPR_U32(ctx, 31, 0x27F730u);
    ctx->pc = 0x27F72Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F728u;
            // 0x27f72c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F730u; }
        if (ctx->pc != 0x27F730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F730u; }
        if (ctx->pc != 0x27F730u) { return; }
    }
    ctx->pc = 0x27F730u;
label_27f730:
    // 0x27f730: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_27f734:
    if (ctx->pc == 0x27F734u) {
        ctx->pc = 0x27F734u;
            // 0x27f734: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x27F738u;
        goto label_27f738;
    }
    ctx->pc = 0x27F730u;
    {
        const bool branch_taken_0x27f730 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F730u;
            // 0x27f734: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f730) {
            ctx->pc = 0x27F74Cu;
            goto label_27f74c;
        }
    }
    ctx->pc = 0x27F738u;
label_27f738:
    // 0x27f738: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x27f738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_27f73c:
    // 0x27f73c: 0xc09fafc  jal         func_27EBF0
label_27f740:
    if (ctx->pc == 0x27F740u) {
        ctx->pc = 0x27F740u;
            // 0x27f740: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x27F744u;
        goto label_27f744;
    }
    ctx->pc = 0x27F73Cu;
    SET_GPR_U32(ctx, 31, 0x27F744u);
    ctx->pc = 0x27F740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F73Cu;
            // 0x27f740: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27EBF0u;
    if (runtime->hasFunction(0x27EBF0u)) {
        auto targetFn = runtime->lookupFunction(0x27EBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F744u; }
        if (ctx->pc != 0x27F744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MoveCameraRef__FPfPf_0x27ebf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F744u; }
        if (ctx->pc != 0x27F744u) { return; }
    }
    ctx->pc = 0x27F744u;
label_27f744:
    // 0x27f744: 0x10000004  b           . + 4 + (0x4 << 2)
label_27f748:
    if (ctx->pc == 0x27F748u) {
        ctx->pc = 0x27F748u;
            // 0x27f748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27F74Cu;
        goto label_27f74c;
    }
    ctx->pc = 0x27F744u;
    {
        const bool branch_taken_0x27f744 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F744u;
            // 0x27f748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f744) {
            ctx->pc = 0x27F758u;
            goto label_27f758;
        }
    }
    ctx->pc = 0x27F74Cu;
label_27f74c:
    // 0x27f74c: 0xc09fa88  jal         func_27EA20
label_27f750:
    if (ctx->pc == 0x27F750u) {
        ctx->pc = 0x27F750u;
            // 0x27f750: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x27F754u;
        goto label_27f754;
    }
    ctx->pc = 0x27F74Cu;
    SET_GPR_U32(ctx, 31, 0x27F754u);
    ctx->pc = 0x27F750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F74Cu;
            // 0x27f750: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27EA20u;
    if (runtime->hasFunction(0x27EA20u)) {
        auto targetFn = runtime->lookupFunction(0x27EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F754u; }
        if (ctx->pc != 0x27F754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MoveCamera__FPfPf_0x27ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F754u; }
        if (ctx->pc != 0x27F754u) { return; }
    }
    ctx->pc = 0x27F754u;
label_27f754:
    // 0x27f754: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27f758:
    // 0x27f758: 0xc04c504  jal         func_131410
label_27f75c:
    if (ctx->pc == 0x27F75Cu) {
        ctx->pc = 0x27F75Cu;
            // 0x27f75c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x27F760u;
        goto label_27f760;
    }
    ctx->pc = 0x27F758u;
    SET_GPR_U32(ctx, 31, 0x27F760u);
    ctx->pc = 0x27F75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F758u;
            // 0x27f75c: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131410u;
    if (runtime->hasFunction(0x131410u)) {
        auto targetFn = runtime->lookupFunction(0x131410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F760u; }
        if (ctx->pc != 0x27F760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__9mgCCameraFPf_0x131410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F760u; }
        if (ctx->pc != 0x27F760u) { return; }
    }
    ctx->pc = 0x27F760u;
label_27f760:
    // 0x27f760: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27f764:
    // 0x27f764: 0xc04c518  jal         func_131460
label_27f768:
    if (ctx->pc == 0x27F768u) {
        ctx->pc = 0x27F768u;
            // 0x27f768: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x27F76Cu;
        goto label_27f76c;
    }
    ctx->pc = 0x27F764u;
    SET_GPR_U32(ctx, 31, 0x27F76Cu);
    ctx->pc = 0x27F768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F764u;
            // 0x27f768: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131460u;
    if (runtime->hasFunction(0x131460u)) {
        auto targetFn = runtime->lookupFunction(0x131460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F76Cu; }
        if (ctx->pc != 0x27F76Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__9mgCCameraFPf_0x131460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F76Cu; }
        if (ctx->pc != 0x27F76Cu) { return; }
    }
    ctx->pc = 0x27F76Cu;
label_27f76c:
    // 0x27f76c: 0x100001ff  b           . + 4 + (0x1FF << 2)
label_27f770:
    if (ctx->pc == 0x27F770u) {
        ctx->pc = 0x27F774u;
        goto label_27f774;
    }
    ctx->pc = 0x27F76Cu;
    {
        const bool branch_taken_0x27f76c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f76c) {
            ctx->pc = 0x27FF6Cu;
            goto label_27ff6c;
        }
    }
    ctx->pc = 0x27F774u;
label_27f774:
    // 0x27f774: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27f774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27f778:
    // 0x27f778: 0xc052cf0  jal         func_14B3C0
label_27f77c:
    if (ctx->pc == 0x27F77Cu) {
        ctx->pc = 0x27F77Cu;
            // 0x27f77c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x27F780u;
        goto label_27f780;
    }
    ctx->pc = 0x27F778u;
    SET_GPR_U32(ctx, 31, 0x27F780u);
    ctx->pc = 0x27F77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F778u;
            // 0x27f77c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F780u; }
        if (ctx->pc != 0x27F780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F780u; }
        if (ctx->pc != 0x27F780u) { return; }
    }
    ctx->pc = 0x27F780u;
label_27f780:
    // 0x27f780: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_27f784:
    if (ctx->pc == 0x27F784u) {
        ctx->pc = 0x27F784u;
            // 0x27f784: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x27F788u;
        goto label_27f788;
    }
    ctx->pc = 0x27F780u;
    {
        const bool branch_taken_0x27f780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F780u;
            // 0x27f784: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f780) {
            ctx->pc = 0x27F79Cu;
            goto label_27f79c;
        }
    }
    ctx->pc = 0x27F788u;
label_27f788:
    // 0x27f788: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x27f788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_27f78c:
    // 0x27f78c: 0xc09fafc  jal         func_27EBF0
label_27f790:
    if (ctx->pc == 0x27F790u) {
        ctx->pc = 0x27F790u;
            // 0x27f790: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x27F794u;
        goto label_27f794;
    }
    ctx->pc = 0x27F78Cu;
    SET_GPR_U32(ctx, 31, 0x27F794u);
    ctx->pc = 0x27F790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F78Cu;
            // 0x27f790: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27EBF0u;
    if (runtime->hasFunction(0x27EBF0u)) {
        auto targetFn = runtime->lookupFunction(0x27EBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F794u; }
        if (ctx->pc != 0x27F794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MoveCameraRef__FPfPf_0x27ebf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F794u; }
        if (ctx->pc != 0x27F794u) { return; }
    }
    ctx->pc = 0x27F794u;
label_27f794:
    // 0x27f794: 0x10000004  b           . + 4 + (0x4 << 2)
label_27f798:
    if (ctx->pc == 0x27F798u) {
        ctx->pc = 0x27F798u;
            // 0x27f798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27F79Cu;
        goto label_27f79c;
    }
    ctx->pc = 0x27F794u;
    {
        const bool branch_taken_0x27f794 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F794u;
            // 0x27f798: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f794) {
            ctx->pc = 0x27F7A8u;
            goto label_27f7a8;
        }
    }
    ctx->pc = 0x27F79Cu;
label_27f79c:
    // 0x27f79c: 0xc09fa88  jal         func_27EA20
label_27f7a0:
    if (ctx->pc == 0x27F7A0u) {
        ctx->pc = 0x27F7A0u;
            // 0x27f7a0: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x27F7A4u;
        goto label_27f7a4;
    }
    ctx->pc = 0x27F79Cu;
    SET_GPR_U32(ctx, 31, 0x27F7A4u);
    ctx->pc = 0x27F7A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F79Cu;
            // 0x27f7a0: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27EA20u;
    if (runtime->hasFunction(0x27EA20u)) {
        auto targetFn = runtime->lookupFunction(0x27EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F7A4u; }
        if (ctx->pc != 0x27F7A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MoveCamera__FPfPf_0x27ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F7A4u; }
        if (ctx->pc != 0x27F7A4u) { return; }
    }
    ctx->pc = 0x27F7A4u;
label_27f7a4:
    // 0x27f7a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f7a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27f7a8:
    // 0x27f7a8: 0xc04c504  jal         func_131410
label_27f7ac:
    if (ctx->pc == 0x27F7ACu) {
        ctx->pc = 0x27F7ACu;
            // 0x27f7ac: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x27F7B0u;
        goto label_27f7b0;
    }
    ctx->pc = 0x27F7A8u;
    SET_GPR_U32(ctx, 31, 0x27F7B0u);
    ctx->pc = 0x27F7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F7A8u;
            // 0x27f7ac: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131410u;
    if (runtime->hasFunction(0x131410u)) {
        auto targetFn = runtime->lookupFunction(0x131410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F7B0u; }
        if (ctx->pc != 0x27F7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__9mgCCameraFPf_0x131410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F7B0u; }
        if (ctx->pc != 0x27F7B0u) { return; }
    }
    ctx->pc = 0x27F7B0u;
label_27f7b0:
    // 0x27f7b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f7b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27f7b4:
    // 0x27f7b4: 0xc04c518  jal         func_131460
label_27f7b8:
    if (ctx->pc == 0x27F7B8u) {
        ctx->pc = 0x27F7B8u;
            // 0x27f7b8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x27F7BCu;
        goto label_27f7bc;
    }
    ctx->pc = 0x27F7B4u;
    SET_GPR_U32(ctx, 31, 0x27F7BCu);
    ctx->pc = 0x27F7B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F7B4u;
            // 0x27f7b8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131460u;
    if (runtime->hasFunction(0x131460u)) {
        auto targetFn = runtime->lookupFunction(0x131460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F7BCu; }
        if (ctx->pc != 0x27F7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__9mgCCameraFPf_0x131460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F7BCu; }
        if (ctx->pc != 0x27F7BCu) { return; }
    }
    ctx->pc = 0x27F7BCu;
label_27f7bc:
    // 0x27f7bc: 0x8f839810  lw          $v1, -0x67F0($gp)
    ctx->pc = 0x27f7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940688)));
label_27f7c0:
    // 0x27f7c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27f7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27f7c4:
    // 0x27f7c4: 0x10620040  beq         $v1, $v0, . + 4 + (0x40 << 2)
label_27f7c8:
    if (ctx->pc == 0x27F7C8u) {
        ctx->pc = 0x27F7C8u;
            // 0x27f7c8: 0x3c0401f0  lui         $a0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
        ctx->pc = 0x27F7CCu;
        goto label_27f7cc;
    }
    ctx->pc = 0x27F7C4u;
    {
        const bool branch_taken_0x27f7c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27F7C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F7C4u;
            // 0x27f7c8: 0x3c0401f0  lui         $a0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f7c4) {
            ctx->pc = 0x27F8C8u;
            goto label_27f8c8;
        }
    }
    ctx->pc = 0x27F7CCu;
label_27f7cc:
    // 0x27f7cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27f7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27f7d0:
    // 0x27f7d0: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
label_27f7d4:
    if (ctx->pc == 0x27F7D4u) {
        ctx->pc = 0x27F7D4u;
            // 0x27f7d4: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x27F7D8u;
        goto label_27f7d8;
    }
    ctx->pc = 0x27F7D0u;
    {
        const bool branch_taken_0x27f7d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27F7D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F7D0u;
            // 0x27f7d4: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f7d0) {
            ctx->pc = 0x27F858u;
            goto label_27f858;
        }
    }
    ctx->pc = 0x27F7D8u;
label_27f7d8:
    // 0x27f7d8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_27f7dc:
    if (ctx->pc == 0x27F7DCu) {
        ctx->pc = 0x27F7DCu;
            // 0x27f7dc: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x27F7E0u;
        goto label_27f7e0;
    }
    ctx->pc = 0x27F7D8u;
    {
        const bool branch_taken_0x27f7d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F7DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F7D8u;
            // 0x27f7dc: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f7d8) {
            ctx->pc = 0x27F7E8u;
            goto label_27f7e8;
        }
    }
    ctx->pc = 0x27F7E0u;
label_27f7e0:
    // 0x27f7e0: 0x10000051  b           . + 4 + (0x51 << 2)
label_27f7e4:
    if (ctx->pc == 0x27F7E4u) {
        ctx->pc = 0x27F7E8u;
        goto label_27f7e8;
    }
    ctx->pc = 0x27F7E0u;
    {
        const bool branch_taken_0x27f7e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f7e0) {
            ctx->pc = 0x27F928u;
            goto label_27f928;
        }
    }
    ctx->pc = 0x27F7E8u;
label_27f7e8:
    // 0x27f7e8: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x27f7e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_27f7ec:
    // 0x27f7ec: 0xc052d0c  jal         func_14B430
label_27f7f0:
    if (ctx->pc == 0x27F7F0u) {
        ctx->pc = 0x27F7F0u;
            // 0x27f7f0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x27F7F4u;
        goto label_27f7f4;
    }
    ctx->pc = 0x27F7ECu;
    SET_GPR_U32(ctx, 31, 0x27F7F4u);
    ctx->pc = 0x27F7F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F7ECu;
            // 0x27f7f0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F7F4u; }
        if (ctx->pc != 0x27F7F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F7F4u; }
        if (ctx->pc != 0x27F7F4u) { return; }
    }
    ctx->pc = 0x27F7F4u;
label_27f7f4:
    // 0x27f7f4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_27f7f8:
    if (ctx->pc == 0x27F7F8u) {
        ctx->pc = 0x27F7F8u;
            // 0x27f7f8: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x27F7FCu;
        goto label_27f7fc;
    }
    ctx->pc = 0x27F7F4u;
    {
        const bool branch_taken_0x27f7f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F7F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F7F4u;
            // 0x27f7f8: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f7f4) {
            ctx->pc = 0x27F81Cu;
            goto label_27f81c;
        }
    }
    ctx->pc = 0x27F7FCu;
label_27f7fc:
    // 0x27f7fc: 0x8f82980c  lw          $v0, -0x67F4($gp)
    ctx->pc = 0x27f7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940684)));
label_27f800:
    // 0x27f800: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x27f800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_27f804:
    // 0x27f804: 0xaf82980c  sw          $v0, -0x67F4($gp)
    ctx->pc = 0x27f804u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940684), GPR_U32(ctx, 2));
label_27f808:
    // 0x27f808: 0x8f82980c  lw          $v0, -0x67F4($gp)
    ctx->pc = 0x27f808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940684)));
label_27f80c:
    // 0x27f80c: 0x4410046  bgez        $v0, . + 4 + (0x46 << 2)
label_27f810:
    if (ctx->pc == 0x27F810u) {
        ctx->pc = 0x27F814u;
        goto label_27f814;
    }
    ctx->pc = 0x27F80Cu;
    {
        const bool branch_taken_0x27f80c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x27f80c) {
            ctx->pc = 0x27F928u;
            goto label_27f928;
        }
    }
    ctx->pc = 0x27F814u;
label_27f814:
    // 0x27f814: 0x10000044  b           . + 4 + (0x44 << 2)
label_27f818:
    if (ctx->pc == 0x27F818u) {
        ctx->pc = 0x27F818u;
            // 0x27f818: 0xaf80980c  sw          $zero, -0x67F4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940684), GPR_U32(ctx, 0));
        ctx->pc = 0x27F81Cu;
        goto label_27f81c;
    }
    ctx->pc = 0x27F814u;
    {
        const bool branch_taken_0x27f814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F814u;
            // 0x27f818: 0xaf80980c  sw          $zero, -0x67F4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940684), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f814) {
            ctx->pc = 0x27F928u;
            goto label_27f928;
        }
    }
    ctx->pc = 0x27F81Cu;
label_27f81c:
    // 0x27f81c: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x27f81cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_27f820:
    // 0x27f820: 0xc052d0c  jal         func_14B430
label_27f824:
    if (ctx->pc == 0x27F824u) {
        ctx->pc = 0x27F824u;
            // 0x27f824: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x27F828u;
        goto label_27f828;
    }
    ctx->pc = 0x27F820u;
    SET_GPR_U32(ctx, 31, 0x27F828u);
    ctx->pc = 0x27F824u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F820u;
            // 0x27f824: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F828u; }
        if (ctx->pc != 0x27F828u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F828u; }
        if (ctx->pc != 0x27F828u) { return; }
    }
    ctx->pc = 0x27F828u;
label_27f828:
    // 0x27f828: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_27f82c:
    if (ctx->pc == 0x27F82Cu) {
        ctx->pc = 0x27F830u;
        goto label_27f830;
    }
    ctx->pc = 0x27F828u;
    {
        const bool branch_taken_0x27f828 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f828) {
            ctx->pc = 0x27F928u;
            goto label_27f928;
        }
    }
    ctx->pc = 0x27F830u;
label_27f830:
    // 0x27f830: 0x8f82980c  lw          $v0, -0x67F4($gp)
    ctx->pc = 0x27f830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940684)));
label_27f834:
    // 0x27f834: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27f834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_27f838:
    // 0x27f838: 0xaf82980c  sw          $v0, -0x67F4($gp)
    ctx->pc = 0x27f838u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940684), GPR_U32(ctx, 2));
label_27f83c:
    // 0x27f83c: 0x8f82980c  lw          $v0, -0x67F4($gp)
    ctx->pc = 0x27f83cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940684)));
label_27f840:
    // 0x27f840: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x27f840u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_27f844:
    // 0x27f844: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
label_27f848:
    if (ctx->pc == 0x27F848u) {
        ctx->pc = 0x27F84Cu;
        goto label_27f84c;
    }
    ctx->pc = 0x27F844u;
    {
        const bool branch_taken_0x27f844 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f844) {
            ctx->pc = 0x27F928u;
            goto label_27f928;
        }
    }
    ctx->pc = 0x27F84Cu;
label_27f84c:
    // 0x27f84c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x27f84cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_27f850:
    // 0x27f850: 0x10000035  b           . + 4 + (0x35 << 2)
label_27f854:
    if (ctx->pc == 0x27F854u) {
        ctx->pc = 0x27F854u;
            // 0x27f854: 0xaf82980c  sw          $v0, -0x67F4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940684), GPR_U32(ctx, 2));
        ctx->pc = 0x27F858u;
        goto label_27f858;
    }
    ctx->pc = 0x27F850u;
    {
        const bool branch_taken_0x27f850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F850u;
            // 0x27f854: 0xaf82980c  sw          $v0, -0x67F4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940684), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f850) {
            ctx->pc = 0x27F928u;
            goto label_27f928;
        }
    }
    ctx->pc = 0x27F858u;
label_27f858:
    // 0x27f858: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x27f858u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_27f85c:
    // 0x27f85c: 0xc052d0c  jal         func_14B430
label_27f860:
    if (ctx->pc == 0x27F860u) {
        ctx->pc = 0x27F860u;
            // 0x27f860: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x27F864u;
        goto label_27f864;
    }
    ctx->pc = 0x27F85Cu;
    SET_GPR_U32(ctx, 31, 0x27F864u);
    ctx->pc = 0x27F860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F85Cu;
            // 0x27f860: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F864u; }
        if (ctx->pc != 0x27F864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F864u; }
        if (ctx->pc != 0x27F864u) { return; }
    }
    ctx->pc = 0x27F864u;
label_27f864:
    // 0x27f864: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_27f868:
    if (ctx->pc == 0x27F868u) {
        ctx->pc = 0x27F868u;
            // 0x27f868: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x27F86Cu;
        goto label_27f86c;
    }
    ctx->pc = 0x27F864u;
    {
        const bool branch_taken_0x27f864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F868u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F864u;
            // 0x27f868: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f864) {
            ctx->pc = 0x27F88Cu;
            goto label_27f88c;
        }
    }
    ctx->pc = 0x27F86Cu;
label_27f86c:
    // 0x27f86c: 0x8f829814  lw          $v0, -0x67EC($gp)
    ctx->pc = 0x27f86cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940692)));
label_27f870:
    // 0x27f870: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x27f870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_27f874:
    // 0x27f874: 0xaf829814  sw          $v0, -0x67EC($gp)
    ctx->pc = 0x27f874u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940692), GPR_U32(ctx, 2));
label_27f878:
    // 0x27f878: 0x8f829814  lw          $v0, -0x67EC($gp)
    ctx->pc = 0x27f878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940692)));
label_27f87c:
    // 0x27f87c: 0x441002a  bgez        $v0, . + 4 + (0x2A << 2)
label_27f880:
    if (ctx->pc == 0x27F880u) {
        ctx->pc = 0x27F884u;
        goto label_27f884;
    }
    ctx->pc = 0x27F87Cu;
    {
        const bool branch_taken_0x27f87c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x27f87c) {
            ctx->pc = 0x27F928u;
            goto label_27f928;
        }
    }
    ctx->pc = 0x27F884u;
label_27f884:
    // 0x27f884: 0x10000028  b           . + 4 + (0x28 << 2)
label_27f888:
    if (ctx->pc == 0x27F888u) {
        ctx->pc = 0x27F888u;
            // 0x27f888: 0xaf809814  sw          $zero, -0x67EC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940692), GPR_U32(ctx, 0));
        ctx->pc = 0x27F88Cu;
        goto label_27f88c;
    }
    ctx->pc = 0x27F884u;
    {
        const bool branch_taken_0x27f884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F888u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F884u;
            // 0x27f888: 0xaf809814  sw          $zero, -0x67EC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940692), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f884) {
            ctx->pc = 0x27F928u;
            goto label_27f928;
        }
    }
    ctx->pc = 0x27F88Cu;
label_27f88c:
    // 0x27f88c: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x27f88cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_27f890:
    // 0x27f890: 0xc052d0c  jal         func_14B430
label_27f894:
    if (ctx->pc == 0x27F894u) {
        ctx->pc = 0x27F894u;
            // 0x27f894: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x27F898u;
        goto label_27f898;
    }
    ctx->pc = 0x27F890u;
    SET_GPR_U32(ctx, 31, 0x27F898u);
    ctx->pc = 0x27F894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F890u;
            // 0x27f894: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F898u; }
        if (ctx->pc != 0x27F898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F898u; }
        if (ctx->pc != 0x27F898u) { return; }
    }
    ctx->pc = 0x27F898u;
label_27f898:
    // 0x27f898: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_27f89c:
    if (ctx->pc == 0x27F89Cu) {
        ctx->pc = 0x27F8A0u;
        goto label_27f8a0;
    }
    ctx->pc = 0x27F898u;
    {
        const bool branch_taken_0x27f898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f898) {
            ctx->pc = 0x27F928u;
            goto label_27f928;
        }
    }
    ctx->pc = 0x27F8A0u;
label_27f8a0:
    // 0x27f8a0: 0x8f829814  lw          $v0, -0x67EC($gp)
    ctx->pc = 0x27f8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940692)));
label_27f8a4:
    // 0x27f8a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27f8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_27f8a8:
    // 0x27f8a8: 0xaf829814  sw          $v0, -0x67EC($gp)
    ctx->pc = 0x27f8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940692), GPR_U32(ctx, 2));
label_27f8ac:
    // 0x27f8ac: 0x8f829814  lw          $v0, -0x67EC($gp)
    ctx->pc = 0x27f8acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940692)));
label_27f8b0:
    // 0x27f8b0: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x27f8b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_27f8b4:
    // 0x27f8b4: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_27f8b8:
    if (ctx->pc == 0x27F8B8u) {
        ctx->pc = 0x27F8BCu;
        goto label_27f8bc;
    }
    ctx->pc = 0x27F8B4u;
    {
        const bool branch_taken_0x27f8b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f8b4) {
            ctx->pc = 0x27F928u;
            goto label_27f928;
        }
    }
    ctx->pc = 0x27F8BCu;
label_27f8bc:
    // 0x27f8bc: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x27f8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_27f8c0:
    // 0x27f8c0: 0x10000019  b           . + 4 + (0x19 << 2)
label_27f8c4:
    if (ctx->pc == 0x27F8C4u) {
        ctx->pc = 0x27F8C4u;
            // 0x27f8c4: 0xaf829814  sw          $v0, -0x67EC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940692), GPR_U32(ctx, 2));
        ctx->pc = 0x27F8C8u;
        goto label_27f8c8;
    }
    ctx->pc = 0x27F8C0u;
    {
        const bool branch_taken_0x27f8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F8C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F8C0u;
            // 0x27f8c4: 0xaf829814  sw          $v0, -0x67EC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940692), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f8c0) {
            ctx->pc = 0x27F928u;
            goto label_27f928;
        }
    }
    ctx->pc = 0x27F8C8u;
label_27f8c8:
    // 0x27f8c8: 0xc0959c0  jal         func_256700
label_27f8cc:
    if (ctx->pc == 0x27F8CCu) {
        ctx->pc = 0x27F8CCu;
            // 0x27f8cc: 0x24844200  addiu       $a0, $a0, 0x4200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16896));
        ctx->pc = 0x27F8D0u;
        goto label_27f8d0;
    }
    ctx->pc = 0x27F8C8u;
    SET_GPR_U32(ctx, 31, 0x27F8D0u);
    ctx->pc = 0x27F8CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F8C8u;
            // 0x27f8cc: 0x24844200  addiu       $a0, $a0, 0x4200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256700u;
    if (runtime->hasFunction(0x256700u)) {
        auto targetFn = runtime->lookupFunction(0x256700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F8D0u; }
        if (ctx->pc != 0x27F8D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFrame__10CCameraPasFv_0x256700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F8D0u; }
        if (ctx->pc != 0x27F8D0u) { return; }
    }
    ctx->pc = 0x27F8D0u;
label_27f8d0:
    // 0x27f8d0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x27f8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_27f8d4:
    // 0x27f8d4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x27f8d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27f8d8:
    // 0x27f8d8: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x27f8d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_27f8dc:
    // 0x27f8dc: 0xc052cf0  jal         func_14B3C0
label_27f8e0:
    if (ctx->pc == 0x27F8E0u) {
        ctx->pc = 0x27F8E0u;
            // 0x27f8e0: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->pc = 0x27F8E4u;
        goto label_27f8e4;
    }
    ctx->pc = 0x27F8DCu;
    SET_GPR_U32(ctx, 31, 0x27F8E4u);
    ctx->pc = 0x27F8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F8DCu;
            // 0x27f8e0: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F8E4u; }
        if (ctx->pc != 0x27F8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F8E4u; }
        if (ctx->pc != 0x27F8E4u) { return; }
    }
    ctx->pc = 0x27F8E4u;
label_27f8e4:
    // 0x27f8e4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_27f8e8:
    if (ctx->pc == 0x27F8E8u) {
        ctx->pc = 0x27F8E8u;
            // 0x27f8e8: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x27F8ECu;
        goto label_27f8ec;
    }
    ctx->pc = 0x27F8E4u;
    {
        const bool branch_taken_0x27f8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F8E4u;
            // 0x27f8e8: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f8e4) {
            ctx->pc = 0x27F900u;
            goto label_27f900;
        }
    }
    ctx->pc = 0x27F8ECu;
label_27f8ec:
    // 0x27f8ec: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x27f8ecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_27f8f0:
    // 0x27f8f0: 0x6210009  bgez        $s1, . + 4 + (0x9 << 2)
label_27f8f4:
    if (ctx->pc == 0x27F8F4u) {
        ctx->pc = 0x27F8F8u;
        goto label_27f8f8;
    }
    ctx->pc = 0x27F8F0u;
    {
        const bool branch_taken_0x27f8f0 = (GPR_S32(ctx, 17) >= 0);
        if (branch_taken_0x27f8f0) {
            ctx->pc = 0x27F918u;
            goto label_27f918;
        }
    }
    ctx->pc = 0x27F8F8u;
label_27f8f8:
    // 0x27f8f8: 0x10000007  b           . + 4 + (0x7 << 2)
label_27f8fc:
    if (ctx->pc == 0x27F8FCu) {
        ctx->pc = 0x27F8FCu;
            // 0x27f8fc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27F900u;
        goto label_27f900;
    }
    ctx->pc = 0x27F8F8u;
    {
        const bool branch_taken_0x27f8f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F8F8u;
            // 0x27f8fc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f8f8) {
            ctx->pc = 0x27F918u;
            goto label_27f918;
        }
    }
    ctx->pc = 0x27F900u;
label_27f900:
    // 0x27f900: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x27f900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_27f904:
    // 0x27f904: 0xc052cf0  jal         func_14B3C0
label_27f908:
    if (ctx->pc == 0x27F908u) {
        ctx->pc = 0x27F908u;
            // 0x27f908: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x27F90Cu;
        goto label_27f90c;
    }
    ctx->pc = 0x27F904u;
    SET_GPR_U32(ctx, 31, 0x27F90Cu);
    ctx->pc = 0x27F908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F904u;
            // 0x27f908: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F90Cu; }
        if (ctx->pc != 0x27F90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F90Cu; }
        if (ctx->pc != 0x27F90Cu) { return; }
    }
    ctx->pc = 0x27F90Cu;
label_27f90c:
    // 0x27f90c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_27f910:
    if (ctx->pc == 0x27F910u) {
        ctx->pc = 0x27F914u;
        goto label_27f914;
    }
    ctx->pc = 0x27F90Cu;
    {
        const bool branch_taken_0x27f90c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f90c) {
            ctx->pc = 0x27F918u;
            goto label_27f918;
        }
    }
    ctx->pc = 0x27F914u;
label_27f914:
    // 0x27f914: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x27f914u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_27f918:
    // 0x27f918: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x27f918u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_27f91c:
    // 0x27f91c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27f91cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27f920:
    // 0x27f920: 0xc0959bc  jal         func_2566F0
label_27f924:
    if (ctx->pc == 0x27F924u) {
        ctx->pc = 0x27F924u;
            // 0x27f924: 0x24844200  addiu       $a0, $a0, 0x4200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16896));
        ctx->pc = 0x27F928u;
        goto label_27f928;
    }
    ctx->pc = 0x27F920u;
    SET_GPR_U32(ctx, 31, 0x27F928u);
    ctx->pc = 0x27F924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F920u;
            // 0x27f924: 0x24844200  addiu       $a0, $a0, 0x4200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2566F0u;
    if (runtime->hasFunction(0x2566F0u)) {
        auto targetFn = runtime->lookupFunction(0x2566F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F928u; }
        if (ctx->pc != 0x27F928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFrame__10CCameraPasFi_0x2566f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F928u; }
        if (ctx->pc != 0x27F928u) { return; }
    }
    ctx->pc = 0x27F928u;
label_27f928:
    // 0x27f928: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x27f928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_27f92c:
    // 0x27f92c: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x27f92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_27f930:
    // 0x27f930: 0xc052d0c  jal         func_14B430
label_27f934:
    if (ctx->pc == 0x27F934u) {
        ctx->pc = 0x27F934u;
            // 0x27f934: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x27F938u;
        goto label_27f938;
    }
    ctx->pc = 0x27F930u;
    SET_GPR_U32(ctx, 31, 0x27F938u);
    ctx->pc = 0x27F934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F930u;
            // 0x27f934: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F938u; }
        if (ctx->pc != 0x27F938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F938u; }
        if (ctx->pc != 0x27F938u) { return; }
    }
    ctx->pc = 0x27F938u;
label_27f938:
    // 0x27f938: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_27f93c:
    if (ctx->pc == 0x27F93Cu) {
        ctx->pc = 0x27F93Cu;
            // 0x27f93c: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x27F940u;
        goto label_27f940;
    }
    ctx->pc = 0x27F938u;
    {
        const bool branch_taken_0x27f938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F938u;
            // 0x27f93c: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f938) {
            ctx->pc = 0x27F960u;
            goto label_27f960;
        }
    }
    ctx->pc = 0x27F940u;
label_27f940:
    // 0x27f940: 0x8f829810  lw          $v0, -0x67F0($gp)
    ctx->pc = 0x27f940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940688)));
label_27f944:
    // 0x27f944: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x27f944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_27f948:
    // 0x27f948: 0xaf829810  sw          $v0, -0x67F0($gp)
    ctx->pc = 0x27f948u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940688), GPR_U32(ctx, 2));
label_27f94c:
    // 0x27f94c: 0x8f829810  lw          $v0, -0x67F0($gp)
    ctx->pc = 0x27f94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940688)));
label_27f950:
    // 0x27f950: 0x4410011  bgez        $v0, . + 4 + (0x11 << 2)
label_27f954:
    if (ctx->pc == 0x27F954u) {
        ctx->pc = 0x27F958u;
        goto label_27f958;
    }
    ctx->pc = 0x27F950u;
    {
        const bool branch_taken_0x27f950 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x27f950) {
            ctx->pc = 0x27F998u;
            goto label_27f998;
        }
    }
    ctx->pc = 0x27F958u;
label_27f958:
    // 0x27f958: 0x1000000f  b           . + 4 + (0xF << 2)
label_27f95c:
    if (ctx->pc == 0x27F95Cu) {
        ctx->pc = 0x27F95Cu;
            // 0x27f95c: 0xaf809810  sw          $zero, -0x67F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940688), GPR_U32(ctx, 0));
        ctx->pc = 0x27F960u;
        goto label_27f960;
    }
    ctx->pc = 0x27F958u;
    {
        const bool branch_taken_0x27f958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27F95Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27F958u;
            // 0x27f95c: 0xaf809810  sw          $zero, -0x67F0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940688), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27f958) {
            ctx->pc = 0x27F998u;
            goto label_27f998;
        }
    }
    ctx->pc = 0x27F960u;
label_27f960:
    // 0x27f960: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x27f960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_27f964:
    // 0x27f964: 0xc052d0c  jal         func_14B430
label_27f968:
    if (ctx->pc == 0x27F968u) {
        ctx->pc = 0x27F968u;
            // 0x27f968: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x27F96Cu;
        goto label_27f96c;
    }
    ctx->pc = 0x27F964u;
    SET_GPR_U32(ctx, 31, 0x27F96Cu);
    ctx->pc = 0x27F968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F964u;
            // 0x27f968: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F96Cu; }
        if (ctx->pc != 0x27F96Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F96Cu; }
        if (ctx->pc != 0x27F96Cu) { return; }
    }
    ctx->pc = 0x27F96Cu;
label_27f96c:
    // 0x27f96c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_27f970:
    if (ctx->pc == 0x27F970u) {
        ctx->pc = 0x27F974u;
        goto label_27f974;
    }
    ctx->pc = 0x27F96Cu;
    {
        const bool branch_taken_0x27f96c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f96c) {
            ctx->pc = 0x27F998u;
            goto label_27f998;
        }
    }
    ctx->pc = 0x27F974u;
label_27f974:
    // 0x27f974: 0x8f829810  lw          $v0, -0x67F0($gp)
    ctx->pc = 0x27f974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940688)));
label_27f978:
    // 0x27f978: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27f978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_27f97c:
    // 0x27f97c: 0xaf829810  sw          $v0, -0x67F0($gp)
    ctx->pc = 0x27f97cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940688), GPR_U32(ctx, 2));
label_27f980:
    // 0x27f980: 0x8f829810  lw          $v0, -0x67F0($gp)
    ctx->pc = 0x27f980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940688)));
label_27f984:
    // 0x27f984: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x27f984u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_27f988:
    // 0x27f988: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_27f98c:
    if (ctx->pc == 0x27F98Cu) {
        ctx->pc = 0x27F990u;
        goto label_27f990;
    }
    ctx->pc = 0x27F988u;
    {
        const bool branch_taken_0x27f988 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27f988) {
            ctx->pc = 0x27F998u;
            goto label_27f998;
        }
    }
    ctx->pc = 0x27F990u;
label_27f990:
    // 0x27f990: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27f990u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27f994:
    // 0x27f994: 0xaf829810  sw          $v0, -0x67F0($gp)
    ctx->pc = 0x27f994u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940688), GPR_U32(ctx, 2));
label_27f998:
    // 0x27f998: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x27f998u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_27f99c:
    // 0x27f99c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27f99cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27f9a0:
    // 0x27f9a0: 0xc052d0c  jal         func_14B430
label_27f9a4:
    if (ctx->pc == 0x27F9A4u) {
        ctx->pc = 0x27F9A4u;
            // 0x27f9a4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x27F9A8u;
        goto label_27f9a8;
    }
    ctx->pc = 0x27F9A0u;
    SET_GPR_U32(ctx, 31, 0x27F9A8u);
    ctx->pc = 0x27F9A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F9A0u;
            // 0x27f9a4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F9A8u; }
        if (ctx->pc != 0x27F9A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F9A8u; }
        if (ctx->pc != 0x27F9A8u) { return; }
    }
    ctx->pc = 0x27F9A8u;
label_27f9a8:
    // 0x27f9a8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_27f9ac:
    if (ctx->pc == 0x27F9ACu) {
        ctx->pc = 0x27F9B0u;
        goto label_27f9b0;
    }
    ctx->pc = 0x27F9A8u;
    {
        const bool branch_taken_0x27f9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f9a8) {
            ctx->pc = 0x27F9F4u;
            goto label_27f9f4;
        }
    }
    ctx->pc = 0x27F9B0u;
label_27f9b0:
    // 0x27f9b0: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x27f9b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_27f9b4:
    // 0x27f9b4: 0x8f859814  lw          $a1, -0x67EC($gp)
    ctx->pc = 0x27f9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940692)));
label_27f9b8:
    // 0x27f9b8: 0x8c224400  lw          $v0, 0x4400($at)
    ctx->pc = 0x27f9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 17408)));
label_27f9bc:
    // 0x27f9bc: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x27f9bcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_27f9c0:
    // 0x27f9c0: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_27f9c4:
    if (ctx->pc == 0x27F9C4u) {
        ctx->pc = 0x27F9C8u;
        goto label_27f9c8;
    }
    ctx->pc = 0x27F9C0u;
    {
        const bool branch_taken_0x27f9c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27f9c0) {
            ctx->pc = 0x27F9F4u;
            goto label_27f9f4;
        }
    }
    ctx->pc = 0x27F9C8u;
label_27f9c8:
    // 0x27f9c8: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x27f9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_27f9cc:
    // 0x27f9cc: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x27f9ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_27f9d0:
    // 0x27f9d0: 0x24844200  addiu       $a0, $a0, 0x4200
    ctx->pc = 0x27f9d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16896));
label_27f9d4:
    // 0x27f9d4: 0xc09596c  jal         func_2565B0
label_27f9d8:
    if (ctx->pc == 0x27F9D8u) {
        ctx->pc = 0x27F9D8u;
            // 0x27f9d8: 0x27a70090  addiu       $a3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x27F9DCu;
        goto label_27f9dc;
    }
    ctx->pc = 0x27F9D4u;
    SET_GPR_U32(ctx, 31, 0x27F9DCu);
    ctx->pc = 0x27F9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F9D4u;
            // 0x27f9d8: 0x27a70090  addiu       $a3, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2565B0u;
    if (runtime->hasFunction(0x2565B0u)) {
        auto targetFn = runtime->lookupFunction(0x2565B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F9DCu; }
        if (ctx->pc != 0x27F9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCameraPas__10CCameraPasFiPfPf_0x2565b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F9DCu; }
        if (ctx->pc != 0x27F9DCu) { return; }
    }
    ctx->pc = 0x27F9DCu;
label_27f9dc:
    // 0x27f9dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f9dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27f9e0:
    // 0x27f9e0: 0xc04c504  jal         func_131410
label_27f9e4:
    if (ctx->pc == 0x27F9E4u) {
        ctx->pc = 0x27F9E4u;
            // 0x27f9e4: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x27F9E8u;
        goto label_27f9e8;
    }
    ctx->pc = 0x27F9E0u;
    SET_GPR_U32(ctx, 31, 0x27F9E8u);
    ctx->pc = 0x27F9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F9E0u;
            // 0x27f9e4: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131410u;
    if (runtime->hasFunction(0x131410u)) {
        auto targetFn = runtime->lookupFunction(0x131410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F9E8u; }
        if (ctx->pc != 0x27F9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__9mgCCameraFPf_0x131410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F9E8u; }
        if (ctx->pc != 0x27F9E8u) { return; }
    }
    ctx->pc = 0x27F9E8u;
label_27f9e8:
    // 0x27f9e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27f9e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27f9ec:
    // 0x27f9ec: 0xc04c518  jal         func_131460
label_27f9f0:
    if (ctx->pc == 0x27F9F0u) {
        ctx->pc = 0x27F9F0u;
            // 0x27f9f0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x27F9F4u;
        goto label_27f9f4;
    }
    ctx->pc = 0x27F9ECu;
    SET_GPR_U32(ctx, 31, 0x27F9F4u);
    ctx->pc = 0x27F9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F9ECu;
            // 0x27f9f0: 0x27a50090  addiu       $a1, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131460u;
    if (runtime->hasFunction(0x131460u)) {
        auto targetFn = runtime->lookupFunction(0x131460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F9F4u; }
        if (ctx->pc != 0x27F9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__9mgCCameraFPf_0x131460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27F9F4u; }
        if (ctx->pc != 0x27F9F4u) { return; }
    }
    ctx->pc = 0x27F9F4u;
label_27f9f4:
    // 0x27f9f4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x27f9f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_27f9f8:
    // 0x27f9f8: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x27f9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_27f9fc:
    // 0x27f9fc: 0xc052d0c  jal         func_14B430
label_27fa00:
    if (ctx->pc == 0x27FA00u) {
        ctx->pc = 0x27FA00u;
            // 0x27fa00: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x27FA04u;
        goto label_27fa04;
    }
    ctx->pc = 0x27F9FCu;
    SET_GPR_U32(ctx, 31, 0x27FA04u);
    ctx->pc = 0x27FA00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27F9FCu;
            // 0x27fa00: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FA04u; }
        if (ctx->pc != 0x27FA04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FA04u; }
        if (ctx->pc != 0x27FA04u) { return; }
    }
    ctx->pc = 0x27FA04u;
label_27fa04:
    // 0x27fa04: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_27fa08:
    if (ctx->pc == 0x27FA08u) {
        ctx->pc = 0x27FA0Cu;
        goto label_27fa0c;
    }
    ctx->pc = 0x27FA04u;
    {
        const bool branch_taken_0x27fa04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fa04) {
            ctx->pc = 0x27FABCu;
            goto label_27fabc;
        }
    }
    ctx->pc = 0x27FA0Cu;
label_27fa0c:
    // 0x27fa0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27fa0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27fa10:
    // 0x27fa10: 0xc04c574  jal         func_1315D0
label_27fa14:
    if (ctx->pc == 0x27FA14u) {
        ctx->pc = 0x27FA14u;
            // 0x27fa14: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x27FA18u;
        goto label_27fa18;
    }
    ctx->pc = 0x27FA10u;
    SET_GPR_U32(ctx, 31, 0x27FA18u);
    ctx->pc = 0x27FA14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FA10u;
            // 0x27fa14: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FA18u; }
        if (ctx->pc != 0x27FA18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FA18u; }
        if (ctx->pc != 0x27FA18u) { return; }
    }
    ctx->pc = 0x27FA18u;
label_27fa18:
    // 0x27fa18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27fa18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27fa1c:
    // 0x27fa1c: 0xc04c578  jal         func_1315E0
label_27fa20:
    if (ctx->pc == 0x27FA20u) {
        ctx->pc = 0x27FA20u;
            // 0x27fa20: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x27FA24u;
        goto label_27fa24;
    }
    ctx->pc = 0x27FA1Cu;
    SET_GPR_U32(ctx, 31, 0x27FA24u);
    ctx->pc = 0x27FA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FA1Cu;
            // 0x27fa20: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315E0u;
    if (runtime->hasFunction(0x1315E0u)) {
        auto targetFn = runtime->lookupFunction(0x1315E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FA24u; }
        if (ctx->pc != 0x27FA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRef__9mgCCameraFPf_0x1315e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FA24u; }
        if (ctx->pc != 0x27FA24u) { return; }
    }
    ctx->pc = 0x27FA24u;
label_27fa24:
    // 0x27fa24: 0x8f83980c  lw          $v1, -0x67F4($gp)
    ctx->pc = 0x27fa24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940684)));
label_27fa28:
    // 0x27fa28: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x27fa28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_27fa2c:
    // 0x27fa2c: 0x1062001f  beq         $v1, $v0, . + 4 + (0x1F << 2)
label_27fa30:
    if (ctx->pc == 0x27FA30u) {
        ctx->pc = 0x27FA30u;
            // 0x27fa30: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x27FA34u;
        goto label_27fa34;
    }
    ctx->pc = 0x27FA2Cu;
    {
        const bool branch_taken_0x27fa2c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27FA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FA2Cu;
            // 0x27fa30: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fa2c) {
            ctx->pc = 0x27FAACu;
            goto label_27faac;
        }
    }
    ctx->pc = 0x27FA34u;
label_27fa34:
    // 0x27fa34: 0x10620015  beq         $v1, $v0, . + 4 + (0x15 << 2)
label_27fa38:
    if (ctx->pc == 0x27FA38u) {
        ctx->pc = 0x27FA38u;
            // 0x27fa38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x27FA3Cu;
        goto label_27fa3c;
    }
    ctx->pc = 0x27FA34u;
    {
        const bool branch_taken_0x27fa34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27FA38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FA34u;
            // 0x27fa38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fa34) {
            ctx->pc = 0x27FA8Cu;
            goto label_27fa8c;
        }
    }
    ctx->pc = 0x27FA3Cu;
label_27fa3c:
    // 0x27fa3c: 0x1062000b  beq         $v1, $v0, . + 4 + (0xB << 2)
label_27fa40:
    if (ctx->pc == 0x27FA40u) {
        ctx->pc = 0x27FA44u;
        goto label_27fa44;
    }
    ctx->pc = 0x27FA3Cu;
    {
        const bool branch_taken_0x27fa3c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27fa3c) {
            ctx->pc = 0x27FA6Cu;
            goto label_27fa6c;
        }
    }
    ctx->pc = 0x27FA44u;
label_27fa44:
    // 0x27fa44: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_27fa48:
    if (ctx->pc == 0x27FA48u) {
        ctx->pc = 0x27FA48u;
            // 0x27fa48: 0x3c0401f0  lui         $a0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
        ctx->pc = 0x27FA4Cu;
        goto label_27fa4c;
    }
    ctx->pc = 0x27FA44u;
    {
        const bool branch_taken_0x27fa44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FA44u;
            // 0x27fa48: 0x3c0401f0  lui         $a0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fa44) {
            ctx->pc = 0x27FA54u;
            goto label_27fa54;
        }
    }
    ctx->pc = 0x27FA4Cu;
label_27fa4c:
    // 0x27fa4c: 0x1000001b  b           . + 4 + (0x1B << 2)
label_27fa50:
    if (ctx->pc == 0x27FA50u) {
        ctx->pc = 0x27FA54u;
        goto label_27fa54;
    }
    ctx->pc = 0x27FA4Cu;
    {
        const bool branch_taken_0x27fa4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fa4c) {
            ctx->pc = 0x27FABCu;
            goto label_27fabc;
        }
    }
    ctx->pc = 0x27FA54u;
label_27fa54:
    // 0x27fa54: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x27fa54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_27fa58:
    // 0x27fa58: 0x24844200  addiu       $a0, $a0, 0x4200
    ctx->pc = 0x27fa58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16896));
label_27fa5c:
    // 0x27fa5c: 0xc0958f0  jal         func_2563C0
label_27fa60:
    if (ctx->pc == 0x27FA60u) {
        ctx->pc = 0x27FA60u;
            // 0x27fa60: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x27FA64u;
        goto label_27fa64;
    }
    ctx->pc = 0x27FA5Cu;
    SET_GPR_U32(ctx, 31, 0x27FA64u);
    ctx->pc = 0x27FA60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FA5Cu;
            // 0x27fa60: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2563C0u;
    if (runtime->hasFunction(0x2563C0u)) {
        auto targetFn = runtime->lookupFunction(0x2563C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FA64u; }
        if (ctx->pc != 0x27FA64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddCameraPas__10CCameraPasFPfPf_0x2563c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FA64u; }
        if (ctx->pc != 0x27FA64u) { return; }
    }
    ctx->pc = 0x27FA64u;
label_27fa64:
    // 0x27fa64: 0x10000015  b           . + 4 + (0x15 << 2)
label_27fa68:
    if (ctx->pc == 0x27FA68u) {
        ctx->pc = 0x27FA6Cu;
        goto label_27fa6c;
    }
    ctx->pc = 0x27FA64u;
    {
        const bool branch_taken_0x27fa64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fa64) {
            ctx->pc = 0x27FABCu;
            goto label_27fabc;
        }
    }
    ctx->pc = 0x27FA6Cu;
label_27fa6c:
    // 0x27fa6c: 0x8f859814  lw          $a1, -0x67EC($gp)
    ctx->pc = 0x27fa6cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940692)));
label_27fa70:
    // 0x27fa70: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x27fa70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_27fa74:
    // 0x27fa74: 0x24844200  addiu       $a0, $a0, 0x4200
    ctx->pc = 0x27fa74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16896));
label_27fa78:
    // 0x27fa78: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x27fa78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_27fa7c:
    // 0x27fa7c: 0xc095910  jal         func_256440
label_27fa80:
    if (ctx->pc == 0x27FA80u) {
        ctx->pc = 0x27FA80u;
            // 0x27fa80: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x27FA84u;
        goto label_27fa84;
    }
    ctx->pc = 0x27FA7Cu;
    SET_GPR_U32(ctx, 31, 0x27FA84u);
    ctx->pc = 0x27FA80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FA7Cu;
            // 0x27fa80: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256440u;
    if (runtime->hasFunction(0x256440u)) {
        auto targetFn = runtime->lookupFunction(0x256440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FA84u; }
        if (ctx->pc != 0x27FA84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InsCameraPas__10CCameraPasFiPfPf_0x256440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FA84u; }
        if (ctx->pc != 0x27FA84u) { return; }
    }
    ctx->pc = 0x27FA84u;
label_27fa84:
    // 0x27fa84: 0x1000000d  b           . + 4 + (0xD << 2)
label_27fa88:
    if (ctx->pc == 0x27FA88u) {
        ctx->pc = 0x27FA8Cu;
        goto label_27fa8c;
    }
    ctx->pc = 0x27FA84u;
    {
        const bool branch_taken_0x27fa84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fa84) {
            ctx->pc = 0x27FABCu;
            goto label_27fabc;
        }
    }
    ctx->pc = 0x27FA8Cu;
label_27fa8c:
    // 0x27fa8c: 0x8f859814  lw          $a1, -0x67EC($gp)
    ctx->pc = 0x27fa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940692)));
label_27fa90:
    // 0x27fa90: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x27fa90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_27fa94:
    // 0x27fa94: 0x24844200  addiu       $a0, $a0, 0x4200
    ctx->pc = 0x27fa94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16896));
label_27fa98:
    // 0x27fa98: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x27fa98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_27fa9c:
    // 0x27fa9c: 0xc095954  jal         func_256550
label_27faa0:
    if (ctx->pc == 0x27FAA0u) {
        ctx->pc = 0x27FAA0u;
            // 0x27faa0: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x27FAA4u;
        goto label_27faa4;
    }
    ctx->pc = 0x27FA9Cu;
    SET_GPR_U32(ctx, 31, 0x27FAA4u);
    ctx->pc = 0x27FAA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FA9Cu;
            // 0x27faa0: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256550u;
    if (runtime->hasFunction(0x256550u)) {
        auto targetFn = runtime->lookupFunction(0x256550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FAA4u; }
        if (ctx->pc != 0x27FAA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCameraPas__10CCameraPasFiPfPf_0x256550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FAA4u; }
        if (ctx->pc != 0x27FAA4u) { return; }
    }
    ctx->pc = 0x27FAA4u;
label_27faa4:
    // 0x27faa4: 0x10000005  b           . + 4 + (0x5 << 2)
label_27faa8:
    if (ctx->pc == 0x27FAA8u) {
        ctx->pc = 0x27FAACu;
        goto label_27faac;
    }
    ctx->pc = 0x27FAA4u;
    {
        const bool branch_taken_0x27faa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27faa4) {
            ctx->pc = 0x27FABCu;
            goto label_27fabc;
        }
    }
    ctx->pc = 0x27FAACu;
label_27faac:
    // 0x27faac: 0x8f859814  lw          $a1, -0x67EC($gp)
    ctx->pc = 0x27faacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940692)));
label_27fab0:
    // 0x27fab0: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x27fab0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_27fab4:
    // 0x27fab4: 0xc095984  jal         func_256610
label_27fab8:
    if (ctx->pc == 0x27FAB8u) {
        ctx->pc = 0x27FAB8u;
            // 0x27fab8: 0x24844200  addiu       $a0, $a0, 0x4200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16896));
        ctx->pc = 0x27FABCu;
        goto label_27fabc;
    }
    ctx->pc = 0x27FAB4u;
    SET_GPR_U32(ctx, 31, 0x27FABCu);
    ctx->pc = 0x27FAB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FAB4u;
            // 0x27fab8: 0x24844200  addiu       $a0, $a0, 0x4200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256610u;
    if (runtime->hasFunction(0x256610u)) {
        auto targetFn = runtime->lookupFunction(0x256610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FABCu; }
        if (ctx->pc != 0x27FABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DelCameraPas__10CCameraPasFi_0x256610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FABCu; }
        if (ctx->pc != 0x27FABCu) { return; }
    }
    ctx->pc = 0x27FABCu;
label_27fabc:
    // 0x27fabc: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x27fabcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_27fac0:
    // 0x27fac0: 0xc095abc  jal         func_256AF0
label_27fac4:
    if (ctx->pc == 0x27FAC4u) {
        ctx->pc = 0x27FAC4u;
            // 0x27fac4: 0x24844200  addiu       $a0, $a0, 0x4200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16896));
        ctx->pc = 0x27FAC8u;
        goto label_27fac8;
    }
    ctx->pc = 0x27FAC0u;
    SET_GPR_U32(ctx, 31, 0x27FAC8u);
    ctx->pc = 0x27FAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FAC0u;
            // 0x27fac4: 0x24844200  addiu       $a0, $a0, 0x4200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256AF0u;
    if (runtime->hasFunction(0x256AF0u)) {
        auto targetFn = runtime->lookupFunction(0x256AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FAC8u; }
        if (ctx->pc != 0x27FAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEnd__10CCameraPasFv_0x256af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FAC8u; }
        if (ctx->pc != 0x27FAC8u) { return; }
    }
    ctx->pc = 0x27FAC8u;
label_27fac8:
    // 0x27fac8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_27facc:
    if (ctx->pc == 0x27FACCu) {
        ctx->pc = 0x27FAD0u;
        goto label_27fad0;
    }
    ctx->pc = 0x27FAC8u;
    {
        const bool branch_taken_0x27fac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27fac8) {
            ctx->pc = 0x27FAFCu;
            goto label_27fafc;
        }
    }
    ctx->pc = 0x27FAD0u;
label_27fad0:
    // 0x27fad0: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x27fad0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_27fad4:
    // 0x27fad4: 0x27a50050  addiu       $a1, $sp, 0x50
    ctx->pc = 0x27fad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_27fad8:
    // 0x27fad8: 0x24844200  addiu       $a0, $a0, 0x4200
    ctx->pc = 0x27fad8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16896));
label_27fadc:
    // 0x27fadc: 0xc095a90  jal         func_256A40
label_27fae0:
    if (ctx->pc == 0x27FAE0u) {
        ctx->pc = 0x27FAE0u;
            // 0x27fae0: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x27FAE4u;
        goto label_27fae4;
    }
    ctx->pc = 0x27FADCu;
    SET_GPR_U32(ctx, 31, 0x27FAE4u);
    ctx->pc = 0x27FAE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FADCu;
            // 0x27fae0: 0x27a60060  addiu       $a2, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256A40u;
    if (runtime->hasFunction(0x256A40u)) {
        auto targetFn = runtime->lookupFunction(0x256A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FAE4u; }
        if (ctx->pc != 0x27FAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__10CCameraPasFPfPf_0x256a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FAE4u; }
        if (ctx->pc != 0x27FAE4u) { return; }
    }
    ctx->pc = 0x27FAE4u;
label_27fae4:
    // 0x27fae4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27fae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27fae8:
    // 0x27fae8: 0xc04c504  jal         func_131410
label_27faec:
    if (ctx->pc == 0x27FAECu) {
        ctx->pc = 0x27FAECu;
            // 0x27faec: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x27FAF0u;
        goto label_27faf0;
    }
    ctx->pc = 0x27FAE8u;
    SET_GPR_U32(ctx, 31, 0x27FAF0u);
    ctx->pc = 0x27FAECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FAE8u;
            // 0x27faec: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131410u;
    if (runtime->hasFunction(0x131410u)) {
        auto targetFn = runtime->lookupFunction(0x131410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FAF0u; }
        if (ctx->pc != 0x27FAF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__9mgCCameraFPf_0x131410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FAF0u; }
        if (ctx->pc != 0x27FAF0u) { return; }
    }
    ctx->pc = 0x27FAF0u;
label_27faf0:
    // 0x27faf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27faf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27faf4:
    // 0x27faf4: 0xc04c518  jal         func_131460
label_27faf8:
    if (ctx->pc == 0x27FAF8u) {
        ctx->pc = 0x27FAF8u;
            // 0x27faf8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x27FAFCu;
        goto label_27fafc;
    }
    ctx->pc = 0x27FAF4u;
    SET_GPR_U32(ctx, 31, 0x27FAFCu);
    ctx->pc = 0x27FAF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FAF4u;
            // 0x27faf8: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131460u;
    if (runtime->hasFunction(0x131460u)) {
        auto targetFn = runtime->lookupFunction(0x131460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FAFCu; }
        if (ctx->pc != 0x27FAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__9mgCCameraFPf_0x131460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FAFCu; }
        if (ctx->pc != 0x27FAFCu) { return; }
    }
    ctx->pc = 0x27FAFCu;
label_27fafc:
    // 0x27fafc: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x27fafcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_27fb00:
    // 0x27fb00: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x27fb00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_27fb04:
    // 0x27fb04: 0xc052d0c  jal         func_14B430
label_27fb08:
    if (ctx->pc == 0x27FB08u) {
        ctx->pc = 0x27FB08u;
            // 0x27fb08: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x27FB0Cu;
        goto label_27fb0c;
    }
    ctx->pc = 0x27FB04u;
    SET_GPR_U32(ctx, 31, 0x27FB0Cu);
    ctx->pc = 0x27FB08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FB04u;
            // 0x27fb08: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FB0Cu; }
        if (ctx->pc != 0x27FB0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FB0Cu; }
        if (ctx->pc != 0x27FB0Cu) { return; }
    }
    ctx->pc = 0x27FB0Cu;
label_27fb0c:
    // 0x27fb0c: 0x10400117  beqz        $v0, . + 4 + (0x117 << 2)
label_27fb10:
    if (ctx->pc == 0x27FB10u) {
        ctx->pc = 0x27FB14u;
        goto label_27fb14;
    }
    ctx->pc = 0x27FB0Cu;
    {
        const bool branch_taken_0x27fb0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fb0c) {
            ctx->pc = 0x27FF6Cu;
            goto label_27ff6c;
        }
    }
    ctx->pc = 0x27FB14u;
label_27fb14:
    // 0x27fb14: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x27fb14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_27fb18:
    // 0x27fb18: 0xc0959e4  jal         func_256790
label_27fb1c:
    if (ctx->pc == 0x27FB1Cu) {
        ctx->pc = 0x27FB1Cu;
            // 0x27fb1c: 0x24844200  addiu       $a0, $a0, 0x4200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16896));
        ctx->pc = 0x27FB20u;
        goto label_27fb20;
    }
    ctx->pc = 0x27FB18u;
    SET_GPR_U32(ctx, 31, 0x27FB20u);
    ctx->pc = 0x27FB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FB18u;
            // 0x27fb1c: 0x24844200  addiu       $a0, $a0, 0x4200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256790u;
    if (runtime->hasFunction(0x256790u)) {
        auto targetFn = runtime->lookupFunction(0x256790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FB20u; }
        if (ctx->pc != 0x27FB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Setup__10CCameraPasFv_0x256790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FB20u; }
        if (ctx->pc != 0x27FB20u) { return; }
    }
    ctx->pc = 0x27FB20u;
label_27fb20:
    // 0x27fb20: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x27fb20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_27fb24:
    // 0x27fb24: 0xc095a8c  jal         func_256A30
label_27fb28:
    if (ctx->pc == 0x27FB28u) {
        ctx->pc = 0x27FB28u;
            // 0x27fb28: 0x24844200  addiu       $a0, $a0, 0x4200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16896));
        ctx->pc = 0x27FB2Cu;
        goto label_27fb2c;
    }
    ctx->pc = 0x27FB24u;
    SET_GPR_U32(ctx, 31, 0x27FB2Cu);
    ctx->pc = 0x27FB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FB24u;
            // 0x27fb28: 0x24844200  addiu       $a0, $a0, 0x4200 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256A30u;
    if (runtime->hasFunction(0x256A30u)) {
        auto targetFn = runtime->lookupFunction(0x256A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FB2Cu; }
        if (ctx->pc != 0x27FB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__10CCameraPasFv_0x256a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FB2Cu; }
        if (ctx->pc != 0x27FB2Cu) { return; }
    }
    ctx->pc = 0x27FB2Cu;
label_27fb2c:
    // 0x27fb2c: 0x1000010f  b           . + 4 + (0x10F << 2)
label_27fb30:
    if (ctx->pc == 0x27FB30u) {
        ctx->pc = 0x27FB34u;
        goto label_27fb34;
    }
    ctx->pc = 0x27FB2Cu;
    {
        const bool branch_taken_0x27fb2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fb2c) {
            ctx->pc = 0x27FF6Cu;
            goto label_27ff6c;
        }
    }
    ctx->pc = 0x27FB34u;
label_27fb34:
    // 0x27fb34: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x27fb34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_27fb38:
    // 0x27fb38: 0xc052d0c  jal         func_14B430
label_27fb3c:
    if (ctx->pc == 0x27FB3Cu) {
        ctx->pc = 0x27FB3Cu;
            // 0x27fb3c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x27FB40u;
        goto label_27fb40;
    }
    ctx->pc = 0x27FB38u;
    SET_GPR_U32(ctx, 31, 0x27FB40u);
    ctx->pc = 0x27FB3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FB38u;
            // 0x27fb3c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FB40u; }
        if (ctx->pc != 0x27FB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FB40u; }
        if (ctx->pc != 0x27FB40u) { return; }
    }
    ctx->pc = 0x27FB40u;
label_27fb40:
    // 0x27fb40: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_27fb44:
    if (ctx->pc == 0x27FB44u) {
        ctx->pc = 0x27FB48u;
        goto label_27fb48;
    }
    ctx->pc = 0x27FB40u;
    {
        const bool branch_taken_0x27fb40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fb40) {
            ctx->pc = 0x27FB60u;
            goto label_27fb60;
        }
    }
    ctx->pc = 0x27FB48u;
label_27fb48:
    // 0x27fb48: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x27fb48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_27fb4c:
    // 0x27fb4c: 0xc095b04  jal         func_256C10
label_27fb50:
    if (ctx->pc == 0x27FB50u) {
        ctx->pc = 0x27FB50u;
            // 0x27fb50: 0x24844b50  addiu       $a0, $a0, 0x4B50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19280));
        ctx->pc = 0x27FB54u;
        goto label_27fb54;
    }
    ctx->pc = 0x27FB4Cu;
    SET_GPR_U32(ctx, 31, 0x27FB54u);
    ctx->pc = 0x27FB50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FB4Cu;
            // 0x27fb50: 0x24844b50  addiu       $a0, $a0, 0x4B50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256C10u;
    if (runtime->hasFunction(0x256C10u)) {
        auto targetFn = runtime->lookupFunction(0x256C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FB54u; }
        if (ctx->pc != 0x27FB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Setup__9CCharaPasFv_0x256c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FB54u; }
        if (ctx->pc != 0x27FB54u) { return; }
    }
    ctx->pc = 0x27FB54u;
label_27fb54:
    // 0x27fb54: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x27fb54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_27fb58:
    // 0x27fb58: 0xc095b60  jal         func_256D80
label_27fb5c:
    if (ctx->pc == 0x27FB5Cu) {
        ctx->pc = 0x27FB5Cu;
            // 0x27fb5c: 0x24844b50  addiu       $a0, $a0, 0x4B50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19280));
        ctx->pc = 0x27FB60u;
        goto label_27fb60;
    }
    ctx->pc = 0x27FB58u;
    SET_GPR_U32(ctx, 31, 0x27FB60u);
    ctx->pc = 0x27FB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FB58u;
            // 0x27fb5c: 0x24844b50  addiu       $a0, $a0, 0x4B50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256D80u;
    if (runtime->hasFunction(0x256D80u)) {
        auto targetFn = runtime->lookupFunction(0x256D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FB60u; }
        if (ctx->pc != 0x27FB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Run__9CCharaPasFv_0x256d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FB60u; }
        if (ctx->pc != 0x27FB60u) { return; }
    }
    ctx->pc = 0x27FB60u;
label_27fb60:
    // 0x27fb60: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x27fb60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_27fb64:
    // 0x27fb64: 0xc095bcc  jal         func_256F30
label_27fb68:
    if (ctx->pc == 0x27FB68u) {
        ctx->pc = 0x27FB68u;
            // 0x27fb68: 0x24844b50  addiu       $a0, $a0, 0x4B50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19280));
        ctx->pc = 0x27FB6Cu;
        goto label_27fb6c;
    }
    ctx->pc = 0x27FB64u;
    SET_GPR_U32(ctx, 31, 0x27FB6Cu);
    ctx->pc = 0x27FB68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FB64u;
            // 0x27fb68: 0x24844b50  addiu       $a0, $a0, 0x4B50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256F30u;
    if (runtime->hasFunction(0x256F30u)) {
        auto targetFn = runtime->lookupFunction(0x256F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FB6Cu; }
        if (ctx->pc != 0x27FB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEnd__9CCharaPasFv_0x256f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FB6Cu; }
        if (ctx->pc != 0x27FB6Cu) { return; }
    }
    ctx->pc = 0x27FB6Cu;
label_27fb6c:
    // 0x27fb6c: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_27fb70:
    if (ctx->pc == 0x27FB70u) {
        ctx->pc = 0x27FB70u;
            // 0x27fb70: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x27FB74u;
        goto label_27fb74;
    }
    ctx->pc = 0x27FB6Cu;
    {
        const bool branch_taken_0x27fb6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FB70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FB6Cu;
            // 0x27fb70: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fb6c) {
            ctx->pc = 0x27FBF0u;
            goto label_27fbf0;
        }
    }
    ctx->pc = 0x27FB74u;
label_27fb74:
    // 0x27fb74: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x27fb74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_27fb78:
    // 0x27fb78: 0xc0956d4  jal         func_255B50
label_27fb7c:
    if (ctx->pc == 0x27FB7Cu) {
        ctx->pc = 0x27FB7Cu;
            // 0x27fb7c: 0x8c245014  lw          $a0, 0x5014($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20500)));
        ctx->pc = 0x27FB80u;
        goto label_27fb80;
    }
    ctx->pc = 0x27FB78u;
    SET_GPR_U32(ctx, 31, 0x27FB80u);
    ctx->pc = 0x27FB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FB78u;
            // 0x27fb7c: 0x8c245014  lw          $a0, 0x5014($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20500)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255B50u;
    if (runtime->hasFunction(0x255B50u)) {
        auto targetFn = runtime->lookupFunction(0x255B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FB80u; }
        if (ctx->pc != 0x27FB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__Fi_0x255b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FB80u; }
        if (ctx->pc != 0x27FB80u) { return; }
    }
    ctx->pc = 0x27FB80u;
label_27fb80:
    // 0x27fb80: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x27fb80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27fb84:
    // 0x27fb84: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27fb84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27fb88:
    // 0x27fb88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27fb88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27fb8c:
    // 0x27fb8c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x27fb8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_27fb90:
    // 0x27fb90: 0x320f809  jalr        $t9
label_27fb94:
    if (ctx->pc == 0x27FB94u) {
        ctx->pc = 0x27FB94u;
            // 0x27fb94: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x27FB98u;
        goto label_27fb98;
    }
    ctx->pc = 0x27FB90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27FB98u);
        ctx->pc = 0x27FB94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FB90u;
            // 0x27fb94: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27FB98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27FB98u; }
            if (ctx->pc != 0x27FB98u) { return; }
        }
        }
    }
    ctx->pc = 0x27FB98u;
label_27fb98:
    // 0x27fb98: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x27fb98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27fb9c:
    // 0x27fb9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27fb9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27fba0:
    // 0x27fba0: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x27fba0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_27fba4:
    // 0x27fba4: 0x320f809  jalr        $t9
label_27fba8:
    if (ctx->pc == 0x27FBA8u) {
        ctx->pc = 0x27FBA8u;
            // 0x27fba8: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x27FBACu;
        goto label_27fbac;
    }
    ctx->pc = 0x27FBA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27FBACu);
        ctx->pc = 0x27FBA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FBA4u;
            // 0x27fba8: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27FBACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27FBACu; }
            if (ctx->pc != 0x27FBACu) { return; }
        }
        }
    }
    ctx->pc = 0x27FBACu;
label_27fbac:
    // 0x27fbac: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x27fbacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_27fbb0:
    // 0x27fbb0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x27fbb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_27fbb4:
    // 0x27fbb4: 0x24844b50  addiu       $a0, $a0, 0x4B50
    ctx->pc = 0x27fbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19280));
label_27fbb8:
    // 0x27fbb8: 0xc095b68  jal         func_256DA0
label_27fbbc:
    if (ctx->pc == 0x27FBBCu) {
        ctx->pc = 0x27FBBCu;
            // 0x27fbbc: 0x27a600b4  addiu       $a2, $sp, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
        ctx->pc = 0x27FBC0u;
        goto label_27fbc0;
    }
    ctx->pc = 0x27FBB8u;
    SET_GPR_U32(ctx, 31, 0x27FBC0u);
    ctx->pc = 0x27FBBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FBB8u;
            // 0x27fbbc: 0x27a600b4  addiu       $a2, $sp, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256DA0u;
    if (runtime->hasFunction(0x256DA0u)) {
        auto targetFn = runtime->lookupFunction(0x256DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FBC0u; }
        if (ctx->pc != 0x27FBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__9CCharaPasFPfPf_0x256da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FBC0u; }
        if (ctx->pc != 0x27FBC0u) { return; }
    }
    ctx->pc = 0x27FBC0u;
label_27fbc0:
    // 0x27fbc0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x27fbc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27fbc4:
    // 0x27fbc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27fbc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27fbc8:
    // 0x27fbc8: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x27fbc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_27fbcc:
    // 0x27fbcc: 0x320f809  jalr        $t9
label_27fbd0:
    if (ctx->pc == 0x27FBD0u) {
        ctx->pc = 0x27FBD0u;
            // 0x27fbd0: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x27FBD4u;
        goto label_27fbd4;
    }
    ctx->pc = 0x27FBCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27FBD4u);
        ctx->pc = 0x27FBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FBCCu;
            // 0x27fbd0: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27FBD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27FBD4u; }
            if (ctx->pc != 0x27FBD4u) { return; }
        }
        }
    }
    ctx->pc = 0x27FBD4u;
label_27fbd4:
    // 0x27fbd4: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x27fbd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27fbd8:
    // 0x27fbd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27fbd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27fbdc:
    // 0x27fbdc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x27fbdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_27fbe0:
    // 0x27fbe0: 0x320f809  jalr        $t9
label_27fbe4:
    if (ctx->pc == 0x27FBE4u) {
        ctx->pc = 0x27FBE4u;
            // 0x27fbe4: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x27FBE8u;
        goto label_27fbe8;
    }
    ctx->pc = 0x27FBE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27FBE8u);
        ctx->pc = 0x27FBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FBE0u;
            // 0x27fbe4: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27FBE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27FBE8u; }
            if (ctx->pc != 0x27FBE8u) { return; }
        }
        }
    }
    ctx->pc = 0x27FBE8u;
label_27fbe8:
    // 0x27fbe8: 0x100000e0  b           . + 4 + (0xE0 << 2)
label_27fbec:
    if (ctx->pc == 0x27FBECu) {
        ctx->pc = 0x27FBF0u;
        goto label_27fbf0;
    }
    ctx->pc = 0x27FBE8u;
    {
        const bool branch_taken_0x27fbe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fbe8) {
            ctx->pc = 0x27FF6Cu;
            goto label_27ff6c;
        }
    }
    ctx->pc = 0x27FBF0u;
label_27fbf0:
    // 0x27fbf0: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27fbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27fbf4:
    // 0x27fbf4: 0xc052cf0  jal         func_14B3C0
label_27fbf8:
    if (ctx->pc == 0x27FBF8u) {
        ctx->pc = 0x27FBF8u;
            // 0x27fbf8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x27FBFCu;
        goto label_27fbfc;
    }
    ctx->pc = 0x27FBF4u;
    SET_GPR_U32(ctx, 31, 0x27FBFCu);
    ctx->pc = 0x27FBF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FBF4u;
            // 0x27fbf8: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FBFCu; }
        if (ctx->pc != 0x27FBFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FBFCu; }
        if (ctx->pc != 0x27FBFCu) { return; }
    }
    ctx->pc = 0x27FBFCu;
label_27fbfc:
    // 0x27fbfc: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_27fc00:
    if (ctx->pc == 0x27FC00u) {
        ctx->pc = 0x27FC00u;
            // 0x27fc00: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x27FC04u;
        goto label_27fc04;
    }
    ctx->pc = 0x27FBFCu;
    {
        const bool branch_taken_0x27fbfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FC00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FBFCu;
            // 0x27fc00: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fbfc) {
            ctx->pc = 0x27FC28u;
            goto label_27fc28;
        }
    }
    ctx->pc = 0x27FC04u;
label_27fc04:
    // 0x27fc04: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x27fc04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_27fc08:
    // 0x27fc08: 0xc0956d4  jal         func_255B50
label_27fc0c:
    if (ctx->pc == 0x27FC0Cu) {
        ctx->pc = 0x27FC0Cu;
            // 0x27fc0c: 0x8c245014  lw          $a0, 0x5014($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20500)));
        ctx->pc = 0x27FC10u;
        goto label_27fc10;
    }
    ctx->pc = 0x27FC08u;
    SET_GPR_U32(ctx, 31, 0x27FC10u);
    ctx->pc = 0x27FC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FC08u;
            // 0x27fc0c: 0x8c245014  lw          $a0, 0x5014($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20500)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255B50u;
    if (runtime->hasFunction(0x255B50u)) {
        auto targetFn = runtime->lookupFunction(0x255B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FC10u; }
        if (ctx->pc != 0x27FC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__Fi_0x255b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FC10u; }
        if (ctx->pc != 0x27FC10u) { return; }
    }
    ctx->pc = 0x27FC10u;
label_27fc10:
    // 0x27fc10: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27fc10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27fc14:
    // 0x27fc14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27fc14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27fc18:
    // 0x27fc18: 0xc09fb70  jal         func_27EDC0
label_27fc1c:
    if (ctx->pc == 0x27FC1Cu) {
        ctx->pc = 0x27FC1Cu;
            // 0x27fc1c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27FC20u;
        goto label_27fc20;
    }
    ctx->pc = 0x27FC18u;
    SET_GPR_U32(ctx, 31, 0x27FC20u);
    ctx->pc = 0x27FC1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FC18u;
            // 0x27fc1c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27EDC0u;
    if (runtime->hasFunction(0x27EDC0u)) {
        auto targetFn = runtime->lookupFunction(0x27EDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FC20u; }
        if (ctx->pc != 0x27FC20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MoveChara__FP11CCharacter2P9mgCCameraP9mgCMemory_0x27edc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FC20u; }
        if (ctx->pc != 0x27FC20u) { return; }
    }
    ctx->pc = 0x27FC20u;
label_27fc20:
    // 0x27fc20: 0x10000013  b           . + 4 + (0x13 << 2)
label_27fc24:
    if (ctx->pc == 0x27FC24u) {
        ctx->pc = 0x27FC28u;
        goto label_27fc28;
    }
    ctx->pc = 0x27FC20u;
    {
        const bool branch_taken_0x27fc20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fc20) {
            ctx->pc = 0x27FC70u;
            goto label_27fc70;
        }
    }
    ctx->pc = 0x27FC28u;
label_27fc28:
    // 0x27fc28: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27fc28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27fc2c:
    // 0x27fc2c: 0xc052cf0  jal         func_14B3C0
label_27fc30:
    if (ctx->pc == 0x27FC30u) {
        ctx->pc = 0x27FC30u;
            // 0x27fc30: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x27FC34u;
        goto label_27fc34;
    }
    ctx->pc = 0x27FC2Cu;
    SET_GPR_U32(ctx, 31, 0x27FC34u);
    ctx->pc = 0x27FC30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FC2Cu;
            // 0x27fc30: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FC34u; }
        if (ctx->pc != 0x27FC34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FC34u; }
        if (ctx->pc != 0x27FC34u) { return; }
    }
    ctx->pc = 0x27FC34u;
label_27fc34:
    // 0x27fc34: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_27fc38:
    if (ctx->pc == 0x27FC38u) {
        ctx->pc = 0x27FC38u;
            // 0x27fc38: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x27FC3Cu;
        goto label_27fc3c;
    }
    ctx->pc = 0x27FC34u;
    {
        const bool branch_taken_0x27fc34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FC34u;
            // 0x27fc38: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fc34) {
            ctx->pc = 0x27FC50u;
            goto label_27fc50;
        }
    }
    ctx->pc = 0x27FC3Cu;
label_27fc3c:
    // 0x27fc3c: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x27fc3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_27fc40:
    // 0x27fc40: 0xc09fafc  jal         func_27EBF0
label_27fc44:
    if (ctx->pc == 0x27FC44u) {
        ctx->pc = 0x27FC44u;
            // 0x27fc44: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x27FC48u;
        goto label_27fc48;
    }
    ctx->pc = 0x27FC40u;
    SET_GPR_U32(ctx, 31, 0x27FC48u);
    ctx->pc = 0x27FC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FC40u;
            // 0x27fc44: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27EBF0u;
    if (runtime->hasFunction(0x27EBF0u)) {
        auto targetFn = runtime->lookupFunction(0x27EBF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FC48u; }
        if (ctx->pc != 0x27FC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MoveCameraRef__FPfPf_0x27ebf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FC48u; }
        if (ctx->pc != 0x27FC48u) { return; }
    }
    ctx->pc = 0x27FC48u;
label_27fc48:
    // 0x27fc48: 0x10000004  b           . + 4 + (0x4 << 2)
label_27fc4c:
    if (ctx->pc == 0x27FC4Cu) {
        ctx->pc = 0x27FC4Cu;
            // 0x27fc4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27FC50u;
        goto label_27fc50;
    }
    ctx->pc = 0x27FC48u;
    {
        const bool branch_taken_0x27fc48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FC4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FC48u;
            // 0x27fc4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fc48) {
            ctx->pc = 0x27FC5Cu;
            goto label_27fc5c;
        }
    }
    ctx->pc = 0x27FC50u;
label_27fc50:
    // 0x27fc50: 0xc09fa88  jal         func_27EA20
label_27fc54:
    if (ctx->pc == 0x27FC54u) {
        ctx->pc = 0x27FC54u;
            // 0x27fc54: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x27FC58u;
        goto label_27fc58;
    }
    ctx->pc = 0x27FC50u;
    SET_GPR_U32(ctx, 31, 0x27FC58u);
    ctx->pc = 0x27FC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FC50u;
            // 0x27fc54: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27EA20u;
    if (runtime->hasFunction(0x27EA20u)) {
        auto targetFn = runtime->lookupFunction(0x27EA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FC58u; }
        if (ctx->pc != 0x27FC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MoveCamera__FPfPf_0x27ea20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FC58u; }
        if (ctx->pc != 0x27FC58u) { return; }
    }
    ctx->pc = 0x27FC58u;
label_27fc58:
    // 0x27fc58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27fc58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27fc5c:
    // 0x27fc5c: 0xc04c504  jal         func_131410
label_27fc60:
    if (ctx->pc == 0x27FC60u) {
        ctx->pc = 0x27FC60u;
            // 0x27fc60: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x27FC64u;
        goto label_27fc64;
    }
    ctx->pc = 0x27FC5Cu;
    SET_GPR_U32(ctx, 31, 0x27FC64u);
    ctx->pc = 0x27FC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FC5Cu;
            // 0x27fc60: 0x27a50050  addiu       $a1, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131410u;
    if (runtime->hasFunction(0x131410u)) {
        auto targetFn = runtime->lookupFunction(0x131410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FC64u; }
        if (ctx->pc != 0x27FC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__9mgCCameraFPf_0x131410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FC64u; }
        if (ctx->pc != 0x27FC64u) { return; }
    }
    ctx->pc = 0x27FC64u;
label_27fc64:
    // 0x27fc64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27fc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27fc68:
    // 0x27fc68: 0xc04c518  jal         func_131460
label_27fc6c:
    if (ctx->pc == 0x27FC6Cu) {
        ctx->pc = 0x27FC6Cu;
            // 0x27fc6c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x27FC70u;
        goto label_27fc70;
    }
    ctx->pc = 0x27FC68u;
    SET_GPR_U32(ctx, 31, 0x27FC70u);
    ctx->pc = 0x27FC6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FC68u;
            // 0x27fc6c: 0x27a50060  addiu       $a1, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131460u;
    if (runtime->hasFunction(0x131460u)) {
        auto targetFn = runtime->lookupFunction(0x131460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FC70u; }
        if (ctx->pc != 0x27FC70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRef__9mgCCameraFPf_0x131460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FC70u; }
        if (ctx->pc != 0x27FC70u) { return; }
    }
    ctx->pc = 0x27FC70u;
label_27fc70:
    // 0x27fc70: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x27fc70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_27fc74:
    // 0x27fc74: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x27fc74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_27fc78:
    // 0x27fc78: 0xc052d0c  jal         func_14B430
label_27fc7c:
    if (ctx->pc == 0x27FC7Cu) {
        ctx->pc = 0x27FC7Cu;
            // 0x27fc7c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x27FC80u;
        goto label_27fc80;
    }
    ctx->pc = 0x27FC78u;
    SET_GPR_U32(ctx, 31, 0x27FC80u);
    ctx->pc = 0x27FC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FC78u;
            // 0x27fc7c: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FC80u; }
        if (ctx->pc != 0x27FC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FC80u; }
        if (ctx->pc != 0x27FC80u) { return; }
    }
    ctx->pc = 0x27FC80u;
label_27fc80:
    // 0x27fc80: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_27fc84:
    if (ctx->pc == 0x27FC84u) {
        ctx->pc = 0x27FC84u;
            // 0x27fc84: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x27FC88u;
        goto label_27fc88;
    }
    ctx->pc = 0x27FC80u;
    {
        const bool branch_taken_0x27fc80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FC84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FC80u;
            // 0x27fc84: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fc80) {
            ctx->pc = 0x27FCA8u;
            goto label_27fca8;
        }
    }
    ctx->pc = 0x27FC88u;
label_27fc88:
    // 0x27fc88: 0x8f82981c  lw          $v0, -0x67E4($gp)
    ctx->pc = 0x27fc88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940700)));
label_27fc8c:
    // 0x27fc8c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x27fc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_27fc90:
    // 0x27fc90: 0xaf82981c  sw          $v0, -0x67E4($gp)
    ctx->pc = 0x27fc90u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940700), GPR_U32(ctx, 2));
label_27fc94:
    // 0x27fc94: 0x8f82981c  lw          $v0, -0x67E4($gp)
    ctx->pc = 0x27fc94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940700)));
label_27fc98:
    // 0x27fc98: 0x4410010  bgez        $v0, . + 4 + (0x10 << 2)
label_27fc9c:
    if (ctx->pc == 0x27FC9Cu) {
        ctx->pc = 0x27FCA0u;
        goto label_27fca0;
    }
    ctx->pc = 0x27FC98u;
    {
        const bool branch_taken_0x27fc98 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x27fc98) {
            ctx->pc = 0x27FCDCu;
            goto label_27fcdc;
        }
    }
    ctx->pc = 0x27FCA0u;
label_27fca0:
    // 0x27fca0: 0x1000000e  b           . + 4 + (0xE << 2)
label_27fca4:
    if (ctx->pc == 0x27FCA4u) {
        ctx->pc = 0x27FCA4u;
            // 0x27fca4: 0xaf80981c  sw          $zero, -0x67E4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940700), GPR_U32(ctx, 0));
        ctx->pc = 0x27FCA8u;
        goto label_27fca8;
    }
    ctx->pc = 0x27FCA0u;
    {
        const bool branch_taken_0x27fca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FCA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FCA0u;
            // 0x27fca4: 0xaf80981c  sw          $zero, -0x67E4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940700), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fca0) {
            ctx->pc = 0x27FCDCu;
            goto label_27fcdc;
        }
    }
    ctx->pc = 0x27FCA8u;
label_27fca8:
    // 0x27fca8: 0x24054000  addiu       $a1, $zero, 0x4000
    ctx->pc = 0x27fca8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_27fcac:
    // 0x27fcac: 0xc052d0c  jal         func_14B430
label_27fcb0:
    if (ctx->pc == 0x27FCB0u) {
        ctx->pc = 0x27FCB0u;
            // 0x27fcb0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x27FCB4u;
        goto label_27fcb4;
    }
    ctx->pc = 0x27FCACu;
    SET_GPR_U32(ctx, 31, 0x27FCB4u);
    ctx->pc = 0x27FCB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FCACu;
            // 0x27fcb0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FCB4u; }
        if (ctx->pc != 0x27FCB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FCB4u; }
        if (ctx->pc != 0x27FCB4u) { return; }
    }
    ctx->pc = 0x27FCB4u;
label_27fcb4:
    // 0x27fcb4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_27fcb8:
    if (ctx->pc == 0x27FCB8u) {
        ctx->pc = 0x27FCBCu;
        goto label_27fcbc;
    }
    ctx->pc = 0x27FCB4u;
    {
        const bool branch_taken_0x27fcb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fcb4) {
            ctx->pc = 0x27FCDCu;
            goto label_27fcdc;
        }
    }
    ctx->pc = 0x27FCBCu;
label_27fcbc:
    // 0x27fcbc: 0x8f82981c  lw          $v0, -0x67E4($gp)
    ctx->pc = 0x27fcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940700)));
label_27fcc0:
    // 0x27fcc0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27fcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_27fcc4:
    // 0x27fcc4: 0xaf82981c  sw          $v0, -0x67E4($gp)
    ctx->pc = 0x27fcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940700), GPR_U32(ctx, 2));
label_27fcc8:
    // 0x27fcc8: 0x8f82981c  lw          $v0, -0x67E4($gp)
    ctx->pc = 0x27fcc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940700)));
label_27fccc:
    // 0x27fccc: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x27fcccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_27fcd0:
    // 0x27fcd0: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_27fcd4:
    if (ctx->pc == 0x27FCD4u) {
        ctx->pc = 0x27FCD4u;
            // 0x27fcd4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x27FCD8u;
        goto label_27fcd8;
    }
    ctx->pc = 0x27FCD0u;
    {
        const bool branch_taken_0x27fcd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27FCD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FCD0u;
            // 0x27fcd4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fcd0) {
            ctx->pc = 0x27FCDCu;
            goto label_27fcdc;
        }
    }
    ctx->pc = 0x27FCD8u;
label_27fcd8:
    // 0x27fcd8: 0xaf82981c  sw          $v0, -0x67E4($gp)
    ctx->pc = 0x27fcd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940700), GPR_U32(ctx, 2));
label_27fcdc:
    // 0x27fcdc: 0x8f83981c  lw          $v1, -0x67E4($gp)
    ctx->pc = 0x27fcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940700)));
label_27fce0:
    // 0x27fce0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x27fce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_27fce4:
    // 0x27fce4: 0x10620040  beq         $v1, $v0, . + 4 + (0x40 << 2)
label_27fce8:
    if (ctx->pc == 0x27FCE8u) {
        ctx->pc = 0x27FCE8u;
            // 0x27fce8: 0x3c0401f0  lui         $a0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
        ctx->pc = 0x27FCECu;
        goto label_27fcec;
    }
    ctx->pc = 0x27FCE4u;
    {
        const bool branch_taken_0x27fce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27FCE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FCE4u;
            // 0x27fce8: 0x3c0401f0  lui         $a0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fce4) {
            ctx->pc = 0x27FDE8u;
            goto label_27fde8;
        }
    }
    ctx->pc = 0x27FCECu;
label_27fcec:
    // 0x27fcec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27fcecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27fcf0:
    // 0x27fcf0: 0x10620021  beq         $v1, $v0, . + 4 + (0x21 << 2)
label_27fcf4:
    if (ctx->pc == 0x27FCF4u) {
        ctx->pc = 0x27FCF4u;
            // 0x27fcf4: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x27FCF8u;
        goto label_27fcf8;
    }
    ctx->pc = 0x27FCF0u;
    {
        const bool branch_taken_0x27fcf0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27FCF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FCF0u;
            // 0x27fcf4: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fcf0) {
            ctx->pc = 0x27FD78u;
            goto label_27fd78;
        }
    }
    ctx->pc = 0x27FCF8u;
label_27fcf8:
    // 0x27fcf8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_27fcfc:
    if (ctx->pc == 0x27FCFCu) {
        ctx->pc = 0x27FCFCu;
            // 0x27fcfc: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x27FD00u;
        goto label_27fd00;
    }
    ctx->pc = 0x27FCF8u;
    {
        const bool branch_taken_0x27fcf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FCFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FCF8u;
            // 0x27fcfc: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fcf8) {
            ctx->pc = 0x27FD08u;
            goto label_27fd08;
        }
    }
    ctx->pc = 0x27FD00u;
label_27fd00:
    // 0x27fd00: 0x10000051  b           . + 4 + (0x51 << 2)
label_27fd04:
    if (ctx->pc == 0x27FD04u) {
        ctx->pc = 0x27FD08u;
        goto label_27fd08;
    }
    ctx->pc = 0x27FD00u;
    {
        const bool branch_taken_0x27fd00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fd00) {
            ctx->pc = 0x27FE48u;
            goto label_27fe48;
        }
    }
    ctx->pc = 0x27FD08u;
label_27fd08:
    // 0x27fd08: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x27fd08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_27fd0c:
    // 0x27fd0c: 0xc052d0c  jal         func_14B430
label_27fd10:
    if (ctx->pc == 0x27FD10u) {
        ctx->pc = 0x27FD10u;
            // 0x27fd10: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x27FD14u;
        goto label_27fd14;
    }
    ctx->pc = 0x27FD0Cu;
    SET_GPR_U32(ctx, 31, 0x27FD14u);
    ctx->pc = 0x27FD10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FD0Cu;
            // 0x27fd10: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FD14u; }
        if (ctx->pc != 0x27FD14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FD14u; }
        if (ctx->pc != 0x27FD14u) { return; }
    }
    ctx->pc = 0x27FD14u;
label_27fd14:
    // 0x27fd14: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_27fd18:
    if (ctx->pc == 0x27FD18u) {
        ctx->pc = 0x27FD18u;
            // 0x27fd18: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x27FD1Cu;
        goto label_27fd1c;
    }
    ctx->pc = 0x27FD14u;
    {
        const bool branch_taken_0x27fd14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FD18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FD14u;
            // 0x27fd18: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fd14) {
            ctx->pc = 0x27FD3Cu;
            goto label_27fd3c;
        }
    }
    ctx->pc = 0x27FD1Cu;
label_27fd1c:
    // 0x27fd1c: 0x8f829818  lw          $v0, -0x67E8($gp)
    ctx->pc = 0x27fd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940696)));
label_27fd20:
    // 0x27fd20: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x27fd20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_27fd24:
    // 0x27fd24: 0xaf829818  sw          $v0, -0x67E8($gp)
    ctx->pc = 0x27fd24u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940696), GPR_U32(ctx, 2));
label_27fd28:
    // 0x27fd28: 0x8f829818  lw          $v0, -0x67E8($gp)
    ctx->pc = 0x27fd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940696)));
label_27fd2c:
    // 0x27fd2c: 0x4410046  bgez        $v0, . + 4 + (0x46 << 2)
label_27fd30:
    if (ctx->pc == 0x27FD30u) {
        ctx->pc = 0x27FD34u;
        goto label_27fd34;
    }
    ctx->pc = 0x27FD2Cu;
    {
        const bool branch_taken_0x27fd2c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x27fd2c) {
            ctx->pc = 0x27FE48u;
            goto label_27fe48;
        }
    }
    ctx->pc = 0x27FD34u;
label_27fd34:
    // 0x27fd34: 0x10000044  b           . + 4 + (0x44 << 2)
label_27fd38:
    if (ctx->pc == 0x27FD38u) {
        ctx->pc = 0x27FD38u;
            // 0x27fd38: 0xaf809818  sw          $zero, -0x67E8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940696), GPR_U32(ctx, 0));
        ctx->pc = 0x27FD3Cu;
        goto label_27fd3c;
    }
    ctx->pc = 0x27FD34u;
    {
        const bool branch_taken_0x27fd34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FD38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FD34u;
            // 0x27fd38: 0xaf809818  sw          $zero, -0x67E8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940696), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fd34) {
            ctx->pc = 0x27FE48u;
            goto label_27fe48;
        }
    }
    ctx->pc = 0x27FD3Cu;
label_27fd3c:
    // 0x27fd3c: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x27fd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_27fd40:
    // 0x27fd40: 0xc052d0c  jal         func_14B430
label_27fd44:
    if (ctx->pc == 0x27FD44u) {
        ctx->pc = 0x27FD44u;
            // 0x27fd44: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x27FD48u;
        goto label_27fd48;
    }
    ctx->pc = 0x27FD40u;
    SET_GPR_U32(ctx, 31, 0x27FD48u);
    ctx->pc = 0x27FD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FD40u;
            // 0x27fd44: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FD48u; }
        if (ctx->pc != 0x27FD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FD48u; }
        if (ctx->pc != 0x27FD48u) { return; }
    }
    ctx->pc = 0x27FD48u;
label_27fd48:
    // 0x27fd48: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_27fd4c:
    if (ctx->pc == 0x27FD4Cu) {
        ctx->pc = 0x27FD50u;
        goto label_27fd50;
    }
    ctx->pc = 0x27FD48u;
    {
        const bool branch_taken_0x27fd48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fd48) {
            ctx->pc = 0x27FE48u;
            goto label_27fe48;
        }
    }
    ctx->pc = 0x27FD50u;
label_27fd50:
    // 0x27fd50: 0x8f829818  lw          $v0, -0x67E8($gp)
    ctx->pc = 0x27fd50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940696)));
label_27fd54:
    // 0x27fd54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27fd54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_27fd58:
    // 0x27fd58: 0xaf829818  sw          $v0, -0x67E8($gp)
    ctx->pc = 0x27fd58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940696), GPR_U32(ctx, 2));
label_27fd5c:
    // 0x27fd5c: 0x8f829818  lw          $v0, -0x67E8($gp)
    ctx->pc = 0x27fd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940696)));
label_27fd60:
    // 0x27fd60: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x27fd60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_27fd64:
    // 0x27fd64: 0x14400038  bnez        $v0, . + 4 + (0x38 << 2)
label_27fd68:
    if (ctx->pc == 0x27FD68u) {
        ctx->pc = 0x27FD6Cu;
        goto label_27fd6c;
    }
    ctx->pc = 0x27FD64u;
    {
        const bool branch_taken_0x27fd64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27fd64) {
            ctx->pc = 0x27FE48u;
            goto label_27fe48;
        }
    }
    ctx->pc = 0x27FD6Cu;
label_27fd6c:
    // 0x27fd6c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x27fd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_27fd70:
    // 0x27fd70: 0x10000035  b           . + 4 + (0x35 << 2)
label_27fd74:
    if (ctx->pc == 0x27FD74u) {
        ctx->pc = 0x27FD74u;
            // 0x27fd74: 0xaf829818  sw          $v0, -0x67E8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940696), GPR_U32(ctx, 2));
        ctx->pc = 0x27FD78u;
        goto label_27fd78;
    }
    ctx->pc = 0x27FD70u;
    {
        const bool branch_taken_0x27fd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FD74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FD70u;
            // 0x27fd74: 0xaf829818  sw          $v0, -0x67E8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940696), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fd70) {
            ctx->pc = 0x27FE48u;
            goto label_27fe48;
        }
    }
    ctx->pc = 0x27FD78u;
label_27fd78:
    // 0x27fd78: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x27fd78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_27fd7c:
    // 0x27fd7c: 0xc052d0c  jal         func_14B430
label_27fd80:
    if (ctx->pc == 0x27FD80u) {
        ctx->pc = 0x27FD80u;
            // 0x27fd80: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x27FD84u;
        goto label_27fd84;
    }
    ctx->pc = 0x27FD7Cu;
    SET_GPR_U32(ctx, 31, 0x27FD84u);
    ctx->pc = 0x27FD80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FD7Cu;
            // 0x27fd80: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FD84u; }
        if (ctx->pc != 0x27FD84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FD84u; }
        if (ctx->pc != 0x27FD84u) { return; }
    }
    ctx->pc = 0x27FD84u;
label_27fd84:
    // 0x27fd84: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_27fd88:
    if (ctx->pc == 0x27FD88u) {
        ctx->pc = 0x27FD88u;
            // 0x27fd88: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x27FD8Cu;
        goto label_27fd8c;
    }
    ctx->pc = 0x27FD84u;
    {
        const bool branch_taken_0x27fd84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FD88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FD84u;
            // 0x27fd88: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fd84) {
            ctx->pc = 0x27FDACu;
            goto label_27fdac;
        }
    }
    ctx->pc = 0x27FD8Cu;
label_27fd8c:
    // 0x27fd8c: 0x8f829820  lw          $v0, -0x67E0($gp)
    ctx->pc = 0x27fd8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940704)));
label_27fd90:
    // 0x27fd90: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x27fd90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_27fd94:
    // 0x27fd94: 0xaf829820  sw          $v0, -0x67E0($gp)
    ctx->pc = 0x27fd94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940704), GPR_U32(ctx, 2));
label_27fd98:
    // 0x27fd98: 0x8f829820  lw          $v0, -0x67E0($gp)
    ctx->pc = 0x27fd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940704)));
label_27fd9c:
    // 0x27fd9c: 0x441002a  bgez        $v0, . + 4 + (0x2A << 2)
label_27fda0:
    if (ctx->pc == 0x27FDA0u) {
        ctx->pc = 0x27FDA4u;
        goto label_27fda4;
    }
    ctx->pc = 0x27FD9Cu;
    {
        const bool branch_taken_0x27fd9c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x27fd9c) {
            ctx->pc = 0x27FE48u;
            goto label_27fe48;
        }
    }
    ctx->pc = 0x27FDA4u;
label_27fda4:
    // 0x27fda4: 0x10000028  b           . + 4 + (0x28 << 2)
label_27fda8:
    if (ctx->pc == 0x27FDA8u) {
        ctx->pc = 0x27FDA8u;
            // 0x27fda8: 0xaf809820  sw          $zero, -0x67E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940704), GPR_U32(ctx, 0));
        ctx->pc = 0x27FDACu;
        goto label_27fdac;
    }
    ctx->pc = 0x27FDA4u;
    {
        const bool branch_taken_0x27fda4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FDA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FDA4u;
            // 0x27fda8: 0xaf809820  sw          $zero, -0x67E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940704), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fda4) {
            ctx->pc = 0x27FE48u;
            goto label_27fe48;
        }
    }
    ctx->pc = 0x27FDACu;
label_27fdac:
    // 0x27fdac: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x27fdacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_27fdb0:
    // 0x27fdb0: 0xc052d0c  jal         func_14B430
label_27fdb4:
    if (ctx->pc == 0x27FDB4u) {
        ctx->pc = 0x27FDB4u;
            // 0x27fdb4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x27FDB8u;
        goto label_27fdb8;
    }
    ctx->pc = 0x27FDB0u;
    SET_GPR_U32(ctx, 31, 0x27FDB8u);
    ctx->pc = 0x27FDB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FDB0u;
            // 0x27fdb4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FDB8u; }
        if (ctx->pc != 0x27FDB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FDB8u; }
        if (ctx->pc != 0x27FDB8u) { return; }
    }
    ctx->pc = 0x27FDB8u;
label_27fdb8:
    // 0x27fdb8: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_27fdbc:
    if (ctx->pc == 0x27FDBCu) {
        ctx->pc = 0x27FDC0u;
        goto label_27fdc0;
    }
    ctx->pc = 0x27FDB8u;
    {
        const bool branch_taken_0x27fdb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fdb8) {
            ctx->pc = 0x27FE48u;
            goto label_27fe48;
        }
    }
    ctx->pc = 0x27FDC0u;
label_27fdc0:
    // 0x27fdc0: 0x8f829820  lw          $v0, -0x67E0($gp)
    ctx->pc = 0x27fdc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940704)));
label_27fdc4:
    // 0x27fdc4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27fdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_27fdc8:
    // 0x27fdc8: 0xaf829820  sw          $v0, -0x67E0($gp)
    ctx->pc = 0x27fdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940704), GPR_U32(ctx, 2));
label_27fdcc:
    // 0x27fdcc: 0x8f829820  lw          $v0, -0x67E0($gp)
    ctx->pc = 0x27fdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940704)));
label_27fdd0:
    // 0x27fdd0: 0x28420010  slti        $v0, $v0, 0x10
    ctx->pc = 0x27fdd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_27fdd4:
    // 0x27fdd4: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_27fdd8:
    if (ctx->pc == 0x27FDD8u) {
        ctx->pc = 0x27FDDCu;
        goto label_27fddc;
    }
    ctx->pc = 0x27FDD4u;
    {
        const bool branch_taken_0x27fdd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27fdd4) {
            ctx->pc = 0x27FE48u;
            goto label_27fe48;
        }
    }
    ctx->pc = 0x27FDDCu;
label_27fddc:
    // 0x27fddc: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x27fddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_27fde0:
    // 0x27fde0: 0x10000019  b           . + 4 + (0x19 << 2)
label_27fde4:
    if (ctx->pc == 0x27FDE4u) {
        ctx->pc = 0x27FDE4u;
            // 0x27fde4: 0xaf829820  sw          $v0, -0x67E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940704), GPR_U32(ctx, 2));
        ctx->pc = 0x27FDE8u;
        goto label_27fde8;
    }
    ctx->pc = 0x27FDE0u;
    {
        const bool branch_taken_0x27fde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FDE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FDE0u;
            // 0x27fde4: 0xaf829820  sw          $v0, -0x67E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940704), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fde0) {
            ctx->pc = 0x27FE48u;
            goto label_27fe48;
        }
    }
    ctx->pc = 0x27FDE8u;
label_27fde8:
    // 0x27fde8: 0xc095c58  jal         func_257160
label_27fdec:
    if (ctx->pc == 0x27FDECu) {
        ctx->pc = 0x27FDECu;
            // 0x27fdec: 0x24844b50  addiu       $a0, $a0, 0x4B50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19280));
        ctx->pc = 0x27FDF0u;
        goto label_27fdf0;
    }
    ctx->pc = 0x27FDE8u;
    SET_GPR_U32(ctx, 31, 0x27FDF0u);
    ctx->pc = 0x27FDECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FDE8u;
            // 0x27fdec: 0x24844b50  addiu       $a0, $a0, 0x4B50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x257160u;
    if (runtime->hasFunction(0x257160u)) {
        auto targetFn = runtime->lookupFunction(0x257160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FDF0u; }
        if (ctx->pc != 0x27FDF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFrame__9CCharaPasFv_0x257160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FDF0u; }
        if (ctx->pc != 0x27FDF0u) { return; }
    }
    ctx->pc = 0x27FDF0u;
label_27fdf0:
    // 0x27fdf0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x27fdf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_27fdf4:
    // 0x27fdf4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27fdf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27fdf8:
    // 0x27fdf8: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x27fdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_27fdfc:
    // 0x27fdfc: 0xc052cf0  jal         func_14B3C0
label_27fe00:
    if (ctx->pc == 0x27FE00u) {
        ctx->pc = 0x27FE00u;
            // 0x27fe00: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->pc = 0x27FE04u;
        goto label_27fe04;
    }
    ctx->pc = 0x27FDFCu;
    SET_GPR_U32(ctx, 31, 0x27FE04u);
    ctx->pc = 0x27FE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FDFCu;
            // 0x27fe00: 0x34058000  ori         $a1, $zero, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FE04u; }
        if (ctx->pc != 0x27FE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FE04u; }
        if (ctx->pc != 0x27FE04u) { return; }
    }
    ctx->pc = 0x27FE04u;
label_27fe04:
    // 0x27fe04: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_27fe08:
    if (ctx->pc == 0x27FE08u) {
        ctx->pc = 0x27FE08u;
            // 0x27fe08: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x27FE0Cu;
        goto label_27fe0c;
    }
    ctx->pc = 0x27FE04u;
    {
        const bool branch_taken_0x27fe04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FE04u;
            // 0x27fe08: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fe04) {
            ctx->pc = 0x27FE20u;
            goto label_27fe20;
        }
    }
    ctx->pc = 0x27FE0Cu;
label_27fe0c:
    // 0x27fe0c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x27fe0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_27fe10:
    // 0x27fe10: 0x6010009  bgez        $s0, . + 4 + (0x9 << 2)
label_27fe14:
    if (ctx->pc == 0x27FE14u) {
        ctx->pc = 0x27FE18u;
        goto label_27fe18;
    }
    ctx->pc = 0x27FE10u;
    {
        const bool branch_taken_0x27fe10 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x27fe10) {
            ctx->pc = 0x27FE38u;
            goto label_27fe38;
        }
    }
    ctx->pc = 0x27FE18u;
label_27fe18:
    // 0x27fe18: 0x10000007  b           . + 4 + (0x7 << 2)
label_27fe1c:
    if (ctx->pc == 0x27FE1Cu) {
        ctx->pc = 0x27FE1Cu;
            // 0x27fe1c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27FE20u;
        goto label_27fe20;
    }
    ctx->pc = 0x27FE18u;
    {
        const bool branch_taken_0x27fe18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FE1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FE18u;
            // 0x27fe1c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fe18) {
            ctx->pc = 0x27FE38u;
            goto label_27fe38;
        }
    }
    ctx->pc = 0x27FE20u;
label_27fe20:
    // 0x27fe20: 0x24052000  addiu       $a1, $zero, 0x2000
    ctx->pc = 0x27fe20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_27fe24:
    // 0x27fe24: 0xc052cf0  jal         func_14B3C0
label_27fe28:
    if (ctx->pc == 0x27FE28u) {
        ctx->pc = 0x27FE28u;
            // 0x27fe28: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x27FE2Cu;
        goto label_27fe2c;
    }
    ctx->pc = 0x27FE24u;
    SET_GPR_U32(ctx, 31, 0x27FE2Cu);
    ctx->pc = 0x27FE28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FE24u;
            // 0x27fe28: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B3C0u;
    if (runtime->hasFunction(0x14B3C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FE2Cu; }
        if (ctx->pc != 0x27FE2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        On__8CGamePadFi_0x14b3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FE2Cu; }
        if (ctx->pc != 0x27FE2Cu) { return; }
    }
    ctx->pc = 0x27FE2Cu;
label_27fe2c:
    // 0x27fe2c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_27fe30:
    if (ctx->pc == 0x27FE30u) {
        ctx->pc = 0x27FE34u;
        goto label_27fe34;
    }
    ctx->pc = 0x27FE2Cu;
    {
        const bool branch_taken_0x27fe2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fe2c) {
            ctx->pc = 0x27FE38u;
            goto label_27fe38;
        }
    }
    ctx->pc = 0x27FE34u;
label_27fe34:
    // 0x27fe34: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27fe34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_27fe38:
    // 0x27fe38: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x27fe38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_27fe3c:
    // 0x27fe3c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27fe3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27fe40:
    // 0x27fe40: 0xc095c54  jal         func_257150
label_27fe44:
    if (ctx->pc == 0x27FE44u) {
        ctx->pc = 0x27FE44u;
            // 0x27fe44: 0x24844b50  addiu       $a0, $a0, 0x4B50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19280));
        ctx->pc = 0x27FE48u;
        goto label_27fe48;
    }
    ctx->pc = 0x27FE40u;
    SET_GPR_U32(ctx, 31, 0x27FE48u);
    ctx->pc = 0x27FE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FE40u;
            // 0x27fe44: 0x24844b50  addiu       $a0, $a0, 0x4B50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x257150u;
    if (runtime->hasFunction(0x257150u)) {
        auto targetFn = runtime->lookupFunction(0x257150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FE48u; }
        if (ctx->pc != 0x27FE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFrame__9CCharaPasFi_0x257150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FE48u; }
        if (ctx->pc != 0x27FE48u) { return; }
    }
    ctx->pc = 0x27FE48u;
label_27fe48:
    // 0x27fe48: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x27fe48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_27fe4c:
    // 0x27fe4c: 0x24050020  addiu       $a1, $zero, 0x20
    ctx->pc = 0x27fe4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_27fe50:
    // 0x27fe50: 0xc052d0c  jal         func_14B430
label_27fe54:
    if (ctx->pc == 0x27FE54u) {
        ctx->pc = 0x27FE54u;
            // 0x27fe54: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x27FE58u;
        goto label_27fe58;
    }
    ctx->pc = 0x27FE50u;
    SET_GPR_U32(ctx, 31, 0x27FE58u);
    ctx->pc = 0x27FE54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FE50u;
            // 0x27fe54: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FE58u; }
        if (ctx->pc != 0x27FE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FE58u; }
        if (ctx->pc != 0x27FE58u) { return; }
    }
    ctx->pc = 0x27FE58u;
label_27fe58:
    // 0x27fe58: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_27fe5c:
    if (ctx->pc == 0x27FE5Cu) {
        ctx->pc = 0x27FE60u;
        goto label_27fe60;
    }
    ctx->pc = 0x27FE58u;
    {
        const bool branch_taken_0x27fe58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fe58) {
            ctx->pc = 0x27FF0Cu;
            goto label_27ff0c;
        }
    }
    ctx->pc = 0x27FE60u;
label_27fe60:
    // 0x27fe60: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x27fe60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_27fe64:
    // 0x27fe64: 0xc0956d4  jal         func_255B50
label_27fe68:
    if (ctx->pc == 0x27FE68u) {
        ctx->pc = 0x27FE68u;
            // 0x27fe68: 0x8c245014  lw          $a0, 0x5014($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20500)));
        ctx->pc = 0x27FE6Cu;
        goto label_27fe6c;
    }
    ctx->pc = 0x27FE64u;
    SET_GPR_U32(ctx, 31, 0x27FE6Cu);
    ctx->pc = 0x27FE68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FE64u;
            // 0x27fe68: 0x8c245014  lw          $a0, 0x5014($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20500)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255B50u;
    if (runtime->hasFunction(0x255B50u)) {
        auto targetFn = runtime->lookupFunction(0x255B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FE6Cu; }
        if (ctx->pc != 0x27FE6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__Fi_0x255b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FE6Cu; }
        if (ctx->pc != 0x27FE6Cu) { return; }
    }
    ctx->pc = 0x27FE6Cu;
label_27fe6c:
    // 0x27fe6c: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x27fe6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27fe70:
    // 0x27fe70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27fe70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27fe74:
    // 0x27fe74: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x27fe74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_27fe78:
    // 0x27fe78: 0x320f809  jalr        $t9
label_27fe7c:
    if (ctx->pc == 0x27FE7Cu) {
        ctx->pc = 0x27FE7Cu;
            // 0x27fe7c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x27FE80u;
        goto label_27fe80;
    }
    ctx->pc = 0x27FE78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27FE80u);
        ctx->pc = 0x27FE7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FE78u;
            // 0x27fe7c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27FE80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27FE80u; }
            if (ctx->pc != 0x27FE80u) { return; }
        }
        }
    }
    ctx->pc = 0x27FE80u;
label_27fe80:
    // 0x27fe80: 0x8f839818  lw          $v1, -0x67E8($gp)
    ctx->pc = 0x27fe80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940696)));
label_27fe84:
    // 0x27fe84: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x27fe84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_27fe88:
    // 0x27fe88: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
label_27fe8c:
    if (ctx->pc == 0x27FE8Cu) {
        ctx->pc = 0x27FE8Cu;
            // 0x27fe8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x27FE90u;
        goto label_27fe90;
    }
    ctx->pc = 0x27FE88u;
    {
        const bool branch_taken_0x27fe88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27FE8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FE88u;
            // 0x27fe8c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fe88) {
            ctx->pc = 0x27FEFCu;
            goto label_27fefc;
        }
    }
    ctx->pc = 0x27FE90u;
label_27fe90:
    // 0x27fe90: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_27fe94:
    if (ctx->pc == 0x27FE94u) {
        ctx->pc = 0x27FE94u;
            // 0x27fe94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x27FE98u;
        goto label_27fe98;
    }
    ctx->pc = 0x27FE90u;
    {
        const bool branch_taken_0x27fe90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x27FE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FE90u;
            // 0x27fe94: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fe90) {
            ctx->pc = 0x27FEE0u;
            goto label_27fee0;
        }
    }
    ctx->pc = 0x27FE98u;
label_27fe98:
    // 0x27fe98: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_27fe9c:
    if (ctx->pc == 0x27FE9Cu) {
        ctx->pc = 0x27FEA0u;
        goto label_27fea0;
    }
    ctx->pc = 0x27FE98u;
    {
        const bool branch_taken_0x27fe98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x27fe98) {
            ctx->pc = 0x27FEC4u;
            goto label_27fec4;
        }
    }
    ctx->pc = 0x27FEA0u;
label_27fea0:
    // 0x27fea0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_27fea4:
    if (ctx->pc == 0x27FEA4u) {
        ctx->pc = 0x27FEA4u;
            // 0x27fea4: 0x3c0401f0  lui         $a0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
        ctx->pc = 0x27FEA8u;
        goto label_27fea8;
    }
    ctx->pc = 0x27FEA0u;
    {
        const bool branch_taken_0x27fea0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FEA0u;
            // 0x27fea4: 0x3c0401f0  lui         $a0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fea0) {
            ctx->pc = 0x27FEB0u;
            goto label_27feb0;
        }
    }
    ctx->pc = 0x27FEA8u;
label_27fea8:
    // 0x27fea8: 0x10000018  b           . + 4 + (0x18 << 2)
label_27feac:
    if (ctx->pc == 0x27FEACu) {
        ctx->pc = 0x27FEB0u;
        goto label_27feb0;
    }
    ctx->pc = 0x27FEA8u;
    {
        const bool branch_taken_0x27fea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fea8) {
            ctx->pc = 0x27FF0Cu;
            goto label_27ff0c;
        }
    }
    ctx->pc = 0x27FEB0u;
label_27feb0:
    // 0x27feb0: 0x27a500c0  addiu       $a1, $sp, 0xC0
    ctx->pc = 0x27feb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_27feb4:
    // 0x27feb4: 0xc095af0  jal         func_256BC0
label_27feb8:
    if (ctx->pc == 0x27FEB8u) {
        ctx->pc = 0x27FEB8u;
            // 0x27feb8: 0x24844b50  addiu       $a0, $a0, 0x4B50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19280));
        ctx->pc = 0x27FEBCu;
        goto label_27febc;
    }
    ctx->pc = 0x27FEB4u;
    SET_GPR_U32(ctx, 31, 0x27FEBCu);
    ctx->pc = 0x27FEB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FEB4u;
            // 0x27feb8: 0x24844b50  addiu       $a0, $a0, 0x4B50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256BC0u;
    if (runtime->hasFunction(0x256BC0u)) {
        auto targetFn = runtime->lookupFunction(0x256BC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FEBCu; }
        if (ctx->pc != 0x27FEBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddCharaPas__9CCharaPasFPf_0x256bc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FEBCu; }
        if (ctx->pc != 0x27FEBCu) { return; }
    }
    ctx->pc = 0x27FEBCu;
label_27febc:
    // 0x27febc: 0x10000013  b           . + 4 + (0x13 << 2)
label_27fec0:
    if (ctx->pc == 0x27FEC0u) {
        ctx->pc = 0x27FEC4u;
        goto label_27fec4;
    }
    ctx->pc = 0x27FEBCu;
    {
        const bool branch_taken_0x27febc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27febc) {
            ctx->pc = 0x27FF0Cu;
            goto label_27ff0c;
        }
    }
    ctx->pc = 0x27FEC4u;
label_27fec4:
    // 0x27fec4: 0x8f859820  lw          $a1, -0x67E0($gp)
    ctx->pc = 0x27fec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940704)));
label_27fec8:
    // 0x27fec8: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x27fec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_27fecc:
    // 0x27fecc: 0x24844b50  addiu       $a0, $a0, 0x4B50
    ctx->pc = 0x27feccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19280));
label_27fed0:
    // 0x27fed0: 0xc095bd4  jal         func_256F50
label_27fed4:
    if (ctx->pc == 0x27FED4u) {
        ctx->pc = 0x27FED4u;
            // 0x27fed4: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x27FED8u;
        goto label_27fed8;
    }
    ctx->pc = 0x27FED0u;
    SET_GPR_U32(ctx, 31, 0x27FED8u);
    ctx->pc = 0x27FED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FED0u;
            // 0x27fed4: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x256F50u;
    if (runtime->hasFunction(0x256F50u)) {
        auto targetFn = runtime->lookupFunction(0x256F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FED8u; }
        if (ctx->pc != 0x27FED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InsCharaPas__9CCharaPasFiPf_0x256f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FED8u; }
        if (ctx->pc != 0x27FED8u) { return; }
    }
    ctx->pc = 0x27FED8u;
label_27fed8:
    // 0x27fed8: 0x1000000c  b           . + 4 + (0xC << 2)
label_27fedc:
    if (ctx->pc == 0x27FEDCu) {
        ctx->pc = 0x27FEE0u;
        goto label_27fee0;
    }
    ctx->pc = 0x27FED8u;
    {
        const bool branch_taken_0x27fed8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fed8) {
            ctx->pc = 0x27FF0Cu;
            goto label_27ff0c;
        }
    }
    ctx->pc = 0x27FEE0u;
label_27fee0:
    // 0x27fee0: 0x8f859820  lw          $a1, -0x67E0($gp)
    ctx->pc = 0x27fee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940704)));
label_27fee4:
    // 0x27fee4: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x27fee4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_27fee8:
    // 0x27fee8: 0x24844b50  addiu       $a0, $a0, 0x4B50
    ctx->pc = 0x27fee8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19280));
label_27feec:
    // 0x27feec: 0xc095c08  jal         func_257020
label_27fef0:
    if (ctx->pc == 0x27FEF0u) {
        ctx->pc = 0x27FEF0u;
            // 0x27fef0: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x27FEF4u;
        goto label_27fef4;
    }
    ctx->pc = 0x27FEECu;
    SET_GPR_U32(ctx, 31, 0x27FEF4u);
    ctx->pc = 0x27FEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FEECu;
            // 0x27fef0: 0x27a600c0  addiu       $a2, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x257020u;
    if (runtime->hasFunction(0x257020u)) {
        auto targetFn = runtime->lookupFunction(0x257020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FEF4u; }
        if (ctx->pc != 0x27FEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCharaPas__9CCharaPasFiPf_0x257020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FEF4u; }
        if (ctx->pc != 0x27FEF4u) { return; }
    }
    ctx->pc = 0x27FEF4u;
label_27fef4:
    // 0x27fef4: 0x10000005  b           . + 4 + (0x5 << 2)
label_27fef8:
    if (ctx->pc == 0x27FEF8u) {
        ctx->pc = 0x27FEFCu;
        goto label_27fefc;
    }
    ctx->pc = 0x27FEF4u;
    {
        const bool branch_taken_0x27fef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27fef4) {
            ctx->pc = 0x27FF0Cu;
            goto label_27ff0c;
        }
    }
    ctx->pc = 0x27FEFCu;
label_27fefc:
    // 0x27fefc: 0x8f859820  lw          $a1, -0x67E0($gp)
    ctx->pc = 0x27fefcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940704)));
label_27ff00:
    // 0x27ff00: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x27ff00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_27ff04:
    // 0x27ff04: 0xc095c28  jal         func_2570A0
label_27ff08:
    if (ctx->pc == 0x27FF08u) {
        ctx->pc = 0x27FF08u;
            // 0x27ff08: 0x24844b50  addiu       $a0, $a0, 0x4B50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19280));
        ctx->pc = 0x27FF0Cu;
        goto label_27ff0c;
    }
    ctx->pc = 0x27FF04u;
    SET_GPR_U32(ctx, 31, 0x27FF0Cu);
    ctx->pc = 0x27FF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FF04u;
            // 0x27ff08: 0x24844b50  addiu       $a0, $a0, 0x4B50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2570A0u;
    if (runtime->hasFunction(0x2570A0u)) {
        auto targetFn = runtime->lookupFunction(0x2570A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FF0Cu; }
        if (ctx->pc != 0x27FF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DelCharaPas__9CCharaPasFi_0x2570a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FF0Cu; }
        if (ctx->pc != 0x27FF0Cu) { return; }
    }
    ctx->pc = 0x27FF0Cu;
label_27ff0c:
    // 0x27ff0c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x27ff0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_27ff10:
    // 0x27ff10: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x27ff10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_27ff14:
    // 0x27ff14: 0xc052d0c  jal         func_14B430
label_27ff18:
    if (ctx->pc == 0x27FF18u) {
        ctx->pc = 0x27FF18u;
            // 0x27ff18: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x27FF1Cu;
        goto label_27ff1c;
    }
    ctx->pc = 0x27FF14u;
    SET_GPR_U32(ctx, 31, 0x27FF1Cu);
    ctx->pc = 0x27FF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FF14u;
            // 0x27ff18: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FF1Cu; }
        if (ctx->pc != 0x27FF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FF1Cu; }
        if (ctx->pc != 0x27FF1Cu) { return; }
    }
    ctx->pc = 0x27FF1Cu;
label_27ff1c:
    // 0x27ff1c: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_27ff20:
    if (ctx->pc == 0x27FF20u) {
        ctx->pc = 0x27FF24u;
        goto label_27ff24;
    }
    ctx->pc = 0x27FF1Cu;
    {
        const bool branch_taken_0x27ff1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ff1c) {
            ctx->pc = 0x27FF6Cu;
            goto label_27ff6c;
        }
    }
    ctx->pc = 0x27FF24u;
label_27ff24:
    // 0x27ff24: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x27ff24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_27ff28:
    // 0x27ff28: 0x8f859820  lw          $a1, -0x67E0($gp)
    ctx->pc = 0x27ff28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940704)));
label_27ff2c:
    // 0x27ff2c: 0x8c224c54  lw          $v0, 0x4C54($at)
    ctx->pc = 0x27ff2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 19540)));
label_27ff30:
    // 0x27ff30: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x27ff30u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_27ff34:
    // 0x27ff34: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_27ff38:
    if (ctx->pc == 0x27FF38u) {
        ctx->pc = 0x27FF3Cu;
        goto label_27ff3c;
    }
    ctx->pc = 0x27FF34u;
    {
        const bool branch_taken_0x27ff34 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ff34) {
            ctx->pc = 0x27FF6Cu;
            goto label_27ff6c;
        }
    }
    ctx->pc = 0x27FF3Cu;
label_27ff3c:
    // 0x27ff3c: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x27ff3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_27ff40:
    // 0x27ff40: 0x27a600d0  addiu       $a2, $sp, 0xD0
    ctx->pc = 0x27ff40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_27ff44:
    // 0x27ff44: 0xc095c18  jal         func_257060
label_27ff48:
    if (ctx->pc == 0x27FF48u) {
        ctx->pc = 0x27FF48u;
            // 0x27ff48: 0x24844b50  addiu       $a0, $a0, 0x4B50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19280));
        ctx->pc = 0x27FF4Cu;
        goto label_27ff4c;
    }
    ctx->pc = 0x27FF44u;
    SET_GPR_U32(ctx, 31, 0x27FF4Cu);
    ctx->pc = 0x27FF48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FF44u;
            // 0x27ff48: 0x24844b50  addiu       $a0, $a0, 0x4B50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x257060u;
    if (runtime->hasFunction(0x257060u)) {
        auto targetFn = runtime->lookupFunction(0x257060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FF4Cu; }
        if (ctx->pc != 0x27FF4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaPas__9CCharaPasFiPf_0x257060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FF4Cu; }
        if (ctx->pc != 0x27FF4Cu) { return; }
    }
    ctx->pc = 0x27FF4Cu;
label_27ff4c:
    // 0x27ff4c: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x27ff4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_27ff50:
    // 0x27ff50: 0xc0956d4  jal         func_255B50
label_27ff54:
    if (ctx->pc == 0x27FF54u) {
        ctx->pc = 0x27FF54u;
            // 0x27ff54: 0x8c245014  lw          $a0, 0x5014($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20500)));
        ctx->pc = 0x27FF58u;
        goto label_27ff58;
    }
    ctx->pc = 0x27FF50u;
    SET_GPR_U32(ctx, 31, 0x27FF58u);
    ctx->pc = 0x27FF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FF50u;
            // 0x27ff54: 0x8c245014  lw          $a0, 0x5014($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20500)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255B50u;
    if (runtime->hasFunction(0x255B50u)) {
        auto targetFn = runtime->lookupFunction(0x255B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FF58u; }
        if (ctx->pc != 0x27FF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__Fi_0x255b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FF58u; }
        if (ctx->pc != 0x27FF58u) { return; }
    }
    ctx->pc = 0x27FF58u;
label_27ff58:
    // 0x27ff58: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x27ff58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_27ff5c:
    // 0x27ff5c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x27ff5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27ff60:
    // 0x27ff60: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x27ff60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_27ff64:
    // 0x27ff64: 0x320f809  jalr        $t9
label_27ff68:
    if (ctx->pc == 0x27FF68u) {
        ctx->pc = 0x27FF68u;
            // 0x27ff68: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x27FF6Cu;
        goto label_27ff6c;
    }
    ctx->pc = 0x27FF64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27FF6Cu);
        ctx->pc = 0x27FF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FF64u;
            // 0x27ff68: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27FF6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27FF6Cu; }
            if (ctx->pc != 0x27FF6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x27FF6Cu;
label_27ff6c:
    // 0x27ff6c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x27ff6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_27ff70:
    // 0x27ff70: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x27ff70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_27ff74:
    // 0x27ff74: 0xc052d0c  jal         func_14B430
label_27ff78:
    if (ctx->pc == 0x27FF78u) {
        ctx->pc = 0x27FF78u;
            // 0x27ff78: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x27FF7Cu;
        goto label_27ff7c;
    }
    ctx->pc = 0x27FF74u;
    SET_GPR_U32(ctx, 31, 0x27FF7Cu);
    ctx->pc = 0x27FF78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FF74u;
            // 0x27ff78: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FF7Cu; }
        if (ctx->pc != 0x27FF7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FF7Cu; }
        if (ctx->pc != 0x27FF7Cu) { return; }
    }
    ctx->pc = 0x27FF7Cu;
label_27ff7c:
    // 0x27ff7c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_27ff80:
    if (ctx->pc == 0x27FF80u) {
        ctx->pc = 0x27FF84u;
        goto label_27ff84;
    }
    ctx->pc = 0x27FF7Cu;
    {
        const bool branch_taken_0x27ff7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27ff7c) {
            ctx->pc = 0x27FFB4u;
            goto label_27ffb4;
        }
    }
    ctx->pc = 0x27FF84u;
label_27ff84:
    // 0x27ff84: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x27ff84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_27ff88:
    // 0x27ff88: 0x8c225004  lw          $v0, 0x5004($at)
    ctx->pc = 0x27ff88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20484)));
label_27ff8c:
    // 0x27ff8c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x27ff8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_27ff90:
    // 0x27ff90: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x27ff90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_27ff94:
    // 0x27ff94: 0xac225004  sw          $v0, 0x5004($at)
    ctx->pc = 0x27ff94u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20484), GPR_U32(ctx, 2));
label_27ff98:
    // 0x27ff98: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x27ff98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_27ff9c:
    // 0x27ff9c: 0x8c225004  lw          $v0, 0x5004($at)
    ctx->pc = 0x27ff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20484)));
label_27ffa0:
    // 0x27ffa0: 0x28410004  slti        $at, $v0, 0x4
    ctx->pc = 0x27ffa0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_27ffa4:
    // 0x27ffa4: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_27ffa8:
    if (ctx->pc == 0x27FFA8u) {
        ctx->pc = 0x27FFACu;
        goto label_27ffac;
    }
    ctx->pc = 0x27FFA4u;
    {
        const bool branch_taken_0x27ffa4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ffa4) {
            ctx->pc = 0x27FFB4u;
            goto label_27ffb4;
        }
    }
    ctx->pc = 0x27FFACu;
label_27ffac:
    // 0x27ffac: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x27ffacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_27ffb0:
    // 0x27ffb0: 0xac205004  sw          $zero, 0x5004($at)
    ctx->pc = 0x27ffb0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20484), GPR_U32(ctx, 0));
label_27ffb4:
    // 0x27ffb4: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x27ffb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_27ffb8:
    // 0x27ffb8: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x27ffb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_27ffbc:
    // 0x27ffbc: 0xc052d1c  jal         func_14B470
label_27ffc0:
    if (ctx->pc == 0x27FFC0u) {
        ctx->pc = 0x27FFC0u;
            // 0x27ffc0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x27FFC4u;
        goto label_27ffc4;
    }
    ctx->pc = 0x27FFBCu;
    SET_GPR_U32(ctx, 31, 0x27FFC4u);
    ctx->pc = 0x27FFC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FFBCu;
            // 0x27ffc0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B470u;
    if (runtime->hasFunction(0x14B470u)) {
        auto targetFn = runtime->lookupFunction(0x14B470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FFC4u; }
        if (ctx->pc != 0x27FFC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down2__8CGamePadFi_0x14b470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FFC4u; }
        if (ctx->pc != 0x27FFC4u) { return; }
    }
    ctx->pc = 0x27FFC4u;
label_27ffc4:
    // 0x27ffc4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_27ffc8:
    if (ctx->pc == 0x27FFC8u) {
        ctx->pc = 0x27FFC8u;
            // 0x27ffc8: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x27FFCCu;
        goto label_27ffcc;
    }
    ctx->pc = 0x27FFC4u;
    {
        const bool branch_taken_0x27ffc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FFC4u;
            // 0x27ffc8: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27ffc4) {
            ctx->pc = 0x27FFE8u;
            goto label_27ffe8;
        }
    }
    ctx->pc = 0x27FFCCu;
label_27ffcc:
    // 0x27ffcc: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x27ffccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_27ffd0:
    // 0x27ffd0: 0x8c225008  lw          $v0, 0x5008($at)
    ctx->pc = 0x27ffd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 20488)));
label_27ffd4:
    // 0x27ffd4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x27ffd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_27ffd8:
    // 0x27ffd8: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x27ffd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_27ffdc:
    // 0x27ffdc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x27ffdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_27ffe0:
    // 0x27ffe0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27ffe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_27ffe4:
    // 0x27ffe4: 0xac225008  sw          $v0, 0x5008($at)
    ctx->pc = 0x27ffe4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 20488), GPR_U32(ctx, 2));
label_27ffe8:
    // 0x27ffe8: 0x24050800  addiu       $a1, $zero, 0x800
    ctx->pc = 0x27ffe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_27ffec:
    // 0x27ffec: 0xc052d0c  jal         func_14B430
label_27fff0:
    if (ctx->pc == 0x27FFF0u) {
        ctx->pc = 0x27FFF0u;
            // 0x27fff0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x27FFF4u;
        goto label_27fff4;
    }
    ctx->pc = 0x27FFECu;
    SET_GPR_U32(ctx, 31, 0x27FFF4u);
    ctx->pc = 0x27FFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27FFECu;
            // 0x27fff0: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B430u;
    if (runtime->hasFunction(0x14B430u)) {
        auto targetFn = runtime->lookupFunction(0x14B430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FFF4u; }
        if (ctx->pc != 0x27FFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Down__8CGamePadFi_0x14b430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27FFF4u; }
        if (ctx->pc != 0x27FFF4u) { return; }
    }
    ctx->pc = 0x27FFF4u;
label_27fff4:
    // 0x27fff4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_27fff8:
    if (ctx->pc == 0x27FFF8u) {
        ctx->pc = 0x27FFF8u;
            // 0x27fff8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x27FFFCu;
        goto label_27fffc;
    }
    ctx->pc = 0x27FFF4u;
    {
        const bool branch_taken_0x27fff4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27FFF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27FFF4u;
            // 0x27fff8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27fff4) {
            ctx->pc = 0x280008u;
            goto label_280008;
        }
    }
    ctx->pc = 0x27FFFCu;
label_27fffc:
    // 0x27fffc: 0xc09f740  jal         func_27DD00
label_280000:
    if (ctx->pc == 0x280000u) {
        ctx->pc = 0x280004u;
        goto label_280004;
    }
    ctx->pc = 0x27FFFCu;
    SET_GPR_U32(ctx, 31, 0x280004u);
    ctx->pc = 0x27DD00u;
    if (runtime->hasFunction(0x27DD00u)) {
        auto targetFn = runtime->lookupFunction(0x27DD00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280004u; }
        if (ctx->pc != 0x280004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        OutPutFile__Fv_0x27dd00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x280004u; }
        if (ctx->pc != 0x280004u) { return; }
    }
    ctx->pc = 0x280004u;
label_280004:
    // 0x280004: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x280004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_280008:
    // 0x280008: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x280008u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_28000c:
    // 0x28000c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28000cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_280010:
    // 0x280010: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x280010u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_280014:
    // 0x280014: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x280014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_280018:
    // 0x280018: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x280018u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_28001c:
    // 0x28001c: 0x3e00008  jr          $ra
label_280020:
    if (ctx->pc == 0x280020u) {
        ctx->pc = 0x280020u;
            // 0x280020: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x280024u;
        goto label_fallthrough_0x28001c;
    }
    ctx->pc = 0x28001Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x280020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28001Cu;
            // 0x280020: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x28001c:
    ctx->pc = 0x280024u;
}
