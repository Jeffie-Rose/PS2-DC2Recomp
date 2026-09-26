#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: TitleInit__F13INIT_LOOP_ARG
// Address: 0x29f1f0 - 0x29ff28
void TitleInit__F13INIT_LOOP_ARG_0x29f1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("TitleInit__F13INIT_LOOP_ARG_0x29f1f0");
#endif

    switch (ctx->pc) {
        case 0x29f1f0u: goto label_29f1f0;
        case 0x29f1f4u: goto label_29f1f4;
        case 0x29f1f8u: goto label_29f1f8;
        case 0x29f1fcu: goto label_29f1fc;
        case 0x29f200u: goto label_29f200;
        case 0x29f204u: goto label_29f204;
        case 0x29f208u: goto label_29f208;
        case 0x29f20cu: goto label_29f20c;
        case 0x29f210u: goto label_29f210;
        case 0x29f214u: goto label_29f214;
        case 0x29f218u: goto label_29f218;
        case 0x29f21cu: goto label_29f21c;
        case 0x29f220u: goto label_29f220;
        case 0x29f224u: goto label_29f224;
        case 0x29f228u: goto label_29f228;
        case 0x29f22cu: goto label_29f22c;
        case 0x29f230u: goto label_29f230;
        case 0x29f234u: goto label_29f234;
        case 0x29f238u: goto label_29f238;
        case 0x29f23cu: goto label_29f23c;
        case 0x29f240u: goto label_29f240;
        case 0x29f244u: goto label_29f244;
        case 0x29f248u: goto label_29f248;
        case 0x29f24cu: goto label_29f24c;
        case 0x29f250u: goto label_29f250;
        case 0x29f254u: goto label_29f254;
        case 0x29f258u: goto label_29f258;
        case 0x29f25cu: goto label_29f25c;
        case 0x29f260u: goto label_29f260;
        case 0x29f264u: goto label_29f264;
        case 0x29f268u: goto label_29f268;
        case 0x29f26cu: goto label_29f26c;
        case 0x29f270u: goto label_29f270;
        case 0x29f274u: goto label_29f274;
        case 0x29f278u: goto label_29f278;
        case 0x29f27cu: goto label_29f27c;
        case 0x29f280u: goto label_29f280;
        case 0x29f284u: goto label_29f284;
        case 0x29f288u: goto label_29f288;
        case 0x29f28cu: goto label_29f28c;
        case 0x29f290u: goto label_29f290;
        case 0x29f294u: goto label_29f294;
        case 0x29f298u: goto label_29f298;
        case 0x29f29cu: goto label_29f29c;
        case 0x29f2a0u: goto label_29f2a0;
        case 0x29f2a4u: goto label_29f2a4;
        case 0x29f2a8u: goto label_29f2a8;
        case 0x29f2acu: goto label_29f2ac;
        case 0x29f2b0u: goto label_29f2b0;
        case 0x29f2b4u: goto label_29f2b4;
        case 0x29f2b8u: goto label_29f2b8;
        case 0x29f2bcu: goto label_29f2bc;
        case 0x29f2c0u: goto label_29f2c0;
        case 0x29f2c4u: goto label_29f2c4;
        case 0x29f2c8u: goto label_29f2c8;
        case 0x29f2ccu: goto label_29f2cc;
        case 0x29f2d0u: goto label_29f2d0;
        case 0x29f2d4u: goto label_29f2d4;
        case 0x29f2d8u: goto label_29f2d8;
        case 0x29f2dcu: goto label_29f2dc;
        case 0x29f2e0u: goto label_29f2e0;
        case 0x29f2e4u: goto label_29f2e4;
        case 0x29f2e8u: goto label_29f2e8;
        case 0x29f2ecu: goto label_29f2ec;
        case 0x29f2f0u: goto label_29f2f0;
        case 0x29f2f4u: goto label_29f2f4;
        case 0x29f2f8u: goto label_29f2f8;
        case 0x29f2fcu: goto label_29f2fc;
        case 0x29f300u: goto label_29f300;
        case 0x29f304u: goto label_29f304;
        case 0x29f308u: goto label_29f308;
        case 0x29f30cu: goto label_29f30c;
        case 0x29f310u: goto label_29f310;
        case 0x29f314u: goto label_29f314;
        case 0x29f318u: goto label_29f318;
        case 0x29f31cu: goto label_29f31c;
        case 0x29f320u: goto label_29f320;
        case 0x29f324u: goto label_29f324;
        case 0x29f328u: goto label_29f328;
        case 0x29f32cu: goto label_29f32c;
        case 0x29f330u: goto label_29f330;
        case 0x29f334u: goto label_29f334;
        case 0x29f338u: goto label_29f338;
        case 0x29f33cu: goto label_29f33c;
        case 0x29f340u: goto label_29f340;
        case 0x29f344u: goto label_29f344;
        case 0x29f348u: goto label_29f348;
        case 0x29f34cu: goto label_29f34c;
        case 0x29f350u: goto label_29f350;
        case 0x29f354u: goto label_29f354;
        case 0x29f358u: goto label_29f358;
        case 0x29f35cu: goto label_29f35c;
        case 0x29f360u: goto label_29f360;
        case 0x29f364u: goto label_29f364;
        case 0x29f368u: goto label_29f368;
        case 0x29f36cu: goto label_29f36c;
        case 0x29f370u: goto label_29f370;
        case 0x29f374u: goto label_29f374;
        case 0x29f378u: goto label_29f378;
        case 0x29f37cu: goto label_29f37c;
        case 0x29f380u: goto label_29f380;
        case 0x29f384u: goto label_29f384;
        case 0x29f388u: goto label_29f388;
        case 0x29f38cu: goto label_29f38c;
        case 0x29f390u: goto label_29f390;
        case 0x29f394u: goto label_29f394;
        case 0x29f398u: goto label_29f398;
        case 0x29f39cu: goto label_29f39c;
        case 0x29f3a0u: goto label_29f3a0;
        case 0x29f3a4u: goto label_29f3a4;
        case 0x29f3a8u: goto label_29f3a8;
        case 0x29f3acu: goto label_29f3ac;
        case 0x29f3b0u: goto label_29f3b0;
        case 0x29f3b4u: goto label_29f3b4;
        case 0x29f3b8u: goto label_29f3b8;
        case 0x29f3bcu: goto label_29f3bc;
        case 0x29f3c0u: goto label_29f3c0;
        case 0x29f3c4u: goto label_29f3c4;
        case 0x29f3c8u: goto label_29f3c8;
        case 0x29f3ccu: goto label_29f3cc;
        case 0x29f3d0u: goto label_29f3d0;
        case 0x29f3d4u: goto label_29f3d4;
        case 0x29f3d8u: goto label_29f3d8;
        case 0x29f3dcu: goto label_29f3dc;
        case 0x29f3e0u: goto label_29f3e0;
        case 0x29f3e4u: goto label_29f3e4;
        case 0x29f3e8u: goto label_29f3e8;
        case 0x29f3ecu: goto label_29f3ec;
        case 0x29f3f0u: goto label_29f3f0;
        case 0x29f3f4u: goto label_29f3f4;
        case 0x29f3f8u: goto label_29f3f8;
        case 0x29f3fcu: goto label_29f3fc;
        case 0x29f400u: goto label_29f400;
        case 0x29f404u: goto label_29f404;
        case 0x29f408u: goto label_29f408;
        case 0x29f40cu: goto label_29f40c;
        case 0x29f410u: goto label_29f410;
        case 0x29f414u: goto label_29f414;
        case 0x29f418u: goto label_29f418;
        case 0x29f41cu: goto label_29f41c;
        case 0x29f420u: goto label_29f420;
        case 0x29f424u: goto label_29f424;
        case 0x29f428u: goto label_29f428;
        case 0x29f42cu: goto label_29f42c;
        case 0x29f430u: goto label_29f430;
        case 0x29f434u: goto label_29f434;
        case 0x29f438u: goto label_29f438;
        case 0x29f43cu: goto label_29f43c;
        case 0x29f440u: goto label_29f440;
        case 0x29f444u: goto label_29f444;
        case 0x29f448u: goto label_29f448;
        case 0x29f44cu: goto label_29f44c;
        case 0x29f450u: goto label_29f450;
        case 0x29f454u: goto label_29f454;
        case 0x29f458u: goto label_29f458;
        case 0x29f45cu: goto label_29f45c;
        case 0x29f460u: goto label_29f460;
        case 0x29f464u: goto label_29f464;
        case 0x29f468u: goto label_29f468;
        case 0x29f46cu: goto label_29f46c;
        case 0x29f470u: goto label_29f470;
        case 0x29f474u: goto label_29f474;
        case 0x29f478u: goto label_29f478;
        case 0x29f47cu: goto label_29f47c;
        case 0x29f480u: goto label_29f480;
        case 0x29f484u: goto label_29f484;
        case 0x29f488u: goto label_29f488;
        case 0x29f48cu: goto label_29f48c;
        case 0x29f490u: goto label_29f490;
        case 0x29f494u: goto label_29f494;
        case 0x29f498u: goto label_29f498;
        case 0x29f49cu: goto label_29f49c;
        case 0x29f4a0u: goto label_29f4a0;
        case 0x29f4a4u: goto label_29f4a4;
        case 0x29f4a8u: goto label_29f4a8;
        case 0x29f4acu: goto label_29f4ac;
        case 0x29f4b0u: goto label_29f4b0;
        case 0x29f4b4u: goto label_29f4b4;
        case 0x29f4b8u: goto label_29f4b8;
        case 0x29f4bcu: goto label_29f4bc;
        case 0x29f4c0u: goto label_29f4c0;
        case 0x29f4c4u: goto label_29f4c4;
        case 0x29f4c8u: goto label_29f4c8;
        case 0x29f4ccu: goto label_29f4cc;
        case 0x29f4d0u: goto label_29f4d0;
        case 0x29f4d4u: goto label_29f4d4;
        case 0x29f4d8u: goto label_29f4d8;
        case 0x29f4dcu: goto label_29f4dc;
        case 0x29f4e0u: goto label_29f4e0;
        case 0x29f4e4u: goto label_29f4e4;
        case 0x29f4e8u: goto label_29f4e8;
        case 0x29f4ecu: goto label_29f4ec;
        case 0x29f4f0u: goto label_29f4f0;
        case 0x29f4f4u: goto label_29f4f4;
        case 0x29f4f8u: goto label_29f4f8;
        case 0x29f4fcu: goto label_29f4fc;
        case 0x29f500u: goto label_29f500;
        case 0x29f504u: goto label_29f504;
        case 0x29f508u: goto label_29f508;
        case 0x29f50cu: goto label_29f50c;
        case 0x29f510u: goto label_29f510;
        case 0x29f514u: goto label_29f514;
        case 0x29f518u: goto label_29f518;
        case 0x29f51cu: goto label_29f51c;
        case 0x29f520u: goto label_29f520;
        case 0x29f524u: goto label_29f524;
        case 0x29f528u: goto label_29f528;
        case 0x29f52cu: goto label_29f52c;
        case 0x29f530u: goto label_29f530;
        case 0x29f534u: goto label_29f534;
        case 0x29f538u: goto label_29f538;
        case 0x29f53cu: goto label_29f53c;
        case 0x29f540u: goto label_29f540;
        case 0x29f544u: goto label_29f544;
        case 0x29f548u: goto label_29f548;
        case 0x29f54cu: goto label_29f54c;
        case 0x29f550u: goto label_29f550;
        case 0x29f554u: goto label_29f554;
        case 0x29f558u: goto label_29f558;
        case 0x29f55cu: goto label_29f55c;
        case 0x29f560u: goto label_29f560;
        case 0x29f564u: goto label_29f564;
        case 0x29f568u: goto label_29f568;
        case 0x29f56cu: goto label_29f56c;
        case 0x29f570u: goto label_29f570;
        case 0x29f574u: goto label_29f574;
        case 0x29f578u: goto label_29f578;
        case 0x29f57cu: goto label_29f57c;
        case 0x29f580u: goto label_29f580;
        case 0x29f584u: goto label_29f584;
        case 0x29f588u: goto label_29f588;
        case 0x29f58cu: goto label_29f58c;
        case 0x29f590u: goto label_29f590;
        case 0x29f594u: goto label_29f594;
        case 0x29f598u: goto label_29f598;
        case 0x29f59cu: goto label_29f59c;
        case 0x29f5a0u: goto label_29f5a0;
        case 0x29f5a4u: goto label_29f5a4;
        case 0x29f5a8u: goto label_29f5a8;
        case 0x29f5acu: goto label_29f5ac;
        case 0x29f5b0u: goto label_29f5b0;
        case 0x29f5b4u: goto label_29f5b4;
        case 0x29f5b8u: goto label_29f5b8;
        case 0x29f5bcu: goto label_29f5bc;
        case 0x29f5c0u: goto label_29f5c0;
        case 0x29f5c4u: goto label_29f5c4;
        case 0x29f5c8u: goto label_29f5c8;
        case 0x29f5ccu: goto label_29f5cc;
        case 0x29f5d0u: goto label_29f5d0;
        case 0x29f5d4u: goto label_29f5d4;
        case 0x29f5d8u: goto label_29f5d8;
        case 0x29f5dcu: goto label_29f5dc;
        case 0x29f5e0u: goto label_29f5e0;
        case 0x29f5e4u: goto label_29f5e4;
        case 0x29f5e8u: goto label_29f5e8;
        case 0x29f5ecu: goto label_29f5ec;
        case 0x29f5f0u: goto label_29f5f0;
        case 0x29f5f4u: goto label_29f5f4;
        case 0x29f5f8u: goto label_29f5f8;
        case 0x29f5fcu: goto label_29f5fc;
        case 0x29f600u: goto label_29f600;
        case 0x29f604u: goto label_29f604;
        case 0x29f608u: goto label_29f608;
        case 0x29f60cu: goto label_29f60c;
        case 0x29f610u: goto label_29f610;
        case 0x29f614u: goto label_29f614;
        case 0x29f618u: goto label_29f618;
        case 0x29f61cu: goto label_29f61c;
        case 0x29f620u: goto label_29f620;
        case 0x29f624u: goto label_29f624;
        case 0x29f628u: goto label_29f628;
        case 0x29f62cu: goto label_29f62c;
        case 0x29f630u: goto label_29f630;
        case 0x29f634u: goto label_29f634;
        case 0x29f638u: goto label_29f638;
        case 0x29f63cu: goto label_29f63c;
        case 0x29f640u: goto label_29f640;
        case 0x29f644u: goto label_29f644;
        case 0x29f648u: goto label_29f648;
        case 0x29f64cu: goto label_29f64c;
        case 0x29f650u: goto label_29f650;
        case 0x29f654u: goto label_29f654;
        case 0x29f658u: goto label_29f658;
        case 0x29f65cu: goto label_29f65c;
        case 0x29f660u: goto label_29f660;
        case 0x29f664u: goto label_29f664;
        case 0x29f668u: goto label_29f668;
        case 0x29f66cu: goto label_29f66c;
        case 0x29f670u: goto label_29f670;
        case 0x29f674u: goto label_29f674;
        case 0x29f678u: goto label_29f678;
        case 0x29f67cu: goto label_29f67c;
        case 0x29f680u: goto label_29f680;
        case 0x29f684u: goto label_29f684;
        case 0x29f688u: goto label_29f688;
        case 0x29f68cu: goto label_29f68c;
        case 0x29f690u: goto label_29f690;
        case 0x29f694u: goto label_29f694;
        case 0x29f698u: goto label_29f698;
        case 0x29f69cu: goto label_29f69c;
        case 0x29f6a0u: goto label_29f6a0;
        case 0x29f6a4u: goto label_29f6a4;
        case 0x29f6a8u: goto label_29f6a8;
        case 0x29f6acu: goto label_29f6ac;
        case 0x29f6b0u: goto label_29f6b0;
        case 0x29f6b4u: goto label_29f6b4;
        case 0x29f6b8u: goto label_29f6b8;
        case 0x29f6bcu: goto label_29f6bc;
        case 0x29f6c0u: goto label_29f6c0;
        case 0x29f6c4u: goto label_29f6c4;
        case 0x29f6c8u: goto label_29f6c8;
        case 0x29f6ccu: goto label_29f6cc;
        case 0x29f6d0u: goto label_29f6d0;
        case 0x29f6d4u: goto label_29f6d4;
        case 0x29f6d8u: goto label_29f6d8;
        case 0x29f6dcu: goto label_29f6dc;
        case 0x29f6e0u: goto label_29f6e0;
        case 0x29f6e4u: goto label_29f6e4;
        case 0x29f6e8u: goto label_29f6e8;
        case 0x29f6ecu: goto label_29f6ec;
        case 0x29f6f0u: goto label_29f6f0;
        case 0x29f6f4u: goto label_29f6f4;
        case 0x29f6f8u: goto label_29f6f8;
        case 0x29f6fcu: goto label_29f6fc;
        case 0x29f700u: goto label_29f700;
        case 0x29f704u: goto label_29f704;
        case 0x29f708u: goto label_29f708;
        case 0x29f70cu: goto label_29f70c;
        case 0x29f710u: goto label_29f710;
        case 0x29f714u: goto label_29f714;
        case 0x29f718u: goto label_29f718;
        case 0x29f71cu: goto label_29f71c;
        case 0x29f720u: goto label_29f720;
        case 0x29f724u: goto label_29f724;
        case 0x29f728u: goto label_29f728;
        case 0x29f72cu: goto label_29f72c;
        case 0x29f730u: goto label_29f730;
        case 0x29f734u: goto label_29f734;
        case 0x29f738u: goto label_29f738;
        case 0x29f73cu: goto label_29f73c;
        case 0x29f740u: goto label_29f740;
        case 0x29f744u: goto label_29f744;
        case 0x29f748u: goto label_29f748;
        case 0x29f74cu: goto label_29f74c;
        case 0x29f750u: goto label_29f750;
        case 0x29f754u: goto label_29f754;
        case 0x29f758u: goto label_29f758;
        case 0x29f75cu: goto label_29f75c;
        case 0x29f760u: goto label_29f760;
        case 0x29f764u: goto label_29f764;
        case 0x29f768u: goto label_29f768;
        case 0x29f76cu: goto label_29f76c;
        case 0x29f770u: goto label_29f770;
        case 0x29f774u: goto label_29f774;
        case 0x29f778u: goto label_29f778;
        case 0x29f77cu: goto label_29f77c;
        case 0x29f780u: goto label_29f780;
        case 0x29f784u: goto label_29f784;
        case 0x29f788u: goto label_29f788;
        case 0x29f78cu: goto label_29f78c;
        case 0x29f790u: goto label_29f790;
        case 0x29f794u: goto label_29f794;
        case 0x29f798u: goto label_29f798;
        case 0x29f79cu: goto label_29f79c;
        case 0x29f7a0u: goto label_29f7a0;
        case 0x29f7a4u: goto label_29f7a4;
        case 0x29f7a8u: goto label_29f7a8;
        case 0x29f7acu: goto label_29f7ac;
        case 0x29f7b0u: goto label_29f7b0;
        case 0x29f7b4u: goto label_29f7b4;
        case 0x29f7b8u: goto label_29f7b8;
        case 0x29f7bcu: goto label_29f7bc;
        case 0x29f7c0u: goto label_29f7c0;
        case 0x29f7c4u: goto label_29f7c4;
        case 0x29f7c8u: goto label_29f7c8;
        case 0x29f7ccu: goto label_29f7cc;
        case 0x29f7d0u: goto label_29f7d0;
        case 0x29f7d4u: goto label_29f7d4;
        case 0x29f7d8u: goto label_29f7d8;
        case 0x29f7dcu: goto label_29f7dc;
        case 0x29f7e0u: goto label_29f7e0;
        case 0x29f7e4u: goto label_29f7e4;
        case 0x29f7e8u: goto label_29f7e8;
        case 0x29f7ecu: goto label_29f7ec;
        case 0x29f7f0u: goto label_29f7f0;
        case 0x29f7f4u: goto label_29f7f4;
        case 0x29f7f8u: goto label_29f7f8;
        case 0x29f7fcu: goto label_29f7fc;
        case 0x29f800u: goto label_29f800;
        case 0x29f804u: goto label_29f804;
        case 0x29f808u: goto label_29f808;
        case 0x29f80cu: goto label_29f80c;
        case 0x29f810u: goto label_29f810;
        case 0x29f814u: goto label_29f814;
        case 0x29f818u: goto label_29f818;
        case 0x29f81cu: goto label_29f81c;
        case 0x29f820u: goto label_29f820;
        case 0x29f824u: goto label_29f824;
        case 0x29f828u: goto label_29f828;
        case 0x29f82cu: goto label_29f82c;
        case 0x29f830u: goto label_29f830;
        case 0x29f834u: goto label_29f834;
        case 0x29f838u: goto label_29f838;
        case 0x29f83cu: goto label_29f83c;
        case 0x29f840u: goto label_29f840;
        case 0x29f844u: goto label_29f844;
        case 0x29f848u: goto label_29f848;
        case 0x29f84cu: goto label_29f84c;
        case 0x29f850u: goto label_29f850;
        case 0x29f854u: goto label_29f854;
        case 0x29f858u: goto label_29f858;
        case 0x29f85cu: goto label_29f85c;
        case 0x29f860u: goto label_29f860;
        case 0x29f864u: goto label_29f864;
        case 0x29f868u: goto label_29f868;
        case 0x29f86cu: goto label_29f86c;
        case 0x29f870u: goto label_29f870;
        case 0x29f874u: goto label_29f874;
        case 0x29f878u: goto label_29f878;
        case 0x29f87cu: goto label_29f87c;
        case 0x29f880u: goto label_29f880;
        case 0x29f884u: goto label_29f884;
        case 0x29f888u: goto label_29f888;
        case 0x29f88cu: goto label_29f88c;
        case 0x29f890u: goto label_29f890;
        case 0x29f894u: goto label_29f894;
        case 0x29f898u: goto label_29f898;
        case 0x29f89cu: goto label_29f89c;
        case 0x29f8a0u: goto label_29f8a0;
        case 0x29f8a4u: goto label_29f8a4;
        case 0x29f8a8u: goto label_29f8a8;
        case 0x29f8acu: goto label_29f8ac;
        case 0x29f8b0u: goto label_29f8b0;
        case 0x29f8b4u: goto label_29f8b4;
        case 0x29f8b8u: goto label_29f8b8;
        case 0x29f8bcu: goto label_29f8bc;
        case 0x29f8c0u: goto label_29f8c0;
        case 0x29f8c4u: goto label_29f8c4;
        case 0x29f8c8u: goto label_29f8c8;
        case 0x29f8ccu: goto label_29f8cc;
        case 0x29f8d0u: goto label_29f8d0;
        case 0x29f8d4u: goto label_29f8d4;
        case 0x29f8d8u: goto label_29f8d8;
        case 0x29f8dcu: goto label_29f8dc;
        case 0x29f8e0u: goto label_29f8e0;
        case 0x29f8e4u: goto label_29f8e4;
        case 0x29f8e8u: goto label_29f8e8;
        case 0x29f8ecu: goto label_29f8ec;
        case 0x29f8f0u: goto label_29f8f0;
        case 0x29f8f4u: goto label_29f8f4;
        case 0x29f8f8u: goto label_29f8f8;
        case 0x29f8fcu: goto label_29f8fc;
        case 0x29f900u: goto label_29f900;
        case 0x29f904u: goto label_29f904;
        case 0x29f908u: goto label_29f908;
        case 0x29f90cu: goto label_29f90c;
        case 0x29f910u: goto label_29f910;
        case 0x29f914u: goto label_29f914;
        case 0x29f918u: goto label_29f918;
        case 0x29f91cu: goto label_29f91c;
        case 0x29f920u: goto label_29f920;
        case 0x29f924u: goto label_29f924;
        case 0x29f928u: goto label_29f928;
        case 0x29f92cu: goto label_29f92c;
        case 0x29f930u: goto label_29f930;
        case 0x29f934u: goto label_29f934;
        case 0x29f938u: goto label_29f938;
        case 0x29f93cu: goto label_29f93c;
        case 0x29f940u: goto label_29f940;
        case 0x29f944u: goto label_29f944;
        case 0x29f948u: goto label_29f948;
        case 0x29f94cu: goto label_29f94c;
        case 0x29f950u: goto label_29f950;
        case 0x29f954u: goto label_29f954;
        case 0x29f958u: goto label_29f958;
        case 0x29f95cu: goto label_29f95c;
        case 0x29f960u: goto label_29f960;
        case 0x29f964u: goto label_29f964;
        case 0x29f968u: goto label_29f968;
        case 0x29f96cu: goto label_29f96c;
        case 0x29f970u: goto label_29f970;
        case 0x29f974u: goto label_29f974;
        case 0x29f978u: goto label_29f978;
        case 0x29f97cu: goto label_29f97c;
        case 0x29f980u: goto label_29f980;
        case 0x29f984u: goto label_29f984;
        case 0x29f988u: goto label_29f988;
        case 0x29f98cu: goto label_29f98c;
        case 0x29f990u: goto label_29f990;
        case 0x29f994u: goto label_29f994;
        case 0x29f998u: goto label_29f998;
        case 0x29f99cu: goto label_29f99c;
        case 0x29f9a0u: goto label_29f9a0;
        case 0x29f9a4u: goto label_29f9a4;
        case 0x29f9a8u: goto label_29f9a8;
        case 0x29f9acu: goto label_29f9ac;
        case 0x29f9b0u: goto label_29f9b0;
        case 0x29f9b4u: goto label_29f9b4;
        case 0x29f9b8u: goto label_29f9b8;
        case 0x29f9bcu: goto label_29f9bc;
        case 0x29f9c0u: goto label_29f9c0;
        case 0x29f9c4u: goto label_29f9c4;
        case 0x29f9c8u: goto label_29f9c8;
        case 0x29f9ccu: goto label_29f9cc;
        case 0x29f9d0u: goto label_29f9d0;
        case 0x29f9d4u: goto label_29f9d4;
        case 0x29f9d8u: goto label_29f9d8;
        case 0x29f9dcu: goto label_29f9dc;
        case 0x29f9e0u: goto label_29f9e0;
        case 0x29f9e4u: goto label_29f9e4;
        case 0x29f9e8u: goto label_29f9e8;
        case 0x29f9ecu: goto label_29f9ec;
        case 0x29f9f0u: goto label_29f9f0;
        case 0x29f9f4u: goto label_29f9f4;
        case 0x29f9f8u: goto label_29f9f8;
        case 0x29f9fcu: goto label_29f9fc;
        case 0x29fa00u: goto label_29fa00;
        case 0x29fa04u: goto label_29fa04;
        case 0x29fa08u: goto label_29fa08;
        case 0x29fa0cu: goto label_29fa0c;
        case 0x29fa10u: goto label_29fa10;
        case 0x29fa14u: goto label_29fa14;
        case 0x29fa18u: goto label_29fa18;
        case 0x29fa1cu: goto label_29fa1c;
        case 0x29fa20u: goto label_29fa20;
        case 0x29fa24u: goto label_29fa24;
        case 0x29fa28u: goto label_29fa28;
        case 0x29fa2cu: goto label_29fa2c;
        case 0x29fa30u: goto label_29fa30;
        case 0x29fa34u: goto label_29fa34;
        case 0x29fa38u: goto label_29fa38;
        case 0x29fa3cu: goto label_29fa3c;
        case 0x29fa40u: goto label_29fa40;
        case 0x29fa44u: goto label_29fa44;
        case 0x29fa48u: goto label_29fa48;
        case 0x29fa4cu: goto label_29fa4c;
        case 0x29fa50u: goto label_29fa50;
        case 0x29fa54u: goto label_29fa54;
        case 0x29fa58u: goto label_29fa58;
        case 0x29fa5cu: goto label_29fa5c;
        case 0x29fa60u: goto label_29fa60;
        case 0x29fa64u: goto label_29fa64;
        case 0x29fa68u: goto label_29fa68;
        case 0x29fa6cu: goto label_29fa6c;
        case 0x29fa70u: goto label_29fa70;
        case 0x29fa74u: goto label_29fa74;
        case 0x29fa78u: goto label_29fa78;
        case 0x29fa7cu: goto label_29fa7c;
        case 0x29fa80u: goto label_29fa80;
        case 0x29fa84u: goto label_29fa84;
        case 0x29fa88u: goto label_29fa88;
        case 0x29fa8cu: goto label_29fa8c;
        case 0x29fa90u: goto label_29fa90;
        case 0x29fa94u: goto label_29fa94;
        case 0x29fa98u: goto label_29fa98;
        case 0x29fa9cu: goto label_29fa9c;
        case 0x29faa0u: goto label_29faa0;
        case 0x29faa4u: goto label_29faa4;
        case 0x29faa8u: goto label_29faa8;
        case 0x29faacu: goto label_29faac;
        case 0x29fab0u: goto label_29fab0;
        case 0x29fab4u: goto label_29fab4;
        case 0x29fab8u: goto label_29fab8;
        case 0x29fabcu: goto label_29fabc;
        case 0x29fac0u: goto label_29fac0;
        case 0x29fac4u: goto label_29fac4;
        case 0x29fac8u: goto label_29fac8;
        case 0x29faccu: goto label_29facc;
        case 0x29fad0u: goto label_29fad0;
        case 0x29fad4u: goto label_29fad4;
        case 0x29fad8u: goto label_29fad8;
        case 0x29fadcu: goto label_29fadc;
        case 0x29fae0u: goto label_29fae0;
        case 0x29fae4u: goto label_29fae4;
        case 0x29fae8u: goto label_29fae8;
        case 0x29faecu: goto label_29faec;
        case 0x29faf0u: goto label_29faf0;
        case 0x29faf4u: goto label_29faf4;
        case 0x29faf8u: goto label_29faf8;
        case 0x29fafcu: goto label_29fafc;
        case 0x29fb00u: goto label_29fb00;
        case 0x29fb04u: goto label_29fb04;
        case 0x29fb08u: goto label_29fb08;
        case 0x29fb0cu: goto label_29fb0c;
        case 0x29fb10u: goto label_29fb10;
        case 0x29fb14u: goto label_29fb14;
        case 0x29fb18u: goto label_29fb18;
        case 0x29fb1cu: goto label_29fb1c;
        case 0x29fb20u: goto label_29fb20;
        case 0x29fb24u: goto label_29fb24;
        case 0x29fb28u: goto label_29fb28;
        case 0x29fb2cu: goto label_29fb2c;
        case 0x29fb30u: goto label_29fb30;
        case 0x29fb34u: goto label_29fb34;
        case 0x29fb38u: goto label_29fb38;
        case 0x29fb3cu: goto label_29fb3c;
        case 0x29fb40u: goto label_29fb40;
        case 0x29fb44u: goto label_29fb44;
        case 0x29fb48u: goto label_29fb48;
        case 0x29fb4cu: goto label_29fb4c;
        case 0x29fb50u: goto label_29fb50;
        case 0x29fb54u: goto label_29fb54;
        case 0x29fb58u: goto label_29fb58;
        case 0x29fb5cu: goto label_29fb5c;
        case 0x29fb60u: goto label_29fb60;
        case 0x29fb64u: goto label_29fb64;
        case 0x29fb68u: goto label_29fb68;
        case 0x29fb6cu: goto label_29fb6c;
        case 0x29fb70u: goto label_29fb70;
        case 0x29fb74u: goto label_29fb74;
        case 0x29fb78u: goto label_29fb78;
        case 0x29fb7cu: goto label_29fb7c;
        case 0x29fb80u: goto label_29fb80;
        case 0x29fb84u: goto label_29fb84;
        case 0x29fb88u: goto label_29fb88;
        case 0x29fb8cu: goto label_29fb8c;
        case 0x29fb90u: goto label_29fb90;
        case 0x29fb94u: goto label_29fb94;
        case 0x29fb98u: goto label_29fb98;
        case 0x29fb9cu: goto label_29fb9c;
        case 0x29fba0u: goto label_29fba0;
        case 0x29fba4u: goto label_29fba4;
        case 0x29fba8u: goto label_29fba8;
        case 0x29fbacu: goto label_29fbac;
        case 0x29fbb0u: goto label_29fbb0;
        case 0x29fbb4u: goto label_29fbb4;
        case 0x29fbb8u: goto label_29fbb8;
        case 0x29fbbcu: goto label_29fbbc;
        case 0x29fbc0u: goto label_29fbc0;
        case 0x29fbc4u: goto label_29fbc4;
        case 0x29fbc8u: goto label_29fbc8;
        case 0x29fbccu: goto label_29fbcc;
        case 0x29fbd0u: goto label_29fbd0;
        case 0x29fbd4u: goto label_29fbd4;
        case 0x29fbd8u: goto label_29fbd8;
        case 0x29fbdcu: goto label_29fbdc;
        case 0x29fbe0u: goto label_29fbe0;
        case 0x29fbe4u: goto label_29fbe4;
        case 0x29fbe8u: goto label_29fbe8;
        case 0x29fbecu: goto label_29fbec;
        case 0x29fbf0u: goto label_29fbf0;
        case 0x29fbf4u: goto label_29fbf4;
        case 0x29fbf8u: goto label_29fbf8;
        case 0x29fbfcu: goto label_29fbfc;
        case 0x29fc00u: goto label_29fc00;
        case 0x29fc04u: goto label_29fc04;
        case 0x29fc08u: goto label_29fc08;
        case 0x29fc0cu: goto label_29fc0c;
        case 0x29fc10u: goto label_29fc10;
        case 0x29fc14u: goto label_29fc14;
        case 0x29fc18u: goto label_29fc18;
        case 0x29fc1cu: goto label_29fc1c;
        case 0x29fc20u: goto label_29fc20;
        case 0x29fc24u: goto label_29fc24;
        case 0x29fc28u: goto label_29fc28;
        case 0x29fc2cu: goto label_29fc2c;
        case 0x29fc30u: goto label_29fc30;
        case 0x29fc34u: goto label_29fc34;
        case 0x29fc38u: goto label_29fc38;
        case 0x29fc3cu: goto label_29fc3c;
        case 0x29fc40u: goto label_29fc40;
        case 0x29fc44u: goto label_29fc44;
        case 0x29fc48u: goto label_29fc48;
        case 0x29fc4cu: goto label_29fc4c;
        case 0x29fc50u: goto label_29fc50;
        case 0x29fc54u: goto label_29fc54;
        case 0x29fc58u: goto label_29fc58;
        case 0x29fc5cu: goto label_29fc5c;
        case 0x29fc60u: goto label_29fc60;
        case 0x29fc64u: goto label_29fc64;
        case 0x29fc68u: goto label_29fc68;
        case 0x29fc6cu: goto label_29fc6c;
        case 0x29fc70u: goto label_29fc70;
        case 0x29fc74u: goto label_29fc74;
        case 0x29fc78u: goto label_29fc78;
        case 0x29fc7cu: goto label_29fc7c;
        case 0x29fc80u: goto label_29fc80;
        case 0x29fc84u: goto label_29fc84;
        case 0x29fc88u: goto label_29fc88;
        case 0x29fc8cu: goto label_29fc8c;
        case 0x29fc90u: goto label_29fc90;
        case 0x29fc94u: goto label_29fc94;
        case 0x29fc98u: goto label_29fc98;
        case 0x29fc9cu: goto label_29fc9c;
        case 0x29fca0u: goto label_29fca0;
        case 0x29fca4u: goto label_29fca4;
        case 0x29fca8u: goto label_29fca8;
        case 0x29fcacu: goto label_29fcac;
        case 0x29fcb0u: goto label_29fcb0;
        case 0x29fcb4u: goto label_29fcb4;
        case 0x29fcb8u: goto label_29fcb8;
        case 0x29fcbcu: goto label_29fcbc;
        case 0x29fcc0u: goto label_29fcc0;
        case 0x29fcc4u: goto label_29fcc4;
        case 0x29fcc8u: goto label_29fcc8;
        case 0x29fcccu: goto label_29fccc;
        case 0x29fcd0u: goto label_29fcd0;
        case 0x29fcd4u: goto label_29fcd4;
        case 0x29fcd8u: goto label_29fcd8;
        case 0x29fcdcu: goto label_29fcdc;
        case 0x29fce0u: goto label_29fce0;
        case 0x29fce4u: goto label_29fce4;
        case 0x29fce8u: goto label_29fce8;
        case 0x29fcecu: goto label_29fcec;
        case 0x29fcf0u: goto label_29fcf0;
        case 0x29fcf4u: goto label_29fcf4;
        case 0x29fcf8u: goto label_29fcf8;
        case 0x29fcfcu: goto label_29fcfc;
        case 0x29fd00u: goto label_29fd00;
        case 0x29fd04u: goto label_29fd04;
        case 0x29fd08u: goto label_29fd08;
        case 0x29fd0cu: goto label_29fd0c;
        case 0x29fd10u: goto label_29fd10;
        case 0x29fd14u: goto label_29fd14;
        case 0x29fd18u: goto label_29fd18;
        case 0x29fd1cu: goto label_29fd1c;
        case 0x29fd20u: goto label_29fd20;
        case 0x29fd24u: goto label_29fd24;
        case 0x29fd28u: goto label_29fd28;
        case 0x29fd2cu: goto label_29fd2c;
        case 0x29fd30u: goto label_29fd30;
        case 0x29fd34u: goto label_29fd34;
        case 0x29fd38u: goto label_29fd38;
        case 0x29fd3cu: goto label_29fd3c;
        case 0x29fd40u: goto label_29fd40;
        case 0x29fd44u: goto label_29fd44;
        case 0x29fd48u: goto label_29fd48;
        case 0x29fd4cu: goto label_29fd4c;
        case 0x29fd50u: goto label_29fd50;
        case 0x29fd54u: goto label_29fd54;
        case 0x29fd58u: goto label_29fd58;
        case 0x29fd5cu: goto label_29fd5c;
        case 0x29fd60u: goto label_29fd60;
        case 0x29fd64u: goto label_29fd64;
        case 0x29fd68u: goto label_29fd68;
        case 0x29fd6cu: goto label_29fd6c;
        case 0x29fd70u: goto label_29fd70;
        case 0x29fd74u: goto label_29fd74;
        case 0x29fd78u: goto label_29fd78;
        case 0x29fd7cu: goto label_29fd7c;
        case 0x29fd80u: goto label_29fd80;
        case 0x29fd84u: goto label_29fd84;
        case 0x29fd88u: goto label_29fd88;
        case 0x29fd8cu: goto label_29fd8c;
        case 0x29fd90u: goto label_29fd90;
        case 0x29fd94u: goto label_29fd94;
        case 0x29fd98u: goto label_29fd98;
        case 0x29fd9cu: goto label_29fd9c;
        case 0x29fda0u: goto label_29fda0;
        case 0x29fda4u: goto label_29fda4;
        case 0x29fda8u: goto label_29fda8;
        case 0x29fdacu: goto label_29fdac;
        case 0x29fdb0u: goto label_29fdb0;
        case 0x29fdb4u: goto label_29fdb4;
        case 0x29fdb8u: goto label_29fdb8;
        case 0x29fdbcu: goto label_29fdbc;
        case 0x29fdc0u: goto label_29fdc0;
        case 0x29fdc4u: goto label_29fdc4;
        case 0x29fdc8u: goto label_29fdc8;
        case 0x29fdccu: goto label_29fdcc;
        case 0x29fdd0u: goto label_29fdd0;
        case 0x29fdd4u: goto label_29fdd4;
        case 0x29fdd8u: goto label_29fdd8;
        case 0x29fddcu: goto label_29fddc;
        case 0x29fde0u: goto label_29fde0;
        case 0x29fde4u: goto label_29fde4;
        case 0x29fde8u: goto label_29fde8;
        case 0x29fdecu: goto label_29fdec;
        case 0x29fdf0u: goto label_29fdf0;
        case 0x29fdf4u: goto label_29fdf4;
        case 0x29fdf8u: goto label_29fdf8;
        case 0x29fdfcu: goto label_29fdfc;
        case 0x29fe00u: goto label_29fe00;
        case 0x29fe04u: goto label_29fe04;
        case 0x29fe08u: goto label_29fe08;
        case 0x29fe0cu: goto label_29fe0c;
        case 0x29fe10u: goto label_29fe10;
        case 0x29fe14u: goto label_29fe14;
        case 0x29fe18u: goto label_29fe18;
        case 0x29fe1cu: goto label_29fe1c;
        case 0x29fe20u: goto label_29fe20;
        case 0x29fe24u: goto label_29fe24;
        case 0x29fe28u: goto label_29fe28;
        case 0x29fe2cu: goto label_29fe2c;
        case 0x29fe30u: goto label_29fe30;
        case 0x29fe34u: goto label_29fe34;
        case 0x29fe38u: goto label_29fe38;
        case 0x29fe3cu: goto label_29fe3c;
        case 0x29fe40u: goto label_29fe40;
        case 0x29fe44u: goto label_29fe44;
        case 0x29fe48u: goto label_29fe48;
        case 0x29fe4cu: goto label_29fe4c;
        case 0x29fe50u: goto label_29fe50;
        case 0x29fe54u: goto label_29fe54;
        case 0x29fe58u: goto label_29fe58;
        case 0x29fe5cu: goto label_29fe5c;
        case 0x29fe60u: goto label_29fe60;
        case 0x29fe64u: goto label_29fe64;
        case 0x29fe68u: goto label_29fe68;
        case 0x29fe6cu: goto label_29fe6c;
        case 0x29fe70u: goto label_29fe70;
        case 0x29fe74u: goto label_29fe74;
        case 0x29fe78u: goto label_29fe78;
        case 0x29fe7cu: goto label_29fe7c;
        case 0x29fe80u: goto label_29fe80;
        case 0x29fe84u: goto label_29fe84;
        case 0x29fe88u: goto label_29fe88;
        case 0x29fe8cu: goto label_29fe8c;
        case 0x29fe90u: goto label_29fe90;
        case 0x29fe94u: goto label_29fe94;
        case 0x29fe98u: goto label_29fe98;
        case 0x29fe9cu: goto label_29fe9c;
        case 0x29fea0u: goto label_29fea0;
        case 0x29fea4u: goto label_29fea4;
        case 0x29fea8u: goto label_29fea8;
        case 0x29feacu: goto label_29feac;
        case 0x29feb0u: goto label_29feb0;
        case 0x29feb4u: goto label_29feb4;
        case 0x29feb8u: goto label_29feb8;
        case 0x29febcu: goto label_29febc;
        case 0x29fec0u: goto label_29fec0;
        case 0x29fec4u: goto label_29fec4;
        case 0x29fec8u: goto label_29fec8;
        case 0x29feccu: goto label_29fecc;
        case 0x29fed0u: goto label_29fed0;
        case 0x29fed4u: goto label_29fed4;
        case 0x29fed8u: goto label_29fed8;
        case 0x29fedcu: goto label_29fedc;
        case 0x29fee0u: goto label_29fee0;
        case 0x29fee4u: goto label_29fee4;
        case 0x29fee8u: goto label_29fee8;
        case 0x29feecu: goto label_29feec;
        case 0x29fef0u: goto label_29fef0;
        case 0x29fef4u: goto label_29fef4;
        case 0x29fef8u: goto label_29fef8;
        case 0x29fefcu: goto label_29fefc;
        case 0x29ff00u: goto label_29ff00;
        case 0x29ff04u: goto label_29ff04;
        case 0x29ff08u: goto label_29ff08;
        case 0x29ff0cu: goto label_29ff0c;
        case 0x29ff10u: goto label_29ff10;
        case 0x29ff14u: goto label_29ff14;
        case 0x29ff18u: goto label_29ff18;
        case 0x29ff1cu: goto label_29ff1c;
        case 0x29ff20u: goto label_29ff20;
        case 0x29ff24u: goto label_29ff24;
        default: break;
    }

    ctx->pc = 0x29f1f0u;

