#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: _COPY_MONS2SCNCHR__FP12RS_STACKDATAi
// Address: 0x27bfa0 - 0x27c6f4
void ps2__COPY_MONS2SCNCHR__FP12RS_STACKDATAi_0x27bfa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__COPY_MONS2SCNCHR__FP12RS_STACKDATAi_0x27bfa0");
#endif

    switch (ctx->pc) {
        case 0x27bfa0u: goto label_27bfa0;
        case 0x27bfa4u: goto label_27bfa4;
        case 0x27bfa8u: goto label_27bfa8;
        case 0x27bfacu: goto label_27bfac;
        case 0x27bfb0u: goto label_27bfb0;
        case 0x27bfb4u: goto label_27bfb4;
        case 0x27bfb8u: goto label_27bfb8;
        case 0x27bfbcu: goto label_27bfbc;
        case 0x27bfc0u: goto label_27bfc0;
        case 0x27bfc4u: goto label_27bfc4;
        case 0x27bfc8u: goto label_27bfc8;
        case 0x27bfccu: goto label_27bfcc;
        case 0x27bfd0u: goto label_27bfd0;
        case 0x27bfd4u: goto label_27bfd4;
        case 0x27bfd8u: goto label_27bfd8;
        case 0x27bfdcu: goto label_27bfdc;
        case 0x27bfe0u: goto label_27bfe0;
        case 0x27bfe4u: goto label_27bfe4;
        case 0x27bfe8u: goto label_27bfe8;
        case 0x27bfecu: goto label_27bfec;
        case 0x27bff0u: goto label_27bff0;
        case 0x27bff4u: goto label_27bff4;
        case 0x27bff8u: goto label_27bff8;
        case 0x27bffcu: goto label_27bffc;
        case 0x27c000u: goto label_27c000;
        case 0x27c004u: goto label_27c004;
        case 0x27c008u: goto label_27c008;
        case 0x27c00cu: goto label_27c00c;
        case 0x27c010u: goto label_27c010;
        case 0x27c014u: goto label_27c014;
        case 0x27c018u: goto label_27c018;
        case 0x27c01cu: goto label_27c01c;
        case 0x27c020u: goto label_27c020;
        case 0x27c024u: goto label_27c024;
        case 0x27c028u: goto label_27c028;
        case 0x27c02cu: goto label_27c02c;
        case 0x27c030u: goto label_27c030;
        case 0x27c034u: goto label_27c034;
        case 0x27c038u: goto label_27c038;
        case 0x27c03cu: goto label_27c03c;
        case 0x27c040u: goto label_27c040;
        case 0x27c044u: goto label_27c044;
        case 0x27c048u: goto label_27c048;
        case 0x27c04cu: goto label_27c04c;
        case 0x27c050u: goto label_27c050;
        case 0x27c054u: goto label_27c054;
        case 0x27c058u: goto label_27c058;
        case 0x27c05cu: goto label_27c05c;
        case 0x27c060u: goto label_27c060;
        case 0x27c064u: goto label_27c064;
        case 0x27c068u: goto label_27c068;
        case 0x27c06cu: goto label_27c06c;
        case 0x27c070u: goto label_27c070;
        case 0x27c074u: goto label_27c074;
        case 0x27c078u: goto label_27c078;
        case 0x27c07cu: goto label_27c07c;
        case 0x27c080u: goto label_27c080;
        case 0x27c084u: goto label_27c084;
        case 0x27c088u: goto label_27c088;
        case 0x27c08cu: goto label_27c08c;
        case 0x27c090u: goto label_27c090;
        case 0x27c094u: goto label_27c094;
        case 0x27c098u: goto label_27c098;
        case 0x27c09cu: goto label_27c09c;
        case 0x27c0a0u: goto label_27c0a0;
        case 0x27c0a4u: goto label_27c0a4;
        case 0x27c0a8u: goto label_27c0a8;
        case 0x27c0acu: goto label_27c0ac;
        case 0x27c0b0u: goto label_27c0b0;
        case 0x27c0b4u: goto label_27c0b4;
        case 0x27c0b8u: goto label_27c0b8;
        case 0x27c0bcu: goto label_27c0bc;
        case 0x27c0c0u: goto label_27c0c0;
        case 0x27c0c4u: goto label_27c0c4;
        case 0x27c0c8u: goto label_27c0c8;
        case 0x27c0ccu: goto label_27c0cc;
        case 0x27c0d0u: goto label_27c0d0;
        case 0x27c0d4u: goto label_27c0d4;
        case 0x27c0d8u: goto label_27c0d8;
        case 0x27c0dcu: goto label_27c0dc;
        case 0x27c0e0u: goto label_27c0e0;
        case 0x27c0e4u: goto label_27c0e4;
        case 0x27c0e8u: goto label_27c0e8;
        case 0x27c0ecu: goto label_27c0ec;
        case 0x27c0f0u: goto label_27c0f0;
        case 0x27c0f4u: goto label_27c0f4;
        case 0x27c0f8u: goto label_27c0f8;
        case 0x27c0fcu: goto label_27c0fc;
        case 0x27c100u: goto label_27c100;
        case 0x27c104u: goto label_27c104;
        case 0x27c108u: goto label_27c108;
        case 0x27c10cu: goto label_27c10c;
        case 0x27c110u: goto label_27c110;
        case 0x27c114u: goto label_27c114;
        case 0x27c118u: goto label_27c118;
        case 0x27c11cu: goto label_27c11c;
        case 0x27c120u: goto label_27c120;
        case 0x27c124u: goto label_27c124;
        case 0x27c128u: goto label_27c128;
        case 0x27c12cu: goto label_27c12c;
        case 0x27c130u: goto label_27c130;
        case 0x27c134u: goto label_27c134;
        case 0x27c138u: goto label_27c138;
        case 0x27c13cu: goto label_27c13c;
        case 0x27c140u: goto label_27c140;
        case 0x27c144u: goto label_27c144;
        case 0x27c148u: goto label_27c148;
        case 0x27c14cu: goto label_27c14c;
        case 0x27c150u: goto label_27c150;
        case 0x27c154u: goto label_27c154;
        case 0x27c158u: goto label_27c158;
        case 0x27c15cu: goto label_27c15c;
        case 0x27c160u: goto label_27c160;
        case 0x27c164u: goto label_27c164;
        case 0x27c168u: goto label_27c168;
        case 0x27c16cu: goto label_27c16c;
        case 0x27c170u: goto label_27c170;
        case 0x27c174u: goto label_27c174;
        case 0x27c178u: goto label_27c178;
        case 0x27c17cu: goto label_27c17c;
        case 0x27c180u: goto label_27c180;
        case 0x27c184u: goto label_27c184;
        case 0x27c188u: goto label_27c188;
        case 0x27c18cu: goto label_27c18c;
        case 0x27c190u: goto label_27c190;
        case 0x27c194u: goto label_27c194;
        case 0x27c198u: goto label_27c198;
        case 0x27c19cu: goto label_27c19c;
        case 0x27c1a0u: goto label_27c1a0;
        case 0x27c1a4u: goto label_27c1a4;
        case 0x27c1a8u: goto label_27c1a8;
        case 0x27c1acu: goto label_27c1ac;
        case 0x27c1b0u: goto label_27c1b0;
        case 0x27c1b4u: goto label_27c1b4;
        case 0x27c1b8u: goto label_27c1b8;
        case 0x27c1bcu: goto label_27c1bc;
        case 0x27c1c0u: goto label_27c1c0;
        case 0x27c1c4u: goto label_27c1c4;
        case 0x27c1c8u: goto label_27c1c8;
        case 0x27c1ccu: goto label_27c1cc;
        case 0x27c1d0u: goto label_27c1d0;
        case 0x27c1d4u: goto label_27c1d4;
        case 0x27c1d8u: goto label_27c1d8;
        case 0x27c1dcu: goto label_27c1dc;
        case 0x27c1e0u: goto label_27c1e0;
        case 0x27c1e4u: goto label_27c1e4;
        case 0x27c1e8u: goto label_27c1e8;
        case 0x27c1ecu: goto label_27c1ec;
        case 0x27c1f0u: goto label_27c1f0;
        case 0x27c1f4u: goto label_27c1f4;
        case 0x27c1f8u: goto label_27c1f8;
        case 0x27c1fcu: goto label_27c1fc;
        case 0x27c200u: goto label_27c200;
        case 0x27c204u: goto label_27c204;
        case 0x27c208u: goto label_27c208;
        case 0x27c20cu: goto label_27c20c;
        case 0x27c210u: goto label_27c210;
        case 0x27c214u: goto label_27c214;
        case 0x27c218u: goto label_27c218;
        case 0x27c21cu: goto label_27c21c;
        case 0x27c220u: goto label_27c220;
        case 0x27c224u: goto label_27c224;
        case 0x27c228u: goto label_27c228;
        case 0x27c22cu: goto label_27c22c;
        case 0x27c230u: goto label_27c230;
        case 0x27c234u: goto label_27c234;
        case 0x27c238u: goto label_27c238;
        case 0x27c23cu: goto label_27c23c;
        case 0x27c240u: goto label_27c240;
        case 0x27c244u: goto label_27c244;
        case 0x27c248u: goto label_27c248;
        case 0x27c24cu: goto label_27c24c;
        case 0x27c250u: goto label_27c250;
        case 0x27c254u: goto label_27c254;
        case 0x27c258u: goto label_27c258;
        case 0x27c25cu: goto label_27c25c;
        case 0x27c260u: goto label_27c260;
        case 0x27c264u: goto label_27c264;
        case 0x27c268u: goto label_27c268;
        case 0x27c26cu: goto label_27c26c;
        case 0x27c270u: goto label_27c270;
        case 0x27c274u: goto label_27c274;
        case 0x27c278u: goto label_27c278;
        case 0x27c27cu: goto label_27c27c;
        case 0x27c280u: goto label_27c280;
        case 0x27c284u: goto label_27c284;
        case 0x27c288u: goto label_27c288;
        case 0x27c28cu: goto label_27c28c;
        case 0x27c290u: goto label_27c290;
        case 0x27c294u: goto label_27c294;
        case 0x27c298u: goto label_27c298;
        case 0x27c29cu: goto label_27c29c;
        case 0x27c2a0u: goto label_27c2a0;
        case 0x27c2a4u: goto label_27c2a4;
        case 0x27c2a8u: goto label_27c2a8;
        case 0x27c2acu: goto label_27c2ac;
        case 0x27c2b0u: goto label_27c2b0;
        case 0x27c2b4u: goto label_27c2b4;
        case 0x27c2b8u: goto label_27c2b8;
        case 0x27c2bcu: goto label_27c2bc;
        case 0x27c2c0u: goto label_27c2c0;
        case 0x27c2c4u: goto label_27c2c4;
        case 0x27c2c8u: goto label_27c2c8;
        case 0x27c2ccu: goto label_27c2cc;
        case 0x27c2d0u: goto label_27c2d0;
        case 0x27c2d4u: goto label_27c2d4;
        case 0x27c2d8u: goto label_27c2d8;
        case 0x27c2dcu: goto label_27c2dc;
        case 0x27c2e0u: goto label_27c2e0;
        case 0x27c2e4u: goto label_27c2e4;
        case 0x27c2e8u: goto label_27c2e8;
        case 0x27c2ecu: goto label_27c2ec;
        case 0x27c2f0u: goto label_27c2f0;
        case 0x27c2f4u: goto label_27c2f4;
        case 0x27c2f8u: goto label_27c2f8;
        case 0x27c2fcu: goto label_27c2fc;
        case 0x27c300u: goto label_27c300;
        case 0x27c304u: goto label_27c304;
        case 0x27c308u: goto label_27c308;
        case 0x27c30cu: goto label_27c30c;
        case 0x27c310u: goto label_27c310;
        case 0x27c314u: goto label_27c314;
        case 0x27c318u: goto label_27c318;
        case 0x27c31cu: goto label_27c31c;
        case 0x27c320u: goto label_27c320;
        case 0x27c324u: goto label_27c324;
        case 0x27c328u: goto label_27c328;
        case 0x27c32cu: goto label_27c32c;
        case 0x27c330u: goto label_27c330;
        case 0x27c334u: goto label_27c334;
        case 0x27c338u: goto label_27c338;
        case 0x27c33cu: goto label_27c33c;
        case 0x27c340u: goto label_27c340;
        case 0x27c344u: goto label_27c344;
        case 0x27c348u: goto label_27c348;
        case 0x27c34cu: goto label_27c34c;
        case 0x27c350u: goto label_27c350;
        case 0x27c354u: goto label_27c354;
        case 0x27c358u: goto label_27c358;
        case 0x27c35cu: goto label_27c35c;
        case 0x27c360u: goto label_27c360;
        case 0x27c364u: goto label_27c364;
        case 0x27c368u: goto label_27c368;
        case 0x27c36cu: goto label_27c36c;
        case 0x27c370u: goto label_27c370;
        case 0x27c374u: goto label_27c374;
        case 0x27c378u: goto label_27c378;
        case 0x27c37cu: goto label_27c37c;
        case 0x27c380u: goto label_27c380;
        case 0x27c384u: goto label_27c384;
        case 0x27c388u: goto label_27c388;
        case 0x27c38cu: goto label_27c38c;
        case 0x27c390u: goto label_27c390;
        case 0x27c394u: goto label_27c394;
        case 0x27c398u: goto label_27c398;
        case 0x27c39cu: goto label_27c39c;
        case 0x27c3a0u: goto label_27c3a0;
        case 0x27c3a4u: goto label_27c3a4;
        case 0x27c3a8u: goto label_27c3a8;
        case 0x27c3acu: goto label_27c3ac;
        case 0x27c3b0u: goto label_27c3b0;
        case 0x27c3b4u: goto label_27c3b4;
        case 0x27c3b8u: goto label_27c3b8;
        case 0x27c3bcu: goto label_27c3bc;
        case 0x27c3c0u: goto label_27c3c0;
        case 0x27c3c4u: goto label_27c3c4;
        case 0x27c3c8u: goto label_27c3c8;
        case 0x27c3ccu: goto label_27c3cc;
        case 0x27c3d0u: goto label_27c3d0;
        case 0x27c3d4u: goto label_27c3d4;
        case 0x27c3d8u: goto label_27c3d8;
        case 0x27c3dcu: goto label_27c3dc;
        case 0x27c3e0u: goto label_27c3e0;
        case 0x27c3e4u: goto label_27c3e4;
        case 0x27c3e8u: goto label_27c3e8;
        case 0x27c3ecu: goto label_27c3ec;
        case 0x27c3f0u: goto label_27c3f0;
        case 0x27c3f4u: goto label_27c3f4;
        case 0x27c3f8u: goto label_27c3f8;
        case 0x27c3fcu: goto label_27c3fc;
        case 0x27c400u: goto label_27c400;
        case 0x27c404u: goto label_27c404;
        case 0x27c408u: goto label_27c408;
        case 0x27c40cu: goto label_27c40c;
        case 0x27c410u: goto label_27c410;
        case 0x27c414u: goto label_27c414;
        case 0x27c418u: goto label_27c418;
        case 0x27c41cu: goto label_27c41c;
        case 0x27c420u: goto label_27c420;
        case 0x27c424u: goto label_27c424;
        case 0x27c428u: goto label_27c428;
        case 0x27c42cu: goto label_27c42c;
        case 0x27c430u: goto label_27c430;
        case 0x27c434u: goto label_27c434;
        case 0x27c438u: goto label_27c438;
        case 0x27c43cu: goto label_27c43c;
        case 0x27c440u: goto label_27c440;
        case 0x27c444u: goto label_27c444;
        case 0x27c448u: goto label_27c448;
        case 0x27c44cu: goto label_27c44c;
        case 0x27c450u: goto label_27c450;
        case 0x27c454u: goto label_27c454;
        case 0x27c458u: goto label_27c458;
        case 0x27c45cu: goto label_27c45c;
        case 0x27c460u: goto label_27c460;
        case 0x27c464u: goto label_27c464;
        case 0x27c468u: goto label_27c468;
        case 0x27c46cu: goto label_27c46c;
        case 0x27c470u: goto label_27c470;
        case 0x27c474u: goto label_27c474;
        case 0x27c478u: goto label_27c478;
        case 0x27c47cu: goto label_27c47c;
        case 0x27c480u: goto label_27c480;
        case 0x27c484u: goto label_27c484;
        case 0x27c488u: goto label_27c488;
        case 0x27c48cu: goto label_27c48c;
        case 0x27c490u: goto label_27c490;
        case 0x27c494u: goto label_27c494;
        case 0x27c498u: goto label_27c498;
        case 0x27c49cu: goto label_27c49c;
        case 0x27c4a0u: goto label_27c4a0;
        case 0x27c4a4u: goto label_27c4a4;
        case 0x27c4a8u: goto label_27c4a8;
        case 0x27c4acu: goto label_27c4ac;
        case 0x27c4b0u: goto label_27c4b0;
        case 0x27c4b4u: goto label_27c4b4;
        case 0x27c4b8u: goto label_27c4b8;
        case 0x27c4bcu: goto label_27c4bc;
        case 0x27c4c0u: goto label_27c4c0;
        case 0x27c4c4u: goto label_27c4c4;
        case 0x27c4c8u: goto label_27c4c8;
        case 0x27c4ccu: goto label_27c4cc;
        case 0x27c4d0u: goto label_27c4d0;
        case 0x27c4d4u: goto label_27c4d4;
        case 0x27c4d8u: goto label_27c4d8;
        case 0x27c4dcu: goto label_27c4dc;
        case 0x27c4e0u: goto label_27c4e0;
        case 0x27c4e4u: goto label_27c4e4;
        case 0x27c4e8u: goto label_27c4e8;
        case 0x27c4ecu: goto label_27c4ec;
        case 0x27c4f0u: goto label_27c4f0;
        case 0x27c4f4u: goto label_27c4f4;
        case 0x27c4f8u: goto label_27c4f8;
        case 0x27c4fcu: goto label_27c4fc;
        case 0x27c500u: goto label_27c500;
        case 0x27c504u: goto label_27c504;
        case 0x27c508u: goto label_27c508;
        case 0x27c50cu: goto label_27c50c;
        case 0x27c510u: goto label_27c510;
        case 0x27c514u: goto label_27c514;
        case 0x27c518u: goto label_27c518;
        case 0x27c51cu: goto label_27c51c;
        case 0x27c520u: goto label_27c520;
        case 0x27c524u: goto label_27c524;
        case 0x27c528u: goto label_27c528;
        case 0x27c52cu: goto label_27c52c;
        case 0x27c530u: goto label_27c530;
        case 0x27c534u: goto label_27c534;
        case 0x27c538u: goto label_27c538;
        case 0x27c53cu: goto label_27c53c;
        case 0x27c540u: goto label_27c540;
        case 0x27c544u: goto label_27c544;
        case 0x27c548u: goto label_27c548;
        case 0x27c54cu: goto label_27c54c;
        case 0x27c550u: goto label_27c550;
        case 0x27c554u: goto label_27c554;
        case 0x27c558u: goto label_27c558;
        case 0x27c55cu: goto label_27c55c;
        case 0x27c560u: goto label_27c560;
        case 0x27c564u: goto label_27c564;
        case 0x27c568u: goto label_27c568;
        case 0x27c56cu: goto label_27c56c;
        case 0x27c570u: goto label_27c570;
        case 0x27c574u: goto label_27c574;
        case 0x27c578u: goto label_27c578;
        case 0x27c57cu: goto label_27c57c;
        case 0x27c580u: goto label_27c580;
        case 0x27c584u: goto label_27c584;
        case 0x27c588u: goto label_27c588;
        case 0x27c58cu: goto label_27c58c;
        case 0x27c590u: goto label_27c590;
        case 0x27c594u: goto label_27c594;
        case 0x27c598u: goto label_27c598;
        case 0x27c59cu: goto label_27c59c;
        case 0x27c5a0u: goto label_27c5a0;
        case 0x27c5a4u: goto label_27c5a4;
        case 0x27c5a8u: goto label_27c5a8;
        case 0x27c5acu: goto label_27c5ac;
        case 0x27c5b0u: goto label_27c5b0;
        case 0x27c5b4u: goto label_27c5b4;
        case 0x27c5b8u: goto label_27c5b8;
        case 0x27c5bcu: goto label_27c5bc;
        case 0x27c5c0u: goto label_27c5c0;
        case 0x27c5c4u: goto label_27c5c4;
        case 0x27c5c8u: goto label_27c5c8;
        case 0x27c5ccu: goto label_27c5cc;
        case 0x27c5d0u: goto label_27c5d0;
        case 0x27c5d4u: goto label_27c5d4;
        case 0x27c5d8u: goto label_27c5d8;
        case 0x27c5dcu: goto label_27c5dc;
        case 0x27c5e0u: goto label_27c5e0;
        case 0x27c5e4u: goto label_27c5e4;
        case 0x27c5e8u: goto label_27c5e8;
        case 0x27c5ecu: goto label_27c5ec;
        case 0x27c5f0u: goto label_27c5f0;
        case 0x27c5f4u: goto label_27c5f4;
        case 0x27c5f8u: goto label_27c5f8;
        case 0x27c5fcu: goto label_27c5fc;
        case 0x27c600u: goto label_27c600;
        case 0x27c604u: goto label_27c604;
        case 0x27c608u: goto label_27c608;
        case 0x27c60cu: goto label_27c60c;
        case 0x27c610u: goto label_27c610;
        case 0x27c614u: goto label_27c614;
        case 0x27c618u: goto label_27c618;
        case 0x27c61cu: goto label_27c61c;
        case 0x27c620u: goto label_27c620;
        case 0x27c624u: goto label_27c624;
        case 0x27c628u: goto label_27c628;
        case 0x27c62cu: goto label_27c62c;
        case 0x27c630u: goto label_27c630;
        case 0x27c634u: goto label_27c634;
        case 0x27c638u: goto label_27c638;
        case 0x27c63cu: goto label_27c63c;
        case 0x27c640u: goto label_27c640;
        case 0x27c644u: goto label_27c644;
        case 0x27c648u: goto label_27c648;
        case 0x27c64cu: goto label_27c64c;
        case 0x27c650u: goto label_27c650;
        case 0x27c654u: goto label_27c654;
        case 0x27c658u: goto label_27c658;
        case 0x27c65cu: goto label_27c65c;
        case 0x27c660u: goto label_27c660;
        case 0x27c664u: goto label_27c664;
        case 0x27c668u: goto label_27c668;
        case 0x27c66cu: goto label_27c66c;
        case 0x27c670u: goto label_27c670;
        case 0x27c674u: goto label_27c674;
        case 0x27c678u: goto label_27c678;
        case 0x27c67cu: goto label_27c67c;
        case 0x27c680u: goto label_27c680;
        case 0x27c684u: goto label_27c684;
        case 0x27c688u: goto label_27c688;
        case 0x27c68cu: goto label_27c68c;
        case 0x27c690u: goto label_27c690;
        case 0x27c694u: goto label_27c694;
        case 0x27c698u: goto label_27c698;
        case 0x27c69cu: goto label_27c69c;
        case 0x27c6a0u: goto label_27c6a0;
        case 0x27c6a4u: goto label_27c6a4;
        case 0x27c6a8u: goto label_27c6a8;
        case 0x27c6acu: goto label_27c6ac;
        case 0x27c6b0u: goto label_27c6b0;
        case 0x27c6b4u: goto label_27c6b4;
        case 0x27c6b8u: goto label_27c6b8;
        case 0x27c6bcu: goto label_27c6bc;
        case 0x27c6c0u: goto label_27c6c0;
        case 0x27c6c4u: goto label_27c6c4;
        case 0x27c6c8u: goto label_27c6c8;
        case 0x27c6ccu: goto label_27c6cc;
        case 0x27c6d0u: goto label_27c6d0;
        case 0x27c6d4u: goto label_27c6d4;
        case 0x27c6d8u: goto label_27c6d8;
        case 0x27c6dcu: goto label_27c6dc;
        case 0x27c6e0u: goto label_27c6e0;
        case 0x27c6e4u: goto label_27c6e4;
        case 0x27c6e8u: goto label_27c6e8;
        case 0x27c6ecu: goto label_27c6ec;
        case 0x27c6f0u: goto label_27c6f0;
        default: break;
    }

    ctx->pc = 0x27bfa0u;

