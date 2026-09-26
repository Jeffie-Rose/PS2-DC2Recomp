#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CheckDamage__11CMonsterManFv
// Address: 0x1de130 - 0x1df520
void CheckDamage__11CMonsterManFv_0x1de130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CheckDamage__11CMonsterManFv_0x1de130");
#endif

    switch (ctx->pc) {
        case 0x1de130u: goto label_1de130;
        case 0x1de134u: goto label_1de134;
        case 0x1de138u: goto label_1de138;
        case 0x1de13cu: goto label_1de13c;
        case 0x1de140u: goto label_1de140;
        case 0x1de144u: goto label_1de144;
        case 0x1de148u: goto label_1de148;
        case 0x1de14cu: goto label_1de14c;
        case 0x1de150u: goto label_1de150;
        case 0x1de154u: goto label_1de154;
        case 0x1de158u: goto label_1de158;
        case 0x1de15cu: goto label_1de15c;
        case 0x1de160u: goto label_1de160;
        case 0x1de164u: goto label_1de164;
        case 0x1de168u: goto label_1de168;
        case 0x1de16cu: goto label_1de16c;
        case 0x1de170u: goto label_1de170;
        case 0x1de174u: goto label_1de174;
        case 0x1de178u: goto label_1de178;
        case 0x1de17cu: goto label_1de17c;
        case 0x1de180u: goto label_1de180;
        case 0x1de184u: goto label_1de184;
        case 0x1de188u: goto label_1de188;
        case 0x1de18cu: goto label_1de18c;
        case 0x1de190u: goto label_1de190;
        case 0x1de194u: goto label_1de194;
        case 0x1de198u: goto label_1de198;
        case 0x1de19cu: goto label_1de19c;
        case 0x1de1a0u: goto label_1de1a0;
        case 0x1de1a4u: goto label_1de1a4;
        case 0x1de1a8u: goto label_1de1a8;
        case 0x1de1acu: goto label_1de1ac;
        case 0x1de1b0u: goto label_1de1b0;
        case 0x1de1b4u: goto label_1de1b4;
        case 0x1de1b8u: goto label_1de1b8;
        case 0x1de1bcu: goto label_1de1bc;
        case 0x1de1c0u: goto label_1de1c0;
        case 0x1de1c4u: goto label_1de1c4;
        case 0x1de1c8u: goto label_1de1c8;
        case 0x1de1ccu: goto label_1de1cc;
        case 0x1de1d0u: goto label_1de1d0;
        case 0x1de1d4u: goto label_1de1d4;
        case 0x1de1d8u: goto label_1de1d8;
        case 0x1de1dcu: goto label_1de1dc;
        case 0x1de1e0u: goto label_1de1e0;
        case 0x1de1e4u: goto label_1de1e4;
        case 0x1de1e8u: goto label_1de1e8;
        case 0x1de1ecu: goto label_1de1ec;
        case 0x1de1f0u: goto label_1de1f0;
        case 0x1de1f4u: goto label_1de1f4;
        case 0x1de1f8u: goto label_1de1f8;
        case 0x1de1fcu: goto label_1de1fc;
        case 0x1de200u: goto label_1de200;
        case 0x1de204u: goto label_1de204;
        case 0x1de208u: goto label_1de208;
        case 0x1de20cu: goto label_1de20c;
        case 0x1de210u: goto label_1de210;
        case 0x1de214u: goto label_1de214;
        case 0x1de218u: goto label_1de218;
        case 0x1de21cu: goto label_1de21c;
        case 0x1de220u: goto label_1de220;
        case 0x1de224u: goto label_1de224;
        case 0x1de228u: goto label_1de228;
        case 0x1de22cu: goto label_1de22c;
        case 0x1de230u: goto label_1de230;
        case 0x1de234u: goto label_1de234;
        case 0x1de238u: goto label_1de238;
        case 0x1de23cu: goto label_1de23c;
        case 0x1de240u: goto label_1de240;
        case 0x1de244u: goto label_1de244;
        case 0x1de248u: goto label_1de248;
        case 0x1de24cu: goto label_1de24c;
        case 0x1de250u: goto label_1de250;
        case 0x1de254u: goto label_1de254;
        case 0x1de258u: goto label_1de258;
        case 0x1de25cu: goto label_1de25c;
        case 0x1de260u: goto label_1de260;
        case 0x1de264u: goto label_1de264;
        case 0x1de268u: goto label_1de268;
        case 0x1de26cu: goto label_1de26c;
        case 0x1de270u: goto label_1de270;
        case 0x1de274u: goto label_1de274;
        case 0x1de278u: goto label_1de278;
        case 0x1de27cu: goto label_1de27c;
        case 0x1de280u: goto label_1de280;
        case 0x1de284u: goto label_1de284;
        case 0x1de288u: goto label_1de288;
        case 0x1de28cu: goto label_1de28c;
        case 0x1de290u: goto label_1de290;
        case 0x1de294u: goto label_1de294;
        case 0x1de298u: goto label_1de298;
        case 0x1de29cu: goto label_1de29c;
        case 0x1de2a0u: goto label_1de2a0;
        case 0x1de2a4u: goto label_1de2a4;
        case 0x1de2a8u: goto label_1de2a8;
        case 0x1de2acu: goto label_1de2ac;
        case 0x1de2b0u: goto label_1de2b0;
        case 0x1de2b4u: goto label_1de2b4;
        case 0x1de2b8u: goto label_1de2b8;
        case 0x1de2bcu: goto label_1de2bc;
        case 0x1de2c0u: goto label_1de2c0;
        case 0x1de2c4u: goto label_1de2c4;
        case 0x1de2c8u: goto label_1de2c8;
        case 0x1de2ccu: goto label_1de2cc;
        case 0x1de2d0u: goto label_1de2d0;
        case 0x1de2d4u: goto label_1de2d4;
        case 0x1de2d8u: goto label_1de2d8;
        case 0x1de2dcu: goto label_1de2dc;
        case 0x1de2e0u: goto label_1de2e0;
        case 0x1de2e4u: goto label_1de2e4;
        case 0x1de2e8u: goto label_1de2e8;
        case 0x1de2ecu: goto label_1de2ec;
        case 0x1de2f0u: goto label_1de2f0;
        case 0x1de2f4u: goto label_1de2f4;
        case 0x1de2f8u: goto label_1de2f8;
        case 0x1de2fcu: goto label_1de2fc;
        case 0x1de300u: goto label_1de300;
        case 0x1de304u: goto label_1de304;
        case 0x1de308u: goto label_1de308;
        case 0x1de30cu: goto label_1de30c;
        case 0x1de310u: goto label_1de310;
        case 0x1de314u: goto label_1de314;
        case 0x1de318u: goto label_1de318;
        case 0x1de31cu: goto label_1de31c;
        case 0x1de320u: goto label_1de320;
        case 0x1de324u: goto label_1de324;
        case 0x1de328u: goto label_1de328;
        case 0x1de32cu: goto label_1de32c;
        case 0x1de330u: goto label_1de330;
        case 0x1de334u: goto label_1de334;
        case 0x1de338u: goto label_1de338;
        case 0x1de33cu: goto label_1de33c;
        case 0x1de340u: goto label_1de340;
        case 0x1de344u: goto label_1de344;
        case 0x1de348u: goto label_1de348;
        case 0x1de34cu: goto label_1de34c;
        case 0x1de350u: goto label_1de350;
        case 0x1de354u: goto label_1de354;
        case 0x1de358u: goto label_1de358;
        case 0x1de35cu: goto label_1de35c;
        case 0x1de360u: goto label_1de360;
        case 0x1de364u: goto label_1de364;
        case 0x1de368u: goto label_1de368;
        case 0x1de36cu: goto label_1de36c;
        case 0x1de370u: goto label_1de370;
        case 0x1de374u: goto label_1de374;
        case 0x1de378u: goto label_1de378;
        case 0x1de37cu: goto label_1de37c;
        case 0x1de380u: goto label_1de380;
        case 0x1de384u: goto label_1de384;
        case 0x1de388u: goto label_1de388;
        case 0x1de38cu: goto label_1de38c;
        case 0x1de390u: goto label_1de390;
        case 0x1de394u: goto label_1de394;
        case 0x1de398u: goto label_1de398;
        case 0x1de39cu: goto label_1de39c;
        case 0x1de3a0u: goto label_1de3a0;
        case 0x1de3a4u: goto label_1de3a4;
        case 0x1de3a8u: goto label_1de3a8;
        case 0x1de3acu: goto label_1de3ac;
        case 0x1de3b0u: goto label_1de3b0;
        case 0x1de3b4u: goto label_1de3b4;
        case 0x1de3b8u: goto label_1de3b8;
        case 0x1de3bcu: goto label_1de3bc;
        case 0x1de3c0u: goto label_1de3c0;
        case 0x1de3c4u: goto label_1de3c4;
        case 0x1de3c8u: goto label_1de3c8;
        case 0x1de3ccu: goto label_1de3cc;
        case 0x1de3d0u: goto label_1de3d0;
        case 0x1de3d4u: goto label_1de3d4;
        case 0x1de3d8u: goto label_1de3d8;
        case 0x1de3dcu: goto label_1de3dc;
        case 0x1de3e0u: goto label_1de3e0;
        case 0x1de3e4u: goto label_1de3e4;
        case 0x1de3e8u: goto label_1de3e8;
        case 0x1de3ecu: goto label_1de3ec;
        case 0x1de3f0u: goto label_1de3f0;
        case 0x1de3f4u: goto label_1de3f4;
        case 0x1de3f8u: goto label_1de3f8;
        case 0x1de3fcu: goto label_1de3fc;
        case 0x1de400u: goto label_1de400;
        case 0x1de404u: goto label_1de404;
        case 0x1de408u: goto label_1de408;
        case 0x1de40cu: goto label_1de40c;
        case 0x1de410u: goto label_1de410;
        case 0x1de414u: goto label_1de414;
        case 0x1de418u: goto label_1de418;
        case 0x1de41cu: goto label_1de41c;
        case 0x1de420u: goto label_1de420;
        case 0x1de424u: goto label_1de424;
        case 0x1de428u: goto label_1de428;
        case 0x1de42cu: goto label_1de42c;
        case 0x1de430u: goto label_1de430;
        case 0x1de434u: goto label_1de434;
        case 0x1de438u: goto label_1de438;
        case 0x1de43cu: goto label_1de43c;
        case 0x1de440u: goto label_1de440;
        case 0x1de444u: goto label_1de444;
        case 0x1de448u: goto label_1de448;
        case 0x1de44cu: goto label_1de44c;
        case 0x1de450u: goto label_1de450;
        case 0x1de454u: goto label_1de454;
        case 0x1de458u: goto label_1de458;
        case 0x1de45cu: goto label_1de45c;
        case 0x1de460u: goto label_1de460;
        case 0x1de464u: goto label_1de464;
        case 0x1de468u: goto label_1de468;
        case 0x1de46cu: goto label_1de46c;
        case 0x1de470u: goto label_1de470;
        case 0x1de474u: goto label_1de474;
        case 0x1de478u: goto label_1de478;
        case 0x1de47cu: goto label_1de47c;
        case 0x1de480u: goto label_1de480;
        case 0x1de484u: goto label_1de484;
        case 0x1de488u: goto label_1de488;
        case 0x1de48cu: goto label_1de48c;
        case 0x1de490u: goto label_1de490;
        case 0x1de494u: goto label_1de494;
        case 0x1de498u: goto label_1de498;
        case 0x1de49cu: goto label_1de49c;
        case 0x1de4a0u: goto label_1de4a0;
        case 0x1de4a4u: goto label_1de4a4;
        case 0x1de4a8u: goto label_1de4a8;
        case 0x1de4acu: goto label_1de4ac;
        case 0x1de4b0u: goto label_1de4b0;
        case 0x1de4b4u: goto label_1de4b4;
        case 0x1de4b8u: goto label_1de4b8;
        case 0x1de4bcu: goto label_1de4bc;
        case 0x1de4c0u: goto label_1de4c0;
        case 0x1de4c4u: goto label_1de4c4;
        case 0x1de4c8u: goto label_1de4c8;
        case 0x1de4ccu: goto label_1de4cc;
        case 0x1de4d0u: goto label_1de4d0;
        case 0x1de4d4u: goto label_1de4d4;
        case 0x1de4d8u: goto label_1de4d8;
        case 0x1de4dcu: goto label_1de4dc;
        case 0x1de4e0u: goto label_1de4e0;
        case 0x1de4e4u: goto label_1de4e4;
        case 0x1de4e8u: goto label_1de4e8;
        case 0x1de4ecu: goto label_1de4ec;
        case 0x1de4f0u: goto label_1de4f0;
        case 0x1de4f4u: goto label_1de4f4;
        case 0x1de4f8u: goto label_1de4f8;
        case 0x1de4fcu: goto label_1de4fc;
        case 0x1de500u: goto label_1de500;
        case 0x1de504u: goto label_1de504;
        case 0x1de508u: goto label_1de508;
        case 0x1de50cu: goto label_1de50c;
        case 0x1de510u: goto label_1de510;
        case 0x1de514u: goto label_1de514;
        case 0x1de518u: goto label_1de518;
        case 0x1de51cu: goto label_1de51c;
        case 0x1de520u: goto label_1de520;
        case 0x1de524u: goto label_1de524;
        case 0x1de528u: goto label_1de528;
        case 0x1de52cu: goto label_1de52c;
        case 0x1de530u: goto label_1de530;
        case 0x1de534u: goto label_1de534;
        case 0x1de538u: goto label_1de538;
        case 0x1de53cu: goto label_1de53c;
        case 0x1de540u: goto label_1de540;
        case 0x1de544u: goto label_1de544;
        case 0x1de548u: goto label_1de548;
        case 0x1de54cu: goto label_1de54c;
        case 0x1de550u: goto label_1de550;
        case 0x1de554u: goto label_1de554;
        case 0x1de558u: goto label_1de558;
        case 0x1de55cu: goto label_1de55c;
        case 0x1de560u: goto label_1de560;
        case 0x1de564u: goto label_1de564;
        case 0x1de568u: goto label_1de568;
        case 0x1de56cu: goto label_1de56c;
        case 0x1de570u: goto label_1de570;
        case 0x1de574u: goto label_1de574;
        case 0x1de578u: goto label_1de578;
        case 0x1de57cu: goto label_1de57c;
        case 0x1de580u: goto label_1de580;
        case 0x1de584u: goto label_1de584;
        case 0x1de588u: goto label_1de588;
        case 0x1de58cu: goto label_1de58c;
        case 0x1de590u: goto label_1de590;
        case 0x1de594u: goto label_1de594;
        case 0x1de598u: goto label_1de598;
        case 0x1de59cu: goto label_1de59c;
        case 0x1de5a0u: goto label_1de5a0;
        case 0x1de5a4u: goto label_1de5a4;
        case 0x1de5a8u: goto label_1de5a8;
        case 0x1de5acu: goto label_1de5ac;
        case 0x1de5b0u: goto label_1de5b0;
        case 0x1de5b4u: goto label_1de5b4;
        case 0x1de5b8u: goto label_1de5b8;
        case 0x1de5bcu: goto label_1de5bc;
        case 0x1de5c0u: goto label_1de5c0;
        case 0x1de5c4u: goto label_1de5c4;
        case 0x1de5c8u: goto label_1de5c8;
        case 0x1de5ccu: goto label_1de5cc;
        case 0x1de5d0u: goto label_1de5d0;
        case 0x1de5d4u: goto label_1de5d4;
        case 0x1de5d8u: goto label_1de5d8;
        case 0x1de5dcu: goto label_1de5dc;
        case 0x1de5e0u: goto label_1de5e0;
        case 0x1de5e4u: goto label_1de5e4;
        case 0x1de5e8u: goto label_1de5e8;
        case 0x1de5ecu: goto label_1de5ec;
        case 0x1de5f0u: goto label_1de5f0;
        case 0x1de5f4u: goto label_1de5f4;
        case 0x1de5f8u: goto label_1de5f8;
        case 0x1de5fcu: goto label_1de5fc;
        case 0x1de600u: goto label_1de600;
        case 0x1de604u: goto label_1de604;
        case 0x1de608u: goto label_1de608;
        case 0x1de60cu: goto label_1de60c;
        case 0x1de610u: goto label_1de610;
        case 0x1de614u: goto label_1de614;
        case 0x1de618u: goto label_1de618;
        case 0x1de61cu: goto label_1de61c;
        case 0x1de620u: goto label_1de620;
        case 0x1de624u: goto label_1de624;
        case 0x1de628u: goto label_1de628;
        case 0x1de62cu: goto label_1de62c;
        case 0x1de630u: goto label_1de630;
        case 0x1de634u: goto label_1de634;
        case 0x1de638u: goto label_1de638;
        case 0x1de63cu: goto label_1de63c;
        case 0x1de640u: goto label_1de640;
        case 0x1de644u: goto label_1de644;
        case 0x1de648u: goto label_1de648;
        case 0x1de64cu: goto label_1de64c;
        case 0x1de650u: goto label_1de650;
        case 0x1de654u: goto label_1de654;
        case 0x1de658u: goto label_1de658;
        case 0x1de65cu: goto label_1de65c;
        case 0x1de660u: goto label_1de660;
        case 0x1de664u: goto label_1de664;
        case 0x1de668u: goto label_1de668;
        case 0x1de66cu: goto label_1de66c;
        case 0x1de670u: goto label_1de670;
        case 0x1de674u: goto label_1de674;
        case 0x1de678u: goto label_1de678;
        case 0x1de67cu: goto label_1de67c;
        case 0x1de680u: goto label_1de680;
        case 0x1de684u: goto label_1de684;
        case 0x1de688u: goto label_1de688;
        case 0x1de68cu: goto label_1de68c;
        case 0x1de690u: goto label_1de690;
        case 0x1de694u: goto label_1de694;
        case 0x1de698u: goto label_1de698;
        case 0x1de69cu: goto label_1de69c;
        case 0x1de6a0u: goto label_1de6a0;
        case 0x1de6a4u: goto label_1de6a4;
        case 0x1de6a8u: goto label_1de6a8;
        case 0x1de6acu: goto label_1de6ac;
        case 0x1de6b0u: goto label_1de6b0;
        case 0x1de6b4u: goto label_1de6b4;
        case 0x1de6b8u: goto label_1de6b8;
        case 0x1de6bcu: goto label_1de6bc;
        case 0x1de6c0u: goto label_1de6c0;
        case 0x1de6c4u: goto label_1de6c4;
        case 0x1de6c8u: goto label_1de6c8;
        case 0x1de6ccu: goto label_1de6cc;
        case 0x1de6d0u: goto label_1de6d0;
        case 0x1de6d4u: goto label_1de6d4;
        case 0x1de6d8u: goto label_1de6d8;
        case 0x1de6dcu: goto label_1de6dc;
        case 0x1de6e0u: goto label_1de6e0;
        case 0x1de6e4u: goto label_1de6e4;
        case 0x1de6e8u: goto label_1de6e8;
        case 0x1de6ecu: goto label_1de6ec;
        case 0x1de6f0u: goto label_1de6f0;
        case 0x1de6f4u: goto label_1de6f4;
        case 0x1de6f8u: goto label_1de6f8;
        case 0x1de6fcu: goto label_1de6fc;
        case 0x1de700u: goto label_1de700;
        case 0x1de704u: goto label_1de704;
        case 0x1de708u: goto label_1de708;
        case 0x1de70cu: goto label_1de70c;
        case 0x1de710u: goto label_1de710;
        case 0x1de714u: goto label_1de714;
        case 0x1de718u: goto label_1de718;
        case 0x1de71cu: goto label_1de71c;
        case 0x1de720u: goto label_1de720;
        case 0x1de724u: goto label_1de724;
        case 0x1de728u: goto label_1de728;
        case 0x1de72cu: goto label_1de72c;
        case 0x1de730u: goto label_1de730;
        case 0x1de734u: goto label_1de734;
        case 0x1de738u: goto label_1de738;
        case 0x1de73cu: goto label_1de73c;
        case 0x1de740u: goto label_1de740;
        case 0x1de744u: goto label_1de744;
        case 0x1de748u: goto label_1de748;
        case 0x1de74cu: goto label_1de74c;
        case 0x1de750u: goto label_1de750;
        case 0x1de754u: goto label_1de754;
        case 0x1de758u: goto label_1de758;
        case 0x1de75cu: goto label_1de75c;
        case 0x1de760u: goto label_1de760;
        case 0x1de764u: goto label_1de764;
        case 0x1de768u: goto label_1de768;
        case 0x1de76cu: goto label_1de76c;
        case 0x1de770u: goto label_1de770;
        case 0x1de774u: goto label_1de774;
        case 0x1de778u: goto label_1de778;
        case 0x1de77cu: goto label_1de77c;
        case 0x1de780u: goto label_1de780;
        case 0x1de784u: goto label_1de784;
        case 0x1de788u: goto label_1de788;
        case 0x1de78cu: goto label_1de78c;
        case 0x1de790u: goto label_1de790;
        case 0x1de794u: goto label_1de794;
        case 0x1de798u: goto label_1de798;
        case 0x1de79cu: goto label_1de79c;
        case 0x1de7a0u: goto label_1de7a0;
        case 0x1de7a4u: goto label_1de7a4;
        case 0x1de7a8u: goto label_1de7a8;
        case 0x1de7acu: goto label_1de7ac;
        case 0x1de7b0u: goto label_1de7b0;
        case 0x1de7b4u: goto label_1de7b4;
        case 0x1de7b8u: goto label_1de7b8;
        case 0x1de7bcu: goto label_1de7bc;
        case 0x1de7c0u: goto label_1de7c0;
        case 0x1de7c4u: goto label_1de7c4;
        case 0x1de7c8u: goto label_1de7c8;
        case 0x1de7ccu: goto label_1de7cc;
        case 0x1de7d0u: goto label_1de7d0;
        case 0x1de7d4u: goto label_1de7d4;
        case 0x1de7d8u: goto label_1de7d8;
        case 0x1de7dcu: goto label_1de7dc;
        case 0x1de7e0u: goto label_1de7e0;
        case 0x1de7e4u: goto label_1de7e4;
        case 0x1de7e8u: goto label_1de7e8;
        case 0x1de7ecu: goto label_1de7ec;
        case 0x1de7f0u: goto label_1de7f0;
        case 0x1de7f4u: goto label_1de7f4;
        case 0x1de7f8u: goto label_1de7f8;
        case 0x1de7fcu: goto label_1de7fc;
        case 0x1de800u: goto label_1de800;
        case 0x1de804u: goto label_1de804;
        case 0x1de808u: goto label_1de808;
        case 0x1de80cu: goto label_1de80c;
        case 0x1de810u: goto label_1de810;
        case 0x1de814u: goto label_1de814;
        case 0x1de818u: goto label_1de818;
        case 0x1de81cu: goto label_1de81c;
        case 0x1de820u: goto label_1de820;
        case 0x1de824u: goto label_1de824;
        case 0x1de828u: goto label_1de828;
        case 0x1de82cu: goto label_1de82c;
        case 0x1de830u: goto label_1de830;
        case 0x1de834u: goto label_1de834;
        case 0x1de838u: goto label_1de838;
        case 0x1de83cu: goto label_1de83c;
        case 0x1de840u: goto label_1de840;
        case 0x1de844u: goto label_1de844;
        case 0x1de848u: goto label_1de848;
        case 0x1de84cu: goto label_1de84c;
        case 0x1de850u: goto label_1de850;
        case 0x1de854u: goto label_1de854;
        case 0x1de858u: goto label_1de858;
        case 0x1de85cu: goto label_1de85c;
        case 0x1de860u: goto label_1de860;
        case 0x1de864u: goto label_1de864;
        case 0x1de868u: goto label_1de868;
        case 0x1de86cu: goto label_1de86c;
        case 0x1de870u: goto label_1de870;
        case 0x1de874u: goto label_1de874;
        case 0x1de878u: goto label_1de878;
        case 0x1de87cu: goto label_1de87c;
        case 0x1de880u: goto label_1de880;
        case 0x1de884u: goto label_1de884;
        case 0x1de888u: goto label_1de888;
        case 0x1de88cu: goto label_1de88c;
        case 0x1de890u: goto label_1de890;
        case 0x1de894u: goto label_1de894;
        case 0x1de898u: goto label_1de898;
        case 0x1de89cu: goto label_1de89c;
        case 0x1de8a0u: goto label_1de8a0;
        case 0x1de8a4u: goto label_1de8a4;
        case 0x1de8a8u: goto label_1de8a8;
        case 0x1de8acu: goto label_1de8ac;
        case 0x1de8b0u: goto label_1de8b0;
        case 0x1de8b4u: goto label_1de8b4;
        case 0x1de8b8u: goto label_1de8b8;
        case 0x1de8bcu: goto label_1de8bc;
        case 0x1de8c0u: goto label_1de8c0;
        case 0x1de8c4u: goto label_1de8c4;
        case 0x1de8c8u: goto label_1de8c8;
        case 0x1de8ccu: goto label_1de8cc;
        case 0x1de8d0u: goto label_1de8d0;
        case 0x1de8d4u: goto label_1de8d4;
        case 0x1de8d8u: goto label_1de8d8;
        case 0x1de8dcu: goto label_1de8dc;
        case 0x1de8e0u: goto label_1de8e0;
        case 0x1de8e4u: goto label_1de8e4;
        case 0x1de8e8u: goto label_1de8e8;
        case 0x1de8ecu: goto label_1de8ec;
        case 0x1de8f0u: goto label_1de8f0;
        case 0x1de8f4u: goto label_1de8f4;
        case 0x1de8f8u: goto label_1de8f8;
        case 0x1de8fcu: goto label_1de8fc;
        case 0x1de900u: goto label_1de900;
        case 0x1de904u: goto label_1de904;
        case 0x1de908u: goto label_1de908;
        case 0x1de90cu: goto label_1de90c;
        case 0x1de910u: goto label_1de910;
        case 0x1de914u: goto label_1de914;
        case 0x1de918u: goto label_1de918;
        case 0x1de91cu: goto label_1de91c;
        case 0x1de920u: goto label_1de920;
        case 0x1de924u: goto label_1de924;
        case 0x1de928u: goto label_1de928;
        case 0x1de92cu: goto label_1de92c;
        case 0x1de930u: goto label_1de930;
        case 0x1de934u: goto label_1de934;
        case 0x1de938u: goto label_1de938;
        case 0x1de93cu: goto label_1de93c;
        case 0x1de940u: goto label_1de940;
        case 0x1de944u: goto label_1de944;
        case 0x1de948u: goto label_1de948;
        case 0x1de94cu: goto label_1de94c;
        case 0x1de950u: goto label_1de950;
        case 0x1de954u: goto label_1de954;
        case 0x1de958u: goto label_1de958;
        case 0x1de95cu: goto label_1de95c;
        case 0x1de960u: goto label_1de960;
        case 0x1de964u: goto label_1de964;
        case 0x1de968u: goto label_1de968;
        case 0x1de96cu: goto label_1de96c;
        case 0x1de970u: goto label_1de970;
        case 0x1de974u: goto label_1de974;
        case 0x1de978u: goto label_1de978;
        case 0x1de97cu: goto label_1de97c;
        case 0x1de980u: goto label_1de980;
        case 0x1de984u: goto label_1de984;
        case 0x1de988u: goto label_1de988;
        case 0x1de98cu: goto label_1de98c;
        case 0x1de990u: goto label_1de990;
        case 0x1de994u: goto label_1de994;
        case 0x1de998u: goto label_1de998;
        case 0x1de99cu: goto label_1de99c;
        case 0x1de9a0u: goto label_1de9a0;
        case 0x1de9a4u: goto label_1de9a4;
        case 0x1de9a8u: goto label_1de9a8;
        case 0x1de9acu: goto label_1de9ac;
        case 0x1de9b0u: goto label_1de9b0;
        case 0x1de9b4u: goto label_1de9b4;
        case 0x1de9b8u: goto label_1de9b8;
        case 0x1de9bcu: goto label_1de9bc;
        case 0x1de9c0u: goto label_1de9c0;
        case 0x1de9c4u: goto label_1de9c4;
        case 0x1de9c8u: goto label_1de9c8;
        case 0x1de9ccu: goto label_1de9cc;
        case 0x1de9d0u: goto label_1de9d0;
        case 0x1de9d4u: goto label_1de9d4;
        case 0x1de9d8u: goto label_1de9d8;
        case 0x1de9dcu: goto label_1de9dc;
        case 0x1de9e0u: goto label_1de9e0;
        case 0x1de9e4u: goto label_1de9e4;
        case 0x1de9e8u: goto label_1de9e8;
        case 0x1de9ecu: goto label_1de9ec;
        case 0x1de9f0u: goto label_1de9f0;
        case 0x1de9f4u: goto label_1de9f4;
        case 0x1de9f8u: goto label_1de9f8;
        case 0x1de9fcu: goto label_1de9fc;
        case 0x1dea00u: goto label_1dea00;
        case 0x1dea04u: goto label_1dea04;
        case 0x1dea08u: goto label_1dea08;
        case 0x1dea0cu: goto label_1dea0c;
        case 0x1dea10u: goto label_1dea10;
        case 0x1dea14u: goto label_1dea14;
        case 0x1dea18u: goto label_1dea18;
        case 0x1dea1cu: goto label_1dea1c;
        case 0x1dea20u: goto label_1dea20;
        case 0x1dea24u: goto label_1dea24;
        case 0x1dea28u: goto label_1dea28;
        case 0x1dea2cu: goto label_1dea2c;
        case 0x1dea30u: goto label_1dea30;
        case 0x1dea34u: goto label_1dea34;
        case 0x1dea38u: goto label_1dea38;
        case 0x1dea3cu: goto label_1dea3c;
        case 0x1dea40u: goto label_1dea40;
        case 0x1dea44u: goto label_1dea44;
        case 0x1dea48u: goto label_1dea48;
        case 0x1dea4cu: goto label_1dea4c;
        case 0x1dea50u: goto label_1dea50;
        case 0x1dea54u: goto label_1dea54;
        case 0x1dea58u: goto label_1dea58;
        case 0x1dea5cu: goto label_1dea5c;
        case 0x1dea60u: goto label_1dea60;
        case 0x1dea64u: goto label_1dea64;
        case 0x1dea68u: goto label_1dea68;
        case 0x1dea6cu: goto label_1dea6c;
        case 0x1dea70u: goto label_1dea70;
        case 0x1dea74u: goto label_1dea74;
        case 0x1dea78u: goto label_1dea78;
        case 0x1dea7cu: goto label_1dea7c;
        case 0x1dea80u: goto label_1dea80;
        case 0x1dea84u: goto label_1dea84;
        case 0x1dea88u: goto label_1dea88;
        case 0x1dea8cu: goto label_1dea8c;
        case 0x1dea90u: goto label_1dea90;
        case 0x1dea94u: goto label_1dea94;
        case 0x1dea98u: goto label_1dea98;
        case 0x1dea9cu: goto label_1dea9c;
        case 0x1deaa0u: goto label_1deaa0;
        case 0x1deaa4u: goto label_1deaa4;
        case 0x1deaa8u: goto label_1deaa8;
        case 0x1deaacu: goto label_1deaac;
        case 0x1deab0u: goto label_1deab0;
        case 0x1deab4u: goto label_1deab4;
        case 0x1deab8u: goto label_1deab8;
        case 0x1deabcu: goto label_1deabc;
        case 0x1deac0u: goto label_1deac0;
        case 0x1deac4u: goto label_1deac4;
        case 0x1deac8u: goto label_1deac8;
        case 0x1deaccu: goto label_1deacc;
        case 0x1dead0u: goto label_1dead0;
        case 0x1dead4u: goto label_1dead4;
        case 0x1dead8u: goto label_1dead8;
        case 0x1deadcu: goto label_1deadc;
        case 0x1deae0u: goto label_1deae0;
        case 0x1deae4u: goto label_1deae4;
        case 0x1deae8u: goto label_1deae8;
        case 0x1deaecu: goto label_1deaec;
        case 0x1deaf0u: goto label_1deaf0;
        case 0x1deaf4u: goto label_1deaf4;
        case 0x1deaf8u: goto label_1deaf8;
        case 0x1deafcu: goto label_1deafc;
        case 0x1deb00u: goto label_1deb00;
        case 0x1deb04u: goto label_1deb04;
        case 0x1deb08u: goto label_1deb08;
        case 0x1deb0cu: goto label_1deb0c;
        case 0x1deb10u: goto label_1deb10;
        case 0x1deb14u: goto label_1deb14;
        case 0x1deb18u: goto label_1deb18;
        case 0x1deb1cu: goto label_1deb1c;
        case 0x1deb20u: goto label_1deb20;
        case 0x1deb24u: goto label_1deb24;
        case 0x1deb28u: goto label_1deb28;
        case 0x1deb2cu: goto label_1deb2c;
        case 0x1deb30u: goto label_1deb30;
        case 0x1deb34u: goto label_1deb34;
        case 0x1deb38u: goto label_1deb38;
        case 0x1deb3cu: goto label_1deb3c;
        case 0x1deb40u: goto label_1deb40;
        case 0x1deb44u: goto label_1deb44;
        case 0x1deb48u: goto label_1deb48;
        case 0x1deb4cu: goto label_1deb4c;
        case 0x1deb50u: goto label_1deb50;
        case 0x1deb54u: goto label_1deb54;
        case 0x1deb58u: goto label_1deb58;
        case 0x1deb5cu: goto label_1deb5c;
        case 0x1deb60u: goto label_1deb60;
        case 0x1deb64u: goto label_1deb64;
        case 0x1deb68u: goto label_1deb68;
        case 0x1deb6cu: goto label_1deb6c;
        case 0x1deb70u: goto label_1deb70;
        case 0x1deb74u: goto label_1deb74;
        case 0x1deb78u: goto label_1deb78;
        case 0x1deb7cu: goto label_1deb7c;
        case 0x1deb80u: goto label_1deb80;
        case 0x1deb84u: goto label_1deb84;
        case 0x1deb88u: goto label_1deb88;
        case 0x1deb8cu: goto label_1deb8c;
        case 0x1deb90u: goto label_1deb90;
        case 0x1deb94u: goto label_1deb94;
        case 0x1deb98u: goto label_1deb98;
        case 0x1deb9cu: goto label_1deb9c;
        case 0x1deba0u: goto label_1deba0;
        case 0x1deba4u: goto label_1deba4;
        case 0x1deba8u: goto label_1deba8;
        case 0x1debacu: goto label_1debac;
        case 0x1debb0u: goto label_1debb0;
        case 0x1debb4u: goto label_1debb4;
        case 0x1debb8u: goto label_1debb8;
        case 0x1debbcu: goto label_1debbc;
        case 0x1debc0u: goto label_1debc0;
        case 0x1debc4u: goto label_1debc4;
        case 0x1debc8u: goto label_1debc8;
        case 0x1debccu: goto label_1debcc;
        case 0x1debd0u: goto label_1debd0;
        case 0x1debd4u: goto label_1debd4;
        case 0x1debd8u: goto label_1debd8;
        case 0x1debdcu: goto label_1debdc;
        case 0x1debe0u: goto label_1debe0;
        case 0x1debe4u: goto label_1debe4;
        case 0x1debe8u: goto label_1debe8;
        case 0x1debecu: goto label_1debec;
        case 0x1debf0u: goto label_1debf0;
        case 0x1debf4u: goto label_1debf4;
        case 0x1debf8u: goto label_1debf8;
        case 0x1debfcu: goto label_1debfc;
        case 0x1dec00u: goto label_1dec00;
        case 0x1dec04u: goto label_1dec04;
        case 0x1dec08u: goto label_1dec08;
        case 0x1dec0cu: goto label_1dec0c;
        case 0x1dec10u: goto label_1dec10;
        case 0x1dec14u: goto label_1dec14;
        case 0x1dec18u: goto label_1dec18;
        case 0x1dec1cu: goto label_1dec1c;
        case 0x1dec20u: goto label_1dec20;
        case 0x1dec24u: goto label_1dec24;
        case 0x1dec28u: goto label_1dec28;
        case 0x1dec2cu: goto label_1dec2c;
        case 0x1dec30u: goto label_1dec30;
        case 0x1dec34u: goto label_1dec34;
        case 0x1dec38u: goto label_1dec38;
        case 0x1dec3cu: goto label_1dec3c;
        case 0x1dec40u: goto label_1dec40;
        case 0x1dec44u: goto label_1dec44;
        case 0x1dec48u: goto label_1dec48;
        case 0x1dec4cu: goto label_1dec4c;
        case 0x1dec50u: goto label_1dec50;
        case 0x1dec54u: goto label_1dec54;
        case 0x1dec58u: goto label_1dec58;
        case 0x1dec5cu: goto label_1dec5c;
        case 0x1dec60u: goto label_1dec60;
        case 0x1dec64u: goto label_1dec64;
        case 0x1dec68u: goto label_1dec68;
        case 0x1dec6cu: goto label_1dec6c;
        case 0x1dec70u: goto label_1dec70;
        case 0x1dec74u: goto label_1dec74;
        case 0x1dec78u: goto label_1dec78;
        case 0x1dec7cu: goto label_1dec7c;
        case 0x1dec80u: goto label_1dec80;
        case 0x1dec84u: goto label_1dec84;
        case 0x1dec88u: goto label_1dec88;
        case 0x1dec8cu: goto label_1dec8c;
        case 0x1dec90u: goto label_1dec90;
        case 0x1dec94u: goto label_1dec94;
        case 0x1dec98u: goto label_1dec98;
        case 0x1dec9cu: goto label_1dec9c;
        case 0x1deca0u: goto label_1deca0;
        case 0x1deca4u: goto label_1deca4;
        case 0x1deca8u: goto label_1deca8;
        case 0x1decacu: goto label_1decac;
        case 0x1decb0u: goto label_1decb0;
        case 0x1decb4u: goto label_1decb4;
        case 0x1decb8u: goto label_1decb8;
        case 0x1decbcu: goto label_1decbc;
        case 0x1decc0u: goto label_1decc0;
        case 0x1decc4u: goto label_1decc4;
        case 0x1decc8u: goto label_1decc8;
        case 0x1decccu: goto label_1deccc;
        case 0x1decd0u: goto label_1decd0;
        case 0x1decd4u: goto label_1decd4;
        case 0x1decd8u: goto label_1decd8;
        case 0x1decdcu: goto label_1decdc;
        case 0x1dece0u: goto label_1dece0;
        case 0x1dece4u: goto label_1dece4;
        case 0x1dece8u: goto label_1dece8;
        case 0x1dececu: goto label_1decec;
        case 0x1decf0u: goto label_1decf0;
        case 0x1decf4u: goto label_1decf4;
        case 0x1decf8u: goto label_1decf8;
        case 0x1decfcu: goto label_1decfc;
        case 0x1ded00u: goto label_1ded00;
        case 0x1ded04u: goto label_1ded04;
        case 0x1ded08u: goto label_1ded08;
        case 0x1ded0cu: goto label_1ded0c;
        case 0x1ded10u: goto label_1ded10;
        case 0x1ded14u: goto label_1ded14;
        case 0x1ded18u: goto label_1ded18;
        case 0x1ded1cu: goto label_1ded1c;
        case 0x1ded20u: goto label_1ded20;
        case 0x1ded24u: goto label_1ded24;
        case 0x1ded28u: goto label_1ded28;
        case 0x1ded2cu: goto label_1ded2c;
        case 0x1ded30u: goto label_1ded30;
        case 0x1ded34u: goto label_1ded34;
        case 0x1ded38u: goto label_1ded38;
        case 0x1ded3cu: goto label_1ded3c;
        case 0x1ded40u: goto label_1ded40;
        case 0x1ded44u: goto label_1ded44;
        case 0x1ded48u: goto label_1ded48;
        case 0x1ded4cu: goto label_1ded4c;
        case 0x1ded50u: goto label_1ded50;
        case 0x1ded54u: goto label_1ded54;
        case 0x1ded58u: goto label_1ded58;
        case 0x1ded5cu: goto label_1ded5c;
        case 0x1ded60u: goto label_1ded60;
        case 0x1ded64u: goto label_1ded64;
        case 0x1ded68u: goto label_1ded68;
        case 0x1ded6cu: goto label_1ded6c;
        case 0x1ded70u: goto label_1ded70;
        case 0x1ded74u: goto label_1ded74;
        case 0x1ded78u: goto label_1ded78;
        case 0x1ded7cu: goto label_1ded7c;
        case 0x1ded80u: goto label_1ded80;
        case 0x1ded84u: goto label_1ded84;
        case 0x1ded88u: goto label_1ded88;
        case 0x1ded8cu: goto label_1ded8c;
        case 0x1ded90u: goto label_1ded90;
        case 0x1ded94u: goto label_1ded94;
        case 0x1ded98u: goto label_1ded98;
        case 0x1ded9cu: goto label_1ded9c;
        case 0x1deda0u: goto label_1deda0;
        case 0x1deda4u: goto label_1deda4;
        case 0x1deda8u: goto label_1deda8;
        case 0x1dedacu: goto label_1dedac;
        case 0x1dedb0u: goto label_1dedb0;
        case 0x1dedb4u: goto label_1dedb4;
        case 0x1dedb8u: goto label_1dedb8;
        case 0x1dedbcu: goto label_1dedbc;
        case 0x1dedc0u: goto label_1dedc0;
        case 0x1dedc4u: goto label_1dedc4;
        case 0x1dedc8u: goto label_1dedc8;
        case 0x1dedccu: goto label_1dedcc;
        case 0x1dedd0u: goto label_1dedd0;
        case 0x1dedd4u: goto label_1dedd4;
        case 0x1dedd8u: goto label_1dedd8;
        case 0x1deddcu: goto label_1deddc;
        case 0x1dede0u: goto label_1dede0;
        case 0x1dede4u: goto label_1dede4;
        case 0x1dede8u: goto label_1dede8;
        case 0x1dedecu: goto label_1dedec;
        case 0x1dedf0u: goto label_1dedf0;
        case 0x1dedf4u: goto label_1dedf4;
        case 0x1dedf8u: goto label_1dedf8;
        case 0x1dedfcu: goto label_1dedfc;
        case 0x1dee00u: goto label_1dee00;
        case 0x1dee04u: goto label_1dee04;
        case 0x1dee08u: goto label_1dee08;
        case 0x1dee0cu: goto label_1dee0c;
        case 0x1dee10u: goto label_1dee10;
        case 0x1dee14u: goto label_1dee14;
        case 0x1dee18u: goto label_1dee18;
        case 0x1dee1cu: goto label_1dee1c;
        case 0x1dee20u: goto label_1dee20;
        case 0x1dee24u: goto label_1dee24;
        case 0x1dee28u: goto label_1dee28;
        case 0x1dee2cu: goto label_1dee2c;
        case 0x1dee30u: goto label_1dee30;
        case 0x1dee34u: goto label_1dee34;
        case 0x1dee38u: goto label_1dee38;
        case 0x1dee3cu: goto label_1dee3c;
        case 0x1dee40u: goto label_1dee40;
        case 0x1dee44u: goto label_1dee44;
        case 0x1dee48u: goto label_1dee48;
        case 0x1dee4cu: goto label_1dee4c;
        case 0x1dee50u: goto label_1dee50;
        case 0x1dee54u: goto label_1dee54;
        case 0x1dee58u: goto label_1dee58;
        case 0x1dee5cu: goto label_1dee5c;
        case 0x1dee60u: goto label_1dee60;
        case 0x1dee64u: goto label_1dee64;
        case 0x1dee68u: goto label_1dee68;
        case 0x1dee6cu: goto label_1dee6c;
        case 0x1dee70u: goto label_1dee70;
        case 0x1dee74u: goto label_1dee74;
        case 0x1dee78u: goto label_1dee78;
        case 0x1dee7cu: goto label_1dee7c;
        case 0x1dee80u: goto label_1dee80;
        case 0x1dee84u: goto label_1dee84;
        case 0x1dee88u: goto label_1dee88;
        case 0x1dee8cu: goto label_1dee8c;
        case 0x1dee90u: goto label_1dee90;
        case 0x1dee94u: goto label_1dee94;
        case 0x1dee98u: goto label_1dee98;
        case 0x1dee9cu: goto label_1dee9c;
        case 0x1deea0u: goto label_1deea0;
        case 0x1deea4u: goto label_1deea4;
        case 0x1deea8u: goto label_1deea8;
        case 0x1deeacu: goto label_1deeac;
        case 0x1deeb0u: goto label_1deeb0;
        case 0x1deeb4u: goto label_1deeb4;
        case 0x1deeb8u: goto label_1deeb8;
        case 0x1deebcu: goto label_1deebc;
        case 0x1deec0u: goto label_1deec0;
        case 0x1deec4u: goto label_1deec4;
        case 0x1deec8u: goto label_1deec8;
        case 0x1deeccu: goto label_1deecc;
        case 0x1deed0u: goto label_1deed0;
        case 0x1deed4u: goto label_1deed4;
        case 0x1deed8u: goto label_1deed8;
        case 0x1deedcu: goto label_1deedc;
        case 0x1deee0u: goto label_1deee0;
        case 0x1deee4u: goto label_1deee4;
        case 0x1deee8u: goto label_1deee8;
        case 0x1deeecu: goto label_1deeec;
        case 0x1deef0u: goto label_1deef0;
        case 0x1deef4u: goto label_1deef4;
        case 0x1deef8u: goto label_1deef8;
        case 0x1deefcu: goto label_1deefc;
        case 0x1def00u: goto label_1def00;
        case 0x1def04u: goto label_1def04;
        case 0x1def08u: goto label_1def08;
        case 0x1def0cu: goto label_1def0c;
        case 0x1def10u: goto label_1def10;
        case 0x1def14u: goto label_1def14;
        case 0x1def18u: goto label_1def18;
        case 0x1def1cu: goto label_1def1c;
        case 0x1def20u: goto label_1def20;
        case 0x1def24u: goto label_1def24;
        case 0x1def28u: goto label_1def28;
        case 0x1def2cu: goto label_1def2c;
        case 0x1def30u: goto label_1def30;
        case 0x1def34u: goto label_1def34;
        case 0x1def38u: goto label_1def38;
        case 0x1def3cu: goto label_1def3c;
        case 0x1def40u: goto label_1def40;
        case 0x1def44u: goto label_1def44;
        case 0x1def48u: goto label_1def48;
        case 0x1def4cu: goto label_1def4c;
        case 0x1def50u: goto label_1def50;
        case 0x1def54u: goto label_1def54;
        case 0x1def58u: goto label_1def58;
        case 0x1def5cu: goto label_1def5c;
        case 0x1def60u: goto label_1def60;
        case 0x1def64u: goto label_1def64;
        case 0x1def68u: goto label_1def68;
        case 0x1def6cu: goto label_1def6c;
        case 0x1def70u: goto label_1def70;
        case 0x1def74u: goto label_1def74;
        case 0x1def78u: goto label_1def78;
        case 0x1def7cu: goto label_1def7c;
        case 0x1def80u: goto label_1def80;
        case 0x1def84u: goto label_1def84;
        case 0x1def88u: goto label_1def88;
        case 0x1def8cu: goto label_1def8c;
        case 0x1def90u: goto label_1def90;
        case 0x1def94u: goto label_1def94;
        case 0x1def98u: goto label_1def98;
        case 0x1def9cu: goto label_1def9c;
        case 0x1defa0u: goto label_1defa0;
        case 0x1defa4u: goto label_1defa4;
        case 0x1defa8u: goto label_1defa8;
        case 0x1defacu: goto label_1defac;
        case 0x1defb0u: goto label_1defb0;
        case 0x1defb4u: goto label_1defb4;
        case 0x1defb8u: goto label_1defb8;
        case 0x1defbcu: goto label_1defbc;
        case 0x1defc0u: goto label_1defc0;
        case 0x1defc4u: goto label_1defc4;
        case 0x1defc8u: goto label_1defc8;
        case 0x1defccu: goto label_1defcc;
        case 0x1defd0u: goto label_1defd0;
        case 0x1defd4u: goto label_1defd4;
        case 0x1defd8u: goto label_1defd8;
        case 0x1defdcu: goto label_1defdc;
        case 0x1defe0u: goto label_1defe0;
        case 0x1defe4u: goto label_1defe4;
        case 0x1defe8u: goto label_1defe8;
        case 0x1defecu: goto label_1defec;
        case 0x1deff0u: goto label_1deff0;
        case 0x1deff4u: goto label_1deff4;
        case 0x1deff8u: goto label_1deff8;
        case 0x1deffcu: goto label_1deffc;
        case 0x1df000u: goto label_1df000;
        case 0x1df004u: goto label_1df004;
        case 0x1df008u: goto label_1df008;
        case 0x1df00cu: goto label_1df00c;
        case 0x1df010u: goto label_1df010;
        case 0x1df014u: goto label_1df014;
        case 0x1df018u: goto label_1df018;
        case 0x1df01cu: goto label_1df01c;
        case 0x1df020u: goto label_1df020;
        case 0x1df024u: goto label_1df024;
        case 0x1df028u: goto label_1df028;
        case 0x1df02cu: goto label_1df02c;
        case 0x1df030u: goto label_1df030;
        case 0x1df034u: goto label_1df034;
        case 0x1df038u: goto label_1df038;
        case 0x1df03cu: goto label_1df03c;
        case 0x1df040u: goto label_1df040;
        case 0x1df044u: goto label_1df044;
        case 0x1df048u: goto label_1df048;
        case 0x1df04cu: goto label_1df04c;
        case 0x1df050u: goto label_1df050;
        case 0x1df054u: goto label_1df054;
        case 0x1df058u: goto label_1df058;
        case 0x1df05cu: goto label_1df05c;
        case 0x1df060u: goto label_1df060;
        case 0x1df064u: goto label_1df064;
        case 0x1df068u: goto label_1df068;
        case 0x1df06cu: goto label_1df06c;
        case 0x1df070u: goto label_1df070;
        case 0x1df074u: goto label_1df074;
        case 0x1df078u: goto label_1df078;
        case 0x1df07cu: goto label_1df07c;
        case 0x1df080u: goto label_1df080;
        case 0x1df084u: goto label_1df084;
        case 0x1df088u: goto label_1df088;
        case 0x1df08cu: goto label_1df08c;
        case 0x1df090u: goto label_1df090;
        case 0x1df094u: goto label_1df094;
        case 0x1df098u: goto label_1df098;
        case 0x1df09cu: goto label_1df09c;
        case 0x1df0a0u: goto label_1df0a0;
        case 0x1df0a4u: goto label_1df0a4;
        case 0x1df0a8u: goto label_1df0a8;
        case 0x1df0acu: goto label_1df0ac;
        case 0x1df0b0u: goto label_1df0b0;
        case 0x1df0b4u: goto label_1df0b4;
        case 0x1df0b8u: goto label_1df0b8;
        case 0x1df0bcu: goto label_1df0bc;
        case 0x1df0c0u: goto label_1df0c0;
        case 0x1df0c4u: goto label_1df0c4;
        case 0x1df0c8u: goto label_1df0c8;
        case 0x1df0ccu: goto label_1df0cc;
        case 0x1df0d0u: goto label_1df0d0;
        case 0x1df0d4u: goto label_1df0d4;
        case 0x1df0d8u: goto label_1df0d8;
        case 0x1df0dcu: goto label_1df0dc;
        case 0x1df0e0u: goto label_1df0e0;
        case 0x1df0e4u: goto label_1df0e4;
        case 0x1df0e8u: goto label_1df0e8;
        case 0x1df0ecu: goto label_1df0ec;
        case 0x1df0f0u: goto label_1df0f0;
        case 0x1df0f4u: goto label_1df0f4;
        case 0x1df0f8u: goto label_1df0f8;
        case 0x1df0fcu: goto label_1df0fc;
        case 0x1df100u: goto label_1df100;
        case 0x1df104u: goto label_1df104;
        case 0x1df108u: goto label_1df108;
        case 0x1df10cu: goto label_1df10c;
        case 0x1df110u: goto label_1df110;
        case 0x1df114u: goto label_1df114;
        case 0x1df118u: goto label_1df118;
        case 0x1df11cu: goto label_1df11c;
        case 0x1df120u: goto label_1df120;
        case 0x1df124u: goto label_1df124;
        case 0x1df128u: goto label_1df128;
        case 0x1df12cu: goto label_1df12c;
        case 0x1df130u: goto label_1df130;
        case 0x1df134u: goto label_1df134;
        case 0x1df138u: goto label_1df138;
        case 0x1df13cu: goto label_1df13c;
        case 0x1df140u: goto label_1df140;
        case 0x1df144u: goto label_1df144;
        case 0x1df148u: goto label_1df148;
        case 0x1df14cu: goto label_1df14c;
        case 0x1df150u: goto label_1df150;
        case 0x1df154u: goto label_1df154;
        case 0x1df158u: goto label_1df158;
        case 0x1df15cu: goto label_1df15c;
        case 0x1df160u: goto label_1df160;
        case 0x1df164u: goto label_1df164;
        case 0x1df168u: goto label_1df168;
        case 0x1df16cu: goto label_1df16c;
        case 0x1df170u: goto label_1df170;
        case 0x1df174u: goto label_1df174;
        case 0x1df178u: goto label_1df178;
        case 0x1df17cu: goto label_1df17c;
        case 0x1df180u: goto label_1df180;
        case 0x1df184u: goto label_1df184;
        case 0x1df188u: goto label_1df188;
        case 0x1df18cu: goto label_1df18c;
        case 0x1df190u: goto label_1df190;
        case 0x1df194u: goto label_1df194;
        case 0x1df198u: goto label_1df198;
        case 0x1df19cu: goto label_1df19c;
        case 0x1df1a0u: goto label_1df1a0;
        case 0x1df1a4u: goto label_1df1a4;
        case 0x1df1a8u: goto label_1df1a8;
        case 0x1df1acu: goto label_1df1ac;
        case 0x1df1b0u: goto label_1df1b0;
        case 0x1df1b4u: goto label_1df1b4;
        case 0x1df1b8u: goto label_1df1b8;
        case 0x1df1bcu: goto label_1df1bc;
        case 0x1df1c0u: goto label_1df1c0;
        case 0x1df1c4u: goto label_1df1c4;
        case 0x1df1c8u: goto label_1df1c8;
        case 0x1df1ccu: goto label_1df1cc;
        case 0x1df1d0u: goto label_1df1d0;
        case 0x1df1d4u: goto label_1df1d4;
        case 0x1df1d8u: goto label_1df1d8;
        case 0x1df1dcu: goto label_1df1dc;
        case 0x1df1e0u: goto label_1df1e0;
        case 0x1df1e4u: goto label_1df1e4;
        case 0x1df1e8u: goto label_1df1e8;
        case 0x1df1ecu: goto label_1df1ec;
        case 0x1df1f0u: goto label_1df1f0;
        case 0x1df1f4u: goto label_1df1f4;
        case 0x1df1f8u: goto label_1df1f8;
        case 0x1df1fcu: goto label_1df1fc;
        case 0x1df200u: goto label_1df200;
        case 0x1df204u: goto label_1df204;
        case 0x1df208u: goto label_1df208;
        case 0x1df20cu: goto label_1df20c;
        case 0x1df210u: goto label_1df210;
        case 0x1df214u: goto label_1df214;
        case 0x1df218u: goto label_1df218;
        case 0x1df21cu: goto label_1df21c;
        case 0x1df220u: goto label_1df220;
        case 0x1df224u: goto label_1df224;
        case 0x1df228u: goto label_1df228;
        case 0x1df22cu: goto label_1df22c;
        case 0x1df230u: goto label_1df230;
        case 0x1df234u: goto label_1df234;
        case 0x1df238u: goto label_1df238;
        case 0x1df23cu: goto label_1df23c;
        case 0x1df240u: goto label_1df240;
        case 0x1df244u: goto label_1df244;
        case 0x1df248u: goto label_1df248;
        case 0x1df24cu: goto label_1df24c;
        case 0x1df250u: goto label_1df250;
        case 0x1df254u: goto label_1df254;
        case 0x1df258u: goto label_1df258;
        case 0x1df25cu: goto label_1df25c;
        case 0x1df260u: goto label_1df260;
        case 0x1df264u: goto label_1df264;
        case 0x1df268u: goto label_1df268;
        case 0x1df26cu: goto label_1df26c;
        case 0x1df270u: goto label_1df270;
        case 0x1df274u: goto label_1df274;
        case 0x1df278u: goto label_1df278;
        case 0x1df27cu: goto label_1df27c;
        case 0x1df280u: goto label_1df280;
        case 0x1df284u: goto label_1df284;
        case 0x1df288u: goto label_1df288;
        case 0x1df28cu: goto label_1df28c;
        case 0x1df290u: goto label_1df290;
        case 0x1df294u: goto label_1df294;
        case 0x1df298u: goto label_1df298;
        case 0x1df29cu: goto label_1df29c;
        case 0x1df2a0u: goto label_1df2a0;
        case 0x1df2a4u: goto label_1df2a4;
        case 0x1df2a8u: goto label_1df2a8;
        case 0x1df2acu: goto label_1df2ac;
        case 0x1df2b0u: goto label_1df2b0;
        case 0x1df2b4u: goto label_1df2b4;
        case 0x1df2b8u: goto label_1df2b8;
        case 0x1df2bcu: goto label_1df2bc;
        case 0x1df2c0u: goto label_1df2c0;
        case 0x1df2c4u: goto label_1df2c4;
        case 0x1df2c8u: goto label_1df2c8;
        case 0x1df2ccu: goto label_1df2cc;
        case 0x1df2d0u: goto label_1df2d0;
        case 0x1df2d4u: goto label_1df2d4;
        case 0x1df2d8u: goto label_1df2d8;
        case 0x1df2dcu: goto label_1df2dc;
        case 0x1df2e0u: goto label_1df2e0;
        case 0x1df2e4u: goto label_1df2e4;
        case 0x1df2e8u: goto label_1df2e8;
        case 0x1df2ecu: goto label_1df2ec;
        case 0x1df2f0u: goto label_1df2f0;
        case 0x1df2f4u: goto label_1df2f4;
        case 0x1df2f8u: goto label_1df2f8;
        case 0x1df2fcu: goto label_1df2fc;
        case 0x1df300u: goto label_1df300;
        case 0x1df304u: goto label_1df304;
        case 0x1df308u: goto label_1df308;
        case 0x1df30cu: goto label_1df30c;
        case 0x1df310u: goto label_1df310;
        case 0x1df314u: goto label_1df314;
        case 0x1df318u: goto label_1df318;
        case 0x1df31cu: goto label_1df31c;
        case 0x1df320u: goto label_1df320;
        case 0x1df324u: goto label_1df324;
        case 0x1df328u: goto label_1df328;
        case 0x1df32cu: goto label_1df32c;
        case 0x1df330u: goto label_1df330;
        case 0x1df334u: goto label_1df334;
        case 0x1df338u: goto label_1df338;
        case 0x1df33cu: goto label_1df33c;
        case 0x1df340u: goto label_1df340;
        case 0x1df344u: goto label_1df344;
        case 0x1df348u: goto label_1df348;
        case 0x1df34cu: goto label_1df34c;
        case 0x1df350u: goto label_1df350;
        case 0x1df354u: goto label_1df354;
        case 0x1df358u: goto label_1df358;
        case 0x1df35cu: goto label_1df35c;
        case 0x1df360u: goto label_1df360;
        case 0x1df364u: goto label_1df364;
        case 0x1df368u: goto label_1df368;
        case 0x1df36cu: goto label_1df36c;
        case 0x1df370u: goto label_1df370;
        case 0x1df374u: goto label_1df374;
        case 0x1df378u: goto label_1df378;
        case 0x1df37cu: goto label_1df37c;
        case 0x1df380u: goto label_1df380;
        case 0x1df384u: goto label_1df384;
        case 0x1df388u: goto label_1df388;
        case 0x1df38cu: goto label_1df38c;
        case 0x1df390u: goto label_1df390;
        case 0x1df394u: goto label_1df394;
        case 0x1df398u: goto label_1df398;
        case 0x1df39cu: goto label_1df39c;
        case 0x1df3a0u: goto label_1df3a0;
        case 0x1df3a4u: goto label_1df3a4;
        case 0x1df3a8u: goto label_1df3a8;
        case 0x1df3acu: goto label_1df3ac;
        case 0x1df3b0u: goto label_1df3b0;
        case 0x1df3b4u: goto label_1df3b4;
        case 0x1df3b8u: goto label_1df3b8;
        case 0x1df3bcu: goto label_1df3bc;
        case 0x1df3c0u: goto label_1df3c0;
        case 0x1df3c4u: goto label_1df3c4;
        case 0x1df3c8u: goto label_1df3c8;
        case 0x1df3ccu: goto label_1df3cc;
        case 0x1df3d0u: goto label_1df3d0;
        case 0x1df3d4u: goto label_1df3d4;
        case 0x1df3d8u: goto label_1df3d8;
        case 0x1df3dcu: goto label_1df3dc;
        case 0x1df3e0u: goto label_1df3e0;
        case 0x1df3e4u: goto label_1df3e4;
        case 0x1df3e8u: goto label_1df3e8;
        case 0x1df3ecu: goto label_1df3ec;
        case 0x1df3f0u: goto label_1df3f0;
        case 0x1df3f4u: goto label_1df3f4;
        case 0x1df3f8u: goto label_1df3f8;
        case 0x1df3fcu: goto label_1df3fc;
        case 0x1df400u: goto label_1df400;
        case 0x1df404u: goto label_1df404;
        case 0x1df408u: goto label_1df408;
        case 0x1df40cu: goto label_1df40c;
        case 0x1df410u: goto label_1df410;
        case 0x1df414u: goto label_1df414;
        case 0x1df418u: goto label_1df418;
        case 0x1df41cu: goto label_1df41c;
        case 0x1df420u: goto label_1df420;
        case 0x1df424u: goto label_1df424;
        case 0x1df428u: goto label_1df428;
        case 0x1df42cu: goto label_1df42c;
        case 0x1df430u: goto label_1df430;
        case 0x1df434u: goto label_1df434;
        case 0x1df438u: goto label_1df438;
        case 0x1df43cu: goto label_1df43c;
        case 0x1df440u: goto label_1df440;
        case 0x1df444u: goto label_1df444;
        case 0x1df448u: goto label_1df448;
        case 0x1df44cu: goto label_1df44c;
        case 0x1df450u: goto label_1df450;
        case 0x1df454u: goto label_1df454;
        case 0x1df458u: goto label_1df458;
        case 0x1df45cu: goto label_1df45c;
        case 0x1df460u: goto label_1df460;
        case 0x1df464u: goto label_1df464;
        case 0x1df468u: goto label_1df468;
        case 0x1df46cu: goto label_1df46c;
        case 0x1df470u: goto label_1df470;
        case 0x1df474u: goto label_1df474;
        case 0x1df478u: goto label_1df478;
        case 0x1df47cu: goto label_1df47c;
        case 0x1df480u: goto label_1df480;
        case 0x1df484u: goto label_1df484;
        case 0x1df488u: goto label_1df488;
        case 0x1df48cu: goto label_1df48c;
        case 0x1df490u: goto label_1df490;
        case 0x1df494u: goto label_1df494;
        case 0x1df498u: goto label_1df498;
        case 0x1df49cu: goto label_1df49c;
        case 0x1df4a0u: goto label_1df4a0;
        case 0x1df4a4u: goto label_1df4a4;
        case 0x1df4a8u: goto label_1df4a8;
        case 0x1df4acu: goto label_1df4ac;
        case 0x1df4b0u: goto label_1df4b0;
        case 0x1df4b4u: goto label_1df4b4;
        case 0x1df4b8u: goto label_1df4b8;
        case 0x1df4bcu: goto label_1df4bc;
        case 0x1df4c0u: goto label_1df4c0;
        case 0x1df4c4u: goto label_1df4c4;
        case 0x1df4c8u: goto label_1df4c8;
        case 0x1df4ccu: goto label_1df4cc;
        case 0x1df4d0u: goto label_1df4d0;
        case 0x1df4d4u: goto label_1df4d4;
        case 0x1df4d8u: goto label_1df4d8;
        case 0x1df4dcu: goto label_1df4dc;
        case 0x1df4e0u: goto label_1df4e0;
        case 0x1df4e4u: goto label_1df4e4;
        case 0x1df4e8u: goto label_1df4e8;
        case 0x1df4ecu: goto label_1df4ec;
        case 0x1df4f0u: goto label_1df4f0;
        case 0x1df4f4u: goto label_1df4f4;
        case 0x1df4f8u: goto label_1df4f8;
        case 0x1df4fcu: goto label_1df4fc;
        case 0x1df500u: goto label_1df500;
        case 0x1df504u: goto label_1df504;
        case 0x1df508u: goto label_1df508;
        case 0x1df50cu: goto label_1df50c;
        case 0x1df510u: goto label_1df510;
        case 0x1df514u: goto label_1df514;
        case 0x1df518u: goto label_1df518;
        case 0x1df51cu: goto label_1df51c;
        default: break;
    }

    ctx->pc = 0x1de130u;

