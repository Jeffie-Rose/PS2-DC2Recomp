#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuInventInit__FP9mgCMemoryPii
// Address: 0x209d10 - 0x20a654
void MenuInventInit__FP9mgCMemoryPii_0x209d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuInventInit__FP9mgCMemoryPii_0x209d10");
#endif

    switch (ctx->pc) {
        case 0x209d10u: goto label_209d10;
        case 0x209d14u: goto label_209d14;
        case 0x209d18u: goto label_209d18;
        case 0x209d1cu: goto label_209d1c;
        case 0x209d20u: goto label_209d20;
        case 0x209d24u: goto label_209d24;
        case 0x209d28u: goto label_209d28;
        case 0x209d2cu: goto label_209d2c;
        case 0x209d30u: goto label_209d30;
        case 0x209d34u: goto label_209d34;
        case 0x209d38u: goto label_209d38;
        case 0x209d3cu: goto label_209d3c;
        case 0x209d40u: goto label_209d40;
        case 0x209d44u: goto label_209d44;
        case 0x209d48u: goto label_209d48;
        case 0x209d4cu: goto label_209d4c;
        case 0x209d50u: goto label_209d50;
        case 0x209d54u: goto label_209d54;
        case 0x209d58u: goto label_209d58;
        case 0x209d5cu: goto label_209d5c;
        case 0x209d60u: goto label_209d60;
        case 0x209d64u: goto label_209d64;
        case 0x209d68u: goto label_209d68;
        case 0x209d6cu: goto label_209d6c;
        case 0x209d70u: goto label_209d70;
        case 0x209d74u: goto label_209d74;
        case 0x209d78u: goto label_209d78;
        case 0x209d7cu: goto label_209d7c;
        case 0x209d80u: goto label_209d80;
        case 0x209d84u: goto label_209d84;
        case 0x209d88u: goto label_209d88;
        case 0x209d8cu: goto label_209d8c;
        case 0x209d90u: goto label_209d90;
        case 0x209d94u: goto label_209d94;
        case 0x209d98u: goto label_209d98;
        case 0x209d9cu: goto label_209d9c;
        case 0x209da0u: goto label_209da0;
        case 0x209da4u: goto label_209da4;
        case 0x209da8u: goto label_209da8;
        case 0x209dacu: goto label_209dac;
        case 0x209db0u: goto label_209db0;
        case 0x209db4u: goto label_209db4;
        case 0x209db8u: goto label_209db8;
        case 0x209dbcu: goto label_209dbc;
        case 0x209dc0u: goto label_209dc0;
        case 0x209dc4u: goto label_209dc4;
        case 0x209dc8u: goto label_209dc8;
        case 0x209dccu: goto label_209dcc;
        case 0x209dd0u: goto label_209dd0;
        case 0x209dd4u: goto label_209dd4;
        case 0x209dd8u: goto label_209dd8;
        case 0x209ddcu: goto label_209ddc;
        case 0x209de0u: goto label_209de0;
        case 0x209de4u: goto label_209de4;
        case 0x209de8u: goto label_209de8;
        case 0x209decu: goto label_209dec;
        case 0x209df0u: goto label_209df0;
        case 0x209df4u: goto label_209df4;
        case 0x209df8u: goto label_209df8;
        case 0x209dfcu: goto label_209dfc;
        case 0x209e00u: goto label_209e00;
        case 0x209e04u: goto label_209e04;
        case 0x209e08u: goto label_209e08;
        case 0x209e0cu: goto label_209e0c;
        case 0x209e10u: goto label_209e10;
        case 0x209e14u: goto label_209e14;
        case 0x209e18u: goto label_209e18;
        case 0x209e1cu: goto label_209e1c;
        case 0x209e20u: goto label_209e20;
        case 0x209e24u: goto label_209e24;
        case 0x209e28u: goto label_209e28;
        case 0x209e2cu: goto label_209e2c;
        case 0x209e30u: goto label_209e30;
        case 0x209e34u: goto label_209e34;
        case 0x209e38u: goto label_209e38;
        case 0x209e3cu: goto label_209e3c;
        case 0x209e40u: goto label_209e40;
        case 0x209e44u: goto label_209e44;
        case 0x209e48u: goto label_209e48;
        case 0x209e4cu: goto label_209e4c;
        case 0x209e50u: goto label_209e50;
        case 0x209e54u: goto label_209e54;
        case 0x209e58u: goto label_209e58;
        case 0x209e5cu: goto label_209e5c;
        case 0x209e60u: goto label_209e60;
        case 0x209e64u: goto label_209e64;
        case 0x209e68u: goto label_209e68;
        case 0x209e6cu: goto label_209e6c;
        case 0x209e70u: goto label_209e70;
        case 0x209e74u: goto label_209e74;
        case 0x209e78u: goto label_209e78;
        case 0x209e7cu: goto label_209e7c;
        case 0x209e80u: goto label_209e80;
        case 0x209e84u: goto label_209e84;
        case 0x209e88u: goto label_209e88;
        case 0x209e8cu: goto label_209e8c;
        case 0x209e90u: goto label_209e90;
        case 0x209e94u: goto label_209e94;
        case 0x209e98u: goto label_209e98;
        case 0x209e9cu: goto label_209e9c;
        case 0x209ea0u: goto label_209ea0;
        case 0x209ea4u: goto label_209ea4;
        case 0x209ea8u: goto label_209ea8;
        case 0x209eacu: goto label_209eac;
        case 0x209eb0u: goto label_209eb0;
        case 0x209eb4u: goto label_209eb4;
        case 0x209eb8u: goto label_209eb8;
        case 0x209ebcu: goto label_209ebc;
        case 0x209ec0u: goto label_209ec0;
        case 0x209ec4u: goto label_209ec4;
        case 0x209ec8u: goto label_209ec8;
        case 0x209eccu: goto label_209ecc;
        case 0x209ed0u: goto label_209ed0;
        case 0x209ed4u: goto label_209ed4;
        case 0x209ed8u: goto label_209ed8;
        case 0x209edcu: goto label_209edc;
        case 0x209ee0u: goto label_209ee0;
        case 0x209ee4u: goto label_209ee4;
        case 0x209ee8u: goto label_209ee8;
        case 0x209eecu: goto label_209eec;
        case 0x209ef0u: goto label_209ef0;
        case 0x209ef4u: goto label_209ef4;
        case 0x209ef8u: goto label_209ef8;
        case 0x209efcu: goto label_209efc;
        case 0x209f00u: goto label_209f00;
        case 0x209f04u: goto label_209f04;
        case 0x209f08u: goto label_209f08;
        case 0x209f0cu: goto label_209f0c;
        case 0x209f10u: goto label_209f10;
        case 0x209f14u: goto label_209f14;
        case 0x209f18u: goto label_209f18;
        case 0x209f1cu: goto label_209f1c;
        case 0x209f20u: goto label_209f20;
        case 0x209f24u: goto label_209f24;
        case 0x209f28u: goto label_209f28;
        case 0x209f2cu: goto label_209f2c;
        case 0x209f30u: goto label_209f30;
        case 0x209f34u: goto label_209f34;
        case 0x209f38u: goto label_209f38;
        case 0x209f3cu: goto label_209f3c;
        case 0x209f40u: goto label_209f40;
        case 0x209f44u: goto label_209f44;
        case 0x209f48u: goto label_209f48;
        case 0x209f4cu: goto label_209f4c;
        case 0x209f50u: goto label_209f50;
        case 0x209f54u: goto label_209f54;
        case 0x209f58u: goto label_209f58;
        case 0x209f5cu: goto label_209f5c;
        case 0x209f60u: goto label_209f60;
        case 0x209f64u: goto label_209f64;
        case 0x209f68u: goto label_209f68;
        case 0x209f6cu: goto label_209f6c;
        case 0x209f70u: goto label_209f70;
        case 0x209f74u: goto label_209f74;
        case 0x209f78u: goto label_209f78;
        case 0x209f7cu: goto label_209f7c;
        case 0x209f80u: goto label_209f80;
        case 0x209f84u: goto label_209f84;
        case 0x209f88u: goto label_209f88;
        case 0x209f8cu: goto label_209f8c;
        case 0x209f90u: goto label_209f90;
        case 0x209f94u: goto label_209f94;
        case 0x209f98u: goto label_209f98;
        case 0x209f9cu: goto label_209f9c;
        case 0x209fa0u: goto label_209fa0;
        case 0x209fa4u: goto label_209fa4;
        case 0x209fa8u: goto label_209fa8;
        case 0x209facu: goto label_209fac;
        case 0x209fb0u: goto label_209fb0;
        case 0x209fb4u: goto label_209fb4;
        case 0x209fb8u: goto label_209fb8;
        case 0x209fbcu: goto label_209fbc;
        case 0x209fc0u: goto label_209fc0;
        case 0x209fc4u: goto label_209fc4;
        case 0x209fc8u: goto label_209fc8;
        case 0x209fccu: goto label_209fcc;
        case 0x209fd0u: goto label_209fd0;
        case 0x209fd4u: goto label_209fd4;
        case 0x209fd8u: goto label_209fd8;
        case 0x209fdcu: goto label_209fdc;
        case 0x209fe0u: goto label_209fe0;
        case 0x209fe4u: goto label_209fe4;
        case 0x209fe8u: goto label_209fe8;
        case 0x209fecu: goto label_209fec;
        case 0x209ff0u: goto label_209ff0;
        case 0x209ff4u: goto label_209ff4;
        case 0x209ff8u: goto label_209ff8;
        case 0x209ffcu: goto label_209ffc;
        case 0x20a000u: goto label_20a000;
        case 0x20a004u: goto label_20a004;
        case 0x20a008u: goto label_20a008;
        case 0x20a00cu: goto label_20a00c;
        case 0x20a010u: goto label_20a010;
        case 0x20a014u: goto label_20a014;
        case 0x20a018u: goto label_20a018;
        case 0x20a01cu: goto label_20a01c;
        case 0x20a020u: goto label_20a020;
        case 0x20a024u: goto label_20a024;
        case 0x20a028u: goto label_20a028;
        case 0x20a02cu: goto label_20a02c;
        case 0x20a030u: goto label_20a030;
        case 0x20a034u: goto label_20a034;
        case 0x20a038u: goto label_20a038;
        case 0x20a03cu: goto label_20a03c;
        case 0x20a040u: goto label_20a040;
        case 0x20a044u: goto label_20a044;
        case 0x20a048u: goto label_20a048;
        case 0x20a04cu: goto label_20a04c;
        case 0x20a050u: goto label_20a050;
        case 0x20a054u: goto label_20a054;
        case 0x20a058u: goto label_20a058;
        case 0x20a05cu: goto label_20a05c;
        case 0x20a060u: goto label_20a060;
        case 0x20a064u: goto label_20a064;
        case 0x20a068u: goto label_20a068;
        case 0x20a06cu: goto label_20a06c;
        case 0x20a070u: goto label_20a070;
        case 0x20a074u: goto label_20a074;
        case 0x20a078u: goto label_20a078;
        case 0x20a07cu: goto label_20a07c;
        case 0x20a080u: goto label_20a080;
        case 0x20a084u: goto label_20a084;
        case 0x20a088u: goto label_20a088;
        case 0x20a08cu: goto label_20a08c;
        case 0x20a090u: goto label_20a090;
        case 0x20a094u: goto label_20a094;
        case 0x20a098u: goto label_20a098;
        case 0x20a09cu: goto label_20a09c;
        case 0x20a0a0u: goto label_20a0a0;
        case 0x20a0a4u: goto label_20a0a4;
        case 0x20a0a8u: goto label_20a0a8;
        case 0x20a0acu: goto label_20a0ac;
        case 0x20a0b0u: goto label_20a0b0;
        case 0x20a0b4u: goto label_20a0b4;
        case 0x20a0b8u: goto label_20a0b8;
        case 0x20a0bcu: goto label_20a0bc;
        case 0x20a0c0u: goto label_20a0c0;
        case 0x20a0c4u: goto label_20a0c4;
        case 0x20a0c8u: goto label_20a0c8;
        case 0x20a0ccu: goto label_20a0cc;
        case 0x20a0d0u: goto label_20a0d0;
        case 0x20a0d4u: goto label_20a0d4;
        case 0x20a0d8u: goto label_20a0d8;
        case 0x20a0dcu: goto label_20a0dc;
        case 0x20a0e0u: goto label_20a0e0;
        case 0x20a0e4u: goto label_20a0e4;
        case 0x20a0e8u: goto label_20a0e8;
        case 0x20a0ecu: goto label_20a0ec;
        case 0x20a0f0u: goto label_20a0f0;
        case 0x20a0f4u: goto label_20a0f4;
        case 0x20a0f8u: goto label_20a0f8;
        case 0x20a0fcu: goto label_20a0fc;
        case 0x20a100u: goto label_20a100;
        case 0x20a104u: goto label_20a104;
        case 0x20a108u: goto label_20a108;
        case 0x20a10cu: goto label_20a10c;
        case 0x20a110u: goto label_20a110;
        case 0x20a114u: goto label_20a114;
        case 0x20a118u: goto label_20a118;
        case 0x20a11cu: goto label_20a11c;
        case 0x20a120u: goto label_20a120;
        case 0x20a124u: goto label_20a124;
        case 0x20a128u: goto label_20a128;
        case 0x20a12cu: goto label_20a12c;
        case 0x20a130u: goto label_20a130;
        case 0x20a134u: goto label_20a134;
        case 0x20a138u: goto label_20a138;
        case 0x20a13cu: goto label_20a13c;
        case 0x20a140u: goto label_20a140;
        case 0x20a144u: goto label_20a144;
        case 0x20a148u: goto label_20a148;
        case 0x20a14cu: goto label_20a14c;
        case 0x20a150u: goto label_20a150;
        case 0x20a154u: goto label_20a154;
        case 0x20a158u: goto label_20a158;
        case 0x20a15cu: goto label_20a15c;
        case 0x20a160u: goto label_20a160;
        case 0x20a164u: goto label_20a164;
        case 0x20a168u: goto label_20a168;
        case 0x20a16cu: goto label_20a16c;
        case 0x20a170u: goto label_20a170;
        case 0x20a174u: goto label_20a174;
        case 0x20a178u: goto label_20a178;
        case 0x20a17cu: goto label_20a17c;
        case 0x20a180u: goto label_20a180;
        case 0x20a184u: goto label_20a184;
        case 0x20a188u: goto label_20a188;
        case 0x20a18cu: goto label_20a18c;
        case 0x20a190u: goto label_20a190;
        case 0x20a194u: goto label_20a194;
        case 0x20a198u: goto label_20a198;
        case 0x20a19cu: goto label_20a19c;
        case 0x20a1a0u: goto label_20a1a0;
        case 0x20a1a4u: goto label_20a1a4;
        case 0x20a1a8u: goto label_20a1a8;
        case 0x20a1acu: goto label_20a1ac;
        case 0x20a1b0u: goto label_20a1b0;
        case 0x20a1b4u: goto label_20a1b4;
        case 0x20a1b8u: goto label_20a1b8;
        case 0x20a1bcu: goto label_20a1bc;
        case 0x20a1c0u: goto label_20a1c0;
        case 0x20a1c4u: goto label_20a1c4;
        case 0x20a1c8u: goto label_20a1c8;
        case 0x20a1ccu: goto label_20a1cc;
        case 0x20a1d0u: goto label_20a1d0;
        case 0x20a1d4u: goto label_20a1d4;
        case 0x20a1d8u: goto label_20a1d8;
        case 0x20a1dcu: goto label_20a1dc;
        case 0x20a1e0u: goto label_20a1e0;
        case 0x20a1e4u: goto label_20a1e4;
        case 0x20a1e8u: goto label_20a1e8;
        case 0x20a1ecu: goto label_20a1ec;
        case 0x20a1f0u: goto label_20a1f0;
        case 0x20a1f4u: goto label_20a1f4;
        case 0x20a1f8u: goto label_20a1f8;
        case 0x20a1fcu: goto label_20a1fc;
        case 0x20a200u: goto label_20a200;
        case 0x20a204u: goto label_20a204;
        case 0x20a208u: goto label_20a208;
        case 0x20a20cu: goto label_20a20c;
        case 0x20a210u: goto label_20a210;
        case 0x20a214u: goto label_20a214;
        case 0x20a218u: goto label_20a218;
        case 0x20a21cu: goto label_20a21c;
        case 0x20a220u: goto label_20a220;
        case 0x20a224u: goto label_20a224;
        case 0x20a228u: goto label_20a228;
        case 0x20a22cu: goto label_20a22c;
        case 0x20a230u: goto label_20a230;
        case 0x20a234u: goto label_20a234;
        case 0x20a238u: goto label_20a238;
        case 0x20a23cu: goto label_20a23c;
        case 0x20a240u: goto label_20a240;
        case 0x20a244u: goto label_20a244;
        case 0x20a248u: goto label_20a248;
        case 0x20a24cu: goto label_20a24c;
        case 0x20a250u: goto label_20a250;
        case 0x20a254u: goto label_20a254;
        case 0x20a258u: goto label_20a258;
        case 0x20a25cu: goto label_20a25c;
        case 0x20a260u: goto label_20a260;
        case 0x20a264u: goto label_20a264;
        case 0x20a268u: goto label_20a268;
        case 0x20a26cu: goto label_20a26c;
        case 0x20a270u: goto label_20a270;
        case 0x20a274u: goto label_20a274;
        case 0x20a278u: goto label_20a278;
        case 0x20a27cu: goto label_20a27c;
        case 0x20a280u: goto label_20a280;
        case 0x20a284u: goto label_20a284;
        case 0x20a288u: goto label_20a288;
        case 0x20a28cu: goto label_20a28c;
        case 0x20a290u: goto label_20a290;
        case 0x20a294u: goto label_20a294;
        case 0x20a298u: goto label_20a298;
        case 0x20a29cu: goto label_20a29c;
        case 0x20a2a0u: goto label_20a2a0;
        case 0x20a2a4u: goto label_20a2a4;
        case 0x20a2a8u: goto label_20a2a8;
        case 0x20a2acu: goto label_20a2ac;
        case 0x20a2b0u: goto label_20a2b0;
        case 0x20a2b4u: goto label_20a2b4;
        case 0x20a2b8u: goto label_20a2b8;
        case 0x20a2bcu: goto label_20a2bc;
        case 0x20a2c0u: goto label_20a2c0;
        case 0x20a2c4u: goto label_20a2c4;
        case 0x20a2c8u: goto label_20a2c8;
        case 0x20a2ccu: goto label_20a2cc;
        case 0x20a2d0u: goto label_20a2d0;
        case 0x20a2d4u: goto label_20a2d4;
        case 0x20a2d8u: goto label_20a2d8;
        case 0x20a2dcu: goto label_20a2dc;
        case 0x20a2e0u: goto label_20a2e0;
        case 0x20a2e4u: goto label_20a2e4;
        case 0x20a2e8u: goto label_20a2e8;
        case 0x20a2ecu: goto label_20a2ec;
        case 0x20a2f0u: goto label_20a2f0;
        case 0x20a2f4u: goto label_20a2f4;
        case 0x20a2f8u: goto label_20a2f8;
        case 0x20a2fcu: goto label_20a2fc;
        case 0x20a300u: goto label_20a300;
        case 0x20a304u: goto label_20a304;
        case 0x20a308u: goto label_20a308;
        case 0x20a30cu: goto label_20a30c;
        case 0x20a310u: goto label_20a310;
        case 0x20a314u: goto label_20a314;
        case 0x20a318u: goto label_20a318;
        case 0x20a31cu: goto label_20a31c;
        case 0x20a320u: goto label_20a320;
        case 0x20a324u: goto label_20a324;
        case 0x20a328u: goto label_20a328;
        case 0x20a32cu: goto label_20a32c;
        case 0x20a330u: goto label_20a330;
        case 0x20a334u: goto label_20a334;
        case 0x20a338u: goto label_20a338;
        case 0x20a33cu: goto label_20a33c;
        case 0x20a340u: goto label_20a340;
        case 0x20a344u: goto label_20a344;
        case 0x20a348u: goto label_20a348;
        case 0x20a34cu: goto label_20a34c;
        case 0x20a350u: goto label_20a350;
        case 0x20a354u: goto label_20a354;
        case 0x20a358u: goto label_20a358;
        case 0x20a35cu: goto label_20a35c;
        case 0x20a360u: goto label_20a360;
        case 0x20a364u: goto label_20a364;
        case 0x20a368u: goto label_20a368;
        case 0x20a36cu: goto label_20a36c;
        case 0x20a370u: goto label_20a370;
        case 0x20a374u: goto label_20a374;
        case 0x20a378u: goto label_20a378;
        case 0x20a37cu: goto label_20a37c;
        case 0x20a380u: goto label_20a380;
        case 0x20a384u: goto label_20a384;
        case 0x20a388u: goto label_20a388;
        case 0x20a38cu: goto label_20a38c;
        case 0x20a390u: goto label_20a390;
        case 0x20a394u: goto label_20a394;
        case 0x20a398u: goto label_20a398;
        case 0x20a39cu: goto label_20a39c;
        case 0x20a3a0u: goto label_20a3a0;
        case 0x20a3a4u: goto label_20a3a4;
        case 0x20a3a8u: goto label_20a3a8;
        case 0x20a3acu: goto label_20a3ac;
        case 0x20a3b0u: goto label_20a3b0;
        case 0x20a3b4u: goto label_20a3b4;
        case 0x20a3b8u: goto label_20a3b8;
        case 0x20a3bcu: goto label_20a3bc;
        case 0x20a3c0u: goto label_20a3c0;
        case 0x20a3c4u: goto label_20a3c4;
        case 0x20a3c8u: goto label_20a3c8;
        case 0x20a3ccu: goto label_20a3cc;
        case 0x20a3d0u: goto label_20a3d0;
        case 0x20a3d4u: goto label_20a3d4;
        case 0x20a3d8u: goto label_20a3d8;
        case 0x20a3dcu: goto label_20a3dc;
        case 0x20a3e0u: goto label_20a3e0;
        case 0x20a3e4u: goto label_20a3e4;
        case 0x20a3e8u: goto label_20a3e8;
        case 0x20a3ecu: goto label_20a3ec;
        case 0x20a3f0u: goto label_20a3f0;
        case 0x20a3f4u: goto label_20a3f4;
        case 0x20a3f8u: goto label_20a3f8;
        case 0x20a3fcu: goto label_20a3fc;
        case 0x20a400u: goto label_20a400;
        case 0x20a404u: goto label_20a404;
        case 0x20a408u: goto label_20a408;
        case 0x20a40cu: goto label_20a40c;
        case 0x20a410u: goto label_20a410;
        case 0x20a414u: goto label_20a414;
        case 0x20a418u: goto label_20a418;
        case 0x20a41cu: goto label_20a41c;
        case 0x20a420u: goto label_20a420;
        case 0x20a424u: goto label_20a424;
        case 0x20a428u: goto label_20a428;
        case 0x20a42cu: goto label_20a42c;
        case 0x20a430u: goto label_20a430;
        case 0x20a434u: goto label_20a434;
        case 0x20a438u: goto label_20a438;
        case 0x20a43cu: goto label_20a43c;
        case 0x20a440u: goto label_20a440;
        case 0x20a444u: goto label_20a444;
        case 0x20a448u: goto label_20a448;
        case 0x20a44cu: goto label_20a44c;
        case 0x20a450u: goto label_20a450;
        case 0x20a454u: goto label_20a454;
        case 0x20a458u: goto label_20a458;
        case 0x20a45cu: goto label_20a45c;
        case 0x20a460u: goto label_20a460;
        case 0x20a464u: goto label_20a464;
        case 0x20a468u: goto label_20a468;
        case 0x20a46cu: goto label_20a46c;
        case 0x20a470u: goto label_20a470;
        case 0x20a474u: goto label_20a474;
        case 0x20a478u: goto label_20a478;
        case 0x20a47cu: goto label_20a47c;
        case 0x20a480u: goto label_20a480;
        case 0x20a484u: goto label_20a484;
        case 0x20a488u: goto label_20a488;
        case 0x20a48cu: goto label_20a48c;
        case 0x20a490u: goto label_20a490;
        case 0x20a494u: goto label_20a494;
        case 0x20a498u: goto label_20a498;
        case 0x20a49cu: goto label_20a49c;
        case 0x20a4a0u: goto label_20a4a0;
        case 0x20a4a4u: goto label_20a4a4;
        case 0x20a4a8u: goto label_20a4a8;
        case 0x20a4acu: goto label_20a4ac;
        case 0x20a4b0u: goto label_20a4b0;
        case 0x20a4b4u: goto label_20a4b4;
        case 0x20a4b8u: goto label_20a4b8;
        case 0x20a4bcu: goto label_20a4bc;
        case 0x20a4c0u: goto label_20a4c0;
        case 0x20a4c4u: goto label_20a4c4;
        case 0x20a4c8u: goto label_20a4c8;
        case 0x20a4ccu: goto label_20a4cc;
        case 0x20a4d0u: goto label_20a4d0;
        case 0x20a4d4u: goto label_20a4d4;
        case 0x20a4d8u: goto label_20a4d8;
        case 0x20a4dcu: goto label_20a4dc;
        case 0x20a4e0u: goto label_20a4e0;
        case 0x20a4e4u: goto label_20a4e4;
        case 0x20a4e8u: goto label_20a4e8;
        case 0x20a4ecu: goto label_20a4ec;
        case 0x20a4f0u: goto label_20a4f0;
        case 0x20a4f4u: goto label_20a4f4;
        case 0x20a4f8u: goto label_20a4f8;
        case 0x20a4fcu: goto label_20a4fc;
        case 0x20a500u: goto label_20a500;
        case 0x20a504u: goto label_20a504;
        case 0x20a508u: goto label_20a508;
        case 0x20a50cu: goto label_20a50c;
        case 0x20a510u: goto label_20a510;
        case 0x20a514u: goto label_20a514;
        case 0x20a518u: goto label_20a518;
        case 0x20a51cu: goto label_20a51c;
        case 0x20a520u: goto label_20a520;
        case 0x20a524u: goto label_20a524;
        case 0x20a528u: goto label_20a528;
        case 0x20a52cu: goto label_20a52c;
        case 0x20a530u: goto label_20a530;
        case 0x20a534u: goto label_20a534;
        case 0x20a538u: goto label_20a538;
        case 0x20a53cu: goto label_20a53c;
        case 0x20a540u: goto label_20a540;
        case 0x20a544u: goto label_20a544;
        case 0x20a548u: goto label_20a548;
        case 0x20a54cu: goto label_20a54c;
        case 0x20a550u: goto label_20a550;
        case 0x20a554u: goto label_20a554;
        case 0x20a558u: goto label_20a558;
        case 0x20a55cu: goto label_20a55c;
        case 0x20a560u: goto label_20a560;
        case 0x20a564u: goto label_20a564;
        case 0x20a568u: goto label_20a568;
        case 0x20a56cu: goto label_20a56c;
        case 0x20a570u: goto label_20a570;
        case 0x20a574u: goto label_20a574;
        case 0x20a578u: goto label_20a578;
        case 0x20a57cu: goto label_20a57c;
        case 0x20a580u: goto label_20a580;
        case 0x20a584u: goto label_20a584;
        case 0x20a588u: goto label_20a588;
        case 0x20a58cu: goto label_20a58c;
        case 0x20a590u: goto label_20a590;
        case 0x20a594u: goto label_20a594;
        case 0x20a598u: goto label_20a598;
        case 0x20a59cu: goto label_20a59c;
        case 0x20a5a0u: goto label_20a5a0;
        case 0x20a5a4u: goto label_20a5a4;
        case 0x20a5a8u: goto label_20a5a8;
        case 0x20a5acu: goto label_20a5ac;
        case 0x20a5b0u: goto label_20a5b0;
        case 0x20a5b4u: goto label_20a5b4;
        case 0x20a5b8u: goto label_20a5b8;
        case 0x20a5bcu: goto label_20a5bc;
        case 0x20a5c0u: goto label_20a5c0;
        case 0x20a5c4u: goto label_20a5c4;
        case 0x20a5c8u: goto label_20a5c8;
        case 0x20a5ccu: goto label_20a5cc;
        case 0x20a5d0u: goto label_20a5d0;
        case 0x20a5d4u: goto label_20a5d4;
        case 0x20a5d8u: goto label_20a5d8;
        case 0x20a5dcu: goto label_20a5dc;
        case 0x20a5e0u: goto label_20a5e0;
        case 0x20a5e4u: goto label_20a5e4;
        case 0x20a5e8u: goto label_20a5e8;
        case 0x20a5ecu: goto label_20a5ec;
        case 0x20a5f0u: goto label_20a5f0;
        case 0x20a5f4u: goto label_20a5f4;
        case 0x20a5f8u: goto label_20a5f8;
        case 0x20a5fcu: goto label_20a5fc;
        case 0x20a600u: goto label_20a600;
        case 0x20a604u: goto label_20a604;
        case 0x20a608u: goto label_20a608;
        case 0x20a60cu: goto label_20a60c;
        case 0x20a610u: goto label_20a610;
        case 0x20a614u: goto label_20a614;
        case 0x20a618u: goto label_20a618;
        case 0x20a61cu: goto label_20a61c;
        case 0x20a620u: goto label_20a620;
        case 0x20a624u: goto label_20a624;
        case 0x20a628u: goto label_20a628;
        case 0x20a62cu: goto label_20a62c;
        case 0x20a630u: goto label_20a630;
        case 0x20a634u: goto label_20a634;
        case 0x20a638u: goto label_20a638;
        case 0x20a63cu: goto label_20a63c;
        case 0x20a640u: goto label_20a640;
        case 0x20a644u: goto label_20a644;
        case 0x20a648u: goto label_20a648;
        case 0x20a64cu: goto label_20a64c;
        case 0x20a650u: goto label_20a650;
        default: break;
    }

    ctx->pc = 0x209d10u;