label_27bfa0:
    // 0x27bfa0: 0x27bdf940  addiu       $sp, $sp, -0x6C0
    ctx->pc = 0x27bfa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965568));
label_27bfa4:
    // 0x27bfa4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x27bfa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_27bfa8:
    // 0x27bfa8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x27bfa8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_27bfac:
    // 0x27bfac: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27bfacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_27bfb0:
    // 0x27bfb0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27bfb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_27bfb4:
    // 0x27bfb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27bfb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_27bfb8:
    // 0x27bfb8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27bfb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_27bfbc:
    // 0x27bfbc: 0x8f828db8  lw          $v0, -0x7248($gp)
    ctx->pc = 0x27bfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_27bfc0:
    // 0x27bfc0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_27bfc4:
    if (ctx->pc == 0x27BFC4u) {
        ctx->pc = 0x27BFC4u;
            // 0x27bfc4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x27BFC8u;
        goto label_27bfc8;
    }
    ctx->pc = 0x27BFC0u;
    {
        const bool branch_taken_0x27bfc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27BFC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BFC0u;
            // 0x27bfc4: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bfc0) {
            ctx->pc = 0x27BFD0u;
            goto label_27bfd0;
        }
    }
    ctx->pc = 0x27BFC8u;
label_27bfc8:
    // 0x27bfc8: 0x100001c2  b           . + 4 + (0x1C2 << 2)
