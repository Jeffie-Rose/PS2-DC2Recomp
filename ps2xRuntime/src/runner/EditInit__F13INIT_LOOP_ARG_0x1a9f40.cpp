#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: EditInit__F13INIT_LOOP_ARG
// Address: 0x1a9f40 - 0x1abab0
void EditInit__F13INIT_LOOP_ARG_0x1a9f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EditInit__F13INIT_LOOP_ARG_0x1a9f40");
#endif

    switch (ctx->pc) {
        case 0x1a9f40u: goto label_1a9f40;
        case 0x1a9f44u: goto label_1a9f44;
        case 0x1a9f48u: goto label_1a9f48;
        case 0x1a9f4cu: goto label_1a9f4c;
        case 0x1a9f50u: goto label_1a9f50;
        case 0x1a9f54u: goto label_1a9f54;
        case 0x1a9f58u: goto label_1a9f58;
        case 0x1a9f5cu: goto label_1a9f5c;
        case 0x1a9f60u: goto label_1a9f60;
        case 0x1a9f64u: goto label_1a9f64;
        case 0x1a9f68u: goto label_1a9f68;
        case 0x1a9f6cu: goto label_1a9f6c;
        case 0x1a9f70u: goto label_1a9f70;
        case 0x1a9f74u: goto label_1a9f74;
        case 0x1a9f78u: goto label_1a9f78;
        case 0x1a9f7cu: goto label_1a9f7c;
        case 0x1a9f80u: goto label_1a9f80;
        case 0x1a9f84u: goto label_1a9f84;
        case 0x1a9f88u: goto label_1a9f88;
        case 0x1a9f8cu: goto label_1a9f8c;
        case 0x1a9f90u: goto label_1a9f90;
        case 0x1a9f94u: goto label_1a9f94;
        case 0x1a9f98u: goto label_1a9f98;
        case 0x1a9f9cu: goto label_1a9f9c;
        case 0x1a9fa0u: goto label_1a9fa0;
        case 0x1a9fa4u: goto label_1a9fa4;
        case 0x1a9fa8u: goto label_1a9fa8;
        case 0x1a9facu: goto label_1a9fac;
        case 0x1a9fb0u: goto label_1a9fb0;
        case 0x1a9fb4u: goto label_1a9fb4;
        case 0x1a9fb8u: goto label_1a9fb8;
        case 0x1a9fbcu: goto label_1a9fbc;
        case 0x1a9fc0u: goto label_1a9fc0;
        case 0x1a9fc4u: goto label_1a9fc4;
        case 0x1a9fc8u: goto label_1a9fc8;
        case 0x1a9fccu: goto label_1a9fcc;
        case 0x1a9fd0u: goto label_1a9fd0;
        case 0x1a9fd4u: goto label_1a9fd4;
        case 0x1a9fd8u: goto label_1a9fd8;
        case 0x1a9fdcu: goto label_1a9fdc;
        case 0x1a9fe0u: goto label_1a9fe0;
        case 0x1a9fe4u: goto label_1a9fe4;
        case 0x1a9fe8u: goto label_1a9fe8;
        case 0x1a9fecu: goto label_1a9fec;
        case 0x1a9ff0u: goto label_1a9ff0;
        case 0x1a9ff4u: goto label_1a9ff4;
        case 0x1a9ff8u: goto label_1a9ff8;
        case 0x1a9ffcu: goto label_1a9ffc;
        case 0x1aa000u: goto label_1aa000;
        case 0x1aa004u: goto label_1aa004;
        case 0x1aa008u: goto label_1aa008;
        case 0x1aa00cu: goto label_1aa00c;
        case 0x1aa010u: goto label_1aa010;
        case 0x1aa014u: goto label_1aa014;
        case 0x1aa018u: goto label_1aa018;
        case 0x1aa01cu: goto label_1aa01c;
        case 0x1aa020u: goto label_1aa020;
        case 0x1aa024u: goto label_1aa024;
        case 0x1aa028u: goto label_1aa028;
        case 0x1aa02cu: goto label_1aa02c;
        case 0x1aa030u: goto label_1aa030;
        case 0x1aa034u: goto label_1aa034;
        case 0x1aa038u: goto label_1aa038;
        case 0x1aa03cu: goto label_1aa03c;
        case 0x1aa040u: goto label_1aa040;
        case 0x1aa044u: goto label_1aa044;
        case 0x1aa048u: goto label_1aa048;
        case 0x1aa04cu: goto label_1aa04c;
        case 0x1aa050u: goto label_1aa050;
        case 0x1aa054u: goto label_1aa054;
        case 0x1aa058u: goto label_1aa058;
        case 0x1aa05cu: goto label_1aa05c;
        case 0x1aa060u: goto label_1aa060;
        case 0x1aa064u: goto label_1aa064;
        case 0x1aa068u: goto label_1aa068;
        case 0x1aa06cu: goto label_1aa06c;
        case 0x1aa070u: goto label_1aa070;
        case 0x1aa074u: goto label_1aa074;
        case 0x1aa078u: goto label_1aa078;
        case 0x1aa07cu: goto label_1aa07c;
        case 0x1aa080u: goto label_1aa080;
        case 0x1aa084u: goto label_1aa084;
        case 0x1aa088u: goto label_1aa088;
        case 0x1aa08cu: goto label_1aa08c;
        case 0x1aa090u: goto label_1aa090;
        case 0x1aa094u: goto label_1aa094;
        case 0x1aa098u: goto label_1aa098;
        case 0x1aa09cu: goto label_1aa09c;
        case 0x1aa0a0u: goto label_1aa0a0;
        case 0x1aa0a4u: goto label_1aa0a4;
        case 0x1aa0a8u: goto label_1aa0a8;
        case 0x1aa0acu: goto label_1aa0ac;
        case 0x1aa0b0u: goto label_1aa0b0;
        case 0x1aa0b4u: goto label_1aa0b4;
        case 0x1aa0b8u: goto label_1aa0b8;
        case 0x1aa0bcu: goto label_1aa0bc;
        case 0x1aa0c0u: goto label_1aa0c0;
        case 0x1aa0c4u: goto label_1aa0c4;
        case 0x1aa0c8u: goto label_1aa0c8;
        case 0x1aa0ccu: goto label_1aa0cc;
        case 0x1aa0d0u: goto label_1aa0d0;
        case 0x1aa0d4u: goto label_1aa0d4;
        case 0x1aa0d8u: goto label_1aa0d8;
        case 0x1aa0dcu: goto label_1aa0dc;
        case 0x1aa0e0u: goto label_1aa0e0;
        case 0x1aa0e4u: goto label_1aa0e4;
        case 0x1aa0e8u: goto label_1aa0e8;
        case 0x1aa0ecu: goto label_1aa0ec;
        case 0x1aa0f0u: goto label_1aa0f0;
        case 0x1aa0f4u: goto label_1aa0f4;
        case 0x1aa0f8u: goto label_1aa0f8;
        case 0x1aa0fcu: goto label_1aa0fc;
        case 0x1aa100u: goto label_1aa100;
        case 0x1aa104u: goto label_1aa104;
        case 0x1aa108u: goto label_1aa108;
        case 0x1aa10cu: goto label_1aa10c;
        case 0x1aa110u: goto label_1aa110;
        case 0x1aa114u: goto label_1aa114;
        case 0x1aa118u: goto label_1aa118;
        case 0x1aa11cu: goto label_1aa11c;
        case 0x1aa120u: goto label_1aa120;
        case 0x1aa124u: goto label_1aa124;
        case 0x1aa128u: goto label_1aa128;
        case 0x1aa12cu: goto label_1aa12c;
        case 0x1aa130u: goto label_1aa130;
        case 0x1aa134u: goto label_1aa134;
        case 0x1aa138u: goto label_1aa138;
        case 0x1aa13cu: goto label_1aa13c;
        case 0x1aa140u: goto label_1aa140;
        case 0x1aa144u: goto label_1aa144;
        case 0x1aa148u: goto label_1aa148;
        case 0x1aa14cu: goto label_1aa14c;
        case 0x1aa150u: goto label_1aa150;
        case 0x1aa154u: goto label_1aa154;
        case 0x1aa158u: goto label_1aa158;
        case 0x1aa15cu: goto label_1aa15c;
        case 0x1aa160u: goto label_1aa160;
        case 0x1aa164u: goto label_1aa164;
        case 0x1aa168u: goto label_1aa168;
        case 0x1aa16cu: goto label_1aa16c;
        case 0x1aa170u: goto label_1aa170;
        case 0x1aa174u: goto label_1aa174;
        case 0x1aa178u: goto label_1aa178;
        case 0x1aa17cu: goto label_1aa17c;
        case 0x1aa180u: goto label_1aa180;
        case 0x1aa184u: goto label_1aa184;
        case 0x1aa188u: goto label_1aa188;
        case 0x1aa18cu: goto label_1aa18c;
        case 0x1aa190u: goto label_1aa190;
        case 0x1aa194u: goto label_1aa194;
        case 0x1aa198u: goto label_1aa198;
        case 0x1aa19cu: goto label_1aa19c;
        case 0x1aa1a0u: goto label_1aa1a0;
        case 0x1aa1a4u: goto label_1aa1a4;
        case 0x1aa1a8u: goto label_1aa1a8;
        case 0x1aa1acu: goto label_1aa1ac;
        case 0x1aa1b0u: goto label_1aa1b0;
        case 0x1aa1b4u: goto label_1aa1b4;
        case 0x1aa1b8u: goto label_1aa1b8;
        case 0x1aa1bcu: goto label_1aa1bc;
        case 0x1aa1c0u: goto label_1aa1c0;
        case 0x1aa1c4u: goto label_1aa1c4;
        case 0x1aa1c8u: goto label_1aa1c8;
        case 0x1aa1ccu: goto label_1aa1cc;
        case 0x1aa1d0u: goto label_1aa1d0;
        case 0x1aa1d4u: goto label_1aa1d4;
        case 0x1aa1d8u: goto label_1aa1d8;
        case 0x1aa1dcu: goto label_1aa1dc;
        case 0x1aa1e0u: goto label_1aa1e0;
        case 0x1aa1e4u: goto label_1aa1e4;
        case 0x1aa1e8u: goto label_1aa1e8;
        case 0x1aa1ecu: goto label_1aa1ec;
        case 0x1aa1f0u: goto label_1aa1f0;
        case 0x1aa1f4u: goto label_1aa1f4;
        case 0x1aa1f8u: goto label_1aa1f8;
        case 0x1aa1fcu: goto label_1aa1fc;
        case 0x1aa200u: goto label_1aa200;
        case 0x1aa204u: goto label_1aa204;
        case 0x1aa208u: goto label_1aa208;
        case 0x1aa20cu: goto label_1aa20c;
        case 0x1aa210u: goto label_1aa210;
        case 0x1aa214u: goto label_1aa214;
        case 0x1aa218u: goto label_1aa218;
        case 0x1aa21cu: goto label_1aa21c;
        case 0x1aa220u: goto label_1aa220;
        case 0x1aa224u: goto label_1aa224;
        case 0x1aa228u: goto label_1aa228;
        case 0x1aa22cu: goto label_1aa22c;
        case 0x1aa230u: goto label_1aa230;
        case 0x1aa234u: goto label_1aa234;
        case 0x1aa238u: goto label_1aa238;
        case 0x1aa23cu: goto label_1aa23c;
        case 0x1aa240u: goto label_1aa240;
        case 0x1aa244u: goto label_1aa244;
        case 0x1aa248u: goto label_1aa248;
        case 0x1aa24cu: goto label_1aa24c;
        case 0x1aa250u: goto label_1aa250;
        case 0x1aa254u: goto label_1aa254;
        case 0x1aa258u: goto label_1aa258;
        case 0x1aa25cu: goto label_1aa25c;
        case 0x1aa260u: goto label_1aa260;
        case 0x1aa264u: goto label_1aa264;
        case 0x1aa268u: goto label_1aa268;
        case 0x1aa26cu: goto label_1aa26c;
        case 0x1aa270u: goto label_1aa270;
        case 0x1aa274u: goto label_1aa274;
        case 0x1aa278u: goto label_1aa278;
        case 0x1aa27cu: goto label_1aa27c;
        case 0x1aa280u: goto label_1aa280;
        case 0x1aa284u: goto label_1aa284;
        case 0x1aa288u: goto label_1aa288;
        case 0x1aa28cu: goto label_1aa28c;
        case 0x1aa290u: goto label_1aa290;
        case 0x1aa294u: goto label_1aa294;
        case 0x1aa298u: goto label_1aa298;
        case 0x1aa29cu: goto label_1aa29c;
        case 0x1aa2a0u: goto label_1aa2a0;
        case 0x1aa2a4u: goto label_1aa2a4;
        case 0x1aa2a8u: goto label_1aa2a8;
        case 0x1aa2acu: goto label_1aa2ac;
        case 0x1aa2b0u: goto label_1aa2b0;
        case 0x1aa2b4u: goto label_1aa2b4;
        case 0x1aa2b8u: goto label_1aa2b8;
        case 0x1aa2bcu: goto label_1aa2bc;
        case 0x1aa2c0u: goto label_1aa2c0;
        case 0x1aa2c4u: goto label_1aa2c4;
        case 0x1aa2c8u: goto label_1aa2c8;
        case 0x1aa2ccu: goto label_1aa2cc;
        case 0x1aa2d0u: goto label_1aa2d0;
        case 0x1aa2d4u: goto label_1aa2d4;
        case 0x1aa2d8u: goto label_1aa2d8;
        case 0x1aa2dcu: goto label_1aa2dc;
        case 0x1aa2e0u: goto label_1aa2e0;
        case 0x1aa2e4u: goto label_1aa2e4;
        case 0x1aa2e8u: goto label_1aa2e8;
        case 0x1aa2ecu: goto label_1aa2ec;
        case 0x1aa2f0u: goto label_1aa2f0;
        case 0x1aa2f4u: goto label_1aa2f4;
        case 0x1aa2f8u: goto label_1aa2f8;
        case 0x1aa2fcu: goto label_1aa2fc;
        case 0x1aa300u: goto label_1aa300;
        case 0x1aa304u: goto label_1aa304;
        case 0x1aa308u: goto label_1aa308;
        case 0x1aa30cu: goto label_1aa30c;
        case 0x1aa310u: goto label_1aa310;
        case 0x1aa314u: goto label_1aa314;
        case 0x1aa318u: goto label_1aa318;
        case 0x1aa31cu: goto label_1aa31c;
        case 0x1aa320u: goto label_1aa320;
        case 0x1aa324u: goto label_1aa324;
        case 0x1aa328u: goto label_1aa328;
        case 0x1aa32cu: goto label_1aa32c;
        case 0x1aa330u: goto label_1aa330;
        case 0x1aa334u: goto label_1aa334;
        case 0x1aa338u: goto label_1aa338;
        case 0x1aa33cu: goto label_1aa33c;
        case 0x1aa340u: goto label_1aa340;
        case 0x1aa344u: goto label_1aa344;
        case 0x1aa348u: goto label_1aa348;
        case 0x1aa34cu: goto label_1aa34c;
        case 0x1aa350u: goto label_1aa350;
        case 0x1aa354u: goto label_1aa354;
        case 0x1aa358u: goto label_1aa358;
        case 0x1aa35cu: goto label_1aa35c;
        case 0x1aa360u: goto label_1aa360;
        case 0x1aa364u: goto label_1aa364;
        case 0x1aa368u: goto label_1aa368;
        case 0x1aa36cu: goto label_1aa36c;
        case 0x1aa370u: goto label_1aa370;
        case 0x1aa374u: goto label_1aa374;
        case 0x1aa378u: goto label_1aa378;
        case 0x1aa37cu: goto label_1aa37c;
        case 0x1aa380u: goto label_1aa380;
        case 0x1aa384u: goto label_1aa384;
        case 0x1aa388u: goto label_1aa388;
        case 0x1aa38cu: goto label_1aa38c;
        case 0x1aa390u: goto label_1aa390;
        case 0x1aa394u: goto label_1aa394;
        case 0x1aa398u: goto label_1aa398;
        case 0x1aa39cu: goto label_1aa39c;
        case 0x1aa3a0u: goto label_1aa3a0;
        case 0x1aa3a4u: goto label_1aa3a4;
        case 0x1aa3a8u: goto label_1aa3a8;
        case 0x1aa3acu: goto label_1aa3ac;
        case 0x1aa3b0u: goto label_1aa3b0;
        case 0x1aa3b4u: goto label_1aa3b4;
        case 0x1aa3b8u: goto label_1aa3b8;
        case 0x1aa3bcu: goto label_1aa3bc;
        case 0x1aa3c0u: goto label_1aa3c0;
        case 0x1aa3c4u: goto label_1aa3c4;
        case 0x1aa3c8u: goto label_1aa3c8;
        case 0x1aa3ccu: goto label_1aa3cc;
        case 0x1aa3d0u: goto label_1aa3d0;
        case 0x1aa3d4u: goto label_1aa3d4;
        case 0x1aa3d8u: goto label_1aa3d8;
        case 0x1aa3dcu: goto label_1aa3dc;
        case 0x1aa3e0u: goto label_1aa3e0;
        case 0x1aa3e4u: goto label_1aa3e4;
        case 0x1aa3e8u: goto label_1aa3e8;
        case 0x1aa3ecu: goto label_1aa3ec;
        case 0x1aa3f0u: goto label_1aa3f0;
        case 0x1aa3f4u: goto label_1aa3f4;
        case 0x1aa3f8u: goto label_1aa3f8;
        case 0x1aa3fcu: goto label_1aa3fc;
        case 0x1aa400u: goto label_1aa400;
        case 0x1aa404u: goto label_1aa404;
        case 0x1aa408u: goto label_1aa408;
        case 0x1aa40cu: goto label_1aa40c;
        case 0x1aa410u: goto label_1aa410;
        case 0x1aa414u: goto label_1aa414;
        case 0x1aa418u: goto label_1aa418;
        case 0x1aa41cu: goto label_1aa41c;
        case 0x1aa420u: goto label_1aa420;
        case 0x1aa424u: goto label_1aa424;
        case 0x1aa428u: goto label_1aa428;
        case 0x1aa42cu: goto label_1aa42c;
        case 0x1aa430u: goto label_1aa430;
        case 0x1aa434u: goto label_1aa434;
        case 0x1aa438u: goto label_1aa438;
        case 0x1aa43cu: goto label_1aa43c;
        case 0x1aa440u: goto label_1aa440;
        case 0x1aa444u: goto label_1aa444;
        case 0x1aa448u: goto label_1aa448;
        case 0x1aa44cu: goto label_1aa44c;
        case 0x1aa450u: goto label_1aa450;
        case 0x1aa454u: goto label_1aa454;
        case 0x1aa458u: goto label_1aa458;
        case 0x1aa45cu: goto label_1aa45c;
        case 0x1aa460u: goto label_1aa460;
        case 0x1aa464u: goto label_1aa464;
        case 0x1aa468u: goto label_1aa468;
        case 0x1aa46cu: goto label_1aa46c;
        case 0x1aa470u: goto label_1aa470;
        case 0x1aa474u: goto label_1aa474;
        case 0x1aa478u: goto label_1aa478;
        case 0x1aa47cu: goto label_1aa47c;
        case 0x1aa480u: goto label_1aa480;
        case 0x1aa484u: goto label_1aa484;
        case 0x1aa488u: goto label_1aa488;
        case 0x1aa48cu: goto label_1aa48c;
        case 0x1aa490u: goto label_1aa490;
        case 0x1aa494u: goto label_1aa494;
        case 0x1aa498u: goto label_1aa498;
        case 0x1aa49cu: goto label_1aa49c;
        case 0x1aa4a0u: goto label_1aa4a0;
        case 0x1aa4a4u: goto label_1aa4a4;
        case 0x1aa4a8u: goto label_1aa4a8;
        case 0x1aa4acu: goto label_1aa4ac;
        case 0x1aa4b0u: goto label_1aa4b0;
        case 0x1aa4b4u: goto label_1aa4b4;
        case 0x1aa4b8u: goto label_1aa4b8;
        case 0x1aa4bcu: goto label_1aa4bc;
        case 0x1aa4c0u: goto label_1aa4c0;
        case 0x1aa4c4u: goto label_1aa4c4;
        case 0x1aa4c8u: goto label_1aa4c8;
        case 0x1aa4ccu: goto label_1aa4cc;
        case 0x1aa4d0u: goto label_1aa4d0;
        case 0x1aa4d4u: goto label_1aa4d4;
        case 0x1aa4d8u: goto label_1aa4d8;
        case 0x1aa4dcu: goto label_1aa4dc;
        case 0x1aa4e0u: goto label_1aa4e0;
        case 0x1aa4e4u: goto label_1aa4e4;
        case 0x1aa4e8u: goto label_1aa4e8;
        case 0x1aa4ecu: goto label_1aa4ec;
        case 0x1aa4f0u: goto label_1aa4f0;
        case 0x1aa4f4u: goto label_1aa4f4;
        case 0x1aa4f8u: goto label_1aa4f8;
        case 0x1aa4fcu: goto label_1aa4fc;
        case 0x1aa500u: goto label_1aa500;
        case 0x1aa504u: goto label_1aa504;
        case 0x1aa508u: goto label_1aa508;
        case 0x1aa50cu: goto label_1aa50c;
        case 0x1aa510u: goto label_1aa510;
        case 0x1aa514u: goto label_1aa514;
        case 0x1aa518u: goto label_1aa518;
        case 0x1aa51cu: goto label_1aa51c;
        case 0x1aa520u: goto label_1aa520;
        case 0x1aa524u: goto label_1aa524;
        case 0x1aa528u: goto label_1aa528;
        case 0x1aa52cu: goto label_1aa52c;
        case 0x1aa530u: goto label_1aa530;
        case 0x1aa534u: goto label_1aa534;
        case 0x1aa538u: goto label_1aa538;
        case 0x1aa53cu: goto label_1aa53c;
        case 0x1aa540u: goto label_1aa540;
        case 0x1aa544u: goto label_1aa544;
        case 0x1aa548u: goto label_1aa548;
        case 0x1aa54cu: goto label_1aa54c;
        case 0x1aa550u: goto label_1aa550;
        case 0x1aa554u: goto label_1aa554;
        case 0x1aa558u: goto label_1aa558;
        case 0x1aa55cu: goto label_1aa55c;
        case 0x1aa560u: goto label_1aa560;
        case 0x1aa564u: goto label_1aa564;
        case 0x1aa568u: goto label_1aa568;
        case 0x1aa56cu: goto label_1aa56c;
        case 0x1aa570u: goto label_1aa570;
        case 0x1aa574u: goto label_1aa574;
        case 0x1aa578u: goto label_1aa578;
        case 0x1aa57cu: goto label_1aa57c;
        case 0x1aa580u: goto label_1aa580;
        case 0x1aa584u: goto label_1aa584;
        case 0x1aa588u: goto label_1aa588;
        case 0x1aa58cu: goto label_1aa58c;
        case 0x1aa590u: goto label_1aa590;
        case 0x1aa594u: goto label_1aa594;
        case 0x1aa598u: goto label_1aa598;
        case 0x1aa59cu: goto label_1aa59c;
        case 0x1aa5a0u: goto label_1aa5a0;
        case 0x1aa5a4u: goto label_1aa5a4;
        case 0x1aa5a8u: goto label_1aa5a8;
        case 0x1aa5acu: goto label_1aa5ac;
        case 0x1aa5b0u: goto label_1aa5b0;
        case 0x1aa5b4u: goto label_1aa5b4;
        case 0x1aa5b8u: goto label_1aa5b8;
        case 0x1aa5bcu: goto label_1aa5bc;
        case 0x1aa5c0u: goto label_1aa5c0;
        case 0x1aa5c4u: goto label_1aa5c4;
        case 0x1aa5c8u: goto label_1aa5c8;
        case 0x1aa5ccu: goto label_1aa5cc;
        case 0x1aa5d0u: goto label_1aa5d0;
        case 0x1aa5d4u: goto label_1aa5d4;
        case 0x1aa5d8u: goto label_1aa5d8;
        case 0x1aa5dcu: goto label_1aa5dc;
        case 0x1aa5e0u: goto label_1aa5e0;
        case 0x1aa5e4u: goto label_1aa5e4;
        case 0x1aa5e8u: goto label_1aa5e8;
        case 0x1aa5ecu: goto label_1aa5ec;
        case 0x1aa5f0u: goto label_1aa5f0;
        case 0x1aa5f4u: goto label_1aa5f4;
        case 0x1aa5f8u: goto label_1aa5f8;
        case 0x1aa5fcu: goto label_1aa5fc;
        case 0x1aa600u: goto label_1aa600;
        case 0x1aa604u: goto label_1aa604;
        case 0x1aa608u: goto label_1aa608;
        case 0x1aa60cu: goto label_1aa60c;
        case 0x1aa610u: goto label_1aa610;
        case 0x1aa614u: goto label_1aa614;
        case 0x1aa618u: goto label_1aa618;
        case 0x1aa61cu: goto label_1aa61c;
        case 0x1aa620u: goto label_1aa620;
        case 0x1aa624u: goto label_1aa624;
        case 0x1aa628u: goto label_1aa628;
        case 0x1aa62cu: goto label_1aa62c;
        case 0x1aa630u: goto label_1aa630;
        case 0x1aa634u: goto label_1aa634;
        case 0x1aa638u: goto label_1aa638;
        case 0x1aa63cu: goto label_1aa63c;
        case 0x1aa640u: goto label_1aa640;
        case 0x1aa644u: goto label_1aa644;
        case 0x1aa648u: goto label_1aa648;
        case 0x1aa64cu: goto label_1aa64c;
        case 0x1aa650u: goto label_1aa650;
        case 0x1aa654u: goto label_1aa654;
        case 0x1aa658u: goto label_1aa658;
        case 0x1aa65cu: goto label_1aa65c;
        case 0x1aa660u: goto label_1aa660;
        case 0x1aa664u: goto label_1aa664;
        case 0x1aa668u: goto label_1aa668;
        case 0x1aa66cu: goto label_1aa66c;
        case 0x1aa670u: goto label_1aa670;
        case 0x1aa674u: goto label_1aa674;
        case 0x1aa678u: goto label_1aa678;
        case 0x1aa67cu: goto label_1aa67c;
        case 0x1aa680u: goto label_1aa680;
        case 0x1aa684u: goto label_1aa684;
        case 0x1aa688u: goto label_1aa688;
        case 0x1aa68cu: goto label_1aa68c;
        case 0x1aa690u: goto label_1aa690;
        case 0x1aa694u: goto label_1aa694;
        case 0x1aa698u: goto label_1aa698;
        case 0x1aa69cu: goto label_1aa69c;
        case 0x1aa6a0u: goto label_1aa6a0;
        case 0x1aa6a4u: goto label_1aa6a4;
        case 0x1aa6a8u: goto label_1aa6a8;
        case 0x1aa6acu: goto label_1aa6ac;
        case 0x1aa6b0u: goto label_1aa6b0;
        case 0x1aa6b4u: goto label_1aa6b4;
        case 0x1aa6b8u: goto label_1aa6b8;
        case 0x1aa6bcu: goto label_1aa6bc;
        case 0x1aa6c0u: goto label_1aa6c0;
        case 0x1aa6c4u: goto label_1aa6c4;
        case 0x1aa6c8u: goto label_1aa6c8;
        case 0x1aa6ccu: goto label_1aa6cc;
        case 0x1aa6d0u: goto label_1aa6d0;
        case 0x1aa6d4u: goto label_1aa6d4;
        case 0x1aa6d8u: goto label_1aa6d8;
        case 0x1aa6dcu: goto label_1aa6dc;
        case 0x1aa6e0u: goto label_1aa6e0;
        case 0x1aa6e4u: goto label_1aa6e4;
        case 0x1aa6e8u: goto label_1aa6e8;
        case 0x1aa6ecu: goto label_1aa6ec;
        case 0x1aa6f0u: goto label_1aa6f0;
        case 0x1aa6f4u: goto label_1aa6f4;
        case 0x1aa6f8u: goto label_1aa6f8;
        case 0x1aa6fcu: goto label_1aa6fc;
        case 0x1aa700u: goto label_1aa700;
        case 0x1aa704u: goto label_1aa704;
        case 0x1aa708u: goto label_1aa708;
        case 0x1aa70cu: goto label_1aa70c;
        case 0x1aa710u: goto label_1aa710;
        case 0x1aa714u: goto label_1aa714;
        case 0x1aa718u: goto label_1aa718;
        case 0x1aa71cu: goto label_1aa71c;
        case 0x1aa720u: goto label_1aa720;
        case 0x1aa724u: goto label_1aa724;
        case 0x1aa728u: goto label_1aa728;
        case 0x1aa72cu: goto label_1aa72c;
        case 0x1aa730u: goto label_1aa730;
        case 0x1aa734u: goto label_1aa734;
        case 0x1aa738u: goto label_1aa738;
        case 0x1aa73cu: goto label_1aa73c;
        case 0x1aa740u: goto label_1aa740;
        case 0x1aa744u: goto label_1aa744;
        case 0x1aa748u: goto label_1aa748;
        case 0x1aa74cu: goto label_1aa74c;
        case 0x1aa750u: goto label_1aa750;
        case 0x1aa754u: goto label_1aa754;
        case 0x1aa758u: goto label_1aa758;
        case 0x1aa75cu: goto label_1aa75c;
        case 0x1aa760u: goto label_1aa760;
        case 0x1aa764u: goto label_1aa764;
        case 0x1aa768u: goto label_1aa768;
        case 0x1aa76cu: goto label_1aa76c;
        case 0x1aa770u: goto label_1aa770;
        case 0x1aa774u: goto label_1aa774;
        case 0x1aa778u: goto label_1aa778;
        case 0x1aa77cu: goto label_1aa77c;
        case 0x1aa780u: goto label_1aa780;
        case 0x1aa784u: goto label_1aa784;
        case 0x1aa788u: goto label_1aa788;
        case 0x1aa78cu: goto label_1aa78c;
        case 0x1aa790u: goto label_1aa790;
        case 0x1aa794u: goto label_1aa794;
        case 0x1aa798u: goto label_1aa798;
        case 0x1aa79cu: goto label_1aa79c;
        case 0x1aa7a0u: goto label_1aa7a0;
        case 0x1aa7a4u: goto label_1aa7a4;
        case 0x1aa7a8u: goto label_1aa7a8;
        case 0x1aa7acu: goto label_1aa7ac;
        case 0x1aa7b0u: goto label_1aa7b0;
        case 0x1aa7b4u: goto label_1aa7b4;
        case 0x1aa7b8u: goto label_1aa7b8;
        case 0x1aa7bcu: goto label_1aa7bc;
        case 0x1aa7c0u: goto label_1aa7c0;
        case 0x1aa7c4u: goto label_1aa7c4;
        case 0x1aa7c8u: goto label_1aa7c8;
        case 0x1aa7ccu: goto label_1aa7cc;
        case 0x1aa7d0u: goto label_1aa7d0;
        case 0x1aa7d4u: goto label_1aa7d4;
        case 0x1aa7d8u: goto label_1aa7d8;
        case 0x1aa7dcu: goto label_1aa7dc;
        case 0x1aa7e0u: goto label_1aa7e0;
        case 0x1aa7e4u: goto label_1aa7e4;
        case 0x1aa7e8u: goto label_1aa7e8;
        case 0x1aa7ecu: goto label_1aa7ec;
        case 0x1aa7f0u: goto label_1aa7f0;
        case 0x1aa7f4u: goto label_1aa7f4;
        case 0x1aa7f8u: goto label_1aa7f8;
        case 0x1aa7fcu: goto label_1aa7fc;
        case 0x1aa800u: goto label_1aa800;
        case 0x1aa804u: goto label_1aa804;
        case 0x1aa808u: goto label_1aa808;
        case 0x1aa80cu: goto label_1aa80c;
        case 0x1aa810u: goto label_1aa810;
        case 0x1aa814u: goto label_1aa814;
        case 0x1aa818u: goto label_1aa818;
        case 0x1aa81cu: goto label_1aa81c;
        case 0x1aa820u: goto label_1aa820;
        case 0x1aa824u: goto label_1aa824;
        case 0x1aa828u: goto label_1aa828;
        case 0x1aa82cu: goto label_1aa82c;
        case 0x1aa830u: goto label_1aa830;
        case 0x1aa834u: goto label_1aa834;
        case 0x1aa838u: goto label_1aa838;
        case 0x1aa83cu: goto label_1aa83c;
        case 0x1aa840u: goto label_1aa840;
        case 0x1aa844u: goto label_1aa844;
        case 0x1aa848u: goto label_1aa848;
        case 0x1aa84cu: goto label_1aa84c;
        case 0x1aa850u: goto label_1aa850;
        case 0x1aa854u: goto label_1aa854;
        case 0x1aa858u: goto label_1aa858;
        case 0x1aa85cu: goto label_1aa85c;
        case 0x1aa860u: goto label_1aa860;
        case 0x1aa864u: goto label_1aa864;
        case 0x1aa868u: goto label_1aa868;
        case 0x1aa86cu: goto label_1aa86c;
        case 0x1aa870u: goto label_1aa870;
        case 0x1aa874u: goto label_1aa874;
        case 0x1aa878u: goto label_1aa878;
        case 0x1aa87cu: goto label_1aa87c;
        case 0x1aa880u: goto label_1aa880;
        case 0x1aa884u: goto label_1aa884;
        case 0x1aa888u: goto label_1aa888;
        case 0x1aa88cu: goto label_1aa88c;
        case 0x1aa890u: goto label_1aa890;
        case 0x1aa894u: goto label_1aa894;
        case 0x1aa898u: goto label_1aa898;
        case 0x1aa89cu: goto label_1aa89c;
        case 0x1aa8a0u: goto label_1aa8a0;
        case 0x1aa8a4u: goto label_1aa8a4;
        case 0x1aa8a8u: goto label_1aa8a8;
        case 0x1aa8acu: goto label_1aa8ac;
        case 0x1aa8b0u: goto label_1aa8b0;
        case 0x1aa8b4u: goto label_1aa8b4;
        case 0x1aa8b8u: goto label_1aa8b8;
        case 0x1aa8bcu: goto label_1aa8bc;
        case 0x1aa8c0u: goto label_1aa8c0;
        case 0x1aa8c4u: goto label_1aa8c4;
        case 0x1aa8c8u: goto label_1aa8c8;
        case 0x1aa8ccu: goto label_1aa8cc;
        case 0x1aa8d0u: goto label_1aa8d0;
        case 0x1aa8d4u: goto label_1aa8d4;
        case 0x1aa8d8u: goto label_1aa8d8;
        case 0x1aa8dcu: goto label_1aa8dc;
        case 0x1aa8e0u: goto label_1aa8e0;
        case 0x1aa8e4u: goto label_1aa8e4;
        case 0x1aa8e8u: goto label_1aa8e8;
        case 0x1aa8ecu: goto label_1aa8ec;
        case 0x1aa8f0u: goto label_1aa8f0;
        case 0x1aa8f4u: goto label_1aa8f4;
        case 0x1aa8f8u: goto label_1aa8f8;
        case 0x1aa8fcu: goto label_1aa8fc;
        case 0x1aa900u: goto label_1aa900;
        case 0x1aa904u: goto label_1aa904;
        case 0x1aa908u: goto label_1aa908;
        case 0x1aa90cu: goto label_1aa90c;
        case 0x1aa910u: goto label_1aa910;
        case 0x1aa914u: goto label_1aa914;
        case 0x1aa918u: goto label_1aa918;
        case 0x1aa91cu: goto label_1aa91c;
        case 0x1aa920u: goto label_1aa920;
        case 0x1aa924u: goto label_1aa924;
        case 0x1aa928u: goto label_1aa928;
        case 0x1aa92cu: goto label_1aa92c;
        case 0x1aa930u: goto label_1aa930;
        case 0x1aa934u: goto label_1aa934;
        case 0x1aa938u: goto label_1aa938;
        case 0x1aa93cu: goto label_1aa93c;
        case 0x1aa940u: goto label_1aa940;
        case 0x1aa944u: goto label_1aa944;
        case 0x1aa948u: goto label_1aa948;
        case 0x1aa94cu: goto label_1aa94c;
        case 0x1aa950u: goto label_1aa950;
        case 0x1aa954u: goto label_1aa954;
        case 0x1aa958u: goto label_1aa958;
        case 0x1aa95cu: goto label_1aa95c;
        case 0x1aa960u: goto label_1aa960;
        case 0x1aa964u: goto label_1aa964;
        case 0x1aa968u: goto label_1aa968;
        case 0x1aa96cu: goto label_1aa96c;
        case 0x1aa970u: goto label_1aa970;
        case 0x1aa974u: goto label_1aa974;
        case 0x1aa978u: goto label_1aa978;
        case 0x1aa97cu: goto label_1aa97c;
        case 0x1aa980u: goto label_1aa980;
        case 0x1aa984u: goto label_1aa984;
        case 0x1aa988u: goto label_1aa988;
        case 0x1aa98cu: goto label_1aa98c;
        case 0x1aa990u: goto label_1aa990;
        case 0x1aa994u: goto label_1aa994;
        case 0x1aa998u: goto label_1aa998;
        case 0x1aa99cu: goto label_1aa99c;
        case 0x1aa9a0u: goto label_1aa9a0;
        case 0x1aa9a4u: goto label_1aa9a4;
        case 0x1aa9a8u: goto label_1aa9a8;
        case 0x1aa9acu: goto label_1aa9ac;
        case 0x1aa9b0u: goto label_1aa9b0;
        case 0x1aa9b4u: goto label_1aa9b4;
        case 0x1aa9b8u: goto label_1aa9b8;
        case 0x1aa9bcu: goto label_1aa9bc;
        case 0x1aa9c0u: goto label_1aa9c0;
        case 0x1aa9c4u: goto label_1aa9c4;
        case 0x1aa9c8u: goto label_1aa9c8;
        case 0x1aa9ccu: goto label_1aa9cc;
        case 0x1aa9d0u: goto label_1aa9d0;
        case 0x1aa9d4u: goto label_1aa9d4;
        case 0x1aa9d8u: goto label_1aa9d8;
        case 0x1aa9dcu: goto label_1aa9dc;
        case 0x1aa9e0u: goto label_1aa9e0;
        case 0x1aa9e4u: goto label_1aa9e4;
        case 0x1aa9e8u: goto label_1aa9e8;
        case 0x1aa9ecu: goto label_1aa9ec;
        case 0x1aa9f0u: goto label_1aa9f0;
        case 0x1aa9f4u: goto label_1aa9f4;
        case 0x1aa9f8u: goto label_1aa9f8;
        case 0x1aa9fcu: goto label_1aa9fc;
        case 0x1aaa00u: goto label_1aaa00;
        case 0x1aaa04u: goto label_1aaa04;
        case 0x1aaa08u: goto label_1aaa08;
        case 0x1aaa0cu: goto label_1aaa0c;
        case 0x1aaa10u: goto label_1aaa10;
        case 0x1aaa14u: goto label_1aaa14;
        case 0x1aaa18u: goto label_1aaa18;
        case 0x1aaa1cu: goto label_1aaa1c;
        case 0x1aaa20u: goto label_1aaa20;
        case 0x1aaa24u: goto label_1aaa24;
        case 0x1aaa28u: goto label_1aaa28;
        case 0x1aaa2cu: goto label_1aaa2c;
        case 0x1aaa30u: goto label_1aaa30;
        case 0x1aaa34u: goto label_1aaa34;
        case 0x1aaa38u: goto label_1aaa38;
        case 0x1aaa3cu: goto label_1aaa3c;
        case 0x1aaa40u: goto label_1aaa40;
        case 0x1aaa44u: goto label_1aaa44;
        case 0x1aaa48u: goto label_1aaa48;
        case 0x1aaa4cu: goto label_1aaa4c;
        case 0x1aaa50u: goto label_1aaa50;
        case 0x1aaa54u: goto label_1aaa54;
        case 0x1aaa58u: goto label_1aaa58;
        case 0x1aaa5cu: goto label_1aaa5c;
        case 0x1aaa60u: goto label_1aaa60;
        case 0x1aaa64u: goto label_1aaa64;
        case 0x1aaa68u: goto label_1aaa68;
        case 0x1aaa6cu: goto label_1aaa6c;
        case 0x1aaa70u: goto label_1aaa70;
        case 0x1aaa74u: goto label_1aaa74;
        case 0x1aaa78u: goto label_1aaa78;
        case 0x1aaa7cu: goto label_1aaa7c;
        case 0x1aaa80u: goto label_1aaa80;
        case 0x1aaa84u: goto label_1aaa84;
        case 0x1aaa88u: goto label_1aaa88;
        case 0x1aaa8cu: goto label_1aaa8c;
        case 0x1aaa90u: goto label_1aaa90;
        case 0x1aaa94u: goto label_1aaa94;
        case 0x1aaa98u: goto label_1aaa98;
        case 0x1aaa9cu: goto label_1aaa9c;
        case 0x1aaaa0u: goto label_1aaaa0;
        case 0x1aaaa4u: goto label_1aaaa4;
        case 0x1aaaa8u: goto label_1aaaa8;
        case 0x1aaaacu: goto label_1aaaac;
        case 0x1aaab0u: goto label_1aaab0;
        case 0x1aaab4u: goto label_1aaab4;
        case 0x1aaab8u: goto label_1aaab8;
        case 0x1aaabcu: goto label_1aaabc;
        case 0x1aaac0u: goto label_1aaac0;
        case 0x1aaac4u: goto label_1aaac4;
        case 0x1aaac8u: goto label_1aaac8;
        case 0x1aaaccu: goto label_1aaacc;
        case 0x1aaad0u: goto label_1aaad0;
        case 0x1aaad4u: goto label_1aaad4;
        case 0x1aaad8u: goto label_1aaad8;
        case 0x1aaadcu: goto label_1aaadc;
        case 0x1aaae0u: goto label_1aaae0;
        case 0x1aaae4u: goto label_1aaae4;
        case 0x1aaae8u: goto label_1aaae8;
        case 0x1aaaecu: goto label_1aaaec;
        case 0x1aaaf0u: goto label_1aaaf0;
        case 0x1aaaf4u: goto label_1aaaf4;
        case 0x1aaaf8u: goto label_1aaaf8;
        case 0x1aaafcu: goto label_1aaafc;
        case 0x1aab00u: goto label_1aab00;
        case 0x1aab04u: goto label_1aab04;
        case 0x1aab08u: goto label_1aab08;
        case 0x1aab0cu: goto label_1aab0c;
        case 0x1aab10u: goto label_1aab10;
        case 0x1aab14u: goto label_1aab14;
        case 0x1aab18u: goto label_1aab18;
        case 0x1aab1cu: goto label_1aab1c;
        case 0x1aab20u: goto label_1aab20;
        case 0x1aab24u: goto label_1aab24;
        case 0x1aab28u: goto label_1aab28;
        case 0x1aab2cu: goto label_1aab2c;
        case 0x1aab30u: goto label_1aab30;
        case 0x1aab34u: goto label_1aab34;
        case 0x1aab38u: goto label_1aab38;
        case 0x1aab3cu: goto label_1aab3c;
        case 0x1aab40u: goto label_1aab40;
        case 0x1aab44u: goto label_1aab44;
        case 0x1aab48u: goto label_1aab48;
        case 0x1aab4cu: goto label_1aab4c;
        case 0x1aab50u: goto label_1aab50;
        case 0x1aab54u: goto label_1aab54;
        case 0x1aab58u: goto label_1aab58;
        case 0x1aab5cu: goto label_1aab5c;
        case 0x1aab60u: goto label_1aab60;
        case 0x1aab64u: goto label_1aab64;
        case 0x1aab68u: goto label_1aab68;
        case 0x1aab6cu: goto label_1aab6c;
        case 0x1aab70u: goto label_1aab70;
        case 0x1aab74u: goto label_1aab74;
        case 0x1aab78u: goto label_1aab78;
        case 0x1aab7cu: goto label_1aab7c;
        case 0x1aab80u: goto label_1aab80;
        case 0x1aab84u: goto label_1aab84;
        case 0x1aab88u: goto label_1aab88;
        case 0x1aab8cu: goto label_1aab8c;
        case 0x1aab90u: goto label_1aab90;
        case 0x1aab94u: goto label_1aab94;
        case 0x1aab98u: goto label_1aab98;
        case 0x1aab9cu: goto label_1aab9c;
        case 0x1aaba0u: goto label_1aaba0;
        case 0x1aaba4u: goto label_1aaba4;
        case 0x1aaba8u: goto label_1aaba8;
        case 0x1aabacu: goto label_1aabac;
        case 0x1aabb0u: goto label_1aabb0;
        case 0x1aabb4u: goto label_1aabb4;
        case 0x1aabb8u: goto label_1aabb8;
        case 0x1aabbcu: goto label_1aabbc;
        case 0x1aabc0u: goto label_1aabc0;
        case 0x1aabc4u: goto label_1aabc4;
        case 0x1aabc8u: goto label_1aabc8;
        case 0x1aabccu: goto label_1aabcc;
        case 0x1aabd0u: goto label_1aabd0;
        case 0x1aabd4u: goto label_1aabd4;
        case 0x1aabd8u: goto label_1aabd8;
        case 0x1aabdcu: goto label_1aabdc;
        case 0x1aabe0u: goto label_1aabe0;
        case 0x1aabe4u: goto label_1aabe4;
        case 0x1aabe8u: goto label_1aabe8;
        case 0x1aabecu: goto label_1aabec;
        case 0x1aabf0u: goto label_1aabf0;
        case 0x1aabf4u: goto label_1aabf4;
        case 0x1aabf8u: goto label_1aabf8;
        case 0x1aabfcu: goto label_1aabfc;
        case 0x1aac00u: goto label_1aac00;
        case 0x1aac04u: goto label_1aac04;
        case 0x1aac08u: goto label_1aac08;
        case 0x1aac0cu: goto label_1aac0c;
        case 0x1aac10u: goto label_1aac10;
        case 0x1aac14u: goto label_1aac14;
        case 0x1aac18u: goto label_1aac18;
        case 0x1aac1cu: goto label_1aac1c;
        case 0x1aac20u: goto label_1aac20;
        case 0x1aac24u: goto label_1aac24;
        case 0x1aac28u: goto label_1aac28;
        case 0x1aac2cu: goto label_1aac2c;
        case 0x1aac30u: goto label_1aac30;
        case 0x1aac34u: goto label_1aac34;
        case 0x1aac38u: goto label_1aac38;
        case 0x1aac3cu: goto label_1aac3c;
        case 0x1aac40u: goto label_1aac40;
        case 0x1aac44u: goto label_1aac44;
        case 0x1aac48u: goto label_1aac48;
        case 0x1aac4cu: goto label_1aac4c;
        case 0x1aac50u: goto label_1aac50;
        case 0x1aac54u: goto label_1aac54;
        case 0x1aac58u: goto label_1aac58;
        case 0x1aac5cu: goto label_1aac5c;
        case 0x1aac60u: goto label_1aac60;
        case 0x1aac64u: goto label_1aac64;
        case 0x1aac68u: goto label_1aac68;
        case 0x1aac6cu: goto label_1aac6c;
        case 0x1aac70u: goto label_1aac70;
        case 0x1aac74u: goto label_1aac74;
        case 0x1aac78u: goto label_1aac78;
        case 0x1aac7cu: goto label_1aac7c;
        case 0x1aac80u: goto label_1aac80;
        case 0x1aac84u: goto label_1aac84;
        case 0x1aac88u: goto label_1aac88;
        case 0x1aac8cu: goto label_1aac8c;
        case 0x1aac90u: goto label_1aac90;
        case 0x1aac94u: goto label_1aac94;
        case 0x1aac98u: goto label_1aac98;
        case 0x1aac9cu: goto label_1aac9c;
        case 0x1aaca0u: goto label_1aaca0;
        case 0x1aaca4u: goto label_1aaca4;
        case 0x1aaca8u: goto label_1aaca8;
        case 0x1aacacu: goto label_1aacac;
        case 0x1aacb0u: goto label_1aacb0;
        case 0x1aacb4u: goto label_1aacb4;
        case 0x1aacb8u: goto label_1aacb8;
        case 0x1aacbcu: goto label_1aacbc;
        case 0x1aacc0u: goto label_1aacc0;
        case 0x1aacc4u: goto label_1aacc4;
        case 0x1aacc8u: goto label_1aacc8;
        case 0x1aacccu: goto label_1aaccc;
        case 0x1aacd0u: goto label_1aacd0;
        case 0x1aacd4u: goto label_1aacd4;
        case 0x1aacd8u: goto label_1aacd8;
        case 0x1aacdcu: goto label_1aacdc;
        case 0x1aace0u: goto label_1aace0;
        case 0x1aace4u: goto label_1aace4;
        case 0x1aace8u: goto label_1aace8;
        case 0x1aacecu: goto label_1aacec;
        case 0x1aacf0u: goto label_1aacf0;
        case 0x1aacf4u: goto label_1aacf4;
        case 0x1aacf8u: goto label_1aacf8;
        case 0x1aacfcu: goto label_1aacfc;
        case 0x1aad00u: goto label_1aad00;
        case 0x1aad04u: goto label_1aad04;
        case 0x1aad08u: goto label_1aad08;
        case 0x1aad0cu: goto label_1aad0c;
        case 0x1aad10u: goto label_1aad10;
        case 0x1aad14u: goto label_1aad14;
        case 0x1aad18u: goto label_1aad18;
        case 0x1aad1cu: goto label_1aad1c;
        case 0x1aad20u: goto label_1aad20;
        case 0x1aad24u: goto label_1aad24;
        case 0x1aad28u: goto label_1aad28;
        case 0x1aad2cu: goto label_1aad2c;
        case 0x1aad30u: goto label_1aad30;
        case 0x1aad34u: goto label_1aad34;
        case 0x1aad38u: goto label_1aad38;
        case 0x1aad3cu: goto label_1aad3c;
        case 0x1aad40u: goto label_1aad40;
        case 0x1aad44u: goto label_1aad44;
        case 0x1aad48u: goto label_1aad48;
        case 0x1aad4cu: goto label_1aad4c;
        case 0x1aad50u: goto label_1aad50;
        case 0x1aad54u: goto label_1aad54;
        case 0x1aad58u: goto label_1aad58;
        case 0x1aad5cu: goto label_1aad5c;
        case 0x1aad60u: goto label_1aad60;
        case 0x1aad64u: goto label_1aad64;
        case 0x1aad68u: goto label_1aad68;
        case 0x1aad6cu: goto label_1aad6c;
        case 0x1aad70u: goto label_1aad70;
        case 0x1aad74u: goto label_1aad74;
        case 0x1aad78u: goto label_1aad78;
        case 0x1aad7cu: goto label_1aad7c;
        case 0x1aad80u: goto label_1aad80;
        case 0x1aad84u: goto label_1aad84;
        case 0x1aad88u: goto label_1aad88;
        case 0x1aad8cu: goto label_1aad8c;
        case 0x1aad90u: goto label_1aad90;
        case 0x1aad94u: goto label_1aad94;
        case 0x1aad98u: goto label_1aad98;
        case 0x1aad9cu: goto label_1aad9c;
        case 0x1aada0u: goto label_1aada0;
        case 0x1aada4u: goto label_1aada4;
        case 0x1aada8u: goto label_1aada8;
        case 0x1aadacu: goto label_1aadac;
        case 0x1aadb0u: goto label_1aadb0;
        case 0x1aadb4u: goto label_1aadb4;
        case 0x1aadb8u: goto label_1aadb8;
        case 0x1aadbcu: goto label_1aadbc;
        case 0x1aadc0u: goto label_1aadc0;
        case 0x1aadc4u: goto label_1aadc4;
        case 0x1aadc8u: goto label_1aadc8;
        case 0x1aadccu: goto label_1aadcc;
        case 0x1aadd0u: goto label_1aadd0;
        case 0x1aadd4u: goto label_1aadd4;
        case 0x1aadd8u: goto label_1aadd8;
        case 0x1aaddcu: goto label_1aaddc;
        case 0x1aade0u: goto label_1aade0;
        case 0x1aade4u: goto label_1aade4;
        case 0x1aade8u: goto label_1aade8;
        case 0x1aadecu: goto label_1aadec;
        case 0x1aadf0u: goto label_1aadf0;
        case 0x1aadf4u: goto label_1aadf4;
        case 0x1aadf8u: goto label_1aadf8;
        case 0x1aadfcu: goto label_1aadfc;
        case 0x1aae00u: goto label_1aae00;
        case 0x1aae04u: goto label_1aae04;
        case 0x1aae08u: goto label_1aae08;
        case 0x1aae0cu: goto label_1aae0c;
        case 0x1aae10u: goto label_1aae10;
        case 0x1aae14u: goto label_1aae14;
        case 0x1aae18u: goto label_1aae18;
        case 0x1aae1cu: goto label_1aae1c;
        case 0x1aae20u: goto label_1aae20;
        case 0x1aae24u: goto label_1aae24;
        case 0x1aae28u: goto label_1aae28;
        case 0x1aae2cu: goto label_1aae2c;
        case 0x1aae30u: goto label_1aae30;
        case 0x1aae34u: goto label_1aae34;
        case 0x1aae38u: goto label_1aae38;
        case 0x1aae3cu: goto label_1aae3c;
        case 0x1aae40u: goto label_1aae40;
        case 0x1aae44u: goto label_1aae44;
        case 0x1aae48u: goto label_1aae48;
        case 0x1aae4cu: goto label_1aae4c;
        case 0x1aae50u: goto label_1aae50;
        case 0x1aae54u: goto label_1aae54;
        case 0x1aae58u: goto label_1aae58;
        case 0x1aae5cu: goto label_1aae5c;
        case 0x1aae60u: goto label_1aae60;
        case 0x1aae64u: goto label_1aae64;
        case 0x1aae68u: goto label_1aae68;
        case 0x1aae6cu: goto label_1aae6c;
        case 0x1aae70u: goto label_1aae70;
        case 0x1aae74u: goto label_1aae74;
        case 0x1aae78u: goto label_1aae78;
        case 0x1aae7cu: goto label_1aae7c;
        case 0x1aae80u: goto label_1aae80;
        case 0x1aae84u: goto label_1aae84;
        case 0x1aae88u: goto label_1aae88;
        case 0x1aae8cu: goto label_1aae8c;
        case 0x1aae90u: goto label_1aae90;
        case 0x1aae94u: goto label_1aae94;
        case 0x1aae98u: goto label_1aae98;
        case 0x1aae9cu: goto label_1aae9c;
        case 0x1aaea0u: goto label_1aaea0;
        case 0x1aaea4u: goto label_1aaea4;
        case 0x1aaea8u: goto label_1aaea8;
        case 0x1aaeacu: goto label_1aaeac;
        case 0x1aaeb0u: goto label_1aaeb0;
        case 0x1aaeb4u: goto label_1aaeb4;
        case 0x1aaeb8u: goto label_1aaeb8;
        case 0x1aaebcu: goto label_1aaebc;
        case 0x1aaec0u: goto label_1aaec0;
        case 0x1aaec4u: goto label_1aaec4;
        case 0x1aaec8u: goto label_1aaec8;
        case 0x1aaeccu: goto label_1aaecc;
        case 0x1aaed0u: goto label_1aaed0;
        case 0x1aaed4u: goto label_1aaed4;
        case 0x1aaed8u: goto label_1aaed8;
        case 0x1aaedcu: goto label_1aaedc;
        case 0x1aaee0u: goto label_1aaee0;
        case 0x1aaee4u: goto label_1aaee4;
        case 0x1aaee8u: goto label_1aaee8;
        case 0x1aaeecu: goto label_1aaeec;
        case 0x1aaef0u: goto label_1aaef0;
        case 0x1aaef4u: goto label_1aaef4;
        case 0x1aaef8u: goto label_1aaef8;
        case 0x1aaefcu: goto label_1aaefc;
        case 0x1aaf00u: goto label_1aaf00;
        case 0x1aaf04u: goto label_1aaf04;
        case 0x1aaf08u: goto label_1aaf08;
        case 0x1aaf0cu: goto label_1aaf0c;
        case 0x1aaf10u: goto label_1aaf10;
        case 0x1aaf14u: goto label_1aaf14;
        case 0x1aaf18u: goto label_1aaf18;
        case 0x1aaf1cu: goto label_1aaf1c;
        case 0x1aaf20u: goto label_1aaf20;
        case 0x1aaf24u: goto label_1aaf24;
        case 0x1aaf28u: goto label_1aaf28;
        case 0x1aaf2cu: goto label_1aaf2c;
        case 0x1aaf30u: goto label_1aaf30;
        case 0x1aaf34u: goto label_1aaf34;
        case 0x1aaf38u: goto label_1aaf38;
        case 0x1aaf3cu: goto label_1aaf3c;
        case 0x1aaf40u: goto label_1aaf40;
        case 0x1aaf44u: goto label_1aaf44;
        case 0x1aaf48u: goto label_1aaf48;
        case 0x1aaf4cu: goto label_1aaf4c;
        case 0x1aaf50u: goto label_1aaf50;
        case 0x1aaf54u: goto label_1aaf54;
        case 0x1aaf58u: goto label_1aaf58;
        case 0x1aaf5cu: goto label_1aaf5c;
        case 0x1aaf60u: goto label_1aaf60;
        case 0x1aaf64u: goto label_1aaf64;
        case 0x1aaf68u: goto label_1aaf68;
        case 0x1aaf6cu: goto label_1aaf6c;
        case 0x1aaf70u: goto label_1aaf70;
        case 0x1aaf74u: goto label_1aaf74;
        case 0x1aaf78u: goto label_1aaf78;
        case 0x1aaf7cu: goto label_1aaf7c;
        case 0x1aaf80u: goto label_1aaf80;
        case 0x1aaf84u: goto label_1aaf84;
        case 0x1aaf88u: goto label_1aaf88;
        case 0x1aaf8cu: goto label_1aaf8c;
        case 0x1aaf90u: goto label_1aaf90;
        case 0x1aaf94u: goto label_1aaf94;
        case 0x1aaf98u: goto label_1aaf98;
        case 0x1aaf9cu: goto label_1aaf9c;
        case 0x1aafa0u: goto label_1aafa0;
        case 0x1aafa4u: goto label_1aafa4;
        case 0x1aafa8u: goto label_1aafa8;
        case 0x1aafacu: goto label_1aafac;
        case 0x1aafb0u: goto label_1aafb0;
        case 0x1aafb4u: goto label_1aafb4;
        case 0x1aafb8u: goto label_1aafb8;
        case 0x1aafbcu: goto label_1aafbc;
        case 0x1aafc0u: goto label_1aafc0;
        case 0x1aafc4u: goto label_1aafc4;
        case 0x1aafc8u: goto label_1aafc8;
        case 0x1aafccu: goto label_1aafcc;
        case 0x1aafd0u: goto label_1aafd0;
        case 0x1aafd4u: goto label_1aafd4;
        case 0x1aafd8u: goto label_1aafd8;
        case 0x1aafdcu: goto label_1aafdc;
        case 0x1aafe0u: goto label_1aafe0;
        case 0x1aafe4u: goto label_1aafe4;
        case 0x1aafe8u: goto label_1aafe8;
        case 0x1aafecu: goto label_1aafec;
        case 0x1aaff0u: goto label_1aaff0;
        case 0x1aaff4u: goto label_1aaff4;
        case 0x1aaff8u: goto label_1aaff8;
        case 0x1aaffcu: goto label_1aaffc;
        case 0x1ab000u: goto label_1ab000;
        case 0x1ab004u: goto label_1ab004;
        case 0x1ab008u: goto label_1ab008;
        case 0x1ab00cu: goto label_1ab00c;
        case 0x1ab010u: goto label_1ab010;
        case 0x1ab014u: goto label_1ab014;
        case 0x1ab018u: goto label_1ab018;
        case 0x1ab01cu: goto label_1ab01c;
        case 0x1ab020u: goto label_1ab020;
        case 0x1ab024u: goto label_1ab024;
        case 0x1ab028u: goto label_1ab028;
        case 0x1ab02cu: goto label_1ab02c;
        case 0x1ab030u: goto label_1ab030;
        case 0x1ab034u: goto label_1ab034;
        case 0x1ab038u: goto label_1ab038;
        case 0x1ab03cu: goto label_1ab03c;
        case 0x1ab040u: goto label_1ab040;
        case 0x1ab044u: goto label_1ab044;
        case 0x1ab048u: goto label_1ab048;
        case 0x1ab04cu: goto label_1ab04c;
        case 0x1ab050u: goto label_1ab050;
        case 0x1ab054u: goto label_1ab054;
        case 0x1ab058u: goto label_1ab058;
        case 0x1ab05cu: goto label_1ab05c;
        case 0x1ab060u: goto label_1ab060;
        case 0x1ab064u: goto label_1ab064;
        case 0x1ab068u: goto label_1ab068;
        case 0x1ab06cu: goto label_1ab06c;
        case 0x1ab070u: goto label_1ab070;
        case 0x1ab074u: goto label_1ab074;
        case 0x1ab078u: goto label_1ab078;
        case 0x1ab07cu: goto label_1ab07c;
        case 0x1ab080u: goto label_1ab080;
        case 0x1ab084u: goto label_1ab084;
        case 0x1ab088u: goto label_1ab088;
        case 0x1ab08cu: goto label_1ab08c;
        case 0x1ab090u: goto label_1ab090;
        case 0x1ab094u: goto label_1ab094;
        case 0x1ab098u: goto label_1ab098;
        case 0x1ab09cu: goto label_1ab09c;
        case 0x1ab0a0u: goto label_1ab0a0;
        case 0x1ab0a4u: goto label_1ab0a4;
        case 0x1ab0a8u: goto label_1ab0a8;
        case 0x1ab0acu: goto label_1ab0ac;
        case 0x1ab0b0u: goto label_1ab0b0;
        case 0x1ab0b4u: goto label_1ab0b4;
        case 0x1ab0b8u: goto label_1ab0b8;
        case 0x1ab0bcu: goto label_1ab0bc;
        case 0x1ab0c0u: goto label_1ab0c0;
        case 0x1ab0c4u: goto label_1ab0c4;
        case 0x1ab0c8u: goto label_1ab0c8;
        case 0x1ab0ccu: goto label_1ab0cc;
        case 0x1ab0d0u: goto label_1ab0d0;
        case 0x1ab0d4u: goto label_1ab0d4;
        case 0x1ab0d8u: goto label_1ab0d8;
        case 0x1ab0dcu: goto label_1ab0dc;
        case 0x1ab0e0u: goto label_1ab0e0;
        case 0x1ab0e4u: goto label_1ab0e4;
        case 0x1ab0e8u: goto label_1ab0e8;
        case 0x1ab0ecu: goto label_1ab0ec;
        case 0x1ab0f0u: goto label_1ab0f0;
        case 0x1ab0f4u: goto label_1ab0f4;
        case 0x1ab0f8u: goto label_1ab0f8;
        case 0x1ab0fcu: goto label_1ab0fc;
        case 0x1ab100u: goto label_1ab100;
        case 0x1ab104u: goto label_1ab104;
        case 0x1ab108u: goto label_1ab108;
        case 0x1ab10cu: goto label_1ab10c;
        case 0x1ab110u: goto label_1ab110;
        case 0x1ab114u: goto label_1ab114;
        case 0x1ab118u: goto label_1ab118;
        case 0x1ab11cu: goto label_1ab11c;
        case 0x1ab120u: goto label_1ab120;
        case 0x1ab124u: goto label_1ab124;
        case 0x1ab128u: goto label_1ab128;
        case 0x1ab12cu: goto label_1ab12c;
        case 0x1ab130u: goto label_1ab130;
        case 0x1ab134u: goto label_1ab134;
        case 0x1ab138u: goto label_1ab138;
        case 0x1ab13cu: goto label_1ab13c;
        case 0x1ab140u: goto label_1ab140;
        case 0x1ab144u: goto label_1ab144;
        case 0x1ab148u: goto label_1ab148;
        case 0x1ab14cu: goto label_1ab14c;
        case 0x1ab150u: goto label_1ab150;
        case 0x1ab154u: goto label_1ab154;
        case 0x1ab158u: goto label_1ab158;
        case 0x1ab15cu: goto label_1ab15c;
        case 0x1ab160u: goto label_1ab160;
        case 0x1ab164u: goto label_1ab164;
        case 0x1ab168u: goto label_1ab168;
        case 0x1ab16cu: goto label_1ab16c;
        case 0x1ab170u: goto label_1ab170;
        case 0x1ab174u: goto label_1ab174;
        case 0x1ab178u: goto label_1ab178;
        case 0x1ab17cu: goto label_1ab17c;
        case 0x1ab180u: goto label_1ab180;
        case 0x1ab184u: goto label_1ab184;
        case 0x1ab188u: goto label_1ab188;
        case 0x1ab18cu: goto label_1ab18c;
        case 0x1ab190u: goto label_1ab190;
        case 0x1ab194u: goto label_1ab194;
        case 0x1ab198u: goto label_1ab198;
        case 0x1ab19cu: goto label_1ab19c;
        case 0x1ab1a0u: goto label_1ab1a0;
        case 0x1ab1a4u: goto label_1ab1a4;
        case 0x1ab1a8u: goto label_1ab1a8;
        case 0x1ab1acu: goto label_1ab1ac;
        case 0x1ab1b0u: goto label_1ab1b0;
        case 0x1ab1b4u: goto label_1ab1b4;
        case 0x1ab1b8u: goto label_1ab1b8;
        case 0x1ab1bcu: goto label_1ab1bc;
        case 0x1ab1c0u: goto label_1ab1c0;
        case 0x1ab1c4u: goto label_1ab1c4;
        case 0x1ab1c8u: goto label_1ab1c8;
        case 0x1ab1ccu: goto label_1ab1cc;
        case 0x1ab1d0u: goto label_1ab1d0;
        case 0x1ab1d4u: goto label_1ab1d4;
        case 0x1ab1d8u: goto label_1ab1d8;
        case 0x1ab1dcu: goto label_1ab1dc;
        case 0x1ab1e0u: goto label_1ab1e0;
        case 0x1ab1e4u: goto label_1ab1e4;
        case 0x1ab1e8u: goto label_1ab1e8;
        case 0x1ab1ecu: goto label_1ab1ec;
        case 0x1ab1f0u: goto label_1ab1f0;
        case 0x1ab1f4u: goto label_1ab1f4;
        case 0x1ab1f8u: goto label_1ab1f8;
        case 0x1ab1fcu: goto label_1ab1fc;
        case 0x1ab200u: goto label_1ab200;
        case 0x1ab204u: goto label_1ab204;
        case 0x1ab208u: goto label_1ab208;
        case 0x1ab20cu: goto label_1ab20c;
        case 0x1ab210u: goto label_1ab210;
        case 0x1ab214u: goto label_1ab214;
        case 0x1ab218u: goto label_1ab218;
        case 0x1ab21cu: goto label_1ab21c;
        case 0x1ab220u: goto label_1ab220;
        case 0x1ab224u: goto label_1ab224;
        case 0x1ab228u: goto label_1ab228;
        case 0x1ab22cu: goto label_1ab22c;
        case 0x1ab230u: goto label_1ab230;
        case 0x1ab234u: goto label_1ab234;
        case 0x1ab238u: goto label_1ab238;
        case 0x1ab23cu: goto label_1ab23c;
        case 0x1ab240u: goto label_1ab240;
        case 0x1ab244u: goto label_1ab244;
        case 0x1ab248u: goto label_1ab248;
        case 0x1ab24cu: goto label_1ab24c;
        case 0x1ab250u: goto label_1ab250;
        case 0x1ab254u: goto label_1ab254;
        case 0x1ab258u: goto label_1ab258;
        case 0x1ab25cu: goto label_1ab25c;
        case 0x1ab260u: goto label_1ab260;
        case 0x1ab264u: goto label_1ab264;
        case 0x1ab268u: goto label_1ab268;
        case 0x1ab26cu: goto label_1ab26c;
        case 0x1ab270u: goto label_1ab270;
        case 0x1ab274u: goto label_1ab274;
        case 0x1ab278u: goto label_1ab278;
        case 0x1ab27cu: goto label_1ab27c;
        case 0x1ab280u: goto label_1ab280;
        case 0x1ab284u: goto label_1ab284;
        case 0x1ab288u: goto label_1ab288;
        case 0x1ab28cu: goto label_1ab28c;
        case 0x1ab290u: goto label_1ab290;
        case 0x1ab294u: goto label_1ab294;
        case 0x1ab298u: goto label_1ab298;
        case 0x1ab29cu: goto label_1ab29c;
        case 0x1ab2a0u: goto label_1ab2a0;
        case 0x1ab2a4u: goto label_1ab2a4;
        case 0x1ab2a8u: goto label_1ab2a8;
        case 0x1ab2acu: goto label_1ab2ac;
        case 0x1ab2b0u: goto label_1ab2b0;
        case 0x1ab2b4u: goto label_1ab2b4;
        case 0x1ab2b8u: goto label_1ab2b8;
        case 0x1ab2bcu: goto label_1ab2bc;
        case 0x1ab2c0u: goto label_1ab2c0;
        case 0x1ab2c4u: goto label_1ab2c4;
        case 0x1ab2c8u: goto label_1ab2c8;
        case 0x1ab2ccu: goto label_1ab2cc;
        case 0x1ab2d0u: goto label_1ab2d0;
        case 0x1ab2d4u: goto label_1ab2d4;
        case 0x1ab2d8u: goto label_1ab2d8;
        case 0x1ab2dcu: goto label_1ab2dc;
        case 0x1ab2e0u: goto label_1ab2e0;
        case 0x1ab2e4u: goto label_1ab2e4;
        case 0x1ab2e8u: goto label_1ab2e8;
        case 0x1ab2ecu: goto label_1ab2ec;
        case 0x1ab2f0u: goto label_1ab2f0;
        case 0x1ab2f4u: goto label_1ab2f4;
        case 0x1ab2f8u: goto label_1ab2f8;
        case 0x1ab2fcu: goto label_1ab2fc;
        case 0x1ab300u: goto label_1ab300;
        case 0x1ab304u: goto label_1ab304;
        case 0x1ab308u: goto label_1ab308;
        case 0x1ab30cu: goto label_1ab30c;
        case 0x1ab310u: goto label_1ab310;
        case 0x1ab314u: goto label_1ab314;
        case 0x1ab318u: goto label_1ab318;
        case 0x1ab31cu: goto label_1ab31c;
        case 0x1ab320u: goto label_1ab320;
        case 0x1ab324u: goto label_1ab324;
        case 0x1ab328u: goto label_1ab328;
        case 0x1ab32cu: goto label_1ab32c;
        case 0x1ab330u: goto label_1ab330;
        case 0x1ab334u: goto label_1ab334;
        case 0x1ab338u: goto label_1ab338;
        case 0x1ab33cu: goto label_1ab33c;
        case 0x1ab340u: goto label_1ab340;
        case 0x1ab344u: goto label_1ab344;
        case 0x1ab348u: goto label_1ab348;
        case 0x1ab34cu: goto label_1ab34c;
        case 0x1ab350u: goto label_1ab350;
        case 0x1ab354u: goto label_1ab354;
        case 0x1ab358u: goto label_1ab358;
        case 0x1ab35cu: goto label_1ab35c;
        case 0x1ab360u: goto label_1ab360;
        case 0x1ab364u: goto label_1ab364;
        case 0x1ab368u: goto label_1ab368;
        case 0x1ab36cu: goto label_1ab36c;
        case 0x1ab370u: goto label_1ab370;
        case 0x1ab374u: goto label_1ab374;
        case 0x1ab378u: goto label_1ab378;
        case 0x1ab37cu: goto label_1ab37c;
        case 0x1ab380u: goto label_1ab380;
        case 0x1ab384u: goto label_1ab384;
        case 0x1ab388u: goto label_1ab388;
        case 0x1ab38cu: goto label_1ab38c;
        case 0x1ab390u: goto label_1ab390;
        case 0x1ab394u: goto label_1ab394;
        case 0x1ab398u: goto label_1ab398;
        case 0x1ab39cu: goto label_1ab39c;
        case 0x1ab3a0u: goto label_1ab3a0;
        case 0x1ab3a4u: goto label_1ab3a4;
        case 0x1ab3a8u: goto label_1ab3a8;
        case 0x1ab3acu: goto label_1ab3ac;
        case 0x1ab3b0u: goto label_1ab3b0;
        case 0x1ab3b4u: goto label_1ab3b4;
        case 0x1ab3b8u: goto label_1ab3b8;
        case 0x1ab3bcu: goto label_1ab3bc;
        case 0x1ab3c0u: goto label_1ab3c0;
        case 0x1ab3c4u: goto label_1ab3c4;
        case 0x1ab3c8u: goto label_1ab3c8;
        case 0x1ab3ccu: goto label_1ab3cc;
        case 0x1ab3d0u: goto label_1ab3d0;
        case 0x1ab3d4u: goto label_1ab3d4;
        case 0x1ab3d8u: goto label_1ab3d8;
        case 0x1ab3dcu: goto label_1ab3dc;
        case 0x1ab3e0u: goto label_1ab3e0;
        case 0x1ab3e4u: goto label_1ab3e4;
        case 0x1ab3e8u: goto label_1ab3e8;
        case 0x1ab3ecu: goto label_1ab3ec;
        case 0x1ab3f0u: goto label_1ab3f0;
        case 0x1ab3f4u: goto label_1ab3f4;
        case 0x1ab3f8u: goto label_1ab3f8;
        case 0x1ab3fcu: goto label_1ab3fc;
        case 0x1ab400u: goto label_1ab400;
        case 0x1ab404u: goto label_1ab404;
        case 0x1ab408u: goto label_1ab408;
        case 0x1ab40cu: goto label_1ab40c;
        case 0x1ab410u: goto label_1ab410;
        case 0x1ab414u: goto label_1ab414;
        case 0x1ab418u: goto label_1ab418;
        case 0x1ab41cu: goto label_1ab41c;
        case 0x1ab420u: goto label_1ab420;
        case 0x1ab424u: goto label_1ab424;
        case 0x1ab428u: goto label_1ab428;
        case 0x1ab42cu: goto label_1ab42c;
        case 0x1ab430u: goto label_1ab430;
        case 0x1ab434u: goto label_1ab434;
        case 0x1ab438u: goto label_1ab438;
        case 0x1ab43cu: goto label_1ab43c;
        case 0x1ab440u: goto label_1ab440;
        case 0x1ab444u: goto label_1ab444;
        case 0x1ab448u: goto label_1ab448;
        case 0x1ab44cu: goto label_1ab44c;
        case 0x1ab450u: goto label_1ab450;
        case 0x1ab454u: goto label_1ab454;
        case 0x1ab458u: goto label_1ab458;
        case 0x1ab45cu: goto label_1ab45c;
        case 0x1ab460u: goto label_1ab460;
        case 0x1ab464u: goto label_1ab464;
        case 0x1ab468u: goto label_1ab468;
        case 0x1ab46cu: goto label_1ab46c;
        case 0x1ab470u: goto label_1ab470;
        case 0x1ab474u: goto label_1ab474;
        case 0x1ab478u: goto label_1ab478;
        case 0x1ab47cu: goto label_1ab47c;
        case 0x1ab480u: goto label_1ab480;
        case 0x1ab484u: goto label_1ab484;
        case 0x1ab488u: goto label_1ab488;
        case 0x1ab48cu: goto label_1ab48c;
        case 0x1ab490u: goto label_1ab490;
        case 0x1ab494u: goto label_1ab494;
        case 0x1ab498u: goto label_1ab498;
        case 0x1ab49cu: goto label_1ab49c;
        case 0x1ab4a0u: goto label_1ab4a0;
        case 0x1ab4a4u: goto label_1ab4a4;
        case 0x1ab4a8u: goto label_1ab4a8;
        case 0x1ab4acu: goto label_1ab4ac;
        case 0x1ab4b0u: goto label_1ab4b0;
        case 0x1ab4b4u: goto label_1ab4b4;
        case 0x1ab4b8u: goto label_1ab4b8;
        case 0x1ab4bcu: goto label_1ab4bc;
        case 0x1ab4c0u: goto label_1ab4c0;
        case 0x1ab4c4u: goto label_1ab4c4;
        case 0x1ab4c8u: goto label_1ab4c8;
        case 0x1ab4ccu: goto label_1ab4cc;
        case 0x1ab4d0u: goto label_1ab4d0;
        case 0x1ab4d4u: goto label_1ab4d4;
        case 0x1ab4d8u: goto label_1ab4d8;
        case 0x1ab4dcu: goto label_1ab4dc;
        case 0x1ab4e0u: goto label_1ab4e0;
        case 0x1ab4e4u: goto label_1ab4e4;
        case 0x1ab4e8u: goto label_1ab4e8;
        case 0x1ab4ecu: goto label_1ab4ec;
        case 0x1ab4f0u: goto label_1ab4f0;
        case 0x1ab4f4u: goto label_1ab4f4;
        case 0x1ab4f8u: goto label_1ab4f8;
        case 0x1ab4fcu: goto label_1ab4fc;
        case 0x1ab500u: goto label_1ab500;
        case 0x1ab504u: goto label_1ab504;
        case 0x1ab508u: goto label_1ab508;
        case 0x1ab50cu: goto label_1ab50c;
        case 0x1ab510u: goto label_1ab510;
        case 0x1ab514u: goto label_1ab514;
        case 0x1ab518u: goto label_1ab518;
        case 0x1ab51cu: goto label_1ab51c;
        case 0x1ab520u: goto label_1ab520;
        case 0x1ab524u: goto label_1ab524;
        case 0x1ab528u: goto label_1ab528;
        case 0x1ab52cu: goto label_1ab52c;
        case 0x1ab530u: goto label_1ab530;
        case 0x1ab534u: goto label_1ab534;
        case 0x1ab538u: goto label_1ab538;
        case 0x1ab53cu: goto label_1ab53c;
        case 0x1ab540u: goto label_1ab540;
        case 0x1ab544u: goto label_1ab544;
        case 0x1ab548u: goto label_1ab548;
        case 0x1ab54cu: goto label_1ab54c;
        case 0x1ab550u: goto label_1ab550;
        case 0x1ab554u: goto label_1ab554;
        case 0x1ab558u: goto label_1ab558;
        case 0x1ab55cu: goto label_1ab55c;
        case 0x1ab560u: goto label_1ab560;
        case 0x1ab564u: goto label_1ab564;
        case 0x1ab568u: goto label_1ab568;
        case 0x1ab56cu: goto label_1ab56c;
        case 0x1ab570u: goto label_1ab570;
        case 0x1ab574u: goto label_1ab574;
        case 0x1ab578u: goto label_1ab578;
        case 0x1ab57cu: goto label_1ab57c;
        case 0x1ab580u: goto label_1ab580;
        case 0x1ab584u: goto label_1ab584;
        case 0x1ab588u: goto label_1ab588;
        case 0x1ab58cu: goto label_1ab58c;
        case 0x1ab590u: goto label_1ab590;
        case 0x1ab594u: goto label_1ab594;
        case 0x1ab598u: goto label_1ab598;
        case 0x1ab59cu: goto label_1ab59c;
        case 0x1ab5a0u: goto label_1ab5a0;
        case 0x1ab5a4u: goto label_1ab5a4;
        case 0x1ab5a8u: goto label_1ab5a8;
        case 0x1ab5acu: goto label_1ab5ac;
        case 0x1ab5b0u: goto label_1ab5b0;
        case 0x1ab5b4u: goto label_1ab5b4;
        case 0x1ab5b8u: goto label_1ab5b8;
        case 0x1ab5bcu: goto label_1ab5bc;
        case 0x1ab5c0u: goto label_1ab5c0;
        case 0x1ab5c4u: goto label_1ab5c4;
        case 0x1ab5c8u: goto label_1ab5c8;
        case 0x1ab5ccu: goto label_1ab5cc;
        case 0x1ab5d0u: goto label_1ab5d0;
        case 0x1ab5d4u: goto label_1ab5d4;
        case 0x1ab5d8u: goto label_1ab5d8;
        case 0x1ab5dcu: goto label_1ab5dc;
        case 0x1ab5e0u: goto label_1ab5e0;
        case 0x1ab5e4u: goto label_1ab5e4;
        case 0x1ab5e8u: goto label_1ab5e8;
        case 0x1ab5ecu: goto label_1ab5ec;
        case 0x1ab5f0u: goto label_1ab5f0;
        case 0x1ab5f4u: goto label_1ab5f4;
        case 0x1ab5f8u: goto label_1ab5f8;
        case 0x1ab5fcu: goto label_1ab5fc;
        case 0x1ab600u: goto label_1ab600;
        case 0x1ab604u: goto label_1ab604;
        case 0x1ab608u: goto label_1ab608;
        case 0x1ab60cu: goto label_1ab60c;
        case 0x1ab610u: goto label_1ab610;
        case 0x1ab614u: goto label_1ab614;
        case 0x1ab618u: goto label_1ab618;
        case 0x1ab61cu: goto label_1ab61c;
        case 0x1ab620u: goto label_1ab620;
        case 0x1ab624u: goto label_1ab624;
        case 0x1ab628u: goto label_1ab628;
        case 0x1ab62cu: goto label_1ab62c;
        case 0x1ab630u: goto label_1ab630;
        case 0x1ab634u: goto label_1ab634;
        case 0x1ab638u: goto label_1ab638;
        case 0x1ab63cu: goto label_1ab63c;
        case 0x1ab640u: goto label_1ab640;
        case 0x1ab644u: goto label_1ab644;
        case 0x1ab648u: goto label_1ab648;
        case 0x1ab64cu: goto label_1ab64c;
        case 0x1ab650u: goto label_1ab650;
        case 0x1ab654u: goto label_1ab654;
        case 0x1ab658u: goto label_1ab658;
        case 0x1ab65cu: goto label_1ab65c;
        case 0x1ab660u: goto label_1ab660;
        case 0x1ab664u: goto label_1ab664;
        case 0x1ab668u: goto label_1ab668;
        case 0x1ab66cu: goto label_1ab66c;
        case 0x1ab670u: goto label_1ab670;
        case 0x1ab674u: goto label_1ab674;
        case 0x1ab678u: goto label_1ab678;
        case 0x1ab67cu: goto label_1ab67c;
        case 0x1ab680u: goto label_1ab680;
        case 0x1ab684u: goto label_1ab684;
        case 0x1ab688u: goto label_1ab688;
        case 0x1ab68cu: goto label_1ab68c;
        case 0x1ab690u: goto label_1ab690;
        case 0x1ab694u: goto label_1ab694;
        case 0x1ab698u: goto label_1ab698;
        case 0x1ab69cu: goto label_1ab69c;
        case 0x1ab6a0u: goto label_1ab6a0;
        case 0x1ab6a4u: goto label_1ab6a4;
        case 0x1ab6a8u: goto label_1ab6a8;
        case 0x1ab6acu: goto label_1ab6ac;
        case 0x1ab6b0u: goto label_1ab6b0;
        case 0x1ab6b4u: goto label_1ab6b4;
        case 0x1ab6b8u: goto label_1ab6b8;
        case 0x1ab6bcu: goto label_1ab6bc;
        case 0x1ab6c0u: goto label_1ab6c0;
        case 0x1ab6c4u: goto label_1ab6c4;
        case 0x1ab6c8u: goto label_1ab6c8;
        case 0x1ab6ccu: goto label_1ab6cc;
        case 0x1ab6d0u: goto label_1ab6d0;
        case 0x1ab6d4u: goto label_1ab6d4;
        case 0x1ab6d8u: goto label_1ab6d8;
        case 0x1ab6dcu: goto label_1ab6dc;
        case 0x1ab6e0u: goto label_1ab6e0;
        case 0x1ab6e4u: goto label_1ab6e4;
        case 0x1ab6e8u: goto label_1ab6e8;
        case 0x1ab6ecu: goto label_1ab6ec;
        case 0x1ab6f0u: goto label_1ab6f0;
        case 0x1ab6f4u: goto label_1ab6f4;
        case 0x1ab6f8u: goto label_1ab6f8;
        case 0x1ab6fcu: goto label_1ab6fc;
        case 0x1ab700u: goto label_1ab700;
        case 0x1ab704u: goto label_1ab704;
        case 0x1ab708u: goto label_1ab708;
        case 0x1ab70cu: goto label_1ab70c;
        case 0x1ab710u: goto label_1ab710;
        case 0x1ab714u: goto label_1ab714;
        case 0x1ab718u: goto label_1ab718;
        case 0x1ab71cu: goto label_1ab71c;
        case 0x1ab720u: goto label_1ab720;
        case 0x1ab724u: goto label_1ab724;
        case 0x1ab728u: goto label_1ab728;
        case 0x1ab72cu: goto label_1ab72c;
        case 0x1ab730u: goto label_1ab730;
        case 0x1ab734u: goto label_1ab734;
        case 0x1ab738u: goto label_1ab738;
        case 0x1ab73cu: goto label_1ab73c;
        case 0x1ab740u: goto label_1ab740;
        case 0x1ab744u: goto label_1ab744;
        case 0x1ab748u: goto label_1ab748;
        case 0x1ab74cu: goto label_1ab74c;
        case 0x1ab750u: goto label_1ab750;
        case 0x1ab754u: goto label_1ab754;
        case 0x1ab758u: goto label_1ab758;
        case 0x1ab75cu: goto label_1ab75c;
        case 0x1ab760u: goto label_1ab760;
        case 0x1ab764u: goto label_1ab764;
        case 0x1ab768u: goto label_1ab768;
        case 0x1ab76cu: goto label_1ab76c;
        case 0x1ab770u: goto label_1ab770;
        case 0x1ab774u: goto label_1ab774;
        case 0x1ab778u: goto label_1ab778;
        case 0x1ab77cu: goto label_1ab77c;
        case 0x1ab780u: goto label_1ab780;
        case 0x1ab784u: goto label_1ab784;
        case 0x1ab788u: goto label_1ab788;
        case 0x1ab78cu: goto label_1ab78c;
        case 0x1ab790u: goto label_1ab790;
        case 0x1ab794u: goto label_1ab794;
        case 0x1ab798u: goto label_1ab798;
        case 0x1ab79cu: goto label_1ab79c;
        case 0x1ab7a0u: goto label_1ab7a0;
        case 0x1ab7a4u: goto label_1ab7a4;
        case 0x1ab7a8u: goto label_1ab7a8;
        case 0x1ab7acu: goto label_1ab7ac;
        case 0x1ab7b0u: goto label_1ab7b0;
        case 0x1ab7b4u: goto label_1ab7b4;
        case 0x1ab7b8u: goto label_1ab7b8;
        case 0x1ab7bcu: goto label_1ab7bc;
        case 0x1ab7c0u: goto label_1ab7c0;
        case 0x1ab7c4u: goto label_1ab7c4;
        case 0x1ab7c8u: goto label_1ab7c8;
        case 0x1ab7ccu: goto label_1ab7cc;
        case 0x1ab7d0u: goto label_1ab7d0;
        case 0x1ab7d4u: goto label_1ab7d4;
        case 0x1ab7d8u: goto label_1ab7d8;
        case 0x1ab7dcu: goto label_1ab7dc;
        case 0x1ab7e0u: goto label_1ab7e0;
        case 0x1ab7e4u: goto label_1ab7e4;
        case 0x1ab7e8u: goto label_1ab7e8;
        case 0x1ab7ecu: goto label_1ab7ec;
        case 0x1ab7f0u: goto label_1ab7f0;
        case 0x1ab7f4u: goto label_1ab7f4;
        case 0x1ab7f8u: goto label_1ab7f8;
        case 0x1ab7fcu: goto label_1ab7fc;
        case 0x1ab800u: goto label_1ab800;
        case 0x1ab804u: goto label_1ab804;
        case 0x1ab808u: goto label_1ab808;
        case 0x1ab80cu: goto label_1ab80c;
        case 0x1ab810u: goto label_1ab810;
        case 0x1ab814u: goto label_1ab814;
        case 0x1ab818u: goto label_1ab818;
        case 0x1ab81cu: goto label_1ab81c;
        case 0x1ab820u: goto label_1ab820;
        case 0x1ab824u: goto label_1ab824;
        case 0x1ab828u: goto label_1ab828;
        case 0x1ab82cu: goto label_1ab82c;
        case 0x1ab830u: goto label_1ab830;
        case 0x1ab834u: goto label_1ab834;
        case 0x1ab838u: goto label_1ab838;
        case 0x1ab83cu: goto label_1ab83c;
        case 0x1ab840u: goto label_1ab840;
        case 0x1ab844u: goto label_1ab844;
        case 0x1ab848u: goto label_1ab848;
        case 0x1ab84cu: goto label_1ab84c;
        case 0x1ab850u: goto label_1ab850;
        case 0x1ab854u: goto label_1ab854;
        case 0x1ab858u: goto label_1ab858;
        case 0x1ab85cu: goto label_1ab85c;
        case 0x1ab860u: goto label_1ab860;
        case 0x1ab864u: goto label_1ab864;
        case 0x1ab868u: goto label_1ab868;
        case 0x1ab86cu: goto label_1ab86c;
        case 0x1ab870u: goto label_1ab870;
        case 0x1ab874u: goto label_1ab874;
        case 0x1ab878u: goto label_1ab878;
        case 0x1ab87cu: goto label_1ab87c;
        case 0x1ab880u: goto label_1ab880;
        case 0x1ab884u: goto label_1ab884;
        case 0x1ab888u: goto label_1ab888;
        case 0x1ab88cu: goto label_1ab88c;
        case 0x1ab890u: goto label_1ab890;
        case 0x1ab894u: goto label_1ab894;
        case 0x1ab898u: goto label_1ab898;
        case 0x1ab89cu: goto label_1ab89c;
        case 0x1ab8a0u: goto label_1ab8a0;
        case 0x1ab8a4u: goto label_1ab8a4;
        case 0x1ab8a8u: goto label_1ab8a8;
        case 0x1ab8acu: goto label_1ab8ac;
        case 0x1ab8b0u: goto label_1ab8b0;
        case 0x1ab8b4u: goto label_1ab8b4;
        case 0x1ab8b8u: goto label_1ab8b8;
        case 0x1ab8bcu: goto label_1ab8bc;
        case 0x1ab8c0u: goto label_1ab8c0;
        case 0x1ab8c4u: goto label_1ab8c4;
        case 0x1ab8c8u: goto label_1ab8c8;
        case 0x1ab8ccu: goto label_1ab8cc;
        case 0x1ab8d0u: goto label_1ab8d0;
        case 0x1ab8d4u: goto label_1ab8d4;
        case 0x1ab8d8u: goto label_1ab8d8;
        case 0x1ab8dcu: goto label_1ab8dc;
        case 0x1ab8e0u: goto label_1ab8e0;
        case 0x1ab8e4u: goto label_1ab8e4;
        case 0x1ab8e8u: goto label_1ab8e8;
        case 0x1ab8ecu: goto label_1ab8ec;
        case 0x1ab8f0u: goto label_1ab8f0;
        case 0x1ab8f4u: goto label_1ab8f4;
        case 0x1ab8f8u: goto label_1ab8f8;
        case 0x1ab8fcu: goto label_1ab8fc;
        case 0x1ab900u: goto label_1ab900;
        case 0x1ab904u: goto label_1ab904;
        case 0x1ab908u: goto label_1ab908;
        case 0x1ab90cu: goto label_1ab90c;
        case 0x1ab910u: goto label_1ab910;
        case 0x1ab914u: goto label_1ab914;
        case 0x1ab918u: goto label_1ab918;
        case 0x1ab91cu: goto label_1ab91c;
        case 0x1ab920u: goto label_1ab920;
        case 0x1ab924u: goto label_1ab924;
        case 0x1ab928u: goto label_1ab928;
        case 0x1ab92cu: goto label_1ab92c;
        case 0x1ab930u: goto label_1ab930;
        case 0x1ab934u: goto label_1ab934;
        case 0x1ab938u: goto label_1ab938;
        case 0x1ab93cu: goto label_1ab93c;
        case 0x1ab940u: goto label_1ab940;
        case 0x1ab944u: goto label_1ab944;
        case 0x1ab948u: goto label_1ab948;
        case 0x1ab94cu: goto label_1ab94c;
        case 0x1ab950u: goto label_1ab950;
        case 0x1ab954u: goto label_1ab954;
        case 0x1ab958u: goto label_1ab958;
        case 0x1ab95cu: goto label_1ab95c;
        case 0x1ab960u: goto label_1ab960;
        case 0x1ab964u: goto label_1ab964;
        case 0x1ab968u: goto label_1ab968;
        case 0x1ab96cu: goto label_1ab96c;
        case 0x1ab970u: goto label_1ab970;
        case 0x1ab974u: goto label_1ab974;
        case 0x1ab978u: goto label_1ab978;
        case 0x1ab97cu: goto label_1ab97c;
        case 0x1ab980u: goto label_1ab980;
        case 0x1ab984u: goto label_1ab984;
        case 0x1ab988u: goto label_1ab988;
        case 0x1ab98cu: goto label_1ab98c;
        case 0x1ab990u: goto label_1ab990;
        case 0x1ab994u: goto label_1ab994;
        case 0x1ab998u: goto label_1ab998;
        case 0x1ab99cu: goto label_1ab99c;
        case 0x1ab9a0u: goto label_1ab9a0;
        case 0x1ab9a4u: goto label_1ab9a4;
        case 0x1ab9a8u: goto label_1ab9a8;
        case 0x1ab9acu: goto label_1ab9ac;
        case 0x1ab9b0u: goto label_1ab9b0;
        case 0x1ab9b4u: goto label_1ab9b4;
        case 0x1ab9b8u: goto label_1ab9b8;
        case 0x1ab9bcu: goto label_1ab9bc;
        case 0x1ab9c0u: goto label_1ab9c0;
        case 0x1ab9c4u: goto label_1ab9c4;
        case 0x1ab9c8u: goto label_1ab9c8;
        case 0x1ab9ccu: goto label_1ab9cc;
        case 0x1ab9d0u: goto label_1ab9d0;
        case 0x1ab9d4u: goto label_1ab9d4;
        case 0x1ab9d8u: goto label_1ab9d8;
        case 0x1ab9dcu: goto label_1ab9dc;
        case 0x1ab9e0u: goto label_1ab9e0;
        case 0x1ab9e4u: goto label_1ab9e4;
        case 0x1ab9e8u: goto label_1ab9e8;
        case 0x1ab9ecu: goto label_1ab9ec;
        case 0x1ab9f0u: goto label_1ab9f0;
        case 0x1ab9f4u: goto label_1ab9f4;
        case 0x1ab9f8u: goto label_1ab9f8;
        case 0x1ab9fcu: goto label_1ab9fc;
        case 0x1aba00u: goto label_1aba00;
        case 0x1aba04u: goto label_1aba04;
        case 0x1aba08u: goto label_1aba08;
        case 0x1aba0cu: goto label_1aba0c;
        case 0x1aba10u: goto label_1aba10;
        case 0x1aba14u: goto label_1aba14;
        case 0x1aba18u: goto label_1aba18;
        case 0x1aba1cu: goto label_1aba1c;
        case 0x1aba20u: goto label_1aba20;
        case 0x1aba24u: goto label_1aba24;
        case 0x1aba28u: goto label_1aba28;
        case 0x1aba2cu: goto label_1aba2c;
        case 0x1aba30u: goto label_1aba30;
        case 0x1aba34u: goto label_1aba34;
        case 0x1aba38u: goto label_1aba38;
        case 0x1aba3cu: goto label_1aba3c;
        case 0x1aba40u: goto label_1aba40;
        case 0x1aba44u: goto label_1aba44;
        case 0x1aba48u: goto label_1aba48;
        case 0x1aba4cu: goto label_1aba4c;
        case 0x1aba50u: goto label_1aba50;
        case 0x1aba54u: goto label_1aba54;
        case 0x1aba58u: goto label_1aba58;
        case 0x1aba5cu: goto label_1aba5c;
        case 0x1aba60u: goto label_1aba60;
        case 0x1aba64u: goto label_1aba64;
        case 0x1aba68u: goto label_1aba68;
        case 0x1aba6cu: goto label_1aba6c;
        case 0x1aba70u: goto label_1aba70;
        case 0x1aba74u: goto label_1aba74;
        case 0x1aba78u: goto label_1aba78;
        case 0x1aba7cu: goto label_1aba7c;
        case 0x1aba80u: goto label_1aba80;
        case 0x1aba84u: goto label_1aba84;
        case 0x1aba88u: goto label_1aba88;
        case 0x1aba8cu: goto label_1aba8c;
        case 0x1aba90u: goto label_1aba90;
        case 0x1aba94u: goto label_1aba94;
        case 0x1aba98u: goto label_1aba98;
        case 0x1aba9cu: goto label_1aba9c;
        case 0x1abaa0u: goto label_1abaa0;
        case 0x1abaa4u: goto label_1abaa4;
        case 0x1abaa8u: goto label_1abaa8;
        case 0x1abaacu: goto label_1abaac;
        default: break;
    }

    ctx->pc = 0x1a9f40u;

label_1a9f40:
    // 0x1a9f40: 0x27bdfce0  addiu       $sp, $sp, -0x320
    ctx->pc = 0x1a9f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966496));
label_1a9f44:
    // 0x1a9f44: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x1a9f44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1a9f48:
    // 0x1a9f48: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x1a9f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_1a9f4c:
    // 0x1a9f4c: 0x27a60080  addiu       $a2, $sp, 0x80
    ctx->pc = 0x1a9f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_1a9f50:
    // 0x1a9f50: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x1a9f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_1a9f54:
    // 0x1a9f54: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x1a9f54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_1a9f58:
    // 0x1a9f58: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x1a9f58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_1a9f5c:
    // 0x1a9f5c: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x1a9f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
label_1a9f60:
    // 0x1a9f60: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x1a9f60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_1a9f64:
    // 0x1a9f64: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x1a9f64u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_1a9f68:
    // 0x1a9f68: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1a9f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a9f6c:
    // 0x1a9f6c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1a9f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1a9f70:
    // 0x1a9f70: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1a9f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1a9f74:
    // 0x1a9f74: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1a9f74u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_1a9f78:
    // 0x1a9f78: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1a9f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1a9f7c:
    // 0x1a9f7c: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x1a9f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_1a9f80:
    // 0x1a9f80: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
label_1a9f84:
    if (ctx->pc == 0x1A9F84u) {
        ctx->pc = 0x1A9F84u;
            // 0x1a9f84: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->pc = 0x1A9F88u;
        goto label_1a9f88;
    }
    ctx->pc = 0x1A9F80u;
    {
        const bool branch_taken_0x1a9f80 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x1A9F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9F80u;
            // 0x1a9f84: 0x24c60008  addiu       $a2, $a2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9f80) {
            ctx->pc = 0x1A9F68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a9f68;
        }
    }
    ctx->pc = 0x1A9F88u;
label_1a9f88:
    // 0x1a9f88: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a9f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a9f8c:
    // 0x1a9f8c: 0xc06421c  jal         func_190870
label_1a9f90:
    if (ctx->pc == 0x1A9F90u) {
        ctx->pc = 0x1A9F90u;
            // 0x1a9f90: 0xaf8280f4  sw          $v0, -0x7F0C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934772), GPR_U32(ctx, 2));
        ctx->pc = 0x1A9F94u;
        goto label_1a9f94;
    }
    ctx->pc = 0x1A9F8Cu;
    SET_GPR_U32(ctx, 31, 0x1A9F94u);
    ctx->pc = 0x1A9F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9F8Cu;
            // 0x1a9f90: 0xaf8280f4  sw          $v0, -0x7F0C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934772), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9F94u; }
        if (ctx->pc != 0x1A9F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9F94u; }
        if (ctx->pc != 0x1A9F94u) { return; }
    }
    ctx->pc = 0x1A9F94u;
label_1a9f94:
    // 0x1a9f94: 0xc052658  jal         func_149960
label_1a9f98:
    if (ctx->pc == 0x1A9F98u) {
        ctx->pc = 0x1A9F98u;
            // 0x1a9f98: 0xaf828cb0  sw          $v0, -0x7350($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 2));
        ctx->pc = 0x1A9F9Cu;
        goto label_1a9f9c;
    }
    ctx->pc = 0x1A9F94u;
    SET_GPR_U32(ctx, 31, 0x1A9F9Cu);
    ctx->pc = 0x1A9F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9F94u;
            // 0x1a9f98: 0xaf828cb0  sw          $v0, -0x7350($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937776), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149960u;
    if (runtime->hasFunction(0x149960u)) {
        auto targetFn = runtime->lookupFunction(0x149960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9F9Cu; }
        if (ctx->pc != 0x1A9F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteFileCache__Fv_0x149960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9F9Cu; }
        if (ctx->pc != 0x1A9F9Cu) { return; }
    }
    ctx->pc = 0x1A9F9Cu;
label_1a9f9c:
    // 0x1a9f9c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1a9f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a9fa0:
    // 0x1a9fa0: 0xc051878  jal         func_1461E0
label_1a9fa4:
    if (ctx->pc == 0x1A9FA4u) {
        ctx->pc = 0x1A9FA4u;
            // 0x1a9fa4: 0xaf828c58  sw          $v0, -0x73A8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937688), GPR_U32(ctx, 2));
        ctx->pc = 0x1A9FA8u;
        goto label_1a9fa8;
    }
    ctx->pc = 0x1A9FA0u;
    SET_GPR_U32(ctx, 31, 0x1A9FA8u);
    ctx->pc = 0x1A9FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9FA0u;
            // 0x1a9fa4: 0xaf828c58  sw          $v0, -0x73A8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937688), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1461E0u;
    if (runtime->hasFunction(0x1461E0u)) {
        auto targetFn = runtime->lookupFunction(0x1461E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9FA8u; }
        if (ctx->pc != 0x1A9FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInitFont__Fv_0x1461e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9FA8u; }
        if (ctx->pc != 0x1A9FA8u) { return; }
    }
    ctx->pc = 0x1A9FA8u;
label_1a9fa8:
    // 0x1a9fa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a9fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9fac:
    // 0x1a9fac: 0xaf808c98  sw          $zero, -0x7368($gp)
    ctx->pc = 0x1a9facu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937752), GPR_U32(ctx, 0));
label_1a9fb0:
    // 0x1a9fb0: 0xaf828c7c  sw          $v0, -0x7384($gp)
    ctx->pc = 0x1a9fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937724), GPR_U32(ctx, 2));
label_1a9fb4:
    // 0x1a9fb4: 0xc06a6d4  jal         func_1A9B50
label_1a9fb8:
    if (ctx->pc == 0x1A9FB8u) {
        ctx->pc = 0x1A9FB8u;
            // 0x1a9fb8: 0xaf828c80  sw          $v0, -0x7380($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937728), GPR_U32(ctx, 2));
        ctx->pc = 0x1A9FBCu;
        goto label_1a9fbc;
    }
    ctx->pc = 0x1A9FB4u;
    SET_GPR_U32(ctx, 31, 0x1A9FBCu);
    ctx->pc = 0x1A9FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9FB4u;
            // 0x1a9fb8: 0xaf828c80  sw          $v0, -0x7380($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937728), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9B50u;
    if (runtime->hasFunction(0x1A9B50u)) {
        auto targetFn = runtime->lookupFunction(0x1A9B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9FBCu; }
        if (ctx->pc != 0x1A9FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitLockCharaCtrl__Fv_0x1a9b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9FBCu; }
        if (ctx->pc != 0x1A9FBCu) { return; }
    }
    ctx->pc = 0x1A9FBCu;
label_1a9fbc:
    // 0x1a9fbc: 0xc06a6f4  jal         func_1A9BD0
label_1a9fc0:
    if (ctx->pc == 0x1A9FC0u) {
        ctx->pc = 0x1A9FC4u;
        goto label_1a9fc4;
    }
    ctx->pc = 0x1A9FBCu;
    SET_GPR_U32(ctx, 31, 0x1A9FC4u);
    ctx->pc = 0x1A9BD0u;
    if (runtime->hasFunction(0x1A9BD0u)) {
        auto targetFn = runtime->lookupFunction(0x1A9BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9FC4u; }
        if (ctx->pc != 0x1A9FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEditModeChg__Fv_0x1a9bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9FC4u; }
        if (ctx->pc != 0x1A9FC4u) { return; }
    }
    ctx->pc = 0x1A9FC4u;
label_1a9fc4:
    // 0x1a9fc4: 0xaf808c78  sw          $zero, -0x7388($gp)
    ctx->pc = 0x1a9fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937720), GPR_U32(ctx, 0));
label_1a9fc8:
    // 0x1a9fc8: 0xaf808c90  sw          $zero, -0x7370($gp)
    ctx->pc = 0x1a9fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937744), GPR_U32(ctx, 0));
label_1a9fcc:
    // 0x1a9fcc: 0xc050db0  jal         func_1436C0
label_1a9fd0:
    if (ctx->pc == 0x1A9FD0u) {
        ctx->pc = 0x1A9FD0u;
            // 0x1a9fd0: 0xaf808c94  sw          $zero, -0x736C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937748), GPR_U32(ctx, 0));
        ctx->pc = 0x1A9FD4u;
        goto label_1a9fd4;
    }
    ctx->pc = 0x1A9FCCu;
    SET_GPR_U32(ctx, 31, 0x1A9FD4u);
    ctx->pc = 0x1A9FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9FCCu;
            // 0x1a9fd0: 0xaf808c94  sw          $zero, -0x736C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937748), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1436C0u;
    if (runtime->hasFunction(0x1436C0u)) {
        auto targetFn = runtime->lookupFunction(0x1436C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9FD4u; }
        if (ctx->pc != 0x1A9FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInitLighting__Fv_0x1436c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9FD4u; }
        if (ctx->pc != 0x1A9FD4u) { return; }
    }
    ctx->pc = 0x1A9FD4u;
label_1a9fd4:
    // 0x1a9fd4: 0xc0b7d74  jal         func_2DF5D0
label_1a9fd8:
    if (ctx->pc == 0x1A9FD8u) {
        ctx->pc = 0x1A9FDCu;
        goto label_1a9fdc;
    }
    ctx->pc = 0x1A9FD4u;
    SET_GPR_U32(ctx, 31, 0x1A9FDCu);
    ctx->pc = 0x2DF5D0u;
    if (runtime->hasFunction(0x2DF5D0u)) {
        auto targetFn = runtime->lookupFunction(0x2DF5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9FDCu; }
        if (ctx->pc != 0x1A9FDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitInterior__Fv_0x2df5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9FDCu; }
        if (ctx->pc != 0x1A9FDCu) { return; }
    }
    ctx->pc = 0x1A9FDCu;
label_1a9fdc:
    // 0x1a9fdc: 0xc06af0c  jal         func_1ABC30
label_1a9fe0:
    if (ctx->pc == 0x1A9FE0u) {
        ctx->pc = 0x1A9FE4u;
        goto label_1a9fe4;
    }
    ctx->pc = 0x1A9FDCu;
    SET_GPR_U32(ctx, 31, 0x1A9FE4u);
    ctx->pc = 0x1ABC30u;
    if (runtime->hasFunction(0x1ABC30u)) {
        auto targetFn = runtime->lookupFunction(0x1ABC30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9FE4u; }
        if (ctx->pc != 0x1A9FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSubMapLoadStep__Fv_0x1abc30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9FE4u; }
        if (ctx->pc != 0x1A9FE4u) { return; }
    }
    ctx->pc = 0x1A9FE4u;
label_1a9fe4:
    // 0x1a9fe4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1a9fe4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9fe8:
    // 0x1a9fe8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a9fe8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9fec:
    // 0x1a9fec: 0xc050dc8  jal         func_143720
label_1a9ff0:
    if (ctx->pc == 0x1A9FF0u) {
        ctx->pc = 0x1A9FF0u;
            // 0x1a9ff0: 0xaf808c8c  sw          $zero, -0x7374($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937740), GPR_U32(ctx, 0));
        ctx->pc = 0x1A9FF4u;
        goto label_1a9ff4;
    }
    ctx->pc = 0x1A9FECu;
    SET_GPR_U32(ctx, 31, 0x1A9FF4u);
    ctx->pc = 0x1A9FF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A9FECu;
            // 0x1a9ff0: 0xaf808c8c  sw          $zero, -0x7374($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937740), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143720u;
    if (runtime->hasFunction(0x143720u)) {
        auto targetFn = runtime->lookupFunction(0x143720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9FF4u; }
        if (ctx->pc != 0x1A9FF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgActiveLighting__Fii_0x143720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9FF4u; }
        if (ctx->pc != 0x1A9FF4u) { return; }
    }
    ctx->pc = 0x1A9FF4u;
label_1a9ff4:
    // 0x1a9ff4: 0xc050dbc  jal         func_1436F0
label_1a9ff8:
    if (ctx->pc == 0x1A9FF8u) {
        ctx->pc = 0x1A9FFCu;
        goto label_1a9ffc;
    }
    ctx->pc = 0x1A9FF4u;
    SET_GPR_U32(ctx, 31, 0x1A9FFCu);
    ctx->pc = 0x1436F0u;
    if (runtime->hasFunction(0x1436F0u)) {
        auto targetFn = runtime->lookupFunction(0x1436F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9FFCu; }
        if (ctx->pc != 0x1A9FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInitActiveLighting__Fv_0x1436f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A9FFCu; }
        if (ctx->pc != 0x1A9FFCu) { return; }
    }
    ctx->pc = 0x1A9FFCu;
label_1a9ffc:
    // 0x1a9ffc: 0xc06423c  jal         func_1908F0
label_1aa000:
    if (ctx->pc == 0x1AA000u) {
        ctx->pc = 0x1AA004u;
        goto label_1aa004;
    }
    ctx->pc = 0x1A9FFCu;
    SET_GPR_U32(ctx, 31, 0x1AA004u);
    ctx->pc = 0x1908F0u;
    if (runtime->hasFunction(0x1908F0u)) {
        auto targetFn = runtime->lookupFunction(0x1908F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA004u; }
        if (ctx->pc != 0x1AA004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainStack__Fv_0x1908f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA004u; }
        if (ctx->pc != 0x1AA004u) { return; }
    }
    ctx->pc = 0x1AA004u;
label_1aa004:
    // 0x1aa004: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x1aa004u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_1aa008:
    // 0x1aa008: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1aa008u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aa00c:
    // 0x1aa00c: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x1aa00cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_1aa010:
    // 0x1aa010: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aa010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aa014:
    // 0x1aa014: 0xc04e704  jal         func_139C10
label_1aa018:
    if (ctx->pc == 0x1AA018u) {
        ctx->pc = 0x1AA018u;
            // 0x1aa018: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->pc = 0x1AA01Cu;
        goto label_1aa01c;
    }
    ctx->pc = 0x1AA014u;
    SET_GPR_U32(ctx, 31, 0x1AA01Cu);
    ctx->pc = 0x1AA018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA014u;
            // 0x1aa018: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA01Cu; }
        if (ctx->pc != 0x1AA01Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA01Cu; }
        if (ctx->pc != 0x1AA01Cu) { return; }
    }
    ctx->pc = 0x1AA01Cu;
label_1aa01c:
    // 0x1aa01c: 0xaf828cb4  sw          $v0, -0x734C($gp)
    ctx->pc = 0x1aa01cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937780), GPR_U32(ctx, 2));
label_1aa020:
    // 0x1aa020: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aa020u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aa024:
    // 0x1aa024: 0xc04e704  jal         func_139C10
label_1aa028:
    if (ctx->pc == 0x1AA028u) {
        ctx->pc = 0x1AA028u;
            // 0x1aa028: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->pc = 0x1AA02Cu;
        goto label_1aa02c;
    }
    ctx->pc = 0x1AA024u;
    SET_GPR_U32(ctx, 31, 0x1AA02Cu);
    ctx->pc = 0x1AA028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA024u;
            // 0x1aa028: 0x24052710  addiu       $a1, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA02Cu; }
        if (ctx->pc != 0x1AA02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA02Cu; }
        if (ctx->pc != 0x1AA02Cu) { return; }
    }
    ctx->pc = 0x1AA02Cu;
label_1aa02c:
    // 0x1aa02c: 0x8f848cb4  lw          $a0, -0x734C($gp)
    ctx->pc = 0x1aa02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937780)));
label_1aa030:
    // 0x1aa030: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1aa030u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aa034:
    // 0x1aa034: 0xaf828cb8  sw          $v0, -0x7348($gp)
    ctx->pc = 0x1aa034u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937784), GPR_U32(ctx, 2));
label_1aa038:
    // 0x1aa038: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x1aa038u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_1aa03c:
    // 0x1aa03c: 0xc050784  jal         func_141E10
label_1aa040:
    if (ctx->pc == 0x1AA040u) {
        ctx->pc = 0x1AA040u;
            // 0x1aa040: 0x34467100  ori         $a2, $v0, 0x7100 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28928);
        ctx->pc = 0x1AA044u;
        goto label_1aa044;
    }
    ctx->pc = 0x1AA03Cu;
    SET_GPR_U32(ctx, 31, 0x1AA044u);
    ctx->pc = 0x1AA040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA03Cu;
            // 0x1aa040: 0x34467100  ori         $a2, $v0, 0x7100 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)28928);
        ctx->in_delay_slot = false;
    ctx->pc = 0x141E10u;
    if (runtime->hasFunction(0x141E10u)) {
        auto targetFn = runtime->lookupFunction(0x141E10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA044u; }
        if (ctx->pc != 0x1AA044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInitVif1Packet__FP1P1i_0x141e10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA044u; }
        if (ctx->pc != 0x1AA044u) { return; }
    }
    ctx->pc = 0x1AA044u;
label_1aa044:
    // 0x1aa044: 0x340588b8  ori         $a1, $zero, 0x88B8
    ctx->pc = 0x1aa044u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35000);
label_1aa048:
    // 0x1aa048: 0xc04e704  jal         func_139C10
label_1aa04c:
    if (ctx->pc == 0x1AA04Cu) {
        ctx->pc = 0x1AA04Cu;
            // 0x1aa04c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AA050u;
        goto label_1aa050;
    }
    ctx->pc = 0x1AA048u;
    SET_GPR_U32(ctx, 31, 0x1AA050u);
    ctx->pc = 0x1AA04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA048u;
            // 0x1aa04c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA050u; }
        if (ctx->pc != 0x1AA050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA050u; }
        if (ctx->pc != 0x1AA050u) { return; }
    }
    ctx->pc = 0x1AA050u;
label_1aa050:
    // 0x1aa050: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1aa050u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1aa054:
    // 0x1aa054: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1aa054u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aa058:
    // 0x1aa058: 0x2484e840  addiu       $a0, $a0, -0x17C0
    ctx->pc = 0x1aa058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961216));
label_1aa05c:
    // 0x1aa05c: 0xc04e79c  jal         func_139E70
label_1aa060:
    if (ctx->pc == 0x1AA060u) {
        ctx->pc = 0x1AA060u;
            // 0x1aa060: 0x340688b8  ori         $a2, $zero, 0x88B8 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35000);
        ctx->pc = 0x1AA064u;
        goto label_1aa064;
    }
    ctx->pc = 0x1AA05Cu;
    SET_GPR_U32(ctx, 31, 0x1AA064u);
    ctx->pc = 0x1AA060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA05Cu;
            // 0x1aa060: 0x340688b8  ori         $a2, $zero, 0x88B8 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35000);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA064u; }
        if (ctx->pc != 0x1AA064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA064u; }
        if (ctx->pc != 0x1AA064u) { return; }
    }
    ctx->pc = 0x1AA064u;
label_1aa064:
    // 0x1aa064: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aa064u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aa068:
    // 0x1aa068: 0xc04e704  jal         func_139C10
label_1aa06c:
    if (ctx->pc == 0x1AA06Cu) {
        ctx->pc = 0x1AA06Cu;
            // 0x1aa06c: 0x340588b8  ori         $a1, $zero, 0x88B8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35000);
        ctx->pc = 0x1AA070u;
        goto label_1aa070;
    }
    ctx->pc = 0x1AA068u;
    SET_GPR_U32(ctx, 31, 0x1AA070u);
    ctx->pc = 0x1AA06Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA068u;
            // 0x1aa06c: 0x340588b8  ori         $a1, $zero, 0x88B8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35000);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA070u; }
        if (ctx->pc != 0x1AA070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA070u; }
        if (ctx->pc != 0x1AA070u) { return; }
    }
    ctx->pc = 0x1AA070u;
label_1aa070:
    // 0x1aa070: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1aa070u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1aa074:
    // 0x1aa074: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1aa074u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aa078:
    // 0x1aa078: 0x2484e870  addiu       $a0, $a0, -0x1790
    ctx->pc = 0x1aa078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961264));
label_1aa07c:
    // 0x1aa07c: 0xc04e79c  jal         func_139E70
label_1aa080:
    if (ctx->pc == 0x1AA080u) {
        ctx->pc = 0x1AA080u;
            // 0x1aa080: 0x340688b8  ori         $a2, $zero, 0x88B8 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35000);
        ctx->pc = 0x1AA084u;
        goto label_1aa084;
    }
    ctx->pc = 0x1AA07Cu;
    SET_GPR_U32(ctx, 31, 0x1AA084u);
    ctx->pc = 0x1AA080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA07Cu;
            // 0x1aa080: 0x340688b8  ori         $a2, $zero, 0x88B8 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)35000);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA084u; }
        if (ctx->pc != 0x1AA084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA084u; }
        if (ctx->pc != 0x1AA084u) { return; }
    }
    ctx->pc = 0x1AA084u;
label_1aa084:
    // 0x1aa084: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1aa084u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1aa088:
    // 0x1aa088: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x1aa088u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
label_1aa08c:
    // 0x1aa08c: 0x2484e840  addiu       $a0, $a0, -0x17C0
    ctx->pc = 0x1aa08cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961216));
label_1aa090:
    // 0x1aa090: 0xc0507bc  jal         func_141EF0
label_1aa094:
    if (ctx->pc == 0x1AA094u) {
        ctx->pc = 0x1AA094u;
            // 0x1aa094: 0x24a5e870  addiu       $a1, $a1, -0x1790 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961264));
        ctx->pc = 0x1AA098u;
        goto label_1aa098;
    }
    ctx->pc = 0x1AA090u;
    SET_GPR_U32(ctx, 31, 0x1AA098u);
    ctx->pc = 0x1AA094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA090u;
            // 0x1aa094: 0x24a5e870  addiu       $a1, $a1, -0x1790 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141EF0u;
    if (runtime->hasFunction(0x141EF0u)) {
        auto targetFn = runtime->lookupFunction(0x141EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA098u; }
        if (ctx->pc != 0x1AA098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPacketBuffer__FP9mgCMemoryP9mgCMemory_0x141ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA098u; }
        if (ctx->pc != 0x1AA098u) { return; }
    }
    ctx->pc = 0x1AA098u;
label_1aa098:
    // 0x1aa098: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aa098u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aa09c:
    // 0x1aa09c: 0xc04e704  jal         func_139C10
label_1aa0a0:
    if (ctx->pc == 0x1AA0A0u) {
        ctx->pc = 0x1AA0A0u;
            // 0x1aa0a0: 0x24054e20  addiu       $a1, $zero, 0x4E20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20000));
        ctx->pc = 0x1AA0A4u;
        goto label_1aa0a4;
    }
    ctx->pc = 0x1AA09Cu;
    SET_GPR_U32(ctx, 31, 0x1AA0A4u);
    ctx->pc = 0x1AA0A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA09Cu;
            // 0x1aa0a0: 0x24054e20  addiu       $a1, $zero, 0x4E20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA0A4u; }
        if (ctx->pc != 0x1AA0A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA0A4u; }
        if (ctx->pc != 0x1AA0A4u) { return; }
    }
    ctx->pc = 0x1AA0A4u;
label_1aa0a4:
    // 0x1aa0a4: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1aa0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_1aa0a8:
    // 0x1aa0a8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1aa0a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aa0ac:
    // 0x1aa0ac: 0xc04a422  jal         func_129088
label_1aa0b0:
    if (ctx->pc == 0x1AA0B0u) {
        ctx->pc = 0x1AA0B0u;
            // 0x1aa0b0: 0x248461a0  addiu       $a0, $a0, 0x61A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24992));
        ctx->pc = 0x1AA0B4u;
        goto label_1aa0b4;
    }
    ctx->pc = 0x1AA0ACu;
    SET_GPR_U32(ctx, 31, 0x1AA0B4u);
    ctx->pc = 0x1AA0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA0ACu;
            // 0x1aa0b0: 0x248461a0  addiu       $a0, $a0, 0x61A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA0B4u; }
        if (ctx->pc != 0x1AA0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA0B4u; }
        if (ctx->pc != 0x1AA0B4u) { return; }
    }
    ctx->pc = 0x1AA0B4u;
label_1aa0b4:
    // 0x1aa0b4: 0x2c410010  sltiu       $at, $v0, 0x10
    ctx->pc = 0x1aa0b4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_1aa0b8:
    // 0x1aa0b8: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_1aa0bc:
    if (ctx->pc == 0x1AA0BCu) {
        ctx->pc = 0x1AA0C0u;
        goto label_1aa0c0;
    }
    ctx->pc = 0x1AA0B8u;
    {
        const bool branch_taken_0x1aa0b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa0b8) {
            ctx->pc = 0x1AA0D4u;
            goto label_1aa0d4;
        }
    }
    ctx->pc = 0x1AA0C0u;
label_1aa0c0:
    // 0x1aa0c0: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1aa0c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1aa0c4:
    // 0x1aa0c4: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1aa0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1aa0c8:
    // 0x1aa0c8: 0x2484e9f0  addiu       $a0, $a0, -0x1610
    ctx->pc = 0x1aa0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961648));
label_1aa0cc:
    // 0x1aa0cc: 0xc04a3dc  jal         func_128F70
label_1aa0d0:
    if (ctx->pc == 0x1AA0D0u) {
        ctx->pc = 0x1AA0D0u;
            // 0x1aa0d0: 0x24a561a0  addiu       $a1, $a1, 0x61A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24992));
        ctx->pc = 0x1AA0D4u;
        goto label_1aa0d4;
    }
    ctx->pc = 0x1AA0CCu;
    SET_GPR_U32(ctx, 31, 0x1AA0D4u);
    ctx->pc = 0x1AA0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA0CCu;
            // 0x1aa0d0: 0x24a561a0  addiu       $a1, $a1, 0x61A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA0D4u; }
        if (ctx->pc != 0x1AA0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA0D4u; }
        if (ctx->pc != 0x1AA0D4u) { return; }
    }
    ctx->pc = 0x1AA0D4u;
label_1aa0d4:
    // 0x1aa0d4: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1aa0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1aa0d8:
    // 0x1aa0d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1aa0d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aa0dc:
    // 0x1aa0dc: 0x2484e9f0  addiu       $a0, $a0, -0x1610
    ctx->pc = 0x1aa0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961648));
label_1aa0e0:
    // 0x1aa0e0: 0xc04e79c  jal         func_139E70
label_1aa0e4:
    if (ctx->pc == 0x1AA0E4u) {
        ctx->pc = 0x1AA0E4u;
            // 0x1aa0e4: 0x24064e20  addiu       $a2, $zero, 0x4E20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20000));
        ctx->pc = 0x1AA0E8u;
        goto label_1aa0e8;
    }
    ctx->pc = 0x1AA0E0u;
    SET_GPR_U32(ctx, 31, 0x1AA0E8u);
    ctx->pc = 0x1AA0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA0E0u;
            // 0x1aa0e4: 0x24064e20  addiu       $a2, $zero, 0x4E20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA0E8u; }
        if (ctx->pc != 0x1AA0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA0E8u; }
        if (ctx->pc != 0x1AA0E8u) { return; }
    }
    ctx->pc = 0x1AA0E8u;
label_1aa0e8:
    // 0x1aa0e8: 0xc04e780  jal         func_139E00
label_1aa0ec:
    if (ctx->pc == 0x1AA0ECu) {
        ctx->pc = 0x1AA0ECu;
            // 0x1aa0ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AA0F0u;
        goto label_1aa0f0;
    }
    ctx->pc = 0x1AA0E8u;
    SET_GPR_U32(ctx, 31, 0x1AA0F0u);
    ctx->pc = 0x1AA0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA0E8u;
            // 0x1aa0ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA0F0u; }
        if (ctx->pc != 0x1AA0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA0F0u; }
        if (ctx->pc != 0x1AA0F0u) { return; }
    }
    ctx->pc = 0x1AA0F0u;
label_1aa0f0:
    // 0x1aa0f0: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x1aa0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_1aa0f4:
    // 0x1aa0f4: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x1aa0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1aa0f8:
    // 0x1aa0f8: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x1aa0f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1aa0fc:
    // 0x1aa0fc: 0x3446cb30  ori         $a2, $v0, 0xCB30
    ctx->pc = 0x1aa0fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52016);
label_1aa100:
    // 0x1aa100: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x1aa100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1aa104:
    // 0x1aa104: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1aa104u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1aa108:
    // 0x1aa108: 0x2484ea20  addiu       $a0, $a0, -0x15E0
    ctx->pc = 0x1aa108u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
label_1aa10c:
    // 0x1aa10c: 0x658823  subu        $s1, $v1, $a1
    ctx->pc = 0x1aa10cu;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1aa110:
    // 0x1aa110: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1aa110u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1aa114:
    // 0x1aa114: 0x2263021  addu        $a2, $s1, $a2
    ctx->pc = 0x1aa114u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_1aa118:
    // 0x1aa118: 0xc04e79c  jal         func_139E70
label_1aa11c:
    if (ctx->pc == 0x1AA11Cu) {
        ctx->pc = 0x1AA11Cu;
            // 0x1aa11c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1AA120u;
        goto label_1aa120;
    }
    ctx->pc = 0x1AA118u;
    SET_GPR_U32(ctx, 31, 0x1AA120u);
    ctx->pc = 0x1AA11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA118u;
            // 0x1aa11c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA120u; }
        if (ctx->pc != 0x1AA120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA120u; }
        if (ctx->pc != 0x1AA120u) { return; }
    }
    ctx->pc = 0x1AA120u;
label_1aa120:
    // 0x1aa120: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x1aa120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_1aa124:
    // 0x1aa124: 0x3442cb30  ori         $v0, $v0, 0xCB30
    ctx->pc = 0x1aa124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52016);
label_1aa128:
    // 0x1aa128: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x1aa128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1aa12c:
    // 0x1aa12c: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1aa12cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1aa130:
    // 0x1aa130: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1aa134:
    if (ctx->pc == 0x1AA134u) {
        ctx->pc = 0x1AA134u;
            // 0x1aa134: 0x22a83  sra         $a1, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 10));
        ctx->pc = 0x1AA138u;
        goto label_1aa138;
    }
    ctx->pc = 0x1AA130u;
    {
        const bool branch_taken_0x1aa130 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AA134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA130u;
            // 0x1aa134: 0x22a83  sra         $a1, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa130) {
            ctx->pc = 0x1AA140u;
            goto label_1aa140;
        }
    }
    ctx->pc = 0x1AA138u;
label_1aa138:
    // 0x1aa138: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x1aa138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
label_1aa13c:
    // 0x1aa13c: 0x22a83  sra         $a1, $v0, 10
    ctx->pc = 0x1aa13cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 10));
label_1aa140:
    // 0x1aa140: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1aa140u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_1aa144:
    // 0x1aa144: 0xc04a0d2  jal         func_128348
label_1aa148:
    if (ctx->pc == 0x1AA148u) {
        ctx->pc = 0x1AA148u;
            // 0x1aa148: 0x248461b0  addiu       $a0, $a0, 0x61B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25008));
        ctx->pc = 0x1AA14Cu;
        goto label_1aa14c;
    }
    ctx->pc = 0x1AA144u;
    SET_GPR_U32(ctx, 31, 0x1AA14Cu);
    ctx->pc = 0x1AA148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA144u;
            // 0x1aa148: 0x248461b0  addiu       $a0, $a0, 0x61B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA14Cu; }
        if (ctx->pc != 0x1AA14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA14Cu; }
        if (ctx->pc != 0x1AA14Cu) { return; }
    }
    ctx->pc = 0x1AA14Cu;
label_1aa14c:
    // 0x1aa14c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1aa14cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_1aa150:
    // 0x1aa150: 0xc04a422  jal         func_129088
label_1aa154:
    if (ctx->pc == 0x1AA154u) {
        ctx->pc = 0x1AA154u;
            // 0x1aa154: 0x248461d0  addiu       $a0, $a0, 0x61D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25040));
        ctx->pc = 0x1AA158u;
        goto label_1aa158;
    }
    ctx->pc = 0x1AA150u;
    SET_GPR_U32(ctx, 31, 0x1AA158u);
    ctx->pc = 0x1AA154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA150u;
            // 0x1aa154: 0x248461d0  addiu       $a0, $a0, 0x61D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA158u; }
        if (ctx->pc != 0x1AA158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA158u; }
        if (ctx->pc != 0x1AA158u) { return; }
    }
    ctx->pc = 0x1AA158u;
label_1aa158:
    // 0x1aa158: 0x2c410010  sltiu       $at, $v0, 0x10
    ctx->pc = 0x1aa158u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_1aa15c:
    // 0x1aa15c: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_1aa160:
    if (ctx->pc == 0x1AA160u) {
        ctx->pc = 0x1AA164u;
        goto label_1aa164;
    }
    ctx->pc = 0x1AA15Cu;
    {
        const bool branch_taken_0x1aa15c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa15c) {
            ctx->pc = 0x1AA178u;
            goto label_1aa178;
        }
    }
    ctx->pc = 0x1AA164u;
label_1aa164:
    // 0x1aa164: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1aa164u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1aa168:
    // 0x1aa168: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1aa168u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1aa16c:
    // 0x1aa16c: 0x2484ea20  addiu       $a0, $a0, -0x15E0
    ctx->pc = 0x1aa16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
label_1aa170:
    // 0x1aa170: 0xc04a3dc  jal         func_128F70
label_1aa174:
    if (ctx->pc == 0x1AA174u) {
        ctx->pc = 0x1AA174u;
            // 0x1aa174: 0x24a561d0  addiu       $a1, $a1, 0x61D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25040));
        ctx->pc = 0x1AA178u;
        goto label_1aa178;
    }
    ctx->pc = 0x1AA170u;
    SET_GPR_U32(ctx, 31, 0x1AA178u);
    ctx->pc = 0x1AA174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA170u;
            // 0x1aa174: 0x24a561d0  addiu       $a1, $a1, 0x61D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA178u; }
        if (ctx->pc != 0x1AA178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA178u; }
        if (ctx->pc != 0x1AA178u) { return; }
    }
    ctx->pc = 0x1AA178u;
label_1aa178:
    // 0x1aa178: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1aa178u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1aa17c:
    // 0x1aa17c: 0x3c02fffc  lui         $v0, 0xFFFC
    ctx->pc = 0x1aa17cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65532 << 16));
label_1aa180:
    // 0x1aa180: 0xac20ea44  sw          $zero, -0x15BC($at)
    ctx->pc = 0x1aa180u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961732), GPR_U32(ctx, 0));
label_1aa184:
    // 0x1aa184: 0x3442cb30  ori         $v0, $v0, 0xCB30
    ctx->pc = 0x1aa184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52016);
label_1aa188:
    // 0x1aa188: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1aa188u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1aa18c:
    // 0x1aa18c: 0x2222821  addu        $a1, $s1, $v0
    ctx->pc = 0x1aa18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1aa190:
    // 0x1aa190: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aa190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aa194:
    // 0x1aa194: 0xc04e748  jal         func_139D20
label_1aa198:
    if (ctx->pc == 0x1AA198u) {
        ctx->pc = 0x1AA198u;
            // 0x1aa198: 0xac20ea3c  sw          $zero, -0x15C4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294961724), GPR_U32(ctx, 0));
        ctx->pc = 0x1AA19Cu;
        goto label_1aa19c;
    }
    ctx->pc = 0x1AA194u;
    SET_GPR_U32(ctx, 31, 0x1AA19Cu);
    ctx->pc = 0x1AA198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA194u;
            // 0x1aa198: 0xac20ea3c  sw          $zero, -0x15C4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294961724), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA19Cu; }
        if (ctx->pc != 0x1AA19Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA19Cu; }
        if (ctx->pc != 0x1AA19Cu) { return; }
    }
    ctx->pc = 0x1AA19Cu;
label_1aa19c:
    // 0x1aa19c: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1aa19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_1aa1a0:
    // 0x1aa1a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aa1a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aa1a4:
    // 0x1aa1a4: 0xc04e704  jal         func_139C10
label_1aa1a8:
    if (ctx->pc == 0x1AA1A8u) {
        ctx->pc = 0x1AA1A8u;
            // 0x1aa1a8: 0x34450d40  ori         $a1, $v0, 0xD40 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3392);
        ctx->pc = 0x1AA1ACu;
        goto label_1aa1ac;
    }
    ctx->pc = 0x1AA1A4u;
    SET_GPR_U32(ctx, 31, 0x1AA1ACu);
    ctx->pc = 0x1AA1A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA1A4u;
            // 0x1aa1a8: 0x34450d40  ori         $a1, $v0, 0xD40 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3392);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA1ACu; }
        if (ctx->pc != 0x1AA1ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA1ACu; }
        if (ctx->pc != 0x1AA1ACu) { return; }
    }
    ctx->pc = 0x1AA1ACu;
label_1aa1ac:
    // 0x1aa1ac: 0xaf828ac0  sw          $v0, -0x7540($gp)
    ctx->pc = 0x1aa1acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937280), GPR_U32(ctx, 2));
label_1aa1b0:
    // 0x1aa1b0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1aa1b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aa1b4:
    // 0x1aa1b4: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1aa1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1aa1b8:
    // 0x1aa1b8: 0x3c020003  lui         $v0, 0x3
    ctx->pc = 0x1aa1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)3 << 16));
label_1aa1bc:
    // 0x1aa1bc: 0x2484e990  addiu       $a0, $a0, -0x1670
    ctx->pc = 0x1aa1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961552));
label_1aa1c0:
    // 0x1aa1c0: 0xc04e79c  jal         func_139E70
label_1aa1c4:
    if (ctx->pc == 0x1AA1C4u) {
        ctx->pc = 0x1AA1C4u;
            // 0x1aa1c4: 0x34460d40  ori         $a2, $v0, 0xD40 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3392);
        ctx->pc = 0x1AA1C8u;
        goto label_1aa1c8;
    }
    ctx->pc = 0x1AA1C0u;
    SET_GPR_U32(ctx, 31, 0x1AA1C8u);
    ctx->pc = 0x1AA1C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA1C0u;
            // 0x1aa1c4: 0x34460d40  ori         $a2, $v0, 0xD40 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)3392);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA1C8u; }
        if (ctx->pc != 0x1AA1C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA1C8u; }
        if (ctx->pc != 0x1AA1C8u) { return; }
    }
    ctx->pc = 0x1AA1C8u;
label_1aa1c8:
    // 0x1aa1c8: 0x8f828ac0  lw          $v0, -0x7540($gp)
    ctx->pc = 0x1aa1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
label_1aa1cc:
    // 0x1aa1cc: 0x3c010030  lui         $at, 0x30
    ctx->pc = 0x1aa1ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)48 << 16));
label_1aa1d0:
    // 0x1aa1d0: 0x3421d400  ori         $at, $at, 0xD400
    ctx->pc = 0x1aa1d0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)54272);
label_1aa1d4:
    // 0x1aa1d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aa1d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aa1d8:
    // 0x1aa1d8: 0x24052710  addiu       $a1, $zero, 0x2710
    ctx->pc = 0x1aa1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
label_1aa1dc:
    // 0x1aa1dc: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x1aa1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1aa1e0:
    // 0x1aa1e0: 0xc04e704  jal         func_139C10
label_1aa1e4:
    if (ctx->pc == 0x1AA1E4u) {
        ctx->pc = 0x1AA1E4u;
            // 0x1aa1e4: 0xaf828cbc  sw          $v0, -0x7344($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937788), GPR_U32(ctx, 2));
        ctx->pc = 0x1AA1E8u;
        goto label_1aa1e8;
    }
    ctx->pc = 0x1AA1E0u;
    SET_GPR_U32(ctx, 31, 0x1AA1E8u);
    ctx->pc = 0x1AA1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA1E0u;
            // 0x1aa1e4: 0xaf828cbc  sw          $v0, -0x7344($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937788), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA1E8u; }
        if (ctx->pc != 0x1AA1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA1E8u; }
        if (ctx->pc != 0x1AA1E8u) { return; }
    }
    ctx->pc = 0x1AA1E8u;
label_1aa1e8:
    // 0x1aa1e8: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1aa1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1aa1ec:
    // 0x1aa1ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1aa1ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aa1f0:
    // 0x1aa1f0: 0x2484e960  addiu       $a0, $a0, -0x16A0
    ctx->pc = 0x1aa1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961504));
label_1aa1f4:
    // 0x1aa1f4: 0xc04e79c  jal         func_139E70
label_1aa1f8:
    if (ctx->pc == 0x1AA1F8u) {
        ctx->pc = 0x1AA1F8u;
            // 0x1aa1f8: 0x24062710  addiu       $a2, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->pc = 0x1AA1FCu;
        goto label_1aa1fc;
    }
    ctx->pc = 0x1AA1F4u;
    SET_GPR_U32(ctx, 31, 0x1AA1FCu);
    ctx->pc = 0x1AA1F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA1F4u;
            // 0x1aa1f8: 0x24062710  addiu       $a2, $zero, 0x2710 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA1FCu; }
        if (ctx->pc != 0x1AA1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA1FCu; }
        if (ctx->pc != 0x1AA1FCu) { return; }
    }
    ctx->pc = 0x1AA1FCu;
label_1aa1fc:
    // 0x1aa1fc: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x1aa1fcu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
label_1aa200:
    // 0x1aa200: 0x3c0701ea  lui         $a3, 0x1EA
    ctx->pc = 0x1aa200u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)490 << 16));
label_1aa204:
    // 0x1aa204: 0x26311ef0  addiu       $s1, $s1, 0x1EF0
    ctx->pc = 0x1aa204u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7920));
label_1aa208:
    // 0x1aa208: 0x2405015e  addiu       $a1, $zero, 0x15E
    ctx->pc = 0x1aa208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
label_1aa20c:
    // 0x1aa20c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aa20cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aa210:
    // 0x1aa210: 0x240600dc  addiu       $a2, $zero, 0xDC
    ctx->pc = 0x1aa210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
label_1aa214:
    // 0x1aa214: 0xc04b20c  jal         func_12C830
label_1aa218:
    if (ctx->pc == 0x1AA218u) {
        ctx->pc = 0x1AA218u;
            // 0x1aa218: 0x24e7ea20  addiu       $a3, $a3, -0x15E0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961696));
        ctx->pc = 0x1AA21Cu;
        goto label_1aa21c;
    }
    ctx->pc = 0x1AA214u;
    SET_GPR_U32(ctx, 31, 0x1AA21Cu);
    ctx->pc = 0x1AA218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA214u;
            // 0x1aa218: 0x24e7ea20  addiu       $a3, $a3, -0x15E0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12C830u;
    if (runtime->hasFunction(0x12C830u)) {
        auto targetFn = runtime->lookupFunction(0x12C830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA21Cu; }
        if (ctx->pc != 0x1AA21Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTableBuffer__17mgCTextureManagerFiiP9mgCMemory_0x12c830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA21Cu; }
        if (ctx->pc != 0x1AA21Cu) { return; }
    }
    ctx->pc = 0x1AA21Cu;
label_1aa21c:
    // 0x1aa21c: 0xc064234  jal         func_1908D0
label_1aa220:
    if (ctx->pc == 0x1AA220u) {
        ctx->pc = 0x1AA224u;
        goto label_1aa224;
    }
    ctx->pc = 0x1AA21Cu;
    SET_GPR_U32(ctx, 31, 0x1AA224u);
    ctx->pc = 0x1908D0u;
    if (runtime->hasFunction(0x1908D0u)) {
        auto targetFn = runtime->lookupFunction(0x1908D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA224u; }
        if (ctx->pc != 0x1AA224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetVramTopAddress__Fv_0x1908d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA224u; }
        if (ctx->pc != 0x1AA224u) { return; }
    }
    ctx->pc = 0x1AA224u;
label_1aa224:
    // 0x1aa224: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1aa224u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aa228:
    // 0x1aa228: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aa228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aa22c:
    // 0x1aa22c: 0xc04b2b4  jal         func_12CAD0
label_1aa230:
    if (ctx->pc == 0x1AA230u) {
        ctx->pc = 0x1AA230u;
            // 0x1aa230: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1AA234u;
        goto label_1aa234;
    }
    ctx->pc = 0x1AA22Cu;
    SET_GPR_U32(ctx, 31, 0x1AA234u);
    ctx->pc = 0x1AA230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA22Cu;
            // 0x1aa230: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12CAD0u;
    if (runtime->hasFunction(0x12CAD0u)) {
        auto targetFn = runtime->lookupFunction(0x12CAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA234u; }
        if (ctx->pc != 0x1AA234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__17mgCTextureManagerFii_0x12cad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA234u; }
        if (ctx->pc != 0x1AA234u) { return; }
    }
    ctx->pc = 0x1AA234u;
label_1aa234:
    // 0x1aa234: 0xc06a724  jal         func_1A9C90
label_1aa238:
    if (ctx->pc == 0x1AA238u) {
        ctx->pc = 0x1AA238u;
            // 0x1aa238: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AA23Cu;
        goto label_1aa23c;
    }
    ctx->pc = 0x1AA234u;
    SET_GPR_U32(ctx, 31, 0x1AA23Cu);
    ctx->pc = 0x1AA238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA234u;
            // 0x1aa238: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9C90u;
    if (runtime->hasFunction(0x1A9C90u)) {
        auto targetFn = runtime->lookupFunction(0x1A9C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA23Cu; }
        if (ctx->pc != 0x1AA23Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDataPacket__Fi_0x1a9c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA23Cu; }
        if (ctx->pc != 0x1AA23Cu) { return; }
    }
    ctx->pc = 0x1AA23Cu;
label_1aa23c:
    // 0x1aa23c: 0xc0c26c4  jal         func_309B10
label_1aa240:
    if (ctx->pc == 0x1AA240u) {
        ctx->pc = 0x1AA240u;
            // 0x1aa240: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x1AA244u;
        goto label_1aa244;
    }
    ctx->pc = 0x1AA23Cu;
    SET_GPR_U32(ctx, 31, 0x1AA244u);
    ctx->pc = 0x1AA240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA23Cu;
            // 0x1aa240: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x309B10u;
    if (runtime->hasFunction(0x309B10u)) {
        auto targetFn = runtime->lookupFunction(0x309B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA244u; }
        if (ctx->pc != 0x1AA244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__14NowLoadingInfoFv_0x309b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA244u; }
        if (ctx->pc != 0x1AA244u) { return; }
    }
    ctx->pc = 0x1AA244u;
label_1aa244:
    // 0x1aa244: 0x240200cd  addiu       $v0, $zero, 0xCD
    ctx->pc = 0x1aa244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 205));
label_1aa248:
    // 0x1aa248: 0x3c01002f  lui         $at, 0x2F
    ctx->pc = 0x1aa248u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)47 << 16));
label_1aa24c:
    // 0x1aa24c: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x1aa24cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_1aa250:
    // 0x1aa250: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1aa250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aa254:
    // 0x1aa254: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x1aa254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1aa258:
    // 0x1aa258: 0x34219b80  ori         $at, $at, 0x9B80
    ctx->pc = 0x1aa258u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)39808);
label_1aa25c:
    // 0x1aa25c: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x1aa25cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
label_1aa260:
    // 0x1aa260: 0x27a400d8  addiu       $a0, $sp, 0xD8
    ctx->pc = 0x1aa260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
label_1aa264:
    // 0x1aa264: 0x8f828ac0  lw          $v0, -0x7540($gp)
    ctx->pc = 0x1aa264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
label_1aa268:
    // 0x1aa268: 0x24061388  addiu       $a2, $zero, 0x1388
    ctx->pc = 0x1aa268u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5000));
label_1aa26c:
    // 0x1aa26c: 0xafa300d4  sw          $v1, 0xD4($sp)
    ctx->pc = 0x1aa26cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 3));
label_1aa270:
    // 0x1aa270: 0xc04e79c  jal         func_139E70
label_1aa274:
    if (ctx->pc == 0x1AA274u) {
        ctx->pc = 0x1AA274u;
            // 0x1aa274: 0x412821  addu        $a1, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->pc = 0x1AA278u;
        goto label_1aa278;
    }
    ctx->pc = 0x1AA270u;
    SET_GPR_U32(ctx, 31, 0x1AA278u);
    ctx->pc = 0x1AA274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA270u;
            // 0x1aa274: 0x412821  addu        $a1, $v0, $at (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA278u; }
        if (ctx->pc != 0x1AA278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA278u; }
        if (ctx->pc != 0x1AA278u) { return; }
    }
    ctx->pc = 0x1AA278u;
label_1aa278:
    // 0x1aa278: 0xc0c25fc  jal         func_3097F0
label_1aa27c:
    if (ctx->pc == 0x1AA27Cu) {
        ctx->pc = 0x1AA27Cu;
            // 0x1aa27c: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x1AA280u;
        goto label_1aa280;
    }
    ctx->pc = 0x1AA278u;
    SET_GPR_U32(ctx, 31, 0x1AA280u);
    ctx->pc = 0x1AA27Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA278u;
            // 0x1aa27c: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3097F0u;
    if (runtime->hasFunction(0x3097F0u)) {
        auto targetFn = runtime->lookupFunction(0x3097F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA280u; }
        if (ctx->pc != 0x1AA280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateNowLoading__FP14NowLoadingInfo_0x3097f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA280u; }
        if (ctx->pc != 0x1AA280u) { return; }
    }
    ctx->pc = 0x1AA280u;
label_1aa280:
    // 0x1aa280: 0xc067b18  jal         func_19EC60
label_1aa284:
    if (ctx->pc == 0x1AA284u) {
        ctx->pc = 0x1AA284u;
            // 0x1aa284: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AA288u;
        goto label_1aa288;
    }
    ctx->pc = 0x1AA280u;
    SET_GPR_U32(ctx, 31, 0x1AA288u);
    ctx->pc = 0x1AA284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA280u;
            // 0x1aa284: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19EC60u;
    if (runtime->hasFunction(0x19EC60u)) {
        auto targetFn = runtime->lookupFunction(0x19EC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA288u; }
        if (ctx->pc != 0x1AA288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetEnvUserDataMan__Fi_0x19ec60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA288u; }
        if (ctx->pc != 0x1AA288u) { return; }
    }
    ctx->pc = 0x1AA288u;
label_1aa288:
    // 0x1aa288: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1aa288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1aa28c:
    // 0x1aa28c: 0xc04e780  jal         func_139E00
label_1aa290:
    if (ctx->pc == 0x1AA290u) {
        ctx->pc = 0x1AA290u;
            // 0x1aa290: 0x2484ea20  addiu       $a0, $a0, -0x15E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
        ctx->pc = 0x1AA294u;
        goto label_1aa294;
    }
    ctx->pc = 0x1AA28Cu;
    SET_GPR_U32(ctx, 31, 0x1AA294u);
    ctx->pc = 0x1AA290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA28Cu;
            // 0x1aa290: 0x2484ea20  addiu       $a0, $a0, -0x15E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA294u; }
        if (ctx->pc != 0x1AA294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA294u; }
        if (ctx->pc != 0x1AA294u) { return; }
    }
    ctx->pc = 0x1AA294u;
label_1aa294:
    // 0x1aa294: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1aa294u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1aa298:
    // 0x1aa298: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1aa298u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa29c:
    // 0x1aa29c: 0x8c23ea44  lw          $v1, -0x15BC($at)
    ctx->pc = 0x1aa29cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961732)));
label_1aa2a0:
    // 0x1aa2a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aa2a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa2a4:
    // 0x1aa2a4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1aa2a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1aa2a8:
    // 0x1aa2a8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x1aa2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_1aa2ac:
    // 0x1aa2ac: 0x8c22ea40  lw          $v0, -0x15C0($at)
    ctx->pc = 0x1aa2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_1aa2b0:
    // 0x1aa2b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1aa2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1aa2b4:
    // 0x1aa2b4: 0xc08d1a4  jal         func_234690
label_1aa2b8:
    if (ctx->pc == 0x1AA2B8u) {
        ctx->pc = 0x1AA2B8u;
            // 0x1aa2b8: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->pc = 0x1AA2BCu;
        goto label_1aa2bc;
    }
    ctx->pc = 0x1AA2B4u;
    SET_GPR_U32(ctx, 31, 0x1AA2BCu);
    ctx->pc = 0x1AA2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA2B4u;
            // 0x1aa2b8: 0xaf828cc0  sw          $v0, -0x7340($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937792), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234690u;
    if (runtime->hasFunction(0x234690u)) {
        auto targetFn = runtime->lookupFunction(0x234690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA2BCu; }
        if (ctx->pc != 0x1AA2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuCfgFileName__Fii_0x234690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA2BCu; }
        if (ctx->pc != 0x1AA2BCu) { return; }
    }
    ctx->pc = 0x1AA2BCu;
label_1aa2bc:
    // 0x1aa2bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1aa2bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aa2c0:
    // 0x1aa2c0: 0xc0521d8  jal         func_148760
label_1aa2c4:
    if (ctx->pc == 0x1AA2C4u) {
        ctx->pc = 0x1AA2C4u;
            // 0x1aa2c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AA2C8u;
        goto label_1aa2c8;
    }
    ctx->pc = 0x1AA2C0u;
    SET_GPR_U32(ctx, 31, 0x1AA2C8u);
    ctx->pc = 0x1AA2C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA2C0u;
            // 0x1aa2c4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148760u;
    if (runtime->hasFunction(0x148760u)) {
        auto targetFn = runtime->lookupFunction(0x148760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA2C8u; }
        if (ctx->pc != 0x1AA2C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCurrentDir__FPc_0x148760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA2C8u; }
        if (ctx->pc != 0x1AA2C8u) { return; }
    }
    ctx->pc = 0x1AA2C8u;
label_1aa2c8:
    // 0x1aa2c8: 0x8f858cc0  lw          $a1, -0x7340($gp)
    ctx->pc = 0x1aa2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937792)));
label_1aa2cc:
    // 0x1aa2cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aa2ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aa2d0:
    // 0x1aa2d0: 0x27868cc4  addiu       $a2, $gp, -0x733C
    ctx->pc = 0x1aa2d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937796));
label_1aa2d4:
    // 0x1aa2d4: 0xc0524dc  jal         func_149370
label_1aa2d8:
    if (ctx->pc == 0x1AA2D8u) {
        ctx->pc = 0x1AA2D8u;
            // 0x1aa2d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AA2DCu;
        goto label_1aa2dc;
    }
    ctx->pc = 0x1AA2D4u;
    SET_GPR_U32(ctx, 31, 0x1AA2DCu);
    ctx->pc = 0x1AA2D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA2D4u;
            // 0x1aa2d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA2DCu; }
        if (ctx->pc != 0x1AA2DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA2DCu; }
        if (ctx->pc != 0x1AA2DCu) { return; }
    }
    ctx->pc = 0x1AA2DCu;
label_1aa2dc:
    // 0x1aa2dc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1aa2e0:
    if (ctx->pc == 0x1AA2E0u) {
        ctx->pc = 0x1AA2E4u;
        goto label_1aa2e4;
    }
    ctx->pc = 0x1AA2DCu;
    {
        const bool branch_taken_0x1aa2dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa2dc) {
            ctx->pc = 0x1AA308u;
            goto label_1aa308;
        }
    }
    ctx->pc = 0x1AA2E4u;
label_1aa2e4:
    // 0x1aa2e4: 0x8f838cc4  lw          $v1, -0x733C($gp)
    ctx->pc = 0x1aa2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937796)));
label_1aa2e8:
    // 0x1aa2e8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1aa2ec:
    if (ctx->pc == 0x1AA2ECu) {
        ctx->pc = 0x1AA2ECu;
            // 0x1aa2ec: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->pc = 0x1AA2F0u;
        goto label_1aa2f0;
    }
    ctx->pc = 0x1AA2E8u;
    {
        const bool branch_taken_0x1aa2e8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1AA2ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA2E8u;
            // 0x1aa2ec: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa2e8) {
            ctx->pc = 0x1AA2F8u;
            goto label_1aa2f8;
        }
    }
    ctx->pc = 0x1AA2F0u;
label_1aa2f0:
    // 0x1aa2f0: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1aa2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_1aa2f4:
    // 0x1aa2f4: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1aa2f4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1aa2f8:
    // 0x1aa2f8: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1aa2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1aa2fc:
    // 0x1aa2fc: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x1aa2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1aa300:
    // 0x1aa300: 0xc04e748  jal         func_139D20
label_1aa304:
    if (ctx->pc == 0x1AA304u) {
        ctx->pc = 0x1AA304u;
            // 0x1aa304: 0x2484ea20  addiu       $a0, $a0, -0x15E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
        ctx->pc = 0x1AA308u;
        goto label_1aa308;
    }
    ctx->pc = 0x1AA300u;
    SET_GPR_U32(ctx, 31, 0x1AA308u);
    ctx->pc = 0x1AA304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA300u;
            // 0x1aa304: 0x2484ea20  addiu       $a0, $a0, -0x15E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA308u; }
        if (ctx->pc != 0x1AA308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA308u; }
        if (ctx->pc != 0x1AA308u) { return; }
    }
    ctx->pc = 0x1AA308u;
label_1aa308:
    // 0x1aa308: 0xc0c2678  jal         func_3099E0
label_1aa30c:
    if (ctx->pc == 0x1AA30Cu) {
        ctx->pc = 0x1AA310u;
        goto label_1aa310;
    }
    ctx->pc = 0x1AA308u;
    SET_GPR_U32(ctx, 31, 0x1AA310u);
    ctx->pc = 0x3099E0u;
    if (runtime->hasFunction(0x3099E0u)) {
        auto targetFn = runtime->lookupFunction(0x3099E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA310u; }
        if (ctx->pc != 0x1AA310u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowLoadingBarStep__Fv_0x3099e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA310u; }
        if (ctx->pc != 0x1AA310u) { return; }
    }
    ctx->pc = 0x1AA310u;
label_1aa310:
    // 0x1aa310: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x1aa310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
label_1aa314:
    // 0x1aa314: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1aa314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1aa318:
    // 0x1aa318: 0xc04cebc  jal         func_133AF0
label_1aa31c:
    if (ctx->pc == 0x1AA31Cu) {
        ctx->pc = 0x1AA31Cu;
            // 0x1aa31c: 0x24a5ea20  addiu       $a1, $a1, -0x15E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961696));
        ctx->pc = 0x1AA320u;
        goto label_1aa320;
    }
    ctx->pc = 0x1AA318u;
    SET_GPR_U32(ctx, 31, 0x1AA320u);
    ctx->pc = 0x1AA31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA318u;
            // 0x1aa31c: 0x24a5ea20  addiu       $a1, $a1, -0x15E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133AF0u;
    if (runtime->hasFunction(0x133AF0u)) {
        auto targetFn = runtime->lookupFunction(0x133AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA320u; }
        if (ctx->pc != 0x1AA320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__13mgCMDTBuilderFP9mgCMemory_0x133af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA320u; }
        if (ctx->pc != 0x1AA320u) { return; }
    }
    ctx->pc = 0x1AA320u;
label_1aa320:
    // 0x1aa320: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1aa320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1aa324:
    // 0x1aa324: 0xc04cf64  jal         func_133D90
label_1aa328:
    if (ctx->pc == 0x1AA328u) {
        ctx->pc = 0x1AA328u;
            // 0x1aa328: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1AA32Cu;
        goto label_1aa32c;
    }
    ctx->pc = 0x1AA324u;
    SET_GPR_U32(ctx, 31, 0x1AA32Cu);
    ctx->pc = 0x1AA328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA324u;
            // 0x1aa328: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133D90u;
    if (runtime->hasFunction(0x133D90u)) {
        auto targetFn = runtime->lookupFunction(0x133D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA32Cu; }
        if (ctx->pc != 0x1AA32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BeginData__13mgCMDTBuilderFi_0x133d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA32Cu; }
        if (ctx->pc != 0x1AA32Cu) { return; }
    }
    ctx->pc = 0x1AA32Cu;
label_1aa32c:
    // 0x1aa32c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1aa32cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1aa330:
    // 0x1aa330: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1aa330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1aa334:
    // 0x1aa334: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x1aa334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_1aa338:
    // 0x1aa338: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1aa338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1aa33c:
    // 0x1aa33c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1aa33cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1aa340:
    // 0x1aa340: 0xc04cf90  jal         func_133E40
label_1aa344:
    if (ctx->pc == 0x1AA344u) {
        ctx->pc = 0x1AA344u;
            // 0x1aa344: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1AA348u;
        goto label_1aa348;
    }
    ctx->pc = 0x1AA340u;
    SET_GPR_U32(ctx, 31, 0x1AA348u);
    ctx->pc = 0x1AA344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA340u;
            // 0x1aa344: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133E40u;
    if (runtime->hasFunction(0x133E40u)) {
        auto targetFn = runtime->lookupFunction(0x133E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA348u; }
        if (ctx->pc != 0x1AA348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetData__13mgCMDTBuilderFffff_0x133e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA348u; }
        if (ctx->pc != 0x1AA348u) { return; }
    }
    ctx->pc = 0x1AA348u;
label_1aa348:
    // 0x1aa348: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1aa348u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1aa34c:
    // 0x1aa34c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1aa34cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1aa350:
    // 0x1aa350: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1aa350u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1aa354:
    // 0x1aa354: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1aa354u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1aa358:
    // 0x1aa358: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1aa358u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1aa35c:
    // 0x1aa35c: 0xc04cf90  jal         func_133E40
label_1aa360:
    if (ctx->pc == 0x1AA360u) {
        ctx->pc = 0x1AA360u;
            // 0x1aa360: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->pc = 0x1AA364u;
        goto label_1aa364;
    }
    ctx->pc = 0x1AA35Cu;
    SET_GPR_U32(ctx, 31, 0x1AA364u);
    ctx->pc = 0x1AA360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA35Cu;
            // 0x1aa360: 0x460073c6  mov.s       $f15, $f14 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[14]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133E40u;
    if (runtime->hasFunction(0x133E40u)) {
        auto targetFn = runtime->lookupFunction(0x133E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA364u; }
        if (ctx->pc != 0x1AA364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetData__13mgCMDTBuilderFffff_0x133e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA364u; }
        if (ctx->pc != 0x1AA364u) { return; }
    }
    ctx->pc = 0x1AA364u;
label_1aa364:
    // 0x1aa364: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1aa364u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1aa368:
    // 0x1aa368: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1aa368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1aa36c:
    // 0x1aa36c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1aa36cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1aa370:
    // 0x1aa370: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1aa370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1aa374:
    // 0x1aa374: 0x0  nop
    ctx->pc = 0x1aa374u;
    // NOP
label_1aa378:
    // 0x1aa378: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1aa378u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_1aa37c:
    // 0x1aa37c: 0xc04cf90  jal         func_133E40
label_1aa380:
    if (ctx->pc == 0x1AA380u) {
        ctx->pc = 0x1AA380u;
            // 0x1aa380: 0x46006bc6  mov.s       $f15, $f13 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x1AA384u;
        goto label_1aa384;
    }
    ctx->pc = 0x1AA37Cu;
    SET_GPR_U32(ctx, 31, 0x1AA384u);
    ctx->pc = 0x1AA380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA37Cu;
            // 0x1aa380: 0x46006bc6  mov.s       $f15, $f13 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133E40u;
    if (runtime->hasFunction(0x133E40u)) {
        auto targetFn = runtime->lookupFunction(0x133E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA384u; }
        if (ctx->pc != 0x1AA384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetData__13mgCMDTBuilderFffff_0x133e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA384u; }
        if (ctx->pc != 0x1AA384u) { return; }
    }
    ctx->pc = 0x1AA384u;
label_1aa384:
    // 0x1aa384: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1aa384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1aa388:
    // 0x1aa388: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1aa388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1aa38c:
    // 0x1aa38c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1aa38cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1aa390:
    // 0x1aa390: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1aa390u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1aa394:
    // 0x1aa394: 0x0  nop
    ctx->pc = 0x1aa394u;
    // NOP
label_1aa398:
    // 0x1aa398: 0x46006b86  mov.s       $f14, $f13
    ctx->pc = 0x1aa398u;
    ctx->f[14] = FPU_MOV_S(ctx->f[13]);
label_1aa39c:
    // 0x1aa39c: 0xc04cf90  jal         func_133E40
label_1aa3a0:
    if (ctx->pc == 0x1AA3A0u) {
        ctx->pc = 0x1AA3A0u;
            // 0x1aa3a0: 0x46006bc6  mov.s       $f15, $f13 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x1AA3A4u;
        goto label_1aa3a4;
    }
    ctx->pc = 0x1AA39Cu;
    SET_GPR_U32(ctx, 31, 0x1AA3A4u);
    ctx->pc = 0x1AA3A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA39Cu;
            // 0x1aa3a0: 0x46006bc6  mov.s       $f15, $f13 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133E40u;
    if (runtime->hasFunction(0x133E40u)) {
        auto targetFn = runtime->lookupFunction(0x133E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA3A4u; }
        if (ctx->pc != 0x1AA3A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetData__13mgCMDTBuilderFffff_0x133e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA3A4u; }
        if (ctx->pc != 0x1AA3A4u) { return; }
    }
    ctx->pc = 0x1AA3A4u;
label_1aa3a4:
    // 0x1aa3a4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1aa3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1aa3a8:
    // 0x1aa3a8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1aa3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1aa3ac:
    // 0x1aa3ac: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1aa3acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1aa3b0:
    // 0x1aa3b0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1aa3b0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1aa3b4:
    // 0x1aa3b4: 0x0  nop
    ctx->pc = 0x1aa3b4u;
    // NOP
label_1aa3b8:
    // 0x1aa3b8: 0x460063c6  mov.s       $f15, $f12
    ctx->pc = 0x1aa3b8u;
    ctx->f[15] = FPU_MOV_S(ctx->f[12]);
label_1aa3bc:
    // 0x1aa3bc: 0xc04cf90  jal         func_133E40
label_1aa3c0:
    if (ctx->pc == 0x1AA3C0u) {
        ctx->pc = 0x1AA3C0u;
            // 0x1aa3c0: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->pc = 0x1AA3C4u;
        goto label_1aa3c4;
    }
    ctx->pc = 0x1AA3BCu;
    SET_GPR_U32(ctx, 31, 0x1AA3C4u);
    ctx->pc = 0x1AA3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA3BCu;
            // 0x1aa3c0: 0x46006b86  mov.s       $f14, $f13 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133E40u;
    if (runtime->hasFunction(0x133E40u)) {
        auto targetFn = runtime->lookupFunction(0x133E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA3C4u; }
        if (ctx->pc != 0x1AA3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetData__13mgCMDTBuilderFffff_0x133e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA3C4u; }
        if (ctx->pc != 0x1AA3C4u) { return; }
    }
    ctx->pc = 0x1AA3C4u;
label_1aa3c4:
    // 0x1aa3c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1aa3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1aa3c8:
    // 0x1aa3c8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1aa3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1aa3cc:
    // 0x1aa3cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1aa3ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1aa3d0:
    // 0x1aa3d0: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x1aa3d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1aa3d4:
    // 0x1aa3d4: 0x0  nop
    ctx->pc = 0x1aa3d4u;
    // NOP
label_1aa3d8:
    // 0x1aa3d8: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1aa3d8u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_1aa3dc:
    // 0x1aa3dc: 0xc04cf90  jal         func_133E40
label_1aa3e0:
    if (ctx->pc == 0x1AA3E0u) {
        ctx->pc = 0x1AA3E0u;
            // 0x1aa3e0: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1AA3E4u;
        goto label_1aa3e4;
    }
    ctx->pc = 0x1AA3DCu;
    SET_GPR_U32(ctx, 31, 0x1AA3E4u);
    ctx->pc = 0x1AA3E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA3DCu;
            // 0x1aa3e0: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133E40u;
    if (runtime->hasFunction(0x133E40u)) {
        auto targetFn = runtime->lookupFunction(0x133E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA3E4u; }
        if (ctx->pc != 0x1AA3E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetData__13mgCMDTBuilderFffff_0x133e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA3E4u; }
        if (ctx->pc != 0x1AA3E4u) { return; }
    }
    ctx->pc = 0x1AA3E4u;
label_1aa3e4:
    // 0x1aa3e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1aa3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1aa3e8:
    // 0x1aa3e8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1aa3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1aa3ec:
    // 0x1aa3ec: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1aa3ecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1aa3f0:
    // 0x1aa3f0: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x1aa3f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1aa3f4:
    // 0x1aa3f4: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1aa3f4u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1aa3f8:
    // 0x1aa3f8: 0xc04cf90  jal         func_133E40
label_1aa3fc:
    if (ctx->pc == 0x1AA3FCu) {
        ctx->pc = 0x1AA3FCu;
            // 0x1aa3fc: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1AA400u;
        goto label_1aa400;
    }
    ctx->pc = 0x1AA3F8u;
    SET_GPR_U32(ctx, 31, 0x1AA400u);
    ctx->pc = 0x1AA3FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA3F8u;
            // 0x1aa3fc: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133E40u;
    if (runtime->hasFunction(0x133E40u)) {
        auto targetFn = runtime->lookupFunction(0x133E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA400u; }
        if (ctx->pc != 0x1AA400u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetData__13mgCMDTBuilderFffff_0x133e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA400u; }
        if (ctx->pc != 0x1AA400u) { return; }
    }
    ctx->pc = 0x1AA400u;
label_1aa400:
    // 0x1aa400: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1aa400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1aa404:
    // 0x1aa404: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1aa404u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1aa408:
    // 0x1aa408: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1aa408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1aa40c:
    // 0x1aa40c: 0x0  nop
    ctx->pc = 0x1aa40cu;
    // NOP
label_1aa410:
    // 0x1aa410: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x1aa410u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_1aa414:
    // 0x1aa414: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x1aa414u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
label_1aa418:
    // 0x1aa418: 0xc04cf90  jal         func_133E40
label_1aa41c:
    if (ctx->pc == 0x1AA41Cu) {
        ctx->pc = 0x1AA41Cu;
            // 0x1aa41c: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1AA420u;
        goto label_1aa420;
    }
    ctx->pc = 0x1AA418u;
    SET_GPR_U32(ctx, 31, 0x1AA420u);
    ctx->pc = 0x1AA41Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA418u;
            // 0x1aa41c: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x133E40u;
    if (runtime->hasFunction(0x133E40u)) {
        auto targetFn = runtime->lookupFunction(0x133E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA420u; }
        if (ctx->pc != 0x1AA420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetData__13mgCMDTBuilderFffff_0x133e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA420u; }
        if (ctx->pc != 0x1AA420u) { return; }
    }
    ctx->pc = 0x1AA420u;
label_1aa420:
    // 0x1aa420: 0xc04cff0  jal         func_133FC0
label_1aa424:
    if (ctx->pc == 0x1AA424u) {
        ctx->pc = 0x1AA424u;
            // 0x1aa424: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x1AA428u;
        goto label_1aa428;
    }
    ctx->pc = 0x1AA420u;
    SET_GPR_U32(ctx, 31, 0x1AA428u);
    ctx->pc = 0x1AA424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA420u;
            // 0x1aa424: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FC0u;
    if (runtime->hasFunction(0x133FC0u)) {
        auto targetFn = runtime->lookupFunction(0x133FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA428u; }
        if (ctx->pc != 0x1AA428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndData__13mgCMDTBuilderFv_0x133fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA428u; }
        if (ctx->pc != 0x1AA428u) { return; }
    }
    ctx->pc = 0x1AA428u;
label_1aa428:
    // 0x1aa428: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1aa428u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1aa42c:
    // 0x1aa42c: 0xc04cf64  jal         func_133D90
label_1aa430:
    if (ctx->pc == 0x1AA430u) {
        ctx->pc = 0x1AA430u;
            // 0x1aa430: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1AA434u;
        goto label_1aa434;
    }
    ctx->pc = 0x1AA42Cu;
    SET_GPR_U32(ctx, 31, 0x1AA434u);
    ctx->pc = 0x1AA430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA42Cu;
            // 0x1aa430: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133D90u;
    if (runtime->hasFunction(0x133D90u)) {
        auto targetFn = runtime->lookupFunction(0x133D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA434u; }
        if (ctx->pc != 0x1AA434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BeginData__13mgCMDTBuilderFi_0x133d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA434u; }
        if (ctx->pc != 0x1AA434u) { return; }
    }
    ctx->pc = 0x1AA434u;
label_1aa434:
    // 0x1aa434: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1aa434u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1aa438:
    // 0x1aa438: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x1aa438u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_1aa43c:
    // 0x1aa43c: 0x24426910  addiu       $v0, $v0, 0x6910
    ctx->pc = 0x1aa43cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26896));
label_1aa440:
    // 0x1aa440: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x1aa440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_1aa444:
    // 0x1aa444: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1aa444u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1aa448:
    // 0x1aa448: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1aa448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1aa44c:
    // 0x1aa44c: 0x24c661e8  addiu       $a2, $a2, 0x61E8
    ctx->pc = 0x1aa44cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25064));
label_1aa450:
    // 0x1aa450: 0xc04cfa8  jal         func_133EA0
label_1aa454:
    if (ctx->pc == 0x1AA454u) {
        ctx->pc = 0x1AA454u;
            // 0x1aa454: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
        ctx->pc = 0x1AA458u;
        goto label_1aa458;
    }
    ctx->pc = 0x1AA450u;
    SET_GPR_U32(ctx, 31, 0x1AA458u);
    ctx->pc = 0x1AA454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA450u;
            // 0x1aa454: 0x7ca20000  sq          $v0, 0x0($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133EA0u;
    if (runtime->hasFunction(0x133EA0u)) {
        auto targetFn = runtime->lookupFunction(0x133EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA458u; }
        if (ctx->pc != 0x1AA458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMaterial__13mgCMDTBuilderFPfPc_0x133ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA458u; }
        if (ctx->pc != 0x1AA458u) { return; }
    }
    ctx->pc = 0x1AA458u;
label_1aa458:
    // 0x1aa458: 0xc04cff0  jal         func_133FC0
label_1aa45c:
    if (ctx->pc == 0x1AA45Cu) {
        ctx->pc = 0x1AA45Cu;
            // 0x1aa45c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x1AA460u;
        goto label_1aa460;
    }
    ctx->pc = 0x1AA458u;
    SET_GPR_U32(ctx, 31, 0x1AA460u);
    ctx->pc = 0x1AA45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA458u;
            // 0x1aa45c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FC0u;
    if (runtime->hasFunction(0x133FC0u)) {
        auto targetFn = runtime->lookupFunction(0x133FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA460u; }
        if (ctx->pc != 0x1AA460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndData__13mgCMDTBuilderFv_0x133fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA460u; }
        if (ctx->pc != 0x1AA460u) { return; }
    }
    ctx->pc = 0x1AA460u;
label_1aa460:
    // 0x1aa460: 0xc04d034  jal         func_1340D0
label_1aa464:
    if (ctx->pc == 0x1AA464u) {
        ctx->pc = 0x1AA464u;
            // 0x1aa464: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x1AA468u;
        goto label_1aa468;
    }
    ctx->pc = 0x1AA460u;
    SET_GPR_U32(ctx, 31, 0x1AA468u);
    ctx->pc = 0x1AA464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA460u;
            // 0x1aa464: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1340D0u;
    if (runtime->hasFunction(0x1340D0u)) {
        auto targetFn = runtime->lookupFunction(0x1340D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA468u; }
        if (ctx->pc != 0x1AA468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BeginFaces__13mgCMDTBuilderFv_0x1340d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA468u; }
        if (ctx->pc != 0x1AA468u) { return; }
    }
    ctx->pc = 0x1AA468u;
label_1aa468:
    // 0x1aa468: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1aa468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1aa46c:
    // 0x1aa46c: 0x24050214  addiu       $a1, $zero, 0x214
    ctx->pc = 0x1aa46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 532));
label_1aa470:
    // 0x1aa470: 0xc04d060  jal         func_134180
label_1aa474:
    if (ctx->pc == 0x1AA474u) {
        ctx->pc = 0x1AA474u;
            // 0x1aa474: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AA478u;
        goto label_1aa478;
    }
    ctx->pc = 0x1AA470u;
    SET_GPR_U32(ctx, 31, 0x1AA478u);
    ctx->pc = 0x1AA474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA470u;
            // 0x1aa474: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134180u;
    if (runtime->hasFunction(0x134180u)) {
        auto targetFn = runtime->lookupFunction(0x134180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA478u; }
        if (ctx->pc != 0x1AA478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BeginPrim__13mgCMDTBuilderFii_0x134180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA478u; }
        if (ctx->pc != 0x1AA478u) { return; }
    }
    ctx->pc = 0x1AA478u;
label_1aa478:
    // 0x1aa478: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1aa478u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1aa47c:
    // 0x1aa47c: 0xc04d084  jal         func_134210
label_1aa480:
    if (ctx->pc == 0x1AA480u) {
        ctx->pc = 0x1AA480u;
            // 0x1aa480: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AA484u;
        goto label_1aa484;
    }
    ctx->pc = 0x1AA47Cu;
    SET_GPR_U32(ctx, 31, 0x1AA484u);
    ctx->pc = 0x1AA480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA47Cu;
            // 0x1aa480: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134210u;
    if (runtime->hasFunction(0x134210u)) {
        auto targetFn = runtime->lookupFunction(0x134210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA484u; }
        if (ctx->pc != 0x1AA484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFace__13mgCMDTBuilderFi_0x134210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA484u; }
        if (ctx->pc != 0x1AA484u) { return; }
    }
    ctx->pc = 0x1AA484u;
label_1aa484:
    // 0x1aa484: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1aa484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1aa488:
    // 0x1aa488: 0xc04d084  jal         func_134210
label_1aa48c:
    if (ctx->pc == 0x1AA48Cu) {
        ctx->pc = 0x1AA48Cu;
            // 0x1aa48c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1AA490u;
        goto label_1aa490;
    }
    ctx->pc = 0x1AA488u;
    SET_GPR_U32(ctx, 31, 0x1AA490u);
    ctx->pc = 0x1AA48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA488u;
            // 0x1aa48c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134210u;
    if (runtime->hasFunction(0x134210u)) {
        auto targetFn = runtime->lookupFunction(0x134210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA490u; }
        if (ctx->pc != 0x1AA490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFace__13mgCMDTBuilderFi_0x134210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA490u; }
        if (ctx->pc != 0x1AA490u) { return; }
    }
    ctx->pc = 0x1AA490u;
label_1aa490:
    // 0x1aa490: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1aa490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1aa494:
    // 0x1aa494: 0xc04d084  jal         func_134210
label_1aa498:
    if (ctx->pc == 0x1AA498u) {
        ctx->pc = 0x1AA498u;
            // 0x1aa498: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1AA49Cu;
        goto label_1aa49c;
    }
    ctx->pc = 0x1AA494u;
    SET_GPR_U32(ctx, 31, 0x1AA49Cu);
    ctx->pc = 0x1AA498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA494u;
            // 0x1aa498: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134210u;
    if (runtime->hasFunction(0x134210u)) {
        auto targetFn = runtime->lookupFunction(0x134210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA49Cu; }
        if (ctx->pc != 0x1AA49Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFace__13mgCMDTBuilderFi_0x134210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA49Cu; }
        if (ctx->pc != 0x1AA49Cu) { return; }
    }
    ctx->pc = 0x1AA49Cu;
label_1aa49c:
    // 0x1aa49c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1aa49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1aa4a0:
    // 0x1aa4a0: 0xc04d084  jal         func_134210
label_1aa4a4:
    if (ctx->pc == 0x1AA4A4u) {
        ctx->pc = 0x1AA4A4u;
            // 0x1aa4a4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1AA4A8u;
        goto label_1aa4a8;
    }
    ctx->pc = 0x1AA4A0u;
    SET_GPR_U32(ctx, 31, 0x1AA4A8u);
    ctx->pc = 0x1AA4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA4A0u;
            // 0x1aa4a4: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134210u;
    if (runtime->hasFunction(0x134210u)) {
        auto targetFn = runtime->lookupFunction(0x134210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA4A8u; }
        if (ctx->pc != 0x1AA4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFace__13mgCMDTBuilderFi_0x134210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA4A8u; }
        if (ctx->pc != 0x1AA4A8u) { return; }
    }
    ctx->pc = 0x1AA4A8u;
label_1aa4a8:
    // 0x1aa4a8: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1aa4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1aa4ac:
    // 0x1aa4ac: 0xc04d084  jal         func_134210
label_1aa4b0:
    if (ctx->pc == 0x1AA4B0u) {
        ctx->pc = 0x1AA4B0u;
            // 0x1aa4b0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x1AA4B4u;
        goto label_1aa4b4;
    }
    ctx->pc = 0x1AA4ACu;
    SET_GPR_U32(ctx, 31, 0x1AA4B4u);
    ctx->pc = 0x1AA4B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA4ACu;
            // 0x1aa4b0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134210u;
    if (runtime->hasFunction(0x134210u)) {
        auto targetFn = runtime->lookupFunction(0x134210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA4B4u; }
        if (ctx->pc != 0x1AA4B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFace__13mgCMDTBuilderFi_0x134210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA4B4u; }
        if (ctx->pc != 0x1AA4B4u) { return; }
    }
    ctx->pc = 0x1AA4B4u;
label_1aa4b4:
    // 0x1aa4b4: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1aa4b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1aa4b8:
    // 0x1aa4b8: 0xc04d084  jal         func_134210
label_1aa4bc:
    if (ctx->pc == 0x1AA4BCu) {
        ctx->pc = 0x1AA4BCu;
            // 0x1aa4bc: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x1AA4C0u;
        goto label_1aa4c0;
    }
    ctx->pc = 0x1AA4B8u;
    SET_GPR_U32(ctx, 31, 0x1AA4C0u);
    ctx->pc = 0x1AA4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA4B8u;
            // 0x1aa4bc: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134210u;
    if (runtime->hasFunction(0x134210u)) {
        auto targetFn = runtime->lookupFunction(0x134210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA4C0u; }
        if (ctx->pc != 0x1AA4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFace__13mgCMDTBuilderFi_0x134210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA4C0u; }
        if (ctx->pc != 0x1AA4C0u) { return; }
    }
    ctx->pc = 0x1AA4C0u;
label_1aa4c0:
    // 0x1aa4c0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1aa4c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1aa4c4:
    // 0x1aa4c4: 0xc04d084  jal         func_134210
label_1aa4c8:
    if (ctx->pc == 0x1AA4C8u) {
        ctx->pc = 0x1AA4C8u;
            // 0x1aa4c8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1AA4CCu;
        goto label_1aa4cc;
    }
    ctx->pc = 0x1AA4C4u;
    SET_GPR_U32(ctx, 31, 0x1AA4CCu);
    ctx->pc = 0x1AA4C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA4C4u;
            // 0x1aa4c8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134210u;
    if (runtime->hasFunction(0x134210u)) {
        auto targetFn = runtime->lookupFunction(0x134210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA4CCu; }
        if (ctx->pc != 0x1AA4CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFace__13mgCMDTBuilderFi_0x134210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA4CCu; }
        if (ctx->pc != 0x1AA4CCu) { return; }
    }
    ctx->pc = 0x1AA4CCu;
label_1aa4cc:
    // 0x1aa4cc: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1aa4ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1aa4d0:
    // 0x1aa4d0: 0xc04d084  jal         func_134210
label_1aa4d4:
    if (ctx->pc == 0x1AA4D4u) {
        ctx->pc = 0x1AA4D4u;
            // 0x1aa4d4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1AA4D8u;
        goto label_1aa4d8;
    }
    ctx->pc = 0x1AA4D0u;
    SET_GPR_U32(ctx, 31, 0x1AA4D8u);
    ctx->pc = 0x1AA4D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA4D0u;
            // 0x1aa4d4: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134210u;
    if (runtime->hasFunction(0x134210u)) {
        auto targetFn = runtime->lookupFunction(0x134210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA4D8u; }
        if (ctx->pc != 0x1AA4D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFace__13mgCMDTBuilderFi_0x134210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA4D8u; }
        if (ctx->pc != 0x1AA4D8u) { return; }
    }
    ctx->pc = 0x1AA4D8u;
label_1aa4d8:
    // 0x1aa4d8: 0xc04d090  jal         func_134240
label_1aa4dc:
    if (ctx->pc == 0x1AA4DCu) {
        ctx->pc = 0x1AA4DCu;
            // 0x1aa4dc: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x1AA4E0u;
        goto label_1aa4e0;
    }
    ctx->pc = 0x1AA4D8u;
    SET_GPR_U32(ctx, 31, 0x1AA4E0u);
    ctx->pc = 0x1AA4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA4D8u;
            // 0x1aa4dc: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134240u;
    if (runtime->hasFunction(0x134240u)) {
        auto targetFn = runtime->lookupFunction(0x134240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA4E0u; }
        if (ctx->pc != 0x1AA4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndPrim__13mgCMDTBuilderFv_0x134240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA4E0u; }
        if (ctx->pc != 0x1AA4E0u) { return; }
    }
    ctx->pc = 0x1AA4E0u;
label_1aa4e0:
    // 0x1aa4e0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1aa4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1aa4e4:
    // 0x1aa4e4: 0x24050214  addiu       $a1, $zero, 0x214
    ctx->pc = 0x1aa4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 532));
label_1aa4e8:
    // 0x1aa4e8: 0xc04d060  jal         func_134180
label_1aa4ec:
    if (ctx->pc == 0x1AA4ECu) {
        ctx->pc = 0x1AA4ECu;
            // 0x1aa4ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AA4F0u;
        goto label_1aa4f0;
    }
    ctx->pc = 0x1AA4E8u;
    SET_GPR_U32(ctx, 31, 0x1AA4F0u);
    ctx->pc = 0x1AA4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA4E8u;
            // 0x1aa4ec: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134180u;
    if (runtime->hasFunction(0x134180u)) {
        auto targetFn = runtime->lookupFunction(0x134180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA4F0u; }
        if (ctx->pc != 0x1AA4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        BeginPrim__13mgCMDTBuilderFii_0x134180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA4F0u; }
        if (ctx->pc != 0x1AA4F0u) { return; }
    }
    ctx->pc = 0x1AA4F0u;
label_1aa4f0:
    // 0x1aa4f0: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1aa4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1aa4f4:
    // 0x1aa4f4: 0xc04d084  jal         func_134210
label_1aa4f8:
    if (ctx->pc == 0x1AA4F8u) {
        ctx->pc = 0x1AA4F8u;
            // 0x1aa4f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1AA4FCu;
        goto label_1aa4fc;
    }
    ctx->pc = 0x1AA4F4u;
    SET_GPR_U32(ctx, 31, 0x1AA4FCu);
    ctx->pc = 0x1AA4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA4F4u;
            // 0x1aa4f8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134210u;
    if (runtime->hasFunction(0x134210u)) {
        auto targetFn = runtime->lookupFunction(0x134210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA4FCu; }
        if (ctx->pc != 0x1AA4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFace__13mgCMDTBuilderFi_0x134210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA4FCu; }
        if (ctx->pc != 0x1AA4FCu) { return; }
    }
    ctx->pc = 0x1AA4FCu;
label_1aa4fc:
    // 0x1aa4fc: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1aa4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1aa500:
    // 0x1aa500: 0xc04d084  jal         func_134210
label_1aa504:
    if (ctx->pc == 0x1AA504u) {
        ctx->pc = 0x1AA504u;
            // 0x1aa504: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x1AA508u;
        goto label_1aa508;
    }
    ctx->pc = 0x1AA500u;
    SET_GPR_U32(ctx, 31, 0x1AA508u);
    ctx->pc = 0x1AA504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA500u;
            // 0x1aa504: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134210u;
    if (runtime->hasFunction(0x134210u)) {
        auto targetFn = runtime->lookupFunction(0x134210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA508u; }
        if (ctx->pc != 0x1AA508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFace__13mgCMDTBuilderFi_0x134210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA508u; }
        if (ctx->pc != 0x1AA508u) { return; }
    }
    ctx->pc = 0x1AA508u;
label_1aa508:
    // 0x1aa508: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1aa508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1aa50c:
    // 0x1aa50c: 0xc04d084  jal         func_134210
label_1aa510:
    if (ctx->pc == 0x1AA510u) {
        ctx->pc = 0x1AA510u;
            // 0x1aa510: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AA514u;
        goto label_1aa514;
    }
    ctx->pc = 0x1AA50Cu;
    SET_GPR_U32(ctx, 31, 0x1AA514u);
    ctx->pc = 0x1AA510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA50Cu;
            // 0x1aa510: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134210u;
    if (runtime->hasFunction(0x134210u)) {
        auto targetFn = runtime->lookupFunction(0x134210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA514u; }
        if (ctx->pc != 0x1AA514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFace__13mgCMDTBuilderFi_0x134210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA514u; }
        if (ctx->pc != 0x1AA514u) { return; }
    }
    ctx->pc = 0x1AA514u;
label_1aa514:
    // 0x1aa514: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1aa514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1aa518:
    // 0x1aa518: 0xc04d084  jal         func_134210
label_1aa51c:
    if (ctx->pc == 0x1AA51Cu) {
        ctx->pc = 0x1AA51Cu;
            // 0x1aa51c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1AA520u;
        goto label_1aa520;
    }
    ctx->pc = 0x1AA518u;
    SET_GPR_U32(ctx, 31, 0x1AA520u);
    ctx->pc = 0x1AA51Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA518u;
            // 0x1aa51c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134210u;
    if (runtime->hasFunction(0x134210u)) {
        auto targetFn = runtime->lookupFunction(0x134210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA520u; }
        if (ctx->pc != 0x1AA520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFace__13mgCMDTBuilderFi_0x134210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA520u; }
        if (ctx->pc != 0x1AA520u) { return; }
    }
    ctx->pc = 0x1AA520u;
label_1aa520:
    // 0x1aa520: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1aa520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1aa524:
    // 0x1aa524: 0xc04d084  jal         func_134210
label_1aa528:
    if (ctx->pc == 0x1AA528u) {
        ctx->pc = 0x1AA528u;
            // 0x1aa528: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1AA52Cu;
        goto label_1aa52c;
    }
    ctx->pc = 0x1AA524u;
    SET_GPR_U32(ctx, 31, 0x1AA52Cu);
    ctx->pc = 0x1AA528u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA524u;
            // 0x1aa528: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134210u;
    if (runtime->hasFunction(0x134210u)) {
        auto targetFn = runtime->lookupFunction(0x134210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA52Cu; }
        if (ctx->pc != 0x1AA52Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFace__13mgCMDTBuilderFi_0x134210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA52Cu; }
        if (ctx->pc != 0x1AA52Cu) { return; }
    }
    ctx->pc = 0x1AA52Cu;
label_1aa52c:
    // 0x1aa52c: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1aa52cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1aa530:
    // 0x1aa530: 0xc04d084  jal         func_134210
label_1aa534:
    if (ctx->pc == 0x1AA534u) {
        ctx->pc = 0x1AA534u;
            // 0x1aa534: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x1AA538u;
        goto label_1aa538;
    }
    ctx->pc = 0x1AA530u;
    SET_GPR_U32(ctx, 31, 0x1AA538u);
    ctx->pc = 0x1AA534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA530u;
            // 0x1aa534: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134210u;
    if (runtime->hasFunction(0x134210u)) {
        auto targetFn = runtime->lookupFunction(0x134210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA538u; }
        if (ctx->pc != 0x1AA538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFace__13mgCMDTBuilderFi_0x134210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA538u; }
        if (ctx->pc != 0x1AA538u) { return; }
    }
    ctx->pc = 0x1AA538u;
label_1aa538:
    // 0x1aa538: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1aa538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1aa53c:
    // 0x1aa53c: 0xc04d084  jal         func_134210
label_1aa540:
    if (ctx->pc == 0x1AA540u) {
        ctx->pc = 0x1AA540u;
            // 0x1aa540: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1AA544u;
        goto label_1aa544;
    }
    ctx->pc = 0x1AA53Cu;
    SET_GPR_U32(ctx, 31, 0x1AA544u);
    ctx->pc = 0x1AA540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA53Cu;
            // 0x1aa540: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134210u;
    if (runtime->hasFunction(0x134210u)) {
        auto targetFn = runtime->lookupFunction(0x134210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA544u; }
        if (ctx->pc != 0x1AA544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFace__13mgCMDTBuilderFi_0x134210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA544u; }
        if (ctx->pc != 0x1AA544u) { return; }
    }
    ctx->pc = 0x1AA544u;
label_1aa544:
    // 0x1aa544: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1aa544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1aa548:
    // 0x1aa548: 0xc04d084  jal         func_134210
label_1aa54c:
    if (ctx->pc == 0x1AA54Cu) {
        ctx->pc = 0x1AA54Cu;
            // 0x1aa54c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x1AA550u;
        goto label_1aa550;
    }
    ctx->pc = 0x1AA548u;
    SET_GPR_U32(ctx, 31, 0x1AA550u);
    ctx->pc = 0x1AA54Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA548u;
            // 0x1aa54c: 0x24050007  addiu       $a1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134210u;
    if (runtime->hasFunction(0x134210u)) {
        auto targetFn = runtime->lookupFunction(0x134210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA550u; }
        if (ctx->pc != 0x1AA550u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddFace__13mgCMDTBuilderFi_0x134210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA550u; }
        if (ctx->pc != 0x1AA550u) { return; }
    }
    ctx->pc = 0x1AA550u;
label_1aa550:
    // 0x1aa550: 0xc04d090  jal         func_134240
label_1aa554:
    if (ctx->pc == 0x1AA554u) {
        ctx->pc = 0x1AA554u;
            // 0x1aa554: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x1AA558u;
        goto label_1aa558;
    }
    ctx->pc = 0x1AA550u;
    SET_GPR_U32(ctx, 31, 0x1AA558u);
    ctx->pc = 0x1AA554u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA550u;
            // 0x1aa554: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134240u;
    if (runtime->hasFunction(0x134240u)) {
        auto targetFn = runtime->lookupFunction(0x134240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA558u; }
        if (ctx->pc != 0x1AA558u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndPrim__13mgCMDTBuilderFv_0x134240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA558u; }
        if (ctx->pc != 0x1AA558u) { return; }
    }
    ctx->pc = 0x1AA558u;
label_1aa558:
    // 0x1aa558: 0xc04d050  jal         func_134140
label_1aa55c:
    if (ctx->pc == 0x1AA55Cu) {
        ctx->pc = 0x1AA55Cu;
            // 0x1aa55c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x1AA560u;
        goto label_1aa560;
    }
    ctx->pc = 0x1AA558u;
    SET_GPR_U32(ctx, 31, 0x1AA560u);
    ctx->pc = 0x1AA55Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA558u;
            // 0x1aa55c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134140u;
    if (runtime->hasFunction(0x134140u)) {
        auto targetFn = runtime->lookupFunction(0x134140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA560u; }
        if (ctx->pc != 0x1AA560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EndFaces__13mgCMDTBuilderFv_0x134140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA560u; }
        if (ctx->pc != 0x1AA560u) { return; }
    }
    ctx->pc = 0x1AA560u;
label_1aa560:
    // 0x1aa560: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1aa560u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1aa564:
    // 0x1aa564: 0xc04d948  jal         func_136520
label_1aa568:
    if (ctx->pc == 0x1AA568u) {
        ctx->pc = 0x1AA568u;
            // 0x1aa568: 0x2484efc0  addiu       $a0, $a0, -0x1040 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963136));
        ctx->pc = 0x1AA56Cu;
        goto label_1aa56c;
    }
    ctx->pc = 0x1AA564u;
    SET_GPR_U32(ctx, 31, 0x1AA56Cu);
    ctx->pc = 0x1AA568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA564u;
            // 0x1aa568: 0x2484efc0  addiu       $a0, $a0, -0x1040 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136520u;
    if (runtime->hasFunction(0x136520u)) {
        auto targetFn = runtime->lookupFunction(0x136520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA56Cu; }
        if (ctx->pc != 0x1AA56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__8mgCFrameFv_0x136520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA56Cu; }
        if (ctx->pc != 0x1AA56Cu) { return; }
    }
    ctx->pc = 0x1AA56Cu;
label_1aa56c:
    // 0x1aa56c: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x1aa56cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
label_1aa570:
    // 0x1aa570: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aa570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa574:
    // 0x1aa574: 0xc049c86  jal         func_127218
label_1aa578:
    if (ctx->pc == 0x1AA578u) {
        ctx->pc = 0x1AA578u;
            // 0x1aa578: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x1AA57Cu;
        goto label_1aa57c;
    }
    ctx->pc = 0x1AA574u;
    SET_GPR_U32(ctx, 31, 0x1AA57Cu);
    ctx->pc = 0x1AA578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA574u;
            // 0x1aa578: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA57Cu; }
        if (ctx->pc != 0x1AA57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA57Cu; }
        if (ctx->pc != 0x1AA57Cu) { return; }
    }
    ctx->pc = 0x1AA57Cu;
label_1aa57c:
    // 0x1aa57c: 0x3c0301ea  lui         $v1, 0x1EA
    ctx->pc = 0x1aa57cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)490 << 16));
label_1aa580:
    // 0x1aa580: 0x3c0201ea  lui         $v0, 0x1EA
    ctx->pc = 0x1aa580u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)490 << 16));
label_1aa584:
    // 0x1aa584: 0x2463ea20  addiu       $v1, $v1, -0x15E0
    ctx->pc = 0x1aa584u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961696));
label_1aa588:
    // 0x1aa588: 0x2442e960  addiu       $v0, $v0, -0x16A0
    ctx->pc = 0x1aa588u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961504));
label_1aa58c:
    // 0x1aa58c: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x1aa58cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
label_1aa590:
    // 0x1aa590: 0x3c0601ea  lui         $a2, 0x1EA
    ctx->pc = 0x1aa590u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)490 << 16));
label_1aa594:
    // 0x1aa594: 0xafa301b4  sw          $v1, 0x1B4($sp)
    ctx->pc = 0x1aa594u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 436), GPR_U32(ctx, 3));
label_1aa598:
    // 0x1aa598: 0x27a40110  addiu       $a0, $sp, 0x110
    ctx->pc = 0x1aa598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1aa59c:
    // 0x1aa59c: 0xafa201b8  sw          $v0, 0x1B8($sp)
    ctx->pc = 0x1aa59cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 440), GPR_U32(ctx, 2));
label_1aa5a0:
    // 0x1aa5a0: 0x24a5efc0  addiu       $a1, $a1, -0x1040
    ctx->pc = 0x1aa5a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963136));
label_1aa5a4:
    // 0x1aa5a4: 0x24c6ef70  addiu       $a2, $a2, -0x1090
    ctx->pc = 0x1aa5a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963056));
label_1aa5a8:
    // 0x1aa5a8: 0xc04cf04  jal         func_133C10
label_1aa5ac:
    if (ctx->pc == 0x1AA5ACu) {
        ctx->pc = 0x1AA5ACu;
            // 0x1aa5ac: 0x27a701b0  addiu       $a3, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->pc = 0x1AA5B0u;
        goto label_1aa5b0;
    }
    ctx->pc = 0x1AA5A8u;
    SET_GPR_U32(ctx, 31, 0x1AA5B0u);
    ctx->pc = 0x1AA5ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA5A8u;
            // 0x1aa5ac: 0x27a701b0  addiu       $a3, $sp, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133C10u;
    if (runtime->hasFunction(0x133C10u)) {
        auto targetFn = runtime->lookupFunction(0x133C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA5B0u; }
        if (ctx->pc != 0x1AA5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__13mgCMDTBuilderFP8mgCFrameP12mgCVisualMDTP10mgLoadData_0x133c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA5B0u; }
        if (ctx->pc != 0x1AA5B0u) { return; }
    }
    ctx->pc = 0x1AA5B0u;
label_1aa5b0:
    // 0x1aa5b0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1aa5b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1aa5b4:
    // 0x1aa5b4: 0x8c24f0b4  lw          $a0, -0xF4C($at)
    ctx->pc = 0x1aa5b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963380)));
label_1aa5b8:
    // 0x1aa5b8: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_1aa5bc:
    if (ctx->pc == 0x1AA5BCu) {
        ctx->pc = 0x1AA5BCu;
            // 0x1aa5bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1AA5C0u;
        goto label_1aa5c0;
    }
    ctx->pc = 0x1AA5B8u;
    {
        const bool branch_taken_0x1aa5b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA5B8u;
            // 0x1aa5bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa5b8) {
            ctx->pc = 0x1AA5D4u;
            goto label_1aa5d4;
        }
    }
    ctx->pc = 0x1AA5C0u;
label_1aa5c0:
    // 0x1aa5c0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1aa5c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1aa5c4:
    // 0x1aa5c4: 0xac82001c  sw          $v0, 0x1C($a0)
    ctx->pc = 0x1aa5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 2));
label_1aa5c8:
    // 0x1aa5c8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1aa5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1aa5cc:
    // 0x1aa5cc: 0x8c22f0b4  lw          $v0, -0xF4C($at)
    ctx->pc = 0x1aa5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294963380)));
label_1aa5d0:
    // 0x1aa5d0: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x1aa5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
label_1aa5d4:
    // 0x1aa5d4: 0x8f858ac0  lw          $a1, -0x7540($gp)
    ctx->pc = 0x1aa5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
label_1aa5d8:
    // 0x1aa5d8: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1aa5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_1aa5dc:
    // 0x1aa5dc: 0x248461f0  addiu       $a0, $a0, 0x61F0
    ctx->pc = 0x1aa5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25072));
label_1aa5e0:
    // 0x1aa5e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aa5e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa5e4:
    // 0x1aa5e4: 0xc0524dc  jal         func_149370
label_1aa5e8:
    if (ctx->pc == 0x1AA5E8u) {
        ctx->pc = 0x1AA5E8u;
            // 0x1aa5e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AA5ECu;
        goto label_1aa5ec;
    }
    ctx->pc = 0x1AA5E4u;
    SET_GPR_U32(ctx, 31, 0x1AA5ECu);
    ctx->pc = 0x1AA5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA5E4u;
            // 0x1aa5e8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA5ECu; }
        if (ctx->pc != 0x1AA5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA5ECu; }
        if (ctx->pc != 0x1AA5ECu) { return; }
    }
    ctx->pc = 0x1AA5ECu;
label_1aa5ec:
    // 0x1aa5ec: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1aa5f0:
    if (ctx->pc == 0x1AA5F0u) {
        ctx->pc = 0x1AA5F4u;
        goto label_1aa5f4;
    }
    ctx->pc = 0x1AA5ECu;
    {
        const bool branch_taken_0x1aa5ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa5ec) {
            ctx->pc = 0x1AA650u;
            goto label_1aa650;
        }
    }
    ctx->pc = 0x1AA5F4u;
label_1aa5f4:
    // 0x1aa5f4: 0x8f848ac0  lw          $a0, -0x7540($gp)
    ctx->pc = 0x1aa5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
label_1aa5f8:
    // 0x1aa5f8: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x1aa5f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
label_1aa5fc:
    // 0x1aa5fc: 0x24a5ea20  addiu       $a1, $a1, -0x15E0
    ctx->pc = 0x1aa5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961696));
label_1aa600:
    // 0x1aa600: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aa600u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa604:
    // 0x1aa604: 0xc04cb78  jal         func_132DE0
label_1aa608:
    if (ctx->pc == 0x1AA608u) {
        ctx->pc = 0x1AA608u;
            // 0x1aa608: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AA60Cu;
        goto label_1aa60c;
    }
    ctx->pc = 0x1AA604u;
    SET_GPR_U32(ctx, 31, 0x1AA60Cu);
    ctx->pc = 0x1AA608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA604u;
            // 0x1aa608: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DE0u;
    if (runtime->hasFunction(0x132DE0u)) {
        auto targetFn = runtime->lookupFunction(0x132DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA60Cu; }
        if (ctx->pc != 0x1AA60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgLoadMDSFile__FP10MDS_HEADERP9mgCMemoryP18mgCreateVisualTypeP17mgCTextureManager_0x132de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA60Cu; }
        if (ctx->pc != 0x1AA60Cu) { return; }
    }
    ctx->pc = 0x1AA60Cu;
label_1aa60c:
    // 0x1aa60c: 0xaf828c4c  sw          $v0, -0x73B4($gp)
    ctx->pc = 0x1aa60cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937676), GPR_U32(ctx, 2));
label_1aa610:
    // 0x1aa610: 0xc04d6d8  jal         func_135B60
label_1aa614:
    if (ctx->pc == 0x1AA614u) {
        ctx->pc = 0x1AA614u;
            // 0x1aa614: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x1AA618u;
        goto label_1aa618;
    }
    ctx->pc = 0x1AA610u;
    SET_GPR_U32(ctx, 31, 0x1AA618u);
    ctx->pc = 0x1AA614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA610u;
            // 0x1aa614: 0x27a401f0  addiu       $a0, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135B60u;
    if (runtime->hasFunction(0x135B60u)) {
        auto targetFn = runtime->lookupFunction(0x135B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA618u; }
        if (ctx->pc != 0x1AA618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__12mgCFrameAttrFv_0x135b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA618u; }
        if (ctx->pc != 0x1AA618u) { return; }
    }
    ctx->pc = 0x1AA618u;
label_1aa618:
    // 0x1aa618: 0x8f848c4c  lw          $a0, -0x73B4($gp)
    ctx->pc = 0x1aa618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937676)));
label_1aa61c:
    // 0x1aa61c: 0x3c03437f  lui         $v1, 0x437F
    ctx->pc = 0x1aa61cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17279 << 16));
label_1aa620:
    // 0x1aa620: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1aa620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1aa624:
    // 0x1aa624: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1aa624u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aa628:
    // 0x1aa628: 0xafa20278  sw          $v0, 0x278($sp)
    ctx->pc = 0x1aa628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 2));
label_1aa62c:
    // 0x1aa62c: 0x27a501f0  addiu       $a1, $sp, 0x1F0
    ctx->pc = 0x1aa62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
label_1aa630:
    // 0x1aa630: 0x3c024300  lui         $v0, 0x4300
    ctx->pc = 0x1aa630u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17152 << 16));
label_1aa634:
    // 0x1aa634: 0xafa60250  sw          $a2, 0x250($sp)
    ctx->pc = 0x1aa634u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 592), GPR_U32(ctx, 6));
label_1aa638:
    // 0x1aa638: 0xafa2026c  sw          $v0, 0x26C($sp)
    ctx->pc = 0x1aa638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 620), GPR_U32(ctx, 2));
label_1aa63c:
    // 0x1aa63c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1aa63cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa640:
    // 0x1aa640: 0xafa30260  sw          $v1, 0x260($sp)
    ctx->pc = 0x1aa640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 3));
label_1aa644:
    // 0x1aa644: 0xafa30264  sw          $v1, 0x264($sp)
    ctx->pc = 0x1aa644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 612), GPR_U32(ctx, 3));
label_1aa648:
    // 0x1aa648: 0xc04de54  jal         func_137950
label_1aa64c:
    if (ctx->pc == 0x1AA64Cu) {
        ctx->pc = 0x1AA64Cu;
            // 0x1aa64c: 0xafa30268  sw          $v1, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 3));
        ctx->pc = 0x1AA650u;
        goto label_1aa650;
    }
    ctx->pc = 0x1AA648u;
    SET_GPR_U32(ctx, 31, 0x1AA650u);
    ctx->pc = 0x1AA64Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA648u;
            // 0x1aa64c: 0xafa30268  sw          $v1, 0x268($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 616), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x137950u;
    if (runtime->hasFunction(0x137950u)) {
        auto targetFn = runtime->lookupFunction(0x137950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA650u; }
        if (ctx->pc != 0x1AA650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParam__8mgCFrameFR12mgCFrameAttrii_0x137950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA650u; }
        if (ctx->pc != 0x1AA650u) { return; }
    }
    ctx->pc = 0x1AA650u;
label_1aa650:
    // 0x1aa650: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1aa650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1aa654:
    // 0x1aa654: 0x240500a2  addiu       $a1, $zero, 0xA2
    ctx->pc = 0x1aa654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
label_1aa658:
    // 0x1aa658: 0xc0b62f8  jal         func_2D8BE0
label_1aa65c:
    if (ctx->pc == 0x1AA65Cu) {
        ctx->pc = 0x1AA65Cu;
            // 0x1aa65c: 0x2484ea20  addiu       $a0, $a0, -0x15E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
        ctx->pc = 0x1AA660u;
        goto label_1aa660;
    }
    ctx->pc = 0x1AA658u;
    SET_GPR_U32(ctx, 31, 0x1AA660u);
    ctx->pc = 0x1AA65Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA658u;
            // 0x1aa65c: 0x2484ea20  addiu       $a0, $a0, -0x15E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8BE0u;
    if (runtime->hasFunction(0x2D8BE0u)) {
        auto targetFn = runtime->lookupFunction(0x2D8BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA660u; }
        if (ctx->pc != 0x1AA660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadEditCursor__FP9mgCMemoryi_0x2d8be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA660u; }
        if (ctx->pc != 0x1AA660u) { return; }
    }
    ctx->pc = 0x1AA660u;
label_1aa660:
    // 0x1aa660: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1aa660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1aa664:
    // 0x1aa664: 0xc0bea80  jal         func_2FAA00
label_1aa668:
    if (ctx->pc == 0x1AA668u) {
        ctx->pc = 0x1AA668u;
            // 0x1aa668: 0x2484ea20  addiu       $a0, $a0, -0x15E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
        ctx->pc = 0x1AA66Cu;
        goto label_1aa66c;
    }
    ctx->pc = 0x1AA664u;
    SET_GPR_U32(ctx, 31, 0x1AA66Cu);
    ctx->pc = 0x1AA668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA664u;
            // 0x1aa668: 0x2484ea20  addiu       $a0, $a0, -0x15E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2FAA00u;
    if (runtime->hasFunction(0x2FAA00u)) {
        auto targetFn = runtime->lookupFunction(0x2FAA00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA66Cu; }
        if (ctx->pc != 0x1AA66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditSetEffectBuffer__FP9mgCMemory_0x2faa00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA66Cu; }
        if (ctx->pc != 0x1AA66Cu) { return; }
    }
    ctx->pc = 0x1AA66Cu;
label_1aa66c:
    // 0x1aa66c: 0x8f858ac0  lw          $a1, -0x7540($gp)
    ctx->pc = 0x1aa66cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
label_1aa670:
    // 0x1aa670: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1aa670u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_1aa674:
    // 0x1aa674: 0x24846210  addiu       $a0, $a0, 0x6210
    ctx->pc = 0x1aa674u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25104));
label_1aa678:
    // 0x1aa678: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aa678u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa67c:
    // 0x1aa67c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1aa67cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa680:
    // 0x1aa680: 0xc0524dc  jal         func_149370
label_1aa684:
    if (ctx->pc == 0x1AA684u) {
        ctx->pc = 0x1AA684u;
            // 0x1aa684: 0xaf808c54  sw          $zero, -0x73AC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937684), GPR_U32(ctx, 0));
        ctx->pc = 0x1AA688u;
        goto label_1aa688;
    }
    ctx->pc = 0x1AA680u;
    SET_GPR_U32(ctx, 31, 0x1AA688u);
    ctx->pc = 0x1AA684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA680u;
            // 0x1aa684: 0xaf808c54  sw          $zero, -0x73AC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937684), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA688u; }
        if (ctx->pc != 0x1AA688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA688u; }
        if (ctx->pc != 0x1AA688u) { return; }
    }
    ctx->pc = 0x1AA688u;
label_1aa688:
    // 0x1aa688: 0x10400041  beqz        $v0, . + 4 + (0x41 << 2)
label_1aa68c:
    if (ctx->pc == 0x1AA68Cu) {
        ctx->pc = 0x1AA690u;
        goto label_1aa690;
    }
    ctx->pc = 0x1AA688u;
    {
        const bool branch_taken_0x1aa688 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa688) {
            ctx->pc = 0x1AA790u;
            goto label_1aa790;
        }
    }
    ctx->pc = 0x1AA690u;
label_1aa690:
    // 0x1aa690: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1aa690u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1aa694:
    // 0x1aa694: 0x2405006a  addiu       $a1, $zero, 0x6A
    ctx->pc = 0x1aa694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
label_1aa698:
    // 0x1aa698: 0xc04e748  jal         func_139D20
label_1aa69c:
    if (ctx->pc == 0x1AA69Cu) {
        ctx->pc = 0x1AA69Cu;
            // 0x1aa69c: 0x2484ea20  addiu       $a0, $a0, -0x15E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
        ctx->pc = 0x1AA6A0u;
        goto label_1aa6a0;
    }
    ctx->pc = 0x1AA698u;
    SET_GPR_U32(ctx, 31, 0x1AA6A0u);
    ctx->pc = 0x1AA69Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA698u;
            // 0x1aa69c: 0x2484ea20  addiu       $a0, $a0, -0x15E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA6A0u; }
        if (ctx->pc != 0x1AA6A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA6A0u; }
        if (ctx->pc != 0x1AA6A0u) { return; }
    }
    ctx->pc = 0x1AA6A0u;
label_1aa6a0:
    // 0x1aa6a0: 0x24040680  addiu       $a0, $zero, 0x680
    ctx->pc = 0x1aa6a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1664));
label_1aa6a4:
    // 0x1aa6a4: 0xc04e638  jal         func_1398E0
label_1aa6a8:
    if (ctx->pc == 0x1AA6A8u) {
        ctx->pc = 0x1AA6A8u;
            // 0x1aa6a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AA6ACu;
        goto label_1aa6ac;
    }
    ctx->pc = 0x1AA6A4u;
    SET_GPR_U32(ctx, 31, 0x1AA6ACu);
    ctx->pc = 0x1AA6A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA6A4u;
            // 0x1aa6a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA6ACu; }
        if (ctx->pc != 0x1AA6ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA6ACu; }
        if (ctx->pc != 0x1AA6ACu) { return; }
    }
    ctx->pc = 0x1AA6ACu;
label_1aa6ac:
    // 0x1aa6ac: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_1aa6b0:
    if (ctx->pc == 0x1AA6B0u) {
        ctx->pc = 0x1AA6B0u;
            // 0x1aa6b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AA6B4u;
        goto label_1aa6b4;
    }
    ctx->pc = 0x1AA6ACu;
    {
        const bool branch_taken_0x1aa6ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA6B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA6ACu;
            // 0x1aa6b0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa6ac) {
            ctx->pc = 0x1AA74Cu;
            goto label_1aa74c;
        }
    }
    ctx->pc = 0x1AA6B4u;
label_1aa6b4:
    // 0x1aa6b4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1aa6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1aa6b8:
    // 0x1aa6b8: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x1aa6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_1aa6bc:
    // 0x1aa6bc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1aa6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1aa6c0:
    // 0x1aa6c0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1aa6c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aa6c4:
    // 0x1aa6c4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1aa6c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1aa6c8:
    // 0x1aa6c8: 0x320f809  jalr        $t9
label_1aa6cc:
    if (ctx->pc == 0x1AA6CCu) {
        ctx->pc = 0x1AA6CCu;
            // 0x1aa6cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AA6D0u;
        goto label_1aa6d0;
    }
    ctx->pc = 0x1AA6C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AA6D0u);
        ctx->pc = 0x1AA6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA6C8u;
            // 0x1aa6cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AA6D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AA6D0u; }
            if (ctx->pc != 0x1AA6D0u) { return; }
        }
        }
    }
    ctx->pc = 0x1AA6D0u;
label_1aa6d0:
    // 0x1aa6d0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1aa6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1aa6d4:
    // 0x1aa6d4: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x1aa6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_1aa6d8:
    // 0x1aa6d8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1aa6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1aa6dc:
    // 0x1aa6dc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1aa6dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aa6e0:
    // 0x1aa6e0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1aa6e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1aa6e4:
    // 0x1aa6e4: 0x320f809  jalr        $t9
label_1aa6e8:
    if (ctx->pc == 0x1AA6E8u) {
        ctx->pc = 0x1AA6E8u;
            // 0x1aa6e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AA6ECu;
        goto label_1aa6ec;
    }
    ctx->pc = 0x1AA6E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AA6ECu);
        ctx->pc = 0x1AA6E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA6E4u;
            // 0x1aa6e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AA6ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AA6ECu; }
            if (ctx->pc != 0x1AA6ECu) { return; }
        }
        }
    }
    ctx->pc = 0x1AA6ECu;
label_1aa6ec:
    // 0x1aa6ec: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1aa6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1aa6f0:
    // 0x1aa6f0: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x1aa6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_1aa6f4:
    // 0x1aa6f4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1aa6f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1aa6f8:
    // 0x1aa6f8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1aa6f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aa6fc:
    // 0x1aa6fc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1aa6fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1aa700:
    // 0x1aa700: 0x320f809  jalr        $t9
label_1aa704:
    if (ctx->pc == 0x1AA704u) {
        ctx->pc = 0x1AA704u;
            // 0x1aa704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AA708u;
        goto label_1aa708;
    }
    ctx->pc = 0x1AA700u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AA708u);
        ctx->pc = 0x1AA704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA700u;
            // 0x1aa704: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AA708u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AA708u; }
            if (ctx->pc != 0x1AA708u) { return; }
        }
        }
    }
    ctx->pc = 0x1AA708u;
label_1aa708:
    // 0x1aa708: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1aa708u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1aa70c:
    // 0x1aa70c: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x1aa70cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_1aa710:
    // 0x1aa710: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1aa710u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1aa714:
    // 0x1aa714: 0xae00035c  sw          $zero, 0x35C($s0)
    ctx->pc = 0x1aa714u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 0));
label_1aa718:
    // 0x1aa718: 0xae000364  sw          $zero, 0x364($s0)
    ctx->pc = 0x1aa718u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 0));
label_1aa71c:
    // 0x1aa71c: 0xae000360  sw          $zero, 0x360($s0)
    ctx->pc = 0x1aa71cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 0));
label_1aa720:
    // 0x1aa720: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1aa720u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aa724:
    // 0x1aa724: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1aa724u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1aa728:
    // 0x1aa728: 0x320f809  jalr        $t9
label_1aa72c:
    if (ctx->pc == 0x1AA72Cu) {
        ctx->pc = 0x1AA72Cu;
            // 0x1aa72c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AA730u;
        goto label_1aa730;
    }
    ctx->pc = 0x1AA728u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AA730u);
        ctx->pc = 0x1AA72Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA728u;
            // 0x1aa72c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AA730u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AA730u; }
            if (ctx->pc != 0x1AA730u) { return; }
        }
        }
    }
    ctx->pc = 0x1AA730u;
label_1aa730:
    // 0x1aa730: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1aa730u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1aa734:
    // 0x1aa734: 0x244253c0  addiu       $v0, $v0, 0x53C0
    ctx->pc = 0x1aa734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21440));
label_1aa738:
    // 0x1aa738: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1aa738u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1aa73c:
    // 0x1aa73c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1aa73cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1aa740:
    // 0x1aa740: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x1aa740u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_1aa744:
    // 0x1aa744: 0x320f809  jalr        $t9
label_1aa748:
    if (ctx->pc == 0x1AA748u) {
        ctx->pc = 0x1AA748u;
            // 0x1aa748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AA74Cu;
        goto label_1aa74c;
    }
    ctx->pc = 0x1AA744u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AA74Cu);
        ctx->pc = 0x1AA748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA744u;
            // 0x1aa748: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AA74Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AA74Cu; }
            if (ctx->pc != 0x1AA74Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1AA74Cu;
label_1aa74c:
    // 0x1aa74c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aa74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aa750:
    // 0x1aa750: 0x240500ac  addiu       $a1, $zero, 0xAC
    ctx->pc = 0x1aa750u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
label_1aa754:
    // 0x1aa754: 0xc04b950  jal         func_12E540
label_1aa758:
    if (ctx->pc == 0x1AA758u) {
        ctx->pc = 0x1AA758u;
            // 0x1aa758: 0xaf908c54  sw          $s0, -0x73AC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937684), GPR_U32(ctx, 16));
        ctx->pc = 0x1AA75Cu;
        goto label_1aa75c;
    }
    ctx->pc = 0x1AA754u;
    SET_GPR_U32(ctx, 31, 0x1AA75Cu);
    ctx->pc = 0x1AA758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA754u;
            // 0x1aa758: 0xaf908c54  sw          $s0, -0x73AC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937684), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA75Cu; }
        if (ctx->pc != 0x1AA75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA75Cu; }
        if (ctx->pc != 0x1AA75Cu) { return; }
    }
    ctx->pc = 0x1AA75Cu;
label_1aa75c:
    // 0x1aa75c: 0x8f848c54  lw          $a0, -0x73AC($gp)
    ctx->pc = 0x1aa75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937684)));
label_1aa760:
    // 0x1aa760: 0x3c0701ea  lui         $a3, 0x1EA
    ctx->pc = 0x1aa760u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)490 << 16));
label_1aa764:
    // 0x1aa764: 0x24e7ea20  addiu       $a3, $a3, -0x15E0
    ctx->pc = 0x1aa764u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961696));
label_1aa768:
    // 0x1aa768: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x1aa768u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_1aa76c:
    // 0x1aa76c: 0x8f858ac0  lw          $a1, -0x7540($gp)
    ctx->pc = 0x1aa76cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
label_1aa770:
    // 0x1aa770: 0x24c66220  addiu       $a2, $a2, 0x6220
    ctx->pc = 0x1aa770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25120));
label_1aa774:
    // 0x1aa774: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x1aa774u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1aa778:
    // 0x1aa778: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1aa778u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1aa77c:
    // 0x1aa77c: 0x240a00ac  addiu       $t2, $zero, 0xAC
    ctx->pc = 0x1aa77cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 172));
label_1aa780:
    // 0x1aa780: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1aa780u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1aa784:
    // 0x1aa784: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x1aa784u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_1aa788:
    // 0x1aa788: 0x320f809  jalr        $t9
label_1aa78c:
    if (ctx->pc == 0x1AA78Cu) {
        ctx->pc = 0x1AA78Cu;
            // 0x1aa78c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AA790u;
        goto label_1aa790;
    }
    ctx->pc = 0x1AA788u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AA790u);
        ctx->pc = 0x1AA78Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA788u;
            // 0x1aa78c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AA790u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AA790u; }
            if (ctx->pc != 0x1AA790u) { return; }
        }
        }
    }
    ctx->pc = 0x1AA790u;
label_1aa790:
    // 0x1aa790: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1aa790u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1aa794:
    // 0x1aa794: 0x24051900  addiu       $a1, $zero, 0x1900
    ctx->pc = 0x1aa794u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6400));
label_1aa798:
    // 0x1aa798: 0xc04e704  jal         func_139C10
label_1aa79c:
    if (ctx->pc == 0x1AA79Cu) {
        ctx->pc = 0x1AA79Cu;
            // 0x1aa79c: 0x2484ea20  addiu       $a0, $a0, -0x15E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
        ctx->pc = 0x1AA7A0u;
        goto label_1aa7a0;
    }
    ctx->pc = 0x1AA798u;
    SET_GPR_U32(ctx, 31, 0x1AA7A0u);
    ctx->pc = 0x1AA79Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA798u;
            // 0x1aa79c: 0x2484ea20  addiu       $a0, $a0, -0x15E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA7A0u; }
        if (ctx->pc != 0x1AA7A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA7A0u; }
        if (ctx->pc != 0x1AA7A0u) { return; }
    }
    ctx->pc = 0x1AA7A0u;
label_1aa7a0:
    // 0x1aa7a0: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1aa7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1aa7a4:
    // 0x1aa7a4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1aa7a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aa7a8:
    // 0x1aa7a8: 0x2484e9c0  addiu       $a0, $a0, -0x1640
    ctx->pc = 0x1aa7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961600));
label_1aa7ac:
    // 0x1aa7ac: 0xc04e64c  jal         func_139930
label_1aa7b0:
    if (ctx->pc == 0x1AA7B0u) {
        ctx->pc = 0x1AA7B0u;
            // 0x1aa7b0: 0x24061900  addiu       $a2, $zero, 0x1900 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6400));
        ctx->pc = 0x1AA7B4u;
        goto label_1aa7b4;
    }
    ctx->pc = 0x1AA7ACu;
    SET_GPR_U32(ctx, 31, 0x1AA7B4u);
    ctx->pc = 0x1AA7B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA7ACu;
            // 0x1aa7b0: 0x24061900  addiu       $a2, $zero, 0x1900 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139930u;
    if (runtime->hasFunction(0x139930u)) {
        auto targetFn = runtime->lookupFunction(0x139930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA7B4u; }
        if (ctx->pc != 0x1AA7B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHeapMem__9mgCMemoryFP1i_0x139930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA7B4u; }
        if (ctx->pc != 0x1AA7B4u) { return; }
    }
    ctx->pc = 0x1AA7B4u;
label_1aa7b4:
    // 0x1aa7b4: 0xc0c2678  jal         func_3099E0
label_1aa7b8:
    if (ctx->pc == 0x1AA7B8u) {
        ctx->pc = 0x1AA7BCu;
        goto label_1aa7bc;
    }
    ctx->pc = 0x1AA7B4u;
    SET_GPR_U32(ctx, 31, 0x1AA7BCu);
    ctx->pc = 0x3099E0u;
    if (runtime->hasFunction(0x3099E0u)) {
        auto targetFn = runtime->lookupFunction(0x3099E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA7BCu; }
        if (ctx->pc != 0x1AA7BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowLoadingBarStep__Fv_0x3099e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA7BCu; }
        if (ctx->pc != 0x1AA7BCu) { return; }
    }
    ctx->pc = 0x1AA7BCu;
label_1aa7bc:
    // 0x1aa7bc: 0xc0c2678  jal         func_3099E0
label_1aa7c0:
    if (ctx->pc == 0x1AA7C0u) {
        ctx->pc = 0x1AA7C4u;
        goto label_1aa7c4;
    }
    ctx->pc = 0x1AA7BCu;
    SET_GPR_U32(ctx, 31, 0x1AA7C4u);
    ctx->pc = 0x3099E0u;
    if (runtime->hasFunction(0x3099E0u)) {
        auto targetFn = runtime->lookupFunction(0x3099E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA7C4u; }
        if (ctx->pc != 0x1AA7C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowLoadingBarStep__Fv_0x3099e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA7C4u; }
        if (ctx->pc != 0x1AA7C4u) { return; }
    }
    ctx->pc = 0x1AA7C4u;
label_1aa7c4:
    // 0x1aa7c4: 0xc0521d8  jal         func_148760
label_1aa7c8:
    if (ctx->pc == 0x1AA7C8u) {
        ctx->pc = 0x1AA7C8u;
            // 0x1aa7c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AA7CCu;
        goto label_1aa7cc;
    }
    ctx->pc = 0x1AA7C4u;
    SET_GPR_U32(ctx, 31, 0x1AA7CCu);
    ctx->pc = 0x1AA7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA7C4u;
            // 0x1aa7c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148760u;
    if (runtime->hasFunction(0x148760u)) {
        auto targetFn = runtime->lookupFunction(0x148760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA7CCu; }
        if (ctx->pc != 0x1AA7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCurrentDir__FPc_0x148760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA7CCu; }
        if (ctx->pc != 0x1AA7CCu) { return; }
    }
    ctx->pc = 0x1AA7CCu;
label_1aa7cc:
    // 0x1aa7cc: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1aa7ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1aa7d0:
    // 0x1aa7d0: 0xc04e780  jal         func_139E00
label_1aa7d4:
    if (ctx->pc == 0x1AA7D4u) {
        ctx->pc = 0x1AA7D4u;
            // 0x1aa7d4: 0x2484ea20  addiu       $a0, $a0, -0x15E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
        ctx->pc = 0x1AA7D8u;
        goto label_1aa7d8;
    }
    ctx->pc = 0x1AA7D0u;
    SET_GPR_U32(ctx, 31, 0x1AA7D8u);
    ctx->pc = 0x1AA7D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA7D0u;
            // 0x1aa7d4: 0x2484ea20  addiu       $a0, $a0, -0x15E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA7D8u; }
        if (ctx->pc != 0x1AA7D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA7D8u; }
        if (ctx->pc != 0x1AA7D8u) { return; }
    }
    ctx->pc = 0x1AA7D8u;
label_1aa7d8:
    // 0x1aa7d8: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1aa7d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1aa7dc:
    // 0x1aa7dc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aa7dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aa7e0:
    // 0x1aa7e0: 0xc04e714  jal         func_139C50
label_1aa7e4:
    if (ctx->pc == 0x1AA7E4u) {
        ctx->pc = 0x1AA7E4u;
            // 0x1aa7e4: 0x2484ea20  addiu       $a0, $a0, -0x15E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
        ctx->pc = 0x1AA7E8u;
        goto label_1aa7e8;
    }
    ctx->pc = 0x1AA7E0u;
    SET_GPR_U32(ctx, 31, 0x1AA7E8u);
    ctx->pc = 0x1AA7E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA7E0u;
            // 0x1aa7e4: 0x2484ea20  addiu       $a0, $a0, -0x15E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C50u;
    if (runtime->hasFunction(0x139C50u)) {
        auto targetFn = runtime->lookupFunction(0x139C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA7E8u; }
        if (ctx->pc != 0x1AA7E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAllocTest__9mgCMemoryFi_0x139c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA7E8u; }
        if (ctx->pc != 0x1AA7E8u) { return; }
    }
    ctx->pc = 0x1AA7E8u;
label_1aa7e8:
    // 0x1aa7e8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1aa7e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aa7ec:
    // 0x1aa7ec: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x1aa7ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_1aa7f0:
    // 0x1aa7f0: 0x3c020033  lui         $v0, 0x33
    ctx->pc = 0x1aa7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)51 << 16));
label_1aa7f4:
    // 0x1aa7f4: 0x24426920  addiu       $v0, $v0, 0x6920
    ctx->pc = 0x1aa7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26912));
label_1aa7f8:
    // 0x1aa7f8: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x1aa7f8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1aa7fc:
    // 0x1aa7fc: 0x78450010  lq          $a1, 0x10($v0)
    ctx->pc = 0x1aa7fcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_1aa800:
    // 0x1aa800: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x1aa800u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_1aa804:
    // 0x1aa804: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x1aa804u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_1aa808:
    // 0x1aa808: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x1aa808u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
label_1aa80c:
    // 0x1aa80c: 0x7c850010  sq          $a1, 0x10($a0)
    ctx->pc = 0x1aa80cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 5));
label_1aa810:
    // 0x1aa810: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x1aa810u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
label_1aa814:
    // 0x1aa814: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x1aa814u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_1aa818:
    // 0x1aa818: 0x8f868ad0  lw          $a2, -0x7530($gp)
    ctx->pc = 0x1aa818u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
label_1aa81c:
    // 0x1aa81c: 0x18c00003  blez        $a2, . + 4 + (0x3 << 2)
label_1aa820:
    if (ctx->pc == 0x1AA820u) {
        ctx->pc = 0x1AA820u;
            // 0x1aa820: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->pc = 0x1AA824u;
        goto label_1aa824;
    }
    ctx->pc = 0x1AA81Cu;
    {
        const bool branch_taken_0x1aa81c = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1AA820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA81Cu;
            // 0x1aa820: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa81c) {
            ctx->pc = 0x1AA82Cu;
            goto label_1aa82c;
        }
    }
    ctx->pc = 0x1AA824u;
label_1aa824:
    // 0x1aa824: 0xc04a234  jal         func_1288D0
label_1aa828:
    if (ctx->pc == 0x1AA828u) {
        ctx->pc = 0x1AA828u;
            // 0x1aa828: 0x24a56230  addiu       $a1, $a1, 0x6230 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25136));
        ctx->pc = 0x1AA82Cu;
        goto label_1aa82c;
    }
    ctx->pc = 0x1AA824u;
    SET_GPR_U32(ctx, 31, 0x1AA82Cu);
    ctx->pc = 0x1AA828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA824u;
            // 0x1aa828: 0x24a56230  addiu       $a1, $a1, 0x6230 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA82Cu; }
        if (ctx->pc != 0x1AA82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA82Cu; }
        if (ctx->pc != 0x1AA82Cu) { return; }
    }
    ctx->pc = 0x1AA82Cu;
label_1aa82c:
    // 0x1aa82c: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x1aa82cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_1aa830:
    // 0x1aa830: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1aa830u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aa834:
    // 0x1aa834: 0x27a60314  addiu       $a2, $sp, 0x314
    ctx->pc = 0x1aa834u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 788));
label_1aa838:
    // 0x1aa838: 0xc0524dc  jal         func_149370
label_1aa83c:
    if (ctx->pc == 0x1AA83Cu) {
        ctx->pc = 0x1AA83Cu;
            // 0x1aa83c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AA840u;
        goto label_1aa840;
    }
    ctx->pc = 0x1AA838u;
    SET_GPR_U32(ctx, 31, 0x1AA840u);
    ctx->pc = 0x1AA83Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA838u;
            // 0x1aa83c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA840u; }
        if (ctx->pc != 0x1AA840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA840u; }
        if (ctx->pc != 0x1AA840u) { return; }
    }
    ctx->pc = 0x1AA840u;
label_1aa840:
    // 0x1aa840: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_1aa844:
    if (ctx->pc == 0x1AA844u) {
        ctx->pc = 0x1AA848u;
        goto label_1aa848;
    }
    ctx->pc = 0x1AA840u;
    {
        const bool branch_taken_0x1aa840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa840) {
            ctx->pc = 0x1AA89Cu;
            goto label_1aa89c;
        }
    }
    ctx->pc = 0x1AA848u;
label_1aa848:
    // 0x1aa848: 0x3c0701ea  lui         $a3, 0x1EA
    ctx->pc = 0x1aa848u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)490 << 16));
label_1aa84c:
    // 0x1aa84c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1aa84cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aa850:
    // 0x1aa850: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aa850u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aa854:
    // 0x1aa854: 0x240600a1  addiu       $a2, $zero, 0xA1
    ctx->pc = 0x1aa854u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
label_1aa858:
    // 0x1aa858: 0x24e7ea20  addiu       $a3, $a3, -0x15E0
    ctx->pc = 0x1aa858u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961696));
label_1aa85c:
    // 0x1aa85c: 0xc04b6a4  jal         func_12DA90
label_1aa860:
    if (ctx->pc == 0x1AA860u) {
        ctx->pc = 0x1AA860u;
            // 0x1aa860: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AA864u;
        goto label_1aa864;
    }
    ctx->pc = 0x1AA85Cu;
    SET_GPR_U32(ctx, 31, 0x1AA864u);
    ctx->pc = 0x1AA860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA85Cu;
            // 0x1aa860: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA864u; }
        if (ctx->pc != 0x1AA864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA864u; }
        if (ctx->pc != 0x1AA864u) { return; }
    }
    ctx->pc = 0x1AA864u;
label_1aa864:
    // 0x1aa864: 0x8fa30314  lw          $v1, 0x314($sp)
    ctx->pc = 0x1aa864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 788)));
label_1aa868:
    // 0x1aa868: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1aa86c:
    if (ctx->pc == 0x1AA86Cu) {
        ctx->pc = 0x1AA86Cu;
            // 0x1aa86c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->pc = 0x1AA870u;
        goto label_1aa870;
    }
    ctx->pc = 0x1AA868u;
    {
        const bool branch_taken_0x1aa868 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1AA86Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA868u;
            // 0x1aa86c: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa868) {
            ctx->pc = 0x1AA878u;
            goto label_1aa878;
        }
    }
    ctx->pc = 0x1AA870u;
label_1aa870:
    // 0x1aa870: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1aa870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_1aa874:
    // 0x1aa874: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1aa874u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1aa878:
    // 0x1aa878: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1aa878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1aa87c:
    // 0x1aa87c: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x1aa87cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1aa880:
    // 0x1aa880: 0xc04e748  jal         func_139D20
label_1aa884:
    if (ctx->pc == 0x1AA884u) {
        ctx->pc = 0x1AA884u;
            // 0x1aa884: 0x2484ea20  addiu       $a0, $a0, -0x15E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
        ctx->pc = 0x1AA888u;
        goto label_1aa888;
    }
    ctx->pc = 0x1AA880u;
    SET_GPR_U32(ctx, 31, 0x1AA888u);
    ctx->pc = 0x1AA884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA880u;
            // 0x1aa884: 0x2484ea20  addiu       $a0, $a0, -0x15E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA888u; }
        if (ctx->pc != 0x1AA888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA888u; }
        if (ctx->pc != 0x1AA888u) { return; }
    }
    ctx->pc = 0x1AA888u;
label_1aa888:
    // 0x1aa888: 0x8f868ac0  lw          $a2, -0x7540($gp)
    ctx->pc = 0x1aa888u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
label_1aa88c:
    // 0x1aa88c: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x1aa88cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
label_1aa890:
    // 0x1aa890: 0x240400a1  addiu       $a0, $zero, 0xA1
    ctx->pc = 0x1aa890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 161));
label_1aa894:
    // 0x1aa894: 0xc0c3968  jal         func_30E5A0
label_1aa898:
    if (ctx->pc == 0x1AA898u) {
        ctx->pc = 0x1AA898u;
            // 0x1aa898: 0x24a5ea20  addiu       $a1, $a1, -0x15E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961696));
        ctx->pc = 0x1AA89Cu;
        goto label_1aa89c;
    }
    ctx->pc = 0x1AA894u;
    SET_GPR_U32(ctx, 31, 0x1AA89Cu);
    ctx->pc = 0x1AA898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA894u;
            // 0x1aa898: 0x24a5ea20  addiu       $a1, $a1, -0x15E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30E5A0u;
    if (runtime->hasFunction(0x30E5A0u)) {
        auto targetFn = runtime->lookupFunction(0x30E5A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA89Cu; }
        if (ctx->pc != 0x1AA89Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadTakePhoto__FiP9mgCMemoryP1_0x30e5a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA89Cu; }
        if (ctx->pc != 0x1AA89Cu) { return; }
    }
    ctx->pc = 0x1AA89Cu;
label_1aa89c:
    // 0x1aa89c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1aa89cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1aa8a0:
    // 0x1aa8a0: 0xc04e780  jal         func_139E00
label_1aa8a4:
    if (ctx->pc == 0x1AA8A4u) {
        ctx->pc = 0x1AA8A4u;
            // 0x1aa8a4: 0x2484ea20  addiu       $a0, $a0, -0x15E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
        ctx->pc = 0x1AA8A8u;
        goto label_1aa8a8;
    }
    ctx->pc = 0x1AA8A0u;
    SET_GPR_U32(ctx, 31, 0x1AA8A8u);
    ctx->pc = 0x1AA8A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA8A0u;
            // 0x1aa8a4: 0x2484ea20  addiu       $a0, $a0, -0x15E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA8A8u; }
        if (ctx->pc != 0x1AA8A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA8A8u; }
        if (ctx->pc != 0x1AA8A8u) { return; }
    }
    ctx->pc = 0x1AA8A8u;
label_1aa8a8:
    // 0x1aa8a8: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1aa8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1aa8ac:
    // 0x1aa8ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aa8acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aa8b0:
    // 0x1aa8b0: 0xc04e714  jal         func_139C50
label_1aa8b4:
    if (ctx->pc == 0x1AA8B4u) {
        ctx->pc = 0x1AA8B4u;
            // 0x1aa8b4: 0x2484ea20  addiu       $a0, $a0, -0x15E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
        ctx->pc = 0x1AA8B8u;
        goto label_1aa8b8;
    }
    ctx->pc = 0x1AA8B0u;
    SET_GPR_U32(ctx, 31, 0x1AA8B8u);
    ctx->pc = 0x1AA8B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA8B0u;
            // 0x1aa8b4: 0x2484ea20  addiu       $a0, $a0, -0x15E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C50u;
    if (runtime->hasFunction(0x139C50u)) {
        auto targetFn = runtime->lookupFunction(0x139C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA8B8u; }
        if (ctx->pc != 0x1AA8B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAllocTest__9mgCMemoryFi_0x139c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA8B8u; }
        if (ctx->pc != 0x1AA8B8u) { return; }
    }
    ctx->pc = 0x1AA8B8u;
label_1aa8b8:
    // 0x1aa8b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1aa8b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aa8bc:
    // 0x1aa8bc: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1aa8bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_1aa8c0:
    // 0x1aa8c0: 0x24846250  addiu       $a0, $a0, 0x6250
    ctx->pc = 0x1aa8c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25168));
label_1aa8c4:
    // 0x1aa8c4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1aa8c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aa8c8:
    // 0x1aa8c8: 0x27a60318  addiu       $a2, $sp, 0x318
    ctx->pc = 0x1aa8c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 792));
label_1aa8cc:
    // 0x1aa8cc: 0xc0524dc  jal         func_149370
label_1aa8d0:
    if (ctx->pc == 0x1AA8D0u) {
        ctx->pc = 0x1AA8D0u;
            // 0x1aa8d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AA8D4u;
        goto label_1aa8d4;
    }
    ctx->pc = 0x1AA8CCu;
    SET_GPR_U32(ctx, 31, 0x1AA8D4u);
    ctx->pc = 0x1AA8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA8CCu;
            // 0x1aa8d0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA8D4u; }
        if (ctx->pc != 0x1AA8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA8D4u; }
        if (ctx->pc != 0x1AA8D4u) { return; }
    }
    ctx->pc = 0x1AA8D4u;
label_1aa8d4:
    // 0x1aa8d4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1aa8d8:
    if (ctx->pc == 0x1AA8D8u) {
        ctx->pc = 0x1AA8DCu;
        goto label_1aa8dc;
    }
    ctx->pc = 0x1AA8D4u;
    {
        const bool branch_taken_0x1aa8d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa8d4) {
            ctx->pc = 0x1AA91Cu;
            goto label_1aa91c;
        }
    }
    ctx->pc = 0x1AA8DCu;
label_1aa8dc:
    // 0x1aa8dc: 0x8fa30318  lw          $v1, 0x318($sp)
    ctx->pc = 0x1aa8dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 792)));
label_1aa8e0:
    // 0x1aa8e0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_1aa8e4:
    if (ctx->pc == 0x1AA8E4u) {
        ctx->pc = 0x1AA8E4u;
            // 0x1aa8e4: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->pc = 0x1AA8E8u;
        goto label_1aa8e8;
    }
    ctx->pc = 0x1AA8E0u;
    {
        const bool branch_taken_0x1aa8e0 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1AA8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA8E0u;
            // 0x1aa8e4: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa8e0) {
            ctx->pc = 0x1AA8F0u;
            goto label_1aa8f0;
        }
    }
    ctx->pc = 0x1AA8E8u;
label_1aa8e8:
    // 0x1aa8e8: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x1aa8e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_1aa8ec:
    // 0x1aa8ec: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1aa8ecu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1aa8f0:
    // 0x1aa8f0: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1aa8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1aa8f4:
    // 0x1aa8f4: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x1aa8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1aa8f8:
    // 0x1aa8f8: 0xc04e748  jal         func_139D20
label_1aa8fc:
    if (ctx->pc == 0x1AA8FCu) {
        ctx->pc = 0x1AA8FCu;
            // 0x1aa8fc: 0x2484ea20  addiu       $a0, $a0, -0x15E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
        ctx->pc = 0x1AA900u;
        goto label_1aa900;
    }
    ctx->pc = 0x1AA8F8u;
    SET_GPR_U32(ctx, 31, 0x1AA900u);
    ctx->pc = 0x1AA8FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA8F8u;
            // 0x1aa8fc: 0x2484ea20  addiu       $a0, $a0, -0x15E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA900u; }
        if (ctx->pc != 0x1AA900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA900u; }
        if (ctx->pc != 0x1AA900u) { return; }
    }
    ctx->pc = 0x1AA900u;
label_1aa900:
    // 0x1aa900: 0x3c0701ea  lui         $a3, 0x1EA
    ctx->pc = 0x1aa900u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)490 << 16));
label_1aa904:
    // 0x1aa904: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1aa904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aa908:
    // 0x1aa908: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aa908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aa90c:
    // 0x1aa90c: 0x24060042  addiu       $a2, $zero, 0x42
    ctx->pc = 0x1aa90cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1aa910:
    // 0x1aa910: 0x24e7ea20  addiu       $a3, $a3, -0x15E0
    ctx->pc = 0x1aa910u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961696));
label_1aa914:
    // 0x1aa914: 0xc04b6a4  jal         func_12DA90
label_1aa918:
    if (ctx->pc == 0x1AA918u) {
        ctx->pc = 0x1AA918u;
            // 0x1aa918: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AA91Cu;
        goto label_1aa91c;
    }
    ctx->pc = 0x1AA914u;
    SET_GPR_U32(ctx, 31, 0x1AA91Cu);
    ctx->pc = 0x1AA918u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA914u;
            // 0x1aa918: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA91Cu; }
        if (ctx->pc != 0x1AA91Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA91Cu; }
        if (ctx->pc != 0x1AA91Cu) { return; }
    }
    ctx->pc = 0x1AA91Cu;
label_1aa91c:
    // 0x1aa91c: 0xc0c2678  jal         func_3099E0
label_1aa920:
    if (ctx->pc == 0x1AA920u) {
        ctx->pc = 0x1AA924u;
        goto label_1aa924;
    }
    ctx->pc = 0x1AA91Cu;
    SET_GPR_U32(ctx, 31, 0x1AA924u);
    ctx->pc = 0x3099E0u;
    if (runtime->hasFunction(0x3099E0u)) {
        auto targetFn = runtime->lookupFunction(0x3099E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA924u; }
        if (ctx->pc != 0x1AA924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowLoadingBarStep__Fv_0x3099e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA924u; }
        if (ctx->pc != 0x1AA924u) { return; }
    }
    ctx->pc = 0x1AA924u;
label_1aa924:
    // 0x1aa924: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1aa924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1aa928:
    // 0x1aa928: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1aa928u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1aa92c:
    // 0x1aa92c: 0x810821  addu        $at, $a0, $at
    ctx->pc = 0x1aa92cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_1aa930:
    // 0x1aa930: 0x8c390548  lw          $t9, 0x548($at)
    ctx->pc = 0x1aa930u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 1352)));
label_1aa934:
    // 0x1aa934: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1aa934u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1aa938:
    // 0x1aa938: 0x320f809  jalr        $t9
label_1aa93c:
    if (ctx->pc == 0x1AA93Cu) {
        ctx->pc = 0x1AA940u;
        goto label_1aa940;
    }
    ctx->pc = 0x1AA938u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AA940u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AA940u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AA940u; }
            if (ctx->pc != 0x1AA940u) { return; }
        }
        }
    }
    ctx->pc = 0x1AA940u;
label_1aa940:
    // 0x1aa940: 0x8f878cb0  lw          $a3, -0x7350($gp)
    ctx->pc = 0x1aa940u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1aa944:
    // 0x1aa944: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1aa944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1aa948:
    // 0x1aa948: 0x24080046  addiu       $t0, $zero, 0x46
    ctx->pc = 0x1aa948u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1aa94c:
    // 0x1aa94c: 0x2406004e  addiu       $a2, $zero, 0x4E
    ctx->pc = 0x1aa94cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
label_1aa950:
    // 0x1aa950: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1aa950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1aa954:
    // 0x1aa954: 0x24050038  addiu       $a1, $zero, 0x38
    ctx->pc = 0x1aa954u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_1aa958:
    // 0x1aa958: 0x2404009f  addiu       $a0, $zero, 0x9F
    ctx->pc = 0x1aa958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 159));
label_1aa95c:
    // 0x1aa95c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1aa95cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1aa960:
    // 0x1aa960: 0xace82e70  sw          $t0, 0x2E70($a3)
    ctx->pc = 0x1aa960u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 11888), GPR_U32(ctx, 8));
label_1aa964:
    // 0x1aa964: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1aa964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1aa968:
    // 0x1aa968: 0xac462e74  sw          $a2, 0x2E74($v0)
    ctx->pc = 0x1aa968u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11892), GPR_U32(ctx, 6));
label_1aa96c:
    // 0x1aa96c: 0xac452e78  sw          $a1, 0x2E78($v0)
    ctx->pc = 0x1aa96cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11896), GPR_U32(ctx, 5));
label_1aa970:
    // 0x1aa970: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1aa970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1aa974:
    // 0x1aa974: 0xac442e7c  sw          $a0, 0x2E7C($v0)
    ctx->pc = 0x1aa974u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11900), GPR_U32(ctx, 4));
label_1aa978:
    // 0x1aa978: 0xac432e80  sw          $v1, 0x2E80($v0)
    ctx->pc = 0x1aa978u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11904), GPR_U32(ctx, 3));
label_1aa97c:
    // 0x1aa97c: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1aa97cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1aa980:
    // 0x1aa980: 0xc0a9838  jal         func_2A60E0
label_1aa984:
    if (ctx->pc == 0x1AA984u) {
        ctx->pc = 0x1AA984u;
            // 0x1aa984: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AA988u;
        goto label_1aa988;
    }
    ctx->pc = 0x1AA980u;
    SET_GPR_U32(ctx, 31, 0x1AA988u);
    ctx->pc = 0x1AA984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA980u;
            // 0x1aa984: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A60E0u;
    if (runtime->hasFunction(0x2A60E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A60E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA988u; }
        if (ctx->pc != 0x1AA988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveBgmInfo__6CSceneFv_0x2a60e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA988u; }
        if (ctx->pc != 0x1AA988u) { return; }
    }
    ctx->pc = 0x1AA988u;
label_1aa988:
    // 0x1aa988: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x1aa988u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1aa98c:
    // 0x1aa98c: 0xc0a9838  jal         func_2A60E0
label_1aa990:
    if (ctx->pc == 0x1AA990u) {
        ctx->pc = 0x1AA990u;
            // 0x1aa990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AA994u;
        goto label_1aa994;
    }
    ctx->pc = 0x1AA98Cu;
    SET_GPR_U32(ctx, 31, 0x1AA994u);
    ctx->pc = 0x1AA990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA98Cu;
            // 0x1aa990: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A60E0u;
    if (runtime->hasFunction(0x2A60E0u)) {
        auto targetFn = runtime->lookupFunction(0x2A60E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA994u; }
        if (ctx->pc != 0x1AA994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveBgmInfo__6CSceneFv_0x2a60e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA994u; }
        if (ctx->pc != 0x1AA994u) { return; }
    }
    ctx->pc = 0x1AA994u;
label_1aa994:
    // 0x1aa994: 0xc44c0014  lwc1        $f12, 0x14($v0)
    ctx->pc = 0x1aa994u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_1aa998:
    // 0x1aa998: 0xc0a98e8  jal         func_2A63A0
label_1aa99c:
    if (ctx->pc == 0x1AA99Cu) {
        ctx->pc = 0x1AA99Cu;
            // 0x1aa99c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AA9A0u;
        goto label_1aa9a0;
    }
    ctx->pc = 0x1AA998u;
    SET_GPR_U32(ctx, 31, 0x1AA9A0u);
    ctx->pc = 0x1AA99Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA998u;
            // 0x1aa99c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A63A0u;
    if (runtime->hasFunction(0x2A63A0u)) {
        auto targetFn = runtime->lookupFunction(0x2A63A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA9A0u; }
        if (ctx->pc != 0x1AA9A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetVolfBGM__6CSceneFf_0x2a63a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA9A0u; }
        if (ctx->pc != 0x1AA9A0u) { return; }
    }
    ctx->pc = 0x1AA9A0u;
label_1aa9a0:
    // 0x1aa9a0: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1aa9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1aa9a4:
    // 0x1aa9a4: 0x240600b8  addiu       $a2, $zero, 0xB8
    ctx->pc = 0x1aa9a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
label_1aa9a8:
    // 0x1aa9a8: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1aa9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1aa9ac:
    // 0x1aa9ac: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x1aa9acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1aa9b0:
    // 0x1aa9b0: 0x2484ea20  addiu       $a0, $a0, -0x15E0
    ctx->pc = 0x1aa9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
label_1aa9b4:
    // 0x1aa9b4: 0x2405011b  addiu       $a1, $zero, 0x11B
    ctx->pc = 0x1aa9b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 283));
label_1aa9b8:
    // 0x1aa9b8: 0xac463e68  sw          $a2, 0x3E68($v0)
    ctx->pc = 0x1aa9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 15976), GPR_U32(ctx, 6));
label_1aa9bc:
    // 0x1aa9bc: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1aa9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1aa9c0:
    // 0x1aa9c0: 0xc04e748  jal         func_139D20
label_1aa9c4:
    if (ctx->pc == 0x1AA9C4u) {
        ctx->pc = 0x1AA9C4u;
            // 0x1aa9c4: 0xac433e6c  sw          $v1, 0x3E6C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 15980), GPR_U32(ctx, 3));
        ctx->pc = 0x1AA9C8u;
        goto label_1aa9c8;
    }
    ctx->pc = 0x1AA9C0u;
    SET_GPR_U32(ctx, 31, 0x1AA9C8u);
    ctx->pc = 0x1AA9C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA9C0u;
            // 0x1aa9c4: 0xac433e6c  sw          $v1, 0x3E6C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 15980), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA9C8u; }
        if (ctx->pc != 0x1AA9C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA9C8u; }
        if (ctx->pc != 0x1AA9C8u) { return; }
    }
    ctx->pc = 0x1AA9C8u;
label_1aa9c8:
    // 0x1aa9c8: 0x24041190  addiu       $a0, $zero, 0x1190
    ctx->pc = 0x1aa9c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4496));
label_1aa9cc:
    // 0x1aa9cc: 0xc04e638  jal         func_1398E0
label_1aa9d0:
    if (ctx->pc == 0x1AA9D0u) {
        ctx->pc = 0x1AA9D0u;
            // 0x1aa9d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AA9D4u;
        goto label_1aa9d4;
    }
    ctx->pc = 0x1AA9CCu;
    SET_GPR_U32(ctx, 31, 0x1AA9D4u);
    ctx->pc = 0x1AA9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA9CCu;
            // 0x1aa9d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA9D4u; }
        if (ctx->pc != 0x1AA9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AA9D4u; }
        if (ctx->pc != 0x1AA9D4u) { return; }
    }
    ctx->pc = 0x1AA9D4u;
label_1aa9d4:
    // 0x1aa9d4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_1aa9d8:
    if (ctx->pc == 0x1AA9D8u) {
        ctx->pc = 0x1AA9D8u;
            // 0x1aa9d8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AA9DCu;
        goto label_1aa9dc;
    }
    ctx->pc = 0x1AA9D4u;
    {
        const bool branch_taken_0x1aa9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA9D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA9D4u;
            // 0x1aa9d8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa9d4) {
            ctx->pc = 0x1AAA28u;
            goto label_1aaa28;
        }
    }
    ctx->pc = 0x1AA9DCu;
label_1aa9dc:
    // 0x1aa9dc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1aa9dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1aa9e0:
    // 0x1aa9e0: 0x24424f10  addiu       $v0, $v0, 0x4F10
    ctx->pc = 0x1aa9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20240));
label_1aa9e4:
    // 0x1aa9e4: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x1aa9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
label_1aa9e8:
    // 0x1aa9e8: 0x8e19004c  lw          $t9, 0x4C($s0)
    ctx->pc = 0x1aa9e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_1aa9ec:
    // 0x1aa9ec: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1aa9ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1aa9f0:
    // 0x1aa9f0: 0x320f809  jalr        $t9
label_1aa9f4:
    if (ctx->pc == 0x1AA9F4u) {
        ctx->pc = 0x1AA9F4u;
            // 0x1aa9f4: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x1AA9F8u;
        goto label_1aa9f8;
    }
    ctx->pc = 0x1AA9F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AA9F8u);
        ctx->pc = 0x1AA9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AA9F0u;
            // 0x1aa9f4: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AA9F8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AA9F8u; }
            if (ctx->pc != 0x1AA9F8u) { return; }
        }
        }
    }
    ctx->pc = 0x1AA9F8u;
label_1aa9f8:
    // 0x1aa9f8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1aa9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1aa9fc:
    // 0x1aa9fc: 0x244250b0  addiu       $v0, $v0, 0x50B0
    ctx->pc = 0x1aa9fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20656));
label_1aaa00:
    // 0x1aaa00: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x1aaa00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
label_1aaa04:
    // 0x1aaa04: 0x8e19004c  lw          $t9, 0x4C($s0)
    ctx->pc = 0x1aaa04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_1aaa08:
    // 0x1aaa08: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x1aaa08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_1aaa0c:
    // 0x1aaa0c: 0x320f809  jalr        $t9
label_1aaa10:
    if (ctx->pc == 0x1AAA10u) {
        ctx->pc = 0x1AAA10u;
            // 0x1aaa10: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x1AAA14u;
        goto label_1aaa14;
    }
    ctx->pc = 0x1AAA0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AAA14u);
        ctx->pc = 0x1AAA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAA0Cu;
            // 0x1aaa10: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AAA14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AAA14u; }
            if (ctx->pc != 0x1AAA14u) { return; }
        }
        }
    }
    ctx->pc = 0x1AAA14u;
label_1aaa14:
    // 0x1aaa14: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1aaa14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1aaa18:
    // 0x1aaa18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aaa18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aaa1c:
    // 0x1aaa1c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aaa1cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aaa20:
    // 0x1aaa20: 0xc0b7f78  jal         func_2DFDE0
label_1aaa24:
    if (ctx->pc == 0x1AAA24u) {
        ctx->pc = 0x1AAA24u;
            // 0x1aaa24: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AAA28u;
        goto label_1aaa28;
    }
    ctx->pc = 0x1AAA20u;
    SET_GPR_U32(ctx, 31, 0x1AAA28u);
    ctx->pc = 0x1AAA24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAA20u;
            // 0x1aaa24: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DFDE0u;
    if (runtime->hasFunction(0x2DFDE0u)) {
        auto targetFn = runtime->lookupFunction(0x2DFDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAA28u; }
        if (ctx->pc != 0x1AAA28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__16CEffectScriptManFP9mgCMemoryii_0x2dfde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAA28u; }
        if (ctx->pc != 0x1AAA28u) { return; }
    }
    ctx->pc = 0x1AAA28u;
label_1aaa28:
    // 0x1aaa28: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x1aaa28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
label_1aaa2c:
    // 0x1aaa2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aaa2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aaa30:
    // 0x1aaa30: 0x24a5ea20  addiu       $a1, $a1, -0x15E0
    ctx->pc = 0x1aaa30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961696));
label_1aaa34:
    // 0x1aaa34: 0x240600ad  addiu       $a2, $zero, 0xAD
    ctx->pc = 0x1aaa34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
label_1aaa38:
    // 0x1aaa38: 0xc0b7f78  jal         func_2DFDE0
label_1aaa3c:
    if (ctx->pc == 0x1AAA3Cu) {
        ctx->pc = 0x1AAA3Cu;
            // 0x1aaa3c: 0x2407000b  addiu       $a3, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x1AAA40u;
        goto label_1aaa40;
    }
    ctx->pc = 0x1AAA38u;
    SET_GPR_U32(ctx, 31, 0x1AAA40u);
    ctx->pc = 0x1AAA3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAA38u;
            // 0x1aaa3c: 0x2407000b  addiu       $a3, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DFDE0u;
    if (runtime->hasFunction(0x2DFDE0u)) {
        auto targetFn = runtime->lookupFunction(0x2DFDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAA40u; }
        if (ctx->pc != 0x1AAA40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__16CEffectScriptManFP9mgCMemoryii_0x2dfde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAA40u; }
        if (ctx->pc != 0x1AAA40u) { return; }
    }
    ctx->pc = 0x1AAA40u;
label_1aaa40:
    // 0x1aaa40: 0x8f828ac0  lw          $v0, -0x7540($gp)
    ctx->pc = 0x1aaa40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
label_1aaa44:
    // 0x1aaa44: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x1aaa44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
label_1aaa48:
    // 0x1aaa48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aaa48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aaa4c:
    // 0x1aaa4c: 0x24a5e9c0  addiu       $a1, $a1, -0x1640
    ctx->pc = 0x1aaa4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961600));
label_1aaa50:
    // 0x1aaa50: 0xc0b7fc4  jal         func_2DFF10
label_1aaa54:
    if (ctx->pc == 0x1AAA54u) {
        ctx->pc = 0x1AAA54u;
            // 0x1aaa54: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->pc = 0x1AAA58u;
        goto label_1aaa58;
    }
    ctx->pc = 0x1AAA50u;
    SET_GPR_U32(ctx, 31, 0x1AAA58u);
    ctx->pc = 0x1AAA54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAA50u;
            // 0x1aaa54: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DFF10u;
    if (runtime->hasFunction(0x2DFF10u)) {
        auto targetFn = runtime->lookupFunction(0x2DFF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAA58u; }
        if (ctx->pc != 0x1AAA58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWorkBuffer__16CEffectScriptManFP9mgCMemory_0x2dff10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAA58u; }
        if (ctx->pc != 0x1AAA58u) { return; }
    }
    ctx->pc = 0x1AAA58u;
label_1aaa58:
    // 0x1aaa58: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1aaa58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1aaa5c:
    // 0x1aaa5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aaa5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aaa60:
    // 0x1aaa60: 0x24a56260  addiu       $a1, $a1, 0x6260
    ctx->pc = 0x1aaa60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25184));
label_1aaa64:
    // 0x1aaa64: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aaa64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aaa68:
    // 0x1aaa68: 0xc0b8040  jal         func_2E0100
label_1aaa6c:
    if (ctx->pc == 0x1AAA6Cu) {
        ctx->pc = 0x1AAA6Cu;
            // 0x1aaa6c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1AAA70u;
        goto label_1aaa70;
    }
    ctx->pc = 0x1AAA68u;
    SET_GPR_U32(ctx, 31, 0x1AAA70u);
    ctx->pc = 0x1AAA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAA68u;
            // 0x1aaa6c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0100u;
    if (runtime->hasFunction(0x2E0100u)) {
        auto targetFn = runtime->lookupFunction(0x2E0100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAA70u; }
        if (ctx->pc != 0x1AAA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadBaseEffSpt__16CEffectScriptManFPcP9mgCMemoryi_0x2e0100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAA70u; }
        if (ctx->pc != 0x1AAA70u) { return; }
    }
    ctx->pc = 0x1AAA70u;
label_1aaa70:
    // 0x1aaa70: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1aaa70u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1aaa74:
    // 0x1aaa74: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aaa74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aaa78:
    // 0x1aaa78: 0x24a56268  addiu       $a1, $a1, 0x6268
    ctx->pc = 0x1aaa78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25192));
label_1aaa7c:
    // 0x1aaa7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aaa7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aaa80:
    // 0x1aaa80: 0xc0b8040  jal         func_2E0100
label_1aaa84:
    if (ctx->pc == 0x1AAA84u) {
        ctx->pc = 0x1AAA84u;
            // 0x1aaa84: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1AAA88u;
        goto label_1aaa88;
    }
    ctx->pc = 0x1AAA80u;
    SET_GPR_U32(ctx, 31, 0x1AAA88u);
    ctx->pc = 0x1AAA84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAA80u;
            // 0x1aaa84: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0100u;
    if (runtime->hasFunction(0x2E0100u)) {
        auto targetFn = runtime->lookupFunction(0x2E0100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAA88u; }
        if (ctx->pc != 0x1AAA88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadBaseEffSpt__16CEffectScriptManFPcP9mgCMemoryi_0x2e0100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAA88u; }
        if (ctx->pc != 0x1AAA88u) { return; }
    }
    ctx->pc = 0x1AAA88u;
label_1aaa88:
    // 0x1aaa88: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1aaa88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1aaa8c:
    // 0x1aaa8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aaa8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aaa90:
    // 0x1aaa90: 0x24a56270  addiu       $a1, $a1, 0x6270
    ctx->pc = 0x1aaa90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25200));
label_1aaa94:
    // 0x1aaa94: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aaa94u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aaa98:
    // 0x1aaa98: 0xc0b8040  jal         func_2E0100
label_1aaa9c:
    if (ctx->pc == 0x1AAA9Cu) {
        ctx->pc = 0x1AAA9Cu;
            // 0x1aaa9c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1AAAA0u;
        goto label_1aaaa0;
    }
    ctx->pc = 0x1AAA98u;
    SET_GPR_U32(ctx, 31, 0x1AAAA0u);
    ctx->pc = 0x1AAA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAA98u;
            // 0x1aaa9c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0100u;
    if (runtime->hasFunction(0x2E0100u)) {
        auto targetFn = runtime->lookupFunction(0x2E0100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAAA0u; }
        if (ctx->pc != 0x1AAAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadBaseEffSpt__16CEffectScriptManFPcP9mgCMemoryi_0x2e0100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAAA0u; }
        if (ctx->pc != 0x1AAAA0u) { return; }
    }
    ctx->pc = 0x1AAAA0u;
label_1aaaa0:
    // 0x1aaaa0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1aaaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1aaaa4:
    // 0x1aaaa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aaaa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aaaa8:
    // 0x1aaaa8: 0x24a56280  addiu       $a1, $a1, 0x6280
    ctx->pc = 0x1aaaa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25216));
label_1aaaac:
    // 0x1aaaac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aaaacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aaab0:
    // 0x1aaab0: 0xc0b8040  jal         func_2E0100
label_1aaab4:
    if (ctx->pc == 0x1AAAB4u) {
        ctx->pc = 0x1AAAB4u;
            // 0x1aaab4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1AAAB8u;
        goto label_1aaab8;
    }
    ctx->pc = 0x1AAAB0u;
    SET_GPR_U32(ctx, 31, 0x1AAAB8u);
    ctx->pc = 0x1AAAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAAB0u;
            // 0x1aaab4: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0100u;
    if (runtime->hasFunction(0x2E0100u)) {
        auto targetFn = runtime->lookupFunction(0x2E0100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAAB8u; }
        if (ctx->pc != 0x1AAAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadBaseEffSpt__16CEffectScriptManFPcP9mgCMemoryi_0x2e0100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAAB8u; }
        if (ctx->pc != 0x1AAAB8u) { return; }
    }
    ctx->pc = 0x1AAAB8u;
label_1aaab8:
    // 0x1aaab8: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1aaab8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1aaabc:
    // 0x1aaabc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1aaabcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aaac0:
    // 0x1aaac0: 0x24a56288  addiu       $a1, $a1, 0x6288
    ctx->pc = 0x1aaac0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25224));
label_1aaac4:
    // 0x1aaac4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aaac4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aaac8:
    // 0x1aaac8: 0xc0b8040  jal         func_2E0100
label_1aaacc:
    if (ctx->pc == 0x1AAACCu) {
        ctx->pc = 0x1AAACCu;
            // 0x1aaacc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1AAAD0u;
        goto label_1aaad0;
    }
    ctx->pc = 0x1AAAC8u;
    SET_GPR_U32(ctx, 31, 0x1AAAD0u);
    ctx->pc = 0x1AAACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAAC8u;
            // 0x1aaacc: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E0100u;
    if (runtime->hasFunction(0x2E0100u)) {
        auto targetFn = runtime->lookupFunction(0x2E0100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAAD0u; }
        if (ctx->pc != 0x1AAAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadBaseEffSpt__16CEffectScriptManFPcP9mgCMemoryi_0x2e0100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAAD0u; }
        if (ctx->pc != 0x1AAAD0u) { return; }
    }
    ctx->pc = 0x1AAAD0u;
label_1aaad0:
    // 0x1aaad0: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1aaad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1aaad4:
    // 0x1aaad4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1aaad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aaad8:
    // 0x1aaad8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aaad8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aaadc:
    // 0x1aaadc: 0xc0a1128  jal         func_2844A0
label_1aaae0:
    if (ctx->pc == 0x1AAAE0u) {
        ctx->pc = 0x1AAAE0u;
            // 0x1aaae0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AAAE4u;
        goto label_1aaae4;
    }
    ctx->pc = 0x1AAADCu;
    SET_GPR_U32(ctx, 31, 0x1AAAE4u);
    ctx->pc = 0x1AAAE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAADCu;
            // 0x1aaae0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2844A0u;
    if (runtime->hasFunction(0x2844A0u)) {
        auto targetFn = runtime->lookupFunction(0x2844A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAAE4u; }
        if (ctx->pc != 0x1AAAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignEffect__6CSceneFiP16CEffectScriptManPc_0x2844a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAAE4u; }
        if (ctx->pc != 0x1AAAE4u) { return; }
    }
    ctx->pc = 0x1AAAE4u;
label_1aaae4:
    // 0x1aaae4: 0x8f838ac0  lw          $v1, -0x7540($gp)
    ctx->pc = 0x1aaae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
label_1aaae8:
    // 0x1aaae8: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1aaae8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1aaaec:
    // 0x1aaaec: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1aaaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1aaaf0:
    // 0x1aaaf0: 0x2484ea20  addiu       $a0, $a0, -0x15E0
    ctx->pc = 0x1aaaf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
label_1aaaf4:
    // 0x1aaaf4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aaaf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aaaf8:
    // 0x1aaaf8: 0xc04e714  jal         func_139C50
label_1aaafc:
    if (ctx->pc == 0x1AAAFCu) {
        ctx->pc = 0x1AAAFCu;
            // 0x1aaafc: 0xac43003c  sw          $v1, 0x3C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
        ctx->pc = 0x1AAB00u;
        goto label_1aab00;
    }
    ctx->pc = 0x1AAAF8u;
    SET_GPR_U32(ctx, 31, 0x1AAB00u);
    ctx->pc = 0x1AAAFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAAF8u;
            // 0x1aaafc: 0xac43003c  sw          $v1, 0x3C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C50u;
    if (runtime->hasFunction(0x139C50u)) {
        auto targetFn = runtime->lookupFunction(0x139C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAB00u; }
        if (ctx->pc != 0x1AAB00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAllocTest__9mgCMemoryFi_0x139c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAB00u; }
        if (ctx->pc != 0x1AAB00u) { return; }
    }
    ctx->pc = 0x1AAB00u;
label_1aab00:
    // 0x1aab00: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1aab00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_1aab04:
    // 0x1aab04: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1aab04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aab08:
    // 0x1aab08: 0x24846290  addiu       $a0, $a0, 0x6290
    ctx->pc = 0x1aab08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25232));
label_1aab0c:
    // 0x1aab0c: 0x27a6031c  addiu       $a2, $sp, 0x31C
    ctx->pc = 0x1aab0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 796));
label_1aab10:
    // 0x1aab10: 0xc0524dc  jal         func_149370
label_1aab14:
    if (ctx->pc == 0x1AAB14u) {
        ctx->pc = 0x1AAB14u;
            // 0x1aab14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AAB18u;
        goto label_1aab18;
    }
    ctx->pc = 0x1AAB10u;
    SET_GPR_U32(ctx, 31, 0x1AAB18u);
    ctx->pc = 0x1AAB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAB10u;
            // 0x1aab14: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAB18u; }
        if (ctx->pc != 0x1AAB18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAB18u; }
        if (ctx->pc != 0x1AAB18u) { return; }
    }
    ctx->pc = 0x1AAB18u;
label_1aab18:
    // 0x1aab18: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_1aab1c:
    if (ctx->pc == 0x1AAB1Cu) {
        ctx->pc = 0x1AAB20u;
        goto label_1aab20;
    }
    ctx->pc = 0x1AAB18u;
    {
        const bool branch_taken_0x1aab18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aab18) {
            ctx->pc = 0x1AAB5Cu;
            goto label_1aab5c;
        }
    }
    ctx->pc = 0x1AAB20u;
label_1aab20:
    // 0x1aab20: 0x8fa3031c  lw          $v1, 0x31C($sp)
    ctx->pc = 0x1aab20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 796)));
label_1aab24:
    // 0x1aab24: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x1aab24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_1aab28:
    // 0x1aab28: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1aab2c:
    if (ctx->pc == 0x1AAB2Cu) {
        ctx->pc = 0x1AAB2Cu;
            // 0x1aab2c: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x1AAB30u;
        goto label_1aab30;
    }
    ctx->pc = 0x1AAB28u;
    {
        const bool branch_taken_0x1aab28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAB2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAB28u;
            // 0x1aab2c: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aab28) {
            ctx->pc = 0x1AAB38u;
            goto label_1aab38;
        }
    }
    ctx->pc = 0x1AAB30u;
label_1aab30:
    // 0x1aab30: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x1aab30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_1aab34:
    // 0x1aab34: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x1aab34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1aab38:
    // 0x1aab38: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1aab38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1aab3c:
    // 0x1aab3c: 0xc04e748  jal         func_139D20
label_1aab40:
    if (ctx->pc == 0x1AAB40u) {
        ctx->pc = 0x1AAB40u;
            // 0x1aab40: 0x2484ea20  addiu       $a0, $a0, -0x15E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
        ctx->pc = 0x1AAB44u;
        goto label_1aab44;
    }
    ctx->pc = 0x1AAB3Cu;
    SET_GPR_U32(ctx, 31, 0x1AAB44u);
    ctx->pc = 0x1AAB40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAB3Cu;
            // 0x1aab40: 0x2484ea20  addiu       $a0, $a0, -0x15E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAB44u; }
        if (ctx->pc != 0x1AAB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAB44u; }
        if (ctx->pc != 0x1AAB44u) { return; }
    }
    ctx->pc = 0x1AAB44u;
label_1aab44:
    // 0x1aab44: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1aab44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aab48:
    // 0x1aab48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aab48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aab4c:
    // 0x1aab4c: 0x2406009d  addiu       $a2, $zero, 0x9D
    ctx->pc = 0x1aab4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
label_1aab50:
    // 0x1aab50: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1aab50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aab54:
    // 0x1aab54: 0xc04b6a4  jal         func_12DA90
label_1aab58:
    if (ctx->pc == 0x1AAB58u) {
        ctx->pc = 0x1AAB58u;
            // 0x1aab58: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AAB5Cu;
        goto label_1aab5c;
    }
    ctx->pc = 0x1AAB54u;
    SET_GPR_U32(ctx, 31, 0x1AAB5Cu);
    ctx->pc = 0x1AAB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAB54u;
            // 0x1aab58: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAB5Cu; }
        if (ctx->pc != 0x1AAB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAB5Cu; }
        if (ctx->pc != 0x1AAB5Cu) { return; }
    }
    ctx->pc = 0x1AAB5Cu;
label_1aab5c:
    // 0x1aab5c: 0xc0c2678  jal         func_3099E0
label_1aab60:
    if (ctx->pc == 0x1AAB60u) {
        ctx->pc = 0x1AAB64u;
        goto label_1aab64;
    }
    ctx->pc = 0x1AAB5Cu;
    SET_GPR_U32(ctx, 31, 0x1AAB64u);
    ctx->pc = 0x3099E0u;
    if (runtime->hasFunction(0x3099E0u)) {
        auto targetFn = runtime->lookupFunction(0x3099E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAB64u; }
        if (ctx->pc != 0x1AAB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowLoadingBarStep__Fv_0x3099e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAB64u; }
        if (ctx->pc != 0x1AAB64u) { return; }
    }
    ctx->pc = 0x1AAB64u;
label_1aab64:
    // 0x1aab64: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1aab64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1aab68:
    // 0x1aab68: 0x2405081a  addiu       $a1, $zero, 0x81A
    ctx->pc = 0x1aab68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2074));
label_1aab6c:
    // 0x1aab6c: 0xc04e748  jal         func_139D20
label_1aab70:
    if (ctx->pc == 0x1AAB70u) {
        ctx->pc = 0x1AAB70u;
            // 0x1aab70: 0x2484ea20  addiu       $a0, $a0, -0x15E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
        ctx->pc = 0x1AAB74u;
        goto label_1aab74;
    }
    ctx->pc = 0x1AAB6Cu;
    SET_GPR_U32(ctx, 31, 0x1AAB74u);
    ctx->pc = 0x1AAB70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAB6Cu;
            // 0x1aab70: 0x2484ea20  addiu       $a0, $a0, -0x15E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAB74u; }
        if (ctx->pc != 0x1AAB74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAB74u; }
        if (ctx->pc != 0x1AAB74u) { return; }
    }
    ctx->pc = 0x1AAB74u;
label_1aab74:
    // 0x1aab74: 0x34048190  ori         $a0, $zero, 0x8190
    ctx->pc = 0x1aab74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33168);
label_1aab78:
    // 0x1aab78: 0xc04e63c  jal         func_1398F0
label_1aab7c:
    if (ctx->pc == 0x1AAB7Cu) {
        ctx->pc = 0x1AAB7Cu;
            // 0x1aab7c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AAB80u;
        goto label_1aab80;
    }
    ctx->pc = 0x1AAB78u;
    SET_GPR_U32(ctx, 31, 0x1AAB80u);
    ctx->pc = 0x1AAB7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAB78u;
            // 0x1aab7c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398F0u;
    if (runtime->hasFunction(0x1398F0u)) {
        auto targetFn = runtime->lookupFunction(0x1398F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAB80u; }
        if (ctx->pc != 0x1AAB80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nwa__FUiP1_0x1398f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAB80u; }
        if (ctx->pc != 0x1AAB80u) { return; }
    }
    ctx->pc = 0x1AAB80u;
label_1aab80:
    // 0x1aab80: 0x3c05001b  lui         $a1, 0x1B
    ctx->pc = 0x1aab80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27 << 16));
label_1aab84:
    // 0x1aab84: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1aab84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aab88:
    // 0x1aab88: 0x24a5bb10  addiu       $a1, $a1, -0x44F0
    ctx->pc = 0x1aab88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949648));
label_1aab8c:
    // 0x1aab8c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1aab8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aab90:
    // 0x1aab90: 0x24071030  addiu       $a3, $zero, 0x1030
    ctx->pc = 0x1aab90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4144));
label_1aab94:
    // 0x1aab94: 0xc0400bc  jal         func_1002F0
label_1aab98:
    if (ctx->pc == 0x1AAB98u) {
        ctx->pc = 0x1AAB98u;
            // 0x1aab98: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x1AAB9Cu;
        goto label_1aab9c;
    }
    ctx->pc = 0x1AAB94u;
    SET_GPR_U32(ctx, 31, 0x1AAB9Cu);
    ctx->pc = 0x1AAB98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAB94u;
            // 0x1aab98: 0x24080008  addiu       $t0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002F0u;
    if (runtime->hasFunction(0x1002F0u)) {
        auto targetFn = runtime->lookupFunction(0x1002F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAB9Cu; }
        if (ctx->pc != 0x1AAB9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___construct_new_array_0x1002f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAB9Cu; }
        if (ctx->pc != 0x1AAB9Cu) { return; }
    }
    ctx->pc = 0x1AAB9Cu;
label_1aab9c:
    // 0x1aab9c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1aab9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aaba0:
    // 0x1aaba0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1aaba0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aaba4:
    // 0x1aaba4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1aaba4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aaba8:
    // 0x1aaba8: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1aaba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1aabac:
    // 0x1aabac: 0x2503021  addu        $a2, $s2, $s0
    ctx->pc = 0x1aabacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_1aabb0:
    // 0x1aabb0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x1aabb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1aabb4:
    // 0x1aabb4: 0xc0a0e8c  jal         func_283A30
label_1aabb8:
    if (ctx->pc == 0x1AABB8u) {
        ctx->pc = 0x1AABB8u;
            // 0x1aabb8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AABBCu;
        goto label_1aabbc;
    }
    ctx->pc = 0x1AABB4u;
    SET_GPR_U32(ctx, 31, 0x1AABBCu);
    ctx->pc = 0x1AABB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AABB4u;
            // 0x1aabb8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283A30u;
    if (runtime->hasFunction(0x283A30u)) {
        auto targetFn = runtime->lookupFunction(0x283A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AABBCu; }
        if (ctx->pc != 0x1AABBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignChara__6CSceneFiP11CCharacter2Pc_0x283a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AABBCu; }
        if (ctx->pc != 0x1AABBCu) { return; }
    }
    ctx->pc = 0x1AABBCu;
label_1aabbc:
    // 0x1aabbc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1aabbcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1aabc0:
    // 0x1aabc0: 0x2a620008  slti        $v0, $s3, 0x8
    ctx->pc = 0x1aabc0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
label_1aabc4:
    // 0x1aabc4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_1aabc8:
    if (ctx->pc == 0x1AABC8u) {
        ctx->pc = 0x1AABC8u;
            // 0x1aabc8: 0x26101030  addiu       $s0, $s0, 0x1030 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4144));
        ctx->pc = 0x1AABCCu;
        goto label_1aabcc;
    }
    ctx->pc = 0x1AABC4u;
    {
        const bool branch_taken_0x1aabc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AABC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AABC4u;
            // 0x1aabc8: 0x26101030  addiu       $s0, $s0, 0x1030 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aabc4) {
            ctx->pc = 0x1AABA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1aaba8;
        }
    }
    ctx->pc = 0x1AABCCu;
label_1aabcc:
    // 0x1aabcc: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1aabccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1aabd0:
    // 0x1aabd0: 0x3c0601ea  lui         $a2, 0x1EA
    ctx->pc = 0x1aabd0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)490 << 16));
label_1aabd4:
    // 0x1aabd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aabd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aabd8:
    // 0x1aabd8: 0x24c6c660  addiu       $a2, $a2, -0x39A0
    ctx->pc = 0x1aabd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294952544));
label_1aabdc:
    // 0x1aabdc: 0xc0a0e44  jal         func_283910
label_1aabe0:
    if (ctx->pc == 0x1AABE0u) {
        ctx->pc = 0x1AABE0u;
            // 0x1aabe0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AABE4u;
        goto label_1aabe4;
    }
    ctx->pc = 0x1AABDCu;
    SET_GPR_U32(ctx, 31, 0x1AABE4u);
    ctx->pc = 0x1AABE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AABDCu;
            // 0x1aabe0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283910u;
    if (runtime->hasFunction(0x283910u)) {
        auto targetFn = runtime->lookupFunction(0x283910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AABE4u; }
        if (ctx->pc != 0x1AABE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignMessage__6CSceneFiP6ClsMesPc_0x283910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AABE4u; }
        if (ctx->pc != 0x1AABE4u) { return; }
    }
    ctx->pc = 0x1AABE4u;
label_1aabe4:
    // 0x1aabe4: 0xc0659dc  jal         func_196770
label_1aabe8:
    if (ctx->pc == 0x1AABE8u) {
        ctx->pc = 0x1AABE8u;
            // 0x1aabe8: 0x2410009a  addiu       $s0, $zero, 0x9A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
        ctx->pc = 0x1AABECu;
        goto label_1aabec;
    }
    ctx->pc = 0x1AABE4u;
    SET_GPR_U32(ctx, 31, 0x1AABECu);
    ctx->pc = 0x1AABE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AABE4u;
            // 0x1aabe8: 0x2410009a  addiu       $s0, $zero, 0x9A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196770u;
    if (runtime->hasFunction(0x196770u)) {
        auto targetFn = runtime->lookupFunction(0x196770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AABECu; }
        if (ctx->pc != 0x1AABECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMessage__Fv_0x196770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AABECu; }
        if (ctx->pc != 0x1AABECu) { return; }
    }
    ctx->pc = 0x1AABECu;
label_1aabec:
    // 0x1aabec: 0xc0659dc  jal         func_196770
label_1aabf0:
    if (ctx->pc == 0x1AABF0u) {
        ctx->pc = 0x1AABF0u;
            // 0x1aabf0: 0xac501b2c  sw          $s0, 0x1B2C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 6956), GPR_U32(ctx, 16));
        ctx->pc = 0x1AABF4u;
        goto label_1aabf4;
    }
    ctx->pc = 0x1AABECu;
    SET_GPR_U32(ctx, 31, 0x1AABF4u);
    ctx->pc = 0x1AABF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AABECu;
            // 0x1aabf0: 0xac501b2c  sw          $s0, 0x1B2C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 6956), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196770u;
    if (runtime->hasFunction(0x196770u)) {
        auto targetFn = runtime->lookupFunction(0x196770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AABF4u; }
        if (ctx->pc != 0x1AABF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMessage__Fv_0x196770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AABF4u; }
        if (ctx->pc != 0x1AABF4u) { return; }
    }
    ctx->pc = 0x1AABF4u;
label_1aabf4:
    // 0x1aabf4: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1aabf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1aabf8:
    // 0x1aabf8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1aabf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aabfc:
    // 0x1aabfc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aabfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aac00:
    // 0x1aac00: 0xc0a0e44  jal         func_283910
label_1aac04:
    if (ctx->pc == 0x1AAC04u) {
        ctx->pc = 0x1AAC04u;
            // 0x1aac04: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AAC08u;
        goto label_1aac08;
    }
    ctx->pc = 0x1AAC00u;
    SET_GPR_U32(ctx, 31, 0x1AAC08u);
    ctx->pc = 0x1AAC04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAC00u;
            // 0x1aac04: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283910u;
    if (runtime->hasFunction(0x283910u)) {
        auto targetFn = runtime->lookupFunction(0x283910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAC08u; }
        if (ctx->pc != 0x1AAC08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignMessage__6CSceneFiP6ClsMesPc_0x283910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAC08u; }
        if (ctx->pc != 0x1AAC08u) { return; }
    }
    ctx->pc = 0x1AAC08u;
label_1aac08:
    // 0x1aac08: 0xc0659e0  jal         func_196780
label_1aac0c:
    if (ctx->pc == 0x1AAC0Cu) {
        ctx->pc = 0x1AAC0Cu;
            // 0x1aac0c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1AAC10u;
        goto label_1aac10;
    }
    ctx->pc = 0x1AAC08u;
    SET_GPR_U32(ctx, 31, 0x1AAC10u);
    ctx->pc = 0x1AAC0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAC08u;
            // 0x1aac0c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196780u;
    if (runtime->hasFunction(0x196780u)) {
        auto targetFn = runtime->lookupFunction(0x196780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAC10u; }
        if (ctx->pc != 0x1AAC10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMessage__Fi_0x196780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAC10u; }
        if (ctx->pc != 0x1AAC10u) { return; }
    }
    ctx->pc = 0x1AAC10u;
label_1aac10:
    // 0x1aac10: 0xac501b2c  sw          $s0, 0x1B2C($v0)
    ctx->pc = 0x1aac10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6956), GPR_U32(ctx, 16));
label_1aac14:
    // 0x1aac14: 0xc0659e0  jal         func_196780
label_1aac18:
    if (ctx->pc == 0x1AAC18u) {
        ctx->pc = 0x1AAC18u;
            // 0x1aac18: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1AAC1Cu;
        goto label_1aac1c;
    }
    ctx->pc = 0x1AAC14u;
    SET_GPR_U32(ctx, 31, 0x1AAC1Cu);
    ctx->pc = 0x1AAC18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAC14u;
            // 0x1aac18: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196780u;
    if (runtime->hasFunction(0x196780u)) {
        auto targetFn = runtime->lookupFunction(0x196780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAC1Cu; }
        if (ctx->pc != 0x1AAC1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMessage__Fi_0x196780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAC1Cu; }
        if (ctx->pc != 0x1AAC1Cu) { return; }
    }
    ctx->pc = 0x1AAC1Cu;
label_1aac1c:
    // 0x1aac1c: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1aac1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1aac20:
    // 0x1aac20: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1aac20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aac24:
    // 0x1aac24: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1aac24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1aac28:
    // 0x1aac28: 0xc0a0e44  jal         func_283910
label_1aac2c:
    if (ctx->pc == 0x1AAC2Cu) {
        ctx->pc = 0x1AAC2Cu;
            // 0x1aac2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AAC30u;
        goto label_1aac30;
    }
    ctx->pc = 0x1AAC28u;
    SET_GPR_U32(ctx, 31, 0x1AAC30u);
    ctx->pc = 0x1AAC2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAC28u;
            // 0x1aac2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283910u;
    if (runtime->hasFunction(0x283910u)) {
        auto targetFn = runtime->lookupFunction(0x283910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAC30u; }
        if (ctx->pc != 0x1AAC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignMessage__6CSceneFiP6ClsMesPc_0x283910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAC30u; }
        if (ctx->pc != 0x1AAC30u) { return; }
    }
    ctx->pc = 0x1AAC30u;
label_1aac30:
    // 0x1aac30: 0xc0659e0  jal         func_196780
label_1aac34:
    if (ctx->pc == 0x1AAC34u) {
        ctx->pc = 0x1AAC34u;
            // 0x1aac34: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1AAC38u;
        goto label_1aac38;
    }
    ctx->pc = 0x1AAC30u;
    SET_GPR_U32(ctx, 31, 0x1AAC38u);
    ctx->pc = 0x1AAC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAC30u;
            // 0x1aac34: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196780u;
    if (runtime->hasFunction(0x196780u)) {
        auto targetFn = runtime->lookupFunction(0x196780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAC38u; }
        if (ctx->pc != 0x1AAC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMessage__Fi_0x196780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAC38u; }
        if (ctx->pc != 0x1AAC38u) { return; }
    }
    ctx->pc = 0x1AAC38u;
label_1aac38:
    // 0x1aac38: 0xac501b2c  sw          $s0, 0x1B2C($v0)
    ctx->pc = 0x1aac38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 6956), GPR_U32(ctx, 16));
label_1aac3c:
    // 0x1aac3c: 0xc0659e0  jal         func_196780
label_1aac40:
    if (ctx->pc == 0x1AAC40u) {
        ctx->pc = 0x1AAC40u;
            // 0x1aac40: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1AAC44u;
        goto label_1aac44;
    }
    ctx->pc = 0x1AAC3Cu;
    SET_GPR_U32(ctx, 31, 0x1AAC44u);
    ctx->pc = 0x1AAC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAC3Cu;
            // 0x1aac40: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196780u;
    if (runtime->hasFunction(0x196780u)) {
        auto targetFn = runtime->lookupFunction(0x196780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAC44u; }
        if (ctx->pc != 0x1AAC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMessage__Fi_0x196780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAC44u; }
        if (ctx->pc != 0x1AAC44u) { return; }
    }
    ctx->pc = 0x1AAC44u;
label_1aac44:
    // 0x1aac44: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1aac44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1aac48:
    // 0x1aac48: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1aac48u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aac4c:
    // 0x1aac4c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1aac4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1aac50:
    // 0x1aac50: 0xc0a0e44  jal         func_283910
label_1aac54:
    if (ctx->pc == 0x1AAC54u) {
        ctx->pc = 0x1AAC54u;
            // 0x1aac54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AAC58u;
        goto label_1aac58;
    }
    ctx->pc = 0x1AAC50u;
    SET_GPR_U32(ctx, 31, 0x1AAC58u);
    ctx->pc = 0x1AAC54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAC50u;
            // 0x1aac54: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283910u;
    if (runtime->hasFunction(0x283910u)) {
        auto targetFn = runtime->lookupFunction(0x283910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAC58u; }
        if (ctx->pc != 0x1AAC58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignMessage__6CSceneFiP6ClsMesPc_0x283910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAC58u; }
        if (ctx->pc != 0x1AAC58u) { return; }
    }
    ctx->pc = 0x1AAC58u;
label_1aac58:
    // 0x1aac58: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1aac58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1aac5c:
    // 0x1aac5c: 0x24050021  addiu       $a1, $zero, 0x21
    ctx->pc = 0x1aac5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_1aac60:
    // 0x1aac60: 0xc04e748  jal         func_139D20
label_1aac64:
    if (ctx->pc == 0x1AAC64u) {
        ctx->pc = 0x1AAC64u;
            // 0x1aac64: 0x2484ea20  addiu       $a0, $a0, -0x15E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
        ctx->pc = 0x1AAC68u;
        goto label_1aac68;
    }
    ctx->pc = 0x1AAC60u;
    SET_GPR_U32(ctx, 31, 0x1AAC68u);
    ctx->pc = 0x1AAC64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAC60u;
            // 0x1aac64: 0x2484ea20  addiu       $a0, $a0, -0x15E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAC68u; }
        if (ctx->pc != 0x1AAC68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAC68u; }
        if (ctx->pc != 0x1AAC68u) { return; }
    }
    ctx->pc = 0x1AAC68u;
label_1aac68:
    // 0x1aac68: 0x240401f0  addiu       $a0, $zero, 0x1F0
    ctx->pc = 0x1aac68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
label_1aac6c:
    // 0x1aac6c: 0xc04e638  jal         func_1398E0
label_1aac70:
    if (ctx->pc == 0x1AAC70u) {
        ctx->pc = 0x1AAC70u;
            // 0x1aac70: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AAC74u;
        goto label_1aac74;
    }
    ctx->pc = 0x1AAC6Cu;
    SET_GPR_U32(ctx, 31, 0x1AAC74u);
    ctx->pc = 0x1AAC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAC6Cu;
            // 0x1aac70: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAC74u; }
        if (ctx->pc != 0x1AAC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAC74u; }
        if (ctx->pc != 0x1AAC74u) { return; }
    }
    ctx->pc = 0x1AAC74u;
label_1aac74:
    // 0x1aac74: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1aac78:
    if (ctx->pc == 0x1AAC78u) {
        ctx->pc = 0x1AAC7Cu;
        goto label_1aac7c;
    }
    ctx->pc = 0x1AAC74u;
    {
        const bool branch_taken_0x1aac74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aac74) {
            ctx->pc = 0x1AAC84u;
            goto label_1aac84;
        }
    }
    ctx->pc = 0x1AAC7Cu;
label_1aac7c:
    // 0x1aac7c: 0xc0bafa0  jal         func_2EBE80
label_1aac80:
    if (ctx->pc == 0x1AAC80u) {
        ctx->pc = 0x1AAC80u;
            // 0x1aac80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AAC84u;
        goto label_1aac84;
    }
    ctx->pc = 0x1AAC7Cu;
    SET_GPR_U32(ctx, 31, 0x1AAC84u);
    ctx->pc = 0x1AAC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAC7Cu;
            // 0x1aac80: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBE80u;
    if (runtime->hasFunction(0x2EBE80u)) {
        auto targetFn = runtime->lookupFunction(0x2EBE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAC84u; }
        if (ctx->pc != 0x1AAC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__14CCameraControlFv_0x2ebe80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAC84u; }
        if (ctx->pc != 0x1AAC84u) { return; }
    }
    ctx->pc = 0x1AAC84u;
label_1aac84:
    // 0x1aac84: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1aac84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1aac88:
    // 0x1aac88: 0xaf828c5c  sw          $v0, -0x73A4($gp)
    ctx->pc = 0x1aac88u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937692), GPR_U32(ctx, 2));
label_1aac8c:
    // 0x1aac8c: 0x2484ea20  addiu       $a0, $a0, -0x15E0
    ctx->pc = 0x1aac8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
label_1aac90:
    // 0x1aac90: 0xc04e748  jal         func_139D20
label_1aac94:
    if (ctx->pc == 0x1AAC94u) {
        ctx->pc = 0x1AAC94u;
            // 0x1aac94: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->pc = 0x1AAC98u;
        goto label_1aac98;
    }
    ctx->pc = 0x1AAC90u;
    SET_GPR_U32(ctx, 31, 0x1AAC98u);
    ctx->pc = 0x1AAC94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAC90u;
            // 0x1aac94: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAC98u; }
        if (ctx->pc != 0x1AAC98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAC98u; }
        if (ctx->pc != 0x1AAC98u) { return; }
    }
    ctx->pc = 0x1AAC98u;
label_1aac98:
    // 0x1aac98: 0x240401f0  addiu       $a0, $zero, 0x1F0
    ctx->pc = 0x1aac98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
label_1aac9c:
    // 0x1aac9c: 0xc04e638  jal         func_1398E0
label_1aaca0:
    if (ctx->pc == 0x1AACA0u) {
        ctx->pc = 0x1AACA0u;
            // 0x1aaca0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AACA4u;
        goto label_1aaca4;
    }
    ctx->pc = 0x1AAC9Cu;
    SET_GPR_U32(ctx, 31, 0x1AACA4u);
    ctx->pc = 0x1AACA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAC9Cu;
            // 0x1aaca0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AACA4u; }
        if (ctx->pc != 0x1AACA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AACA4u; }
        if (ctx->pc != 0x1AACA4u) { return; }
    }
    ctx->pc = 0x1AACA4u;
label_1aaca4:
    // 0x1aaca4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1aaca8:
    if (ctx->pc == 0x1AACA8u) {
        ctx->pc = 0x1AACACu;
        goto label_1aacac;
    }
    ctx->pc = 0x1AACA4u;
    {
        const bool branch_taken_0x1aaca4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aaca4) {
            ctx->pc = 0x1AACB4u;
            goto label_1aacb4;
        }
    }
    ctx->pc = 0x1AACACu;
label_1aacac:
    // 0x1aacac: 0xc0bafa0  jal         func_2EBE80
label_1aacb0:
    if (ctx->pc == 0x1AACB0u) {
        ctx->pc = 0x1AACB0u;
            // 0x1aacb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AACB4u;
        goto label_1aacb4;
    }
    ctx->pc = 0x1AACACu;
    SET_GPR_U32(ctx, 31, 0x1AACB4u);
    ctx->pc = 0x1AACB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AACACu;
            // 0x1aacb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBE80u;
    if (runtime->hasFunction(0x2EBE80u)) {
        auto targetFn = runtime->lookupFunction(0x2EBE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AACB4u; }
        if (ctx->pc != 0x1AACB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__14CCameraControlFv_0x2ebe80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AACB4u; }
        if (ctx->pc != 0x1AACB4u) { return; }
    }
    ctx->pc = 0x1AACB4u;
label_1aacb4:
    // 0x1aacb4: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1aacb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1aacb8:
    // 0x1aacb8: 0xaf828c60  sw          $v0, -0x73A0($gp)
    ctx->pc = 0x1aacb8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937696), GPR_U32(ctx, 2));
label_1aacbc:
    // 0x1aacbc: 0x2484ea20  addiu       $a0, $a0, -0x15E0
    ctx->pc = 0x1aacbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
label_1aacc0:
    // 0x1aacc0: 0xc04e748  jal         func_139D20
label_1aacc4:
    if (ctx->pc == 0x1AACC4u) {
        ctx->pc = 0x1AACC4u;
            // 0x1aacc4: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->pc = 0x1AACC8u;
        goto label_1aacc8;
    }
    ctx->pc = 0x1AACC0u;
    SET_GPR_U32(ctx, 31, 0x1AACC8u);
    ctx->pc = 0x1AACC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AACC0u;
            // 0x1aacc4: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AACC8u; }
        if (ctx->pc != 0x1AACC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AACC8u; }
        if (ctx->pc != 0x1AACC8u) { return; }
    }
    ctx->pc = 0x1AACC8u;
label_1aacc8:
    // 0x1aacc8: 0x240401f0  addiu       $a0, $zero, 0x1F0
    ctx->pc = 0x1aacc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
label_1aaccc:
    // 0x1aaccc: 0xc04e638  jal         func_1398E0
label_1aacd0:
    if (ctx->pc == 0x1AACD0u) {
        ctx->pc = 0x1AACD0u;
            // 0x1aacd0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AACD4u;
        goto label_1aacd4;
    }
    ctx->pc = 0x1AACCCu;
    SET_GPR_U32(ctx, 31, 0x1AACD4u);
    ctx->pc = 0x1AACD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AACCCu;
            // 0x1aacd0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AACD4u; }
        if (ctx->pc != 0x1AACD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AACD4u; }
        if (ctx->pc != 0x1AACD4u) { return; }
    }
    ctx->pc = 0x1AACD4u;
label_1aacd4:
    // 0x1aacd4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1aacd8:
    if (ctx->pc == 0x1AACD8u) {
        ctx->pc = 0x1AACDCu;
        goto label_1aacdc;
    }
    ctx->pc = 0x1AACD4u;
    {
        const bool branch_taken_0x1aacd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aacd4) {
            ctx->pc = 0x1AACE4u;
            goto label_1aace4;
        }
    }
    ctx->pc = 0x1AACDCu;
label_1aacdc:
    // 0x1aacdc: 0xc0bafa0  jal         func_2EBE80
label_1aace0:
    if (ctx->pc == 0x1AACE0u) {
        ctx->pc = 0x1AACE0u;
            // 0x1aace0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AACE4u;
        goto label_1aace4;
    }
    ctx->pc = 0x1AACDCu;
    SET_GPR_U32(ctx, 31, 0x1AACE4u);
    ctx->pc = 0x1AACE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AACDCu;
            // 0x1aace0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBE80u;
    if (runtime->hasFunction(0x2EBE80u)) {
        auto targetFn = runtime->lookupFunction(0x2EBE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AACE4u; }
        if (ctx->pc != 0x1AACE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__14CCameraControlFv_0x2ebe80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AACE4u; }
        if (ctx->pc != 0x1AACE4u) { return; }
    }
    ctx->pc = 0x1AACE4u;
label_1aace4:
    // 0x1aace4: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1aace4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1aace8:
    // 0x1aace8: 0xaf828c64  sw          $v0, -0x739C($gp)
    ctx->pc = 0x1aace8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937700), GPR_U32(ctx, 2));
label_1aacec:
    // 0x1aacec: 0x2484ea20  addiu       $a0, $a0, -0x15E0
    ctx->pc = 0x1aacecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
label_1aacf0:
    // 0x1aacf0: 0xc04e748  jal         func_139D20
label_1aacf4:
    if (ctx->pc == 0x1AACF4u) {
        ctx->pc = 0x1AACF4u;
            // 0x1aacf4: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->pc = 0x1AACF8u;
        goto label_1aacf8;
    }
    ctx->pc = 0x1AACF0u;
    SET_GPR_U32(ctx, 31, 0x1AACF8u);
    ctx->pc = 0x1AACF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AACF0u;
            // 0x1aacf4: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AACF8u; }
        if (ctx->pc != 0x1AACF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AACF8u; }
        if (ctx->pc != 0x1AACF8u) { return; }
    }
    ctx->pc = 0x1AACF8u;
label_1aacf8:
    // 0x1aacf8: 0x240401f0  addiu       $a0, $zero, 0x1F0
    ctx->pc = 0x1aacf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
label_1aacfc:
    // 0x1aacfc: 0xc04e638  jal         func_1398E0
label_1aad00:
    if (ctx->pc == 0x1AAD00u) {
        ctx->pc = 0x1AAD00u;
            // 0x1aad00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AAD04u;
        goto label_1aad04;
    }
    ctx->pc = 0x1AACFCu;
    SET_GPR_U32(ctx, 31, 0x1AAD04u);
    ctx->pc = 0x1AAD00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AACFCu;
            // 0x1aad00: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAD04u; }
        if (ctx->pc != 0x1AAD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAD04u; }
        if (ctx->pc != 0x1AAD04u) { return; }
    }
    ctx->pc = 0x1AAD04u;
label_1aad04:
    // 0x1aad04: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1aad08:
    if (ctx->pc == 0x1AAD08u) {
        ctx->pc = 0x1AAD0Cu;
        goto label_1aad0c;
    }
    ctx->pc = 0x1AAD04u;
    {
        const bool branch_taken_0x1aad04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aad04) {
            ctx->pc = 0x1AAD14u;
            goto label_1aad14;
        }
    }
    ctx->pc = 0x1AAD0Cu;
label_1aad0c:
    // 0x1aad0c: 0xc0bafa0  jal         func_2EBE80
label_1aad10:
    if (ctx->pc == 0x1AAD10u) {
        ctx->pc = 0x1AAD10u;
            // 0x1aad10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AAD14u;
        goto label_1aad14;
    }
    ctx->pc = 0x1AAD0Cu;
    SET_GPR_U32(ctx, 31, 0x1AAD14u);
    ctx->pc = 0x1AAD10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAD0Cu;
            // 0x1aad10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBE80u;
    if (runtime->hasFunction(0x2EBE80u)) {
        auto targetFn = runtime->lookupFunction(0x2EBE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAD14u; }
        if (ctx->pc != 0x1AAD14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__14CCameraControlFv_0x2ebe80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAD14u; }
        if (ctx->pc != 0x1AAD14u) { return; }
    }
    ctx->pc = 0x1AAD14u;
label_1aad14:
    // 0x1aad14: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1aad14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1aad18:
    // 0x1aad18: 0xaf828c68  sw          $v0, -0x7398($gp)
    ctx->pc = 0x1aad18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937704), GPR_U32(ctx, 2));
label_1aad1c:
    // 0x1aad1c: 0x2484ea20  addiu       $a0, $a0, -0x15E0
    ctx->pc = 0x1aad1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
label_1aad20:
    // 0x1aad20: 0xc04e748  jal         func_139D20
label_1aad24:
    if (ctx->pc == 0x1AAD24u) {
        ctx->pc = 0x1AAD24u;
            // 0x1aad24: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->pc = 0x1AAD28u;
        goto label_1aad28;
    }
    ctx->pc = 0x1AAD20u;
    SET_GPR_U32(ctx, 31, 0x1AAD28u);
    ctx->pc = 0x1AAD24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAD20u;
            // 0x1aad24: 0x24050021  addiu       $a1, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAD28u; }
        if (ctx->pc != 0x1AAD28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAD28u; }
        if (ctx->pc != 0x1AAD28u) { return; }
    }
    ctx->pc = 0x1AAD28u;
label_1aad28:
    // 0x1aad28: 0x240401f0  addiu       $a0, $zero, 0x1F0
    ctx->pc = 0x1aad28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
label_1aad2c:
    // 0x1aad2c: 0xc04e638  jal         func_1398E0
label_1aad30:
    if (ctx->pc == 0x1AAD30u) {
        ctx->pc = 0x1AAD30u;
            // 0x1aad30: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AAD34u;
        goto label_1aad34;
    }
    ctx->pc = 0x1AAD2Cu;
    SET_GPR_U32(ctx, 31, 0x1AAD34u);
    ctx->pc = 0x1AAD30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAD2Cu;
            // 0x1aad30: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAD34u; }
        if (ctx->pc != 0x1AAD34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAD34u; }
        if (ctx->pc != 0x1AAD34u) { return; }
    }
    ctx->pc = 0x1AAD34u;
label_1aad34:
    // 0x1aad34: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1aad38:
    if (ctx->pc == 0x1AAD38u) {
        ctx->pc = 0x1AAD38u;
            // 0x1aad38: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AAD3Cu;
        goto label_1aad3c;
    }
    ctx->pc = 0x1AAD34u;
    {
        const bool branch_taken_0x1aad34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AAD38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAD34u;
            // 0x1aad38: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aad34) {
            ctx->pc = 0x1AAD48u;
            goto label_1aad48;
        }
    }
    ctx->pc = 0x1AAD3Cu;
label_1aad3c:
    // 0x1aad3c: 0xc0bafa0  jal         func_2EBE80
label_1aad40:
    if (ctx->pc == 0x1AAD40u) {
        ctx->pc = 0x1AAD40u;
            // 0x1aad40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AAD44u;
        goto label_1aad44;
    }
    ctx->pc = 0x1AAD3Cu;
    SET_GPR_U32(ctx, 31, 0x1AAD44u);
    ctx->pc = 0x1AAD40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAD3Cu;
            // 0x1aad40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBE80u;
    if (runtime->hasFunction(0x2EBE80u)) {
        auto targetFn = runtime->lookupFunction(0x2EBE80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAD44u; }
        if (ctx->pc != 0x1AAD44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__14CCameraControlFv_0x2ebe80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAD44u; }
        if (ctx->pc != 0x1AAD44u) { return; }
    }
    ctx->pc = 0x1AAD44u;
label_1aad44:
    // 0x1aad44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1aad44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aad48:
    // 0x1aad48: 0x8f868c5c  lw          $a2, -0x73A4($gp)
    ctx->pc = 0x1aad48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
label_1aad4c:
    // 0x1aad4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1aad4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aad50:
    // 0x1aad50: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1aad50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1aad54:
    // 0x1aad54: 0xc0a0dd0  jal         func_283740
label_1aad58:
    if (ctx->pc == 0x1AAD58u) {
        ctx->pc = 0x1AAD58u;
            // 0x1aad58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AAD5Cu;
        goto label_1aad5c;
    }
    ctx->pc = 0x1AAD54u;
    SET_GPR_U32(ctx, 31, 0x1AAD5Cu);
    ctx->pc = 0x1AAD58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAD54u;
            // 0x1aad58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283740u;
    if (runtime->hasFunction(0x283740u)) {
        auto targetFn = runtime->lookupFunction(0x283740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAD5Cu; }
        if (ctx->pc != 0x1AAD5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignCamera__6CSceneFiP9mgCCameraPc_0x283740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAD5Cu; }
        if (ctx->pc != 0x1AAD5Cu) { return; }
    }
    ctx->pc = 0x1AAD5Cu;
label_1aad5c:
    // 0x1aad5c: 0x8f868c60  lw          $a2, -0x73A0($gp)
    ctx->pc = 0x1aad5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937696)));
label_1aad60:
    // 0x1aad60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1aad60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aad64:
    // 0x1aad64: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1aad64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1aad68:
    // 0x1aad68: 0xc0a0dd0  jal         func_283740
label_1aad6c:
    if (ctx->pc == 0x1AAD6Cu) {
        ctx->pc = 0x1AAD6Cu;
            // 0x1aad6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AAD70u;
        goto label_1aad70;
    }
    ctx->pc = 0x1AAD68u;
    SET_GPR_U32(ctx, 31, 0x1AAD70u);
    ctx->pc = 0x1AAD6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAD68u;
            // 0x1aad6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283740u;
    if (runtime->hasFunction(0x283740u)) {
        auto targetFn = runtime->lookupFunction(0x283740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAD70u; }
        if (ctx->pc != 0x1AAD70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignCamera__6CSceneFiP9mgCCameraPc_0x283740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAD70u; }
        if (ctx->pc != 0x1AAD70u) { return; }
    }
    ctx->pc = 0x1AAD70u;
label_1aad70:
    // 0x1aad70: 0x8f868c64  lw          $a2, -0x739C($gp)
    ctx->pc = 0x1aad70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937700)));
label_1aad74:
    // 0x1aad74: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1aad74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1aad78:
    // 0x1aad78: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1aad78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1aad7c:
    // 0x1aad7c: 0xc0a0dd0  jal         func_283740
label_1aad80:
    if (ctx->pc == 0x1AAD80u) {
        ctx->pc = 0x1AAD80u;
            // 0x1aad80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AAD84u;
        goto label_1aad84;
    }
    ctx->pc = 0x1AAD7Cu;
    SET_GPR_U32(ctx, 31, 0x1AAD84u);
    ctx->pc = 0x1AAD80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAD7Cu;
            // 0x1aad80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283740u;
    if (runtime->hasFunction(0x283740u)) {
        auto targetFn = runtime->lookupFunction(0x283740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAD84u; }
        if (ctx->pc != 0x1AAD84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignCamera__6CSceneFiP9mgCCameraPc_0x283740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAD84u; }
        if (ctx->pc != 0x1AAD84u) { return; }
    }
    ctx->pc = 0x1AAD84u;
label_1aad84:
    // 0x1aad84: 0x8f868c68  lw          $a2, -0x7398($gp)
    ctx->pc = 0x1aad84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937704)));
label_1aad88:
    // 0x1aad88: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1aad88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1aad8c:
    // 0x1aad8c: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1aad8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1aad90:
    // 0x1aad90: 0xc0a0dd0  jal         func_283740
label_1aad94:
    if (ctx->pc == 0x1AAD94u) {
        ctx->pc = 0x1AAD94u;
            // 0x1aad94: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AAD98u;
        goto label_1aad98;
    }
    ctx->pc = 0x1AAD90u;
    SET_GPR_U32(ctx, 31, 0x1AAD98u);
    ctx->pc = 0x1AAD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAD90u;
            // 0x1aad94: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283740u;
    if (runtime->hasFunction(0x283740u)) {
        auto targetFn = runtime->lookupFunction(0x283740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAD98u; }
        if (ctx->pc != 0x1AAD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignCamera__6CSceneFiP9mgCCameraPc_0x283740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAD98u; }
        if (ctx->pc != 0x1AAD98u) { return; }
    }
    ctx->pc = 0x1AAD98u;
label_1aad98:
    // 0x1aad98: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1aad98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1aad9c:
    // 0x1aad9c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1aad9cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aada0:
    // 0x1aada0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1aada0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1aada4:
    // 0x1aada4: 0xc0a0dd0  jal         func_283740
label_1aada8:
    if (ctx->pc == 0x1AADA8u) {
        ctx->pc = 0x1AADA8u;
            // 0x1aada8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AADACu;
        goto label_1aadac;
    }
    ctx->pc = 0x1AADA4u;
    SET_GPR_U32(ctx, 31, 0x1AADACu);
    ctx->pc = 0x1AADA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AADA4u;
            // 0x1aada8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283740u;
    if (runtime->hasFunction(0x283740u)) {
        auto targetFn = runtime->lookupFunction(0x283740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AADACu; }
        if (ctx->pc != 0x1AADACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignCamera__6CSceneFiP9mgCCameraPc_0x283740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AADACu; }
        if (ctx->pc != 0x1AADACu) { return; }
    }
    ctx->pc = 0x1AADACu;
label_1aadac:
    // 0x1aadac: 0x8f838cb0  lw          $v1, -0x7350($gp)
    ctx->pc = 0x1aadacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1aadb0:
    // 0x1aadb0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1aadb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_1aadb4:
    // 0x1aadb4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1aadb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1aadb8:
    // 0x1aadb8: 0xac602e54  sw          $zero, 0x2E54($v1)
    ctx->pc = 0x1aadb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 11860), GPR_U32(ctx, 0));
label_1aadbc:
    // 0x1aadbc: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1aadbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1aadc0:
    // 0x1aadc0: 0xac402e58  sw          $zero, 0x2E58($v0)
    ctx->pc = 0x1aadc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11864), GPR_U32(ctx, 0));
label_1aadc4:
    // 0x1aadc4: 0xc0bafe8  jal         func_2EBFA0
label_1aadc8:
    if (ctx->pc == 0x1AADC8u) {
        ctx->pc = 0x1AADC8u;
            // 0x1aadc8: 0x8f848c5c  lw          $a0, -0x73A4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
        ctx->pc = 0x1AADCCu;
        goto label_1aadcc;
    }
    ctx->pc = 0x1AADC4u;
    SET_GPR_U32(ctx, 31, 0x1AADCCu);
    ctx->pc = 0x1AADC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AADC4u;
            // 0x1aadc8: 0x8f848c5c  lw          $a0, -0x73A4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBFA0u;
    if (runtime->hasFunction(0x2EBFA0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AADCCu; }
        if (ctx->pc != 0x1AADCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveParam__14CCameraControlFv_0x2ebfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AADCCu; }
        if (ctx->pc != 0x1AADCCu) { return; }
    }
    ctx->pc = 0x1AADCCu;
label_1aadcc:
    // 0x1aadcc: 0xe4540008  swc1        $f20, 0x8($v0)
    ctx->pc = 0x1aadccu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_1aadd0:
    // 0x1aadd0: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1aadd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_1aadd4:
    // 0x1aadd4: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1aadd4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1aadd8:
    // 0x1aadd8: 0xc0bafe8  jal         func_2EBFA0
label_1aaddc:
    if (ctx->pc == 0x1AADDCu) {
        ctx->pc = 0x1AADDCu;
            // 0x1aaddc: 0x8f848c5c  lw          $a0, -0x73A4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
        ctx->pc = 0x1AADE0u;
        goto label_1aade0;
    }
    ctx->pc = 0x1AADD8u;
    SET_GPR_U32(ctx, 31, 0x1AADE0u);
    ctx->pc = 0x1AADDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AADD8u;
            // 0x1aaddc: 0x8f848c5c  lw          $a0, -0x73A4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBFA0u;
    if (runtime->hasFunction(0x2EBFA0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AADE0u; }
        if (ctx->pc != 0x1AADE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveParam__14CCameraControlFv_0x2ebfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AADE0u; }
        if (ctx->pc != 0x1AADE0u) { return; }
    }
    ctx->pc = 0x1AADE0u;
label_1aade0:
    // 0x1aade0: 0xe454000c  swc1        $f20, 0xC($v0)
    ctx->pc = 0x1aade0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_1aade4:
    // 0x1aade4: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1aade4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_1aade8:
    // 0x1aade8: 0x4482a000  mtc1        $v0, $f20
    ctx->pc = 0x1aade8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_1aadec:
    // 0x1aadec: 0xc0bafe8  jal         func_2EBFA0
label_1aadf0:
    if (ctx->pc == 0x1AADF0u) {
        ctx->pc = 0x1AADF0u;
            // 0x1aadf0: 0x8f848c5c  lw          $a0, -0x73A4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
        ctx->pc = 0x1AADF4u;
        goto label_1aadf4;
    }
    ctx->pc = 0x1AADECu;
    SET_GPR_U32(ctx, 31, 0x1AADF4u);
    ctx->pc = 0x1AADF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AADECu;
            // 0x1aadf0: 0x8f848c5c  lw          $a0, -0x73A4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBFA0u;
    if (runtime->hasFunction(0x2EBFA0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AADF4u; }
        if (ctx->pc != 0x1AADF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveParam__14CCameraControlFv_0x2ebfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AADF4u; }
        if (ctx->pc != 0x1AADF4u) { return; }
    }
    ctx->pc = 0x1AADF4u;
label_1aadf4:
    // 0x1aadf4: 0xe4540024  swc1        $f20, 0x24($v0)
    ctx->pc = 0x1aadf4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
label_1aadf8:
    // 0x1aadf8: 0x8f848c5c  lw          $a0, -0x73A4($gp)
    ctx->pc = 0x1aadf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
label_1aadfc:
    // 0x1aadfc: 0xc0bafe8  jal         func_2EBFA0
label_1aae00:
    if (ctx->pc == 0x1AAE00u) {
        ctx->pc = 0x1AAE00u;
            // 0x1aae00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AAE04u;
        goto label_1aae04;
    }
    ctx->pc = 0x1AADFCu;
    SET_GPR_U32(ctx, 31, 0x1AAE04u);
    ctx->pc = 0x1AAE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AADFCu;
            // 0x1aae00: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBFA0u;
    if (runtime->hasFunction(0x2EBFA0u)) {
        auto targetFn = runtime->lookupFunction(0x2EBFA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAE04u; }
        if (ctx->pc != 0x1AAE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveParam__14CCameraControlFv_0x2ebfa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAE04u; }
        if (ctx->pc != 0x1AAE04u) { return; }
    }
    ctx->pc = 0x1AAE04u;
label_1aae04:
    // 0x1aae04: 0x260401a4  addiu       $a0, $s0, 0x1A4
    ctx->pc = 0x1aae04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 420));
label_1aae08:
    // 0x1aae08: 0xc06aeac  jal         func_1ABAB0
label_1aae0c:
    if (ctx->pc == 0x1AAE0Cu) {
        ctx->pc = 0x1AAE0Cu;
            // 0x1aae0c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AAE10u;
        goto label_1aae10;
    }
    ctx->pc = 0x1AAE08u;
    SET_GPR_U32(ctx, 31, 0x1AAE10u);
    ctx->pc = 0x1AAE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAE08u;
            // 0x1aae0c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ABAB0u;
    if (runtime->hasFunction(0x1ABAB0u)) {
        auto targetFn = runtime->lookupFunction(0x1ABAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAE10u; }
        if (ctx->pc != 0x1AAE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___as__15CameraCtrlParamFRC15CameraCtrlParam_0x1abab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAE10u; }
        if (ctx->pc != 0x1AAE10u) { return; }
    }
    ctx->pc = 0x1AAE10u;
label_1aae10:
    // 0x1aae10: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1aae10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1aae14:
    // 0x1aae14: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x1aae14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_1aae18:
    // 0x1aae18: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aae18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aae1c:
    // 0x1aae1c: 0x2405009c  addiu       $a1, $zero, 0x9C
    ctx->pc = 0x1aae1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
label_1aae20:
    // 0x1aae20: 0x24c662a8  addiu       $a2, $a2, 0x62A8
    ctx->pc = 0x1aae20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25256));
label_1aae24:
    // 0x1aae24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1aae24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aae28:
    // 0x1aae28: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x1aae28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1aae2c:
    // 0x1aae2c: 0xac402e50  sw          $zero, 0x2E50($v0)
    ctx->pc = 0x1aae2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 11856), GPR_U32(ctx, 0));
label_1aae30:
    // 0x1aae30: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1aae30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_1aae34:
    // 0x1aae34: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x1aae34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
label_1aae38:
    // 0x1aae38: 0x8f888780  lw          $t0, -0x7880($gp)
    ctx->pc = 0x1aae38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_1aae3c:
    // 0x1aae3c: 0x8f898784  lw          $t1, -0x787C($gp)
    ctx->pc = 0x1aae3cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
label_1aae40:
    // 0x1aae40: 0xc04b450  jal         func_12D140
label_1aae44:
    if (ctx->pc == 0x1AAE44u) {
        ctx->pc = 0x1AAE44u;
            // 0x1aae44: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AAE48u;
        goto label_1aae48;
    }
    ctx->pc = 0x1AAE40u;
    SET_GPR_U32(ctx, 31, 0x1AAE48u);
    ctx->pc = 0x1AAE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAE40u;
            // 0x1aae44: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D140u;
    if (runtime->hasFunction(0x12D140u)) {
        auto targetFn = runtime->lookupFunction(0x12D140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAE48u; }
        if (ctx->pc != 0x1AAE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterTexture__17mgCTextureManagerFiPcPP1iiiP1Uli_0x12d140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAE48u; }
        if (ctx->pc != 0x1AAE48u) { return; }
    }
    ctx->pc = 0x1AAE48u;
label_1aae48:
    // 0x1aae48: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1aae48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_1aae4c:
    // 0x1aae4c: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x1aae4cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_1aae50:
    // 0x1aae50: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x1aae50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
label_1aae54:
    // 0x1aae54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aae54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aae58:
    // 0x1aae58: 0x8f888780  lw          $t0, -0x7880($gp)
    ctx->pc = 0x1aae58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_1aae5c:
    // 0x1aae5c: 0x2405009e  addiu       $a1, $zero, 0x9E
    ctx->pc = 0x1aae5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
label_1aae60:
    // 0x1aae60: 0x8f898784  lw          $t1, -0x787C($gp)
    ctx->pc = 0x1aae60u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
label_1aae64:
    // 0x1aae64: 0x24c662b0  addiu       $a2, $a2, 0x62B0
    ctx->pc = 0x1aae64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25264));
label_1aae68:
    // 0x1aae68: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1aae68u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aae6c:
    // 0x1aae6c: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x1aae6cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1aae70:
    // 0x1aae70: 0xc04b450  jal         func_12D140
label_1aae74:
    if (ctx->pc == 0x1AAE74u) {
        ctx->pc = 0x1AAE74u;
            // 0x1aae74: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AAE78u;
        goto label_1aae78;
    }
    ctx->pc = 0x1AAE70u;
    SET_GPR_U32(ctx, 31, 0x1AAE78u);
    ctx->pc = 0x1AAE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAE70u;
            // 0x1aae74: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D140u;
    if (runtime->hasFunction(0x12D140u)) {
        auto targetFn = runtime->lookupFunction(0x12D140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAE78u; }
        if (ctx->pc != 0x1AAE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterTexture__17mgCTextureManagerFiPcPP1iiiP1Uli_0x12d140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAE78u; }
        if (ctx->pc != 0x1AAE78u) { return; }
    }
    ctx->pc = 0x1AAE78u;
label_1aae78:
    // 0x1aae78: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1aae78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_1aae7c:
    // 0x1aae7c: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x1aae7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_1aae80:
    // 0x1aae80: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x1aae80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
label_1aae84:
    // 0x1aae84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aae84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aae88:
    // 0x1aae88: 0x8f888780  lw          $t0, -0x7880($gp)
    ctx->pc = 0x1aae88u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_1aae8c:
    // 0x1aae8c: 0x2405009d  addiu       $a1, $zero, 0x9D
    ctx->pc = 0x1aae8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 157));
label_1aae90:
    // 0x1aae90: 0x8f898784  lw          $t1, -0x787C($gp)
    ctx->pc = 0x1aae90u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
label_1aae94:
    // 0x1aae94: 0x24c662c0  addiu       $a2, $a2, 0x62C0
    ctx->pc = 0x1aae94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25280));
label_1aae98:
    // 0x1aae98: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1aae98u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aae9c:
    // 0x1aae9c: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x1aae9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1aaea0:
    // 0x1aaea0: 0xc04b450  jal         func_12D140
label_1aaea4:
    if (ctx->pc == 0x1AAEA4u) {
        ctx->pc = 0x1AAEA4u;
            // 0x1aaea4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AAEA8u;
        goto label_1aaea8;
    }
    ctx->pc = 0x1AAEA0u;
    SET_GPR_U32(ctx, 31, 0x1AAEA8u);
    ctx->pc = 0x1AAEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAEA0u;
            // 0x1aaea4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D140u;
    if (runtime->hasFunction(0x12D140u)) {
        auto targetFn = runtime->lookupFunction(0x12D140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAEA8u; }
        if (ctx->pc != 0x1AAEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterTexture__17mgCTextureManagerFiPcPP1iiiP1Uli_0x12d140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAEA8u; }
        if (ctx->pc != 0x1AAEA8u) { return; }
    }
    ctx->pc = 0x1AAEA8u;
label_1aaea8:
    // 0x1aaea8: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1aaea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_1aaeac:
    // 0x1aaeac: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x1aaeacu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_1aaeb0:
    // 0x1aaeb0: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x1aaeb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
label_1aaeb4:
    // 0x1aaeb4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aaeb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aaeb8:
    // 0x1aaeb8: 0x8f888780  lw          $t0, -0x7880($gp)
    ctx->pc = 0x1aaeb8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_1aaebc:
    // 0x1aaebc: 0x24050042  addiu       $a1, $zero, 0x42
    ctx->pc = 0x1aaebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
label_1aaec0:
    // 0x1aaec0: 0x8f898784  lw          $t1, -0x787C($gp)
    ctx->pc = 0x1aaec0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
label_1aaec4:
    // 0x1aaec4: 0x24c662d0  addiu       $a2, $a2, 0x62D0
    ctx->pc = 0x1aaec4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25296));
label_1aaec8:
    // 0x1aaec8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1aaec8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aaecc:
    // 0x1aaecc: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x1aaeccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1aaed0:
    // 0x1aaed0: 0xc04b450  jal         func_12D140
label_1aaed4:
    if (ctx->pc == 0x1AAED4u) {
        ctx->pc = 0x1AAED4u;
            // 0x1aaed4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AAED8u;
        goto label_1aaed8;
    }
    ctx->pc = 0x1AAED0u;
    SET_GPR_U32(ctx, 31, 0x1AAED8u);
    ctx->pc = 0x1AAED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAED0u;
            // 0x1aaed4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D140u;
    if (runtime->hasFunction(0x12D140u)) {
        auto targetFn = runtime->lookupFunction(0x12D140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAED8u; }
        if (ctx->pc != 0x1AAED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterTexture__17mgCTextureManagerFiPcPP1iiiP1Uli_0x12d140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAED8u; }
        if (ctx->pc != 0x1AAED8u) { return; }
    }
    ctx->pc = 0x1AAED8u;
label_1aaed8:
    // 0x1aaed8: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1aaed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_1aaedc:
    // 0x1aaedc: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x1aaedcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
label_1aaee0:
    // 0x1aaee0: 0x8f828780  lw          $v0, -0x7880($gp)
    ctx->pc = 0x1aaee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_1aaee4:
    // 0x1aaee4: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1aaee8:
    if (ctx->pc == 0x1AAEE8u) {
        ctx->pc = 0x1AAEE8u;
            // 0x1aaee8: 0x24043  sra         $t0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 1));
        ctx->pc = 0x1AAEECu;
        goto label_1aaeec;
    }
    ctx->pc = 0x1AAEE4u;
    {
        const bool branch_taken_0x1aaee4 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AAEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAEE4u;
            // 0x1aaee8: 0x24043  sra         $t0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaee4) {
            ctx->pc = 0x1AAEF4u;
            goto label_1aaef4;
        }
    }
    ctx->pc = 0x1AAEECu;
label_1aaeec:
    // 0x1aaeec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1aaeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1aaef0:
    // 0x1aaef0: 0x24043  sra         $t0, $v0, 1
    ctx->pc = 0x1aaef0u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 2), 1));
label_1aaef4:
    // 0x1aaef4: 0x8f828784  lw          $v0, -0x787C($gp)
    ctx->pc = 0x1aaef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
label_1aaef8:
    // 0x1aaef8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1aaefc:
    if (ctx->pc == 0x1AAEFCu) {
        ctx->pc = 0x1AAEFCu;
            // 0x1aaefc: 0x24843  sra         $t1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 1));
        ctx->pc = 0x1AAF00u;
        goto label_1aaf00;
    }
    ctx->pc = 0x1AAEF8u;
    {
        const bool branch_taken_0x1aaef8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AAEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAEF8u;
            // 0x1aaefc: 0x24843  sra         $t1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aaef8) {
            ctx->pc = 0x1AAF08u;
            goto label_1aaf08;
        }
    }
    ctx->pc = 0x1AAF00u;
label_1aaf00:
    // 0x1aaf00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1aaf00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1aaf04:
    // 0x1aaf04: 0x24843  sra         $t1, $v0, 1
    ctx->pc = 0x1aaf04u;
    SET_GPR_S32(ctx, 9, SRA32(GPR_S32(ctx, 2), 1));
label_1aaf08:
    // 0x1aaf08: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x1aaf08u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_1aaf0c:
    // 0x1aaf0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aaf0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aaf10:
    // 0x1aaf10: 0x2405009c  addiu       $a1, $zero, 0x9C
    ctx->pc = 0x1aaf10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
label_1aaf14:
    // 0x1aaf14: 0x24c662e0  addiu       $a2, $a2, 0x62E0
    ctx->pc = 0x1aaf14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25312));
label_1aaf18:
    // 0x1aaf18: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1aaf18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aaf1c:
    // 0x1aaf1c: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x1aaf1cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1aaf20:
    // 0x1aaf20: 0xc04b450  jal         func_12D140
label_1aaf24:
    if (ctx->pc == 0x1AAF24u) {
        ctx->pc = 0x1AAF24u;
            // 0x1aaf24: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AAF28u;
        goto label_1aaf28;
    }
    ctx->pc = 0x1AAF20u;
    SET_GPR_U32(ctx, 31, 0x1AAF28u);
    ctx->pc = 0x1AAF24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAF20u;
            // 0x1aaf24: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D140u;
    if (runtime->hasFunction(0x12D140u)) {
        auto targetFn = runtime->lookupFunction(0x12D140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAF28u; }
        if (ctx->pc != 0x1AAF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterTexture__17mgCTextureManagerFiPcPP1iiiP1Uli_0x12d140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAF28u; }
        if (ctx->pc != 0x1AAF28u) { return; }
    }
    ctx->pc = 0x1AAF28u;
label_1aaf28:
    // 0x1aaf28: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x1aaf28u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_1aaf2c:
    // 0x1aaf2c: 0x24080040  addiu       $t0, $zero, 0x40
    ctx->pc = 0x1aaf2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1aaf30:
    // 0x1aaf30: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1aaf30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_1aaf34:
    // 0x1aaf34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aaf34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aaf38:
    // 0x1aaf38: 0x240500d4  addiu       $a1, $zero, 0xD4
    ctx->pc = 0x1aaf38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
label_1aaf3c:
    // 0x1aaf3c: 0x24c662e8  addiu       $a2, $a2, 0x62E8
    ctx->pc = 0x1aaf3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25320));
label_1aaf40:
    // 0x1aaf40: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1aaf40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aaf44:
    // 0x1aaf44: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x1aaf44u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1aaf48:
    // 0x1aaf48: 0x100482d  daddu       $t1, $t0, $zero
    ctx->pc = 0x1aaf48u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1aaf4c:
    // 0x1aaf4c: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x1aaf4cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aaf50:
    // 0x1aaf50: 0xc04b450  jal         func_12D140
label_1aaf54:
    if (ctx->pc == 0x1AAF54u) {
        ctx->pc = 0x1AAF54u;
            // 0x1aaf54: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
        ctx->pc = 0x1AAF58u;
        goto label_1aaf58;
    }
    ctx->pc = 0x1AAF50u;
    SET_GPR_U32(ctx, 31, 0x1AAF58u);
    ctx->pc = 0x1AAF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAF50u;
            // 0x1aaf54: 0xffa00008  sd          $zero, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D140u;
    if (runtime->hasFunction(0x12D140u)) {
        auto targetFn = runtime->lookupFunction(0x12D140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAF58u; }
        if (ctx->pc != 0x1AAF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterTexture__17mgCTextureManagerFiPcPP1iiiP1Uli_0x12d140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAF58u; }
        if (ctx->pc != 0x1AAF58u) { return; }
    }
    ctx->pc = 0x1AAF58u;
label_1aaf58:
    // 0x1aaf58: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x1aaf58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_1aaf5c:
    // 0x1aaf5c: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x1aaf5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_1aaf60:
    // 0x1aaf60: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x1aaf60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
label_1aaf64:
    // 0x1aaf64: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1aaf64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1aaf68:
    // 0x1aaf68: 0x8f888780  lw          $t0, -0x7880($gp)
    ctx->pc = 0x1aaf68u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_1aaf6c:
    // 0x1aaf6c: 0x240500d4  addiu       $a1, $zero, 0xD4
    ctx->pc = 0x1aaf6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
label_1aaf70:
    // 0x1aaf70: 0x8f898784  lw          $t1, -0x787C($gp)
    ctx->pc = 0x1aaf70u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
label_1aaf74:
    // 0x1aaf74: 0x24c662f0  addiu       $a2, $a2, 0x62F0
    ctx->pc = 0x1aaf74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 25328));
label_1aaf78:
    // 0x1aaf78: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1aaf78u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aaf7c:
    // 0x1aaf7c: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x1aaf7cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1aaf80:
    // 0x1aaf80: 0xc04b450  jal         func_12D140
label_1aaf84:
    if (ctx->pc == 0x1AAF84u) {
        ctx->pc = 0x1AAF84u;
            // 0x1aaf84: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AAF88u;
        goto label_1aaf88;
    }
    ctx->pc = 0x1AAF80u;
    SET_GPR_U32(ctx, 31, 0x1AAF88u);
    ctx->pc = 0x1AAF84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAF80u;
            // 0x1aaf84: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D140u;
    if (runtime->hasFunction(0x12D140u)) {
        auto targetFn = runtime->lookupFunction(0x12D140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAF88u; }
        if (ctx->pc != 0x1AAF88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterTexture__17mgCTextureManagerFiPcPP1iiiP1Uli_0x12d140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAF88u; }
        if (ctx->pc != 0x1AAF88u) { return; }
    }
    ctx->pc = 0x1AAF88u;
label_1aaf88:
    // 0x1aaf88: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1aaf88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1aaf8c:
    // 0x1aaf8c: 0xc0c26f4  jal         func_309BD0
label_1aaf90:
    if (ctx->pc == 0x1AAF90u) {
        ctx->pc = 0x1AAF90u;
            // 0x1aaf90: 0x240400ce  addiu       $a0, $zero, 0xCE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 206));
        ctx->pc = 0x1AAF94u;
        goto label_1aaf94;
    }
    ctx->pc = 0x1AAF8Cu;
    SET_GPR_U32(ctx, 31, 0x1AAF94u);
    ctx->pc = 0x1AAF90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAF8Cu;
            // 0x1aaf90: 0x240400ce  addiu       $a0, $zero, 0xCE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 206));
        ctx->in_delay_slot = false;
    ctx->pc = 0x309BD0u;
    if (runtime->hasFunction(0x309BD0u)) {
        auto targetFn = runtime->lookupFunction(0x309BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAF94u; }
        if (ctx->pc != 0x1AAF94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitPause__Fi_0x309bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAF94u; }
        if (ctx->pc != 0x1AAF94u) { return; }
    }
    ctx->pc = 0x1AAF94u;
label_1aaf94:
    // 0x1aaf94: 0x8f838ac0  lw          $v1, -0x7540($gp)
    ctx->pc = 0x1aaf94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
label_1aaf98:
    // 0x1aaf98: 0x3c010020  lui         $at, 0x20
    ctx->pc = 0x1aaf98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)32 << 16));
label_1aaf9c:
    // 0x1aaf9c: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1aaf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1aafa0:
    // 0x1aafa0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1aafa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aafa4:
    // 0x1aafa4: 0x611821  addu        $v1, $v1, $at
    ctx->pc = 0x1aafa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 1)));
label_1aafa8:
    // 0x1aafa8: 0xaf838ccc  sw          $v1, -0x7334($gp)
    ctx->pc = 0x1aafa8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937804), GPR_U32(ctx, 3));
label_1aafac:
    // 0x1aafac: 0x8f868ccc  lw          $a2, -0x7334($gp)
    ctx->pc = 0x1aafacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937804)));
label_1aafb0:
    // 0x1aafb0: 0xc05f694  jal         func_17DA50
label_1aafb4:
    if (ctx->pc == 0x1AAFB4u) {
        ctx->pc = 0x1AAFB4u;
            // 0x1aafb4: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->pc = 0x1AAFB8u;
        goto label_1aafb8;
    }
    ctx->pc = 0x1AAFB0u;
    SET_GPR_U32(ctx, 31, 0x1AAFB8u);
    ctx->pc = 0x1AAFB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAFB0u;
            // 0x1aafb4: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DA50u;
    if (runtime->hasFunction(0x17DA50u)) {
        auto targetFn = runtime->lookupFunction(0x17DA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAFB8u; }
        if (ctx->pc != 0x1AAFB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCrossTexture__10CFadeInOutFP10mgCTextureP1_0x17da50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAFB8u; }
        if (ctx->pc != 0x1AAFB8u) { return; }
    }
    ctx->pc = 0x1AAFB8u;
label_1aafb8:
    // 0x1aafb8: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1aafb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1aafbc:
    // 0x1aafbc: 0x2403009e  addiu       $v1, $zero, 0x9E
    ctx->pc = 0x1aafbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
label_1aafc0:
    // 0x1aafc0: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1aafc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1aafc4:
    // 0x1aafc4: 0x2484ea20  addiu       $a0, $a0, -0x15E0
    ctx->pc = 0x1aafc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961696));
label_1aafc8:
    // 0x1aafc8: 0xc04e780  jal         func_139E00
label_1aafcc:
    if (ctx->pc == 0x1AAFCCu) {
        ctx->pc = 0x1AAFCCu;
            // 0x1aafcc: 0xac432e84  sw          $v1, 0x2E84($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 11908), GPR_U32(ctx, 3));
        ctx->pc = 0x1AAFD0u;
        goto label_1aafd0;
    }
    ctx->pc = 0x1AAFC8u;
    SET_GPR_U32(ctx, 31, 0x1AAFD0u);
    ctx->pc = 0x1AAFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AAFC8u;
            // 0x1aafcc: 0xac432e84  sw          $v1, 0x2E84($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 11908), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAFD0u; }
        if (ctx->pc != 0x1AAFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AAFD0u; }
        if (ctx->pc != 0x1AAFD0u) { return; }
    }
    ctx->pc = 0x1AAFD0u;
label_1aafd0:
    // 0x1aafd0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1aafd0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1aafd4:
    // 0x1aafd4: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1aafd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1aafd8:
    // 0x1aafd8: 0x8c23ea48  lw          $v1, -0x15B8($at)
    ctx->pc = 0x1aafd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961736)));
label_1aafdc:
    // 0x1aafdc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aafdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aafe0:
    // 0x1aafe0: 0x2484ea50  addiu       $a0, $a0, -0x15B0
    ctx->pc = 0x1aafe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961744));
label_1aafe4:
    // 0x1aafe4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1aafe4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1aafe8:
    // 0x1aafe8: 0xac22ea3c  sw          $v0, -0x15C4($at)
    ctx->pc = 0x1aafe8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961724), GPR_U32(ctx, 2));
label_1aafec:
    // 0x1aafec: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1aafecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1aaff0:
    // 0x1aaff0: 0x8c25ea44  lw          $a1, -0x15BC($at)
    ctx->pc = 0x1aaff0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961732)));
label_1aaff4:
    // 0x1aaff4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1aaff4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1aaff8:
    // 0x1aaff8: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x1aaff8u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1aaffc:
    // 0x1aaffc: 0x8c22ea40  lw          $v0, -0x15C0($at)
    ctx->pc = 0x1aaffcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961728)));
label_1ab000:
    // 0x1ab000: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1ab000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1ab004:
    // 0x1ab004: 0xc04e79c  jal         func_139E70
label_1ab008:
    if (ctx->pc == 0x1AB008u) {
        ctx->pc = 0x1AB008u;
            // 0x1ab008: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1AB00Cu;
        goto label_1ab00c;
    }
    ctx->pc = 0x1AB004u;
    SET_GPR_U32(ctx, 31, 0x1AB00Cu);
    ctx->pc = 0x1AB008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB004u;
            // 0x1ab008: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB00Cu; }
        if (ctx->pc != 0x1AB00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB00Cu; }
        if (ctx->pc != 0x1AB00Cu) { return; }
    }
    ctx->pc = 0x1AB00Cu;
label_1ab00c:
    // 0x1ab00c: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ab00cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ab010:
    // 0x1ab010: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab010u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab014:
    // 0x1ab014: 0xac20ea74  sw          $zero, -0x158C($at)
    ctx->pc = 0x1ab014u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961780), GPR_U32(ctx, 0));
label_1ab018:
    // 0x1ab018: 0x3c0601ea  lui         $a2, 0x1EA
    ctx->pc = 0x1ab018u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)490 << 16));
label_1ab01c:
    // 0x1ab01c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab01cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab020:
    // 0x1ab020: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ab020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab024:
    // 0x1ab024: 0x24c6ea50  addiu       $a2, $a2, -0x15B0
    ctx->pc = 0x1ab024u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961744));
label_1ab028:
    // 0x1ab028: 0xc0a0c54  jal         func_283150
label_1ab02c:
    if (ctx->pc == 0x1AB02Cu) {
        ctx->pc = 0x1AB02Cu;
            // 0x1ab02c: 0xac20ea6c  sw          $zero, -0x1594($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294961772), GPR_U32(ctx, 0));
        ctx->pc = 0x1AB030u;
        goto label_1ab030;
    }
    ctx->pc = 0x1AB028u;
    SET_GPR_U32(ctx, 31, 0x1AB030u);
    ctx->pc = 0x1AB02Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB028u;
            // 0x1ab02c: 0xac20ea6c  sw          $zero, -0x1594($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294961772), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283150u;
    if (runtime->hasFunction(0x283150u)) {
        auto targetFn = runtime->lookupFunction(0x283150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB030u; }
        if (ctx->pc != 0x1AB030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__6CSceneFiP9mgCMemory_0x283150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB030u; }
        if (ctx->pc != 0x1AB030u) { return; }
    }
    ctx->pc = 0x1AB030u;
label_1ab030:
    // 0x1ab030: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ab030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ab034:
    // 0x1ab034: 0x3c0601ea  lui         $a2, 0x1EA
    ctx->pc = 0x1ab034u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)490 << 16));
label_1ab038:
    // 0x1ab038: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ab038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab03c:
    // 0x1ab03c: 0xc0a0c54  jal         func_283150
label_1ab040:
    if (ctx->pc == 0x1AB040u) {
        ctx->pc = 0x1AB040u;
            // 0x1ab040: 0x24c6ea80  addiu       $a2, $a2, -0x1580 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961792));
        ctx->pc = 0x1AB044u;
        goto label_1ab044;
    }
    ctx->pc = 0x1AB03Cu;
    SET_GPR_U32(ctx, 31, 0x1AB044u);
    ctx->pc = 0x1AB040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB03Cu;
            // 0x1ab040: 0x24c6ea80  addiu       $a2, $a2, -0x1580 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283150u;
    if (runtime->hasFunction(0x283150u)) {
        auto targetFn = runtime->lookupFunction(0x283150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB044u; }
        if (ctx->pc != 0x1AB044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__6CSceneFiP9mgCMemory_0x283150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB044u; }
        if (ctx->pc != 0x1AB044u) { return; }
    }
    ctx->pc = 0x1AB044u;
label_1ab044:
    // 0x1ab044: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ab044u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ab048:
    // 0x1ab048: 0x3c0601ea  lui         $a2, 0x1EA
    ctx->pc = 0x1ab048u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)490 << 16));
label_1ab04c:
    // 0x1ab04c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1ab04cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1ab050:
    // 0x1ab050: 0xc0a0c54  jal         func_283150
label_1ab054:
    if (ctx->pc == 0x1AB054u) {
        ctx->pc = 0x1AB054u;
            // 0x1ab054: 0x24c6eab0  addiu       $a2, $a2, -0x1550 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961840));
        ctx->pc = 0x1AB058u;
        goto label_1ab058;
    }
    ctx->pc = 0x1AB050u;
    SET_GPR_U32(ctx, 31, 0x1AB058u);
    ctx->pc = 0x1AB054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB050u;
            // 0x1ab054: 0x24c6eab0  addiu       $a2, $a2, -0x1550 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283150u;
    if (runtime->hasFunction(0x283150u)) {
        auto targetFn = runtime->lookupFunction(0x283150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB058u; }
        if (ctx->pc != 0x1AB058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__6CSceneFiP9mgCMemory_0x283150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB058u; }
        if (ctx->pc != 0x1AB058u) { return; }
    }
    ctx->pc = 0x1AB058u;
label_1ab058:
    // 0x1ab058: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ab058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ab05c:
    // 0x1ab05c: 0x3c0601ea  lui         $a2, 0x1EA
    ctx->pc = 0x1ab05cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)490 << 16));
label_1ab060:
    // 0x1ab060: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x1ab060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ab064:
    // 0x1ab064: 0xc0a0c54  jal         func_283150
label_1ab068:
    if (ctx->pc == 0x1AB068u) {
        ctx->pc = 0x1AB068u;
            // 0x1ab068: 0x24c6eae0  addiu       $a2, $a2, -0x1520 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961888));
        ctx->pc = 0x1AB06Cu;
        goto label_1ab06c;
    }
    ctx->pc = 0x1AB064u;
    SET_GPR_U32(ctx, 31, 0x1AB06Cu);
    ctx->pc = 0x1AB068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB064u;
            // 0x1ab068: 0x24c6eae0  addiu       $a2, $a2, -0x1520 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961888));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283150u;
    if (runtime->hasFunction(0x283150u)) {
        auto targetFn = runtime->lookupFunction(0x283150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB06Cu; }
        if (ctx->pc != 0x1AB06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__6CSceneFiP9mgCMemory_0x283150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB06Cu; }
        if (ctx->pc != 0x1AB06Cu) { return; }
    }
    ctx->pc = 0x1AB06Cu;
label_1ab06c:
    // 0x1ab06c: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ab06cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ab070:
    // 0x1ab070: 0x3c0601ea  lui         $a2, 0x1EA
    ctx->pc = 0x1ab070u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)490 << 16));
label_1ab074:
    // 0x1ab074: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1ab074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1ab078:
    // 0x1ab078: 0xc0a0c54  jal         func_283150
label_1ab07c:
    if (ctx->pc == 0x1AB07Cu) {
        ctx->pc = 0x1AB07Cu;
            // 0x1ab07c: 0x24c6eb10  addiu       $a2, $a2, -0x14F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961936));
        ctx->pc = 0x1AB080u;
        goto label_1ab080;
    }
    ctx->pc = 0x1AB078u;
    SET_GPR_U32(ctx, 31, 0x1AB080u);
    ctx->pc = 0x1AB07Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB078u;
            // 0x1ab07c: 0x24c6eb10  addiu       $a2, $a2, -0x14F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283150u;
    if (runtime->hasFunction(0x283150u)) {
        auto targetFn = runtime->lookupFunction(0x283150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB080u; }
        if (ctx->pc != 0x1AB080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__6CSceneFiP9mgCMemory_0x283150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB080u; }
        if (ctx->pc != 0x1AB080u) { return; }
    }
    ctx->pc = 0x1AB080u;
label_1ab080:
    // 0x1ab080: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ab080u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ab084:
    // 0x1ab084: 0x3c0601ea  lui         $a2, 0x1EA
    ctx->pc = 0x1ab084u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)490 << 16));
label_1ab088:
    // 0x1ab088: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1ab088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_1ab08c:
    // 0x1ab08c: 0xc0a0c54  jal         func_283150
label_1ab090:
    if (ctx->pc == 0x1AB090u) {
        ctx->pc = 0x1AB090u;
            // 0x1ab090: 0x24c6eb40  addiu       $a2, $a2, -0x14C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961984));
        ctx->pc = 0x1AB094u;
        goto label_1ab094;
    }
    ctx->pc = 0x1AB08Cu;
    SET_GPR_U32(ctx, 31, 0x1AB094u);
    ctx->pc = 0x1AB090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB08Cu;
            // 0x1ab090: 0x24c6eb40  addiu       $a2, $a2, -0x14C0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283150u;
    if (runtime->hasFunction(0x283150u)) {
        auto targetFn = runtime->lookupFunction(0x283150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB094u; }
        if (ctx->pc != 0x1AB094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__6CSceneFiP9mgCMemory_0x283150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB094u; }
        if (ctx->pc != 0x1AB094u) { return; }
    }
    ctx->pc = 0x1AB094u;
label_1ab094:
    // 0x1ab094: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ab094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ab098:
    // 0x1ab098: 0x3c0601ea  lui         $a2, 0x1EA
    ctx->pc = 0x1ab098u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)490 << 16));
label_1ab09c:
    // 0x1ab09c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1ab09cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1ab0a0:
    // 0x1ab0a0: 0xc0a0c54  jal         func_283150
label_1ab0a4:
    if (ctx->pc == 0x1AB0A4u) {
        ctx->pc = 0x1AB0A4u;
            // 0x1ab0a4: 0x24c6eb70  addiu       $a2, $a2, -0x1490 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962032));
        ctx->pc = 0x1AB0A8u;
        goto label_1ab0a8;
    }
    ctx->pc = 0x1AB0A0u;
    SET_GPR_U32(ctx, 31, 0x1AB0A8u);
    ctx->pc = 0x1AB0A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB0A0u;
            // 0x1ab0a4: 0x24c6eb70  addiu       $a2, $a2, -0x1490 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283150u;
    if (runtime->hasFunction(0x283150u)) {
        auto targetFn = runtime->lookupFunction(0x283150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB0A8u; }
        if (ctx->pc != 0x1AB0A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__6CSceneFiP9mgCMemory_0x283150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB0A8u; }
        if (ctx->pc != 0x1AB0A8u) { return; }
    }
    ctx->pc = 0x1AB0A8u;
label_1ab0a8:
    // 0x1ab0a8: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ab0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ab0ac:
    // 0x1ab0ac: 0x3c0601ea  lui         $a2, 0x1EA
    ctx->pc = 0x1ab0acu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)490 << 16));
label_1ab0b0:
    // 0x1ab0b0: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1ab0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_1ab0b4:
    // 0x1ab0b4: 0xc0a0c54  jal         func_283150
label_1ab0b8:
    if (ctx->pc == 0x1AB0B8u) {
        ctx->pc = 0x1AB0B8u;
            // 0x1ab0b8: 0x24c6eba0  addiu       $a2, $a2, -0x1460 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962080));
        ctx->pc = 0x1AB0BCu;
        goto label_1ab0bc;
    }
    ctx->pc = 0x1AB0B4u;
    SET_GPR_U32(ctx, 31, 0x1AB0BCu);
    ctx->pc = 0x1AB0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB0B4u;
            // 0x1ab0b8: 0x24c6eba0  addiu       $a2, $a2, -0x1460 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283150u;
    if (runtime->hasFunction(0x283150u)) {
        auto targetFn = runtime->lookupFunction(0x283150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB0BCu; }
        if (ctx->pc != 0x1AB0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__6CSceneFiP9mgCMemory_0x283150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB0BCu; }
        if (ctx->pc != 0x1AB0BCu) { return; }
    }
    ctx->pc = 0x1AB0BCu;
label_1ab0bc:
    // 0x1ab0bc: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ab0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ab0c0:
    // 0x1ab0c0: 0x3c0601ea  lui         $a2, 0x1EA
    ctx->pc = 0x1ab0c0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)490 << 16));
label_1ab0c4:
    // 0x1ab0c4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1ab0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1ab0c8:
    // 0x1ab0c8: 0xc0a0c54  jal         func_283150
label_1ab0cc:
    if (ctx->pc == 0x1AB0CCu) {
        ctx->pc = 0x1AB0CCu;
            // 0x1ab0cc: 0x24c6ebd0  addiu       $a2, $a2, -0x1430 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962128));
        ctx->pc = 0x1AB0D0u;
        goto label_1ab0d0;
    }
    ctx->pc = 0x1AB0C8u;
    SET_GPR_U32(ctx, 31, 0x1AB0D0u);
    ctx->pc = 0x1AB0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB0C8u;
            // 0x1ab0cc: 0x24c6ebd0  addiu       $a2, $a2, -0x1430 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283150u;
    if (runtime->hasFunction(0x283150u)) {
        auto targetFn = runtime->lookupFunction(0x283150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB0D0u; }
        if (ctx->pc != 0x1AB0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStack__6CSceneFiP9mgCMemory_0x283150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB0D0u; }
        if (ctx->pc != 0x1AB0D0u) { return; }
    }
    ctx->pc = 0x1AB0D0u;
label_1ab0d0:
    // 0x1ab0d0: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1ab0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ab0d4:
    // 0x1ab0d4: 0x3c0301ea  lui         $v1, 0x1EA
    ctx->pc = 0x1ab0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)490 << 16));
label_1ab0d8:
    // 0x1ab0d8: 0x2463e960  addiu       $v1, $v1, -0x16A0
    ctx->pc = 0x1ab0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961504));
label_1ab0dc:
    // 0x1ab0dc: 0xc07a6d8  jal         func_1E9B60
label_1ab0e0:
    if (ctx->pc == 0x1AB0E0u) {
        ctx->pc = 0x1AB0E0u;
            // 0x1ab0e0: 0xac430038  sw          $v1, 0x38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
        ctx->pc = 0x1AB0E4u;
        goto label_1ab0e4;
    }
    ctx->pc = 0x1AB0DCu;
    SET_GPR_U32(ctx, 31, 0x1AB0E4u);
    ctx->pc = 0x1AB0E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB0DCu;
            // 0x1ab0e0: 0xac430038  sw          $v1, 0x38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E9B60u;
    if (runtime->hasFunction(0x1E9B60u)) {
        auto targetFn = runtime->lookupFunction(0x1E9B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB0E4u; }
        if (ctx->pc != 0x1AB0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaMemAllocSize__Fv_0x1e9b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB0E4u; }
        if (ctx->pc != 0x1AB0E4u) { return; }
    }
    ctx->pc = 0x1AB0E4u;
label_1ab0e4:
    // 0x1ab0e4: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1ab0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1ab0e8:
    // 0x1ab0e8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ab0e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ab0ec:
    // 0x1ab0ec: 0xc04e704  jal         func_139C10
label_1ab0f0:
    if (ctx->pc == 0x1AB0F0u) {
        ctx->pc = 0x1AB0F0u;
            // 0x1ab0f0: 0x2484ea50  addiu       $a0, $a0, -0x15B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961744));
        ctx->pc = 0x1AB0F4u;
        goto label_1ab0f4;
    }
    ctx->pc = 0x1AB0ECu;
    SET_GPR_U32(ctx, 31, 0x1AB0F4u);
    ctx->pc = 0x1AB0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB0ECu;
            // 0x1ab0f0: 0x2484ea50  addiu       $a0, $a0, -0x15B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB0F4u; }
        if (ctx->pc != 0x1AB0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB0F4u; }
        if (ctx->pc != 0x1AB0F4u) { return; }
    }
    ctx->pc = 0x1AB0F4u;
label_1ab0f4:
    // 0x1ab0f4: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1ab0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1ab0f8:
    // 0x1ab0f8: 0xc04e780  jal         func_139E00
label_1ab0fc:
    if (ctx->pc == 0x1AB0FCu) {
        ctx->pc = 0x1AB0FCu;
            // 0x1ab0fc: 0x2484ea50  addiu       $a0, $a0, -0x15B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961744));
        ctx->pc = 0x1AB100u;
        goto label_1ab100;
    }
    ctx->pc = 0x1AB0F8u;
    SET_GPR_U32(ctx, 31, 0x1AB100u);
    ctx->pc = 0x1AB0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB0F8u;
            // 0x1ab0fc: 0x2484ea50  addiu       $a0, $a0, -0x15B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB100u; }
        if (ctx->pc != 0x1AB100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB100u; }
        if (ctx->pc != 0x1AB100u) { return; }
    }
    ctx->pc = 0x1AB100u;
label_1ab100:
    // 0x1ab100: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab104:
    // 0x1ab104: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ab104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab108:
    // 0x1ab108: 0x8c22ea74  lw          $v0, -0x158C($at)
    ctx->pc = 0x1ab108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961780)));
label_1ab10c:
    // 0x1ab10c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab10cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab110:
    // 0x1ab110: 0xaf828cc8  sw          $v0, -0x7338($gp)
    ctx->pc = 0x1ab110u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937800), GPR_U32(ctx, 2));
label_1ab114:
    // 0x1ab114: 0xc06a6c4  jal         func_1A9B10
label_1ab118:
    if (ctx->pc == 0x1AB118u) {
        ctx->pc = 0x1AB118u;
            // 0x1ab118: 0xac23ea6c  sw          $v1, -0x1594($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294961772), GPR_U32(ctx, 3));
        ctx->pc = 0x1AB11Cu;
        goto label_1ab11c;
    }
    ctx->pc = 0x1AB114u;
    SET_GPR_U32(ctx, 31, 0x1AB11Cu);
    ctx->pc = 0x1AB118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB114u;
            // 0x1ab118: 0xac23ea6c  sw          $v1, -0x1594($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294961772), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9B10u;
    if (runtime->hasFunction(0x1A9B10u)) {
        auto targetFn = runtime->lookupFunction(0x1A9B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB11Cu; }
        if (ctx->pc != 0x1AB11Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserData__Fv_0x1a9b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB11Cu; }
        if (ctx->pc != 0x1AB11Cu) { return; }
    }
    ctx->pc = 0x1AB11Cu;
label_1ab11c:
    // 0x1ab11c: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1ab11cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_1ab120:
    // 0x1ab120: 0x34634d96  ori         $v1, $v1, 0x4D96
    ctx->pc = 0x1ab120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19862);
label_1ab124:
    // 0x1ab124: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1ab124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1ab128:
    // 0x1ab128: 0xc06a6c4  jal         func_1A9B10
label_1ab12c:
    if (ctx->pc == 0x1AB12Cu) {
        ctx->pc = 0x1AB12Cu;
            // 0x1ab12c: 0x84500000  lh          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x1AB130u;
        goto label_1ab130;
    }
    ctx->pc = 0x1AB128u;
    SET_GPR_U32(ctx, 31, 0x1AB130u);
    ctx->pc = 0x1AB12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB128u;
            // 0x1ab12c: 0x84500000  lh          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9B10u;
    if (runtime->hasFunction(0x1A9B10u)) {
        auto targetFn = runtime->lookupFunction(0x1A9B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB130u; }
        if (ctx->pc != 0x1AB130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserData__Fv_0x1a9b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB130u; }
        if (ctx->pc != 0x1AB130u) { return; }
    }
    ctx->pc = 0x1AB130u;
label_1ab130:
    // 0x1ab130: 0x8f848ac0  lw          $a0, -0x7540($gp)
    ctx->pc = 0x1ab130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
label_1ab134:
    // 0x1ab134: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x1ab134u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
label_1ab138:
    // 0x1ab138: 0x8f888cb0  lw          $t0, -0x7350($gp)
    ctx->pc = 0x1ab138u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ab13c:
    // 0x1ab13c: 0x3c0601ea  lui         $a2, 0x1EA
    ctx->pc = 0x1ab13cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)490 << 16));
label_1ab140:
    // 0x1ab140: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x1ab140u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ab144:
    // 0x1ab144: 0x200502d  daddu       $t2, $s0, $zero
    ctx->pc = 0x1ab144u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ab148:
    // 0x1ab148: 0x24a5ea50  addiu       $a1, $a1, -0x15B0
    ctx->pc = 0x1ab148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961744));
label_1ab14c:
    // 0x1ab14c: 0x24c6ec00  addiu       $a2, $a2, -0x1400
    ctx->pc = 0x1ab14cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294962176));
label_1ab150:
    // 0x1ab150: 0x24070046  addiu       $a3, $zero, 0x46
    ctx->pc = 0x1ab150u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1ab154:
    // 0x1ab154: 0xc07a3cc  jal         func_1E8F30
label_1ab158:
    if (ctx->pc == 0x1AB158u) {
        ctx->pc = 0x1AB158u;
            // 0x1ab158: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1AB15Cu;
        goto label_1ab15c;
    }
    ctx->pc = 0x1AB154u;
    SET_GPR_U32(ctx, 31, 0x1AB15Cu);
    ctx->pc = 0x1AB158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB154u;
            // 0x1ab158: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E8F30u;
    if (runtime->hasFunction(0x1E8F30u)) {
        auto targetFn = runtime->lookupFunction(0x1E8F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB15Cu; }
        if (ctx->pc != 0x1AB15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetupMainUnit__FP1P9mgCMemoryP9mgCMemoryiP6CSceneP16CUserDataManagerii_0x1e8f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB15Cu; }
        if (ctx->pc != 0x1AB15Cu) { return; }
    }
    ctx->pc = 0x1AB15Cu;
label_1ab15c:
    // 0x1ab15c: 0xc06a6c4  jal         func_1A9B10
label_1ab160:
    if (ctx->pc == 0x1AB160u) {
        ctx->pc = 0x1AB164u;
        goto label_1ab164;
    }
    ctx->pc = 0x1AB15Cu;
    SET_GPR_U32(ctx, 31, 0x1AB164u);
    ctx->pc = 0x1A9B10u;
    if (runtime->hasFunction(0x1A9B10u)) {
        auto targetFn = runtime->lookupFunction(0x1A9B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB164u; }
        if (ctx->pc != 0x1AB164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserData__Fv_0x1a9b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB164u; }
        if (ctx->pc != 0x1AB164u) { return; }
    }
    ctx->pc = 0x1AB164u;
label_1ab164:
    // 0x1ab164: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x1ab164u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_1ab168:
    // 0x1ab168: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ab168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ab16c:
    // 0x1ab16c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x1ab16cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1ab170:
    // 0x1ab170: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ab170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab174:
    // 0x1ab174: 0x84224d96  lh          $v0, 0x4D96($at)
    ctx->pc = 0x1ab174u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19862)));
label_1ab178:
    // 0x1ab178: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ab178u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab17c:
    // 0x1ab17c: 0xaf828c6c  sw          $v0, -0x7394($gp)
    ctx->pc = 0x1ab17cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937708), GPR_U32(ctx, 2));
label_1ab180:
    // 0x1ab180: 0xc0a11b4  jal         func_2846D0
label_1ab184:
    if (ctx->pc == 0x1AB184u) {
        ctx->pc = 0x1AB184u;
            // 0x1ab184: 0xaf808c70  sw          $zero, -0x7390($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937712), GPR_U32(ctx, 0));
        ctx->pc = 0x1AB188u;
        goto label_1ab188;
    }
    ctx->pc = 0x1AB180u;
    SET_GPR_U32(ctx, 31, 0x1AB188u);
    ctx->pc = 0x1AB184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB180u;
            // 0x1ab184: 0xaf808c70  sw          $zero, -0x7390($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937712), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2846D0u;
    if (runtime->hasFunction(0x2846D0u)) {
        auto targetFn = runtime->lookupFunction(0x2846D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB188u; }
        if (ctx->pc != 0x1AB188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActive__6CSceneFii_0x2846d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB188u; }
        if (ctx->pc != 0x1AB188u) { return; }
    }
    ctx->pc = 0x1AB188u;
label_1ab188:
    // 0x1ab188: 0x8f838c70  lw          $v1, -0x7390($gp)
    ctx->pc = 0x1ab188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937712)));
label_1ab18c:
    // 0x1ab18c: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1ab18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ab190:
    // 0x1ab190: 0xc0c2678  jal         func_3099E0
label_1ab194:
    if (ctx->pc == 0x1AB194u) {
        ctx->pc = 0x1AB194u;
            // 0x1ab194: 0xac432e50  sw          $v1, 0x2E50($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 11856), GPR_U32(ctx, 3));
        ctx->pc = 0x1AB198u;
        goto label_1ab198;
    }
    ctx->pc = 0x1AB190u;
    SET_GPR_U32(ctx, 31, 0x1AB198u);
    ctx->pc = 0x1AB194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB190u;
            // 0x1ab194: 0xac432e50  sw          $v1, 0x2E50($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 11856), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3099E0u;
    if (runtime->hasFunction(0x3099E0u)) {
        auto targetFn = runtime->lookupFunction(0x3099E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB198u; }
        if (ctx->pc != 0x1AB198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowLoadingBarStep__Fv_0x3099e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB198u; }
        if (ctx->pc != 0x1AB198u) { return; }
    }
    ctx->pc = 0x1AB198u;
label_1ab198:
    // 0x1ab198: 0xc0b7b10  jal         func_2DEC40
label_1ab19c:
    if (ctx->pc == 0x1AB19Cu) {
        ctx->pc = 0x1AB19Cu;
            // 0x1ab19c: 0x27a402c0  addiu       $a0, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->pc = 0x1AB1A0u;
        goto label_1ab1a0;
    }
    ctx->pc = 0x1AB198u;
    SET_GPR_U32(ctx, 31, 0x1AB1A0u);
    ctx->pc = 0x1AB19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB198u;
            // 0x1ab19c: 0x27a402c0  addiu       $a0, $sp, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DEC40u;
    if (runtime->hasFunction(0x2DEC40u)) {
        auto targetFn = runtime->lookupFunction(0x2DEC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB1A0u; }
        if (ctx->pc != 0x1AB1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__14MapJumpMapInfoFv_0x2dec40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB1A0u; }
        if (ctx->pc != 0x1AB1A0u) { return; }
    }
    ctx->pc = 0x1AB1A0u;
label_1ab1a0:
    // 0x1ab1a0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ab1a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab1a4:
    // 0x1ab1a4: 0x27a402c0  addiu       $a0, $sp, 0x2C0
    ctx->pc = 0x1ab1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 704));
label_1ab1a8:
    // 0x1ab1a8: 0xafa202c8  sw          $v0, 0x2C8($sp)
    ctx->pc = 0x1ab1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 712), GPR_U32(ctx, 2));
label_1ab1ac:
    // 0x1ab1ac: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x1ab1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1ab1b0:
    // 0x1ab1b0: 0xafa002c0  sw          $zero, 0x2C0($sp)
    ctx->pc = 0x1ab1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 704), GPR_U32(ctx, 0));
label_1ab1b4:
    // 0x1ab1b4: 0xafa202cc  sw          $v0, 0x2CC($sp)
    ctx->pc = 0x1ab1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 716), GPR_U32(ctx, 2));
label_1ab1b8:
    // 0x1ab1b8: 0x240200a8  addiu       $v0, $zero, 0xA8
    ctx->pc = 0x1ab1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1ab1bc:
    // 0x1ab1bc: 0xafa002c4  sw          $zero, 0x2C4($sp)
    ctx->pc = 0x1ab1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 708), GPR_U32(ctx, 0));
label_1ab1c0:
    // 0x1ab1c0: 0xafa202d0  sw          $v0, 0x2D0($sp)
    ctx->pc = 0x1ab1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 2));
label_1ab1c4:
    // 0x1ab1c4: 0x8f828ac0  lw          $v0, -0x7540($gp)
    ctx->pc = 0x1ab1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
label_1ab1c8:
    // 0x1ab1c8: 0xc0b7b1c  jal         func_2DEC70
label_1ab1cc:
    if (ctx->pc == 0x1AB1CCu) {
        ctx->pc = 0x1AB1CCu;
            // 0x1ab1cc: 0xafa202d4  sw          $v0, 0x2D4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 2));
        ctx->pc = 0x1AB1D0u;
        goto label_1ab1d0;
    }
    ctx->pc = 0x1AB1C8u;
    SET_GPR_U32(ctx, 31, 0x1AB1D0u);
    ctx->pc = 0x1AB1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB1C8u;
            // 0x1ab1cc: 0xafa202d4  sw          $v0, 0x2D4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 724), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DEC70u;
    if (runtime->hasFunction(0x2DEC70u)) {
        auto targetFn = runtime->lookupFunction(0x2DEC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB1D0u; }
        if (ctx->pc != 0x1AB1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMainMapInfo__FP14MapJumpMapInfo_0x2dec70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB1D0u; }
        if (ctx->pc != 0x1AB1D0u) { return; }
    }
    ctx->pc = 0x1AB1D0u;
label_1ab1d0:
    // 0x1ab1d0: 0xc0b7b10  jal         func_2DEC40
label_1ab1d4:
    if (ctx->pc == 0x1AB1D4u) {
        ctx->pc = 0x1AB1D4u;
            // 0x1ab1d4: 0x27a402e0  addiu       $a0, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->pc = 0x1AB1D8u;
        goto label_1ab1d8;
    }
    ctx->pc = 0x1AB1D0u;
    SET_GPR_U32(ctx, 31, 0x1AB1D8u);
    ctx->pc = 0x1AB1D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB1D0u;
            // 0x1ab1d4: 0x27a402e0  addiu       $a0, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DEC40u;
    if (runtime->hasFunction(0x2DEC40u)) {
        auto targetFn = runtime->lookupFunction(0x2DEC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB1D8u; }
        if (ctx->pc != 0x1AB1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__14MapJumpMapInfoFv_0x2dec40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB1D8u; }
        if (ctx->pc != 0x1AB1D8u) { return; }
    }
    ctx->pc = 0x1AB1D8u;
label_1ab1d8:
    // 0x1ab1d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ab1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab1dc:
    // 0x1ab1dc: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x1ab1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_1ab1e0:
    // 0x1ab1e0: 0xafa202e0  sw          $v0, 0x2E0($sp)
    ctx->pc = 0x1ab1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 2));
label_1ab1e4:
    // 0x1ab1e4: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x1ab1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_1ab1e8:
    // 0x1ab1e8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1ab1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1ab1ec:
    // 0x1ab1ec: 0xafa302e4  sw          $v1, 0x2E4($sp)
    ctx->pc = 0x1ab1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 740), GPR_U32(ctx, 3));
label_1ab1f0:
    // 0x1ab1f0: 0xafa202e8  sw          $v0, 0x2E8($sp)
    ctx->pc = 0x1ab1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 744), GPR_U32(ctx, 2));
label_1ab1f4:
    // 0x1ab1f4: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x1ab1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_1ab1f8:
    // 0x1ab1f8: 0x240200a8  addiu       $v0, $zero, 0xA8
    ctx->pc = 0x1ab1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_1ab1fc:
    // 0x1ab1fc: 0xafa302ec  sw          $v1, 0x2EC($sp)
    ctx->pc = 0x1ab1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 748), GPR_U32(ctx, 3));
label_1ab200:
    // 0x1ab200: 0xafa202f0  sw          $v0, 0x2F0($sp)
    ctx->pc = 0x1ab200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 752), GPR_U32(ctx, 2));
label_1ab204:
    // 0x1ab204: 0x8f828ac0  lw          $v0, -0x7540($gp)
    ctx->pc = 0x1ab204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
label_1ab208:
    // 0x1ab208: 0xc0b7b30  jal         func_2DECC0
label_1ab20c:
    if (ctx->pc == 0x1AB20Cu) {
        ctx->pc = 0x1AB20Cu;
            // 0x1ab20c: 0xafa202f4  sw          $v0, 0x2F4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 756), GPR_U32(ctx, 2));
        ctx->pc = 0x1AB210u;
        goto label_1ab210;
    }
    ctx->pc = 0x1AB208u;
    SET_GPR_U32(ctx, 31, 0x1AB210u);
    ctx->pc = 0x1AB20Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB208u;
            // 0x1ab20c: 0xafa202f4  sw          $v0, 0x2F4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 756), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DECC0u;
    if (runtime->hasFunction(0x2DECC0u)) {
        auto targetFn = runtime->lookupFunction(0x2DECC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB210u; }
        if (ctx->pc != 0x1AB210u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSubMapInfo__FP14MapJumpMapInfo_0x2decc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB210u; }
        if (ctx->pc != 0x1AB210u) { return; }
    }
    ctx->pc = 0x1AB210u;
label_1ab210:
    // 0x1ab210: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1ab210u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1ab214:
    // 0x1ab214: 0xc0b7b44  jal         func_2DED10
label_1ab218:
    if (ctx->pc == 0x1AB218u) {
        ctx->pc = 0x1AB218u;
            // 0x1ab218: 0x2484e9f0  addiu       $a0, $a0, -0x1610 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961648));
        ctx->pc = 0x1AB21Cu;
        goto label_1ab21c;
    }
    ctx->pc = 0x1AB214u;
    SET_GPR_U32(ctx, 31, 0x1AB21Cu);
    ctx->pc = 0x1AB218u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB214u;
            // 0x1ab218: 0x2484e9f0  addiu       $a0, $a0, -0x1610 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961648));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DED10u;
    if (runtime->hasFunction(0x2DED10u)) {
        auto targetFn = runtime->lookupFunction(0x2DED10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB21Cu; }
        if (ctx->pc != 0x1AB21Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetScriptBuffer__FP9mgCMemory_0x2ded10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB21Cu; }
        if (ctx->pc != 0x1AB21Cu) { return; }
    }
    ctx->pc = 0x1AB21Cu;
label_1ab21c:
    // 0x1ab21c: 0xc0a97d8  jal         func_2A5F60
label_1ab220:
    if (ctx->pc == 0x1AB220u) {
        ctx->pc = 0x1AB220u;
            // 0x1ab220: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->pc = 0x1AB224u;
        goto label_1ab224;
    }
    ctx->pc = 0x1AB21Cu;
    SET_GPR_U32(ctx, 31, 0x1AB224u);
    ctx->pc = 0x1AB220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB21Cu;
            // 0x1ab220: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A5F60u;
    if (runtime->hasFunction(0x2A5F60u)) {
        auto targetFn = runtime->lookupFunction(0x2A5F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB224u; }
        if (ctx->pc != 0x1AB224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSeBas__6CSceneFv_0x2a5f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB224u; }
        if (ctx->pc != 0x1AB224u) { return; }
    }
    ctx->pc = 0x1AB224u;
label_1ab224:
    // 0x1ab224: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1ab224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1ab228:
    // 0x1ab228: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
label_1ab22c:
    if (ctx->pc == 0x1AB22Cu) {
        ctx->pc = 0x1AB230u;
        goto label_1ab230;
    }
    ctx->pc = 0x1AB228u;
    {
        const bool branch_taken_0x1ab228 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1ab228) {
            ctx->pc = 0x1AB240u;
            goto label_1ab240;
        }
    }
    ctx->pc = 0x1AB230u;
label_1ab230:
    // 0x1ab230: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ab230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ab234:
    // 0x1ab234: 0x8f868ac0  lw          $a2, -0x7540($gp)
    ctx->pc = 0x1ab234u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937280)));
label_1ab238:
    // 0x1ab238: 0xc0a9b5c  jal         func_2A6D70
label_1ab23c:
    if (ctx->pc == 0x1AB23Cu) {
        ctx->pc = 0x1AB23Cu;
            // 0x1ab23c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AB240u;
        goto label_1ab240;
    }
    ctx->pc = 0x1AB238u;
    SET_GPR_U32(ctx, 31, 0x1AB240u);
    ctx->pc = 0x1AB23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB238u;
            // 0x1ab23c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6D70u;
    if (runtime->hasFunction(0x2A6D70u)) {
        auto targetFn = runtime->lookupFunction(0x2A6D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB240u; }
        if (ctx->pc != 0x1AB240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadSound__6CSceneFiP1_0x2a6d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB240u; }
        if (ctx->pc != 0x1AB240u) { return; }
    }
    ctx->pc = 0x1AB240u;
label_1ab240:
    // 0x1ab240: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1ab240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_1ab244:
    // 0x1ab244: 0xc0b49e8  jal         func_2D27A0
label_1ab248:
    if (ctx->pc == 0x1AB248u) {
        ctx->pc = 0x1AB248u;
            // 0x1ab248: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AB24Cu;
        goto label_1ab24c;
    }
    ctx->pc = 0x1AB244u;
    SET_GPR_U32(ctx, 31, 0x1AB24Cu);
    ctx->pc = 0x1AB248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB244u;
            // 0x1ab248: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27A0u;
    if (runtime->hasFunction(0x2D27A0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB24Cu; }
        if (ctx->pc != 0x1AB24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapName__FiPPc_0x2d27a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB24Cu; }
        if (ctx->pc != 0x1AB24Cu) { return; }
    }
    ctx->pc = 0x1AB24Cu;
label_1ab24c:
    // 0x1ab24c: 0xc0b49fc  jal         func_2D27F0
label_1ab250:
    if (ctx->pc == 0x1AB250u) {
        ctx->pc = 0x1AB250u;
            // 0x1ab250: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AB254u;
        goto label_1ab254;
    }
    ctx->pc = 0x1AB24Cu;
    SET_GPR_U32(ctx, 31, 0x1AB254u);
    ctx->pc = 0x1AB250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB24Cu;
            // 0x1ab250: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27F0u;
    if (runtime->hasFunction(0x2D27F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB254u; }
        if (ctx->pc != 0x1AB254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapNo__FPc_0x2d27f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB254u; }
        if (ctx->pc != 0x1AB254u) { return; }
    }
    ctx->pc = 0x1AB254u;
label_1ab254:
    // 0x1ab254: 0xc06bd30  jal         func_1AF4C0
label_1ab258:
    if (ctx->pc == 0x1AB258u) {
        ctx->pc = 0x1AB258u;
            // 0x1ab258: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AB25Cu;
        goto label_1ab25c;
    }
    ctx->pc = 0x1AB254u;
    SET_GPR_U32(ctx, 31, 0x1AB25Cu);
    ctx->pc = 0x1AB258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB254u;
            // 0x1ab258: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1AF4C0u;
    if (runtime->hasFunction(0x1AF4C0u)) {
        auto targetFn = runtime->lookupFunction(0x1AF4C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB25Cu; }
        if (ctx->pc != 0x1AB25Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditMapJump__Fi_0x1af4c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB25Cu; }
        if (ctx->pc != 0x1AB25Cu) { return; }
    }
    ctx->pc = 0x1AB25Cu;
label_1ab25c:
    // 0x1ab25c: 0xc0c2678  jal         func_3099E0
label_1ab260:
    if (ctx->pc == 0x1AB260u) {
        ctx->pc = 0x1AB264u;
        goto label_1ab264;
    }
    ctx->pc = 0x1AB25Cu;
    SET_GPR_U32(ctx, 31, 0x1AB264u);
    ctx->pc = 0x3099E0u;
    if (runtime->hasFunction(0x3099E0u)) {
        auto targetFn = runtime->lookupFunction(0x3099E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB264u; }
        if (ctx->pc != 0x1AB264u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowLoadingBarStep__Fv_0x3099e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB264u; }
        if (ctx->pc != 0x1AB264u) { return; }
    }
    ctx->pc = 0x1AB264u;
label_1ab264:
    // 0x1ab264: 0xc0b6490  jal         func_2D9240
label_1ab268:
    if (ctx->pc == 0x1AB268u) {
        ctx->pc = 0x1AB268u;
            // 0x1ab268: 0xaf808c48  sw          $zero, -0x73B8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937672), GPR_U32(ctx, 0));
        ctx->pc = 0x1AB26Cu;
        goto label_1ab26c;
    }
    ctx->pc = 0x1AB264u;
    SET_GPR_U32(ctx, 31, 0x1AB26Cu);
    ctx->pc = 0x1AB268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB264u;
            // 0x1ab268: 0xaf808c48  sw          $zero, -0x73B8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294937672), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9240u;
    if (runtime->hasFunction(0x2D9240u)) {
        auto targetFn = runtime->lookupFunction(0x2D9240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB26Cu; }
        if (ctx->pc != 0x1AB26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEditFlag__Fv_0x2d9240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB26Cu; }
        if (ctx->pc != 0x1AB26Cu) { return; }
    }
    ctx->pc = 0x1AB26Cu;
label_1ab26c:
    // 0x1ab26c: 0xc0521d8  jal         func_148760
label_1ab270:
    if (ctx->pc == 0x1AB270u) {
        ctx->pc = 0x1AB270u;
            // 0x1ab270: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AB274u;
        goto label_1ab274;
    }
    ctx->pc = 0x1AB26Cu;
    SET_GPR_U32(ctx, 31, 0x1AB274u);
    ctx->pc = 0x1AB270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB26Cu;
            // 0x1ab270: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148760u;
    if (runtime->hasFunction(0x148760u)) {
        auto targetFn = runtime->lookupFunction(0x148760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB274u; }
        if (ctx->pc != 0x1AB274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCurrentDir__FPc_0x148760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB274u; }
        if (ctx->pc != 0x1AB274u) { return; }
    }
    ctx->pc = 0x1AB274u;
label_1ab274:
    // 0x1ab274: 0x8f838c58  lw          $v1, -0x73A8($gp)
    ctx->pc = 0x1ab274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937688)));
label_1ab278:
    // 0x1ab278: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1ab278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1ab27c:
    // 0x1ab27c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1ab280:
    if (ctx->pc == 0x1AB280u) {
        ctx->pc = 0x1AB284u;
        goto label_1ab284;
    }
    ctx->pc = 0x1AB27Cu;
    {
        const bool branch_taken_0x1ab27c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ab27c) {
            ctx->pc = 0x1AB28Cu;
            goto label_1ab28c;
        }
    }
    ctx->pc = 0x1AB284u;
label_1ab284:
    // 0x1ab284: 0xc06c0a4  jal         func_1B0290
label_1ab288:
    if (ctx->pc == 0x1AB288u) {
        ctx->pc = 0x1AB28Cu;
        goto label_1ab28c;
    }
    ctx->pc = 0x1AB284u;
    SET_GPR_U32(ctx, 31, 0x1AB28Cu);
    ctx->pc = 0x1B0290u;
    if (runtime->hasFunction(0x1B0290u)) {
        auto targetFn = runtime->lookupFunction(0x1B0290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB28Cu; }
        if (ctx->pc != 0x1AB28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadMap__Fv_0x1b0290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB28Cu; }
        if (ctx->pc != 0x1AB28Cu) { return; }
    }
    ctx->pc = 0x1AB28Cu;
label_1ab28c:
    // 0x1ab28c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1ab28cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1ab290:
    // 0x1ab290: 0xc04e780  jal         func_139E00
label_1ab294:
    if (ctx->pc == 0x1AB294u) {
        ctx->pc = 0x1AB294u;
            // 0x1ab294: 0x2484eab0  addiu       $a0, $a0, -0x1550 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961840));
        ctx->pc = 0x1AB298u;
        goto label_1ab298;
    }
    ctx->pc = 0x1AB290u;
    SET_GPR_U32(ctx, 31, 0x1AB298u);
    ctx->pc = 0x1AB294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB290u;
            // 0x1ab294: 0x2484eab0  addiu       $a0, $a0, -0x1550 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB298u; }
        if (ctx->pc != 0x1AB298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB298u; }
        if (ctx->pc != 0x1AB298u) { return; }
    }
    ctx->pc = 0x1AB298u;
label_1ab298:
    // 0x1ab298: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab298u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab29c:
    // 0x1ab29c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1ab29cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1ab2a0:
    // 0x1ab2a0: 0x8c23ead8  lw          $v1, -0x1528($at)
    ctx->pc = 0x1ab2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961880)));
label_1ab2a4:
    // 0x1ab2a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ab2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab2a8:
    // 0x1ab2a8: 0x2484eae0  addiu       $a0, $a0, -0x1520
    ctx->pc = 0x1ab2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961888));
label_1ab2ac:
    // 0x1ab2ac: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab2acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab2b0:
    // 0x1ab2b0: 0xac22eacc  sw          $v0, -0x1534($at)
    ctx->pc = 0x1ab2b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961868), GPR_U32(ctx, 2));
label_1ab2b4:
    // 0x1ab2b4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab2b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab2b8:
    // 0x1ab2b8: 0x8c25ead4  lw          $a1, -0x152C($at)
    ctx->pc = 0x1ab2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961876)));
label_1ab2bc:
    // 0x1ab2bc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab2bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab2c0:
    // 0x1ab2c0: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x1ab2c0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1ab2c4:
    // 0x1ab2c4: 0x8c22ead0  lw          $v0, -0x1530($at)
    ctx->pc = 0x1ab2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961872)));
label_1ab2c8:
    // 0x1ab2c8: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x1ab2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_1ab2cc:
    // 0x1ab2cc: 0xc04e79c  jal         func_139E70
label_1ab2d0:
    if (ctx->pc == 0x1AB2D0u) {
        ctx->pc = 0x1AB2D0u;
            // 0x1ab2d0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x1AB2D4u;
        goto label_1ab2d4;
    }
    ctx->pc = 0x1AB2CCu;
    SET_GPR_U32(ctx, 31, 0x1AB2D4u);
    ctx->pc = 0x1AB2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB2CCu;
            // 0x1ab2d0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB2D4u; }
        if (ctx->pc != 0x1AB2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB2D4u; }
        if (ctx->pc != 0x1AB2D4u) { return; }
    }
    ctx->pc = 0x1AB2D4u;
label_1ab2d4:
    // 0x1ab2d4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab2d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab2d8:
    // 0x1ab2d8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ab2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab2dc:
    // 0x1ab2dc: 0xac20eb04  sw          $zero, -0x14FC($at)
    ctx->pc = 0x1ab2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294961924), GPR_U32(ctx, 0));
label_1ab2e0:
    // 0x1ab2e0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab2e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab2e4:
    // 0x1ab2e4: 0xc0521d8  jal         func_148760
label_1ab2e8:
    if (ctx->pc == 0x1AB2E8u) {
        ctx->pc = 0x1AB2E8u;
            // 0x1ab2e8: 0xac20eafc  sw          $zero, -0x1504($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294961916), GPR_U32(ctx, 0));
        ctx->pc = 0x1AB2ECu;
        goto label_1ab2ec;
    }
    ctx->pc = 0x1AB2E4u;
    SET_GPR_U32(ctx, 31, 0x1AB2ECu);
    ctx->pc = 0x1AB2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB2E4u;
            // 0x1ab2e8: 0xac20eafc  sw          $zero, -0x1504($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294961916), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148760u;
    if (runtime->hasFunction(0x148760u)) {
        auto targetFn = runtime->lookupFunction(0x148760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB2ECu; }
        if (ctx->pc != 0x1AB2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCurrentDir__FPc_0x148760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB2ECu; }
        if (ctx->pc != 0x1AB2ECu) { return; }
    }
    ctx->pc = 0x1AB2ECu;
label_1ab2ec:
    // 0x1ab2ec: 0x3c0201ea  lui         $v0, 0x1EA
    ctx->pc = 0x1ab2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)490 << 16));
label_1ab2f0:
    // 0x1ab2f0: 0x27a30300  addiu       $v1, $sp, 0x300
    ctx->pc = 0x1ab2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
label_1ab2f4:
    // 0x1ab2f4: 0x2442f0d0  addiu       $v0, $v0, -0xF30
    ctx->pc = 0x1ab2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963408));
label_1ab2f8:
    // 0x1ab2f8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1ab2f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1ab2fc:
    // 0x1ab2fc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1ab2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_1ab300:
    // 0x1ab300: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ab300u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ab304:
    // 0x1ab304: 0xc0a0ed8  jal         func_283B60
label_1ab308:
    if (ctx->pc == 0x1AB308u) {
        ctx->pc = 0x1AB308u;
            // 0x1ab308: 0x8c852e50  lw          $a1, 0x2E50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
        ctx->pc = 0x1AB30Cu;
        goto label_1ab30c;
    }
    ctx->pc = 0x1AB304u;
    SET_GPR_U32(ctx, 31, 0x1AB30Cu);
    ctx->pc = 0x1AB308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB304u;
            // 0x1ab308: 0x8c852e50  lw          $a1, 0x2E50($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11856)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB30Cu; }
        if (ctx->pc != 0x1AB30Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB30Cu; }
        if (ctx->pc != 0x1AB30Cu) { return; }
    }
    ctx->pc = 0x1AB30Cu;
label_1ab30c:
    // 0x1ab30c: 0x8f848cb0  lw          $a0, -0x7350($gp)
    ctx->pc = 0x1ab30cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ab310:
    // 0x1ab310: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ab310u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ab314:
    // 0x1ab314: 0xc0a0f58  jal         func_283D60
label_1ab318:
    if (ctx->pc == 0x1AB318u) {
        ctx->pc = 0x1AB318u;
            // 0x1ab318: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AB31Cu;
        goto label_1ab31c;
    }
    ctx->pc = 0x1AB314u;
    SET_GPR_U32(ctx, 31, 0x1AB31Cu);
    ctx->pc = 0x1AB318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB314u;
            // 0x1ab318: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB31Cu; }
        if (ctx->pc != 0x1AB31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB31Cu; }
        if (ctx->pc != 0x1AB31Cu) { return; }
    }
    ctx->pc = 0x1AB31Cu;
label_1ab31c:
    // 0x1ab31c: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_1ab320:
    if (ctx->pc == 0x1AB320u) {
        ctx->pc = 0x1AB324u;
        goto label_1ab324;
    }
    ctx->pc = 0x1AB31Cu;
    {
        const bool branch_taken_0x1ab31c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab31c) {
            ctx->pc = 0x1AB354u;
            goto label_1ab354;
        }
    }
    ctx->pc = 0x1AB324u;
label_1ab324:
    // 0x1ab324: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_1ab328:
    if (ctx->pc == 0x1AB328u) {
        ctx->pc = 0x1AB32Cu;
        goto label_1ab32c;
    }
    ctx->pc = 0x1AB324u;
    {
        const bool branch_taken_0x1ab324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ab324) {
            ctx->pc = 0x1AB354u;
            goto label_1ab354;
        }
    }
    ctx->pc = 0x1AB32Cu;
label_1ab32c:
    // 0x1ab32c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1ab32cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ab330:
    // 0x1ab330: 0x244500b0  addiu       $a1, $v0, 0xB0
    ctx->pc = 0x1ab330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
label_1ab334:
    // 0x1ab334: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x1ab334u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_1ab338:
    // 0x1ab338: 0x320f809  jalr        $t9
label_1ab33c:
    if (ctx->pc == 0x1AB33Cu) {
        ctx->pc = 0x1AB33Cu;
            // 0x1ab33c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AB340u;
        goto label_1ab340;
    }
    ctx->pc = 0x1AB338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AB340u);
        ctx->pc = 0x1AB33Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB338u;
            // 0x1ab33c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AB340u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AB340u; }
            if (ctx->pc != 0x1AB340u) { return; }
        }
        }
    }
    ctx->pc = 0x1AB340u;
label_1ab340:
    // 0x1ab340: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x1ab340u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ab344:
    // 0x1ab344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1ab344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1ab348:
    // 0x1ab348: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1ab348u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1ab34c:
    // 0x1ab34c: 0x320f809  jalr        $t9
label_1ab350:
    if (ctx->pc == 0x1AB350u) {
        ctx->pc = 0x1AB350u;
            // 0x1ab350: 0x27a50300  addiu       $a1, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->pc = 0x1AB354u;
        goto label_1ab354;
    }
    ctx->pc = 0x1AB34Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AB354u);
        ctx->pc = 0x1AB350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB34Cu;
            // 0x1ab350: 0x27a50300  addiu       $a1, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AB354u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AB354u; }
            if (ctx->pc != 0x1AB354u) { return; }
        }
        }
    }
    ctx->pc = 0x1AB354u;
label_1ab354:
    // 0x1ab354: 0x8f848c5c  lw          $a0, -0x73A4($gp)
    ctx->pc = 0x1ab354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
label_1ab358:
    // 0x1ab358: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ab358u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ab35c:
    // 0x1ab35c: 0x3c0242c8  lui         $v0, 0x42C8
    ctx->pc = 0x1ab35cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17096 << 16));
label_1ab360:
    // 0x1ab360: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x1ab360u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_1ab364:
    // 0x1ab364: 0xc04c4f8  jal         func_1313E0
label_1ab368:
    if (ctx->pc == 0x1AB368u) {
        ctx->pc = 0x1AB368u;
            // 0x1ab368: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1AB36Cu;
        goto label_1ab36c;
    }
    ctx->pc = 0x1AB364u;
    SET_GPR_U32(ctx, 31, 0x1AB36Cu);
    ctx->pc = 0x1AB368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB364u;
            // 0x1ab368: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1313E0u;
    if (runtime->hasFunction(0x1313E0u)) {
        auto targetFn = runtime->lookupFunction(0x1313E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB36Cu; }
        if (ctx->pc != 0x1AB36Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__9mgCCameraFfff_0x1313e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB36Cu; }
        if (ctx->pc != 0x1AB36Cu) { return; }
    }
    ctx->pc = 0x1AB36Cu;
label_1ab36c:
    // 0x1ab36c: 0x8f848c5c  lw          $a0, -0x73A4($gp)
    ctx->pc = 0x1ab36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
label_1ab370:
    // 0x1ab370: 0x8c990060  lw          $t9, 0x60($a0)
    ctx->pc = 0x1ab370u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_1ab374:
    // 0x1ab374: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1ab374u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1ab378:
    // 0x1ab378: 0x320f809  jalr        $t9
label_1ab37c:
    if (ctx->pc == 0x1AB37Cu) {
        ctx->pc = 0x1AB37Cu;
            // 0x1ab37c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x1AB380u;
        goto label_1ab380;
    }
    ctx->pc = 0x1AB378u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AB380u);
        ctx->pc = 0x1AB37Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB378u;
            // 0x1ab37c: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AB380u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AB380u; }
            if (ctx->pc != 0x1AB380u) { return; }
        }
        }
    }
    ctx->pc = 0x1AB380u;
label_1ab380:
    // 0x1ab380: 0x8f848c5c  lw          $a0, -0x73A4($gp)
    ctx->pc = 0x1ab380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
label_1ab384:
    // 0x1ab384: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1ab384u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ab388:
    // 0x1ab388: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x1ab388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_1ab38c:
    // 0x1ab38c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ab38cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ab390:
    // 0x1ab390: 0xc04c698  jal         func_131A60
label_1ab394:
    if (ctx->pc == 0x1AB394u) {
        ctx->pc = 0x1AB394u;
            // 0x1ab394: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x1AB398u;
        goto label_1ab398;
    }
    ctx->pc = 0x1AB390u;
    SET_GPR_U32(ctx, 31, 0x1AB398u);
    ctx->pc = 0x1AB394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB390u;
            // 0x1ab394: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A60u;
    if (runtime->hasFunction(0x131A60u)) {
        auto targetFn = runtime->lookupFunction(0x131A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB398u; }
        if (ctx->pc != 0x1AB398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFollowOffset__15mgCCameraFollowFfff_0x131a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB398u; }
        if (ctx->pc != 0x1AB398u) { return; }
    }
    ctx->pc = 0x1AB398u;
label_1ab398:
    // 0x1ab398: 0x8f848c5c  lw          $a0, -0x73A4($gp)
    ctx->pc = 0x1ab398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
label_1ab39c:
    // 0x1ab39c: 0xc7ad0304  lwc1        $f13, 0x304($sp)
    ctx->pc = 0x1ab39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 772)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1ab3a0:
    // 0x1ab3a0: 0xc7ae0308  lwc1        $f14, 0x308($sp)
    ctx->pc = 0x1ab3a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 776)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1ab3a4:
    // 0x1ab3a4: 0x8c990060  lw          $t9, 0x60($a0)
    ctx->pc = 0x1ab3a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_1ab3a8:
    // 0x1ab3a8: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x1ab3a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_1ab3ac:
    // 0x1ab3ac: 0x320f809  jalr        $t9
label_1ab3b0:
    if (ctx->pc == 0x1AB3B0u) {
        ctx->pc = 0x1AB3B0u;
            // 0x1ab3b0: 0xc7ac0300  lwc1        $f12, 0x300($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1AB3B4u;
        goto label_1ab3b4;
    }
    ctx->pc = 0x1AB3ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AB3B4u);
        ctx->pc = 0x1AB3B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB3ACu;
            // 0x1ab3b0: 0xc7ac0300  lwc1        $f12, 0x300($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AB3B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AB3B4u; }
            if (ctx->pc != 0x1AB3B4u) { return; }
        }
        }
    }
    ctx->pc = 0x1AB3B4u;
label_1ab3b4:
    // 0x1ab3b4: 0x3c024302  lui         $v0, 0x4302
    ctx->pc = 0x1ab3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17154 << 16));
label_1ab3b8:
    // 0x1ab3b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ab3b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ab3bc:
    // 0x1ab3bc: 0xc04c680  jal         func_131A00
label_1ab3c0:
    if (ctx->pc == 0x1AB3C0u) {
        ctx->pc = 0x1AB3C0u;
            // 0x1ab3c0: 0x8f848c5c  lw          $a0, -0x73A4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
        ctx->pc = 0x1AB3C4u;
        goto label_1ab3c4;
    }
    ctx->pc = 0x1AB3BCu;
    SET_GPR_U32(ctx, 31, 0x1AB3C4u);
    ctx->pc = 0x1AB3C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB3BCu;
            // 0x1ab3c0: 0x8f848c5c  lw          $a0, -0x73A4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131A00u;
    if (runtime->hasFunction(0x131A00u)) {
        auto targetFn = runtime->lookupFunction(0x131A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB3C4u; }
        if (ctx->pc != 0x1AB3C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDistance__15mgCCameraFollowFf_0x131a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB3C4u; }
        if (ctx->pc != 0x1AB3C4u) { return; }
    }
    ctx->pc = 0x1AB3C4u;
label_1ab3c4:
    // 0x1ab3c4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1ab3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1ab3c8:
    // 0x1ab3c8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1ab3c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1ab3cc:
    // 0x1ab3cc: 0xc0bb20c  jal         func_2EC830
label_1ab3d0:
    if (ctx->pc == 0x1AB3D0u) {
        ctx->pc = 0x1AB3D0u;
            // 0x1ab3d0: 0x8f848c5c  lw          $a0, -0x73A4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
        ctx->pc = 0x1AB3D4u;
        goto label_1ab3d4;
    }
    ctx->pc = 0x1AB3CCu;
    SET_GPR_U32(ctx, 31, 0x1AB3D4u);
    ctx->pc = 0x1AB3D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB3CCu;
            // 0x1ab3d0: 0x8f848c5c  lw          $a0, -0x73A4($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EC830u;
    if (runtime->hasFunction(0x2EC830u)) {
        auto targetFn = runtime->lookupFunction(0x2EC830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB3D4u; }
        if (ctx->pc != 0x1AB3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetHeight__14CCameraControlFf_0x2ec830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB3D4u; }
        if (ctx->pc != 0x1AB3D4u) { return; }
    }
    ctx->pc = 0x1AB3D4u;
label_1ab3d4:
    // 0x1ab3d4: 0xc7808760  lwc1        $f0, -0x78A0($gp)
    ctx->pc = 0x1ab3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1ab3d8:
    // 0x1ab3d8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x1ab3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_1ab3dc:
    // 0x1ab3dc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1ab3dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1ab3e0:
    // 0x1ab3e0: 0x8f848c5c  lw          $a0, -0x73A4($gp)
    ctx->pc = 0x1ab3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
label_1ab3e4:
    // 0x1ab3e4: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1ab3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1ab3e8:
    // 0x1ab3e8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x1ab3e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_1ab3ec:
    // 0x1ab3ec: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x1ab3ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_1ab3f0:
    // 0x1ab3f0: 0x46000b03  div.s       $f12, $f1, $f0
    ctx->pc = 0x1ab3f0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[12] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_1ab3f4:
    // 0x1ab3f4: 0x0  nop
    ctx->pc = 0x1ab3f4u;
    // NOP
label_1ab3f8:
    // 0x1ab3f8: 0x0  nop
    ctx->pc = 0x1ab3f8u;
    // NOP
label_1ab3fc:
    // 0x1ab3fc: 0xc04c564  jal         func_131590
label_1ab400:
    if (ctx->pc == 0x1AB400u) {
        ctx->pc = 0x1AB404u;
        goto label_1ab404;
    }
    ctx->pc = 0x1AB3FCu;
    SET_GPR_U32(ctx, 31, 0x1AB404u);
    ctx->pc = 0x131590u;
    if (runtime->hasFunction(0x131590u)) {
        auto targetFn = runtime->lookupFunction(0x131590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB404u; }
        if (ctx->pc != 0x1AB404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpeed__9mgCCameraFff_0x131590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB404u; }
        if (ctx->pc != 0x1AB404u) { return; }
    }
    ctx->pc = 0x1AB404u;
label_1ab404:
    // 0x1ab404: 0x8f848c5c  lw          $a0, -0x73A4($gp)
    ctx->pc = 0x1ab404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937692)));
label_1ab408:
    // 0x1ab408: 0x8c990060  lw          $t9, 0x60($a0)
    ctx->pc = 0x1ab408u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_1ab40c:
    // 0x1ab40c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1ab40cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1ab410:
    // 0x1ab410: 0x320f809  jalr        $t9
label_1ab414:
    if (ctx->pc == 0x1AB414u) {
        ctx->pc = 0x1AB414u;
            // 0x1ab414: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1AB418u;
        goto label_1ab418;
    }
    ctx->pc = 0x1AB410u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1AB418u);
        ctx->pc = 0x1AB414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB410u;
            // 0x1ab414: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1AB418u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1AB418u; }
            if (ctx->pc != 0x1AB418u) { return; }
        }
        }
    }
    ctx->pc = 0x1AB418u;
label_1ab418:
    // 0x1ab418: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab41c:
    // 0x1ab41c: 0x8c22ea44  lw          $v0, -0x15BC($at)
    ctx->pc = 0x1ab41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961732)));
label_1ab420:
    // 0x1ab420: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ab420u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ab424:
    // 0x1ab424: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1ab428:
    if (ctx->pc == 0x1AB428u) {
        ctx->pc = 0x1AB428u;
            // 0x1ab428: 0x22a83  sra         $a1, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 10));
        ctx->pc = 0x1AB42Cu;
        goto label_1ab42c;
    }
    ctx->pc = 0x1AB424u;
    {
        const bool branch_taken_0x1ab424 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AB428u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB424u;
            // 0x1ab428: 0x22a83  sra         $a1, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab424) {
            ctx->pc = 0x1AB434u;
            goto label_1ab434;
        }
    }
    ctx->pc = 0x1AB42Cu;
label_1ab42c:
    // 0x1ab42c: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x1ab42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
label_1ab430:
    // 0x1ab430: 0x22a83  sra         $a1, $v0, 10
    ctx->pc = 0x1ab430u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 10));
label_1ab434:
    // 0x1ab434: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1ab434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_1ab438:
    // 0x1ab438: 0xc04a0d2  jal         func_128348
label_1ab43c:
    if (ctx->pc == 0x1AB43Cu) {
        ctx->pc = 0x1AB43Cu;
            // 0x1ab43c: 0x24846300  addiu       $a0, $a0, 0x6300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25344));
        ctx->pc = 0x1AB440u;
        goto label_1ab440;
    }
    ctx->pc = 0x1AB438u;
    SET_GPR_U32(ctx, 31, 0x1AB440u);
    ctx->pc = 0x1AB43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB438u;
            // 0x1ab43c: 0x24846300  addiu       $a0, $a0, 0x6300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25344));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB440u; }
        if (ctx->pc != 0x1AB440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB440u; }
        if (ctx->pc != 0x1AB440u) { return; }
    }
    ctx->pc = 0x1AB440u;
label_1ab440:
    // 0x1ab440: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab440u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab444:
    // 0x1ab444: 0x8c22eaa4  lw          $v0, -0x155C($at)
    ctx->pc = 0x1ab444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961828)));
label_1ab448:
    // 0x1ab448: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ab448u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ab44c:
    // 0x1ab44c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1ab450:
    if (ctx->pc == 0x1AB450u) {
        ctx->pc = 0x1AB450u;
            // 0x1ab450: 0x22a83  sra         $a1, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 10));
        ctx->pc = 0x1AB454u;
        goto label_1ab454;
    }
    ctx->pc = 0x1AB44Cu;
    {
        const bool branch_taken_0x1ab44c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AB450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB44Cu;
            // 0x1ab450: 0x22a83  sra         $a1, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab44c) {
            ctx->pc = 0x1AB45Cu;
            goto label_1ab45c;
        }
    }
    ctx->pc = 0x1AB454u;
label_1ab454:
    // 0x1ab454: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x1ab454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
label_1ab458:
    // 0x1ab458: 0x22a83  sra         $a1, $v0, 10
    ctx->pc = 0x1ab458u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 10));
label_1ab45c:
    // 0x1ab45c: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1ab45cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_1ab460:
    // 0x1ab460: 0xc04a0d2  jal         func_128348
label_1ab464:
    if (ctx->pc == 0x1AB464u) {
        ctx->pc = 0x1AB464u;
            // 0x1ab464: 0x24846320  addiu       $a0, $a0, 0x6320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25376));
        ctx->pc = 0x1AB468u;
        goto label_1ab468;
    }
    ctx->pc = 0x1AB460u;
    SET_GPR_U32(ctx, 31, 0x1AB468u);
    ctx->pc = 0x1AB464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB460u;
            // 0x1ab464: 0x24846320  addiu       $a0, $a0, 0x6320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB468u; }
        if (ctx->pc != 0x1AB468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB468u; }
        if (ctx->pc != 0x1AB468u) { return; }
    }
    ctx->pc = 0x1AB468u;
label_1ab468:
    // 0x1ab468: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab468u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab46c:
    // 0x1ab46c: 0x8c22ead4  lw          $v0, -0x152C($at)
    ctx->pc = 0x1ab46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961876)));
label_1ab470:
    // 0x1ab470: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ab470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ab474:
    // 0x1ab474: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1ab478:
    if (ctx->pc == 0x1AB478u) {
        ctx->pc = 0x1AB478u;
            // 0x1ab478: 0x22a83  sra         $a1, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 10));
        ctx->pc = 0x1AB47Cu;
        goto label_1ab47c;
    }
    ctx->pc = 0x1AB474u;
    {
        const bool branch_taken_0x1ab474 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AB478u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB474u;
            // 0x1ab478: 0x22a83  sra         $a1, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab474) {
            ctx->pc = 0x1AB484u;
            goto label_1ab484;
        }
    }
    ctx->pc = 0x1AB47Cu;
label_1ab47c:
    // 0x1ab47c: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x1ab47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
label_1ab480:
    // 0x1ab480: 0x22a83  sra         $a1, $v0, 10
    ctx->pc = 0x1ab480u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 10));
label_1ab484:
    // 0x1ab484: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1ab484u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_1ab488:
    // 0x1ab488: 0xc04a0d2  jal         func_128348
label_1ab48c:
    if (ctx->pc == 0x1AB48Cu) {
        ctx->pc = 0x1AB48Cu;
            // 0x1ab48c: 0x24846340  addiu       $a0, $a0, 0x6340 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25408));
        ctx->pc = 0x1AB490u;
        goto label_1ab490;
    }
    ctx->pc = 0x1AB488u;
    SET_GPR_U32(ctx, 31, 0x1AB490u);
    ctx->pc = 0x1AB48Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB488u;
            // 0x1ab48c: 0x24846340  addiu       $a0, $a0, 0x6340 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB490u; }
        if (ctx->pc != 0x1AB490u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB490u; }
        if (ctx->pc != 0x1AB490u) { return; }
    }
    ctx->pc = 0x1AB490u;
label_1ab490:
    // 0x1ab490: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab494:
    // 0x1ab494: 0x8c22eb04  lw          $v0, -0x14FC($at)
    ctx->pc = 0x1ab494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961924)));
label_1ab498:
    // 0x1ab498: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ab498u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ab49c:
    // 0x1ab49c: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1ab4a0:
    if (ctx->pc == 0x1AB4A0u) {
        ctx->pc = 0x1AB4A0u;
            // 0x1ab4a0: 0x22a83  sra         $a1, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 10));
        ctx->pc = 0x1AB4A4u;
        goto label_1ab4a4;
    }
    ctx->pc = 0x1AB49Cu;
    {
        const bool branch_taken_0x1ab49c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AB4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB49Cu;
            // 0x1ab4a0: 0x22a83  sra         $a1, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab49c) {
            ctx->pc = 0x1AB4ACu;
            goto label_1ab4ac;
        }
    }
    ctx->pc = 0x1AB4A4u;
label_1ab4a4:
    // 0x1ab4a4: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x1ab4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
label_1ab4a8:
    // 0x1ab4a8: 0x22a83  sra         $a1, $v0, 10
    ctx->pc = 0x1ab4a8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 10));
label_1ab4ac:
    // 0x1ab4ac: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1ab4acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_1ab4b0:
    // 0x1ab4b0: 0xc04a0d2  jal         func_128348
label_1ab4b4:
    if (ctx->pc == 0x1AB4B4u) {
        ctx->pc = 0x1AB4B4u;
            // 0x1ab4b4: 0x24846360  addiu       $a0, $a0, 0x6360 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25440));
        ctx->pc = 0x1AB4B8u;
        goto label_1ab4b8;
    }
    ctx->pc = 0x1AB4B0u;
    SET_GPR_U32(ctx, 31, 0x1AB4B8u);
    ctx->pc = 0x1AB4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB4B0u;
            // 0x1ab4b4: 0x24846360  addiu       $a0, $a0, 0x6360 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB4B8u; }
        if (ctx->pc != 0x1AB4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB4B8u; }
        if (ctx->pc != 0x1AB4B8u) { return; }
    }
    ctx->pc = 0x1AB4B8u;
label_1ab4b8:
    // 0x1ab4b8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab4b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab4bc:
    // 0x1ab4bc: 0x8c23eb08  lw          $v1, -0x14F8($at)
    ctx->pc = 0x1ab4bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961928)));
label_1ab4c0:
    // 0x1ab4c0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab4c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab4c4:
    // 0x1ab4c4: 0x8c22eb04  lw          $v0, -0x14FC($at)
    ctx->pc = 0x1ab4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961924)));
label_1ab4c8:
    // 0x1ab4c8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x1ab4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_1ab4cc:
    // 0x1ab4cc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x1ab4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_1ab4d0:
    // 0x1ab4d0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_1ab4d4:
    if (ctx->pc == 0x1AB4D4u) {
        ctx->pc = 0x1AB4D4u;
            // 0x1ab4d4: 0x22a83  sra         $a1, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 10));
        ctx->pc = 0x1AB4D8u;
        goto label_1ab4d8;
    }
    ctx->pc = 0x1AB4D0u;
    {
        const bool branch_taken_0x1ab4d0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AB4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB4D0u;
            // 0x1ab4d4: 0x22a83  sra         $a1, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab4d0) {
            ctx->pc = 0x1AB4E0u;
            goto label_1ab4e0;
        }
    }
    ctx->pc = 0x1AB4D8u;
label_1ab4d8:
    // 0x1ab4d8: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x1ab4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
label_1ab4dc:
    // 0x1ab4dc: 0x22a83  sra         $a1, $v0, 10
    ctx->pc = 0x1ab4dcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 10));
label_1ab4e0:
    // 0x1ab4e0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x1ab4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_1ab4e4:
    // 0x1ab4e4: 0xc04a0d2  jal         func_128348
label_1ab4e8:
    if (ctx->pc == 0x1AB4E8u) {
        ctx->pc = 0x1AB4E8u;
            // 0x1ab4e8: 0x24846380  addiu       $a0, $a0, 0x6380 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25472));
        ctx->pc = 0x1AB4ECu;
        goto label_1ab4ec;
    }
    ctx->pc = 0x1AB4E4u;
    SET_GPR_U32(ctx, 31, 0x1AB4ECu);
    ctx->pc = 0x1AB4E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB4E4u;
            // 0x1ab4e8: 0x24846380  addiu       $a0, $a0, 0x6380 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB4ECu; }
        if (ctx->pc != 0x1AB4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB4ECu; }
        if (ctx->pc != 0x1AB4ECu) { return; }
    }
    ctx->pc = 0x1AB4ECu;
label_1ab4ec:
    // 0x1ab4ec: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab4ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab4f0:
    // 0x1ab4f0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1ab4f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab4f4:
    // 0x1ab4f4: 0xac20c714  sw          $zero, -0x38EC($at)
    ctx->pc = 0x1ab4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294952724), GPR_U32(ctx, 0));
label_1ab4f8:
    // 0x1ab4f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ab4f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab4fc:
    // 0x1ab4fc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab4fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab500:
    // 0x1ab500: 0xac20c734  sw          $zero, -0x38CC($at)
    ctx->pc = 0x1ab500u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294952756), GPR_U32(ctx, 0));
label_1ab504:
    // 0x1ab504: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab508:
    // 0x1ab508: 0xac20c738  sw          $zero, -0x38C8($at)
    ctx->pc = 0x1ab508u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294952760), GPR_U32(ctx, 0));
label_1ab50c:
    // 0x1ab50c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab50cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab510:
    // 0x1ab510: 0xac20c73c  sw          $zero, -0x38C4($at)
    ctx->pc = 0x1ab510u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294952764), GPR_U32(ctx, 0));
label_1ab514:
    // 0x1ab514: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab514u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab518:
    // 0x1ab518: 0xac20c740  sw          $zero, -0x38C0($at)
    ctx->pc = 0x1ab518u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294952768), GPR_U32(ctx, 0));
label_1ab51c:
    // 0x1ab51c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab51cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab520:
    // 0x1ab520: 0xac20c744  sw          $zero, -0x38BC($at)
    ctx->pc = 0x1ab520u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294952772), GPR_U32(ctx, 0));
label_1ab524:
    // 0x1ab524: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1ab524u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1ab528:
    // 0x1ab528: 0x2484c660  addiu       $a0, $a0, -0x39A0
    ctx->pc = 0x1ab528u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952544));
label_1ab52c:
    // 0x1ab52c: 0x853021  addu        $a2, $a0, $a1
    ctx->pc = 0x1ab52cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1ab530:
    // 0x1ab530: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x1ab530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_1ab534:
    // 0x1ab534: 0xacc000e8  sw          $zero, 0xE8($a2)
    ctx->pc = 0x1ab534u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 232), GPR_U32(ctx, 0));
label_1ab538:
    // 0x1ab538: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x1ab538u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
label_1ab53c:
    // 0x1ab53c: 0xacc000ec  sw          $zero, 0xEC($a2)
    ctx->pc = 0x1ab53cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 236), GPR_U32(ctx, 0));
label_1ab540:
    // 0x1ab540: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1ab540u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_1ab544:
    // 0x1ab544: 0xacc000f0  sw          $zero, 0xF0($a2)
    ctx->pc = 0x1ab544u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 240), GPR_U32(ctx, 0));
label_1ab548:
    // 0x1ab548: 0xacc000f4  sw          $zero, 0xF4($a2)
    ctx->pc = 0x1ab548u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 244), GPR_U32(ctx, 0));
label_1ab54c:
    // 0x1ab54c: 0xacc000f8  sw          $zero, 0xF8($a2)
    ctx->pc = 0x1ab54cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 248), GPR_U32(ctx, 0));
label_1ab550:
    // 0x1ab550: 0xacc000fc  sw          $zero, 0xFC($a2)
    ctx->pc = 0x1ab550u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 252), GPR_U32(ctx, 0));
label_1ab554:
    // 0x1ab554: 0xacc00100  sw          $zero, 0x100($a2)
    ctx->pc = 0x1ab554u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 256), GPR_U32(ctx, 0));
label_1ab558:
    // 0x1ab558: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_1ab55c:
    if (ctx->pc == 0x1AB55Cu) {
        ctx->pc = 0x1AB55Cu;
            // 0x1ab55c: 0xacc00104  sw          $zero, 0x104($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 260), GPR_U32(ctx, 0));
        ctx->pc = 0x1AB560u;
        goto label_1ab560;
    }
    ctx->pc = 0x1AB558u;
    {
        const bool branch_taken_0x1ab558 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB558u;
            // 0x1ab55c: 0xacc00104  sw          $zero, 0x104($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab558) {
            ctx->pc = 0x1AB52Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ab52c;
        }
    }
    ctx->pc = 0x1AB560u;
label_1ab560:
    // 0x1ab560: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab560u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab564:
    // 0x1ab564: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ab564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab568:
    // 0x1ab568: 0xac20c788  sw          $zero, -0x3878($at)
    ctx->pc = 0x1ab568u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294952840), GPR_U32(ctx, 0));
label_1ab56c:
    // 0x1ab56c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab56cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab570:
    // 0x1ab570: 0xac22c7ec  sw          $v0, -0x3814($at)
    ctx->pc = 0x1ab570u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294952940), GPR_U32(ctx, 2));
label_1ab574:
    // 0x1ab574: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab574u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab578:
    // 0x1ab578: 0xac20c78c  sw          $zero, -0x3874($at)
    ctx->pc = 0x1ab578u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294952844), GPR_U32(ctx, 0));
label_1ab57c:
    // 0x1ab57c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab57cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab580:
    // 0x1ab580: 0xc0547dc  jal         func_151F70
label_1ab584:
    if (ctx->pc == 0x1AB584u) {
        ctx->pc = 0x1AB584u;
            // 0x1ab584: 0xac20c7e8  sw          $zero, -0x3818($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294952936), GPR_U32(ctx, 0));
        ctx->pc = 0x1AB588u;
        goto label_1ab588;
    }
    ctx->pc = 0x1AB580u;
    SET_GPR_U32(ctx, 31, 0x1AB588u);
    ctx->pc = 0x1AB584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB580u;
            // 0x1ab584: 0xac20c7e8  sw          $zero, -0x3818($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294952936), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151F70u;
    if (runtime->hasFunction(0x151F70u)) {
        auto targetFn = runtime->lookupFunction(0x151F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB588u; }
        if (ctx->pc != 0x1AB588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawSpeedDef__6ClsMesFv_0x151f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB588u; }
        if (ctx->pc != 0x1AB588u) { return; }
    }
    ctx->pc = 0x1AB588u;
label_1ab588:
    // 0x1ab588: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab588u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab58c:
    // 0x1ab58c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1ab58cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1ab590:
    // 0x1ab590: 0xe420c818  swc1        $f0, -0x37E8($at)
    ctx->pc = 0x1ab590u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 1), 4294952984), bits); }
label_1ab594:
    // 0x1ab594: 0x2484c660  addiu       $a0, $a0, -0x39A0
    ctx->pc = 0x1ab594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952544));
label_1ab598:
    // 0x1ab598: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab59c:
    // 0x1ab59c: 0xac20c820  sw          $zero, -0x37E0($at)
    ctx->pc = 0x1ab59cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294952992), GPR_U32(ctx, 0));
label_1ab5a0:
    // 0x1ab5a0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab5a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab5a4:
    // 0x1ab5a4: 0xac20c82c  sw          $zero, -0x37D4($at)
    ctx->pc = 0x1ab5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953004), GPR_U32(ctx, 0));
label_1ab5a8:
    // 0x1ab5a8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab5a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab5ac:
    // 0x1ab5ac: 0xac20c830  sw          $zero, -0x37D0($at)
    ctx->pc = 0x1ab5acu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953008), GPR_U32(ctx, 0));
label_1ab5b0:
    // 0x1ab5b0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab5b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab5b4:
    // 0x1ab5b4: 0xac20c834  sw          $zero, -0x37CC($at)
    ctx->pc = 0x1ab5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953012), GPR_U32(ctx, 0));
label_1ab5b8:
    // 0x1ab5b8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab5b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab5bc:
    // 0x1ab5bc: 0xac20c838  sw          $zero, -0x37C8($at)
    ctx->pc = 0x1ab5bcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953016), GPR_U32(ctx, 0));
label_1ab5c0:
    // 0x1ab5c0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab5c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab5c4:
    // 0x1ab5c4: 0xc0557f0  jal         func_155FC0
label_1ab5c8:
    if (ctx->pc == 0x1AB5C8u) {
        ctx->pc = 0x1AB5C8u;
            // 0x1ab5c8: 0xac20c83c  sw          $zero, -0x37C4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294953020), GPR_U32(ctx, 0));
        ctx->pc = 0x1AB5CCu;
        goto label_1ab5cc;
    }
    ctx->pc = 0x1AB5C4u;
    SET_GPR_U32(ctx, 31, 0x1AB5CCu);
    ctx->pc = 0x1AB5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB5C4u;
            // 0x1ab5c8: 0xac20c83c  sw          $zero, -0x37C4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294953020), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155FC0u;
    if (runtime->hasFunction(0x155FC0u)) {
        auto targetFn = runtime->lookupFunction(0x155FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB5CCu; }
        if (ctx->pc != 0x1AB5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMesWinTbl__6ClsMesFv_0x155fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB5CCu; }
        if (ctx->pc != 0x1AB5CCu) { return; }
    }
    ctx->pc = 0x1AB5CCu;
label_1ab5cc:
    // 0x1ab5cc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab5ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab5d0:
    // 0x1ab5d0: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x1ab5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1ab5d4:
    // 0x1ab5d4: 0xac20de38  sw          $zero, -0x21C8($at)
    ctx->pc = 0x1ab5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958648), GPR_U32(ctx, 0));
label_1ab5d8:
    // 0x1ab5d8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1ab5d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab5dc:
    // 0x1ab5dc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab5dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab5e0:
    // 0x1ab5e0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ab5e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab5e4:
    // 0x1ab5e4: 0xac22de40  sw          $v0, -0x21C0($at)
    ctx->pc = 0x1ab5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958656), GPR_U32(ctx, 2));
label_1ab5e8:
    // 0x1ab5e8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1ab5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ab5ec:
    // 0x1ab5ec: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab5ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab5f0:
    // 0x1ab5f0: 0xac22de44  sw          $v0, -0x21BC($at)
    ctx->pc = 0x1ab5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958660), GPR_U32(ctx, 2));
label_1ab5f4:
    // 0x1ab5f4: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x1ab5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1ab5f8:
    // 0x1ab5f8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab5f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab5fc:
    // 0x1ab5fc: 0xa022de60  sb          $v0, -0x21A0($at)
    ctx->pc = 0x1ab5fcu;
    WRITE8(ADD32(GPR_U32(ctx, 1), 4294958688), (uint8_t)GPR_U32(ctx, 2));
label_1ab600:
    // 0x1ab600: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab600u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab604:
    // 0x1ab604: 0xac20de3c  sw          $zero, -0x21C4($at)
    ctx->pc = 0x1ab604u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958652), GPR_U32(ctx, 0));
label_1ab608:
    // 0x1ab608: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab60c:
    // 0x1ab60c: 0xac20de48  sw          $zero, -0x21B8($at)
    ctx->pc = 0x1ab60cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958664), GPR_U32(ctx, 0));
label_1ab610:
    // 0x1ab610: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab614:
    // 0x1ab614: 0x8c22de30  lw          $v0, -0x21D0($at)
    ctx->pc = 0x1ab614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294958640)));
label_1ab618:
    // 0x1ab618: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab618u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab61c:
    // 0x1ab61c: 0xac22de34  sw          $v0, -0x21CC($at)
    ctx->pc = 0x1ab61cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958644), GPR_U32(ctx, 2));
label_1ab620:
    // 0x1ab620: 0x3c0201ea  lui         $v0, 0x1EA
    ctx->pc = 0x1ab620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)490 << 16));
label_1ab624:
    // 0x1ab624: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ab624u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab628:
    // 0x1ab628: 0x2442c660  addiu       $v0, $v0, -0x39A0
    ctx->pc = 0x1ab628u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952544));
label_1ab62c:
    // 0x1ab62c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x1ab62cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_1ab630:
    // 0x1ab630: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1ab630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1ab634:
    // 0x1ab634: 0xc049c86  jal         func_127218
label_1ab638:
    if (ctx->pc == 0x1AB638u) {
        ctx->pc = 0x1AB638u;
            // 0x1ab638: 0x24441801  addiu       $a0, $v0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
        ctx->pc = 0x1AB63Cu;
        goto label_1ab63c;
    }
    ctx->pc = 0x1AB634u;
    SET_GPR_U32(ctx, 31, 0x1AB63Cu);
    ctx->pc = 0x1AB638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB634u;
            // 0x1ab638: 0x24441801  addiu       $a0, $v0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB63Cu; }
        if (ctx->pc != 0x1AB63Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB63Cu; }
        if (ctx->pc != 0x1AB63Cu) { return; }
    }
    ctx->pc = 0x1AB63Cu;
label_1ab63c:
    // 0x1ab63c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1ab63cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1ab640:
    // 0x1ab640: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x1ab640u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
label_1ab644:
    // 0x1ab644: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1ab648:
    if (ctx->pc == 0x1AB648u) {
        ctx->pc = 0x1AB648u;
            // 0x1ab648: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->pc = 0x1AB64Cu;
        goto label_1ab64c;
    }
    ctx->pc = 0x1AB644u;
    {
        const bool branch_taken_0x1ab644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB644u;
            // 0x1ab648: 0x26520020  addiu       $s2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab644) {
            ctx->pc = 0x1AB620u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ab620;
        }
    }
    ctx->pc = 0x1AB64Cu;
label_1ab64c:
    // 0x1ab64c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ab64cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab650:
    // 0x1ab650: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ab650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab654:
    // 0x1ab654: 0x3c0301ea  lui         $v1, 0x1EA
    ctx->pc = 0x1ab654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)490 << 16));
label_1ab658:
    // 0x1ab658: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1ab658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ab65c:
    // 0x1ab65c: 0x2463c660  addiu       $v1, $v1, -0x39A0
    ctx->pc = 0x1ab65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952544));
label_1ab660:
    // 0x1ab660: 0x663821  addu        $a3, $v1, $a2
    ctx->pc = 0x1ab660u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1ab664:
    // 0x1ab664: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1ab664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_1ab668:
    // 0x1ab668: 0xace41a04  sw          $a0, 0x1A04($a3)
    ctx->pc = 0x1ab668u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6660), GPR_U32(ctx, 4));
label_1ab66c:
    // 0x1ab66c: 0x28a20010  slti        $v0, $a1, 0x10
    ctx->pc = 0x1ab66cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
label_1ab670:
    // 0x1ab670: 0xace41a08  sw          $a0, 0x1A08($a3)
    ctx->pc = 0x1ab670u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6664), GPR_U32(ctx, 4));
label_1ab674:
    // 0x1ab674: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x1ab674u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_1ab678:
    // 0x1ab678: 0xace41a0c  sw          $a0, 0x1A0C($a3)
    ctx->pc = 0x1ab678u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6668), GPR_U32(ctx, 4));
label_1ab67c:
    // 0x1ab67c: 0xace41a10  sw          $a0, 0x1A10($a3)
    ctx->pc = 0x1ab67cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6672), GPR_U32(ctx, 4));
label_1ab680:
    // 0x1ab680: 0xace41a14  sw          $a0, 0x1A14($a3)
    ctx->pc = 0x1ab680u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6676), GPR_U32(ctx, 4));
label_1ab684:
    // 0x1ab684: 0xace41a18  sw          $a0, 0x1A18($a3)
    ctx->pc = 0x1ab684u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6680), GPR_U32(ctx, 4));
label_1ab688:
    // 0x1ab688: 0xace41a1c  sw          $a0, 0x1A1C($a3)
    ctx->pc = 0x1ab688u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6684), GPR_U32(ctx, 4));
label_1ab68c:
    // 0x1ab68c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_1ab690:
    if (ctx->pc == 0x1AB690u) {
        ctx->pc = 0x1AB690u;
            // 0x1ab690: 0xace41a20  sw          $a0, 0x1A20($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 6688), GPR_U32(ctx, 4));
        ctx->pc = 0x1AB694u;
        goto label_1ab694;
    }
    ctx->pc = 0x1AB68Cu;
    {
        const bool branch_taken_0x1ab68c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB690u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB68Cu;
            // 0x1ab690: 0xace41a20  sw          $a0, 0x1A20($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 6688), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab68c) {
            ctx->pc = 0x1AB660u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ab660;
        }
    }
    ctx->pc = 0x1AB694u;
label_1ab694:
    // 0x1ab694: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1ab694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab698:
    // 0x1ab698: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ab698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab69c:
    // 0x1ab69c: 0x3c0301ea  lui         $v1, 0x1EA
    ctx->pc = 0x1ab69cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)490 << 16));
label_1ab6a0:
    // 0x1ab6a0: 0x2463c660  addiu       $v1, $v1, -0x39A0
    ctx->pc = 0x1ab6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952544));
label_1ab6a4:
    // 0x1ab6a4: 0x653021  addu        $a2, $v1, $a1
    ctx->pc = 0x1ab6a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_1ab6a8:
    // 0x1ab6a8: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1ab6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_1ab6ac:
    // 0x1ab6ac: 0xacc01a44  sw          $zero, 0x1A44($a2)
    ctx->pc = 0x1ab6acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6724), GPR_U32(ctx, 0));
label_1ab6b0:
    // 0x1ab6b0: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x1ab6b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
label_1ab6b4:
    // 0x1ab6b4: 0xacc01a84  sw          $zero, 0x1A84($a2)
    ctx->pc = 0x1ab6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6788), GPR_U32(ctx, 0));
label_1ab6b8:
    // 0x1ab6b8: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x1ab6b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_1ab6bc:
    // 0x1ab6bc: 0xacc01a48  sw          $zero, 0x1A48($a2)
    ctx->pc = 0x1ab6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6728), GPR_U32(ctx, 0));
label_1ab6c0:
    // 0x1ab6c0: 0xacc01a88  sw          $zero, 0x1A88($a2)
    ctx->pc = 0x1ab6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6792), GPR_U32(ctx, 0));
label_1ab6c4:
    // 0x1ab6c4: 0xacc01a4c  sw          $zero, 0x1A4C($a2)
    ctx->pc = 0x1ab6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6732), GPR_U32(ctx, 0));
label_1ab6c8:
    // 0x1ab6c8: 0xacc01a8c  sw          $zero, 0x1A8C($a2)
    ctx->pc = 0x1ab6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6796), GPR_U32(ctx, 0));
label_1ab6cc:
    // 0x1ab6cc: 0xacc01a50  sw          $zero, 0x1A50($a2)
    ctx->pc = 0x1ab6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6736), GPR_U32(ctx, 0));
label_1ab6d0:
    // 0x1ab6d0: 0xacc01a90  sw          $zero, 0x1A90($a2)
    ctx->pc = 0x1ab6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6800), GPR_U32(ctx, 0));
label_1ab6d4:
    // 0x1ab6d4: 0xacc01a54  sw          $zero, 0x1A54($a2)
    ctx->pc = 0x1ab6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6740), GPR_U32(ctx, 0));
label_1ab6d8:
    // 0x1ab6d8: 0xacc01a94  sw          $zero, 0x1A94($a2)
    ctx->pc = 0x1ab6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6804), GPR_U32(ctx, 0));
label_1ab6dc:
    // 0x1ab6dc: 0xacc01a58  sw          $zero, 0x1A58($a2)
    ctx->pc = 0x1ab6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6744), GPR_U32(ctx, 0));
label_1ab6e0:
    // 0x1ab6e0: 0xacc01a98  sw          $zero, 0x1A98($a2)
    ctx->pc = 0x1ab6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6808), GPR_U32(ctx, 0));
label_1ab6e4:
    // 0x1ab6e4: 0xacc01a5c  sw          $zero, 0x1A5C($a2)
    ctx->pc = 0x1ab6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6748), GPR_U32(ctx, 0));
label_1ab6e8:
    // 0x1ab6e8: 0xacc01a9c  sw          $zero, 0x1A9C($a2)
    ctx->pc = 0x1ab6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6812), GPR_U32(ctx, 0));
label_1ab6ec:
    // 0x1ab6ec: 0xacc01a60  sw          $zero, 0x1A60($a2)
    ctx->pc = 0x1ab6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6752), GPR_U32(ctx, 0));
label_1ab6f0:
    // 0x1ab6f0: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_1ab6f4:
    if (ctx->pc == 0x1AB6F4u) {
        ctx->pc = 0x1AB6F4u;
            // 0x1ab6f4: 0xacc01aa0  sw          $zero, 0x1AA0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 6816), GPR_U32(ctx, 0));
        ctx->pc = 0x1AB6F8u;
        goto label_1ab6f8;
    }
    ctx->pc = 0x1AB6F0u;
    {
        const bool branch_taken_0x1ab6f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB6F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB6F0u;
            // 0x1ab6f4: 0xacc01aa0  sw          $zero, 0x1AA0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 6816), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab6f0) {
            ctx->pc = 0x1AB6A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ab6a4;
        }
    }
    ctx->pc = 0x1AB6F8u;
label_1ab6f8:
    // 0x1ab6f8: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab6f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab6fc:
    // 0x1ab6fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ab6fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab700:
    // 0x1ab700: 0xac20e124  sw          $zero, -0x1EDC($at)
    ctx->pc = 0x1ab700u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959396), GPR_U32(ctx, 0));
label_1ab704:
    // 0x1ab704: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1ab704u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1ab708:
    // 0x1ab708: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab70c:
    // 0x1ab70c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ab70cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab710:
    // 0x1ab710: 0xac22e12c  sw          $v0, -0x1ED4($at)
    ctx->pc = 0x1ab710u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959404), GPR_U32(ctx, 2));
label_1ab714:
    // 0x1ab714: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1ab714u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab718:
    // 0x1ab718: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab718u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab71c:
    // 0x1ab71c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ab71cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab720:
    // 0x1ab720: 0xac20e128  sw          $zero, -0x1ED8($at)
    ctx->pc = 0x1ab720u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959400), GPR_U32(ctx, 0));
label_1ab724:
    // 0x1ab724: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab728:
    // 0x1ab728: 0xac20e130  sw          $zero, -0x1ED0($at)
    ctx->pc = 0x1ab728u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959408), GPR_U32(ctx, 0));
label_1ab72c:
    // 0x1ab72c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab72cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab730:
    // 0x1ab730: 0xac20e134  sw          $zero, -0x1ECC($at)
    ctx->pc = 0x1ab730u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959412), GPR_U32(ctx, 0));
label_1ab734:
    // 0x1ab734: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab734u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab738:
    // 0x1ab738: 0xac20e138  sw          $zero, -0x1EC8($at)
    ctx->pc = 0x1ab738u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959416), GPR_U32(ctx, 0));
label_1ab73c:
    // 0x1ab73c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab73cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab740:
    // 0x1ab740: 0xac23e13c  sw          $v1, -0x1EC4($at)
    ctx->pc = 0x1ab740u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959420), GPR_U32(ctx, 3));
label_1ab744:
    // 0x1ab744: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab748:
    // 0x1ab748: 0xac23e140  sw          $v1, -0x1EC0($at)
    ctx->pc = 0x1ab748u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959424), GPR_U32(ctx, 3));
label_1ab74c:
    // 0x1ab74c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab74cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab750:
    // 0x1ab750: 0xac23e144  sw          $v1, -0x1EBC($at)
    ctx->pc = 0x1ab750u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959428), GPR_U32(ctx, 3));
label_1ab754:
    // 0x1ab754: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab754u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab758:
    // 0x1ab758: 0xac20e148  sw          $zero, -0x1EB8($at)
    ctx->pc = 0x1ab758u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959432), GPR_U32(ctx, 0));
label_1ab75c:
    // 0x1ab75c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab75cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab760:
    // 0x1ab760: 0xac20e14c  sw          $zero, -0x1EB4($at)
    ctx->pc = 0x1ab760u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959436), GPR_U32(ctx, 0));
label_1ab764:
    // 0x1ab764: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab764u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab768:
    // 0x1ab768: 0xac20e150  sw          $zero, -0x1EB0($at)
    ctx->pc = 0x1ab768u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959440), GPR_U32(ctx, 0));
label_1ab76c:
    // 0x1ab76c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab76cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab770:
    // 0x1ab770: 0xac20e154  sw          $zero, -0x1EAC($at)
    ctx->pc = 0x1ab770u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959444), GPR_U32(ctx, 0));
label_1ab774:
    // 0x1ab774: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab778:
    // 0x1ab778: 0xac20e158  sw          $zero, -0x1EA8($at)
    ctx->pc = 0x1ab778u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959448), GPR_U32(ctx, 0));
label_1ab77c:
    // 0x1ab77c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab77cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab780:
    // 0x1ab780: 0xac20e15c  sw          $zero, -0x1EA4($at)
    ctx->pc = 0x1ab780u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959452), GPR_U32(ctx, 0));
label_1ab784:
    // 0x1ab784: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab784u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab788:
    // 0x1ab788: 0xac20e160  sw          $zero, -0x1EA0($at)
    ctx->pc = 0x1ab788u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959456), GPR_U32(ctx, 0));
label_1ab78c:
    // 0x1ab78c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab78cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab790:
    // 0x1ab790: 0xac23e164  sw          $v1, -0x1E9C($at)
    ctx->pc = 0x1ab790u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959460), GPR_U32(ctx, 3));
label_1ab794:
    // 0x1ab794: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab794u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab798:
    // 0x1ab798: 0xac23e168  sw          $v1, -0x1E98($at)
    ctx->pc = 0x1ab798u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959464), GPR_U32(ctx, 3));
label_1ab79c:
    // 0x1ab79c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab79cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab7a0:
    // 0x1ab7a0: 0xac23e16c  sw          $v1, -0x1E94($at)
    ctx->pc = 0x1ab7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959468), GPR_U32(ctx, 3));
label_1ab7a4:
    // 0x1ab7a4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab7a4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab7a8:
    // 0x1ab7a8: 0xac23e170  sw          $v1, -0x1E90($at)
    ctx->pc = 0x1ab7a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959472), GPR_U32(ctx, 3));
label_1ab7ac:
    // 0x1ab7ac: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab7acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab7b0:
    // 0x1ab7b0: 0xac20e174  sw          $zero, -0x1E8C($at)
    ctx->pc = 0x1ab7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959476), GPR_U32(ctx, 0));
label_1ab7b4:
    // 0x1ab7b4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab7b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab7b8:
    // 0x1ab7b8: 0xac20e178  sw          $zero, -0x1E88($at)
    ctx->pc = 0x1ab7b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959480), GPR_U32(ctx, 0));
label_1ab7bc:
    // 0x1ab7bc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab7bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab7c0:
    // 0x1ab7c0: 0xac20e17c  sw          $zero, -0x1E84($at)
    ctx->pc = 0x1ab7c0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959484), GPR_U32(ctx, 0));
label_1ab7c4:
    // 0x1ab7c4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab7c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab7c8:
    // 0x1ab7c8: 0xac20e180  sw          $zero, -0x1E80($at)
    ctx->pc = 0x1ab7c8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959488), GPR_U32(ctx, 0));
label_1ab7cc:
    // 0x1ab7cc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab7ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab7d0:
    // 0x1ab7d0: 0xac20e184  sw          $zero, -0x1E7C($at)
    ctx->pc = 0x1ab7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959492), GPR_U32(ctx, 0));
label_1ab7d4:
    // 0x1ab7d4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab7d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab7d8:
    // 0x1ab7d8: 0xac20e188  sw          $zero, -0x1E78($at)
    ctx->pc = 0x1ab7d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959496), GPR_U32(ctx, 0));
label_1ab7dc:
    // 0x1ab7dc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab7e0:
    // 0x1ab7e0: 0xac20e190  sw          $zero, -0x1E70($at)
    ctx->pc = 0x1ab7e0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959504), GPR_U32(ctx, 0));
label_1ab7e4:
    // 0x1ab7e4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab7e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab7e8:
    // 0x1ab7e8: 0xac20e194  sw          $zero, -0x1E6C($at)
    ctx->pc = 0x1ab7e8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959508), GPR_U32(ctx, 0));
label_1ab7ec:
    // 0x1ab7ec: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab7ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab7f0:
    // 0x1ab7f0: 0xac20e19c  sw          $zero, -0x1E64($at)
    ctx->pc = 0x1ab7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959516), GPR_U32(ctx, 0));
label_1ab7f4:
    // 0x1ab7f4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab7f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab7f8:
    // 0x1ab7f8: 0xac20e198  sw          $zero, -0x1E68($at)
    ctx->pc = 0x1ab7f8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959512), GPR_U32(ctx, 0));
label_1ab7fc:
    // 0x1ab7fc: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab7fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab800:
    // 0x1ab800: 0xac20e1a0  sw          $zero, -0x1E60($at)
    ctx->pc = 0x1ab800u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294959520), GPR_U32(ctx, 0));
label_1ab804:
    // 0x1ab804: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1ab804u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1ab808:
    // 0x1ab808: 0x2484c660  addiu       $a0, $a0, -0x39A0
    ctx->pc = 0x1ab808u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952544));
label_1ab80c:
    // 0x1ab80c: 0x864021  addu        $t0, $a0, $a2
    ctx->pc = 0x1ab80cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1ab810:
    // 0x1ab810: 0x871021  addu        $v0, $a0, $a3
    ctx->pc = 0x1ab810u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1ab814:
    // 0x1ab814: 0xad001b44  sw          $zero, 0x1B44($t0)
    ctx->pc = 0x1ab814u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 6980), GPR_U32(ctx, 0));
label_1ab818:
    // 0x1ab818: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1ab818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1ab81c:
    // 0x1ab81c: 0xac401b94  sw          $zero, 0x1B94($v0)
    ctx->pc = 0x1ab81cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7060), GPR_U32(ctx, 0));
label_1ab820:
    // 0x1ab820: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1ab820u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_1ab824:
    // 0x1ab824: 0xac401b98  sw          $zero, 0x1B98($v0)
    ctx->pc = 0x1ab824u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7064), GPR_U32(ctx, 0));
label_1ab828:
    // 0x1ab828: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x1ab828u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_1ab82c:
    // 0x1ab82c: 0xad001c34  sw          $zero, 0x1C34($t0)
    ctx->pc = 0x1ab82cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7220), GPR_U32(ctx, 0));
label_1ab830:
    // 0x1ab830: 0x28a20014  slti        $v0, $a1, 0x14
    ctx->pc = 0x1ab830u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)20) ? 1 : 0);
label_1ab834:
    // 0x1ab834: 0xad031c84  sw          $v1, 0x1C84($t0)
    ctx->pc = 0x1ab834u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7300), GPR_U32(ctx, 3));
label_1ab838:
    // 0x1ab838: 0xad001cd4  sw          $zero, 0x1CD4($t0)
    ctx->pc = 0x1ab838u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7380), GPR_U32(ctx, 0));
label_1ab83c:
    // 0x1ab83c: 0xad001d24  sw          $zero, 0x1D24($t0)
    ctx->pc = 0x1ab83cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7460), GPR_U32(ctx, 0));
label_1ab840:
    // 0x1ab840: 0xad001d74  sw          $zero, 0x1D74($t0)
    ctx->pc = 0x1ab840u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7540), GPR_U32(ctx, 0));
label_1ab844:
    // 0x1ab844: 0xad001dc4  sw          $zero, 0x1DC4($t0)
    ctx->pc = 0x1ab844u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7620), GPR_U32(ctx, 0));
label_1ab848:
    // 0x1ab848: 0xad001e14  sw          $zero, 0x1E14($t0)
    ctx->pc = 0x1ab848u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7700), GPR_U32(ctx, 0));
label_1ab84c:
    // 0x1ab84c: 0xad031e64  sw          $v1, 0x1E64($t0)
    ctx->pc = 0x1ab84cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7780), GPR_U32(ctx, 3));
label_1ab850:
    // 0x1ab850: 0xad001eb4  sw          $zero, 0x1EB4($t0)
    ctx->pc = 0x1ab850u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7860), GPR_U32(ctx, 0));
label_1ab854:
    // 0x1ab854: 0xad001f04  sw          $zero, 0x1F04($t0)
    ctx->pc = 0x1ab854u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 7940), GPR_U32(ctx, 0));
label_1ab858:
    // 0x1ab858: 0xad001f54  sw          $zero, 0x1F54($t0)
    ctx->pc = 0x1ab858u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8020), GPR_U32(ctx, 0));
label_1ab85c:
    // 0x1ab85c: 0xad031fa4  sw          $v1, 0x1FA4($t0)
    ctx->pc = 0x1ab85cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8100), GPR_U32(ctx, 3));
label_1ab860:
    // 0x1ab860: 0xad031ff4  sw          $v1, 0x1FF4($t0)
    ctx->pc = 0x1ab860u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8180), GPR_U32(ctx, 3));
label_1ab864:
    // 0x1ab864: 0xad002044  sw          $zero, 0x2044($t0)
    ctx->pc = 0x1ab864u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8260), GPR_U32(ctx, 0));
label_1ab868:
    // 0x1ab868: 0xad002094  sw          $zero, 0x2094($t0)
    ctx->pc = 0x1ab868u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8340), GPR_U32(ctx, 0));
label_1ab86c:
    // 0x1ab86c: 0xad0020e4  sw          $zero, 0x20E4($t0)
    ctx->pc = 0x1ab86cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8420), GPR_U32(ctx, 0));
label_1ab870:
    // 0x1ab870: 0xad002134  sw          $zero, 0x2134($t0)
    ctx->pc = 0x1ab870u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8500), GPR_U32(ctx, 0));
label_1ab874:
    // 0x1ab874: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_1ab878:
    if (ctx->pc == 0x1AB878u) {
        ctx->pc = 0x1AB878u;
            // 0x1ab878: 0xad002184  sw          $zero, 0x2184($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8580), GPR_U32(ctx, 0));
        ctx->pc = 0x1AB87Cu;
        goto label_1ab87c;
    }
    ctx->pc = 0x1AB874u;
    {
        const bool branch_taken_0x1ab874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AB878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB874u;
            // 0x1ab878: 0xad002184  sw          $zero, 0x2184($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 8580), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab874) {
            ctx->pc = 0x1AB80Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ab80c;
        }
    }
    ctx->pc = 0x1AB87Cu;
label_1ab87c:
    // 0x1ab87c: 0xc054bb4  jal         func_152ED0
label_1ab880:
    if (ctx->pc == 0x1AB880u) {
        ctx->pc = 0x1AB880u;
            // 0x1ab880: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AB884u;
        goto label_1ab884;
    }
    ctx->pc = 0x1AB87Cu;
    SET_GPR_U32(ctx, 31, 0x1AB884u);
    ctx->pc = 0x1AB880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB87Cu;
            // 0x1ab880: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152ED0u;
    if (runtime->hasFunction(0x152ED0u)) {
        auto targetFn = runtime->lookupFunction(0x152ED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB884u; }
        if (ctx->pc != 0x1AB884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset__6ClsMesFi_0x152ed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB884u; }
        if (ctx->pc != 0x1AB884u) { return; }
    }
    ctx->pc = 0x1AB884u;
label_1ab884:
    // 0x1ab884: 0x2402009a  addiu       $v0, $zero, 0x9A
    ctx->pc = 0x1ab884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
label_1ab888:
    // 0x1ab888: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab888u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab88c:
    // 0x1ab88c: 0xc0b61d8  jal         func_2D8760
label_1ab890:
    if (ctx->pc == 0x1AB890u) {
        ctx->pc = 0x1AB890u;
            // 0x1ab890: 0xac22e18c  sw          $v0, -0x1E74($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294959500), GPR_U32(ctx, 2));
        ctx->pc = 0x1AB894u;
        goto label_1ab894;
    }
    ctx->pc = 0x1AB88Cu;
    SET_GPR_U32(ctx, 31, 0x1AB894u);
    ctx->pc = 0x1AB890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB88Cu;
            // 0x1ab890: 0xac22e18c  sw          $v0, -0x1E74($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294959500), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8760u;
    if (runtime->hasFunction(0x2D8760u)) {
        auto targetFn = runtime->lookupFunction(0x2D8760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB894u; }
        if (ctx->pc != 0x1AB894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetGaijiImgPtr__Fv_0x2d8760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB894u; }
        if (ctx->pc != 0x1AB894u) { return; }
    }
    ctx->pc = 0x1AB894u;
label_1ab894:
    // 0x1ab894: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ab894u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ab898:
    // 0x1ab898: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ab898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ab89c:
    // 0x1ab89c: 0x2406009a  addiu       $a2, $zero, 0x9A
    ctx->pc = 0x1ab89cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
label_1ab8a0:
    // 0x1ab8a0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ab8a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab8a4:
    // 0x1ab8a4: 0xc04b6a4  jal         func_12DA90
label_1ab8a8:
    if (ctx->pc == 0x1AB8A8u) {
        ctx->pc = 0x1AB8A8u;
            // 0x1ab8a8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AB8ACu;
        goto label_1ab8ac;
    }
    ctx->pc = 0x1AB8A4u;
    SET_GPR_U32(ctx, 31, 0x1AB8ACu);
    ctx->pc = 0x1AB8A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB8A4u;
            // 0x1ab8a8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB8ACu; }
        if (ctx->pc != 0x1AB8ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB8ACu; }
        if (ctx->pc != 0x1AB8ACu) { return; }
    }
    ctx->pc = 0x1AB8ACu;
label_1ab8ac:
    // 0x1ab8ac: 0xc0b61f8  jal         func_2D87E0
label_1ab8b0:
    if (ctx->pc == 0x1AB8B0u) {
        ctx->pc = 0x1AB8B4u;
        goto label_1ab8b4;
    }
    ctx->pc = 0x1AB8ACu;
    SET_GPR_U32(ctx, 31, 0x1AB8B4u);
    ctx->pc = 0x2D87E0u;
    if (runtime->hasFunction(0x2D87E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D87E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB8B4u; }
        if (ctx->pc != 0x1AB8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFontTex2ImgPtr__Fv_0x2d87e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB8B4u; }
        if (ctx->pc != 0x1AB8B4u) { return; }
    }
    ctx->pc = 0x1AB8B4u;
label_1ab8b4:
    // 0x1ab8b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ab8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1ab8b8:
    // 0x1ab8b8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ab8b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ab8bc:
    // 0x1ab8bc: 0x2406009a  addiu       $a2, $zero, 0x9A
    ctx->pc = 0x1ab8bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
label_1ab8c0:
    // 0x1ab8c0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1ab8c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab8c4:
    // 0x1ab8c4: 0xc04b6a4  jal         func_12DA90
label_1ab8c8:
    if (ctx->pc == 0x1AB8C8u) {
        ctx->pc = 0x1AB8C8u;
            // 0x1ab8c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1AB8CCu;
        goto label_1ab8cc;
    }
    ctx->pc = 0x1AB8C4u;
    SET_GPR_U32(ctx, 31, 0x1AB8CCu);
    ctx->pc = 0x1AB8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB8C4u;
            // 0x1ab8c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB8CCu; }
        if (ctx->pc != 0x1AB8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB8CCu; }
        if (ctx->pc != 0x1AB8CCu) { return; }
    }
    ctx->pc = 0x1AB8CCu;
label_1ab8cc:
    // 0x1ab8cc: 0xc0c63e4  jal         func_318F90
label_1ab8d0:
    if (ctx->pc == 0x1AB8D0u) {
        ctx->pc = 0x1AB8D0u;
            // 0x1ab8d0: 0x2404009a  addiu       $a0, $zero, 0x9A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
        ctx->pc = 0x1AB8D4u;
        goto label_1ab8d4;
    }
    ctx->pc = 0x1AB8CCu;
    SET_GPR_U32(ctx, 31, 0x1AB8D4u);
    ctx->pc = 0x1AB8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB8CCu;
            // 0x1ab8d0: 0x2404009a  addiu       $a0, $zero, 0x9A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318F90u;
    if (runtime->hasFunction(0x318F90u)) {
        auto targetFn = runtime->lookupFunction(0x318F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB8D4u; }
        if (ctx->pc != 0x1AB8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateHelpMes__Fi_0x318f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB8D4u; }
        if (ctx->pc != 0x1AB8D4u) { return; }
    }
    ctx->pc = 0x1AB8D4u;
label_1ab8d4:
    // 0x1ab8d4: 0xc0953f8  jal         func_254FE0
label_1ab8d8:
    if (ctx->pc == 0x1AB8D8u) {
        ctx->pc = 0x1AB8D8u;
            // 0x1ab8d8: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->pc = 0x1AB8DCu;
        goto label_1ab8dc;
    }
    ctx->pc = 0x1AB8D4u;
    SET_GPR_U32(ctx, 31, 0x1AB8DCu);
    ctx->pc = 0x1AB8D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB8D4u;
            // 0x1ab8d8: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x254FE0u;
    if (runtime->hasFunction(0x254FE0u)) {
        auto targetFn = runtime->lookupFunction(0x254FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB8DCu; }
        if (ctx->pc != 0x1AB8DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEvent__FP6CScene_0x254fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB8DCu; }
        if (ctx->pc != 0x1AB8DCu) { return; }
    }
    ctx->pc = 0x1AB8DCu;
label_1ab8dc:
    // 0x1ab8dc: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x1ab8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
label_1ab8e0:
    // 0x1ab8e0: 0x240400d5  addiu       $a0, $zero, 0xD5
    ctx->pc = 0x1ab8e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 213));
label_1ab8e4:
    // 0x1ab8e4: 0xc09fc7c  jal         func_27F1F0
label_1ab8e8:
    if (ctx->pc == 0x1AB8E8u) {
        ctx->pc = 0x1AB8E8u;
            // 0x1ab8e8: 0x24a5e990  addiu       $a1, $a1, -0x1670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961552));
        ctx->pc = 0x1AB8ECu;
        goto label_1ab8ec;
    }
    ctx->pc = 0x1AB8E4u;
    SET_GPR_U32(ctx, 31, 0x1AB8ECu);
    ctx->pc = 0x1AB8E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB8E4u;
            // 0x1ab8e8: 0x24a5e990  addiu       $a1, $a1, -0x1670 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F1F0u;
    if (runtime->hasFunction(0x27F1F0u)) {
        auto targetFn = runtime->lookupFunction(0x27F1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB8ECu; }
        if (ctx->pc != 0x1AB8ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEventEdit__FiP9mgCMemory_0x27f1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB8ECu; }
        if (ctx->pc != 0x1AB8ECu) { return; }
    }
    ctx->pc = 0x1AB8ECu;
label_1ab8ec:
    // 0x1ab8ec: 0xc098930  jal         func_2624C0
label_1ab8f0:
    if (ctx->pc == 0x1AB8F0u) {
        ctx->pc = 0x1AB8F4u;
        goto label_1ab8f4;
    }
    ctx->pc = 0x1AB8ECu;
    SET_GPR_U32(ctx, 31, 0x1AB8F4u);
    ctx->pc = 0x2624C0u;
    if (runtime->hasFunction(0x2624C0u)) {
        auto targetFn = runtime->lookupFunction(0x2624C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB8F4u; }
        if (ctx->pc != 0x1AB8F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EdEventLoopInit__Fv_0x2624c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB8F4u; }
        if (ctx->pc != 0x1AB8F4u) { return; }
    }
    ctx->pc = 0x1AB8F4u;
label_1ab8f4:
    // 0x1ab8f4: 0xc06905c  jal         func_1A4170
label_1ab8f8:
    if (ctx->pc == 0x1AB8F8u) {
        ctx->pc = 0x1AB8F8u;
            // 0x1ab8f8: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->pc = 0x1AB8FCu;
        goto label_1ab8fc;
    }
    ctx->pc = 0x1AB8F4u;
    SET_GPR_U32(ctx, 31, 0x1AB8FCu);
    ctx->pc = 0x1AB8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB8F4u;
            // 0x1ab8f8: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4170u;
    if (runtime->hasFunction(0x1A4170u)) {
        auto targetFn = runtime->lookupFunction(0x1A4170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB8FCu; }
        if (ctx->pc != 0x1AB8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditControlInit__FP6CScene_0x1a4170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB8FCu; }
        if (ctx->pc != 0x1AB8FCu) { return; }
    }
    ctx->pc = 0x1AB8FCu;
label_1ab8fc:
    // 0x1ab8fc: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1ab8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ab900:
    // 0x1ab900: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x1ab900u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_1ab904:
    // 0x1ab904: 0xc05f5fc  jal         func_17D7F0
label_1ab908:
    if (ctx->pc == 0x1AB908u) {
        ctx->pc = 0x1AB908u;
            // 0x1ab908: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->pc = 0x1AB90Cu;
        goto label_1ab90c;
    }
    ctx->pc = 0x1AB904u;
    SET_GPR_U32(ctx, 31, 0x1AB90Cu);
    ctx->pc = 0x1AB908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB904u;
            // 0x1ab908: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D7F0u;
    if (runtime->hasFunction(0x17D7F0u)) {
        auto targetFn = runtime->lookupFunction(0x17D7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB90Cu; }
        if (ctx->pc != 0x1AB90Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeIn__10CFadeInOutFi_0x17d7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB90Cu; }
        if (ctx->pc != 0x1AB90Cu) { return; }
    }
    ctx->pc = 0x1AB90Cu;
label_1ab90c:
    // 0x1ab90c: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1ab90cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1ab910:
    // 0x1ab910: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1ab910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ab914:
    // 0x1ab914: 0xac432f74  sw          $v1, 0x2F74($v0)
    ctx->pc = 0x1ab914u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12148), GPR_U32(ctx, 3));
label_1ab918:
    // 0x1ab918: 0x8fa400c8  lw          $a0, 0xC8($sp)
    ctx->pc = 0x1ab918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
label_1ab91c:
    // 0x1ab91c: 0x1c800002  bgtz        $a0, . + 4 + (0x2 << 2)
label_1ab920:
    if (ctx->pc == 0x1AB920u) {
        ctx->pc = 0x1AB924u;
        goto label_1ab924;
    }
    ctx->pc = 0x1AB91Cu;
    {
        const bool branch_taken_0x1ab91c = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x1ab91c) {
            ctx->pc = 0x1AB928u;
            goto label_1ab928;
        }
    }
    ctx->pc = 0x1AB924u;
label_1ab924:
    // 0x1ab924: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x1ab924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1ab928:
    // 0x1ab928: 0x18800006  blez        $a0, . + 4 + (0x6 << 2)
label_1ab92c:
    if (ctx->pc == 0x1AB92Cu) {
        ctx->pc = 0x1AB930u;
        goto label_1ab930;
    }
    ctx->pc = 0x1AB928u;
    {
        const bool branch_taken_0x1ab928 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x1ab928) {
            ctx->pc = 0x1AB944u;
            goto label_1ab944;
        }
    }
    ctx->pc = 0x1AB930u;
label_1ab930:
    // 0x1ab930: 0xc09542c  jal         func_2550B0
label_1ab934:
    if (ctx->pc == 0x1AB934u) {
        ctx->pc = 0x1AB934u;
            // 0x1ab934: 0x8f858cb0  lw          $a1, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->pc = 0x1AB938u;
        goto label_1ab938;
    }
    ctx->pc = 0x1AB930u;
    SET_GPR_U32(ctx, 31, 0x1AB938u);
    ctx->pc = 0x1AB934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB930u;
            // 0x1ab934: 0x8f858cb0  lw          $a1, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2550B0u;
    if (runtime->hasFunction(0x2550B0u)) {
        auto targetFn = runtime->lookupFunction(0x2550B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB938u; }
        if (ctx->pc != 0x1AB938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        RunEvent__FiP6CScene_0x2550b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB938u; }
        if (ctx->pc != 0x1AB938u) { return; }
    }
    ctx->pc = 0x1AB938u;
label_1ab938:
    // 0x1ab938: 0x18400002  blez        $v0, . + 4 + (0x2 << 2)
label_1ab93c:
    if (ctx->pc == 0x1AB93Cu) {
        ctx->pc = 0x1AB93Cu;
            // 0x1ab93c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1AB940u;
        goto label_1ab940;
    }
    ctx->pc = 0x1AB938u;
    {
        const bool branch_taken_0x1ab938 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1AB93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB938u;
            // 0x1ab93c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ab938) {
            ctx->pc = 0x1AB944u;
            goto label_1ab944;
        }
    }
    ctx->pc = 0x1AB940u;
label_1ab940:
    // 0x1ab940: 0xaf828c80  sw          $v0, -0x7380($gp)
    ctx->pc = 0x1ab940u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294937728), GPR_U32(ctx, 2));
label_1ab944:
    // 0x1ab944: 0x8f8280f0  lw          $v0, -0x7F10($gp)
    ctx->pc = 0x1ab944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934768)));
label_1ab948:
    // 0x1ab948: 0x3c0601ea  lui         $a2, 0x1EA
    ctx->pc = 0x1ab948u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)490 << 16));
label_1ab94c:
    // 0x1ab94c: 0x24c6e990  addiu       $a2, $a2, -0x1670
    ctx->pc = 0x1ab94cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961552));
label_1ab950:
    // 0x1ab950: 0x24050086  addiu       $a1, $zero, 0x86
    ctx->pc = 0x1ab950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 134));
label_1ab954:
    // 0x1ab954: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x1ab954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ab958:
    // 0x1ab958: 0x2403009a  addiu       $v1, $zero, 0x9A
    ctx->pc = 0x1ab958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
label_1ab95c:
    // 0x1ab95c: 0xac460000  sw          $a2, 0x0($v0)
    ctx->pc = 0x1ab95cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 6));
label_1ab960:
    // 0x1ab960: 0x8f8280f0  lw          $v0, -0x7F10($gp)
    ctx->pc = 0x1ab960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934768)));
label_1ab964:
    // 0x1ab964: 0xac45002c  sw          $a1, 0x2C($v0)
    ctx->pc = 0x1ab964u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 5));
label_1ab968:
    // 0x1ab968: 0x8f8280f0  lw          $v0, -0x7F10($gp)
    ctx->pc = 0x1ab968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934768)));
label_1ab96c:
    // 0x1ab96c: 0xac440030  sw          $a0, 0x30($v0)
    ctx->pc = 0x1ab96cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 4));
label_1ab970:
    // 0x1ab970: 0x8f8280f0  lw          $v0, -0x7F10($gp)
    ctx->pc = 0x1ab970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934768)));
label_1ab974:
    // 0x1ab974: 0xac430034  sw          $v1, 0x34($v0)
    ctx->pc = 0x1ab974u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 3));
label_1ab978:
    // 0x1ab978: 0x8f838c6c  lw          $v1, -0x7394($gp)
    ctx->pc = 0x1ab978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937708)));
label_1ab97c:
    // 0x1ab97c: 0x8f8280f0  lw          $v0, -0x7F10($gp)
    ctx->pc = 0x1ab97cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934768)));
label_1ab980:
    // 0x1ab980: 0xc06a6c4  jal         func_1A9B10
label_1ab984:
    if (ctx->pc == 0x1AB984u) {
        ctx->pc = 0x1AB984u;
            // 0x1ab984: 0xac430038  sw          $v1, 0x38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
        ctx->pc = 0x1AB988u;
        goto label_1ab988;
    }
    ctx->pc = 0x1AB980u;
    SET_GPR_U32(ctx, 31, 0x1AB988u);
    ctx->pc = 0x1AB984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB980u;
            // 0x1ab984: 0xac430038  sw          $v1, 0x38($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A9B10u;
    if (runtime->hasFunction(0x1A9B10u)) {
        auto targetFn = runtime->lookupFunction(0x1A9B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB988u; }
        if (ctx->pc != 0x1AB988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserData__Fv_0x1a9b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB988u; }
        if (ctx->pc != 0x1AB988u) { return; }
    }
    ctx->pc = 0x1AB988u;
label_1ab988:
    // 0x1ab988: 0x8f8680f0  lw          $a2, -0x7F10($gp)
    ctx->pc = 0x1ab988u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934768)));
label_1ab98c:
    // 0x1ab98c: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x1ab98cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
label_1ab990:
    // 0x1ab990: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1ab990u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1ab994:
    // 0x1ab994: 0x24a5ea50  addiu       $a1, $a1, -0x15B0
    ctx->pc = 0x1ab994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961744));
label_1ab998:
    // 0x1ab998: 0x2484ec00  addiu       $a0, $a0, -0x1400
    ctx->pc = 0x1ab998u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962176));
label_1ab99c:
    // 0x1ab99c: 0x24030046  addiu       $v1, $zero, 0x46
    ctx->pc = 0x1ab99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
label_1ab9a0:
    // 0x1ab9a0: 0xacc2001c  sw          $v0, 0x1C($a2)
    ctx->pc = 0x1ab9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 28), GPR_U32(ctx, 2));
label_1ab9a4:
    // 0x1ab9a4: 0x8f8280f0  lw          $v0, -0x7F10($gp)
    ctx->pc = 0x1ab9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934768)));
label_1ab9a8:
    // 0x1ab9a8: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1ab9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_1ab9ac:
    // 0x1ab9ac: 0x8f8280f0  lw          $v0, -0x7F10($gp)
    ctx->pc = 0x1ab9acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934768)));
label_1ab9b0:
    // 0x1ab9b0: 0xac440008  sw          $a0, 0x8($v0)
    ctx->pc = 0x1ab9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 4));
label_1ab9b4:
    // 0x1ab9b4: 0x8f8280f0  lw          $v0, -0x7F10($gp)
    ctx->pc = 0x1ab9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934768)));
label_1ab9b8:
    // 0x1ab9b8: 0xa443000c  sh          $v1, 0xC($v0)
    ctx->pc = 0x1ab9b8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 12), (uint16_t)GPR_U32(ctx, 3));
label_1ab9bc:
    // 0x1ab9bc: 0x8f838cc0  lw          $v1, -0x7340($gp)
    ctx->pc = 0x1ab9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937792)));
label_1ab9c0:
    // 0x1ab9c0: 0x8f8280f0  lw          $v0, -0x7F10($gp)
    ctx->pc = 0x1ab9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934768)));
label_1ab9c4:
    // 0x1ab9c4: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x1ab9c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
label_1ab9c8:
    // 0x1ab9c8: 0x8f838cc4  lw          $v1, -0x733C($gp)
    ctx->pc = 0x1ab9c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937796)));
label_1ab9cc:
    // 0x1ab9cc: 0x8f8280f0  lw          $v0, -0x7F10($gp)
    ctx->pc = 0x1ab9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934768)));
label_1ab9d0:
    // 0x1ab9d0: 0xc069e28  jal         func_1A78A0
label_1ab9d4:
    if (ctx->pc == 0x1AB9D4u) {
        ctx->pc = 0x1AB9D4u;
            // 0x1ab9d4: 0xac430024  sw          $v1, 0x24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
        ctx->pc = 0x1AB9D8u;
        goto label_1ab9d8;
    }
    ctx->pc = 0x1AB9D0u;
    SET_GPR_U32(ctx, 31, 0x1AB9D8u);
    ctx->pc = 0x1AB9D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB9D0u;
            // 0x1ab9d4: 0xac430024  sw          $v1, 0x24($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A78A0u;
    if (runtime->hasFunction(0x1A78A0u)) {
        auto targetFn = runtime->lookupFunction(0x1A78A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB9D8u; }
        if (ctx->pc != 0x1AB9D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EditDebugInit__Fv_0x1a78a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB9D8u; }
        if (ctx->pc != 0x1AB9D8u) { return; }
    }
    ctx->pc = 0x1AB9D8u;
label_1ab9d8:
    // 0x1ab9d8: 0xc06a104  jal         func_1A8410
label_1ab9dc:
    if (ctx->pc == 0x1AB9DCu) {
        ctx->pc = 0x1AB9E0u;
        goto label_1ab9e0;
    }
    ctx->pc = 0x1AB9D8u;
    SET_GPR_U32(ctx, 31, 0x1AB9E0u);
    ctx->pc = 0x1A8410u;
    if (runtime->hasFunction(0x1A8410u)) {
        auto targetFn = runtime->lookupFunction(0x1A8410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB9E0u; }
        if (ctx->pc != 0x1AB9E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitLightingEdit__Fv_0x1a8410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB9E0u; }
        if (ctx->pc != 0x1AB9E0u) { return; }
    }
    ctx->pc = 0x1AB9E0u;
label_1ab9e0:
    // 0x1ab9e0: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1ab9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1ab9e4:
    // 0x1ab9e4: 0xc0bbe6c  jal         func_2EF9B0
label_1ab9e8:
    if (ctx->pc == 0x1AB9E8u) {
        ctx->pc = 0x1AB9E8u;
            // 0x1ab9e8: 0x2484ede0  addiu       $a0, $a0, -0x1220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962656));
        ctx->pc = 0x1AB9ECu;
        goto label_1ab9ec;
    }
    ctx->pc = 0x1AB9E4u;
    SET_GPR_U32(ctx, 31, 0x1AB9ECu);
    ctx->pc = 0x1AB9E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB9E4u;
            // 0x1ab9e8: 0x2484ede0  addiu       $a0, $a0, -0x1220 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EF9B0u;
    if (runtime->hasFunction(0x2EF9B0u)) {
        auto targetFn = runtime->lookupFunction(0x2EF9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB9ECu; }
        if (ctx->pc != 0x1AB9ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Reset__10CEditEventFv_0x2ef9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB9ECu; }
        if (ctx->pc != 0x1AB9ECu) { return; }
    }
    ctx->pc = 0x1AB9ECu;
label_1ab9ec:
    // 0x1ab9ec: 0xc0c0f9c  jal         func_303E70
label_1ab9f0:
    if (ctx->pc == 0x1AB9F0u) {
        ctx->pc = 0x1AB9F0u;
            // 0x1ab9f0: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->pc = 0x1AB9F4u;
        goto label_1ab9f4;
    }
    ctx->pc = 0x1AB9ECu;
    SET_GPR_U32(ctx, 31, 0x1AB9F4u);
    ctx->pc = 0x1AB9F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1AB9ECu;
            // 0x1ab9f0: 0x8f848cb0  lw          $a0, -0x7350($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303E70u;
    if (runtime->hasFunction(0x303E70u)) {
        auto targetFn = runtime->lookupFunction(0x303E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB9F4u; }
        if (ctx->pc != 0x1AB9F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSubGame__FP6CScene_0x303e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1AB9F4u; }
        if (ctx->pc != 0x1AB9F4u) { return; }
    }
    ctx->pc = 0x1AB9F4u;
label_1ab9f4:
    // 0x1ab9f4: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1ab9f4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1ab9f8:
    // 0x1ab9f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ab9f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ab9fc:
    // 0x1ab9fc: 0xac34ef50  sw          $s4, -0x10B0($at)
    ctx->pc = 0x1ab9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963024), GPR_U32(ctx, 20));
label_1aba00:
    // 0x1aba00: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1aba00u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aba04:
    // 0x1aba04: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1aba04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1aba08:
    // 0x1aba08: 0x2404009a  addiu       $a0, $zero, 0x9A
    ctx->pc = 0x1aba08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
label_1aba0c:
    // 0x1aba0c: 0xac22ef40  sw          $v0, -0x10C0($at)
    ctx->pc = 0x1aba0cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963008), GPR_U32(ctx, 2));
label_1aba10:
    // 0x1aba10: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1aba10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1aba14:
    // 0x1aba14: 0x240200b8  addiu       $v0, $zero, 0xB8
    ctx->pc = 0x1aba14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
label_1aba18:
    // 0x1aba18: 0xac34ef54  sw          $s4, -0x10AC($at)
    ctx->pc = 0x1aba18u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963028), GPR_U32(ctx, 20));
label_1aba1c:
    // 0x1aba1c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1aba1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1aba20:
    // 0x1aba20: 0xac22ef34  sw          $v0, -0x10CC($at)
    ctx->pc = 0x1aba20u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294962996), GPR_U32(ctx, 2));
label_1aba24:
    // 0x1aba24: 0x24020015  addiu       $v0, $zero, 0x15
    ctx->pc = 0x1aba24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_1aba28:
    // 0x1aba28: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1aba28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1aba2c:
    // 0x1aba2c: 0xac22ef38  sw          $v0, -0x10C8($at)
    ctx->pc = 0x1aba2cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963000), GPR_U32(ctx, 2));
label_1aba30:
    // 0x1aba30: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1aba30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1aba34:
    // 0x1aba34: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1aba34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1aba38:
    // 0x1aba38: 0xac23ef5c  sw          $v1, -0x10A4($at)
    ctx->pc = 0x1aba38u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963036), GPR_U32(ctx, 3));
label_1aba3c:
    // 0x1aba3c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1aba3cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1aba40:
    // 0x1aba40: 0xac22ef68  sw          $v0, -0x1098($at)
    ctx->pc = 0x1aba40u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963048), GPR_U32(ctx, 2));
label_1aba44:
    // 0x1aba44: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1aba44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1aba48:
    // 0x1aba48: 0x8f828cb0  lw          $v0, -0x7350($gp)
    ctx->pc = 0x1aba48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937776)));
label_1aba4c:
    // 0x1aba4c: 0xac24ef3c  sw          $a0, -0x10C4($at)
    ctx->pc = 0x1aba4cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963004), GPR_U32(ctx, 4));
label_1aba50:
    // 0x1aba50: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1aba50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1aba54:
    // 0x1aba54: 0xac20ef44  sw          $zero, -0x10BC($at)
    ctx->pc = 0x1aba54u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963012), GPR_U32(ctx, 0));
label_1aba58:
    // 0x1aba58: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1aba58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1aba5c:
    // 0x1aba5c: 0xac20ef48  sw          $zero, -0x10B8($at)
    ctx->pc = 0x1aba5cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963016), GPR_U32(ctx, 0));
label_1aba60:
    // 0x1aba60: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1aba60u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1aba64:
    // 0x1aba64: 0xac20ef4c  sw          $zero, -0x10B4($at)
    ctx->pc = 0x1aba64u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963020), GPR_U32(ctx, 0));
label_1aba68:
    // 0x1aba68: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1aba68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1aba6c:
    // 0x1aba6c: 0xac20ef58  sw          $zero, -0x10A8($at)
    ctx->pc = 0x1aba6cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294963032), GPR_U32(ctx, 0));
label_1aba70:
    // 0x1aba70: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1aba70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1aba74:
    // 0x1aba74: 0xc064c44  jal         func_193110
label_1aba78:
    if (ctx->pc == 0x1ABA78u) {
        ctx->pc = 0x1ABA78u;
            // 0x1aba78: 0xac22ef30  sw          $v0, -0x10D0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294962992), GPR_U32(ctx, 2));
        ctx->pc = 0x1ABA7Cu;
        goto label_1aba7c;
    }
    ctx->pc = 0x1ABA74u;
    SET_GPR_U32(ctx, 31, 0x1ABA7Cu);
    ctx->pc = 0x1ABA78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABA74u;
            // 0x1aba78: 0xac22ef30  sw          $v0, -0x10D0($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294962992), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x193110u;
    if (runtime->hasFunction(0x193110u)) {
        auto targetFn = runtime->lookupFunction(0x193110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABA7Cu; }
        if (ctx->pc != 0x1ABA7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitPauseMenu__Fi_0x193110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABA7Cu; }
        if (ctx->pc != 0x1ABA7Cu) { return; }
    }
    ctx->pc = 0x1ABA7Cu;
label_1aba7c:
    // 0x1aba7c: 0xc0c2698  jal         func_309A60
label_1aba80:
    if (ctx->pc == 0x1ABA80u) {
        ctx->pc = 0x1ABA84u;
        goto label_1aba84;
    }
    ctx->pc = 0x1ABA7Cu;
    SET_GPR_U32(ctx, 31, 0x1ABA84u);
    ctx->pc = 0x309A60u;
    if (runtime->hasFunction(0x309A60u)) {
        auto targetFn = runtime->lookupFunction(0x309A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABA84u; }
        if (ctx->pc != 0x1ABA84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowLoadingBarSteEnd__Fv_0x309a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABA84u; }
        if (ctx->pc != 0x1ABA84u) { return; }
    }
    ctx->pc = 0x1ABA84u;
label_1aba84:
    // 0x1aba84: 0xc0c26a0  jal         func_309A80
label_1aba88:
    if (ctx->pc == 0x1ABA88u) {
        ctx->pc = 0x1ABA8Cu;
        goto label_1aba8c;
    }
    ctx->pc = 0x1ABA84u;
    SET_GPR_U32(ctx, 31, 0x1ABA8Cu);
    ctx->pc = 0x309A80u;
    if (runtime->hasFunction(0x309A80u)) {
        auto targetFn = runtime->lookupFunction(0x309A80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABA8Cu; }
        if (ctx->pc != 0x1ABA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteNowLoading__Fv_0x309a80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ABA8Cu; }
        if (ctx->pc != 0x1ABA8Cu) { return; }
    }
    ctx->pc = 0x1ABA8Cu;
label_1aba8c:
    // 0x1aba8c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1aba8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1aba90:
    // 0x1aba90: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x1aba90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_1aba94:
    // 0x1aba94: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x1aba94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1aba98:
    // 0x1aba98: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x1aba98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1aba9c:
    // 0x1aba9c: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x1aba9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1abaa0:
    // 0x1abaa0: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x1abaa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1abaa4:
    // 0x1abaa4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x1abaa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1abaa8:
    // 0x1abaa8: 0x3e00008  jr          $ra
label_1abaac:
    if (ctx->pc == 0x1ABAACu) {
        ctx->pc = 0x1ABAACu;
            // 0x1abaac: 0x27bd0320  addiu       $sp, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->pc = 0x1ABAB0u;
        goto label_fallthrough_0x1abaa8;
    }
    ctx->pc = 0x1ABAA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ABAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ABAA8u;
            // 0x1abaac: 0x27bd0320  addiu       $sp, $sp, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1abaa8:
    ctx->pc = 0x1ABAB0u;
}