label_29f1f0:
    // 0x29f1f0: 0x27bdfc10  addiu       $sp, $sp, -0x3F0
    ctx->pc = 0x29f1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966288));
label_29f1f4:
    // 0x29f1f4: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x29f1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_29f1f8:
    // 0x29f1f8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x29f1f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_29f1fc:
    // 0x29f1fc: 0x27a60090  addiu       $a2, $sp, 0x90
    ctx->pc = 0x29f1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_29f200:
    // 0x29f200: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x29f200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_29f204:
    // 0x29f204: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x29f204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_29f208:
    // 0x29f208: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x29f208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_29f20c:
    // 0x29f20c: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x29f20cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_29f210:
    // 0x29f210: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x29f210u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_29f214:
    // 0x29f214: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x29f214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_29f218:
    // 0x29f218: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x29f218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_29f21c:
    // 0x29f21c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x29f21cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_29f220:
    // 0x29f220: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x29f220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_29f224:
    // 0x29f224: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x29f224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_29f228:
    // 0x29f228: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x29f228u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_29f22c:
    // 0x29f22c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x29f22cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_29f230:
    // 0x29f230: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x29f230u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_29f234:
    // 0x29f234: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_29f238:
    if (ctx->pc == 0x29F238u) {
        ctx->pc = 0x29F238u;
            // 0x29f238: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->pc = 0x29F23Cu;
        goto label_29f23c;
    }
    ctx->pc = 0x29F234u;
    {
        const bool branch_taken_0x29f234 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x29F238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F234u;
            // 0x29f238: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f234) {
            ctx->pc = 0x29F21Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29f21c;
        }
    }
    ctx->pc = 0x29F23Cu;
label_29f23c:
    // 0x29f23c: 0xc051878  jal         func_1461E0
label_29f240:
    if (ctx->pc == 0x29F240u) {
        ctx->pc = 0x29F244u;
        goto label_29f244;
    }
    ctx->pc = 0x29F23Cu;
    SET_GPR_U32(ctx, 31, 0x29F244u);
    ctx->pc = 0x1461E0u;
    if (runtime->hasFunction(0x1461E0u)) {
        auto targetFn = runtime->lookupFunction(0x1461E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F244u; }
        if (ctx->pc != 0x29F244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInitFont__Fv_0x1461e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F244u; }
        if (ctx->pc != 0x29F244u) { return; }
    }
    ctx->pc = 0x29F244u;
label_29f244:
    // 0x29f244: 0xc050db0  jal         func_1436C0
label_29f248:
    if (ctx->pc == 0x29F248u) {
        ctx->pc = 0x29F24Cu;
        goto label_29f24c;
    }
    ctx->pc = 0x29F244u;
    SET_GPR_U32(ctx, 31, 0x29F24Cu);
    ctx->pc = 0x1436C0u;
    if (runtime->hasFunction(0x1436C0u)) {
        auto targetFn = runtime->lookupFunction(0x1436C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F24Cu; }
        if (ctx->pc != 0x29F24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInitLighting__Fv_0x1436c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F24Cu; }
        if (ctx->pc != 0x29F24Cu) { return; }
    }
    ctx->pc = 0x29F24Cu;
label_29f24c:
    // 0x29f24c: 0xc050dbc  jal         func_1436F0
label_29f250:
    if (ctx->pc == 0x29F250u) {
        ctx->pc = 0x29F254u;
        goto label_29f254;
    }
    ctx->pc = 0x29F24Cu;
    SET_GPR_U32(ctx, 31, 0x29F254u);
    ctx->pc = 0x1436F0u;
    if (runtime->hasFunction(0x1436F0u)) {
        auto targetFn = runtime->lookupFunction(0x1436F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F254u; }
        if (ctx->pc != 0x29F254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInitActiveLighting__Fv_0x1436f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F254u; }
        if (ctx->pc != 0x29F254u) { return; }
    }
    ctx->pc = 0x29F254u;
label_29f254:
    // 0x29f254: 0xc0521d8  jal         func_148760
label_29f258:
    if (ctx->pc == 0x29F258u) {
        ctx->pc = 0x29F258u;
            // 0x29f258: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29F25Cu;
        goto label_29f25c;
    }
    ctx->pc = 0x29F254u;
    SET_GPR_U32(ctx, 31, 0x29F25Cu);
    ctx->pc = 0x29F258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F254u;
            // 0x29f258: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148760u;
    if (runtime->hasFunction(0x148760u)) {
        auto targetFn = runtime->lookupFunction(0x148760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F25Cu; }
        if (ctx->pc != 0x29F25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCurrentDir__FPc_0x148760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F25Cu; }
        if (ctx->pc != 0x29F25Cu) { return; }
    }
    ctx->pc = 0x29F25Cu;
label_29f25c:
    // 0x29f25c: 0xc06421c  jal         func_190870
label_29f260:
    if (ctx->pc == 0x29F260u) {
        ctx->pc = 0x29F264u;
        goto label_29f264;
    }
    ctx->pc = 0x29F25Cu;
    SET_GPR_U32(ctx, 31, 0x29F264u);
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F264u; }
        if (ctx->pc != 0x29F264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F264u; }
        if (ctx->pc != 0x29F264u) { return; }
    }
    ctx->pc = 0x29F264u;
label_29f264:
    // 0x29f264: 0xaf8299ec  sw          $v0, -0x6614($gp)
    ctx->pc = 0x29f264u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941164), GPR_U32(ctx, 2));
label_29f268:
    // 0x29f268: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x29f268u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_29f26c:
    // 0x29f26c: 0x8f8499ec  lw          $a0, -0x6614($gp)
    ctx->pc = 0x29f26cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
label_29f270:
    // 0x29f270: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x29f270u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_29f274:
    // 0x29f274: 0x8c390548  lw          $t9, 0x548($at)
    ctx->pc = 0x29f274u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 1352)));
label_29f278:
    // 0x29f278: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x29f278u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_29f27c:
    // 0x29f27c: 0x320f809  jalr        $t9
label_29f280:
    if (ctx->pc == 0x29F280u) {
        ctx->pc = 0x29F284u;
        goto label_29f284;
    }
    ctx->pc = 0x29F27Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29F284u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x29F284u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29F284u; }
            if (ctx->pc != 0x29F284u) { return; }
        }
        }
    }
    ctx->pc = 0x29F284u;
label_29f284:
    // 0x29f284: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x29f284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
label_29f288:
    // 0x29f288: 0x24432f90  addiu       $v1, $v0, 0x2F90
    ctx->pc = 0x29f288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 12176));
label_29f28c:
    // 0x29f28c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_29f290:
    if (ctx->pc == 0x29F290u) {
        ctx->pc = 0x29F290u;
            // 0x29f290: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x29F294u;
        goto label_29f294;
    }
    ctx->pc = 0x29F28Cu;
    {
        const bool branch_taken_0x29f28c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F28Cu;
            // 0x29f290: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f28c) {
            ctx->pc = 0x29F2CCu;
            goto label_29f2cc;
        }
    }
    ctx->pc = 0x29F294u;
label_29f294:
    // 0x29f294: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x29f294u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
label_29f298:
    // 0x29f298: 0xac600084  sw          $zero, 0x84($v1)
    ctx->pc = 0x29f298u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 0));
label_29f29c:
    // 0x29f29c: 0xac600088  sw          $zero, 0x88($v1)
    ctx->pc = 0x29f29cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 0));
label_29f2a0:
    // 0x29f2a0: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x29f2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
label_29f2a4:
    // 0x29f2a4: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x29f2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_29f2a8:
    // 0x29f2a8: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x29f2a8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_29f2ac:
    // 0x29f2ac: 0xac600064  sw          $zero, 0x64($v1)
    ctx->pc = 0x29f2acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 0));
label_29f2b0:
    // 0x29f2b0: 0xa4600078  sh          $zero, 0x78($v1)
    ctx->pc = 0x29f2b0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 120), (uint16_t)GPR_U32(ctx, 0));
label_29f2b4:
    // 0x29f2b4: 0xa4600046  sh          $zero, 0x46($v1)
    ctx->pc = 0x29f2b4u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 0));
label_29f2b8:
    // 0x29f2b8: 0xfc600090  sd          $zero, 0x90($v1)
    ctx->pc = 0x29f2b8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 144), GPR_U64(ctx, 0));
label_29f2bc:
    // 0x29f2bc: 0xac600098  sw          $zero, 0x98($v1)
    ctx->pc = 0x29f2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 152), GPR_U32(ctx, 0));
label_29f2c0:
    // 0x29f2c0: 0xa460000c  sh          $zero, 0xC($v1)
    ctx->pc = 0x29f2c0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 0));
label_29f2c4:
    // 0x29f2c4: 0xa060008c  sb          $zero, 0x8C($v1)
    ctx->pc = 0x29f2c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 140), (uint8_t)GPR_U32(ctx, 0));
label_29f2c8:
    // 0x29f2c8: 0xa460009e  sh          $zero, 0x9E($v1)
    ctx->pc = 0x29f2c8u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 158), (uint16_t)GPR_U32(ctx, 0));
label_29f2cc:
    // 0x29f2cc: 0xc0a7c38  jal         func_29F0E0
label_29f2d0:
    if (ctx->pc == 0x29F2D0u) {
        ctx->pc = 0x29F2D4u;
        goto label_29f2d4;
    }
    ctx->pc = 0x29F2CCu;
    SET_GPR_U32(ctx, 31, 0x29F2D4u);
    ctx->pc = 0x29F0E0u;
    if (runtime->hasFunction(0x29F0E0u)) {
        auto targetFn = runtime->lookupFunction(0x29F0E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F2D4u; }
        if (ctx->pc != 0x29F2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitTitleOmakeFlag__Fv_0x29f0e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F2D4u; }
        if (ctx->pc != 0x29F2D4u) { return; }
    }
    ctx->pc = 0x29F2D4u;
label_29f2d4:
    // 0x29f2d4: 0xc0642f8  jal         func_190BE0
label_29f2d8:
    if (ctx->pc == 0x29F2D8u) {
        ctx->pc = 0x29F2D8u;
            // 0x29f2d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29F2DCu;
        goto label_29f2dc;
    }
    ctx->pc = 0x29F2D4u;
    SET_GPR_U32(ctx, 31, 0x29F2DCu);
    ctx->pc = 0x29F2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F2D4u;
            // 0x29f2d8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190BE0u;
    if (runtime->hasFunction(0x190BE0u)) {
        auto targetFn = runtime->lookupFunction(0x190BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F2DCu; }
        if (ctx->pc != 0x29F2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayTimeCount__Fi_0x190be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F2DCu; }
        if (ctx->pc != 0x29F2DCu) { return; }
    }
    ctx->pc = 0x29F2DCu;