label_27bfcc:
    if (ctx->pc == 0x27BFCCu) {
        ctx->pc = 0x27BFCCu;
            // 0x27bfcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27BFD0u;
        goto label_27bfd0;
    }
    ctx->pc = 0x27BFC8u;
    {
        const bool branch_taken_0x27bfc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BFC8u;
            // 0x27bfcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bfc8) {
            ctx->pc = 0x27C6D4u;
            goto label_27c6d4;
        }
    }
    ctx->pc = 0x27BFD0u;
label_27bfd0:
    // 0x27bfd0: 0xc097e18  jal         func_25F860
label_27bfd4:
    if (ctx->pc == 0x27BFD4u) {
        ctx->pc = 0x27BFD8u;
        goto label_27bfd8;
    }
    ctx->pc = 0x27BFD0u;
    SET_GPR_U32(ctx, 31, 0x27BFD8u);
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BFD8u; }
        if (ctx->pc != 0x27BFD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BFD8u; }
        if (ctx->pc != 0x27BFD8u) { return; }
    }
    ctx->pc = 0x27BFD8u;
label_27bfd8:
    // 0x27bfd8: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x27bfd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
label_27bfdc:
    // 0x27bfdc: 0xc0a0c64  jal         func_283190
label_27bfe0:
    if (ctx->pc == 0x27BFE0u) {
        ctx->pc = 0x27BFE0u;
            // 0x27bfe0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27BFE4u;
        goto label_27bfe4;
    }
    ctx->pc = 0x27BFDCu;
    SET_GPR_U32(ctx, 31, 0x27BFE4u);
    ctx->pc = 0x27BFE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BFDCu;
            // 0x27bfe0: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283190u;
    if (runtime->hasFunction(0x283190u)) {
        auto targetFn = runtime->lookupFunction(0x283190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BFE4u; }
        if (ctx->pc != 0x27BFE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStack__6CSceneFi_0x283190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27BFE4u; }
        if (ctx->pc != 0x27BFE4u) { return; }
    }
    ctx->pc = 0x27BFE4u;
label_27bfe4:
    // 0x27bfe4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_27bfe8:
    if (ctx->pc == 0x27BFE8u) {
        ctx->pc = 0x27BFE8u;
            // 0x27bfe8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27BFECu;
        goto label_27bfec;
    }
    ctx->pc = 0x27BFE4u;
    {
        const bool branch_taken_0x27bfe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27BFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BFE4u;
            // 0x27bfe8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bfe4) {
            ctx->pc = 0x27BFF4u;
            goto label_27bff4;
        }
    }
    ctx->pc = 0x27BFECu;
label_27bfec:
    // 0x27bfec: 0x100001b9  b           . + 4 + (0x1B9 << 2)
label_27bff0:
    if (ctx->pc == 0x27BFF0u) {
        ctx->pc = 0x27BFF0u;
            // 0x27bff0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27BFF4u;
        goto label_27bff4;
    }
    ctx->pc = 0x27BFECu;
    {
        const bool branch_taken_0x27bfec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27BFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27BFECu;
            // 0x27bff0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27bfec) {
            ctx->pc = 0x27C6D4u;
            goto label_27c6d4;
        }
    }
    ctx->pc = 0x27BFF4u;
label_27bff4:
    // 0x27bff4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27bff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27bff8:
    // 0x27bff8: 0xc097e18  jal         func_25F860
label_27bffc:
    if (ctx->pc == 0x27BFFCu) {
        ctx->pc = 0x27BFFCu;
            // 0x27bffc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->pc = 0x27C000u;
        goto label_27c000;
    }
    ctx->pc = 0x27BFF8u;
    SET_GPR_U32(ctx, 31, 0x27C000u);
    ctx->pc = 0x27BFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27BFF8u;
            // 0x27bffc: 0x24910008  addiu       $s1, $a0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C000u; }
        if (ctx->pc != 0x27C000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C000u; }
        if (ctx->pc != 0x27C000u) { return; }
    }
    ctx->pc = 0x27C000u;
label_27c000:
    // 0x27c000: 0x8f848db8  lw          $a0, -0x7248($gp)
    ctx->pc = 0x27c000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_27c004:
    // 0x27c004: 0xc076db0  jal         func_1DB6C0
label_27c008:
    if (ctx->pc == 0x27C008u) {
        ctx->pc = 0x27C008u;
            // 0x27c008: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27C00Cu;
        goto label_27c00c;
    }
    ctx->pc = 0x27C004u;
    SET_GPR_U32(ctx, 31, 0x27C00Cu);
    ctx->pc = 0x27C008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C004u;
            // 0x27c008: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DB6C0u;
    if (runtime->hasFunction(0x1DB6C0u)) {
        auto targetFn = runtime->lookupFunction(0x1DB6C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C00Cu; }
        if (ctx->pc != 0x27C00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchBaseIndex__11CMonsterManFi_0x1db6c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C00Cu; }
        if (ctx->pc != 0x27C00Cu) { return; }
    }
    ctx->pc = 0x27C00Cu;
label_27c00c:
    // 0x27c00c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x27c00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27c010:
    // 0x27c010: 0xc097e18  jal         func_25F860
label_27c014:
    if (ctx->pc == 0x27C014u) {
        ctx->pc = 0x27C014u;
            // 0x27c014: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27C018u;
        goto label_27c018;
    }
    ctx->pc = 0x27C010u;
    SET_GPR_U32(ctx, 31, 0x27C018u);
    ctx->pc = 0x27C014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C010u;
            // 0x27c014: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F860u;
    if (runtime->hasFunction(0x25F860u)) {
        auto targetFn = runtime->lookupFunction(0x25F860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C018u; }
        if (ctx->pc != 0x27C018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetStackInt__FP12RS_STACKDATA_0x25f860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C018u; }
        if (ctx->pc != 0x27C018u) { return; }
    }
    ctx->pc = 0x27C018u;
label_27c018:
    // 0x27c018: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27c018u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27c01c:
    // 0x27c01c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27c01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27c020:
    // 0x27c020: 0xc04e748  jal         func_139D20
label_27c024:
    if (ctx->pc == 0x27C024u) {
        ctx->pc = 0x27C024u;
            // 0x27c024: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->pc = 0x27C028u;
        goto label_27c028;
    }
    ctx->pc = 0x27C020u;
    SET_GPR_U32(ctx, 31, 0x27C028u);
    ctx->pc = 0x27C024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C020u;
            // 0x27c024: 0x24050068  addiu       $a1, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C028u; }
        if (ctx->pc != 0x27C028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C028u; }
        if (ctx->pc != 0x27C028u) { return; }
    }
    ctx->pc = 0x27C028u;
label_27c028:
    // 0x27c028: 0x24040660  addiu       $a0, $zero, 0x660
    ctx->pc = 0x27c028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1632));
label_27c02c:
    // 0x27c02c: 0xc04e638  jal         func_1398E0
label_27c030:
    if (ctx->pc == 0x27C030u) {
        ctx->pc = 0x27C030u;
            // 0x27c030: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27C034u;
        goto label_27c034;
    }
    ctx->pc = 0x27C02Cu;
    SET_GPR_U32(ctx, 31, 0x27C034u);
    ctx->pc = 0x27C030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C02Cu;
            // 0x27c030: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C034u; }
        if (ctx->pc != 0x27C034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C034u; }
        if (ctx->pc != 0x27C034u) { return; }
    }
    ctx->pc = 0x27C034u;
label_27c034:
    // 0x27c034: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_27c038:
    if (ctx->pc == 0x27C038u) {
        ctx->pc = 0x27C038u;
            // 0x27c038: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27C03Cu;
        goto label_27c03c;
    }
    ctx->pc = 0x27C034u;
    {
        const bool branch_taken_0x27c034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C038u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C034u;
            // 0x27c038: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c034) {
            ctx->pc = 0x27C0B8u;
            goto label_27c0b8;
        }
    }
    ctx->pc = 0x27C03Cu;
label_27c03c:
    // 0x27c03c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x27c03cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_27c040:
    // 0x27c040: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x27c040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_27c044:
    // 0x27c044: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x27c044u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_27c048:
    // 0x27c048: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x27c048u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_27c04c:
    // 0x27c04c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x27c04cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_27c050:
    // 0x27c050: 0x320f809  jalr        $t9
label_27c054:
    if (ctx->pc == 0x27C054u) {
        ctx->pc = 0x27C054u;
            // 0x27c054: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27C058u;
        goto label_27c058;
    }
    ctx->pc = 0x27C050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27C058u);
        ctx->pc = 0x27C054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C050u;
            // 0x27c054: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27C058u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27C058u; }
            if (ctx->pc != 0x27C058u) { return; }
        }
        }
    }
    ctx->pc = 0x27C058u;
label_27c058:
    // 0x27c058: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x27c058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_27c05c:
    // 0x27c05c: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x27c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_27c060:
    // 0x27c060: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x27c060u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_27c064:
    // 0x27c064: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x27c064u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_27c068:
    // 0x27c068: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x27c068u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_27c06c:
    // 0x27c06c: 0x320f809  jalr        $t9
label_27c070:
    if (ctx->pc == 0x27C070u) {
        ctx->pc = 0x27C070u;
            // 0x27c070: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27C074u;
        goto label_27c074;
    }
    ctx->pc = 0x27C06Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27C074u);
        ctx->pc = 0x27C070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C06Cu;
            // 0x27c070: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27C074u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27C074u; }
            if (ctx->pc != 0x27C074u) { return; }
        }
        }
    }
    ctx->pc = 0x27C074u;
label_27c074:
    // 0x27c074: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x27c074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_27c078:
    // 0x27c078: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x27c078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_27c07c:
    // 0x27c07c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x27c07cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_27c080:
    // 0x27c080: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x27c080u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_27c084:
    // 0x27c084: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x27c084u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_27c088:
    // 0x27c088: 0x320f809  jalr        $t9
label_27c08c:
    if (ctx->pc == 0x27C08Cu) {
        ctx->pc = 0x27C08Cu;
            // 0x27c08c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27C090u;
        goto label_27c090;
    }
    ctx->pc = 0x27C088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27C090u);
        ctx->pc = 0x27C08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C088u;
            // 0x27c08c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27C090u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27C090u; }
            if (ctx->pc != 0x27C090u) { return; }
        }
        }
    }
    ctx->pc = 0x27C090u;
label_27c090:
    // 0x27c090: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x27c090u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_27c094:
    // 0x27c094: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x27c094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_27c098:
    // 0x27c098: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x27c098u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_27c09c:
    // 0x27c09c: 0xae60035c  sw          $zero, 0x35C($s3)
    ctx->pc = 0x27c09cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 860), GPR_U32(ctx, 0));
label_27c0a0:
    // 0x27c0a0: 0xae600364  sw          $zero, 0x364($s3)
    ctx->pc = 0x27c0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 868), GPR_U32(ctx, 0));
