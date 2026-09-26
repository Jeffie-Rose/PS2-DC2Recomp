#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuFormDraw__16CMenuPosDataFormFiiRi
// Address: 0x229e70 - 0x22a6cc
void MenuFormDraw__16CMenuPosDataFormFiiRi_0x229e70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuFormDraw__16CMenuPosDataFormFiiRi_0x229e70");
#endif

    switch (ctx->pc) {
        case 0x229e70u: goto label_229e70;
        case 0x229e74u: goto label_229e74;
        case 0x229e78u: goto label_229e78;
        case 0x229e7cu: goto label_229e7c;
        case 0x229e80u: goto label_229e80;
        case 0x229e84u: goto label_229e84;
        case 0x229e88u: goto label_229e88;
        case 0x229e8cu: goto label_229e8c;
        case 0x229e90u: goto label_229e90;
        case 0x229e94u: goto label_229e94;
        case 0x229e98u: goto label_229e98;
        case 0x229e9cu: goto label_229e9c;
        case 0x229ea0u: goto label_229ea0;
        case 0x229ea4u: goto label_229ea4;
        case 0x229ea8u: goto label_229ea8;
        case 0x229eacu: goto label_229eac;
        case 0x229eb0u: goto label_229eb0;
        case 0x229eb4u: goto label_229eb4;
        case 0x229eb8u: goto label_229eb8;
        case 0x229ebcu: goto label_229ebc;
        case 0x229ec0u: goto label_229ec0;
        case 0x229ec4u: goto label_229ec4;
        case 0x229ec8u: goto label_229ec8;
        case 0x229eccu: goto label_229ecc;
        case 0x229ed0u: goto label_229ed0;
        case 0x229ed4u: goto label_229ed4;
        case 0x229ed8u: goto label_229ed8;
        case 0x229edcu: goto label_229edc;
        case 0x229ee0u: goto label_229ee0;
        case 0x229ee4u: goto label_229ee4;
        case 0x229ee8u: goto label_229ee8;
        case 0x229eecu: goto label_229eec;
        case 0x229ef0u: goto label_229ef0;
        case 0x229ef4u: goto label_229ef4;
        case 0x229ef8u: goto label_229ef8;
        case 0x229efcu: goto label_229efc;
        case 0x229f00u: goto label_229f00;
        case 0x229f04u: goto label_229f04;
        case 0x229f08u: goto label_229f08;
        case 0x229f0cu: goto label_229f0c;
        case 0x229f10u: goto label_229f10;
        case 0x229f14u: goto label_229f14;
        case 0x229f18u: goto label_229f18;
        case 0x229f1cu: goto label_229f1c;
        case 0x229f20u: goto label_229f20;
        case 0x229f24u: goto label_229f24;
        case 0x229f28u: goto label_229f28;
        case 0x229f2cu: goto label_229f2c;
        case 0x229f30u: goto label_229f30;
        case 0x229f34u: goto label_229f34;
        case 0x229f38u: goto label_229f38;
        case 0x229f3cu: goto label_229f3c;
        case 0x229f40u: goto label_229f40;
        case 0x229f44u: goto label_229f44;
        case 0x229f48u: goto label_229f48;
        case 0x229f4cu: goto label_229f4c;
        case 0x229f50u: goto label_229f50;
        case 0x229f54u: goto label_229f54;
        case 0x229f58u: goto label_229f58;
        case 0x229f5cu: goto label_229f5c;
        case 0x229f60u: goto label_229f60;
        case 0x229f64u: goto label_229f64;
        case 0x229f68u: goto label_229f68;
        case 0x229f6cu: goto label_229f6c;
        case 0x229f70u: goto label_229f70;
        case 0x229f74u: goto label_229f74;
        case 0x229f78u: goto label_229f78;
        case 0x229f7cu: goto label_229f7c;
        case 0x229f80u: goto label_229f80;
        case 0x229f84u: goto label_229f84;
        case 0x229f88u: goto label_229f88;
        case 0x229f8cu: goto label_229f8c;
        case 0x229f90u: goto label_229f90;
        case 0x229f94u: goto label_229f94;
        case 0x229f98u: goto label_229f98;
        case 0x229f9cu: goto label_229f9c;
        case 0x229fa0u: goto label_229fa0;
        case 0x229fa4u: goto label_229fa4;
        case 0x229fa8u: goto label_229fa8;
        case 0x229facu: goto label_229fac;
        case 0x229fb0u: goto label_229fb0;
        case 0x229fb4u: goto label_229fb4;
        case 0x229fb8u: goto label_229fb8;
        case 0x229fbcu: goto label_229fbc;
        case 0x229fc0u: goto label_229fc0;
        case 0x229fc4u: goto label_229fc4;
        case 0x229fc8u: goto label_229fc8;
        case 0x229fccu: goto label_229fcc;
        case 0x229fd0u: goto label_229fd0;
        case 0x229fd4u: goto label_229fd4;
        case 0x229fd8u: goto label_229fd8;
        case 0x229fdcu: goto label_229fdc;
        case 0x229fe0u: goto label_229fe0;
        case 0x229fe4u: goto label_229fe4;
        case 0x229fe8u: goto label_229fe8;
        case 0x229fecu: goto label_229fec;
        case 0x229ff0u: goto label_229ff0;
        case 0x229ff4u: goto label_229ff4;
        case 0x229ff8u: goto label_229ff8;
        case 0x229ffcu: goto label_229ffc;
        case 0x22a000u: goto label_22a000;
        case 0x22a004u: goto label_22a004;
        case 0x22a008u: goto label_22a008;
        case 0x22a00cu: goto label_22a00c;
        case 0x22a010u: goto label_22a010;
        case 0x22a014u: goto label_22a014;
        case 0x22a018u: goto label_22a018;
        case 0x22a01cu: goto label_22a01c;
        case 0x22a020u: goto label_22a020;
        case 0x22a024u: goto label_22a024;
        case 0x22a028u: goto label_22a028;
        case 0x22a02cu: goto label_22a02c;
        case 0x22a030u: goto label_22a030;
        case 0x22a034u: goto label_22a034;
        case 0x22a038u: goto label_22a038;
        case 0x22a03cu: goto label_22a03c;
        case 0x22a040u: goto label_22a040;
        case 0x22a044u: goto label_22a044;
        case 0x22a048u: goto label_22a048;
        case 0x22a04cu: goto label_22a04c;
        case 0x22a050u: goto label_22a050;
        case 0x22a054u: goto label_22a054;
        case 0x22a058u: goto label_22a058;
        case 0x22a05cu: goto label_22a05c;
        case 0x22a060u: goto label_22a060;
        case 0x22a064u: goto label_22a064;
        case 0x22a068u: goto label_22a068;
        case 0x22a06cu: goto label_22a06c;
        case 0x22a070u: goto label_22a070;
        case 0x22a074u: goto label_22a074;
        case 0x22a078u: goto label_22a078;
        case 0x22a07cu: goto label_22a07c;
        case 0x22a080u: goto label_22a080;
        case 0x22a084u: goto label_22a084;
        case 0x22a088u: goto label_22a088;
        case 0x22a08cu: goto label_22a08c;
        case 0x22a090u: goto label_22a090;
        case 0x22a094u: goto label_22a094;
        case 0x22a098u: goto label_22a098;
        case 0x22a09cu: goto label_22a09c;
        case 0x22a0a0u: goto label_22a0a0;
        case 0x22a0a4u: goto label_22a0a4;
        case 0x22a0a8u: goto label_22a0a8;
        case 0x22a0acu: goto label_22a0ac;
        case 0x22a0b0u: goto label_22a0b0;
        case 0x22a0b4u: goto label_22a0b4;
        case 0x22a0b8u: goto label_22a0b8;
        case 0x22a0bcu: goto label_22a0bc;
        case 0x22a0c0u: goto label_22a0c0;
        case 0x22a0c4u: goto label_22a0c4;
        case 0x22a0c8u: goto label_22a0c8;
        case 0x22a0ccu: goto label_22a0cc;
        case 0x22a0d0u: goto label_22a0d0;
        case 0x22a0d4u: goto label_22a0d4;
        case 0x22a0d8u: goto label_22a0d8;
        case 0x22a0dcu: goto label_22a0dc;
        case 0x22a0e0u: goto label_22a0e0;
        case 0x22a0e4u: goto label_22a0e4;
        case 0x22a0e8u: goto label_22a0e8;
        case 0x22a0ecu: goto label_22a0ec;
        case 0x22a0f0u: goto label_22a0f0;
        case 0x22a0f4u: goto label_22a0f4;
        case 0x22a0f8u: goto label_22a0f8;
        case 0x22a0fcu: goto label_22a0fc;
        case 0x22a100u: goto label_22a100;
        case 0x22a104u: goto label_22a104;
        case 0x22a108u: goto label_22a108;
        case 0x22a10cu: goto label_22a10c;
        case 0x22a110u: goto label_22a110;
        case 0x22a114u: goto label_22a114;
        case 0x22a118u: goto label_22a118;
        case 0x22a11cu: goto label_22a11c;
        case 0x22a120u: goto label_22a120;
        case 0x22a124u: goto label_22a124;
        case 0x22a128u: goto label_22a128;
        case 0x22a12cu: goto label_22a12c;
        case 0x22a130u: goto label_22a130;
        case 0x22a134u: goto label_22a134;
        case 0x22a138u: goto label_22a138;
        case 0x22a13cu: goto label_22a13c;
        case 0x22a140u: goto label_22a140;
        case 0x22a144u: goto label_22a144;
        case 0x22a148u: goto label_22a148;
        case 0x22a14cu: goto label_22a14c;
        case 0x22a150u: goto label_22a150;
        case 0x22a154u: goto label_22a154;
        case 0x22a158u: goto label_22a158;
        case 0x22a15cu: goto label_22a15c;
        case 0x22a160u: goto label_22a160;
        case 0x22a164u: goto label_22a164;
        case 0x22a168u: goto label_22a168;
        case 0x22a16cu: goto label_22a16c;
        case 0x22a170u: goto label_22a170;
        case 0x22a174u: goto label_22a174;
        case 0x22a178u: goto label_22a178;
        case 0x22a17cu: goto label_22a17c;
        case 0x22a180u: goto label_22a180;
        case 0x22a184u: goto label_22a184;
        case 0x22a188u: goto label_22a188;
        case 0x22a18cu: goto label_22a18c;
        case 0x22a190u: goto label_22a190;
        case 0x22a194u: goto label_22a194;
        case 0x22a198u: goto label_22a198;
        case 0x22a19cu: goto label_22a19c;
        case 0x22a1a0u: goto label_22a1a0;
        case 0x22a1a4u: goto label_22a1a4;
        case 0x22a1a8u: goto label_22a1a8;
        case 0x22a1acu: goto label_22a1ac;
        case 0x22a1b0u: goto label_22a1b0;
        case 0x22a1b4u: goto label_22a1b4;
        case 0x22a1b8u: goto label_22a1b8;
        case 0x22a1bcu: goto label_22a1bc;
        case 0x22a1c0u: goto label_22a1c0;
        case 0x22a1c4u: goto label_22a1c4;
        case 0x22a1c8u: goto label_22a1c8;
        case 0x22a1ccu: goto label_22a1cc;
        case 0x22a1d0u: goto label_22a1d0;
        case 0x22a1d4u: goto label_22a1d4;
        case 0x22a1d8u: goto label_22a1d8;
        case 0x22a1dcu: goto label_22a1dc;
        case 0x22a1e0u: goto label_22a1e0;
        case 0x22a1e4u: goto label_22a1e4;
        case 0x22a1e8u: goto label_22a1e8;
        case 0x22a1ecu: goto label_22a1ec;
        case 0x22a1f0u: goto label_22a1f0;
        case 0x22a1f4u: goto label_22a1f4;
        case 0x22a1f8u: goto label_22a1f8;
        case 0x22a1fcu: goto label_22a1fc;
        case 0x22a200u: goto label_22a200;
        case 0x22a204u: goto label_22a204;
        case 0x22a208u: goto label_22a208;
        case 0x22a20cu: goto label_22a20c;
        case 0x22a210u: goto label_22a210;
        case 0x22a214u: goto label_22a214;
        case 0x22a218u: goto label_22a218;
        case 0x22a21cu: goto label_22a21c;
        case 0x22a220u: goto label_22a220;
        case 0x22a224u: goto label_22a224;
        case 0x22a228u: goto label_22a228;
        case 0x22a22cu: goto label_22a22c;
        case 0x22a230u: goto label_22a230;
        case 0x22a234u: goto label_22a234;
        case 0x22a238u: goto label_22a238;
        case 0x22a23cu: goto label_22a23c;
        case 0x22a240u: goto label_22a240;
        case 0x22a244u: goto label_22a244;
        case 0x22a248u: goto label_22a248;
        case 0x22a24cu: goto label_22a24c;
        case 0x22a250u: goto label_22a250;
        case 0x22a254u: goto label_22a254;
        case 0x22a258u: goto label_22a258;
        case 0x22a25cu: goto label_22a25c;
        case 0x22a260u: goto label_22a260;
        case 0x22a264u: goto label_22a264;
        case 0x22a268u: goto label_22a268;
        case 0x22a26cu: goto label_22a26c;
        case 0x22a270u: goto label_22a270;
        case 0x22a274u: goto label_22a274;
        case 0x22a278u: goto label_22a278;
        case 0x22a27cu: goto label_22a27c;
        case 0x22a280u: goto label_22a280;
        case 0x22a284u: goto label_22a284;
        case 0x22a288u: goto label_22a288;
        case 0x22a28cu: goto label_22a28c;
        case 0x22a290u: goto label_22a290;
        case 0x22a294u: goto label_22a294;
        case 0x22a298u: goto label_22a298;
        case 0x22a29cu: goto label_22a29c;
        case 0x22a2a0u: goto label_22a2a0;
        case 0x22a2a4u: goto label_22a2a4;
        case 0x22a2a8u: goto label_22a2a8;
        case 0x22a2acu: goto label_22a2ac;
        case 0x22a2b0u: goto label_22a2b0;
        case 0x22a2b4u: goto label_22a2b4;
        case 0x22a2b8u: goto label_22a2b8;
        case 0x22a2bcu: goto label_22a2bc;
        case 0x22a2c0u: goto label_22a2c0;
        case 0x22a2c4u: goto label_22a2c4;
        case 0x22a2c8u: goto label_22a2c8;
        case 0x22a2ccu: goto label_22a2cc;
        case 0x22a2d0u: goto label_22a2d0;
        case 0x22a2d4u: goto label_22a2d4;
        case 0x22a2d8u: goto label_22a2d8;
        case 0x22a2dcu: goto label_22a2dc;
        case 0x22a2e0u: goto label_22a2e0;
        case 0x22a2e4u: goto label_22a2e4;
        case 0x22a2e8u: goto label_22a2e8;
        case 0x22a2ecu: goto label_22a2ec;
        case 0x22a2f0u: goto label_22a2f0;
        case 0x22a2f4u: goto label_22a2f4;
        case 0x22a2f8u: goto label_22a2f8;
        case 0x22a2fcu: goto label_22a2fc;
        case 0x22a300u: goto label_22a300;
        case 0x22a304u: goto label_22a304;
        case 0x22a308u: goto label_22a308;
        case 0x22a30cu: goto label_22a30c;
        case 0x22a310u: goto label_22a310;
        case 0x22a314u: goto label_22a314;
        case 0x22a318u: goto label_22a318;
        case 0x22a31cu: goto label_22a31c;
        case 0x22a320u: goto label_22a320;
        case 0x22a324u: goto label_22a324;
        case 0x22a328u: goto label_22a328;
        case 0x22a32cu: goto label_22a32c;
        case 0x22a330u: goto label_22a330;
        case 0x22a334u: goto label_22a334;
        case 0x22a338u: goto label_22a338;
        case 0x22a33cu: goto label_22a33c;
        case 0x22a340u: goto label_22a340;
        case 0x22a344u: goto label_22a344;
        case 0x22a348u: goto label_22a348;
        case 0x22a34cu: goto label_22a34c;
        case 0x22a350u: goto label_22a350;
        case 0x22a354u: goto label_22a354;
        case 0x22a358u: goto label_22a358;
        case 0x22a35cu: goto label_22a35c;
        case 0x22a360u: goto label_22a360;
        case 0x22a364u: goto label_22a364;
        case 0x22a368u: goto label_22a368;
        case 0x22a36cu: goto label_22a36c;
        case 0x22a370u: goto label_22a370;
        case 0x22a374u: goto label_22a374;
        case 0x22a378u: goto label_22a378;
        case 0x22a37cu: goto label_22a37c;
        case 0x22a380u: goto label_22a380;
        case 0x22a384u: goto label_22a384;
        case 0x22a388u: goto label_22a388;
        case 0x22a38cu: goto label_22a38c;
        case 0x22a390u: goto label_22a390;
        case 0x22a394u: goto label_22a394;
        case 0x22a398u: goto label_22a398;
        case 0x22a39cu: goto label_22a39c;
        case 0x22a3a0u: goto label_22a3a0;
        case 0x22a3a4u: goto label_22a3a4;
        case 0x22a3a8u: goto label_22a3a8;
        case 0x22a3acu: goto label_22a3ac;
        case 0x22a3b0u: goto label_22a3b0;
        case 0x22a3b4u: goto label_22a3b4;
        case 0x22a3b8u: goto label_22a3b8;
        case 0x22a3bcu: goto label_22a3bc;
        case 0x22a3c0u: goto label_22a3c0;
        case 0x22a3c4u: goto label_22a3c4;
        case 0x22a3c8u: goto label_22a3c8;
        case 0x22a3ccu: goto label_22a3cc;
        case 0x22a3d0u: goto label_22a3d0;
        case 0x22a3d4u: goto label_22a3d4;
        case 0x22a3d8u: goto label_22a3d8;
        case 0x22a3dcu: goto label_22a3dc;
        case 0x22a3e0u: goto label_22a3e0;
        case 0x22a3e4u: goto label_22a3e4;
        case 0x22a3e8u: goto label_22a3e8;
        case 0x22a3ecu: goto label_22a3ec;
        case 0x22a3f0u: goto label_22a3f0;
        case 0x22a3f4u: goto label_22a3f4;
        case 0x22a3f8u: goto label_22a3f8;
        case 0x22a3fcu: goto label_22a3fc;
        case 0x22a400u: goto label_22a400;
        case 0x22a404u: goto label_22a404;
        case 0x22a408u: goto label_22a408;
        case 0x22a40cu: goto label_22a40c;
        case 0x22a410u: goto label_22a410;
        case 0x22a414u: goto label_22a414;
        case 0x22a418u: goto label_22a418;
        case 0x22a41cu: goto label_22a41c;
        case 0x22a420u: goto label_22a420;
        case 0x22a424u: goto label_22a424;
        case 0x22a428u: goto label_22a428;
        case 0x22a42cu: goto label_22a42c;
        case 0x22a430u: goto label_22a430;
        case 0x22a434u: goto label_22a434;
        case 0x22a438u: goto label_22a438;
        case 0x22a43cu: goto label_22a43c;
        case 0x22a440u: goto label_22a440;
        case 0x22a444u: goto label_22a444;
        case 0x22a448u: goto label_22a448;
        case 0x22a44cu: goto label_22a44c;
        case 0x22a450u: goto label_22a450;
        case 0x22a454u: goto label_22a454;
        case 0x22a458u: goto label_22a458;
        case 0x22a45cu: goto label_22a45c;
        case 0x22a460u: goto label_22a460;
        case 0x22a464u: goto label_22a464;
        case 0x22a468u: goto label_22a468;
        case 0x22a46cu: goto label_22a46c;
        case 0x22a470u: goto label_22a470;
        case 0x22a474u: goto label_22a474;
        case 0x22a478u: goto label_22a478;
        case 0x22a47cu: goto label_22a47c;
        case 0x22a480u: goto label_22a480;
        case 0x22a484u: goto label_22a484;
        case 0x22a488u: goto label_22a488;
        case 0x22a48cu: goto label_22a48c;
        case 0x22a490u: goto label_22a490;
        case 0x22a494u: goto label_22a494;
        case 0x22a498u: goto label_22a498;
        case 0x22a49cu: goto label_22a49c;
        case 0x22a4a0u: goto label_22a4a0;
        case 0x22a4a4u: goto label_22a4a4;
        case 0x22a4a8u: goto label_22a4a8;
        case 0x22a4acu: goto label_22a4ac;
        case 0x22a4b0u: goto label_22a4b0;
        case 0x22a4b4u: goto label_22a4b4;
        case 0x22a4b8u: goto label_22a4b8;
        case 0x22a4bcu: goto label_22a4bc;
        case 0x22a4c0u: goto label_22a4c0;
        case 0x22a4c4u: goto label_22a4c4;
        case 0x22a4c8u: goto label_22a4c8;
        case 0x22a4ccu: goto label_22a4cc;
        case 0x22a4d0u: goto label_22a4d0;
        case 0x22a4d4u: goto label_22a4d4;
        case 0x22a4d8u: goto label_22a4d8;
        case 0x22a4dcu: goto label_22a4dc;
        case 0x22a4e0u: goto label_22a4e0;
        case 0x22a4e4u: goto label_22a4e4;
        case 0x22a4e8u: goto label_22a4e8;
        case 0x22a4ecu: goto label_22a4ec;
        case 0x22a4f0u: goto label_22a4f0;
        case 0x22a4f4u: goto label_22a4f4;
        case 0x22a4f8u: goto label_22a4f8;
        case 0x22a4fcu: goto label_22a4fc;
        case 0x22a500u: goto label_22a500;
        case 0x22a504u: goto label_22a504;
        case 0x22a508u: goto label_22a508;
        case 0x22a50cu: goto label_22a50c;
        case 0x22a510u: goto label_22a510;
        case 0x22a514u: goto label_22a514;
        case 0x22a518u: goto label_22a518;
        case 0x22a51cu: goto label_22a51c;
        case 0x22a520u: goto label_22a520;
        case 0x22a524u: goto label_22a524;
        case 0x22a528u: goto label_22a528;
        case 0x22a52cu: goto label_22a52c;
        case 0x22a530u: goto label_22a530;
        case 0x22a534u: goto label_22a534;
        case 0x22a538u: goto label_22a538;
        case 0x22a53cu: goto label_22a53c;
        case 0x22a540u: goto label_22a540;
        case 0x22a544u: goto label_22a544;
        case 0x22a548u: goto label_22a548;
        case 0x22a54cu: goto label_22a54c;
        case 0x22a550u: goto label_22a550;
        case 0x22a554u: goto label_22a554;
        case 0x22a558u: goto label_22a558;
        case 0x22a55cu: goto label_22a55c;
        case 0x22a560u: goto label_22a560;
        case 0x22a564u: goto label_22a564;
        case 0x22a568u: goto label_22a568;
        case 0x22a56cu: goto label_22a56c;
        case 0x22a570u: goto label_22a570;
        case 0x22a574u: goto label_22a574;
        case 0x22a578u: goto label_22a578;
        case 0x22a57cu: goto label_22a57c;
        case 0x22a580u: goto label_22a580;
        case 0x22a584u: goto label_22a584;
        case 0x22a588u: goto label_22a588;
        case 0x22a58cu: goto label_22a58c;
        case 0x22a590u: goto label_22a590;
        case 0x22a594u: goto label_22a594;
        case 0x22a598u: goto label_22a598;
        case 0x22a59cu: goto label_22a59c;
        case 0x22a5a0u: goto label_22a5a0;
        case 0x22a5a4u: goto label_22a5a4;
        case 0x22a5a8u: goto label_22a5a8;
        case 0x22a5acu: goto label_22a5ac;
        case 0x22a5b0u: goto label_22a5b0;
        case 0x22a5b4u: goto label_22a5b4;
        case 0x22a5b8u: goto label_22a5b8;
        case 0x22a5bcu: goto label_22a5bc;
        case 0x22a5c0u: goto label_22a5c0;
        case 0x22a5c4u: goto label_22a5c4;
        case 0x22a5c8u: goto label_22a5c8;
        case 0x22a5ccu: goto label_22a5cc;
        case 0x22a5d0u: goto label_22a5d0;
        case 0x22a5d4u: goto label_22a5d4;
        case 0x22a5d8u: goto label_22a5d8;
        case 0x22a5dcu: goto label_22a5dc;
        case 0x22a5e0u: goto label_22a5e0;
        case 0x22a5e4u: goto label_22a5e4;
        case 0x22a5e8u: goto label_22a5e8;
        case 0x22a5ecu: goto label_22a5ec;
        case 0x22a5f0u: goto label_22a5f0;
        case 0x22a5f4u: goto label_22a5f4;
        case 0x22a5f8u: goto label_22a5f8;
        case 0x22a5fcu: goto label_22a5fc;
        case 0x22a600u: goto label_22a600;
        case 0x22a604u: goto label_22a604;
        case 0x22a608u: goto label_22a608;
        case 0x22a60cu: goto label_22a60c;
        case 0x22a610u: goto label_22a610;
        case 0x22a614u: goto label_22a614;
        case 0x22a618u: goto label_22a618;
        case 0x22a61cu: goto label_22a61c;
        case 0x22a620u: goto label_22a620;
        case 0x22a624u: goto label_22a624;
        case 0x22a628u: goto label_22a628;
        case 0x22a62cu: goto label_22a62c;
        case 0x22a630u: goto label_22a630;
        case 0x22a634u: goto label_22a634;
        case 0x22a638u: goto label_22a638;
        case 0x22a63cu: goto label_22a63c;
        case 0x22a640u: goto label_22a640;
        case 0x22a644u: goto label_22a644;
        case 0x22a648u: goto label_22a648;
        case 0x22a64cu: goto label_22a64c;
        case 0x22a650u: goto label_22a650;
        case 0x22a654u: goto label_22a654;
        case 0x22a658u: goto label_22a658;
        case 0x22a65cu: goto label_22a65c;
        case 0x22a660u: goto label_22a660;
        case 0x22a664u: goto label_22a664;
        case 0x22a668u: goto label_22a668;
        case 0x22a66cu: goto label_22a66c;
        case 0x22a670u: goto label_22a670;
        case 0x22a674u: goto label_22a674;
        case 0x22a678u: goto label_22a678;
        case 0x22a67cu: goto label_22a67c;
        case 0x22a680u: goto label_22a680;
        case 0x22a684u: goto label_22a684;
        case 0x22a688u: goto label_22a688;
        case 0x22a68cu: goto label_22a68c;
        case 0x22a690u: goto label_22a690;
        case 0x22a694u: goto label_22a694;
        case 0x22a698u: goto label_22a698;
        case 0x22a69cu: goto label_22a69c;
        case 0x22a6a0u: goto label_22a6a0;
        case 0x22a6a4u: goto label_22a6a4;
        case 0x22a6a8u: goto label_22a6a8;
        case 0x22a6acu: goto label_22a6ac;
        case 0x22a6b0u: goto label_22a6b0;
        case 0x22a6b4u: goto label_22a6b4;
        case 0x22a6b8u: goto label_22a6b8;
        case 0x22a6bcu: goto label_22a6bc;
        case 0x22a6c0u: goto label_22a6c0;
        case 0x22a6c4u: goto label_22a6c4;
        case 0x22a6c8u: goto label_22a6c8;
        default: break;
    }

    ctx->pc = 0x229e70u;