label_209d10:
    // 0x209d10: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x209d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_209d14:
    // 0x209d14: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x209d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_209d18:
    // 0x209d18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x209d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_209d1c:
    // 0x209d1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x209d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_209d20:
    // 0x209d20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x209d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_209d24:
    // 0x209d24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x209d24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_209d28:
    // 0x209d28: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x209d28u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_209d2c:
    // 0x209d2c: 0x8c920020  lw          $s2, 0x20($a0)
    ctx->pc = 0x209d2cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
label_209d30:
    // 0x209d30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x209d30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_209d34:
    // 0x209d34: 0x8c860028  lw          $a2, 0x28($a0)
    ctx->pc = 0x209d34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_209d38:
    // 0x209d38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x209d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_209d3c:
    // 0x209d3c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x209d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_209d40:
    // 0x209d40: 0xc04e79c  jal         func_139E70
label_209d44:
    if (ctx->pc == 0x209D44u) {
        ctx->pc = 0x209D44u;
            // 0x209d44: 0x248496e0  addiu       $a0, $a0, -0x6920 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940384));
        ctx->pc = 0x209D48u;
        goto label_209d48;
    }
    ctx->pc = 0x209D40u;
    SET_GPR_U32(ctx, 31, 0x209D48u);
    ctx->pc = 0x209D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209D40u;
            // 0x209d44: 0x248496e0  addiu       $a0, $a0, -0x6920 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209D48u; }
        if (ctx->pc != 0x209D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209D48u; }
        if (ctx->pc != 0x209D48u) { return; }
    }
    ctx->pc = 0x209D48u;
label_209d48:
    // 0x209d48: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x209d48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_209d4c:
    // 0x209d4c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x209d4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_209d50:
    // 0x209d50: 0xc04e704  jal         func_139C10
label_209d54:
    if (ctx->pc == 0x209D54u) {
        ctx->pc = 0x209D54u;
            // 0x209d54: 0x248496e0  addiu       $a0, $a0, -0x6920 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940384));
        ctx->pc = 0x209D58u;
        goto label_209d58;
    }
    ctx->pc = 0x209D50u;
    SET_GPR_U32(ctx, 31, 0x209D58u);
    ctx->pc = 0x209D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209D50u;
            // 0x209d54: 0x248496e0  addiu       $a0, $a0, -0x6920 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139C10u;
    if (runtime->hasFunction(0x139C10u)) {
        auto targetFn = runtime->lookupFunction(0x139C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209D58u; }
        if (ctx->pc != 0x209D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stAlloc64__9mgCMemoryFi_0x139c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209D58u; }
        if (ctx->pc != 0x209D58u) { return; }
    }
    ctx->pc = 0x209D58u;
label_209d58:
    // 0x209d58: 0x3c1001ed  lui         $s0, 0x1ED
    ctx->pc = 0x209d58u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)493 << 16));
label_209d5c:
    // 0x209d5c: 0x240500f5  addiu       $a1, $zero, 0xF5
    ctx->pc = 0x209d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 245));
label_209d60:
    // 0x209d60: 0x261096e0  addiu       $s0, $s0, -0x6920
    ctx->pc = 0x209d60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294940384));
label_209d64:
    // 0x209d64: 0xaf8090d8  sw          $zero, -0x6F28($gp)
    ctx->pc = 0x209d64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938840), GPR_U32(ctx, 0));
label_209d68:
    // 0x209d68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x209d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_209d6c:
    // 0x209d6c: 0xc04e748  jal         func_139D20
label_209d70:
    if (ctx->pc == 0x209D70u) {
        ctx->pc = 0x209D70u;
            // 0x209d70: 0xaf8090d4  sw          $zero, -0x6F2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938836), GPR_U32(ctx, 0));
        ctx->pc = 0x209D74u;
        goto label_209d74;
    }
    ctx->pc = 0x209D6Cu;
    SET_GPR_U32(ctx, 31, 0x209D74u);
    ctx->pc = 0x209D70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209D6Cu;
            // 0x209d70: 0xaf8090d4  sw          $zero, -0x6F2C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938836), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209D74u; }
        if (ctx->pc != 0x209D74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209D74u; }
        if (ctx->pc != 0x209D74u) { return; }
    }
    ctx->pc = 0x209D74u;
label_209d74:
    // 0x209d74: 0x24040f30  addiu       $a0, $zero, 0xF30
    ctx->pc = 0x209d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3888));
label_209d78:
    // 0x209d78: 0xc04e638  jal         func_1398E0
label_209d7c:
    if (ctx->pc == 0x209D7Cu) {
        ctx->pc = 0x209D7Cu;
            // 0x209d7c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x209D80u;
        goto label_209d80;
    }
    ctx->pc = 0x209D78u;
    SET_GPR_U32(ctx, 31, 0x209D80u);
    ctx->pc = 0x209D7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209D78u;
            // 0x209d7c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209D80u; }
        if (ctx->pc != 0x209D80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209D80u; }
        if (ctx->pc != 0x209D80u) { return; }
    }
    ctx->pc = 0x209D80u;
label_209d80:
    // 0x209d80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_209d84:
    if (ctx->pc == 0x209D84u) {
        ctx->pc = 0x209D84u;
            // 0x209d84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x209D88u;
        goto label_209d88;
    }
    ctx->pc = 0x209D80u;
    {
        const bool branch_taken_0x209d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209D80u;
            // 0x209d84: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209d80) {
            ctx->pc = 0x209D94u;
            goto label_209d94;
        }
    }
    ctx->pc = 0x209D88u;
label_209d88:
    // 0x209d88: 0xc0801bc  jal         func_2006F0
label_209d8c:
    if (ctx->pc == 0x209D8Cu) {
        ctx->pc = 0x209D8Cu;
            // 0x209d8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x209D90u;
        goto label_209d90;
    }
    ctx->pc = 0x209D88u;
    SET_GPR_U32(ctx, 31, 0x209D90u);
    ctx->pc = 0x209D8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209D88u;
            // 0x209d8c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2006F0u;
    if (runtime->hasFunction(0x2006F0u)) {
        auto targetFn = runtime->lookupFunction(0x2006F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209D90u; }
        if (ctx->pc != 0x209D90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11CMenuInventFv_0x2006f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209D90u; }
        if (ctx->pc != 0x209D90u) { return; }
    }
    ctx->pc = 0x209D90u;
label_209d90:
    // 0x209d90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x209d90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_209d94:
    // 0x209d94: 0xaf829178  sw          $v0, -0x6E88($gp)
    ctx->pc = 0x209d94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939000), GPR_U32(ctx, 2));
label_209d98:
    // 0x209d98: 0xc08dc6c  jal         func_2371B0
label_209d9c:
    if (ctx->pc == 0x209D9Cu) {
        ctx->pc = 0x209D9Cu;
            // 0x209d9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x209DA0u;
        goto label_209da0;
    }
    ctx->pc = 0x209D98u;
    SET_GPR_U32(ctx, 31, 0x209DA0u);
    ctx->pc = 0x209D9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209D98u;
            // 0x209d9c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2371B0u;
    if (runtime->hasFunction(0x2371B0u)) {
        auto targetFn = runtime->lookupFunction(0x2371B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209DA0u; }
        if (ctx->pc != 0x209DA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetTexBlock__14CBaseMenuClassFPi_0x2371b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209DA0u; }
        if (ctx->pc != 0x209DA0u) { return; }
    }
    ctx->pc = 0x209DA0u;