label_27c0a4:
    // 0x27c0a4: 0xae600360  sw          $zero, 0x360($s3)
    ctx->pc = 0x27c0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 864), GPR_U32(ctx, 0));
label_27c0a8:
    // 0x27c0a8: 0x8e790000  lw          $t9, 0x0($s3)
    ctx->pc = 0x27c0a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_27c0ac:
    // 0x27c0ac: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x27c0acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_27c0b0:
    // 0x27c0b0: 0x320f809  jalr        $t9
label_27c0b4:
    if (ctx->pc == 0x27C0B4u) {
        ctx->pc = 0x27C0B4u;
            // 0x27c0b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27C0B8u;
        goto label_27c0b8;
    }
    ctx->pc = 0x27C0B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27C0B8u);
        ctx->pc = 0x27C0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C0B0u;
            // 0x27c0b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27C0B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27C0B8u; }
            if (ctx->pc != 0x27C0B8u) { return; }
        }
        }
    }
    ctx->pc = 0x27C0B8u;
label_27c0b8:
    // 0x27c0b8: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
label_27c0bc:
    if (ctx->pc == 0x27C0BCu) {
        ctx->pc = 0x27C0BCu;
            // 0x27c0bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27C0C0u;
        goto label_27c0c0;
    }
    ctx->pc = 0x27C0B8u;
    {
        const bool branch_taken_0x27c0b8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x27C0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C0B8u;
            // 0x27c0bc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c0b8) {
            ctx->pc = 0x27C0C8u;
            goto label_27c0c8;
        }
    }
    ctx->pc = 0x27C0C0u;
label_27c0c0:
    // 0x27c0c0: 0x10000185  b           . + 4 + (0x185 << 2)
label_27c0c4:
    if (ctx->pc == 0x27C0C4u) {
        ctx->pc = 0x27C0C4u;
            // 0x27c0c4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x27C0C8u;
        goto label_27c0c8;
    }
    ctx->pc = 0x27C0C0u;
    {
        const bool branch_taken_0x27c0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C0C0u;
            // 0x27c0c4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c0c0) {
            ctx->pc = 0x27C6D8u;
            goto label_27c6d8;
        }
    }
    ctx->pc = 0x27C0C8u;
label_27c0c8:
    // 0x27c0c8: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x27c0c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
label_27c0cc:
    // 0x27c0cc: 0xc0a14ec  jal         func_2853B0
label_27c0d0:
    if (ctx->pc == 0x27C0D0u) {
        ctx->pc = 0x27C0D0u;
            // 0x27c0d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27C0D4u;
        goto label_27c0d4;
    }
    ctx->pc = 0x27C0CCu;
    SET_GPR_U32(ctx, 31, 0x27C0D4u);
    ctx->pc = 0x27C0D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C0CCu;
            // 0x27c0d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2853B0u;
    if (runtime->hasFunction(0x2853B0u)) {
        auto targetFn = runtime->lookupFunction(0x2853B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C0D4u; }
        if (ctx->pc != 0x27C0D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteChara__6CSceneFi_0x2853b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C0D4u; }
        if (ctx->pc != 0x27C0D4u) { return; }
    }
    ctx->pc = 0x27C0D4u;
label_27c0d4:
    // 0x27c0d4: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x27c0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
label_27c0d8:
    // 0x27c0d8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x27c0d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27c0dc:
    // 0x27c0dc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x27c0dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27c0e0:
    // 0x27c0e0: 0xc0a0e8c  jal         func_283A30
label_27c0e4:
    if (ctx->pc == 0x27C0E4u) {
        ctx->pc = 0x27C0E4u;
            // 0x27c0e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27C0E8u;
        goto label_27c0e8;
    }
    ctx->pc = 0x27C0E0u;
    SET_GPR_U32(ctx, 31, 0x27C0E8u);
    ctx->pc = 0x27C0E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C0E0u;
            // 0x27c0e4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283A30u;
    if (runtime->hasFunction(0x283A30u)) {
        auto targetFn = runtime->lookupFunction(0x283A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C0E8u; }
        if (ctx->pc != 0x27C0E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AssignChara__6CSceneFiP11CCharacter2Pc_0x283a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C0E8u; }
        if (ctx->pc != 0x27C0E8u) { return; }
    }
    ctx->pc = 0x27C0E8u;
label_27c0e8:
    // 0x27c0e8: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_27c0ec:
    if (ctx->pc == 0x27C0ECu) {
        ctx->pc = 0x27C0F0u;
        goto label_27c0f0;
    }
    ctx->pc = 0x27C0E8u;
    {
        const bool branch_taken_0x27c0e8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x27c0e8) {
            ctx->pc = 0x27C0F8u;
            goto label_27c0f8;
        }
    }
    ctx->pc = 0x27C0F0u;
label_27c0f0:
    // 0x27c0f0: 0x10000178  b           . + 4 + (0x178 << 2)
label_27c0f4:
    if (ctx->pc == 0x27C0F4u) {
        ctx->pc = 0x27C0F4u;
            // 0x27c0f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27C0F8u;
        goto label_27c0f8;
    }
    ctx->pc = 0x27C0F0u;
    {
        const bool branch_taken_0x27c0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27C0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C0F0u;
            // 0x27c0f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c0f0) {
            ctx->pc = 0x27C6D4u;
            goto label_27c6d4;
        }
    }
    ctx->pc = 0x27C0F8u;
label_27c0f8:
    // 0x27c0f8: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x27c0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
label_27c0fc:
    // 0x27c0fc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x27c0fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27c100:
    // 0x27c100: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x27c100u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27c104:
    // 0x27c104: 0xc0a11d0  jal         func_284740
label_27c108:
    if (ctx->pc == 0x27C108u) {
        ctx->pc = 0x27C108u;
            // 0x27c108: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x27C10Cu;
        goto label_27c10c;
    }
    ctx->pc = 0x27C104u;
    SET_GPR_U32(ctx, 31, 0x27C10Cu);
    ctx->pc = 0x27C108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C104u;
            // 0x27c108: 0x24070005  addiu       $a3, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284740u;
    if (runtime->hasFunction(0x284740u)) {
        auto targetFn = runtime->lookupFunction(0x284740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C10Cu; }
        if (ctx->pc != 0x27C10Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStatus__6CSceneFiii_0x284740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C10Cu; }
        if (ctx->pc != 0x27C10Cu) { return; }
    }
    ctx->pc = 0x27C10Cu;
label_27c10c:
    // 0x27c10c: 0xc0956d4  jal         func_255B50
label_27c110:
    if (ctx->pc == 0x27C110u) {
        ctx->pc = 0x27C110u;
            // 0x27c110: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27C114u;
        goto label_27c114;
    }
    ctx->pc = 0x27C10Cu;
    SET_GPR_U32(ctx, 31, 0x27C114u);
    ctx->pc = 0x27C110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C10Cu;
            // 0x27c110: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x255B50u;
    if (runtime->hasFunction(0x255B50u)) {
        auto targetFn = runtime->lookupFunction(0x255B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C114u; }
        if (ctx->pc != 0x27C114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__Fi_0x255b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C114u; }
        if (ctx->pc != 0x27C114u) { return; }
    }
    ctx->pc = 0x27C114u;
label_27c114:
    // 0x27c114: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x27c114u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27c118:
    // 0x27c118: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x27c118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_27c11c:
    // 0x27c11c: 0x240214c0  addiu       $v0, $zero, 0x14C0
    ctx->pc = 0x27c11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5312));
label_27c120:
    // 0x27c120: 0x2221818  mult        $v1, $s1, $v0
    ctx->pc = 0x27c120u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_27c124:
    // 0x27c124: 0x8f828db8  lw          $v0, -0x7248($gp)
    ctx->pc = 0x27c124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938040)));
label_27c128:
    // 0x27c128: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x27c128u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_27c12c:
    // 0x27c12c: 0x24540500  addiu       $s4, $v0, 0x500
    ctx->pc = 0x27c12cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 1280));
label_27c130:
    // 0x27c130: 0xc09f1c0  jal         func_27C700
label_27c134:
    if (ctx->pc == 0x27C134u) {
        ctx->pc = 0x27C134u;
            // 0x27c134: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27C138u;
        goto label_27c138;
    }
    ctx->pc = 0x27C130u;
    SET_GPR_U32(ctx, 31, 0x27C138u);
    ctx->pc = 0x27C134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C130u;
            // 0x27c134: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27C700u;
    if (runtime->hasFunction(0x27C700u)) {
        auto targetFn = runtime->lookupFunction(0x27C700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C138u; }
        if (ctx->pc != 0x27C138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__7CObjectFRC7CObject_0x27c700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C138u; }
        if (ctx->pc != 0x27C138u) { return; }
    }
    ctx->pc = 0x27C138u;
label_27c138:
    // 0x27c138: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x27c138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_27c13c:
    // 0x27c13c: 0x3c070037  lui         $a3, 0x37
    ctx->pc = 0x27c13cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)55 << 16));
label_27c140:
    // 0x27c140: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x27c140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_27c144:
    // 0x27c144: 0x24e75810  addiu       $a3, $a3, 0x5810
    ctx->pc = 0x27c144u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 22544));
label_27c148:
    // 0x27c148: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x27c148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_27c14c:
    // 0x27c14c: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x27c14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_27c150:
    // 0x27c150: 0x8e880070  lw          $t0, 0x70($s4)
    ctx->pc = 0x27c150u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 112)));
label_27c154:
    // 0x27c154: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x27c154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_27c158:
    // 0x27c158: 0x268600b0  addiu       $a2, $s4, 0xB0
    ctx->pc = 0x27c158u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 176));
label_27c15c:
    // 0x27c15c: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x27c15cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_27c160:
    // 0x27c160: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x27c160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_27c164:
    // 0x27c164: 0xafa800d0  sw          $t0, 0xD0($sp)
    ctx->pc = 0x27c164u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 8));
label_27c168:
    // 0x27c168: 0xafa70060  sw          $a3, 0x60($sp)
    ctx->pc = 0x27c168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 7));
label_27c16c:
    // 0x27c16c: 0xc6830080  lwc1        $f3, 0x80($s4)
    ctx->pc = 0x27c16cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27c170:
    // 0x27c170: 0xc6820084  lwc1        $f2, 0x84($s4)
    ctx->pc = 0x27c170u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27c174:
    // 0x27c174: 0xc6810088  lwc1        $f1, 0x88($s4)
    ctx->pc = 0x27c174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c178:
    // 0x27c178: 0xc680008c  lwc1        $f0, 0x8C($s4)
    ctx->pc = 0x27c178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c17c:
    // 0x27c17c: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x27c17cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_27c180:
    // 0x27c180: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x27c180u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_27c184:
    // 0x27c184: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x27c184u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_27c188:
    // 0x27c188: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x27c188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_27c18c:
    // 0x27c18c: 0xc6830090  lwc1        $f3, 0x90($s4)
    ctx->pc = 0x27c18cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27c190:
    // 0x27c190: 0xc6820094  lwc1        $f2, 0x94($s4)
    ctx->pc = 0x27c190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27c194:
    // 0x27c194: 0xc6810098  lwc1        $f1, 0x98($s4)
    ctx->pc = 0x27c194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c198:
    // 0x27c198: 0xc680009c  lwc1        $f0, 0x9C($s4)
    ctx->pc = 0x27c198u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c19c:
    // 0x27c19c: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x27c19cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_27c1a0:
    // 0x27c1a0: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x27c1a0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_27c1a4:
    // 0x27c1a4: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x27c1a4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_27c1a8:
    // 0x27c1a8: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x27c1a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_27c1ac:
    // 0x27c1ac: 0xc68000a0  lwc1        $f0, 0xA0($s4)
    ctx->pc = 0x27c1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c1b0:
    // 0x27c1b0: 0xe7a00100  swc1        $f0, 0x100($sp)
    ctx->pc = 0x27c1b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 256), bits); }