label_229e70:
    // 0x229e70: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x229e70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
label_229e74:
    // 0x229e74: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x229e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_229e78:
    // 0x229e78: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x229e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_229e7c:
    // 0x229e7c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x229e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_229e80:
    // 0x229e80: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x229e80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_229e84:
    // 0x229e84: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x229e84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_229e88:
    // 0x229e88: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x229e88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_229e8c:
    // 0x229e8c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x229e8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_229e90:
    // 0x229e90: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x229e90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_229e94:
    // 0x229e94: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x229e94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_229e98:
    // 0x229e98: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x229e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_229e9c:
    // 0x229e9c: 0xe7b7000c  swc1        $f23, 0xC($sp)
    ctx->pc = 0x229e9cu;
    { float f = ctx->f[23]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_229ea0:
    // 0x229ea0: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x229ea0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
label_229ea4:
    // 0x229ea4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x229ea4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_229ea8:
    // 0x229ea8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x229ea8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_229eac:
    // 0x229eac: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x229eacu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_229eb0:
    // 0x229eb0: 0x106001f9  beqz        $v1, . + 4 + (0x1F9 << 2)
label_229eb4:
    if (ctx->pc == 0x229EB4u) {
        ctx->pc = 0x229EB4u;
            // 0x229eb4: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x229EB8u;
        goto label_229eb8;
    }
    ctx->pc = 0x229EB0u;
    {
        const bool branch_taken_0x229eb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x229EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229EB0u;
            // 0x229eb4: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229eb0) {
            ctx->pc = 0x22A698u;
            goto label_22a698;
        }
    }
    ctx->pc = 0x229EB8u;
label_229eb8:
    // 0x229eb8: 0x92830001  lbu         $v1, 0x1($s4)
    ctx->pc = 0x229eb8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
label_229ebc:
    // 0x229ebc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_229ec0:
    if (ctx->pc == 0x229EC0u) {
        ctx->pc = 0x229EC4u;
        goto label_229ec4;
    }
    ctx->pc = 0x229EBCu;
    {
        const bool branch_taken_0x229ebc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x229ebc) {
            ctx->pc = 0x229ECCu;
            goto label_229ecc;
        }
    }
    ctx->pc = 0x229EC4u;
label_229ec4:
    // 0x229ec4: 0x100001f5  b           . + 4 + (0x1F5 << 2)
label_229ec8:
    if (ctx->pc == 0x229EC8u) {
        ctx->pc = 0x229EC8u;
            // 0x229ec8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x229ECCu;
        goto label_229ecc;
    }
    ctx->pc = 0x229EC4u;
    {
        const bool branch_taken_0x229ec4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x229EC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229EC4u;
            // 0x229ec8: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229ec4) {
            ctx->pc = 0x22A69Cu;
            goto label_22a69c;
        }
    }
    ctx->pc = 0x229ECCu;
label_229ecc:
    // 0x229ecc: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x229eccu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_229ed0:
    // 0x229ed0: 0x86820008  lh          $v0, 0x8($s4)
    ctx->pc = 0x229ed0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
label_229ed4:
    // 0x229ed4: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x229ed4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_229ed8:
    // 0x229ed8: 0x0  nop
    ctx->pc = 0x229ed8u;
    // NOP
label_229edc:
    // 0x229edc: 0x46800d20  cvt.s.w     $f20, $f1
    ctx->pc = 0x229edcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[20] = FPU_CVT_S_W(tmp); }
label_229ee0:
    // 0x229ee0: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_229ee4:
    if (ctx->pc == 0x229EE4u) {
        ctx->pc = 0x229EE4u;
            // 0x229ee4: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x229EE8u;
        goto label_229ee8;
    }
    ctx->pc = 0x229EE0u;
    {
        const bool branch_taken_0x229ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x229EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229EE0u;
            // 0x229ee4: 0x46800560  cvt.s.w     $f21, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[21] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x229ee0) {
            ctx->pc = 0x229F2Cu;
            goto label_229f2c;
        }
    }
    ctx->pc = 0x229EE8u;
label_229ee8:
    // 0x229ee8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x229ee8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_229eec:
    // 0x229eec: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x229eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_229ef0:
    // 0x229ef0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x229ef0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_229ef4:
    // 0x229ef4: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x229ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_229ef8:
    // 0x229ef8: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x229ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_229efc:
    // 0x229efc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x229efcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_229f00:
    // 0x229f00: 0x0  nop
    ctx->pc = 0x229f00u;
    // NOP
label_229f04:
    // 0x229f04: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x229f04u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_229f08:
    // 0x229f08: 0x0  nop
    ctx->pc = 0x229f08u;
    // NOP
label_229f0c:
    // 0x229f0c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x229f0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_229f10:
    // 0x229f10: 0xc047964  jal         func_11E590
label_229f14:
    if (ctx->pc == 0x229F14u) {
        ctx->pc = 0x229F14u;
            // 0x229f14: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x229F18u;
        goto label_229f18;
    }
    ctx->pc = 0x229F10u;
    SET_GPR_U32(ctx, 31, 0x229F18u);
    ctx->pc = 0x229F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229F10u;
            // 0x229f14: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E590u;
    if (runtime->hasFunction(0x11E590u)) {
        auto targetFn = runtime->lookupFunction(0x11E590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229F18u; }
        if (ctx->pc != 0x229F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        cosf_0x11e590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229F18u; }
        if (ctx->pc != 0x229F18u) { return; }
    }
    ctx->pc = 0x229F18u;
label_229f18:
    // 0x229f18: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x229f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_229f1c:
    // 0x229f1c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x229f1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_229f20:
    // 0x229f20: 0x0  nop
    ctx->pc = 0x229f20u;
    // NOP
label_229f24:
    // 0x229f24: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x229f24u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_229f28:
    // 0x229f28: 0x4600a500  add.s       $f20, $f20, $f0
    ctx->pc = 0x229f28u;
    ctx->f[20] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
label_229f2c:
    // 0x229f2c: 0x8682000a  lh          $v0, 0xA($s4)
    ctx->pc = 0x229f2cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
label_229f30:
    // 0x229f30: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_229f34:
    if (ctx->pc == 0x229F34u) {
        ctx->pc = 0x229F38u;
        goto label_229f38;
    }
    ctx->pc = 0x229F30u;
    {
        const bool branch_taken_0x229f30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x229f30) {
            ctx->pc = 0x229F7Cu;
            goto label_229f7c;
        }
    }
    ctx->pc = 0x229F38u;
label_229f38:
    // 0x229f38: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x229f38u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_229f3c:
    // 0x229f3c: 0xc6800018  lwc1        $f0, 0x18($s4)
    ctx->pc = 0x229f3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_229f40:
    // 0x229f40: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x229f40u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_229f44:
    // 0x229f44: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x229f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_229f48:
    // 0x229f48: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x229f48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_229f4c:
    // 0x229f4c: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x229f4cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_229f50:
    // 0x229f50: 0x0  nop
    ctx->pc = 0x229f50u;
    // NOP
label_229f54:
    // 0x229f54: 0x46011043  div.s       $f1, $f2, $f1
    ctx->pc = 0x229f54u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_229f58:
    // 0x229f58: 0x0  nop
    ctx->pc = 0x229f58u;
    // NOP
label_229f5c:
    // 0x229f5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x229f5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_229f60:
    // 0x229f60: 0xc047a42  jal         func_11E908
label_229f64:
    if (ctx->pc == 0x229F64u) {
        ctx->pc = 0x229F64u;
            // 0x229f64: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x229F68u;
        goto label_229f68;
    }
    ctx->pc = 0x229F60u;
    SET_GPR_U32(ctx, 31, 0x229F68u);
    ctx->pc = 0x229F64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229F60u;
            // 0x229f64: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229F68u; }
        if (ctx->pc != 0x229F68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229F68u; }
        if (ctx->pc != 0x229F68u) { return; }
    }
    ctx->pc = 0x229F68u;