label_1de130:
    // 0x1de130: 0x27bdfdf0  addiu       $sp, $sp, -0x210
    ctx->pc = 0x1de130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966768));
label_1de134:
    // 0x1de134: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1de134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1de138:
    // 0x1de138: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x1de138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_1de13c:
    // 0x1de13c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1de13cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de140:
    // 0x1de140: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x1de140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_1de144:
    // 0x1de144: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x1de144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_1de148:
    // 0x1de148: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x1de148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_1de14c:
    // 0x1de14c: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x1de14cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_1de150:
    // 0x1de150: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x1de150u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_1de154:
    // 0x1de154: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x1de154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_1de158:
    // 0x1de158: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1de158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_1de15c:
    // 0x1de15c: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x1de15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_1de160:
    // 0x1de160: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1de160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1de164:
    // 0x1de164: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x1de164u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_1de168:
    // 0x1de168: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x1de168u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_1de16c:
    // 0x1de16c: 0xafa401ac  sw          $a0, 0x1AC($sp)
    ctx->pc = 0x1de16cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 4));
label_1de170:
    // 0x1de170: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1de170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1de174:
    // 0x1de174: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1de174u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_1de178:
    // 0x1de178: 0x24942f90  addiu       $s4, $a0, 0x2F90
    ctx->pc = 0x1de178u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 4), 12176));
label_1de17c:
    // 0x1de17c: 0x8c22c4d0  lw          $v0, -0x3B30($at)
    ctx->pc = 0x1de17cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952144)));
label_1de180:
    // 0x1de180: 0xc0a0ed8  jal         func_283B60
label_1de184:
    if (ctx->pc == 0x1DE184u) {
        ctx->pc = 0x1DE184u;
            // 0x1de184: 0xafa20150  sw          $v0, 0x150($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
        ctx->pc = 0x1DE188u;
        goto label_1de188;
    }
    ctx->pc = 0x1DE180u;
    SET_GPR_U32(ctx, 31, 0x1DE188u);
    ctx->pc = 0x1DE184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE180u;
            // 0x1de184: 0xafa20150  sw          $v0, 0x150($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE188u; }
        if (ctx->pc != 0x1DE188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE188u; }
        if (ctx->pc != 0x1DE188u) { return; }
    }
    ctx->pc = 0x1DE188u;
label_1de188:
    // 0x1de188: 0xc0683a8  jal         func_1A0EA0
label_1de18c:
    if (ctx->pc == 0x1DE18Cu) {
        ctx->pc = 0x1DE18Cu;
            // 0x1de18c: 0xafa20118  sw          $v0, 0x118($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
        ctx->pc = 0x1DE190u;
        goto label_1de190;
    }
    ctx->pc = 0x1DE188u;
    SET_GPR_U32(ctx, 31, 0x1DE190u);
    ctx->pc = 0x1DE18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE188u;
            // 0x1de18c: 0xafa20118  sw          $v0, 0x118($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE190u; }
        if (ctx->pc != 0x1DE190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE190u; }
        if (ctx->pc != 0x1DE190u) { return; }
    }
    ctx->pc = 0x1DE190u;
label_1de190:
    // 0x1de190: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1de190u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1de194:
    // 0x1de194: 0xc0684dc  jal         func_1A1370
label_1de198:
    if (ctx->pc == 0x1DE198u) {
        ctx->pc = 0x1DE198u;
            // 0x1de198: 0x24040134  addiu       $a0, $zero, 0x134 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 308));
        ctx->pc = 0x1DE19Cu;
        goto label_1de19c;
    }
    ctx->pc = 0x1DE194u;
    SET_GPR_U32(ctx, 31, 0x1DE19Cu);
    ctx->pc = 0x1DE198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE194u;
            // 0x1de198: 0x24040134  addiu       $a0, $zero, 0x134 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 308));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1370u;
    if (runtime->hasFunction(0x1A1370u)) {
        auto targetFn = runtime->lookupFunction(0x1A1370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE19Cu; }
        if (ctx->pc != 0x1DE19Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserItemHaveNum__Fi_0x1a1370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE19Cu; }
        if (ctx->pc != 0x1DE19Cu) { return; }
    }
    ctx->pc = 0x1DE19Cu;
label_1de19c:
    // 0x1de19c: 0xafa2011c  sw          $v0, 0x11C($sp)
    ctx->pc = 0x1de19cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 284), GPR_U32(ctx, 2));
label_1de1a0:
    // 0x1de1a0: 0xafa00120  sw          $zero, 0x120($sp)
    ctx->pc = 0x1de1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 0));
label_1de1a4:
    // 0x1de1a4: 0xafa00160  sw          $zero, 0x160($sp)
    ctx->pc = 0x1de1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 0));
label_1de1a8:
    // 0x1de1a8: 0x8fa401ac  lw          $a0, 0x1AC($sp)
    ctx->pc = 0x1de1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
label_1de1ac:
    // 0x1de1ac: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x1de1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_1de1b0:
    // 0x1de1b0: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x1de1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1de1b4:
    // 0x1de1b4: 0x8c700484  lw          $s0, 0x484($v1)
    ctx->pc = 0x1de1b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1156)));
label_1de1b8:
    // 0x1de1b8: 0x120004c1  beqz        $s0, . + 4 + (0x4C1 << 2)
label_1de1bc:
    if (ctx->pc == 0x1DE1BCu) {
        ctx->pc = 0x1DE1C0u;
        goto label_1de1c0;
    }
    ctx->pc = 0x1DE1B8u;
    {
        const bool branch_taken_0x1de1b8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de1b8) {
            ctx->pc = 0x1DF4C0u;
            goto label_1df4c0;
        }
    }
    ctx->pc = 0x1DE1C0u;
label_1de1c0:
    // 0x1de1c0: 0x8e041330  lw          $a0, 0x1330($s0)
    ctx->pc = 0x1de1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4912)));
label_1de1c4:
    // 0x1de1c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1de1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de1c8:
    // 0x1de1c8: 0x148304bd  bne         $a0, $v1, . + 4 + (0x4BD << 2)
label_1de1cc:
    if (ctx->pc == 0x1DE1CCu) {
        ctx->pc = 0x1DE1D0u;
        goto label_1de1d0;
    }
    ctx->pc = 0x1DE1C8u;
    {
        const bool branch_taken_0x1de1c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1de1c8) {
            ctx->pc = 0x1DF4C0u;
            goto label_1df4c0;
        }
    }
    ctx->pc = 0x1DE1D0u;
label_1de1d0:
    // 0x1de1d0: 0x8e030be8  lw          $v1, 0xBE8($s0)
    ctx->pc = 0x1de1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3048)));
label_1de1d4:
    // 0x1de1d4: 0x1c6004ba  bgtz        $v1, . + 4 + (0x4BA << 2)
label_1de1d8:
    if (ctx->pc == 0x1DE1D8u) {
        ctx->pc = 0x1DE1D8u;
            // 0x1de1d8: 0x8e1e1150  lw          $fp, 0x1150($s0) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4432)));
        ctx->pc = 0x1DE1DCu;
        goto label_1de1dc;
    }
    ctx->pc = 0x1DE1D4u;
    {
        const bool branch_taken_0x1de1d4 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1DE1D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE1D4u;
            // 0x1de1d8: 0x8e1e1150  lw          $fp, 0x1150($s0) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de1d4) {
            ctx->pc = 0x1DF4C0u;
            goto label_1df4c0;
        }
    }
    ctx->pc = 0x1DE1DCu;
label_1de1dc:
    // 0x1de1dc: 0x8e031348  lw          $v1, 0x1348($s0)
    ctx->pc = 0x1de1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4936)));
label_1de1e0:
    // 0x1de1e0: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x1de1e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1de1e4:
    // 0x1de1e4: 0x146004b6  bnez        $v1, . + 4 + (0x4B6 << 2)
label_1de1e8:
    if (ctx->pc == 0x1DE1E8u) {
        ctx->pc = 0x1DE1ECu;
        goto label_1de1ec;
    }
    ctx->pc = 0x1DE1E4u;
    {
        const bool branch_taken_0x1de1e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de1e4) {
            ctx->pc = 0x1DF4C0u;
            goto label_1df4c0;
        }
    }
    ctx->pc = 0x1DE1ECu;
label_1de1ec:
    // 0x1de1ec: 0x86030730  lh          $v1, 0x730($s0)
    ctx->pc = 0x1de1ecu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 1840)));
label_1de1f0:
    // 0x1de1f0: 0x146004b3  bnez        $v1, . + 4 + (0x4B3 << 2)
label_1de1f4:
    if (ctx->pc == 0x1DE1F4u) {
        ctx->pc = 0x1DE1F8u;
        goto label_1de1f8;
    }
    ctx->pc = 0x1DE1F0u;
    {
        const bool branch_taken_0x1de1f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de1f0) {
            ctx->pc = 0x1DF4C0u;
            goto label_1df4c0;
        }
    }
    ctx->pc = 0x1DE1F8u;
label_1de1f8:
    // 0x1de1f8: 0x8fa20120  lw          $v0, 0x120($sp)
    ctx->pc = 0x1de1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1de1fc:
    // 0x1de1fc: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1de1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1de200:
    // 0x1de200: 0x24840710  addiu       $a0, $a0, 0x710
    ctx->pc = 0x1de200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1808));
label_1de204:
    // 0x1de204: 0xc06ea10  jal         func_1BA840
label_1de208:
    if (ctx->pc == 0x1DE208u) {
        ctx->pc = 0x1DE208u;
            // 0x1de208: 0x24450018  addiu       $a1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->pc = 0x1DE20Cu;
        goto label_1de20c;
    }
    ctx->pc = 0x1DE204u;
    SET_GPR_U32(ctx, 31, 0x1DE20Cu);
    ctx->pc = 0x1DE208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE204u;
            // 0x1de208: 0x24450018  addiu       $a1, $v0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA840u;
    if (runtime->hasFunction(0x1BA840u)) {
        auto targetFn = runtime->lookupFunction(0x1BA840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE20Cu; }
        if (ctx->pc != 0x1DE20Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckHit__11CColPrimManFi_0x1ba840(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE20Cu; }
        if (ctx->pc != 0x1DE20Cu) { return; }
    }
    ctx->pc = 0x1DE20Cu;
label_1de20c:
    // 0x1de20c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1de20cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1de210:
    // 0x1de210: 0x1220049b  beqz        $s1, . + 4 + (0x49B << 2)
label_1de214:
    if (ctx->pc == 0x1DE214u) {
        ctx->pc = 0x1DE218u;
        goto label_1de218;
    }
    ctx->pc = 0x1DE210u;
    {
        const bool branch_taken_0x1de210 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de210) {
            ctx->pc = 0x1DF480u;
            goto label_1df480;
        }
    }
    ctx->pc = 0x1DE218u;
label_1de218:
    // 0x1de218: 0x822300e6  lb          $v1, 0xE6($s1)
    ctx->pc = 0x1de218u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 230)));
label_1de21c:
    // 0x1de21c: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_1de220:
    if (ctx->pc == 0x1DE220u) {
        ctx->pc = 0x1DE220u;
            // 0x1de220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DE224u;
        goto label_1de224;
    }
    ctx->pc = 0x1DE21Cu;
    {
        const bool branch_taken_0x1de21c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE21Cu;
            // 0x1de220: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de21c) {
            ctx->pc = 0x1DE27Cu;
            goto label_1de27c;
        }
    }
    ctx->pc = 0x1DE224u;
label_1de224:
    // 0x1de224: 0xc077820  jal         func_1DE080