label_209da0:
    // 0x209da0: 0xc07f84c  jal         func_1FE130
label_209da4:
    if (ctx->pc == 0x209DA4u) {
        ctx->pc = 0x209DA8u;
        goto label_209da8;
    }
    ctx->pc = 0x209DA0u;
    SET_GPR_U32(ctx, 31, 0x209DA8u);
    ctx->pc = 0x1FE130u;
    if (runtime->hasFunction(0x1FE130u)) {
        auto targetFn = runtime->lookupFunction(0x1FE130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209DA8u; }
        if (ctx->pc != 0x209DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetInventUserDataPtr__Fv_0x1fe130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209DA8u; }
        if (ctx->pc != 0x209DA8u) { return; }
    }
    ctx->pc = 0x209DA8u;
label_209da8:
    // 0x209da8: 0xaf8290d4  sw          $v0, -0x6F2C($gp)
    ctx->pc = 0x209da8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938836), GPR_U32(ctx, 2));
label_209dac:
    // 0x209dac: 0x27829190  addiu       $v0, $gp, -0x6E70
    ctx->pc = 0x209dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294939024));
label_209db0:
    // 0x209db0: 0xaf8290dc  sw          $v0, -0x6F24($gp)
    ctx->pc = 0x209db0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938844), GPR_U32(ctx, 2));
label_209db4:
    // 0x209db4: 0x8f8390dc  lw          $v1, -0x6F24($gp)
    ctx->pc = 0x209db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938844)));
label_209db8:
    // 0x209db8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x209db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_209dbc:
    // 0x209dbc: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x209dbcu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
label_209dc0:
    // 0x209dc0: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x209dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_209dc4:
    // 0x209dc4: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x209dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_209dc8:
    // 0x209dc8: 0x84630050  lh          $v1, 0x50($v1)
    ctx->pc = 0x209dc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_209dcc:
    // 0x209dcc: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_209dd0:
    if (ctx->pc == 0x209DD0u) {
        ctx->pc = 0x209DD0u;
            // 0x209dd0: 0x3c050035  lui         $a1, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
        ctx->pc = 0x209DD4u;
        goto label_209dd4;
    }
    ctx->pc = 0x209DCCu;
    {
        const bool branch_taken_0x209dcc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x209DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209DCCu;
            // 0x209dd0: 0x3c050035  lui         $a1, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209dcc) {
            ctx->pc = 0x209DE0u;
            goto label_209de0;
        }
    }
    ctx->pc = 0x209DD4u;
label_209dd4:
    // 0x209dd4: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x209dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_209dd8:
    // 0x209dd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x209dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_209ddc:
    // 0x209ddc: 0xa4430110  sh          $v1, 0x110($v0)
    ctx->pc = 0x209ddcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 272), (uint16_t)GPR_U32(ctx, 3));
label_209de0:
    // 0x209de0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x209de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_209de4:
    // 0x209de4: 0x24a5f0d0  addiu       $a1, $a1, -0xF30
    ctx->pc = 0x209de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963408));
label_209de8:
    // 0x209de8: 0xc0abf24  jal         func_2AFC90
label_209dec:
    if (ctx->pc == 0x209DECu) {
        ctx->pc = 0x209DECu;
            // 0x209dec: 0xaf8090e0  sw          $zero, -0x6F20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938848), GPR_U32(ctx, 0));
        ctx->pc = 0x209DF0u;
        goto label_209df0;
    }
    ctx->pc = 0x209DE8u;
    SET_GPR_U32(ctx, 31, 0x209DF0u);
    ctx->pc = 0x209DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209DE8u;
            // 0x209dec: 0xaf8090e0  sw          $zero, -0x6F20($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938848), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AFC90u;
    if (runtime->hasFunction(0x2AFC90u)) {
        auto targetFn = runtime->lookupFunction(0x2AFC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209DF0u; }
        if (ctx->pc != 0x209DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuBGReadInfo2Malloc__FP9mgCMemoryPi_0x2afc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209DF0u; }
        if (ctx->pc != 0x209DF0u) { return; }
    }
    ctx->pc = 0x209DF0u;
label_209df0:
    // 0x209df0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x209df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_209df4:
    // 0x209df4: 0xc04e748  jal         func_139D20
label_209df8:
    if (ctx->pc == 0x209DF8u) {
        ctx->pc = 0x209DF8u;
            // 0x209df8: 0x24050105  addiu       $a1, $zero, 0x105 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
        ctx->pc = 0x209DFCu;
        goto label_209dfc;
    }
    ctx->pc = 0x209DF4u;
    SET_GPR_U32(ctx, 31, 0x209DFCu);
    ctx->pc = 0x209DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209DF4u;
            // 0x209df8: 0x24050105  addiu       $a1, $zero, 0x105 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209DFCu; }
        if (ctx->pc != 0x209DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209DFCu; }
        if (ctx->pc != 0x209DFCu) { return; }
    }
    ctx->pc = 0x209DFCu;
label_209dfc:
    // 0x209dfc: 0x24041030  addiu       $a0, $zero, 0x1030
    ctx->pc = 0x209dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4144));
label_209e00:
    // 0x209e00: 0xc04e638  jal         func_1398E0
label_209e04:
    if (ctx->pc == 0x209E04u) {
        ctx->pc = 0x209E04u;
            // 0x209e04: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x209E08u;
        goto label_209e08;
    }
    ctx->pc = 0x209E00u;
    SET_GPR_U32(ctx, 31, 0x209E08u);
    ctx->pc = 0x209E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209E00u;
            // 0x209e04: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209E08u; }
        if (ctx->pc != 0x209E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209E08u; }
        if (ctx->pc != 0x209E08u) { return; }
    }
    ctx->pc = 0x209E08u;
label_209e08:
    // 0x209e08: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_209e0c:
    if (ctx->pc == 0x209E0Cu) {
        ctx->pc = 0x209E0Cu;
            // 0x209e0c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x209E10u;
        goto label_209e10;
    }
    ctx->pc = 0x209E08u;
    {
        const bool branch_taken_0x209e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209E0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209E08u;
            // 0x209e0c: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209e08) {
            ctx->pc = 0x209EB0u;
            goto label_209eb0;
        }
    }
    ctx->pc = 0x209E10u;
label_209e10:
    // 0x209e10: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x209e10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_209e14:
    // 0x209e14: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x209e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_209e18:
    // 0x209e18: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x209e18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_209e1c:
    // 0x209e1c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x209e1cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_209e20:
    // 0x209e20: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x209e20u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_209e24:
    // 0x209e24: 0x320f809  jalr        $t9
label_209e28:
    if (ctx->pc == 0x209E28u) {
        ctx->pc = 0x209E28u;
            // 0x209e28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x209E2Cu;
        goto label_209e2c;
    }
    ctx->pc = 0x209E24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x209E2Cu);
        ctx->pc = 0x209E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209E24u;
            // 0x209e28: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x209E2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x209E2Cu; }
            if (ctx->pc != 0x209E2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x209E2Cu;
label_209e2c:
    // 0x209e2c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x209e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_209e30:
    // 0x209e30: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x209e30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_209e34:
    // 0x209e34: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x209e34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_209e38:
    // 0x209e38: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x209e38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_209e3c:
    // 0x209e3c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x209e3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_209e40:
    // 0x209e40: 0x320f809  jalr        $t9
label_209e44:
    if (ctx->pc == 0x209E44u) {
        ctx->pc = 0x209E44u;
            // 0x209e44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x209E48u;
        goto label_209e48;
    }
    ctx->pc = 0x209E40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x209E48u);
        ctx->pc = 0x209E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209E40u;
            // 0x209e44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x209E48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x209E48u; }
            if (ctx->pc != 0x209E48u) { return; }
        }
        }
    }
    ctx->pc = 0x209E48u;
label_209e48:
    // 0x209e48: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x209e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_209e4c:
    // 0x209e4c: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x209e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_209e50:
    // 0x209e50: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x209e50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_209e54:
    // 0x209e54: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x209e54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_209e58:
    // 0x209e58: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x209e58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_209e5c:
    // 0x209e5c: 0x320f809  jalr        $t9
label_209e60:
    if (ctx->pc == 0x209E60u) {
        ctx->pc = 0x209E60u;
            // 0x209e60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x209E64u;
        goto label_209e64;
    }
    ctx->pc = 0x209E5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x209E64u);
        ctx->pc = 0x209E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209E5Cu;
            // 0x209e60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x209E64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x209E64u; }
            if (ctx->pc != 0x209E64u) { return; }
        }
        }
    }
    ctx->pc = 0x209E64u;
label_209e64:
    // 0x209e64: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x209e64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_209e68:
    // 0x209e68: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x209e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_209e6c:
    // 0x209e6c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x209e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_209e70:
    // 0x209e70: 0xae20035c  sw          $zero, 0x35C($s1)
    ctx->pc = 0x209e70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 860), GPR_U32(ctx, 0));
label_209e74:
    // 0x209e74: 0xae200364  sw          $zero, 0x364($s1)
    ctx->pc = 0x209e74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 868), GPR_U32(ctx, 0));
label_209e78:
    // 0x209e78: 0xae200360  sw          $zero, 0x360($s1)
    ctx->pc = 0x209e78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 864), GPR_U32(ctx, 0));
label_209e7c:
    // 0x209e7c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x209e7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_209e80:
    // 0x209e80: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x209e80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_209e84:
    // 0x209e84: 0x320f809  jalr        $t9
label_209e88:
    if (ctx->pc == 0x209E88u) {
        ctx->pc = 0x209E88u;
            // 0x209e88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x209E8Cu;
        goto label_209e8c;
    }
    ctx->pc = 0x209E84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x209E8Cu);
        ctx->pc = 0x209E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209E84u;
            // 0x209e88: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x209E8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x209E8Cu; }
            if (ctx->pc != 0x209E8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x209E8Cu;
label_209e8c:
    // 0x209e8c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x209e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_209e90:
    // 0x209e90: 0x262406bc  addiu       $a0, $s1, 0x6BC
    ctx->pc = 0x209e90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1724));
label_209e94:
    // 0x209e94: 0x244256f0  addiu       $v0, $v0, 0x56F0
    ctx->pc = 0x209e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22256));
label_209e98:
    // 0x209e98: 0xc061b34  jal         func_186CD0
label_209e9c:
    if (ctx->pc == 0x209E9Cu) {
        ctx->pc = 0x209E9Cu;
            // 0x209e9c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x209EA0u;
        goto label_209ea0;
    }
    ctx->pc = 0x209E98u;
    SET_GPR_U32(ctx, 31, 0x209EA0u);
    ctx->pc = 0x209E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209E98u;
            // 0x209e9c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186CD0u;
    if (runtime->hasFunction(0x186CD0u)) {
        auto targetFn = runtime->lookupFunction(0x186CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209EA0u; }
        if (ctx->pc != 0x209EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10CRunScriptFv_0x186cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209EA0u; }
        if (ctx->pc != 0x209EA0u) { return; }
    }
    ctx->pc = 0x209EA0u;
label_209ea0:
    // 0x209ea0: 0x26240910  addiu       $a0, $s1, 0x910
    ctx->pc = 0x209ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2320));
label_209ea4:
    // 0x209ea4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x209ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209ea8:
    // 0x209ea8: 0xc049c86  jal         func_127218
label_209eac:
    if (ctx->pc == 0x209EACu) {
        ctx->pc = 0x209EACu;
            // 0x209eac: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->pc = 0x209EB0u;
        goto label_209eb0;
    }
    ctx->pc = 0x209EA8u;
    SET_GPR_U32(ctx, 31, 0x209EB0u);
    ctx->pc = 0x209EACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209EA8u;
            // 0x209eac: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209EB0u; }
        if (ctx->pc != 0x209EB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209EB0u; }
        if (ctx->pc != 0x209EB0u) { return; }
    }
    ctx->pc = 0x209EB0u;
label_209eb0:
    // 0x209eb0: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x209eb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_209eb4:
    // 0x209eb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x209eb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_209eb8:
    // 0x209eb8: 0xac31caa0  sw          $s1, -0x3560($at)
    ctx->pc = 0x209eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953632), GPR_U32(ctx, 17));
label_209ebc:
    // 0x209ebc: 0x24050105  addiu       $a1, $zero, 0x105
    ctx->pc = 0x209ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
label_209ec0:
    // 0x209ec0: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x209ec0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_209ec4:
    // 0x209ec4: 0xac20caa4  sw          $zero, -0x355C($at)
    ctx->pc = 0x209ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953636), GPR_U32(ctx, 0));
label_209ec8:
    // 0x209ec8: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x209ec8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_209ecc:
    // 0x209ecc: 0xc04e748  jal         func_139D20
label_209ed0:
    if (ctx->pc == 0x209ED0u) {
        ctx->pc = 0x209ED0u;
            // 0x209ed0: 0xac20caa8  sw          $zero, -0x3558($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294953640), GPR_U32(ctx, 0));
        ctx->pc = 0x209ED4u;
        goto label_209ed4;
    }
    ctx->pc = 0x209ECCu;
    SET_GPR_U32(ctx, 31, 0x209ED4u);
    ctx->pc = 0x209ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209ECCu;
            // 0x209ed0: 0xac20caa8  sw          $zero, -0x3558($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294953640), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209ED4u; }
        if (ctx->pc != 0x209ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209ED4u; }
        if (ctx->pc != 0x209ED4u) { return; }
    }
    ctx->pc = 0x209ED4u;
label_209ed4:
    // 0x209ed4: 0x24041030  addiu       $a0, $zero, 0x1030
    ctx->pc = 0x209ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4144));
label_209ed8:
    // 0x209ed8: 0xc04e638  jal         func_1398E0
label_209edc:
    if (ctx->pc == 0x209EDCu) {
        ctx->pc = 0x209EDCu;
            // 0x209edc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x209EE0u;
        goto label_209ee0;
    }
    ctx->pc = 0x209ED8u;
    SET_GPR_U32(ctx, 31, 0x209EE0u);
    ctx->pc = 0x209EDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209ED8u;
            // 0x209edc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209EE0u; }
        if (ctx->pc != 0x209EE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209EE0u; }
        if (ctx->pc != 0x209EE0u) { return; }
    }
    ctx->pc = 0x209EE0u;
label_209ee0:
    // 0x209ee0: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_209ee4:
    if (ctx->pc == 0x209EE4u) {
        ctx->pc = 0x209EE4u;
            // 0x209ee4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x209EE8u;
        goto label_209ee8;
    }
    ctx->pc = 0x209EE0u;
    {
        const bool branch_taken_0x209ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209EE0u;
            // 0x209ee4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209ee0) {
            ctx->pc = 0x209F88u;
            goto label_209f88;
        }
    }
    ctx->pc = 0x209EE8u;
label_209ee8:
    // 0x209ee8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x209ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_209eec:
    // 0x209eec: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x209eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_209ef0:
    // 0x209ef0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x209ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_209ef4:
    // 0x209ef4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x209ef4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_209ef8:
    // 0x209ef8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x209ef8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_209efc:
    // 0x209efc: 0x320f809  jalr        $t9
label_209f00:
    if (ctx->pc == 0x209F00u) {
        ctx->pc = 0x209F00u;
            // 0x209f00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x209F04u;
        goto label_209f04;
    }
    ctx->pc = 0x209EFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x209F04u);
        ctx->pc = 0x209F00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209EFCu;
            // 0x209f00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x209F04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x209F04u; }
            if (ctx->pc != 0x209F04u) { return; }
        }
        }
    }
    ctx->pc = 0x209F04u;
label_209f04:
    // 0x209f04: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x209f04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_209f08:
    // 0x209f08: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x209f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_209f0c:
    // 0x209f0c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x209f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_209f10:
    // 0x209f10: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x209f10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_209f14:
    // 0x209f14: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x209f14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_209f18:
    // 0x209f18: 0x320f809  jalr        $t9
label_209f1c:
    if (ctx->pc == 0x209F1Cu) {
        ctx->pc = 0x209F1Cu;
            // 0x209f1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x209F20u;
        goto label_209f20;
    }
    ctx->pc = 0x209F18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x209F20u);
        ctx->pc = 0x209F1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209F18u;
            // 0x209f1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x209F20u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x209F20u; }
            if (ctx->pc != 0x209F20u) { return; }
        }
        }
    }
    ctx->pc = 0x209F20u;
label_209f20:
    // 0x209f20: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x209f20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_209f24:
    // 0x209f24: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x209f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_209f28:
    // 0x209f28: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x209f28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_209f2c:
    // 0x209f2c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x209f2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_209f30:
    // 0x209f30: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x209f30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_209f34:
    // 0x209f34: 0x320f809  jalr        $t9
label_209f38:
    if (ctx->pc == 0x209F38u) {
        ctx->pc = 0x209F38u;
            // 0x209f38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x209F3Cu;
        goto label_209f3c;
    }
    ctx->pc = 0x209F34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x209F3Cu);
        ctx->pc = 0x209F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209F34u;
            // 0x209f38: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x209F3Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x209F3Cu; }
            if (ctx->pc != 0x209F3Cu) { return; }
        }
        }
    }
    ctx->pc = 0x209F3Cu;
label_209f3c:
    // 0x209f3c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x209f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_209f40:
    // 0x209f40: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x209f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_209f44:
    // 0x209f44: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x209f44u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_209f48:
    // 0x209f48: 0xae20035c  sw          $zero, 0x35C($s1)
    ctx->pc = 0x209f48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 860), GPR_U32(ctx, 0));
label_209f4c:
    // 0x209f4c: 0xae200364  sw          $zero, 0x364($s1)
    ctx->pc = 0x209f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 868), GPR_U32(ctx, 0));
label_209f50:
    // 0x209f50: 0xae200360  sw          $zero, 0x360($s1)
    ctx->pc = 0x209f50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 864), GPR_U32(ctx, 0));
label_209f54:
    // 0x209f54: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x209f54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_209f58:
    // 0x209f58: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x209f58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_209f5c:
    // 0x209f5c: 0x320f809  jalr        $t9
label_209f60:
    if (ctx->pc == 0x209F60u) {
        ctx->pc = 0x209F60u;
            // 0x209f60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x209F64u;
        goto label_209f64;
    }
    ctx->pc = 0x209F5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x209F64u);
        ctx->pc = 0x209F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209F5Cu;
            // 0x209f60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x209F64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x209F64u; }
            if (ctx->pc != 0x209F64u) { return; }
        }
        }
    }
    ctx->pc = 0x209F64u;