label_29f2dc:
    // 0x29f2dc: 0x8f828ad0  lw          $v0, -0x7530($gp)
    ctx->pc = 0x29f2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
label_29f2e0:
    // 0x29f2e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29f2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29f2e4:
    // 0x29f2e4: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
label_29f2e8:
    if (ctx->pc == 0x29F2E8u) {
        ctx->pc = 0x29F2E8u;
            // 0x29f2e8: 0xa3838460  sb          $v1, -0x7BA0($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935648), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x29F2ECu;
        goto label_29f2ec;
    }
    ctx->pc = 0x29F2E4u;
    {
        const bool branch_taken_0x29f2e4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x29F2E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F2E4u;
            // 0x29f2e8: 0xa3838460  sb          $v1, -0x7BA0($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935648), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f2e4) {
            ctx->pc = 0x29F2F0u;
            goto label_29f2f0;
        }
    }
    ctx->pc = 0x29F2ECu;
label_29f2ec:
    // 0x29f2ec: 0xa3808460  sb          $zero, -0x7BA0($gp)
    ctx->pc = 0x29f2ecu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935648), (uint8_t)GPR_U32(ctx, 0));
label_29f2f0:
    // 0x29f2f0: 0x83a200d8  lb          $v0, 0xD8($sp)
    ctx->pc = 0x29f2f0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 216)));
label_29f2f4:
    // 0x29f2f4: 0xc06423c  jal         func_1908F0
label_29f2f8:
    if (ctx->pc == 0x29F2F8u) {
        ctx->pc = 0x29F2F8u;
            // 0x29f2f8: 0xa382996c  sb          $v0, -0x6694($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941036), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x29F2FCu;
        goto label_29f2fc;
    }
    ctx->pc = 0x29F2F4u;
    SET_GPR_U32(ctx, 31, 0x29F2FCu);
    ctx->pc = 0x29F2F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F2F4u;
            // 0x29f2f8: 0xa382996c  sb          $v0, -0x6694($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941036), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1908F0u;
    if (runtime->hasFunction(0x1908F0u)) {
        auto targetFn = runtime->lookupFunction(0x1908F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F2FCu; }
        if (ctx->pc != 0x29F2FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainStack__Fv_0x1908f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F2FCu; }
        if (ctx->pc != 0x29F2FCu) { return; }
    }
    ctx->pc = 0x29F2FCu;
label_29f2fc:
    // 0x29f2fc: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x29f2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_29f300:
    // 0x29f300: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29f300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f304:
    // 0x29f304: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x29f304u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_29f308:
    // 0x29f308: 0xc04e640  jal         func_139900
label_29f30c:
    if (ctx->pc == 0x29F30Cu) {
        ctx->pc = 0x29F30Cu;
            // 0x29f30c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x29F310u;
        goto label_29f310;
    }
    ctx->pc = 0x29F308u;
    SET_GPR_U32(ctx, 31, 0x29F310u);
    ctx->pc = 0x29F30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F308u;
            // 0x29f30c: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F310u; }
        if (ctx->pc != 0x29F310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F310u; }
        if (ctx->pc != 0x29F310u) { return; }
    }
    ctx->pc = 0x29F310u;
label_29f310:
    // 0x29f310: 0xc04e640  jal         func_139900
label_29f314:
    if (ctx->pc == 0x29F314u) {
        ctx->pc = 0x29F314u;
            // 0x29f314: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x29F318u;
        goto label_29f318;
    }
    ctx->pc = 0x29F310u;
    SET_GPR_U32(ctx, 31, 0x29F318u);
    ctx->pc = 0x29F314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F310u;
            // 0x29f314: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F318u; }
        if (ctx->pc != 0x29F318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F318u; }
        if (ctx->pc != 0x29F318u) { return; }
    }
    ctx->pc = 0x29F318u;
label_29f318:
    // 0x29f318: 0xc04e640  jal         func_139900
label_29f31c:
    if (ctx->pc == 0x29F31Cu) {
        ctx->pc = 0x29F31Cu;
            // 0x29f31c: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->pc = 0x29F320u;
        goto label_29f320;
    }
    ctx->pc = 0x29F318u;
    SET_GPR_U32(ctx, 31, 0x29F320u);
    ctx->pc = 0x29F31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F318u;
            // 0x29f31c: 0x27a40140  addiu       $a0, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F320u; }
        if (ctx->pc != 0x29F320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F320u; }
        if (ctx->pc != 0x29F320u) { return; }
    }
    ctx->pc = 0x29F320u;
label_29f320:
    // 0x29f320: 0xc04e640  jal         func_139900
label_29f324:
    if (ctx->pc == 0x29F324u) {
        ctx->pc = 0x29F324u;
            // 0x29f324: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x29F328u;
        goto label_29f328;
    }
    ctx->pc = 0x29F320u;
    SET_GPR_U32(ctx, 31, 0x29F328u);
    ctx->pc = 0x29F324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F320u;
            // 0x29f324: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F328u; }
        if (ctx->pc != 0x29F328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F328u; }
        if (ctx->pc != 0x29F328u) { return; }
    }
    ctx->pc = 0x29F328u;
label_29f328:
    // 0x29f328: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f328u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29f32c:
    // 0x29f32c: 0xc04e704  jal         func_139C10
label_29f330:
    if (ctx->pc == 0x29F330u) {
        ctx->pc = 0x29F330u;
            // 0x29f330: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->pc = 0x29F334u;
        goto label_29f334;
    }
    ctx->pc = 0x29F32Cu;
    SET_GPR_U32(ctx, 31, 0x29F334u);
    ctx->pc = 0x29F330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F32Cu;
            // 0x29f330: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F334u; }
        if (ctx->pc != 0x29F334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F334u; }
        if (ctx->pc != 0x29F334u) { return; }
    }
    ctx->pc = 0x29F334u;
label_29f334:
    // 0x29f334: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29f334u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f338:
    // 0x29f338: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29f33c:
    // 0x29f33c: 0xc04e704  jal         func_139C10
label_29f340:
    if (ctx->pc == 0x29F340u) {
        ctx->pc = 0x29F340u;
            // 0x29f340: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->pc = 0x29F344u;
        goto label_29f344;
    }
    ctx->pc = 0x29F33Cu;
    SET_GPR_U32(ctx, 31, 0x29F344u);
    ctx->pc = 0x29F340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F33Cu;
            // 0x29f340: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F344u; }
        if (ctx->pc != 0x29F344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F344u; }
        if (ctx->pc != 0x29F344u) { return; }
    }
    ctx->pc = 0x29F344u;
label_29f344:
    // 0x29f344: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29f344u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f348:
    // 0x29f348: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x29f348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29f34c:
    // 0x29f34c: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x29f34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_29f350:
    // 0x29f350: 0xc050784  jal         func_141E10
label_29f354:
    if (ctx->pc == 0x29F354u) {
        ctx->pc = 0x29F354u;
            // 0x29f354: 0x34467100  ori         $a2, $v0, 0x7100 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28928);
        ctx->pc = 0x29F358u;
        goto label_29f358;
    }
    ctx->pc = 0x29F350u;
    SET_GPR_U32(ctx, 31, 0x29F358u);
    ctx->pc = 0x29F354u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F350u;
            // 0x29f354: 0x34467100  ori         $a2, $v0, 0x7100 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28928);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141E10u;
    if (runtime->hasFunction(0x141E10u)) {
        auto targetFn = runtime->lookupFunction(0x141E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F358u; }
        if (ctx->pc != 0x29F358u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInitVif1Packet__FP1P1i_0x141e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F358u; }
        if (ctx->pc != 0x29F358u) { return; }
    }
    ctx->pc = 0x29F358u;
label_29f358:
    // 0x29f358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29f35c:
    // 0x29f35c: 0xc04e704  jal         func_139C10
label_29f360:
    if (ctx->pc == 0x29F360u) {
        ctx->pc = 0x29F360u;
            // 0x29f360: 0x24057530  addiu       $a1, $zero, 0x7530 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
        ctx->pc = 0x29F364u;
        goto label_29f364;
    }
    ctx->pc = 0x29F35Cu;
    SET_GPR_U32(ctx, 31, 0x29F364u);
    ctx->pc = 0x29F360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F35Cu;
            // 0x29f360: 0x24057530  addiu       $a1, $zero, 0x7530 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F364u; }
        if (ctx->pc != 0x29F364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F364u; }
        if (ctx->pc != 0x29F364u) { return; }
    }
    ctx->pc = 0x29F364u;
label_29f364:
    // 0x29f364: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29f364u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f368:
    // 0x29f368: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x29f368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_29f36c:
    // 0x29f36c: 0xc04e79c  jal         func_139E70
label_29f370:
    if (ctx->pc == 0x29F370u) {
        ctx->pc = 0x29F370u;
            // 0x29f370: 0x24067530  addiu       $a2, $zero, 0x7530 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
        ctx->pc = 0x29F374u;
        goto label_29f374;
    }
    ctx->pc = 0x29F36Cu;
    SET_GPR_U32(ctx, 31, 0x29F374u);
    ctx->pc = 0x29F370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F36Cu;
            // 0x29f370: 0x24067530  addiu       $a2, $zero, 0x7530 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F374u; }
        if (ctx->pc != 0x29F374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F374u; }
        if (ctx->pc != 0x29F374u) { return; }
    }
    ctx->pc = 0x29F374u;
label_29f374:
    // 0x29f374: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f374u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29f378:
    // 0x29f378: 0xc04e704  jal         func_139C10
label_29f37c:
    if (ctx->pc == 0x29F37Cu) {
        ctx->pc = 0x29F37Cu;
            // 0x29f37c: 0x24057530  addiu       $a1, $zero, 0x7530 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
        ctx->pc = 0x29F380u;
        goto label_29f380;
    }
    ctx->pc = 0x29F378u;
    SET_GPR_U32(ctx, 31, 0x29F380u);
    ctx->pc = 0x29F37Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F378u;
            // 0x29f37c: 0x24057530  addiu       $a1, $zero, 0x7530 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F380u; }
        if (ctx->pc != 0x29F380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F380u; }
        if (ctx->pc != 0x29F380u) { return; }
    }
    ctx->pc = 0x29F380u;
label_29f380:
    // 0x29f380: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29f380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f384:
    // 0x29f384: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x29f384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_29f388:
    // 0x29f388: 0xc04e79c  jal         func_139E70
label_29f38c:
    if (ctx->pc == 0x29F38Cu) {
        ctx->pc = 0x29F38Cu;
            // 0x29f38c: 0x24067530  addiu       $a2, $zero, 0x7530 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
        ctx->pc = 0x29F390u;
        goto label_29f390;
    }
    ctx->pc = 0x29F388u;
    SET_GPR_U32(ctx, 31, 0x29F390u);
    ctx->pc = 0x29F38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F388u;
            // 0x29f38c: 0x24067530  addiu       $a2, $zero, 0x7530 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F390u; }
        if (ctx->pc != 0x29F390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F390u; }
        if (ctx->pc != 0x29F390u) { return; }
    }
    ctx->pc = 0x29F390u;
label_29f390:
    // 0x29f390: 0x3405ea60  ori         $a1, $zero, 0xEA60
    ctx->pc = 0x29f390u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
label_29f394:
    // 0x29f394: 0xc04e704  jal         func_139C10
label_29f398:
    if (ctx->pc == 0x29F398u) {
        ctx->pc = 0x29F398u;
            // 0x29f398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29F39Cu;
        goto label_29f39c;
    }
    ctx->pc = 0x29F394u;
    SET_GPR_U32(ctx, 31, 0x29F39Cu);
    ctx->pc = 0x29F398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F394u;
            // 0x29f398: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F39Cu; }
        if (ctx->pc != 0x29F39Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F39Cu; }
        if (ctx->pc != 0x29F39Cu) { return; }
    }
    ctx->pc = 0x29F39Cu;
label_29f39c:
    // 0x29f39c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29f39cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f3a0:
    // 0x29f3a0: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x29f3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_29f3a4:
    // 0x29f3a4: 0xc04e79c  jal         func_139E70
label_29f3a8:
    if (ctx->pc == 0x29F3A8u) {
        ctx->pc = 0x29F3A8u;
            // 0x29f3a8: 0x3406ea60  ori         $a2, $zero, 0xEA60 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
        ctx->pc = 0x29F3ACu;
        goto label_29f3ac;
    }
    ctx->pc = 0x29F3A4u;
    SET_GPR_U32(ctx, 31, 0x29F3ACu);
    ctx->pc = 0x29F3A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F3A4u;
            // 0x29f3a8: 0x3406ea60  ori         $a2, $zero, 0xEA60 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F3ACu; }
        if (ctx->pc != 0x29F3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F3ACu; }
        if (ctx->pc != 0x29F3ACu) { return; }
    }
    ctx->pc = 0x29F3ACu;
label_29f3ac:
    // 0x29f3ac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29f3b0:
    // 0x29f3b0: 0xc04e704  jal         func_139C10
label_29f3b4:
    if (ctx->pc == 0x29F3B4u) {
        ctx->pc = 0x29F3B4u;
            // 0x29f3b4: 0x3405ea60  ori         $a1, $zero, 0xEA60 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
        ctx->pc = 0x29F3B8u;
        goto label_29f3b8;
    }
    ctx->pc = 0x29F3B0u;
    SET_GPR_U32(ctx, 31, 0x29F3B8u);
    ctx->pc = 0x29F3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F3B0u;
            // 0x29f3b4: 0x3405ea60  ori         $a1, $zero, 0xEA60 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F3B8u; }
        if (ctx->pc != 0x29F3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F3B8u; }
        if (ctx->pc != 0x29F3B8u) { return; }
    }
    ctx->pc = 0x29F3B8u;
label_29f3b8:
    // 0x29f3b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29f3b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f3bc:
    // 0x29f3bc: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x29f3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_29f3c0:
    // 0x29f3c0: 0xc04e79c  jal         func_139E70
label_29f3c4:
    if (ctx->pc == 0x29F3C4u) {
        ctx->pc = 0x29F3C4u;
            // 0x29f3c4: 0x3406ea60  ori         $a2, $zero, 0xEA60 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
        ctx->pc = 0x29F3C8u;
        goto label_29f3c8;
    }
    ctx->pc = 0x29F3C0u;
    SET_GPR_U32(ctx, 31, 0x29F3C8u);
    ctx->pc = 0x29F3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F3C0u;
            // 0x29f3c4: 0x3406ea60  ori         $a2, $zero, 0xEA60 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)60000);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F3C8u; }
        if (ctx->pc != 0x29F3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F3C8u; }
        if (ctx->pc != 0x29F3C8u) { return; }
    }
    ctx->pc = 0x29F3C8u;
label_29f3c8:
    // 0x29f3c8: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x29f3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_29f3cc:
    // 0x29f3cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29f3d0:
    // 0x29f3d0: 0xc04e704  jal         func_139C10
label_29f3d4:
    if (ctx->pc == 0x29F3D4u) {
        ctx->pc = 0x29F3D4u;
            // 0x29f3d4: 0x34454240  ori         $a1, $v0, 0x4240 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16960);
        ctx->pc = 0x29F3D8u;
        goto label_29f3d8;
    }
    ctx->pc = 0x29F3D0u;
    SET_GPR_U32(ctx, 31, 0x29F3D8u);
    ctx->pc = 0x29F3D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F3D0u;
            // 0x29f3d4: 0x34454240  ori         $a1, $v0, 0x4240 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16960);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F3D8u; }
        if (ctx->pc != 0x29F3D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F3D8u; }
        if (ctx->pc != 0x29F3D8u) { return; }
    }
    ctx->pc = 0x29F3D8u;
label_29f3d8:
    // 0x29f3d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29f3d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f3dc:
    // 0x29f3dc: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29f3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_29f3e0:
    // 0x29f3e0: 0x3c020013  lui         $v0, 0x13
    ctx->pc = 0x29f3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)19 << 16));
label_29f3e4:
    // 0x29f3e4: 0x24846070  addiu       $a0, $a0, 0x6070
    ctx->pc = 0x29f3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
label_29f3e8:
    // 0x29f3e8: 0xc04e79c  jal         func_139E70
label_29f3ec:
    if (ctx->pc == 0x29F3ECu) {
        ctx->pc = 0x29F3ECu;
            // 0x29f3ec: 0x3446d620  ori         $a2, $v0, 0xD620 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54816);
        ctx->pc = 0x29F3F0u;
        goto label_29f3f0;
    }
    ctx->pc = 0x29F3E8u;
    SET_GPR_U32(ctx, 31, 0x29F3F0u);
    ctx->pc = 0x29F3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F3E8u;
            // 0x29f3ec: 0x3446d620  ori         $a2, $v0, 0xD620 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54816);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F3F0u; }
        if (ctx->pc != 0x29F3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F3F0u; }
        if (ctx->pc != 0x29F3F0u) { return; }
    }
    ctx->pc = 0x29F3F0u;
label_29f3f0:
    // 0x29f3f0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x29f3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_29f3f4:
    // 0x29f3f4: 0xc0507bc  jal         func_141EF0
label_29f3f8:
    if (ctx->pc == 0x29F3F8u) {
        ctx->pc = 0x29F3F8u;
            // 0x29f3f8: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x29F3FCu;
        goto label_29f3fc;
    }
    ctx->pc = 0x29F3F4u;
    SET_GPR_U32(ctx, 31, 0x29F3FCu);
    ctx->pc = 0x29F3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F3F4u;
            // 0x29f3f8: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141EF0u;
    if (runtime->hasFunction(0x141EF0u)) {
        auto targetFn = runtime->lookupFunction(0x141EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F3FCu; }
        if (ctx->pc != 0x29F3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPacketBuffer__FP9mgCMemoryP9mgCMemory_0x141ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F3FCu; }
        if (ctx->pc != 0x29F3FCu) { return; }
    }
    ctx->pc = 0x29F3FCu;
label_29f3fc:
    // 0x29f3fc: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x29f3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_29f400:
    // 0x29f400: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x29f400u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_29f404:
    // 0x29f404: 0xc050810  jal         func_142040
label_29f408:
    if (ctx->pc == 0x29F408u) {
        ctx->pc = 0x29F408u;
            // 0x29f408: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x29F40Cu;
        goto label_29f40c;
    }
    ctx->pc = 0x29F404u;
    SET_GPR_U32(ctx, 31, 0x29F40Cu);
    ctx->pc = 0x29F408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F404u;
            // 0x29f408: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142040u;
    if (runtime->hasFunction(0x142040u)) {
        auto targetFn = runtime->lookupFunction(0x142040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F40Cu; }
        if (ctx->pc != 0x29F40Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetDataBuffer__FP9mgCMemoryP9mgCMemoryi_0x142040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F40Cu; }
        if (ctx->pc != 0x29F40Cu) { return; }
    }
    ctx->pc = 0x29F40Cu;
label_29f40c:
    // 0x29f40c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x29f40cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_29f410:
    // 0x29f410: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x29f410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_29f414:
    // 0x29f414: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x29f414u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_29f418:
    // 0x29f418: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x29f418u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_29f41c:
    // 0x29f41c: 0xc050da0  jal         func_143680
label_29f420:
    if (ctx->pc == 0x29F420u) {
        ctx->pc = 0x29F420u;
            // 0x29f420: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x29F424u;
        goto label_29f424;
    }
    ctx->pc = 0x29F41Cu;
    SET_GPR_U32(ctx, 31, 0x29F424u);
    ctx->pc = 0x29F420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F41Cu;
            // 0x29f420: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x143680u;
    if (runtime->hasFunction(0x143680u)) {
        auto targetFn = runtime->lookupFunction(0x143680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F424u; }
        if (ctx->pc != 0x29F424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetBackGround__Fffff_0x143680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F424u; }
        if (ctx->pc != 0x29F424u) { return; }
    }
    ctx->pc = 0x29F424u;
label_29f424:
    // 0x29f424: 0x3c0601f0  lui         $a2, 0x1F0
    ctx->pc = 0x29f424u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)496 << 16));
label_29f428:
    // 0x29f428: 0x24040072  addiu       $a0, $zero, 0x72
    ctx->pc = 0x29f428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
label_29f42c:
    // 0x29f42c: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x29f42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_29f430:
    // 0x29f430: 0xc064278  jal         func_1909E0
label_29f434:
    if (ctx->pc == 0x29F434u) {
        ctx->pc = 0x29F434u;
            // 0x29f434: 0x24c66070  addiu       $a2, $a2, 0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24688));
        ctx->pc = 0x29F438u;
        goto label_29f438;
    }
    ctx->pc = 0x29F430u;
    SET_GPR_U32(ctx, 31, 0x29F438u);
    ctx->pc = 0x29F434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F430u;
            // 0x29f434: 0x24c66070  addiu       $a2, $a2, 0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1909E0u;
    if (runtime->hasFunction(0x1909E0u)) {
        auto targetFn = runtime->lookupFunction(0x1909E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F438u; }
        if (ctx->pc != 0x29F438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTextureTable__FiiP9mgCMemory_0x1909e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F438u; }
        if (ctx->pc != 0x29F438u) { return; }
    }
    ctx->pc = 0x29F438u;
label_29f438:
    // 0x29f438: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29f438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_29f43c:
    // 0x29f43c: 0xc04e780  jal         func_139E00
label_29f440:
    if (ctx->pc == 0x29F440u) {
        ctx->pc = 0x29F440u;
            // 0x29f440: 0x24846070  addiu       $a0, $a0, 0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
        ctx->pc = 0x29F444u;
        goto label_29f444;
    }
    ctx->pc = 0x29F43Cu;
    SET_GPR_U32(ctx, 31, 0x29F444u);
    ctx->pc = 0x29F440u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F43Cu;
            // 0x29f440: 0x24846070  addiu       $a0, $a0, 0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F444u; }
        if (ctx->pc != 0x29F444u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F444u; }
        if (ctx->pc != 0x29F444u) { return; }
    }
    ctx->pc = 0x29F444u;
label_29f444:
    // 0x29f444: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29f444u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_29f448:
    // 0x29f448: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x29f448u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_29f44c:
    // 0x29f44c: 0xc04e748  jal         func_139D20
label_29f450:
    if (ctx->pc == 0x29F450u) {
        ctx->pc = 0x29F450u;
            // 0x29f450: 0x24846070  addiu       $a0, $a0, 0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
        ctx->pc = 0x29F454u;
        goto label_29f454;
    }
    ctx->pc = 0x29F44Cu;
    SET_GPR_U32(ctx, 31, 0x29F454u);
    ctx->pc = 0x29F450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F44Cu;
            // 0x29f450: 0x24846070  addiu       $a0, $a0, 0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F454u; }
        if (ctx->pc != 0x29F454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F454u; }
        if (ctx->pc != 0x29F454u) { return; }
    }
    ctx->pc = 0x29F454u;
label_29f454:
    // 0x29f454: 0x240400a4  addiu       $a0, $zero, 0xA4
    ctx->pc = 0x29f454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
label_29f458:
    // 0x29f458: 0xc04e638  jal         func_1398E0
label_29f45c:
    if (ctx->pc == 0x29F45Cu) {
        ctx->pc = 0x29F45Cu;
            // 0x29f45c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29F460u;
        goto label_29f460;
    }
    ctx->pc = 0x29F458u;
    SET_GPR_U32(ctx, 31, 0x29F460u);
    ctx->pc = 0x29F45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F458u;
            // 0x29f45c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F460u; }
        if (ctx->pc != 0x29F460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F460u; }
        if (ctx->pc != 0x29F460u) { return; }
    }
    ctx->pc = 0x29F460u;
label_29f460:
    // 0x29f460: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_29f464:
    if (ctx->pc == 0x29F464u) {
        ctx->pc = 0x29F464u;
            // 0x29f464: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29F468u;
        goto label_29f468;
    }
    ctx->pc = 0x29F460u;
    {
        const bool branch_taken_0x29f460 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F460u;
            // 0x29f464: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f460) {
            ctx->pc = 0x29F480u;
            goto label_29f480;
        }
    }
    ctx->pc = 0x29F468u;
label_29f468:
    // 0x29f468: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f468u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29f46c:
    // 0x29f46c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29f46cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f470:
    // 0x29f470: 0xc049c86  jal         func_127218
label_29f474:
    if (ctx->pc == 0x29F474u) {
        ctx->pc = 0x29F474u;
            // 0x29f474: 0x240600a4  addiu       $a2, $zero, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
        ctx->pc = 0x29F478u;
        goto label_29f478;
    }
    ctx->pc = 0x29F470u;
    SET_GPR_U32(ctx, 31, 0x29F478u);
    ctx->pc = 0x29F474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F470u;
            // 0x29f474: 0x240600a4  addiu       $a2, $zero, 0xA4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F478u; }
        if (ctx->pc != 0x29F478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F478u; }
        if (ctx->pc != 0x29F478u) { return; }
    }
    ctx->pc = 0x29F478u;
label_29f478:
    // 0x29f478: 0xc0bd86c  jal         func_2F61B0
label_29f47c:
    if (ctx->pc == 0x29F47Cu) {
        ctx->pc = 0x29F47Cu;
            // 0x29f47c: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->pc = 0x29F480u;
        goto label_29f480;
    }
    ctx->pc = 0x29F478u;
    SET_GPR_U32(ctx, 31, 0x29F480u);
    ctx->pc = 0x29F47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F478u;
            // 0x29f47c: 0x26040048  addiu       $a0, $s0, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F61B0u;
    if (runtime->hasFunction(0x2F61B0u)) {
        auto targetFn = runtime->lookupFunction(0x2F61B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F480u; }
        if (ctx->pc != 0x29F480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSV_CONFIG_OPTION__FP16SV_CONFIG_OPTION_0x2f61b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F480u; }
        if (ctx->pc != 0x29F480u) { return; }
    }
    ctx->pc = 0x29F480u;
label_29f480:
    // 0x29f480: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29f480u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_29f484:
    // 0x29f484: 0x24052396  addiu       $a1, $zero, 0x2396
    ctx->pc = 0x29f484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9110));
label_29f488:
    // 0x29f488: 0x24846070  addiu       $a0, $a0, 0x6070
    ctx->pc = 0x29f488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
label_29f48c:
    // 0x29f48c: 0xc04e748  jal         func_139D20
label_29f490:
    if (ctx->pc == 0x29F490u) {
        ctx->pc = 0x29F490u;
            // 0x29f490: 0xaf90997c  sw          $s0, -0x6684($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941052), GPR_U32(ctx, 16));
        ctx->pc = 0x29F494u;
        goto label_29f494;
    }
    ctx->pc = 0x29F48Cu;
    SET_GPR_U32(ctx, 31, 0x29F494u);
    ctx->pc = 0x29F490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F48Cu;
            // 0x29f490: 0xaf90997c  sw          $s0, -0x6684($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941052), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F494u; }
        if (ctx->pc != 0x29F494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F494u; }
        if (ctx->pc != 0x29F494u) { return; }
    }
    ctx->pc = 0x29F494u;
label_29f494:
    // 0x29f494: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x29f494u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_29f498:
    // 0x29f498: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29f498u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f49c:
    // 0x29f49c: 0xc04e638  jal         func_1398E0