label_1de228:
    if (ctx->pc == 0x1DE228u) {
        ctx->pc = 0x1DE228u;
            // 0x1de228: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DE22Cu;
        goto label_1de22c;
    }
    ctx->pc = 0x1DE224u;
    SET_GPR_U32(ctx, 31, 0x1DE22Cu);
    ctx->pc = 0x1DE228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE224u;
            // 0x1de228: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DE080u;
    if (runtime->hasFunction(0x1DE080u)) {
        auto targetFn = runtime->lookupFunction(0x1DE080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE22Cu; }
        if (ctx->pc != 0x1DE22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckGiftPack__FP14CActiveMonsterP8CColPrim_0x1de080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE22Cu; }
        if (ctx->pc != 0x1DE22Cu) { return; }
    }
    ctx->pc = 0x1DE22Cu;
label_1de22c:
    // 0x1de22c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1de230:
    if (ctx->pc == 0x1DE230u) {
        ctx->pc = 0x1DE234u;
        goto label_1de234;
    }
    ctx->pc = 0x1DE22Cu;
    {
        const bool branch_taken_0x1de22c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de22c) {
            ctx->pc = 0x1DE25Cu;
            goto label_1de25c;
        }
    }
    ctx->pc = 0x1DE234u;
label_1de234:
    // 0x1de234: 0x8fa2011c  lw          $v0, 0x11C($sp)
    ctx->pc = 0x1de234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_1de238:
    // 0x1de238: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1de23c:
    if (ctx->pc == 0x1DE23Cu) {
        ctx->pc = 0x1DE240u;
        goto label_1de240;
    }
    ctx->pc = 0x1DE238u;
    {
        const bool branch_taken_0x1de238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de238) {
            ctx->pc = 0x1DE25Cu;
            goto label_1de25c;
        }
    }
    ctx->pc = 0x1DE240u;
label_1de240:
    // 0x1de240: 0xc60c0110  lwc1        $f12, 0x110($s0)
    ctx->pc = 0x1de240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1de244:
    // 0x1de244: 0x26041290  addiu       $a0, $s0, 0x1290
    ctx->pc = 0x1de244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4752));
label_1de248:
    // 0x1de248: 0xc07272c  jal         func_1C9CB0
label_1de24c:
    if (ctx->pc == 0x1DE24Cu) {
        ctx->pc = 0x1DE24Cu;
            // 0x1de24c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DE250u;
        goto label_1de250;
    }
    ctx->pc = 0x1DE248u;
    SET_GPR_U32(ctx, 31, 0x1DE250u);
    ctx->pc = 0x1DE24Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE248u;
            // 0x1de24c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9CB0u;
    if (runtime->hasFunction(0x1C9CB0u)) {
        auto targetFn = runtime->lookupFunction(0x1C9CB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE250u; }
        if (ctx->pc != 0x1DE250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9CGiftMarkFP11CCharacter2f_0x1c9cb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE250u; }
        if (ctx->pc != 0x1DE250u) { return; }
    }
    ctx->pc = 0x1DE250u;
label_1de250:
    // 0x1de250: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1de250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de254:
    // 0x1de254: 0x1000049a  b           . + 4 + (0x49A << 2)
label_1de258:
    if (ctx->pc == 0x1DE258u) {
        ctx->pc = 0x1DE258u;
            // 0x1de258: 0xa2031358  sb          $v1, 0x1358($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4952), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1DE25Cu;
        goto label_1de25c;
    }
    ctx->pc = 0x1DE254u;
    {
        const bool branch_taken_0x1de254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE254u;
            // 0x1de258: 0xa2031358  sb          $v1, 0x1358($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 4952), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de254) {
            ctx->pc = 0x1DF4C0u;
            goto label_1df4c0;
        }
    }
    ctx->pc = 0x1DE25Cu;
label_1de25c:
    // 0x1de25c: 0x0  nop
    ctx->pc = 0x1de25cu;
    // NOP
label_1de260:
    // 0x1de260: 0x8fa201ac  lw          $v0, 0x1AC($sp)
    ctx->pc = 0x1de260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
label_1de264:
    // 0x1de264: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x1de264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_1de268:
    // 0x1de268: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1de268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1de26c:
    // 0x1de26c: 0xc077750  jal         func_1DDD40
label_1de270:
    if (ctx->pc == 0x1DE270u) {
        ctx->pc = 0x1DE270u;
            // 0x1de270: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1DE274u;
        goto label_1de274;
    }
    ctx->pc = 0x1DE26Cu;
    SET_GPR_U32(ctx, 31, 0x1DE274u);
    ctx->pc = 0x1DE270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE26Cu;
            // 0x1de270: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DDD40u;
    if (runtime->hasFunction(0x1DDD40u)) {
        auto targetFn = runtime->lookupFunction(0x1DDD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE274u; }
        if (ctx->pc != 0x1DE274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GuardEffectSet__FP6CScenePfi_0x1ddd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE274u; }
        if (ctx->pc != 0x1DE274u) { return; }
    }
    ctx->pc = 0x1DE274u;
label_1de274:
    // 0x1de274: 0x10000492  b           . + 4 + (0x492 << 2)
label_1de278:
    if (ctx->pc == 0x1DE278u) {
        ctx->pc = 0x1DE27Cu;
        goto label_1de27c;
    }
    ctx->pc = 0x1DE274u;
    {
        const bool branch_taken_0x1de274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de274) {
            ctx->pc = 0x1DF4C0u;
            goto label_1df4c0;
        }
    }
    ctx->pc = 0x1DE27Cu;
label_1de27c:
    // 0x1de27c: 0x0  nop
    ctx->pc = 0x1de27cu;
    // NOP
label_1de280:
    // 0x1de280: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1de280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1de284:
    // 0x1de284: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1de284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1de288:
    // 0x1de288: 0x80840018  lb          $a0, 0x18($a0)
    ctx->pc = 0x1de288u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
label_1de28c:
    // 0x1de28c: 0x1083048c  beq         $a0, $v1, . + 4 + (0x48C << 2)
label_1de290:
    if (ctx->pc == 0x1DE290u) {
        ctx->pc = 0x1DE294u;
        goto label_1de294;
    }
    ctx->pc = 0x1DE28Cu;
    {
        const bool branch_taken_0x1de28c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1de28c) {
            ctx->pc = 0x1DF4C0u;
            goto label_1df4c0;
        }
    }
    ctx->pc = 0x1DE294u;
label_1de294:
    // 0x1de294: 0x4163c  dsll32      $v0, $a0, 24
    ctx->pc = 0x1de294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 24));
label_1de298:
    // 0x1de298: 0x3c120035  lui         $s2, 0x35
    ctx->pc = 0x1de298u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)53 << 16));
label_1de29c:
    // 0x1de29c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1de29cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
label_1de2a0:
    // 0x1de2a0: 0x2652d240  addiu       $s2, $s2, -0x2DC0
    ctx->pc = 0x1de2a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294955584));
label_1de2a4:
    // 0x1de2a4: 0xa60212a4  sh          $v0, 0x12A4($s0)
    ctx->pc = 0x1de2a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4772), (uint16_t)GPR_U32(ctx, 2));
label_1de2a8:
    // 0x1de2a8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1de2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1de2ac:
    // 0x1de2ac: 0x80420018  lb          $v0, 0x18($v0)
    ctx->pc = 0x1de2acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
label_1de2b0:
    // 0x1de2b0: 0x10000008  b           . + 4 + (0x8 << 2)
label_1de2b4:
    if (ctx->pc == 0x1DE2B4u) {
        ctx->pc = 0x1DE2B4u;
            // 0x1de2b4: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1DE2B8u;
        goto label_1de2b8;
    }
    ctx->pc = 0x1DE2B0u;
    {
        const bool branch_taken_0x1de2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE2B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE2B0u;
            // 0x1de2b4: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de2b0) {
            ctx->pc = 0x1DE2D4u;
            goto label_1de2d4;
        }
    }
    ctx->pc = 0x1DE2B8u;
label_1de2b8:
    // 0x1de2b8: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x1de2b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_1de2bc:
    // 0x1de2bc: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x1de2bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_1de2c0:
    // 0x1de2c0: 0x14640004  bne         $v1, $a0, . + 4 + (0x4 << 2)
label_1de2c4:
    if (ctx->pc == 0x1DE2C4u) {
        ctx->pc = 0x1DE2C8u;
        goto label_1de2c8;
    }
    ctx->pc = 0x1DE2C0u;
    {
        const bool branch_taken_0x1de2c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1de2c0) {
            ctx->pc = 0x1DE2D4u;
            goto label_1de2d4;
        }
    }
    ctx->pc = 0x1DE2C8u;
label_1de2c8:
    // 0x1de2c8: 0x3c120035  lui         $s2, 0x35
    ctx->pc = 0x1de2c8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)53 << 16));
label_1de2cc:
    // 0x1de2cc: 0x10000005  b           . + 4 + (0x5 << 2)
label_1de2d0:
    if (ctx->pc == 0x1DE2D0u) {
        ctx->pc = 0x1DE2D0u;
            // 0x1de2d0: 0x2652d240  addiu       $s2, $s2, -0x2DC0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294955584));
        ctx->pc = 0x1DE2D4u;
        goto label_1de2d4;
    }
    ctx->pc = 0x1DE2CCu;
    {
        const bool branch_taken_0x1de2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE2D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE2CCu;
            // 0x1de2d0: 0x2652d240  addiu       $s2, $s2, -0x2DC0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294955584));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de2cc) {
            ctx->pc = 0x1DE2E4u;
            goto label_1de2e4;
        }
    }
    ctx->pc = 0x1DE2D4u;
label_1de2d4:
    // 0x1de2d4: 0x0  nop
    ctx->pc = 0x1de2d4u;
    // NOP
label_1de2d8:
    // 0x1de2d8: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x1de2d8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_1de2dc:
    // 0x1de2dc: 0x1462fff6  bne         $v1, $v0, . + 4 + (-0xA << 2)
label_1de2e0:
    if (ctx->pc == 0x1DE2E0u) {
        ctx->pc = 0x1DE2E4u;
        goto label_1de2e4;
    }
    ctx->pc = 0x1DE2DCu;
    {
        const bool branch_taken_0x1de2dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1de2dc) {
            ctx->pc = 0x1DE2B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1de2b8;
        }
    }
    ctx->pc = 0x1DE2E4u;
label_1de2e4:
    // 0x1de2e4: 0x0  nop
    ctx->pc = 0x1de2e4u;
    // NOP
label_1de2e8:
    // 0x1de2e8: 0x86430002  lh          $v1, 0x2($s2)
    ctx->pc = 0x1de2e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_1de2ec:
    // 0x1de2ec: 0x8e820098  lw          $v0, 0x98($s4)
    ctx->pc = 0x1de2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 152)));
label_1de2f0:
    // 0x1de2f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1de2f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_1de2f4:
    // 0x1de2f4: 0xae820098  sw          $v0, 0x98($s4)
    ctx->pc = 0x1de2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 152), GPR_U32(ctx, 2));
label_1de2f8:
    // 0x1de2f8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1de2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1de2fc:
    // 0x1de2fc: 0x80830018  lb          $v1, 0x18($a0)
    ctx->pc = 0x1de2fcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
label_1de300:
    // 0x1de300: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1de304:
    if (ctx->pc == 0x1DE304u) {
        ctx->pc = 0x1DE304u;
            // 0x1de304: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DE308u;
        goto label_1de308;
    }
    ctx->pc = 0x1DE300u;
    {
        const bool branch_taken_0x1de300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE300u;
            // 0x1de304: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de300) {
            ctx->pc = 0x1DE314u;
            goto label_1de314;
        }
    }
    ctx->pc = 0x1DE308u;
label_1de308:
    // 0x1de308: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1de308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1de30c:
    // 0x1de30c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1de310:
    if (ctx->pc == 0x1DE310u) {
        ctx->pc = 0x1DE314u;
        goto label_1de314;
    }
    ctx->pc = 0x1DE30Cu;
    {
        const bool branch_taken_0x1de30c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1de30c) {
            ctx->pc = 0x1DE31Cu;
            goto label_1de31c;
        }
    }
    ctx->pc = 0x1DE314u;
label_1de314:
    // 0x1de314: 0x0  nop
    ctx->pc = 0x1de314u;
    // NOP
label_1de318:
    // 0x1de318: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1de318u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de31c:
    // 0x1de31c: 0x0  nop
    ctx->pc = 0x1de31cu;
    // NOP
label_1de320:
    // 0x1de320: 0x8e230088  lw          $v1, 0x88($s1)
    ctx->pc = 0x1de320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
label_1de324:
    // 0x1de324: 0x96021326  lhu         $v0, 0x1326($s0)
    ctx->pc = 0x1de324u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4902)));
label_1de328:
    // 0x1de328: 0x8e2500a0  lw          $a1, 0xA0($s1)
    ctx->pc = 0x1de328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_1de32c:
    // 0x1de32c: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1de32cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1de330:
    // 0x1de330: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de330u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1de334:
    // 0x1de334: 0x30a21000  andi        $v0, $a1, 0x1000
    ctx->pc = 0x1de334u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4096);
label_1de338:
    // 0x1de338: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1de33c:
    if (ctx->pc == 0x1DE33Cu) {
        ctx->pc = 0x1DE33Cu;
            // 0x1de33c: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1DE340u;
        goto label_1de340;
    }
    ctx->pc = 0x1DE338u;
    {
        const bool branch_taken_0x1de338 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE338u;
            // 0x1de33c: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de338) {
            ctx->pc = 0x1DE380u;
            goto label_1de380;
        }
    }
    ctx->pc = 0x1DE340u;
label_1de340:
    // 0x1de340: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x1de340u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1de344:
    // 0x1de344: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1de344u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1de348:
    // 0x1de348: 0xc6011310  lwc1        $f1, 0x1310($s0)
    ctx->pc = 0x1de348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4880)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1de34c:
    // 0x1de34c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1de34cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_1de350:
    // 0x1de350: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x1de350u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1de354:
    // 0x1de354: 0x8e021150  lw          $v0, 0x1150($s0)
    ctx->pc = 0x1de354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4432)));
label_1de358:
    // 0x1de358: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1de358u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1de35c:
    // 0x1de35c: 0x844200ae  lh          $v0, 0xAE($v0)
    ctx->pc = 0x1de35cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 174)));
label_1de360:
    // 0x1de360: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1de360u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1de364:
    // 0x1de364: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1de364u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1de368:
    // 0x1de368: 0x46000d02  mul.s       $f20, $f1, $f0
    ctx->pc = 0x1de368u;
    ctx->f[20] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1de36c:
    // 0x1de36c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de36cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1de370:
    // 0x1de370: 0x0  nop
    ctx->pc = 0x1de370u;
    // NOP
label_1de374:
    // 0x1de374: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1de374u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1de378:
    // 0x1de378: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1de378u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_1de37c:
    // 0x1de37c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1de37cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1de380:
    // 0x1de380: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1de380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_1de384:
    // 0x1de384: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1de384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_1de388:
    // 0x1de388: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1de38c:
    if (ctx->pc == 0x1DE38Cu) {
        ctx->pc = 0x1DE390u;
        goto label_1de390;
    }
    ctx->pc = 0x1DE388u;
    {
        const bool branch_taken_0x1de388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de388) {
            ctx->pc = 0x1DE3B4u;
            goto label_1de3b4;
        }
    }
    ctx->pc = 0x1DE390u;
label_1de390:
    // 0x1de390: 0x8e031150  lw          $v1, 0x1150($s0)
    ctx->pc = 0x1de390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4432)));
label_1de394:
    // 0x1de394: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1de394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1de398:
    // 0x1de398: 0x80630054  lb          $v1, 0x54($v1)
    ctx->pc = 0x1de398u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 84)));
label_1de39c:
    // 0x1de39c: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
label_1de3a0:
    if (ctx->pc == 0x1DE3A0u) {
        ctx->pc = 0x1DE3A4u;
        goto label_1de3a4;
    }
    ctx->pc = 0x1DE39Cu;
    {
        const bool branch_taken_0x1de39c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1de39c) {
            ctx->pc = 0x1DE3A8u;
            goto label_1de3a8;
        }
    }
    ctx->pc = 0x1DE3A4u;
label_1de3a4:
    // 0x1de3a4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1de3a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1de3a8:
    // 0x1de3a8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1de3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_1de3ac:
    // 0x1de3ac: 0xc04a0d2  jal         func_128348
label_1de3b0:
    if (ctx->pc == 0x1DE3B0u) {
        ctx->pc = 0x1DE3B0u;
            // 0x1de3b0: 0x24847f88  addiu       $a0, $a0, 0x7F88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32648));
        ctx->pc = 0x1DE3B4u;
        goto label_1de3b4;
    }
    ctx->pc = 0x1DE3ACu;
    SET_GPR_U32(ctx, 31, 0x1DE3B4u);
    ctx->pc = 0x1DE3B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE3ACu;
            // 0x1de3b0: 0x24847f88  addiu       $a0, $a0, 0x7F88 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE3B4u; }
        if (ctx->pc != 0x1DE3B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE3B4u; }
        if (ctx->pc != 0x1DE3B4u) { return; }
    }
    ctx->pc = 0x1DE3B4u;
label_1de3b4:
    // 0x1de3b4: 0x0  nop
    ctx->pc = 0x1de3b4u;
    // NOP
label_1de3b8:
    // 0x1de3b8: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1de3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1de3bc:
    // 0x1de3bc: 0x3c080035  lui         $t0, 0x35
    ctx->pc = 0x1de3bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)53 << 16));
label_1de3c0:
    // 0x1de3c0: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1de3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1de3c4:
    // 0x1de3c4: 0x3443d70a  ori         $v1, $v0, 0xD70A
    ctx->pc = 0x1de3c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_1de3c8:
    // 0x1de3c8: 0x2508d1a0  addiu       $t0, $t0, -0x2E60
    ctx->pc = 0x1de3c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294955424));
label_1de3cc:
    // 0x1de3cc: 0x44832000  mtc1        $v1, $f4
    ctx->pc = 0x1de3ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
label_1de3d0:
    // 0x1de3d0: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x1de3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_1de3d4:
    // 0x1de3d4: 0x2442d2b0  addiu       $v0, $v0, -0x2D50
    ctx->pc = 0x1de3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955696));
label_1de3d8:
    // 0x1de3d8: 0x27a701b0  addiu       $a3, $sp, 0x1B0
    ctx->pc = 0x1de3d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_1de3dc:
    // 0x1de3dc: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x1de3dcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1de3e0:
    // 0x1de3e0: 0x44802800  mtc1        $zero, $f5
    ctx->pc = 0x1de3e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[5], &bits, sizeof(bits)); }
label_1de3e4:
    // 0x1de3e4: 0x80890018  lb          $t1, 0x18($a0)
    ctx->pc = 0x1de3e4u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 24)));
label_1de3e8:
    // 0x1de3e8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1de3e8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de3ec:
    // 0x1de3ec: 0x78450010  lq          $a1, 0x10($v0)
    ctx->pc = 0x1de3ecu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_1de3f0:
    // 0x1de3f0: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x1de3f0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_1de3f4:
    // 0x1de3f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1de3f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de3f8:
    // 0x1de3f8: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x1de3f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_1de3fc:
    // 0x1de3fc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1de3fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de400:
    // 0x1de400: 0x85080000  lh          $t0, 0x0($t0)
    ctx->pc = 0x1de400u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_1de404:
    // 0x1de404: 0x84040  sll         $t0, $t0, 1
    ctx->pc = 0x1de404u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 1));
label_1de408:
    // 0x1de408: 0x3c84021  addu        $t0, $fp, $t0
    ctx->pc = 0x1de408u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 8)));
label_1de40c:
    // 0x1de40c: 0x8508007c  lh          $t0, 0x7C($t0)
    ctx->pc = 0x1de40cu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 124)));
label_1de410:
    // 0x1de410: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x1de410u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1de414:
    // 0x1de414: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x1de414u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
label_1de418:
    // 0x1de418: 0x7ce50010  sq          $a1, 0x10($a3)
    ctx->pc = 0x1de418u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 5));
label_1de41c:
    // 0x1de41c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1de41cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1de420:
    // 0x1de420: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x1de420u;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
label_1de424:
    // 0x1de424: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1de424u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1de428:
    // 0x1de428: 0x8e051150  lw          $a1, 0x1150($s0)
    ctx->pc = 0x1de428u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4432)));
label_1de42c:
    // 0x1de42c: 0x3c063c00  lui         $a2, 0x3C00
    ctx->pc = 0x1de42cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15360 << 16));
label_1de430:
    // 0x1de430: 0x8288008c  lb          $t0, 0x8C($s4)
    ctx->pc = 0x1de430u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 140)));
label_1de434:
    // 0x1de434: 0x34c68081  ori         $a2, $a2, 0x8081
    ctx->pc = 0x1de434u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32897);
label_1de438:
    // 0x1de438: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x1de438u;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1de43c:
    // 0x1de43c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1de43cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1de440:
    // 0x1de440: 0x2233021  addu        $a2, $s1, $v1
    ctx->pc = 0x1de440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_1de444:
    // 0x1de444: 0x84c90090  lh          $t1, 0x90($a2)
    ctx->pc = 0x1de444u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 144)));
label_1de448:
    // 0x1de448: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x1de448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_1de44c:
    // 0x1de44c: 0x84c6006c  lh          $a2, 0x6C($a2)
    ctx->pc = 0x1de44cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 108)));
label_1de450:
    // 0x1de450: 0x44890800  mtc1        $t1, $f1
    ctx->pc = 0x1de450u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1de454:
    // 0x1de454: 0x0  nop
    ctx->pc = 0x1de454u;
    // NOP
label_1de458:
    // 0x1de458: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1de458u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1de45c:
    // 0x1de45c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x1de45cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1de460:
    // 0x1de460: 0x0  nop
    ctx->pc = 0x1de460u;
    // NOP
label_1de464:
    // 0x1de464: 0x46011042  mul.s       $f1, $f2, $f1
    ctx->pc = 0x1de464u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
label_1de468:
    // 0x1de468: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1de468u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1de46c:
    // 0x1de46c: 0x11070005  beq         $t0, $a3, . + 4 + (0x5 << 2)
label_1de470:
    if (ctx->pc == 0x1DE470u) {
        ctx->pc = 0x1DE470u;
            // 0x1de470: 0x460020c2  mul.s       $f3, $f4, $f0 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
        ctx->pc = 0x1DE474u;
        goto label_1de474;
    }
    ctx->pc = 0x1DE46Cu;
    {
        const bool branch_taken_0x1de46c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 7));
        ctx->pc = 0x1DE470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE46Cu;
            // 0x1de470: 0x460020c2  mul.s       $f3, $f4, $f0 (Delay Slot)
        ctx->f[3] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de46c) {
            ctx->pc = 0x1DE484u;
            goto label_1de484;
        }
    }
    ctx->pc = 0x1DE474u;
label_1de474:
    // 0x1de474: 0x4601a002  mul.s       $f0, $f20, $f1
    ctx->pc = 0x1de474u;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_1de478:
    // 0x1de478: 0x46001802  mul.s       $f0, $f3, $f0
    ctx->pc = 0x1de478u;
    ctx->f[0] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
label_1de47c:
    // 0x1de47c: 0x10000008  b           . + 4 + (0x8 << 2)
label_1de480:
    if (ctx->pc == 0x1DE480u) {
        ctx->pc = 0x1DE480u;
            // 0x1de480: 0x46002940  add.s       $f5, $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
        ctx->pc = 0x1DE484u;
        goto label_1de484;
    }
    ctx->pc = 0x1DE47Cu;
    {
        const bool branch_taken_0x1de47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE47Cu;
            // 0x1de480: 0x46002940  add.s       $f5, $f5, $f0 (Delay Slot)
        ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de47c) {
            ctx->pc = 0x1DE4A0u;
            goto label_1de4a0;
        }
    }
    ctx->pc = 0x1DE484u;
label_1de484:
    // 0x1de484: 0x0  nop
    ctx->pc = 0x1de484u;
    // NOP
label_1de488:
    // 0x1de488: 0x9d3021  addu        $a2, $a0, $sp
    ctx->pc = 0x1de488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_1de48c:
    // 0x1de48c: 0x4601a042  mul.s       $f1, $f20, $f1
    ctx->pc = 0x1de48cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[20], ctx->f[1]);
label_1de490:
    // 0x1de490: 0xc4c001b0  lwc1        $f0, 0x1B0($a2)
    ctx->pc = 0x1de490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1de494:
    // 0x1de494: 0x46011842  mul.s       $f1, $f3, $f1
    ctx->pc = 0x1de494u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[1]);
label_1de498:
    // 0x1de498: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1de498u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1de49c:
    // 0x1de49c: 0x46002940  add.s       $f5, $f5, $f0
    ctx->pc = 0x1de49cu;
    ctx->f[5] = FPU_ADD_S(ctx->f[5], ctx->f[0]);
label_1de4a0:
    // 0x1de4a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1de4a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1de4a4:
    // 0x1de4a4: 0x28460008  slti        $a2, $v0, 0x8
    ctx->pc = 0x1de4a4u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8) ? 1 : 0);
label_1de4a8:
    // 0x1de4a8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x1de4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_1de4ac:
    // 0x1de4ac: 0x14c0ffe4  bnez        $a2, . + 4 + (-0x1C << 2)
label_1de4b0:
    if (ctx->pc == 0x1DE4B0u) {
        ctx->pc = 0x1DE4B0u;
            // 0x1de4b0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x1DE4B4u;
        goto label_1de4b4;
    }
    ctx->pc = 0x1DE4ACu;
    {
        const bool branch_taken_0x1de4ac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE4ACu;
            // 0x1de4b0: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de4ac) {
            ctx->pc = 0x1DE440u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1de440;
        }
    }
    ctx->pc = 0x1DE4B4u;
label_1de4b4:
    // 0x1de4b4: 0x4605a500  add.s       $f20, $f20, $f5
    ctx->pc = 0x1de4b4u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[5]);
label_1de4b8:
    // 0x1de4b8: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x1de4b8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1de4bc:
    // 0x1de4bc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1de4bcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de4c0:
    // 0x1de4c0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1de4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de4c4:
    // 0x1de4c4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1de4c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1de4c8:
    // 0x1de4c8: 0x2261021  addu        $v0, $s1, $a2
    ctx->pc = 0x1de4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_1de4cc:
    // 0x1de4cc: 0x84420090  lh          $v0, 0x90($v0)
    ctx->pc = 0x1de4ccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1de4d0:
    // 0x1de4d0: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x1de4d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1de4d4:
    // 0x1de4d4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_1de4d8:
    if (ctx->pc == 0x1DE4D8u) {
        ctx->pc = 0x1DE4D8u;
            // 0x1de4d8: 0x28410011  slti        $at, $v0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->pc = 0x1DE4DCu;
        goto label_1de4dc;
    }
    ctx->pc = 0x1DE4D4u;
    {
        const bool branch_taken_0x1de4d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE4D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE4D4u;
            // 0x1de4d8: 0x28410011  slti        $at, $v0, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de4d4) {
            ctx->pc = 0x1DE4ECu;
            goto label_1de4ec;
        }
    }
    ctx->pc = 0x1DE4DCu;
label_1de4dc:
    // 0x1de4dc: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_1de4e0:
    if (ctx->pc == 0x1DE4E0u) {
        ctx->pc = 0x1DE4E4u;
        goto label_1de4e4;
    }
    ctx->pc = 0x1DE4DCu;
    {
        const bool branch_taken_0x1de4dc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de4dc) {
            ctx->pc = 0x1DE4ECu;
            goto label_1de4ec;
        }
    }
    ctx->pc = 0x1DE4E4u;
label_1de4e4:
    // 0x1de4e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1de4e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1de4e8:
    // 0x1de4e8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x1de4e8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1de4ec:
    // 0x1de4ec: 0x0  nop
    ctx->pc = 0x1de4ecu;
    // NOP
label_1de4f0:
    // 0x1de4f0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1de4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1de4f4:
    // 0x1de4f4: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x1de4f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_1de4f8:
    // 0x1de4f8: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_1de4fc:
    if (ctx->pc == 0x1DE4FCu) {
        ctx->pc = 0x1DE4FCu;
            // 0x1de4fc: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->pc = 0x1DE500u;
        goto label_1de500;
    }
    ctx->pc = 0x1DE4F8u;
    {
        const bool branch_taken_0x1de4f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE4FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE4F8u;
            // 0x1de4fc: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de4f8) {
            ctx->pc = 0x1DE4C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1de4c8;
        }
    }
    ctx->pc = 0x1DE500u;
label_1de500:
    // 0x1de500: 0x80a30054  lb          $v1, 0x54($a1)
    ctx->pc = 0x1de500u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 84)));
label_1de504:
    // 0x1de504: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1de504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1de508:
    // 0x1de508: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_1de50c:
    if (ctx->pc == 0x1DE50Cu) {
        ctx->pc = 0x1DE50Cu;
            // 0x1de50c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DE510u;
        goto label_1de510;
    }
    ctx->pc = 0x1DE508u;
    {
        const bool branch_taken_0x1de508 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DE50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE508u;
            // 0x1de50c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de508) {
            ctx->pc = 0x1DE534u;
            goto label_1de534;
        }
    }
    ctx->pc = 0x1DE510u;
label_1de510:
    // 0x1de510: 0xc067c94  jal         func_19F250
label_1de514:
    if (ctx->pc == 0x1DE514u) {
        ctx->pc = 0x1DE518u;
        goto label_1de518;
    }
    ctx->pc = 0x1DE510u;
    SET_GPR_U32(ctx, 31, 0x1DE518u);
    ctx->pc = 0x19F250u;
    if (runtime->hasFunction(0x19F250u)) {
        auto targetFn = runtime->lookupFunction(0x19F250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE518u; }
        if (ctx->pc != 0x1DE518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowNPC__16CBattleCharaInfoFv_0x19f250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE518u; }
        if (ctx->pc != 0x1DE518u) { return; }
    }
    ctx->pc = 0x1DE518u;
label_1de518:
    // 0x1de518: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1de518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1de51c:
    // 0x1de51c: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_1de520:
    if (ctx->pc == 0x1DE520u) {
        ctx->pc = 0x1DE520u;
            // 0x1de520: 0x3c023f99  lui         $v0, 0x3F99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
        ctx->pc = 0x1DE524u;
        goto label_1de524;
    }
    ctx->pc = 0x1DE51Cu;
    {
        const bool branch_taken_0x1de51c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1DE520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE51Cu;
            // 0x1de520: 0x3c023f99  lui         $v0, 0x3F99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de51c) {
            ctx->pc = 0x1DE534u;
            goto label_1de534;
        }
    }
    ctx->pc = 0x1DE524u;
label_1de524:
    // 0x1de524: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1de524u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_1de528:
    // 0x1de528: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de528u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1de52c:
    // 0x1de52c: 0x0  nop
    ctx->pc = 0x1de52cu;
    // NOP
label_1de530:
    // 0x1de530: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1de530u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1de534:
    // 0x1de534: 0x0  nop
    ctx->pc = 0x1de534u;
    // NOP
label_1de538:
    // 0x1de538: 0x8e031150  lw          $v1, 0x1150($s0)
    ctx->pc = 0x1de538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4432)));
label_1de53c:
    // 0x1de53c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1de53cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1de540:
    // 0x1de540: 0x80630054  lb          $v1, 0x54($v1)
    ctx->pc = 0x1de540u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 84)));
label_1de544:
    // 0x1de544: 0x1462000a  bne         $v1, $v0, . + 4 + (0xA << 2)
label_1de548:
    if (ctx->pc == 0x1DE548u) {
        ctx->pc = 0x1DE548u;
            // 0x1de548: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DE54Cu;
        goto label_1de54c;
    }
    ctx->pc = 0x1DE544u;
    {
        const bool branch_taken_0x1de544 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DE548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE544u;
            // 0x1de548: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de544) {
            ctx->pc = 0x1DE570u;
            goto label_1de570;
        }
    }
    ctx->pc = 0x1DE54Cu;
label_1de54c:
    // 0x1de54c: 0xc067c94  jal         func_19F250
label_1de550:
    if (ctx->pc == 0x1DE550u) {
        ctx->pc = 0x1DE554u;
        goto label_1de554;
    }
    ctx->pc = 0x1DE54Cu;
    SET_GPR_U32(ctx, 31, 0x1DE554u);
    ctx->pc = 0x19F250u;
    if (runtime->hasFunction(0x19F250u)) {
        auto targetFn = runtime->lookupFunction(0x19F250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE554u; }
        if (ctx->pc != 0x1DE554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowNPC__16CBattleCharaInfoFv_0x19f250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE554u; }
        if (ctx->pc != 0x1DE554u) { return; }
    }
    ctx->pc = 0x1DE554u;
label_1de554:
    // 0x1de554: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x1de554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_1de558:
    // 0x1de558: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_1de55c:
    if (ctx->pc == 0x1DE55Cu) {
        ctx->pc = 0x1DE55Cu;
            // 0x1de55c: 0x3c023f99  lui         $v0, 0x3F99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
        ctx->pc = 0x1DE560u;
        goto label_1de560;
    }
    ctx->pc = 0x1DE558u;
    {
        const bool branch_taken_0x1de558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1DE55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE558u;
            // 0x1de55c: 0x3c023f99  lui         $v0, 0x3F99 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16281 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de558) {
            ctx->pc = 0x1DE570u;
            goto label_1de570;
        }
    }
    ctx->pc = 0x1DE560u;
label_1de560:
    // 0x1de560: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x1de560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_1de564:
    // 0x1de564: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1de568:
    // 0x1de568: 0x0  nop
    ctx->pc = 0x1de568u;
    // NOP
label_1de56c:
    // 0x1de56c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1de56cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1de570:
    // 0x1de570: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1de570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1de574:
    // 0x1de574: 0x84420046  lh          $v0, 0x46($v0)
    ctx->pc = 0x1de574u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 70)));
label_1de578:
    // 0x1de578: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1de578u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1de57c:
    // 0x1de57c: 0x14200005  bnez        $at, . + 4 + (0x5 << 2)
label_1de580:
    if (ctx->pc == 0x1DE580u) {
        ctx->pc = 0x1DE584u;
        goto label_1de584;
    }
    ctx->pc = 0x1DE57Cu;
    {
        const bool branch_taken_0x1de57c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de57c) {
            ctx->pc = 0x1DE594u;
            goto label_1de594;
        }
    }
    ctx->pc = 0x1DE584u;
label_1de584:
    // 0x1de584: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de584u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1de588:
    // 0x1de588: 0x0  nop
    ctx->pc = 0x1de588u;
    // NOP
label_1de58c:
    // 0x1de58c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1de58cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1de590:
    // 0x1de590: 0x4600a503  div.s       $f20, $f20, $f0
    ctx->pc = 0x1de590u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
label_1de594:
    // 0x1de594: 0x0  nop
    ctx->pc = 0x1de594u;
    // NOP
label_1de598:
    // 0x1de598: 0x26240040  addiu       $a0, $s1, 0x40
    ctx->pc = 0x1de598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
label_1de59c:
    // 0x1de59c: 0xc04c018  jal         func_130060
label_1de5a0:
    if (ctx->pc == 0x1DE5A0u) {
        ctx->pc = 0x1DE5A0u;
            // 0x1de5a0: 0x262500b0  addiu       $a1, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->pc = 0x1DE5A4u;
        goto label_1de5a4;
    }
    ctx->pc = 0x1DE59Cu;
    SET_GPR_U32(ctx, 31, 0x1DE5A4u);
    ctx->pc = 0x1DE5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE59Cu;
            // 0x1de5a0: 0x262500b0  addiu       $a1, $s1, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x130060u;
    if (runtime->hasFunction(0x130060u)) {
        auto targetFn = runtime->lookupFunction(0x130060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE5A4u; }
        if (ctx->pc != 0x1DE5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDistVector__FPfPf_0x130060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE5A4u; }
        if (ctx->pc != 0x1DE5A4u) { return; }
    }
    ctx->pc = 0x1DE5A4u;
label_1de5a4:
    // 0x1de5a4: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x1de5a4u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
label_1de5a8:
    // 0x1de5a8: 0xc0a24f0  jal         func_2893C0
label_1de5ac:
    if (ctx->pc == 0x1DE5ACu) {
        ctx->pc = 0x1DE5ACu;
            // 0x1de5ac: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x1DE5B0u;
        goto label_1de5b0;
    }
    ctx->pc = 0x1DE5A8u;
    SET_GPR_U32(ctx, 31, 0x1DE5B0u);
    ctx->pc = 0x1DE5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE5A8u;
            // 0x1de5ac: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE5B0u; }
        if (ctx->pc != 0x1DE5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE5B0u; }
        if (ctx->pc != 0x1DE5B0u) { return; }
    }
    ctx->pc = 0x1DE5B0u;
label_1de5b0:
    // 0x1de5b0: 0xc62c00a4  lwc1        $f12, 0xA4($s1)
    ctx->pc = 0x1de5b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1de5b4:
    // 0x1de5b4: 0xc0a24f0  jal         func_2893C0
label_1de5b8:
    if (ctx->pc == 0x1DE5B8u) {
        ctx->pc = 0x1DE5B8u;
            // 0x1de5b8: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DE5BCu;
        goto label_1de5bc;
    }
    ctx->pc = 0x1DE5B4u;
    SET_GPR_U32(ctx, 31, 0x1DE5BCu);
    ctx->pc = 0x1DE5B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE5B4u;
            // 0x1de5b8: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE5BCu; }
        if (ctx->pc != 0x1DE5BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE5BCu; }
        if (ctx->pc != 0x1DE5BCu) { return; }
    }
    ctx->pc = 0x1DE5BCu;
label_1de5bc:
    // 0x1de5bc: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1de5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_1de5c0:
    // 0x1de5c0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1de5c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1de5c4:
    // 0x1de5c4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1de5c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1de5c8:
    // 0x1de5c8: 0xc04a0d2  jal         func_128348
label_1de5cc:
    if (ctx->pc == 0x1DE5CCu) {
        ctx->pc = 0x1DE5CCu;
            // 0x1de5cc: 0x24847f98  addiu       $a0, $a0, 0x7F98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32664));
        ctx->pc = 0x1DE5D0u;
        goto label_1de5d0;
    }
    ctx->pc = 0x1DE5C8u;
    SET_GPR_U32(ctx, 31, 0x1DE5D0u);
    ctx->pc = 0x1DE5CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE5C8u;
            // 0x1de5cc: 0x24847f98  addiu       $a0, $a0, 0x7F98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32664));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE5D0u; }
        if (ctx->pc != 0x1DE5D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE5D0u; }
        if (ctx->pc != 0x1DE5D0u) { return; }
    }
    ctx->pc = 0x1DE5D0u;
