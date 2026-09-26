#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: InitDungeonMain__F13INIT_LOOP_ARG
// Address: 0x1cc040 - 0x1ce130
void InitDungeonMain__F13INIT_LOOP_ARG_0x1cc040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("InitDungeonMain__F13INIT_LOOP_ARG_0x1cc040");
#endif

    switch (ctx->pc) {
        case 0x1cc040u: goto label_1cc040;
        case 0x1cc044u: goto label_1cc044;
        case 0x1cc048u: goto label_1cc048;
        case 0x1cc04cu: goto label_1cc04c;
        case 0x1cc050u: goto label_1cc050;
        case 0x1cc054u: goto label_1cc054;
        case 0x1cc058u: goto label_1cc058;
        case 0x1cc05cu: goto label_1cc05c;
        case 0x1cc060u: goto label_1cc060;
        case 0x1cc064u: goto label_1cc064;
        case 0x1cc068u: goto label_1cc068;
        case 0x1cc06cu: goto label_1cc06c;
        case 0x1cc070u: goto label_1cc070;
        case 0x1cc074u: goto label_1cc074;
        case 0x1cc078u: goto label_1cc078;
        case 0x1cc07cu: goto label_1cc07c;
        case 0x1cc080u: goto label_1cc080;
        case 0x1cc084u: goto label_1cc084;
        case 0x1cc088u: goto label_1cc088;
        case 0x1cc08cu: goto label_1cc08c;
        case 0x1cc090u: goto label_1cc090;
        case 0x1cc094u: goto label_1cc094;
        case 0x1cc098u: goto label_1cc098;
        case 0x1cc09cu: goto label_1cc09c;
        case 0x1cc0a0u: goto label_1cc0a0;
        case 0x1cc0a4u: goto label_1cc0a4;
        case 0x1cc0a8u: goto label_1cc0a8;
        case 0x1cc0acu: goto label_1cc0ac;
        case 0x1cc0b0u: goto label_1cc0b0;
        case 0x1cc0b4u: goto label_1cc0b4;
        case 0x1cc0b8u: goto label_1cc0b8;
        case 0x1cc0bcu: goto label_1cc0bc;
        case 0x1cc0c0u: goto label_1cc0c0;
        case 0x1cc0c4u: goto label_1cc0c4;
        case 0x1cc0c8u: goto label_1cc0c8;
        case 0x1cc0ccu: goto label_1cc0cc;
        case 0x1cc0d0u: goto label_1cc0d0;
        case 0x1cc0d4u: goto label_1cc0d4;
        case 0x1cc0d8u: goto label_1cc0d8;
        case 0x1cc0dcu: goto label_1cc0dc;
        case 0x1cc0e0u: goto label_1cc0e0;
        case 0x1cc0e4u: goto label_1cc0e4;
        case 0x1cc0e8u: goto label_1cc0e8;
        case 0x1cc0ecu: goto label_1cc0ec;
        case 0x1cc0f0u: goto label_1cc0f0;
        case 0x1cc0f4u: goto label_1cc0f4;
        case 0x1cc0f8u: goto label_1cc0f8;
        case 0x1cc0fcu: goto label_1cc0fc;
        case 0x1cc100u: goto label_1cc100;
        case 0x1cc104u: goto label_1cc104;
        case 0x1cc108u: goto label_1cc108;
        case 0x1cc10cu: goto label_1cc10c;
        case 0x1cc110u: goto label_1cc110;
        case 0x1cc114u: goto label_1cc114;
        case 0x1cc118u: goto label_1cc118;
        case 0x1cc11cu: goto label_1cc11c;
        case 0x1cc120u: goto label_1cc120;
        case 0x1cc124u: goto label_1cc124;
        case 0x1cc128u: goto label_1cc128;
        case 0x1cc12cu: goto label_1cc12c;
        case 0x1cc130u: goto label_1cc130;
        case 0x1cc134u: goto label_1cc134;
        case 0x1cc138u: goto label_1cc138;
        case 0x1cc13cu: goto label_1cc13c;
        case 0x1cc140u: goto label_1cc140;
        case 0x1cc144u: goto label_1cc144;
        case 0x1cc148u: goto label_1cc148;
        case 0x1cc14cu: goto label_1cc14c;
        case 0x1cc150u: goto label_1cc150;
        case 0x1cc154u: goto label_1cc154;
        case 0x1cc158u: goto label_1cc158;
        case 0x1cc15cu: goto label_1cc15c;
        case 0x1cc160u: goto label_1cc160;
        case 0x1cc164u: goto label_1cc164;
        case 0x1cc168u: goto label_1cc168;
        case 0x1cc16cu: goto label_1cc16c;
        case 0x1cc170u: goto label_1cc170;
        case 0x1cc174u: goto label_1cc174;
        case 0x1cc178u: goto label_1cc178;
        case 0x1cc17cu: goto label_1cc17c;
        case 0x1cc180u: goto label_1cc180;
        case 0x1cc184u: goto label_1cc184;
        case 0x1cc188u: goto label_1cc188;
        case 0x1cc18cu: goto label_1cc18c;
        case 0x1cc190u: goto label_1cc190;
        case 0x1cc194u: goto label_1cc194;
        case 0x1cc198u: goto label_1cc198;
        case 0x1cc19cu: goto label_1cc19c;
        case 0x1cc1a0u: goto label_1cc1a0;
        case 0x1cc1a4u: goto label_1cc1a4;
        case 0x1cc1a8u: goto label_1cc1a8;
        case 0x1cc1acu: goto label_1cc1ac;
        case 0x1cc1b0u: goto label_1cc1b0;
        case 0x1cc1b4u: goto label_1cc1b4;
        case 0x1cc1b8u: goto label_1cc1b8;
        case 0x1cc1bcu: goto label_1cc1bc;
        case 0x1cc1c0u: goto label_1cc1c0;
        case 0x1cc1c4u: goto label_1cc1c4;
        case 0x1cc1c8u: goto label_1cc1c8;
        case 0x1cc1ccu: goto label_1cc1cc;
        case 0x1cc1d0u: goto label_1cc1d0;
        case 0x1cc1d4u: goto label_1cc1d4;
        case 0x1cc1d8u: goto label_1cc1d8;
        case 0x1cc1dcu: goto label_1cc1dc;
        case 0x1cc1e0u: goto label_1cc1e0;
        case 0x1cc1e4u: goto label_1cc1e4;
        case 0x1cc1e8u: goto label_1cc1e8;
        case 0x1cc1ecu: goto label_1cc1ec;
        case 0x1cc1f0u: goto label_1cc1f0;
        case 0x1cc1f4u: goto label_1cc1f4;
        case 0x1cc1f8u: goto label_1cc1f8;
        case 0x1cc1fcu: goto label_1cc1fc;
        case 0x1cc200u: goto label_1cc200;
        case 0x1cc204u: goto label_1cc204;
        case 0x1cc208u: goto label_1cc208;
        case 0x1cc20cu: goto label_1cc20c;
        case 0x1cc210u: goto label_1cc210;
        case 0x1cc214u: goto label_1cc214;
        case 0x1cc218u: goto label_1cc218;
        case 0x1cc21cu: goto label_1cc21c;
        case 0x1cc220u: goto label_1cc220;
        case 0x1cc224u: goto label_1cc224;
        case 0x1cc228u: goto label_1cc228;
        case 0x1cc22cu: goto label_1cc22c;
        case 0x1cc230u: goto label_1cc230;
        case 0x1cc234u: goto label_1cc234;
        case 0x1cc238u: goto label_1cc238;
        case 0x1cc23cu: goto label_1cc23c;
        case 0x1cc240u: goto label_1cc240;
        case 0x1cc244u: goto label_1cc244;
        case 0x1cc248u: goto label_1cc248;
        case 0x1cc24cu: goto label_1cc24c;
        case 0x1cc250u: goto label_1cc250;
        case 0x1cc254u: goto label_1cc254;
        case 0x1cc258u: goto label_1cc258;
        case 0x1cc25cu: goto label_1cc25c;
        case 0x1cc260u: goto label_1cc260;
        case 0x1cc264u: goto label_1cc264;
        case 0x1cc268u: goto label_1cc268;
        case 0x1cc26cu: goto label_1cc26c;
        case 0x1cc270u: goto label_1cc270;
        case 0x1cc274u: goto label_1cc274;
        case 0x1cc278u: goto label_1cc278;
        case 0x1cc27cu: goto label_1cc27c;
        case 0x1cc280u: goto label_1cc280;
        case 0x1cc284u: goto label_1cc284;
        case 0x1cc288u: goto label_1cc288;
        case 0x1cc28cu: goto label_1cc28c;
        case 0x1cc290u: goto label_1cc290;
        case 0x1cc294u: goto label_1cc294;
        case 0x1cc298u: goto label_1cc298;
        case 0x1cc29cu: goto label_1cc29c;
        case 0x1cc2a0u: goto label_1cc2a0;
        case 0x1cc2a4u: goto label_1cc2a4;
        case 0x1cc2a8u: goto label_1cc2a8;
        case 0x1cc2acu: goto label_1cc2ac;
        case 0x1cc2b0u: goto label_1cc2b0;
        case 0x1cc2b4u: goto label_1cc2b4;
        case 0x1cc2b8u: goto label_1cc2b8;
        case 0x1cc2bcu: goto label_1cc2bc;
        case 0x1cc2c0u: goto label_1cc2c0;
        case 0x1cc2c4u: goto label_1cc2c4;
        case 0x1cc2c8u: goto label_1cc2c8;
        case 0x1cc2ccu: goto label_1cc2cc;
        case 0x1cc2d0u: goto label_1cc2d0;
        case 0x1cc2d4u: goto label_1cc2d4;
        case 0x1cc2d8u: goto label_1cc2d8;
        case 0x1cc2dcu: goto label_1cc2dc;
        case 0x1cc2e0u: goto label_1cc2e0;
        case 0x1cc2e4u: goto label_1cc2e4;
        case 0x1cc2e8u: goto label_1cc2e8;
        case 0x1cc2ecu: goto label_1cc2ec;
        case 0x1cc2f0u: goto label_1cc2f0;
        case 0x1cc2f4u: goto label_1cc2f4;
        case 0x1cc2f8u: goto label_1cc2f8;
        case 0x1cc2fcu: goto label_1cc2fc;
        case 0x1cc300u: goto label_1cc300;
        case 0x1cc304u: goto label_1cc304;
        case 0x1cc308u: goto label_1cc308;
        case 0x1cc30cu: goto label_1cc30c;
        case 0x1cc310u: goto label_1cc310;
        case 0x1cc314u: goto label_1cc314;
        case 0x1cc318u: goto label_1cc318;
        case 0x1cc31cu: goto label_1cc31c;
        case 0x1cc320u: goto label_1cc320;
        case 0x1cc324u: goto label_1cc324;
        case 0x1cc328u: goto label_1cc328;
        case 0x1cc32cu: goto label_1cc32c;
        case 0x1cc330u: goto label_1cc330;
        case 0x1cc334u: goto label_1cc334;
        case 0x1cc338u: goto label_1cc338;
        case 0x1cc33cu: goto label_1cc33c;
        case 0x1cc340u: goto label_1cc340;
        case 0x1cc344u: goto label_1cc344;
        case 0x1cc348u: goto label_1cc348;
        case 0x1cc34cu: goto label_1cc34c;
        case 0x1cc350u: goto label_1cc350;
        case 0x1cc354u: goto label_1cc354;
        case 0x1cc358u: goto label_1cc358;
        case 0x1cc35cu: goto label_1cc35c;
        case 0x1cc360u: goto label_1cc360;
        case 0x1cc364u: goto label_1cc364;
        case 0x1cc368u: goto label_1cc368;
        case 0x1cc36cu: goto label_1cc36c;
        case 0x1cc370u: goto label_1cc370;
        case 0x1cc374u: goto label_1cc374;
        case 0x1cc378u: goto label_1cc378;
        case 0x1cc37cu: goto label_1cc37c;
        case 0x1cc380u: goto label_1cc380;
        case 0x1cc384u: goto label_1cc384;
        case 0x1cc388u: goto label_1cc388;
        case 0x1cc38cu: goto label_1cc38c;
        case 0x1cc390u: goto label_1cc390;
        case 0x1cc394u: goto label_1cc394;
        case 0x1cc398u: goto label_1cc398;
        case 0x1cc39cu: goto label_1cc39c;
        case 0x1cc3a0u: goto label_1cc3a0;
        case 0x1cc3a4u: goto label_1cc3a4;
        case 0x1cc3a8u: goto label_1cc3a8;
        case 0x1cc3acu: goto label_1cc3ac;
        case 0x1cc3b0u: goto label_1cc3b0;
        case 0x1cc3b4u: goto label_1cc3b4;
        case 0x1cc3b8u: goto label_1cc3b8;
        case 0x1cc3bcu: goto label_1cc3bc;
        case 0x1cc3c0u: goto label_1cc3c0;
        case 0x1cc3c4u: goto label_1cc3c4;
        case 0x1cc3c8u: goto label_1cc3c8;
        case 0x1cc3ccu: goto label_1cc3cc;
        case 0x1cc3d0u: goto label_1cc3d0;
        case 0x1cc3d4u: goto label_1cc3d4;
        case 0x1cc3d8u: goto label_1cc3d8;
        case 0x1cc3dcu: goto label_1cc3dc;
        case 0x1cc3e0u: goto label_1cc3e0;
        case 0x1cc3e4u: goto label_1cc3e4;
        case 0x1cc3e8u: goto label_1cc3e8;
        case 0x1cc3ecu: goto label_1cc3ec;
        case 0x1cc3f0u: goto label_1cc3f0;
        case 0x1cc3f4u: goto label_1cc3f4;
        case 0x1cc3f8u: goto label_1cc3f8;
        case 0x1cc3fcu: goto label_1cc3fc;
        case 0x1cc400u: goto label_1cc400;
        case 0x1cc404u: goto label_1cc404;
        case 0x1cc408u: goto label_1cc408;
        case 0x1cc40cu: goto label_1cc40c;
        case 0x1cc410u: goto label_1cc410;
        case 0x1cc414u: goto label_1cc414;
        case 0x1cc418u: goto label_1cc418;
        case 0x1cc41cu: goto label_1cc41c;
        case 0x1cc420u: goto label_1cc420;
        case 0x1cc424u: goto label_1cc424;
        case 0x1cc428u: goto label_1cc428;
        case 0x1cc42cu: goto label_1cc42c;
        case 0x1cc430u: goto label_1cc430;
        case 0x1cc434u: goto label_1cc434;
        case 0x1cc438u: goto label_1cc438;
        case 0x1cc43cu: goto label_1cc43c;
        case 0x1cc440u: goto label_1cc440;
        case 0x1cc444u: goto label_1cc444;
        case 0x1cc448u: goto label_1cc448;
        case 0x1cc44cu: goto label_1cc44c;
        case 0x1cc450u: goto label_1cc450;
        case 0x1cc454u: goto label_1cc454;
        case 0x1cc458u: goto label_1cc458;
        case 0x1cc45cu: goto label_1cc45c;
        case 0x1cc460u: goto label_1cc460;
        case 0x1cc464u: goto label_1cc464;
        case 0x1cc468u: goto label_1cc468;
        case 0x1cc46cu: goto label_1cc46c;
        case 0x1cc470u: goto label_1cc470;
        case 0x1cc474u: goto label_1cc474;
        case 0x1cc478u: goto label_1cc478;
        case 0x1cc47cu: goto label_1cc47c;
        case 0x1cc480u: goto label_1cc480;
        case 0x1cc484u: goto label_1cc484;
        case 0x1cc488u: goto label_1cc488;
        case 0x1cc48cu: goto label_1cc48c;
        case 0x1cc490u: goto label_1cc490;
        case 0x1cc494u: goto label_1cc494;
        case 0x1cc498u: goto label_1cc498;
        case 0x1cc49cu: goto label_1cc49c;
        case 0x1cc4a0u: goto label_1cc4a0;
        case 0x1cc4a4u: goto label_1cc4a4;
        case 0x1cc4a8u: goto label_1cc4a8;
        case 0x1cc4acu: goto label_1cc4ac;
        case 0x1cc4b0u: goto label_1cc4b0;
        case 0x1cc4b4u: goto label_1cc4b4;
        case 0x1cc4b8u: goto label_1cc4b8;
        case 0x1cc4bcu: goto label_1cc4bc;
        case 0x1cc4c0u: goto label_1cc4c0;
        case 0x1cc4c4u: goto label_1cc4c4;
        case 0x1cc4c8u: goto label_1cc4c8;
        case 0x1cc4ccu: goto label_1cc4cc;
        case 0x1cc4d0u: goto label_1cc4d0;
        case 0x1cc4d4u: goto label_1cc4d4;
        case 0x1cc4d8u: goto label_1cc4d8;
        case 0x1cc4dcu: goto label_1cc4dc;
        case 0x1cc4e0u: goto label_1cc4e0;
        case 0x1cc4e4u: goto label_1cc4e4;
        case 0x1cc4e8u: goto label_1cc4e8;
        case 0x1cc4ecu: goto label_1cc4ec;
        case 0x1cc4f0u: goto label_1cc4f0;
        case 0x1cc4f4u: goto label_1cc4f4;
        case 0x1cc4f8u: goto label_1cc4f8;
        case 0x1cc4fcu: goto label_1cc4fc;
        case 0x1cc500u: goto label_1cc500;
        case 0x1cc504u: goto label_1cc504;
        case 0x1cc508u: goto label_1cc508;
        case 0x1cc50cu: goto label_1cc50c;
        case 0x1cc510u: goto label_1cc510;
        case 0x1cc514u: goto label_1cc514;
        case 0x1cc518u: goto label_1cc518;
        case 0x1cc51cu: goto label_1cc51c;
        case 0x1cc520u: goto label_1cc520;
        case 0x1cc524u: goto label_1cc524;
        case 0x1cc528u: goto label_1cc528;
        case 0x1cc52cu: goto label_1cc52c;
        case 0x1cc530u: goto label_1cc530;
        case 0x1cc534u: goto label_1cc534;
        case 0x1cc538u: goto label_1cc538;
        case 0x1cc53cu: goto label_1cc53c;
        case 0x1cc540u: goto label_1cc540;
        case 0x1cc544u: goto label_1cc544;
        case 0x1cc548u: goto label_1cc548;
        case 0x1cc54cu: goto label_1cc54c;
        case 0x1cc550u: goto label_1cc550;
        case 0x1cc554u: goto label_1cc554;
        case 0x1cc558u: goto label_1cc558;
        case 0x1cc55cu: goto label_1cc55c;
        case 0x1cc560u: goto label_1cc560;
        case 0x1cc564u: goto label_1cc564;
        case 0x1cc568u: goto label_1cc568;
        case 0x1cc56cu: goto label_1cc56c;
        case 0x1cc570u: goto label_1cc570;
        case 0x1cc574u: goto label_1cc574;
        case 0x1cc578u: goto label_1cc578;
        case 0x1cc57cu: goto label_1cc57c;
        case 0x1cc580u: goto label_1cc580;
        case 0x1cc584u: goto label_1cc584;
        case 0x1cc588u: goto label_1cc588;
        case 0x1cc58cu: goto label_1cc58c;
        case 0x1cc590u: goto label_1cc590;
        case 0x1cc594u: goto label_1cc594;
        case 0x1cc598u: goto label_1cc598;
        case 0x1cc59cu: goto label_1cc59c;
        case 0x1cc5a0u: goto label_1cc5a0;
        case 0x1cc5a4u: goto label_1cc5a4;
        case 0x1cc5a8u: goto label_1cc5a8;
        case 0x1cc5acu: goto label_1cc5ac;
        case 0x1cc5b0u: goto label_1cc5b0;
        case 0x1cc5b4u: goto label_1cc5b4;
        case 0x1cc5b8u: goto label_1cc5b8;
        case 0x1cc5bcu: goto label_1cc5bc;
        case 0x1cc5c0u: goto label_1cc5c0;
        case 0x1cc5c4u: goto label_1cc5c4;
        case 0x1cc5c8u: goto label_1cc5c8;
        case 0x1cc5ccu: goto label_1cc5cc;
        case 0x1cc5d0u: goto label_1cc5d0;
        case 0x1cc5d4u: goto label_1cc5d4;
        case 0x1cc5d8u: goto label_1cc5d8;
        case 0x1cc5dcu: goto label_1cc5dc;
        case 0x1cc5e0u: goto label_1cc5e0;
        case 0x1cc5e4u: goto label_1cc5e4;
        case 0x1cc5e8u: goto label_1cc5e8;
        case 0x1cc5ecu: goto label_1cc5ec;
        case 0x1cc5f0u: goto label_1cc5f0;
        case 0x1cc5f4u: goto label_1cc5f4;
        case 0x1cc5f8u: goto label_1cc5f8;
        case 0x1cc5fcu: goto label_1cc5fc;
        case 0x1cc600u: goto label_1cc600;
        case 0x1cc604u: goto label_1cc604;
        case 0x1cc608u: goto label_1cc608;
        case 0x1cc60cu: goto label_1cc60c;
        case 0x1cc610u: goto label_1cc610;
        case 0x1cc614u: goto label_1cc614;
        case 0x1cc618u: goto label_1cc618;
        case 0x1cc61cu: goto label_1cc61c;
        case 0x1cc620u: goto label_1cc620;
        case 0x1cc624u: goto label_1cc624;
        case 0x1cc628u: goto label_1cc628;
        case 0x1cc62cu: goto label_1cc62c;
        case 0x1cc630u: goto label_1cc630;
        case 0x1cc634u: goto label_1cc634;
        case 0x1cc638u: goto label_1cc638;
        case 0x1cc63cu: goto label_1cc63c;
        case 0x1cc640u: goto label_1cc640;
        case 0x1cc644u: goto label_1cc644;
        case 0x1cc648u: goto label_1cc648;
        case 0x1cc64cu: goto label_1cc64c;
        case 0x1cc650u: goto label_1cc650;
        case 0x1cc654u: goto label_1cc654;
        case 0x1cc658u: goto label_1cc658;
        case 0x1cc65cu: goto label_1cc65c;
        case 0x1cc660u: goto label_1cc660;
        case 0x1cc664u: goto label_1cc664;
        case 0x1cc668u: goto label_1cc668;
        case 0x1cc66cu: goto label_1cc66c;
        case 0x1cc670u: goto label_1cc670;
        case 0x1cc674u: goto label_1cc674;
        case 0x1cc678u: goto label_1cc678;
        case 0x1cc67cu: goto label_1cc67c;
        case 0x1cc680u: goto label_1cc680;
        case 0x1cc684u: goto label_1cc684;
        case 0x1cc688u: goto label_1cc688;
        case 0x1cc68cu: goto label_1cc68c;
        case 0x1cc690u: goto label_1cc690;
        case 0x1cc694u: goto label_1cc694;
        case 0x1cc698u: goto label_1cc698;
        case 0x1cc69cu: goto label_1cc69c;
        case 0x1cc6a0u: goto label_1cc6a0;
        case 0x1cc6a4u: goto label_1cc6a4;
        case 0x1cc6a8u: goto label_1cc6a8;
        case 0x1cc6acu: goto label_1cc6ac;
        case 0x1cc6b0u: goto label_1cc6b0;
        case 0x1cc6b4u: goto label_1cc6b4;
        case 0x1cc6b8u: goto label_1cc6b8;
        case 0x1cc6bcu: goto label_1cc6bc;
        case 0x1cc6c0u: goto label_1cc6c0;
        case 0x1cc6c4u: goto label_1cc6c4;
        case 0x1cc6c8u: goto label_1cc6c8;
        case 0x1cc6ccu: goto label_1cc6cc;
        case 0x1cc6d0u: goto label_1cc6d0;
        case 0x1cc6d4u: goto label_1cc6d4;
        case 0x1cc6d8u: goto label_1cc6d8;
        case 0x1cc6dcu: goto label_1cc6dc;
        case 0x1cc6e0u: goto label_1cc6e0;
        case 0x1cc6e4u: goto label_1cc6e4;
        case 0x1cc6e8u: goto label_1cc6e8;
        case 0x1cc6ecu: goto label_1cc6ec;
        case 0x1cc6f0u: goto label_1cc6f0;
        case 0x1cc6f4u: goto label_1cc6f4;
        case 0x1cc6f8u: goto label_1cc6f8;
        case 0x1cc6fcu: goto label_1cc6fc;
        case 0x1cc700u: goto label_1cc700;
        case 0x1cc704u: goto label_1cc704;
        case 0x1cc708u: goto label_1cc708;
        case 0x1cc70cu: goto label_1cc70c;
        case 0x1cc710u: goto label_1cc710;
        case 0x1cc714u: goto label_1cc714;
        case 0x1cc718u: goto label_1cc718;
        case 0x1cc71cu: goto label_1cc71c;
        case 0x1cc720u: goto label_1cc720;
        case 0x1cc724u: goto label_1cc724;
        case 0x1cc728u: goto label_1cc728;
        case 0x1cc72cu: goto label_1cc72c;
        case 0x1cc730u: goto label_1cc730;
        case 0x1cc734u: goto label_1cc734;
        case 0x1cc738u: goto label_1cc738;
        case 0x1cc73cu: goto label_1cc73c;
        case 0x1cc740u: goto label_1cc740;
        case 0x1cc744u: goto label_1cc744;
        case 0x1cc748u: goto label_1cc748;
        case 0x1cc74cu: goto label_1cc74c;
        case 0x1cc750u: goto label_1cc750;
        case 0x1cc754u: goto label_1cc754;
        case 0x1cc758u: goto label_1cc758;
        case 0x1cc75cu: goto label_1cc75c;
        case 0x1cc760u: goto label_1cc760;
        case 0x1cc764u: goto label_1cc764;
        case 0x1cc768u: goto label_1cc768;
        case 0x1cc76cu: goto label_1cc76c;
        case 0x1cc770u: goto label_1cc770;
        case 0x1cc774u: goto label_1cc774;
        case 0x1cc778u: goto label_1cc778;
        case 0x1cc77cu: goto label_1cc77c;
        case 0x1cc780u: goto label_1cc780;
        case 0x1cc784u: goto label_1cc784;
        case 0x1cc788u: goto label_1cc788;
        case 0x1cc78cu: goto label_1cc78c;
        case 0x1cc790u: goto label_1cc790;
        case 0x1cc794u: goto label_1cc794;
        case 0x1cc798u: goto label_1cc798;
        case 0x1cc79cu: goto label_1cc79c;
        case 0x1cc7a0u: goto label_1cc7a0;
        case 0x1cc7a4u: goto label_1cc7a4;
        case 0x1cc7a8u: goto label_1cc7a8;
        case 0x1cc7acu: goto label_1cc7ac;
        case 0x1cc7b0u: goto label_1cc7b0;
        case 0x1cc7b4u: goto label_1cc7b4;
        case 0x1cc7b8u: goto label_1cc7b8;
        case 0x1cc7bcu: goto label_1cc7bc;
        case 0x1cc7c0u: goto label_1cc7c0;
        case 0x1cc7c4u: goto label_1cc7c4;
        case 0x1cc7c8u: goto label_1cc7c8;
        case 0x1cc7ccu: goto label_1cc7cc;
        case 0x1cc7d0u: goto label_1cc7d0;
        case 0x1cc7d4u: goto label_1cc7d4;
        case 0x1cc7d8u: goto label_1cc7d8;
        case 0x1cc7dcu: goto label_1cc7dc;
        case 0x1cc7e0u: goto label_1cc7e0;
        case 0x1cc7e4u: goto label_1cc7e4;
        case 0x1cc7e8u: goto label_1cc7e8;
        case 0x1cc7ecu: goto label_1cc7ec;
        case 0x1cc7f0u: goto label_1cc7f0;
        case 0x1cc7f4u: goto label_1cc7f4;
        case 0x1cc7f8u: goto label_1cc7f8;
        case 0x1cc7fcu: goto label_1cc7fc;
        case 0x1cc800u: goto label_1cc800;
        case 0x1cc804u: goto label_1cc804;
        case 0x1cc808u: goto label_1cc808;
        case 0x1cc80cu: goto label_1cc80c;
        case 0x1cc810u: goto label_1cc810;
        case 0x1cc814u: goto label_1cc814;
        case 0x1cc818u: goto label_1cc818;
        case 0x1cc81cu: goto label_1cc81c;
        case 0x1cc820u: goto label_1cc820;
        case 0x1cc824u: goto label_1cc824;
        case 0x1cc828u: goto label_1cc828;
        case 0x1cc82cu: goto label_1cc82c;
        case 0x1cc830u: goto label_1cc830;
        case 0x1cc834u: goto label_1cc834;
        case 0x1cc838u: goto label_1cc838;
        case 0x1cc83cu: goto label_1cc83c;
        case 0x1cc840u: goto label_1cc840;
        case 0x1cc844u: goto label_1cc844;
        case 0x1cc848u: goto label_1cc848;
        case 0x1cc84cu: goto label_1cc84c;
        case 0x1cc850u: goto label_1cc850;
        case 0x1cc854u: goto label_1cc854;
        case 0x1cc858u: goto label_1cc858;
        case 0x1cc85cu: goto label_1cc85c;
        case 0x1cc860u: goto label_1cc860;
        case 0x1cc864u: goto label_1cc864;
        case 0x1cc868u: goto label_1cc868;
        case 0x1cc86cu: goto label_1cc86c;
        case 0x1cc870u: goto label_1cc870;
        case 0x1cc874u: goto label_1cc874;
        case 0x1cc878u: goto label_1cc878;
        case 0x1cc87cu: goto label_1cc87c;
        case 0x1cc880u: goto label_1cc880;
        case 0x1cc884u: goto label_1cc884;
        case 0x1cc888u: goto label_1cc888;
        case 0x1cc88cu: goto label_1cc88c;
        case 0x1cc890u: goto label_1cc890;
        case 0x1cc894u: goto label_1cc894;
        case 0x1cc898u: goto label_1cc898;
        case 0x1cc89cu: goto label_1cc89c;
        case 0x1cc8a0u: goto label_1cc8a0;
        case 0x1cc8a4u: goto label_1cc8a4;
        case 0x1cc8a8u: goto label_1cc8a8;
        case 0x1cc8acu: goto label_1cc8ac;
        case 0x1cc8b0u: goto label_1cc8b0;
        case 0x1cc8b4u: goto label_1cc8b4;
        case 0x1cc8b8u: goto label_1cc8b8;
        case 0x1cc8bcu: goto label_1cc8bc;
        case 0x1cc8c0u: goto label_1cc8c0;
        case 0x1cc8c4u: goto label_1cc8c4;
        case 0x1cc8c8u: goto label_1cc8c8;
        case 0x1cc8ccu: goto label_1cc8cc;
        case 0x1cc8d0u: goto label_1cc8d0;
        case 0x1cc8d4u: goto label_1cc8d4;
        case 0x1cc8d8u: goto label_1cc8d8;
        case 0x1cc8dcu: goto label_1cc8dc;
        case 0x1cc8e0u: goto label_1cc8e0;
        case 0x1cc8e4u: goto label_1cc8e4;
        case 0x1cc8e8u: goto label_1cc8e8;
        case 0x1cc8ecu: goto label_1cc8ec;
        case 0x1cc8f0u: goto label_1cc8f0;
        case 0x1cc8f4u: goto label_1cc8f4;
        case 0x1cc8f8u: goto label_1cc8f8;
        case 0x1cc8fcu: goto label_1cc8fc;
        case 0x1cc900u: goto label_1cc900;
        case 0x1cc904u: goto label_1cc904;
        case 0x1cc908u: goto label_1cc908;
        case 0x1cc90cu: goto label_1cc90c;
        case 0x1cc910u: goto label_1cc910;
        case 0x1cc914u: goto label_1cc914;
        case 0x1cc918u: goto label_1cc918;
        case 0x1cc91cu: goto label_1cc91c;
        case 0x1cc920u: goto label_1cc920;
        case 0x1cc924u: goto label_1cc924;
        case 0x1cc928u: goto label_1cc928;
        case 0x1cc92cu: goto label_1cc92c;
        case 0x1cc930u: goto label_1cc930;
        case 0x1cc934u: goto label_1cc934;
        case 0x1cc938u: goto label_1cc938;
        case 0x1cc93cu: goto label_1cc93c;
        case 0x1cc940u: goto label_1cc940;
        case 0x1cc944u: goto label_1cc944;
        case 0x1cc948u: goto label_1cc948;
        case 0x1cc94cu: goto label_1cc94c;
        case 0x1cc950u: goto label_1cc950;
        case 0x1cc954u: goto label_1cc954;
        case 0x1cc958u: goto label_1cc958;
        case 0x1cc95cu: goto label_1cc95c;
        case 0x1cc960u: goto label_1cc960;
        case 0x1cc964u: goto label_1cc964;
        case 0x1cc968u: goto label_1cc968;
        case 0x1cc96cu: goto label_1cc96c;
        case 0x1cc970u: goto label_1cc970;
        case 0x1cc974u: goto label_1cc974;
        case 0x1cc978u: goto label_1cc978;
        case 0x1cc97cu: goto label_1cc97c;
        case 0x1cc980u: goto label_1cc980;
        case 0x1cc984u: goto label_1cc984;
        case 0x1cc988u: goto label_1cc988;
        case 0x1cc98cu: goto label_1cc98c;
        case 0x1cc990u: goto label_1cc990;
        case 0x1cc994u: goto label_1cc994;
        case 0x1cc998u: goto label_1cc998;
        case 0x1cc99cu: goto label_1cc99c;
        case 0x1cc9a0u: goto label_1cc9a0;
        case 0x1cc9a4u: goto label_1cc9a4;
        case 0x1cc9a8u: goto label_1cc9a8;
        case 0x1cc9acu: goto label_1cc9ac;
        case 0x1cc9b0u: goto label_1cc9b0;
        case 0x1cc9b4u: goto label_1cc9b4;
        case 0x1cc9b8u: goto label_1cc9b8;
        case 0x1cc9bcu: goto label_1cc9bc;
        case 0x1cc9c0u: goto label_1cc9c0;
        case 0x1cc9c4u: goto label_1cc9c4;
        case 0x1cc9c8u: goto label_1cc9c8;
        case 0x1cc9ccu: goto label_1cc9cc;
        case 0x1cc9d0u: goto label_1cc9d0;
        case 0x1cc9d4u: goto label_1cc9d4;
        case 0x1cc9d8u: goto label_1cc9d8;
        case 0x1cc9dcu: goto label_1cc9dc;
        case 0x1cc9e0u: goto label_1cc9e0;
        case 0x1cc9e4u: goto label_1cc9e4;
        case 0x1cc9e8u: goto label_1cc9e8;
        case 0x1cc9ecu: goto label_1cc9ec;
        case 0x1cc9f0u: goto label_1cc9f0;
        case 0x1cc9f4u: goto label_1cc9f4;
        case 0x1cc9f8u: goto label_1cc9f8;
        case 0x1cc9fcu: goto label_1cc9fc;
        case 0x1cca00u: goto label_1cca00;
        case 0x1cca04u: goto label_1cca04;
        case 0x1cca08u: goto label_1cca08;
        case 0x1cca0cu: goto label_1cca0c;
        case 0x1cca10u: goto label_1cca10;
        case 0x1cca14u: goto label_1cca14;
        case 0x1cca18u: goto label_1cca18;
        case 0x1cca1cu: goto label_1cca1c;
        case 0x1cca20u: goto label_1cca20;
        case 0x1cca24u: goto label_1cca24;
        case 0x1cca28u: goto label_1cca28;
        case 0x1cca2cu: goto label_1cca2c;
        case 0x1cca30u: goto label_1cca30;
        case 0x1cca34u: goto label_1cca34;
        case 0x1cca38u: goto label_1cca38;
        case 0x1cca3cu: goto label_1cca3c;
        case 0x1cca40u: goto label_1cca40;
        case 0x1cca44u: goto label_1cca44;
        case 0x1cca48u: goto label_1cca48;
        case 0x1cca4cu: goto label_1cca4c;
        case 0x1cca50u: goto label_1cca50;
        case 0x1cca54u: goto label_1cca54;
        case 0x1cca58u: goto label_1cca58;
        case 0x1cca5cu: goto label_1cca5c;
        case 0x1cca60u: goto label_1cca60;
        case 0x1cca64u: goto label_1cca64;
        case 0x1cca68u: goto label_1cca68;
        case 0x1cca6cu: goto label_1cca6c;
        case 0x1cca70u: goto label_1cca70;
        case 0x1cca74u: goto label_1cca74;
        case 0x1cca78u: goto label_1cca78;
        case 0x1cca7cu: goto label_1cca7c;
        case 0x1cca80u: goto label_1cca80;
        case 0x1cca84u: goto label_1cca84;
        case 0x1cca88u: goto label_1cca88;
        case 0x1cca8cu: goto label_1cca8c;
        case 0x1cca90u: goto label_1cca90;
        case 0x1cca94u: goto label_1cca94;
        case 0x1cca98u: goto label_1cca98;
        case 0x1cca9cu: goto label_1cca9c;
        case 0x1ccaa0u: goto label_1ccaa0;
        case 0x1ccaa4u: goto label_1ccaa4;
        case 0x1ccaa8u: goto label_1ccaa8;
        case 0x1ccaacu: goto label_1ccaac;
        case 0x1ccab0u: goto label_1ccab0;
        case 0x1ccab4u: goto label_1ccab4;
        case 0x1ccab8u: goto label_1ccab8;
        case 0x1ccabcu: goto label_1ccabc;
        case 0x1ccac0u: goto label_1ccac0;
        case 0x1ccac4u: goto label_1ccac4;
        case 0x1ccac8u: goto label_1ccac8;
        case 0x1ccaccu: goto label_1ccacc;
        case 0x1ccad0u: goto label_1ccad0;
        case 0x1ccad4u: goto label_1ccad4;
        case 0x1ccad8u: goto label_1ccad8;
        case 0x1ccadcu: goto label_1ccadc;
        case 0x1ccae0u: goto label_1ccae0;
        case 0x1ccae4u: goto label_1ccae4;
        case 0x1ccae8u: goto label_1ccae8;
        case 0x1ccaecu: goto label_1ccaec;
        case 0x1ccaf0u: goto label_1ccaf0;
        case 0x1ccaf4u: goto label_1ccaf4;
        case 0x1ccaf8u: goto label_1ccaf8;
        case 0x1ccafcu: goto label_1ccafc;
        case 0x1ccb00u: goto label_1ccb00;
        case 0x1ccb04u: goto label_1ccb04;
        case 0x1ccb08u: goto label_1ccb08;
        case 0x1ccb0cu: goto label_1ccb0c;
        case 0x1ccb10u: goto label_1ccb10;
        case 0x1ccb14u: goto label_1ccb14;
        case 0x1ccb18u: goto label_1ccb18;
        case 0x1ccb1cu: goto label_1ccb1c;
        case 0x1ccb20u: goto label_1ccb20;
        case 0x1ccb24u: goto label_1ccb24;
        case 0x1ccb28u: goto label_1ccb28;
        case 0x1ccb2cu: goto label_1ccb2c;
        case 0x1ccb30u: goto label_1ccb30;
        case 0x1ccb34u: goto label_1ccb34;
        case 0x1ccb38u: goto label_1ccb38;
        case 0x1ccb3cu: goto label_1ccb3c;
        case 0x1ccb40u: goto label_1ccb40;
        case 0x1ccb44u: goto label_1ccb44;
        case 0x1ccb48u: goto label_1ccb48;
        case 0x1ccb4cu: goto label_1ccb4c;
        case 0x1ccb50u: goto label_1ccb50;
        case 0x1ccb54u: goto label_1ccb54;
        case 0x1ccb58u: goto label_1ccb58;
        case 0x1ccb5cu: goto label_1ccb5c;
        case 0x1ccb60u: goto label_1ccb60;
        case 0x1ccb64u: goto label_1ccb64;
        case 0x1ccb68u: goto label_1ccb68;
        case 0x1ccb6cu: goto label_1ccb6c;
        case 0x1ccb70u: goto label_1ccb70;
        case 0x1ccb74u: goto label_1ccb74;
        case 0x1ccb78u: goto label_1ccb78;
        case 0x1ccb7cu: goto label_1ccb7c;
        case 0x1ccb80u: goto label_1ccb80;
        case 0x1ccb84u: goto label_1ccb84;
        case 0x1ccb88u: goto label_1ccb88;
        case 0x1ccb8cu: goto label_1ccb8c;
        case 0x1ccb90u: goto label_1ccb90;
        case 0x1ccb94u: goto label_1ccb94;
        case 0x1ccb98u: goto label_1ccb98;
        case 0x1ccb9cu: goto label_1ccb9c;
        case 0x1ccba0u: goto label_1ccba0;
        case 0x1ccba4u: goto label_1ccba4;
        case 0x1ccba8u: goto label_1ccba8;
        case 0x1ccbacu: goto label_1ccbac;
        case 0x1ccbb0u: goto label_1ccbb0;
        case 0x1ccbb4u: goto label_1ccbb4;
        case 0x1ccbb8u: goto label_1ccbb8;
        case 0x1ccbbcu: goto label_1ccbbc;
        case 0x1ccbc0u: goto label_1ccbc0;
        case 0x1ccbc4u: goto label_1ccbc4;
        case 0x1ccbc8u: goto label_1ccbc8;
        case 0x1ccbccu: goto label_1ccbcc;
        case 0x1ccbd0u: goto label_1ccbd0;
        case 0x1ccbd4u: goto label_1ccbd4;
        case 0x1ccbd8u: goto label_1ccbd8;
        case 0x1ccbdcu: goto label_1ccbdc;
        case 0x1ccbe0u: goto label_1ccbe0;
        case 0x1ccbe4u: goto label_1ccbe4;
        case 0x1ccbe8u: goto label_1ccbe8;
        case 0x1ccbecu: goto label_1ccbec;
        case 0x1ccbf0u: goto label_1ccbf0;
        case 0x1ccbf4u: goto label_1ccbf4;
        case 0x1ccbf8u: goto label_1ccbf8;
        case 0x1ccbfcu: goto label_1ccbfc;
        case 0x1ccc00u: goto label_1ccc00;
        case 0x1ccc04u: goto label_1ccc04;
        case 0x1ccc08u: goto label_1ccc08;
        case 0x1ccc0cu: goto label_1ccc0c;
        case 0x1ccc10u: goto label_1ccc10;
        case 0x1ccc14u: goto label_1ccc14;
        case 0x1ccc18u: goto label_1ccc18;
        case 0x1ccc1cu: goto label_1ccc1c;
        case 0x1ccc20u: goto label_1ccc20;
        case 0x1ccc24u: goto label_1ccc24;
        case 0x1ccc28u: goto label_1ccc28;
        case 0x1ccc2cu: goto label_1ccc2c;
        case 0x1ccc30u: goto label_1ccc30;
        case 0x1ccc34u: goto label_1ccc34;
        case 0x1ccc38u: goto label_1ccc38;
        case 0x1ccc3cu: goto label_1ccc3c;
        case 0x1ccc40u: goto label_1ccc40;
        case 0x1ccc44u: goto label_1ccc44;
        case 0x1ccc48u: goto label_1ccc48;
        case 0x1ccc4cu: goto label_1ccc4c;
        case 0x1ccc50u: goto label_1ccc50;
        case 0x1ccc54u: goto label_1ccc54;
        case 0x1ccc58u: goto label_1ccc58;
        case 0x1ccc5cu: goto label_1ccc5c;
        case 0x1ccc60u: goto label_1ccc60;
        case 0x1ccc64u: goto label_1ccc64;
        case 0x1ccc68u: goto label_1ccc68;
        case 0x1ccc6cu: goto label_1ccc6c;
        case 0x1ccc70u: goto label_1ccc70;
        case 0x1ccc74u: goto label_1ccc74;
        case 0x1ccc78u: goto label_1ccc78;
        case 0x1ccc7cu: goto label_1ccc7c;
        case 0x1ccc80u: goto label_1ccc80;
        case 0x1ccc84u: goto label_1ccc84;
        case 0x1ccc88u: goto label_1ccc88;
        case 0x1ccc8cu: goto label_1ccc8c;
        case 0x1ccc90u: goto label_1ccc90;
        case 0x1ccc94u: goto label_1ccc94;
        case 0x1ccc98u: goto label_1ccc98;
        case 0x1ccc9cu: goto label_1ccc9c;
        case 0x1ccca0u: goto label_1ccca0;
        case 0x1ccca4u: goto label_1ccca4;
        case 0x1ccca8u: goto label_1ccca8;
        case 0x1cccacu: goto label_1cccac;
        case 0x1cccb0u: goto label_1cccb0;
        case 0x1cccb4u: goto label_1cccb4;
        case 0x1cccb8u: goto label_1cccb8;
        case 0x1cccbcu: goto label_1cccbc;
        case 0x1cccc0u: goto label_1cccc0;
        case 0x1cccc4u: goto label_1cccc4;
        case 0x1cccc8u: goto label_1cccc8;
        case 0x1cccccu: goto label_1ccccc;
        case 0x1cccd0u: goto label_1cccd0;
        case 0x1cccd4u: goto label_1cccd4;
        case 0x1cccd8u: goto label_1cccd8;
        case 0x1cccdcu: goto label_1cccdc;
        case 0x1ccce0u: goto label_1ccce0;
        case 0x1ccce4u: goto label_1ccce4;
        case 0x1ccce8u: goto label_1ccce8;
        case 0x1cccecu: goto label_1cccec;
        case 0x1cccf0u: goto label_1cccf0;
        case 0x1cccf4u: goto label_1cccf4;
        case 0x1cccf8u: goto label_1cccf8;
        case 0x1cccfcu: goto label_1cccfc;
        case 0x1ccd00u: goto label_1ccd00;
        case 0x1ccd04u: goto label_1ccd04;
        case 0x1ccd08u: goto label_1ccd08;
        case 0x1ccd0cu: goto label_1ccd0c;
        case 0x1ccd10u: goto label_1ccd10;
        case 0x1ccd14u: goto label_1ccd14;
        case 0x1ccd18u: goto label_1ccd18;
        case 0x1ccd1cu: goto label_1ccd1c;
        case 0x1ccd20u: goto label_1ccd20;
        case 0x1ccd24u: goto label_1ccd24;
        case 0x1ccd28u: goto label_1ccd28;
        case 0x1ccd2cu: goto label_1ccd2c;
        case 0x1ccd30u: goto label_1ccd30;
        case 0x1ccd34u: goto label_1ccd34;
        case 0x1ccd38u: goto label_1ccd38;
        case 0x1ccd3cu: goto label_1ccd3c;
        case 0x1ccd40u: goto label_1ccd40;
        case 0x1ccd44u: goto label_1ccd44;
        case 0x1ccd48u: goto label_1ccd48;
        case 0x1ccd4cu: goto label_1ccd4c;
        case 0x1ccd50u: goto label_1ccd50;
        case 0x1ccd54u: goto label_1ccd54;
        case 0x1ccd58u: goto label_1ccd58;
        case 0x1ccd5cu: goto label_1ccd5c;
        case 0x1ccd60u: goto label_1ccd60;
        case 0x1ccd64u: goto label_1ccd64;
        case 0x1ccd68u: goto label_1ccd68;
        case 0x1ccd6cu: goto label_1ccd6c;
        case 0x1ccd70u: goto label_1ccd70;
        case 0x1ccd74u: goto label_1ccd74;
        case 0x1ccd78u: goto label_1ccd78;
        case 0x1ccd7cu: goto label_1ccd7c;
        case 0x1ccd80u: goto label_1ccd80;
        case 0x1ccd84u: goto label_1ccd84;
        case 0x1ccd88u: goto label_1ccd88;
        case 0x1ccd8cu: goto label_1ccd8c;
        case 0x1ccd90u: goto label_1ccd90;
        case 0x1ccd94u: goto label_1ccd94;
        case 0x1ccd98u: goto label_1ccd98;
        case 0x1ccd9cu: goto label_1ccd9c;
        case 0x1ccda0u: goto label_1ccda0;
        case 0x1ccda4u: goto label_1ccda4;
        case 0x1ccda8u: goto label_1ccda8;
        case 0x1ccdacu: goto label_1ccdac;
        case 0x1ccdb0u: goto label_1ccdb0;
        case 0x1ccdb4u: goto label_1ccdb4;
        case 0x1ccdb8u: goto label_1ccdb8;
        case 0x1ccdbcu: goto label_1ccdbc;
        case 0x1ccdc0u: goto label_1ccdc0;
        case 0x1ccdc4u: goto label_1ccdc4;
        case 0x1ccdc8u: goto label_1ccdc8;
        case 0x1ccdccu: goto label_1ccdcc;
        case 0x1ccdd0u: goto label_1ccdd0;
        case 0x1ccdd4u: goto label_1ccdd4;
        case 0x1ccdd8u: goto label_1ccdd8;
        case 0x1ccddcu: goto label_1ccddc;
        case 0x1ccde0u: goto label_1ccde0;
        case 0x1ccde4u: goto label_1ccde4;
        case 0x1ccde8u: goto label_1ccde8;
        case 0x1ccdecu: goto label_1ccdec;
        case 0x1ccdf0u: goto label_1ccdf0;
        case 0x1ccdf4u: goto label_1ccdf4;
        case 0x1ccdf8u: goto label_1ccdf8;
        case 0x1ccdfcu: goto label_1ccdfc;
        case 0x1cce00u: goto label_1cce00;
        case 0x1cce04u: goto label_1cce04;
        case 0x1cce08u: goto label_1cce08;
        case 0x1cce0cu: goto label_1cce0c;
        case 0x1cce10u: goto label_1cce10;
        case 0x1cce14u: goto label_1cce14;
        case 0x1cce18u: goto label_1cce18;
        case 0x1cce1cu: goto label_1cce1c;
        case 0x1cce20u: goto label_1cce20;
        case 0x1cce24u: goto label_1cce24;
        case 0x1cce28u: goto label_1cce28;
        case 0x1cce2cu: goto label_1cce2c;
        case 0x1cce30u: goto label_1cce30;
        case 0x1cce34u: goto label_1cce34;
        case 0x1cce38u: goto label_1cce38;
        case 0x1cce3cu: goto label_1cce3c;
        case 0x1cce40u: goto label_1cce40;
        case 0x1cce44u: goto label_1cce44;
        case 0x1cce48u: goto label_1cce48;
        case 0x1cce4cu: goto label_1cce4c;
        case 0x1cce50u: goto label_1cce50;
        case 0x1cce54u: goto label_1cce54;
        case 0x1cce58u: goto label_1cce58;
        case 0x1cce5cu: goto label_1cce5c;
        case 0x1cce60u: goto label_1cce60;
        case 0x1cce64u: goto label_1cce64;
        case 0x1cce68u: goto label_1cce68;
        case 0x1cce6cu: goto label_1cce6c;
        case 0x1cce70u: goto label_1cce70;
        case 0x1cce74u: goto label_1cce74;
        case 0x1cce78u: goto label_1cce78;
        case 0x1cce7cu: goto label_1cce7c;
        case 0x1cce80u: goto label_1cce80;
        case 0x1cce84u: goto label_1cce84;
        case 0x1cce88u: goto label_1cce88;
        case 0x1cce8cu: goto label_1cce8c;
        case 0x1cce90u: goto label_1cce90;
        case 0x1cce94u: goto label_1cce94;
        case 0x1cce98u: goto label_1cce98;
        case 0x1cce9cu: goto label_1cce9c;
        case 0x1ccea0u: goto label_1ccea0;
        case 0x1ccea4u: goto label_1ccea4;
        case 0x1ccea8u: goto label_1ccea8;
        case 0x1cceacu: goto label_1cceac;
        case 0x1cceb0u: goto label_1cceb0;
        case 0x1cceb4u: goto label_1cceb4;
        case 0x1cceb8u: goto label_1cceb8;
        case 0x1ccebcu: goto label_1ccebc;
        case 0x1ccec0u: goto label_1ccec0;
        case 0x1ccec4u: goto label_1ccec4;
        case 0x1ccec8u: goto label_1ccec8;
        case 0x1cceccu: goto label_1ccecc;
        case 0x1cced0u: goto label_1cced0;
        case 0x1cced4u: goto label_1cced4;
        case 0x1cced8u: goto label_1cced8;
        case 0x1ccedcu: goto label_1ccedc;
        case 0x1ccee0u: goto label_1ccee0;
        case 0x1ccee4u: goto label_1ccee4;
        case 0x1ccee8u: goto label_1ccee8;
        case 0x1cceecu: goto label_1cceec;
        case 0x1ccef0u: goto label_1ccef0;
        case 0x1ccef4u: goto label_1ccef4;
        case 0x1ccef8u: goto label_1ccef8;
        case 0x1ccefcu: goto label_1ccefc;
        case 0x1ccf00u: goto label_1ccf00;
        case 0x1ccf04u: goto label_1ccf04;
        case 0x1ccf08u: goto label_1ccf08;
        case 0x1ccf0cu: goto label_1ccf0c;
        case 0x1ccf10u: goto label_1ccf10;
        case 0x1ccf14u: goto label_1ccf14;
        case 0x1ccf18u: goto label_1ccf18;
        case 0x1ccf1cu: goto label_1ccf1c;
        case 0x1ccf20u: goto label_1ccf20;
        case 0x1ccf24u: goto label_1ccf24;
        case 0x1ccf28u: goto label_1ccf28;
        case 0x1ccf2cu: goto label_1ccf2c;
        case 0x1ccf30u: goto label_1ccf30;
        case 0x1ccf34u: goto label_1ccf34;
        case 0x1ccf38u: goto label_1ccf38;
        case 0x1ccf3cu: goto label_1ccf3c;
        case 0x1ccf40u: goto label_1ccf40;
        case 0x1ccf44u: goto label_1ccf44;
        case 0x1ccf48u: goto label_1ccf48;
        case 0x1ccf4cu: goto label_1ccf4c;
        case 0x1ccf50u: goto label_1ccf50;
        case 0x1ccf54u: goto label_1ccf54;
        case 0x1ccf58u: goto label_1ccf58;
        case 0x1ccf5cu: goto label_1ccf5c;
        case 0x1ccf60u: goto label_1ccf60;
        case 0x1ccf64u: goto label_1ccf64;
        case 0x1ccf68u: goto label_1ccf68;
        case 0x1ccf6cu: goto label_1ccf6c;
        case 0x1ccf70u: goto label_1ccf70;
        case 0x1ccf74u: goto label_1ccf74;
        case 0x1ccf78u: goto label_1ccf78;
        case 0x1ccf7cu: goto label_1ccf7c;
        case 0x1ccf80u: goto label_1ccf80;
        case 0x1ccf84u: goto label_1ccf84;
        case 0x1ccf88u: goto label_1ccf88;
        case 0x1ccf8cu: goto label_1ccf8c;
        case 0x1ccf90u: goto label_1ccf90;
        case 0x1ccf94u: goto label_1ccf94;
        case 0x1ccf98u: goto label_1ccf98;
        case 0x1ccf9cu: goto label_1ccf9c;
        case 0x1ccfa0u: goto label_1ccfa0;
        case 0x1ccfa4u: goto label_1ccfa4;
        case 0x1ccfa8u: goto label_1ccfa8;
        case 0x1ccfacu: goto label_1ccfac;
        case 0x1ccfb0u: goto label_1ccfb0;
        case 0x1ccfb4u: goto label_1ccfb4;
        case 0x1ccfb8u: goto label_1ccfb8;
        case 0x1ccfbcu: goto label_1ccfbc;
        case 0x1ccfc0u: goto label_1ccfc0;
        case 0x1ccfc4u: goto label_1ccfc4;
        case 0x1ccfc8u: goto label_1ccfc8;
        case 0x1ccfccu: goto label_1ccfcc;
        case 0x1ccfd0u: goto label_1ccfd0;
        case 0x1ccfd4u: goto label_1ccfd4;
        case 0x1ccfd8u: goto label_1ccfd8;
        case 0x1ccfdcu: goto label_1ccfdc;
        case 0x1ccfe0u: goto label_1ccfe0;
        case 0x1ccfe4u: goto label_1ccfe4;
        case 0x1ccfe8u: goto label_1ccfe8;
        case 0x1ccfecu: goto label_1ccfec;
        case 0x1ccff0u: goto label_1ccff0;
        case 0x1ccff4u: goto label_1ccff4;
        case 0x1ccff8u: goto label_1ccff8;
        case 0x1ccffcu: goto label_1ccffc;
        case 0x1cd000u: goto label_1cd000;
        case 0x1cd004u: goto label_1cd004;
        case 0x1cd008u: goto label_1cd008;
        case 0x1cd00cu: goto label_1cd00c;
        case 0x1cd010u: goto label_1cd010;
        case 0x1cd014u: goto label_1cd014;
        case 0x1cd018u: goto label_1cd018;
        case 0x1cd01cu: goto label_1cd01c;
        case 0x1cd020u: goto label_1cd020;
        case 0x1cd024u: goto label_1cd024;
        case 0x1cd028u: goto label_1cd028;
        case 0x1cd02cu: goto label_1cd02c;
        case 0x1cd030u: goto label_1cd030;
        case 0x1cd034u: goto label_1cd034;
        case 0x1cd038u: goto label_1cd038;
        case 0x1cd03cu: goto label_1cd03c;
        case 0x1cd040u: goto label_1cd040;
        case 0x1cd044u: goto label_1cd044;
        case 0x1cd048u: goto label_1cd048;
        case 0x1cd04cu: goto label_1cd04c;
        case 0x1cd050u: goto label_1cd050;
        case 0x1cd054u: goto label_1cd054;
        case 0x1cd058u: goto label_1cd058;
        case 0x1cd05cu: goto label_1cd05c;
        case 0x1cd060u: goto label_1cd060;
        case 0x1cd064u: goto label_1cd064;
        case 0x1cd068u: goto label_1cd068;
        case 0x1cd06cu: goto label_1cd06c;
        case 0x1cd070u: goto label_1cd070;
        case 0x1cd074u: goto label_1cd074;
        case 0x1cd078u: goto label_1cd078;
        case 0x1cd07cu: goto label_1cd07c;
        case 0x1cd080u: goto label_1cd080;
        case 0x1cd084u: goto label_1cd084;
        case 0x1cd088u: goto label_1cd088;
        case 0x1cd08cu: goto label_1cd08c;
        case 0x1cd090u: goto label_1cd090;
        case 0x1cd094u: goto label_1cd094;
        case 0x1cd098u: goto label_1cd098;
        case 0x1cd09cu: goto label_1cd09c;
        case 0x1cd0a0u: goto label_1cd0a0;
        case 0x1cd0a4u: goto label_1cd0a4;
        case 0x1cd0a8u: goto label_1cd0a8;
        case 0x1cd0acu: goto label_1cd0ac;
        case 0x1cd0b0u: goto label_1cd0b0;
        case 0x1cd0b4u: goto label_1cd0b4;
        case 0x1cd0b8u: goto label_1cd0b8;
        case 0x1cd0bcu: goto label_1cd0bc;
        case 0x1cd0c0u: goto label_1cd0c0;
        case 0x1cd0c4u: goto label_1cd0c4;
        case 0x1cd0c8u: goto label_1cd0c8;
        case 0x1cd0ccu: goto label_1cd0cc;
        case 0x1cd0d0u: goto label_1cd0d0;
        case 0x1cd0d4u: goto label_1cd0d4;
        case 0x1cd0d8u: goto label_1cd0d8;
        case 0x1cd0dcu: goto label_1cd0dc;
        case 0x1cd0e0u: goto label_1cd0e0;
        case 0x1cd0e4u: goto label_1cd0e4;
        case 0x1cd0e8u: goto label_1cd0e8;
        case 0x1cd0ecu: goto label_1cd0ec;
        case 0x1cd0f0u: goto label_1cd0f0;
        case 0x1cd0f4u: goto label_1cd0f4;
        case 0x1cd0f8u: goto label_1cd0f8;
        case 0x1cd0fcu: goto label_1cd0fc;
        case 0x1cd100u: goto label_1cd100;
        case 0x1cd104u: goto label_1cd104;
        case 0x1cd108u: goto label_1cd108;
        case 0x1cd10cu: goto label_1cd10c;
        case 0x1cd110u: goto label_1cd110;
        case 0x1cd114u: goto label_1cd114;
        case 0x1cd118u: goto label_1cd118;
        case 0x1cd11cu: goto label_1cd11c;
        case 0x1cd120u: goto label_1cd120;
        case 0x1cd124u: goto label_1cd124;
        case 0x1cd128u: goto label_1cd128;
        case 0x1cd12cu: goto label_1cd12c;
        case 0x1cd130u: goto label_1cd130;
        case 0x1cd134u: goto label_1cd134;
        case 0x1cd138u: goto label_1cd138;
        case 0x1cd13cu: goto label_1cd13c;
        case 0x1cd140u: goto label_1cd140;
        case 0x1cd144u: goto label_1cd144;
        case 0x1cd148u: goto label_1cd148;
        case 0x1cd14cu: goto label_1cd14c;
        case 0x1cd150u: goto label_1cd150;
        case 0x1cd154u: goto label_1cd154;
        case 0x1cd158u: goto label_1cd158;
        case 0x1cd15cu: goto label_1cd15c;
        case 0x1cd160u: goto label_1cd160;
        case 0x1cd164u: goto label_1cd164;
        case 0x1cd168u: goto label_1cd168;
        case 0x1cd16cu: goto label_1cd16c;
        case 0x1cd170u: goto label_1cd170;
        case 0x1cd174u: goto label_1cd174;
        case 0x1cd178u: goto label_1cd178;
        case 0x1cd17cu: goto label_1cd17c;
        case 0x1cd180u: goto label_1cd180;
        case 0x1cd184u: goto label_1cd184;
        case 0x1cd188u: goto label_1cd188;
        case 0x1cd18cu: goto label_1cd18c;
        case 0x1cd190u: goto label_1cd190;
        case 0x1cd194u: goto label_1cd194;
        case 0x1cd198u: goto label_1cd198;
        case 0x1cd19cu: goto label_1cd19c;
        case 0x1cd1a0u: goto label_1cd1a0;
        case 0x1cd1a4u: goto label_1cd1a4;
        case 0x1cd1a8u: goto label_1cd1a8;
        case 0x1cd1acu: goto label_1cd1ac;
        case 0x1cd1b0u: goto label_1cd1b0;
        case 0x1cd1b4u: goto label_1cd1b4;
        case 0x1cd1b8u: goto label_1cd1b8;
        case 0x1cd1bcu: goto label_1cd1bc;
        case 0x1cd1c0u: goto label_1cd1c0;
        case 0x1cd1c4u: goto label_1cd1c4;
        case 0x1cd1c8u: goto label_1cd1c8;
        case 0x1cd1ccu: goto label_1cd1cc;
        case 0x1cd1d0u: goto label_1cd1d0;
        case 0x1cd1d4u: goto label_1cd1d4;
        case 0x1cd1d8u: goto label_1cd1d8;
        case 0x1cd1dcu: goto label_1cd1dc;
        case 0x1cd1e0u: goto label_1cd1e0;
        case 0x1cd1e4u: goto label_1cd1e4;
        case 0x1cd1e8u: goto label_1cd1e8;
        case 0x1cd1ecu: goto label_1cd1ec;
        case 0x1cd1f0u: goto label_1cd1f0;
        case 0x1cd1f4u: goto label_1cd1f4;
        case 0x1cd1f8u: goto label_1cd1f8;
        case 0x1cd1fcu: goto label_1cd1fc;
        case 0x1cd200u: goto label_1cd200;
        case 0x1cd204u: goto label_1cd204;
        case 0x1cd208u: goto label_1cd208;
        case 0x1cd20cu: goto label_1cd20c;
        case 0x1cd210u: goto label_1cd210;
        case 0x1cd214u: goto label_1cd214;
        case 0x1cd218u: goto label_1cd218;
        case 0x1cd21cu: goto label_1cd21c;
        case 0x1cd220u: goto label_1cd220;
        case 0x1cd224u: goto label_1cd224;
        case 0x1cd228u: goto label_1cd228;
        case 0x1cd22cu: goto label_1cd22c;
        case 0x1cd230u: goto label_1cd230;
        case 0x1cd234u: goto label_1cd234;
        case 0x1cd238u: goto label_1cd238;
        case 0x1cd23cu: goto label_1cd23c;
        case 0x1cd240u: goto label_1cd240;
        case 0x1cd244u: goto label_1cd244;
        case 0x1cd248u: goto label_1cd248;
        case 0x1cd24cu: goto label_1cd24c;
        case 0x1cd250u: goto label_1cd250;
        case 0x1cd254u: goto label_1cd254;
        case 0x1cd258u: goto label_1cd258;
        case 0x1cd25cu: goto label_1cd25c;
        case 0x1cd260u: goto label_1cd260;
        case 0x1cd264u: goto label_1cd264;
        case 0x1cd268u: goto label_1cd268;
        case 0x1cd26cu: goto label_1cd26c;
        case 0x1cd270u: goto label_1cd270;
        case 0x1cd274u: goto label_1cd274;
        case 0x1cd278u: goto label_1cd278;
        case 0x1cd27cu: goto label_1cd27c;
        case 0x1cd280u: goto label_1cd280;
        case 0x1cd284u: goto label_1cd284;
        case 0x1cd288u: goto label_1cd288;
        case 0x1cd28cu: goto label_1cd28c;
        case 0x1cd290u: goto label_1cd290;
        case 0x1cd294u: goto label_1cd294;
        case 0x1cd298u: goto label_1cd298;
        case 0x1cd29cu: goto label_1cd29c;
        case 0x1cd2a0u: goto label_1cd2a0;
        case 0x1cd2a4u: goto label_1cd2a4;
        case 0x1cd2a8u: goto label_1cd2a8;
        case 0x1cd2acu: goto label_1cd2ac;
        case 0x1cd2b0u: goto label_1cd2b0;
        case 0x1cd2b4u: goto label_1cd2b4;
        case 0x1cd2b8u: goto label_1cd2b8;
        case 0x1cd2bcu: goto label_1cd2bc;
        case 0x1cd2c0u: goto label_1cd2c0;
        case 0x1cd2c4u: goto label_1cd2c4;
        case 0x1cd2c8u: goto label_1cd2c8;
        case 0x1cd2ccu: goto label_1cd2cc;
        case 0x1cd2d0u: goto label_1cd2d0;
        case 0x1cd2d4u: goto label_1cd2d4;
        case 0x1cd2d8u: goto label_1cd2d8;
        case 0x1cd2dcu: goto label_1cd2dc;
        case 0x1cd2e0u: goto label_1cd2e0;
        case 0x1cd2e4u: goto label_1cd2e4;
        case 0x1cd2e8u: goto label_1cd2e8;
        case 0x1cd2ecu: goto label_1cd2ec;
        case 0x1cd2f0u: goto label_1cd2f0;
        case 0x1cd2f4u: goto label_1cd2f4;
        case 0x1cd2f8u: goto label_1cd2f8;
        case 0x1cd2fcu: goto label_1cd2fc;
        case 0x1cd300u: goto label_1cd300;
        case 0x1cd304u: goto label_1cd304;
        case 0x1cd308u: goto label_1cd308;
        case 0x1cd30cu: goto label_1cd30c;
        case 0x1cd310u: goto label_1cd310;
        case 0x1cd314u: goto label_1cd314;
        case 0x1cd318u: goto label_1cd318;
        case 0x1cd31cu: goto label_1cd31c;
        case 0x1cd320u: goto label_1cd320;
        case 0x1cd324u: goto label_1cd324;
        case 0x1cd328u: goto label_1cd328;
        case 0x1cd32cu: goto label_1cd32c;
        case 0x1cd330u: goto label_1cd330;
        case 0x1cd334u: goto label_1cd334;
        case 0x1cd338u: goto label_1cd338;
        case 0x1cd33cu: goto label_1cd33c;
        case 0x1cd340u: goto label_1cd340;
        case 0x1cd344u: goto label_1cd344;
        case 0x1cd348u: goto label_1cd348;
        case 0x1cd34cu: goto label_1cd34c;
        case 0x1cd350u: goto label_1cd350;
        case 0x1cd354u: goto label_1cd354;
        case 0x1cd358u: goto label_1cd358;
        case 0x1cd35cu: goto label_1cd35c;
        case 0x1cd360u: goto label_1cd360;
        case 0x1cd364u: goto label_1cd364;
        case 0x1cd368u: goto label_1cd368;
        case 0x1cd36cu: goto label_1cd36c;
        case 0x1cd370u: goto label_1cd370;
        case 0x1cd374u: goto label_1cd374;
        case 0x1cd378u: goto label_1cd378;
        case 0x1cd37cu: goto label_1cd37c;
        case 0x1cd380u: goto label_1cd380;
        case 0x1cd384u: goto label_1cd384;
        case 0x1cd388u: goto label_1cd388;
        case 0x1cd38cu: goto label_1cd38c;
        case 0x1cd390u: goto label_1cd390;
        case 0x1cd394u: goto label_1cd394;
        case 0x1cd398u: goto label_1cd398;
        case 0x1cd39cu: goto label_1cd39c;
        case 0x1cd3a0u: goto label_1cd3a0;
        case 0x1cd3a4u: goto label_1cd3a4;
        case 0x1cd3a8u: goto label_1cd3a8;
        case 0x1cd3acu: goto label_1cd3ac;
        case 0x1cd3b0u: goto label_1cd3b0;
        case 0x1cd3b4u: goto label_1cd3b4;
        case 0x1cd3b8u: goto label_1cd3b8;
        case 0x1cd3bcu: goto label_1cd3bc;
        case 0x1cd3c0u: goto label_1cd3c0;
        case 0x1cd3c4u: goto label_1cd3c4;
        case 0x1cd3c8u: goto label_1cd3c8;
        case 0x1cd3ccu: goto label_1cd3cc;
        case 0x1cd3d0u: goto label_1cd3d0;
        case 0x1cd3d4u: goto label_1cd3d4;
        case 0x1cd3d8u: goto label_1cd3d8;
        case 0x1cd3dcu: goto label_1cd3dc;
        case 0x1cd3e0u: goto label_1cd3e0;
        case 0x1cd3e4u: goto label_1cd3e4;
        case 0x1cd3e8u: goto label_1cd3e8;
        case 0x1cd3ecu: goto label_1cd3ec;
        case 0x1cd3f0u: goto label_1cd3f0;
        case 0x1cd3f4u: goto label_1cd3f4;
        case 0x1cd3f8u: goto label_1cd3f8;
        case 0x1cd3fcu: goto label_1cd3fc;
        case 0x1cd400u: goto label_1cd400;
        case 0x1cd404u: goto label_1cd404;
        case 0x1cd408u: goto label_1cd408;
        case 0x1cd40cu: goto label_1cd40c;
        case 0x1cd410u: goto label_1cd410;
        case 0x1cd414u: goto label_1cd414;
        case 0x1cd418u: goto label_1cd418;
        case 0x1cd41cu: goto label_1cd41c;
        case 0x1cd420u: goto label_1cd420;
        case 0x1cd424u: goto label_1cd424;
        case 0x1cd428u: goto label_1cd428;
        case 0x1cd42cu: goto label_1cd42c;
        case 0x1cd430u: goto label_1cd430;
        case 0x1cd434u: goto label_1cd434;
        case 0x1cd438u: goto label_1cd438;
        case 0x1cd43cu: goto label_1cd43c;
        case 0x1cd440u: goto label_1cd440;
        case 0x1cd444u: goto label_1cd444;
        case 0x1cd448u: goto label_1cd448;
        case 0x1cd44cu: goto label_1cd44c;
        case 0x1cd450u: goto label_1cd450;
        case 0x1cd454u: goto label_1cd454;
        case 0x1cd458u: goto label_1cd458;
        case 0x1cd45cu: goto label_1cd45c;
        case 0x1cd460u: goto label_1cd460;
        case 0x1cd464u: goto label_1cd464;
        case 0x1cd468u: goto label_1cd468;
        case 0x1cd46cu: goto label_1cd46c;
        case 0x1cd470u: goto label_1cd470;
        case 0x1cd474u: goto label_1cd474;
        case 0x1cd478u: goto label_1cd478;
        case 0x1cd47cu: goto label_1cd47c;
        case 0x1cd480u: goto label_1cd480;
        case 0x1cd484u: goto label_1cd484;
        case 0x1cd488u: goto label_1cd488;
        case 0x1cd48cu: goto label_1cd48c;
        case 0x1cd490u: goto label_1cd490;
        case 0x1cd494u: goto label_1cd494;
        case 0x1cd498u: goto label_1cd498;
        case 0x1cd49cu: goto label_1cd49c;
        case 0x1cd4a0u: goto label_1cd4a0;
        case 0x1cd4a4u: goto label_1cd4a4;
        case 0x1cd4a8u: goto label_1cd4a8;
        case 0x1cd4acu: goto label_1cd4ac;
        case 0x1cd4b0u: goto label_1cd4b0;
        case 0x1cd4b4u: goto label_1cd4b4;
        case 0x1cd4b8u: goto label_1cd4b8;
        case 0x1cd4bcu: goto label_1cd4bc;
        case 0x1cd4c0u: goto label_1cd4c0;
        case 0x1cd4c4u: goto label_1cd4c4;
        case 0x1cd4c8u: goto label_1cd4c8;
        case 0x1cd4ccu: goto label_1cd4cc;
        case 0x1cd4d0u: goto label_1cd4d0;
        case 0x1cd4d4u: goto label_1cd4d4;
        case 0x1cd4d8u: goto label_1cd4d8;
        case 0x1cd4dcu: goto label_1cd4dc;
        case 0x1cd4e0u: goto label_1cd4e0;
        case 0x1cd4e4u: goto label_1cd4e4;
        case 0x1cd4e8u: goto label_1cd4e8;
        case 0x1cd4ecu: goto label_1cd4ec;
        case 0x1cd4f0u: goto label_1cd4f0;
        case 0x1cd4f4u: goto label_1cd4f4;
        case 0x1cd4f8u: goto label_1cd4f8;
        case 0x1cd4fcu: goto label_1cd4fc;
        case 0x1cd500u: goto label_1cd500;
        case 0x1cd504u: goto label_1cd504;
        case 0x1cd508u: goto label_1cd508;
        case 0x1cd50cu: goto label_1cd50c;
        case 0x1cd510u: goto label_1cd510;
        case 0x1cd514u: goto label_1cd514;
        case 0x1cd518u: goto label_1cd518;
        case 0x1cd51cu: goto label_1cd51c;
        case 0x1cd520u: goto label_1cd520;
        case 0x1cd524u: goto label_1cd524;
        case 0x1cd528u: goto label_1cd528;
        case 0x1cd52cu: goto label_1cd52c;
        case 0x1cd530u: goto label_1cd530;
        case 0x1cd534u: goto label_1cd534;
        case 0x1cd538u: goto label_1cd538;
        case 0x1cd53cu: goto label_1cd53c;
        case 0x1cd540u: goto label_1cd540;
        case 0x1cd544u: goto label_1cd544;
        case 0x1cd548u: goto label_1cd548;
        case 0x1cd54cu: goto label_1cd54c;
        case 0x1cd550u: goto label_1cd550;
        case 0x1cd554u: goto label_1cd554;
        case 0x1cd558u: goto label_1cd558;
        case 0x1cd55cu: goto label_1cd55c;
        case 0x1cd560u: goto label_1cd560;
        case 0x1cd564u: goto label_1cd564;
        case 0x1cd568u: goto label_1cd568;
        case 0x1cd56cu: goto label_1cd56c;
        case 0x1cd570u: goto label_1cd570;
        case 0x1cd574u: goto label_1cd574;
        case 0x1cd578u: goto label_1cd578;
        case 0x1cd57cu: goto label_1cd57c;
        case 0x1cd580u: goto label_1cd580;
        case 0x1cd584u: goto label_1cd584;
        case 0x1cd588u: goto label_1cd588;
        case 0x1cd58cu: goto label_1cd58c;
        case 0x1cd590u: goto label_1cd590;
        case 0x1cd594u: goto label_1cd594;
        case 0x1cd598u: goto label_1cd598;
        case 0x1cd59cu: goto label_1cd59c;
        case 0x1cd5a0u: goto label_1cd5a0;
        case 0x1cd5a4u: goto label_1cd5a4;
        case 0x1cd5a8u: goto label_1cd5a8;
        case 0x1cd5acu: goto label_1cd5ac;
        case 0x1cd5b0u: goto label_1cd5b0;
        case 0x1cd5b4u: goto label_1cd5b4;
        case 0x1cd5b8u: goto label_1cd5b8;
        case 0x1cd5bcu: goto label_1cd5bc;
        case 0x1cd5c0u: goto label_1cd5c0;
        case 0x1cd5c4u: goto label_1cd5c4;
        case 0x1cd5c8u: goto label_1cd5c8;
        case 0x1cd5ccu: goto label_1cd5cc;
        case 0x1cd5d0u: goto label_1cd5d0;
        case 0x1cd5d4u: goto label_1cd5d4;
        case 0x1cd5d8u: goto label_1cd5d8;
        case 0x1cd5dcu: goto label_1cd5dc;
        case 0x1cd5e0u: goto label_1cd5e0;
        case 0x1cd5e4u: goto label_1cd5e4;
        case 0x1cd5e8u: goto label_1cd5e8;
        case 0x1cd5ecu: goto label_1cd5ec;
        case 0x1cd5f0u: goto label_1cd5f0;
        case 0x1cd5f4u: goto label_1cd5f4;
        case 0x1cd5f8u: goto label_1cd5f8;
        case 0x1cd5fcu: goto label_1cd5fc;
        case 0x1cd600u: goto label_1cd600;
        case 0x1cd604u: goto label_1cd604;
        case 0x1cd608u: goto label_1cd608;
        case 0x1cd60cu: goto label_1cd60c;
        case 0x1cd610u: goto label_1cd610;
        case 0x1cd614u: goto label_1cd614;
        case 0x1cd618u: goto label_1cd618;
        case 0x1cd61cu: goto label_1cd61c;
        case 0x1cd620u: goto label_1cd620;
        case 0x1cd624u: goto label_1cd624;
        case 0x1cd628u: goto label_1cd628;
        case 0x1cd62cu: goto label_1cd62c;
        case 0x1cd630u: goto label_1cd630;
        case 0x1cd634u: goto label_1cd634;
        case 0x1cd638u: goto label_1cd638;
        case 0x1cd63cu: goto label_1cd63c;
        case 0x1cd640u: goto label_1cd640;
        case 0x1cd644u: goto label_1cd644;
        case 0x1cd648u: goto label_1cd648;
        case 0x1cd64cu: goto label_1cd64c;
        case 0x1cd650u: goto label_1cd650;
        case 0x1cd654u: goto label_1cd654;
        case 0x1cd658u: goto label_1cd658;
        case 0x1cd65cu: goto label_1cd65c;
        case 0x1cd660u: goto label_1cd660;
        case 0x1cd664u: goto label_1cd664;
        case 0x1cd668u: goto label_1cd668;
        case 0x1cd66cu: goto label_1cd66c;
        case 0x1cd670u: goto label_1cd670;
        case 0x1cd674u: goto label_1cd674;
        case 0x1cd678u: goto label_1cd678;
        case 0x1cd67cu: goto label_1cd67c;
        case 0x1cd680u: goto label_1cd680;
        case 0x1cd684u: goto label_1cd684;
        case 0x1cd688u: goto label_1cd688;
        case 0x1cd68cu: goto label_1cd68c;
        case 0x1cd690u: goto label_1cd690;
        case 0x1cd694u: goto label_1cd694;
        case 0x1cd698u: goto label_1cd698;
        case 0x1cd69cu: goto label_1cd69c;
        case 0x1cd6a0u: goto label_1cd6a0;
        case 0x1cd6a4u: goto label_1cd6a4;
        case 0x1cd6a8u: goto label_1cd6a8;
        case 0x1cd6acu: goto label_1cd6ac;
        case 0x1cd6b0u: goto label_1cd6b0;
        case 0x1cd6b4u: goto label_1cd6b4;
        case 0x1cd6b8u: goto label_1cd6b8;
        case 0x1cd6bcu: goto label_1cd6bc;
        case 0x1cd6c0u: goto label_1cd6c0;
        case 0x1cd6c4u: goto label_1cd6c4;
        case 0x1cd6c8u: goto label_1cd6c8;
        case 0x1cd6ccu: goto label_1cd6cc;
        case 0x1cd6d0u: goto label_1cd6d0;
        case 0x1cd6d4u: goto label_1cd6d4;
        case 0x1cd6d8u: goto label_1cd6d8;
        case 0x1cd6dcu: goto label_1cd6dc;
        case 0x1cd6e0u: goto label_1cd6e0;
        case 0x1cd6e4u: goto label_1cd6e4;
        case 0x1cd6e8u: goto label_1cd6e8;
        case 0x1cd6ecu: goto label_1cd6ec;
        case 0x1cd6f0u: goto label_1cd6f0;
        case 0x1cd6f4u: goto label_1cd6f4;
        case 0x1cd6f8u: goto label_1cd6f8;
        case 0x1cd6fcu: goto label_1cd6fc;
        case 0x1cd700u: goto label_1cd700;
        case 0x1cd704u: goto label_1cd704;
        case 0x1cd708u: goto label_1cd708;
        case 0x1cd70cu: goto label_1cd70c;
        case 0x1cd710u: goto label_1cd710;
        case 0x1cd714u: goto label_1cd714;
        case 0x1cd718u: goto label_1cd718;
        case 0x1cd71cu: goto label_1cd71c;
        case 0x1cd720u: goto label_1cd720;
        case 0x1cd724u: goto label_1cd724;
        case 0x1cd728u: goto label_1cd728;
        case 0x1cd72cu: goto label_1cd72c;
        case 0x1cd730u: goto label_1cd730;
        case 0x1cd734u: goto label_1cd734;
        case 0x1cd738u: goto label_1cd738;
        case 0x1cd73cu: goto label_1cd73c;
        case 0x1cd740u: goto label_1cd740;
        case 0x1cd744u: goto label_1cd744;
        case 0x1cd748u: goto label_1cd748;
        case 0x1cd74cu: goto label_1cd74c;
        case 0x1cd750u: goto label_1cd750;
        case 0x1cd754u: goto label_1cd754;
        case 0x1cd758u: goto label_1cd758;
        case 0x1cd75cu: goto label_1cd75c;
        case 0x1cd760u: goto label_1cd760;
        case 0x1cd764u: goto label_1cd764;
        case 0x1cd768u: goto label_1cd768;
        case 0x1cd76cu: goto label_1cd76c;
        case 0x1cd770u: goto label_1cd770;
        case 0x1cd774u: goto label_1cd774;
        case 0x1cd778u: goto label_1cd778;
        case 0x1cd77cu: goto label_1cd77c;
        case 0x1cd780u: goto label_1cd780;
        case 0x1cd784u: goto label_1cd784;
        case 0x1cd788u: goto label_1cd788;
        case 0x1cd78cu: goto label_1cd78c;
        case 0x1cd790u: goto label_1cd790;
        case 0x1cd794u: goto label_1cd794;
        case 0x1cd798u: goto label_1cd798;
        case 0x1cd79cu: goto label_1cd79c;
        case 0x1cd7a0u: goto label_1cd7a0;
        case 0x1cd7a4u: goto label_1cd7a4;
        case 0x1cd7a8u: goto label_1cd7a8;
        case 0x1cd7acu: goto label_1cd7ac;
        case 0x1cd7b0u: goto label_1cd7b0;
        case 0x1cd7b4u: goto label_1cd7b4;
        case 0x1cd7b8u: goto label_1cd7b8;
        case 0x1cd7bcu: goto label_1cd7bc;
        case 0x1cd7c0u: goto label_1cd7c0;
        case 0x1cd7c4u: goto label_1cd7c4;
        case 0x1cd7c8u: goto label_1cd7c8;
        case 0x1cd7ccu: goto label_1cd7cc;
        case 0x1cd7d0u: goto label_1cd7d0;
        case 0x1cd7d4u: goto label_1cd7d4;
        case 0x1cd7d8u: goto label_1cd7d8;
        case 0x1cd7dcu: goto label_1cd7dc;
        case 0x1cd7e0u: goto label_1cd7e0;
        case 0x1cd7e4u: goto label_1cd7e4;
        case 0x1cd7e8u: goto label_1cd7e8;
        case 0x1cd7ecu: goto label_1cd7ec;
        case 0x1cd7f0u: goto label_1cd7f0;
        case 0x1cd7f4u: goto label_1cd7f4;
        case 0x1cd7f8u: goto label_1cd7f8;
        case 0x1cd7fcu: goto label_1cd7fc;
        case 0x1cd800u: goto label_1cd800;
        case 0x1cd804u: goto label_1cd804;
        case 0x1cd808u: goto label_1cd808;
        case 0x1cd80cu: goto label_1cd80c;
        case 0x1cd810u: goto label_1cd810;
        case 0x1cd814u: goto label_1cd814;
        case 0x1cd818u: goto label_1cd818;
        case 0x1cd81cu: goto label_1cd81c;
        case 0x1cd820u: goto label_1cd820;
        case 0x1cd824u: goto label_1cd824;
        case 0x1cd828u: goto label_1cd828;
        case 0x1cd82cu: goto label_1cd82c;
        case 0x1cd830u: goto label_1cd830;
        case 0x1cd834u: goto label_1cd834;
        case 0x1cd838u: goto label_1cd838;
        case 0x1cd83cu: goto label_1cd83c;
        case 0x1cd840u: goto label_1cd840;
        case 0x1cd844u: goto label_1cd844;
        case 0x1cd848u: goto label_1cd848;
        case 0x1cd84cu: goto label_1cd84c;
        case 0x1cd850u: goto label_1cd850;
        case 0x1cd854u: goto label_1cd854;
        case 0x1cd858u: goto label_1cd858;
        case 0x1cd85cu: goto label_1cd85c;
        case 0x1cd860u: goto label_1cd860;
        case 0x1cd864u: goto label_1cd864;
        case 0x1cd868u: goto label_1cd868;
        case 0x1cd86cu: goto label_1cd86c;
        case 0x1cd870u: goto label_1cd870;
        case 0x1cd874u: goto label_1cd874;
        case 0x1cd878u: goto label_1cd878;
        case 0x1cd87cu: goto label_1cd87c;
        case 0x1cd880u: goto label_1cd880;
        case 0x1cd884u: goto label_1cd884;
        case 0x1cd888u: goto label_1cd888;
        case 0x1cd88cu: goto label_1cd88c;
        case 0x1cd890u: goto label_1cd890;
        case 0x1cd894u: goto label_1cd894;
        case 0x1cd898u: goto label_1cd898;
        case 0x1cd89cu: goto label_1cd89c;
        case 0x1cd8a0u: goto label_1cd8a0;
        case 0x1cd8a4u: goto label_1cd8a4;
        case 0x1cd8a8u: goto label_1cd8a8;
        case 0x1cd8acu: goto label_1cd8ac;
        case 0x1cd8b0u: goto label_1cd8b0;
        case 0x1cd8b4u: goto label_1cd8b4;
        case 0x1cd8b8u: goto label_1cd8b8;
        case 0x1cd8bcu: goto label_1cd8bc;
        case 0x1cd8c0u: goto label_1cd8c0;
        case 0x1cd8c4u: goto label_1cd8c4;
        case 0x1cd8c8u: goto label_1cd8c8;
        case 0x1cd8ccu: goto label_1cd8cc;
        case 0x1cd8d0u: goto label_1cd8d0;
        case 0x1cd8d4u: goto label_1cd8d4;
        case 0x1cd8d8u: goto label_1cd8d8;
        case 0x1cd8dcu: goto label_1cd8dc;
        case 0x1cd8e0u: goto label_1cd8e0;
        case 0x1cd8e4u: goto label_1cd8e4;
        case 0x1cd8e8u: goto label_1cd8e8;
        case 0x1cd8ecu: goto label_1cd8ec;
        case 0x1cd8f0u: goto label_1cd8f0;
        case 0x1cd8f4u: goto label_1cd8f4;
        case 0x1cd8f8u: goto label_1cd8f8;
        case 0x1cd8fcu: goto label_1cd8fc;
        case 0x1cd900u: goto label_1cd900;
        case 0x1cd904u: goto label_1cd904;
        case 0x1cd908u: goto label_1cd908;
        case 0x1cd90cu: goto label_1cd90c;
        case 0x1cd910u: goto label_1cd910;
        case 0x1cd914u: goto label_1cd914;
        case 0x1cd918u: goto label_1cd918;
        case 0x1cd91cu: goto label_1cd91c;
        case 0x1cd920u: goto label_1cd920;
        case 0x1cd924u: goto label_1cd924;
        case 0x1cd928u: goto label_1cd928;
        case 0x1cd92cu: goto label_1cd92c;
        case 0x1cd930u: goto label_1cd930;
        case 0x1cd934u: goto label_1cd934;
        case 0x1cd938u: goto label_1cd938;
        case 0x1cd93cu: goto label_1cd93c;
        case 0x1cd940u: goto label_1cd940;
        case 0x1cd944u: goto label_1cd944;
        case 0x1cd948u: goto label_1cd948;
        case 0x1cd94cu: goto label_1cd94c;
        case 0x1cd950u: goto label_1cd950;
        case 0x1cd954u: goto label_1cd954;
        case 0x1cd958u: goto label_1cd958;
        case 0x1cd95cu: goto label_1cd95c;
        case 0x1cd960u: goto label_1cd960;
        case 0x1cd964u: goto label_1cd964;
        case 0x1cd968u: goto label_1cd968;
        case 0x1cd96cu: goto label_1cd96c;
        case 0x1cd970u: goto label_1cd970;
        case 0x1cd974u: goto label_1cd974;
        case 0x1cd978u: goto label_1cd978;
        case 0x1cd97cu: goto label_1cd97c;
        case 0x1cd980u: goto label_1cd980;
        case 0x1cd984u: goto label_1cd984;
        case 0x1cd988u: goto label_1cd988;
        case 0x1cd98cu: goto label_1cd98c;
        case 0x1cd990u: goto label_1cd990;
        case 0x1cd994u: goto label_1cd994;
        case 0x1cd998u: goto label_1cd998;
        case 0x1cd99cu: goto label_1cd99c;
        case 0x1cd9a0u: goto label_1cd9a0;
        case 0x1cd9a4u: goto label_1cd9a4;
        case 0x1cd9a8u: goto label_1cd9a8;
        case 0x1cd9acu: goto label_1cd9ac;
        case 0x1cd9b0u: goto label_1cd9b0;
        case 0x1cd9b4u: goto label_1cd9b4;
        case 0x1cd9b8u: goto label_1cd9b8;
        case 0x1cd9bcu: goto label_1cd9bc;
        case 0x1cd9c0u: goto label_1cd9c0;
        case 0x1cd9c4u: goto label_1cd9c4;
        case 0x1cd9c8u: goto label_1cd9c8;
        case 0x1cd9ccu: goto label_1cd9cc;
        case 0x1cd9d0u: goto label_1cd9d0;
        case 0x1cd9d4u: goto label_1cd9d4;
        case 0x1cd9d8u: goto label_1cd9d8;
        case 0x1cd9dcu: goto label_1cd9dc;
        case 0x1cd9e0u: goto label_1cd9e0;
        case 0x1cd9e4u: goto label_1cd9e4;
        case 0x1cd9e8u: goto label_1cd9e8;
        case 0x1cd9ecu: goto label_1cd9ec;
        case 0x1cd9f0u: goto label_1cd9f0;
        case 0x1cd9f4u: goto label_1cd9f4;
        case 0x1cd9f8u: goto label_1cd9f8;
        case 0x1cd9fcu: goto label_1cd9fc;
        case 0x1cda00u: goto label_1cda00;
        case 0x1cda04u: goto label_1cda04;
        case 0x1cda08u: goto label_1cda08;
        case 0x1cda0cu: goto label_1cda0c;
        case 0x1cda10u: goto label_1cda10;
        case 0x1cda14u: goto label_1cda14;
        case 0x1cda18u: goto label_1cda18;
        case 0x1cda1cu: goto label_1cda1c;
        case 0x1cda20u: goto label_1cda20;
        case 0x1cda24u: goto label_1cda24;
        case 0x1cda28u: goto label_1cda28;
        case 0x1cda2cu: goto label_1cda2c;
        case 0x1cda30u: goto label_1cda30;
        case 0x1cda34u: goto label_1cda34;
        case 0x1cda38u: goto label_1cda38;
        case 0x1cda3cu: goto label_1cda3c;
        case 0x1cda40u: goto label_1cda40;
        case 0x1cda44u: goto label_1cda44;
        case 0x1cda48u: goto label_1cda48;
        case 0x1cda4cu: goto label_1cda4c;
        case 0x1cda50u: goto label_1cda50;
        case 0x1cda54u: goto label_1cda54;
        case 0x1cda58u: goto label_1cda58;
        case 0x1cda5cu: goto label_1cda5c;
        case 0x1cda60u: goto label_1cda60;
        case 0x1cda64u: goto label_1cda64;
        case 0x1cda68u: goto label_1cda68;
        case 0x1cda6cu: goto label_1cda6c;
        case 0x1cda70u: goto label_1cda70;
        case 0x1cda74u: goto label_1cda74;
        case 0x1cda78u: goto label_1cda78;
        case 0x1cda7cu: goto label_1cda7c;
        case 0x1cda80u: goto label_1cda80;
        case 0x1cda84u: goto label_1cda84;
        case 0x1cda88u: goto label_1cda88;
        case 0x1cda8cu: goto label_1cda8c;
        case 0x1cda90u: goto label_1cda90;
        case 0x1cda94u: goto label_1cda94;
        case 0x1cda98u: goto label_1cda98;
        case 0x1cda9cu: goto label_1cda9c;
        case 0x1cdaa0u: goto label_1cdaa0;
        case 0x1cdaa4u: goto label_1cdaa4;
        case 0x1cdaa8u: goto label_1cdaa8;
        case 0x1cdaacu: goto label_1cdaac;
        case 0x1cdab0u: goto label_1cdab0;
        case 0x1cdab4u: goto label_1cdab4;
        case 0x1cdab8u: goto label_1cdab8;
        case 0x1cdabcu: goto label_1cdabc;
        case 0x1cdac0u: goto label_1cdac0;
        case 0x1cdac4u: goto label_1cdac4;
        case 0x1cdac8u: goto label_1cdac8;
        case 0x1cdaccu: goto label_1cdacc;
        case 0x1cdad0u: goto label_1cdad0;
        case 0x1cdad4u: goto label_1cdad4;
        case 0x1cdad8u: goto label_1cdad8;
        case 0x1cdadcu: goto label_1cdadc;
        case 0x1cdae0u: goto label_1cdae0;
        case 0x1cdae4u: goto label_1cdae4;
        case 0x1cdae8u: goto label_1cdae8;
        case 0x1cdaecu: goto label_1cdaec;
        case 0x1cdaf0u: goto label_1cdaf0;
        case 0x1cdaf4u: goto label_1cdaf4;
        case 0x1cdaf8u: goto label_1cdaf8;
        case 0x1cdafcu: goto label_1cdafc;
        case 0x1cdb00u: goto label_1cdb00;
        case 0x1cdb04u: goto label_1cdb04;
        case 0x1cdb08u: goto label_1cdb08;
        case 0x1cdb0cu: goto label_1cdb0c;
        case 0x1cdb10u: goto label_1cdb10;
        case 0x1cdb14u: goto label_1cdb14;
        case 0x1cdb18u: goto label_1cdb18;
        case 0x1cdb1cu: goto label_1cdb1c;
        case 0x1cdb20u: goto label_1cdb20;
        case 0x1cdb24u: goto label_1cdb24;
        case 0x1cdb28u: goto label_1cdb28;
        case 0x1cdb2cu: goto label_1cdb2c;
        case 0x1cdb30u: goto label_1cdb30;
        case 0x1cdb34u: goto label_1cdb34;
        case 0x1cdb38u: goto label_1cdb38;
        case 0x1cdb3cu: goto label_1cdb3c;
        case 0x1cdb40u: goto label_1cdb40;
        case 0x1cdb44u: goto label_1cdb44;
        case 0x1cdb48u: goto label_1cdb48;
        case 0x1cdb4cu: goto label_1cdb4c;
        case 0x1cdb50u: goto label_1cdb50;
        case 0x1cdb54u: goto label_1cdb54;
        case 0x1cdb58u: goto label_1cdb58;
        case 0x1cdb5cu: goto label_1cdb5c;
        case 0x1cdb60u: goto label_1cdb60;
        case 0x1cdb64u: goto label_1cdb64;
        case 0x1cdb68u: goto label_1cdb68;
        case 0x1cdb6cu: goto label_1cdb6c;
        case 0x1cdb70u: goto label_1cdb70;
        case 0x1cdb74u: goto label_1cdb74;
        case 0x1cdb78u: goto label_1cdb78;
        case 0x1cdb7cu: goto label_1cdb7c;
        case 0x1cdb80u: goto label_1cdb80;
        case 0x1cdb84u: goto label_1cdb84;
        case 0x1cdb88u: goto label_1cdb88;
        case 0x1cdb8cu: goto label_1cdb8c;
        case 0x1cdb90u: goto label_1cdb90;
        case 0x1cdb94u: goto label_1cdb94;
        case 0x1cdb98u: goto label_1cdb98;
        case 0x1cdb9cu: goto label_1cdb9c;
        case 0x1cdba0u: goto label_1cdba0;
        case 0x1cdba4u: goto label_1cdba4;
        case 0x1cdba8u: goto label_1cdba8;
        case 0x1cdbacu: goto label_1cdbac;
        case 0x1cdbb0u: goto label_1cdbb0;
        case 0x1cdbb4u: goto label_1cdbb4;
        case 0x1cdbb8u: goto label_1cdbb8;
        case 0x1cdbbcu: goto label_1cdbbc;
        case 0x1cdbc0u: goto label_1cdbc0;
        case 0x1cdbc4u: goto label_1cdbc4;
        case 0x1cdbc8u: goto label_1cdbc8;
        case 0x1cdbccu: goto label_1cdbcc;
        case 0x1cdbd0u: goto label_1cdbd0;
        case 0x1cdbd4u: goto label_1cdbd4;
        case 0x1cdbd8u: goto label_1cdbd8;
        case 0x1cdbdcu: goto label_1cdbdc;
        case 0x1cdbe0u: goto label_1cdbe0;
        case 0x1cdbe4u: goto label_1cdbe4;
        case 0x1cdbe8u: goto label_1cdbe8;
        case 0x1cdbecu: goto label_1cdbec;
        case 0x1cdbf0u: goto label_1cdbf0;
        case 0x1cdbf4u: goto label_1cdbf4;
        case 0x1cdbf8u: goto label_1cdbf8;
        case 0x1cdbfcu: goto label_1cdbfc;
        case 0x1cdc00u: goto label_1cdc00;
        case 0x1cdc04u: goto label_1cdc04;
        case 0x1cdc08u: goto label_1cdc08;
        case 0x1cdc0cu: goto label_1cdc0c;
        case 0x1cdc10u: goto label_1cdc10;
        case 0x1cdc14u: goto label_1cdc14;
        case 0x1cdc18u: goto label_1cdc18;
        case 0x1cdc1cu: goto label_1cdc1c;
        case 0x1cdc20u: goto label_1cdc20;
        case 0x1cdc24u: goto label_1cdc24;
        case 0x1cdc28u: goto label_1cdc28;
        case 0x1cdc2cu: goto label_1cdc2c;
        case 0x1cdc30u: goto label_1cdc30;
        case 0x1cdc34u: goto label_1cdc34;
        case 0x1cdc38u: goto label_1cdc38;
        case 0x1cdc3cu: goto label_1cdc3c;
        case 0x1cdc40u: goto label_1cdc40;
        case 0x1cdc44u: goto label_1cdc44;
        case 0x1cdc48u: goto label_1cdc48;
        case 0x1cdc4cu: goto label_1cdc4c;
        case 0x1cdc50u: goto label_1cdc50;
        case 0x1cdc54u: goto label_1cdc54;
        case 0x1cdc58u: goto label_1cdc58;
        case 0x1cdc5cu: goto label_1cdc5c;
        case 0x1cdc60u: goto label_1cdc60;
        case 0x1cdc64u: goto label_1cdc64;
        case 0x1cdc68u: goto label_1cdc68;
        case 0x1cdc6cu: goto label_1cdc6c;
        case 0x1cdc70u: goto label_1cdc70;
        case 0x1cdc74u: goto label_1cdc74;
        case 0x1cdc78u: goto label_1cdc78;
        case 0x1cdc7cu: goto label_1cdc7c;
        case 0x1cdc80u: goto label_1cdc80;
        case 0x1cdc84u: goto label_1cdc84;
        case 0x1cdc88u: goto label_1cdc88;
        case 0x1cdc8cu: goto label_1cdc8c;
        case 0x1cdc90u: goto label_1cdc90;
        case 0x1cdc94u: goto label_1cdc94;
        case 0x1cdc98u: goto label_1cdc98;
        case 0x1cdc9cu: goto label_1cdc9c;
        case 0x1cdca0u: goto label_1cdca0;
        case 0x1cdca4u: goto label_1cdca4;
        case 0x1cdca8u: goto label_1cdca8;
        case 0x1cdcacu: goto label_1cdcac;
        case 0x1cdcb0u: goto label_1cdcb0;
        case 0x1cdcb4u: goto label_1cdcb4;
        case 0x1cdcb8u: goto label_1cdcb8;
        case 0x1cdcbcu: goto label_1cdcbc;
        case 0x1cdcc0u: goto label_1cdcc0;
        case 0x1cdcc4u: goto label_1cdcc4;
        case 0x1cdcc8u: goto label_1cdcc8;
        case 0x1cdcccu: goto label_1cdccc;
        case 0x1cdcd0u: goto label_1cdcd0;
        case 0x1cdcd4u: goto label_1cdcd4;
        case 0x1cdcd8u: goto label_1cdcd8;
        case 0x1cdcdcu: goto label_1cdcdc;
        case 0x1cdce0u: goto label_1cdce0;
        case 0x1cdce4u: goto label_1cdce4;
        case 0x1cdce8u: goto label_1cdce8;
        case 0x1cdcecu: goto label_1cdcec;
        case 0x1cdcf0u: goto label_1cdcf0;
        case 0x1cdcf4u: goto label_1cdcf4;
        case 0x1cdcf8u: goto label_1cdcf8;
        case 0x1cdcfcu: goto label_1cdcfc;
        case 0x1cdd00u: goto label_1cdd00;
        case 0x1cdd04u: goto label_1cdd04;
        case 0x1cdd08u: goto label_1cdd08;
        case 0x1cdd0cu: goto label_1cdd0c;
        case 0x1cdd10u: goto label_1cdd10;
        case 0x1cdd14u: goto label_1cdd14;
        case 0x1cdd18u: goto label_1cdd18;
        case 0x1cdd1cu: goto label_1cdd1c;
        case 0x1cdd20u: goto label_1cdd20;
        case 0x1cdd24u: goto label_1cdd24;
        case 0x1cdd28u: goto label_1cdd28;
        case 0x1cdd2cu: goto label_1cdd2c;
        case 0x1cdd30u: goto label_1cdd30;
        case 0x1cdd34u: goto label_1cdd34;
        case 0x1cdd38u: goto label_1cdd38;
        case 0x1cdd3cu: goto label_1cdd3c;
        case 0x1cdd40u: goto label_1cdd40;
        case 0x1cdd44u: goto label_1cdd44;
        case 0x1cdd48u: goto label_1cdd48;
        case 0x1cdd4cu: goto label_1cdd4c;
        case 0x1cdd50u: goto label_1cdd50;
        case 0x1cdd54u: goto label_1cdd54;
        case 0x1cdd58u: goto label_1cdd58;
        case 0x1cdd5cu: goto label_1cdd5c;
        case 0x1cdd60u: goto label_1cdd60;
        case 0x1cdd64u: goto label_1cdd64;
        case 0x1cdd68u: goto label_1cdd68;
        case 0x1cdd6cu: goto label_1cdd6c;
        case 0x1cdd70u: goto label_1cdd70;
        case 0x1cdd74u: goto label_1cdd74;
        case 0x1cdd78u: goto label_1cdd78;
        case 0x1cdd7cu: goto label_1cdd7c;
        case 0x1cdd80u: goto label_1cdd80;
        case 0x1cdd84u: goto label_1cdd84;
        case 0x1cdd88u: goto label_1cdd88;
        case 0x1cdd8cu: goto label_1cdd8c;
        case 0x1cdd90u: goto label_1cdd90;
        case 0x1cdd94u: goto label_1cdd94;
        case 0x1cdd98u: goto label_1cdd98;
        case 0x1cdd9cu: goto label_1cdd9c;
        case 0x1cdda0u: goto label_1cdda0;
        case 0x1cdda4u: goto label_1cdda4;
        case 0x1cdda8u: goto label_1cdda8;
        case 0x1cddacu: goto label_1cddac;
        case 0x1cddb0u: goto label_1cddb0;
        case 0x1cddb4u: goto label_1cddb4;
        case 0x1cddb8u: goto label_1cddb8;
        case 0x1cddbcu: goto label_1cddbc;
        case 0x1cddc0u: goto label_1cddc0;
        case 0x1cddc4u: goto label_1cddc4;
        case 0x1cddc8u: goto label_1cddc8;
        case 0x1cddccu: goto label_1cddcc;
        case 0x1cddd0u: goto label_1cddd0;
        case 0x1cddd4u: goto label_1cddd4;
        case 0x1cddd8u: goto label_1cddd8;
        case 0x1cdddcu: goto label_1cdddc;
        case 0x1cdde0u: goto label_1cdde0;
        case 0x1cdde4u: goto label_1cdde4;
        case 0x1cdde8u: goto label_1cdde8;
        case 0x1cddecu: goto label_1cddec;
        case 0x1cddf0u: goto label_1cddf0;
        case 0x1cddf4u: goto label_1cddf4;
        case 0x1cddf8u: goto label_1cddf8;
        case 0x1cddfcu: goto label_1cddfc;
        case 0x1cde00u: goto label_1cde00;
        case 0x1cde04u: goto label_1cde04;
        case 0x1cde08u: goto label_1cde08;
        case 0x1cde0cu: goto label_1cde0c;
        case 0x1cde10u: goto label_1cde10;
        case 0x1cde14u: goto label_1cde14;
        case 0x1cde18u: goto label_1cde18;
        case 0x1cde1cu: goto label_1cde1c;
        case 0x1cde20u: goto label_1cde20;
        case 0x1cde24u: goto label_1cde24;
        case 0x1cde28u: goto label_1cde28;
        case 0x1cde2cu: goto label_1cde2c;
        case 0x1cde30u: goto label_1cde30;
        case 0x1cde34u: goto label_1cde34;
        case 0x1cde38u: goto label_1cde38;
        case 0x1cde3cu: goto label_1cde3c;
        case 0x1cde40u: goto label_1cde40;
        case 0x1cde44u: goto label_1cde44;
        case 0x1cde48u: goto label_1cde48;
        case 0x1cde4cu: goto label_1cde4c;
        case 0x1cde50u: goto label_1cde50;
        case 0x1cde54u: goto label_1cde54;
        case 0x1cde58u: goto label_1cde58;
        case 0x1cde5cu: goto label_1cde5c;
        case 0x1cde60u: goto label_1cde60;
        case 0x1cde64u: goto label_1cde64;
        case 0x1cde68u: goto label_1cde68;
        case 0x1cde6cu: goto label_1cde6c;
        case 0x1cde70u: goto label_1cde70;
        case 0x1cde74u: goto label_1cde74;
        case 0x1cde78u: goto label_1cde78;
        case 0x1cde7cu: goto label_1cde7c;
        case 0x1cde80u: goto label_1cde80;
        case 0x1cde84u: goto label_1cde84;
        case 0x1cde88u: goto label_1cde88;
        case 0x1cde8cu: goto label_1cde8c;
        case 0x1cde90u: goto label_1cde90;
        case 0x1cde94u: goto label_1cde94;
        case 0x1cde98u: goto label_1cde98;
        case 0x1cde9cu: goto label_1cde9c;
        case 0x1cdea0u: goto label_1cdea0;
        case 0x1cdea4u: goto label_1cdea4;
        case 0x1cdea8u: goto label_1cdea8;
        case 0x1cdeacu: goto label_1cdeac;
        case 0x1cdeb0u: goto label_1cdeb0;
        case 0x1cdeb4u: goto label_1cdeb4;
        case 0x1cdeb8u: goto label_1cdeb8;
        case 0x1cdebcu: goto label_1cdebc;
        case 0x1cdec0u: goto label_1cdec0;
        case 0x1cdec4u: goto label_1cdec4;
        case 0x1cdec8u: goto label_1cdec8;
        case 0x1cdeccu: goto label_1cdecc;
        case 0x1cded0u: goto label_1cded0;
        case 0x1cded4u: goto label_1cded4;
        case 0x1cded8u: goto label_1cded8;
        case 0x1cdedcu: goto label_1cdedc;
        case 0x1cdee0u: goto label_1cdee0;
        case 0x1cdee4u: goto label_1cdee4;
        case 0x1cdee8u: goto label_1cdee8;
        case 0x1cdeecu: goto label_1cdeec;
        case 0x1cdef0u: goto label_1cdef0;
        case 0x1cdef4u: goto label_1cdef4;
        case 0x1cdef8u: goto label_1cdef8;
        case 0x1cdefcu: goto label_1cdefc;
        case 0x1cdf00u: goto label_1cdf00;
        case 0x1cdf04u: goto label_1cdf04;
        case 0x1cdf08u: goto label_1cdf08;
        case 0x1cdf0cu: goto label_1cdf0c;
        case 0x1cdf10u: goto label_1cdf10;
        case 0x1cdf14u: goto label_1cdf14;
        case 0x1cdf18u: goto label_1cdf18;
        case 0x1cdf1cu: goto label_1cdf1c;
        case 0x1cdf20u: goto label_1cdf20;
        case 0x1cdf24u: goto label_1cdf24;
        case 0x1cdf28u: goto label_1cdf28;
        case 0x1cdf2cu: goto label_1cdf2c;
        case 0x1cdf30u: goto label_1cdf30;
        case 0x1cdf34u: goto label_1cdf34;
        case 0x1cdf38u: goto label_1cdf38;
        case 0x1cdf3cu: goto label_1cdf3c;
        case 0x1cdf40u: goto label_1cdf40;
        case 0x1cdf44u: goto label_1cdf44;
        case 0x1cdf48u: goto label_1cdf48;
        case 0x1cdf4cu: goto label_1cdf4c;
        case 0x1cdf50u: goto label_1cdf50;
        case 0x1cdf54u: goto label_1cdf54;
        case 0x1cdf58u: goto label_1cdf58;
        case 0x1cdf5cu: goto label_1cdf5c;
        case 0x1cdf60u: goto label_1cdf60;
        case 0x1cdf64u: goto label_1cdf64;
        case 0x1cdf68u: goto label_1cdf68;
        case 0x1cdf6cu: goto label_1cdf6c;
        case 0x1cdf70u: goto label_1cdf70;
        case 0x1cdf74u: goto label_1cdf74;
        case 0x1cdf78u: goto label_1cdf78;
        case 0x1cdf7cu: goto label_1cdf7c;
        case 0x1cdf80u: goto label_1cdf80;
        case 0x1cdf84u: goto label_1cdf84;
        case 0x1cdf88u: goto label_1cdf88;
        case 0x1cdf8cu: goto label_1cdf8c;
        case 0x1cdf90u: goto label_1cdf90;
        case 0x1cdf94u: goto label_1cdf94;
        case 0x1cdf98u: goto label_1cdf98;
        case 0x1cdf9cu: goto label_1cdf9c;
        case 0x1cdfa0u: goto label_1cdfa0;
        case 0x1cdfa4u: goto label_1cdfa4;
        case 0x1cdfa8u: goto label_1cdfa8;
        case 0x1cdfacu: goto label_1cdfac;
        case 0x1cdfb0u: goto label_1cdfb0;
        case 0x1cdfb4u: goto label_1cdfb4;
        case 0x1cdfb8u: goto label_1cdfb8;
        case 0x1cdfbcu: goto label_1cdfbc;
        case 0x1cdfc0u: goto label_1cdfc0;
        case 0x1cdfc4u: goto label_1cdfc4;
        case 0x1cdfc8u: goto label_1cdfc8;
        case 0x1cdfccu: goto label_1cdfcc;
        case 0x1cdfd0u: goto label_1cdfd0;
        case 0x1cdfd4u: goto label_1cdfd4;
        case 0x1cdfd8u: goto label_1cdfd8;
        case 0x1cdfdcu: goto label_1cdfdc;
        case 0x1cdfe0u: goto label_1cdfe0;
        case 0x1cdfe4u: goto label_1cdfe4;
        case 0x1cdfe8u: goto label_1cdfe8;
        case 0x1cdfecu: goto label_1cdfec;
        case 0x1cdff0u: goto label_1cdff0;
        case 0x1cdff4u: goto label_1cdff4;
        case 0x1cdff8u: goto label_1cdff8;
        case 0x1cdffcu: goto label_1cdffc;
        case 0x1ce000u: goto label_1ce000;
        case 0x1ce004u: goto label_1ce004;
        case 0x1ce008u: goto label_1ce008;
        case 0x1ce00cu: goto label_1ce00c;
        case 0x1ce010u: goto label_1ce010;
        case 0x1ce014u: goto label_1ce014;
        case 0x1ce018u: goto label_1ce018;
        case 0x1ce01cu: goto label_1ce01c;
        case 0x1ce020u: goto label_1ce020;
        case 0x1ce024u: goto label_1ce024;
        case 0x1ce028u: goto label_1ce028;
        case 0x1ce02cu: goto label_1ce02c;
        case 0x1ce030u: goto label_1ce030;
        case 0x1ce034u: goto label_1ce034;
        case 0x1ce038u: goto label_1ce038;
        case 0x1ce03cu: goto label_1ce03c;
        case 0x1ce040u: goto label_1ce040;
        case 0x1ce044u: goto label_1ce044;
        case 0x1ce048u: goto label_1ce048;
        case 0x1ce04cu: goto label_1ce04c;
        case 0x1ce050u: goto label_1ce050;
        case 0x1ce054u: goto label_1ce054;
        case 0x1ce058u: goto label_1ce058;
        case 0x1ce05cu: goto label_1ce05c;
        case 0x1ce060u: goto label_1ce060;
        case 0x1ce064u: goto label_1ce064;
        case 0x1ce068u: goto label_1ce068;
        case 0x1ce06cu: goto label_1ce06c;
        case 0x1ce070u: goto label_1ce070;
        case 0x1ce074u: goto label_1ce074;
        case 0x1ce078u: goto label_1ce078;
        case 0x1ce07cu: goto label_1ce07c;
        case 0x1ce080u: goto label_1ce080;
        case 0x1ce084u: goto label_1ce084;
        case 0x1ce088u: goto label_1ce088;
        case 0x1ce08cu: goto label_1ce08c;
        case 0x1ce090u: goto label_1ce090;
        case 0x1ce094u: goto label_1ce094;
        case 0x1ce098u: goto label_1ce098;
        case 0x1ce09cu: goto label_1ce09c;
        case 0x1ce0a0u: goto label_1ce0a0;
        case 0x1ce0a4u: goto label_1ce0a4;
        case 0x1ce0a8u: goto label_1ce0a8;
        case 0x1ce0acu: goto label_1ce0ac;
        case 0x1ce0b0u: goto label_1ce0b0;
        case 0x1ce0b4u: goto label_1ce0b4;
        case 0x1ce0b8u: goto label_1ce0b8;
        case 0x1ce0bcu: goto label_1ce0bc;
        case 0x1ce0c0u: goto label_1ce0c0;
        case 0x1ce0c4u: goto label_1ce0c4;
        case 0x1ce0c8u: goto label_1ce0c8;
        case 0x1ce0ccu: goto label_1ce0cc;
        case 0x1ce0d0u: goto label_1ce0d0;
        case 0x1ce0d4u: goto label_1ce0d4;
        case 0x1ce0d8u: goto label_1ce0d8;
        case 0x1ce0dcu: goto label_1ce0dc;
        case 0x1ce0e0u: goto label_1ce0e0;
        case 0x1ce0e4u: goto label_1ce0e4;
        case 0x1ce0e8u: goto label_1ce0e8;
        case 0x1ce0ecu: goto label_1ce0ec;
        case 0x1ce0f0u: goto label_1ce0f0;
        case 0x1ce0f4u: goto label_1ce0f4;
        case 0x1ce0f8u: goto label_1ce0f8;
        case 0x1ce0fcu: goto label_1ce0fc;
        case 0x1ce100u: goto label_1ce100;
        case 0x1ce104u: goto label_1ce104;
        case 0x1ce108u: goto label_1ce108;
        case 0x1ce10cu: goto label_1ce10c;
        case 0x1ce110u: goto label_1ce110;
        case 0x1ce114u: goto label_1ce114;
        case 0x1ce118u: goto label_1ce118;
        case 0x1ce11cu: goto label_1ce11c;
        case 0x1ce120u: goto label_1ce120;
        case 0x1ce124u: goto label_1ce124;
        case 0x1ce128u: goto label_1ce128;
        case 0x1ce12cu: goto label_1ce12c;
        default: break;
    }

    ctx->pc = 0x1cc040u;

label_1cc040:
    // 0x1cc040: 0x27bdfd40  addiu       $sp, $sp, -0x2C0
    ctx->pc = 0x1cc040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966592));
label_1cc044:
    // 0x1cc044: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1cc044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1cc048:
    // 0x1cc048: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1cc048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1cc04c:
    // 0x1cc04c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1cc04cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1cc050:
    // 0x1cc050: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1cc050u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1cc054:
    // 0x1cc054: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1cc054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1cc058:
    // 0x1cc058: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1cc058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1cc05c:
    // 0x1cc05c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1cc05cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1cc060:
    // 0x1cc060: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cc060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1cc064:
    // 0x1cc064: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cc064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1cc068:
    // 0x1cc068: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1cc068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1cc06c:
    // 0x1cc06c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cc06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cc070:
    // 0x1cc070: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1cc070u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1cc074:
    // 0x1cc074: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1cc074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1cc078:
    // 0x1cc078: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1cc078u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_1cc07c:
    // 0x1cc07c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1cc07cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1cc080:
    // 0x1cc080: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1cc080u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_1cc084:
    // 0x1cc084: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_1cc088:
    if (ctx->pc == 0x1CC088u) {
        ctx->pc = 0x1CC088u;
            // 0x1cc088: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->pc = 0x1CC08Cu;
        goto label_1cc08c;
    }
    ctx->pc = 0x1CC084u;
    {
        const bool branch_taken_0x1cc084 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1CC088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC084u;
            // 0x1cc088: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc084) {
            ctx->pc = 0x1CC06Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cc06c;
        }
    }
    ctx->pc = 0x1CC08Cu;
label_1cc08c:
    // 0x1cc08c: 0xc0521d8  jal         func_148760
label_1cc090:
    if (ctx->pc == 0x1CC090u) {
        ctx->pc = 0x1CC090u;
            // 0x1cc090: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CC094u;
        goto label_1cc094;
    }
    ctx->pc = 0x1CC08Cu;
    SET_GPR_U32(ctx, 31, 0x1CC094u);
    ctx->pc = 0x1CC090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC08Cu;
            // 0x1cc090: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148760u;
    if (runtime->hasFunction(0x148760u)) {
        auto targetFn = runtime->lookupFunction(0x148760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC094u; }
        if (ctx->pc != 0x1CC094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCurrentDir__FPc_0x148760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC094u; }
        if (ctx->pc != 0x1CC094u) { return; }
    }
    ctx->pc = 0x1CC094u;
label_1cc094:
    // 0x1cc094: 0xc072f5c  jal         func_1CBD70
label_1cc098:
    if (ctx->pc == 0x1CC098u) {
        ctx->pc = 0x1CC09Cu;
        goto label_1cc09c;
    }
    ctx->pc = 0x1CC094u;
    SET_GPR_U32(ctx, 31, 0x1CC09Cu);
    ctx->pc = 0x1CBD70u;
    if (runtime->hasFunction(0x1CBD70u)) {
        auto targetFn = runtime->lookupFunction(0x1CBD70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC09Cu; }
        if (ctx->pc != 0x1CC09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memoryInit__Fv_0x1cbd70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC09Cu; }
        if (ctx->pc != 0x1CC09Cu) { return; }
    }
    ctx->pc = 0x1CC09Cu;
label_1cc09c:
    // 0x1cc09c: 0x24020051  addiu       $v0, $zero, 0x51
    ctx->pc = 0x1cc09cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_1cc0a0:
    // 0x1cc0a0: 0x3c0101eb  lui         $at, 0x1EB
    ctx->pc = 0x1cc0a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)491 << 16));
label_1cc0a4:
    // 0x1cc0a4: 0xac2266f0  sw          $v0, 0x66F0($at)
    ctx->pc = 0x1cc0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 26352), GPR_U32(ctx, 2));
label_1cc0a8:
    // 0x1cc0a8: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x1cc0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
label_1cc0ac:
    // 0x1cc0ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cc0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc0b0:
    // 0x1cc0b0: 0x3c0101eb  lui         $at, 0x1EB
    ctx->pc = 0x1cc0b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)491 << 16));
label_1cc0b4:
    // 0x1cc0b4: 0xac2266f4  sw          $v0, 0x66F4($at)
    ctx->pc = 0x1cc0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 26356), GPR_U32(ctx, 2));
label_1cc0b8:
    // 0x1cc0b8: 0x248466f8  addiu       $a0, $a0, 0x66F8
    ctx->pc = 0x1cc0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26360));
label_1cc0bc:
    // 0x1cc0bc: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1cc0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1cc0c0:
    // 0x1cc0c0: 0x3c0101eb  lui         $at, 0x1EB
    ctx->pc = 0x1cc0c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)491 << 16));
label_1cc0c4:
    // 0x1cc0c4: 0xac226728  sw          $v0, 0x6728($at)
    ctx->pc = 0x1cc0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 26408), GPR_U32(ctx, 2));
label_1cc0c8:
    // 0x1cc0c8: 0x24062710  addiu       $a2, $zero, 0x2710
    ctx->pc = 0x1cc0c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
label_1cc0cc:
    // 0x1cc0cc: 0x8f828d74  lw          $v0, -0x728C($gp)
    ctx->pc = 0x1cc0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_1cc0d0:
    // 0x1cc0d0: 0x3c01002e  lui         $at, 0x2E
    ctx->pc = 0x1cc0d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)46 << 16));
label_1cc0d4:
    // 0x1cc0d4: 0x34216300  ori         $at, $at, 0x6300
    ctx->pc = 0x1cc0d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)25344);
label_1cc0d8:
    // 0x1cc0d8: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x1cc0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
label_1cc0dc:
    // 0x1cc0dc: 0xc04e79c  jal         func_139E70
label_1cc0e0:
    if (ctx->pc == 0x1CC0E0u) {
        ctx->pc = 0x1CC0E0u;
            // 0x1cc0e0: 0x412821  addu        $a1, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->pc = 0x1CC0E4u;
        goto label_1cc0e4;
    }
    ctx->pc = 0x1CC0DCu;
    SET_GPR_U32(ctx, 31, 0x1CC0E4u);
    ctx->pc = 0x1CC0E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC0DCu;
            // 0x1cc0e0: 0x412821  addu        $a1, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC0E4u; }
        if (ctx->pc != 0x1CC0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC0E4u; }
        if (ctx->pc != 0x1CC0E4u) { return; }
    }
    ctx->pc = 0x1CC0E4u;
label_1cc0e4:
    // 0x1cc0e4: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x1cc0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
label_1cc0e8:
    // 0x1cc0e8: 0xc0c25fc  jal         func_3097F0
label_1cc0ec:
    if (ctx->pc == 0x1CC0ECu) {
        ctx->pc = 0x1CC0ECu;
            // 0x1cc0ec: 0x248466f0  addiu       $a0, $a0, 0x66F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26352));
        ctx->pc = 0x1CC0F0u;
        goto label_1cc0f0;
    }
    ctx->pc = 0x1CC0E8u;
    SET_GPR_U32(ctx, 31, 0x1CC0F0u);
    ctx->pc = 0x1CC0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC0E8u;
            // 0x1cc0ec: 0x248466f0  addiu       $a0, $a0, 0x66F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3097F0u;
    if (runtime->hasFunction(0x3097F0u)) {
        auto targetFn = runtime->lookupFunction(0x3097F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC0F0u; }
        if (ctx->pc != 0x1CC0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateNowLoading__FP14NowLoadingInfo_0x3097f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC0F0u; }
        if (ctx->pc != 0x1CC0F0u) { return; }
    }
    ctx->pc = 0x1CC0F0u;
label_1cc0f0:
    // 0x1cc0f0: 0xc064220  jal         func_190880
label_1cc0f4:
    if (ctx->pc == 0x1CC0F4u) {
        ctx->pc = 0x1CC0F8u;
        goto label_1cc0f8;
    }
    ctx->pc = 0x1CC0F0u;
    SET_GPR_U32(ctx, 31, 0x1CC0F8u);
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC0F8u; }
        if (ctx->pc != 0x1CC0F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC0F8u; }
        if (ctx->pc != 0x1CC0F8u) { return; }
    }
    ctx->pc = 0x1CC0F8u;
label_1cc0f8:
    // 0x1cc0f8: 0xaf828da4  sw          $v0, -0x725C($gp)
    ctx->pc = 0x1cc0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938020), GPR_U32(ctx, 2));
label_1cc0fc:
    // 0x1cc0fc: 0x8f838da4  lw          $v1, -0x725C($gp)
    ctx->pc = 0x1cc0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938020)));
label_1cc100:
    // 0x1cc100: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_1cc104:
    if (ctx->pc == 0x1CC104u) {
        ctx->pc = 0x1CC104u;
            // 0x1cc104: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x1CC108u;
        goto label_1cc108;
    }
    ctx->pc = 0x1CC100u;
    {
        const bool branch_taken_0x1cc100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC104u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC100u;
            // 0x1cc104: 0x3c010001  lui         $at, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc100) {
            ctx->pc = 0x1CC11Cu;
            goto label_1cc11c;
        }
    }
    ctx->pc = 0x1CC108u;
label_1cc108:
    // 0x1cc108: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1cc108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1cc10c:
    // 0x1cc10c: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x1cc10cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
label_1cc110:
    // 0x1cc110: 0x611021  addu        $v0, $v1, $at
    ctx->pc = 0x1cc110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_1cc114:
    // 0x1cc114: 0xaf828da0  sw          $v0, -0x7260($gp)
    ctx->pc = 0x1cc114u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938016), GPR_U32(ctx, 2));
label_1cc118:
    // 0x1cc118: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1cc118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1cc11c:
    // 0x1cc11c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cc11cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc120:
    // 0x1cc120: 0x3421c5b4  ori         $at, $at, 0xC5B4
    ctx->pc = 0x1cc120u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50612);
label_1cc124:
    // 0x1cc124: 0xaf808d88  sw          $zero, -0x7278($gp)
    ctx->pc = 0x1cc124u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937992), GPR_U32(ctx, 0));
label_1cc128:
    // 0x1cc128: 0x611021  addu        $v0, $v1, $at
    ctx->pc = 0x1cc128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_1cc12c:
    // 0x1cc12c: 0xc067b18  jal         func_19EC60
label_1cc130:
    if (ctx->pc == 0x1CC130u) {
        ctx->pc = 0x1CC130u;
            // 0x1cc130: 0xaf828da8  sw          $v0, -0x7258($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938024), GPR_U32(ctx, 2));
        ctx->pc = 0x1CC134u;
        goto label_1cc134;
    }
    ctx->pc = 0x1CC12Cu;
    SET_GPR_U32(ctx, 31, 0x1CC134u);
    ctx->pc = 0x1CC130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC12Cu;
            // 0x1cc130: 0xaf828da8  sw          $v0, -0x7258($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938024), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19EC60u;
    if (runtime->hasFunction(0x19EC60u)) {
        auto targetFn = runtime->lookupFunction(0x19EC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC134u; }
        if (ctx->pc != 0x1CC134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetEnvUserDataMan__Fi_0x19ec60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC134u; }
        if (ctx->pc != 0x1CC134u) { return; }
    }
    ctx->pc = 0x1CC134u;
label_1cc134:
    // 0x1cc134: 0xc06421c  jal         func_190870
label_1cc138:
    if (ctx->pc == 0x1CC138u) {
        ctx->pc = 0x1CC13Cu;
        goto label_1cc13c;
    }
    ctx->pc = 0x1CC134u;
    SET_GPR_U32(ctx, 31, 0x1CC13Cu);
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC13Cu; }
        if (ctx->pc != 0x1CC13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC13Cu; }
        if (ctx->pc != 0x1CC13Cu) { return; }
    }
    ctx->pc = 0x1CC13Cu;
label_1cc13c:
    // 0x1cc13c: 0xaf828dac  sw          $v0, -0x7254($gp)
    ctx->pc = 0x1cc13cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938028), GPR_U32(ctx, 2));
label_1cc140:
    // 0x1cc140: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cc140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cc144:
    // 0x1cc144: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1cc144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1cc148:
    // 0x1cc148: 0x8f828da8  lw          $v0, -0x7258($gp)
    ctx->pc = 0x1cc148u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938024)));
label_1cc14c:
    // 0x1cc14c: 0x24842f90  addiu       $a0, $a0, 0x2F90
    ctx->pc = 0x1cc14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12176));
label_1cc150:
    // 0x1cc150: 0xaf848db0  sw          $a0, -0x7250($gp)
    ctx->pc = 0x1cc150u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938032), GPR_U32(ctx, 4));
label_1cc154:
    // 0x1cc154: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1cc154u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1cc158:
    // 0x1cc158: 0x8fa500c4  lw          $a1, 0xC4($sp)
    ctx->pc = 0x1cc158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
label_1cc15c:
    // 0x1cc15c: 0x4a00003  bltz        $a1, . + 4 + (0x3 << 2)
label_1cc160:
    if (ctx->pc == 0x1CC160u) {
        ctx->pc = 0x1CC164u;
        goto label_1cc164;
    }
    ctx->pc = 0x1CC15Cu;
    {
        const bool branch_taken_0x1cc15c = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1cc15c) {
            ctx->pc = 0x1CC16Cu;
            goto label_1cc16c;
        }
    }
    ctx->pc = 0x1CC164u;
label_1cc164:
    // 0x1cc164: 0xc0bdcfc  jal         func_2F73F0
label_1cc168:
    if (ctx->pc == 0x1CC168u) {
        ctx->pc = 0x1CC168u;
            // 0x1cc168: 0x8f848da8  lw          $a0, -0x7258($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938024)));
        ctx->pc = 0x1CC16Cu;
        goto label_1cc16c;
    }
    ctx->pc = 0x1CC164u;
    SET_GPR_U32(ctx, 31, 0x1CC16Cu);
    ctx->pc = 0x1CC168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC164u;
            // 0x1cc168: 0x8f848da8  lw          $a0, -0x7258($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938024)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F73F0u;
    if (runtime->hasFunction(0x2F73F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F73F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC16Cu; }
        if (ctx->pc != 0x1CC16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFloorID__16CSaveDataDungeonFi_0x2f73f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC16Cu; }
        if (ctx->pc != 0x1CC16Cu) { return; }
    }
    ctx->pc = 0x1CC16Cu;
label_1cc16c:
    // 0x1cc16c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1cc16cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1cc170:
    // 0x1cc170: 0xc0bafe8  jal         func_2EBFA0
label_1cc174:
    if (ctx->pc == 0x1CC174u) {
        ctx->pc = 0x1CC174u;
            // 0x1cc174: 0x24845830  addiu       $a0, $a0, 0x5830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22576));
        ctx->pc = 0x1CC178u;
        goto label_1cc178;
    }
    ctx->pc = 0x1CC170u;
    SET_GPR_U32(ctx, 31, 0x1CC178u);
    ctx->pc = 0x1CC174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC170u;
            // 0x1cc174: 0x24845830  addiu       $a0, $a0, 0x5830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBFA0u;
    if (runtime->hasFunction(0x2EBFA0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC178u; }
        if (ctx->pc != 0x1CC178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveParam__14CCameraControlFv_0x2ebfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC178u; }
        if (ctx->pc != 0x1CC178u) { return; }
    }
    ctx->pc = 0x1CC178u;
label_1cc178:
    // 0x1cc178: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1cc17c:
    if (ctx->pc == 0x1CC17Cu) {
        ctx->pc = 0x1CC17Cu;
            // 0x1cc17c: 0x3c0342c8  lui         $v1, 0x42C8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
        ctx->pc = 0x1CC180u;
        goto label_1cc180;
    }
    ctx->pc = 0x1CC178u;
    {
        const bool branch_taken_0x1cc178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC17Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC178u;
            // 0x1cc17c: 0x3c0342c8  lui         $v1, 0x42C8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc178) {
            ctx->pc = 0x1CC1C4u;
            goto label_1cc1c4;
        }
    }
    ctx->pc = 0x1CC180u;
label_1cc180:
    // 0x1cc180: 0x3c044320  lui         $a0, 0x4320
    ctx->pc = 0x1cc180u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17184 << 16));
label_1cc184:
    // 0x1cc184: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1cc184u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1cc188:
    // 0x1cc188: 0x3c05c170  lui         $a1, 0xC170
    ctx->pc = 0x1cc188u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49520 << 16));
label_1cc18c:
    // 0x1cc18c: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x1cc18cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_1cc190:
    // 0x1cc190: 0x3c034190  lui         $v1, 0x4190
    ctx->pc = 0x1cc190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16784 << 16));
label_1cc194:
    // 0x1cc194: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1cc194u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_1cc198:
    // 0x1cc198: 0x3c044120  lui         $a0, 0x4120
    ctx->pc = 0x1cc198u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16672 << 16));
label_1cc19c:
    // 0x1cc19c: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x1cc19cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
label_1cc1a0:
    // 0x1cc1a0: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x1cc1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
label_1cc1a4:
    // 0x1cc1a4: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x1cc1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
label_1cc1a8:
    // 0x1cc1a8: 0x3c0441a0  lui         $a0, 0x41A0
    ctx->pc = 0x1cc1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16800 << 16));
label_1cc1ac:
    // 0x1cc1ac: 0xac450018  sw          $a1, 0x18($v0)
    ctx->pc = 0x1cc1acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 5));
label_1cc1b0:
    // 0x1cc1b0: 0x3c0341c8  lui         $v1, 0x41C8
    ctx->pc = 0x1cc1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16840 << 16));
label_1cc1b4:
    // 0x1cc1b4: 0xac44001c  sw          $a0, 0x1C($v0)
    ctx->pc = 0x1cc1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 4));
label_1cc1b8:
    // 0x1cc1b8: 0xac450020  sw          $a1, 0x20($v0)
    ctx->pc = 0x1cc1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 5));
label_1cc1bc:
    // 0x1cc1bc: 0xac450010  sw          $a1, 0x10($v0)
    ctx->pc = 0x1cc1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 5));
label_1cc1c0:
    // 0x1cc1c0: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x1cc1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
label_1cc1c4:
    // 0x1cc1c4: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cc1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cc1c8:
    // 0x1cc1c8: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1cc1c8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1cc1cc:
    // 0x1cc1cc: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1cc1ccu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_1cc1d0:
    // 0x1cc1d0: 0x8c390548  lw          $t9, 0x548($at)
    ctx->pc = 0x1cc1d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 1352)));
label_1cc1d4:
    // 0x1cc1d4: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1cc1d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1cc1d8:
    // 0x1cc1d8: 0x320f809  jalr        $t9
label_1cc1dc:
    if (ctx->pc == 0x1CC1DCu) {
        ctx->pc = 0x1CC1E0u;
        goto label_1cc1e0;
    }
    ctx->pc = 0x1CC1D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CC1E0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CC1E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CC1E0u; }
            if (ctx->pc != 0x1CC1E0u) { return; }
        }
        }
    }
    ctx->pc = 0x1CC1E0u;
label_1cc1e0:
    // 0x1cc1e0: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cc1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cc1e4:
    // 0x1cc1e4: 0x3c0601ea  lui         $a2, 0x1EA
    ctx->pc = 0x1cc1e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)490 << 16));
label_1cc1e8:
    // 0x1cc1e8: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x1cc1e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
label_1cc1ec:
    // 0x1cc1ec: 0x24c65830  addiu       $a2, $a2, 0x5830
    ctx->pc = 0x1cc1ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22576));
label_1cc1f0:
    // 0x1cc1f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc1f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc1f4:
    // 0x1cc1f4: 0xc0a0dd0  jal         func_283740
label_1cc1f8:
    if (ctx->pc == 0x1CC1F8u) {
        ctx->pc = 0x1CC1F8u;
            // 0x1cc1f8: 0x24e76dd0  addiu       $a3, $a3, 0x6DD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28112));
        ctx->pc = 0x1CC1FCu;
        goto label_1cc1fc;
    }
    ctx->pc = 0x1CC1F4u;
    SET_GPR_U32(ctx, 31, 0x1CC1FCu);
    ctx->pc = 0x1CC1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC1F4u;
            // 0x1cc1f8: 0x24e76dd0  addiu       $a3, $a3, 0x6DD0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283740u;
    if (runtime->hasFunction(0x283740u)) {
        auto targetFn = runtime->lookupFunction(0x283740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC1FCu; }
        if (ctx->pc != 0x1CC1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignCamera__6CSceneFiP9mgCCameraPc_0x283740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC1FCu; }
        if (ctx->pc != 0x1CC1FCu) { return; }
    }
    ctx->pc = 0x1CC1FCu;
label_1cc1fc:
    // 0x1cc1fc: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cc1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cc200:
    // 0x1cc200: 0x3c0601ea  lui         $a2, 0x1EA
    ctx->pc = 0x1cc200u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)490 << 16));
label_1cc204:
    // 0x1cc204: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x1cc204u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
label_1cc208:
    // 0x1cc208: 0x24c65a20  addiu       $a2, $a2, 0x5A20
    ctx->pc = 0x1cc208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23072));
label_1cc20c:
    // 0x1cc20c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cc20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc210:
    // 0x1cc210: 0xc0a0dd0  jal         func_283740
label_1cc214:
    if (ctx->pc == 0x1CC214u) {
        ctx->pc = 0x1CC214u;
            // 0x1cc214: 0x24e76dd8  addiu       $a3, $a3, 0x6DD8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28120));
        ctx->pc = 0x1CC218u;
        goto label_1cc218;
    }
    ctx->pc = 0x1CC210u;
    SET_GPR_U32(ctx, 31, 0x1CC218u);
    ctx->pc = 0x1CC214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC210u;
            // 0x1cc214: 0x24e76dd8  addiu       $a3, $a3, 0x6DD8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 28120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283740u;
    if (runtime->hasFunction(0x283740u)) {
        auto targetFn = runtime->lookupFunction(0x283740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC218u; }
        if (ctx->pc != 0x1CC218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignCamera__6CSceneFiP9mgCCameraPc_0x283740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC218u; }
        if (ctx->pc != 0x1CC218u) { return; }
    }
    ctx->pc = 0x1CC218u;
label_1cc218:
    // 0x1cc218: 0x8f868dac  lw          $a2, -0x7254($gp)
    ctx->pc = 0x1cc218u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cc21c:
    // 0x1cc21c: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1cc21cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1cc220:
    // 0x1cc220: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x1cc220u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1cc224:
    // 0x1cc224: 0x24040051  addiu       $a0, $zero, 0x51
    ctx->pc = 0x1cc224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
label_1cc228:
    // 0x1cc228: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1cc228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cc22c:
    // 0x1cc22c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cc22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc230:
    // 0x1cc230: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cc230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc234:
    // 0x1cc234: 0xacc02e54  sw          $zero, 0x2E54($a2)
    ctx->pc = 0x1cc234u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 11860), GPR_U32(ctx, 0));
label_1cc238:
    // 0x1cc238: 0x8f868dac  lw          $a2, -0x7254($gp)
    ctx->pc = 0x1cc238u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cc23c:
    // 0x1cc23c: 0xacc72e70  sw          $a3, 0x2E70($a2)
    ctx->pc = 0x1cc23cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 11888), GPR_U32(ctx, 7));
label_1cc240:
    // 0x1cc240: 0x8f868dac  lw          $a2, -0x7254($gp)
    ctx->pc = 0x1cc240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cc244:
    // 0x1cc244: 0xacc52e74  sw          $a1, 0x2E74($a2)
    ctx->pc = 0x1cc244u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 11892), GPR_U32(ctx, 5));
label_1cc248:
    // 0x1cc248: 0xacc72e78  sw          $a3, 0x2E78($a2)
    ctx->pc = 0x1cc248u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 11896), GPR_U32(ctx, 7));
label_1cc24c:
    // 0x1cc24c: 0x8f858dac  lw          $a1, -0x7254($gp)
    ctx->pc = 0x1cc24cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cc250:
    // 0x1cc250: 0xaca42e7c  sw          $a0, 0x2E7C($a1)
    ctx->pc = 0x1cc250u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 11900), GPR_U32(ctx, 4));
label_1cc254:
    // 0x1cc254: 0xaca32e80  sw          $v1, 0x2E80($a1)
    ctx->pc = 0x1cc254u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 11904), GPR_U32(ctx, 3));
label_1cc258:
    // 0x1cc258: 0x8f848d74  lw          $a0, -0x728C($gp)
    ctx->pc = 0x1cc258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_1cc25c:
    // 0x1cc25c: 0x8f838dac  lw          $v1, -0x7254($gp)
    ctx->pc = 0x1cc25cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cc260:
    // 0x1cc260: 0xac64003c  sw          $a0, 0x3C($v1)
    ctx->pc = 0x1cc260u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 4));
label_1cc264:
    // 0x1cc264: 0x8f838db0  lw          $v1, -0x7250($gp)
    ctx->pc = 0x1cc264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1cc268:
    // 0x1cc268: 0xaf808db4  sw          $zero, -0x724C($gp)
    ctx->pc = 0x1cc268u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938036), GPR_U32(ctx, 0));
label_1cc26c:
    // 0x1cc26c: 0xac62005c  sw          $v0, 0x5C($v1)
    ctx->pc = 0x1cc26cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 92), GPR_U32(ctx, 2));
label_1cc270:
    // 0x1cc270: 0xac600084  sw          $zero, 0x84($v1)
    ctx->pc = 0x1cc270u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 132), GPR_U32(ctx, 0));
label_1cc274:
    // 0x1cc274: 0xac600088  sw          $zero, 0x88($v1)
    ctx->pc = 0x1cc274u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 136), GPR_U32(ctx, 0));
label_1cc278:
    // 0x1cc278: 0xac600054  sw          $zero, 0x54($v1)
    ctx->pc = 0x1cc278u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 84), GPR_U32(ctx, 0));
label_1cc27c:
    // 0x1cc27c: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x1cc27cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
label_1cc280:
    // 0x1cc280: 0xac600010  sw          $zero, 0x10($v1)
    ctx->pc = 0x1cc280u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 0));
label_1cc284:
    // 0x1cc284: 0xac600064  sw          $zero, 0x64($v1)
    ctx->pc = 0x1cc284u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 100), GPR_U32(ctx, 0));
label_1cc288:
    // 0x1cc288: 0xa4600078  sh          $zero, 0x78($v1)
    ctx->pc = 0x1cc288u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 120), (uint16_t)GPR_U32(ctx, 0));
label_1cc28c:
    // 0x1cc28c: 0xa4600046  sh          $zero, 0x46($v1)
    ctx->pc = 0x1cc28cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 70), (uint16_t)GPR_U32(ctx, 0));
label_1cc290:
    // 0x1cc290: 0xfc600090  sd          $zero, 0x90($v1)
    ctx->pc = 0x1cc290u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 144), GPR_U64(ctx, 0));
label_1cc294:
    // 0x1cc294: 0xac600098  sw          $zero, 0x98($v1)
    ctx->pc = 0x1cc294u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 152), GPR_U32(ctx, 0));
label_1cc298:
    // 0x1cc298: 0xa460000c  sh          $zero, 0xC($v1)
    ctx->pc = 0x1cc298u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 12), (uint16_t)GPR_U32(ctx, 0));
label_1cc29c:
    // 0x1cc29c: 0xa060008c  sb          $zero, 0x8C($v1)
    ctx->pc = 0x1cc29cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 140), (uint8_t)GPR_U32(ctx, 0));
label_1cc2a0:
    // 0x1cc2a0: 0xa460009e  sh          $zero, 0x9E($v1)
    ctx->pc = 0x1cc2a0u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 158), (uint16_t)GPR_U32(ctx, 0));
label_1cc2a4:
    // 0x1cc2a4: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1cc2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1cc2a8:
    // 0x1cc2a8: 0xa0400024  sb          $zero, 0x24($v0)
    ctx->pc = 0x1cc2a8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 36), (uint8_t)GPR_U32(ctx, 0));
label_1cc2ac:
    // 0x1cc2ac: 0x8f848d70  lw          $a0, -0x7290($gp)
    ctx->pc = 0x1cc2acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
label_1cc2b0:
    // 0x1cc2b0: 0xc04e748  jal         func_139D20
label_1cc2b4:
    if (ctx->pc == 0x1CC2B4u) {
        ctx->pc = 0x1CC2B4u;
            // 0x1cc2b4: 0x24050105  addiu       $a1, $zero, 0x105 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
        ctx->pc = 0x1CC2B8u;
        goto label_1cc2b8;
    }
    ctx->pc = 0x1CC2B0u;
    SET_GPR_U32(ctx, 31, 0x1CC2B8u);
    ctx->pc = 0x1CC2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC2B0u;
            // 0x1cc2b4: 0x24050105  addiu       $a1, $zero, 0x105 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC2B8u; }
        if (ctx->pc != 0x1CC2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC2B8u; }
        if (ctx->pc != 0x1CC2B8u) { return; }
    }
    ctx->pc = 0x1CC2B8u;
label_1cc2b8:
    // 0x1cc2b8: 0x24041030  addiu       $a0, $zero, 0x1030
    ctx->pc = 0x1cc2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4144));
label_1cc2bc:
    // 0x1cc2bc: 0xc04e638  jal         func_1398E0
label_1cc2c0:
    if (ctx->pc == 0x1CC2C0u) {
        ctx->pc = 0x1CC2C0u;
            // 0x1cc2c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CC2C4u;
        goto label_1cc2c4;
    }
    ctx->pc = 0x1CC2BCu;
    SET_GPR_U32(ctx, 31, 0x1CC2C4u);
    ctx->pc = 0x1CC2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC2BCu;
            // 0x1cc2c0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC2C4u; }
        if (ctx->pc != 0x1CC2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC2C4u; }
        if (ctx->pc != 0x1CC2C4u) { return; }
    }
    ctx->pc = 0x1CC2C4u;
label_1cc2c4:
    // 0x1cc2c4: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_1cc2c8:
    if (ctx->pc == 0x1CC2C8u) {
        ctx->pc = 0x1CC2C8u;
            // 0x1cc2c8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CC2CCu;
        goto label_1cc2cc;
    }
    ctx->pc = 0x1CC2C4u;
    {
        const bool branch_taken_0x1cc2c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC2C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC2C4u;
            // 0x1cc2c8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc2c4) {
            ctx->pc = 0x1CC36Cu;
            goto label_1cc36c;
        }
    }
    ctx->pc = 0x1CC2CCu;
label_1cc2cc:
    // 0x1cc2cc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1cc2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1cc2d0:
    // 0x1cc2d0: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x1cc2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_1cc2d4:
    // 0x1cc2d4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1cc2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1cc2d8:
    // 0x1cc2d8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1cc2d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cc2dc:
    // 0x1cc2dc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1cc2dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1cc2e0:
    // 0x1cc2e0: 0x320f809  jalr        $t9
label_1cc2e4:
    if (ctx->pc == 0x1CC2E4u) {
        ctx->pc = 0x1CC2E4u;
            // 0x1cc2e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CC2E8u;
        goto label_1cc2e8;
    }
    ctx->pc = 0x1CC2E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CC2E8u);
        ctx->pc = 0x1CC2E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC2E0u;
            // 0x1cc2e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CC2E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CC2E8u; }
            if (ctx->pc != 0x1CC2E8u) { return; }
        }
        }
    }
    ctx->pc = 0x1CC2E8u;
label_1cc2e8:
    // 0x1cc2e8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1cc2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1cc2ec:
    // 0x1cc2ec: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x1cc2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_1cc2f0:
    // 0x1cc2f0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1cc2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1cc2f4:
    // 0x1cc2f4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1cc2f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cc2f8:
    // 0x1cc2f8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1cc2f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1cc2fc:
    // 0x1cc2fc: 0x320f809  jalr        $t9
label_1cc300:
    if (ctx->pc == 0x1CC300u) {
        ctx->pc = 0x1CC300u;
            // 0x1cc300: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CC304u;
        goto label_1cc304;
    }
    ctx->pc = 0x1CC2FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CC304u);
        ctx->pc = 0x1CC300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC2FCu;
            // 0x1cc300: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CC304u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CC304u; }
            if (ctx->pc != 0x1CC304u) { return; }
        }
        }
    }
    ctx->pc = 0x1CC304u;
label_1cc304:
    // 0x1cc304: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1cc304u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1cc308:
    // 0x1cc308: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x1cc308u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_1cc30c:
    // 0x1cc30c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1cc30cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1cc310:
    // 0x1cc310: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1cc310u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cc314:
    // 0x1cc314: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1cc314u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1cc318:
    // 0x1cc318: 0x320f809  jalr        $t9
label_1cc31c:
    if (ctx->pc == 0x1CC31Cu) {
        ctx->pc = 0x1CC31Cu;
            // 0x1cc31c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CC320u;
        goto label_1cc320;
    }
    ctx->pc = 0x1CC318u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CC320u);
        ctx->pc = 0x1CC31Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC318u;
            // 0x1cc31c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CC320u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CC320u; }
            if (ctx->pc != 0x1CC320u) { return; }
        }
        }
    }
    ctx->pc = 0x1CC320u;
label_1cc320:
    // 0x1cc320: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1cc320u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1cc324:
    // 0x1cc324: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x1cc324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_1cc328:
    // 0x1cc328: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1cc328u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1cc32c:
    // 0x1cc32c: 0xae20035c  sw          $zero, 0x35C($s1)
    ctx->pc = 0x1cc32cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 860), GPR_U32(ctx, 0));
label_1cc330:
    // 0x1cc330: 0xae200364  sw          $zero, 0x364($s1)
    ctx->pc = 0x1cc330u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 868), GPR_U32(ctx, 0));
label_1cc334:
    // 0x1cc334: 0xae200360  sw          $zero, 0x360($s1)
    ctx->pc = 0x1cc334u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 864), GPR_U32(ctx, 0));
label_1cc338:
    // 0x1cc338: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1cc338u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cc33c:
    // 0x1cc33c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1cc33cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1cc340:
    // 0x1cc340: 0x320f809  jalr        $t9
label_1cc344:
    if (ctx->pc == 0x1CC344u) {
        ctx->pc = 0x1CC344u;
            // 0x1cc344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CC348u;
        goto label_1cc348;
    }
    ctx->pc = 0x1CC340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CC348u);
        ctx->pc = 0x1CC344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC340u;
            // 0x1cc344: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CC348u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CC348u; }
            if (ctx->pc != 0x1CC348u) { return; }
        }
        }
    }
    ctx->pc = 0x1CC348u;
label_1cc348:
    // 0x1cc348: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1cc348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1cc34c:
    // 0x1cc34c: 0x262406bc  addiu       $a0, $s1, 0x6BC
    ctx->pc = 0x1cc34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1724));
label_1cc350:
    // 0x1cc350: 0x244256f0  addiu       $v0, $v0, 0x56F0
    ctx->pc = 0x1cc350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22256));
label_1cc354:
    // 0x1cc354: 0xc061b34  jal         func_186CD0
label_1cc358:
    if (ctx->pc == 0x1CC358u) {
        ctx->pc = 0x1CC358u;
            // 0x1cc358: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1CC35Cu;
        goto label_1cc35c;
    }
    ctx->pc = 0x1CC354u;
    SET_GPR_U32(ctx, 31, 0x1CC35Cu);
    ctx->pc = 0x1CC358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC354u;
            // 0x1cc358: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186CD0u;
    if (runtime->hasFunction(0x186CD0u)) {
        auto targetFn = runtime->lookupFunction(0x186CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC35Cu; }
        if (ctx->pc != 0x1CC35Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10CRunScriptFv_0x186cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC35Cu; }
        if (ctx->pc != 0x1CC35Cu) { return; }
    }
    ctx->pc = 0x1CC35Cu;
label_1cc35c:
    // 0x1cc35c: 0x26240910  addiu       $a0, $s1, 0x910
    ctx->pc = 0x1cc35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2320));
label_1cc360:
    // 0x1cc360: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc364:
    // 0x1cc364: 0xc049c86  jal         func_127218
label_1cc368:
    if (ctx->pc == 0x1CC368u) {
        ctx->pc = 0x1CC368u;
            // 0x1cc368: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->pc = 0x1CC36Cu;
        goto label_1cc36c;
    }
    ctx->pc = 0x1CC364u;
    SET_GPR_U32(ctx, 31, 0x1CC36Cu);
    ctx->pc = 0x1CC368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC364u;
            // 0x1cc368: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC36Cu; }
        if (ctx->pc != 0x1CC36Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC36Cu; }
        if (ctx->pc != 0x1CC36Cu) { return; }
    }
    ctx->pc = 0x1CC36Cu;
label_1cc36c:
    // 0x1cc36c: 0x0  nop
    ctx->pc = 0x1cc36cu;
    // NOP
label_1cc370:
    // 0x1cc370: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cc370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cc374:
    // 0x1cc374: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1cc374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cc378:
    // 0x1cc378: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cc378u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cc37c:
    // 0x1cc37c: 0xc0a0e8c  jal         func_283A30
label_1cc380:
    if (ctx->pc == 0x1CC380u) {
        ctx->pc = 0x1CC380u;
            // 0x1cc380: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CC384u;
        goto label_1cc384;
    }
    ctx->pc = 0x1CC37Cu;
    SET_GPR_U32(ctx, 31, 0x1CC384u);
    ctx->pc = 0x1CC380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC37Cu;
            // 0x1cc380: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283A30u;
    if (runtime->hasFunction(0x283A30u)) {
        auto targetFn = runtime->lookupFunction(0x283A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC384u; }
        if (ctx->pc != 0x1CC384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignChara__6CSceneFiP11CCharacter2Pc_0x283a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC384u; }
        if (ctx->pc != 0x1CC384u) { return; }
    }
    ctx->pc = 0x1CC384u;
label_1cc384:
    // 0x1cc384: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cc384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cc388:
    // 0x1cc388: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cc388u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc38c:
    // 0x1cc38c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cc38cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cc390:
    // 0x1cc390: 0xc0a11fc  jal         func_2847F0
label_1cc394:
    if (ctx->pc == 0x1CC394u) {
        ctx->pc = 0x1CC394u;
            // 0x1cc394: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CC398u;
        goto label_1cc398;
    }
    ctx->pc = 0x1CC390u;
    SET_GPR_U32(ctx, 31, 0x1CC398u);
    ctx->pc = 0x1CC394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC390u;
            // 0x1cc394: 0xa0382d  daddu       $a3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2847F0u;
    if (runtime->hasFunction(0x2847F0u)) {
        auto targetFn = runtime->lookupFunction(0x2847F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC398u; }
        if (ctx->pc != 0x1CC398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetType__6CSceneFiii_0x2847f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC398u; }
        if (ctx->pc != 0x1CC398u) { return; }
    }
    ctx->pc = 0x1CC398u;
label_1cc398:
    // 0x1cc398: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cc398u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1cc39c:
    // 0x1cc39c: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x1cc39cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
label_1cc3a0:
    // 0x1cc3a0: 0x1440ffc2  bnez        $v0, . + 4 + (-0x3E << 2)
label_1cc3a4:
    if (ctx->pc == 0x1CC3A4u) {
        ctx->pc = 0x1CC3A8u;
        goto label_1cc3a8;
    }
    ctx->pc = 0x1CC3A0u;
    {
        const bool branch_taken_0x1cc3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc3a0) {
            ctx->pc = 0x1CC2ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cc2ac;
        }
    }
    ctx->pc = 0x1CC3A8u;
label_1cc3a8:
    // 0x1cc3a8: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cc3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cc3ac:
    // 0x1cc3ac: 0xc0a0ed8  jal         func_283B60
label_1cc3b0:
    if (ctx->pc == 0x1CC3B0u) {
        ctx->pc = 0x1CC3B0u;
            // 0x1cc3b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CC3B4u;
        goto label_1cc3b4;
    }
    ctx->pc = 0x1CC3ACu;
    SET_GPR_U32(ctx, 31, 0x1CC3B4u);
    ctx->pc = 0x1CC3B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC3ACu;
            // 0x1cc3b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC3B4u; }
        if (ctx->pc != 0x1CC3B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC3B4u; }
        if (ctx->pc != 0x1CC3B4u) { return; }
    }
    ctx->pc = 0x1CC3B4u;
label_1cc3b4:
    // 0x1cc3b4: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cc3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cc3b8:
    // 0x1cc3b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cc3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc3bc:
    // 0x1cc3bc: 0xaf828dd8  sw          $v0, -0x7228($gp)
    ctx->pc = 0x1cc3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938072), GPR_U32(ctx, 2));
label_1cc3c0:
    // 0x1cc3c0: 0xc0a11b4  jal         func_2846D0
label_1cc3c4:
    if (ctx->pc == 0x1CC3C4u) {
        ctx->pc = 0x1CC3C4u;
            // 0x1cc3c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CC3C8u;
        goto label_1cc3c8;
    }
    ctx->pc = 0x1CC3C0u;
    SET_GPR_U32(ctx, 31, 0x1CC3C8u);
    ctx->pc = 0x1CC3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC3C0u;
            // 0x1cc3c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2846D0u;
    if (runtime->hasFunction(0x2846D0u)) {
        auto targetFn = runtime->lookupFunction(0x2846D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC3C8u; }
        if (ctx->pc != 0x1CC3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActive__6CSceneFii_0x2846d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC3C8u; }
        if (ctx->pc != 0x1CC3C8u) { return; }
    }
    ctx->pc = 0x1CC3C8u;
label_1cc3c8:
    // 0x1cc3c8: 0x8f828dac  lw          $v0, -0x7254($gp)
    ctx->pc = 0x1cc3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cc3cc:
    // 0x1cc3cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cc3ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc3d0:
    // 0x1cc3d0: 0xac402e50  sw          $zero, 0x2E50($v0)
    ctx->pc = 0x1cc3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11856), GPR_U32(ctx, 0));
label_1cc3d4:
    // 0x1cc3d4: 0x8f848d70  lw          $a0, -0x7290($gp)
    ctx->pc = 0x1cc3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
label_1cc3d8:
    // 0x1cc3d8: 0xc04e748  jal         func_139D20
label_1cc3dc:
    if (ctx->pc == 0x1CC3DCu) {
        ctx->pc = 0x1CC3DCu;
            // 0x1cc3dc: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->pc = 0x1CC3E0u;
        goto label_1cc3e0;
    }
    ctx->pc = 0x1CC3D8u;
    SET_GPR_U32(ctx, 31, 0x1CC3E0u);
    ctx->pc = 0x1CC3DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC3D8u;
            // 0x1cc3dc: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC3E0u; }
        if (ctx->pc != 0x1CC3E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC3E0u; }
        if (ctx->pc != 0x1CC3E0u) { return; }
    }
    ctx->pc = 0x1CC3E0u;
label_1cc3e0:
    // 0x1cc3e0: 0x24040660  addiu       $a0, $zero, 0x660
    ctx->pc = 0x1cc3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1632));
label_1cc3e4:
    // 0x1cc3e4: 0xc04e638  jal         func_1398E0
label_1cc3e8:
    if (ctx->pc == 0x1CC3E8u) {
        ctx->pc = 0x1CC3E8u;
            // 0x1cc3e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CC3ECu;
        goto label_1cc3ec;
    }
    ctx->pc = 0x1CC3E4u;
    SET_GPR_U32(ctx, 31, 0x1CC3ECu);
    ctx->pc = 0x1CC3E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC3E4u;
            // 0x1cc3e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC3ECu; }
        if (ctx->pc != 0x1CC3ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC3ECu; }
        if (ctx->pc != 0x1CC3ECu) { return; }
    }
    ctx->pc = 0x1CC3ECu;
label_1cc3ec:
    // 0x1cc3ec: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_1cc3f0:
    if (ctx->pc == 0x1CC3F0u) {
        ctx->pc = 0x1CC3F0u;
            // 0x1cc3f0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CC3F4u;
        goto label_1cc3f4;
    }
    ctx->pc = 0x1CC3ECu;
    {
        const bool branch_taken_0x1cc3ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CC3F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC3ECu;
            // 0x1cc3f0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc3ec) {
            ctx->pc = 0x1CC470u;
            goto label_1cc470;
        }
    }
    ctx->pc = 0x1CC3F4u;
label_1cc3f4:
    // 0x1cc3f4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1cc3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1cc3f8:
    // 0x1cc3f8: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x1cc3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_1cc3fc:
    // 0x1cc3fc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1cc3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1cc400:
    // 0x1cc400: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1cc400u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cc404:
    // 0x1cc404: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1cc404u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1cc408:
    // 0x1cc408: 0x320f809  jalr        $t9
label_1cc40c:
    if (ctx->pc == 0x1CC40Cu) {
        ctx->pc = 0x1CC40Cu;
            // 0x1cc40c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CC410u;
        goto label_1cc410;
    }
    ctx->pc = 0x1CC408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CC410u);
        ctx->pc = 0x1CC40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC408u;
            // 0x1cc40c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CC410u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CC410u; }
            if (ctx->pc != 0x1CC410u) { return; }
        }
        }
    }
    ctx->pc = 0x1CC410u;
label_1cc410:
    // 0x1cc410: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1cc410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1cc414:
    // 0x1cc414: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x1cc414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_1cc418:
    // 0x1cc418: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1cc418u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1cc41c:
    // 0x1cc41c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1cc41cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cc420:
    // 0x1cc420: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1cc420u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1cc424:
    // 0x1cc424: 0x320f809  jalr        $t9
label_1cc428:
    if (ctx->pc == 0x1CC428u) {
        ctx->pc = 0x1CC428u;
            // 0x1cc428: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CC42Cu;
        goto label_1cc42c;
    }
    ctx->pc = 0x1CC424u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CC42Cu);
        ctx->pc = 0x1CC428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC424u;
            // 0x1cc428: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CC42Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CC42Cu; }
            if (ctx->pc != 0x1CC42Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1CC42Cu;
label_1cc42c:
    // 0x1cc42c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1cc42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1cc430:
    // 0x1cc430: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x1cc430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_1cc434:
    // 0x1cc434: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1cc434u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1cc438:
    // 0x1cc438: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1cc438u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cc43c:
    // 0x1cc43c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1cc43cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1cc440:
    // 0x1cc440: 0x320f809  jalr        $t9
label_1cc444:
    if (ctx->pc == 0x1CC444u) {
        ctx->pc = 0x1CC444u;
            // 0x1cc444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CC448u;
        goto label_1cc448;
    }
    ctx->pc = 0x1CC440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CC448u);
        ctx->pc = 0x1CC444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC440u;
            // 0x1cc444: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CC448u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CC448u; }
            if (ctx->pc != 0x1CC448u) { return; }
        }
        }
    }
    ctx->pc = 0x1CC448u;
label_1cc448:
    // 0x1cc448: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1cc448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1cc44c:
    // 0x1cc44c: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x1cc44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_1cc450:
    // 0x1cc450: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1cc450u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1cc454:
    // 0x1cc454: 0xae20035c  sw          $zero, 0x35C($s1)
    ctx->pc = 0x1cc454u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 860), GPR_U32(ctx, 0));
label_1cc458:
    // 0x1cc458: 0xae200364  sw          $zero, 0x364($s1)
    ctx->pc = 0x1cc458u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 868), GPR_U32(ctx, 0));
label_1cc45c:
    // 0x1cc45c: 0xae200360  sw          $zero, 0x360($s1)
    ctx->pc = 0x1cc45cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 864), GPR_U32(ctx, 0));
label_1cc460:
    // 0x1cc460: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1cc460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cc464:
    // 0x1cc464: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1cc464u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1cc468:
    // 0x1cc468: 0x320f809  jalr        $t9
label_1cc46c:
    if (ctx->pc == 0x1CC46Cu) {
        ctx->pc = 0x1CC46Cu;
            // 0x1cc46c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CC470u;
        goto label_1cc470;
    }
    ctx->pc = 0x1CC468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CC470u);
        ctx->pc = 0x1CC46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC468u;
            // 0x1cc46c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CC470u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CC470u; }
            if (ctx->pc != 0x1CC470u) { return; }
        }
        }
    }
    ctx->pc = 0x1CC470u;
label_1cc470:
    // 0x1cc470: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1cc470u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cc474:
    // 0x1cc474: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1cc474u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1cc478:
    // 0x1cc478: 0x320f809  jalr        $t9
label_1cc47c:
    if (ctx->pc == 0x1CC47Cu) {
        ctx->pc = 0x1CC47Cu;
            // 0x1cc47c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CC480u;
        goto label_1cc480;
    }
    ctx->pc = 0x1CC478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CC480u);
        ctx->pc = 0x1CC47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC478u;
            // 0x1cc47c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CC480u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CC480u; }
            if (ctx->pc != 0x1CC480u) { return; }
        }
        }
    }
    ctx->pc = 0x1CC480u;
label_1cc480:
    // 0x1cc480: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cc480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cc484:
    // 0x1cc484: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1cc484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cc488:
    // 0x1cc488: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x1cc488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_1cc48c:
    // 0x1cc48c: 0xc0a0e8c  jal         func_283A30
label_1cc490:
    if (ctx->pc == 0x1CC490u) {
        ctx->pc = 0x1CC490u;
            // 0x1cc490: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CC494u;
        goto label_1cc494;
    }
    ctx->pc = 0x1CC48Cu;
    SET_GPR_U32(ctx, 31, 0x1CC494u);
    ctx->pc = 0x1CC490u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC48Cu;
            // 0x1cc490: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283A30u;
    if (runtime->hasFunction(0x283A30u)) {
        auto targetFn = runtime->lookupFunction(0x283A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC494u; }
        if (ctx->pc != 0x1CC494u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignChara__6CSceneFiP11CCharacter2Pc_0x283a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC494u; }
        if (ctx->pc != 0x1CC494u) { return; }
    }
    ctx->pc = 0x1CC494u;
label_1cc494:
    // 0x1cc494: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cc494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cc498:
    // 0x1cc498: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x1cc498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_1cc49c:
    // 0x1cc49c: 0xc0a11c0  jal         func_284700
label_1cc4a0:
    if (ctx->pc == 0x1CC4A0u) {
        ctx->pc = 0x1CC4A0u;
            // 0x1cc4a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1CC4A4u;
        goto label_1cc4a4;
    }
    ctx->pc = 0x1CC49Cu;
    SET_GPR_U32(ctx, 31, 0x1CC4A4u);
    ctx->pc = 0x1CC4A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC49Cu;
            // 0x1cc4a0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284700u;
    if (runtime->hasFunction(0x284700u)) {
        auto targetFn = runtime->lookupFunction(0x284700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC4A4u; }
        if (ctx->pc != 0x1CC4A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetActive__6CSceneFii_0x284700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC4A4u; }
        if (ctx->pc != 0x1CC4A4u) { return; }
    }
    ctx->pc = 0x1CC4A4u;
label_1cc4a4:
    // 0x1cc4a4: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cc4a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cc4a8:
    // 0x1cc4a8: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x1cc4a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_1cc4ac:
    // 0x1cc4ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cc4acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc4b0:
    // 0x1cc4b0: 0xc0a11fc  jal         func_2847F0
label_1cc4b4:
    if (ctx->pc == 0x1CC4B4u) {
        ctx->pc = 0x1CC4B4u;
            // 0x1cc4b4: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1CC4B8u;
        goto label_1cc4b8;
    }
    ctx->pc = 0x1CC4B0u;
    SET_GPR_U32(ctx, 31, 0x1CC4B8u);
    ctx->pc = 0x1CC4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC4B0u;
            // 0x1cc4b4: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2847F0u;
    if (runtime->hasFunction(0x2847F0u)) {
        auto targetFn = runtime->lookupFunction(0x2847F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC4B8u; }
        if (ctx->pc != 0x1CC4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetType__6CSceneFiii_0x2847f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC4B8u; }
        if (ctx->pc != 0x1CC4B8u) { return; }
    }
    ctx->pc = 0x1CC4B8u;
label_1cc4b8:
    // 0x1cc4b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cc4b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1cc4bc:
    // 0x1cc4bc: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x1cc4bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
label_1cc4c0:
    // 0x1cc4c0: 0x1440ffc4  bnez        $v0, . + 4 + (-0x3C << 2)
label_1cc4c4:
    if (ctx->pc == 0x1CC4C4u) {
        ctx->pc = 0x1CC4C8u;
        goto label_1cc4c8;
    }
    ctx->pc = 0x1CC4C0u;
    {
        const bool branch_taken_0x1cc4c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cc4c0) {
            ctx->pc = 0x1CC3D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cc3d4;
        }
    }
    ctx->pc = 0x1CC4C8u;
label_1cc4c8:
    // 0x1cc4c8: 0x8f848d70  lw          $a0, -0x7290($gp)
    ctx->pc = 0x1cc4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
label_1cc4cc:
    // 0x1cc4cc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1cc4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1cc4d0:
    // 0x1cc4d0: 0x3446ef00  ori         $a2, $v0, 0xEF00
    ctx->pc = 0x1cc4d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61184);
label_1cc4d4:
    // 0x1cc4d4: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x1cc4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1cc4d8:
    // 0x1cc4d8: 0x8c830024  lw          $v1, 0x24($a0)
    ctx->pc = 0x1cc4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 36)));
label_1cc4dc:
    // 0x1cc4dc: 0x8c820020  lw          $v0, 0x20($a0)
    ctx->pc = 0x1cc4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_1cc4e0:
    // 0x1cc4e0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1cc4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1cc4e4:
    // 0x1cc4e4: 0xc049c86  jal         func_127218
label_1cc4e8:
    if (ctx->pc == 0x1CC4E8u) {
        ctx->pc = 0x1CC4E8u;
            // 0x1cc4e8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1CC4ECu;
        goto label_1cc4ec;
    }
    ctx->pc = 0x1CC4E4u;
    SET_GPR_U32(ctx, 31, 0x1CC4ECu);
    ctx->pc = 0x1CC4E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC4E4u;
            // 0x1cc4e8: 0x432021  addu        $a0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC4ECu; }
        if (ctx->pc != 0x1CC4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC4ECu; }
        if (ctx->pc != 0x1CC4ECu) { return; }
    }
    ctx->pc = 0x1CC4ECu;
label_1cc4ec:
    // 0x1cc4ec: 0x8f848d70  lw          $a0, -0x7290($gp)
    ctx->pc = 0x1cc4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
label_1cc4f0:
    // 0x1cc4f0: 0xc04e748  jal         func_139D20
label_1cc4f4:
    if (ctx->pc == 0x1CC4F4u) {
        ctx->pc = 0x1CC4F4u;
            // 0x1cc4f4: 0x24051ef2  addiu       $a1, $zero, 0x1EF2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7922));
        ctx->pc = 0x1CC4F8u;
        goto label_1cc4f8;
    }
    ctx->pc = 0x1CC4F0u;
    SET_GPR_U32(ctx, 31, 0x1CC4F8u);
    ctx->pc = 0x1CC4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC4F0u;
            // 0x1cc4f4: 0x24051ef2  addiu       $a1, $zero, 0x1EF2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7922));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC4F8u; }
        if (ctx->pc != 0x1CC4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC4F8u; }
        if (ctx->pc != 0x1CC4F8u) { return; }
    }
    ctx->pc = 0x1CC4F8u;
label_1cc4f8:
    // 0x1cc4f8: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1cc4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_1cc4fc:
    // 0x1cc4fc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cc4fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cc500:
    // 0x1cc500: 0xc04e63c  jal         func_1398F0
label_1cc504:
    if (ctx->pc == 0x1CC504u) {
        ctx->pc = 0x1CC504u;
            // 0x1cc504: 0x3464ef10  ori         $a0, $v1, 0xEF10 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61200);
        ctx->pc = 0x1CC508u;
        goto label_1cc508;
    }
    ctx->pc = 0x1CC500u;
    SET_GPR_U32(ctx, 31, 0x1CC508u);
    ctx->pc = 0x1CC504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC500u;
            // 0x1cc504: 0x3464ef10  ori         $a0, $v1, 0xEF10 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)61200);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC508u; }
        if (ctx->pc != 0x1CC508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC508u; }
        if (ctx->pc != 0x1CC508u) { return; }
    }
    ctx->pc = 0x1CC508u;
label_1cc508:
    // 0x1cc508: 0x3c05001d  lui         $a1, 0x1D
    ctx->pc = 0x1cc508u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)29 << 16));
label_1cc50c:
    // 0x1cc50c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cc50cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cc510:
    // 0x1cc510: 0x24a5e220  addiu       $a1, $a1, -0x1DE0
    ctx->pc = 0x1cc510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294959648));
label_1cc514:
    // 0x1cc514: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cc514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc518:
    // 0x1cc518: 0x240714a0  addiu       $a3, $zero, 0x14A0
    ctx->pc = 0x1cc518u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5280));
label_1cc51c:
    // 0x1cc51c: 0xc0400bc  jal         func_1002F0
label_1cc520:
    if (ctx->pc == 0x1CC520u) {
        ctx->pc = 0x1CC520u;
            // 0x1cc520: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x1CC524u;
        goto label_1cc524;
    }
    ctx->pc = 0x1CC51Cu;
    SET_GPR_U32(ctx, 31, 0x1CC524u);
    ctx->pc = 0x1CC520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC51Cu;
            // 0x1cc520: 0x24080018  addiu       $t0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC524u; }
        if (ctx->pc != 0x1CC524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC524u; }
        if (ctx->pc != 0x1CC524u) { return; }
    }
    ctx->pc = 0x1CC524u;
label_1cc524:
    // 0x1cc524: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cc524u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cc528:
    // 0x1cc528: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1cc528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc52c:
    // 0x1cc52c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1cc52cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc530:
    // 0x1cc530: 0x2129821  addu        $s3, $s0, $s2
    ctx->pc = 0x1cc530u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1cc534:
    // 0x1cc534: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x1cc534u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1cc538:
    // 0x1cc538: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1cc538u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1cc53c:
    // 0x1cc53c: 0x320f809  jalr        $t9
label_1cc540:
    if (ctx->pc == 0x1CC540u) {
        ctx->pc = 0x1CC540u;
            // 0x1cc540: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CC544u;
        goto label_1cc544;
    }
    ctx->pc = 0x1CC53Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CC544u);
        ctx->pc = 0x1CC540u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC53Cu;
            // 0x1cc540: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CC544u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CC544u; }
            if (ctx->pc != 0x1CC544u) { return; }
        }
        }
    }
    ctx->pc = 0x1CC544u;
label_1cc544:
    // 0x1cc544: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cc544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cc548:
    // 0x1cc548: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1cc548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1cc54c:
    // 0x1cc54c: 0x26250018  addiu       $a1, $s1, 0x18
    ctx->pc = 0x1cc54cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_1cc550:
    // 0x1cc550: 0xc0a0e8c  jal         func_283A30
label_1cc554:
    if (ctx->pc == 0x1CC554u) {
        ctx->pc = 0x1CC554u;
            // 0x1cc554: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CC558u;
        goto label_1cc558;
    }
    ctx->pc = 0x1CC550u;
    SET_GPR_U32(ctx, 31, 0x1CC558u);
    ctx->pc = 0x1CC554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC550u;
            // 0x1cc554: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283A30u;
    if (runtime->hasFunction(0x283A30u)) {
        auto targetFn = runtime->lookupFunction(0x283A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC558u; }
        if (ctx->pc != 0x1CC558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignChara__6CSceneFiP11CCharacter2Pc_0x283a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC558u; }
        if (ctx->pc != 0x1CC558u) { return; }
    }
    ctx->pc = 0x1CC558u;
label_1cc558:
    // 0x1cc558: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cc558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cc55c:
    // 0x1cc55c: 0x26260018  addiu       $a2, $s1, 0x18
    ctx->pc = 0x1cc55cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_1cc560:
    // 0x1cc560: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cc560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc564:
    // 0x1cc564: 0xc0a11fc  jal         func_2847F0
label_1cc568:
    if (ctx->pc == 0x1CC568u) {
        ctx->pc = 0x1CC568u;
            // 0x1cc568: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1CC56Cu;
        goto label_1cc56c;
    }
    ctx->pc = 0x1CC564u;
    SET_GPR_U32(ctx, 31, 0x1CC56Cu);
    ctx->pc = 0x1CC568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC564u;
            // 0x1cc568: 0x24070003  addiu       $a3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2847F0u;
    if (runtime->hasFunction(0x2847F0u)) {
        auto targetFn = runtime->lookupFunction(0x2847F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC56Cu; }
        if (ctx->pc != 0x1CC56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetType__6CSceneFiii_0x2847f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC56Cu; }
        if (ctx->pc != 0x1CC56Cu) { return; }
    }
    ctx->pc = 0x1CC56Cu;
label_1cc56c:
    // 0x1cc56c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1cc56cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1cc570:
    // 0x1cc570: 0x2a220018  slti        $v0, $s1, 0x18
    ctx->pc = 0x1cc570u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)24) ? 1 : 0);
label_1cc574:
    // 0x1cc574: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_1cc578:
    if (ctx->pc == 0x1CC578u) {
        ctx->pc = 0x1CC578u;
            // 0x1cc578: 0x265214a0  addiu       $s2, $s2, 0x14A0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 5280));
        ctx->pc = 0x1CC57Cu;
        goto label_1cc57c;
    }
    ctx->pc = 0x1CC574u;
    {
        const bool branch_taken_0x1cc574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CC578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC574u;
            // 0x1cc578: 0x265214a0  addiu       $s2, $s2, 0x14A0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 5280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc574) {
            ctx->pc = 0x1CC530u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cc530;
        }
    }
    ctx->pc = 0x1CC57Cu;
label_1cc57c:
    // 0x1cc57c: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1cc57cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1cc580:
    // 0x1cc580: 0x8fa50080  lw          $a1, 0x80($sp)
    ctx->pc = 0x1cc580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1cc584:
    // 0x1cc584: 0x8f868d70  lw          $a2, -0x7290($gp)
    ctx->pc = 0x1cc584u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
label_1cc588:
    // 0x1cc588: 0xc0be52c  jal         func_2F94B0
label_1cc58c:
    if (ctx->pc == 0x1CC58Cu) {
        ctx->pc = 0x1CC58Cu;
            // 0x1cc58c: 0x24440014  addiu       $a0, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->pc = 0x1CC590u;
        goto label_1cc590;
    }
    ctx->pc = 0x1CC588u;
    SET_GPR_U32(ctx, 31, 0x1CC590u);
    ctx->pc = 0x1CC58Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC588u;
            // 0x1cc58c: 0x24440014  addiu       $a0, $v0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F94B0u;
    if (runtime->hasFunction(0x2F94B0u)) {
        auto targetFn = runtime->lookupFunction(0x2F94B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC590u; }
        if (ctx->pc != 0x1CC590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadDataTable__16CDngFloorManagerFiP9mgCMemory_0x2f94b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC590u; }
        if (ctx->pc != 0x1CC590u) { return; }
    }
    ctx->pc = 0x1CC590u;
label_1cc590:
    // 0x1cc590: 0xc04e780  jal         func_139E00
label_1cc594:
    if (ctx->pc == 0x1CC594u) {
        ctx->pc = 0x1CC594u;
            // 0x1cc594: 0x8f848d70  lw          $a0, -0x7290($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
        ctx->pc = 0x1CC598u;
        goto label_1cc598;
    }
    ctx->pc = 0x1CC590u;
    SET_GPR_U32(ctx, 31, 0x1CC598u);
    ctx->pc = 0x1CC594u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC590u;
            // 0x1cc594: 0x8f848d70  lw          $a0, -0x7290($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC598u; }
        if (ctx->pc != 0x1CC598u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC598u; }
        if (ctx->pc != 0x1CC598u) { return; }
    }
    ctx->pc = 0x1CC598u;
label_1cc598:
    // 0x1cc598: 0x8f828d70  lw          $v0, -0x7290($gp)
    ctx->pc = 0x1cc598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
label_1cc59c:
    // 0x1cc59c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1cc59cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1cc5a0:
    // 0x1cc5a0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cc5a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc5a4:
    // 0x1cc5a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cc5a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc5a8:
    // 0x1cc5a8: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1cc5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1cc5ac:
    // 0x1cc5ac: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x1cc5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_1cc5b0:
    // 0x1cc5b0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1cc5b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1cc5b4:
    // 0x1cc5b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cc5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cc5b8:
    // 0x1cc5b8: 0xc08d1a4  jal         func_234690
label_1cc5bc:
    if (ctx->pc == 0x1CC5BCu) {
        ctx->pc = 0x1CC5BCu;
            // 0x1cc5bc: 0xac22d610  sw          $v0, -0x29F0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956560), GPR_U32(ctx, 2));
        ctx->pc = 0x1CC5C0u;
        goto label_1cc5c0;
    }
    ctx->pc = 0x1CC5B8u;
    SET_GPR_U32(ctx, 31, 0x1CC5C0u);
    ctx->pc = 0x1CC5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC5B8u;
            // 0x1cc5bc: 0xac22d610  sw          $v0, -0x29F0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956560), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234690u;
    if (runtime->hasFunction(0x234690u)) {
        auto targetFn = runtime->lookupFunction(0x234690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC5C0u; }
        if (ctx->pc != 0x1CC5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuCfgFileName__Fii_0x234690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC5C0u; }
        if (ctx->pc != 0x1CC5C0u) { return; }
    }
    ctx->pc = 0x1CC5C0u;
label_1cc5c0:
    // 0x1cc5c0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1cc5c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1cc5c4:
    // 0x1cc5c4: 0x3c0601ed  lui         $a2, 0x1ED
    ctx->pc = 0x1cc5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)493 << 16));
label_1cc5c8:
    // 0x1cc5c8: 0x8c25d610  lw          $a1, -0x29F0($at)
    ctx->pc = 0x1cc5c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956560)));
label_1cc5cc:
    // 0x1cc5cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cc5ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cc5d0:
    // 0x1cc5d0: 0xc0524c8  jal         func_149320
label_1cc5d4:
    if (ctx->pc == 0x1CC5D4u) {
        ctx->pc = 0x1CC5D4u;
            // 0x1cc5d4: 0x24c6d614  addiu       $a2, $a2, -0x29EC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956564));
        ctx->pc = 0x1CC5D8u;
        goto label_1cc5d8;
    }
    ctx->pc = 0x1CC5D0u;
    SET_GPR_U32(ctx, 31, 0x1CC5D8u);
    ctx->pc = 0x1CC5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC5D0u;
            // 0x1cc5d4: 0x24c6d614  addiu       $a2, $a2, -0x29EC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956564));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC5D8u; }
        if (ctx->pc != 0x1CC5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC5D8u; }
        if (ctx->pc != 0x1CC5D8u) { return; }
    }
    ctx->pc = 0x1CC5D8u;
label_1cc5d8:
    // 0x1cc5d8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1cc5d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1cc5dc:
    // 0x1cc5dc: 0x8c23d614  lw          $v1, -0x29EC($at)
    ctx->pc = 0x1cc5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956564)));
label_1cc5e0:
    // 0x1cc5e0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1cc5e4:
    if (ctx->pc == 0x1CC5E4u) {
        ctx->pc = 0x1CC5E4u;
            // 0x1cc5e4: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->pc = 0x1CC5E8u;
        goto label_1cc5e8;
    }
    ctx->pc = 0x1CC5E0u;
    {
        const bool branch_taken_0x1cc5e0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1CC5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC5E0u;
            // 0x1cc5e4: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc5e0) {
            ctx->pc = 0x1CC5F0u;
            goto label_1cc5f0;
        }
    }
    ctx->pc = 0x1CC5E8u;
label_1cc5e8:
    // 0x1cc5e8: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1cc5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_1cc5ec:
    // 0x1cc5ec: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1cc5ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1cc5f0:
    // 0x1cc5f0: 0x8f848d70  lw          $a0, -0x7290($gp)
    ctx->pc = 0x1cc5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
label_1cc5f4:
    // 0x1cc5f4: 0xc04e748  jal         func_139D20
label_1cc5f8:
    if (ctx->pc == 0x1CC5F8u) {
        ctx->pc = 0x1CC5F8u;
            // 0x1cc5f8: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x1CC5FCu;
        goto label_1cc5fc;
    }
    ctx->pc = 0x1CC5F4u;
    SET_GPR_U32(ctx, 31, 0x1CC5FCu);
    ctx->pc = 0x1CC5F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC5F4u;
            // 0x1cc5f8: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC5FCu; }
        if (ctx->pc != 0x1CC5FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC5FCu; }
        if (ctx->pc != 0x1CC5FCu) { return; }
    }
    ctx->pc = 0x1CC5FCu;
label_1cc5fc:
    // 0x1cc5fc: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x1cc5fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_1cc600:
    // 0x1cc600: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1cc600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1cc604:
    // 0x1cc604: 0xac23d624  sw          $v1, -0x29DC($at)
    ctx->pc = 0x1cc604u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956580), GPR_U32(ctx, 3));
label_1cc608:
    // 0x1cc608: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x1cc608u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
label_1cc60c:
    // 0x1cc60c: 0x8f898da0  lw          $t1, -0x7260($gp)
    ctx->pc = 0x1cc60cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938016)));
label_1cc610:
    // 0x1cc610: 0x2402006c  addiu       $v0, $zero, 0x6C
    ctx->pc = 0x1cc610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_1cc614:
    // 0x1cc614: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1cc614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1cc618:
    // 0x1cc618: 0x24080010  addiu       $t0, $zero, 0x10
    ctx->pc = 0x1cc618u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1cc61c:
    // 0x1cc61c: 0xac22d61c  sw          $v0, -0x29E4($at)
    ctx->pc = 0x1cc61cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956572), GPR_U32(ctx, 2));
label_1cc620:
    // 0x1cc620: 0x24a5f410  addiu       $a1, $a1, -0xBF0
    ctx->pc = 0x1cc620u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964240));
label_1cc624:
    // 0x1cc624: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x1cc624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_1cc628:
    // 0x1cc628: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1cc628u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1cc62c:
    // 0x1cc62c: 0x34474d96  ori         $a3, $v0, 0x4D96
    ctx->pc = 0x1cc62cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)19862);
label_1cc630:
    // 0x1cc630: 0xac28d620  sw          $t0, -0x29E0($at)
    ctx->pc = 0x1cc630u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956576), GPR_U32(ctx, 8));
label_1cc634:
    // 0x1cc634: 0x8f868dac  lw          $a2, -0x7254($gp)
    ctx->pc = 0x1cc634u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cc638:
    // 0x1cc638: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1cc638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1cc63c:
    // 0x1cc63c: 0x1273821  addu        $a3, $t1, $a3
    ctx->pc = 0x1cc63cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_1cc640:
    // 0x1cc640: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1cc640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1cc644:
    // 0x1cc644: 0x84e70000  lh          $a3, 0x0($a3)
    ctx->pc = 0x1cc644u;
    SET_GPR_S32(ctx, 7, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 0)));
label_1cc648:
    // 0x1cc648: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cc648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cc64c:
    // 0x1cc64c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cc64cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cc650:
    // 0x1cc650: 0xac27d628  sw          $a3, -0x29D8($at)
    ctx->pc = 0x1cc650u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956584), GPR_U32(ctx, 7));
label_1cc654:
    // 0x1cc654: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1cc654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1cc658:
    // 0x1cc658: 0xac29d60c  sw          $t1, -0x29F4($at)
    ctx->pc = 0x1cc658u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956556), GPR_U32(ctx, 9));
label_1cc65c:
    // 0x1cc65c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1cc65cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1cc660:
    // 0x1cc660: 0xac26d608  sw          $a2, -0x29F8($at)
    ctx->pc = 0x1cc660u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956552), GPR_U32(ctx, 6));
label_1cc664:
    // 0x1cc664: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1cc664u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1cc668:
    // 0x1cc668: 0xac25d5f8  sw          $a1, -0x2A08($at)
    ctx->pc = 0x1cc668u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956536), GPR_U32(ctx, 5));
label_1cc66c:
    // 0x1cc66c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1cc66cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1cc670:
    // 0x1cc670: 0xa428d5fc  sh          $t0, -0x2A04($at)
    ctx->pc = 0x1cc670u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294956540), (uint16_t)GPR_U32(ctx, 8));
label_1cc674:
    // 0x1cc674: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cc674u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cc678:
    // 0x1cc678: 0xac23f6e4  sw          $v1, -0x91C($at)
    ctx->pc = 0x1cc678u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964964), GPR_U32(ctx, 3));
label_1cc67c:
    // 0x1cc67c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cc67cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cc680:
    // 0x1cc680: 0xac22f6f0  sw          $v0, -0x910($at)
    ctx->pc = 0x1cc680u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964976), GPR_U32(ctx, 2));
label_1cc684:
    // 0x1cc684: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cc684u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cc688:
    // 0x1cc688: 0xac20f6e0  sw          $zero, -0x920($at)
    ctx->pc = 0x1cc688u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964960), GPR_U32(ctx, 0));
label_1cc68c:
    // 0x1cc68c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cc68cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cc690:
    // 0x1cc690: 0xac20f6ec  sw          $zero, -0x914($at)
    ctx->pc = 0x1cc690u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964972), GPR_U32(ctx, 0));
label_1cc694:
    // 0x1cc694: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cc694u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cc698:
    // 0x1cc698: 0xac20f6f4  sw          $zero, -0x90C($at)
    ctx->pc = 0x1cc698u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964980), GPR_U32(ctx, 0));
label_1cc69c:
    // 0x1cc69c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cc69cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cc6a0:
    // 0x1cc6a0: 0xac20f6f8  sw          $zero, -0x908($at)
    ctx->pc = 0x1cc6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964984), GPR_U32(ctx, 0));
label_1cc6a4:
    // 0x1cc6a4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cc6a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cc6a8:
    // 0x1cc6a8: 0xc050e84  jal         func_143A10
label_1cc6ac:
    if (ctx->pc == 0x1CC6ACu) {
        ctx->pc = 0x1CC6ACu;
            // 0x1cc6ac: 0xac20f6e8  sw          $zero, -0x918($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294964968), GPR_U32(ctx, 0));
        ctx->pc = 0x1CC6B0u;
        goto label_1cc6b0;
    }
    ctx->pc = 0x1CC6A8u;
    SET_GPR_U32(ctx, 31, 0x1CC6B0u);
    ctx->pc = 0x1CC6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC6A8u;
            // 0x1cc6ac: 0xac20f6e8  sw          $zero, -0x918($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294964968), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143A10u;
    if (runtime->hasFunction(0x143A10u)) {
        auto targetFn = runtime->lookupFunction(0x143A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC6B0u; }
        if (ctx->pc != 0x1CC6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetAllScissorFlag__Fi_0x143a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC6B0u; }
        if (ctx->pc != 0x1CC6B0u) { return; }
    }
    ctx->pc = 0x1CC6B0u;
label_1cc6b0:
    // 0x1cc6b0: 0xc050db0  jal         func_1436C0
label_1cc6b4:
    if (ctx->pc == 0x1CC6B4u) {
        ctx->pc = 0x1CC6B8u;
        goto label_1cc6b8;
    }
    ctx->pc = 0x1CC6B0u;
    SET_GPR_U32(ctx, 31, 0x1CC6B8u);
    ctx->pc = 0x1436C0u;
    if (runtime->hasFunction(0x1436C0u)) {
        auto targetFn = runtime->lookupFunction(0x1436C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC6B8u; }
        if (ctx->pc != 0x1CC6B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInitLighting__Fv_0x1436c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC6B8u; }
        if (ctx->pc != 0x1CC6B8u) { return; }
    }
    ctx->pc = 0x1CC6B8u;
label_1cc6b8:
    // 0x1cc6b8: 0x3c024320  lui         $v0, 0x4320
    ctx->pc = 0x1cc6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17184 << 16));
label_1cc6bc:
    // 0x1cc6bc: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1cc6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1cc6c0:
    // 0x1cc6c0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cc6c0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cc6c4:
    // 0x1cc6c4: 0xaf828d9c  sw          $v0, -0x7264($gp)
    ctx->pc = 0x1cc6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938012), GPR_U32(ctx, 2));
label_1cc6c8:
    // 0x1cc6c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cc6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc6cc:
    // 0x1cc6cc: 0x24845830  addiu       $a0, $a0, 0x5830
    ctx->pc = 0x1cc6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22576));
label_1cc6d0:
    // 0x1cc6d0: 0xaf828d78  sw          $v0, -0x7288($gp)
    ctx->pc = 0x1cc6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937976), GPR_U32(ctx, 2));
label_1cc6d4:
    // 0x1cc6d4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1cc6d4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1cc6d8:
    // 0x1cc6d8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1cc6d8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_1cc6dc:
    // 0x1cc6dc: 0xc04c4f8  jal         func_1313E0
label_1cc6e0:
    if (ctx->pc == 0x1CC6E0u) {
        ctx->pc = 0x1CC6E0u;
            // 0x1cc6e0: 0xaf808d84  sw          $zero, -0x727C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937988), GPR_U32(ctx, 0));
        ctx->pc = 0x1CC6E4u;
        goto label_1cc6e4;
    }
    ctx->pc = 0x1CC6DCu;
    SET_GPR_U32(ctx, 31, 0x1CC6E4u);
    ctx->pc = 0x1CC6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC6DCu;
            // 0x1cc6e0: 0xaf808d84  sw          $zero, -0x727C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937988), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1313E0u;
    if (runtime->hasFunction(0x1313E0u)) {
        auto targetFn = runtime->lookupFunction(0x1313E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC6E4u; }
        if (ctx->pc != 0x1CC6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__9mgCCameraFfff_0x1313e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC6E4u; }
        if (ctx->pc != 0x1CC6E4u) { return; }
    }
    ctx->pc = 0x1CC6E4u;
label_1cc6e4:
    // 0x1cc6e4: 0xc78c8d9c  lwc1        $f12, -0x7264($gp)
    ctx->pc = 0x1cc6e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294938012)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1cc6e8:
    // 0x1cc6e8: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1cc6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1cc6ec:
    // 0x1cc6ec: 0xc04c680  jal         func_131A00
label_1cc6f0:
    if (ctx->pc == 0x1CC6F0u) {
        ctx->pc = 0x1CC6F0u;
            // 0x1cc6f0: 0x24845830  addiu       $a0, $a0, 0x5830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22576));
        ctx->pc = 0x1CC6F4u;
        goto label_1cc6f4;
    }
    ctx->pc = 0x1CC6ECu;
    SET_GPR_U32(ctx, 31, 0x1CC6F4u);
    ctx->pc = 0x1CC6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC6ECu;
            // 0x1cc6f0: 0x24845830  addiu       $a0, $a0, 0x5830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A00u;
    if (runtime->hasFunction(0x131A00u)) {
        auto targetFn = runtime->lookupFunction(0x131A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC6F4u; }
        if (ctx->pc != 0x1CC6F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDistance__15mgCCameraFollowFf_0x131a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC6F4u; }
        if (ctx->pc != 0x1CC6F4u) { return; }
    }
    ctx->pc = 0x1CC6F4u;
label_1cc6f4:
    // 0x1cc6f4: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1cc6f4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cc6f8:
    // 0x1cc6f8: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1cc6f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_1cc6fc:
    // 0x1cc6fc: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1cc6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1cc700:
    // 0x1cc700: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cc700u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cc704:
    // 0x1cc704: 0x24845830  addiu       $a0, $a0, 0x5830
    ctx->pc = 0x1cc704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22576));
label_1cc708:
    // 0x1cc708: 0xc04c698  jal         func_131A60
label_1cc70c:
    if (ctx->pc == 0x1CC70Cu) {
        ctx->pc = 0x1CC70Cu;
            // 0x1cc70c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1CC710u;
        goto label_1cc710;
    }
    ctx->pc = 0x1CC708u;
    SET_GPR_U32(ctx, 31, 0x1CC710u);
    ctx->pc = 0x1CC70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC708u;
            // 0x1cc70c: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A60u;
    if (runtime->hasFunction(0x131A60u)) {
        auto targetFn = runtime->lookupFunction(0x131A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC710u; }
        if (ctx->pc != 0x1CC710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFollowOffset__15mgCCameraFollowFfff_0x131a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC710u; }
        if (ctx->pc != 0x1CC710u) { return; }
    }
    ctx->pc = 0x1CC710u;
label_1cc710:
    // 0x1cc710: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x1cc710u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_1cc714:
    // 0x1cc714: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1cc714u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1cc718:
    // 0x1cc718: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cc718u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cc71c:
    // 0x1cc71c: 0xc0bb20c  jal         func_2EC830
label_1cc720:
    if (ctx->pc == 0x1CC720u) {
        ctx->pc = 0x1CC720u;
            // 0x1cc720: 0x24845830  addiu       $a0, $a0, 0x5830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22576));
        ctx->pc = 0x1CC724u;
        goto label_1cc724;
    }
    ctx->pc = 0x1CC71Cu;
    SET_GPR_U32(ctx, 31, 0x1CC724u);
    ctx->pc = 0x1CC720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC71Cu;
            // 0x1cc720: 0x24845830  addiu       $a0, $a0, 0x5830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC830u;
    if (runtime->hasFunction(0x2EC830u)) {
        auto targetFn = runtime->lookupFunction(0x2EC830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC724u; }
        if (ctx->pc != 0x1CC724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHeight__14CCameraControlFf_0x2ec830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC724u; }
        if (ctx->pc != 0x1CC724u) { return; }
    }
    ctx->pc = 0x1CC724u;
label_1cc724:
    // 0x1cc724: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x1cc724u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_1cc728:
    // 0x1cc728: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1cc728u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1cc72c:
    // 0x1cc72c: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x1cc72cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_1cc730:
    // 0x1cc730: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cc730u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cc734:
    // 0x1cc734: 0xc04c670  jal         func_1319C0
label_1cc738:
    if (ctx->pc == 0x1CC738u) {
        ctx->pc = 0x1CC738u;
            // 0x1cc738: 0x24845830  addiu       $a0, $a0, 0x5830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22576));
        ctx->pc = 0x1CC73Cu;
        goto label_1cc73c;
    }
    ctx->pc = 0x1CC734u;
    SET_GPR_U32(ctx, 31, 0x1CC73Cu);
    ctx->pc = 0x1CC738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC734u;
            // 0x1cc738: 0x24845830  addiu       $a0, $a0, 0x5830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1319C0u;
    if (runtime->hasFunction(0x1319C0u)) {
        auto targetFn = runtime->lookupFunction(0x1319C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC73Cu; }
        if (ctx->pc != 0x1CC73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAngle__15mgCCameraFollowFf_0x1319c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC73Cu; }
        if (ctx->pc != 0x1CC73Cu) { return; }
    }
    ctx->pc = 0x1CC73Cu;
label_1cc73c:
    // 0x1cc73c: 0x3c0340c0  lui         $v1, 0x40C0
    ctx->pc = 0x1cc73cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
label_1cc740:
    // 0x1cc740: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1cc740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1cc744:
    // 0x1cc744: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1cc744u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1cc748:
    // 0x1cc748: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x1cc748u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cc74c:
    // 0x1cc74c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1cc74cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1cc750:
    // 0x1cc750: 0xc04c564  jal         func_131590
label_1cc754:
    if (ctx->pc == 0x1CC754u) {
        ctx->pc = 0x1CC754u;
            // 0x1cc754: 0x24845830  addiu       $a0, $a0, 0x5830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22576));
        ctx->pc = 0x1CC758u;
        goto label_1cc758;
    }
    ctx->pc = 0x1CC750u;
    SET_GPR_U32(ctx, 31, 0x1CC758u);
    ctx->pc = 0x1CC754u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC750u;
            // 0x1cc754: 0x24845830  addiu       $a0, $a0, 0x5830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131590u;
    if (runtime->hasFunction(0x131590u)) {
        auto targetFn = runtime->lookupFunction(0x131590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC758u; }
        if (ctx->pc != 0x1CC758u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpeed__9mgCCameraFff_0x131590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC758u; }
        if (ctx->pc != 0x1CC758u) { return; }
    }
    ctx->pc = 0x1CC758u;
label_1cc758:
    // 0x1cc758: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1cc758u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1cc75c:
    // 0x1cc75c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1cc75cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1cc760:
    // 0x1cc760: 0xc0bb044  jal         func_2EC110
label_1cc764:
    if (ctx->pc == 0x1CC764u) {
        ctx->pc = 0x1CC764u;
            // 0x1cc764: 0x24845830  addiu       $a0, $a0, 0x5830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22576));
        ctx->pc = 0x1CC768u;
        goto label_1cc768;
    }
    ctx->pc = 0x1CC760u;
    SET_GPR_U32(ctx, 31, 0x1CC768u);
    ctx->pc = 0x1CC764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC760u;
            // 0x1cc764: 0x24845830  addiu       $a0, $a0, 0x5830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC110u;
    if (runtime->hasFunction(0x2EC110u)) {
        auto targetFn = runtime->lookupFunction(0x2EC110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC768u; }
        if (ctx->pc != 0x1CC768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__14CCameraControlFi_0x2ec110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC768u; }
        if (ctx->pc != 0x1CC768u) { return; }
    }
    ctx->pc = 0x1CC768u;
label_1cc768:
    // 0x1cc768: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1cc768u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1cc76c:
    // 0x1cc76c: 0xc0bb00c  jal         func_2EC030
label_1cc770:
    if (ctx->pc == 0x1CC770u) {
        ctx->pc = 0x1CC770u;
            // 0x1cc770: 0x24845830  addiu       $a0, $a0, 0x5830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22576));
        ctx->pc = 0x1CC774u;
        goto label_1cc774;
    }
    ctx->pc = 0x1CC76Cu;
    SET_GPR_U32(ctx, 31, 0x1CC774u);
    ctx->pc = 0x1CC770u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC76Cu;
            // 0x1cc770: 0x24845830  addiu       $a0, $a0, 0x5830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC030u;
    if (runtime->hasFunction(0x2EC030u)) {
        auto targetFn = runtime->lookupFunction(0x2EC030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC774u; }
        if (ctx->pc != 0x1CC774u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ControlOn__14CCameraControlFv_0x2ec030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC774u; }
        if (ctx->pc != 0x1CC774u) { return; }
    }
    ctx->pc = 0x1CC774u;
label_1cc774:
    // 0x1cc774: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1cc774u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1cc778:
    // 0x1cc778: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cc778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cc77c:
    // 0x1cc77c: 0xc0baff4  jal         func_2EBFD0
label_1cc780:
    if (ctx->pc == 0x1CC780u) {
        ctx->pc = 0x1CC780u;
            // 0x1cc780: 0x24845830  addiu       $a0, $a0, 0x5830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22576));
        ctx->pc = 0x1CC784u;
        goto label_1cc784;
    }
    ctx->pc = 0x1CC77Cu;
    SET_GPR_U32(ctx, 31, 0x1CC784u);
    ctx->pc = 0x1CC780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC77Cu;
            // 0x1cc780: 0x24845830  addiu       $a0, $a0, 0x5830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBFD0u;
    if (runtime->hasFunction(0x2EBFD0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC784u; }
        if (ctx->pc != 0x1CC784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRotCameraCancel__14CCameraControlFi_0x2ebfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC784u; }
        if (ctx->pc != 0x1CC784u) { return; }
    }
    ctx->pc = 0x1CC784u;
label_1cc784:
    // 0x1cc784: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1cc784u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1cc788:
    // 0x1cc788: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x1cc788u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
label_1cc78c:
    // 0x1cc78c: 0x24845a20  addiu       $a0, $a0, 0x5A20
    ctx->pc = 0x1cc78cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23072));
label_1cc790:
    // 0x1cc790: 0xc073854  jal         func_1CE150
label_1cc794:
    if (ctx->pc == 0x1CC794u) {
        ctx->pc = 0x1CC794u;
            // 0x1cc794: 0x24a55830  addiu       $a1, $a1, 0x5830 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22576));
        ctx->pc = 0x1CC798u;
        goto label_1cc798;
    }
    ctx->pc = 0x1CC790u;
    SET_GPR_U32(ctx, 31, 0x1CC798u);
    ctx->pc = 0x1CC794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC790u;
            // 0x1cc794: 0x24a55830  addiu       $a1, $a1, 0x5830 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE150u;
    if (runtime->hasFunction(0x1CE150u)) {
        auto targetFn = runtime->lookupFunction(0x1CE150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC798u; }
        if (ctx->pc != 0x1CC798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__9mgCCameraFRC9mgCCamera_0x1ce150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC798u; }
        if (ctx->pc != 0x1CC798u) { return; }
    }
    ctx->pc = 0x1CC798u;
label_1cc798:
    // 0x1cc798: 0x3c0201ea  lui         $v0, 0x1EA
    ctx->pc = 0x1cc798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)490 << 16));
label_1cc79c:
    // 0x1cc79c: 0x3c0b01ea  lui         $t3, 0x1EA
    ctx->pc = 0x1cc79cu;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)490 << 16));
label_1cc7a0:
    // 0x1cc7a0: 0x244258a0  addiu       $v0, $v0, 0x58A0
    ctx->pc = 0x1cc7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22688));
label_1cc7a4:
    // 0x1cc7a4: 0x3c0a01ea  lui         $t2, 0x1EA
    ctx->pc = 0x1cc7a4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)490 << 16));
label_1cc7a8:
    // 0x1cc7a8: 0xc4430000  lwc1        $f3, 0x0($v0)
    ctx->pc = 0x1cc7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1cc7ac:
    // 0x1cc7ac: 0x3c0901ea  lui         $t1, 0x1EA
    ctx->pc = 0x1cc7acu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)490 << 16));
label_1cc7b0:
    // 0x1cc7b0: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x1cc7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cc7b4:
    // 0x1cc7b4: 0x3c0801ea  lui         $t0, 0x1EA
    ctx->pc = 0x1cc7b4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)490 << 16));
label_1cc7b8:
    // 0x1cc7b8: 0xc4410008  lwc1        $f1, 0x8($v0)
    ctx->pc = 0x1cc7b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cc7bc:
    // 0x1cc7bc: 0x3c0701ea  lui         $a3, 0x1EA
    ctx->pc = 0x1cc7bcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)490 << 16));
label_1cc7c0:
    // 0x1cc7c0: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x1cc7c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cc7c4:
    // 0x1cc7c4: 0x256b5a90  addiu       $t3, $t3, 0x5A90
    ctx->pc = 0x1cc7c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 23184));
label_1cc7c8:
    // 0x1cc7c8: 0x3c0301ea  lui         $v1, 0x1EA
    ctx->pc = 0x1cc7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)490 << 16));
label_1cc7cc:
    // 0x1cc7cc: 0x3c0601ea  lui         $a2, 0x1EA
    ctx->pc = 0x1cc7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)490 << 16));
label_1cc7d0:
    // 0x1cc7d0: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x1cc7d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
label_1cc7d4:
    // 0x1cc7d4: 0x254a58b0  addiu       $t2, $t2, 0x58B0
    ctx->pc = 0x1cc7d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 22704));
label_1cc7d8:
    // 0x1cc7d8: 0x25295aa0  addiu       $t1, $t1, 0x5AA0
    ctx->pc = 0x1cc7d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 23200));
label_1cc7dc:
    // 0x1cc7dc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cc7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cc7e0:
    // 0x1cc7e0: 0x250858e0  addiu       $t0, $t0, 0x58E0
    ctx->pc = 0x1cc7e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 22752));
label_1cc7e4:
    // 0x1cc7e4: 0x24e75ad0  addiu       $a3, $a3, 0x5AD0
    ctx->pc = 0x1cc7e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23248));
label_1cc7e8:
    // 0x1cc7e8: 0x24635910  addiu       $v1, $v1, 0x5910
    ctx->pc = 0x1cc7e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22800));
label_1cc7ec:
    // 0x1cc7ec: 0x24c65924  addiu       $a2, $a2, 0x5924
    ctx->pc = 0x1cc7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 22820));
label_1cc7f0:
    // 0x1cc7f0: 0xe5630000  swc1        $f3, 0x0($t3)
    ctx->pc = 0x1cc7f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
label_1cc7f4:
    // 0x1cc7f4: 0x3c0201ea  lui         $v0, 0x1EA
    ctx->pc = 0x1cc7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)490 << 16));
label_1cc7f8:
    // 0x1cc7f8: 0xe5620004  swc1        $f2, 0x4($t3)
    ctx->pc = 0x1cc7f8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
label_1cc7fc:
    // 0x1cc7fc: 0x24425b00  addiu       $v0, $v0, 0x5B00
    ctx->pc = 0x1cc7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23296));
label_1cc800:
    // 0x1cc800: 0xe5610008  swc1        $f1, 0x8($t3)
    ctx->pc = 0x1cc800u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
label_1cc804:
    // 0x1cc804: 0x24a55b14  addiu       $a1, $a1, 0x5B14
    ctx->pc = 0x1cc804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23316));
label_1cc808:
    // 0x1cc808: 0xe560000c  swc1        $f0, 0xC($t3)
    ctx->pc = 0x1cc808u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 12), bits); }
label_1cc80c:
    // 0x1cc80c: 0x24040016  addiu       $a0, $zero, 0x16
    ctx->pc = 0x1cc80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
label_1cc810:
    // 0x1cc810: 0xc5430000  lwc1        $f3, 0x0($t2)
    ctx->pc = 0x1cc810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1cc814:
    // 0x1cc814: 0xc5420004  lwc1        $f2, 0x4($t2)
    ctx->pc = 0x1cc814u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cc818:
    // 0x1cc818: 0xc5410008  lwc1        $f1, 0x8($t2)
    ctx->pc = 0x1cc818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cc81c:
    // 0x1cc81c: 0xc540000c  lwc1        $f0, 0xC($t2)
    ctx->pc = 0x1cc81cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cc820:
    // 0x1cc820: 0xe5230000  swc1        $f3, 0x0($t1)
    ctx->pc = 0x1cc820u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_1cc824:
    // 0x1cc824: 0xe5220004  swc1        $f2, 0x4($t1)
    ctx->pc = 0x1cc824u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
label_1cc828:
    // 0x1cc828: 0xe5210008  swc1        $f1, 0x8($t1)
    ctx->pc = 0x1cc828u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
label_1cc82c:
    // 0x1cc82c: 0xe520000c  swc1        $f0, 0xC($t1)
    ctx->pc = 0x1cc82cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
label_1cc830:
    // 0x1cc830: 0xc42358c0  lwc1        $f3, 0x58C0($at)
    ctx->pc = 0x1cc830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 22720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1cc834:
    // 0x1cc834: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cc834u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cc838:
    // 0x1cc838: 0xc42258c4  lwc1        $f2, 0x58C4($at)
    ctx->pc = 0x1cc838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 22724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cc83c:
    // 0x1cc83c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cc83cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cc840:
    // 0x1cc840: 0xc42158c8  lwc1        $f1, 0x58C8($at)
    ctx->pc = 0x1cc840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 22728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cc844:
    // 0x1cc844: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cc844u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cc848:
    // 0x1cc848: 0xc42058cc  lwc1        $f0, 0x58CC($at)
    ctx->pc = 0x1cc848u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 22732)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cc84c:
    // 0x1cc84c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cc84cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cc850:
    // 0x1cc850: 0x8c2958d0  lw          $t1, 0x58D0($at)
    ctx->pc = 0x1cc850u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 22736)));
label_1cc854:
    // 0x1cc854: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cc854u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cc858:
    // 0x1cc858: 0xe4235ab0  swc1        $f3, 0x5AB0($at)
    ctx->pc = 0x1cc858u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 23216), bits); }
label_1cc85c:
    // 0x1cc85c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cc85cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cc860:
    // 0x1cc860: 0xe4225ab4  swc1        $f2, 0x5AB4($at)
    ctx->pc = 0x1cc860u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 23220), bits); }
label_1cc864:
    // 0x1cc864: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cc864u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cc868:
    // 0x1cc868: 0xe4215ab8  swc1        $f1, 0x5AB8($at)
    ctx->pc = 0x1cc868u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 23224), bits); }
label_1cc86c:
    // 0x1cc86c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cc86cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cc870:
    // 0x1cc870: 0xe4205abc  swc1        $f0, 0x5ABC($at)
    ctx->pc = 0x1cc870u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 23228), bits); }
label_1cc874:
    // 0x1cc874: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cc874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cc878:
    // 0x1cc878: 0xac295ac0  sw          $t1, 0x5AC0($at)
    ctx->pc = 0x1cc878u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 23232), GPR_U32(ctx, 9));
label_1cc87c:
    // 0x1cc87c: 0xc5030000  lwc1        $f3, 0x0($t0)
    ctx->pc = 0x1cc87cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1cc880:
    // 0x1cc880: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cc880u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cc884:
    // 0x1cc884: 0xc5020004  lwc1        $f2, 0x4($t0)
    ctx->pc = 0x1cc884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cc888:
    // 0x1cc888: 0xc5010008  lwc1        $f1, 0x8($t0)
    ctx->pc = 0x1cc888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cc88c:
    // 0x1cc88c: 0xc500000c  lwc1        $f0, 0xC($t0)
    ctx->pc = 0x1cc88cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cc890:
    // 0x1cc890: 0xe4e30000  swc1        $f3, 0x0($a3)
    ctx->pc = 0x1cc890u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_1cc894:
    // 0x1cc894: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x1cc894u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_1cc898:
    // 0x1cc898: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x1cc898u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_1cc89c:
    // 0x1cc89c: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x1cc89cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
label_1cc8a0:
    // 0x1cc8a0: 0x8c2a58f0  lw          $t2, 0x58F0($at)
    ctx->pc = 0x1cc8a0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 22768)));
label_1cc8a4:
    // 0x1cc8a4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cc8a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cc8a8:
    // 0x1cc8a8: 0x8c2958f4  lw          $t1, 0x58F4($at)
    ctx->pc = 0x1cc8a8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 22772)));
label_1cc8ac:
    // 0x1cc8ac: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cc8acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cc8b0:
    // 0x1cc8b0: 0x8c2858f8  lw          $t0, 0x58F8($at)
    ctx->pc = 0x1cc8b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 22776)));
label_1cc8b4:
    // 0x1cc8b4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cc8b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cc8b8:
    // 0x1cc8b8: 0xc42058fc  lwc1        $f0, 0x58FC($at)
    ctx->pc = 0x1cc8b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 22780)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cc8bc:
    // 0x1cc8bc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cc8bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cc8c0:
    // 0x1cc8c0: 0x8c275900  lw          $a3, 0x5900($at)
    ctx->pc = 0x1cc8c0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 22784)));
label_1cc8c4:
    // 0x1cc8c4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cc8c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cc8c8:
    // 0x1cc8c8: 0xac2a5ae0  sw          $t2, 0x5AE0($at)
    ctx->pc = 0x1cc8c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 23264), GPR_U32(ctx, 10));
label_1cc8cc:
    // 0x1cc8cc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cc8ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cc8d0:
    // 0x1cc8d0: 0xac295ae4  sw          $t1, 0x5AE4($at)
    ctx->pc = 0x1cc8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 23268), GPR_U32(ctx, 9));
label_1cc8d4:
    // 0x1cc8d4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cc8d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cc8d8:
    // 0x1cc8d8: 0xac285ae8  sw          $t0, 0x5AE8($at)
    ctx->pc = 0x1cc8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 23272), GPR_U32(ctx, 8));
label_1cc8dc:
    // 0x1cc8dc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cc8dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cc8e0:
    // 0x1cc8e0: 0xe4205aec  swc1        $f0, 0x5AEC($at)
    ctx->pc = 0x1cc8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 23276), bits); }
label_1cc8e4:
    // 0x1cc8e4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cc8e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cc8e8:
    // 0x1cc8e8: 0xac275af0  sw          $a3, 0x5AF0($at)
    ctx->pc = 0x1cc8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 23280), GPR_U32(ctx, 7));
label_1cc8ec:
    // 0x1cc8ec: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1cc8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1cc8f0:
    // 0x1cc8f0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cc8f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cc8f4:
    // 0x1cc8f4: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1cc8f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cc8f8:
    // 0x1cc8f8: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1cc8f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cc8fc:
    // 0x1cc8fc: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1cc8fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cc900:
    // 0x1cc900: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x1cc900u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1cc904:
    // 0x1cc904: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1cc904u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1cc908:
    // 0x1cc908: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1cc908u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1cc90c:
    // 0x1cc90c: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1cc90cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1cc910:
    // 0x1cc910: 0x8c225920  lw          $v0, 0x5920($at)
    ctx->pc = 0x1cc910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 22816)));
label_1cc914:
    // 0x1cc914: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cc914u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cc918:
    // 0x1cc918: 0xac225b10  sw          $v0, 0x5B10($at)
    ctx->pc = 0x1cc918u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 23312), GPR_U32(ctx, 2));
label_1cc91c:
    // 0x1cc91c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1cc91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1cc920:
    // 0x1cc920: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1cc920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1cc924:
    // 0x1cc924: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x1cc924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_1cc928:
    // 0x1cc928: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1cc928u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_1cc92c:
    // 0x1cc92c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x1cc92cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_1cc930:
    // 0x1cc930: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x1cc930u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_1cc934:
    // 0x1cc934: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_1cc938:
    if (ctx->pc == 0x1CC938u) {
        ctx->pc = 0x1CC938u;
            // 0x1cc938: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x1CC93Cu;
        goto label_1cc93c;
    }
    ctx->pc = 0x1CC934u;
    {
        const bool branch_taken_0x1cc934 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x1CC938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC934u;
            // 0x1cc938: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cc934) {
            ctx->pc = 0x1CC91Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cc91c;
        }
    }
    ctx->pc = 0x1CC93Cu;
label_1cc93c:
    // 0x1cc93c: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x1cc93cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
label_1cc940:
    // 0x1cc940: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1cc940u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1cc944:
    // 0x1cc944: 0x24a559d4  addiu       $a1, $a1, 0x59D4
    ctx->pc = 0x1cc944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22996));
label_1cc948:
    // 0x1cc948: 0x3c0301ea  lui         $v1, 0x1EA
    ctx->pc = 0x1cc948u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)490 << 16));
label_1cc94c:
    // 0x1cc94c: 0xc4a30000  lwc1        $f3, 0x0($a1)
    ctx->pc = 0x1cc94cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1cc950:
    // 0x1cc950: 0x3c0201ea  lui         $v0, 0x1EA
    ctx->pc = 0x1cc950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)490 << 16));
label_1cc954:
    // 0x1cc954: 0xc4a20004  lwc1        $f2, 0x4($a1)
    ctx->pc = 0x1cc954u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cc958:
    // 0x1cc958: 0x24845bc4  addiu       $a0, $a0, 0x5BC4
    ctx->pc = 0x1cc958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23492));
label_1cc95c:
    // 0x1cc95c: 0xc4a10008  lwc1        $f1, 0x8($a1)
    ctx->pc = 0x1cc95cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cc960:
    // 0x1cc960: 0x24635a00  addiu       $v1, $v1, 0x5A00
    ctx->pc = 0x1cc960u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23040));
label_1cc964:
    // 0x1cc964: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x1cc964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cc968:
    // 0x1cc968: 0x24425bf0  addiu       $v0, $v0, 0x5BF0
    ctx->pc = 0x1cc968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23536));
label_1cc96c:
    // 0x1cc96c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cc96cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cc970:
    // 0x1cc970: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x1cc970u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1cc974:
    // 0x1cc974: 0xe4820004  swc1        $f2, 0x4($a0)
    ctx->pc = 0x1cc974u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
label_1cc978:
    // 0x1cc978: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x1cc978u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_1cc97c:
    // 0x1cc97c: 0xe480000c  swc1        $f0, 0xC($a0)
    ctx->pc = 0x1cc97cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
label_1cc980:
    // 0x1cc980: 0xc4a30010  lwc1        $f3, 0x10($a1)
    ctx->pc = 0x1cc980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1cc984:
    // 0x1cc984: 0xc4a20014  lwc1        $f2, 0x14($a1)
    ctx->pc = 0x1cc984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cc988:
    // 0x1cc988: 0xc4a10018  lwc1        $f1, 0x18($a1)
    ctx->pc = 0x1cc988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cc98c:
    // 0x1cc98c: 0xc4a0001c  lwc1        $f0, 0x1C($a1)
    ctx->pc = 0x1cc98cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cc990:
    // 0x1cc990: 0xe4830010  swc1        $f3, 0x10($a0)
    ctx->pc = 0x1cc990u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
label_1cc994:
    // 0x1cc994: 0xe4820014  swc1        $f2, 0x14($a0)
    ctx->pc = 0x1cc994u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
label_1cc998:
    // 0x1cc998: 0xe4810018  swc1        $f1, 0x18($a0)
    ctx->pc = 0x1cc998u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_1cc99c:
    // 0x1cc99c: 0xe480001c  swc1        $f0, 0x1C($a0)
    ctx->pc = 0x1cc99cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 28), bits); }
label_1cc9a0:
    // 0x1cc9a0: 0xc4a20020  lwc1        $f2, 0x20($a1)
    ctx->pc = 0x1cc9a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cc9a4:
    // 0x1cc9a4: 0xc4a10024  lwc1        $f1, 0x24($a1)
    ctx->pc = 0x1cc9a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cc9a8:
    // 0x1cc9a8: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x1cc9a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cc9ac:
    // 0x1cc9ac: 0xe4820020  swc1        $f2, 0x20($a0)
    ctx->pc = 0x1cc9acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
label_1cc9b0:
    // 0x1cc9b0: 0xe4810024  swc1        $f1, 0x24($a0)
    ctx->pc = 0x1cc9b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 36), bits); }
label_1cc9b4:
    // 0x1cc9b4: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x1cc9b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
label_1cc9b8:
    // 0x1cc9b8: 0xc4630000  lwc1        $f3, 0x0($v1)
    ctx->pc = 0x1cc9b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1cc9bc:
    // 0x1cc9bc: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x1cc9bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cc9c0:
    // 0x1cc9c0: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x1cc9c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cc9c4:
    // 0x1cc9c4: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x1cc9c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cc9c8:
    // 0x1cc9c8: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x1cc9c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_1cc9cc:
    // 0x1cc9cc: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x1cc9ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_1cc9d0:
    // 0x1cc9d0: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x1cc9d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1cc9d4:
    // 0x1cc9d4: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x1cc9d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1cc9d8:
    // 0x1cc9d8: 0x8c225a10  lw          $v0, 0x5A10($at)
    ctx->pc = 0x1cc9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 23056)));
label_1cc9dc:
    // 0x1cc9dc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cc9dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cc9e0:
    // 0x1cc9e0: 0xc098930  jal         func_2624C0
label_1cc9e4:
    if (ctx->pc == 0x1CC9E4u) {
        ctx->pc = 0x1CC9E4u;
            // 0x1cc9e4: 0xac225c00  sw          $v0, 0x5C00($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 23552), GPR_U32(ctx, 2));
        ctx->pc = 0x1CC9E8u;
        goto label_1cc9e8;
    }
    ctx->pc = 0x1CC9E0u;
    SET_GPR_U32(ctx, 31, 0x1CC9E8u);
    ctx->pc = 0x1CC9E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC9E0u;
            // 0x1cc9e4: 0xac225c00  sw          $v0, 0x5C00($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 23552), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2624C0u;
    if (runtime->hasFunction(0x2624C0u)) {
        auto targetFn = runtime->lookupFunction(0x2624C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC9E8u; }
        if (ctx->pc != 0x1CC9E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EdEventLoopInit__Fv_0x2624c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC9E8u; }
        if (ctx->pc != 0x1CC9E8u) { return; }
    }
    ctx->pc = 0x1CC9E8u;
label_1cc9e8:
    // 0x1cc9e8: 0xc0c3958  jal         func_30E560
label_1cc9ec:
    if (ctx->pc == 0x1CC9ECu) {
        ctx->pc = 0x1CC9F0u;
        goto label_1cc9f0;
    }
    ctx->pc = 0x1CC9E8u;
    SET_GPR_U32(ctx, 31, 0x1CC9F0u);
    ctx->pc = 0x30E560u;
    if (runtime->hasFunction(0x30E560u)) {
        auto targetFn = runtime->lookupFunction(0x30E560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC9F0u; }
        if (ctx->pc != 0x1CC9F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitTakePhoto__Fv_0x30e560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CC9F0u; }
        if (ctx->pc != 0x1CC9F0u) { return; }
    }
    ctx->pc = 0x1CC9F0u;
label_1cc9f0:
    // 0x1cc9f0: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cc9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cc9f4:
    // 0x1cc9f4: 0x8f868d74  lw          $a2, -0x728C($gp)
    ctx->pc = 0x1cc9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_1cc9f8:
    // 0x1cc9f8: 0xc0a9c80  jal         func_2A7200
label_1cc9fc:
    if (ctx->pc == 0x1CC9FCu) {
        ctx->pc = 0x1CC9FCu;
            // 0x1cc9fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CCA00u;
        goto label_1cca00;
    }
    ctx->pc = 0x1CC9F8u;
    SET_GPR_U32(ctx, 31, 0x1CCA00u);
    ctx->pc = 0x1CC9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CC9F8u;
            // 0x1cc9fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A7200u;
    if (runtime->hasFunction(0x2A7200u)) {
        auto targetFn = runtime->lookupFunction(0x2A7200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCA00u; }
        if (ctx->pc != 0x1CCA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSeBase__6CSceneFiP1_0x2a7200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCA00u; }
        if (ctx->pc != 0x1CCA00u) { return; }
    }
    ctx->pc = 0x1CCA00u;
label_1cca00:
    // 0x1cca00: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1cca00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1cca04:
    // 0x1cca04: 0x41940  sll         $v1, $a0, 5
    ctx->pc = 0x1cca04u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1cca08:
    // 0x1cca08: 0x28820005  slti        $v0, $a0, 0x5
    ctx->pc = 0x1cca08u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
label_1cca0c:
    // 0x1cca0c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1cca0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1cca10:
    // 0x1cca10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1cca10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1cca14:
    // 0x1cca14: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1cca14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1cca18:
    // 0x1cca18: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1cca18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1cca1c:
    // 0x1cca1c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_1cca20:
    if (ctx->pc == 0x1CCA20u) {
        ctx->pc = 0x1CCA20u;
            // 0x1cca20: 0x24700641  addiu       $s0, $v1, 0x641 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1601));
        ctx->pc = 0x1CCA24u;
        goto label_1cca24;
    }
    ctx->pc = 0x1CCA1Cu;
    {
        const bool branch_taken_0x1cca1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CCA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCA1Cu;
            // 0x1cca20: 0x24700641  addiu       $s0, $v1, 0x641 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1601));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cca1c) {
            ctx->pc = 0x1CCA28u;
            goto label_1cca28;
        }
    }
    ctx->pc = 0x1CCA24u;
label_1cca24:
    // 0x1cca24: 0x261003e8  addiu       $s0, $s0, 0x3E8
    ctx->pc = 0x1cca24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1000));
label_1cca28:
    // 0x1cca28: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cca28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cca2c:
    // 0x1cca2c: 0x8f868d74  lw          $a2, -0x728C($gp)
    ctx->pc = 0x1cca2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_1cca30:
    // 0x1cca30: 0xc0a9b5c  jal         func_2A6D70
label_1cca34:
    if (ctx->pc == 0x1CCA34u) {
        ctx->pc = 0x1CCA34u;
            // 0x1cca34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CCA38u;
        goto label_1cca38;
    }
    ctx->pc = 0x1CCA30u;
    SET_GPR_U32(ctx, 31, 0x1CCA38u);
    ctx->pc = 0x1CCA34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCA30u;
            // 0x1cca34: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6D70u;
    if (runtime->hasFunction(0x2A6D70u)) {
        auto targetFn = runtime->lookupFunction(0x2A6D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCA38u; }
        if (ctx->pc != 0x1CCA38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSound__6CSceneFiP1_0x2a6d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCA38u; }
        if (ctx->pc != 0x1CCA38u) { return; }
    }
    ctx->pc = 0x1CCA38u;
label_1cca38:
    // 0x1cca38: 0xc0c2678  jal         func_3099E0
label_1cca3c:
    if (ctx->pc == 0x1CCA3Cu) {
        ctx->pc = 0x1CCA40u;
        goto label_1cca40;
    }
    ctx->pc = 0x1CCA38u;
    SET_GPR_U32(ctx, 31, 0x1CCA40u);
    ctx->pc = 0x3099E0u;
    if (runtime->hasFunction(0x3099E0u)) {
        auto targetFn = runtime->lookupFunction(0x3099E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCA40u; }
        if (ctx->pc != 0x1CCA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowLoadingBarStep__Fv_0x3099e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCA40u; }
        if (ctx->pc != 0x1CCA40u) { return; }
    }
    ctx->pc = 0x1CCA40u;
label_1cca40:
    // 0x1cca40: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cca40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cca44:
    // 0x1cca44: 0x3402906c  ori         $v0, $zero, 0x906C
    ctx->pc = 0x1cca44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)36972);
label_1cca48:
    // 0x1cca48: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x1cca48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_1cca4c:
    // 0x1cca4c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x1cca4cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cca50:
    // 0x1cca50: 0xc0a9b30  jal         func_2A6CC0
label_1cca54:
    if (ctx->pc == 0x1CCA54u) {
        ctx->pc = 0x1CCA54u;
            // 0x1cca54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CCA58u;
        goto label_1cca58;
    }
    ctx->pc = 0x1CCA50u;
    SET_GPR_U32(ctx, 31, 0x1CCA58u);
    ctx->pc = 0x1CCA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCA50u;
            // 0x1cca54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6CC0u;
    if (runtime->hasFunction(0x2A6CC0u)) {
        auto targetFn = runtime->lookupFunction(0x2A6CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCA58u; }
        if (ctx->pc != 0x1CCA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDefBgmNo__6CSceneFi_0x2a6cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCA58u; }
        if (ctx->pc != 0x1CCA58u) { return; }
    }
    ctx->pc = 0x1CCA58u;
label_1cca58:
    // 0x1cca58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cca58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cca5c:
    // 0x1cca5c: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
label_1cca60:
    if (ctx->pc == 0x1CCA60u) {
        ctx->pc = 0x1CCA64u;
        goto label_1cca64;
    }
    ctx->pc = 0x1CCA5Cu;
    {
        const bool branch_taken_0x1cca5c = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x1cca5c) {
            ctx->pc = 0x1CCA70u;
            goto label_1cca70;
        }
    }
    ctx->pc = 0x1CCA64u;
label_1cca64:
    // 0x1cca64: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cca64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cca68:
    // 0x1cca68: 0xc0a98a0  jal         func_2A6280
label_1cca6c:
    if (ctx->pc == 0x1CCA6Cu) {
        ctx->pc = 0x1CCA6Cu;
            // 0x1cca6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CCA70u;
        goto label_1cca70;
    }
    ctx->pc = 0x1CCA68u;
    SET_GPR_U32(ctx, 31, 0x1CCA70u);
    ctx->pc = 0x1CCA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCA68u;
            // 0x1cca6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6280u;
    if (runtime->hasFunction(0x2A6280u)) {
        auto targetFn = runtime->lookupFunction(0x2A6280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCA70u; }
        if (ctx->pc != 0x1CCA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StopBGM__6CSceneFi_0x2a6280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCA70u; }
        if (ctx->pc != 0x1CCA70u) { return; }
    }
    ctx->pc = 0x1CCA70u;
label_1cca70:
    // 0x1cca70: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cca70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cca74:
    // 0x1cca74: 0x8f868d74  lw          $a2, -0x728C($gp)
    ctx->pc = 0x1cca74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_1cca78:
    // 0x1cca78: 0xc0a9be4  jal         func_2A6F90
label_1cca7c:
    if (ctx->pc == 0x1CCA7Cu) {
        ctx->pc = 0x1CCA7Cu;
            // 0x1cca7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CCA80u;
        goto label_1cca80;
    }
    ctx->pc = 0x1CCA78u;
    SET_GPR_U32(ctx, 31, 0x1CCA80u);
    ctx->pc = 0x1CCA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCA78u;
            // 0x1cca7c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6F90u;
    if (runtime->hasFunction(0x2A6F90u)) {
        auto targetFn = runtime->lookupFunction(0x2A6F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCA80u; }
        if (ctx->pc != 0x1CCA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadBGM__6CSceneFiP1_0x2a6f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCA80u; }
        if (ctx->pc != 0x1CCA80u) { return; }
    }
    ctx->pc = 0x1CCA80u;
label_1cca80:
    // 0x1cca80: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1cca84:
    if (ctx->pc == 0x1CCA84u) {
        ctx->pc = 0x1CCA88u;
        goto label_1cca88;
    }
    ctx->pc = 0x1CCA80u;
    {
        const bool branch_taken_0x1cca80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cca80) {
            ctx->pc = 0x1CCAA0u;
            goto label_1ccaa0;
        }
    }
    ctx->pc = 0x1CCA88u;
label_1cca88:
    // 0x1cca88: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cca88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cca8c:
    // 0x1cca8c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cca8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cca90:
    // 0x1cca90: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cca90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cca94:
    // 0x1cca94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cca94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cca98:
    // 0x1cca98: 0xc0a9844  jal         func_2A6110
label_1cca9c:
    if (ctx->pc == 0x1CCA9Cu) {
        ctx->pc = 0x1CCA9Cu;
            // 0x1cca9c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1CCAA0u;
        goto label_1ccaa0;
    }
    ctx->pc = 0x1CCA98u;
    SET_GPR_U32(ctx, 31, 0x1CCAA0u);
    ctx->pc = 0x1CCA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCA98u;
            // 0x1cca9c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6110u;
    if (runtime->hasFunction(0x2A6110u)) {
        auto targetFn = runtime->lookupFunction(0x2A6110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCAA0u; }
        if (ctx->pc != 0x1CCAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayBGM__6CSceneFiif_0x2a6110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCAA0u; }
        if (ctx->pc != 0x1CCAA0u) { return; }
    }
    ctx->pc = 0x1CCAA0u;
label_1ccaa0:
    // 0x1ccaa0: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_1ccaa4:
    if (ctx->pc == 0x1CCAA4u) {
        ctx->pc = 0x1CCAA8u;
        goto label_1ccaa8;
    }
    ctx->pc = 0x1CCAA0u;
    {
        const bool branch_taken_0x1ccaa0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ccaa0) {
            ctx->pc = 0x1CCABCu;
            goto label_1ccabc;
        }
    }
    ctx->pc = 0x1CCAA8u;
label_1ccaa8:
    // 0x1ccaa8: 0x8f828dac  lw          $v0, -0x7254($gp)
    ctx->pc = 0x1ccaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1ccaac:
    // 0x1ccaac: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1ccaacu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1ccab0:
    // 0x1ccab0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ccab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ccab4:
    // 0x1ccab4: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1ccab4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1ccab8:
    // 0x1ccab8: 0xac23906c  sw          $v1, -0x6F94($at)
    ctx->pc = 0x1ccab8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294938732), GPR_U32(ctx, 3));
label_1ccabc:
    // 0x1ccabc: 0xc0c2678  jal         func_3099E0
label_1ccac0:
    if (ctx->pc == 0x1CCAC0u) {
        ctx->pc = 0x1CCAC4u;
        goto label_1ccac4;
    }
    ctx->pc = 0x1CCABCu;
    SET_GPR_U32(ctx, 31, 0x1CCAC4u);
    ctx->pc = 0x3099E0u;
    if (runtime->hasFunction(0x3099E0u)) {
        auto targetFn = runtime->lookupFunction(0x3099E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCAC4u; }
        if (ctx->pc != 0x1CCAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowLoadingBarStep__Fv_0x3099e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCAC4u; }
        if (ctx->pc != 0x1CCAC4u) { return; }
    }
    ctx->pc = 0x1CCAC4u;
label_1ccac4:
    // 0x1ccac4: 0x8f848d70  lw          $a0, -0x7290($gp)
    ctx->pc = 0x1ccac4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
label_1ccac8:
    // 0x1ccac8: 0xc04e748  jal         func_139D20
label_1ccacc:
    if (ctx->pc == 0x1CCACCu) {
        ctx->pc = 0x1CCACCu;
            // 0x1ccacc: 0x24050220  addiu       $a1, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->pc = 0x1CCAD0u;
        goto label_1ccad0;
    }
    ctx->pc = 0x1CCAC8u;
    SET_GPR_U32(ctx, 31, 0x1CCAD0u);
    ctx->pc = 0x1CCACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCAC8u;
            // 0x1ccacc: 0x24050220  addiu       $a1, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCAD0u; }
        if (ctx->pc != 0x1CCAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCAD0u; }
        if (ctx->pc != 0x1CCAD0u) { return; }
    }
    ctx->pc = 0x1CCAD0u;
label_1ccad0:
    // 0x1ccad0: 0x240421e0  addiu       $a0, $zero, 0x21E0
    ctx->pc = 0x1ccad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8672));
label_1ccad4:
    // 0x1ccad4: 0xc04e638  jal         func_1398E0
label_1ccad8:
    if (ctx->pc == 0x1CCAD8u) {
        ctx->pc = 0x1CCAD8u;
            // 0x1ccad8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CCADCu;
        goto label_1ccadc;
    }
    ctx->pc = 0x1CCAD4u;
    SET_GPR_U32(ctx, 31, 0x1CCADCu);
    ctx->pc = 0x1CCAD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCAD4u;
            // 0x1ccad8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCADCu; }
        if (ctx->pc != 0x1CCADCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCADCu; }
        if (ctx->pc != 0x1CCADCu) { return; }
    }
    ctx->pc = 0x1CCADCu;
label_1ccadc:
    // 0x1ccadc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1ccae0:
    if (ctx->pc == 0x1CCAE0u) {
        ctx->pc = 0x1CCAE0u;
            // 0x1ccae0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CCAE4u;
        goto label_1ccae4;
    }
    ctx->pc = 0x1CCADCu;
    {
        const bool branch_taken_0x1ccadc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCADCu;
            // 0x1ccae0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccadc) {
            ctx->pc = 0x1CCAECu;
            goto label_1ccaec;
        }
    }
    ctx->pc = 0x1CCAE4u;
label_1ccae4:
    // 0x1ccae4: 0xc054aa4  jal         func_152A90
label_1ccae8:
    if (ctx->pc == 0x1CCAE8u) {
        ctx->pc = 0x1CCAECu;
        goto label_1ccaec;
    }
    ctx->pc = 0x1CCAE4u;
    SET_GPR_U32(ctx, 31, 0x1CCAECu);
    ctx->pc = 0x152A90u;
    if (runtime->hasFunction(0x152A90u)) {
        auto targetFn = runtime->lookupFunction(0x152A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCAECu; }
        if (ctx->pc != 0x1CCAECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__6ClsMesFv_0x152a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCAECu; }
        if (ctx->pc != 0x1CCAECu) { return; }
    }
    ctx->pc = 0x1CCAECu;
label_1ccaec:
    // 0x1ccaec: 0xaf828dbc  sw          $v0, -0x7244($gp)
    ctx->pc = 0x1ccaecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938044), GPR_U32(ctx, 2));
label_1ccaf0:
    // 0x1ccaf0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ccaf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ccaf4:
    // 0x1ccaf4: 0xc054bb4  jal         func_152ED0
label_1ccaf8:
    if (ctx->pc == 0x1CCAF8u) {
        ctx->pc = 0x1CCAF8u;
            // 0x1ccaf8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1CCAFCu;
        goto label_1ccafc;
    }
    ctx->pc = 0x1CCAF4u;
    SET_GPR_U32(ctx, 31, 0x1CCAFCu);
    ctx->pc = 0x1CCAF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCAF4u;
            // 0x1ccaf8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152ED0u;
    if (runtime->hasFunction(0x152ED0u)) {
        auto targetFn = runtime->lookupFunction(0x152ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCAFCu; }
        if (ctx->pc != 0x1CCAFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset__6ClsMesFi_0x152ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCAFCu; }
        if (ctx->pc != 0x1CCAFCu) { return; }
    }
    ctx->pc = 0x1CCAFCu;
label_1ccafc:
    // 0x1ccafc: 0x8f848dbc  lw          $a0, -0x7244($gp)
    ctx->pc = 0x1ccafcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938044)));
label_1ccb00:
    // 0x1ccb00: 0xc054cdc  jal         func_153370
label_1ccb04:
    if (ctx->pc == 0x1CCB04u) {
        ctx->pc = 0x1CCB04u;
            // 0x1ccb04: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x1CCB08u;
        goto label_1ccb08;
    }
    ctx->pc = 0x1CCB00u;
    SET_GPR_U32(ctx, 31, 0x1CCB08u);
    ctx->pc = 0x1CCB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCB00u;
            // 0x1ccb04: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB08u; }
        if (ctx->pc != 0x1CCB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWindowMode__6ClsMesFi_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB08u; }
        if (ctx->pc != 0x1CCB08u) { return; }
    }
    ctx->pc = 0x1CCB08u;
label_1ccb08:
    // 0x1ccb08: 0x8f828dbc  lw          $v0, -0x7244($gp)
    ctx->pc = 0x1ccb08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938044)));
label_1ccb0c:
    // 0x1ccb0c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1ccb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1ccb10:
    // 0x1ccb10: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x1ccb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_1ccb14:
    // 0x1ccb14: 0x2484ff90  addiu       $a0, $a0, -0x70
    ctx->pc = 0x1ccb14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967184));
label_1ccb18:
    // 0x1ccb18: 0xac4017f4  sw          $zero, 0x17F4($v0)
    ctx->pc = 0x1ccb18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6132), GPR_U32(ctx, 0));
label_1ccb1c:
    // 0x1ccb1c: 0x8f828dbc  lw          $v0, -0x7244($gp)
    ctx->pc = 0x1ccb1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938044)));
label_1ccb20:
    // 0x1ccb20: 0xac4001bc  sw          $zero, 0x1BC($v0)
    ctx->pc = 0x1ccb20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 444), GPR_U32(ctx, 0));
label_1ccb24:
    // 0x1ccb24: 0x8f828dbc  lw          $v0, -0x7244($gp)
    ctx->pc = 0x1ccb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938044)));
label_1ccb28:
    // 0x1ccb28: 0xac4001b8  sw          $zero, 0x1B8($v0)
    ctx->pc = 0x1ccb28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 440), GPR_U32(ctx, 0));
label_1ccb2c:
    // 0x1ccb2c: 0x8f828dbc  lw          $v0, -0x7244($gp)
    ctx->pc = 0x1ccb2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938044)));
label_1ccb30:
    // 0x1ccb30: 0xc0a2e40  jal         func_28B900
label_1ccb34:
    if (ctx->pc == 0x1CCB34u) {
        ctx->pc = 0x1CCB34u;
            // 0x1ccb34: 0xac431b2c  sw          $v1, 0x1B2C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 6956), GPR_U32(ctx, 3));
        ctx->pc = 0x1CCB38u;
        goto label_1ccb38;
    }
    ctx->pc = 0x1CCB30u;
    SET_GPR_U32(ctx, 31, 0x1CCB38u);
    ctx->pc = 0x1CCB34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCB30u;
            // 0x1ccb34: 0xac431b2c  sw          $v1, 0x1B2C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 6956), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B900u;
    if (runtime->hasFunction(0x28B900u)) {
        auto targetFn = runtime->lookupFunction(0x28B900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB38u; }
        if (ctx->pc != 0x1CCB38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__18MessageTaskManagerFv_0x28b900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB38u; }
        if (ctx->pc != 0x1CCB38u) { return; }
    }
    ctx->pc = 0x1CCB38u;
label_1ccb38:
    // 0x1ccb38: 0x8f828dbc  lw          $v0, -0x7244($gp)
    ctx->pc = 0x1ccb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938044)));
label_1ccb3c:
    // 0x1ccb3c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ccb3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ccb40:
    // 0x1ccb40: 0x8f848d70  lw          $a0, -0x7290($gp)
    ctx->pc = 0x1ccb40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
label_1ccb44:
    // 0x1ccb44: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x1ccb44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_1ccb48:
    // 0x1ccb48: 0xc04e748  jal         func_139D20
label_1ccb4c:
    if (ctx->pc == 0x1CCB4Cu) {
        ctx->pc = 0x1CCB4Cu;
            // 0x1ccb4c: 0xac22ff94  sw          $v0, -0x6C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294967188), GPR_U32(ctx, 2));
        ctx->pc = 0x1CCB50u;
        goto label_1ccb50;
    }
    ctx->pc = 0x1CCB48u;
    SET_GPR_U32(ctx, 31, 0x1CCB50u);
    ctx->pc = 0x1CCB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCB48u;
            // 0x1ccb4c: 0xac22ff94  sw          $v0, -0x6C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294967188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB50u; }
        if (ctx->pc != 0x1CCB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB50u; }
        if (ctx->pc != 0x1CCB50u) { return; }
    }
    ctx->pc = 0x1CCB50u;
label_1ccb50:
    // 0x1ccb50: 0x240421e0  addiu       $a0, $zero, 0x21E0
    ctx->pc = 0x1ccb50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8672));
label_1ccb54:
    // 0x1ccb54: 0xc04e638  jal         func_1398E0
label_1ccb58:
    if (ctx->pc == 0x1CCB58u) {
        ctx->pc = 0x1CCB58u;
            // 0x1ccb58: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CCB5Cu;
        goto label_1ccb5c;
    }
    ctx->pc = 0x1CCB54u;
    SET_GPR_U32(ctx, 31, 0x1CCB5Cu);
    ctx->pc = 0x1CCB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCB54u;
            // 0x1ccb58: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB5Cu; }
        if (ctx->pc != 0x1CCB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB5Cu; }
        if (ctx->pc != 0x1CCB5Cu) { return; }
    }
    ctx->pc = 0x1CCB5Cu;
label_1ccb5c:
    // 0x1ccb5c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1ccb60:
    if (ctx->pc == 0x1CCB60u) {
        ctx->pc = 0x1CCB60u;
            // 0x1ccb60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CCB64u;
        goto label_1ccb64;
    }
    ctx->pc = 0x1CCB5Cu;
    {
        const bool branch_taken_0x1ccb5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCB60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCB5Cu;
            // 0x1ccb60: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccb5c) {
            ctx->pc = 0x1CCB6Cu;
            goto label_1ccb6c;
        }
    }
    ctx->pc = 0x1CCB64u;
label_1ccb64:
    // 0x1ccb64: 0xc054aa4  jal         func_152A90
label_1ccb68:
    if (ctx->pc == 0x1CCB68u) {
        ctx->pc = 0x1CCB6Cu;
        goto label_1ccb6c;
    }
    ctx->pc = 0x1CCB64u;
    SET_GPR_U32(ctx, 31, 0x1CCB6Cu);
    ctx->pc = 0x152A90u;
    if (runtime->hasFunction(0x152A90u)) {
        auto targetFn = runtime->lookupFunction(0x152A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB6Cu; }
        if (ctx->pc != 0x1CCB6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__6ClsMesFv_0x152a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB6Cu; }
        if (ctx->pc != 0x1CCB6Cu) { return; }
    }
    ctx->pc = 0x1CCB6Cu;
label_1ccb6c:
    // 0x1ccb6c: 0xaf828dc0  sw          $v0, -0x7240($gp)
    ctx->pc = 0x1ccb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938048), GPR_U32(ctx, 2));
label_1ccb70:
    // 0x1ccb70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ccb70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ccb74:
    // 0x1ccb74: 0xc054bb4  jal         func_152ED0
label_1ccb78:
    if (ctx->pc == 0x1CCB78u) {
        ctx->pc = 0x1CCB78u;
            // 0x1ccb78: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1CCB7Cu;
        goto label_1ccb7c;
    }
    ctx->pc = 0x1CCB74u;
    SET_GPR_U32(ctx, 31, 0x1CCB7Cu);
    ctx->pc = 0x1CCB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCB74u;
            // 0x1ccb78: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152ED0u;
    if (runtime->hasFunction(0x152ED0u)) {
        auto targetFn = runtime->lookupFunction(0x152ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB7Cu; }
        if (ctx->pc != 0x1CCB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset__6ClsMesFi_0x152ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB7Cu; }
        if (ctx->pc != 0x1CCB7Cu) { return; }
    }
    ctx->pc = 0x1CCB7Cu;
label_1ccb7c:
    // 0x1ccb7c: 0x8f848dc0  lw          $a0, -0x7240($gp)
    ctx->pc = 0x1ccb7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938048)));
label_1ccb80:
    // 0x1ccb80: 0xc054cdc  jal         func_153370
label_1ccb84:
    if (ctx->pc == 0x1CCB84u) {
        ctx->pc = 0x1CCB84u;
            // 0x1ccb84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CCB88u;
        goto label_1ccb88;
    }
    ctx->pc = 0x1CCB80u;
    SET_GPR_U32(ctx, 31, 0x1CCB88u);
    ctx->pc = 0x1CCB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCB80u;
            // 0x1ccb84: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153370u;
    if (runtime->hasFunction(0x153370u)) {
        auto targetFn = runtime->lookupFunction(0x153370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB88u; }
        if (ctx->pc != 0x1CCB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWindowMode__6ClsMesFi_0x153370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCB88u; }
        if (ctx->pc != 0x1CCB88u) { return; }
    }
    ctx->pc = 0x1CCB88u;
label_1ccb88:
    // 0x1ccb88: 0x8f828dc0  lw          $v0, -0x7240($gp)
    ctx->pc = 0x1ccb88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938048)));
label_1ccb8c:
    // 0x1ccb8c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1ccb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ccb90:
    // 0x1ccb90: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1ccb90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1ccb94:
    // 0x1ccb94: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x1ccb94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_1ccb98:
    // 0x1ccb98: 0x24840300  addiu       $a0, $a0, 0x300
    ctx->pc = 0x1ccb98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
label_1ccb9c:
    // 0x1ccb9c: 0xac4500c0  sw          $a1, 0xC0($v0)
    ctx->pc = 0x1ccb9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 5));
label_1ccba0:
    // 0x1ccba0: 0x8f828dc0  lw          $v0, -0x7240($gp)
    ctx->pc = 0x1ccba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938048)));
label_1ccba4:
    // 0x1ccba4: 0xac4017f4  sw          $zero, 0x17F4($v0)
    ctx->pc = 0x1ccba4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6132), GPR_U32(ctx, 0));
label_1ccba8:
    // 0x1ccba8: 0x8f828dc0  lw          $v0, -0x7240($gp)
    ctx->pc = 0x1ccba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938048)));
label_1ccbac:
    // 0x1ccbac: 0xac4001bc  sw          $zero, 0x1BC($v0)
    ctx->pc = 0x1ccbacu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 444), GPR_U32(ctx, 0));
label_1ccbb0:
    // 0x1ccbb0: 0x8f828dc0  lw          $v0, -0x7240($gp)
    ctx->pc = 0x1ccbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938048)));
label_1ccbb4:
    // 0x1ccbb4: 0xc0a2d7c  jal         func_28B5F0
label_1ccbb8:
    if (ctx->pc == 0x1CCBB8u) {
        ctx->pc = 0x1CCBB8u;
            // 0x1ccbb8: 0xac431b2c  sw          $v1, 0x1B2C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 6956), GPR_U32(ctx, 3));
        ctx->pc = 0x1CCBBCu;
        goto label_1ccbbc;
    }
    ctx->pc = 0x1CCBB4u;
    SET_GPR_U32(ctx, 31, 0x1CCBBCu);
    ctx->pc = 0x1CCBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCBB4u;
            // 0x1ccbb8: 0xac431b2c  sw          $v1, 0x1B2C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 6956), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B5F0u;
    if (runtime->hasFunction(0x28B5F0u)) {
        auto targetFn = runtime->lookupFunction(0x28B5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCBBCu; }
        if (ctx->pc != 0x1CCBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__20CStartupEpisodeTitleFv_0x28b5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCBBCu; }
        if (ctx->pc != 0x1CCBBCu) { return; }
    }
    ctx->pc = 0x1CCBBCu;
label_1ccbbc:
    // 0x1ccbbc: 0x8f828dc0  lw          $v0, -0x7240($gp)
    ctx->pc = 0x1ccbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938048)));
label_1ccbc0:
    // 0x1ccbc0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ccbc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ccbc4:
    // 0x1ccbc4: 0x8f848d70  lw          $a0, -0x7290($gp)
    ctx->pc = 0x1ccbc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
label_1ccbc8:
    // 0x1ccbc8: 0x24050220  addiu       $a1, $zero, 0x220
    ctx->pc = 0x1ccbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
label_1ccbcc:
    // 0x1ccbcc: 0xc04e748  jal         func_139D20
label_1ccbd0:
    if (ctx->pc == 0x1CCBD0u) {
        ctx->pc = 0x1CCBD0u;
            // 0x1ccbd0: 0xac220314  sw          $v0, 0x314($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 788), GPR_U32(ctx, 2));
        ctx->pc = 0x1CCBD4u;
        goto label_1ccbd4;
    }
    ctx->pc = 0x1CCBCCu;
    SET_GPR_U32(ctx, 31, 0x1CCBD4u);
    ctx->pc = 0x1CCBD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCBCCu;
            // 0x1ccbd0: 0xac220314  sw          $v0, 0x314($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 788), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCBD4u; }
        if (ctx->pc != 0x1CCBD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCBD4u; }
        if (ctx->pc != 0x1CCBD4u) { return; }
    }
    ctx->pc = 0x1CCBD4u;
label_1ccbd4:
    // 0x1ccbd4: 0x240421e0  addiu       $a0, $zero, 0x21E0
    ctx->pc = 0x1ccbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8672));
label_1ccbd8:
    // 0x1ccbd8: 0xc04e638  jal         func_1398E0
label_1ccbdc:
    if (ctx->pc == 0x1CCBDCu) {
        ctx->pc = 0x1CCBDCu;
            // 0x1ccbdc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CCBE0u;
        goto label_1ccbe0;
    }
    ctx->pc = 0x1CCBD8u;
    SET_GPR_U32(ctx, 31, 0x1CCBE0u);
    ctx->pc = 0x1CCBDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCBD8u;
            // 0x1ccbdc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCBE0u; }
        if (ctx->pc != 0x1CCBE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCBE0u; }
        if (ctx->pc != 0x1CCBE0u) { return; }
    }
    ctx->pc = 0x1CCBE0u;
label_1ccbe0:
    // 0x1ccbe0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1ccbe4:
    if (ctx->pc == 0x1CCBE4u) {
        ctx->pc = 0x1CCBE4u;
            // 0x1ccbe4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CCBE8u;
        goto label_1ccbe8;
    }
    ctx->pc = 0x1CCBE0u;
    {
        const bool branch_taken_0x1ccbe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCBE0u;
            // 0x1ccbe4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccbe0) {
            ctx->pc = 0x1CCBF0u;
            goto label_1ccbf0;
        }
    }
    ctx->pc = 0x1CCBE8u;
label_1ccbe8:
    // 0x1ccbe8: 0xc054aa4  jal         func_152A90
label_1ccbec:
    if (ctx->pc == 0x1CCBECu) {
        ctx->pc = 0x1CCBF0u;
        goto label_1ccbf0;
    }
    ctx->pc = 0x1CCBE8u;
    SET_GPR_U32(ctx, 31, 0x1CCBF0u);
    ctx->pc = 0x152A90u;
    if (runtime->hasFunction(0x152A90u)) {
        auto targetFn = runtime->lookupFunction(0x152A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCBF0u; }
        if (ctx->pc != 0x1CCBF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__6ClsMesFv_0x152a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCBF0u; }
        if (ctx->pc != 0x1CCBF0u) { return; }
    }
    ctx->pc = 0x1CCBF0u;
label_1ccbf0:
    // 0x1ccbf0: 0xaf828dc4  sw          $v0, -0x723C($gp)
    ctx->pc = 0x1ccbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938052), GPR_U32(ctx, 2));
label_1ccbf4:
    // 0x1ccbf4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ccbf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ccbf8:
    // 0x1ccbf8: 0xc054bb4  jal         func_152ED0
label_1ccbfc:
    if (ctx->pc == 0x1CCBFCu) {
        ctx->pc = 0x1CCBFCu;
            // 0x1ccbfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CCC00u;
        goto label_1ccc00;
    }
    ctx->pc = 0x1CCBF8u;
    SET_GPR_U32(ctx, 31, 0x1CCC00u);
    ctx->pc = 0x1CCBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCBF8u;
            // 0x1ccbfc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152ED0u;
    if (runtime->hasFunction(0x152ED0u)) {
        auto targetFn = runtime->lookupFunction(0x152ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC00u; }
        if (ctx->pc != 0x1CCC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset__6ClsMesFi_0x152ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC00u; }
        if (ctx->pc != 0x1CCC00u) { return; }
    }
    ctx->pc = 0x1CCC00u;
label_1ccc00:
    // 0x1ccc00: 0xc065a18  jal         func_196860
label_1ccc04:
    if (ctx->pc == 0x1CCC04u) {
        ctx->pc = 0x1CCC08u;
        goto label_1ccc08;
    }
    ctx->pc = 0x1CCC00u;
    SET_GPR_U32(ctx, 31, 0x1CCC08u);
    ctx->pc = 0x196860u;
    if (runtime->hasFunction(0x196860u)) {
        auto targetFn = runtime->lookupFunction(0x196860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC08u; }
        if (ctx->pc != 0x1CCC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMesBuffer__Fv_0x196860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC08u; }
        if (ctx->pc != 0x1CCC08u) { return; }
    }
    ctx->pc = 0x1CCC08u;
label_1ccc08:
    // 0x1ccc08: 0x8f848dc4  lw          $a0, -0x723C($gp)
    ctx->pc = 0x1ccc08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938052)));
label_1ccc0c:
    // 0x1ccc0c: 0xc054bac  jal         func_152EB0
label_1ccc10:
    if (ctx->pc == 0x1CCC10u) {
        ctx->pc = 0x1CCC10u;
            // 0x1ccc10: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CCC14u;
        goto label_1ccc14;
    }
    ctx->pc = 0x1CCC0Cu;
    SET_GPR_U32(ctx, 31, 0x1CCC14u);
    ctx->pc = 0x1CCC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCC0Cu;
            // 0x1ccc10: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EB0u;
    if (runtime->hasFunction(0x152EB0u)) {
        auto targetFn = runtime->lookupFunction(0x152EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC14u; }
        if (ctx->pc != 0x1CCC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff_system__6ClsMesFPs_0x152eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC14u; }
        if (ctx->pc != 0x1CCC14u) { return; }
    }
    ctx->pc = 0x1CCC14u;
label_1ccc14:
    // 0x1ccc14: 0x8f828dc4  lw          $v0, -0x723C($gp)
    ctx->pc = 0x1ccc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938052)));
label_1ccc18:
    // 0x1ccc18: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x1ccc18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_1ccc1c:
    // 0x1ccc1c: 0xac431b2c  sw          $v1, 0x1B2C($v0)
    ctx->pc = 0x1ccc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6956), GPR_U32(ctx, 3));
label_1ccc20:
    // 0x1ccc20: 0xc04e780  jal         func_139E00
label_1ccc24:
    if (ctx->pc == 0x1CCC24u) {
        ctx->pc = 0x1CCC24u;
            // 0x1ccc24: 0x8f848d70  lw          $a0, -0x7290($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
        ctx->pc = 0x1CCC28u;
        goto label_1ccc28;
    }
    ctx->pc = 0x1CCC20u;
    SET_GPR_U32(ctx, 31, 0x1CCC28u);
    ctx->pc = 0x1CCC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCC20u;
            // 0x1ccc24: 0x8f848d70  lw          $a0, -0x7290($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC28u; }
        if (ctx->pc != 0x1CCC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC28u; }
        if (ctx->pc != 0x1CCC28u) { return; }
    }
    ctx->pc = 0x1CCC28u;
label_1ccc28:
    // 0x1ccc28: 0x8f828d70  lw          $v0, -0x7290($gp)
    ctx->pc = 0x1ccc28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
label_1ccc2c:
    // 0x1ccc2c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1ccc2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1ccc30:
    // 0x1ccc30: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x1ccc30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
label_1ccc34:
    // 0x1ccc34: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1ccc34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1ccc38:
    // 0x1ccc38: 0x24a56df0  addiu       $a1, $a1, 0x6DF0
    ctx->pc = 0x1ccc38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28144));
label_1ccc3c:
    // 0x1ccc3c: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x1ccc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1ccc40:
    // 0x1ccc40: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x1ccc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_1ccc44:
    // 0x1ccc44: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1ccc44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1ccc48:
    // 0x1ccc48: 0xc04a234  jal         func_1288D0
label_1ccc4c:
    if (ctx->pc == 0x1CCC4Cu) {
        ctx->pc = 0x1CCC4Cu;
            // 0x1ccc4c: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1CCC50u;
        goto label_1ccc50;
    }
    ctx->pc = 0x1CCC48u;
    SET_GPR_U32(ctx, 31, 0x1CCC50u);
    ctx->pc = 0x1CCC4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCC48u;
            // 0x1ccc4c: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC50u; }
        if (ctx->pc != 0x1CCC50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC50u; }
        if (ctx->pc != 0x1CCC50u) { return; }
    }
    ctx->pc = 0x1CCC50u;
label_1ccc50:
    // 0x1ccc50: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1ccc50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1ccc54:
    // 0x1ccc54: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1ccc54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ccc58:
    // 0x1ccc58: 0xc0524c8  jal         func_149320
label_1ccc5c:
    if (ctx->pc == 0x1CCC5Cu) {
        ctx->pc = 0x1CCC5Cu;
            // 0x1ccc5c: 0x27a602b8  addiu       $a2, $sp, 0x2B8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 696));
        ctx->pc = 0x1CCC60u;
        goto label_1ccc60;
    }
    ctx->pc = 0x1CCC58u;
    SET_GPR_U32(ctx, 31, 0x1CCC60u);
    ctx->pc = 0x1CCC5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCC58u;
            // 0x1ccc5c: 0x27a602b8  addiu       $a2, $sp, 0x2B8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC60u; }
        if (ctx->pc != 0x1CCC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC60u; }
        if (ctx->pc != 0x1CCC60u) { return; }
    }
    ctx->pc = 0x1CCC60u;
label_1ccc60:
    // 0x1ccc60: 0x8f848dc4  lw          $a0, -0x723C($gp)
    ctx->pc = 0x1ccc60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938052)));
label_1ccc64:
    // 0x1ccc64: 0xc054ba8  jal         func_152EA0
label_1ccc68:
    if (ctx->pc == 0x1CCC68u) {
        ctx->pc = 0x1CCC68u;
            // 0x1ccc68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CCC6Cu;
        goto label_1ccc6c;
    }
    ctx->pc = 0x1CCC64u;
    SET_GPR_U32(ctx, 31, 0x1CCC6Cu);
    ctx->pc = 0x1CCC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCC64u;
            // 0x1ccc68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EA0u;
    if (runtime->hasFunction(0x152EA0u)) {
        auto targetFn = runtime->lookupFunction(0x152EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC6Cu; }
        if (ctx->pc != 0x1CCC6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetBuff__6ClsMesFPs_0x152ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCC6Cu; }
        if (ctx->pc != 0x1CCC6Cu) { return; }
    }
    ctx->pc = 0x1CCC6Cu;
label_1ccc6c:
    // 0x1ccc6c: 0x8fa302b8  lw          $v1, 0x2B8($sp)
    ctx->pc = 0x1ccc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
label_1ccc70:
    // 0x1ccc70: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1ccc74:
    if (ctx->pc == 0x1CCC74u) {
        ctx->pc = 0x1CCC74u;
            // 0x1ccc74: 0x31183  sra         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
        ctx->pc = 0x1CCC78u;
        goto label_1ccc78;
    }
    ctx->pc = 0x1CCC70u;
    {
        const bool branch_taken_0x1ccc70 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1CCC74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCC70u;
            // 0x1ccc74: 0x31183  sra         $v0, $v1, 6 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccc70) {
            ctx->pc = 0x1CCC80u;
            goto label_1ccc80;
        }
    }
    ctx->pc = 0x1CCC78u;
label_1ccc78:
    // 0x1ccc78: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x1ccc78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
label_1ccc7c:
    // 0x1ccc7c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x1ccc7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_1ccc80:
    // 0x1ccc80: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1ccc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1ccc84:
    // 0x1ccc84: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x1ccc84u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_1ccc88:
    // 0x1ccc88: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1ccc8c:
    if (ctx->pc == 0x1CCC8Cu) {
        ctx->pc = 0x1CCC8Cu;
            // 0x1ccc8c: 0x22903  sra         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
        ctx->pc = 0x1CCC90u;
        goto label_1ccc90;
    }
    ctx->pc = 0x1CCC88u;
    {
        const bool branch_taken_0x1ccc88 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1CCC8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCC88u;
            // 0x1ccc8c: 0x22903  sra         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ccc88) {
            ctx->pc = 0x1CCC98u;
            goto label_1ccc98;
        }
    }
    ctx->pc = 0x1CCC90u;
label_1ccc90:
    // 0x1ccc90: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1ccc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_1ccc94:
    // 0x1ccc94: 0x22903  sra         $a1, $v0, 4
    ctx->pc = 0x1ccc94u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 4));
label_1ccc98:
    // 0x1ccc98: 0xc04e704  jal         func_139C10
label_1ccc9c:
    if (ctx->pc == 0x1CCC9Cu) {
        ctx->pc = 0x1CCC9Cu;
            // 0x1ccc9c: 0x8f848d70  lw          $a0, -0x7290($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
        ctx->pc = 0x1CCCA0u;
        goto label_1ccca0;
    }
    ctx->pc = 0x1CCC98u;
    SET_GPR_U32(ctx, 31, 0x1CCCA0u);
    ctx->pc = 0x1CCC9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCC98u;
            // 0x1ccc9c: 0x8f848d70  lw          $a0, -0x7290($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCCA0u; }
        if (ctx->pc != 0x1CCCA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCCA0u; }
        if (ctx->pc != 0x1CCCA0u) { return; }
    }
    ctx->pc = 0x1CCCA0u;
label_1ccca0:
    // 0x1ccca0: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1ccca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1ccca4:
    // 0x1ccca4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ccca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ccca8:
    // 0x1ccca8: 0x8f868dc4  lw          $a2, -0x723C($gp)
    ctx->pc = 0x1ccca8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938052)));
label_1cccac:
    // 0x1cccac: 0xc0a0e44  jal         func_283910
label_1cccb0:
    if (ctx->pc == 0x1CCCB0u) {
        ctx->pc = 0x1CCCB0u;
            // 0x1cccb0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CCCB4u;
        goto label_1cccb4;
    }
    ctx->pc = 0x1CCCACu;
    SET_GPR_U32(ctx, 31, 0x1CCCB4u);
    ctx->pc = 0x1CCCB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCCACu;
            // 0x1cccb0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283910u;
    if (runtime->hasFunction(0x283910u)) {
        auto targetFn = runtime->lookupFunction(0x283910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCCB4u; }
        if (ctx->pc != 0x1CCCB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignMessage__6CSceneFiP6ClsMesPc_0x283910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCCB4u; }
        if (ctx->pc != 0x1CCCB4u) { return; }
    }
    ctx->pc = 0x1CCCB4u;
label_1cccb4:
    // 0x1cccb4: 0xc0659dc  jal         func_196770
label_1cccb8:
    if (ctx->pc == 0x1CCCB8u) {
        ctx->pc = 0x1CCCB8u;
            // 0x1cccb8: 0x24100058  addiu       $s0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->pc = 0x1CCCBCu;
        goto label_1cccbc;
    }
    ctx->pc = 0x1CCCB4u;
    SET_GPR_U32(ctx, 31, 0x1CCCBCu);
    ctx->pc = 0x1CCCB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCCB4u;
            // 0x1cccb8: 0x24100058  addiu       $s0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196770u;
    if (runtime->hasFunction(0x196770u)) {
        auto targetFn = runtime->lookupFunction(0x196770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCCBCu; }
        if (ctx->pc != 0x1CCCBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMessage__Fv_0x196770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCCBCu; }
        if (ctx->pc != 0x1CCCBCu) { return; }
    }
    ctx->pc = 0x1CCCBCu;
label_1cccbc:
    // 0x1cccbc: 0xc0659dc  jal         func_196770
label_1cccc0:
    if (ctx->pc == 0x1CCCC0u) {
        ctx->pc = 0x1CCCC0u;
            // 0x1cccc0: 0xac501b2c  sw          $s0, 0x1B2C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 6956), GPR_U32(ctx, 16));
        ctx->pc = 0x1CCCC4u;
        goto label_1cccc4;
    }
    ctx->pc = 0x1CCCBCu;
    SET_GPR_U32(ctx, 31, 0x1CCCC4u);
    ctx->pc = 0x1CCCC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCCBCu;
            // 0x1cccc0: 0xac501b2c  sw          $s0, 0x1B2C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 6956), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196770u;
    if (runtime->hasFunction(0x196770u)) {
        auto targetFn = runtime->lookupFunction(0x196770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCCC4u; }
        if (ctx->pc != 0x1CCCC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMessage__Fv_0x196770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCCC4u; }
        if (ctx->pc != 0x1CCCC4u) { return; }
    }
    ctx->pc = 0x1CCCC4u;
label_1cccc4:
    // 0x1cccc4: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cccc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cccc8:
    // 0x1cccc8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1cccc8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ccccc:
    // 0x1ccccc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cccccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cccd0:
    // 0x1cccd0: 0xc0a0e44  jal         func_283910
label_1cccd4:
    if (ctx->pc == 0x1CCCD4u) {
        ctx->pc = 0x1CCCD4u;
            // 0x1cccd4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CCCD8u;
        goto label_1cccd8;
    }
    ctx->pc = 0x1CCCD0u;
    SET_GPR_U32(ctx, 31, 0x1CCCD8u);
    ctx->pc = 0x1CCCD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCCD0u;
            // 0x1cccd4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283910u;
    if (runtime->hasFunction(0x283910u)) {
        auto targetFn = runtime->lookupFunction(0x283910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCCD8u; }
        if (ctx->pc != 0x1CCCD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignMessage__6CSceneFiP6ClsMesPc_0x283910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCCD8u; }
        if (ctx->pc != 0x1CCCD8u) { return; }
    }
    ctx->pc = 0x1CCCD8u;
label_1cccd8:
    // 0x1cccd8: 0x8f848d70  lw          $a0, -0x7290($gp)
    ctx->pc = 0x1cccd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
label_1cccdc:
    // 0x1cccdc: 0xc04e748  jal         func_139D20
label_1ccce0:
    if (ctx->pc == 0x1CCCE0u) {
        ctx->pc = 0x1CCCE0u;
            // 0x1ccce0: 0x24050220  addiu       $a1, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->pc = 0x1CCCE4u;
        goto label_1ccce4;
    }
    ctx->pc = 0x1CCCDCu;
    SET_GPR_U32(ctx, 31, 0x1CCCE4u);
    ctx->pc = 0x1CCCE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCCDCu;
            // 0x1ccce0: 0x24050220  addiu       $a1, $zero, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCCE4u; }
        if (ctx->pc != 0x1CCCE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCCE4u; }
        if (ctx->pc != 0x1CCCE4u) { return; }
    }
    ctx->pc = 0x1CCCE4u;
label_1ccce4:
    // 0x1ccce4: 0x240421e0  addiu       $a0, $zero, 0x21E0
    ctx->pc = 0x1ccce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8672));
label_1ccce8:
    // 0x1ccce8: 0xc04e638  jal         func_1398E0
label_1cccec:
    if (ctx->pc == 0x1CCCECu) {
        ctx->pc = 0x1CCCECu;
            // 0x1cccec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CCCF0u;
        goto label_1cccf0;
    }
    ctx->pc = 0x1CCCE8u;
    SET_GPR_U32(ctx, 31, 0x1CCCF0u);
    ctx->pc = 0x1CCCECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCCE8u;
            // 0x1cccec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCCF0u; }
        if (ctx->pc != 0x1CCCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCCF0u; }
        if (ctx->pc != 0x1CCCF0u) { return; }
    }
    ctx->pc = 0x1CCCF0u;
label_1cccf0:
    // 0x1cccf0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1cccf4:
    if (ctx->pc == 0x1CCCF4u) {
        ctx->pc = 0x1CCCF4u;
            // 0x1cccf4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CCCF8u;
        goto label_1cccf8;
    }
    ctx->pc = 0x1CCCF0u;
    {
        const bool branch_taken_0x1cccf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCCF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCCF0u;
            // 0x1cccf4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cccf0) {
            ctx->pc = 0x1CCD00u;
            goto label_1ccd00;
        }
    }
    ctx->pc = 0x1CCCF8u;
label_1cccf8:
    // 0x1cccf8: 0xc054aa4  jal         func_152A90
label_1cccfc:
    if (ctx->pc == 0x1CCCFCu) {
        ctx->pc = 0x1CCD00u;
        goto label_1ccd00;
    }
    ctx->pc = 0x1CCCF8u;
    SET_GPR_U32(ctx, 31, 0x1CCD00u);
    ctx->pc = 0x152A90u;
    if (runtime->hasFunction(0x152A90u)) {
        auto targetFn = runtime->lookupFunction(0x152A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCD00u; }
        if (ctx->pc != 0x1CCD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__6ClsMesFv_0x152a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCD00u; }
        if (ctx->pc != 0x1CCD00u) { return; }
    }
    ctx->pc = 0x1CCD00u;
label_1ccd00:
    // 0x1ccd00: 0xaf828dc8  sw          $v0, -0x7238($gp)
    ctx->pc = 0x1ccd00u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938056), GPR_U32(ctx, 2));
label_1ccd04:
    // 0x1ccd04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ccd04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ccd08:
    // 0x1ccd08: 0xc054bb4  jal         func_152ED0
label_1ccd0c:
    if (ctx->pc == 0x1CCD0Cu) {
        ctx->pc = 0x1CCD0Cu;
            // 0x1ccd0c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1CCD10u;
        goto label_1ccd10;
    }
    ctx->pc = 0x1CCD08u;
    SET_GPR_U32(ctx, 31, 0x1CCD10u);
    ctx->pc = 0x1CCD0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCD08u;
            // 0x1ccd0c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152ED0u;
    if (runtime->hasFunction(0x152ED0u)) {
        auto targetFn = runtime->lookupFunction(0x152ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCD10u; }
        if (ctx->pc != 0x1CCD10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset__6ClsMesFi_0x152ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCD10u; }
        if (ctx->pc != 0x1CCD10u) { return; }
    }
    ctx->pc = 0x1CCD10u;
label_1ccd10:
    // 0x1ccd10: 0x8f828dc8  lw          $v0, -0x7238($gp)
    ctx->pc = 0x1ccd10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938056)));
label_1ccd14:
    // 0x1ccd14: 0x24030058  addiu       $v1, $zero, 0x58
    ctx->pc = 0x1ccd14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_1ccd18:
    // 0x1ccd18: 0xc0c2678  jal         func_3099E0
label_1ccd1c:
    if (ctx->pc == 0x1CCD1Cu) {
        ctx->pc = 0x1CCD1Cu;
            // 0x1ccd1c: 0xac431b2c  sw          $v1, 0x1B2C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 6956), GPR_U32(ctx, 3));
        ctx->pc = 0x1CCD20u;
        goto label_1ccd20;
    }
    ctx->pc = 0x1CCD18u;
    SET_GPR_U32(ctx, 31, 0x1CCD20u);
    ctx->pc = 0x1CCD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCD18u;
            // 0x1ccd1c: 0xac431b2c  sw          $v1, 0x1B2C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 6956), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3099E0u;
    if (runtime->hasFunction(0x3099E0u)) {
        auto targetFn = runtime->lookupFunction(0x3099E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCD20u; }
        if (ctx->pc != 0x1CCD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowLoadingBarStep__Fv_0x3099e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCD20u; }
        if (ctx->pc != 0x1CCD20u) { return; }
    }
    ctx->pc = 0x1CCD20u;
label_1ccd20:
    // 0x1ccd20: 0x8f848d70  lw          $a0, -0x7290($gp)
    ctx->pc = 0x1ccd20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
label_1ccd24:
    // 0x1ccd24: 0x3c150038  lui         $s5, 0x38
    ctx->pc = 0x1ccd24u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)56 << 16));
label_1ccd28:
    // 0x1ccd28: 0x8f858dac  lw          $a1, -0x7254($gp)
    ctx->pc = 0x1ccd28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1ccd2c:
    // 0x1ccd2c: 0xc07a084  jal         func_1E8210
label_1ccd30:
    if (ctx->pc == 0x1CCD30u) {
        ctx->pc = 0x1CCD30u;
            // 0x1ccd30: 0x26b51ef0  addiu       $s5, $s5, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 7920));
        ctx->pc = 0x1CCD34u;
        goto label_1ccd34;
    }
    ctx->pc = 0x1CCD2Cu;
    SET_GPR_U32(ctx, 31, 0x1CCD34u);
    ctx->pc = 0x1CCD30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCD2Cu;
            // 0x1ccd30: 0x26b51ef0  addiu       $s5, $s5, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8210u;
    if (runtime->hasFunction(0x1E8210u)) {
        auto targetFn = runtime->lookupFunction(0x1E8210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCD34u; }
        if (ctx->pc != 0x1CCD34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MainTextureInterface__FP9mgCMemoryP6CScene_0x1e8210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCD34u; }
        if (ctx->pc != 0x1CCD34u) { return; }
    }
    ctx->pc = 0x1CCD34u;
label_1ccd34:
    // 0x1ccd34: 0xc0c2678  jal         func_3099E0
label_1ccd38:
    if (ctx->pc == 0x1CCD38u) {
        ctx->pc = 0x1CCD3Cu;
        goto label_1ccd3c;
    }
    ctx->pc = 0x1CCD34u;
    SET_GPR_U32(ctx, 31, 0x1CCD3Cu);
    ctx->pc = 0x3099E0u;
    if (runtime->hasFunction(0x3099E0u)) {
        auto targetFn = runtime->lookupFunction(0x3099E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCD3Cu; }
        if (ctx->pc != 0x1CCD3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowLoadingBarStep__Fv_0x3099e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCD3Cu; }
        if (ctx->pc != 0x1CCD3Cu) { return; }
    }
    ctx->pc = 0x1CCD3Cu;
label_1ccd3c:
    // 0x1ccd3c: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x1ccd3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
label_1ccd40:
    // 0x1ccd40: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1ccd40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1ccd44:
    // 0x1ccd44: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1ccd44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1ccd48:
    // 0x1ccd48: 0xc04a234  jal         func_1288D0
label_1ccd4c:
    if (ctx->pc == 0x1CCD4Cu) {
        ctx->pc = 0x1CCD4Cu;
            // 0x1ccd4c: 0x24a56e10  addiu       $a1, $a1, 0x6E10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28176));
        ctx->pc = 0x1CCD50u;
        goto label_1ccd50;
    }
    ctx->pc = 0x1CCD48u;
    SET_GPR_U32(ctx, 31, 0x1CCD50u);
    ctx->pc = 0x1CCD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCD48u;
            // 0x1ccd4c: 0x24a56e10  addiu       $a1, $a1, 0x6E10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCD50u; }
        if (ctx->pc != 0x1CCD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCD50u; }
        if (ctx->pc != 0x1CCD50u) { return; }
    }
    ctx->pc = 0x1CCD50u;
label_1ccd50:
    // 0x1ccd50: 0x8f858d74  lw          $a1, -0x728C($gp)
    ctx->pc = 0x1ccd50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_1ccd54:
    // 0x1ccd54: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1ccd54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1ccd58:
    // 0x1ccd58: 0xc0524c8  jal         func_149320
label_1ccd5c:
    if (ctx->pc == 0x1CCD5Cu) {
        ctx->pc = 0x1CCD5Cu;
            // 0x1ccd5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CCD60u;
        goto label_1ccd60;
    }
    ctx->pc = 0x1CCD58u;
    SET_GPR_U32(ctx, 31, 0x1CCD60u);
    ctx->pc = 0x1CCD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCD58u;
            // 0x1ccd5c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCD60u; }
        if (ctx->pc != 0x1CCD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCD60u; }
        if (ctx->pc != 0x1CCD60u) { return; }
    }
    ctx->pc = 0x1CCD60u;
label_1ccd60:
    // 0x1ccd60: 0x8f828dac  lw          $v0, -0x7254($gp)
    ctx->pc = 0x1ccd60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1ccd64:
    // 0x1ccd64: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ccd64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ccd68:
    // 0x1ccd68: 0x8f848d74  lw          $a0, -0x728C($gp)
    ctx->pc = 0x1ccd68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_1ccd6c:
    // 0x1ccd6c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1ccd6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1ccd70:
    // 0x1ccd70: 0xac20043c  sw          $zero, 0x43C($at)
    ctx->pc = 0x1ccd70u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1084), GPR_U32(ctx, 0));
label_1ccd74:
    // 0x1ccd74: 0x24a56e30  addiu       $a1, $a1, 0x6E30
    ctx->pc = 0x1ccd74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28208));
label_1ccd78:
    // 0x1ccd78: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ccd78u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ccd7c:
    // 0x1ccd7c: 0x27a602bc  addiu       $a2, $sp, 0x2BC
    ctx->pc = 0x1ccd7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 700));
label_1ccd80:
    // 0x1ccd80: 0xc052734  jal         func_149CD0
label_1ccd84:
    if (ctx->pc == 0x1CCD84u) {
        ctx->pc = 0x1CCD84u;
            // 0x1ccd84: 0xac220430  sw          $v0, 0x430($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 1072), GPR_U32(ctx, 2));
        ctx->pc = 0x1CCD88u;
        goto label_1ccd88;
    }
    ctx->pc = 0x1CCD80u;
    SET_GPR_U32(ctx, 31, 0x1CCD88u);
    ctx->pc = 0x1CCD84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCD80u;
            // 0x1ccd84: 0xac220430  sw          $v0, 0x430($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 1072), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCD88u; }
        if (ctx->pc != 0x1CCD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCD88u; }
        if (ctx->pc != 0x1CCD88u) { return; }
    }
    ctx->pc = 0x1CCD88u;
label_1ccd88:
    // 0x1ccd88: 0x8f858d70  lw          $a1, -0x7290($gp)
    ctx->pc = 0x1ccd88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
label_1ccd8c:
    // 0x1ccd8c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ccd8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ccd90:
    // 0x1ccd90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ccd90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ccd94:
    // 0x1ccd94: 0xc04cb78  jal         func_132DE0
label_1ccd98:
    if (ctx->pc == 0x1CCD98u) {
        ctx->pc = 0x1CCD98u;
            // 0x1ccd98: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CCD9Cu;
        goto label_1ccd9c;
    }
    ctx->pc = 0x1CCD94u;
    SET_GPR_U32(ctx, 31, 0x1CCD9Cu);
    ctx->pc = 0x1CCD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCD94u;
            // 0x1ccd98: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DE0u;
    if (runtime->hasFunction(0x132DE0u)) {
        auto targetFn = runtime->lookupFunction(0x132DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCD9Cu; }
        if (ctx->pc != 0x1CCD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgLoadMDSFile__FP10MDS_HEADERP9mgCMemoryP18mgCreateVisualTypeP17mgCTextureManager_0x132de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCD9Cu; }
        if (ctx->pc != 0x1CCD9Cu) { return; }
    }
    ctx->pc = 0x1CCD9Cu;
label_1ccd9c:
    // 0x1ccd9c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ccd9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ccda0:
    // 0x1ccda0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ccda0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ccda4:
    // 0x1ccda4: 0xac220420  sw          $v0, 0x420($at)
    ctx->pc = 0x1ccda4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1056), GPR_U32(ctx, 2));
label_1ccda8:
    // 0x1ccda8: 0x3c04437f  lui         $a0, 0x437F
    ctx->pc = 0x1ccda8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17279 << 16));
label_1ccdac:
    // 0x1ccdac: 0x8c4500f4  lw          $a1, 0xF4($v0)
    ctx->pc = 0x1ccdacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 244)));
label_1ccdb0:
    // 0x1ccdb0: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x1ccdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
label_1ccdb4:
    // 0x1ccdb4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ccdb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ccdb8:
    // 0x1ccdb8: 0xaca60060  sw          $a2, 0x60($a1)
    ctx->pc = 0x1ccdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 96), GPR_U32(ctx, 6));
label_1ccdbc:
    // 0x1ccdbc: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1ccdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1ccdc0:
    // 0x1ccdc0: 0xaca40078  sw          $a0, 0x78($a1)
    ctx->pc = 0x1ccdc0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 120), GPR_U32(ctx, 4));
label_1ccdc4:
    // 0x1ccdc4: 0xaca40074  sw          $a0, 0x74($a1)
    ctx->pc = 0x1ccdc4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 116), GPR_U32(ctx, 4));
label_1ccdc8:
    // 0x1ccdc8: 0xaca40070  sw          $a0, 0x70($a1)
    ctx->pc = 0x1ccdc8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 112), GPR_U32(ctx, 4));
label_1ccdcc:
    // 0x1ccdcc: 0xaca3007c  sw          $v1, 0x7C($a1)
    ctx->pc = 0x1ccdccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 124), GPR_U32(ctx, 3));
label_1ccdd0:
    // 0x1ccdd0: 0x8c240420  lw          $a0, 0x420($at)
    ctx->pc = 0x1ccdd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 1056)));
label_1ccdd4:
    // 0x1ccdd4: 0xc04de54  jal         func_137950
label_1ccdd8:
    if (ctx->pc == 0x1CCDD8u) {
        ctx->pc = 0x1CCDD8u;
            // 0x1ccdd8: 0x34478000  ori         $a3, $v0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
        ctx->pc = 0x1CCDDCu;
        goto label_1ccddc;
    }
    ctx->pc = 0x1CCDD4u;
    SET_GPR_U32(ctx, 31, 0x1CCDDCu);
    ctx->pc = 0x1CCDD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCDD4u;
            // 0x1ccdd8: 0x34478000  ori         $a3, $v0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
    ctx->pc = 0x137950u;
    if (runtime->hasFunction(0x137950u)) {
        auto targetFn = runtime->lookupFunction(0x137950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCDDCu; }
        if (ctx->pc != 0x1CCDDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParam__8mgCFrameFR12mgCFrameAttrii_0x137950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCDDCu; }
        if (ctx->pc != 0x1CCDDCu) { return; }
    }
    ctx->pc = 0x1CCDDCu;
label_1ccddc:
    // 0x1ccddc: 0x8f828dc8  lw          $v0, -0x7238($gp)
    ctx->pc = 0x1ccddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938056)));
label_1ccde0:
    // 0x1ccde0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ccde0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ccde4:
    // 0x1ccde4: 0x8f848d70  lw          $a0, -0x7290($gp)
    ctx->pc = 0x1ccde4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
label_1ccde8:
    // 0x1ccde8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x1ccde8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1ccdec:
    // 0x1ccdec: 0xac20043c  sw          $zero, 0x43C($at)
    ctx->pc = 0x1ccdecu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1084), GPR_U32(ctx, 0));
label_1ccdf0:
    // 0x1ccdf0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ccdf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ccdf4:
    // 0x1ccdf4: 0xc04e748  jal         func_139D20
label_1ccdf8:
    if (ctx->pc == 0x1CCDF8u) {
        ctx->pc = 0x1CCDF8u;
            // 0x1ccdf8: 0xac220434  sw          $v0, 0x434($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 1076), GPR_U32(ctx, 2));
        ctx->pc = 0x1CCDFCu;
        goto label_1ccdfc;
    }
    ctx->pc = 0x1CCDF4u;
    SET_GPR_U32(ctx, 31, 0x1CCDFCu);
    ctx->pc = 0x1CCDF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCDF4u;
            // 0x1ccdf8: 0xac220434  sw          $v0, 0x434($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 1076), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCDFCu; }
        if (ctx->pc != 0x1CCDFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCDFCu; }
        if (ctx->pc != 0x1CCDFCu) { return; }
    }
    ctx->pc = 0x1CCDFCu;
label_1ccdfc:
    // 0x1ccdfc: 0x24040090  addiu       $a0, $zero, 0x90
    ctx->pc = 0x1ccdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_1cce00:
    // 0x1cce00: 0xc04e638  jal         func_1398E0
label_1cce04:
    if (ctx->pc == 0x1CCE04u) {
        ctx->pc = 0x1CCE04u;
            // 0x1cce04: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CCE08u;
        goto label_1cce08;
    }
    ctx->pc = 0x1CCE00u;
    SET_GPR_U32(ctx, 31, 0x1CCE08u);
    ctx->pc = 0x1CCE04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCE00u;
            // 0x1cce04: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCE08u; }
        if (ctx->pc != 0x1CCE08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCE08u; }
        if (ctx->pc != 0x1CCE08u) { return; }
    }
    ctx->pc = 0x1CCE08u;
label_1cce08:
    // 0x1cce08: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1cce0c:
    if (ctx->pc == 0x1CCE0Cu) {
        ctx->pc = 0x1CCE0Cu;
            // 0x1cce0c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CCE10u;
        goto label_1cce10;
    }
    ctx->pc = 0x1CCE08u;
    {
        const bool branch_taken_0x1cce08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CCE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCE08u;
            // 0x1cce0c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cce08) {
            ctx->pc = 0x1CCE70u;
            goto label_1cce70;
        }
    }
    ctx->pc = 0x1CCE10u;
label_1cce10:
    // 0x1cce10: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1cce10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1cce14:
    // 0x1cce14: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x1cce14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_1cce18:
    // 0x1cce18: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1cce18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1cce1c:
    // 0x1cce1c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1cce1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cce20:
    // 0x1cce20: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1cce20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1cce24:
    // 0x1cce24: 0x320f809  jalr        $t9
label_1cce28:
    if (ctx->pc == 0x1CCE28u) {
        ctx->pc = 0x1CCE28u;
            // 0x1cce28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CCE2Cu;
        goto label_1cce2c;
    }
    ctx->pc = 0x1CCE24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CCE2Cu);
        ctx->pc = 0x1CCE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCE24u;
            // 0x1cce28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CCE2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CCE2Cu; }
            if (ctx->pc != 0x1CCE2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1CCE2Cu;
label_1cce2c:
    // 0x1cce2c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1cce2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1cce30:
    // 0x1cce30: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x1cce30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_1cce34:
    // 0x1cce34: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1cce34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1cce38:
    // 0x1cce38: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1cce38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cce3c:
    // 0x1cce3c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1cce3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1cce40:
    // 0x1cce40: 0x320f809  jalr        $t9
label_1cce44:
    if (ctx->pc == 0x1CCE44u) {
        ctx->pc = 0x1CCE44u;
            // 0x1cce44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CCE48u;
        goto label_1cce48;
    }
    ctx->pc = 0x1CCE40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CCE48u);
        ctx->pc = 0x1CCE44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCE40u;
            // 0x1cce44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CCE48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CCE48u; }
            if (ctx->pc != 0x1CCE48u) { return; }
        }
        }
    }
    ctx->pc = 0x1CCE48u;
label_1cce48:
    // 0x1cce48: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1cce48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1cce4c:
    // 0x1cce4c: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x1cce4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_1cce50:
    // 0x1cce50: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1cce50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1cce54:
    // 0x1cce54: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1cce54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cce58:
    // 0x1cce58: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1cce58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1cce5c:
    // 0x1cce5c: 0x320f809  jalr        $t9
label_1cce60:
    if (ctx->pc == 0x1CCE60u) {
        ctx->pc = 0x1CCE60u;
            // 0x1cce60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CCE64u;
        goto label_1cce64;
    }
    ctx->pc = 0x1CCE5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CCE64u);
        ctx->pc = 0x1CCE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCE5Cu;
            // 0x1cce60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CCE64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CCE64u; }
            if (ctx->pc != 0x1CCE64u) { return; }
        }
        }
    }
    ctx->pc = 0x1CCE64u;
label_1cce64:
    // 0x1cce64: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1cce64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1cce68:
    // 0x1cce68: 0x24426140  addiu       $v0, $v0, 0x6140
    ctx->pc = 0x1cce68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24896));
label_1cce6c:
    // 0x1cce6c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1cce6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1cce70:
    // 0x1cce70: 0xaf908dcc  sw          $s0, -0x7234($gp)
    ctx->pc = 0x1cce70u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938060), GPR_U32(ctx, 16));
label_1cce74:
    // 0x1cce74: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1cce74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cce78:
    // 0x1cce78: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1cce78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1cce7c:
    // 0x1cce7c: 0x320f809  jalr        $t9
label_1cce80:
    if (ctx->pc == 0x1CCE80u) {
        ctx->pc = 0x1CCE80u;
            // 0x1cce80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CCE84u;
        goto label_1cce84;
    }
    ctx->pc = 0x1CCE7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CCE84u);
        ctx->pc = 0x1CCE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCE7Cu;
            // 0x1cce80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CCE84u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CCE84u; }
            if (ctx->pc != 0x1CCE84u) { return; }
        }
        }
    }
    ctx->pc = 0x1CCE84u;
label_1cce84:
    // 0x1cce84: 0x8f848d74  lw          $a0, -0x728C($gp)
    ctx->pc = 0x1cce84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_1cce88:
    // 0x1cce88: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cce88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1cce8c:
    // 0x1cce8c: 0x24a56e40  addiu       $a1, $a1, 0x6E40
    ctx->pc = 0x1cce8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28224));
label_1cce90:
    // 0x1cce90: 0xc052734  jal         func_149CD0
label_1cce94:
    if (ctx->pc == 0x1CCE94u) {
        ctx->pc = 0x1CCE94u;
            // 0x1cce94: 0x27a602bc  addiu       $a2, $sp, 0x2BC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 700));
        ctx->pc = 0x1CCE98u;
        goto label_1cce98;
    }
    ctx->pc = 0x1CCE90u;
    SET_GPR_U32(ctx, 31, 0x1CCE98u);
    ctx->pc = 0x1CCE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCE90u;
            // 0x1cce94: 0x27a602bc  addiu       $a2, $sp, 0x2BC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 700));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCE98u; }
        if (ctx->pc != 0x1CCE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCE98u; }
        if (ctx->pc != 0x1CCE98u) { return; }
    }
    ctx->pc = 0x1CCE98u;
label_1cce98:
    // 0x1cce98: 0x8f858d70  lw          $a1, -0x7290($gp)
    ctx->pc = 0x1cce98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
label_1cce9c:
    // 0x1cce9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cce9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ccea0:
    // 0x1ccea0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ccea0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ccea4:
    // 0x1ccea4: 0xc04cb78  jal         func_132DE0
label_1ccea8:
    if (ctx->pc == 0x1CCEA8u) {
        ctx->pc = 0x1CCEA8u;
            // 0x1ccea8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CCEACu;
        goto label_1cceac;
    }
    ctx->pc = 0x1CCEA4u;
    SET_GPR_U32(ctx, 31, 0x1CCEACu);
    ctx->pc = 0x1CCEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCEA4u;
            // 0x1ccea8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DE0u;
    if (runtime->hasFunction(0x132DE0u)) {
        auto targetFn = runtime->lookupFunction(0x132DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCEACu; }
        if (ctx->pc != 0x1CCEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgLoadMDSFile__FP10MDS_HEADERP9mgCMemoryP18mgCreateVisualTypeP17mgCTextureManager_0x132de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCEACu; }
        if (ctx->pc != 0x1CCEACu) { return; }
    }
    ctx->pc = 0x1CCEACu;
label_1cceac:
    // 0x1cceac: 0x8f838dcc  lw          $v1, -0x7234($gp)
    ctx->pc = 0x1cceacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938060)));
label_1cceb0:
    // 0x1cceb0: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x1cceb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1cceb4:
    // 0x1cceb4: 0xc04d6d8  jal         func_135B60
label_1cceb8:
    if (ctx->pc == 0x1CCEB8u) {
        ctx->pc = 0x1CCEB8u;
            // 0x1cceb8: 0xac620070  sw          $v0, 0x70($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 2));
        ctx->pc = 0x1CCEBCu;
        goto label_1ccebc;
    }
    ctx->pc = 0x1CCEB4u;
    SET_GPR_U32(ctx, 31, 0x1CCEBCu);
    ctx->pc = 0x1CCEB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCEB4u;
            // 0x1cceb8: 0xac620070  sw          $v0, 0x70($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135B60u;
    if (runtime->hasFunction(0x135B60u)) {
        auto targetFn = runtime->lookupFunction(0x135B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCEBCu; }
        if (ctx->pc != 0x1CCEBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__12mgCFrameAttrFv_0x135b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCEBCu; }
        if (ctx->pc != 0x1CCEBCu) { return; }
    }
    ctx->pc = 0x1CCEBCu;
label_1ccebc:
    // 0x1ccebc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ccebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ccec0:
    // 0x1ccec0: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x1ccec0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_1ccec4:
    // 0x1ccec4: 0xafa201d8  sw          $v0, 0x1D8($sp)
    ctx->pc = 0x1ccec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 2));
label_1ccec8:
    // 0x1ccec8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ccec8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ccecc:
    // 0x1ccecc: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1cceccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_1cced0:
    // 0x1cced0: 0xafa601b0  sw          $a2, 0x1B0($sp)
    ctx->pc = 0x1cced0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 432), GPR_U32(ctx, 6));
label_1cced4:
    // 0x1cced4: 0xafa201cc  sw          $v0, 0x1CC($sp)
    ctx->pc = 0x1cced4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 460), GPR_U32(ctx, 2));
label_1cced8:
    // 0x1cced8: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x1cced8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_1ccedc:
    // 0x1ccedc: 0x8f828dcc  lw          $v0, -0x7234($gp)
    ctx->pc = 0x1ccedcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938060)));
label_1ccee0:
    // 0x1ccee0: 0xafa301c0  sw          $v1, 0x1C0($sp)
    ctx->pc = 0x1ccee0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 448), GPR_U32(ctx, 3));
label_1ccee4:
    // 0x1ccee4: 0xafa301c4  sw          $v1, 0x1C4($sp)
    ctx->pc = 0x1ccee4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 452), GPR_U32(ctx, 3));
label_1ccee8:
    // 0x1ccee8: 0xafa301c8  sw          $v1, 0x1C8($sp)
    ctx->pc = 0x1ccee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 456), GPR_U32(ctx, 3));
label_1cceec:
    // 0x1cceec: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x1cceecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_1ccef0:
    // 0x1ccef0: 0xc04de54  jal         func_137950
label_1ccef4:
    if (ctx->pc == 0x1CCEF4u) {
        ctx->pc = 0x1CCEF4u;
            // 0x1ccef4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CCEF8u;
        goto label_1ccef8;
    }
    ctx->pc = 0x1CCEF0u;
    SET_GPR_U32(ctx, 31, 0x1CCEF8u);
    ctx->pc = 0x1CCEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCEF0u;
            // 0x1ccef4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137950u;
    if (runtime->hasFunction(0x137950u)) {
        auto targetFn = runtime->lookupFunction(0x137950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCEF8u; }
        if (ctx->pc != 0x1CCEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParam__8mgCFrameFR12mgCFrameAttrii_0x137950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCEF8u; }
        if (ctx->pc != 0x1CCEF8u) { return; }
    }
    ctx->pc = 0x1CCEF8u;
label_1ccef8:
    // 0x1ccef8: 0x8f828dcc  lw          $v0, -0x7234($gp)
    ctx->pc = 0x1ccef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938060)));
label_1ccefc:
    // 0x1ccefc: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1ccefcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1ccf00:
    // 0x1ccf00: 0x248451c0  addiu       $a0, $a0, 0x51C0
    ctx->pc = 0x1ccf00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20928));
label_1ccf04:
    // 0x1ccf04: 0xc0a2f48  jal         func_28BD20
label_1ccf08:
    if (ctx->pc == 0x1CCF08u) {
        ctx->pc = 0x1CCF08u;
            // 0x1ccf08: 0xac400080  sw          $zero, 0x80($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 0));
        ctx->pc = 0x1CCF0Cu;
        goto label_1ccf0c;
    }
    ctx->pc = 0x1CCF04u;
    SET_GPR_U32(ctx, 31, 0x1CCF0Cu);
    ctx->pc = 0x1CCF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCF04u;
            // 0x1ccf08: 0xac400080  sw          $zero, 0x80($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28BD20u;
    if (runtime->hasFunction(0x28BD20u)) {
        auto targetFn = runtime->lookupFunction(0x28BD20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCF0Cu; }
        if (ctx->pc != 0x1CCF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__9CGeoStoneFv_0x28bd20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCF0Cu; }
        if (ctx->pc != 0x1CCF0Cu) { return; }
    }
    ctx->pc = 0x1CCF0Cu;
label_1ccf0c:
    // 0x1ccf0c: 0x8f848d74  lw          $a0, -0x728C($gp)
    ctx->pc = 0x1ccf0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_1ccf10:
    // 0x1ccf10: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1ccf10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1ccf14:
    // 0x1ccf14: 0x24a56e50  addiu       $a1, $a1, 0x6E50
    ctx->pc = 0x1ccf14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28240));
label_1ccf18:
    // 0x1ccf18: 0xc052734  jal         func_149CD0
label_1ccf1c:
    if (ctx->pc == 0x1CCF1Cu) {
        ctx->pc = 0x1CCF1Cu;
            // 0x1ccf1c: 0x27a602bc  addiu       $a2, $sp, 0x2BC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 700));
        ctx->pc = 0x1CCF20u;
        goto label_1ccf20;
    }
    ctx->pc = 0x1CCF18u;
    SET_GPR_U32(ctx, 31, 0x1CCF20u);
    ctx->pc = 0x1CCF1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCF18u;
            // 0x1ccf1c: 0x27a602bc  addiu       $a2, $sp, 0x2BC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 700));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCF20u; }
        if (ctx->pc != 0x1CCF20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCF20u; }
        if (ctx->pc != 0x1CCF20u) { return; }
    }
    ctx->pc = 0x1CCF20u;
label_1ccf20:
    // 0x1ccf20: 0x8f878d70  lw          $a3, -0x7290($gp)
    ctx->pc = 0x1ccf20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
label_1ccf24:
    // 0x1ccf24: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1ccf24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1ccf28:
    // 0x1ccf28: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x1ccf28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_1ccf2c:
    // 0x1ccf2c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ccf2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ccf30:
    // 0x1ccf30: 0x248451c0  addiu       $a0, $a0, 0x51C0
    ctx->pc = 0x1ccf30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20928));
label_1ccf34:
    // 0x1ccf34: 0x24c66e60  addiu       $a2, $a2, 0x6E60
    ctx->pc = 0x1ccf34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28256));
label_1ccf38:
    // 0x1ccf38: 0x240a00ad  addiu       $t2, $zero, 0xAD
    ctx->pc = 0x1ccf38u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
label_1ccf3c:
    // 0x1ccf3c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ccf3cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ccf40:
    // 0x1ccf40: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1ccf40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1ccf44:
    // 0x1ccf44: 0xc05d474  jal         func_1751D0
label_1ccf48:
    if (ctx->pc == 0x1CCF48u) {
        ctx->pc = 0x1CCF48u;
            // 0x1ccf48: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CCF4Cu;
        goto label_1ccf4c;
    }
    ctx->pc = 0x1CCF44u;
    SET_GPR_U32(ctx, 31, 0x1CCF4Cu);
    ctx->pc = 0x1CCF48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCF44u;
            // 0x1ccf48: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1751D0u;
    if (runtime->hasFunction(0x1751D0u)) {
        auto targetFn = runtime->lookupFunction(0x1751D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCF4Cu; }
        if (ctx->pc != 0x1CCF4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadPack__11CCharacter2FPUiPcP9mgCMemoryP9mgCMemoryP9mgCMemoryiP11CCharacter2_0x1751d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCF4Cu; }
        if (ctx->pc != 0x1CCF4Cu) { return; }
    }
    ctx->pc = 0x1CCF4Cu;
label_1ccf4c:
    // 0x1ccf4c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1ccf4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1ccf50:
    // 0x1ccf50: 0xc0a3060  jal         func_28C180
label_1ccf54:
    if (ctx->pc == 0x1CCF54u) {
        ctx->pc = 0x1CCF54u;
            // 0x1ccf54: 0x24844b20  addiu       $a0, $a0, 0x4B20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19232));
        ctx->pc = 0x1CCF58u;
        goto label_1ccf58;
    }
    ctx->pc = 0x1CCF50u;
    SET_GPR_U32(ctx, 31, 0x1CCF58u);
    ctx->pc = 0x1CCF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCF50u;
            // 0x1ccf54: 0x24844b20  addiu       $a0, $a0, 0x4B20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C180u;
    if (runtime->hasFunction(0x28C180u)) {
        auto targetFn = runtime->lookupFunction(0x28C180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCF58u; }
        if (ctx->pc != 0x1CCF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13CRandomCircleFv_0x28c180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCF58u; }
        if (ctx->pc != 0x1CCF58u) { return; }
    }
    ctx->pc = 0x1CCF58u;
label_1ccf58:
    // 0x1ccf58: 0x8f848d74  lw          $a0, -0x728C($gp)
    ctx->pc = 0x1ccf58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_1ccf5c:
    // 0x1ccf5c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1ccf5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1ccf60:
    // 0x1ccf60: 0x24a56e70  addiu       $a1, $a1, 0x6E70
    ctx->pc = 0x1ccf60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28272));
label_1ccf64:
    // 0x1ccf64: 0xc052734  jal         func_149CD0
label_1ccf68:
    if (ctx->pc == 0x1CCF68u) {
        ctx->pc = 0x1CCF68u;
            // 0x1ccf68: 0x27a602bc  addiu       $a2, $sp, 0x2BC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 700));
        ctx->pc = 0x1CCF6Cu;
        goto label_1ccf6c;
    }
    ctx->pc = 0x1CCF64u;
    SET_GPR_U32(ctx, 31, 0x1CCF6Cu);
    ctx->pc = 0x1CCF68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCF64u;
            // 0x1ccf68: 0x27a602bc  addiu       $a2, $sp, 0x2BC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 700));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCF6Cu; }
        if (ctx->pc != 0x1CCF6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCF6Cu; }
        if (ctx->pc != 0x1CCF6Cu) { return; }
    }
    ctx->pc = 0x1CCF6Cu;
label_1ccf6c:
    // 0x1ccf6c: 0x8f878d70  lw          $a3, -0x7290($gp)
    ctx->pc = 0x1ccf6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
label_1ccf70:
    // 0x1ccf70: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1ccf70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1ccf74:
    // 0x1ccf74: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x1ccf74u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_1ccf78:
    // 0x1ccf78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ccf78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ccf7c:
    // 0x1ccf7c: 0x24844b60  addiu       $a0, $a0, 0x4B60
    ctx->pc = 0x1ccf7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19296));
label_1ccf80:
    // 0x1ccf80: 0x24c66e60  addiu       $a2, $a2, 0x6E60
    ctx->pc = 0x1ccf80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28256));
label_1ccf84:
    // 0x1ccf84: 0x240a00ad  addiu       $t2, $zero, 0xAD
    ctx->pc = 0x1ccf84u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
label_1ccf88:
    // 0x1ccf88: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1ccf88u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ccf8c:
    // 0x1ccf8c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1ccf8cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1ccf90:
    // 0x1ccf90: 0xc05d474  jal         func_1751D0
label_1ccf94:
    if (ctx->pc == 0x1CCF94u) {
        ctx->pc = 0x1CCF94u;
            // 0x1ccf94: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CCF98u;
        goto label_1ccf98;
    }
    ctx->pc = 0x1CCF90u;
    SET_GPR_U32(ctx, 31, 0x1CCF98u);
    ctx->pc = 0x1CCF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCF90u;
            // 0x1ccf94: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1751D0u;
    if (runtime->hasFunction(0x1751D0u)) {
        auto targetFn = runtime->lookupFunction(0x1751D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCF98u; }
        if (ctx->pc != 0x1CCF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadPack__11CCharacter2FPUiPcP9mgCMemoryP9mgCMemoryP9mgCMemoryiP11CCharacter2_0x1751d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCF98u; }
        if (ctx->pc != 0x1CCF98u) { return; }
    }
    ctx->pc = 0x1CCF98u;
label_1ccf98:
    // 0x1ccf98: 0x8f848d74  lw          $a0, -0x728C($gp)
    ctx->pc = 0x1ccf98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_1ccf9c:
    // 0x1ccf9c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1ccf9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1ccfa0:
    // 0x1ccfa0: 0x24a56e80  addiu       $a1, $a1, 0x6E80
    ctx->pc = 0x1ccfa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28288));
label_1ccfa4:
    // 0x1ccfa4: 0xc052734  jal         func_149CD0
label_1ccfa8:
    if (ctx->pc == 0x1CCFA8u) {
        ctx->pc = 0x1CCFA8u;
            // 0x1ccfa8: 0x27a602bc  addiu       $a2, $sp, 0x2BC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 700));
        ctx->pc = 0x1CCFACu;
        goto label_1ccfac;
    }
    ctx->pc = 0x1CCFA4u;
    SET_GPR_U32(ctx, 31, 0x1CCFACu);
    ctx->pc = 0x1CCFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCFA4u;
            // 0x1ccfa8: 0x27a602bc  addiu       $a2, $sp, 0x2BC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 700));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCFACu; }
        if (ctx->pc != 0x1CCFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCFACu; }
        if (ctx->pc != 0x1CCFACu) { return; }
    }
    ctx->pc = 0x1CCFACu;
label_1ccfac:
    // 0x1ccfac: 0x8f858d70  lw          $a1, -0x7290($gp)
    ctx->pc = 0x1ccfacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
label_1ccfb0:
    // 0x1ccfb0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ccfb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ccfb4:
    // 0x1ccfb4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ccfb4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ccfb8:
    // 0x1ccfb8: 0xc04cb78  jal         func_132DE0
label_1ccfbc:
    if (ctx->pc == 0x1CCFBCu) {
        ctx->pc = 0x1CCFBCu;
            // 0x1ccfbc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CCFC0u;
        goto label_1ccfc0;
    }
    ctx->pc = 0x1CCFB8u;
    SET_GPR_U32(ctx, 31, 0x1CCFC0u);
    ctx->pc = 0x1CCFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCFB8u;
            // 0x1ccfbc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DE0u;
    if (runtime->hasFunction(0x132DE0u)) {
        auto targetFn = runtime->lookupFunction(0x132DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCFC0u; }
        if (ctx->pc != 0x1CCFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgLoadMDSFile__FP10MDS_HEADERP9mgCMemoryP18mgCreateVisualTypeP17mgCTextureManager_0x132de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCFC0u; }
        if (ctx->pc != 0x1CCFC0u) { return; }
    }
    ctx->pc = 0x1CCFC0u;
label_1ccfc0:
    // 0x1ccfc0: 0x8f848d74  lw          $a0, -0x728C($gp)
    ctx->pc = 0x1ccfc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_1ccfc4:
    // 0x1ccfc4: 0x3c0101eb  lui         $at, 0x1EB
    ctx->pc = 0x1ccfc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)491 << 16));
label_1ccfc8:
    // 0x1ccfc8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1ccfc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1ccfcc:
    // 0x1ccfcc: 0xac227948  sw          $v0, 0x7948($at)
    ctx->pc = 0x1ccfccu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31048), GPR_U32(ctx, 2));
label_1ccfd0:
    // 0x1ccfd0: 0x24a56ea0  addiu       $a1, $a1, 0x6EA0
    ctx->pc = 0x1ccfd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28320));
label_1ccfd4:
    // 0x1ccfd4: 0xc052734  jal         func_149CD0
label_1ccfd8:
    if (ctx->pc == 0x1CCFD8u) {
        ctx->pc = 0x1CCFD8u;
            // 0x1ccfd8: 0x27a602bc  addiu       $a2, $sp, 0x2BC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 700));
        ctx->pc = 0x1CCFDCu;
        goto label_1ccfdc;
    }
    ctx->pc = 0x1CCFD4u;
    SET_GPR_U32(ctx, 31, 0x1CCFDCu);
    ctx->pc = 0x1CCFD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCFD4u;
            // 0x1ccfd8: 0x27a602bc  addiu       $a2, $sp, 0x2BC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 700));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCFDCu; }
        if (ctx->pc != 0x1CCFDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCFDCu; }
        if (ctx->pc != 0x1CCFDCu) { return; }
    }
    ctx->pc = 0x1CCFDCu;
label_1ccfdc:
    // 0x1ccfdc: 0x8f858d70  lw          $a1, -0x7290($gp)
    ctx->pc = 0x1ccfdcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
label_1ccfe0:
    // 0x1ccfe0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1ccfe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ccfe4:
    // 0x1ccfe4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ccfe4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ccfe8:
    // 0x1ccfe8: 0xc04cb78  jal         func_132DE0
label_1ccfec:
    if (ctx->pc == 0x1CCFECu) {
        ctx->pc = 0x1CCFECu;
            // 0x1ccfec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CCFF0u;
        goto label_1ccff0;
    }
    ctx->pc = 0x1CCFE8u;
    SET_GPR_U32(ctx, 31, 0x1CCFF0u);
    ctx->pc = 0x1CCFECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CCFE8u;
            // 0x1ccfec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DE0u;
    if (runtime->hasFunction(0x132DE0u)) {
        auto targetFn = runtime->lookupFunction(0x132DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCFF0u; }
        if (ctx->pc != 0x1CCFF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgLoadMDSFile__FP10MDS_HEADERP9mgCMemoryP18mgCreateVisualTypeP17mgCTextureManager_0x132de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CCFF0u; }
        if (ctx->pc != 0x1CCFF0u) { return; }
    }
    ctx->pc = 0x1CCFF0u;
label_1ccff0:
    // 0x1ccff0: 0x8f848d74  lw          $a0, -0x728C($gp)
    ctx->pc = 0x1ccff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_1ccff4:
    // 0x1ccff4: 0x3c0101eb  lui         $at, 0x1EB
    ctx->pc = 0x1ccff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)491 << 16));
label_1ccff8:
    // 0x1ccff8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1ccff8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1ccffc:
    // 0x1ccffc: 0xac22794c  sw          $v0, 0x794C($at)
    ctx->pc = 0x1ccffcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31052), GPR_U32(ctx, 2));
label_1cd000:
    // 0x1cd000: 0x24a56ec0  addiu       $a1, $a1, 0x6EC0
    ctx->pc = 0x1cd000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28352));
label_1cd004:
    // 0x1cd004: 0xc052734  jal         func_149CD0
label_1cd008:
    if (ctx->pc == 0x1CD008u) {
        ctx->pc = 0x1CD008u;
            // 0x1cd008: 0x27a602bc  addiu       $a2, $sp, 0x2BC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 700));
        ctx->pc = 0x1CD00Cu;
        goto label_1cd00c;
    }
    ctx->pc = 0x1CD004u;
    SET_GPR_U32(ctx, 31, 0x1CD00Cu);
    ctx->pc = 0x1CD008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD004u;
            // 0x1cd008: 0x27a602bc  addiu       $a2, $sp, 0x2BC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 700));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD00Cu; }
        if (ctx->pc != 0x1CD00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD00Cu; }
        if (ctx->pc != 0x1CD00Cu) { return; }
    }
    ctx->pc = 0x1CD00Cu;
label_1cd00c:
    // 0x1cd00c: 0x8f858d70  lw          $a1, -0x7290($gp)
    ctx->pc = 0x1cd00cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
label_1cd010:
    // 0x1cd010: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cd010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cd014:
    // 0x1cd014: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cd014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd018:
    // 0x1cd018: 0xc04cb78  jal         func_132DE0
label_1cd01c:
    if (ctx->pc == 0x1CD01Cu) {
        ctx->pc = 0x1CD01Cu;
            // 0x1cd01c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CD020u;
        goto label_1cd020;
    }
    ctx->pc = 0x1CD018u;
    SET_GPR_U32(ctx, 31, 0x1CD020u);
    ctx->pc = 0x1CD01Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD018u;
            // 0x1cd01c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DE0u;
    if (runtime->hasFunction(0x132DE0u)) {
        auto targetFn = runtime->lookupFunction(0x132DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD020u; }
        if (ctx->pc != 0x1CD020u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgLoadMDSFile__FP10MDS_HEADERP9mgCMemoryP18mgCreateVisualTypeP17mgCTextureManager_0x132de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD020u; }
        if (ctx->pc != 0x1CD020u) { return; }
    }
    ctx->pc = 0x1CD020u;
label_1cd020:
    // 0x1cd020: 0x8f848d74  lw          $a0, -0x728C($gp)
    ctx->pc = 0x1cd020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_1cd024:
    // 0x1cd024: 0x3c0101eb  lui         $at, 0x1EB
    ctx->pc = 0x1cd024u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)491 << 16));
label_1cd028:
    // 0x1cd028: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cd028u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1cd02c:
    // 0x1cd02c: 0xac227950  sw          $v0, 0x7950($at)
    ctx->pc = 0x1cd02cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 31056), GPR_U32(ctx, 2));
label_1cd030:
    // 0x1cd030: 0x24a56ed8  addiu       $a1, $a1, 0x6ED8
    ctx->pc = 0x1cd030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28376));
label_1cd034:
    // 0x1cd034: 0xc052734  jal         func_149CD0
label_1cd038:
    if (ctx->pc == 0x1CD038u) {
        ctx->pc = 0x1CD038u;
            // 0x1cd038: 0x27a602bc  addiu       $a2, $sp, 0x2BC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 700));
        ctx->pc = 0x1CD03Cu;
        goto label_1cd03c;
    }
    ctx->pc = 0x1CD034u;
    SET_GPR_U32(ctx, 31, 0x1CD03Cu);
    ctx->pc = 0x1CD038u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD034u;
            // 0x1cd038: 0x27a602bc  addiu       $a2, $sp, 0x2BC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 700));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD03Cu; }
        if (ctx->pc != 0x1CD03Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD03Cu; }
        if (ctx->pc != 0x1CD03Cu) { return; }
    }
    ctx->pc = 0x1CD03Cu;
label_1cd03c:
    // 0x1cd03c: 0x8f858d70  lw          $a1, -0x7290($gp)
    ctx->pc = 0x1cd03cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
label_1cd040:
    // 0x1cd040: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1cd040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cd044:
    // 0x1cd044: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cd044u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd048:
    // 0x1cd048: 0xc04cb78  jal         func_132DE0
label_1cd04c:
    if (ctx->pc == 0x1CD04Cu) {
        ctx->pc = 0x1CD04Cu;
            // 0x1cd04c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CD050u;
        goto label_1cd050;
    }
    ctx->pc = 0x1CD048u;
    SET_GPR_U32(ctx, 31, 0x1CD050u);
    ctx->pc = 0x1CD04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD048u;
            // 0x1cd04c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DE0u;
    if (runtime->hasFunction(0x132DE0u)) {
        auto targetFn = runtime->lookupFunction(0x132DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD050u; }
        if (ctx->pc != 0x1CD050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgLoadMDSFile__FP10MDS_HEADERP9mgCMemoryP18mgCreateVisualTypeP17mgCTextureManager_0x132de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD050u; }
        if (ctx->pc != 0x1CD050u) { return; }
    }
    ctx->pc = 0x1CD050u;
label_1cd050:
    // 0x1cd050: 0xc0c2678  jal         func_3099E0
label_1cd054:
    if (ctx->pc == 0x1CD054u) {
        ctx->pc = 0x1CD054u;
            // 0x1cd054: 0xaf828df0  sw          $v0, -0x7210($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938096), GPR_U32(ctx, 2));
        ctx->pc = 0x1CD058u;
        goto label_1cd058;
    }
    ctx->pc = 0x1CD050u;
    SET_GPR_U32(ctx, 31, 0x1CD058u);
    ctx->pc = 0x1CD054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD050u;
            // 0x1cd054: 0xaf828df0  sw          $v0, -0x7210($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938096), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3099E0u;
    if (runtime->hasFunction(0x3099E0u)) {
        auto targetFn = runtime->lookupFunction(0x3099E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD058u; }
        if (ctx->pc != 0x1CD058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowLoadingBarStep__Fv_0x3099e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD058u; }
        if (ctx->pc != 0x1CD058u) { return; }
    }
    ctx->pc = 0x1CD058u;
label_1cd058:
    // 0x1cd058: 0x8f858d74  lw          $a1, -0x728C($gp)
    ctx->pc = 0x1cd058u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_1cd05c:
    // 0x1cd05c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1cd05cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_1cd060:
    // 0x1cd060: 0x24846ef0  addiu       $a0, $a0, 0x6EF0
    ctx->pc = 0x1cd060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28400));
label_1cd064:
    // 0x1cd064: 0xc0524c8  jal         func_149320
label_1cd068:
    if (ctx->pc == 0x1CD068u) {
        ctx->pc = 0x1CD068u;
            // 0x1cd068: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CD06Cu;
        goto label_1cd06c;
    }
    ctx->pc = 0x1CD064u;
    SET_GPR_U32(ctx, 31, 0x1CD06Cu);
    ctx->pc = 0x1CD068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD064u;
            // 0x1cd068: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD06Cu; }
        if (ctx->pc != 0x1CD06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD06Cu; }
        if (ctx->pc != 0x1CD06Cu) { return; }
    }
    ctx->pc = 0x1CD06Cu;
label_1cd06c:
    // 0x1cd06c: 0x3c070034  lui         $a3, 0x34
    ctx->pc = 0x1cd06cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)52 << 16));
label_1cd070:
    // 0x1cd070: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x1cd070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_1cd074:
    // 0x1cd074: 0x24e78e90  addiu       $a3, $a3, -0x7170
    ctx->pc = 0x1cd074u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294938256));
label_1cd078:
    // 0x1cd078: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cd078u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd07c:
    // 0x1cd07c: 0x78e50000  lq          $a1, 0x0($a3)
    ctx->pc = 0x1cd07cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 7), 0)));
label_1cd080:
    // 0x1cd080: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1cd080u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd084:
    // 0x1cd084: 0x78e40010  lq          $a0, 0x10($a3)
    ctx->pc = 0x1cd084u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 7), 16)));
label_1cd088:
    // 0x1cd088: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1cd088u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd08c:
    // 0x1cd08c: 0x78e30020  lq          $v1, 0x20($a3)
    ctx->pc = 0x1cd08cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 7), 32)));
label_1cd090:
    // 0x1cd090: 0x78e20030  lq          $v0, 0x30($a3)
    ctx->pc = 0x1cd090u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 48)));
label_1cd094:
    // 0x1cd094: 0x7cc50000  sq          $a1, 0x0($a2)
    ctx->pc = 0x1cd094u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 5));
label_1cd098:
    // 0x1cd098: 0x7cc40010  sq          $a0, 0x10($a2)
    ctx->pc = 0x1cd098u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 4));
label_1cd09c:
    // 0x1cd09c: 0x7cc30020  sq          $v1, 0x20($a2)
    ctx->pc = 0x1cd09cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 3));
label_1cd0a0:
    // 0x1cd0a0: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x1cd0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
label_1cd0a4:
    // 0x1cd0a4: 0x78e20040  lq          $v0, 0x40($a3)
    ctx->pc = 0x1cd0a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 7), 64)));
label_1cd0a8:
    // 0x1cd0a8: 0x7cc20040  sq          $v0, 0x40($a2)
    ctx->pc = 0x1cd0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 2));
label_1cd0ac:
    // 0x1cd0ac: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x1cd0acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
label_1cd0b0:
    // 0x1cd0b0: 0x8c4501e0  lw          $a1, 0x1E0($v0)
    ctx->pc = 0x1cd0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 480)));
label_1cd0b4:
    // 0x1cd0b4: 0x10a00015  beqz        $a1, . + 4 + (0x15 << 2)
label_1cd0b8:
    if (ctx->pc == 0x1CD0B8u) {
        ctx->pc = 0x1CD0BCu;
        goto label_1cd0bc;
    }
    ctx->pc = 0x1CD0B4u;
    {
        const bool branch_taken_0x1cd0b4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd0b4) {
            ctx->pc = 0x1CD10Cu;
            goto label_1cd10c;
        }
    }
    ctx->pc = 0x1CD0BCu;
label_1cd0bc:
    // 0x1cd0bc: 0x8f848d74  lw          $a0, -0x728C($gp)
    ctx->pc = 0x1cd0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_1cd0c0:
    // 0x1cd0c0: 0xc052734  jal         func_149CD0
label_1cd0c4:
    if (ctx->pc == 0x1CD0C4u) {
        ctx->pc = 0x1CD0C4u;
            // 0x1cd0c4: 0x27a602bc  addiu       $a2, $sp, 0x2BC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 700));
        ctx->pc = 0x1CD0C8u;
        goto label_1cd0c8;
    }
    ctx->pc = 0x1CD0C0u;
    SET_GPR_U32(ctx, 31, 0x1CD0C8u);
    ctx->pc = 0x1CD0C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD0C0u;
            // 0x1cd0c4: 0x27a602bc  addiu       $a2, $sp, 0x2BC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 700));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD0C8u; }
        if (ctx->pc != 0x1CD0C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD0C8u; }
        if (ctx->pc != 0x1CD0C8u) { return; }
    }
    ctx->pc = 0x1CD0C8u;
label_1cd0c8:
    // 0x1cd0c8: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1cd0c8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cd0cc:
    // 0x1cd0cc: 0x1280000f  beqz        $s4, . + 4 + (0xF << 2)
label_1cd0d0:
    if (ctx->pc == 0x1CD0D0u) {
        ctx->pc = 0x1CD0D0u;
            // 0x1cd0d0: 0x3c0201ea  lui         $v0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x1CD0D4u;
        goto label_1cd0d4;
    }
    ctx->pc = 0x1CD0CCu;
    {
        const bool branch_taken_0x1cd0cc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD0CCu;
            // 0x1cd0d0: 0x3c0201ea  lui         $v0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd0cc) {
            ctx->pc = 0x1CD10Cu;
            goto label_1cd10c;
        }
    }
    ctx->pc = 0x1CD0D4u;
label_1cd0d4:
    // 0x1cd0d4: 0x24426870  addiu       $v0, $v0, 0x6870
    ctx->pc = 0x1cd0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26736));
label_1cd0d8:
    // 0x1cd0d8: 0x529821  addu        $s3, $v0, $s2
    ctx->pc = 0x1cd0d8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1cd0dc:
    // 0x1cd0dc: 0xc05d4d0  jal         func_175340
label_1cd0e0:
    if (ctx->pc == 0x1CD0E0u) {
        ctx->pc = 0x1CD0E0u;
            // 0x1cd0e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CD0E4u;
        goto label_1cd0e4;
    }
    ctx->pc = 0x1CD0DCu;
    SET_GPR_U32(ctx, 31, 0x1CD0E4u);
    ctx->pc = 0x1CD0E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD0DCu;
            // 0x1cd0e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175340u;
    if (runtime->hasFunction(0x175340u)) {
        auto targetFn = runtime->lookupFunction(0x175340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD0E4u; }
        if (ctx->pc != 0x1CD0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CCharacter2Fv_0x175340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD0E4u; }
        if (ctx->pc != 0x1CD0E4u) { return; }
    }
    ctx->pc = 0x1CD0E4u;
label_1cd0e4:
    // 0x1cd0e4: 0x8f878d70  lw          $a3, -0x7290($gp)
    ctx->pc = 0x1cd0e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
label_1cd0e8:
    // 0x1cd0e8: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x1cd0e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_1cd0ec:
    // 0x1cd0ec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1cd0ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1cd0f0:
    // 0x1cd0f0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1cd0f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1cd0f4:
    // 0x1cd0f4: 0x24c66e60  addiu       $a2, $a2, 0x6E60
    ctx->pc = 0x1cd0f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28256));
label_1cd0f8:
    // 0x1cd0f8: 0x240a0068  addiu       $t2, $zero, 0x68
    ctx->pc = 0x1cd0f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_1cd0fc:
    // 0x1cd0fc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1cd0fcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd100:
    // 0x1cd100: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1cd100u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1cd104:
    // 0x1cd104: 0xc05d480  jal         func_175200
label_1cd108:
    if (ctx->pc == 0x1CD108u) {
        ctx->pc = 0x1CD108u;
            // 0x1cd108: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CD10Cu;
        goto label_1cd10c;
    }
    ctx->pc = 0x1CD104u;
    SET_GPR_U32(ctx, 31, 0x1CD10Cu);
    ctx->pc = 0x1CD108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD104u;
            // 0x1cd108: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175200u;
    if (runtime->hasFunction(0x175200u)) {
        auto targetFn = runtime->lookupFunction(0x175200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD10Cu; }
        if (ctx->pc != 0x1CD10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadPackNoLine__11CCharacter2FPUiPcP9mgCMemoryP9mgCMemoryP9mgCMemoryiP11CCharacter2_0x175200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD10Cu; }
        if (ctx->pc != 0x1CD10Cu) { return; }
    }
    ctx->pc = 0x1CD10Cu;
label_1cd10c:
    // 0x1cd10c: 0x0  nop
    ctx->pc = 0x1cd10cu;
    // NOP
label_1cd110:
    // 0x1cd110: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cd110u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1cd114:
    // 0x1cd114: 0x2a020012  slti        $v0, $s0, 0x12
    ctx->pc = 0x1cd114u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)18) ? 1 : 0);
label_1cd118:
    // 0x1cd118: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1cd118u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1cd11c:
    // 0x1cd11c: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_1cd120:
    if (ctx->pc == 0x1CD120u) {
        ctx->pc = 0x1CD120u;
            // 0x1cd120: 0x26520660  addiu       $s2, $s2, 0x660 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1632));
        ctx->pc = 0x1CD124u;
        goto label_1cd124;
    }
    ctx->pc = 0x1CD11Cu;
    {
        const bool branch_taken_0x1cd11c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD11Cu;
            // 0x1cd120: 0x26520660  addiu       $s2, $s2, 0x660 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd11c) {
            ctx->pc = 0x1CD0ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cd0ac;
        }
    }
    ctx->pc = 0x1CD124u;
label_1cd124:
    // 0x1cd124: 0x8f848d70  lw          $a0, -0x7290($gp)
    ctx->pc = 0x1cd124u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
label_1cd128:
    // 0x1cd128: 0x3c0201ea  lui         $v0, 0x1EA
    ctx->pc = 0x1cd128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)490 << 16));
label_1cd12c:
    // 0x1cd12c: 0x24426870  addiu       $v0, $v0, 0x6870
    ctx->pc = 0x1cd12cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26736));
label_1cd130:
    // 0x1cd130: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x1cd130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_1cd134:
    // 0x1cd134: 0xaf828d90  sw          $v0, -0x7270($gp)
    ctx->pc = 0x1cd134u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938000), GPR_U32(ctx, 2));
label_1cd138:
    // 0x1cd138: 0xc04e748  jal         func_139D20
label_1cd13c:
    if (ctx->pc == 0x1CD13Cu) {
        ctx->pc = 0x1CD13Cu;
            // 0x1cd13c: 0xaf858d94  sw          $a1, -0x726C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938004), GPR_U32(ctx, 5));
        ctx->pc = 0x1CD140u;
        goto label_1cd140;
    }
    ctx->pc = 0x1CD138u;
    SET_GPR_U32(ctx, 31, 0x1CD140u);
    ctx->pc = 0x1CD13Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD138u;
            // 0x1cd13c: 0xaf858d94  sw          $a1, -0x726C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938004), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD140u; }
        if (ctx->pc != 0x1CD140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD140u; }
        if (ctx->pc != 0x1CD140u) { return; }
    }
    ctx->pc = 0x1CD140u;
label_1cd140:
    // 0x1cd140: 0x24040660  addiu       $a0, $zero, 0x660
    ctx->pc = 0x1cd140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1632));
label_1cd144:
    // 0x1cd144: 0xc04e638  jal         func_1398E0
label_1cd148:
    if (ctx->pc == 0x1CD148u) {
        ctx->pc = 0x1CD148u;
            // 0x1cd148: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CD14Cu;
        goto label_1cd14c;
    }
    ctx->pc = 0x1CD144u;
    SET_GPR_U32(ctx, 31, 0x1CD14Cu);
    ctx->pc = 0x1CD148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD144u;
            // 0x1cd148: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD14Cu; }
        if (ctx->pc != 0x1CD14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD14Cu; }
        if (ctx->pc != 0x1CD14Cu) { return; }
    }
    ctx->pc = 0x1CD14Cu;
label_1cd14c:
    // 0x1cd14c: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_1cd150:
    if (ctx->pc == 0x1CD150u) {
        ctx->pc = 0x1CD150u;
            // 0x1cd150: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CD154u;
        goto label_1cd154;
    }
    ctx->pc = 0x1CD14Cu;
    {
        const bool branch_taken_0x1cd14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD14Cu;
            // 0x1cd150: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd14c) {
            ctx->pc = 0x1CD1D0u;
            goto label_1cd1d0;
        }
    }
    ctx->pc = 0x1CD154u;
label_1cd154:
    // 0x1cd154: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1cd154u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1cd158:
    // 0x1cd158: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x1cd158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_1cd15c:
    // 0x1cd15c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1cd15cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1cd160:
    // 0x1cd160: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1cd160u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cd164:
    // 0x1cd164: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1cd164u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1cd168:
    // 0x1cd168: 0x320f809  jalr        $t9
label_1cd16c:
    if (ctx->pc == 0x1CD16Cu) {
        ctx->pc = 0x1CD16Cu;
            // 0x1cd16c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CD170u;
        goto label_1cd170;
    }
    ctx->pc = 0x1CD168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CD170u);
        ctx->pc = 0x1CD16Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD168u;
            // 0x1cd16c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CD170u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CD170u; }
            if (ctx->pc != 0x1CD170u) { return; }
        }
        }
    }
    ctx->pc = 0x1CD170u;
label_1cd170:
    // 0x1cd170: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1cd170u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1cd174:
    // 0x1cd174: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x1cd174u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_1cd178:
    // 0x1cd178: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1cd178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1cd17c:
    // 0x1cd17c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1cd17cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cd180:
    // 0x1cd180: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1cd180u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1cd184:
    // 0x1cd184: 0x320f809  jalr        $t9
label_1cd188:
    if (ctx->pc == 0x1CD188u) {
        ctx->pc = 0x1CD188u;
            // 0x1cd188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CD18Cu;
        goto label_1cd18c;
    }
    ctx->pc = 0x1CD184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CD18Cu);
        ctx->pc = 0x1CD188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD184u;
            // 0x1cd188: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CD18Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CD18Cu; }
            if (ctx->pc != 0x1CD18Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1CD18Cu;
label_1cd18c:
    // 0x1cd18c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1cd18cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1cd190:
    // 0x1cd190: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x1cd190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_1cd194:
    // 0x1cd194: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1cd194u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1cd198:
    // 0x1cd198: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1cd198u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cd19c:
    // 0x1cd19c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1cd19cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1cd1a0:
    // 0x1cd1a0: 0x320f809  jalr        $t9
label_1cd1a4:
    if (ctx->pc == 0x1CD1A4u) {
        ctx->pc = 0x1CD1A4u;
            // 0x1cd1a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CD1A8u;
        goto label_1cd1a8;
    }
    ctx->pc = 0x1CD1A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CD1A8u);
        ctx->pc = 0x1CD1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD1A0u;
            // 0x1cd1a4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CD1A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CD1A8u; }
            if (ctx->pc != 0x1CD1A8u) { return; }
        }
        }
    }
    ctx->pc = 0x1CD1A8u;
label_1cd1a8:
    // 0x1cd1a8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1cd1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1cd1ac:
    // 0x1cd1ac: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x1cd1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_1cd1b0:
    // 0x1cd1b0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1cd1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1cd1b4:
    // 0x1cd1b4: 0xae00035c  sw          $zero, 0x35C($s0)
    ctx->pc = 0x1cd1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 0));
label_1cd1b8:
    // 0x1cd1b8: 0xae000364  sw          $zero, 0x364($s0)
    ctx->pc = 0x1cd1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 0));
label_1cd1bc:
    // 0x1cd1bc: 0xae000360  sw          $zero, 0x360($s0)
    ctx->pc = 0x1cd1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 0));
label_1cd1c0:
    // 0x1cd1c0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1cd1c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1cd1c4:
    // 0x1cd1c4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1cd1c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1cd1c8:
    // 0x1cd1c8: 0x320f809  jalr        $t9
label_1cd1cc:
    if (ctx->pc == 0x1CD1CCu) {
        ctx->pc = 0x1CD1CCu;
            // 0x1cd1cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CD1D0u;
        goto label_1cd1d0;
    }
    ctx->pc = 0x1CD1C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CD1D0u);
        ctx->pc = 0x1CD1CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD1C8u;
            // 0x1cd1cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CD1D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CD1D0u; }
            if (ctx->pc != 0x1CD1D0u) { return; }
        }
        }
    }
    ctx->pc = 0x1CD1D0u;
label_1cd1d0:
    // 0x1cd1d0: 0x8f848d70  lw          $a0, -0x7290($gp)
    ctx->pc = 0x1cd1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
label_1cd1d4:
    // 0x1cd1d4: 0x240500ac  addiu       $a1, $zero, 0xAC
    ctx->pc = 0x1cd1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
label_1cd1d8:
    // 0x1cd1d8: 0xc04e748  jal         func_139D20
label_1cd1dc:
    if (ctx->pc == 0x1CD1DCu) {
        ctx->pc = 0x1CD1DCu;
            // 0x1cd1dc: 0xaf908dd0  sw          $s0, -0x7230($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938064), GPR_U32(ctx, 16));
        ctx->pc = 0x1CD1E0u;
        goto label_1cd1e0;
    }
    ctx->pc = 0x1CD1D8u;
    SET_GPR_U32(ctx, 31, 0x1CD1E0u);
    ctx->pc = 0x1CD1DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD1D8u;
            // 0x1cd1dc: 0xaf908dd0  sw          $s0, -0x7230($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938064), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD1E0u; }
        if (ctx->pc != 0x1CD1E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD1E0u; }
        if (ctx->pc != 0x1CD1E0u) { return; }
    }
    ctx->pc = 0x1CD1E0u;
label_1cd1e0:
    // 0x1cd1e0: 0x24040aa0  addiu       $a0, $zero, 0xAA0
    ctx->pc = 0x1cd1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2720));
label_1cd1e4:
    // 0x1cd1e4: 0xc04e638  jal         func_1398E0
label_1cd1e8:
    if (ctx->pc == 0x1CD1E8u) {
        ctx->pc = 0x1CD1E8u;
            // 0x1cd1e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CD1ECu;
        goto label_1cd1ec;
    }
    ctx->pc = 0x1CD1E4u;
    SET_GPR_U32(ctx, 31, 0x1CD1ECu);
    ctx->pc = 0x1CD1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD1E4u;
            // 0x1cd1e8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD1ECu; }
        if (ctx->pc != 0x1CD1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD1ECu; }
        if (ctx->pc != 0x1CD1ECu) { return; }
    }
    ctx->pc = 0x1CD1ECu;
label_1cd1ec:
    // 0x1cd1ec: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1cd1f0:
    if (ctx->pc == 0x1CD1F0u) {
        ctx->pc = 0x1CD1F0u;
            // 0x1cd1f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CD1F4u;
        goto label_1cd1f4;
    }
    ctx->pc = 0x1CD1ECu;
    {
        const bool branch_taken_0x1cd1ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD1ECu;
            // 0x1cd1f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd1ec) {
            ctx->pc = 0x1CD234u;
            goto label_1cd234;
        }
    }
    ctx->pc = 0x1CD1F4u;
label_1cd1f4:
    // 0x1cd1f4: 0x26110010  addiu       $s1, $s0, 0x10
    ctx->pc = 0x1cd1f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1cd1f8:
    // 0x1cd1f8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1cd1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1cd1fc:
    // 0x1cd1fc: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x1cd1fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_1cd200:
    // 0x1cd200: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1cd200u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1cd204:
    // 0x1cd204: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1cd204u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cd208:
    // 0x1cd208: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1cd208u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1cd20c:
    // 0x1cd20c: 0x320f809  jalr        $t9
label_1cd210:
    if (ctx->pc == 0x1CD210u) {
        ctx->pc = 0x1CD210u;
            // 0x1cd210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CD214u;
        goto label_1cd214;
    }
    ctx->pc = 0x1CD20Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CD214u);
        ctx->pc = 0x1CD210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD20Cu;
            // 0x1cd210: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CD214u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CD214u; }
            if (ctx->pc != 0x1CD214u) { return; }
        }
        }
    }
    ctx->pc = 0x1CD214u;
label_1cd214:
    // 0x1cd214: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1cd214u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_1cd218:
    // 0x1cd218: 0x26020a90  addiu       $v0, $s0, 0xA90
    ctx->pc = 0x1cd218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 2704));
label_1cd21c:
    // 0x1cd21c: 0x24635b90  addiu       $v1, $v1, 0x5B90
    ctx->pc = 0x1cd21cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23440));
label_1cd220:
    // 0x1cd220: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x1cd220u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_1cd224:
    // 0x1cd224: 0x26310070  addiu       $s1, $s1, 0x70
    ctx->pc = 0x1cd224u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 112));
label_1cd228:
    // 0x1cd228: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1cd228u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1cd22c:
    // 0x1cd22c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_1cd230:
    if (ctx->pc == 0x1CD230u) {
        ctx->pc = 0x1CD234u;
        goto label_1cd234;
    }
    ctx->pc = 0x1CD22Cu;
    {
        const bool branch_taken_0x1cd22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd22c) {
            ctx->pc = 0x1CD1F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cd1f8;
        }
    }
    ctx->pc = 0x1CD234u;
label_1cd234:
    // 0x1cd234: 0x0  nop
    ctx->pc = 0x1cd234u;
    // NOP
label_1cd238:
    // 0x1cd238: 0x8f848dd0  lw          $a0, -0x7230($gp)
    ctx->pc = 0x1cd238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938064)));
label_1cd23c:
    // 0x1cd23c: 0xaf908dd4  sw          $s0, -0x722C($gp)
    ctx->pc = 0x1cd23cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938068), GPR_U32(ctx, 16));
label_1cd240:
    // 0x1cd240: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1cd240u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cd244:
    // 0x1cd244: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1cd244u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1cd248:
    // 0x1cd248: 0x320f809  jalr        $t9
label_1cd24c:
    if (ctx->pc == 0x1CD24Cu) {
        ctx->pc = 0x1CD250u;
        goto label_1cd250;
    }
    ctx->pc = 0x1CD248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CD250u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CD250u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CD250u; }
            if (ctx->pc != 0x1CD250u) { return; }
        }
        }
    }
    ctx->pc = 0x1CD250u;
label_1cd250:
    // 0x1cd250: 0x8f918dd4  lw          $s1, -0x722C($gp)
    ctx->pc = 0x1cd250u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938068)));
label_1cd254:
    // 0x1cd254: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cd254u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd258:
    // 0x1cd258: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1cd258u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd25c:
    // 0x1cd25c: 0x2321021  addu        $v0, $s1, $s2
    ctx->pc = 0x1cd25cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
label_1cd260:
    // 0x1cd260: 0x8c590010  lw          $t9, 0x10($v0)
    ctx->pc = 0x1cd260u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_1cd264:
    // 0x1cd264: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1cd264u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1cd268:
    // 0x1cd268: 0x320f809  jalr        $t9
label_1cd26c:
    if (ctx->pc == 0x1CD26Cu) {
        ctx->pc = 0x1CD26Cu;
            // 0x1cd26c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x1CD270u;
        goto label_1cd270;
    }
    ctx->pc = 0x1CD268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CD270u);
        ctx->pc = 0x1CD26Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD268u;
            // 0x1cd26c: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CD270u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CD270u; }
            if (ctx->pc != 0x1CD270u) { return; }
        }
        }
    }
    ctx->pc = 0x1CD270u;
label_1cd270:
    // 0x1cd270: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cd270u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1cd274:
    // 0x1cd274: 0x2a020018  slti        $v0, $s0, 0x18
    ctx->pc = 0x1cd274u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)24) ? 1 : 0);
label_1cd278:
    // 0x1cd278: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_1cd27c:
    if (ctx->pc == 0x1CD27Cu) {
        ctx->pc = 0x1CD27Cu;
            // 0x1cd27c: 0x26520070  addiu       $s2, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->pc = 0x1CD280u;
        goto label_1cd280;
    }
    ctx->pc = 0x1CD278u;
    {
        const bool branch_taken_0x1cd278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD27Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD278u;
            // 0x1cd27c: 0x26520070  addiu       $s2, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd278) {
            ctx->pc = 0x1CD25Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cd25c;
        }
    }
    ctx->pc = 0x1CD280u;
label_1cd280:
    // 0x1cd280: 0xae200a90  sw          $zero, 0xA90($s1)
    ctx->pc = 0x1cd280u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2704), GPR_U32(ctx, 0));
label_1cd284:
    // 0x1cd284: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cd284u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1cd288:
    // 0x1cd288: 0xae200a94  sw          $zero, 0xA94($s1)
    ctx->pc = 0x1cd288u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2708), GPR_U32(ctx, 0));
label_1cd28c:
    // 0x1cd28c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cd28cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1cd290:
    // 0x1cd290: 0xae200a98  sw          $zero, 0xA98($s1)
    ctx->pc = 0x1cd290u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2712), GPR_U32(ctx, 0));
label_1cd294:
    // 0x1cd294: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cd294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cd298:
    // 0x1cd298: 0xae220a9c  sw          $v0, 0xA9C($s1)
    ctx->pc = 0x1cd298u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2716), GPR_U32(ctx, 2));
label_1cd29c:
    // 0x1cd29c: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x1cd29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_1cd2a0:
    // 0x1cd2a0: 0x8c22f6e4  lw          $v0, -0x91C($at)
    ctx->pc = 0x1cd2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964964)));
label_1cd2a4:
    // 0x1cd2a4: 0x24a56f10  addiu       $a1, $a1, 0x6F10
    ctx->pc = 0x1cd2a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28432));
label_1cd2a8:
    // 0x1cd2a8: 0xc04a234  jal         func_1288D0
label_1cd2ac:
    if (ctx->pc == 0x1CD2ACu) {
        ctx->pc = 0x1CD2ACu;
            // 0x1cd2ac: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x1CD2B0u;
        goto label_1cd2b0;
    }
    ctx->pc = 0x1CD2A8u;
    SET_GPR_U32(ctx, 31, 0x1CD2B0u);
    ctx->pc = 0x1CD2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD2A8u;
            // 0x1cd2ac: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD2B0u; }
        if (ctx->pc != 0x1CD2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD2B0u; }
        if (ctx->pc != 0x1CD2B0u) { return; }
    }
    ctx->pc = 0x1CD2B0u;
label_1cd2b0:
    // 0x1cd2b0: 0x8f858d74  lw          $a1, -0x728C($gp)
    ctx->pc = 0x1cd2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_1cd2b4:
    // 0x1cd2b4: 0x27a40230  addiu       $a0, $sp, 0x230
    ctx->pc = 0x1cd2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
label_1cd2b8:
    // 0x1cd2b8: 0xc0524c8  jal         func_149320
label_1cd2bc:
    if (ctx->pc == 0x1CD2BCu) {
        ctx->pc = 0x1CD2BCu;
            // 0x1cd2bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CD2C0u;
        goto label_1cd2c0;
    }
    ctx->pc = 0x1CD2B8u;
    SET_GPR_U32(ctx, 31, 0x1CD2C0u);
    ctx->pc = 0x1CD2BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD2B8u;
            // 0x1cd2bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD2C0u; }
        if (ctx->pc != 0x1CD2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD2C0u; }
        if (ctx->pc != 0x1CD2C0u) { return; }
    }
    ctx->pc = 0x1CD2C0u;
label_1cd2c0:
    // 0x1cd2c0: 0x8f848dd0  lw          $a0, -0x7230($gp)
    ctx->pc = 0x1cd2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938064)));
label_1cd2c4:
    // 0x1cd2c4: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x1cd2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_1cd2c8:
    // 0x1cd2c8: 0x8f878d70  lw          $a3, -0x7290($gp)
    ctx->pc = 0x1cd2c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
label_1cd2cc:
    // 0x1cd2cc: 0x24c66e60  addiu       $a2, $a2, 0x6E60
    ctx->pc = 0x1cd2ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28256));
label_1cd2d0:
    // 0x1cd2d0: 0x8f858d74  lw          $a1, -0x728C($gp)
    ctx->pc = 0x1cd2d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_1cd2d4:
    // 0x1cd2d4: 0x240a0057  addiu       $t2, $zero, 0x57
    ctx->pc = 0x1cd2d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
label_1cd2d8:
    // 0x1cd2d8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1cd2d8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd2dc:
    // 0x1cd2dc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1cd2dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cd2e0:
    // 0x1cd2e0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1cd2e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1cd2e4:
    // 0x1cd2e4: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x1cd2e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_1cd2e8:
    // 0x1cd2e8: 0x320f809  jalr        $t9
label_1cd2ec:
    if (ctx->pc == 0x1CD2ECu) {
        ctx->pc = 0x1CD2ECu;
            // 0x1cd2ec: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CD2F0u;
        goto label_1cd2f0;
    }
    ctx->pc = 0x1CD2E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CD2F0u);
        ctx->pc = 0x1CD2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD2E8u;
            // 0x1cd2ec: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CD2F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CD2F0u; }
            if (ctx->pc != 0x1CD2F0u) { return; }
        }
        }
    }
    ctx->pc = 0x1CD2F0u;
label_1cd2f0:
    // 0x1cd2f0: 0x8f848dd4  lw          $a0, -0x722C($gp)
    ctx->pc = 0x1cd2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938068)));
label_1cd2f4:
    // 0x1cd2f4: 0x8f858dd0  lw          $a1, -0x7230($gp)
    ctx->pc = 0x1cd2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938064)));
label_1cd2f8:
    // 0x1cd2f8: 0xc0a310c  jal         func_28C430
label_1cd2fc:
    if (ctx->pc == 0x1CD2FCu) {
        ctx->pc = 0x1CD2FCu;
            // 0x1cd2fc: 0x24060057  addiu       $a2, $zero, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
        ctx->pc = 0x1CD300u;
        goto label_1cd300;
    }
    ctx->pc = 0x1CD2F8u;
    SET_GPR_U32(ctx, 31, 0x1CD300u);
    ctx->pc = 0x1CD2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD2F8u;
            // 0x1cd2fc: 0x24060057  addiu       $a2, $zero, 0x57 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 87));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C430u;
    if (runtime->hasFunction(0x28C430u)) {
        auto targetFn = runtime->lookupFunction(0x28C430u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD300u; }
        if (ctx->pc != 0x1CD300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetLargeModel__19CTreasureBoxManagerFP11CCharacter2i_0x28c430(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD300u; }
        if (ctx->pc != 0x1CD300u) { return; }
    }
    ctx->pc = 0x1CD300u;
label_1cd300:
    // 0x1cd300: 0x8f848dd4  lw          $a0, -0x722C($gp)
    ctx->pc = 0x1cd300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938068)));
label_1cd304:
    // 0x1cd304: 0x8f868d70  lw          $a2, -0x7290($gp)
    ctx->pc = 0x1cd304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
label_1cd308:
    // 0x1cd308: 0xc0a3140  jal         func_28C500
label_1cd30c:
    if (ctx->pc == 0x1CD30Cu) {
        ctx->pc = 0x1CD30Cu;
            // 0x1cd30c: 0x8f858d74  lw          $a1, -0x728C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
        ctx->pc = 0x1CD310u;
        goto label_1cd310;
    }
    ctx->pc = 0x1CD308u;
    SET_GPR_U32(ctx, 31, 0x1CD310u);
    ctx->pc = 0x1CD30Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD308u;
            // 0x1cd30c: 0x8f858d74  lw          $a1, -0x728C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C500u;
    if (runtime->hasFunction(0x28C500u)) {
        auto targetFn = runtime->lookupFunction(0x28C500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD310u; }
        if (ctx->pc != 0x1CD310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCollisionModel__19CTreasureBoxManagerFPUiP9mgCMemory_0x28c500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD310u; }
        if (ctx->pc != 0x1CD310u) { return; }
    }
    ctx->pc = 0x1CD310u;
label_1cd310:
    // 0x1cd310: 0x8f838dd4  lw          $v1, -0x722C($gp)
    ctx->pc = 0x1cd310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938068)));
label_1cd314:
    // 0x1cd314: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1cd314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1cd318:
    // 0x1cd318: 0xc0c2678  jal         func_3099E0
label_1cd31c:
    if (ctx->pc == 0x1CD31Cu) {
        ctx->pc = 0x1CD31Cu;
            // 0x1cd31c: 0xac43007c  sw          $v1, 0x7C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 3));
        ctx->pc = 0x1CD320u;
        goto label_1cd320;
    }
    ctx->pc = 0x1CD318u;
    SET_GPR_U32(ctx, 31, 0x1CD320u);
    ctx->pc = 0x1CD31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD318u;
            // 0x1cd31c: 0xac43007c  sw          $v1, 0x7C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 124), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3099E0u;
    if (runtime->hasFunction(0x3099E0u)) {
        auto targetFn = runtime->lookupFunction(0x3099E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD320u; }
        if (ctx->pc != 0x1CD320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowLoadingBarStep__Fv_0x3099e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD320u; }
        if (ctx->pc != 0x1CD320u) { return; }
    }
    ctx->pc = 0x1CD320u;
label_1cd320:
    // 0x1cd320: 0x8f858d74  lw          $a1, -0x728C($gp)
    ctx->pc = 0x1cd320u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_1cd324:
    // 0x1cd324: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1cd324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_1cd328:
    // 0x1cd328: 0x24846f30  addiu       $a0, $a0, 0x6F30
    ctx->pc = 0x1cd328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28464));
label_1cd32c:
    // 0x1cd32c: 0xc0524c8  jal         func_149320
label_1cd330:
    if (ctx->pc == 0x1CD330u) {
        ctx->pc = 0x1CD330u;
            // 0x1cd330: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CD334u;
        goto label_1cd334;
    }
    ctx->pc = 0x1CD32Cu;
    SET_GPR_U32(ctx, 31, 0x1CD334u);
    ctx->pc = 0x1CD330u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD32Cu;
            // 0x1cd330: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD334u; }
        if (ctx->pc != 0x1CD334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD334u; }
        if (ctx->pc != 0x1CD334u) { return; }
    }
    ctx->pc = 0x1CD334u;
label_1cd334:
    // 0x1cd334: 0x8f858d74  lw          $a1, -0x728C($gp)
    ctx->pc = 0x1cd334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_1cd338:
    // 0x1cd338: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1cd338u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1cd33c:
    // 0x1cd33c: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x1cd33cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_1cd340:
    // 0x1cd340: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd340u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd344:
    // 0x1cd344: 0xc04b6a4  jal         func_12DA90
label_1cd348:
    if (ctx->pc == 0x1CD348u) {
        ctx->pc = 0x1CD348u;
            // 0x1cd348: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CD34Cu;
        goto label_1cd34c;
    }
    ctx->pc = 0x1CD344u;
    SET_GPR_U32(ctx, 31, 0x1CD34Cu);
    ctx->pc = 0x1CD348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD344u;
            // 0x1cd348: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD34Cu; }
        if (ctx->pc != 0x1CD34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD34Cu; }
        if (ctx->pc != 0x1CD34Cu) { return; }
    }
    ctx->pc = 0x1CD34Cu;
label_1cd34c:
    // 0x1cd34c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cd34cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1cd350:
    // 0x1cd350: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1cd350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1cd354:
    // 0x1cd354: 0x24a56f40  addiu       $a1, $a1, 0x6F40
    ctx->pc = 0x1cd354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28480));
label_1cd358:
    // 0x1cd358: 0xc04b414  jal         func_12D050
label_1cd35c:
    if (ctx->pc == 0x1CD35Cu) {
        ctx->pc = 0x1CD35Cu;
            // 0x1cd35c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1CD360u;
        goto label_1cd360;
    }
    ctx->pc = 0x1CD358u;
    SET_GPR_U32(ctx, 31, 0x1CD360u);
    ctx->pc = 0x1CD35Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD358u;
            // 0x1cd35c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD360u; }
        if (ctx->pc != 0x1CD360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD360u; }
        if (ctx->pc != 0x1CD360u) { return; }
    }
    ctx->pc = 0x1CD360u;
label_1cd360:
    // 0x1cd360: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cd360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1cd364:
    // 0x1cd364: 0xafa202b0  sw          $v0, 0x2B0($sp)
    ctx->pc = 0x1cd364u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 688), GPR_U32(ctx, 2));
label_1cd368:
    // 0x1cd368: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1cd368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1cd36c:
    // 0x1cd36c: 0x24a56f50  addiu       $a1, $a1, 0x6F50
    ctx->pc = 0x1cd36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28496));
label_1cd370:
    // 0x1cd370: 0xc04b414  jal         func_12D050
label_1cd374:
    if (ctx->pc == 0x1CD374u) {
        ctx->pc = 0x1CD374u;
            // 0x1cd374: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1CD378u;
        goto label_1cd378;
    }
    ctx->pc = 0x1CD370u;
    SET_GPR_U32(ctx, 31, 0x1CD378u);
    ctx->pc = 0x1CD374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD370u;
            // 0x1cd374: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD378u; }
        if (ctx->pc != 0x1CD378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD378u; }
        if (ctx->pc != 0x1CD378u) { return; }
    }
    ctx->pc = 0x1CD378u;
label_1cd378:
    // 0x1cd378: 0xafa202b4  sw          $v0, 0x2B4($sp)
    ctx->pc = 0x1cd378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 692), GPR_U32(ctx, 2));
label_1cd37c:
    // 0x1cd37c: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x1cd37cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_1cd380:
    // 0x1cd380: 0x8f828da0  lw          $v0, -0x7260($gp)
    ctx->pc = 0x1cd380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938016)));
label_1cd384:
    // 0x1cd384: 0x27a402b0  addiu       $a0, $sp, 0x2B0
    ctx->pc = 0x1cd384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 688));
label_1cd388:
    // 0x1cd388: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1cd388u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1cd38c:
    // 0x1cd38c: 0x84254d96  lh          $a1, 0x4D96($at)
    ctx->pc = 0x1cd38cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19862)));
label_1cd390:
    // 0x1cd390: 0xc08dab0  jal         func_236AC0
label_1cd394:
    if (ctx->pc == 0x1CD394u) {
        ctx->pc = 0x1CD394u;
            // 0x1cd394: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CD398u;
        goto label_1cd398;
    }
    ctx->pc = 0x1CD390u;
    SET_GPR_U32(ctx, 31, 0x1CD398u);
    ctx->pc = 0x1CD394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD390u;
            // 0x1cd394: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x236AC0u;
    if (runtime->hasFunction(0x236AC0u)) {
        auto targetFn = runtime->lookupFunction(0x236AC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD398u; }
        if (ctx->pc != 0x1CD398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyActiveIconTexture__FPP10mgCTextureiPUi_0x236ac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD398u; }
        if (ctx->pc != 0x1CD398u) { return; }
    }
    ctx->pc = 0x1CD398u;
label_1cd398:
    // 0x1cd398: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1cd398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1cd39c:
    // 0x1cd39c: 0xc04b950  jal         func_12E540
label_1cd3a0:
    if (ctx->pc == 0x1CD3A0u) {
        ctx->pc = 0x1CD3A0u;
            // 0x1cd3a0: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x1CD3A4u;
        goto label_1cd3a4;
    }
    ctx->pc = 0x1CD39Cu;
    SET_GPR_U32(ctx, 31, 0x1CD3A4u);
    ctx->pc = 0x1CD3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD39Cu;
            // 0x1cd3a0: 0x24050050  addiu       $a1, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD3A4u; }
        if (ctx->pc != 0x1CD3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD3A4u; }
        if (ctx->pc != 0x1CD3A4u) { return; }
    }
    ctx->pc = 0x1CD3A4u;
label_1cd3a4:
    // 0x1cd3a4: 0xc0c2678  jal         func_3099E0
label_1cd3a8:
    if (ctx->pc == 0x1CD3A8u) {
        ctx->pc = 0x1CD3ACu;
        goto label_1cd3ac;
    }
    ctx->pc = 0x1CD3A4u;
    SET_GPR_U32(ctx, 31, 0x1CD3ACu);
    ctx->pc = 0x3099E0u;
    if (runtime->hasFunction(0x3099E0u)) {
        auto targetFn = runtime->lookupFunction(0x3099E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD3ACu; }
        if (ctx->pc != 0x1CD3ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowLoadingBarStep__Fv_0x3099e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD3ACu; }
        if (ctx->pc != 0x1CD3ACu) { return; }
    }
    ctx->pc = 0x1CD3ACu;
label_1cd3ac:
    // 0x1cd3ac: 0x8f898da0  lw          $t1, -0x7260($gp)
    ctx->pc = 0x1cd3acu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938016)));
label_1cd3b0:
    // 0x1cd3b0: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x1cd3b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_1cd3b4:
    // 0x1cd3b4: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x1cd3b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
label_1cd3b8:
    // 0x1cd3b8: 0x3c0601ea  lui         $a2, 0x1EA
    ctx->pc = 0x1cd3b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)490 << 16));
label_1cd3bc:
    // 0x1cd3bc: 0x8f848d74  lw          $a0, -0x728C($gp)
    ctx->pc = 0x1cd3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_1cd3c0:
    // 0x1cd3c0: 0x24a5f3e0  addiu       $a1, $a1, -0xC20
    ctx->pc = 0x1cd3c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964192));
label_1cd3c4:
    // 0x1cd3c4: 0x8f888dac  lw          $t0, -0x7254($gp)
    ctx->pc = 0x1cd3c4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cd3c8:
    // 0x1cd3c8: 0x24c6f410  addiu       $a2, $a2, -0xBF0
    ctx->pc = 0x1cd3c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964240));
label_1cd3cc:
    // 0x1cd3cc: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x1cd3ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1cd3d0:
    // 0x1cd3d0: 0x1210821  addu        $at, $t1, $at
    ctx->pc = 0x1cd3d0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 1)));
label_1cd3d4:
    // 0x1cd3d4: 0x842a4d96  lh          $t2, 0x4D96($at)
    ctx->pc = 0x1cd3d4u;
    SET_GPR_S32(ctx, 10, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19862)));
label_1cd3d8:
    // 0x1cd3d8: 0xc07a3cc  jal         func_1E8F30
label_1cd3dc:
    if (ctx->pc == 0x1CD3DCu) {
        ctx->pc = 0x1CD3DCu;
            // 0x1cd3dc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CD3E0u;
        goto label_1cd3e0;
    }
    ctx->pc = 0x1CD3D8u;
    SET_GPR_U32(ctx, 31, 0x1CD3E0u);
    ctx->pc = 0x1CD3DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD3D8u;
            // 0x1cd3dc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8F30u;
    if (runtime->hasFunction(0x1E8F30u)) {
        auto targetFn = runtime->lookupFunction(0x1E8F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD3E0u; }
        if (ctx->pc != 0x1CD3E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetupMainUnit__FP1P9mgCMemoryP9mgCMemoryiP6CSceneP16CUserDataManagerii_0x1e8f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD3E0u; }
        if (ctx->pc != 0x1CD3E0u) { return; }
    }
    ctx->pc = 0x1CD3E0u;
label_1cd3e0:
    // 0x1cd3e0: 0xc0683a8  jal         func_1A0EA0
label_1cd3e4:
    if (ctx->pc == 0x1CD3E4u) {
        ctx->pc = 0x1CD3E8u;
        goto label_1cd3e8;
    }
    ctx->pc = 0x1CD3E0u;
    SET_GPR_U32(ctx, 31, 0x1CD3E8u);
    ctx->pc = 0x1A0EA0u;
    if (runtime->hasFunction(0x1A0EA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A0EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD3E8u; }
        if (ctx->pc != 0x1CD3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBattleCharaInfo__Fv_0x1a0ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD3E8u; }
        if (ctx->pc != 0x1CD3E8u) { return; }
    }
    ctx->pc = 0x1CD3E8u;
label_1cd3e8:
    // 0x1cd3e8: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cd3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cd3ec:
    // 0x1cd3ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cd3ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd3f0:
    // 0x1cd3f0: 0xc0a1264  jal         func_284990
label_1cd3f4:
    if (ctx->pc == 0x1CD3F4u) {
        ctx->pc = 0x1CD3F4u;
            // 0x1cd3f4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x1CD3F8u;
        goto label_1cd3f8;
    }
    ctx->pc = 0x1CD3F0u;
    SET_GPR_U32(ctx, 31, 0x1CD3F8u);
    ctx->pc = 0x1CD3F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD3F0u;
            // 0x1cd3f4: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284990u;
    if (runtime->hasFunction(0x284990u)) {
        auto targetFn = runtime->lookupFunction(0x284990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD3F8u; }
        if (ctx->pc != 0x1CD3F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCharaTexb__6CSceneFii_0x284990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD3F8u; }
        if (ctx->pc != 0x1CD3F8u) { return; }
    }
    ctx->pc = 0x1CD3F8u;
label_1cd3f8:
    // 0x1cd3f8: 0xc0c2678  jal         func_3099E0
label_1cd3fc:
    if (ctx->pc == 0x1CD3FCu) {
        ctx->pc = 0x1CD400u;
        goto label_1cd400;
    }
    ctx->pc = 0x1CD3F8u;
    SET_GPR_U32(ctx, 31, 0x1CD400u);
    ctx->pc = 0x3099E0u;
    if (runtime->hasFunction(0x3099E0u)) {
        auto targetFn = runtime->lookupFunction(0x3099E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD400u; }
        if (ctx->pc != 0x1CD400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowLoadingBarStep__Fv_0x3099e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD400u; }
        if (ctx->pc != 0x1CD400u) { return; }
    }
    ctx->pc = 0x1CD400u;
label_1cd400:
    // 0x1cd400: 0x8f858d74  lw          $a1, -0x728C($gp)
    ctx->pc = 0x1cd400u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_1cd404:
    // 0x1cd404: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1cd404u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_1cd408:
    // 0x1cd408: 0x24846f60  addiu       $a0, $a0, 0x6F60
    ctx->pc = 0x1cd408u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28512));
label_1cd40c:
    // 0x1cd40c: 0xc0524c8  jal         func_149320
label_1cd410:
    if (ctx->pc == 0x1CD410u) {
        ctx->pc = 0x1CD410u;
            // 0x1cd410: 0x27a602b8  addiu       $a2, $sp, 0x2B8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 696));
        ctx->pc = 0x1CD414u;
        goto label_1cd414;
    }
    ctx->pc = 0x1CD40Cu;
    SET_GPR_U32(ctx, 31, 0x1CD414u);
    ctx->pc = 0x1CD410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD40Cu;
            // 0x1cd410: 0x27a602b8  addiu       $a2, $sp, 0x2B8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149320u;
    if (runtime->hasFunction(0x149320u)) {
        auto targetFn = runtime->lookupFunction(0x149320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD414u; }
        if (ctx->pc != 0x1CD414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile__FPcPvPi_0x149320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD414u; }
        if (ctx->pc != 0x1CD414u) { return; }
    }
    ctx->pc = 0x1CD414u;
label_1cd414:
    // 0x1cd414: 0x8f848d70  lw          $a0, -0x7290($gp)
    ctx->pc = 0x1cd414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
label_1cd418:
    // 0x1cd418: 0x8f908d74  lw          $s0, -0x728C($gp)
    ctx->pc = 0x1cd418u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_1cd41c:
    // 0x1cd41c: 0xc04e748  jal         func_139D20
label_1cd420:
    if (ctx->pc == 0x1CD420u) {
        ctx->pc = 0x1CD420u;
            // 0x1cd420: 0x2405011b  addiu       $a1, $zero, 0x11B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 283));
        ctx->pc = 0x1CD424u;
        goto label_1cd424;
    }
    ctx->pc = 0x1CD41Cu;
    SET_GPR_U32(ctx, 31, 0x1CD424u);
    ctx->pc = 0x1CD420u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD41Cu;
            // 0x1cd420: 0x2405011b  addiu       $a1, $zero, 0x11B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 283));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD424u; }
        if (ctx->pc != 0x1CD424u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD424u; }
        if (ctx->pc != 0x1CD424u) { return; }
    }
    ctx->pc = 0x1CD424u;
label_1cd424:
    // 0x1cd424: 0x24041190  addiu       $a0, $zero, 0x1190
    ctx->pc = 0x1cd424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4496));
label_1cd428:
    // 0x1cd428: 0xc04e638  jal         func_1398E0
label_1cd42c:
    if (ctx->pc == 0x1CD42Cu) {
        ctx->pc = 0x1CD42Cu;
            // 0x1cd42c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CD430u;
        goto label_1cd430;
    }
    ctx->pc = 0x1CD428u;
    SET_GPR_U32(ctx, 31, 0x1CD430u);
    ctx->pc = 0x1CD42Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD428u;
            // 0x1cd42c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD430u; }
        if (ctx->pc != 0x1CD430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD430u; }
        if (ctx->pc != 0x1CD430u) { return; }
    }
    ctx->pc = 0x1CD430u;
label_1cd430:
    // 0x1cd430: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_1cd434:
    if (ctx->pc == 0x1CD434u) {
        ctx->pc = 0x1CD434u;
            // 0x1cd434: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CD438u;
        goto label_1cd438;
    }
    ctx->pc = 0x1CD430u;
    {
        const bool branch_taken_0x1cd430 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD430u;
            // 0x1cd434: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd430) {
            ctx->pc = 0x1CD484u;
            goto label_1cd484;
        }
    }
    ctx->pc = 0x1CD438u;
label_1cd438:
    // 0x1cd438: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1cd438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1cd43c:
    // 0x1cd43c: 0x24424f10  addiu       $v0, $v0, 0x4F10
    ctx->pc = 0x1cd43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20240));
label_1cd440:
    // 0x1cd440: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x1cd440u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
label_1cd444:
    // 0x1cd444: 0x8e39004c  lw          $t9, 0x4C($s1)
    ctx->pc = 0x1cd444u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_1cd448:
    // 0x1cd448: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1cd448u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1cd44c:
    // 0x1cd44c: 0x320f809  jalr        $t9
label_1cd450:
    if (ctx->pc == 0x1CD450u) {
        ctx->pc = 0x1CD450u;
            // 0x1cd450: 0x26240030  addiu       $a0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->pc = 0x1CD454u;
        goto label_1cd454;
    }
    ctx->pc = 0x1CD44Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CD454u);
        ctx->pc = 0x1CD450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD44Cu;
            // 0x1cd450: 0x26240030  addiu       $a0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CD454u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CD454u; }
            if (ctx->pc != 0x1CD454u) { return; }
        }
        }
    }
    ctx->pc = 0x1CD454u;
label_1cd454:
    // 0x1cd454: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1cd454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1cd458:
    // 0x1cd458: 0x244250b0  addiu       $v0, $v0, 0x50B0
    ctx->pc = 0x1cd458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20656));
label_1cd45c:
    // 0x1cd45c: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x1cd45cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
label_1cd460:
    // 0x1cd460: 0x8e39004c  lw          $t9, 0x4C($s1)
    ctx->pc = 0x1cd460u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 76)));
label_1cd464:
    // 0x1cd464: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1cd464u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1cd468:
    // 0x1cd468: 0x320f809  jalr        $t9
label_1cd46c:
    if (ctx->pc == 0x1CD46Cu) {
        ctx->pc = 0x1CD46Cu;
            // 0x1cd46c: 0x26240030  addiu       $a0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->pc = 0x1CD470u;
        goto label_1cd470;
    }
    ctx->pc = 0x1CD468u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CD470u);
        ctx->pc = 0x1CD46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD468u;
            // 0x1cd46c: 0x26240030  addiu       $a0, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CD470u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CD470u; }
            if (ctx->pc != 0x1CD470u) { return; }
        }
        }
    }
    ctx->pc = 0x1CD470u;
label_1cd470:
    // 0x1cd470: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cd470u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1cd474:
    // 0x1cd474: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cd474u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cd478:
    // 0x1cd478: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cd478u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd47c:
    // 0x1cd47c: 0xc0b7f78  jal         func_2DFDE0
label_1cd480:
    if (ctx->pc == 0x1CD480u) {
        ctx->pc = 0x1CD480u;
            // 0x1cd480: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CD484u;
        goto label_1cd484;
    }
    ctx->pc = 0x1CD47Cu;
    SET_GPR_U32(ctx, 31, 0x1CD484u);
    ctx->pc = 0x1CD480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD47Cu;
            // 0x1cd480: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DFDE0u;
    if (runtime->hasFunction(0x2DFDE0u)) {
        auto targetFn = runtime->lookupFunction(0x2DFDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD484u; }
        if (ctx->pc != 0x1CD484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__16CEffectScriptManFP9mgCMemoryii_0x2dfde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD484u; }
        if (ctx->pc != 0x1CD484u) { return; }
    }
    ctx->pc = 0x1CD484u;
label_1cd484:
    // 0x1cd484: 0x8f858d70  lw          $a1, -0x7290($gp)
    ctx->pc = 0x1cd484u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
label_1cd488:
    // 0x1cd488: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cd488u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cd48c:
    // 0x1cd48c: 0x2406008c  addiu       $a2, $zero, 0x8C
    ctx->pc = 0x1cd48cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
label_1cd490:
    // 0x1cd490: 0x24070020  addiu       $a3, $zero, 0x20
    ctx->pc = 0x1cd490u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1cd494:
    // 0x1cd494: 0xc0b7f78  jal         func_2DFDE0
label_1cd498:
    if (ctx->pc == 0x1CD498u) {
        ctx->pc = 0x1CD498u;
            // 0x1cd498: 0xaf918ddc  sw          $s1, -0x7224($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938076), GPR_U32(ctx, 17));
        ctx->pc = 0x1CD49Cu;
        goto label_1cd49c;
    }
    ctx->pc = 0x1CD494u;
    SET_GPR_U32(ctx, 31, 0x1CD49Cu);
    ctx->pc = 0x1CD498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD494u;
            // 0x1cd498: 0xaf918ddc  sw          $s1, -0x7224($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938076), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DFDE0u;
    if (runtime->hasFunction(0x2DFDE0u)) {
        auto targetFn = runtime->lookupFunction(0x2DFDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD49Cu; }
        if (ctx->pc != 0x1CD49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__16CEffectScriptManFP9mgCMemoryii_0x2dfde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD49Cu; }
        if (ctx->pc != 0x1CD49Cu) { return; }
    }
    ctx->pc = 0x1CD49Cu;
label_1cd49c:
    // 0x1cd49c: 0x8fa302b8  lw          $v1, 0x2B8($sp)
    ctx->pc = 0x1cd49cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 696)));
label_1cd4a0:
    // 0x1cd4a0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1cd4a4:
    if (ctx->pc == 0x1CD4A4u) {
        ctx->pc = 0x1CD4A4u;
            // 0x1cd4a4: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->pc = 0x1CD4A8u;
        goto label_1cd4a8;
    }
    ctx->pc = 0x1CD4A0u;
    {
        const bool branch_taken_0x1cd4a0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1CD4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD4A0u;
            // 0x1cd4a4: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd4a0) {
            ctx->pc = 0x1CD4B0u;
            goto label_1cd4b0;
        }
    }
    ctx->pc = 0x1CD4A8u;
label_1cd4a8:
    // 0x1cd4a8: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1cd4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_1cd4ac:
    // 0x1cd4ac: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1cd4acu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1cd4b0:
    // 0x1cd4b0: 0x8f838d74  lw          $v1, -0x728C($gp)
    ctx->pc = 0x1cd4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_1cd4b4:
    // 0x1cd4b4: 0x22100  sll         $a0, $v0, 4
    ctx->pc = 0x1cd4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1cd4b8:
    // 0x1cd4b8: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x1cd4b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
label_1cd4bc:
    // 0x1cd4bc: 0x8f828ddc  lw          $v0, -0x7224($gp)
    ctx->pc = 0x1cd4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1cd4c0:
    // 0x1cd4c0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1cd4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1cd4c4:
    // 0x1cd4c4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x1cd4c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_1cd4c8:
    // 0x1cd4c8: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1cd4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_1cd4cc:
    // 0x1cd4cc: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1cd4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1cd4d0:
    // 0x1cd4d0: 0xc0b7fc4  jal         func_2DFF10
label_1cd4d4:
    if (ctx->pc == 0x1CD4D4u) {
        ctx->pc = 0x1CD4D4u;
            // 0x1cd4d4: 0x24a5f590  addiu       $a1, $a1, -0xA70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964624));
        ctx->pc = 0x1CD4D8u;
        goto label_1cd4d8;
    }
    ctx->pc = 0x1CD4D0u;
    SET_GPR_U32(ctx, 31, 0x1CD4D8u);
    ctx->pc = 0x1CD4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD4D0u;
            // 0x1cd4d4: 0x24a5f590  addiu       $a1, $a1, -0xA70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DFF10u;
    if (runtime->hasFunction(0x2DFF10u)) {
        auto targetFn = runtime->lookupFunction(0x2DFF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD4D8u; }
        if (ctx->pc != 0x1CD4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWorkBuffer__16CEffectScriptManFP9mgCMemory_0x2dff10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD4D8u; }
        if (ctx->pc != 0x1CD4D8u) { return; }
    }
    ctx->pc = 0x1CD4D8u;
label_1cd4d8:
    // 0x1cd4d8: 0x8f828ddc  lw          $v0, -0x7224($gp)
    ctx->pc = 0x1cd4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1cd4dc:
    // 0x1cd4dc: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cd4dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1cd4e0:
    // 0x1cd4e0: 0x24a56f80  addiu       $a1, $a1, 0x6F80
    ctx->pc = 0x1cd4e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28544));
label_1cd4e4:
    // 0x1cd4e4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cd4e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd4e8:
    // 0x1cd4e8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd4e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd4ec:
    // 0x1cd4ec: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x1cd4ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_1cd4f0:
    // 0x1cd4f0: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1cd4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1cd4f4:
    // 0x1cd4f4: 0xc0b8300  jal         func_2E0C00
label_1cd4f8:
    if (ctx->pc == 0x1CD4F8u) {
        ctx->pc = 0x1CD4F8u;
            // 0x1cd4f8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1CD4FCu;
        goto label_1cd4fc;
    }
    ctx->pc = 0x1CD4F4u;
    SET_GPR_U32(ctx, 31, 0x1CD4FCu);
    ctx->pc = 0x1CD4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD4F4u;
            // 0x1cd4f8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C00u;
    if (runtime->hasFunction(0x2E0C00u)) {
        auto targetFn = runtime->lookupFunction(0x2E0C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD4FCu; }
        if (ctx->pc != 0x1CD4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildPack__16CEffectScriptManFPcPUiP9mgCMemoryi_0x2e0c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD4FCu; }
        if (ctx->pc != 0x1CD4FCu) { return; }
    }
    ctx->pc = 0x1CD4FCu;
label_1cd4fc:
    // 0x1cd4fc: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1cd4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1cd500:
    // 0x1cd500: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cd500u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1cd504:
    // 0x1cd504: 0x24a56f88  addiu       $a1, $a1, 0x6F88
    ctx->pc = 0x1cd504u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28552));
label_1cd508:
    // 0x1cd508: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cd508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd50c:
    // 0x1cd50c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd50cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd510:
    // 0x1cd510: 0xc0b8300  jal         func_2E0C00
label_1cd514:
    if (ctx->pc == 0x1CD514u) {
        ctx->pc = 0x1CD514u;
            // 0x1cd514: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1CD518u;
        goto label_1cd518;
    }
    ctx->pc = 0x1CD510u;
    SET_GPR_U32(ctx, 31, 0x1CD518u);
    ctx->pc = 0x1CD514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD510u;
            // 0x1cd514: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C00u;
    if (runtime->hasFunction(0x2E0C00u)) {
        auto targetFn = runtime->lookupFunction(0x2E0C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD518u; }
        if (ctx->pc != 0x1CD518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildPack__16CEffectScriptManFPcPUiP9mgCMemoryi_0x2e0c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD518u; }
        if (ctx->pc != 0x1CD518u) { return; }
    }
    ctx->pc = 0x1CD518u;
label_1cd518:
    // 0x1cd518: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1cd518u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1cd51c:
    // 0x1cd51c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cd51cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1cd520:
    // 0x1cd520: 0x24a56f90  addiu       $a1, $a1, 0x6F90
    ctx->pc = 0x1cd520u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28560));
label_1cd524:
    // 0x1cd524: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cd524u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd528:
    // 0x1cd528: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd528u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd52c:
    // 0x1cd52c: 0xc0b8300  jal         func_2E0C00
label_1cd530:
    if (ctx->pc == 0x1CD530u) {
        ctx->pc = 0x1CD530u;
            // 0x1cd530: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1CD534u;
        goto label_1cd534;
    }
    ctx->pc = 0x1CD52Cu;
    SET_GPR_U32(ctx, 31, 0x1CD534u);
    ctx->pc = 0x1CD530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD52Cu;
            // 0x1cd530: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C00u;
    if (runtime->hasFunction(0x2E0C00u)) {
        auto targetFn = runtime->lookupFunction(0x2E0C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD534u; }
        if (ctx->pc != 0x1CD534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildPack__16CEffectScriptManFPcPUiP9mgCMemoryi_0x2e0c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD534u; }
        if (ctx->pc != 0x1CD534u) { return; }
    }
    ctx->pc = 0x1CD534u;
label_1cd534:
    // 0x1cd534: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1cd534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1cd538:
    // 0x1cd538: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cd538u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1cd53c:
    // 0x1cd53c: 0x24a56f98  addiu       $a1, $a1, 0x6F98
    ctx->pc = 0x1cd53cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28568));
label_1cd540:
    // 0x1cd540: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cd540u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd544:
    // 0x1cd544: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd544u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd548:
    // 0x1cd548: 0xc0b8300  jal         func_2E0C00
label_1cd54c:
    if (ctx->pc == 0x1CD54Cu) {
        ctx->pc = 0x1CD54Cu;
            // 0x1cd54c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1CD550u;
        goto label_1cd550;
    }
    ctx->pc = 0x1CD548u;
    SET_GPR_U32(ctx, 31, 0x1CD550u);
    ctx->pc = 0x1CD54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD548u;
            // 0x1cd54c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C00u;
    if (runtime->hasFunction(0x2E0C00u)) {
        auto targetFn = runtime->lookupFunction(0x2E0C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD550u; }
        if (ctx->pc != 0x1CD550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildPack__16CEffectScriptManFPcPUiP9mgCMemoryi_0x2e0c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD550u; }
        if (ctx->pc != 0x1CD550u) { return; }
    }
    ctx->pc = 0x1CD550u;
label_1cd550:
    // 0x1cd550: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1cd550u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1cd554:
    // 0x1cd554: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cd554u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1cd558:
    // 0x1cd558: 0x24a56fa8  addiu       $a1, $a1, 0x6FA8
    ctx->pc = 0x1cd558u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28584));
label_1cd55c:
    // 0x1cd55c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cd55cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd560:
    // 0x1cd560: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd560u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd564:
    // 0x1cd564: 0xc0b8300  jal         func_2E0C00
label_1cd568:
    if (ctx->pc == 0x1CD568u) {
        ctx->pc = 0x1CD568u;
            // 0x1cd568: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1CD56Cu;
        goto label_1cd56c;
    }
    ctx->pc = 0x1CD564u;
    SET_GPR_U32(ctx, 31, 0x1CD56Cu);
    ctx->pc = 0x1CD568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD564u;
            // 0x1cd568: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C00u;
    if (runtime->hasFunction(0x2E0C00u)) {
        auto targetFn = runtime->lookupFunction(0x2E0C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD56Cu; }
        if (ctx->pc != 0x1CD56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildPack__16CEffectScriptManFPcPUiP9mgCMemoryi_0x2e0c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD56Cu; }
        if (ctx->pc != 0x1CD56Cu) { return; }
    }
    ctx->pc = 0x1CD56Cu;
label_1cd56c:
    // 0x1cd56c: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1cd56cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1cd570:
    // 0x1cd570: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cd570u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1cd574:
    // 0x1cd574: 0x24a56fb0  addiu       $a1, $a1, 0x6FB0
    ctx->pc = 0x1cd574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28592));
label_1cd578:
    // 0x1cd578: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cd578u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd57c:
    // 0x1cd57c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd57cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd580:
    // 0x1cd580: 0xc0b8300  jal         func_2E0C00
label_1cd584:
    if (ctx->pc == 0x1CD584u) {
        ctx->pc = 0x1CD584u;
            // 0x1cd584: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1CD588u;
        goto label_1cd588;
    }
    ctx->pc = 0x1CD580u;
    SET_GPR_U32(ctx, 31, 0x1CD588u);
    ctx->pc = 0x1CD584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD580u;
            // 0x1cd584: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C00u;
    if (runtime->hasFunction(0x2E0C00u)) {
        auto targetFn = runtime->lookupFunction(0x2E0C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD588u; }
        if (ctx->pc != 0x1CD588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildPack__16CEffectScriptManFPcPUiP9mgCMemoryi_0x2e0c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD588u; }
        if (ctx->pc != 0x1CD588u) { return; }
    }
    ctx->pc = 0x1CD588u;
label_1cd588:
    // 0x1cd588: 0x8f828ddc  lw          $v0, -0x7224($gp)
    ctx->pc = 0x1cd588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1cd58c:
    // 0x1cd58c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cd58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cd590:
    // 0x1cd590: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cd590u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1cd594:
    // 0x1cd594: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cd594u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd598:
    // 0x1cd598: 0x24a56fc0  addiu       $a1, $a1, 0x6FC0
    ctx->pc = 0x1cd598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28608));
label_1cd59c:
    // 0x1cd59c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd59cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd5a0:
    // 0x1cd5a0: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1cd5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_1cd5a4:
    // 0x1cd5a4: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1cd5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1cd5a8:
    // 0x1cd5a8: 0xc0b8300  jal         func_2E0C00
label_1cd5ac:
    if (ctx->pc == 0x1CD5ACu) {
        ctx->pc = 0x1CD5ACu;
            // 0x1cd5ac: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1CD5B0u;
        goto label_1cd5b0;
    }
    ctx->pc = 0x1CD5A8u;
    SET_GPR_U32(ctx, 31, 0x1CD5B0u);
    ctx->pc = 0x1CD5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD5A8u;
            // 0x1cd5ac: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C00u;
    if (runtime->hasFunction(0x2E0C00u)) {
        auto targetFn = runtime->lookupFunction(0x2E0C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD5B0u; }
        if (ctx->pc != 0x1CD5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildPack__16CEffectScriptManFPcPUiP9mgCMemoryi_0x2e0c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD5B0u; }
        if (ctx->pc != 0x1CD5B0u) { return; }
    }
    ctx->pc = 0x1CD5B0u;
label_1cd5b0:
    // 0x1cd5b0: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1cd5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1cd5b4:
    // 0x1cd5b4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cd5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1cd5b8:
    // 0x1cd5b8: 0x24a56fd8  addiu       $a1, $a1, 0x6FD8
    ctx->pc = 0x1cd5b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28632));
label_1cd5bc:
    // 0x1cd5bc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cd5bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd5c0:
    // 0x1cd5c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd5c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd5c4:
    // 0x1cd5c4: 0xc0b8300  jal         func_2E0C00
label_1cd5c8:
    if (ctx->pc == 0x1CD5C8u) {
        ctx->pc = 0x1CD5C8u;
            // 0x1cd5c8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1CD5CCu;
        goto label_1cd5cc;
    }
    ctx->pc = 0x1CD5C4u;
    SET_GPR_U32(ctx, 31, 0x1CD5CCu);
    ctx->pc = 0x1CD5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD5C4u;
            // 0x1cd5c8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C00u;
    if (runtime->hasFunction(0x2E0C00u)) {
        auto targetFn = runtime->lookupFunction(0x2E0C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD5CCu; }
        if (ctx->pc != 0x1CD5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildPack__16CEffectScriptManFPcPUiP9mgCMemoryi_0x2e0c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD5CCu; }
        if (ctx->pc != 0x1CD5CCu) { return; }
    }
    ctx->pc = 0x1CD5CCu;
label_1cd5cc:
    // 0x1cd5cc: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1cd5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1cd5d0:
    // 0x1cd5d0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cd5d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1cd5d4:
    // 0x1cd5d4: 0x24a56fe0  addiu       $a1, $a1, 0x6FE0
    ctx->pc = 0x1cd5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28640));
label_1cd5d8:
    // 0x1cd5d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cd5d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd5dc:
    // 0x1cd5dc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd5dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd5e0:
    // 0x1cd5e0: 0xc0b8300  jal         func_2E0C00
label_1cd5e4:
    if (ctx->pc == 0x1CD5E4u) {
        ctx->pc = 0x1CD5E4u;
            // 0x1cd5e4: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1CD5E8u;
        goto label_1cd5e8;
    }
    ctx->pc = 0x1CD5E0u;
    SET_GPR_U32(ctx, 31, 0x1CD5E8u);
    ctx->pc = 0x1CD5E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD5E0u;
            // 0x1cd5e4: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C00u;
    if (runtime->hasFunction(0x2E0C00u)) {
        auto targetFn = runtime->lookupFunction(0x2E0C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD5E8u; }
        if (ctx->pc != 0x1CD5E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildPack__16CEffectScriptManFPcPUiP9mgCMemoryi_0x2e0c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD5E8u; }
        if (ctx->pc != 0x1CD5E8u) { return; }
    }
    ctx->pc = 0x1CD5E8u;
label_1cd5e8:
    // 0x1cd5e8: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1cd5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1cd5ec:
    // 0x1cd5ec: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cd5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1cd5f0:
    // 0x1cd5f0: 0x24a56ff0  addiu       $a1, $a1, 0x6FF0
    ctx->pc = 0x1cd5f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28656));
label_1cd5f4:
    // 0x1cd5f4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cd5f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd5f8:
    // 0x1cd5f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd5f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd5fc:
    // 0x1cd5fc: 0xc0b8300  jal         func_2E0C00
label_1cd600:
    if (ctx->pc == 0x1CD600u) {
        ctx->pc = 0x1CD600u;
            // 0x1cd600: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1CD604u;
        goto label_1cd604;
    }
    ctx->pc = 0x1CD5FCu;
    SET_GPR_U32(ctx, 31, 0x1CD604u);
    ctx->pc = 0x1CD600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD5FCu;
            // 0x1cd600: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C00u;
    if (runtime->hasFunction(0x2E0C00u)) {
        auto targetFn = runtime->lookupFunction(0x2E0C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD604u; }
        if (ctx->pc != 0x1CD604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildPack__16CEffectScriptManFPcPUiP9mgCMemoryi_0x2e0c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD604u; }
        if (ctx->pc != 0x1CD604u) { return; }
    }
    ctx->pc = 0x1CD604u;
label_1cd604:
    // 0x1cd604: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1cd604u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1cd608:
    // 0x1cd608: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cd608u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1cd60c:
    // 0x1cd60c: 0x24a57008  addiu       $a1, $a1, 0x7008
    ctx->pc = 0x1cd60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28680));
label_1cd610:
    // 0x1cd610: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cd610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd614:
    // 0x1cd614: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd614u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd618:
    // 0x1cd618: 0xc0b8300  jal         func_2E0C00
label_1cd61c:
    if (ctx->pc == 0x1CD61Cu) {
        ctx->pc = 0x1CD61Cu;
            // 0x1cd61c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1CD620u;
        goto label_1cd620;
    }
    ctx->pc = 0x1CD618u;
    SET_GPR_U32(ctx, 31, 0x1CD620u);
    ctx->pc = 0x1CD61Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD618u;
            // 0x1cd61c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C00u;
    if (runtime->hasFunction(0x2E0C00u)) {
        auto targetFn = runtime->lookupFunction(0x2E0C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD620u; }
        if (ctx->pc != 0x1CD620u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildPack__16CEffectScriptManFPcPUiP9mgCMemoryi_0x2e0c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD620u; }
        if (ctx->pc != 0x1CD620u) { return; }
    }
    ctx->pc = 0x1CD620u;
label_1cd620:
    // 0x1cd620: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1cd620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1cd624:
    // 0x1cd624: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cd624u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1cd628:
    // 0x1cd628: 0x24a57018  addiu       $a1, $a1, 0x7018
    ctx->pc = 0x1cd628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28696));
label_1cd62c:
    // 0x1cd62c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cd62cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd630:
    // 0x1cd630: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd630u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd634:
    // 0x1cd634: 0xc0b8300  jal         func_2E0C00
label_1cd638:
    if (ctx->pc == 0x1CD638u) {
        ctx->pc = 0x1CD638u;
            // 0x1cd638: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1CD63Cu;
        goto label_1cd63c;
    }
    ctx->pc = 0x1CD634u;
    SET_GPR_U32(ctx, 31, 0x1CD63Cu);
    ctx->pc = 0x1CD638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD634u;
            // 0x1cd638: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C00u;
    if (runtime->hasFunction(0x2E0C00u)) {
        auto targetFn = runtime->lookupFunction(0x2E0C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD63Cu; }
        if (ctx->pc != 0x1CD63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildPack__16CEffectScriptManFPcPUiP9mgCMemoryi_0x2e0c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD63Cu; }
        if (ctx->pc != 0x1CD63Cu) { return; }
    }
    ctx->pc = 0x1CD63Cu;
label_1cd63c:
    // 0x1cd63c: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1cd63cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1cd640:
    // 0x1cd640: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cd640u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1cd644:
    // 0x1cd644: 0x24a57030  addiu       $a1, $a1, 0x7030
    ctx->pc = 0x1cd644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28720));
label_1cd648:
    // 0x1cd648: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cd648u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd64c:
    // 0x1cd64c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd64cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd650:
    // 0x1cd650: 0xc0b8300  jal         func_2E0C00
label_1cd654:
    if (ctx->pc == 0x1CD654u) {
        ctx->pc = 0x1CD654u;
            // 0x1cd654: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1CD658u;
        goto label_1cd658;
    }
    ctx->pc = 0x1CD650u;
    SET_GPR_U32(ctx, 31, 0x1CD658u);
    ctx->pc = 0x1CD654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD650u;
            // 0x1cd654: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C00u;
    if (runtime->hasFunction(0x2E0C00u)) {
        auto targetFn = runtime->lookupFunction(0x2E0C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD658u; }
        if (ctx->pc != 0x1CD658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildPack__16CEffectScriptManFPcPUiP9mgCMemoryi_0x2e0c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD658u; }
        if (ctx->pc != 0x1CD658u) { return; }
    }
    ctx->pc = 0x1CD658u;
label_1cd658:
    // 0x1cd658: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1cd658u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1cd65c:
    // 0x1cd65c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cd65cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1cd660:
    // 0x1cd660: 0x24a57048  addiu       $a1, $a1, 0x7048
    ctx->pc = 0x1cd660u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28744));
label_1cd664:
    // 0x1cd664: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cd664u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd668:
    // 0x1cd668: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd668u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd66c:
    // 0x1cd66c: 0xc0b8300  jal         func_2E0C00
label_1cd670:
    if (ctx->pc == 0x1CD670u) {
        ctx->pc = 0x1CD670u;
            // 0x1cd670: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1CD674u;
        goto label_1cd674;
    }
    ctx->pc = 0x1CD66Cu;
    SET_GPR_U32(ctx, 31, 0x1CD674u);
    ctx->pc = 0x1CD670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD66Cu;
            // 0x1cd670: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C00u;
    if (runtime->hasFunction(0x2E0C00u)) {
        auto targetFn = runtime->lookupFunction(0x2E0C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD674u; }
        if (ctx->pc != 0x1CD674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildPack__16CEffectScriptManFPcPUiP9mgCMemoryi_0x2e0c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD674u; }
        if (ctx->pc != 0x1CD674u) { return; }
    }
    ctx->pc = 0x1CD674u;
label_1cd674:
    // 0x1cd674: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1cd674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1cd678:
    // 0x1cd678: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cd678u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1cd67c:
    // 0x1cd67c: 0x24a57060  addiu       $a1, $a1, 0x7060
    ctx->pc = 0x1cd67cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28768));
label_1cd680:
    // 0x1cd680: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cd680u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd684:
    // 0x1cd684: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd684u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd688:
    // 0x1cd688: 0xc0b8300  jal         func_2E0C00
label_1cd68c:
    if (ctx->pc == 0x1CD68Cu) {
        ctx->pc = 0x1CD68Cu;
            // 0x1cd68c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1CD690u;
        goto label_1cd690;
    }
    ctx->pc = 0x1CD688u;
    SET_GPR_U32(ctx, 31, 0x1CD690u);
    ctx->pc = 0x1CD68Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD688u;
            // 0x1cd68c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C00u;
    if (runtime->hasFunction(0x2E0C00u)) {
        auto targetFn = runtime->lookupFunction(0x2E0C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD690u; }
        if (ctx->pc != 0x1CD690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildPack__16CEffectScriptManFPcPUiP9mgCMemoryi_0x2e0c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD690u; }
        if (ctx->pc != 0x1CD690u) { return; }
    }
    ctx->pc = 0x1CD690u;
label_1cd690:
    // 0x1cd690: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1cd690u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1cd694:
    // 0x1cd694: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cd694u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1cd698:
    // 0x1cd698: 0x24a57078  addiu       $a1, $a1, 0x7078
    ctx->pc = 0x1cd698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28792));
label_1cd69c:
    // 0x1cd69c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cd69cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd6a0:
    // 0x1cd6a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd6a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd6a4:
    // 0x1cd6a4: 0xc0b8300  jal         func_2E0C00
label_1cd6a8:
    if (ctx->pc == 0x1CD6A8u) {
        ctx->pc = 0x1CD6A8u;
            // 0x1cd6a8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1CD6ACu;
        goto label_1cd6ac;
    }
    ctx->pc = 0x1CD6A4u;
    SET_GPR_U32(ctx, 31, 0x1CD6ACu);
    ctx->pc = 0x1CD6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD6A4u;
            // 0x1cd6a8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C00u;
    if (runtime->hasFunction(0x2E0C00u)) {
        auto targetFn = runtime->lookupFunction(0x2E0C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD6ACu; }
        if (ctx->pc != 0x1CD6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildPack__16CEffectScriptManFPcPUiP9mgCMemoryi_0x2e0c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD6ACu; }
        if (ctx->pc != 0x1CD6ACu) { return; }
    }
    ctx->pc = 0x1CD6ACu;
label_1cd6ac:
    // 0x1cd6ac: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1cd6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1cd6b0:
    // 0x1cd6b0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cd6b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1cd6b4:
    // 0x1cd6b4: 0x24a57090  addiu       $a1, $a1, 0x7090
    ctx->pc = 0x1cd6b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28816));
label_1cd6b8:
    // 0x1cd6b8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cd6b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd6bc:
    // 0x1cd6bc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd6bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd6c0:
    // 0x1cd6c0: 0xc0b8300  jal         func_2E0C00
label_1cd6c4:
    if (ctx->pc == 0x1CD6C4u) {
        ctx->pc = 0x1CD6C4u;
            // 0x1cd6c4: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1CD6C8u;
        goto label_1cd6c8;
    }
    ctx->pc = 0x1CD6C0u;
    SET_GPR_U32(ctx, 31, 0x1CD6C8u);
    ctx->pc = 0x1CD6C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD6C0u;
            // 0x1cd6c4: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C00u;
    if (runtime->hasFunction(0x2E0C00u)) {
        auto targetFn = runtime->lookupFunction(0x2E0C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD6C8u; }
        if (ctx->pc != 0x1CD6C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildPack__16CEffectScriptManFPcPUiP9mgCMemoryi_0x2e0c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD6C8u; }
        if (ctx->pc != 0x1CD6C8u) { return; }
    }
    ctx->pc = 0x1CD6C8u;
label_1cd6c8:
    // 0x1cd6c8: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1cd6c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1cd6cc:
    // 0x1cd6cc: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cd6ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1cd6d0:
    // 0x1cd6d0: 0x24a570a8  addiu       $a1, $a1, 0x70A8
    ctx->pc = 0x1cd6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28840));
label_1cd6d4:
    // 0x1cd6d4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cd6d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd6d8:
    // 0x1cd6d8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd6d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd6dc:
    // 0x1cd6dc: 0xc0b8300  jal         func_2E0C00
label_1cd6e0:
    if (ctx->pc == 0x1CD6E0u) {
        ctx->pc = 0x1CD6E0u;
            // 0x1cd6e0: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1CD6E4u;
        goto label_1cd6e4;
    }
    ctx->pc = 0x1CD6DCu;
    SET_GPR_U32(ctx, 31, 0x1CD6E4u);
    ctx->pc = 0x1CD6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD6DCu;
            // 0x1cd6e0: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C00u;
    if (runtime->hasFunction(0x2E0C00u)) {
        auto targetFn = runtime->lookupFunction(0x2E0C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD6E4u; }
        if (ctx->pc != 0x1CD6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildPack__16CEffectScriptManFPcPUiP9mgCMemoryi_0x2e0c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD6E4u; }
        if (ctx->pc != 0x1CD6E4u) { return; }
    }
    ctx->pc = 0x1CD6E4u;
label_1cd6e4:
    // 0x1cd6e4: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1cd6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1cd6e8:
    // 0x1cd6e8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cd6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1cd6ec:
    // 0x1cd6ec: 0x24a570c0  addiu       $a1, $a1, 0x70C0
    ctx->pc = 0x1cd6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28864));
label_1cd6f0:
    // 0x1cd6f0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cd6f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd6f4:
    // 0x1cd6f4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd6f4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd6f8:
    // 0x1cd6f8: 0xc0b8300  jal         func_2E0C00
label_1cd6fc:
    if (ctx->pc == 0x1CD6FCu) {
        ctx->pc = 0x1CD6FCu;
            // 0x1cd6fc: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1CD700u;
        goto label_1cd700;
    }
    ctx->pc = 0x1CD6F8u;
    SET_GPR_U32(ctx, 31, 0x1CD700u);
    ctx->pc = 0x1CD6FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD6F8u;
            // 0x1cd6fc: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C00u;
    if (runtime->hasFunction(0x2E0C00u)) {
        auto targetFn = runtime->lookupFunction(0x2E0C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD700u; }
        if (ctx->pc != 0x1CD700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildPack__16CEffectScriptManFPcPUiP9mgCMemoryi_0x2e0c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD700u; }
        if (ctx->pc != 0x1CD700u) { return; }
    }
    ctx->pc = 0x1CD700u;
label_1cd700:
    // 0x1cd700: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1cd700u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1cd704:
    // 0x1cd704: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cd704u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1cd708:
    // 0x1cd708: 0x24a570d8  addiu       $a1, $a1, 0x70D8
    ctx->pc = 0x1cd708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28888));
label_1cd70c:
    // 0x1cd70c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cd70cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd710:
    // 0x1cd710: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd710u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd714:
    // 0x1cd714: 0xc0b8300  jal         func_2E0C00
label_1cd718:
    if (ctx->pc == 0x1CD718u) {
        ctx->pc = 0x1CD718u;
            // 0x1cd718: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1CD71Cu;
        goto label_1cd71c;
    }
    ctx->pc = 0x1CD714u;
    SET_GPR_U32(ctx, 31, 0x1CD71Cu);
    ctx->pc = 0x1CD718u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD714u;
            // 0x1cd718: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C00u;
    if (runtime->hasFunction(0x2E0C00u)) {
        auto targetFn = runtime->lookupFunction(0x2E0C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD71Cu; }
        if (ctx->pc != 0x1CD71Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildPack__16CEffectScriptManFPcPUiP9mgCMemoryi_0x2e0c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD71Cu; }
        if (ctx->pc != 0x1CD71Cu) { return; }
    }
    ctx->pc = 0x1CD71Cu;
label_1cd71c:
    // 0x1cd71c: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1cd71cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1cd720:
    // 0x1cd720: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cd720u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1cd724:
    // 0x1cd724: 0x24a570e8  addiu       $a1, $a1, 0x70E8
    ctx->pc = 0x1cd724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28904));
label_1cd728:
    // 0x1cd728: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cd728u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd72c:
    // 0x1cd72c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd72cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd730:
    // 0x1cd730: 0xc0b8300  jal         func_2E0C00
label_1cd734:
    if (ctx->pc == 0x1CD734u) {
        ctx->pc = 0x1CD734u;
            // 0x1cd734: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1CD738u;
        goto label_1cd738;
    }
    ctx->pc = 0x1CD730u;
    SET_GPR_U32(ctx, 31, 0x1CD738u);
    ctx->pc = 0x1CD734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD730u;
            // 0x1cd734: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C00u;
    if (runtime->hasFunction(0x2E0C00u)) {
        auto targetFn = runtime->lookupFunction(0x2E0C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD738u; }
        if (ctx->pc != 0x1CD738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildPack__16CEffectScriptManFPcPUiP9mgCMemoryi_0x2e0c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD738u; }
        if (ctx->pc != 0x1CD738u) { return; }
    }
    ctx->pc = 0x1CD738u;
label_1cd738:
    // 0x1cd738: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1cd738u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1cd73c:
    // 0x1cd73c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cd73cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1cd740:
    // 0x1cd740: 0x24a570f0  addiu       $a1, $a1, 0x70F0
    ctx->pc = 0x1cd740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28912));
label_1cd744:
    // 0x1cd744: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cd744u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd748:
    // 0x1cd748: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd748u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd74c:
    // 0x1cd74c: 0xc0b8300  jal         func_2E0C00
label_1cd750:
    if (ctx->pc == 0x1CD750u) {
        ctx->pc = 0x1CD750u;
            // 0x1cd750: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1CD754u;
        goto label_1cd754;
    }
    ctx->pc = 0x1CD74Cu;
    SET_GPR_U32(ctx, 31, 0x1CD754u);
    ctx->pc = 0x1CD750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD74Cu;
            // 0x1cd750: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C00u;
    if (runtime->hasFunction(0x2E0C00u)) {
        auto targetFn = runtime->lookupFunction(0x2E0C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD754u; }
        if (ctx->pc != 0x1CD754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildPack__16CEffectScriptManFPcPUiP9mgCMemoryi_0x2e0c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD754u; }
        if (ctx->pc != 0x1CD754u) { return; }
    }
    ctx->pc = 0x1CD754u;
label_1cd754:
    // 0x1cd754: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1cd754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1cd758:
    // 0x1cd758: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cd758u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1cd75c:
    // 0x1cd75c: 0x24a570f8  addiu       $a1, $a1, 0x70F8
    ctx->pc = 0x1cd75cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28920));
label_1cd760:
    // 0x1cd760: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cd760u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd764:
    // 0x1cd764: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd764u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd768:
    // 0x1cd768: 0xc0b8300  jal         func_2E0C00
label_1cd76c:
    if (ctx->pc == 0x1CD76Cu) {
        ctx->pc = 0x1CD76Cu;
            // 0x1cd76c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1CD770u;
        goto label_1cd770;
    }
    ctx->pc = 0x1CD768u;
    SET_GPR_U32(ctx, 31, 0x1CD770u);
    ctx->pc = 0x1CD76Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD768u;
            // 0x1cd76c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C00u;
    if (runtime->hasFunction(0x2E0C00u)) {
        auto targetFn = runtime->lookupFunction(0x2E0C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD770u; }
        if (ctx->pc != 0x1CD770u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildPack__16CEffectScriptManFPcPUiP9mgCMemoryi_0x2e0c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD770u; }
        if (ctx->pc != 0x1CD770u) { return; }
    }
    ctx->pc = 0x1CD770u;
label_1cd770:
    // 0x1cd770: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1cd770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1cd774:
    // 0x1cd774: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cd774u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1cd778:
    // 0x1cd778: 0x24a57100  addiu       $a1, $a1, 0x7100
    ctx->pc = 0x1cd778u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28928));
label_1cd77c:
    // 0x1cd77c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cd77cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd780:
    // 0x1cd780: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd780u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd784:
    // 0x1cd784: 0xc0b8300  jal         func_2E0C00
label_1cd788:
    if (ctx->pc == 0x1CD788u) {
        ctx->pc = 0x1CD788u;
            // 0x1cd788: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1CD78Cu;
        goto label_1cd78c;
    }
    ctx->pc = 0x1CD784u;
    SET_GPR_U32(ctx, 31, 0x1CD78Cu);
    ctx->pc = 0x1CD788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD784u;
            // 0x1cd788: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C00u;
    if (runtime->hasFunction(0x2E0C00u)) {
        auto targetFn = runtime->lookupFunction(0x2E0C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD78Cu; }
        if (ctx->pc != 0x1CD78Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildPack__16CEffectScriptManFPcPUiP9mgCMemoryi_0x2e0c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD78Cu; }
        if (ctx->pc != 0x1CD78Cu) { return; }
    }
    ctx->pc = 0x1CD78Cu;
label_1cd78c:
    // 0x1cd78c: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1cd78cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1cd790:
    // 0x1cd790: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cd790u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1cd794:
    // 0x1cd794: 0x24a57108  addiu       $a1, $a1, 0x7108
    ctx->pc = 0x1cd794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28936));
label_1cd798:
    // 0x1cd798: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cd798u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd79c:
    // 0x1cd79c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd79cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd7a0:
    // 0x1cd7a0: 0xc0b8300  jal         func_2E0C00
label_1cd7a4:
    if (ctx->pc == 0x1CD7A4u) {
        ctx->pc = 0x1CD7A4u;
            // 0x1cd7a4: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1CD7A8u;
        goto label_1cd7a8;
    }
    ctx->pc = 0x1CD7A0u;
    SET_GPR_U32(ctx, 31, 0x1CD7A8u);
    ctx->pc = 0x1CD7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD7A0u;
            // 0x1cd7a4: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C00u;
    if (runtime->hasFunction(0x2E0C00u)) {
        auto targetFn = runtime->lookupFunction(0x2E0C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD7A8u; }
        if (ctx->pc != 0x1CD7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildPack__16CEffectScriptManFPcPUiP9mgCMemoryi_0x2e0c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD7A8u; }
        if (ctx->pc != 0x1CD7A8u) { return; }
    }
    ctx->pc = 0x1CD7A8u;
label_1cd7a8:
    // 0x1cd7a8: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1cd7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1cd7ac:
    // 0x1cd7ac: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cd7acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1cd7b0:
    // 0x1cd7b0: 0x24a57110  addiu       $a1, $a1, 0x7110
    ctx->pc = 0x1cd7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28944));
label_1cd7b4:
    // 0x1cd7b4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cd7b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd7b8:
    // 0x1cd7b8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd7b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd7bc:
    // 0x1cd7bc: 0xc0b8300  jal         func_2E0C00
label_1cd7c0:
    if (ctx->pc == 0x1CD7C0u) {
        ctx->pc = 0x1CD7C0u;
            // 0x1cd7c0: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1CD7C4u;
        goto label_1cd7c4;
    }
    ctx->pc = 0x1CD7BCu;
    SET_GPR_U32(ctx, 31, 0x1CD7C4u);
    ctx->pc = 0x1CD7C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD7BCu;
            // 0x1cd7c0: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C00u;
    if (runtime->hasFunction(0x2E0C00u)) {
        auto targetFn = runtime->lookupFunction(0x2E0C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD7C4u; }
        if (ctx->pc != 0x1CD7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildPack__16CEffectScriptManFPcPUiP9mgCMemoryi_0x2e0c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD7C4u; }
        if (ctx->pc != 0x1CD7C4u) { return; }
    }
    ctx->pc = 0x1CD7C4u;
label_1cd7c4:
    // 0x1cd7c4: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1cd7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1cd7c8:
    // 0x1cd7c8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cd7c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1cd7cc:
    // 0x1cd7cc: 0x24a57120  addiu       $a1, $a1, 0x7120
    ctx->pc = 0x1cd7ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28960));
label_1cd7d0:
    // 0x1cd7d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cd7d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd7d4:
    // 0x1cd7d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd7d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd7d8:
    // 0x1cd7d8: 0xc0b8300  jal         func_2E0C00
label_1cd7dc:
    if (ctx->pc == 0x1CD7DCu) {
        ctx->pc = 0x1CD7DCu;
            // 0x1cd7dc: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1CD7E0u;
        goto label_1cd7e0;
    }
    ctx->pc = 0x1CD7D8u;
    SET_GPR_U32(ctx, 31, 0x1CD7E0u);
    ctx->pc = 0x1CD7DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD7D8u;
            // 0x1cd7dc: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C00u;
    if (runtime->hasFunction(0x2E0C00u)) {
        auto targetFn = runtime->lookupFunction(0x2E0C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD7E0u; }
        if (ctx->pc != 0x1CD7E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildPack__16CEffectScriptManFPcPUiP9mgCMemoryi_0x2e0c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD7E0u; }
        if (ctx->pc != 0x1CD7E0u) { return; }
    }
    ctx->pc = 0x1CD7E0u;
label_1cd7e0:
    // 0x1cd7e0: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1cd7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1cd7e4:
    // 0x1cd7e4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cd7e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1cd7e8:
    // 0x1cd7e8: 0x24a57130  addiu       $a1, $a1, 0x7130
    ctx->pc = 0x1cd7e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28976));
label_1cd7ec:
    // 0x1cd7ec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cd7ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd7f0:
    // 0x1cd7f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd7f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd7f4:
    // 0x1cd7f4: 0xc0b8300  jal         func_2E0C00
label_1cd7f8:
    if (ctx->pc == 0x1CD7F8u) {
        ctx->pc = 0x1CD7F8u;
            // 0x1cd7f8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1CD7FCu;
        goto label_1cd7fc;
    }
    ctx->pc = 0x1CD7F4u;
    SET_GPR_U32(ctx, 31, 0x1CD7FCu);
    ctx->pc = 0x1CD7F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD7F4u;
            // 0x1cd7f8: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C00u;
    if (runtime->hasFunction(0x2E0C00u)) {
        auto targetFn = runtime->lookupFunction(0x2E0C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD7FCu; }
        if (ctx->pc != 0x1CD7FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildPack__16CEffectScriptManFPcPUiP9mgCMemoryi_0x2e0c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD7FCu; }
        if (ctx->pc != 0x1CD7FCu) { return; }
    }
    ctx->pc = 0x1CD7FCu;
label_1cd7fc:
    // 0x1cd7fc: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1cd7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1cd800:
    // 0x1cd800: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cd800u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1cd804:
    // 0x1cd804: 0x24a57140  addiu       $a1, $a1, 0x7140
    ctx->pc = 0x1cd804u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28992));
label_1cd808:
    // 0x1cd808: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cd808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd80c:
    // 0x1cd80c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd80cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd810:
    // 0x1cd810: 0xc0b8300  jal         func_2E0C00
label_1cd814:
    if (ctx->pc == 0x1CD814u) {
        ctx->pc = 0x1CD814u;
            // 0x1cd814: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1CD818u;
        goto label_1cd818;
    }
    ctx->pc = 0x1CD810u;
    SET_GPR_U32(ctx, 31, 0x1CD818u);
    ctx->pc = 0x1CD814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD810u;
            // 0x1cd814: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C00u;
    if (runtime->hasFunction(0x2E0C00u)) {
        auto targetFn = runtime->lookupFunction(0x2E0C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD818u; }
        if (ctx->pc != 0x1CD818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildPack__16CEffectScriptManFPcPUiP9mgCMemoryi_0x2e0c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD818u; }
        if (ctx->pc != 0x1CD818u) { return; }
    }
    ctx->pc = 0x1CD818u;
label_1cd818:
    // 0x1cd818: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1cd818u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1cd81c:
    // 0x1cd81c: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cd81cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1cd820:
    // 0x1cd820: 0x24a57150  addiu       $a1, $a1, 0x7150
    ctx->pc = 0x1cd820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29008));
label_1cd824:
    // 0x1cd824: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cd824u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd828:
    // 0x1cd828: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd828u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd82c:
    // 0x1cd82c: 0xc0b8300  jal         func_2E0C00
label_1cd830:
    if (ctx->pc == 0x1CD830u) {
        ctx->pc = 0x1CD830u;
            // 0x1cd830: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1CD834u;
        goto label_1cd834;
    }
    ctx->pc = 0x1CD82Cu;
    SET_GPR_U32(ctx, 31, 0x1CD834u);
    ctx->pc = 0x1CD830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD82Cu;
            // 0x1cd830: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C00u;
    if (runtime->hasFunction(0x2E0C00u)) {
        auto targetFn = runtime->lookupFunction(0x2E0C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD834u; }
        if (ctx->pc != 0x1CD834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildPack__16CEffectScriptManFPcPUiP9mgCMemoryi_0x2e0c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD834u; }
        if (ctx->pc != 0x1CD834u) { return; }
    }
    ctx->pc = 0x1CD834u;
label_1cd834:
    // 0x1cd834: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1cd834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1cd838:
    // 0x1cd838: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cd838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1cd83c:
    // 0x1cd83c: 0x24a57160  addiu       $a1, $a1, 0x7160
    ctx->pc = 0x1cd83cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29024));
label_1cd840:
    // 0x1cd840: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cd840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd844:
    // 0x1cd844: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd844u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd848:
    // 0x1cd848: 0xc0b8300  jal         func_2E0C00
label_1cd84c:
    if (ctx->pc == 0x1CD84Cu) {
        ctx->pc = 0x1CD84Cu;
            // 0x1cd84c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1CD850u;
        goto label_1cd850;
    }
    ctx->pc = 0x1CD848u;
    SET_GPR_U32(ctx, 31, 0x1CD850u);
    ctx->pc = 0x1CD84Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD848u;
            // 0x1cd84c: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C00u;
    if (runtime->hasFunction(0x2E0C00u)) {
        auto targetFn = runtime->lookupFunction(0x2E0C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD850u; }
        if (ctx->pc != 0x1CD850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildPack__16CEffectScriptManFPcPUiP9mgCMemoryi_0x2e0c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD850u; }
        if (ctx->pc != 0x1CD850u) { return; }
    }
    ctx->pc = 0x1CD850u;
label_1cd850:
    // 0x1cd850: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1cd850u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1cd854:
    // 0x1cd854: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cd854u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1cd858:
    // 0x1cd858: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cd858u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd85c:
    // 0x1cd85c: 0x24a57170  addiu       $a1, $a1, 0x7170
    ctx->pc = 0x1cd85cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29040));
label_1cd860:
    // 0x1cd860: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1cd860u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd864:
    // 0x1cd864: 0xc0b8300  jal         func_2E0C00
label_1cd868:
    if (ctx->pc == 0x1CD868u) {
        ctx->pc = 0x1CD868u;
            // 0x1cd868: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1CD86Cu;
        goto label_1cd86c;
    }
    ctx->pc = 0x1CD864u;
    SET_GPR_U32(ctx, 31, 0x1CD86Cu);
    ctx->pc = 0x1CD868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD864u;
            // 0x1cd868: 0x2408ffff  addiu       $t0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0C00u;
    if (runtime->hasFunction(0x2E0C00u)) {
        auto targetFn = runtime->lookupFunction(0x2E0C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD86Cu; }
        if (ctx->pc != 0x1CD86Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BuildPack__16CEffectScriptManFPcPUiP9mgCMemoryi_0x2e0c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD86Cu; }
        if (ctx->pc != 0x1CD86Cu) { return; }
    }
    ctx->pc = 0x1CD86Cu;
label_1cd86c:
    // 0x1cd86c: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cd86cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cd870:
    // 0x1cd870: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cd870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd874:
    // 0x1cd874: 0x8f868ddc  lw          $a2, -0x7224($gp)
    ctx->pc = 0x1cd874u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1cd878:
    // 0x1cd878: 0xc0a1128  jal         func_2844A0
label_1cd87c:
    if (ctx->pc == 0x1CD87Cu) {
        ctx->pc = 0x1CD87Cu;
            // 0x1cd87c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CD880u;
        goto label_1cd880;
    }
    ctx->pc = 0x1CD878u;
    SET_GPR_U32(ctx, 31, 0x1CD880u);
    ctx->pc = 0x1CD87Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD878u;
            // 0x1cd87c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2844A0u;
    if (runtime->hasFunction(0x2844A0u)) {
        auto targetFn = runtime->lookupFunction(0x2844A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD880u; }
        if (ctx->pc != 0x1CD880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignEffect__6CSceneFiP16CEffectScriptManPc_0x2844a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD880u; }
        if (ctx->pc != 0x1CD880u) { return; }
    }
    ctx->pc = 0x1CD880u;
label_1cd880:
    // 0x1cd880: 0x8f838d74  lw          $v1, -0x728C($gp)
    ctx->pc = 0x1cd880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_1cd884:
    // 0x1cd884: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cd884u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1cd888:
    // 0x1cd888: 0x8f828ddc  lw          $v0, -0x7224($gp)
    ctx->pc = 0x1cd888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1cd88c:
    // 0x1cd88c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1cd88cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_1cd890:
    // 0x1cd890: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x1cd890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1cd894:
    // 0x1cd894: 0xc0b80e0  jal         func_2E0380
label_1cd898:
    if (ctx->pc == 0x1CD898u) {
        ctx->pc = 0x1CD898u;
            // 0x1cd898: 0x24a570d8  addiu       $a1, $a1, 0x70D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28888));
        ctx->pc = 0x1CD89Cu;
        goto label_1cd89c;
    }
    ctx->pc = 0x1CD894u;
    SET_GPR_U32(ctx, 31, 0x1CD89Cu);
    ctx->pc = 0x1CD898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD894u;
            // 0x1cd898: 0x24a570d8  addiu       $a1, $a1, 0x70D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0380u;
    if (runtime->hasFunction(0x2E0380u)) {
        auto targetFn = runtime->lookupFunction(0x2E0380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD89Cu; }
        if (ctx->pc != 0x1CD89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBaseChara__16CEffectScriptManFPc_0x2e0380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD89Cu; }
        if (ctx->pc != 0x1CD89Cu) { return; }
    }
    ctx->pc = 0x1CD89Cu;
label_1cd89c:
    // 0x1cd89c: 0x8c510070  lw          $s1, 0x70($v0)
    ctx->pc = 0x1cd89cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_1cd8a0:
    // 0x1cd8a0: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1cd8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_1cd8a4:
    // 0x1cd8a4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cd8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1cd8a8:
    // 0x1cd8a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cd8a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cd8ac:
    // 0x1cd8ac: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1cd8acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
label_1cd8b0:
    // 0x1cd8b0: 0x24a57188  addiu       $a1, $a1, 0x7188
    ctx->pc = 0x1cd8b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29064));
label_1cd8b4:
    // 0x1cd8b4: 0xc04b414  jal         func_12D050
label_1cd8b8:
    if (ctx->pc == 0x1CD8B8u) {
        ctx->pc = 0x1CD8B8u;
            // 0x1cd8b8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1CD8BCu;
        goto label_1cd8bc;
    }
    ctx->pc = 0x1CD8B4u;
    SET_GPR_U32(ctx, 31, 0x1CD8BCu);
    ctx->pc = 0x1CD8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD8B4u;
            // 0x1cd8b8: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD8BCu; }
        if (ctx->pc != 0x1CD8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD8BCu; }
        if (ctx->pc != 0x1CD8BCu) { return; }
    }
    ctx->pc = 0x1CD8BCu;
label_1cd8bc:
    // 0x1cd8bc: 0x8e0602e4  lw          $a2, 0x2E4($s0)
    ctx->pc = 0x1cd8bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 740)));
label_1cd8c0:
    // 0x1cd8c0: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x1cd8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
label_1cd8c4:
    // 0x1cd8c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cd8c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cd8c8:
    // 0x1cd8c8: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1cd8c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cd8cc:
    // 0x1cd8cc: 0xc06da6c  jal         func_1B69B0
label_1cd8d0:
    if (ctx->pc == 0x1CD8D0u) {
        ctx->pc = 0x1CD8D0u;
            // 0x1cd8d0: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->pc = 0x1CD8D4u;
        goto label_1cd8d4;
    }
    ctx->pc = 0x1CD8CCu;
    SET_GPR_U32(ctx, 31, 0x1CD8D4u);
    ctx->pc = 0x1CD8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD8CCu;
            // 0x1cd8d0: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B69B0u;
    if (runtime->hasFunction(0x1B69B0u)) {
        auto targetFn = runtime->lookupFunction(0x1B69B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD8D4u; }
        if (ctx->pc != 0x1CD8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__18CRocketLauncherManFP8mgCFrameiP10mgCTexture_0x1b69b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD8D4u; }
        if (ctx->pc != 0x1CD8D4u) { return; }
    }
    ctx->pc = 0x1CD8D4u;
label_1cd8d4:
    // 0x1cd8d4: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x1cd8d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
label_1cd8d8:
    // 0x1cd8d8: 0xc05d4d0  jal         func_175340
label_1cd8dc:
    if (ctx->pc == 0x1CD8DCu) {
        ctx->pc = 0x1CD8DCu;
            // 0x1cd8dc: 0x24843c90  addiu       $a0, $a0, 0x3C90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15504));
        ctx->pc = 0x1CD8E0u;
        goto label_1cd8e0;
    }
    ctx->pc = 0x1CD8D8u;
    SET_GPR_U32(ctx, 31, 0x1CD8E0u);
    ctx->pc = 0x1CD8DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD8D8u;
            // 0x1cd8dc: 0x24843c90  addiu       $a0, $a0, 0x3C90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175340u;
    if (runtime->hasFunction(0x175340u)) {
        auto targetFn = runtime->lookupFunction(0x175340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD8E0u; }
        if (ctx->pc != 0x1CD8E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CCharacter2Fv_0x175340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD8E0u; }
        if (ctx->pc != 0x1CD8E0u) { return; }
    }
    ctx->pc = 0x1CD8E0u;
label_1cd8e0:
    // 0x1cd8e0: 0x8f858d74  lw          $a1, -0x728C($gp)
    ctx->pc = 0x1cd8e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_1cd8e4:
    // 0x1cd8e4: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1cd8e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_1cd8e8:
    // 0x1cd8e8: 0x248471a0  addiu       $a0, $a0, 0x71A0
    ctx->pc = 0x1cd8e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 29088));
label_1cd8ec:
    // 0x1cd8ec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cd8ecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd8f0:
    // 0x1cd8f0: 0xc0524dc  jal         func_149370
label_1cd8f4:
    if (ctx->pc == 0x1CD8F4u) {
        ctx->pc = 0x1CD8F4u;
            // 0x1cd8f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CD8F8u;
        goto label_1cd8f8;
    }
    ctx->pc = 0x1CD8F0u;
    SET_GPR_U32(ctx, 31, 0x1CD8F8u);
    ctx->pc = 0x1CD8F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD8F0u;
            // 0x1cd8f4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD8F8u; }
        if (ctx->pc != 0x1CD8F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD8F8u; }
        if (ctx->pc != 0x1CD8F8u) { return; }
    }
    ctx->pc = 0x1CD8F8u;
label_1cd8f8:
    // 0x1cd8f8: 0x8f878d70  lw          $a3, -0x7290($gp)
    ctx->pc = 0x1cd8f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
label_1cd8fc:
    // 0x1cd8fc: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x1cd8fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
label_1cd900:
    // 0x1cd900: 0x8f858d74  lw          $a1, -0x728C($gp)
    ctx->pc = 0x1cd900u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_1cd904:
    // 0x1cd904: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x1cd904u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_1cd908:
    // 0x1cd908: 0x24843c90  addiu       $a0, $a0, 0x3C90
    ctx->pc = 0x1cd908u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 15504));
label_1cd90c:
    // 0x1cd90c: 0x24c66e60  addiu       $a2, $a2, 0x6E60
    ctx->pc = 0x1cd90cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28256));
label_1cd910:
    // 0x1cd910: 0x240a004a  addiu       $t2, $zero, 0x4A
    ctx->pc = 0x1cd910u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_1cd914:
    // 0x1cd914: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1cd914u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd918:
    // 0x1cd918: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1cd918u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1cd91c:
    // 0x1cd91c: 0xc05d480  jal         func_175200
label_1cd920:
    if (ctx->pc == 0x1CD920u) {
        ctx->pc = 0x1CD920u;
            // 0x1cd920: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CD924u;
        goto label_1cd924;
    }
    ctx->pc = 0x1CD91Cu;
    SET_GPR_U32(ctx, 31, 0x1CD924u);
    ctx->pc = 0x1CD920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD91Cu;
            // 0x1cd920: 0xe0482d  daddu       $t1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175200u;
    if (runtime->hasFunction(0x175200u)) {
        auto targetFn = runtime->lookupFunction(0x175200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD924u; }
        if (ctx->pc != 0x1CD924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadPackNoLine__11CCharacter2FPUiPcP9mgCMemoryP9mgCMemoryP9mgCMemoryiP11CCharacter2_0x175200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD924u; }
        if (ctx->pc != 0x1CD924u) { return; }
    }
    ctx->pc = 0x1CD924u;
label_1cd924:
    // 0x1cd924: 0x3c0101eb  lui         $at, 0x1EB
    ctx->pc = 0x1cd924u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)491 << 16));
label_1cd928:
    // 0x1cd928: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1cd928u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_1cd92c:
    // 0x1cd92c: 0x8c303d00  lw          $s0, 0x3D00($at)
    ctx->pc = 0x1cd92cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 15616)));
label_1cd930:
    // 0x1cd930: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cd930u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1cd934:
    // 0x1cd934: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1cd934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
label_1cd938:
    // 0x1cd938: 0x24a571c8  addiu       $a1, $a1, 0x71C8
    ctx->pc = 0x1cd938u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29128));
label_1cd93c:
    // 0x1cd93c: 0xc04b414  jal         func_12D050
label_1cd940:
    if (ctx->pc == 0x1CD940u) {
        ctx->pc = 0x1CD940u;
            // 0x1cd940: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1CD944u;
        goto label_1cd944;
    }
    ctx->pc = 0x1CD93Cu;
    SET_GPR_U32(ctx, 31, 0x1CD944u);
    ctx->pc = 0x1CD940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD93Cu;
            // 0x1cd940: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD944u; }
        if (ctx->pc != 0x1CD944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD944u; }
        if (ctx->pc != 0x1CD944u) { return; }
    }
    ctx->pc = 0x1CD944u;
label_1cd944:
    // 0x1cd944: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x1cd944u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
label_1cd948:
    // 0x1cd948: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cd948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd94c:
    // 0x1cd94c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1cd94cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cd950:
    // 0x1cd950: 0x24842990  addiu       $a0, $a0, 0x2990
    ctx->pc = 0x1cd950u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10640));
label_1cd954:
    // 0x1cd954: 0xc06dfb4  jal         func_1B7ED0
label_1cd958:
    if (ctx->pc == 0x1CD958u) {
        ctx->pc = 0x1CD958u;
            // 0x1cd958: 0x2406004a  addiu       $a2, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->pc = 0x1CD95Cu;
        goto label_1cd95c;
    }
    ctx->pc = 0x1CD954u;
    SET_GPR_U32(ctx, 31, 0x1CD95Cu);
    ctx->pc = 0x1CD958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD954u;
            // 0x1cd958: 0x2406004a  addiu       $a2, $zero, 0x4A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7ED0u;
    if (runtime->hasFunction(0x1B7ED0u)) {
        auto targetFn = runtime->lookupFunction(0x1B7ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD95Cu; }
        if (ctx->pc != 0x1CD95Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__12CLaserGunManFP8mgCFrameiP10mgCTexture_0x1b7ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD95Cu; }
        if (ctx->pc != 0x1CD95Cu) { return; }
    }
    ctx->pc = 0x1CD95Cu;
label_1cd95c:
    // 0x1cd95c: 0xc0b80ec  jal         func_2E03B0
label_1cd960:
    if (ctx->pc == 0x1CD960u) {
        ctx->pc = 0x1CD960u;
            // 0x1cd960: 0x8f848ddc  lw          $a0, -0x7224($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
        ctx->pc = 0x1CD964u;
        goto label_1cd964;
    }
    ctx->pc = 0x1CD95Cu;
    SET_GPR_U32(ctx, 31, 0x1CD964u);
    ctx->pc = 0x1CD960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD95Cu;
            // 0x1cd960: 0x8f848ddc  lw          $a0, -0x7224($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E03B0u;
    if (runtime->hasFunction(0x2E03B0u)) {
        auto targetFn = runtime->lookupFunction(0x2E03B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD964u; }
        if (ctx->pc != 0x1CD964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNotUsedTexb__16CEffectScriptManFv_0x2e03b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD964u; }
        if (ctx->pc != 0x1CD964u) { return; }
    }
    ctx->pc = 0x1CD964u;
label_1cd964:
    // 0x1cd964: 0x8f838db0  lw          $v1, -0x7250($gp)
    ctx->pc = 0x1cd964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1cd968:
    // 0x1cd968: 0xac6200a0  sw          $v0, 0xA0($v1)
    ctx->pc = 0x1cd968u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 160), GPR_U32(ctx, 2));
label_1cd96c:
    // 0x1cd96c: 0x8f848d70  lw          $a0, -0x7290($gp)
    ctx->pc = 0x1cd96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
label_1cd970:
    // 0x1cd970: 0xc04e748  jal         func_139D20
label_1cd974:
    if (ctx->pc == 0x1CD974u) {
        ctx->pc = 0x1CD974u;
            // 0x1cd974: 0x24051011  addiu       $a1, $zero, 0x1011 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4113));
        ctx->pc = 0x1CD978u;
        goto label_1cd978;
    }
    ctx->pc = 0x1CD970u;
    SET_GPR_U32(ctx, 31, 0x1CD978u);
    ctx->pc = 0x1CD974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD970u;
            // 0x1cd974: 0x24051011  addiu       $a1, $zero, 0x1011 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4113));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD978u; }
        if (ctx->pc != 0x1CD978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD978u; }
        if (ctx->pc != 0x1CD978u) { return; }
    }
    ctx->pc = 0x1CD978u;
label_1cd978:
    // 0x1cd978: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x1cd978u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_1cd97c:
    // 0x1cd97c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cd97cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cd980:
    // 0x1cd980: 0xc04e638  jal         func_1398E0
label_1cd984:
    if (ctx->pc == 0x1CD984u) {
        ctx->pc = 0x1CD984u;
            // 0x1cd984: 0x346400f0  ori         $a0, $v1, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)240);
        ctx->pc = 0x1CD988u;
        goto label_1cd988;
    }
    ctx->pc = 0x1CD980u;
    SET_GPR_U32(ctx, 31, 0x1CD988u);
    ctx->pc = 0x1CD984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD980u;
            // 0x1cd984: 0x346400f0  ori         $a0, $v1, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)240);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD988u; }
        if (ctx->pc != 0x1CD988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD988u; }
        if (ctx->pc != 0x1CD988u) { return; }
    }
    ctx->pc = 0x1CD988u;
label_1cd988:
    // 0x1cd988: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_1cd98c:
    if (ctx->pc == 0x1CD98Cu) {
        ctx->pc = 0x1CD98Cu;
            // 0x1cd98c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CD990u;
        goto label_1cd990;
    }
    ctx->pc = 0x1CD988u;
    {
        const bool branch_taken_0x1cd988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD988u;
            // 0x1cd98c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd988) {
            ctx->pc = 0x1CD9F4u;
            goto label_1cd9f4;
        }
    }
    ctx->pc = 0x1CD990u;
label_1cd990:
    // 0x1cd990: 0x26110004  addiu       $s1, $s0, 0x4
    ctx->pc = 0x1cd990u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1cd994:
    // 0x1cd994: 0xc04e640  jal         func_139900
label_1cd998:
    if (ctx->pc == 0x1CD998u) {
        ctx->pc = 0x1CD998u;
            // 0x1cd998: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CD99Cu;
        goto label_1cd99c;
    }
    ctx->pc = 0x1CD994u;
    SET_GPR_U32(ctx, 31, 0x1CD99Cu);
    ctx->pc = 0x1CD998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD994u;
            // 0x1cd998: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD99Cu; }
        if (ctx->pc != 0x1CD99Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD99Cu; }
        if (ctx->pc != 0x1CD99Cu) { return; }
    }
    ctx->pc = 0x1CD99Cu;
label_1cd99c:
    // 0x1cd99c: 0x26310030  addiu       $s1, $s1, 0x30
    ctx->pc = 0x1cd99cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_1cd9a0:
    // 0x1cd9a0: 0x26020484  addiu       $v0, $s0, 0x484
    ctx->pc = 0x1cd9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1156));
label_1cd9a4:
    // 0x1cd9a4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1cd9a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1cd9a8:
    // 0x1cd9a8: 0x0  nop
    ctx->pc = 0x1cd9a8u;
    // NOP
label_1cd9ac:
    // 0x1cd9ac: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1cd9b0:
    if (ctx->pc == 0x1CD9B0u) {
        ctx->pc = 0x1CD9B4u;
        goto label_1cd9b4;
    }
    ctx->pc = 0x1CD9ACu;
    {
        const bool branch_taken_0x1cd9ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd9ac) {
            ctx->pc = 0x1CD994u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cd994;
        }
    }
    ctx->pc = 0x1CD9B4u;
label_1cd9b4:
    // 0x1cd9b4: 0x261104f0  addiu       $s1, $s0, 0x4F0
    ctx->pc = 0x1cd9b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 1264));
label_1cd9b8:
    // 0x1cd9b8: 0xc06aec4  jal         func_1ABB10
label_1cd9bc:
    if (ctx->pc == 0x1CD9BCu) {
        ctx->pc = 0x1CD9BCu;
            // 0x1cd9bc: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x1CD9C0u;
        goto label_1cd9c0;
    }
    ctx->pc = 0x1CD9B8u;
    SET_GPR_U32(ctx, 31, 0x1CD9C0u);
    ctx->pc = 0x1CD9BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD9B8u;
            // 0x1cd9bc: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ABB10u;
    if (runtime->hasFunction(0x1ABB10u)) {
        auto targetFn = runtime->lookupFunction(0x1ABB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD9C0u; }
        if (ctx->pc != 0x1CD9C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__12CActionCharaFv_0x1abb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD9C0u; }
        if (ctx->pc != 0x1CD9C0u) { return; }
    }
    ctx->pc = 0x1CD9C0u;
label_1cd9c0:
    // 0x1cd9c0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1cd9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1cd9c4:
    // 0x1cd9c4: 0x26241050  addiu       $a0, $s1, 0x1050
    ctx->pc = 0x1cd9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4176));
label_1cd9c8:
    // 0x1cd9c8: 0x24425bd0  addiu       $v0, $v0, 0x5BD0
    ctx->pc = 0x1cd9c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23504));
label_1cd9cc:
    // 0x1cd9cc: 0xc061b34  jal         func_186CD0
label_1cd9d0:
    if (ctx->pc == 0x1CD9D0u) {
        ctx->pc = 0x1CD9D0u;
            // 0x1cd9d0: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x1CD9D4u;
        goto label_1cd9d4;
    }
    ctx->pc = 0x1CD9CCu;
    SET_GPR_U32(ctx, 31, 0x1CD9D4u);
    ctx->pc = 0x1CD9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD9CCu;
            // 0x1cd9d0: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186CD0u;
    if (runtime->hasFunction(0x186CD0u)) {
        auto targetFn = runtime->lookupFunction(0x186CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD9D4u; }
        if (ctx->pc != 0x1CD9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10CRunScriptFv_0x186cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD9D4u; }
        if (ctx->pc != 0x1CD9D4u) { return; }
    }
    ctx->pc = 0x1CD9D4u;
label_1cd9d4:
    // 0x1cd9d4: 0xc07384c  jal         func_1CE130
label_1cd9d8:
    if (ctx->pc == 0x1CD9D8u) {
        ctx->pc = 0x1CD9D8u;
            // 0x1cd9d8: 0x26241370  addiu       $a0, $s1, 0x1370 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4976));
        ctx->pc = 0x1CD9DCu;
        goto label_1cd9dc;
    }
    ctx->pc = 0x1CD9D4u;
    SET_GPR_U32(ctx, 31, 0x1CD9DCu);
    ctx->pc = 0x1CD9D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD9D4u;
            // 0x1cd9d8: 0x26241370  addiu       $a0, $s1, 0x1370 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE130u;
    if (runtime->hasFunction(0x1CE130u)) {
        auto targetFn = runtime->lookupFunction(0x1CE130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD9DCu; }
        if (ctx->pc != 0x1CD9DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13MoveCheckInfoFv_0x1ce130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD9DCu; }
        if (ctx->pc != 0x1CD9DCu) { return; }
    }
    ctx->pc = 0x1CD9DCu;
label_1cd9dc:
    // 0x1cd9dc: 0x3401fdf0  ori         $at, $zero, 0xFDF0
    ctx->pc = 0x1cd9dcu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65008);
label_1cd9e0:
    // 0x1cd9e0: 0x263114c0  addiu       $s1, $s1, 0x14C0
    ctx->pc = 0x1cd9e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 5312));
label_1cd9e4:
    // 0x1cd9e4: 0x2011021  addu        $v0, $s0, $at
    ctx->pc = 0x1cd9e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 1)));
label_1cd9e8:
    // 0x1cd9e8: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x1cd9e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1cd9ec:
    // 0x1cd9ec: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_1cd9f0:
    if (ctx->pc == 0x1CD9F0u) {
        ctx->pc = 0x1CD9F4u;
        goto label_1cd9f4;
    }
    ctx->pc = 0x1CD9ECu;
    {
        const bool branch_taken_0x1cd9ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd9ec) {
            ctx->pc = 0x1CD9B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cd9b8;
        }
    }
    ctx->pc = 0x1CD9F4u;
label_1cd9f4:
    // 0x1cd9f4: 0x0  nop
    ctx->pc = 0x1cd9f4u;
    // NOP
label_1cd9f8:
    // 0x1cd9f8: 0x8f858dac  lw          $a1, -0x7254($gp)
    ctx->pc = 0x1cd9f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cd9fc:
    // 0x1cd9fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cd9fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cda00:
    // 0x1cda00: 0xc076bb0  jal         func_1DAEC0
label_1cda04:
    if (ctx->pc == 0x1CDA04u) {
        ctx->pc = 0x1CDA04u;
            // 0x1cda04: 0xaf908db8  sw          $s0, -0x7248($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938040), GPR_U32(ctx, 16));
        ctx->pc = 0x1CDA08u;
        goto label_1cda08;
    }
    ctx->pc = 0x1CDA00u;
    SET_GPR_U32(ctx, 31, 0x1CDA08u);
    ctx->pc = 0x1CDA04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDA00u;
            // 0x1cda04: 0xaf908db8  sw          $s0, -0x7248($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938040), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DAEC0u;
    if (runtime->hasFunction(0x1DAEC0u)) {
        auto targetFn = runtime->lookupFunction(0x1DAEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDA08u; }
        if (ctx->pc != 0x1CDA08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CMonsterManFP6CScene_0x1daec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDA08u; }
        if (ctx->pc != 0x1CDA08u) { return; }
    }
    ctx->pc = 0x1CDA08u;
label_1cda08:
    // 0x1cda08: 0xc0739cc  jal         func_1CE730
label_1cda0c:
    if (ctx->pc == 0x1CDA0Cu) {
        ctx->pc = 0x1CDA10u;
        goto label_1cda10;
    }
    ctx->pc = 0x1CDA08u;
    SET_GPR_U32(ctx, 31, 0x1CDA10u);
    ctx->pc = 0x1CE730u;
    if (runtime->hasFunction(0x1CE730u)) {
        auto targetFn = runtime->lookupFunction(0x1CE730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDA10u; }
        if (ctx->pc != 0x1CDA10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CommonClassInit__Fv_0x1ce730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDA10u; }
        if (ctx->pc != 0x1CDA10u) { return; }
    }
    ctx->pc = 0x1CDA10u;
label_1cda10:
    // 0x1cda10: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cda10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cda14:
    // 0x1cda14: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cda14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cda18:
    // 0x1cda18: 0xac20064c  sw          $zero, 0x64C($at)
    ctx->pc = 0x1cda18u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1612), GPR_U32(ctx, 0));
label_1cda1c:
    // 0x1cda1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cda1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cda20:
    // 0x1cda20: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cda20u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cda24:
    // 0x1cda24: 0xac200480  sw          $zero, 0x480($at)
    ctx->pc = 0x1cda24u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1152), GPR_U32(ctx, 0));
label_1cda28:
    // 0x1cda28: 0x3c0301ea  lui         $v1, 0x1EA
    ctx->pc = 0x1cda28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)490 << 16));
label_1cda2c:
    // 0x1cda2c: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x1cda2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
label_1cda30:
    // 0x1cda30: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x1cda30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1cda34:
    // 0x1cda34: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1cda34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1cda38:
    // 0x1cda38: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x1cda38u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
label_1cda3c:
    // 0x1cda3c: 0x28820004  slti        $v0, $a0, 0x4
    ctx->pc = 0x1cda3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)4) ? 1 : 0);
label_1cda40:
    // 0x1cda40: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x1cda40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
label_1cda44:
    // 0x1cda44: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1cda44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_1cda48:
    // 0x1cda48: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x1cda48u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
label_1cda4c:
    // 0x1cda4c: 0xacc00010  sw          $zero, 0x10($a2)
    ctx->pc = 0x1cda4cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 0));
label_1cda50:
    // 0x1cda50: 0xacc00014  sw          $zero, 0x14($a2)
    ctx->pc = 0x1cda50u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 0));
label_1cda54:
    // 0x1cda54: 0xacc00018  sw          $zero, 0x18($a2)
    ctx->pc = 0x1cda54u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 0));
label_1cda58:
    // 0x1cda58: 0xacc0001c  sw          $zero, 0x1C($a2)
    ctx->pc = 0x1cda58u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 0));
label_1cda5c:
    // 0x1cda5c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_1cda60:
    if (ctx->pc == 0x1CDA60u) {
        ctx->pc = 0x1CDA60u;
            // 0x1cda60: 0xacc00020  sw          $zero, 0x20($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
        ctx->pc = 0x1CDA64u;
        goto label_1cda64;
    }
    ctx->pc = 0x1CDA5Cu;
    {
        const bool branch_taken_0x1cda5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDA5Cu;
            // 0x1cda60: 0xacc00020  sw          $zero, 0x20($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cda5c) {
            ctx->pc = 0x1CDA30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cda30;
        }
    }
    ctx->pc = 0x1CDA64u;
label_1cda64:
    // 0x1cda64: 0x2881000c  slti        $at, $a0, 0xC
    ctx->pc = 0x1cda64u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
label_1cda68:
    // 0x1cda68: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
label_1cda6c:
    if (ctx->pc == 0x1CDA6Cu) {
        ctx->pc = 0x1CDA6Cu;
            // 0x1cda6c: 0x42880  sll         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->pc = 0x1CDA70u;
        goto label_1cda70;
    }
    ctx->pc = 0x1CDA68u;
    {
        const bool branch_taken_0x1cda68 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDA68u;
            // 0x1cda6c: 0x42880  sll         $a1, $a0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cda68) {
            ctx->pc = 0x1CDA98u;
            goto label_1cda98;
        }
    }
    ctx->pc = 0x1CDA70u;
label_1cda70:
    // 0x1cda70: 0x3c0301ea  lui         $v1, 0x1EA
    ctx->pc = 0x1cda70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)490 << 16));
label_1cda74:
    // 0x1cda74: 0x24630480  addiu       $v1, $v1, 0x480
    ctx->pc = 0x1cda74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1152));
label_1cda78:
    // 0x1cda78: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x1cda78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1cda7c:
    // 0x1cda7c: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1cda7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1cda80:
    // 0x1cda80: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1cda80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_1cda84:
    // 0x1cda84: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1cda84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_1cda88:
    // 0x1cda88: 0x2882000c  slti        $v0, $a0, 0xC
    ctx->pc = 0x1cda88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)12) ? 1 : 0);
label_1cda8c:
    // 0x1cda8c: 0x0  nop
    ctx->pc = 0x1cda8cu;
    // NOP
label_1cda90:
    // 0x1cda90: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1cda94:
    if (ctx->pc == 0x1CDA94u) {
        ctx->pc = 0x1CDA98u;
        goto label_1cda98;
    }
    ctx->pc = 0x1CDA90u;
    {
        const bool branch_taken_0x1cda90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cda90) {
            ctx->pc = 0x1CDA78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cda78;
        }
    }
    ctx->pc = 0x1CDA98u;
label_1cda98:
    // 0x1cda98: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cda98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cda9c:
    // 0x1cda9c: 0xac2004b4  sw          $zero, 0x4B4($at)
    ctx->pc = 0x1cda9cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1204), GPR_U32(ctx, 0));
label_1cdaa0:
    // 0x1cdaa0: 0x3c0243a0  lui         $v0, 0x43A0
    ctx->pc = 0x1cdaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17312 << 16));
label_1cdaa4:
    // 0x1cdaa4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cdaa4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cdaa8:
    // 0x1cdaa8: 0x8f848d70  lw          $a0, -0x7290($gp)
    ctx->pc = 0x1cdaa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
label_1cdaac:
    // 0x1cdaac: 0xac200654  sw          $zero, 0x654($at)
    ctx->pc = 0x1cdaacu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1620), GPR_U32(ctx, 0));
label_1cdab0:
    // 0x1cdab0: 0x24050629  addiu       $a1, $zero, 0x629
    ctx->pc = 0x1cdab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1577));
label_1cdab4:
    // 0x1cdab4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cdab4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cdab8:
    // 0x1cdab8: 0xac200668  sw          $zero, 0x668($at)
    ctx->pc = 0x1cdab8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1640), GPR_U32(ctx, 0));
label_1cdabc:
    // 0x1cdabc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cdabcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cdac0:
    // 0x1cdac0: 0xac20067c  sw          $zero, 0x67C($at)
    ctx->pc = 0x1cdac0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1660), GPR_U32(ctx, 0));
label_1cdac4:
    // 0x1cdac4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cdac4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cdac8:
    // 0x1cdac8: 0xac200690  sw          $zero, 0x690($at)
    ctx->pc = 0x1cdac8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1680), GPR_U32(ctx, 0));
label_1cdacc:
    // 0x1cdacc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cdaccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cdad0:
    // 0x1cdad0: 0xac2006a4  sw          $zero, 0x6A4($at)
    ctx->pc = 0x1cdad0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1700), GPR_U32(ctx, 0));
label_1cdad4:
    // 0x1cdad4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cdad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cdad8:
    // 0x1cdad8: 0xac2006b8  sw          $zero, 0x6B8($at)
    ctx->pc = 0x1cdad8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1720), GPR_U32(ctx, 0));
label_1cdadc:
    // 0x1cdadc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cdadcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cdae0:
    // 0x1cdae0: 0xac2006cc  sw          $zero, 0x6CC($at)
    ctx->pc = 0x1cdae0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1740), GPR_U32(ctx, 0));
label_1cdae4:
    // 0x1cdae4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cdae4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cdae8:
    // 0x1cdae8: 0xac2006e0  sw          $zero, 0x6E0($at)
    ctx->pc = 0x1cdae8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1760), GPR_U32(ctx, 0));
label_1cdaec:
    // 0x1cdaec: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cdaecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cdaf0:
    // 0x1cdaf0: 0xac200644  sw          $zero, 0x644($at)
    ctx->pc = 0x1cdaf0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1604), GPR_U32(ctx, 0));
label_1cdaf4:
    // 0x1cdaf4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cdaf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cdaf8:
    // 0x1cdaf8: 0xac200648  sw          $zero, 0x648($at)
    ctx->pc = 0x1cdaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1608), GPR_U32(ctx, 0));
label_1cdafc:
    // 0x1cdafc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cdafcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cdb00:
    // 0x1cdb00: 0xac200650  sw          $zero, 0x650($at)
    ctx->pc = 0x1cdb00u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1616), GPR_U32(ctx, 0));
label_1cdb04:
    // 0x1cdb04: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cdb04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cdb08:
    // 0x1cdb08: 0xac2004bc  sw          $zero, 0x4BC($at)
    ctx->pc = 0x1cdb08u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1212), GPR_U32(ctx, 0));
label_1cdb0c:
    // 0x1cdb0c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cdb0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cdb10:
    // 0x1cdb10: 0xac2006fc  sw          $zero, 0x6FC($at)
    ctx->pc = 0x1cdb10u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1788), GPR_U32(ctx, 0));
label_1cdb14:
    // 0x1cdb14: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cdb14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cdb18:
    // 0x1cdb18: 0xac200704  sw          $zero, 0x704($at)
    ctx->pc = 0x1cdb18u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1796), GPR_U32(ctx, 0));
label_1cdb1c:
    // 0x1cdb1c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cdb1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cdb20:
    // 0x1cdb20: 0xac220640  sw          $v0, 0x640($at)
    ctx->pc = 0x1cdb20u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1600), GPR_U32(ctx, 2));
label_1cdb24:
    // 0x1cdb24: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cdb24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cdb28:
    // 0x1cdb28: 0xc04e748  jal         func_139D20
label_1cdb2c:
    if (ctx->pc == 0x1CDB2Cu) {
        ctx->pc = 0x1CDB2Cu;
            // 0x1cdb2c: 0xac22063c  sw          $v0, 0x63C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 1596), GPR_U32(ctx, 2));
        ctx->pc = 0x1CDB30u;
        goto label_1cdb30;
    }
    ctx->pc = 0x1CDB28u;
    SET_GPR_U32(ctx, 31, 0x1CDB30u);
    ctx->pc = 0x1CDB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDB28u;
            // 0x1cdb2c: 0xac22063c  sw          $v0, 0x63C($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 1596), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDB30u; }
        if (ctx->pc != 0x1CDB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDB30u; }
        if (ctx->pc != 0x1CDB30u) { return; }
    }
    ctx->pc = 0x1CDB30u;
label_1cdb30:
    // 0x1cdb30: 0x24046270  addiu       $a0, $zero, 0x6270
    ctx->pc = 0x1cdb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 25200));
label_1cdb34:
    // 0x1cdb34: 0xc04e63c  jal         func_1398F0
label_1cdb38:
    if (ctx->pc == 0x1CDB38u) {
        ctx->pc = 0x1CDB38u;
            // 0x1cdb38: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CDB3Cu;
        goto label_1cdb3c;
    }
    ctx->pc = 0x1CDB34u;
    SET_GPR_U32(ctx, 31, 0x1CDB3Cu);
    ctx->pc = 0x1CDB38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDB34u;
            // 0x1cdb38: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDB3Cu; }
        if (ctx->pc != 0x1CDB3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDB3Cu; }
        if (ctx->pc != 0x1CDB3Cu) { return; }
    }
    ctx->pc = 0x1CDB3Cu;
label_1cdb3c:
    // 0x1cdb3c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cdb3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cdb40:
    // 0x1cdb40: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cdb40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cdb44:
    // 0x1cdb44: 0xac22064c  sw          $v0, 0x64C($at)
    ctx->pc = 0x1cdb44u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1612), GPR_U32(ctx, 2));
label_1cdb48:
    // 0x1cdb48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1cdb48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cdb4c:
    // 0x1cdb4c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1cdb4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1cdb50:
    // 0x1cdb50: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cdb50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cdb54:
    // 0x1cdb54: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x1cdb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1cdb58:
    // 0x1cdb58: 0x8c24064c  lw          $a0, 0x64C($at)
    ctx->pc = 0x1cdb58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 1612)));
label_1cdb5c:
    // 0x1cdb5c: 0x2843037c  slti        $v1, $v0, 0x37C
    ctx->pc = 0x1cdb5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)892) ? 1 : 0);
label_1cdb60:
    // 0x1cdb60: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1cdb60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1cdb64:
    // 0x1cdb64: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cdb64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cdb68:
    // 0x1cdb68: 0xa4850004  sh          $a1, 0x4($a0)
    ctx->pc = 0x1cdb68u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4), (uint16_t)GPR_U32(ctx, 5));
label_1cdb6c:
    // 0x1cdb6c: 0xa4800006  sh          $zero, 0x6($a0)
    ctx->pc = 0x1cdb6cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 0));
label_1cdb70:
    // 0x1cdb70: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x1cdb70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_1cdb74:
    // 0x1cdb74: 0xa4850008  sh          $a1, 0x8($a0)
    ctx->pc = 0x1cdb74u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 8), (uint16_t)GPR_U32(ctx, 5));
label_1cdb78:
    // 0x1cdb78: 0xa080000a  sb          $zero, 0xA($a0)
    ctx->pc = 0x1cdb78u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 10), (uint8_t)GPR_U32(ctx, 0));
label_1cdb7c:
    // 0x1cdb7c: 0xa080000b  sb          $zero, 0xB($a0)
    ctx->pc = 0x1cdb7cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 11), (uint8_t)GPR_U32(ctx, 0));
label_1cdb80:
    // 0x1cdb80: 0xa480000c  sh          $zero, 0xC($a0)
    ctx->pc = 0x1cdb80u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 12), (uint16_t)GPR_U32(ctx, 0));
label_1cdb84:
    // 0x1cdb84: 0xac850014  sw          $a1, 0x14($a0)
    ctx->pc = 0x1cdb84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 5));
label_1cdb88:
    // 0x1cdb88: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x1cdb88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_1cdb8c:
    // 0x1cdb8c: 0x8c24064c  lw          $a0, 0x64C($at)
    ctx->pc = 0x1cdb8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 1612)));
label_1cdb90:
    // 0x1cdb90: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1cdb90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1cdb94:
    // 0x1cdb94: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cdb94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cdb98:
    // 0x1cdb98: 0xa4850020  sh          $a1, 0x20($a0)
    ctx->pc = 0x1cdb98u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 32), (uint16_t)GPR_U32(ctx, 5));
label_1cdb9c:
    // 0x1cdb9c: 0xa4800022  sh          $zero, 0x22($a0)
    ctx->pc = 0x1cdb9cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 34), (uint16_t)GPR_U32(ctx, 0));
label_1cdba0:
    // 0x1cdba0: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x1cdba0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
label_1cdba4:
    // 0x1cdba4: 0xa4850024  sh          $a1, 0x24($a0)
    ctx->pc = 0x1cdba4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 36), (uint16_t)GPR_U32(ctx, 5));
label_1cdba8:
    // 0x1cdba8: 0xa0800026  sb          $zero, 0x26($a0)
    ctx->pc = 0x1cdba8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 38), (uint8_t)GPR_U32(ctx, 0));
label_1cdbac:
    // 0x1cdbac: 0xa0800027  sb          $zero, 0x27($a0)
    ctx->pc = 0x1cdbacu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 39), (uint8_t)GPR_U32(ctx, 0));
label_1cdbb0:
    // 0x1cdbb0: 0xa4800028  sh          $zero, 0x28($a0)
    ctx->pc = 0x1cdbb0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 40), (uint16_t)GPR_U32(ctx, 0));
label_1cdbb4:
    // 0x1cdbb4: 0xac850030  sw          $a1, 0x30($a0)
    ctx->pc = 0x1cdbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 5));
label_1cdbb8:
    // 0x1cdbb8: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x1cdbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
label_1cdbbc:
    // 0x1cdbbc: 0x8c24064c  lw          $a0, 0x64C($at)
    ctx->pc = 0x1cdbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 1612)));
label_1cdbc0:
    // 0x1cdbc0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1cdbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1cdbc4:
    // 0x1cdbc4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cdbc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cdbc8:
    // 0x1cdbc8: 0xa485003c  sh          $a1, 0x3C($a0)
    ctx->pc = 0x1cdbc8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 60), (uint16_t)GPR_U32(ctx, 5));
label_1cdbcc:
    // 0x1cdbcc: 0xa480003e  sh          $zero, 0x3E($a0)
    ctx->pc = 0x1cdbccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 62), (uint16_t)GPR_U32(ctx, 0));
label_1cdbd0:
    // 0x1cdbd0: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x1cdbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
label_1cdbd4:
    // 0x1cdbd4: 0xa4850040  sh          $a1, 0x40($a0)
    ctx->pc = 0x1cdbd4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 64), (uint16_t)GPR_U32(ctx, 5));
label_1cdbd8:
    // 0x1cdbd8: 0xa0800042  sb          $zero, 0x42($a0)
    ctx->pc = 0x1cdbd8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 66), (uint8_t)GPR_U32(ctx, 0));
label_1cdbdc:
    // 0x1cdbdc: 0xa0800043  sb          $zero, 0x43($a0)
    ctx->pc = 0x1cdbdcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 67), (uint8_t)GPR_U32(ctx, 0));
label_1cdbe0:
    // 0x1cdbe0: 0xa4800044  sh          $zero, 0x44($a0)
    ctx->pc = 0x1cdbe0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 68), (uint16_t)GPR_U32(ctx, 0));
label_1cdbe4:
    // 0x1cdbe4: 0xac85004c  sw          $a1, 0x4C($a0)
    ctx->pc = 0x1cdbe4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 5));
label_1cdbe8:
    // 0x1cdbe8: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x1cdbe8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
label_1cdbec:
    // 0x1cdbec: 0x8c24064c  lw          $a0, 0x64C($at)
    ctx->pc = 0x1cdbecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 1612)));
label_1cdbf0:
    // 0x1cdbf0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1cdbf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1cdbf4:
    // 0x1cdbf4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cdbf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cdbf8:
    // 0x1cdbf8: 0xa4850058  sh          $a1, 0x58($a0)
    ctx->pc = 0x1cdbf8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 88), (uint16_t)GPR_U32(ctx, 5));
label_1cdbfc:
    // 0x1cdbfc: 0xa480005a  sh          $zero, 0x5A($a0)
    ctx->pc = 0x1cdbfcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 90), (uint16_t)GPR_U32(ctx, 0));
label_1cdc00:
    // 0x1cdc00: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x1cdc00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
label_1cdc04:
    // 0x1cdc04: 0xa485005c  sh          $a1, 0x5C($a0)
    ctx->pc = 0x1cdc04u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 92), (uint16_t)GPR_U32(ctx, 5));
label_1cdc08:
    // 0x1cdc08: 0xa080005e  sb          $zero, 0x5E($a0)
    ctx->pc = 0x1cdc08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 94), (uint8_t)GPR_U32(ctx, 0));
label_1cdc0c:
    // 0x1cdc0c: 0xa080005f  sb          $zero, 0x5F($a0)
    ctx->pc = 0x1cdc0cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 95), (uint8_t)GPR_U32(ctx, 0));
label_1cdc10:
    // 0x1cdc10: 0xa4800060  sh          $zero, 0x60($a0)
    ctx->pc = 0x1cdc10u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 96), (uint16_t)GPR_U32(ctx, 0));
label_1cdc14:
    // 0x1cdc14: 0xac850068  sw          $a1, 0x68($a0)
    ctx->pc = 0x1cdc14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 5));
label_1cdc18:
    // 0x1cdc18: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x1cdc18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
label_1cdc1c:
    // 0x1cdc1c: 0x8c24064c  lw          $a0, 0x64C($at)
    ctx->pc = 0x1cdc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 1612)));
label_1cdc20:
    // 0x1cdc20: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1cdc20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1cdc24:
    // 0x1cdc24: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cdc24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cdc28:
    // 0x1cdc28: 0xa4850074  sh          $a1, 0x74($a0)
    ctx->pc = 0x1cdc28u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 116), (uint16_t)GPR_U32(ctx, 5));
label_1cdc2c:
    // 0x1cdc2c: 0xa4800076  sh          $zero, 0x76($a0)
    ctx->pc = 0x1cdc2cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 118), (uint16_t)GPR_U32(ctx, 0));
label_1cdc30:
    // 0x1cdc30: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x1cdc30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
label_1cdc34:
    // 0x1cdc34: 0xa4850078  sh          $a1, 0x78($a0)
    ctx->pc = 0x1cdc34u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 120), (uint16_t)GPR_U32(ctx, 5));
label_1cdc38:
    // 0x1cdc38: 0xa080007a  sb          $zero, 0x7A($a0)
    ctx->pc = 0x1cdc38u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 122), (uint8_t)GPR_U32(ctx, 0));
label_1cdc3c:
    // 0x1cdc3c: 0xa080007b  sb          $zero, 0x7B($a0)
    ctx->pc = 0x1cdc3cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 123), (uint8_t)GPR_U32(ctx, 0));
label_1cdc40:
    // 0x1cdc40: 0xa480007c  sh          $zero, 0x7C($a0)
    ctx->pc = 0x1cdc40u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 124), (uint16_t)GPR_U32(ctx, 0));
label_1cdc44:
    // 0x1cdc44: 0xac850084  sw          $a1, 0x84($a0)
    ctx->pc = 0x1cdc44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 5));
label_1cdc48:
    // 0x1cdc48: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x1cdc48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
label_1cdc4c:
    // 0x1cdc4c: 0x8c24064c  lw          $a0, 0x64C($at)
    ctx->pc = 0x1cdc4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 1612)));
label_1cdc50:
    // 0x1cdc50: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1cdc50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1cdc54:
    // 0x1cdc54: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cdc54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cdc58:
    // 0x1cdc58: 0xa4850090  sh          $a1, 0x90($a0)
    ctx->pc = 0x1cdc58u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 144), (uint16_t)GPR_U32(ctx, 5));
label_1cdc5c:
    // 0x1cdc5c: 0xa4800092  sh          $zero, 0x92($a0)
    ctx->pc = 0x1cdc5cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 146), (uint16_t)GPR_U32(ctx, 0));
label_1cdc60:
    // 0x1cdc60: 0xac80008c  sw          $zero, 0x8C($a0)
    ctx->pc = 0x1cdc60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 140), GPR_U32(ctx, 0));
label_1cdc64:
    // 0x1cdc64: 0xa4850094  sh          $a1, 0x94($a0)
    ctx->pc = 0x1cdc64u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 148), (uint16_t)GPR_U32(ctx, 5));
label_1cdc68:
    // 0x1cdc68: 0xa0800096  sb          $zero, 0x96($a0)
    ctx->pc = 0x1cdc68u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 150), (uint8_t)GPR_U32(ctx, 0));
label_1cdc6c:
    // 0x1cdc6c: 0xa0800097  sb          $zero, 0x97($a0)
    ctx->pc = 0x1cdc6cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 151), (uint8_t)GPR_U32(ctx, 0));
label_1cdc70:
    // 0x1cdc70: 0xa4800098  sh          $zero, 0x98($a0)
    ctx->pc = 0x1cdc70u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 152), (uint16_t)GPR_U32(ctx, 0));
label_1cdc74:
    // 0x1cdc74: 0xac8500a0  sw          $a1, 0xA0($a0)
    ctx->pc = 0x1cdc74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 5));
label_1cdc78:
    // 0x1cdc78: 0xac80009c  sw          $zero, 0x9C($a0)
    ctx->pc = 0x1cdc78u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 0));
label_1cdc7c:
    // 0x1cdc7c: 0x8c24064c  lw          $a0, 0x64C($at)
    ctx->pc = 0x1cdc7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 1612)));
label_1cdc80:
    // 0x1cdc80: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1cdc80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1cdc84:
    // 0x1cdc84: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cdc84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cdc88:
    // 0x1cdc88: 0xa48500ac  sh          $a1, 0xAC($a0)
    ctx->pc = 0x1cdc88u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 172), (uint16_t)GPR_U32(ctx, 5));
label_1cdc8c:
    // 0x1cdc8c: 0xa48000ae  sh          $zero, 0xAE($a0)
    ctx->pc = 0x1cdc8cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 174), (uint16_t)GPR_U32(ctx, 0));
label_1cdc90:
    // 0x1cdc90: 0xac8000a8  sw          $zero, 0xA8($a0)
    ctx->pc = 0x1cdc90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 0));
label_1cdc94:
    // 0x1cdc94: 0xa48500b0  sh          $a1, 0xB0($a0)
    ctx->pc = 0x1cdc94u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 176), (uint16_t)GPR_U32(ctx, 5));
label_1cdc98:
    // 0x1cdc98: 0xa08000b2  sb          $zero, 0xB2($a0)
    ctx->pc = 0x1cdc98u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 178), (uint8_t)GPR_U32(ctx, 0));
label_1cdc9c:
    // 0x1cdc9c: 0xa08000b3  sb          $zero, 0xB3($a0)
    ctx->pc = 0x1cdc9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 179), (uint8_t)GPR_U32(ctx, 0));
label_1cdca0:
    // 0x1cdca0: 0xa48000b4  sh          $zero, 0xB4($a0)
    ctx->pc = 0x1cdca0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 180), (uint16_t)GPR_U32(ctx, 0));
label_1cdca4:
    // 0x1cdca4: 0xac8500bc  sw          $a1, 0xBC($a0)
    ctx->pc = 0x1cdca4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 188), GPR_U32(ctx, 5));
label_1cdca8:
    // 0x1cdca8: 0xac8000b8  sw          $zero, 0xB8($a0)
    ctx->pc = 0x1cdca8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 0));
label_1cdcac:
    // 0x1cdcac: 0x8c24064c  lw          $a0, 0x64C($at)
    ctx->pc = 0x1cdcacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 1612)));
label_1cdcb0:
    // 0x1cdcb0: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1cdcb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1cdcb4:
    // 0x1cdcb4: 0xa48500c8  sh          $a1, 0xC8($a0)
    ctx->pc = 0x1cdcb4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 200), (uint16_t)GPR_U32(ctx, 5));
label_1cdcb8:
    // 0x1cdcb8: 0x24c600e0  addiu       $a2, $a2, 0xE0
    ctx->pc = 0x1cdcb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 224));
label_1cdcbc:
    // 0x1cdcbc: 0xa48000ca  sh          $zero, 0xCA($a0)
    ctx->pc = 0x1cdcbcu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 202), (uint16_t)GPR_U32(ctx, 0));
label_1cdcc0:
    // 0x1cdcc0: 0xac8000c4  sw          $zero, 0xC4($a0)
    ctx->pc = 0x1cdcc0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 196), GPR_U32(ctx, 0));
label_1cdcc4:
    // 0x1cdcc4: 0xa48500cc  sh          $a1, 0xCC($a0)
    ctx->pc = 0x1cdcc4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 204), (uint16_t)GPR_U32(ctx, 5));
label_1cdcc8:
    // 0x1cdcc8: 0xa08000ce  sb          $zero, 0xCE($a0)
    ctx->pc = 0x1cdcc8u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 206), (uint8_t)GPR_U32(ctx, 0));
label_1cdccc:
    // 0x1cdccc: 0xa08000cf  sb          $zero, 0xCF($a0)
    ctx->pc = 0x1cdcccu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 207), (uint8_t)GPR_U32(ctx, 0));
label_1cdcd0:
    // 0x1cdcd0: 0xa48000d0  sh          $zero, 0xD0($a0)
    ctx->pc = 0x1cdcd0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 208), (uint16_t)GPR_U32(ctx, 0));
label_1cdcd4:
    // 0x1cdcd4: 0xac8500d8  sw          $a1, 0xD8($a0)
    ctx->pc = 0x1cdcd4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 216), GPR_U32(ctx, 5));
label_1cdcd8:
    // 0x1cdcd8: 0x1460ff9d  bnez        $v1, . + 4 + (-0x63 << 2)
label_1cdcdc:
    if (ctx->pc == 0x1CDCDCu) {
        ctx->pc = 0x1CDCDCu;
            // 0x1cdcdc: 0xac8000d4  sw          $zero, 0xD4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
        ctx->pc = 0x1CDCE0u;
        goto label_1cdce0;
    }
    ctx->pc = 0x1CDCD8u;
    {
        const bool branch_taken_0x1cdcd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDCDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDCD8u;
            // 0x1cdcdc: 0xac8000d4  sw          $zero, 0xD4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdcd8) {
            ctx->pc = 0x1CDB50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cdb50;
        }
    }
    ctx->pc = 0x1CDCE0u;
label_1cdce0:
    // 0x1cdce0: 0x28410384  slti        $at, $v0, 0x384
    ctx->pc = 0x1cdce0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)900) ? 1 : 0);
label_1cdce4:
    // 0x1cdce4: 0x10200014  beqz        $at, . + 4 + (0x14 << 2)
label_1cdce8:
    if (ctx->pc == 0x1CDCE8u) {
        ctx->pc = 0x1CDCE8u;
            // 0x1cdce8: 0x218c0  sll         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x1CDCECu;
        goto label_1cdcec;
    }
    ctx->pc = 0x1CDCE4u;
    {
        const bool branch_taken_0x1cdce4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CDCE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDCE4u;
            // 0x1cdce8: 0x218c0  sll         $v1, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdce4) {
            ctx->pc = 0x1CDD38u;
            goto label_1cdd38;
        }
    }
    ctx->pc = 0x1CDCECu;
label_1cdcec:
    // 0x1cdcec: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1cdcecu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1cdcf0:
    // 0x1cdcf0: 0x33080  sll         $a2, $v1, 2
    ctx->pc = 0x1cdcf0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1cdcf4:
    // 0x1cdcf4: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1cdcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1cdcf8:
    // 0x1cdcf8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cdcf8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cdcfc:
    // 0x1cdcfc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cdcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1cdd00:
    // 0x1cdd00: 0x8c25064c  lw          $a1, 0x64C($at)
    ctx->pc = 0x1cdd00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 1612)));
label_1cdd04:
    // 0x1cdd04: 0x28430384  slti        $v1, $v0, 0x384
    ctx->pc = 0x1cdd04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)900) ? 1 : 0);
label_1cdd08:
    // 0x1cdd08: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x1cdd08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_1cdd0c:
    // 0x1cdd0c: 0xa4a40004  sh          $a0, 0x4($a1)
    ctx->pc = 0x1cdd0cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 4), (uint16_t)GPR_U32(ctx, 4));
label_1cdd10:
    // 0x1cdd10: 0x24c6001c  addiu       $a2, $a2, 0x1C
    ctx->pc = 0x1cdd10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
label_1cdd14:
    // 0x1cdd14: 0xa4a00006  sh          $zero, 0x6($a1)
    ctx->pc = 0x1cdd14u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 6), (uint16_t)GPR_U32(ctx, 0));
label_1cdd18:
    // 0x1cdd18: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x1cdd18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_1cdd1c:
    // 0x1cdd1c: 0xa4a40008  sh          $a0, 0x8($a1)
    ctx->pc = 0x1cdd1cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 8), (uint16_t)GPR_U32(ctx, 4));
label_1cdd20:
    // 0x1cdd20: 0xa0a0000a  sb          $zero, 0xA($a1)
    ctx->pc = 0x1cdd20u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 10), (uint8_t)GPR_U32(ctx, 0));
label_1cdd24:
    // 0x1cdd24: 0xa0a0000b  sb          $zero, 0xB($a1)
    ctx->pc = 0x1cdd24u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 11), (uint8_t)GPR_U32(ctx, 0));
label_1cdd28:
    // 0x1cdd28: 0xa4a0000c  sh          $zero, 0xC($a1)
    ctx->pc = 0x1cdd28u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 12), (uint16_t)GPR_U32(ctx, 0));
label_1cdd2c:
    // 0x1cdd2c: 0xaca40014  sw          $a0, 0x14($a1)
    ctx->pc = 0x1cdd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 4));
label_1cdd30:
    // 0x1cdd30: 0x1460fff1  bnez        $v1, . + 4 + (-0xF << 2)
label_1cdd34:
    if (ctx->pc == 0x1CDD34u) {
        ctx->pc = 0x1CDD34u;
            // 0x1cdd34: 0xaca00010  sw          $zero, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
        ctx->pc = 0x1CDD38u;
        goto label_1cdd38;
    }
    ctx->pc = 0x1CDD30u;
    {
        const bool branch_taken_0x1cdd30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CDD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDD30u;
            // 0x1cdd34: 0xaca00010  sw          $zero, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cdd30) {
            ctx->pc = 0x1CDCF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cdcf8;
        }
    }
    ctx->pc = 0x1CDD38u;
label_1cdd38:
    // 0x1cdd38: 0x8f858dac  lw          $a1, -0x7254($gp)
    ctx->pc = 0x1cdd38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cdd3c:
    // 0x1cdd3c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1cdd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1cdd40:
    // 0x1cdd40: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cdd40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cdd44:
    // 0x1cdd44: 0xa4220638  sh          $v0, 0x638($at)
    ctx->pc = 0x1cdd44u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 1592), (uint16_t)GPR_U32(ctx, 2));
label_1cdd48:
    // 0x1cdd48: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1cdd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1cdd4c:
    // 0x1cdd4c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cdd4cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cdd50:
    // 0x1cdd50: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1cdd50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1cdd54:
    // 0x1cdd54: 0xa422063a  sh          $v0, 0x63A($at)
    ctx->pc = 0x1cdd54u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 1594), (uint16_t)GPR_U32(ctx, 2));
label_1cdd58:
    // 0x1cdd58: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1cdd58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1cdd5c:
    // 0x1cdd5c: 0x8f828dd8  lw          $v0, -0x7228($gp)
    ctx->pc = 0x1cdd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1cdd60:
    // 0x1cdd60: 0xa10821  addu        $at, $a1, $at
    ctx->pc = 0x1cdd60u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 1)));
label_1cdd64:
    // 0x1cdd64: 0x8c25a498  lw          $a1, -0x5B68($at)
    ctx->pc = 0x1cdd64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294943896)));
label_1cdd68:
    // 0x1cdd68: 0xac45057c  sw          $a1, 0x57C($v0)
    ctx->pc = 0x1cdd68u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1404), GPR_U32(ctx, 5));
label_1cdd6c:
    // 0x1cdd6c: 0x8f828dd8  lw          $v0, -0x7228($gp)
    ctx->pc = 0x1cdd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1cdd70:
    // 0x1cdd70: 0xc06334c  jal         func_18CD30
label_1cdd74:
    if (ctx->pc == 0x1CDD74u) {
        ctx->pc = 0x1CDD74u;
            // 0x1cdd74: 0xac430580  sw          $v1, 0x580($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1408), GPR_U32(ctx, 3));
        ctx->pc = 0x1CDD78u;
        goto label_1cdd78;
    }
    ctx->pc = 0x1CDD70u;
    SET_GPR_U32(ctx, 31, 0x1CDD78u);
    ctx->pc = 0x1CDD74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDD70u;
            // 0x1cdd74: 0xac430580  sw          $v1, 0x580($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1408), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CD30u;
    if (runtime->hasFunction(0x18CD30u)) {
        auto targetFn = runtime->lookupFunction(0x18CD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDD78u; }
        if (ctx->pc != 0x1CDD78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndInitPort__Fi_0x18cd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDD78u; }
        if (ctx->pc != 0x1CDD78u) { return; }
    }
    ctx->pc = 0x1CDD78u;
label_1cdd78:
    // 0x1cdd78: 0x8f848da0  lw          $a0, -0x7260($gp)
    ctx->pc = 0x1cdd78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938016)));
label_1cdd7c:
    // 0x1cdd7c: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x1cdd7cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_1cdd80:
    // 0x1cdd80: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1cdd80u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_1cdd84:
    // 0x1cdd84: 0x84254d96  lh          $a1, 0x4D96($at)
    ctx->pc = 0x1cdd84u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19862)));
label_1cdd88:
    // 0x1cdd88: 0xc07a38c  jal         func_1E8E30
label_1cdd8c:
    if (ctx->pc == 0x1CDD8Cu) {
        ctx->pc = 0x1CDD8Cu;
            // 0x1cdd8c: 0x27a60270  addiu       $a2, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->pc = 0x1CDD90u;
        goto label_1cdd90;
    }
    ctx->pc = 0x1CDD88u;
    SET_GPR_U32(ctx, 31, 0x1CDD90u);
    ctx->pc = 0x1CDD8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDD88u;
            // 0x1cdd8c: 0x27a60270  addiu       $a2, $sp, 0x270 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8E30u;
    if (runtime->hasFunction(0x1E8E30u)) {
        auto targetFn = runtime->lookupFunction(0x1E8E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDD90u; }
        if (ctx->pc != 0x1CDD90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacterSnd__FP16CUserDataManageriPc_0x1e8e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDD90u; }
        if (ctx->pc != 0x1CDD90u) { return; }
    }
    ctx->pc = 0x1CDD90u;
label_1cdd90:
    // 0x1cdd90: 0x8f858d74  lw          $a1, -0x728C($gp)
    ctx->pc = 0x1cdd90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_1cdd94:
    // 0x1cdd94: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x1cdd94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
label_1cdd98:
    // 0x1cdd98: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cdd98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cdd9c:
    // 0x1cdd9c: 0xc0524dc  jal         func_149370
label_1cdda0:
    if (ctx->pc == 0x1CDDA0u) {
        ctx->pc = 0x1CDDA0u;
            // 0x1cdda0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CDDA4u;
        goto label_1cdda4;
    }
    ctx->pc = 0x1CDD9Cu;
    SET_GPR_U32(ctx, 31, 0x1CDDA4u);
    ctx->pc = 0x1CDDA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDD9Cu;
            // 0x1cdda0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDDA4u; }
        if (ctx->pc != 0x1CDDA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDDA4u; }
        if (ctx->pc != 0x1CDDA4u) { return; }
    }
    ctx->pc = 0x1CDDA4u;
label_1cdda4:
    // 0x1cdda4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1cdda8:
    if (ctx->pc == 0x1CDDA8u) {
        ctx->pc = 0x1CDDACu;
        goto label_1cddac;
    }
    ctx->pc = 0x1CDDA4u;
    {
        const bool branch_taken_0x1cdda4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cdda4) {
            ctx->pc = 0x1CDE08u;
            goto label_1cde08;
        }
    }
    ctx->pc = 0x1CDDACu;
label_1cddac:
    // 0x1cddac: 0x8f838da0  lw          $v1, -0x7260($gp)
    ctx->pc = 0x1cddacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938016)));
label_1cddb0:
    // 0x1cddb0: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x1cddb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_1cddb4:
    // 0x1cddb4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cddb8:
    // 0x1cddb8: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1cddb8u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_1cddbc:
    // 0x1cddbc: 0x84234d96  lh          $v1, 0x4D96($at)
    ctx->pc = 0x1cddbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19862)));
label_1cddc0:
    // 0x1cddc0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1cddc4:
    if (ctx->pc == 0x1CDDC4u) {
        ctx->pc = 0x1CDDC4u;
            // 0x1cddc4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1CDDC8u;
        goto label_1cddc8;
    }
    ctx->pc = 0x1CDDC0u;
    {
        const bool branch_taken_0x1cddc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CDDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDDC0u;
            // 0x1cddc4: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cddc0) {
            ctx->pc = 0x1CDDCCu;
            goto label_1cddcc;
        }
    }
    ctx->pc = 0x1CDDC8u;
label_1cddc8:
    // 0x1cddc8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cddc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cddcc:
    // 0x1cddcc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1cddccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cddd0:
    // 0x1cddd0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_1cddd4:
    if (ctx->pc == 0x1CDDD4u) {
        ctx->pc = 0x1CDDD8u;
        goto label_1cddd8;
    }
    ctx->pc = 0x1CDDD0u;
    {
        const bool branch_taken_0x1cddd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cddd0) {
            ctx->pc = 0x1CDDDCu;
            goto label_1cdddc;
        }
    }
    ctx->pc = 0x1CDDD8u;
label_1cddd8:
    // 0x1cddd8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cddd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cdddc:
    // 0x1cdddc: 0x8f858d74  lw          $a1, -0x728C($gp)
    ctx->pc = 0x1cdddcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_1cdde0:
    // 0x1cdde0: 0x41040  sll         $v0, $a0, 1
    ctx->pc = 0x1cdde0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1cdde4:
    // 0x1cdde4: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x1cdde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1cdde8:
    // 0x1cdde8: 0x3c0201ea  lui         $v0, 0x1EA
    ctx->pc = 0x1cdde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)490 << 16));
label_1cddec:
    // 0x1cddec: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1cddecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1cddf0:
    // 0x1cddf0: 0x2442f410  addiu       $v0, $v0, -0xBF0
    ctx->pc = 0x1cddf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294964240));
label_1cddf4:
    // 0x1cddf4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x1cddf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1cddf8:
    // 0x1cddf8: 0xc06368c  jal         func_18DA30
label_1cddfc:
    if (ctx->pc == 0x1CDDFCu) {
        ctx->pc = 0x1CDDFCu;
            // 0x1cddfc: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1CDE00u;
        goto label_1cde00;
    }
    ctx->pc = 0x1CDDF8u;
    SET_GPR_U32(ctx, 31, 0x1CDE00u);
    ctx->pc = 0x1CDDFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDDF8u;
            // 0x1cddfc: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DA30u;
    if (runtime->hasFunction(0x18DA30u)) {
        auto targetFn = runtime->lookupFunction(0x18DA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE00u; }
        if (ctx->pc != 0x1CDE00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndLoadSound__FiPUiP9mgCMemory_0x18da30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE00u; }
        if (ctx->pc != 0x1CDE00u) { return; }
    }
    ctx->pc = 0x1CDE00u;
label_1cde00:
    // 0x1cde00: 0x8f838dd8  lw          $v1, -0x7228($gp)
    ctx->pc = 0x1cde00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1cde04:
    // 0x1cde04: 0xac620588  sw          $v0, 0x588($v1)
    ctx->pc = 0x1cde04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1416), GPR_U32(ctx, 2));
label_1cde08:
    // 0x1cde08: 0x8f838dac  lw          $v1, -0x7254($gp)
    ctx->pc = 0x1cde08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cde0c:
    // 0x1cde0c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1cde0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1cde10:
    // 0x1cde10: 0x8f828dd8  lw          $v0, -0x7228($gp)
    ctx->pc = 0x1cde10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1cde14:
    // 0x1cde14: 0x610821  addu        $at, $v1, $at
    ctx->pc = 0x1cde14u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_1cde18:
    // 0x1cde18: 0x8c23c4d0  lw          $v1, -0x3B30($at)
    ctx->pc = 0x1cde18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294952144)));
label_1cde1c:
    // 0x1cde1c: 0xac43058c  sw          $v1, 0x58C($v0)
    ctx->pc = 0x1cde1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1420), GPR_U32(ctx, 3));
label_1cde20:
    // 0x1cde20: 0x8f838ddc  lw          $v1, -0x7224($gp)
    ctx->pc = 0x1cde20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_1cde24:
    // 0x1cde24: 0x8f828dd8  lw          $v0, -0x7228($gp)
    ctx->pc = 0x1cde24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1cde28:
    // 0x1cde28: 0xc0c2678  jal         func_3099E0
label_1cde2c:
    if (ctx->pc == 0x1CDE2Cu) {
        ctx->pc = 0x1CDE2Cu;
            // 0x1cde2c: 0xac4307dc  sw          $v1, 0x7DC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 2012), GPR_U32(ctx, 3));
        ctx->pc = 0x1CDE30u;
        goto label_1cde30;
    }
    ctx->pc = 0x1CDE28u;
    SET_GPR_U32(ctx, 31, 0x1CDE30u);
    ctx->pc = 0x1CDE2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDE28u;
            // 0x1cde2c: 0xac4307dc  sw          $v1, 0x7DC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 2012), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3099E0u;
    if (runtime->hasFunction(0x3099E0u)) {
        auto targetFn = runtime->lookupFunction(0x3099E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE30u; }
        if (ctx->pc != 0x1CDE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowLoadingBarStep__Fv_0x3099e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE30u; }
        if (ctx->pc != 0x1CDE30u) { return; }
    }
    ctx->pc = 0x1CDE30u;
label_1cde30:
    // 0x1cde30: 0x8f828d70  lw          $v0, -0x7290($gp)
    ctx->pc = 0x1cde30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937968)));
label_1cde34:
    // 0x1cde34: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1cde34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1cde38:
    // 0x1cde38: 0x2484f2f0  addiu       $a0, $a0, -0xD10
    ctx->pc = 0x1cde38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963952));
label_1cde3c:
    // 0x1cde3c: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x1cde3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1cde40:
    // 0x1cde40: 0x8c450024  lw          $a1, 0x24($v0)
    ctx->pc = 0x1cde40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_1cde44:
    // 0x1cde44: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x1cde44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_1cde48:
    // 0x1cde48: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x1cde48u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1cde4c:
    // 0x1cde4c: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1cde4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1cde50:
    // 0x1cde50: 0xc04e79c  jal         func_139E70
label_1cde54:
    if (ctx->pc == 0x1CDE54u) {
        ctx->pc = 0x1CDE54u;
            // 0x1cde54: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1CDE58u;
        goto label_1cde58;
    }
    ctx->pc = 0x1CDE50u;
    SET_GPR_U32(ctx, 31, 0x1CDE58u);
    ctx->pc = 0x1CDE54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDE50u;
            // 0x1cde54: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE58u; }
        if (ctx->pc != 0x1CDE58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE58u; }
        if (ctx->pc != 0x1CDE58u) { return; }
    }
    ctx->pc = 0x1CDE58u;
label_1cde58:
    // 0x1cde58: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cde58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cde5c:
    // 0x1cde5c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cde5cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cde60:
    // 0x1cde60: 0xac20f314  sw          $zero, -0xCEC($at)
    ctx->pc = 0x1cde60u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963988), GPR_U32(ctx, 0));
label_1cde64:
    // 0x1cde64: 0x3c0601ea  lui         $a2, 0x1EA
    ctx->pc = 0x1cde64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)490 << 16));
label_1cde68:
    // 0x1cde68: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cde68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cde6c:
    // 0x1cde6c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cde6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cde70:
    // 0x1cde70: 0x24c6f3e0  addiu       $a2, $a2, -0xC20
    ctx->pc = 0x1cde70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964192));
label_1cde74:
    // 0x1cde74: 0xc0a0c54  jal         func_283150
label_1cde78:
    if (ctx->pc == 0x1CDE78u) {
        ctx->pc = 0x1CDE78u;
            // 0x1cde78: 0xac20f30c  sw          $zero, -0xCF4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294963980), GPR_U32(ctx, 0));
        ctx->pc = 0x1CDE7Cu;
        goto label_1cde7c;
    }
    ctx->pc = 0x1CDE74u;
    SET_GPR_U32(ctx, 31, 0x1CDE7Cu);
    ctx->pc = 0x1CDE78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDE74u;
            // 0x1cde78: 0xac20f30c  sw          $zero, -0xCF4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294963980), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283150u;
    if (runtime->hasFunction(0x283150u)) {
        auto targetFn = runtime->lookupFunction(0x283150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE7Cu; }
        if (ctx->pc != 0x1CDE7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__6CSceneFiP9mgCMemory_0x283150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE7Cu; }
        if (ctx->pc != 0x1CDE7Cu) { return; }
    }
    ctx->pc = 0x1CDE7Cu;
label_1cde7c:
    // 0x1cde7c: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cde7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cde80:
    // 0x1cde80: 0x3c0601ea  lui         $a2, 0x1EA
    ctx->pc = 0x1cde80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)490 << 16));
label_1cde84:
    // 0x1cde84: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cde84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cde88:
    // 0x1cde88: 0xc0a0c54  jal         func_283150
label_1cde8c:
    if (ctx->pc == 0x1CDE8Cu) {
        ctx->pc = 0x1CDE8Cu;
            // 0x1cde8c: 0x24c6f2f0  addiu       $a2, $a2, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963952));
        ctx->pc = 0x1CDE90u;
        goto label_1cde90;
    }
    ctx->pc = 0x1CDE88u;
    SET_GPR_U32(ctx, 31, 0x1CDE90u);
    ctx->pc = 0x1CDE8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDE88u;
            // 0x1cde8c: 0x24c6f2f0  addiu       $a2, $a2, -0xD10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283150u;
    if (runtime->hasFunction(0x283150u)) {
        auto targetFn = runtime->lookupFunction(0x283150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE90u; }
        if (ctx->pc != 0x1CDE90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__6CSceneFiP9mgCMemory_0x283150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDE90u; }
        if (ctx->pc != 0x1CDE90u) { return; }
    }
    ctx->pc = 0x1CDE90u;
label_1cde90:
    // 0x1cde90: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cde90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cde94:
    // 0x1cde94: 0x3c0601ea  lui         $a2, 0x1EA
    ctx->pc = 0x1cde94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)490 << 16));
label_1cde98:
    // 0x1cde98: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1cde98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cde9c:
    // 0x1cde9c: 0xc0a0c54  jal         func_283150
label_1cdea0:
    if (ctx->pc == 0x1CDEA0u) {
        ctx->pc = 0x1CDEA0u;
            // 0x1cdea0: 0x24c6f320  addiu       $a2, $a2, -0xCE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964000));
        ctx->pc = 0x1CDEA4u;
        goto label_1cdea4;
    }
    ctx->pc = 0x1CDE9Cu;
    SET_GPR_U32(ctx, 31, 0x1CDEA4u);
    ctx->pc = 0x1CDEA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDE9Cu;
            // 0x1cdea0: 0x24c6f320  addiu       $a2, $a2, -0xCE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283150u;
    if (runtime->hasFunction(0x283150u)) {
        auto targetFn = runtime->lookupFunction(0x283150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDEA4u; }
        if (ctx->pc != 0x1CDEA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__6CSceneFiP9mgCMemory_0x283150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDEA4u; }
        if (ctx->pc != 0x1CDEA4u) { return; }
    }
    ctx->pc = 0x1CDEA4u;
label_1cdea4:
    // 0x1cdea4: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cdea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cdea8:
    // 0x1cdea8: 0x3c0601ea  lui         $a2, 0x1EA
    ctx->pc = 0x1cdea8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)490 << 16));
label_1cdeac:
    // 0x1cdeac: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1cdeacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1cdeb0:
    // 0x1cdeb0: 0xc0a0c54  jal         func_283150
label_1cdeb4:
    if (ctx->pc == 0x1CDEB4u) {
        ctx->pc = 0x1CDEB4u;
            // 0x1cdeb4: 0x24c6f350  addiu       $a2, $a2, -0xCB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964048));
        ctx->pc = 0x1CDEB8u;
        goto label_1cdeb8;
    }
    ctx->pc = 0x1CDEB0u;
    SET_GPR_U32(ctx, 31, 0x1CDEB8u);
    ctx->pc = 0x1CDEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDEB0u;
            // 0x1cdeb4: 0x24c6f350  addiu       $a2, $a2, -0xCB0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283150u;
    if (runtime->hasFunction(0x283150u)) {
        auto targetFn = runtime->lookupFunction(0x283150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDEB8u; }
        if (ctx->pc != 0x1CDEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__6CSceneFiP9mgCMemory_0x283150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDEB8u; }
        if (ctx->pc != 0x1CDEB8u) { return; }
    }
    ctx->pc = 0x1CDEB8u;
label_1cdeb8:
    // 0x1cdeb8: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cdeb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cdebc:
    // 0x1cdebc: 0x3c0601ea  lui         $a2, 0x1EA
    ctx->pc = 0x1cdebcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)490 << 16));
label_1cdec0:
    // 0x1cdec0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cdec0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cdec4:
    // 0x1cdec4: 0xc0a0c54  jal         func_283150
label_1cdec8:
    if (ctx->pc == 0x1CDEC8u) {
        ctx->pc = 0x1CDEC8u;
            // 0x1cdec8: 0x24c6f380  addiu       $a2, $a2, -0xC80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964096));
        ctx->pc = 0x1CDECCu;
        goto label_1cdecc;
    }
    ctx->pc = 0x1CDEC4u;
    SET_GPR_U32(ctx, 31, 0x1CDECCu);
    ctx->pc = 0x1CDEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDEC4u;
            // 0x1cdec8: 0x24c6f380  addiu       $a2, $a2, -0xC80 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283150u;
    if (runtime->hasFunction(0x283150u)) {
        auto targetFn = runtime->lookupFunction(0x283150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDECCu; }
        if (ctx->pc != 0x1CDECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__6CSceneFiP9mgCMemory_0x283150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDECCu; }
        if (ctx->pc != 0x1CDECCu) { return; }
    }
    ctx->pc = 0x1CDECCu;
label_1cdecc:
    // 0x1cdecc: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cdeccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cded0:
    // 0x1cded0: 0x3c0601ea  lui         $a2, 0x1EA
    ctx->pc = 0x1cded0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)490 << 16));
label_1cded4:
    // 0x1cded4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1cded4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1cded8:
    // 0x1cded8: 0xc0a0c54  jal         func_283150
label_1cdedc:
    if (ctx->pc == 0x1CDEDCu) {
        ctx->pc = 0x1CDEDCu;
            // 0x1cdedc: 0x24c6f5c0  addiu       $a2, $a2, -0xA40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964672));
        ctx->pc = 0x1CDEE0u;
        goto label_1cdee0;
    }
    ctx->pc = 0x1CDED8u;
    SET_GPR_U32(ctx, 31, 0x1CDEE0u);
    ctx->pc = 0x1CDEDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDED8u;
            // 0x1cdedc: 0x24c6f5c0  addiu       $a2, $a2, -0xA40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283150u;
    if (runtime->hasFunction(0x283150u)) {
        auto targetFn = runtime->lookupFunction(0x283150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDEE0u; }
        if (ctx->pc != 0x1CDEE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__6CSceneFiP9mgCMemory_0x283150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDEE0u; }
        if (ctx->pc != 0x1CDEE0u) { return; }
    }
    ctx->pc = 0x1CDEE0u;
label_1cdee0:
    // 0x1cdee0: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cdee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cdee4:
    // 0x1cdee4: 0x3c0601ea  lui         $a2, 0x1EA
    ctx->pc = 0x1cdee4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)490 << 16));
label_1cdee8:
    // 0x1cdee8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1cdee8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1cdeec:
    // 0x1cdeec: 0xc0a0c54  jal         func_283150
label_1cdef0:
    if (ctx->pc == 0x1CDEF0u) {
        ctx->pc = 0x1CDEF0u;
            // 0x1cdef0: 0x24c6f5f0  addiu       $a2, $a2, -0xA10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964720));
        ctx->pc = 0x1CDEF4u;
        goto label_1cdef4;
    }
    ctx->pc = 0x1CDEECu;
    SET_GPR_U32(ctx, 31, 0x1CDEF4u);
    ctx->pc = 0x1CDEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDEECu;
            // 0x1cdef0: 0x24c6f5f0  addiu       $a2, $a2, -0xA10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283150u;
    if (runtime->hasFunction(0x283150u)) {
        auto targetFn = runtime->lookupFunction(0x283150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDEF4u; }
        if (ctx->pc != 0x1CDEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__6CSceneFiP9mgCMemory_0x283150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDEF4u; }
        if (ctx->pc != 0x1CDEF4u) { return; }
    }
    ctx->pc = 0x1CDEF4u;
label_1cdef4:
    // 0x1cdef4: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cdef4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cdef8:
    // 0x1cdef8: 0x3c0601ea  lui         $a2, 0x1EA
    ctx->pc = 0x1cdef8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)490 << 16));
label_1cdefc:
    // 0x1cdefc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1cdefcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1cdf00:
    // 0x1cdf00: 0xc0a0c54  jal         func_283150
label_1cdf04:
    if (ctx->pc == 0x1CDF04u) {
        ctx->pc = 0x1CDF04u;
            // 0x1cdf04: 0x24c6f620  addiu       $a2, $a2, -0x9E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964768));
        ctx->pc = 0x1CDF08u;
        goto label_1cdf08;
    }
    ctx->pc = 0x1CDF00u;
    SET_GPR_U32(ctx, 31, 0x1CDF08u);
    ctx->pc = 0x1CDF04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDF00u;
            // 0x1cdf04: 0x24c6f620  addiu       $a2, $a2, -0x9E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283150u;
    if (runtime->hasFunction(0x283150u)) {
        auto targetFn = runtime->lookupFunction(0x283150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF08u; }
        if (ctx->pc != 0x1CDF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__6CSceneFiP9mgCMemory_0x283150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF08u; }
        if (ctx->pc != 0x1CDF08u) { return; }
    }
    ctx->pc = 0x1CDF08u;
label_1cdf08:
    // 0x1cdf08: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cdf08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cdf0c:
    // 0x1cdf0c: 0x3c0601ea  lui         $a2, 0x1EA
    ctx->pc = 0x1cdf0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)490 << 16));
label_1cdf10:
    // 0x1cdf10: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1cdf10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1cdf14:
    // 0x1cdf14: 0xc0a0c54  jal         func_283150
label_1cdf18:
    if (ctx->pc == 0x1CDF18u) {
        ctx->pc = 0x1CDF18u;
            // 0x1cdf18: 0x24c6f650  addiu       $a2, $a2, -0x9B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964816));
        ctx->pc = 0x1CDF1Cu;
        goto label_1cdf1c;
    }
    ctx->pc = 0x1CDF14u;
    SET_GPR_U32(ctx, 31, 0x1CDF1Cu);
    ctx->pc = 0x1CDF18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDF14u;
            // 0x1cdf18: 0x24c6f650  addiu       $a2, $a2, -0x9B0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964816));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283150u;
    if (runtime->hasFunction(0x283150u)) {
        auto targetFn = runtime->lookupFunction(0x283150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF1Cu; }
        if (ctx->pc != 0x1CDF1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__6CSceneFiP9mgCMemory_0x283150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF1Cu; }
        if (ctx->pc != 0x1CDF1Cu) { return; }
    }
    ctx->pc = 0x1CDF1Cu;
label_1cdf1c:
    // 0x1cdf1c: 0xc0c2678  jal         func_3099E0
label_1cdf20:
    if (ctx->pc == 0x1CDF20u) {
        ctx->pc = 0x1CDF24u;
        goto label_1cdf24;
    }
    ctx->pc = 0x1CDF1Cu;
    SET_GPR_U32(ctx, 31, 0x1CDF24u);
    ctx->pc = 0x3099E0u;
    if (runtime->hasFunction(0x3099E0u)) {
        auto targetFn = runtime->lookupFunction(0x3099E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF24u; }
        if (ctx->pc != 0x1CDF24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowLoadingBarStep__Fv_0x3099e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF24u; }
        if (ctx->pc != 0x1CDF24u) { return; }
    }
    ctx->pc = 0x1CDF24u;
label_1cdf24:
    // 0x1cdf24: 0xc06ea90  jal         func_1BAA40
label_1cdf28:
    if (ctx->pc == 0x1CDF28u) {
        ctx->pc = 0x1CDF2Cu;
        goto label_1cdf2c;
    }
    ctx->pc = 0x1CDF24u;
    SET_GPR_U32(ctx, 31, 0x1CDF2Cu);
    ctx->pc = 0x1BAA40u;
    if (runtime->hasFunction(0x1BAA40u)) {
        auto targetFn = runtime->lookupFunction(0x1BAA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF2Cu; }
        if (ctx->pc != 0x1CDF2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dngDebugInit__Fv_0x1baa40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF2Cu; }
        if (ctx->pc != 0x1CDF2Cu) { return; }
    }
    ctx->pc = 0x1CDF2Cu;
label_1cdf2c:
    // 0x1cdf2c: 0xc0ba558  jal         func_2E9560
label_1cdf30:
    if (ctx->pc == 0x1CDF30u) {
        ctx->pc = 0x1CDF34u;
        goto label_1cdf34;
    }
    ctx->pc = 0x1CDF2Cu;
    SET_GPR_U32(ctx, 31, 0x1CDF34u);
    ctx->pc = 0x2E9560u;
    if (runtime->hasFunction(0x2E9560u)) {
        auto targetFn = runtime->lookupFunction(0x2E9560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF34u; }
        if (ctx->pc != 0x1CDF34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSphida__Fv_0x2e9560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF34u; }
        if (ctx->pc != 0x1CDF34u) { return; }
    }
    ctx->pc = 0x1CDF34u;
label_1cdf34:
    // 0x1cdf34: 0xc0c0f9c  jal         func_303E70
label_1cdf38:
    if (ctx->pc == 0x1CDF38u) {
        ctx->pc = 0x1CDF38u;
            // 0x1cdf38: 0x8f848dac  lw          $a0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->pc = 0x1CDF3Cu;
        goto label_1cdf3c;
    }
    ctx->pc = 0x1CDF34u;
    SET_GPR_U32(ctx, 31, 0x1CDF3Cu);
    ctx->pc = 0x1CDF38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDF34u;
            // 0x1cdf38: 0x8f848dac  lw          $a0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303E70u;
    if (runtime->hasFunction(0x303E70u)) {
        auto targetFn = runtime->lookupFunction(0x303E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF3Cu; }
        if (ctx->pc != 0x1CDF3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSubGame__FP6CScene_0x303e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF3Cu; }
        if (ctx->pc != 0x1CDF3Cu) { return; }
    }
    ctx->pc = 0x1CDF3Cu;
label_1cdf3c:
    // 0x1cdf3c: 0xc0c63e4  jal         func_318F90
label_1cdf40:
    if (ctx->pc == 0x1CDF40u) {
        ctx->pc = 0x1CDF40u;
            // 0x1cdf40: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->pc = 0x1CDF44u;
        goto label_1cdf44;
    }
    ctx->pc = 0x1CDF3Cu;
    SET_GPR_U32(ctx, 31, 0x1CDF44u);
    ctx->pc = 0x1CDF40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDF3Cu;
            // 0x1cdf40: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318F90u;
    if (runtime->hasFunction(0x318F90u)) {
        auto targetFn = runtime->lookupFunction(0x318F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF44u; }
        if (ctx->pc != 0x1CDF44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateHelpMes__Fi_0x318f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF44u; }
        if (ctx->pc != 0x1CDF44u) { return; }
    }
    ctx->pc = 0x1CDF44u;
label_1cdf44:
    // 0x1cdf44: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x1cdf44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
label_1cdf48:
    // 0x1cdf48: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cdf48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cdf4c:
    // 0x1cdf4c: 0xc0b3414  jal         func_2CD050
label_1cdf50:
    if (ctx->pc == 0x1CDF50u) {
        ctx->pc = 0x1CDF50u;
            // 0x1cdf50: 0x2484f3b0  addiu       $a0, $a0, -0xC50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964144));
        ctx->pc = 0x1CDF54u;
        goto label_1cdf54;
    }
    ctx->pc = 0x1CDF4Cu;
    SET_GPR_U32(ctx, 31, 0x1CDF54u);
    ctx->pc = 0x1CDF50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDF4Cu;
            // 0x1cdf50: 0x2484f3b0  addiu       $a0, $a0, -0xC50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CD050u;
    if (runtime->hasFunction(0x2CD050u)) {
        auto targetFn = runtime->lookupFunction(0x2CD050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF54u; }
        if (ctx->pc != 0x1CDF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__4CPotFi_0x2cd050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF54u; }
        if (ctx->pc != 0x1CDF54u) { return; }
    }
    ctx->pc = 0x1CDF54u;
label_1cdf54:
    // 0x1cdf54: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x1cdf54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
label_1cdf58:
    // 0x1cdf58: 0xc0b31e8  jal         func_2CC7A0
label_1cdf5c:
    if (ctx->pc == 0x1CDF5Cu) {
        ctx->pc = 0x1CDF5Cu;
            // 0x1cdf5c: 0x2484f430  addiu       $a0, $a0, -0xBD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964272));
        ctx->pc = 0x1CDF60u;
        goto label_1cdf60;
    }
    ctx->pc = 0x1CDF58u;
    SET_GPR_U32(ctx, 31, 0x1CDF60u);
    ctx->pc = 0x1CDF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDF58u;
            // 0x1cdf5c: 0x2484f430  addiu       $a0, $a0, -0xBD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CC7A0u;
    if (runtime->hasFunction(0x2CC7A0u)) {
        auto targetFn = runtime->lookupFunction(0x2CC7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF60u; }
        if (ctx->pc != 0x1CDF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__5CBPotFv_0x2cc7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF60u; }
        if (ctx->pc != 0x1CDF60u) { return; }
    }
    ctx->pc = 0x1CDF60u;
label_1cdf60:
    // 0x1cdf60: 0x8f828dac  lw          $v0, -0x7254($gp)
    ctx->pc = 0x1cdf60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cdf64:
    // 0x1cdf64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1cdf64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cdf68:
    // 0x1cdf68: 0xaf808de0  sw          $zero, -0x7220($gp)
    ctx->pc = 0x1cdf68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938080), GPR_U32(ctx, 0));
label_1cdf6c:
    // 0x1cdf6c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x1cdf6cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cdf70:
    // 0x1cdf70: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1cdf70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cdf74:
    // 0x1cdf74: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cdf74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cdf78:
    // 0x1cdf78: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1cdf78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cdf7c:
    // 0x1cdf7c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1cdf7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cdf80:
    // 0x1cdf80: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1cdf80u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cdf84:
    // 0x1cdf84: 0xac432f74  sw          $v1, 0x2F74($v0)
    ctx->pc = 0x1cdf84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12148), GPR_U32(ctx, 3));
label_1cdf88:
    // 0x1cdf88: 0x3c0201ec  lui         $v0, 0x1EC
    ctx->pc = 0x1cdf88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)492 << 16));
label_1cdf8c:
    // 0x1cdf8c: 0x2442b780  addiu       $v0, $v0, -0x4880
    ctx->pc = 0x1cdf8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948736));
label_1cdf90:
    // 0x1cdf90: 0x55a021  addu        $s4, $v0, $s5
    ctx->pc = 0x1cdf90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_1cdf94:
    // 0x1cdf94: 0xc070368  jal         func_1C0DA0
label_1cdf98:
    if (ctx->pc == 0x1CDF98u) {
        ctx->pc = 0x1CDF98u;
            // 0x1cdf98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CDF9Cu;
        goto label_1cdf9c;
    }
    ctx->pc = 0x1CDF94u;
    SET_GPR_U32(ctx, 31, 0x1CDF9Cu);
    ctx->pc = 0x1CDF98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDF94u;
            // 0x1cdf98: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0DA0u;
    if (runtime->hasFunction(0x1C0DA0u)) {
        auto targetFn = runtime->lookupFunction(0x1C0DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF9Cu; }
        if (ctx->pc != 0x1CDF9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__12CSparcEffectFv_0x1c0da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDF9Cu; }
        if (ctx->pc != 0x1CDF9Cu) { return; }
    }
    ctx->pc = 0x1CDF9Cu;
label_1cdf9c:
    // 0x1cdf9c: 0x3c0101eb  lui         $at, 0x1EB
    ctx->pc = 0x1cdf9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)491 << 16));
label_1cdfa0:
    // 0x1cdfa0: 0x3c0201ec  lui         $v0, 0x1EC
    ctx->pc = 0x1cdfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)492 << 16));
label_1cdfa4:
    // 0x1cdfa4: 0x8c237948  lw          $v1, 0x7948($at)
    ctx->pc = 0x1cdfa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31048)));
label_1cdfa8:
    // 0x1cdfa8: 0x2442bba0  addiu       $v0, $v0, -0x4460
    ctx->pc = 0x1cdfa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949792));
label_1cdfac:
    // 0x1cdfac: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x1cdfacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1cdfb0:
    // 0x1cdfb0: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x1cdfb0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_1cdfb4:
    // 0x1cdfb4: 0x3c0101eb  lui         $at, 0x1EB
    ctx->pc = 0x1cdfb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)491 << 16));
label_1cdfb8:
    // 0x1cdfb8: 0x8c22794c  lw          $v0, 0x794C($at)
    ctx->pc = 0x1cdfb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31052)));
label_1cdfbc:
    // 0x1cdfbc: 0xae820004  sw          $v0, 0x4($s4)
    ctx->pc = 0x1cdfbcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 2));
label_1cdfc0:
    // 0x1cdfc0: 0x3c0101eb  lui         $at, 0x1EB
    ctx->pc = 0x1cdfc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)491 << 16));
label_1cdfc4:
    // 0x1cdfc4: 0x8c227950  lw          $v0, 0x7950($at)
    ctx->pc = 0x1cdfc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 31056)));
label_1cdfc8:
    // 0x1cdfc8: 0xc0702a4  jal         func_1C0A90
label_1cdfcc:
    if (ctx->pc == 0x1CDFCCu) {
        ctx->pc = 0x1CDFCCu;
            // 0x1cdfcc: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x1CDFD0u;
        goto label_1cdfd0;
    }
    ctx->pc = 0x1CDFC8u;
    SET_GPR_U32(ctx, 31, 0x1CDFD0u);
    ctx->pc = 0x1CDFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDFC8u;
            // 0x1cdfcc: 0xae820008  sw          $v0, 0x8($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0A90u;
    if (runtime->hasFunction(0x1C0A90u)) {
        auto targetFn = runtime->lookupFunction(0x1C0A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDFD0u; }
        if (ctx->pc != 0x1CDFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__8CThunderFv_0x1c0a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDFD0u; }
        if (ctx->pc != 0x1CDFD0u) { return; }
    }
    ctx->pc = 0x1CDFD0u;
label_1cdfd0:
    // 0x1cdfd0: 0x3c0201ec  lui         $v0, 0x1EC
    ctx->pc = 0x1cdfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)492 << 16));
label_1cdfd4:
    // 0x1cdfd4: 0x24420e20  addiu       $v0, $v0, 0xE20
    ctx->pc = 0x1cdfd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3616));
label_1cdfd8:
    // 0x1cdfd8: 0x51a021  addu        $s4, $v0, $s1
    ctx->pc = 0x1cdfd8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1cdfdc:
    // 0x1cdfdc: 0xc0700d8  jal         func_1C0360
label_1cdfe0:
    if (ctx->pc == 0x1CDFE0u) {
        ctx->pc = 0x1CDFE0u;
            // 0x1cdfe0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CDFE4u;
        goto label_1cdfe4;
    }
    ctx->pc = 0x1CDFDCu;
    SET_GPR_U32(ctx, 31, 0x1CDFE4u);
    ctx->pc = 0x1CDFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDFDCu;
            // 0x1cdfe0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0360u;
    if (runtime->hasFunction(0x1C0360u)) {
        auto targetFn = runtime->lookupFunction(0x1C0360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDFE4u; }
        if (ctx->pc != 0x1CDFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__8CTornadoFv_0x1c0360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDFE4u; }
        if (ctx->pc != 0x1CDFE4u) { return; }
    }
    ctx->pc = 0x1CDFE4u;
label_1cdfe4:
    // 0x1cdfe4: 0x8f838df0  lw          $v1, -0x7210($gp)
    ctx->pc = 0x1cdfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938096)));
label_1cdfe8:
    // 0x1cdfe8: 0x3c0201ec  lui         $v0, 0x1EC
    ctx->pc = 0x1cdfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)492 << 16));
label_1cdfec:
    // 0x1cdfec: 0x24422320  addiu       $v0, $v0, 0x2320
    ctx->pc = 0x1cdfecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8992));
label_1cdff0:
    // 0x1cdff0: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x1cdff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1cdff4:
    // 0x1cdff4: 0xc06f9bc  jal         func_1BE6F0
label_1cdff8:
    if (ctx->pc == 0x1CDFF8u) {
        ctx->pc = 0x1CDFF8u;
            // 0x1cdff8: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x1CDFFCu;
        goto label_1cdffc;
    }
    ctx->pc = 0x1CDFF4u;
    SET_GPR_U32(ctx, 31, 0x1CDFFCu);
    ctx->pc = 0x1CDFF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CDFF4u;
            // 0x1cdff8: 0xae830000  sw          $v1, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BE6F0u;
    if (runtime->hasFunction(0x1BE6F0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDFFCu; }
        if (ctx->pc != 0x1CDFFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__14CChillAfterHitFv_0x1be6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CDFFCu; }
        if (ctx->pc != 0x1CDFFCu) { return; }
    }
    ctx->pc = 0x1CDFFCu;
label_1cdffc:
    // 0x1cdffc: 0x3c0201ec  lui         $v0, 0x1EC
    ctx->pc = 0x1cdffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)492 << 16));
label_1ce000:
    // 0x1ce000: 0x244250e0  addiu       $v0, $v0, 0x50E0
    ctx->pc = 0x1ce000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20704));
label_1ce004:
    // 0x1ce004: 0xc06fd3c  jal         func_1BF4F0
label_1ce008:
    if (ctx->pc == 0x1CE008u) {
        ctx->pc = 0x1CE008u;
            // 0x1ce008: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->pc = 0x1CE00Cu;
        goto label_1ce00c;
    }
    ctx->pc = 0x1CE004u;
    SET_GPR_U32(ctx, 31, 0x1CE00Cu);
    ctx->pc = 0x1CE008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE004u;
            // 0x1ce008: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF4F0u;
    if (runtime->hasFunction(0x1BF4F0u)) {
        auto targetFn = runtime->lookupFunction(0x1BF4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE00Cu; }
        if (ctx->pc != 0x1CE00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13CFireAfterHitFv_0x1bf4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE00Cu; }
        if (ctx->pc != 0x1CE00Cu) { return; }
    }
    ctx->pc = 0x1CE00Cu;
label_1ce00c:
    // 0x1ce00c: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1ce00cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
label_1ce010:
    // 0x1ce010: 0x26b500b0  addiu       $s5, $s5, 0xB0
    ctx->pc = 0x1ce010u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 176));
label_1ce014:
    // 0x1ce014: 0x2ac20006  slti        $v0, $s6, 0x6
    ctx->pc = 0x1ce014u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)(int32_t)6) ? 1 : 0);
label_1ce018:
    // 0x1ce018: 0x26100dc0  addiu       $s0, $s0, 0xDC0
    ctx->pc = 0x1ce018u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3520));
label_1ce01c:
    // 0x1ce01c: 0x26310380  addiu       $s1, $s1, 0x380
    ctx->pc = 0x1ce01cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 896));
label_1ce020:
    // 0x1ce020: 0x265207a0  addiu       $s2, $s2, 0x7A0
    ctx->pc = 0x1ce020u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1952));
label_1ce024:
    // 0x1ce024: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
label_1ce028:
    if (ctx->pc == 0x1CE028u) {
        ctx->pc = 0x1CE028u;
            // 0x1ce028: 0x26730940  addiu       $s3, $s3, 0x940 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2368));
        ctx->pc = 0x1CE02Cu;
        goto label_1ce02c;
    }
    ctx->pc = 0x1CE024u;
    {
        const bool branch_taken_0x1ce024 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE024u;
            // 0x1ce028: 0x26730940  addiu       $s3, $s3, 0x940 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce024) {
            ctx->pc = 0x1CDF88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cdf88;
        }
    }
    ctx->pc = 0x1CE02Cu;
label_1ce02c:
    // 0x1ce02c: 0x2404006c  addiu       $a0, $zero, 0x6C
    ctx->pc = 0x1ce02cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_1ce030:
    // 0x1ce030: 0xc064c44  jal         func_193110
label_1ce034:
    if (ctx->pc == 0x1CE034u) {
        ctx->pc = 0x1CE034u;
            // 0x1ce034: 0xaf808d98  sw          $zero, -0x7268($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938008), GPR_U32(ctx, 0));
        ctx->pc = 0x1CE038u;
        goto label_1ce038;
    }
    ctx->pc = 0x1CE030u;
    SET_GPR_U32(ctx, 31, 0x1CE038u);
    ctx->pc = 0x1CE034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE030u;
            // 0x1ce034: 0xaf808d98  sw          $zero, -0x7268($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938008), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x193110u;
    if (runtime->hasFunction(0x193110u)) {
        auto targetFn = runtime->lookupFunction(0x193110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE038u; }
        if (ctx->pc != 0x1CE038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitPauseMenu__Fi_0x193110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE038u; }
        if (ctx->pc != 0x1CE038u) { return; }
    }
    ctx->pc = 0x1CE038u;
label_1ce038:
    // 0x1ce038: 0x3c0101eb  lui         $at, 0x1EB
    ctx->pc = 0x1ce038u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)491 << 16));
label_1ce03c:
    // 0x1ce03c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1ce03cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ce040:
    // 0x1ce040: 0xa420f390  sh          $zero, -0xC70($at)
    ctx->pc = 0x1ce040u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294964112), (uint16_t)GPR_U32(ctx, 0));
label_1ce044:
    // 0x1ce044: 0x3c0101eb  lui         $at, 0x1EB
    ctx->pc = 0x1ce044u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)491 << 16));
label_1ce048:
    // 0x1ce048: 0xa422f3a6  sh          $v0, -0xC5A($at)
    ctx->pc = 0x1ce048u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294964134), (uint16_t)GPR_U32(ctx, 2));
label_1ce04c:
    // 0x1ce04c: 0x3c0101eb  lui         $at, 0x1EB
    ctx->pc = 0x1ce04cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)491 << 16));
label_1ce050:
    // 0x1ce050: 0xa420f3a4  sh          $zero, -0xC5C($at)
    ctx->pc = 0x1ce050u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294964132), (uint16_t)GPR_U32(ctx, 0));
label_1ce054:
    // 0x1ce054: 0x3c0101eb  lui         $at, 0x1EB
    ctx->pc = 0x1ce054u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)491 << 16));
label_1ce058:
    // 0x1ce058: 0xac20f394  sw          $zero, -0xC6C($at)
    ctx->pc = 0x1ce058u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964116), GPR_U32(ctx, 0));
label_1ce05c:
    // 0x1ce05c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x1ce05cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_1ce060:
    // 0x1ce060: 0xa020e4bc  sb          $zero, -0x1B44($at)
    ctx->pc = 0x1ce060u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294960316), (uint8_t)GPR_U32(ctx, 0));
label_1ce064:
    // 0x1ce064: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ce064u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ce068:
    // 0x1ce068: 0xc073a14  jal         func_1CE850
label_1ce06c:
    if (ctx->pc == 0x1CE06Cu) {
        ctx->pc = 0x1CE06Cu;
            // 0x1ce06c: 0x8c24f6e4  lw          $a0, -0x91C($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964964)));
        ctx->pc = 0x1CE070u;
        goto label_1ce070;
    }
    ctx->pc = 0x1CE068u;
    SET_GPR_U32(ctx, 31, 0x1CE070u);
    ctx->pc = 0x1CE06Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE068u;
            // 0x1ce06c: 0x8c24f6e4  lw          $a0, -0x91C($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964964)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CE850u;
    if (runtime->hasFunction(0x1CE850u)) {
        auto targetFn = runtime->lookupFunction(0x1CE850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE070u; }
        if (ctx->pc != 0x1CE070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EntryEventScript__Fi_0x1ce850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE070u; }
        if (ctx->pc != 0x1CE070u) { return; }
    }
    ctx->pc = 0x1CE070u;
label_1ce070:
    // 0x1ce070: 0x83828df8  lb          $v0, -0x7208($gp)
    ctx->pc = 0x1ce070u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938104)));
label_1ce074:
    // 0x1ce074: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1ce078:
    if (ctx->pc == 0x1CE078u) {
        ctx->pc = 0x1CE078u;
            // 0x1ce078: 0x3c0401ed  lui         $a0, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x1CE07Cu;
        goto label_1ce07c;
    }
    ctx->pc = 0x1CE074u;
    {
        const bool branch_taken_0x1ce074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CE078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE074u;
            // 0x1ce078: 0x3c0401ed  lui         $a0, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce074) {
            ctx->pc = 0x1CE08Cu;
            goto label_1ce08c;
        }
    }
    ctx->pc = 0x1CE07Cu;
label_1ce07c:
    // 0x1ce07c: 0xc04e640  jal         func_139900
label_1ce080:
    if (ctx->pc == 0x1CE080u) {
        ctx->pc = 0x1CE080u;
            // 0x1ce080: 0x24848860  addiu       $a0, $a0, -0x77A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936672));
        ctx->pc = 0x1CE084u;
        goto label_1ce084;
    }
    ctx->pc = 0x1CE07Cu;
    SET_GPR_U32(ctx, 31, 0x1CE084u);
    ctx->pc = 0x1CE080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE07Cu;
            // 0x1ce080: 0x24848860  addiu       $a0, $a0, -0x77A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139900u;
    if (runtime->hasFunction(0x139900u)) {
        auto targetFn = runtime->lookupFunction(0x139900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE084u; }
        if (ctx->pc != 0x1CE084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__9mgCMemoryFv_0x139900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE084u; }
        if (ctx->pc != 0x1CE084u) { return; }
    }
    ctx->pc = 0x1CE084u;
label_1ce084:
    // 0x1ce084: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ce084u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ce088:
    // 0x1ce088: 0xa3828df8  sb          $v0, -0x7208($gp)
    ctx->pc = 0x1ce088u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938104), (uint8_t)GPR_U32(ctx, 2));
label_1ce08c:
    // 0x1ce08c: 0x8f858d74  lw          $a1, -0x728C($gp)
    ctx->pc = 0x1ce08cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937972)));
label_1ce090:
    // 0x1ce090: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x1ce090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_1ce094:
    // 0x1ce094: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1ce094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_1ce098:
    // 0x1ce098: 0x24848860  addiu       $a0, $a0, -0x77A0
    ctx->pc = 0x1ce098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936672));
label_1ce09c:
    // 0x1ce09c: 0xc04e79c  jal         func_139E70
label_1ce0a0:
    if (ctx->pc == 0x1CE0A0u) {
        ctx->pc = 0x1CE0A0u;
            // 0x1ce0a0: 0x34460d40  ori         $a2, $v0, 0xD40 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3392);
        ctx->pc = 0x1CE0A4u;
        goto label_1ce0a4;
    }
    ctx->pc = 0x1CE09Cu;
    SET_GPR_U32(ctx, 31, 0x1CE0A4u);
    ctx->pc = 0x1CE0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE09Cu;
            // 0x1ce0a0: 0x34460d40  ori         $a2, $v0, 0xD40 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3392);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE0A4u; }
        if (ctx->pc != 0x1CE0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE0A4u; }
        if (ctx->pc != 0x1CE0A4u) { return; }
    }
    ctx->pc = 0x1CE0A4u;
label_1ce0a4:
    // 0x1ce0a4: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x1ce0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
label_1ce0a8:
    // 0x1ce0a8: 0x2404007d  addiu       $a0, $zero, 0x7D
    ctx->pc = 0x1ce0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
label_1ce0ac:
    // 0x1ce0ac: 0xc09fc7c  jal         func_27F1F0
label_1ce0b0:
    if (ctx->pc == 0x1CE0B0u) {
        ctx->pc = 0x1CE0B0u;
            // 0x1ce0b0: 0x24a58860  addiu       $a1, $a1, -0x77A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936672));
        ctx->pc = 0x1CE0B4u;
        goto label_1ce0b4;
    }
    ctx->pc = 0x1CE0ACu;
    SET_GPR_U32(ctx, 31, 0x1CE0B4u);
    ctx->pc = 0x1CE0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE0ACu;
            // 0x1ce0b0: 0x24a58860  addiu       $a1, $a1, -0x77A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F1F0u;
    if (runtime->hasFunction(0x27F1F0u)) {
        auto targetFn = runtime->lookupFunction(0x27F1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE0B4u; }
        if (ctx->pc != 0x1CE0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEventEdit__FiP9mgCMemory_0x27f1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE0B4u; }
        if (ctx->pc != 0x1CE0B4u) { return; }
    }
    ctx->pc = 0x1CE0B4u;
label_1ce0b4:
    // 0x1ce0b4: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1ce0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1ce0b8:
    // 0x1ce0b8: 0x8fa300c8  lw          $v1, 0xC8($sp)
    ctx->pc = 0x1ce0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1ce0bc:
    // 0x1ce0bc: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x1ce0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
label_1ce0c0:
    // 0x1ce0c0: 0x1c600003  bgtz        $v1, . + 4 + (0x3 << 2)
label_1ce0c4:
    if (ctx->pc == 0x1CE0C4u) {
        ctx->pc = 0x1CE0C4u;
            // 0x1ce0c4: 0xa4430044  sh          $v1, 0x44($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 68), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1CE0C8u;
        goto label_1ce0c8;
    }
    ctx->pc = 0x1CE0C0u;
    {
        const bool branch_taken_0x1ce0c0 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1CE0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE0C0u;
            // 0x1ce0c4: 0xa4430044  sh          $v1, 0x44($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 68), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ce0c0) {
            ctx->pc = 0x1CE0D0u;
            goto label_1ce0d0;
        }
    }
    ctx->pc = 0x1CE0C8u;
label_1ce0c8:
    // 0x1ce0c8: 0x240203e8  addiu       $v0, $zero, 0x3E8
    ctx->pc = 0x1ce0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1000));
label_1ce0cc:
    // 0x1ce0cc: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x1ce0ccu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_1ce0d0:
    // 0x1ce0d0: 0xc074e0c  jal         func_1D3830
label_1ce0d4:
    if (ctx->pc == 0x1CE0D4u) {
        ctx->pc = 0x1CE0D8u;
        goto label_1ce0d8;
    }
    ctx->pc = 0x1CE0D0u;
    SET_GPR_U32(ctx, 31, 0x1CE0D8u);
    ctx->pc = 0x1D3830u;
    if (runtime->hasFunction(0x1D3830u)) {
        auto targetFn = runtime->lookupFunction(0x1D3830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE0D8u; }
        if (ctx->pc != 0x1CE0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EventScriptSetup__FP18SYSTEM_SCRIPT_INFO_0x1d3830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE0D8u; }
        if (ctx->pc != 0x1CE0D8u) { return; }
    }
    ctx->pc = 0x1CE0D8u;
label_1ce0d8:
    // 0x1ce0d8: 0x8f858db0  lw          $a1, -0x7250($gp)
    ctx->pc = 0x1ce0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1ce0dc:
    // 0x1ce0dc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ce0dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ce0e0:
    // 0x1ce0e0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1ce0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1ce0e4:
    // 0x1ce0e4: 0x80a40048  lb          $a0, 0x48($a1)
    ctx->pc = 0x1ce0e4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 72)));
label_1ce0e8:
    // 0x1ce0e8: 0xa0a40049  sb          $a0, 0x49($a1)
    ctx->pc = 0x1ce0e8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 73), (uint8_t)GPR_U32(ctx, 4));
label_1ce0ec:
    // 0x1ce0ec: 0xa0a30048  sb          $v1, 0x48($a1)
    ctx->pc = 0x1ce0ecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 72), (uint8_t)GPR_U32(ctx, 3));
label_1ce0f0:
    // 0x1ce0f0: 0xaca0004c  sw          $zero, 0x4C($a1)
    ctx->pc = 0x1ce0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 0));
label_1ce0f4:
    // 0x1ce0f4: 0xaca20050  sw          $v0, 0x50($a1)
    ctx->pc = 0x1ce0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 80), GPR_U32(ctx, 2));
label_1ce0f8:
    // 0x1ce0f8: 0xc0c2698  jal         func_309A60
label_1ce0fc:
    if (ctx->pc == 0x1CE0FCu) {
        ctx->pc = 0x1CE0FCu;
            // 0x1ce0fc: 0xaca2004c  sw          $v0, 0x4C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 2));
        ctx->pc = 0x1CE100u;
        goto label_1ce100;
    }
    ctx->pc = 0x1CE0F8u;
    SET_GPR_U32(ctx, 31, 0x1CE100u);
    ctx->pc = 0x1CE0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE0F8u;
            // 0x1ce0fc: 0xaca2004c  sw          $v0, 0x4C($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x309A60u;
    if (runtime->hasFunction(0x309A60u)) {
        auto targetFn = runtime->lookupFunction(0x309A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE100u; }
        if (ctx->pc != 0x1CE100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowLoadingBarSteEnd__Fv_0x309a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE100u; }
        if (ctx->pc != 0x1CE100u) { return; }
    }
    ctx->pc = 0x1CE100u;
label_1ce100:
    // 0x1ce100: 0xc0c26a0  jal         func_309A80
label_1ce104:
    if (ctx->pc == 0x1CE104u) {
        ctx->pc = 0x1CE108u;
        goto label_1ce108;
    }
    ctx->pc = 0x1CE100u;
    SET_GPR_U32(ctx, 31, 0x1CE108u);
    ctx->pc = 0x309A80u;
    if (runtime->hasFunction(0x309A80u)) {
        auto targetFn = runtime->lookupFunction(0x309A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE108u; }
        if (ctx->pc != 0x1CE108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteNowLoading__Fv_0x309a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CE108u; }
        if (ctx->pc != 0x1CE108u) { return; }
    }
    ctx->pc = 0x1CE108u;
label_1ce108:
    // 0x1ce108: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1ce108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1ce10c:
    // 0x1ce10c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1ce10cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1ce110:
    // 0x1ce110: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1ce110u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1ce114:
    // 0x1ce114: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1ce114u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1ce118:
    // 0x1ce118: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ce118u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1ce11c:
    // 0x1ce11c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ce11cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1ce120:
    // 0x1ce120: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ce120u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1ce124:
    // 0x1ce124: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ce124u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1ce128:
    // 0x1ce128: 0x3e00008  jr          $ra
label_1ce12c:
    if (ctx->pc == 0x1CE12Cu) {
        ctx->pc = 0x1CE12Cu;
            // 0x1ce12c: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->pc = 0x1CE130u;
        goto label_fallthrough_0x1ce128;
    }
    ctx->pc = 0x1CE128u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE12Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CE128u;
            // 0x1ce12c: 0x27bd02c0  addiu       $sp, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1ce128:
    ctx->pc = 0x1CE130u;
}