label_209f64:
    // 0x209f64: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x209f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_209f68:
    // 0x209f68: 0x262406bc  addiu       $a0, $s1, 0x6BC
    ctx->pc = 0x209f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1724));
label_209f6c:
    // 0x209f6c: 0x244256f0  addiu       $v0, $v0, 0x56F0
    ctx->pc = 0x209f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22256));
label_209f70:
    // 0x209f70: 0xc061b34  jal         func_186CD0
label_209f74:
    if (ctx->pc == 0x209F74u) {
        ctx->pc = 0x209F74u;
            // 0x209f74: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x209F78u;
        goto label_209f78;
    }
    ctx->pc = 0x209F70u;
    SET_GPR_U32(ctx, 31, 0x209F78u);
    ctx->pc = 0x209F74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209F70u;
            // 0x209f74: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186CD0u;
    if (runtime->hasFunction(0x186CD0u)) {
        auto targetFn = runtime->lookupFunction(0x186CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209F78u; }
        if (ctx->pc != 0x209F78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10CRunScriptFv_0x186cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209F78u; }
        if (ctx->pc != 0x209F78u) { return; }
    }
    ctx->pc = 0x209F78u;
label_209f78:
    // 0x209f78: 0x26240910  addiu       $a0, $s1, 0x910
    ctx->pc = 0x209f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2320));
label_209f7c:
    // 0x209f7c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x209f7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209f80:
    // 0x209f80: 0xc049c86  jal         func_127218
label_209f84:
    if (ctx->pc == 0x209F84u) {
        ctx->pc = 0x209F84u;
            // 0x209f84: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->pc = 0x209F88u;
        goto label_209f88;
    }
    ctx->pc = 0x209F80u;
    SET_GPR_U32(ctx, 31, 0x209F88u);
    ctx->pc = 0x209F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209F80u;
            // 0x209f84: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209F88u; }
        if (ctx->pc != 0x209F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209F88u; }
        if (ctx->pc != 0x209F88u) { return; }
    }
    ctx->pc = 0x209F88u;
label_209f88:
    // 0x209f88: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x209f88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_209f8c:
    // 0x209f8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x209f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_209f90:
    // 0x209f90: 0x24050105  addiu       $a1, $zero, 0x105
    ctx->pc = 0x209f90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
label_209f94:
    // 0x209f94: 0xc04e748  jal         func_139D20
label_209f98:
    if (ctx->pc == 0x209F98u) {
        ctx->pc = 0x209F98u;
            // 0x209f98: 0xac31caac  sw          $s1, -0x3554($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294953644), GPR_U32(ctx, 17));
        ctx->pc = 0x209F9Cu;
        goto label_209f9c;
    }
    ctx->pc = 0x209F94u;
    SET_GPR_U32(ctx, 31, 0x209F9Cu);
    ctx->pc = 0x209F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209F94u;
            // 0x209f98: 0xac31caac  sw          $s1, -0x3554($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294953644), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209F9Cu; }
        if (ctx->pc != 0x209F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209F9Cu; }
        if (ctx->pc != 0x209F9Cu) { return; }
    }
    ctx->pc = 0x209F9Cu;
label_209f9c:
    // 0x209f9c: 0x24041030  addiu       $a0, $zero, 0x1030
    ctx->pc = 0x209f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4144));
label_209fa0:
    // 0x209fa0: 0xc04e638  jal         func_1398E0
label_209fa4:
    if (ctx->pc == 0x209FA4u) {
        ctx->pc = 0x209FA4u;
            // 0x209fa4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x209FA8u;
        goto label_209fa8;
    }
    ctx->pc = 0x209FA0u;
    SET_GPR_U32(ctx, 31, 0x209FA8u);
    ctx->pc = 0x209FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x209FA0u;
            // 0x209fa4: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209FA8u; }
        if (ctx->pc != 0x209FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x209FA8u; }
        if (ctx->pc != 0x209FA8u) { return; }
    }
    ctx->pc = 0x209FA8u;
label_209fa8:
    // 0x209fa8: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_209fac:
    if (ctx->pc == 0x209FACu) {
        ctx->pc = 0x209FACu;
            // 0x209fac: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x209FB0u;
        goto label_209fb0;
    }
    ctx->pc = 0x209FA8u;
    {
        const bool branch_taken_0x209fa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x209FACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209FA8u;
            // 0x209fac: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209fa8) {
            ctx->pc = 0x20A050u;
            goto label_20a050;
        }
    }
    ctx->pc = 0x209FB0u;
label_209fb0:
    // 0x209fb0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x209fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_209fb4:
    // 0x209fb4: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x209fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_209fb8:
    // 0x209fb8: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x209fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_209fbc:
    // 0x209fbc: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x209fbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_209fc0:
    // 0x209fc0: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x209fc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_209fc4:
    // 0x209fc4: 0x320f809  jalr        $t9
label_209fc8:
    if (ctx->pc == 0x209FC8u) {
        ctx->pc = 0x209FC8u;
            // 0x209fc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x209FCCu;
        goto label_209fcc;
    }
    ctx->pc = 0x209FC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x209FCCu);
        ctx->pc = 0x209FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209FC4u;
            // 0x209fc8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x209FCCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x209FCCu; }
            if (ctx->pc != 0x209FCCu) { return; }
        }
        }
    }
    ctx->pc = 0x209FCCu;
label_209fcc:
    // 0x209fcc: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x209fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_209fd0:
    // 0x209fd0: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x209fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_209fd4:
    // 0x209fd4: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x209fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_209fd8:
    // 0x209fd8: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x209fd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_209fdc:
    // 0x209fdc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x209fdcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_209fe0:
    // 0x209fe0: 0x320f809  jalr        $t9
label_209fe4:
    if (ctx->pc == 0x209FE4u) {
        ctx->pc = 0x209FE4u;
            // 0x209fe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x209FE8u;
        goto label_209fe8;
    }
    ctx->pc = 0x209FE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x209FE8u);
        ctx->pc = 0x209FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209FE0u;
            // 0x209fe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x209FE8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x209FE8u; }
            if (ctx->pc != 0x209FE8u) { return; }
        }
        }
    }
    ctx->pc = 0x209FE8u;
label_209fe8:
    // 0x209fe8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x209fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_209fec:
    // 0x209fec: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x209fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_209ff0:
    // 0x209ff0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x209ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_209ff4:
    // 0x209ff4: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x209ff4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_209ff8:
    // 0x209ff8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x209ff8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_209ffc:
    // 0x209ffc: 0x320f809  jalr        $t9
label_20a000:
    if (ctx->pc == 0x20A000u) {
        ctx->pc = 0x20A000u;
            // 0x20a000: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20A004u;
        goto label_20a004;
    }
    ctx->pc = 0x209FFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20A004u);
        ctx->pc = 0x20A000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209FFCu;
            // 0x20a000: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20A004u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20A004u; }
            if (ctx->pc != 0x20A004u) { return; }
        }
        }
    }
    ctx->pc = 0x20A004u;
label_20a004:
    // 0x20a004: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x20a004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_20a008:
    // 0x20a008: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x20a008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_20a00c:
    // 0x20a00c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x20a00cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_20a010:
    // 0x20a010: 0xae20035c  sw          $zero, 0x35C($s1)
    ctx->pc = 0x20a010u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 860), GPR_U32(ctx, 0));
label_20a014:
    // 0x20a014: 0xae200364  sw          $zero, 0x364($s1)
    ctx->pc = 0x20a014u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 868), GPR_U32(ctx, 0));
label_20a018:
    // 0x20a018: 0xae200360  sw          $zero, 0x360($s1)
    ctx->pc = 0x20a018u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 864), GPR_U32(ctx, 0));
label_20a01c:
    // 0x20a01c: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x20a01cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_20a020:
    // 0x20a020: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x20a020u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_20a024:
    // 0x20a024: 0x320f809  jalr        $t9
label_20a028:
    if (ctx->pc == 0x20A028u) {
        ctx->pc = 0x20A028u;
            // 0x20a028: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20A02Cu;
        goto label_20a02c;
    }
    ctx->pc = 0x20A024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20A02Cu);
        ctx->pc = 0x20A028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A024u;
            // 0x20a028: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20A02Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20A02Cu; }
            if (ctx->pc != 0x20A02Cu) { return; }
        }
        }
    }
    ctx->pc = 0x20A02Cu;
label_20a02c:
    // 0x20a02c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x20a02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_20a030:
    // 0x20a030: 0x262406bc  addiu       $a0, $s1, 0x6BC
    ctx->pc = 0x20a030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1724));
label_20a034:
    // 0x20a034: 0x244256f0  addiu       $v0, $v0, 0x56F0
    ctx->pc = 0x20a034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22256));
label_20a038:
    // 0x20a038: 0xc061b34  jal         func_186CD0
label_20a03c:
    if (ctx->pc == 0x20A03Cu) {
        ctx->pc = 0x20A03Cu;
            // 0x20a03c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x20A040u;
        goto label_20a040;
    }
    ctx->pc = 0x20A038u;
    SET_GPR_U32(ctx, 31, 0x20A040u);
    ctx->pc = 0x20A03Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A038u;
            // 0x20a03c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186CD0u;
    if (runtime->hasFunction(0x186CD0u)) {
        auto targetFn = runtime->lookupFunction(0x186CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A040u; }
        if (ctx->pc != 0x20A040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10CRunScriptFv_0x186cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A040u; }
        if (ctx->pc != 0x20A040u) { return; }
    }
    ctx->pc = 0x20A040u;
label_20a040:
    // 0x20a040: 0x26240910  addiu       $a0, $s1, 0x910
    ctx->pc = 0x20a040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2320));
label_20a044:
    // 0x20a044: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20a044u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a048:
    // 0x20a048: 0xc049c86  jal         func_127218
label_20a04c:
    if (ctx->pc == 0x20A04Cu) {
        ctx->pc = 0x20A04Cu;
            // 0x20a04c: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->pc = 0x20A050u;
        goto label_20a050;
    }
    ctx->pc = 0x20A048u;
    SET_GPR_U32(ctx, 31, 0x20A050u);
    ctx->pc = 0x20A04Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A048u;
            // 0x20a04c: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A050u; }
        if (ctx->pc != 0x20A050u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A050u; }
        if (ctx->pc != 0x20A050u) { return; }
    }
    ctx->pc = 0x20A050u;
label_20a050:
    // 0x20a050: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x20a050u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_20a054:
    // 0x20a054: 0xac31cab0  sw          $s1, -0x3550($at)
    ctx->pc = 0x20a054u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953648), GPR_U32(ctx, 17));
label_20a058:
    // 0x20a058: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x20a058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_20a05c:
    // 0x20a05c: 0xac20cab4  sw          $zero, -0x354C($at)
    ctx->pc = 0x20a05cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953652), GPR_U32(ctx, 0));
label_20a060:
    // 0x20a060: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x20a060u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_20a064:
    // 0x20a064: 0x8c24caa0  lw          $a0, -0x3560($at)
    ctx->pc = 0x20a064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953632)));
label_20a068:
    // 0x20a068: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x20a068u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20a06c:
    // 0x20a06c: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x20a06cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_20a070:
    // 0x20a070: 0x320f809  jalr        $t9
label_20a074:
    if (ctx->pc == 0x20A074u) {
        ctx->pc = 0x20A074u;
            // 0x20a074: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20A078u;
        goto label_20a078;
    }
    ctx->pc = 0x20A070u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20A078u);
        ctx->pc = 0x20A074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A070u;
            // 0x20a074: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20A078u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20A078u; }
            if (ctx->pc != 0x20A078u) { return; }
        }
        }
    }
    ctx->pc = 0x20A078u;
label_20a078:
    // 0x20a078: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x20a078u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_20a07c:
    // 0x20a07c: 0x8c24caac  lw          $a0, -0x3554($at)
    ctx->pc = 0x20a07cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953644)));
label_20a080:
    // 0x20a080: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x20a080u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20a084:
    // 0x20a084: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x20a084u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_20a088:
    // 0x20a088: 0x320f809  jalr        $t9
label_20a08c:
    if (ctx->pc == 0x20A08Cu) {
        ctx->pc = 0x20A08Cu;
            // 0x20a08c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20A090u;
        goto label_20a090;
    }
    ctx->pc = 0x20A088u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20A090u);
        ctx->pc = 0x20A08Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A088u;
            // 0x20a08c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20A090u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20A090u; }
            if (ctx->pc != 0x20A090u) { return; }
        }
        }
    }
    ctx->pc = 0x20A090u;
label_20a090:
    // 0x20a090: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x20a090u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_20a094:
    // 0x20a094: 0x8c24cab0  lw          $a0, -0x3550($at)
    ctx->pc = 0x20a094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953648)));
label_20a098:
    // 0x20a098: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x20a098u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20a09c:
    // 0x20a09c: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x20a09cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_20a0a0:
    // 0x20a0a0: 0x320f809  jalr        $t9
label_20a0a4:
    if (ctx->pc == 0x20A0A4u) {
        ctx->pc = 0x20A0A4u;
            // 0x20a0a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20A0A8u;
        goto label_20a0a8;
    }
    ctx->pc = 0x20A0A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20A0A8u);
        ctx->pc = 0x20A0A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A0A0u;
            // 0x20a0a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20A0A8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20A0A8u; }
            if (ctx->pc != 0x20A0A8u) { return; }
        }
        }
    }
    ctx->pc = 0x20A0A8u;
label_20a0a8:
    // 0x20a0a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20a0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20a0ac:
    // 0x20a0ac: 0xc04e748  jal         func_139D20
label_20a0b0:
    if (ctx->pc == 0x20A0B0u) {
        ctx->pc = 0x20A0B0u;
            // 0x20a0b0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x20A0B4u;
        goto label_20a0b4;
    }
    ctx->pc = 0x20A0ACu;
    SET_GPR_U32(ctx, 31, 0x20A0B4u);
    ctx->pc = 0x20A0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A0ACu;
            // 0x20a0b0: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A0B4u; }
        if (ctx->pc != 0x20A0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A0B4u; }
        if (ctx->pc != 0x20A0B4u) { return; }
    }
    ctx->pc = 0x20A0B4u;
label_20a0b4:
    // 0x20a0b4: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x20a0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_20a0b8:
    // 0x20a0b8: 0xc04e638  jal         func_1398E0
label_20a0bc:
    if (ctx->pc == 0x20A0BCu) {
        ctx->pc = 0x20A0BCu;
            // 0x20a0bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20A0C0u;
        goto label_20a0c0;
    }
    ctx->pc = 0x20A0B8u;
    SET_GPR_U32(ctx, 31, 0x20A0C0u);
    ctx->pc = 0x20A0BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A0B8u;
            // 0x20a0bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A0C0u; }
        if (ctx->pc != 0x20A0C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A0C0u; }
        if (ctx->pc != 0x20A0C0u) { return; }
    }
    ctx->pc = 0x20A0C0u;
label_20a0c0:
    // 0x20a0c0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_20a0c4:
    if (ctx->pc == 0x20A0C4u) {
        ctx->pc = 0x20A0C4u;
            // 0x20a0c4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20A0C8u;
        goto label_20a0c8;
    }
    ctx->pc = 0x20A0C0u;
    {
        const bool branch_taken_0x20a0c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A0C0u;
            // 0x20a0c4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a0c0) {
            ctx->pc = 0x20A0D0u;
            goto label_20a0d0;
        }
    }
    ctx->pc = 0x20A0C8u;
label_20a0c8:
    // 0x20a0c8: 0xc08bed8  jal         func_22FB60
label_20a0cc:
    if (ctx->pc == 0x20A0CCu) {
        ctx->pc = 0x20A0CCu;
            // 0x20a0cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20A0D0u;
        goto label_20a0d0;
    }
    ctx->pc = 0x20A0C8u;
    SET_GPR_U32(ctx, 31, 0x20A0D0u);
    ctx->pc = 0x20A0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A0C8u;
            // 0x20a0cc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FB60u;
    if (runtime->hasFunction(0x22FB60u)) {
        auto targetFn = runtime->lookupFunction(0x22FB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A0D0u; }
        if (ctx->pc != 0x20A0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CMenuEffectFv_0x22fb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A0D0u; }
        if (ctx->pc != 0x20A0D0u) { return; }
    }
    ctx->pc = 0x20A0D0u;
label_20a0d0:
    // 0x20a0d0: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x20a0d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_20a0d4:
    // 0x20a0d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20a0d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20a0d8:
    // 0x20a0d8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x20a0d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_20a0dc:
    // 0x20a0dc: 0xc04e748  jal         func_139D20
label_20a0e0:
    if (ctx->pc == 0x20A0E0u) {
        ctx->pc = 0x20A0E0u;
            // 0x20a0e0: 0xac317ab8  sw          $s1, 0x7AB8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 31416), GPR_U32(ctx, 17));
        ctx->pc = 0x20A0E4u;
        goto label_20a0e4;
    }
    ctx->pc = 0x20A0DCu;
    SET_GPR_U32(ctx, 31, 0x20A0E4u);
    ctx->pc = 0x20A0E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A0DCu;
            // 0x20a0e0: 0xac317ab8  sw          $s1, 0x7AB8($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 31416), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A0E4u; }
        if (ctx->pc != 0x20A0E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A0E4u; }
        if (ctx->pc != 0x20A0E4u) { return; }
    }
    ctx->pc = 0x20A0E4u;
label_20a0e4:
    // 0x20a0e4: 0x24040038  addiu       $a0, $zero, 0x38
    ctx->pc = 0x20a0e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_20a0e8:
    // 0x20a0e8: 0xc04e638  jal         func_1398E0
label_20a0ec:
    if (ctx->pc == 0x20A0ECu) {
        ctx->pc = 0x20A0ECu;
            // 0x20a0ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20A0F0u;
        goto label_20a0f0;
    }
    ctx->pc = 0x20A0E8u;
    SET_GPR_U32(ctx, 31, 0x20A0F0u);
    ctx->pc = 0x20A0ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A0E8u;
            // 0x20a0ec: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A0F0u; }
        if (ctx->pc != 0x20A0F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A0F0u; }
        if (ctx->pc != 0x20A0F0u) { return; }
    }
    ctx->pc = 0x20A0F0u;
label_20a0f0:
    // 0x20a0f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_20a0f4:
    if (ctx->pc == 0x20A0F4u) {
        ctx->pc = 0x20A0F4u;
            // 0x20a0f4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20A0F8u;
        goto label_20a0f8;
    }
    ctx->pc = 0x20A0F0u;
    {
        const bool branch_taken_0x20a0f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A0F0u;
            // 0x20a0f4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a0f0) {
            ctx->pc = 0x20A100u;
            goto label_20a100;
        }
    }
    ctx->pc = 0x20A0F8u;