label_229f68:
    // 0x229f68: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x229f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_229f6c:
    // 0x229f6c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x229f6cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_229f70:
    // 0x229f70: 0x0  nop
    ctx->pc = 0x229f70u;
    // NOP
label_229f74:
    // 0x229f74: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x229f74u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_229f78:
    // 0x229f78: 0x4600ad40  add.s       $f21, $f21, $f0
    ctx->pc = 0x229f78u;
    ctx->f[21] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
label_229f7c:
    // 0x229f7c: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x229f7cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
label_229f80:
    // 0x229f80: 0xc08cb14  jal         func_232C50
label_229f84:
    if (ctx->pc == 0x229F84u) {
        ctx->pc = 0x229F84u;
            // 0x229f84: 0x26101ef0  addiu       $s0, $s0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
        ctx->pc = 0x229F88u;
        goto label_229f88;
    }
    ctx->pc = 0x229F80u;
    SET_GPR_U32(ctx, 31, 0x229F88u);
    ctx->pc = 0x229F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229F80u;
            // 0x229f84: 0x26101ef0  addiu       $s0, $s0, 0x1EF0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 7920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232C50u;
    if (runtime->hasFunction(0x232C50u)) {
        auto targetFn = runtime->lookupFunction(0x232C50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229F88u; }
        if (ctx->pc != 0x229F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuPrim__Fv_0x232c50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229F88u; }
        if (ctx->pc != 0x229F88u) { return; }
    }
    ctx->pc = 0x229F88u;
label_229f88:
    // 0x229f88: 0x92830002  lbu         $v1, 0x2($s4)
    ctx->pc = 0x229f88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_229f8c:
    // 0x229f8c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_229f90:
    if (ctx->pc == 0x229F90u) {
        ctx->pc = 0x229F90u;
            // 0x229f90: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x229F94u;
        goto label_229f94;
    }
    ctx->pc = 0x229F8Cu;
    {
        const bool branch_taken_0x229f8c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x229F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229F8Cu;
            // 0x229f90: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229f8c) {
            ctx->pc = 0x229FA0u;
            goto label_229fa0;
        }
    }
    ctx->pc = 0x229F94u;
label_229f94:
    // 0x229f94: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x229f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_229f98:
    // 0x229f98: 0x1466000b  bne         $v1, $a2, . + 4 + (0xB << 2)
label_229f9c:
    if (ctx->pc == 0x229F9Cu) {
        ctx->pc = 0x229F9Cu;
            // 0x229f9c: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x229FA0u;
        goto label_229fa0;
    }
    ctx->pc = 0x229F98u;
    {
        const bool branch_taken_0x229f98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x229F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229F98u;
            // 0x229f9c: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229f98) {
            ctx->pc = 0x229FC8u;
            goto label_229fc8;
        }
    }
    ctx->pc = 0x229FA0u;
label_229fa0:
    // 0x229fa0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x229fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_229fa4:
    // 0x229fa4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x229fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_229fa8:
    // 0x229fa8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x229fa8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_229fac:
    // 0x229fac: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x229facu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_229fb0:
    // 0x229fb0: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x229fb0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_229fb4:
    // 0x229fb4: 0xc08a3a0  jal         func_228E80
label_229fb8:
    if (ctx->pc == 0x229FB8u) {
        ctx->pc = 0x229FB8u;
            // 0x229fb8: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x229FBCu;
        goto label_229fbc;
    }
    ctx->pc = 0x229FB4u;
    SET_GPR_U32(ctx, 31, 0x229FBCu);
    ctx->pc = 0x229FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229FB4u;
            // 0x229fb8: 0x4600ab46  mov.s       $f13, $f21 (Delay Slot)
        ctx->f[13] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x228E80u;
    if (runtime->hasFunction(0x228E80u)) {
        auto targetFn = runtime->lookupFunction(0x228E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229FBCu; }
        if (ctx->pc != 0x229FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuFormDrawNormal__16CMenuPosDataFormFiiffRi_0x228e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229FBCu; }
        if (ctx->pc != 0x229FBCu) { return; }
    }
    ctx->pc = 0x229FBCu;
label_229fbc:
    // 0x229fbc: 0x100001b6  b           . + 4 + (0x1B6 << 2)
label_229fc0:
    if (ctx->pc == 0x229FC0u) {
        ctx->pc = 0x229FC4u;
        goto label_229fc4;
    }
    ctx->pc = 0x229FBCu;
    {
        const bool branch_taken_0x229fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x229fbc) {
            ctx->pc = 0x22A698u;
            goto label_22a698;
        }
    }
    ctx->pc = 0x229FC4u;
label_229fc4:
    // 0x229fc4: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x229fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_229fc8:
    // 0x229fc8: 0x14660022  bne         $v1, $a2, . + 4 + (0x22 << 2)
label_229fcc:
    if (ctx->pc == 0x229FCCu) {
        ctx->pc = 0x229FCCu;
            // 0x229fcc: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->pc = 0x229FD0u;
        goto label_229fd0;
    }
    ctx->pc = 0x229FC8u;
    {
        const bool branch_taken_0x229fc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x229FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229FC8u;
            // 0x229fcc: 0x2406001e  addiu       $a2, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229fc8) {
            ctx->pc = 0x22A054u;
            goto label_22a054;
        }
    }
    ctx->pc = 0x229FD0u;
label_229fd0:
    // 0x229fd0: 0x9285001c  lbu         $a1, 0x1C($s4)
    ctx->pc = 0x229fd0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 28)));
label_229fd4:
    // 0x229fd4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x229fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_229fd8:
    // 0x229fd8: 0x2484ca40  addiu       $a0, $a0, -0x35C0
    ctx->pc = 0x229fd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953536));
label_229fdc:
    // 0x229fdc: 0x92830058  lbu         $v1, 0x58($s4)
    ctx->pc = 0x229fdcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 88)));
label_229fe0:
    // 0x229fe0: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x229fe0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_229fe4:
    // 0x229fe4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x229fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_229fe8:
    // 0x229fe8: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x229fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_229fec:
    // 0x229fec: 0x186001aa  blez        $v1, . + 4 + (0x1AA << 2)
label_229ff0:
    if (ctx->pc == 0x229FF0u) {
        ctx->pc = 0x229FF0u;
            // 0x229ff0: 0x8e051b2c  lw          $a1, 0x1B2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6956)));
        ctx->pc = 0x229FF4u;
        goto label_229ff4;
    }
    ctx->pc = 0x229FECu;
    {
        const bool branch_taken_0x229fec = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x229FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x229FECu;
            // 0x229ff0: 0x8e051b2c  lw          $a1, 0x1B2C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6956)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x229fec) {
            ctx->pc = 0x22A698u;
            goto label_22a698;
        }
    }
    ctx->pc = 0x229FF4u;
label_229ff4:
    // 0x229ff4: 0xc08878c  jal         func_221E30
label_229ff8:
    if (ctx->pc == 0x229FF8u) {
        ctx->pc = 0x229FF8u;
            // 0x229ff8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x229FFCu;
        goto label_229ffc;
    }
    ctx->pc = 0x229FF4u;
    SET_GPR_U32(ctx, 31, 0x229FFCu);
    ctx->pc = 0x229FF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229FF4u;
            // 0x229ff8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229FFCu; }
        if (ctx->pc != 0x229FFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x229FFCu; }
        if (ctx->pc != 0x229FFCu) { return; }
    }
    ctx->pc = 0x229FFCu;
label_229ffc:
    // 0x229ffc: 0xc087898  jal         func_21E260
label_22a000:
    if (ctx->pc == 0x22A000u) {
        ctx->pc = 0x22A000u;
            // 0x22a000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A004u;
        goto label_22a004;
    }
    ctx->pc = 0x229FFCu;
    SET_GPR_U32(ctx, 31, 0x22A004u);
    ctx->pc = 0x22A000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x229FFCu;
            // 0x22a000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A004u; }
        if (ctx->pc != 0x22A004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A004u; }
        if (ctx->pc != 0x22A004u) { return; }
    }
    ctx->pc = 0x22A004u;
label_22a004:
    // 0x22a004: 0xdf829440  ld          $v0, -0x6BC0($gp)
    ctx->pc = 0x22a004u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294939712)));
label_22a008:
    // 0x22a008: 0x27a300c8  addiu       $v1, $sp, 0xC8
    ctx->pc = 0x22a008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
label_22a00c:
    // 0x22a00c: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x22a00cu;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
label_22a010:
    // 0x22a010: 0xc0a248c  jal         func_289230
label_22a014:
    if (ctx->pc == 0x22A014u) {
        ctx->pc = 0x22A014u;
            // 0x22a014: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->pc = 0x22A018u;
        goto label_22a018;
    }
    ctx->pc = 0x22A010u;
    SET_GPR_U32(ctx, 31, 0x22A018u);
    ctx->pc = 0x22A014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A010u;
            // 0x22a014: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A018u; }
        if (ctx->pc != 0x22A018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A018u; }
        if (ctx->pc != 0x22A018u) { return; }
    }
    ctx->pc = 0x22A018u;
label_22a018:
    // 0x22a018: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x22a018u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_22a01c:
    // 0x22a01c: 0xc0a248c  jal         func_289230
label_22a020:
    if (ctx->pc == 0x22A020u) {
        ctx->pc = 0x22A020u;
            // 0x22a020: 0xafa200c8  sw          $v0, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
        ctx->pc = 0x22A024u;
        goto label_22a024;
    }
    ctx->pc = 0x22A01Cu;
    SET_GPR_U32(ctx, 31, 0x22A024u);
    ctx->pc = 0x22A020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A01Cu;
            // 0x22a020: 0xafa200c8  sw          $v0, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A024u; }
        if (ctx->pc != 0x22A024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A024u; }
        if (ctx->pc != 0x22A024u) { return; }
    }
    ctx->pc = 0x22A024u;
label_22a024:
    // 0x22a024: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x22a024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_22a028:
    // 0x22a028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22a02c:
    // 0x22a02c: 0xc0876b0  jal         func_21DAC0
label_22a030:
    if (ctx->pc == 0x22A030u) {
        ctx->pc = 0x22A030u;
            // 0x22a030: 0x27a500c8  addiu       $a1, $sp, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
        ctx->pc = 0x22A034u;
        goto label_22a034;
    }
    ctx->pc = 0x22A02Cu;
    SET_GPR_U32(ctx, 31, 0x22A034u);
    ctx->pc = 0x22A030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A02Cu;
            // 0x22a030: 0x27a500c8  addiu       $a1, $sp, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DAC0u;
    if (runtime->hasFunction(0x21DAC0u)) {
        auto targetFn = runtime->lookupFunction(0x21DAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A034u; }
        if (ctx->pc != 0x22A034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPutPos__7CDC2MesFPi_0x21dac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A034u; }
        if (ctx->pc != 0x22A034u) { return; }
    }
    ctx->pc = 0x22A034u;
label_22a034:
    // 0x22a034: 0x92850058  lbu         $a1, 0x58($s4)
    ctx->pc = 0x22a034u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 88)));
label_22a038:
    // 0x22a038: 0xc0878f0  jal         func_21E3C0
label_22a03c:
    if (ctx->pc == 0x22A03Cu) {
        ctx->pc = 0x22A03Cu;
            // 0x22a03c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A040u;
        goto label_22a040;
    }
    ctx->pc = 0x22A038u;
    SET_GPR_U32(ctx, 31, 0x22A040u);
    ctx->pc = 0x22A03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A038u;
            // 0x22a03c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E3C0u;
    if (runtime->hasFunction(0x21E3C0u)) {
        auto targetFn = runtime->lookupFunction(0x21E3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A040u; }
        if (ctx->pc != 0x22A040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgAlpha__7CDC2MesFi_0x21e3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A040u; }
        if (ctx->pc != 0x22A040u) { return; }
    }
    ctx->pc = 0x22A040u;
label_22a040:
    // 0x22a040: 0xc0878c8  jal         func_21E320
label_22a044:
    if (ctx->pc == 0x22A044u) {
        ctx->pc = 0x22A044u;
            // 0x22a044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A048u;
        goto label_22a048;
    }
    ctx->pc = 0x22A040u;
    SET_GPR_U32(ctx, 31, 0x22A048u);
    ctx->pc = 0x22A044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A040u;
            // 0x22a044: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E320u;
    if (runtime->hasFunction(0x21E320u)) {
        auto targetFn = runtime->lookupFunction(0x21E320u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A048u; }
        if (ctx->pc != 0x22A048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMsg__7CDC2MesFv_0x21e320(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A048u; }
        if (ctx->pc != 0x22A048u) { return; }
    }
    ctx->pc = 0x22A048u;
label_22a048:
    // 0x22a048: 0x10000193  b           . + 4 + (0x193 << 2)
label_22a04c:
    if (ctx->pc == 0x22A04Cu) {
        ctx->pc = 0x22A050u;
        goto label_22a050;
    }
    ctx->pc = 0x22A048u;
    {
        const bool branch_taken_0x22a048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a048) {
            ctx->pc = 0x22A698u;
            goto label_22a698;
        }
    }
    ctx->pc = 0x22A050u;
label_22a050:
    // 0x22a050: 0x2406001e  addiu       $a2, $zero, 0x1E
    ctx->pc = 0x22a050u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_22a054:
    // 0x22a054: 0x14660007  bne         $v1, $a2, . + 4 + (0x7 << 2)
label_22a058:
    if (ctx->pc == 0x22A058u) {
        ctx->pc = 0x22A058u;
            // 0x22a058: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->pc = 0x22A05Cu;
        goto label_22a05c;
    }
    ctx->pc = 0x22A054u;
    {
        const bool branch_taken_0x22a054 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x22A058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A054u;
            // 0x22a058: 0x2406001f  addiu       $a2, $zero, 0x1F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a054) {
            ctx->pc = 0x22A074u;
            goto label_22a074;
        }
    }
    ctx->pc = 0x22A05Cu;
label_22a05c:
    // 0x22a05c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22a05cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22a060:
    // 0x22a060: 0xc089230  jal         func_2248C0
label_22a064:
    if (ctx->pc == 0x22A064u) {
        ctx->pc = 0x22A064u;
            // 0x22a064: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x22A068u;
        goto label_22a068;
    }
    ctx->pc = 0x22A060u;
    SET_GPR_U32(ctx, 31, 0x22A068u);
    ctx->pc = 0x22A064u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A060u;
            // 0x22a064: 0x24050080  addiu       $a1, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2248C0u;
    if (runtime->hasFunction(0x2248C0u)) {
        auto targetFn = runtime->lookupFunction(0x2248C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A068u; }
        if (ctx->pc != 0x22A068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMainFrameDraw__FRii_0x2248c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A068u; }
        if (ctx->pc != 0x22A068u) { return; }
    }
    ctx->pc = 0x22A068u;
label_22a068:
    // 0x22a068: 0x1000018b  b           . + 4 + (0x18B << 2)
label_22a06c:
    if (ctx->pc == 0x22A06Cu) {
        ctx->pc = 0x22A070u;
        goto label_22a070;
    }
    ctx->pc = 0x22A068u;
    {
        const bool branch_taken_0x22a068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a068) {
            ctx->pc = 0x22A698u;
            goto label_22a698;
        }
    }
    ctx->pc = 0x22A070u;
label_22a070:
    // 0x22a070: 0x2406001f  addiu       $a2, $zero, 0x1F
    ctx->pc = 0x22a070u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_22a074:
    // 0x22a074: 0x14660006  bne         $v1, $a2, . + 4 + (0x6 << 2)
label_22a078:
    if (ctx->pc == 0x22A078u) {
        ctx->pc = 0x22A078u;
            // 0x22a078: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x22A07Cu;
        goto label_22a07c;
    }
    ctx->pc = 0x22A074u;
    {
        const bool branch_taken_0x22a074 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x22A078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A074u;
            // 0x22a078: 0x2406000a  addiu       $a2, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a074) {
            ctx->pc = 0x22A090u;
            goto label_22a090;
        }
    }
    ctx->pc = 0x22A07Cu;
label_22a07c:
    // 0x22a07c: 0xc089360  jal         func_224D80
label_22a080:
    if (ctx->pc == 0x22A080u) {
        ctx->pc = 0x22A080u;
            // 0x22a080: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A084u;
        goto label_22a084;
    }
    ctx->pc = 0x22A07Cu;
    SET_GPR_U32(ctx, 31, 0x22A084u);
    ctx->pc = 0x22A080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A07Cu;
            // 0x22a080: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224D80u;
    if (runtime->hasFunction(0x224D80u)) {
        auto targetFn = runtime->lookupFunction(0x224D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A084u; }
        if (ctx->pc != 0x22A084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMainFrameImgDraw__FRi_0x224d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A084u; }
        if (ctx->pc != 0x22A084u) { return; }
    }
    ctx->pc = 0x22A084u;
label_22a084:
    // 0x22a084: 0x10000184  b           . + 4 + (0x184 << 2)
label_22a088:
    if (ctx->pc == 0x22A088u) {
        ctx->pc = 0x22A08Cu;
        goto label_22a08c;
    }
    ctx->pc = 0x22A084u;
    {
        const bool branch_taken_0x22a084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a084) {
            ctx->pc = 0x22A698u;
            goto label_22a698;
        }
    }
    ctx->pc = 0x22A08Cu;
label_22a08c:
    // 0x22a08c: 0x2406000a  addiu       $a2, $zero, 0xA
    ctx->pc = 0x22a08cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_22a090:
    // 0x22a090: 0x14660064  bne         $v1, $a2, . + 4 + (0x64 << 2)
