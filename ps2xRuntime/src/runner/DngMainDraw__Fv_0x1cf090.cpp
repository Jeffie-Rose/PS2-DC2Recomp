#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: DngMainDraw__Fv
// Address: 0x1cf090 - 0x1d06bc
void DngMainDraw__Fv_0x1cf090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("DngMainDraw__Fv_0x1cf090");
#endif

    switch (ctx->pc) {
        case 0x1cf090u: goto label_1cf090;
        case 0x1cf094u: goto label_1cf094;
        case 0x1cf098u: goto label_1cf098;
        case 0x1cf09cu: goto label_1cf09c;
        case 0x1cf0a0u: goto label_1cf0a0;
        case 0x1cf0a4u: goto label_1cf0a4;
        case 0x1cf0a8u: goto label_1cf0a8;
        case 0x1cf0acu: goto label_1cf0ac;
        case 0x1cf0b0u: goto label_1cf0b0;
        case 0x1cf0b4u: goto label_1cf0b4;
        case 0x1cf0b8u: goto label_1cf0b8;
        case 0x1cf0bcu: goto label_1cf0bc;
        case 0x1cf0c0u: goto label_1cf0c0;
        case 0x1cf0c4u: goto label_1cf0c4;
        case 0x1cf0c8u: goto label_1cf0c8;
        case 0x1cf0ccu: goto label_1cf0cc;
        case 0x1cf0d0u: goto label_1cf0d0;
        case 0x1cf0d4u: goto label_1cf0d4;
        case 0x1cf0d8u: goto label_1cf0d8;
        case 0x1cf0dcu: goto label_1cf0dc;
        case 0x1cf0e0u: goto label_1cf0e0;
        case 0x1cf0e4u: goto label_1cf0e4;
        case 0x1cf0e8u: goto label_1cf0e8;
        case 0x1cf0ecu: goto label_1cf0ec;
        case 0x1cf0f0u: goto label_1cf0f0;
        case 0x1cf0f4u: goto label_1cf0f4;
        case 0x1cf0f8u: goto label_1cf0f8;
        case 0x1cf0fcu: goto label_1cf0fc;
        case 0x1cf100u: goto label_1cf100;
        case 0x1cf104u: goto label_1cf104;
        case 0x1cf108u: goto label_1cf108;
        case 0x1cf10cu: goto label_1cf10c;
        case 0x1cf110u: goto label_1cf110;
        case 0x1cf114u: goto label_1cf114;
        case 0x1cf118u: goto label_1cf118;
        case 0x1cf11cu: goto label_1cf11c;
        case 0x1cf120u: goto label_1cf120;
        case 0x1cf124u: goto label_1cf124;
        case 0x1cf128u: goto label_1cf128;
        case 0x1cf12cu: goto label_1cf12c;
        case 0x1cf130u: goto label_1cf130;
        case 0x1cf134u: goto label_1cf134;
        case 0x1cf138u: goto label_1cf138;
        case 0x1cf13cu: goto label_1cf13c;
        case 0x1cf140u: goto label_1cf140;
        case 0x1cf144u: goto label_1cf144;
        case 0x1cf148u: goto label_1cf148;
        case 0x1cf14cu: goto label_1cf14c;
        case 0x1cf150u: goto label_1cf150;
        case 0x1cf154u: goto label_1cf154;
        case 0x1cf158u: goto label_1cf158;
        case 0x1cf15cu: goto label_1cf15c;
        case 0x1cf160u: goto label_1cf160;
        case 0x1cf164u: goto label_1cf164;
        case 0x1cf168u: goto label_1cf168;
        case 0x1cf16cu: goto label_1cf16c;
        case 0x1cf170u: goto label_1cf170;
        case 0x1cf174u: goto label_1cf174;
        case 0x1cf178u: goto label_1cf178;
        case 0x1cf17cu: goto label_1cf17c;
        case 0x1cf180u: goto label_1cf180;
        case 0x1cf184u: goto label_1cf184;
        case 0x1cf188u: goto label_1cf188;
        case 0x1cf18cu: goto label_1cf18c;
        case 0x1cf190u: goto label_1cf190;
        case 0x1cf194u: goto label_1cf194;
        case 0x1cf198u: goto label_1cf198;
        case 0x1cf19cu: goto label_1cf19c;
        case 0x1cf1a0u: goto label_1cf1a0;
        case 0x1cf1a4u: goto label_1cf1a4;
        case 0x1cf1a8u: goto label_1cf1a8;
        case 0x1cf1acu: goto label_1cf1ac;
        case 0x1cf1b0u: goto label_1cf1b0;
        case 0x1cf1b4u: goto label_1cf1b4;
        case 0x1cf1b8u: goto label_1cf1b8;
        case 0x1cf1bcu: goto label_1cf1bc;
        case 0x1cf1c0u: goto label_1cf1c0;
        case 0x1cf1c4u: goto label_1cf1c4;
        case 0x1cf1c8u: goto label_1cf1c8;
        case 0x1cf1ccu: goto label_1cf1cc;
        case 0x1cf1d0u: goto label_1cf1d0;
        case 0x1cf1d4u: goto label_1cf1d4;
        case 0x1cf1d8u: goto label_1cf1d8;
        case 0x1cf1dcu: goto label_1cf1dc;
        case 0x1cf1e0u: goto label_1cf1e0;
        case 0x1cf1e4u: goto label_1cf1e4;
        case 0x1cf1e8u: goto label_1cf1e8;
        case 0x1cf1ecu: goto label_1cf1ec;
        case 0x1cf1f0u: goto label_1cf1f0;
        case 0x1cf1f4u: goto label_1cf1f4;
        case 0x1cf1f8u: goto label_1cf1f8;
        case 0x1cf1fcu: goto label_1cf1fc;
        case 0x1cf200u: goto label_1cf200;
        case 0x1cf204u: goto label_1cf204;
        case 0x1cf208u: goto label_1cf208;
        case 0x1cf20cu: goto label_1cf20c;
        case 0x1cf210u: goto label_1cf210;
        case 0x1cf214u: goto label_1cf214;
        case 0x1cf218u: goto label_1cf218;
        case 0x1cf21cu: goto label_1cf21c;
        case 0x1cf220u: goto label_1cf220;
        case 0x1cf224u: goto label_1cf224;
        case 0x1cf228u: goto label_1cf228;
        case 0x1cf22cu: goto label_1cf22c;
        case 0x1cf230u: goto label_1cf230;
        case 0x1cf234u: goto label_1cf234;
        case 0x1cf238u: goto label_1cf238;
        case 0x1cf23cu: goto label_1cf23c;
        case 0x1cf240u: goto label_1cf240;
        case 0x1cf244u: goto label_1cf244;
        case 0x1cf248u: goto label_1cf248;
        case 0x1cf24cu: goto label_1cf24c;
        case 0x1cf250u: goto label_1cf250;
        case 0x1cf254u: goto label_1cf254;
        case 0x1cf258u: goto label_1cf258;
        case 0x1cf25cu: goto label_1cf25c;
        case 0x1cf260u: goto label_1cf260;
        case 0x1cf264u: goto label_1cf264;
        case 0x1cf268u: goto label_1cf268;
        case 0x1cf26cu: goto label_1cf26c;
        case 0x1cf270u: goto label_1cf270;
        case 0x1cf274u: goto label_1cf274;
        case 0x1cf278u: goto label_1cf278;
        case 0x1cf27cu: goto label_1cf27c;
        case 0x1cf280u: goto label_1cf280;
        case 0x1cf284u: goto label_1cf284;
        case 0x1cf288u: goto label_1cf288;
        case 0x1cf28cu: goto label_1cf28c;
        case 0x1cf290u: goto label_1cf290;
        case 0x1cf294u: goto label_1cf294;
        case 0x1cf298u: goto label_1cf298;
        case 0x1cf29cu: goto label_1cf29c;
        case 0x1cf2a0u: goto label_1cf2a0;
        case 0x1cf2a4u: goto label_1cf2a4;
        case 0x1cf2a8u: goto label_1cf2a8;
        case 0x1cf2acu: goto label_1cf2ac;
        case 0x1cf2b0u: goto label_1cf2b0;
        case 0x1cf2b4u: goto label_1cf2b4;
        case 0x1cf2b8u: goto label_1cf2b8;
        case 0x1cf2bcu: goto label_1cf2bc;
        case 0x1cf2c0u: goto label_1cf2c0;
        case 0x1cf2c4u: goto label_1cf2c4;
        case 0x1cf2c8u: goto label_1cf2c8;
        case 0x1cf2ccu: goto label_1cf2cc;
        case 0x1cf2d0u: goto label_1cf2d0;
        case 0x1cf2d4u: goto label_1cf2d4;
        case 0x1cf2d8u: goto label_1cf2d8;
        case 0x1cf2dcu: goto label_1cf2dc;
        case 0x1cf2e0u: goto label_1cf2e0;
        case 0x1cf2e4u: goto label_1cf2e4;
        case 0x1cf2e8u: goto label_1cf2e8;
        case 0x1cf2ecu: goto label_1cf2ec;
        case 0x1cf2f0u: goto label_1cf2f0;
        case 0x1cf2f4u: goto label_1cf2f4;
        case 0x1cf2f8u: goto label_1cf2f8;
        case 0x1cf2fcu: goto label_1cf2fc;
        case 0x1cf300u: goto label_1cf300;
        case 0x1cf304u: goto label_1cf304;
        case 0x1cf308u: goto label_1cf308;
        case 0x1cf30cu: goto label_1cf30c;
        case 0x1cf310u: goto label_1cf310;
        case 0x1cf314u: goto label_1cf314;
        case 0x1cf318u: goto label_1cf318;
        case 0x1cf31cu: goto label_1cf31c;
        case 0x1cf320u: goto label_1cf320;
        case 0x1cf324u: goto label_1cf324;
        case 0x1cf328u: goto label_1cf328;
        case 0x1cf32cu: goto label_1cf32c;
        case 0x1cf330u: goto label_1cf330;
        case 0x1cf334u: goto label_1cf334;
        case 0x1cf338u: goto label_1cf338;
        case 0x1cf33cu: goto label_1cf33c;
        case 0x1cf340u: goto label_1cf340;
        case 0x1cf344u: goto label_1cf344;
        case 0x1cf348u: goto label_1cf348;
        case 0x1cf34cu: goto label_1cf34c;
        case 0x1cf350u: goto label_1cf350;
        case 0x1cf354u: goto label_1cf354;
        case 0x1cf358u: goto label_1cf358;
        case 0x1cf35cu: goto label_1cf35c;
        case 0x1cf360u: goto label_1cf360;
        case 0x1cf364u: goto label_1cf364;
        case 0x1cf368u: goto label_1cf368;
        case 0x1cf36cu: goto label_1cf36c;
        case 0x1cf370u: goto label_1cf370;
        case 0x1cf374u: goto label_1cf374;
        case 0x1cf378u: goto label_1cf378;
        case 0x1cf37cu: goto label_1cf37c;
        case 0x1cf380u: goto label_1cf380;
        case 0x1cf384u: goto label_1cf384;
        case 0x1cf388u: goto label_1cf388;
        case 0x1cf38cu: goto label_1cf38c;
        case 0x1cf390u: goto label_1cf390;
        case 0x1cf394u: goto label_1cf394;
        case 0x1cf398u: goto label_1cf398;
        case 0x1cf39cu: goto label_1cf39c;
        case 0x1cf3a0u: goto label_1cf3a0;
        case 0x1cf3a4u: goto label_1cf3a4;
        case 0x1cf3a8u: goto label_1cf3a8;
        case 0x1cf3acu: goto label_1cf3ac;
        case 0x1cf3b0u: goto label_1cf3b0;
        case 0x1cf3b4u: goto label_1cf3b4;
        case 0x1cf3b8u: goto label_1cf3b8;
        case 0x1cf3bcu: goto label_1cf3bc;
        case 0x1cf3c0u: goto label_1cf3c0;
        case 0x1cf3c4u: goto label_1cf3c4;
        case 0x1cf3c8u: goto label_1cf3c8;
        case 0x1cf3ccu: goto label_1cf3cc;
        case 0x1cf3d0u: goto label_1cf3d0;
        case 0x1cf3d4u: goto label_1cf3d4;
        case 0x1cf3d8u: goto label_1cf3d8;
        case 0x1cf3dcu: goto label_1cf3dc;
        case 0x1cf3e0u: goto label_1cf3e0;
        case 0x1cf3e4u: goto label_1cf3e4;
        case 0x1cf3e8u: goto label_1cf3e8;
        case 0x1cf3ecu: goto label_1cf3ec;
        case 0x1cf3f0u: goto label_1cf3f0;
        case 0x1cf3f4u: goto label_1cf3f4;
        case 0x1cf3f8u: goto label_1cf3f8;
        case 0x1cf3fcu: goto label_1cf3fc;
        case 0x1cf400u: goto label_1cf400;
        case 0x1cf404u: goto label_1cf404;
        case 0x1cf408u: goto label_1cf408;
        case 0x1cf40cu: goto label_1cf40c;
        case 0x1cf410u: goto label_1cf410;
        case 0x1cf414u: goto label_1cf414;
        case 0x1cf418u: goto label_1cf418;
        case 0x1cf41cu: goto label_1cf41c;
        case 0x1cf420u: goto label_1cf420;
        case 0x1cf424u: goto label_1cf424;
        case 0x1cf428u: goto label_1cf428;
        case 0x1cf42cu: goto label_1cf42c;
        case 0x1cf430u: goto label_1cf430;
        case 0x1cf434u: goto label_1cf434;
        case 0x1cf438u: goto label_1cf438;
        case 0x1cf43cu: goto label_1cf43c;
        case 0x1cf440u: goto label_1cf440;
        case 0x1cf444u: goto label_1cf444;
        case 0x1cf448u: goto label_1cf448;
        case 0x1cf44cu: goto label_1cf44c;
        case 0x1cf450u: goto label_1cf450;
        case 0x1cf454u: goto label_1cf454;
        case 0x1cf458u: goto label_1cf458;
        case 0x1cf45cu: goto label_1cf45c;
        case 0x1cf460u: goto label_1cf460;
        case 0x1cf464u: goto label_1cf464;
        case 0x1cf468u: goto label_1cf468;
        case 0x1cf46cu: goto label_1cf46c;
        case 0x1cf470u: goto label_1cf470;
        case 0x1cf474u: goto label_1cf474;
        case 0x1cf478u: goto label_1cf478;
        case 0x1cf47cu: goto label_1cf47c;
        case 0x1cf480u: goto label_1cf480;
        case 0x1cf484u: goto label_1cf484;
        case 0x1cf488u: goto label_1cf488;
        case 0x1cf48cu: goto label_1cf48c;
        case 0x1cf490u: goto label_1cf490;
        case 0x1cf494u: goto label_1cf494;
        case 0x1cf498u: goto label_1cf498;
        case 0x1cf49cu: goto label_1cf49c;
        case 0x1cf4a0u: goto label_1cf4a0;
        case 0x1cf4a4u: goto label_1cf4a4;
        case 0x1cf4a8u: goto label_1cf4a8;
        case 0x1cf4acu: goto label_1cf4ac;
        case 0x1cf4b0u: goto label_1cf4b0;
        case 0x1cf4b4u: goto label_1cf4b4;
        case 0x1cf4b8u: goto label_1cf4b8;
        case 0x1cf4bcu: goto label_1cf4bc;
        case 0x1cf4c0u: goto label_1cf4c0;
        case 0x1cf4c4u: goto label_1cf4c4;
        case 0x1cf4c8u: goto label_1cf4c8;
        case 0x1cf4ccu: goto label_1cf4cc;
        case 0x1cf4d0u: goto label_1cf4d0;
        case 0x1cf4d4u: goto label_1cf4d4;
        case 0x1cf4d8u: goto label_1cf4d8;
        case 0x1cf4dcu: goto label_1cf4dc;
        case 0x1cf4e0u: goto label_1cf4e0;
        case 0x1cf4e4u: goto label_1cf4e4;
        case 0x1cf4e8u: goto label_1cf4e8;
        case 0x1cf4ecu: goto label_1cf4ec;
        case 0x1cf4f0u: goto label_1cf4f0;
        case 0x1cf4f4u: goto label_1cf4f4;
        case 0x1cf4f8u: goto label_1cf4f8;
        case 0x1cf4fcu: goto label_1cf4fc;
        case 0x1cf500u: goto label_1cf500;
        case 0x1cf504u: goto label_1cf504;
        case 0x1cf508u: goto label_1cf508;
        case 0x1cf50cu: goto label_1cf50c;
        case 0x1cf510u: goto label_1cf510;
        case 0x1cf514u: goto label_1cf514;
        case 0x1cf518u: goto label_1cf518;
        case 0x1cf51cu: goto label_1cf51c;
        case 0x1cf520u: goto label_1cf520;
        case 0x1cf524u: goto label_1cf524;
        case 0x1cf528u: goto label_1cf528;
        case 0x1cf52cu: goto label_1cf52c;
        case 0x1cf530u: goto label_1cf530;
        case 0x1cf534u: goto label_1cf534;
        case 0x1cf538u: goto label_1cf538;
        case 0x1cf53cu: goto label_1cf53c;
        case 0x1cf540u: goto label_1cf540;
        case 0x1cf544u: goto label_1cf544;
        case 0x1cf548u: goto label_1cf548;
        case 0x1cf54cu: goto label_1cf54c;
        case 0x1cf550u: goto label_1cf550;
        case 0x1cf554u: goto label_1cf554;
        case 0x1cf558u: goto label_1cf558;
        case 0x1cf55cu: goto label_1cf55c;
        case 0x1cf560u: goto label_1cf560;
        case 0x1cf564u: goto label_1cf564;
        case 0x1cf568u: goto label_1cf568;
        case 0x1cf56cu: goto label_1cf56c;
        case 0x1cf570u: goto label_1cf570;
        case 0x1cf574u: goto label_1cf574;
        case 0x1cf578u: goto label_1cf578;
        case 0x1cf57cu: goto label_1cf57c;
        case 0x1cf580u: goto label_1cf580;
        case 0x1cf584u: goto label_1cf584;
        case 0x1cf588u: goto label_1cf588;
        case 0x1cf58cu: goto label_1cf58c;
        case 0x1cf590u: goto label_1cf590;
        case 0x1cf594u: goto label_1cf594;
        case 0x1cf598u: goto label_1cf598;
        case 0x1cf59cu: goto label_1cf59c;
        case 0x1cf5a0u: goto label_1cf5a0;
        case 0x1cf5a4u: goto label_1cf5a4;
        case 0x1cf5a8u: goto label_1cf5a8;
        case 0x1cf5acu: goto label_1cf5ac;
        case 0x1cf5b0u: goto label_1cf5b0;
        case 0x1cf5b4u: goto label_1cf5b4;
        case 0x1cf5b8u: goto label_1cf5b8;
        case 0x1cf5bcu: goto label_1cf5bc;
        case 0x1cf5c0u: goto label_1cf5c0;
        case 0x1cf5c4u: goto label_1cf5c4;
        case 0x1cf5c8u: goto label_1cf5c8;
        case 0x1cf5ccu: goto label_1cf5cc;
        case 0x1cf5d0u: goto label_1cf5d0;
        case 0x1cf5d4u: goto label_1cf5d4;
        case 0x1cf5d8u: goto label_1cf5d8;
        case 0x1cf5dcu: goto label_1cf5dc;
        case 0x1cf5e0u: goto label_1cf5e0;
        case 0x1cf5e4u: goto label_1cf5e4;
        case 0x1cf5e8u: goto label_1cf5e8;
        case 0x1cf5ecu: goto label_1cf5ec;
        case 0x1cf5f0u: goto label_1cf5f0;
        case 0x1cf5f4u: goto label_1cf5f4;
        case 0x1cf5f8u: goto label_1cf5f8;
        case 0x1cf5fcu: goto label_1cf5fc;
        case 0x1cf600u: goto label_1cf600;
        case 0x1cf604u: goto label_1cf604;
        case 0x1cf608u: goto label_1cf608;
        case 0x1cf60cu: goto label_1cf60c;
        case 0x1cf610u: goto label_1cf610;
        case 0x1cf614u: goto label_1cf614;
        case 0x1cf618u: goto label_1cf618;
        case 0x1cf61cu: goto label_1cf61c;
        case 0x1cf620u: goto label_1cf620;
        case 0x1cf624u: goto label_1cf624;
        case 0x1cf628u: goto label_1cf628;
        case 0x1cf62cu: goto label_1cf62c;
        case 0x1cf630u: goto label_1cf630;
        case 0x1cf634u: goto label_1cf634;
        case 0x1cf638u: goto label_1cf638;
        case 0x1cf63cu: goto label_1cf63c;
        case 0x1cf640u: goto label_1cf640;
        case 0x1cf644u: goto label_1cf644;
        case 0x1cf648u: goto label_1cf648;
        case 0x1cf64cu: goto label_1cf64c;
        case 0x1cf650u: goto label_1cf650;
        case 0x1cf654u: goto label_1cf654;
        case 0x1cf658u: goto label_1cf658;
        case 0x1cf65cu: goto label_1cf65c;
        case 0x1cf660u: goto label_1cf660;
        case 0x1cf664u: goto label_1cf664;
        case 0x1cf668u: goto label_1cf668;
        case 0x1cf66cu: goto label_1cf66c;
        case 0x1cf670u: goto label_1cf670;
        case 0x1cf674u: goto label_1cf674;
        case 0x1cf678u: goto label_1cf678;
        case 0x1cf67cu: goto label_1cf67c;
        case 0x1cf680u: goto label_1cf680;
        case 0x1cf684u: goto label_1cf684;
        case 0x1cf688u: goto label_1cf688;
        case 0x1cf68cu: goto label_1cf68c;
        case 0x1cf690u: goto label_1cf690;
        case 0x1cf694u: goto label_1cf694;
        case 0x1cf698u: goto label_1cf698;
        case 0x1cf69cu: goto label_1cf69c;
        case 0x1cf6a0u: goto label_1cf6a0;
        case 0x1cf6a4u: goto label_1cf6a4;
        case 0x1cf6a8u: goto label_1cf6a8;
        case 0x1cf6acu: goto label_1cf6ac;
        case 0x1cf6b0u: goto label_1cf6b0;
        case 0x1cf6b4u: goto label_1cf6b4;
        case 0x1cf6b8u: goto label_1cf6b8;
        case 0x1cf6bcu: goto label_1cf6bc;
        case 0x1cf6c0u: goto label_1cf6c0;
        case 0x1cf6c4u: goto label_1cf6c4;
        case 0x1cf6c8u: goto label_1cf6c8;
        case 0x1cf6ccu: goto label_1cf6cc;
        case 0x1cf6d0u: goto label_1cf6d0;
        case 0x1cf6d4u: goto label_1cf6d4;
        case 0x1cf6d8u: goto label_1cf6d8;
        case 0x1cf6dcu: goto label_1cf6dc;
        case 0x1cf6e0u: goto label_1cf6e0;
        case 0x1cf6e4u: goto label_1cf6e4;
        case 0x1cf6e8u: goto label_1cf6e8;
        case 0x1cf6ecu: goto label_1cf6ec;
        case 0x1cf6f0u: goto label_1cf6f0;
        case 0x1cf6f4u: goto label_1cf6f4;
        case 0x1cf6f8u: goto label_1cf6f8;
        case 0x1cf6fcu: goto label_1cf6fc;
        case 0x1cf700u: goto label_1cf700;
        case 0x1cf704u: goto label_1cf704;
        case 0x1cf708u: goto label_1cf708;
        case 0x1cf70cu: goto label_1cf70c;
        case 0x1cf710u: goto label_1cf710;
        case 0x1cf714u: goto label_1cf714;
        case 0x1cf718u: goto label_1cf718;
        case 0x1cf71cu: goto label_1cf71c;
        case 0x1cf720u: goto label_1cf720;
        case 0x1cf724u: goto label_1cf724;
        case 0x1cf728u: goto label_1cf728;
        case 0x1cf72cu: goto label_1cf72c;
        case 0x1cf730u: goto label_1cf730;
        case 0x1cf734u: goto label_1cf734;
        case 0x1cf738u: goto label_1cf738;
        case 0x1cf73cu: goto label_1cf73c;
        case 0x1cf740u: goto label_1cf740;
        case 0x1cf744u: goto label_1cf744;
        case 0x1cf748u: goto label_1cf748;
        case 0x1cf74cu: goto label_1cf74c;
        case 0x1cf750u: goto label_1cf750;
        case 0x1cf754u: goto label_1cf754;
        case 0x1cf758u: goto label_1cf758;
        case 0x1cf75cu: goto label_1cf75c;
        case 0x1cf760u: goto label_1cf760;
        case 0x1cf764u: goto label_1cf764;
        case 0x1cf768u: goto label_1cf768;
        case 0x1cf76cu: goto label_1cf76c;
        case 0x1cf770u: goto label_1cf770;
        case 0x1cf774u: goto label_1cf774;
        case 0x1cf778u: goto label_1cf778;
        case 0x1cf77cu: goto label_1cf77c;
        case 0x1cf780u: goto label_1cf780;
        case 0x1cf784u: goto label_1cf784;
        case 0x1cf788u: goto label_1cf788;
        case 0x1cf78cu: goto label_1cf78c;
        case 0x1cf790u: goto label_1cf790;
        case 0x1cf794u: goto label_1cf794;
        case 0x1cf798u: goto label_1cf798;
        case 0x1cf79cu: goto label_1cf79c;
        case 0x1cf7a0u: goto label_1cf7a0;
        case 0x1cf7a4u: goto label_1cf7a4;
        case 0x1cf7a8u: goto label_1cf7a8;
        case 0x1cf7acu: goto label_1cf7ac;
        case 0x1cf7b0u: goto label_1cf7b0;
        case 0x1cf7b4u: goto label_1cf7b4;
        case 0x1cf7b8u: goto label_1cf7b8;
        case 0x1cf7bcu: goto label_1cf7bc;
        case 0x1cf7c0u: goto label_1cf7c0;
        case 0x1cf7c4u: goto label_1cf7c4;
        case 0x1cf7c8u: goto label_1cf7c8;
        case 0x1cf7ccu: goto label_1cf7cc;
        case 0x1cf7d0u: goto label_1cf7d0;
        case 0x1cf7d4u: goto label_1cf7d4;
        case 0x1cf7d8u: goto label_1cf7d8;
        case 0x1cf7dcu: goto label_1cf7dc;
        case 0x1cf7e0u: goto label_1cf7e0;
        case 0x1cf7e4u: goto label_1cf7e4;
        case 0x1cf7e8u: goto label_1cf7e8;
        case 0x1cf7ecu: goto label_1cf7ec;
        case 0x1cf7f0u: goto label_1cf7f0;
        case 0x1cf7f4u: goto label_1cf7f4;
        case 0x1cf7f8u: goto label_1cf7f8;
        case 0x1cf7fcu: goto label_1cf7fc;
        case 0x1cf800u: goto label_1cf800;
        case 0x1cf804u: goto label_1cf804;
        case 0x1cf808u: goto label_1cf808;
        case 0x1cf80cu: goto label_1cf80c;
        case 0x1cf810u: goto label_1cf810;
        case 0x1cf814u: goto label_1cf814;
        case 0x1cf818u: goto label_1cf818;
        case 0x1cf81cu: goto label_1cf81c;
        case 0x1cf820u: goto label_1cf820;
        case 0x1cf824u: goto label_1cf824;
        case 0x1cf828u: goto label_1cf828;
        case 0x1cf82cu: goto label_1cf82c;
        case 0x1cf830u: goto label_1cf830;
        case 0x1cf834u: goto label_1cf834;
        case 0x1cf838u: goto label_1cf838;
        case 0x1cf83cu: goto label_1cf83c;
        case 0x1cf840u: goto label_1cf840;
        case 0x1cf844u: goto label_1cf844;
        case 0x1cf848u: goto label_1cf848;
        case 0x1cf84cu: goto label_1cf84c;
        case 0x1cf850u: goto label_1cf850;
        case 0x1cf854u: goto label_1cf854;
        case 0x1cf858u: goto label_1cf858;
        case 0x1cf85cu: goto label_1cf85c;
        case 0x1cf860u: goto label_1cf860;
        case 0x1cf864u: goto label_1cf864;
        case 0x1cf868u: goto label_1cf868;
        case 0x1cf86cu: goto label_1cf86c;
        case 0x1cf870u: goto label_1cf870;
        case 0x1cf874u: goto label_1cf874;
        case 0x1cf878u: goto label_1cf878;
        case 0x1cf87cu: goto label_1cf87c;
        case 0x1cf880u: goto label_1cf880;
        case 0x1cf884u: goto label_1cf884;
        case 0x1cf888u: goto label_1cf888;
        case 0x1cf88cu: goto label_1cf88c;
        case 0x1cf890u: goto label_1cf890;
        case 0x1cf894u: goto label_1cf894;
        case 0x1cf898u: goto label_1cf898;
        case 0x1cf89cu: goto label_1cf89c;
        case 0x1cf8a0u: goto label_1cf8a0;
        case 0x1cf8a4u: goto label_1cf8a4;
        case 0x1cf8a8u: goto label_1cf8a8;
        case 0x1cf8acu: goto label_1cf8ac;
        case 0x1cf8b0u: goto label_1cf8b0;
        case 0x1cf8b4u: goto label_1cf8b4;
        case 0x1cf8b8u: goto label_1cf8b8;
        case 0x1cf8bcu: goto label_1cf8bc;
        case 0x1cf8c0u: goto label_1cf8c0;
        case 0x1cf8c4u: goto label_1cf8c4;
        case 0x1cf8c8u: goto label_1cf8c8;
        case 0x1cf8ccu: goto label_1cf8cc;
        case 0x1cf8d0u: goto label_1cf8d0;
        case 0x1cf8d4u: goto label_1cf8d4;
        case 0x1cf8d8u: goto label_1cf8d8;
        case 0x1cf8dcu: goto label_1cf8dc;
        case 0x1cf8e0u: goto label_1cf8e0;
        case 0x1cf8e4u: goto label_1cf8e4;
        case 0x1cf8e8u: goto label_1cf8e8;
        case 0x1cf8ecu: goto label_1cf8ec;
        case 0x1cf8f0u: goto label_1cf8f0;
        case 0x1cf8f4u: goto label_1cf8f4;
        case 0x1cf8f8u: goto label_1cf8f8;
        case 0x1cf8fcu: goto label_1cf8fc;
        case 0x1cf900u: goto label_1cf900;
        case 0x1cf904u: goto label_1cf904;
        case 0x1cf908u: goto label_1cf908;
        case 0x1cf90cu: goto label_1cf90c;
        case 0x1cf910u: goto label_1cf910;
        case 0x1cf914u: goto label_1cf914;
        case 0x1cf918u: goto label_1cf918;
        case 0x1cf91cu: goto label_1cf91c;
        case 0x1cf920u: goto label_1cf920;
        case 0x1cf924u: goto label_1cf924;
        case 0x1cf928u: goto label_1cf928;
        case 0x1cf92cu: goto label_1cf92c;
        case 0x1cf930u: goto label_1cf930;
        case 0x1cf934u: goto label_1cf934;
        case 0x1cf938u: goto label_1cf938;
        case 0x1cf93cu: goto label_1cf93c;
        case 0x1cf940u: goto label_1cf940;
        case 0x1cf944u: goto label_1cf944;
        case 0x1cf948u: goto label_1cf948;
        case 0x1cf94cu: goto label_1cf94c;
        case 0x1cf950u: goto label_1cf950;
        case 0x1cf954u: goto label_1cf954;
        case 0x1cf958u: goto label_1cf958;
        case 0x1cf95cu: goto label_1cf95c;
        case 0x1cf960u: goto label_1cf960;
        case 0x1cf964u: goto label_1cf964;
        case 0x1cf968u: goto label_1cf968;
        case 0x1cf96cu: goto label_1cf96c;
        case 0x1cf970u: goto label_1cf970;
        case 0x1cf974u: goto label_1cf974;
        case 0x1cf978u: goto label_1cf978;
        case 0x1cf97cu: goto label_1cf97c;
        case 0x1cf980u: goto label_1cf980;
        case 0x1cf984u: goto label_1cf984;
        case 0x1cf988u: goto label_1cf988;
        case 0x1cf98cu: goto label_1cf98c;
        case 0x1cf990u: goto label_1cf990;
        case 0x1cf994u: goto label_1cf994;
        case 0x1cf998u: goto label_1cf998;
        case 0x1cf99cu: goto label_1cf99c;
        case 0x1cf9a0u: goto label_1cf9a0;
        case 0x1cf9a4u: goto label_1cf9a4;
        case 0x1cf9a8u: goto label_1cf9a8;
        case 0x1cf9acu: goto label_1cf9ac;
        case 0x1cf9b0u: goto label_1cf9b0;
        case 0x1cf9b4u: goto label_1cf9b4;
        case 0x1cf9b8u: goto label_1cf9b8;
        case 0x1cf9bcu: goto label_1cf9bc;
        case 0x1cf9c0u: goto label_1cf9c0;
        case 0x1cf9c4u: goto label_1cf9c4;
        case 0x1cf9c8u: goto label_1cf9c8;
        case 0x1cf9ccu: goto label_1cf9cc;
        case 0x1cf9d0u: goto label_1cf9d0;
        case 0x1cf9d4u: goto label_1cf9d4;
        case 0x1cf9d8u: goto label_1cf9d8;
        case 0x1cf9dcu: goto label_1cf9dc;
        case 0x1cf9e0u: goto label_1cf9e0;
        case 0x1cf9e4u: goto label_1cf9e4;
        case 0x1cf9e8u: goto label_1cf9e8;
        case 0x1cf9ecu: goto label_1cf9ec;
        case 0x1cf9f0u: goto label_1cf9f0;
        case 0x1cf9f4u: goto label_1cf9f4;
        case 0x1cf9f8u: goto label_1cf9f8;
        case 0x1cf9fcu: goto label_1cf9fc;
        case 0x1cfa00u: goto label_1cfa00;
        case 0x1cfa04u: goto label_1cfa04;
        case 0x1cfa08u: goto label_1cfa08;
        case 0x1cfa0cu: goto label_1cfa0c;
        case 0x1cfa10u: goto label_1cfa10;
        case 0x1cfa14u: goto label_1cfa14;
        case 0x1cfa18u: goto label_1cfa18;
        case 0x1cfa1cu: goto label_1cfa1c;
        case 0x1cfa20u: goto label_1cfa20;
        case 0x1cfa24u: goto label_1cfa24;
        case 0x1cfa28u: goto label_1cfa28;
        case 0x1cfa2cu: goto label_1cfa2c;
        case 0x1cfa30u: goto label_1cfa30;
        case 0x1cfa34u: goto label_1cfa34;
        case 0x1cfa38u: goto label_1cfa38;
        case 0x1cfa3cu: goto label_1cfa3c;
        case 0x1cfa40u: goto label_1cfa40;
        case 0x1cfa44u: goto label_1cfa44;
        case 0x1cfa48u: goto label_1cfa48;
        case 0x1cfa4cu: goto label_1cfa4c;
        case 0x1cfa50u: goto label_1cfa50;
        case 0x1cfa54u: goto label_1cfa54;
        case 0x1cfa58u: goto label_1cfa58;
        case 0x1cfa5cu: goto label_1cfa5c;
        case 0x1cfa60u: goto label_1cfa60;
        case 0x1cfa64u: goto label_1cfa64;
        case 0x1cfa68u: goto label_1cfa68;
        case 0x1cfa6cu: goto label_1cfa6c;
        case 0x1cfa70u: goto label_1cfa70;
        case 0x1cfa74u: goto label_1cfa74;
        case 0x1cfa78u: goto label_1cfa78;
        case 0x1cfa7cu: goto label_1cfa7c;
        case 0x1cfa80u: goto label_1cfa80;
        case 0x1cfa84u: goto label_1cfa84;
        case 0x1cfa88u: goto label_1cfa88;
        case 0x1cfa8cu: goto label_1cfa8c;
        case 0x1cfa90u: goto label_1cfa90;
        case 0x1cfa94u: goto label_1cfa94;
        case 0x1cfa98u: goto label_1cfa98;
        case 0x1cfa9cu: goto label_1cfa9c;
        case 0x1cfaa0u: goto label_1cfaa0;
        case 0x1cfaa4u: goto label_1cfaa4;
        case 0x1cfaa8u: goto label_1cfaa8;
        case 0x1cfaacu: goto label_1cfaac;
        case 0x1cfab0u: goto label_1cfab0;
        case 0x1cfab4u: goto label_1cfab4;
        case 0x1cfab8u: goto label_1cfab8;
        case 0x1cfabcu: goto label_1cfabc;
        case 0x1cfac0u: goto label_1cfac0;
        case 0x1cfac4u: goto label_1cfac4;
        case 0x1cfac8u: goto label_1cfac8;
        case 0x1cfaccu: goto label_1cfacc;
        case 0x1cfad0u: goto label_1cfad0;
        case 0x1cfad4u: goto label_1cfad4;
        case 0x1cfad8u: goto label_1cfad8;
        case 0x1cfadcu: goto label_1cfadc;
        case 0x1cfae0u: goto label_1cfae0;
        case 0x1cfae4u: goto label_1cfae4;
        case 0x1cfae8u: goto label_1cfae8;
        case 0x1cfaecu: goto label_1cfaec;
        case 0x1cfaf0u: goto label_1cfaf0;
        case 0x1cfaf4u: goto label_1cfaf4;
        case 0x1cfaf8u: goto label_1cfaf8;
        case 0x1cfafcu: goto label_1cfafc;
        case 0x1cfb00u: goto label_1cfb00;
        case 0x1cfb04u: goto label_1cfb04;
        case 0x1cfb08u: goto label_1cfb08;
        case 0x1cfb0cu: goto label_1cfb0c;
        case 0x1cfb10u: goto label_1cfb10;
        case 0x1cfb14u: goto label_1cfb14;
        case 0x1cfb18u: goto label_1cfb18;
        case 0x1cfb1cu: goto label_1cfb1c;
        case 0x1cfb20u: goto label_1cfb20;
        case 0x1cfb24u: goto label_1cfb24;
        case 0x1cfb28u: goto label_1cfb28;
        case 0x1cfb2cu: goto label_1cfb2c;
        case 0x1cfb30u: goto label_1cfb30;
        case 0x1cfb34u: goto label_1cfb34;
        case 0x1cfb38u: goto label_1cfb38;
        case 0x1cfb3cu: goto label_1cfb3c;
        case 0x1cfb40u: goto label_1cfb40;
        case 0x1cfb44u: goto label_1cfb44;
        case 0x1cfb48u: goto label_1cfb48;
        case 0x1cfb4cu: goto label_1cfb4c;
        case 0x1cfb50u: goto label_1cfb50;
        case 0x1cfb54u: goto label_1cfb54;
        case 0x1cfb58u: goto label_1cfb58;
        case 0x1cfb5cu: goto label_1cfb5c;
        case 0x1cfb60u: goto label_1cfb60;
        case 0x1cfb64u: goto label_1cfb64;
        case 0x1cfb68u: goto label_1cfb68;
        case 0x1cfb6cu: goto label_1cfb6c;
        case 0x1cfb70u: goto label_1cfb70;
        case 0x1cfb74u: goto label_1cfb74;
        case 0x1cfb78u: goto label_1cfb78;
        case 0x1cfb7cu: goto label_1cfb7c;
        case 0x1cfb80u: goto label_1cfb80;
        case 0x1cfb84u: goto label_1cfb84;
        case 0x1cfb88u: goto label_1cfb88;
        case 0x1cfb8cu: goto label_1cfb8c;
        case 0x1cfb90u: goto label_1cfb90;
        case 0x1cfb94u: goto label_1cfb94;
        case 0x1cfb98u: goto label_1cfb98;
        case 0x1cfb9cu: goto label_1cfb9c;
        case 0x1cfba0u: goto label_1cfba0;
        case 0x1cfba4u: goto label_1cfba4;
        case 0x1cfba8u: goto label_1cfba8;
        case 0x1cfbacu: goto label_1cfbac;
        case 0x1cfbb0u: goto label_1cfbb0;
        case 0x1cfbb4u: goto label_1cfbb4;
        case 0x1cfbb8u: goto label_1cfbb8;
        case 0x1cfbbcu: goto label_1cfbbc;
        case 0x1cfbc0u: goto label_1cfbc0;
        case 0x1cfbc4u: goto label_1cfbc4;
        case 0x1cfbc8u: goto label_1cfbc8;
        case 0x1cfbccu: goto label_1cfbcc;
        case 0x1cfbd0u: goto label_1cfbd0;
        case 0x1cfbd4u: goto label_1cfbd4;
        case 0x1cfbd8u: goto label_1cfbd8;
        case 0x1cfbdcu: goto label_1cfbdc;
        case 0x1cfbe0u: goto label_1cfbe0;
        case 0x1cfbe4u: goto label_1cfbe4;
        case 0x1cfbe8u: goto label_1cfbe8;
        case 0x1cfbecu: goto label_1cfbec;
        case 0x1cfbf0u: goto label_1cfbf0;
        case 0x1cfbf4u: goto label_1cfbf4;
        case 0x1cfbf8u: goto label_1cfbf8;
        case 0x1cfbfcu: goto label_1cfbfc;
        case 0x1cfc00u: goto label_1cfc00;
        case 0x1cfc04u: goto label_1cfc04;
        case 0x1cfc08u: goto label_1cfc08;
        case 0x1cfc0cu: goto label_1cfc0c;
        case 0x1cfc10u: goto label_1cfc10;
        case 0x1cfc14u: goto label_1cfc14;
        case 0x1cfc18u: goto label_1cfc18;
        case 0x1cfc1cu: goto label_1cfc1c;
        case 0x1cfc20u: goto label_1cfc20;
        case 0x1cfc24u: goto label_1cfc24;
        case 0x1cfc28u: goto label_1cfc28;
        case 0x1cfc2cu: goto label_1cfc2c;
        case 0x1cfc30u: goto label_1cfc30;
        case 0x1cfc34u: goto label_1cfc34;
        case 0x1cfc38u: goto label_1cfc38;
        case 0x1cfc3cu: goto label_1cfc3c;
        case 0x1cfc40u: goto label_1cfc40;
        case 0x1cfc44u: goto label_1cfc44;
        case 0x1cfc48u: goto label_1cfc48;
        case 0x1cfc4cu: goto label_1cfc4c;
        case 0x1cfc50u: goto label_1cfc50;
        case 0x1cfc54u: goto label_1cfc54;
        case 0x1cfc58u: goto label_1cfc58;
        case 0x1cfc5cu: goto label_1cfc5c;
        case 0x1cfc60u: goto label_1cfc60;
        case 0x1cfc64u: goto label_1cfc64;
        case 0x1cfc68u: goto label_1cfc68;
        case 0x1cfc6cu: goto label_1cfc6c;
        case 0x1cfc70u: goto label_1cfc70;
        case 0x1cfc74u: goto label_1cfc74;
        case 0x1cfc78u: goto label_1cfc78;
        case 0x1cfc7cu: goto label_1cfc7c;
        case 0x1cfc80u: goto label_1cfc80;
        case 0x1cfc84u: goto label_1cfc84;
        case 0x1cfc88u: goto label_1cfc88;
        case 0x1cfc8cu: goto label_1cfc8c;
        case 0x1cfc90u: goto label_1cfc90;
        case 0x1cfc94u: goto label_1cfc94;
        case 0x1cfc98u: goto label_1cfc98;
        case 0x1cfc9cu: goto label_1cfc9c;
        case 0x1cfca0u: goto label_1cfca0;
        case 0x1cfca4u: goto label_1cfca4;
        case 0x1cfca8u: goto label_1cfca8;
        case 0x1cfcacu: goto label_1cfcac;
        case 0x1cfcb0u: goto label_1cfcb0;
        case 0x1cfcb4u: goto label_1cfcb4;
        case 0x1cfcb8u: goto label_1cfcb8;
        case 0x1cfcbcu: goto label_1cfcbc;
        case 0x1cfcc0u: goto label_1cfcc0;
        case 0x1cfcc4u: goto label_1cfcc4;
        case 0x1cfcc8u: goto label_1cfcc8;
        case 0x1cfcccu: goto label_1cfccc;
        case 0x1cfcd0u: goto label_1cfcd0;
        case 0x1cfcd4u: goto label_1cfcd4;
        case 0x1cfcd8u: goto label_1cfcd8;
        case 0x1cfcdcu: goto label_1cfcdc;
        case 0x1cfce0u: goto label_1cfce0;
        case 0x1cfce4u: goto label_1cfce4;
        case 0x1cfce8u: goto label_1cfce8;
        case 0x1cfcecu: goto label_1cfcec;
        case 0x1cfcf0u: goto label_1cfcf0;
        case 0x1cfcf4u: goto label_1cfcf4;
        case 0x1cfcf8u: goto label_1cfcf8;
        case 0x1cfcfcu: goto label_1cfcfc;
        case 0x1cfd00u: goto label_1cfd00;
        case 0x1cfd04u: goto label_1cfd04;
        case 0x1cfd08u: goto label_1cfd08;
        case 0x1cfd0cu: goto label_1cfd0c;
        case 0x1cfd10u: goto label_1cfd10;
        case 0x1cfd14u: goto label_1cfd14;
        case 0x1cfd18u: goto label_1cfd18;
        case 0x1cfd1cu: goto label_1cfd1c;
        case 0x1cfd20u: goto label_1cfd20;
        case 0x1cfd24u: goto label_1cfd24;
        case 0x1cfd28u: goto label_1cfd28;
        case 0x1cfd2cu: goto label_1cfd2c;
        case 0x1cfd30u: goto label_1cfd30;
        case 0x1cfd34u: goto label_1cfd34;
        case 0x1cfd38u: goto label_1cfd38;
        case 0x1cfd3cu: goto label_1cfd3c;
        case 0x1cfd40u: goto label_1cfd40;
        case 0x1cfd44u: goto label_1cfd44;
        case 0x1cfd48u: goto label_1cfd48;
        case 0x1cfd4cu: goto label_1cfd4c;
        case 0x1cfd50u: goto label_1cfd50;
        case 0x1cfd54u: goto label_1cfd54;
        case 0x1cfd58u: goto label_1cfd58;
        case 0x1cfd5cu: goto label_1cfd5c;
        case 0x1cfd60u: goto label_1cfd60;
        case 0x1cfd64u: goto label_1cfd64;
        case 0x1cfd68u: goto label_1cfd68;
        case 0x1cfd6cu: goto label_1cfd6c;
        case 0x1cfd70u: goto label_1cfd70;
        case 0x1cfd74u: goto label_1cfd74;
        case 0x1cfd78u: goto label_1cfd78;
        case 0x1cfd7cu: goto label_1cfd7c;
        case 0x1cfd80u: goto label_1cfd80;
        case 0x1cfd84u: goto label_1cfd84;
        case 0x1cfd88u: goto label_1cfd88;
        case 0x1cfd8cu: goto label_1cfd8c;
        case 0x1cfd90u: goto label_1cfd90;
        case 0x1cfd94u: goto label_1cfd94;
        case 0x1cfd98u: goto label_1cfd98;
        case 0x1cfd9cu: goto label_1cfd9c;
        case 0x1cfda0u: goto label_1cfda0;
        case 0x1cfda4u: goto label_1cfda4;
        case 0x1cfda8u: goto label_1cfda8;
        case 0x1cfdacu: goto label_1cfdac;
        case 0x1cfdb0u: goto label_1cfdb0;
        case 0x1cfdb4u: goto label_1cfdb4;
        case 0x1cfdb8u: goto label_1cfdb8;
        case 0x1cfdbcu: goto label_1cfdbc;
        case 0x1cfdc0u: goto label_1cfdc0;
        case 0x1cfdc4u: goto label_1cfdc4;
        case 0x1cfdc8u: goto label_1cfdc8;
        case 0x1cfdccu: goto label_1cfdcc;
        case 0x1cfdd0u: goto label_1cfdd0;
        case 0x1cfdd4u: goto label_1cfdd4;
        case 0x1cfdd8u: goto label_1cfdd8;
        case 0x1cfddcu: goto label_1cfddc;
        case 0x1cfde0u: goto label_1cfde0;
        case 0x1cfde4u: goto label_1cfde4;
        case 0x1cfde8u: goto label_1cfde8;
        case 0x1cfdecu: goto label_1cfdec;
        case 0x1cfdf0u: goto label_1cfdf0;
        case 0x1cfdf4u: goto label_1cfdf4;
        case 0x1cfdf8u: goto label_1cfdf8;
        case 0x1cfdfcu: goto label_1cfdfc;
        case 0x1cfe00u: goto label_1cfe00;
        case 0x1cfe04u: goto label_1cfe04;
        case 0x1cfe08u: goto label_1cfe08;
        case 0x1cfe0cu: goto label_1cfe0c;
        case 0x1cfe10u: goto label_1cfe10;
        case 0x1cfe14u: goto label_1cfe14;
        case 0x1cfe18u: goto label_1cfe18;
        case 0x1cfe1cu: goto label_1cfe1c;
        case 0x1cfe20u: goto label_1cfe20;
        case 0x1cfe24u: goto label_1cfe24;
        case 0x1cfe28u: goto label_1cfe28;
        case 0x1cfe2cu: goto label_1cfe2c;
        case 0x1cfe30u: goto label_1cfe30;
        case 0x1cfe34u: goto label_1cfe34;
        case 0x1cfe38u: goto label_1cfe38;
        case 0x1cfe3cu: goto label_1cfe3c;
        case 0x1cfe40u: goto label_1cfe40;
        case 0x1cfe44u: goto label_1cfe44;
        case 0x1cfe48u: goto label_1cfe48;
        case 0x1cfe4cu: goto label_1cfe4c;
        case 0x1cfe50u: goto label_1cfe50;
        case 0x1cfe54u: goto label_1cfe54;
        case 0x1cfe58u: goto label_1cfe58;
        case 0x1cfe5cu: goto label_1cfe5c;
        case 0x1cfe60u: goto label_1cfe60;
        case 0x1cfe64u: goto label_1cfe64;
        case 0x1cfe68u: goto label_1cfe68;
        case 0x1cfe6cu: goto label_1cfe6c;
        case 0x1cfe70u: goto label_1cfe70;
        case 0x1cfe74u: goto label_1cfe74;
        case 0x1cfe78u: goto label_1cfe78;
        case 0x1cfe7cu: goto label_1cfe7c;
        case 0x1cfe80u: goto label_1cfe80;
        case 0x1cfe84u: goto label_1cfe84;
        case 0x1cfe88u: goto label_1cfe88;
        case 0x1cfe8cu: goto label_1cfe8c;
        case 0x1cfe90u: goto label_1cfe90;
        case 0x1cfe94u: goto label_1cfe94;
        case 0x1cfe98u: goto label_1cfe98;
        case 0x1cfe9cu: goto label_1cfe9c;
        case 0x1cfea0u: goto label_1cfea0;
        case 0x1cfea4u: goto label_1cfea4;
        case 0x1cfea8u: goto label_1cfea8;
        case 0x1cfeacu: goto label_1cfeac;
        case 0x1cfeb0u: goto label_1cfeb0;
        case 0x1cfeb4u: goto label_1cfeb4;
        case 0x1cfeb8u: goto label_1cfeb8;
        case 0x1cfebcu: goto label_1cfebc;
        case 0x1cfec0u: goto label_1cfec0;
        case 0x1cfec4u: goto label_1cfec4;
        case 0x1cfec8u: goto label_1cfec8;
        case 0x1cfeccu: goto label_1cfecc;
        case 0x1cfed0u: goto label_1cfed0;
        case 0x1cfed4u: goto label_1cfed4;
        case 0x1cfed8u: goto label_1cfed8;
        case 0x1cfedcu: goto label_1cfedc;
        case 0x1cfee0u: goto label_1cfee0;
        case 0x1cfee4u: goto label_1cfee4;
        case 0x1cfee8u: goto label_1cfee8;
        case 0x1cfeecu: goto label_1cfeec;
        case 0x1cfef0u: goto label_1cfef0;
        case 0x1cfef4u: goto label_1cfef4;
        case 0x1cfef8u: goto label_1cfef8;
        case 0x1cfefcu: goto label_1cfefc;
        case 0x1cff00u: goto label_1cff00;
        case 0x1cff04u: goto label_1cff04;
        case 0x1cff08u: goto label_1cff08;
        case 0x1cff0cu: goto label_1cff0c;
        case 0x1cff10u: goto label_1cff10;
        case 0x1cff14u: goto label_1cff14;
        case 0x1cff18u: goto label_1cff18;
        case 0x1cff1cu: goto label_1cff1c;
        case 0x1cff20u: goto label_1cff20;
        case 0x1cff24u: goto label_1cff24;
        case 0x1cff28u: goto label_1cff28;
        case 0x1cff2cu: goto label_1cff2c;
        case 0x1cff30u: goto label_1cff30;
        case 0x1cff34u: goto label_1cff34;
        case 0x1cff38u: goto label_1cff38;
        case 0x1cff3cu: goto label_1cff3c;
        case 0x1cff40u: goto label_1cff40;
        case 0x1cff44u: goto label_1cff44;
        case 0x1cff48u: goto label_1cff48;
        case 0x1cff4cu: goto label_1cff4c;
        case 0x1cff50u: goto label_1cff50;
        case 0x1cff54u: goto label_1cff54;
        case 0x1cff58u: goto label_1cff58;
        case 0x1cff5cu: goto label_1cff5c;
        case 0x1cff60u: goto label_1cff60;
        case 0x1cff64u: goto label_1cff64;
        case 0x1cff68u: goto label_1cff68;
        case 0x1cff6cu: goto label_1cff6c;
        case 0x1cff70u: goto label_1cff70;
        case 0x1cff74u: goto label_1cff74;
        case 0x1cff78u: goto label_1cff78;
        case 0x1cff7cu: goto label_1cff7c;
        case 0x1cff80u: goto label_1cff80;
        case 0x1cff84u: goto label_1cff84;
        case 0x1cff88u: goto label_1cff88;
        case 0x1cff8cu: goto label_1cff8c;
        case 0x1cff90u: goto label_1cff90;
        case 0x1cff94u: goto label_1cff94;
        case 0x1cff98u: goto label_1cff98;
        case 0x1cff9cu: goto label_1cff9c;
        case 0x1cffa0u: goto label_1cffa0;
        case 0x1cffa4u: goto label_1cffa4;
        case 0x1cffa8u: goto label_1cffa8;
        case 0x1cffacu: goto label_1cffac;
        case 0x1cffb0u: goto label_1cffb0;
        case 0x1cffb4u: goto label_1cffb4;
        case 0x1cffb8u: goto label_1cffb8;
        case 0x1cffbcu: goto label_1cffbc;
        case 0x1cffc0u: goto label_1cffc0;
        case 0x1cffc4u: goto label_1cffc4;
        case 0x1cffc8u: goto label_1cffc8;
        case 0x1cffccu: goto label_1cffcc;
        case 0x1cffd0u: goto label_1cffd0;
        case 0x1cffd4u: goto label_1cffd4;
        case 0x1cffd8u: goto label_1cffd8;
        case 0x1cffdcu: goto label_1cffdc;
        case 0x1cffe0u: goto label_1cffe0;
        case 0x1cffe4u: goto label_1cffe4;
        case 0x1cffe8u: goto label_1cffe8;
        case 0x1cffecu: goto label_1cffec;
        case 0x1cfff0u: goto label_1cfff0;
        case 0x1cfff4u: goto label_1cfff4;
        case 0x1cfff8u: goto label_1cfff8;
        case 0x1cfffcu: goto label_1cfffc;
        case 0x1d0000u: goto label_1d0000;
        case 0x1d0004u: goto label_1d0004;
        case 0x1d0008u: goto label_1d0008;
        case 0x1d000cu: goto label_1d000c;
        case 0x1d0010u: goto label_1d0010;
        case 0x1d0014u: goto label_1d0014;
        case 0x1d0018u: goto label_1d0018;
        case 0x1d001cu: goto label_1d001c;
        case 0x1d0020u: goto label_1d0020;
        case 0x1d0024u: goto label_1d0024;
        case 0x1d0028u: goto label_1d0028;
        case 0x1d002cu: goto label_1d002c;
        case 0x1d0030u: goto label_1d0030;
        case 0x1d0034u: goto label_1d0034;
        case 0x1d0038u: goto label_1d0038;
        case 0x1d003cu: goto label_1d003c;
        case 0x1d0040u: goto label_1d0040;
        case 0x1d0044u: goto label_1d0044;
        case 0x1d0048u: goto label_1d0048;
        case 0x1d004cu: goto label_1d004c;
        case 0x1d0050u: goto label_1d0050;
        case 0x1d0054u: goto label_1d0054;
        case 0x1d0058u: goto label_1d0058;
        case 0x1d005cu: goto label_1d005c;
        case 0x1d0060u: goto label_1d0060;
        case 0x1d0064u: goto label_1d0064;
        case 0x1d0068u: goto label_1d0068;
        case 0x1d006cu: goto label_1d006c;
        case 0x1d0070u: goto label_1d0070;
        case 0x1d0074u: goto label_1d0074;
        case 0x1d0078u: goto label_1d0078;
        case 0x1d007cu: goto label_1d007c;
        case 0x1d0080u: goto label_1d0080;
        case 0x1d0084u: goto label_1d0084;
        case 0x1d0088u: goto label_1d0088;
        case 0x1d008cu: goto label_1d008c;
        case 0x1d0090u: goto label_1d0090;
        case 0x1d0094u: goto label_1d0094;
        case 0x1d0098u: goto label_1d0098;
        case 0x1d009cu: goto label_1d009c;
        case 0x1d00a0u: goto label_1d00a0;
        case 0x1d00a4u: goto label_1d00a4;
        case 0x1d00a8u: goto label_1d00a8;
        case 0x1d00acu: goto label_1d00ac;
        case 0x1d00b0u: goto label_1d00b0;
        case 0x1d00b4u: goto label_1d00b4;
        case 0x1d00b8u: goto label_1d00b8;
        case 0x1d00bcu: goto label_1d00bc;
        case 0x1d00c0u: goto label_1d00c0;
        case 0x1d00c4u: goto label_1d00c4;
        case 0x1d00c8u: goto label_1d00c8;
        case 0x1d00ccu: goto label_1d00cc;
        case 0x1d00d0u: goto label_1d00d0;
        case 0x1d00d4u: goto label_1d00d4;
        case 0x1d00d8u: goto label_1d00d8;
        case 0x1d00dcu: goto label_1d00dc;
        case 0x1d00e0u: goto label_1d00e0;
        case 0x1d00e4u: goto label_1d00e4;
        case 0x1d00e8u: goto label_1d00e8;
        case 0x1d00ecu: goto label_1d00ec;
        case 0x1d00f0u: goto label_1d00f0;
        case 0x1d00f4u: goto label_1d00f4;
        case 0x1d00f8u: goto label_1d00f8;
        case 0x1d00fcu: goto label_1d00fc;
        case 0x1d0100u: goto label_1d0100;
        case 0x1d0104u: goto label_1d0104;
        case 0x1d0108u: goto label_1d0108;
        case 0x1d010cu: goto label_1d010c;
        case 0x1d0110u: goto label_1d0110;
        case 0x1d0114u: goto label_1d0114;
        case 0x1d0118u: goto label_1d0118;
        case 0x1d011cu: goto label_1d011c;
        case 0x1d0120u: goto label_1d0120;
        case 0x1d0124u: goto label_1d0124;
        case 0x1d0128u: goto label_1d0128;
        case 0x1d012cu: goto label_1d012c;
        case 0x1d0130u: goto label_1d0130;
        case 0x1d0134u: goto label_1d0134;
        case 0x1d0138u: goto label_1d0138;
        case 0x1d013cu: goto label_1d013c;
        case 0x1d0140u: goto label_1d0140;
        case 0x1d0144u: goto label_1d0144;
        case 0x1d0148u: goto label_1d0148;
        case 0x1d014cu: goto label_1d014c;
        case 0x1d0150u: goto label_1d0150;
        case 0x1d0154u: goto label_1d0154;
        case 0x1d0158u: goto label_1d0158;
        case 0x1d015cu: goto label_1d015c;
        case 0x1d0160u: goto label_1d0160;
        case 0x1d0164u: goto label_1d0164;
        case 0x1d0168u: goto label_1d0168;
        case 0x1d016cu: goto label_1d016c;
        case 0x1d0170u: goto label_1d0170;
        case 0x1d0174u: goto label_1d0174;
        case 0x1d0178u: goto label_1d0178;
        case 0x1d017cu: goto label_1d017c;
        case 0x1d0180u: goto label_1d0180;
        case 0x1d0184u: goto label_1d0184;
        case 0x1d0188u: goto label_1d0188;
        case 0x1d018cu: goto label_1d018c;
        case 0x1d0190u: goto label_1d0190;
        case 0x1d0194u: goto label_1d0194;
        case 0x1d0198u: goto label_1d0198;
        case 0x1d019cu: goto label_1d019c;
        case 0x1d01a0u: goto label_1d01a0;
        case 0x1d01a4u: goto label_1d01a4;
        case 0x1d01a8u: goto label_1d01a8;
        case 0x1d01acu: goto label_1d01ac;
        case 0x1d01b0u: goto label_1d01b0;
        case 0x1d01b4u: goto label_1d01b4;
        case 0x1d01b8u: goto label_1d01b8;
        case 0x1d01bcu: goto label_1d01bc;
        case 0x1d01c0u: goto label_1d01c0;
        case 0x1d01c4u: goto label_1d01c4;
        case 0x1d01c8u: goto label_1d01c8;
        case 0x1d01ccu: goto label_1d01cc;
        case 0x1d01d0u: goto label_1d01d0;
        case 0x1d01d4u: goto label_1d01d4;
        case 0x1d01d8u: goto label_1d01d8;
        case 0x1d01dcu: goto label_1d01dc;
        case 0x1d01e0u: goto label_1d01e0;
        case 0x1d01e4u: goto label_1d01e4;
        case 0x1d01e8u: goto label_1d01e8;
        case 0x1d01ecu: goto label_1d01ec;
        case 0x1d01f0u: goto label_1d01f0;
        case 0x1d01f4u: goto label_1d01f4;
        case 0x1d01f8u: goto label_1d01f8;
        case 0x1d01fcu: goto label_1d01fc;
        case 0x1d0200u: goto label_1d0200;
        case 0x1d0204u: goto label_1d0204;
        case 0x1d0208u: goto label_1d0208;
        case 0x1d020cu: goto label_1d020c;
        case 0x1d0210u: goto label_1d0210;
        case 0x1d0214u: goto label_1d0214;
        case 0x1d0218u: goto label_1d0218;
        case 0x1d021cu: goto label_1d021c;
        case 0x1d0220u: goto label_1d0220;
        case 0x1d0224u: goto label_1d0224;
        case 0x1d0228u: goto label_1d0228;
        case 0x1d022cu: goto label_1d022c;
        case 0x1d0230u: goto label_1d0230;
        case 0x1d0234u: goto label_1d0234;
        case 0x1d0238u: goto label_1d0238;
        case 0x1d023cu: goto label_1d023c;
        case 0x1d0240u: goto label_1d0240;
        case 0x1d0244u: goto label_1d0244;
        case 0x1d0248u: goto label_1d0248;
        case 0x1d024cu: goto label_1d024c;
        case 0x1d0250u: goto label_1d0250;
        case 0x1d0254u: goto label_1d0254;
        case 0x1d0258u: goto label_1d0258;
        case 0x1d025cu: goto label_1d025c;
        case 0x1d0260u: goto label_1d0260;
        case 0x1d0264u: goto label_1d0264;
        case 0x1d0268u: goto label_1d0268;
        case 0x1d026cu: goto label_1d026c;
        case 0x1d0270u: goto label_1d0270;
        case 0x1d0274u: goto label_1d0274;
        case 0x1d0278u: goto label_1d0278;
        case 0x1d027cu: goto label_1d027c;
        case 0x1d0280u: goto label_1d0280;
        case 0x1d0284u: goto label_1d0284;
        case 0x1d0288u: goto label_1d0288;
        case 0x1d028cu: goto label_1d028c;
        case 0x1d0290u: goto label_1d0290;
        case 0x1d0294u: goto label_1d0294;
        case 0x1d0298u: goto label_1d0298;
        case 0x1d029cu: goto label_1d029c;
        case 0x1d02a0u: goto label_1d02a0;
        case 0x1d02a4u: goto label_1d02a4;
        case 0x1d02a8u: goto label_1d02a8;
        case 0x1d02acu: goto label_1d02ac;
        case 0x1d02b0u: goto label_1d02b0;
        case 0x1d02b4u: goto label_1d02b4;
        case 0x1d02b8u: goto label_1d02b8;
        case 0x1d02bcu: goto label_1d02bc;
        case 0x1d02c0u: goto label_1d02c0;
        case 0x1d02c4u: goto label_1d02c4;
        case 0x1d02c8u: goto label_1d02c8;
        case 0x1d02ccu: goto label_1d02cc;
        case 0x1d02d0u: goto label_1d02d0;
        case 0x1d02d4u: goto label_1d02d4;
        case 0x1d02d8u: goto label_1d02d8;
        case 0x1d02dcu: goto label_1d02dc;
        case 0x1d02e0u: goto label_1d02e0;
        case 0x1d02e4u: goto label_1d02e4;
        case 0x1d02e8u: goto label_1d02e8;
        case 0x1d02ecu: goto label_1d02ec;
        case 0x1d02f0u: goto label_1d02f0;
        case 0x1d02f4u: goto label_1d02f4;
        case 0x1d02f8u: goto label_1d02f8;
        case 0x1d02fcu: goto label_1d02fc;
        case 0x1d0300u: goto label_1d0300;
        case 0x1d0304u: goto label_1d0304;
        case 0x1d0308u: goto label_1d0308;
        case 0x1d030cu: goto label_1d030c;
        case 0x1d0310u: goto label_1d0310;
        case 0x1d0314u: goto label_1d0314;
        case 0x1d0318u: goto label_1d0318;
        case 0x1d031cu: goto label_1d031c;
        case 0x1d0320u: goto label_1d0320;
        case 0x1d0324u: goto label_1d0324;
        case 0x1d0328u: goto label_1d0328;
        case 0x1d032cu: goto label_1d032c;
        case 0x1d0330u: goto label_1d0330;
        case 0x1d0334u: goto label_1d0334;
        case 0x1d0338u: goto label_1d0338;
        case 0x1d033cu: goto label_1d033c;
        case 0x1d0340u: goto label_1d0340;
        case 0x1d0344u: goto label_1d0344;
        case 0x1d0348u: goto label_1d0348;
        case 0x1d034cu: goto label_1d034c;
        case 0x1d0350u: goto label_1d0350;
        case 0x1d0354u: goto label_1d0354;
        case 0x1d0358u: goto label_1d0358;
        case 0x1d035cu: goto label_1d035c;
        case 0x1d0360u: goto label_1d0360;
        case 0x1d0364u: goto label_1d0364;
        case 0x1d0368u: goto label_1d0368;
        case 0x1d036cu: goto label_1d036c;
        case 0x1d0370u: goto label_1d0370;
        case 0x1d0374u: goto label_1d0374;
        case 0x1d0378u: goto label_1d0378;
        case 0x1d037cu: goto label_1d037c;
        case 0x1d0380u: goto label_1d0380;
        case 0x1d0384u: goto label_1d0384;
        case 0x1d0388u: goto label_1d0388;
        case 0x1d038cu: goto label_1d038c;
        case 0x1d0390u: goto label_1d0390;
        case 0x1d0394u: goto label_1d0394;
        case 0x1d0398u: goto label_1d0398;
        case 0x1d039cu: goto label_1d039c;
        case 0x1d03a0u: goto label_1d03a0;
        case 0x1d03a4u: goto label_1d03a4;
        case 0x1d03a8u: goto label_1d03a8;
        case 0x1d03acu: goto label_1d03ac;
        case 0x1d03b0u: goto label_1d03b0;
        case 0x1d03b4u: goto label_1d03b4;
        case 0x1d03b8u: goto label_1d03b8;
        case 0x1d03bcu: goto label_1d03bc;
        case 0x1d03c0u: goto label_1d03c0;
        case 0x1d03c4u: goto label_1d03c4;
        case 0x1d03c8u: goto label_1d03c8;
        case 0x1d03ccu: goto label_1d03cc;
        case 0x1d03d0u: goto label_1d03d0;
        case 0x1d03d4u: goto label_1d03d4;
        case 0x1d03d8u: goto label_1d03d8;
        case 0x1d03dcu: goto label_1d03dc;
        case 0x1d03e0u: goto label_1d03e0;
        case 0x1d03e4u: goto label_1d03e4;
        case 0x1d03e8u: goto label_1d03e8;
        case 0x1d03ecu: goto label_1d03ec;
        case 0x1d03f0u: goto label_1d03f0;
        case 0x1d03f4u: goto label_1d03f4;
        case 0x1d03f8u: goto label_1d03f8;
        case 0x1d03fcu: goto label_1d03fc;
        case 0x1d0400u: goto label_1d0400;
        case 0x1d0404u: goto label_1d0404;
        case 0x1d0408u: goto label_1d0408;
        case 0x1d040cu: goto label_1d040c;
        case 0x1d0410u: goto label_1d0410;
        case 0x1d0414u: goto label_1d0414;
        case 0x1d0418u: goto label_1d0418;
        case 0x1d041cu: goto label_1d041c;
        case 0x1d0420u: goto label_1d0420;
        case 0x1d0424u: goto label_1d0424;
        case 0x1d0428u: goto label_1d0428;
        case 0x1d042cu: goto label_1d042c;
        case 0x1d0430u: goto label_1d0430;
        case 0x1d0434u: goto label_1d0434;
        case 0x1d0438u: goto label_1d0438;
        case 0x1d043cu: goto label_1d043c;
        case 0x1d0440u: goto label_1d0440;
        case 0x1d0444u: goto label_1d0444;
        case 0x1d0448u: goto label_1d0448;
        case 0x1d044cu: goto label_1d044c;
        case 0x1d0450u: goto label_1d0450;
        case 0x1d0454u: goto label_1d0454;
        case 0x1d0458u: goto label_1d0458;
        case 0x1d045cu: goto label_1d045c;
        case 0x1d0460u: goto label_1d0460;
        case 0x1d0464u: goto label_1d0464;
        case 0x1d0468u: goto label_1d0468;
        case 0x1d046cu: goto label_1d046c;
        case 0x1d0470u: goto label_1d0470;
        case 0x1d0474u: goto label_1d0474;
        case 0x1d0478u: goto label_1d0478;
        case 0x1d047cu: goto label_1d047c;
        case 0x1d0480u: goto label_1d0480;
        case 0x1d0484u: goto label_1d0484;
        case 0x1d0488u: goto label_1d0488;
        case 0x1d048cu: goto label_1d048c;
        case 0x1d0490u: goto label_1d0490;
        case 0x1d0494u: goto label_1d0494;
        case 0x1d0498u: goto label_1d0498;
        case 0x1d049cu: goto label_1d049c;
        case 0x1d04a0u: goto label_1d04a0;
        case 0x1d04a4u: goto label_1d04a4;
        case 0x1d04a8u: goto label_1d04a8;
        case 0x1d04acu: goto label_1d04ac;
        case 0x1d04b0u: goto label_1d04b0;
        case 0x1d04b4u: goto label_1d04b4;
        case 0x1d04b8u: goto label_1d04b8;
        case 0x1d04bcu: goto label_1d04bc;
        case 0x1d04c0u: goto label_1d04c0;
        case 0x1d04c4u: goto label_1d04c4;
        case 0x1d04c8u: goto label_1d04c8;
        case 0x1d04ccu: goto label_1d04cc;
        case 0x1d04d0u: goto label_1d04d0;
        case 0x1d04d4u: goto label_1d04d4;
        case 0x1d04d8u: goto label_1d04d8;
        case 0x1d04dcu: goto label_1d04dc;
        case 0x1d04e0u: goto label_1d04e0;
        case 0x1d04e4u: goto label_1d04e4;
        case 0x1d04e8u: goto label_1d04e8;
        case 0x1d04ecu: goto label_1d04ec;
        case 0x1d04f0u: goto label_1d04f0;
        case 0x1d04f4u: goto label_1d04f4;
        case 0x1d04f8u: goto label_1d04f8;
        case 0x1d04fcu: goto label_1d04fc;
        case 0x1d0500u: goto label_1d0500;
        case 0x1d0504u: goto label_1d0504;
        case 0x1d0508u: goto label_1d0508;
        case 0x1d050cu: goto label_1d050c;
        case 0x1d0510u: goto label_1d0510;
        case 0x1d0514u: goto label_1d0514;
        case 0x1d0518u: goto label_1d0518;
        case 0x1d051cu: goto label_1d051c;
        case 0x1d0520u: goto label_1d0520;
        case 0x1d0524u: goto label_1d0524;
        case 0x1d0528u: goto label_1d0528;
        case 0x1d052cu: goto label_1d052c;
        case 0x1d0530u: goto label_1d0530;
        case 0x1d0534u: goto label_1d0534;
        case 0x1d0538u: goto label_1d0538;
        case 0x1d053cu: goto label_1d053c;
        case 0x1d0540u: goto label_1d0540;
        case 0x1d0544u: goto label_1d0544;
        case 0x1d0548u: goto label_1d0548;
        case 0x1d054cu: goto label_1d054c;
        case 0x1d0550u: goto label_1d0550;
        case 0x1d0554u: goto label_1d0554;
        case 0x1d0558u: goto label_1d0558;
        case 0x1d055cu: goto label_1d055c;
        case 0x1d0560u: goto label_1d0560;
        case 0x1d0564u: goto label_1d0564;
        case 0x1d0568u: goto label_1d0568;
        case 0x1d056cu: goto label_1d056c;
        case 0x1d0570u: goto label_1d0570;
        case 0x1d0574u: goto label_1d0574;
        case 0x1d0578u: goto label_1d0578;
        case 0x1d057cu: goto label_1d057c;
        case 0x1d0580u: goto label_1d0580;
        case 0x1d0584u: goto label_1d0584;
        case 0x1d0588u: goto label_1d0588;
        case 0x1d058cu: goto label_1d058c;
        case 0x1d0590u: goto label_1d0590;
        case 0x1d0594u: goto label_1d0594;
        case 0x1d0598u: goto label_1d0598;
        case 0x1d059cu: goto label_1d059c;
        case 0x1d05a0u: goto label_1d05a0;
        case 0x1d05a4u: goto label_1d05a4;
        case 0x1d05a8u: goto label_1d05a8;
        case 0x1d05acu: goto label_1d05ac;
        case 0x1d05b0u: goto label_1d05b0;
        case 0x1d05b4u: goto label_1d05b4;
        case 0x1d05b8u: goto label_1d05b8;
        case 0x1d05bcu: goto label_1d05bc;
        case 0x1d05c0u: goto label_1d05c0;
        case 0x1d05c4u: goto label_1d05c4;
        case 0x1d05c8u: goto label_1d05c8;
        case 0x1d05ccu: goto label_1d05cc;
        case 0x1d05d0u: goto label_1d05d0;
        case 0x1d05d4u: goto label_1d05d4;
        case 0x1d05d8u: goto label_1d05d8;
        case 0x1d05dcu: goto label_1d05dc;
        case 0x1d05e0u: goto label_1d05e0;
        case 0x1d05e4u: goto label_1d05e4;
        case 0x1d05e8u: goto label_1d05e8;
        case 0x1d05ecu: goto label_1d05ec;
        case 0x1d05f0u: goto label_1d05f0;
        case 0x1d05f4u: goto label_1d05f4;
        case 0x1d05f8u: goto label_1d05f8;
        case 0x1d05fcu: goto label_1d05fc;
        case 0x1d0600u: goto label_1d0600;
        case 0x1d0604u: goto label_1d0604;
        case 0x1d0608u: goto label_1d0608;
        case 0x1d060cu: goto label_1d060c;
        case 0x1d0610u: goto label_1d0610;
        case 0x1d0614u: goto label_1d0614;
        case 0x1d0618u: goto label_1d0618;
        case 0x1d061cu: goto label_1d061c;
        case 0x1d0620u: goto label_1d0620;
        case 0x1d0624u: goto label_1d0624;
        case 0x1d0628u: goto label_1d0628;
        case 0x1d062cu: goto label_1d062c;
        case 0x1d0630u: goto label_1d0630;
        case 0x1d0634u: goto label_1d0634;
        case 0x1d0638u: goto label_1d0638;
        case 0x1d063cu: goto label_1d063c;
        case 0x1d0640u: goto label_1d0640;
        case 0x1d0644u: goto label_1d0644;
        case 0x1d0648u: goto label_1d0648;
        case 0x1d064cu: goto label_1d064c;
        case 0x1d0650u: goto label_1d0650;
        case 0x1d0654u: goto label_1d0654;
        case 0x1d0658u: goto label_1d0658;
        case 0x1d065cu: goto label_1d065c;
        case 0x1d0660u: goto label_1d0660;
        case 0x1d0664u: goto label_1d0664;
        case 0x1d0668u: goto label_1d0668;
        case 0x1d066cu: goto label_1d066c;
        case 0x1d0670u: goto label_1d0670;
        case 0x1d0674u: goto label_1d0674;
        case 0x1d0678u: goto label_1d0678;
        case 0x1d067cu: goto label_1d067c;
        case 0x1d0680u: goto label_1d0680;
        case 0x1d0684u: goto label_1d0684;
        case 0x1d0688u: goto label_1d0688;
        case 0x1d068cu: goto label_1d068c;
        case 0x1d0690u: goto label_1d0690;
        case 0x1d0694u: goto label_1d0694;
        case 0x1d0698u: goto label_1d0698;
        case 0x1d069cu: goto label_1d069c;
        case 0x1d06a0u: goto label_1d06a0;
        case 0x1d06a4u: goto label_1d06a4;
        case 0x1d06a8u: goto label_1d06a8;
        case 0x1d06acu: goto label_1d06ac;
        case 0x1d06b0u: goto label_1d06b0;
        case 0x1d06b4u: goto label_1d06b4;
        case 0x1d06b8u: goto label_1d06b8;
        default: break;
    }

    ctx->pc = 0x1cf090u;

label_1cf090:
    // 0x1cf090: 0x27bde090  addiu       $sp, $sp, -0x1F70
    ctx->pc = 0x1cf090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294959248));
label_1cf094:
    // 0x1cf094: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cf094u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf098:
    // 0x1cf098: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1cf098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1cf09c:
    // 0x1cf09c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1cf09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1cf0a0:
    // 0x1cf0a0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1cf0a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1cf0a4:
    // 0x1cf0a4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1cf0a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1cf0a8:
    // 0x1cf0a8: 0x3c170038  lui         $s7, 0x38
    ctx->pc = 0x1cf0a8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)56 << 16));
label_1cf0ac:
    // 0x1cf0ac: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1cf0acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1cf0b0:
    // 0x1cf0b0: 0x26f71ef0  addiu       $s7, $s7, 0x1EF0
    ctx->pc = 0x1cf0b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 7920));
label_1cf0b4:
    // 0x1cf0b4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1cf0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1cf0b8:
    // 0x1cf0b8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1cf0b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1cf0bc:
    // 0x1cf0bc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1cf0bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1cf0c0:
    // 0x1cf0c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1cf0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1cf0c4:
    // 0x1cf0c4: 0xc050e38  jal         func_1438E0
label_1cf0c8:
    if (ctx->pc == 0x1CF0C8u) {
        ctx->pc = 0x1CF0C8u;
            // 0x1cf0c8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x1CF0CCu;
        goto label_1cf0cc;
    }
    ctx->pc = 0x1CF0C4u;
    SET_GPR_U32(ctx, 31, 0x1CF0CCu);
    ctx->pc = 0x1CF0C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF0C4u;
            // 0x1cf0c8: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1438E0u;
    if (runtime->hasFunction(0x1438E0u)) {
        auto targetFn = runtime->lookupFunction(0x1438E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF0CCu; }
        if (ctx->pc != 0x1CF0CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgFogEnable__Fi_0x1438e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF0CCu; }
        if (ctx->pc != 0x1CF0CCu) { return; }
    }
    ctx->pc = 0x1CF0CCu;
label_1cf0cc:
    // 0x1cf0cc: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1cf0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1cf0d0:
    // 0x1cf0d0: 0x27a30110  addiu       $v1, $sp, 0x110
    ctx->pc = 0x1cf0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_1cf0d4:
    // 0x1cf0d4: 0x24428f00  addiu       $v0, $v0, -0x7100
    ctx->pc = 0x1cf0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938368));
label_1cf0d8:
    // 0x1cf0d8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1cf0d8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1cf0dc:
    // 0x1cf0dc: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1cf0dcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_1cf0e0:
    // 0x1cf0e0: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cf0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cf0e4:
    // 0x1cf0e4: 0xc0a0e30  jal         func_2838C0
label_1cf0e8:
    if (ctx->pc == 0x1CF0E8u) {
        ctx->pc = 0x1CF0E8u;
            // 0x1cf0e8: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->pc = 0x1CF0ECu;
        goto label_1cf0ec;
    }
    ctx->pc = 0x1CF0E4u;
    SET_GPR_U32(ctx, 31, 0x1CF0ECu);
    ctx->pc = 0x1CF0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF0E4u;
            // 0x1cf0e8: 0x8c852e54  lw          $a1, 0x2E54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF0ECu; }
        if (ctx->pc != 0x1CF0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF0ECu; }
        if (ctx->pc != 0x1CF0ECu) { return; }
    }
    ctx->pc = 0x1CF0ECu;
label_1cf0ec:
    // 0x1cf0ec: 0x8c590060  lw          $t9, 0x60($v0)
    ctx->pc = 0x1cf0ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1cf0f0:
    // 0x1cf0f0: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x1cf0f0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cf0f4:
    // 0x1cf0f4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1cf0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1cf0f8:
    // 0x1cf0f8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x1cf0f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_1cf0fc:
    // 0x1cf0fc: 0x320f809  jalr        $t9
label_1cf100:
    if (ctx->pc == 0x1CF100u) {
        ctx->pc = 0x1CF100u;
            // 0x1cf100: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1CF104u;
        goto label_1cf104;
    }
    ctx->pc = 0x1CF0FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CF104u);
        ctx->pc = 0x1CF100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF0FCu;
            // 0x1cf100: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CF104u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CF104u; }
            if (ctx->pc != 0x1CF104u) { return; }
        }
        }
    }
    ctx->pc = 0x1CF104u;
label_1cf104:
    // 0x1cf104: 0x8fd90060  lw          $t9, 0x60($fp)
    ctx->pc = 0x1cf104u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 96)));
label_1cf108:
    // 0x1cf108: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1cf108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1cf10c:
    // 0x1cf10c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1cf10cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1cf110:
    // 0x1cf110: 0x320f809  jalr        $t9
label_1cf114:
    if (ctx->pc == 0x1CF114u) {
        ctx->pc = 0x1CF114u;
            // 0x1cf114: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x1CF118u;
        goto label_1cf118;
    }
    ctx->pc = 0x1CF110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CF118u);
        ctx->pc = 0x1CF114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF110u;
            // 0x1cf114: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CF118u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CF118u; }
            if (ctx->pc != 0x1CF118u) { return; }
        }
        }
    }
    ctx->pc = 0x1CF118u;
label_1cf118:
    // 0x1cf118: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1cf118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1cf11c:
    // 0x1cf11c: 0xc04c574  jal         func_1315D0
label_1cf120:
    if (ctx->pc == 0x1CF120u) {
        ctx->pc = 0x1CF120u;
            // 0x1cf120: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1CF124u;
        goto label_1cf124;
    }
    ctx->pc = 0x1CF11Cu;
    SET_GPR_U32(ctx, 31, 0x1CF124u);
    ctx->pc = 0x1CF120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF11Cu;
            // 0x1cf120: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF124u; }
        if (ctx->pc != 0x1CF124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF124u; }
        if (ctx->pc != 0x1CF124u) { return; }
    }
    ctx->pc = 0x1CF124u;
label_1cf124:
    // 0x1cf124: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1cf124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1cf128:
    // 0x1cf128: 0xc04c578  jal         func_1315E0
label_1cf12c:
    if (ctx->pc == 0x1CF12Cu) {
        ctx->pc = 0x1CF12Cu;
            // 0x1cf12c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x1CF130u;
        goto label_1cf130;
    }
    ctx->pc = 0x1CF128u;
    SET_GPR_U32(ctx, 31, 0x1CF130u);
    ctx->pc = 0x1CF12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF128u;
            // 0x1cf12c: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315E0u;
    if (runtime->hasFunction(0x1315E0u)) {
        auto targetFn = runtime->lookupFunction(0x1315E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF130u; }
        if (ctx->pc != 0x1CF130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRef__9mgCCameraFPf_0x1315e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF130u; }
        if (ctx->pc != 0x1CF130u) { return; }
    }
    ctx->pc = 0x1CF130u;
label_1cf130:
    // 0x1cf130: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x1cf130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_1cf134:
    // 0x1cf134: 0xc050e28  jal         func_1438A0
label_1cf138:
    if (ctx->pc == 0x1CF138u) {
        ctx->pc = 0x1CF138u;
            // 0x1cf138: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1CF13Cu;
        goto label_1cf13c;
    }
    ctx->pc = 0x1CF134u;
    SET_GPR_U32(ctx, 31, 0x1CF13Cu);
    ctx->pc = 0x1CF138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF134u;
            // 0x1cf138: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1438A0u;
    if (runtime->hasFunction(0x1438A0u)) {
        auto targetFn = runtime->lookupFunction(0x1438A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF13Cu; }
        if (ctx->pc != 0x1CF13Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetViewMatrix__FPA4_fPf_0x1438a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF13Cu; }
        if (ctx->pc != 0x1CF13Cu) { return; }
    }
    ctx->pc = 0x1CF13Cu;
label_1cf13c:
    // 0x1cf13c: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x1cf13cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_1cf140:
    // 0x1cf140: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x1cf140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1cf144:
    // 0x1cf144: 0xc041c3e  jal         func_1070F8
label_1cf148:
    if (ctx->pc == 0x1CF148u) {
        ctx->pc = 0x1CF148u;
            // 0x1cf148: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CF14Cu;
        goto label_1cf14c;
    }
    ctx->pc = 0x1CF144u;
    SET_GPR_U32(ctx, 31, 0x1CF14Cu);
    ctx->pc = 0x1CF148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF144u;
            // 0x1cf148: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1070F8u;
    if (runtime->hasFunction(0x1070F8u)) {
        auto targetFn = runtime->lookupFunction(0x1070F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF14Cu; }
        if (ctx->pc != 0x1CF14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0SubVector_0x1070f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF14Cu; }
        if (ctx->pc != 0x1CF14Cu) { return; }
    }
    ctx->pc = 0x1CF14Cu;
label_1cf14c:
    // 0x1cf14c: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x1cf14cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
label_1cf150:
    // 0x1cf150: 0xc063bb0  jal         func_18EEC0
label_1cf154:
    if (ctx->pc == 0x1CF154u) {
        ctx->pc = 0x1CF154u;
            // 0x1cf154: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x1CF158u;
        goto label_1cf158;
    }
    ctx->pc = 0x1CF150u;
    SET_GPR_U32(ctx, 31, 0x1CF158u);
    ctx->pc = 0x1CF154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF150u;
            // 0x1cf154: 0x27a500c0  addiu       $a1, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18EEC0u;
    if (runtime->hasFunction(0x18EEC0u)) {
        auto targetFn = runtime->lookupFunction(0x18EEC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF158u; }
        if (ctx->pc != 0x1CF158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetMicPos__FPfPf_0x18eec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF158u; }
        if (ctx->pc != 0x1CF158u) { return; }
    }
    ctx->pc = 0x1CF158u;
label_1cf158:
    // 0x1cf158: 0x8f828da4  lw          $v0, -0x725C($gp)
    ctx->pc = 0x1cf158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938020)));
label_1cf15c:
    // 0x1cf15c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x1cf15cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_1cf160:
    // 0x1cf160: 0x3421c574  ori         $at, $at, 0xC574
    ctx->pc = 0x1cf160u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50548);
label_1cf164:
    // 0x1cf164: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cf164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cf168:
    // 0x1cf168: 0x411021  addu        $v0, $v0, $at
    ctx->pc = 0x1cf168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_1cf16c:
    // 0x1cf16c: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x1cf16cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
label_1cf170:
    // 0x1cf170: 0xc0a0f58  jal         func_283D60
label_1cf174:
    if (ctx->pc == 0x1CF174u) {
        ctx->pc = 0x1CF174u;
            // 0x1cf174: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->pc = 0x1CF178u;
        goto label_1cf178;
    }
    ctx->pc = 0x1CF170u;
    SET_GPR_U32(ctx, 31, 0x1CF178u);
    ctx->pc = 0x1CF174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF170u;
            // 0x1cf174: 0x8c852e5c  lw          $a1, 0x2E5C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11868)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283D60u;
    if (runtime->hasFunction(0x283D60u)) {
        auto targetFn = runtime->lookupFunction(0x283D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF178u; }
        if (ctx->pc != 0x1CF178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMap__6CSceneFi_0x283d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF178u; }
        if (ctx->pc != 0x1CF178u) { return; }
    }
    ctx->pc = 0x1CF178u;
label_1cf178:
    // 0x1cf178: 0xaf828db4  sw          $v0, -0x724C($gp)
    ctx->pc = 0x1cf178u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938036), GPR_U32(ctx, 2));
label_1cf17c:
    // 0x1cf17c: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x1cf17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_1cf180:
    // 0x1cf180: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf180u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf184:
    // 0x1cf184: 0xc049c86  jal         func_127218
label_1cf188:
    if (ctx->pc == 0x1CF188u) {
        ctx->pc = 0x1CF188u;
            // 0x1cf188: 0x240601d0  addiu       $a2, $zero, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
        ctx->pc = 0x1CF18Cu;
        goto label_1cf18c;
    }
    ctx->pc = 0x1CF184u;
    SET_GPR_U32(ctx, 31, 0x1CF18Cu);
    ctx->pc = 0x1CF188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF184u;
            // 0x1cf188: 0x240601d0  addiu       $a2, $zero, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF18Cu; }
        if (ctx->pc != 0x1CF18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF18Cu; }
        if (ctx->pc != 0x1CF18Cu) { return; }
    }
    ctx->pc = 0x1CF18Cu;
label_1cf18c:
    // 0x1cf18c: 0x8f838db4  lw          $v1, -0x724C($gp)
    ctx->pc = 0x1cf18cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938036)));
label_1cf190:
    // 0x1cf190: 0x1060007d  beqz        $v1, . + 4 + (0x7D << 2)
label_1cf194:
    if (ctx->pc == 0x1CF194u) {
        ctx->pc = 0x1CF194u;
            // 0x1cf194: 0x27b00120  addiu       $s0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x1CF198u;
        goto label_1cf198;
    }
    ctx->pc = 0x1CF190u;
    {
        const bool branch_taken_0x1cf190 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF190u;
            // 0x1cf194: 0x27b00120  addiu       $s0, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf190) {
            ctx->pc = 0x1CF388u;
            goto label_1cf388;
        }
    }
    ctx->pc = 0x1CF198u;
label_1cf198:
    // 0x1cf198: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1cf198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf19c:
    // 0x1cf19c: 0xac6200c4  sw          $v0, 0xC4($v1)
    ctx->pc = 0x1cf19cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 196), GPR_U32(ctx, 2));
label_1cf1a0:
    // 0x1cf1a0: 0x8f838dac  lw          $v1, -0x7254($gp)
    ctx->pc = 0x1cf1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cf1a4:
    // 0x1cf1a4: 0x8f828db4  lw          $v0, -0x724C($gp)
    ctx->pc = 0x1cf1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938036)));
label_1cf1a8:
    // 0x1cf1a8: 0xc4602f6c  lwc1        $f0, 0x2F6C($v1)
    ctx->pc = 0x1cf1a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf1ac:
    // 0x1cf1ac: 0xe4400c88  swc1        $f0, 0xC88($v0)
    ctx->pc = 0x1cf1acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 3208), bits); }
label_1cf1b0:
    // 0x1cf1b0: 0x8f848db4  lw          $a0, -0x724C($gp)
    ctx->pc = 0x1cf1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938036)));
label_1cf1b4:
    // 0x1cf1b4: 0xc058524  jal         func_161490
label_1cf1b8:
    if (ctx->pc == 0x1CF1B8u) {
        ctx->pc = 0x1CF1B8u;
            // 0x1cf1b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CF1BCu;
        goto label_1cf1bc;
    }
    ctx->pc = 0x1CF1B4u;
    SET_GPR_U32(ctx, 31, 0x1CF1BCu);
    ctx->pc = 0x1CF1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF1B4u;
            // 0x1cf1b8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x161490u;
    if (runtime->hasFunction(0x161490u)) {
        auto targetFn = runtime->lookupFunction(0x161490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF1BCu; }
        if (ctx->pc != 0x1CF1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLightInfo__4CMapFP16CMapLightingInfo_0x161490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF1BCu; }
        if (ctx->pc != 0x1CF1BCu) { return; }
    }
    ctx->pc = 0x1CF1BCu;
label_1cf1bc:
    // 0x1cf1bc: 0x1200004c  beqz        $s0, . + 4 + (0x4C << 2)
label_1cf1c0:
    if (ctx->pc == 0x1CF1C0u) {
        ctx->pc = 0x1CF1C4u;
        goto label_1cf1c4;
    }
    ctx->pc = 0x1CF1BCu;
    {
        const bool branch_taken_0x1cf1bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf1bc) {
            ctx->pc = 0x1CF2F0u;
            goto label_1cf2f0;
        }
    }
    ctx->pc = 0x1CF1C4u;
label_1cf1c4:
    // 0x1cf1c4: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1cf1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1cf1c8:
    // 0x1cf1c8: 0xc6010180  lwc1        $f1, 0x180($s0)
    ctx->pc = 0x1cf1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf1cc:
    // 0x1cf1cc: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x1cf1ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf1d0:
    // 0x1cf1d0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cf1d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1cf1d4:
    // 0x1cf1d4: 0xe6000180  swc1        $f0, 0x180($s0)
    ctx->pc = 0x1cf1d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 384), bits); }
label_1cf1d8:
    // 0x1cf1d8: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1cf1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1cf1dc:
    // 0x1cf1dc: 0xc6010184  lwc1        $f1, 0x184($s0)
    ctx->pc = 0x1cf1dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf1e0:
    // 0x1cf1e0: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x1cf1e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf1e4:
    // 0x1cf1e4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cf1e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1cf1e8:
    // 0x1cf1e8: 0xe6000184  swc1        $f0, 0x184($s0)
    ctx->pc = 0x1cf1e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 388), bits); }
label_1cf1ec:
    // 0x1cf1ec: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1cf1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1cf1f0:
    // 0x1cf1f0: 0xc6010188  lwc1        $f1, 0x188($s0)
    ctx->pc = 0x1cf1f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf1f4:
    // 0x1cf1f4: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x1cf1f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf1f8:
    // 0x1cf1f8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cf1f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1cf1fc:
    // 0x1cf1fc: 0xe6000188  swc1        $f0, 0x188($s0)
    ctx->pc = 0x1cf1fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 392), bits); }
label_1cf200:
    // 0x1cf200: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1cf200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1cf204:
    // 0x1cf204: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x1cf204u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf208:
    // 0x1cf208: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x1cf208u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf20c:
    // 0x1cf20c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cf20cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1cf210:
    // 0x1cf210: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x1cf210u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
label_1cf214:
    // 0x1cf214: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1cf214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1cf218:
    // 0x1cf218: 0xc6010040  lwc1        $f1, 0x40($s0)
    ctx->pc = 0x1cf218u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf21c:
    // 0x1cf21c: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x1cf21cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf220:
    // 0x1cf220: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cf220u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1cf224:
    // 0x1cf224: 0xe6000040  swc1        $f0, 0x40($s0)
    ctx->pc = 0x1cf224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
label_1cf228:
    // 0x1cf228: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1cf228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1cf22c:
    // 0x1cf22c: 0xc6010050  lwc1        $f1, 0x50($s0)
    ctx->pc = 0x1cf22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf230:
    // 0x1cf230: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x1cf230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf234:
    // 0x1cf234: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cf234u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1cf238:
    // 0x1cf238: 0xe6000050  swc1        $f0, 0x50($s0)
    ctx->pc = 0x1cf238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
label_1cf23c:
    // 0x1cf23c: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1cf23cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1cf240:
    // 0x1cf240: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x1cf240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf244:
    // 0x1cf244: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x1cf244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf248:
    // 0x1cf248: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cf248u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1cf24c:
    // 0x1cf24c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x1cf24cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
label_1cf250:
    // 0x1cf250: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1cf250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1cf254:
    // 0x1cf254: 0xc6010044  lwc1        $f1, 0x44($s0)
    ctx->pc = 0x1cf254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf258:
    // 0x1cf258: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x1cf258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf25c:
    // 0x1cf25c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cf25cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1cf260:
    // 0x1cf260: 0xe6000044  swc1        $f0, 0x44($s0)
    ctx->pc = 0x1cf260u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 68), bits); }
label_1cf264:
    // 0x1cf264: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1cf264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1cf268:
    // 0x1cf268: 0xc6010054  lwc1        $f1, 0x54($s0)
    ctx->pc = 0x1cf268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf26c:
    // 0x1cf26c: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x1cf26cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf270:
    // 0x1cf270: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cf270u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1cf274:
    // 0x1cf274: 0xe6000054  swc1        $f0, 0x54($s0)
    ctx->pc = 0x1cf274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
label_1cf278:
    // 0x1cf278: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1cf278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1cf27c:
    // 0x1cf27c: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x1cf27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf280:
    // 0x1cf280: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x1cf280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf284:
    // 0x1cf284: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cf284u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1cf288:
    // 0x1cf288: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x1cf288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
label_1cf28c:
    // 0x1cf28c: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1cf28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1cf290:
    // 0x1cf290: 0xc6010048  lwc1        $f1, 0x48($s0)
    ctx->pc = 0x1cf290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf294:
    // 0x1cf294: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x1cf294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf298:
    // 0x1cf298: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cf298u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1cf29c:
    // 0x1cf29c: 0xe6000048  swc1        $f0, 0x48($s0)
    ctx->pc = 0x1cf29cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
label_1cf2a0:
    // 0x1cf2a0: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1cf2a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1cf2a4:
    // 0x1cf2a4: 0xc6010058  lwc1        $f1, 0x58($s0)
    ctx->pc = 0x1cf2a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf2a8:
    // 0x1cf2a8: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x1cf2a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf2ac:
    // 0x1cf2ac: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cf2acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1cf2b0:
    // 0x1cf2b0: 0xe6000058  swc1        $f0, 0x58($s0)
    ctx->pc = 0x1cf2b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
label_1cf2b4:
    // 0x1cf2b4: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1cf2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1cf2b8:
    // 0x1cf2b8: 0xc601003c  lwc1        $f1, 0x3C($s0)
    ctx->pc = 0x1cf2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf2bc:
    // 0x1cf2bc: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x1cf2bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf2c0:
    // 0x1cf2c0: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cf2c0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1cf2c4:
    // 0x1cf2c4: 0xe600003c  swc1        $f0, 0x3C($s0)
    ctx->pc = 0x1cf2c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
label_1cf2c8:
    // 0x1cf2c8: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1cf2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1cf2cc:
    // 0x1cf2cc: 0xc601004c  lwc1        $f1, 0x4C($s0)
    ctx->pc = 0x1cf2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf2d0:
    // 0x1cf2d0: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x1cf2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf2d4:
    // 0x1cf2d4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cf2d4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1cf2d8:
    // 0x1cf2d8: 0xe600004c  swc1        $f0, 0x4C($s0)
    ctx->pc = 0x1cf2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
label_1cf2dc:
    // 0x1cf2dc: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1cf2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1cf2e0:
    // 0x1cf2e0: 0xc601005c  lwc1        $f1, 0x5C($s0)
    ctx->pc = 0x1cf2e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 92)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf2e4:
    // 0x1cf2e4: 0xc440006c  lwc1        $f0, 0x6C($v0)
    ctx->pc = 0x1cf2e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf2e8:
    // 0x1cf2e8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x1cf2e8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_1cf2ec:
    // 0x1cf2ec: 0xe600005c  swc1        $f0, 0x5C($s0)
    ctx->pc = 0x1cf2ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 92), bits); }
label_1cf2f0:
    // 0x1cf2f0: 0x12000025  beqz        $s0, . + 4 + (0x25 << 2)
label_1cf2f4:
    if (ctx->pc == 0x1CF2F4u) {
        ctx->pc = 0x1CF2F8u;
        goto label_1cf2f8;
    }
    ctx->pc = 0x1CF2F0u;
    {
        const bool branch_taken_0x1cf2f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf2f0) {
            ctx->pc = 0x1CF388u;
            goto label_1cf388;
        }
    }
    ctx->pc = 0x1CF2F8u;
label_1cf2f8:
    // 0x1cf2f8: 0xc050e38  jal         func_1438E0
label_1cf2fc:
    if (ctx->pc == 0x1CF2FCu) {
        ctx->pc = 0x1CF2FCu;
            // 0x1cf2fc: 0x8e040190  lw          $a0, 0x190($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
        ctx->pc = 0x1CF300u;
        goto label_1cf300;
    }
    ctx->pc = 0x1CF2F8u;
    SET_GPR_U32(ctx, 31, 0x1CF300u);
    ctx->pc = 0x1CF2FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF2F8u;
            // 0x1cf2fc: 0x8e040190  lw          $a0, 0x190($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1438E0u;
    if (runtime->hasFunction(0x1438E0u)) {
        auto targetFn = runtime->lookupFunction(0x1438E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF300u; }
        if (ctx->pc != 0x1CF300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgFogEnable__Fi_0x1438e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF300u; }
        if (ctx->pc != 0x1CF300u) { return; }
    }
    ctx->pc = 0x1CF300u;
label_1cf300:
    // 0x1cf300: 0x8e020190  lw          $v0, 0x190($s0)
    ctx->pc = 0x1cf300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 400)));
label_1cf304:
    // 0x1cf304: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1cf308:
    if (ctx->pc == 0x1CF308u) {
        ctx->pc = 0x1CF308u;
            // 0x1cf308: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->pc = 0x1CF30Cu;
        goto label_1cf30c;
    }
    ctx->pc = 0x1CF304u;
    {
        const bool branch_taken_0x1cf304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF304u;
            // 0x1cf308: 0x26040030  addiu       $a0, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf304) {
            ctx->pc = 0x1CF330u;
            goto label_1cf330;
        }
    }
    ctx->pc = 0x1CF30Cu;
label_1cf30c:
    // 0x1cf30c: 0x920401a8  lbu         $a0, 0x1A8($s0)
    ctx->pc = 0x1cf30cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 424)));
label_1cf310:
    // 0x1cf310: 0xc60d01a4  lwc1        $f13, 0x1A4($s0)
    ctx->pc = 0x1cf310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_1cf314:
    // 0x1cf314: 0x920501a9  lbu         $a1, 0x1A9($s0)
    ctx->pc = 0x1cf314u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 425)));
label_1cf318:
    // 0x1cf318: 0x920601aa  lbu         $a2, 0x1AA($s0)
    ctx->pc = 0x1cf318u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 426)));
label_1cf31c:
    // 0x1cf31c: 0xc60e01b0  lwc1        $f14, 0x1B0($s0)
    ctx->pc = 0x1cf31cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_1cf320:
    // 0x1cf320: 0xc60f01b4  lwc1        $f15, 0x1B4($s0)
    ctx->pc = 0x1cf320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_1cf324:
    // 0x1cf324: 0xc050e48  jal         func_143920
label_1cf328:
    if (ctx->pc == 0x1CF328u) {
        ctx->pc = 0x1CF328u;
            // 0x1cf328: 0xc60c01a0  lwc1        $f12, 0x1A0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x1CF32Cu;
        goto label_1cf32c;
    }
    ctx->pc = 0x1CF324u;
    SET_GPR_U32(ctx, 31, 0x1CF32Cu);
    ctx->pc = 0x1CF328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF324u;
            // 0x1cf328: 0xc60c01a0  lwc1        $f12, 0x1A0($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x143920u;
    if (runtime->hasFunction(0x143920u)) {
        auto targetFn = runtime->lookupFunction(0x143920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF32Cu; }
        if (ctx->pc != 0x1CF32Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetFogParam__FffUcUcUcff_0x143920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF32Cu; }
        if (ctx->pc != 0x1CF32Cu) { return; }
    }
    ctx->pc = 0x1CF32Cu;
label_1cf32c:
    // 0x1cf32c: 0x26040030  addiu       $a0, $s0, 0x30
    ctx->pc = 0x1cf32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_1cf330:
    // 0x1cf330: 0xc050dd0  jal         func_143740
label_1cf334:
    if (ctx->pc == 0x1CF334u) {
        ctx->pc = 0x1CF334u;
            // 0x1cf334: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->pc = 0x1CF338u;
        goto label_1cf338;
    }
    ctx->pc = 0x1CF330u;
    SET_GPR_U32(ctx, 31, 0x1CF338u);
    ctx->pc = 0x1CF334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF330u;
            // 0x1cf334: 0x26050070  addiu       $a1, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143740u;
    if (runtime->hasFunction(0x143740u)) {
        auto targetFn = runtime->lookupFunction(0x143740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF338u; }
        if (ctx->pc != 0x1CF338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetLight__FPA4_fPA4_f_0x143740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF338u; }
        if (ctx->pc != 0x1CF338u) { return; }
    }
    ctx->pc = 0x1CF338u;
label_1cf338:
    // 0x1cf338: 0xc050dec  jal         func_1437B0
label_1cf33c:
    if (ctx->pc == 0x1CF33Cu) {
        ctx->pc = 0x1CF33Cu;
            // 0x1cf33c: 0x26040180  addiu       $a0, $s0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
        ctx->pc = 0x1CF340u;
        goto label_1cf340;
    }
    ctx->pc = 0x1CF338u;
    SET_GPR_U32(ctx, 31, 0x1CF340u);
    ctx->pc = 0x1CF33Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF338u;
            // 0x1cf33c: 0x26040180  addiu       $a0, $s0, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437B0u;
    if (runtime->hasFunction(0x1437B0u)) {
        auto targetFn = runtime->lookupFunction(0x1437B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF340u; }
        if (ctx->pc != 0x1CF340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetAmbient__FPf_0x1437b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF340u; }
        if (ctx->pc != 0x1CF340u) { return; }
    }
    ctx->pc = 0x1CF340u;
label_1cf340:
    // 0x1cf340: 0x8e0200b0  lw          $v0, 0xB0($s0)
    ctx->pc = 0x1cf340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 176)));
label_1cf344:
    // 0x1cf344: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1cf348:
    if (ctx->pc == 0x1CF348u) {
        ctx->pc = 0x1CF348u;
            // 0x1cf348: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1CF34Cu;
        goto label_1cf34c;
    }
    ctx->pc = 0x1CF344u;
    {
        const bool branch_taken_0x1cf344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF344u;
            // 0x1cf348: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf344) {
            ctx->pc = 0x1CF37Cu;
            goto label_1cf37c;
        }
    }
    ctx->pc = 0x1CF34Cu;
label_1cf34c:
    // 0x1cf34c: 0xc050e40  jal         func_143900
label_1cf350:
    if (ctx->pc == 0x1CF350u) {
        ctx->pc = 0x1CF354u;
        goto label_1cf354;
    }
    ctx->pc = 0x1CF34Cu;
    SET_GPR_U32(ctx, 31, 0x1CF354u);
    ctx->pc = 0x143900u;
    if (runtime->hasFunction(0x143900u)) {
        auto targetFn = runtime->lookupFunction(0x143900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF354u; }
        if (ctx->pc != 0x1CF354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgPlightEnable__Fi_0x143900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF354u; }
        if (ctx->pc != 0x1CF354u) { return; }
    }
    ctx->pc = 0x1CF354u;
label_1cf354:
    // 0x1cf354: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1cf354u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf358:
    // 0x1cf358: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1cf358u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf35c:
    // 0x1cf35c: 0x2121021  addu        $v0, $s0, $s2
    ctx->pc = 0x1cf35cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1cf360:
    // 0x1cf360: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1cf360u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cf364:
    // 0x1cf364: 0xc050e04  jal         func_143810
label_1cf368:
    if (ctx->pc == 0x1CF368u) {
        ctx->pc = 0x1CF368u;
            // 0x1cf368: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->pc = 0x1CF36Cu;
        goto label_1cf36c;
    }
    ctx->pc = 0x1CF364u;
    SET_GPR_U32(ctx, 31, 0x1CF36Cu);
    ctx->pc = 0x1CF368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF364u;
            // 0x1cf368: 0x244500c0  addiu       $a1, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143810u;
    if (runtime->hasFunction(0x143810u)) {
        auto targetFn = runtime->lookupFunction(0x143810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF36Cu; }
        if (ctx->pc != 0x1CF36Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPlight__FiP13mgPOINT_LIGHT_0x143810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF36Cu; }
        if (ctx->pc != 0x1CF36Cu) { return; }
    }
    ctx->pc = 0x1CF36Cu;
label_1cf36c:
    // 0x1cf36c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1cf36cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1cf370:
    // 0x1cf370: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x1cf370u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_1cf374:
    // 0x1cf374: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1cf378:
    if (ctx->pc == 0x1CF378u) {
        ctx->pc = 0x1CF378u;
            // 0x1cf378: 0x26520030  addiu       $s2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->pc = 0x1CF37Cu;
        goto label_1cf37c;
    }
    ctx->pc = 0x1CF374u;
    {
        const bool branch_taken_0x1cf374 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF374u;
            // 0x1cf378: 0x26520030  addiu       $s2, $s2, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf374) {
            ctx->pc = 0x1CF35Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cf35c;
        }
    }
    ctx->pc = 0x1CF37Cu;
label_1cf37c:
    // 0x1cf37c: 0x0  nop
    ctx->pc = 0x1cf37cu;
    // NOP
label_1cf380:
    // 0x1cf380: 0xc050d9c  jal         func_143670
label_1cf384:
    if (ctx->pc == 0x1CF384u) {
        ctx->pc = 0x1CF384u;
            // 0x1cf384: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x1CF388u;
        goto label_1cf388;
    }
    ctx->pc = 0x1CF380u;
    SET_GPR_U32(ctx, 31, 0x1CF388u);
    ctx->pc = 0x1CF384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF380u;
            // 0x1cf384: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143670u;
    if (runtime->hasFunction(0x143670u)) {
        auto targetFn = runtime->lookupFunction(0x143670u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF388u; }
        if (ctx->pc != 0x1CF388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetBackGround__FPf_0x143670(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF388u; }
        if (ctx->pc != 0x1CF388u) { return; }
    }
    ctx->pc = 0x1CF388u;
label_1cf388:
    // 0x1cf388: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1cf388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1cf38c:
    // 0x1cf38c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1cf38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1cf390:
    // 0x1cf390: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1cf390u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_1cf394:
    // 0x1cf394: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1cf398:
    if (ctx->pc == 0x1CF398u) {
        ctx->pc = 0x1CF39Cu;
        goto label_1cf39c;
    }
    ctx->pc = 0x1CF394u;
    {
        const bool branch_taken_0x1cf394 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf394) {
            ctx->pc = 0x1CF3A8u;
            goto label_1cf3a8;
        }
    }
    ctx->pc = 0x1CF39Cu;
label_1cf39c:
    // 0x1cf39c: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cf39cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cf3a0:
    // 0x1cf3a0: 0xc0b20dc  jal         func_2C8370
label_1cf3a4:
    if (ctx->pc == 0x1CF3A4u) {
        ctx->pc = 0x1CF3A4u;
            // 0x1cf3a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CF3A8u;
        goto label_1cf3a8;
    }
    ctx->pc = 0x1CF3A0u;
    SET_GPR_U32(ctx, 31, 0x1CF3A8u);
    ctx->pc = 0x1CF3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF3A0u;
            // 0x1cf3a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8370u;
    if (runtime->hasFunction(0x2C8370u)) {
        auto targetFn = runtime->lookupFunction(0x2C8370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF3A8u; }
        if (ctx->pc != 0x1CF3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSky__6CSceneFi_0x2c8370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF3A8u; }
        if (ctx->pc != 0x1CF3A8u) { return; }
    }
    ctx->pc = 0x1CF3A8u;
label_1cf3a8:
    // 0x1cf3a8: 0x8f828db4  lw          $v0, -0x724C($gp)
    ctx->pc = 0x1cf3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938036)));
label_1cf3ac:
    // 0x1cf3ac: 0x1040007e  beqz        $v0, . + 4 + (0x7E << 2)
label_1cf3b0:
    if (ctx->pc == 0x1CF3B0u) {
        ctx->pc = 0x1CF3B4u;
        goto label_1cf3b4;
    }
    ctx->pc = 0x1CF3ACu;
    {
        const bool branch_taken_0x1cf3ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf3ac) {
            ctx->pc = 0x1CF5A8u;
            goto label_1cf5a8;
        }
    }
    ctx->pc = 0x1CF3B4u;
label_1cf3b4:
    // 0x1cf3b4: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1cf3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1cf3b8:
    // 0x1cf3b8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1cf3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1cf3bc:
    // 0x1cf3bc: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1cf3bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_1cf3c0:
    // 0x1cf3c0: 0x14400079  bnez        $v0, . + 4 + (0x79 << 2)
label_1cf3c4:
    if (ctx->pc == 0x1CF3C4u) {
        ctx->pc = 0x1CF3C8u;
        goto label_1cf3c8;
    }
    ctx->pc = 0x1CF3C0u;
    {
        const bool branch_taken_0x1cf3c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf3c0) {
            ctx->pc = 0x1CF5A8u;
            goto label_1cf5a8;
        }
    }
    ctx->pc = 0x1CF3C8u;
label_1cf3c8:
    // 0x1cf3c8: 0xc0bddbc  jal         func_2F76F0
label_1cf3cc:
    if (ctx->pc == 0x1CF3CCu) {
        ctx->pc = 0x1CF3CCu;
            // 0x1cf3cc: 0x8f848dac  lw          $a0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->pc = 0x1CF3D0u;
        goto label_1cf3d0;
    }
    ctx->pc = 0x1CF3C8u;
    SET_GPR_U32(ctx, 31, 0x1CF3D0u);
    ctx->pc = 0x1CF3CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF3C8u;
            // 0x1cf3cc: 0x8f848dac  lw          $a0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F76F0u;
    if (runtime->hasFunction(0x2F76F0u)) {
        auto targetFn = runtime->lookupFunction(0x2F76F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF3D0u; }
        if (ctx->pc != 0x1CF3D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        S51Thunder__FP6CScene_0x2f76f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF3D0u; }
        if (ctx->pc != 0x1CF3D0u) { return; }
    }
    ctx->pc = 0x1CF3D0u;
label_1cf3d0:
    // 0x1cf3d0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cf3d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cf3d4:
    // 0x1cf3d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf3d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf3d8:
    // 0x1cf3d8: 0xac20f3d4  sw          $zero, -0xC2C($at)
    ctx->pc = 0x1cf3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964180), GPR_U32(ctx, 0));
label_1cf3dc:
    // 0x1cf3dc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cf3dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf3e0:
    // 0x1cf3e0: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1cf3e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1cf3e4:
    // 0x1cf3e4: 0xac20f3cc  sw          $zero, -0xC34($at)
    ctx->pc = 0x1cf3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294964172), GPR_U32(ctx, 0));
label_1cf3e8:
    // 0x1cf3e8: 0xdd1821  addu        $v1, $a2, $sp
    ctx->pc = 0x1cf3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 29)));
label_1cf3ec:
    // 0x1cf3ec: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x1cf3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1cf3f0:
    // 0x1cf3f0: 0x246702f0  addiu       $a3, $v1, 0x2F0
    ctx->pc = 0x1cf3f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 752));
label_1cf3f4:
    // 0x1cf3f4: 0x24a40002  addiu       $a0, $a1, 0x2
    ctx->pc = 0x1cf3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_1cf3f8:
    // 0x1cf3f8: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x1cf3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
label_1cf3fc:
    // 0x1cf3fc: 0x24a30003  addiu       $v1, $a1, 0x3
    ctx->pc = 0x1cf3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
label_1cf400:
    // 0x1cf400: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x1cf400u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_1cf404:
    // 0x1cf404: 0xace40008  sw          $a0, 0x8($a3)
    ctx->pc = 0x1cf404u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 4));
label_1cf408:
    // 0x1cf408: 0x24a20004  addiu       $v0, $a1, 0x4
    ctx->pc = 0x1cf408u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_1cf40c:
    // 0x1cf40c: 0xace3000c  sw          $v1, 0xC($a3)
    ctx->pc = 0x1cf40cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 3));
label_1cf410:
    // 0x1cf410: 0x24a40005  addiu       $a0, $a1, 0x5
    ctx->pc = 0x1cf410u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
label_1cf414:
    // 0x1cf414: 0xace20010  sw          $v0, 0x10($a3)
    ctx->pc = 0x1cf414u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 2));
label_1cf418:
    // 0x1cf418: 0x24a30006  addiu       $v1, $a1, 0x6
    ctx->pc = 0x1cf418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
label_1cf41c:
    // 0x1cf41c: 0xace40014  sw          $a0, 0x14($a3)
    ctx->pc = 0x1cf41cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 4));
label_1cf420:
    // 0x1cf420: 0x24a20007  addiu       $v0, $a1, 0x7
    ctx->pc = 0x1cf420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
label_1cf424:
    // 0x1cf424: 0xace30018  sw          $v1, 0x18($a3)
    ctx->pc = 0x1cf424u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 3));
label_1cf428:
    // 0x1cf428: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1cf428u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_1cf42c:
    // 0x1cf42c: 0xace2001c  sw          $v0, 0x1C($a3)
    ctx->pc = 0x1cf42cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 2));
label_1cf430:
    // 0x1cf430: 0x28a20007  slti        $v0, $a1, 0x7
    ctx->pc = 0x1cf430u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)7) ? 1 : 0);
label_1cf434:
    // 0x1cf434: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_1cf438:
    if (ctx->pc == 0x1CF438u) {
        ctx->pc = 0x1CF438u;
            // 0x1cf438: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->pc = 0x1CF43Cu;
        goto label_1cf43c;
    }
    ctx->pc = 0x1CF434u;
    {
        const bool branch_taken_0x1cf434 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF434u;
            // 0x1cf438: 0x24c60020  addiu       $a2, $a2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf434) {
            ctx->pc = 0x1CF3E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cf3e8;
        }
    }
    ctx->pc = 0x1CF43Cu;
label_1cf43c:
    // 0x1cf43c: 0x28a1000f  slti        $at, $a1, 0xF
    ctx->pc = 0x1cf43cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)15) ? 1 : 0);
label_1cf440:
    // 0x1cf440: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
label_1cf444:
    if (ctx->pc == 0x1CF444u) {
        ctx->pc = 0x1CF444u;
            // 0x1cf444: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x1CF448u;
        goto label_1cf448;
    }
    ctx->pc = 0x1CF440u;
    {
        const bool branch_taken_0x1cf440 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF440u;
            // 0x1cf444: 0x51880  sll         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf440) {
            ctx->pc = 0x1CF468u;
            goto label_1cf468;
        }
    }
    ctx->pc = 0x1CF448u;
label_1cf448:
    // 0x1cf448: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x1cf448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_1cf44c:
    // 0x1cf44c: 0xac4502f0  sw          $a1, 0x2F0($v0)
    ctx->pc = 0x1cf44cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 752), GPR_U32(ctx, 5));
label_1cf450:
    // 0x1cf450: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1cf450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1cf454:
    // 0x1cf454: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1cf454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1cf458:
    // 0x1cf458: 0x28a2000f  slti        $v0, $a1, 0xF
    ctx->pc = 0x1cf458u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)15) ? 1 : 0);
label_1cf45c:
    // 0x1cf45c: 0x0  nop
    ctx->pc = 0x1cf45cu;
    // NOP
label_1cf460:
    // 0x1cf460: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1cf464:
    if (ctx->pc == 0x1CF464u) {
        ctx->pc = 0x1CF468u;
        goto label_1cf468;
    }
    ctx->pc = 0x1CF460u;
    {
        const bool branch_taken_0x1cf460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf460) {
            ctx->pc = 0x1CF448u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cf448;
        }
    }
    ctx->pc = 0x1CF468u;
label_1cf468:
    // 0x1cf468: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1cf468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1cf46c:
    // 0x1cf46c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1cf46cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1cf470:
    // 0x1cf470: 0xafa2032c  sw          $v0, 0x32C($sp)
    ctx->pc = 0x1cf470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 812), GPR_U32(ctx, 2));
label_1cf474:
    // 0x1cf474: 0x2484f3b0  addiu       $a0, $a0, -0xC50
    ctx->pc = 0x1cf474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964144));
label_1cf478:
    // 0x1cf478: 0x27a502f0  addiu       $a1, $sp, 0x2F0
    ctx->pc = 0x1cf478u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_1cf47c:
    // 0x1cf47c: 0xc050940  jal         func_142500
label_1cf480:
    if (ctx->pc == 0x1CF480u) {
        ctx->pc = 0x1CF480u;
            // 0x1cf480: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CF484u;
        goto label_1cf484;
    }
    ctx->pc = 0x1CF47Cu;
    SET_GPR_U32(ctx, 31, 0x1CF484u);
    ctx->pc = 0x1CF480u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF47Cu;
            // 0x1cf480: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142500u;
    if (runtime->hasFunction(0x142500u)) {
        auto targetFn = runtime->lookupFunction(0x142500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF484u; }
        if (ctx->pc != 0x1CF484u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgBeginDraw__FP9mgCMemoryPiP14mgCDrawManager_0x142500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF484u; }
        if (ctx->pc != 0x1CF484u) { return; }
    }
    ctx->pc = 0x1CF484u;
label_1cf484:
    // 0x1cf484: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1cf484u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1cf488:
    // 0x1cf488: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1cf488u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cf48c:
    // 0x1cf48c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1cf48cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1cf490:
    // 0x1cf490: 0x320f809  jalr        $t9
label_1cf494:
    if (ctx->pc == 0x1CF494u) {
        ctx->pc = 0x1CF494u;
            // 0x1cf494: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x1CF498u;
        goto label_1cf498;
    }
    ctx->pc = 0x1CF490u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CF498u);
        ctx->pc = 0x1CF494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF490u;
            // 0x1cf494: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CF498u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CF498u; }
            if (ctx->pc != 0x1CF498u) { return; }
        }
        }
    }
    ctx->pc = 0x1CF498u;
label_1cf498:
    // 0x1cf498: 0x8f848db4  lw          $a0, -0x724C($gp)
    ctx->pc = 0x1cf498u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938036)));
label_1cf49c:
    // 0x1cf49c: 0x8c990d00  lw          $t9, 0xD00($a0)
    ctx->pc = 0x1cf49cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3328)));
label_1cf4a0:
    // 0x1cf4a0: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x1cf4a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_1cf4a4:
    // 0x1cf4a4: 0x320f809  jalr        $t9
label_1cf4a8:
    if (ctx->pc == 0x1CF4A8u) {
        ctx->pc = 0x1CF4A8u;
            // 0x1cf4a8: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x1CF4ACu;
        goto label_1cf4ac;
    }
    ctx->pc = 0x1CF4A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CF4ACu);
        ctx->pc = 0x1CF4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF4A4u;
            // 0x1cf4a8: 0x27a50110  addiu       $a1, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CF4ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CF4ACu; }
            if (ctx->pc != 0x1CF4ACu) { return; }
        }
        }
    }
    ctx->pc = 0x1CF4ACu;
label_1cf4ac:
    // 0x1cf4ac: 0x8f848db4  lw          $a0, -0x724C($gp)
    ctx->pc = 0x1cf4acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938036)));
label_1cf4b0:
    // 0x1cf4b0: 0x8c990d00  lw          $t9, 0xD00($a0)
    ctx->pc = 0x1cf4b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3328)));
label_1cf4b4:
    // 0x1cf4b4: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x1cf4b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_1cf4b8:
    // 0x1cf4b8: 0x320f809  jalr        $t9
label_1cf4bc:
    if (ctx->pc == 0x1CF4BCu) {
        ctx->pc = 0x1CF4C0u;
        goto label_1cf4c0;
    }
    ctx->pc = 0x1CF4B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CF4C0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CF4C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CF4C0u; }
            if (ctx->pc != 0x1CF4C0u) { return; }
        }
        }
    }
    ctx->pc = 0x1CF4C0u;
label_1cf4c0:
    // 0x1cf4c0: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cf4c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1cf4c4:
    // 0x1cf4c4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1cf4c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1cf4c8:
    // 0x1cf4c8: 0x24a57280  addiu       $a1, $a1, 0x7280
    ctx->pc = 0x1cf4c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29312));
label_1cf4cc:
    // 0x1cf4cc: 0xc04b414  jal         func_12D050
label_1cf4d0:
    if (ctx->pc == 0x1CF4D0u) {
        ctx->pc = 0x1CF4D0u;
            // 0x1cf4d0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1CF4D4u;
        goto label_1cf4d4;
    }
    ctx->pc = 0x1CF4CCu;
    SET_GPR_U32(ctx, 31, 0x1CF4D4u);
    ctx->pc = 0x1CF4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF4CCu;
            // 0x1cf4d0: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF4D4u; }
        if (ctx->pc != 0x1CF4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF4D4u; }
        if (ctx->pc != 0x1CF4D4u) { return; }
    }
    ctx->pc = 0x1CF4D4u;
label_1cf4d4:
    // 0x1cf4d4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1cf4d4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cf4d8:
    // 0x1cf4d8: 0x12a00005  beqz        $s5, . + 4 + (0x5 << 2)
label_1cf4dc:
    if (ctx->pc == 0x1CF4DCu) {
        ctx->pc = 0x1CF4DCu;
            // 0x1cf4dc: 0x2416ffff  addiu       $s6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1CF4E0u;
        goto label_1cf4e0;
    }
    ctx->pc = 0x1CF4D8u;
    {
        const bool branch_taken_0x1cf4d8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF4D8u;
            // 0x1cf4dc: 0x2416ffff  addiu       $s6, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf4d8) {
            ctx->pc = 0x1CF4F0u;
            goto label_1cf4f0;
        }
    }
    ctx->pc = 0x1CF4E0u;
label_1cf4e0:
    // 0x1cf4e0: 0x86b60000  lh          $s6, 0x0($s5)
    ctx->pc = 0x1cf4e0u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
label_1cf4e4:
    // 0x1cf4e4: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x1cf4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
label_1cf4e8:
    // 0x1cf4e8: 0xc068984  jal         func_1A2610
label_1cf4ec:
    if (ctx->pc == 0x1CF4ECu) {
        ctx->pc = 0x1CF4ECu;
            // 0x1cf4ec: 0x24846740  addiu       $a0, $a0, 0x6740 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26432));
        ctx->pc = 0x1CF4F0u;
        goto label_1cf4f0;
    }
    ctx->pc = 0x1CF4E8u;
    SET_GPR_U32(ctx, 31, 0x1CF4F0u);
    ctx->pc = 0x1CF4ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF4E8u;
            // 0x1cf4ec: 0x24846740  addiu       $a0, $a0, 0x6740 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A2610u;
    if (runtime->hasFunction(0x1A2610u)) {
        auto targetFn = runtime->lookupFunction(0x1A2610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF4F0u; }
        if (ctx->pc != 0x1CF4F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEffect__10CWaveTableFv_0x1a2610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF4F0u; }
        if (ctx->pc != 0x1CF4F0u) { return; }
    }
    ctx->pc = 0x1CF4F0u;
label_1cf4f0:
    // 0x1cf4f0: 0xc050950  jal         func_142540
label_1cf4f4:
    if (ctx->pc == 0x1CF4F4u) {
        ctx->pc = 0x1CF4F4u;
            // 0x1cf4f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CF4F8u;
        goto label_1cf4f8;
    }
    ctx->pc = 0x1CF4F0u;
    SET_GPR_U32(ctx, 31, 0x1CF4F8u);
    ctx->pc = 0x1CF4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF4F0u;
            // 0x1cf4f4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142540u;
    if (runtime->hasFunction(0x142540u)) {
        auto targetFn = runtime->lookupFunction(0x142540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF4F8u; }
        if (ctx->pc != 0x1CF4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgPreEndDraw__FP14mgCDrawManager_0x142540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF4F8u; }
        if (ctx->pc != 0x1CF4F8u) { return; }
    }
    ctx->pc = 0x1CF4F8u;
label_1cf4f8:
    // 0x1cf4f8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cf4f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf4fc:
    // 0x1cf4fc: 0x8f828dac  lw          $v0, -0x7254($gp)
    ctx->pc = 0x1cf4fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cf500:
    // 0x1cf500: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cf500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cf504:
    // 0x1cf504: 0x27a60400  addiu       $a2, $sp, 0x400
    ctx->pc = 0x1cf504u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_1cf508:
    // 0x1cf508: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x1cf508u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1cf50c:
    // 0x1cf50c: 0xc05a3f4  jal         func_168FD0
label_1cf510:
    if (ctx->pc == 0x1CF510u) {
        ctx->pc = 0x1CF510u;
            // 0x1cf510: 0x244423d0  addiu       $a0, $v0, 0x23D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9168));
        ctx->pc = 0x1CF514u;
        goto label_1cf514;
    }
    ctx->pc = 0x1CF50Cu;
    SET_GPR_U32(ctx, 31, 0x1CF514u);
    ctx->pc = 0x1CF510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF50Cu;
            // 0x1cf510: 0x244423d0  addiu       $a0, $v0, 0x23D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168FD0u;
    if (runtime->hasFunction(0x168FD0u)) {
        auto targetFn = runtime->lookupFunction(0x168FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF514u; }
        if (ctx->pc != 0x1CF514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTextureBlockNo__11CMdsListSetFiPii_0x168fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF514u; }
        if (ctx->pc != 0x1CF514u) { return; }
    }
    ctx->pc = 0x1CF514u;
label_1cf514:
    // 0x1cf514: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1cf514u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1cf518:
    // 0x1cf518: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1cf518u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cf51c:
    // 0x1cf51c: 0x1020001b  beqz        $at, . + 4 + (0x1B << 2)
label_1cf520:
    if (ctx->pc == 0x1CF520u) {
        ctx->pc = 0x1CF520u;
            // 0x1cf520: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CF524u;
        goto label_1cf524;
    }
    ctx->pc = 0x1CF51Cu;
    {
        const bool branch_taken_0x1cf51c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF51Cu;
            // 0x1cf520: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf51c) {
            ctx->pc = 0x1CF58Cu;
            goto label_1cf58c;
        }
    }
    ctx->pc = 0x1CF524u;
label_1cf524:
    // 0x1cf524: 0x0  nop
    ctx->pc = 0x1cf524u;
    // NOP
label_1cf528:
    // 0x1cf528: 0x2711023  subu        $v0, $s3, $s1
    ctx->pc = 0x1cf528u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 17)));
label_1cf52c:
    // 0x1cf52c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1cf52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1cf530:
    // 0x1cf530: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cf530u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf534:
    // 0x1cf534: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1cf534u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1cf538:
    // 0x1cf538: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1cf538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_1cf53c:
    // 0x1cf53c: 0x24540400  addiu       $s4, $v0, 0x400
    ctx->pc = 0x1cf53cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1024));
label_1cf540:
    // 0x1cf540: 0x8e920000  lw          $s2, 0x0($s4)
    ctx->pc = 0x1cf540u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1cf544:
    // 0x1cf544: 0xc050958  jal         func_142560
label_1cf548:
    if (ctx->pc == 0x1CF548u) {
        ctx->pc = 0x1CF548u;
            // 0x1cf548: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CF54Cu;
        goto label_1cf54c;
    }
    ctx->pc = 0x1CF544u;
    SET_GPR_U32(ctx, 31, 0x1CF54Cu);
    ctx->pc = 0x1CF548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF544u;
            // 0x1cf548: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142560u;
    if (runtime->hasFunction(0x142560u)) {
        auto targetFn = runtime->lookupFunction(0x142560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF54Cu; }
        if (ctx->pc != 0x1CF54Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgEndDrawReloadTexture__FiP14mgCDrawManager_0x142560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF54Cu; }
        if (ctx->pc != 0x1CF54Cu) { return; }
    }
    ctx->pc = 0x1CF54Cu;
label_1cf54c:
    // 0x1cf54c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1cf550:
    if (ctx->pc == 0x1CF550u) {
        ctx->pc = 0x1CF554u;
        goto label_1cf554;
    }
    ctx->pc = 0x1CF54Cu;
    {
        const bool branch_taken_0x1cf54c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf54c) {
            ctx->pc = 0x1CF56Cu;
            goto label_1cf56c;
        }
    }
    ctx->pc = 0x1CF554u;
label_1cf554:
    // 0x1cf554: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1cf554u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_1cf558:
    // 0x1cf558: 0x16c20004  bne         $s6, $v0, . + 4 + (0x4 << 2)
label_1cf55c:
    if (ctx->pc == 0x1CF55Cu) {
        ctx->pc = 0x1CF55Cu;
            // 0x1cf55c: 0x3c0401eb  lui         $a0, 0x1EB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
        ctx->pc = 0x1CF560u;
        goto label_1cf560;
    }
    ctx->pc = 0x1CF558u;
    {
        const bool branch_taken_0x1cf558 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CF55Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF558u;
            // 0x1cf55c: 0x3c0401eb  lui         $a0, 0x1EB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf558) {
            ctx->pc = 0x1CF56Cu;
            goto label_1cf56c;
        }
    }
    ctx->pc = 0x1CF560u;
label_1cf560:
    // 0x1cf560: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1cf560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1cf564:
    // 0x1cf564: 0xc06887c  jal         func_1A21F0
label_1cf568:
    if (ctx->pc == 0x1CF568u) {
        ctx->pc = 0x1CF568u;
            // 0x1cf568: 0x24846740  addiu       $a0, $a0, 0x6740 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26432));
        ctx->pc = 0x1CF56Cu;
        goto label_1cf56c;
    }
    ctx->pc = 0x1CF564u;
    SET_GPR_U32(ctx, 31, 0x1CF56Cu);
    ctx->pc = 0x1CF568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF564u;
            // 0x1cf568: 0x24846740  addiu       $a0, $a0, 0x6740 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A21F0u;
    if (runtime->hasFunction(0x1A21F0u)) {
        auto targetFn = runtime->lookupFunction(0x1A21F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF56Cu; }
        if (ctx->pc != 0x1CF56Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CreateTexture__10CWaveTableFP10mgCTexture_0x1a21f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF56Cu; }
        if (ctx->pc != 0x1CF56Cu) { return; }
    }
    ctx->pc = 0x1CF56Cu;
label_1cf56c:
    // 0x1cf56c: 0x0  nop
    ctx->pc = 0x1cf56cu;
    // NOP
label_1cf570:
    // 0x1cf570: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cf570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cf574:
    // 0x1cf574: 0xc050960  jal         func_142580
label_1cf578:
    if (ctx->pc == 0x1CF578u) {
        ctx->pc = 0x1CF578u;
            // 0x1cf578: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CF57Cu;
        goto label_1cf57c;
    }
    ctx->pc = 0x1CF574u;
    SET_GPR_U32(ctx, 31, 0x1CF57Cu);
    ctx->pc = 0x1CF578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF574u;
            // 0x1cf578: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142580u;
    if (runtime->hasFunction(0x142580u)) {
        auto targetFn = runtime->lookupFunction(0x142580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF57Cu; }
        if (ctx->pc != 0x1CF57Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgEndDraw__FiP14mgCDrawManager_0x142580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF57Cu; }
        if (ctx->pc != 0x1CF57Cu) { return; }
    }
    ctx->pc = 0x1CF57Cu;
label_1cf57c:
    // 0x1cf57c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1cf57cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1cf580:
    // 0x1cf580: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x1cf580u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_1cf584:
    // 0x1cf584: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_1cf588:
    if (ctx->pc == 0x1CF588u) {
        ctx->pc = 0x1CF58Cu;
        goto label_1cf58c;
    }
    ctx->pc = 0x1CF584u;
    {
        const bool branch_taken_0x1cf584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf584) {
            ctx->pc = 0x1CF524u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cf524;
        }
    }
    ctx->pc = 0x1CF58Cu;
label_1cf58c:
    // 0x1cf58c: 0x0  nop
    ctx->pc = 0x1cf58cu;
    // NOP
label_1cf590:
    // 0x1cf590: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cf590u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1cf594:
    // 0x1cf594: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x1cf594u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
label_1cf598:
    // 0x1cf598: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
label_1cf59c:
    if (ctx->pc == 0x1CF59Cu) {
        ctx->pc = 0x1CF59Cu;
            // 0x1cf59c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CF5A0u;
        goto label_1cf5a0;
    }
    ctx->pc = 0x1CF598u;
    {
        const bool branch_taken_0x1cf598 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF598u;
            // 0x1cf59c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf598) {
            ctx->pc = 0x1CF4FCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cf4fc;
        }
    }
    ctx->pc = 0x1CF5A0u;
label_1cf5a0:
    // 0x1cf5a0: 0xc050ebc  jal         func_143AF0
label_1cf5a4:
    if (ctx->pc == 0x1CF5A4u) {
        ctx->pc = 0x1CF5A8u;
        goto label_1cf5a8;
    }
    ctx->pc = 0x1CF5A0u;
    SET_GPR_U32(ctx, 31, 0x1CF5A8u);
    ctx->pc = 0x143AF0u;
    if (runtime->hasFunction(0x143AF0u)) {
        auto targetFn = runtime->lookupFunction(0x143AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF5A8u; }
        if (ctx->pc != 0x1CF5A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkTextureRepeat__Fi_0x143af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF5A8u; }
        if (ctx->pc != 0x1CF5A8u) { return; }
    }
    ctx->pc = 0x1CF5A8u;
label_1cf5a8:
    // 0x1cf5a8: 0xc098814  jal         func_262050
label_1cf5ac:
    if (ctx->pc == 0x1CF5ACu) {
        ctx->pc = 0x1CF5B0u;
        goto label_1cf5b0;
    }
    ctx->pc = 0x1CF5A8u;
    SET_GPR_U32(ctx, 31, 0x1CF5B0u);
    ctx->pc = 0x262050u;
    if (runtime->hasFunction(0x262050u)) {
        auto targetFn = runtime->lookupFunction(0x262050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF5B0u; }
        if (ctx->pc != 0x1CF5B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EdEventFirstDraw__Fv_0x262050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF5B0u; }
        if (ctx->pc != 0x1CF5B0u) { return; }
    }
    ctx->pc = 0x1CF5B0u;
label_1cf5b0:
    // 0x1cf5b0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1cf5b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1cf5b4:
    // 0x1cf5b4: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x1cf5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1cf5b8:
    // 0x1cf5b8: 0xc04ba14  jal         func_12E850
label_1cf5bc:
    if (ctx->pc == 0x1CF5BCu) {
        ctx->pc = 0x1CF5BCu;
            // 0x1cf5bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CF5C0u;
        goto label_1cf5c0;
    }
    ctx->pc = 0x1CF5B8u;
    SET_GPR_U32(ctx, 31, 0x1CF5C0u);
    ctx->pc = 0x1CF5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF5B8u;
            // 0x1cf5bc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF5C0u; }
        if (ctx->pc != 0x1CF5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF5C0u; }
        if (ctx->pc != 0x1CF5C0u) { return; }
    }
    ctx->pc = 0x1CF5C0u;
label_1cf5c0:
    // 0x1cf5c0: 0x8f848e78  lw          $a0, -0x7188($gp)
    ctx->pc = 0x1cf5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938232)));
label_1cf5c4:
    // 0x1cf5c4: 0xc050c64  jal         func_143190
label_1cf5c8:
    if (ctx->pc == 0x1CF5C8u) {
        ctx->pc = 0x1CF5C8u;
            // 0x1cf5c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CF5CCu;
        goto label_1cf5cc;
    }
    ctx->pc = 0x1CF5C4u;
    SET_GPR_U32(ctx, 31, 0x1CF5CCu);
    ctx->pc = 0x1CF5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF5C4u;
            // 0x1cf5c8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143190u;
    if (runtime->hasFunction(0x143190u)) {
        auto targetFn = runtime->lookupFunction(0x143190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF5CCu; }
        if (ctx->pc != 0x1CF5CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgBeginDrawShadow__FP10mgCTextureP10mgCTexture_0x143190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF5CCu; }
        if (ctx->pc != 0x1CF5CCu) { return; }
    }
    ctx->pc = 0x1CF5CCu;
label_1cf5cc:
    // 0x1cf5cc: 0x27a40600  addiu       $a0, $sp, 0x600
    ctx->pc = 0x1cf5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1536));
label_1cf5d0:
    // 0x1cf5d0: 0xc050dd8  jal         func_143760
label_1cf5d4:
    if (ctx->pc == 0x1CF5D4u) {
        ctx->pc = 0x1CF5D4u;
            // 0x1cf5d4: 0x27a50640  addiu       $a1, $sp, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
        ctx->pc = 0x1CF5D8u;
        goto label_1cf5d8;
    }
    ctx->pc = 0x1CF5D0u;
    SET_GPR_U32(ctx, 31, 0x1CF5D8u);
    ctx->pc = 0x1CF5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF5D0u;
            // 0x1cf5d4: 0x27a50640  addiu       $a1, $sp, 0x640 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143760u;
    if (runtime->hasFunction(0x143760u)) {
        auto targetFn = runtime->lookupFunction(0x143760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF5D8u; }
        if (ctx->pc != 0x1CF5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetLight__FPA4_fPA4_f_0x143760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF5D8u; }
        if (ctx->pc != 0x1CF5D8u) { return; }
    }
    ctx->pc = 0x1CF5D8u;
label_1cf5d8:
    // 0x1cf5d8: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x1cf5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
label_1cf5dc:
    // 0x1cf5dc: 0x27a30680  addiu       $v1, $sp, 0x680
    ctx->pc = 0x1cf5dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1664));
label_1cf5e0:
    // 0x1cf5e0: 0x244288c0  addiu       $v0, $v0, -0x7740
    ctx->pc = 0x1cf5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936768));
label_1cf5e4:
    // 0x1cf5e4: 0x27a40684  addiu       $a0, $sp, 0x684
    ctx->pc = 0x1cf5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1668));
label_1cf5e8:
    // 0x1cf5e8: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1cf5e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1cf5ec:
    // 0x1cf5ec: 0x44801800  mtc1        $zero, $f3
    ctx->pc = 0x1cf5ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_1cf5f0:
    // 0x1cf5f0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1cf5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_1cf5f4:
    // 0x1cf5f4: 0xc7a20600  lwc1        $f2, 0x600($sp)
    ctx->pc = 0x1cf5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cf5f8:
    // 0x1cf5f8: 0xc7a10610  lwc1        $f1, 0x610($sp)
    ctx->pc = 0x1cf5f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1552)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf5fc:
    // 0x1cf5fc: 0xc7a00620  lwc1        $f0, 0x620($sp)
    ctx->pc = 0x1cf5fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1568)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf600:
    // 0x1cf600: 0xe7a20680  swc1        $f2, 0x680($sp)
    ctx->pc = 0x1cf600u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1664), bits); }
label_1cf604:
    // 0x1cf604: 0xe7a10684  swc1        $f1, 0x684($sp)
    ctx->pc = 0x1cf604u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1668), bits); }
label_1cf608:
    // 0x1cf608: 0xe7a00688  swc1        $f0, 0x688($sp)
    ctx->pc = 0x1cf608u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1672), bits); }
label_1cf60c:
    // 0x1cf60c: 0xc4800000  lwc1        $f0, 0x0($a0)
    ctx->pc = 0x1cf60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf610:
    // 0x1cf610: 0x46030034  c.lt.s      $f0, $f3
    ctx->pc = 0x1cf610u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[3])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cf614:
    // 0x1cf614: 0x0  nop
    ctx->pc = 0x1cf614u;
    // NOP
label_1cf618:
    // 0x1cf618: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1cf61c:
    if (ctx->pc == 0x1CF61Cu) {
        ctx->pc = 0x1CF620u;
        goto label_1cf620;
    }
    ctx->pc = 0x1CF618u;
    {
        const bool branch_taken_0x1cf618 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cf618) {
            ctx->pc = 0x1CF624u;
            goto label_1cf624;
        }
    }
    ctx->pc = 0x1CF620u;
label_1cf620:
    // 0x1cf620: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1cf620u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
label_1cf624:
    // 0x1cf624: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1cf624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_1cf628:
    // 0x1cf628: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1cf628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1cf62c:
    // 0x1cf62c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cf62cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cf630:
    // 0x1cf630: 0x0  nop
    ctx->pc = 0x1cf630u;
    // NOP
label_1cf634:
    // 0x1cf634: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x1cf634u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cf638:
    // 0x1cf638: 0x0  nop
    ctx->pc = 0x1cf638u;
    // NOP
label_1cf63c:
    // 0x1cf63c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1cf640:
    if (ctx->pc == 0x1CF640u) {
        ctx->pc = 0x1CF640u;
            // 0x1cf640: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->pc = 0x1CF644u;
        goto label_1cf644;
    }
    ctx->pc = 0x1CF63Cu;
    {
        const bool branch_taken_0x1cf63c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CF640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF63Cu;
            // 0x1cf640: 0xe4800000  swc1        $f0, 0x0($a0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf63c) {
            ctx->pc = 0x1CF648u;
            goto label_1cf648;
        }
    }
    ctx->pc = 0x1CF644u;
label_1cf644:
    // 0x1cf644: 0xe4810000  swc1        $f1, 0x0($a0)
    ctx->pc = 0x1cf644u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1cf648:
    // 0x1cf648: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1cf648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1cf64c:
    // 0x1cf64c: 0x27a70690  addiu       $a3, $sp, 0x690
    ctx->pc = 0x1cf64cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1680));
label_1cf650:
    // 0x1cf650: 0x24428f10  addiu       $v0, $v0, -0x70F0
    ctx->pc = 0x1cf650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938384));
label_1cf654:
    // 0x1cf654: 0x27a306a0  addiu       $v1, $sp, 0x6A0
    ctx->pc = 0x1cf654u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1696));
label_1cf658:
    // 0x1cf658: 0x78440000  lq          $a0, 0x0($v0)
    ctx->pc = 0x1cf658u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1cf65c:
    // 0x1cf65c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cf65cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf660:
    // 0x1cf660: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1cf660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1cf664:
    // 0x1cf664: 0x7ce40000  sq          $a0, 0x0($a3)
    ctx->pc = 0x1cf664u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 4));
label_1cf668:
    // 0x1cf668: 0x24428f20  addiu       $v0, $v0, -0x70E0
    ctx->pc = 0x1cf668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938400));
label_1cf66c:
    // 0x1cf66c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1cf66cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1cf670:
    // 0x1cf670: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1cf670u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_1cf674:
    // 0x1cf674: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1cf674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1cf678:
    // 0x1cf678: 0xc05d420  jal         func_175080
label_1cf67c:
    if (ctx->pc == 0x1CF67Cu) {
        ctx->pc = 0x1CF67Cu;
            // 0x1cf67c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CF680u;
        goto label_1cf680;
    }
    ctx->pc = 0x1CF678u;
    SET_GPR_U32(ctx, 31, 0x1CF680u);
    ctx->pc = 0x1CF67Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF678u;
            // 0x1cf67c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (runtime->hasFunction(0x175080u)) {
        auto targetFn = runtime->lookupFunction(0x175080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF680u; }
        if (ctx->pc != 0x1CF680u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiiPf_0x175080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF680u; }
        if (ctx->pc != 0x1CF680u) { return; }
    }
    ctx->pc = 0x1CF680u;
label_1cf680:
    // 0x1cf680: 0xc7a00694  lwc1        $f0, 0x694($sp)
    ctx->pc = 0x1cf680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1684)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cf684:
    // 0x1cf684: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1cf684u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1cf688:
    // 0x1cf688: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x1cf688u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_1cf68c:
    // 0x1cf68c: 0x27a40680  addiu       $a0, $sp, 0x680
    ctx->pc = 0x1cf68cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1664));
label_1cf690:
    // 0x1cf690: 0x27a50690  addiu       $a1, $sp, 0x690
    ctx->pc = 0x1cf690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1680));
label_1cf694:
    // 0x1cf694: 0x27a606a0  addiu       $a2, $sp, 0x6A0
    ctx->pc = 0x1cf694u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1696));
label_1cf698:
    // 0x1cf698: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1cf698u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_1cf69c:
    // 0x1cf69c: 0xc050e30  jal         func_1438C0
label_1cf6a0:
    if (ctx->pc == 0x1CF6A0u) {
        ctx->pc = 0x1CF6A0u;
            // 0x1cf6a0: 0xe7a00694  swc1        $f0, 0x694($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1684), bits); }
        ctx->pc = 0x1CF6A4u;
        goto label_1cf6a4;
    }
    ctx->pc = 0x1CF69Cu;
    SET_GPR_U32(ctx, 31, 0x1CF6A4u);
    ctx->pc = 0x1CF6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF69Cu;
            // 0x1cf6a0: 0xe7a00694  swc1        $f0, 0x694($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1684), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1438C0u;
    if (runtime->hasFunction(0x1438C0u)) {
        auto targetFn = runtime->lookupFunction(0x1438C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF6A4u; }
        if (ctx->pc != 0x1CF6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetDropShadowMatrix__FPfPfPf_0x1438c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF6A4u; }
        if (ctx->pc != 0x1CF6A4u) { return; }
    }
    ctx->pc = 0x1CF6A4u;
label_1cf6a4:
    // 0x1cf6a4: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cf6a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cf6a8:
    // 0x1cf6a8: 0xc0b22fc  jal         func_2C8BF0
label_1cf6ac:
    if (ctx->pc == 0x1CF6ACu) {
        ctx->pc = 0x1CF6ACu;
            // 0x1cf6ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CF6B0u;
        goto label_1cf6b0;
    }
    ctx->pc = 0x1CF6A8u;
    SET_GPR_U32(ctx, 31, 0x1CF6B0u);
    ctx->pc = 0x1CF6ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF6A8u;
            // 0x1cf6ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8BF0u;
    if (runtime->hasFunction(0x2C8BF0u)) {
        auto targetFn = runtime->lookupFunction(0x2C8BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF6B0u; }
        if (ctx->pc != 0x1CF6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckDrawCharaShadow__6CSceneFi_0x2c8bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF6B0u; }
        if (ctx->pc != 0x1CF6B0u) { return; }
    }
    ctx->pc = 0x1CF6B0u;
label_1cf6b0:
    // 0x1cf6b0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1cf6b4:
    if (ctx->pc == 0x1CF6B4u) {
        ctx->pc = 0x1CF6B4u;
            // 0x1cf6b4: 0x27a406b0  addiu       $a0, $sp, 0x6B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1712));
        ctx->pc = 0x1CF6B8u;
        goto label_1cf6b8;
    }
    ctx->pc = 0x1CF6B0u;
    {
        const bool branch_taken_0x1cf6b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF6B0u;
            // 0x1cf6b4: 0x27a406b0  addiu       $a0, $sp, 0x6B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf6b0) {
            ctx->pc = 0x1CF6E4u;
            goto label_1cf6e4;
        }
    }
    ctx->pc = 0x1CF6B8u;
label_1cf6b8:
    // 0x1cf6b8: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1cf6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1cf6bc:
    // 0x1cf6bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1cf6bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cf6c0:
    // 0x1cf6c0: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x1cf6c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_1cf6c4:
    // 0x1cf6c4: 0x320f809  jalr        $t9
label_1cf6c8:
    if (ctx->pc == 0x1CF6C8u) {
        ctx->pc = 0x1CF6CCu;
        goto label_1cf6cc;
    }
    ctx->pc = 0x1CF6C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CF6CCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CF6CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CF6CCu; }
            if (ctx->pc != 0x1CF6CCu) { return; }
        }
        }
    }
    ctx->pc = 0x1CF6CCu;
label_1cf6cc:
    // 0x1cf6cc: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1cf6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1cf6d0:
    // 0x1cf6d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1cf6d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cf6d4:
    // 0x1cf6d4: 0x8f3900cc  lw          $t9, 0xCC($t9)
    ctx->pc = 0x1cf6d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 204)));
label_1cf6d8:
    // 0x1cf6d8: 0x320f809  jalr        $t9
label_1cf6dc:
    if (ctx->pc == 0x1CF6DCu) {
        ctx->pc = 0x1CF6E0u;
        goto label_1cf6e0;
    }
    ctx->pc = 0x1CF6D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CF6E0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CF6E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CF6E0u; }
            if (ctx->pc != 0x1CF6E0u) { return; }
        }
        }
    }
    ctx->pc = 0x1CF6E0u;
label_1cf6e0:
    // 0x1cf6e0: 0x27a406b0  addiu       $a0, $sp, 0x6B0
    ctx->pc = 0x1cf6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1712));
label_1cf6e4:
    // 0x1cf6e4: 0xc050dd8  jal         func_143760
label_1cf6e8:
    if (ctx->pc == 0x1CF6E8u) {
        ctx->pc = 0x1CF6E8u;
            // 0x1cf6e8: 0x27a506f0  addiu       $a1, $sp, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1776));
        ctx->pc = 0x1CF6ECu;
        goto label_1cf6ec;
    }
    ctx->pc = 0x1CF6E4u;
    SET_GPR_U32(ctx, 31, 0x1CF6ECu);
    ctx->pc = 0x1CF6E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF6E4u;
            // 0x1cf6e8: 0x27a506f0  addiu       $a1, $sp, 0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143760u;
    if (runtime->hasFunction(0x143760u)) {
        auto targetFn = runtime->lookupFunction(0x143760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF6ECu; }
        if (ctx->pc != 0x1CF6ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetLight__FPA4_fPA4_f_0x143760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF6ECu; }
        if (ctx->pc != 0x1CF6ECu) { return; }
    }
    ctx->pc = 0x1CF6ECu;
label_1cf6ec:
    // 0x1cf6ec: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x1cf6ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
label_1cf6f0:
    // 0x1cf6f0: 0x27a30730  addiu       $v1, $sp, 0x730
    ctx->pc = 0x1cf6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1840));
label_1cf6f4:
    // 0x1cf6f4: 0x244288d0  addiu       $v0, $v0, -0x7730
    ctx->pc = 0x1cf6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936784));
label_1cf6f8:
    // 0x1cf6f8: 0x27a40734  addiu       $a0, $sp, 0x734
    ctx->pc = 0x1cf6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1844));
label_1cf6fc:
    // 0x1cf6fc: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1cf6fcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1cf700:
    // 0x1cf700: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cf700u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cf704:
    // 0x1cf704: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1cf704u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_1cf708:
    // 0x1cf708: 0xc7a306b0  lwc1        $f3, 0x6B0($sp)
    ctx->pc = 0x1cf708u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_1cf70c:
    // 0x1cf70c: 0xc7a206c0  lwc1        $f2, 0x6C0($sp)
    ctx->pc = 0x1cf70cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_1cf710:
    // 0x1cf710: 0xc7a106d0  lwc1        $f1, 0x6D0($sp)
    ctx->pc = 0x1cf710u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1744)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf714:
    // 0x1cf714: 0xe7a30730  swc1        $f3, 0x730($sp)
    ctx->pc = 0x1cf714u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1840), bits); }
label_1cf718:
    // 0x1cf718: 0xe7a20734  swc1        $f2, 0x734($sp)
    ctx->pc = 0x1cf718u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1844), bits); }
label_1cf71c:
    // 0x1cf71c: 0xe7a10738  swc1        $f1, 0x738($sp)
    ctx->pc = 0x1cf71cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1848), bits); }
label_1cf720:
    // 0x1cf720: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x1cf720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf724:
    // 0x1cf724: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cf724u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cf728:
    // 0x1cf728: 0x0  nop
    ctx->pc = 0x1cf728u;
    // NOP
label_1cf72c:
    // 0x1cf72c: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1cf730:
    if (ctx->pc == 0x1CF730u) {
        ctx->pc = 0x1CF734u;
        goto label_1cf734;
    }
    ctx->pc = 0x1CF72Cu;
    {
        const bool branch_taken_0x1cf72c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cf72c) {
            ctx->pc = 0x1CF738u;
            goto label_1cf738;
        }
    }
    ctx->pc = 0x1CF734u;
label_1cf734:
    // 0x1cf734: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x1cf734u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
label_1cf738:
    // 0x1cf738: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x1cf738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
label_1cf73c:
    // 0x1cf73c: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x1cf73cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_1cf740:
    // 0x1cf740: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cf740u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cf744:
    // 0x1cf744: 0x0  nop
    ctx->pc = 0x1cf744u;
    // NOP
label_1cf748:
    // 0x1cf748: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1cf748u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_1cf74c:
    // 0x1cf74c: 0x0  nop
    ctx->pc = 0x1cf74cu;
    // NOP
label_1cf750:
    // 0x1cf750: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_1cf754:
    if (ctx->pc == 0x1CF754u) {
        ctx->pc = 0x1CF754u;
            // 0x1cf754: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->pc = 0x1CF758u;
        goto label_1cf758;
    }
    ctx->pc = 0x1CF750u;
    {
        const bool branch_taken_0x1cf750 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x1CF754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF750u;
            // 0x1cf754: 0xe4810000  swc1        $f1, 0x0($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf750) {
            ctx->pc = 0x1CF75Cu;
            goto label_1cf75c;
        }
    }
    ctx->pc = 0x1CF758u;
label_1cf758:
    // 0x1cf758: 0xe4800000  swc1        $f0, 0x0($a0)
    ctx->pc = 0x1cf758u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
label_1cf75c:
    // 0x1cf75c: 0x3c020034  lui         $v0, 0x34
    ctx->pc = 0x1cf75cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)52 << 16));
label_1cf760:
    // 0x1cf760: 0x27a30750  addiu       $v1, $sp, 0x750
    ctx->pc = 0x1cf760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1872));
label_1cf764:
    // 0x1cf764: 0x24428f30  addiu       $v0, $v0, -0x70D0
    ctx->pc = 0x1cf764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938416));
label_1cf768:
    // 0x1cf768: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cf768u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf76c:
    // 0x1cf76c: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x1cf76cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_1cf770:
    // 0x1cf770: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x1cf770u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
label_1cf774:
    // 0x1cf774: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cf774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cf778:
    // 0x1cf778: 0xc0b22fc  jal         func_2C8BF0
label_1cf77c:
    if (ctx->pc == 0x1CF77Cu) {
        ctx->pc = 0x1CF77Cu;
            // 0x1cf77c: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x1CF780u;
        goto label_1cf780;
    }
    ctx->pc = 0x1CF778u;
    SET_GPR_U32(ctx, 31, 0x1CF780u);
    ctx->pc = 0x1CF77Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF778u;
            // 0x1cf77c: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8BF0u;
    if (runtime->hasFunction(0x2C8BF0u)) {
        auto targetFn = runtime->lookupFunction(0x2C8BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF780u; }
        if (ctx->pc != 0x1CF780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckDrawCharaShadow__6CSceneFi_0x2c8bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF780u; }
        if (ctx->pc != 0x1CF780u) { return; }
    }
    ctx->pc = 0x1CF780u;
label_1cf780:
    // 0x1cf780: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
label_1cf784:
    if (ctx->pc == 0x1CF784u) {
        ctx->pc = 0x1CF788u;
        goto label_1cf788;
    }
    ctx->pc = 0x1CF780u;
    {
        const bool branch_taken_0x1cf780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf780) {
            ctx->pc = 0x1CF7F4u;
            goto label_1cf7f4;
        }
    }
    ctx->pc = 0x1CF788u;
label_1cf788:
    // 0x1cf788: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cf788u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cf78c:
    // 0x1cf78c: 0xc0a0ed8  jal         func_283B60
label_1cf790:
    if (ctx->pc == 0x1CF790u) {
        ctx->pc = 0x1CF790u;
            // 0x1cf790: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x1CF794u;
        goto label_1cf794;
    }
    ctx->pc = 0x1CF78Cu;
    SET_GPR_U32(ctx, 31, 0x1CF794u);
    ctx->pc = 0x1CF790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF78Cu;
            // 0x1cf790: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF794u; }
        if (ctx->pc != 0x1CF794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF794u; }
        if (ctx->pc != 0x1CF794u) { return; }
    }
    ctx->pc = 0x1CF794u;
label_1cf794:
    // 0x1cf794: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1cf794u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cf798:
    // 0x1cf798: 0x12200016  beqz        $s1, . + 4 + (0x16 << 2)
label_1cf79c:
    if (ctx->pc == 0x1CF79Cu) {
        ctx->pc = 0x1CF79Cu;
            // 0x1cf79c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CF7A0u;
        goto label_1cf7a0;
    }
    ctx->pc = 0x1CF798u;
    {
        const bool branch_taken_0x1cf798 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF79Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF798u;
            // 0x1cf79c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf798) {
            ctx->pc = 0x1CF7F4u;
            goto label_1cf7f4;
        }
    }
    ctx->pc = 0x1CF7A0u;
label_1cf7a0:
    // 0x1cf7a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1cf7a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf7a4:
    // 0x1cf7a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1cf7a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf7a8:
    // 0x1cf7a8: 0xc05d420  jal         func_175080
label_1cf7ac:
    if (ctx->pc == 0x1CF7ACu) {
        ctx->pc = 0x1CF7ACu;
            // 0x1cf7ac: 0x27a70740  addiu       $a3, $sp, 0x740 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1856));
        ctx->pc = 0x1CF7B0u;
        goto label_1cf7b0;
    }
    ctx->pc = 0x1CF7A8u;
    SET_GPR_U32(ctx, 31, 0x1CF7B0u);
    ctx->pc = 0x1CF7ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF7A8u;
            // 0x1cf7ac: 0x27a70740  addiu       $a3, $sp, 0x740 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x175080u;
    if (runtime->hasFunction(0x175080u)) {
        auto targetFn = runtime->lookupFunction(0x175080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF7B0u; }
        if (ctx->pc != 0x1CF7B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetEntryObjectPos__11CCharacter2FiiPf_0x175080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF7B0u; }
        if (ctx->pc != 0x1CF7B0u) { return; }
    }
    ctx->pc = 0x1CF7B0u;
label_1cf7b0:
    // 0x1cf7b0: 0xc7a10744  lwc1        $f1, 0x744($sp)
    ctx->pc = 0x1cf7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1860)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_1cf7b4:
    // 0x1cf7b4: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x1cf7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_1cf7b8:
    // 0x1cf7b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cf7b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_1cf7bc:
    // 0x1cf7bc: 0x27a40730  addiu       $a0, $sp, 0x730
    ctx->pc = 0x1cf7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1840));
label_1cf7c0:
    // 0x1cf7c0: 0x27a50740  addiu       $a1, $sp, 0x740
    ctx->pc = 0x1cf7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1856));
label_1cf7c4:
    // 0x1cf7c4: 0x27a60750  addiu       $a2, $sp, 0x750
    ctx->pc = 0x1cf7c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1872));
label_1cf7c8:
    // 0x1cf7c8: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x1cf7c8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_1cf7cc:
    // 0x1cf7cc: 0xc050e30  jal         func_1438C0
label_1cf7d0:
    if (ctx->pc == 0x1CF7D0u) {
        ctx->pc = 0x1CF7D0u;
            // 0x1cf7d0: 0xe7a00744  swc1        $f0, 0x744($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1860), bits); }
        ctx->pc = 0x1CF7D4u;
        goto label_1cf7d4;
    }
    ctx->pc = 0x1CF7CCu;
    SET_GPR_U32(ctx, 31, 0x1CF7D4u);
    ctx->pc = 0x1CF7D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF7CCu;
            // 0x1cf7d0: 0xe7a00744  swc1        $f0, 0x744($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1860), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1438C0u;
    if (runtime->hasFunction(0x1438C0u)) {
        auto targetFn = runtime->lookupFunction(0x1438C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF7D4u; }
        if (ctx->pc != 0x1CF7D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetDropShadowMatrix__FPfPfPf_0x1438c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF7D4u; }
        if (ctx->pc != 0x1CF7D4u) { return; }
    }
    ctx->pc = 0x1CF7D4u;
label_1cf7d4:
    // 0x1cf7d4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1cf7d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cf7d8:
    // 0x1cf7d8: 0x8f3900d8  lw          $t9, 0xD8($t9)
    ctx->pc = 0x1cf7d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 216)));
label_1cf7dc:
    // 0x1cf7dc: 0x320f809  jalr        $t9
label_1cf7e0:
    if (ctx->pc == 0x1CF7E0u) {
        ctx->pc = 0x1CF7E0u;
            // 0x1cf7e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CF7E4u;
        goto label_1cf7e4;
    }
    ctx->pc = 0x1CF7DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CF7E4u);
        ctx->pc = 0x1CF7E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF7DCu;
            // 0x1cf7e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CF7E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CF7E4u; }
            if (ctx->pc != 0x1CF7E4u) { return; }
        }
        }
    }
    ctx->pc = 0x1CF7E4u;
label_1cf7e4:
    // 0x1cf7e4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x1cf7e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cf7e8:
    // 0x1cf7e8: 0x8f3900cc  lw          $t9, 0xCC($t9)
    ctx->pc = 0x1cf7e8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 204)));
label_1cf7ec:
    // 0x1cf7ec: 0x320f809  jalr        $t9
label_1cf7f0:
    if (ctx->pc == 0x1CF7F0u) {
        ctx->pc = 0x1CF7F0u;
            // 0x1cf7f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CF7F4u;
        goto label_1cf7f4;
    }
    ctx->pc = 0x1CF7ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CF7F4u);
        ctx->pc = 0x1CF7F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF7ECu;
            // 0x1cf7f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CF7F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CF7F4u; }
            if (ctx->pc != 0x1CF7F4u) { return; }
        }
        }
    }
    ctx->pc = 0x1CF7F4u;
label_1cf7f4:
    // 0x1cf7f4: 0x0  nop
    ctx->pc = 0x1cf7f4u;
    // NOP
label_1cf7f8:
    // 0x1cf7f8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cf7f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1cf7fc:
    // 0x1cf7fc: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x1cf7fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
label_1cf800:
    // 0x1cf800: 0x1440ffdc  bnez        $v0, . + 4 + (-0x24 << 2)
label_1cf804:
    if (ctx->pc == 0x1CF804u) {
        ctx->pc = 0x1CF808u;
        goto label_1cf808;
    }
    ctx->pc = 0x1CF800u;
    {
        const bool branch_taken_0x1cf800 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf800) {
            ctx->pc = 0x1CF774u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cf774;
        }
    }
    ctx->pc = 0x1CF808u;
label_1cf808:
    // 0x1cf808: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1cf808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1cf80c:
    // 0x1cf80c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1cf80cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1cf810:
    // 0x1cf810: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1cf810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_1cf814:
    // 0x1cf814: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1cf818:
    if (ctx->pc == 0x1CF818u) {
        ctx->pc = 0x1CF81Cu;
        goto label_1cf81c;
    }
    ctx->pc = 0x1CF814u;
    {
        const bool branch_taken_0x1cf814 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf814) {
            ctx->pc = 0x1CF824u;
            goto label_1cf824;
        }
    }
    ctx->pc = 0x1CF81Cu;
label_1cf81c:
    // 0x1cf81c: 0xc07732c  jal         func_1DCCB0
label_1cf820:
    if (ctx->pc == 0x1CF820u) {
        ctx->pc = 0x1CF820u;
            // 0x1cf820: 0x8f848db8  lw          $a0, -0x7248($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
        ctx->pc = 0x1CF824u;
        goto label_1cf824;
    }
    ctx->pc = 0x1CF81Cu;
    SET_GPR_U32(ctx, 31, 0x1CF824u);
    ctx->pc = 0x1CF820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF81Cu;
            // 0x1cf820: 0x8f848db8  lw          $a0, -0x7248($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCCB0u;
    if (runtime->hasFunction(0x1DCCB0u)) {
        auto targetFn = runtime->lookupFunction(0x1DCCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF824u; }
        if (ctx->pc != 0x1CF824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawShadowActMonster__11CMonsterManFv_0x1dccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF824u; }
        if (ctx->pc != 0x1CF824u) { return; }
    }
    ctx->pc = 0x1CF824u;
label_1cf824:
    // 0x1cf824: 0x8f848dd4  lw          $a0, -0x722C($gp)
    ctx->pc = 0x1cf824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938068)));
label_1cf828:
    // 0x1cf828: 0xc0a320c  jal         func_28C830
label_1cf82c:
    if (ctx->pc == 0x1CF82Cu) {
        ctx->pc = 0x1CF82Cu;
            // 0x1cf82c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1CF830u;
        goto label_1cf830;
    }
    ctx->pc = 0x1CF828u;
    SET_GPR_U32(ctx, 31, 0x1CF830u);
    ctx->pc = 0x1CF82Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF828u;
            // 0x1cf82c: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C830u;
    if (runtime->hasFunction(0x28C830u)) {
        auto targetFn = runtime->lookupFunction(0x28C830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF830u; }
        if (ctx->pc != 0x1CF830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawShadow__19CTreasureBoxManagerFPf_0x28c830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF830u; }
        if (ctx->pc != 0x1CF830u) { return; }
    }
    ctx->pc = 0x1CF830u;
label_1cf830:
    // 0x1cf830: 0x8f848e78  lw          $a0, -0x7188($gp)
    ctx->pc = 0x1cf830u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938232)));
label_1cf834:
    // 0x1cf834: 0xc050cb4  jal         func_1432D0
label_1cf838:
    if (ctx->pc == 0x1CF838u) {
        ctx->pc = 0x1CF838u;
            // 0x1cf838: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CF83Cu;
        goto label_1cf83c;
    }
    ctx->pc = 0x1CF834u;
    SET_GPR_U32(ctx, 31, 0x1CF83Cu);
    ctx->pc = 0x1CF838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF834u;
            // 0x1cf838: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1432D0u;
    if (runtime->hasFunction(0x1432D0u)) {
        auto targetFn = runtime->lookupFunction(0x1432D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF83Cu; }
        if (ctx->pc != 0x1CF83Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgEndDrawShadow__FP10mgCTextureP10mgCTexture_0x1432d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF83Cu; }
        if (ctx->pc != 0x1CF83Cu) { return; }
    }
    ctx->pc = 0x1CF83Cu;
label_1cf83c:
    // 0x1cf83c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cf83cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf840:
    // 0x1cf840: 0xc050dc8  jal         func_143720
label_1cf844:
    if (ctx->pc == 0x1CF844u) {
        ctx->pc = 0x1CF844u;
            // 0x1cf844: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CF848u;
        goto label_1cf848;
    }
    ctx->pc = 0x1CF840u;
    SET_GPR_U32(ctx, 31, 0x1CF848u);
    ctx->pc = 0x1CF844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF840u;
            // 0x1cf844: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143720u;
    if (runtime->hasFunction(0x143720u)) {
        auto targetFn = runtime->lookupFunction(0x143720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF848u; }
        if (ctx->pc != 0x1CF848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgActiveLighting__Fii_0x143720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF848u; }
        if (ctx->pc != 0x1CF848u) { return; }
    }
    ctx->pc = 0x1CF848u;
label_1cf848:
    // 0x1cf848: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cf848u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cf84c:
    // 0x1cf84c: 0x27a40760  addiu       $a0, $sp, 0x760
    ctx->pc = 0x1cf84cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1888));
label_1cf850:
    // 0x1cf850: 0xc050dd8  jal         func_143760
label_1cf854:
    if (ctx->pc == 0x1CF854u) {
        ctx->pc = 0x1CF854u;
            // 0x1cf854: 0x27a507a0  addiu       $a1, $sp, 0x7A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1952));
        ctx->pc = 0x1CF858u;
        goto label_1cf858;
    }
    ctx->pc = 0x1CF850u;
    SET_GPR_U32(ctx, 31, 0x1CF858u);
    ctx->pc = 0x1CF854u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF850u;
            // 0x1cf854: 0x27a507a0  addiu       $a1, $sp, 0x7A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143760u;
    if (runtime->hasFunction(0x143760u)) {
        auto targetFn = runtime->lookupFunction(0x143760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF858u; }
        if (ctx->pc != 0x1CF858u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetLight__FPA4_fPA4_f_0x143760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF858u; }
        if (ctx->pc != 0x1CF858u) { return; }
    }
    ctx->pc = 0x1CF858u;
label_1cf858:
    // 0x1cf858: 0xc050df4  jal         func_1437D0
label_1cf85c:
    if (ctx->pc == 0x1CF85Cu) {
        ctx->pc = 0x1CF85Cu;
            // 0x1cf85c: 0x27a407e0  addiu       $a0, $sp, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2016));
        ctx->pc = 0x1CF860u;
        goto label_1cf860;
    }
    ctx->pc = 0x1CF858u;
    SET_GPR_U32(ctx, 31, 0x1CF860u);
    ctx->pc = 0x1CF85Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF858u;
            // 0x1cf85c: 0x27a407e0  addiu       $a0, $sp, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437D0u;
    if (runtime->hasFunction(0x1437D0u)) {
        auto targetFn = runtime->lookupFunction(0x1437D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF860u; }
        if (ctx->pc != 0x1CF860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetAmbient__FPf_0x1437d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF860u; }
        if (ctx->pc != 0x1CF860u) { return; }
    }
    ctx->pc = 0x1CF860u;
label_1cf860:
    // 0x1cf860: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cf860u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cf864:
    // 0x1cf864: 0x27a507a0  addiu       $a1, $sp, 0x7A0
    ctx->pc = 0x1cf864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1952));
label_1cf868:
    // 0x1cf868: 0xc0b235c  jal         func_2C8D70
label_1cf86c:
    if (ctx->pc == 0x1CF86Cu) {
        ctx->pc = 0x1CF86Cu;
            // 0x1cf86c: 0x27a607e0  addiu       $a2, $sp, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2016));
        ctx->pc = 0x1CF870u;
        goto label_1cf870;
    }
    ctx->pc = 0x1CF868u;
    SET_GPR_U32(ctx, 31, 0x1CF870u);
    ctx->pc = 0x1CF86Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF868u;
            // 0x1cf86c: 0x27a607e0  addiu       $a2, $sp, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8D70u;
    if (runtime->hasFunction(0x2C8D70u)) {
        auto targetFn = runtime->lookupFunction(0x2C8D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF870u; }
        if (ctx->pc != 0x1CF870u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaLighting__6CSceneFPA4_fPf_0x2c8d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF870u; }
        if (ctx->pc != 0x1CF870u) { return; }
    }
    ctx->pc = 0x1CF870u;
label_1cf870:
    // 0x1cf870: 0x27a40760  addiu       $a0, $sp, 0x760
    ctx->pc = 0x1cf870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1888));
label_1cf874:
    // 0x1cf874: 0xc050dd0  jal         func_143740
label_1cf878:
    if (ctx->pc == 0x1CF878u) {
        ctx->pc = 0x1CF878u;
            // 0x1cf878: 0x27a507a0  addiu       $a1, $sp, 0x7A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1952));
        ctx->pc = 0x1CF87Cu;
        goto label_1cf87c;
    }
    ctx->pc = 0x1CF874u;
    SET_GPR_U32(ctx, 31, 0x1CF87Cu);
    ctx->pc = 0x1CF878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF874u;
            // 0x1cf878: 0x27a507a0  addiu       $a1, $sp, 0x7A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143740u;
    if (runtime->hasFunction(0x143740u)) {
        auto targetFn = runtime->lookupFunction(0x143740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF87Cu; }
        if (ctx->pc != 0x1CF87Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetLight__FPA4_fPA4_f_0x143740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF87Cu; }
        if (ctx->pc != 0x1CF87Cu) { return; }
    }
    ctx->pc = 0x1CF87Cu;
label_1cf87c:
    // 0x1cf87c: 0xc050dec  jal         func_1437B0
label_1cf880:
    if (ctx->pc == 0x1CF880u) {
        ctx->pc = 0x1CF880u;
            // 0x1cf880: 0x27a407e0  addiu       $a0, $sp, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2016));
        ctx->pc = 0x1CF884u;
        goto label_1cf884;
    }
    ctx->pc = 0x1CF87Cu;
    SET_GPR_U32(ctx, 31, 0x1CF884u);
    ctx->pc = 0x1CF880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF87Cu;
            // 0x1cf880: 0x27a407e0  addiu       $a0, $sp, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437B0u;
    if (runtime->hasFunction(0x1437B0u)) {
        auto targetFn = runtime->lookupFunction(0x1437B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF884u; }
        if (ctx->pc != 0x1CF884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetAmbient__FPf_0x1437b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF884u; }
        if (ctx->pc != 0x1CF884u) { return; }
    }
    ctx->pc = 0x1CF884u;
label_1cf884:
    // 0x1cf884: 0x8f828dd4  lw          $v0, -0x722C($gp)
    ctx->pc = 0x1cf884u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938068)));
label_1cf888:
    // 0x1cf888: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1cf888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1cf88c:
    // 0x1cf88c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x1cf88cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cf890:
    // 0x1cf890: 0xc04ba14  jal         func_12E850
label_1cf894:
    if (ctx->pc == 0x1CF894u) {
        ctx->pc = 0x1CF894u;
            // 0x1cf894: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CF898u;
        goto label_1cf898;
    }
    ctx->pc = 0x1CF890u;
    SET_GPR_U32(ctx, 31, 0x1CF898u);
    ctx->pc = 0x1CF894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF890u;
            // 0x1cf894: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF898u; }
        if (ctx->pc != 0x1CF898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF898u; }
        if (ctx->pc != 0x1CF898u) { return; }
    }
    ctx->pc = 0x1CF898u;
label_1cf898:
    // 0x1cf898: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x1cf898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_1cf89c:
    // 0x1cf89c: 0xc04c574  jal         func_1315D0
label_1cf8a0:
    if (ctx->pc == 0x1CF8A0u) {
        ctx->pc = 0x1CF8A0u;
            // 0x1cf8a0: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1CF8A4u;
        goto label_1cf8a4;
    }
    ctx->pc = 0x1CF89Cu;
    SET_GPR_U32(ctx, 31, 0x1CF8A4u);
    ctx->pc = 0x1CF8A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF89Cu;
            // 0x1cf8a0: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF8A4u; }
        if (ctx->pc != 0x1CF8A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF8A4u; }
        if (ctx->pc != 0x1CF8A4u) { return; }
    }
    ctx->pc = 0x1CF8A4u;
label_1cf8a4:
    // 0x1cf8a4: 0x8f848dd4  lw          $a0, -0x722C($gp)
    ctx->pc = 0x1cf8a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938068)));
label_1cf8a8:
    // 0x1cf8a8: 0xc0a31ec  jal         func_28C7B0
label_1cf8ac:
    if (ctx->pc == 0x1CF8ACu) {
        ctx->pc = 0x1CF8ACu;
            // 0x1cf8ac: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x1CF8B0u;
        goto label_1cf8b0;
    }
    ctx->pc = 0x1CF8A8u;
    SET_GPR_U32(ctx, 31, 0x1CF8B0u);
    ctx->pc = 0x1CF8ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF8A8u;
            // 0x1cf8ac: 0x27a500b0  addiu       $a1, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C7B0u;
    if (runtime->hasFunction(0x28C7B0u)) {
        auto targetFn = runtime->lookupFunction(0x28C7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF8B0u; }
        if (ctx->pc != 0x1CF8B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__19CTreasureBoxManagerFPf_0x28c7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF8B0u; }
        if (ctx->pc != 0x1CF8B0u) { return; }
    }
    ctx->pc = 0x1CF8B0u;
label_1cf8b0:
    // 0x1cf8b0: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1cf8b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1cf8b4:
    // 0x1cf8b4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1cf8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1cf8b8:
    // 0x1cf8b8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1cf8b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_1cf8bc:
    // 0x1cf8bc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1cf8c0:
    if (ctx->pc == 0x1CF8C0u) {
        ctx->pc = 0x1CF8C4u;
        goto label_1cf8c4;
    }
    ctx->pc = 0x1CF8BCu;
    {
        const bool branch_taken_0x1cf8bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cf8bc) {
            ctx->pc = 0x1CF8CCu;
            goto label_1cf8cc;
        }
    }
    ctx->pc = 0x1CF8C4u;
label_1cf8c4:
    // 0x1cf8c4: 0xc077290  jal         func_1DCA40
label_1cf8c8:
    if (ctx->pc == 0x1CF8C8u) {
        ctx->pc = 0x1CF8C8u;
            // 0x1cf8c8: 0x8f848db8  lw          $a0, -0x7248($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
        ctx->pc = 0x1CF8CCu;
        goto label_1cf8cc;
    }
    ctx->pc = 0x1CF8C4u;
    SET_GPR_U32(ctx, 31, 0x1CF8CCu);
    ctx->pc = 0x1CF8C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF8C4u;
            // 0x1cf8c8: 0x8f848db8  lw          $a0, -0x7248($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCA40u;
    if (runtime->hasFunction(0x1DCA40u)) {
        auto targetFn = runtime->lookupFunction(0x1DCA40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF8CCu; }
        if (ctx->pc != 0x1CF8CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawActMonster__11CMonsterManFv_0x1dca40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF8CCu; }
        if (ctx->pc != 0x1CF8CCu) { return; }
    }
    ctx->pc = 0x1CF8CCu;
label_1cf8cc:
    // 0x1cf8cc: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cf8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cf8d0:
    // 0x1cf8d0: 0xc0b22dc  jal         func_2C8B70
label_1cf8d4:
    if (ctx->pc == 0x1CF8D4u) {
        ctx->pc = 0x1CF8D4u;
            // 0x1cf8d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CF8D8u;
        goto label_1cf8d8;
    }
    ctx->pc = 0x1CF8D0u;
    SET_GPR_U32(ctx, 31, 0x1CF8D8u);
    ctx->pc = 0x1CF8D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF8D0u;
            // 0x1cf8d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8B70u;
    if (runtime->hasFunction(0x2C8B70u)) {
        auto targetFn = runtime->lookupFunction(0x2C8B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF8D8u; }
        if (ctx->pc != 0x1CF8D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckDrawChara__6CSceneFi_0x2c8b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF8D8u; }
        if (ctx->pc != 0x1CF8D8u) { return; }
    }
    ctx->pc = 0x1CF8D8u;
label_1cf8d8:
    // 0x1cf8d8: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_1cf8dc:
    if (ctx->pc == 0x1CF8DCu) {
        ctx->pc = 0x1CF8DCu;
            // 0x1cf8dc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CF8E0u;
        goto label_1cf8e0;
    }
    ctx->pc = 0x1CF8D8u;
    {
        const bool branch_taken_0x1cf8d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF8DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF8D8u;
            // 0x1cf8dc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf8d8) {
            ctx->pc = 0x1CF970u;
            goto label_1cf970;
        }
    }
    ctx->pc = 0x1CF8E0u;
label_1cf8e0:
    // 0x1cf8e0: 0x8f828db4  lw          $v0, -0x724C($gp)
    ctx->pc = 0x1cf8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938036)));
label_1cf8e4:
    // 0x1cf8e4: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_1cf8e8:
    if (ctx->pc == 0x1CF8E8u) {
        ctx->pc = 0x1CF8E8u;
            // 0x1cf8e8: 0x27a40860  addiu       $a0, $sp, 0x860 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
        ctx->pc = 0x1CF8ECu;
        goto label_1cf8ec;
    }
    ctx->pc = 0x1CF8E4u;
    {
        const bool branch_taken_0x1cf8e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CF8E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF8E4u;
            // 0x1cf8e8: 0x27a40860  addiu       $a0, $sp, 0x860 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf8e4) {
            ctx->pc = 0x1CF948u;
            goto label_1cf948;
        }
    }
    ctx->pc = 0x1CF8ECu;
label_1cf8ec:
    // 0x1cf8ec: 0xc04d924  jal         func_136490
label_1cf8f0:
    if (ctx->pc == 0x1CF8F0u) {
        ctx->pc = 0x1CF8F0u;
            // 0x1cf8f0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CF8F4u;
        goto label_1cf8f4;
    }
    ctx->pc = 0x1CF8ECu;
    SET_GPR_U32(ctx, 31, 0x1CF8F4u);
    ctx->pc = 0x1CF8F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF8ECu;
            // 0x1cf8f0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136490u;
    if (runtime->hasFunction(0x136490u)) {
        auto targetFn = runtime->lookupFunction(0x136490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF8F4u; }
        if (ctx->pc != 0x1CF8F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__8mgCFrameFv_0x136490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF8F4u; }
        if (ctx->pc != 0x1CF8F4u) { return; }
    }
    ctx->pc = 0x1CF8F4u;
label_1cf8f4:
    // 0x1cf8f4: 0xc04d924  jal         func_136490
label_1cf8f8:
    if (ctx->pc == 0x1CF8F8u) {
        ctx->pc = 0x1CF8F8u;
            // 0x1cf8f8: 0x27a40a20  addiu       $a0, $sp, 0xA20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2592));
        ctx->pc = 0x1CF8FCu;
        goto label_1cf8fc;
    }
    ctx->pc = 0x1CF8F4u;
    SET_GPR_U32(ctx, 31, 0x1CF8FCu);
    ctx->pc = 0x1CF8F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF8F4u;
            // 0x1cf8f8: 0x27a40a20  addiu       $a0, $sp, 0xA20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2592));
        ctx->in_delay_slot = false;
    ctx->pc = 0x136490u;
    if (runtime->hasFunction(0x136490u)) {
        auto targetFn = runtime->lookupFunction(0x136490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF8FCu; }
        if (ctx->pc != 0x1CF8FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__8mgCFrameFv_0x136490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF8FCu; }
        if (ctx->pc != 0x1CF8FCu) { return; }
    }
    ctx->pc = 0x1CF8FCu;
label_1cf8fc:
    // 0x1cf8fc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1cf8fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf900:
    // 0x1cf900: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1cf900u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_1cf904:
    // 0x1cf904: 0x8f858dd8  lw          $a1, -0x7228($gp)
    ctx->pc = 0x1cf904u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1cf908:
    // 0x1cf908: 0x511823  subu        $v1, $v0, $s1
    ctx->pc = 0x1cf908u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1cf90c:
    // 0x1cf90c: 0x8f848db4  lw          $a0, -0x724C($gp)
    ctx->pc = 0x1cf90cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938036)));
label_1cf910:
    // 0x1cf910: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cf910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cf914:
    // 0x1cf914: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x1cf914u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_1cf918:
    // 0x1cf918: 0x513823  subu        $a3, $v0, $s1
    ctx->pc = 0x1cf918u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1cf91c:
    // 0x1cf91c: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1cf91cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cf920:
    // 0x1cf920: 0x7d1021  addu        $v0, $v1, $sp
    ctx->pc = 0x1cf920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_1cf924:
    // 0x1cf924: 0xc0576f8  jal         func_15DBE0
label_1cf928:
    if (ctx->pc == 0x1CF928u) {
        ctx->pc = 0x1CF928u;
            // 0x1cf928: 0x244607f0  addiu       $a2, $v0, 0x7F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2032));
        ctx->pc = 0x1CF92Cu;
        goto label_1cf92c;
    }
    ctx->pc = 0x1CF924u;
    SET_GPR_U32(ctx, 31, 0x1CF92Cu);
    ctx->pc = 0x1CF928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF924u;
            // 0x1cf928: 0x244607f0  addiu       $a2, $v0, 0x7F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 2032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15DBE0u;
    if (runtime->hasFunction(0x15DBE0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF92Cu; }
        if (ctx->pc != 0x1CF92Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaLight__4CMapFP9mgCObjectP10CFuncPointii_0x15dbe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF92Cu; }
        if (ctx->pc != 0x1CF92Cu) { return; }
    }
    ctx->pc = 0x1CF92Cu;
label_1cf92c:
    // 0x1cf92c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x1cf92cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_1cf930:
    // 0x1cf930: 0x2a210003  slti        $at, $s1, 0x3
    ctx->pc = 0x1cf930u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_1cf934:
    // 0x1cf934: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_1cf938:
    if (ctx->pc == 0x1CF938u) {
        ctx->pc = 0x1CF93Cu;
        goto label_1cf93c;
    }
    ctx->pc = 0x1CF934u;
    {
        const bool branch_taken_0x1cf934 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf934) {
            ctx->pc = 0x1CF948u;
            goto label_1cf948;
        }
    }
    ctx->pc = 0x1CF93Cu;
label_1cf93c:
    // 0x1cf93c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1cf93cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1cf940:
    // 0x1cf940: 0x1a40fff0  blez        $s2, . + 4 + (-0x10 << 2)
label_1cf944:
    if (ctx->pc == 0x1CF944u) {
        ctx->pc = 0x1CF944u;
            // 0x1cf944: 0x1110c0  sll         $v0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->pc = 0x1CF948u;
        goto label_1cf948;
    }
    ctx->pc = 0x1CF940u;
    {
        const bool branch_taken_0x1cf940 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1CF944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF940u;
            // 0x1cf944: 0x1110c0  sll         $v0, $s1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf940) {
            ctx->pc = 0x1CF904u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cf904;
        }
    }
    ctx->pc = 0x1CF948u;
label_1cf948:
    // 0x1cf948: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1cf948u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1cf94c:
    // 0x1cf94c: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x1cf94cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1cf950:
    // 0x1cf950: 0xc04ba14  jal         func_12E850
label_1cf954:
    if (ctx->pc == 0x1CF954u) {
        ctx->pc = 0x1CF954u;
            // 0x1cf954: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CF958u;
        goto label_1cf958;
    }
    ctx->pc = 0x1CF950u;
    SET_GPR_U32(ctx, 31, 0x1CF958u);
    ctx->pc = 0x1CF954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF950u;
            // 0x1cf954: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF958u; }
        if (ctx->pc != 0x1CF958u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF958u; }
        if (ctx->pc != 0x1CF958u) { return; }
    }
    ctx->pc = 0x1CF958u;
label_1cf958:
    // 0x1cf958: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1cf958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1cf95c:
    // 0x1cf95c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1cf95cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cf960:
    // 0x1cf960: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1cf960u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1cf964:
    // 0x1cf964: 0x320f809  jalr        $t9
label_1cf968:
    if (ctx->pc == 0x1CF968u) {
        ctx->pc = 0x1CF96Cu;
        goto label_1cf96c;
    }
    ctx->pc = 0x1CF964u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CF96Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CF96Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CF96Cu; }
            if (ctx->pc != 0x1CF96Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1CF96Cu;
label_1cf96c:
    // 0x1cf96c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1cf96cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cf970:
    // 0x1cf970: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cf970u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cf974:
    // 0x1cf974: 0xc0b22dc  jal         func_2C8B70
label_1cf978:
    if (ctx->pc == 0x1CF978u) {
        ctx->pc = 0x1CF978u;
            // 0x1cf978: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x1CF97Cu;
        goto label_1cf97c;
    }
    ctx->pc = 0x1CF974u;
    SET_GPR_U32(ctx, 31, 0x1CF97Cu);
    ctx->pc = 0x1CF978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF974u;
            // 0x1cf978: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8B70u;
    if (runtime->hasFunction(0x2C8B70u)) {
        auto targetFn = runtime->lookupFunction(0x2C8B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF97Cu; }
        if (ctx->pc != 0x1CF97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckDrawChara__6CSceneFi_0x2c8b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF97Cu; }
        if (ctx->pc != 0x1CF97Cu) { return; }
    }
    ctx->pc = 0x1CF97Cu;
label_1cf97c:
    // 0x1cf97c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1cf980:
    if (ctx->pc == 0x1CF980u) {
        ctx->pc = 0x1CF984u;
        goto label_1cf984;
    }
    ctx->pc = 0x1CF97Cu;
    {
        const bool branch_taken_0x1cf97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf97c) {
            ctx->pc = 0x1CF9E4u;
            goto label_1cf9e4;
        }
    }
    ctx->pc = 0x1CF984u;
label_1cf984:
    // 0x1cf984: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cf984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cf988:
    // 0x1cf988: 0x26260008  addiu       $a2, $s1, 0x8
    ctx->pc = 0x1cf988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_1cf98c:
    // 0x1cf98c: 0xc0a1208  jal         func_284820
label_1cf990:
    if (ctx->pc == 0x1CF990u) {
        ctx->pc = 0x1CF990u;
            // 0x1cf990: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1CF994u;
        goto label_1cf994;
    }
    ctx->pc = 0x1CF98Cu;
    SET_GPR_U32(ctx, 31, 0x1CF994u);
    ctx->pc = 0x1CF990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF98Cu;
            // 0x1cf990: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284820u;
    if (runtime->hasFunction(0x284820u)) {
        auto targetFn = runtime->lookupFunction(0x284820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF994u; }
        if (ctx->pc != 0x1CF994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetType__6CSceneFii_0x284820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF994u; }
        if (ctx->pc != 0x1CF994u) { return; }
    }
    ctx->pc = 0x1CF994u;
label_1cf994:
    // 0x1cf994: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1cf994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cf998:
    // 0x1cf998: 0x10430012  beq         $v0, $v1, . + 4 + (0x12 << 2)
label_1cf99c:
    if (ctx->pc == 0x1CF99Cu) {
        ctx->pc = 0x1CF9A0u;
        goto label_1cf9a0;
    }
    ctx->pc = 0x1CF998u;
    {
        const bool branch_taken_0x1cf998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cf998) {
            ctx->pc = 0x1CF9E4u;
            goto label_1cf9e4;
        }
    }
    ctx->pc = 0x1CF9A0u;
label_1cf9a0:
    // 0x1cf9a0: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cf9a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cf9a4:
    // 0x1cf9a4: 0xc0a0ed8  jal         func_283B60
label_1cf9a8:
    if (ctx->pc == 0x1CF9A8u) {
        ctx->pc = 0x1CF9A8u;
            // 0x1cf9a8: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x1CF9ACu;
        goto label_1cf9ac;
    }
    ctx->pc = 0x1CF9A4u;
    SET_GPR_U32(ctx, 31, 0x1CF9ACu);
    ctx->pc = 0x1CF9A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF9A4u;
            // 0x1cf9a8: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF9ACu; }
        if (ctx->pc != 0x1CF9ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF9ACu; }
        if (ctx->pc != 0x1CF9ACu) { return; }
    }
    ctx->pc = 0x1CF9ACu;
label_1cf9ac:
    // 0x1cf9ac: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1cf9acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cf9b0:
    // 0x1cf9b0: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
label_1cf9b4:
    if (ctx->pc == 0x1CF9B4u) {
        ctx->pc = 0x1CF9B8u;
        goto label_1cf9b8;
    }
    ctx->pc = 0x1CF9B0u;
    {
        const bool branch_taken_0x1cf9b0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cf9b0) {
            ctx->pc = 0x1CF9E4u;
            goto label_1cf9e4;
        }
    }
    ctx->pc = 0x1CF9B8u;
label_1cf9b8:
    // 0x1cf9b8: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cf9b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cf9bc:
    // 0x1cf9bc: 0xc0a1240  jal         func_284900
label_1cf9c0:
    if (ctx->pc == 0x1CF9C0u) {
        ctx->pc = 0x1CF9C0u;
            // 0x1cf9c0: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x1CF9C4u;
        goto label_1cf9c4;
    }
    ctx->pc = 0x1CF9BCu;
    SET_GPR_U32(ctx, 31, 0x1CF9C4u);
    ctx->pc = 0x1CF9C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF9BCu;
            // 0x1cf9c0: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284900u;
    if (runtime->hasFunction(0x284900u)) {
        auto targetFn = runtime->lookupFunction(0x284900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF9C4u; }
        if (ctx->pc != 0x1CF9C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaTexb__6CSceneFi_0x284900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF9C4u; }
        if (ctx->pc != 0x1CF9C4u) { return; }
    }
    ctx->pc = 0x1CF9C4u;
label_1cf9c4:
    // 0x1cf9c4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cf9c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cf9c8:
    // 0x1cf9c8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1cf9c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1cf9cc:
    // 0x1cf9cc: 0xc04ba14  jal         func_12E850
label_1cf9d0:
    if (ctx->pc == 0x1CF9D0u) {
        ctx->pc = 0x1CF9D0u;
            // 0x1cf9d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CF9D4u;
        goto label_1cf9d4;
    }
    ctx->pc = 0x1CF9CCu;
    SET_GPR_U32(ctx, 31, 0x1CF9D4u);
    ctx->pc = 0x1CF9D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF9CCu;
            // 0x1cf9d0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF9D4u; }
        if (ctx->pc != 0x1CF9D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CF9D4u; }
        if (ctx->pc != 0x1CF9D4u) { return; }
    }
    ctx->pc = 0x1CF9D4u;
label_1cf9d4:
    // 0x1cf9d4: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1cf9d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1cf9d8:
    // 0x1cf9d8: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1cf9d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1cf9dc:
    // 0x1cf9dc: 0x320f809  jalr        $t9
label_1cf9e0:
    if (ctx->pc == 0x1CF9E0u) {
        ctx->pc = 0x1CF9E0u;
            // 0x1cf9e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CF9E4u;
        goto label_1cf9e4;
    }
    ctx->pc = 0x1CF9DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CF9E4u);
        ctx->pc = 0x1CF9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF9DCu;
            // 0x1cf9e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CF9E4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CF9E4u; }
            if (ctx->pc != 0x1CF9E4u) { return; }
        }
        }
    }
    ctx->pc = 0x1CF9E4u;
label_1cf9e4:
    // 0x1cf9e4: 0x0  nop
    ctx->pc = 0x1cf9e4u;
    // NOP
label_1cf9e8:
    // 0x1cf9e8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1cf9e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1cf9ec:
    // 0x1cf9ec: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x1cf9ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
label_1cf9f0:
    // 0x1cf9f0: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
label_1cf9f4:
    if (ctx->pc == 0x1CF9F4u) {
        ctx->pc = 0x1CF9F4u;
            // 0x1cf9f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CF9F8u;
        goto label_1cf9f8;
    }
    ctx->pc = 0x1CF9F0u;
    {
        const bool branch_taken_0x1cf9f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CF9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF9F0u;
            // 0x1cf9f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cf9f0) {
            ctx->pc = 0x1CF970u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cf970;
        }
    }
    ctx->pc = 0x1CF9F8u;
label_1cf9f8:
    // 0x1cf9f8: 0xc050dc8  jal         func_143720
label_1cf9fc:
    if (ctx->pc == 0x1CF9FCu) {
        ctx->pc = 0x1CF9FCu;
            // 0x1cf9fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CFA00u;
        goto label_1cfa00;
    }
    ctx->pc = 0x1CF9F8u;
    SET_GPR_U32(ctx, 31, 0x1CFA00u);
    ctx->pc = 0x1CF9FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CF9F8u;
            // 0x1cf9fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143720u;
    if (runtime->hasFunction(0x143720u)) {
        auto targetFn = runtime->lookupFunction(0x143720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFA00u; }
        if (ctx->pc != 0x1CFA00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgActiveLighting__Fii_0x143720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFA00u; }
        if (ctx->pc != 0x1CFA00u) { return; }
    }
    ctx->pc = 0x1CFA00u;
label_1cfa00:
    // 0x1cfa00: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1cfa00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1cfa04:
    // 0x1cfa04: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1cfa04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1cfa08:
    // 0x1cfa08: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1cfa08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_1cfa0c:
    // 0x1cfa0c: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_1cfa10:
    if (ctx->pc == 0x1CFA10u) {
        ctx->pc = 0x1CFA10u;
            // 0x1cfa10: 0x3c040038  lui         $a0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
        ctx->pc = 0x1CFA14u;
        goto label_1cfa14;
    }
    ctx->pc = 0x1CFA0Cu;
    {
        const bool branch_taken_0x1cfa0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFA0Cu;
            // 0x1cfa10: 0x3c040038  lui         $a0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfa0c) {
            ctx->pc = 0x1CFA74u;
            goto label_1cfa74;
        }
    }
    ctx->pc = 0x1CFA14u;
label_1cfa14:
    // 0x1cfa14: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x1cfa14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1cfa18:
    // 0x1cfa18: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x1cfa18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
label_1cfa1c:
    // 0x1cfa1c: 0xc04ba14  jal         func_12E850
label_1cfa20:
    if (ctx->pc == 0x1CFA20u) {
        ctx->pc = 0x1CFA20u;
            // 0x1cfa20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CFA24u;
        goto label_1cfa24;
    }
    ctx->pc = 0x1CFA1Cu;
    SET_GPR_U32(ctx, 31, 0x1CFA24u);
    ctx->pc = 0x1CFA20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFA1Cu;
            // 0x1cfa20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFA24u; }
        if (ctx->pc != 0x1CFA24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFA24u; }
        if (ctx->pc != 0x1CFA24u) { return; }
    }
    ctx->pc = 0x1CFA24u;
label_1cfa24:
    // 0x1cfa24: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1cfa24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1cfa28:
    // 0x1cfa28: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1cfa28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1cfa2c:
    // 0x1cfa2c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1cfa30:
    if (ctx->pc == 0x1CFA30u) {
        ctx->pc = 0x1CFA30u;
            // 0x1cfa30: 0x8f868e78  lw          $a2, -0x7188($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938232)));
        ctx->pc = 0x1CFA34u;
        goto label_1cfa34;
    }
    ctx->pc = 0x1CFA2Cu;
    {
        const bool branch_taken_0x1cfa2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFA30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFA2Cu;
            // 0x1cfa30: 0x8f868e78  lw          $a2, -0x7188($gp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938232)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfa2c) {
            ctx->pc = 0x1CFA58u;
            goto label_1cfa58;
        }
    }
    ctx->pc = 0x1CFA34u;
label_1cfa34:
    // 0x1cfa34: 0xc7808128  lwc1        $f0, -0x7ED8($gp)
    ctx->pc = 0x1cfa34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1cfa38:
    // 0x1cfa38: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cfa38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cfa3c:
    // 0x1cfa3c: 0x27a51f68  addiu       $a1, $sp, 0x1F68
    ctx->pc = 0x1cfa3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 8040));
label_1cfa40:
    // 0x1cfa40: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cfa40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cfa44:
    // 0x1cfa44: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cfa44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cfa48:
    // 0x1cfa48: 0xc05f8c8  jal         func_17E320
label_1cfa4c:
    if (ctx->pc == 0x1CFA4Cu) {
        ctx->pc = 0x1CFA4Cu;
            // 0x1cfa4c: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->pc = 0x1CFA50u;
        goto label_1cfa50;
    }
    ctx->pc = 0x1CFA48u;
    SET_GPR_U32(ctx, 31, 0x1CFA50u);
    ctx->pc = 0x1CFA4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFA48u;
            // 0x1cfa4c: 0xe4a00000  swc1        $f0, 0x0($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E320u;
    if (runtime->hasFunction(0x17E320u)) {
        auto targetFn = runtime->lookupFunction(0x17E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFA50u; }
        if (ctx->pc != 0x1CFA50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthOfField__FiPfP10mgCTexturef_0x17e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFA50u; }
        if (ctx->pc != 0x1CFA50u) { return; }
    }
    ctx->pc = 0x1CFA50u;
label_1cfa50:
    // 0x1cfa50: 0x10000009  b           . + 4 + (0x9 << 2)
label_1cfa54:
    if (ctx->pc == 0x1CFA54u) {
        ctx->pc = 0x1CFA54u;
            // 0x1cfa54: 0x8f828db0  lw          $v0, -0x7250($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
        ctx->pc = 0x1CFA58u;
        goto label_1cfa58;
    }
    ctx->pc = 0x1CFA50u;
    {
        const bool branch_taken_0x1cfa50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFA50u;
            // 0x1cfa54: 0x8f828db0  lw          $v0, -0x7250($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfa50) {
            ctx->pc = 0x1CFA78u;
            goto label_1cfa78;
        }
    }
    ctx->pc = 0x1CFA58u;
label_1cfa58:
    // 0x1cfa58: 0xdf838130  ld          $v1, -0x7ED0($gp)
    ctx->pc = 0x1cfa58u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294934832)));
label_1cfa5c:
    // 0x1cfa5c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1cfa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_1cfa60:
    // 0x1cfa60: 0x27a51f40  addiu       $a1, $sp, 0x1F40
    ctx->pc = 0x1cfa60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 8000));
label_1cfa64:
    // 0x1cfa64: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x1cfa64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cfa68:
    // 0x1cfa68: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x1cfa68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_1cfa6c:
    // 0x1cfa6c: 0xc05f8c8  jal         func_17E320
label_1cfa70:
    if (ctx->pc == 0x1CFA70u) {
        ctx->pc = 0x1CFA70u;
            // 0x1cfa70: 0xfca30000  sd          $v1, 0x0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
        ctx->pc = 0x1CFA74u;
        goto label_1cfa74;
    }
    ctx->pc = 0x1CFA6Cu;
    SET_GPR_U32(ctx, 31, 0x1CFA74u);
    ctx->pc = 0x1CFA70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFA6Cu;
            // 0x1cfa70: 0xfca30000  sd          $v1, 0x0($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 0), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17E320u;
    if (runtime->hasFunction(0x17E320u)) {
        auto targetFn = runtime->lookupFunction(0x17E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFA74u; }
        if (ctx->pc != 0x1CFA74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthOfField__FiPfP10mgCTexturef_0x17e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFA74u; }
        if (ctx->pc != 0x1CFA74u) { return; }
    }
    ctx->pc = 0x1CFA74u;
label_1cfa74:
    // 0x1cfa74: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1cfa74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1cfa78:
    // 0x1cfa78: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1cfa78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1cfa7c:
    // 0x1cfa7c: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x1cfa7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_1cfa80:
    // 0x1cfa80: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_1cfa84:
    if (ctx->pc == 0x1CFA84u) {
        ctx->pc = 0x1CFA84u;
            // 0x1cfa84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CFA88u;
        goto label_1cfa88;
    }
    ctx->pc = 0x1CFA80u;
    {
        const bool branch_taken_0x1cfa80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFA84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFA80u;
            // 0x1cfa84: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfa80) {
            ctx->pc = 0x1CFAB8u;
            goto label_1cfab8;
        }
    }
    ctx->pc = 0x1CFA88u;
label_1cfa88:
    // 0x1cfa88: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1cfa88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1cfa8c:
    // 0x1cfa8c: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x1cfa8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1cfa90:
    // 0x1cfa90: 0xc04ba14  jal         func_12E850
label_1cfa94:
    if (ctx->pc == 0x1CFA94u) {
        ctx->pc = 0x1CFA94u;
            // 0x1cfa94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CFA98u;
        goto label_1cfa98;
    }
    ctx->pc = 0x1CFA90u;
    SET_GPR_U32(ctx, 31, 0x1CFA98u);
    ctx->pc = 0x1CFA94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFA90u;
            // 0x1cfa94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFA98u; }
        if (ctx->pc != 0x1CFA98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFA98u; }
        if (ctx->pc != 0x1CFA98u) { return; }
    }
    ctx->pc = 0x1CFA98u;
label_1cfa98:
    // 0x1cfa98: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cfa98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cfa9c:
    // 0x1cfa9c: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x1cfa9cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
label_1cfaa0:
    // 0x1cfaa0: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x1cfaa0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
label_1cfaa4:
    // 0x1cfaa4: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x1cfaa4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1cfaa8:
    // 0x1cfaa8: 0x24c67288  addiu       $a2, $a2, 0x7288
    ctx->pc = 0x1cfaa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 29320));
label_1cfaac:
    // 0x1cfaac: 0xc0b2148  jal         func_2C8520
label_1cfab0:
    if (ctx->pc == 0x1CFAB0u) {
        ctx->pc = 0x1CFAB0u;
            // 0x1cfab0: 0x24e77290  addiu       $a3, $a3, 0x7290 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 29328));
        ctx->pc = 0x1CFAB4u;
        goto label_1cfab4;
    }
    ctx->pc = 0x1CFAACu;
    SET_GPR_U32(ctx, 31, 0x1CFAB4u);
    ctx->pc = 0x1CFAB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFAACu;
            // 0x1cfab0: 0x24e77290  addiu       $a3, $a3, 0x7290 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 29328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8520u;
    if (runtime->hasFunction(0x2C8520u)) {
        auto targetFn = runtime->lookupFunction(0x2C8520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFAB4u; }
        if (ctx->pc != 0x1CFAB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawLensFlare__6CSceneFiPcPc_0x2c8520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFAB4u; }
        if (ctx->pc != 0x1CFAB4u) { return; }
    }
    ctx->pc = 0x1CFAB4u;
label_1cfab4:
    // 0x1cfab4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1cfab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cfab8:
    // 0x1cfab8: 0xc050ebc  jal         func_143AF0
label_1cfabc:
    if (ctx->pc == 0x1CFABCu) {
        ctx->pc = 0x1CFAC0u;
        goto label_1cfac0;
    }
    ctx->pc = 0x1CFAB8u;
    SET_GPR_U32(ctx, 31, 0x1CFAC0u);
    ctx->pc = 0x143AF0u;
    if (runtime->hasFunction(0x143AF0u)) {
        auto targetFn = runtime->lookupFunction(0x143AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFAC0u; }
        if (ctx->pc != 0x1CFAC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkTextureRepeat__Fi_0x143af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFAC0u; }
        if (ctx->pc != 0x1CFAC0u) { return; }
    }
    ctx->pc = 0x1CFAC0u;
label_1cfac0:
    // 0x1cfac0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1cfac0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1cfac4:
    // 0x1cfac4: 0x240500ad  addiu       $a1, $zero, 0xAD
    ctx->pc = 0x1cfac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
label_1cfac8:
    // 0x1cfac8: 0xc04ba14  jal         func_12E850
label_1cfacc:
    if (ctx->pc == 0x1CFACCu) {
        ctx->pc = 0x1CFACCu;
            // 0x1cfacc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CFAD0u;
        goto label_1cfad0;
    }
    ctx->pc = 0x1CFAC8u;
    SET_GPR_U32(ctx, 31, 0x1CFAD0u);
    ctx->pc = 0x1CFACCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFAC8u;
            // 0x1cfacc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFAD0u; }
        if (ctx->pc != 0x1CFAD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFAD0u; }
        if (ctx->pc != 0x1CFAD0u) { return; }
    }
    ctx->pc = 0x1CFAD0u;
label_1cfad0:
    // 0x1cfad0: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1cfad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1cfad4:
    // 0x1cfad4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1cfad4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cfad8:
    // 0x1cfad8: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1cfad8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1cfadc:
    // 0x1cfadc: 0x320f809  jalr        $t9
label_1cfae0:
    if (ctx->pc == 0x1CFAE0u) {
        ctx->pc = 0x1CFAE0u;
            // 0x1cfae0: 0x27a50b70  addiu       $a1, $sp, 0xB70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2928));
        ctx->pc = 0x1CFAE4u;
        goto label_1cfae4;
    }
    ctx->pc = 0x1CFADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CFAE4u);
        ctx->pc = 0x1CFAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFADCu;
            // 0x1cfae0: 0x27a50b70  addiu       $a1, $sp, 0xB70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2928));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CFAE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CFAE4u; }
            if (ctx->pc != 0x1CFAE4u) { return; }
        }
        }
    }
    ctx->pc = 0x1CFAE4u;
label_1cfae4:
    // 0x1cfae4: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1cfae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1cfae8:
    // 0x1cfae8: 0x27a50b70  addiu       $a1, $sp, 0xB70
    ctx->pc = 0x1cfae8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2928));
label_1cfaec:
    // 0x1cfaec: 0xc0a2f54  jal         func_28BD50
label_1cfaf0:
    if (ctx->pc == 0x1CFAF0u) {
        ctx->pc = 0x1CFAF0u;
            // 0x1cfaf0: 0x24844b20  addiu       $a0, $a0, 0x4B20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19232));
        ctx->pc = 0x1CFAF4u;
        goto label_1cfaf4;
    }
    ctx->pc = 0x1CFAECu;
    SET_GPR_U32(ctx, 31, 0x1CFAF4u);
    ctx->pc = 0x1CFAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFAECu;
            // 0x1cfaf0: 0x24844b20  addiu       $a0, $a0, 0x4B20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28BD50u;
    if (runtime->hasFunction(0x28BD50u)) {
        auto targetFn = runtime->lookupFunction(0x28BD50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFAF4u; }
        if (ctx->pc != 0x1CFAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__13CRandomCircleFPf_0x28bd50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFAF4u; }
        if (ctx->pc != 0x1CFAF4u) { return; }
    }
    ctx->pc = 0x1CFAF4u;
label_1cfaf4:
    // 0x1cfaf4: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1cfaf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1cfaf8:
    // 0x1cfaf8: 0x240500ad  addiu       $a1, $zero, 0xAD
    ctx->pc = 0x1cfaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
label_1cfafc:
    // 0x1cfafc: 0xc04ba14  jal         func_12E850
label_1cfb00:
    if (ctx->pc == 0x1CFB00u) {
        ctx->pc = 0x1CFB00u;
            // 0x1cfb00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CFB04u;
        goto label_1cfb04;
    }
    ctx->pc = 0x1CFAFCu;
    SET_GPR_U32(ctx, 31, 0x1CFB04u);
    ctx->pc = 0x1CFB00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFAFCu;
            // 0x1cfb00: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFB04u; }
        if (ctx->pc != 0x1CFB04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFB04u; }
        if (ctx->pc != 0x1CFB04u) { return; }
    }
    ctx->pc = 0x1CFB04u;
label_1cfb04:
    // 0x1cfb04: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1cfb04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1cfb08:
    // 0x1cfb08: 0x27a50b70  addiu       $a1, $sp, 0xB70
    ctx->pc = 0x1cfb08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2928));
label_1cfb0c:
    // 0x1cfb0c: 0xc0a2ea0  jal         func_28BA80
label_1cfb10:
    if (ctx->pc == 0x1CFB10u) {
        ctx->pc = 0x1CFB10u;
            // 0x1cfb10: 0x248451c0  addiu       $a0, $a0, 0x51C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20928));
        ctx->pc = 0x1CFB14u;
        goto label_1cfb14;
    }
    ctx->pc = 0x1CFB0Cu;
    SET_GPR_U32(ctx, 31, 0x1CFB14u);
    ctx->pc = 0x1CFB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFB0Cu;
            // 0x1cfb10: 0x248451c0  addiu       $a0, $a0, 0x51C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28BA80u;
    if (runtime->hasFunction(0x28BA80u)) {
        auto targetFn = runtime->lookupFunction(0x28BA80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFB14u; }
        if (ctx->pc != 0x1CFB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GeoDraw__9CGeoStoneFPf_0x28ba80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFB14u; }
        if (ctx->pc != 0x1CFB14u) { return; }
    }
    ctx->pc = 0x1CFB14u;
label_1cfb14:
    // 0x1cfb14: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1cfb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1cfb18:
    // 0x1cfb18: 0x2405006a  addiu       $a1, $zero, 0x6A
    ctx->pc = 0x1cfb18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
label_1cfb1c:
    // 0x1cfb1c: 0xc04ba14  jal         func_12E850
label_1cfb20:
    if (ctx->pc == 0x1CFB20u) {
        ctx->pc = 0x1CFB20u;
            // 0x1cfb20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CFB24u;
        goto label_1cfb24;
    }
    ctx->pc = 0x1CFB1Cu;
    SET_GPR_U32(ctx, 31, 0x1CFB24u);
    ctx->pc = 0x1CFB20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFB1Cu;
            // 0x1cfb20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFB24u; }
        if (ctx->pc != 0x1CFB24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFB24u; }
        if (ctx->pc != 0x1CFB24u) { return; }
    }
    ctx->pc = 0x1CFB24u;
label_1cfb24:
    // 0x1cfb24: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1cfb24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1cfb28:
    // 0x1cfb28: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1cfb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1cfb2c:
    // 0x1cfb2c: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1cfb2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_1cfb30:
    // 0x1cfb30: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_1cfb34:
    if (ctx->pc == 0x1CFB34u) {
        ctx->pc = 0x1CFB34u;
            // 0x1cfb34: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->pc = 0x1CFB38u;
        goto label_1cfb38;
    }
    ctx->pc = 0x1CFB30u;
    {
        const bool branch_taken_0x1cfb30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFB34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFB30u;
            // 0x1cfb34: 0x3c050036  lui         $a1, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfb30) {
            ctx->pc = 0x1CFB78u;
            goto label_1cfb78;
        }
    }
    ctx->pc = 0x1CFB38u;
label_1cfb38:
    // 0x1cfb38: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1cfb38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1cfb3c:
    // 0x1cfb3c: 0x24a57298  addiu       $a1, $a1, 0x7298
    ctx->pc = 0x1cfb3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29336));
label_1cfb40:
    // 0x1cfb40: 0xc04b414  jal         func_12D050
label_1cfb44:
    if (ctx->pc == 0x1CFB44u) {
        ctx->pc = 0x1CFB44u;
            // 0x1cfb44: 0x2406006a  addiu       $a2, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->pc = 0x1CFB48u;
        goto label_1cfb48;
    }
    ctx->pc = 0x1CFB40u;
    SET_GPR_U32(ctx, 31, 0x1CFB48u);
    ctx->pc = 0x1CFB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFB40u;
            // 0x1cfb44: 0x2406006a  addiu       $a2, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFB48u; }
        if (ctx->pc != 0x1CFB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFB48u; }
        if (ctx->pc != 0x1CFB48u) { return; }
    }
    ctx->pc = 0x1CFB48u;
label_1cfb48:
    // 0x1cfb48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cfb48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cfb4c:
    // 0x1cfb4c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1cfb4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cfb50:
    // 0x1cfb50: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1cfb50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cfb54:
    // 0x1cfb54: 0x3c0201eb  lui         $v0, 0x1EB
    ctx->pc = 0x1cfb54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)491 << 16));
label_1cfb58:
    // 0x1cfb58: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cfb58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cfb5c:
    // 0x1cfb5c: 0x244242f0  addiu       $v0, $v0, 0x42F0
    ctx->pc = 0x1cfb5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17136));
label_1cfb60:
    // 0x1cfb60: 0xc06dfd8  jal         func_1B7F60
label_1cfb64:
    if (ctx->pc == 0x1CFB64u) {
        ctx->pc = 0x1CFB64u;
            // 0x1cfb64: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->pc = 0x1CFB68u;
        goto label_1cfb68;
    }
    ctx->pc = 0x1CFB60u;
    SET_GPR_U32(ctx, 31, 0x1CFB68u);
    ctx->pc = 0x1CFB64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFB60u;
            // 0x1cfb64: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7F60u;
    if (runtime->hasFunction(0x1B7F60u)) {
        auto targetFn = runtime->lookupFunction(0x1B7F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFB68u; }
        if (ctx->pc != 0x1CFB68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__9CPullItemFP10mgCTexture_0x1b7f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFB68u; }
        if (ctx->pc != 0x1CFB68u) { return; }
    }
    ctx->pc = 0x1CFB68u;
label_1cfb68:
    // 0x1cfb68: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1cfb68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1cfb6c:
    // 0x1cfb6c: 0x2a220048  slti        $v0, $s1, 0x48
    ctx->pc = 0x1cfb6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)72) ? 1 : 0);
label_1cfb70:
    // 0x1cfb70: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_1cfb74:
    if (ctx->pc == 0x1CFB74u) {
        ctx->pc = 0x1CFB74u;
            // 0x1cfb74: 0x26520080  addiu       $s2, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->pc = 0x1CFB78u;
        goto label_1cfb78;
    }
    ctx->pc = 0x1CFB70u;
    {
        const bool branch_taken_0x1cfb70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFB74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFB70u;
            // 0x1cfb74: 0x26520080  addiu       $s2, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfb70) {
            ctx->pc = 0x1CFB54u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cfb54;
        }
    }
    ctx->pc = 0x1CFB78u;
label_1cfb78:
    // 0x1cfb78: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1cfb78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1cfb7c:
    // 0x1cfb7c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1cfb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1cfb80:
    // 0x1cfb80: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1cfb80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_1cfb84:
    // 0x1cfb84: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_1cfb88:
    if (ctx->pc == 0x1CFB88u) {
        ctx->pc = 0x1CFB88u;
            // 0x1cfb88: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CFB8Cu;
        goto label_1cfb8c;
    }
    ctx->pc = 0x1CFB84u;
    {
        const bool branch_taken_0x1cfb84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFB88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFB84u;
            // 0x1cfb88: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfb84) {
            ctx->pc = 0x1CFBC0u;
            goto label_1cfbc0;
        }
    }
    ctx->pc = 0x1CFB8Cu;
label_1cfb8c:
    // 0x1cfb8c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1cfb8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cfb90:
    // 0x1cfb90: 0x3c0201eb  lui         $v0, 0x1EB
    ctx->pc = 0x1cfb90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)491 << 16));
label_1cfb94:
    // 0x1cfb94: 0x2442e190  addiu       $v0, $v0, -0x1E70
    ctx->pc = 0x1cfb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959504));
label_1cfb98:
    // 0x1cfb98: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x1cfb98u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1cfb9c:
    // 0x1cfb9c: 0xc070984  jal         func_1C2610
label_1cfba0:
    if (ctx->pc == 0x1CFBA0u) {
        ctx->pc = 0x1CFBA0u;
            // 0x1cfba0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CFBA4u;
        goto label_1cfba4;
    }
    ctx->pc = 0x1CFB9Cu;
    SET_GPR_U32(ctx, 31, 0x1CFBA4u);
    ctx->pc = 0x1CFBA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFB9Cu;
            // 0x1cfba0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2610u;
    if (runtime->hasFunction(0x1C2610u)) {
        auto targetFn = runtime->lookupFunction(0x1C2610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFBA4u; }
        if (ctx->pc != 0x1CFBA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepWire__10CAfterWireFv_0x1c2610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFBA4u; }
        if (ctx->pc != 0x1CFBA4u) { return; }
    }
    ctx->pc = 0x1CFBA4u;
label_1cfba4:
    // 0x1cfba4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cfba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cfba8:
    // 0x1cfba8: 0xc070924  jal         func_1C2490
label_1cfbac:
    if (ctx->pc == 0x1CFBACu) {
        ctx->pc = 0x1CFBACu;
            // 0x1cfbac: 0x27a50b80  addiu       $a1, $sp, 0xB80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2944));
        ctx->pc = 0x1CFBB0u;
        goto label_1cfbb0;
    }
    ctx->pc = 0x1CFBA8u;
    SET_GPR_U32(ctx, 31, 0x1CFBB0u);
    ctx->pc = 0x1CFBACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFBA8u;
            // 0x1cfbac: 0x27a50b80  addiu       $a1, $sp, 0xB80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 2944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2490u;
    if (runtime->hasFunction(0x1C2490u)) {
        auto targetFn = runtime->lookupFunction(0x1C2490u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFBB0u; }
        if (ctx->pc != 0x1CFBB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawWire__10CAfterWireFPA4_f_0x1c2490(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFBB0u; }
        if (ctx->pc != 0x1CFBB0u) { return; }
    }
    ctx->pc = 0x1CFBB0u;
label_1cfbb0:
    // 0x1cfbb0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cfbb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1cfbb4:
    // 0x1cfbb4: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x1cfbb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
label_1cfbb8:
    // 0x1cfbb8: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_1cfbbc:
    if (ctx->pc == 0x1CFBBCu) {
        ctx->pc = 0x1CFBBCu;
            // 0x1cfbbc: 0x26310120  addiu       $s1, $s1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
        ctx->pc = 0x1CFBC0u;
        goto label_1cfbc0;
    }
    ctx->pc = 0x1CFBB8u;
    {
        const bool branch_taken_0x1cfbb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFBBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFBB8u;
            // 0x1cfbbc: 0x26310120  addiu       $s1, $s1, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfbb8) {
            ctx->pc = 0x1CFB90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cfb90;
        }
    }
    ctx->pc = 0x1CFBC0u;
label_1cfbc0:
    // 0x1cfbc0: 0xc0772d0  jal         func_1DCB40
label_1cfbc4:
    if (ctx->pc == 0x1CFBC4u) {
        ctx->pc = 0x1CFBC4u;
            // 0x1cfbc4: 0x8f848db8  lw          $a0, -0x7248($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
        ctx->pc = 0x1CFBC8u;
        goto label_1cfbc8;
    }
    ctx->pc = 0x1CFBC0u;
    SET_GPR_U32(ctx, 31, 0x1CFBC8u);
    ctx->pc = 0x1CFBC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFBC0u;
            // 0x1cfbc4: 0x8f848db8  lw          $a0, -0x7248($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DCB40u;
    if (runtime->hasFunction(0x1DCB40u)) {
        auto targetFn = runtime->lookupFunction(0x1DCB40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFBC8u; }
        if (ctx->pc != 0x1CFBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawInvisibleMonster__11CMonsterManFv_0x1dcb40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFBC8u; }
        if (ctx->pc != 0x1CFBC8u) { return; }
    }
    ctx->pc = 0x1CFBC8u;
label_1cfbc8:
    // 0x1cfbc8: 0x8f828db4  lw          $v0, -0x724C($gp)
    ctx->pc = 0x1cfbc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938036)));
label_1cfbcc:
    // 0x1cfbcc: 0x1040003a  beqz        $v0, . + 4 + (0x3A << 2)
label_1cfbd0:
    if (ctx->pc == 0x1CFBD0u) {
        ctx->pc = 0x1CFBD4u;
        goto label_1cfbd4;
    }
    ctx->pc = 0x1CFBCCu;
    {
        const bool branch_taken_0x1cfbcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfbcc) {
            ctx->pc = 0x1CFCB8u;
            goto label_1cfcb8;
        }
    }
    ctx->pc = 0x1CFBD4u;
label_1cfbd4:
    // 0x1cfbd4: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1cfbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1cfbd8:
    // 0x1cfbd8: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1cfbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1cfbdc:
    // 0x1cfbdc: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1cfbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_1cfbe0:
    // 0x1cfbe0: 0x14400035  bnez        $v0, . + 4 + (0x35 << 2)
label_1cfbe4:
    if (ctx->pc == 0x1CFBE4u) {
        ctx->pc = 0x1CFBE4u;
            // 0x1cfbe4: 0x24100006  addiu       $s0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x1CFBE8u;
        goto label_1cfbe8;
    }
    ctx->pc = 0x1CFBE0u;
    {
        const bool branch_taken_0x1cfbe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFBE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFBE0u;
            // 0x1cfbe4: 0x24100006  addiu       $s0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfbe0) {
            ctx->pc = 0x1CFCB8u;
            goto label_1cfcb8;
        }
    }
    ctx->pc = 0x1CFBE8u;
label_1cfbe8:
    // 0x1cfbe8: 0x8f828dac  lw          $v0, -0x7254($gp)
    ctx->pc = 0x1cfbe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cfbec:
    // 0x1cfbec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cfbecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cfbf0:
    // 0x1cfbf0: 0x27a61b80  addiu       $a2, $sp, 0x1B80
    ctx->pc = 0x1cfbf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 7040));
label_1cfbf4:
    // 0x1cfbf4: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x1cfbf4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1cfbf8:
    // 0x1cfbf8: 0xc05a3f4  jal         func_168FD0
label_1cfbfc:
    if (ctx->pc == 0x1CFBFCu) {
        ctx->pc = 0x1CFBFCu;
            // 0x1cfbfc: 0x244423d0  addiu       $a0, $v0, 0x23D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9168));
        ctx->pc = 0x1CFC00u;
        goto label_1cfc00;
    }
    ctx->pc = 0x1CFBF8u;
    SET_GPR_U32(ctx, 31, 0x1CFC00u);
    ctx->pc = 0x1CFBFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFBF8u;
            // 0x1cfbfc: 0x244423d0  addiu       $a0, $v0, 0x23D0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 9168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x168FD0u;
    if (runtime->hasFunction(0x168FD0u)) {
        auto targetFn = runtime->lookupFunction(0x168FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFC00u; }
        if (ctx->pc != 0x1CFC00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTextureBlockNo__11CMdsListSetFiPii_0x168fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFC00u; }
        if (ctx->pc != 0x1CFC00u) { return; }
    }
    ctx->pc = 0x1CFC00u;
label_1cfc00:
    // 0x1cfc00: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x1cfc00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1cfc04:
    // 0x1cfc04: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1cfc04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cfc08:
    // 0x1cfc08: 0x1020000f  beqz        $at, . + 4 + (0xF << 2)
label_1cfc0c:
    if (ctx->pc == 0x1CFC0Cu) {
        ctx->pc = 0x1CFC0Cu;
            // 0x1cfc0c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CFC10u;
        goto label_1cfc10;
    }
    ctx->pc = 0x1CFC08u;
    {
        const bool branch_taken_0x1cfc08 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFC0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFC08u;
            // 0x1cfc0c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfc08) {
            ctx->pc = 0x1CFC48u;
            goto label_1cfc48;
        }
    }
    ctx->pc = 0x1CFC10u;
label_1cfc10:
    // 0x1cfc10: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1cfc10u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cfc14:
    // 0x1cfc14: 0x0  nop
    ctx->pc = 0x1cfc14u;
    // NOP
label_1cfc18:
    // 0x1cfc18: 0x29d1021  addu        $v0, $s4, $sp
    ctx->pc = 0x1cfc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 29)));
label_1cfc1c:
    // 0x1cfc1c: 0x8c521b80  lw          $s2, 0x1B80($v0)
    ctx->pc = 0x1cfc1cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7040)));
label_1cfc20:
    // 0x1cfc20: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cfc20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cfc24:
    // 0x1cfc24: 0xc050958  jal         func_142560
label_1cfc28:
    if (ctx->pc == 0x1CFC28u) {
        ctx->pc = 0x1CFC28u;
            // 0x1cfc28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CFC2Cu;
        goto label_1cfc2c;
    }
    ctx->pc = 0x1CFC24u;
    SET_GPR_U32(ctx, 31, 0x1CFC2Cu);
    ctx->pc = 0x1CFC28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFC24u;
            // 0x1cfc28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142560u;
    if (runtime->hasFunction(0x142560u)) {
        auto targetFn = runtime->lookupFunction(0x142560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFC2Cu; }
        if (ctx->pc != 0x1CFC2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgEndDrawReloadTexture__FiP14mgCDrawManager_0x142560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFC2Cu; }
        if (ctx->pc != 0x1CFC2Cu) { return; }
    }
    ctx->pc = 0x1CFC2Cu;
label_1cfc2c:
    // 0x1cfc2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1cfc2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cfc30:
    // 0x1cfc30: 0xc050960  jal         func_142580
label_1cfc34:
    if (ctx->pc == 0x1CFC34u) {
        ctx->pc = 0x1CFC34u;
            // 0x1cfc34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CFC38u;
        goto label_1cfc38;
    }
    ctx->pc = 0x1CFC30u;
    SET_GPR_U32(ctx, 31, 0x1CFC38u);
    ctx->pc = 0x1CFC34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFC30u;
            // 0x1cfc34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x142580u;
    if (runtime->hasFunction(0x142580u)) {
        auto targetFn = runtime->lookupFunction(0x142580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFC38u; }
        if (ctx->pc != 0x1CFC38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgEndDraw__FiP14mgCDrawManager_0x142580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFC38u; }
        if (ctx->pc != 0x1CFC38u) { return; }
    }
    ctx->pc = 0x1CFC38u;
label_1cfc38:
    // 0x1cfc38: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1cfc38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1cfc3c:
    // 0x1cfc3c: 0x233102a  slt         $v0, $s1, $s3
    ctx->pc = 0x1cfc3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_1cfc40:
    // 0x1cfc40: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_1cfc44:
    if (ctx->pc == 0x1CFC44u) {
        ctx->pc = 0x1CFC44u;
            // 0x1cfc44: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x1CFC48u;
        goto label_1cfc48;
    }
    ctx->pc = 0x1CFC40u;
    {
        const bool branch_taken_0x1cfc40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFC40u;
            // 0x1cfc44: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfc40) {
            ctx->pc = 0x1CFC14u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cfc14;
        }
    }
    ctx->pc = 0x1CFC48u;
label_1cfc48:
    // 0x1cfc48: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cfc48u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1cfc4c:
    // 0x1cfc4c: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x1cfc4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
label_1cfc50:
    // 0x1cfc50: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_1cfc54:
    if (ctx->pc == 0x1CFC54u) {
        ctx->pc = 0x1CFC54u;
            // 0x1cfc54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CFC58u;
        goto label_1cfc58;
    }
    ctx->pc = 0x1CFC50u;
    {
        const bool branch_taken_0x1cfc50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFC50u;
            // 0x1cfc54: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfc50) {
            ctx->pc = 0x1CFBE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cfbe8;
        }
    }
    ctx->pc = 0x1CFC58u;
label_1cfc58:
    // 0x1cfc58: 0xc050ebc  jal         func_143AF0
label_1cfc5c:
    if (ctx->pc == 0x1CFC5Cu) {
        ctx->pc = 0x1CFC60u;
        goto label_1cfc60;
    }
    ctx->pc = 0x1CFC58u;
    SET_GPR_U32(ctx, 31, 0x1CFC60u);
    ctx->pc = 0x143AF0u;
    if (runtime->hasFunction(0x143AF0u)) {
        auto targetFn = runtime->lookupFunction(0x143AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFC60u; }
        if (ctx->pc != 0x1CFC60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetPkTextureRepeat__Fi_0x143af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFC60u; }
        if (ctx->pc != 0x1CFC60u) { return; }
    }
    ctx->pc = 0x1CFC60u;
label_1cfc60:
    // 0x1cfc60: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cfc60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1cfc64:
    // 0x1cfc64: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1cfc64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1cfc68:
    // 0x1cfc68: 0x24a572a0  addiu       $a1, $a1, 0x72A0
    ctx->pc = 0x1cfc68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29344));
label_1cfc6c:
    // 0x1cfc6c: 0xc04b414  jal         func_12D050
label_1cfc70:
    if (ctx->pc == 0x1CFC70u) {
        ctx->pc = 0x1CFC70u;
            // 0x1cfc70: 0x24060059  addiu       $a2, $zero, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
        ctx->pc = 0x1CFC74u;
        goto label_1cfc74;
    }
    ctx->pc = 0x1CFC6Cu;
    SET_GPR_U32(ctx, 31, 0x1CFC74u);
    ctx->pc = 0x1CFC70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFC6Cu;
            // 0x1cfc70: 0x24060059  addiu       $a2, $zero, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFC74u; }
        if (ctx->pc != 0x1CFC74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFC74u; }
        if (ctx->pc != 0x1CFC74u) { return; }
    }
    ctx->pc = 0x1CFC74u;
label_1cfc74:
    // 0x1cfc74: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1cfc74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1cfc78:
    // 0x1cfc78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cfc78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cfc7c:
    // 0x1cfc7c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1cfc7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1cfc80:
    // 0x1cfc80: 0x24a572b0  addiu       $a1, $a1, 0x72B0
    ctx->pc = 0x1cfc80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29360));
label_1cfc84:
    // 0x1cfc84: 0xc04b414  jal         func_12D050
label_1cfc88:
    if (ctx->pc == 0x1CFC88u) {
        ctx->pc = 0x1CFC88u;
            // 0x1cfc88: 0x24060059  addiu       $a2, $zero, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
        ctx->pc = 0x1CFC8Cu;
        goto label_1cfc8c;
    }
    ctx->pc = 0x1CFC84u;
    SET_GPR_U32(ctx, 31, 0x1CFC8Cu);
    ctx->pc = 0x1CFC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFC84u;
            // 0x1cfc88: 0x24060059  addiu       $a2, $zero, 0x59 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 89));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFC8Cu; }
        if (ctx->pc != 0x1CFC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFC8Cu; }
        if (ctx->pc != 0x1CFC8Cu) { return; }
    }
    ctx->pc = 0x1CFC8Cu;
label_1cfc8c:
    // 0x1cfc8c: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cfc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cfc90:
    // 0x1cfc90: 0x8c852e54  lw          $a1, 0x2E54($a0)
    ctx->pc = 0x1cfc90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11860)));
label_1cfc94:
    // 0x1cfc94: 0xc0a0e30  jal         func_2838C0
label_1cfc98:
    if (ctx->pc == 0x1CFC98u) {
        ctx->pc = 0x1CFC98u;
            // 0x1cfc98: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CFC9Cu;
        goto label_1cfc9c;
    }
    ctx->pc = 0x1CFC94u;
    SET_GPR_U32(ctx, 31, 0x1CFC9Cu);
    ctx->pc = 0x1CFC98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFC94u;
            // 0x1cfc98: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2838C0u;
    if (runtime->hasFunction(0x2838C0u)) {
        auto targetFn = runtime->lookupFunction(0x2838C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFC9Cu; }
        if (ctx->pc != 0x1CFC9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCamera__6CSceneFi_0x2838c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFC9Cu; }
        if (ctx->pc != 0x1CFC9Cu) { return; }
    }
    ctx->pc = 0x1CFC9Cu;
label_1cfc9c:
    // 0x1cfc9c: 0x8f848db4  lw          $a0, -0x724C($gp)
    ctx->pc = 0x1cfc9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938036)));
label_1cfca0:
    // 0x1cfca0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cfca0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cfca4:
    // 0x1cfca4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1cfca4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cfca8:
    // 0x1cfca8: 0x8c990d00  lw          $t9, 0xD00($a0)
    ctx->pc = 0x1cfca8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3328)));
label_1cfcac:
    // 0x1cfcac: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x1cfcacu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_1cfcb0:
    // 0x1cfcb0: 0x320f809  jalr        $t9
label_1cfcb4:
    if (ctx->pc == 0x1CFCB4u) {
        ctx->pc = 0x1CFCB4u;
            // 0x1cfcb4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CFCB8u;
        goto label_1cfcb8;
    }
    ctx->pc = 0x1CFCB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CFCB8u);
        ctx->pc = 0x1CFCB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFCB0u;
            // 0x1cfcb4: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CFCB8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CFCB8u; }
            if (ctx->pc != 0x1CFCB8u) { return; }
        }
        }
    }
    ctx->pc = 0x1CFCB8u;
label_1cfcb8:
    // 0x1cfcb8: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1cfcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1cfcbc:
    // 0x1cfcbc: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1cfcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1cfcc0:
    // 0x1cfcc0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x1cfcc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_1cfcc4:
    // 0x1cfcc4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1cfcc8:
    if (ctx->pc == 0x1CFCC8u) {
        ctx->pc = 0x1CFCC8u;
            // 0x1cfcc8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1CFCCCu;
        goto label_1cfccc;
    }
    ctx->pc = 0x1CFCC4u;
    {
        const bool branch_taken_0x1cfcc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFCC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFCC4u;
            // 0x1cfcc8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfcc4) {
            ctx->pc = 0x1CFCDCu;
            goto label_1cfcdc;
        }
    }
    ctx->pc = 0x1CFCCCu;
label_1cfccc:
    // 0x1cfccc: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cfcccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cfcd0:
    // 0x1cfcd0: 0xc0b2208  jal         func_2C8820
label_1cfcd4:
    if (ctx->pc == 0x1CFCD4u) {
        ctx->pc = 0x1CFCD4u;
            // 0x1cfcd4: 0x2405004b  addiu       $a1, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->pc = 0x1CFCD8u;
        goto label_1cfcd8;
    }
    ctx->pc = 0x1CFCD0u;
    SET_GPR_U32(ctx, 31, 0x1CFCD8u);
    ctx->pc = 0x1CFCD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFCD0u;
            // 0x1cfcd4: 0x2405004b  addiu       $a1, $zero, 0x4B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 75));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8820u;
    if (runtime->hasFunction(0x2C8820u)) {
        auto targetFn = runtime->lookupFunction(0x2C8820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFCD8u; }
        if (ctx->pc != 0x1CFCD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawEffect__6CSceneFi_0x2c8820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFCD8u; }
        if (ctx->pc != 0x1CFCD8u) { return; }
    }
    ctx->pc = 0x1CFCD8u;
label_1cfcd8:
    // 0x1cfcd8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1cfcd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cfcdc:
    // 0x1cfcdc: 0xc050dc8  jal         func_143720
label_1cfce0:
    if (ctx->pc == 0x1CFCE0u) {
        ctx->pc = 0x1CFCE0u;
            // 0x1cfce0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CFCE4u;
        goto label_1cfce4;
    }
    ctx->pc = 0x1CFCDCu;
    SET_GPR_U32(ctx, 31, 0x1CFCE4u);
    ctx->pc = 0x1CFCE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFCDCu;
            // 0x1cfce0: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143720u;
    if (runtime->hasFunction(0x143720u)) {
        auto targetFn = runtime->lookupFunction(0x143720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFCE4u; }
        if (ctx->pc != 0x1CFCE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgActiveLighting__Fii_0x143720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFCE4u; }
        if (ctx->pc != 0x1CFCE4u) { return; }
    }
    ctx->pc = 0x1CFCE4u;
label_1cfce4:
    // 0x1cfce4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1cfce4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cfce8:
    // 0x1cfce8: 0x27a41d80  addiu       $a0, $sp, 0x1D80
    ctx->pc = 0x1cfce8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 7552));
label_1cfcec:
    // 0x1cfcec: 0xc050dd8  jal         func_143760
label_1cfcf0:
    if (ctx->pc == 0x1CFCF0u) {
        ctx->pc = 0x1CFCF0u;
            // 0x1cfcf0: 0x27a51dc0  addiu       $a1, $sp, 0x1DC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 7616));
        ctx->pc = 0x1CFCF4u;
        goto label_1cfcf4;
    }
    ctx->pc = 0x1CFCECu;
    SET_GPR_U32(ctx, 31, 0x1CFCF4u);
    ctx->pc = 0x1CFCF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFCECu;
            // 0x1cfcf0: 0x27a51dc0  addiu       $a1, $sp, 0x1DC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 7616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143760u;
    if (runtime->hasFunction(0x143760u)) {
        auto targetFn = runtime->lookupFunction(0x143760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFCF4u; }
        if (ctx->pc != 0x1CFCF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetLight__FPA4_fPA4_f_0x143760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFCF4u; }
        if (ctx->pc != 0x1CFCF4u) { return; }
    }
    ctx->pc = 0x1CFCF4u;
label_1cfcf4:
    // 0x1cfcf4: 0xc050df4  jal         func_1437D0
label_1cfcf8:
    if (ctx->pc == 0x1CFCF8u) {
        ctx->pc = 0x1CFCF8u;
            // 0x1cfcf8: 0x27a41e00  addiu       $a0, $sp, 0x1E00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 7680));
        ctx->pc = 0x1CFCFCu;
        goto label_1cfcfc;
    }
    ctx->pc = 0x1CFCF4u;
    SET_GPR_U32(ctx, 31, 0x1CFCFCu);
    ctx->pc = 0x1CFCF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFCF4u;
            // 0x1cfcf8: 0x27a41e00  addiu       $a0, $sp, 0x1E00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 7680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437D0u;
    if (runtime->hasFunction(0x1437D0u)) {
        auto targetFn = runtime->lookupFunction(0x1437D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFCFCu; }
        if (ctx->pc != 0x1CFCFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetAmbient__FPf_0x1437d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFCFCu; }
        if (ctx->pc != 0x1CFCFCu) { return; }
    }
    ctx->pc = 0x1CFCFCu;
label_1cfcfc:
    // 0x1cfcfc: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cfcfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cfd00:
    // 0x1cfd00: 0x27a51dc0  addiu       $a1, $sp, 0x1DC0
    ctx->pc = 0x1cfd00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 7616));
label_1cfd04:
    // 0x1cfd04: 0xc0b235c  jal         func_2C8D70
label_1cfd08:
    if (ctx->pc == 0x1CFD08u) {
        ctx->pc = 0x1CFD08u;
            // 0x1cfd08: 0x27a61e00  addiu       $a2, $sp, 0x1E00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 7680));
        ctx->pc = 0x1CFD0Cu;
        goto label_1cfd0c;
    }
    ctx->pc = 0x1CFD04u;
    SET_GPR_U32(ctx, 31, 0x1CFD0Cu);
    ctx->pc = 0x1CFD08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFD04u;
            // 0x1cfd08: 0x27a61e00  addiu       $a2, $sp, 0x1E00 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 7680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8D70u;
    if (runtime->hasFunction(0x2C8D70u)) {
        auto targetFn = runtime->lookupFunction(0x2C8D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFD0Cu; }
        if (ctx->pc != 0x1CFD0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaLighting__6CSceneFPA4_fPf_0x2c8d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFD0Cu; }
        if (ctx->pc != 0x1CFD0Cu) { return; }
    }
    ctx->pc = 0x1CFD0Cu;
label_1cfd0c:
    // 0x1cfd0c: 0x27a41d80  addiu       $a0, $sp, 0x1D80
    ctx->pc = 0x1cfd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 7552));
label_1cfd10:
    // 0x1cfd10: 0xc050dd0  jal         func_143740
label_1cfd14:
    if (ctx->pc == 0x1CFD14u) {
        ctx->pc = 0x1CFD14u;
            // 0x1cfd14: 0x27a51dc0  addiu       $a1, $sp, 0x1DC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 7616));
        ctx->pc = 0x1CFD18u;
        goto label_1cfd18;
    }
    ctx->pc = 0x1CFD10u;
    SET_GPR_U32(ctx, 31, 0x1CFD18u);
    ctx->pc = 0x1CFD14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFD10u;
            // 0x1cfd14: 0x27a51dc0  addiu       $a1, $sp, 0x1DC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 7616));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143740u;
    if (runtime->hasFunction(0x143740u)) {
        auto targetFn = runtime->lookupFunction(0x143740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFD18u; }
        if (ctx->pc != 0x1CFD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetLight__FPA4_fPA4_f_0x143740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFD18u; }
        if (ctx->pc != 0x1CFD18u) { return; }
    }
    ctx->pc = 0x1CFD18u;
label_1cfd18:
    // 0x1cfd18: 0xc050dec  jal         func_1437B0
label_1cfd1c:
    if (ctx->pc == 0x1CFD1Cu) {
        ctx->pc = 0x1CFD1Cu;
            // 0x1cfd1c: 0x27a41e00  addiu       $a0, $sp, 0x1E00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 7680));
        ctx->pc = 0x1CFD20u;
        goto label_1cfd20;
    }
    ctx->pc = 0x1CFD18u;
    SET_GPR_U32(ctx, 31, 0x1CFD20u);
    ctx->pc = 0x1CFD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFD18u;
            // 0x1cfd1c: 0x27a41e00  addiu       $a0, $sp, 0x1E00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 7680));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437B0u;
    if (runtime->hasFunction(0x1437B0u)) {
        auto targetFn = runtime->lookupFunction(0x1437B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFD20u; }
        if (ctx->pc != 0x1CFD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetAmbient__FPf_0x1437b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFD20u; }
        if (ctx->pc != 0x1CFD20u) { return; }
    }
    ctx->pc = 0x1CFD20u;
label_1cfd20:
    // 0x1cfd20: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1cfd20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cfd24:
    // 0x1cfd24: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cfd24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cfd28:
    // 0x1cfd28: 0xc0b22dc  jal         func_2C8B70
label_1cfd2c:
    if (ctx->pc == 0x1CFD2Cu) {
        ctx->pc = 0x1CFD2Cu;
            // 0x1cfd2c: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x1CFD30u;
        goto label_1cfd30;
    }
    ctx->pc = 0x1CFD28u;
    SET_GPR_U32(ctx, 31, 0x1CFD30u);
    ctx->pc = 0x1CFD2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFD28u;
            // 0x1cfd2c: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8B70u;
    if (runtime->hasFunction(0x2C8B70u)) {
        auto targetFn = runtime->lookupFunction(0x2C8B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFD30u; }
        if (ctx->pc != 0x1CFD30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckDrawChara__6CSceneFi_0x2c8b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFD30u; }
        if (ctx->pc != 0x1CFD30u) { return; }
    }
    ctx->pc = 0x1CFD30u;
label_1cfd30:
    // 0x1cfd30: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_1cfd34:
    if (ctx->pc == 0x1CFD34u) {
        ctx->pc = 0x1CFD38u;
        goto label_1cfd38;
    }
    ctx->pc = 0x1CFD30u;
    {
        const bool branch_taken_0x1cfd30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfd30) {
            ctx->pc = 0x1CFD98u;
            goto label_1cfd98;
        }
    }
    ctx->pc = 0x1CFD38u;
label_1cfd38:
    // 0x1cfd38: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cfd38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cfd3c:
    // 0x1cfd3c: 0x26260008  addiu       $a2, $s1, 0x8
    ctx->pc = 0x1cfd3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_1cfd40:
    // 0x1cfd40: 0xc0a1208  jal         func_284820
label_1cfd44:
    if (ctx->pc == 0x1CFD44u) {
        ctx->pc = 0x1CFD44u;
            // 0x1cfd44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1CFD48u;
        goto label_1cfd48;
    }
    ctx->pc = 0x1CFD40u;
    SET_GPR_U32(ctx, 31, 0x1CFD48u);
    ctx->pc = 0x1CFD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFD40u;
            // 0x1cfd44: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284820u;
    if (runtime->hasFunction(0x284820u)) {
        auto targetFn = runtime->lookupFunction(0x284820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFD48u; }
        if (ctx->pc != 0x1CFD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetType__6CSceneFii_0x284820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFD48u; }
        if (ctx->pc != 0x1CFD48u) { return; }
    }
    ctx->pc = 0x1CFD48u;
label_1cfd48:
    // 0x1cfd48: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1cfd48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cfd4c:
    // 0x1cfd4c: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
label_1cfd50:
    if (ctx->pc == 0x1CFD50u) {
        ctx->pc = 0x1CFD54u;
        goto label_1cfd54;
    }
    ctx->pc = 0x1CFD4Cu;
    {
        const bool branch_taken_0x1cfd4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cfd4c) {
            ctx->pc = 0x1CFD98u;
            goto label_1cfd98;
        }
    }
    ctx->pc = 0x1CFD54u;
label_1cfd54:
    // 0x1cfd54: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cfd54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cfd58:
    // 0x1cfd58: 0xc0a0ed8  jal         func_283B60
label_1cfd5c:
    if (ctx->pc == 0x1CFD5Cu) {
        ctx->pc = 0x1CFD5Cu;
            // 0x1cfd5c: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x1CFD60u;
        goto label_1cfd60;
    }
    ctx->pc = 0x1CFD58u;
    SET_GPR_U32(ctx, 31, 0x1CFD60u);
    ctx->pc = 0x1CFD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFD58u;
            // 0x1cfd5c: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFD60u; }
        if (ctx->pc != 0x1CFD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFD60u; }
        if (ctx->pc != 0x1CFD60u) { return; }
    }
    ctx->pc = 0x1CFD60u;
label_1cfd60:
    // 0x1cfd60: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1cfd60u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cfd64:
    // 0x1cfd64: 0x1240000c  beqz        $s2, . + 4 + (0xC << 2)
label_1cfd68:
    if (ctx->pc == 0x1CFD68u) {
        ctx->pc = 0x1CFD6Cu;
        goto label_1cfd6c;
    }
    ctx->pc = 0x1CFD64u;
    {
        const bool branch_taken_0x1cfd64 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfd64) {
            ctx->pc = 0x1CFD98u;
            goto label_1cfd98;
        }
    }
    ctx->pc = 0x1CFD6Cu;
label_1cfd6c:
    // 0x1cfd6c: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cfd6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cfd70:
    // 0x1cfd70: 0xc0a1240  jal         func_284900
label_1cfd74:
    if (ctx->pc == 0x1CFD74u) {
        ctx->pc = 0x1CFD74u;
            // 0x1cfd74: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x1CFD78u;
        goto label_1cfd78;
    }
    ctx->pc = 0x1CFD70u;
    SET_GPR_U32(ctx, 31, 0x1CFD78u);
    ctx->pc = 0x1CFD74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFD70u;
            // 0x1cfd74: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284900u;
    if (runtime->hasFunction(0x284900u)) {
        auto targetFn = runtime->lookupFunction(0x284900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFD78u; }
        if (ctx->pc != 0x1CFD78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaTexb__6CSceneFi_0x284900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFD78u; }
        if (ctx->pc != 0x1CFD78u) { return; }
    }
    ctx->pc = 0x1CFD78u;
label_1cfd78:
    // 0x1cfd78: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1cfd78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1cfd7c:
    // 0x1cfd7c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1cfd7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1cfd80:
    // 0x1cfd80: 0xc04ba14  jal         func_12E850
label_1cfd84:
    if (ctx->pc == 0x1CFD84u) {
        ctx->pc = 0x1CFD84u;
            // 0x1cfd84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CFD88u;
        goto label_1cfd88;
    }
    ctx->pc = 0x1CFD80u;
    SET_GPR_U32(ctx, 31, 0x1CFD88u);
    ctx->pc = 0x1CFD84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFD80u;
            // 0x1cfd84: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFD88u; }
        if (ctx->pc != 0x1CFD88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFD88u; }
        if (ctx->pc != 0x1CFD88u) { return; }
    }
    ctx->pc = 0x1CFD88u;
label_1cfd88:
    // 0x1cfd88: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x1cfd88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1cfd8c:
    // 0x1cfd8c: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x1cfd8cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_1cfd90:
    // 0x1cfd90: 0x320f809  jalr        $t9
label_1cfd94:
    if (ctx->pc == 0x1CFD94u) {
        ctx->pc = 0x1CFD94u;
            // 0x1cfd94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CFD98u;
        goto label_1cfd98;
    }
    ctx->pc = 0x1CFD90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CFD98u);
        ctx->pc = 0x1CFD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFD90u;
            // 0x1cfd94: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CFD98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CFD98u; }
            if (ctx->pc != 0x1CFD98u) { return; }
        }
        }
    }
    ctx->pc = 0x1CFD98u;
label_1cfd98:
    // 0x1cfd98: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1cfd98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1cfd9c:
    // 0x1cfd9c: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x1cfd9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
label_1cfda0:
    // 0x1cfda0: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_1cfda4:
    if (ctx->pc == 0x1CFDA4u) {
        ctx->pc = 0x1CFDA4u;
            // 0x1cfda4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CFDA8u;
        goto label_1cfda8;
    }
    ctx->pc = 0x1CFDA0u;
    {
        const bool branch_taken_0x1cfda0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFDA0u;
            // 0x1cfda4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfda0) {
            ctx->pc = 0x1CFD24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cfd24;
        }
    }
    ctx->pc = 0x1CFDA8u;
label_1cfda8:
    // 0x1cfda8: 0xc050dc8  jal         func_143720
label_1cfdac:
    if (ctx->pc == 0x1CFDACu) {
        ctx->pc = 0x1CFDACu;
            // 0x1cfdac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CFDB0u;
        goto label_1cfdb0;
    }
    ctx->pc = 0x1CFDA8u;
    SET_GPR_U32(ctx, 31, 0x1CFDB0u);
    ctx->pc = 0x1CFDACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFDA8u;
            // 0x1cfdac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143720u;
    if (runtime->hasFunction(0x143720u)) {
        auto targetFn = runtime->lookupFunction(0x143720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFDB0u; }
        if (ctx->pc != 0x1CFDB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgActiveLighting__Fii_0x143720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFDB0u; }
        if (ctx->pc != 0x1CFDB0u) { return; }
    }
    ctx->pc = 0x1CFDB0u;
label_1cfdb0:
    // 0x1cfdb0: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1cfdb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1cfdb4:
    // 0x1cfdb4: 0x24050049  addiu       $a1, $zero, 0x49
    ctx->pc = 0x1cfdb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
label_1cfdb8:
    // 0x1cfdb8: 0xc04ba14  jal         func_12E850
label_1cfdbc:
    if (ctx->pc == 0x1CFDBCu) {
        ctx->pc = 0x1CFDBCu;
            // 0x1cfdbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CFDC0u;
        goto label_1cfdc0;
    }
    ctx->pc = 0x1CFDB8u;
    SET_GPR_U32(ctx, 31, 0x1CFDC0u);
    ctx->pc = 0x1CFDBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFDB8u;
            // 0x1cfdbc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFDC0u; }
        if (ctx->pc != 0x1CFDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFDC0u; }
        if (ctx->pc != 0x1CFDC0u) { return; }
    }
    ctx->pc = 0x1CFDC0u;
label_1cfdc0:
    // 0x1cfdc0: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x1cfdc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
label_1cfdc4:
    // 0x1cfdc4: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1cfdc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1cfdc8:
    // 0x1cfdc8: 0x24a55830  addiu       $a1, $a1, 0x5830
    ctx->pc = 0x1cfdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22576));
label_1cfdcc:
    // 0x1cfdcc: 0xc07131c  jal         func_1C4C70
label_1cfdd0:
    if (ctx->pc == 0x1CFDD0u) {
        ctx->pc = 0x1CFDD0u;
            // 0x1cfdd0: 0x2484f700  addiu       $a0, $a0, -0x900 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964992));
        ctx->pc = 0x1CFDD4u;
        goto label_1cfdd4;
    }
    ctx->pc = 0x1CFDCCu;
    SET_GPR_U32(ctx, 31, 0x1CFDD4u);
    ctx->pc = 0x1CFDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFDCCu;
            // 0x1cfdd0: 0x2484f700  addiu       $a0, $a0, -0x900 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964992));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C4C70u;
    if (runtime->hasFunction(0x1C4C70u)) {
        auto targetFn = runtime->lookupFunction(0x1C4C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFDD4u; }
        if (ctx->pc != 0x1CFDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__18CMapEffectsManegerFP9mgCCamera_0x1c4c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFDD4u; }
        if (ctx->pc != 0x1CFDD4u) { return; }
    }
    ctx->pc = 0x1CFDD4u;
label_1cfdd4:
    // 0x1cfdd4: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x1cfdd4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
label_1cfdd8:
    // 0x1cfdd8: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1cfdd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1cfddc:
    // 0x1cfddc: 0x24a55830  addiu       $a1, $a1, 0x5830
    ctx->pc = 0x1cfddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22576));
label_1cfde0:
    // 0x1cfde0: 0xc0704fc  jal         func_1C13F0
label_1cfde4:
    if (ctx->pc == 0x1CFDE4u) {
        ctx->pc = 0x1CFDE4u;
            // 0x1cfde4: 0x24845c10  addiu       $a0, $a0, 0x5C10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23568));
        ctx->pc = 0x1CFDE8u;
        goto label_1cfde8;
    }
    ctx->pc = 0x1CFDE0u;
    SET_GPR_U32(ctx, 31, 0x1CFDE8u);
    ctx->pc = 0x1CFDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFDE0u;
            // 0x1cfde4: 0x24845c10  addiu       $a0, $a0, 0x5C10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C13F0u;
    if (runtime->hasFunction(0x1C13F0u)) {
        auto targetFn = runtime->lookupFunction(0x1C13F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFDE8u; }
        if (ctx->pc != 0x1CFDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__17CHealingEffectManFP9mgCCamera_0x1c13f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFDE8u; }
        if (ctx->pc != 0x1CFDE8u) { return; }
    }
    ctx->pc = 0x1CFDE8u;
label_1cfde8:
    // 0x1cfde8: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1cfde8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1cfdec:
    // 0x1cfdec: 0xc0716b8  jal         func_1C5AE0
label_1cfdf0:
    if (ctx->pc == 0x1CFDF0u) {
        ctx->pc = 0x1CFDF0u;
            // 0x1cfdf0: 0x24840320  addiu       $a0, $a0, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 800));
        ctx->pc = 0x1CFDF4u;
        goto label_1cfdf4;
    }
    ctx->pc = 0x1CFDECu;
    SET_GPR_U32(ctx, 31, 0x1CFDF4u);
    ctx->pc = 0x1CFDF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFDECu;
            // 0x1cfdf0: 0x24840320  addiu       $a0, $a0, 0x320 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5AE0u;
    if (runtime->hasFunction(0x1C5AE0u)) {
        auto targetFn = runtime->lookupFunction(0x1C5AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFDF4u; }
        if (ctx->pc != 0x1CFDF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__15BattleEffectManFv_0x1c5ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFDF4u; }
        if (ctx->pc != 0x1CFDF4u) { return; }
    }
    ctx->pc = 0x1CFDF4u;
label_1cfdf4:
    // 0x1cfdf4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cfdf4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cfdf8:
    // 0x1cfdf8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1cfdf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cfdfc:
    // 0x1cfdfc: 0x3c0201eb  lui         $v0, 0x1EB
    ctx->pc = 0x1cfdfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)491 << 16));
label_1cfe00:
    // 0x1cfe00: 0x24427980  addiu       $v0, $v0, 0x7980
    ctx->pc = 0x1cfe00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 31104));
label_1cfe04:
    // 0x1cfe04: 0x519021  addu        $s2, $v0, $s1
    ctx->pc = 0x1cfe04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1cfe08:
    // 0x1cfe08: 0xc071748  jal         func_1C5D20
label_1cfe0c:
    if (ctx->pc == 0x1CFE0Cu) {
        ctx->pc = 0x1CFE0Cu;
            // 0x1cfe0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CFE10u;
        goto label_1cfe10;
    }
    ctx->pc = 0x1CFE08u;
    SET_GPR_U32(ctx, 31, 0x1CFE10u);
    ctx->pc = 0x1CFE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFE08u;
            // 0x1cfe0c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5D20u;
    if (runtime->hasFunction(0x1C5D20u)) {
        auto targetFn = runtime->lookupFunction(0x1C5D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFE10u; }
        if (ctx->pc != 0x1CFE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__14CWeaponElementFv_0x1c5d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFE10u; }
        if (ctx->pc != 0x1CFE10u) { return; }
    }
    ctx->pc = 0x1CFE10u;
label_1cfe10:
    // 0x1cfe10: 0xc071768  jal         func_1C5DA0
label_1cfe14:
    if (ctx->pc == 0x1CFE14u) {
        ctx->pc = 0x1CFE14u;
            // 0x1cfe14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CFE18u;
        goto label_1cfe18;
    }
    ctx->pc = 0x1CFE10u;
    SET_GPR_U32(ctx, 31, 0x1CFE18u);
    ctx->pc = 0x1CFE14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFE10u;
            // 0x1cfe14: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C5DA0u;
    if (runtime->hasFunction(0x1C5DA0u)) {
        auto targetFn = runtime->lookupFunction(0x1C5DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFE18u; }
        if (ctx->pc != 0x1CFE18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__14CWeaponElementFv_0x1c5da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFE18u; }
        if (ctx->pc != 0x1CFE18u) { return; }
    }
    ctx->pc = 0x1CFE18u;
label_1cfe18:
    // 0x1cfe18: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cfe18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1cfe1c:
    // 0x1cfe1c: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x1cfe1cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
label_1cfe20:
    // 0x1cfe20: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_1cfe24:
    if (ctx->pc == 0x1CFE24u) {
        ctx->pc = 0x1CFE24u;
            // 0x1cfe24: 0x263107c0  addiu       $s1, $s1, 0x7C0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1984));
        ctx->pc = 0x1CFE28u;
        goto label_1cfe28;
    }
    ctx->pc = 0x1CFE20u;
    {
        const bool branch_taken_0x1cfe20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFE24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFE20u;
            // 0x1cfe24: 0x263107c0  addiu       $s1, $s1, 0x7C0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfe20) {
            ctx->pc = 0x1CFDFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cfdfc;
        }
    }
    ctx->pc = 0x1CFE28u;
label_1cfe28:
    // 0x1cfe28: 0xc077268  jal         func_1DC9A0
label_1cfe2c:
    if (ctx->pc == 0x1CFE2Cu) {
        ctx->pc = 0x1CFE2Cu;
            // 0x1cfe2c: 0x8f848db8  lw          $a0, -0x7248($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
        ctx->pc = 0x1CFE30u;
        goto label_1cfe30;
    }
    ctx->pc = 0x1CFE28u;
    SET_GPR_U32(ctx, 31, 0x1CFE30u);
    ctx->pc = 0x1CFE2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFE28u;
            // 0x1cfe2c: 0x8f848db8  lw          $a0, -0x7248($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC9A0u;
    if (runtime->hasFunction(0x1DC9A0u)) {
        auto targetFn = runtime->lookupFunction(0x1DC9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFE30u; }
        if (ctx->pc != 0x1CFE30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawPiyori__11CMonsterManFv_0x1dc9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFE30u; }
        if (ctx->pc != 0x1CFE30u) { return; }
    }
    ctx->pc = 0x1CFE30u;
label_1cfe30:
    // 0x1cfe30: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1cfe30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1cfe34:
    // 0x1cfe34: 0xc07041c  jal         func_1C1070
label_1cfe38:
    if (ctx->pc == 0x1CFE38u) {
        ctx->pc = 0x1CFE38u;
            // 0x1cfe38: 0x24845f40  addiu       $a0, $a0, 0x5F40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24384));
        ctx->pc = 0x1CFE3Cu;
        goto label_1cfe3c;
    }
    ctx->pc = 0x1CFE34u;
    SET_GPR_U32(ctx, 31, 0x1CFE3Cu);
    ctx->pc = 0x1CFE38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFE34u;
            // 0x1cfe38: 0x24845f40  addiu       $a0, $a0, 0x5F40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1070u;
    if (runtime->hasFunction(0x1C1070u)) {
        auto targetFn = runtime->lookupFunction(0x1C1070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFE3Cu; }
        if (ctx->pc != 0x1CFE3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__15CMiniEffPrimManFv_0x1c1070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFE3Cu; }
        if (ctx->pc != 0x1CFE3Cu) { return; }
    }
    ctx->pc = 0x1CFE3Cu;
label_1cfe3c:
    // 0x1cfe3c: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x1cfe3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
label_1cfe40:
    // 0x1cfe40: 0xc070698  jal         func_1C1A60
label_1cfe44:
    if (ctx->pc == 0x1CFE44u) {
        ctx->pc = 0x1CFE44u;
            // 0x1cfe44: 0x24847960  addiu       $a0, $a0, 0x7960 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31072));
        ctx->pc = 0x1CFE48u;
        goto label_1cfe48;
    }
    ctx->pc = 0x1CFE40u;
    SET_GPR_U32(ctx, 31, 0x1CFE48u);
    ctx->pc = 0x1CFE44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFE40u;
            // 0x1cfe44: 0x24847960  addiu       $a0, $a0, 0x7960 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31072));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1A60u;
    if (runtime->hasFunction(0x1C1A60u)) {
        auto targetFn = runtime->lookupFunction(0x1C1A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFE48u; }
        if (ctx->pc != 0x1CFE48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__14CSwordLuminousFv_0x1c1a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFE48u; }
        if (ctx->pc != 0x1CFE48u) { return; }
    }
    ctx->pc = 0x1CFE48u;
label_1cfe48:
    // 0x1cfe48: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x1cfe48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
label_1cfe4c:
    // 0x1cfe4c: 0xc06da1c  jal         func_1B6870
label_1cfe50:
    if (ctx->pc == 0x1CFE50u) {
        ctx->pc = 0x1CFE50u;
            // 0x1cfe50: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->pc = 0x1CFE54u;
        goto label_1cfe54;
    }
    ctx->pc = 0x1CFE4Cu;
    SET_GPR_U32(ctx, 31, 0x1CFE54u);
    ctx->pc = 0x1CFE50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFE4Cu;
            // 0x1cfe50: 0x24840080  addiu       $a0, $a0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B6870u;
    if (runtime->hasFunction(0x1B6870u)) {
        auto targetFn = runtime->lookupFunction(0x1B6870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFE54u; }
        if (ctx->pc != 0x1CFE54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__18CRocketLauncherManFv_0x1b6870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFE54u; }
        if (ctx->pc != 0x1CFE54u) { return; }
    }
    ctx->pc = 0x1CFE54u;
label_1cfe54:
    // 0x1cfe54: 0x3c0401eb  lui         $a0, 0x1EB
    ctx->pc = 0x1cfe54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)491 << 16));
label_1cfe58:
    // 0x1cfe58: 0xc06df64  jal         func_1B7D90
label_1cfe5c:
    if (ctx->pc == 0x1CFE5Cu) {
        ctx->pc = 0x1CFE5Cu;
            // 0x1cfe5c: 0x24842990  addiu       $a0, $a0, 0x2990 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10640));
        ctx->pc = 0x1CFE60u;
        goto label_1cfe60;
    }
    ctx->pc = 0x1CFE58u;
    SET_GPR_U32(ctx, 31, 0x1CFE60u);
    ctx->pc = 0x1CFE5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFE58u;
            // 0x1cfe5c: 0x24842990  addiu       $a0, $a0, 0x2990 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B7D90u;
    if (runtime->hasFunction(0x1B7D90u)) {
        auto targetFn = runtime->lookupFunction(0x1B7D90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFE60u; }
        if (ctx->pc != 0x1CFE60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__12CLaserGunManFv_0x1b7d90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFE60u; }
        if (ctx->pc != 0x1CFE60u) { return; }
    }
    ctx->pc = 0x1CFE60u;
label_1cfe60:
    // 0x1cfe60: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1cfe60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1cfe64:
    // 0x1cfe64: 0x2405006b  addiu       $a1, $zero, 0x6B
    ctx->pc = 0x1cfe64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
label_1cfe68:
    // 0x1cfe68: 0xc04ba14  jal         func_12E850
label_1cfe6c:
    if (ctx->pc == 0x1CFE6Cu) {
        ctx->pc = 0x1CFE6Cu;
            // 0x1cfe6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CFE70u;
        goto label_1cfe70;
    }
    ctx->pc = 0x1CFE68u;
    SET_GPR_U32(ctx, 31, 0x1CFE70u);
    ctx->pc = 0x1CFE6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFE68u;
            // 0x1cfe6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFE70u; }
        if (ctx->pc != 0x1CFE70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFE70u; }
        if (ctx->pc != 0x1CFE70u) { return; }
    }
    ctx->pc = 0x1CFE70u;
label_1cfe70:
    // 0x1cfe70: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x1cfe70u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cfe74:
    // 0x1cfe74: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1cfe74u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cfe78:
    // 0x1cfe78: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cfe78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cfe7c:
    // 0x1cfe7c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1cfe7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cfe80:
    // 0x1cfe80: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1cfe80u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cfe84:
    // 0x1cfe84: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1cfe84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cfe88:
    // 0x1cfe88: 0x3c0201ec  lui         $v0, 0x1EC
    ctx->pc = 0x1cfe88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)492 << 16));
label_1cfe8c:
    // 0x1cfe8c: 0x2442b780  addiu       $v0, $v0, -0x4880
    ctx->pc = 0x1cfe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948736));
label_1cfe90:
    // 0x1cfe90: 0xc0702ac  jal         func_1C0AB0
label_1cfe94:
    if (ctx->pc == 0x1CFE94u) {
        ctx->pc = 0x1CFE94u;
            // 0x1cfe94: 0x542021  addu        $a0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->pc = 0x1CFE98u;
        goto label_1cfe98;
    }
    ctx->pc = 0x1CFE90u;
    SET_GPR_U32(ctx, 31, 0x1CFE98u);
    ctx->pc = 0x1CFE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFE90u;
            // 0x1cfe94: 0x542021  addu        $a0, $v0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C0AB0u;
    if (runtime->hasFunction(0x1C0AB0u)) {
        auto targetFn = runtime->lookupFunction(0x1C0AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFE98u; }
        if (ctx->pc != 0x1CFE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__12CSparcEffectFv_0x1c0ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFE98u; }
        if (ctx->pc != 0x1CFE98u) { return; }
    }
    ctx->pc = 0x1CFE98u;
label_1cfe98:
    // 0x1cfe98: 0x3c0201ec  lui         $v0, 0x1EC
    ctx->pc = 0x1cfe98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)492 << 16));
label_1cfe9c:
    // 0x1cfe9c: 0x2442bba0  addiu       $v0, $v0, -0x4460
    ctx->pc = 0x1cfe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294949792));
label_1cfea0:
    // 0x1cfea0: 0xc070178  jal         func_1C05E0
label_1cfea4:
    if (ctx->pc == 0x1CFEA4u) {
        ctx->pc = 0x1CFEA4u;
            // 0x1cfea4: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->pc = 0x1CFEA8u;
        goto label_1cfea8;
    }
    ctx->pc = 0x1CFEA0u;
    SET_GPR_U32(ctx, 31, 0x1CFEA8u);
    ctx->pc = 0x1CFEA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFEA0u;
            // 0x1cfea4: 0x502021  addu        $a0, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C05E0u;
    if (runtime->hasFunction(0x1C05E0u)) {
        auto targetFn = runtime->lookupFunction(0x1C05E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFEA8u; }
        if (ctx->pc != 0x1CFEA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__8CThunderFv_0x1c05e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFEA8u; }
        if (ctx->pc != 0x1CFEA8u) { return; }
    }
    ctx->pc = 0x1CFEA8u;
label_1cfea8:
    // 0x1cfea8: 0x3c0201ec  lui         $v0, 0x1EC
    ctx->pc = 0x1cfea8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)492 << 16));
label_1cfeac:
    // 0x1cfeac: 0x24420e20  addiu       $v0, $v0, 0xE20
    ctx->pc = 0x1cfeacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3616));
label_1cfeb0:
    // 0x1cfeb0: 0xc070038  jal         func_1C00E0
label_1cfeb4:
    if (ctx->pc == 0x1CFEB4u) {
        ctx->pc = 0x1CFEB4u;
            // 0x1cfeb4: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->pc = 0x1CFEB8u;
        goto label_1cfeb8;
    }
    ctx->pc = 0x1CFEB0u;
    SET_GPR_U32(ctx, 31, 0x1CFEB8u);
    ctx->pc = 0x1CFEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFEB0u;
            // 0x1cfeb4: 0x512021  addu        $a0, $v0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C00E0u;
    if (runtime->hasFunction(0x1C00E0u)) {
        auto targetFn = runtime->lookupFunction(0x1C00E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFEB8u; }
        if (ctx->pc != 0x1CFEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__8CTornadoFv_0x1c00e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFEB8u; }
        if (ctx->pc != 0x1CFEB8u) { return; }
    }
    ctx->pc = 0x1CFEB8u;
label_1cfeb8:
    // 0x1cfeb8: 0x3c0201ec  lui         $v0, 0x1EC
    ctx->pc = 0x1cfeb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)492 << 16));
label_1cfebc:
    // 0x1cfebc: 0x24422320  addiu       $v0, $v0, 0x2320
    ctx->pc = 0x1cfebcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8992));
label_1cfec0:
    // 0x1cfec0: 0xc06fc48  jal         func_1BF120
label_1cfec4:
    if (ctx->pc == 0x1CFEC4u) {
        ctx->pc = 0x1CFEC4u;
            // 0x1cfec4: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->pc = 0x1CFEC8u;
        goto label_1cfec8;
    }
    ctx->pc = 0x1CFEC0u;
    SET_GPR_U32(ctx, 31, 0x1CFEC8u);
    ctx->pc = 0x1CFEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFEC0u;
            // 0x1cfec4: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BF120u;
    if (runtime->hasFunction(0x1BF120u)) {
        auto targetFn = runtime->lookupFunction(0x1BF120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFEC8u; }
        if (ctx->pc != 0x1CFEC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__14CChillAfterHitFv_0x1bf120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFEC8u; }
        if (ctx->pc != 0x1CFEC8u) { return; }
    }
    ctx->pc = 0x1CFEC8u;
label_1cfec8:
    // 0x1cfec8: 0x3c0201ec  lui         $v0, 0x1EC
    ctx->pc = 0x1cfec8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)492 << 16));
label_1cfecc:
    // 0x1cfecc: 0x244250e0  addiu       $v0, $v0, 0x50E0
    ctx->pc = 0x1cfeccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20704));
label_1cfed0:
    // 0x1cfed0: 0xc06fe94  jal         func_1BFA50
label_1cfed4:
    if (ctx->pc == 0x1CFED4u) {
        ctx->pc = 0x1CFED4u;
            // 0x1cfed4: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->pc = 0x1CFED8u;
        goto label_1cfed8;
    }
    ctx->pc = 0x1CFED0u;
    SET_GPR_U32(ctx, 31, 0x1CFED8u);
    ctx->pc = 0x1CFED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFED0u;
            // 0x1cfed4: 0x532021  addu        $a0, $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BFA50u;
    if (runtime->hasFunction(0x1BFA50u)) {
        auto targetFn = runtime->lookupFunction(0x1BFA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFED8u; }
        if (ctx->pc != 0x1CFED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__13CFireAfterHitFv_0x1bfa50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFED8u; }
        if (ctx->pc != 0x1CFED8u) { return; }
    }
    ctx->pc = 0x1CFED8u;
label_1cfed8:
    // 0x1cfed8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1cfed8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1cfedc:
    // 0x1cfedc: 0x269400b0  addiu       $s4, $s4, 0xB0
    ctx->pc = 0x1cfedcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
label_1cfee0:
    // 0x1cfee0: 0x2aa20006  slti        $v0, $s5, 0x6
    ctx->pc = 0x1cfee0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)6) ? 1 : 0);
label_1cfee4:
    // 0x1cfee4: 0x26100dc0  addiu       $s0, $s0, 0xDC0
    ctx->pc = 0x1cfee4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3520));
label_1cfee8:
    // 0x1cfee8: 0x26310380  addiu       $s1, $s1, 0x380
    ctx->pc = 0x1cfee8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 896));
label_1cfeec:
    // 0x1cfeec: 0x265207a0  addiu       $s2, $s2, 0x7A0
    ctx->pc = 0x1cfeecu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1952));
label_1cfef0:
    // 0x1cfef0: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_1cfef4:
    if (ctx->pc == 0x1CFEF4u) {
        ctx->pc = 0x1CFEF4u;
            // 0x1cfef4: 0x26730940  addiu       $s3, $s3, 0x940 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2368));
        ctx->pc = 0x1CFEF8u;
        goto label_1cfef8;
    }
    ctx->pc = 0x1CFEF0u;
    {
        const bool branch_taken_0x1cfef0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CFEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFEF0u;
            // 0x1cfef4: 0x26730940  addiu       $s3, $s3, 0x940 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 2368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cfef0) {
            ctx->pc = 0x1CFE88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cfe88;
        }
    }
    ctx->pc = 0x1CFEF8u;
label_1cfef8:
    // 0x1cfef8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1cfef8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1cfefc:
    // 0x1cfefc: 0x2405004a  addiu       $a1, $zero, 0x4A
    ctx->pc = 0x1cfefcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 74));
label_1cff00:
    // 0x1cff00: 0xc04ba14  jal         func_12E850
label_1cff04:
    if (ctx->pc == 0x1CFF04u) {
        ctx->pc = 0x1CFF04u;
            // 0x1cff04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF08u;
        goto label_1cff08;
    }
    ctx->pc = 0x1CFF00u;
    SET_GPR_U32(ctx, 31, 0x1CFF08u);
    ctx->pc = 0x1CFF04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFF00u;
            // 0x1cff04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFF08u; }
        if (ctx->pc != 0x1CFF08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFF08u; }
        if (ctx->pc != 0x1CFF08u) { return; }
    }
    ctx->pc = 0x1CFF08u;
label_1cff08:
    // 0x1cff08: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cff08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cff0c:
    // 0x1cff0c: 0xc0b22dc  jal         func_2C8B70
label_1cff10:
    if (ctx->pc == 0x1CFF10u) {
        ctx->pc = 0x1CFF10u;
            // 0x1cff10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF14u;
        goto label_1cff14;
    }
    ctx->pc = 0x1CFF0Cu;
    SET_GPR_U32(ctx, 31, 0x1CFF14u);
    ctx->pc = 0x1CFF10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFF0Cu;
            // 0x1cff10: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8B70u;
    if (runtime->hasFunction(0x2C8B70u)) {
        auto targetFn = runtime->lookupFunction(0x2C8B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFF14u; }
        if (ctx->pc != 0x1CFF14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckDrawChara__6CSceneFi_0x2c8b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFF14u; }
        if (ctx->pc != 0x1CFF14u) { return; }
    }
    ctx->pc = 0x1CFF14u;
label_1cff14:
    // 0x1cff14: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1cff18:
    if (ctx->pc == 0x1CFF18u) {
        ctx->pc = 0x1CFF18u;
            // 0x1cff18: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF1Cu;
        goto label_1cff1c;
    }
    ctx->pc = 0x1CFF14u;
    {
        const bool branch_taken_0x1cff14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFF14u;
            // 0x1cff18: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cff14) {
            ctx->pc = 0x1CFF34u;
            goto label_1cff34;
        }
    }
    ctx->pc = 0x1CFF1Cu;
label_1cff1c:
    // 0x1cff1c: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1cff1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1cff20:
    // 0x1cff20: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1cff20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cff24:
    // 0x1cff24: 0x8f3900f4  lw          $t9, 0xF4($t9)
    ctx->pc = 0x1cff24u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 244)));
label_1cff28:
    // 0x1cff28: 0x320f809  jalr        $t9
label_1cff2c:
    if (ctx->pc == 0x1CFF2Cu) {
        ctx->pc = 0x1CFF30u;
        goto label_1cff30;
    }
    ctx->pc = 0x1CFF28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CFF30u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CFF30u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CFF30u; }
            if (ctx->pc != 0x1CFF30u) { return; }
        }
        }
    }
    ctx->pc = 0x1CFF30u;
label_1cff30:
    // 0x1cff30: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1cff30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cff34:
    // 0x1cff34: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cff34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cff38:
    // 0x1cff38: 0xc0b22dc  jal         func_2C8B70
label_1cff3c:
    if (ctx->pc == 0x1CFF3Cu) {
        ctx->pc = 0x1CFF3Cu;
            // 0x1cff3c: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x1CFF40u;
        goto label_1cff40;
    }
    ctx->pc = 0x1CFF38u;
    SET_GPR_U32(ctx, 31, 0x1CFF40u);
    ctx->pc = 0x1CFF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFF38u;
            // 0x1cff3c: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C8B70u;
    if (runtime->hasFunction(0x2C8B70u)) {
        auto targetFn = runtime->lookupFunction(0x2C8B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFF40u; }
        if (ctx->pc != 0x1CFF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckDrawChara__6CSceneFi_0x2c8b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFF40u; }
        if (ctx->pc != 0x1CFF40u) { return; }
    }
    ctx->pc = 0x1CFF40u;
label_1cff40:
    // 0x1cff40: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_1cff44:
    if (ctx->pc == 0x1CFF44u) {
        ctx->pc = 0x1CFF48u;
        goto label_1cff48;
    }
    ctx->pc = 0x1CFF40u;
    {
        const bool branch_taken_0x1cff40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cff40) {
            ctx->pc = 0x1CFF88u;
            goto label_1cff88;
        }
    }
    ctx->pc = 0x1CFF48u;
label_1cff48:
    // 0x1cff48: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cff48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cff4c:
    // 0x1cff4c: 0x26060008  addiu       $a2, $s0, 0x8
    ctx->pc = 0x1cff4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_1cff50:
    // 0x1cff50: 0xc0a1208  jal         func_284820
label_1cff54:
    if (ctx->pc == 0x1CFF54u) {
        ctx->pc = 0x1CFF54u;
            // 0x1cff54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1CFF58u;
        goto label_1cff58;
    }
    ctx->pc = 0x1CFF50u;
    SET_GPR_U32(ctx, 31, 0x1CFF58u);
    ctx->pc = 0x1CFF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFF50u;
            // 0x1cff54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284820u;
    if (runtime->hasFunction(0x284820u)) {
        auto targetFn = runtime->lookupFunction(0x284820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFF58u; }
        if (ctx->pc != 0x1CFF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetType__6CSceneFii_0x284820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFF58u; }
        if (ctx->pc != 0x1CFF58u) { return; }
    }
    ctx->pc = 0x1CFF58u;
label_1cff58:
    // 0x1cff58: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1cff58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cff5c:
    // 0x1cff5c: 0x1043000a  beq         $v0, $v1, . + 4 + (0xA << 2)
label_1cff60:
    if (ctx->pc == 0x1CFF60u) {
        ctx->pc = 0x1CFF64u;
        goto label_1cff64;
    }
    ctx->pc = 0x1CFF5Cu;
    {
        const bool branch_taken_0x1cff5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x1cff5c) {
            ctx->pc = 0x1CFF88u;
            goto label_1cff88;
        }
    }
    ctx->pc = 0x1CFF64u;
label_1cff64:
    // 0x1cff64: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1cff64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1cff68:
    // 0x1cff68: 0xc0a0ed8  jal         func_283B60
label_1cff6c:
    if (ctx->pc == 0x1CFF6Cu) {
        ctx->pc = 0x1CFF6Cu;
            // 0x1cff6c: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->pc = 0x1CFF70u;
        goto label_1cff70;
    }
    ctx->pc = 0x1CFF68u;
    SET_GPR_U32(ctx, 31, 0x1CFF70u);
    ctx->pc = 0x1CFF6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFF68u;
            // 0x1cff6c: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFF70u; }
        if (ctx->pc != 0x1CFF70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFF70u; }
        if (ctx->pc != 0x1CFF70u) { return; }
    }
    ctx->pc = 0x1CFF70u;
label_1cff70:
    // 0x1cff70: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1cff74:
    if (ctx->pc == 0x1CFF74u) {
        ctx->pc = 0x1CFF78u;
        goto label_1cff78;
    }
    ctx->pc = 0x1CFF70u;
    {
        const bool branch_taken_0x1cff70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cff70) {
            ctx->pc = 0x1CFF88u;
            goto label_1cff88;
        }
    }
    ctx->pc = 0x1CFF78u;
label_1cff78:
    // 0x1cff78: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x1cff78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1cff7c:
    // 0x1cff7c: 0x8f3900f4  lw          $t9, 0xF4($t9)
    ctx->pc = 0x1cff7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 244)));
label_1cff80:
    // 0x1cff80: 0x320f809  jalr        $t9
label_1cff84:
    if (ctx->pc == 0x1CFF84u) {
        ctx->pc = 0x1CFF84u;
            // 0x1cff84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CFF88u;
        goto label_1cff88;
    }
    ctx->pc = 0x1CFF80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1CFF88u);
        ctx->pc = 0x1CFF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFF80u;
            // 0x1cff84: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CFF88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CFF88u; }
            if (ctx->pc != 0x1CFF88u) { return; }
        }
        }
    }
    ctx->pc = 0x1CFF88u;
label_1cff88:
    // 0x1cff88: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1cff88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1cff8c:
    // 0x1cff8c: 0x2a020010  slti        $v0, $s0, 0x10
    ctx->pc = 0x1cff8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16) ? 1 : 0);
label_1cff90:
    // 0x1cff90: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_1cff94:
    if (ctx->pc == 0x1CFF94u) {
        ctx->pc = 0x1CFF98u;
        goto label_1cff98;
    }
    ctx->pc = 0x1CFF90u;
    {
        const bool branch_taken_0x1cff90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cff90) {
            ctx->pc = 0x1CFF34u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cff34;
        }
    }
    ctx->pc = 0x1CFF98u;
label_1cff98:
    // 0x1cff98: 0xc076c4c  jal         func_1DB130
label_1cff9c:
    if (ctx->pc == 0x1CFF9Cu) {
        ctx->pc = 0x1CFF9Cu;
            // 0x1cff9c: 0x8f848db8  lw          $a0, -0x7248($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
        ctx->pc = 0x1CFFA0u;
        goto label_1cffa0;
    }
    ctx->pc = 0x1CFF98u;
    SET_GPR_U32(ctx, 31, 0x1CFFA0u);
    ctx->pc = 0x1CFF9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFF98u;
            // 0x1cff9c: 0x8f848db8  lw          $a0, -0x7248($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB130u;
    if (runtime->hasFunction(0x1DB130u)) {
        auto targetFn = runtime->lookupFunction(0x1DB130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFFA0u; }
        if (ctx->pc != 0x1CFFA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawEffectScript__11CMonsterManFv_0x1db130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFFA0u; }
        if (ctx->pc != 0x1CFFA0u) { return; }
    }
    ctx->pc = 0x1CFFA0u;
label_1cffa0:
    // 0x1cffa0: 0x8f838db0  lw          $v1, -0x7250($gp)
    ctx->pc = 0x1cffa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1cffa4:
    // 0x1cffa4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1cffa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1cffa8:
    // 0x1cffa8: 0x8063008c  lb          $v1, 0x8C($v1)
    ctx->pc = 0x1cffa8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 140)));
label_1cffac:
    // 0x1cffac: 0x1462004d  bne         $v1, $v0, . + 4 + (0x4D << 2)
label_1cffb0:
    if (ctx->pc == 0x1CFFB0u) {
        ctx->pc = 0x1CFFB0u;
            // 0x1cffb0: 0x27a41e10  addiu       $a0, $sp, 0x1E10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 7696));
        ctx->pc = 0x1CFFB4u;
        goto label_1cffb4;
    }
    ctx->pc = 0x1CFFACu;
    {
        const bool branch_taken_0x1cffac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CFFB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFFACu;
            // 0x1cffb0: 0x27a41e10  addiu       $a0, $sp, 0x1E10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 7696));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cffac) {
            ctx->pc = 0x1D00E4u;
            goto label_1d00e4;
        }
    }
    ctx->pc = 0x1CFFB4u;
label_1cffb4:
    // 0x1cffb4: 0xc04d0e8  jal         func_1343A0
label_1cffb8:
    if (ctx->pc == 0x1CFFB8u) {
        ctx->pc = 0x1CFFBCu;
        goto label_1cffbc;
    }
    ctx->pc = 0x1CFFB4u;
    SET_GPR_U32(ctx, 31, 0x1CFFBCu);
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFFBCu; }
        if (ctx->pc != 0x1CFFBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFFBCu; }
        if (ctx->pc != 0x1CFFBCu) { return; }
    }
    ctx->pc = 0x1CFFBCu;
label_1cffbc:
    // 0x1cffbc: 0x27a41e10  addiu       $a0, $sp, 0x1E10
    ctx->pc = 0x1cffbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 7696));
label_1cffc0:
    // 0x1cffc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1cffc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cffc4:
    // 0x1cffc4: 0xc04d104  jal         func_134410
label_1cffc8:
    if (ctx->pc == 0x1CFFC8u) {
        ctx->pc = 0x1CFFC8u;
            // 0x1cffc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CFFCCu;
        goto label_1cffcc;
    }
    ctx->pc = 0x1CFFC4u;
    SET_GPR_U32(ctx, 31, 0x1CFFCCu);
    ctx->pc = 0x1CFFC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFFC4u;
            // 0x1cffc8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134410u;
    if (runtime->hasFunction(0x134410u)) {
        auto targetFn = runtime->lookupFunction(0x134410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFFCCu; }
        if (ctx->pc != 0x1CFFCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11mgCDrawPrimFP9mgCMemoryP13sceVif1Packet_0x134410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFFCCu; }
        if (ctx->pc != 0x1CFFCCu) { return; }
    }
    ctx->pc = 0x1CFFCCu;
label_1cffcc:
    // 0x1cffcc: 0xc079f5c  jal         func_1E7D70
label_1cffd0:
    if (ctx->pc == 0x1CFFD0u) {
        ctx->pc = 0x1CFFD0u;
            // 0x1cffd0: 0x27a41e10  addiu       $a0, $sp, 0x1E10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 7696));
        ctx->pc = 0x1CFFD4u;
        goto label_1cffd4;
    }
    ctx->pc = 0x1CFFCCu;
    SET_GPR_U32(ctx, 31, 0x1CFFD4u);
    ctx->pc = 0x1CFFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFFCCu;
            // 0x1cffd0: 0x27a41e10  addiu       $a0, $sp, 0x1E10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 7696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E7D70u;
    if (runtime->hasFunction(0x1E7D70u)) {
        auto targetFn = runtime->lookupFunction(0x1E7D70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFFD4u; }
        if (ctx->pc != 0x1CFFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Preset2D__10CPreSpriteFv_0x1e7d70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFFD4u; }
        if (ctx->pc != 0x1CFFD4u) { return; }
    }
    ctx->pc = 0x1CFFD4u;
label_1cffd4:
    // 0x1cffd4: 0x27a41e10  addiu       $a0, $sp, 0x1E10
    ctx->pc = 0x1cffd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 7696));
label_1cffd8:
    // 0x1cffd8: 0xc04d428  jal         func_1350A0
label_1cffdc:
    if (ctx->pc == 0x1CFFDCu) {
        ctx->pc = 0x1CFFDCu;
            // 0x1cffdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CFFE0u;
        goto label_1cffe0;
    }
    ctx->pc = 0x1CFFD8u;
    SET_GPR_U32(ctx, 31, 0x1CFFE0u);
    ctx->pc = 0x1CFFDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFFD8u;
            // 0x1cffdc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350A0u;
    if (runtime->hasFunction(0x1350A0u)) {
        auto targetFn = runtime->lookupFunction(0x1350A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFFE0u; }
        if (ctx->pc != 0x1CFFE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TextureMapEnable__11mgCDrawPrimFi_0x1350a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFFE0u; }
        if (ctx->pc != 0x1CFFE0u) { return; }
    }
    ctx->pc = 0x1CFFE0u;
label_1cffe0:
    // 0x1cffe0: 0x27a41e10  addiu       $a0, $sp, 0x1E10
    ctx->pc = 0x1cffe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 7696));
label_1cffe4:
    // 0x1cffe4: 0xc04d44c  jal         func_135130
label_1cffe8:
    if (ctx->pc == 0x1CFFE8u) {
        ctx->pc = 0x1CFFE8u;
            // 0x1cffe8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CFFECu;
        goto label_1cffec;
    }
    ctx->pc = 0x1CFFE4u;
    SET_GPR_U32(ctx, 31, 0x1CFFECu);
    ctx->pc = 0x1CFFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFFE4u;
            // 0x1cffe8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x135130u;
    if (runtime->hasFunction(0x135130u)) {
        auto targetFn = runtime->lookupFunction(0x135130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFFECu; }
        if (ctx->pc != 0x1CFFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Coord__11mgCDrawPrimFi_0x135130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFFECu; }
        if (ctx->pc != 0x1CFFECu) { return; }
    }
    ctx->pc = 0x1CFFECu;
label_1cffec:
    // 0x1cffec: 0x27a41e10  addiu       $a0, $sp, 0x1E10
    ctx->pc = 0x1cffecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 7696));
label_1cfff0:
    // 0x1cfff0: 0xc04d434  jal         func_1350D0
label_1cfff4:
    if (ctx->pc == 0x1CFFF4u) {
        ctx->pc = 0x1CFFF4u;
            // 0x1cfff4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1CFFF8u;
        goto label_1cfff8;
    }
    ctx->pc = 0x1CFFF0u;
    SET_GPR_U32(ctx, 31, 0x1CFFF8u);
    ctx->pc = 0x1CFFF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFFF0u;
            // 0x1cfff4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1350D0u;
    if (runtime->hasFunction(0x1350D0u)) {
        auto targetFn = runtime->lookupFunction(0x1350D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFFF8u; }
        if (ctx->pc != 0x1CFFF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Shading__11mgCDrawPrimFi_0x1350d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CFFF8u; }
        if (ctx->pc != 0x1CFFF8u) { return; }
    }
    ctx->pc = 0x1CFFF8u;
label_1cfff8:
    // 0x1cfff8: 0x27a41e10  addiu       $a0, $sp, 0x1E10
    ctx->pc = 0x1cfff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 7696));
label_1cfffc:
    // 0x1cfffc: 0xc04d3e4  jal         func_134F90
label_1d0000:
    if (ctx->pc == 0x1D0000u) {
        ctx->pc = 0x1D0000u;
            // 0x1d0000: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0004u;
        goto label_1d0004;
    }
    ctx->pc = 0x1CFFFCu;
    SET_GPR_U32(ctx, 31, 0x1D0004u);
    ctx->pc = 0x1D0000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CFFFCu;
            // 0x1d0000: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134F90u;
    if (runtime->hasFunction(0x134F90u)) {
        auto targetFn = runtime->lookupFunction(0x134F90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0004u; }
        if (ctx->pc != 0x1D0004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTestEnable__11mgCDrawPrimFi_0x134f90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0004u; }
        if (ctx->pc != 0x1D0004u) { return; }
    }
    ctx->pc = 0x1D0004u;
label_1d0004:
    // 0x1d0004: 0x27a41e10  addiu       $a0, $sp, 0x1E10
    ctx->pc = 0x1d0004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 7696));
label_1d0008:
    // 0x1d0008: 0xc04d3fc  jal         func_134FF0
label_1d000c:
    if (ctx->pc == 0x1D000Cu) {
        ctx->pc = 0x1D000Cu;
            // 0x1d000c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1D0010u;
        goto label_1d0010;
    }
    ctx->pc = 0x1D0008u;
    SET_GPR_U32(ctx, 31, 0x1D0010u);
    ctx->pc = 0x1D000Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0008u;
            // 0x1d000c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134FF0u;
    if (runtime->hasFunction(0x134FF0u)) {
        auto targetFn = runtime->lookupFunction(0x134FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0010u; }
        if (ctx->pc != 0x1D0010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DepthTest__11mgCDrawPrimFi_0x134ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0010u; }
        if (ctx->pc != 0x1D0010u) { return; }
    }
    ctx->pc = 0x1D0010u;
label_1d0010:
    // 0x1d0010: 0x27a41e10  addiu       $a0, $sp, 0x1E10
    ctx->pc = 0x1d0010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 7696));
label_1d0014:
    // 0x1d0014: 0xc04d3b8  jal         func_134EE0
label_1d0018:
    if (ctx->pc == 0x1D0018u) {
        ctx->pc = 0x1D0018u;
            // 0x1d0018: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1D001Cu;
        goto label_1d001c;
    }
    ctx->pc = 0x1D0014u;
    SET_GPR_U32(ctx, 31, 0x1D001Cu);
    ctx->pc = 0x1D0018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0014u;
            // 0x1d0018: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134EE0u;
    if (runtime->hasFunction(0x134EE0u)) {
        auto targetFn = runtime->lookupFunction(0x134EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D001Cu; }
        if (ctx->pc != 0x1D001Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AlphaBlend__11mgCDrawPrimFi_0x134ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D001Cu; }
        if (ctx->pc != 0x1D001Cu) { return; }
    }
    ctx->pc = 0x1D001Cu;
label_1d001c:
    // 0x1d001c: 0x27a41e10  addiu       $a0, $sp, 0x1E10
    ctx->pc = 0x1d001cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 7696));
label_1d0020:
    // 0x1d0020: 0xc04d128  jal         func_1344A0
label_1d0024:
    if (ctx->pc == 0x1D0024u) {
        ctx->pc = 0x1D0024u;
            // 0x1d0024: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1D0028u;
        goto label_1d0028;
    }
    ctx->pc = 0x1D0020u;
    SET_GPR_U32(ctx, 31, 0x1D0028u);
    ctx->pc = 0x1D0024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0020u;
            // 0x1d0024: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0028u; }
        if (ctx->pc != 0x1D0028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0028u; }
        if (ctx->pc != 0x1D0028u) { return; }
    }
    ctx->pc = 0x1D0028u;
label_1d0028:
    // 0x1d0028: 0x24100010  addiu       $s0, $zero, 0x10
    ctx->pc = 0x1d0028u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1d002c:
    // 0x1d002c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d002cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0030:
    // 0x1d0030: 0xc0724a4  jal         func_1C9290
label_1d0034:
    if (ctx->pc == 0x1D0034u) {
        ctx->pc = 0x1D0034u;
            // 0x1d0034: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x1D0038u;
        goto label_1d0038;
    }
    ctx->pc = 0x1D0030u;
    SET_GPR_U32(ctx, 31, 0x1D0038u);
    ctx->pc = 0x1D0034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0030u;
            // 0x1d0034: 0x24040040  addiu       $a0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0038u; }
        if (ctx->pc != 0x1D0038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0038u; }
        if (ctx->pc != 0x1D0038u) { return; }
    }
    ctx->pc = 0x1D0038u;
label_1d0038:
    // 0x1d0038: 0x2454ffe0  addiu       $s4, $v0, -0x20
    ctx->pc = 0x1d0038u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_1d003c:
    // 0x1d003c: 0xc0724a4  jal         func_1C9290
label_1d0040:
    if (ctx->pc == 0x1D0040u) {
        ctx->pc = 0x1D0040u;
            // 0x1d0040: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x1D0044u;
        goto label_1d0044;
    }
    ctx->pc = 0x1D003Cu;
    SET_GPR_U32(ctx, 31, 0x1D0044u);
    ctx->pc = 0x1D0040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D003Cu;
            // 0x1d0040: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0044u; }
        if (ctx->pc != 0x1D0044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0044u; }
        if (ctx->pc != 0x1D0044u) { return; }
    }
    ctx->pc = 0x1D0044u;
label_1d0044:
    // 0x1d0044: 0x2452ff80  addiu       $s2, $v0, -0x80
    ctx->pc = 0x1d0044u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967168));
label_1d0048:
    // 0x1d0048: 0xc0724a4  jal         func_1C9290
label_1d004c:
    if (ctx->pc == 0x1D004Cu) {
        ctx->pc = 0x1D004Cu;
            // 0x1d004c: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x1D0050u;
        goto label_1d0050;
    }
    ctx->pc = 0x1D0048u;
    SET_GPR_U32(ctx, 31, 0x1D0050u);
    ctx->pc = 0x1D004Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0048u;
            // 0x1d004c: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0050u; }
        if (ctx->pc != 0x1D0050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0050u; }
        if (ctx->pc != 0x1D0050u) { return; }
    }
    ctx->pc = 0x1D0050u;
label_1d0050:
    // 0x1d0050: 0x29823  negu        $s3, $v0
    ctx->pc = 0x1d0050u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
label_1d0054:
    // 0x1d0054: 0xc0724a4  jal         func_1C9290
label_1d0058:
    if (ctx->pc == 0x1D0058u) {
        ctx->pc = 0x1D0058u;
            // 0x1d0058: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1D005Cu;
        goto label_1d005c;
    }
    ctx->pc = 0x1D0054u;
    SET_GPR_U32(ctx, 31, 0x1D005Cu);
    ctx->pc = 0x1D0058u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0054u;
            // 0x1d0058: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D005Cu; }
        if (ctx->pc != 0x1D005Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D005Cu; }
        if (ctx->pc != 0x1D005Cu) { return; }
    }
    ctx->pc = 0x1D005Cu;
label_1d005c:
    // 0x1d005c: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1d005cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d0060:
    // 0x1d0060: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1d0060u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d0064:
    // 0x1d0064: 0x27a41e10  addiu       $a0, $sp, 0x1E10
    ctx->pc = 0x1d0064u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 7696));
label_1d0068:
    // 0x1d0068: 0x24070084  addiu       $a3, $zero, 0x84
    ctx->pc = 0x1d0068u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_1d006c:
    // 0x1d006c: 0xc04d320  jal         func_134C80
label_1d0070:
    if (ctx->pc == 0x1D0070u) {
        ctx->pc = 0x1D0070u;
            // 0x1d0070: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0074u;
        goto label_1d0074;
    }
    ctx->pc = 0x1D006Cu;
    SET_GPR_U32(ctx, 31, 0x1D0074u);
    ctx->pc = 0x1D0070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D006Cu;
            // 0x1d0070: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0074u; }
        if (ctx->pc != 0x1D0074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0074u; }
        if (ctx->pc != 0x1D0074u) { return; }
    }
    ctx->pc = 0x1D0074u;
label_1d0074:
    // 0x1d0074: 0x2142821  addu        $a1, $s0, $s4
    ctx->pc = 0x1d0074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_1d0078:
    // 0x1d0078: 0x27a41e10  addiu       $a0, $sp, 0x1E10
    ctx->pc = 0x1d0078u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 7696));
label_1d007c:
    // 0x1d007c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1d007cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0080:
    // 0x1d0080: 0xc04d2c8  jal         func_134B20
label_1d0084:
    if (ctx->pc == 0x1D0084u) {
        ctx->pc = 0x1D0084u;
            // 0x1d0084: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0088u;
        goto label_1d0088;
    }
    ctx->pc = 0x1D0080u;
    SET_GPR_U32(ctx, 31, 0x1D0088u);
    ctx->pc = 0x1D0084u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0080u;
            // 0x1d0084: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0088u; }
        if (ctx->pc != 0x1D0088u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0088u; }
        if (ctx->pc != 0x1D0088u) { return; }
    }
    ctx->pc = 0x1D0088u;
label_1d0088:
    // 0x1d0088: 0xc0724a4  jal         func_1C9290
label_1d008c:
    if (ctx->pc == 0x1D008Cu) {
        ctx->pc = 0x1D008Cu;
            // 0x1d008c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x1D0090u;
        goto label_1d0090;
    }
    ctx->pc = 0x1D0088u;
    SET_GPR_U32(ctx, 31, 0x1D0090u);
    ctx->pc = 0x1D008Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0088u;
            // 0x1d008c: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0090u; }
        if (ctx->pc != 0x1D0090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0090u; }
        if (ctx->pc != 0x1D0090u) { return; }
    }
    ctx->pc = 0x1D0090u;
label_1d0090:
    // 0x1d0090: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x1d0090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1d0094:
    // 0x1d0094: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x1d0094u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d0098:
    // 0x1d0098: 0x27a41e10  addiu       $a0, $sp, 0x1E10
    ctx->pc = 0x1d0098u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 7696));
label_1d009c:
    // 0x1d009c: 0x24070084  addiu       $a3, $zero, 0x84
    ctx->pc = 0x1d009cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
label_1d00a0:
    // 0x1d00a0: 0xc04d320  jal         func_134C80
label_1d00a4:
    if (ctx->pc == 0x1D00A4u) {
        ctx->pc = 0x1D00A4u;
            // 0x1d00a4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D00A8u;
        goto label_1d00a8;
    }
    ctx->pc = 0x1D00A0u;
    SET_GPR_U32(ctx, 31, 0x1D00A8u);
    ctx->pc = 0x1D00A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D00A0u;
            // 0x1d00a4: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D00A8u; }
        if (ctx->pc != 0x1D00A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D00A8u; }
        if (ctx->pc != 0x1D00A8u) { return; }
    }
    ctx->pc = 0x1D00A8u;
label_1d00a8:
    // 0x1d00a8: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x1d00a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
label_1d00ac:
    // 0x1d00ac: 0x2122823  subu        $a1, $s0, $s2
    ctx->pc = 0x1d00acu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 18)));
label_1d00b0:
    // 0x1d00b0: 0x533023  subu        $a2, $v0, $s3
    ctx->pc = 0x1d00b0u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_1d00b4:
    // 0x1d00b4: 0x27a41e10  addiu       $a0, $sp, 0x1E10
    ctx->pc = 0x1d00b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 7696));
label_1d00b8:
    // 0x1d00b8: 0xc04d2c8  jal         func_134B20
label_1d00bc:
    if (ctx->pc == 0x1D00BCu) {
        ctx->pc = 0x1D00BCu;
            // 0x1d00bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D00C0u;
        goto label_1d00c0;
    }
    ctx->pc = 0x1D00B8u;
    SET_GPR_U32(ctx, 31, 0x1D00C0u);
    ctx->pc = 0x1D00BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D00B8u;
            // 0x1d00bc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D00C0u; }
        if (ctx->pc != 0x1D00C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D00C0u; }
        if (ctx->pc != 0x1D00C0u) { return; }
    }
    ctx->pc = 0x1D00C0u;
label_1d00c0:
    // 0x1d00c0: 0xc0724a4  jal         func_1C9290
label_1d00c4:
    if (ctx->pc == 0x1D00C4u) {
        ctx->pc = 0x1D00C4u;
            // 0x1d00c4: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x1D00C8u;
        goto label_1d00c8;
    }
    ctx->pc = 0x1D00C0u;
    SET_GPR_U32(ctx, 31, 0x1D00C8u);
    ctx->pc = 0x1D00C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D00C0u;
            // 0x1d00c4: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9290u;
    if (runtime->hasFunction(0x1C9290u)) {
        auto targetFn = runtime->lookupFunction(0x1C9290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D00C8u; }
        if (ctx->pc != 0x1D00C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        iRand__Fi_0x1c9290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D00C8u; }
        if (ctx->pc != 0x1D00C8u) { return; }
    }
    ctx->pc = 0x1D00C8u;
label_1d00c8:
    // 0x1d00c8: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1d00c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1d00cc:
    // 0x1d00cc: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1d00ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1d00d0:
    // 0x1d00d0: 0x2a220084  slti        $v0, $s1, 0x84
    ctx->pc = 0x1d00d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)132) ? 1 : 0);
label_1d00d4:
    // 0x1d00d4: 0x1440ffd6  bnez        $v0, . + 4 + (-0x2A << 2)
label_1d00d8:
    if (ctx->pc == 0x1D00D8u) {
        ctx->pc = 0x1D00D8u;
            // 0x1d00d8: 0x27a41e10  addiu       $a0, $sp, 0x1E10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 7696));
        ctx->pc = 0x1D00DCu;
        goto label_1d00dc;
    }
    ctx->pc = 0x1D00D4u;
    {
        const bool branch_taken_0x1d00d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D00D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D00D4u;
            // 0x1d00d8: 0x27a41e10  addiu       $a0, $sp, 0x1E10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 7696));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d00d4) {
            ctx->pc = 0x1D0030u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d0030;
        }
    }
    ctx->pc = 0x1D00DCu;
label_1d00dc:
    // 0x1d00dc: 0xc04d1a4  jal         func_134690
label_1d00e0:
    if (ctx->pc == 0x1D00E0u) {
        ctx->pc = 0x1D00E4u;
        goto label_1d00e4;
    }
    ctx->pc = 0x1D00DCu;
    SET_GPR_U32(ctx, 31, 0x1D00E4u);
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D00E4u; }
        if (ctx->pc != 0x1D00E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D00E4u; }
        if (ctx->pc != 0x1D00E4u) { return; }
    }
    ctx->pc = 0x1D00E4u;
label_1d00e4:
    // 0x1d00e4: 0xc0c1128  jal         func_3044A0
label_1d00e8:
    if (ctx->pc == 0x1D00E8u) {
        ctx->pc = 0x1D00ECu;
        goto label_1d00ec;
    }
    ctx->pc = 0x1D00E4u;
    SET_GPR_U32(ctx, 31, 0x1D00ECu);
    ctx->pc = 0x3044A0u;
    if (runtime->hasFunction(0x3044A0u)) {
        auto targetFn = runtime->lookupFunction(0x3044A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D00ECu; }
        if (ctx->pc != 0x1D00ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgDrawSubGameChara__Fv_0x3044a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D00ECu; }
        if (ctx->pc != 0x1D00ECu) { return; }
    }
    ctx->pc = 0x1D00ECu;
label_1d00ec:
    // 0x1d00ec: 0xc0c1150  jal         func_304540
label_1d00f0:
    if (ctx->pc == 0x1D00F0u) {
        ctx->pc = 0x1D00F4u;
        goto label_1d00f4;
    }
    ctx->pc = 0x1D00ECu;
    SET_GPR_U32(ctx, 31, 0x1D00F4u);
    ctx->pc = 0x304540u;
    if (runtime->hasFunction(0x304540u)) {
        auto targetFn = runtime->lookupFunction(0x304540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D00F4u; }
        if (ctx->pc != 0x1D00F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgDrawSubGameEffect__Fv_0x304540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D00F4u; }
        if (ctx->pc != 0x1D00F4u) { return; }
    }
    ctx->pc = 0x1D00F4u;
label_1d00f4:
    // 0x1d00f4: 0xc0c116c  jal         func_3045B0
label_1d00f8:
    if (ctx->pc == 0x1D00F8u) {
        ctx->pc = 0x1D00FCu;
        goto label_1d00fc;
    }
    ctx->pc = 0x1D00F4u;
    SET_GPR_U32(ctx, 31, 0x1D00FCu);
    ctx->pc = 0x3045B0u;
    if (runtime->hasFunction(0x3045B0u)) {
        auto targetFn = runtime->lookupFunction(0x3045B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D00FCu; }
        if (ctx->pc != 0x1D00FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sgDrawSubGameSystem__Fv_0x3045b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D00FCu; }
        if (ctx->pc != 0x1D00FCu) { return; }
    }
    ctx->pc = 0x1D00FCu;
label_1d00fc:
    // 0x1d00fc: 0xc0ba55c  jal         func_2E9570
label_1d0100:
    if (ctx->pc == 0x1D0100u) {
        ctx->pc = 0x1D0104u;
        goto label_1d0104;
    }
    ctx->pc = 0x1D00FCu;
    SET_GPR_U32(ctx, 31, 0x1D0104u);
    ctx->pc = 0x2E9570u;
    if (runtime->hasFunction(0x2E9570u)) {
        auto targetFn = runtime->lookupFunction(0x2E9570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0104u; }
        if (ctx->pc != 0x1D0104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSphidaPtr__Fv_0x2e9570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0104u; }
        if (ctx->pc != 0x1D0104u) { return; }
    }
    ctx->pc = 0x1D0104u;
label_1d0104:
    // 0x1d0104: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1d0108:
    if (ctx->pc == 0x1D0108u) {
        ctx->pc = 0x1D0108u;
            // 0x1d0108: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D010Cu;
        goto label_1d010c;
    }
    ctx->pc = 0x1D0104u;
    {
        const bool branch_taken_0x1d0104 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0104u;
            // 0x1d0108: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0104) {
            ctx->pc = 0x1D0114u;
            goto label_1d0114;
        }
    }
    ctx->pc = 0x1D010Cu;
label_1d010c:
    // 0x1d010c: 0xc0bade4  jal         func_2EB790
label_1d0110:
    if (ctx->pc == 0x1D0110u) {
        ctx->pc = 0x1D0114u;
        goto label_1d0114;
    }
    ctx->pc = 0x1D010Cu;
    SET_GPR_U32(ctx, 31, 0x1D0114u);
    ctx->pc = 0x2EB790u;
    if (runtime->hasFunction(0x2EB790u)) {
        auto targetFn = runtime->lookupFunction(0x2EB790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0114u; }
        if (ctx->pc != 0x1D0114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__7CSphidaFv_0x2eb790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0114u; }
        if (ctx->pc != 0x1D0114u) { return; }
    }
    ctx->pc = 0x1D0114u;
label_1d0114:
    // 0x1d0114: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1d0114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1d0118:
    // 0x1d0118: 0xc0c39a0  jal         func_30E680
label_1d011c:
    if (ctx->pc == 0x1D011Cu) {
        ctx->pc = 0x1D011Cu;
            // 0x1d011c: 0x80510048  lb          $s1, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->pc = 0x1D0120u;
        goto label_1d0120;
    }
    ctx->pc = 0x1D0118u;
    SET_GPR_U32(ctx, 31, 0x1D0120u);
    ctx->pc = 0x1D011Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0118u;
            // 0x1d011c: 0x80510048  lb          $s1, 0x48($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 72)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30E680u;
    if (runtime->hasFunction(0x30E680u)) {
        auto targetFn = runtime->lookupFunction(0x30E680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0120u; }
        if (ctx->pc != 0x1D0120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowTakePhoto__Fv_0x30e680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0120u; }
        if (ctx->pc != 0x1D0120u) { return; }
    }
    ctx->pc = 0x1D0120u;
label_1d0120:
    // 0x1d0120: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_1d0124:
    if (ctx->pc == 0x1D0124u) {
        ctx->pc = 0x1D0128u;
        goto label_1d0128;
    }
    ctx->pc = 0x1D0120u;
    {
        const bool branch_taken_0x1d0120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0120) {
            ctx->pc = 0x1D012Cu;
            goto label_1d012c;
        }
    }
    ctx->pc = 0x1D0128u;
label_1d0128:
    // 0x1d0128: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1d0128u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d012c:
    // 0x1d012c: 0x1220000f  beqz        $s1, . + 4 + (0xF << 2)
label_1d0130:
    if (ctx->pc == 0x1D0130u) {
        ctx->pc = 0x1D0134u;
        goto label_1d0134;
    }
    ctx->pc = 0x1D012Cu;
    {
        const bool branch_taken_0x1d012c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d012c) {
            ctx->pc = 0x1D016Cu;
            goto label_1d016c;
        }
    }
    ctx->pc = 0x1D0134u;
label_1d0134:
    // 0x1d0134: 0x8f828d78  lw          $v0, -0x7288($gp)
    ctx->pc = 0x1d0134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937976)));
label_1d0138:
    // 0x1d0138: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1d013c:
    if (ctx->pc == 0x1D013Cu) {
        ctx->pc = 0x1D0140u;
        goto label_1d0140;
    }
    ctx->pc = 0x1D0138u;
    {
        const bool branch_taken_0x1d0138 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0138) {
            ctx->pc = 0x1D016Cu;
            goto label_1d016c;
        }
    }
    ctx->pc = 0x1D0140u;
label_1d0140:
    // 0x1d0140: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1d0140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1d0144:
    // 0x1d0144: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1d0144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1d0148:
    // 0x1d0148: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1d0148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_1d014c:
    // 0x1d014c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1d0150:
    if (ctx->pc == 0x1D0150u) {
        ctx->pc = 0x1D0150u;
            // 0x1d0150: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0154u;
        goto label_1d0154;
    }
    ctx->pc = 0x1D014Cu;
    {
        const bool branch_taken_0x1d014c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D014Cu;
            // 0x1d0150: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d014c) {
            ctx->pc = 0x1D016Cu;
            goto label_1d016c;
        }
    }
    ctx->pc = 0x1D0154u;
label_1d0154:
    // 0x1d0154: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1d0154u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_1d0158:
    // 0x1d0158: 0xc04ba14  jal         func_12E850
label_1d015c:
    if (ctx->pc == 0x1D015Cu) {
        ctx->pc = 0x1D015Cu;
            // 0x1d015c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0160u;
        goto label_1d0160;
    }
    ctx->pc = 0x1D0158u;
    SET_GPR_U32(ctx, 31, 0x1D0160u);
    ctx->pc = 0x1D015Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0158u;
            // 0x1d015c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0160u; }
        if (ctx->pc != 0x1D0160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0160u; }
        if (ctx->pc != 0x1D0160u) { return; }
    }
    ctx->pc = 0x1D0160u;
label_1d0160:
    // 0x1d0160: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d0160u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1d0164:
    // 0x1d0164: 0xc072cf8  jal         func_1CB3E0
label_1d0168:
    if (ctx->pc == 0x1D0168u) {
        ctx->pc = 0x1D0168u;
            // 0x1d0168: 0x248403b0  addiu       $a0, $a0, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 944));
        ctx->pc = 0x1D016Cu;
        goto label_1d016c;
    }
    ctx->pc = 0x1D0164u;
    SET_GPR_U32(ctx, 31, 0x1D016Cu);
    ctx->pc = 0x1D0168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0164u;
            // 0x1d0168: 0x248403b0  addiu       $a0, $a0, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CB3E0u;
    if (runtime->hasFunction(0x1CB3E0u)) {
        auto targetFn = runtime->lookupFunction(0x1CB3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D016Cu; }
        if (ctx->pc != 0x1D016Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__12CLockOnModelFv_0x1cb3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D016Cu; }
        if (ctx->pc != 0x1D016Cu) { return; }
    }
    ctx->pc = 0x1D016Cu;
label_1d016c:
    // 0x1d016c: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
label_1d0170:
    if (ctx->pc == 0x1D0170u) {
        ctx->pc = 0x1D0170u;
            // 0x1d0170: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0174u;
        goto label_1d0174;
    }
    ctx->pc = 0x1D016Cu;
    {
        const bool branch_taken_0x1d016c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D016Cu;
            // 0x1d0170: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d016c) {
            ctx->pc = 0x1D01BCu;
            goto label_1d01bc;
        }
    }
    ctx->pc = 0x1D0174u;
label_1d0174:
    // 0x1d0174: 0x8f828d78  lw          $v0, -0x7288($gp)
    ctx->pc = 0x1d0174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937976)));
label_1d0178:
    // 0x1d0178: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1d017c:
    if (ctx->pc == 0x1D017Cu) {
        ctx->pc = 0x1D0180u;
        goto label_1d0180;
    }
    ctx->pc = 0x1D0178u;
    {
        const bool branch_taken_0x1d0178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0178) {
            ctx->pc = 0x1D01B8u;
            goto label_1d01b8;
        }
    }
    ctx->pc = 0x1D0180u;
label_1d0180:
    // 0x1d0180: 0x8f838db0  lw          $v1, -0x7250($gp)
    ctx->pc = 0x1d0180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1d0184:
    // 0x1d0184: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x1d0184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_1d0188:
    // 0x1d0188: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x1d0188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_1d018c:
    // 0x1d018c: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x1d018cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1d0190:
    // 0x1d0190: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1d0190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1d0194:
    // 0x1d0194: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1d0198:
    if (ctx->pc == 0x1D0198u) {
        ctx->pc = 0x1D019Cu;
        goto label_1d019c;
    }
    ctx->pc = 0x1D0194u;
    {
        const bool branch_taken_0x1d0194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d0194) {
            ctx->pc = 0x1D01B8u;
            goto label_1d01b8;
        }
    }
    ctx->pc = 0x1D019Cu;
label_1d019c:
    // 0x1d019c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1d019cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1d01a0:
    // 0x1d01a0: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x1d01a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_1d01a4:
    // 0x1d01a4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_1d01a8:
    if (ctx->pc == 0x1D01A8u) {
        ctx->pc = 0x1D01A8u;
            // 0x1d01a8: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x1D01ACu;
        goto label_1d01ac;
    }
    ctx->pc = 0x1D01A4u;
    {
        const bool branch_taken_0x1d01a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D01A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D01A4u;
            // 0x1d01a8: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d01a4) {
            ctx->pc = 0x1D01B8u;
            goto label_1d01b8;
        }
    }
    ctx->pc = 0x1D01ACu;
label_1d01ac:
    // 0x1d01ac: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x1d01acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_1d01b0:
    // 0x1d01b0: 0xc072dec  jal         func_1CB7B0
label_1d01b4:
    if (ctx->pc == 0x1D01B4u) {
        ctx->pc = 0x1D01B4u;
            // 0x1d01b4: 0x248403b0  addiu       $a0, $a0, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 944));
        ctx->pc = 0x1D01B8u;
        goto label_1d01b8;
    }
    ctx->pc = 0x1D01B0u;
    SET_GPR_U32(ctx, 31, 0x1D01B8u);
    ctx->pc = 0x1D01B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D01B0u;
            // 0x1d01b4: 0x248403b0  addiu       $a0, $a0, 0x3B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CB7B0u;
    if (runtime->hasFunction(0x1CB7B0u)) {
        auto targetFn = runtime->lookupFunction(0x1CB7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D01B8u; }
        if (ctx->pc != 0x1D01B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMess__12CLockOnModelFi_0x1cb7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D01B8u; }
        if (ctx->pc != 0x1D01B8u) { return; }
    }
    ctx->pc = 0x1D01B8u;
label_1d01b8:
    // 0x1d01b8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d01b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d01bc:
    // 0x1d01bc: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1d01bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_1d01c0:
    // 0x1d01c0: 0xc04ba14  jal         func_12E850
label_1d01c4:
    if (ctx->pc == 0x1D01C4u) {
        ctx->pc = 0x1D01C4u;
            // 0x1d01c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D01C8u;
        goto label_1d01c8;
    }
    ctx->pc = 0x1D01C0u;
    SET_GPR_U32(ctx, 31, 0x1D01C8u);
    ctx->pc = 0x1D01C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D01C0u;
            // 0x1d01c4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D01C8u; }
        if (ctx->pc != 0x1D01C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D01C8u; }
        if (ctx->pc != 0x1D01C8u) { return; }
    }
    ctx->pc = 0x1D01C8u;
label_1d01c8:
    // 0x1d01c8: 0x8f848dcc  lw          $a0, -0x7234($gp)
    ctx->pc = 0x1d01c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938060)));
label_1d01cc:
    // 0x1d01cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d01ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d01d0:
    // 0x1d01d0: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x1d01d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_1d01d4:
    // 0x1d01d4: 0x320f809  jalr        $t9
label_1d01d8:
    if (ctx->pc == 0x1D01D8u) {
        ctx->pc = 0x1D01DCu;
        goto label_1d01dc;
    }
    ctx->pc = 0x1D01D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D01DCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D01DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D01DCu; }
            if (ctx->pc != 0x1D01DCu) { return; }
        }
        }
    }
    ctx->pc = 0x1D01DCu;
label_1d01dc:
    // 0x1d01dc: 0x12200029  beqz        $s1, . + 4 + (0x29 << 2)
label_1d01e0:
    if (ctx->pc == 0x1D01E0u) {
        ctx->pc = 0x1D01E4u;
        goto label_1d01e4;
    }
    ctx->pc = 0x1D01DCu;
    {
        const bool branch_taken_0x1d01dc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d01dc) {
            ctx->pc = 0x1D0284u;
            goto label_1d0284;
        }
    }
    ctx->pc = 0x1D01E4u;
label_1d01e4:
    // 0x1d01e4: 0x8f828d78  lw          $v0, -0x7288($gp)
    ctx->pc = 0x1d01e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937976)));
label_1d01e8:
    // 0x1d01e8: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_1d01ec:
    if (ctx->pc == 0x1D01ECu) {
        ctx->pc = 0x1D01F0u;
        goto label_1d01f0;
    }
    ctx->pc = 0x1D01E8u;
    {
        const bool branch_taken_0x1d01e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d01e8) {
            ctx->pc = 0x1D0284u;
            goto label_1d0284;
        }
    }
    ctx->pc = 0x1D01F0u;
label_1d01f0:
    // 0x1d01f0: 0x8f828dcc  lw          $v0, -0x7234($gp)
    ctx->pc = 0x1d01f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938060)));
label_1d01f4:
    // 0x1d01f4: 0x8c450070  lw          $a1, 0x70($v0)
    ctx->pc = 0x1d01f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_1d01f8:
    // 0x1d01f8: 0xc0b24f4  jal         func_2C93D0
label_1d01fc:
    if (ctx->pc == 0x1D01FCu) {
        ctx->pc = 0x1D01FCu;
            // 0x1d01fc: 0x8f848dac  lw          $a0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->pc = 0x1D0200u;
        goto label_1d0200;
    }
    ctx->pc = 0x1D01F8u;
    SET_GPR_U32(ctx, 31, 0x1D0200u);
    ctx->pc = 0x1D01FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D01F8u;
            // 0x1d01fc: 0x8f848dac  lw          $a0, -0x7254($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C93D0u;
    if (runtime->hasFunction(0x2C93D0u)) {
        auto targetFn = runtime->lookupFunction(0x2C93D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0200u; }
        if (ctx->pc != 0x1D0200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawExclamationMark__6CSceneFP8mgCFrame_0x2c93d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0200u; }
        if (ctx->pc != 0x1D0200u) { return; }
    }
    ctx->pc = 0x1D0200u;
label_1d0200:
    // 0x1d0200: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1d0200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1d0204:
    // 0x1d0204: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x1d0204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1d0208:
    // 0x1d0208: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x1d0208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_1d020c:
    // 0x1d020c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_1d0210:
    if (ctx->pc == 0x1D0210u) {
        ctx->pc = 0x1D0214u;
        goto label_1d0214;
    }
    ctx->pc = 0x1D020Cu;
    {
        const bool branch_taken_0x1d020c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d020c) {
            ctx->pc = 0x1D0278u;
            goto label_1d0278;
        }
    }
    ctx->pc = 0x1D0214u;
label_1d0214:
    // 0x1d0214: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1d0214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1d0218:
    // 0x1d0218: 0x8c45002c  lw          $a1, 0x2C($v0)
    ctx->pc = 0x1d0218u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_1d021c:
    // 0x1d021c: 0x8c46001c  lw          $a2, 0x1C($v0)
    ctx->pc = 0x1d021cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 28)));
label_1d0220:
    // 0x1d0220: 0xc0771e4  jal         func_1DC790
label_1d0224:
    if (ctx->pc == 0x1D0224u) {
        ctx->pc = 0x1D0224u;
            // 0x1d0224: 0x8f848db8  lw          $a0, -0x7248($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
        ctx->pc = 0x1D0228u;
        goto label_1d0228;
    }
    ctx->pc = 0x1D0220u;
    SET_GPR_U32(ctx, 31, 0x1D0228u);
    ctx->pc = 0x1D0224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0220u;
            // 0x1d0224: 0x8f848db8  lw          $a0, -0x7248($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC790u;
    if (runtime->hasFunction(0x1DC790u)) {
        auto targetFn = runtime->lookupFunction(0x1DC790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0228u; }
        if (ctx->pc != 0x1D0228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawLifeGage__11CMonsterManFii_0x1dc790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0228u; }
        if (ctx->pc != 0x1D0228u) { return; }
    }
    ctx->pc = 0x1D0228u;
label_1d0228:
    // 0x1d0228: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1d0228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1d022c:
    // 0x1d022c: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x1d022cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_1d0230:
    // 0x1d0230: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
label_1d0234:
    if (ctx->pc == 0x1D0234u) {
        ctx->pc = 0x1D0234u;
            // 0x1d0234: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x1D0238u;
        goto label_1d0238;
    }
    ctx->pc = 0x1D0230u;
    {
        const bool branch_taken_0x1d0230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0230u;
            // 0x1d0234: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0230) {
            ctx->pc = 0x1D0278u;
            goto label_1d0278;
        }
    }
    ctx->pc = 0x1D0238u;
label_1d0238:
    // 0x1d0238: 0xc072ab8  jal         func_1CAAE0
label_1d023c:
    if (ctx->pc == 0x1D023Cu) {
        ctx->pc = 0x1D023Cu;
            // 0x1d023c: 0x2484fa50  addiu       $a0, $a0, -0x5B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965840));
        ctx->pc = 0x1D0240u;
        goto label_1d0240;
    }
    ctx->pc = 0x1D0238u;
    SET_GPR_U32(ctx, 31, 0x1D0240u);
    ctx->pc = 0x1D023Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0238u;
            // 0x1d023c: 0x2484fa50  addiu       $a0, $a0, -0x5B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965840));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAE0u;
    if (runtime->hasFunction(0x1CAAE0u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0240u; }
        if (ctx->pc != 0x1D0240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__12CDamageScoreFv_0x1caae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0240u; }
        if (ctx->pc != 0x1D0240u) { return; }
    }
    ctx->pc = 0x1D0240u;
label_1d0240:
    // 0x1d0240: 0x8f858dac  lw          $a1, -0x7254($gp)
    ctx->pc = 0x1d0240u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1d0244:
    // 0x1d0244: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d0244u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1d0248:
    // 0x1d0248: 0xc072c0c  jal         func_1CB030
label_1d024c:
    if (ctx->pc == 0x1D024Cu) {
        ctx->pc = 0x1D024Cu;
            // 0x1d024c: 0x2484ff60  addiu       $a0, $a0, -0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967136));
        ctx->pc = 0x1D0250u;
        goto label_1d0250;
    }
    ctx->pc = 0x1D0248u;
    SET_GPR_U32(ctx, 31, 0x1D0250u);
    ctx->pc = 0x1D024Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0248u;
            // 0x1d024c: 0x2484ff60  addiu       $a0, $a0, -0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CB030u;
    if (runtime->hasFunction(0x1CB030u)) {
        auto targetFn = runtime->lookupFunction(0x1CB030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0250u; }
        if (ctx->pc != 0x1D0250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__13CDamageScore2FP6CScene_0x1cb030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0250u; }
        if (ctx->pc != 0x1D0250u) { return; }
    }
    ctx->pc = 0x1D0250u;
label_1d0250:
    // 0x1d0250: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d0250u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0254:
    // 0x1d0254: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d0254u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0258:
    // 0x1d0258: 0x3c0201ea  lui         $v0, 0x1EA
    ctx->pc = 0x1d0258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)490 << 16));
label_1d025c:
    // 0x1d025c: 0x2442fae0  addiu       $v0, $v0, -0x520
    ctx->pc = 0x1d025cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965984));
label_1d0260:
    // 0x1d0260: 0xc072ab8  jal         func_1CAAE0
label_1d0264:
    if (ctx->pc == 0x1D0264u) {
        ctx->pc = 0x1D0264u;
            // 0x1d0264: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->pc = 0x1D0268u;
        goto label_1d0268;
    }
    ctx->pc = 0x1D0260u;
    SET_GPR_U32(ctx, 31, 0x1D0268u);
    ctx->pc = 0x1D0264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0260u;
            // 0x1d0264: 0x522021  addu        $a0, $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CAAE0u;
    if (runtime->hasFunction(0x1CAAE0u)) {
        auto targetFn = runtime->lookupFunction(0x1CAAE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0268u; }
        if (ctx->pc != 0x1D0268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__12CDamageScoreFv_0x1caae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0268u; }
        if (ctx->pc != 0x1D0268u) { return; }
    }
    ctx->pc = 0x1D0268u;
label_1d0268:
    // 0x1d0268: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d0268u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d026c:
    // 0x1d026c: 0x2a020008  slti        $v0, $s0, 0x8
    ctx->pc = 0x1d026cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
label_1d0270:
    // 0x1d0270: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_1d0274:
    if (ctx->pc == 0x1D0274u) {
        ctx->pc = 0x1D0274u;
            // 0x1d0274: 0x26520090  addiu       $s2, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->pc = 0x1D0278u;
        goto label_1d0278;
    }
    ctx->pc = 0x1D0270u;
    {
        const bool branch_taken_0x1d0270 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0270u;
            // 0x1d0274: 0x26520090  addiu       $s2, $s2, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0270) {
            ctx->pc = 0x1D0258u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d0258;
        }
    }
    ctx->pc = 0x1D0278u;
label_1d0278:
    // 0x1d0278: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d0278u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1d027c:
    // 0x1d027c: 0xc0724e0  jal         func_1C9380
label_1d0280:
    if (ctx->pc == 0x1D0280u) {
        ctx->pc = 0x1D0280u;
            // 0x1d0280: 0x24840370  addiu       $a0, $a0, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 880));
        ctx->pc = 0x1D0284u;
        goto label_1d0284;
    }
    ctx->pc = 0x1D027Cu;
    SET_GPR_U32(ctx, 31, 0x1D0284u);
    ctx->pc = 0x1D0280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D027Cu;
            // 0x1d0280: 0x24840370  addiu       $a0, $a0, 0x370 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9380u;
    if (runtime->hasFunction(0x1C9380u)) {
        auto targetFn = runtime->lookupFunction(0x1C9380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0284u; }
        if (ctx->pc != 0x1D0284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__12CLevelupInfoFv_0x1c9380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0284u; }
        if (ctx->pc != 0x1D0284u) { return; }
    }
    ctx->pc = 0x1D0284u;
label_1d0284:
    // 0x1d0284: 0xc0c39a0  jal         func_30E680
label_1d0288:
    if (ctx->pc == 0x1D0288u) {
        ctx->pc = 0x1D028Cu;
        goto label_1d028c;
    }
    ctx->pc = 0x1D0284u;
    SET_GPR_U32(ctx, 31, 0x1D028Cu);
    ctx->pc = 0x30E680u;
    if (runtime->hasFunction(0x30E680u)) {
        auto targetFn = runtime->lookupFunction(0x30E680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D028Cu; }
        if (ctx->pc != 0x1D028Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowTakePhoto__Fv_0x30e680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D028Cu; }
        if (ctx->pc != 0x1D028Cu) { return; }
    }
    ctx->pc = 0x1D028Cu;
label_1d028c:
    // 0x1d028c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1d0290:
    if (ctx->pc == 0x1D0290u) {
        ctx->pc = 0x1D0294u;
        goto label_1d0294;
    }
    ctx->pc = 0x1D028Cu;
    {
        const bool branch_taken_0x1d028c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d028c) {
            ctx->pc = 0x1D029Cu;
            goto label_1d029c;
        }
    }
    ctx->pc = 0x1D0294u;
label_1d0294:
    // 0x1d0294: 0xc06f970  jal         func_1BE5C0
label_1d0298:
    if (ctx->pc == 0x1D0298u) {
        ctx->pc = 0x1D029Cu;
        goto label_1d029c;
    }
    ctx->pc = 0x1D0294u;
    SET_GPR_U32(ctx, 31, 0x1D029Cu);
    ctx->pc = 0x1BE5C0u;
    if (runtime->hasFunction(0x1BE5C0u)) {
        auto targetFn = runtime->lookupFunction(0x1BE5C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D029Cu; }
        if (ctx->pc != 0x1D029Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawStatusBord__Fv_0x1be5c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D029Cu; }
        if (ctx->pc != 0x1D029Cu) { return; }
    }
    ctx->pc = 0x1D029Cu;
label_1d029c:
    // 0x1d029c: 0x1220006b  beqz        $s1, . + 4 + (0x6B << 2)
label_1d02a0:
    if (ctx->pc == 0x1D02A0u) {
        ctx->pc = 0x1D02A0u;
            // 0x1d02a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D02A4u;
        goto label_1d02a4;
    }
    ctx->pc = 0x1D029Cu;
    {
        const bool branch_taken_0x1d029c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D02A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D029Cu;
            // 0x1d02a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d029c) {
            ctx->pc = 0x1D044Cu;
            goto label_1d044c;
        }
    }
    ctx->pc = 0x1D02A4u;
label_1d02a4:
    // 0x1d02a4: 0x8f828d78  lw          $v0, -0x7288($gp)
    ctx->pc = 0x1d02a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937976)));
label_1d02a8:
    // 0x1d02a8: 0x10400067  beqz        $v0, . + 4 + (0x67 << 2)
label_1d02ac:
    if (ctx->pc == 0x1D02ACu) {
        ctx->pc = 0x1D02ACu;
            // 0x1d02ac: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x1D02B0u;
        goto label_1d02b0;
    }
    ctx->pc = 0x1D02A8u;
    {
        const bool branch_taken_0x1d02a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D02ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D02A8u;
            // 0x1d02ac: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d02a8) {
            ctx->pc = 0x1D0448u;
            goto label_1d0448;
        }
    }
    ctx->pc = 0x1D02B0u;
label_1d02b0:
    // 0x1d02b0: 0xc072e3c  jal         func_1CB8F0
label_1d02b4:
    if (ctx->pc == 0x1D02B4u) {
        ctx->pc = 0x1D02B4u;
            // 0x1d02b4: 0x24840460  addiu       $a0, $a0, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1120));
        ctx->pc = 0x1D02B8u;
        goto label_1d02b8;
    }
    ctx->pc = 0x1D02B0u;
    SET_GPR_U32(ctx, 31, 0x1D02B8u);
    ctx->pc = 0x1D02B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D02B0u;
            // 0x1d02b4: 0x24840460  addiu       $a0, $a0, 0x460 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CB8F0u;
    if (runtime->hasFunction(0x1CB8F0u)) {
        auto targetFn = runtime->lookupFunction(0x1CB8F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D02B8u; }
        if (ctx->pc != 0x1D02B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__13CWarningGage2Fv_0x1cb8f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D02B8u; }
        if (ctx->pc != 0x1D02B8u) { return; }
    }
    ctx->pc = 0x1D02B8u;
label_1d02b8:
    // 0x1d02b8: 0x8f838db0  lw          $v1, -0x7250($gp)
    ctx->pc = 0x1d02b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1d02bc:
    // 0x1d02bc: 0x84620046  lh          $v0, 0x46($v1)
    ctx->pc = 0x1d02bcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 70)));
label_1d02c0:
    // 0x1d02c0: 0x14400061  bnez        $v0, . + 4 + (0x61 << 2)
label_1d02c4:
    if (ctx->pc == 0x1D02C4u) {
        ctx->pc = 0x1D02C8u;
        goto label_1d02c8;
    }
    ctx->pc = 0x1D02C0u;
    {
        const bool branch_taken_0x1d02c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d02c0) {
            ctx->pc = 0x1D0448u;
            goto label_1d0448;
        }
    }
    ctx->pc = 0x1D02C8u;
label_1d02c8:
    // 0x1d02c8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x1d02c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1d02cc:
    // 0x1d02cc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1d02ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_1d02d0:
    // 0x1d02d0: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
label_1d02d4:
    if (ctx->pc == 0x1D02D4u) {
        ctx->pc = 0x1D02D8u;
        goto label_1d02d8;
    }
    ctx->pc = 0x1D02D0u;
    {
        const bool branch_taken_0x1d02d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d02d0) {
            ctx->pc = 0x1D0448u;
            goto label_1d0448;
        }
    }
    ctx->pc = 0x1D02D8u;
label_1d02d8:
    // 0x1d02d8: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1d02d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1d02dc:
    // 0x1d02dc: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x1d02dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1d02e0:
    // 0x1d02e0: 0x10400059  beqz        $v0, . + 4 + (0x59 << 2)
label_1d02e4:
    if (ctx->pc == 0x1D02E4u) {
        ctx->pc = 0x1D02E4u;
            // 0x1d02e4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D02E8u;
        goto label_1d02e8;
    }
    ctx->pc = 0x1D02E0u;
    {
        const bool branch_taken_0x1d02e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D02E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D02E0u;
            // 0x1d02e4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d02e0) {
            ctx->pc = 0x1D0448u;
            goto label_1d0448;
        }
    }
    ctx->pc = 0x1D02E8u;
label_1d02e8:
    // 0x1d02e8: 0x24050066  addiu       $a1, $zero, 0x66
    ctx->pc = 0x1d02e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
label_1d02ec:
    // 0x1d02ec: 0xc04ba14  jal         func_12E850
label_1d02f0:
    if (ctx->pc == 0x1D02F0u) {
        ctx->pc = 0x1D02F0u;
            // 0x1d02f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D02F4u;
        goto label_1d02f4;
    }
    ctx->pc = 0x1D02ECu;
    SET_GPR_U32(ctx, 31, 0x1D02F4u);
    ctx->pc = 0x1D02F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D02ECu;
            // 0x1d02f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D02F4u; }
        if (ctx->pc != 0x1D02F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D02F4u; }
        if (ctx->pc != 0x1D02F4u) { return; }
    }
    ctx->pc = 0x1D02F4u;
label_1d02f4:
    // 0x1d02f4: 0x8f848dd8  lw          $a0, -0x7228($gp)
    ctx->pc = 0x1d02f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d02f8:
    // 0x1d02f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x1d02f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1d02fc:
    // 0x1d02fc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x1d02fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_1d0300:
    // 0x1d0300: 0x320f809  jalr        $t9
label_1d0304:
    if (ctx->pc == 0x1D0304u) {
        ctx->pc = 0x1D0304u;
            // 0x1d0304: 0x27a51f30  addiu       $a1, $sp, 0x1F30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 7984));
        ctx->pc = 0x1D0308u;
        goto label_1d0308;
    }
    ctx->pc = 0x1D0300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x1D0308u);
        ctx->pc = 0x1D0304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0300u;
            // 0x1d0304: 0x27a51f30  addiu       $a1, $sp, 0x1F30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 7984));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1D0308u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1D0308u; }
            if (ctx->pc != 0x1D0308u) { return; }
        }
        }
    }
    ctx->pc = 0x1D0308u;
label_1d0308:
    // 0x1d0308: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1d0308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1d030c:
    // 0x1d030c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1d030cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1d0310:
    // 0x1d0310: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d0310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0314:
    // 0x1d0314: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_1d0318:
    if (ctx->pc == 0x1D0318u) {
        ctx->pc = 0x1D0318u;
            // 0x1d0318: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x1D031Cu;
        goto label_1d031c;
    }
    ctx->pc = 0x1D0314u;
    {
        const bool branch_taken_0x1d0314 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D0318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0314u;
            // 0x1d0318: 0x3c0101ea  lui         $at, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0314) {
            ctx->pc = 0x1D034Cu;
            goto label_1d034c;
        }
    }
    ctx->pc = 0x1D031Cu;
label_1d031c:
    // 0x1d031c: 0x240201b4  addiu       $v0, $zero, 0x1B4
    ctx->pc = 0x1d031cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 436));
label_1d0320:
    // 0x1d0320: 0xa420062c  sh          $zero, 0x62C($at)
    ctx->pc = 0x1d0320u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 1580), (uint16_t)GPR_U32(ctx, 0));
label_1d0324:
    // 0x1d0324: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d0324u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1d0328:
    // 0x1d0328: 0xa4220620  sh          $v0, 0x620($at)
    ctx->pc = 0x1d0328u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 1568), (uint16_t)GPR_U32(ctx, 2));
label_1d032c:
    // 0x1d032c: 0x24020090  addiu       $v0, $zero, 0x90
    ctx->pc = 0x1d032cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
label_1d0330:
    // 0x1d0330: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d0330u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1d0334:
    // 0x1d0334: 0xa4220622  sh          $v0, 0x622($at)
    ctx->pc = 0x1d0334u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 1570), (uint16_t)GPR_U32(ctx, 2));
label_1d0338:
    // 0x1d0338: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x1d0338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_1d033c:
    // 0x1d033c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d033cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1d0340:
    // 0x1d0340: 0xa4220624  sh          $v0, 0x624($at)
    ctx->pc = 0x1d0340u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 1572), (uint16_t)GPR_U32(ctx, 2));
label_1d0344:
    // 0x1d0344: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d0344u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1d0348:
    // 0x1d0348: 0xa4220626  sh          $v0, 0x626($at)
    ctx->pc = 0x1d0348u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 1574), (uint16_t)GPR_U32(ctx, 2));
label_1d034c:
    // 0x1d034c: 0x8fa200a0  lw          $v0, 0xA0($sp)
    ctx->pc = 0x1d034cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_1d0350:
    // 0x1d0350: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x1d0350u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_1d0354:
    // 0x1d0354: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1d0354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1d0358:
    // 0x1d0358: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_1d035c:
    if (ctx->pc == 0x1D035Cu) {
        ctx->pc = 0x1D035Cu;
            // 0x1d035c: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x1D0360u;
        goto label_1d0360;
    }
    ctx->pc = 0x1D0358u;
    {
        const bool branch_taken_0x1d0358 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D035Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0358u;
            // 0x1d035c: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0358) {
            ctx->pc = 0x1D039Cu;
            goto label_1d039c;
        }
    }
    ctx->pc = 0x1D0360u;
label_1d0360:
    // 0x1d0360: 0x24020150  addiu       $v0, $zero, 0x150
    ctx->pc = 0x1d0360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_1d0364:
    // 0x1d0364: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d0364u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1d0368:
    // 0x1d0368: 0xa4220620  sh          $v0, 0x620($at)
    ctx->pc = 0x1d0368u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 1568), (uint16_t)GPR_U32(ctx, 2));
label_1d036c:
    // 0x1d036c: 0x240300d4  addiu       $v1, $zero, 0xD4
    ctx->pc = 0x1d036cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 212));
label_1d0370:
    // 0x1d0370: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d0370u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1d0374:
    // 0x1d0374: 0x24020140  addiu       $v0, $zero, 0x140
    ctx->pc = 0x1d0374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_1d0378:
    // 0x1d0378: 0xa4230622  sh          $v1, 0x622($at)
    ctx->pc = 0x1d0378u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 1570), (uint16_t)GPR_U32(ctx, 3));
label_1d037c:
    // 0x1d037c: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d037cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1d0380:
    // 0x1d0380: 0x24030118  addiu       $v1, $zero, 0x118
    ctx->pc = 0x1d0380u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
label_1d0384:
    // 0x1d0384: 0xa4220624  sh          $v0, 0x624($at)
    ctx->pc = 0x1d0384u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 1572), (uint16_t)GPR_U32(ctx, 2));
label_1d0388:
    // 0x1d0388: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d0388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1d038c:
    // 0x1d038c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d038cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d0390:
    // 0x1d0390: 0xa4230626  sh          $v1, 0x626($at)
    ctx->pc = 0x1d0390u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 1574), (uint16_t)GPR_U32(ctx, 3));
label_1d0394:
    // 0x1d0394: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d0394u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1d0398:
    // 0x1d0398: 0xa422062c  sh          $v0, 0x62C($at)
    ctx->pc = 0x1d0398u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 1580), (uint16_t)GPR_U32(ctx, 2));
label_1d039c:
    // 0x1d039c: 0x27a51f30  addiu       $a1, $sp, 0x1F30
    ctx->pc = 0x1d039cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 7984));
label_1d03a0:
    // 0x1d03a0: 0xc0754a8  jal         func_1D52A0
label_1d03a4:
    if (ctx->pc == 0x1D03A4u) {
        ctx->pc = 0x1D03A4u;
            // 0x1d03a4: 0x248404c0  addiu       $a0, $a0, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1216));
        ctx->pc = 0x1D03A8u;
        goto label_1d03a8;
    }
    ctx->pc = 0x1D03A0u;
    SET_GPR_U32(ctx, 31, 0x1D03A8u);
    ctx->pc = 0x1D03A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D03A0u;
            // 0x1d03a4: 0x248404c0  addiu       $a0, $a0, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D52A0u;
    if (runtime->hasFunction(0x1D52A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D52A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D03A8u; }
        if (ctx->pc != 0x1D03A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__14CMiniMapSymbolFPf_0x1d52a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D03A8u; }
        if (ctx->pc != 0x1D03A8u) { return; }
    }
    ctx->pc = 0x1D03A8u;
label_1d03a8:
    // 0x1d03a8: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d03a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d03ac:
    // 0x1d03ac: 0x24050048  addiu       $a1, $zero, 0x48
    ctx->pc = 0x1d03acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_1d03b0:
    // 0x1d03b0: 0xc04ba14  jal         func_12E850
label_1d03b4:
    if (ctx->pc == 0x1D03B4u) {
        ctx->pc = 0x1D03B4u;
            // 0x1d03b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D03B8u;
        goto label_1d03b8;
    }
    ctx->pc = 0x1D03B0u;
    SET_GPR_U32(ctx, 31, 0x1D03B8u);
    ctx->pc = 0x1D03B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D03B0u;
            // 0x1d03b4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D03B8u; }
        if (ctx->pc != 0x1D03B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D03B8u; }
        if (ctx->pc != 0x1D03B8u) { return; }
    }
    ctx->pc = 0x1D03B8u;
label_1d03b8:
    // 0x1d03b8: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d03b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1d03bc:
    // 0x1d03bc: 0xc0752c8  jal         func_1D4B20
label_1d03c0:
    if (ctx->pc == 0x1D03C0u) {
        ctx->pc = 0x1D03C0u;
            // 0x1d03c0: 0x248404c0  addiu       $a0, $a0, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1216));
        ctx->pc = 0x1D03C4u;
        goto label_1d03c4;
    }
    ctx->pc = 0x1D03BCu;
    SET_GPR_U32(ctx, 31, 0x1D03C4u);
    ctx->pc = 0x1D03C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D03BCu;
            // 0x1d03c0: 0x248404c0  addiu       $a0, $a0, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4B20u;
    if (runtime->hasFunction(0x1D4B20u)) {
        auto targetFn = runtime->lookupFunction(0x1D4B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D03C4u; }
        if (ctx->pc != 0x1D03C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSymbolOpen__14CMiniMapSymbolFv_0x1d4b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D03C4u; }
        if (ctx->pc != 0x1D03C4u) { return; }
    }
    ctx->pc = 0x1D03C4u;
label_1d03c4:
    // 0x1d03c4: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d03c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1d03c8:
    // 0x1d03c8: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x1d03c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
label_1d03cc:
    // 0x1d03cc: 0x248451c0  addiu       $a0, $a0, 0x51C0
    ctx->pc = 0x1d03ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20928));
label_1d03d0:
    // 0x1d03d0: 0xc0a2edc  jal         func_28BB70
label_1d03d4:
    if (ctx->pc == 0x1D03D4u) {
        ctx->pc = 0x1D03D4u;
            // 0x1d03d4: 0x24a504c0  addiu       $a1, $a1, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1216));
        ctx->pc = 0x1D03D8u;
        goto label_1d03d8;
    }
    ctx->pc = 0x1D03D0u;
    SET_GPR_U32(ctx, 31, 0x1D03D8u);
    ctx->pc = 0x1D03D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D03D0u;
            // 0x1d03d4: 0x24a504c0  addiu       $a1, $a1, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28BB70u;
    if (runtime->hasFunction(0x28BB70u)) {
        auto targetFn = runtime->lookupFunction(0x28BB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D03D8u; }
        if (ctx->pc != 0x1D03D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMiniMapSymbol__9CGeoStoneFP14CMiniMapSymbol_0x28bb70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D03D8u; }
        if (ctx->pc != 0x1D03D8u) { return; }
    }
    ctx->pc = 0x1D03D8u;
label_1d03d8:
    // 0x1d03d8: 0x8f848db8  lw          $a0, -0x7248($gp)
    ctx->pc = 0x1d03d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_1d03dc:
    // 0x1d03dc: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x1d03dcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
label_1d03e0:
    // 0x1d03e0: 0xc077194  jal         func_1DC650
label_1d03e4:
    if (ctx->pc == 0x1D03E4u) {
        ctx->pc = 0x1D03E4u;
            // 0x1d03e4: 0x24a504c0  addiu       $a1, $a1, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1216));
        ctx->pc = 0x1D03E8u;
        goto label_1d03e8;
    }
    ctx->pc = 0x1D03E0u;
    SET_GPR_U32(ctx, 31, 0x1D03E8u);
    ctx->pc = 0x1D03E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D03E0u;
            // 0x1d03e4: 0x24a504c0  addiu       $a1, $a1, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DC650u;
    if (runtime->hasFunction(0x1DC650u)) {
        auto targetFn = runtime->lookupFunction(0x1DC650u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D03E8u; }
        if (ctx->pc != 0x1D03E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMiniMapSymbol__11CMonsterManFP14CMiniMapSymbol_0x1dc650(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D03E8u; }
        if (ctx->pc != 0x1D03E8u) { return; }
    }
    ctx->pc = 0x1D03E8u;
label_1d03e8:
    // 0x1d03e8: 0x8f848dd4  lw          $a0, -0x722C($gp)
    ctx->pc = 0x1d03e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938068)));
label_1d03ec:
    // 0x1d03ec: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x1d03ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
label_1d03f0:
    // 0x1d03f0: 0xc0a31c8  jal         func_28C720
label_1d03f4:
    if (ctx->pc == 0x1D03F4u) {
        ctx->pc = 0x1D03F4u;
            // 0x1d03f4: 0x24a504c0  addiu       $a1, $a1, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1216));
        ctx->pc = 0x1D03F8u;
        goto label_1d03f8;
    }
    ctx->pc = 0x1D03F0u;
    SET_GPR_U32(ctx, 31, 0x1D03F8u);
    ctx->pc = 0x1D03F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D03F0u;
            // 0x1d03f4: 0x24a504c0  addiu       $a1, $a1, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28C720u;
    if (runtime->hasFunction(0x28C720u)) {
        auto targetFn = runtime->lookupFunction(0x28C720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D03F8u; }
        if (ctx->pc != 0x1D03F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMiniMapSymbol__19CTreasureBoxManagerFP14CMiniMapSymbol_0x28c720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D03F8u; }
        if (ctx->pc != 0x1D03F8u) { return; }
    }
    ctx->pc = 0x1D03F8u;
label_1d03f8:
    // 0x1d03f8: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d03f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1d03fc:
    // 0x1d03fc: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x1d03fcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
label_1d0400:
    // 0x1d0400: 0x24844b20  addiu       $a0, $a0, 0x4B20
    ctx->pc = 0x1d0400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19232));
label_1d0404:
    // 0x1d0404: 0xc0a2f98  jal         func_28BE60
label_1d0408:
    if (ctx->pc == 0x1D0408u) {
        ctx->pc = 0x1D0408u;
            // 0x1d0408: 0x24a504c0  addiu       $a1, $a1, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1216));
        ctx->pc = 0x1D040Cu;
        goto label_1d040c;
    }
    ctx->pc = 0x1D0404u;
    SET_GPR_U32(ctx, 31, 0x1D040Cu);
    ctx->pc = 0x1D0408u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0404u;
            // 0x1d0408: 0x24a504c0  addiu       $a1, $a1, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28BE60u;
    if (runtime->hasFunction(0x28BE60u)) {
        auto targetFn = runtime->lookupFunction(0x28BE60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D040Cu; }
        if (ctx->pc != 0x1D040Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSymbol__13CRandomCircleFP14CMiniMapSymbol_0x28be60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D040Cu; }
        if (ctx->pc != 0x1D040Cu) { return; }
    }
    ctx->pc = 0x1D040Cu;
label_1d040c:
    // 0x1d040c: 0xc0ba55c  jal         func_2E9570
label_1d0410:
    if (ctx->pc == 0x1D0410u) {
        ctx->pc = 0x1D0414u;
        goto label_1d0414;
    }
    ctx->pc = 0x1D040Cu;
    SET_GPR_U32(ctx, 31, 0x1D0414u);
    ctx->pc = 0x2E9570u;
    if (runtime->hasFunction(0x2E9570u)) {
        auto targetFn = runtime->lookupFunction(0x2E9570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0414u; }
        if (ctx->pc != 0x1D0414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSphidaPtr__Fv_0x2e9570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0414u; }
        if (ctx->pc != 0x1D0414u) { return; }
    }
    ctx->pc = 0x1D0414u;
label_1d0414:
    // 0x1d0414: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1d0418:
    if (ctx->pc == 0x1D0418u) {
        ctx->pc = 0x1D041Cu;
        goto label_1d041c;
    }
    ctx->pc = 0x1D0414u;
    {
        const bool branch_taken_0x1d0414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0414) {
            ctx->pc = 0x1D042Cu;
            goto label_1d042c;
        }
    }
    ctx->pc = 0x1D041Cu;
label_1d041c:
    // 0x1d041c: 0x3c0501ea  lui         $a1, 0x1EA
    ctx->pc = 0x1d041cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)490 << 16));
label_1d0420:
    // 0x1d0420: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d0420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d0424:
    // 0x1d0424: 0xc0baf5c  jal         func_2EBD70
label_1d0428:
    if (ctx->pc == 0x1D0428u) {
        ctx->pc = 0x1D0428u;
            // 0x1d0428: 0x24a504c0  addiu       $a1, $a1, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1216));
        ctx->pc = 0x1D042Cu;
        goto label_1d042c;
    }
    ctx->pc = 0x1D0424u;
    SET_GPR_U32(ctx, 31, 0x1D042Cu);
    ctx->pc = 0x1D0428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0424u;
            // 0x1d0428: 0x24a504c0  addiu       $a1, $a1, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2EBD70u;
    if (runtime->hasFunction(0x2EBD70u)) {
        auto targetFn = runtime->lookupFunction(0x2EBD70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D042Cu; }
        if (ctx->pc != 0x1D042Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMiniMapSymbol__7CSphidaFP14CMiniMapSymbol_0x2ebd70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D042Cu; }
        if (ctx->pc != 0x1D042Cu) { return; }
    }
    ctx->pc = 0x1D042Cu;
label_1d042c:
    // 0x1d042c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d042cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1d0430:
    // 0x1d0430: 0xc0752f4  jal         func_1D4BD0
label_1d0434:
    if (ctx->pc == 0x1D0434u) {
        ctx->pc = 0x1D0434u;
            // 0x1d0434: 0x248404c0  addiu       $a0, $a0, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1216));
        ctx->pc = 0x1D0438u;
        goto label_1d0438;
    }
    ctx->pc = 0x1D0430u;
    SET_GPR_U32(ctx, 31, 0x1D0438u);
    ctx->pc = 0x1D0434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0430u;
            // 0x1d0434: 0x248404c0  addiu       $a0, $a0, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4BD0u;
    if (runtime->hasFunction(0x1D4BD0u)) {
        auto targetFn = runtime->lookupFunction(0x1D4BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0438u; }
        if (ctx->pc != 0x1D0438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSymbolClose__14CMiniMapSymbolFv_0x1d4bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0438u; }
        if (ctx->pc != 0x1D0438u) { return; }
    }
    ctx->pc = 0x1D0438u;
label_1d0438:
    // 0x1d0438: 0x8f858dd8  lw          $a1, -0x7228($gp)
    ctx->pc = 0x1d0438u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938072)));
label_1d043c:
    // 0x1d043c: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d043cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1d0440:
    // 0x1d0440: 0xc0753a4  jal         func_1D4E90
label_1d0444:
    if (ctx->pc == 0x1D0444u) {
        ctx->pc = 0x1D0444u;
            // 0x1d0444: 0x248404c0  addiu       $a0, $a0, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1216));
        ctx->pc = 0x1D0448u;
        goto label_1d0448;
    }
    ctx->pc = 0x1D0440u;
    SET_GPR_U32(ctx, 31, 0x1D0448u);
    ctx->pc = 0x1D0444u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0440u;
            // 0x1d0444: 0x248404c0  addiu       $a0, $a0, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D4E90u;
    if (runtime->hasFunction(0x1D4E90u)) {
        auto targetFn = runtime->lookupFunction(0x1D4E90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0448u; }
        if (ctx->pc != 0x1D0448u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawSymbol_Chara__14CMiniMapSymbolFP11CCharacter2_0x1d4e90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0448u; }
        if (ctx->pc != 0x1D0448u) { return; }
    }
    ctx->pc = 0x1D0448u;
label_1d0448:
    // 0x1d0448: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1d0448u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d044c:
    // 0x1d044c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1d044cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d0450:
    // 0x1d0450: 0x3c0201ea  lui         $v0, 0x1EA
    ctx->pc = 0x1d0450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)490 << 16));
label_1d0454:
    // 0x1d0454: 0x24420710  addiu       $v0, $v0, 0x710
    ctx->pc = 0x1d0454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1808));
label_1d0458:
    // 0x1d0458: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x1d0458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_1d045c:
    // 0x1d045c: 0xc06e94c  jal         func_1BA530
label_1d0460:
    if (ctx->pc == 0x1D0460u) {
        ctx->pc = 0x1D0460u;
            // 0x1d0460: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x1D0464u;
        goto label_1d0464;
    }
    ctx->pc = 0x1D045Cu;
    SET_GPR_U32(ctx, 31, 0x1D0464u);
    ctx->pc = 0x1D0460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D045Cu;
            // 0x1d0460: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1BA530u;
    if (runtime->hasFunction(0x1BA530u)) {
        auto targetFn = runtime->lookupFunction(0x1BA530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0464u; }
        if (ctx->pc != 0x1D0464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DebugDraw__8CColPrimFv_0x1ba530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0464u; }
        if (ctx->pc != 0x1D0464u) { return; }
    }
    ctx->pc = 0x1D0464u;
label_1d0464:
    // 0x1d0464: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1d0464u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_1d0468:
    // 0x1d0468: 0x2a020040  slti        $v0, $s0, 0x40
    ctx->pc = 0x1d0468u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)64) ? 1 : 0);
label_1d046c:
    // 0x1d046c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_1d0470:
    if (ctx->pc == 0x1D0470u) {
        ctx->pc = 0x1D0470u;
            // 0x1d0470: 0x26520110  addiu       $s2, $s2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
        ctx->pc = 0x1D0474u;
        goto label_1d0474;
    }
    ctx->pc = 0x1D046Cu;
    {
        const bool branch_taken_0x1d046c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D0470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D046Cu;
            // 0x1d0470: 0x26520110  addiu       $s2, $s2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d046c) {
            ctx->pc = 0x1D0450u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d0450;
        }
    }
    ctx->pc = 0x1D0474u;
label_1d0474:
    // 0x1d0474: 0xc0987d4  jal         func_261F50
label_1d0478:
    if (ctx->pc == 0x1D0478u) {
        ctx->pc = 0x1D047Cu;
        goto label_1d047c;
    }
    ctx->pc = 0x1D0474u;
    SET_GPR_U32(ctx, 31, 0x1D047Cu);
    ctx->pc = 0x261F50u;
    if (runtime->hasFunction(0x261F50u)) {
        auto targetFn = runtime->lookupFunction(0x261F50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D047Cu; }
        if (ctx->pc != 0x1D047Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EdEventDraw__Fv_0x261f50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D047Cu; }
        if (ctx->pc != 0x1D047Cu) { return; }
    }
    ctx->pc = 0x1D047Cu;
label_1d047c:
    // 0x1d047c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x1d047cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1d0480:
    // 0x1d0480: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x1d0480u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_1d0484:
    // 0x1d0484: 0xc04ba14  jal         func_12E850
label_1d0488:
    if (ctx->pc == 0x1D0488u) {
        ctx->pc = 0x1D0488u;
            // 0x1d0488: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D048Cu;
        goto label_1d048c;
    }
    ctx->pc = 0x1D0484u;
    SET_GPR_U32(ctx, 31, 0x1D048Cu);
    ctx->pc = 0x1D0488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0484u;
            // 0x1d0488: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D048Cu; }
        if (ctx->pc != 0x1D048Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D048Cu; }
        if (ctx->pc != 0x1D048Cu) { return; }
    }
    ctx->pc = 0x1D048Cu;
label_1d048c:
    // 0x1d048c: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
label_1d0490:
    if (ctx->pc == 0x1D0490u) {
        ctx->pc = 0x1D0494u;
        goto label_1d0494;
    }
    ctx->pc = 0x1D048Cu;
    {
        const bool branch_taken_0x1d048c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d048c) {
            ctx->pc = 0x1D04B4u;
            goto label_1d04b4;
        }
    }
    ctx->pc = 0x1D0494u;
label_1d0494:
    // 0x1d0494: 0x8f828d78  lw          $v0, -0x7288($gp)
    ctx->pc = 0x1d0494u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937976)));
label_1d0498:
    // 0x1d0498: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1d049c:
    if (ctx->pc == 0x1D049Cu) {
        ctx->pc = 0x1D049Cu;
            // 0x1d049c: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x1D04A0u;
        goto label_1d04a0;
    }
    ctx->pc = 0x1D0498u;
    {
        const bool branch_taken_0x1d0498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D049Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0498u;
            // 0x1d049c: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0498) {
            ctx->pc = 0x1D04B4u;
            goto label_1d04b4;
        }
    }
    ctx->pc = 0x1D04A0u;
label_1d04a0:
    // 0x1d04a0: 0xc0a2d8c  jal         func_28B630
label_1d04a4:
    if (ctx->pc == 0x1D04A4u) {
        ctx->pc = 0x1D04A4u;
            // 0x1d04a4: 0x2484ff90  addiu       $a0, $a0, -0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967184));
        ctx->pc = 0x1D04A8u;
        goto label_1d04a8;
    }
    ctx->pc = 0x1D04A0u;
    SET_GPR_U32(ctx, 31, 0x1D04A8u);
    ctx->pc = 0x1D04A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D04A0u;
            // 0x1d04a4: 0x2484ff90  addiu       $a0, $a0, -0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B630u;
    if (runtime->hasFunction(0x28B630u)) {
        auto targetFn = runtime->lookupFunction(0x28B630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D04A8u; }
        if (ctx->pc != 0x1D04A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__18MessageTaskManagerFv_0x28b630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D04A8u; }
        if (ctx->pc != 0x1D04A8u) { return; }
    }
    ctx->pc = 0x1D04A8u;
label_1d04a8:
    // 0x1d04a8: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d04a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1d04ac:
    // 0x1d04ac: 0xc0a2d80  jal         func_28B600
label_1d04b0:
    if (ctx->pc == 0x1D04B0u) {
        ctx->pc = 0x1D04B0u;
            // 0x1d04b0: 0x2484ff90  addiu       $a0, $a0, -0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967184));
        ctx->pc = 0x1D04B4u;
        goto label_1d04b4;
    }
    ctx->pc = 0x1D04ACu;
    SET_GPR_U32(ctx, 31, 0x1D04B4u);
    ctx->pc = 0x1D04B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D04ACu;
            // 0x1d04b0: 0x2484ff90  addiu       $a0, $a0, -0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B600u;
    if (runtime->hasFunction(0x28B600u)) {
        auto targetFn = runtime->lookupFunction(0x28B600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D04B4u; }
        if (ctx->pc != 0x1D04B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__18MessageTaskManagerFv_0x28b600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D04B4u; }
        if (ctx->pc != 0x1D04B4u) { return; }
    }
    ctx->pc = 0x1D04B4u;
label_1d04b4:
    // 0x1d04b4: 0xc054ee8  jal         func_153BA0
label_1d04b8:
    if (ctx->pc == 0x1D04B8u) {
        ctx->pc = 0x1D04B8u;
            // 0x1d04b8: 0x8f848dc4  lw          $a0, -0x723C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938052)));
        ctx->pc = 0x1D04BCu;
        goto label_1d04bc;
    }
    ctx->pc = 0x1D04B4u;
    SET_GPR_U32(ctx, 31, 0x1D04BCu);
    ctx->pc = 0x1D04B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D04B4u;
            // 0x1d04b8: 0x8f848dc4  lw          $a0, -0x723C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938052)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153BA0u;
    if (runtime->hasFunction(0x153BA0u)) {
        auto targetFn = runtime->lookupFunction(0x153BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D04BCu; }
        if (ctx->pc != 0x1D04BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__6ClsMesFv_0x153ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D04BCu; }
        if (ctx->pc != 0x1D04BCu) { return; }
    }
    ctx->pc = 0x1D04BCu;
label_1d04bc:
    // 0x1d04bc: 0xc056cb0  jal         func_15B2C0
label_1d04c0:
    if (ctx->pc == 0x1D04C0u) {
        ctx->pc = 0x1D04C0u;
            // 0x1d04c0: 0x8f848dc4  lw          $a0, -0x723C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938052)));
        ctx->pc = 0x1D04C4u;
        goto label_1d04c4;
    }
    ctx->pc = 0x1D04BCu;
    SET_GPR_U32(ctx, 31, 0x1D04C4u);
    ctx->pc = 0x1D04C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D04BCu;
            // 0x1d04c0: 0x8f848dc4  lw          $a0, -0x723C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938052)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B2C0u;
    if (runtime->hasFunction(0x15B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x15B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D04C4u; }
        if (ctx->pc != 0x1D04C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMesWin__6ClsMesFv_0x15b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D04C4u; }
        if (ctx->pc != 0x1D04C4u) { return; }
    }
    ctx->pc = 0x1D04C4u;
label_1d04c4:
    // 0x1d04c4: 0xc0659dc  jal         func_196770
label_1d04c8:
    if (ctx->pc == 0x1D04C8u) {
        ctx->pc = 0x1D04CCu;
        goto label_1d04cc;
    }
    ctx->pc = 0x1D04C4u;
    SET_GPR_U32(ctx, 31, 0x1D04CCu);
    ctx->pc = 0x196770u;
    if (runtime->hasFunction(0x196770u)) {
        auto targetFn = runtime->lookupFunction(0x196770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D04CCu; }
        if (ctx->pc != 0x1D04CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMessage__Fv_0x196770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D04CCu; }
        if (ctx->pc != 0x1D04CCu) { return; }
    }
    ctx->pc = 0x1D04CCu;
label_1d04cc:
    // 0x1d04cc: 0xc054ee8  jal         func_153BA0
label_1d04d0:
    if (ctx->pc == 0x1D04D0u) {
        ctx->pc = 0x1D04D0u;
            // 0x1d04d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D04D4u;
        goto label_1d04d4;
    }
    ctx->pc = 0x1D04CCu;
    SET_GPR_U32(ctx, 31, 0x1D04D4u);
    ctx->pc = 0x1D04D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D04CCu;
            // 0x1d04d0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x153BA0u;
    if (runtime->hasFunction(0x153BA0u)) {
        auto targetFn = runtime->lookupFunction(0x153BA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D04D4u; }
        if (ctx->pc != 0x1D04D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__6ClsMesFv_0x153ba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D04D4u; }
        if (ctx->pc != 0x1D04D4u) { return; }
    }
    ctx->pc = 0x1D04D4u;
label_1d04d4:
    // 0x1d04d4: 0xc0659dc  jal         func_196770
label_1d04d8:
    if (ctx->pc == 0x1D04D8u) {
        ctx->pc = 0x1D04DCu;
        goto label_1d04dc;
    }
    ctx->pc = 0x1D04D4u;
    SET_GPR_U32(ctx, 31, 0x1D04DCu);
    ctx->pc = 0x196770u;
    if (runtime->hasFunction(0x196770u)) {
        auto targetFn = runtime->lookupFunction(0x196770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D04DCu; }
        if (ctx->pc != 0x1D04DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMessage__Fv_0x196770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D04DCu; }
        if (ctx->pc != 0x1D04DCu) { return; }
    }
    ctx->pc = 0x1D04DCu;
label_1d04dc:
    // 0x1d04dc: 0xc056cb0  jal         func_15B2C0
label_1d04e0:
    if (ctx->pc == 0x1D04E0u) {
        ctx->pc = 0x1D04E0u;
            // 0x1d04e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D04E4u;
        goto label_1d04e4;
    }
    ctx->pc = 0x1D04DCu;
    SET_GPR_U32(ctx, 31, 0x1D04E4u);
    ctx->pc = 0x1D04E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D04DCu;
            // 0x1d04e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15B2C0u;
    if (runtime->hasFunction(0x15B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x15B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D04E4u; }
        if (ctx->pc != 0x1D04E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMesWin__6ClsMesFv_0x15b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D04E4u; }
        if (ctx->pc != 0x1D04E4u) { return; }
    }
    ctx->pc = 0x1D04E4u;
label_1d04e4:
    // 0x1d04e4: 0xc0985ec  jal         func_2617B0
label_1d04e8:
    if (ctx->pc == 0x1D04E8u) {
        ctx->pc = 0x1D04ECu;
        goto label_1d04ec;
    }
    ctx->pc = 0x1D04E4u;
    SET_GPR_U32(ctx, 31, 0x1D04ECu);
    ctx->pc = 0x2617B0u;
    if (runtime->hasFunction(0x2617B0u)) {
        auto targetFn = runtime->lookupFunction(0x2617B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D04ECu; }
        if (ctx->pc != 0x1D04ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EventTimeDraw__Fv_0x2617b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D04ECu; }
        if (ctx->pc != 0x1D04ECu) { return; }
    }
    ctx->pc = 0x1D04ECu;
label_1d04ec:
    // 0x1d04ec: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_1d04f0:
    if (ctx->pc == 0x1D04F0u) {
        ctx->pc = 0x1D04F4u;
        goto label_1d04f4;
    }
    ctx->pc = 0x1D04ECu;
    {
        const bool branch_taken_0x1d04ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d04ec) {
            ctx->pc = 0x1D051Cu;
            goto label_1d051c;
        }
    }
    ctx->pc = 0x1D04F4u;
label_1d04f4:
    // 0x1d04f4: 0x8f828d78  lw          $v0, -0x7288($gp)
    ctx->pc = 0x1d04f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937976)));
label_1d04f8:
    // 0x1d04f8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_1d04fc:
    if (ctx->pc == 0x1D04FCu) {
        ctx->pc = 0x1D04FCu;
            // 0x1d04fc: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->pc = 0x1D0500u;
        goto label_1d0500;
    }
    ctx->pc = 0x1D04F8u;
    {
        const bool branch_taken_0x1d04f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D04FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D04F8u;
            // 0x1d04fc: 0x3c0401ea  lui         $a0, 0x1EA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d04f8) {
            ctx->pc = 0x1D051Cu;
            goto label_1d051c;
        }
    }
    ctx->pc = 0x1D0500u;
label_1d0500:
    // 0x1d0500: 0xc0a2cd4  jal         func_28B350
label_1d0504:
    if (ctx->pc == 0x1D0504u) {
        ctx->pc = 0x1D0504u;
            // 0x1d0504: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
        ctx->pc = 0x1D0508u;
        goto label_1d0508;
    }
    ctx->pc = 0x1D0500u;
    SET_GPR_U32(ctx, 31, 0x1D0508u);
    ctx->pc = 0x1D0504u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0500u;
            // 0x1d0504: 0x24840300  addiu       $a0, $a0, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B350u;
    if (runtime->hasFunction(0x28B350u)) {
        auto targetFn = runtime->lookupFunction(0x28B350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0508u; }
        if (ctx->pc != 0x1D0508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Step__20CStartupEpisodeTitleFv_0x28b350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0508u; }
        if (ctx->pc != 0x1D0508u) { return; }
    }
    ctx->pc = 0x1D0508u;
label_1d0508:
    // 0x1d0508: 0x3c0401ea  lui         $a0, 0x1EA
    ctx->pc = 0x1d0508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)490 << 16));
label_1d050c:
    // 0x1d050c: 0x24050058  addiu       $a1, $zero, 0x58
    ctx->pc = 0x1d050cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
label_1d0510:
    // 0x1d0510: 0x24840300  addiu       $a0, $a0, 0x300
    ctx->pc = 0x1d0510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 768));
label_1d0514:
    // 0x1d0514: 0xc0a2bf0  jal         func_28AFC0
label_1d0518:
    if (ctx->pc == 0x1D0518u) {
        ctx->pc = 0x1D0518u;
            // 0x1d0518: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->pc = 0x1D051Cu;
        goto label_1d051c;
    }
    ctx->pc = 0x1D0514u;
    SET_GPR_U32(ctx, 31, 0x1D051Cu);
    ctx->pc = 0x1D0518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0514u;
            // 0x1d0518: 0x24060048  addiu       $a2, $zero, 0x48 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28AFC0u;
    if (runtime->hasFunction(0x28AFC0u)) {
        auto targetFn = runtime->lookupFunction(0x28AFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D051Cu; }
        if (ctx->pc != 0x1D051Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawEpisode__20CStartupEpisodeTitleFii_0x28afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D051Cu; }
        if (ctx->pc != 0x1D051Cu) { return; }
    }
    ctx->pc = 0x1D051Cu;
label_1d051c:
    // 0x1d051c: 0xc0c39a0  jal         func_30E680
label_1d0520:
    if (ctx->pc == 0x1D0520u) {
        ctx->pc = 0x1D0524u;
        goto label_1d0524;
    }
    ctx->pc = 0x1D051Cu;
    SET_GPR_U32(ctx, 31, 0x1D0524u);
    ctx->pc = 0x30E680u;
    if (runtime->hasFunction(0x30E680u)) {
        auto targetFn = runtime->lookupFunction(0x30E680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0524u; }
        if (ctx->pc != 0x1D0524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NowTakePhoto__Fv_0x30e680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0524u; }
        if (ctx->pc != 0x1D0524u) { return; }
    }
    ctx->pc = 0x1D0524u;
label_1d0524:
    // 0x1d0524: 0x1040004c  beqz        $v0, . + 4 + (0x4C << 2)
label_1d0528:
    if (ctx->pc == 0x1D0528u) {
        ctx->pc = 0x1D0528u;
            // 0x1d0528: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D052Cu;
        goto label_1d052c;
    }
    ctx->pc = 0x1D0524u;
    {
        const bool branch_taken_0x1d0524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D0528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0524u;
            // 0x1d0528: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0524) {
            ctx->pc = 0x1D0658u;
            goto label_1d0658;
        }
    }
    ctx->pc = 0x1D052Cu;
label_1d052c:
    // 0x1d052c: 0x24050067  addiu       $a1, $zero, 0x67
    ctx->pc = 0x1d052cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
label_1d0530:
    // 0x1d0530: 0xc04ba14  jal         func_12E850
label_1d0534:
    if (ctx->pc == 0x1D0534u) {
        ctx->pc = 0x1D0534u;
            // 0x1d0534: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0538u;
        goto label_1d0538;
    }
    ctx->pc = 0x1D0530u;
    SET_GPR_U32(ctx, 31, 0x1D0538u);
    ctx->pc = 0x1D0534u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0530u;
            // 0x1d0534: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0538u; }
        if (ctx->pc != 0x1D0538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0538u; }
        if (ctx->pc != 0x1D0538u) { return; }
    }
    ctx->pc = 0x1D0538u;
label_1d0538:
    // 0x1d0538: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1d0538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d053c:
    // 0x1d053c: 0x8f848db8  lw          $a0, -0x7248($gp)
    ctx->pc = 0x1d053cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_1d0540:
    // 0x1d0540: 0xafa21f48  sw          $v0, 0x1F48($sp)
    ctx->pc = 0x1d0540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8008), GPR_U32(ctx, 2));
label_1d0544:
    // 0x1d0544: 0x27a51f48  addiu       $a1, $sp, 0x1F48
    ctx->pc = 0x1d0544u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 8008));
label_1d0548:
    // 0x1d0548: 0x8f828da0  lw          $v0, -0x7260($gp)
    ctx->pc = 0x1d0548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938016)));
label_1d054c:
    // 0x1d054c: 0xafa01f4c  sw          $zero, 0x1F4C($sp)
    ctx->pc = 0x1d054cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8012), GPR_U32(ctx, 0));
label_1d0550:
    // 0x1d0550: 0xafa01f50  sw          $zero, 0x1F50($sp)
    ctx->pc = 0x1d0550u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8016), GPR_U32(ctx, 0));
label_1d0554:
    // 0x1d0554: 0xc077450  jal         func_1DD140
label_1d0558:
    if (ctx->pc == 0x1D0558u) {
        ctx->pc = 0x1D0558u;
            // 0x1d0558: 0x24537f30  addiu       $s3, $v0, 0x7F30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 32560));
        ctx->pc = 0x1D055Cu;
        goto label_1d055c;
    }
    ctx->pc = 0x1D0554u;
    SET_GPR_U32(ctx, 31, 0x1D055Cu);
    ctx->pc = 0x1D0558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0554u;
            // 0x1d0558: 0x24537f30  addiu       $s3, $v0, 0x7F30 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 32560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DD140u;
    if (runtime->hasFunction(0x1DD140u)) {
        auto targetFn = runtime->lookupFunction(0x1DD140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D055Cu; }
        if (ctx->pc != 0x1D055Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckPhoto__11CMonsterManFPQ26CScene17InScreenCharaInfo_0x1dd140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D055Cu; }
        if (ctx->pc != 0x1D055Cu) { return; }
    }
    ctx->pc = 0x1D055Cu;
label_1d055c:
    // 0x1d055c: 0x8fb11f48  lw          $s1, 0x1F48($sp)
    ctx->pc = 0x1d055cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8008)));
label_1d0560:
    // 0x1d0560: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d0560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d0564:
    // 0x1d0564: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1d0564u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1d0568:
    // 0x1d0568: 0xc07fac0  jal         func_1FEB00
label_1d056c:
    if (ctx->pc == 0x1D056Cu) {
        ctx->pc = 0x1D056Cu;
            // 0x1d056c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0570u;
        goto label_1d0570;
    }
    ctx->pc = 0x1D0568u;
    SET_GPR_U32(ctx, 31, 0x1D0570u);
    ctx->pc = 0x1D056Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0568u;
            // 0x1d056c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB00u;
    if (runtime->hasFunction(0x1FEB00u)) {
        auto targetFn = runtime->lookupFunction(0x1FEB00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0570u; }
        if (ctx->pc != 0x1D0570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsPhotoSpace__15CInventUserDataFPi_0x1feb00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0570u; }
        if (ctx->pc != 0x1D0570u) { return; }
    }
    ctx->pc = 0x1D0570u;
label_1d0570:
    // 0x1d0570: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1d0570u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d0574:
    // 0x1d0574: 0x27a51f6c  addiu       $a1, $sp, 0x1F6C
    ctx->pc = 0x1d0574u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 8044));
label_1d0578:
    // 0x1d0578: 0xc0c3a04  jal         func_30E810
label_1d057c:
    if (ctx->pc == 0x1D057Cu) {
        ctx->pc = 0x1D057Cu;
            // 0x1d057c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0580u;
        goto label_1d0580;
    }
    ctx->pc = 0x1D0578u;
    SET_GPR_U32(ctx, 31, 0x1D0580u);
    ctx->pc = 0x1D057Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0578u;
            // 0x1d057c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30E810u;
    if (runtime->hasFunction(0x30E810u)) {
        auto targetFn = runtime->lookupFunction(0x30E810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0580u; }
        if (ctx->pc != 0x1D0580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawTakePhoto__FP17USER_PICTURE_INFOPf_0x30e810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0580u; }
        if (ctx->pc != 0x1D0580u) { return; }
    }
    ctx->pc = 0x1D0580u;
label_1d0580:
    // 0x1d0580: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_1d0584:
    if (ctx->pc == 0x1D0584u) {
        ctx->pc = 0x1D0588u;
        goto label_1d0588;
    }
    ctx->pc = 0x1D0580u;
    {
        const bool branch_taken_0x1d0580 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d0580) {
            ctx->pc = 0x1D0640u;
            goto label_1d0640;
        }
    }
    ctx->pc = 0x1D0588u;
label_1d0588:
    // 0x1d0588: 0xc7a01f6c  lwc1        $f0, 0x1F6C($sp)
    ctx->pc = 0x1d0588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_1d058c:
    // 0x1d058c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x1d058cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_1d0590:
    // 0x1d0590: 0x8f848dac  lw          $a0, -0x7254($gp)
    ctx->pc = 0x1d0590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1d0594:
    // 0x1d0594: 0x27a51f58  addiu       $a1, $sp, 0x1F58
    ctx->pc = 0x1d0594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 8024));
label_1d0598:
    // 0x1d0598: 0xafa21f58  sw          $v0, 0x1F58($sp)
    ctx->pc = 0x1d0598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8024), GPR_U32(ctx, 2));
label_1d059c:
    // 0x1d059c: 0xafa21f60  sw          $v0, 0x1F60($sp)
    ctx->pc = 0x1d059cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8032), GPR_U32(ctx, 2));
label_1d05a0:
    // 0x1d05a0: 0xafa01f5c  sw          $zero, 0x1F5C($sp)
    ctx->pc = 0x1d05a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8028), GPR_U32(ctx, 0));
label_1d05a4:
    // 0x1d05a4: 0xc0a0f8c  jal         func_283E30
label_1d05a8:
    if (ctx->pc == 0x1D05A8u) {
        ctx->pc = 0x1D05A8u;
            // 0x1d05a8: 0xe7a01f58  swc1        $f0, 0x1F58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8024), bits); }
        ctx->pc = 0x1D05ACu;
        goto label_1d05ac;
    }
    ctx->pc = 0x1D05A4u;
    SET_GPR_U32(ctx, 31, 0x1D05ACu);
    ctx->pc = 0x1D05A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D05A4u;
            // 0x1d05a8: 0xe7a01f58  swc1        $f0, 0x1F58($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8024), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x283E30u;
    if (runtime->hasFunction(0x283E30u)) {
        auto targetFn = runtime->lookupFunction(0x283E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D05ACu; }
        if (ctx->pc != 0x1D05ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InScreenFunc__6CSceneFP16InScreenFuncInfo_0x283e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D05ACu; }
        if (ctx->pc != 0x1D05ACu) { return; }
    }
    ctx->pc = 0x1D05ACu;
label_1d05ac:
    // 0x1d05ac: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1d05acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d05b0:
    // 0x1d05b0: 0x8f828db0  lw          $v0, -0x7250($gp)
    ctx->pc = 0x1d05b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938032)));
label_1d05b4:
    // 0x1d05b4: 0xc0b49fc  jal         func_2D27F0
label_1d05b8:
    if (ctx->pc == 0x1D05B8u) {
        ctx->pc = 0x1D05B8u;
            // 0x1d05b8: 0x24440024  addiu       $a0, $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
        ctx->pc = 0x1D05BCu;
        goto label_1d05bc;
    }
    ctx->pc = 0x1D05B4u;
    SET_GPR_U32(ctx, 31, 0x1D05BCu);
    ctx->pc = 0x1D05B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D05B4u;
            // 0x1d05b8: 0x24440024  addiu       $a0, $v0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D27F0u;
    if (runtime->hasFunction(0x2D27F0u)) {
        auto targetFn = runtime->lookupFunction(0x2D27F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D05BCu; }
        if (ctx->pc != 0x1D05BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchMapNo__FPc_0x2d27f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D05BCu; }
        if (ctx->pc != 0x1D05BCu) { return; }
    }
    ctx->pc = 0x1D05BCu;
label_1d05bc:
    // 0x1d05bc: 0xa6420002  sh          $v0, 0x2($s2)
    ctx->pc = 0x1d05bcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 2), (uint16_t)GPR_U32(ctx, 2));
label_1d05c0:
    // 0x1d05c0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d05c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d05c4:
    // 0x1d05c4: 0xa643000a  sh          $v1, 0xA($s2)
    ctx->pc = 0x1d05c4u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 10), (uint16_t)GPR_U32(ctx, 3));
label_1d05c8:
    // 0x1d05c8: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_1d05cc:
    if (ctx->pc == 0x1D05CCu) {
        ctx->pc = 0x1D05CCu;
            // 0x1d05cc: 0xa6430004  sh          $v1, 0x4($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1D05D0u;
        goto label_1d05d0;
    }
    ctx->pc = 0x1D05C8u;
    {
        const bool branch_taken_0x1d05c8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D05CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D05C8u;
            // 0x1d05cc: 0xa6430004  sh          $v1, 0x4($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d05c8) {
            ctx->pc = 0x1D05D8u;
            goto label_1d05d8;
        }
    }
    ctx->pc = 0x1D05D0u;
label_1d05d0:
    // 0x1d05d0: 0x8e830020  lw          $v1, 0x20($s4)
    ctx->pc = 0x1d05d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_1d05d4:
    // 0x1d05d4: 0x0  nop
    ctx->pc = 0x1d05d4u;
    // NOP
label_1d05d8:
    // 0x1d05d8: 0x24027531  addiu       $v0, $zero, 0x7531
    ctx->pc = 0x1d05d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30001));
label_1d05dc:
    // 0x1d05dc: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1d05e0:
    if (ctx->pc == 0x1D05E0u) {
        ctx->pc = 0x1D05E0u;
            // 0x1d05e0: 0x24020104  addiu       $v0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x1D05E4u;
        goto label_1d05e4;
    }
    ctx->pc = 0x1D05DCu;
    {
        const bool branch_taken_0x1d05dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D05E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D05DCu;
            // 0x1d05e0: 0x24020104  addiu       $v0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d05dc) {
            ctx->pc = 0x1D05ECu;
            goto label_1d05ec;
        }
    }
    ctx->pc = 0x1D05E4u;
label_1d05e4:
    // 0x1d05e4: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x1d05e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1d05e8:
    // 0x1d05e8: 0xa6420004  sh          $v0, 0x4($s2)
    ctx->pc = 0x1d05e8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 4), (uint16_t)GPR_U32(ctx, 2));
label_1d05ec:
    // 0x1d05ec: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
label_1d05f0:
    if (ctx->pc == 0x1D05F0u) {
        ctx->pc = 0x1D05F4u;
        goto label_1d05f4;
    }
    ctx->pc = 0x1D05ECu;
    {
        const bool branch_taken_0x1d05ec = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1d05ec) {
            ctx->pc = 0x1D060Cu;
            goto label_1d060c;
        }
    }
    ctx->pc = 0x1D05F4u;
label_1d05f4:
    // 0x1d05f4: 0xc064218  jal         func_190860
label_1d05f8:
    if (ctx->pc == 0x1D05F8u) {
        ctx->pc = 0x1D05F8u;
            // 0x1d05f8: 0xa643000a  sh          $v1, 0xA($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x1D05FCu;
        goto label_1d05fc;
    }
    ctx->pc = 0x1D05F4u;
    SET_GPR_U32(ctx, 31, 0x1D05FCu);
    ctx->pc = 0x1D05F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D05F4u;
            // 0x1d05f8: 0xa643000a  sh          $v1, 0xA($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 10), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190860u;
    if (runtime->hasFunction(0x190860u)) {
        auto targetFn = runtime->lookupFunction(0x190860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D05FCu; }
        if (ctx->pc != 0x1D05FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemSndID__Fv_0x190860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D05FCu; }
        if (ctx->pc != 0x1D05FCu) { return; }
    }
    ctx->pc = 0x1D05FCu;
label_1d05fc:
    // 0x1d05fc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d05fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d0600:
    // 0x1d0600: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1d0600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1d0604:
    // 0x1d0604: 0xc063818  jal         func_18E060
label_1d0608:
    if (ctx->pc == 0x1D0608u) {
        ctx->pc = 0x1D0608u;
            // 0x1d0608: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D060Cu;
        goto label_1d060c;
    }
    ctx->pc = 0x1D0604u;
    SET_GPR_U32(ctx, 31, 0x1D060Cu);
    ctx->pc = 0x1D0608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0604u;
            // 0x1d0608: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D060Cu; }
        if (ctx->pc != 0x1D060Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D060Cu; }
        if (ctx->pc != 0x1D060Cu) { return; }
    }
    ctx->pc = 0x1D060Cu;
label_1d060c:
    // 0x1d060c: 0x620000a  bltz        $s1, . + 4 + (0xA << 2)
label_1d0610:
    if (ctx->pc == 0x1D0610u) {
        ctx->pc = 0x1D0610u;
            // 0x1d0610: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0614u;
        goto label_1d0614;
    }
    ctx->pc = 0x1D060Cu;
    {
        const bool branch_taken_0x1d060c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x1D0610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D060Cu;
            // 0x1d0610: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d060c) {
            ctx->pc = 0x1D0638u;
            goto label_1d0638;
        }
    }
    ctx->pc = 0x1D0614u;
label_1d0614:
    // 0x1d0614: 0x1a000007  blez        $s0, . + 4 + (0x7 << 2)
label_1d0618:
    if (ctx->pc == 0x1D0618u) {
        ctx->pc = 0x1D0618u;
            // 0x1d0618: 0xa6510006  sh          $s1, 0x6($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 17));
        ctx->pc = 0x1D061Cu;
        goto label_1d061c;
    }
    ctx->pc = 0x1D0614u;
    {
        const bool branch_taken_0x1d0614 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x1D0618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0614u;
            // 0x1d0618: 0xa6510006  sh          $s1, 0x6($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 6), (uint16_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0614) {
            ctx->pc = 0x1D0634u;
            goto label_1d0634;
        }
    }
    ctx->pc = 0x1D061Cu;
label_1d061c:
    // 0x1d061c: 0xc064218  jal         func_190860
label_1d0620:
    if (ctx->pc == 0x1D0620u) {
        ctx->pc = 0x1D0620u;
            // 0x1d0620: 0xa650000a  sh          $s0, 0xA($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 10), (uint16_t)GPR_U32(ctx, 16));
        ctx->pc = 0x1D0624u;
        goto label_1d0624;
    }
    ctx->pc = 0x1D061Cu;
    SET_GPR_U32(ctx, 31, 0x1D0624u);
    ctx->pc = 0x1D0620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D061Cu;
            // 0x1d0620: 0xa650000a  sh          $s0, 0xA($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 10), (uint16_t)GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190860u;
    if (runtime->hasFunction(0x190860u)) {
        auto targetFn = runtime->lookupFunction(0x190860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0624u; }
        if (ctx->pc != 0x1D0624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemSndID__Fv_0x190860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0624u; }
        if (ctx->pc != 0x1D0624u) { return; }
    }
    ctx->pc = 0x1D0624u;
label_1d0624:
    // 0x1d0624: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1d0624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1d0628:
    // 0x1d0628: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x1d0628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1d062c:
    // 0x1d062c: 0xc063818  jal         func_18E060
label_1d0630:
    if (ctx->pc == 0x1D0630u) {
        ctx->pc = 0x1D0630u;
            // 0x1d0630: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0634u;
        goto label_1d0634;
    }
    ctx->pc = 0x1D062Cu;
    SET_GPR_U32(ctx, 31, 0x1D0634u);
    ctx->pc = 0x1D0630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D062Cu;
            // 0x1d0630: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18E060u;
    if (runtime->hasFunction(0x18E060u)) {
        auto targetFn = runtime->lookupFunction(0x18E060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0634u; }
        if (ctx->pc != 0x1D0634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSePlay__FUiii_0x18e060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0634u; }
        if (ctx->pc != 0x1D0634u) { return; }
    }
    ctx->pc = 0x1D0634u;
label_1d0634:
    // 0x1d0634: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1d0634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1d0638:
    // 0x1d0638: 0xc0c3d84  jal         func_30F610
label_1d063c:
    if (ctx->pc == 0x1D063Cu) {
        ctx->pc = 0x1D0640u;
        goto label_1d0640;
    }
    ctx->pc = 0x1D0638u;
    SET_GPR_U32(ctx, 31, 0x1D0640u);
    ctx->pc = 0x30F610u;
    if (runtime->hasFunction(0x30F610u)) {
        auto targetFn = runtime->lookupFunction(0x30F610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0640u; }
        if (ctx->pc != 0x1D0640u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTookPhotoData__FP17USER_PICTURE_INFO_0x30f610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0640u; }
        if (ctx->pc != 0x1D0640u) { return; }
    }
    ctx->pc = 0x1D0640u;
label_1d0640:
    // 0x1d0640: 0x3c0101ea  lui         $at, 0x1EA
    ctx->pc = 0x1d0640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)490 << 16));
label_1d0644:
    // 0x1d0644: 0x8c22f6e0  lw          $v0, -0x920($at)
    ctx->pc = 0x1d0644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294964960)));
label_1d0648:
    // 0x1d0648: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1d064c:
    if (ctx->pc == 0x1D064Cu) {
        ctx->pc = 0x1D064Cu;
            // 0x1d064c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1D0650u;
        goto label_1d0650;
    }
    ctx->pc = 0x1D0648u;
    {
        const bool branch_taken_0x1d0648 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D064Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0648u;
            // 0x1d064c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d0648) {
            ctx->pc = 0x1D0658u;
            goto label_1d0658;
        }
    }
    ctx->pc = 0x1D0650u;
label_1d0650:
    // 0x1d0650: 0xc0c3da8  jal         func_30F6A0
label_1d0654:
    if (ctx->pc == 0x1D0654u) {
        ctx->pc = 0x1D0654u;
            // 0x1d0654: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->pc = 0x1D0658u;
        goto label_1d0658;
    }
    ctx->pc = 0x1D0650u;
    SET_GPR_U32(ctx, 31, 0x1D0658u);
    ctx->pc = 0x1D0654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0650u;
            // 0x1d0654: 0x24040058  addiu       $a0, $zero, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 88));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30F6A0u;
    if (runtime->hasFunction(0x30F6A0u)) {
        auto targetFn = runtime->lookupFunction(0x30F6A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0658u; }
        if (ctx->pc != 0x1D0658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawTakePhotoSystem__FiP15CInventUserData_0x30f6a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0658u; }
        if (ctx->pc != 0x1D0658u) { return; }
    }
    ctx->pc = 0x1D0658u;
label_1d0658:
    // 0x1d0658: 0xc0c653c  jal         func_3194F0
label_1d065c:
    if (ctx->pc == 0x1D065Cu) {
        ctx->pc = 0x1D0660u;
        goto label_1d0660;
    }
    ctx->pc = 0x1D0658u;
    SET_GPR_U32(ctx, 31, 0x1D0660u);
    ctx->pc = 0x3194F0u;
    if (runtime->hasFunction(0x3194F0u)) {
        auto targetFn = runtime->lookupFunction(0x3194F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0660u; }
        if (ctx->pc != 0x1D0660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawHelpMes__Fv_0x3194f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0660u; }
        if (ctx->pc != 0x1D0660u) { return; }
    }
    ctx->pc = 0x1D0660u;
label_1d0660:
    // 0x1d0660: 0x8f828dac  lw          $v0, -0x7254($gp)
    ctx->pc = 0x1d0660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938028)));
label_1d0664:
    // 0x1d0664: 0xc05f7b4  jal         func_17DED0
label_1d0668:
    if (ctx->pc == 0x1D0668u) {
        ctx->pc = 0x1D0668u;
            // 0x1d0668: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->pc = 0x1D066Cu;
        goto label_1d066c;
    }
    ctx->pc = 0x1D0664u;
    SET_GPR_U32(ctx, 31, 0x1D066Cu);
    ctx->pc = 0x1D0668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D0664u;
            // 0x1d0668: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17DED0u;
    if (runtime->hasFunction(0x17DED0u)) {
        auto targetFn = runtime->lookupFunction(0x17DED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D066Cu; }
        if (ctx->pc != 0x1D066Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Draw__10CFadeInOutFv_0x17ded0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D066Cu; }
        if (ctx->pc != 0x1D066Cu) { return; }
    }
    ctx->pc = 0x1D066Cu;
label_1d066c:
    // 0x1d066c: 0xc0a000c  jal         func_280030
label_1d0670:
    if (ctx->pc == 0x1D0670u) {
        ctx->pc = 0x1D0674u;
        goto label_1d0674;
    }
    ctx->pc = 0x1D066Cu;
    SET_GPR_U32(ctx, 31, 0x1D0674u);
    ctx->pc = 0x280030u;
    if (runtime->hasFunction(0x280030u)) {
        auto targetFn = runtime->lookupFunction(0x280030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0674u; }
        if (ctx->pc != 0x1D0674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawEventEdit__Fv_0x280030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0674u; }
        if (ctx->pc != 0x1D0674u) { return; }
    }
    ctx->pc = 0x1D0674u;
label_1d0674:
    // 0x1d0674: 0xc075098  jal         func_1D4260
label_1d0678:
    if (ctx->pc == 0x1D0678u) {
        ctx->pc = 0x1D067Cu;
        goto label_1d067c;
    }
    ctx->pc = 0x1D0674u;
    SET_GPR_U32(ctx, 31, 0x1D067Cu);
    ctx->pc = 0x1D4260u;
    if (runtime->hasFunction(0x1D4260u)) {
        auto targetFn = runtime->lookupFunction(0x1D4260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D067Cu; }
        if (ctx->pc != 0x1D067Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DebugMainDraw__Fv_0x1d4260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D067Cu; }
        if (ctx->pc != 0x1D067Cu) { return; }
    }
    ctx->pc = 0x1D067Cu;
label_1d067c:
    // 0x1d067c: 0xc06eae8  jal         func_1BABA0
label_1d0680:
    if (ctx->pc == 0x1D0680u) {
        ctx->pc = 0x1D0684u;
        goto label_1d0684;
    }
    ctx->pc = 0x1D067Cu;
    SET_GPR_U32(ctx, 31, 0x1D0684u);
    ctx->pc = 0x1BABA0u;
    if (runtime->hasFunction(0x1BABA0u)) {
        auto targetFn = runtime->lookupFunction(0x1BABA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0684u; }
        if (ctx->pc != 0x1D0684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        dngDebugDraw__Fv_0x1baba0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D0684u; }
        if (ctx->pc != 0x1D0684u) { return; }
    }
    ctx->pc = 0x1D0684u;
label_1d0684:
    // 0x1d0684: 0xc06eea4  jal         func_1BBA90
label_1d0688:
    if (ctx->pc == 0x1D0688u) {
        ctx->pc = 0x1D068Cu;
        goto label_1d068c;
    }
    ctx->pc = 0x1D0684u;
    SET_GPR_U32(ctx, 31, 0x1D068Cu);
    ctx->pc = 0x1BBA90u;
    if (runtime->hasFunction(0x1BBA90u)) {
        auto targetFn = runtime->lookupFunction(0x1BBA90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D068Cu; }
        if (ctx->pc != 0x1D068Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDebugWindow__Fv_0x1bba90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D068Cu; }
        if (ctx->pc != 0x1D068Cu) { return; }
    }
    ctx->pc = 0x1D068Cu;
label_1d068c:
    // 0x1d068c: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1d068cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1d0690:
    // 0x1d0690: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1d0690u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1d0694:
    // 0x1d0694: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1d0694u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1d0698:
    // 0x1d0698: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1d0698u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1d069c:
    // 0x1d069c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1d069cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1d06a0:
    // 0x1d06a0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1d06a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1d06a4:
    // 0x1d06a4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1d06a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1d06a8:
    // 0x1d06a8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1d06a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1d06ac:
    // 0x1d06ac: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1d06acu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1d06b0:
    // 0x1d06b0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d06b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1d06b4:
    // 0x1d06b4: 0x3e00008  jr          $ra
label_1d06b8:
    if (ctx->pc == 0x1D06B8u) {
        ctx->pc = 0x1D06B8u;
            // 0x1d06b8: 0x27bd1f70  addiu       $sp, $sp, 0x1F70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 8048));
        ctx->pc = 0x1D06BCu;
        goto label_fallthrough_0x1d06b4;
    }
    ctx->pc = 0x1D06B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D06B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D06B4u;
            // 0x1d06b8: 0x27bd1f70  addiu       $sp, $sp, 0x1F70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 8048));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1d06b4:
    ctx->pc = 0x1D06BCu;
}
