#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: StepDataLoading__Fv
// Address: 0x2fd0e0 - 0x2fdc20
void StepDataLoading__Fv_0x2fd0e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("StepDataLoading__Fv_0x2fd0e0");
#endif

    switch (ctx->pc) {
        case 0x2fd0e0u: goto label_2fd0e0;
        case 0x2fd0e4u: goto label_2fd0e4;
        case 0x2fd0e8u: goto label_2fd0e8;
        case 0x2fd0ecu: goto label_2fd0ec;
        case 0x2fd0f0u: goto label_2fd0f0;
        case 0x2fd0f4u: goto label_2fd0f4;
        case 0x2fd0f8u: goto label_2fd0f8;
        case 0x2fd0fcu: goto label_2fd0fc;
        case 0x2fd100u: goto label_2fd100;
        case 0x2fd104u: goto label_2fd104;
        case 0x2fd108u: goto label_2fd108;
        case 0x2fd10cu: goto label_2fd10c;
        case 0x2fd110u: goto label_2fd110;
        case 0x2fd114u: goto label_2fd114;
        case 0x2fd118u: goto label_2fd118;
        case 0x2fd11cu: goto label_2fd11c;
        case 0x2fd120u: goto label_2fd120;
        case 0x2fd124u: goto label_2fd124;
        case 0x2fd128u: goto label_2fd128;
        case 0x2fd12cu: goto label_2fd12c;
        case 0x2fd130u: goto label_2fd130;
        case 0x2fd134u: goto label_2fd134;
        case 0x2fd138u: goto label_2fd138;
        case 0x2fd13cu: goto label_2fd13c;
        case 0x2fd140u: goto label_2fd140;
        case 0x2fd144u: goto label_2fd144;
        case 0x2fd148u: goto label_2fd148;
        case 0x2fd14cu: goto label_2fd14c;
        case 0x2fd150u: goto label_2fd150;
        case 0x2fd154u: goto label_2fd154;
        case 0x2fd158u: goto label_2fd158;
        case 0x2fd15cu: goto label_2fd15c;
        case 0x2fd160u: goto label_2fd160;
        case 0x2fd164u: goto label_2fd164;
        case 0x2fd168u: goto label_2fd168;
        case 0x2fd16cu: goto label_2fd16c;
        case 0x2fd170u: goto label_2fd170;
        case 0x2fd174u: goto label_2fd174;
        case 0x2fd178u: goto label_2fd178;
        case 0x2fd17cu: goto label_2fd17c;
        case 0x2fd180u: goto label_2fd180;
        case 0x2fd184u: goto label_2fd184;
        case 0x2fd188u: goto label_2fd188;
        case 0x2fd18cu: goto label_2fd18c;
        case 0x2fd190u: goto label_2fd190;
        case 0x2fd194u: goto label_2fd194;
        case 0x2fd198u: goto label_2fd198;
        case 0x2fd19cu: goto label_2fd19c;
        case 0x2fd1a0u: goto label_2fd1a0;
        case 0x2fd1a4u: goto label_2fd1a4;
        case 0x2fd1a8u: goto label_2fd1a8;
        case 0x2fd1acu: goto label_2fd1ac;
        case 0x2fd1b0u: goto label_2fd1b0;
        case 0x2fd1b4u: goto label_2fd1b4;
        case 0x2fd1b8u: goto label_2fd1b8;
        case 0x2fd1bcu: goto label_2fd1bc;
        case 0x2fd1c0u: goto label_2fd1c0;
        case 0x2fd1c4u: goto label_2fd1c4;
        case 0x2fd1c8u: goto label_2fd1c8;
        case 0x2fd1ccu: goto label_2fd1cc;
        case 0x2fd1d0u: goto label_2fd1d0;
        case 0x2fd1d4u: goto label_2fd1d4;
        case 0x2fd1d8u: goto label_2fd1d8;
        case 0x2fd1dcu: goto label_2fd1dc;
        case 0x2fd1e0u: goto label_2fd1e0;
        case 0x2fd1e4u: goto label_2fd1e4;
        case 0x2fd1e8u: goto label_2fd1e8;
        case 0x2fd1ecu: goto label_2fd1ec;
        case 0x2fd1f0u: goto label_2fd1f0;
        case 0x2fd1f4u: goto label_2fd1f4;
        case 0x2fd1f8u: goto label_2fd1f8;
        case 0x2fd1fcu: goto label_2fd1fc;
        case 0x2fd200u: goto label_2fd200;
        case 0x2fd204u: goto label_2fd204;
        case 0x2fd208u: goto label_2fd208;
        case 0x2fd20cu: goto label_2fd20c;
        case 0x2fd210u: goto label_2fd210;
        case 0x2fd214u: goto label_2fd214;
        case 0x2fd218u: goto label_2fd218;
        case 0x2fd21cu: goto label_2fd21c;
        case 0x2fd220u: goto label_2fd220;
        case 0x2fd224u: goto label_2fd224;
        case 0x2fd228u: goto label_2fd228;
        case 0x2fd22cu: goto label_2fd22c;
        case 0x2fd230u: goto label_2fd230;
        case 0x2fd234u: goto label_2fd234;
        case 0x2fd238u: goto label_2fd238;
        case 0x2fd23cu: goto label_2fd23c;
        case 0x2fd240u: goto label_2fd240;
        case 0x2fd244u: goto label_2fd244;
        case 0x2fd248u: goto label_2fd248;
        case 0x2fd24cu: goto label_2fd24c;
        case 0x2fd250u: goto label_2fd250;
        case 0x2fd254u: goto label_2fd254;
        case 0x2fd258u: goto label_2fd258;
        case 0x2fd25cu: goto label_2fd25c;
        case 0x2fd260u: goto label_2fd260;
        case 0x2fd264u: goto label_2fd264;
        case 0x2fd268u: goto label_2fd268;
        case 0x2fd26cu: goto label_2fd26c;
        case 0x2fd270u: goto label_2fd270;
        case 0x2fd274u: goto label_2fd274;
        case 0x2fd278u: goto label_2fd278;
        case 0x2fd27cu: goto label_2fd27c;
        case 0x2fd280u: goto label_2fd280;
        case 0x2fd284u: goto label_2fd284;
        case 0x2fd288u: goto label_2fd288;
        case 0x2fd28cu: goto label_2fd28c;
        case 0x2fd290u: goto label_2fd290;
        case 0x2fd294u: goto label_2fd294;
        case 0x2fd298u: goto label_2fd298;
        case 0x2fd29cu: goto label_2fd29c;
        case 0x2fd2a0u: goto label_2fd2a0;
        case 0x2fd2a4u: goto label_2fd2a4;
        case 0x2fd2a8u: goto label_2fd2a8;
        case 0x2fd2acu: goto label_2fd2ac;
        case 0x2fd2b0u: goto label_2fd2b0;
        case 0x2fd2b4u: goto label_2fd2b4;
        case 0x2fd2b8u: goto label_2fd2b8;
        case 0x2fd2bcu: goto label_2fd2bc;
        case 0x2fd2c0u: goto label_2fd2c0;
        case 0x2fd2c4u: goto label_2fd2c4;
        case 0x2fd2c8u: goto label_2fd2c8;
        case 0x2fd2ccu: goto label_2fd2cc;
        case 0x2fd2d0u: goto label_2fd2d0;
        case 0x2fd2d4u: goto label_2fd2d4;
        case 0x2fd2d8u: goto label_2fd2d8;
        case 0x2fd2dcu: goto label_2fd2dc;
        case 0x2fd2e0u: goto label_2fd2e0;
        case 0x2fd2e4u: goto label_2fd2e4;
        case 0x2fd2e8u: goto label_2fd2e8;
        case 0x2fd2ecu: goto label_2fd2ec;
        case 0x2fd2f0u: goto label_2fd2f0;
        case 0x2fd2f4u: goto label_2fd2f4;
        case 0x2fd2f8u: goto label_2fd2f8;
        case 0x2fd2fcu: goto label_2fd2fc;
        case 0x2fd300u: goto label_2fd300;
        case 0x2fd304u: goto label_2fd304;
        case 0x2fd308u: goto label_2fd308;
        case 0x2fd30cu: goto label_2fd30c;
        case 0x2fd310u: goto label_2fd310;
        case 0x2fd314u: goto label_2fd314;
        case 0x2fd318u: goto label_2fd318;
        case 0x2fd31cu: goto label_2fd31c;
        case 0x2fd320u: goto label_2fd320;
        case 0x2fd324u: goto label_2fd324;
        case 0x2fd328u: goto label_2fd328;
        case 0x2fd32cu: goto label_2fd32c;
        case 0x2fd330u: goto label_2fd330;
        case 0x2fd334u: goto label_2fd334;
        case 0x2fd338u: goto label_2fd338;
        case 0x2fd33cu: goto label_2fd33c;
        case 0x2fd340u: goto label_2fd340;
        case 0x2fd344u: goto label_2fd344;
        case 0x2fd348u: goto label_2fd348;
        case 0x2fd34cu: goto label_2fd34c;
        case 0x2fd350u: goto label_2fd350;
        case 0x2fd354u: goto label_2fd354;
        case 0x2fd358u: goto label_2fd358;
        case 0x2fd35cu: goto label_2fd35c;
        case 0x2fd360u: goto label_2fd360;
        case 0x2fd364u: goto label_2fd364;
        case 0x2fd368u: goto label_2fd368;
        case 0x2fd36cu: goto label_2fd36c;
        case 0x2fd370u: goto label_2fd370;
        case 0x2fd374u: goto label_2fd374;
        case 0x2fd378u: goto label_2fd378;
        case 0x2fd37cu: goto label_2fd37c;
        case 0x2fd380u: goto label_2fd380;
        case 0x2fd384u: goto label_2fd384;
        case 0x2fd388u: goto label_2fd388;
        case 0x2fd38cu: goto label_2fd38c;
        case 0x2fd390u: goto label_2fd390;
        case 0x2fd394u: goto label_2fd394;
        case 0x2fd398u: goto label_2fd398;
        case 0x2fd39cu: goto label_2fd39c;
        case 0x2fd3a0u: goto label_2fd3a0;
        case 0x2fd3a4u: goto label_2fd3a4;
        case 0x2fd3a8u: goto label_2fd3a8;
        case 0x2fd3acu: goto label_2fd3ac;
        case 0x2fd3b0u: goto label_2fd3b0;
        case 0x2fd3b4u: goto label_2fd3b4;
        case 0x2fd3b8u: goto label_2fd3b8;
        case 0x2fd3bcu: goto label_2fd3bc;
        case 0x2fd3c0u: goto label_2fd3c0;
        case 0x2fd3c4u: goto label_2fd3c4;
        case 0x2fd3c8u: goto label_2fd3c8;
        case 0x2fd3ccu: goto label_2fd3cc;
        case 0x2fd3d0u: goto label_2fd3d0;
        case 0x2fd3d4u: goto label_2fd3d4;
        case 0x2fd3d8u: goto label_2fd3d8;
        case 0x2fd3dcu: goto label_2fd3dc;
        case 0x2fd3e0u: goto label_2fd3e0;
        case 0x2fd3e4u: goto label_2fd3e4;
        case 0x2fd3e8u: goto label_2fd3e8;
        case 0x2fd3ecu: goto label_2fd3ec;
        case 0x2fd3f0u: goto label_2fd3f0;
        case 0x2fd3f4u: goto label_2fd3f4;
        case 0x2fd3f8u: goto label_2fd3f8;
        case 0x2fd3fcu: goto label_2fd3fc;
        case 0x2fd400u: goto label_2fd400;
        case 0x2fd404u: goto label_2fd404;
        case 0x2fd408u: goto label_2fd408;
        case 0x2fd40cu: goto label_2fd40c;
        case 0x2fd410u: goto label_2fd410;
        case 0x2fd414u: goto label_2fd414;
        case 0x2fd418u: goto label_2fd418;
        case 0x2fd41cu: goto label_2fd41c;
        case 0x2fd420u: goto label_2fd420;
        case 0x2fd424u: goto label_2fd424;
        case 0x2fd428u: goto label_2fd428;
        case 0x2fd42cu: goto label_2fd42c;
        case 0x2fd430u: goto label_2fd430;
        case 0x2fd434u: goto label_2fd434;
        case 0x2fd438u: goto label_2fd438;
        case 0x2fd43cu: goto label_2fd43c;
        case 0x2fd440u: goto label_2fd440;
        case 0x2fd444u: goto label_2fd444;
        case 0x2fd448u: goto label_2fd448;
        case 0x2fd44cu: goto label_2fd44c;
        case 0x2fd450u: goto label_2fd450;
        case 0x2fd454u: goto label_2fd454;
        case 0x2fd458u: goto label_2fd458;
        case 0x2fd45cu: goto label_2fd45c;
        case 0x2fd460u: goto label_2fd460;
        case 0x2fd464u: goto label_2fd464;
        case 0x2fd468u: goto label_2fd468;
        case 0x2fd46cu: goto label_2fd46c;
        case 0x2fd470u: goto label_2fd470;
        case 0x2fd474u: goto label_2fd474;
        case 0x2fd478u: goto label_2fd478;
        case 0x2fd47cu: goto label_2fd47c;
        case 0x2fd480u: goto label_2fd480;
        case 0x2fd484u: goto label_2fd484;
        case 0x2fd488u: goto label_2fd488;
        case 0x2fd48cu: goto label_2fd48c;
        case 0x2fd490u: goto label_2fd490;
        case 0x2fd494u: goto label_2fd494;
        case 0x2fd498u: goto label_2fd498;
        case 0x2fd49cu: goto label_2fd49c;
        case 0x2fd4a0u: goto label_2fd4a0;
        case 0x2fd4a4u: goto label_2fd4a4;
        case 0x2fd4a8u: goto label_2fd4a8;
        case 0x2fd4acu: goto label_2fd4ac;
        case 0x2fd4b0u: goto label_2fd4b0;
        case 0x2fd4b4u: goto label_2fd4b4;
        case 0x2fd4b8u: goto label_2fd4b8;
        case 0x2fd4bcu: goto label_2fd4bc;
        case 0x2fd4c0u: goto label_2fd4c0;
        case 0x2fd4c4u: goto label_2fd4c4;
        case 0x2fd4c8u: goto label_2fd4c8;
        case 0x2fd4ccu: goto label_2fd4cc;
        case 0x2fd4d0u: goto label_2fd4d0;
        case 0x2fd4d4u: goto label_2fd4d4;
        case 0x2fd4d8u: goto label_2fd4d8;
        case 0x2fd4dcu: goto label_2fd4dc;
        case 0x2fd4e0u: goto label_2fd4e0;
        case 0x2fd4e4u: goto label_2fd4e4;
        case 0x2fd4e8u: goto label_2fd4e8;
        case 0x2fd4ecu: goto label_2fd4ec;
        case 0x2fd4f0u: goto label_2fd4f0;
        case 0x2fd4f4u: goto label_2fd4f4;
        case 0x2fd4f8u: goto label_2fd4f8;
        case 0x2fd4fcu: goto label_2fd4fc;
        case 0x2fd500u: goto label_2fd500;
        case 0x2fd504u: goto label_2fd504;
        case 0x2fd508u: goto label_2fd508;
        case 0x2fd50cu: goto label_2fd50c;
        case 0x2fd510u: goto label_2fd510;
        case 0x2fd514u: goto label_2fd514;
        case 0x2fd518u: goto label_2fd518;
        case 0x2fd51cu: goto label_2fd51c;
        case 0x2fd520u: goto label_2fd520;
        case 0x2fd524u: goto label_2fd524;
        case 0x2fd528u: goto label_2fd528;
        case 0x2fd52cu: goto label_2fd52c;
        case 0x2fd530u: goto label_2fd530;
        case 0x2fd534u: goto label_2fd534;
        case 0x2fd538u: goto label_2fd538;
        case 0x2fd53cu: goto label_2fd53c;
        case 0x2fd540u: goto label_2fd540;
        case 0x2fd544u: goto label_2fd544;
        case 0x2fd548u: goto label_2fd548;
        case 0x2fd54cu: goto label_2fd54c;
        case 0x2fd550u: goto label_2fd550;
        case 0x2fd554u: goto label_2fd554;
        case 0x2fd558u: goto label_2fd558;
        case 0x2fd55cu: goto label_2fd55c;
        case 0x2fd560u: goto label_2fd560;
        case 0x2fd564u: goto label_2fd564;
        case 0x2fd568u: goto label_2fd568;
        case 0x2fd56cu: goto label_2fd56c;
        case 0x2fd570u: goto label_2fd570;
        case 0x2fd574u: goto label_2fd574;
        case 0x2fd578u: goto label_2fd578;
        case 0x2fd57cu: goto label_2fd57c;
        case 0x2fd580u: goto label_2fd580;
        case 0x2fd584u: goto label_2fd584;
        case 0x2fd588u: goto label_2fd588;
        case 0x2fd58cu: goto label_2fd58c;
        case 0x2fd590u: goto label_2fd590;
        case 0x2fd594u: goto label_2fd594;
        case 0x2fd598u: goto label_2fd598;
        case 0x2fd59cu: goto label_2fd59c;
        case 0x2fd5a0u: goto label_2fd5a0;
        case 0x2fd5a4u: goto label_2fd5a4;
        case 0x2fd5a8u: goto label_2fd5a8;
        case 0x2fd5acu: goto label_2fd5ac;
        case 0x2fd5b0u: goto label_2fd5b0;
        case 0x2fd5b4u: goto label_2fd5b4;
        case 0x2fd5b8u: goto label_2fd5b8;
        case 0x2fd5bcu: goto label_2fd5bc;
        case 0x2fd5c0u: goto label_2fd5c0;
        case 0x2fd5c4u: goto label_2fd5c4;
        case 0x2fd5c8u: goto label_2fd5c8;
        case 0x2fd5ccu: goto label_2fd5cc;
        case 0x2fd5d0u: goto label_2fd5d0;
        case 0x2fd5d4u: goto label_2fd5d4;
        case 0x2fd5d8u: goto label_2fd5d8;
        case 0x2fd5dcu: goto label_2fd5dc;
        case 0x2fd5e0u: goto label_2fd5e0;
        case 0x2fd5e4u: goto label_2fd5e4;
        case 0x2fd5e8u: goto label_2fd5e8;
        case 0x2fd5ecu: goto label_2fd5ec;
        case 0x2fd5f0u: goto label_2fd5f0;
        case 0x2fd5f4u: goto label_2fd5f4;
        case 0x2fd5f8u: goto label_2fd5f8;
        case 0x2fd5fcu: goto label_2fd5fc;
        case 0x2fd600u: goto label_2fd600;
        case 0x2fd604u: goto label_2fd604;
        case 0x2fd608u: goto label_2fd608;
        case 0x2fd60cu: goto label_2fd60c;
        case 0x2fd610u: goto label_2fd610;
        case 0x2fd614u: goto label_2fd614;
        case 0x2fd618u: goto label_2fd618;
        case 0x2fd61cu: goto label_2fd61c;
        case 0x2fd620u: goto label_2fd620;
        case 0x2fd624u: goto label_2fd624;
        case 0x2fd628u: goto label_2fd628;
        case 0x2fd62cu: goto label_2fd62c;
        case 0x2fd630u: goto label_2fd630;
        case 0x2fd634u: goto label_2fd634;
        case 0x2fd638u: goto label_2fd638;
        case 0x2fd63cu: goto label_2fd63c;
        case 0x2fd640u: goto label_2fd640;
        case 0x2fd644u: goto label_2fd644;
        case 0x2fd648u: goto label_2fd648;
        case 0x2fd64cu: goto label_2fd64c;
        case 0x2fd650u: goto label_2fd650;
        case 0x2fd654u: goto label_2fd654;
        case 0x2fd658u: goto label_2fd658;
        case 0x2fd65cu: goto label_2fd65c;
        case 0x2fd660u: goto label_2fd660;
        case 0x2fd664u: goto label_2fd664;
        case 0x2fd668u: goto label_2fd668;
        case 0x2fd66cu: goto label_2fd66c;
        case 0x2fd670u: goto label_2fd670;
        case 0x2fd674u: goto label_2fd674;
        case 0x2fd678u: goto label_2fd678;
        case 0x2fd67cu: goto label_2fd67c;
        case 0x2fd680u: goto label_2fd680;
        case 0x2fd684u: goto label_2fd684;
        case 0x2fd688u: goto label_2fd688;
        case 0x2fd68cu: goto label_2fd68c;
        case 0x2fd690u: goto label_2fd690;
        case 0x2fd694u: goto label_2fd694;
        case 0x2fd698u: goto label_2fd698;
        case 0x2fd69cu: goto label_2fd69c;
        case 0x2fd6a0u: goto label_2fd6a0;
        case 0x2fd6a4u: goto label_2fd6a4;
        case 0x2fd6a8u: goto label_2fd6a8;
        case 0x2fd6acu: goto label_2fd6ac;
        case 0x2fd6b0u: goto label_2fd6b0;
        case 0x2fd6b4u: goto label_2fd6b4;
        case 0x2fd6b8u: goto label_2fd6b8;
        case 0x2fd6bcu: goto label_2fd6bc;
        case 0x2fd6c0u: goto label_2fd6c0;
        case 0x2fd6c4u: goto label_2fd6c4;
        case 0x2fd6c8u: goto label_2fd6c8;
        case 0x2fd6ccu: goto label_2fd6cc;
        case 0x2fd6d0u: goto label_2fd6d0;
        case 0x2fd6d4u: goto label_2fd6d4;
        case 0x2fd6d8u: goto label_2fd6d8;
        case 0x2fd6dcu: goto label_2fd6dc;
        case 0x2fd6e0u: goto label_2fd6e0;
        case 0x2fd6e4u: goto label_2fd6e4;
        case 0x2fd6e8u: goto label_2fd6e8;
        case 0x2fd6ecu: goto label_2fd6ec;
        case 0x2fd6f0u: goto label_2fd6f0;
        case 0x2fd6f4u: goto label_2fd6f4;
        case 0x2fd6f8u: goto label_2fd6f8;
        case 0x2fd6fcu: goto label_2fd6fc;
        case 0x2fd700u: goto label_2fd700;
        case 0x2fd704u: goto label_2fd704;
        case 0x2fd708u: goto label_2fd708;
        case 0x2fd70cu: goto label_2fd70c;
        case 0x2fd710u: goto label_2fd710;
        case 0x2fd714u: goto label_2fd714;
        case 0x2fd718u: goto label_2fd718;
        case 0x2fd71cu: goto label_2fd71c;
        case 0x2fd720u: goto label_2fd720;
        case 0x2fd724u: goto label_2fd724;
        case 0x2fd728u: goto label_2fd728;
        case 0x2fd72cu: goto label_2fd72c;
        case 0x2fd730u: goto label_2fd730;
        case 0x2fd734u: goto label_2fd734;
        case 0x2fd738u: goto label_2fd738;
        case 0x2fd73cu: goto label_2fd73c;
        case 0x2fd740u: goto label_2fd740;
        case 0x2fd744u: goto label_2fd744;
        case 0x2fd748u: goto label_2fd748;
        case 0x2fd74cu: goto label_2fd74c;
        case 0x2fd750u: goto label_2fd750;
        case 0x2fd754u: goto label_2fd754;
        case 0x2fd758u: goto label_2fd758;
        case 0x2fd75cu: goto label_2fd75c;
        case 0x2fd760u: goto label_2fd760;
        case 0x2fd764u: goto label_2fd764;
        case 0x2fd768u: goto label_2fd768;
        case 0x2fd76cu: goto label_2fd76c;
        case 0x2fd770u: goto label_2fd770;
        case 0x2fd774u: goto label_2fd774;
        case 0x2fd778u: goto label_2fd778;
        case 0x2fd77cu: goto label_2fd77c;
        case 0x2fd780u: goto label_2fd780;
        case 0x2fd784u: goto label_2fd784;
        case 0x2fd788u: goto label_2fd788;
        case 0x2fd78cu: goto label_2fd78c;
        case 0x2fd790u: goto label_2fd790;
        case 0x2fd794u: goto label_2fd794;
        case 0x2fd798u: goto label_2fd798;
        case 0x2fd79cu: goto label_2fd79c;
        case 0x2fd7a0u: goto label_2fd7a0;
        case 0x2fd7a4u: goto label_2fd7a4;
        case 0x2fd7a8u: goto label_2fd7a8;
        case 0x2fd7acu: goto label_2fd7ac;
        case 0x2fd7b0u: goto label_2fd7b0;
        case 0x2fd7b4u: goto label_2fd7b4;
        case 0x2fd7b8u: goto label_2fd7b8;
        case 0x2fd7bcu: goto label_2fd7bc;
        case 0x2fd7c0u: goto label_2fd7c0;
        case 0x2fd7c4u: goto label_2fd7c4;
        case 0x2fd7c8u: goto label_2fd7c8;
        case 0x2fd7ccu: goto label_2fd7cc;
        case 0x2fd7d0u: goto label_2fd7d0;
        case 0x2fd7d4u: goto label_2fd7d4;
        case 0x2fd7d8u: goto label_2fd7d8;
        case 0x2fd7dcu: goto label_2fd7dc;
        case 0x2fd7e0u: goto label_2fd7e0;
        case 0x2fd7e4u: goto label_2fd7e4;
        case 0x2fd7e8u: goto label_2fd7e8;
        case 0x2fd7ecu: goto label_2fd7ec;
        case 0x2fd7f0u: goto label_2fd7f0;
        case 0x2fd7f4u: goto label_2fd7f4;
        case 0x2fd7f8u: goto label_2fd7f8;
        case 0x2fd7fcu: goto label_2fd7fc;
        case 0x2fd800u: goto label_2fd800;
        case 0x2fd804u: goto label_2fd804;
        case 0x2fd808u: goto label_2fd808;
        case 0x2fd80cu: goto label_2fd80c;
        case 0x2fd810u: goto label_2fd810;
        case 0x2fd814u: goto label_2fd814;
        case 0x2fd818u: goto label_2fd818;
        case 0x2fd81cu: goto label_2fd81c;
        case 0x2fd820u: goto label_2fd820;
        case 0x2fd824u: goto label_2fd824;
        case 0x2fd828u: goto label_2fd828;
        case 0x2fd82cu: goto label_2fd82c;
        case 0x2fd830u: goto label_2fd830;
        case 0x2fd834u: goto label_2fd834;
        case 0x2fd838u: goto label_2fd838;
        case 0x2fd83cu: goto label_2fd83c;
        case 0x2fd840u: goto label_2fd840;
        case 0x2fd844u: goto label_2fd844;
        case 0x2fd848u: goto label_2fd848;
        case 0x2fd84cu: goto label_2fd84c;
        case 0x2fd850u: goto label_2fd850;
        case 0x2fd854u: goto label_2fd854;
        case 0x2fd858u: goto label_2fd858;
        case 0x2fd85cu: goto label_2fd85c;
        case 0x2fd860u: goto label_2fd860;
        case 0x2fd864u: goto label_2fd864;
        case 0x2fd868u: goto label_2fd868;
        case 0x2fd86cu: goto label_2fd86c;
        case 0x2fd870u: goto label_2fd870;
        case 0x2fd874u: goto label_2fd874;
        case 0x2fd878u: goto label_2fd878;
        case 0x2fd87cu: goto label_2fd87c;
        case 0x2fd880u: goto label_2fd880;
        case 0x2fd884u: goto label_2fd884;
        case 0x2fd888u: goto label_2fd888;
        case 0x2fd88cu: goto label_2fd88c;
        case 0x2fd890u: goto label_2fd890;
        case 0x2fd894u: goto label_2fd894;
        case 0x2fd898u: goto label_2fd898;
        case 0x2fd89cu: goto label_2fd89c;
        case 0x2fd8a0u: goto label_2fd8a0;
        case 0x2fd8a4u: goto label_2fd8a4;
        case 0x2fd8a8u: goto label_2fd8a8;
        case 0x2fd8acu: goto label_2fd8ac;
        case 0x2fd8b0u: goto label_2fd8b0;
        case 0x2fd8b4u: goto label_2fd8b4;
        case 0x2fd8b8u: goto label_2fd8b8;
        case 0x2fd8bcu: goto label_2fd8bc;
        case 0x2fd8c0u: goto label_2fd8c0;
        case 0x2fd8c4u: goto label_2fd8c4;
        case 0x2fd8c8u: goto label_2fd8c8;
        case 0x2fd8ccu: goto label_2fd8cc;
        case 0x2fd8d0u: goto label_2fd8d0;
        case 0x2fd8d4u: goto label_2fd8d4;
        case 0x2fd8d8u: goto label_2fd8d8;
        case 0x2fd8dcu: goto label_2fd8dc;
        case 0x2fd8e0u: goto label_2fd8e0;
        case 0x2fd8e4u: goto label_2fd8e4;
        case 0x2fd8e8u: goto label_2fd8e8;
        case 0x2fd8ecu: goto label_2fd8ec;
        case 0x2fd8f0u: goto label_2fd8f0;
        case 0x2fd8f4u: goto label_2fd8f4;
        case 0x2fd8f8u: goto label_2fd8f8;
        case 0x2fd8fcu: goto label_2fd8fc;
        case 0x2fd900u: goto label_2fd900;
        case 0x2fd904u: goto label_2fd904;
        case 0x2fd908u: goto label_2fd908;
        case 0x2fd90cu: goto label_2fd90c;
        case 0x2fd910u: goto label_2fd910;
        case 0x2fd914u: goto label_2fd914;
        case 0x2fd918u: goto label_2fd918;
        case 0x2fd91cu: goto label_2fd91c;
        case 0x2fd920u: goto label_2fd920;
        case 0x2fd924u: goto label_2fd924;
        case 0x2fd928u: goto label_2fd928;
        case 0x2fd92cu: goto label_2fd92c;
        case 0x2fd930u: goto label_2fd930;
        case 0x2fd934u: goto label_2fd934;
        case 0x2fd938u: goto label_2fd938;
        case 0x2fd93cu: goto label_2fd93c;
        case 0x2fd940u: goto label_2fd940;
        case 0x2fd944u: goto label_2fd944;
        case 0x2fd948u: goto label_2fd948;
        case 0x2fd94cu: goto label_2fd94c;
        case 0x2fd950u: goto label_2fd950;
        case 0x2fd954u: goto label_2fd954;
        case 0x2fd958u: goto label_2fd958;
        case 0x2fd95cu: goto label_2fd95c;
        case 0x2fd960u: goto label_2fd960;
        case 0x2fd964u: goto label_2fd964;
        case 0x2fd968u: goto label_2fd968;
        case 0x2fd96cu: goto label_2fd96c;
        case 0x2fd970u: goto label_2fd970;
        case 0x2fd974u: goto label_2fd974;
        case 0x2fd978u: goto label_2fd978;
        case 0x2fd97cu: goto label_2fd97c;
        case 0x2fd980u: goto label_2fd980;
        case 0x2fd984u: goto label_2fd984;
        case 0x2fd988u: goto label_2fd988;
        case 0x2fd98cu: goto label_2fd98c;
        case 0x2fd990u: goto label_2fd990;
        case 0x2fd994u: goto label_2fd994;
        case 0x2fd998u: goto label_2fd998;
        case 0x2fd99cu: goto label_2fd99c;
        case 0x2fd9a0u: goto label_2fd9a0;
        case 0x2fd9a4u: goto label_2fd9a4;
        case 0x2fd9a8u: goto label_2fd9a8;
        case 0x2fd9acu: goto label_2fd9ac;
        case 0x2fd9b0u: goto label_2fd9b0;
        case 0x2fd9b4u: goto label_2fd9b4;
        case 0x2fd9b8u: goto label_2fd9b8;
        case 0x2fd9bcu: goto label_2fd9bc;
        case 0x2fd9c0u: goto label_2fd9c0;
        case 0x2fd9c4u: goto label_2fd9c4;
        case 0x2fd9c8u: goto label_2fd9c8;
        case 0x2fd9ccu: goto label_2fd9cc;
        case 0x2fd9d0u: goto label_2fd9d0;
        case 0x2fd9d4u: goto label_2fd9d4;
        case 0x2fd9d8u: goto label_2fd9d8;
        case 0x2fd9dcu: goto label_2fd9dc;
        case 0x2fd9e0u: goto label_2fd9e0;
        case 0x2fd9e4u: goto label_2fd9e4;
        case 0x2fd9e8u: goto label_2fd9e8;
        case 0x2fd9ecu: goto label_2fd9ec;
        case 0x2fd9f0u: goto label_2fd9f0;
        case 0x2fd9f4u: goto label_2fd9f4;
        case 0x2fd9f8u: goto label_2fd9f8;
        case 0x2fd9fcu: goto label_2fd9fc;
        case 0x2fda00u: goto label_2fda00;
        case 0x2fda04u: goto label_2fda04;
        case 0x2fda08u: goto label_2fda08;
        case 0x2fda0cu: goto label_2fda0c;
        case 0x2fda10u: goto label_2fda10;
        case 0x2fda14u: goto label_2fda14;
        case 0x2fda18u: goto label_2fda18;
        case 0x2fda1cu: goto label_2fda1c;
        case 0x2fda20u: goto label_2fda20;
        case 0x2fda24u: goto label_2fda24;
        case 0x2fda28u: goto label_2fda28;
        case 0x2fda2cu: goto label_2fda2c;
        case 0x2fda30u: goto label_2fda30;
        case 0x2fda34u: goto label_2fda34;
        case 0x2fda38u: goto label_2fda38;
        case 0x2fda3cu: goto label_2fda3c;
        case 0x2fda40u: goto label_2fda40;
        case 0x2fda44u: goto label_2fda44;
        case 0x2fda48u: goto label_2fda48;
        case 0x2fda4cu: goto label_2fda4c;
        case 0x2fda50u: goto label_2fda50;
        case 0x2fda54u: goto label_2fda54;
        case 0x2fda58u: goto label_2fda58;
        case 0x2fda5cu: goto label_2fda5c;
        case 0x2fda60u: goto label_2fda60;
        case 0x2fda64u: goto label_2fda64;
        case 0x2fda68u: goto label_2fda68;
        case 0x2fda6cu: goto label_2fda6c;
        case 0x2fda70u: goto label_2fda70;
        case 0x2fda74u: goto label_2fda74;
        case 0x2fda78u: goto label_2fda78;
        case 0x2fda7cu: goto label_2fda7c;
        case 0x2fda80u: goto label_2fda80;
        case 0x2fda84u: goto label_2fda84;
        case 0x2fda88u: goto label_2fda88;
        case 0x2fda8cu: goto label_2fda8c;
        case 0x2fda90u: goto label_2fda90;
        case 0x2fda94u: goto label_2fda94;
        case 0x2fda98u: goto label_2fda98;
        case 0x2fda9cu: goto label_2fda9c;
        case 0x2fdaa0u: goto label_2fdaa0;
        case 0x2fdaa4u: goto label_2fdaa4;
        case 0x2fdaa8u: goto label_2fdaa8;
        case 0x2fdaacu: goto label_2fdaac;
        case 0x2fdab0u: goto label_2fdab0;
        case 0x2fdab4u: goto label_2fdab4;
        case 0x2fdab8u: goto label_2fdab8;
        case 0x2fdabcu: goto label_2fdabc;
        case 0x2fdac0u: goto label_2fdac0;
        case 0x2fdac4u: goto label_2fdac4;
        case 0x2fdac8u: goto label_2fdac8;
        case 0x2fdaccu: goto label_2fdacc;
        case 0x2fdad0u: goto label_2fdad0;
        case 0x2fdad4u: goto label_2fdad4;
        case 0x2fdad8u: goto label_2fdad8;
        case 0x2fdadcu: goto label_2fdadc;
        case 0x2fdae0u: goto label_2fdae0;
        case 0x2fdae4u: goto label_2fdae4;
        case 0x2fdae8u: goto label_2fdae8;
        case 0x2fdaecu: goto label_2fdaec;
        case 0x2fdaf0u: goto label_2fdaf0;
        case 0x2fdaf4u: goto label_2fdaf4;
        case 0x2fdaf8u: goto label_2fdaf8;
        case 0x2fdafcu: goto label_2fdafc;
        case 0x2fdb00u: goto label_2fdb00;
        case 0x2fdb04u: goto label_2fdb04;
        case 0x2fdb08u: goto label_2fdb08;
        case 0x2fdb0cu: goto label_2fdb0c;
        case 0x2fdb10u: goto label_2fdb10;
        case 0x2fdb14u: goto label_2fdb14;
        case 0x2fdb18u: goto label_2fdb18;
        case 0x2fdb1cu: goto label_2fdb1c;
        case 0x2fdb20u: goto label_2fdb20;
        case 0x2fdb24u: goto label_2fdb24;
        case 0x2fdb28u: goto label_2fdb28;
        case 0x2fdb2cu: goto label_2fdb2c;
        case 0x2fdb30u: goto label_2fdb30;
        case 0x2fdb34u: goto label_2fdb34;
        case 0x2fdb38u: goto label_2fdb38;
        case 0x2fdb3cu: goto label_2fdb3c;
        case 0x2fdb40u: goto label_2fdb40;
        case 0x2fdb44u: goto label_2fdb44;
        case 0x2fdb48u: goto label_2fdb48;
        case 0x2fdb4cu: goto label_2fdb4c;
        case 0x2fdb50u: goto label_2fdb50;
        case 0x2fdb54u: goto label_2fdb54;
        case 0x2fdb58u: goto label_2fdb58;
        case 0x2fdb5cu: goto label_2fdb5c;
        case 0x2fdb60u: goto label_2fdb60;
        case 0x2fdb64u: goto label_2fdb64;
        case 0x2fdb68u: goto label_2fdb68;
        case 0x2fdb6cu: goto label_2fdb6c;
        case 0x2fdb70u: goto label_2fdb70;
        case 0x2fdb74u: goto label_2fdb74;
        case 0x2fdb78u: goto label_2fdb78;
        case 0x2fdb7cu: goto label_2fdb7c;
        case 0x2fdb80u: goto label_2fdb80;
        case 0x2fdb84u: goto label_2fdb84;
        case 0x2fdb88u: goto label_2fdb88;
        case 0x2fdb8cu: goto label_2fdb8c;
        case 0x2fdb90u: goto label_2fdb90;
        case 0x2fdb94u: goto label_2fdb94;
        case 0x2fdb98u: goto label_2fdb98;
        case 0x2fdb9cu: goto label_2fdb9c;
        case 0x2fdba0u: goto label_2fdba0;
        case 0x2fdba4u: goto label_2fdba4;
        case 0x2fdba8u: goto label_2fdba8;
        case 0x2fdbacu: goto label_2fdbac;
        case 0x2fdbb0u: goto label_2fdbb0;
        case 0x2fdbb4u: goto label_2fdbb4;
        case 0x2fdbb8u: goto label_2fdbb8;
        case 0x2fdbbcu: goto label_2fdbbc;
        case 0x2fdbc0u: goto label_2fdbc0;
        case 0x2fdbc4u: goto label_2fdbc4;
        case 0x2fdbc8u: goto label_2fdbc8;
        case 0x2fdbccu: goto label_2fdbcc;
        case 0x2fdbd0u: goto label_2fdbd0;
        case 0x2fdbd4u: goto label_2fdbd4;
        case 0x2fdbd8u: goto label_2fdbd8;
        case 0x2fdbdcu: goto label_2fdbdc;
        case 0x2fdbe0u: goto label_2fdbe0;
        case 0x2fdbe4u: goto label_2fdbe4;
        case 0x2fdbe8u: goto label_2fdbe8;
        case 0x2fdbecu: goto label_2fdbec;
        case 0x2fdbf0u: goto label_2fdbf0;
        case 0x2fdbf4u: goto label_2fdbf4;
        case 0x2fdbf8u: goto label_2fdbf8;
        case 0x2fdbfcu: goto label_2fdbfc;
        case 0x2fdc00u: goto label_2fdc00;
        case 0x2fdc04u: goto label_2fdc04;
        case 0x2fdc08u: goto label_2fdc08;
        case 0x2fdc0cu: goto label_2fdc0c;
        case 0x2fdc10u: goto label_2fdc10;
        case 0x2fdc14u: goto label_2fdc14;
        case 0x2fdc18u: goto label_2fdc18;
        case 0x2fdc1cu: goto label_2fdc1c;
        default: break;
    }

    ctx->pc = 0x2fd0e0u;