label_27c1b4:
    // 0x27c1b4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x27c1b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_27c1b8:
    // 0x27c1b8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x27c1b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_27c1bc:
    // 0x27c1bc: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x27c1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27c1c0:
    // 0x27c1c0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x27c1c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_27c1c4:
    // 0x27c1c4: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x27c1c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_27c1c8:
    // 0x27c1c8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x27c1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_27c1cc:
    // 0x27c1cc: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_27c1d0:
    if (ctx->pc == 0x27C1D0u) {
        ctx->pc = 0x27C1D0u;
            // 0x27c1d0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x27C1D4u;
        goto label_27c1d4;
    }
    ctx->pc = 0x27C1CCu;
    {
        const bool branch_taken_0x27c1cc = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x27C1D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C1CCu;
            // 0x27c1d0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c1cc) {
            ctx->pc = 0x27C1B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27c1b4;
        }
    }
    ctx->pc = 0x27C1D4u;
label_27c1d4:
    // 0x27c1d4: 0x268600f0  addiu       $a2, $s4, 0xF0
    ctx->pc = 0x27c1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 240));
label_27c1d8:
    // 0x27c1d8: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x27c1d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_27c1dc:
    // 0x27c1dc: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x27c1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_27c1e0:
    // 0x27c1e0: 0x80c30000  lb          $v1, 0x0($a2)
    ctx->pc = 0x27c1e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_27c1e4:
    // 0x27c1e4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x27c1e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_27c1e8:
    // 0x27c1e8: 0x80c20001  lb          $v0, 0x1($a2)
    ctx->pc = 0x27c1e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_27c1ec:
    // 0x27c1ec: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x27c1ecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_27c1f0:
    // 0x27c1f0: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x27c1f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_27c1f4:
    // 0x27c1f4: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x27c1f4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
label_27c1f8:
    // 0x27c1f8: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_27c1fc:
    if (ctx->pc == 0x27C1FCu) {
        ctx->pc = 0x27C1FCu;
            // 0x27c1fc: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x27C200u;
        goto label_27c200;
    }
    ctx->pc = 0x27C1F8u;
    {
        const bool branch_taken_0x27c1f8 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x27C1FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C1F8u;
            // 0x27c1fc: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c1f8) {
            ctx->pc = 0x27C1E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27c1e0;
        }
    }
    ctx->pc = 0x27C200u;
label_27c200:
    // 0x27c200: 0xc6800100  lwc1        $f0, 0x100($s4)
    ctx->pc = 0x27c200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 256)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c204:
    // 0x27c204: 0x27a20198  addiu       $v0, $sp, 0x198
    ctx->pc = 0x27c204u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 408));
label_27c208:
    // 0x27c208: 0x26860140  addiu       $a2, $s4, 0x140
    ctx->pc = 0x27c208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 320));
label_27c20c:
    // 0x27c20c: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x27c20cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_27c210:
    // 0x27c210: 0x24040030  addiu       $a0, $zero, 0x30
    ctx->pc = 0x27c210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_27c214:
    // 0x27c214: 0xe7a00160  swc1        $f0, 0x160($sp)
    ctx->pc = 0x27c214u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 352), bits); }
label_27c218:
    // 0x27c218: 0x8e830104  lw          $v1, 0x104($s4)
    ctx->pc = 0x27c218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 260)));
label_27c21c:
    // 0x27c21c: 0xafa30164  sw          $v1, 0x164($sp)
    ctx->pc = 0x27c21cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 356), GPR_U32(ctx, 3));
label_27c220:
    // 0x27c220: 0x8e830108  lw          $v1, 0x108($s4)
    ctx->pc = 0x27c220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 264)));
label_27c224:
    // 0x27c224: 0xafa30168  sw          $v1, 0x168($sp)
    ctx->pc = 0x27c224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 360), GPR_U32(ctx, 3));
label_27c228:
    // 0x27c228: 0xc680010c  lwc1        $f0, 0x10C($s4)
    ctx->pc = 0x27c228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c22c:
    // 0x27c22c: 0xe7a0016c  swc1        $f0, 0x16C($sp)
    ctx->pc = 0x27c22cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 364), bits); }
label_27c230:
    // 0x27c230: 0xc6800110  lwc1        $f0, 0x110($s4)
    ctx->pc = 0x27c230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c234:
    // 0x27c234: 0xe7a00170  swc1        $f0, 0x170($sp)
    ctx->pc = 0x27c234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 368), bits); }
label_27c238:
    // 0x27c238: 0xc6800114  lwc1        $f0, 0x114($s4)
    ctx->pc = 0x27c238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c23c:
    // 0x27c23c: 0xe7a00174  swc1        $f0, 0x174($sp)
    ctx->pc = 0x27c23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 372), bits); }
label_27c240:
    // 0x27c240: 0x8e830118  lw          $v1, 0x118($s4)
    ctx->pc = 0x27c240u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 280)));
label_27c244:
    // 0x27c244: 0xafa30178  sw          $v1, 0x178($sp)
    ctx->pc = 0x27c244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 376), GPR_U32(ctx, 3));
label_27c248:
    // 0x27c248: 0x8e83011c  lw          $v1, 0x11C($s4)
    ctx->pc = 0x27c248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 284)));
label_27c24c:
    // 0x27c24c: 0xafa3017c  sw          $v1, 0x17C($sp)
    ctx->pc = 0x27c24cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 380), GPR_U32(ctx, 3));
label_27c250:
    // 0x27c250: 0x86830120  lh          $v1, 0x120($s4)
    ctx->pc = 0x27c250u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 288)));
label_27c254:
    // 0x27c254: 0xa7a30180  sh          $v1, 0x180($sp)
    ctx->pc = 0x27c254u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 384), (uint16_t)GPR_U32(ctx, 3));
label_27c258:
    // 0x27c258: 0x8e830124  lw          $v1, 0x124($s4)
    ctx->pc = 0x27c258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
label_27c25c:
    // 0x27c25c: 0xafa30184  sw          $v1, 0x184($sp)
    ctx->pc = 0x27c25cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 388), GPR_U32(ctx, 3));
label_27c260:
    // 0x27c260: 0x8e830128  lw          $v1, 0x128($s4)
    ctx->pc = 0x27c260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 296)));
label_27c264:
    // 0x27c264: 0xafa30188  sw          $v1, 0x188($sp)
    ctx->pc = 0x27c264u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 392), GPR_U32(ctx, 3));
label_27c268:
    // 0x27c268: 0x8e83012c  lw          $v1, 0x12C($s4)
    ctx->pc = 0x27c268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
label_27c26c:
    // 0x27c26c: 0xafa3018c  sw          $v1, 0x18C($sp)
    ctx->pc = 0x27c26cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 396), GPR_U32(ctx, 3));
label_27c270:
    // 0x27c270: 0x8e830130  lw          $v1, 0x130($s4)
    ctx->pc = 0x27c270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 304)));
label_27c274:
    // 0x27c274: 0xafa30190  sw          $v1, 0x190($sp)
    ctx->pc = 0x27c274u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 400), GPR_U32(ctx, 3));
label_27c278:
    // 0x27c278: 0x8e830134  lw          $v1, 0x134($s4)
    ctx->pc = 0x27c278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 308)));
label_27c27c:
    // 0x27c27c: 0xafa30194  sw          $v1, 0x194($sp)
    ctx->pc = 0x27c27cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 404), GPR_U32(ctx, 3));
label_27c280:
    // 0x27c280: 0xc6810138  lwc1        $f1, 0x138($s4)
    ctx->pc = 0x27c280u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c284:
    // 0x27c284: 0xc680013c  lwc1        $f0, 0x13C($s4)
    ctx->pc = 0x27c284u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c288:
    // 0x27c288: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x27c288u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_27c28c:
    // 0x27c28c: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x27c28cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_27c290:
    // 0x27c290: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x27c290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_27c294:
    // 0x27c294: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x27c294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_27c298:
    // 0x27c298: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x27c298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27c29c:
    // 0x27c29c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x27c29cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_27c2a0:
    // 0x27c2a0: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x27c2a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_27c2a4:
    // 0x27c2a4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x27c2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_27c2a8:
    // 0x27c2a8: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_27c2ac:
    if (ctx->pc == 0x27C2ACu) {
        ctx->pc = 0x27C2ACu;
            // 0x27c2ac: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x27C2B0u;
        goto label_27c2b0;
    }
    ctx->pc = 0x27C2A8u;
    {
        const bool branch_taken_0x27c2a8 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x27C2ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C2A8u;
            // 0x27c2ac: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c2a8) {
            ctx->pc = 0x27C290u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27c290;
        }
    }
    ctx->pc = 0x27C2B0u;
label_27c2b0:
    // 0x27c2b0: 0x8e8302c0  lw          $v1, 0x2C0($s4)
    ctx->pc = 0x27c2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 704)));
label_27c2b4:
    // 0x27c2b4: 0x27a20324  addiu       $v0, $sp, 0x324
    ctx->pc = 0x27c2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 804));
label_27c2b8:
    // 0x27c2b8: 0x268602e8  addiu       $a2, $s4, 0x2E8
    ctx->pc = 0x27c2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 744));
label_27c2bc:
    // 0x27c2bc: 0x27a50348  addiu       $a1, $sp, 0x348
    ctx->pc = 0x27c2bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 840));
label_27c2c0:
    // 0x27c2c0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x27c2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_27c2c4:
    // 0x27c2c4: 0xafa30320  sw          $v1, 0x320($sp)
    ctx->pc = 0x27c2c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 800), GPR_U32(ctx, 3));
label_27c2c8:
    // 0x27c2c8: 0xc68302c4  lwc1        $f3, 0x2C4($s4)
    ctx->pc = 0x27c2c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 708)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27c2cc:
    // 0x27c2cc: 0xc68202c8  lwc1        $f2, 0x2C8($s4)
    ctx->pc = 0x27c2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27c2d0:
    // 0x27c2d0: 0xc68102cc  lwc1        $f1, 0x2CC($s4)
    ctx->pc = 0x27c2d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 716)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c2d4:
    // 0x27c2d4: 0xc68002d0  lwc1        $f0, 0x2D0($s4)
    ctx->pc = 0x27c2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c2d8:
    // 0x27c2d8: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x27c2d8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_27c2dc:
    // 0x27c2dc: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x27c2dcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_27c2e0:
    // 0x27c2e0: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x27c2e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_27c2e4:
    // 0x27c2e4: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x27c2e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_27c2e8:
    // 0x27c2e8: 0xc68102d4  lwc1        $f1, 0x2D4($s4)
    ctx->pc = 0x27c2e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 724)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c2ec:
    // 0x27c2ec: 0xc68002d8  lwc1        $f0, 0x2D8($s4)
    ctx->pc = 0x27c2ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 728)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c2f0:
    // 0x27c2f0: 0xe4410010  swc1        $f1, 0x10($v0)
    ctx->pc = 0x27c2f0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_27c2f4:
    // 0x27c2f4: 0xe4400014  swc1        $f0, 0x14($v0)
    ctx->pc = 0x27c2f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_27c2f8:
    // 0x27c2f8: 0x8e8202dc  lw          $v0, 0x2DC($s4)
    ctx->pc = 0x27c2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 732)));
label_27c2fc:
    // 0x27c2fc: 0xafa2033c  sw          $v0, 0x33C($sp)
    ctx->pc = 0x27c2fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 828), GPR_U32(ctx, 2));
label_27c300:
    // 0x27c300: 0x8e8202e0  lw          $v0, 0x2E0($s4)
    ctx->pc = 0x27c300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 736)));
label_27c304:
    // 0x27c304: 0xafa20340  sw          $v0, 0x340($sp)
    ctx->pc = 0x27c304u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 832), GPR_U32(ctx, 2));
label_27c308:
    // 0x27c308: 0x8e8202e4  lw          $v0, 0x2E4($s4)
    ctx->pc = 0x27c308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 740)));
label_27c30c:
    // 0x27c30c: 0xafa20344  sw          $v0, 0x344($sp)
    ctx->pc = 0x27c30cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 836), GPR_U32(ctx, 2));
label_27c310:
    // 0x27c310: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x27c310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_27c314:
    // 0x27c314: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x27c314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_27c318:
    // 0x27c318: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x27c318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27c31c:
    // 0x27c31c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x27c31cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_27c320:
    // 0x27c320: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x27c320u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_27c324:
    // 0x27c324: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x27c324u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_27c328:
    // 0x27c328: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_27c32c:
    if (ctx->pc == 0x27C32Cu) {
        ctx->pc = 0x27C32Cu;
            // 0x27c32c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x27C330u;
        goto label_27c330;
    }
    ctx->pc = 0x27C328u;
    {
        const bool branch_taken_0x27c328 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x27C32Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C328u;
            // 0x27c32c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c328) {
            ctx->pc = 0x27C310u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27c310;
        }
    }
    ctx->pc = 0x27C330u;