label_20a0f8:
    // 0x20a0f8: 0xc08bed8  jal         func_22FB60
label_20a0fc:
    if (ctx->pc == 0x20A0FCu) {
        ctx->pc = 0x20A0FCu;
            // 0x20a0fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20A100u;
        goto label_20a100;
    }
    ctx->pc = 0x20A0F8u;
    SET_GPR_U32(ctx, 31, 0x20A100u);
    ctx->pc = 0x20A0FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A0F8u;
            // 0x20a0fc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FB60u;
    if (runtime->hasFunction(0x22FB60u)) {
        auto targetFn = runtime->lookupFunction(0x22FB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A100u; }
        if (ctx->pc != 0x20A100u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__11CMenuEffectFv_0x22fb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A100u; }
        if (ctx->pc != 0x20A100u) { return; }
    }
    ctx->pc = 0x20A100u;
label_20a100:
    // 0x20a100: 0x3c010037  lui         $at, 0x37
    ctx->pc = 0x20a100u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)55 << 16));
label_20a104:
    // 0x20a104: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20a104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20a108:
    // 0x20a108: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x20a108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_20a10c:
    // 0x20a10c: 0xc04e748  jal         func_139D20
label_20a110:
    if (ctx->pc == 0x20A110u) {
        ctx->pc = 0x20A110u;
            // 0x20a110: 0xac317abc  sw          $s1, 0x7ABC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 31420), GPR_U32(ctx, 17));
        ctx->pc = 0x20A114u;
        goto label_20a114;
    }
    ctx->pc = 0x20A10Cu;
    SET_GPR_U32(ctx, 31, 0x20A114u);
    ctx->pc = 0x20A110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A10Cu;
            // 0x20a110: 0xac317abc  sw          $s1, 0x7ABC($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 31420), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A114u; }
        if (ctx->pc != 0x20A114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A114u; }
        if (ctx->pc != 0x20A114u) { return; }
    }
    ctx->pc = 0x20A114u;
label_20a114:
    // 0x20a114: 0x24040104  addiu       $a0, $zero, 0x104
    ctx->pc = 0x20a114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
label_20a118:
    // 0x20a118: 0xc04e638  jal         func_1398E0
label_20a11c:
    if (ctx->pc == 0x20A11Cu) {
        ctx->pc = 0x20A11Cu;
            // 0x20a11c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20A120u;
        goto label_20a120;
    }
    ctx->pc = 0x20A118u;
    SET_GPR_U32(ctx, 31, 0x20A120u);
    ctx->pc = 0x20A11Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A118u;
            // 0x20a11c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A120u; }
        if (ctx->pc != 0x20A120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A120u; }
        if (ctx->pc != 0x20A120u) { return; }
    }
    ctx->pc = 0x20A120u;
label_20a120:
    // 0x20a120: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_20a124:
    if (ctx->pc == 0x20A124u) {
        ctx->pc = 0x20A124u;
            // 0x20a124: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20A128u;
        goto label_20a128;
    }
    ctx->pc = 0x20A120u;
    {
        const bool branch_taken_0x20a120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A120u;
            // 0x20a124: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a120) {
            ctx->pc = 0x20A154u;
            goto label_20a154;
        }
    }
    ctx->pc = 0x20A128u;
label_20a128:
    // 0x20a128: 0x2633000c  addiu       $s3, $s1, 0xC
    ctx->pc = 0x20a128u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_20a12c:
    // 0x20a12c: 0xc065c24  jal         func_197090
label_20a130:
    if (ctx->pc == 0x20A130u) {
        ctx->pc = 0x20A130u;
            // 0x20a130: 0x26640008  addiu       $a0, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->pc = 0x20A134u;
        goto label_20a134;
    }
    ctx->pc = 0x20A12Cu;
    SET_GPR_U32(ctx, 31, 0x20A134u);
    ctx->pc = 0x20A130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A12Cu;
            // 0x20a130: 0x26640008  addiu       $a0, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197090u;
    if (runtime->hasFunction(0x197090u)) {
        auto targetFn = runtime->lookupFunction(0x197090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A134u; }
        if (ctx->pc != 0x20A134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13CGameDataUsedFv_0x197090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A134u; }
        if (ctx->pc != 0x20A134u) { return; }
    }
    ctx->pc = 0x20A134u;
label_20a134:
    // 0x20a134: 0x2673007c  addiu       $s3, $s3, 0x7C
    ctx->pc = 0x20a134u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 124));
label_20a138:
    // 0x20a138: 0x26220104  addiu       $v0, $s1, 0x104
    ctx->pc = 0x20a138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 260));
label_20a13c:
    // 0x20a13c: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x20a13cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_20a140:
    // 0x20a140: 0x0  nop
    ctx->pc = 0x20a140u;
    // NOP
label_20a144:
    // 0x20a144: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_20a148:
    if (ctx->pc == 0x20A148u) {
        ctx->pc = 0x20A14Cu;
        goto label_20a14c;
    }
    ctx->pc = 0x20A144u;
    {
        const bool branch_taken_0x20a144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a144) {
            ctx->pc = 0x20A12Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20a12c;
        }
    }
    ctx->pc = 0x20A14Cu;
label_20a14c:
    // 0x20a14c: 0xc0878fc  jal         func_21E3F0
label_20a150:
    if (ctx->pc == 0x20A150u) {
        ctx->pc = 0x20A150u;
            // 0x20a150: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20A154u;
        goto label_20a154;
    }
    ctx->pc = 0x20A14Cu;
    SET_GPR_U32(ctx, 31, 0x20A154u);
    ctx->pc = 0x20A150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A14Cu;
            // 0x20a150: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E3F0u;
    if (runtime->hasFunction(0x21E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x21E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A154u; }
        if (ctx->pc != 0x20A154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__13CMenuMoveItemFv_0x21e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A154u; }
        if (ctx->pc != 0x20A154u) { return; }
    }
    ctx->pc = 0x20A154u;
label_20a154:
    // 0x20a154: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20a154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20a158:
    // 0x20a158: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x20a158u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_20a15c:
    // 0x20a15c: 0xaf919510  sw          $s1, -0x6AF0($gp)
    ctx->pc = 0x20a15cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939920), GPR_U32(ctx, 17));
label_20a160:
    // 0x20a160: 0x2484b7a0  addiu       $a0, $a0, -0x4860
    ctx->pc = 0x20a160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948768));
label_20a164:
    // 0x20a164: 0x24060210  addiu       $a2, $zero, 0x210
    ctx->pc = 0x20a164u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
label_20a168:
    // 0x20a168: 0x24420690  addiu       $v0, $v0, 0x690
    ctx->pc = 0x20a168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1680));
label_20a16c:
    // 0x20a16c: 0xaf829390  sw          $v0, -0x6C70($gp)
    ctx->pc = 0x20a16cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939536), GPR_U32(ctx, 2));
label_20a170:
    // 0x20a170: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x20a170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_20a174:
    // 0x20a174: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x20a174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_20a178:
    // 0x20a178: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20a178u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20a17c:
    // 0x20a17c: 0xc04e79c  jal         func_139E70
label_20a180:
    if (ctx->pc == 0x20A180u) {
        ctx->pc = 0x20A180u;
            // 0x20a180: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x20A184u;
        goto label_20a184;
    }
    ctx->pc = 0x20A17Cu;
    SET_GPR_U32(ctx, 31, 0x20A184u);
    ctx->pc = 0x20A180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A17Cu;
            // 0x20a180: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A184u; }
        if (ctx->pc != 0x20A184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A184u; }
        if (ctx->pc != 0x20A184u) { return; }
    }
    ctx->pc = 0x20A184u;
label_20a184:
    // 0x20a184: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20a184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20a188:
    // 0x20a188: 0xc04e748  jal         func_139D20
label_20a18c:
    if (ctx->pc == 0x20A18Cu) {
        ctx->pc = 0x20A18Cu;
            // 0x20a18c: 0x24050210  addiu       $a1, $zero, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
        ctx->pc = 0x20A190u;
        goto label_20a190;
    }
    ctx->pc = 0x20A188u;
    SET_GPR_U32(ctx, 31, 0x20A190u);
    ctx->pc = 0x20A18Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A188u;
            // 0x20a18c: 0x24050210  addiu       $a1, $zero, 0x210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A190u; }
        if (ctx->pc != 0x20A190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A190u; }
        if (ctx->pc != 0x20A190u) { return; }
    }
    ctx->pc = 0x20A190u;
label_20a190:
    // 0x20a190: 0xc04e780  jal         func_139E00
label_20a194:
    if (ctx->pc == 0x20A194u) {
        ctx->pc = 0x20A194u;
            // 0x20a194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20A198u;
        goto label_20a198;
    }
    ctx->pc = 0x20A190u;
    SET_GPR_U32(ctx, 31, 0x20A198u);
    ctx->pc = 0x20A194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A190u;
            // 0x20a194: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A198u; }
        if (ctx->pc != 0x20A198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A198u; }
        if (ctx->pc != 0x20A198u) { return; }
    }
    ctx->pc = 0x20A198u;
label_20a198:
    // 0x20a198: 0xc07fa5c  jal         func_1FE970
label_20a19c:
    if (ctx->pc == 0x20A19Cu) {
        ctx->pc = 0x20A19Cu;
            // 0x20a19c: 0x8f8490d4  lw          $a0, -0x6F2C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
        ctx->pc = 0x20A1A0u;
        goto label_20a1a0;
    }
    ctx->pc = 0x20A198u;
    SET_GPR_U32(ctx, 31, 0x20A1A0u);
    ctx->pc = 0x20A19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A198u;
            // 0x20a19c: 0x8f8490d4  lw          $a0, -0x6F2C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FE970u;
    if (runtime->hasFunction(0x1FE970u)) {
        auto targetFn = runtime->lookupFunction(0x1FE970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A1A0u; }
        if (ctx->pc != 0x20A1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ResetAddress__15CInventUserDataFv_0x1fe970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A1A0u; }
        if (ctx->pc != 0x20A1A0u) { return; }
    }
    ctx->pc = 0x20A1A0u;
label_20a1a0:
    // 0x20a1a0: 0xc0803c0  jal         func_200F00
label_20a1a4:
    if (ctx->pc == 0x20A1A4u) {
        ctx->pc = 0x20A1A4u;
            // 0x20a1a4: 0x8f849178  lw          $a0, -0x6E88($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
        ctx->pc = 0x20A1A8u;
        goto label_20a1a8;
    }
    ctx->pc = 0x20A1A0u;
    SET_GPR_U32(ctx, 31, 0x20A1A8u);
    ctx->pc = 0x20A1A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A1A0u;
            // 0x20a1a4: 0x8f849178  lw          $a0, -0x6E88($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x200F00u;
    if (runtime->hasFunction(0x200F00u)) {
        auto targetFn = runtime->lookupFunction(0x200F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A1A8u; }
        if (ctx->pc != 0x20A1A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachFormInfo__11CMenuInventFv_0x200f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A1A8u; }
        if (ctx->pc != 0x20A1A8u) { return; }
    }
    ctx->pc = 0x20A1A8u;
label_20a1a8:
    // 0x20a1a8: 0xc08791c  jal         func_21E470
label_20a1ac:
    if (ctx->pc == 0x20A1ACu) {
        ctx->pc = 0x20A1ACu;
            // 0x20a1ac: 0x8f849510  lw          $a0, -0x6AF0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939920)));
        ctx->pc = 0x20A1B0u;
        goto label_20a1b0;
    }
    ctx->pc = 0x20A1A8u;
    SET_GPR_U32(ctx, 31, 0x20A1B0u);
    ctx->pc = 0x20A1ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A1A8u;
            // 0x20a1ac: 0x8f849510  lw          $a0, -0x6AF0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939920)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E470u;
    if (runtime->hasFunction(0x21E470u)) {
        auto targetFn = runtime->lookupFunction(0x21E470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A1B0u; }
        if (ctx->pc != 0x20A1B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachForm__13CMenuMoveItemFv_0x21e470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A1B0u; }
        if (ctx->pc != 0x20A1B0u) { return; }
    }
    ctx->pc = 0x20A1B0u;
label_20a1b0:
    // 0x20a1b0: 0x8e040024  lw          $a0, 0x24($s0)
    ctx->pc = 0x20a1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_20a1b4:
    // 0x20a1b4: 0x24061310  addiu       $a2, $zero, 0x1310
    ctx->pc = 0x20a1b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4880));
label_20a1b8:
    // 0x20a1b8: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x20a1b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_20a1bc:
    // 0x20a1bc: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20a1bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20a1c0:
    // 0x20a1c0: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x20a1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_20a1c4:
    // 0x20a1c4: 0x642821  addu        $a1, $v1, $a0
    ctx->pc = 0x20a1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_20a1c8:
    // 0x20a1c8: 0xc04e79c  jal         func_139E70
label_20a1cc:
    if (ctx->pc == 0x20A1CCu) {
        ctx->pc = 0x20A1CCu;
            // 0x20a1cc: 0x24440398  addiu       $a0, $v0, 0x398 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 920));
        ctx->pc = 0x20A1D0u;
        goto label_20a1d0;
    }
    ctx->pc = 0x20A1C8u;
    SET_GPR_U32(ctx, 31, 0x20A1D0u);
    ctx->pc = 0x20A1CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A1C8u;
            // 0x20a1cc: 0x24440398  addiu       $a0, $v0, 0x398 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A1D0u; }
        if (ctx->pc != 0x20A1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A1D0u; }
        if (ctx->pc != 0x20A1D0u) { return; }
    }
    ctx->pc = 0x20A1D0u;
label_20a1d0:
    // 0x20a1d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20a1d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20a1d4:
    // 0x20a1d4: 0xc04e748  jal         func_139D20
label_20a1d8:
    if (ctx->pc == 0x20A1D8u) {
        ctx->pc = 0x20A1D8u;
            // 0x20a1d8: 0x24051310  addiu       $a1, $zero, 0x1310 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4880));
        ctx->pc = 0x20A1DCu;
        goto label_20a1dc;
    }
    ctx->pc = 0x20A1D4u;
    SET_GPR_U32(ctx, 31, 0x20A1DCu);
    ctx->pc = 0x20A1D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A1D4u;
            // 0x20a1d8: 0x24051310  addiu       $a1, $zero, 0x1310 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A1DCu; }
        if (ctx->pc != 0x20A1DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A1DCu; }
        if (ctx->pc != 0x20A1DCu) { return; }
    }
    ctx->pc = 0x20A1DCu;
label_20a1dc:
    // 0x20a1dc: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20a1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20a1e0:
    // 0x20a1e0: 0x84820110  lh          $v0, 0x110($a0)
    ctx->pc = 0x20a1e0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 272)));
label_20a1e4:
    // 0x20a1e4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_20a1e8:
    if (ctx->pc == 0x20A1E8u) {
        ctx->pc = 0x20A1E8u;
            // 0x20a1e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20A1ECu;
        goto label_20a1ec;
    }
    ctx->pc = 0x20A1E4u;
    {
        const bool branch_taken_0x20a1e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20A1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A1E4u;
            // 0x20a1e8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a1e4) {
            ctx->pc = 0x20A1F4u;
            goto label_20a1f4;
        }
    }
    ctx->pc = 0x20A1ECu;
label_20a1ec:
    // 0x20a1ec: 0xc080a9c  jal         func_202A70
label_20a1f0:
    if (ctx->pc == 0x20A1F0u) {
        ctx->pc = 0x20A1F4u;
        goto label_20a1f4;
    }
    ctx->pc = 0x20A1ECu;
    SET_GPR_U32(ctx, 31, 0x20A1F4u);
    ctx->pc = 0x202A70u;
    if (runtime->hasFunction(0x202A70u)) {
        auto targetFn = runtime->lookupFunction(0x202A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A1F4u; }
        if (ctx->pc != 0x20A1F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EnterDataMenu__11CMenuInventFPUc_0x202a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A1F4u; }
        if (ctx->pc != 0x20A1F4u) { return; }
    }
    ctx->pc = 0x20A1F4u;
label_20a1f4:
    // 0x20a1f4: 0xc052330  jal         func_148CC0
label_20a1f8:
    if (ctx->pc == 0x20A1F8u) {
        ctx->pc = 0x20A1FCu;
        goto label_20a1fc;
    }
    ctx->pc = 0x20A1F4u;
    SET_GPR_U32(ctx, 31, 0x20A1FCu);
    ctx->pc = 0x148CC0u;
    if (runtime->hasFunction(0x148CC0u)) {
        auto targetFn = runtime->lookupFunction(0x148CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A1FCu; }
        if (ctx->pc != 0x20A1FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartReadBG__Fv_0x148cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A1FCu; }
        if (ctx->pc != 0x20A1FCu) { return; }
    }
    ctx->pc = 0x20A1FCu;
label_20a1fc:
    // 0x20a1fc: 0x8f839178  lw          $v1, -0x6E88($gp)
    ctx->pc = 0x20a1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20a200:
    // 0x20a200: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20a200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20a204:
    // 0x20a204: 0x84630110  lh          $v1, 0x110($v1)
    ctx->pc = 0x20a204u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 272)));
label_20a208:
    // 0x20a208: 0x14620011  bne         $v1, $v0, . + 4 + (0x11 << 2)
label_20a20c:
    if (ctx->pc == 0x20A20Cu) {
        ctx->pc = 0x20A20Cu;
            // 0x20a20c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20A210u;
        goto label_20a210;
    }
    ctx->pc = 0x20A208u;
    {
        const bool branch_taken_0x20a208 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20A20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A208u;
            // 0x20a20c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a208) {
            ctx->pc = 0x20A250u;
            goto label_20a250;
        }
    }
    ctx->pc = 0x20A210u;
label_20a210:
    // 0x20a210: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x20a210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_20a214:
    // 0x20a214: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x20a214u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_20a218:
    // 0x20a218: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x20a218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_20a21c:
    // 0x20a21c: 0x24849b80  addiu       $a0, $a0, -0x6480
    ctx->pc = 0x20a21cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941568));
label_20a220:
    // 0x20a220: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20a220u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a224:
    // 0x20a224: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20a224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20a228:
    // 0x20a228: 0xc094440  jal         func_251100
label_20a22c:
    if (ctx->pc == 0x20A22Cu) {
        ctx->pc = 0x20A22Cu;
            // 0x20a22c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x20A230u;
        goto label_20a230;
    }
    ctx->pc = 0x20A228u;
    SET_GPR_U32(ctx, 31, 0x20A230u);
    ctx->pc = 0x20A22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A228u;
            // 0x20a22c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251100u;
    if (runtime->hasFunction(0x251100u)) {
        auto targetFn = runtime->lookupFunction(0x251100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A230u; }
        if (ctx->pc != 0x20A230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileMenu__FPcP1i_0x251100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A230u; }
        if (ctx->pc != 0x20A230u) { return; }
    }
    ctx->pc = 0x20A230u;