label_2fd0e0:
    // 0x2fd0e0: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x2fd0e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_2fd0e4:
    // 0x2fd0e4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2fd0e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_2fd0e8:
    // 0x2fd0e8: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x2fd0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_2fd0ec:
    // 0x2fd0ec: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x2fd0ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_2fd0f0:
    // 0x2fd0f0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x2fd0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2fd0f4:
    // 0x2fd0f4: 0x3c160038  lui         $s6, 0x38
    ctx->pc = 0x2fd0f4u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)56 << 16));
label_2fd0f8:
    // 0x2fd0f8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2fd0f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2fd0fc:
    // 0x2fd0fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2fd0fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2fd100:
    // 0x2fd100: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2fd100u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2fd104:
    // 0x2fd104: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fd104u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2fd108:
    // 0x2fd108: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fd108u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2fd10c:
    // 0x2fd10c: 0x8f90a01c  lw          $s0, -0x5FE4($gp)
    ctx->pc = 0x2fd10cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942748)));
label_2fd110:
    // 0x2fd110: 0xc0c0fd0  jal         func_303F40
label_2fd114:
    if (ctx->pc == 0x2FD114u) {
        ctx->pc = 0x2FD114u;
            // 0x2fd114: 0x26d61ef0  addiu       $s6, $s6, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 7920));
        ctx->pc = 0x2FD118u;
        goto label_2fd118;
    }
    ctx->pc = 0x2FD110u;
    SET_GPR_U32(ctx, 31, 0x2FD118u);
    ctx->pc = 0x2FD114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD110u;
            // 0x2fd114: 0x26d61ef0  addiu       $s6, $s6, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303F40u;
    if (runtime->hasFunction(0x303F40u)) {
        auto targetFn = runtime->lookupFunction(0x303F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD118u; }
        if (ctx->pc != 0x2FD118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowSubGameInfo__Fv_0x303f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD118u; }
        if (ctx->pc != 0x2FD118u) { return; }
    }
    ctx->pc = 0x2FD118u;
label_2fd118:
    // 0x2fd118: 0x8c52002c  lw          $s2, 0x2C($v0)
    ctx->pc = 0x2fd118u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2fd11c:
    // 0x2fd11c: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2fd11cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2fd120:
    // 0x2fd120: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
label_2fd124:
    if (ctx->pc == 0x2FD124u) {
        ctx->pc = 0x2FD124u;
            // 0x2fd124: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD128u;
        goto label_2fd128;
    }
    ctx->pc = 0x2FD120u;
    {
        const bool branch_taken_0x2fd120 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD120u;
            // 0x2fd124: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd120) {
            ctx->pc = 0x2FD138u;
            goto label_2fd138;
        }
    }
    ctx->pc = 0x2FD128u;
label_2fd128:
    // 0x2fd128: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fd128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fd12c:
    // 0x2fd12c: 0xc0a0c64  jal         func_283190
label_2fd130:
    if (ctx->pc == 0x2FD130u) {
        ctx->pc = 0x2FD130u;
            // 0x2fd130: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2FD134u;
        goto label_2fd134;
    }
    ctx->pc = 0x2FD12Cu;
    SET_GPR_U32(ctx, 31, 0x2FD134u);
    ctx->pc = 0x2FD130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD12Cu;
            // 0x2fd130: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD134u; }
        if (ctx->pc != 0x2FD134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD134u; }
        if (ctx->pc != 0x2FD134u) { return; }
    }
    ctx->pc = 0x2FD134u;
label_2fd134:
    // 0x2fd134: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2fd134u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fd138:
    // 0x2fd138: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2fd138u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_2fd13c:
    // 0x2fd13c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fd13cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fd140:
    // 0x2fd140: 0x24841e40  addiu       $a0, $a0, 0x1E40
    ctx->pc = 0x2fd140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7744));
label_2fd144:
    // 0x2fd144: 0x27a60118  addiu       $a2, $sp, 0x118
    ctx->pc = 0x2fd144u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