label_1de5d0:
    // 0x1de5d0: 0xc62000a4  lwc1        $f0, 0xA4($s1)
    ctx->pc = 0x1de5d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1de5d4:
    // 0x1de5d4: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1de5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1de5d8:
    // 0x1de5d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1de5d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1de5dc:
    // 0x1de5dc: 0x0  nop
    ctx->pc = 0x1de5dcu;
    // NOP
label_1de5e0:
    // 0x1de5e0: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x1de5e0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_1de5e4:
    // 0x1de5e4: 0x0  nop
    ctx->pc = 0x1de5e4u;
    // NOP
label_1de5e8:
    // 0x1de5e8: 0x0  nop
    ctx->pc = 0x1de5e8u;
    // NOP
label_1de5ec:
    // 0x1de5ec: 0x4601a836  c.le.s      $f21, $f1
    ctx->pc = 0x1de5ecu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1de5f0:
    // 0x1de5f0: 0x0  nop
    ctx->pc = 0x1de5f0u;
    // NOP
label_1de5f4:
    // 0x1de5f4: 0x45010014  bc1t        . + 4 + (0x14 << 2)
label_1de5f8:
    if (ctx->pc == 0x1DE5F8u) {
        ctx->pc = 0x1DE5FCu;
        goto label_1de5fc;
    }
    ctx->pc = 0x1DE5F4u;
    {
        const bool branch_taken_0x1de5f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de5f4) {
            ctx->pc = 0x1DE648u;
            goto label_1de648;
        }
    }
    ctx->pc = 0x1DE5FCu;
label_1de5fc:
    // 0x1de5fc: 0x4600a836  c.le.s      $f21, $f0
    ctx->pc = 0x1de5fcu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[21], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1de600:
    // 0x1de600: 0x0  nop
    ctx->pc = 0x1de600u;
    // NOP
label_1de604:
    // 0x1de604: 0x45010004  bc1t        . + 4 + (0x4 << 2)
label_1de608:
    if (ctx->pc == 0x1DE608u) {
        ctx->pc = 0x1DE60Cu;
        goto label_1de60c;
    }
    ctx->pc = 0x1DE604u;
    {
        const bool branch_taken_0x1de604 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1de604) {
            ctx->pc = 0x1DE618u;
            goto label_1de618;
        }
    }
    ctx->pc = 0x1DE60Cu;
label_1de60c:
    // 0x1de60c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1de60cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1de610:
    // 0x1de610: 0x10000007  b           . + 4 + (0x7 << 2)
label_1de614:
    if (ctx->pc == 0x1DE614u) {
        ctx->pc = 0x1DE618u;
        goto label_1de618;
    }
    ctx->pc = 0x1DE610u;
    {
        const bool branch_taken_0x1de610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de610) {
            ctx->pc = 0x1DE630u;
            goto label_1de630;
        }
    }
    ctx->pc = 0x1DE618u;
label_1de618:
    // 0x1de618: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1de618u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1de61c:
    // 0x1de61c: 0x4601ad41  sub.s       $f21, $f21, $f1
    ctx->pc = 0x1de61cu;
    ctx->f[21] = FPU_SUB_S(ctx->f[21], ctx->f[1]);
label_1de620:
    // 0x1de620: 0x4601a843  div.s       $f1, $f21, $f1
    ctx->pc = 0x1de620u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[21], ctx->f[1]); }
label_1de624:
    // 0x1de624: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1de628:
    // 0x1de628: 0x0  nop
    ctx->pc = 0x1de628u;
    // NOP
label_1de62c:
    // 0x1de62c: 0x46010301  sub.s       $f12, $f0, $f1
    ctx->pc = 0x1de62cu;
    ctx->f[12] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1de630:
    // 0x1de630: 0xc0a24f0  jal         func_2893C0
label_1de634:
    if (ctx->pc == 0x1DE634u) {
        ctx->pc = 0x1DE634u;
            // 0x1de634: 0x460ca502  mul.s       $f20, $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
        ctx->pc = 0x1DE638u;
        goto label_1de638;
    }
    ctx->pc = 0x1DE630u;
    SET_GPR_U32(ctx, 31, 0x1DE638u);
    ctx->pc = 0x1DE634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE630u;
            // 0x1de634: 0x460ca502  mul.s       $f20, $f20, $f12 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE638u; }
        if (ctx->pc != 0x1DE638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE638u; }
        if (ctx->pc != 0x1DE638u) { return; }
    }
    ctx->pc = 0x1DE638u;
label_1de638:
    // 0x1de638: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1de638u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_1de63c:
    // 0x1de63c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1de63cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1de640:
    // 0x1de640: 0xc04a0d2  jal         func_128348
label_1de644:
    if (ctx->pc == 0x1DE644u) {
        ctx->pc = 0x1DE644u;
            // 0x1de644: 0x24847fa8  addiu       $a0, $a0, 0x7FA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32680));
        ctx->pc = 0x1DE648u;
        goto label_1de648;
    }
    ctx->pc = 0x1DE640u;
    SET_GPR_U32(ctx, 31, 0x1DE648u);
    ctx->pc = 0x1DE644u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE640u;
            // 0x1de644: 0x24847fa8  addiu       $a0, $a0, 0x7FA8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE648u; }
        if (ctx->pc != 0x1DE648u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE648u; }
        if (ctx->pc != 0x1DE648u) { return; }
    }
    ctx->pc = 0x1DE648u;
label_1de648:
    // 0x1de648: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1de648u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1de64c:
    // 0x1de64c: 0x0  nop
    ctx->pc = 0x1de64cu;
    // NOP
label_1de650:
    // 0x1de650: 0x4600a034  c.lt.s      $f20, $f0
    ctx->pc = 0x1de650u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1de654:
    // 0x1de654: 0x0  nop
    ctx->pc = 0x1de654u;
    // NOP
label_1de658:
    // 0x1de658: 0x45010006  bc1t        . + 4 + (0x6 << 2)
label_1de65c:
    if (ctx->pc == 0x1DE65Cu) {
        ctx->pc = 0x1DE65Cu;
            // 0x1de65c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x1DE660u;
        goto label_1de660;
    }
    ctx->pc = 0x1DE658u;
    {
        const bool branch_taken_0x1de658 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DE65Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE658u;
            // 0x1de65c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de658) {
            ctx->pc = 0x1DE674u;
            goto label_1de674;
        }
    }
    ctx->pc = 0x1DE660u;
label_1de660:
    // 0x1de660: 0xc0945c8  jal         func_251720
label_1de664:
    if (ctx->pc == 0x1DE664u) {
        ctx->pc = 0x1DE668u;
        goto label_1de668;
    }
    ctx->pc = 0x1DE660u;
    SET_GPR_U32(ctx, 31, 0x1DE668u);
    ctx->pc = 0x251720u;
    if (runtime->hasFunction(0x251720u)) {
        auto targetFn = runtime->lookupFunction(0x251720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE668u; }
        if (ctx->pc != 0x1DE668u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDispVolumeForFloat__Ff_0x251720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE668u; }
        if (ctx->pc != 0x1DE668u) { return; }
    }
    ctx->pc = 0x1DE668u;
label_1de668:
    // 0x1de668: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de668u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1de66c:
    // 0x1de66c: 0x0  nop
    ctx->pc = 0x1de66cu;
    // NOP
label_1de670:
    // 0x1de670: 0x46800520  cvt.s.w     $f20, $f0
    ctx->pc = 0x1de670u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_1de674:
    // 0x1de674: 0x0  nop
    ctx->pc = 0x1de674u;
    // NOP
label_1de678:
    // 0x1de678: 0xc0a248c  jal         func_289230
label_1de67c:
    if (ctx->pc == 0x1DE67Cu) {
        ctx->pc = 0x1DE67Cu;
            // 0x1de67c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x1DE680u;
        goto label_1de680;
    }
    ctx->pc = 0x1DE678u;
    SET_GPR_U32(ctx, 31, 0x1DE680u);
    ctx->pc = 0x1DE67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE678u;
            // 0x1de67c: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE680u; }
        if (ctx->pc != 0x1DE680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE680u; }
        if (ctx->pc != 0x1DE680u) { return; }
    }
    ctx->pc = 0x1DE680u;
label_1de680:
    // 0x1de680: 0x1c400005  bgtz        $v0, . + 4 + (0x5 << 2)
label_1de684:
    if (ctx->pc == 0x1DE684u) {
        ctx->pc = 0x1DE688u;
        goto label_1de688;
    }
    ctx->pc = 0x1DE680u;
    {
        const bool branch_taken_0x1de680 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1de680) {
            ctx->pc = 0x1DE698u;
            goto label_1de698;
        }
    }
    ctx->pc = 0x1DE688u;
label_1de688:
    // 0x1de688: 0x86021356  lh          $v0, 0x1356($s0)
    ctx->pc = 0x1de688u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4950)));
label_1de68c:
    // 0x1de68c: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1de68cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1de690:
    // 0x1de690: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1de690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1de694:
    // 0x1de694: 0xa6021356  sh          $v0, 0x1356($s0)
    ctx->pc = 0x1de694u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4950), (uint16_t)GPR_U32(ctx, 2));
label_1de698:
    // 0x1de698: 0x8e020768  lw          $v0, 0x768($s0)
    ctx->pc = 0x1de698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1896)));
label_1de69c:
    // 0x1de69c: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
label_1de6a0:
    if (ctx->pc == 0x1DE6A0u) {
        ctx->pc = 0x1DE6A4u;
        goto label_1de6a4;
    }
    ctx->pc = 0x1DE69Cu;
    {
        const bool branch_taken_0x1de69c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1de69c) {
            ctx->pc = 0x1DE6A8u;
            goto label_1de6a8;
        }
    }
    ctx->pc = 0x1DE6A4u;
label_1de6a4:
    // 0x1de6a4: 0x4480a000  mtc1        $zero, $f20
    ctx->pc = 0x1de6a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1de6a8:
    // 0x1de6a8: 0x8e02133c  lw          $v0, 0x133C($s0)
    ctx->pc = 0x1de6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
label_1de6ac:
    // 0x1de6ac: 0x30420028  andi        $v0, $v0, 0x28
    ctx->pc = 0x1de6acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)40);
label_1de6b0:
    // 0x1de6b0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1de6b4:
    if (ctx->pc == 0x1DE6B4u) {
        ctx->pc = 0x1DE6B8u;
        goto label_1de6b8;
    }
    ctx->pc = 0x1DE6B0u;
    {
        const bool branch_taken_0x1de6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de6b0) {
            ctx->pc = 0x1DE6E4u;
            goto label_1de6e4;
        }
    }
    ctx->pc = 0x1DE6B8u;
label_1de6b8:
    // 0x1de6b8: 0x86021342  lh          $v0, 0x1342($s0)
    ctx->pc = 0x1de6b8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4930)));
label_1de6bc:
    // 0x1de6bc: 0x2442ffa6  addiu       $v0, $v0, -0x5A
    ctx->pc = 0x1de6bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967206));
label_1de6c0:
    // 0x1de6c0: 0xa6021342  sh          $v0, 0x1342($s0)
    ctx->pc = 0x1de6c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4930), (uint16_t)GPR_U32(ctx, 2));
label_1de6c4:
    // 0x1de6c4: 0x86021342  lh          $v0, 0x1342($s0)
    ctx->pc = 0x1de6c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4930)));
label_1de6c8:
    // 0x1de6c8: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
label_1de6cc:
    if (ctx->pc == 0x1DE6CCu) {
        ctx->pc = 0x1DE6D0u;
        goto label_1de6d0;
    }
    ctx->pc = 0x1DE6C8u;
    {
        const bool branch_taken_0x1de6c8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1de6c8) {
            ctx->pc = 0x1DE6E4u;
            goto label_1de6e4;
        }
    }
    ctx->pc = 0x1DE6D0u;
label_1de6d0:
    // 0x1de6d0: 0xa6001342  sh          $zero, 0x1342($s0)
    ctx->pc = 0x1de6d0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4930), (uint16_t)GPR_U32(ctx, 0));
label_1de6d4:
    // 0x1de6d4: 0x2402ffd7  addiu       $v0, $zero, -0x29
    ctx->pc = 0x1de6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967255));
label_1de6d8:
    // 0x1de6d8: 0x8e03133c  lw          $v1, 0x133C($s0)
    ctx->pc = 0x1de6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
label_1de6dc:
    // 0x1de6dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1de6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1de6e0:
    // 0x1de6e0: 0xae02133c  sw          $v0, 0x133C($s0)
    ctx->pc = 0x1de6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4924), GPR_U32(ctx, 2));
label_1de6e4:
    // 0x1de6e4: 0x0  nop
    ctx->pc = 0x1de6e4u;
    // NOP
label_1de6e8:
    // 0x1de6e8: 0xafa00130  sw          $zero, 0x130($sp)
    ctx->pc = 0x1de6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 0));
label_1de6ec:
    // 0x1de6ec: 0x8e021150  lw          $v0, 0x1150($s0)
    ctx->pc = 0x1de6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4432)));
label_1de6f0:
    // 0x1de6f0: 0xafa20170  sw          $v0, 0x170($sp)
    ctx->pc = 0x1de6f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 2));
label_1de6f4:
    // 0x1de6f4: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1de6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_1de6f8:
    // 0x1de6f8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1de6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1de6fc:
    // 0x1de6fc: 0x844600ac  lh          $a2, 0xAC($v0)
    ctx->pc = 0x1de6fcu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 172)));
label_1de700:
    // 0x1de700: 0x84620046  lh          $v0, 0x46($v1)
    ctx->pc = 0x1de700u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 70)));
label_1de704:
    // 0x1de704: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1de708:
    if (ctx->pc == 0x1DE708u) {
        ctx->pc = 0x1DE708u;
            // 0x1de708: 0xc2001a  div         $zero, $a2, $v0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->pc = 0x1DE70Cu;
        goto label_1de70c;
    }
    ctx->pc = 0x1DE704u;
    {
        const bool branch_taken_0x1de704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE708u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE704u;
            // 0x1de708: 0xc2001a  div         $zero, $a2, $v0 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 6);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de704) {
            ctx->pc = 0x1DE710u;
            goto label_1de710;
        }
    }
    ctx->pc = 0x1DE70Cu;
label_1de70c:
    // 0x1de70c: 0x1cd  break       0, 7
    ctx->pc = 0x1de70cu;
    runtime->handleBreak(rdram, ctx);
label_1de710:
    // 0x1de710: 0x1012  mflo        $v0
    ctx->pc = 0x1de710u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_1de714:
    // 0x1de714: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1de714u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1de718:
    // 0x1de718: 0x2b43c  dsll32      $s6, $v0, 16
    ctx->pc = 0x1de718u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 2) << (32 + 16));
label_1de71c:
    // 0x1de71c: 0xc0a248c  jal         func_289230
label_1de720:
    if (ctx->pc == 0x1DE720u) {
        ctx->pc = 0x1DE720u;
            // 0x1de720: 0x16b43f  dsra32      $s6, $s6, 16 (Delay Slot)
        SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 16));
        ctx->pc = 0x1DE724u;
        goto label_1de724;
    }
    ctx->pc = 0x1DE71Cu;
    SET_GPR_U32(ctx, 31, 0x1DE724u);
    ctx->pc = 0x1DE720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE71Cu;
            // 0x1de720: 0x16b43f  dsra32      $s6, $s6, 16 (Delay Slot)
        SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE724u; }
        if (ctx->pc != 0x1DE724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE724u; }
        if (ctx->pc != 0x1DE724u) { return; }
    }
    ctx->pc = 0x1DE724u;
label_1de724:
    // 0x1de724: 0x18400068  blez        $v0, . + 4 + (0x68 << 2)
label_1de728:
    if (ctx->pc == 0x1DE728u) {
        ctx->pc = 0x1DE728u;
            // 0x1de728: 0xafa20188  sw          $v0, 0x188($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
        ctx->pc = 0x1DE72Cu;
        goto label_1de72c;
    }
    ctx->pc = 0x1DE724u;
    {
        const bool branch_taken_0x1de724 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1DE728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE724u;
            // 0x1de728: 0xafa20188  sw          $v0, 0x188($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de724) {
            ctx->pc = 0x1DE8C8u;
            goto label_1de8c8;
        }
    }
    ctx->pc = 0x1DE72Cu;
label_1de72c:
    // 0x1de72c: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x1de72cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_1de730:
    // 0x1de730: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1de730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_1de734:
    // 0x1de734: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_1de738:
    if (ctx->pc == 0x1DE738u) {
        ctx->pc = 0x1DE73Cu;
        goto label_1de73c;
    }
    ctx->pc = 0x1DE734u;
    {
        const bool branch_taken_0x1de734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de734) {
            ctx->pc = 0x1DE784u;
            goto label_1de784;
        }
    }
    ctx->pc = 0x1DE73Cu;
label_1de73c:
    // 0x1de73c: 0x8fa20170  lw          $v0, 0x170($sp)
    ctx->pc = 0x1de73cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 368)));
label_1de740:
    // 0x1de740: 0x8c4200a8  lw          $v0, 0xA8($v0)
    ctx->pc = 0x1de740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
label_1de744:
    // 0x1de744: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x1de744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_1de748:
    // 0x1de748: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1de74c:
    if (ctx->pc == 0x1DE74Cu) {
        ctx->pc = 0x1DE74Cu;
            // 0x1de74c: 0x16143c  dsll32      $v0, $s6, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 16));
        ctx->pc = 0x1DE750u;
        goto label_1de750;
    }
    ctx->pc = 0x1DE748u;
    {
        const bool branch_taken_0x1de748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE74Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE748u;
            // 0x1de74c: 0x16143c  dsll32      $v0, $s6, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de748) {
            ctx->pc = 0x1DE784u;
            goto label_1de784;
        }
    }
    ctx->pc = 0x1DE750u;
label_1de750:
    // 0x1de750: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1de750u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1de754:
    // 0x1de754: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1de754u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1de758:
    // 0x1de758: 0xc0724a4  jal         func_1C9290
label_1de75c:
    if (ctx->pc == 0x1DE75Cu) {
        ctx->pc = 0x1DE75Cu;
            // 0x1de75c: 0x7fa20100  sq          $v0, 0x100($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
        ctx->pc = 0x1DE760u;
        goto label_1de760;
    }
    ctx->pc = 0x1DE758u;
    SET_GPR_U32(ctx, 31, 0x1DE760u);
    ctx->pc = 0x1DE75Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE758u;
            // 0x1de75c: 0x7fa20100  sq          $v0, 0x100($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE760u; }
        if (ctx->pc != 0x1DE760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE760u; }
        if (ctx->pc != 0x1DE760u) { return; }
    }
    ctx->pc = 0x1DE760u;
label_1de760:
    // 0x1de760: 0x7ba30100  lq          $v1, 0x100($sp)
    ctx->pc = 0x1de760u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_1de764:
    // 0x1de764: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1de764u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1de768:
    // 0x1de768: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1de76c:
    if (ctx->pc == 0x1DE76Cu) {
        ctx->pc = 0x1DE770u;
        goto label_1de770;
    }
    ctx->pc = 0x1DE768u;
    {
        const bool branch_taken_0x1de768 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de768) {
            ctx->pc = 0x1DE784u;
            goto label_1de784;
        }
    }
    ctx->pc = 0x1DE770u;
label_1de770:
    // 0x1de770: 0x8e03133c  lw          $v1, 0x133C($s0)
    ctx->pc = 0x1de770u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
label_1de774:
    // 0x1de774: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x1de774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1de778:
    // 0x1de778: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x1de778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_1de77c:
    // 0x1de77c: 0xae03133c  sw          $v1, 0x133C($s0)
    ctx->pc = 0x1de77cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4924), GPR_U32(ctx, 3));
label_1de780:
    // 0x1de780: 0xa6021340  sh          $v0, 0x1340($s0)
    ctx->pc = 0x1de780u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4928), (uint16_t)GPR_U32(ctx, 2));
label_1de784:
    // 0x1de784: 0x0  nop
    ctx->pc = 0x1de784u;
    // NOP
label_1de788:
    // 0x1de788: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x1de788u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_1de78c:
    // 0x1de78c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1de78cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_1de790:
    // 0x1de790: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1de794:
    if (ctx->pc == 0x1DE794u) {
        ctx->pc = 0x1DE798u;
        goto label_1de798;
    }
    ctx->pc = 0x1DE790u;
    {
        const bool branch_taken_0x1de790 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de790) {
            ctx->pc = 0x1DE7F8u;
            goto label_1de7f8;
        }
    }
    ctx->pc = 0x1DE798u;
label_1de798:
    // 0x1de798: 0x8e02133c  lw          $v0, 0x133C($s0)
    ctx->pc = 0x1de798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
label_1de79c:
    // 0x1de79c: 0x30420028  andi        $v0, $v0, 0x28
    ctx->pc = 0x1de79cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)40);
label_1de7a0:
    // 0x1de7a0: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_1de7a4:
    if (ctx->pc == 0x1DE7A4u) {
        ctx->pc = 0x1DE7A8u;
        goto label_1de7a8;
    }
    ctx->pc = 0x1DE7A0u;
    {
        const bool branch_taken_0x1de7a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de7a0) {
            ctx->pc = 0x1DE7F8u;
            goto label_1de7f8;
        }
    }
    ctx->pc = 0x1DE7A8u;
label_1de7a8:
    // 0x1de7a8: 0x8e021150  lw          $v0, 0x1150($s0)
    ctx->pc = 0x1de7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4432)));
label_1de7ac:
    // 0x1de7ac: 0x8c4200a8  lw          $v0, 0xA8($v0)
    ctx->pc = 0x1de7acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
label_1de7b0:
    // 0x1de7b0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1de7b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_1de7b4:
    // 0x1de7b4: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_1de7b8:
    if (ctx->pc == 0x1DE7B8u) {
        ctx->pc = 0x1DE7B8u;
            // 0x1de7b8: 0x16143c  dsll32      $v0, $s6, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 16));
        ctx->pc = 0x1DE7BCu;
        goto label_1de7bc;
    }
    ctx->pc = 0x1DE7B4u;
    {
        const bool branch_taken_0x1de7b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE7B4u;
            // 0x1de7b8: 0x16143c  dsll32      $v0, $s6, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de7b4) {
            ctx->pc = 0x1DE7F8u;
            goto label_1de7f8;
        }
    }
    ctx->pc = 0x1DE7BCu;
label_1de7bc:
    // 0x1de7bc: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1de7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1de7c0:
    // 0x1de7c0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1de7c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1de7c4:
    // 0x1de7c4: 0xc0724a4  jal         func_1C9290
label_1de7c8:
    if (ctx->pc == 0x1DE7C8u) {
        ctx->pc = 0x1DE7C8u;
            // 0x1de7c8: 0x7fa200f0  sq          $v0, 0xF0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
        ctx->pc = 0x1DE7CCu;
        goto label_1de7cc;
    }
    ctx->pc = 0x1DE7C4u;
    SET_GPR_U32(ctx, 31, 0x1DE7CCu);
    ctx->pc = 0x1DE7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE7C4u;
            // 0x1de7c8: 0x7fa200f0  sq          $v0, 0xF0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE7CCu; }
        if (ctx->pc != 0x1DE7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE7CCu; }
        if (ctx->pc != 0x1DE7CCu) { return; }
    }
    ctx->pc = 0x1DE7CCu;
label_1de7cc:
    // 0x1de7cc: 0x7ba300f0  lq          $v1, 0xF0($sp)
    ctx->pc = 0x1de7ccu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_1de7d0:
    // 0x1de7d0: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1de7d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1de7d4:
    // 0x1de7d4: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1de7d8:
    if (ctx->pc == 0x1DE7D8u) {
        ctx->pc = 0x1DE7DCu;
        goto label_1de7dc;
    }
    ctx->pc = 0x1DE7D4u;
    {
        const bool branch_taken_0x1de7d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de7d4) {
            ctx->pc = 0x1DE7F8u;
            goto label_1de7f8;
        }
    }
    ctx->pc = 0x1DE7DCu;
label_1de7dc:
    // 0x1de7dc: 0x8e06133c  lw          $a2, 0x133C($s0)
    ctx->pc = 0x1de7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
label_1de7e0:
    // 0x1de7e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1de7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de7e4:
    // 0x1de7e4: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x1de7e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_1de7e8:
    // 0x1de7e8: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x1de7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
label_1de7ec:
    // 0x1de7ec: 0x34c20008  ori         $v0, $a2, 0x8
    ctx->pc = 0x1de7ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8);
label_1de7f0:
    // 0x1de7f0: 0xae02133c  sw          $v0, 0x133C($s0)
    ctx->pc = 0x1de7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4924), GPR_U32(ctx, 2));
label_1de7f4:
    // 0x1de7f4: 0xa6031342  sh          $v1, 0x1342($s0)
    ctx->pc = 0x1de7f4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4930), (uint16_t)GPR_U32(ctx, 3));
label_1de7f8:
    // 0x1de7f8: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x1de7f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_1de7fc:
    // 0x1de7fc: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x1de7fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_1de800:
    // 0x1de800: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1de800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1de804:
    // 0x1de804: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1de808:
    if (ctx->pc == 0x1DE808u) {
        ctx->pc = 0x1DE80Cu;
        goto label_1de80c;
    }
    ctx->pc = 0x1DE804u;
    {
        const bool branch_taken_0x1de804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de804) {
            ctx->pc = 0x1DE86Cu;
            goto label_1de86c;
        }
    }
    ctx->pc = 0x1DE80Cu;
label_1de80c:
    // 0x1de80c: 0x8e02133c  lw          $v0, 0x133C($s0)
    ctx->pc = 0x1de80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
label_1de810:
    // 0x1de810: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1de810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_1de814:
    // 0x1de814: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_1de818:
    if (ctx->pc == 0x1DE818u) {
        ctx->pc = 0x1DE81Cu;
        goto label_1de81c;
    }
    ctx->pc = 0x1DE814u;
    {
        const bool branch_taken_0x1de814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de814) {
            ctx->pc = 0x1DE86Cu;
            goto label_1de86c;
        }
    }
    ctx->pc = 0x1DE81Cu;
label_1de81c:
    // 0x1de81c: 0x8e021150  lw          $v0, 0x1150($s0)
    ctx->pc = 0x1de81cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4432)));
label_1de820:
    // 0x1de820: 0x8c4200a8  lw          $v0, 0xA8($v0)
    ctx->pc = 0x1de820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
label_1de824:
    // 0x1de824: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x1de824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_1de828:
    // 0x1de828: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_1de82c:
    if (ctx->pc == 0x1DE82Cu) {
        ctx->pc = 0x1DE82Cu;
            // 0x1de82c: 0x16143c  dsll32      $v0, $s6, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 16));
        ctx->pc = 0x1DE830u;
        goto label_1de830;
    }
    ctx->pc = 0x1DE828u;
    {
        const bool branch_taken_0x1de828 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE82Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE828u;
            // 0x1de82c: 0x16143c  dsll32      $v0, $s6, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de828) {
            ctx->pc = 0x1DE86Cu;
            goto label_1de86c;
        }
    }
    ctx->pc = 0x1DE830u;
label_1de830:
    // 0x1de830: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1de830u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1de834:
    // 0x1de834: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1de834u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_1de838:
    // 0x1de838: 0xc0724a4  jal         func_1C9290
label_1de83c:
    if (ctx->pc == 0x1DE83Cu) {
        ctx->pc = 0x1DE83Cu;
            // 0x1de83c: 0x7fa200e0  sq          $v0, 0xE0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
        ctx->pc = 0x1DE840u;
        goto label_1de840;
    }
    ctx->pc = 0x1DE838u;
    SET_GPR_U32(ctx, 31, 0x1DE840u);
    ctx->pc = 0x1DE83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE838u;
            // 0x1de83c: 0x7fa200e0  sq          $v0, 0xE0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE840u; }
        if (ctx->pc != 0x1DE840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE840u; }
        if (ctx->pc != 0x1DE840u) { return; }
    }
    ctx->pc = 0x1DE840u;
label_1de840:
    // 0x1de840: 0x7ba300e0  lq          $v1, 0xE0($sp)
    ctx->pc = 0x1de840u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_1de844:
    // 0x1de844: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x1de844u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1de848:
    // 0x1de848: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1de84c:
    if (ctx->pc == 0x1DE84Cu) {
        ctx->pc = 0x1DE850u;
        goto label_1de850;
    }
    ctx->pc = 0x1DE848u;
    {
        const bool branch_taken_0x1de848 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de848) {
            ctx->pc = 0x1DE86Cu;
            goto label_1de86c;
        }
    }
    ctx->pc = 0x1DE850u;
label_1de850:
    // 0x1de850: 0x8e06133c  lw          $a2, 0x133C($s0)
    ctx->pc = 0x1de850u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
label_1de854:
    // 0x1de854: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1de854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de858:
    // 0x1de858: 0x24030384  addiu       $v1, $zero, 0x384
    ctx->pc = 0x1de858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_1de85c:
    // 0x1de85c: 0xafa20130  sw          $v0, 0x130($sp)
    ctx->pc = 0x1de85cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 304), GPR_U32(ctx, 2));
label_1de860:
    // 0x1de860: 0x34c20020  ori         $v0, $a2, 0x20
    ctx->pc = 0x1de860u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32);
label_1de864:
    // 0x1de864: 0xae02133c  sw          $v0, 0x133C($s0)
    ctx->pc = 0x1de864u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4924), GPR_U32(ctx, 2));
label_1de868:
    // 0x1de868: 0xa6031342  sh          $v1, 0x1342($s0)
    ctx->pc = 0x1de868u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4930), (uint16_t)GPR_U32(ctx, 3));
label_1de86c:
    // 0x1de86c: 0x0  nop
    ctx->pc = 0x1de86cu;
    // NOP
label_1de870:
    // 0x1de870: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x1de870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_1de874:
    // 0x1de874: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1de874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_1de878:
    // 0x1de878: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1de878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1de87c:
    // 0x1de87c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1de880:
    if (ctx->pc == 0x1DE880u) {
        ctx->pc = 0x1DE884u;
        goto label_1de884;
    }
    ctx->pc = 0x1DE87Cu;
    {
        const bool branch_taken_0x1de87c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de87c) {
            ctx->pc = 0x1DE8C8u;
            goto label_1de8c8;
        }
    }
    ctx->pc = 0x1DE884u;
label_1de884:
    // 0x1de884: 0x8e021150  lw          $v0, 0x1150($s0)
    ctx->pc = 0x1de884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4432)));
label_1de888:
    // 0x1de888: 0x8c4200a8  lw          $v0, 0xA8($v0)
    ctx->pc = 0x1de888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 168)));
label_1de88c:
    // 0x1de88c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x1de88cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1de890:
    // 0x1de890: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1de894:
    if (ctx->pc == 0x1DE894u) {
        ctx->pc = 0x1DE898u;
        goto label_1de898;
    }
    ctx->pc = 0x1DE890u;
    {
        const bool branch_taken_0x1de890 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de890) {
            ctx->pc = 0x1DE8C8u;
            goto label_1de8c8;
        }
    }
    ctx->pc = 0x1DE898u;
label_1de898:
    // 0x1de898: 0x16b43c  dsll32      $s6, $s6, 16
    ctx->pc = 0x1de898u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) << (32 + 16));
label_1de89c:
    // 0x1de89c: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1de89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1de8a0:
    // 0x1de8a0: 0xc0724a4  jal         func_1C9290
label_1de8a4:
    if (ctx->pc == 0x1DE8A4u) {
        ctx->pc = 0x1DE8A4u;
            // 0x1de8a4: 0x16b43f  dsra32      $s6, $s6, 16 (Delay Slot)
        SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 16));
        ctx->pc = 0x1DE8A8u;
        goto label_1de8a8;
    }
    ctx->pc = 0x1DE8A0u;
    SET_GPR_U32(ctx, 31, 0x1DE8A8u);
    ctx->pc = 0x1DE8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE8A0u;
            // 0x1de8a4: 0x16b43f  dsra32      $s6, $s6, 16 (Delay Slot)
        SET_GPR_S64(ctx, 22, GPR_S64(ctx, 22) >> (32 + 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE8A8u; }
        if (ctx->pc != 0x1DE8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE8A8u; }
        if (ctx->pc != 0x1DE8A8u) { return; }
    }
    ctx->pc = 0x1DE8A8u;
label_1de8a8:
    // 0x1de8a8: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x1de8a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1de8ac:
    // 0x1de8ac: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1de8b0:
    if (ctx->pc == 0x1DE8B0u) {
        ctx->pc = 0x1DE8B4u;
        goto label_1de8b4;
    }
    ctx->pc = 0x1DE8ACu;
    {
        const bool branch_taken_0x1de8ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de8ac) {
            ctx->pc = 0x1DE8C8u;
            goto label_1de8c8;
        }
    }
    ctx->pc = 0x1DE8B4u;
label_1de8b4:
    // 0x1de8b4: 0x8e03133c  lw          $v1, 0x133C($s0)
    ctx->pc = 0x1de8b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
label_1de8b8:
    // 0x1de8b8: 0x24020708  addiu       $v0, $zero, 0x708
    ctx->pc = 0x1de8b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1800));
label_1de8bc:
    // 0x1de8bc: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x1de8bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
label_1de8c0:
    // 0x1de8c0: 0xae03133c  sw          $v1, 0x133C($s0)
    ctx->pc = 0x1de8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4924), GPR_U32(ctx, 3));
label_1de8c4:
    // 0x1de8c4: 0xa6021344  sh          $v0, 0x1344($s0)
    ctx->pc = 0x1de8c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4932), (uint16_t)GPR_U32(ctx, 2));
label_1de8c8:
    // 0x1de8c8: 0x8fa20188  lw          $v0, 0x188($sp)
    ctx->pc = 0x1de8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 392)));
label_1de8cc:
    // 0x1de8cc: 0x1840001f  blez        $v0, . + 4 + (0x1F << 2)
label_1de8d0:
    if (ctx->pc == 0x1DE8D0u) {
        ctx->pc = 0x1DE8D4u;
        goto label_1de8d4;
    }
    ctx->pc = 0x1DE8CCu;
    {
        const bool branch_taken_0x1de8cc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1de8cc) {
            ctx->pc = 0x1DE94Cu;
            goto label_1de94c;
        }
    }
    ctx->pc = 0x1DE8D4u;
label_1de8d4:
    // 0x1de8d4: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x1de8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_1de8d8:
    // 0x1de8d8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1de8d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_1de8dc:
    // 0x1de8dc: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_1de8e0:
    if (ctx->pc == 0x1DE8E0u) {
        ctx->pc = 0x1DE8E4u;
        goto label_1de8e4;
    }
    ctx->pc = 0x1DE8DCu;
    {
        const bool branch_taken_0x1de8dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de8dc) {
            ctx->pc = 0x1DE94Cu;
            goto label_1de94c;
        }
    }
    ctx->pc = 0x1DE8E4u;
label_1de8e4:
    // 0x1de8e4: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x1de8e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1de8e8:
    // 0x1de8e8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1de8ec:
    if (ctx->pc == 0x1DE8ECu) {
        ctx->pc = 0x1DE8ECu;
            // 0x1de8ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1DE8F0u;
        goto label_1de8f0;
    }
    ctx->pc = 0x1DE8E8u;
    {
        const bool branch_taken_0x1de8e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DE8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE8E8u;
            // 0x1de8ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de8e8) {
            ctx->pc = 0x1DE8F8u;
            goto label_1de8f8;
        }
    }
    ctx->pc = 0x1DE8F0u;
label_1de8f0:
    // 0x1de8f0: 0x14620016  bne         $v1, $v0, . + 4 + (0x16 << 2)
label_1de8f4:
    if (ctx->pc == 0x1DE8F4u) {
        ctx->pc = 0x1DE8F8u;
        goto label_1de8f8;
    }
    ctx->pc = 0x1DE8F0u;
    {
        const bool branch_taken_0x1de8f0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1de8f0) {
            ctx->pc = 0x1DE94Cu;
            goto label_1de94c;
        }
    }
    ctx->pc = 0x1DE8F8u;
label_1de8f8:
    // 0x1de8f8: 0x3c023fc0  lui         $v0, 0x3FC0
    ctx->pc = 0x1de8f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16320 << 16));
label_1de8fc:
    // 0x1de8fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de8fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1de900:
    // 0x1de900: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1de900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1de904:
    // 0x1de904: 0xc0680f8  jal         func_1A03E0
label_1de908:
    if (ctx->pc == 0x1DE908u) {
        ctx->pc = 0x1DE908u;
            // 0x1de908: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x1DE90Cu;
        goto label_1de90c;
    }
    ctx->pc = 0x1DE904u;
    SET_GPR_U32(ctx, 31, 0x1DE90Cu);
    ctx->pc = 0x1DE908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE904u;
            // 0x1de908: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A03E0u;
    if (runtime->hasFunction(0x1A03E0u)) {
        auto targetFn = runtime->lookupFunction(0x1A03E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE90Cu; }
        if (ctx->pc != 0x1DE90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowHp_i__16CBattleCharaInfoFv_0x1a03e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE90Cu; }
        if (ctx->pc != 0x1DE90Cu) { return; }
    }
    ctx->pc = 0x1DE90Cu;
label_1de90c:
    // 0x1de90c: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1de90cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_1de910:
    // 0x1de910: 0x1420000e  bnez        $at, . + 4 + (0xE << 2)
label_1de914:
    if (ctx->pc == 0x1DE914u) {
        ctx->pc = 0x1DE918u;
        goto label_1de918;
    }
    ctx->pc = 0x1DE910u;
    {
        const bool branch_taken_0x1de910 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1de910) {
            ctx->pc = 0x1DE94Cu;
            goto label_1de94c;
        }
    }
    ctx->pc = 0x1DE918u;
label_1de918:
    // 0x1de918: 0xc0680e8  jal         func_1A03A0