label_27c330:
    // 0x27c330: 0x8e820348  lw          $v0, 0x348($s4)
    ctx->pc = 0x27c330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 840)));
label_27c334:
    // 0x27c334: 0x268603c0  addiu       $a2, $s4, 0x3C0
    ctx->pc = 0x27c334u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 960));
label_27c338:
    // 0x27c338: 0x27a50420  addiu       $a1, $sp, 0x420
    ctx->pc = 0x27c338u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1056));
label_27c33c:
    // 0x27c33c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x27c33cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_27c340:
    // 0x27c340: 0xafa203a8  sw          $v0, 0x3A8($sp)
    ctx->pc = 0x27c340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 936), GPR_U32(ctx, 2));
label_27c344:
    // 0x27c344: 0x8e82034c  lw          $v0, 0x34C($s4)
    ctx->pc = 0x27c344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 844)));
label_27c348:
    // 0x27c348: 0xafa203ac  sw          $v0, 0x3AC($sp)
    ctx->pc = 0x27c348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 940), GPR_U32(ctx, 2));
label_27c34c:
    // 0x27c34c: 0x8e820350  lw          $v0, 0x350($s4)
    ctx->pc = 0x27c34cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 848)));
label_27c350:
    // 0x27c350: 0xafa203b0  sw          $v0, 0x3B0($sp)
    ctx->pc = 0x27c350u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 944), GPR_U32(ctx, 2));
label_27c354:
    // 0x27c354: 0x8e820354  lw          $v0, 0x354($s4)
    ctx->pc = 0x27c354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 852)));
label_27c358:
    // 0x27c358: 0xafa203b4  sw          $v0, 0x3B4($sp)
    ctx->pc = 0x27c358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 948), GPR_U32(ctx, 2));
label_27c35c:
    // 0x27c35c: 0x8e820358  lw          $v0, 0x358($s4)
    ctx->pc = 0x27c35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 856)));
label_27c360:
    // 0x27c360: 0xafa203b8  sw          $v0, 0x3B8($sp)
    ctx->pc = 0x27c360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 952), GPR_U32(ctx, 2));
label_27c364:
    // 0x27c364: 0x8e82035c  lw          $v0, 0x35C($s4)
    ctx->pc = 0x27c364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 860)));
label_27c368:
    // 0x27c368: 0xafa203bc  sw          $v0, 0x3BC($sp)
    ctx->pc = 0x27c368u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 956), GPR_U32(ctx, 2));
label_27c36c:
    // 0x27c36c: 0x8e820360  lw          $v0, 0x360($s4)
    ctx->pc = 0x27c36cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 864)));
label_27c370:
    // 0x27c370: 0xafa203c0  sw          $v0, 0x3C0($sp)
    ctx->pc = 0x27c370u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 960), GPR_U32(ctx, 2));
label_27c374:
    // 0x27c374: 0x8e820364  lw          $v0, 0x364($s4)
    ctx->pc = 0x27c374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 868)));
label_27c378:
    // 0x27c378: 0xafa203c4  sw          $v0, 0x3C4($sp)
    ctx->pc = 0x27c378u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 964), GPR_U32(ctx, 2));
label_27c37c:
    // 0x27c37c: 0x8e820368  lw          $v0, 0x368($s4)
    ctx->pc = 0x27c37cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 872)));
label_27c380:
    // 0x27c380: 0xafa203c8  sw          $v0, 0x3C8($sp)
    ctx->pc = 0x27c380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 968), GPR_U32(ctx, 2));
label_27c384:
    // 0x27c384: 0x8e82036c  lw          $v0, 0x36C($s4)
    ctx->pc = 0x27c384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 876)));
label_27c388:
    // 0x27c388: 0xafa203cc  sw          $v0, 0x3CC($sp)
    ctx->pc = 0x27c388u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 972), GPR_U32(ctx, 2));
label_27c38c:
    // 0x27c38c: 0x8e820370  lw          $v0, 0x370($s4)
    ctx->pc = 0x27c38cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 880)));
label_27c390:
    // 0x27c390: 0xafa203d0  sw          $v0, 0x3D0($sp)
    ctx->pc = 0x27c390u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 976), GPR_U32(ctx, 2));
label_27c394:
    // 0x27c394: 0x8e820374  lw          $v0, 0x374($s4)
    ctx->pc = 0x27c394u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 884)));
label_27c398:
    // 0x27c398: 0xafa203d4  sw          $v0, 0x3D4($sp)
    ctx->pc = 0x27c398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 980), GPR_U32(ctx, 2));
label_27c39c:
    // 0x27c39c: 0x8e820378  lw          $v0, 0x378($s4)
    ctx->pc = 0x27c39cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 888)));
label_27c3a0:
    // 0x27c3a0: 0xafa203d8  sw          $v0, 0x3D8($sp)
    ctx->pc = 0x27c3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 984), GPR_U32(ctx, 2));
label_27c3a4:
    // 0x27c3a4: 0x8e82037c  lw          $v0, 0x37C($s4)
    ctx->pc = 0x27c3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 892)));
label_27c3a8:
    // 0x27c3a8: 0xafa203dc  sw          $v0, 0x3DC($sp)
    ctx->pc = 0x27c3a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 988), GPR_U32(ctx, 2));
label_27c3ac:
    // 0x27c3ac: 0x8e820380  lw          $v0, 0x380($s4)
    ctx->pc = 0x27c3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 896)));
label_27c3b0:
    // 0x27c3b0: 0xafa203e0  sw          $v0, 0x3E0($sp)
    ctx->pc = 0x27c3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 992), GPR_U32(ctx, 2));
label_27c3b4:
    // 0x27c3b4: 0x8e820384  lw          $v0, 0x384($s4)
    ctx->pc = 0x27c3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 900)));
label_27c3b8:
    // 0x27c3b8: 0xafa203e4  sw          $v0, 0x3E4($sp)
    ctx->pc = 0x27c3b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 996), GPR_U32(ctx, 2));
label_27c3bc:
    // 0x27c3bc: 0xc6800388  lwc1        $f0, 0x388($s4)
    ctx->pc = 0x27c3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 904)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c3c0:
    // 0x27c3c0: 0xe7a003e8  swc1        $f0, 0x3E8($sp)
    ctx->pc = 0x27c3c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1000), bits); }
label_27c3c4:
    // 0x27c3c4: 0xc680038c  lwc1        $f0, 0x38C($s4)
    ctx->pc = 0x27c3c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 908)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c3c8:
    // 0x27c3c8: 0xe7a003ec  swc1        $f0, 0x3EC($sp)
    ctx->pc = 0x27c3c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1004), bits); }
label_27c3cc:
    // 0x27c3cc: 0xc6800390  lwc1        $f0, 0x390($s4)
    ctx->pc = 0x27c3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 912)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c3d0:
    // 0x27c3d0: 0xe7a003f0  swc1        $f0, 0x3F0($sp)
    ctx->pc = 0x27c3d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1008), bits); }
label_27c3d4:
    // 0x27c3d4: 0x8e820394  lw          $v0, 0x394($s4)
    ctx->pc = 0x27c3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 916)));
label_27c3d8:
    // 0x27c3d8: 0xafa203f4  sw          $v0, 0x3F4($sp)
    ctx->pc = 0x27c3d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1012), GPR_U32(ctx, 2));
label_27c3dc:
    // 0x27c3dc: 0x8e820398  lw          $v0, 0x398($s4)
    ctx->pc = 0x27c3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 920)));
label_27c3e0:
    // 0x27c3e0: 0xafa203f8  sw          $v0, 0x3F8($sp)
    ctx->pc = 0x27c3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1016), GPR_U32(ctx, 2));
label_27c3e4:
    // 0x27c3e4: 0x8e82039c  lw          $v0, 0x39C($s4)
    ctx->pc = 0x27c3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 924)));
label_27c3e8:
    // 0x27c3e8: 0xafa203fc  sw          $v0, 0x3FC($sp)
    ctx->pc = 0x27c3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1020), GPR_U32(ctx, 2));
label_27c3ec:
    // 0x27c3ec: 0xc68003a0  lwc1        $f0, 0x3A0($s4)
    ctx->pc = 0x27c3ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c3f0:
    // 0x27c3f0: 0xe7a00400  swc1        $f0, 0x400($sp)
    ctx->pc = 0x27c3f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1024), bits); }
label_27c3f4:
    // 0x27c3f4: 0x8e8203a4  lw          $v0, 0x3A4($s4)
    ctx->pc = 0x27c3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 932)));
label_27c3f8:
    // 0x27c3f8: 0xafa20404  sw          $v0, 0x404($sp)
    ctx->pc = 0x27c3f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1028), GPR_U32(ctx, 2));
label_27c3fc:
    // 0x27c3fc: 0x8e8203a8  lw          $v0, 0x3A8($s4)
    ctx->pc = 0x27c3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 936)));
label_27c400:
    // 0x27c400: 0xafa20408  sw          $v0, 0x408($sp)
    ctx->pc = 0x27c400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1032), GPR_U32(ctx, 2));
label_27c404:
    // 0x27c404: 0x8e8203ac  lw          $v0, 0x3AC($s4)
    ctx->pc = 0x27c404u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 940)));
label_27c408:
    // 0x27c408: 0xafa2040c  sw          $v0, 0x40C($sp)
    ctx->pc = 0x27c408u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1036), GPR_U32(ctx, 2));
label_27c40c:
    // 0x27c40c: 0x8e8203b0  lw          $v0, 0x3B0($s4)
    ctx->pc = 0x27c40cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 944)));
label_27c410:
    // 0x27c410: 0xafa20410  sw          $v0, 0x410($sp)
    ctx->pc = 0x27c410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1040), GPR_U32(ctx, 2));
label_27c414:
    // 0x27c414: 0x8e8203b4  lw          $v0, 0x3B4($s4)
    ctx->pc = 0x27c414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 948)));
label_27c418:
    // 0x27c418: 0xafa20414  sw          $v0, 0x414($sp)
    ctx->pc = 0x27c418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1044), GPR_U32(ctx, 2));
label_27c41c:
    // 0x27c41c: 0x8e8203b8  lw          $v0, 0x3B8($s4)
    ctx->pc = 0x27c41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 952)));
label_27c420:
    // 0x27c420: 0xafa20418  sw          $v0, 0x418($sp)
    ctx->pc = 0x27c420u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1048), GPR_U32(ctx, 2));
label_27c424:
    // 0x27c424: 0x8e8203bc  lw          $v0, 0x3BC($s4)
    ctx->pc = 0x27c424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 956)));
label_27c428:
    // 0x27c428: 0xafa2041c  sw          $v0, 0x41C($sp)
    ctx->pc = 0x27c428u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1052), GPR_U32(ctx, 2));
label_27c42c:
    // 0x27c42c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x27c42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_27c430:
    // 0x27c430: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x27c430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_27c434:
    // 0x27c434: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x27c434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27c438:
    // 0x27c438: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x27c438u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_27c43c:
    // 0x27c43c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x27c43cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_27c440:
    // 0x27c440: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x27c440u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_27c444:
    // 0x27c444: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_27c448:
    if (ctx->pc == 0x27C448u) {
        ctx->pc = 0x27C448u;
            // 0x27c448: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x27C44Cu;
        goto label_27c44c;
    }
    ctx->pc = 0x27C444u;
    {
        const bool branch_taken_0x27c444 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x27C448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C444u;
            // 0x27c448: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c444) {
            ctx->pc = 0x27C42Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27c42c;
        }
    }
    ctx->pc = 0x27C44Cu;
label_27c44c:
    // 0x27c44c: 0x26860460  addiu       $a2, $s4, 0x460
    ctx->pc = 0x27c44cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 1120));
label_27c450:
    // 0x27c450: 0x27a504c0  addiu       $a1, $sp, 0x4C0
    ctx->pc = 0x27c450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