label_2fd148:
    // 0x2fd148: 0xc0524dc  jal         func_149370
label_2fd14c:
    if (ctx->pc == 0x2FD14Cu) {
        ctx->pc = 0x2FD14Cu;
            // 0x2fd14c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD150u;
        goto label_2fd150;
    }
    ctx->pc = 0x2FD148u;
    SET_GPR_U32(ctx, 31, 0x2FD150u);
    ctx->pc = 0x2FD14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD148u;
            // 0x2fd14c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD150u; }
        if (ctx->pc != 0x2FD150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD150u; }
        if (ctx->pc != 0x2FD150u) { return; }
    }
    ctx->pc = 0x2FD150u;
label_2fd150:
    // 0x2fd150: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2fd154:
    if (ctx->pc == 0x2FD154u) {
        ctx->pc = 0x2FD158u;
        goto label_2fd158;
    }
    ctx->pc = 0x2FD150u;
    {
        const bool branch_taken_0x2fd150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd150) {
            ctx->pc = 0x2FD168u;
            goto label_2fd168;
        }
    }
    ctx->pc = 0x2FD158u;
label_2fd158:
    // 0x2fd158: 0x8fa50118  lw          $a1, 0x118($sp)
    ctx->pc = 0x2fd158u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2fd15c:
    // 0x2fd15c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fd15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fd160:
    // 0x2fd160: 0xc0c0f80  jal         func_303E00
label_2fd164:
    if (ctx->pc == 0x2FD164u) {
        ctx->pc = 0x2FD164u;
            // 0x2fd164: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD168u;
        goto label_2fd168;
    }
    ctx->pc = 0x2FD160u;
    SET_GPR_U32(ctx, 31, 0x2FD168u);
    ctx->pc = 0x2FD164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD160u;
            // 0x2fd164: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x303E00u;
    if (runtime->hasFunction(0x303E00u)) {
        auto targetFn = runtime->lookupFunction(0x303E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD168u; }
        if (ctx->pc != 0x2FD168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFishPlaceData__FPciP9mgCMemory_0x303e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD168u; }
        if (ctx->pc != 0x2FD168u) { return; }
    }
    ctx->pc = 0x2FD168u;
label_2fd168:
    // 0x2fd168: 0xc052330  jal         func_148CC0
label_2fd16c:
    if (ctx->pc == 0x2FD16Cu) {
        ctx->pc = 0x2FD170u;
        goto label_2fd170;
    }
    ctx->pc = 0x2FD168u;
    SET_GPR_U32(ctx, 31, 0x2FD170u);
    ctx->pc = 0x148CC0u;
    if (runtime->hasFunction(0x148CC0u)) {
        auto targetFn = runtime->lookupFunction(0x148CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD170u; }
        if (ctx->pc != 0x2FD170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartReadBG__Fv_0x148cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD170u; }
        if (ctx->pc != 0x2FD170u) { return; }
    }
    ctx->pc = 0x2FD170u;
label_2fd170:
    // 0x2fd170: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2fd170u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_2fd174:
    // 0x2fd174: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fd174u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fd178:
    // 0x2fd178: 0x24841e60  addiu       $a0, $a0, 0x1E60
    ctx->pc = 0x2fd178u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7776));
label_2fd17c:
    // 0x2fd17c: 0xc05224c  jal         func_148930
label_2fd180:
    if (ctx->pc == 0x2FD180u) {
        ctx->pc = 0x2FD180u;
            // 0x2fd180: 0x27a6011c  addiu       $a2, $sp, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
        ctx->pc = 0x2FD184u;
        goto label_2fd184;
    }
    ctx->pc = 0x2FD17Cu;
    SET_GPR_U32(ctx, 31, 0x2FD184u);
    ctx->pc = 0x2FD180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD17Cu;
            // 0x2fd180: 0x27a6011c  addiu       $a2, $sp, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD184u; }
        if (ctx->pc != 0x2FD184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD184u; }
        if (ctx->pc != 0x2FD184u) { return; }
    }
    ctx->pc = 0x2FD184u;
label_2fd184:
    // 0x2fd184: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2fd188:
    if (ctx->pc == 0x2FD188u) {
        ctx->pc = 0x2FD188u;
            // 0x2fd188: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2FD18Cu;
        goto label_2fd18c;
    }
    ctx->pc = 0x2FD184u;
    {
        const bool branch_taken_0x2fd184 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD184u;
            // 0x2fd188: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd184) {
            ctx->pc = 0x2FD194u;
            goto label_2fd194;
        }
    }
    ctx->pc = 0x2FD18Cu;
label_2fd18c:
    // 0x2fd18c: 0x10000299  b           . + 4 + (0x299 << 2)
label_2fd190:
    if (ctx->pc == 0x2FD190u) {
        ctx->pc = 0x2FD190u;
            // 0x2fd190: 0xaf83a084  sw          $v1, -0x5F7C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942852), GPR_U32(ctx, 3));
        ctx->pc = 0x2FD194u;
        goto label_2fd194;
    }
    ctx->pc = 0x2FD18Cu;
    {
        const bool branch_taken_0x2fd18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD18Cu;
            // 0x2fd190: 0xaf83a084  sw          $v1, -0x5F7C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942852), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd18c) {
            ctx->pc = 0x2FDBF4u;
            goto label_2fdbf4;
        }
    }
    ctx->pc = 0x2FD194u;
label_2fd194:
    // 0x2fd194: 0xc05239c  jal         func_148E70
label_2fd198:
    if (ctx->pc == 0x2FD198u) {
        ctx->pc = 0x2FD19Cu;
        goto label_2fd19c;
    }
    ctx->pc = 0x2FD194u;
    SET_GPR_U32(ctx, 31, 0x2FD19Cu);
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD19Cu; }
        if (ctx->pc != 0x2FD19Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD19Cu; }
        if (ctx->pc != 0x2FD19Cu) { return; }
    }
    ctx->pc = 0x2FD19Cu;
label_2fd19c:
    // 0x2fd19c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2fd1a0:
    if (ctx->pc == 0x2FD1A0u) {
        ctx->pc = 0x2FD1A4u;
        goto label_2fd1a4;
    }
    ctx->pc = 0x2FD19Cu;
    {
        const bool branch_taken_0x2fd19c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd19c) {
            ctx->pc = 0x2FD1CCu;
            goto label_2fd1cc;
        }
    }
    ctx->pc = 0x2FD1A4u;
label_2fd1a4:
    // 0x2fd1a4: 0xc0bf3e4  jal         func_2FCF90
label_2fd1a8:
    if (ctx->pc == 0x2FD1A8u) {
        ctx->pc = 0x2FD1ACu;
        goto label_2fd1ac;
    }
    ctx->pc = 0x2FD1A4u;
    SET_GPR_U32(ctx, 31, 0x2FD1ACu);
    ctx->pc = 0x2FCF90u;
    if (runtime->hasFunction(0x2FCF90u)) {
        auto targetFn = runtime->lookupFunction(0x2FCF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD1ACu; }
        if (ctx->pc != 0x2FD1ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        switch_thread__Fv_0x2fcf90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD1ACu; }
        if (ctx->pc != 0x2FD1ACu) { return; }
    }
    ctx->pc = 0x2FD1ACu;
label_2fd1ac:
    // 0x2fd1ac: 0xc05239c  jal         func_148E70
label_2fd1b0:
    if (ctx->pc == 0x2FD1B0u) {
        ctx->pc = 0x2FD1B4u;
        goto label_2fd1b4;
    }
    ctx->pc = 0x2FD1ACu;
    SET_GPR_U32(ctx, 31, 0x2FD1B4u);
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD1B4u; }
        if (ctx->pc != 0x2FD1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD1B4u; }
        if (ctx->pc != 0x2FD1B4u) { return; }
    }
    ctx->pc = 0x2FD1B4u;
label_2fd1b4:
    // 0x2fd1b4: 0x0  nop
    ctx->pc = 0x2fd1b4u;
    // NOP
label_2fd1b8:
    // 0x2fd1b8: 0x0  nop
    ctx->pc = 0x2fd1b8u;
    // NOP
label_2fd1bc:
    // 0x2fd1bc: 0x0  nop
    ctx->pc = 0x2fd1bcu;
    // NOP
label_2fd1c0:
    // 0x2fd1c0: 0x0  nop
    ctx->pc = 0x2fd1c0u;
    // NOP
label_2fd1c4:
    // 0x2fd1c4: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_2fd1c8:
    if (ctx->pc == 0x2FD1C8u) {
        ctx->pc = 0x2FD1CCu;
        goto label_2fd1cc;
    }
    ctx->pc = 0x2FD1C4u;
    {
        const bool branch_taken_0x2fd1c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fd1c4) {
            ctx->pc = 0x2FD1A4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fd1a4;
        }
    }
    ctx->pc = 0x2FD1CCu;
label_2fd1cc:
    // 0x2fd1cc: 0x0  nop
    ctx->pc = 0x2fd1ccu;
    // NOP
label_2fd1d0:
    // 0x2fd1d0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fd1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fd1d4:
    // 0x2fd1d4: 0xc04e748  jal         func_139D20
label_2fd1d8:
    if (ctx->pc == 0x2FD1D8u) {
        ctx->pc = 0x2FD1D8u;
            // 0x2fd1d8: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->pc = 0x2FD1DCu;
        goto label_2fd1dc;
    }
    ctx->pc = 0x2FD1D4u;
    SET_GPR_U32(ctx, 31, 0x2FD1DCu);
    ctx->pc = 0x2FD1D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD1D4u;
            // 0x2fd1d8: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD1DCu; }
        if (ctx->pc != 0x2FD1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD1DCu; }
        if (ctx->pc != 0x2FD1DCu) { return; }
    }
    ctx->pc = 0x2FD1DCu;
label_2fd1dc:
    // 0x2fd1dc: 0x24040660  addiu       $a0, $zero, 0x660
    ctx->pc = 0x2fd1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1632));
label_2fd1e0:
    // 0x2fd1e0: 0xc04e638  jal         func_1398E0
label_2fd1e4:
    if (ctx->pc == 0x2FD1E4u) {
        ctx->pc = 0x2FD1E4u;
            // 0x2fd1e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD1E8u;
        goto label_2fd1e8;
    }
    ctx->pc = 0x2FD1E0u;
    SET_GPR_U32(ctx, 31, 0x2FD1E8u);
    ctx->pc = 0x2FD1E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD1E0u;
            // 0x2fd1e4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD1E8u; }
        if (ctx->pc != 0x2FD1E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD1E8u; }
        if (ctx->pc != 0x2FD1E8u) { return; }
    }
    ctx->pc = 0x2FD1E8u;
label_2fd1e8:
    // 0x2fd1e8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_2fd1ec:
    if (ctx->pc == 0x2FD1ECu) {
        ctx->pc = 0x2FD1ECu;
            // 0x2fd1ec: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD1F0u;
        goto label_2fd1f0;
    }
    ctx->pc = 0x2FD1E8u;
    {
        const bool branch_taken_0x2fd1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD1E8u;
            // 0x2fd1ec: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd1e8) {
            ctx->pc = 0x2FD26Cu;
            goto label_2fd26c;
        }
    }
    ctx->pc = 0x2FD1F0u;
label_2fd1f0:
    // 0x2fd1f0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2fd1f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2fd1f4:
    // 0x2fd1f4: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x2fd1f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_2fd1f8:
    // 0x2fd1f8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fd1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fd1fc:
    // 0x2fd1fc: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2fd1fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2fd200:
    // 0x2fd200: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fd200u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fd204:
    // 0x2fd204: 0x320f809  jalr        $t9
label_2fd208:
    if (ctx->pc == 0x2FD208u) {
        ctx->pc = 0x2FD208u;
            // 0x2fd208: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD20Cu;
        goto label_2fd20c;
    }
    ctx->pc = 0x2FD204u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FD20Cu);
        ctx->pc = 0x2FD208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD204u;
            // 0x2fd208: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FD20Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FD20Cu; }
            if (ctx->pc != 0x2FD20Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2FD20Cu;
label_2fd20c:
    // 0x2fd20c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2fd20cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2fd210:
    // 0x2fd210: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x2fd210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_2fd214:
    // 0x2fd214: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fd214u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fd218:
    // 0x2fd218: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2fd218u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2fd21c:
    // 0x2fd21c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fd21cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fd220:
    // 0x2fd220: 0x320f809  jalr        $t9
label_2fd224:
    if (ctx->pc == 0x2FD224u) {
        ctx->pc = 0x2FD224u;
            // 0x2fd224: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD228u;
        goto label_2fd228;
    }
    ctx->pc = 0x2FD220u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FD228u);
        ctx->pc = 0x2FD224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD220u;
            // 0x2fd224: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FD228u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FD228u; }
            if (ctx->pc != 0x2FD228u) { return; }
        }
        }
    }
    ctx->pc = 0x2FD228u;
label_2fd228:
    // 0x2fd228: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2fd228u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2fd22c:
    // 0x2fd22c: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x2fd22cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_2fd230:
    // 0x2fd230: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fd230u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fd234:
    // 0x2fd234: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2fd234u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2fd238:
    // 0x2fd238: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fd238u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fd23c:
    // 0x2fd23c: 0x320f809  jalr        $t9
label_2fd240:
    if (ctx->pc == 0x2FD240u) {
        ctx->pc = 0x2FD240u;
            // 0x2fd240: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD244u;
        goto label_2fd244;
    }
    ctx->pc = 0x2FD23Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FD244u);
        ctx->pc = 0x2FD240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD23Cu;
            // 0x2fd240: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FD244u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FD244u; }
            if (ctx->pc != 0x2FD244u) { return; }
        }
        }
    }
    ctx->pc = 0x2FD244u;
label_2fd244:
    // 0x2fd244: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2fd244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2fd248:
    // 0x2fd248: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x2fd248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_2fd24c:
    // 0x2fd24c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fd24cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fd250:
    // 0x2fd250: 0xae60035c  sw          $zero, 0x35C($s3)
    ctx->pc = 0x2fd250u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 860), GPR_U32(ctx, 0));
label_2fd254:
    // 0x2fd254: 0xae600364  sw          $zero, 0x364($s3)
    ctx->pc = 0x2fd254u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 868), GPR_U32(ctx, 0));
label_2fd258:
    // 0x2fd258: 0xae600360  sw          $zero, 0x360($s3)
    ctx->pc = 0x2fd258u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 864), GPR_U32(ctx, 0));
label_2fd25c:
    // 0x2fd25c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2fd25cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2fd260:
    // 0x2fd260: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fd260u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fd264:
    // 0x2fd264: 0x320f809  jalr        $t9
label_2fd268:
    if (ctx->pc == 0x2FD268u) {
        ctx->pc = 0x2FD268u;
            // 0x2fd268: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD26Cu;
        goto label_2fd26c;
    }
    ctx->pc = 0x2FD264u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FD26Cu);
        ctx->pc = 0x2FD268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD264u;
            // 0x2fd268: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FD26Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FD26Cu; }
            if (ctx->pc != 0x2FD26Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2FD26Cu;
label_2fd26c:
    // 0x2fd26c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fd26cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fd270:
    // 0x2fd270: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x2fd270u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_2fd274:
    // 0x2fd274: 0xc04e748  jal         func_139D20
label_2fd278:
    if (ctx->pc == 0x2FD278u) {
        ctx->pc = 0x2FD278u;
            // 0x2fd278: 0xaf939f7c  sw          $s3, -0x6084($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942588), GPR_U32(ctx, 19));
        ctx->pc = 0x2FD27Cu;
        goto label_2fd27c;
    }
    ctx->pc = 0x2FD274u;
    SET_GPR_U32(ctx, 31, 0x2FD27Cu);
    ctx->pc = 0x2FD278u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD274u;
            // 0x2fd278: 0xaf939f7c  sw          $s3, -0x6084($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942588), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD27Cu; }
        if (ctx->pc != 0x2FD27Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD27Cu; }
        if (ctx->pc != 0x2FD27Cu) { return; }
    }
    ctx->pc = 0x2FD27Cu;
label_2fd27c:
    // 0x2fd27c: 0x24040660  addiu       $a0, $zero, 0x660
    ctx->pc = 0x2fd27cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1632));
label_2fd280:
    // 0x2fd280: 0xc04e638  jal         func_1398E0
label_2fd284:
    if (ctx->pc == 0x2FD284u) {
        ctx->pc = 0x2FD284u;
            // 0x2fd284: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD288u;
        goto label_2fd288;
    }
    ctx->pc = 0x2FD280u;
    SET_GPR_U32(ctx, 31, 0x2FD288u);
    ctx->pc = 0x2FD284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD280u;
            // 0x2fd284: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD288u; }
        if (ctx->pc != 0x2FD288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD288u; }
        if (ctx->pc != 0x2FD288u) { return; }
    }
    ctx->pc = 0x2FD288u;
label_2fd288:
    // 0x2fd288: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_2fd28c:
    if (ctx->pc == 0x2FD28Cu) {
        ctx->pc = 0x2FD28Cu;
            // 0x2fd28c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD290u;
        goto label_2fd290;
    }
    ctx->pc = 0x2FD288u;
    {
        const bool branch_taken_0x2fd288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD28Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD288u;
            // 0x2fd28c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd288) {
            ctx->pc = 0x2FD30Cu;
            goto label_2fd30c;
        }
    }
    ctx->pc = 0x2FD290u;
label_2fd290:
    // 0x2fd290: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2fd290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2fd294:
    // 0x2fd294: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x2fd294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_2fd298:
    // 0x2fd298: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fd298u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fd29c:
    // 0x2fd29c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2fd29cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2fd2a0:
    // 0x2fd2a0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fd2a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fd2a4:
    // 0x2fd2a4: 0x320f809  jalr        $t9
label_2fd2a8:
    if (ctx->pc == 0x2FD2A8u) {
        ctx->pc = 0x2FD2A8u;
            // 0x2fd2a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD2ACu;
        goto label_2fd2ac;
    }
    ctx->pc = 0x2FD2A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FD2ACu);
        ctx->pc = 0x2FD2A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD2A4u;
            // 0x2fd2a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FD2ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FD2ACu; }
            if (ctx->pc != 0x2FD2ACu) { return; }
        }
        }
    }
    ctx->pc = 0x2FD2ACu;
label_2fd2ac:
    // 0x2fd2ac: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2fd2acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2fd2b0:
    // 0x2fd2b0: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x2fd2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_2fd2b4:
    // 0x2fd2b4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fd2b4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fd2b8:
    // 0x2fd2b8: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2fd2b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2fd2bc:
    // 0x2fd2bc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fd2bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fd2c0:
    // 0x2fd2c0: 0x320f809  jalr        $t9
label_2fd2c4:
    if (ctx->pc == 0x2FD2C4u) {
        ctx->pc = 0x2FD2C4u;
            // 0x2fd2c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD2C8u;
        goto label_2fd2c8;
    }
    ctx->pc = 0x2FD2C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FD2C8u);
        ctx->pc = 0x2FD2C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD2C0u;
            // 0x2fd2c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FD2C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FD2C8u; }
            if (ctx->pc != 0x2FD2C8u) { return; }
        }
        }
    }
    ctx->pc = 0x2FD2C8u;
label_2fd2c8:
    // 0x2fd2c8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2fd2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2fd2cc:
    // 0x2fd2cc: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x2fd2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_2fd2d0:
    // 0x2fd2d0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fd2d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fd2d4:
    // 0x2fd2d4: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2fd2d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2fd2d8:
    // 0x2fd2d8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fd2d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fd2dc:
    // 0x2fd2dc: 0x320f809  jalr        $t9
label_2fd2e0:
    if (ctx->pc == 0x2FD2E0u) {
        ctx->pc = 0x2FD2E0u;
            // 0x2fd2e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD2E4u;
        goto label_2fd2e4;
    }
    ctx->pc = 0x2FD2DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FD2E4u);
        ctx->pc = 0x2FD2E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD2DCu;
            // 0x2fd2e0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FD2E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FD2E4u; }
            if (ctx->pc != 0x2FD2E4u) { return; }
        }
        }
    }
    ctx->pc = 0x2FD2E4u;
label_2fd2e4:
    // 0x2fd2e4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2fd2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2fd2e8:
    // 0x2fd2e8: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x2fd2e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_2fd2ec:
    // 0x2fd2ec: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fd2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fd2f0:
    // 0x2fd2f0: 0xae60035c  sw          $zero, 0x35C($s3)
    ctx->pc = 0x2fd2f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 860), GPR_U32(ctx, 0));
label_2fd2f4:
    // 0x2fd2f4: 0xae600364  sw          $zero, 0x364($s3)
    ctx->pc = 0x2fd2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 868), GPR_U32(ctx, 0));
label_2fd2f8:
    // 0x2fd2f8: 0xae600360  sw          $zero, 0x360($s3)
    ctx->pc = 0x2fd2f8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 864), GPR_U32(ctx, 0));
label_2fd2fc:
    // 0x2fd2fc: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2fd2fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2fd300:
    // 0x2fd300: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fd300u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fd304:
    // 0x2fd304: 0x320f809  jalr        $t9
label_2fd308:
    if (ctx->pc == 0x2FD308u) {
        ctx->pc = 0x2FD308u;
            // 0x2fd308: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD30Cu;
        goto label_2fd30c;
    }
    ctx->pc = 0x2FD304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FD30Cu);
        ctx->pc = 0x2FD308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD304u;
            // 0x2fd308: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FD30Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FD30Cu; }
            if (ctx->pc != 0x2FD30Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2FD30Cu;
label_2fd30c:
    // 0x2fd30c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fd30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fd310:
    // 0x2fd310: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x2fd310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_2fd314:
    // 0x2fd314: 0xc04e748  jal         func_139D20
label_2fd318:
    if (ctx->pc == 0x2FD318u) {
        ctx->pc = 0x2FD318u;
            // 0x2fd318: 0xaf939f80  sw          $s3, -0x6080($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942592), GPR_U32(ctx, 19));
        ctx->pc = 0x2FD31Cu;
        goto label_2fd31c;
    }
    ctx->pc = 0x2FD314u;
    SET_GPR_U32(ctx, 31, 0x2FD31Cu);
    ctx->pc = 0x2FD318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD314u;
            // 0x2fd318: 0xaf939f80  sw          $s3, -0x6080($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942592), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD31Cu; }
        if (ctx->pc != 0x2FD31Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD31Cu; }
        if (ctx->pc != 0x2FD31Cu) { return; }
    }
    ctx->pc = 0x2FD31Cu;