label_20a230:
    // 0x20a230: 0x3043000f  andi        $v1, $v0, 0xF
    ctx->pc = 0x20a230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_20a234:
    // 0x20a234: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_20a238:
    if (ctx->pc == 0x20A238u) {
        ctx->pc = 0x20A238u;
            // 0x20a238: 0x22902  srl         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->pc = 0x20A23Cu;
        goto label_20a23c;
    }
    ctx->pc = 0x20A234u;
    {
        const bool branch_taken_0x20a234 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A234u;
            // 0x20a238: 0x22902  srl         $a1, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a234) {
            ctx->pc = 0x20A244u;
            goto label_20a244;
        }
    }
    ctx->pc = 0x20A23Cu;
label_20a23c:
    // 0x20a23c: 0x21102  srl         $v0, $v0, 4
    ctx->pc = 0x20a23cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 4));
label_20a240:
    // 0x20a240: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x20a240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_20a244:
    // 0x20a244: 0xc04e748  jal         func_139D20
label_20a248:
    if (ctx->pc == 0x20A248u) {
        ctx->pc = 0x20A248u;
            // 0x20a248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20A24Cu;
        goto label_20a24c;
    }
    ctx->pc = 0x20A244u;
    SET_GPR_U32(ctx, 31, 0x20A24Cu);
    ctx->pc = 0x20A248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A244u;
            // 0x20a248: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A24Cu; }
        if (ctx->pc != 0x20A24Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A24Cu; }
        if (ctx->pc != 0x20A24Cu) { return; }
    }
    ctx->pc = 0x20A24Cu;
label_20a24c:
    // 0x20a24c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20a24cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a250:
    // 0x20a250: 0xc05231c  jal         func_148C70
label_20a254:
    if (ctx->pc == 0x20A254u) {
        ctx->pc = 0x20A258u;
        goto label_20a258;
    }
    ctx->pc = 0x20A250u;
    SET_GPR_U32(ctx, 31, 0x20A258u);
    ctx->pc = 0x148C70u;
    if (runtime->hasFunction(0x148C70u)) {
        auto targetFn = runtime->lookupFunction(0x148C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A258u; }
        if (ctx->pc != 0x20A258u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetReadBGFile__Fi_0x148c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A258u; }
        if (ctx->pc != 0x20A258u) { return; }
    }
    ctx->pc = 0x20A258u;
label_20a258:
    // 0x20a258: 0xaf829114  sw          $v0, -0x6EEC($gp)
    ctx->pc = 0x20a258u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938900), GPR_U32(ctx, 2));
label_20a25c:
    // 0x20a25c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x20a25cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_20a260:
    // 0x20a260: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x20a260u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_20a264:
    // 0x20a264: 0x24849740  addiu       $a0, $a0, -0x68C0
    ctx->pc = 0x20a264u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940480));
label_20a268:
    // 0x20a268: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x20a268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_20a26c:
    // 0x20a26c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x20a26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_20a270:
    // 0x20a270: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x20a270u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_20a274:
    // 0x20a274: 0x658821  addu        $s1, $v1, $a1
    ctx->pc = 0x20a274u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_20a278:
    // 0x20a278: 0x463023  subu        $a2, $v0, $a2
    ctx->pc = 0x20a278u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_20a27c:
    // 0x20a27c: 0xc04e79c  jal         func_139E70
label_20a280:
    if (ctx->pc == 0x20A280u) {
        ctx->pc = 0x20A280u;
            // 0x20a280: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20A284u;
        goto label_20a284;
    }
    ctx->pc = 0x20A27Cu;
    SET_GPR_U32(ctx, 31, 0x20A284u);
    ctx->pc = 0x20A280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A27Cu;
            // 0x20a280: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A284u; }
        if (ctx->pc != 0x20A284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A284u; }
        if (ctx->pc != 0x20A284u) { return; }
    }
    ctx->pc = 0x20A284u;
label_20a284:
    // 0x20a284: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x20a284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_20a288:
    // 0x20a288: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x20a288u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_20a28c:
    // 0x20a28c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x20a28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_20a290:
    // 0x20a290: 0x2484cac0  addiu       $a0, $a0, -0x3540
    ctx->pc = 0x20a290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953664));
label_20a294:
    // 0x20a294: 0x24061b80  addiu       $a2, $zero, 0x1B80
    ctx->pc = 0x20a294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7040));
label_20a298:
    // 0x20a298: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20a298u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20a29c:
    // 0x20a29c: 0xc04e79c  jal         func_139E70
label_20a2a0:
    if (ctx->pc == 0x20A2A0u) {
        ctx->pc = 0x20A2A0u;
            // 0x20a2a0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x20A2A4u;
        goto label_20a2a4;
    }
    ctx->pc = 0x20A29Cu;
    SET_GPR_U32(ctx, 31, 0x20A2A4u);
    ctx->pc = 0x20A2A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A29Cu;
            // 0x20a2a0: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A2A4u; }
        if (ctx->pc != 0x20A2A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A2A4u; }
        if (ctx->pc != 0x20A2A4u) { return; }
    }
    ctx->pc = 0x20A2A4u;
label_20a2a4:
    // 0x20a2a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20a2a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20a2a8:
    // 0x20a2a8: 0xc04e748  jal         func_139D20
label_20a2ac:
    if (ctx->pc == 0x20A2ACu) {
        ctx->pc = 0x20A2ACu;
            // 0x20a2ac: 0x24051b80  addiu       $a1, $zero, 0x1B80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7040));
        ctx->pc = 0x20A2B0u;
        goto label_20a2b0;
    }
    ctx->pc = 0x20A2A8u;
    SET_GPR_U32(ctx, 31, 0x20A2B0u);
    ctx->pc = 0x20A2ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A2A8u;
            // 0x20a2ac: 0x24051b80  addiu       $a1, $zero, 0x1B80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7040));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A2B0u; }
        if (ctx->pc != 0x20A2B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A2B0u; }
        if (ctx->pc != 0x20A2B0u) { return; }
    }
    ctx->pc = 0x20A2B0u;
label_20a2b0:
    // 0x20a2b0: 0xc04e780  jal         func_139E00
label_20a2b4:
    if (ctx->pc == 0x20A2B4u) {
        ctx->pc = 0x20A2B4u;
            // 0x20a2b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20A2B8u;
        goto label_20a2b8;
    }
    ctx->pc = 0x20A2B0u;
    SET_GPR_U32(ctx, 31, 0x20A2B8u);
    ctx->pc = 0x20A2B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A2B0u;
            // 0x20a2b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A2B8u; }
        if (ctx->pc != 0x20A2B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A2B8u; }
        if (ctx->pc != 0x20A2B8u) { return; }
    }
    ctx->pc = 0x20A2B8u;
label_20a2b8:
    // 0x20a2b8: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x20a2b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_20a2bc:
    // 0x20a2bc: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x20a2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_20a2c0:
    // 0x20a2c0: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x20a2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_20a2c4:
    // 0x20a2c4: 0x34069ac0  ori         $a2, $zero, 0x9AC0
    ctx->pc = 0x20a2c4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39616);
label_20a2c8:
    // 0x20a2c8: 0x2484caf0  addiu       $a0, $a0, -0x3510
    ctx->pc = 0x20a2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953712));
label_20a2cc:
    // 0x20a2cc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20a2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20a2d0:
    // 0x20a2d0: 0xc04e79c  jal         func_139E70
label_20a2d4:
    if (ctx->pc == 0x20A2D4u) {
        ctx->pc = 0x20A2D4u;
            // 0x20a2d4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x20A2D8u;
        goto label_20a2d8;
    }
    ctx->pc = 0x20A2D0u;
    SET_GPR_U32(ctx, 31, 0x20A2D8u);
    ctx->pc = 0x20A2D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A2D0u;
            // 0x20a2d4: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A2D8u; }
        if (ctx->pc != 0x20A2D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A2D8u; }
        if (ctx->pc != 0x20A2D8u) { return; }
    }
    ctx->pc = 0x20A2D8u;
label_20a2d8:
    // 0x20a2d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20a2d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20a2dc:
    // 0x20a2dc: 0xc04e748  jal         func_139D20
label_20a2e0:
    if (ctx->pc == 0x20A2E0u) {
        ctx->pc = 0x20A2E0u;
            // 0x20a2e0: 0x34059ac0  ori         $a1, $zero, 0x9AC0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39616);
        ctx->pc = 0x20A2E4u;
        goto label_20a2e4;
    }
    ctx->pc = 0x20A2DCu;
    SET_GPR_U32(ctx, 31, 0x20A2E4u);
    ctx->pc = 0x20A2E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A2DCu;
            // 0x20a2e0: 0x34059ac0  ori         $a1, $zero, 0x9AC0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)39616);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A2E4u; }
        if (ctx->pc != 0x20A2E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A2E4u; }
        if (ctx->pc != 0x20A2E4u) { return; }
    }
    ctx->pc = 0x20A2E4u;
label_20a2e4:
    // 0x20a2e4: 0xc04e780  jal         func_139E00
label_20a2e8:
    if (ctx->pc == 0x20A2E8u) {
        ctx->pc = 0x20A2E8u;
            // 0x20a2e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20A2ECu;
        goto label_20a2ec;
    }
    ctx->pc = 0x20A2E4u;
    SET_GPR_U32(ctx, 31, 0x20A2ECu);
    ctx->pc = 0x20A2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A2E4u;
            // 0x20a2e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A2ECu; }
        if (ctx->pc != 0x20A2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A2ECu; }
        if (ctx->pc != 0x20A2ECu) { return; }
    }
    ctx->pc = 0x20A2ECu;
label_20a2ec:
    // 0x20a2ec: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x20a2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_20a2f0:
    // 0x20a2f0: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x20a2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_20a2f4:
    // 0x20a2f4: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x20a2f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_20a2f8:
    // 0x20a2f8: 0x2484cb80  addiu       $a0, $a0, -0x3480
    ctx->pc = 0x20a2f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953856));
label_20a2fc:
    // 0x20a2fc: 0x24060bc0  addiu       $a2, $zero, 0xBC0
    ctx->pc = 0x20a2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3008));
label_20a300:
    // 0x20a300: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20a300u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20a304:
    // 0x20a304: 0xc04e79c  jal         func_139E70
label_20a308:
    if (ctx->pc == 0x20A308u) {
        ctx->pc = 0x20A308u;
            // 0x20a308: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x20A30Cu;
        goto label_20a30c;
    }
    ctx->pc = 0x20A304u;
    SET_GPR_U32(ctx, 31, 0x20A30Cu);
    ctx->pc = 0x20A308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A304u;
            // 0x20a308: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A30Cu; }
        if (ctx->pc != 0x20A30Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A30Cu; }
        if (ctx->pc != 0x20A30Cu) { return; }
    }
    ctx->pc = 0x20A30Cu;
label_20a30c:
    // 0x20a30c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20a30cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20a310:
    // 0x20a310: 0xc04e748  jal         func_139D20
label_20a314:
    if (ctx->pc == 0x20A314u) {
        ctx->pc = 0x20A314u;
            // 0x20a314: 0x24050bc0  addiu       $a1, $zero, 0xBC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3008));
        ctx->pc = 0x20A318u;
        goto label_20a318;
    }
    ctx->pc = 0x20A310u;
    SET_GPR_U32(ctx, 31, 0x20A318u);
    ctx->pc = 0x20A314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A310u;
            // 0x20a314: 0x24050bc0  addiu       $a1, $zero, 0xBC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A318u; }
        if (ctx->pc != 0x20A318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A318u; }
        if (ctx->pc != 0x20A318u) { return; }
    }
    ctx->pc = 0x20A318u;
label_20a318:
    // 0x20a318: 0xc04e780  jal         func_139E00
label_20a31c:
    if (ctx->pc == 0x20A31Cu) {
        ctx->pc = 0x20A31Cu;
            // 0x20a31c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20A320u;
        goto label_20a320;
    }
    ctx->pc = 0x20A318u;
    SET_GPR_U32(ctx, 31, 0x20A320u);
    ctx->pc = 0x20A31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A318u;
            // 0x20a31c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A320u; }
        if (ctx->pc != 0x20A320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A320u; }
        if (ctx->pc != 0x20A320u) { return; }
    }
    ctx->pc = 0x20A320u;
label_20a320:
    // 0x20a320: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x20a320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_20a324:
    // 0x20a324: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x20a324u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_20a328:
    // 0x20a328: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x20a328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_20a32c:
    // 0x20a32c: 0x2484cbb0  addiu       $a0, $a0, -0x3450
    ctx->pc = 0x20a32cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953904));
label_20a330:
    // 0x20a330: 0x240626c0  addiu       $a2, $zero, 0x26C0
    ctx->pc = 0x20a330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9920));
label_20a334:
    // 0x20a334: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20a334u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20a338:
    // 0x20a338: 0xc04e79c  jal         func_139E70
label_20a33c:
    if (ctx->pc == 0x20A33Cu) {
        ctx->pc = 0x20A33Cu;
            // 0x20a33c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x20A340u;
        goto label_20a340;
    }
    ctx->pc = 0x20A338u;
    SET_GPR_U32(ctx, 31, 0x20A340u);
    ctx->pc = 0x20A33Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A338u;
            // 0x20a33c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A340u; }
        if (ctx->pc != 0x20A340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A340u; }
        if (ctx->pc != 0x20A340u) { return; }
    }
    ctx->pc = 0x20A340u;
label_20a340:
    // 0x20a340: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20a340u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20a344:
    // 0x20a344: 0xc04e748  jal         func_139D20
label_20a348:
    if (ctx->pc == 0x20A348u) {
        ctx->pc = 0x20A348u;
            // 0x20a348: 0x240526c0  addiu       $a1, $zero, 0x26C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9920));
        ctx->pc = 0x20A34Cu;
        goto label_20a34c;
    }
    ctx->pc = 0x20A344u;
    SET_GPR_U32(ctx, 31, 0x20A34Cu);
    ctx->pc = 0x20A348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A344u;
            // 0x20a348: 0x240526c0  addiu       $a1, $zero, 0x26C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A34Cu; }
        if (ctx->pc != 0x20A34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A34Cu; }
        if (ctx->pc != 0x20A34Cu) { return; }
    }
    ctx->pc = 0x20A34Cu;
label_20a34c:
    // 0x20a34c: 0xc04e780  jal         func_139E00
label_20a350:
    if (ctx->pc == 0x20A350u) {
        ctx->pc = 0x20A350u;
            // 0x20a350: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20A354u;
        goto label_20a354;
    }
    ctx->pc = 0x20A34Cu;
    SET_GPR_U32(ctx, 31, 0x20A354u);
    ctx->pc = 0x20A350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A34Cu;
            // 0x20a350: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A354u; }
        if (ctx->pc != 0x20A354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A354u; }
        if (ctx->pc != 0x20A354u) { return; }
    }
    ctx->pc = 0x20A354u;
label_20a354:
    // 0x20a354: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x20a354u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_20a358:
    // 0x20a358: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20a358u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a35c:
    // 0x20a35c: 0x2484cb20  addiu       $a0, $a0, -0x34E0
    ctx->pc = 0x20a35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953760));
label_20a360:
    // 0x20a360: 0xc04e79c  jal         func_139E70
label_20a364:
    if (ctx->pc == 0x20A364u) {
        ctx->pc = 0x20A364u;
            // 0x20a364: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20A368u;
        goto label_20a368;
    }
    ctx->pc = 0x20A360u;
    SET_GPR_U32(ctx, 31, 0x20A368u);
    ctx->pc = 0x20A364u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A360u;
            // 0x20a364: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A368u; }
        if (ctx->pc != 0x20A368u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A368u; }
        if (ctx->pc != 0x20A368u) { return; }
    }
    ctx->pc = 0x20A368u;
label_20a368:
    // 0x20a368: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x20a368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_20a36c:
    // 0x20a36c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20a36cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a370:
    // 0x20a370: 0x2484cb50  addiu       $a0, $a0, -0x34B0
    ctx->pc = 0x20a370u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953808));
label_20a374:
    // 0x20a374: 0xc04e79c  jal         func_139E70
label_20a378:
    if (ctx->pc == 0x20A378u) {
        ctx->pc = 0x20A378u;
            // 0x20a378: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20A37Cu;
        goto label_20a37c;
    }
    ctx->pc = 0x20A374u;
    SET_GPR_U32(ctx, 31, 0x20A37Cu);
    ctx->pc = 0x20A378u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A374u;
            // 0x20a378: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A37Cu; }
        if (ctx->pc != 0x20A37Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A37Cu; }
        if (ctx->pc != 0x20A37Cu) { return; }
    }
    ctx->pc = 0x20A37Cu;
label_20a37c:
    // 0x20a37c: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x20a37cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_20a380:
    // 0x20a380: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20a380u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a384:
    // 0x20a384: 0x2484cbe0  addiu       $a0, $a0, -0x3420
    ctx->pc = 0x20a384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953952));
label_20a388:
    // 0x20a388: 0xc04e79c  jal         func_139E70
label_20a38c:
    if (ctx->pc == 0x20A38Cu) {
        ctx->pc = 0x20A38Cu;
            // 0x20a38c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20A390u;
        goto label_20a390;
    }
    ctx->pc = 0x20A388u;
    SET_GPR_U32(ctx, 31, 0x20A390u);
    ctx->pc = 0x20A38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A388u;
            // 0x20a38c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A390u; }
        if (ctx->pc != 0x20A390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A390u; }
        if (ctx->pc != 0x20A390u) { return; }
    }
    ctx->pc = 0x20A390u;
label_20a390:
    // 0x20a390: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20a390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20a394:
    // 0x20a394: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20a394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20a398:
    // 0x20a398: 0x84830110  lh          $v1, 0x110($a0)
    ctx->pc = 0x20a398u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 272)));
label_20a39c:
    // 0x20a39c: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_20a3a0:
    if (ctx->pc == 0x20A3A0u) {
        ctx->pc = 0x20A3A4u;
        goto label_20a3a4;
    }
    ctx->pc = 0x20A39Cu;
    {
        const bool branch_taken_0x20a39c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x20a39c) {
            ctx->pc = 0x20A3D4u;
            goto label_20a3d4;
        }
    }
    ctx->pc = 0x20A3A4u;
label_20a3a4:
    // 0x20a3a4: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x20a3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_20a3a8:
    // 0x20a3a8: 0x2484053c  addiu       $a0, $a0, 0x53C
    ctx->pc = 0x20a3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1340));