label_29f4a0:
    if (ctx->pc == 0x29F4A0u) {
        ctx->pc = 0x29F4A0u;
            // 0x29f4a0: 0x34643940  ori         $a0, $v1, 0x3940 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14656);
        ctx->pc = 0x29F4A4u;
        goto label_29f4a4;
    }
    ctx->pc = 0x29F49Cu;
    SET_GPR_U32(ctx, 31, 0x29F4A4u);
    ctx->pc = 0x29F4A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F49Cu;
            // 0x29f4a0: 0x34643940  ori         $a0, $v1, 0x3940 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)14656);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F4A4u; }
        if (ctx->pc != 0x29F4A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F4A4u; }
        if (ctx->pc != 0x29F4A4u) { return; }
    }
    ctx->pc = 0x29F4A4u;
label_29f4a4:
    // 0x29f4a4: 0xaf8299e0  sw          $v0, -0x6620($gp)
    ctx->pc = 0x29f4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941152), GPR_U32(ctx, 2));
label_29f4a8:
    // 0x29f4a8: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29f4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_29f4ac:
    // 0x29f4ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29f4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29f4b0:
    // 0x29f4b0: 0x24846070  addiu       $a0, $a0, 0x6070
    ctx->pc = 0x29f4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
label_29f4b4:
    // 0x29f4b4: 0xa3829990  sb          $v0, -0x6670($gp)
    ctx->pc = 0x29f4b4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941072), (uint8_t)GPR_U32(ctx, 2));
label_29f4b8:
    // 0x29f4b8: 0x24050112  addiu       $a1, $zero, 0x112
    ctx->pc = 0x29f4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 274));
label_29f4bc:
    // 0x29f4bc: 0xa3809998  sb          $zero, -0x6668($gp)
    ctx->pc = 0x29f4bcu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941080), (uint8_t)GPR_U32(ctx, 0));
label_29f4c0:
    // 0x29f4c0: 0xc04e748  jal         func_139D20
label_29f4c4:
    if (ctx->pc == 0x29F4C4u) {
        ctx->pc = 0x29F4C4u;
            // 0x29f4c4: 0xa780999c  sh          $zero, -0x6664($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941084), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x29F4C8u;
        goto label_29f4c8;
    }
    ctx->pc = 0x29F4C0u;
    SET_GPR_U32(ctx, 31, 0x29F4C8u);
    ctx->pc = 0x29F4C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F4C0u;
            // 0x29f4c4: 0xa780999c  sh          $zero, -0x6664($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294941084), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F4C8u; }
        if (ctx->pc != 0x29F4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F4C8u; }
        if (ctx->pc != 0x29F4C8u) { return; }
    }
    ctx->pc = 0x29F4C8u;
label_29f4c8:
    // 0x29f4c8: 0x24041100  addiu       $a0, $zero, 0x1100
    ctx->pc = 0x29f4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4352));
label_29f4cc:
    // 0x29f4cc: 0xc04e638  jal         func_1398E0
label_29f4d0:
    if (ctx->pc == 0x29F4D0u) {
        ctx->pc = 0x29F4D0u;
            // 0x29f4d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29F4D4u;
        goto label_29f4d4;
    }
    ctx->pc = 0x29F4CCu;
    SET_GPR_U32(ctx, 31, 0x29F4D4u);
    ctx->pc = 0x29F4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F4CCu;
            // 0x29f4d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F4D4u; }
        if (ctx->pc != 0x29F4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F4D4u; }
        if (ctx->pc != 0x29F4D4u) { return; }
    }
    ctx->pc = 0x29F4D4u;
label_29f4d4:
    // 0x29f4d4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_29f4d8:
    if (ctx->pc == 0x29F4D8u) {
        ctx->pc = 0x29F4DCu;
        goto label_29f4dc;
    }
    ctx->pc = 0x29F4D4u;
    {
        const bool branch_taken_0x29f4d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f4d4) {
            ctx->pc = 0x29F4E4u;
            goto label_29f4e4;
        }
    }
    ctx->pc = 0x29F4DCu;
label_29f4dc:
    // 0x29f4dc: 0xc0bc598  jal         func_2F1660
label_29f4e0:
    if (ctx->pc == 0x29F4E0u) {
        ctx->pc = 0x29F4E0u;
            // 0x29f4e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29F4E4u;
        goto label_29f4e4;
    }
    ctx->pc = 0x29F4DCu;
    SET_GPR_U32(ctx, 31, 0x29F4E4u);
    ctx->pc = 0x29F4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F4DCu;
            // 0x29f4e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1660u;
    if (runtime->hasFunction(0x2F1660u)) {
        auto targetFn = runtime->lookupFunction(0x2F1660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F4E4u; }
        if (ctx->pc != 0x29F4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__18CMemoryCardManagerFv_0x2f1660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F4E4u; }
        if (ctx->pc != 0x29F4E4u) { return; }
    }
    ctx->pc = 0x29F4E4u;
label_29f4e4:
    // 0x29f4e4: 0x3c0501f0  lui         $a1, 0x1F0
    ctx->pc = 0x29f4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)496 << 16));
label_29f4e8:
    // 0x29f4e8: 0xaf8299a0  sw          $v0, -0x6660($gp)
    ctx->pc = 0x29f4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941088), GPR_U32(ctx, 2));
label_29f4ec:
    // 0x29f4ec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x29f4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f4f0:
    // 0x29f4f0: 0xc0bc5a4  jal         func_2F1690
label_29f4f4:
    if (ctx->pc == 0x29F4F4u) {
        ctx->pc = 0x29F4F4u;
            // 0x29f4f4: 0x24a56070  addiu       $a1, $a1, 0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24688));
        ctx->pc = 0x29F4F8u;
        goto label_29f4f8;
    }
    ctx->pc = 0x29F4F0u;
    SET_GPR_U32(ctx, 31, 0x29F4F8u);
    ctx->pc = 0x29F4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F4F0u;
            // 0x29f4f4: 0x24a56070  addiu       $a1, $a1, 0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1690u;
    if (runtime->hasFunction(0x2F1690u)) {
        auto targetFn = runtime->lookupFunction(0x2F1690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F4F8u; }
        if (ctx->pc != 0x29F4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__18CMemoryCardManagerFP9mgCMemory_0x2f1690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F4F8u; }
        if (ctx->pc != 0x29F4F8u) { return; }
    }
    ctx->pc = 0x29F4F8u;
label_29f4f8:
    // 0x29f4f8: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29f4f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_29f4fc:
    // 0x29f4fc: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x29f4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_29f500:
    // 0x29f500: 0xc04e748  jal         func_139D20
label_29f504:
    if (ctx->pc == 0x29F504u) {
        ctx->pc = 0x29F504u;
            // 0x29f504: 0x24846070  addiu       $a0, $a0, 0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
        ctx->pc = 0x29F508u;
        goto label_29f508;
    }
    ctx->pc = 0x29F500u;
    SET_GPR_U32(ctx, 31, 0x29F508u);
    ctx->pc = 0x29F504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F500u;
            // 0x29f504: 0x24846070  addiu       $a0, $a0, 0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F508u; }
        if (ctx->pc != 0x29F508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F508u; }
        if (ctx->pc != 0x29F508u) { return; }
    }
    ctx->pc = 0x29F508u;
label_29f508:
    // 0x29f508: 0x240400c0  addiu       $a0, $zero, 0xC0
    ctx->pc = 0x29f508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
label_29f50c:
    // 0x29f50c: 0xc04e638  jal         func_1398E0
label_29f510:
    if (ctx->pc == 0x29F510u) {
        ctx->pc = 0x29F510u;
            // 0x29f510: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29F514u;
        goto label_29f514;
    }
    ctx->pc = 0x29F50Cu;
    SET_GPR_U32(ctx, 31, 0x29F514u);
    ctx->pc = 0x29F510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F50Cu;
            // 0x29f510: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F514u; }
        if (ctx->pc != 0x29F514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F514u; }
        if (ctx->pc != 0x29F514u) { return; }
    }
    ctx->pc = 0x29F514u;
label_29f514:
    // 0x29f514: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_29f518:
    if (ctx->pc == 0x29F518u) {
        ctx->pc = 0x29F51Cu;
        goto label_29f51c;
    }
    ctx->pc = 0x29F514u;
    {
        const bool branch_taken_0x29f514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f514) {
            ctx->pc = 0x29F540u;
            goto label_29f540;
        }
    }
    ctx->pc = 0x29F51Cu;
label_29f51c:
    // 0x29f51c: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x29f51cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
label_29f520:
    // 0x29f520: 0x3c0441f0  lui         $a0, 0x41F0
    ctx->pc = 0x29f520u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16880 << 16));
label_29f524:
    // 0x29f524: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x29f524u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_29f528:
    // 0x29f528: 0x44846800  mtc1        $a0, $f13
    ctx->pc = 0x29f528u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_29f52c:
    // 0x29f52c: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x29f52cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
label_29f530:
    // 0x29f530: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x29f530u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_29f534:
    // 0x29f534: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x29f534u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_29f538:
    // 0x29f538: 0xc04c6a4  jal         func_131A90
label_29f53c:
    if (ctx->pc == 0x29F53Cu) {
        ctx->pc = 0x29F53Cu;
            // 0x29f53c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29F540u;
        goto label_29f540;
    }
    ctx->pc = 0x29F538u;
    SET_GPR_U32(ctx, 31, 0x29F540u);
    ctx->pc = 0x29F53Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F538u;
            // 0x29f53c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A90u;
    if (runtime->hasFunction(0x131A90u)) {
        auto targetFn = runtime->lookupFunction(0x131A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F540u; }
        if (ctx->pc != 0x29F540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__15mgCCameraFollowFffff_0x131a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F540u; }
        if (ctx->pc != 0x29F540u) { return; }
    }
    ctx->pc = 0x29F540u;
label_29f540:
    // 0x29f540: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29f540u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_29f544:
    // 0x29f544: 0xaf829948  sw          $v0, -0x66B8($gp)
    ctx->pc = 0x29f544u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941000), GPR_U32(ctx, 2));
label_29f548:
    // 0x29f548: 0x24846070  addiu       $a0, $a0, 0x6070
    ctx->pc = 0x29f548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
label_29f54c:
    // 0x29f54c: 0xc04e748  jal         func_139D20
label_29f550:
    if (ctx->pc == 0x29F550u) {
        ctx->pc = 0x29F550u;
            // 0x29f550: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x29F554u;
        goto label_29f554;
    }
    ctx->pc = 0x29F54Cu;
    SET_GPR_U32(ctx, 31, 0x29F554u);
    ctx->pc = 0x29F550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F54Cu;
            // 0x29f550: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F554u; }
        if (ctx->pc != 0x29F554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F554u; }
        if (ctx->pc != 0x29F554u) { return; }
    }
    ctx->pc = 0x29F554u;
label_29f554:
    // 0x29f554: 0x24040070  addiu       $a0, $zero, 0x70
    ctx->pc = 0x29f554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_29f558:
    // 0x29f558: 0xc04e638  jal         func_1398E0
label_29f55c:
    if (ctx->pc == 0x29F55Cu) {
        ctx->pc = 0x29F55Cu;
            // 0x29f55c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29F560u;
        goto label_29f560;
    }
    ctx->pc = 0x29F558u;
    SET_GPR_U32(ctx, 31, 0x29F560u);
    ctx->pc = 0x29F55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F558u;
            // 0x29f55c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F560u; }
        if (ctx->pc != 0x29F560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F560u; }
        if (ctx->pc != 0x29F560u) { return; }
    }
    ctx->pc = 0x29F560u;
label_29f560:
    // 0x29f560: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_29f564:
    if (ctx->pc == 0x29F564u) {
        ctx->pc = 0x29F568u;
        goto label_29f568;
    }
    ctx->pc = 0x29F560u;
    {
        const bool branch_taken_0x29f560 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f560) {
            ctx->pc = 0x29F578u;
            goto label_29f578;
        }
    }
    ctx->pc = 0x29F568u;
label_29f568:
    // 0x29f568: 0x3c034100  lui         $v1, 0x4100
    ctx->pc = 0x29f568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16640 << 16));
label_29f56c:
    // 0x29f56c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x29f56cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_29f570:
    // 0x29f570: 0xc04c58c  jal         func_131630
label_29f574:
    if (ctx->pc == 0x29F574u) {
        ctx->pc = 0x29F574u;
            // 0x29f574: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29F578u;
        goto label_29f578;
    }
    ctx->pc = 0x29F570u;
    SET_GPR_U32(ctx, 31, 0x29F578u);
    ctx->pc = 0x29F574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F570u;
            // 0x29f574: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131630u;
    if (runtime->hasFunction(0x131630u)) {
        auto targetFn = runtime->lookupFunction(0x131630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F578u; }
        if (ctx->pc != 0x29F578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9mgCCameraFf_0x131630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F578u; }
        if (ctx->pc != 0x29F578u) { return; }
    }
    ctx->pc = 0x29F578u;
label_29f578:
    // 0x29f578: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29f578u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_29f57c:
    // 0x29f57c: 0xaf82994c  sw          $v0, -0x66B4($gp)
    ctx->pc = 0x29f57cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941004), GPR_U32(ctx, 2));
label_29f580:
    // 0x29f580: 0x24846070  addiu       $a0, $a0, 0x6070
    ctx->pc = 0x29f580u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
label_29f584:
    // 0x29f584: 0xc04e748  jal         func_139D20
label_29f588:
    if (ctx->pc == 0x29F588u) {
        ctx->pc = 0x29F588u;
            // 0x29f588: 0x24050123  addiu       $a1, $zero, 0x123 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
        ctx->pc = 0x29F58Cu;
        goto label_29f58c;
    }
    ctx->pc = 0x29F584u;
    SET_GPR_U32(ctx, 31, 0x29F58Cu);
    ctx->pc = 0x29F588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F584u;
            // 0x29f588: 0x24050123  addiu       $a1, $zero, 0x123 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 291));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F58Cu; }
        if (ctx->pc != 0x29F58Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F58Cu; }
        if (ctx->pc != 0x29F58Cu) { return; }
    }
    ctx->pc = 0x29F58Cu;
label_29f58c:
    // 0x29f58c: 0x24041208  addiu       $a0, $zero, 0x1208
    ctx->pc = 0x29f58cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4616));
label_29f590:
    // 0x29f590: 0xc04e638  jal         func_1398E0
label_29f594:
    if (ctx->pc == 0x29F594u) {
        ctx->pc = 0x29F594u;
            // 0x29f594: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29F598u;
        goto label_29f598;
    }
    ctx->pc = 0x29F590u;
    SET_GPR_U32(ctx, 31, 0x29F598u);
    ctx->pc = 0x29F594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F590u;
            // 0x29f594: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F598u; }
        if (ctx->pc != 0x29F598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F598u; }
        if (ctx->pc != 0x29F598u) { return; }
    }
    ctx->pc = 0x29F598u;
label_29f598:
    // 0x29f598: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_29f59c:
    if (ctx->pc == 0x29F59Cu) {
        ctx->pc = 0x29F5A0u;
        goto label_29f5a0;
    }
    ctx->pc = 0x29F598u;
    {
        const bool branch_taken_0x29f598 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f598) {
            ctx->pc = 0x29F5A8u;
            goto label_29f5a8;
        }
    }
    ctx->pc = 0x29F5A0u;
label_29f5a0:
    // 0x29f5a0: 0xc068844  jal         func_1A2110
label_29f5a4:
    if (ctx->pc == 0x29F5A4u) {
        ctx->pc = 0x29F5A4u;
            // 0x29f5a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29F5A8u;
        goto label_29f5a8;
    }
    ctx->pc = 0x29F5A0u;
    SET_GPR_U32(ctx, 31, 0x29F5A8u);
    ctx->pc = 0x29F5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F5A0u;
            // 0x29f5a4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2110u;
    if (runtime->hasFunction(0x1A2110u)) {
        auto targetFn = runtime->lookupFunction(0x1A2110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F5A8u; }
        if (ctx->pc != 0x29F5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10CWaveTableFv_0x1a2110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F5A8u; }
        if (ctx->pc != 0x29F5A8u) { return; }
    }
    ctx->pc = 0x29F5A8u;
label_29f5a8:
    // 0x29f5a8: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29f5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_29f5ac:
    // 0x29f5ac: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x29f5acu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
label_29f5b0:
    // 0x29f5b0: 0xaf829950  sw          $v0, -0x66B0($gp)
    ctx->pc = 0x29f5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941008), GPR_U32(ctx, 2));
label_29f5b4:
    // 0x29f5b4: 0x24846070  addiu       $a0, $a0, 0x6070
    ctx->pc = 0x29f5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
label_29f5b8:
    // 0x29f5b8: 0xc04e780  jal         func_139E00
label_29f5bc:
    if (ctx->pc == 0x29F5BCu) {
        ctx->pc = 0x29F5BCu;
            // 0x29f5bc: 0x26101ef0  addiu       $s0, $s0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
        ctx->pc = 0x29F5C0u;
        goto label_29f5c0;
    }
    ctx->pc = 0x29F5B8u;
    SET_GPR_U32(ctx, 31, 0x29F5C0u);
    ctx->pc = 0x29F5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F5B8u;
            // 0x29f5bc: 0x26101ef0  addiu       $s0, $s0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F5C0u; }
        if (ctx->pc != 0x29F5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F5C0u; }
        if (ctx->pc != 0x29F5C0u) { return; }
    }
    ctx->pc = 0x29F5C0u;
label_29f5c0:
    // 0x29f5c0: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29f5c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_29f5c4:
    // 0x29f5c4: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29f5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_29f5c8:
    // 0x29f5c8: 0x8c236094  lw          $v1, 0x6094($at)
    ctx->pc = 0x29f5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24724)));
label_29f5cc:
    // 0x29f5cc: 0x248460a0  addiu       $a0, $a0, 0x60A0
    ctx->pc = 0x29f5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24736));
label_29f5d0:
    // 0x29f5d0: 0x3c060004  lui         $a2, 0x4
    ctx->pc = 0x29f5d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4 << 16));
label_29f5d4:
    // 0x29f5d4: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29f5d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_29f5d8:
    // 0x29f5d8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29f5d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_29f5dc:
    // 0x29f5dc: 0x8c226090  lw          $v0, 0x6090($at)
    ctx->pc = 0x29f5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24720)));
label_29f5e0:
    // 0x29f5e0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x29f5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29f5e4:
    // 0x29f5e4: 0xc04e79c  jal         func_139E70
label_29f5e8:
    if (ctx->pc == 0x29F5E8u) {
        ctx->pc = 0x29F5E8u;
            // 0x29f5e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29F5ECu;
        goto label_29f5ec;
    }
    ctx->pc = 0x29F5E4u;
    SET_GPR_U32(ctx, 31, 0x29F5ECu);
    ctx->pc = 0x29F5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F5E4u;
            // 0x29f5e8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F5ECu; }
        if (ctx->pc != 0x29F5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F5ECu; }
        if (ctx->pc != 0x29F5ECu) { return; }
    }
    ctx->pc = 0x29F5ECu;
label_29f5ec:
    // 0x29f5ec: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29f5ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_29f5f0:
    // 0x29f5f0: 0x3c050006  lui         $a1, 0x6
    ctx->pc = 0x29f5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)6 << 16));
label_29f5f4:
    // 0x29f5f4: 0xc04e748  jal         func_139D20
label_29f5f8:
    if (ctx->pc == 0x29F5F8u) {
        ctx->pc = 0x29F5F8u;
            // 0x29f5f8: 0x24846070  addiu       $a0, $a0, 0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
        ctx->pc = 0x29F5FCu;
        goto label_29f5fc;
    }
    ctx->pc = 0x29F5F4u;
    SET_GPR_U32(ctx, 31, 0x29F5FCu);
    ctx->pc = 0x29F5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F5F4u;
            // 0x29f5f8: 0x24846070  addiu       $a0, $a0, 0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F5FCu; }
        if (ctx->pc != 0x29F5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F5FCu; }
        if (ctx->pc != 0x29F5FCu) { return; }
    }
    ctx->pc = 0x29F5FCu;
label_29f5fc:
    // 0x29f5fc: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29f5fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_29f600:
    // 0x29f600: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29f600u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_29f604:
    // 0x29f604: 0x8c236094  lw          $v1, 0x6094($at)
    ctx->pc = 0x29f604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24724)));
label_29f608:
    // 0x29f608: 0x248460d0  addiu       $a0, $a0, 0x60D0
    ctx->pc = 0x29f608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24784));
label_29f60c:
    // 0x29f60c: 0x24062800  addiu       $a2, $zero, 0x2800
    ctx->pc = 0x29f60cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
label_29f610:
    // 0x29f610: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29f610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_29f614:
    // 0x29f614: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29f614u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_29f618:
    // 0x29f618: 0x8c226090  lw          $v0, 0x6090($at)
    ctx->pc = 0x29f618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24720)));
label_29f61c:
    // 0x29f61c: 0xc04e79c  jal         func_139E70
label_29f620:
    if (ctx->pc == 0x29F620u) {
        ctx->pc = 0x29F620u;
            // 0x29f620: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x29F624u;
        goto label_29f624;
    }
    ctx->pc = 0x29F61Cu;
    SET_GPR_U32(ctx, 31, 0x29F624u);
    ctx->pc = 0x29F620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F61Cu;
            // 0x29f620: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F624u; }
        if (ctx->pc != 0x29F624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F624u; }
        if (ctx->pc != 0x29F624u) { return; }
    }
    ctx->pc = 0x29F624u;
label_29f624:
    // 0x29f624: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29f624u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_29f628:
    // 0x29f628: 0x24052800  addiu       $a1, $zero, 0x2800
    ctx->pc = 0x29f628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10240));
label_29f62c:
    // 0x29f62c: 0xc04e748  jal         func_139D20
label_29f630:
    if (ctx->pc == 0x29F630u) {
        ctx->pc = 0x29F630u;
            // 0x29f630: 0x24846070  addiu       $a0, $a0, 0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
        ctx->pc = 0x29F634u;
        goto label_29f634;
    }
    ctx->pc = 0x29F62Cu;
    SET_GPR_U32(ctx, 31, 0x29F634u);
    ctx->pc = 0x29F630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F62Cu;
            // 0x29f630: 0x24846070  addiu       $a0, $a0, 0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F634u; }
        if (ctx->pc != 0x29F634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F634u; }
        if (ctx->pc != 0x29F634u) { return; }
    }
    ctx->pc = 0x29F634u;
label_29f634:
    // 0x29f634: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x29f634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
label_29f638:
    // 0x29f638: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x29f638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
label_29f63c:
    // 0x29f63c: 0xaf839960  sw          $v1, -0x66A0($gp)
    ctx->pc = 0x29f63cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941024), GPR_U32(ctx, 3));
label_29f640:
    // 0x29f640: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29f640u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f644:
    // 0x29f644: 0xac51003c  sw          $s1, 0x3C($v0)
    ctx->pc = 0x29f644u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 17));
label_29f648:
    // 0x29f648: 0x8f869948  lw          $a2, -0x66B8($gp)
    ctx->pc = 0x29f648u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941000)));
label_29f64c:
    // 0x29f64c: 0x8f8499ec  lw          $a0, -0x6614($gp)
    ctx->pc = 0x29f64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
label_29f650:
    // 0x29f650: 0xc0a0dd0  jal         func_283740
label_29f654:
    if (ctx->pc == 0x29F654u) {
        ctx->pc = 0x29F654u;
            // 0x29f654: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29F658u;
        goto label_29f658;
    }
    ctx->pc = 0x29F650u;
    SET_GPR_U32(ctx, 31, 0x29F658u);
    ctx->pc = 0x29F654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F650u;
            // 0x29f654: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283740u;
    if (runtime->hasFunction(0x283740u)) {
        auto targetFn = runtime->lookupFunction(0x283740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F658u; }
        if (ctx->pc != 0x29F658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignCamera__6CSceneFiP9mgCCameraPc_0x283740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F658u; }
        if (ctx->pc != 0x29F658u) { return; }
    }
    ctx->pc = 0x29F658u;
label_29f658:
    // 0x29f658: 0x8f8499ec  lw          $a0, -0x6614($gp)
    ctx->pc = 0x29f658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
label_29f65c:
    // 0x29f65c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29f65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29f660:
    // 0x29f660: 0x8f86994c  lw          $a2, -0x66B4($gp)
    ctx->pc = 0x29f660u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941004)));
label_29f664:
    // 0x29f664: 0xc0a0dd0  jal         func_283740
label_29f668:
    if (ctx->pc == 0x29F668u) {
        ctx->pc = 0x29F668u;
            // 0x29f668: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29F66Cu;
        goto label_29f66c;
    }
    ctx->pc = 0x29F664u;
    SET_GPR_U32(ctx, 31, 0x29F66Cu);
    ctx->pc = 0x29F668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F664u;
            // 0x29f668: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283740u;
    if (runtime->hasFunction(0x283740u)) {
        auto targetFn = runtime->lookupFunction(0x283740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F66Cu; }
        if (ctx->pc != 0x29F66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignCamera__6CSceneFiP9mgCCameraPc_0x283740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F66Cu; }
        if (ctx->pc != 0x29F66Cu) { return; }
    }
    ctx->pc = 0x29F66Cu;
label_29f66c:
    // 0x29f66c: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x29f66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
label_29f670:
    // 0x29f670: 0x3c0601f0  lui         $a2, 0x1F0
    ctx->pc = 0x29f670u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)496 << 16));
label_29f674:
    // 0x29f674: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x29f674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29f678:
    // 0x29f678: 0xac402e54  sw          $zero, 0x2E54($v0)
    ctx->pc = 0x29f678u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11860), GPR_U32(ctx, 0));
label_29f67c:
    // 0x29f67c: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x29f67cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
label_29f680:
    // 0x29f680: 0xac402e58  sw          $zero, 0x2E58($v0)
    ctx->pc = 0x29f680u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11864), GPR_U32(ctx, 0));
label_29f684:
    // 0x29f684: 0x8f8499ec  lw          $a0, -0x6614($gp)
    ctx->pc = 0x29f684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
label_29f688:
    // 0x29f688: 0xc0a0c54  jal         func_283150
label_29f68c:
    if (ctx->pc == 0x29F68Cu) {
        ctx->pc = 0x29F68Cu;
            // 0x29f68c: 0x24c660a0  addiu       $a2, $a2, 0x60A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24736));
        ctx->pc = 0x29F690u;
        goto label_29f690;
    }
    ctx->pc = 0x29F688u;
    SET_GPR_U32(ctx, 31, 0x29F690u);
    ctx->pc = 0x29F68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F688u;
            // 0x29f68c: 0x24c660a0  addiu       $a2, $a2, 0x60A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 24736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283150u;
    if (runtime->hasFunction(0x283150u)) {
        auto targetFn = runtime->lookupFunction(0x283150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F690u; }
        if (ctx->pc != 0x29F690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__6CSceneFiP9mgCMemory_0x283150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F690u; }
        if (ctx->pc != 0x29F690u) { return; }
    }
    ctx->pc = 0x29F690u;
label_29f690:
    // 0x29f690: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x29f690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
label_29f694:
    // 0x29f694: 0x3c0301f0  lui         $v1, 0x1F0
    ctx->pc = 0x29f694u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)496 << 16));