label_1de91c:
    if (ctx->pc == 0x1DE91Cu) {
        ctx->pc = 0x1DE91Cu;
            // 0x1de91c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DE920u;
        goto label_1de920;
    }
    ctx->pc = 0x1DE918u;
    SET_GPR_U32(ctx, 31, 0x1DE920u);
    ctx->pc = 0x1DE91Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE918u;
            // 0x1de91c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A03A0u;
    if (runtime->hasFunction(0x1A03A0u)) {
        auto targetFn = runtime->lookupFunction(0x1A03A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE920u; }
        if (ctx->pc != 0x1DE920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMaxHp_i__16CBattleCharaInfoFv_0x1a03a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE920u; }
        if (ctx->pc != 0x1DE920u) { return; }
    }
    ctx->pc = 0x1DE920u;
label_1de920:
    // 0x1de920: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de920u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1de924:
    // 0x1de924: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1de924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1de928:
    // 0x1de928: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1de928u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1de92c:
    // 0x1de92c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1de92cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1de930:
    // 0x1de930: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1de930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1de934:
    // 0x1de934: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1de934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_1de938:
    // 0x1de938: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1de93c:
    // 0x1de93c: 0x0  nop
    ctx->pc = 0x1de93cu;
    // NOP
label_1de940:
    // 0x1de940: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1de940u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1de944:
    // 0x1de944: 0xc06802c  jal         func_1A00B0
label_1de948:
    if (ctx->pc == 0x1DE948u) {
        ctx->pc = 0x1DE948u;
            // 0x1de948: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->pc = 0x1DE94Cu;
        goto label_1de94c;
    }
    ctx->pc = 0x1DE944u;
    SET_GPR_U32(ctx, 31, 0x1DE94Cu);
    ctx->pc = 0x1DE948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE944u;
            // 0x1de948: 0x46000307  neg.s       $f12, $f0 (Delay Slot)
        ctx->f[12] = FPU_NEG_S(ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A00B0u;
    if (runtime->hasFunction(0x1A00B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A00B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE94Cu; }
        if (ctx->pc != 0x1DE94Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddHp_Point__16CBattleCharaInfoFff_0x1a00b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE94Cu; }
        if (ctx->pc != 0x1DE94Cu) { return; }
    }
    ctx->pc = 0x1DE94Cu;
label_1de94c:
    // 0x1de94c: 0x0  nop
    ctx->pc = 0x1de94cu;
    // NOP
label_1de950:
    // 0x1de950: 0xc0a248c  jal         func_289230
label_1de954:
    if (ctx->pc == 0x1DE954u) {
        ctx->pc = 0x1DE954u;
            // 0x1de954: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x1DE958u;
        goto label_1de958;
    }
    ctx->pc = 0x1DE950u;
    SET_GPR_U32(ctx, 31, 0x1DE958u);
    ctx->pc = 0x1DE954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE950u;
            // 0x1de954: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE958u; }
        if (ctx->pc != 0x1DE958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE958u; }
        if (ctx->pc != 0x1DE958u) { return; }
    }
    ctx->pc = 0x1DE958u;
label_1de958:
    // 0x1de958: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
label_1de95c:
    if (ctx->pc == 0x1DE95Cu) {
        ctx->pc = 0x1DE960u;
        goto label_1de960;
    }
    ctx->pc = 0x1DE958u;
    {
        const bool branch_taken_0x1de958 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1de958) {
            ctx->pc = 0x1DE990u;
            goto label_1de990;
        }
    }
    ctx->pc = 0x1DE960u;
label_1de960:
    // 0x1de960: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x1de960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_1de964:
    // 0x1de964: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1de964u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_1de968:
    // 0x1de968: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1de96c:
    if (ctx->pc == 0x1DE96Cu) {
        ctx->pc = 0x1DE970u;
        goto label_1de970;
    }
    ctx->pc = 0x1DE968u;
    {
        const bool branch_taken_0x1de968 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de968) {
            ctx->pc = 0x1DE990u;
            goto label_1de990;
        }
    }
    ctx->pc = 0x1DE970u;
label_1de970:
    // 0x1de970: 0xc0724a4  jal         func_1C9290
label_1de974:
    if (ctx->pc == 0x1DE974u) {
        ctx->pc = 0x1DE974u;
            // 0x1de974: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x1DE978u;
        goto label_1de978;
    }
    ctx->pc = 0x1DE970u;
    SET_GPR_U32(ctx, 31, 0x1DE978u);
    ctx->pc = 0x1DE974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE970u;
            // 0x1de974: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE978u; }
        if (ctx->pc != 0x1DE978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE978u; }
        if (ctx->pc != 0x1DE978u) { return; }
    }
    ctx->pc = 0x1DE978u;
label_1de978:
    // 0x1de978: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1de97c:
    if (ctx->pc == 0x1DE97Cu) {
        ctx->pc = 0x1DE97Cu;
            // 0x1de97c: 0x3c023fe6  lui         $v0, 0x3FE6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16358 << 16));
        ctx->pc = 0x1DE980u;
        goto label_1de980;
    }
    ctx->pc = 0x1DE978u;
    {
        const bool branch_taken_0x1de978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE97Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE978u;
            // 0x1de97c: 0x3c023fe6  lui         $v0, 0x3FE6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16358 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de978) {
            ctx->pc = 0x1DE990u;
            goto label_1de990;
        }
    }
    ctx->pc = 0x1DE980u;
label_1de980:
    // 0x1de980: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1de980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_1de984:
    // 0x1de984: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1de984u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1de988:
    // 0x1de988: 0x0  nop
    ctx->pc = 0x1de988u;
    // NOP
label_1de98c:
    // 0x1de98c: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1de98cu;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1de990:
    // 0x1de990: 0xc0a248c  jal         func_289230
label_1de994:
    if (ctx->pc == 0x1DE994u) {
        ctx->pc = 0x1DE994u;
            // 0x1de994: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x1DE998u;
        goto label_1de998;
    }
    ctx->pc = 0x1DE990u;
    SET_GPR_U32(ctx, 31, 0x1DE998u);
    ctx->pc = 0x1DE994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE990u;
            // 0x1de994: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE998u; }
        if (ctx->pc != 0x1DE998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE998u; }
        if (ctx->pc != 0x1DE998u) { return; }
    }
    ctx->pc = 0x1DE998u;
label_1de998:
    // 0x1de998: 0x18400020  blez        $v0, . + 4 + (0x20 << 2)
label_1de99c:
    if (ctx->pc == 0x1DE99Cu) {
        ctx->pc = 0x1DE99Cu;
            // 0x1de99c: 0xafa2018c  sw          $v0, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
        ctx->pc = 0x1DE9A0u;
        goto label_1de9a0;
    }
    ctx->pc = 0x1DE998u;
    {
        const bool branch_taken_0x1de998 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1DE99Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE998u;
            // 0x1de99c: 0xafa2018c  sw          $v0, 0x18C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de998) {
            ctx->pc = 0x1DEA1Cu;
            goto label_1dea1c;
        }
    }
    ctx->pc = 0x1DE9A0u;
label_1de9a0:
    // 0x1de9a0: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x1de9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_1de9a4:
    // 0x1de9a4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1de9a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_1de9a8:
    // 0x1de9a8: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_1de9ac:
    if (ctx->pc == 0x1DE9ACu) {
        ctx->pc = 0x1DE9B0u;
        goto label_1de9b0;
    }
    ctx->pc = 0x1DE9A8u;
    {
        const bool branch_taken_0x1de9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de9a8) {
            ctx->pc = 0x1DEA1Cu;
            goto label_1dea1c;
        }
    }
    ctx->pc = 0x1DE9B0u;
label_1de9b0:
    // 0x1de9b0: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x1de9b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1de9b4:
    // 0x1de9b4: 0x86a20000  lh          $v0, 0x0($s5)
    ctx->pc = 0x1de9b4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
label_1de9b8:
    // 0x1de9b8: 0x14620018  bne         $v1, $v0, . + 4 + (0x18 << 2)
label_1de9bc:
    if (ctx->pc == 0x1DE9BCu) {
        ctx->pc = 0x1DE9C0u;
        goto label_1de9c0;
    }
    ctx->pc = 0x1DE9B8u;
    {
        const bool branch_taken_0x1de9b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1de9b8) {
            ctx->pc = 0x1DEA1Cu;
            goto label_1dea1c;
        }
    }
    ctx->pc = 0x1DE9C0u;
label_1de9c0:
    // 0x1de9c0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1de9c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1de9c4:
    // 0x1de9c4: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x1de9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_1de9c8:
    // 0x1de9c8: 0x84630046  lh          $v1, 0x46($v1)
    ctx->pc = 0x1de9c8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 70)));
label_1de9cc:
    // 0x1de9cc: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_1de9d0:
    if (ctx->pc == 0x1DE9D0u) {
        ctx->pc = 0x1DE9D0u;
            // 0x1de9d0: 0x43001a  div         $zero, $v0, $v1 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->pc = 0x1DE9D4u;
        goto label_1de9d4;
    }
    ctx->pc = 0x1DE9CCu;
    {
        const bool branch_taken_0x1de9cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DE9D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE9CCu;
            // 0x1de9d0: 0x43001a  div         $zero, $v0, $v1 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de9cc) {
            ctx->pc = 0x1DE9D8u;
            goto label_1de9d8;
        }
    }
    ctx->pc = 0x1DE9D4u;
label_1de9d4:
    // 0x1de9d4: 0x1cd  break       0, 7
    ctx->pc = 0x1de9d4u;
    runtime->handleBreak(rdram, ctx);
label_1de9d8:
    // 0x1de9d8: 0xb012  mflo        $s6
    ctx->pc = 0x1de9d8u;
    SET_GPR_U64(ctx, 22, ctx->lo);
label_1de9dc:
    // 0x1de9dc: 0x2ac10002  slti        $at, $s6, 0x2
    ctx->pc = 0x1de9dcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
label_1de9e0:
    // 0x1de9e0: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1de9e4:
    if (ctx->pc == 0x1DE9E4u) {
        ctx->pc = 0x1DE9E8u;
        goto label_1de9e8;
    }
    ctx->pc = 0x1DE9E0u;
    {
        const bool branch_taken_0x1de9e0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1de9e0) {
            ctx->pc = 0x1DE9ECu;
            goto label_1de9ec;
        }
    }
    ctx->pc = 0x1DE9E8u;
label_1de9e8:
    // 0x1de9e8: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1de9e8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1de9ec:
    // 0x1de9ec: 0x0  nop
    ctx->pc = 0x1de9ecu;
    // NOP
label_1de9f0:
    // 0x1de9f0: 0xc0724a4  jal         func_1C9290
label_1de9f4:
    if (ctx->pc == 0x1DE9F4u) {
        ctx->pc = 0x1DE9F4u;
            // 0x1de9f4: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x1DE9F8u;
        goto label_1de9f8;
    }
    ctx->pc = 0x1DE9F0u;
    SET_GPR_U32(ctx, 31, 0x1DE9F8u);
    ctx->pc = 0x1DE9F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE9F0u;
            // 0x1de9f4: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE9F8u; }
        if (ctx->pc != 0x1DE9F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DE9F8u; }
        if (ctx->pc != 0x1DE9F8u) { return; }
    }
    ctx->pc = 0x1DE9F8u;
label_1de9f8:
    // 0x1de9f8: 0x2c2082a  slt         $at, $s6, $v0
    ctx->pc = 0x1de9f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1de9fc:
    // 0x1de9fc: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
label_1dea00:
    if (ctx->pc == 0x1DEA00u) {
        ctx->pc = 0x1DEA00u;
            // 0x1dea00: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->pc = 0x1DEA04u;
        goto label_1dea04;
    }
    ctx->pc = 0x1DE9FCu;
    {
        const bool branch_taken_0x1de9fc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DEA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DE9FCu;
            // 0x1dea00: 0x3c023ca3  lui         $v0, 0x3CA3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15523 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1de9fc) {
            ctx->pc = 0x1DEA1Cu;
            goto label_1dea1c;
        }
    }
    ctx->pc = 0x1DEA04u;
label_1dea04:
    // 0x1dea04: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1dea04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1dea08:
    // 0x1dea08: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1dea08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_1dea0c:
    // 0x1dea0c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dea0cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dea10:
    // 0x1dea10: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1dea10u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1dea14:
    // 0x1dea14: 0xc06802c  jal         func_1A00B0
label_1dea18:
    if (ctx->pc == 0x1DEA18u) {
        ctx->pc = 0x1DEA18u;
            // 0x1dea18: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->pc = 0x1DEA1Cu;
        goto label_1dea1c;
    }
    ctx->pc = 0x1DEA14u;
    SET_GPR_U32(ctx, 31, 0x1DEA1Cu);
    ctx->pc = 0x1DEA18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEA14u;
            // 0x1dea18: 0x46140302  mul.s       $f12, $f0, $f20 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A00B0u;
    if (runtime->hasFunction(0x1A00B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A00B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEA1Cu; }
        if (ctx->pc != 0x1DEA1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddHp_Point__16CBattleCharaInfoFff_0x1a00b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEA1Cu; }
        if (ctx->pc != 0x1DEA1Cu) { return; }
    }
    ctx->pc = 0x1DEA1Cu;
label_1dea1c:
    // 0x1dea1c: 0x0  nop
    ctx->pc = 0x1dea1cu;
    // NOP
label_1dea20:
    // 0x1dea20: 0x8fa2018c  lw          $v0, 0x18C($sp)
    ctx->pc = 0x1dea20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 396)));
label_1dea24:
    // 0x1dea24: 0x18400069  blez        $v0, . + 4 + (0x69 << 2)
label_1dea28:
    if (ctx->pc == 0x1DEA28u) {
        ctx->pc = 0x1DEA2Cu;
        goto label_1dea2c;
    }
    ctx->pc = 0x1DEA24u;
    {
        const bool branch_taken_0x1dea24 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1dea24) {
            ctx->pc = 0x1DEBCCu;
            goto label_1debcc;
        }
    }
    ctx->pc = 0x1DEA2Cu;
label_1dea2c:
    // 0x1dea2c: 0x8e2200a0  lw          $v0, 0xA0($s1)
    ctx->pc = 0x1dea2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_1dea30:
    // 0x1dea30: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1dea30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_1dea34:
    // 0x1dea34: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
label_1dea38:
    if (ctx->pc == 0x1DEA38u) {
        ctx->pc = 0x1DEA3Cu;
        goto label_1dea3c;
    }
    ctx->pc = 0x1DEA34u;
    {
        const bool branch_taken_0x1dea34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dea34) {
            ctx->pc = 0x1DEBCCu;
            goto label_1debcc;
        }
    }
    ctx->pc = 0x1DEA3Cu;
label_1dea3c:
    // 0x1dea3c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1dea3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1dea40:
    // 0x1dea40: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1dea40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1dea44:
    // 0x1dea44: 0x84630046  lh          $v1, 0x46($v1)
    ctx->pc = 0x1dea44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 70)));
label_1dea48:
    // 0x1dea48: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_1dea4c:
    if (ctx->pc == 0x1DEA4Cu) {
        ctx->pc = 0x1DEA4Cu;
            // 0x1dea4c: 0x43001a  div         $zero, $v0, $v1 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->pc = 0x1DEA50u;
        goto label_1dea50;
    }
    ctx->pc = 0x1DEA48u;
    {
        const bool branch_taken_0x1dea48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DEA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEA48u;
            // 0x1dea4c: 0x43001a  div         $zero, $v0, $v1 (Delay Slot)
        { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea48) {
            ctx->pc = 0x1DEA54u;
            goto label_1dea54;
        }
    }
    ctx->pc = 0x1DEA50u;
label_1dea50:
    // 0x1dea50: 0x1cd  break       0, 7
    ctx->pc = 0x1dea50u;
    runtime->handleBreak(rdram, ctx);
label_1dea54:
    // 0x1dea54: 0xb012  mflo        $s6
    ctx->pc = 0x1dea54u;
    SET_GPR_U64(ctx, 22, ctx->lo);
label_1dea58:
    // 0x1dea58: 0x2ac10002  slti        $at, $s6, 0x2
    ctx->pc = 0x1dea58u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)2) ? 1 : 0);
label_1dea5c:
    // 0x1dea5c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1dea60:
    if (ctx->pc == 0x1DEA60u) {
        ctx->pc = 0x1DEA64u;
        goto label_1dea64;
    }
    ctx->pc = 0x1DEA5Cu;
    {
        const bool branch_taken_0x1dea5c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dea5c) {
            ctx->pc = 0x1DEA68u;
            goto label_1dea68;
        }
    }
    ctx->pc = 0x1DEA64u;
label_1dea64:
    // 0x1dea64: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1dea64u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dea68:
    // 0x1dea68: 0xc0724a4  jal         func_1C9290
label_1dea6c:
    if (ctx->pc == 0x1DEA6Cu) {
        ctx->pc = 0x1DEA6Cu;
            // 0x1dea6c: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x1DEA70u;
        goto label_1dea70;
    }
    ctx->pc = 0x1DEA68u;
    SET_GPR_U32(ctx, 31, 0x1DEA70u);
    ctx->pc = 0x1DEA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEA68u;
            // 0x1dea6c: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEA70u; }
        if (ctx->pc != 0x1DEA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEA70u; }
        if (ctx->pc != 0x1DEA70u) { return; }
    }
    ctx->pc = 0x1DEA70u;
label_1dea70:
    // 0x1dea70: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x1dea70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_1dea74:
    // 0x1dea74: 0xc0724a4  jal         func_1C9290
label_1dea78:
    if (ctx->pc == 0x1DEA78u) {
        ctx->pc = 0x1DEA78u;
            // 0x1dea78: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x1DEA7Cu;
        goto label_1dea7c;
    }
    ctx->pc = 0x1DEA74u;
    SET_GPR_U32(ctx, 31, 0x1DEA7Cu);
    ctx->pc = 0x1DEA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEA74u;
            // 0x1dea78: 0x24040064  addiu       $a0, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEA7Cu; }
        if (ctx->pc != 0x1DEA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEA7Cu; }
        if (ctx->pc != 0x1DEA7Cu) { return; }
    }
    ctx->pc = 0x1DEA7Cu;
label_1dea7c:
    // 0x1dea7c: 0x7ba300d0  lq          $v1, 0xD0($sp)
    ctx->pc = 0x1dea7cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1dea80:
    // 0x1dea80: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1dea80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1dea84:
    // 0x1dea84: 0x31043  sra         $v0, $v1, 1
    ctx->pc = 0x1dea84u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
label_1dea88:
    // 0x1dea88: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_1dea8c:
    if (ctx->pc == 0x1DEA8Cu) {
        ctx->pc = 0x1DEA8Cu;
            // 0x1dea8c: 0xafa20140  sw          $v0, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
        ctx->pc = 0x1DEA90u;
        goto label_1dea90;
    }
    ctx->pc = 0x1DEA88u;
    {
        const bool branch_taken_0x1dea88 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1DEA8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEA88u;
            // 0x1dea8c: 0xafa20140  sw          $v0, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dea88) {
            ctx->pc = 0x1DEA9Cu;
            goto label_1dea9c;
        }
    }
    ctx->pc = 0x1DEA90u;
label_1dea90:
    // 0x1dea90: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1dea90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1dea94:
    // 0x1dea94: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x1dea94u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_1dea98:
    // 0x1dea98: 0xafa20140  sw          $v0, 0x140($sp)
    ctx->pc = 0x1dea98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
label_1dea9c:
    // 0x1dea9c: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x1dea9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1deaa0:
    // 0x1deaa0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1deaa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_1deaa4:
    // 0x1deaa4: 0x24847fb8  addiu       $a0, $a0, 0x7FB8
    ctx->pc = 0x1deaa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32696));
label_1deaa8:
    // 0x1deaa8: 0xc04a0d2  jal         func_128348
label_1deaac:
    if (ctx->pc == 0x1DEAACu) {
        ctx->pc = 0x1DEAACu;
            // 0x1deaac: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DEAB0u;
        goto label_1deab0;
    }
    ctx->pc = 0x1DEAA8u;
    SET_GPR_U32(ctx, 31, 0x1DEAB0u);
    ctx->pc = 0x1DEAACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEAA8u;
            // 0x1deaac: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEAB0u; }
        if (ctx->pc != 0x1DEAB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEAB0u; }
        if (ctx->pc != 0x1DEAB0u) { return; }
    }
    ctx->pc = 0x1DEAB0u;
label_1deab0:
    // 0x1deab0: 0x8fa20140  lw          $v0, 0x140($sp)
    ctx->pc = 0x1deab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_1deab4:
    // 0x1deab4: 0x2c2082a  slt         $at, $s6, $v0
    ctx->pc = 0x1deab4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1deab8:
    // 0x1deab8: 0x14200044  bnez        $at, . + 4 + (0x44 << 2)
label_1deabc:
    if (ctx->pc == 0x1DEABCu) {
        ctx->pc = 0x1DEAC0u;
        goto label_1deac0;
    }
    ctx->pc = 0x1DEAB8u;
    {
        const bool branch_taken_0x1deab8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1deab8) {
            ctx->pc = 0x1DEBCCu;
            goto label_1debcc;
        }
    }
    ctx->pc = 0x1DEAC0u;
label_1deac0:
    // 0x1deac0: 0x8e031150  lw          $v1, 0x1150($s0)
    ctx->pc = 0x1deac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4432)));
label_1deac4:
    // 0x1deac4: 0x846200a0  lh          $v0, 0xA0($v1)
    ctx->pc = 0x1deac4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
label_1deac8:
    // 0x1deac8: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
label_1deacc:
    if (ctx->pc == 0x1DEACCu) {
        ctx->pc = 0x1DEAD0u;
        goto label_1dead0;
    }
    ctx->pc = 0x1DEAC8u;
    {
        const bool branch_taken_0x1deac8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1deac8) {
            ctx->pc = 0x1DEADCu;
            goto label_1deadc;
        }
    }
    ctx->pc = 0x1DEAD0u;
label_1dead0:
    // 0x1dead0: 0x846200a2  lh          $v0, 0xA2($v1)
    ctx->pc = 0x1dead0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 162)));
label_1dead4:
    // 0x1dead4: 0x1840003d  blez        $v0, . + 4 + (0x3D << 2)
label_1dead8:
    if (ctx->pc == 0x1DEAD8u) {
        ctx->pc = 0x1DEADCu;
        goto label_1deadc;
    }
    ctx->pc = 0x1DEAD4u;
    {
        const bool branch_taken_0x1dead4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1dead4) {
            ctx->pc = 0x1DEBCCu;
            goto label_1debcc;
        }
    }
    ctx->pc = 0x1DEADCu;
label_1deadc:
    // 0x1deadc: 0x0  nop
    ctx->pc = 0x1deadcu;
    // NOP
label_1deae0:
    // 0x1deae0: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1deae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1deae4:
    // 0x1deae4: 0xc0724a4  jal         func_1C9290
label_1deae8:
    if (ctx->pc == 0x1DEAE8u) {
        ctx->pc = 0x1DEAE8u;
            // 0x1deae8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DEAECu;
        goto label_1deaec;
    }
    ctx->pc = 0x1DEAE4u;
    SET_GPR_U32(ctx, 31, 0x1DEAECu);
    ctx->pc = 0x1DEAE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEAE4u;
            // 0x1deae8: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEAECu; }
        if (ctx->pc != 0x1DEAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEAECu; }
        if (ctx->pc != 0x1DEAECu) { return; }
    }
    ctx->pc = 0x1DEAECu;
label_1deaec:
    // 0x1deaec: 0x28410014  slti        $at, $v0, 0x14
    ctx->pc = 0x1deaecu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
label_1deaf0:
    // 0x1deaf0: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_1deaf4:
    if (ctx->pc == 0x1DEAF4u) {
        ctx->pc = 0x1DEAF8u;
        goto label_1deaf8;
    }
    ctx->pc = 0x1DEAF0u;
    {
        const bool branch_taken_0x1deaf0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1deaf0) {
            ctx->pc = 0x1DEB0Cu;
            goto label_1deb0c;
        }
    }
    ctx->pc = 0x1DEAF8u;
label_1deaf8:
    // 0x1deaf8: 0x8e021150  lw          $v0, 0x1150($s0)
    ctx->pc = 0x1deaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4432)));
label_1deafc:
    // 0x1deafc: 0x844200a2  lh          $v0, 0xA2($v0)
    ctx->pc = 0x1deafcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 162)));
label_1deb00:
    // 0x1deb00: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
label_1deb04:
    if (ctx->pc == 0x1DEB04u) {
        ctx->pc = 0x1DEB08u;
        goto label_1deb08;
    }
    ctx->pc = 0x1DEB00u;
    {
        const bool branch_taken_0x1deb00 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1deb00) {
            ctx->pc = 0x1DEB0Cu;
            goto label_1deb0c;
        }
    }
    ctx->pc = 0x1DEB08u;
label_1deb08:
    // 0x1deb08: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1deb08u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1deb0c:
    // 0x1deb0c: 0x0  nop
    ctx->pc = 0x1deb0cu;
    // NOP
label_1deb10:
    // 0x1deb10: 0x8e031150  lw          $v1, 0x1150($s0)
    ctx->pc = 0x1deb10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4432)));
label_1deb14:
    // 0x1deb14: 0x846200a0  lh          $v0, 0xA0($v1)
    ctx->pc = 0x1deb14u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 160)));
label_1deb18:
    // 0x1deb18: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
label_1deb1c:
    if (ctx->pc == 0x1DEB1Cu) {
        ctx->pc = 0x1DEB20u;
        goto label_1deb20;
    }
    ctx->pc = 0x1DEB18u;
    {
        const bool branch_taken_0x1deb18 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1deb18) {
            ctx->pc = 0x1DEB24u;
            goto label_1deb24;
        }
    }
    ctx->pc = 0x1DEB20u;
label_1deb20:
    // 0x1deb20: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1deb20u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1deb24:
    // 0x1deb24: 0x0  nop
    ctx->pc = 0x1deb24u;
    // NOP
label_1deb28:
    // 0x1deb28: 0x161040  sll         $v0, $s6, 1
    ctx->pc = 0x1deb28u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 22), 1));
label_1deb2c:
    // 0x1deb2c: 0xafa20190  sw          $v0, 0x190($sp)
    ctx->pc = 0x1deb2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 2));
label_1deb30:
    // 0x1deb30: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1deb30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_1deb34:
    // 0x1deb34: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1deb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1deb38:
    // 0x1deb38: 0x844400a0  lh          $a0, 0xA0($v0)
    ctx->pc = 0x1deb38u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_1deb3c:
    // 0x1deb3c: 0xc068524  jal         func_1A1490
label_1deb40:
    if (ctx->pc == 0x1DEB40u) {
        ctx->pc = 0x1DEB40u;
            // 0x1deb40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1DEB44u;
        goto label_1deb44;
    }
    ctx->pc = 0x1DEB3Cu;
    SET_GPR_U32(ctx, 31, 0x1DEB44u);
    ctx->pc = 0x1DEB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEB3Cu;
            // 0x1deb40: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1490u;
    if (runtime->hasFunction(0x1A1490u)) {
        auto targetFn = runtime->lookupFunction(0x1A1490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEB44u; }
        if (ctx->pc != 0x1DEB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckGetItemLimmitOver__Fii_0x1a1490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEB44u; }
        if (ctx->pc != 0x1DEB44u) { return; }
    }
    ctx->pc = 0x1DEB44u;
label_1deb44:
    // 0x1deb44: 0x18400021  blez        $v0, . + 4 + (0x21 << 2)
label_1deb48:
    if (ctx->pc == 0x1DEB48u) {
        ctx->pc = 0x1DEB48u;
            // 0x1deb48: 0x27848de8  addiu       $a0, $gp, -0x7218 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938088));
        ctx->pc = 0x1DEB4Cu;
        goto label_1deb4c;
    }
    ctx->pc = 0x1DEB44u;
    {
        const bool branch_taken_0x1deb44 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1DEB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEB44u;
            // 0x1deb48: 0x27848de8  addiu       $a0, $gp, -0x7218 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294938088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deb44) {
            ctx->pc = 0x1DEBCCu;
            goto label_1debcc;
        }
    }
    ctx->pc = 0x1DEB4Cu;
label_1deb4c:
    // 0x1deb4c: 0xc06e574  jal         func_1B95D0
label_1deb50:
    if (ctx->pc == 0x1DEB50u) {
        ctx->pc = 0x1DEB50u;
            // 0x1deb50: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1DEB54u;
        goto label_1deb54;
    }
    ctx->pc = 0x1DEB4Cu;
    SET_GPR_U32(ctx, 31, 0x1DEB54u);
    ctx->pc = 0x1DEB50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEB4Cu;
            // 0x1deb50: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B95D0u;
    if (runtime->hasFunction(0x1B95D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B95D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEB54u; }
        if (ctx->pc != 0x1DEB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetList__16CPullItemManagerFi_0x1b95d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEB54u; }
        if (ctx->pc != 0x1DEB54u) { return; }
    }
    ctx->pc = 0x1DEB54u;
label_1deb54:
    // 0x1deb54: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x1deb54u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1deb58:
    // 0x1deb58: 0x12c0001c  beqz        $s6, . + 4 + (0x1C << 2)
label_1deb5c:
    if (ctx->pc == 0x1DEB5Cu) {
        ctx->pc = 0x1DEB5Cu;
            // 0x1deb5c: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->pc = 0x1DEB60u;
        goto label_1deb60;
    }
    ctx->pc = 0x1DEB58u;
    {
        const bool branch_taken_0x1deb58 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEB58u;
            // 0x1deb5c: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deb58) {
            ctx->pc = 0x1DEBCCu;
            goto label_1debcc;
        }
    }
    ctx->pc = 0x1DEB60u;
label_1deb60:
    // 0x1deb60: 0x27a301e0  addiu       $v1, $sp, 0x1E0
    ctx->pc = 0x1deb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_1deb64:
    // 0x1deb64: 0x2442d2d0  addiu       $v0, $v0, -0x2D30
    ctx->pc = 0x1deb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955728));
label_1deb68:
    // 0x1deb68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1deb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1deb6c:
    // 0x1deb6c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1deb6cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1deb70:
    // 0x1deb70: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1deb70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1deb74:
    // 0x1deb74: 0x27a601d0  addiu       $a2, $sp, 0x1D0
    ctx->pc = 0x1deb74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_1deb78:
    // 0x1deb78: 0xc05d3d4  jal         func_174F50
label_1deb7c:
    if (ctx->pc == 0x1DEB7Cu) {
        ctx->pc = 0x1DEB7Cu;
            // 0x1deb7c: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->pc = 0x1DEB80u;
        goto label_1deb80;
    }
    ctx->pc = 0x1DEB78u;
    SET_GPR_U32(ctx, 31, 0x1DEB80u);
    ctx->pc = 0x1DEB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEB78u;
            // 0x1deb7c: 0x7c620000  sq          $v0, 0x0($v1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174F50u;
    if (runtime->hasFunction(0x174F50u)) {
        auto targetFn = runtime->lookupFunction(0x174F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEB80u; }
        if (ctx->pc != 0x1DEB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiPf_0x174f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEB80u; }
        if (ctx->pc != 0x1DEB80u) { return; }
    }
    ctx->pc = 0x1DEB80u;
label_1deb80:
    // 0x1deb80: 0xc7a101d4  lwc1        $f1, 0x1D4($sp)
    ctx->pc = 0x1deb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1deb84:
    // 0x1deb84: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1deb84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1deb88:
    // 0x1deb88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1deb88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1deb8c:
    // 0x1deb8c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1deb8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1deb90:
    // 0x1deb90: 0x27a501d0  addiu       $a1, $sp, 0x1D0
    ctx->pc = 0x1deb90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
label_1deb94:
    // 0x1deb94: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x1deb94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_1deb98:
    // 0x1deb98: 0x24070007  addiu       $a3, $zero, 0x7
    ctx->pc = 0x1deb98u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1deb9c:
    // 0x1deb9c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1deb9cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_1deba0:
    // 0x1deba0: 0xc06e46c  jal         func_1B91B0
label_1deba4:
    if (ctx->pc == 0x1DEBA4u) {
        ctx->pc = 0x1DEBA4u;
            // 0x1deba4: 0xe7a001d4  swc1        $f0, 0x1D4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
        ctx->pc = 0x1DEBA8u;
        goto label_1deba8;
    }
    ctx->pc = 0x1DEBA0u;
    SET_GPR_U32(ctx, 31, 0x1DEBA8u);
    ctx->pc = 0x1DEBA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEBA0u;
            // 0x1deba4: 0xe7a001d4  swc1        $f0, 0x1D4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 468), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B91B0u;
    if (runtime->hasFunction(0x1B91B0u)) {
        auto targetFn = runtime->lookupFunction(0x1B91B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEBA8u; }
        if (ctx->pc != 0x1DEBA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetItem__9CPullItemFPfPfi_0x1b91b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEBA8u; }
        if (ctx->pc != 0x1DEBA8u) { return; }
    }
    ctx->pc = 0x1DEBA8u;
label_1deba8:
    // 0x1deba8: 0x8e031150  lw          $v1, 0x1150($s0)
    ctx->pc = 0x1deba8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4432)));
label_1debac:
    // 0x1debac: 0x8fa20190  lw          $v0, 0x190($sp)
    ctx->pc = 0x1debacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 400)));
label_1debb0:
    // 0x1debb0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1debb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1debb4:
    // 0x1debb4: 0x844200a0  lh          $v0, 0xA0($v0)
    ctx->pc = 0x1debb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 160)));
label_1debb8:
    // 0x1debb8: 0xa6c2006c  sh          $v0, 0x6C($s6)
    ctx->pc = 0x1debb8u;
    WRITE16(ADD32(GPR_U32(ctx, 22), 108), (uint16_t)GPR_U32(ctx, 2));
label_1debbc:
    // 0x1debbc: 0x8e021150  lw          $v0, 0x1150($s0)
    ctx->pc = 0x1debbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4432)));
label_1debc0:
    // 0x1debc0: 0xa44000a0  sh          $zero, 0xA0($v0)
    ctx->pc = 0x1debc0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 160), (uint16_t)GPR_U32(ctx, 0));
label_1debc4:
    // 0x1debc4: 0x8e021150  lw          $v0, 0x1150($s0)
    ctx->pc = 0x1debc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4432)));
label_1debc8:
    // 0x1debc8: 0xa44000a2  sh          $zero, 0xA2($v0)
    ctx->pc = 0x1debc8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 162), (uint16_t)GPR_U32(ctx, 0));
label_1debcc:
    // 0x1debcc: 0x0  nop
    ctx->pc = 0x1debccu;
    // NOP
label_1debd0:
    // 0x1debd0: 0x83c20062  lb          $v0, 0x62($fp)
    ctx->pc = 0x1debd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 30), 98)));
label_1debd4:
    // 0x1debd4: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1debd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1debd8:
    // 0x1debd8: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1debd8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1debdc:
    // 0x1debdc: 0xc0724a4  jal         func_1C9290
label_1debe0:
    if (ctx->pc == 0x1DEBE0u) {
        ctx->pc = 0x1DEBE0u;
            // 0x1debe0: 0x7fa200c0  sq          $v0, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
        ctx->pc = 0x1DEBE4u;
        goto label_1debe4;
    }
    ctx->pc = 0x1DEBDCu;
    SET_GPR_U32(ctx, 31, 0x1DEBE4u);
    ctx->pc = 0x1DEBE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEBDCu;
            // 0x1debe0: 0x7fa200c0  sq          $v0, 0xC0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEBE4u; }
        if (ctx->pc != 0x1DEBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEBE4u; }
        if (ctx->pc != 0x1DEBE4u) { return; }
    }
    ctx->pc = 0x1DEBE4u;
label_1debe4:
    // 0x1debe4: 0x7ba300c0  lq          $v1, 0xC0($sp)
    ctx->pc = 0x1debe4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1debe8:
    // 0x1debe8: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x1debe8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1debec:
    // 0x1debec: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_1debf0:
    if (ctx->pc == 0x1DEBF0u) {
        ctx->pc = 0x1DEBF4u;
        goto label_1debf4;
    }
    ctx->pc = 0x1DEBECu;
    {
        const bool branch_taken_0x1debec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1debec) {
            ctx->pc = 0x1DEBF8u;
            goto label_1debf8;
        }
    }
    ctx->pc = 0x1DEBF4u;
label_1debf4:
    // 0x1debf4: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1debf4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1debf8:
    // 0x1debf8: 0x8e0206a0  lw          $v0, 0x6A0($s0)
    ctx->pc = 0x1debf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1696)));
label_1debfc:
    // 0x1debfc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1debfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1dec00:
    // 0x1dec00: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1dec04:
    if (ctx->pc == 0x1DEC04u) {
        ctx->pc = 0x1DEC08u;
        goto label_1dec08;
    }
    ctx->pc = 0x1DEC00u;
    {
        const bool branch_taken_0x1dec00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dec00) {
            ctx->pc = 0x1DEC0Cu;
            goto label_1dec0c;
        }
    }
    ctx->pc = 0x1DEC08u;
label_1dec08:
    // 0x1dec08: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1dec08u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dec0c:
    // 0x1dec0c: 0x0  nop
    ctx->pc = 0x1dec0cu;
    // NOP
label_1dec10:
    // 0x1dec10: 0x8e020bf0  lw          $v0, 0xBF0($s0)
    ctx->pc = 0x1dec10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3056)));
label_1dec14:
    // 0x1dec14: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1dec18:
    if (ctx->pc == 0x1DEC18u) {
        ctx->pc = 0x1DEC1Cu;
        goto label_1dec1c;
    }
    ctx->pc = 0x1DEC14u;
    {
        const bool branch_taken_0x1dec14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dec14) {
            ctx->pc = 0x1DEC20u;
            goto label_1dec20;
        }
    }
    ctx->pc = 0x1DEC1Cu;
label_1dec1c:
    // 0x1dec1c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1dec1cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dec20:
    // 0x1dec20: 0x8602133a  lh          $v0, 0x133A($s0)
    ctx->pc = 0x1dec20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4922)));
label_1dec24:
    // 0x1dec24: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
label_1dec28:
    if (ctx->pc == 0x1DEC28u) {
        ctx->pc = 0x1DEC2Cu;
        goto label_1dec2c;
    }
    ctx->pc = 0x1DEC24u;
    {
        const bool branch_taken_0x1dec24 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1dec24) {
            ctx->pc = 0x1DEC30u;
            goto label_1dec30;
        }
    }
    ctx->pc = 0x1DEC2Cu;
label_1dec2c:
    // 0x1dec2c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1dec2cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dec30:
    // 0x1dec30: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1dec30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1dec34:
    // 0x1dec34: 0x84620026  lh          $v0, 0x26($v1)
    ctx->pc = 0x1dec34u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 38)));