label_2fd31c:
    // 0x2fd31c: 0x24040660  addiu       $a0, $zero, 0x660
    ctx->pc = 0x2fd31cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1632));
label_2fd320:
    // 0x2fd320: 0xc04e638  jal         func_1398E0
label_2fd324:
    if (ctx->pc == 0x2FD324u) {
        ctx->pc = 0x2FD324u;
            // 0x2fd324: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD328u;
        goto label_2fd328;
    }
    ctx->pc = 0x2FD320u;
    SET_GPR_U32(ctx, 31, 0x2FD328u);
    ctx->pc = 0x2FD324u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD320u;
            // 0x2fd324: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD328u; }
        if (ctx->pc != 0x2FD328u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD328u; }
        if (ctx->pc != 0x2FD328u) { return; }
    }
    ctx->pc = 0x2FD328u;
label_2fd328:
    // 0x2fd328: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_2fd32c:
    if (ctx->pc == 0x2FD32Cu) {
        ctx->pc = 0x2FD32Cu;
            // 0x2fd32c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD330u;
        goto label_2fd330;
    }
    ctx->pc = 0x2FD328u;
    {
        const bool branch_taken_0x2fd328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD328u;
            // 0x2fd32c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd328) {
            ctx->pc = 0x2FD3ACu;
            goto label_2fd3ac;
        }
    }
    ctx->pc = 0x2FD330u;
label_2fd330:
    // 0x2fd330: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2fd330u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2fd334:
    // 0x2fd334: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x2fd334u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_2fd338:
    // 0x2fd338: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fd338u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fd33c:
    // 0x2fd33c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2fd33cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2fd340:
    // 0x2fd340: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fd340u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fd344:
    // 0x2fd344: 0x320f809  jalr        $t9
label_2fd348:
    if (ctx->pc == 0x2FD348u) {
        ctx->pc = 0x2FD348u;
            // 0x2fd348: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD34Cu;
        goto label_2fd34c;
    }
    ctx->pc = 0x2FD344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FD34Cu);
        ctx->pc = 0x2FD348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD344u;
            // 0x2fd348: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FD34Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FD34Cu; }
            if (ctx->pc != 0x2FD34Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2FD34Cu;
label_2fd34c:
    // 0x2fd34c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2fd34cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2fd350:
    // 0x2fd350: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x2fd350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_2fd354:
    // 0x2fd354: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fd354u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fd358:
    // 0x2fd358: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2fd358u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2fd35c:
    // 0x2fd35c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fd35cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fd360:
    // 0x2fd360: 0x320f809  jalr        $t9
label_2fd364:
    if (ctx->pc == 0x2FD364u) {
        ctx->pc = 0x2FD364u;
            // 0x2fd364: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD368u;
        goto label_2fd368;
    }
    ctx->pc = 0x2FD360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FD368u);
        ctx->pc = 0x2FD364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD360u;
            // 0x2fd364: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FD368u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FD368u; }
            if (ctx->pc != 0x2FD368u) { return; }
        }
        }
    }
    ctx->pc = 0x2FD368u;
label_2fd368:
    // 0x2fd368: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2fd368u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2fd36c:
    // 0x2fd36c: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x2fd36cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_2fd370:
    // 0x2fd370: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fd370u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fd374:
    // 0x2fd374: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2fd374u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2fd378:
    // 0x2fd378: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fd378u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fd37c:
    // 0x2fd37c: 0x320f809  jalr        $t9
label_2fd380:
    if (ctx->pc == 0x2FD380u) {
        ctx->pc = 0x2FD380u;
            // 0x2fd380: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD384u;
        goto label_2fd384;
    }
    ctx->pc = 0x2FD37Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FD384u);
        ctx->pc = 0x2FD380u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD37Cu;
            // 0x2fd380: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FD384u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FD384u; }
            if (ctx->pc != 0x2FD384u) { return; }
        }
        }
    }
    ctx->pc = 0x2FD384u;
label_2fd384:
    // 0x2fd384: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2fd384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2fd388:
    // 0x2fd388: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x2fd388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_2fd38c:
    // 0x2fd38c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fd38cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fd390:
    // 0x2fd390: 0xae60035c  sw          $zero, 0x35C($s3)
    ctx->pc = 0x2fd390u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 860), GPR_U32(ctx, 0));
label_2fd394:
    // 0x2fd394: 0xae600364  sw          $zero, 0x364($s3)
    ctx->pc = 0x2fd394u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 868), GPR_U32(ctx, 0));
label_2fd398:
    // 0x2fd398: 0xae600360  sw          $zero, 0x360($s3)
    ctx->pc = 0x2fd398u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 864), GPR_U32(ctx, 0));
label_2fd39c:
    // 0x2fd39c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2fd39cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2fd3a0:
    // 0x2fd3a0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fd3a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fd3a4:
    // 0x2fd3a4: 0x320f809  jalr        $t9
label_2fd3a8:
    if (ctx->pc == 0x2FD3A8u) {
        ctx->pc = 0x2FD3A8u;
            // 0x2fd3a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD3ACu;
        goto label_2fd3ac;
    }
    ctx->pc = 0x2FD3A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FD3ACu);
        ctx->pc = 0x2FD3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD3A4u;
            // 0x2fd3a8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FD3ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FD3ACu; }
            if (ctx->pc != 0x2FD3ACu) { return; }
        }
        }
    }
    ctx->pc = 0x2FD3ACu;
label_2fd3ac:
    // 0x2fd3ac: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fd3acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fd3b0:
    // 0x2fd3b0: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x2fd3b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_2fd3b4:
    // 0x2fd3b4: 0xc04e748  jal         func_139D20
label_2fd3b8:
    if (ctx->pc == 0x2FD3B8u) {
        ctx->pc = 0x2FD3B8u;
            // 0x2fd3b8: 0xaf939f84  sw          $s3, -0x607C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942596), GPR_U32(ctx, 19));
        ctx->pc = 0x2FD3BCu;
        goto label_2fd3bc;
    }
    ctx->pc = 0x2FD3B4u;
    SET_GPR_U32(ctx, 31, 0x2FD3BCu);
    ctx->pc = 0x2FD3B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD3B4u;
            // 0x2fd3b8: 0xaf939f84  sw          $s3, -0x607C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942596), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD3BCu; }
        if (ctx->pc != 0x2FD3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD3BCu; }
        if (ctx->pc != 0x2FD3BCu) { return; }
    }
    ctx->pc = 0x2FD3BCu;
label_2fd3bc:
    // 0x2fd3bc: 0x24040660  addiu       $a0, $zero, 0x660
    ctx->pc = 0x2fd3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1632));
label_2fd3c0:
    // 0x2fd3c0: 0xc04e638  jal         func_1398E0
label_2fd3c4:
    if (ctx->pc == 0x2FD3C4u) {
        ctx->pc = 0x2FD3C4u;
            // 0x2fd3c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD3C8u;
        goto label_2fd3c8;
    }
    ctx->pc = 0x2FD3C0u;
    SET_GPR_U32(ctx, 31, 0x2FD3C8u);
    ctx->pc = 0x2FD3C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD3C0u;
            // 0x2fd3c4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD3C8u; }
        if (ctx->pc != 0x2FD3C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD3C8u; }
        if (ctx->pc != 0x2FD3C8u) { return; }
    }
    ctx->pc = 0x2FD3C8u;
label_2fd3c8:
    // 0x2fd3c8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_2fd3cc:
    if (ctx->pc == 0x2FD3CCu) {
        ctx->pc = 0x2FD3CCu;
            // 0x2fd3cc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD3D0u;
        goto label_2fd3d0;
    }
    ctx->pc = 0x2FD3C8u;
    {
        const bool branch_taken_0x2fd3c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD3CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD3C8u;
            // 0x2fd3cc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd3c8) {
            ctx->pc = 0x2FD44Cu;
            goto label_2fd44c;
        }
    }
    ctx->pc = 0x2FD3D0u;
label_2fd3d0:
    // 0x2fd3d0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2fd3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2fd3d4:
    // 0x2fd3d4: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x2fd3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_2fd3d8:
    // 0x2fd3d8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fd3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fd3dc:
    // 0x2fd3dc: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2fd3dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2fd3e0:
    // 0x2fd3e0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fd3e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fd3e4:
    // 0x2fd3e4: 0x320f809  jalr        $t9
label_2fd3e8:
    if (ctx->pc == 0x2FD3E8u) {
        ctx->pc = 0x2FD3E8u;
            // 0x2fd3e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD3ECu;
        goto label_2fd3ec;
    }
    ctx->pc = 0x2FD3E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FD3ECu);
        ctx->pc = 0x2FD3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD3E4u;
            // 0x2fd3e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FD3ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FD3ECu; }
            if (ctx->pc != 0x2FD3ECu) { return; }
        }
        }
    }
    ctx->pc = 0x2FD3ECu;
label_2fd3ec:
    // 0x2fd3ec: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2fd3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2fd3f0:
    // 0x2fd3f0: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x2fd3f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_2fd3f4:
    // 0x2fd3f4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fd3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fd3f8:
    // 0x2fd3f8: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2fd3f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2fd3fc:
    // 0x2fd3fc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fd3fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fd400:
    // 0x2fd400: 0x320f809  jalr        $t9
label_2fd404:
    if (ctx->pc == 0x2FD404u) {
        ctx->pc = 0x2FD404u;
            // 0x2fd404: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD408u;
        goto label_2fd408;
    }
    ctx->pc = 0x2FD400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FD408u);
        ctx->pc = 0x2FD404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD400u;
            // 0x2fd404: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FD408u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FD408u; }
            if (ctx->pc != 0x2FD408u) { return; }
        }
        }
    }
    ctx->pc = 0x2FD408u;
label_2fd408:
    // 0x2fd408: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2fd408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2fd40c:
    // 0x2fd40c: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x2fd40cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_2fd410:
    // 0x2fd410: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fd410u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fd414:
    // 0x2fd414: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2fd414u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2fd418:
    // 0x2fd418: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fd418u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fd41c:
    // 0x2fd41c: 0x320f809  jalr        $t9
label_2fd420:
    if (ctx->pc == 0x2FD420u) {
        ctx->pc = 0x2FD420u;
            // 0x2fd420: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD424u;
        goto label_2fd424;
    }
    ctx->pc = 0x2FD41Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FD424u);
        ctx->pc = 0x2FD420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD41Cu;
            // 0x2fd420: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FD424u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FD424u; }
            if (ctx->pc != 0x2FD424u) { return; }
        }
        }
    }
    ctx->pc = 0x2FD424u;
label_2fd424:
    // 0x2fd424: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2fd424u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2fd428:
    // 0x2fd428: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x2fd428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_2fd42c:
    // 0x2fd42c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fd42cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fd430:
    // 0x2fd430: 0xae60035c  sw          $zero, 0x35C($s3)
    ctx->pc = 0x2fd430u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 860), GPR_U32(ctx, 0));
label_2fd434:
    // 0x2fd434: 0xae600364  sw          $zero, 0x364($s3)
    ctx->pc = 0x2fd434u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 868), GPR_U32(ctx, 0));
label_2fd438:
    // 0x2fd438: 0xae600360  sw          $zero, 0x360($s3)
    ctx->pc = 0x2fd438u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 864), GPR_U32(ctx, 0));
label_2fd43c:
    // 0x2fd43c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2fd43cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2fd440:
    // 0x2fd440: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fd440u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fd444:
    // 0x2fd444: 0x320f809  jalr        $t9
label_2fd448:
    if (ctx->pc == 0x2FD448u) {
        ctx->pc = 0x2FD448u;
            // 0x2fd448: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD44Cu;
        goto label_2fd44c;
    }
    ctx->pc = 0x2FD444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FD44Cu);
        ctx->pc = 0x2FD448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD444u;
            // 0x2fd448: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FD44Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FD44Cu; }
            if (ctx->pc != 0x2FD44Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2FD44Cu;
label_2fd44c:
    // 0x2fd44c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fd44cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fd450:
    // 0x2fd450: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x2fd450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_2fd454:
    // 0x2fd454: 0xc04e748  jal         func_139D20
label_2fd458:
    if (ctx->pc == 0x2FD458u) {
        ctx->pc = 0x2FD458u;
            // 0x2fd458: 0xaf939f88  sw          $s3, -0x6078($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942600), GPR_U32(ctx, 19));
        ctx->pc = 0x2FD45Cu;
        goto label_2fd45c;
    }
    ctx->pc = 0x2FD454u;
    SET_GPR_U32(ctx, 31, 0x2FD45Cu);
    ctx->pc = 0x2FD458u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD454u;
            // 0x2fd458: 0xaf939f88  sw          $s3, -0x6078($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942600), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD45Cu; }
        if (ctx->pc != 0x2FD45Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD45Cu; }
        if (ctx->pc != 0x2FD45Cu) { return; }
    }
    ctx->pc = 0x2FD45Cu;
label_2fd45c:
    // 0x2fd45c: 0x24040660  addiu       $a0, $zero, 0x660
    ctx->pc = 0x2fd45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1632));
label_2fd460:
    // 0x2fd460: 0xc04e638  jal         func_1398E0
label_2fd464:
    if (ctx->pc == 0x2FD464u) {
        ctx->pc = 0x2FD464u;
            // 0x2fd464: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD468u;
        goto label_2fd468;
    }
    ctx->pc = 0x2FD460u;
    SET_GPR_U32(ctx, 31, 0x2FD468u);
    ctx->pc = 0x2FD464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD460u;
            // 0x2fd464: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD468u; }
        if (ctx->pc != 0x2FD468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD468u; }
        if (ctx->pc != 0x2FD468u) { return; }
    }
    ctx->pc = 0x2FD468u;
label_2fd468:
    // 0x2fd468: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_2fd46c:
    if (ctx->pc == 0x2FD46Cu) {
        ctx->pc = 0x2FD46Cu;
            // 0x2fd46c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD470u;
        goto label_2fd470;
    }
    ctx->pc = 0x2FD468u;
    {
        const bool branch_taken_0x2fd468 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD46Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD468u;
            // 0x2fd46c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd468) {
            ctx->pc = 0x2FD4ECu;
            goto label_2fd4ec;
        }
    }
    ctx->pc = 0x2FD470u;
label_2fd470:
    // 0x2fd470: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2fd470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2fd474:
    // 0x2fd474: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x2fd474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_2fd478:
    // 0x2fd478: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fd478u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fd47c:
    // 0x2fd47c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2fd47cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2fd480:
    // 0x2fd480: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fd480u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fd484:
    // 0x2fd484: 0x320f809  jalr        $t9
label_2fd488:
    if (ctx->pc == 0x2FD488u) {
        ctx->pc = 0x2FD488u;
            // 0x2fd488: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD48Cu;
        goto label_2fd48c;
    }
    ctx->pc = 0x2FD484u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FD48Cu);
        ctx->pc = 0x2FD488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD484u;
            // 0x2fd488: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FD48Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FD48Cu; }
            if (ctx->pc != 0x2FD48Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2FD48Cu;
label_2fd48c:
    // 0x2fd48c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2fd48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2fd490:
    // 0x2fd490: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x2fd490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_2fd494:
    // 0x2fd494: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fd494u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fd498:
    // 0x2fd498: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2fd498u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2fd49c:
    // 0x2fd49c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fd49cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fd4a0:
    // 0x2fd4a0: 0x320f809  jalr        $t9
label_2fd4a4:
    if (ctx->pc == 0x2FD4A4u) {
        ctx->pc = 0x2FD4A4u;
            // 0x2fd4a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD4A8u;
        goto label_2fd4a8;
    }
    ctx->pc = 0x2FD4A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FD4A8u);
        ctx->pc = 0x2FD4A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD4A0u;
            // 0x2fd4a4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FD4A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FD4A8u; }
            if (ctx->pc != 0x2FD4A8u) { return; }
        }
        }
    }
    ctx->pc = 0x2FD4A8u;
label_2fd4a8:
    // 0x2fd4a8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2fd4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2fd4ac:
    // 0x2fd4ac: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x2fd4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_2fd4b0:
    // 0x2fd4b0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fd4b0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fd4b4:
    // 0x2fd4b4: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2fd4b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2fd4b8:
    // 0x2fd4b8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fd4b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fd4bc:
    // 0x2fd4bc: 0x320f809  jalr        $t9
label_2fd4c0:
    if (ctx->pc == 0x2FD4C0u) {
        ctx->pc = 0x2FD4C0u;
            // 0x2fd4c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD4C4u;
        goto label_2fd4c4;
    }
    ctx->pc = 0x2FD4BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FD4C4u);
        ctx->pc = 0x2FD4C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD4BCu;
            // 0x2fd4c0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FD4C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FD4C4u; }
            if (ctx->pc != 0x2FD4C4u) { return; }
        }
        }
    }
    ctx->pc = 0x2FD4C4u;
label_2fd4c4:
    // 0x2fd4c4: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2fd4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2fd4c8:
    // 0x2fd4c8: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x2fd4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_2fd4cc:
    // 0x2fd4cc: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fd4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fd4d0:
    // 0x2fd4d0: 0xae60035c  sw          $zero, 0x35C($s3)
    ctx->pc = 0x2fd4d0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 860), GPR_U32(ctx, 0));
label_2fd4d4:
    // 0x2fd4d4: 0xae600364  sw          $zero, 0x364($s3)
    ctx->pc = 0x2fd4d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 868), GPR_U32(ctx, 0));
label_2fd4d8:
    // 0x2fd4d8: 0xae600360  sw          $zero, 0x360($s3)
    ctx->pc = 0x2fd4d8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 864), GPR_U32(ctx, 0));
label_2fd4dc:
    // 0x2fd4dc: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2fd4dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2fd4e0:
    // 0x2fd4e0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fd4e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fd4e4:
    // 0x2fd4e4: 0x320f809  jalr        $t9
label_2fd4e8:
    if (ctx->pc == 0x2FD4E8u) {
        ctx->pc = 0x2FD4E8u;
            // 0x2fd4e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD4ECu;
        goto label_2fd4ec;
    }
    ctx->pc = 0x2FD4E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FD4ECu);
        ctx->pc = 0x2FD4E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD4E4u;
            // 0x2fd4e8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FD4ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FD4ECu; }
            if (ctx->pc != 0x2FD4ECu) { return; }
        }
        }
    }
    ctx->pc = 0x2FD4ECu;
label_2fd4ec:
    // 0x2fd4ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fd4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fd4f0:
    // 0x2fd4f0: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x2fd4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_2fd4f4:
    // 0x2fd4f4: 0xc04e748  jal         func_139D20
label_2fd4f8:
    if (ctx->pc == 0x2FD4F8u) {
        ctx->pc = 0x2FD4F8u;
            // 0x2fd4f8: 0xaf939f8c  sw          $s3, -0x6074($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942604), GPR_U32(ctx, 19));
        ctx->pc = 0x2FD4FCu;
        goto label_2fd4fc;
    }
    ctx->pc = 0x2FD4F4u;
    SET_GPR_U32(ctx, 31, 0x2FD4FCu);
    ctx->pc = 0x2FD4F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD4F4u;
            // 0x2fd4f8: 0xaf939f8c  sw          $s3, -0x6074($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942604), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD4FCu; }
        if (ctx->pc != 0x2FD4FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD4FCu; }
        if (ctx->pc != 0x2FD4FCu) { return; }
    }
    ctx->pc = 0x2FD4FCu;
label_2fd4fc:
    // 0x2fd4fc: 0x24040660  addiu       $a0, $zero, 0x660
    ctx->pc = 0x2fd4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1632));
label_2fd500:
    // 0x2fd500: 0xc04e638  jal         func_1398E0
label_2fd504:
    if (ctx->pc == 0x2FD504u) {
        ctx->pc = 0x2FD504u;
            // 0x2fd504: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD508u;
        goto label_2fd508;
    }
    ctx->pc = 0x2FD500u;
    SET_GPR_U32(ctx, 31, 0x2FD508u);
    ctx->pc = 0x2FD504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD500u;
            // 0x2fd504: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD508u; }
        if (ctx->pc != 0x2FD508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD508u; }
        if (ctx->pc != 0x2FD508u) { return; }
    }
    ctx->pc = 0x2FD508u;
label_2fd508:
    // 0x2fd508: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_2fd50c:
    if (ctx->pc == 0x2FD50Cu) {
        ctx->pc = 0x2FD50Cu;
            // 0x2fd50c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD510u;
        goto label_2fd510;
    }
    ctx->pc = 0x2FD508u;
    {
        const bool branch_taken_0x2fd508 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD508u;
            // 0x2fd50c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd508) {
            ctx->pc = 0x2FD58Cu;
            goto label_2fd58c;
        }
    }
    ctx->pc = 0x2FD510u;
label_2fd510:
    // 0x2fd510: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2fd510u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2fd514:
    // 0x2fd514: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x2fd514u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_2fd518:
    // 0x2fd518: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fd518u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fd51c:
    // 0x2fd51c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2fd51cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2fd520:
    // 0x2fd520: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fd520u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fd524:
    // 0x2fd524: 0x320f809  jalr        $t9
label_2fd528:
    if (ctx->pc == 0x2FD528u) {
        ctx->pc = 0x2FD528u;
            // 0x2fd528: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD52Cu;
        goto label_2fd52c;
    }
    ctx->pc = 0x2FD524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FD52Cu);
        ctx->pc = 0x2FD528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD524u;
            // 0x2fd528: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FD52Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FD52Cu; }
            if (ctx->pc != 0x2FD52Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2FD52Cu;
label_2fd52c:
    // 0x2fd52c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2fd52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2fd530:
    // 0x2fd530: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x2fd530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_2fd534:
    // 0x2fd534: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fd534u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fd538:
    // 0x2fd538: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2fd538u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2fd53c:
    // 0x2fd53c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fd53cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fd540:
    // 0x2fd540: 0x320f809  jalr        $t9
label_2fd544:
    if (ctx->pc == 0x2FD544u) {
        ctx->pc = 0x2FD544u;
            // 0x2fd544: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD548u;
        goto label_2fd548;
    }
    ctx->pc = 0x2FD540u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FD548u);
        ctx->pc = 0x2FD544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD540u;
            // 0x2fd544: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FD548u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FD548u; }
            if (ctx->pc != 0x2FD548u) { return; }
        }
        }
    }
    ctx->pc = 0x2FD548u;