label_29f698:
    // 0x29f698: 0x246360d0  addiu       $v1, $v1, 0x60D0
    ctx->pc = 0x29f698u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24784));
label_29f69c:
    // 0x29f69c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x29f69cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_29f6a0:
    // 0x29f6a0: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29f6a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_29f6a4:
    // 0x29f6a4: 0x2484e000  addiu       $a0, $a0, -0x2000
    ctx->pc = 0x29f6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959104));
label_29f6a8:
    // 0x29f6a8: 0xac430038  sw          $v1, 0x38($v0)
    ctx->pc = 0x29f6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
label_29f6ac:
    // 0x29f6ac: 0x8c236094  lw          $v1, 0x6094($at)
    ctx->pc = 0x29f6acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24724)));
label_29f6b0:
    // 0x29f6b0: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29f6b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_29f6b4:
    // 0x29f6b4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29f6b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_29f6b8:
    // 0x29f6b8: 0x8c226090  lw          $v0, 0x6090($at)
    ctx->pc = 0x29f6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24720)));
label_29f6bc:
    // 0x29f6bc: 0xc0b49fc  jal         func_2D27F0
label_29f6c0:
    if (ctx->pc == 0x29F6C0u) {
        ctx->pc = 0x29F6C0u;
            // 0x29f6c0: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x29F6C4u;
        goto label_29f6c4;
    }
    ctx->pc = 0x29F6BCu;
    SET_GPR_U32(ctx, 31, 0x29F6C4u);
    ctx->pc = 0x29F6C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F6BCu;
            // 0x29f6c0: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27F0u;
    if (runtime->hasFunction(0x2D27F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F6C4u; }
        if (ctx->pc != 0x29F6C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapNo__FPc_0x2d27f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F6C4u; }
        if (ctx->pc != 0x29F6C4u) { return; }
    }
    ctx->pc = 0x29F6C4u;
label_29f6c4:
    // 0x29f6c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x29f6c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f6c8:
    // 0x29f6c8: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x29f6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_29f6cc:
    // 0x29f6cc: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x29f6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
label_29f6d0:
    // 0x29f6d0: 0xc0b7b10  jal         func_2DEC40
label_29f6d4:
    if (ctx->pc == 0x29F6D4u) {
        ctx->pc = 0x29F6D4u;
            // 0x29f6d4: 0xac402e5c  sw          $zero, 0x2E5C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 11868), GPR_U32(ctx, 0));
        ctx->pc = 0x29F6D8u;
        goto label_29f6d8;
    }
    ctx->pc = 0x29F6D0u;
    SET_GPR_U32(ctx, 31, 0x29F6D8u);
    ctx->pc = 0x29F6D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F6D0u;
            // 0x29f6d4: 0xac402e5c  sw          $zero, 0x2E5C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 11868), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DEC40u;
    if (runtime->hasFunction(0x2DEC40u)) {
        auto targetFn = runtime->lookupFunction(0x2DEC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F6D8u; }
        if (ctx->pc != 0x29F6D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__14MapJumpMapInfoFv_0x2dec40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F6D8u; }
        if (ctx->pc != 0x29F6D8u) { return; }
    }
    ctx->pc = 0x29F6D8u;
label_29f6d8:
    // 0x29f6d8: 0xc0a1454  jal         func_285150
label_29f6dc:
    if (ctx->pc == 0x29F6DCu) {
        ctx->pc = 0x29F6DCu;
            // 0x29f6dc: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->pc = 0x29F6E0u;
        goto label_29f6e0;
    }
    ctx->pc = 0x29F6D8u;
    SET_GPR_U32(ctx, 31, 0x29F6E0u);
    ctx->pc = 0x29F6DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F6D8u;
            // 0x29f6dc: 0x27a401c0  addiu       $a0, $sp, 0x1C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285150u;
    if (runtime->hasFunction(0x285150u)) {
        auto targetFn = runtime->lookupFunction(0x285150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F6E0u; }
        if (ctx->pc != 0x29F6E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__17SCN_LOADMAP_INFO2Fv_0x285150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F6E0u; }
        if (ctx->pc != 0x29F6E0u) { return; }
    }
    ctx->pc = 0x29F6E0u;
label_29f6e0:
    // 0x29f6e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29f6e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29f6e4:
    // 0x29f6e4: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x29f6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_29f6e8:
    // 0x29f6e8: 0xafa201a8  sw          $v0, 0x1A8($sp)
    ctx->pc = 0x29f6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
label_29f6ec:
    // 0x29f6ec: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x29f6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_29f6f0:
    // 0x29f6f0: 0xafa001a0  sw          $zero, 0x1A0($sp)
    ctx->pc = 0x29f6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 0));
label_29f6f4:
    // 0x29f6f4: 0xafa201ac  sw          $v0, 0x1AC($sp)
    ctx->pc = 0x29f6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
label_29f6f8:
    // 0x29f6f8: 0xafa001a4  sw          $zero, 0x1A4($sp)
    ctx->pc = 0x29f6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 0));
label_29f6fc:
    // 0x29f6fc: 0xc0b7b1c  jal         func_2DEC70
label_29f700:
    if (ctx->pc == 0x29F700u) {
        ctx->pc = 0x29F700u;
            // 0x29f700: 0xafb201b4  sw          $s2, 0x1B4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 18));
        ctx->pc = 0x29F704u;
        goto label_29f704;
    }
    ctx->pc = 0x29F6FCu;
    SET_GPR_U32(ctx, 31, 0x29F704u);
    ctx->pc = 0x29F700u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F6FCu;
            // 0x29f700: 0xafb201b4  sw          $s2, 0x1B4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DEC70u;
    if (runtime->hasFunction(0x2DEC70u)) {
        auto targetFn = runtime->lookupFunction(0x2DEC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F704u; }
        if (ctx->pc != 0x29F704u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMainMapInfo__FP14MapJumpMapInfo_0x2dec70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F704u; }
        if (ctx->pc != 0x29F704u) { return; }
    }
    ctx->pc = 0x29F704u;
label_29f704:
    // 0x29f704: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x29f704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_29f708:
    // 0x29f708: 0xc0b7bd0  jal         func_2DEF40
label_29f70c:
    if (ctx->pc == 0x29F70Cu) {
        ctx->pc = 0x29F70Cu;
            // 0x29f70c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29F710u;
        goto label_29f710;
    }
    ctx->pc = 0x29F708u;
    SET_GPR_U32(ctx, 31, 0x29F710u);
    ctx->pc = 0x29F70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F708u;
            // 0x29f70c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DEF40u;
    if (runtime->hasFunction(0x2DEF40u)) {
        auto targetFn = runtime->lookupFunction(0x2DEF40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F710u; }
        if (ctx->pc != 0x29F710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLoadMapInfo__FP17SCN_LOADMAP_INFO2i_0x2def40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F710u; }
        if (ctx->pc != 0x29F710u) { return; }
    }
    ctx->pc = 0x29F710u;
label_29f710:
    // 0x29f710: 0x8f8499ec  lw          $a0, -0x6614($gp)
    ctx->pc = 0x29f710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
label_29f714:
    // 0x29f714: 0x2402006b  addiu       $v0, $zero, 0x6B
    ctx->pc = 0x29f714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
label_29f718:
    // 0x29f718: 0xafa201d0  sw          $v0, 0x1D0($sp)
    ctx->pc = 0x29f718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 464), GPR_U32(ctx, 2));
label_29f71c:
    // 0x29f71c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29f71cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29f720:
    // 0x29f720: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x29f720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_29f724:
    // 0x29f724: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29f724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f728:
    // 0x29f728: 0xafa20350  sw          $v0, 0x350($sp)
    ctx->pc = 0x29f728u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 848), GPR_U32(ctx, 2));
label_29f72c:
    // 0x29f72c: 0xc0a179c  jal         func_285E70
label_29f730:
    if (ctx->pc == 0x29F730u) {
        ctx->pc = 0x29F730u;
            // 0x29f730: 0xafa6034c  sw          $a2, 0x34C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 844), GPR_U32(ctx, 6));
        ctx->pc = 0x29F734u;
        goto label_29f734;
    }
    ctx->pc = 0x29F72Cu;
    SET_GPR_U32(ctx, 31, 0x29F734u);
    ctx->pc = 0x29F730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F72Cu;
            // 0x29f730: 0xafa6034c  sw          $a2, 0x34C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 844), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285E70u;
    if (runtime->hasFunction(0x285E70u)) {
        auto targetFn = runtime->lookupFunction(0x285E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F734u; }
        if (ctx->pc != 0x29F734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteMap__6CSceneFii_0x285e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F734u; }
        if (ctx->pc != 0x29F734u) { return; }
    }
    ctx->pc = 0x29F734u;
label_29f734:
    // 0x29f734: 0x8f8499ec  lw          $a0, -0x6614($gp)
    ctx->pc = 0x29f734u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
label_29f738:
    // 0x29f738: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29f738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f73c:
    // 0x29f73c: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x29f73cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_29f740:
    // 0x29f740: 0xc0a1738  jal         func_285CE0
label_29f744:
    if (ctx->pc == 0x29F744u) {
        ctx->pc = 0x29F744u;
            // 0x29f744: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29F748u;
        goto label_29f748;
    }
    ctx->pc = 0x29F740u;
    SET_GPR_U32(ctx, 31, 0x29F748u);
    ctx->pc = 0x29F744u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F740u;
            // 0x29f744: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285CE0u;
    if (runtime->hasFunction(0x285CE0u)) {
        auto targetFn = runtime->lookupFunction(0x285CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F748u; }
        if (ctx->pc != 0x29F748u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadMap__6CSceneFiP17SCN_LOADMAP_INFO2i_0x285ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F748u; }
        if (ctx->pc != 0x29F748u) { return; }
    }
    ctx->pc = 0x29F748u;
label_29f748:
    // 0x29f748: 0x8f8499ec  lw          $a0, -0x6614($gp)
    ctx->pc = 0x29f748u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
label_29f74c:
    // 0x29f74c: 0xc0a12d8  jal         func_284B60
label_29f750:
    if (ctx->pc == 0x29F750u) {
        ctx->pc = 0x29F750u;
            // 0x29f750: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29F754u;
        goto label_29f754;
    }
    ctx->pc = 0x29F74Cu;
    SET_GPR_U32(ctx, 31, 0x29F754u);
    ctx->pc = 0x29F750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F74Cu;
            // 0x29f750: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284B60u;
    if (runtime->hasFunction(0x284B60u)) {
        auto targetFn = runtime->lookupFunction(0x284B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F754u; }
        if (ctx->pc != 0x29F754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetNowMapNo__6CSceneFi_0x284b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F754u; }
        if (ctx->pc != 0x29F754u) { return; }
    }
    ctx->pc = 0x29F754u;
label_29f754:
    // 0x29f754: 0x8f8499ec  lw          $a0, -0x6614($gp)
    ctx->pc = 0x29f754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
label_29f758:
    // 0x29f758: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x29f758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_29f75c:
    // 0x29f75c: 0xc0a11b4  jal         func_2846D0
label_29f760:
    if (ctx->pc == 0x29F760u) {
        ctx->pc = 0x29F760u;
            // 0x29f760: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29F764u;
        goto label_29f764;
    }
    ctx->pc = 0x29F75Cu;
    SET_GPR_U32(ctx, 31, 0x29F764u);
    ctx->pc = 0x29F760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F75Cu;
            // 0x29f760: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2846D0u;
    if (runtime->hasFunction(0x2846D0u)) {
        auto targetFn = runtime->lookupFunction(0x2846D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F764u; }
        if (ctx->pc != 0x29F764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActive__6CSceneFii_0x2846d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F764u; }
        if (ctx->pc != 0x29F764u) { return; }
    }
    ctx->pc = 0x29F764u;
label_29f764:
    // 0x29f764: 0x8f8499ec  lw          $a0, -0x6614($gp)
    ctx->pc = 0x29f764u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
label_29f768:
    // 0x29f768: 0xc0a0f58  jal         func_283D60
label_29f76c:
    if (ctx->pc == 0x29F76Cu) {
        ctx->pc = 0x29F76Cu;
            // 0x29f76c: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->pc = 0x29F770u;
        goto label_29f770;
    }
    ctx->pc = 0x29F768u;
    SET_GPR_U32(ctx, 31, 0x29F770u);
    ctx->pc = 0x29F76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F768u;
            // 0x29f76c: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F770u; }
        if (ctx->pc != 0x29F770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F770u; }
        if (ctx->pc != 0x29F770u) { return; }
    }
    ctx->pc = 0x29F770u;
label_29f770:
    // 0x29f770: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29f770u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_29f774:
    // 0x29f774: 0xaf829944  sw          $v0, -0x66BC($gp)
    ctx->pc = 0x29f774u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294940996), GPR_U32(ctx, 2));
label_29f778:
    // 0x29f778: 0x24846070  addiu       $a0, $a0, 0x6070
    ctx->pc = 0x29f778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
label_29f77c:
    // 0x29f77c: 0xc04e714  jal         func_139C50
label_29f780:
    if (ctx->pc == 0x29F780u) {
        ctx->pc = 0x29F780u;
            // 0x29f780: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x29F784u;
        goto label_29f784;
    }
    ctx->pc = 0x29F77Cu;
    SET_GPR_U32(ctx, 31, 0x29F784u);
    ctx->pc = 0x29F780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F77Cu;
            // 0x29f780: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C50u;
    if (runtime->hasFunction(0x139C50u)) {
        auto targetFn = runtime->lookupFunction(0x139C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F784u; }
        if (ctx->pc != 0x29F784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAllocTest__9mgCMemoryFi_0x139c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F784u; }
        if (ctx->pc != 0x29F784u) { return; }
    }
    ctx->pc = 0x29F784u;
label_29f784:
    // 0x29f784: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x29f784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_29f788:
    // 0x29f788: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29f788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f78c:
    // 0x29f78c: 0x2484e010  addiu       $a0, $a0, -0x1FF0
    ctx->pc = 0x29f78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959120));
label_29f790:
    // 0x29f790: 0x27a603ec  addiu       $a2, $sp, 0x3EC
    ctx->pc = 0x29f790u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1004));
label_29f794:
    // 0x29f794: 0xc0524dc  jal         func_149370
label_29f798:
    if (ctx->pc == 0x29F798u) {
        ctx->pc = 0x29F798u;
            // 0x29f798: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29F79Cu;
        goto label_29f79c;
    }
    ctx->pc = 0x29F794u;
    SET_GPR_U32(ctx, 31, 0x29F79Cu);
    ctx->pc = 0x29F798u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F794u;
            // 0x29f798: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F79Cu; }
        if (ctx->pc != 0x29F79Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F79Cu; }
        if (ctx->pc != 0x29F79Cu) { return; }
    }
    ctx->pc = 0x29F79Cu;
label_29f79c:
    // 0x29f79c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_29f7a0:
    if (ctx->pc == 0x29F7A0u) {
        ctx->pc = 0x29F7A4u;
        goto label_29f7a4;
    }
    ctx->pc = 0x29F79Cu;
    {
        const bool branch_taken_0x29f79c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29f79c) {
            ctx->pc = 0x29F7E0u;
            goto label_29f7e0;
        }
    }
    ctx->pc = 0x29F7A4u;
label_29f7a4:
    // 0x29f7a4: 0x8fa303ec  lw          $v1, 0x3EC($sp)
    ctx->pc = 0x29f7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1004)));
label_29f7a8:
    // 0x29f7a8: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x29f7a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_29f7ac:
    // 0x29f7ac: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_29f7b0:
    if (ctx->pc == 0x29F7B0u) {
        ctx->pc = 0x29F7B0u;
            // 0x29f7b0: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x29F7B4u;
        goto label_29f7b4;
    }
    ctx->pc = 0x29F7ACu;
    {
        const bool branch_taken_0x29f7ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F7ACu;
            // 0x29f7b0: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f7ac) {
            ctx->pc = 0x29F7BCu;
            goto label_29f7bc;
        }
    }
    ctx->pc = 0x29F7B4u;
label_29f7b4:
    // 0x29f7b4: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x29f7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_29f7b8:
    // 0x29f7b8: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x29f7b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_29f7bc:
    // 0x29f7bc: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29f7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_29f7c0:
    // 0x29f7c0: 0xc04e748  jal         func_139D20
label_29f7c4:
    if (ctx->pc == 0x29F7C4u) {
        ctx->pc = 0x29F7C4u;
            // 0x29f7c4: 0x24846070  addiu       $a0, $a0, 0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
        ctx->pc = 0x29F7C8u;
        goto label_29f7c8;
    }
    ctx->pc = 0x29F7C0u;
    SET_GPR_U32(ctx, 31, 0x29F7C8u);
    ctx->pc = 0x29F7C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F7C0u;
            // 0x29f7c4: 0x24846070  addiu       $a0, $a0, 0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F7C8u; }
        if (ctx->pc != 0x29F7C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F7C8u; }
        if (ctx->pc != 0x29F7C8u) { return; }
    }
    ctx->pc = 0x29F7C8u;
label_29f7c8:
    // 0x29f7c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29f7c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f7cc:
    // 0x29f7cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f7ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29f7d0:
    // 0x29f7d0: 0x2406006a  addiu       $a2, $zero, 0x6A
    ctx->pc = 0x29f7d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
label_29f7d4:
    // 0x29f7d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29f7d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f7d8:
    // 0x29f7d8: 0xc04b6a4  jal         func_12DA90
label_29f7dc:
    if (ctx->pc == 0x29F7DCu) {
        ctx->pc = 0x29F7DCu;
            // 0x29f7dc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29F7E0u;
        goto label_29f7e0;
    }
    ctx->pc = 0x29F7D8u;
    SET_GPR_U32(ctx, 31, 0x29F7E0u);
    ctx->pc = 0x29F7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F7D8u;
            // 0x29f7dc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F7E0u; }
        if (ctx->pc != 0x29F7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F7E0u; }
        if (ctx->pc != 0x29F7E0u) { return; }
    }
    ctx->pc = 0x29F7E0u;
label_29f7e0:
    // 0x29f7e0: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x29f7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_29f7e4:
    // 0x29f7e4: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x29f7e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_29f7e8:
    // 0x29f7e8: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x29f7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
label_29f7ec:
    // 0x29f7ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f7ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29f7f0:
    // 0x29f7f0: 0x8f888780  lw          $t0, -0x7880($gp)
    ctx->pc = 0x29f7f0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_29f7f4:
    // 0x29f7f4: 0x2405006a  addiu       $a1, $zero, 0x6A
    ctx->pc = 0x29f7f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
label_29f7f8:
    // 0x29f7f8: 0x8f898784  lw          $t1, -0x787C($gp)
    ctx->pc = 0x29f7f8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
label_29f7fc:
    // 0x29f7fc: 0x24c6e028  addiu       $a2, $a2, -0x1FD8
    ctx->pc = 0x29f7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959144));
label_29f800:
    // 0x29f800: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29f800u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f804:
    // 0x29f804: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x29f804u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_29f808:
    // 0x29f808: 0xc04b450  jal         func_12D140
label_29f80c:
    if (ctx->pc == 0x29F80Cu) {
        ctx->pc = 0x29F80Cu;
            // 0x29f80c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29F810u;
        goto label_29f810;
    }
    ctx->pc = 0x29F808u;
    SET_GPR_U32(ctx, 31, 0x29F810u);
    ctx->pc = 0x29F80Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F808u;
            // 0x29f80c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D140u;
    if (runtime->hasFunction(0x12D140u)) {
        auto targetFn = runtime->lookupFunction(0x12D140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F810u; }
        if (ctx->pc != 0x29F810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterTexture__17mgCTextureManagerFiPcPP1iiiP1Uli_0x12d140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F810u; }
        if (ctx->pc != 0x29F810u) { return; }
    }
    ctx->pc = 0x29F810u;
label_29f810:
    // 0x29f810: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x29f810u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
label_29f814:
    // 0x29f814: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x29f814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_29f818:
    // 0x29f818: 0x27a40370  addiu       $a0, $sp, 0x370
    ctx->pc = 0x29f818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
label_29f81c:
    // 0x29f81c: 0xc04a234  jal         func_1288D0
label_29f820:
    if (ctx->pc == 0x29F820u) {
        ctx->pc = 0x29F820u;
            // 0x29f820: 0x24a5e040  addiu       $a1, $a1, -0x1FC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959168));
        ctx->pc = 0x29F824u;
        goto label_29f824;
    }
    ctx->pc = 0x29F81Cu;
    SET_GPR_U32(ctx, 31, 0x29F824u);
    ctx->pc = 0x29F820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F81Cu;
            // 0x29f820: 0x24a5e040  addiu       $a1, $a1, -0x1FC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F824u; }
        if (ctx->pc != 0x29F824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F824u; }
        if (ctx->pc != 0x29F824u) { return; }
    }
    ctx->pc = 0x29F824u;
label_29f824:
    // 0x29f824: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x29f824u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
label_29f828:
    // 0x29f828: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x29f828u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_29f82c:
    // 0x29f82c: 0x27a40370  addiu       $a0, $sp, 0x370
    ctx->pc = 0x29f82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
label_29f830:
    // 0x29f830: 0xc04a234  jal         func_1288D0
label_29f834:
    if (ctx->pc == 0x29F834u) {
        ctx->pc = 0x29F834u;
            // 0x29f834: 0x24a5e040  addiu       $a1, $a1, -0x1FC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959168));
        ctx->pc = 0x29F838u;
        goto label_29f838;
    }
    ctx->pc = 0x29F830u;
    SET_GPR_U32(ctx, 31, 0x29F838u);
    ctx->pc = 0x29F834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F830u;
            // 0x29f834: 0x24a5e040  addiu       $a1, $a1, -0x1FC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F838u; }
        if (ctx->pc != 0x29F838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F838u; }
        if (ctx->pc != 0x29F838u) { return; }
    }
    ctx->pc = 0x29F838u;
label_29f838:
    // 0x29f838: 0x27a40370  addiu       $a0, $sp, 0x370
    ctx->pc = 0x29f838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
label_29f83c:
    // 0x29f83c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29f83cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29f840:
    // 0x29f840: 0x27a603e8  addiu       $a2, $sp, 0x3E8
    ctx->pc = 0x29f840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1000));
label_29f844:
    // 0x29f844: 0xc0524dc  jal         func_149370
label_29f848:
    if (ctx->pc == 0x29F848u) {
        ctx->pc = 0x29F848u;
            // 0x29f848: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29F84Cu;
        goto label_29f84c;
    }
    ctx->pc = 0x29F844u;
    SET_GPR_U32(ctx, 31, 0x29F84Cu);
    ctx->pc = 0x29F848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F844u;
            // 0x29f848: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F84Cu; }
        if (ctx->pc != 0x29F84Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F84Cu; }
        if (ctx->pc != 0x29F84Cu) { return; }
    }
    ctx->pc = 0x29F84Cu;
label_29f84c:
    // 0x29f84c: 0x8fa303e8  lw          $v1, 0x3E8($sp)
    ctx->pc = 0x29f84cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1000)));
label_29f850:
    // 0x29f850: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x29f850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_29f854:
    // 0x29f854: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_29f858:
    if (ctx->pc == 0x29F858u) {
        ctx->pc = 0x29F858u;
            // 0x29f858: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x29F85Cu;
        goto label_29f85c;
    }
    ctx->pc = 0x29F854u;
    {
        const bool branch_taken_0x29f854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F854u;
            // 0x29f858: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f854) {
            ctx->pc = 0x29F864u;
            goto label_29f864;
        }
    }
    ctx->pc = 0x29F85Cu;
label_29f85c:
    // 0x29f85c: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x29f85cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_29f860:
    // 0x29f860: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x29f860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_29f864:
    // 0x29f864: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29f864u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_29f868:
    // 0x29f868: 0xc04e748  jal         func_139D20
label_29f86c:
    if (ctx->pc == 0x29F86Cu) {
        ctx->pc = 0x29F86Cu;
            // 0x29f86c: 0x24846070  addiu       $a0, $a0, 0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
        ctx->pc = 0x29F870u;
        goto label_29f870;
    }
    ctx->pc = 0x29F868u;
    SET_GPR_U32(ctx, 31, 0x29F870u);
    ctx->pc = 0x29F86Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F868u;
            // 0x29f86c: 0x24846070  addiu       $a0, $a0, 0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F870u; }
        if (ctx->pc != 0x29F870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F870u; }
        if (ctx->pc != 0x29F870u) { return; }
    }
    ctx->pc = 0x29F870u;
label_29f870:
    // 0x29f870: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x29f870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29f874:
    // 0x29f874: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29f878:
    // 0x29f878: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x29f878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_29f87c:
    // 0x29f87c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29f87cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f880:
    // 0x29f880: 0xc04b6a4  jal         func_12DA90
label_29f884:
    if (ctx->pc == 0x29F884u) {
        ctx->pc = 0x29F884u;
            // 0x29f884: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29F888u;
        goto label_29f888;
    }
    ctx->pc = 0x29F880u;
    SET_GPR_U32(ctx, 31, 0x29F888u);
    ctx->pc = 0x29F884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F880u;
            // 0x29f884: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F888u; }
        if (ctx->pc != 0x29F888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F888u; }
        if (ctx->pc != 0x29F888u) { return; }
    }
    ctx->pc = 0x29F888u;
label_29f888:
    // 0x29f888: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x29f888u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_29f88c:
    // 0x29f88c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f88cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29f890:
    // 0x29f890: 0x24a5e058  addiu       $a1, $a1, -0x1FA8
    ctx->pc = 0x29f890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959192));
label_29f894:
    // 0x29f894: 0xc04b414  jal         func_12D050
label_29f898:
    if (ctx->pc == 0x29F898u) {
        ctx->pc = 0x29F898u;
            // 0x29f898: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x29F89Cu;
        goto label_29f89c;
    }
    ctx->pc = 0x29F894u;
    SET_GPR_U32(ctx, 31, 0x29F89Cu);
    ctx->pc = 0x29F898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F894u;
            // 0x29f898: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F89Cu; }
        if (ctx->pc != 0x29F89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F89Cu; }
        if (ctx->pc != 0x29F89Cu) { return; }
    }
    ctx->pc = 0x29F89Cu;
label_29f89c:
    // 0x29f89c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x29f89cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_29f8a0:
    // 0x29f8a0: 0xaf8299c0  sw          $v0, -0x6640($gp)
    ctx->pc = 0x29f8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941120), GPR_U32(ctx, 2));
label_29f8a4:
    // 0x29f8a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f8a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29f8a8:
    // 0x29f8a8: 0x24a5e060  addiu       $a1, $a1, -0x1FA0
    ctx->pc = 0x29f8a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959200));
label_29f8ac:
    // 0x29f8ac: 0xc04b414  jal         func_12D050
label_29f8b0:
    if (ctx->pc == 0x29F8B0u) {
        ctx->pc = 0x29F8B0u;
            // 0x29f8b0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x29F8B4u;
        goto label_29f8b4;
    }
    ctx->pc = 0x29F8ACu;
    SET_GPR_U32(ctx, 31, 0x29F8B4u);
    ctx->pc = 0x29F8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F8ACu;
            // 0x29f8b0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F8B4u; }
        if (ctx->pc != 0x29F8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F8B4u; }
        if (ctx->pc != 0x29F8B4u) { return; }
    }
    ctx->pc = 0x29F8B4u;