label_27c454:
    // 0x27c454: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x27c454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_27c458:
    // 0x27c458: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x27c458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_27c45c:
    // 0x27c45c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x27c45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_27c460:
    // 0x27c460: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x27c460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27c464:
    // 0x27c464: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x27c464u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_27c468:
    // 0x27c468: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x27c468u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_27c46c:
    // 0x27c46c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x27c46cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_27c470:
    // 0x27c470: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_27c474:
    if (ctx->pc == 0x27C474u) {
        ctx->pc = 0x27C474u;
            // 0x27c474: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x27C478u;
        goto label_27c478;
    }
    ctx->pc = 0x27C470u;
    {
        const bool branch_taken_0x27c470 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x27C474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C470u;
            // 0x27c474: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c470) {
            ctx->pc = 0x27C458u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27c458;
        }
    }
    ctx->pc = 0x27C478u;
label_27c478:
    // 0x27c478: 0x8e8c0500  lw          $t4, 0x500($s4)
    ctx->pc = 0x27c478u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1280)));
label_27c47c:
    // 0x27c47c: 0x27ab0570  addiu       $t3, $sp, 0x570
    ctx->pc = 0x27c47cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 29), 1392));
label_27c480:
    // 0x27c480: 0x27aa0590  addiu       $t2, $sp, 0x590
    ctx->pc = 0x27c480u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 1424));
label_27c484:
    // 0x27c484: 0x27a905b0  addiu       $t1, $sp, 0x5B0
    ctx->pc = 0x27c484u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 1456));
label_27c488:
    // 0x27c488: 0x27a805d0  addiu       $t0, $sp, 0x5D0
    ctx->pc = 0x27c488u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 1488));
label_27c48c:
    // 0x27c48c: 0x27a705dc  addiu       $a3, $sp, 0x5DC
    ctx->pc = 0x27c48cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 1500));
label_27c490:
    // 0x27c490: 0x27a30604  addiu       $v1, $sp, 0x604
    ctx->pc = 0x27c490u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 1540));
label_27c494:
    // 0x27c494: 0x27a20624  addiu       $v0, $sp, 0x624
    ctx->pc = 0x27c494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 1572));
label_27c498:
    // 0x27c498: 0x268605ec  addiu       $a2, $s4, 0x5EC
    ctx->pc = 0x27c498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 1516));
label_27c49c:
    // 0x27c49c: 0x27a5064c  addiu       $a1, $sp, 0x64C
    ctx->pc = 0x27c49cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1612));
label_27c4a0:
    // 0x27c4a0: 0x2404000c  addiu       $a0, $zero, 0xC
    ctx->pc = 0x27c4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_27c4a4:
    // 0x27c4a4: 0xafac0560  sw          $t4, 0x560($sp)
    ctx->pc = 0x27c4a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1376), GPR_U32(ctx, 12));
label_27c4a8:
    // 0x27c4a8: 0x8e8c0504  lw          $t4, 0x504($s4)
    ctx->pc = 0x27c4a8u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1284)));
label_27c4ac:
    // 0x27c4ac: 0xafac0564  sw          $t4, 0x564($sp)
    ctx->pc = 0x27c4acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1380), GPR_U32(ctx, 12));
label_27c4b0:
    // 0x27c4b0: 0xc6800508  lwc1        $f0, 0x508($s4)
    ctx->pc = 0x27c4b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c4b4:
    // 0x27c4b4: 0xe7a00568  swc1        $f0, 0x568($sp)
    ctx->pc = 0x27c4b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1384), bits); }
label_27c4b8:
    // 0x27c4b8: 0xc680050c  lwc1        $f0, 0x50C($s4)
    ctx->pc = 0x27c4b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c4bc:
    // 0x27c4bc: 0xe7a0056c  swc1        $f0, 0x56C($sp)
    ctx->pc = 0x27c4bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1388), bits); }
label_27c4c0:
    // 0x27c4c0: 0xc6830510  lwc1        $f3, 0x510($s4)
    ctx->pc = 0x27c4c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27c4c4:
    // 0x27c4c4: 0xc6820514  lwc1        $f2, 0x514($s4)
    ctx->pc = 0x27c4c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1300)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27c4c8:
    // 0x27c4c8: 0xc6810518  lwc1        $f1, 0x518($s4)
    ctx->pc = 0x27c4c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c4cc:
    // 0x27c4cc: 0xc680051c  lwc1        $f0, 0x51C($s4)
    ctx->pc = 0x27c4ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c4d0:
    // 0x27c4d0: 0xe5630000  swc1        $f3, 0x0($t3)
    ctx->pc = 0x27c4d0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
label_27c4d4:
    // 0x27c4d4: 0xe5620004  swc1        $f2, 0x4($t3)
    ctx->pc = 0x27c4d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4), bits); }
label_27c4d8:
    // 0x27c4d8: 0xe5610008  swc1        $f1, 0x8($t3)
    ctx->pc = 0x27c4d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 8), bits); }
label_27c4dc:
    // 0x27c4dc: 0xe560000c  swc1        $f0, 0xC($t3)
    ctx->pc = 0x27c4dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 12), bits); }
label_27c4e0:
    // 0x27c4e0: 0xc6830520  lwc1        $f3, 0x520($s4)
    ctx->pc = 0x27c4e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27c4e4:
    // 0x27c4e4: 0xc6820524  lwc1        $f2, 0x524($s4)
    ctx->pc = 0x27c4e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27c4e8:
    // 0x27c4e8: 0xc6810528  lwc1        $f1, 0x528($s4)
    ctx->pc = 0x27c4e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1320)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c4ec:
    // 0x27c4ec: 0xc680052c  lwc1        $f0, 0x52C($s4)
    ctx->pc = 0x27c4ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1324)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c4f0:
    // 0x27c4f0: 0xe5630010  swc1        $f3, 0x10($t3)
    ctx->pc = 0x27c4f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 16), bits); }
label_27c4f4:
    // 0x27c4f4: 0xe5620014  swc1        $f2, 0x14($t3)
    ctx->pc = 0x27c4f4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 20), bits); }
label_27c4f8:
    // 0x27c4f8: 0xe5610018  swc1        $f1, 0x18($t3)
    ctx->pc = 0x27c4f8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 24), bits); }
label_27c4fc:
    // 0x27c4fc: 0xe560001c  swc1        $f0, 0x1C($t3)
    ctx->pc = 0x27c4fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 28), bits); }
label_27c500:
    // 0x27c500: 0xc6830530  lwc1        $f3, 0x530($s4)
    ctx->pc = 0x27c500u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1328)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27c504:
    // 0x27c504: 0xc6820534  lwc1        $f2, 0x534($s4)
    ctx->pc = 0x27c504u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1332)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27c508:
    // 0x27c508: 0xc6810538  lwc1        $f1, 0x538($s4)
    ctx->pc = 0x27c508u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c50c:
    // 0x27c50c: 0xc680053c  lwc1        $f0, 0x53C($s4)
    ctx->pc = 0x27c50cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c510:
    // 0x27c510: 0xe5430000  swc1        $f3, 0x0($t2)
    ctx->pc = 0x27c510u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 0), bits); }
label_27c514:
    // 0x27c514: 0xe5420004  swc1        $f2, 0x4($t2)
    ctx->pc = 0x27c514u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4), bits); }
label_27c518:
    // 0x27c518: 0xe5410008  swc1        $f1, 0x8($t2)
    ctx->pc = 0x27c518u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 8), bits); }
label_27c51c:
    // 0x27c51c: 0xe540000c  swc1        $f0, 0xC($t2)
    ctx->pc = 0x27c51cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 12), bits); }
label_27c520:
    // 0x27c520: 0xc6830540  lwc1        $f3, 0x540($s4)
    ctx->pc = 0x27c520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1344)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27c524:
    // 0x27c524: 0xc6820544  lwc1        $f2, 0x544($s4)
    ctx->pc = 0x27c524u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1348)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27c528:
    // 0x27c528: 0xc6810548  lwc1        $f1, 0x548($s4)
    ctx->pc = 0x27c528u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c52c:
    // 0x27c52c: 0xc680054c  lwc1        $f0, 0x54C($s4)
    ctx->pc = 0x27c52cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c530:
    // 0x27c530: 0xe5430010  swc1        $f3, 0x10($t2)
    ctx->pc = 0x27c530u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 16), bits); }
label_27c534:
    // 0x27c534: 0xe5420014  swc1        $f2, 0x14($t2)
    ctx->pc = 0x27c534u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 20), bits); }
label_27c538:
    // 0x27c538: 0xe5410018  swc1        $f1, 0x18($t2)
    ctx->pc = 0x27c538u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 24), bits); }
label_27c53c:
    // 0x27c53c: 0xe540001c  swc1        $f0, 0x1C($t2)
    ctx->pc = 0x27c53cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 28), bits); }
label_27c540:
    // 0x27c540: 0xc6830550  lwc1        $f3, 0x550($s4)
    ctx->pc = 0x27c540u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27c544:
    // 0x27c544: 0xc6820554  lwc1        $f2, 0x554($s4)
    ctx->pc = 0x27c544u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27c548:
    // 0x27c548: 0xc6810558  lwc1        $f1, 0x558($s4)
    ctx->pc = 0x27c548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c54c:
    // 0x27c54c: 0xc680055c  lwc1        $f0, 0x55C($s4)
    ctx->pc = 0x27c54cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c550:
    // 0x27c550: 0xe5230000  swc1        $f3, 0x0($t1)
    ctx->pc = 0x27c550u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 0), bits); }
label_27c554:
    // 0x27c554: 0xe5220004  swc1        $f2, 0x4($t1)
    ctx->pc = 0x27c554u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
label_27c558:
    // 0x27c558: 0xe5210008  swc1        $f1, 0x8($t1)
    ctx->pc = 0x27c558u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
label_27c55c:
    // 0x27c55c: 0xe520000c  swc1        $f0, 0xC($t1)
    ctx->pc = 0x27c55cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
label_27c560:
    // 0x27c560: 0xc6830560  lwc1        $f3, 0x560($s4)
    ctx->pc = 0x27c560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1376)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27c564:
    // 0x27c564: 0xc6820564  lwc1        $f2, 0x564($s4)
    ctx->pc = 0x27c564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1380)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27c568:
    // 0x27c568: 0xc6810568  lwc1        $f1, 0x568($s4)
    ctx->pc = 0x27c568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c56c:
    // 0x27c56c: 0xc680056c  lwc1        $f0, 0x56C($s4)
    ctx->pc = 0x27c56cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1388)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c570:
    // 0x27c570: 0xe5230010  swc1        $f3, 0x10($t1)
    ctx->pc = 0x27c570u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 16), bits); }
label_27c574:
    // 0x27c574: 0xe5220014  swc1        $f2, 0x14($t1)
    ctx->pc = 0x27c574u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 20), bits); }
label_27c578:
    // 0x27c578: 0xe5210018  swc1        $f1, 0x18($t1)
    ctx->pc = 0x27c578u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 24), bits); }
label_27c57c:
    // 0x27c57c: 0xe520001c  swc1        $f0, 0x1C($t1)
    ctx->pc = 0x27c57cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 28), bits); }
label_27c580:
    // 0x27c580: 0xc6820570  lwc1        $f2, 0x570($s4)
    ctx->pc = 0x27c580u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27c584:
    // 0x27c584: 0xc6810574  lwc1        $f1, 0x574($s4)
    ctx->pc = 0x27c584u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1396)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c588:
    // 0x27c588: 0xc6800578  lwc1        $f0, 0x578($s4)
    ctx->pc = 0x27c588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c58c:
    // 0x27c58c: 0xe5020000  swc1        $f2, 0x0($t0)
    ctx->pc = 0x27c58cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_27c590:
    // 0x27c590: 0xe5010004  swc1        $f1, 0x4($t0)
    ctx->pc = 0x27c590u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
label_27c594:
    // 0x27c594: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x27c594u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
label_27c598:
    // 0x27c598: 0xc683057c  lwc1        $f3, 0x57C($s4)
    ctx->pc = 0x27c598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1404)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27c59c:
    // 0x27c59c: 0xc6820580  lwc1        $f2, 0x580($s4)
    ctx->pc = 0x27c59cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27c5a0:
    // 0x27c5a0: 0xc6810584  lwc1        $f1, 0x584($s4)
    ctx->pc = 0x27c5a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c5a4:
    // 0x27c5a4: 0xc6800588  lwc1        $f0, 0x588($s4)
    ctx->pc = 0x27c5a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c5a8:
    // 0x27c5a8: 0xe4e30000  swc1        $f3, 0x0($a3)
    ctx->pc = 0x27c5a8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