label_2fd548:
    // 0x2fd548: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2fd548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2fd54c:
    // 0x2fd54c: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x2fd54cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_2fd550:
    // 0x2fd550: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fd550u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fd554:
    // 0x2fd554: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2fd554u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2fd558:
    // 0x2fd558: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fd558u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fd55c:
    // 0x2fd55c: 0x320f809  jalr        $t9
label_2fd560:
    if (ctx->pc == 0x2FD560u) {
        ctx->pc = 0x2FD560u;
            // 0x2fd560: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD564u;
        goto label_2fd564;
    }
    ctx->pc = 0x2FD55Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FD564u);
        ctx->pc = 0x2FD560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD55Cu;
            // 0x2fd560: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FD564u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FD564u; }
            if (ctx->pc != 0x2FD564u) { return; }
        }
        }
    }
    ctx->pc = 0x2FD564u;
label_2fd564:
    // 0x2fd564: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2fd564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2fd568:
    // 0x2fd568: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x2fd568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_2fd56c:
    // 0x2fd56c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fd56cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fd570:
    // 0x2fd570: 0xae60035c  sw          $zero, 0x35C($s3)
    ctx->pc = 0x2fd570u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 860), GPR_U32(ctx, 0));
label_2fd574:
    // 0x2fd574: 0xae600364  sw          $zero, 0x364($s3)
    ctx->pc = 0x2fd574u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 868), GPR_U32(ctx, 0));
label_2fd578:
    // 0x2fd578: 0xae600360  sw          $zero, 0x360($s3)
    ctx->pc = 0x2fd578u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 864), GPR_U32(ctx, 0));
label_2fd57c:
    // 0x2fd57c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2fd57cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2fd580:
    // 0x2fd580: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fd580u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fd584:
    // 0x2fd584: 0x320f809  jalr        $t9
label_2fd588:
    if (ctx->pc == 0x2FD588u) {
        ctx->pc = 0x2FD588u;
            // 0x2fd588: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD58Cu;
        goto label_2fd58c;
    }
    ctx->pc = 0x2FD584u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FD58Cu);
        ctx->pc = 0x2FD588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD584u;
            // 0x2fd588: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FD58Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FD58Cu; }
            if (ctx->pc != 0x2FD58Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2FD58Cu;
label_2fd58c:
    // 0x2fd58c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fd58cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fd590:
    // 0x2fd590: 0x24050068  addiu       $a1, $zero, 0x68
    ctx->pc = 0x2fd590u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_2fd594:
    // 0x2fd594: 0xc04e748  jal         func_139D20
label_2fd598:
    if (ctx->pc == 0x2FD598u) {
        ctx->pc = 0x2FD598u;
            // 0x2fd598: 0xaf939fb0  sw          $s3, -0x6050($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942640), GPR_U32(ctx, 19));
        ctx->pc = 0x2FD59Cu;
        goto label_2fd59c;
    }
    ctx->pc = 0x2FD594u;
    SET_GPR_U32(ctx, 31, 0x2FD59Cu);
    ctx->pc = 0x2FD598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD594u;
            // 0x2fd598: 0xaf939fb0  sw          $s3, -0x6050($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942640), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD59Cu; }
        if (ctx->pc != 0x2FD59Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD59Cu; }
        if (ctx->pc != 0x2FD59Cu) { return; }
    }
    ctx->pc = 0x2FD59Cu;
label_2fd59c:
    // 0x2fd59c: 0x24040660  addiu       $a0, $zero, 0x660
    ctx->pc = 0x2fd59cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1632));
label_2fd5a0:
    // 0x2fd5a0: 0xc04e638  jal         func_1398E0
label_2fd5a4:
    if (ctx->pc == 0x2FD5A4u) {
        ctx->pc = 0x2FD5A4u;
            // 0x2fd5a4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD5A8u;
        goto label_2fd5a8;
    }
    ctx->pc = 0x2FD5A0u;
    SET_GPR_U32(ctx, 31, 0x2FD5A8u);
    ctx->pc = 0x2FD5A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD5A0u;
            // 0x2fd5a4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD5A8u; }
        if (ctx->pc != 0x2FD5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD5A8u; }
        if (ctx->pc != 0x2FD5A8u) { return; }
    }
    ctx->pc = 0x2FD5A8u;
label_2fd5a8:
    // 0x2fd5a8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_2fd5ac:
    if (ctx->pc == 0x2FD5ACu) {
        ctx->pc = 0x2FD5ACu;
            // 0x2fd5ac: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD5B0u;
        goto label_2fd5b0;
    }
    ctx->pc = 0x2FD5A8u;
    {
        const bool branch_taken_0x2fd5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD5A8u;
            // 0x2fd5ac: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd5a8) {
            ctx->pc = 0x2FD62Cu;
            goto label_2fd62c;
        }
    }
    ctx->pc = 0x2FD5B0u;
label_2fd5b0:
    // 0x2fd5b0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2fd5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2fd5b4:
    // 0x2fd5b4: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x2fd5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_2fd5b8:
    // 0x2fd5b8: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fd5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fd5bc:
    // 0x2fd5bc: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2fd5bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2fd5c0:
    // 0x2fd5c0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fd5c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fd5c4:
    // 0x2fd5c4: 0x320f809  jalr        $t9
label_2fd5c8:
    if (ctx->pc == 0x2FD5C8u) {
        ctx->pc = 0x2FD5C8u;
            // 0x2fd5c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD5CCu;
        goto label_2fd5cc;
    }
    ctx->pc = 0x2FD5C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FD5CCu);
        ctx->pc = 0x2FD5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD5C4u;
            // 0x2fd5c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FD5CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FD5CCu; }
            if (ctx->pc != 0x2FD5CCu) { return; }
        }
        }
    }
    ctx->pc = 0x2FD5CCu;
label_2fd5cc:
    // 0x2fd5cc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2fd5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2fd5d0:
    // 0x2fd5d0: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x2fd5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_2fd5d4:
    // 0x2fd5d4: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fd5d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fd5d8:
    // 0x2fd5d8: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2fd5d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2fd5dc:
    // 0x2fd5dc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fd5dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fd5e0:
    // 0x2fd5e0: 0x320f809  jalr        $t9
label_2fd5e4:
    if (ctx->pc == 0x2FD5E4u) {
        ctx->pc = 0x2FD5E4u;
            // 0x2fd5e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD5E8u;
        goto label_2fd5e8;
    }
    ctx->pc = 0x2FD5E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FD5E8u);
        ctx->pc = 0x2FD5E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD5E0u;
            // 0x2fd5e4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FD5E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FD5E8u; }
            if (ctx->pc != 0x2FD5E8u) { return; }
        }
        }
    }
    ctx->pc = 0x2FD5E8u;
label_2fd5e8:
    // 0x2fd5e8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2fd5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2fd5ec:
    // 0x2fd5ec: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x2fd5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_2fd5f0:
    // 0x2fd5f0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fd5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fd5f4:
    // 0x2fd5f4: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2fd5f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2fd5f8:
    // 0x2fd5f8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fd5f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fd5fc:
    // 0x2fd5fc: 0x320f809  jalr        $t9
label_2fd600:
    if (ctx->pc == 0x2FD600u) {
        ctx->pc = 0x2FD600u;
            // 0x2fd600: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD604u;
        goto label_2fd604;
    }
    ctx->pc = 0x2FD5FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FD604u);
        ctx->pc = 0x2FD600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD5FCu;
            // 0x2fd600: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FD604u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FD604u; }
            if (ctx->pc != 0x2FD604u) { return; }
        }
        }
    }
    ctx->pc = 0x2FD604u;
label_2fd604:
    // 0x2fd604: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x2fd604u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_2fd608:
    // 0x2fd608: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x2fd608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_2fd60c:
    // 0x2fd60c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2fd60cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2fd610:
    // 0x2fd610: 0xae60035c  sw          $zero, 0x35C($s3)
    ctx->pc = 0x2fd610u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 860), GPR_U32(ctx, 0));
label_2fd614:
    // 0x2fd614: 0xae600364  sw          $zero, 0x364($s3)
    ctx->pc = 0x2fd614u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 868), GPR_U32(ctx, 0));
label_2fd618:
    // 0x2fd618: 0xae600360  sw          $zero, 0x360($s3)
    ctx->pc = 0x2fd618u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 864), GPR_U32(ctx, 0));
label_2fd61c:
    // 0x2fd61c: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x2fd61cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_2fd620:
    // 0x2fd620: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fd620u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fd624:
    // 0x2fd624: 0x320f809  jalr        $t9
label_2fd628:
    if (ctx->pc == 0x2FD628u) {
        ctx->pc = 0x2FD628u;
            // 0x2fd628: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD62Cu;
        goto label_2fd62c;
    }
    ctx->pc = 0x2FD624u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FD62Cu);
        ctx->pc = 0x2FD628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD624u;
            // 0x2fd628: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FD62Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FD62Cu; }
            if (ctx->pc != 0x2FD62Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2FD62Cu;
label_2fd62c:
    // 0x2fd62c: 0x8f849f7c  lw          $a0, -0x6084($gp)
    ctx->pc = 0x2fd62cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942588)));
label_2fd630:
    // 0x2fd630: 0xaf939fb4  sw          $s3, -0x604C($gp)
    ctx->pc = 0x2fd630u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942644), GPR_U32(ctx, 19));
label_2fd634:
    // 0x2fd634: 0xaf809fa8  sw          $zero, -0x6058($gp)
    ctx->pc = 0x2fd634u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942632), GPR_U32(ctx, 0));
label_2fd638:
    // 0x2fd638: 0xaf809fa4  sw          $zero, -0x605C($gp)
    ctx->pc = 0x2fd638u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942628), GPR_U32(ctx, 0));
label_2fd63c:
    // 0x2fd63c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fd63cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fd640:
    // 0x2fd640: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fd640u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fd644:
    // 0x2fd644: 0x320f809  jalr        $t9
label_2fd648:
    if (ctx->pc == 0x2FD648u) {
        ctx->pc = 0x2FD64Cu;
        goto label_2fd64c;
    }
    ctx->pc = 0x2FD644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FD64Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FD64Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FD64Cu; }
            if (ctx->pc != 0x2FD64Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2FD64Cu;
label_2fd64c:
    // 0x2fd64c: 0x8f849f80  lw          $a0, -0x6080($gp)
    ctx->pc = 0x2fd64cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942592)));
label_2fd650:
    // 0x2fd650: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fd650u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fd654:
    // 0x2fd654: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fd654u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fd658:
    // 0x2fd658: 0x320f809  jalr        $t9
label_2fd65c:
    if (ctx->pc == 0x2FD65Cu) {
        ctx->pc = 0x2FD660u;
        goto label_2fd660;
    }
    ctx->pc = 0x2FD658u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FD660u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FD660u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FD660u; }
            if (ctx->pc != 0x2FD660u) { return; }
        }
        }
    }
    ctx->pc = 0x2FD660u;
label_2fd660:
    // 0x2fd660: 0x8f849f84  lw          $a0, -0x607C($gp)
    ctx->pc = 0x2fd660u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942596)));
label_2fd664:
    // 0x2fd664: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fd664u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fd668:
    // 0x2fd668: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fd668u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fd66c:
    // 0x2fd66c: 0x320f809  jalr        $t9
label_2fd670:
    if (ctx->pc == 0x2FD670u) {
        ctx->pc = 0x2FD674u;
        goto label_2fd674;
    }
    ctx->pc = 0x2FD66Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FD674u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FD674u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FD674u; }
            if (ctx->pc != 0x2FD674u) { return; }
        }
        }
    }
    ctx->pc = 0x2FD674u;
label_2fd674:
    // 0x2fd674: 0x8f849f88  lw          $a0, -0x6078($gp)
    ctx->pc = 0x2fd674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942600)));
label_2fd678:
    // 0x2fd678: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fd678u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fd67c:
    // 0x2fd67c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fd67cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fd680:
    // 0x2fd680: 0x320f809  jalr        $t9
label_2fd684:
    if (ctx->pc == 0x2FD684u) {
        ctx->pc = 0x2FD688u;
        goto label_2fd688;
    }
    ctx->pc = 0x2FD680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FD688u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FD688u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FD688u; }
            if (ctx->pc != 0x2FD688u) { return; }
        }
        }
    }
    ctx->pc = 0x2FD688u;
label_2fd688:
    // 0x2fd688: 0x8f849f8c  lw          $a0, -0x6074($gp)
    ctx->pc = 0x2fd688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942604)));
label_2fd68c:
    // 0x2fd68c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fd68cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fd690:
    // 0x2fd690: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fd690u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fd694:
    // 0x2fd694: 0x320f809  jalr        $t9
label_2fd698:
    if (ctx->pc == 0x2FD698u) {
        ctx->pc = 0x2FD69Cu;
        goto label_2fd69c;
    }
    ctx->pc = 0x2FD694u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FD69Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FD69Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FD69Cu; }
            if (ctx->pc != 0x2FD69Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2FD69Cu;
label_2fd69c:
    // 0x2fd69c: 0x8f849fb0  lw          $a0, -0x6050($gp)
    ctx->pc = 0x2fd69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942640)));
label_2fd6a0:
    // 0x2fd6a0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fd6a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fd6a4:
    // 0x2fd6a4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fd6a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fd6a8:
    // 0x2fd6a8: 0x320f809  jalr        $t9
label_2fd6ac:
    if (ctx->pc == 0x2FD6ACu) {
        ctx->pc = 0x2FD6B0u;
        goto label_2fd6b0;
    }
    ctx->pc = 0x2FD6A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FD6B0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FD6B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FD6B0u; }
            if (ctx->pc != 0x2FD6B0u) { return; }
        }
        }
    }
    ctx->pc = 0x2FD6B0u;
label_2fd6b0:
    // 0x2fd6b0: 0x8f849fb4  lw          $a0, -0x604C($gp)
    ctx->pc = 0x2fd6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942644)));
label_2fd6b4:
    // 0x2fd6b4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fd6b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fd6b8:
    // 0x2fd6b8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x2fd6b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_2fd6bc:
    // 0x2fd6bc: 0x320f809  jalr        $t9
label_2fd6c0:
    if (ctx->pc == 0x2FD6C0u) {
        ctx->pc = 0x2FD6C4u;
        goto label_2fd6c4;
    }
    ctx->pc = 0x2FD6BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FD6C4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FD6C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FD6C4u; }
            if (ctx->pc != 0x2FD6C4u) { return; }
        }
        }
    }
    ctx->pc = 0x2FD6C4u;
label_2fd6c4:
    // 0x2fd6c4: 0xc05231c  jal         func_148C70
label_2fd6c8:
    if (ctx->pc == 0x2FD6C8u) {
        ctx->pc = 0x2FD6C8u;
            // 0x2fd6c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD6CCu;
        goto label_2fd6cc;
    }
    ctx->pc = 0x2FD6C4u;
    SET_GPR_U32(ctx, 31, 0x2FD6CCu);
    ctx->pc = 0x2FD6C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD6C4u;
            // 0x2fd6c8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148C70u;
    if (runtime->hasFunction(0x148C70u)) {
        auto targetFn = runtime->lookupFunction(0x148C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD6CCu; }
        if (ctx->pc != 0x2FD6CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetReadBGFile__Fi_0x148c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD6CCu; }
        if (ctx->pc != 0x2FD6CCu) { return; }
    }
    ctx->pc = 0x2FD6CCu;
label_2fd6cc:
    // 0x2fd6cc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2fd6d0:
    if (ctx->pc == 0x2FD6D0u) {
        ctx->pc = 0x2FD6D0u;
            // 0x2fd6d0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2FD6D4u;
        goto label_2fd6d4;
    }
    ctx->pc = 0x2FD6CCu;
    {
        const bool branch_taken_0x2fd6cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD6D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD6CCu;
            // 0x2fd6d0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd6cc) {
            ctx->pc = 0x2FD6DCu;
            goto label_2fd6dc;
        }
    }
    ctx->pc = 0x2FD6D4u;
label_2fd6d4:
    // 0x2fd6d4: 0x10000147  b           . + 4 + (0x147 << 2)
label_2fd6d8:
    if (ctx->pc == 0x2FD6D8u) {
        ctx->pc = 0x2FD6D8u;
            // 0x2fd6d8: 0xaf83a084  sw          $v1, -0x5F7C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942852), GPR_U32(ctx, 3));
        ctx->pc = 0x2FD6DCu;
        goto label_2fd6dc;
    }
    ctx->pc = 0x2FD6D4u;
    {
        const bool branch_taken_0x2fd6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD6D4u;
            // 0x2fd6d8: 0xaf83a084  sw          $v1, -0x5F7C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942852), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd6d4) {
            ctx->pc = 0x2FDBF4u;
            goto label_2fdbf4;
        }
    }
    ctx->pc = 0x2FD6DCu;
label_2fd6dc:
    // 0x2fd6dc: 0x8c530110  lw          $s3, 0x110($v0)
    ctx->pc = 0x2fd6dcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
label_2fd6e0:
    // 0x2fd6e0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fd6e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fd6e4:
    // 0x2fd6e4: 0xc0a9b30  jal         func_2A6CC0
label_2fd6e8:
    if (ctx->pc == 0x2FD6E8u) {
        ctx->pc = 0x2FD6E8u;
            // 0x2fd6e8: 0x24050205  addiu       $a1, $zero, 0x205 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 517));
        ctx->pc = 0x2FD6ECu;
        goto label_2fd6ec;
    }
    ctx->pc = 0x2FD6E4u;
    SET_GPR_U32(ctx, 31, 0x2FD6ECu);
    ctx->pc = 0x2FD6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD6E4u;
            // 0x2fd6e8: 0x24050205  addiu       $a1, $zero, 0x205 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 517));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6CC0u;
    if (runtime->hasFunction(0x2A6CC0u)) {
        auto targetFn = runtime->lookupFunction(0x2A6CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD6ECu; }
        if (ctx->pc != 0x2FD6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDefBgmNo__6CSceneFi_0x2a6cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD6ECu; }
        if (ctx->pc != 0x2FD6ECu) { return; }
    }
    ctx->pc = 0x2FD6ECu;
label_2fd6ec:
    // 0x2fd6ec: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2fd6ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fd6f0:
    // 0x2fd6f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fd6f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fd6f4:
    // 0x2fd6f4: 0xc0a9ac4  jal         func_2A6B10
label_2fd6f8:
    if (ctx->pc == 0x2FD6F8u) {
        ctx->pc = 0x2FD6F8u;
            // 0x2fd6f8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD6FCu;
        goto label_2fd6fc;
    }
    ctx->pc = 0x2FD6F4u;
    SET_GPR_U32(ctx, 31, 0x2FD6FCu);
    ctx->pc = 0x2FD6F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD6F4u;
            // 0x2fd6f8: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6B10u;
    if (runtime->hasFunction(0x2A6B10u)) {
        auto targetFn = runtime->lookupFunction(0x2A6B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD6FCu; }
        if (ctx->pc != 0x2FD6FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLoadBGM__6CSceneFi_0x2a6b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD6FCu; }
        if (ctx->pc != 0x2FD6FCu) { return; }
    }
    ctx->pc = 0x2FD6FCu;
label_2fd6fc:
    // 0x2fd6fc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2fd700:
    if (ctx->pc == 0x2FD700u) {
        ctx->pc = 0x2FD700u;
            // 0x2fd700: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD704u;
        goto label_2fd704;
    }
    ctx->pc = 0x2FD6FCu;
    {
        const bool branch_taken_0x2fd6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD6FCu;
            // 0x2fd700: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd6fc) {
            ctx->pc = 0x2FD73Cu;
            goto label_2fd73c;
        }
    }
    ctx->pc = 0x2FD704u;
label_2fd704:
    // 0x2fd704: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2fd704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2fd708:
    // 0x2fd708: 0xc0a9a74  jal         func_2A69D0
label_2fd70c:
    if (ctx->pc == 0x2FD70Cu) {
        ctx->pc = 0x2FD70Cu;
            // 0x2fd70c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD710u;
        goto label_2fd710;
    }
    ctx->pc = 0x2FD708u;
    SET_GPR_U32(ctx, 31, 0x2FD710u);
    ctx->pc = 0x2FD70Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD708u;
            // 0x2fd70c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A69D0u;
    if (runtime->hasFunction(0x2A69D0u)) {
        auto targetFn = runtime->lookupFunction(0x2A69D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD710u; }
        if (ctx->pc != 0x2FD710u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetBgmFile__6CSceneFPci_0x2a69d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD710u; }
        if (ctx->pc != 0x2FD710u) { return; }
    }
    ctx->pc = 0x2FD710u;
label_2fd710:
    // 0x2fd710: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2fd710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fd714:
    // 0x2fd714: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2fd714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_2fd718:
    // 0x2fd718: 0xc052734  jal         func_149CD0
label_2fd71c:
    if (ctx->pc == 0x2FD71Cu) {
        ctx->pc = 0x2FD71Cu;
            // 0x2fd71c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD720u;
        goto label_2fd720;
    }
    ctx->pc = 0x2FD718u;
    SET_GPR_U32(ctx, 31, 0x2FD720u);
    ctx->pc = 0x2FD71Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD718u;
            // 0x2fd71c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD720u; }
        if (ctx->pc != 0x2FD720u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD720u; }
        if (ctx->pc != 0x2FD720u) { return; }
    }
    ctx->pc = 0x2FD720u;
label_2fd720:
    // 0x2fd720: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2fd724:
    if (ctx->pc == 0x2FD724u) {
        ctx->pc = 0x2FD724u;
            // 0x2fd724: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD728u;
        goto label_2fd728;
    }
    ctx->pc = 0x2FD720u;
    {
        const bool branch_taken_0x2fd720 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD720u;
            // 0x2fd724: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd720) {
            ctx->pc = 0x2FD73Cu;
            goto label_2fd73c;
        }
    }
    ctx->pc = 0x2FD728u;
label_2fd728:
    // 0x2fd728: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2fd728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2fd72c:
    // 0x2fd72c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fd72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fd730:
    // 0x2fd730: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fd730u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fd734:
    // 0x2fd734: 0xc0a9ca4  jal         func_2A7290