label_29f8b4:
    // 0x29f8b4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x29f8b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_29f8b8:
    // 0x29f8b8: 0xaf8299c4  sw          $v0, -0x663C($gp)
    ctx->pc = 0x29f8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941124), GPR_U32(ctx, 2));
label_29f8bc:
    // 0x29f8bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f8bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29f8c0:
    // 0x29f8c0: 0x24a5e068  addiu       $a1, $a1, -0x1F98
    ctx->pc = 0x29f8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959208));
label_29f8c4:
    // 0x29f8c4: 0xc04b414  jal         func_12D050
label_29f8c8:
    if (ctx->pc == 0x29F8C8u) {
        ctx->pc = 0x29F8C8u;
            // 0x29f8c8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x29F8CCu;
        goto label_29f8cc;
    }
    ctx->pc = 0x29F8C4u;
    SET_GPR_U32(ctx, 31, 0x29F8CCu);
    ctx->pc = 0x29F8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F8C4u;
            // 0x29f8c8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F8CCu; }
        if (ctx->pc != 0x29F8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F8CCu; }
        if (ctx->pc != 0x29F8CCu) { return; }
    }
    ctx->pc = 0x29F8CCu;
label_29f8cc:
    // 0x29f8cc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x29f8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_29f8d0:
    // 0x29f8d0: 0xaf8299c8  sw          $v0, -0x6638($gp)
    ctx->pc = 0x29f8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941128), GPR_U32(ctx, 2));
label_29f8d4:
    // 0x29f8d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f8d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29f8d8:
    // 0x29f8d8: 0x24a5e070  addiu       $a1, $a1, -0x1F90
    ctx->pc = 0x29f8d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959216));
label_29f8dc:
    // 0x29f8dc: 0xc04b414  jal         func_12D050
label_29f8e0:
    if (ctx->pc == 0x29F8E0u) {
        ctx->pc = 0x29F8E0u;
            // 0x29f8e0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x29F8E4u;
        goto label_29f8e4;
    }
    ctx->pc = 0x29F8DCu;
    SET_GPR_U32(ctx, 31, 0x29F8E4u);
    ctx->pc = 0x29F8E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F8DCu;
            // 0x29f8e0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F8E4u; }
        if (ctx->pc != 0x29F8E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F8E4u; }
        if (ctx->pc != 0x29F8E4u) { return; }
    }
    ctx->pc = 0x29F8E4u;
label_29f8e4:
    // 0x29f8e4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x29f8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_29f8e8:
    // 0x29f8e8: 0xaf8299cc  sw          $v0, -0x6634($gp)
    ctx->pc = 0x29f8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941132), GPR_U32(ctx, 2));
label_29f8ec:
    // 0x29f8ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f8ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29f8f0:
    // 0x29f8f0: 0x24a5e078  addiu       $a1, $a1, -0x1F88
    ctx->pc = 0x29f8f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959224));
label_29f8f4:
    // 0x29f8f4: 0xc04b414  jal         func_12D050
label_29f8f8:
    if (ctx->pc == 0x29F8F8u) {
        ctx->pc = 0x29F8F8u;
            // 0x29f8f8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x29F8FCu;
        goto label_29f8fc;
    }
    ctx->pc = 0x29F8F4u;
    SET_GPR_U32(ctx, 31, 0x29F8FCu);
    ctx->pc = 0x29F8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F8F4u;
            // 0x29f8f8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F8FCu; }
        if (ctx->pc != 0x29F8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F8FCu; }
        if (ctx->pc != 0x29F8FCu) { return; }
    }
    ctx->pc = 0x29F8FCu;
label_29f8fc:
    // 0x29f8fc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x29f8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_29f900:
    // 0x29f900: 0xaf8299d0  sw          $v0, -0x6630($gp)
    ctx->pc = 0x29f900u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941136), GPR_U32(ctx, 2));
label_29f904:
    // 0x29f904: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29f908:
    // 0x29f908: 0x24a5e080  addiu       $a1, $a1, -0x1F80
    ctx->pc = 0x29f908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959232));
label_29f90c:
    // 0x29f90c: 0xc04b414  jal         func_12D050
label_29f910:
    if (ctx->pc == 0x29F910u) {
        ctx->pc = 0x29F910u;
            // 0x29f910: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x29F914u;
        goto label_29f914;
    }
    ctx->pc = 0x29F90Cu;
    SET_GPR_U32(ctx, 31, 0x29F914u);
    ctx->pc = 0x29F910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F90Cu;
            // 0x29f910: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F914u; }
        if (ctx->pc != 0x29F914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F914u; }
        if (ctx->pc != 0x29F914u) { return; }
    }
    ctx->pc = 0x29F914u;
label_29f914:
    // 0x29f914: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x29f914u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_29f918:
    // 0x29f918: 0xaf8299d4  sw          $v0, -0x662C($gp)
    ctx->pc = 0x29f918u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941140), GPR_U32(ctx, 2));
label_29f91c:
    // 0x29f91c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29f920:
    // 0x29f920: 0x24a5e088  addiu       $a1, $a1, -0x1F78
    ctx->pc = 0x29f920u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959240));
label_29f924:
    // 0x29f924: 0xc04b414  jal         func_12D050
label_29f928:
    if (ctx->pc == 0x29F928u) {
        ctx->pc = 0x29F928u;
            // 0x29f928: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x29F92Cu;
        goto label_29f92c;
    }
    ctx->pc = 0x29F924u;
    SET_GPR_U32(ctx, 31, 0x29F92Cu);
    ctx->pc = 0x29F928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F924u;
            // 0x29f928: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F92Cu; }
        if (ctx->pc != 0x29F92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F92Cu; }
        if (ctx->pc != 0x29F92Cu) { return; }
    }
    ctx->pc = 0x29F92Cu;
label_29f92c:
    // 0x29f92c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x29f92cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_29f930:
    // 0x29f930: 0xaf8299d8  sw          $v0, -0x6628($gp)
    ctx->pc = 0x29f930u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941144), GPR_U32(ctx, 2));
label_29f934:
    // 0x29f934: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29f934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29f938:
    // 0x29f938: 0x24a5e090  addiu       $a1, $a1, -0x1F70
    ctx->pc = 0x29f938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959248));
label_29f93c:
    // 0x29f93c: 0xc04b414  jal         func_12D050
label_29f940:
    if (ctx->pc == 0x29F940u) {
        ctx->pc = 0x29F940u;
            // 0x29f940: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x29F944u;
        goto label_29f944;
    }
    ctx->pc = 0x29F93Cu;
    SET_GPR_U32(ctx, 31, 0x29F944u);
    ctx->pc = 0x29F940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F93Cu;
            // 0x29f940: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F944u; }
        if (ctx->pc != 0x29F944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F944u; }
        if (ctx->pc != 0x29F944u) { return; }
    }
    ctx->pc = 0x29F944u;
label_29f944:
    // 0x29f944: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29f944u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_29f948:
    // 0x29f948: 0xaf8299dc  sw          $v0, -0x6624($gp)
    ctx->pc = 0x29f948u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941148), GPR_U32(ctx, 2));
label_29f94c:
    // 0x29f94c: 0xc04e780  jal         func_139E00
label_29f950:
    if (ctx->pc == 0x29F950u) {
        ctx->pc = 0x29F950u;
            // 0x29f950: 0x24846070  addiu       $a0, $a0, 0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
        ctx->pc = 0x29F954u;
        goto label_29f954;
    }
    ctx->pc = 0x29F94Cu;
    SET_GPR_U32(ctx, 31, 0x29F954u);
    ctx->pc = 0x29F950u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F94Cu;
            // 0x29f950: 0x24846070  addiu       $a0, $a0, 0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F954u; }
        if (ctx->pc != 0x29F954u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F954u; }
        if (ctx->pc != 0x29F954u) { return; }
    }
    ctx->pc = 0x29F954u;
label_29f954:
    // 0x29f954: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29f954u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_29f958:
    // 0x29f958: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x29f958u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_29f95c:
    // 0x29f95c: 0x8c236094  lw          $v1, 0x6094($at)
    ctx->pc = 0x29f95cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24724)));
label_29f960:
    // 0x29f960: 0x2484e098  addiu       $a0, $a0, -0x1F68
    ctx->pc = 0x29f960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959256));
label_29f964:
    // 0x29f964: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29f964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29f968:
    // 0x29f968: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29f968u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_29f96c:
    // 0x29f96c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29f96cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_29f970:
    // 0x29f970: 0x8c226090  lw          $v0, 0x6090($at)
    ctx->pc = 0x29f970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24720)));
label_29f974:
    // 0x29f974: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x29f974u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_29f978:
    // 0x29f978: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29f978u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29f97c:
    // 0x29f97c: 0x34211000  ori         $at, $at, 0x1000
    ctx->pc = 0x29f97cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)4096);
label_29f980:
    // 0x29f980: 0x41b021  addu        $s6, $v0, $at
    ctx->pc = 0x29f980u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_29f984:
    // 0x29f984: 0xc094440  jal         func_251100
label_29f988:
    if (ctx->pc == 0x29F988u) {
        ctx->pc = 0x29F988u;
            // 0x29f988: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29F98Cu;
        goto label_29f98c;
    }
    ctx->pc = 0x29F984u;
    SET_GPR_U32(ctx, 31, 0x29F98Cu);
    ctx->pc = 0x29F988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F984u;
            // 0x29f988: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251100u;
    if (runtime->hasFunction(0x251100u)) {
        auto targetFn = runtime->lookupFunction(0x251100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F98Cu; }
        if (ctx->pc != 0x29F98Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileMenu__FPcP1i_0x251100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F98Cu; }
        if (ctx->pc != 0x29F98Cu) { return; }
    }
    ctx->pc = 0x29F98Cu;
label_29f98c:
    // 0x29f98c: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
label_29f990:
    if (ctx->pc == 0x29F990u) {
        ctx->pc = 0x29F990u;
            // 0x29f990: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29F994u;
        goto label_29f994;
    }
    ctx->pc = 0x29F98Cu;
    {
        const bool branch_taken_0x29f98c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F98Cu;
            // 0x29f990: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f98c) {
            ctx->pc = 0x29FA08u;
            goto label_29fa08;
        }
    }
    ctx->pc = 0x29F994u;
label_29f994:
    // 0x29f994: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29f994u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29f998:
    // 0x29f998: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x29f998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_29f99c:
    // 0x29f99c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x29f99cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_29f9a0:
    // 0x29f9a0: 0x24424280  addiu       $v0, $v0, 0x4280
    ctx->pc = 0x29f9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17024));
label_29f9a4:
    // 0x29f9a4: 0x529821  addu        $s3, $v0, $s2
    ctx->pc = 0x29f9a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_29f9a8:
    // 0x29f9a8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x29f9a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_29f9ac:
    // 0x29f9ac: 0xc052734  jal         func_149CD0
label_29f9b0:
    if (ctx->pc == 0x29F9B0u) {
        ctx->pc = 0x29F9B0u;
            // 0x29f9b0: 0x26660024  addiu       $a2, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->pc = 0x29F9B4u;
        goto label_29f9b4;
    }
    ctx->pc = 0x29F9ACu;
    SET_GPR_U32(ctx, 31, 0x29F9B4u);
    ctx->pc = 0x29F9B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F9ACu;
            // 0x29f9b0: 0x26660024  addiu       $a2, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F9B4u; }
        if (ctx->pc != 0x29F9B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F9B4u; }
        if (ctx->pc != 0x29F9B4u) { return; }
    }
    ctx->pc = 0x29F9B4u;
label_29f9b4:
    // 0x29f9b4: 0x8e630024  lw          $v1, 0x24($s3)
    ctx->pc = 0x29f9b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 36)));
label_29f9b8:
    // 0x29f9b8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x29f9b8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29f9bc:
    // 0x29f9bc: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x29f9bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_29f9c0:
    // 0x29f9c0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_29f9c4:
    if (ctx->pc == 0x29F9C4u) {
        ctx->pc = 0x29F9C4u;
            // 0x29f9c4: 0x26740024  addiu       $s4, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->pc = 0x29F9C8u;
        goto label_29f9c8;
    }
    ctx->pc = 0x29F9C0u;
    {
        const bool branch_taken_0x29f9c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F9C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F9C0u;
            // 0x29f9c4: 0x26740024  addiu       $s4, $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f9c0) {
            ctx->pc = 0x29F9D4u;
            goto label_29f9d4;
        }
    }
    ctx->pc = 0x29F9C8u;
label_29f9c8:
    // 0x29f9c8: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x29f9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_29f9cc:
    // 0x29f9cc: 0x10000002  b           . + 4 + (0x2 << 2)
label_29f9d0:
    if (ctx->pc == 0x29F9D0u) {
        ctx->pc = 0x29F9D0u;
            // 0x29f9d0: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x29F9D4u;
        goto label_29f9d4;
    }
    ctx->pc = 0x29F9CCu;
    {
        const bool branch_taken_0x29f9cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29F9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29F9CCu;
            // 0x29f9d0: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29f9cc) {
            ctx->pc = 0x29F9D8u;
            goto label_29f9d8;
        }
    }
    ctx->pc = 0x29F9D4u;
label_29f9d4:
    // 0x29f9d4: 0x32902  srl         $a1, $v1, 4
    ctx->pc = 0x29f9d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_29f9d8:
    // 0x29f9d8: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29f9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_29f9dc:
    // 0x29f9dc: 0xc04e748  jal         func_139D20
label_29f9e0:
    if (ctx->pc == 0x29F9E0u) {
        ctx->pc = 0x29F9E0u;
            // 0x29f9e0: 0x24846070  addiu       $a0, $a0, 0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
        ctx->pc = 0x29F9E4u;
        goto label_29f9e4;
    }
    ctx->pc = 0x29F9DCu;
    SET_GPR_U32(ctx, 31, 0x29F9E4u);
    ctx->pc = 0x29F9E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F9DCu;
            // 0x29f9e0: 0x24846070  addiu       $a0, $a0, 0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F9E4u; }
        if (ctx->pc != 0x29F9E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F9E4u; }
        if (ctx->pc != 0x29F9E4u) { return; }
    }
    ctx->pc = 0x29F9E4u;
label_29f9e4:
    // 0x29f9e4: 0xae620020  sw          $v0, 0x20($s3)
    ctx->pc = 0x29f9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
label_29f9e8:
    // 0x29f9e8: 0x8e640020  lw          $a0, 0x20($s3)
    ctx->pc = 0x29f9e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_29f9ec:
    // 0x29f9ec: 0x8e860000  lw          $a2, 0x0($s4)
    ctx->pc = 0x29f9ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_29f9f0:
    // 0x29f9f0: 0xc049c18  jal         func_127060
label_29f9f4:
    if (ctx->pc == 0x29F9F4u) {
        ctx->pc = 0x29F9F4u;
            // 0x29f9f4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29F9F8u;
        goto label_29f9f8;
    }
    ctx->pc = 0x29F9F0u;
    SET_GPR_U32(ctx, 31, 0x29F9F8u);
    ctx->pc = 0x29F9F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29F9F0u;
            // 0x29f9f4: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F9F8u; }
        if (ctx->pc != 0x29F9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29F9F8u; }
        if (ctx->pc != 0x29F9F8u) { return; }
    }
    ctx->pc = 0x29F9F8u;
label_29f9f8:
    // 0x29f9f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29f9f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_29f9fc:
    // 0x29f9fc: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x29f9fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_29fa00:
    // 0x29fa00: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_29fa04:
    if (ctx->pc == 0x29FA04u) {
        ctx->pc = 0x29FA04u;
            // 0x29fa04: 0x26520028  addiu       $s2, $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
        ctx->pc = 0x29FA08u;
        goto label_29fa08;
    }
    ctx->pc = 0x29FA00u;
    {
        const bool branch_taken_0x29fa00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29FA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FA00u;
            // 0x29fa04: 0x26520028  addiu       $s2, $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fa00) {
            ctx->pc = 0x29F998u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29f998;
        }
    }
    ctx->pc = 0x29FA08u;
label_29fa08:
    // 0x29fa08: 0x8f8499a0  lw          $a0, -0x6660($gp)
    ctx->pc = 0x29fa08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941088)));
label_29fa0c:
    // 0x29fa0c: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x29fa0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
label_29fa10:
    // 0x29fa10: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29fa10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29fa14:
    // 0x29fa14: 0xc0bc680  jal         func_2F1A00
label_29fa18:
    if (ctx->pc == 0x29FA18u) {
        ctx->pc = 0x29FA18u;
            // 0x29fa18: 0x24a54280  addiu       $a1, $a1, 0x4280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17024));
        ctx->pc = 0x29FA1Cu;
        goto label_29fa1c;
    }
    ctx->pc = 0x29FA14u;
    SET_GPR_U32(ctx, 31, 0x29FA1Cu);
    ctx->pc = 0x29FA18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FA14u;
            // 0x29fa18: 0x24a54280  addiu       $a1, $a1, 0x4280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 17024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1A00u;
    if (runtime->hasFunction(0x2F1A00u)) {
        auto targetFn = runtime->lookupFunction(0x2F1A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FA1Cu; }
        if (ctx->pc != 0x29FA1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetIconData__18CMemoryCardManagerFP12MC_ICON_DATAi_0x2f1a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FA1Cu; }
        if (ctx->pc != 0x29FA1Cu) { return; }
    }
    ctx->pc = 0x29FA1Cu;
label_29fa1c:
    // 0x29fa1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29fa1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29fa20:
    // 0x29fa20: 0xc04b950  jal         func_12E540
label_29fa24:
    if (ctx->pc == 0x29FA24u) {
        ctx->pc = 0x29FA24u;
            // 0x29fa24: 0x24050043  addiu       $a1, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->pc = 0x29FA28u;
        goto label_29fa28;
    }
    ctx->pc = 0x29FA20u;
    SET_GPR_U32(ctx, 31, 0x29FA28u);
    ctx->pc = 0x29FA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FA20u;
            // 0x29fa24: 0x24050043  addiu       $a1, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FA28u; }
        if (ctx->pc != 0x29FA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FA28u; }
        if (ctx->pc != 0x29FA28u) { return; }
    }
    ctx->pc = 0x29FA28u;
label_29fa28:
    // 0x29fa28: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x29fa28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_29fa2c:
    // 0x29fa2c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x29fa2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_29fa30:
    // 0x29fa30: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x29fa30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
label_29fa34:
    // 0x29fa34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29fa34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29fa38:
    // 0x29fa38: 0x8f888780  lw          $t0, -0x7880($gp)
    ctx->pc = 0x29fa38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_29fa3c:
    // 0x29fa3c: 0x24050043  addiu       $a1, $zero, 0x43
    ctx->pc = 0x29fa3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_29fa40:
    // 0x29fa40: 0x8f898784  lw          $t1, -0x787C($gp)
    ctx->pc = 0x29fa40u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
label_29fa44:
    // 0x29fa44: 0x24c6e0a8  addiu       $a2, $a2, -0x1F58
    ctx->pc = 0x29fa44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294959272));
label_29fa48:
    // 0x29fa48: 0x8f8a87a0  lw          $t2, -0x7860($gp)
    ctx->pc = 0x29fa48u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936480)));
label_29fa4c:
    // 0x29fa4c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29fa4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29fa50:
    // 0x29fa50: 0xc04b450  jal         func_12D140
label_29fa54:
    if (ctx->pc == 0x29FA54u) {
        ctx->pc = 0x29FA54u;
            // 0x29fa54: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29FA58u;
        goto label_29fa58;
    }
    ctx->pc = 0x29FA50u;
    SET_GPR_U32(ctx, 31, 0x29FA58u);
    ctx->pc = 0x29FA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FA50u;
            // 0x29fa54: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D140u;
    if (runtime->hasFunction(0x12D140u)) {
        auto targetFn = runtime->lookupFunction(0x12D140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FA58u; }
        if (ctx->pc != 0x29FA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterTexture__17mgCTextureManagerFiPcPP1iiiP1Uli_0x12d140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FA58u; }
        if (ctx->pc != 0x29FA58u) { return; }
    }
    ctx->pc = 0x29FA58u;
label_29fa58:
    // 0x29fa58: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29fa58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_29fa5c:
    // 0x29fa5c: 0xc04e780  jal         func_139E00
label_29fa60:
    if (ctx->pc == 0x29FA60u) {
        ctx->pc = 0x29FA60u;
            // 0x29fa60: 0x24846070  addiu       $a0, $a0, 0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
        ctx->pc = 0x29FA64u;
        goto label_29fa64;
    }
    ctx->pc = 0x29FA5Cu;
    SET_GPR_U32(ctx, 31, 0x29FA64u);
    ctx->pc = 0x29FA60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FA5Cu;
            // 0x29fa60: 0x24846070  addiu       $a0, $a0, 0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FA64u; }
        if (ctx->pc != 0x29FA64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FA64u; }
        if (ctx->pc != 0x29FA64u) { return; }
    }
    ctx->pc = 0x29FA64u;
label_29fa64:
    // 0x29fa64: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29fa64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_29fa68:
    // 0x29fa68: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x29fa68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_29fa6c:
    // 0x29fa6c: 0x8c236094  lw          $v1, 0x6094($at)
    ctx->pc = 0x29fa6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24724)));
label_29fa70:
    // 0x29fa70: 0x2484e0c0  addiu       $a0, $a0, -0x1F40
    ctx->pc = 0x29fa70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959296));
label_29fa74:
    // 0x29fa74: 0x27a603e8  addiu       $a2, $sp, 0x3E8
    ctx->pc = 0x29fa74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1000));
label_29fa78:
    // 0x29fa78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29fa78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29fa7c:
    // 0x29fa7c: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29fa7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_29fa80:
    // 0x29fa80: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29fa80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_29fa84:
    // 0x29fa84: 0x8c226090  lw          $v0, 0x6090($at)
    ctx->pc = 0x29fa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24720)));
label_29fa88:
    // 0x29fa88: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x29fa88u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29fa8c:
    // 0x29fa8c: 0xc0524dc  jal         func_149370
label_29fa90:
    if (ctx->pc == 0x29FA90u) {
        ctx->pc = 0x29FA90u;
            // 0x29fa90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29FA94u;
        goto label_29fa94;
    }
    ctx->pc = 0x29FA8Cu;
    SET_GPR_U32(ctx, 31, 0x29FA94u);
    ctx->pc = 0x29FA90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FA8Cu;
            // 0x29fa90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FA94u; }
        if (ctx->pc != 0x29FA94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FA94u; }
        if (ctx->pc != 0x29FA94u) { return; }
    }
    ctx->pc = 0x29FA94u;
label_29fa94:
    // 0x29fa94: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_29fa98:
    if (ctx->pc == 0x29FA98u) {
        ctx->pc = 0x29FA9Cu;
        goto label_29fa9c;
    }
    ctx->pc = 0x29FA94u;
    {
        const bool branch_taken_0x29fa94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fa94) {
            ctx->pc = 0x29FAB4u;
            goto label_29fab4;
        }
    }
    ctx->pc = 0x29FA9Cu;
label_29fa9c:
    // 0x29fa9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x29fa9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_29faa0:
    // 0x29faa0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29faa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29faa4:
    // 0x29faa4: 0x24060043  addiu       $a2, $zero, 0x43
    ctx->pc = 0x29faa4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
label_29faa8:
    // 0x29faa8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29faa8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29faac:
    // 0x29faac: 0xc04b6a4  jal         func_12DA90
label_29fab0:
    if (ctx->pc == 0x29FAB0u) {
        ctx->pc = 0x29FAB0u;
            // 0x29fab0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29FAB4u;
        goto label_29fab4;
    }
    ctx->pc = 0x29FAACu;
    SET_GPR_U32(ctx, 31, 0x29FAB4u);
    ctx->pc = 0x29FAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FAACu;
            // 0x29fab0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FAB4u; }
        if (ctx->pc != 0x29FAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FAB4u; }
        if (ctx->pc != 0x29FAB4u) { return; }
    }
    ctx->pc = 0x29FAB4u;
label_29fab4:
    // 0x29fab4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x29fab4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_29fab8:
    // 0x29fab8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29fab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29fabc:
    // 0x29fabc: 0x24a5e0a8  addiu       $a1, $a1, -0x1F58
    ctx->pc = 0x29fabcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959272));
label_29fac0:
    // 0x29fac0: 0xc04b414  jal         func_12D050
label_29fac4:
    if (ctx->pc == 0x29FAC4u) {
        ctx->pc = 0x29FAC4u;
            // 0x29fac4: 0x24060043  addiu       $a2, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->pc = 0x29FAC8u;
        goto label_29fac8;
    }
    ctx->pc = 0x29FAC0u;
    SET_GPR_U32(ctx, 31, 0x29FAC8u);
    ctx->pc = 0x29FAC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FAC0u;
            // 0x29fac4: 0x24060043  addiu       $a2, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FAC8u; }
        if (ctx->pc != 0x29FAC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FAC8u; }
        if (ctx->pc != 0x29FAC8u) { return; }
    }
    ctx->pc = 0x29FAC8u;
label_29fac8:
    // 0x29fac8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x29fac8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_29facc:
    // 0x29facc: 0xaf8299e8  sw          $v0, -0x6618($gp)
    ctx->pc = 0x29faccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941160), GPR_U32(ctx, 2));
label_29fad0:
    // 0x29fad0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29fad0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29fad4:
    // 0x29fad4: 0x24a5e0d8  addiu       $a1, $a1, -0x1F28
    ctx->pc = 0x29fad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959320));
label_29fad8:
    // 0x29fad8: 0xc04b414  jal         func_12D050
label_29fadc:
    if (ctx->pc == 0x29FADCu) {
        ctx->pc = 0x29FADCu;
            // 0x29fadc: 0x24060043  addiu       $a2, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->pc = 0x29FAE0u;
        goto label_29fae0;
    }
    ctx->pc = 0x29FAD8u;
    SET_GPR_U32(ctx, 31, 0x29FAE0u);
    ctx->pc = 0x29FADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FAD8u;
            // 0x29fadc: 0x24060043  addiu       $a2, $zero, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FAE0u; }
        if (ctx->pc != 0x29FAE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FAE0u; }
        if (ctx->pc != 0x29FAE0u) { return; }
    }
    ctx->pc = 0x29FAE0u;
label_29fae0:
    // 0x29fae0: 0x8fa303e8  lw          $v1, 0x3E8($sp)
    ctx->pc = 0x29fae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1000)));
label_29fae4:
    // 0x29fae4: 0xaf8299e4  sw          $v0, -0x661C($gp)
    ctx->pc = 0x29fae4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941156), GPR_U32(ctx, 2));
label_29fae8:
    // 0x29fae8: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x29fae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_29faec:
    // 0x29faec: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_29faf0:
    if (ctx->pc == 0x29FAF0u) {
        ctx->pc = 0x29FAF0u;
            // 0x29faf0: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x29FAF4u;
        goto label_29faf4;
    }
    ctx->pc = 0x29FAECu;
    {
        const bool branch_taken_0x29faec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FAF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FAECu;
            // 0x29faf0: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29faec) {
            ctx->pc = 0x29FAFCu;
            goto label_29fafc;
        }
    }
    ctx->pc = 0x29FAF4u;