label_22a094:
    if (ctx->pc == 0x22A094u) {
        ctx->pc = 0x22A094u;
            // 0x22a094: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x22A098u;
        goto label_22a098;
    }
    ctx->pc = 0x22A090u;
    {
        const bool branch_taken_0x22a090 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x22A094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A090u;
            // 0x22a094: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a090) {
            ctx->pc = 0x22A224u;
            goto label_22a224;
        }
    }
    ctx->pc = 0x22A098u;
label_22a098:
    // 0x22a098: 0x3c024180  lui         $v0, 0x4180
    ctx->pc = 0x22a098u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16768 << 16));
label_22a09c:
    // 0x22a09c: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x22a09cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_22a0a0:
    // 0x22a0a0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a0a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a0a4:
    // 0x22a0a4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x22a0a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22a0a8:
    // 0x22a0a8: 0x0  nop
    ctx->pc = 0x22a0a8u;
    // NOP
label_22a0ac:
    // 0x22a0ac: 0x46140580  add.s       $f22, $f0, $f20
    ctx->pc = 0x22a0acu;
    ctx->f[22] = FPU_ADD_S(ctx->f[0], ctx->f[20]);
label_22a0b0:
    // 0x22a0b0: 0x46150dc0  add.s       $f23, $f1, $f21
    ctx->pc = 0x22a0b0u;
    ctx->f[23] = FPU_ADD_S(ctx->f[1], ctx->f[21]);
label_22a0b4:
    // 0x22a0b4: 0xc0a248c  jal         func_289230
label_22a0b8:
    if (ctx->pc == 0x22A0B8u) {
        ctx->pc = 0x22A0B8u;
            // 0x22a0b8: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->pc = 0x22A0BCu;
        goto label_22a0bc;
    }
    ctx->pc = 0x22A0B4u;
    SET_GPR_U32(ctx, 31, 0x22A0BCu);
    ctx->pc = 0x22A0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A0B4u;
            // 0x22a0b8: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A0BCu; }
        if (ctx->pc != 0x22A0BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A0BCu; }
        if (ctx->pc != 0x22A0BCu) { return; }
    }
    ctx->pc = 0x22A0BCu;
label_22a0bc:
    // 0x22a0bc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x22a0bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22a0c0:
    // 0x22a0c0: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x22a0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_22a0c4:
    // 0x22a0c4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a0c4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a0c8:
    // 0x22a0c8: 0xc0a248c  jal         func_289230
label_22a0cc:
    if (ctx->pc == 0x22A0CCu) {
        ctx->pc = 0x22A0CCu;
            // 0x22a0cc: 0x4600bb01  sub.s       $f12, $f23, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
        ctx->pc = 0x22A0D0u;
        goto label_22a0d0;
    }
    ctx->pc = 0x22A0C8u;
    SET_GPR_U32(ctx, 31, 0x22A0D0u);
    ctx->pc = 0x22A0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A0C8u;
            // 0x22a0cc: 0x4600bb01  sub.s       $f12, $f23, $f0 (Delay Slot)
        ctx->f[12] = FPU_SUB_S(ctx->f[23], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A0D0u; }
        if (ctx->pc != 0x22A0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A0D0u; }
        if (ctx->pc != 0x22A0D0u) { return; }
    }
    ctx->pc = 0x22A0D0u;
label_22a0d0:
    // 0x22a0d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x22a0d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22a0d4:
    // 0x22a0d4: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x22a0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
label_22a0d8:
    // 0x22a0d8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22a0d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22a0dc:
    // 0x22a0dc: 0x3c024370  lui         $v0, 0x4370
    ctx->pc = 0x22a0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17264 << 16));
label_22a0e0:
    // 0x22a0e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a0e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a0e4:
    // 0x22a0e4: 0x0  nop
    ctx->pc = 0x22a0e4u;
    // NOP
label_22a0e8:
    // 0x22a0e8: 0x46160000  add.s       $f0, $f0, $f22
    ctx->pc = 0x22a0e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[22]);
label_22a0ec:
    // 0x22a0ec: 0xc0a248c  jal         func_289230
label_22a0f0:
    if (ctx->pc == 0x22A0F0u) {
        ctx->pc = 0x22A0F0u;
            // 0x22a0f0: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x22A0F4u;
        goto label_22a0f4;
    }
    ctx->pc = 0x22A0ECu;
    SET_GPR_U32(ctx, 31, 0x22A0F4u);
    ctx->pc = 0x22A0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A0ECu;
            // 0x22a0f0: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A0F4u; }
        if (ctx->pc != 0x22A0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A0F4u; }
        if (ctx->pc != 0x22A0F4u) { return; }
    }
    ctx->pc = 0x22A0F4u;
label_22a0f4:
    // 0x22a0f4: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x22a0f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22a0f8:
    // 0x22a0f8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x22a0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
label_22a0fc:
    // 0x22a0fc: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x22a0fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22a100:
    // 0x22a100: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x22a100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
label_22a104:
    // 0x22a104: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a104u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a108:
    // 0x22a108: 0x0  nop
    ctx->pc = 0x22a108u;
    // NOP
label_22a10c:
    // 0x22a10c: 0x46170000  add.s       $f0, $f0, $f23
    ctx->pc = 0x22a10cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[23]);
label_22a110:
    // 0x22a110: 0xc0a248c  jal         func_289230
label_22a114:
    if (ctx->pc == 0x22A114u) {
        ctx->pc = 0x22A114u;
            // 0x22a114: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x22A118u;
        goto label_22a118;
    }
    ctx->pc = 0x22A110u;
    SET_GPR_U32(ctx, 31, 0x22A118u);
    ctx->pc = 0x22A114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A110u;
            // 0x22a114: 0x46000b00  add.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A118u; }
        if (ctx->pc != 0x22A118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A118u; }
        if (ctx->pc != 0x22A118u) { return; }
    }
    ctx->pc = 0x22A118u;
label_22a118:
    // 0x22a118: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22a118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22a11c:
    // 0x22a11c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x22a11cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22a120:
    // 0x22a120: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x22a120u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_22a124:
    // 0x22a124: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x22a124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_22a128:
    // 0x22a128: 0xc04f8e4  jal         func_13E390
label_22a12c:
    if (ctx->pc == 0x22A12Cu) {
        ctx->pc = 0x22A12Cu;
            // 0x22a12c: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A130u;
        goto label_22a130;
    }
    ctx->pc = 0x22A128u;
    SET_GPR_U32(ctx, 31, 0x22A130u);
    ctx->pc = 0x22A12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A128u;
            // 0x22a12c: 0x40402d  daddu       $t0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A130u; }
        if (ctx->pc != 0x22A130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A130u; }
        if (ctx->pc != 0x22A130u) { return; }
    }
    ctx->pc = 0x22A130u;
label_22a130:
    // 0x22a130: 0xc7808780  lwc1        $f0, -0x7880($gp)
    ctx->pc = 0x22a130u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22a134:
    // 0x22a134: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22a134u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22a138:
    // 0x22a138: 0x46140036  c.le.s      $f0, $f20
    ctx->pc = 0x22a138u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[20])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22a13c:
    // 0x22a13c: 0x0  nop
    ctx->pc = 0x22a13cu;
    // NOP
label_22a140:
    // 0x22a140: 0x45010155  bc1t        . + 4 + (0x155 << 2)
label_22a144:
    if (ctx->pc == 0x22A144u) {
        ctx->pc = 0x22A148u;
        goto label_22a148;
    }
    ctx->pc = 0x22A140u;
    {
        const bool branch_taken_0x22a140 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22a140) {
            ctx->pc = 0x22A698u;
            goto label_22a698;
        }
    }
    ctx->pc = 0x22A148u;
label_22a148:
    // 0x22a148: 0x8fa3008c  lw          $v1, 0x8C($sp)
    ctx->pc = 0x22a148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_22a14c:
    // 0x22a14c: 0x18600152  blez        $v1, . + 4 + (0x152 << 2)
label_22a150:
    if (ctx->pc == 0x22A150u) {
        ctx->pc = 0x22A154u;
        goto label_22a154;
    }
    ctx->pc = 0x22A14Cu;
    {
        const bool branch_taken_0x22a14c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x22a14c) {
            ctx->pc = 0x22A698u;
            goto label_22a698;
        }
    }
    ctx->pc = 0x22A154u;
label_22a154:
    // 0x22a154: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x22a154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
label_22a158:
    // 0x22a158: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x22a158u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_22a15c:
    // 0x22a15c: 0xc08a9e4  jal         func_22A790
label_22a160:
    if (ctx->pc == 0x22A160u) {
        ctx->pc = 0x22A160u;
            // 0x22a160: 0x24a5a680  addiu       $a1, $a1, -0x5980 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944384));
        ctx->pc = 0x22A164u;
        goto label_22a164;
    }
    ctx->pc = 0x22A15Cu;
    SET_GPR_U32(ctx, 31, 0x22A164u);
    ctx->pc = 0x22A160u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A15Cu;
            // 0x22a160: 0x24a5a680  addiu       $a1, $a1, -0x5980 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A790u;
    if (runtime->hasFunction(0x22A790u)) {
        auto targetFn = runtime->lookupFunction(0x22A790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A164u; }
        if (ctx->pc != 0x22A164u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexGetInfo__14CPosDataManageFPc_0x22a790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A164u; }
        if (ctx->pc != 0x22A164u) { return; }
    }
    ctx->pc = 0x22A164u;
label_22a164:
    // 0x22a164: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22a168:
    // 0x22a168: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x22a168u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_22a16c:
    // 0x22a16c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22a16cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22a170:
    // 0x22a170: 0x24a5a670  addiu       $a1, $a1, -0x5990
    ctx->pc = 0x22a170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944368));
label_22a174:
    // 0x22a174: 0xc04b414  jal         func_12D050
label_22a178:
    if (ctx->pc == 0x22A178u) {
        ctx->pc = 0x22A178u;
            // 0x22a178: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x22A17Cu;
        goto label_22a17c;
    }
    ctx->pc = 0x22A174u;
    SET_GPR_U32(ctx, 31, 0x22A17Cu);
    ctx->pc = 0x22A178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A174u;
            // 0x22a178: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A17Cu; }
        if (ctx->pc != 0x22A17Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A17Cu; }
        if (ctx->pc != 0x22A17Cu) { return; }
    }
    ctx->pc = 0x22A17Cu;
label_22a17c:
    // 0x22a17c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x22a17cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22a180:
    // 0x22a180: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x22a180u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_22a184:
    // 0x22a184: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x22a184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_22a188:
    // 0x22a188: 0x27849410  addiu       $a0, $gp, -0x6BF0
    ctx->pc = 0x22a188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939664));
label_22a18c:
    // 0x22a18c: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x22a18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_22a190:
    // 0x22a190: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22a190u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22a194:
    // 0x22a194: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x22a194u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_22a198:
    // 0x22a198: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x22a198u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_22a19c:
    // 0x22a19c: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x22a19cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_22a1a0:
    // 0x22a1a0: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x22a1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
label_22a1a4:
    // 0x22a1a4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x22a1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_22a1a8:
    // 0x22a1a8: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x22a1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
label_22a1ac:
    // 0x22a1ac: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x22a1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_22a1b0:
    // 0x22a1b0: 0xafa20098  sw          $v0, 0x98($sp)
    ctx->pc = 0x22a1b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
label_22a1b4:
    // 0x22a1b4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x22a1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_22a1b8:
    // 0x22a1b8: 0xafa2009c  sw          $v0, 0x9C($sp)
    ctx->pc = 0x22a1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
label_22a1bc:
    // 0x22a1bc: 0xc089e40  jal         func_227900
label_22a1c0:
    if (ctx->pc == 0x22A1C0u) {
        ctx->pc = 0x22A1C0u;
            // 0x22a1c0: 0xe7969410  swc1        $f22, -0x6BF0($gp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939664), bits); }
        ctx->pc = 0x22A1C4u;
        goto label_22a1c4;
    }
    ctx->pc = 0x22A1BCu;
    SET_GPR_U32(ctx, 31, 0x22A1C4u);
    ctx->pc = 0x22A1C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A1BCu;
            // 0x22a1c0: 0xe7969410  swc1        $f22, -0x6BF0($gp) (Delay Slot)
        { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939664), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x227900u;
    if (runtime->hasFunction(0x227900u)) {
        auto targetFn = runtime->lookupFunction(0x227900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A1C4u; }
        if (ctx->pc != 0x22A1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemBrdDraw__FPf9mgRect_i_Riiiii_0x227900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A1C4u; }
        if (ctx->pc != 0x22A1C4u) { return; }
    }
    ctx->pc = 0x22A1C4u;
label_22a1c4:
    // 0x22a1c4: 0x8e87006c  lw          $a3, 0x6C($s4)
    ctx->pc = 0x22a1c4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_22a1c8:
    // 0x22a1c8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x22a1c8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22a1cc:
    // 0x22a1cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22a1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22a1d0:
    // 0x22a1d0: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x22a1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_22a1d4:
    // 0x22a1d4: 0x27869410  addiu       $a2, $gp, -0x6BF0
    ctx->pc = 0x22a1d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939664));
label_22a1d8:
    // 0x22a1d8: 0x27a90090  addiu       $t1, $sp, 0x90
    ctx->pc = 0x22a1d8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_22a1dc:
    // 0x22a1dc: 0xc089f7c  jal         func_227DF0
label_22a1e0:
    if (ctx->pc == 0x22A1E0u) {
        ctx->pc = 0x22A1E0u;
            // 0x22a1e0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A1E4u;
        goto label_22a1e4;
    }
    ctx->pc = 0x22A1DCu;
    SET_GPR_U32(ctx, 31, 0x22A1E4u);
    ctx->pc = 0x22A1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A1DCu;
            // 0x22a1e0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x227DF0u;
    if (runtime->hasFunction(0x227DF0u)) {
        auto targetFn = runtime->lookupFunction(0x227DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A1E4u; }
        if (ctx->pc != 0x22A1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemModeItemDraw__FRi9mgRect_i_PfP18MENUFORMPARTS_TYPEP10mgCTexture9mgRect_i_i_0x227df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A1E4u; }
        if (ctx->pc != 0x22A1E4u) { return; }
    }
    ctx->pc = 0x22A1E4u;
label_22a1e4:
    // 0x22a1e4: 0xc0a248c  jal         func_289230
label_22a1e8:
    if (ctx->pc == 0x22A1E8u) {
        ctx->pc = 0x22A1E8u;
            // 0x22a1e8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x22A1ECu;
        goto label_22a1ec;
    }
    ctx->pc = 0x22A1E4u;
    SET_GPR_U32(ctx, 31, 0x22A1ECu);
    ctx->pc = 0x22A1E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A1E4u;
            // 0x22a1e8: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A1ECu; }
        if (ctx->pc != 0x22A1ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A1ECu; }
        if (ctx->pc != 0x22A1ECu) { return; }
    }
    ctx->pc = 0x22A1ECu;
label_22a1ec:
    // 0x22a1ec: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x22a1ecu;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_22a1f0:
    // 0x22a1f0: 0xc0a248c  jal         func_289230
label_22a1f4:
    if (ctx->pc == 0x22A1F4u) {
        ctx->pc = 0x22A1F4u;
            // 0x22a1f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A1F8u;
        goto label_22a1f8;
    }
    ctx->pc = 0x22A1F0u;
    SET_GPR_U32(ctx, 31, 0x22A1F8u);
    ctx->pc = 0x22A1F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A1F0u;
            // 0x22a1f4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A1F8u; }
        if (ctx->pc != 0x22A1F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A1F8u; }
        if (ctx->pc != 0x22A1F8u) { return; }
    }
    ctx->pc = 0x22A1F8u;
label_22a1f8:
    // 0x22a1f8: 0x92870058  lbu         $a3, 0x58($s4)
    ctx->pc = 0x22a1f8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 88)));
label_22a1fc:
    // 0x22a1fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a1fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22a200:
    // 0x22a200: 0x92880055  lbu         $t0, 0x55($s4)
    ctx->pc = 0x22a200u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 85)));
label_22a204:
    // 0x22a204: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22a204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22a208:
    // 0x22a208: 0x92890056  lbu         $t1, 0x56($s4)
    ctx->pc = 0x22a208u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 86)));
label_22a20c:
    // 0x22a20c: 0x928a0057  lbu         $t2, 0x57($s4)
    ctx->pc = 0x22a20cu;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 87)));
label_22a210:
    // 0x22a210: 0xc089b94  jal         func_226E50
label_22a214:
    if (ctx->pc == 0x22A214u) {
        ctx->pc = 0x22A214u;
            // 0x22a214: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A218u;
        goto label_22a218;
    }
    ctx->pc = 0x22A210u;
    SET_GPR_U32(ctx, 31, 0x22A218u);
    ctx->pc = 0x22A214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A210u;
            // 0x22a214: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226E50u;
    if (runtime->hasFunction(0x226E50u)) {
        auto targetFn = runtime->lookupFunction(0x226E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A218u; }
        if (ctx->pc != 0x22A218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemBrdFrameDraw__FiiRiiiii_0x226e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A218u; }
        if (ctx->pc != 0x22A218u) { return; }
    }
    ctx->pc = 0x22A218u;
label_22a218:
    // 0x22a218: 0x1000011f  b           . + 4 + (0x11F << 2)
label_22a21c:
    if (ctx->pc == 0x22A21Cu) {
        ctx->pc = 0x22A220u;
        goto label_22a220;
    }
    ctx->pc = 0x22A218u;
    {
        const bool branch_taken_0x22a218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a218) {
            ctx->pc = 0x22A698u;
            goto label_22a698;
        }
    }
    ctx->pc = 0x22A220u;