label_2fd738:
    if (ctx->pc == 0x2FD738u) {
        ctx->pc = 0x2FD738u;
            // 0x2fd738: 0xaf82a068  sw          $v0, -0x5F98($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942824), GPR_U32(ctx, 2));
        ctx->pc = 0x2FD73Cu;
        goto label_2fd73c;
    }
    ctx->pc = 0x2FD734u;
    SET_GPR_U32(ctx, 31, 0x2FD73Cu);
    ctx->pc = 0x2FD738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD734u;
            // 0x2fd738: 0xaf82a068  sw          $v0, -0x5F98($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942824), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A7290u;
    if (runtime->hasFunction(0x2A7290u)) {
        auto targetFn = runtime->lookupFunction(0x2A7290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD73Cu; }
        if (ctx->pc != 0x2FD73Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadBGMPack__6CSceneFiPUi_0x2a7290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD73Cu; }
        if (ctx->pc != 0x2FD73Cu) { return; }
    }
    ctx->pc = 0x2FD73Cu;
label_2fd73c:
    // 0x2fd73c: 0xc0bf3e4  jal         func_2FCF90
label_2fd740:
    if (ctx->pc == 0x2FD740u) {
        ctx->pc = 0x2FD744u;
        goto label_2fd744;
    }
    ctx->pc = 0x2FD73Cu;
    SET_GPR_U32(ctx, 31, 0x2FD744u);
    ctx->pc = 0x2FCF90u;
    if (runtime->hasFunction(0x2FCF90u)) {
        auto targetFn = runtime->lookupFunction(0x2FCF90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD744u; }
        if (ctx->pc != 0x2FD744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        switch_thread__Fv_0x2fcf90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD744u; }
        if (ctx->pc != 0x2FD744u) { return; }
    }
    ctx->pc = 0x2FD744u;
label_2fd744:
    // 0x2fd744: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2fd744u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2fd748:
    // 0x2fd748: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2fd748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fd74c:
    // 0x2fd74c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2fd74cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2fd750:
    // 0x2fd750: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fd750u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fd754:
    // 0x2fd754: 0xc0a9844  jal         func_2A6110
label_2fd758:
    if (ctx->pc == 0x2FD758u) {
        ctx->pc = 0x2FD758u;
            // 0x2fd758: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2FD75Cu;
        goto label_2fd75c;
    }
    ctx->pc = 0x2FD754u;
    SET_GPR_U32(ctx, 31, 0x2FD75Cu);
    ctx->pc = 0x2FD758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD754u;
            // 0x2fd758: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6110u;
    if (runtime->hasFunction(0x2A6110u)) {
        auto targetFn = runtime->lookupFunction(0x2A6110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD75Cu; }
        if (ctx->pc != 0x2FD75Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PlayBGM__6CSceneFiif_0x2a6110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD75Cu; }
        if (ctx->pc != 0x2FD75Cu) { return; }
    }
    ctx->pc = 0x2FD75Cu;
label_2fd75c:
    // 0x2fd75c: 0x8ea30020  lw          $v1, 0x20($s5)
    ctx->pc = 0x2fd75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 32)));
label_2fd760:
    // 0x2fd760: 0x2402012f  addiu       $v0, $zero, 0x12F
    ctx->pc = 0x2fd760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 303));
label_2fd764:
    // 0x2fd764: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
label_2fd768:
    if (ctx->pc == 0x2FD768u) {
        ctx->pc = 0x2FD768u;
            // 0x2fd768: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2FD76Cu;
        goto label_2fd76c;
    }
    ctx->pc = 0x2FD764u;
    {
        const bool branch_taken_0x2fd764 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2FD768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD764u;
            // 0x2fd768: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd764) {
            ctx->pc = 0x2FD7BCu;
            goto label_2fd7bc;
        }
    }
    ctx->pc = 0x2FD76Cu;
label_2fd76c:
    // 0x2fd76c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2fd76cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2fd770:
    // 0x2fd770: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2fd770u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fd774:
    // 0x2fd774: 0x24a51e78  addiu       $a1, $a1, 0x1E78
    ctx->pc = 0x2fd774u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7800));
label_2fd778:
    // 0x2fd778: 0xc052734  jal         func_149CD0
label_2fd77c:
    if (ctx->pc == 0x2FD77Cu) {
        ctx->pc = 0x2FD77Cu;
            // 0x2fd77c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD780u;
        goto label_2fd780;
    }
    ctx->pc = 0x2FD778u;
    SET_GPR_U32(ctx, 31, 0x2FD780u);
    ctx->pc = 0x2FD77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD778u;
            // 0x2fd77c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD780u; }
        if (ctx->pc != 0x2FD780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD780u; }
        if (ctx->pc != 0x2FD780u) { return; }
    }
    ctx->pc = 0x2FD780u;
label_2fd780:
    // 0x2fd780: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
label_2fd784:
    if (ctx->pc == 0x2FD784u) {
        ctx->pc = 0x2FD784u;
            // 0x2fd784: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD788u;
        goto label_2fd788;
    }
    ctx->pc = 0x2FD780u;
    {
        const bool branch_taken_0x2fd780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD784u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD780u;
            // 0x2fd784: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd780) {
            ctx->pc = 0x2FD800u;
            goto label_2fd800;
        }
    }
    ctx->pc = 0x2FD788u;
label_2fd788:
    // 0x2fd788: 0x8f849f7c  lw          $a0, -0x6084($gp)
    ctx->pc = 0x2fd788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942588)));
label_2fd78c:
    // 0x2fd78c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2fd78cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_2fd790:
    // 0x2fd790: 0x8f8a9f90  lw          $t2, -0x6070($gp)
    ctx->pc = 0x2fd790u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942608)));
label_2fd794:
    // 0x2fd794: 0x24c61df8  addiu       $a2, $a2, 0x1DF8
    ctx->pc = 0x2fd794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7672));
label_2fd798:
    // 0x2fd798: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2fd798u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fd79c:
    // 0x2fd79c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2fd79cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fd7a0:
    // 0x2fd7a0: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2fd7a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fd7a4:
    // 0x2fd7a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fd7a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fd7a8:
    // 0x2fd7a8: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x2fd7a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_2fd7ac:
    // 0x2fd7ac: 0x320f809  jalr        $t9
label_2fd7b0:
    if (ctx->pc == 0x2FD7B0u) {
        ctx->pc = 0x2FD7B0u;
            // 0x2fd7b0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD7B4u;
        goto label_2fd7b4;
    }
    ctx->pc = 0x2FD7ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FD7B4u);
        ctx->pc = 0x2FD7B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD7ACu;
            // 0x2fd7b0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FD7B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FD7B4u; }
            if (ctx->pc != 0x2FD7B4u) { return; }
        }
        }
    }
    ctx->pc = 0x2FD7B4u;
label_2fd7b4:
    // 0x2fd7b4: 0x10000013  b           . + 4 + (0x13 << 2)
label_2fd7b8:
    if (ctx->pc == 0x2FD7B8u) {
        ctx->pc = 0x2FD7B8u;
            // 0x2fd7b8: 0x8f839f7c  lw          $v1, -0x6084($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942588)));
        ctx->pc = 0x2FD7BCu;
        goto label_2fd7bc;
    }
    ctx->pc = 0x2FD7B4u;
    {
        const bool branch_taken_0x2fd7b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD7B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD7B4u;
            // 0x2fd7b8: 0x8f839f7c  lw          $v1, -0x6084($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942588)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd7b4) {
            ctx->pc = 0x2FD804u;
            goto label_2fd804;
        }
    }
    ctx->pc = 0x2FD7BCu;
label_2fd7bc:
    // 0x2fd7bc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2fd7bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fd7c0:
    // 0x2fd7c0: 0x24a51e88  addiu       $a1, $a1, 0x1E88
    ctx->pc = 0x2fd7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7816));
label_2fd7c4:
    // 0x2fd7c4: 0xc052734  jal         func_149CD0
label_2fd7c8:
    if (ctx->pc == 0x2FD7C8u) {
        ctx->pc = 0x2FD7C8u;
            // 0x2fd7c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD7CCu;
        goto label_2fd7cc;
    }
    ctx->pc = 0x2FD7C4u;
    SET_GPR_U32(ctx, 31, 0x2FD7CCu);
    ctx->pc = 0x2FD7C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD7C4u;
            // 0x2fd7c8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD7CCu; }
        if (ctx->pc != 0x2FD7CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD7CCu; }
        if (ctx->pc != 0x2FD7CCu) { return; }
    }
    ctx->pc = 0x2FD7CCu;
label_2fd7cc:
    // 0x2fd7cc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2fd7d0:
    if (ctx->pc == 0x2FD7D0u) {
        ctx->pc = 0x2FD7D0u;
            // 0x2fd7d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD7D4u;
        goto label_2fd7d4;
    }
    ctx->pc = 0x2FD7CCu;
    {
        const bool branch_taken_0x2fd7cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD7D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD7CCu;
            // 0x2fd7d0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd7cc) {
            ctx->pc = 0x2FD800u;
            goto label_2fd800;
        }
    }
    ctx->pc = 0x2FD7D4u;
label_2fd7d4:
    // 0x2fd7d4: 0x8f849f7c  lw          $a0, -0x6084($gp)
    ctx->pc = 0x2fd7d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942588)));
label_2fd7d8:
    // 0x2fd7d8: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2fd7d8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_2fd7dc:
    // 0x2fd7dc: 0x8f8a9f90  lw          $t2, -0x6070($gp)
    ctx->pc = 0x2fd7dcu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942608)));
label_2fd7e0:
    // 0x2fd7e0: 0x24c61df8  addiu       $a2, $a2, 0x1DF8
    ctx->pc = 0x2fd7e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7672));
label_2fd7e4:
    // 0x2fd7e4: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2fd7e4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fd7e8:
    // 0x2fd7e8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2fd7e8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fd7ec:
    // 0x2fd7ec: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2fd7ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fd7f0:
    // 0x2fd7f0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fd7f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fd7f4:
    // 0x2fd7f4: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x2fd7f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_2fd7f8:
    // 0x2fd7f8: 0x320f809  jalr        $t9
label_2fd7fc:
    if (ctx->pc == 0x2FD7FCu) {
        ctx->pc = 0x2FD7FCu;
            // 0x2fd7fc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD800u;
        goto label_2fd800;
    }
    ctx->pc = 0x2FD7F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FD800u);
        ctx->pc = 0x2FD7FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD7F8u;
            // 0x2fd7fc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FD800u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FD800u; }
            if (ctx->pc != 0x2FD800u) { return; }
        }
        }
    }
    ctx->pc = 0x2FD800u;
label_2fd800:
    // 0x2fd800: 0x8f839f7c  lw          $v1, -0x6084($gp)
    ctx->pc = 0x2fd800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942588)));
label_2fd804:
    // 0x2fd804: 0x8c630070  lw          $v1, 0x70($v1)
    ctx->pc = 0x2fd804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_2fd808:
    // 0x2fd808: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_2fd80c:
    if (ctx->pc == 0x2FD80Cu) {
        ctx->pc = 0x2FD80Cu;
            // 0x2fd80c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2FD810u;
        goto label_2fd810;
    }
    ctx->pc = 0x2FD808u;
    {
        const bool branch_taken_0x2fd808 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FD80Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD808u;
            // 0x2fd80c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd808) {
            ctx->pc = 0x2FD81Cu;
            goto label_2fd81c;
        }
    }
    ctx->pc = 0x2FD810u;
label_2fd810:
    // 0x2fd810: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fd810u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fd814:
    // 0x2fd814: 0x100000f7  b           . + 4 + (0xF7 << 2)
label_2fd818:
    if (ctx->pc == 0x2FD818u) {
        ctx->pc = 0x2FD818u;
            // 0x2fd818: 0xaf83a084  sw          $v1, -0x5F7C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942852), GPR_U32(ctx, 3));
        ctx->pc = 0x2FD81Cu;
        goto label_2fd81c;
    }
    ctx->pc = 0x2FD814u;
    {
        const bool branch_taken_0x2fd814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD818u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD814u;
            // 0x2fd818: 0xaf83a084  sw          $v1, -0x5F7C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942852), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd814) {
            ctx->pc = 0x2FDBF4u;
            goto label_2fdbf4;
        }
    }
    ctx->pc = 0x2FD81Cu;
label_2fd81c:
    // 0x2fd81c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2fd81cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fd820:
    // 0x2fd820: 0x24a51e98  addiu       $a1, $a1, 0x1E98
    ctx->pc = 0x2fd820u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7832));
label_2fd824:
    // 0x2fd824: 0xc052734  jal         func_149CD0
label_2fd828:
    if (ctx->pc == 0x2FD828u) {
        ctx->pc = 0x2FD828u;
            // 0x2fd828: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD82Cu;
        goto label_2fd82c;
    }
    ctx->pc = 0x2FD824u;
    SET_GPR_U32(ctx, 31, 0x2FD82Cu);
    ctx->pc = 0x2FD828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD824u;
            // 0x2fd828: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD82Cu; }
        if (ctx->pc != 0x2FD82Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD82Cu; }
        if (ctx->pc != 0x2FD82Cu) { return; }
    }
    ctx->pc = 0x2FD82Cu;
label_2fd82c:
    // 0x2fd82c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2fd830:
    if (ctx->pc == 0x2FD830u) {
        ctx->pc = 0x2FD834u;
        goto label_2fd834;
    }
    ctx->pc = 0x2FD82Cu;
    {
        const bool branch_taken_0x2fd82c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd82c) {
            ctx->pc = 0x2FD864u;
            goto label_2fd864;
        }
    }
    ctx->pc = 0x2FD834u;
label_2fd834:
    // 0x2fd834: 0x8f849fb0  lw          $a0, -0x6050($gp)
    ctx->pc = 0x2fd834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942640)));
label_2fd838:
    // 0x2fd838: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2fd838u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_2fd83c:
    // 0x2fd83c: 0x8f8a9f90  lw          $t2, -0x6070($gp)
    ctx->pc = 0x2fd83cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942608)));
label_2fd840:
    // 0x2fd840: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2fd840u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fd844:
    // 0x2fd844: 0x24c61df8  addiu       $a2, $a2, 0x1DF8
    ctx->pc = 0x2fd844u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7672));
label_2fd848:
    // 0x2fd848: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2fd848u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fd84c:
    // 0x2fd84c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2fd84cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fd850:
    // 0x2fd850: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2fd850u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fd854:
    // 0x2fd854: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fd854u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fd858:
    // 0x2fd858: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x2fd858u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_2fd85c:
    // 0x2fd85c: 0x320f809  jalr        $t9
label_2fd860:
    if (ctx->pc == 0x2FD860u) {
        ctx->pc = 0x2FD860u;
            // 0x2fd860: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD864u;
        goto label_2fd864;
    }
    ctx->pc = 0x2FD85Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FD864u);
        ctx->pc = 0x2FD860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD85Cu;
            // 0x2fd860: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FD864u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FD864u; }
            if (ctx->pc != 0x2FD864u) { return; }
        }
        }
    }
    ctx->pc = 0x2FD864u;
label_2fd864:
    // 0x2fd864: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2fd864u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2fd868:
    // 0x2fd868: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2fd868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fd86c:
    // 0x2fd86c: 0x24a51ea8  addiu       $a1, $a1, 0x1EA8
    ctx->pc = 0x2fd86cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7848));
label_2fd870:
    // 0x2fd870: 0xc052734  jal         func_149CD0
label_2fd874:
    if (ctx->pc == 0x2FD874u) {
        ctx->pc = 0x2FD874u;
            // 0x2fd874: 0x27a6011c  addiu       $a2, $sp, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
        ctx->pc = 0x2FD878u;
        goto label_2fd878;
    }
    ctx->pc = 0x2FD870u;
    SET_GPR_U32(ctx, 31, 0x2FD878u);
    ctx->pc = 0x2FD874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD870u;
            // 0x2fd874: 0x27a6011c  addiu       $a2, $sp, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD878u; }
        if (ctx->pc != 0x2FD878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD878u; }
        if (ctx->pc != 0x2FD878u) { return; }
    }
    ctx->pc = 0x2FD878u;
label_2fd878:
    // 0x2fd878: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_2fd87c:
    if (ctx->pc == 0x2FD87Cu) {
        ctx->pc = 0x2FD87Cu;
            // 0x2fd87c: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD880u;
        goto label_2fd880;
    }
    ctx->pc = 0x2FD878u;
    {
        const bool branch_taken_0x2fd878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD87Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD878u;
            // 0x2fd87c: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd878) {
            ctx->pc = 0x2FD8D4u;
            goto label_2fd8d4;
        }
    }
    ctx->pc = 0x2FD880u;
label_2fd880:
    // 0x2fd880: 0x8fa3011c  lw          $v1, 0x11C($sp)
    ctx->pc = 0x2fd880u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_2fd884:
    // 0x2fd884: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2fd884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_2fd888:
    // 0x2fd888: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fd88c:
    if (ctx->pc == 0x2FD88Cu) {
        ctx->pc = 0x2FD88Cu;
            // 0x2fd88c: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x2FD890u;
        goto label_2fd890;
    }
    ctx->pc = 0x2FD888u;
    {
        const bool branch_taken_0x2fd888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD88Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD888u;
            // 0x2fd88c: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd888) {
            ctx->pc = 0x2FD898u;
            goto label_2fd898;
        }
    }
    ctx->pc = 0x2FD890u;
label_2fd890:
    // 0x2fd890: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2fd890u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_2fd894:
    // 0x2fd894: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2fd894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2fd898:
    // 0x2fd898: 0xc04e748  jal         func_139D20
label_2fd89c:
    if (ctx->pc == 0x2FD89Cu) {
        ctx->pc = 0x2FD89Cu;
            // 0x2fd89c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD8A0u;
        goto label_2fd8a0;
    }
    ctx->pc = 0x2FD898u;
    SET_GPR_U32(ctx, 31, 0x2FD8A0u);
    ctx->pc = 0x2FD89Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD898u;
            // 0x2fd89c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD8A0u; }
        if (ctx->pc != 0x2FD8A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD8A0u; }
        if (ctx->pc != 0x2FD8A0u) { return; }
    }
    ctx->pc = 0x2FD8A0u;
label_2fd8a0:
    // 0x2fd8a0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2fd8a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fd8a4:
    // 0x2fd8a4: 0x1280000b  beqz        $s4, . + 4 + (0xB << 2)
label_2fd8a8:
    if (ctx->pc == 0x2FD8A8u) {
        ctx->pc = 0x2FD8ACu;
        goto label_2fd8ac;
    }
    ctx->pc = 0x2FD8A4u;
    {
        const bool branch_taken_0x2fd8a4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd8a4) {
            ctx->pc = 0x2FD8D4u;
            goto label_2fd8d4;
        }
    }
    ctx->pc = 0x2FD8ACu;
label_2fd8ac:
    // 0x2fd8ac: 0x8fa6011c  lw          $a2, 0x11C($sp)
    ctx->pc = 0x2fd8acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_2fd8b0:
    // 0x2fd8b0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2fd8b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2fd8b4:
    // 0x2fd8b4: 0xc049c18  jal         func_127060
label_2fd8b8:
    if (ctx->pc == 0x2FD8B8u) {
        ctx->pc = 0x2FD8B8u;
            // 0x2fd8b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD8BCu;
        goto label_2fd8bc;
    }
    ctx->pc = 0x2FD8B4u;
    SET_GPR_U32(ctx, 31, 0x2FD8BCu);
    ctx->pc = 0x2FD8B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD8B4u;
            // 0x2fd8b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD8BCu; }
        if (ctx->pc != 0x2FD8BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD8BCu; }
        if (ctx->pc != 0x2FD8BCu) { return; }
    }
    ctx->pc = 0x2FD8BCu;
label_2fd8bc:
    // 0x2fd8bc: 0x8f869f98  lw          $a2, -0x6068($gp)
    ctx->pc = 0x2fd8bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942616)));
label_2fd8c0:
    // 0x2fd8c0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2fd8c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2fd8c4:
    // 0x2fd8c4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2fd8c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2fd8c8:
    // 0x2fd8c8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fd8c8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fd8cc:
    // 0x2fd8cc: 0xc04b6a4  jal         func_12DA90
label_2fd8d0:
    if (ctx->pc == 0x2FD8D0u) {
        ctx->pc = 0x2FD8D0u;
            // 0x2fd8d0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD8D4u;
        goto label_2fd8d4;
    }
    ctx->pc = 0x2FD8CCu;
    SET_GPR_U32(ctx, 31, 0x2FD8D4u);
    ctx->pc = 0x2FD8D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD8CCu;
            // 0x2fd8d0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD8D4u; }
        if (ctx->pc != 0x2FD8D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD8D4u; }
        if (ctx->pc != 0x2FD8D4u) { return; }
    }
    ctx->pc = 0x2FD8D4u;
label_2fd8d4:
    // 0x2fd8d4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2fd8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2fd8d8:
    // 0x2fd8d8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2fd8d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fd8dc:
    // 0x2fd8dc: 0x24a51eb8  addiu       $a1, $a1, 0x1EB8
    ctx->pc = 0x2fd8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7864));
label_2fd8e0:
    // 0x2fd8e0: 0xc052734  jal         func_149CD0
label_2fd8e4:
    if (ctx->pc == 0x2FD8E4u) {
        ctx->pc = 0x2FD8E4u;
            // 0x2fd8e4: 0x27a6011c  addiu       $a2, $sp, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
        ctx->pc = 0x2FD8E8u;
        goto label_2fd8e8;
    }
    ctx->pc = 0x2FD8E0u;
    SET_GPR_U32(ctx, 31, 0x2FD8E8u);
    ctx->pc = 0x2FD8E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD8E0u;
            // 0x2fd8e4: 0x27a6011c  addiu       $a2, $sp, 0x11C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD8E8u; }
        if (ctx->pc != 0x2FD8E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD8E8u; }
        if (ctx->pc != 0x2FD8E8u) { return; }
    }
    ctx->pc = 0x2FD8E8u;