label_29faf4:
    // 0x29faf4: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x29faf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_29faf8:
    // 0x29faf8: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x29faf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_29fafc:
    // 0x29fafc: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29fafcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_29fb00:
    // 0x29fb00: 0xc04e748  jal         func_139D20
label_29fb04:
    if (ctx->pc == 0x29FB04u) {
        ctx->pc = 0x29FB04u;
            // 0x29fb04: 0x24846070  addiu       $a0, $a0, 0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
        ctx->pc = 0x29FB08u;
        goto label_29fb08;
    }
    ctx->pc = 0x29FB00u;
    SET_GPR_U32(ctx, 31, 0x29FB08u);
    ctx->pc = 0x29FB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FB00u;
            // 0x29fb04: 0x24846070  addiu       $a0, $a0, 0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FB08u; }
        if (ctx->pc != 0x29FB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FB08u; }
        if (ctx->pc != 0x29FB08u) { return; }
    }
    ctx->pc = 0x29FB08u;
label_29fb08:
    // 0x29fb08: 0xc04e640  jal         func_139900
label_29fb0c:
    if (ctx->pc == 0x29FB0Cu) {
        ctx->pc = 0x29FB0Cu;
            // 0x29fb0c: 0x27a403b0  addiu       $a0, $sp, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
        ctx->pc = 0x29FB10u;
        goto label_29fb10;
    }
    ctx->pc = 0x29FB08u;
    SET_GPR_U32(ctx, 31, 0x29FB10u);
    ctx->pc = 0x29FB0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FB08u;
            // 0x29fb0c: 0x27a403b0  addiu       $a0, $sp, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FB10u; }
        if (ctx->pc != 0x29FB10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FB10u; }
        if (ctx->pc != 0x29FB10u) { return; }
    }
    ctx->pc = 0x29FB10u;
label_29fb10:
    // 0x29fb10: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29fb10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_29fb14:
    // 0x29fb14: 0x27a403b0  addiu       $a0, $sp, 0x3B0
    ctx->pc = 0x29fb14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
label_29fb18:
    // 0x29fb18: 0x8c236094  lw          $v1, 0x6094($at)
    ctx->pc = 0x29fb18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24724)));
label_29fb1c:
    // 0x29fb1c: 0x24060280  addiu       $a2, $zero, 0x280
    ctx->pc = 0x29fb1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_29fb20:
    // 0x29fb20: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29fb20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_29fb24:
    // 0x29fb24: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29fb24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_29fb28:
    // 0x29fb28: 0x8c226090  lw          $v0, 0x6090($at)
    ctx->pc = 0x29fb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24720)));
label_29fb2c:
    // 0x29fb2c: 0xc04e79c  jal         func_139E70
label_29fb30:
    if (ctx->pc == 0x29FB30u) {
        ctx->pc = 0x29FB30u;
            // 0x29fb30: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x29FB34u;
        goto label_29fb34;
    }
    ctx->pc = 0x29FB2Cu;
    SET_GPR_U32(ctx, 31, 0x29FB34u);
    ctx->pc = 0x29FB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FB2Cu;
            // 0x29fb30: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FB34u; }
        if (ctx->pc != 0x29FB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FB34u; }
        if (ctx->pc != 0x29FB34u) { return; }
    }
    ctx->pc = 0x29FB34u;
label_29fb34:
    // 0x29fb34: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29fb34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_29fb38:
    // 0x29fb38: 0x24050280  addiu       $a1, $zero, 0x280
    ctx->pc = 0x29fb38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
label_29fb3c:
    // 0x29fb3c: 0xc04e748  jal         func_139D20
label_29fb40:
    if (ctx->pc == 0x29FB40u) {
        ctx->pc = 0x29FB40u;
            // 0x29fb40: 0x24846070  addiu       $a0, $a0, 0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
        ctx->pc = 0x29FB44u;
        goto label_29fb44;
    }
    ctx->pc = 0x29FB3Cu;
    SET_GPR_U32(ctx, 31, 0x29FB44u);
    ctx->pc = 0x29FB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FB3Cu;
            // 0x29fb40: 0x24846070  addiu       $a0, $a0, 0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FB44u; }
        if (ctx->pc != 0x29FB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FB44u; }
        if (ctx->pc != 0x29FB44u) { return; }
    }
    ctx->pc = 0x29FB44u;
label_29fb44:
    // 0x29fb44: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29fb44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_29fb48:
    // 0x29fb48: 0xc04e780  jal         func_139E00
label_29fb4c:
    if (ctx->pc == 0x29FB4Cu) {
        ctx->pc = 0x29FB4Cu;
            // 0x29fb4c: 0x24846070  addiu       $a0, $a0, 0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
        ctx->pc = 0x29FB50u;
        goto label_29fb50;
    }
    ctx->pc = 0x29FB48u;
    SET_GPR_U32(ctx, 31, 0x29FB50u);
    ctx->pc = 0x29FB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FB48u;
            // 0x29fb4c: 0x24846070  addiu       $a0, $a0, 0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FB50u; }
        if (ctx->pc != 0x29FB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FB50u; }
        if (ctx->pc != 0x29FB50u) { return; }
    }
    ctx->pc = 0x29FB50u;
label_29fb50:
    // 0x29fb50: 0xc0b61d8  jal         func_2D8760
label_29fb54:
    if (ctx->pc == 0x29FB54u) {
        ctx->pc = 0x29FB58u;
        goto label_29fb58;
    }
    ctx->pc = 0x29FB50u;
    SET_GPR_U32(ctx, 31, 0x29FB58u);
    ctx->pc = 0x2D8760u;
    if (runtime->hasFunction(0x2D8760u)) {
        auto targetFn = runtime->lookupFunction(0x2D8760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FB58u; }
        if (ctx->pc != 0x29FB58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGaijiImgPtr__Fv_0x2d8760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FB58u; }
        if (ctx->pc != 0x29FB58u) { return; }
    }
    ctx->pc = 0x29FB58u;
label_29fb58:
    // 0x29fb58: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29fb58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29fb5c:
    // 0x29fb5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29fb5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29fb60:
    // 0x29fb60: 0x24060046  addiu       $a2, $zero, 0x46
    ctx->pc = 0x29fb60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_29fb64:
    // 0x29fb64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29fb64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29fb68:
    // 0x29fb68: 0xc04b6a4  jal         func_12DA90
label_29fb6c:
    if (ctx->pc == 0x29FB6Cu) {
        ctx->pc = 0x29FB6Cu;
            // 0x29fb6c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29FB70u;
        goto label_29fb70;
    }
    ctx->pc = 0x29FB68u;
    SET_GPR_U32(ctx, 31, 0x29FB70u);
    ctx->pc = 0x29FB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FB68u;
            // 0x29fb6c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FB70u; }
        if (ctx->pc != 0x29FB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FB70u; }
        if (ctx->pc != 0x29FB70u) { return; }
    }
    ctx->pc = 0x29FB70u;
label_29fb70:
    // 0x29fb70: 0xc0b61f8  jal         func_2D87E0
label_29fb74:
    if (ctx->pc == 0x29FB74u) {
        ctx->pc = 0x29FB78u;
        goto label_29fb78;
    }
    ctx->pc = 0x29FB70u;
    SET_GPR_U32(ctx, 31, 0x29FB78u);
    ctx->pc = 0x2D87E0u;
    if (runtime->hasFunction(0x2D87E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D87E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FB78u; }
        if (ctx->pc != 0x29FB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontTex2ImgPtr__Fv_0x2d87e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FB78u; }
        if (ctx->pc != 0x29FB78u) { return; }
    }
    ctx->pc = 0x29FB78u;
label_29fb78:
    // 0x29fb78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29fb78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29fb7c:
    // 0x29fb7c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x29fb7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29fb80:
    // 0x29fb80: 0x24060046  addiu       $a2, $zero, 0x46
    ctx->pc = 0x29fb80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_29fb84:
    // 0x29fb84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29fb84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29fb88:
    // 0x29fb88: 0xc04b6a4  jal         func_12DA90
label_29fb8c:
    if (ctx->pc == 0x29FB8Cu) {
        ctx->pc = 0x29FB8Cu;
            // 0x29fb8c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29FB90u;
        goto label_29fb90;
    }
    ctx->pc = 0x29FB88u;
    SET_GPR_U32(ctx, 31, 0x29FB90u);
    ctx->pc = 0x29FB8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FB88u;
            // 0x29fb8c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FB90u; }
        if (ctx->pc != 0x29FB90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FB90u; }
        if (ctx->pc != 0x29FB90u) { return; }
    }
    ctx->pc = 0x29FB90u;
label_29fb90:
    // 0x29fb90: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29fb90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_29fb94:
    // 0x29fb94: 0xc04e780  jal         func_139E00
label_29fb98:
    if (ctx->pc == 0x29FB98u) {
        ctx->pc = 0x29FB98u;
            // 0x29fb98: 0x24846070  addiu       $a0, $a0, 0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
        ctx->pc = 0x29FB9Cu;
        goto label_29fb9c;
    }
    ctx->pc = 0x29FB94u;
    SET_GPR_U32(ctx, 31, 0x29FB9Cu);
    ctx->pc = 0x29FB98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FB94u;
            // 0x29fb98: 0x24846070  addiu       $a0, $a0, 0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FB9Cu; }
        if (ctx->pc != 0x29FB9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FB9Cu; }
        if (ctx->pc != 0x29FB9Cu) { return; }
    }
    ctx->pc = 0x29FB9Cu;
label_29fb9c:
    // 0x29fb9c: 0x24020046  addiu       $v0, $zero, 0x46
    ctx->pc = 0x29fb9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_29fba0:
    // 0x29fba0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x29fba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_29fba4:
    // 0x29fba4: 0xac22d624  sw          $v0, -0x29DC($at)
    ctx->pc = 0x29fba4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956580), GPR_U32(ctx, 2));
label_29fba8:
    // 0x29fba8: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x29fba8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_29fbac:
    // 0x29fbac: 0x24020054  addiu       $v0, $zero, 0x54
    ctx->pc = 0x29fbacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
label_29fbb0:
    // 0x29fbb0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x29fbb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_29fbb4:
    // 0x29fbb4: 0xac22d61c  sw          $v0, -0x29E4($at)
    ctx->pc = 0x29fbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956572), GPR_U32(ctx, 2));
label_29fbb8:
    // 0x29fbb8: 0x2484e0e8  addiu       $a0, $a0, -0x1F18
    ctx->pc = 0x29fbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959336));
label_29fbbc:
    // 0x29fbbc: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x29fbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_29fbc0:
    // 0x29fbc0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x29fbc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_29fbc4:
    // 0x29fbc4: 0xac22d620  sw          $v0, -0x29E0($at)
    ctx->pc = 0x29fbc4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956576), GPR_U32(ctx, 2));
label_29fbc8:
    // 0x29fbc8: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29fbc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_29fbcc:
    // 0x29fbcc: 0x8f8599ec  lw          $a1, -0x6614($gp)
    ctx->pc = 0x29fbccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
label_29fbd0:
    // 0x29fbd0: 0x8c236094  lw          $v1, 0x6094($at)
    ctx->pc = 0x29fbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24724)));
label_29fbd4:
    // 0x29fbd4: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29fbd4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_29fbd8:
    // 0x29fbd8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29fbd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_29fbdc:
    // 0x29fbdc: 0x8c226090  lw          $v0, 0x6090($at)
    ctx->pc = 0x29fbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24720)));
label_29fbe0:
    // 0x29fbe0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x29fbe0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_29fbe4:
    // 0x29fbe4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29fbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29fbe8:
    // 0x29fbe8: 0xac25d608  sw          $a1, -0x29F8($at)
    ctx->pc = 0x29fbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956552), GPR_U32(ctx, 5));
label_29fbec:
    // 0x29fbec: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x29fbecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_29fbf0:
    // 0x29fbf0: 0xac22d610  sw          $v0, -0x29F0($at)
    ctx->pc = 0x29fbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956560), GPR_U32(ctx, 2));
label_29fbf4:
    // 0x29fbf4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x29fbf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_29fbf8:
    // 0x29fbf8: 0x8c25d610  lw          $a1, -0x29F0($at)
    ctx->pc = 0x29fbf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956560)));
label_29fbfc:
    // 0x29fbfc: 0xc094440  jal         func_251100
label_29fc00:
    if (ctx->pc == 0x29FC00u) {
        ctx->pc = 0x29FC00u;
            // 0x29fc00: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x29FC04u;
        goto label_29fc04;
    }
    ctx->pc = 0x29FBFCu;
    SET_GPR_U32(ctx, 31, 0x29FC04u);
    ctx->pc = 0x29FC00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FBFCu;
            // 0x29fc00: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251100u;
    if (runtime->hasFunction(0x251100u)) {
        auto targetFn = runtime->lookupFunction(0x251100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FC04u; }
        if (ctx->pc != 0x29FC04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileMenu__FPcP1i_0x251100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FC04u; }
        if (ctx->pc != 0x29FC04u) { return; }
    }
    ctx->pc = 0x29FC04u;
label_29fc04:
    // 0x29fc04: 0xafa203e8  sw          $v0, 0x3E8($sp)
    ctx->pc = 0x29fc04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1000), GPR_U32(ctx, 2));
label_29fc08:
    // 0x29fc08: 0x8fa303e8  lw          $v1, 0x3E8($sp)
    ctx->pc = 0x29fc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1000)));
label_29fc0c:
    // 0x29fc0c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x29fc0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_29fc10:
    // 0x29fc10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_29fc14:
    if (ctx->pc == 0x29FC14u) {
        ctx->pc = 0x29FC14u;
            // 0x29fc14: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x29FC18u;
        goto label_29fc18;
    }
    ctx->pc = 0x29FC10u;
    {
        const bool branch_taken_0x29fc10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FC14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FC10u;
            // 0x29fc14: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fc10) {
            ctx->pc = 0x29FC20u;
            goto label_29fc20;
        }
    }
    ctx->pc = 0x29FC18u;
label_29fc18:
    // 0x29fc18: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x29fc18u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_29fc1c:
    // 0x29fc1c: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x29fc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_29fc20:
    // 0x29fc20: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29fc20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_29fc24:
    // 0x29fc24: 0xc04e748  jal         func_139D20
label_29fc28:
    if (ctx->pc == 0x29FC28u) {
        ctx->pc = 0x29FC28u;
            // 0x29fc28: 0x24846070  addiu       $a0, $a0, 0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
        ctx->pc = 0x29FC2Cu;
        goto label_29fc2c;
    }
    ctx->pc = 0x29FC24u;
    SET_GPR_U32(ctx, 31, 0x29FC2Cu);
    ctx->pc = 0x29FC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FC24u;
            // 0x29fc28: 0x24846070  addiu       $a0, $a0, 0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FC2Cu; }
        if (ctx->pc != 0x29FC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FC2Cu; }
        if (ctx->pc != 0x29FC2Cu) { return; }
    }
    ctx->pc = 0x29FC2Cu;
label_29fc2c:
    // 0x29fc2c: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29fc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_29fc30:
    // 0x29fc30: 0xc04e780  jal         func_139E00
label_29fc34:
    if (ctx->pc == 0x29FC34u) {
        ctx->pc = 0x29FC34u;
            // 0x29fc34: 0x24846070  addiu       $a0, $a0, 0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
        ctx->pc = 0x29FC38u;
        goto label_29fc38;
    }
    ctx->pc = 0x29FC30u;
    SET_GPR_U32(ctx, 31, 0x29FC38u);
    ctx->pc = 0x29FC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FC30u;
            // 0x29fc34: 0x24846070  addiu       $a0, $a0, 0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FC38u; }
        if (ctx->pc != 0x29FC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FC38u; }
        if (ctx->pc != 0x29FC38u) { return; }
    }
    ctx->pc = 0x29FC38u;
label_29fc38:
    // 0x29fc38: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29fc38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_29fc3c:
    // 0x29fc3c: 0x24050105  addiu       $a1, $zero, 0x105
    ctx->pc = 0x29fc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
label_29fc40:
    // 0x29fc40: 0xc04e748  jal         func_139D20
label_29fc44:
    if (ctx->pc == 0x29FC44u) {
        ctx->pc = 0x29FC44u;
            // 0x29fc44: 0x24846070  addiu       $a0, $a0, 0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
        ctx->pc = 0x29FC48u;
        goto label_29fc48;
    }
    ctx->pc = 0x29FC40u;
    SET_GPR_U32(ctx, 31, 0x29FC48u);
    ctx->pc = 0x29FC44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FC40u;
            // 0x29fc44: 0x24846070  addiu       $a0, $a0, 0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FC48u; }
        if (ctx->pc != 0x29FC48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FC48u; }
        if (ctx->pc != 0x29FC48u) { return; }
    }
    ctx->pc = 0x29FC48u;
label_29fc48:
    // 0x29fc48: 0x24041030  addiu       $a0, $zero, 0x1030
    ctx->pc = 0x29fc48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4144));
label_29fc4c:
    // 0x29fc4c: 0xc04e638  jal         func_1398E0
label_29fc50:
    if (ctx->pc == 0x29FC50u) {
        ctx->pc = 0x29FC50u;
            // 0x29fc50: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29FC54u;
        goto label_29fc54;
    }
    ctx->pc = 0x29FC4Cu;
    SET_GPR_U32(ctx, 31, 0x29FC54u);
    ctx->pc = 0x29FC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FC4Cu;
            // 0x29fc50: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FC54u; }
        if (ctx->pc != 0x29FC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FC54u; }
        if (ctx->pc != 0x29FC54u) { return; }
    }
    ctx->pc = 0x29FC54u;
label_29fc54:
    // 0x29fc54: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_29fc58:
    if (ctx->pc == 0x29FC58u) {
        ctx->pc = 0x29FC58u;
            // 0x29fc58: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29FC5Cu;
        goto label_29fc5c;
    }
    ctx->pc = 0x29FC54u;
    {
        const bool branch_taken_0x29fc54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FC58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FC54u;
            // 0x29fc58: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fc54) {
            ctx->pc = 0x29FCFCu;
            goto label_29fcfc;
        }
    }
    ctx->pc = 0x29FC5Cu;
label_29fc5c:
    // 0x29fc5c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x29fc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_29fc60:
    // 0x29fc60: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x29fc60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_29fc64:
    // 0x29fc64: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29fc64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29fc68:
    // 0x29fc68: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x29fc68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29fc6c:
    // 0x29fc6c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x29fc6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_29fc70:
    // 0x29fc70: 0x320f809  jalr        $t9
label_29fc74:
    if (ctx->pc == 0x29FC74u) {
        ctx->pc = 0x29FC74u;
            // 0x29fc74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29FC78u;
        goto label_29fc78;
    }
    ctx->pc = 0x29FC70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29FC78u);
        ctx->pc = 0x29FC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FC70u;
            // 0x29fc74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29FC78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29FC78u; }
            if (ctx->pc != 0x29FC78u) { return; }
        }
        }
    }
    ctx->pc = 0x29FC78u;
label_29fc78:
    // 0x29fc78: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x29fc78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_29fc7c:
    // 0x29fc7c: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x29fc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_29fc80:
    // 0x29fc80: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29fc80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29fc84:
    // 0x29fc84: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x29fc84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29fc88:
    // 0x29fc88: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x29fc88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_29fc8c:
    // 0x29fc8c: 0x320f809  jalr        $t9
label_29fc90:
    if (ctx->pc == 0x29FC90u) {
        ctx->pc = 0x29FC90u;
            // 0x29fc90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29FC94u;
        goto label_29fc94;
    }
    ctx->pc = 0x29FC8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29FC94u);
        ctx->pc = 0x29FC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FC8Cu;
            // 0x29fc90: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29FC94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29FC94u; }
            if (ctx->pc != 0x29FC94u) { return; }
        }
        }
    }
    ctx->pc = 0x29FC94u;
label_29fc94:
    // 0x29fc94: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x29fc94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_29fc98:
    // 0x29fc98: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x29fc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_29fc9c:
    // 0x29fc9c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29fc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29fca0:
    // 0x29fca0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x29fca0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29fca4:
    // 0x29fca4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x29fca4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_29fca8:
    // 0x29fca8: 0x320f809  jalr        $t9
label_29fcac:
    if (ctx->pc == 0x29FCACu) {
        ctx->pc = 0x29FCACu;
            // 0x29fcac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29FCB0u;
        goto label_29fcb0;
    }
    ctx->pc = 0x29FCA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29FCB0u);
        ctx->pc = 0x29FCACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FCA8u;
            // 0x29fcac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29FCB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29FCB0u; }
            if (ctx->pc != 0x29FCB0u) { return; }
        }
        }
    }
    ctx->pc = 0x29FCB0u;
label_29fcb0:
    // 0x29fcb0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x29fcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_29fcb4:
    // 0x29fcb4: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x29fcb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_29fcb8:
    // 0x29fcb8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x29fcb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_29fcbc:
    // 0x29fcbc: 0xae00035c  sw          $zero, 0x35C($s0)
    ctx->pc = 0x29fcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 0));
label_29fcc0:
    // 0x29fcc0: 0xae000364  sw          $zero, 0x364($s0)
    ctx->pc = 0x29fcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 0));
label_29fcc4:
    // 0x29fcc4: 0xae000360  sw          $zero, 0x360($s0)
    ctx->pc = 0x29fcc4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 0));
label_29fcc8:
    // 0x29fcc8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x29fcc8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29fccc:
    // 0x29fccc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x29fcccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_29fcd0:
    // 0x29fcd0: 0x320f809  jalr        $t9
label_29fcd4:
    if (ctx->pc == 0x29FCD4u) {
        ctx->pc = 0x29FCD4u;
            // 0x29fcd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29FCD8u;
        goto label_29fcd8;
    }
    ctx->pc = 0x29FCD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29FCD8u);
        ctx->pc = 0x29FCD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FCD0u;
            // 0x29fcd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29FCD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29FCD8u; }
            if (ctx->pc != 0x29FCD8u) { return; }
        }
        }
    }
    ctx->pc = 0x29FCD8u;
label_29fcd8:
    // 0x29fcd8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x29fcd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_29fcdc:
    // 0x29fcdc: 0x260406bc  addiu       $a0, $s0, 0x6BC
    ctx->pc = 0x29fcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1724));
label_29fce0:
    // 0x29fce0: 0x244256f0  addiu       $v0, $v0, 0x56F0
    ctx->pc = 0x29fce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22256));
label_29fce4:
    // 0x29fce4: 0xc061b34  jal         func_186CD0
label_29fce8:
    if (ctx->pc == 0x29FCE8u) {
        ctx->pc = 0x29FCE8u;
            // 0x29fce8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x29FCECu;
        goto label_29fcec;
    }
    ctx->pc = 0x29FCE4u;
    SET_GPR_U32(ctx, 31, 0x29FCECu);
    ctx->pc = 0x29FCE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FCE4u;
            // 0x29fce8: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186CD0u;
    if (runtime->hasFunction(0x186CD0u)) {
        auto targetFn = runtime->lookupFunction(0x186CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FCECu; }
        if (ctx->pc != 0x29FCECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10CRunScriptFv_0x186cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FCECu; }
        if (ctx->pc != 0x29FCECu) { return; }
    }
    ctx->pc = 0x29FCECu;
label_29fcec:
    // 0x29fcec: 0x26040910  addiu       $a0, $s0, 0x910
    ctx->pc = 0x29fcecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2320));
label_29fcf0:
    // 0x29fcf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29fcf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29fcf4:
    // 0x29fcf4: 0xc049c86  jal         func_127218
label_29fcf8:
    if (ctx->pc == 0x29FCF8u) {
        ctx->pc = 0x29FCF8u;
            // 0x29fcf8: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->pc = 0x29FCFCu;
        goto label_29fcfc;
    }
    ctx->pc = 0x29FCF4u;
    SET_GPR_U32(ctx, 31, 0x29FCFCu);
    ctx->pc = 0x29FCF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FCF4u;
            // 0x29fcf8: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FCFCu; }
        if (ctx->pc != 0x29FCFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FCFCu; }
        if (ctx->pc != 0x29FCFCu) { return; }
    }
    ctx->pc = 0x29FCFCu;
label_29fcfc:
    // 0x29fcfc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x29fcfcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29fd00:
    // 0x29fd00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29fd00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29fd04:
    // 0x29fd04: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x29fd04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_29fd08:
    // 0x29fd08: 0x320f809  jalr        $t9
label_29fd0c:
    if (ctx->pc == 0x29FD0Cu) {
        ctx->pc = 0x29FD0Cu;
            // 0x29fd0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29FD10u;
        goto label_29fd10;
    }
    ctx->pc = 0x29FD08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x29FD10u);
        ctx->pc = 0x29FD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FD08u;
            // 0x29fd0c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29FD10u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29FD10u; }
            if (ctx->pc != 0x29FD10u) { return; }
        }
        }
    }
    ctx->pc = 0x29FD10u;
label_29fd10:
    // 0x29fd10: 0x8f8499ec  lw          $a0, -0x6614($gp)
    ctx->pc = 0x29fd10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
label_29fd14:
    // 0x29fd14: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x29fd14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_29fd18:
    // 0x29fd18: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x29fd18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29fd1c:
    // 0x29fd1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x29fd1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29fd20:
    // 0x29fd20: 0xc0a0e8c  jal         func_283A30
label_29fd24:
    if (ctx->pc == 0x29FD24u) {
        ctx->pc = 0x29FD24u;
            // 0x29fd24: 0x24e7e0f8  addiu       $a3, $a3, -0x1F08 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294959352));
        ctx->pc = 0x29FD28u;
        goto label_29fd28;
    }
    ctx->pc = 0x29FD20u;
    SET_GPR_U32(ctx, 31, 0x29FD28u);
    ctx->pc = 0x29FD24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FD20u;
            // 0x29fd24: 0x24e7e0f8  addiu       $a3, $a3, -0x1F08 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294959352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283A30u;
    if (runtime->hasFunction(0x283A30u)) {
        auto targetFn = runtime->lookupFunction(0x283A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FD28u; }
        if (ctx->pc != 0x29FD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignChara__6CSceneFiP11CCharacter2Pc_0x283a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FD28u; }
        if (ctx->pc != 0x29FD28u) { return; }
    }
    ctx->pc = 0x29FD28u;
label_29fd28:
    // 0x29fd28: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29fd28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_29fd2c:
    // 0x29fd2c: 0xc04e780  jal         func_139E00
label_29fd30:
    if (ctx->pc == 0x29FD30u) {
        ctx->pc = 0x29FD30u;
            // 0x29fd30: 0x24846070  addiu       $a0, $a0, 0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
        ctx->pc = 0x29FD34u;
        goto label_29fd34;
    }
    ctx->pc = 0x29FD2Cu;
    SET_GPR_U32(ctx, 31, 0x29FD34u);
    ctx->pc = 0x29FD30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FD2Cu;
            // 0x29fd30: 0x24846070  addiu       $a0, $a0, 0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FD34u; }
        if (ctx->pc != 0x29FD34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FD34u; }
        if (ctx->pc != 0x29FD34u) { return; }
    }
    ctx->pc = 0x29FD34u;