label_1dec38:
    // 0x1dec38: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x1dec38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_1dec3c:
    // 0x1dec3c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1dec40:
    if (ctx->pc == 0x1DEC40u) {
        ctx->pc = 0x1DEC44u;
        goto label_1dec44;
    }
    ctx->pc = 0x1DEC3Cu;
    {
        const bool branch_taken_0x1dec3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dec3c) {
            ctx->pc = 0x1DEC48u;
            goto label_1dec48;
        }
    }
    ctx->pc = 0x1DEC44u;
label_1dec44:
    // 0x1dec44: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1dec44u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dec48:
    // 0x1dec48: 0x12c0000a  beqz        $s6, . + 4 + (0xA << 2)
label_1dec4c:
    if (ctx->pc == 0x1DEC4Cu) {
        ctx->pc = 0x1DEC50u;
        goto label_1dec50;
    }
    ctx->pc = 0x1DEC48u;
    {
        const bool branch_taken_0x1dec48 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dec48) {
            ctx->pc = 0x1DEC74u;
            goto label_1dec74;
        }
    }
    ctx->pc = 0x1DEC50u;
label_1dec50:
    // 0x1dec50: 0x84630024  lh          $v1, 0x24($v1)
    ctx->pc = 0x1dec50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 36)));
label_1dec54:
    // 0x1dec54: 0x3c023c23  lui         $v0, 0x3C23
    ctx->pc = 0x1dec54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15395 << 16));
label_1dec58:
    // 0x1dec58: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x1dec58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_1dec5c:
    // 0x1dec5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1dec5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1dec60:
    // 0x1dec60: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1dec60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1dec64:
    // 0x1dec64: 0x0  nop
    ctx->pc = 0x1dec64u;
    // NOP
label_1dec68:
    // 0x1dec68: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1dec68u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1dec6c:
    // 0x1dec6c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x1dec6cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
label_1dec70:
    // 0x1dec70: 0x4600a502  mul.s       $f20, $f20, $f0
    ctx->pc = 0x1dec70u;
    ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_1dec74:
    // 0x1dec74: 0x0  nop
    ctx->pc = 0x1dec74u;
    // NOP
label_1dec78:
    // 0x1dec78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1dec78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1dec7c:
    // 0x1dec7c: 0xc07a18c  jal         func_1E8630
label_1dec80:
    if (ctx->pc == 0x1DEC80u) {
        ctx->pc = 0x1DEC80u;
            // 0x1dec80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DEC84u;
        goto label_1dec84;
    }
    ctx->pc = 0x1DEC7Cu;
    SET_GPR_U32(ctx, 31, 0x1DEC84u);
    ctx->pc = 0x1DEC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEC7Cu;
            // 0x1dec80: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8630u;
    if (runtime->hasFunction(0x1E8630u)) {
        auto targetFn = runtime->lookupFunction(0x1E8630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEC84u; }
        if (ctx->pc != 0x1DEC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        calcWeaponParamWhp__FP14CActiveMonsterP8CColPrim_0x1e8630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEC84u; }
        if (ctx->pc != 0x1DEC84u) { return; }
    }
    ctx->pc = 0x1DEC84u;
label_1dec84:
    // 0x1dec84: 0x8e021314  lw          $v0, 0x1314($s0)
    ctx->pc = 0x1dec84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4884)));
label_1dec88:
    // 0x1dec88: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1dec88u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1dec8c:
    // 0x1dec8c: 0xc0a248c  jal         func_289230
label_1dec90:
    if (ctx->pc == 0x1DEC90u) {
        ctx->pc = 0x1DEC90u;
            // 0x1dec90: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->pc = 0x1DEC94u;
        goto label_1dec94;
    }
    ctx->pc = 0x1DEC8Cu;
    SET_GPR_U32(ctx, 31, 0x1DEC94u);
    ctx->pc = 0x1DEC90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEC8Cu;
            // 0x1dec90: 0x7fa200b0  sq          $v0, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEC94u; }
        if (ctx->pc != 0x1DEC94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEC94u; }
        if (ctx->pc != 0x1DEC94u) { return; }
    }
    ctx->pc = 0x1DEC94u;
label_1dec94:
    // 0x1dec94: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x1dec94u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1dec98:
    // 0x1dec98: 0xafa201a8  sw          $v0, 0x1A8($sp)
    ctx->pc = 0x1dec98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 424), GPR_U32(ctx, 2));
label_1dec9c:
    // 0x1dec9c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1dec9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1deca0:
    // 0x1deca0: 0xae031314  sw          $v1, 0x1314($s0)
    ctx->pc = 0x1deca0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4884), GPR_U32(ctx, 3));
label_1deca4:
    // 0x1deca4: 0x8e021314  lw          $v0, 0x1314($s0)
    ctx->pc = 0x1deca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4884)));
label_1deca8:
    // 0x1deca8: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
label_1decac:
    if (ctx->pc == 0x1DECACu) {
        ctx->pc = 0x1DECB0u;
        goto label_1decb0;
    }
    ctx->pc = 0x1DECA8u;
    {
        const bool branch_taken_0x1deca8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1deca8) {
            ctx->pc = 0x1DECB4u;
            goto label_1decb4;
        }
    }
    ctx->pc = 0x1DECB0u;
label_1decb0:
    // 0x1decb0: 0xae001314  sw          $zero, 0x1314($s0)
    ctx->pc = 0x1decb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4884), GPR_U32(ctx, 0));
label_1decb4:
    // 0x1decb4: 0x0  nop
    ctx->pc = 0x1decb4u;
    // NOP
label_1decb8:
    // 0x1decb8: 0x8fa201a8  lw          $v0, 0x1A8($sp)
    ctx->pc = 0x1decb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_1decbc:
    // 0x1decbc: 0x1c400020  bgtz        $v0, . + 4 + (0x20 << 2)
label_1decc0:
    if (ctx->pc == 0x1DECC0u) {
        ctx->pc = 0x1DECC4u;
        goto label_1decc4;
    }
    ctx->pc = 0x1DECBCu;
    {
        const bool branch_taken_0x1decbc = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x1decbc) {
            ctx->pc = 0x1DED40u;
            goto label_1ded40;
        }
    }
    ctx->pc = 0x1DECC4u;
label_1decc4:
    // 0x1decc4: 0x86021356  lh          $v0, 0x1356($s0)
    ctx->pc = 0x1decc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4950)));
label_1decc8:
    // 0x1decc8: 0x26250100  addiu       $a1, $s1, 0x100
    ctx->pc = 0x1decc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_1deccc:
    // 0x1deccc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1decccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1decd0:
    // 0x1decd0: 0xa6021356  sh          $v0, 0x1356($s0)
    ctx->pc = 0x1decd0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4950), (uint16_t)GPR_U32(ctx, 2));
label_1decd4:
    // 0x1decd4: 0x8fa201ac  lw          $v0, 0x1AC($sp)
    ctx->pc = 0x1decd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
label_1decd8:
    // 0x1decd8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1decd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1decdc:
    // 0x1decdc: 0xc077750  jal         func_1DDD40
label_1dece0:
    if (ctx->pc == 0x1DECE0u) {
        ctx->pc = 0x1DECE0u;
            // 0x1dece0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DECE4u;
        goto label_1dece4;
    }
    ctx->pc = 0x1DECDCu;
    SET_GPR_U32(ctx, 31, 0x1DECE4u);
    ctx->pc = 0x1DECE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DECDCu;
            // 0x1dece0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DDD40u;
    if (runtime->hasFunction(0x1DDD40u)) {
        auto targetFn = runtime->lookupFunction(0x1DDD40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DECE4u; }
        if (ctx->pc != 0x1DECE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GuardEffectSet__FP6CScenePfi_0x1ddd40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DECE4u; }
        if (ctx->pc != 0x1DECE4u) { return; }
    }
    ctx->pc = 0x1DECE4u;
label_1dece4:
    // 0x1dece4: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x1dece4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_1dece8:
    // 0x1dece8: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x1dece8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_1decec:
    // 0x1decec: 0xc063818  jal         func_18E060
label_1decf0:
    if (ctx->pc == 0x1DECF0u) {
        ctx->pc = 0x1DECF0u;
            // 0x1decf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DECF4u;
        goto label_1decf4;
    }
    ctx->pc = 0x1DECECu;
    SET_GPR_U32(ctx, 31, 0x1DECF4u);
    ctx->pc = 0x1DECF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DECECu;
            // 0x1decf0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DECF4u; }
        if (ctx->pc != 0x1DECF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DECF4u; }
        if (ctx->pc != 0x1DECF4u) { return; }
    }
    ctx->pc = 0x1DECF4u;
label_1decf4:
    // 0x1decf4: 0x12c00007  beqz        $s6, . + 4 + (0x7 << 2)
label_1decf8:
    if (ctx->pc == 0x1DECF8u) {
        ctx->pc = 0x1DECF8u;
            // 0x1decf8: 0x26240100  addiu       $a0, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->pc = 0x1DECFCu;
        goto label_1decfc;
    }
    ctx->pc = 0x1DECF4u;
    {
        const bool branch_taken_0x1decf4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DECF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DECF4u;
            // 0x1decf8: 0x26240100  addiu       $a0, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1decf4) {
            ctx->pc = 0x1DED14u;
            goto label_1ded14;
        }
    }
    ctx->pc = 0x1DECFCu;
label_1decfc:
    // 0x1decfc: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1decfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ded00:
    // 0x1ded00: 0xc0777d8  jal         func_1DDF60
label_1ded04:
    if (ctx->pc == 0x1DED04u) {
        ctx->pc = 0x1DED04u;
            // 0x1ded04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DED08u;
        goto label_1ded08;
    }
    ctx->pc = 0x1DED00u;
    SET_GPR_U32(ctx, 31, 0x1DED08u);
    ctx->pc = 0x1DED04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DED00u;
            // 0x1ded04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DDF60u;
    if (runtime->hasFunction(0x1DDF60u)) {
        auto targetFn = runtime->lookupFunction(0x1DDF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED08u; }
        if (ctx->pc != 0x1DED08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        HitScoreSet__FPfii_0x1ddf60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED08u; }
        if (ctx->pc != 0x1DED08u) { return; }
    }
    ctx->pc = 0x1DED08u;
label_1ded08:
    // 0x1ded08: 0x240302bc  addiu       $v1, $zero, 0x2BC
    ctx->pc = 0x1ded08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 700));
label_1ded0c:
    // 0x1ded0c: 0x10000006  b           . + 4 + (0x6 << 2)
label_1ded10:
    if (ctx->pc == 0x1DED10u) {
        ctx->pc = 0x1DED10u;
            // 0x1ded10: 0xa6031158  sh          $v1, 0x1158($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4440), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1DED14u;
        goto label_1ded14;
    }
    ctx->pc = 0x1DED0Cu;
    {
        const bool branch_taken_0x1ded0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DED10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DED0Cu;
            // 0x1ded10: 0xa6031158  sh          $v1, 0x1158($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4440), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ded0c) {
            ctx->pc = 0x1DED28u;
            goto label_1ded28;
        }
    }
    ctx->pc = 0x1DED14u;
label_1ded14:
    // 0x1ded14: 0x0  nop
    ctx->pc = 0x1ded14u;
    // NOP
label_1ded18:
    // 0x1ded18: 0x26240100  addiu       $a0, $s1, 0x100
    ctx->pc = 0x1ded18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_1ded1c:
    // 0x1ded1c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ded1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ded20:
    // 0x1ded20: 0xc0777d8  jal         func_1DDF60
label_1ded24:
    if (ctx->pc == 0x1DED24u) {
        ctx->pc = 0x1DED24u;
            // 0x1ded24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DED28u;
        goto label_1ded28;
    }
    ctx->pc = 0x1DED20u;
    SET_GPR_U32(ctx, 31, 0x1DED28u);
    ctx->pc = 0x1DED24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DED20u;
            // 0x1ded24: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DDF60u;
    if (runtime->hasFunction(0x1DDF60u)) {
        auto targetFn = runtime->lookupFunction(0x1DDF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED28u; }
        if (ctx->pc != 0x1DED28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        HitScoreSet__FPfii_0x1ddf60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED28u; }
        if (ctx->pc != 0x1DED28u) { return; }
    }
    ctx->pc = 0x1DED28u;
label_1ded28:
    // 0x1ded28: 0x12e001e5  beqz        $s7, . + 4 + (0x1E5 << 2)
label_1ded2c:
    if (ctx->pc == 0x1DED2Cu) {
        ctx->pc = 0x1DED30u;
        goto label_1ded30;
    }
    ctx->pc = 0x1DED28u;
    {
        const bool branch_taken_0x1ded28 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ded28) {
            ctx->pc = 0x1DF4C0u;
            goto label_1df4c0;
        }
    }
    ctx->pc = 0x1DED30u;
label_1ded30:
    // 0x1ded30: 0x8fa30118  lw          $v1, 0x118($sp)
    ctx->pc = 0x1ded30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_1ded34:
    // 0x1ded34: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ded34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ded38:
    // 0x1ded38: 0x100001e1  b           . + 4 + (0x1E1 << 2)
label_1ded3c:
    if (ctx->pc == 0x1DED3Cu) {
        ctx->pc = 0x1DED3Cu;
            // 0x1ded3c: 0xac640bec  sw          $a0, 0xBEC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 3052), GPR_U32(ctx, 4));
        ctx->pc = 0x1DED40u;
        goto label_1ded40;
    }
    ctx->pc = 0x1DED38u;
    {
        const bool branch_taken_0x1ded38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DED3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DED38u;
            // 0x1ded3c: 0xac640bec  sw          $a0, 0xBEC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 3052), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ded38) {
            ctx->pc = 0x1DF4C0u;
            goto label_1df4c0;
        }
    }
    ctx->pc = 0x1DED40u;
label_1ded40:
    // 0x1ded40: 0x8e021348  lw          $v0, 0x1348($s0)
    ctx->pc = 0x1ded40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4936)));
label_1ded44:
    // 0x1ded44: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1ded44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_1ded48:
    // 0x1ded48: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_1ded4c:
    if (ctx->pc == 0x1DED4Cu) {
        ctx->pc = 0x1DED50u;
        goto label_1ded50;
    }
    ctx->pc = 0x1DED48u;
    {
        const bool branch_taken_0x1ded48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ded48) {
            ctx->pc = 0x1DEDB8u;
            goto label_1dedb8;
        }
    }
    ctx->pc = 0x1DED50u;
label_1ded50:
    // 0x1ded50: 0x86420004  lh          $v0, 0x4($s2)
    ctx->pc = 0x1ded50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 4)));
label_1ded54:
    // 0x1ded54: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1ded58:
    if (ctx->pc == 0x1DED58u) {
        ctx->pc = 0x1DED5Cu;
        goto label_1ded5c;
    }
    ctx->pc = 0x1DED54u;
    {
        const bool branch_taken_0x1ded54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ded54) {
            ctx->pc = 0x1DEDB8u;
            goto label_1dedb8;
        }
    }
    ctx->pc = 0x1DED5Cu;
label_1ded5c:
    // 0x1ded5c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1ded5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ded60:
    // 0x1ded60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ded60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ded64:
    // 0x1ded64: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1ded64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1ded68:
    // 0x1ded68: 0x320f809  jalr        $t9
label_1ded6c:
    if (ctx->pc == 0x1DED6Cu) {
        ctx->pc = 0x1DED6Cu;
            // 0x1ded6c: 0x27a501f0  addiu       $a1, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x1DED70u;
        goto label_1ded70;
    }
    ctx->pc = 0x1DED68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DED70u);
        ctx->pc = 0x1DED6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DED68u;
            // 0x1ded6c: 0x27a501f0  addiu       $a1, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DED70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DED70u; }
            if (ctx->pc != 0x1DED70u) { return; }
        }
        }
    }
    ctx->pc = 0x1DED70u;
label_1ded70:
    // 0x1ded70: 0x26040f40  addiu       $a0, $s0, 0xF40
    ctx->pc = 0x1ded70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3904));
label_1ded74:
    // 0x1ded74: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x1ded74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_1ded78:
    // 0x1ded78: 0xc041c3e  jal         func_1070F8
label_1ded7c:
    if (ctx->pc == 0x1DED7Cu) {
        ctx->pc = 0x1DED7Cu;
            // 0x1ded7c: 0x26260100  addiu       $a2, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->pc = 0x1DED80u;
        goto label_1ded80;
    }
    ctx->pc = 0x1DED78u;
    SET_GPR_U32(ctx, 31, 0x1DED80u);
    ctx->pc = 0x1DED7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DED78u;
            // 0x1ded7c: 0x26260100  addiu       $a2, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED80u; }
        if (ctx->pc != 0x1DED80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED80u; }
        if (ctx->pc != 0x1DED80u) { return; }
    }
    ctx->pc = 0x1DED80u;
label_1ded80:
    // 0x1ded80: 0x26040f40  addiu       $a0, $s0, 0xF40
    ctx->pc = 0x1ded80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3904));
label_1ded84:
    // 0x1ded84: 0xc041c5c  jal         func_107170
label_1ded88:
    if (ctx->pc == 0x1DED88u) {
        ctx->pc = 0x1DED88u;
            // 0x1ded88: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DED8Cu;
        goto label_1ded8c;
    }
    ctx->pc = 0x1DED84u;
    SET_GPR_U32(ctx, 31, 0x1DED8Cu);
    ctx->pc = 0x1DED88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DED84u;
            // 0x1ded88: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x107170u;
    if (runtime->hasFunction(0x107170u)) {
        auto targetFn = runtime->lookupFunction(0x107170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED8Cu; }
        if (ctx->pc != 0x1DED8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0CopyVector_0x107170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED8Cu; }
        if (ctx->pc != 0x1DED8Cu) { return; }
    }
    ctx->pc = 0x1DED8Cu;
label_1ded8c:
    // 0x1ded8c: 0x26040f40  addiu       $a0, $s0, 0xF40
    ctx->pc = 0x1ded8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 3904));
label_1ded90:
    // 0x1ded90: 0xae000f44  sw          $zero, 0xF44($s0)
    ctx->pc = 0x1ded90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3908), GPR_U32(ctx, 0));
label_1ded94:
    // 0x1ded94: 0xc041be0  jal         func_106F80
label_1ded98:
    if (ctx->pc == 0x1DED98u) {
        ctx->pc = 0x1DED98u;
            // 0x1ded98: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DED9Cu;
        goto label_1ded9c;
    }
    ctx->pc = 0x1DED94u;
    SET_GPR_U32(ctx, 31, 0x1DED9Cu);
    ctx->pc = 0x1DED98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DED94u;
            // 0x1ded98: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106F80u;
    if (runtime->hasFunction(0x106F80u)) {
        auto targetFn = runtime->lookupFunction(0x106F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED9Cu; }
        if (ctx->pc != 0x1DED9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0Normalize_0x106f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DED9Cu; }
        if (ctx->pc != 0x1DED9Cu) { return; }
    }
    ctx->pc = 0x1DED9Cu;
label_1ded9c:
    // 0x1ded9c: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1ded9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1deda0:
    // 0x1deda0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1deda0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1deda4:
    // 0x1deda4: 0xae020f54  sw          $v0, 0xF54($s0)
    ctx->pc = 0x1deda4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3924), GPR_U32(ctx, 2));
label_1deda8:
    // 0x1deda8: 0xae030f50  sw          $v1, 0xF50($s0)
    ctx->pc = 0x1deda8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3920), GPR_U32(ctx, 3));
label_1dedac:
    // 0x1dedac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1dedacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1dedb0:
    // 0x1dedb0: 0xae000f58  sw          $zero, 0xF58($s0)
    ctx->pc = 0x1dedb0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3928), GPR_U32(ctx, 0));
label_1dedb4:
    // 0x1dedb4: 0xae020f5c  sw          $v0, 0xF5C($s0)
    ctx->pc = 0x1dedb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 3932), GPR_U32(ctx, 2));
label_1dedb8:
    // 0x1dedb8: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1dedb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1dedbc:
    // 0x1dedbc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1dedbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1dedc0:
    // 0x1dedc0: 0x84630044  lh          $v1, 0x44($v1)
    ctx->pc = 0x1dedc0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 68)));
label_1dedc4:
    // 0x1dedc4: 0x12620033  beq         $s3, $v0, . + 4 + (0x33 << 2)
label_1dedc8:
    if (ctx->pc == 0x1DEDC8u) {
        ctx->pc = 0x1DEDC8u;
            // 0x1dedc8: 0xae030be8  sw          $v1, 0xBE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3048), GPR_U32(ctx, 3));
        ctx->pc = 0x1DEDCCu;
        goto label_1dedcc;
    }
    ctx->pc = 0x1DEDC4u;
    {
        const bool branch_taken_0x1dedc4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DEDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEDC4u;
            // 0x1dedc8: 0xae030be8  sw          $v1, 0xBE8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 3048), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dedc4) {
            ctx->pc = 0x1DEE94u;
            goto label_1dee94;
        }
    }
    ctx->pc = 0x1DEDCCu;
label_1dedcc:
    // 0x1dedcc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1dedccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1dedd0:
    // 0x1dedd0: 0x12680026  beq         $s3, $t0, . + 4 + (0x26 << 2)
label_1dedd4:
    if (ctx->pc == 0x1DEDD4u) {
        ctx->pc = 0x1DEDD4u;
            // 0x1dedd4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1DEDD8u;
        goto label_1dedd8;
    }
    ctx->pc = 0x1DEDD0u;
    {
        const bool branch_taken_0x1dedd0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 8));
        ctx->pc = 0x1DEDD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEDD0u;
            // 0x1dedd4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dedd0) {
            ctx->pc = 0x1DEE6Cu;
            goto label_1dee6c;
        }
    }
    ctx->pc = 0x1DEDD8u;
label_1dedd8:
    // 0x1dedd8: 0x1262001a  beq         $s3, $v0, . + 4 + (0x1A << 2)
label_1deddc:
    if (ctx->pc == 0x1DEDDCu) {
        ctx->pc = 0x1DEDE0u;
        goto label_1dede0;
    }
    ctx->pc = 0x1DEDD8u;
    {
        const bool branch_taken_0x1dedd8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1dedd8) {
            ctx->pc = 0x1DEE44u;
            goto label_1dee44;
        }
    }
    ctx->pc = 0x1DEDE0u;
label_1dede0:
    // 0x1dede0: 0x1260000f  beqz        $s3, . + 4 + (0xF << 2)
label_1dede4:
    if (ctx->pc == 0x1DEDE4u) {
        ctx->pc = 0x1DEDE4u;
            // 0x1dede4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1DEDE8u;
        goto label_1dede8;
    }
    ctx->pc = 0x1DEDE0u;
    {
        const bool branch_taken_0x1dede0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEDE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEDE0u;
            // 0x1dede4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dede0) {
            ctx->pc = 0x1DEE20u;
            goto label_1dee20;
        }
    }
    ctx->pc = 0x1DEDE8u;
label_1dede8:
    // 0x1dede8: 0x12620003  beq         $s3, $v0, . + 4 + (0x3 << 2)
label_1dedec:
    if (ctx->pc == 0x1DEDECu) {
        ctx->pc = 0x1DEDF0u;
        goto label_1dedf0;
    }
    ctx->pc = 0x1DEDE8u;
    {
        const bool branch_taken_0x1dede8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1dede8) {
            ctx->pc = 0x1DEDF8u;
            goto label_1dedf8;
        }
    }
    ctx->pc = 0x1DEDF0u;
label_1dedf0:
    // 0x1dedf0: 0x10000028  b           . + 4 + (0x28 << 2)
label_1dedf4:
    if (ctx->pc == 0x1DEDF4u) {
        ctx->pc = 0x1DEDF8u;
        goto label_1dedf8;
    }
    ctx->pc = 0x1DEDF0u;
    {
        const bool branch_taken_0x1dedf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dedf0) {
            ctx->pc = 0x1DEE94u;
            goto label_1dee94;
        }
    }
    ctx->pc = 0x1DEDF8u;
label_1dedf8:
    // 0x1dedf8: 0x240500b4  addiu       $a1, $zero, 0xB4
    ctx->pc = 0x1dedf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_1dedfc:
    // 0x1dedfc: 0x26040734  addiu       $a0, $s0, 0x734
    ctx->pc = 0x1dedfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1844));
label_1dee00:
    // 0x1dee00: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dee00u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dee04:
    // 0x1dee04: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1dee04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1dee08:
    // 0x1dee08: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1dee08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1dee0c:
    // 0x1dee0c: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x1dee0cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1dee10:
    // 0x1dee10: 0xc070488  jal         func_1C1220
label_1dee14:
    if (ctx->pc == 0x1DEE14u) {
        ctx->pc = 0x1DEE14u;
            // 0x1dee14: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DEE18u;
        goto label_1dee18;
    }
    ctx->pc = 0x1DEE10u;
    SET_GPR_U32(ctx, 31, 0x1DEE18u);
    ctx->pc = 0x1DEE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEE10u;
            // 0x1dee14: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1220u;
    if (runtime->hasFunction(0x1C1220u)) {
        auto targetFn = runtime->lookupFunction(0x1C1220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEE18u; }
        if (ctx->pc != 0x1DEE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAnim__12CPalletAnimeFssssss_0x1c1220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEE18u; }
        if (ctx->pc != 0x1DEE18u) { return; }
    }
    ctx->pc = 0x1DEE18u;
label_1dee18:
    // 0x1dee18: 0x10000027  b           . + 4 + (0x27 << 2)
label_1dee1c:
    if (ctx->pc == 0x1DEE1Cu) {
        ctx->pc = 0x1DEE20u;
        goto label_1dee20;
    }
    ctx->pc = 0x1DEE18u;
    {
        const bool branch_taken_0x1dee18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dee18) {
            ctx->pc = 0x1DEEB8u;
            goto label_1deeb8;
        }
    }
    ctx->pc = 0x1DEE20u;
label_1dee20:
    // 0x1dee20: 0x26040734  addiu       $a0, $s0, 0x734
    ctx->pc = 0x1dee20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1844));
label_1dee24:
    // 0x1dee24: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1dee24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1dee28:
    // 0x1dee28: 0x24060060  addiu       $a2, $zero, 0x60
    ctx->pc = 0x1dee28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1dee2c:
    // 0x1dee2c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1dee2cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dee30:
    // 0x1dee30: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x1dee30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1dee34:
    // 0x1dee34: 0xc070488  jal         func_1C1220
label_1dee38:
    if (ctx->pc == 0x1DEE38u) {
        ctx->pc = 0x1DEE38u;
            // 0x1dee38: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DEE3Cu;
        goto label_1dee3c;
    }
    ctx->pc = 0x1DEE34u;
    SET_GPR_U32(ctx, 31, 0x1DEE3Cu);
    ctx->pc = 0x1DEE38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEE34u;
            // 0x1dee38: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1220u;
    if (runtime->hasFunction(0x1C1220u)) {
        auto targetFn = runtime->lookupFunction(0x1C1220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEE3Cu; }
        if (ctx->pc != 0x1DEE3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAnim__12CPalletAnimeFssssss_0x1c1220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEE3Cu; }
        if (ctx->pc != 0x1DEE3Cu) { return; }
    }
    ctx->pc = 0x1DEE3Cu;
label_1dee3c:
    // 0x1dee3c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_1dee40:
    if (ctx->pc == 0x1DEE40u) {
        ctx->pc = 0x1DEE44u;
        goto label_1dee44;
    }
    ctx->pc = 0x1DEE3Cu;
    {
        const bool branch_taken_0x1dee3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dee3c) {
            ctx->pc = 0x1DEEB8u;
            goto label_1deeb8;
        }
    }
    ctx->pc = 0x1DEE44u;
label_1dee44:
    // 0x1dee44: 0x0  nop
    ctx->pc = 0x1dee44u;
    // NOP
label_1dee48:
    // 0x1dee48: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x1dee48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_1dee4c:
    // 0x1dee4c: 0x26040734  addiu       $a0, $s0, 0x734
    ctx->pc = 0x1dee4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1844));
label_1dee50:
    // 0x1dee50: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x1dee50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
label_1dee54:
    // 0x1dee54: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1dee54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1dee58:
    // 0x1dee58: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x1dee58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1dee5c:
    // 0x1dee5c: 0xc070488  jal         func_1C1220
label_1dee60:
    if (ctx->pc == 0x1DEE60u) {
        ctx->pc = 0x1DEE60u;
            // 0x1dee60: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DEE64u;
        goto label_1dee64;
    }
    ctx->pc = 0x1DEE5Cu;
    SET_GPR_U32(ctx, 31, 0x1DEE64u);
    ctx->pc = 0x1DEE60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEE5Cu;
            // 0x1dee60: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1220u;
    if (runtime->hasFunction(0x1C1220u)) {
        auto targetFn = runtime->lookupFunction(0x1C1220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEE64u; }
        if (ctx->pc != 0x1DEE64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAnim__12CPalletAnimeFssssss_0x1c1220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEE64u; }
        if (ctx->pc != 0x1DEE64u) { return; }
    }
    ctx->pc = 0x1DEE64u;
label_1dee64:
    // 0x1dee64: 0x10000014  b           . + 4 + (0x14 << 2)
label_1dee68:
    if (ctx->pc == 0x1DEE68u) {
        ctx->pc = 0x1DEE6Cu;
        goto label_1dee6c;
    }
    ctx->pc = 0x1DEE64u;
    {
        const bool branch_taken_0x1dee64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dee64) {
            ctx->pc = 0x1DEEB8u;
            goto label_1deeb8;
        }
    }
    ctx->pc = 0x1DEE6Cu;
label_1dee6c:
    // 0x1dee6c: 0x0  nop
    ctx->pc = 0x1dee6cu;
    // NOP
label_1dee70:
    // 0x1dee70: 0x26040734  addiu       $a0, $s0, 0x734
    ctx->pc = 0x1dee70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1844));
label_1dee74:
    // 0x1dee74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1dee74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1dee78:
    // 0x1dee78: 0x240600b4  addiu       $a2, $zero, 0xB4
    ctx->pc = 0x1dee78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_1dee7c:
    // 0x1dee7c: 0x240700ff  addiu       $a3, $zero, 0xFF
    ctx->pc = 0x1dee7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1dee80:
    // 0x1dee80: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x1dee80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1dee84:
    // 0x1dee84: 0xc070488  jal         func_1C1220
label_1dee88:
    if (ctx->pc == 0x1DEE88u) {
        ctx->pc = 0x1DEE88u;
            // 0x1dee88: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DEE8Cu;
        goto label_1dee8c;
    }
    ctx->pc = 0x1DEE84u;
    SET_GPR_U32(ctx, 31, 0x1DEE8Cu);
    ctx->pc = 0x1DEE88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEE84u;
            // 0x1dee88: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1220u;
    if (runtime->hasFunction(0x1C1220u)) {
        auto targetFn = runtime->lookupFunction(0x1C1220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEE8Cu; }
        if (ctx->pc != 0x1DEE8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAnim__12CPalletAnimeFssssss_0x1c1220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEE8Cu; }
        if (ctx->pc != 0x1DEE8Cu) { return; }
    }
    ctx->pc = 0x1DEE8Cu;
label_1dee8c:
    // 0x1dee8c: 0x1000000a  b           . + 4 + (0xA << 2)
label_1dee90:
    if (ctx->pc == 0x1DEE90u) {
        ctx->pc = 0x1DEE94u;
        goto label_1dee94;
    }
    ctx->pc = 0x1DEE8Cu;
    {
        const bool branch_taken_0x1dee8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1dee8c) {
            ctx->pc = 0x1DEEB8u;
            goto label_1deeb8;
        }
    }
    ctx->pc = 0x1DEE94u;
label_1dee94:
    // 0x1dee94: 0x0  nop
    ctx->pc = 0x1dee94u;
    // NOP
label_1dee98:
    // 0x1dee98: 0x26040734  addiu       $a0, $s0, 0x734
    ctx->pc = 0x1dee98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1844));
label_1dee9c:
    // 0x1dee9c: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1dee9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1deea0:
    // 0x1deea0: 0x240600b4  addiu       $a2, $zero, 0xB4
    ctx->pc = 0x1deea0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
label_1deea4:
    // 0x1deea4: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x1deea4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1deea8:
    // 0x1deea8: 0x24080002  addiu       $t0, $zero, 0x2
    ctx->pc = 0x1deea8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1deeac:
    // 0x1deeac: 0x2409000a  addiu       $t1, $zero, 0xA
    ctx->pc = 0x1deeacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1deeb0:
    // 0x1deeb0: 0xc070488  jal         func_1C1220
label_1deeb4:
    if (ctx->pc == 0x1DEEB4u) {
        ctx->pc = 0x1DEEB4u;
            // 0x1deeb4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DEEB8u;
        goto label_1deeb8;
    }
    ctx->pc = 0x1DEEB0u;
    SET_GPR_U32(ctx, 31, 0x1DEEB8u);
    ctx->pc = 0x1DEEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEEB0u;
            // 0x1deeb4: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1220u;
    if (runtime->hasFunction(0x1C1220u)) {
        auto targetFn = runtime->lookupFunction(0x1C1220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEEB8u; }
        if (ctx->pc != 0x1DEEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAnim__12CPalletAnimeFssssss_0x1c1220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEEB8u; }
        if (ctx->pc != 0x1DEEB8u) { return; }
    }
    ctx->pc = 0x1DEEB8u;
label_1deeb8:
    // 0x1deeb8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1deeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1deebc:
    // 0x1deebc: 0xa6040bf8  sh          $a0, 0xBF8($s0)
    ctx->pc = 0x1deebcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 3064), (uint16_t)GPR_U32(ctx, 4));
label_1deec0:
    // 0x1deec0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1deec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1deec4:
    // 0x1deec4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1deec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1deec8:
    // 0x1deec8: 0x80630018  lb          $v1, 0x18($v1)
    ctx->pc = 0x1deec8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
label_1deecc:
    // 0x1deecc: 0x10620023  beq         $v1, $v0, . + 4 + (0x23 << 2)
label_1deed0:
    if (ctx->pc == 0x1DEED0u) {
        ctx->pc = 0x1DEED0u;
            // 0x1deed0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1DEED4u;
        goto label_1deed4;
    }
    ctx->pc = 0x1DEECCu;
    {
        const bool branch_taken_0x1deecc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DEED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEECCu;
            // 0x1deed0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deecc) {
            ctx->pc = 0x1DEF5Cu;
            goto label_1def5c;
        }
    }
    ctx->pc = 0x1DEED4u;
label_1deed4:
    // 0x1deed4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1deed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1deed8:
    // 0x1deed8: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
label_1deedc:
    if (ctx->pc == 0x1DEEDCu) {
        ctx->pc = 0x1DEEDCu;
            // 0x1deedc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1DEEE0u;
        goto label_1deee0;
    }
    ctx->pc = 0x1DEED8u;
    {
        const bool branch_taken_0x1deed8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DEEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEED8u;
            // 0x1deedc: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deed8) {
            ctx->pc = 0x1DEF5Cu;
            goto label_1def5c;
        }
    }
    ctx->pc = 0x1DEEE0u;
label_1deee0:
    // 0x1deee0: 0x1062001e  beq         $v1, $v0, . + 4 + (0x1E << 2)
label_1deee4:
    if (ctx->pc == 0x1DEEE4u) {
        ctx->pc = 0x1DEEE4u;
            // 0x1deee4: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x1DEEE8u;
        goto label_1deee8;
    }
    ctx->pc = 0x1DEEE0u;
    {
        const bool branch_taken_0x1deee0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DEEE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEEE0u;
            // 0x1deee4: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deee0) {
            ctx->pc = 0x1DEF5Cu;
            goto label_1def5c;
        }
    }
    ctx->pc = 0x1DEEE8u;
label_1deee8:
    // 0x1deee8: 0x1062001c  beq         $v1, $v0, . + 4 + (0x1C << 2)
label_1deeec:
    if (ctx->pc == 0x1DEEECu) {
        ctx->pc = 0x1DEEECu;
            // 0x1deeec: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x1DEEF0u;
        goto label_1deef0;
    }
    ctx->pc = 0x1DEEE8u;
    {
        const bool branch_taken_0x1deee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DEEECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEEE8u;
            // 0x1deeec: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deee8) {
            ctx->pc = 0x1DEF5Cu;
            goto label_1def5c;
        }
    }
    ctx->pc = 0x1DEEF0u;
label_1deef0:
    // 0x1deef0: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
label_1deef4:
    if (ctx->pc == 0x1DEEF4u) {
        ctx->pc = 0x1DEEF4u;
            // 0x1deef4: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x1DEEF8u;
        goto label_1deef8;
    }
    ctx->pc = 0x1DEEF0u;
    {
        const bool branch_taken_0x1deef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DEEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEEF0u;
            // 0x1deef4: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deef0) {
            ctx->pc = 0x1DEF5Cu;
            goto label_1def5c;
        }
    }
    ctx->pc = 0x1DEEF8u;
label_1deef8:
    // 0x1deef8: 0x10620017  beq         $v1, $v0, . + 4 + (0x17 << 2)
label_1deefc:
    if (ctx->pc == 0x1DEEFCu) {
        ctx->pc = 0x1DEEFCu;
            // 0x1deefc: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x1DEF00u;
        goto label_1def00;
    }
    ctx->pc = 0x1DEEF8u;
    {
        const bool branch_taken_0x1deef8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DEEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEEF8u;
            // 0x1deefc: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1deef8) {
            ctx->pc = 0x1DEF58u;
            goto label_1def58;
        }
    }
    ctx->pc = 0x1DEF00u;
label_1def00:
    // 0x1def00: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_1def04:
    if (ctx->pc == 0x1DEF04u) {
        ctx->pc = 0x1DEF08u;
        goto label_1def08;
    }
    ctx->pc = 0x1DEF00u;
    {
        const bool branch_taken_0x1def00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1def00) {
            ctx->pc = 0x1DEF50u;
            goto label_1def50;
        }
    }
    ctx->pc = 0x1DEF08u;
label_1def08:
    // 0x1def08: 0x10640011  beq         $v1, $a0, . + 4 + (0x11 << 2)
label_1def0c:
    if (ctx->pc == 0x1DEF0Cu) {
        ctx->pc = 0x1DEF0Cu;
            // 0x1def0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1DEF10u;
        goto label_1def10;
    }
    ctx->pc = 0x1DEF08u;
    {
        const bool branch_taken_0x1def08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x1DEF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEF08u;
            // 0x1def0c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1def08) {
            ctx->pc = 0x1DEF50u;
            goto label_1def50;
        }
    }
    ctx->pc = 0x1DEF10u;