label_20a3ac:
    // 0x20a3ac: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x20a3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_20a3b0:
    // 0x20a3b0: 0x24061680  addiu       $a2, $zero, 0x1680
    ctx->pc = 0x20a3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5760));
label_20a3b4:
    // 0x20a3b4: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x20a3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_20a3b8:
    // 0x20a3b8: 0xc04e79c  jal         func_139E70
label_20a3bc:
    if (ctx->pc == 0x20A3BCu) {
        ctx->pc = 0x20A3BCu;
            // 0x20a3bc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x20A3C0u;
        goto label_20a3c0;
    }
    ctx->pc = 0x20A3B8u;
    SET_GPR_U32(ctx, 31, 0x20A3C0u);
    ctx->pc = 0x20A3BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A3B8u;
            // 0x20a3bc: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A3C0u; }
        if (ctx->pc != 0x20A3C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A3C0u; }
        if (ctx->pc != 0x20A3C0u) { return; }
    }
    ctx->pc = 0x20A3C0u;
label_20a3c0:
    // 0x20a3c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20a3c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20a3c4:
    // 0x20a3c4: 0xc04e748  jal         func_139D20
label_20a3c8:
    if (ctx->pc == 0x20A3C8u) {
        ctx->pc = 0x20A3C8u;
            // 0x20a3c8: 0x24051680  addiu       $a1, $zero, 0x1680 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5760));
        ctx->pc = 0x20A3CCu;
        goto label_20a3cc;
    }
    ctx->pc = 0x20A3C4u;
    SET_GPR_U32(ctx, 31, 0x20A3CCu);
    ctx->pc = 0x20A3C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A3C4u;
            // 0x20a3c8: 0x24051680  addiu       $a1, $zero, 0x1680 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A3CCu; }
        if (ctx->pc != 0x20A3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A3CCu; }
        if (ctx->pc != 0x20A3CCu) { return; }
    }
    ctx->pc = 0x20A3CCu;
label_20a3cc:
    // 0x20a3cc: 0xc04e780  jal         func_139E00
label_20a3d0:
    if (ctx->pc == 0x20A3D0u) {
        ctx->pc = 0x20A3D0u;
            // 0x20a3d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20A3D4u;
        goto label_20a3d4;
    }
    ctx->pc = 0x20A3CCu;
    SET_GPR_U32(ctx, 31, 0x20A3D4u);
    ctx->pc = 0x20A3D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A3CCu;
            // 0x20a3d0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A3D4u; }
        if (ctx->pc != 0x20A3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A3D4u; }
        if (ctx->pc != 0x20A3D4u) { return; }
    }
    ctx->pc = 0x20A3D4u;
label_20a3d4:
    // 0x20a3d4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x20a3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_20a3d8:
    // 0x20a3d8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20a3d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_20a3dc:
    // 0x20a3dc: 0x24849710  addiu       $a0, $a0, -0x68F0
    ctx->pc = 0x20a3dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940432));
label_20a3e0:
    // 0x20a3e0: 0xc04e79c  jal         func_139E70
label_20a3e4:
    if (ctx->pc == 0x20A3E4u) {
        ctx->pc = 0x20A3E4u;
            // 0x20a3e4: 0x3406c200  ori         $a2, $zero, 0xC200 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49664);
        ctx->pc = 0x20A3E8u;
        goto label_20a3e8;
    }
    ctx->pc = 0x20A3E0u;
    SET_GPR_U32(ctx, 31, 0x20A3E8u);
    ctx->pc = 0x20A3E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A3E0u;
            // 0x20a3e4: 0x3406c200  ori         $a2, $zero, 0xC200 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49664);
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A3E8u; }
        if (ctx->pc != 0x20A3E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A3E8u; }
        if (ctx->pc != 0x20A3E8u) { return; }
    }
    ctx->pc = 0x20A3E8u;
label_20a3e8:
    // 0x20a3e8: 0xc04e780  jal         func_139E00
label_20a3ec:
    if (ctx->pc == 0x20A3ECu) {
        ctx->pc = 0x20A3ECu;
            // 0x20a3ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20A3F0u;
        goto label_20a3f0;
    }
    ctx->pc = 0x20A3E8u;
    SET_GPR_U32(ctx, 31, 0x20A3F0u);
    ctx->pc = 0x20A3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A3E8u;
            // 0x20a3ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A3F0u; }
        if (ctx->pc != 0x20A3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A3F0u; }
        if (ctx->pc != 0x20A3F0u) { return; }
    }
    ctx->pc = 0x20A3F0u;
label_20a3f0:
    // 0x20a3f0: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x20a3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_20a3f4:
    // 0x20a3f4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x20a3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_20a3f8:
    // 0x20a3f8: 0x8e050024  lw          $a1, 0x24($s0)
    ctx->pc = 0x20a3f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_20a3fc:
    // 0x20a3fc: 0x2484dbf0  addiu       $a0, $a0, -0x2410
    ctx->pc = 0x20a3fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958064));
label_20a400:
    // 0x20a400: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x20a400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_20a404:
    // 0x20a404: 0x653023  subu        $a2, $v1, $a1
    ctx->pc = 0x20a404u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_20a408:
    // 0x20a408: 0x51900  sll         $v1, $a1, 4
    ctx->pc = 0x20a408u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
label_20a40c:
    // 0x20a40c: 0xc04e79c  jal         func_139E70
label_20a410:
    if (ctx->pc == 0x20A410u) {
        ctx->pc = 0x20A410u;
            // 0x20a410: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x20A414u;
        goto label_20a414;
    }
    ctx->pc = 0x20A40Cu;
    SET_GPR_U32(ctx, 31, 0x20A414u);
    ctx->pc = 0x20A410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A40Cu;
            // 0x20a410: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A414u; }
        if (ctx->pc != 0x20A414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A414u; }
        if (ctx->pc != 0x20A414u) { return; }
    }
    ctx->pc = 0x20A414u;
label_20a414:
    // 0x20a414: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20a414u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20a418:
    // 0x20a418: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x20a418u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_20a41c:
    // 0x20a41c: 0xac20dc14  sw          $zero, -0x23EC($at)
    ctx->pc = 0x20a41cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958100), GPR_U32(ctx, 0));
label_20a420:
    // 0x20a420: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x20a420u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_20a424:
    // 0x20a424: 0xc080474  jal         func_2011D0
label_20a428:
    if (ctx->pc == 0x20A428u) {
        ctx->pc = 0x20A428u;
            // 0x20a428: 0xac20dc0c  sw          $zero, -0x23F4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294958092), GPR_U32(ctx, 0));
        ctx->pc = 0x20A42Cu;
        goto label_20a42c;
    }
    ctx->pc = 0x20A424u;
    SET_GPR_U32(ctx, 31, 0x20A42Cu);
    ctx->pc = 0x20A428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A424u;
            // 0x20a428: 0xac20dc0c  sw          $zero, -0x23F4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294958092), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2011D0u;
    if (runtime->hasFunction(0x2011D0u)) {
        auto targetFn = runtime->lookupFunction(0x2011D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A42Cu; }
        if (ctx->pc != 0x20A42Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadCharaCheck__11CMenuInventFv_0x2011d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A42Cu; }
        if (ctx->pc != 0x20A42Cu) { return; }
    }
    ctx->pc = 0x20A42Cu;
label_20a42c:
    // 0x20a42c: 0x8f839178  lw          $v1, -0x6E88($gp)
    ctx->pc = 0x20a42cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20a430:
    // 0x20a430: 0x84620110  lh          $v0, 0x110($v1)
    ctx->pc = 0x20a430u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 272)));
label_20a434:
    // 0x20a434: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_20a438:
    if (ctx->pc == 0x20A438u) {
        ctx->pc = 0x20A438u;
            // 0x20a438: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20A43Cu;
        goto label_20a43c;
    }
    ctx->pc = 0x20A434u;
    {
        const bool branch_taken_0x20a434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A434u;
            // 0x20a438: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a434) {
            ctx->pc = 0x20A494u;
            goto label_20a494;
        }
    }
    ctx->pc = 0x20A43Cu;
label_20a43c:
    // 0x20a43c: 0x10440003  beq         $v0, $a0, . + 4 + (0x3 << 2)
label_20a440:
    if (ctx->pc == 0x20A440u) {
        ctx->pc = 0x20A440u;
            // 0x20a440: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x20A444u;
        goto label_20a444;
    }
    ctx->pc = 0x20A43Cu;
    {
        const bool branch_taken_0x20a43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x20A440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A43Cu;
            // 0x20a440: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a43c) {
            ctx->pc = 0x20A44Cu;
            goto label_20a44c;
        }
    }
    ctx->pc = 0x20A444u;
label_20a444:
    // 0x20a444: 0x1000002d  b           . + 4 + (0x2D << 2)
label_20a448:
    if (ctx->pc == 0x20A448u) {
        ctx->pc = 0x20A448u;
            // 0x20a448: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x20A44Cu;
        goto label_20a44c;
    }
    ctx->pc = 0x20A444u;
    {
        const bool branch_taken_0x20a444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A444u;
            // 0x20a448: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a444) {
            ctx->pc = 0x20A4FCu;
            goto label_20a4fc;
        }
    }
    ctx->pc = 0x20A44Cu;
label_20a44c:
    // 0x20a44c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x20a44cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20a450:
    // 0x20a450: 0xc08900c  jal         func_224030
label_20a454:
    if (ctx->pc == 0x20A454u) {
        ctx->pc = 0x20A454u;
            // 0x20a454: 0xa4620014  sh          $v0, 0x14($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x20A458u;
        goto label_20a458;
    }
    ctx->pc = 0x20A450u;
    SET_GPR_U32(ctx, 31, 0x20A458u);
    ctx->pc = 0x20A454u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A450u;
            // 0x20a454: 0xa4620014  sh          $v0, 0x14($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224030u;
    if (runtime->hasFunction(0x224030u)) {
        auto targetFn = runtime->lookupFunction(0x224030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A458u; }
        if (ctx->pc != 0x20A458u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMainFrameModeSet__Fii_0x224030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A458u; }
        if (ctx->pc != 0x20A458u) { return; }
    }
    ctx->pc = 0x20A458u;
label_20a458:
    // 0x20a458: 0xc08d220  jal         func_234880
label_20a45c:
    if (ctx->pc == 0x20A45Cu) {
        ctx->pc = 0x20A45Cu;
            // 0x20a45c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20A460u;
        goto label_20a460;
    }
    ctx->pc = 0x20A458u;
    SET_GPR_U32(ctx, 31, 0x20A460u);
    ctx->pc = 0x20A45Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A458u;
            // 0x20a45c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234880u;
    if (runtime->hasFunction(0x234880u)) {
        auto targetFn = runtime->lookupFunction(0x234880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A460u; }
        if (ctx->pc != 0x20A460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReturnMenuIntern__Fi_0x234880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A460u; }
        if (ctx->pc != 0x20A460u) { return; }
    }
    ctx->pc = 0x20A460u;
label_20a460:
    // 0x20a460: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x20a460u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_20a464:
    // 0x20a464: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20a464u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_20a468:
    // 0x20a468: 0x8c22cb30  lw          $v0, -0x34D0($at)
    ctx->pc = 0x20a468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953776)));
label_20a46c:
    // 0x20a46c: 0x24a59b90  addiu       $a1, $a1, -0x6470
    ctx->pc = 0x20a46cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941584));
label_20a470:
    // 0x20a470: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x20a470u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_20a474:
    // 0x20a474: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x20a474u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
label_20a478:
    // 0x20a478: 0xc08abf0  jal         func_22AFC0
label_20a47c:
    if (ctx->pc == 0x20A47Cu) {
        ctx->pc = 0x20A47Cu;
            // 0x20a47c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20A480u;
        goto label_20a480;
    }
    ctx->pc = 0x20A478u;
    SET_GPR_U32(ctx, 31, 0x20A480u);
    ctx->pc = 0x20A47Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A478u;
            // 0x20a47c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AFC0u;
    if (runtime->hasFunction(0x22AFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22AFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A480u; }
        if (ctx->pc != 0x20A480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetFormDrawFlg__14CPosDataManageFPci_0x22afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A480u; }
        if (ctx->pc != 0x20A480u) { return; }
    }
    ctx->pc = 0x20A480u;
label_20a480:
    // 0x20a480: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20a480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20a484:
    // 0x20a484: 0xc080894  jal         func_202250
label_20a488:
    if (ctx->pc == 0x20A488u) {
        ctx->pc = 0x20A488u;
            // 0x20a488: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20A48Cu;
        goto label_20a48c;
    }
    ctx->pc = 0x20A484u;
    SET_GPR_U32(ctx, 31, 0x20A48Cu);
    ctx->pc = 0x20A488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A484u;
            // 0x20a488: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x202250u;
    if (runtime->hasFunction(0x202250u)) {
        auto targetFn = runtime->lookupFunction(0x202250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A48Cu; }
        if (ctx->pc != 0x20A48Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GradationSet__11CMenuInventFi_0x202250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A48Cu; }
        if (ctx->pc != 0x20A48Cu) { return; }
    }
    ctx->pc = 0x20A48Cu;
label_20a48c:
    // 0x20a48c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_20a490:
    if (ctx->pc == 0x20A490u) {
        ctx->pc = 0x20A494u;
        goto label_20a494;
    }
    ctx->pc = 0x20A48Cu;
    {
        const bool branch_taken_0x20a48c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a48c) {
            ctx->pc = 0x20A4F8u;
            goto label_20a4f8;
        }
    }
    ctx->pc = 0x20A494u;
label_20a494:
    // 0x20a494: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x20a494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_20a498:
    // 0x20a498: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20a498u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_20a49c:
    // 0x20a49c: 0xa4620014  sh          $v0, 0x14($v1)
    ctx->pc = 0x20a49cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 20), (uint16_t)GPR_U32(ctx, 2));
label_20a4a0:
    // 0x20a4a0: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20a4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20a4a4:
    // 0x20a4a4: 0xc08e7cc  jal         func_239F30
label_20a4a8:
    if (ctx->pc == 0x20A4A8u) {
        ctx->pc = 0x20A4A8u;
            // 0x20a4a8: 0x24a59ba0  addiu       $a1, $a1, -0x6460 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941600));
        ctx->pc = 0x20A4ACu;
        goto label_20a4ac;
    }
    ctx->pc = 0x20A4A4u;
    SET_GPR_U32(ctx, 31, 0x20A4ACu);
    ctx->pc = 0x20A4A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A4A4u;
            // 0x20a4a8: 0x24a59ba0  addiu       $a1, $a1, -0x6460 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A4ACu; }
        if (ctx->pc != 0x20A4ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A4ACu; }
        if (ctx->pc != 0x20A4ACu) { return; }
    }
    ctx->pc = 0x20A4ACu;
label_20a4ac:
    // 0x20a4ac: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20a4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20a4b0:
    // 0x20a4b0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20a4b0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_20a4b4:
    // 0x20a4b4: 0x8c420f10  lw          $v0, 0xF10($v0)
    ctx->pc = 0x20a4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3856)));
label_20a4b8:
    // 0x20a4b8: 0xac400018  sw          $zero, 0x18($v0)
    ctx->pc = 0x20a4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 0));
label_20a4bc:
    // 0x20a4bc: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20a4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20a4c0:
    // 0x20a4c0: 0xc08e7cc  jal         func_239F30
label_20a4c4:
    if (ctx->pc == 0x20A4C4u) {
        ctx->pc = 0x20A4C4u;
            // 0x20a4c4: 0x24a59298  addiu       $a1, $a1, -0x6D68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939288));
        ctx->pc = 0x20A4C8u;
        goto label_20a4c8;
    }
    ctx->pc = 0x20A4C0u;
    SET_GPR_U32(ctx, 31, 0x20A4C8u);
    ctx->pc = 0x20A4C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A4C0u;
            // 0x20a4c4: 0x24a59298  addiu       $a1, $a1, -0x6D68 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A4C8u; }
        if (ctx->pc != 0x20A4C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A4C8u; }
        if (ctx->pc != 0x20A4C8u) { return; }
    }
    ctx->pc = 0x20A4C8u;
label_20a4c8:
    // 0x20a4c8: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20a4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20a4cc:
    // 0x20a4cc: 0xc0807e0  jal         func_201F80
label_20a4d0:
    if (ctx->pc == 0x20A4D0u) {
        ctx->pc = 0x20A4D0u;
            // 0x20a4d0: 0x84850014  lh          $a1, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->pc = 0x20A4D4u;
        goto label_20a4d4;
    }
    ctx->pc = 0x20A4CCu;
    SET_GPR_U32(ctx, 31, 0x20A4D4u);
    ctx->pc = 0x20A4D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A4CCu;
            // 0x20a4d0: 0x84850014  lh          $a1, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201F80u;
    if (runtime->hasFunction(0x201F80u)) {
        auto targetFn = runtime->lookupFunction(0x201F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A4D4u; }
        if (ctx->pc != 0x20A4D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PrepareNextMode__11CMenuInventFi_0x201f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A4D4u; }
        if (ctx->pc != 0x20A4D4u) { return; }
    }
    ctx->pc = 0x20A4D4u;
label_20a4d4:
    // 0x20a4d4: 0x8f849178  lw          $a0, -0x6E88($gp)
    ctx->pc = 0x20a4d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20a4d8:
    // 0x20a4d8: 0xc080894  jal         func_202250
label_20a4dc:
    if (ctx->pc == 0x20A4DCu) {
        ctx->pc = 0x20A4DCu;
            // 0x20a4dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20A4E0u;
        goto label_20a4e0;
    }
    ctx->pc = 0x20A4D8u;
    SET_GPR_U32(ctx, 31, 0x20A4E0u);
    ctx->pc = 0x20A4DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A4D8u;
            // 0x20a4dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x202250u;
    if (runtime->hasFunction(0x202250u)) {
        auto targetFn = runtime->lookupFunction(0x202250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A4E0u; }
        if (ctx->pc != 0x20A4E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GradationSet__11CMenuInventFi_0x202250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A4E0u; }
        if (ctx->pc != 0x20A4E0u) { return; }
    }
    ctx->pc = 0x20A4E0u;
label_20a4e0:
    // 0x20a4e0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x20a4e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_20a4e4:
    // 0x20a4e4: 0xc08900c  jal         func_224030