label_29fd34:
    // 0x29fd34: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29fd34u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_29fd38:
    // 0x29fd38: 0x8f8499ec  lw          $a0, -0x6614($gp)
    ctx->pc = 0x29fd38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
label_29fd3c:
    // 0x29fd3c: 0x8c236094  lw          $v1, 0x6094($at)
    ctx->pc = 0x29fd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24724)));
label_29fd40:
    // 0x29fd40: 0x240501f4  addiu       $a1, $zero, 0x1F4
    ctx->pc = 0x29fd40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
label_29fd44:
    // 0x29fd44: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29fd44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_29fd48:
    // 0x29fd48: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x29fd48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_29fd4c:
    // 0x29fd4c: 0x8c226090  lw          $v0, 0x6090($at)
    ctx->pc = 0x29fd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24720)));
label_29fd50:
    // 0x29fd50: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x29fd50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29fd54:
    // 0x29fd54: 0xc0a9b5c  jal         func_2A6D70
label_29fd58:
    if (ctx->pc == 0x29FD58u) {
        ctx->pc = 0x29FD58u;
            // 0x29fd58: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29FD5Cu;
        goto label_29fd5c;
    }
    ctx->pc = 0x29FD54u;
    SET_GPR_U32(ctx, 31, 0x29FD5Cu);
    ctx->pc = 0x29FD58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FD54u;
            // 0x29fd58: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6D70u;
    if (runtime->hasFunction(0x2A6D70u)) {
        auto targetFn = runtime->lookupFunction(0x2A6D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FD5Cu; }
        if (ctx->pc != 0x29FD5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSound__6CSceneFiP1_0x2a6d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FD5Cu; }
        if (ctx->pc != 0x29FD5Cu) { return; }
    }
    ctx->pc = 0x29FD5Cu;
label_29fd5c:
    // 0x29fd5c: 0xc0a99f0  jal         func_2A67C0
label_29fd60:
    if (ctx->pc == 0x29FD60u) {
        ctx->pc = 0x29FD60u;
            // 0x29fd60: 0x8f8499ec  lw          $a0, -0x6614($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
        ctx->pc = 0x29FD64u;
        goto label_29fd64;
    }
    ctx->pc = 0x29FD5Cu;
    SET_GPR_U32(ctx, 31, 0x29FD64u);
    ctx->pc = 0x29FD60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FD5Cu;
            // 0x29fd60: 0x8f8499ec  lw          $a0, -0x6614($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A67C0u;
    if (runtime->hasFunction(0x2A67C0u)) {
        auto targetFn = runtime->lookupFunction(0x2A67C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FD64u; }
        if (ctx->pc != 0x29FD64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopEnvBGM__6CSceneFv_0x2a67c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FD64u; }
        if (ctx->pc != 0x29FD64u) { return; }
    }
    ctx->pc = 0x29FD64u;
label_29fd64:
    // 0x29fd64: 0xc063560  jal         func_18D580
label_29fd68:
    if (ctx->pc == 0x29FD68u) {
        ctx->pc = 0x29FD6Cu;
        goto label_29fd6c;
    }
    ctx->pc = 0x29FD64u;
    SET_GPR_U32(ctx, 31, 0x29FD6Cu);
    ctx->pc = 0x18D580u;
    if (runtime->hasFunction(0x18D580u)) {
        auto targetFn = runtime->lookupFunction(0x18D580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FD6Cu; }
        if (ctx->pc != 0x29FD6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndWaitTransBd__Fv_0x18d580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FD6Cu; }
        if (ctx->pc != 0x29FD6Cu) { return; }
    }
    ctx->pc = 0x29FD6Cu;
label_29fd6c:
    // 0x29fd6c: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x29fd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_29fd70:
    // 0x29fd70: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29fd70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29fd74:
    // 0x29fd74: 0x2484e100  addiu       $a0, $a0, -0x1F00
    ctx->pc = 0x29fd74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959360));
label_29fd78:
    // 0x29fd78: 0x27a603e8  addiu       $a2, $sp, 0x3E8
    ctx->pc = 0x29fd78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1000));
label_29fd7c:
    // 0x29fd7c: 0xc0524dc  jal         func_149370
label_29fd80:
    if (ctx->pc == 0x29FD80u) {
        ctx->pc = 0x29FD80u;
            // 0x29fd80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29FD84u;
        goto label_29fd84;
    }
    ctx->pc = 0x29FD7Cu;
    SET_GPR_U32(ctx, 31, 0x29FD84u);
    ctx->pc = 0x29FD80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FD7Cu;
            // 0x29fd80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FD84u; }
        if (ctx->pc != 0x29FD84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FD84u; }
        if (ctx->pc != 0x29FD84u) { return; }
    }
    ctx->pc = 0x29FD84u;
label_29fd84:
    // 0x29fd84: 0xc06334c  jal         func_18CD30
label_29fd88:
    if (ctx->pc == 0x29FD88u) {
        ctx->pc = 0x29FD88u;
            // 0x29fd88: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x29FD8Cu;
        goto label_29fd8c;
    }
    ctx->pc = 0x29FD84u;
    SET_GPR_U32(ctx, 31, 0x29FD8Cu);
    ctx->pc = 0x29FD88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FD84u;
            // 0x29fd88: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CD30u;
    if (runtime->hasFunction(0x18CD30u)) {
        auto targetFn = runtime->lookupFunction(0x18CD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FD8Cu; }
        if (ctx->pc != 0x29FD8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndInitPort__Fi_0x18cd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FD8Cu; }
        if (ctx->pc != 0x29FD8Cu) { return; }
    }
    ctx->pc = 0x29FD8Cu;
label_29fd8c:
    // 0x29fd8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x29fd8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29fd90:
    // 0x29fd90: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x29fd90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_29fd94:
    // 0x29fd94: 0xc06368c  jal         func_18DA30
label_29fd98:
    if (ctx->pc == 0x29FD98u) {
        ctx->pc = 0x29FD98u;
            // 0x29fd98: 0x27a603b0  addiu       $a2, $sp, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
        ctx->pc = 0x29FD9Cu;
        goto label_29fd9c;
    }
    ctx->pc = 0x29FD94u;
    SET_GPR_U32(ctx, 31, 0x29FD9Cu);
    ctx->pc = 0x29FD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FD94u;
            // 0x29fd98: 0x27a603b0  addiu       $a2, $sp, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DA30u;
    if (runtime->hasFunction(0x18DA30u)) {
        auto targetFn = runtime->lookupFunction(0x18DA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FD9Cu; }
        if (ctx->pc != 0x29FD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndLoadSound__FiPUiP9mgCMemory_0x18da30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FD9Cu; }
        if (ctx->pc != 0x29FD9Cu) { return; }
    }
    ctx->pc = 0x29FD9Cu;
label_29fd9c:
    // 0x29fd9c: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29fd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_29fda0:
    // 0x29fda0: 0xaf8299f0  sw          $v0, -0x6610($gp)
    ctx->pc = 0x29fda0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294941168), GPR_U32(ctx, 2));
label_29fda4:
    // 0x29fda4: 0xc04e780  jal         func_139E00
label_29fda8:
    if (ctx->pc == 0x29FDA8u) {
        ctx->pc = 0x29FDA8u;
            // 0x29fda8: 0x24846070  addiu       $a0, $a0, 0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
        ctx->pc = 0x29FDACu;
        goto label_29fdac;
    }
    ctx->pc = 0x29FDA4u;
    SET_GPR_U32(ctx, 31, 0x29FDACu);
    ctx->pc = 0x29FDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FDA4u;
            // 0x29fda8: 0x24846070  addiu       $a0, $a0, 0x6070 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FDACu; }
        if (ctx->pc != 0x29FDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FDACu; }
        if (ctx->pc != 0x29FDACu) { return; }
    }
    ctx->pc = 0x29FDACu;
label_29fdac:
    // 0x29fdac: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29fdacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_29fdb0:
    // 0x29fdb0: 0x3c0401f0  lui         $a0, 0x1F0
    ctx->pc = 0x29fdb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
label_29fdb4:
    // 0x29fdb4: 0x8c236098  lw          $v1, 0x6098($at)
    ctx->pc = 0x29fdb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24728)));
label_29fdb8:
    // 0x29fdb8: 0x24846100  addiu       $a0, $a0, 0x6100
    ctx->pc = 0x29fdb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24832));
label_29fdbc:
    // 0x29fdbc: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29fdbcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_29fdc0:
    // 0x29fdc0: 0x8c256094  lw          $a1, 0x6094($at)
    ctx->pc = 0x29fdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24724)));
label_29fdc4:
    // 0x29fdc4: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29fdc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_29fdc8:
    // 0x29fdc8: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x29fdc8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_29fdcc:
    // 0x29fdcc: 0x8c226090  lw          $v0, 0x6090($at)
    ctx->pc = 0x29fdccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24720)));
label_29fdd0:
    // 0x29fdd0: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x29fdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_29fdd4:
    // 0x29fdd4: 0xc04e79c  jal         func_139E70
label_29fdd8:
    if (ctx->pc == 0x29FDD8u) {
        ctx->pc = 0x29FDD8u;
            // 0x29fdd8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x29FDDCu;
        goto label_29fddc;
    }
    ctx->pc = 0x29FDD4u;
    SET_GPR_U32(ctx, 31, 0x29FDDCu);
    ctx->pc = 0x29FDD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FDD4u;
            // 0x29fdd8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FDDCu; }
        if (ctx->pc != 0x29FDDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FDDCu; }
        if (ctx->pc != 0x29FDDCu) { return; }
    }
    ctx->pc = 0x29FDDCu;
label_29fddc:
    // 0x29fddc: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29fddcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_29fde0:
    // 0x29fde0: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x29fde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
label_29fde4:
    // 0x29fde4: 0x8c246124  lw          $a0, 0x6124($at)
    ctx->pc = 0x29fde4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24868)));
label_29fde8:
    // 0x29fde8: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29fde8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_29fdec:
    // 0x29fdec: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x29fdecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_29fdf0:
    // 0x29fdf0: 0x8c236120  lw          $v1, 0x6120($at)
    ctx->pc = 0x29fdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 24864)));
label_29fdf4:
    // 0x29fdf4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x29fdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_29fdf8:
    // 0x29fdf8: 0xaf838ac0  sw          $v1, -0x7540($gp)
    ctx->pc = 0x29fdf8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937280), GPR_U32(ctx, 3));
label_29fdfc:
    // 0x29fdfc: 0xac43003c  sw          $v1, 0x3C($v0)
    ctx->pc = 0x29fdfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
label_29fe00:
    // 0x29fe00: 0x8f8299ec  lw          $v0, -0x6614($gp)
    ctx->pc = 0x29fe00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941164)));
label_29fe04:
    // 0x29fe04: 0xc05f5d4  jal         func_17D750
label_29fe08:
    if (ctx->pc == 0x29FE08u) {
        ctx->pc = 0x29FE08u;
            // 0x29fe08: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->pc = 0x29FE0Cu;
        goto label_29fe0c;
    }
    ctx->pc = 0x29FE04u;
    SET_GPR_U32(ctx, 31, 0x29FE0Cu);
    ctx->pc = 0x29FE08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FE04u;
            // 0x29fe08: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D750u;
    if (runtime->hasFunction(0x17D750u)) {
        auto targetFn = runtime->lookupFunction(0x17D750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FE0Cu; }
        if (ctx->pc != 0x29FE0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__10CFadeInOutFv_0x17d750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FE0Cu; }
        if (ctx->pc != 0x29FE0Cu) { return; }
    }
    ctx->pc = 0x29FE0Cu;
label_29fe0c:
    // 0x29fe0c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x29fe0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_29fe10:
    // 0x29fe10: 0x24055000  addiu       $a1, $zero, 0x5000
    ctx->pc = 0x29fe10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
label_29fe14:
    // 0x29fe14: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x29fe14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_29fe18:
    // 0x29fe18: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x29fe18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_29fe1c:
    // 0x29fe1c: 0xc052c2c  jal         func_14B0B0
label_29fe20:
    if (ctx->pc == 0x29FE20u) {
        ctx->pc = 0x29FE20u;
            // 0x29fe20: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x29FE24u;
        goto label_29fe24;
    }
    ctx->pc = 0x29FE1Cu;
    SET_GPR_U32(ctx, 31, 0x29FE24u);
    ctx->pc = 0x29FE20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FE1Cu;
            // 0x29fe20: 0x24070004  addiu       $a3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B0B0u;
    if (runtime->hasFunction(0x14B0B0u)) {
        auto targetFn = runtime->lookupFunction(0x14B0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FE24u; }
        if (ctx->pc != 0x29FE24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAutoRepeat__8CGamePadFiii_0x14b0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FE24u; }
        if (ctx->pc != 0x29FE24u) { return; }
    }
    ctx->pc = 0x29FE24u;
label_29fe24:
    // 0x29fe24: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x29fe24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_29fe28:
    // 0x29fe28: 0x24050078  addiu       $a1, $zero, 0x78
    ctx->pc = 0x29fe28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_29fe2c:
    // 0x29fe2c: 0xc052d44  jal         func_14B510
label_29fe30:
    if (ctx->pc == 0x29FE30u) {
        ctx->pc = 0x29FE30u;
            // 0x29fe30: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x29FE34u;
        goto label_29fe34;
    }
    ctx->pc = 0x29FE2Cu;
    SET_GPR_U32(ctx, 31, 0x29FE34u);
    ctx->pc = 0x29FE30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FE2Cu;
            // 0x29fe30: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B510u;
    if (runtime->hasFunction(0x14B510u)) {
        auto targetFn = runtime->lookupFunction(0x14B510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FE34u; }
        if (ctx->pc != 0x29FE34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuModeOn__8CGamePadFi_0x14b510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FE34u; }
        if (ctx->pc != 0x29FE34u) { return; }
    }
    ctx->pc = 0x29FE34u;
label_29fe34:
    // 0x29fe34: 0x8383996c  lb          $v1, -0x6694($gp)
    ctx->pc = 0x29fe34u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941036)));
label_29fe38:
    // 0x29fe38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x29fe38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29fe3c:
    // 0x29fe3c: 0xa3809970  sb          $zero, -0x6690($gp)
    ctx->pc = 0x29fe3cu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941040), (uint8_t)GPR_U32(ctx, 0));
label_29fe40:
    // 0x29fe40: 0x14640007  bne         $v1, $a0, . + 4 + (0x7 << 2)
label_29fe44:
    if (ctx->pc == 0x29FE44u) {
        ctx->pc = 0x29FE44u;
            // 0x29fe44: 0xaf809978  sw          $zero, -0x6688($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941048), GPR_U32(ctx, 0));
        ctx->pc = 0x29FE48u;
        goto label_29fe48;
    }
    ctx->pc = 0x29FE40u;
    {
        const bool branch_taken_0x29fe40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x29FE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FE40u;
            // 0x29fe44: 0xaf809978  sw          $zero, -0x6688($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941048), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fe40) {
            ctx->pc = 0x29FE60u;
            goto label_29fe60;
        }
    }
    ctx->pc = 0x29FE48u;
label_29fe48:
    // 0x29fe48: 0x8f83997c  lw          $v1, -0x6684($gp)
    ctx->pc = 0x29fe48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
label_29fe4c:
    // 0x29fe4c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x29fe4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29fe50:
    // 0x29fe50: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x29fe50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_29fe54:
    // 0x29fe54: 0x8f83997c  lw          $v1, -0x6684($gp)
    ctx->pc = 0x29fe54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
label_29fe58:
    // 0x29fe58: 0x10000029  b           . + 4 + (0x29 << 2)
label_29fe5c:
    if (ctx->pc == 0x29FE5Cu) {
        ctx->pc = 0x29FE5Cu;
            // 0x29fe5c: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->pc = 0x29FE60u;
        goto label_29fe60;
    }
    ctx->pc = 0x29FE58u;
    {
        const bool branch_taken_0x29fe58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FE5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FE58u;
            // 0x29fe5c: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fe58) {
            ctx->pc = 0x29FF00u;
            goto label_29ff00;
        }
    }
    ctx->pc = 0x29FE60u;
label_29fe60:
    // 0x29fe60: 0x14600027  bnez        $v1, . + 4 + (0x27 << 2)
label_29fe64:
    if (ctx->pc == 0x29FE64u) {
        ctx->pc = 0x29FE68u;
        goto label_29fe68;
    }
    ctx->pc = 0x29FE60u;
    {
        const bool branch_taken_0x29fe60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29fe60) {
            ctx->pc = 0x29FF00u;
            goto label_29ff00;
        }
    }
    ctx->pc = 0x29FE68u;
label_29fe68:
    // 0x29fe68: 0x93829964  lbu         $v0, -0x669C($gp)
    ctx->pc = 0x29fe68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941028)));
label_29fe6c:
    // 0x29fe6c: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_29fe70:
    if (ctx->pc == 0x29FE70u) {
        ctx->pc = 0x29FE74u;
        goto label_29fe74;
    }
    ctx->pc = 0x29FE6Cu;
    {
        const bool branch_taken_0x29fe6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29fe6c) {
            ctx->pc = 0x29FEDCu;
            goto label_29fedc;
        }
    }
    ctx->pc = 0x29FE74u;
label_29fe74:
    // 0x29fe74: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x29fe74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
label_29fe78:
    // 0x29fe78: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x29fe78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_29fe7c:
    // 0x29fe7c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29fe7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29fe80:
    // 0x29fe80: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x29fe80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_29fe84:
    // 0x29fe84: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x29fe84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
label_29fe88:
    // 0x29fe88: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x29fe88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_29fe8c:
    // 0x29fe8c: 0x93828460  lbu         $v0, -0x7BA0($gp)
    ctx->pc = 0x29fe8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935648)));
label_29fe90:
    // 0x29fe90: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_29fe94:
    if (ctx->pc == 0x29FE94u) {
        ctx->pc = 0x29FE94u;
            // 0x29fe94: 0x3c0401f0  lui         $a0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
        ctx->pc = 0x29FE98u;
        goto label_29fe98;
    }
    ctx->pc = 0x29FE90u;
    {
        const bool branch_taken_0x29fe90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FE90u;
            // 0x29fe94: 0x3c0401f0  lui         $a0, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)496 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fe90) {
            ctx->pc = 0x29FEC0u;
            goto label_29fec0;
        }
    }
    ctx->pc = 0x29FE98u;
label_29fe98:
    // 0x29fe98: 0xc0c6e90  jal         func_31BA40
label_29fe9c:
    if (ctx->pc == 0x29FE9Cu) {
        ctx->pc = 0x29FE9Cu;
            // 0x29fe9c: 0x248462d4  addiu       $a0, $a0, 0x62D4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25300));
        ctx->pc = 0x29FEA0u;
        goto label_29fea0;
    }
    ctx->pc = 0x29FE98u;
    SET_GPR_U32(ctx, 31, 0x29FEA0u);
    ctx->pc = 0x29FE9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FE98u;
            // 0x29fe9c: 0x248462d4  addiu       $a0, $a0, 0x62D4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25300));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31BA40u;
    if (runtime->hasFunction(0x31BA40u)) {
        auto targetFn = runtime->lookupFunction(0x31BA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FEA0u; }
        if (ctx->pc != 0x29FEA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        HddConectCheck__FPi_0x31ba40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FEA0u; }
        if (ctx->pc != 0x29FEA0u) { return; }
    }
    ctx->pc = 0x29FEA0u;
label_29fea0:
    // 0x29fea0: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29fea0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_29fea4:
    // 0x29fea4: 0xc0a9340  jal         func_2A4D00
label_29fea8:
    if (ctx->pc == 0x29FEA8u) {
        ctx->pc = 0x29FEA8u;
            // 0x29fea8: 0xac2262d0  sw          $v0, 0x62D0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 25296), GPR_U32(ctx, 2));
        ctx->pc = 0x29FEACu;
        goto label_29feac;
    }
    ctx->pc = 0x29FEA4u;
    SET_GPR_U32(ctx, 31, 0x29FEACu);
    ctx->pc = 0x29FEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FEA4u;
            // 0x29fea8: 0xac2262d0  sw          $v0, 0x62D0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 25296), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4D00u;
    if (runtime->hasFunction(0x2A4D00u)) {
        auto targetFn = runtime->lookupFunction(0x2A4D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FEACu; }
        if (ctx->pc != 0x29FEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckAppInstallForTitle__Fv_0x2a4d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FEACu; }
        if (ctx->pc != 0x29FEACu) { return; }
    }
    ctx->pc = 0x29FEACu;
label_29feac:
    // 0x29feac: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29feacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_29feb0:
    // 0x29feb0: 0xc0c6f98  jal         func_31BE60
label_29feb4:
    if (ctx->pc == 0x29FEB4u) {
        ctx->pc = 0x29FEB4u;
            // 0x29feb4: 0xac2262d8  sw          $v0, 0x62D8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 25304), GPR_U32(ctx, 2));
        ctx->pc = 0x29FEB8u;
        goto label_29feb8;
    }
    ctx->pc = 0x29FEB0u;
    SET_GPR_U32(ctx, 31, 0x29FEB8u);
    ctx->pc = 0x29FEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FEB0u;
            // 0x29feb4: 0xac2262d8  sw          $v0, 0x62D8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 25304), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31BE60u;
    if (runtime->hasFunction(0x31BE60u)) {
        auto targetFn = runtime->lookupFunction(0x31BE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FEB8u; }
        if (ctx->pc != 0x29FEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckInstallSpace__Fv_0x31be60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FEB8u; }
        if (ctx->pc != 0x29FEB8u) { return; }
    }
    ctx->pc = 0x29FEB8u;
label_29feb8:
    // 0x29feb8: 0x3c0101f0  lui         $at, 0x1F0
    ctx->pc = 0x29feb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)496 << 16));
label_29febc:
    // 0x29febc: 0xac2262dc  sw          $v0, 0x62DC($at)
    ctx->pc = 0x29febcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 25308), GPR_U32(ctx, 2));
label_29fec0:
    // 0x29fec0: 0xc0bc650  jal         func_2F1940
label_29fec4:
    if (ctx->pc == 0x29FEC4u) {
        ctx->pc = 0x29FEC4u;
            // 0x29fec4: 0x8f8499a0  lw          $a0, -0x6660($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941088)));
        ctx->pc = 0x29FEC8u;
        goto label_29fec8;
    }
    ctx->pc = 0x29FEC0u;
    SET_GPR_U32(ctx, 31, 0x29FEC8u);
    ctx->pc = 0x29FEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FEC0u;
            // 0x29fec4: 0x8f8499a0  lw          $a0, -0x6660($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941088)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1940u;
    if (runtime->hasFunction(0x2F1940u)) {
        auto targetFn = runtime->lookupFunction(0x2F1940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FEC8u; }
        if (ctx->pc != 0x29FEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitForMC__18CMemoryCardManagerFv_0x2f1940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FEC8u; }
        if (ctx->pc != 0x29FEC8u) { return; }
    }
    ctx->pc = 0x29FEC8u;
label_29fec8:
    // 0x29fec8: 0xc0a8a7c  jal         func_2A29F0
label_29fecc:
    if (ctx->pc == 0x29FECCu) {
        ctx->pc = 0x29FECCu;
            // 0x29fecc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x29FED0u;
        goto label_29fed0;
    }
    ctx->pc = 0x29FEC8u;
    SET_GPR_U32(ctx, 31, 0x29FED0u);
    ctx->pc = 0x29FECCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FEC8u;
            // 0x29fecc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A29F0u;
    if (runtime->hasFunction(0x2A29F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A29F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FED0u; }
        if (ctx->pc != 0x29FED0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TitleMCCheckInit__Fi_0x2a29f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FED0u; }
        if (ctx->pc != 0x29FED0u) { return; }
    }
    ctx->pc = 0x29FED0u;
label_29fed0:
    // 0x29fed0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x29fed0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29fed4:
    // 0x29fed4: 0x1000000a  b           . + 4 + (0xA << 2)
label_29fed8:
    if (ctx->pc == 0x29FED8u) {
        ctx->pc = 0x29FED8u;
            // 0x29fed8: 0xa3839964  sb          $v1, -0x669C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941028), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x29FEDCu;
        goto label_29fedc;
    }
    ctx->pc = 0x29FED4u;
    {
        const bool branch_taken_0x29fed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FED4u;
            // 0x29fed8: 0xa3839964  sb          $v1, -0x669C($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941028), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fed4) {
            ctx->pc = 0x29FF00u;
            goto label_29ff00;
        }
    }
    ctx->pc = 0x29FEDCu;
label_29fedc:
    // 0x29fedc: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x29fedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
label_29fee0:
    // 0x29fee0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29fee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_29fee4:
    // 0x29fee4: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x29fee4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_29fee8:
    // 0x29fee8: 0x8f82997c  lw          $v0, -0x6684($gp)
    ctx->pc = 0x29fee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
label_29feec:
    // 0x29feec: 0xc0a8408  jal         func_2A1020
label_29fef0:
    if (ctx->pc == 0x29FEF0u) {
        ctx->pc = 0x29FEF0u;
            // 0x29fef0: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x29FEF4u;
        goto label_29fef4;
    }
    ctx->pc = 0x29FEECu;
    SET_GPR_U32(ctx, 31, 0x29FEF4u);
    ctx->pc = 0x29FEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29FEECu;
            // 0x29fef0: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A1020u;
    if (runtime->hasFunction(0x2A1020u)) {
        auto targetFn = runtime->lookupFunction(0x2A1020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FEF4u; }
        if (ctx->pc != 0x29FEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TitleModeInit__Fv_0x2a1020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29FEF4u; }
        if (ctx->pc != 0x29FEF4u) { return; }
    }
    ctx->pc = 0x29FEF4u;
label_29fef4:
    // 0x29fef4: 0x87849940  lh          $a0, -0x66C0($gp)
    ctx->pc = 0x29fef4u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940992)));
label_29fef8:
    // 0x29fef8: 0x8f83997c  lw          $v1, -0x6684($gp)
    ctx->pc = 0x29fef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294941052)));
label_29fefc:
    // 0x29fefc: 0xa4640008  sh          $a0, 0x8($v1)
    ctx->pc = 0x29fefcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 8), (uint16_t)GPR_U32(ctx, 4));
label_29ff00:
    // 0x29ff00: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x29ff00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_29ff04:
    // 0x29ff04: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x29ff04u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_29ff08:
    // 0x29ff08: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x29ff08u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_29ff0c:
    // 0x29ff0c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x29ff0cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_29ff10:
    // 0x29ff10: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x29ff10u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_29ff14:
    // 0x29ff14: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x29ff14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_29ff18:
    // 0x29ff18: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x29ff18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29ff1c:
    // 0x29ff1c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x29ff1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29ff20:
    // 0x29ff20: 0x3e00008  jr          $ra
label_29ff24:
    if (ctx->pc == 0x29FF24u) {
        ctx->pc = 0x29FF24u;
            // 0x29ff24: 0x27bd03f0  addiu       $sp, $sp, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
        ctx->pc = 0x29FF28u;
        goto label_fallthrough_0x29ff20;
    }
    ctx->pc = 0x29FF20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29FF20u;
            // 0x29ff24: 0x27bd03f0  addiu       $sp, $sp, 0x3F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1008));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x29ff20:
    ctx->pc = 0x29FF28u;
}