label_2fd8e8:
    // 0x2fd8e8: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_2fd8ec:
    if (ctx->pc == 0x2FD8ECu) {
        ctx->pc = 0x2FD8ECu;
            // 0x2fd8ec: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD8F0u;
        goto label_2fd8f0;
    }
    ctx->pc = 0x2FD8E8u;
    {
        const bool branch_taken_0x2fd8e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD8ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD8E8u;
            // 0x2fd8ec: 0x40b82d  daddu       $s7, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd8e8) {
            ctx->pc = 0x2FD944u;
            goto label_2fd944;
        }
    }
    ctx->pc = 0x2FD8F0u;
label_2fd8f0:
    // 0x2fd8f0: 0x8fa3011c  lw          $v1, 0x11C($sp)
    ctx->pc = 0x2fd8f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_2fd8f4:
    // 0x2fd8f4: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2fd8f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_2fd8f8:
    // 0x2fd8f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2fd8fc:
    if (ctx->pc == 0x2FD8FCu) {
        ctx->pc = 0x2FD8FCu;
            // 0x2fd8fc: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x2FD900u;
        goto label_2fd900;
    }
    ctx->pc = 0x2FD8F8u;
    {
        const bool branch_taken_0x2fd8f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD8FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD8F8u;
            // 0x2fd8fc: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd8f8) {
            ctx->pc = 0x2FD908u;
            goto label_2fd908;
        }
    }
    ctx->pc = 0x2FD900u;
label_2fd900:
    // 0x2fd900: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2fd900u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_2fd904:
    // 0x2fd904: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2fd904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2fd908:
    // 0x2fd908: 0xc04e748  jal         func_139D20
label_2fd90c:
    if (ctx->pc == 0x2FD90Cu) {
        ctx->pc = 0x2FD90Cu;
            // 0x2fd90c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD910u;
        goto label_2fd910;
    }
    ctx->pc = 0x2FD908u;
    SET_GPR_U32(ctx, 31, 0x2FD910u);
    ctx->pc = 0x2FD90Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD908u;
            // 0x2fd90c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD910u; }
        if (ctx->pc != 0x2FD910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD910u; }
        if (ctx->pc != 0x2FD910u) { return; }
    }
    ctx->pc = 0x2FD910u;
label_2fd910:
    // 0x2fd910: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2fd910u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fd914:
    // 0x2fd914: 0x1280000b  beqz        $s4, . + 4 + (0xB << 2)
label_2fd918:
    if (ctx->pc == 0x2FD918u) {
        ctx->pc = 0x2FD91Cu;
        goto label_2fd91c;
    }
    ctx->pc = 0x2FD914u;
    {
        const bool branch_taken_0x2fd914 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd914) {
            ctx->pc = 0x2FD944u;
            goto label_2fd944;
        }
    }
    ctx->pc = 0x2FD91Cu;
label_2fd91c:
    // 0x2fd91c: 0x8fa6011c  lw          $a2, 0x11C($sp)
    ctx->pc = 0x2fd91cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_2fd920:
    // 0x2fd920: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2fd920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2fd924:
    // 0x2fd924: 0xc049c18  jal         func_127060
label_2fd928:
    if (ctx->pc == 0x2FD928u) {
        ctx->pc = 0x2FD928u;
            // 0x2fd928: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD92Cu;
        goto label_2fd92c;
    }
    ctx->pc = 0x2FD924u;
    SET_GPR_U32(ctx, 31, 0x2FD92Cu);
    ctx->pc = 0x2FD928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD924u;
            // 0x2fd928: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD92Cu; }
        if (ctx->pc != 0x2FD92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD92Cu; }
        if (ctx->pc != 0x2FD92Cu) { return; }
    }
    ctx->pc = 0x2FD92Cu;
label_2fd92c:
    // 0x2fd92c: 0x8f869f98  lw          $a2, -0x6068($gp)
    ctx->pc = 0x2fd92cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942616)));
label_2fd930:
    // 0x2fd930: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2fd930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2fd934:
    // 0x2fd934: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2fd934u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2fd938:
    // 0x2fd938: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fd938u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fd93c:
    // 0x2fd93c: 0xc04b6a4  jal         func_12DA90
label_2fd940:
    if (ctx->pc == 0x2FD940u) {
        ctx->pc = 0x2FD940u;
            // 0x2fd940: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD944u;
        goto label_2fd944;
    }
    ctx->pc = 0x2FD93Cu;
    SET_GPR_U32(ctx, 31, 0x2FD944u);
    ctx->pc = 0x2FD940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD93Cu;
            // 0x2fd940: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12DA90u;
    if (runtime->hasFunction(0x12DA90u)) {
        auto targetFn = runtime->lookupFunction(0x12DA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD944u; }
        if (ctx->pc != 0x2FD944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterIMGFile__17mgCTextureManagerFPUciP9mgCMemoryP15mgCEnterIMGInfo_0x12da90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD944u; }
        if (ctx->pc != 0x2FD944u) { return; }
    }
    ctx->pc = 0x2FD944u;
label_2fd944:
    // 0x2fd944: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2fd944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2fd948:
    // 0x2fd948: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2fd948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fd94c:
    // 0x2fd94c: 0x24a51ec8  addiu       $a1, $a1, 0x1EC8
    ctx->pc = 0x2fd94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7880));
label_2fd950:
    // 0x2fd950: 0xc052734  jal         func_149CD0
label_2fd954:
    if (ctx->pc == 0x2FD954u) {
        ctx->pc = 0x2FD954u;
            // 0x2fd954: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD958u;
        goto label_2fd958;
    }
    ctx->pc = 0x2FD950u;
    SET_GPR_U32(ctx, 31, 0x2FD958u);
    ctx->pc = 0x2FD954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD950u;
            // 0x2fd954: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD958u; }
        if (ctx->pc != 0x2FD958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD958u; }
        if (ctx->pc != 0x2FD958u) { return; }
    }
    ctx->pc = 0x2FD958u;
label_2fd958:
    // 0x2fd958: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2fd95c:
    if (ctx->pc == 0x2FD95Cu) {
        ctx->pc = 0x2FD960u;
        goto label_2fd960;
    }
    ctx->pc = 0x2FD958u;
    {
        const bool branch_taken_0x2fd958 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fd958) {
            ctx->pc = 0x2FD990u;
            goto label_2fd990;
        }
    }
    ctx->pc = 0x2FD960u;
label_2fd960:
    // 0x2fd960: 0x8f849f84  lw          $a0, -0x607C($gp)
    ctx->pc = 0x2fd960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942596)));
label_2fd964:
    // 0x2fd964: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2fd964u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_2fd968:
    // 0x2fd968: 0x8f8a9f90  lw          $t2, -0x6070($gp)
    ctx->pc = 0x2fd968u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942608)));
label_2fd96c:
    // 0x2fd96c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2fd96cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fd970:
    // 0x2fd970: 0x24c61df8  addiu       $a2, $a2, 0x1DF8
    ctx->pc = 0x2fd970u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7672));
label_2fd974:
    // 0x2fd974: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2fd974u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fd978:
    // 0x2fd978: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2fd978u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fd97c:
    // 0x2fd97c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2fd97cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fd980:
    // 0x2fd980: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fd980u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fd984:
    // 0x2fd984: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x2fd984u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_2fd988:
    // 0x2fd988: 0x320f809  jalr        $t9
label_2fd98c:
    if (ctx->pc == 0x2FD98Cu) {
        ctx->pc = 0x2FD98Cu;
            // 0x2fd98c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD990u;
        goto label_2fd990;
    }
    ctx->pc = 0x2FD988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FD990u);
        ctx->pc = 0x2FD98Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD988u;
            // 0x2fd98c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FD990u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FD990u; }
            if (ctx->pc != 0x2FD990u) { return; }
        }
        }
    }
    ctx->pc = 0x2FD990u;
label_2fd990:
    // 0x2fd990: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2fd990u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2fd994:
    // 0x2fd994: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2fd994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2fd998:
    // 0x2fd998: 0x24a51ed0  addiu       $a1, $a1, 0x1ED0
    ctx->pc = 0x2fd998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7888));
label_2fd99c:
    // 0x2fd99c: 0xc052734  jal         func_149CD0
label_2fd9a0:
    if (ctx->pc == 0x2FD9A0u) {
        ctx->pc = 0x2FD9A0u;
            // 0x2fd9a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD9A4u;
        goto label_2fd9a4;
    }
    ctx->pc = 0x2FD99Cu;
    SET_GPR_U32(ctx, 31, 0x2FD9A4u);
    ctx->pc = 0x2FD9A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD99Cu;
            // 0x2fd9a0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD9A4u; }
        if (ctx->pc != 0x2FD9A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FD9A4u; }
        if (ctx->pc != 0x2FD9A4u) { return; }
    }
    ctx->pc = 0x2FD9A4u;
label_2fd9a4:
    // 0x2fd9a4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2fd9a8:
    if (ctx->pc == 0x2FD9A8u) {
        ctx->pc = 0x2FD9A8u;
            // 0x2fd9a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD9ACu;
        goto label_2fd9ac;
    }
    ctx->pc = 0x2FD9A4u;
    {
        const bool branch_taken_0x2fd9a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD9A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD9A4u;
            // 0x2fd9a8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd9a4) {
            ctx->pc = 0x2FD9D8u;
            goto label_2fd9d8;
        }
    }
    ctx->pc = 0x2FD9ACu;
label_2fd9ac:
    // 0x2fd9ac: 0x8f849f8c  lw          $a0, -0x6074($gp)
    ctx->pc = 0x2fd9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942604)));
label_2fd9b0:
    // 0x2fd9b0: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2fd9b0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_2fd9b4:
    // 0x2fd9b4: 0x8f8a9f90  lw          $t2, -0x6070($gp)
    ctx->pc = 0x2fd9b4u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942608)));
label_2fd9b8:
    // 0x2fd9b8: 0x24c61df8  addiu       $a2, $a2, 0x1DF8
    ctx->pc = 0x2fd9b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7672));
label_2fd9bc:
    // 0x2fd9bc: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2fd9bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fd9c0:
    // 0x2fd9c0: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2fd9c0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fd9c4:
    // 0x2fd9c4: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2fd9c4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fd9c8:
    // 0x2fd9c8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fd9c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fd9cc:
    // 0x2fd9cc: 0x8f390080  lw          $t9, 0x80($t9)
    ctx->pc = 0x2fd9ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 128)));
label_2fd9d0:
    // 0x2fd9d0: 0x320f809  jalr        $t9
label_2fd9d4:
    if (ctx->pc == 0x2FD9D4u) {
        ctx->pc = 0x2FD9D4u;
            // 0x2fd9d4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FD9D8u;
        goto label_2fd9d8;
    }
    ctx->pc = 0x2FD9D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FD9D8u);
        ctx->pc = 0x2FD9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD9D0u;
            // 0x2fd9d4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FD9D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FD9D8u; }
            if (ctx->pc != 0x2FD9D8u) { return; }
        }
        }
    }
    ctx->pc = 0x2FD9D8u;
label_2fd9d8:
    // 0x2fd9d8: 0x8f849f84  lw          $a0, -0x607C($gp)
    ctx->pc = 0x2fd9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942596)));
label_2fd9dc:
    // 0x2fd9dc: 0x8f839f8c  lw          $v1, -0x6074($gp)
    ctx->pc = 0x2fd9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942604)));
label_2fd9e0:
    // 0x2fd9e0: 0x8c840070  lw          $a0, 0x70($a0)
    ctx->pc = 0x2fd9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_2fd9e4:
    // 0x2fd9e4: 0xaf849fbc  sw          $a0, -0x6044($gp)
    ctx->pc = 0x2fd9e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942652), GPR_U32(ctx, 4));
label_2fd9e8:
    // 0x2fd9e8: 0x8c630070  lw          $v1, 0x70($v1)
    ctx->pc = 0x2fd9e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_2fd9ec:
    // 0x2fd9ec: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2fd9f0:
    if (ctx->pc == 0x2FD9F0u) {
        ctx->pc = 0x2FD9F0u;
            // 0x2fd9f0: 0xaf839fc4  sw          $v1, -0x603C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942660), GPR_U32(ctx, 3));
        ctx->pc = 0x2FD9F4u;
        goto label_2fd9f4;
    }
    ctx->pc = 0x2FD9ECu;
    {
        const bool branch_taken_0x2fd9ec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FD9F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FD9ECu;
            // 0x2fd9f0: 0xaf839fc4  sw          $v1, -0x603C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942660), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fd9ec) {
            ctx->pc = 0x2FD9FCu;
            goto label_2fd9fc;
        }
    }
    ctx->pc = 0x2FD9F4u;
label_2fd9f4:
    // 0x2fd9f4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_2fd9f8:
    if (ctx->pc == 0x2FD9F8u) {
        ctx->pc = 0x2FD9FCu;
        goto label_2fd9fc;
    }
    ctx->pc = 0x2FD9F4u;
    {
        const bool branch_taken_0x2fd9f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fd9f4) {
            ctx->pc = 0x2FDA08u;
            goto label_2fda08;
        }
    }
    ctx->pc = 0x2FD9FCu;
label_2fd9fc:
    // 0x2fd9fc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fd9fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fda00:
    // 0x2fda00: 0x1000007c  b           . + 4 + (0x7C << 2)
label_2fda04:
    if (ctx->pc == 0x2FDA04u) {
        ctx->pc = 0x2FDA04u;
            // 0x2fda04: 0xaf83a084  sw          $v1, -0x5F7C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942852), GPR_U32(ctx, 3));
        ctx->pc = 0x2FDA08u;
        goto label_2fda08;
    }
    ctx->pc = 0x2FDA00u;
    {
        const bool branch_taken_0x2fda00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDA04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDA00u;
            // 0x2fda04: 0xaf83a084  sw          $v1, -0x5F7C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942852), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fda00) {
            ctx->pc = 0x2FDBF4u;
            goto label_2fdbf4;
        }
    }
    ctx->pc = 0x2FDA08u;
label_2fda08:
    // 0x2fda08: 0x8e252e50  lw          $a1, 0x2E50($s1)
    ctx->pc = 0x2fda08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11856)));
label_2fda0c:
    // 0x2fda0c: 0xc0a0ed8  jal         func_283B60
label_2fda10:
    if (ctx->pc == 0x2FDA10u) {
        ctx->pc = 0x2FDA10u;
            // 0x2fda10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDA14u;
        goto label_2fda14;
    }
    ctx->pc = 0x2FDA0Cu;
    SET_GPR_U32(ctx, 31, 0x2FDA14u);
    ctx->pc = 0x2FDA10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDA0Cu;
            // 0x2fda10: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDA14u; }
        if (ctx->pc != 0x2FDA14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDA14u; }
        if (ctx->pc != 0x2FDA14u) { return; }
    }
    ctx->pc = 0x2FDA14u;
label_2fda14:
    // 0x2fda14: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2fda18:
    if (ctx->pc == 0x2FDA18u) {
        ctx->pc = 0x2FDA18u;
            // 0x2fda18: 0xaf829fa0  sw          $v0, -0x6060($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942624), GPR_U32(ctx, 2));
        ctx->pc = 0x2FDA1Cu;
        goto label_2fda1c;
    }
    ctx->pc = 0x2FDA14u;
    {
        const bool branch_taken_0x2fda14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDA18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDA14u;
            // 0x2fda18: 0xaf829fa0  sw          $v0, -0x6060($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942624), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fda14) {
            ctx->pc = 0x2FDA28u;
            goto label_2fda28;
        }
    }
    ctx->pc = 0x2FDA1Cu;
label_2fda1c:
    // 0x2fda1c: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x2fda1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_2fda20:
    // 0x2fda20: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
label_2fda24:
    if (ctx->pc == 0x2FDA24u) {
        ctx->pc = 0x2FDA24u;
            // 0x2fda24: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2FDA28u;
        goto label_2fda28;
    }
    ctx->pc = 0x2FDA20u;
    {
        const bool branch_taken_0x2fda20 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FDA24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDA20u;
            // 0x2fda24: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fda20) {
            ctx->pc = 0x2FDA34u;
            goto label_2fda34;
        }
    }
    ctx->pc = 0x2FDA28u;
label_2fda28:
    // 0x2fda28: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fda28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fda2c:
    // 0x2fda2c: 0x10000071  b           . + 4 + (0x71 << 2)
label_2fda30:
    if (ctx->pc == 0x2FDA30u) {
        ctx->pc = 0x2FDA30u;
            // 0x2fda30: 0xaf83a084  sw          $v1, -0x5F7C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942852), GPR_U32(ctx, 3));
        ctx->pc = 0x2FDA34u;
        goto label_2fda34;
    }
    ctx->pc = 0x2FDA2Cu;
    {
        const bool branch_taken_0x2fda2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDA2Cu;
            // 0x2fda30: 0xaf83a084  sw          $v1, -0x5F7C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942852), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fda2c) {
            ctx->pc = 0x2FDBF4u;
            goto label_2fdbf4;
        }
    }
    ctx->pc = 0x2FDA34u;
label_2fda34:
    // 0x2fda34: 0xc04ddb4  jal         func_1376D0
label_2fda38:
    if (ctx->pc == 0x2FDA38u) {
        ctx->pc = 0x2FDA38u;
            // 0x2fda38: 0x24a51ee0  addiu       $a1, $a1, 0x1EE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7904));
        ctx->pc = 0x2FDA3Cu;
        goto label_2fda3c;
    }
    ctx->pc = 0x2FDA34u;
    SET_GPR_U32(ctx, 31, 0x2FDA3Cu);
    ctx->pc = 0x2FDA38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDA34u;
            // 0x2fda38: 0x24a51ee0  addiu       $a1, $a1, 0x1EE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1376D0u;
    if (runtime->hasFunction(0x1376D0u)) {
        auto targetFn = runtime->lookupFunction(0x1376D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDA3Cu; }
        if (ctx->pc != 0x2FDA3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchFrame__8mgCFrameFPc_0x1376d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDA3Cu; }
        if (ctx->pc != 0x2FDA3Cu) { return; }
    }
    ctx->pc = 0x2FDA3Cu;
label_2fda3c:
    // 0x2fda3c: 0xaf829fb8  sw          $v0, -0x6048($gp)
    ctx->pc = 0x2fda3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942648), GPR_U32(ctx, 2));
label_2fda40:
    // 0x2fda40: 0x8f859fb8  lw          $a1, -0x6048($gp)
    ctx->pc = 0x2fda40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942648)));
label_2fda44:
    // 0x2fda44: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_2fda48:
    if (ctx->pc == 0x2FDA48u) {
        ctx->pc = 0x2FDA48u;
            // 0x2fda48: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2FDA4Cu;
        goto label_2fda4c;
    }
    ctx->pc = 0x2FDA44u;
    {
        const bool branch_taken_0x2fda44 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FDA48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDA44u;
            // 0x2fda48: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fda44) {
            ctx->pc = 0x2FDA54u;
            goto label_2fda54;
        }
    }
    ctx->pc = 0x2FDA4Cu;
label_2fda4c:
    // 0x2fda4c: 0x10000069  b           . + 4 + (0x69 << 2)
label_2fda50:
    if (ctx->pc == 0x2FDA50u) {
        ctx->pc = 0x2FDA50u;
            // 0x2fda50: 0xaf83a084  sw          $v1, -0x5F7C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942852), GPR_U32(ctx, 3));
        ctx->pc = 0x2FDA54u;
        goto label_2fda54;
    }
    ctx->pc = 0x2FDA4Cu;
    {
        const bool branch_taken_0x2fda4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDA50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDA4Cu;
            // 0x2fda50: 0xaf83a084  sw          $v1, -0x5F7C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942852), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fda4c) {
            ctx->pc = 0x2FDBF4u;
            goto label_2fdbf4;
        }
    }
    ctx->pc = 0x2FDA54u;
label_2fda54:
    // 0x2fda54: 0x8f829f7c  lw          $v0, -0x6084($gp)
    ctx->pc = 0x2fda54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942588)));
label_2fda58:
    // 0x2fda58: 0xc04db0c  jal         func_136C30
label_2fda5c:
    if (ctx->pc == 0x2FDA5Cu) {
        ctx->pc = 0x2FDA5Cu;
            // 0x2fda5c: 0x8c440070  lw          $a0, 0x70($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
        ctx->pc = 0x2FDA60u;
        goto label_2fda60;
    }
    ctx->pc = 0x2FDA58u;
    SET_GPR_U32(ctx, 31, 0x2FDA60u);
    ctx->pc = 0x2FDA5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDA58u;
            // 0x2fda5c: 0x8c440070  lw          $a0, 0x70($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136C30u;
    if (runtime->hasFunction(0x136C30u)) {
        auto targetFn = runtime->lookupFunction(0x136C30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDA60u; }
        if (ctx->pc != 0x2FDA60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetReference__8mgCFrameFP8mgCFrame_0x136c30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDA60u; }
        if (ctx->pc != 0x2FDA60u) { return; }
    }
    ctx->pc = 0x2FDA60u;
label_2fda60:
    // 0x2fda60: 0x8f829f7c  lw          $v0, -0x6084($gp)
    ctx->pc = 0x2fda60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942588)));
label_2fda64:
    // 0x2fda64: 0x8c450070  lw          $a1, 0x70($v0)
    ctx->pc = 0x2fda64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_2fda68:
    // 0x2fda68: 0xc0c3f1c  jal         func_30FC70
label_2fda6c:
    if (ctx->pc == 0x2FDA6Cu) {
        ctx->pc = 0x2FDA6Cu;
            // 0x2fda6c: 0x8f849fb8  lw          $a0, -0x6048($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942648)));
        ctx->pc = 0x2FDA70u;
        goto label_2fda70;
    }
    ctx->pc = 0x2FDA68u;
    SET_GPR_U32(ctx, 31, 0x2FDA70u);
    ctx->pc = 0x2FDA6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDA68u;
            // 0x2fda6c: 0x8f849fb8  lw          $a0, -0x6048($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942648)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30FC70u;
    if (runtime->hasFunction(0x30FC70u)) {
        auto targetFn = runtime->lookupFunction(0x30FC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDA70u; }
        if (ctx->pc != 0x2FDA70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitRodPoint__FP8mgCFrameP8mgCFrame_0x30fc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDA70u; }
        if (ctx->pc != 0x2FDA70u) { return; }
    }
    ctx->pc = 0x2FDA70u;