label_20a4e8:
    if (ctx->pc == 0x20A4E8u) {
        ctx->pc = 0x20A4E8u;
            // 0x20a4e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20A4ECu;
        goto label_20a4ec;
    }
    ctx->pc = 0x20A4E4u;
    SET_GPR_U32(ctx, 31, 0x20A4ECu);
    ctx->pc = 0x20A4E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A4E4u;
            // 0x20a4e8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224030u;
    if (runtime->hasFunction(0x224030u)) {
        auto targetFn = runtime->lookupFunction(0x224030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A4ECu; }
        if (ctx->pc != 0x20A4ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMainFrameModeSet__Fii_0x224030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A4ECu; }
        if (ctx->pc != 0x20A4ECu) { return; }
    }
    ctx->pc = 0x20A4ECu;
label_20a4ec:
    // 0x20a4ec: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20a4ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a4f0:
    // 0x20a4f0: 0xc08e9f0  jal         func_23A7C0
label_20a4f4:
    if (ctx->pc == 0x20A4F4u) {
        ctx->pc = 0x20A4F4u;
            // 0x20a4f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20A4F8u;
        goto label_20a4f8;
    }
    ctx->pc = 0x20A4F0u;
    SET_GPR_U32(ctx, 31, 0x20A4F8u);
    ctx->pc = 0x20A4F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A4F0u;
            // 0x20a4f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A7C0u;
    if (runtime->hasFunction(0x23A7C0u)) {
        auto targetFn = runtime->lookupFunction(0x23A7C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A4F8u; }
        if (ctx->pc != 0x20A4F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpectolInfo__FP13CGameDataUsedP13CGameDataUsed_0x23a7c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A4F8u; }
        if (ctx->pc != 0x20A4F8u) { return; }
    }
    ctx->pc = 0x20A4F8u;
label_20a4f8:
    // 0x20a4f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x20a4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_20a4fc:
    // 0x20a4fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x20a4fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_20a500:
    // 0x20a500: 0xc08d150  jal         func_234540
label_20a504:
    if (ctx->pc == 0x20A504u) {
        ctx->pc = 0x20A508u;
        goto label_20a508;
    }
    ctx->pc = 0x20A500u;
    SET_GPR_U32(ctx, 31, 0x20A508u);
    ctx->pc = 0x234540u;
    if (runtime->hasFunction(0x234540u)) {
        auto targetFn = runtime->lookupFunction(0x234540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A508u; }
        if (ctx->pc != 0x20A508u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCamInit__Ff_0x234540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A508u; }
        if (ctx->pc != 0x20A508u) { return; }
    }
    ctx->pc = 0x20A508u;
label_20a508:
    // 0x20a508: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20a508u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20a50c:
    // 0x20a50c: 0xc08d20c  jal         func_234830
label_20a510:
    if (ctx->pc == 0x20A510u) {
        ctx->pc = 0x20A510u;
            // 0x20a510: 0xa382962c  sb          $v0, -0x69D4($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294940204), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x20A514u;
        goto label_20a514;
    }
    ctx->pc = 0x20A50Cu;
    SET_GPR_U32(ctx, 31, 0x20A514u);
    ctx->pc = 0x20A510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A50Cu;
            // 0x20a510: 0xa382962c  sb          $v0, -0x69D4($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294940204), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234830u;
    if (runtime->hasFunction(0x234830u)) {
        auto targetFn = runtime->lookupFunction(0x234830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A514u; }
        if (ctx->pc != 0x20A514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CursorSaveOptionState__Fv_0x234830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A514u; }
        if (ctx->pc != 0x20A514u) { return; }
    }
    ctx->pc = 0x20A514u;
label_20a514:
    // 0x20a514: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
label_20a518:
    if (ctx->pc == 0x20A518u) {
        ctx->pc = 0x20A51Cu;
        goto label_20a51c;
    }
    ctx->pc = 0x20A514u;
    {
        const bool branch_taken_0x20a514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a514) {
            ctx->pc = 0x20A5B0u;
            goto label_20a5b0;
        }
    }
    ctx->pc = 0x20A51Cu;
label_20a51c:
    // 0x20a51c: 0xc08cab4  jal         func_232AD0
label_20a520:
    if (ctx->pc == 0x20A520u) {
        ctx->pc = 0x20A524u;
        goto label_20a524;
    }
    ctx->pc = 0x20A51Cu;
    SET_GPR_U32(ctx, 31, 0x20A524u);
    ctx->pc = 0x232AD0u;
    if (runtime->hasFunction(0x232AD0u)) {
        auto targetFn = runtime->lookupFunction(0x232AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A524u; }
        if (ctx->pc != 0x20A524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuSysData__Fv_0x232ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A524u; }
        if (ctx->pc != 0x20A524u) { return; }
    }
    ctx->pc = 0x20A524u;
label_20a524:
    // 0x20a524: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_20a528:
    if (ctx->pc == 0x20A528u) {
        ctx->pc = 0x20A52Cu;
        goto label_20a52c;
    }
    ctx->pc = 0x20A524u;
    {
        const bool branch_taken_0x20a524 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20a524) {
            ctx->pc = 0x20A5B0u;
            goto label_20a5b0;
        }
    }
    ctx->pc = 0x20A52Cu;
label_20a52c:
    // 0x20a52c: 0x84440020  lh          $a0, 0x20($v0)
    ctx->pc = 0x20a52cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 32)));
label_20a530:
    // 0x20a530: 0x8f839178  lw          $v1, -0x6E88($gp)
    ctx->pc = 0x20a530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20a534:
    // 0x20a534: 0xac64011c  sw          $a0, 0x11C($v1)
    ctx->pc = 0x20a534u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 284), GPR_U32(ctx, 4));
label_20a538:
    // 0x20a538: 0x84440022  lh          $a0, 0x22($v0)
    ctx->pc = 0x20a538u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 34)));
label_20a53c:
    // 0x20a53c: 0x8f839178  lw          $v1, -0x6E88($gp)
    ctx->pc = 0x20a53cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20a540:
    // 0x20a540: 0xac640120  sw          $a0, 0x120($v1)
    ctx->pc = 0x20a540u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 288), GPR_U32(ctx, 4));
label_20a544:
    // 0x20a544: 0x84440030  lh          $a0, 0x30($v0)
    ctx->pc = 0x20a544u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_20a548:
    // 0x20a548: 0x8f839178  lw          $v1, -0x6E88($gp)
    ctx->pc = 0x20a548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20a54c:
    // 0x20a54c: 0xac640114  sw          $a0, 0x114($v1)
    ctx->pc = 0x20a54cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 276), GPR_U32(ctx, 4));
label_20a550:
    // 0x20a550: 0x84440032  lh          $a0, 0x32($v0)
    ctx->pc = 0x20a550u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 50)));
label_20a554:
    // 0x20a554: 0x8f839178  lw          $v1, -0x6E88($gp)
    ctx->pc = 0x20a554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20a558:
    // 0x20a558: 0xac640118  sw          $a0, 0x118($v1)
    ctx->pc = 0x20a558u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 280), GPR_U32(ctx, 4));
label_20a55c:
    // 0x20a55c: 0x84440034  lh          $a0, 0x34($v0)
    ctx->pc = 0x20a55cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 52)));
label_20a560:
    // 0x20a560: 0x8f839178  lw          $v1, -0x6E88($gp)
    ctx->pc = 0x20a560u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20a564:
    // 0x20a564: 0xac640124  sw          $a0, 0x124($v1)
    ctx->pc = 0x20a564u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 292), GPR_U32(ctx, 4));
label_20a568:
    // 0x20a568: 0x84440036  lh          $a0, 0x36($v0)
    ctx->pc = 0x20a568u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 54)));
label_20a56c:
    // 0x20a56c: 0x8f839178  lw          $v1, -0x6E88($gp)
    ctx->pc = 0x20a56cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20a570:
    // 0x20a570: 0xac640128  sw          $a0, 0x128($v1)
    ctx->pc = 0x20a570u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 296), GPR_U32(ctx, 4));
label_20a574:
    // 0x20a574: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x20a574u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_20a578:
    // 0x20a578: 0x8f839178  lw          $v1, -0x6E88($gp)
    ctx->pc = 0x20a578u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20a57c:
    // 0x20a57c: 0xac64012c  sw          $a0, 0x12C($v1)
    ctx->pc = 0x20a57cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 300), GPR_U32(ctx, 4));
label_20a580:
    // 0x20a580: 0x8444003a  lh          $a0, 0x3A($v0)
    ctx->pc = 0x20a580u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 58)));
label_20a584:
    // 0x20a584: 0x8f839178  lw          $v1, -0x6E88($gp)
    ctx->pc = 0x20a584u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20a588:
    // 0x20a588: 0xac640130  sw          $a0, 0x130($v1)
    ctx->pc = 0x20a588u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 304), GPR_U32(ctx, 4));
label_20a58c:
    // 0x20a58c: 0x8444003c  lh          $a0, 0x3C($v0)
    ctx->pc = 0x20a58cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 60)));
label_20a590:
    // 0x20a590: 0x8f839178  lw          $v1, -0x6E88($gp)
    ctx->pc = 0x20a590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20a594:
    // 0x20a594: 0xac640134  sw          $a0, 0x134($v1)
    ctx->pc = 0x20a594u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 308), GPR_U32(ctx, 4));
label_20a598:
    // 0x20a598: 0x8444003e  lh          $a0, 0x3E($v0)
    ctx->pc = 0x20a598u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 62)));
label_20a59c:
    // 0x20a59c: 0x8f839178  lw          $v1, -0x6E88($gp)
    ctx->pc = 0x20a59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20a5a0:
    // 0x20a5a0: 0xac640138  sw          $a0, 0x138($v1)
    ctx->pc = 0x20a5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 312), GPR_U32(ctx, 4));
label_20a5a4:
    // 0x20a5a4: 0x8443002e  lh          $v1, 0x2E($v0)
    ctx->pc = 0x20a5a4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 46)));
label_20a5a8:
    // 0x20a5a8: 0x8f829178  lw          $v0, -0x6E88($gp)
    ctx->pc = 0x20a5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20a5ac:
    // 0x20a5ac: 0xa4430392  sh          $v1, 0x392($v0)
    ctx->pc = 0x20a5acu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 914), (uint16_t)GPR_U32(ctx, 3));
label_20a5b0:
    // 0x20a5b0: 0x8f909178  lw          $s0, -0x6E88($gp)
    ctx->pc = 0x20a5b0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939000)));
label_20a5b4:
    // 0x20a5b4: 0xc068644  jal         func_1A1910
label_20a5b8:
    if (ctx->pc == 0x20A5B8u) {
        ctx->pc = 0x20A5B8u;
            // 0x20a5b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20A5BCu;
        goto label_20a5bc;
    }
    ctx->pc = 0x20A5B4u;
    SET_GPR_U32(ctx, 31, 0x20A5BCu);
    ctx->pc = 0x20A5B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A5B4u;
            // 0x20a5b8: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1910u;
    if (runtime->hasFunction(0x1A1910u)) {
        auto targetFn = runtime->lookupFunction(0x1A1910u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A5BCu; }
        if (ctx->pc != 0x20A5BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowBagMax__Fi_0x1a1910(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A5BCu; }
        if (ctx->pc != 0x20A5BCu) { return; }
    }
    ctx->pc = 0x20A5BCu;
label_20a5bc:
    // 0x20a5bc: 0x3c042aaa  lui         $a0, 0x2AAA
    ctx->pc = 0x20a5bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)10922 << 16));
label_20a5c0:
    // 0x20a5c0: 0x21fc2  srl         $v1, $v0, 31
    ctx->pc = 0x20a5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
label_20a5c4:
    // 0x20a5c4: 0x3485aaab  ori         $a1, $a0, 0xAAAB
    ctx->pc = 0x20a5c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)43691);
label_20a5c8:
    // 0x20a5c8: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x20a5c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_20a5cc:
    // 0x20a5cc: 0xa20018  mult        $zero, $a1, $v0
    ctx->pc = 0x20a5ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_20a5d0:
    // 0x20a5d0: 0x8e04011c  lw          $a0, 0x11C($s0)
    ctx->pc = 0x20a5d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 284)));
label_20a5d4:
    // 0x20a5d4: 0x8e050120  lw          $a1, 0x120($s0)
    ctx->pc = 0x20a5d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 288)));
label_20a5d8:
    // 0x20a5d8: 0x1010  mfhi        $v0
    ctx->pc = 0x20a5d8u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_20a5dc:
    // 0x20a5dc: 0xc089b7c  jal         func_226DF0
label_20a5e0:
    if (ctx->pc == 0x20A5E0u) {
        ctx->pc = 0x20A5E0u;
            // 0x20a5e0: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x20A5E4u;
        goto label_20a5e4;
    }
    ctx->pc = 0x20A5DCu;
    SET_GPR_U32(ctx, 31, 0x20A5E4u);
    ctx->pc = 0x20A5E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A5DCu;
            // 0x20a5e0: 0x433021  addu        $a2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x226DF0u;
    if (runtime->hasFunction(0x226DF0u)) {
        auto targetFn = runtime->lookupFunction(0x226DF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A5E4u; }
        if (ctx->pc != 0x20A5E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemBrdSetInfo__Fiiii_0x226df0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A5E4u; }
        if (ctx->pc != 0x20A5E4u) { return; }
    }
    ctx->pc = 0x20A5E4u;
label_20a5e4:
    // 0x20a5e4: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x20a5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_20a5e8:
    // 0x20a5e8: 0xac400070  sw          $zero, 0x70($v0)
    ctx->pc = 0x20a5e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 0));
label_20a5ec:
    // 0x20a5ec: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x20a5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_20a5f0:
    // 0x20a5f0: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x20a5f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_20a5f4:
    // 0x20a5f4: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x20a5f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_20a5f8:
    // 0x20a5f8: 0xc08f02c  jal         func_23C0B0
label_20a5fc:
    if (ctx->pc == 0x20A5FCu) {
        ctx->pc = 0x20A5FCu;
            // 0x20a5fc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x20A600u;
        goto label_20a600;
    }
    ctx->pc = 0x20A5F8u;
    SET_GPR_U32(ctx, 31, 0x20A600u);
    ctx->pc = 0x20A5FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A5F8u;
            // 0x20a5fc: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C0B0u;
    if (runtime->hasFunction(0x23C0B0u)) {
        auto targetFn = runtime->lookupFunction(0x23C0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A600u; }
        if (ctx->pc != 0x20A600u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWakuType__12CMenuKeyFuncFi_0x23c0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A600u; }
        if (ctx->pc != 0x20A600u) { return; }
    }
    ctx->pc = 0x20A600u;
label_20a600:
    // 0x20a600: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x20a600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_20a604:
    // 0x20a604: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x20a604u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_20a608:
    // 0x20a608: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20a608u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a60c:
    // 0x20a60c: 0xc08f058  jal         func_23C160
label_20a610:
    if (ctx->pc == 0x20A610u) {
        ctx->pc = 0x20A610u;
            // 0x20a610: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20A614u;
        goto label_20a614;
    }
    ctx->pc = 0x20A60Cu;
    SET_GPR_U32(ctx, 31, 0x20A614u);
    ctx->pc = 0x20A610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A60Cu;
            // 0x20a610: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C160u;
    if (runtime->hasFunction(0x23C160u)) {
        auto targetFn = runtime->lookupFunction(0x23C160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A614u; }
        if (ctx->pc != 0x20A614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetWakuWH__12CMenuKeyFuncFiii_0x23c160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A614u; }
        if (ctx->pc != 0x20A614u) { return; }
    }
    ctx->pc = 0x20A614u;
label_20a614:
    // 0x20a614: 0xc08fc00  jal         func_23F000
label_20a618:
    if (ctx->pc == 0x20A618u) {
        ctx->pc = 0x20A61Cu;
        goto label_20a61c;
    }
    ctx->pc = 0x20A614u;
    SET_GPR_U32(ctx, 31, 0x20A61Cu);
    ctx->pc = 0x23F000u;
    if (runtime->hasFunction(0x23F000u)) {
        auto targetFn = runtime->lookupFunction(0x23F000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A61Cu; }
        if (ctx->pc != 0x20A61Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEnableHaveItemNum__Fv_0x23f000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A61Cu; }
        if (ctx->pc != 0x20A61Cu) { return; }
    }
    ctx->pc = 0x20A61Cu;
label_20a61c:
    // 0x20a61c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20a61cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a620:
    // 0x20a620: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20a620u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a624:
    // 0x20a624: 0xc08891c  jal         func_222470
label_20a628:
    if (ctx->pc == 0x20A628u) {
        ctx->pc = 0x20A628u;
            // 0x20a628: 0xa3809160  sb          $zero, -0x6EA0($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294938976), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x20A62Cu;
        goto label_20a62c;
    }
    ctx->pc = 0x20A624u;
    SET_GPR_U32(ctx, 31, 0x20A62Cu);
    ctx->pc = 0x20A628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A624u;
            // 0x20a628: 0xa3809160  sb          $zero, -0x6EA0($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294938976), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222470u;
    if (runtime->hasFunction(0x222470u)) {
        auto targetFn = runtime->lookupFunction(0x222470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A62Cu; }
        if (ctx->pc != 0x20A62Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMenuDl__FP10mgCTexturei_0x222470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A62Cu; }
        if (ctx->pc != 0x20A62Cu) { return; }
    }
    ctx->pc = 0x20A62Cu;
label_20a62c:
    // 0x20a62c: 0xc088080  jal         func_220200
label_20a630:
    if (ctx->pc == 0x20A630u) {
        ctx->pc = 0x20A630u;
            // 0x20a630: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20A634u;
        goto label_20a634;
    }
    ctx->pc = 0x20A62Cu;
    SET_GPR_U32(ctx, 31, 0x20A634u);
    ctx->pc = 0x20A630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20A62Cu;
            // 0x20a630: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220200u;
    if (runtime->hasFunction(0x220200u)) {
        auto targetFn = runtime->lookupFunction(0x220200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A634u; }
        if (ctx->pc != 0x20A634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetModeMenuDrawItemBoard__Fi_0x220200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20A634u; }
        if (ctx->pc != 0x20A634u) { return; }
    }
    ctx->pc = 0x20A634u;
label_20a634:
    // 0x20a634: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20a634u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_20a638:
    // 0x20a638: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x20a638u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_20a63c:
    // 0x20a63c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x20a63cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_20a640:
    // 0x20a640: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x20a640u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20a644:
    // 0x20a644: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x20a644u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_20a648:
    // 0x20a648: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x20a648u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_20a64c:
    // 0x20a64c: 0x3e00008  jr          $ra
label_20a650:
    if (ctx->pc == 0x20A650u) {
        ctx->pc = 0x20A650u;
            // 0x20a650: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x20A654u;
        goto label_fallthrough_0x20a64c;
    }
    ctx->pc = 0x20A64Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A650u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A64Cu;
            // 0x20a650: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x20a64c:
    ctx->pc = 0x20A654u;
}