label_22a220:
    // 0x22a220: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x22a220u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_22a224:
    // 0x22a224: 0x1466001c  bne         $v1, $a2, . + 4 + (0x1C << 2)
label_22a228:
    if (ctx->pc == 0x22A228u) {
        ctx->pc = 0x22A228u;
            // 0x22a228: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->pc = 0x22A22Cu;
        goto label_22a22c;
    }
    ctx->pc = 0x22A224u;
    {
        const bool branch_taken_0x22a224 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x22A228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A224u;
            // 0x22a228: 0x2406000d  addiu       $a2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a224) {
            ctx->pc = 0x22A298u;
            goto label_22a298;
        }
    }
    ctx->pc = 0x22A22Cu;
label_22a22c:
    // 0x22a22c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x22a22cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_22a230:
    // 0x22a230: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a230u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22a234:
    // 0x22a234: 0x24a5a638  addiu       $a1, $a1, -0x59C8
    ctx->pc = 0x22a234u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944312));
label_22a238:
    // 0x22a238: 0xc04b414  jal         func_12D050
label_22a23c:
    if (ctx->pc == 0x22A23Cu) {
        ctx->pc = 0x22A23Cu;
            // 0x22a23c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x22A240u;
        goto label_22a240;
    }
    ctx->pc = 0x22A238u;
    SET_GPR_U32(ctx, 31, 0x22A240u);
    ctx->pc = 0x22A23Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A238u;
            // 0x22a23c: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A240u; }
        if (ctx->pc != 0x22A240u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A240u; }
        if (ctx->pc != 0x22A240u) { return; }
    }
    ctx->pc = 0x22A240u;
label_22a240:
    // 0x22a240: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x22a240u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_22a244:
    // 0x22a244: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22a248:
    // 0x22a248: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x22a248u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22a24c:
    // 0x22a24c: 0x24a5a670  addiu       $a1, $a1, -0x5990
    ctx->pc = 0x22a24cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944368));
label_22a250:
    // 0x22a250: 0xc04b414  jal         func_12D050
label_22a254:
    if (ctx->pc == 0x22A254u) {
        ctx->pc = 0x22A254u;
            // 0x22a254: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x22A258u;
        goto label_22a258;
    }
    ctx->pc = 0x22A250u;
    SET_GPR_U32(ctx, 31, 0x22A258u);
    ctx->pc = 0x22A254u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A250u;
            // 0x22a254: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A258u; }
        if (ctx->pc != 0x22A258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A258u; }
        if (ctx->pc != 0x22A258u) { return; }
    }
    ctx->pc = 0x22A258u;
label_22a258:
    // 0x22a258: 0x1240010f  beqz        $s2, . + 4 + (0x10F << 2)
label_22a25c:
    if (ctx->pc == 0x22A25Cu) {
        ctx->pc = 0x22A25Cu;
            // 0x22a25c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A260u;
        goto label_22a260;
    }
    ctx->pc = 0x22A258u;
    {
        const bool branch_taken_0x22a258 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x22A25Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A258u;
            // 0x22a25c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a258) {
            ctx->pc = 0x22A698u;
            goto label_22a698;
        }
    }
    ctx->pc = 0x22A260u;
label_22a260:
    // 0x22a260: 0xc0a248c  jal         func_289230
label_22a264:
    if (ctx->pc == 0x22A264u) {
        ctx->pc = 0x22A264u;
            // 0x22a264: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x22A268u;
        goto label_22a268;
    }
    ctx->pc = 0x22A260u;
    SET_GPR_U32(ctx, 31, 0x22A268u);
    ctx->pc = 0x22A264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A260u;
            // 0x22a264: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A268u; }
        if (ctx->pc != 0x22A268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A268u; }
        if (ctx->pc != 0x22A268u) { return; }
    }
    ctx->pc = 0x22A268u;
label_22a268:
    // 0x22a268: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x22a268u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
label_22a26c:
    // 0x22a26c: 0xc0a248c  jal         func_289230
label_22a270:
    if (ctx->pc == 0x22A270u) {
        ctx->pc = 0x22A270u;
            // 0x22a270: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A274u;
        goto label_22a274;
    }
    ctx->pc = 0x22A26Cu;
    SET_GPR_U32(ctx, 31, 0x22A274u);
    ctx->pc = 0x22A270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A26Cu;
            // 0x22a270: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A274u; }
        if (ctx->pc != 0x22A274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A274u; }
        if (ctx->pc != 0x22A274u) { return; }
    }
    ctx->pc = 0x22A274u;
label_22a274:
    // 0x22a274: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22a278:
    // 0x22a278: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22a278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22a27c:
    // 0x22a27c: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x22a27cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22a280:
    // 0x22a280: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x22a280u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22a284:
    // 0x22a284: 0xc088538  jal         func_2214E0
label_22a288:
    if (ctx->pc == 0x22A288u) {
        ctx->pc = 0x22A288u;
            // 0x22a288: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A28Cu;
        goto label_22a28c;
    }
    ctx->pc = 0x22A284u;
    SET_GPR_U32(ctx, 31, 0x22A28Cu);
    ctx->pc = 0x22A288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A284u;
            // 0x22a288: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2214E0u;
    if (runtime->hasFunction(0x2214E0u)) {
        auto targetFn = runtime->lookupFunction(0x2214E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A28Cu; }
        if (ctx->pc != 0x22A28Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuPresentBoxView__FiiRiP10mgCTextureP10mgCTexture_0x2214e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A28Cu; }
        if (ctx->pc != 0x22A28Cu) { return; }
    }
    ctx->pc = 0x22A28Cu;
label_22a28c:
    // 0x22a28c: 0x10000102  b           . + 4 + (0x102 << 2)
label_22a290:
    if (ctx->pc == 0x22A290u) {
        ctx->pc = 0x22A294u;
        goto label_22a294;
    }
    ctx->pc = 0x22A28Cu;
    {
        const bool branch_taken_0x22a28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a28c) {
            ctx->pc = 0x22A698u;
            goto label_22a698;
        }
    }
    ctx->pc = 0x22A294u;
label_22a294:
    // 0x22a294: 0x2406000d  addiu       $a2, $zero, 0xD
    ctx->pc = 0x22a294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_22a298:
    // 0x22a298: 0x14660046  bne         $v1, $a2, . + 4 + (0x46 << 2)
label_22a29c:
    if (ctx->pc == 0x22A29Cu) {
        ctx->pc = 0x22A29Cu;
            // 0x22a29c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x22A2A0u;
        goto label_22a2a0;
    }
    ctx->pc = 0x22A298u;
    {
        const bool branch_taken_0x22a298 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x22A29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A298u;
            // 0x22a29c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a298) {
            ctx->pc = 0x22A3B4u;
            goto label_22a3b4;
        }
    }
    ctx->pc = 0x22A2A0u;
label_22a2a0:
    // 0x22a2a0: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x22a2a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_22a2a4:
    // 0x22a2a4: 0x2863000f  slti        $v1, $v1, 0xF
    ctx->pc = 0x22a2a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
label_22a2a8:
    // 0x22a2a8: 0x146000fb  bnez        $v1, . + 4 + (0xFB << 2)
label_22a2ac:
    if (ctx->pc == 0x22A2ACu) {
        ctx->pc = 0x22A2B0u;
        goto label_22a2b0;
    }
    ctx->pc = 0x22A2A8u;
    {
        const bool branch_taken_0x22a2a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22a2a8) {
            ctx->pc = 0x22A698u;
            goto label_22a698;
        }
    }
    ctx->pc = 0x22A2B0u;
label_22a2b0:
    // 0x22a2b0: 0x8e830038  lw          $v1, 0x38($s4)
    ctx->pc = 0x22a2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_22a2b4:
    // 0x22a2b4: 0x106000f8  beqz        $v1, . + 4 + (0xF8 << 2)
label_22a2b8:
    if (ctx->pc == 0x22A2B8u) {
        ctx->pc = 0x22A2BCu;
        goto label_22a2bc;
    }
    ctx->pc = 0x22A2B4u;
    {
        const bool branch_taken_0x22a2b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a2b4) {
            ctx->pc = 0x22A698u;
            goto label_22a698;
        }
    }
    ctx->pc = 0x22A2BCu;
label_22a2bc:
    // 0x22a2bc: 0xc050df4  jal         func_1437D0
label_22a2c0:
    if (ctx->pc == 0x22A2C0u) {
        ctx->pc = 0x22A2C0u;
            // 0x22a2c0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x22A2C4u;
        goto label_22a2c4;
    }
    ctx->pc = 0x22A2BCu;
    SET_GPR_U32(ctx, 31, 0x22A2C4u);
    ctx->pc = 0x22A2C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A2BCu;
            // 0x22a2c0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437D0u;
    if (runtime->hasFunction(0x1437D0u)) {
        auto targetFn = runtime->lookupFunction(0x1437D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A2C4u; }
        if (ctx->pc != 0x22A2C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetAmbient__FPf_0x1437d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A2C4u; }
        if (ctx->pc != 0x22A2C4u) { return; }
    }
    ctx->pc = 0x22A2C4u;
label_22a2c4:
    // 0x22a2c4: 0xc6810040  lwc1        $f1, 0x40($s4)
    ctx->pc = 0x22a2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_22a2c8:
    // 0x22a2c8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22a2c8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a2cc:
    // 0x22a2cc: 0x0  nop
    ctx->pc = 0x22a2ccu;
    // NOP
label_22a2d0:
    // 0x22a2d0: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x22a2d0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_22a2d4:
    // 0x22a2d4: 0x0  nop
    ctx->pc = 0x22a2d4u;
    // NOP
label_22a2d8:
    // 0x22a2d8: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_22a2dc:
    if (ctx->pc == 0x22A2DCu) {
        ctx->pc = 0x22A2E0u;
        goto label_22a2e0;
    }
    ctx->pc = 0x22A2D8u;
    {
        const bool branch_taken_0x22a2d8 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22a2d8) {
            ctx->pc = 0x22A2E8u;
            goto label_22a2e8;
        }
    }
    ctx->pc = 0x22A2E0u;
label_22a2e0:
    // 0x22a2e0: 0xc050dec  jal         func_1437B0
label_22a2e4:
    if (ctx->pc == 0x22A2E4u) {
        ctx->pc = 0x22A2E4u;
            // 0x22a2e4: 0x26840040  addiu       $a0, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->pc = 0x22A2E8u;
        goto label_22a2e8;
    }
    ctx->pc = 0x22A2E0u;
    SET_GPR_U32(ctx, 31, 0x22A2E8u);
    ctx->pc = 0x22A2E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A2E0u;
            // 0x22a2e4: 0x26840040  addiu       $a0, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1437B0u;
    if (runtime->hasFunction(0x1437B0u)) {
        auto targetFn = runtime->lookupFunction(0x1437B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A2E8u; }
        if (ctx->pc != 0x22A2E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetAmbient__FPf_0x1437b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A2E8u; }
        if (ctx->pc != 0x22A2E8u) { return; }
    }
    ctx->pc = 0x22A2E8u;
label_22a2e8:
    // 0x22a2e8: 0x86850034  lh          $a1, 0x34($s4)
    ctx->pc = 0x22a2e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 52)));
label_22a2ec:
    // 0x22a2ec: 0x18a00025  blez        $a1, . + 4 + (0x25 << 2)
label_22a2f0:
    if (ctx->pc == 0x22A2F0u) {
        ctx->pc = 0x22A2F4u;
        goto label_22a2f4;
    }
    ctx->pc = 0x22A2ECu;
    {
        const bool branch_taken_0x22a2ec = (GPR_S32(ctx, 5) <= 0);
        if (branch_taken_0x22a2ec) {
            ctx->pc = 0x22A384u;
            goto label_22a384;
        }
    }
    ctx->pc = 0x22A2F4u;
label_22a2f4:
    // 0x22a2f4: 0xc08878c  jal         func_221E30
label_22a2f8:
    if (ctx->pc == 0x22A2F8u) {
        ctx->pc = 0x22A2F8u;
            // 0x22a2f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A2FCu;
        goto label_22a2fc;
    }
    ctx->pc = 0x22A2F4u;
    SET_GPR_U32(ctx, 31, 0x22A2FCu);
    ctx->pc = 0x22A2F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A2F4u;
            // 0x22a2f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A2FCu; }
        if (ctx->pc != 0x22A2FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A2FCu; }
        if (ctx->pc != 0x22A2FCu) { return; }
    }
    ctx->pc = 0x22A2FCu;
label_22a2fc:
    // 0x22a2fc: 0x8e840038  lw          $a0, 0x38($s4)
    ctx->pc = 0x22a2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_22a300:
    // 0x22a300: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22a300u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22a304:
    // 0x22a304: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x22a304u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_22a308:
    // 0x22a308: 0x320f809  jalr        $t9
label_22a30c:
    if (ctx->pc == 0x22A30Cu) {
        ctx->pc = 0x22A310u;
        goto label_22a310;
    }
    ctx->pc = 0x22A308u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22A310u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x22A310u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22A310u; }
            if (ctx->pc != 0x22A310u) { return; }
        }
        }
    }
    ctx->pc = 0x22A310u;
label_22a310:
    // 0x22a310: 0xc064268  jal         func_1909A0
label_22a314:
    if (ctx->pc == 0x22A314u) {
        ctx->pc = 0x22A318u;
        goto label_22a318;
    }
    ctx->pc = 0x22A310u;
    SET_GPR_U32(ctx, 31, 0x22A318u);
    ctx->pc = 0x1909A0u;
    if (runtime->hasFunction(0x1909A0u)) {
        auto targetFn = runtime->lookupFunction(0x1909A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A318u; }
        if (ctx->pc != 0x22A318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowLoopNo__Fv_0x1909a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A318u; }
        if (ctx->pc != 0x22A318u) { return; }
    }
    ctx->pc = 0x22A318u;
label_22a318:
    // 0x22a318: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x22a318u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_22a31c:
    // 0x22a31c: 0x14460020  bne         $v0, $a2, . + 4 + (0x20 << 2)
label_22a320:
    if (ctx->pc == 0x22A320u) {
        ctx->pc = 0x22A320u;
            // 0x22a320: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x22A324u;
        goto label_22a324;
    }
    ctx->pc = 0x22A31Cu;
    {
        const bool branch_taken_0x22a31c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x22A320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A31Cu;
            // 0x22a320: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a31c) {
            ctx->pc = 0x22A3A0u;
            goto label_22a3a0;
        }
    }
    ctx->pc = 0x22A324u;
label_22a324:
    // 0x22a324: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x22a324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_22a328:
    // 0x22a328: 0x1080001c  beqz        $a0, . + 4 + (0x1C << 2)
label_22a32c:
    if (ctx->pc == 0x22A32Cu) {
        ctx->pc = 0x22A330u;
        goto label_22a330;
    }
    ctx->pc = 0x22A328u;
    {
        const bool branch_taken_0x22a328 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a328) {
            ctx->pc = 0x22A39Cu;
            goto label_22a39c;
        }
    }
    ctx->pc = 0x22A330u;
label_22a330:
    // 0x22a330: 0xc0b8884  jal         func_2E2210
label_22a334:
    if (ctx->pc == 0x22A334u) {
        ctx->pc = 0x22A334u;
            // 0x22a334: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x22A338u;
        goto label_22a338;
    }
    ctx->pc = 0x22A330u;
    SET_GPR_U32(ctx, 31, 0x22A338u);
    ctx->pc = 0x22A334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A330u;
            // 0x22a334: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2210u;
    if (runtime->hasFunction(0x2E2210u)) {
        auto targetFn = runtime->lookupFunction(0x2E2210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A338u; }
        if (ctx->pc != 0x22A338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PauseFromLevel__16CEffectScriptManFii_0x2e2210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A338u; }
        if (ctx->pc != 0x22A338u) { return; }
    }
    ctx->pc = 0x22A338u;
label_22a338:
    // 0x22a338: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x22a338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_22a33c:
    // 0x22a33c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22a33cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22a340:
    // 0x22a340: 0xc0b8884  jal         func_2E2210
label_22a344:
    if (ctx->pc == 0x22A344u) {
        ctx->pc = 0x22A344u;
            // 0x22a344: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x22A348u;
        goto label_22a348;
    }
    ctx->pc = 0x22A340u;
    SET_GPR_U32(ctx, 31, 0x22A348u);
    ctx->pc = 0x22A344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A340u;
            // 0x22a344: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2210u;
    if (runtime->hasFunction(0x2E2210u)) {
        auto targetFn = runtime->lookupFunction(0x2E2210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A348u; }
        if (ctx->pc != 0x22A348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PauseFromLevel__16CEffectScriptManFii_0x2e2210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A348u; }
        if (ctx->pc != 0x22A348u) { return; }
    }
    ctx->pc = 0x22A348u;
label_22a348:
    // 0x22a348: 0x8e840038  lw          $a0, 0x38($s4)
    ctx->pc = 0x22a348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_22a34c:
    // 0x22a34c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x22a34cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_22a350:
    // 0x22a350: 0x8f3900f4  lw          $t9, 0xF4($t9)
    ctx->pc = 0x22a350u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 244)));
label_22a354:
    // 0x22a354: 0x320f809  jalr        $t9
label_22a358:
    if (ctx->pc == 0x22A358u) {
        ctx->pc = 0x22A35Cu;
        goto label_22a35c;
    }
    ctx->pc = 0x22A354u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x22A35Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x22A35Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22A35Cu; }
            if (ctx->pc != 0x22A35Cu) { return; }
        }
        }
    }
    ctx->pc = 0x22A35Cu;