label_1def10:
    // 0x1def10: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_1def14:
    if (ctx->pc == 0x1DEF14u) {
        ctx->pc = 0x1DEF18u;
        goto label_1def18;
    }
    ctx->pc = 0x1DEF10u;
    {
        const bool branch_taken_0x1def10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1def10) {
            ctx->pc = 0x1DEF48u;
            goto label_1def48;
        }
    }
    ctx->pc = 0x1DEF18u;
label_1def18:
    // 0x1def18: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_1def1c:
    if (ctx->pc == 0x1DEF1Cu) {
        ctx->pc = 0x1DEF1Cu;
            // 0x1def1c: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->pc = 0x1DEF20u;
        goto label_1def20;
    }
    ctx->pc = 0x1DEF18u;
    {
        const bool branch_taken_0x1def18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEF1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEF18u;
            // 0x1def1c: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1def18) {
            ctx->pc = 0x1DEF40u;
            goto label_1def40;
        }
    }
    ctx->pc = 0x1DEF20u;
label_1def20:
    // 0x1def20: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_1def24:
    if (ctx->pc == 0x1DEF24u) {
        ctx->pc = 0x1DEF24u;
            // 0x1def24: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->pc = 0x1DEF28u;
        goto label_1def28;
    }
    ctx->pc = 0x1DEF20u;
    {
        const bool branch_taken_0x1def20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DEF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEF20u;
            // 0x1def24: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1def20) {
            ctx->pc = 0x1DEF40u;
            goto label_1def40;
        }
    }
    ctx->pc = 0x1DEF28u;
label_1def28:
    // 0x1def28: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_1def2c:
    if (ctx->pc == 0x1DEF2Cu) {
        ctx->pc = 0x1DEF2Cu;
            // 0x1def2c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x1DEF30u;
        goto label_1def30;
    }
    ctx->pc = 0x1DEF28u;
    {
        const bool branch_taken_0x1def28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DEF2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEF28u;
            // 0x1def2c: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1def28) {
            ctx->pc = 0x1DEF40u;
            goto label_1def40;
        }
    }
    ctx->pc = 0x1DEF30u;
label_1def30:
    // 0x1def30: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1def34:
    if (ctx->pc == 0x1DEF34u) {
        ctx->pc = 0x1DEF38u;
        goto label_1def38;
    }
    ctx->pc = 0x1DEF30u;
    {
        const bool branch_taken_0x1def30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1def30) {
            ctx->pc = 0x1DEF40u;
            goto label_1def40;
        }
    }
    ctx->pc = 0x1DEF38u;
label_1def38:
    // 0x1def38: 0x10000008  b           . + 4 + (0x8 << 2)
label_1def3c:
    if (ctx->pc == 0x1DEF3Cu) {
        ctx->pc = 0x1DEF40u;
        goto label_1def40;
    }
    ctx->pc = 0x1DEF38u;
    {
        const bool branch_taken_0x1def38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1def38) {
            ctx->pc = 0x1DEF5Cu;
            goto label_1def5c;
        }
    }
    ctx->pc = 0x1DEF40u;
label_1def40:
    // 0x1def40: 0x10000006  b           . + 4 + (0x6 << 2)
label_1def44:
    if (ctx->pc == 0x1DEF44u) {
        ctx->pc = 0x1DEF44u;
            // 0x1def44: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x1DEF48u;
        goto label_1def48;
    }
    ctx->pc = 0x1DEF40u;
    {
        const bool branch_taken_0x1def40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEF40u;
            // 0x1def44: 0x2405001c  addiu       $a1, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1def40) {
            ctx->pc = 0x1DEF5Cu;
            goto label_1def5c;
        }
    }
    ctx->pc = 0x1DEF48u;
label_1def48:
    // 0x1def48: 0x10000004  b           . + 4 + (0x4 << 2)
label_1def4c:
    if (ctx->pc == 0x1DEF4Cu) {
        ctx->pc = 0x1DEF4Cu;
            // 0x1def4c: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->pc = 0x1DEF50u;
        goto label_1def50;
    }
    ctx->pc = 0x1DEF48u;
    {
        const bool branch_taken_0x1def48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEF48u;
            // 0x1def4c: 0x2405001a  addiu       $a1, $zero, 0x1A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1def48) {
            ctx->pc = 0x1DEF5Cu;
            goto label_1def5c;
        }
    }
    ctx->pc = 0x1DEF50u;
label_1def50:
    // 0x1def50: 0x10000002  b           . + 4 + (0x2 << 2)
label_1def54:
    if (ctx->pc == 0x1DEF54u) {
        ctx->pc = 0x1DEF54u;
            // 0x1def54: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->pc = 0x1DEF58u;
        goto label_1def58;
    }
    ctx->pc = 0x1DEF50u;
    {
        const bool branch_taken_0x1def50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DEF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEF50u;
            // 0x1def54: 0x2405001b  addiu       $a1, $zero, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1def50) {
            ctx->pc = 0x1DEF5Cu;
            goto label_1def5c;
        }
    }
    ctx->pc = 0x1DEF58u;
label_1def58:
    // 0x1def58: 0x24050019  addiu       $a1, $zero, 0x19
    ctx->pc = 0x1def58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_1def5c:
    // 0x1def5c: 0x0  nop
    ctx->pc = 0x1def5cu;
    // NOP
label_1def60:
    // 0x1def60: 0x4a00004  bltz        $a1, . + 4 + (0x4 << 2)
label_1def64:
    if (ctx->pc == 0x1DEF64u) {
        ctx->pc = 0x1DEF68u;
        goto label_1def68;
    }
    ctx->pc = 0x1DEF60u;
    {
        const bool branch_taken_0x1def60 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1def60) {
            ctx->pc = 0x1DEF74u;
            goto label_1def74;
        }
    }
    ctx->pc = 0x1DEF68u;
label_1def68:
    // 0x1def68: 0x8fa40150  lw          $a0, 0x150($sp)
    ctx->pc = 0x1def68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_1def6c:
    // 0x1def6c: 0xc063818  jal         func_18E060
label_1def70:
    if (ctx->pc == 0x1DEF70u) {
        ctx->pc = 0x1DEF70u;
            // 0x1def70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DEF74u;
        goto label_1def74;
    }
    ctx->pc = 0x1DEF6Cu;
    SET_GPR_U32(ctx, 31, 0x1DEF74u);
    ctx->pc = 0x1DEF70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEF6Cu;
            // 0x1def70: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEF74u; }
        if (ctx->pc != 0x1DEF74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEF74u; }
        if (ctx->pc != 0x1DEF74u) { return; }
    }
    ctx->pc = 0x1DEF74u;
label_1def74:
    // 0x1def74: 0x0  nop
    ctx->pc = 0x1def74u;
    // NOP
label_1def78:
    // 0x1def78: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1def78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1def7c:
    // 0x1def7c: 0x8fa201ac  lw          $v0, 0x1AC($sp)
    ctx->pc = 0x1def7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 428)));
label_1def80:
    // 0x1def80: 0x84660026  lh          $a2, 0x26($v1)
    ctx->pc = 0x1def80u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 38)));
label_1def84:
    // 0x1def84: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1def84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1def88:
    // 0x1def88: 0xc077680  jal         func_1DDA00
label_1def8c:
    if (ctx->pc == 0x1DEF8Cu) {
        ctx->pc = 0x1DEF8Cu;
            // 0x1def8c: 0x26250100  addiu       $a1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->pc = 0x1DEF90u;
        goto label_1def90;
    }
    ctx->pc = 0x1DEF88u;
    SET_GPR_U32(ctx, 31, 0x1DEF90u);
    ctx->pc = 0x1DEF8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEF88u;
            // 0x1def8c: 0x26250100  addiu       $a1, $s1, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DDA00u;
    if (runtime->hasFunction(0x1DDA00u)) {
        auto targetFn = runtime->lookupFunction(0x1DDA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEF90u; }
        if (ctx->pc != 0x1DEF90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        HitEffectSet__FP6CScenePfi_0x1dda00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEF90u; }
        if (ctx->pc != 0x1DEF90u) { return; }
    }
    ctx->pc = 0x1DEF90u;
label_1def90:
    // 0x1def90: 0x6610004  bgez        $s3, . + 4 + (0x4 << 2)
label_1def94:
    if (ctx->pc == 0x1DEF94u) {
        ctx->pc = 0x1DEF94u;
            // 0x1def94: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x1DEF98u;
        goto label_1def98;
    }
    ctx->pc = 0x1DEF90u;
    {
        const bool branch_taken_0x1def90 = (GPR_S32(ctx, 19) >= 0);
        ctx->pc = 0x1DEF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEF90u;
            // 0x1def94: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1def90) {
            ctx->pc = 0x1DEFA4u;
            goto label_1defa4;
        }
    }
    ctx->pc = 0x1DEF98u;
label_1def98:
    // 0x1def98: 0x8c22f208  lw          $v0, -0xDF8($at)
    ctx->pc = 0x1def98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963720)));
label_1def9c:
    // 0x1def9c: 0x18400070  blez        $v0, . + 4 + (0x70 << 2)
label_1defa0:
    if (ctx->pc == 0x1DEFA0u) {
        ctx->pc = 0x1DEFA4u;
        goto label_1defa4;
    }
    ctx->pc = 0x1DEF9Cu;
    {
        const bool branch_taken_0x1def9c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1def9c) {
            ctx->pc = 0x1DF160u;
            goto label_1df160;
        }
    }
    ctx->pc = 0x1DEFA4u;
label_1defa4:
    // 0x1defa4: 0x0  nop
    ctx->pc = 0x1defa4u;
    // NOP
label_1defa8:
    // 0x1defa8: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x1defa8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_1defac:
    // 0x1defac: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1defacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1defb0:
    // 0x1defb0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1defb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1defb4:
    // 0x1defb4: 0x84420090  lh          $v0, 0x90($v0)
    ctx->pc = 0x1defb4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 144)));
label_1defb8:
    // 0x1defb8: 0x8c23f208  lw          $v1, -0xDF8($at)
    ctx->pc = 0x1defb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963720)));
label_1defbc:
    // 0x1defbc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1defbcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1defc0:
    // 0x1defc0: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
label_1defc4:
    if (ctx->pc == 0x1DEFC4u) {
        ctx->pc = 0x1DEFC4u;
            // 0x1defc4: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1DEFC8u;
        goto label_1defc8;
    }
    ctx->pc = 0x1DEFC0u;
    {
        const bool branch_taken_0x1defc0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1DEFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DEFC0u;
            // 0x1defc4: 0x46800520  cvt.s.w     $f20, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1defc0) {
            ctx->pc = 0x1DEFD8u;
            goto label_1defd8;
        }
    }
    ctx->pc = 0x1DEFC8u;
label_1defc8:
    // 0x1defc8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1defc8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1defcc:
    // 0x1defcc: 0x2473ffff  addiu       $s3, $v1, -0x1
    ctx->pc = 0x1defccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_1defd0:
    // 0x1defd0: 0xc434f20c  lwc1        $f20, -0xDF4($at)
    ctx->pc = 0x1defd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294963724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1defd4:
    // 0x1defd4: 0x0  nop
    ctx->pc = 0x1defd4u;
    // NOP
label_1defd8:
    // 0x1defd8: 0xc072f4c  jal         func_1CBD30
label_1defdc:
    if (ctx->pc == 0x1DEFDCu) {
        ctx->pc = 0x1DEFE0u;
        goto label_1defe0;
    }
    ctx->pc = 0x1DEFD8u;
    SET_GPR_U32(ctx, 31, 0x1DEFE0u);
    ctx->pc = 0x1CBD30u;
    if (runtime->hasFunction(0x1CBD30u)) {
        auto targetFn = runtime->lookupFunction(0x1CBD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEFE0u; }
        if (ctx->pc != 0x1DEFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetWeaponEffect__Fv_0x1cbd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DEFE0u; }
        if (ctx->pc != 0x1DEFE0u) { return; }
    }
    ctx->pc = 0x1DEFE0u;
label_1defe0:
    // 0x1defe0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1defe4:
    if (ctx->pc == 0x1DEFE4u) {
        ctx->pc = 0x1DEFE8u;
        goto label_1defe8;
    }
    ctx->pc = 0x1DEFE0u;
    {
        const bool branch_taken_0x1defe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1defe0) {
            ctx->pc = 0x1DF010u;
            goto label_1df010;
        }
    }
    ctx->pc = 0x1DEFE8u;
label_1defe8:
    // 0x1defe8: 0xc601010c  lwc1        $f1, 0x10C($s0)
    ctx->pc = 0x1defe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1defec:
    // 0x1defec: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1defecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1deff0:
    // 0x1deff0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1deff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_1deff4:
    // 0x1deff4: 0x260512d0  addiu       $a1, $s0, 0x12D0
    ctx->pc = 0x1deff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4816));
label_1deff8:
    // 0x1deff8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1deff8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1deffc:
    // 0x1deffc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1deffcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1df000:
    // 0x1df000: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1df000u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1df004:
    // 0x1df004: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1df004u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1df008:
    // 0x1df008: 0xc071718  jal         func_1C5C60
label_1df00c:
    if (ctx->pc == 0x1DF00Cu) {
        ctx->pc = 0x1DF00Cu;
            // 0x1df00c: 0x46010342  mul.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x1DF010u;
        goto label_1df010;
    }
    ctx->pc = 0x1DF008u;
    SET_GPR_U32(ctx, 31, 0x1DF010u);
    ctx->pc = 0x1DF00Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF008u;
            // 0x1df00c: 0x46010342  mul.s       $f13, $f0, $f1 (Delay Slot)
        ctx->f[13] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5C60u;
    if (runtime->hasFunction(0x1C5C60u)) {
        auto targetFn = runtime->lookupFunction(0x1C5C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF010u; }
        if (ctx->pc != 0x1DF010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__14CWeaponElementFPA4_fPffif_0x1c5c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF010u; }
        if (ctx->pc != 0x1DF010u) { return; }
    }
    ctx->pc = 0x1DF010u;
label_1df010:
    // 0x1df010: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1df010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1df014:
    // 0x1df014: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1df014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1df018:
    // 0x1df018: 0x80630018  lb          $v1, 0x18($v1)
    ctx->pc = 0x1df018u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 24)));
label_1df01c:
    // 0x1df01c: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_1df020:
    if (ctx->pc == 0x1DF020u) {
        ctx->pc = 0x1DF020u;
            // 0x1df020: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x1DF024u;
        goto label_1df024;
    }
    ctx->pc = 0x1DF01Cu;
    {
        const bool branch_taken_0x1df01c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF01Cu;
            // 0x1df020: 0x2402000b  addiu       $v0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df01c) {
            ctx->pc = 0x1DF044u;
            goto label_1df044;
        }
    }
    ctx->pc = 0x1DF024u;
label_1df024:
    // 0x1df024: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_1df028:
    if (ctx->pc == 0x1DF028u) {
        ctx->pc = 0x1DF028u;
            // 0x1df028: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1DF02Cu;
        goto label_1df02c;
    }
    ctx->pc = 0x1DF024u;
    {
        const bool branch_taken_0x1df024 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF024u;
            // 0x1df028: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df024) {
            ctx->pc = 0x1DF044u;
            goto label_1df044;
        }
    }
    ctx->pc = 0x1DF02Cu;
label_1df02c:
    // 0x1df02c: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_1df030:
    if (ctx->pc == 0x1DF030u) {
        ctx->pc = 0x1DF034u;
        goto label_1df034;
    }
    ctx->pc = 0x1DF02Cu;
    {
        const bool branch_taken_0x1df02c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1df02c) {
            ctx->pc = 0x1DF044u;
            goto label_1df044;
        }
    }
    ctx->pc = 0x1DF034u;
label_1df034:
    // 0x1df034: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_1df038:
    if (ctx->pc == 0x1DF038u) {
        ctx->pc = 0x1DF03Cu;
        goto label_1df03c;
    }
    ctx->pc = 0x1DF034u;
    {
        const bool branch_taken_0x1df034 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df034) {
            ctx->pc = 0x1DF044u;
            goto label_1df044;
        }
    }
    ctx->pc = 0x1DF03Cu;
label_1df03c:
    // 0x1df03c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1df040:
    if (ctx->pc == 0x1DF040u) {
        ctx->pc = 0x1DF044u;
        goto label_1df044;
    }
    ctx->pc = 0x1DF03Cu;
    {
        const bool branch_taken_0x1df03c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df03c) {
            ctx->pc = 0x1DF050u;
            goto label_1df050;
        }
    }
    ctx->pc = 0x1DF044u;
label_1df044:
    // 0x1df044: 0x0  nop
    ctx->pc = 0x1df044u;
    // NOP
label_1df048:
    // 0x1df048: 0x10000002  b           . + 4 + (0x2 << 2)
label_1df04c:
    if (ctx->pc == 0x1DF04Cu) {
        ctx->pc = 0x1DF04Cu;
            // 0x1df04c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1DF050u;
        goto label_1df050;
    }
    ctx->pc = 0x1DF048u;
    {
        const bool branch_taken_0x1df048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF04Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF048u;
            // 0x1df04c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df048) {
            ctx->pc = 0x1DF054u;
            goto label_1df054;
        }
    }
    ctx->pc = 0x1DF050u;
label_1df050:
    // 0x1df050: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1df050u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1df054:
    // 0x1df054: 0x0  nop
    ctx->pc = 0x1df054u;
    // NOP
label_1df058:
    // 0x1df058: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
label_1df05c:
    if (ctx->pc == 0x1DF05Cu) {
        ctx->pc = 0x1DF05Cu;
            // 0x1df05c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1DF060u;
        goto label_1df060;
    }
    ctx->pc = 0x1DF058u;
    {
        const bool branch_taken_0x1df058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF05Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF058u;
            // 0x1df05c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df058) {
            ctx->pc = 0x1DF160u;
            goto label_1df160;
        }
    }
    ctx->pc = 0x1DF060u;
label_1df060:
    // 0x1df060: 0x12620030  beq         $s3, $v0, . + 4 + (0x30 << 2)
label_1df064:
    if (ctx->pc == 0x1DF064u) {
        ctx->pc = 0x1DF064u;
            // 0x1df064: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1DF068u;
        goto label_1df068;
    }
    ctx->pc = 0x1DF060u;
    {
        const bool branch_taken_0x1df060 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF060u;
            // 0x1df064: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df060) {
            ctx->pc = 0x1DF124u;
            goto label_1df124;
        }
    }
    ctx->pc = 0x1DF068u;
label_1df068:
    // 0x1df068: 0x12620023  beq         $s3, $v0, . + 4 + (0x23 << 2)
label_1df06c:
    if (ctx->pc == 0x1DF06Cu) {
        ctx->pc = 0x1DF06Cu;
            // 0x1df06c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1DF070u;
        goto label_1df070;
    }
    ctx->pc = 0x1DF068u;
    {
        const bool branch_taken_0x1df068 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x1DF06Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF068u;
            // 0x1df06c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df068) {
            ctx->pc = 0x1DF0F8u;
            goto label_1df0f8;
        }
    }
    ctx->pc = 0x1DF070u;
label_1df070:
    // 0x1df070: 0x12620013  beq         $s3, $v0, . + 4 + (0x13 << 2)
label_1df074:
    if (ctx->pc == 0x1DF074u) {
        ctx->pc = 0x1DF078u;
        goto label_1df078;
    }
    ctx->pc = 0x1DF070u;
    {
        const bool branch_taken_0x1df070 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        if (branch_taken_0x1df070) {
            ctx->pc = 0x1DF0C0u;
            goto label_1df0c0;
        }
    }
    ctx->pc = 0x1DF078u;
label_1df078:
    // 0x1df078: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_1df07c:
    if (ctx->pc == 0x1DF07Cu) {
        ctx->pc = 0x1DF080u;
        goto label_1df080;
    }
    ctx->pc = 0x1DF078u;
    {
        const bool branch_taken_0x1df078 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df078) {
            ctx->pc = 0x1DF088u;
            goto label_1df088;
        }
    }
    ctx->pc = 0x1DF080u;
label_1df080:
    // 0x1df080: 0x10000037  b           . + 4 + (0x37 << 2)
label_1df084:
    if (ctx->pc == 0x1DF084u) {
        ctx->pc = 0x1DF088u;
        goto label_1df088;
    }
    ctx->pc = 0x1DF080u;
    {
        const bool branch_taken_0x1df080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df080) {
            ctx->pc = 0x1DF160u;
            goto label_1df160;
        }
    }
    ctx->pc = 0x1DF088u;
label_1df088:
    // 0x1df088: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1df088u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_1df08c:
    // 0x1df08c: 0xc601010c  lwc1        $f1, 0x10C($s0)
    ctx->pc = 0x1df08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1df090:
    // 0x1df090: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df090u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1df094:
    // 0x1df094: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1df094u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1df098:
    // 0x1df098: 0xc0a248c  jal         func_289230
label_1df09c:
    if (ctx->pc == 0x1DF09Cu) {
        ctx->pc = 0x1DF09Cu;
            // 0x1df09c: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x1DF0A0u;
        goto label_1df0a0;
    }
    ctx->pc = 0x1DF098u;
    SET_GPR_U32(ctx, 31, 0x1DF0A0u);
    ctx->pc = 0x1DF09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF098u;
            // 0x1df09c: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF0A0u; }
        if (ctx->pc != 0x1DF0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF0A0u; }
        if (ctx->pc != 0x1DF0A0u) { return; }
    }
    ctx->pc = 0x1DF0A0u;
label_1df0a0:
    // 0x1df0a0: 0x3c0401ec  lui         $a0, 0x1EC
    ctx->pc = 0x1df0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)492 << 16));
label_1df0a4:
    // 0x1df0a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1df0a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1df0a8:
    // 0x1df0a8: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1df0a8u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1df0ac:
    // 0x1df0ac: 0x248450e0  addiu       $a0, $a0, 0x50E0
    ctx->pc = 0x1df0acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20704));
label_1df0b0:
    // 0x1df0b0: 0xc06fd50  jal         func_1BF540
label_1df0b4:
    if (ctx->pc == 0x1DF0B4u) {
        ctx->pc = 0x1DF0B4u;
            // 0x1df0b4: 0x260512d0  addiu       $a1, $s0, 0x12D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4816));
        ctx->pc = 0x1DF0B8u;
        goto label_1df0b8;
    }
    ctx->pc = 0x1DF0B0u;
    SET_GPR_U32(ctx, 31, 0x1DF0B8u);
    ctx->pc = 0x1DF0B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF0B0u;
            // 0x1df0b4: 0x260512d0  addiu       $a1, $s0, 0x12D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF540u;
    if (runtime->hasFunction(0x1BF540u)) {
        auto targetFn = runtime->lookupFunction(0x1BF540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF0B8u; }
        if (ctx->pc != 0x1DF0B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__13CFireAfterHitFPffi_0x1bf540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF0B8u; }
        if (ctx->pc != 0x1DF0B8u) { return; }
    }
    ctx->pc = 0x1DF0B8u;
label_1df0b8:
    // 0x1df0b8: 0x10000029  b           . + 4 + (0x29 << 2)
label_1df0bc:
    if (ctx->pc == 0x1DF0BCu) {
        ctx->pc = 0x1DF0C0u;
        goto label_1df0c0;
    }
    ctx->pc = 0x1DF0B8u;
    {
        const bool branch_taken_0x1df0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df0b8) {
            ctx->pc = 0x1DF160u;
            goto label_1df160;
        }
    }
    ctx->pc = 0x1DF0C0u;
label_1df0c0:
    // 0x1df0c0: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1df0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_1df0c4:
    // 0x1df0c4: 0xc601010c  lwc1        $f1, 0x10C($s0)
    ctx->pc = 0x1df0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1df0c8:
    // 0x1df0c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df0c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1df0cc:
    // 0x1df0cc: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1df0ccu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1df0d0:
    // 0x1df0d0: 0xc0a248c  jal         func_289230
label_1df0d4:
    if (ctx->pc == 0x1DF0D4u) {
        ctx->pc = 0x1DF0D4u;
            // 0x1df0d4: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x1DF0D8u;
        goto label_1df0d8;
    }
    ctx->pc = 0x1DF0D0u;
    SET_GPR_U32(ctx, 31, 0x1DF0D8u);
    ctx->pc = 0x1DF0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF0D0u;
            // 0x1df0d4: 0x46010502  mul.s       $f20, $f0, $f1 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF0D8u; }
        if (ctx->pc != 0x1DF0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF0D8u; }
        if (ctx->pc != 0x1DF0D8u) { return; }
    }
    ctx->pc = 0x1DF0D8u;
label_1df0d8:
    // 0x1df0d8: 0x3c0401ec  lui         $a0, 0x1EC
    ctx->pc = 0x1df0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)492 << 16));
label_1df0dc:
    // 0x1df0dc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1df0dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1df0e0:
    // 0x1df0e0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x1df0e0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_1df0e4:
    // 0x1df0e4: 0x24842320  addiu       $a0, $a0, 0x2320
    ctx->pc = 0x1df0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8992));
label_1df0e8:
    // 0x1df0e8: 0xc06f9d0  jal         func_1BE740
label_1df0ec:
    if (ctx->pc == 0x1DF0ECu) {
        ctx->pc = 0x1DF0ECu;
            // 0x1df0ec: 0x260512d0  addiu       $a1, $s0, 0x12D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4816));
        ctx->pc = 0x1DF0F0u;
        goto label_1df0f0;
    }
    ctx->pc = 0x1DF0E8u;
    SET_GPR_U32(ctx, 31, 0x1DF0F0u);
    ctx->pc = 0x1DF0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF0E8u;
            // 0x1df0ec: 0x260512d0  addiu       $a1, $s0, 0x12D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE740u;
    if (runtime->hasFunction(0x1BE740u)) {
        auto targetFn = runtime->lookupFunction(0x1BE740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF0F0u; }
        if (ctx->pc != 0x1DF0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__14CChillAfterHitFPffi_0x1be740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF0F0u; }
        if (ctx->pc != 0x1DF0F0u) { return; }
    }
    ctx->pc = 0x1DF0F0u;
label_1df0f0:
    // 0x1df0f0: 0x1000001b  b           . + 4 + (0x1B << 2)
label_1df0f4:
    if (ctx->pc == 0x1DF0F4u) {
        ctx->pc = 0x1DF0F8u;
        goto label_1df0f8;
    }
    ctx->pc = 0x1DF0F0u;
    {
        const bool branch_taken_0x1df0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df0f0) {
            ctx->pc = 0x1DF160u;
            goto label_1df160;
        }
    }
    ctx->pc = 0x1DF0F8u;
label_1df0f8:
    // 0x1df0f8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1df0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_1df0fc:
    // 0x1df0fc: 0xc601010c  lwc1        $f1, 0x10C($s0)
    ctx->pc = 0x1df0fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1df100:
    // 0x1df100: 0x3c0401ec  lui         $a0, 0x1EC
    ctx->pc = 0x1df100u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)492 << 16));
label_1df104:
    // 0x1df104: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1df108:
    // 0x1df108: 0x2484bba0  addiu       $a0, $a0, -0x4460
    ctx->pc = 0x1df108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949792));
label_1df10c:
    // 0x1df10c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1df10cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_1df110:
    // 0x1df110: 0x260512d0  addiu       $a1, $s0, 0x12D0
    ctx->pc = 0x1df110u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4816));
label_1df114:
    // 0x1df114: 0xc0700f8  jal         func_1C03E0
label_1df118:
    if (ctx->pc == 0x1DF118u) {
        ctx->pc = 0x1DF118u;
            // 0x1df118: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x1DF11Cu;
        goto label_1df11c;
    }
    ctx->pc = 0x1DF114u;
    SET_GPR_U32(ctx, 31, 0x1DF11Cu);
    ctx->pc = 0x1DF118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF114u;
            // 0x1df118: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C03E0u;
    if (runtime->hasFunction(0x1C03E0u)) {
        auto targetFn = runtime->lookupFunction(0x1C03E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF11Cu; }
        if (ctx->pc != 0x1DF11Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__8CThunderFPfff_0x1c03e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF11Cu; }
        if (ctx->pc != 0x1DF11Cu) { return; }
    }
    ctx->pc = 0x1DF11Cu;
label_1df11c:
    // 0x1df11c: 0x10000010  b           . + 4 + (0x10 << 2)
label_1df120:
    if (ctx->pc == 0x1DF120u) {
        ctx->pc = 0x1DF124u;
        goto label_1df124;
    }
    ctx->pc = 0x1DF11Cu;
    {
        const bool branch_taken_0x1df11c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df11c) {
            ctx->pc = 0x1DF160u;
            goto label_1df160;
        }
    }
    ctx->pc = 0x1DF124u;
label_1df124:
    // 0x1df124: 0x0  nop
    ctx->pc = 0x1df124u;
    // NOP
label_1df128:
    // 0x1df128: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1df128u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1df12c:
    // 0x1df12c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1df12cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1df130:
    // 0x1df130: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1df130u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1df134:
    // 0x1df134: 0x320f809  jalr        $t9
label_1df138:
    if (ctx->pc == 0x1DF138u) {
        ctx->pc = 0x1DF138u;
            // 0x1df138: 0x27a50200  addiu       $a1, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->pc = 0x1DF13Cu;
        goto label_1df13c;
    }
    ctx->pc = 0x1DF134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1DF13Cu);
        ctx->pc = 0x1DF138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF134u;
            // 0x1df138: 0x27a50200  addiu       $a1, $sp, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DF13Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DF13Cu; }
            if (ctx->pc != 0x1DF13Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1DF13Cu;
label_1df13c:
    // 0x1df13c: 0xc601010c  lwc1        $f1, 0x10C($s0)
    ctx->pc = 0x1df13cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1df140:
    // 0x1df140: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1df140u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_1df144:
    // 0x1df144: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1df148:
    // 0x1df148: 0x3c0401ec  lui         $a0, 0x1EC
    ctx->pc = 0x1df148u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)492 << 16));
label_1df14c:
    // 0x1df14c: 0x4600a346  mov.s       $f13, $f20
    ctx->pc = 0x1df14cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[20]);
label_1df150:
    // 0x1df150: 0x24840e20  addiu       $a0, $a0, 0xE20
    ctx->pc = 0x1df150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3616));
label_1df154:
    // 0x1df154: 0x27a50200  addiu       $a1, $sp, 0x200
    ctx->pc = 0x1df154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_1df158:
    // 0x1df158: 0xc06ffbc  jal         func_1BFEF0
label_1df15c:
    if (ctx->pc == 0x1DF15Cu) {
        ctx->pc = 0x1DF15Cu;
            // 0x1df15c: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x1DF160u;
        goto label_1df160;
    }
    ctx->pc = 0x1DF158u;
    SET_GPR_U32(ctx, 31, 0x1DF160u);
    ctx->pc = 0x1DF15Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF158u;
            // 0x1df15c: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFEF0u;
    if (runtime->hasFunction(0x1BFEF0u)) {
        auto targetFn = runtime->lookupFunction(0x1BFEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF160u; }
        if (ctx->pc != 0x1DF160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__8CTornadoFPfff_0x1bfef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF160u; }
        if (ctx->pc != 0x1DF160u) { return; }
    }
    ctx->pc = 0x1DF160u;
label_1df160:
    // 0x1df160: 0x8fa601a8  lw          $a2, 0x1A8($sp)
    ctx->pc = 0x1df160u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_1df164:
    // 0x1df164: 0x26240100  addiu       $a0, $s1, 0x100
    ctx->pc = 0x1df164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 256));
label_1df168:
    // 0x1df168: 0xc0777d8  jal         func_1DDF60
label_1df16c:
    if (ctx->pc == 0x1DF16Cu) {
        ctx->pc = 0x1DF16Cu;
            // 0x1df16c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DF170u;
        goto label_1df170;
    }
    ctx->pc = 0x1DF168u;
    SET_GPR_U32(ctx, 31, 0x1DF170u);
    ctx->pc = 0x1DF16Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF168u;
            // 0x1df16c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DDF60u;
    if (runtime->hasFunction(0x1DDF60u)) {
        auto targetFn = runtime->lookupFunction(0x1DDF60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF170u; }
        if (ctx->pc != 0x1DF170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        HitScoreSet__FPfii_0x1ddf60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF170u; }
        if (ctx->pc != 0x1DF170u) { return; }
    }
    ctx->pc = 0x1DF170u;
label_1df170:
    // 0x1df170: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1df170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1df174:
    // 0x1df174: 0x84a40026  lh          $a0, 0x26($a1)
    ctx->pc = 0x1df174u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 38)));
label_1df178:
    // 0x1df178: 0x30830002  andi        $v1, $a0, 0x2
    ctx->pc = 0x1df178u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_1df17c:
    // 0x1df17c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1df180:
    if (ctx->pc == 0x1DF180u) {
        ctx->pc = 0x1DF180u;
            // 0x1df180: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1DF184u;
        goto label_1df184;
    }
    ctx->pc = 0x1DF17Cu;
    {
        const bool branch_taken_0x1df17c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF17Cu;
            // 0x1df180: 0x24120002  addiu       $s2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df17c) {
            ctx->pc = 0x1DF188u;
            goto label_1df188;
        }
    }
    ctx->pc = 0x1DF184u;
label_1df184:
    // 0x1df184: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x1df184u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1df188:
    // 0x1df188: 0x30830004  andi        $v1, $a0, 0x4
    ctx->pc = 0x1df188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_1df18c:
    // 0x1df18c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1df190:
    if (ctx->pc == 0x1DF190u) {
        ctx->pc = 0x1DF194u;
        goto label_1df194;
    }
    ctx->pc = 0x1DF18Cu;
    {
        const bool branch_taken_0x1df18c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df18c) {
            ctx->pc = 0x1DF198u;
            goto label_1df198;
        }
    }
    ctx->pc = 0x1DF194u;
label_1df194:
    // 0x1df194: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1df194u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1df198:
    // 0x1df198: 0x8fa30130  lw          $v1, 0x130($sp)
    ctx->pc = 0x1df198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_1df19c:
    // 0x1df19c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1df1a0:
    if (ctx->pc == 0x1DF1A0u) {
        ctx->pc = 0x1DF1A4u;
        goto label_1df1a4;
    }
    ctx->pc = 0x1DF19Cu;
    {
        const bool branch_taken_0x1df19c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df19c) {
            ctx->pc = 0x1DF1A8u;
            goto label_1df1a8;
        }
    }
    ctx->pc = 0x1DF1A4u;
label_1df1a4:
    // 0x1df1a4: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x1df1a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1df1a8:
    // 0x1df1a8: 0x8e03133c  lw          $v1, 0x133C($s0)
    ctx->pc = 0x1df1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4924)));
label_1df1ac:
    // 0x1df1ac: 0x30630028  andi        $v1, $v1, 0x28
    ctx->pc = 0x1df1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)40);
label_1df1b0:
    // 0x1df1b0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1df1b4:
    if (ctx->pc == 0x1DF1B4u) {
        ctx->pc = 0x1DF1B8u;
        goto label_1df1b8;
    }
    ctx->pc = 0x1DF1B0u;
    {
        const bool branch_taken_0x1df1b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df1b0) {
            ctx->pc = 0x1DF1BCu;
            goto label_1df1bc;
        }
    }
    ctx->pc = 0x1DF1B8u;
label_1df1b8:
    // 0x1df1b8: 0x24120003  addiu       $s2, $zero, 0x3
    ctx->pc = 0x1df1b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1df1bc:
    // 0x1df1bc: 0x0  nop
    ctx->pc = 0x1df1bcu;
    // NOP
label_1df1c0:
    // 0x1df1c0: 0x8e031314  lw          $v1, 0x1314($s0)
    ctx->pc = 0x1df1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4884)));
label_1df1c4:
    // 0x1df1c4: 0x1c600024  bgtz        $v1, . + 4 + (0x24 << 2)
label_1df1c8:
    if (ctx->pc == 0x1DF1C8u) {
        ctx->pc = 0x1DF1CCu;
        goto label_1df1cc;
    }
    ctx->pc = 0x1DF1C4u;
    {
        const bool branch_taken_0x1df1c4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1df1c4) {
            ctx->pc = 0x1DF258u;
            goto label_1df258;
        }
    }
    ctx->pc = 0x1DF1CCu;
label_1df1cc:
    // 0x1df1cc: 0x80a30018  lb          $v1, 0x18($a1)
    ctx->pc = 0x1df1ccu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 24)));
label_1df1d0:
    // 0x1df1d0: 0xae031208  sw          $v1, 0x1208($s0)
    ctx->pc = 0x1df1d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4616), GPR_U32(ctx, 3));
label_1df1d4:
    // 0x1df1d4: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x1df1d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1df1d8:
    // 0x1df1d8: 0xae03120c  sw          $v1, 0x120C($s0)
    ctx->pc = 0x1df1d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4620), GPR_U32(ctx, 3));
label_1df1dc:
    // 0x1df1dc: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1df1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1df1e0:
    // 0x1df1e0: 0x8c63003c  lw          $v1, 0x3C($v1)
    ctx->pc = 0x1df1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_1df1e4:
    // 0x1df1e4: 0xae031210  sw          $v1, 0x1210($s0)
    ctx->pc = 0x1df1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4624), GPR_U32(ctx, 3));
label_1df1e8:
    // 0x1df1e8: 0x8e2300a0  lw          $v1, 0xA0($s1)
    ctx->pc = 0x1df1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_1df1ec:
    // 0x1df1ec: 0xae031214  sw          $v1, 0x1214($s0)
    ctx->pc = 0x1df1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4628), GPR_U32(ctx, 3));
label_1df1f0:
    // 0x1df1f0: 0x8fa3011c  lw          $v1, 0x11C($sp)
    ctx->pc = 0x1df1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_1df1f4:
    // 0x1df1f4: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_1df1f8:
    if (ctx->pc == 0x1DF1F8u) {
        ctx->pc = 0x1DF1F8u;
            // 0x1df1f8: 0x24120006  addiu       $s2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x1DF1FCu;
        goto label_1df1fc;
    }
    ctx->pc = 0x1DF1F4u;
    {
        const bool branch_taken_0x1df1f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF1F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF1F4u;
            // 0x1df1f8: 0x24120006  addiu       $s2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df1f4) {
            ctx->pc = 0x1DF258u;
            goto label_1df258;
        }
    }
    ctx->pc = 0x1DF1FCu;