label_27c5ac:
    // 0x27c5ac: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x27c5acu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
label_27c5b0:
    // 0x27c5b0: 0xe4e10008  swc1        $f1, 0x8($a3)
    ctx->pc = 0x27c5b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
label_27c5b4:
    // 0x27c5b4: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x27c5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
label_27c5b8:
    // 0x27c5b8: 0xc683058c  lwc1        $f3, 0x58C($s4)
    ctx->pc = 0x27c5b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27c5bc:
    // 0x27c5bc: 0xc6820590  lwc1        $f2, 0x590($s4)
    ctx->pc = 0x27c5bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27c5c0:
    // 0x27c5c0: 0xc6810594  lwc1        $f1, 0x594($s4)
    ctx->pc = 0x27c5c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c5c4:
    // 0x27c5c4: 0xc6800598  lwc1        $f0, 0x598($s4)
    ctx->pc = 0x27c5c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c5c8:
    // 0x27c5c8: 0xe4e30010  swc1        $f3, 0x10($a3)
    ctx->pc = 0x27c5c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
label_27c5cc:
    // 0x27c5cc: 0xe4e20014  swc1        $f2, 0x14($a3)
    ctx->pc = 0x27c5ccu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 20), bits); }
label_27c5d0:
    // 0x27c5d0: 0xe4e10018  swc1        $f1, 0x18($a3)
    ctx->pc = 0x27c5d0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 24), bits); }
label_27c5d4:
    // 0x27c5d4: 0xe4e0001c  swc1        $f0, 0x1C($a3)
    ctx->pc = 0x27c5d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 28), bits); }
label_27c5d8:
    // 0x27c5d8: 0xc681059c  lwc1        $f1, 0x59C($s4)
    ctx->pc = 0x27c5d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c5dc:
    // 0x27c5dc: 0xc68005a0  lwc1        $f0, 0x5A0($s4)
    ctx->pc = 0x27c5dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c5e0:
    // 0x27c5e0: 0xe4e10020  swc1        $f1, 0x20($a3)
    ctx->pc = 0x27c5e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 32), bits); }
label_27c5e4:
    // 0x27c5e4: 0xe4e00024  swc1        $f0, 0x24($a3)
    ctx->pc = 0x27c5e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 36), bits); }
label_27c5e8:
    // 0x27c5e8: 0xc68305a4  lwc1        $f3, 0x5A4($s4)
    ctx->pc = 0x27c5e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27c5ec:
    // 0x27c5ec: 0xc68205a8  lwc1        $f2, 0x5A8($s4)
    ctx->pc = 0x27c5ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27c5f0:
    // 0x27c5f0: 0xc68105ac  lwc1        $f1, 0x5AC($s4)
    ctx->pc = 0x27c5f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c5f4:
    // 0x27c5f4: 0xc68005b0  lwc1        $f0, 0x5B0($s4)
    ctx->pc = 0x27c5f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1456)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c5f8:
    // 0x27c5f8: 0xe4630000  swc1        $f3, 0x0($v1)
    ctx->pc = 0x27c5f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_27c5fc:
    // 0x27c5fc: 0xe4620004  swc1        $f2, 0x4($v1)
    ctx->pc = 0x27c5fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_27c600:
    // 0x27c600: 0xe4610008  swc1        $f1, 0x8($v1)
    ctx->pc = 0x27c600u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_27c604:
    // 0x27c604: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x27c604u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_27c608:
    // 0x27c608: 0xc68305b4  lwc1        $f3, 0x5B4($s4)
    ctx->pc = 0x27c608u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1460)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27c60c:
    // 0x27c60c: 0xc68205b8  lwc1        $f2, 0x5B8($s4)
    ctx->pc = 0x27c60cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1464)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27c610:
    // 0x27c610: 0xc68105bc  lwc1        $f1, 0x5BC($s4)
    ctx->pc = 0x27c610u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1468)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c614:
    // 0x27c614: 0xc68005c0  lwc1        $f0, 0x5C0($s4)
    ctx->pc = 0x27c614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c618:
    // 0x27c618: 0xe4630010  swc1        $f3, 0x10($v1)
    ctx->pc = 0x27c618u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_27c61c:
    // 0x27c61c: 0xe4620014  swc1        $f2, 0x14($v1)
    ctx->pc = 0x27c61cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 20), bits); }
label_27c620:
    // 0x27c620: 0xe4610018  swc1        $f1, 0x18($v1)
    ctx->pc = 0x27c620u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
label_27c624:
    // 0x27c624: 0xe460001c  swc1        $f0, 0x1C($v1)
    ctx->pc = 0x27c624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 28), bits); }
label_27c628:
    // 0x27c628: 0xc68305c4  lwc1        $f3, 0x5C4($s4)
    ctx->pc = 0x27c628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27c62c:
    // 0x27c62c: 0xc68205c8  lwc1        $f2, 0x5C8($s4)
    ctx->pc = 0x27c62cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27c630:
    // 0x27c630: 0xc68105cc  lwc1        $f1, 0x5CC($s4)
    ctx->pc = 0x27c630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c634:
    // 0x27c634: 0xc68005d0  lwc1        $f0, 0x5D0($s4)
    ctx->pc = 0x27c634u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c638:
    // 0x27c638: 0xe4430000  swc1        $f3, 0x0($v0)
    ctx->pc = 0x27c638u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_27c63c:
    // 0x27c63c: 0xe4420004  swc1        $f2, 0x4($v0)
    ctx->pc = 0x27c63cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_27c640:
    // 0x27c640: 0xe4410008  swc1        $f1, 0x8($v0)
    ctx->pc = 0x27c640u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
label_27c644:
    // 0x27c644: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x27c644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
label_27c648:
    // 0x27c648: 0xc68305d4  lwc1        $f3, 0x5D4($s4)
    ctx->pc = 0x27c648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1492)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
label_27c64c:
    // 0x27c64c: 0xc68205d8  lwc1        $f2, 0x5D8($s4)
    ctx->pc = 0x27c64cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1496)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_27c650:
    // 0x27c650: 0xc68105dc  lwc1        $f1, 0x5DC($s4)
    ctx->pc = 0x27c650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1500)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27c654:
    // 0x27c654: 0xc68005e0  lwc1        $f0, 0x5E0($s4)
    ctx->pc = 0x27c654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1504)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_27c658:
    // 0x27c658: 0xe4430010  swc1        $f3, 0x10($v0)
    ctx->pc = 0x27c658u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
label_27c65c:
    // 0x27c65c: 0xe4420014  swc1        $f2, 0x14($v0)
    ctx->pc = 0x27c65cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
label_27c660:
    // 0x27c660: 0xe4410018  swc1        $f1, 0x18($v0)
    ctx->pc = 0x27c660u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
label_27c664:
    // 0x27c664: 0xe440001c  swc1        $f0, 0x1C($v0)
    ctx->pc = 0x27c664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 28), bits); }
label_27c668:
    // 0x27c668: 0x8e8205e4  lw          $v0, 0x5E4($s4)
    ctx->pc = 0x27c668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1508)));
label_27c66c:
    // 0x27c66c: 0xafa20644  sw          $v0, 0x644($sp)
    ctx->pc = 0x27c66cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1604), GPR_U32(ctx, 2));
label_27c670:
    // 0x27c670: 0x8e8205e8  lw          $v0, 0x5E8($s4)
    ctx->pc = 0x27c670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1512)));
label_27c674:
    // 0x27c674: 0xafa20648  sw          $v0, 0x648($sp)
    ctx->pc = 0x27c674u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1608), GPR_U32(ctx, 2));
label_27c678:
    // 0x27c678: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x27c678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_27c67c:
    // 0x27c67c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x27c67cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_27c680:
    // 0x27c680: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x27c680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_27c684:
    // 0x27c684: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x27c684u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_27c688:
    // 0x27c688: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x27c688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_27c68c:
    // 0x27c68c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x27c68cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
label_27c690:
    // 0x27c690: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_27c694:
    if (ctx->pc == 0x27C694u) {
        ctx->pc = 0x27C694u;
            // 0x27c694: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x27C698u;
        goto label_27c698;
    }
    ctx->pc = 0x27C690u;
    {
        const bool branch_taken_0x27c690 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x27C694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C690u;
            // 0x27c694: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27c690) {
            ctx->pc = 0x27C678u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27c678;
        }
    }
    ctx->pc = 0x27C698u;
label_27c698:
    // 0x27c698: 0x8e82064c  lw          $v0, 0x64C($s4)
    ctx->pc = 0x27c698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1612)));
label_27c69c:
    // 0x27c69c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x27c69cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_27c6a0:
    // 0x27c6a0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x27c6a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27c6a4:
    // 0x27c6a4: 0xafa206ac  sw          $v0, 0x6AC($sp)
    ctx->pc = 0x27c6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1708), GPR_U32(ctx, 2));
label_27c6a8:
    // 0x27c6a8: 0x8e820650  lw          $v0, 0x650($s4)
    ctx->pc = 0x27c6a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1616)));
label_27c6ac:
    // 0x27c6ac: 0xafa206b0  sw          $v0, 0x6B0($sp)
    ctx->pc = 0x27c6acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1712), GPR_U32(ctx, 2));
label_27c6b0:
    // 0x27c6b0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27c6b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27c6b4:
    // 0x27c6b4: 0x8f3900ec  lw          $t9, 0xEC($t9)
    ctx->pc = 0x27c6b4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 236)));
label_27c6b8:
    // 0x27c6b8: 0x320f809  jalr        $t9
label_27c6bc:
    if (ctx->pc == 0x27C6BCu) {
        ctx->pc = 0x27C6BCu;
            // 0x27c6bc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27C6C0u;
        goto label_27c6c0;
    }
    ctx->pc = 0x27C6B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27C6C0u);
        ctx->pc = 0x27C6BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C6B8u;
            // 0x27c6bc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27C6C0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27C6C0u; }
            if (ctx->pc != 0x27C6C0u) { return; }
        }
        }
    }
    ctx->pc = 0x27C6C0u;
label_27c6c0:
    // 0x27c6c0: 0x8f8497dc  lw          $a0, -0x6824($gp)
    ctx->pc = 0x27c6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940636)));
label_27c6c4:
    // 0x27c6c4: 0x26260028  addiu       $a2, $s1, 0x28
    ctx->pc = 0x27c6c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_27c6c8:
    // 0x27c6c8: 0xc0a1264  jal         func_284990
label_27c6cc:
    if (ctx->pc == 0x27C6CCu) {
        ctx->pc = 0x27C6CCu;
            // 0x27c6cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27C6D0u;
        goto label_27c6d0;
    }
    ctx->pc = 0x27C6C8u;
    SET_GPR_U32(ctx, 31, 0x27C6D0u);
    ctx->pc = 0x27C6CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27C6C8u;
            // 0x27c6cc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284990u;
    if (runtime->hasFunction(0x284990u)) {
        auto targetFn = runtime->lookupFunction(0x284990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C6D0u; }
        if (ctx->pc != 0x27C6D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCharaTexb__6CSceneFii_0x284990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27C6D0u; }
        if (ctx->pc != 0x27C6D0u) { return; }
    }
    ctx->pc = 0x27C6D0u;
label_27c6d0:
    // 0x27c6d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x27c6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27c6d4:
    // 0x27c6d4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x27c6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_27c6d8:
    // 0x27c6d8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x27c6d8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_27c6dc:
    // 0x27c6dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27c6dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27c6e0:
    // 0x27c6e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27c6e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27c6e4:
    // 0x27c6e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27c6e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27c6e8:
    // 0x27c6e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27c6e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_27c6ec:
    // 0x27c6ec: 0x3e00008  jr          $ra
label_27c6f0:
    if (ctx->pc == 0x27C6F0u) {
        ctx->pc = 0x27C6F0u;
            // 0x27c6f0: 0x27bd06c0  addiu       $sp, $sp, 0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1728));
        ctx->pc = 0x27C6F4u;
        goto label_fallthrough_0x27c6ec;
    }
    ctx->pc = 0x27C6ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27C6F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27C6ECu;
            // 0x27c6f0: 0x27bd06c0  addiu       $sp, $sp, 0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 1728));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x27c6ec:
    ctx->pc = 0x27C6F4u;
}