label_22a35c:
    // 0x22a35c: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x22a35cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_22a360:
    // 0x22a360: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x22a360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_22a364:
    // 0x22a364: 0xc0b8884  jal         func_2E2210
label_22a368:
    if (ctx->pc == 0x22A368u) {
        ctx->pc = 0x22A368u;
            // 0x22a368: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A36Cu;
        goto label_22a36c;
    }
    ctx->pc = 0x22A364u;
    SET_GPR_U32(ctx, 31, 0x22A36Cu);
    ctx->pc = 0x22A368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A364u;
            // 0x22a368: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2210u;
    if (runtime->hasFunction(0x2E2210u)) {
        auto targetFn = runtime->lookupFunction(0x2E2210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A36Cu; }
        if (ctx->pc != 0x22A36Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PauseFromLevel__16CEffectScriptManFii_0x2e2210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A36Cu; }
        if (ctx->pc != 0x22A36Cu) { return; }
    }
    ctx->pc = 0x22A36Cu;
label_22a36c:
    // 0x22a36c: 0x8f848ddc  lw          $a0, -0x7224($gp)
    ctx->pc = 0x22a36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938076)));
label_22a370:
    // 0x22a370: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x22a370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_22a374:
    // 0x22a374: 0xc0b8884  jal         func_2E2210
label_22a378:
    if (ctx->pc == 0x22A378u) {
        ctx->pc = 0x22A378u;
            // 0x22a378: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A37Cu;
        goto label_22a37c;
    }
    ctx->pc = 0x22A374u;
    SET_GPR_U32(ctx, 31, 0x22A37Cu);
    ctx->pc = 0x22A378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A374u;
            // 0x22a378: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E2210u;
    if (runtime->hasFunction(0x2E2210u)) {
        auto targetFn = runtime->lookupFunction(0x2E2210u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A37Cu; }
        if (ctx->pc != 0x22A37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PauseFromLevel__16CEffectScriptManFii_0x2e2210(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A37Cu; }
        if (ctx->pc != 0x22A37Cu) { return; }
    }
    ctx->pc = 0x22A37Cu;
label_22a37c:
    // 0x22a37c: 0x10000007  b           . + 4 + (0x7 << 2)
label_22a380:
    if (ctx->pc == 0x22A380u) {
        ctx->pc = 0x22A384u;
        goto label_22a384;
    }
    ctx->pc = 0x22A37Cu;
    {
        const bool branch_taken_0x22a37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a37c) {
            ctx->pc = 0x22A39Cu;
            goto label_22a39c;
        }
    }
    ctx->pc = 0x22A384u;
label_22a384:
    // 0x22a384: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x22a384u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_22a388:
    // 0x22a388: 0x8c440070  lw          $a0, 0x70($v0)
    ctx->pc = 0x22a388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_22a38c:
    // 0x22a38c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_22a390:
    if (ctx->pc == 0x22A390u) {
        ctx->pc = 0x22A394u;
        goto label_22a394;
    }
    ctx->pc = 0x22A38Cu;
    {
        const bool branch_taken_0x22a38c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a38c) {
            ctx->pc = 0x22A39Cu;
            goto label_22a39c;
        }
    }
    ctx->pc = 0x22A394u;
label_22a394:
    // 0x22a394: 0xc050bf4  jal         func_142FD0
label_22a398:
    if (ctx->pc == 0x22A398u) {
        ctx->pc = 0x22A39Cu;
        goto label_22a39c;
    }
    ctx->pc = 0x22A394u;
    SET_GPR_U32(ctx, 31, 0x22A39Cu);
    ctx->pc = 0x142FD0u;
    if (runtime->hasFunction(0x142FD0u)) {
        auto targetFn = runtime->lookupFunction(0x142FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A39Cu; }
        if (ctx->pc != 0x22A39Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgDrawDirect__FP8mgCFrame_0x142fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A39Cu; }
        if (ctx->pc != 0x22A39Cu) { return; }
    }
    ctx->pc = 0x22A39Cu;
label_22a39c:
    // 0x22a39c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x22a39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_22a3a0:
    // 0x22a3a0: 0xc050dec  jal         func_1437B0
label_22a3a4:
    if (ctx->pc == 0x22A3A4u) {
        ctx->pc = 0x22A3A8u;
        goto label_22a3a8;
    }
    ctx->pc = 0x22A3A0u;
    SET_GPR_U32(ctx, 31, 0x22A3A8u);
    ctx->pc = 0x1437B0u;
    if (runtime->hasFunction(0x1437B0u)) {
        auto targetFn = runtime->lookupFunction(0x1437B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A3A8u; }
        if (ctx->pc != 0x22A3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetAmbient__FPf_0x1437b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A3A8u; }
        if (ctx->pc != 0x22A3A8u) { return; }
    }
    ctx->pc = 0x22A3A8u;
label_22a3a8:
    // 0x22a3a8: 0x100000bb  b           . + 4 + (0xBB << 2)
label_22a3ac:
    if (ctx->pc == 0x22A3ACu) {
        ctx->pc = 0x22A3B0u;
        goto label_22a3b0;
    }
    ctx->pc = 0x22A3A8u;
    {
        const bool branch_taken_0x22a3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a3a8) {
            ctx->pc = 0x22A698u;
            goto label_22a698;
        }
    }
    ctx->pc = 0x22A3B0u;
label_22a3b0:
    // 0x22a3b0: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x22a3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_22a3b4:
    // 0x22a3b4: 0x1466000f  bne         $v1, $a2, . + 4 + (0xF << 2)
label_22a3b8:
    if (ctx->pc == 0x22A3B8u) {
        ctx->pc = 0x22A3B8u;
            // 0x22a3b8: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x22A3BCu;
        goto label_22a3bc;
    }
    ctx->pc = 0x22A3B4u;
    {
        const bool branch_taken_0x22a3b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x22A3B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A3B4u;
            // 0x22a3b8: 0x2406000f  addiu       $a2, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a3b4) {
            ctx->pc = 0x22A3F4u;
            goto label_22a3f4;
        }
    }
    ctx->pc = 0x22A3BCu;
label_22a3bc:
    // 0x22a3bc: 0x44930800  mtc1        $s3, $f1
    ctx->pc = 0x22a3bcu;
    { uint32_t bits = GPR_U32(ctx, 19); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_22a3c0:
    // 0x22a3c0: 0xdf829448  ld          $v0, -0x6BB8($gp)
    ctx->pc = 0x22a3c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294939720)));
label_22a3c4:
    // 0x22a3c4: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x22a3c4u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a3c8:
    // 0x22a3c8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x22a3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_22a3cc:
    // 0x22a3cc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x22a3ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
label_22a3d0:
    // 0x22a3d0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x22a3d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22a3d4:
    // 0x22a3d4: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x22a3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_22a3d8:
    // 0x22a3d8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22a3d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22a3dc:
    // 0x22a3dc: 0xe7a100d0  swc1        $f1, 0xD0($sp)
    ctx->pc = 0x22a3dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
label_22a3e0:
    // 0x22a3e0: 0xc088b24  jal         func_222C90
label_22a3e4:
    if (ctx->pc == 0x22A3E4u) {
        ctx->pc = 0x22A3E4u;
            // 0x22a3e4: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->pc = 0x22A3E8u;
        goto label_22a3e8;
    }
    ctx->pc = 0x22A3E0u;
    SET_GPR_U32(ctx, 31, 0x22A3E8u);
    ctx->pc = 0x22A3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A3E0u;
            // 0x22a3e4: 0xe7a000d4  swc1        $f0, 0xD4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x222C90u;
    if (runtime->hasFunction(0x222C90u)) {
        auto targetFn = runtime->lookupFunction(0x222C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A3E8u; }
        if (ctx->pc != 0x22A3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CommonBoardDraw__FPfRi_0x222c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A3E8u; }
        if (ctx->pc != 0x22A3E8u) { return; }
    }
    ctx->pc = 0x22A3E8u;
label_22a3e8:
    // 0x22a3e8: 0x100000ab  b           . + 4 + (0xAB << 2)
label_22a3ec:
    if (ctx->pc == 0x22A3ECu) {
        ctx->pc = 0x22A3F0u;
        goto label_22a3f0;
    }
    ctx->pc = 0x22A3E8u;
    {
        const bool branch_taken_0x22a3e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a3e8) {
            ctx->pc = 0x22A698u;
            goto label_22a698;
        }
    }
    ctx->pc = 0x22A3F0u;
label_22a3f0:
    // 0x22a3f0: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x22a3f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_22a3f4:
    // 0x22a3f4: 0x14660006  bne         $v1, $a2, . + 4 + (0x6 << 2)
label_22a3f8:
    if (ctx->pc == 0x22A3F8u) {
        ctx->pc = 0x22A3F8u;
            // 0x22a3f8: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x22A3FCu;
        goto label_22a3fc;
    }
    ctx->pc = 0x22A3F4u;
    {
        const bool branch_taken_0x22a3f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x22A3F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A3F4u;
            // 0x22a3f8: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a3f4) {
            ctx->pc = 0x22A410u;
            goto label_22a410;
        }
    }
    ctx->pc = 0x22A3FCu;
label_22a3fc:
    // 0x22a3fc: 0xc07dda8  jal         func_1F76A0
label_22a400:
    if (ctx->pc == 0x22A400u) {
        ctx->pc = 0x22A400u;
            // 0x22a400: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A404u;
        goto label_22a404;
    }
    ctx->pc = 0x22A3FCu;
    SET_GPR_U32(ctx, 31, 0x22A404u);
    ctx->pc = 0x22A400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A3FCu;
            // 0x22a400: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F76A0u;
    if (runtime->hasFunction(0x1F76A0u)) {
        auto targetFn = runtime->lookupFunction(0x1F76A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A404u; }
        if (ctx->pc != 0x22A404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMapPartsDraw__FRi_0x1f76a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A404u; }
        if (ctx->pc != 0x22A404u) { return; }
    }
    ctx->pc = 0x22A404u;
label_22a404:
    // 0x22a404: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_22a408:
    if (ctx->pc == 0x22A408u) {
        ctx->pc = 0x22A40Cu;
        goto label_22a40c;
    }
    ctx->pc = 0x22A404u;
    {
        const bool branch_taken_0x22a404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a404) {
            ctx->pc = 0x22A698u;
            goto label_22a698;
        }
    }
    ctx->pc = 0x22A40Cu;
label_22a40c:
    // 0x22a40c: 0x24060018  addiu       $a2, $zero, 0x18
    ctx->pc = 0x22a40cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_22a410:
    // 0x22a410: 0x1466001d  bne         $v1, $a2, . + 4 + (0x1D << 2)
label_22a414:
    if (ctx->pc == 0x22A414u) {
        ctx->pc = 0x22A414u;
            // 0x22a414: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x22A418u;
        goto label_22a418;
    }
    ctx->pc = 0x22A410u;
    {
        const bool branch_taken_0x22a410 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x22A414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A410u;
            // 0x22a414: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a410) {
            ctx->pc = 0x22A488u;
            goto label_22a488;
        }
    }
    ctx->pc = 0x22A418u;
label_22a418:
    // 0x22a418: 0x8e82006c  lw          $v0, 0x6C($s4)
    ctx->pc = 0x22a418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_22a41c:
    // 0x22a41c: 0x90450018  lbu         $a1, 0x18($v0)
    ctx->pc = 0x22a41cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
label_22a420:
    // 0x22a420: 0xc08a9d4  jal         func_22A750
label_22a424:
    if (ctx->pc == 0x22A424u) {
        ctx->pc = 0x22A424u;
            // 0x22a424: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->pc = 0x22A428u;
        goto label_22a428;
    }
    ctx->pc = 0x22A420u;
    SET_GPR_U32(ctx, 31, 0x22A428u);
    ctx->pc = 0x22A424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A420u;
            // 0x22a424: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A750u;
    if (runtime->hasFunction(0x22A750u)) {
        auto targetFn = runtime->lookupFunction(0x22A750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A428u; }
        if (ctx->pc != 0x22A428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexGetInfo__14CPosDataManageFi_0x22a750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A428u; }
        if (ctx->pc != 0x22A428u) { return; }
    }
    ctx->pc = 0x22A428u;
label_22a428:
    // 0x22a428: 0x90460018  lbu         $a2, 0x18($v0)
    ctx->pc = 0x22a428u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 24)));
label_22a42c:
    // 0x22a42c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x22a42cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22a430:
    // 0x22a430: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x22a430u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_22a434:
    // 0x22a434: 0xc04b414  jal         func_12D050
label_22a438:
    if (ctx->pc == 0x22A438u) {
        ctx->pc = 0x22A438u;
            // 0x22a438: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A43Cu;
        goto label_22a43c;
    }
    ctx->pc = 0x22A434u;
    SET_GPR_U32(ctx, 31, 0x22A43Cu);
    ctx->pc = 0x22A438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A434u;
            // 0x22a438: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A43Cu; }
        if (ctx->pc != 0x22A43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A43Cu; }
        if (ctx->pc != 0x22A43Cu) { return; }
    }
    ctx->pc = 0x22A43Cu;
label_22a43c:
    // 0x22a43c: 0x92050018  lbu         $a1, 0x18($s0)
    ctx->pc = 0x22a43cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
label_22a440:
    // 0x22a440: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x22a440u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22a444:
    // 0x22a444: 0xc08878c  jal         func_221E30
label_22a448:
    if (ctx->pc == 0x22A448u) {
        ctx->pc = 0x22A448u;
            // 0x22a448: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A44Cu;
        goto label_22a44c;
    }
    ctx->pc = 0x22A444u;
    SET_GPR_U32(ctx, 31, 0x22A44Cu);
    ctx->pc = 0x22A448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A444u;
            // 0x22a448: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221E30u;
    if (runtime->hasFunction(0x221E30u)) {
        auto targetFn = runtime->lookupFunction(0x221E30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A44Cu; }
        if (ctx->pc != 0x22A44Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuReloadTexture__FRii_0x221e30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A44Cu; }
        if (ctx->pc != 0x22A44Cu) { return; }
    }
    ctx->pc = 0x22A44Cu;
label_22a44c:
    // 0x22a44c: 0xc78082e0  lwc1        $f0, -0x7D20($gp)
    ctx->pc = 0x22a44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_22a450:
    // 0x22a450: 0x27a800dc  addiu       $t0, $sp, 0xDC
    ctx->pc = 0x22a450u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
label_22a454:
    // 0x22a454: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x22a454u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_22a458:
    // 0x22a458: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22a458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22a45c:
    // 0x22a45c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x22a45cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22a460:
    // 0x22a460: 0xe5000000  swc1        $f0, 0x0($t0)
    ctx->pc = 0x22a460u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 0), bits); }
label_22a464:
    // 0x22a464: 0x92820058  lbu         $v0, 0x58($s4)
    ctx->pc = 0x22a464u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 88)));
label_22a468:
    // 0x22a468: 0xa3a200df  sb          $v0, 0xDF($sp)
    ctx->pc = 0x22a468u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 223), (uint8_t)GPR_U32(ctx, 2));
label_22a46c:
    // 0x22a46c: 0xc68c000c  lwc1        $f12, 0xC($s4)
    ctx->pc = 0x22a46cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22a470:
    // 0x22a470: 0xc68d0010  lwc1        $f13, 0x10($s4)
    ctx->pc = 0x22a470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_22a474:
    // 0x22a474: 0xc088f58  jal         func_223D60
label_22a478:
    if (ctx->pc == 0x22A478u) {
        ctx->pc = 0x22A478u;
            // 0x22a478: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A47Cu;
        goto label_22a47c;
    }
    ctx->pc = 0x22A474u;
    SET_GPR_U32(ctx, 31, 0x22A47Cu);
    ctx->pc = 0x22A478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A474u;
            // 0x22a478: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x223D60u;
    if (runtime->hasFunction(0x223D60u)) {
        auto targetFn = runtime->lookupFunction(0x223D60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A47Cu; }
        if (ctx->pc != 0x22A47Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuTilePattern__FP11mgCDrawPrimP10mgCTextureff9mgRect_i_iPUc_0x223d60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A47Cu; }
        if (ctx->pc != 0x22A47Cu) { return; }
    }
    ctx->pc = 0x22A47Cu;
label_22a47c:
    // 0x22a47c: 0x10000086  b           . + 4 + (0x86 << 2)
label_22a480:
    if (ctx->pc == 0x22A480u) {
        ctx->pc = 0x22A484u;
        goto label_22a484;
    }
    ctx->pc = 0x22A47Cu;
    {
        const bool branch_taken_0x22a47c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a47c) {
            ctx->pc = 0x22A698u;
            goto label_22a698;
        }
    }
    ctx->pc = 0x22A484u;
label_22a484:
    // 0x22a484: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x22a484u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_22a488:
    // 0x22a488: 0x14660006  bne         $v1, $a2, . + 4 + (0x6 << 2)
label_22a48c:
    if (ctx->pc == 0x22A48Cu) {
        ctx->pc = 0x22A48Cu;
            // 0x22a48c: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->pc = 0x22A490u;
        goto label_22a490;
    }
    ctx->pc = 0x22A488u;
    {
        const bool branch_taken_0x22a488 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x22A48Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A488u;
            // 0x22a48c: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a488) {
            ctx->pc = 0x22A4A4u;
            goto label_22a4a4;
        }
    }
    ctx->pc = 0x22A490u;
label_22a490:
    // 0x22a490: 0xc0ad1d8  jal         func_2B4760