label_1df1fc:
    // 0x1df1fc: 0x86041156  lh          $a0, 0x1156($s0)
    ctx->pc = 0x1df1fcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4438)));
label_1df200:
    // 0x1df200: 0x288300b0  slti        $v1, $a0, 0xB0
    ctx->pc = 0x1df200u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)176) ? 1 : 0);
label_1df204:
    // 0x1df204: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_1df208:
    if (ctx->pc == 0x1DF208u) {
        ctx->pc = 0x1DF208u;
            // 0x1df208: 0x288100b5  slti        $at, $a0, 0xB5 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)181) ? 1 : 0);
        ctx->pc = 0x1DF20Cu;
        goto label_1df20c;
    }
    ctx->pc = 0x1DF204u;
    {
        const bool branch_taken_0x1df204 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DF208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF204u;
            // 0x1df208: 0x288100b5  slti        $at, $a0, 0xB5 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)181) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df204) {
            ctx->pc = 0x1DF22Cu;
            goto label_1df22c;
        }
    }
    ctx->pc = 0x1DF20Cu;
label_1df20c:
    // 0x1df20c: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
label_1df210:
    if (ctx->pc == 0x1DF210u) {
        ctx->pc = 0x1DF214u;
        goto label_1df214;
    }
    ctx->pc = 0x1DF20Cu;
    {
        const bool branch_taken_0x1df20c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df20c) {
            ctx->pc = 0x1DF22Cu;
            goto label_1df22c;
        }
    }
    ctx->pc = 0x1DF214u;
label_1df214:
    // 0x1df214: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x1df214u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_1df218:
    // 0x1df218: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1df218u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_1df21c:
    // 0x1df21c: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1df21cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1df220:
    // 0x1df220: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1df224:
    if (ctx->pc == 0x1DF224u) {
        ctx->pc = 0x1DF224u;
            // 0x1df224: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1DF228u;
        goto label_1df228;
    }
    ctx->pc = 0x1DF220u;
    {
        const bool branch_taken_0x1df220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF220u;
            // 0x1df224: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df220) {
            ctx->pc = 0x1DF22Cu;
            goto label_1df22c;
        }
    }
    ctx->pc = 0x1DF228u;
label_1df228:
    // 0x1df228: 0xa2031358  sb          $v1, 0x1358($s0)
    ctx->pc = 0x1df228u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4952), (uint8_t)GPR_U32(ctx, 3));
label_1df22c:
    // 0x1df22c: 0x0  nop
    ctx->pc = 0x1df22cu;
    // NOP
label_1df230:
    // 0x1df230: 0x86041156  lh          $a0, 0x1156($s0)
    ctx->pc = 0x1df230u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4438)));
label_1df234:
    // 0x1df234: 0x240300dc  addiu       $v1, $zero, 0xDC
    ctx->pc = 0x1df234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
label_1df238:
    // 0x1df238: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
label_1df23c:
    if (ctx->pc == 0x1DF23Cu) {
        ctx->pc = 0x1DF240u;
        goto label_1df240;
    }
    ctx->pc = 0x1DF238u;
    {
        const bool branch_taken_0x1df238 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1df238) {
            ctx->pc = 0x1DF258u;
            goto label_1df258;
        }
    }
    ctx->pc = 0x1DF240u;
label_1df240:
    // 0x1df240: 0x8e2400a0  lw          $a0, 0xA0($s1)
    ctx->pc = 0x1df240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_1df244:
    // 0x1df244: 0x3c030008  lui         $v1, 0x8
    ctx->pc = 0x1df244u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8 << 16));
label_1df248:
    // 0x1df248: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1df248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1df24c:
    // 0x1df24c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
label_1df250:
    if (ctx->pc == 0x1DF250u) {
        ctx->pc = 0x1DF250u;
            // 0x1df250: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1DF254u;
        goto label_1df254;
    }
    ctx->pc = 0x1DF24Cu;
    {
        const bool branch_taken_0x1df24c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF24Cu;
            // 0x1df250: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df24c) {
            ctx->pc = 0x1DF258u;
            goto label_1df258;
        }
    }
    ctx->pc = 0x1DF254u;
label_1df254:
    // 0x1df254: 0xa2031358  sb          $v1, 0x1358($s0)
    ctx->pc = 0x1df254u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4952), (uint8_t)GPR_U32(ctx, 3));
label_1df258:
    // 0x1df258: 0x8fa301a8  lw          $v1, 0x1A8($sp)
    ctx->pc = 0x1df258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 424)));
label_1df25c:
    // 0x1df25c: 0x18600036  blez        $v1, . + 4 + (0x36 << 2)
label_1df260:
    if (ctx->pc == 0x1DF260u) {
        ctx->pc = 0x1DF264u;
        goto label_1df264;
    }
    ctx->pc = 0x1DF25Cu;
    {
        const bool branch_taken_0x1df25c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1df25c) {
            ctx->pc = 0x1DF338u;
            goto label_1df338;
        }
    }
    ctx->pc = 0x1DF264u;
label_1df264:
    // 0x1df264: 0xc603131c  lwc1        $f3, 0x131C($s0)
    ctx->pc = 0x1df264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4892)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1df268:
    // 0x1df268: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x1df268u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_1df26c:
    // 0x1df26c: 0x0  nop
    ctx->pc = 0x1df26cu;
    // NOP
label_1df270:
    // 0x1df270: 0x46021836  c.le.s      $f3, $f2
    ctx->pc = 0x1df270u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1df274:
    // 0x1df274: 0x0  nop
    ctx->pc = 0x1df274u;
    // NOP
label_1df278:
    // 0x1df278: 0x4501002f  bc1t        . + 4 + (0x2F << 2)
label_1df27c:
    if (ctx->pc == 0x1DF27Cu) {
        ctx->pc = 0x1DF280u;
        goto label_1df280;
    }
    ctx->pc = 0x1DF278u;
    {
        const bool branch_taken_0x1df278 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1df278) {
            ctx->pc = 0x1DF338u;
            goto label_1df338;
        }
    }
    ctx->pc = 0x1DF280u;
label_1df280:
    // 0x1df280: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x1df280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1df284:
    // 0x1df284: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1df284u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_1df288:
    // 0x1df288: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1df288u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1df28c:
    // 0x1df28c: 0x84830046  lh          $v1, 0x46($a0)
    ctx->pc = 0x1df28cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 70)));
label_1df290:
    // 0x1df290: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x1df290u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1df294:
    // 0x1df294: 0x0  nop
    ctx->pc = 0x1df294u;
    // NOP
label_1df298:
    // 0x1df298: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x1df298u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1df29c:
    // 0x1df29c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x1df29cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_1df2a0:
    // 0x1df2a0: 0x46001801  sub.s       $f0, $f3, $f0
    ctx->pc = 0x1df2a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[3], ctx->f[0]);
label_1df2a4:
    // 0x1df2a4: 0x46020036  c.le.s      $f0, $f2
    ctx->pc = 0x1df2a4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1df2a8:
    // 0x1df2a8: 0x0  nop
    ctx->pc = 0x1df2a8u;
    // NOP
label_1df2ac:
    // 0x1df2ac: 0x45000022  bc1f        . + 4 + (0x22 << 2)
label_1df2b0:
    if (ctx->pc == 0x1DF2B0u) {
        ctx->pc = 0x1DF2B0u;
            // 0x1df2b0: 0xe600131c  swc1        $f0, 0x131C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4892), bits); }
        ctx->pc = 0x1DF2B4u;
        goto label_1df2b4;
    }
    ctx->pc = 0x1DF2ACu;
    {
        const bool branch_taken_0x1df2ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1DF2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF2ACu;
            // 0x1df2b0: 0xe600131c  swc1        $f0, 0x131C($s0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4892), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df2ac) {
            ctx->pc = 0x1DF338u;
            goto label_1df338;
        }
    }
    ctx->pc = 0x1DF2B4u;
label_1df2b4:
    // 0x1df2b4: 0x240500c8  addiu       $a1, $zero, 0xC8
    ctx->pc = 0x1df2b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
label_1df2b8:
    // 0x1df2b8: 0x24020384  addiu       $v0, $zero, 0x384
    ctx->pc = 0x1df2b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 900));
label_1df2bc:
    // 0x1df2bc: 0xe602131c  swc1        $f2, 0x131C($s0)
    ctx->pc = 0x1df2bcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4892), bits); }
label_1df2c0:
    // 0x1df2c0: 0x26040742  addiu       $a0, $s0, 0x742
    ctx->pc = 0x1df2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1858));
label_1df2c4:
    // 0x1df2c4: 0xa6021320  sh          $v0, 0x1320($s0)
    ctx->pc = 0x1df2c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4896), (uint16_t)GPR_U32(ctx, 2));
label_1df2c8:
    // 0x1df2c8: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x1df2c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1df2cc:
    // 0x1df2cc: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x1df2ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1df2d0:
    // 0x1df2d0: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1df2d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1df2d4:
    // 0x1df2d4: 0x2409001e  addiu       $t1, $zero, 0x1E
    ctx->pc = 0x1df2d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1df2d8:
    // 0x1df2d8: 0xc070488  jal         func_1C1220
label_1df2dc:
    if (ctx->pc == 0x1DF2DCu) {
        ctx->pc = 0x1DF2DCu;
            // 0x1df2dc: 0x240affff  addiu       $t2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1DF2E0u;
        goto label_1df2e0;
    }
    ctx->pc = 0x1DF2D8u;
    SET_GPR_U32(ctx, 31, 0x1DF2E0u);
    ctx->pc = 0x1DF2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF2D8u;
            // 0x1df2dc: 0x240affff  addiu       $t2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1220u;
    if (runtime->hasFunction(0x1C1220u)) {
        auto targetFn = runtime->lookupFunction(0x1C1220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF2E0u; }
        if (ctx->pc != 0x1DF2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAnim__12CPalletAnimeFssssss_0x1c1220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF2E0u; }
        if (ctx->pc != 0x1DF2E0u) { return; }
    }
    ctx->pc = 0x1DF2E0u;
label_1df2e0:
    // 0x1df2e0: 0x8e061150  lw          $a2, 0x1150($s0)
    ctx->pc = 0x1df2e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4432)));
label_1df2e4:
    // 0x1df2e4: 0x80c3006a  lb          $v1, 0x6A($a2)
    ctx->pc = 0x1df2e4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 106)));
label_1df2e8:
    // 0x1df2e8: 0x14600013  bnez        $v1, . + 4 + (0x13 << 2)
label_1df2ec:
    if (ctx->pc == 0x1DF2ECu) {
        ctx->pc = 0x1DF2F0u;
        goto label_1df2f0;
    }
    ctx->pc = 0x1DF2E8u;
    {
        const bool branch_taken_0x1df2e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df2e8) {
            ctx->pc = 0x1DF338u;
            goto label_1df338;
        }
    }
    ctx->pc = 0x1DF2F0u;
label_1df2f0:
    // 0x1df2f0: 0x94c20066  lhu         $v0, 0x66($a2)
    ctx->pc = 0x1df2f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 102)));
label_1df2f4:
    // 0x1df2f4: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_1df2f8:
    if (ctx->pc == 0x1DF2F8u) {
        ctx->pc = 0x1DF2F8u;
            // 0x1df2f8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x1DF2FCu;
        goto label_1df2fc;
    }
    ctx->pc = 0x1DF2F4u;
    {
        const bool branch_taken_0x1df2f4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1DF2F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF2F4u;
            // 0x1df2f8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df2f4) {
            ctx->pc = 0x1DF308u;
            goto label_1df308;
        }
    }
    ctx->pc = 0x1DF2FCu;
label_1df2fc:
    // 0x1df2fc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df2fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1df300:
    // 0x1df300: 0x10000007  b           . + 4 + (0x7 << 2)
label_1df304:
    if (ctx->pc == 0x1DF304u) {
        ctx->pc = 0x1DF304u;
            // 0x1df304: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x1DF308u;
        goto label_1df308;
    }
    ctx->pc = 0x1DF300u;
    {
        const bool branch_taken_0x1df300 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF300u;
            // 0x1df304: 0x46800060  cvt.s.w     $f1, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df300) {
            ctx->pc = 0x1DF320u;
            goto label_1df320;
        }
    }
    ctx->pc = 0x1DF308u;
label_1df308:
    // 0x1df308: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1df308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_1df30c:
    // 0x1df30c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1df30cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1df310:
    // 0x1df310: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1df310u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1df314:
    // 0x1df314: 0x0  nop
    ctx->pc = 0x1df314u;
    // NOP
label_1df318:
    // 0x1df318: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1df318u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_1df31c:
    // 0x1df31c: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x1df31cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_1df320:
    // 0x1df320: 0x3c023fa6  lui         $v0, 0x3FA6
    ctx->pc = 0x1df320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16294 << 16));
label_1df324:
    // 0x1df324: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x1df324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_1df328:
    // 0x1df328: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1df328u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1df32c:
    // 0x1df32c: 0xc0a24b0  jal         func_2892C0
label_1df330:
    if (ctx->pc == 0x1DF330u) {
        ctx->pc = 0x1DF330u;
            // 0x1df330: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->pc = 0x1DF334u;
        goto label_1df334;
    }
    ctx->pc = 0x1DF32Cu;
    SET_GPR_U32(ctx, 31, 0x1DF334u);
    ctx->pc = 0x1DF330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF32Cu;
            // 0x1df330: 0x46010302  mul.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2892C0u;
    if (runtime->hasFunction(0x2892C0u)) {
        auto targetFn = runtime->lookupFunction(0x2892C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF334u; }
        if (ctx->pc != 0x1DF334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptoui_0x2892c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF334u; }
        if (ctx->pc != 0x1DF334u) { return; }
    }
    ctx->pc = 0x1DF334u;
label_1df334:
    // 0x1df334: 0xa6021318  sh          $v0, 0x1318($s0)
    ctx->pc = 0x1df334u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4888), (uint16_t)GPR_U32(ctx, 2));
label_1df338:
    // 0x1df338: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1df338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1df33c:
    // 0x1df33c: 0x1243004b  beq         $s2, $v1, . + 4 + (0x4B << 2)
label_1df340:
    if (ctx->pc == 0x1DF340u) {
        ctx->pc = 0x1DF340u;
            // 0x1df340: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1DF344u;
        goto label_1df344;
    }
    ctx->pc = 0x1DF33Cu;
    {
        const bool branch_taken_0x1df33c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DF340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF33Cu;
            // 0x1df340: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df33c) {
            ctx->pc = 0x1DF46Cu;
            goto label_1df46c;
        }
    }
    ctx->pc = 0x1DF344u;
label_1df344:
    // 0x1df344: 0x1243004e  beq         $s2, $v1, . + 4 + (0x4E << 2)
label_1df348:
    if (ctx->pc == 0x1DF348u) {
        ctx->pc = 0x1DF348u;
            // 0x1df348: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1DF34Cu;
        goto label_1df34c;
    }
    ctx->pc = 0x1DF344u;
    {
        const bool branch_taken_0x1df344 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DF348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF344u;
            // 0x1df348: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df344) {
            ctx->pc = 0x1DF480u;
            goto label_1df480;
        }
    }
    ctx->pc = 0x1DF34Cu;
label_1df34c:
    // 0x1df34c: 0x1243003c  beq         $s2, $v1, . + 4 + (0x3C << 2)
label_1df350:
    if (ctx->pc == 0x1DF350u) {
        ctx->pc = 0x1DF350u;
            // 0x1df350: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1DF354u;
        goto label_1df354;
    }
    ctx->pc = 0x1DF34Cu;
    {
        const bool branch_taken_0x1df34c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DF350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF34Cu;
            // 0x1df350: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df34c) {
            ctx->pc = 0x1DF440u;
            goto label_1df440;
        }
    }
    ctx->pc = 0x1DF354u;
label_1df354:
    // 0x1df354: 0x1243000e  beq         $s2, $v1, . + 4 + (0xE << 2)
label_1df358:
    if (ctx->pc == 0x1DF358u) {
        ctx->pc = 0x1DF358u;
            // 0x1df358: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1DF35Cu;
        goto label_1df35c;
    }
    ctx->pc = 0x1DF354u;
    {
        const bool branch_taken_0x1df354 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DF358u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF354u;
            // 0x1df358: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df354) {
            ctx->pc = 0x1DF390u;
            goto label_1df390;
        }
    }
    ctx->pc = 0x1DF35Cu;
label_1df35c:
    // 0x1df35c: 0x12430003  beq         $s2, $v1, . + 4 + (0x3 << 2)
label_1df360:
    if (ctx->pc == 0x1DF360u) {
        ctx->pc = 0x1DF364u;
        goto label_1df364;
    }
    ctx->pc = 0x1DF35Cu;
    {
        const bool branch_taken_0x1df35c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x1df35c) {
            ctx->pc = 0x1DF36Cu;
            goto label_1df36c;
        }
    }
    ctx->pc = 0x1DF364u;
label_1df364:
    // 0x1df364: 0x10000046  b           . + 4 + (0x46 << 2)
label_1df368:
    if (ctx->pc == 0x1DF368u) {
        ctx->pc = 0x1DF36Cu;
        goto label_1df36c;
    }
    ctx->pc = 0x1DF364u;
    {
        const bool branch_taken_0x1df364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df364) {
            ctx->pc = 0x1DF480u;
            goto label_1df480;
        }
    }
    ctx->pc = 0x1DF36Cu;
label_1df36c:
    // 0x1df36c: 0x0  nop
    ctx->pc = 0x1df36cu;
    // NOP
label_1df370:
    // 0x1df370: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x1df370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_1df374:
    // 0x1df374: 0xa6021158  sh          $v0, 0x1158($s0)
    ctx->pc = 0x1df374u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4440), (uint16_t)GPR_U32(ctx, 2));
label_1df378:
    // 0x1df378: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1df378u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1df37c:
    // 0x1df37c: 0x8e040588  lw          $a0, 0x588($s0)
    ctx->pc = 0x1df37cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1416)));
label_1df380:
    // 0x1df380: 0xc063818  jal         func_18E060
label_1df384:
    if (ctx->pc == 0x1DF384u) {
        ctx->pc = 0x1DF384u;
            // 0x1df384: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DF388u;
        goto label_1df388;
    }
    ctx->pc = 0x1DF380u;
    SET_GPR_U32(ctx, 31, 0x1DF388u);
    ctx->pc = 0x1DF384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF380u;
            // 0x1df384: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF388u; }
        if (ctx->pc != 0x1DF388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF388u; }
        if (ctx->pc != 0x1DF388u) { return; }
    }
    ctx->pc = 0x1DF388u;
label_1df388:
    // 0x1df388: 0x1000003d  b           . + 4 + (0x3D << 2)
label_1df38c:
    if (ctx->pc == 0x1DF38Cu) {
        ctx->pc = 0x1DF390u;
        goto label_1df390;
    }
    ctx->pc = 0x1DF388u;
    {
        const bool branch_taken_0x1df388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df388) {
            ctx->pc = 0x1DF480u;
            goto label_1df480;
        }
    }
    ctx->pc = 0x1DF390u;
label_1df390:
    // 0x1df390: 0x12c00003  beqz        $s6, . + 4 + (0x3 << 2)
label_1df394:
    if (ctx->pc == 0x1DF394u) {
        ctx->pc = 0x1DF394u;
            // 0x1df394: 0x240302bc  addiu       $v1, $zero, 0x2BC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 700));
        ctx->pc = 0x1DF398u;
        goto label_1df398;
    }
    ctx->pc = 0x1DF390u;
    {
        const bool branch_taken_0x1df390 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF390u;
            // 0x1df394: 0x240302bc  addiu       $v1, $zero, 0x2BC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 700));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df390) {
            ctx->pc = 0x1DF3A0u;
            goto label_1df3a0;
        }
    }
    ctx->pc = 0x1DF398u;
label_1df398:
    // 0x1df398: 0x10000039  b           . + 4 + (0x39 << 2)
label_1df39c:
    if (ctx->pc == 0x1DF39Cu) {
        ctx->pc = 0x1DF39Cu;
            // 0x1df39c: 0xa6031158  sh          $v1, 0x1158($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4440), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1DF3A0u;
        goto label_1df3a0;
    }
    ctx->pc = 0x1DF398u;
    {
        const bool branch_taken_0x1df398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF39Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF398u;
            // 0x1df39c: 0xa6031158  sh          $v1, 0x1158($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4440), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df398) {
            ctx->pc = 0x1DF480u;
            goto label_1df480;
        }
    }
    ctx->pc = 0x1DF3A0u;
label_1df3a0:
    // 0x1df3a0: 0x8fc30094  lw          $v1, 0x94($fp)
    ctx->pc = 0x1df3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 148)));
label_1df3a4:
    // 0x1df3a4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1df3a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1df3a8:
    // 0x1df3a8: 0x14600035  bnez        $v1, . + 4 + (0x35 << 2)
label_1df3ac:
    if (ctx->pc == 0x1DF3ACu) {
        ctx->pc = 0x1DF3B0u;
        goto label_1df3b0;
    }
    ctx->pc = 0x1DF3A8u;
    {
        const bool branch_taken_0x1df3a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df3a8) {
            ctx->pc = 0x1DF480u;
            goto label_1df480;
        }
    }
    ctx->pc = 0x1DF3B0u;
label_1df3b0:
    // 0x1df3b0: 0x8603133a  lh          $v1, 0x133A($s0)
    ctx->pc = 0x1df3b0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4922)));
label_1df3b4:
    // 0x1df3b4: 0x1c600032  bgtz        $v1, . + 4 + (0x32 << 2)
label_1df3b8:
    if (ctx->pc == 0x1DF3B8u) {
        ctx->pc = 0x1DF3BCu;
        goto label_1df3bc;
    }
    ctx->pc = 0x1DF3B4u;
    {
        const bool branch_taken_0x1df3b4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1df3b4) {
            ctx->pc = 0x1DF480u;
            goto label_1df480;
        }
    }
    ctx->pc = 0x1DF3BCu;
label_1df3bc:
    // 0x1df3bc: 0x8e031150  lw          $v1, 0x1150($s0)
    ctx->pc = 0x1df3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4432)));
label_1df3c0:
    // 0x1df3c0: 0x80630069  lb          $v1, 0x69($v1)
    ctx->pc = 0x1df3c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 105)));
label_1df3c4:
    // 0x1df3c4: 0x18600016  blez        $v1, . + 4 + (0x16 << 2)
label_1df3c8:
    if (ctx->pc == 0x1DF3C8u) {
        ctx->pc = 0x1DF3CCu;
        goto label_1df3cc;
    }
    ctx->pc = 0x1DF3C4u;
    {
        const bool branch_taken_0x1df3c4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1df3c4) {
            ctx->pc = 0x1DF420u;
            goto label_1df420;
        }
    }
    ctx->pc = 0x1DF3CCu;
label_1df3cc:
    // 0x1df3cc: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x1df3ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1df3d0:
    // 0x1df3d0: 0x2403003c  addiu       $v1, $zero, 0x3C
    ctx->pc = 0x1df3d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_1df3d4:
    // 0x1df3d4: 0x82040bf4  lb          $a0, 0xBF4($s0)
    ctx->pc = 0x1df3d4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3060)));
label_1df3d8:
    // 0x1df3d8: 0x80a50022  lb          $a1, 0x22($a1)
    ctx->pc = 0x1df3d8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 34)));
label_1df3dc:
    // 0x1df3dc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x1df3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1df3e0:
    // 0x1df3e0: 0xa2040bf4  sb          $a0, 0xBF4($s0)
    ctx->pc = 0x1df3e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3060), (uint8_t)GPR_U32(ctx, 4));
label_1df3e4:
    // 0x1df3e4: 0xa2030bf5  sb          $v1, 0xBF5($s0)
    ctx->pc = 0x1df3e4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3061), (uint8_t)GPR_U32(ctx, 3));
label_1df3e8:
    // 0x1df3e8: 0x8e031150  lw          $v1, 0x1150($s0)
    ctx->pc = 0x1df3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4432)));
label_1df3ec:
    // 0x1df3ec: 0x82040bf4  lb          $a0, 0xBF4($s0)
    ctx->pc = 0x1df3ecu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 3060)));
label_1df3f0:
    // 0x1df3f0: 0x80630069  lb          $v1, 0x69($v1)
    ctx->pc = 0x1df3f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 105)));
label_1df3f4:
    // 0x1df3f4: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x1df3f4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1df3f8:
    // 0x1df3f8: 0x14600021  bnez        $v1, . + 4 + (0x21 << 2)
label_1df3fc:
    if (ctx->pc == 0x1DF3FCu) {
        ctx->pc = 0x1DF400u;
        goto label_1df400;
    }
    ctx->pc = 0x1DF3F8u;
    {
        const bool branch_taken_0x1df3f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df3f8) {
            ctx->pc = 0x1DF480u;
            goto label_1df480;
        }
    }
    ctx->pc = 0x1DF400u;
label_1df400:
    // 0x1df400: 0x240201f4  addiu       $v0, $zero, 0x1F4
    ctx->pc = 0x1df400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
label_1df404:
    // 0x1df404: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1df404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1df408:
    // 0x1df408: 0xa6021158  sh          $v0, 0x1158($s0)
    ctx->pc = 0x1df408u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4440), (uint16_t)GPR_U32(ctx, 2));
label_1df40c:
    // 0x1df40c: 0x8e040588  lw          $a0, 0x588($s0)
    ctx->pc = 0x1df40cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1416)));
label_1df410:
    // 0x1df410: 0xc063818  jal         func_18E060
label_1df414:
    if (ctx->pc == 0x1DF414u) {
        ctx->pc = 0x1DF414u;
            // 0x1df414: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DF418u;
        goto label_1df418;
    }
    ctx->pc = 0x1DF410u;
    SET_GPR_U32(ctx, 31, 0x1DF418u);
    ctx->pc = 0x1DF414u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF410u;
            // 0x1df414: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF418u; }
        if (ctx->pc != 0x1DF418u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF418u; }
        if (ctx->pc != 0x1DF418u) { return; }
    }
    ctx->pc = 0x1DF418u;
label_1df418:
    // 0x1df418: 0x10000019  b           . + 4 + (0x19 << 2)
label_1df41c:
    if (ctx->pc == 0x1DF41Cu) {
        ctx->pc = 0x1DF420u;
        goto label_1df420;
    }
    ctx->pc = 0x1DF418u;
    {
        const bool branch_taken_0x1df418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df418) {
            ctx->pc = 0x1DF480u;
            goto label_1df480;
        }
    }
    ctx->pc = 0x1DF420u;
label_1df420:
    // 0x1df420: 0x240201f4  addiu       $v0, $zero, 0x1F4
    ctx->pc = 0x1df420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
label_1df424:
    // 0x1df424: 0xa6021158  sh          $v0, 0x1158($s0)
    ctx->pc = 0x1df424u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4440), (uint16_t)GPR_U32(ctx, 2));
label_1df428:
    // 0x1df428: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1df428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1df42c:
    // 0x1df42c: 0x8e040588  lw          $a0, 0x588($s0)
    ctx->pc = 0x1df42cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1416)));
label_1df430:
    // 0x1df430: 0xc063818  jal         func_18E060
label_1df434:
    if (ctx->pc == 0x1DF434u) {
        ctx->pc = 0x1DF434u;
            // 0x1df434: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DF438u;
        goto label_1df438;
    }
    ctx->pc = 0x1DF430u;
    SET_GPR_U32(ctx, 31, 0x1DF438u);
    ctx->pc = 0x1DF434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF430u;
            // 0x1df434: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF438u; }
        if (ctx->pc != 0x1DF438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF438u; }
        if (ctx->pc != 0x1DF438u) { return; }
    }
    ctx->pc = 0x1DF438u;
label_1df438:
    // 0x1df438: 0x10000011  b           . + 4 + (0x11 << 2)
label_1df43c:
    if (ctx->pc == 0x1DF43Cu) {
        ctx->pc = 0x1DF440u;
        goto label_1df440;
    }
    ctx->pc = 0x1DF438u;
    {
        const bool branch_taken_0x1df438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df438) {
            ctx->pc = 0x1DF480u;
            goto label_1df480;
        }
    }
    ctx->pc = 0x1DF440u;
label_1df440:
    // 0x1df440: 0x8fc30094  lw          $v1, 0x94($fp)
    ctx->pc = 0x1df440u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 148)));
label_1df444:
    // 0x1df444: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x1df444u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_1df448:
    // 0x1df448: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
label_1df44c:
    if (ctx->pc == 0x1DF44Cu) {
        ctx->pc = 0x1DF450u;
        goto label_1df450;
    }
    ctx->pc = 0x1DF448u;
    {
        const bool branch_taken_0x1df448 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df448) {
            ctx->pc = 0x1DF480u;
            goto label_1df480;
        }
    }
    ctx->pc = 0x1DF450u;
label_1df450:
    // 0x1df450: 0x24020258  addiu       $v0, $zero, 0x258
    ctx->pc = 0x1df450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
label_1df454:
    // 0x1df454: 0x26041270  addiu       $a0, $s0, 0x1270
    ctx->pc = 0x1df454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4720));
label_1df458:
    // 0x1df458: 0xc072608  jal         func_1C9820
label_1df45c:
    if (ctx->pc == 0x1DF45Cu) {
        ctx->pc = 0x1DF45Cu;
            // 0x1df45c: 0xa6021158  sh          $v0, 0x1158($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4440), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1DF460u;
        goto label_1df460;
    }
    ctx->pc = 0x1DF458u;
    SET_GPR_U32(ctx, 31, 0x1DF460u);
    ctx->pc = 0x1DF45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF458u;
            // 0x1df45c: 0xa6021158  sh          $v0, 0x1158($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 4440), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9820u;
    if (runtime->hasFunction(0x1C9820u)) {
        auto targetFn = runtime->lookupFunction(0x1C9820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF460u; }
        if (ctx->pc != 0x1DF460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Reset__7CPiyoriFv_0x1c9820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF460u; }
        if (ctx->pc != 0x1DF460u) { return; }
    }
    ctx->pc = 0x1DF460u;
label_1df460:
    // 0x1df460: 0xa2000bf4  sb          $zero, 0xBF4($s0)
    ctx->pc = 0x1df460u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3060), (uint8_t)GPR_U32(ctx, 0));
label_1df464:
    // 0x1df464: 0x10000006  b           . + 4 + (0x6 << 2)
label_1df468:
    if (ctx->pc == 0x1DF468u) {
        ctx->pc = 0x1DF468u;
            // 0x1df468: 0xa2000bf5  sb          $zero, 0xBF5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3061), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1DF46Cu;
        goto label_1df46c;
    }
    ctx->pc = 0x1DF464u;
    {
        const bool branch_taken_0x1df464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF468u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF464u;
            // 0x1df468: 0xa2000bf5  sb          $zero, 0xBF5($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 3061), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df464) {
            ctx->pc = 0x1DF480u;
            goto label_1df480;
        }
    }
    ctx->pc = 0x1DF46Cu;
label_1df46c:
    // 0x1df46c: 0x0  nop
    ctx->pc = 0x1df46cu;
    // NOP
label_1df470:
    // 0x1df470: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x1df470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_1df474:
    // 0x1df474: 0xa6021158  sh          $v0, 0x1158($s0)
    ctx->pc = 0x1df474u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4440), (uint16_t)GPR_U32(ctx, 2));
label_1df478:
    // 0x1df478: 0xc072608  jal         func_1C9820
label_1df47c:
    if (ctx->pc == 0x1DF47Cu) {
        ctx->pc = 0x1DF47Cu;
            // 0x1df47c: 0x26041270  addiu       $a0, $s0, 0x1270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4720));
        ctx->pc = 0x1DF480u;
        goto label_1df480;
    }
    ctx->pc = 0x1DF478u;
    SET_GPR_U32(ctx, 31, 0x1DF480u);
    ctx->pc = 0x1DF47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF478u;
            // 0x1df47c: 0x26041270  addiu       $a0, $s0, 0x1270 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9820u;
    if (runtime->hasFunction(0x1C9820u)) {
        auto targetFn = runtime->lookupFunction(0x1C9820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF480u; }
        if (ctx->pc != 0x1DF480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Reset__7CPiyoriFv_0x1c9820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DF480u; }
        if (ctx->pc != 0x1DF480u) { return; }
    }
    ctx->pc = 0x1DF480u;
label_1df480:
    // 0x1df480: 0x86041158  lh          $a0, 0x1158($s0)
    ctx->pc = 0x1df480u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 4440)));
label_1df484:
    // 0x1df484: 0x240301f4  addiu       $v1, $zero, 0x1F4
    ctx->pc = 0x1df484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 500));
label_1df488:
    // 0x1df488: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
label_1df48c:
    if (ctx->pc == 0x1DF48Cu) {
        ctx->pc = 0x1DF48Cu;
            // 0x1df48c: 0x24030258  addiu       $v1, $zero, 0x258 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
        ctx->pc = 0x1DF490u;
        goto label_1df490;
    }
    ctx->pc = 0x1DF488u;
    {
        const bool branch_taken_0x1df488 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x1DF48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF488u;
            // 0x1df48c: 0x24030258  addiu       $v1, $zero, 0x258 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df488) {
            ctx->pc = 0x1DF498u;
            goto label_1df498;
        }
    }
    ctx->pc = 0x1DF490u;
label_1df490:
    // 0x1df490: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
label_1df494:
    if (ctx->pc == 0x1DF494u) {
        ctx->pc = 0x1DF498u;
        goto label_1df498;
    }
    ctx->pc = 0x1DF490u;
    {
        const bool branch_taken_0x1df490 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1df490) {
            ctx->pc = 0x1DF4C0u;
            goto label_1df4c0;
        }
    }
    ctx->pc = 0x1DF498u;
label_1df498:
    // 0x1df498: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_1df49c:
    if (ctx->pc == 0x1DF49Cu) {
        ctx->pc = 0x1DF4A0u;
        goto label_1df4a0;
    }
    ctx->pc = 0x1DF498u;
    {
        const bool branch_taken_0x1df498 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1df498) {
            ctx->pc = 0x1DF4C0u;
            goto label_1df4c0;
        }
    }
    ctx->pc = 0x1DF4A0u;
label_1df4a0:
    // 0x1df4a0: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x1df4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1df4a4:
    // 0x1df4a4: 0x84630026  lh          $v1, 0x26($v1)
    ctx->pc = 0x1df4a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 38)));
label_1df4a8:
    // 0x1df4a8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1df4a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_1df4ac:
    // 0x1df4ac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_1df4b0:
    if (ctx->pc == 0x1DF4B0u) {
        ctx->pc = 0x1DF4B0u;
            // 0x1df4b0: 0x24040578  addiu       $a0, $zero, 0x578 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1400));
        ctx->pc = 0x1DF4B4u;
        goto label_1df4b4;
    }
    ctx->pc = 0x1DF4ACu;
    {
        const bool branch_taken_0x1df4ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DF4B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF4ACu;
            // 0x1df4b0: 0x24040578  addiu       $a0, $zero, 0x578 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1400));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1df4ac) {
            ctx->pc = 0x1DF4C0u;
            goto label_1df4c0;
        }
    }
    ctx->pc = 0x1DF4B4u;
label_1df4b4:
    // 0x1df4b4: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x1df4b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_1df4b8:
    // 0x1df4b8: 0xa6041158  sh          $a0, 0x1158($s0)
    ctx->pc = 0x1df4b8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4440), (uint16_t)GPR_U32(ctx, 4));
label_1df4bc:
    // 0x1df4bc: 0xa603133a  sh          $v1, 0x133A($s0)
    ctx->pc = 0x1df4bcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 4922), (uint16_t)GPR_U32(ctx, 3));
label_1df4c0:
    // 0x1df4c0: 0x8fa30160  lw          $v1, 0x160($sp)
    ctx->pc = 0x1df4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
label_1df4c4:
    // 0x1df4c4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1df4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1df4c8:
    // 0x1df4c8: 0xafa30160  sw          $v1, 0x160($sp)
    ctx->pc = 0x1df4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 3));
label_1df4cc:
    // 0x1df4cc: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x1df4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1df4d0:
    // 0x1df4d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1df4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1df4d4:
    // 0x1df4d4: 0xafa30120  sw          $v1, 0x120($sp)
    ctx->pc = 0x1df4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 3));
label_1df4d8:
    // 0x1df4d8: 0x8fa30120  lw          $v1, 0x120($sp)
    ctx->pc = 0x1df4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_1df4dc:
    // 0x1df4dc: 0x28630018  slti        $v1, $v1, 0x18
    ctx->pc = 0x1df4dcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)24) ? 1 : 0);
label_1df4e0:
    // 0x1df4e0: 0x1460fb31  bnez        $v1, . + 4 + (-0x4CF << 2)
label_1df4e4:
    if (ctx->pc == 0x1DF4E4u) {
        ctx->pc = 0x1DF4E8u;
        goto label_1df4e8;
    }
    ctx->pc = 0x1DF4E0u;
    {
        const bool branch_taken_0x1df4e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1df4e0) {
            ctx->pc = 0x1DE1A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1de1a8;
        }
    }
    ctx->pc = 0x1DF4E8u;
label_1df4e8:
    // 0x1df4e8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x1df4e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1df4ec:
    // 0x1df4ec: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x1df4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_1df4f0:
    // 0x1df4f0: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x1df4f0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_1df4f4:
    // 0x1df4f4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x1df4f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1df4f8:
    // 0x1df4f8: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x1df4f8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1df4fc:
    // 0x1df4fc: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x1df4fcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1df500:
    // 0x1df500: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x1df500u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1df504:
    // 0x1df504: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x1df504u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1df508:
    // 0x1df508: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x1df508u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1df50c:
    // 0x1df50c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1df50cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1df510:
    // 0x1df510: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1df510u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1df514:
    // 0x1df514: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1df514u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1df518:
    // 0x1df518: 0x3e00008  jr          $ra
label_1df51c:
    if (ctx->pc == 0x1DF51Cu) {
        ctx->pc = 0x1DF51Cu;
            // 0x1df51c: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->pc = 0x1DF520u;
        goto label_fallthrough_0x1df518;
    }
    ctx->pc = 0x1DF518u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DF51Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DF518u;
            // 0x1df51c: 0x27bd0210  addiu       $sp, $sp, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 528));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1df518:
    ctx->pc = 0x1DF520u;
}