label_2fda70:
    // 0x2fda70: 0x8f859fbc  lw          $a1, -0x6044($gp)
    ctx->pc = 0x2fda70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942652)));
label_2fda74:
    // 0x2fda74: 0x8f869fc4  lw          $a2, -0x603C($gp)
    ctx->pc = 0x2fda74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942660)));
label_2fda78:
    // 0x2fda78: 0xc0c4b48  jal         func_312D20
label_2fda7c:
    if (ctx->pc == 0x2FDA7Cu) {
        ctx->pc = 0x2FDA7Cu;
            // 0x2fda7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDA80u;
        goto label_2fda80;
    }
    ctx->pc = 0x2FDA78u;
    SET_GPR_U32(ctx, 31, 0x2FDA80u);
    ctx->pc = 0x2FDA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDA78u;
            // 0x2fda7c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x312D20u;
    if (runtime->hasFunction(0x312D20u)) {
        auto targetFn = runtime->lookupFunction(0x312D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDA80u; }
        if (ctx->pc != 0x2FDA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitUkiObj__FiP8mgCFrameP8mgCFrame_0x312d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDA80u; }
        if (ctx->pc != 0x2FDA80u) { return; }
    }
    ctx->pc = 0x2FDA80u;
label_2fda80:
    // 0x2fda80: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fda80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fda84:
    // 0x2fda84: 0xc04e748  jal         func_139D20
label_2fda88:
    if (ctx->pc == 0x2FDA88u) {
        ctx->pc = 0x2FDA88u;
            // 0x2fda88: 0x24051f40  addiu       $a1, $zero, 0x1F40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8000));
        ctx->pc = 0x2FDA8Cu;
        goto label_2fda8c;
    }
    ctx->pc = 0x2FDA84u;
    SET_GPR_U32(ctx, 31, 0x2FDA8Cu);
    ctx->pc = 0x2FDA88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDA84u;
            // 0x2fda88: 0x24051f40  addiu       $a1, $zero, 0x1F40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDA8Cu; }
        if (ctx->pc != 0x2FDA8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDA8Cu; }
        if (ctx->pc != 0x2FDA8Cu) { return; }
    }
    ctx->pc = 0x2FDA8Cu;
label_2fda8c:
    // 0x2fda8c: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x2fda8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_2fda90:
    // 0x2fda90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2fda90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fda94:
    // 0x2fda94: 0x24849880  addiu       $a0, $a0, -0x6780
    ctx->pc = 0x2fda94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940800));
label_2fda98:
    // 0x2fda98: 0xc04e79c  jal         func_139E70
label_2fda9c:
    if (ctx->pc == 0x2FDA9Cu) {
        ctx->pc = 0x2FDA9Cu;
            // 0x2fda9c: 0x24061f40  addiu       $a2, $zero, 0x1F40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8000));
        ctx->pc = 0x2FDAA0u;
        goto label_2fdaa0;
    }
    ctx->pc = 0x2FDA98u;
    SET_GPR_U32(ctx, 31, 0x2FDAA0u);
    ctx->pc = 0x2FDA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDA98u;
            // 0x2fda9c: 0x24061f40  addiu       $a2, $zero, 0x1F40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDAA0u; }
        if (ctx->pc != 0x2FDAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDAA0u; }
        if (ctx->pc != 0x2FDAA0u) { return; }
    }
    ctx->pc = 0x2FDAA0u;
label_2fdaa0:
    // 0x2fdaa0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2fdaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2fdaa4:
    // 0x2fdaa4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2fdaa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fdaa8:
    // 0x2fdaa8: 0xaf829f74  sw          $v0, -0x608C($gp)
    ctx->pc = 0x2fdaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942580), GPR_U32(ctx, 2));
label_2fdaac:
    // 0x2fdaac: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2fdaacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2fdab0:
    // 0x2fdab0: 0xc04e748  jal         func_139D20
label_2fdab4:
    if (ctx->pc == 0x2FDAB4u) {
        ctx->pc = 0x2FDAB4u;
            // 0x2fdab4: 0xaf829f78  sw          $v0, -0x6088($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942584), GPR_U32(ctx, 2));
        ctx->pc = 0x2FDAB8u;
        goto label_2fdab8;
    }
    ctx->pc = 0x2FDAB0u;
    SET_GPR_U32(ctx, 31, 0x2FDAB8u);
    ctx->pc = 0x2FDAB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDAB0u;
            // 0x2fdab4: 0xaf829f78  sw          $v0, -0x6088($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294942584), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDAB8u; }
        if (ctx->pc != 0x2FDAB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDAB8u; }
        if (ctx->pc != 0x2FDAB8u) { return; }
    }
    ctx->pc = 0x2FDAB8u;
label_2fdab8:
    // 0x2fdab8: 0x3c0401f6  lui         $a0, 0x1F6
    ctx->pc = 0x2fdab8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)502 << 16));
label_2fdabc:
    // 0x2fdabc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2fdabcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fdac0:
    // 0x2fdac0: 0x248498b0  addiu       $a0, $a0, -0x6750
    ctx->pc = 0x2fdac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940848));
label_2fdac4:
    // 0x2fdac4: 0xc04e79c  jal         func_139E70
label_2fdac8:
    if (ctx->pc == 0x2FDAC8u) {
        ctx->pc = 0x2FDAC8u;
            // 0x2fdac8: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x2FDACCu;
        goto label_2fdacc;
    }
    ctx->pc = 0x2FDAC4u;
    SET_GPR_U32(ctx, 31, 0x2FDACCu);
    ctx->pc = 0x2FDAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDAC4u;
            // 0x2fdac8: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDACCu; }
        if (ctx->pc != 0x2FDACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDACCu; }
        if (ctx->pc != 0x2FDACCu) { return; }
    }
    ctx->pc = 0x2FDACCu;
label_2fdacc:
    // 0x2fdacc: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2fdaccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_2fdad0:
    // 0x2fdad0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fdad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fdad4:
    // 0x2fdad4: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x2fdad4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
label_2fdad8:
    // 0x2fdad8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fdad8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fdadc:
    // 0x2fdadc: 0xc0524dc  jal         func_149370
label_2fdae0:
    if (ctx->pc == 0x2FDAE0u) {
        ctx->pc = 0x2FDAE0u;
            // 0x2fdae0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDAE4u;
        goto label_2fdae4;
    }
    ctx->pc = 0x2FDADCu;
    SET_GPR_U32(ctx, 31, 0x2FDAE4u);
    ctx->pc = 0x2FDAE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDADCu;
            // 0x2fdae0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDAE4u; }
        if (ctx->pc != 0x2FDAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDAE4u; }
        if (ctx->pc != 0x2FDAE4u) { return; }
    }
    ctx->pc = 0x2FDAE4u;
label_2fdae4:
    // 0x2fdae4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2fdae8:
    if (ctx->pc == 0x2FDAE8u) {
        ctx->pc = 0x2FDAECu;
        goto label_2fdaec;
    }
    ctx->pc = 0x2FDAE4u;
    {
        const bool branch_taken_0x2fdae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdae4) {
            ctx->pc = 0x2FDB08u;
            goto label_2fdb08;
        }
    }
    ctx->pc = 0x2FDAECu;
label_2fdaec:
    // 0x2fdaec: 0xc06334c  jal         func_18CD30
label_2fdaf0:
    if (ctx->pc == 0x2FDAF0u) {
        ctx->pc = 0x2FDAF0u;
            // 0x2fdaf0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2FDAF4u;
        goto label_2fdaf4;
    }
    ctx->pc = 0x2FDAECu;
    SET_GPR_U32(ctx, 31, 0x2FDAF4u);
    ctx->pc = 0x2FDAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDAECu;
            // 0x2fdaf0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18CD30u;
    if (runtime->hasFunction(0x18CD30u)) {
        auto targetFn = runtime->lookupFunction(0x18CD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDAF4u; }
        if (ctx->pc != 0x2FDAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndInitPort__Fi_0x18cd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDAF4u; }
        if (ctx->pc != 0x2FDAF4u) { return; }
    }
    ctx->pc = 0x2FDAF4u;
label_2fdaf4:
    // 0x2fdaf4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2fdaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2fdaf8:
    // 0x2fdaf8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fdaf8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fdafc:
    // 0x2fdafc: 0xc06368c  jal         func_18DA30
label_2fdb00:
    if (ctx->pc == 0x2FDB00u) {
        ctx->pc = 0x2FDB00u;
            // 0x2fdb00: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDB04u;
        goto label_2fdb04;
    }
    ctx->pc = 0x2FDAFCu;
    SET_GPR_U32(ctx, 31, 0x2FDB04u);
    ctx->pc = 0x2FDB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDAFCu;
            // 0x2fdb00: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DA30u;
    if (runtime->hasFunction(0x18DA30u)) {
        auto targetFn = runtime->lookupFunction(0x18DA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDB04u; }
        if (ctx->pc != 0x2FDB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndLoadSound__FiPUiP9mgCMemory_0x18da30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDB04u; }
        if (ctx->pc != 0x2FDB04u) { return; }
    }
    ctx->pc = 0x2FDB04u;
label_2fdb04:
    // 0x2fdb04: 0xaf829f74  sw          $v0, -0x608C($gp)
    ctx->pc = 0x2fdb04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942580), GPR_U32(ctx, 2));
label_2fdb08:
    // 0x2fdb08: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2fdb08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_2fdb0c:
    // 0x2fdb0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fdb0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fdb10:
    // 0x2fdb10: 0x24841e20  addiu       $a0, $a0, 0x1E20
    ctx->pc = 0x2fdb10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7712));
label_2fdb14:
    // 0x2fdb14: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fdb14u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fdb18:
    // 0x2fdb18: 0xc0524dc  jal         func_149370
label_2fdb1c:
    if (ctx->pc == 0x2FDB1Cu) {
        ctx->pc = 0x2FDB1Cu;
            // 0x2fdb1c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDB20u;
        goto label_2fdb20;
    }
    ctx->pc = 0x2FDB18u;
    SET_GPR_U32(ctx, 31, 0x2FDB20u);
    ctx->pc = 0x2FDB1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDB18u;
            // 0x2fdb1c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDB20u; }
        if (ctx->pc != 0x2FDB20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDB20u; }
        if (ctx->pc != 0x2FDB20u) { return; }
    }
    ctx->pc = 0x2FDB20u;
label_2fdb20:
    // 0x2fdb20: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2fdb24:
    if (ctx->pc == 0x2FDB24u) {
        ctx->pc = 0x2FDB24u;
            // 0x2fdb24: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x2FDB28u;
        goto label_2fdb28;
    }
    ctx->pc = 0x2FDB20u;
    {
        const bool branch_taken_0x2fdb20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDB20u;
            // 0x2fdb24: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdb20) {
            ctx->pc = 0x2FDB58u;
            goto label_2fdb58;
        }
    }
    ctx->pc = 0x2FDB28u;
label_2fdb28:
    // 0x2fdb28: 0xc06334c  jal         func_18CD30
label_2fdb2c:
    if (ctx->pc == 0x2FDB2Cu) {
        ctx->pc = 0x2FDB30u;
        goto label_2fdb30;
    }
    ctx->pc = 0x2FDB28u;
    SET_GPR_U32(ctx, 31, 0x2FDB30u);
    ctx->pc = 0x18CD30u;
    if (runtime->hasFunction(0x18CD30u)) {
        auto targetFn = runtime->lookupFunction(0x18CD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDB30u; }
        if (ctx->pc != 0x2FDB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndInitPort__Fi_0x18cd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDB30u; }
        if (ctx->pc != 0x2FDB30u) { return; }
    }
    ctx->pc = 0x2FDB30u;
label_2fdb30:
    // 0x2fdb30: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fdb30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2fdb34:
    // 0x2fdb34: 0x3c0601f6  lui         $a2, 0x1F6
    ctx->pc = 0x2fdb34u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)502 << 16));
label_2fdb38:
    // 0x2fdb38: 0xac2098d4  sw          $zero, -0x672C($at)
    ctx->pc = 0x2fdb38u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294940884), GPR_U32(ctx, 0));
label_2fdb3c:
    // 0x2fdb3c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2fdb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2fdb40:
    // 0x2fdb40: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2fdb40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2fdb44:
    // 0x2fdb44: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fdb44u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fdb48:
    // 0x2fdb48: 0x24c698b0  addiu       $a2, $a2, -0x6750
    ctx->pc = 0x2fdb48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940848));
label_2fdb4c:
    // 0x2fdb4c: 0xc06368c  jal         func_18DA30
label_2fdb50:
    if (ctx->pc == 0x2FDB50u) {
        ctx->pc = 0x2FDB50u;
            // 0x2fdb50: 0xac2098cc  sw          $zero, -0x6734($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294940876), GPR_U32(ctx, 0));
        ctx->pc = 0x2FDB54u;
        goto label_2fdb54;
    }
    ctx->pc = 0x2FDB4Cu;
    SET_GPR_U32(ctx, 31, 0x2FDB54u);
    ctx->pc = 0x2FDB50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDB4Cu;
            // 0x2fdb50: 0xac2098cc  sw          $zero, -0x6734($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294940876), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DA30u;
    if (runtime->hasFunction(0x18DA30u)) {
        auto targetFn = runtime->lookupFunction(0x18DA30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDB54u; }
        if (ctx->pc != 0x2FDB54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndLoadSound__FiPUiP9mgCMemory_0x18da30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDB54u; }
        if (ctx->pc != 0x2FDB54u) { return; }
    }
    ctx->pc = 0x2FDB54u;
label_2fdb54:
    // 0x2fdb54: 0xaf829f78  sw          $v0, -0x6088($gp)
    ctx->pc = 0x2fdb54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942584), GPR_U32(ctx, 2));
label_2fdb58:
    // 0x2fdb58: 0x8ea20014  lw          $v0, 0x14($s5)
    ctx->pc = 0x2fdb58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 20)));
label_2fdb5c:
    // 0x2fdb5c: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_2fdb60:
    if (ctx->pc == 0x2FDB60u) {
        ctx->pc = 0x2FDB60u;
            // 0x2fdb60: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDB64u;
        goto label_2fdb64;
    }
    ctx->pc = 0x2FDB5Cu;
    {
        const bool branch_taken_0x2fdb5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FDB60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDB5Cu;
            // 0x2fdb60: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdb5c) {
            ctx->pc = 0x2FDBB8u;
            goto label_2fdbb8;
        }
    }
    ctx->pc = 0x2FDB64u;
label_2fdb64:
    // 0x2fdb64: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2fdb64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_2fdb68:
    // 0x2fdb68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fdb68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fdb6c:
    // 0x2fdb6c: 0x24841de0  addiu       $a0, $a0, 0x1DE0
    ctx->pc = 0x2fdb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7648));
label_2fdb70:
    // 0x2fdb70: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fdb70u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fdb74:
    // 0x2fdb74: 0xc0524dc  jal         func_149370
label_2fdb78:
    if (ctx->pc == 0x2FDB78u) {
        ctx->pc = 0x2FDB78u;
            // 0x2fdb78: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDB7Cu;
        goto label_2fdb7c;
    }
    ctx->pc = 0x2FDB74u;
    SET_GPR_U32(ctx, 31, 0x2FDB7Cu);
    ctx->pc = 0x2FDB78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDB74u;
            // 0x2fdb78: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149370u;
    if (runtime->hasFunction(0x149370u)) {
        auto targetFn = runtime->lookupFunction(0x149370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDB7Cu; }
        if (ctx->pc != 0x2FDB7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFile2__FPcPvPii_0x149370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDB7Cu; }
        if (ctx->pc != 0x2FDB7Cu) { return; }
    }
    ctx->pc = 0x2FDB7Cu;
label_2fdb7c:
    // 0x2fdb7c: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2fdb80:
    if (ctx->pc == 0x2FDB80u) {
        ctx->pc = 0x2FDB84u;
        goto label_2fdb84;
    }
    ctx->pc = 0x2FDB7Cu;
    {
        const bool branch_taken_0x2fdb7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fdb7c) {
            ctx->pc = 0x2FDBB4u;
            goto label_2fdbb4;
        }
    }
    ctx->pc = 0x2FDB84u;
label_2fdb84:
    // 0x2fdb84: 0x8f849fa0  lw          $a0, -0x6060($gp)
    ctx->pc = 0x2fdb84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294942624)));
label_2fdb88:
    // 0x2fdb88: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x2fdb88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_2fdb8c:
    // 0x2fdb8c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2fdb8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fdb90:
    // 0x2fdb90: 0x24c61df8  addiu       $a2, $a2, 0x1DF8
    ctx->pc = 0x2fdb90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 7672));
label_2fdb94:
    // 0x2fdb94: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x2fdb94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fdb98:
    // 0x2fdb98: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2fdb98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fdb9c:
    // 0x2fdb9c: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x2fdb9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fdba0:
    // 0x2fdba0: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2fdba0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fdba4:
    // 0x2fdba4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2fdba4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2fdba8:
    // 0x2fdba8: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x2fdba8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_2fdbac:
    // 0x2fdbac: 0x320f809  jalr        $t9
label_2fdbb0:
    if (ctx->pc == 0x2FDBB0u) {
        ctx->pc = 0x2FDBB0u;
            // 0x2fdbb0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2FDBB4u;
        goto label_2fdbb4;
    }
    ctx->pc = 0x2FDBACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2FDBB4u);
        ctx->pc = 0x2FDBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDBACu;
            // 0x2fdbb0: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2FDBB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2FDBB4u; }
            if (ctx->pc != 0x2FDBB4u) { return; }
        }
        }
    }
    ctx->pc = 0x2FDBB4u;
label_2fdbb4:
    // 0x2fdbb4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2fdbb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2fdbb8:
    // 0x2fdbb8: 0xc0bf248  jal         func_2FC920
label_2fdbbc:
    if (ctx->pc == 0x2FDBBCu) {
        ctx->pc = 0x2FDBC0u;
        goto label_2fdbc0;
    }
    ctx->pc = 0x2FDBB8u;
    SET_GPR_U32(ctx, 31, 0x2FDBC0u);
    ctx->pc = 0x2FC920u;
    if (runtime->hasFunction(0x2FC920u)) {
        auto targetFn = runtime->lookupFunction(0x2FC920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDBC0u; }
        if (ctx->pc != 0x2FDBC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgRestartFishing__FP11SubGameInfo_0x2fc920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDBC0u; }
        if (ctx->pc != 0x2FDBC0u) { return; }
    }
    ctx->pc = 0x2FDBC0u;
label_2fdbc0:
    // 0x2fdbc0: 0x8e430028  lw          $v1, 0x28($s2)
    ctx->pc = 0x2fdbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_2fdbc4:
    // 0x2fdbc4: 0x8e420024  lw          $v0, 0x24($s2)
    ctx->pc = 0x2fdbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_2fdbc8:
    // 0x2fdbc8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x2fdbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2fdbcc:
    // 0x2fdbcc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x2fdbccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_2fdbd0:
    // 0x2fdbd0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_2fdbd4:
    if (ctx->pc == 0x2FDBD4u) {
        ctx->pc = 0x2FDBD4u;
            // 0x2fdbd4: 0x22a83  sra         $a1, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 10));
        ctx->pc = 0x2FDBD8u;
        goto label_2fdbd8;
    }
    ctx->pc = 0x2FDBD0u;
    {
        const bool branch_taken_0x2fdbd0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2FDBD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDBD0u;
            // 0x2fdbd4: 0x22a83  sra         $a1, $v0, 10 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fdbd0) {
            ctx->pc = 0x2FDBE0u;
            goto label_2fdbe0;
        }
    }
    ctx->pc = 0x2FDBD8u;
label_2fdbd8:
    // 0x2fdbd8: 0x244203ff  addiu       $v0, $v0, 0x3FF
    ctx->pc = 0x2fdbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1023));
label_2fdbdc:
    // 0x2fdbdc: 0x22a83  sra         $a1, $v0, 10
    ctx->pc = 0x2fdbdcu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 10));
label_2fdbe0:
    // 0x2fdbe0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x2fdbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_2fdbe4:
    // 0x2fdbe4: 0xc04a0d2  jal         func_128348
label_2fdbe8:
    if (ctx->pc == 0x2FDBE8u) {
        ctx->pc = 0x2FDBE8u;
            // 0x2fdbe8: 0x24841f10  addiu       $a0, $a0, 0x1F10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7952));
        ctx->pc = 0x2FDBECu;
        goto label_2fdbec;
    }
    ctx->pc = 0x2FDBE4u;
    SET_GPR_U32(ctx, 31, 0x2FDBECu);
    ctx->pc = 0x2FDBE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDBE4u;
            // 0x2fdbe8: 0x24841f10  addiu       $a0, $a0, 0x1F10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDBECu; }
        if (ctx->pc != 0x2FDBECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FDBECu; }
        if (ctx->pc != 0x2FDBECu) { return; }
    }
    ctx->pc = 0x2FDBECu;
label_2fdbec:
    // 0x2fdbec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2fdbecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fdbf0:
    // 0x2fdbf0: 0xaf83a084  sw          $v1, -0x5F7C($gp)
    ctx->pc = 0x2fdbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294942852), GPR_U32(ctx, 3));
label_2fdbf4:
    // 0x2fdbf4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2fdbf4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2fdbf8:
    // 0x2fdbf8: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2fdbf8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_2fdbfc:
    // 0x2fdbfc: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2fdbfcu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_2fdc00:
    // 0x2fdc00: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2fdc00u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_2fdc04:
    // 0x2fdc04: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2fdc04u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_2fdc08:
    // 0x2fdc08: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2fdc08u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2fdc0c:
    // 0x2fdc0c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2fdc0cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2fdc10:
    // 0x2fdc10: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fdc10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2fdc14:
    // 0x2fdc14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fdc14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2fdc18:
    // 0x2fdc18: 0x3e00008  jr          $ra
label_2fdc1c:
    if (ctx->pc == 0x2FDC1Cu) {
        ctx->pc = 0x2FDC1Cu;
            // 0x2fdc1c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x2FDC20u;
        goto label_fallthrough_0x2fdc18;
    }
    ctx->pc = 0x2FDC18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FDC1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FDC18u;
            // 0x2fdc1c: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2fdc18:
    ctx->pc = 0x2FDC20u;
}