label_22a494:
    if (ctx->pc == 0x22A494u) {
        ctx->pc = 0x22A498u;
        goto label_22a498;
    }
    ctx->pc = 0x22A490u;
    SET_GPR_U32(ctx, 31, 0x22A498u);
    ctx->pc = 0x2B4760u;
    if (runtime->hasFunction(0x2B4760u)) {
        auto targetFn = runtime->lookupFunction(0x2B4760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A498u; }
        if (ctx->pc != 0x22A498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCharaChangeStarDraw__Fv_0x2b4760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A498u; }
        if (ctx->pc != 0x22A498u) { return; }
    }
    ctx->pc = 0x22A498u;
label_22a498:
    // 0x22a498: 0x1000007f  b           . + 4 + (0x7F << 2)
label_22a49c:
    if (ctx->pc == 0x22A49Cu) {
        ctx->pc = 0x22A4A0u;
        goto label_22a4a0;
    }
    ctx->pc = 0x22A498u;
    {
        const bool branch_taken_0x22a498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a498) {
            ctx->pc = 0x22A698u;
            goto label_22a698;
        }
    }
    ctx->pc = 0x22A4A0u;
label_22a4a0:
    // 0x22a4a0: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x22a4a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_22a4a4:
    // 0x22a4a4: 0x14660007  bne         $v1, $a2, . + 4 + (0x7 << 2)
label_22a4a8:
    if (ctx->pc == 0x22A4A8u) {
        ctx->pc = 0x22A4A8u;
            // 0x22a4a8: 0x24060023  addiu       $a2, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->pc = 0x22A4ACu;
        goto label_22a4ac;
    }
    ctx->pc = 0x22A4A4u;
    {
        const bool branch_taken_0x22a4a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x22A4A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A4A4u;
            // 0x22a4a8: 0x24060023  addiu       $a2, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a4a4) {
            ctx->pc = 0x22A4C4u;
            goto label_22a4c4;
        }
    }
    ctx->pc = 0x22A4ACu;
label_22a4ac:
    // 0x22a4ac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22a4acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22a4b0:
    // 0x22a4b0: 0xc082274  jal         func_2089D0
label_22a4b4:
    if (ctx->pc == 0x22A4B4u) {
        ctx->pc = 0x22A4B4u;
            // 0x22a4b4: 0x2685000c  addiu       $a1, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->pc = 0x22A4B8u;
        goto label_22a4b8;
    }
    ctx->pc = 0x22A4B0u;
    SET_GPR_U32(ctx, 31, 0x22A4B8u);
    ctx->pc = 0x22A4B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A4B0u;
            // 0x22a4b4: 0x2685000c  addiu       $a1, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2089D0u;
    if (runtime->hasFunction(0x2089D0u)) {
        auto targetFn = runtime->lookupFunction(0x2089D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A4B8u; }
        if (ctx->pc != 0x22A4B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuInventCreateCardDraw__FRiPf_0x2089d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A4B8u; }
        if (ctx->pc != 0x22A4B8u) { return; }
    }
    ctx->pc = 0x22A4B8u;
label_22a4b8:
    // 0x22a4b8: 0x10000077  b           . + 4 + (0x77 << 2)
label_22a4bc:
    if (ctx->pc == 0x22A4BCu) {
        ctx->pc = 0x22A4C0u;
        goto label_22a4c0;
    }
    ctx->pc = 0x22A4B8u;
    {
        const bool branch_taken_0x22a4b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a4b8) {
            ctx->pc = 0x22A698u;
            goto label_22a698;
        }
    }
    ctx->pc = 0x22A4C0u;
label_22a4c0:
    // 0x22a4c0: 0x24060023  addiu       $a2, $zero, 0x23
    ctx->pc = 0x22a4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_22a4c4:
    // 0x22a4c4: 0x14660009  bne         $v1, $a2, . + 4 + (0x9 << 2)
label_22a4c8:
    if (ctx->pc == 0x22A4C8u) {
        ctx->pc = 0x22A4C8u;
            // 0x22a4c8: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->pc = 0x22A4CCu;
        goto label_22a4cc;
    }
    ctx->pc = 0x22A4C4u;
    {
        const bool branch_taken_0x22a4c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x22A4C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A4C4u;
            // 0x22a4c8: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a4c4) {
            ctx->pc = 0x22A4ECu;
            goto label_22a4ec;
        }
    }
    ctx->pc = 0x22A4CCu;
label_22a4cc:
    // 0x22a4cc: 0x9286001c  lbu         $a2, 0x1C($s4)
    ctx->pc = 0x22a4ccu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 28)));
label_22a4d0:
    // 0x22a4d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22a4d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22a4d4:
    // 0x22a4d4: 0x92870058  lbu         $a3, 0x58($s4)
    ctx->pc = 0x22a4d4u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 88)));
label_22a4d8:
    // 0x22a4d8: 0xc07ce90  jal         func_1F3A40
label_22a4dc:
    if (ctx->pc == 0x22A4DCu) {
        ctx->pc = 0x22A4DCu;
            // 0x22a4dc: 0x2685000c  addiu       $a1, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->pc = 0x22A4E0u;
        goto label_22a4e0;
    }
    ctx->pc = 0x22A4D8u;
    SET_GPR_U32(ctx, 31, 0x22A4E0u);
    ctx->pc = 0x22A4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A4D8u;
            // 0x22a4dc: 0x2685000c  addiu       $a1, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F3A40u;
    if (runtime->hasFunction(0x1F3A40u)) {
        auto targetFn = runtime->lookupFunction(0x1F3A40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A4E0u; }
        if (ctx->pc != 0x22A4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuGeoramaListDraw__FRiPfii_0x1f3a40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A4E0u; }
        if (ctx->pc != 0x22A4E0u) { return; }
    }
    ctx->pc = 0x22A4E0u;
label_22a4e0:
    // 0x22a4e0: 0x1000006d  b           . + 4 + (0x6D << 2)
label_22a4e4:
    if (ctx->pc == 0x22A4E4u) {
        ctx->pc = 0x22A4E8u;
        goto label_22a4e8;
    }
    ctx->pc = 0x22A4E0u;
    {
        const bool branch_taken_0x22a4e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a4e0) {
            ctx->pc = 0x22A698u;
            goto label_22a698;
        }
    }
    ctx->pc = 0x22A4E8u;
label_22a4e8:
    // 0x22a4e8: 0x24060024  addiu       $a2, $zero, 0x24
    ctx->pc = 0x22a4e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_22a4ec:
    // 0x22a4ec: 0x14660008  bne         $v1, $a2, . + 4 + (0x8 << 2)
label_22a4f0:
    if (ctx->pc == 0x22A4F0u) {
        ctx->pc = 0x22A4F0u;
            // 0x22a4f0: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x22A4F4u;
        goto label_22a4f4;
    }
    ctx->pc = 0x22A4ECu;
    {
        const bool branch_taken_0x22a4ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x22A4F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A4ECu;
            // 0x22a4f0: 0x24060025  addiu       $a2, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a4ec) {
            ctx->pc = 0x22A510u;
            goto label_22a510;
        }
    }
    ctx->pc = 0x22A4F4u;
label_22a4f4:
    // 0x22a4f4: 0x92860058  lbu         $a2, 0x58($s4)
    ctx->pc = 0x22a4f4u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 88)));
label_22a4f8:
    // 0x22a4f8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22a4f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22a4fc:
    // 0x22a4fc: 0xc07ce40  jal         func_1F3900
label_22a500:
    if (ctx->pc == 0x22A500u) {
        ctx->pc = 0x22A500u;
            // 0x22a500: 0x2685000c  addiu       $a1, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->pc = 0x22A504u;
        goto label_22a504;
    }
    ctx->pc = 0x22A4FCu;
    SET_GPR_U32(ctx, 31, 0x22A504u);
    ctx->pc = 0x22A500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A4FCu;
            // 0x22a500: 0x2685000c  addiu       $a1, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F3900u;
    if (runtime->hasFunction(0x1F3900u)) {
        auto targetFn = runtime->lookupFunction(0x1F3900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A504u; }
        if (ctx->pc != 0x22A504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuGeoramaTitleDraw__FRiPfi_0x1f3900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A504u; }
        if (ctx->pc != 0x22A504u) { return; }
    }
    ctx->pc = 0x22A504u;
label_22a504:
    // 0x22a504: 0x10000064  b           . + 4 + (0x64 << 2)
label_22a508:
    if (ctx->pc == 0x22A508u) {
        ctx->pc = 0x22A50Cu;
        goto label_22a50c;
    }
    ctx->pc = 0x22A504u;
    {
        const bool branch_taken_0x22a504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a504) {
            ctx->pc = 0x22A698u;
            goto label_22a698;
        }
    }
    ctx->pc = 0x22A50Cu;
label_22a50c:
    // 0x22a50c: 0x24060025  addiu       $a2, $zero, 0x25
    ctx->pc = 0x22a50cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
label_22a510:
    // 0x22a510: 0x14660008  bne         $v1, $a2, . + 4 + (0x8 << 2)
label_22a514:
    if (ctx->pc == 0x22A514u) {
        ctx->pc = 0x22A514u;
            // 0x22a514: 0x24060026  addiu       $a2, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->pc = 0x22A518u;
        goto label_22a518;
    }
    ctx->pc = 0x22A510u;
    {
        const bool branch_taken_0x22a510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x22A514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A510u;
            // 0x22a514: 0x24060026  addiu       $a2, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a510) {
            ctx->pc = 0x22A534u;
            goto label_22a534;
        }
    }
    ctx->pc = 0x22A518u;
label_22a518:
    // 0x22a518: 0x92860058  lbu         $a2, 0x58($s4)
    ctx->pc = 0x22a518u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 88)));
label_22a51c:
    // 0x22a51c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22a51cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22a520:
    // 0x22a520: 0xc07d284  jal         func_1F4A10
label_22a524:
    if (ctx->pc == 0x22A524u) {
        ctx->pc = 0x22A524u;
            // 0x22a524: 0x2685000c  addiu       $a1, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->pc = 0x22A528u;
        goto label_22a528;
    }
    ctx->pc = 0x22A520u;
    SET_GPR_U32(ctx, 31, 0x22A528u);
    ctx->pc = 0x22A524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A520u;
            // 0x22a524: 0x2685000c  addiu       $a1, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F4A10u;
    if (runtime->hasFunction(0x1F4A10u)) {
        auto targetFn = runtime->lookupFunction(0x1F4A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A528u; }
        if (ctx->pc != 0x22A528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuGeoramaAnalyzeDraw__FRiPfi_0x1f4a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A528u; }
        if (ctx->pc != 0x22A528u) { return; }
    }
    ctx->pc = 0x22A528u;
label_22a528:
    // 0x22a528: 0x1000005b  b           . + 4 + (0x5B << 2)
label_22a52c:
    if (ctx->pc == 0x22A52Cu) {
        ctx->pc = 0x22A530u;
        goto label_22a530;
    }
    ctx->pc = 0x22A528u;
    {
        const bool branch_taken_0x22a528 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a528) {
            ctx->pc = 0x22A698u;
            goto label_22a698;
        }
    }
    ctx->pc = 0x22A530u;
label_22a530:
    // 0x22a530: 0x24060026  addiu       $a2, $zero, 0x26
    ctx->pc = 0x22a530u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_22a534:
    // 0x22a534: 0x14660006  bne         $v1, $a2, . + 4 + (0x6 << 2)
label_22a538:
    if (ctx->pc == 0x22A538u) {
        ctx->pc = 0x22A538u;
            // 0x22a538: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->pc = 0x22A53Cu;
        goto label_22a53c;
    }
    ctx->pc = 0x22A534u;
    {
        const bool branch_taken_0x22a534 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x22A538u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A534u;
            // 0x22a538: 0x24060027  addiu       $a2, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a534) {
            ctx->pc = 0x22A550u;
            goto label_22a550;
        }
    }
    ctx->pc = 0x22A53Cu;
label_22a53c:
    // 0x22a53c: 0xc07dabc  jal         func_1F6AF0
label_22a540:
    if (ctx->pc == 0x22A540u) {
        ctx->pc = 0x22A540u;
            // 0x22a540: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A544u;
        goto label_22a544;
    }
    ctx->pc = 0x22A53Cu;
    SET_GPR_U32(ctx, 31, 0x22A544u);
    ctx->pc = 0x22A540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A53Cu;
            // 0x22a540: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F6AF0u;
    if (runtime->hasFunction(0x1F6AF0u)) {
        auto targetFn = runtime->lookupFunction(0x1F6AF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A544u; }
        if (ctx->pc != 0x22A544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuPlacedHouseDraw__FRi_0x1f6af0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A544u; }
        if (ctx->pc != 0x22A544u) { return; }
    }
    ctx->pc = 0x22A544u;
label_22a544:
    // 0x22a544: 0x10000054  b           . + 4 + (0x54 << 2)
label_22a548:
    if (ctx->pc == 0x22A548u) {
        ctx->pc = 0x22A54Cu;
        goto label_22a54c;
    }
    ctx->pc = 0x22A544u;
    {
        const bool branch_taken_0x22a544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a544) {
            ctx->pc = 0x22A698u;
            goto label_22a698;
        }
    }
    ctx->pc = 0x22A54Cu;
label_22a54c:
    // 0x22a54c: 0x24060027  addiu       $a2, $zero, 0x27
    ctx->pc = 0x22a54cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
label_22a550:
    // 0x22a550: 0x14660007  bne         $v1, $a2, . + 4 + (0x7 << 2)
label_22a554:
    if (ctx->pc == 0x22A554u) {
        ctx->pc = 0x22A554u;
            // 0x22a554: 0x2406002a  addiu       $a2, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->pc = 0x22A558u;
        goto label_22a558;
    }
    ctx->pc = 0x22A550u;
    {
        const bool branch_taken_0x22a550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x22A554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A550u;
            // 0x22a554: 0x2406002a  addiu       $a2, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a550) {
            ctx->pc = 0x22A570u;
            goto label_22a570;
        }
    }
    ctx->pc = 0x22A558u;
label_22a558:
    // 0x22a558: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22a558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22a55c:
    // 0x22a55c: 0xc0a5060  jal         func_294180
label_22a560:
    if (ctx->pc == 0x22A560u) {
        ctx->pc = 0x22A560u;
            // 0x22a560: 0x2685000c  addiu       $a1, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->pc = 0x22A564u;
        goto label_22a564;
    }
    ctx->pc = 0x22A55Cu;
    SET_GPR_U32(ctx, 31, 0x22A564u);
    ctx->pc = 0x22A560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A55Cu;
            // 0x22a560: 0x2685000c  addiu       $a1, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294180u;
    if (runtime->hasFunction(0x294180u)) {
        auto targetFn = runtime->lookupFunction(0x294180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A564u; }
        if (ctx->pc != 0x22A564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ShopSellListDraw__FRiPf_0x294180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A564u; }
        if (ctx->pc != 0x22A564u) { return; }
    }
    ctx->pc = 0x22A564u;
label_22a564:
    // 0x22a564: 0x1000004c  b           . + 4 + (0x4C << 2)
label_22a568:
    if (ctx->pc == 0x22A568u) {
        ctx->pc = 0x22A56Cu;
        goto label_22a56c;
    }
    ctx->pc = 0x22A564u;
    {
        const bool branch_taken_0x22a564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a564) {
            ctx->pc = 0x22A698u;
            goto label_22a698;
        }
    }
    ctx->pc = 0x22A56Cu;
label_22a56c:
    // 0x22a56c: 0x2406002a  addiu       $a2, $zero, 0x2A
    ctx->pc = 0x22a56cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
label_22a570:
    // 0x22a570: 0x14660008  bne         $v1, $a2, . + 4 + (0x8 << 2)
label_22a574:
    if (ctx->pc == 0x22A574u) {
        ctx->pc = 0x22A574u;
            // 0x22a574: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->pc = 0x22A578u;
        goto label_22a578;
    }
    ctx->pc = 0x22A570u;
    {
        const bool branch_taken_0x22a570 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x22A574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A570u;
            // 0x22a574: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a570) {
            ctx->pc = 0x22A594u;
            goto label_22a594;
        }
    }
    ctx->pc = 0x22A578u;
label_22a578:
    // 0x22a578: 0x92860058  lbu         $a2, 0x58($s4)
    ctx->pc = 0x22a578u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 88)));
label_22a57c:
    // 0x22a57c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22a57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22a580:
    // 0x22a580: 0xc0b1258  jal         func_2C4960
label_22a584:
    if (ctx->pc == 0x22A584u) {
        ctx->pc = 0x22A584u;
            // 0x22a584: 0x2685000c  addiu       $a1, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->pc = 0x22A588u;
        goto label_22a588;
    }
    ctx->pc = 0x22A580u;
    SET_GPR_U32(ctx, 31, 0x22A588u);
    ctx->pc = 0x22A584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A580u;
            // 0x22a584: 0x2685000c  addiu       $a1, $s4, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C4960u;
    if (runtime->hasFunction(0x2C4960u)) {
        auto targetFn = runtime->lookupFunction(0x2C4960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A588u; }
        if (ctx->pc != 0x22A588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SaveFileListDraw__FRiPfi_0x2c4960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A588u; }
        if (ctx->pc != 0x22A588u) { return; }
    }
    ctx->pc = 0x22A588u;
label_22a588:
    // 0x22a588: 0x10000043  b           . + 4 + (0x43 << 2)
label_22a58c:
    if (ctx->pc == 0x22A58Cu) {
        ctx->pc = 0x22A590u;
        goto label_22a590;
    }
    ctx->pc = 0x22A588u;
    {
        const bool branch_taken_0x22a588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a588) {
            ctx->pc = 0x22A698u;
            goto label_22a698;
        }
    }
    ctx->pc = 0x22A590u;
label_22a590:
    // 0x22a590: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x22a590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_22a594:
    // 0x22a594: 0x14660008  bne         $v1, $a2, . + 4 + (0x8 << 2)
label_22a598:
    if (ctx->pc == 0x22A598u) {
        ctx->pc = 0x22A598u;
            // 0x22a598: 0x24060019  addiu       $a2, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->pc = 0x22A59Cu;
        goto label_22a59c;
    }
    ctx->pc = 0x22A594u;
    {
        const bool branch_taken_0x22a594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x22A598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A594u;
            // 0x22a598: 0x24060019  addiu       $a2, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a594) {
            ctx->pc = 0x22A5B8u;
            goto label_22a5b8;
        }
    }
    ctx->pc = 0x22A59Cu;
label_22a59c:
    // 0x22a59c: 0xc093714  jal         func_24DC50
label_22a5a0:
    if (ctx->pc == 0x22A5A0u) {
        ctx->pc = 0x22A5A0u;
            // 0x22a5a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A5A4u;
        goto label_22a5a4;
    }
    ctx->pc = 0x22A59Cu;
    SET_GPR_U32(ctx, 31, 0x22A5A4u);
    ctx->pc = 0x22A5A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A59Cu;
            // 0x22a5a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24DC50u;
    if (runtime->hasFunction(0x24DC50u)) {
        auto targetFn = runtime->lookupFunction(0x24DC50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A5A4u; }
        if (ctx->pc != 0x22A5A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemInfoCursorDraw__FRi_0x24dc50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A5A4u; }
        if (ctx->pc != 0x22A5A4u) { return; }
    }
    ctx->pc = 0x22A5A4u;
label_22a5a4:
    // 0x22a5a4: 0xc093670  jal         func_24D9C0
label_22a5a8:
    if (ctx->pc == 0x22A5A8u) {
        ctx->pc = 0x22A5A8u;
            // 0x22a5a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A5ACu;
        goto label_22a5ac;
    }
    ctx->pc = 0x22A5A4u;
    SET_GPR_U32(ctx, 31, 0x22A5ACu);
    ctx->pc = 0x22A5A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A5A4u;
            // 0x22a5a8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24D9C0u;
    if (runtime->hasFunction(0x24D9C0u)) {
        auto targetFn = runtime->lookupFunction(0x24D9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A5ACu; }
        if (ctx->pc != 0x22A5ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCharaStatusDraw__FRi_0x24d9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A5ACu; }
        if (ctx->pc != 0x22A5ACu) { return; }
    }
    ctx->pc = 0x22A5ACu;
label_22a5ac:
    // 0x22a5ac: 0x1000003a  b           . + 4 + (0x3A << 2)
label_22a5b0:
    if (ctx->pc == 0x22A5B0u) {
        ctx->pc = 0x22A5B4u;
        goto label_22a5b4;
    }
    ctx->pc = 0x22A5ACu;
    {
        const bool branch_taken_0x22a5ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a5ac) {
            ctx->pc = 0x22A698u;
            goto label_22a698;
        }
    }
    ctx->pc = 0x22A5B4u;
label_22a5b4:
    // 0x22a5b4: 0x24060019  addiu       $a2, $zero, 0x19
    ctx->pc = 0x22a5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_22a5b8:
    // 0x22a5b8: 0x1466000f  bne         $v1, $a2, . + 4 + (0xF << 2)
label_22a5bc:
    if (ctx->pc == 0x22A5BCu) {
        ctx->pc = 0x22A5BCu;
            // 0x22a5bc: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->pc = 0x22A5C0u;
        goto label_22a5c0;
    }
    ctx->pc = 0x22A5B8u;
    {
        const bool branch_taken_0x22a5b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x22A5BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A5B8u;
            // 0x22a5bc: 0x2406002d  addiu       $a2, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22a5b8) {
            ctx->pc = 0x22A5F8u;
            goto label_22a5f8;
        }
    }
    ctx->pc = 0x22A5C0u;
label_22a5c0:
    // 0x22a5c0: 0xc0a248c  jal         func_289230
label_22a5c4:
    if (ctx->pc == 0x22A5C4u) {
        ctx->pc = 0x22A5C4u;
            // 0x22a5c4: 0xc68c000c  lwc1        $f12, 0xC($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x22A5C8u;
        goto label_22a5c8;
    }
    ctx->pc = 0x22A5C0u;
    SET_GPR_U32(ctx, 31, 0x22A5C8u);
    ctx->pc = 0x22A5C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A5C0u;
            // 0x22a5c4: 0xc68c000c  lwc1        $f12, 0xC($s4) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A5C8u; }
        if (ctx->pc != 0x22A5C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A5C8u; }
        if (ctx->pc != 0x22A5C8u) { return; }
    }
    ctx->pc = 0x22A5C8u;
label_22a5c8:
    // 0x22a5c8: 0xc68c0010  lwc1        $f12, 0x10($s4)
    ctx->pc = 0x22a5c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_22a5cc:
    // 0x22a5cc: 0xc0a248c  jal         func_289230
label_22a5d0:
    if (ctx->pc == 0x22A5D0u) {
        ctx->pc = 0x22A5D0u;
            // 0x22a5d0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A5D4u;
        goto label_22a5d4;
    }
    ctx->pc = 0x22A5CCu;
    SET_GPR_U32(ctx, 31, 0x22A5D4u);
    ctx->pc = 0x22A5D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A5CCu;
            // 0x22a5d0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A5D4u; }
        if (ctx->pc != 0x22A5D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A5D4u; }
        if (ctx->pc != 0x22A5D4u) { return; }
    }
    ctx->pc = 0x22A5D4u;
label_22a5d4:
    // 0x22a5d4: 0x92880058  lbu         $t0, 0x58($s4)
    ctx->pc = 0x22a5d4u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 88)));
label_22a5d8:
    // 0x22a5d8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22a5d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22a5dc:
    // 0x22a5dc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x22a5dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22a5e0:
    // 0x22a5e0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x22a5e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22a5e4:
    // 0x22a5e4: 0xc088940  jal         func_222500
label_22a5e8:
    if (ctx->pc == 0x22A5E8u) {
        ctx->pc = 0x22A5E8u;
            // 0x22a5e8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A5ECu;
        goto label_22a5ec;
    }
    ctx->pc = 0x22A5E4u;
    SET_GPR_U32(ctx, 31, 0x22A5ECu);
    ctx->pc = 0x22A5E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A5E4u;
            // 0x22a5e8: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222500u;
    if (runtime->hasFunction(0x222500u)) {
        auto targetFn = runtime->lookupFunction(0x222500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A5ECu; }
        if (ctx->pc != 0x22A5ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuDl__FRiiiii_0x222500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A5ECu; }
        if (ctx->pc != 0x22A5ECu) { return; }
    }
    ctx->pc = 0x22A5ECu;
label_22a5ec:
    // 0x22a5ec: 0x1000002a  b           . + 4 + (0x2A << 2)
label_22a5f0:
    if (ctx->pc == 0x22A5F0u) {
        ctx->pc = 0x22A5F4u;
        goto label_22a5f4;
    }
    ctx->pc = 0x22A5ECu;
    {
        const bool branch_taken_0x22a5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a5ec) {
            ctx->pc = 0x22A698u;
            goto label_22a698;
        }
    }
    ctx->pc = 0x22A5F4u;
label_22a5f4:
    // 0x22a5f4: 0x2406002d  addiu       $a2, $zero, 0x2D
    ctx->pc = 0x22a5f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_22a5f8:
    // 0x22a5f8: 0x14660022  bne         $v1, $a2, . + 4 + (0x22 << 2)
label_22a5fc:
    if (ctx->pc == 0x22A5FCu) {
        ctx->pc = 0x22A600u;
        goto label_22a600;
    }
    ctx->pc = 0x22A5F8u;
    {
        const bool branch_taken_0x22a5f8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x22a5f8) {
            ctx->pc = 0x22A684u;
            goto label_22a684;
        }
    }
    ctx->pc = 0x22A600u;
label_22a600:
    // 0x22a600: 0xc695000c  lwc1        $f21, 0xC($s4)
    ctx->pc = 0x22a600u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_22a604:
    // 0x22a604: 0xc6940010  lwc1        $f20, 0x10($s4)
    ctx->pc = 0x22a604u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_22a608:
    // 0x22a608: 0xc0a248c  jal         func_289230
label_22a60c:
    if (ctx->pc == 0x22A60Cu) {
        ctx->pc = 0x22A60Cu;
            // 0x22a60c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->pc = 0x22A610u;
        goto label_22a610;
    }
    ctx->pc = 0x22A608u;
    SET_GPR_U32(ctx, 31, 0x22A610u);
    ctx->pc = 0x22A60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A608u;
            // 0x22a60c: 0x4600ab06  mov.s       $f12, $f21 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[21]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A610u; }
        if (ctx->pc != 0x22A610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A610u; }
        if (ctx->pc != 0x22A610u) { return; }
    }
    ctx->pc = 0x22A610u;
label_22a610:
    // 0x22a610: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x22a610u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22a614:
    // 0x22a614: 0xc0a248c  jal         func_289230
label_22a618:
    if (ctx->pc == 0x22A618u) {
        ctx->pc = 0x22A618u;
            // 0x22a618: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x22A61Cu;
        goto label_22a61c;
    }
    ctx->pc = 0x22A614u;
    SET_GPR_U32(ctx, 31, 0x22A61Cu);
    ctx->pc = 0x22A618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A614u;
            // 0x22a618: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A61Cu; }
        if (ctx->pc != 0x22A61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A61Cu; }
        if (ctx->pc != 0x22A61Cu) { return; }
    }
    ctx->pc = 0x22A61Cu;
label_22a61c:
    // 0x22a61c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22a61cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22a620:
    // 0x22a620: 0x86820004  lh          $v0, 0x4($s4)
    ctx->pc = 0x22a620u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
label_22a624:
    // 0x22a624: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22a624u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a628:
    // 0x22a628: 0x0  nop
    ctx->pc = 0x22a628u;
    // NOP
label_22a62c:
    // 0x22a62c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22a62cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22a630:
    // 0x22a630: 0xc0a248c  jal         func_289230
label_22a634:
    if (ctx->pc == 0x22A634u) {
        ctx->pc = 0x22A634u;
            // 0x22a634: 0x4600ab00  add.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->pc = 0x22A638u;
        goto label_22a638;
    }
    ctx->pc = 0x22A630u;
    SET_GPR_U32(ctx, 31, 0x22A638u);
    ctx->pc = 0x22A634u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A630u;
            // 0x22a634: 0x4600ab00  add.s       $f12, $f21, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[21], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A638u; }
        if (ctx->pc != 0x22A638u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A638u; }
        if (ctx->pc != 0x22A638u) { return; }
    }
    ctx->pc = 0x22A638u;
label_22a638:
    // 0x22a638: 0x86830006  lh          $v1, 0x6($s4)
    ctx->pc = 0x22a638u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
label_22a63c:
    // 0x22a63c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22a63cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22a640:
    // 0x22a640: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x22a640u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_22a644:
    // 0x22a644: 0x0  nop
    ctx->pc = 0x22a644u;
    // NOP
label_22a648:
    // 0x22a648: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x22a648u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_22a64c:
    // 0x22a64c: 0xc0a248c  jal         func_289230
label_22a650:
    if (ctx->pc == 0x22A650u) {
        ctx->pc = 0x22A650u;
            // 0x22a650: 0x4600a300  add.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->pc = 0x22A654u;
        goto label_22a654;
    }
    ctx->pc = 0x22A64Cu;
    SET_GPR_U32(ctx, 31, 0x22A654u);
    ctx->pc = 0x22A650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A64Cu;
            // 0x22a650: 0x4600a300  add.s       $f12, $f20, $f0 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A654u; }
        if (ctx->pc != 0x22A654u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A654u; }
        if (ctx->pc != 0x22A654u) { return; }
    }
    ctx->pc = 0x22A654u;
label_22a654:
    // 0x22a654: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x22a654u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_22a658:
    // 0x22a658: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x22a658u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_22a65c:
    // 0x22a65c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x22a65cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22a660:
    // 0x22a660: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x22a660u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22a664:
    // 0x22a664: 0xc04f8e4  jal         func_13E390
label_22a668:
    if (ctx->pc == 0x22A668u) {
        ctx->pc = 0x22A668u;
            // 0x22a668: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x22A66Cu;
        goto label_22a66c;
    }
    ctx->pc = 0x22A664u;
    SET_GPR_U32(ctx, 31, 0x22A66Cu);
    ctx->pc = 0x22A668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A664u;
            // 0x22a668: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A66Cu; }
        if (ctx->pc != 0x22A66Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A66Cu; }
        if (ctx->pc != 0x22A66Cu) { return; }
    }
    ctx->pc = 0x22A66Cu;
label_22a66c:
    // 0x22a66c: 0xc088038  jal         func_2200E0
label_22a670:
    if (ctx->pc == 0x22A670u) {
        ctx->pc = 0x22A670u;
            // 0x22a670: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x22A674u;
        goto label_22a674;
    }
    ctx->pc = 0x22A66Cu;
    SET_GPR_U32(ctx, 31, 0x22A674u);
    ctx->pc = 0x22A670u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A66Cu;
            // 0x22a670: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2200E0u;
    if (runtime->hasFunction(0x2200E0u)) {
        auto targetFn = runtime->lookupFunction(0x2200E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A674u; }
        if (ctx->pc != 0x22A674u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuClipRectCheck__FR9mgRect_i__0x2200e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A674u; }
        if (ctx->pc != 0x22A674u) { return; }
    }
    ctx->pc = 0x22A674u;
label_22a674:
    // 0x22a674: 0xc088050  jal         func_220140
label_22a678:
    if (ctx->pc == 0x22A678u) {
        ctx->pc = 0x22A678u;
            // 0x22a678: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x22A67Cu;
        goto label_22a67c;
    }
    ctx->pc = 0x22A674u;
    SET_GPR_U32(ctx, 31, 0x22A67Cu);
    ctx->pc = 0x22A678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A674u;
            // 0x22a678: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220140u;
    if (runtime->hasFunction(0x220140u)) {
        auto targetFn = runtime->lookupFunction(0x220140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A67Cu; }
        if (ctx->pc != 0x22A67Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuScissor__F9mgRect_i__0x220140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A67Cu; }
        if (ctx->pc != 0x22A67Cu) { return; }
    }
    ctx->pc = 0x22A67Cu;
label_22a67c:
    // 0x22a67c: 0x10000006  b           . + 4 + (0x6 << 2)
label_22a680:
    if (ctx->pc == 0x22A680u) {
        ctx->pc = 0x22A684u;
        goto label_22a684;
    }
    ctx->pc = 0x22A67Cu;
    {
        const bool branch_taken_0x22a67c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22a67c) {
            ctx->pc = 0x22A698u;
            goto label_22a698;
        }
    }
    ctx->pc = 0x22A684u;
label_22a684:
    // 0x22a684: 0x24040028  addiu       $a0, $zero, 0x28
    ctx->pc = 0x22a684u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_22a688:
    // 0x22a688: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_22a68c:
    if (ctx->pc == 0x22A68Cu) {
        ctx->pc = 0x22A690u;
        goto label_22a690;
    }
    ctx->pc = 0x22A688u;
    {
        const bool branch_taken_0x22a688 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x22a688) {
            ctx->pc = 0x22A698u;
            goto label_22a698;
        }
    }
    ctx->pc = 0x22A690u;
label_22a690:
    // 0x22a690: 0xc092c2c  jal         func_24B0B0
label_22a694:
    if (ctx->pc == 0x22A694u) {
        ctx->pc = 0x22A694u;
            // 0x22a694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22A698u;
        goto label_22a698;
    }
    ctx->pc = 0x22A690u;
    SET_GPR_U32(ctx, 31, 0x22A698u);
    ctx->pc = 0x22A694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22A690u;
            // 0x22a694: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24B0B0u;
    if (runtime->hasFunction(0x24B0B0u)) {
        auto targetFn = runtime->lookupFunction(0x24B0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A698u; }
        if (ctx->pc != 0x22A698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuWeaponBuildUpDraw__FRi_0x24b0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22A698u; }
        if (ctx->pc != 0x22A698u) { return; }
    }
    ctx->pc = 0x22A698u;
label_22a698:
    // 0x22a698: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x22a698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_22a69c:
    // 0x22a69c: 0xc7b7000c  lwc1        $f23, 0xC($sp)
    ctx->pc = 0x22a69cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[23] = f; }
label_22a6a0:
    // 0x22a6a0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x22a6a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_22a6a4:
    // 0x22a6a4: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x22a6a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_22a6a8:
    // 0x22a6a8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x22a6a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_22a6ac:
    // 0x22a6ac: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x22a6acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_22a6b0:
    // 0x22a6b0: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x22a6b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_22a6b4:
    // 0x22a6b4: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x22a6b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_22a6b8:
    // 0x22a6b8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x22a6b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_22a6bc:
    // 0x22a6bc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x22a6bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_22a6c0:
    // 0x22a6c0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x22a6c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_22a6c4:
    // 0x22a6c4: 0x3e00008  jr          $ra
label_22a6c8:
    if (ctx->pc == 0x22A6C8u) {
        ctx->pc = 0x22A6C8u;
            // 0x22a6c8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x22A6CCu;
        goto label_fallthrough_0x22a6c4;
    }
    ctx->pc = 0x22A6C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22A6C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22A6C4u;
            // 0x22a6c8: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x22a6c4:
    ctx->pc = 0x22A6CCu;
}
