#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: IsCreateObject__11CMenuInventFii
// Address: 0x202cb0 - 0x204268
void IsCreateObject__11CMenuInventFii_0x202cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("IsCreateObject__11CMenuInventFii_0x202cb0");
#endif

    switch (ctx->pc) {
        case 0x202cb0u: goto label_202cb0;
        case 0x202cb4u: goto label_202cb4;
        case 0x202cb8u: goto label_202cb8;
        case 0x202cbcu: goto label_202cbc;
        case 0x202cc0u: goto label_202cc0;
        case 0x202cc4u: goto label_202cc4;
        case 0x202cc8u: goto label_202cc8;
        case 0x202cccu: goto label_202ccc;
        case 0x202cd0u: goto label_202cd0;
        case 0x202cd4u: goto label_202cd4;
        case 0x202cd8u: goto label_202cd8;
        case 0x202cdcu: goto label_202cdc;
        case 0x202ce0u: goto label_202ce0;
        case 0x202ce4u: goto label_202ce4;
        case 0x202ce8u: goto label_202ce8;
        case 0x202cecu: goto label_202cec;
        case 0x202cf0u: goto label_202cf0;
        case 0x202cf4u: goto label_202cf4;
        case 0x202cf8u: goto label_202cf8;
        case 0x202cfcu: goto label_202cfc;
        case 0x202d00u: goto label_202d00;
        case 0x202d04u: goto label_202d04;
        case 0x202d08u: goto label_202d08;
        case 0x202d0cu: goto label_202d0c;
        case 0x202d10u: goto label_202d10;
        case 0x202d14u: goto label_202d14;
        case 0x202d18u: goto label_202d18;
        case 0x202d1cu: goto label_202d1c;
        case 0x202d20u: goto label_202d20;
        case 0x202d24u: goto label_202d24;
        case 0x202d28u: goto label_202d28;
        case 0x202d2cu: goto label_202d2c;
        case 0x202d30u: goto label_202d30;
        case 0x202d34u: goto label_202d34;
        case 0x202d38u: goto label_202d38;
        case 0x202d3cu: goto label_202d3c;
        case 0x202d40u: goto label_202d40;
        case 0x202d44u: goto label_202d44;
        case 0x202d48u: goto label_202d48;
        case 0x202d4cu: goto label_202d4c;
        case 0x202d50u: goto label_202d50;
        case 0x202d54u: goto label_202d54;
        case 0x202d58u: goto label_202d58;
        case 0x202d5cu: goto label_202d5c;
        case 0x202d60u: goto label_202d60;
        case 0x202d64u: goto label_202d64;
        case 0x202d68u: goto label_202d68;
        case 0x202d6cu: goto label_202d6c;
        case 0x202d70u: goto label_202d70;
        case 0x202d74u: goto label_202d74;
        case 0x202d78u: goto label_202d78;
        case 0x202d7cu: goto label_202d7c;
        case 0x202d80u: goto label_202d80;
        case 0x202d84u: goto label_202d84;
        case 0x202d88u: goto label_202d88;
        case 0x202d8cu: goto label_202d8c;
        case 0x202d90u: goto label_202d90;
        case 0x202d94u: goto label_202d94;
        case 0x202d98u: goto label_202d98;
        case 0x202d9cu: goto label_202d9c;
        case 0x202da0u: goto label_202da0;
        case 0x202da4u: goto label_202da4;
        case 0x202da8u: goto label_202da8;
        case 0x202dacu: goto label_202dac;
        case 0x202db0u: goto label_202db0;
        case 0x202db4u: goto label_202db4;
        case 0x202db8u: goto label_202db8;
        case 0x202dbcu: goto label_202dbc;
        case 0x202dc0u: goto label_202dc0;
        case 0x202dc4u: goto label_202dc4;
        case 0x202dc8u: goto label_202dc8;
        case 0x202dccu: goto label_202dcc;
        case 0x202dd0u: goto label_202dd0;
        case 0x202dd4u: goto label_202dd4;
        case 0x202dd8u: goto label_202dd8;
        case 0x202ddcu: goto label_202ddc;
        case 0x202de0u: goto label_202de0;
        case 0x202de4u: goto label_202de4;
        case 0x202de8u: goto label_202de8;
        case 0x202decu: goto label_202dec;
        case 0x202df0u: goto label_202df0;
        case 0x202df4u: goto label_202df4;
        case 0x202df8u: goto label_202df8;
        case 0x202dfcu: goto label_202dfc;
        case 0x202e00u: goto label_202e00;
        case 0x202e04u: goto label_202e04;
        case 0x202e08u: goto label_202e08;
        case 0x202e0cu: goto label_202e0c;
        case 0x202e10u: goto label_202e10;
        case 0x202e14u: goto label_202e14;
        case 0x202e18u: goto label_202e18;
        case 0x202e1cu: goto label_202e1c;
        case 0x202e20u: goto label_202e20;
        case 0x202e24u: goto label_202e24;
        case 0x202e28u: goto label_202e28;
        case 0x202e2cu: goto label_202e2c;
        case 0x202e30u: goto label_202e30;
        case 0x202e34u: goto label_202e34;
        case 0x202e38u: goto label_202e38;
        case 0x202e3cu: goto label_202e3c;
        case 0x202e40u: goto label_202e40;
        case 0x202e44u: goto label_202e44;
        case 0x202e48u: goto label_202e48;
        case 0x202e4cu: goto label_202e4c;
        case 0x202e50u: goto label_202e50;
        case 0x202e54u: goto label_202e54;
        case 0x202e58u: goto label_202e58;
        case 0x202e5cu: goto label_202e5c;
        case 0x202e60u: goto label_202e60;
        case 0x202e64u: goto label_202e64;
        case 0x202e68u: goto label_202e68;
        case 0x202e6cu: goto label_202e6c;
        case 0x202e70u: goto label_202e70;
        case 0x202e74u: goto label_202e74;
        case 0x202e78u: goto label_202e78;
        case 0x202e7cu: goto label_202e7c;
        case 0x202e80u: goto label_202e80;
        case 0x202e84u: goto label_202e84;
        case 0x202e88u: goto label_202e88;
        case 0x202e8cu: goto label_202e8c;
        case 0x202e90u: goto label_202e90;
        case 0x202e94u: goto label_202e94;
        case 0x202e98u: goto label_202e98;
        case 0x202e9cu: goto label_202e9c;
        case 0x202ea0u: goto label_202ea0;
        case 0x202ea4u: goto label_202ea4;
        case 0x202ea8u: goto label_202ea8;
        case 0x202eacu: goto label_202eac;
        case 0x202eb0u: goto label_202eb0;
        case 0x202eb4u: goto label_202eb4;
        case 0x202eb8u: goto label_202eb8;
        case 0x202ebcu: goto label_202ebc;
        case 0x202ec0u: goto label_202ec0;
        case 0x202ec4u: goto label_202ec4;
        case 0x202ec8u: goto label_202ec8;
        case 0x202eccu: goto label_202ecc;
        case 0x202ed0u: goto label_202ed0;
        case 0x202ed4u: goto label_202ed4;
        case 0x202ed8u: goto label_202ed8;
        case 0x202edcu: goto label_202edc;
        case 0x202ee0u: goto label_202ee0;
        case 0x202ee4u: goto label_202ee4;
        case 0x202ee8u: goto label_202ee8;
        case 0x202eecu: goto label_202eec;
        case 0x202ef0u: goto label_202ef0;
        case 0x202ef4u: goto label_202ef4;
        case 0x202ef8u: goto label_202ef8;
        case 0x202efcu: goto label_202efc;
        case 0x202f00u: goto label_202f00;
        case 0x202f04u: goto label_202f04;
        case 0x202f08u: goto label_202f08;
        case 0x202f0cu: goto label_202f0c;
        case 0x202f10u: goto label_202f10;
        case 0x202f14u: goto label_202f14;
        case 0x202f18u: goto label_202f18;
        case 0x202f1cu: goto label_202f1c;
        case 0x202f20u: goto label_202f20;
        case 0x202f24u: goto label_202f24;
        case 0x202f28u: goto label_202f28;
        case 0x202f2cu: goto label_202f2c;
        case 0x202f30u: goto label_202f30;
        case 0x202f34u: goto label_202f34;
        case 0x202f38u: goto label_202f38;
        case 0x202f3cu: goto label_202f3c;
        case 0x202f40u: goto label_202f40;
        case 0x202f44u: goto label_202f44;
        case 0x202f48u: goto label_202f48;
        case 0x202f4cu: goto label_202f4c;
        case 0x202f50u: goto label_202f50;
        case 0x202f54u: goto label_202f54;
        case 0x202f58u: goto label_202f58;
        case 0x202f5cu: goto label_202f5c;
        case 0x202f60u: goto label_202f60;
        case 0x202f64u: goto label_202f64;
        case 0x202f68u: goto label_202f68;
        case 0x202f6cu: goto label_202f6c;
        case 0x202f70u: goto label_202f70;
        case 0x202f74u: goto label_202f74;
        case 0x202f78u: goto label_202f78;
        case 0x202f7cu: goto label_202f7c;
        case 0x202f80u: goto label_202f80;
        case 0x202f84u: goto label_202f84;
        case 0x202f88u: goto label_202f88;
        case 0x202f8cu: goto label_202f8c;
        case 0x202f90u: goto label_202f90;
        case 0x202f94u: goto label_202f94;
        case 0x202f98u: goto label_202f98;
        case 0x202f9cu: goto label_202f9c;
        case 0x202fa0u: goto label_202fa0;
        case 0x202fa4u: goto label_202fa4;
        case 0x202fa8u: goto label_202fa8;
        case 0x202facu: goto label_202fac;
        case 0x202fb0u: goto label_202fb0;
        case 0x202fb4u: goto label_202fb4;
        case 0x202fb8u: goto label_202fb8;
        case 0x202fbcu: goto label_202fbc;
        case 0x202fc0u: goto label_202fc0;
        case 0x202fc4u: goto label_202fc4;
        case 0x202fc8u: goto label_202fc8;
        case 0x202fccu: goto label_202fcc;
        case 0x202fd0u: goto label_202fd0;
        case 0x202fd4u: goto label_202fd4;
        case 0x202fd8u: goto label_202fd8;
        case 0x202fdcu: goto label_202fdc;
        case 0x202fe0u: goto label_202fe0;
        case 0x202fe4u: goto label_202fe4;
        case 0x202fe8u: goto label_202fe8;
        case 0x202fecu: goto label_202fec;
        case 0x202ff0u: goto label_202ff0;
        case 0x202ff4u: goto label_202ff4;
        case 0x202ff8u: goto label_202ff8;
        case 0x202ffcu: goto label_202ffc;
        case 0x203000u: goto label_203000;
        case 0x203004u: goto label_203004;
        case 0x203008u: goto label_203008;
        case 0x20300cu: goto label_20300c;
        case 0x203010u: goto label_203010;
        case 0x203014u: goto label_203014;
        case 0x203018u: goto label_203018;
        case 0x20301cu: goto label_20301c;
        case 0x203020u: goto label_203020;
        case 0x203024u: goto label_203024;
        case 0x203028u: goto label_203028;
        case 0x20302cu: goto label_20302c;
        case 0x203030u: goto label_203030;
        case 0x203034u: goto label_203034;
        case 0x203038u: goto label_203038;
        case 0x20303cu: goto label_20303c;
        case 0x203040u: goto label_203040;
        case 0x203044u: goto label_203044;
        case 0x203048u: goto label_203048;
        case 0x20304cu: goto label_20304c;
        case 0x203050u: goto label_203050;
        case 0x203054u: goto label_203054;
        case 0x203058u: goto label_203058;
        case 0x20305cu: goto label_20305c;
        case 0x203060u: goto label_203060;
        case 0x203064u: goto label_203064;
        case 0x203068u: goto label_203068;
        case 0x20306cu: goto label_20306c;
        case 0x203070u: goto label_203070;
        case 0x203074u: goto label_203074;
        case 0x203078u: goto label_203078;
        case 0x20307cu: goto label_20307c;
        case 0x203080u: goto label_203080;
        case 0x203084u: goto label_203084;
        case 0x203088u: goto label_203088;
        case 0x20308cu: goto label_20308c;
        case 0x203090u: goto label_203090;
        case 0x203094u: goto label_203094;
        case 0x203098u: goto label_203098;
        case 0x20309cu: goto label_20309c;
        case 0x2030a0u: goto label_2030a0;
        case 0x2030a4u: goto label_2030a4;
        case 0x2030a8u: goto label_2030a8;
        case 0x2030acu: goto label_2030ac;
        case 0x2030b0u: goto label_2030b0;
        case 0x2030b4u: goto label_2030b4;
        case 0x2030b8u: goto label_2030b8;
        case 0x2030bcu: goto label_2030bc;
        case 0x2030c0u: goto label_2030c0;
        case 0x2030c4u: goto label_2030c4;
        case 0x2030c8u: goto label_2030c8;
        case 0x2030ccu: goto label_2030cc;
        case 0x2030d0u: goto label_2030d0;
        case 0x2030d4u: goto label_2030d4;
        case 0x2030d8u: goto label_2030d8;
        case 0x2030dcu: goto label_2030dc;
        case 0x2030e0u: goto label_2030e0;
        case 0x2030e4u: goto label_2030e4;
        case 0x2030e8u: goto label_2030e8;
        case 0x2030ecu: goto label_2030ec;
        case 0x2030f0u: goto label_2030f0;
        case 0x2030f4u: goto label_2030f4;
        case 0x2030f8u: goto label_2030f8;
        case 0x2030fcu: goto label_2030fc;
        case 0x203100u: goto label_203100;
        case 0x203104u: goto label_203104;
        case 0x203108u: goto label_203108;
        case 0x20310cu: goto label_20310c;
        case 0x203110u: goto label_203110;
        case 0x203114u: goto label_203114;
        case 0x203118u: goto label_203118;
        case 0x20311cu: goto label_20311c;
        case 0x203120u: goto label_203120;
        case 0x203124u: goto label_203124;
        case 0x203128u: goto label_203128;
        case 0x20312cu: goto label_20312c;
        case 0x203130u: goto label_203130;
        case 0x203134u: goto label_203134;
        case 0x203138u: goto label_203138;
        case 0x20313cu: goto label_20313c;
        case 0x203140u: goto label_203140;
        case 0x203144u: goto label_203144;
        case 0x203148u: goto label_203148;
        case 0x20314cu: goto label_20314c;
        case 0x203150u: goto label_203150;
        case 0x203154u: goto label_203154;
        case 0x203158u: goto label_203158;
        case 0x20315cu: goto label_20315c;
        case 0x203160u: goto label_203160;
        case 0x203164u: goto label_203164;
        case 0x203168u: goto label_203168;
        case 0x20316cu: goto label_20316c;
        case 0x203170u: goto label_203170;
        case 0x203174u: goto label_203174;
        case 0x203178u: goto label_203178;
        case 0x20317cu: goto label_20317c;
        case 0x203180u: goto label_203180;
        case 0x203184u: goto label_203184;
        case 0x203188u: goto label_203188;
        case 0x20318cu: goto label_20318c;
        case 0x203190u: goto label_203190;
        case 0x203194u: goto label_203194;
        case 0x203198u: goto label_203198;
        case 0x20319cu: goto label_20319c;
        case 0x2031a0u: goto label_2031a0;
        case 0x2031a4u: goto label_2031a4;
        case 0x2031a8u: goto label_2031a8;
        case 0x2031acu: goto label_2031ac;
        case 0x2031b0u: goto label_2031b0;
        case 0x2031b4u: goto label_2031b4;
        case 0x2031b8u: goto label_2031b8;
        case 0x2031bcu: goto label_2031bc;
        case 0x2031c0u: goto label_2031c0;
        case 0x2031c4u: goto label_2031c4;
        case 0x2031c8u: goto label_2031c8;
        case 0x2031ccu: goto label_2031cc;
        case 0x2031d0u: goto label_2031d0;
        case 0x2031d4u: goto label_2031d4;
        case 0x2031d8u: goto label_2031d8;
        case 0x2031dcu: goto label_2031dc;
        case 0x2031e0u: goto label_2031e0;
        case 0x2031e4u: goto label_2031e4;
        case 0x2031e8u: goto label_2031e8;
        case 0x2031ecu: goto label_2031ec;
        case 0x2031f0u: goto label_2031f0;
        case 0x2031f4u: goto label_2031f4;
        case 0x2031f8u: goto label_2031f8;
        case 0x2031fcu: goto label_2031fc;
        case 0x203200u: goto label_203200;
        case 0x203204u: goto label_203204;
        case 0x203208u: goto label_203208;
        case 0x20320cu: goto label_20320c;
        case 0x203210u: goto label_203210;
        case 0x203214u: goto label_203214;
        case 0x203218u: goto label_203218;
        case 0x20321cu: goto label_20321c;
        case 0x203220u: goto label_203220;
        case 0x203224u: goto label_203224;
        case 0x203228u: goto label_203228;
        case 0x20322cu: goto label_20322c;
        case 0x203230u: goto label_203230;
        case 0x203234u: goto label_203234;
        case 0x203238u: goto label_203238;
        case 0x20323cu: goto label_20323c;
        case 0x203240u: goto label_203240;
        case 0x203244u: goto label_203244;
        case 0x203248u: goto label_203248;
        case 0x20324cu: goto label_20324c;
        case 0x203250u: goto label_203250;
        case 0x203254u: goto label_203254;
        case 0x203258u: goto label_203258;
        case 0x20325cu: goto label_20325c;
        case 0x203260u: goto label_203260;
        case 0x203264u: goto label_203264;
        case 0x203268u: goto label_203268;
        case 0x20326cu: goto label_20326c;
        case 0x203270u: goto label_203270;
        case 0x203274u: goto label_203274;
        case 0x203278u: goto label_203278;
        case 0x20327cu: goto label_20327c;
        case 0x203280u: goto label_203280;
        case 0x203284u: goto label_203284;
        case 0x203288u: goto label_203288;
        case 0x20328cu: goto label_20328c;
        case 0x203290u: goto label_203290;
        case 0x203294u: goto label_203294;
        case 0x203298u: goto label_203298;
        case 0x20329cu: goto label_20329c;
        case 0x2032a0u: goto label_2032a0;
        case 0x2032a4u: goto label_2032a4;
        case 0x2032a8u: goto label_2032a8;
        case 0x2032acu: goto label_2032ac;
        case 0x2032b0u: goto label_2032b0;
        case 0x2032b4u: goto label_2032b4;
        case 0x2032b8u: goto label_2032b8;
        case 0x2032bcu: goto label_2032bc;
        case 0x2032c0u: goto label_2032c0;
        case 0x2032c4u: goto label_2032c4;
        case 0x2032c8u: goto label_2032c8;
        case 0x2032ccu: goto label_2032cc;
        case 0x2032d0u: goto label_2032d0;
        case 0x2032d4u: goto label_2032d4;
        case 0x2032d8u: goto label_2032d8;
        case 0x2032dcu: goto label_2032dc;
        case 0x2032e0u: goto label_2032e0;
        case 0x2032e4u: goto label_2032e4;
        case 0x2032e8u: goto label_2032e8;
        case 0x2032ecu: goto label_2032ec;
        case 0x2032f0u: goto label_2032f0;
        case 0x2032f4u: goto label_2032f4;
        case 0x2032f8u: goto label_2032f8;
        case 0x2032fcu: goto label_2032fc;
        case 0x203300u: goto label_203300;
        case 0x203304u: goto label_203304;
        case 0x203308u: goto label_203308;
        case 0x20330cu: goto label_20330c;
        case 0x203310u: goto label_203310;
        case 0x203314u: goto label_203314;
        case 0x203318u: goto label_203318;
        case 0x20331cu: goto label_20331c;
        case 0x203320u: goto label_203320;
        case 0x203324u: goto label_203324;
        case 0x203328u: goto label_203328;
        case 0x20332cu: goto label_20332c;
        case 0x203330u: goto label_203330;
        case 0x203334u: goto label_203334;
        case 0x203338u: goto label_203338;
        case 0x20333cu: goto label_20333c;
        case 0x203340u: goto label_203340;
        case 0x203344u: goto label_203344;
        case 0x203348u: goto label_203348;
        case 0x20334cu: goto label_20334c;
        case 0x203350u: goto label_203350;
        case 0x203354u: goto label_203354;
        case 0x203358u: goto label_203358;
        case 0x20335cu: goto label_20335c;
        case 0x203360u: goto label_203360;
        case 0x203364u: goto label_203364;
        case 0x203368u: goto label_203368;
        case 0x20336cu: goto label_20336c;
        case 0x203370u: goto label_203370;
        case 0x203374u: goto label_203374;
        case 0x203378u: goto label_203378;
        case 0x20337cu: goto label_20337c;
        case 0x203380u: goto label_203380;
        case 0x203384u: goto label_203384;
        case 0x203388u: goto label_203388;
        case 0x20338cu: goto label_20338c;
        case 0x203390u: goto label_203390;
        case 0x203394u: goto label_203394;
        case 0x203398u: goto label_203398;
        case 0x20339cu: goto label_20339c;
        case 0x2033a0u: goto label_2033a0;
        case 0x2033a4u: goto label_2033a4;
        case 0x2033a8u: goto label_2033a8;
        case 0x2033acu: goto label_2033ac;
        case 0x2033b0u: goto label_2033b0;
        case 0x2033b4u: goto label_2033b4;
        case 0x2033b8u: goto label_2033b8;
        case 0x2033bcu: goto label_2033bc;
        case 0x2033c0u: goto label_2033c0;
        case 0x2033c4u: goto label_2033c4;
        case 0x2033c8u: goto label_2033c8;
        case 0x2033ccu: goto label_2033cc;
        case 0x2033d0u: goto label_2033d0;
        case 0x2033d4u: goto label_2033d4;
        case 0x2033d8u: goto label_2033d8;
        case 0x2033dcu: goto label_2033dc;
        case 0x2033e0u: goto label_2033e0;
        case 0x2033e4u: goto label_2033e4;
        case 0x2033e8u: goto label_2033e8;
        case 0x2033ecu: goto label_2033ec;
        case 0x2033f0u: goto label_2033f0;
        case 0x2033f4u: goto label_2033f4;
        case 0x2033f8u: goto label_2033f8;
        case 0x2033fcu: goto label_2033fc;
        case 0x203400u: goto label_203400;
        case 0x203404u: goto label_203404;
        case 0x203408u: goto label_203408;
        case 0x20340cu: goto label_20340c;
        case 0x203410u: goto label_203410;
        case 0x203414u: goto label_203414;
        case 0x203418u: goto label_203418;
        case 0x20341cu: goto label_20341c;
        case 0x203420u: goto label_203420;
        case 0x203424u: goto label_203424;
        case 0x203428u: goto label_203428;
        case 0x20342cu: goto label_20342c;
        case 0x203430u: goto label_203430;
        case 0x203434u: goto label_203434;
        case 0x203438u: goto label_203438;
        case 0x20343cu: goto label_20343c;
        case 0x203440u: goto label_203440;
        case 0x203444u: goto label_203444;
        case 0x203448u: goto label_203448;
        case 0x20344cu: goto label_20344c;
        case 0x203450u: goto label_203450;
        case 0x203454u: goto label_203454;
        case 0x203458u: goto label_203458;
        case 0x20345cu: goto label_20345c;
        case 0x203460u: goto label_203460;
        case 0x203464u: goto label_203464;
        case 0x203468u: goto label_203468;
        case 0x20346cu: goto label_20346c;
        case 0x203470u: goto label_203470;
        case 0x203474u: goto label_203474;
        case 0x203478u: goto label_203478;
        case 0x20347cu: goto label_20347c;
        case 0x203480u: goto label_203480;
        case 0x203484u: goto label_203484;
        case 0x203488u: goto label_203488;
        case 0x20348cu: goto label_20348c;
        case 0x203490u: goto label_203490;
        case 0x203494u: goto label_203494;
        case 0x203498u: goto label_203498;
        case 0x20349cu: goto label_20349c;
        case 0x2034a0u: goto label_2034a0;
        case 0x2034a4u: goto label_2034a4;
        case 0x2034a8u: goto label_2034a8;
        case 0x2034acu: goto label_2034ac;
        case 0x2034b0u: goto label_2034b0;
        case 0x2034b4u: goto label_2034b4;
        case 0x2034b8u: goto label_2034b8;
        case 0x2034bcu: goto label_2034bc;
        case 0x2034c0u: goto label_2034c0;
        case 0x2034c4u: goto label_2034c4;
        case 0x2034c8u: goto label_2034c8;
        case 0x2034ccu: goto label_2034cc;
        case 0x2034d0u: goto label_2034d0;
        case 0x2034d4u: goto label_2034d4;
        case 0x2034d8u: goto label_2034d8;
        case 0x2034dcu: goto label_2034dc;
        case 0x2034e0u: goto label_2034e0;
        case 0x2034e4u: goto label_2034e4;
        case 0x2034e8u: goto label_2034e8;
        case 0x2034ecu: goto label_2034ec;
        case 0x2034f0u: goto label_2034f0;
        case 0x2034f4u: goto label_2034f4;
        case 0x2034f8u: goto label_2034f8;
        case 0x2034fcu: goto label_2034fc;
        case 0x203500u: goto label_203500;
        case 0x203504u: goto label_203504;
        case 0x203508u: goto label_203508;
        case 0x20350cu: goto label_20350c;
        case 0x203510u: goto label_203510;
        case 0x203514u: goto label_203514;
        case 0x203518u: goto label_203518;
        case 0x20351cu: goto label_20351c;
        case 0x203520u: goto label_203520;
        case 0x203524u: goto label_203524;
        case 0x203528u: goto label_203528;
        case 0x20352cu: goto label_20352c;
        case 0x203530u: goto label_203530;
        case 0x203534u: goto label_203534;
        case 0x203538u: goto label_203538;
        case 0x20353cu: goto label_20353c;
        case 0x203540u: goto label_203540;
        case 0x203544u: goto label_203544;
        case 0x203548u: goto label_203548;
        case 0x20354cu: goto label_20354c;
        case 0x203550u: goto label_203550;
        case 0x203554u: goto label_203554;
        case 0x203558u: goto label_203558;
        case 0x20355cu: goto label_20355c;
        case 0x203560u: goto label_203560;
        case 0x203564u: goto label_203564;
        case 0x203568u: goto label_203568;
        case 0x20356cu: goto label_20356c;
        case 0x203570u: goto label_203570;
        case 0x203574u: goto label_203574;
        case 0x203578u: goto label_203578;
        case 0x20357cu: goto label_20357c;
        case 0x203580u: goto label_203580;
        case 0x203584u: goto label_203584;
        case 0x203588u: goto label_203588;
        case 0x20358cu: goto label_20358c;
        case 0x203590u: goto label_203590;
        case 0x203594u: goto label_203594;
        case 0x203598u: goto label_203598;
        case 0x20359cu: goto label_20359c;
        case 0x2035a0u: goto label_2035a0;
        case 0x2035a4u: goto label_2035a4;
        case 0x2035a8u: goto label_2035a8;
        case 0x2035acu: goto label_2035ac;
        case 0x2035b0u: goto label_2035b0;
        case 0x2035b4u: goto label_2035b4;
        case 0x2035b8u: goto label_2035b8;
        case 0x2035bcu: goto label_2035bc;
        case 0x2035c0u: goto label_2035c0;
        case 0x2035c4u: goto label_2035c4;
        case 0x2035c8u: goto label_2035c8;
        case 0x2035ccu: goto label_2035cc;
        case 0x2035d0u: goto label_2035d0;
        case 0x2035d4u: goto label_2035d4;
        case 0x2035d8u: goto label_2035d8;
        case 0x2035dcu: goto label_2035dc;
        case 0x2035e0u: goto label_2035e0;
        case 0x2035e4u: goto label_2035e4;
        case 0x2035e8u: goto label_2035e8;
        case 0x2035ecu: goto label_2035ec;
        case 0x2035f0u: goto label_2035f0;
        case 0x2035f4u: goto label_2035f4;
        case 0x2035f8u: goto label_2035f8;
        case 0x2035fcu: goto label_2035fc;
        case 0x203600u: goto label_203600;
        case 0x203604u: goto label_203604;
        case 0x203608u: goto label_203608;
        case 0x20360cu: goto label_20360c;
        case 0x203610u: goto label_203610;
        case 0x203614u: goto label_203614;
        case 0x203618u: goto label_203618;
        case 0x20361cu: goto label_20361c;
        case 0x203620u: goto label_203620;
        case 0x203624u: goto label_203624;
        case 0x203628u: goto label_203628;
        case 0x20362cu: goto label_20362c;
        case 0x203630u: goto label_203630;
        case 0x203634u: goto label_203634;
        case 0x203638u: goto label_203638;
        case 0x20363cu: goto label_20363c;
        case 0x203640u: goto label_203640;
        case 0x203644u: goto label_203644;
        case 0x203648u: goto label_203648;
        case 0x20364cu: goto label_20364c;
        case 0x203650u: goto label_203650;
        case 0x203654u: goto label_203654;
        case 0x203658u: goto label_203658;
        case 0x20365cu: goto label_20365c;
        case 0x203660u: goto label_203660;
        case 0x203664u: goto label_203664;
        case 0x203668u: goto label_203668;
        case 0x20366cu: goto label_20366c;
        case 0x203670u: goto label_203670;
        case 0x203674u: goto label_203674;
        case 0x203678u: goto label_203678;
        case 0x20367cu: goto label_20367c;
        case 0x203680u: goto label_203680;
        case 0x203684u: goto label_203684;
        case 0x203688u: goto label_203688;
        case 0x20368cu: goto label_20368c;
        case 0x203690u: goto label_203690;
        case 0x203694u: goto label_203694;
        case 0x203698u: goto label_203698;
        case 0x20369cu: goto label_20369c;
        case 0x2036a0u: goto label_2036a0;
        case 0x2036a4u: goto label_2036a4;
        case 0x2036a8u: goto label_2036a8;
        case 0x2036acu: goto label_2036ac;
        case 0x2036b0u: goto label_2036b0;
        case 0x2036b4u: goto label_2036b4;
        case 0x2036b8u: goto label_2036b8;
        case 0x2036bcu: goto label_2036bc;
        case 0x2036c0u: goto label_2036c0;
        case 0x2036c4u: goto label_2036c4;
        case 0x2036c8u: goto label_2036c8;
        case 0x2036ccu: goto label_2036cc;
        case 0x2036d0u: goto label_2036d0;
        case 0x2036d4u: goto label_2036d4;
        case 0x2036d8u: goto label_2036d8;
        case 0x2036dcu: goto label_2036dc;
        case 0x2036e0u: goto label_2036e0;
        case 0x2036e4u: goto label_2036e4;
        case 0x2036e8u: goto label_2036e8;
        case 0x2036ecu: goto label_2036ec;
        case 0x2036f0u: goto label_2036f0;
        case 0x2036f4u: goto label_2036f4;
        case 0x2036f8u: goto label_2036f8;
        case 0x2036fcu: goto label_2036fc;
        case 0x203700u: goto label_203700;
        case 0x203704u: goto label_203704;
        case 0x203708u: goto label_203708;
        case 0x20370cu: goto label_20370c;
        case 0x203710u: goto label_203710;
        case 0x203714u: goto label_203714;
        case 0x203718u: goto label_203718;
        case 0x20371cu: goto label_20371c;
        case 0x203720u: goto label_203720;
        case 0x203724u: goto label_203724;
        case 0x203728u: goto label_203728;
        case 0x20372cu: goto label_20372c;
        case 0x203730u: goto label_203730;
        case 0x203734u: goto label_203734;
        case 0x203738u: goto label_203738;
        case 0x20373cu: goto label_20373c;
        case 0x203740u: goto label_203740;
        case 0x203744u: goto label_203744;
        case 0x203748u: goto label_203748;
        case 0x20374cu: goto label_20374c;
        case 0x203750u: goto label_203750;
        case 0x203754u: goto label_203754;
        case 0x203758u: goto label_203758;
        case 0x20375cu: goto label_20375c;
        case 0x203760u: goto label_203760;
        case 0x203764u: goto label_203764;
        case 0x203768u: goto label_203768;
        case 0x20376cu: goto label_20376c;
        case 0x203770u: goto label_203770;
        case 0x203774u: goto label_203774;
        case 0x203778u: goto label_203778;
        case 0x20377cu: goto label_20377c;
        case 0x203780u: goto label_203780;
        case 0x203784u: goto label_203784;
        case 0x203788u: goto label_203788;
        case 0x20378cu: goto label_20378c;
        case 0x203790u: goto label_203790;
        case 0x203794u: goto label_203794;
        case 0x203798u: goto label_203798;
        case 0x20379cu: goto label_20379c;
        case 0x2037a0u: goto label_2037a0;
        case 0x2037a4u: goto label_2037a4;
        case 0x2037a8u: goto label_2037a8;
        case 0x2037acu: goto label_2037ac;
        case 0x2037b0u: goto label_2037b0;
        case 0x2037b4u: goto label_2037b4;
        case 0x2037b8u: goto label_2037b8;
        case 0x2037bcu: goto label_2037bc;
        case 0x2037c0u: goto label_2037c0;
        case 0x2037c4u: goto label_2037c4;
        case 0x2037c8u: goto label_2037c8;
        case 0x2037ccu: goto label_2037cc;
        case 0x2037d0u: goto label_2037d0;
        case 0x2037d4u: goto label_2037d4;
        case 0x2037d8u: goto label_2037d8;
        case 0x2037dcu: goto label_2037dc;
        case 0x2037e0u: goto label_2037e0;
        case 0x2037e4u: goto label_2037e4;
        case 0x2037e8u: goto label_2037e8;
        case 0x2037ecu: goto label_2037ec;
        case 0x2037f0u: goto label_2037f0;
        case 0x2037f4u: goto label_2037f4;
        case 0x2037f8u: goto label_2037f8;
        case 0x2037fcu: goto label_2037fc;
        case 0x203800u: goto label_203800;
        case 0x203804u: goto label_203804;
        case 0x203808u: goto label_203808;
        case 0x20380cu: goto label_20380c;
        case 0x203810u: goto label_203810;
        case 0x203814u: goto label_203814;
        case 0x203818u: goto label_203818;
        case 0x20381cu: goto label_20381c;
        case 0x203820u: goto label_203820;
        case 0x203824u: goto label_203824;
        case 0x203828u: goto label_203828;
        case 0x20382cu: goto label_20382c;
        case 0x203830u: goto label_203830;
        case 0x203834u: goto label_203834;
        case 0x203838u: goto label_203838;
        case 0x20383cu: goto label_20383c;
        case 0x203840u: goto label_203840;
        case 0x203844u: goto label_203844;
        case 0x203848u: goto label_203848;
        case 0x20384cu: goto label_20384c;
        case 0x203850u: goto label_203850;
        case 0x203854u: goto label_203854;
        case 0x203858u: goto label_203858;
        case 0x20385cu: goto label_20385c;
        case 0x203860u: goto label_203860;
        case 0x203864u: goto label_203864;
        case 0x203868u: goto label_203868;
        case 0x20386cu: goto label_20386c;
        case 0x203870u: goto label_203870;
        case 0x203874u: goto label_203874;
        case 0x203878u: goto label_203878;
        case 0x20387cu: goto label_20387c;
        case 0x203880u: goto label_203880;
        case 0x203884u: goto label_203884;
        case 0x203888u: goto label_203888;
        case 0x20388cu: goto label_20388c;
        case 0x203890u: goto label_203890;
        case 0x203894u: goto label_203894;
        case 0x203898u: goto label_203898;
        case 0x20389cu: goto label_20389c;
        case 0x2038a0u: goto label_2038a0;
        case 0x2038a4u: goto label_2038a4;
        case 0x2038a8u: goto label_2038a8;
        case 0x2038acu: goto label_2038ac;
        case 0x2038b0u: goto label_2038b0;
        case 0x2038b4u: goto label_2038b4;
        case 0x2038b8u: goto label_2038b8;
        case 0x2038bcu: goto label_2038bc;
        case 0x2038c0u: goto label_2038c0;
        case 0x2038c4u: goto label_2038c4;
        case 0x2038c8u: goto label_2038c8;
        case 0x2038ccu: goto label_2038cc;
        case 0x2038d0u: goto label_2038d0;
        case 0x2038d4u: goto label_2038d4;
        case 0x2038d8u: goto label_2038d8;
        case 0x2038dcu: goto label_2038dc;
        case 0x2038e0u: goto label_2038e0;
        case 0x2038e4u: goto label_2038e4;
        case 0x2038e8u: goto label_2038e8;
        case 0x2038ecu: goto label_2038ec;
        case 0x2038f0u: goto label_2038f0;
        case 0x2038f4u: goto label_2038f4;
        case 0x2038f8u: goto label_2038f8;
        case 0x2038fcu: goto label_2038fc;
        case 0x203900u: goto label_203900;
        case 0x203904u: goto label_203904;
        case 0x203908u: goto label_203908;
        case 0x20390cu: goto label_20390c;
        case 0x203910u: goto label_203910;
        case 0x203914u: goto label_203914;
        case 0x203918u: goto label_203918;
        case 0x20391cu: goto label_20391c;
        case 0x203920u: goto label_203920;
        case 0x203924u: goto label_203924;
        case 0x203928u: goto label_203928;
        case 0x20392cu: goto label_20392c;
        case 0x203930u: goto label_203930;
        case 0x203934u: goto label_203934;
        case 0x203938u: goto label_203938;
        case 0x20393cu: goto label_20393c;
        case 0x203940u: goto label_203940;
        case 0x203944u: goto label_203944;
        case 0x203948u: goto label_203948;
        case 0x20394cu: goto label_20394c;
        case 0x203950u: goto label_203950;
        case 0x203954u: goto label_203954;
        case 0x203958u: goto label_203958;
        case 0x20395cu: goto label_20395c;
        case 0x203960u: goto label_203960;
        case 0x203964u: goto label_203964;
        case 0x203968u: goto label_203968;
        case 0x20396cu: goto label_20396c;
        case 0x203970u: goto label_203970;
        case 0x203974u: goto label_203974;
        case 0x203978u: goto label_203978;
        case 0x20397cu: goto label_20397c;
        case 0x203980u: goto label_203980;
        case 0x203984u: goto label_203984;
        case 0x203988u: goto label_203988;
        case 0x20398cu: goto label_20398c;
        case 0x203990u: goto label_203990;
        case 0x203994u: goto label_203994;
        case 0x203998u: goto label_203998;
        case 0x20399cu: goto label_20399c;
        case 0x2039a0u: goto label_2039a0;
        case 0x2039a4u: goto label_2039a4;
        case 0x2039a8u: goto label_2039a8;
        case 0x2039acu: goto label_2039ac;
        case 0x2039b0u: goto label_2039b0;
        case 0x2039b4u: goto label_2039b4;
        case 0x2039b8u: goto label_2039b8;
        case 0x2039bcu: goto label_2039bc;
        case 0x2039c0u: goto label_2039c0;
        case 0x2039c4u: goto label_2039c4;
        case 0x2039c8u: goto label_2039c8;
        case 0x2039ccu: goto label_2039cc;
        case 0x2039d0u: goto label_2039d0;
        case 0x2039d4u: goto label_2039d4;
        case 0x2039d8u: goto label_2039d8;
        case 0x2039dcu: goto label_2039dc;
        case 0x2039e0u: goto label_2039e0;
        case 0x2039e4u: goto label_2039e4;
        case 0x2039e8u: goto label_2039e8;
        case 0x2039ecu: goto label_2039ec;
        case 0x2039f0u: goto label_2039f0;
        case 0x2039f4u: goto label_2039f4;
        case 0x2039f8u: goto label_2039f8;
        case 0x2039fcu: goto label_2039fc;
        case 0x203a00u: goto label_203a00;
        case 0x203a04u: goto label_203a04;
        case 0x203a08u: goto label_203a08;
        case 0x203a0cu: goto label_203a0c;
        case 0x203a10u: goto label_203a10;
        case 0x203a14u: goto label_203a14;
        case 0x203a18u: goto label_203a18;
        case 0x203a1cu: goto label_203a1c;
        case 0x203a20u: goto label_203a20;
        case 0x203a24u: goto label_203a24;
        case 0x203a28u: goto label_203a28;
        case 0x203a2cu: goto label_203a2c;
        case 0x203a30u: goto label_203a30;
        case 0x203a34u: goto label_203a34;
        case 0x203a38u: goto label_203a38;
        case 0x203a3cu: goto label_203a3c;
        case 0x203a40u: goto label_203a40;
        case 0x203a44u: goto label_203a44;
        case 0x203a48u: goto label_203a48;
        case 0x203a4cu: goto label_203a4c;
        case 0x203a50u: goto label_203a50;
        case 0x203a54u: goto label_203a54;
        case 0x203a58u: goto label_203a58;
        case 0x203a5cu: goto label_203a5c;
        case 0x203a60u: goto label_203a60;
        case 0x203a64u: goto label_203a64;
        case 0x203a68u: goto label_203a68;
        case 0x203a6cu: goto label_203a6c;
        case 0x203a70u: goto label_203a70;
        case 0x203a74u: goto label_203a74;
        case 0x203a78u: goto label_203a78;
        case 0x203a7cu: goto label_203a7c;
        case 0x203a80u: goto label_203a80;
        case 0x203a84u: goto label_203a84;
        case 0x203a88u: goto label_203a88;
        case 0x203a8cu: goto label_203a8c;
        case 0x203a90u: goto label_203a90;
        case 0x203a94u: goto label_203a94;
        case 0x203a98u: goto label_203a98;
        case 0x203a9cu: goto label_203a9c;
        case 0x203aa0u: goto label_203aa0;
        case 0x203aa4u: goto label_203aa4;
        case 0x203aa8u: goto label_203aa8;
        case 0x203aacu: goto label_203aac;
        case 0x203ab0u: goto label_203ab0;
        case 0x203ab4u: goto label_203ab4;
        case 0x203ab8u: goto label_203ab8;
        case 0x203abcu: goto label_203abc;
        case 0x203ac0u: goto label_203ac0;
        case 0x203ac4u: goto label_203ac4;
        case 0x203ac8u: goto label_203ac8;
        case 0x203accu: goto label_203acc;
        case 0x203ad0u: goto label_203ad0;
        case 0x203ad4u: goto label_203ad4;
        case 0x203ad8u: goto label_203ad8;
        case 0x203adcu: goto label_203adc;
        case 0x203ae0u: goto label_203ae0;
        case 0x203ae4u: goto label_203ae4;
        case 0x203ae8u: goto label_203ae8;
        case 0x203aecu: goto label_203aec;
        case 0x203af0u: goto label_203af0;
        case 0x203af4u: goto label_203af4;
        case 0x203af8u: goto label_203af8;
        case 0x203afcu: goto label_203afc;
        case 0x203b00u: goto label_203b00;
        case 0x203b04u: goto label_203b04;
        case 0x203b08u: goto label_203b08;
        case 0x203b0cu: goto label_203b0c;
        case 0x203b10u: goto label_203b10;
        case 0x203b14u: goto label_203b14;
        case 0x203b18u: goto label_203b18;
        case 0x203b1cu: goto label_203b1c;
        case 0x203b20u: goto label_203b20;
        case 0x203b24u: goto label_203b24;
        case 0x203b28u: goto label_203b28;
        case 0x203b2cu: goto label_203b2c;
        case 0x203b30u: goto label_203b30;
        case 0x203b34u: goto label_203b34;
        case 0x203b38u: goto label_203b38;
        case 0x203b3cu: goto label_203b3c;
        case 0x203b40u: goto label_203b40;
        case 0x203b44u: goto label_203b44;
        case 0x203b48u: goto label_203b48;
        case 0x203b4cu: goto label_203b4c;
        case 0x203b50u: goto label_203b50;
        case 0x203b54u: goto label_203b54;
        case 0x203b58u: goto label_203b58;
        case 0x203b5cu: goto label_203b5c;
        case 0x203b60u: goto label_203b60;
        case 0x203b64u: goto label_203b64;
        case 0x203b68u: goto label_203b68;
        case 0x203b6cu: goto label_203b6c;
        case 0x203b70u: goto label_203b70;
        case 0x203b74u: goto label_203b74;
        case 0x203b78u: goto label_203b78;
        case 0x203b7cu: goto label_203b7c;
        case 0x203b80u: goto label_203b80;
        case 0x203b84u: goto label_203b84;
        case 0x203b88u: goto label_203b88;
        case 0x203b8cu: goto label_203b8c;
        case 0x203b90u: goto label_203b90;
        case 0x203b94u: goto label_203b94;
        case 0x203b98u: goto label_203b98;
        case 0x203b9cu: goto label_203b9c;
        case 0x203ba0u: goto label_203ba0;
        case 0x203ba4u: goto label_203ba4;
        case 0x203ba8u: goto label_203ba8;
        case 0x203bacu: goto label_203bac;
        case 0x203bb0u: goto label_203bb0;
        case 0x203bb4u: goto label_203bb4;
        case 0x203bb8u: goto label_203bb8;
        case 0x203bbcu: goto label_203bbc;
        case 0x203bc0u: goto label_203bc0;
        case 0x203bc4u: goto label_203bc4;
        case 0x203bc8u: goto label_203bc8;
        case 0x203bccu: goto label_203bcc;
        case 0x203bd0u: goto label_203bd0;
        case 0x203bd4u: goto label_203bd4;
        case 0x203bd8u: goto label_203bd8;
        case 0x203bdcu: goto label_203bdc;
        case 0x203be0u: goto label_203be0;
        case 0x203be4u: goto label_203be4;
        case 0x203be8u: goto label_203be8;
        case 0x203becu: goto label_203bec;
        case 0x203bf0u: goto label_203bf0;
        case 0x203bf4u: goto label_203bf4;
        case 0x203bf8u: goto label_203bf8;
        case 0x203bfcu: goto label_203bfc;
        case 0x203c00u: goto label_203c00;
        case 0x203c04u: goto label_203c04;
        case 0x203c08u: goto label_203c08;
        case 0x203c0cu: goto label_203c0c;
        case 0x203c10u: goto label_203c10;
        case 0x203c14u: goto label_203c14;
        case 0x203c18u: goto label_203c18;
        case 0x203c1cu: goto label_203c1c;
        case 0x203c20u: goto label_203c20;
        case 0x203c24u: goto label_203c24;
        case 0x203c28u: goto label_203c28;
        case 0x203c2cu: goto label_203c2c;
        case 0x203c30u: goto label_203c30;
        case 0x203c34u: goto label_203c34;
        case 0x203c38u: goto label_203c38;
        case 0x203c3cu: goto label_203c3c;
        case 0x203c40u: goto label_203c40;
        case 0x203c44u: goto label_203c44;
        case 0x203c48u: goto label_203c48;
        case 0x203c4cu: goto label_203c4c;
        case 0x203c50u: goto label_203c50;
        case 0x203c54u: goto label_203c54;
        case 0x203c58u: goto label_203c58;
        case 0x203c5cu: goto label_203c5c;
        case 0x203c60u: goto label_203c60;
        case 0x203c64u: goto label_203c64;
        case 0x203c68u: goto label_203c68;
        case 0x203c6cu: goto label_203c6c;
        case 0x203c70u: goto label_203c70;
        case 0x203c74u: goto label_203c74;
        case 0x203c78u: goto label_203c78;
        case 0x203c7cu: goto label_203c7c;
        case 0x203c80u: goto label_203c80;
        case 0x203c84u: goto label_203c84;
        case 0x203c88u: goto label_203c88;
        case 0x203c8cu: goto label_203c8c;
        case 0x203c90u: goto label_203c90;
        case 0x203c94u: goto label_203c94;
        case 0x203c98u: goto label_203c98;
        case 0x203c9cu: goto label_203c9c;
        case 0x203ca0u: goto label_203ca0;
        case 0x203ca4u: goto label_203ca4;
        case 0x203ca8u: goto label_203ca8;
        case 0x203cacu: goto label_203cac;
        case 0x203cb0u: goto label_203cb0;
        case 0x203cb4u: goto label_203cb4;
        case 0x203cb8u: goto label_203cb8;
        case 0x203cbcu: goto label_203cbc;
        case 0x203cc0u: goto label_203cc0;
        case 0x203cc4u: goto label_203cc4;
        case 0x203cc8u: goto label_203cc8;
        case 0x203cccu: goto label_203ccc;
        case 0x203cd0u: goto label_203cd0;
        case 0x203cd4u: goto label_203cd4;
        case 0x203cd8u: goto label_203cd8;
        case 0x203cdcu: goto label_203cdc;
        case 0x203ce0u: goto label_203ce0;
        case 0x203ce4u: goto label_203ce4;
        case 0x203ce8u: goto label_203ce8;
        case 0x203cecu: goto label_203cec;
        case 0x203cf0u: goto label_203cf0;
        case 0x203cf4u: goto label_203cf4;
        case 0x203cf8u: goto label_203cf8;
        case 0x203cfcu: goto label_203cfc;
        case 0x203d00u: goto label_203d00;
        case 0x203d04u: goto label_203d04;
        case 0x203d08u: goto label_203d08;
        case 0x203d0cu: goto label_203d0c;
        case 0x203d10u: goto label_203d10;
        case 0x203d14u: goto label_203d14;
        case 0x203d18u: goto label_203d18;
        case 0x203d1cu: goto label_203d1c;
        case 0x203d20u: goto label_203d20;
        case 0x203d24u: goto label_203d24;
        case 0x203d28u: goto label_203d28;
        case 0x203d2cu: goto label_203d2c;
        case 0x203d30u: goto label_203d30;
        case 0x203d34u: goto label_203d34;
        case 0x203d38u: goto label_203d38;
        case 0x203d3cu: goto label_203d3c;
        case 0x203d40u: goto label_203d40;
        case 0x203d44u: goto label_203d44;
        case 0x203d48u: goto label_203d48;
        case 0x203d4cu: goto label_203d4c;
        case 0x203d50u: goto label_203d50;
        case 0x203d54u: goto label_203d54;
        case 0x203d58u: goto label_203d58;
        case 0x203d5cu: goto label_203d5c;
        case 0x203d60u: goto label_203d60;
        case 0x203d64u: goto label_203d64;
        case 0x203d68u: goto label_203d68;
        case 0x203d6cu: goto label_203d6c;
        case 0x203d70u: goto label_203d70;
        case 0x203d74u: goto label_203d74;
        case 0x203d78u: goto label_203d78;
        case 0x203d7cu: goto label_203d7c;
        case 0x203d80u: goto label_203d80;
        case 0x203d84u: goto label_203d84;
        case 0x203d88u: goto label_203d88;
        case 0x203d8cu: goto label_203d8c;
        case 0x203d90u: goto label_203d90;
        case 0x203d94u: goto label_203d94;
        case 0x203d98u: goto label_203d98;
        case 0x203d9cu: goto label_203d9c;
        case 0x203da0u: goto label_203da0;
        case 0x203da4u: goto label_203da4;
        case 0x203da8u: goto label_203da8;
        case 0x203dacu: goto label_203dac;
        case 0x203db0u: goto label_203db0;
        case 0x203db4u: goto label_203db4;
        case 0x203db8u: goto label_203db8;
        case 0x203dbcu: goto label_203dbc;
        case 0x203dc0u: goto label_203dc0;
        case 0x203dc4u: goto label_203dc4;
        case 0x203dc8u: goto label_203dc8;
        case 0x203dccu: goto label_203dcc;
        case 0x203dd0u: goto label_203dd0;
        case 0x203dd4u: goto label_203dd4;
        case 0x203dd8u: goto label_203dd8;
        case 0x203ddcu: goto label_203ddc;
        case 0x203de0u: goto label_203de0;
        case 0x203de4u: goto label_203de4;
        case 0x203de8u: goto label_203de8;
        case 0x203decu: goto label_203dec;
        case 0x203df0u: goto label_203df0;
        case 0x203df4u: goto label_203df4;
        case 0x203df8u: goto label_203df8;
        case 0x203dfcu: goto label_203dfc;
        case 0x203e00u: goto label_203e00;
        case 0x203e04u: goto label_203e04;
        case 0x203e08u: goto label_203e08;
        case 0x203e0cu: goto label_203e0c;
        case 0x203e10u: goto label_203e10;
        case 0x203e14u: goto label_203e14;
        case 0x203e18u: goto label_203e18;
        case 0x203e1cu: goto label_203e1c;
        case 0x203e20u: goto label_203e20;
        case 0x203e24u: goto label_203e24;
        case 0x203e28u: goto label_203e28;
        case 0x203e2cu: goto label_203e2c;
        case 0x203e30u: goto label_203e30;
        case 0x203e34u: goto label_203e34;
        case 0x203e38u: goto label_203e38;
        case 0x203e3cu: goto label_203e3c;
        case 0x203e40u: goto label_203e40;
        case 0x203e44u: goto label_203e44;
        case 0x203e48u: goto label_203e48;
        case 0x203e4cu: goto label_203e4c;
        case 0x203e50u: goto label_203e50;
        case 0x203e54u: goto label_203e54;
        case 0x203e58u: goto label_203e58;
        case 0x203e5cu: goto label_203e5c;
        case 0x203e60u: goto label_203e60;
        case 0x203e64u: goto label_203e64;
        case 0x203e68u: goto label_203e68;
        case 0x203e6cu: goto label_203e6c;
        case 0x203e70u: goto label_203e70;
        case 0x203e74u: goto label_203e74;
        case 0x203e78u: goto label_203e78;
        case 0x203e7cu: goto label_203e7c;
        case 0x203e80u: goto label_203e80;
        case 0x203e84u: goto label_203e84;
        case 0x203e88u: goto label_203e88;
        case 0x203e8cu: goto label_203e8c;
        case 0x203e90u: goto label_203e90;
        case 0x203e94u: goto label_203e94;
        case 0x203e98u: goto label_203e98;
        case 0x203e9cu: goto label_203e9c;
        case 0x203ea0u: goto label_203ea0;
        case 0x203ea4u: goto label_203ea4;
        case 0x203ea8u: goto label_203ea8;
        case 0x203eacu: goto label_203eac;
        case 0x203eb0u: goto label_203eb0;
        case 0x203eb4u: goto label_203eb4;
        case 0x203eb8u: goto label_203eb8;
        case 0x203ebcu: goto label_203ebc;
        case 0x203ec0u: goto label_203ec0;
        case 0x203ec4u: goto label_203ec4;
        case 0x203ec8u: goto label_203ec8;
        case 0x203eccu: goto label_203ecc;
        case 0x203ed0u: goto label_203ed0;
        case 0x203ed4u: goto label_203ed4;
        case 0x203ed8u: goto label_203ed8;
        case 0x203edcu: goto label_203edc;
        case 0x203ee0u: goto label_203ee0;
        case 0x203ee4u: goto label_203ee4;
        case 0x203ee8u: goto label_203ee8;
        case 0x203eecu: goto label_203eec;
        case 0x203ef0u: goto label_203ef0;
        case 0x203ef4u: goto label_203ef4;
        case 0x203ef8u: goto label_203ef8;
        case 0x203efcu: goto label_203efc;
        case 0x203f00u: goto label_203f00;
        case 0x203f04u: goto label_203f04;
        case 0x203f08u: goto label_203f08;
        case 0x203f0cu: goto label_203f0c;
        case 0x203f10u: goto label_203f10;
        case 0x203f14u: goto label_203f14;
        case 0x203f18u: goto label_203f18;
        case 0x203f1cu: goto label_203f1c;
        case 0x203f20u: goto label_203f20;
        case 0x203f24u: goto label_203f24;
        case 0x203f28u: goto label_203f28;
        case 0x203f2cu: goto label_203f2c;
        case 0x203f30u: goto label_203f30;
        case 0x203f34u: goto label_203f34;
        case 0x203f38u: goto label_203f38;
        case 0x203f3cu: goto label_203f3c;
        case 0x203f40u: goto label_203f40;
        case 0x203f44u: goto label_203f44;
        case 0x203f48u: goto label_203f48;
        case 0x203f4cu: goto label_203f4c;
        case 0x203f50u: goto label_203f50;
        case 0x203f54u: goto label_203f54;
        case 0x203f58u: goto label_203f58;
        case 0x203f5cu: goto label_203f5c;
        case 0x203f60u: goto label_203f60;
        case 0x203f64u: goto label_203f64;
        case 0x203f68u: goto label_203f68;
        case 0x203f6cu: goto label_203f6c;
        case 0x203f70u: goto label_203f70;
        case 0x203f74u: goto label_203f74;
        case 0x203f78u: goto label_203f78;
        case 0x203f7cu: goto label_203f7c;
        case 0x203f80u: goto label_203f80;
        case 0x203f84u: goto label_203f84;
        case 0x203f88u: goto label_203f88;
        case 0x203f8cu: goto label_203f8c;
        case 0x203f90u: goto label_203f90;
        case 0x203f94u: goto label_203f94;
        case 0x203f98u: goto label_203f98;
        case 0x203f9cu: goto label_203f9c;
        case 0x203fa0u: goto label_203fa0;
        case 0x203fa4u: goto label_203fa4;
        case 0x203fa8u: goto label_203fa8;
        case 0x203facu: goto label_203fac;
        case 0x203fb0u: goto label_203fb0;
        case 0x203fb4u: goto label_203fb4;
        case 0x203fb8u: goto label_203fb8;
        case 0x203fbcu: goto label_203fbc;
        case 0x203fc0u: goto label_203fc0;
        case 0x203fc4u: goto label_203fc4;
        case 0x203fc8u: goto label_203fc8;
        case 0x203fccu: goto label_203fcc;
        case 0x203fd0u: goto label_203fd0;
        case 0x203fd4u: goto label_203fd4;
        case 0x203fd8u: goto label_203fd8;
        case 0x203fdcu: goto label_203fdc;
        case 0x203fe0u: goto label_203fe0;
        case 0x203fe4u: goto label_203fe4;
        case 0x203fe8u: goto label_203fe8;
        case 0x203fecu: goto label_203fec;
        case 0x203ff0u: goto label_203ff0;
        case 0x203ff4u: goto label_203ff4;
        case 0x203ff8u: goto label_203ff8;
        case 0x203ffcu: goto label_203ffc;
        case 0x204000u: goto label_204000;
        case 0x204004u: goto label_204004;
        case 0x204008u: goto label_204008;
        case 0x20400cu: goto label_20400c;
        case 0x204010u: goto label_204010;
        case 0x204014u: goto label_204014;
        case 0x204018u: goto label_204018;
        case 0x20401cu: goto label_20401c;
        case 0x204020u: goto label_204020;
        case 0x204024u: goto label_204024;
        case 0x204028u: goto label_204028;
        case 0x20402cu: goto label_20402c;
        case 0x204030u: goto label_204030;
        case 0x204034u: goto label_204034;
        case 0x204038u: goto label_204038;
        case 0x20403cu: goto label_20403c;
        case 0x204040u: goto label_204040;
        case 0x204044u: goto label_204044;
        case 0x204048u: goto label_204048;
        case 0x20404cu: goto label_20404c;
        case 0x204050u: goto label_204050;
        case 0x204054u: goto label_204054;
        case 0x204058u: goto label_204058;
        case 0x20405cu: goto label_20405c;
        case 0x204060u: goto label_204060;
        case 0x204064u: goto label_204064;
        case 0x204068u: goto label_204068;
        case 0x20406cu: goto label_20406c;
        case 0x204070u: goto label_204070;
        case 0x204074u: goto label_204074;
        case 0x204078u: goto label_204078;
        case 0x20407cu: goto label_20407c;
        case 0x204080u: goto label_204080;
        case 0x204084u: goto label_204084;
        case 0x204088u: goto label_204088;
        case 0x20408cu: goto label_20408c;
        case 0x204090u: goto label_204090;
        case 0x204094u: goto label_204094;
        case 0x204098u: goto label_204098;
        case 0x20409cu: goto label_20409c;
        case 0x2040a0u: goto label_2040a0;
        case 0x2040a4u: goto label_2040a4;
        case 0x2040a8u: goto label_2040a8;
        case 0x2040acu: goto label_2040ac;
        case 0x2040b0u: goto label_2040b0;
        case 0x2040b4u: goto label_2040b4;
        case 0x2040b8u: goto label_2040b8;
        case 0x2040bcu: goto label_2040bc;
        case 0x2040c0u: goto label_2040c0;
        case 0x2040c4u: goto label_2040c4;
        case 0x2040c8u: goto label_2040c8;
        case 0x2040ccu: goto label_2040cc;
        case 0x2040d0u: goto label_2040d0;
        case 0x2040d4u: goto label_2040d4;
        case 0x2040d8u: goto label_2040d8;
        case 0x2040dcu: goto label_2040dc;
        case 0x2040e0u: goto label_2040e0;
        case 0x2040e4u: goto label_2040e4;
        case 0x2040e8u: goto label_2040e8;
        case 0x2040ecu: goto label_2040ec;
        case 0x2040f0u: goto label_2040f0;
        case 0x2040f4u: goto label_2040f4;
        case 0x2040f8u: goto label_2040f8;
        case 0x2040fcu: goto label_2040fc;
        case 0x204100u: goto label_204100;
        case 0x204104u: goto label_204104;
        case 0x204108u: goto label_204108;
        case 0x20410cu: goto label_20410c;
        case 0x204110u: goto label_204110;
        case 0x204114u: goto label_204114;
        case 0x204118u: goto label_204118;
        case 0x20411cu: goto label_20411c;
        case 0x204120u: goto label_204120;
        case 0x204124u: goto label_204124;
        case 0x204128u: goto label_204128;
        case 0x20412cu: goto label_20412c;
        case 0x204130u: goto label_204130;
        case 0x204134u: goto label_204134;
        case 0x204138u: goto label_204138;
        case 0x20413cu: goto label_20413c;
        case 0x204140u: goto label_204140;
        case 0x204144u: goto label_204144;
        case 0x204148u: goto label_204148;
        case 0x20414cu: goto label_20414c;
        case 0x204150u: goto label_204150;
        case 0x204154u: goto label_204154;
        case 0x204158u: goto label_204158;
        case 0x20415cu: goto label_20415c;
        case 0x204160u: goto label_204160;
        case 0x204164u: goto label_204164;
        case 0x204168u: goto label_204168;
        case 0x20416cu: goto label_20416c;
        case 0x204170u: goto label_204170;
        case 0x204174u: goto label_204174;
        case 0x204178u: goto label_204178;
        case 0x20417cu: goto label_20417c;
        case 0x204180u: goto label_204180;
        case 0x204184u: goto label_204184;
        case 0x204188u: goto label_204188;
        case 0x20418cu: goto label_20418c;
        case 0x204190u: goto label_204190;
        case 0x204194u: goto label_204194;
        case 0x204198u: goto label_204198;
        case 0x20419cu: goto label_20419c;
        case 0x2041a0u: goto label_2041a0;
        case 0x2041a4u: goto label_2041a4;
        case 0x2041a8u: goto label_2041a8;
        case 0x2041acu: goto label_2041ac;
        case 0x2041b0u: goto label_2041b0;
        case 0x2041b4u: goto label_2041b4;
        case 0x2041b8u: goto label_2041b8;
        case 0x2041bcu: goto label_2041bc;
        case 0x2041c0u: goto label_2041c0;
        case 0x2041c4u: goto label_2041c4;
        case 0x2041c8u: goto label_2041c8;
        case 0x2041ccu: goto label_2041cc;
        case 0x2041d0u: goto label_2041d0;
        case 0x2041d4u: goto label_2041d4;
        case 0x2041d8u: goto label_2041d8;
        case 0x2041dcu: goto label_2041dc;
        case 0x2041e0u: goto label_2041e0;
        case 0x2041e4u: goto label_2041e4;
        case 0x2041e8u: goto label_2041e8;
        case 0x2041ecu: goto label_2041ec;
        case 0x2041f0u: goto label_2041f0;
        case 0x2041f4u: goto label_2041f4;
        case 0x2041f8u: goto label_2041f8;
        case 0x2041fcu: goto label_2041fc;
        case 0x204200u: goto label_204200;
        case 0x204204u: goto label_204204;
        case 0x204208u: goto label_204208;
        case 0x20420cu: goto label_20420c;
        case 0x204210u: goto label_204210;
        case 0x204214u: goto label_204214;
        case 0x204218u: goto label_204218;
        case 0x20421cu: goto label_20421c;
        case 0x204220u: goto label_204220;
        case 0x204224u: goto label_204224;
        case 0x204228u: goto label_204228;
        case 0x20422cu: goto label_20422c;
        case 0x204230u: goto label_204230;
        case 0x204234u: goto label_204234;
        case 0x204238u: goto label_204238;
        case 0x20423cu: goto label_20423c;
        case 0x204240u: goto label_204240;
        case 0x204244u: goto label_204244;
        case 0x204248u: goto label_204248;
        case 0x20424cu: goto label_20424c;
        case 0x204250u: goto label_204250;
        case 0x204254u: goto label_204254;
        case 0x204258u: goto label_204258;
        case 0x20425cu: goto label_20425c;
        case 0x204260u: goto label_204260;
        case 0x204264u: goto label_204264;
        default: break;
    }

    ctx->pc = 0x202cb0u;

label_202cb0:
    // 0x202cb0: 0x27bdfdb0  addiu       $sp, $sp, -0x250
    ctx->pc = 0x202cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966704));
label_202cb4:
    // 0x202cb4: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x202cb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_202cb8:
    // 0x202cb8: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x202cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_202cbc:
    // 0x202cbc: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x202cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_202cc0:
    // 0x202cc0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x202cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_202cc4:
    // 0x202cc4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x202cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_202cc8:
    // 0x202cc8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x202cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_202ccc:
    // 0x202ccc: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x202cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_202cd0:
    // 0x202cd0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x202cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_202cd4:
    // 0x202cd4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x202cd4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_202cd8:
    // 0x202cd8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x202cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_202cdc:
    // 0x202cdc: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x202cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_202ce0:
    // 0x202ce0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x202ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_202ce4:
    // 0x202ce4: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x202ce4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_202ce8:
    // 0x202ce8: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x202ce8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_202cec:
    // 0x202cec: 0x8c22caa0  lw          $v0, -0x3560($at)
    ctx->pc = 0x202cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953632)));
label_202cf0:
    // 0x202cf0: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x202cf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_202cf4:
    // 0x202cf4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x202cf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_202cf8:
    // 0x202cf8: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x202cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
label_202cfc:
    // 0x202cfc: 0x8c30ca50  lw          $s0, -0x35B0($at)
    ctx->pc = 0x202cfcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953552)));
label_202d00:
    // 0x202d00: 0x2442dbf0  addiu       $v0, $v0, -0x2410
    ctx->pc = 0x202d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958064));
label_202d04:
    // 0x202d04: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x202d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
label_202d08:
    // 0x202d08: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x202d08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_202d0c:
    // 0x202d0c: 0x24421ef0  addiu       $v0, $v0, 0x1EF0
    ctx->pc = 0x202d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7920));
label_202d10:
    // 0x202d10: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x202d10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
label_202d14:
    // 0x202d14: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x202d14u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_202d18:
    // 0x202d18: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x202d18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_202d1c:
    // 0x202d1c: 0x106202e2  beq         $v1, $v0, . + 4 + (0x2E2 << 2)
label_202d20:
    if (ctx->pc == 0x202D20u) {
        ctx->pc = 0x202D20u;
            // 0x202d20: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x202D24u;
        goto label_202d24;
    }
    ctx->pc = 0x202D1Cu;
    {
        const bool branch_taken_0x202d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x202D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202D1Cu;
            // 0x202d20: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202d1c) {
            ctx->pc = 0x2038A8u;
            goto label_2038a8;
        }
    }
    ctx->pc = 0x202D24u;
label_202d24:
    // 0x202d24: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x202d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_202d28:
    // 0x202d28: 0x1062019e  beq         $v1, $v0, . + 4 + (0x19E << 2)
label_202d2c:
    if (ctx->pc == 0x202D2Cu) {
        ctx->pc = 0x202D2Cu;
            // 0x202d2c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x202D30u;
        goto label_202d30;
    }
    ctx->pc = 0x202D28u;
    {
        const bool branch_taken_0x202d28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x202D2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202D28u;
            // 0x202d2c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202d28) {
            ctx->pc = 0x2033A4u;
            goto label_2033a4;
        }
    }
    ctx->pc = 0x202D30u;
label_202d30:
    // 0x202d30: 0x106200af  beq         $v1, $v0, . + 4 + (0xAF << 2)
label_202d34:
    if (ctx->pc == 0x202D34u) {
        ctx->pc = 0x202D34u;
            // 0x202d34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x202D38u;
        goto label_202d38;
    }
    ctx->pc = 0x202D30u;
    {
        const bool branch_taken_0x202d30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x202D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202D30u;
            // 0x202d34: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202d30) {
            ctx->pc = 0x202FF0u;
            goto label_202ff0;
        }
    }
    ctx->pc = 0x202D38u;
label_202d38:
    // 0x202d38: 0x1062009f  beq         $v1, $v0, . + 4 + (0x9F << 2)
label_202d3c:
    if (ctx->pc == 0x202D3Cu) {
        ctx->pc = 0x202D40u;
        goto label_202d40;
    }
    ctx->pc = 0x202D38u;
    {
        const bool branch_taken_0x202d38 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x202d38) {
            ctx->pc = 0x202FB8u;
            goto label_202fb8;
        }
    }
    ctx->pc = 0x202D40u;
label_202d40:
    // 0x202d40: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_202d44:
    if (ctx->pc == 0x202D44u) {
        ctx->pc = 0x202D44u;
            // 0x202d44: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x202D48u;
        goto label_202d48;
    }
    ctx->pc = 0x202D40u;
    {
        const bool branch_taken_0x202d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x202D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202D40u;
            // 0x202d44: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202d40) {
            ctx->pc = 0x202D50u;
            goto label_202d50;
        }
    }
    ctx->pc = 0x202D48u;
label_202d48:
    // 0x202d48: 0x100002de  b           . + 4 + (0x2DE << 2)
label_202d4c:
    if (ctx->pc == 0x202D4Cu) {
        ctx->pc = 0x202D4Cu;
            // 0x202d4c: 0xa6800002  sh          $zero, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x202D50u;
        goto label_202d50;
    }
    ctx->pc = 0x202D48u;
    {
        const bool branch_taken_0x202d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202D4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202D48u;
            // 0x202d4c: 0xa6800002  sh          $zero, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202d48) {
            ctx->pc = 0x2038C4u;
            goto label_2038c4;
        }
    }
    ctx->pc = 0x202D50u;
label_202d50:
    // 0x202d50: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
label_202d54:
    if (ctx->pc == 0x202D54u) {
        ctx->pc = 0x202D54u;
            // 0x202d54: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x202D58u;
        goto label_202d58;
    }
    ctx->pc = 0x202D50u;
    {
        const bool branch_taken_0x202d50 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x202D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202D50u;
            // 0x202d54: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202d50) {
            ctx->pc = 0x202D64u;
            goto label_202d64;
        }
    }
    ctx->pc = 0x202D58u;
label_202d58:
    // 0x202d58: 0xc087630  jal         func_21D8C0
label_202d5c:
    if (ctx->pc == 0x202D5Cu) {
        ctx->pc = 0x202D5Cu;
            // 0x202d5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x202D60u;
        goto label_202d60;
    }
    ctx->pc = 0x202D58u;
    SET_GPR_U32(ctx, 31, 0x202D60u);
    ctx->pc = 0x202D5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202D58u;
            // 0x202d5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D8C0u;
    if (runtime->hasFunction(0x21D8C0u)) {
        auto targetFn = runtime->lookupFunction(0x21D8C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202D60u; }
        if (ctx->pc != 0x202D60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor__7CDC2MesFv_0x21d8c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202D60u; }
        if (ctx->pc != 0x202D60u) { return; }
    }
    ctx->pc = 0x202D60u;
label_202d60:
    // 0x202d60: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x202d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_202d64:
    // 0x202d64: 0x1223008e  beq         $s1, $v1, . + 4 + (0x8E << 2)
label_202d68:
    if (ctx->pc == 0x202D68u) {
        ctx->pc = 0x202D6Cu;
        goto label_202d6c;
    }
    ctx->pc = 0x202D64u;
    {
        const bool branch_taken_0x202d64 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x202d64) {
            ctx->pc = 0x202FA0u;
            goto label_202fa0;
        }
    }
    ctx->pc = 0x202D6Cu;
label_202d6c:
    // 0x202d6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x202d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_202d70:
    // 0x202d70: 0x12230003  beq         $s1, $v1, . + 4 + (0x3 << 2)
label_202d74:
    if (ctx->pc == 0x202D74u) {
        ctx->pc = 0x202D78u;
        goto label_202d78;
    }
    ctx->pc = 0x202D70u;
    {
        const bool branch_taken_0x202d70 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        if (branch_taken_0x202d70) {
            ctx->pc = 0x202D80u;
            goto label_202d80;
        }
    }
    ctx->pc = 0x202D78u;
label_202d78:
    // 0x202d78: 0x100002d3  b           . + 4 + (0x2D3 << 2)
label_202d7c:
    if (ctx->pc == 0x202D7Cu) {
        ctx->pc = 0x202D80u;
        goto label_202d80;
    }
    ctx->pc = 0x202D78u;
    {
        const bool branch_taken_0x202d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202d78) {
            ctx->pc = 0x2038C8u;
            goto label_2038c8;
        }
    }
    ctx->pc = 0x202D80u;
label_202d80:
    // 0x202d80: 0x14400087  bnez        $v0, . + 4 + (0x87 << 2)
label_202d84:
    if (ctx->pc == 0x202D84u) {
        ctx->pc = 0x202D88u;
        goto label_202d88;
    }
    ctx->pc = 0x202D80u;
    {
        const bool branch_taken_0x202d80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202d80) {
            ctx->pc = 0x202FA0u;
            goto label_202fa0;
        }
    }
    ctx->pc = 0x202D88u;
label_202d88:
    // 0x202d88: 0xa6800014  sh          $zero, 0x14($s4)
    ctx->pc = 0x202d88u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 20), (uint16_t)GPR_U32(ctx, 0));
label_202d8c:
    // 0x202d8c: 0xae800574  sw          $zero, 0x574($s4)
    ctx->pc = 0x202d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1396), GPR_U32(ctx, 0));
label_202d90:
    // 0x202d90: 0xa6800580  sh          $zero, 0x580($s4)
    ctx->pc = 0x202d90u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1408), (uint16_t)GPR_U32(ctx, 0));
label_202d94:
    // 0x202d94: 0x86820582  lh          $v0, 0x582($s4)
    ctx->pc = 0x202d94u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1410)));
label_202d98:
    // 0x202d98: 0x2082a  slt         $at, $zero, $v0
    ctx->pc = 0x202d98u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_202d9c:
    // 0x202d9c: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
label_202da0:
    if (ctx->pc == 0x202DA0u) {
        ctx->pc = 0x202DA4u;
        goto label_202da4;
    }
    ctx->pc = 0x202D9Cu;
    {
        const bool branch_taken_0x202d9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x202d9c) {
            ctx->pc = 0x202DC0u;
            goto label_202dc0;
        }
    }
    ctx->pc = 0x202DA4u;
label_202da4:
    // 0x202da4: 0xa6830580  sh          $v1, 0x580($s4)
    ctx->pc = 0x202da4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1408), (uint16_t)GPR_U32(ctx, 3));
label_202da8:
    // 0x202da8: 0x8f8490d4  lw          $a0, -0x6F2C($gp)
    ctx->pc = 0x202da8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
label_202dac:
    // 0x202dac: 0x8e850114  lw          $a1, 0x114($s4)
    ctx->pc = 0x202dacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 276)));
label_202db0:
    // 0x202db0: 0xc07fc1c  jal         func_1FF070
label_202db4:
    if (ctx->pc == 0x202DB4u) {
        ctx->pc = 0x202DB4u;
            // 0x202db4: 0x86860582  lh          $a2, 0x582($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1410)));
        ctx->pc = 0x202DB8u;
        goto label_202db8;
    }
    ctx->pc = 0x202DB0u;
    SET_GPR_U32(ctx, 31, 0x202DB8u);
    ctx->pc = 0x202DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202DB0u;
            // 0x202db4: 0x86860582  lh          $a2, 0x582($s4) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1410)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF070u;
    if (runtime->hasFunction(0x1FF070u)) {
        auto targetFn = runtime->lookupFunction(0x1FF070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202DB8u; }
        if (ctx->pc != 0x202DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCreateItemFlag__15CInventUserDataFii_0x1ff070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202DB8u; }
        if (ctx->pc != 0x202DB8u) { return; }
    }
    ctx->pc = 0x202DB8u;
label_202db8:
    // 0x202db8: 0x1000005d  b           . + 4 + (0x5D << 2)
label_202dbc:
    if (ctx->pc == 0x202DBCu) {
        ctx->pc = 0x202DC0u;
        goto label_202dc0;
    }
    ctx->pc = 0x202DB8u;
    {
        const bool branch_taken_0x202db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202db8) {
            ctx->pc = 0x202F30u;
            goto label_202f30;
        }
    }
    ctx->pc = 0x202DC0u;
label_202dc0:
    // 0x202dc0: 0xae800584  sw          $zero, 0x584($s4)
    ctx->pc = 0x202dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1412), GPR_U32(ctx, 0));
label_202dc4:
    // 0x202dc4: 0x8f8490d4  lw          $a0, -0x6F2C($gp)
    ctx->pc = 0x202dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
label_202dc8:
    // 0x202dc8: 0xc07faac  jal         func_1FEAB0
label_202dcc:
    if (ctx->pc == 0x202DCCu) {
        ctx->pc = 0x202DCCu;
            // 0x202dcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x202DD0u;
        goto label_202dd0;
    }
    ctx->pc = 0x202DC8u;
    SET_GPR_U32(ctx, 31, 0x202DD0u);
    ctx->pc = 0x202DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202DC8u;
            // 0x202dcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FEAB0u;
    if (runtime->hasFunction(0x1FEAB0u)) {
        auto targetFn = runtime->lookupFunction(0x1FEAB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202DD0u; }
        if (ctx->pc != 0x202DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPhotoInfo__15CInventUserDataFi_0x1feab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202DD0u; }
        if (ctx->pc != 0x202DD0u) { return; }
    }
    ctx->pc = 0x202DD0u;
label_202dd0:
    // 0x202dd0: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x202dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
label_202dd4:
    // 0x202dd4: 0x10000052  b           . + 4 + (0x52 << 2)
label_202dd8:
    if (ctx->pc == 0x202DD8u) {
        ctx->pc = 0x202DD8u;
            // 0x202dd8: 0xafa000f0  sw          $zero, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
        ctx->pc = 0x202DDCu;
        goto label_202ddc;
    }
    ctx->pc = 0x202DD4u;
    {
        const bool branch_taken_0x202dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202DD4u;
            // 0x202dd8: 0xafa000f0  sw          $zero, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202dd4) {
            ctx->pc = 0x202F20u;
            goto label_202f20;
        }
    }
    ctx->pc = 0x202DDCu;
label_202ddc:
    // 0x202ddc: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x202ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_202de0:
    // 0x202de0: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
label_202de4:
    if (ctx->pc == 0x202DE4u) {
        ctx->pc = 0x202DE8u;
        goto label_202de8;
    }
    ctx->pc = 0x202DE0u;
    {
        const bool branch_taken_0x202de0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x202de0) {
            ctx->pc = 0x202DF8u;
            goto label_202df8;
        }
    }
    ctx->pc = 0x202DE8u;
label_202de8:
    // 0x202de8: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x202de8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_202dec:
    // 0x202dec: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x202decu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_202df0:
    // 0x202df0: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_202df4:
    if (ctx->pc == 0x202DF4u) {
        ctx->pc = 0x202DF8u;
        goto label_202df8;
    }
    ctx->pc = 0x202DF0u;
    {
        const bool branch_taken_0x202df0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x202df0) {
            ctx->pc = 0x202E00u;
            goto label_202e00;
        }
    }
    ctx->pc = 0x202DF8u;
label_202df8:
    // 0x202df8: 0x10000004  b           . + 4 + (0x4 << 2)
label_202dfc:
    if (ctx->pc == 0x202DFCu) {
        ctx->pc = 0x202DFCu;
            // 0x202dfc: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x202E00u;
        goto label_202e00;
    }
    ctx->pc = 0x202DF8u;
    {
        const bool branch_taken_0x202df8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202DF8u;
            // 0x202dfc: 0xf02d  daddu       $fp, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202df8) {
            ctx->pc = 0x202E0Cu;
            goto label_202e0c;
        }
    }
    ctx->pc = 0x202E00u;
label_202e00:
    // 0x202e00: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x202e00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_202e04:
    // 0x202e04: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x202e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_202e08:
    // 0x202e08: 0x62f021  addu        $fp, $v1, $v0
    ctx->pc = 0x202e08u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_202e0c:
    // 0x202e0c: 0x0  nop
    ctx->pc = 0x202e0cu;
    // NOP
label_202e10:
    // 0x202e10: 0x13c00047  beqz        $fp, . + 4 + (0x47 << 2)
label_202e14:
    if (ctx->pc == 0x202E14u) {
        ctx->pc = 0x202E18u;
        goto label_202e18;
    }
    ctx->pc = 0x202E10u;
    {
        const bool branch_taken_0x202e10 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        if (branch_taken_0x202e10) {
            ctx->pc = 0x202F30u;
            goto label_202f30;
        }
    }
    ctx->pc = 0x202E18u;
label_202e18:
    // 0x202e18: 0x8f8490d4  lw          $a0, -0x6F2C($gp)
    ctx->pc = 0x202e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938836)));
label_202e1c:
    // 0x202e1c: 0xc07fc48  jal         func_1FF120
label_202e20:
    if (ctx->pc == 0x202E20u) {
        ctx->pc = 0x202E20u;
            // 0x202e20: 0x87c50000  lh          $a1, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->pc = 0x202E24u;
        goto label_202e24;
    }
    ctx->pc = 0x202E1Cu;
    SET_GPR_U32(ctx, 31, 0x202E24u);
    ctx->pc = 0x202E20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202E1Cu;
            // 0x202e20: 0x87c50000  lh          $a1, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF120u;
    if (runtime->hasFunction(0x1FF120u)) {
        auto targetFn = runtime->lookupFunction(0x1FF120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202E24u; }
        if (ctx->pc != 0x202E24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsAlreadyCreatedItem__15CInventUserDataFi_0x1ff120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202E24u; }
        if (ctx->pc != 0x202E24u) { return; }
    }
    ctx->pc = 0x202E24u;
label_202e24:
    // 0x202e24: 0x2102a  slt         $v0, $zero, $v0
    ctx->pc = 0x202e24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_202e28:
    // 0x202e28: 0x14400037  bnez        $v0, . + 4 + (0x37 << 2)
label_202e2c:
    if (ctx->pc == 0x202E2Cu) {
        ctx->pc = 0x202E2Cu;
            // 0x202e2c: 0x3c0401ed  lui         $a0, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x202E30u;
        goto label_202e30;
    }
    ctx->pc = 0x202E28u;
    {
        const bool branch_taken_0x202e28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202E28u;
            // 0x202e2c: 0x3c0401ed  lui         $a0, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202e28) {
            ctx->pc = 0x202F08u;
            goto label_202f08;
        }
    }
    ctx->pc = 0x202E30u;
label_202e30:
    // 0x202e30: 0x27a30228  addiu       $v1, $sp, 0x228
    ctx->pc = 0x202e30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 552));
label_202e34:
    // 0x202e34: 0x2484c3d0  addiu       $a0, $a0, -0x3C30
    ctx->pc = 0x202e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951888));
label_202e38:
    // 0x202e38: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x202e38u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202e3c:
    // 0x202e3c: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x202e3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_202e40:
    // 0x202e40: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x202e40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_202e44:
    // 0x202e44: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x202e44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202e48:
    // 0x202e48: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x202e48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202e4c:
    // 0x202e4c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x202e4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202e50:
    // 0x202e50: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x202e50u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_202e54:
    // 0x202e54: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x202e54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_202e58:
    // 0x202e58: 0x3d21021  addu        $v0, $fp, $s2
    ctx->pc = 0x202e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 18)));
label_202e5c:
    // 0x202e5c: 0x84510002  lh          $s1, 0x2($v0)
    ctx->pc = 0x202e5cu;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_202e60:
    // 0x202e60: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x202e60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202e64:
    // 0x202e64: 0x2931021  addu        $v0, $s4, $s3
    ctx->pc = 0x202e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_202e68:
    // 0x202e68: 0x24570588  addiu       $s7, $v0, 0x588
    ctx->pc = 0x202e68u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 1416));
label_202e6c:
    // 0x202e6c: 0xac510588  sw          $s1, 0x588($v0)
    ctx->pc = 0x202e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1416), GPR_U32(ctx, 17));
label_202e70:
    // 0x202e70: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x202e70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_202e74:
    // 0x202e74: 0xc080754  jal         func_201D50
label_202e78:
    if (ctx->pc == 0x202E78u) {
        ctx->pc = 0x202E78u;
            // 0x202e78: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x202E7Cu;
        goto label_202e7c;
    }
    ctx->pc = 0x202E74u;
    SET_GPR_U32(ctx, 31, 0x202E7Cu);
    ctx->pc = 0x202E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202E74u;
            // 0x202e78: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x201D50u;
    if (runtime->hasFunction(0x201D50u)) {
        auto targetFn = runtime->lookupFunction(0x201D50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202E7Cu; }
        if (ctx->pc != 0x202E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowSelectNetaID__11CMenuInventFi_0x201d50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202E7Cu; }
        if (ctx->pc != 0x202E7Cu) { return; }
    }
    ctx->pc = 0x202E7Cu;
label_202e7c:
    // 0x202e7c: 0x14510007  bne         $v0, $s1, . + 4 + (0x7 << 2)
label_202e80:
    if (ctx->pc == 0x202E80u) {
        ctx->pc = 0x202E80u;
            // 0x202e80: 0x151080  sll         $v0, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->pc = 0x202E84u;
        goto label_202e84;
    }
    ctx->pc = 0x202E7Cu;
    {
        const bool branch_taken_0x202e7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        ctx->pc = 0x202E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202E7Cu;
            // 0x202e80: 0x151080  sll         $v0, $s5, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202e7c) {
            ctx->pc = 0x202E9Cu;
            goto label_202e9c;
        }
    }
    ctx->pc = 0x202E84u;
label_202e84:
    // 0x202e84: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x202e84u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
label_202e88:
    // 0x202e88: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x202e88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_202e8c:
    // 0x202e8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x202e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_202e90:
    // 0x202e90: 0xac430228  sw          $v1, 0x228($v0)
    ctx->pc = 0x202e90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 552), GPR_U32(ctx, 3));
label_202e94:
    // 0x202e94: 0x10000006  b           . + 4 + (0x6 << 2)
label_202e98:
    if (ctx->pc == 0x202E98u) {
        ctx->pc = 0x202E98u;
            // 0x202e98: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->pc = 0x202E9Cu;
        goto label_202e9c;
    }
    ctx->pc = 0x202E94u;
    {
        const bool branch_taken_0x202e94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202E94u;
            // 0x202e98: 0x26d60001  addiu       $s6, $s6, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202e94) {
            ctx->pc = 0x202EB0u;
            goto label_202eb0;
        }
    }
    ctx->pc = 0x202E9Cu;
label_202e9c:
    // 0x202e9c: 0x0  nop
    ctx->pc = 0x202e9cu;
    // NOP
label_202ea0:
    // 0x202ea0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x202ea0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_202ea4:
    // 0x202ea4: 0x2aa20003  slti        $v0, $s5, 0x3
    ctx->pc = 0x202ea4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)3) ? 1 : 0);
label_202ea8:
    // 0x202ea8: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_202eac:
    if (ctx->pc == 0x202EACu) {
        ctx->pc = 0x202EB0u;
        goto label_202eb0;
    }
    ctx->pc = 0x202EA8u;
    {
        const bool branch_taken_0x202ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202ea8) {
            ctx->pc = 0x202E70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_202e70;
        }
    }
    ctx->pc = 0x202EB0u;
label_202eb0:
    // 0x202eb0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x202eb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_202eb4:
    // 0x202eb4: 0x2a020003  slti        $v0, $s0, 0x3
    ctx->pc = 0x202eb4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)3) ? 1 : 0);
label_202eb8:
    // 0x202eb8: 0x26520002  addiu       $s2, $s2, 0x2
    ctx->pc = 0x202eb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 2));
label_202ebc:
    // 0x202ebc: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_202ec0:
    if (ctx->pc == 0x202EC0u) {
        ctx->pc = 0x202EC0u;
            // 0x202ec0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->pc = 0x202EC4u;
        goto label_202ec4;
    }
    ctx->pc = 0x202EBCu;
    {
        const bool branch_taken_0x202ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202EBCu;
            // 0x202ec0: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202ebc) {
            ctx->pc = 0x202E58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_202e58;
        }
    }
    ctx->pc = 0x202EC4u;
label_202ec4:
    // 0x202ec4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x202ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_202ec8:
    // 0x202ec8: 0x16c2000f  bne         $s6, $v0, . + 4 + (0xF << 2)
label_202ecc:
    if (ctx->pc == 0x202ECCu) {
        ctx->pc = 0x202ECCu;
            // 0x202ecc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x202ED0u;
        goto label_202ed0;
    }
    ctx->pc = 0x202EC8u;
    {
        const bool branch_taken_0x202ec8 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x202ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202EC8u;
            // 0x202ecc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202ec8) {
            ctx->pc = 0x202F08u;
            goto label_202f08;
        }
    }
    ctx->pc = 0x202ED0u;
label_202ed0:
    // 0x202ed0: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x202ed0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202ed4:
    // 0x202ed4: 0xae820584  sw          $v0, 0x584($s4)
    ctx->pc = 0x202ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1412), GPR_U32(ctx, 2));
label_202ed8:
    // 0x202ed8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x202ed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202edc:
    // 0x202edc: 0x9d1021  addu        $v0, $a0, $sp
    ctx->pc = 0x202edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 29)));
label_202ee0:
    // 0x202ee0: 0x8c420228  lw          $v0, 0x228($v0)
    ctx->pc = 0x202ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 552)));
label_202ee4:
    // 0x202ee4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_202ee8:
    if (ctx->pc == 0x202EE8u) {
        ctx->pc = 0x202EECu;
        goto label_202eec;
    }
    ctx->pc = 0x202EE4u;
    {
        const bool branch_taken_0x202ee4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202ee4) {
            ctx->pc = 0x202EF0u;
            goto label_202ef0;
        }
    }
    ctx->pc = 0x202EECu;
label_202eec:
    // 0x202eec: 0xae830594  sw          $v1, 0x594($s4)
    ctx->pc = 0x202eecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1428), GPR_U32(ctx, 3));
label_202ef0:
    // 0x202ef0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x202ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_202ef4:
    // 0x202ef4: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x202ef4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_202ef8:
    // 0x202ef8: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_202efc:
    if (ctx->pc == 0x202EFCu) {
        ctx->pc = 0x202EFCu;
            // 0x202efc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x202F00u;
        goto label_202f00;
    }
    ctx->pc = 0x202EF8u;
    {
        const bool branch_taken_0x202ef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x202EFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202EF8u;
            // 0x202efc: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202ef8) {
            ctx->pc = 0x202EDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_202edc;
        }
    }
    ctx->pc = 0x202F00u;
label_202f00:
    // 0x202f00: 0x1000000b  b           . + 4 + (0xB << 2)
label_202f04:
    if (ctx->pc == 0x202F04u) {
        ctx->pc = 0x202F08u;
        goto label_202f08;
    }
    ctx->pc = 0x202F00u;
    {
        const bool branch_taken_0x202f00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202f00) {
            ctx->pc = 0x202F30u;
            goto label_202f30;
        }
    }
    ctx->pc = 0x202F08u;
label_202f08:
    // 0x202f08: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x202f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
label_202f0c:
    // 0x202f0c: 0x24420024  addiu       $v0, $v0, 0x24
    ctx->pc = 0x202f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 36));
label_202f10:
    // 0x202f10: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x202f10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_202f14:
    // 0x202f14: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x202f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_202f18:
    // 0x202f18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x202f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_202f1c:
    // 0x202f1c: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x202f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
label_202f20:
    // 0x202f20: 0x8f8490dc  lw          $a0, -0x6F24($gp)
    ctx->pc = 0x202f20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938844)));
label_202f24:
    // 0x202f24: 0x84820000  lh          $v0, 0x0($a0)
    ctx->pc = 0x202f24u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_202f28:
    // 0x202f28: 0x1440ffac  bnez        $v0, . + 4 + (-0x54 << 2)
label_202f2c:
    if (ctx->pc == 0x202F2Cu) {
        ctx->pc = 0x202F30u;
        goto label_202f30;
    }
    ctx->pc = 0x202F28u;
    {
        const bool branch_taken_0x202f28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x202f28) {
            ctx->pc = 0x202DDCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_202ddc;
        }
    }
    ctx->pc = 0x202F30u;
label_202f30:
    // 0x202f30: 0x2402007c  addiu       $v0, $zero, 0x7C
    ctx->pc = 0x202f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 124));
label_202f34:
    // 0x202f34: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x202f34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_202f38:
    // 0x202f38: 0xa682060a  sh          $v0, 0x60A($s4)
    ctx->pc = 0x202f38u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1546), (uint16_t)GPR_U32(ctx, 2));
label_202f3c:
    // 0x202f3c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x202f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_202f40:
    // 0x202f40: 0xc08e7cc  jal         func_239F30
label_202f44:
    if (ctx->pc == 0x202F44u) {
        ctx->pc = 0x202F44u;
            // 0x202f44: 0x24a594d0  addiu       $a1, $a1, -0x6B30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939856));
        ctx->pc = 0x202F48u;
        goto label_202f48;
    }
    ctx->pc = 0x202F40u;
    SET_GPR_U32(ctx, 31, 0x202F48u);
    ctx->pc = 0x202F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202F40u;
            // 0x202f44: 0x24a594d0  addiu       $a1, $a1, -0x6B30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202F48u; }
        if (ctx->pc != 0x202F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202F48u; }
        if (ctx->pc != 0x202F48u) { return; }
    }
    ctx->pc = 0x202F48u;
label_202f48:
    // 0x202f48: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x202f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_202f4c:
    // 0x202f4c: 0xc080894  jal         func_202250
label_202f50:
    if (ctx->pc == 0x202F50u) {
        ctx->pc = 0x202F50u;
            // 0x202f50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x202F54u;
        goto label_202f54;
    }
    ctx->pc = 0x202F4Cu;
    SET_GPR_U32(ctx, 31, 0x202F54u);
    ctx->pc = 0x202F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202F4Cu;
            // 0x202f50: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x202250u;
    if (runtime->hasFunction(0x202250u)) {
        auto targetFn = runtime->lookupFunction(0x202250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202F54u; }
        if (ctx->pc != 0x202F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GradationSet__11CMenuInventFi_0x202250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202F54u; }
        if (ctx->pc != 0x202F54u) { return; }
    }
    ctx->pc = 0x202F54u;
label_202f54:
    // 0x202f54: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x202f54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_202f58:
    // 0x202f58: 0xa6820002  sh          $v0, 0x2($s4)
    ctx->pc = 0x202f58u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
label_202f5c:
    // 0x202f5c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x202f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_202f60:
    // 0x202f60: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x202f60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_202f64:
    // 0x202f64: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x202f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_202f68:
    // 0x202f68: 0xc052330  jal         func_148CC0
label_202f6c:
    if (ctx->pc == 0x202F6Cu) {
        ctx->pc = 0x202F6Cu;
            // 0x202f6c: 0xac40001c  sw          $zero, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
        ctx->pc = 0x202F70u;
        goto label_202f70;
    }
    ctx->pc = 0x202F68u;
    SET_GPR_U32(ctx, 31, 0x202F70u);
    ctx->pc = 0x202F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202F68u;
            // 0x202f6c: 0xac40001c  sw          $zero, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148CC0u;
    if (runtime->hasFunction(0x148CC0u)) {
        auto targetFn = runtime->lookupFunction(0x148CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202F70u; }
        if (ctx->pc != 0x202F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartReadBG__Fv_0x148cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202F70u; }
        if (ctx->pc != 0x202F70u) { return; }
    }
    ctx->pc = 0x202F70u;
label_202f70:
    // 0x202f70: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x202f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_202f74:
    // 0x202f74: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x202f74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_202f78:
    // 0x202f78: 0x248494e0  addiu       $a0, $a0, -0x6B20
    ctx->pc = 0x202f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939872));
label_202f7c:
    // 0x202f7c: 0x27a60240  addiu       $a2, $sp, 0x240
    ctx->pc = 0x202f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 576));
label_202f80:
    // 0x202f80: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x202f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_202f84:
    // 0x202f84: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x202f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_202f88:
    // 0x202f88: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x202f88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_202f8c:
    // 0x202f8c: 0xc05224c  jal         func_148930
label_202f90:
    if (ctx->pc == 0x202F90u) {
        ctx->pc = 0x202F90u;
            // 0x202f90: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x202F94u;
        goto label_202f94;
    }
    ctx->pc = 0x202F8Cu;
    SET_GPR_U32(ctx, 31, 0x202F94u);
    ctx->pc = 0x202F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202F8Cu;
            // 0x202f90: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202F94u; }
        if (ctx->pc != 0x202F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202F94u; }
        if (ctx->pc != 0x202F94u) { return; }
    }
    ctx->pc = 0x202F94u;
label_202f94:
    // 0x202f94: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x202f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_202f98:
    // 0x202f98: 0x1000024b  b           . + 4 + (0x24B << 2)
label_202f9c:
    if (ctx->pc == 0x202F9Cu) {
        ctx->pc = 0x202F9Cu;
            // 0x202f9c: 0xa28205fc  sb          $v0, 0x5FC($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1532), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x202FA0u;
        goto label_202fa0;
    }
    ctx->pc = 0x202F98u;
    {
        const bool branch_taken_0x202f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202F98u;
            // 0x202f9c: 0xa28205fc  sb          $v0, 0x5FC($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1532), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202f98) {
            ctx->pc = 0x2038C8u;
            goto label_2038c8;
        }
    }
    ctx->pc = 0x202FA0u;
label_202fa0:
    // 0x202fa0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x202fa0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_202fa4:
    // 0x202fa4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x202fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_202fa8:
    // 0x202fa8: 0xc08e7cc  jal         func_239F30
label_202fac:
    if (ctx->pc == 0x202FACu) {
        ctx->pc = 0x202FACu;
            // 0x202fac: 0x24a594f8  addiu       $a1, $a1, -0x6B08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939896));
        ctx->pc = 0x202FB0u;
        goto label_202fb0;
    }
    ctx->pc = 0x202FA8u;
    SET_GPR_U32(ctx, 31, 0x202FB0u);
    ctx->pc = 0x202FACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x202FA8u;
            // 0x202fac: 0x24a594f8  addiu       $a1, $a1, -0x6B08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202FB0u; }
        if (ctx->pc != 0x202FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x202FB0u; }
        if (ctx->pc != 0x202FB0u) { return; }
    }
    ctx->pc = 0x202FB0u;
label_202fb0:
    // 0x202fb0: 0x10000245  b           . + 4 + (0x245 << 2)
label_202fb4:
    if (ctx->pc == 0x202FB4u) {
        ctx->pc = 0x202FB4u;
            // 0x202fb4: 0xa6800000  sh          $zero, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x202FB8u;
        goto label_202fb8;
    }
    ctx->pc = 0x202FB0u;
    {
        const bool branch_taken_0x202fb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202FB0u;
            // 0x202fb4: 0xa6800000  sh          $zero, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202fb0) {
            ctx->pc = 0x2038C8u;
            goto label_2038c8;
        }
    }
    ctx->pc = 0x202FB8u;
label_202fb8:
    // 0x202fb8: 0x8682060a  lh          $v0, 0x60A($s4)
    ctx->pc = 0x202fb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1546)));
label_202fbc:
    // 0x202fbc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x202fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_202fc0:
    // 0x202fc0: 0xa682060a  sh          $v0, 0x60A($s4)
    ctx->pc = 0x202fc0u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1546), (uint16_t)GPR_U32(ctx, 2));
label_202fc4:
    // 0x202fc4: 0x8682060a  lh          $v0, 0x60A($s4)
    ctx->pc = 0x202fc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1546)));
label_202fc8:
    // 0x202fc8: 0x1c40023f  bgtz        $v0, . + 4 + (0x23F << 2)
label_202fcc:
    if (ctx->pc == 0x202FCCu) {
        ctx->pc = 0x202FD0u;
        goto label_202fd0;
    }
    ctx->pc = 0x202FC8u;
    {
        const bool branch_taken_0x202fc8 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x202fc8) {
            ctx->pc = 0x2038C8u;
            goto label_2038c8;
        }
    }
    ctx->pc = 0x202FD0u;
label_202fd0:
    // 0x202fd0: 0x828205fc  lb          $v0, 0x5FC($s4)
    ctx->pc = 0x202fd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 1532)));
label_202fd4:
    // 0x202fd4: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x202fd4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_202fd8:
    // 0x202fd8: 0x1420023b  bnez        $at, . + 4 + (0x23B << 2)
label_202fdc:
    if (ctx->pc == 0x202FDCu) {
        ctx->pc = 0x202FE0u;
        goto label_202fe0;
    }
    ctx->pc = 0x202FD8u;
    {
        const bool branch_taken_0x202fd8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x202fd8) {
            ctx->pc = 0x2038C8u;
            goto label_2038c8;
        }
    }
    ctx->pc = 0x202FE0u;
label_202fe0:
    // 0x202fe0: 0x86820002  lh          $v0, 0x2($s4)
    ctx->pc = 0x202fe0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_202fe4:
    // 0x202fe4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x202fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_202fe8:
    // 0x202fe8: 0x10000237  b           . + 4 + (0x237 << 2)
label_202fec:
    if (ctx->pc == 0x202FECu) {
        ctx->pc = 0x202FECu;
            // 0x202fec: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x202FF0u;
        goto label_202ff0;
    }
    ctx->pc = 0x202FE8u;
    {
        const bool branch_taken_0x202fe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x202FE8u;
            // 0x202fec: 0xa6820002  sh          $v0, 0x2($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202fe8) {
            ctx->pc = 0x2038C8u;
            goto label_2038c8;
        }
    }
    ctx->pc = 0x202FF0u;
label_202ff0:
    // 0x202ff0: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x202ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_202ff4:
    // 0x202ff4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x202ff4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_202ff8:
    // 0x202ff8: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x202ff8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_202ffc:
    // 0x202ffc: 0x8f39008c  lw          $t9, 0x8C($t9)
    ctx->pc = 0x202ffcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 140)));
label_203000:
    // 0x203000: 0x320f809  jalr        $t9
label_203004:
    if (ctx->pc == 0x203004u) {
        ctx->pc = 0x203008u;
        goto label_203008;
    }
    ctx->pc = 0x203000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203008u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x203008u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203008u; }
            if (ctx->pc != 0x203008u) { return; }
        }
        }
    }
    ctx->pc = 0x203008u;
label_203008:
    // 0x203008: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x203008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_20300c:
    // 0x20300c: 0x8c4303b8  lw          $v1, 0x3B8($v0)
    ctx->pc = 0x20300cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 952)));
label_203010:
    // 0x203010: 0x828205fc  lb          $v0, 0x5FC($s4)
    ctx->pc = 0x203010u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 1532)));
label_203014:
    // 0x203014: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x203014u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_203018:
    // 0x203018: 0x1440022b  bnez        $v0, . + 4 + (0x22B << 2)
label_20301c:
    if (ctx->pc == 0x20301Cu) {
        ctx->pc = 0x20301Cu;
            // 0x20301c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x203020u;
        goto label_203020;
    }
    ctx->pc = 0x203018u;
    {
        const bool branch_taken_0x203018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20301Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203018u;
            // 0x20301c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203018) {
            ctx->pc = 0x2038C8u;
            goto label_2038c8;
        }
    }
    ctx->pc = 0x203020u;
label_203020:
    // 0x203020: 0x14620229  bne         $v1, $v0, . + 4 + (0x229 << 2)
label_203024:
    if (ctx->pc == 0x203024u) {
        ctx->pc = 0x203028u;
        goto label_203028;
    }
    ctx->pc = 0x203020u;
    {
        const bool branch_taken_0x203020 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x203020) {
            ctx->pc = 0x2038C8u;
            goto label_2038c8;
        }
    }
    ctx->pc = 0x203028u;
label_203028:
    // 0x203028: 0x86820002  lh          $v0, 0x2($s4)
    ctx->pc = 0x203028u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_20302c:
    // 0x20302c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20302cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_203030:
    // 0x203030: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x203030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_203034:
    // 0x203034: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x203034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203038:
    // 0x203038: 0x24a59508  addiu       $a1, $a1, -0x6AF8
    ctx->pc = 0x203038u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939912));
label_20303c:
    // 0x20303c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20303cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_203040:
    // 0x203040: 0xa6820002  sh          $v0, 0x2($s4)
    ctx->pc = 0x203040u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 2));
label_203044:
    // 0x203044: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x203044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_203048:
    // 0x203048: 0xac4703bc  sw          $a3, 0x3BC($v0)
    ctx->pc = 0x203048u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 956), GPR_U32(ctx, 7));
label_20304c:
    // 0x20304c: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x20304cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_203050:
    // 0x203050: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x203050u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_203054:
    // 0x203054: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x203054u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_203058:
    // 0x203058: 0x320f809  jalr        $t9
label_20305c:
    if (ctx->pc == 0x20305Cu) {
        ctx->pc = 0x20305Cu;
            // 0x20305c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x203060u;
        goto label_203060;
    }
    ctx->pc = 0x203058u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203060u);
        ctx->pc = 0x20305Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203058u;
            // 0x20305c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203060u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203060u; }
            if (ctx->pc != 0x203060u) { return; }
        }
        }
    }
    ctx->pc = 0x203060u;
label_203060:
    // 0x203060: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x203060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203064:
    // 0x203064: 0xa6820604  sh          $v0, 0x604($s4)
    ctx->pc = 0x203064u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1540), (uint16_t)GPR_U32(ctx, 2));
label_203068:
    // 0x203068: 0xa6820606  sh          $v0, 0x606($s4)
    ctx->pc = 0x203068u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1542), (uint16_t)GPR_U32(ctx, 2));
label_20306c:
    // 0x20306c: 0xa6800608  sh          $zero, 0x608($s4)
    ctx->pc = 0x20306cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1544), (uint16_t)GPR_U32(ctx, 0));
label_203070:
    // 0x203070: 0x8e840f14  lw          $a0, 0xF14($s4)
    ctx->pc = 0x203070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3860)));
label_203074:
    // 0x203074: 0x8e850574  lw          $a1, 0x574($s4)
    ctx->pc = 0x203074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1396)));
label_203078:
    // 0x203078: 0x8e860020  lw          $a2, 0x20($s4)
    ctx->pc = 0x203078u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_20307c:
    // 0x20307c: 0xc0896c8  jal         func_225B20
label_203080:
    if (ctx->pc == 0x203080u) {
        ctx->pc = 0x203080u;
            // 0x203080: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x203084u;
        goto label_203084;
    }
    ctx->pc = 0x20307Cu;
    SET_GPR_U32(ctx, 31, 0x203084u);
    ctx->pc = 0x203080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20307Cu;
            // 0x203080: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B20u;
    if (runtime->hasFunction(0x225B20u)) {
        auto targetFn = runtime->lookupFunction(0x225B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203084u; }
        if (ctx->pc != 0x203084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActionCharaPtr__16CMenuPosDataFormFP12CActionCharaii_0x225b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203084u; }
        if (ctx->pc != 0x203084u) { return; }
    }
    ctx->pc = 0x203084u;
label_203084:
    // 0x203084: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x203084u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_203088:
    // 0x203088: 0xc080894  jal         func_202250
label_20308c:
    if (ctx->pc == 0x20308Cu) {
        ctx->pc = 0x20308Cu;
            // 0x20308c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x203090u;
        goto label_203090;
    }
    ctx->pc = 0x203088u;
    SET_GPR_U32(ctx, 31, 0x203090u);
    ctx->pc = 0x20308Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203088u;
            // 0x20308c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x202250u;
    if (runtime->hasFunction(0x202250u)) {
        auto targetFn = runtime->lookupFunction(0x202250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203090u; }
        if (ctx->pc != 0x203090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GradationSet__11CMenuInventFi_0x202250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203090u; }
        if (ctx->pc != 0x203090u) { return; }
    }
    ctx->pc = 0x203090u;
label_203090:
    // 0x203090: 0xc08f014  jal         func_23C050
label_203094:
    if (ctx->pc == 0x203094u) {
        ctx->pc = 0x203094u;
            // 0x203094: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->pc = 0x203098u;
        goto label_203098;
    }
    ctx->pc = 0x203090u;
    SET_GPR_U32(ctx, 31, 0x203098u);
    ctx->pc = 0x203094u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203090u;
            // 0x203094: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C050u;
    if (runtime->hasFunction(0x23C050u)) {
        auto targetFn = runtime->lookupFunction(0x23C050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203098u; }
        if (ctx->pc != 0x203098u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuPosPlay__12CMenuKeyFuncFv_0x23c050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203098u; }
        if (ctx->pc != 0x203098u) { return; }
    }
    ctx->pc = 0x203098u;
label_203098:
    // 0x203098: 0xae8005e4  sw          $zero, 0x5E4($s4)
    ctx->pc = 0x203098u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1508), GPR_U32(ctx, 0));
label_20309c:
    // 0x20309c: 0xae8005f0  sw          $zero, 0x5F0($s4)
    ctx->pc = 0x20309cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1520), GPR_U32(ctx, 0));
label_2030a0:
    // 0x2030a0: 0xa28005f4  sb          $zero, 0x5F4($s4)
    ctx->pc = 0x2030a0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1524), (uint8_t)GPR_U32(ctx, 0));
label_2030a4:
    // 0x2030a4: 0xae8005f8  sw          $zero, 0x5F8($s4)
    ctx->pc = 0x2030a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1528), GPR_U32(ctx, 0));
label_2030a8:
    // 0x2030a8: 0x86820580  lh          $v0, 0x580($s4)
    ctx->pc = 0x2030a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1408)));
label_2030ac:
    // 0x2030ac: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_2030b0:
    if (ctx->pc == 0x2030B0u) {
        ctx->pc = 0x2030B0u;
            // 0x2030b0: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2030B4u;
        goto label_2030b4;
    }
    ctx->pc = 0x2030ACu;
    {
        const bool branch_taken_0x2030ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2030B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2030ACu;
            // 0x2030b0: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2030ac) {
            ctx->pc = 0x2031DCu;
            goto label_2031dc;
        }
    }
    ctx->pc = 0x2030B4u;
label_2030b4:
    // 0x2030b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2030b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2030b8:
    // 0x2030b8: 0xc08e7cc  jal         func_239F30
label_2030bc:
    if (ctx->pc == 0x2030BCu) {
        ctx->pc = 0x2030BCu;
            // 0x2030bc: 0x24a59510  addiu       $a1, $a1, -0x6AF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939920));
        ctx->pc = 0x2030C0u;
        goto label_2030c0;
    }
    ctx->pc = 0x2030B8u;
    SET_GPR_U32(ctx, 31, 0x2030C0u);
    ctx->pc = 0x2030BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2030B8u;
            // 0x2030bc: 0x24a59510  addiu       $a1, $a1, -0x6AF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2030C0u; }
        if (ctx->pc != 0x2030C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2030C0u; }
        if (ctx->pc != 0x2030C0u) { return; }
    }
    ctx->pc = 0x2030C0u;
label_2030c0:
    // 0x2030c0: 0x8e820574  lw          $v0, 0x574($s4)
    ctx->pc = 0x2030c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1396)));
label_2030c4:
    // 0x2030c4: 0x104000b0  beqz        $v0, . + 4 + (0xB0 << 2)
label_2030c8:
    if (ctx->pc == 0x2030C8u) {
        ctx->pc = 0x2030CCu;
        goto label_2030cc;
    }
    ctx->pc = 0x2030C4u;
    {
        const bool branch_taken_0x2030c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2030c4) {
            ctx->pc = 0x203388u;
            goto label_203388;
        }
    }
    ctx->pc = 0x2030CCu;
label_2030cc:
    // 0x2030cc: 0x86850582  lh          $a1, 0x582($s4)
    ctx->pc = 0x2030ccu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1410)));
label_2030d0:
    // 0x2030d0: 0x8f8490dc  lw          $a0, -0x6F24($gp)
    ctx->pc = 0x2030d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294938844)));
label_2030d4:
    // 0x2030d4: 0xc07fef0  jal         func_1FFBC0
label_2030d8:
    if (ctx->pc == 0x2030D8u) {
        ctx->pc = 0x2030D8u;
            // 0x2030d8: 0x8c510070  lw          $s1, 0x70($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
        ctx->pc = 0x2030DCu;
        goto label_2030dc;
    }
    ctx->pc = 0x2030D4u;
    SET_GPR_U32(ctx, 31, 0x2030DCu);
    ctx->pc = 0x2030D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2030D4u;
            // 0x2030d8: 0x8c510070  lw          $s1, 0x70($v0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FFBC0u;
    if (runtime->hasFunction(0x1FFBC0u)) {
        auto targetFn = runtime->lookupFunction(0x1FFBC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2030DCu; }
        if (ctx->pc != 0x2030DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetInventDataInfoByItemID__17CInventDataManageFi_0x1ffbc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2030DCu; }
        if (ctx->pc != 0x2030DCu) { return; }
    }
    ctx->pc = 0x2030DCu;
label_2030dc:
    // 0x2030dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2030dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2030e0:
    // 0x2030e0: 0x3c0240e0  lui         $v0, 0x40E0
    ctx->pc = 0x2030e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16608 << 16));
label_2030e4:
    // 0x2030e4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2030e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2030e8:
    // 0x2030e8: 0xc0941f4  jal         func_2507D0
label_2030ec:
    if (ctx->pc == 0x2030ECu) {
        ctx->pc = 0x2030ECu;
            // 0x2030ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2030F0u;
        goto label_2030f0;
    }
    ctx->pc = 0x2030E8u;
    SET_GPR_U32(ctx, 31, 0x2030F0u);
    ctx->pc = 0x2030ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2030E8u;
            // 0x2030ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2507D0u;
    if (runtime->hasFunction(0x2507D0u)) {
        auto targetFn = runtime->lookupFunction(0x2507D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2030F0u; }
        if (ctx->pc != 0x2030F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuAdjustPolygonScale__FP8mgCFramef_0x2507d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2030F0u; }
        if (ctx->pc != 0x2030F0u) { return; }
    }
    ctx->pc = 0x2030F0u;
label_2030f0:
    // 0x2030f0: 0xe68005e8  swc1        $f0, 0x5E8($s4)
    ctx->pc = 0x2030f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1512), bits); }
label_2030f4:
    // 0x2030f4: 0x8e840574  lw          $a0, 0x574($s4)
    ctx->pc = 0x2030f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1396)));
label_2030f8:
    // 0x2030f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2030f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2030fc:
    // 0x2030fc: 0x0  nop
    ctx->pc = 0x2030fcu;
    // NOP
label_203100:
    // 0x203100: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x203100u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_203104:
    // 0x203104: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x203104u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_203108:
    // 0x203108: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x203108u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_20310c:
    // 0x20310c: 0x320f809  jalr        $t9
label_203110:
    if (ctx->pc == 0x203110u) {
        ctx->pc = 0x203110u;
            // 0x203110: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x203114u;
        goto label_203114;
    }
    ctx->pc = 0x20310Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203114u);
        ctx->pc = 0x203110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20310Cu;
            // 0x203110: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203114u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203114u; }
            if (ctx->pc != 0x203114u) { return; }
        }
        }
    }
    ctx->pc = 0x203114u;
label_203114:
    // 0x203114: 0x8e840574  lw          $a0, 0x574($s4)
    ctx->pc = 0x203114u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1396)));
label_203118:
    // 0x203118: 0x3c024059  lui         $v0, 0x4059
    ctx->pc = 0x203118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16473 << 16));
label_20311c:
    // 0x20311c: 0x3c03c120  lui         $v1, 0xC120
    ctx->pc = 0x20311cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49440 << 16));
label_203120:
    // 0x203120: 0x3442999a  ori         $v0, $v0, 0x999A
    ctx->pc = 0x203120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)39322);
label_203124:
    // 0x203124: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x203124u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_203128:
    // 0x203128: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x203128u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_20312c:
    // 0x20312c: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x20312cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_203130:
    // 0x203130: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x203130u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_203134:
    // 0x203134: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x203134u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_203138:
    // 0x203138: 0x320f809  jalr        $t9
label_20313c:
    if (ctx->pc == 0x20313Cu) {
        ctx->pc = 0x203140u;
        goto label_203140;
    }
    ctx->pc = 0x203138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203140u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x203140u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203140u; }
            if (ctx->pc != 0x203140u) { return; }
        }
        }
    }
    ctx->pc = 0x203140u;
label_203140:
    // 0x203140: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_203144:
    if (ctx->pc == 0x203144u) {
        ctx->pc = 0x203148u;
        goto label_203148;
    }
    ctx->pc = 0x203140u;
    {
        const bool branch_taken_0x203140 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x203140) {
            ctx->pc = 0x20316Cu;
            goto label_20316c;
        }
    }
    ctx->pc = 0x203148u;
label_203148:
    // 0x203148: 0xc6000020  lwc1        $f0, 0x20($s0)
    ctx->pc = 0x203148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20314c:
    // 0x20314c: 0xe68005e8  swc1        $f0, 0x5E8($s4)
    ctx->pc = 0x20314cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1512), bits); }
label_203150:
    // 0x203150: 0x8e840574  lw          $a0, 0x574($s4)
    ctx->pc = 0x203150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1396)));
label_203154:
    // 0x203154: 0xc60d0018  lwc1        $f13, 0x18($s0)
    ctx->pc = 0x203154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_203158:
    // 0x203158: 0xc60e001c  lwc1        $f14, 0x1C($s0)
    ctx->pc = 0x203158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_20315c:
    // 0x20315c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x20315cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_203160:
    // 0x203160: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x203160u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_203164:
    // 0x203164: 0x320f809  jalr        $t9
label_203168:
    if (ctx->pc == 0x203168u) {
        ctx->pc = 0x203168u;
            // 0x203168: 0xc60c0014  lwc1        $f12, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x20316Cu;
        goto label_20316c;
    }
    ctx->pc = 0x203164u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20316Cu);
        ctx->pc = 0x203168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203164u;
            // 0x203168: 0xc60c0014  lwc1        $f12, 0x14($s0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20316Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20316Cu; }
            if (ctx->pc != 0x20316Cu) { return; }
        }
        }
    }
    ctx->pc = 0x20316Cu;
label_20316c:
    // 0x20316c: 0x8e840574  lw          $a0, 0x574($s4)
    ctx->pc = 0x20316cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1396)));
label_203170:
    // 0x203170: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x203170u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_203174:
    // 0x203174: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x203174u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_203178:
    // 0x203178: 0x320f809  jalr        $t9
label_20317c:
    if (ctx->pc == 0x20317Cu) {
        ctx->pc = 0x203180u;
        goto label_203180;
    }
    ctx->pc = 0x203178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203180u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x203180u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203180u; }
            if (ctx->pc != 0x203180u) { return; }
        }
        }
    }
    ctx->pc = 0x203180u;
label_203180:
    // 0x203180: 0x86830582  lh          $v1, 0x582($s4)
    ctx->pc = 0x203180u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1410)));
label_203184:
    // 0x203184: 0x24020088  addiu       $v0, $zero, 0x88
    ctx->pc = 0x203184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 136));
label_203188:
    // 0x203188: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_20318c:
    if (ctx->pc == 0x20318Cu) {
        ctx->pc = 0x20318Cu;
            // 0x20318c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x203190u;
        goto label_203190;
    }
    ctx->pc = 0x203188u;
    {
        const bool branch_taken_0x203188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x20318Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203188u;
            // 0x20318c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203188) {
            ctx->pc = 0x2031CCu;
            goto label_2031cc;
        }
    }
    ctx->pc = 0x203190u;
label_203190:
    // 0x203190: 0x3c023ee6  lui         $v0, 0x3EE6
    ctx->pc = 0x203190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16102 << 16));
label_203194:
    // 0x203194: 0x3c03c120  lui         $v1, 0xC120
    ctx->pc = 0x203194u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49440 << 16));
label_203198:
    // 0x203198: 0x34446666  ori         $a0, $v0, 0x6666
    ctx->pc = 0x203198u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
label_20319c:
    // 0x20319c: 0xae8405e8  sw          $a0, 0x5E8($s4)
    ctx->pc = 0x20319cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1512), GPR_U32(ctx, 4));
label_2031a0:
    // 0x2031a0: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x2031a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_2031a4:
    // 0x2031a4: 0x8e840574  lw          $a0, 0x574($s4)
    ctx->pc = 0x2031a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1396)));
label_2031a8:
    // 0x2031a8: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2031a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2031ac:
    // 0x2031ac: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2031acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2031b0:
    // 0x2031b0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2031b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2031b4:
    // 0x2031b4: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2031b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2031b8:
    // 0x2031b8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2031b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2031bc:
    // 0x2031bc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2031bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2031c0:
    // 0x2031c0: 0x320f809  jalr        $t9
label_2031c4:
    if (ctx->pc == 0x2031C4u) {
        ctx->pc = 0x2031C8u;
        goto label_2031c8;
    }
    ctx->pc = 0x2031C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2031C8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2031C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2031C8u; }
            if (ctx->pc != 0x2031C8u) { return; }
        }
        }
    }
    ctx->pc = 0x2031C8u;
label_2031c8:
    // 0x2031c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2031c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2031cc:
    // 0x2031cc: 0xc0aebb4  jal         func_2BAED0
label_2031d0:
    if (ctx->pc == 0x2031D0u) {
        ctx->pc = 0x2031D4u;
        goto label_2031d4;
    }
    ctx->pc = 0x2031CCu;
    SET_GPR_U32(ctx, 31, 0x2031D4u);
    ctx->pc = 0x2BAED0u;
    if (runtime->hasFunction(0x2BAED0u)) {
        auto targetFn = runtime->lookupFunction(0x2BAED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2031D4u; }
        if (ctx->pc != 0x2031D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuRoboPartsLightOff__FP8mgCFrame_0x2baed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2031D4u; }
        if (ctx->pc != 0x2031D4u) { return; }
    }
    ctx->pc = 0x2031D4u;
label_2031d4:
    // 0x2031d4: 0x1000006d  b           . + 4 + (0x6D << 2)
label_2031d8:
    if (ctx->pc == 0x2031D8u) {
        ctx->pc = 0x2031D8u;
            // 0x2031d8: 0x8e850394  lw          $a1, 0x394($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 916)));
        ctx->pc = 0x2031DCu;
        goto label_2031dc;
    }
    ctx->pc = 0x2031D4u;
    {
        const bool branch_taken_0x2031d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2031D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2031D4u;
            // 0x2031d8: 0x8e850394  lw          $a1, 0x394($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 916)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2031d4) {
            ctx->pc = 0x20338Cu;
            goto label_20338c;
        }
    }
    ctx->pc = 0x2031DCu;
label_2031dc:
    // 0x2031dc: 0x8e820584  lw          $v0, 0x584($s4)
    ctx->pc = 0x2031dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1412)));
label_2031e0:
    // 0x2031e0: 0x10400066  beqz        $v0, . + 4 + (0x66 << 2)
label_2031e4:
    if (ctx->pc == 0x2031E4u) {
        ctx->pc = 0x2031E4u;
            // 0x2031e4: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2031E8u;
        goto label_2031e8;
    }
    ctx->pc = 0x2031E0u;
    {
        const bool branch_taken_0x2031e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2031E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2031E0u;
            // 0x2031e4: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2031e0) {
            ctx->pc = 0x20337Cu;
            goto label_20337c;
        }
    }
    ctx->pc = 0x2031E8u;
label_2031e8:
    // 0x2031e8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2031e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2031ec:
    // 0x2031ec: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2031ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2031f0:
    // 0x2031f0: 0xc08e7cc  jal         func_239F30
label_2031f4:
    if (ctx->pc == 0x2031F4u) {
        ctx->pc = 0x2031F4u;
            // 0x2031f4: 0x24a59520  addiu       $a1, $a1, -0x6AE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939936));
        ctx->pc = 0x2031F8u;
        goto label_2031f8;
    }
    ctx->pc = 0x2031F0u;
    SET_GPR_U32(ctx, 31, 0x2031F8u);
    ctx->pc = 0x2031F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2031F0u;
            // 0x2031f4: 0x24a59520  addiu       $a1, $a1, -0x6AE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2031F8u; }
        if (ctx->pc != 0x2031F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2031F8u; }
        if (ctx->pc != 0x2031F8u) { return; }
    }
    ctx->pc = 0x2031F8u;
label_2031f8:
    // 0x2031f8: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2031f8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2031fc:
    // 0x2031fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2031fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203200:
    // 0x203200: 0x2841021  addu        $v0, $s4, $a0
    ctx->pc = 0x203200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 4)));
label_203204:
    // 0x203204: 0x8c420588  lw          $v0, 0x588($v0)
    ctx->pc = 0x203204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1416)));
label_203208:
    // 0x203208: 0x18400054  blez        $v0, . + 4 + (0x54 << 2)
label_20320c:
    if (ctx->pc == 0x20320Cu) {
        ctx->pc = 0x203210u;
        goto label_203210;
    }
    ctx->pc = 0x203208u;
    {
        const bool branch_taken_0x203208 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x203208) {
            ctx->pc = 0x20335Cu;
            goto label_20335c;
        }
    }
    ctx->pc = 0x203210u;
label_203210:
    // 0x203210: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x203210u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_203214:
    // 0x203214: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x203214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203218:
    // 0x203218: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x203218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_20321c:
    // 0x20321c: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x20321cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_203220:
    // 0x203220: 0x84630588  lh          $v1, 0x588($v1)
    ctx->pc = 0x203220u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 1416)));
label_203224:
    // 0x203224: 0xa7a3010a  sh          $v1, 0x10A($sp)
    ctx->pc = 0x203224u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 266), (uint16_t)GPR_U32(ctx, 3));
label_203228:
    // 0x203228: 0xc07fe48  jal         func_1FF920
label_20322c:
    if (ctx->pc == 0x20322Cu) {
        ctx->pc = 0x20322Cu;
            // 0x20322c: 0xa3a20100  sb          $v0, 0x100($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x203230u;
        goto label_203230;
    }
    ctx->pc = 0x203228u;
    SET_GPR_U32(ctx, 31, 0x203230u);
    ctx->pc = 0x20322Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203228u;
            // 0x20322c: 0xa3a20100  sb          $v0, 0x100($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 256), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FF920u;
    if (runtime->hasFunction(0x1FF920u)) {
        auto targetFn = runtime->lookupFunction(0x1FF920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203230u; }
        if (ctx->pc != 0x203230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPhotoName__FP17USER_PICTURE_INFO_0x1ff920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203230u; }
        if (ctx->pc != 0x203230u) { return; }
    }
    ctx->pc = 0x203230u;
label_203230:
    // 0x203230: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x203230u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203234:
    // 0x203234: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_203238:
    if (ctx->pc == 0x203238u) {
        ctx->pc = 0x203238u;
            // 0x203238: 0x26840598  addiu       $a0, $s4, 0x598 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1432));
        ctx->pc = 0x20323Cu;
        goto label_20323c;
    }
    ctx->pc = 0x203234u;
    {
        const bool branch_taken_0x203234 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x203238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203234u;
            // 0x203238: 0x26840598  addiu       $a0, $s4, 0x598 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203234) {
            ctx->pc = 0x20324Cu;
            goto label_20324c;
        }
    }
    ctx->pc = 0x20323Cu;
label_20323c:
    // 0x20323c: 0xc04a3dc  jal         func_128F70
label_203240:
    if (ctx->pc == 0x203240u) {
        ctx->pc = 0x203240u;
            // 0x203240: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x203244u;
        goto label_203244;
    }
    ctx->pc = 0x20323Cu;
    SET_GPR_U32(ctx, 31, 0x203244u);
    ctx->pc = 0x203240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20323Cu;
            // 0x203240: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203244u; }
        if (ctx->pc != 0x203244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203244u; }
        if (ctx->pc != 0x203244u) { return; }
    }
    ctx->pc = 0x203244u;
label_203244:
    // 0x203244: 0x1000000a  b           . + 4 + (0xA << 2)
label_203248:
    if (ctx->pc == 0x203248u) {
        ctx->pc = 0x203248u;
            // 0x203248: 0x26840598  addiu       $a0, $s4, 0x598 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1432));
        ctx->pc = 0x20324Cu;
        goto label_20324c;
    }
    ctx->pc = 0x203244u;
    {
        const bool branch_taken_0x203244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203244u;
            // 0x203248: 0x26840598  addiu       $a0, $s4, 0x598 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1432));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203244) {
            ctx->pc = 0x203270u;
            goto label_203270;
        }
    }
    ctx->pc = 0x20324Cu;
label_20324c:
    // 0x20324c: 0x8f838ad0  lw          $v1, -0x7530($gp)
    ctx->pc = 0x20324cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
label_203250:
    // 0x203250: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x203250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_203254:
    // 0x203254: 0x2442eea0  addiu       $v0, $v0, -0x1160
    ctx->pc = 0x203254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962848));
label_203258:
    // 0x203258: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x203258u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_20325c:
    // 0x20325c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20325cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_203260:
    // 0x203260: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x203260u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_203264:
    // 0x203264: 0xc04a3dc  jal         func_128F70
label_203268:
    if (ctx->pc == 0x203268u) {
        ctx->pc = 0x203268u;
            // 0x203268: 0x26840598  addiu       $a0, $s4, 0x598 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1432));
        ctx->pc = 0x20326Cu;
        goto label_20326c;
    }
    ctx->pc = 0x203264u;
    SET_GPR_U32(ctx, 31, 0x20326Cu);
    ctx->pc = 0x203268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203264u;
            // 0x203268: 0x26840598  addiu       $a0, $s4, 0x598 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20326Cu; }
        if (ctx->pc != 0x20326Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20326Cu; }
        if (ctx->pc != 0x20326Cu) { return; }
    }
    ctx->pc = 0x20326Cu;
label_20326c:
    // 0x20326c: 0x26840598  addiu       $a0, $s4, 0x598
    ctx->pc = 0x20326cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1432));
label_203270:
    // 0x203270: 0xc04a422  jal         func_129088
label_203274:
    if (ctx->pc == 0x203274u) {
        ctx->pc = 0x203278u;
        goto label_203278;
    }
    ctx->pc = 0x203270u;
    SET_GPR_U32(ctx, 31, 0x203278u);
    ctx->pc = 0x129088u;
    if (runtime->hasFunction(0x129088u)) {
        auto targetFn = runtime->lookupFunction(0x129088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203278u; }
        if (ctx->pc != 0x203278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strlen_0x129088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203278u; }
        if (ctx->pc != 0x203278u) { return; }
    }
    ctx->pc = 0x203278u;
label_203278:
    // 0x203278: 0x28410003  slti        $at, $v0, 0x3
    ctx->pc = 0x203278u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
label_20327c:
    // 0x20327c: 0x14200023  bnez        $at, . + 4 + (0x23 << 2)
label_203280:
    if (ctx->pc == 0x203280u) {
        ctx->pc = 0x203284u;
        goto label_203284;
    }
    ctx->pc = 0x20327Cu;
    {
        const bool branch_taken_0x20327c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x20327c) {
            ctx->pc = 0x20330Cu;
            goto label_20330c;
        }
    }
    ctx->pc = 0x203284u;
label_203284:
    // 0x203284: 0x8f848ad0  lw          $a0, -0x7530($gp)
    ctx->pc = 0x203284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294937296)));
label_203288:
    // 0x203288: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
label_20328c:
    if (ctx->pc == 0x20328Cu) {
        ctx->pc = 0x20328Cu;
            // 0x20328c: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->pc = 0x203290u;
        goto label_203290;
    }
    ctx->pc = 0x203288u;
    {
        const bool branch_taken_0x203288 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x20328Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203288u;
            // 0x20328c: 0x21843  sra         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203288) {
            ctx->pc = 0x2032B8u;
            goto label_2032b8;
        }
    }
    ctx->pc = 0x203290u;
label_203290:
    // 0x203290: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x203290u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_203294:
    // 0x203294: 0x2404ff81  addiu       $a0, $zero, -0x7F
    ctx->pc = 0x203294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967169));
label_203298:
    // 0x203298: 0x2442eeaf  addiu       $v0, $v0, -0x1151
    ctx->pc = 0x203298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962863));
label_20329c:
    // 0x20329c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x20329cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2032a0:
    // 0x2032a0: 0x80630000  lb          $v1, 0x0($v1)
    ctx->pc = 0x2032a0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2032a4:
    // 0x2032a4: 0x2402ff9a  addiu       $v0, $zero, -0x66
    ctx->pc = 0x2032a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967194));
label_2032a8:
    // 0x2032a8: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x2032a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_2032ac:
    // 0x2032ac: 0xa0640598  sb          $a0, 0x598($v1)
    ctx->pc = 0x2032acu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1432), (uint8_t)GPR_U32(ctx, 4));
label_2032b0:
    // 0x2032b0: 0x1000002e  b           . + 4 + (0x2E << 2)
label_2032b4:
    if (ctx->pc == 0x2032B4u) {
        ctx->pc = 0x2032B4u;
            // 0x2032b4: 0xa0620599  sb          $v0, 0x599($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1433), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2032B8u;
        goto label_2032b8;
    }
    ctx->pc = 0x2032B0u;
    {
        const bool branch_taken_0x2032b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2032B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2032B0u;
            // 0x2032b4: 0xa0620599  sb          $v0, 0x599($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1433), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032b0) {
            ctx->pc = 0x20336Cu;
            goto label_20336c;
        }
    }
    ctx->pc = 0x2032B8u;
label_2032b8:
    // 0x2032b8: 0x1880002c  blez        $a0, . + 4 + (0x2C << 2)
label_2032bc:
    if (ctx->pc == 0x2032BCu) {
        ctx->pc = 0x2032BCu;
            // 0x2032bc: 0x22883  sra         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 2));
        ctx->pc = 0x2032C0u;
        goto label_2032c0;
    }
    ctx->pc = 0x2032B8u;
    {
        const bool branch_taken_0x2032b8 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x2032BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2032B8u;
            // 0x2032bc: 0x22883  sra         $a1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032b8) {
            ctx->pc = 0x20336Cu;
            goto label_20336c;
        }
    }
    ctx->pc = 0x2032C0u;
label_2032c0:
    // 0x2032c0: 0x4410002  bgez        $v0, . + 4 + (0x2 << 2)
label_2032c4:
    if (ctx->pc == 0x2032C4u) {
        ctx->pc = 0x2032C4u;
            // 0x2032c4: 0x24430003  addiu       $v1, $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
        ctx->pc = 0x2032C8u;
        goto label_2032c8;
    }
    ctx->pc = 0x2032C0u;
    {
        const bool branch_taken_0x2032c0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2032C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2032C0u;
            // 0x2032c4: 0x24430003  addiu       $v1, $v0, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032c0) {
            ctx->pc = 0x2032CCu;
            goto label_2032cc;
        }
    }
    ctx->pc = 0x2032C8u;
label_2032c8:
    // 0x2032c8: 0x32883  sra         $a1, $v1, 2
    ctx->pc = 0x2032c8u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 3), 2));
label_2032cc:
    // 0x2032cc: 0x1ca00003  bgtz        $a1, . + 4 + (0x3 << 2)
label_2032d0:
    if (ctx->pc == 0x2032D0u) {
        ctx->pc = 0x2032D0u;
            // 0x2032d0: 0xa2082a  slt         $at, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x2032D4u;
        goto label_2032d4;
    }
    ctx->pc = 0x2032CCu;
    {
        const bool branch_taken_0x2032cc = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x2032D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2032CCu;
            // 0x2032d0: 0xa2082a  slt         $at, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032cc) {
            ctx->pc = 0x2032DCu;
            goto label_2032dc;
        }
    }
    ctx->pc = 0x2032D4u;
label_2032d4:
    // 0x2032d4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2032d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2032d8:
    // 0x2032d8: 0xa2082a  slt         $at, $a1, $v0
    ctx->pc = 0x2032d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2032dc:
    // 0x2032dc: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
label_2032e0:
    if (ctx->pc == 0x2032E0u) {
        ctx->pc = 0x2032E0u;
            // 0x2032e0: 0x2404002e  addiu       $a0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->pc = 0x2032E4u;
        goto label_2032e4;
    }
    ctx->pc = 0x2032DCu;
    {
        const bool branch_taken_0x2032dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2032E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2032DCu;
            // 0x2032e0: 0x2404002e  addiu       $a0, $zero, 0x2E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2032dc) {
            ctx->pc = 0x20336Cu;
            goto label_20336c;
        }
    }
    ctx->pc = 0x2032E4u;
label_2032e4:
    // 0x2032e4: 0x2851821  addu        $v1, $s4, $a1
    ctx->pc = 0x2032e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
label_2032e8:
    // 0x2032e8: 0xa0640598  sb          $a0, 0x598($v1)
    ctx->pc = 0x2032e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1432), (uint8_t)GPR_U32(ctx, 4));
label_2032ec:
    // 0x2032ec: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2032ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2032f0:
    // 0x2032f0: 0xa2182a  slt         $v1, $a1, $v0
    ctx->pc = 0x2032f0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2032f4:
    // 0x2032f4: 0x0  nop
    ctx->pc = 0x2032f4u;
    // NOP
label_2032f8:
    // 0x2032f8: 0x0  nop
    ctx->pc = 0x2032f8u;
    // NOP
label_2032fc:
    // 0x2032fc: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_203300:
    if (ctx->pc == 0x203300u) {
        ctx->pc = 0x203304u;
        goto label_203304;
    }
    ctx->pc = 0x2032FCu;
    {
        const bool branch_taken_0x2032fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2032fc) {
            ctx->pc = 0x2032E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2032e4;
        }
    }
    ctx->pc = 0x203304u;
label_203304:
    // 0x203304: 0x10000019  b           . + 4 + (0x19 << 2)
label_203308:
    if (ctx->pc == 0x203308u) {
        ctx->pc = 0x20330Cu;
        goto label_20330c;
    }
    ctx->pc = 0x203304u;
    {
        const bool branch_taken_0x203304 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x203304) {
            ctx->pc = 0x20336Cu;
            goto label_20336c;
        }
    }
    ctx->pc = 0x20330Cu;
label_20330c:
    // 0x20330c: 0x1200000e  beqz        $s0, . + 4 + (0xE << 2)
label_203310:
    if (ctx->pc == 0x203310u) {
        ctx->pc = 0x203310u;
            // 0x203310: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x203314u;
        goto label_203314;
    }
    ctx->pc = 0x20330Cu;
    {
        const bool branch_taken_0x20330c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x203310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20330Cu;
            // 0x203310: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20330c) {
            ctx->pc = 0x203348u;
            goto label_203348;
        }
    }
    ctx->pc = 0x203314u;
label_203314:
    // 0x203314: 0xc0941b0  jal         func_2506C0
label_203318:
    if (ctx->pc == 0x203318u) {
        ctx->pc = 0x203318u;
            // 0x203318: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x20331Cu;
        goto label_20331c;
    }
    ctx->pc = 0x203314u;
    SET_GPR_U32(ctx, 31, 0x20331Cu);
    ctx->pc = 0x203318u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203314u;
            // 0x203318: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20331Cu; }
        if (ctx->pc != 0x20331Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20331Cu; }
        if (ctx->pc != 0x20331Cu) { return; }
    }
    ctx->pc = 0x20331Cu;
label_20331c:
    // 0x20331c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x20331cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_203320:
    // 0x203320: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x203320u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_203324:
    // 0x203324: 0x278281e0  addiu       $v0, $gp, -0x7E20
    ctx->pc = 0x203324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935008));
label_203328:
    // 0x203328: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x203328u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20332c:
    // 0x20332c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x20332cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_203330:
    // 0x203330: 0x26840598  addiu       $a0, $s4, 0x598
    ctx->pc = 0x203330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1432));
label_203334:
    // 0x203334: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x203334u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_203338:
    // 0x203338: 0xc04a234  jal         func_1288D0
label_20333c:
    if (ctx->pc == 0x20333Cu) {
        ctx->pc = 0x20333Cu;
            // 0x20333c: 0x24a59530  addiu       $a1, $a1, -0x6AD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939952));
        ctx->pc = 0x203340u;
        goto label_203340;
    }
    ctx->pc = 0x203338u;
    SET_GPR_U32(ctx, 31, 0x203340u);
    ctx->pc = 0x20333Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203338u;
            // 0x20333c: 0x24a59530  addiu       $a1, $a1, -0x6AD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203340u; }
        if (ctx->pc != 0x203340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203340u; }
        if (ctx->pc != 0x203340u) { return; }
    }
    ctx->pc = 0x203340u;
label_203340:
    // 0x203340: 0x1000000a  b           . + 4 + (0xA << 2)
label_203344:
    if (ctx->pc == 0x203344u) {
        ctx->pc = 0x203348u;
        goto label_203348;
    }
    ctx->pc = 0x203340u;
    {
        const bool branch_taken_0x203340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x203340) {
            ctx->pc = 0x20336Cu;
            goto label_20336c;
        }
    }
    ctx->pc = 0x203348u;
label_203348:
    // 0x203348: 0x26840598  addiu       $a0, $s4, 0x598
    ctx->pc = 0x203348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1432));
label_20334c:
    // 0x20334c: 0xc04a3dc  jal         func_128F70
label_203350:
    if (ctx->pc == 0x203350u) {
        ctx->pc = 0x203350u;
            // 0x203350: 0x24a59440  addiu       $a1, $a1, -0x6BC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939712));
        ctx->pc = 0x203354u;
        goto label_203354;
    }
    ctx->pc = 0x20334Cu;
    SET_GPR_U32(ctx, 31, 0x203354u);
    ctx->pc = 0x203350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20334Cu;
            // 0x203350: 0x24a59440  addiu       $a1, $a1, -0x6BC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203354u; }
        if (ctx->pc != 0x203354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203354u; }
        if (ctx->pc != 0x203354u) { return; }
    }
    ctx->pc = 0x203354u;
label_203354:
    // 0x203354: 0x10000005  b           . + 4 + (0x5 << 2)
label_203358:
    if (ctx->pc == 0x203358u) {
        ctx->pc = 0x20335Cu;
        goto label_20335c;
    }
    ctx->pc = 0x203354u;
    {
        const bool branch_taken_0x203354 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x203354) {
            ctx->pc = 0x20336Cu;
            goto label_20336c;
        }
    }
    ctx->pc = 0x20335Cu;
label_20335c:
    // 0x20335c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x20335cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_203360:
    // 0x203360: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x203360u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_203364:
    // 0x203364: 0x1440ffa6  bnez        $v0, . + 4 + (-0x5A << 2)
label_203368:
    if (ctx->pc == 0x203368u) {
        ctx->pc = 0x203368u;
            // 0x203368: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->pc = 0x20336Cu;
        goto label_20336c;
    }
    ctx->pc = 0x203364u;
    {
        const bool branch_taken_0x203364 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203364u;
            // 0x203368: 0x24840004  addiu       $a0, $a0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203364) {
            ctx->pc = 0x203200u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_203200;
        }
    }
    ctx->pc = 0x20336Cu;
label_20336c:
    // 0x20336c: 0x0  nop
    ctx->pc = 0x20336cu;
    // NOP
label_203370:
    // 0x203370: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x203370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203374:
    // 0x203374: 0x10000004  b           . + 4 + (0x4 << 2)
label_203378:
    if (ctx->pc == 0x203378u) {
        ctx->pc = 0x203378u;
            // 0x203378: 0xae8205bc  sw          $v0, 0x5BC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1468), GPR_U32(ctx, 2));
        ctx->pc = 0x20337Cu;
        goto label_20337c;
    }
    ctx->pc = 0x203374u;
    {
        const bool branch_taken_0x203374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203374u;
            // 0x203378: 0xae8205bc  sw          $v0, 0x5BC($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1468), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203374) {
            ctx->pc = 0x203388u;
            goto label_203388;
        }
    }
    ctx->pc = 0x20337Cu;
label_20337c:
    // 0x20337c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x20337cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_203380:
    // 0x203380: 0xc08e7cc  jal         func_239F30
label_203384:
    if (ctx->pc == 0x203384u) {
        ctx->pc = 0x203384u;
            // 0x203384: 0x24a59548  addiu       $a1, $a1, -0x6AB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939976));
        ctx->pc = 0x203388u;
        goto label_203388;
    }
    ctx->pc = 0x203380u;
    SET_GPR_U32(ctx, 31, 0x203388u);
    ctx->pc = 0x203384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203380u;
            // 0x203384: 0x24a59548  addiu       $a1, $a1, -0x6AB8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939976));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203388u; }
        if (ctx->pc != 0x203388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203388u; }
        if (ctx->pc != 0x203388u) { return; }
    }
    ctx->pc = 0x203388u;
label_203388:
    // 0x203388: 0x8e850394  lw          $a1, 0x394($s4)
    ctx->pc = 0x203388u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 916)));
label_20338c:
    // 0x20338c: 0x3c0601ed  lui         $a2, 0x1ED
    ctx->pc = 0x20338cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)493 << 16));
label_203390:
    // 0x203390: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x203390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203394:
    // 0x203394: 0xc094288  jal         func_250A20
label_203398:
    if (ctx->pc == 0x203398u) {
        ctx->pc = 0x203398u;
            // 0x203398: 0x24c6d5c0  addiu       $a2, $a2, -0x2A40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956480));
        ctx->pc = 0x20339Cu;
        goto label_20339c;
    }
    ctx->pc = 0x203394u;
    SET_GPR_U32(ctx, 31, 0x20339Cu);
    ctx->pc = 0x203398u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203394u;
            // 0x203398: 0x24c6d5c0  addiu       $a2, $a2, -0x2A40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250A20u;
    if (runtime->hasFunction(0x250A20u)) {
        auto targetFn = runtime->lookupFunction(0x250A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20339Cu; }
        if (ctx->pc != 0x20339Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__FiPUiP9mgCMemory_0x250a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20339Cu; }
        if (ctx->pc != 0x20339Cu) { return; }
    }
    ctx->pc = 0x20339Cu;
label_20339c:
    // 0x20339c: 0x1000014a  b           . + 4 + (0x14A << 2)
label_2033a0:
    if (ctx->pc == 0x2033A0u) {
        ctx->pc = 0x2033A4u;
        goto label_2033a4;
    }
    ctx->pc = 0x20339Cu;
    {
        const bool branch_taken_0x20339c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x20339c) {
            ctx->pc = 0x2038C8u;
            goto label_2038c8;
        }
    }
    ctx->pc = 0x2033A4u;
label_2033a4:
    // 0x2033a4: 0x86820580  lh          $v0, 0x580($s4)
    ctx->pc = 0x2033a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1408)));
label_2033a8:
    // 0x2033a8: 0x1040008a  beqz        $v0, . + 4 + (0x8A << 2)
label_2033ac:
    if (ctx->pc == 0x2033ACu) {
        ctx->pc = 0x2033B0u;
        goto label_2033b0;
    }
    ctx->pc = 0x2033A8u;
    {
        const bool branch_taken_0x2033a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2033a8) {
            ctx->pc = 0x2035D4u;
            goto label_2035d4;
        }
    }
    ctx->pc = 0x2033B0u;
label_2033b0:
    // 0x2033b0: 0x8e840574  lw          $a0, 0x574($s4)
    ctx->pc = 0x2033b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1396)));
label_2033b4:
    // 0x2033b4: 0x10800087  beqz        $a0, . + 4 + (0x87 << 2)
label_2033b8:
    if (ctx->pc == 0x2033B8u) {
        ctx->pc = 0x2033BCu;
        goto label_2033bc;
    }
    ctx->pc = 0x2033B4u;
    {
        const bool branch_taken_0x2033b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2033b4) {
            ctx->pc = 0x2035D4u;
            goto label_2035d4;
        }
    }
    ctx->pc = 0x2033BCu;
label_2033bc:
    // 0x2033bc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2033bcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2033c0:
    // 0x2033c0: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2033c0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2033c4:
    // 0x2033c4: 0x320f809  jalr        $t9
label_2033c8:
    if (ctx->pc == 0x2033C8u) {
        ctx->pc = 0x2033C8u;
            // 0x2033c8: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->pc = 0x2033CCu;
        goto label_2033cc;
    }
    ctx->pc = 0x2033C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2033CCu);
        ctx->pc = 0x2033C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2033C4u;
            // 0x2033c8: 0x27a50120  addiu       $a1, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2033CCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2033CCu; }
            if (ctx->pc != 0x2033CCu) { return; }
        }
        }
    }
    ctx->pc = 0x2033CCu;
label_2033cc:
    // 0x2033cc: 0x928305f4  lbu         $v1, 0x5F4($s4)
    ctx->pc = 0x2033ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1524)));
label_2033d0:
    // 0x2033d0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2033d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2033d4:
    // 0x2033d4: 0x10620018  beq         $v1, $v0, . + 4 + (0x18 << 2)
label_2033d8:
    if (ctx->pc == 0x2033D8u) {
        ctx->pc = 0x2033DCu;
        goto label_2033dc;
    }
    ctx->pc = 0x2033D4u;
    {
        const bool branch_taken_0x2033d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2033d4) {
            ctx->pc = 0x203438u;
            goto label_203438;
        }
    }
    ctx->pc = 0x2033DCu;
label_2033dc:
    // 0x2033dc: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2033e0:
    if (ctx->pc == 0x2033E0u) {
        ctx->pc = 0x2033E4u;
        goto label_2033e4;
    }
    ctx->pc = 0x2033DCu;
    {
        const bool branch_taken_0x2033dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2033dc) {
            ctx->pc = 0x2033ECu;
            goto label_2033ec;
        }
    }
    ctx->pc = 0x2033E4u;
label_2033e4:
    // 0x2033e4: 0x1000006b  b           . + 4 + (0x6B << 2)
label_2033e8:
    if (ctx->pc == 0x2033E8u) {
        ctx->pc = 0x2033E8u;
            // 0x2033e8: 0x8e840574  lw          $a0, 0x574($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1396)));
        ctx->pc = 0x2033ECu;
        goto label_2033ec;
    }
    ctx->pc = 0x2033E4u;
    {
        const bool branch_taken_0x2033e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2033E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2033E4u;
            // 0x2033e8: 0x8e840574  lw          $a0, 0x574($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1396)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2033e4) {
            ctx->pc = 0x203594u;
            goto label_203594;
        }
    }
    ctx->pc = 0x2033ECu;
label_2033ec:
    // 0x2033ec: 0xc68d05f8  lwc1        $f13, 0x5F8($s4)
    ctx->pc = 0x2033ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2033f0:
    // 0x2033f0: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x2033f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_2033f4:
    // 0x2033f4: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x2033f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_2033f8:
    // 0x2033f8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2033f8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2033fc:
    // 0x2033fc: 0xc094570  jal         func_2515C0
label_203400:
    if (ctx->pc == 0x203400u) {
        ctx->pc = 0x203400u;
            // 0x203400: 0x268405f8  addiu       $a0, $s4, 0x5F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1528));
        ctx->pc = 0x203404u;
        goto label_203404;
    }
    ctx->pc = 0x2033FCu;
    SET_GPR_U32(ctx, 31, 0x203404u);
    ctx->pc = 0x203400u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2033FCu;
            // 0x203400: 0x268405f8  addiu       $a0, $s4, 0x5F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2515C0u;
    if (runtime->hasFunction(0x2515C0u)) {
        auto targetFn = runtime->lookupFunction(0x2515C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203404u; }
        if (ctx->pc != 0x203404u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPfff_0x2515c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203404u; }
        if (ctx->pc != 0x203404u) { return; }
    }
    ctx->pc = 0x203404u;
label_203404:
    // 0x203404: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_203408:
    if (ctx->pc == 0x203408u) {
        ctx->pc = 0x203408u;
            // 0x203408: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x20340Cu;
        goto label_20340c;
    }
    ctx->pc = 0x203404u;
    {
        const bool branch_taken_0x203404 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203404u;
            // 0x203408: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203404) {
            ctx->pc = 0x20342Cu;
            goto label_20342c;
        }
    }
    ctx->pc = 0x20340Cu;
label_20340c:
    // 0x20340c: 0x3c023ecc  lui         $v0, 0x3ECC
    ctx->pc = 0x20340cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16076 << 16));
label_203410:
    // 0x203410: 0xa28305f4  sb          $v1, 0x5F4($s4)
    ctx->pc = 0x203410u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1524), (uint8_t)GPR_U32(ctx, 3));
label_203414:
    // 0x203414: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x203414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
label_203418:
    // 0x203418: 0xae8005e4  sw          $zero, 0x5E4($s4)
    ctx->pc = 0x203418u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1508), GPR_U32(ctx, 0));
label_20341c:
    // 0x20341c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20341cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_203420:
    // 0x203420: 0xc68005e8  lwc1        $f0, 0x5E8($s4)
    ctx->pc = 0x203420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_203424:
    // 0x203424: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x203424u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_203428:
    // 0x203428: 0xe68005ec  swc1        $f0, 0x5EC($s4)
    ctx->pc = 0x203428u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1516), bits); }
label_20342c:
    // 0x20342c: 0xc68005f8  lwc1        $f0, 0x5F8($s4)
    ctx->pc = 0x20342cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_203430:
    // 0x203430: 0x10000057  b           . + 4 + (0x57 << 2)
label_203434:
    if (ctx->pc == 0x203434u) {
        ctx->pc = 0x203434u;
            // 0x203434: 0xe7a00120  swc1        $f0, 0x120($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
        ctx->pc = 0x203438u;
        goto label_203438;
    }
    ctx->pc = 0x203430u;
    {
        const bool branch_taken_0x203430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203430u;
            // 0x203434: 0xe7a00120  swc1        $f0, 0x120($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x203430) {
            ctx->pc = 0x203590u;
            goto label_203590;
        }
    }
    ctx->pc = 0x203438u;
label_203438:
    // 0x203438: 0xc68005f0  lwc1        $f0, 0x5F0($s4)
    ctx->pc = 0x203438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20343c:
    // 0x20343c: 0x3c023dd6  lui         $v0, 0x3DD6
    ctx->pc = 0x20343cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15830 << 16));
label_203440:
    // 0x203440: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x203440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
label_203444:
    // 0x203444: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x203444u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_203448:
    // 0x203448: 0xc047a42  jal         func_11E908
label_20344c:
    if (ctx->pc == 0x20344Cu) {
        ctx->pc = 0x20344Cu;
            // 0x20344c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x203450u;
        goto label_203450;
    }
    ctx->pc = 0x203448u;
    SET_GPR_U32(ctx, 31, 0x203450u);
    ctx->pc = 0x20344Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203448u;
            // 0x20344c: 0x46000b02  mul.s       $f12, $f1, $f0 (Delay Slot)
        ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11E908u;
    if (runtime->hasFunction(0x11E908u)) {
        auto targetFn = runtime->lookupFunction(0x11E908u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203450u; }
        if (ctx->pc != 0x203450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sinf_0x11e908(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203450u; }
        if (ctx->pc != 0x203450u) { return; }
    }
    ctx->pc = 0x203450u;
label_203450:
    // 0x203450: 0xc68205ec  lwc1        $f2, 0x5EC($s4)
    ctx->pc = 0x203450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1516)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_203454:
    // 0x203454: 0x3c02bca3  lui         $v0, 0xBCA3
    ctx->pc = 0x203454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48291 << 16));
label_203458:
    // 0x203458: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x203458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
label_20345c:
    // 0x20345c: 0x268405ec  addiu       $a0, $s4, 0x5EC
    ctx->pc = 0x20345cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1516));
label_203460:
    // 0x203460: 0xc68105e8  lwc1        $f1, 0x5E8($s4)
    ctx->pc = 0x203460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_203464:
    // 0x203464: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x203464u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_203468:
    // 0x203468: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x203468u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_20346c:
    // 0x20346c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x20346cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
label_203470:
    // 0x203470: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x203470u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_203474:
    // 0x203474: 0xc094570  jal         func_2515C0
label_203478:
    if (ctx->pc == 0x203478u) {
        ctx->pc = 0x203478u;
            // 0x203478: 0xe7a00120  swc1        $f0, 0x120($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
        ctx->pc = 0x20347Cu;
        goto label_20347c;
    }
    ctx->pc = 0x203474u;
    SET_GPR_U32(ctx, 31, 0x20347Cu);
    ctx->pc = 0x203478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203474u;
            // 0x203478: 0xe7a00120  swc1        $f0, 0x120($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2515C0u;
    if (runtime->hasFunction(0x2515C0u)) {
        auto targetFn = runtime->lookupFunction(0x2515C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20347Cu; }
        if (ctx->pc != 0x20347Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPfff_0x2515c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20347Cu; }
        if (ctx->pc != 0x20347Cu) { return; }
    }
    ctx->pc = 0x20347Cu;
label_20347c:
    // 0x20347c: 0x3c033e20  lui         $v1, 0x3E20
    ctx->pc = 0x20347cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15904 << 16));
label_203480:
    // 0x203480: 0x3c02417b  lui         $v0, 0x417B
    ctx->pc = 0x203480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16763 << 16));
label_203484:
    // 0x203484: 0x3463d97c  ori         $v1, $v1, 0xD97C
    ctx->pc = 0x203484u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)55676);
label_203488:
    // 0x203488: 0x344253d2  ori         $v0, $v0, 0x53D2
    ctx->pc = 0x203488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)21458);
label_20348c:
    // 0x20348c: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x20348cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_203490:
    // 0x203490: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x203490u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_203494:
    // 0x203494: 0xc094570  jal         func_2515C0
label_203498:
    if (ctx->pc == 0x203498u) {
        ctx->pc = 0x203498u;
            // 0x203498: 0x268405e4  addiu       $a0, $s4, 0x5E4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1508));
        ctx->pc = 0x20349Cu;
        goto label_20349c;
    }
    ctx->pc = 0x203494u;
    SET_GPR_U32(ctx, 31, 0x20349Cu);
    ctx->pc = 0x203498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203494u;
            // 0x203498: 0x268405e4  addiu       $a0, $s4, 0x5E4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1508));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2515C0u;
    if (runtime->hasFunction(0x2515C0u)) {
        auto targetFn = runtime->lookupFunction(0x2515C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20349Cu; }
        if (ctx->pc != 0x20349Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPfff_0x2515c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20349Cu; }
        if (ctx->pc != 0x20349Cu) { return; }
    }
    ctx->pc = 0x20349Cu;
label_20349c:
    // 0x20349c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x20349cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
label_2034a0:
    // 0x2034a0: 0x3c024416  lui         $v0, 0x4416
    ctx->pc = 0x2034a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17430 << 16));
label_2034a4:
    // 0x2034a4: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x2034a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2034a8:
    // 0x2034a8: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x2034a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2034ac:
    // 0x2034ac: 0xc094570  jal         func_2515C0
label_2034b0:
    if (ctx->pc == 0x2034B0u) {
        ctx->pc = 0x2034B0u;
            // 0x2034b0: 0x268405f0  addiu       $a0, $s4, 0x5F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1520));
        ctx->pc = 0x2034B4u;
        goto label_2034b4;
    }
    ctx->pc = 0x2034ACu;
    SET_GPR_U32(ctx, 31, 0x2034B4u);
    ctx->pc = 0x2034B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2034ACu;
            // 0x2034b0: 0x268405f0  addiu       $a0, $s4, 0x5F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2515C0u;
    if (runtime->hasFunction(0x2515C0u)) {
        auto targetFn = runtime->lookupFunction(0x2515C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2034B4u; }
        if (ctx->pc != 0x2034B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CalcMenuAdd__FPfff_0x2515c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2034B4u; }
        if (ctx->pc != 0x2034B4u) { return; }
    }
    ctx->pc = 0x2034B4u;
label_2034b4:
    // 0x2034b4: 0x8f829520  lw          $v0, -0x6AE0($gp)
    ctx->pc = 0x2034b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939936)));
label_2034b8:
    // 0x2034b8: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_2034bc:
    if (ctx->pc == 0x2034BCu) {
        ctx->pc = 0x2034BCu;
            // 0x2034bc: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->pc = 0x2034C0u;
        goto label_2034c0;
    }
    ctx->pc = 0x2034B8u;
    {
        const bool branch_taken_0x2034b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2034BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2034B8u;
            // 0x2034bc: 0x3c04003d  lui         $a0, 0x3D (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2034b8) {
            ctx->pc = 0x203590u;
            goto label_203590;
        }
    }
    ctx->pc = 0x2034C0u;
label_2034c0:
    // 0x2034c0: 0xc052cb0  jal         func_14B2C0
label_2034c4:
    if (ctx->pc == 0x2034C4u) {
        ctx->pc = 0x2034C4u;
            // 0x2034c4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x2034C8u;
        goto label_2034c8;
    }
    ctx->pc = 0x2034C0u;
    SET_GPR_U32(ctx, 31, 0x2034C8u);
    ctx->pc = 0x2034C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2034C0u;
            // 0x2034c4: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B2C0u;
    if (runtime->hasFunction(0x14B2C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2034C8u; }
        if (ctx->pc != 0x2034C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRYf__8CGamePadFv_0x14b2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2034C8u; }
        if (ctx->pc != 0x2034C8u) { return; }
    }
    ctx->pc = 0x2034C8u;
label_2034c8:
    // 0x2034c8: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x2034c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_2034cc:
    // 0x2034cc: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x2034ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_2034d0:
    // 0x2034d0: 0x460000c7  neg.s       $f3, $f0
    ctx->pc = 0x2034d0u;
    ctx->f[3] = FPU_NEG_S(ctx->f[0]);
label_2034d4:
    // 0x2034d4: 0x46021883  div.s       $f2, $f3, $f2
    ctx->pc = 0x2034d4u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[3], ctx->f[2]); }
label_2034d8:
    // 0x2034d8: 0xc68105e8  lwc1        $f1, 0x5E8($s4)
    ctx->pc = 0x2034d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 1512)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2034dc:
    // 0x2034dc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2034dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2034e0:
    // 0x2034e0: 0x0  nop
    ctx->pc = 0x2034e0u;
    // NOP
label_2034e4:
    // 0x2034e4: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2034e4u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2034e8:
    // 0x2034e8: 0xe68105e8  swc1        $f1, 0x5E8($s4)
    ctx->pc = 0x2034e8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 1512), bits); }
label_2034ec:
    // 0x2034ec: 0xc7a10120  lwc1        $f1, 0x120($sp)
    ctx->pc = 0x2034ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_2034f0:
    // 0x2034f0: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x2034f0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
label_2034f4:
    // 0x2034f4: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2034f4u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2034f8:
    // 0x2034f8: 0x0  nop
    ctx->pc = 0x2034f8u;
    // NOP
label_2034fc:
    // 0x2034fc: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_203500:
    if (ctx->pc == 0x203500u) {
        ctx->pc = 0x203500u;
            // 0x203500: 0xe7a10120  swc1        $f1, 0x120($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
        ctx->pc = 0x203504u;
        goto label_203504;
    }
    ctx->pc = 0x2034FCu;
    {
        const bool branch_taken_0x2034fc = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x203500u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2034FCu;
            // 0x203500: 0xe7a10120  swc1        $f1, 0x120($sp) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2034fc) {
            ctx->pc = 0x203508u;
            goto label_203508;
        }
    }
    ctx->pc = 0x203504u;
label_203504:
    // 0x203504: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x203504u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
label_203508:
    // 0x203508: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x203508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_20350c:
    // 0x20350c: 0xc052cc0  jal         func_14B300
label_203510:
    if (ctx->pc == 0x203510u) {
        ctx->pc = 0x203510u;
            // 0x203510: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x203514u;
        goto label_203514;
    }
    ctx->pc = 0x20350Cu;
    SET_GPR_U32(ctx, 31, 0x203514u);
    ctx->pc = 0x203510u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20350Cu;
            // 0x203510: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B300u;
    if (runtime->hasFunction(0x14B300u)) {
        auto targetFn = runtime->lookupFunction(0x14B300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203514u; }
        if (ctx->pc != 0x203514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLXf__8CGamePadFv_0x14b300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203514u; }
        if (ctx->pc != 0x203514u) { return; }
    }
    ctx->pc = 0x203514u;
label_203514:
    // 0x203514: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x203514u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_203518:
    // 0x203518: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x203518u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_20351c:
    // 0x20351c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x20351cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_203520:
    // 0x203520: 0x248476e0  addiu       $a0, $a0, 0x76E0
    ctx->pc = 0x203520u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
label_203524:
    // 0x203524: 0x46010503  div.s       $f20, $f0, $f1
    ctx->pc = 0x203524u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[20] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
label_203528:
    // 0x203528: 0x0  nop
    ctx->pc = 0x203528u;
    // NOP
label_20352c:
    // 0x20352c: 0x0  nop
    ctx->pc = 0x20352cu;
    // NOP
label_203530:
    // 0x203530: 0xc052cd0  jal         func_14B340
label_203534:
    if (ctx->pc == 0x203534u) {
        ctx->pc = 0x203538u;
        goto label_203538;
    }
    ctx->pc = 0x203530u;
    SET_GPR_U32(ctx, 31, 0x203538u);
    ctx->pc = 0x14B340u;
    if (runtime->hasFunction(0x14B340u)) {
        auto targetFn = runtime->lookupFunction(0x14B340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203538u; }
        if (ctx->pc != 0x203538u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetLYf__8CGamePadFv_0x14b340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203538u; }
        if (ctx->pc != 0x203538u) { return; }
    }
    ctx->pc = 0x203538u;
label_203538:
    // 0x203538: 0x46000047  neg.s       $f1, $f0
    ctx->pc = 0x203538u;
    ctx->f[1] = FPU_NEG_S(ctx->f[0]);
label_20353c:
    // 0x20353c: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x20353cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
label_203540:
    // 0x203540: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x203540u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_203544:
    // 0x203544: 0x8e840574  lw          $a0, 0x574($s4)
    ctx->pc = 0x203544u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1396)));
label_203548:
    // 0x203548: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x203548u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_20354c:
    // 0x20354c: 0x46000d43  div.s       $f21, $f1, $f0
    ctx->pc = 0x20354cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[21] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
label_203550:
    // 0x203550: 0x0  nop
    ctx->pc = 0x203550u;
    // NOP
label_203554:
    // 0x203554: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x203554u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_203558:
    // 0x203558: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x203558u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_20355c:
    // 0x20355c: 0x320f809  jalr        $t9
label_203560:
    if (ctx->pc == 0x203560u) {
        ctx->pc = 0x203564u;
        goto label_203564;
    }
    ctx->pc = 0x20355Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203564u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x203564u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203564u; }
            if (ctx->pc != 0x203564u) { return; }
        }
        }
    }
    ctx->pc = 0x203564u;
label_203564:
    // 0x203564: 0xc7a10130  lwc1        $f1, 0x130($sp)
    ctx->pc = 0x203564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_203568:
    // 0x203568: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x203568u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_20356c:
    // 0x20356c: 0x46140840  add.s       $f1, $f1, $f20
    ctx->pc = 0x20356cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[20]);
label_203570:
    // 0x203570: 0x46150000  add.s       $f0, $f0, $f21
    ctx->pc = 0x203570u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[21]);
label_203574:
    // 0x203574: 0xe7a10130  swc1        $f1, 0x130($sp)
    ctx->pc = 0x203574u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
label_203578:
    // 0x203578: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x203578u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
label_20357c:
    // 0x20357c: 0x8e840574  lw          $a0, 0x574($s4)
    ctx->pc = 0x20357cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1396)));
label_203580:
    // 0x203580: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x203580u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_203584:
    // 0x203584: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x203584u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_203588:
    // 0x203588: 0x320f809  jalr        $t9
label_20358c:
    if (ctx->pc == 0x20358Cu) {
        ctx->pc = 0x20358Cu;
            // 0x20358c: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->pc = 0x203590u;
        goto label_203590;
    }
    ctx->pc = 0x203588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203590u);
        ctx->pc = 0x20358Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203588u;
            // 0x20358c: 0x27a50130  addiu       $a1, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203590u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203590u; }
            if (ctx->pc != 0x203590u) { return; }
        }
        }
    }
    ctx->pc = 0x203590u;
label_203590:
    // 0x203590: 0x8e840574  lw          $a0, 0x574($s4)
    ctx->pc = 0x203590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1396)));
label_203594:
    // 0x203594: 0xc7ac0120  lwc1        $f12, 0x120($sp)
    ctx->pc = 0x203594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_203598:
    // 0x203598: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x203598u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_20359c:
    // 0x20359c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x20359cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_2035a0:
    // 0x2035a0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x2035a0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_2035a4:
    // 0x2035a4: 0x320f809  jalr        $t9
label_2035a8:
    if (ctx->pc == 0x2035A8u) {
        ctx->pc = 0x2035A8u;
            // 0x2035a8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2035ACu;
        goto label_2035ac;
    }
    ctx->pc = 0x2035A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2035ACu);
        ctx->pc = 0x2035A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2035A4u;
            // 0x2035a8: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2035ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2035ACu; }
            if (ctx->pc != 0x2035ACu) { return; }
        }
        }
    }
    ctx->pc = 0x2035ACu;
label_2035ac:
    // 0x2035ac: 0x3c023c56  lui         $v0, 0x3C56
    ctx->pc = 0x2035acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15446 << 16));
label_2035b0:
    // 0x2035b0: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x2035b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
label_2035b4:
    // 0x2035b4: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2035b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2035b8:
    // 0x2035b8: 0xc094254  jal         func_250950
label_2035bc:
    if (ctx->pc == 0x2035BCu) {
        ctx->pc = 0x2035BCu;
            // 0x2035bc: 0x8e840574  lw          $a0, 0x574($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1396)));
        ctx->pc = 0x2035C0u;
        goto label_2035c0;
    }
    ctx->pc = 0x2035B8u;
    SET_GPR_U32(ctx, 31, 0x2035C0u);
    ctx->pc = 0x2035BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2035B8u;
            // 0x2035bc: 0x8e840574  lw          $a0, 0x574($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1396)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250950u;
    if (runtime->hasFunction(0x250950u)) {
        auto targetFn = runtime->lookupFunction(0x250950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2035C0u; }
        if (ctx->pc != 0x2035C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddRotationCharaY__FP11CCharacter2f_0x250950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2035C0u; }
        if (ctx->pc != 0x2035C0u) { return; }
    }
    ctx->pc = 0x2035C0u;
label_2035c0:
    // 0x2035c0: 0x8e840574  lw          $a0, 0x574($s4)
    ctx->pc = 0x2035c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1396)));
label_2035c4:
    // 0x2035c4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2035c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2035c8:
    // 0x2035c8: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x2035c8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_2035cc:
    // 0x2035cc: 0x320f809  jalr        $t9
label_2035d0:
    if (ctx->pc == 0x2035D0u) {
        ctx->pc = 0x2035D4u;
        goto label_2035d4;
    }
    ctx->pc = 0x2035CCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2035D4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2035D4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2035D4u; }
            if (ctx->pc != 0x2035D4u) { return; }
        }
        }
    }
    ctx->pc = 0x2035D4u;
label_2035d4:
    // 0x2035d4: 0x86830604  lh          $v1, 0x604($s4)
    ctx->pc = 0x2035d4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1540)));
label_2035d8:
    // 0x2035d8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2035d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2035dc:
    // 0x2035dc: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2035e0:
    if (ctx->pc == 0x2035E0u) {
        ctx->pc = 0x2035E4u;
        goto label_2035e4;
    }
    ctx->pc = 0x2035DCu;
    {
        const bool branch_taken_0x2035dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2035dc) {
            ctx->pc = 0x2035F4u;
            goto label_2035f4;
        }
    }
    ctx->pc = 0x2035E4u;
label_2035e4:
    // 0x2035e4: 0x10600045  beqz        $v1, . + 4 + (0x45 << 2)
label_2035e8:
    if (ctx->pc == 0x2035E8u) {
        ctx->pc = 0x2035ECu;
        goto label_2035ec;
    }
    ctx->pc = 0x2035E4u;
    {
        const bool branch_taken_0x2035e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2035e4) {
            ctx->pc = 0x2036FCu;
            goto label_2036fc;
        }
    }
    ctx->pc = 0x2035ECu;
label_2035ec:
    // 0x2035ec: 0x10000044  b           . + 4 + (0x44 << 2)
label_2035f0:
    if (ctx->pc == 0x2035F0u) {
        ctx->pc = 0x2035F0u;
            // 0x2035f0: 0x8e820584  lw          $v0, 0x584($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1412)));
        ctx->pc = 0x2035F4u;
        goto label_2035f4;
    }
    ctx->pc = 0x2035ECu;
    {
        const bool branch_taken_0x2035ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2035F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2035ECu;
            // 0x2035f0: 0x8e820584  lw          $v0, 0x584($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1412)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2035ec) {
            ctx->pc = 0x203700u;
            goto label_203700;
        }
    }
    ctx->pc = 0x2035F4u;
label_2035f4:
    // 0x2035f4: 0x86820606  lh          $v0, 0x606($s4)
    ctx->pc = 0x2035f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1542)));
label_2035f8:
    // 0x2035f8: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
label_2035fc:
    if (ctx->pc == 0x2035FCu) {
        ctx->pc = 0x203600u;
        goto label_203600;
    }
    ctx->pc = 0x2035F8u;
    {
        const bool branch_taken_0x2035f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2035f8) {
            ctx->pc = 0x2036BCu;
            goto label_2036bc;
        }
    }
    ctx->pc = 0x203600u;
label_203600:
    // 0x203600: 0x86830580  lh          $v1, 0x580($s4)
    ctx->pc = 0x203600u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1408)));
label_203604:
    // 0x203604: 0x278281e8  addiu       $v0, $gp, -0x7E18
    ctx->pc = 0x203604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935016));
label_203608:
    // 0x203608: 0x86840608  lh          $a0, 0x608($s4)
    ctx->pc = 0x203608u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1544)));
label_20360c:
    // 0x20360c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x20360cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_203610:
    // 0x203610: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x203610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_203614:
    // 0x203614: 0x84430000  lh          $v1, 0x0($v0)
    ctx->pc = 0x203614u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_203618:
    // 0x203618: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_20361c:
    if (ctx->pc == 0x20361Cu) {
        ctx->pc = 0x20361Cu;
            // 0x20361c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->pc = 0x203620u;
        goto label_203620;
    }
    ctx->pc = 0x203618u;
    {
        const bool branch_taken_0x203618 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x20361Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203618u;
            // 0x20361c: 0x31043  sra         $v0, $v1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203618) {
            ctx->pc = 0x203628u;
            goto label_203628;
        }
    }
    ctx->pc = 0x203620u;
label_203620:
    // 0x203620: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x203620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_203624:
    // 0x203624: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x203624u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
label_203628:
    // 0x203628: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x203628u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_20362c:
    // 0x20362c: 0x10200023  beqz        $at, . + 4 + (0x23 << 2)
label_203630:
    if (ctx->pc == 0x203630u) {
        ctx->pc = 0x203630u;
            // 0x203630: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x203634u;
        goto label_203634;
    }
    ctx->pc = 0x20362Cu;
    {
        const bool branch_taken_0x20362c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x203630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20362Cu;
            // 0x203630: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20362c) {
            ctx->pc = 0x2036BCu;
            goto label_2036bc;
        }
    }
    ctx->pc = 0x203634u;
label_203634:
    // 0x203634: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x203634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_203638:
    // 0x203638: 0x24a59558  addiu       $a1, $a1, -0x6AA8
    ctx->pc = 0x203638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939992));
label_20363c:
    // 0x20363c: 0xc08e7cc  jal         func_239F30
label_203640:
    if (ctx->pc == 0x203640u) {
        ctx->pc = 0x203640u;
            // 0x203640: 0xa6800606  sh          $zero, 0x606($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 1542), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x203644u;
        goto label_203644;
    }
    ctx->pc = 0x20363Cu;
    SET_GPR_U32(ctx, 31, 0x203644u);
    ctx->pc = 0x203640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20363Cu;
            // 0x203640: 0xa6800606  sh          $zero, 0x606($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 1542), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203644u; }
        if (ctx->pc != 0x203644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203644u; }
        if (ctx->pc != 0x203644u) { return; }
    }
    ctx->pc = 0x203644u;
label_203644:
    // 0x203644: 0x86820580  lh          $v0, 0x580($s4)
    ctx->pc = 0x203644u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1408)));
label_203648:
    // 0x203648: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_20364c:
    if (ctx->pc == 0x20364Cu) {
        ctx->pc = 0x203650u;
        goto label_203650;
    }
    ctx->pc = 0x203648u;
    {
        const bool branch_taken_0x203648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203648) {
            ctx->pc = 0x203680u;
            goto label_203680;
        }
    }
    ctx->pc = 0x203650u;
label_203650:
    // 0x203650: 0xc065810  jal         func_196040
label_203654:
    if (ctx->pc == 0x203654u) {
        ctx->pc = 0x203654u;
            // 0x203654: 0x86840582  lh          $a0, 0x582($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1410)));
        ctx->pc = 0x203658u;
        goto label_203658;
    }
    ctx->pc = 0x203650u;
    SET_GPR_U32(ctx, 31, 0x203658u);
    ctx->pc = 0x203654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203650u;
            // 0x203654: 0x86840582  lh          $a0, 0x582($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1410)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196040u;
    if (runtime->hasFunction(0x196040u)) {
        auto targetFn = runtime->lookupFunction(0x196040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203658u; }
        if (ctx->pc != 0x203658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessage__Fi_0x196040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203658u; }
        if (ctx->pc != 0x203658u) { return; }
    }
    ctx->pc = 0x203658u;
label_203658:
    // 0x203658: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_20365c:
    if (ctx->pc == 0x20365Cu) {
        ctx->pc = 0x20365Cu;
            // 0x20365c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x203660u;
        goto label_203660;
    }
    ctx->pc = 0x203658u;
    {
        const bool branch_taken_0x203658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x20365Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203658u;
            // 0x20365c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203658) {
            ctx->pc = 0x203670u;
            goto label_203670;
        }
    }
    ctx->pc = 0x203660u;
label_203660:
    // 0x203660: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x203660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203664:
    // 0x203664: 0xc04a3dc  jal         func_128F70
label_203668:
    if (ctx->pc == 0x203668u) {
        ctx->pc = 0x203668u;
            // 0x203668: 0x26041801  addiu       $a0, $s0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6145));
        ctx->pc = 0x20366Cu;
        goto label_20366c;
    }
    ctx->pc = 0x203664u;
    SET_GPR_U32(ctx, 31, 0x20366Cu);
    ctx->pc = 0x203668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203664u;
            // 0x203668: 0x26041801  addiu       $a0, $s0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20366Cu; }
        if (ctx->pc != 0x20366Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20366Cu; }
        if (ctx->pc != 0x20366Cu) { return; }
    }
    ctx->pc = 0x20366Cu;
label_20366c:
    // 0x20366c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20366cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_203670:
    // 0x203670: 0xc0877e0  jal         func_21DF80
label_203674:
    if (ctx->pc == 0x203674u) {
        ctx->pc = 0x203674u;
            // 0x203674: 0x2405025f  addiu       $a1, $zero, 0x25F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 607));
        ctx->pc = 0x203678u;
        goto label_203678;
    }
    ctx->pc = 0x203670u;
    SET_GPR_U32(ctx, 31, 0x203678u);
    ctx->pc = 0x203674u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203670u;
            // 0x203674: 0x2405025f  addiu       $a1, $zero, 0x25F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 607));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203678u; }
        if (ctx->pc != 0x203678u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203678u; }
        if (ctx->pc != 0x203678u) { return; }
    }
    ctx->pc = 0x203678u;
label_203678:
    // 0x203678: 0x10000011  b           . + 4 + (0x11 << 2)
label_20367c:
    if (ctx->pc == 0x20367Cu) {
        ctx->pc = 0x20367Cu;
            // 0x20367c: 0x86830608  lh          $v1, 0x608($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1544)));
        ctx->pc = 0x203680u;
        goto label_203680;
    }
    ctx->pc = 0x203678u;
    {
        const bool branch_taken_0x203678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20367Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203678u;
            // 0x20367c: 0x86830608  lh          $v1, 0x608($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203678) {
            ctx->pc = 0x2036C0u;
            goto label_2036c0;
        }
    }
    ctx->pc = 0x203680u;
label_203680:
    // 0x203680: 0x8e820584  lw          $v0, 0x584($s4)
    ctx->pc = 0x203680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1412)));
label_203684:
    // 0x203684: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_203688:
    if (ctx->pc == 0x203688u) {
        ctx->pc = 0x203688u;
            // 0x203688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20368Cu;
        goto label_20368c;
    }
    ctx->pc = 0x203684u;
    {
        const bool branch_taken_0x203684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203684u;
            // 0x203688: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203684) {
            ctx->pc = 0x2036B4u;
            goto label_2036b4;
        }
    }
    ctx->pc = 0x20368Cu;
label_20368c:
    // 0x20368c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x20368cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_203690:
    // 0x203690: 0xc0877e0  jal         func_21DF80
label_203694:
    if (ctx->pc == 0x203694u) {
        ctx->pc = 0x203694u;
            // 0x203694: 0x24050265  addiu       $a1, $zero, 0x265 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 613));
        ctx->pc = 0x203698u;
        goto label_203698;
    }
    ctx->pc = 0x203690u;
    SET_GPR_U32(ctx, 31, 0x203698u);
    ctx->pc = 0x203694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203690u;
            // 0x203694: 0x24050265  addiu       $a1, $zero, 0x265 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 613));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203698u; }
        if (ctx->pc != 0x203698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203698u; }
        if (ctx->pc != 0x203698u) { return; }
    }
    ctx->pc = 0x203698u;
label_203698:
    // 0x203698: 0x26850598  addiu       $a1, $s4, 0x598
    ctx->pc = 0x203698u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 1432));
label_20369c:
    // 0x20369c: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_2036a0:
    if (ctx->pc == 0x2036A0u) {
        ctx->pc = 0x2036A0u;
            // 0x2036a0: 0x26041801  addiu       $a0, $s0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6145));
        ctx->pc = 0x2036A4u;
        goto label_2036a4;
    }
    ctx->pc = 0x20369Cu;
    {
        const bool branch_taken_0x20369c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2036A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20369Cu;
            // 0x2036a0: 0x26041801  addiu       $a0, $s0, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6145));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20369c) {
            ctx->pc = 0x2036BCu;
            goto label_2036bc;
        }
    }
    ctx->pc = 0x2036A4u;
label_2036a4:
    // 0x2036a4: 0xc04a3dc  jal         func_128F70
label_2036a8:
    if (ctx->pc == 0x2036A8u) {
        ctx->pc = 0x2036ACu;
        goto label_2036ac;
    }
    ctx->pc = 0x2036A4u;
    SET_GPR_U32(ctx, 31, 0x2036ACu);
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2036ACu; }
        if (ctx->pc != 0x2036ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2036ACu; }
        if (ctx->pc != 0x2036ACu) { return; }
    }
    ctx->pc = 0x2036ACu;
label_2036ac:
    // 0x2036ac: 0x10000003  b           . + 4 + (0x3 << 2)
label_2036b0:
    if (ctx->pc == 0x2036B0u) {
        ctx->pc = 0x2036B4u;
        goto label_2036b4;
    }
    ctx->pc = 0x2036ACu;
    {
        const bool branch_taken_0x2036ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2036ac) {
            ctx->pc = 0x2036BCu;
            goto label_2036bc;
        }
    }
    ctx->pc = 0x2036B4u;
label_2036b4:
    // 0x2036b4: 0xc0877e0  jal         func_21DF80
label_2036b8:
    if (ctx->pc == 0x2036B8u) {
        ctx->pc = 0x2036B8u;
            // 0x2036b8: 0x24050260  addiu       $a1, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->pc = 0x2036BCu;
        goto label_2036bc;
    }
    ctx->pc = 0x2036B4u;
    SET_GPR_U32(ctx, 31, 0x2036BCu);
    ctx->pc = 0x2036B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2036B4u;
            // 0x2036b8: 0x24050260  addiu       $a1, $zero, 0x260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2036BCu; }
        if (ctx->pc != 0x2036BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2036BCu; }
        if (ctx->pc != 0x2036BCu) { return; }
    }
    ctx->pc = 0x2036BCu;
label_2036bc:
    // 0x2036bc: 0x86830608  lh          $v1, 0x608($s4)
    ctx->pc = 0x2036bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1544)));
label_2036c0:
    // 0x2036c0: 0x278281e8  addiu       $v0, $gp, -0x7E18
    ctx->pc = 0x2036c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935016));
label_2036c4:
    // 0x2036c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2036c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2036c8:
    // 0x2036c8: 0xa6830608  sh          $v1, 0x608($s4)
    ctx->pc = 0x2036c8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1544), (uint16_t)GPR_U32(ctx, 3));
label_2036cc:
    // 0x2036cc: 0x86830580  lh          $v1, 0x580($s4)
    ctx->pc = 0x2036ccu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1408)));
label_2036d0:
    // 0x2036d0: 0x86840608  lh          $a0, 0x608($s4)
    ctx->pc = 0x2036d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1544)));
label_2036d4:
    // 0x2036d4: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x2036d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_2036d8:
    // 0x2036d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2036d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2036dc:
    // 0x2036dc: 0x84420000  lh          $v0, 0x0($v0)
    ctx->pc = 0x2036dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_2036e0:
    // 0x2036e0: 0x44082a  slt         $at, $v0, $a0
    ctx->pc = 0x2036e0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2036e4:
    // 0x2036e4: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
label_2036e8:
    if (ctx->pc == 0x2036E8u) {
        ctx->pc = 0x2036ECu;
        goto label_2036ec;
    }
    ctx->pc = 0x2036E4u;
    {
        const bool branch_taken_0x2036e4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2036e4) {
            ctx->pc = 0x2036FCu;
            goto label_2036fc;
        }
    }
    ctx->pc = 0x2036ECu;
label_2036ec:
    // 0x2036ec: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x2036ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2036f0:
    // 0x2036f0: 0xc08fbd0  jal         func_23EF40
label_2036f4:
    if (ctx->pc == 0x2036F4u) {
        ctx->pc = 0x2036F4u;
            // 0x2036f4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2036F8u;
        goto label_2036f8;
    }
    ctx->pc = 0x2036F0u;
    SET_GPR_U32(ctx, 31, 0x2036F8u);
    ctx->pc = 0x2036F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2036F0u;
            // 0x2036f4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EF40u;
    if (runtime->hasFunction(0x23EF40u)) {
        auto targetFn = runtime->lookupFunction(0x23EF40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2036F8u; }
        if (ctx->pc != 0x2036F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeInMenuBGMVol__12CMenuKeyFuncFi_0x23ef40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2036F8u; }
        if (ctx->pc != 0x2036F8u) { return; }
    }
    ctx->pc = 0x2036F8u;
label_2036f8:
    // 0x2036f8: 0xa6800604  sh          $zero, 0x604($s4)
    ctx->pc = 0x2036f8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1540), (uint16_t)GPR_U32(ctx, 0));
label_2036fc:
    // 0x2036fc: 0x8e820584  lw          $v0, 0x584($s4)
    ctx->pc = 0x2036fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1412)));
label_203700:
    // 0x203700: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
label_203704:
    if (ctx->pc == 0x203704u) {
        ctx->pc = 0x203708u;
        goto label_203708;
    }
    ctx->pc = 0x203700u;
    {
        const bool branch_taken_0x203700 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203700) {
            ctx->pc = 0x20376Cu;
            goto label_20376c;
        }
    }
    ctx->pc = 0x203708u;
label_203708:
    // 0x203708: 0x828205b8  lb          $v0, 0x5B8($s4)
    ctx->pc = 0x203708u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 1464)));
label_20370c:
    // 0x20370c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20370cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_203710:
    // 0x203710: 0xa28205b8  sb          $v0, 0x5B8($s4)
    ctx->pc = 0x203710u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1464), (uint8_t)GPR_U32(ctx, 2));
label_203714:
    // 0x203714: 0x828205b8  lb          $v0, 0x5B8($s4)
    ctx->pc = 0x203714u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 1464)));
label_203718:
    // 0x203718: 0x2842003c  slti        $v0, $v0, 0x3C
    ctx->pc = 0x203718u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)60) ? 1 : 0);
label_20371c:
    // 0x20371c: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_203720:
    if (ctx->pc == 0x203720u) {
        ctx->pc = 0x203724u;
        goto label_203724;
    }
    ctx->pc = 0x20371Cu;
    {
        const bool branch_taken_0x20371c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x20371c) {
            ctx->pc = 0x203728u;
            goto label_203728;
        }
    }
    ctx->pc = 0x203724u;
label_203724:
    // 0x203724: 0xa28005b8  sb          $zero, 0x5B8($s4)
    ctx->pc = 0x203724u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1464), (uint8_t)GPR_U32(ctx, 0));
label_203728:
    // 0x203728: 0x828205b8  lb          $v0, 0x5B8($s4)
    ctx->pc = 0x203728u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 1464)));
label_20372c:
    // 0x20372c: 0x3c038030  lui         $v1, 0x8030
    ctx->pc = 0x20372cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32816 << 16));
label_203730:
    // 0x203730: 0x2842001e  slti        $v0, $v0, 0x1E
    ctx->pc = 0x203730u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)30) ? 1 : 0);
label_203734:
    // 0x203734: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_203738:
    if (ctx->pc == 0x203738u) {
        ctx->pc = 0x203738u;
            // 0x203738: 0x34633030  ori         $v1, $v1, 0x3030 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12336);
        ctx->pc = 0x20373Cu;
        goto label_20373c;
    }
    ctx->pc = 0x203734u;
    {
        const bool branch_taken_0x203734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203734u;
            // 0x203738: 0x34633030  ori         $v1, $v1, 0x3030 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12336);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203734) {
            ctx->pc = 0x203744u;
            goto label_203744;
        }
    }
    ctx->pc = 0x20373Cu;
label_20373c:
    // 0x20373c: 0x3c028022  lui         $v0, 0x8022
    ctx->pc = 0x20373cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32802 << 16));
label_203740:
    // 0x203740: 0x3443227f  ori         $v1, $v0, 0x227F
    ctx->pc = 0x203740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8831);
label_203744:
    // 0x203744: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x203744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_203748:
    // 0x203748: 0x8e820594  lw          $v0, 0x594($s4)
    ctx->pc = 0x203748u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1428)));
label_20374c:
    // 0x20374c: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
label_203750:
    if (ctx->pc == 0x203750u) {
        ctx->pc = 0x203750u;
            // 0x203750: 0x8c24ca5c  lw          $a0, -0x35A4($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
        ctx->pc = 0x203754u;
        goto label_203754;
    }
    ctx->pc = 0x20374Cu;
    {
        const bool branch_taken_0x20374c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x203750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20374Cu;
            // 0x203750: 0x8c24ca5c  lw          $a0, -0x35A4($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20374c) {
            ctx->pc = 0x20376Cu;
            goto label_20376c;
        }
    }
    ctx->pc = 0x203754u;
label_203754:
    // 0x203754: 0x28410014  slti        $at, $v0, 0x14
    ctx->pc = 0x203754u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
label_203758:
    // 0x203758: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
label_20375c:
    if (ctx->pc == 0x20375Cu) {
        ctx->pc = 0x203760u;
        goto label_203760;
    }
    ctx->pc = 0x203758u;
    {
        const bool branch_taken_0x203758 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x203758) {
            ctx->pc = 0x20376Cu;
            goto label_20376c;
        }
    }
    ctx->pc = 0x203760u;
label_203760:
    // 0x203760: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x203760u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_203764:
    // 0x203764: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x203764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_203768:
    // 0x203768: 0xac431cd4  sw          $v1, 0x1CD4($v0)
    ctx->pc = 0x203768u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7380), GPR_U32(ctx, 3));
label_20376c:
    // 0x20376c: 0x86820604  lh          $v0, 0x604($s4)
    ctx->pc = 0x20376cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1540)));
label_203770:
    // 0x203770: 0x14400055  bnez        $v0, . + 4 + (0x55 << 2)
label_203774:
    if (ctx->pc == 0x203774u) {
        ctx->pc = 0x203774u;
            // 0x203774: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->pc = 0x203778u;
        goto label_203778;
    }
    ctx->pc = 0x203770u;
    {
        const bool branch_taken_0x203770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203770u;
            // 0x203774: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203770) {
            ctx->pc = 0x2038C8u;
            goto label_2038c8;
        }
    }
    ctx->pc = 0x203778u;
label_203778:
    // 0x203778: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_20377c:
    if (ctx->pc == 0x20377Cu) {
        ctx->pc = 0x20377Cu;
            // 0x20377c: 0x32220002  andi        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
        ctx->pc = 0x203780u;
        goto label_203780;
    }
    ctx->pc = 0x203778u;
    {
        const bool branch_taken_0x203778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20377Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203778u;
            // 0x20377c: 0x32220002  andi        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x203778) {
            ctx->pc = 0x203788u;
            goto label_203788;
        }
    }
    ctx->pc = 0x203780u;
label_203780:
    // 0x203780: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
label_203784:
    if (ctx->pc == 0x203784u) {
        ctx->pc = 0x203788u;
        goto label_203788;
    }
    ctx->pc = 0x203780u;
    {
        const bool branch_taken_0x203780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203780) {
            ctx->pc = 0x2038C8u;
            goto label_2038c8;
        }
    }
    ctx->pc = 0x203788u;
label_203788:
    // 0x203788: 0xa6800002  sh          $zero, 0x2($s4)
    ctx->pc = 0x203788u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
label_20378c:
    // 0x20378c: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x20378cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_203790:
    // 0x203790: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x203790u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
label_203794:
    // 0x203794: 0x828305fc  lb          $v1, 0x5FC($s4)
    ctx->pc = 0x203794u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 1532)));
label_203798:
    // 0x203798: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_20379c:
    if (ctx->pc == 0x20379Cu) {
        ctx->pc = 0x20379Cu;
            // 0x20379c: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->pc = 0x2037A0u;
        goto label_2037a0;
    }
    ctx->pc = 0x203798u;
    {
        const bool branch_taken_0x203798 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x20379Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203798u;
            // 0x20379c: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203798) {
            ctx->pc = 0x2037ACu;
            goto label_2037ac;
        }
    }
    ctx->pc = 0x2037A0u;
label_2037a0:
    // 0x2037a0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2037a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2037a4:
    // 0x2037a4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_2037a8:
    if (ctx->pc == 0x2037A8u) {
        ctx->pc = 0x2037ACu;
        goto label_2037ac;
    }
    ctx->pc = 0x2037A4u;
    {
        const bool branch_taken_0x2037a4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2037a4) {
            ctx->pc = 0x2037BCu;
            goto label_2037bc;
        }
    }
    ctx->pc = 0x2037ACu;
label_2037ac:
    // 0x2037ac: 0xc062bf8  jal         func_18AFE0
label_2037b0:
    if (ctx->pc == 0x2037B0u) {
        ctx->pc = 0x2037B0u;
            // 0x2037b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2037B4u;
        goto label_2037b4;
    }
    ctx->pc = 0x2037ACu;
    SET_GPR_U32(ctx, 31, 0x2037B4u);
    ctx->pc = 0x2037B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2037ACu;
            // 0x2037b0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AFE0u;
    if (runtime->hasFunction(0x18AFE0u)) {
        auto targetFn = runtime->lookupFunction(0x18AFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2037B4u; }
        if (ctx->pc != 0x2037B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamClose__6CSoundFi_0x18afe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2037B4u; }
        if (ctx->pc != 0x2037B4u) { return; }
    }
    ctx->pc = 0x2037B4u;
label_2037b4:
    // 0x2037b4: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x2037b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_2037b8:
    // 0x2037b8: 0xa28205fc  sb          $v0, 0x5FC($s4)
    ctx->pc = 0x2037b8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1532), (uint8_t)GPR_U32(ctx, 2));
label_2037bc:
    // 0x2037bc: 0xc05d31c  jal         func_174C70
label_2037c0:
    if (ctx->pc == 0x2037C0u) {
        ctx->pc = 0x2037C0u;
            // 0x2037c0: 0x8fa400b0  lw          $a0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->pc = 0x2037C4u;
        goto label_2037c4;
    }
    ctx->pc = 0x2037BCu;
    SET_GPR_U32(ctx, 31, 0x2037C4u);
    ctx->pc = 0x2037C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2037BCu;
            // 0x2037c0: 0x8fa400b0  lw          $a0, 0xB0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174C70u;
    if (runtime->hasFunction(0x174C70u)) {
        auto targetFn = runtime->lookupFunction(0x174C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2037C4u; }
        if (ctx->pc != 0x2037C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteExtMotion__11CCharacter2Fv_0x174c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2037C4u; }
        if (ctx->pc != 0x2037C4u) { return; }
    }
    ctx->pc = 0x2037C4u;
label_2037c4:
    // 0x2037c4: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x2037c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2037c8:
    // 0x2037c8: 0xc08fbd0  jal         func_23EF40
label_2037cc:
    if (ctx->pc == 0x2037CCu) {
        ctx->pc = 0x2037CCu;
            // 0x2037cc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2037D0u;
        goto label_2037d0;
    }
    ctx->pc = 0x2037C8u;
    SET_GPR_U32(ctx, 31, 0x2037D0u);
    ctx->pc = 0x2037CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2037C8u;
            // 0x2037cc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EF40u;
    if (runtime->hasFunction(0x23EF40u)) {
        auto targetFn = runtime->lookupFunction(0x23EF40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2037D0u; }
        if (ctx->pc != 0x2037D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeInMenuBGMVol__12CMenuKeyFuncFi_0x23ef40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2037D0u; }
        if (ctx->pc != 0x2037D0u) { return; }
    }
    ctx->pc = 0x2037D0u;
label_2037d0:
    // 0x2037d0: 0xae80063c  sw          $zero, 0x63C($s4)
    ctx->pc = 0x2037d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1596), GPR_U32(ctx, 0));
label_2037d4:
    // 0x2037d4: 0x86820580  lh          $v0, 0x580($s4)
    ctx->pc = 0x2037d4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1408)));
label_2037d8:
    // 0x2037d8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2037dc:
    if (ctx->pc == 0x2037DCu) {
        ctx->pc = 0x2037DCu;
            // 0x2037dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2037E0u;
        goto label_2037e0;
    }
    ctx->pc = 0x2037D8u;
    {
        const bool branch_taken_0x2037d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2037DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2037D8u;
            // 0x2037dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2037d8) {
            ctx->pc = 0x203800u;
            goto label_203800;
        }
    }
    ctx->pc = 0x2037E0u;
label_2037e0:
    // 0x2037e0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2037e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_2037e4:
    // 0x2037e4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2037e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2037e8:
    // 0x2037e8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2037ec:
    if (ctx->pc == 0x2037ECu) {
        ctx->pc = 0x2037ECu;
            // 0x2037ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2037F0u;
        goto label_2037f0;
    }
    ctx->pc = 0x2037E8u;
    {
        const bool branch_taken_0x2037e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2037ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2037E8u;
            // 0x2037ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2037e8) {
            ctx->pc = 0x203810u;
            goto label_203810;
        }
    }
    ctx->pc = 0x2037F0u;
label_2037f0:
    // 0x2037f0: 0x8e820584  lw          $v0, 0x584($s4)
    ctx->pc = 0x2037f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1412)));
label_2037f4:
    // 0x2037f4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2037f8:
    if (ctx->pc == 0x2037F8u) {
        ctx->pc = 0x2037F8u;
            // 0x2037f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2037FCu;
        goto label_2037fc;
    }
    ctx->pc = 0x2037F4u;
    {
        const bool branch_taken_0x2037f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2037F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2037F4u;
            // 0x2037f8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2037f4) {
            ctx->pc = 0x203814u;
            goto label_203814;
        }
    }
    ctx->pc = 0x2037FCu;
label_2037fc:
    // 0x2037fc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2037fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_203800:
    // 0x203800: 0xc0805e8  jal         func_2017A0
label_203804:
    if (ctx->pc == 0x203804u) {
        ctx->pc = 0x203804u;
            // 0x203804: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x203808u;
        goto label_203808;
    }
    ctx->pc = 0x203800u;
    SET_GPR_U32(ctx, 31, 0x203808u);
    ctx->pc = 0x203804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203800u;
            // 0x203804: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2017A0u;
    if (runtime->hasFunction(0x2017A0u)) {
        auto targetFn = runtime->lookupFunction(0x2017A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203808u; }
        if (ctx->pc != 0x203808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitNetaCircle__11CMenuInventFi_0x2017a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203808u; }
        if (ctx->pc != 0x203808u) { return; }
    }
    ctx->pc = 0x203808u;
label_203808:
    // 0x203808: 0x10000004  b           . + 4 + (0x4 << 2)
label_20380c:
    if (ctx->pc == 0x20380Cu) {
        ctx->pc = 0x203810u;
        goto label_203810;
    }
    ctx->pc = 0x203808u;
    {
        const bool branch_taken_0x203808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x203808) {
            ctx->pc = 0x20381Cu;
            goto label_20381c;
        }
    }
    ctx->pc = 0x203810u;
label_203810:
    // 0x203810: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x203810u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203814:
    // 0x203814: 0xc0805e8  jal         func_2017A0
label_203818:
    if (ctx->pc == 0x203818u) {
        ctx->pc = 0x20381Cu;
        goto label_20381c;
    }
    ctx->pc = 0x203814u;
    SET_GPR_U32(ctx, 31, 0x20381Cu);
    ctx->pc = 0x2017A0u;
    if (runtime->hasFunction(0x2017A0u)) {
        auto targetFn = runtime->lookupFunction(0x2017A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20381Cu; }
        if (ctx->pc != 0x20381Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitNetaCircle__11CMenuInventFi_0x2017a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20381Cu; }
        if (ctx->pc != 0x20381Cu) { return; }
    }
    ctx->pc = 0x20381Cu;
label_20381c:
    // 0x20381c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20381cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_203820:
    // 0x203820: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x203820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_203824:
    // 0x203824: 0xc08e7cc  jal         func_239F30
label_203828:
    if (ctx->pc == 0x203828u) {
        ctx->pc = 0x203828u;
            // 0x203828: 0x24a59568  addiu       $a1, $a1, -0x6A98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940008));
        ctx->pc = 0x20382Cu;
        goto label_20382c;
    }
    ctx->pc = 0x203824u;
    SET_GPR_U32(ctx, 31, 0x20382Cu);
    ctx->pc = 0x203828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203824u;
            // 0x203828: 0x24a59568  addiu       $a1, $a1, -0x6A98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940008));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20382Cu; }
        if (ctx->pc != 0x20382Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20382Cu; }
        if (ctx->pc != 0x20382Cu) { return; }
    }
    ctx->pc = 0x20382Cu;
label_20382c:
    // 0x20382c: 0xa6800580  sh          $zero, 0x580($s4)
    ctx->pc = 0x20382cu;
    WRITE16(ADD32(GPR_U32(ctx, 20), 1408), (uint16_t)GPR_U32(ctx, 0));
label_203830:
    // 0x203830: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x203830u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_203834:
    // 0x203834: 0x8e820594  lw          $v0, 0x594($s4)
    ctx->pc = 0x203834u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1428)));
label_203838:
    // 0x203838: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
label_20383c:
    if (ctx->pc == 0x20383Cu) {
        ctx->pc = 0x20383Cu;
            // 0x20383c: 0x8c24ca5c  lw          $a0, -0x35A4($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
        ctx->pc = 0x203840u;
        goto label_203840;
    }
    ctx->pc = 0x203838u;
    {
        const bool branch_taken_0x203838 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x20383Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203838u;
            // 0x20383c: 0x8c24ca5c  lw          $a0, -0x35A4($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203838) {
            ctx->pc = 0x203860u;
            goto label_203860;
        }
    }
    ctx->pc = 0x203840u;
label_203840:
    // 0x203840: 0x28410014  slti        $at, $v0, 0x14
    ctx->pc = 0x203840u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)20) ? 1 : 0);
label_203844:
    // 0x203844: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_203848:
    if (ctx->pc == 0x203848u) {
        ctx->pc = 0x20384Cu;
        goto label_20384c;
    }
    ctx->pc = 0x203844u;
    {
        const bool branch_taken_0x203844 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x203844) {
            ctx->pc = 0x203860u;
            goto label_203860;
        }
    }
    ctx->pc = 0x20384Cu;
label_20384c:
    // 0x20384c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20384cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_203850:
    // 0x203850: 0x3c038068  lui         $v1, 0x8068
    ctx->pc = 0x203850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32872 << 16));
label_203854:
    // 0x203854: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x203854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_203858:
    // 0x203858: 0x34636a6b  ori         $v1, $v1, 0x6A6B
    ctx->pc = 0x203858u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)27243);
label_20385c:
    // 0x20385c: 0xac431cd4  sw          $v1, 0x1CD4($v0)
    ctx->pc = 0x20385cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7380), GPR_U32(ctx, 3));
label_203860:
    // 0x203860: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x203860u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_203864:
    // 0x203864: 0xc080894  jal         func_202250
label_203868:
    if (ctx->pc == 0x203868u) {
        ctx->pc = 0x203868u;
            // 0x203868: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20386Cu;
        goto label_20386c;
    }
    ctx->pc = 0x203864u;
    SET_GPR_U32(ctx, 31, 0x20386Cu);
    ctx->pc = 0x203868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203864u;
            // 0x203868: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x202250u;
    if (runtime->hasFunction(0x202250u)) {
        auto targetFn = runtime->lookupFunction(0x202250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20386Cu; }
        if (ctx->pc != 0x20386Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GradationSet__11CMenuInventFi_0x202250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20386Cu; }
        if (ctx->pc != 0x20386Cu) { return; }
    }
    ctx->pc = 0x20386Cu;
label_20386c:
    // 0x20386c: 0x8e840f14  lw          $a0, 0xF14($s4)
    ctx->pc = 0x20386cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3860)));
label_203870:
    // 0x203870: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x203870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203874:
    // 0x203874: 0x8e860020  lw          $a2, 0x20($s4)
    ctx->pc = 0x203874u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_203878:
    // 0x203878: 0xc0896c8  jal         func_225B20
label_20387c:
    if (ctx->pc == 0x20387Cu) {
        ctx->pc = 0x20387Cu;
            // 0x20387c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x203880u;
        goto label_203880;
    }
    ctx->pc = 0x203878u;
    SET_GPR_U32(ctx, 31, 0x203880u);
    ctx->pc = 0x20387Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203878u;
            // 0x20387c: 0x2407ffff  addiu       $a3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B20u;
    if (runtime->hasFunction(0x225B20u)) {
        auto targetFn = runtime->lookupFunction(0x225B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203880u; }
        if (ctx->pc != 0x203880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActionCharaPtr__16CMenuPosDataFormFP12CActionCharaii_0x225b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203880u; }
        if (ctx->pc != 0x203880u) { return; }
    }
    ctx->pc = 0x203880u;
label_203880:
    // 0x203880: 0x8e850124  lw          $a1, 0x124($s4)
    ctx->pc = 0x203880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 292)));
label_203884:
    // 0x203884: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x203884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_203888:
    // 0x203888: 0xc082128  jal         func_2084A0
label_20388c:
    if (ctx->pc == 0x20388Cu) {
        ctx->pc = 0x20388Cu;
            // 0x20388c: 0x27a60238  addiu       $a2, $sp, 0x238 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 568));
        ctx->pc = 0x203890u;
        goto label_203890;
    }
    ctx->pc = 0x203888u;
    SET_GPR_U32(ctx, 31, 0x203890u);
    ctx->pc = 0x20388Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203888u;
            // 0x20388c: 0x27a60238  addiu       $a2, $sp, 0x238 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2084A0u;
    if (runtime->hasFunction(0x2084A0u)) {
        auto targetFn = runtime->lookupFunction(0x2084A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203890u; }
        if (ctx->pc != 0x203890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNetaBoardCursorPosition__11CMenuInventFiPi_0x2084a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203890u; }
        if (ctx->pc != 0x203890u) { return; }
    }
    ctx->pc = 0x203890u;
label_203890:
    // 0x203890: 0x8fa50238  lw          $a1, 0x238($sp)
    ctx->pc = 0x203890u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 568)));
label_203894:
    // 0x203894: 0x8fa6023c  lw          $a2, 0x23C($sp)
    ctx->pc = 0x203894u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 572)));
label_203898:
    // 0x203898: 0xc08f000  jal         func_23C000
label_20389c:
    if (ctx->pc == 0x20389Cu) {
        ctx->pc = 0x20389Cu;
            // 0x20389c: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->pc = 0x2038A0u;
        goto label_2038a0;
    }
    ctx->pc = 0x203898u;
    SET_GPR_U32(ctx, 31, 0x2038A0u);
    ctx->pc = 0x20389Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203898u;
            // 0x20389c: 0x8f8494f8  lw          $a0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23C000u;
    if (runtime->hasFunction(0x23C000u)) {
        auto targetFn = runtime->lookupFunction(0x23C000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2038A0u; }
        if (ctx->pc != 0x2038A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSetPos__12CMenuKeyFuncFii_0x23c000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2038A0u; }
        if (ctx->pc != 0x2038A0u) { return; }
    }
    ctx->pc = 0x2038A0u;
label_2038a0:
    // 0x2038a0: 0x10000009  b           . + 4 + (0x9 << 2)
label_2038a4:
    if (ctx->pc == 0x2038A4u) {
        ctx->pc = 0x2038A8u;
        goto label_2038a8;
    }
    ctx->pc = 0x2038A0u;
    {
        const bool branch_taken_0x2038a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2038a0) {
            ctx->pc = 0x2038C8u;
            goto label_2038c8;
        }
    }
    ctx->pc = 0x2038A8u;
label_2038a8:
    // 0x2038a8: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_2038ac:
    if (ctx->pc == 0x2038ACu) {
        ctx->pc = 0x2038ACu;
            // 0x2038ac: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2038B0u;
        goto label_2038b0;
    }
    ctx->pc = 0x2038A8u;
    {
        const bool branch_taken_0x2038a8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2038ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2038A8u;
            // 0x2038ac: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2038a8) {
            ctx->pc = 0x2038C8u;
            goto label_2038c8;
        }
    }
    ctx->pc = 0x2038B0u;
label_2038b0:
    // 0x2038b0: 0xc08e7cc  jal         func_239F30
label_2038b4:
    if (ctx->pc == 0x2038B4u) {
        ctx->pc = 0x2038B4u;
            // 0x2038b4: 0x24a594f8  addiu       $a1, $a1, -0x6B08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939896));
        ctx->pc = 0x2038B8u;
        goto label_2038b8;
    }
    ctx->pc = 0x2038B0u;
    SET_GPR_U32(ctx, 31, 0x2038B8u);
    ctx->pc = 0x2038B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2038B0u;
            // 0x2038b4: 0x24a594f8  addiu       $a1, $a1, -0x6B08 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2038B8u; }
        if (ctx->pc != 0x2038B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2038B8u; }
        if (ctx->pc != 0x2038B8u) { return; }
    }
    ctx->pc = 0x2038B8u;
label_2038b8:
    // 0x2038b8: 0xa6800002  sh          $zero, 0x2($s4)
    ctx->pc = 0x2038b8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 2), (uint16_t)GPR_U32(ctx, 0));
label_2038bc:
    // 0x2038bc: 0x10000002  b           . + 4 + (0x2 << 2)
label_2038c0:
    if (ctx->pc == 0x2038C0u) {
        ctx->pc = 0x2038C0u;
            // 0x2038c0: 0xa6800000  sh          $zero, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2038C4u;
        goto label_2038c4;
    }
    ctx->pc = 0x2038BCu;
    {
        const bool branch_taken_0x2038bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2038C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2038BCu;
            // 0x2038c0: 0xa6800000  sh          $zero, 0x0($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2038bc) {
            ctx->pc = 0x2038C8u;
            goto label_2038c8;
        }
    }
    ctx->pc = 0x2038C4u;
label_2038c4:
    // 0x2038c4: 0xa6800000  sh          $zero, 0x0($s4)
    ctx->pc = 0x2038c4u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 0), (uint16_t)GPR_U32(ctx, 0));
label_2038c8:
    // 0x2038c8: 0xc05239c  jal         func_148E70
label_2038cc:
    if (ctx->pc == 0x2038CCu) {
        ctx->pc = 0x2038D0u;
        goto label_2038d0;
    }
    ctx->pc = 0x2038C8u;
    SET_GPR_U32(ctx, 31, 0x2038D0u);
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2038D0u; }
        if (ctx->pc != 0x2038D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2038D0u; }
        if (ctx->pc != 0x2038D0u) { return; }
    }
    ctx->pc = 0x2038D0u;
label_2038d0:
    // 0x2038d0: 0x828305fc  lb          $v1, 0x5FC($s4)
    ctx->pc = 0x2038d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 1532)));
label_2038d4:
    // 0x2038d4: 0x20630002  addi        $v1, $v1, 0x2
    ctx->pc = 0x2038d4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)2, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_2038d8:
    // 0x2038d8: 0x2c610009  sltiu       $at, $v1, 0x9
    ctx->pc = 0x2038d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_2038dc:
    // 0x2038dc: 0x10200253  beqz        $at, . + 4 + (0x253 << 2)
label_2038e0:
    if (ctx->pc == 0x2038E0u) {
        ctx->pc = 0x2038E0u;
            // 0x2038e0: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2038E4u;
        goto label_2038e4;
    }
    ctx->pc = 0x2038DCu;
    {
        const bool branch_taken_0x2038dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2038E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2038DCu;
            // 0x2038e0: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2038dc) {
            ctx->pc = 0x20422Cu;
            goto label_20422c;
        }
    }
    ctx->pc = 0x2038E4u;
label_2038e4:
    // 0x2038e4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2038e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2038e8:
    // 0x2038e8: 0x24849690  addiu       $a0, $a0, -0x6970
    ctx->pc = 0x2038e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940304));
label_2038ec:
    // 0x2038ec: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2038ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2038f0:
    // 0x2038f0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x2038f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2038f4:
    // 0x2038f4: 0x600008  jr          $v1
label_2038f8:
    if (ctx->pc == 0x2038F8u) {
        ctx->pc = 0x2038FCu;
        goto label_2038fc;
    }
    ctx->pc = 0x2038F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2038FCu: goto label_2038fc;
            case 0x203940u: goto label_203940;
            case 0x203AA4u: goto label_203aa4;
            case 0x203FA0u: goto label_203fa0;
            case 0x204058u: goto label_204058;
            case 0x2040D0u: goto label_2040d0;
            case 0x2040F0u: goto label_2040f0;
            case 0x2041ECu: goto label_2041ec;
            case 0x20422Cu: goto label_20422c;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2038FCu;
label_2038fc:
    // 0x2038fc: 0x1440024b  bnez        $v0, . + 4 + (0x24B << 2)
label_203900:
    if (ctx->pc == 0x203900u) {
        ctx->pc = 0x203900u;
            // 0x203900: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x203904u;
        goto label_203904;
    }
    ctx->pc = 0x2038FCu;
    {
        const bool branch_taken_0x2038fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203900u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2038FCu;
            // 0x203900: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2038fc) {
            ctx->pc = 0x20422Cu;
            goto label_20422c;
        }
    }
    ctx->pc = 0x203904u;
label_203904:
    // 0x203904: 0xc05231c  jal         func_148C70
label_203908:
    if (ctx->pc == 0x203908u) {
        ctx->pc = 0x20390Cu;
        goto label_20390c;
    }
    ctx->pc = 0x203904u;
    SET_GPR_U32(ctx, 31, 0x20390Cu);
    ctx->pc = 0x148C70u;
    if (runtime->hasFunction(0x148C70u)) {
        auto targetFn = runtime->lookupFunction(0x148C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20390Cu; }
        if (ctx->pc != 0x20390Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetReadBGFile__Fi_0x148c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20390Cu; }
        if (ctx->pc != 0x20390Cu) { return; }
    }
    ctx->pc = 0x20390Cu;
label_20390c:
    // 0x20390c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_203910:
    if (ctx->pc == 0x203910u) {
        ctx->pc = 0x203914u;
        goto label_203914;
    }
    ctx->pc = 0x20390Cu;
    {
        const bool branch_taken_0x20390c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20390c) {
            ctx->pc = 0x203938u;
            goto label_203938;
        }
    }
    ctx->pc = 0x203914u;
label_203914:
    // 0x203914: 0x8c450110  lw          $a1, 0x110($v0)
    ctx->pc = 0x203914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
label_203918:
    // 0x203918: 0x3c0601ed  lui         $a2, 0x1ED
    ctx->pc = 0x203918u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)493 << 16));
label_20391c:
    // 0x20391c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x20391cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203920:
    // 0x203920: 0xc094288  jal         func_250A20
label_203924:
    if (ctx->pc == 0x203924u) {
        ctx->pc = 0x203924u;
            // 0x203924: 0x24c6d5c0  addiu       $a2, $a2, -0x2A40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956480));
        ctx->pc = 0x203928u;
        goto label_203928;
    }
    ctx->pc = 0x203920u;
    SET_GPR_U32(ctx, 31, 0x203928u);
    ctx->pc = 0x203924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203920u;
            // 0x203924: 0x24c6d5c0  addiu       $a2, $a2, -0x2A40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250A20u;
    if (runtime->hasFunction(0x250A20u)) {
        auto targetFn = runtime->lookupFunction(0x250A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203928u; }
        if (ctx->pc != 0x203928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__FiPUiP9mgCMemory_0x250a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203928u; }
        if (ctx->pc != 0x203928u) { return; }
    }
    ctx->pc = 0x203928u;
label_203928:
    // 0x203928: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x203928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_20392c:
    // 0x20392c: 0x2405fffd  addiu       $a1, $zero, -0x3
    ctx->pc = 0x20392cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_203930:
    // 0x203930: 0xc08fbb4  jal         func_23EED0
label_203934:
    if (ctx->pc == 0x203934u) {
        ctx->pc = 0x203934u;
            // 0x203934: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->pc = 0x203938u;
        goto label_203938;
    }
    ctx->pc = 0x203930u;
    SET_GPR_U32(ctx, 31, 0x203938u);
    ctx->pc = 0x203934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203930u;
            // 0x203934: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23EED0u;
    if (runtime->hasFunction(0x23EED0u)) {
        auto targetFn = runtime->lookupFunction(0x23EED0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203938u; }
        if (ctx->pc != 0x203938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOutMenuBGMVol__12CMenuKeyFuncFii_0x23eed0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203938u; }
        if (ctx->pc != 0x203938u) { return; }
    }
    ctx->pc = 0x203938u;
label_203938:
    // 0x203938: 0x1000023c  b           . + 4 + (0x23C << 2)
label_20393c:
    if (ctx->pc == 0x20393Cu) {
        ctx->pc = 0x20393Cu;
            // 0x20393c: 0xa28005fc  sb          $zero, 0x5FC($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1532), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x203940u;
        goto label_203940;
    }
    ctx->pc = 0x203938u;
    {
        const bool branch_taken_0x203938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20393Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203938u;
            // 0x20393c: 0xa28005fc  sb          $zero, 0x5FC($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1532), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203938) {
            ctx->pc = 0x20422Cu;
            goto label_20422c;
        }
    }
    ctx->pc = 0x203940u;
label_203940:
    // 0x203940: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x203940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_203944:
    // 0x203944: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x203944u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_203948:
    // 0x203948: 0x24a59578  addiu       $a1, $a1, -0x6A88
    ctx->pc = 0x203948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940024));
label_20394c:
    // 0x20394c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x20394cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203950:
    // 0x203950: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x203950u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_203954:
    // 0x203954: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x203954u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_203958:
    // 0x203958: 0x8f390100  lw          $t9, 0x100($t9)
    ctx->pc = 0x203958u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 256)));
label_20395c:
    // 0x20395c: 0x320f809  jalr        $t9
label_203960:
    if (ctx->pc == 0x203960u) {
        ctx->pc = 0x203960u;
            // 0x203960: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x203964u;
        goto label_203964;
    }
    ctx->pc = 0x20395Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203964u);
        ctx->pc = 0x203960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20395Cu;
            // 0x203960: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203964u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203964u; }
            if (ctx->pc != 0x203964u) { return; }
        }
        }
    }
    ctx->pc = 0x203964u;
label_203964:
    // 0x203964: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x203964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_203968:
    // 0x203968: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x203968u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_20396c:
    // 0x20396c: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x20396cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_203970:
    // 0x203970: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x203970u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_203974:
    // 0x203974: 0xc04e780  jal         func_139E00
label_203978:
    if (ctx->pc == 0x203978u) {
        ctx->pc = 0x203978u;
            // 0x203978: 0xac40001c  sw          $zero, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
        ctx->pc = 0x20397Cu;
        goto label_20397c;
    }
    ctx->pc = 0x203974u;
    SET_GPR_U32(ctx, 31, 0x20397Cu);
    ctx->pc = 0x203978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203974u;
            // 0x203978: 0xac40001c  sw          $zero, 0x1C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20397Cu; }
        if (ctx->pc != 0x20397Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20397Cu; }
        if (ctx->pc != 0x20397Cu) { return; }
    }
    ctx->pc = 0x20397Cu;
label_20397c:
    // 0x20397c: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x20397cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_203980:
    // 0x203980: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x203980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_203984:
    // 0x203984: 0x2442eec0  addiu       $v0, $v0, -0x1140
    ctx->pc = 0x203984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962880));
label_203988:
    // 0x203988: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x203988u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_20398c:
    // 0x20398c: 0x78450010  lq          $a1, 0x10($v0)
    ctx->pc = 0x20398cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_203990:
    // 0x203990: 0x78430020  lq          $v1, 0x20($v0)
    ctx->pc = 0x203990u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 32)));
label_203994:
    // 0x203994: 0x78420030  lq          $v0, 0x30($v0)
    ctx->pc = 0x203994u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 48)));
label_203998:
    // 0x203998: 0x7c860000  sq          $a2, 0x0($a0)
    ctx->pc = 0x203998u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 6));
label_20399c:
    // 0x20399c: 0x7c850010  sq          $a1, 0x10($a0)
    ctx->pc = 0x20399cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 5));
label_2039a0:
    // 0x2039a0: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x2039a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
label_2039a4:
    // 0x2039a4: 0x7c820030  sq          $v0, 0x30($a0)
    ctx->pc = 0x2039a4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 2));
label_2039a8:
    // 0x2039a8: 0x86820580  lh          $v0, 0x580($s4)
    ctx->pc = 0x2039a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1408)));
label_2039ac:
    // 0x2039ac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2039b0:
    if (ctx->pc == 0x2039B0u) {
        ctx->pc = 0x2039B0u;
            // 0x2039b0: 0x24101720  addiu       $s0, $zero, 0x1720 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5920));
        ctx->pc = 0x2039B4u;
        goto label_2039b4;
    }
    ctx->pc = 0x2039ACu;
    {
        const bool branch_taken_0x2039ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2039B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2039ACu;
            // 0x2039b0: 0x24101720  addiu       $s0, $zero, 0x1720 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5920));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2039ac) {
            ctx->pc = 0x2039C8u;
            goto label_2039c8;
        }
    }
    ctx->pc = 0x2039B4u;
label_2039b4:
    // 0x2039b4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2039b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2039b8:
    // 0x2039b8: 0xc04a2da  jal         func_128B68
label_2039bc:
    if (ctx->pc == 0x2039BCu) {
        ctx->pc = 0x2039BCu;
            // 0x2039bc: 0x24a59590  addiu       $a1, $a1, -0x6A70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940048));
        ctx->pc = 0x2039C0u;
        goto label_2039c0;
    }
    ctx->pc = 0x2039B8u;
    SET_GPR_U32(ctx, 31, 0x2039C0u);
    ctx->pc = 0x2039BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2039B8u;
            // 0x2039bc: 0x24a59590  addiu       $a1, $a1, -0x6A70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2039C0u; }
        if (ctx->pc != 0x2039C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2039C0u; }
        if (ctx->pc != 0x2039C0u) { return; }
    }
    ctx->pc = 0x2039C0u;
label_2039c0:
    // 0x2039c0: 0x1000000d  b           . + 4 + (0xD << 2)
label_2039c4:
    if (ctx->pc == 0x2039C4u) {
        ctx->pc = 0x2039C4u;
            // 0x2039c4: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->pc = 0x2039C8u;
        goto label_2039c8;
    }
    ctx->pc = 0x2039C0u;
    {
        const bool branch_taken_0x2039c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2039C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2039C0u;
            // 0x2039c4: 0x8fa200c0  lw          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2039c0) {
            ctx->pc = 0x2039F8u;
            goto label_2039f8;
        }
    }
    ctx->pc = 0x2039C8u;
label_2039c8:
    // 0x2039c8: 0x8e820584  lw          $v0, 0x584($s4)
    ctx->pc = 0x2039c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1412)));
label_2039cc:
    // 0x2039cc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2039d0:
    if (ctx->pc == 0x2039D0u) {
        ctx->pc = 0x2039D0u;
            // 0x2039d0: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2039D4u;
        goto label_2039d4;
    }
    ctx->pc = 0x2039CCu;
    {
        const bool branch_taken_0x2039cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2039D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2039CCu;
            // 0x2039d0: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2039cc) {
            ctx->pc = 0x2039E8u;
            goto label_2039e8;
        }
    }
    ctx->pc = 0x2039D4u;
label_2039d4:
    // 0x2039d4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2039d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2039d8:
    // 0x2039d8: 0xc04a2da  jal         func_128B68
label_2039dc:
    if (ctx->pc == 0x2039DCu) {
        ctx->pc = 0x2039DCu;
            // 0x2039dc: 0x24a595a0  addiu       $a1, $a1, -0x6A60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940064));
        ctx->pc = 0x2039E0u;
        goto label_2039e0;
    }
    ctx->pc = 0x2039D8u;
    SET_GPR_U32(ctx, 31, 0x2039E0u);
    ctx->pc = 0x2039DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2039D8u;
            // 0x2039dc: 0x24a595a0  addiu       $a1, $a1, -0x6A60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2039E0u; }
        if (ctx->pc != 0x2039E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2039E0u; }
        if (ctx->pc != 0x2039E0u) { return; }
    }
    ctx->pc = 0x2039E0u;
label_2039e0:
    // 0x2039e0: 0x10000004  b           . + 4 + (0x4 << 2)
label_2039e4:
    if (ctx->pc == 0x2039E4u) {
        ctx->pc = 0x2039E4u;
            // 0x2039e4: 0x24102000  addiu       $s0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->pc = 0x2039E8u;
        goto label_2039e8;
    }
    ctx->pc = 0x2039E0u;
    {
        const bool branch_taken_0x2039e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2039E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2039E0u;
            // 0x2039e4: 0x24102000  addiu       $s0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2039e0) {
            ctx->pc = 0x2039F4u;
            goto label_2039f4;
        }
    }
    ctx->pc = 0x2039E8u;
label_2039e8:
    // 0x2039e8: 0xc04a2da  jal         func_128B68
label_2039ec:
    if (ctx->pc == 0x2039ECu) {
        ctx->pc = 0x2039ECu;
            // 0x2039ec: 0x24a595b0  addiu       $a1, $a1, -0x6A50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940080));
        ctx->pc = 0x2039F0u;
        goto label_2039f0;
    }
    ctx->pc = 0x2039E8u;
    SET_GPR_U32(ctx, 31, 0x2039F0u);
    ctx->pc = 0x2039ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2039E8u;
            // 0x2039ec: 0x24a595b0  addiu       $a1, $a1, -0x6A50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2039F0u; }
        if (ctx->pc != 0x2039F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2039F0u; }
        if (ctx->pc != 0x2039F0u) { return; }
    }
    ctx->pc = 0x2039F0u;
label_2039f0:
    // 0x2039f0: 0x24102000  addiu       $s0, $zero, 0x2000
    ctx->pc = 0x2039f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_2039f4:
    // 0x2039f4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2039f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2039f8:
    // 0x2039f8: 0x2684053c  addiu       $a0, $s4, 0x53C
    ctx->pc = 0x2039f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 1340));
label_2039fc:
    // 0x2039fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2039fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_203a00:
    // 0x203a00: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x203a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_203a04:
    // 0x203a04: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x203a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_203a08:
    // 0x203a08: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x203a08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_203a0c:
    // 0x203a0c: 0xc04e79c  jal         func_139E70
label_203a10:
    if (ctx->pc == 0x203A10u) {
        ctx->pc = 0x203A10u;
            // 0x203a10: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x203A14u;
        goto label_203a14;
    }
    ctx->pc = 0x203A0Cu;
    SET_GPR_U32(ctx, 31, 0x203A14u);
    ctx->pc = 0x203A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203A0Cu;
            // 0x203a10: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203A14u; }
        if (ctx->pc != 0x203A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203A14u; }
        if (ctx->pc != 0x203A14u) { return; }
    }
    ctx->pc = 0x203A14u;
label_203a14:
    // 0x203a14: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x203a14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_203a18:
    // 0x203a18: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x203a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_203a1c:
    // 0x203a1c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_203a20:
    if (ctx->pc == 0x203A20u) {
        ctx->pc = 0x203A20u;
            // 0x203a20: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x203A24u;
        goto label_203a24;
    }
    ctx->pc = 0x203A1Cu;
    {
        const bool branch_taken_0x203a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203A1Cu;
            // 0x203a20: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a1c) {
            ctx->pc = 0x203A2Cu;
            goto label_203a2c;
        }
    }
    ctx->pc = 0x203A24u;
label_203a24:
    // 0x203a24: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x203a24u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_203a28:
    // 0x203a28: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x203a28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_203a2c:
    // 0x203a2c: 0xc04e748  jal         func_139D20
label_203a30:
    if (ctx->pc == 0x203A30u) {
        ctx->pc = 0x203A30u;
            // 0x203a30: 0x8fa400c0  lw          $a0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->pc = 0x203A34u;
        goto label_203a34;
    }
    ctx->pc = 0x203A2Cu;
    SET_GPR_U32(ctx, 31, 0x203A34u);
    ctx->pc = 0x203A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203A2Cu;
            // 0x203a30: 0x8fa400c0  lw          $a0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203A34u; }
        if (ctx->pc != 0x203A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203A34u; }
        if (ctx->pc != 0x203A34u) { return; }
    }
    ctx->pc = 0x203A34u;
label_203a34:
    // 0x203a34: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x203a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_203a38:
    // 0x203a38: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x203a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_203a3c:
    // 0x203a3c: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x203a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_203a40:
    // 0x203a40: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x203a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_203a44:
    // 0x203a44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x203a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_203a48:
    // 0x203a48: 0xc052330  jal         func_148CC0
label_203a4c:
    if (ctx->pc == 0x203A4Cu) {
        ctx->pc = 0x203A4Cu;
            // 0x203a4c: 0xae82056c  sw          $v0, 0x56C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1388), GPR_U32(ctx, 2));
        ctx->pc = 0x203A50u;
        goto label_203a50;
    }
    ctx->pc = 0x203A48u;
    SET_GPR_U32(ctx, 31, 0x203A50u);
    ctx->pc = 0x203A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203A48u;
            // 0x203a4c: 0xae82056c  sw          $v0, 0x56C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1388), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148CC0u;
    if (runtime->hasFunction(0x148CC0u)) {
        auto targetFn = runtime->lookupFunction(0x148CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203A50u; }
        if (ctx->pc != 0x203A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartReadBG__Fv_0x148cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203A50u; }
        if (ctx->pc != 0x203A50u) { return; }
    }
    ctx->pc = 0x203A50u;
label_203a50:
    // 0x203a50: 0x8e85056c  lw          $a1, 0x56C($s4)
    ctx->pc = 0x203a50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1388)));
label_203a54:
    // 0x203a54: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x203a54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_203a58:
    // 0x203a58: 0xc05224c  jal         func_148930
label_203a5c:
    if (ctx->pc == 0x203A5Cu) {
        ctx->pc = 0x203A5Cu;
            // 0x203a5c: 0x27a60244  addiu       $a2, $sp, 0x244 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 580));
        ctx->pc = 0x203A60u;
        goto label_203a60;
    }
    ctx->pc = 0x203A58u;
    SET_GPR_U32(ctx, 31, 0x203A60u);
    ctx->pc = 0x203A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203A58u;
            // 0x203a5c: 0x27a60244  addiu       $a2, $sp, 0x244 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 580));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203A60u; }
        if (ctx->pc != 0x203A60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203A60u; }
        if (ctx->pc != 0x203A60u) { return; }
    }
    ctx->pc = 0x203A60u;
label_203a60:
    // 0x203a60: 0x8fa30244  lw          $v1, 0x244($sp)
    ctx->pc = 0x203a60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 580)));
label_203a64:
    // 0x203a64: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
label_203a68:
    if (ctx->pc == 0x203A68u) {
        ctx->pc = 0x203A68u;
            // 0x203a68: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->pc = 0x203A6Cu;
        goto label_203a6c;
    }
    ctx->pc = 0x203A64u;
    {
        const bool branch_taken_0x203a64 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x203A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203A64u;
            // 0x203a68: 0x31103  sra         $v0, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a64) {
            ctx->pc = 0x203A74u;
            goto label_203a74;
        }
    }
    ctx->pc = 0x203A6Cu;
label_203a6c:
    // 0x203a6c: 0x2462000f  addiu       $v0, $v1, 0xF
    ctx->pc = 0x203a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_203a70:
    // 0x203a70: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x203a70u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_203a74:
    // 0x203a74: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x203a74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
label_203a78:
    // 0x203a78: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x203a78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_203a7c:
    // 0x203a7c: 0x8e82056c  lw          $v0, 0x56C($s4)
    ctx->pc = 0x203a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1388)));
label_203a80:
    // 0x203a80: 0x248495c0  addiu       $a0, $a0, -0x6A40
    ctx->pc = 0x203a80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940096));
label_203a84:
    // 0x203a84: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x203a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_203a88:
    // 0x203a88: 0xae820570  sw          $v0, 0x570($s4)
    ctx->pc = 0x203a88u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1392), GPR_U32(ctx, 2));
label_203a8c:
    // 0x203a8c: 0x8e850570  lw          $a1, 0x570($s4)
    ctx->pc = 0x203a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1392)));
label_203a90:
    // 0x203a90: 0xc05224c  jal         func_148930
label_203a94:
    if (ctx->pc == 0x203A94u) {
        ctx->pc = 0x203A94u;
            // 0x203a94: 0x27a60244  addiu       $a2, $sp, 0x244 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 580));
        ctx->pc = 0x203A98u;
        goto label_203a98;
    }
    ctx->pc = 0x203A90u;
    SET_GPR_U32(ctx, 31, 0x203A98u);
    ctx->pc = 0x203A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203A90u;
            // 0x203a94: 0x27a60244  addiu       $a2, $sp, 0x244 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 580));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203A98u; }
        if (ctx->pc != 0x203A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203A98u; }
        if (ctx->pc != 0x203A98u) { return; }
    }
    ctx->pc = 0x203A98u;
label_203a98:
    // 0x203a98: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x203a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203a9c:
    // 0x203a9c: 0x100001e3  b           . + 4 + (0x1E3 << 2)
label_203aa0:
    if (ctx->pc == 0x203AA0u) {
        ctx->pc = 0x203AA0u;
            // 0x203aa0: 0xa28205fc  sb          $v0, 0x5FC($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1532), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x203AA4u;
        goto label_203aa4;
    }
    ctx->pc = 0x203A9Cu;
    {
        const bool branch_taken_0x203a9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203A9Cu;
            // 0x203aa0: 0xa28205fc  sb          $v0, 0x5FC($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1532), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203a9c) {
            ctx->pc = 0x20422Cu;
            goto label_20422c;
        }
    }
    ctx->pc = 0x203AA4u;
label_203aa4:
    // 0x203aa4: 0x8683060a  lh          $v1, 0x60A($s4)
    ctx->pc = 0x203aa4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1546)));
label_203aa8:
    // 0x203aa8: 0x1c6001e0  bgtz        $v1, . + 4 + (0x1E0 << 2)
label_203aac:
    if (ctx->pc == 0x203AACu) {
        ctx->pc = 0x203AB0u;
        goto label_203ab0;
    }
    ctx->pc = 0x203AA8u;
    {
        const bool branch_taken_0x203aa8 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x203aa8) {
            ctx->pc = 0x20422Cu;
            goto label_20422c;
        }
    }
    ctx->pc = 0x203AB0u;
label_203ab0:
    // 0x203ab0: 0x144001de  bnez        $v0, . + 4 + (0x1DE << 2)
label_203ab4:
    if (ctx->pc == 0x203AB4u) {
        ctx->pc = 0x203AB4u;
            // 0x203ab4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x203AB8u;
        goto label_203ab8;
    }
    ctx->pc = 0x203AB0u;
    {
        const bool branch_taken_0x203ab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203AB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203AB0u;
            // 0x203ab4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ab0) {
            ctx->pc = 0x20422Cu;
            goto label_20422c;
        }
    }
    ctx->pc = 0x203AB8u;
label_203ab8:
    // 0x203ab8: 0xc05231c  jal         func_148C70
label_203abc:
    if (ctx->pc == 0x203ABCu) {
        ctx->pc = 0x203AC0u;
        goto label_203ac0;
    }
    ctx->pc = 0x203AB8u;
    SET_GPR_U32(ctx, 31, 0x203AC0u);
    ctx->pc = 0x148C70u;
    if (runtime->hasFunction(0x148C70u)) {
        auto targetFn = runtime->lookupFunction(0x148C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203AC0u; }
        if (ctx->pc != 0x203AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetReadBGFile__Fi_0x148c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203AC0u; }
        if (ctx->pc != 0x203AC0u) { return; }
    }
    ctx->pc = 0x203AC0u;
label_203ac0:
    // 0x203ac0: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x203ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_203ac4:
    // 0x203ac4: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x203ac4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_203ac8:
    // 0x203ac8: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x203ac8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_203acc:
    // 0x203acc: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x203accu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_203ad0:
    // 0x203ad0: 0x320f809  jalr        $t9
label_203ad4:
    if (ctx->pc == 0x203AD4u) {
        ctx->pc = 0x203AD4u;
            // 0x203ad4: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x203AD8u;
        goto label_203ad8;
    }
    ctx->pc = 0x203AD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203AD8u);
        ctx->pc = 0x203AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203AD0u;
            // 0x203ad4: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203AD8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203AD8u; }
            if (ctx->pc != 0x203AD8u) { return; }
        }
        }
    }
    ctx->pc = 0x203AD8u;
label_203ad8:
    // 0x203ad8: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x203ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_203adc:
    // 0x203adc: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x203adcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_203ae0:
    // 0x203ae0: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x203ae0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_203ae4:
    // 0x203ae4: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x203ae4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_203ae8:
    // 0x203ae8: 0x320f809  jalr        $t9
label_203aec:
    if (ctx->pc == 0x203AECu) {
        ctx->pc = 0x203AECu;
            // 0x203aec: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x203AF0u;
        goto label_203af0;
    }
    ctx->pc = 0x203AE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203AF0u);
        ctx->pc = 0x203AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203AE8u;
            // 0x203aec: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203AF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203AF0u; }
            if (ctx->pc != 0x203AF0u) { return; }
        }
        }
    }
    ctx->pc = 0x203AF0u;
label_203af0:
    // 0x203af0: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x203af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_203af4:
    // 0x203af4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x203af4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_203af8:
    // 0x203af8: 0x24a595d8  addiu       $a1, $a1, -0x6A28
    ctx->pc = 0x203af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940120));
label_203afc:
    // 0x203afc: 0xc04a3dc  jal         func_128F70
label_203b00:
    if (ctx->pc == 0x203B00u) {
        ctx->pc = 0x203B00u;
            // 0x203b00: 0x244401d8  addiu       $a0, $v0, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 472));
        ctx->pc = 0x203B04u;
        goto label_203b04;
    }
    ctx->pc = 0x203AFCu;
    SET_GPR_U32(ctx, 31, 0x203B04u);
    ctx->pc = 0x203B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203AFCu;
            // 0x203b00: 0x244401d8  addiu       $a0, $v0, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203B04u; }
        if (ctx->pc != 0x203B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203B04u; }
        if (ctx->pc != 0x203B04u) { return; }
    }
    ctx->pc = 0x203B04u;
label_203b04:
    // 0x203b04: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x203b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_203b08:
    // 0x203b08: 0x2687053c  addiu       $a3, $s4, 0x53C
    ctx->pc = 0x203b08u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 1340));
label_203b0c:
    // 0x203b0c: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x203b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_203b10:
    // 0x203b10: 0x8e85056c  lw          $a1, 0x56C($s4)
    ctx->pc = 0x203b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1388)));
label_203b14:
    // 0x203b14: 0x8e8a001c  lw          $t2, 0x1C($s4)
    ctx->pc = 0x203b14u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_203b18:
    // 0x203b18: 0x24c69260  addiu       $a2, $a2, -0x6DA0
    ctx->pc = 0x203b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939232));
label_203b1c:
    // 0x203b1c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x203b1cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_203b20:
    // 0x203b20: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x203b20u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_203b24:
    // 0x203b24: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x203b24u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_203b28:
    // 0x203b28: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x203b28u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_203b2c:
    // 0x203b2c: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x203b2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_203b30:
    // 0x203b30: 0x320f809  jalr        $t9
label_203b34:
    if (ctx->pc == 0x203B34u) {
        ctx->pc = 0x203B34u;
            // 0x203b34: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x203B38u;
        goto label_203b38;
    }
    ctx->pc = 0x203B30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203B38u);
        ctx->pc = 0x203B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203B30u;
            // 0x203b34: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203B38u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203B38u; }
            if (ctx->pc != 0x203B38u) { return; }
        }
        }
    }
    ctx->pc = 0x203B38u;
label_203b38:
    // 0x203b38: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x203b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_203b3c:
    // 0x203b3c: 0xa04001d8  sb          $zero, 0x1D8($v0)
    ctx->pc = 0x203b3cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 472), (uint8_t)GPR_U32(ctx, 0));
label_203b40:
    // 0x203b40: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x203b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_203b44:
    // 0x203b44: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x203b44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_203b48:
    // 0x203b48: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x203b48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_203b4c:
    // 0x203b4c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x203b4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_203b50:
    // 0x203b50: 0x320f809  jalr        $t9
label_203b54:
    if (ctx->pc == 0x203B54u) {
        ctx->pc = 0x203B54u;
            // 0x203b54: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->pc = 0x203B58u;
        goto label_203b58;
    }
    ctx->pc = 0x203B50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203B58u);
        ctx->pc = 0x203B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203B50u;
            // 0x203b54: 0x27a50180  addiu       $a1, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203B58u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203B58u; }
            if (ctx->pc != 0x203B58u) { return; }
        }
        }
    }
    ctx->pc = 0x203B58u;
label_203b58:
    // 0x203b58: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x203b58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_203b5c:
    // 0x203b5c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x203b5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_203b60:
    // 0x203b60: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x203b60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_203b64:
    // 0x203b64: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x203b64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_203b68:
    // 0x203b68: 0x320f809  jalr        $t9
label_203b6c:
    if (ctx->pc == 0x203B6Cu) {
        ctx->pc = 0x203B6Cu;
            // 0x203b6c: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->pc = 0x203B70u;
        goto label_203b70;
    }
    ctx->pc = 0x203B68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203B70u);
        ctx->pc = 0x203B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203B68u;
            // 0x203b6c: 0x27a50190  addiu       $a1, $sp, 0x190 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 400));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203B70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203B70u; }
            if (ctx->pc != 0x203B70u) { return; }
        }
        }
    }
    ctx->pc = 0x203B70u;
label_203b70:
    // 0x203b70: 0x86820580  lh          $v0, 0x580($s4)
    ctx->pc = 0x203b70u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1408)));
label_203b74:
    // 0x203b74: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_203b78:
    if (ctx->pc == 0x203B78u) {
        ctx->pc = 0x203B7Cu;
        goto label_203b7c;
    }
    ctx->pc = 0x203B74u;
    {
        const bool branch_taken_0x203b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203b74) {
            ctx->pc = 0x203BACu;
            goto label_203bac;
        }
    }
    ctx->pc = 0x203B7Cu;
label_203b7c:
    // 0x203b7c: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x203b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_203b80:
    // 0x203b80: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x203b80u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_203b84:
    // 0x203b84: 0x8e85001c  lw          $a1, 0x1C($s4)
    ctx->pc = 0x203b84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_203b88:
    // 0x203b88: 0xc04bbdc  jal         func_12EF70
label_203b8c:
    if (ctx->pc == 0x203B8Cu) {
        ctx->pc = 0x203B8Cu;
            // 0x203b8c: 0x24c695e0  addiu       $a2, $a2, -0x6A20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940128));
        ctx->pc = 0x203B90u;
        goto label_203b90;
    }
    ctx->pc = 0x203B88u;
    SET_GPR_U32(ctx, 31, 0x203B90u);
    ctx->pc = 0x203B8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203B88u;
            // 0x203b8c: 0x24c695e0  addiu       $a2, $a2, -0x6A20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EF70u;
    if (runtime->hasFunction(0x12EF70u)) {
        auto targetFn = runtime->lookupFunction(0x12EF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203B90u; }
        if (ctx->pc != 0x203B90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TexAnimeOn__17mgCTextureManagerFiPc_0x12ef70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203B90u; }
        if (ctx->pc != 0x203B90u) { return; }
    }
    ctx->pc = 0x203B90u;
label_203b90:
    // 0x203b90: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x203b90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_203b94:
    // 0x203b94: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x203b94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_203b98:
    // 0x203b98: 0x8e85001c  lw          $a1, 0x1C($s4)
    ctx->pc = 0x203b98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_203b9c:
    // 0x203b9c: 0xc04bbdc  jal         func_12EF70
label_203ba0:
    if (ctx->pc == 0x203BA0u) {
        ctx->pc = 0x203BA0u;
            // 0x203ba0: 0x24c695e8  addiu       $a2, $a2, -0x6A18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940136));
        ctx->pc = 0x203BA4u;
        goto label_203ba4;
    }
    ctx->pc = 0x203B9Cu;
    SET_GPR_U32(ctx, 31, 0x203BA4u);
    ctx->pc = 0x203BA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203B9Cu;
            // 0x203ba0: 0x24c695e8  addiu       $a2, $a2, -0x6A18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EF70u;
    if (runtime->hasFunction(0x12EF70u)) {
        auto targetFn = runtime->lookupFunction(0x12EF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203BA4u; }
        if (ctx->pc != 0x203BA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TexAnimeOn__17mgCTextureManagerFiPc_0x12ef70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203BA4u; }
        if (ctx->pc != 0x203BA4u) { return; }
    }
    ctx->pc = 0x203BA4u;
label_203ba4:
    // 0x203ba4: 0x1000000c  b           . + 4 + (0xC << 2)
label_203ba8:
    if (ctx->pc == 0x203BA8u) {
        ctx->pc = 0x203BA8u;
            // 0x203ba8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x203BACu;
        goto label_203bac;
    }
    ctx->pc = 0x203BA4u;
    {
        const bool branch_taken_0x203ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203BA4u;
            // 0x203ba8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203ba4) {
            ctx->pc = 0x203BD8u;
            goto label_203bd8;
        }
    }
    ctx->pc = 0x203BACu;
label_203bac:
    // 0x203bac: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x203bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_203bb0:
    // 0x203bb0: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x203bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_203bb4:
    // 0x203bb4: 0x8e85001c  lw          $a1, 0x1C($s4)
    ctx->pc = 0x203bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_203bb8:
    // 0x203bb8: 0xc04bbdc  jal         func_12EF70
label_203bbc:
    if (ctx->pc == 0x203BBCu) {
        ctx->pc = 0x203BBCu;
            // 0x203bbc: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->pc = 0x203BC0u;
        goto label_203bc0;
    }
    ctx->pc = 0x203BB8u;
    SET_GPR_U32(ctx, 31, 0x203BC0u);
    ctx->pc = 0x203BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203BB8u;
            // 0x203bbc: 0x24c695f8  addiu       $a2, $a2, -0x6A08 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EF70u;
    if (runtime->hasFunction(0x12EF70u)) {
        auto targetFn = runtime->lookupFunction(0x12EF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203BC0u; }
        if (ctx->pc != 0x203BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TexAnimeOn__17mgCTextureManagerFiPc_0x12ef70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203BC0u; }
        if (ctx->pc != 0x203BC0u) { return; }
    }
    ctx->pc = 0x203BC0u;
label_203bc0:
    // 0x203bc0: 0x8fa400d0  lw          $a0, 0xD0($sp)
    ctx->pc = 0x203bc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_203bc4:
    // 0x203bc4: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x203bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_203bc8:
    // 0x203bc8: 0x8e85001c  lw          $a1, 0x1C($s4)
    ctx->pc = 0x203bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
label_203bcc:
    // 0x203bcc: 0xc04bbdc  jal         func_12EF70
label_203bd0:
    if (ctx->pc == 0x203BD0u) {
        ctx->pc = 0x203BD0u;
            // 0x203bd0: 0x24c69608  addiu       $a2, $a2, -0x69F8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940168));
        ctx->pc = 0x203BD4u;
        goto label_203bd4;
    }
    ctx->pc = 0x203BCCu;
    SET_GPR_U32(ctx, 31, 0x203BD4u);
    ctx->pc = 0x203BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203BCCu;
            // 0x203bd0: 0x24c69608  addiu       $a2, $a2, -0x69F8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294940168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12EF70u;
    if (runtime->hasFunction(0x12EF70u)) {
        auto targetFn = runtime->lookupFunction(0x12EF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203BD4u; }
        if (ctx->pc != 0x203BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TexAnimeOn__17mgCTextureManagerFiPc_0x12ef70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203BD4u; }
        if (ctx->pc != 0x203BD4u) { return; }
    }
    ctx->pc = 0x203BD4u;
label_203bd4:
    // 0x203bd4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x203bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203bd8:
    // 0x203bd8: 0xc05231c  jal         func_148C70
label_203bdc:
    if (ctx->pc == 0x203BDCu) {
        ctx->pc = 0x203BE0u;
        goto label_203be0;
    }
    ctx->pc = 0x203BD8u;
    SET_GPR_U32(ctx, 31, 0x203BE0u);
    ctx->pc = 0x148C70u;
    if (runtime->hasFunction(0x148C70u)) {
        auto targetFn = runtime->lookupFunction(0x148C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203BE0u; }
        if (ctx->pc != 0x203BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetReadBGFile__Fi_0x148c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203BE0u; }
        if (ctx->pc != 0x203BE0u) { return; }
    }
    ctx->pc = 0x203BE0u;
label_203be0:
    // 0x203be0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_203be4:
    if (ctx->pc == 0x203BE4u) {
        ctx->pc = 0x203BE4u;
            // 0x203be4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x203BE8u;
        goto label_203be8;
    }
    ctx->pc = 0x203BE0u;
    {
        const bool branch_taken_0x203be0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203BE0u;
            // 0x203be4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203be0) {
            ctx->pc = 0x203C0Cu;
            goto label_203c0c;
        }
    }
    ctx->pc = 0x203BE8u;
label_203be8:
    // 0x203be8: 0x8c440110  lw          $a0, 0x110($v0)
    ctx->pc = 0x203be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
label_203bec:
    // 0x203bec: 0x86830580  lh          $v1, 0x580($s4)
    ctx->pc = 0x203becu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1408)));
label_203bf0:
    // 0x203bf0: 0x278281f0  addiu       $v0, $gp, -0x7E10
    ctx->pc = 0x203bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935024));
label_203bf4:
    // 0x203bf4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x203bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_203bf8:
    // 0x203bf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x203bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_203bfc:
    // 0x203bfc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x203bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_203c00:
    // 0x203c00: 0xc052734  jal         func_149CD0
label_203c04:
    if (ctx->pc == 0x203C04u) {
        ctx->pc = 0x203C04u;
            // 0x203c04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x203C08u;
        goto label_203c08;
    }
    ctx->pc = 0x203C00u;
    SET_GPR_U32(ctx, 31, 0x203C08u);
    ctx->pc = 0x203C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203C00u;
            // 0x203c04: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x149CD0u;
    if (runtime->hasFunction(0x149CD0u)) {
        auto targetFn = runtime->lookupFunction(0x149CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203C08u; }
        if (ctx->pc != 0x203C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPackFile__FPUiPcPi_0x149cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203C08u; }
        if (ctx->pc != 0x203C08u) { return; }
    }
    ctx->pc = 0x203C08u;
label_203c08:
    // 0x203c08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x203c08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203c0c:
    // 0x203c0c: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x203c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_203c10:
    // 0x203c10: 0xc04e748  jal         func_139D20
label_203c14:
    if (ctx->pc == 0x203C14u) {
        ctx->pc = 0x203C14u;
            // 0x203c14: 0x24050105  addiu       $a1, $zero, 0x105 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
        ctx->pc = 0x203C18u;
        goto label_203c18;
    }
    ctx->pc = 0x203C10u;
    SET_GPR_U32(ctx, 31, 0x203C18u);
    ctx->pc = 0x203C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203C10u;
            // 0x203c14: 0x24050105  addiu       $a1, $zero, 0x105 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203C18u; }
        if (ctx->pc != 0x203C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203C18u; }
        if (ctx->pc != 0x203C18u) { return; }
    }
    ctx->pc = 0x203C18u;
label_203c18:
    // 0x203c18: 0x24041030  addiu       $a0, $zero, 0x1030
    ctx->pc = 0x203c18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4144));
label_203c1c:
    // 0x203c1c: 0xc04e638  jal         func_1398E0
label_203c20:
    if (ctx->pc == 0x203C20u) {
        ctx->pc = 0x203C20u;
            // 0x203c20: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x203C24u;
        goto label_203c24;
    }
    ctx->pc = 0x203C1Cu;
    SET_GPR_U32(ctx, 31, 0x203C24u);
    ctx->pc = 0x203C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203C1Cu;
            // 0x203c20: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203C24u; }
        if (ctx->pc != 0x203C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203C24u; }
        if (ctx->pc != 0x203C24u) { return; }
    }
    ctx->pc = 0x203C24u;
label_203c24:
    // 0x203c24: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_203c28:
    if (ctx->pc == 0x203C28u) {
        ctx->pc = 0x203C28u;
            // 0x203c28: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x203C2Cu;
        goto label_203c2c;
    }
    ctx->pc = 0x203C24u;
    {
        const bool branch_taken_0x203c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203C24u;
            // 0x203c28: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203c24) {
            ctx->pc = 0x203CCCu;
            goto label_203ccc;
        }
    }
    ctx->pc = 0x203C2Cu;
label_203c2c:
    // 0x203c2c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x203c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_203c30:
    // 0x203c30: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x203c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_203c34:
    // 0x203c34: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x203c34u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_203c38:
    // 0x203c38: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x203c38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_203c3c:
    // 0x203c3c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x203c3cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_203c40:
    // 0x203c40: 0x320f809  jalr        $t9
label_203c44:
    if (ctx->pc == 0x203C44u) {
        ctx->pc = 0x203C44u;
            // 0x203c44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x203C48u;
        goto label_203c48;
    }
    ctx->pc = 0x203C40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203C48u);
        ctx->pc = 0x203C44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203C40u;
            // 0x203c44: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203C48u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203C48u; }
            if (ctx->pc != 0x203C48u) { return; }
        }
        }
    }
    ctx->pc = 0x203C48u;
label_203c48:
    // 0x203c48: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x203c48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_203c4c:
    // 0x203c4c: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x203c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_203c50:
    // 0x203c50: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x203c50u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_203c54:
    // 0x203c54: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x203c54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_203c58:
    // 0x203c58: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x203c58u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_203c5c:
    // 0x203c5c: 0x320f809  jalr        $t9
label_203c60:
    if (ctx->pc == 0x203C60u) {
        ctx->pc = 0x203C60u;
            // 0x203c60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x203C64u;
        goto label_203c64;
    }
    ctx->pc = 0x203C5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203C64u);
        ctx->pc = 0x203C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203C5Cu;
            // 0x203c60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203C64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203C64u; }
            if (ctx->pc != 0x203C64u) { return; }
        }
        }
    }
    ctx->pc = 0x203C64u;
label_203c64:
    // 0x203c64: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x203c64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_203c68:
    // 0x203c68: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x203c68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_203c6c:
    // 0x203c6c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x203c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_203c70:
    // 0x203c70: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x203c70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_203c74:
    // 0x203c74: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x203c74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_203c78:
    // 0x203c78: 0x320f809  jalr        $t9
label_203c7c:
    if (ctx->pc == 0x203C7Cu) {
        ctx->pc = 0x203C7Cu;
            // 0x203c7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x203C80u;
        goto label_203c80;
    }
    ctx->pc = 0x203C78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203C80u);
        ctx->pc = 0x203C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203C78u;
            // 0x203c7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203C80u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203C80u; }
            if (ctx->pc != 0x203C80u) { return; }
        }
        }
    }
    ctx->pc = 0x203C80u;
label_203c80:
    // 0x203c80: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x203c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_203c84:
    // 0x203c84: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x203c84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_203c88:
    // 0x203c88: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x203c88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_203c8c:
    // 0x203c8c: 0xae20035c  sw          $zero, 0x35C($s1)
    ctx->pc = 0x203c8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 860), GPR_U32(ctx, 0));
label_203c90:
    // 0x203c90: 0xae200364  sw          $zero, 0x364($s1)
    ctx->pc = 0x203c90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 868), GPR_U32(ctx, 0));
label_203c94:
    // 0x203c94: 0xae200360  sw          $zero, 0x360($s1)
    ctx->pc = 0x203c94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 864), GPR_U32(ctx, 0));
label_203c98:
    // 0x203c98: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x203c98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_203c9c:
    // 0x203c9c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x203c9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_203ca0:
    // 0x203ca0: 0x320f809  jalr        $t9
label_203ca4:
    if (ctx->pc == 0x203CA4u) {
        ctx->pc = 0x203CA4u;
            // 0x203ca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x203CA8u;
        goto label_203ca8;
    }
    ctx->pc = 0x203CA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203CA8u);
        ctx->pc = 0x203CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203CA0u;
            // 0x203ca4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203CA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203CA8u; }
            if (ctx->pc != 0x203CA8u) { return; }
        }
        }
    }
    ctx->pc = 0x203CA8u;
label_203ca8:
    // 0x203ca8: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x203ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_203cac:
    // 0x203cac: 0x262406bc  addiu       $a0, $s1, 0x6BC
    ctx->pc = 0x203cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1724));
label_203cb0:
    // 0x203cb0: 0x244256f0  addiu       $v0, $v0, 0x56F0
    ctx->pc = 0x203cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22256));
label_203cb4:
    // 0x203cb4: 0xc061b34  jal         func_186CD0
label_203cb8:
    if (ctx->pc == 0x203CB8u) {
        ctx->pc = 0x203CB8u;
            // 0x203cb8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x203CBCu;
        goto label_203cbc;
    }
    ctx->pc = 0x203CB4u;
    SET_GPR_U32(ctx, 31, 0x203CBCu);
    ctx->pc = 0x203CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203CB4u;
            // 0x203cb8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186CD0u;
    if (runtime->hasFunction(0x186CD0u)) {
        auto targetFn = runtime->lookupFunction(0x186CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203CBCu; }
        if (ctx->pc != 0x203CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10CRunScriptFv_0x186cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203CBCu; }
        if (ctx->pc != 0x203CBCu) { return; }
    }
    ctx->pc = 0x203CBCu;
label_203cbc:
    // 0x203cbc: 0x26240910  addiu       $a0, $s1, 0x910
    ctx->pc = 0x203cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 2320));
label_203cc0:
    // 0x203cc0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x203cc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203cc4:
    // 0x203cc4: 0xc049c86  jal         func_127218
label_203cc8:
    if (ctx->pc == 0x203CC8u) {
        ctx->pc = 0x203CC8u;
            // 0x203cc8: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->pc = 0x203CCCu;
        goto label_203ccc;
    }
    ctx->pc = 0x203CC4u;
    SET_GPR_U32(ctx, 31, 0x203CCCu);
    ctx->pc = 0x203CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203CC4u;
            // 0x203cc8: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203CCCu; }
        if (ctx->pc != 0x203CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203CCCu; }
        if (ctx->pc != 0x203CCCu) { return; }
    }
    ctx->pc = 0x203CCCu;
label_203ccc:
    // 0x203ccc: 0xae91063c  sw          $s1, 0x63C($s4)
    ctx->pc = 0x203cccu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1596), GPR_U32(ctx, 17));
label_203cd0:
    // 0x203cd0: 0x8e84063c  lw          $a0, 0x63C($s4)
    ctx->pc = 0x203cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1596)));
label_203cd4:
    // 0x203cd4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x203cd4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_203cd8:
    // 0x203cd8: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x203cd8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_203cdc:
    // 0x203cdc: 0x320f809  jalr        $t9
label_203ce0:
    if (ctx->pc == 0x203CE0u) {
        ctx->pc = 0x203CE0u;
            // 0x203ce0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x203CE4u;
        goto label_203ce4;
    }
    ctx->pc = 0x203CDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203CE4u);
        ctx->pc = 0x203CE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203CDCu;
            // 0x203ce0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203CE4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203CE4u; }
            if (ctx->pc != 0x203CE4u) { return; }
        }
        }
    }
    ctx->pc = 0x203CE4u;
label_203ce4:
    // 0x203ce4: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x203ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_203ce8:
    // 0x203ce8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_203cec:
    // 0x203cec: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x203cecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203cf0:
    // 0x203cf0: 0xc04cb78  jal         func_132DE0
label_203cf4:
    if (ctx->pc == 0x203CF4u) {
        ctx->pc = 0x203CF4u;
            // 0x203cf4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x203CF8u;
        goto label_203cf8;
    }
    ctx->pc = 0x203CF0u;
    SET_GPR_U32(ctx, 31, 0x203CF8u);
    ctx->pc = 0x203CF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203CF0u;
            // 0x203cf4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132DE0u;
    if (runtime->hasFunction(0x132DE0u)) {
        auto targetFn = runtime->lookupFunction(0x132DE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203CF8u; }
        if (ctx->pc != 0x203CF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgLoadMDSFile__FP10MDS_HEADERP9mgCMemoryP18mgCreateVisualTypeP17mgCTextureManager_0x132de0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203CF8u; }
        if (ctx->pc != 0x203CF8u) { return; }
    }
    ctx->pc = 0x203CF8u;
label_203cf8:
    // 0x203cf8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x203cf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203cfc:
    // 0x203cfc: 0x8e82063c  lw          $v0, 0x63C($s4)
    ctx->pc = 0x203cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1596)));
label_203d00:
    // 0x203d00: 0x1200002a  beqz        $s0, . + 4 + (0x2A << 2)
label_203d04:
    if (ctx->pc == 0x203D04u) {
        ctx->pc = 0x203D04u;
            // 0x203d04: 0xac500070  sw          $s0, 0x70($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 16));
        ctx->pc = 0x203D08u;
        goto label_203d08;
    }
    ctx->pc = 0x203D00u;
    {
        const bool branch_taken_0x203d00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x203D04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203D00u;
            // 0x203d04: 0xac500070  sw          $s0, 0x70($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203d00) {
            ctx->pc = 0x203DACu;
            goto label_203dac;
        }
    }
    ctx->pc = 0x203D08u;
label_203d08:
    // 0x203d08: 0x8e1100f4  lw          $s1, 0xF4($s0)
    ctx->pc = 0x203d08u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 244)));
label_203d0c:
    // 0x203d0c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x203d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203d10:
    // 0x203d10: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x203d10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_203d14:
    // 0x203d14: 0x3c034190  lui         $v1, 0x4190
    ctx->pc = 0x203d14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16784 << 16));
label_203d18:
    // 0x203d18: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x203d18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_203d1c:
    // 0x203d1c: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x203d1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_203d20:
    // 0x203d20: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x203d20u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_203d24:
    // 0x203d24: 0x3c02c1a0  lui         $v0, 0xC1A0
    ctx->pc = 0x203d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49568 << 16));
label_203d28:
    // 0x203d28: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x203d28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_203d2c:
    // 0x203d2c: 0xae240060  sw          $a0, 0x60($s1)
    ctx->pc = 0x203d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 96), GPR_U32(ctx, 4));
label_203d30:
    // 0x203d30: 0xc420ef00  lwc1        $f0, -0x1100($at)
    ctx->pc = 0x203d30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294962944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_203d34:
    // 0x203d34: 0xe6200070  swc1        $f0, 0x70($s1)
    ctx->pc = 0x203d34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 112), bits); }
label_203d38:
    // 0x203d38: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x203d38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_203d3c:
    // 0x203d3c: 0xc420ef04  lwc1        $f0, -0x10FC($at)
    ctx->pc = 0x203d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294962948)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_203d40:
    // 0x203d40: 0xe6200074  swc1        $f0, 0x74($s1)
    ctx->pc = 0x203d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 116), bits); }
label_203d44:
    // 0x203d44: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x203d44u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_203d48:
    // 0x203d48: 0xc420ef08  lwc1        $f0, -0x10F8($at)
    ctx->pc = 0x203d48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294962952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_203d4c:
    // 0x203d4c: 0xe6200078  swc1        $f0, 0x78($s1)
    ctx->pc = 0x203d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 120), bits); }
label_203d50:
    // 0x203d50: 0x3c010035  lui         $at, 0x35
    ctx->pc = 0x203d50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)53 << 16));
label_203d54:
    // 0x203d54: 0xc420ef0c  lwc1        $f0, -0x10F4($at)
    ctx->pc = 0x203d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 1), 4294962956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_203d58:
    // 0x203d58: 0xe620007c  swc1        $f0, 0x7C($s1)
    ctx->pc = 0x203d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 124), bits); }
label_203d5c:
    // 0x203d5c: 0x8e84063c  lw          $a0, 0x63C($s4)
    ctx->pc = 0x203d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1596)));
label_203d60:
    // 0x203d60: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x203d60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_203d64:
    // 0x203d64: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x203d64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_203d68:
    // 0x203d68: 0x320f809  jalr        $t9
label_203d6c:
    if (ctx->pc == 0x203D6Cu) {
        ctx->pc = 0x203D70u;
        goto label_203d70;
    }
    ctx->pc = 0x203D68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203D70u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x203D70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203D70u; }
            if (ctx->pc != 0x203D70u) { return; }
        }
        }
    }
    ctx->pc = 0x203D70u;
label_203d70:
    // 0x203d70: 0x8e84063c  lw          $a0, 0x63C($s4)
    ctx->pc = 0x203d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1596)));
label_203d74:
    // 0x203d74: 0x3c023e20  lui         $v0, 0x3E20
    ctx->pc = 0x203d74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15904 << 16));
label_203d78:
    // 0x203d78: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x203d78u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_203d7c:
    // 0x203d7c: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x203d7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
label_203d80:
    // 0x203d80: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x203d80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_203d84:
    // 0x203d84: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x203d84u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_203d88:
    // 0x203d88: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x203d88u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_203d8c:
    // 0x203d8c: 0x320f809  jalr        $t9
label_203d90:
    if (ctx->pc == 0x203D90u) {
        ctx->pc = 0x203D90u;
            // 0x203d90: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x203D94u;
        goto label_203d94;
    }
    ctx->pc = 0x203D8Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203D94u);
        ctx->pc = 0x203D90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203D8Cu;
            // 0x203d90: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203D94u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203D94u; }
            if (ctx->pc != 0x203D94u) { return; }
        }
        }
    }
    ctx->pc = 0x203D94u;
label_203d94:
    // 0x203d94: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x203d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_203d98:
    // 0x203d98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203d98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_203d9c:
    // 0x203d9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x203d9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_203da0:
    // 0x203da0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x203da0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203da4:
    // 0x203da4: 0xc04de54  jal         func_137950
label_203da8:
    if (ctx->pc == 0x203DA8u) {
        ctx->pc = 0x203DA8u;
            // 0x203da8: 0x34478000  ori         $a3, $v0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
        ctx->pc = 0x203DACu;
        goto label_203dac;
    }
    ctx->pc = 0x203DA4u;
    SET_GPR_U32(ctx, 31, 0x203DACu);
    ctx->pc = 0x203DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203DA4u;
            // 0x203da8: 0x34478000  ori         $a3, $v0, 0x8000 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
        ctx->in_delay_slot = false;
    ctx->pc = 0x137950u;
    if (runtime->hasFunction(0x137950u)) {
        auto targetFn = runtime->lookupFunction(0x137950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203DACu; }
        if (ctx->pc != 0x203DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAttrParam__8mgCFrameFR12mgCFrameAttrii_0x137950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203DACu; }
        if (ctx->pc != 0x203DACu) { return; }
    }
    ctx->pc = 0x203DACu;
label_203dac:
    // 0x203dac: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x203dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
label_203db0:
    // 0x203db0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x203db0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_203db4:
    // 0x203db4: 0xc08ab90  jal         func_22AE40
label_203db8:
    if (ctx->pc == 0x203DB8u) {
        ctx->pc = 0x203DB8u;
            // 0x203db8: 0x24a59618  addiu       $a1, $a1, -0x69E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940184));
        ctx->pc = 0x203DBCu;
        goto label_203dbc;
    }
    ctx->pc = 0x203DB4u;
    SET_GPR_U32(ctx, 31, 0x203DBCu);
    ctx->pc = 0x203DB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203DB4u;
            // 0x203db8: 0x24a59618  addiu       $a1, $a1, -0x69E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22AE40u;
    if (runtime->hasFunction(0x22AE40u)) {
        auto targetFn = runtime->lookupFunction(0x22AE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203DBCu; }
        if (ctx->pc != 0x203DBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetFormInfo__14CPosDataManageFPc_0x22ae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203DBCu; }
        if (ctx->pc != 0x203DBCu) { return; }
    }
    ctx->pc = 0x203DBCu;
label_203dbc:
    // 0x203dbc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x203dbcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203dc0:
    // 0x203dc0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_203dc4:
    if (ctx->pc == 0x203DC4u) {
        ctx->pc = 0x203DC8u;
        goto label_203dc8;
    }
    ctx->pc = 0x203DC0u;
    {
        const bool branch_taken_0x203dc0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x203dc0) {
            ctx->pc = 0x203DE8u;
            goto label_203de8;
        }
    }
    ctx->pc = 0x203DC8u;
label_203dc8:
    // 0x203dc8: 0x8e85063c  lw          $a1, 0x63C($s4)
    ctx->pc = 0x203dc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1596)));
label_203dcc:
    // 0x203dcc: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x203dccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_203dd0:
    // 0x203dd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x203dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_203dd4:
    // 0x203dd4: 0xc0896c8  jal         func_225B20
label_203dd8:
    if (ctx->pc == 0x203DD8u) {
        ctx->pc = 0x203DD8u;
            // 0x203dd8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x203DDCu;
        goto label_203ddc;
    }
    ctx->pc = 0x203DD4u;
    SET_GPR_U32(ctx, 31, 0x203DDCu);
    ctx->pc = 0x203DD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203DD4u;
            // 0x203dd8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B20u;
    if (runtime->hasFunction(0x225B20u)) {
        auto targetFn = runtime->lookupFunction(0x225B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203DDCu; }
        if (ctx->pc != 0x203DDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetActionCharaPtr__16CMenuPosDataFormFP12CActionCharaii_0x225b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203DDCu; }
        if (ctx->pc != 0x203DDCu) { return; }
    }
    ctx->pc = 0x203DDCu;
label_203ddc:
    // 0x203ddc: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x203ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
label_203de0:
    // 0x203de0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x203de0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_203de4:
    // 0x203de4: 0xae020040  sw          $v0, 0x40($s0)
    ctx->pc = 0x203de4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 64), GPR_U32(ctx, 2));
label_203de8:
    // 0x203de8: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x203de8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_203dec:
    // 0x203dec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x203decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_203df0:
    // 0x203df0: 0xc04e780  jal         func_139E00
label_203df4:
    if (ctx->pc == 0x203DF4u) {
        ctx->pc = 0x203DF4u;
            // 0x203df4: 0xa28205fc  sb          $v0, 0x5FC($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1532), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x203DF8u;
        goto label_203df8;
    }
    ctx->pc = 0x203DF0u;
    SET_GPR_U32(ctx, 31, 0x203DF8u);
    ctx->pc = 0x203DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203DF0u;
            // 0x203df4: 0xa28205fc  sb          $v0, 0x5FC($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1532), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203DF8u; }
        if (ctx->pc != 0x203DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203DF8u; }
        if (ctx->pc != 0x203DF8u) { return; }
    }
    ctx->pc = 0x203DF8u;
label_203df8:
    // 0x203df8: 0x24020078  addiu       $v0, $zero, 0x78
    ctx->pc = 0x203df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
label_203dfc:
    // 0x203dfc: 0xae820600  sw          $v0, 0x600($s4)
    ctx->pc = 0x203dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1536), GPR_U32(ctx, 2));
label_203e00:
    // 0x203e00: 0x86820580  lh          $v0, 0x580($s4)
    ctx->pc = 0x203e00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1408)));
label_203e04:
    // 0x203e04: 0x10400109  beqz        $v0, . + 4 + (0x109 << 2)
label_203e08:
    if (ctx->pc == 0x203E08u) {
        ctx->pc = 0x203E0Cu;
        goto label_203e0c;
    }
    ctx->pc = 0x203E04u;
    {
        const bool branch_taken_0x203e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203e04) {
            ctx->pc = 0x20422Cu;
            goto label_20422c;
        }
    }
    ctx->pc = 0x203E0Cu;
label_203e0c:
    // 0x203e0c: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x203e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_203e10:
    // 0x203e10: 0x240200f0  addiu       $v0, $zero, 0xF0
    ctx->pc = 0x203e10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
label_203e14:
    // 0x203e14: 0x24050105  addiu       $a1, $zero, 0x105
    ctx->pc = 0x203e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
label_203e18:
    // 0x203e18: 0xc04e748  jal         func_139D20
label_203e1c:
    if (ctx->pc == 0x203E1Cu) {
        ctx->pc = 0x203E1Cu;
            // 0x203e1c: 0xae820600  sw          $v0, 0x600($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1536), GPR_U32(ctx, 2));
        ctx->pc = 0x203E20u;
        goto label_203e20;
    }
    ctx->pc = 0x203E18u;
    SET_GPR_U32(ctx, 31, 0x203E20u);
    ctx->pc = 0x203E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203E18u;
            // 0x203e1c: 0xae820600  sw          $v0, 0x600($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1536), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203E20u; }
        if (ctx->pc != 0x203E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203E20u; }
        if (ctx->pc != 0x203E20u) { return; }
    }
    ctx->pc = 0x203E20u;
label_203e20:
    // 0x203e20: 0x24041030  addiu       $a0, $zero, 0x1030
    ctx->pc = 0x203e20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4144));
label_203e24:
    // 0x203e24: 0xc04e638  jal         func_1398E0
label_203e28:
    if (ctx->pc == 0x203E28u) {
        ctx->pc = 0x203E28u;
            // 0x203e28: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x203E2Cu;
        goto label_203e2c;
    }
    ctx->pc = 0x203E24u;
    SET_GPR_U32(ctx, 31, 0x203E2Cu);
    ctx->pc = 0x203E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203E24u;
            // 0x203e28: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203E2Cu; }
        if (ctx->pc != 0x203E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203E2Cu; }
        if (ctx->pc != 0x203E2Cu) { return; }
    }
    ctx->pc = 0x203E2Cu;
label_203e2c:
    // 0x203e2c: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_203e30:
    if (ctx->pc == 0x203E30u) {
        ctx->pc = 0x203E30u;
            // 0x203e30: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x203E34u;
        goto label_203e34;
    }
    ctx->pc = 0x203E2Cu;
    {
        const bool branch_taken_0x203e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x203E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203E2Cu;
            // 0x203e30: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203e2c) {
            ctx->pc = 0x203ED4u;
            goto label_203ed4;
        }
    }
    ctx->pc = 0x203E34u;
label_203e34:
    // 0x203e34: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x203e34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_203e38:
    // 0x203e38: 0x24424fe0  addiu       $v0, $v0, 0x4FE0
    ctx->pc = 0x203e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20448));
label_203e3c:
    // 0x203e3c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x203e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_203e40:
    // 0x203e40: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x203e40u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_203e44:
    // 0x203e44: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x203e44u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_203e48:
    // 0x203e48: 0x320f809  jalr        $t9
label_203e4c:
    if (ctx->pc == 0x203E4Cu) {
        ctx->pc = 0x203E4Cu;
            // 0x203e4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x203E50u;
        goto label_203e50;
    }
    ctx->pc = 0x203E48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203E50u);
        ctx->pc = 0x203E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203E48u;
            // 0x203e4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203E50u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203E50u; }
            if (ctx->pc != 0x203E50u) { return; }
        }
        }
    }
    ctx->pc = 0x203E50u;
label_203e50:
    // 0x203e50: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x203e50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_203e54:
    // 0x203e54: 0x24425670  addiu       $v0, $v0, 0x5670
    ctx->pc = 0x203e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22128));
label_203e58:
    // 0x203e58: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x203e58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_203e5c:
    // 0x203e5c: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x203e5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_203e60:
    // 0x203e60: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x203e60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_203e64:
    // 0x203e64: 0x320f809  jalr        $t9
label_203e68:
    if (ctx->pc == 0x203E68u) {
        ctx->pc = 0x203E68u;
            // 0x203e68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x203E6Cu;
        goto label_203e6c;
    }
    ctx->pc = 0x203E64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203E6Cu);
        ctx->pc = 0x203E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203E64u;
            // 0x203e68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203E6Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203E6Cu; }
            if (ctx->pc != 0x203E6Cu) { return; }
        }
        }
    }
    ctx->pc = 0x203E6Cu;
label_203e6c:
    // 0x203e6c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x203e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_203e70:
    // 0x203e70: 0x244255f0  addiu       $v0, $v0, 0x55F0
    ctx->pc = 0x203e70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22000));
label_203e74:
    // 0x203e74: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x203e74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_203e78:
    // 0x203e78: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x203e78u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_203e7c:
    // 0x203e7c: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x203e7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_203e80:
    // 0x203e80: 0x320f809  jalr        $t9
label_203e84:
    if (ctx->pc == 0x203E84u) {
        ctx->pc = 0x203E84u;
            // 0x203e84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x203E88u;
        goto label_203e88;
    }
    ctx->pc = 0x203E80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203E88u);
        ctx->pc = 0x203E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203E80u;
            // 0x203e84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203E88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203E88u; }
            if (ctx->pc != 0x203E88u) { return; }
        }
        }
    }
    ctx->pc = 0x203E88u;
label_203e88:
    // 0x203e88: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x203e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_203e8c:
    // 0x203e8c: 0x24425810  addiu       $v0, $v0, 0x5810
    ctx->pc = 0x203e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22544));
label_203e90:
    // 0x203e90: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x203e90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_203e94:
    // 0x203e94: 0xae00035c  sw          $zero, 0x35C($s0)
    ctx->pc = 0x203e94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 860), GPR_U32(ctx, 0));
label_203e98:
    // 0x203e98: 0xae000364  sw          $zero, 0x364($s0)
    ctx->pc = 0x203e98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 0));
label_203e9c:
    // 0x203e9c: 0xae000360  sw          $zero, 0x360($s0)
    ctx->pc = 0x203e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 0));
label_203ea0:
    // 0x203ea0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x203ea0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_203ea4:
    // 0x203ea4: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x203ea4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_203ea8:
    // 0x203ea8: 0x320f809  jalr        $t9
label_203eac:
    if (ctx->pc == 0x203EACu) {
        ctx->pc = 0x203EACu;
            // 0x203eac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x203EB0u;
        goto label_203eb0;
    }
    ctx->pc = 0x203EA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203EB0u);
        ctx->pc = 0x203EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203EA8u;
            // 0x203eac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203EB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203EB0u; }
            if (ctx->pc != 0x203EB0u) { return; }
        }
        }
    }
    ctx->pc = 0x203EB0u;
label_203eb0:
    // 0x203eb0: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x203eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_203eb4:
    // 0x203eb4: 0x260406bc  addiu       $a0, $s0, 0x6BC
    ctx->pc = 0x203eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1724));
label_203eb8:
    // 0x203eb8: 0x244256f0  addiu       $v0, $v0, 0x56F0
    ctx->pc = 0x203eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22256));
label_203ebc:
    // 0x203ebc: 0xc061b34  jal         func_186CD0
label_203ec0:
    if (ctx->pc == 0x203EC0u) {
        ctx->pc = 0x203EC0u;
            // 0x203ec0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x203EC4u;
        goto label_203ec4;
    }
    ctx->pc = 0x203EBCu;
    SET_GPR_U32(ctx, 31, 0x203EC4u);
    ctx->pc = 0x203EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203EBCu;
            // 0x203ec0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x186CD0u;
    if (runtime->hasFunction(0x186CD0u)) {
        auto targetFn = runtime->lookupFunction(0x186CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203EC4u; }
        if (ctx->pc != 0x203EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__10CRunScriptFv_0x186cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203EC4u; }
        if (ctx->pc != 0x203EC4u) { return; }
    }
    ctx->pc = 0x203EC4u;
label_203ec4:
    // 0x203ec4: 0x26040910  addiu       $a0, $s0, 0x910
    ctx->pc = 0x203ec4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2320));
label_203ec8:
    // 0x203ec8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x203ec8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_203ecc:
    // 0x203ecc: 0xc049c86  jal         func_127218
label_203ed0:
    if (ctx->pc == 0x203ED0u) {
        ctx->pc = 0x203ED0u;
            // 0x203ed0: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->pc = 0x203ED4u;
        goto label_203ed4;
    }
    ctx->pc = 0x203ECCu;
    SET_GPR_U32(ctx, 31, 0x203ED4u);
    ctx->pc = 0x203ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203ECCu;
            // 0x203ed0: 0x24060110  addiu       $a2, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203ED4u; }
        if (ctx->pc != 0x203ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203ED4u; }
        if (ctx->pc != 0x203ED4u) { return; }
    }
    ctx->pc = 0x203ED4u;
label_203ed4:
    // 0x203ed4: 0xae900574  sw          $s0, 0x574($s4)
    ctx->pc = 0x203ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1396), GPR_U32(ctx, 16));
label_203ed8:
    // 0x203ed8: 0x8e840574  lw          $a0, 0x574($s4)
    ctx->pc = 0x203ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1396)));
label_203edc:
    // 0x203edc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x203edcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_203ee0:
    // 0x203ee0: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x203ee0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_203ee4:
    // 0x203ee4: 0x320f809  jalr        $t9
label_203ee8:
    if (ctx->pc == 0x203EE8u) {
        ctx->pc = 0x203EE8u;
            // 0x203ee8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x203EECu;
        goto label_203eec;
    }
    ctx->pc = 0x203EE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203EECu);
        ctx->pc = 0x203EE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203EE4u;
            // 0x203ee8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203EECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203EECu; }
            if (ctx->pc != 0x203EECu) { return; }
        }
        }
    }
    ctx->pc = 0x203EECu;
label_203eec:
    // 0x203eec: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x203eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_203ef0:
    // 0x203ef0: 0x26840d48  addiu       $a0, $s4, 0xD48
    ctx->pc = 0x203ef0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 3400));
label_203ef4:
    // 0x203ef4: 0x240635c0  addiu       $a2, $zero, 0x35C0
    ctx->pc = 0x203ef4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 13760));
label_203ef8:
    // 0x203ef8: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x203ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_203efc:
    // 0x203efc: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x203efcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_203f00:
    // 0x203f00: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x203f00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_203f04:
    // 0x203f04: 0xc04e79c  jal         func_139E70
label_203f08:
    if (ctx->pc == 0x203F08u) {
        ctx->pc = 0x203F08u;
            // 0x203f08: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x203F0Cu;
        goto label_203f0c;
    }
    ctx->pc = 0x203F04u;
    SET_GPR_U32(ctx, 31, 0x203F0Cu);
    ctx->pc = 0x203F08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203F04u;
            // 0x203f08: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203F0Cu; }
        if (ctx->pc != 0x203F0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203F0Cu; }
        if (ctx->pc != 0x203F0Cu) { return; }
    }
    ctx->pc = 0x203F0Cu;
label_203f0c:
    // 0x203f0c: 0xae800d6c  sw          $zero, 0xD6C($s4)
    ctx->pc = 0x203f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 3436), GPR_U32(ctx, 0));
label_203f10:
    // 0x203f10: 0x240535c0  addiu       $a1, $zero, 0x35C0
    ctx->pc = 0x203f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13760));
label_203f14:
    // 0x203f14: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x203f14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_203f18:
    // 0x203f18: 0xc04e748  jal         func_139D20
label_203f1c:
    if (ctx->pc == 0x203F1Cu) {
        ctx->pc = 0x203F1Cu;
            // 0x203f1c: 0xae800d64  sw          $zero, 0xD64($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3428), GPR_U32(ctx, 0));
        ctx->pc = 0x203F20u;
        goto label_203f20;
    }
    ctx->pc = 0x203F18u;
    SET_GPR_U32(ctx, 31, 0x203F20u);
    ctx->pc = 0x203F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203F18u;
            // 0x203f1c: 0xae800d64  sw          $zero, 0xD64($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 3428), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203F20u; }
        if (ctx->pc != 0x203F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203F20u; }
        if (ctx->pc != 0x203F20u) { return; }
    }
    ctx->pc = 0x203F20u;
label_203f20:
    // 0x203f20: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x203f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_203f24:
    // 0x203f24: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x203f24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_203f28:
    // 0x203f28: 0x24849630  addiu       $a0, $a0, -0x69D0
    ctx->pc = 0x203f28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940208));
label_203f2c:
    // 0x203f2c: 0x8c430028  lw          $v1, 0x28($v0)
    ctx->pc = 0x203f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_203f30:
    // 0x203f30: 0x8c420024  lw          $v0, 0x24($v0)
    ctx->pc = 0x203f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_203f34:
    // 0x203f34: 0xc04a0d2  jal         func_128348
label_203f38:
    if (ctx->pc == 0x203F38u) {
        ctx->pc = 0x203F38u;
            // 0x203f38: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->pc = 0x203F3Cu;
        goto label_203f3c;
    }
    ctx->pc = 0x203F34u;
    SET_GPR_U32(ctx, 31, 0x203F3Cu);
    ctx->pc = 0x203F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203F34u;
            // 0x203f38: 0x622823  subu        $a1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203F3Cu; }
        if (ctx->pc != 0x203F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203F3Cu; }
        if (ctx->pc != 0x203F3Cu) { return; }
    }
    ctx->pc = 0x203F3Cu;
label_203f3c:
    // 0x203f3c: 0xc04e780  jal         func_139E00
label_203f40:
    if (ctx->pc == 0x203F40u) {
        ctx->pc = 0x203F40u;
            // 0x203f40: 0x8fa400c0  lw          $a0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->pc = 0x203F44u;
        goto label_203f44;
    }
    ctx->pc = 0x203F3Cu;
    SET_GPR_U32(ctx, 31, 0x203F44u);
    ctx->pc = 0x203F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203F3Cu;
            // 0x203f40: 0x8fa400c0  lw          $a0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203F44u; }
        if (ctx->pc != 0x203F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203F44u; }
        if (ctx->pc != 0x203F44u) { return; }
    }
    ctx->pc = 0x203F44u;
label_203f44:
    // 0x203f44: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x203f44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_203f48:
    // 0x203f48: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x203f48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_203f4c:
    // 0x203f4c: 0x86840582  lh          $a0, 0x582($s4)
    ctx->pc = 0x203f4cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1410)));
label_203f50:
    // 0x203f50: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x203f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_203f54:
    // 0x203f54: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x203f54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_203f58:
    // 0x203f58: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x203f58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_203f5c:
    // 0x203f5c: 0xc065750  jal         func_195D40
label_203f60:
    if (ctx->pc == 0x203F60u) {
        ctx->pc = 0x203F60u;
            // 0x203f60: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x203F64u;
        goto label_203f64;
    }
    ctx->pc = 0x203F5Cu;
    SET_GPR_U32(ctx, 31, 0x203F64u);
    ctx->pc = 0x203F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203F5Cu;
            // 0x203f60: 0x438021  addu        $s0, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195D40u;
    if (runtime->hasFunction(0x195D40u)) {
        auto targetFn = runtime->lookupFunction(0x195D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203F64u; }
        if (ctx->pc != 0x203F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemFilePath__Fii_0x195d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203F64u; }
        if (ctx->pc != 0x203F64u) { return; }
    }
    ctx->pc = 0x203F64u;
label_203f64:
    // 0x203f64: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x203f64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203f68:
    // 0x203f68: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_203f6c:
    if (ctx->pc == 0x203F6Cu) {
        ctx->pc = 0x203F6Cu;
            // 0x203f6c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x203F70u;
        goto label_203f70;
    }
    ctx->pc = 0x203F68u;
    {
        const bool branch_taken_0x203f68 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x203F6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203F68u;
            // 0x203f6c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203f68) {
            ctx->pc = 0x203F98u;
            goto label_203f98;
        }
    }
    ctx->pc = 0x203F70u;
label_203f70:
    // 0x203f70: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x203f70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_203f74:
    // 0x203f74: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_203f78:
    if (ctx->pc == 0x203F78u) {
        ctx->pc = 0x203F7Cu;
        goto label_203f7c;
    }
    ctx->pc = 0x203F74u;
    {
        const bool branch_taken_0x203f74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203f74) {
            ctx->pc = 0x203F94u;
            goto label_203f94;
        }
    }
    ctx->pc = 0x203F7Cu;
label_203f7c:
    // 0x203f7c: 0xc052330  jal         func_148CC0
label_203f80:
    if (ctx->pc == 0x203F80u) {
        ctx->pc = 0x203F84u;
        goto label_203f84;
    }
    ctx->pc = 0x203F7Cu;
    SET_GPR_U32(ctx, 31, 0x203F84u);
    ctx->pc = 0x148CC0u;
    if (runtime->hasFunction(0x148CC0u)) {
        auto targetFn = runtime->lookupFunction(0x148CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203F84u; }
        if (ctx->pc != 0x203F84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartReadBG__Fv_0x148cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203F84u; }
        if (ctx->pc != 0x203F84u) { return; }
    }
    ctx->pc = 0x203F84u;
label_203f84:
    // 0x203f84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x203f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_203f88:
    // 0x203f88: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x203f88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_203f8c:
    // 0x203f8c: 0xc05224c  jal         func_148930
label_203f90:
    if (ctx->pc == 0x203F90u) {
        ctx->pc = 0x203F90u;
            // 0x203f90: 0x27a60248  addiu       $a2, $sp, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 584));
        ctx->pc = 0x203F94u;
        goto label_203f94;
    }
    ctx->pc = 0x203F8Cu;
    SET_GPR_U32(ctx, 31, 0x203F94u);
    ctx->pc = 0x203F90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203F8Cu;
            // 0x203f90: 0x27a60248  addiu       $a2, $sp, 0x248 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203F94u; }
        if (ctx->pc != 0x203F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203F94u; }
        if (ctx->pc != 0x203F94u) { return; }
    }
    ctx->pc = 0x203F94u;
label_203f94:
    // 0x203f94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x203f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_203f98:
    // 0x203f98: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_203f9c:
    if (ctx->pc == 0x203F9Cu) {
        ctx->pc = 0x203F9Cu;
            // 0x203f9c: 0xa28205fc  sb          $v0, 0x5FC($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1532), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x203FA0u;
        goto label_203fa0;
    }
    ctx->pc = 0x203F98u;
    {
        const bool branch_taken_0x203f98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x203F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203F98u;
            // 0x203f9c: 0xa28205fc  sb          $v0, 0x5FC($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1532), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203f98) {
            ctx->pc = 0x20422Cu;
            goto label_20422c;
        }
    }
    ctx->pc = 0x203FA0u;
label_203fa0:
    // 0x203fa0: 0x144000a2  bnez        $v0, . + 4 + (0xA2 << 2)
label_203fa4:
    if (ctx->pc == 0x203FA4u) {
        ctx->pc = 0x203FA4u;
            // 0x203fa4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x203FA8u;
        goto label_203fa8;
    }
    ctx->pc = 0x203FA0u;
    {
        const bool branch_taken_0x203fa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x203FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203FA0u;
            // 0x203fa4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x203fa0) {
            ctx->pc = 0x20422Cu;
            goto label_20422c;
        }
    }
    ctx->pc = 0x203FA8u;
label_203fa8:
    // 0x203fa8: 0xc05231c  jal         func_148C70
label_203fac:
    if (ctx->pc == 0x203FACu) {
        ctx->pc = 0x203FB0u;
        goto label_203fb0;
    }
    ctx->pc = 0x203FA8u;
    SET_GPR_U32(ctx, 31, 0x203FB0u);
    ctx->pc = 0x148C70u;
    if (runtime->hasFunction(0x148C70u)) {
        auto targetFn = runtime->lookupFunction(0x148C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203FB0u; }
        if (ctx->pc != 0x203FB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetReadBGFile__Fi_0x148c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203FB0u; }
        if (ctx->pc != 0x203FB0u) { return; }
    }
    ctx->pc = 0x203FB0u;
label_203fb0:
    // 0x203fb0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x203fb0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_203fb4:
    // 0x203fb4: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
label_203fb8:
    if (ctx->pc == 0x203FB8u) {
        ctx->pc = 0x203FBCu;
        goto label_203fbc;
    }
    ctx->pc = 0x203FB4u;
    {
        const bool branch_taken_0x203fb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x203fb4) {
            ctx->pc = 0x204048u;
            goto label_204048;
        }
    }
    ctx->pc = 0x203FBCu;
label_203fbc:
    // 0x203fbc: 0x8e820574  lw          $v0, 0x574($s4)
    ctx->pc = 0x203fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1396)));
label_203fc0:
    // 0x203fc0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_203fc4:
    if (ctx->pc == 0x203FC4u) {
        ctx->pc = 0x203FC8u;
        goto label_203fc8;
    }
    ctx->pc = 0x203FC0u;
    {
        const bool branch_taken_0x203fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x203fc0) {
            ctx->pc = 0x204048u;
            goto label_204048;
        }
    }
    ctx->pc = 0x203FC8u;
label_203fc8:
    // 0x203fc8: 0x8e850020  lw          $a1, 0x20($s4)
    ctx->pc = 0x203fc8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_203fcc:
    // 0x203fcc: 0xc04b950  jal         func_12E540
label_203fd0:
    if (ctx->pc == 0x203FD0u) {
        ctx->pc = 0x203FD0u;
            // 0x203fd0: 0x8fa400d0  lw          $a0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->pc = 0x203FD4u;
        goto label_203fd4;
    }
    ctx->pc = 0x203FCCu;
    SET_GPR_U32(ctx, 31, 0x203FD4u);
    ctx->pc = 0x203FD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203FCCu;
            // 0x203fd0: 0x8fa400d0  lw          $a0, 0xD0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203FD4u; }
        if (ctx->pc != 0x203FD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203FD4u; }
        if (ctx->pc != 0x203FD4u) { return; }
    }
    ctx->pc = 0x203FD4u;
label_203fd4:
    // 0x203fd4: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x203fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_203fd8:
    // 0x203fd8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x203fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_203fdc:
    // 0x203fdc: 0x24a59640  addiu       $a1, $a1, -0x69C0
    ctx->pc = 0x203fdcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940224));
label_203fe0:
    // 0x203fe0: 0xc04a3dc  jal         func_128F70
label_203fe4:
    if (ctx->pc == 0x203FE4u) {
        ctx->pc = 0x203FE4u;
            // 0x203fe4: 0x244401d8  addiu       $a0, $v0, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 472));
        ctx->pc = 0x203FE8u;
        goto label_203fe8;
    }
    ctx->pc = 0x203FE0u;
    SET_GPR_U32(ctx, 31, 0x203FE8u);
    ctx->pc = 0x203FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x203FE0u;
            // 0x203fe4: 0x244401d8  addiu       $a0, $v0, 0x1D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 472));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203FE8u; }
        if (ctx->pc != 0x203FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x203FE8u; }
        if (ctx->pc != 0x203FE8u) { return; }
    }
    ctx->pc = 0x203FE8u;
label_203fe8:
    // 0x203fe8: 0x8e840574  lw          $a0, 0x574($s4)
    ctx->pc = 0x203fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1396)));
label_203fec:
    // 0x203fec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x203fecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_203ff0:
    // 0x203ff0: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x203ff0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_203ff4:
    // 0x203ff4: 0x320f809  jalr        $t9
label_203ff8:
    if (ctx->pc == 0x203FF8u) {
        ctx->pc = 0x203FF8u;
            // 0x203ff8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x203FFCu;
        goto label_203ffc;
    }
    ctx->pc = 0x203FF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x203FFCu);
        ctx->pc = 0x203FF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x203FF4u;
            // 0x203ff8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x203FFCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x203FFCu; }
            if (ctx->pc != 0x203FFCu) { return; }
        }
        }
    }
    ctx->pc = 0x203FFCu;
label_203ffc:
    // 0x203ffc: 0x8e840574  lw          $a0, 0x574($s4)
    ctx->pc = 0x203ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1396)));
label_204000:
    // 0x204000: 0x26870d48  addiu       $a3, $s4, 0xD48
    ctx->pc = 0x204000u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 3400));
label_204004:
    // 0x204004: 0x3c060037  lui         $a2, 0x37
    ctx->pc = 0x204004u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)55 << 16));
label_204008:
    // 0x204008: 0x8e050110  lw          $a1, 0x110($s0)
    ctx->pc = 0x204008u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_20400c:
    // 0x20400c: 0x8e8a0020  lw          $t2, 0x20($s4)
    ctx->pc = 0x20400cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 32)));
label_204010:
    // 0x204010: 0x24c69260  addiu       $a2, $a2, -0x6DA0
    ctx->pc = 0x204010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939232));
label_204014:
    // 0x204014: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x204014u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_204018:
    // 0x204018: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x204018u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_20401c:
    // 0x20401c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x20401cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_204020:
    // 0x204020: 0x8f39007c  lw          $t9, 0x7C($t9)
    ctx->pc = 0x204020u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 124)));
label_204024:
    // 0x204024: 0x320f809  jalr        $t9
label_204028:
    if (ctx->pc == 0x204028u) {
        ctx->pc = 0x204028u;
            // 0x204028: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x20402Cu;
        goto label_20402c;
    }
    ctx->pc = 0x204024u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x20402Cu);
        ctx->pc = 0x204028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204024u;
            // 0x204028: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x20402Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x20402Cu; }
            if (ctx->pc != 0x20402Cu) { return; }
        }
        }
    }
    ctx->pc = 0x20402Cu;
label_20402c:
    // 0x20402c: 0x8fa200d0  lw          $v0, 0xD0($sp)
    ctx->pc = 0x20402cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
label_204030:
    // 0x204030: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x204030u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_204034:
    // 0x204034: 0xa04001d8  sb          $zero, 0x1D8($v0)
    ctx->pc = 0x204034u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 472), (uint8_t)GPR_U32(ctx, 0));
label_204038:
    // 0x204038: 0x8e850d6c  lw          $a1, 0xD6C($s4)
    ctx->pc = 0x204038u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3436)));
label_20403c:
    // 0x20403c: 0x8e860d70  lw          $a2, 0xD70($s4)
    ctx->pc = 0x20403cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 3440)));
label_204040:
    // 0x204040: 0xc04a0d2  jal         func_128348
label_204044:
    if (ctx->pc == 0x204044u) {
        ctx->pc = 0x204044u;
            // 0x204044: 0x24849650  addiu       $a0, $a0, -0x69B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940240));
        ctx->pc = 0x204048u;
        goto label_204048;
    }
    ctx->pc = 0x204040u;
    SET_GPR_U32(ctx, 31, 0x204048u);
    ctx->pc = 0x204044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204040u;
            // 0x204044: 0x24849650  addiu       $a0, $a0, -0x69B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128348u;
    if (runtime->hasFunction(0x128348u)) {
        auto targetFn = runtime->lookupFunction(0x128348u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204048u; }
        if (ctx->pc != 0x204048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        printf_0x128348(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204048u; }
        if (ctx->pc != 0x204048u) { return; }
    }
    ctx->pc = 0x204048u;
label_204048:
    // 0x204048: 0x828205fc  lb          $v0, 0x5FC($s4)
    ctx->pc = 0x204048u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 1532)));
label_20404c:
    // 0x20404c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20404cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_204050:
    // 0x204050: 0x10000076  b           . + 4 + (0x76 << 2)
label_204054:
    if (ctx->pc == 0x204054u) {
        ctx->pc = 0x204054u;
            // 0x204054: 0xa28205fc  sb          $v0, 0x5FC($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1532), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x204058u;
        goto label_204058;
    }
    ctx->pc = 0x204050u;
    {
        const bool branch_taken_0x204050 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x204054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204050u;
            // 0x204054: 0xa28205fc  sb          $v0, 0x5FC($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1532), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204050) {
            ctx->pc = 0x20422Cu;
            goto label_20422c;
        }
    }
    ctx->pc = 0x204058u;
label_204058:
    // 0x204058: 0xc04e780  jal         func_139E00
label_20405c:
    if (ctx->pc == 0x20405Cu) {
        ctx->pc = 0x20405Cu;
            // 0x20405c: 0x8fa400c0  lw          $a0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->pc = 0x204060u;
        goto label_204060;
    }
    ctx->pc = 0x204058u;
    SET_GPR_U32(ctx, 31, 0x204060u);
    ctx->pc = 0x20405Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204058u;
            // 0x20405c: 0x8fa400c0  lw          $a0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204060u; }
        if (ctx->pc != 0x204060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204060u; }
        if (ctx->pc != 0x204060u) { return; }
    }
    ctx->pc = 0x204060u;
label_204060:
    // 0x204060: 0xc052330  jal         func_148CC0
label_204064:
    if (ctx->pc == 0x204064u) {
        ctx->pc = 0x204068u;
        goto label_204068;
    }
    ctx->pc = 0x204060u;
    SET_GPR_U32(ctx, 31, 0x204068u);
    ctx->pc = 0x148CC0u;
    if (runtime->hasFunction(0x148CC0u)) {
        auto targetFn = runtime->lookupFunction(0x148CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204068u; }
        if (ctx->pc != 0x204068u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartReadBG__Fv_0x148cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204068u; }
        if (ctx->pc != 0x204068u) { return; }
    }
    ctx->pc = 0x204068u;
label_204068:
    // 0x204068: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x204068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_20406c:
    // 0x20406c: 0x278381f8  addiu       $v1, $gp, -0x7E08
    ctx->pc = 0x20406cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935032));
label_204070:
    // 0x204070: 0x8c440024  lw          $a0, 0x24($v0)
    ctx->pc = 0x204070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_204074:
    // 0x204074: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x204074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_204078:
    // 0x204078: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x204078u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
label_20407c:
    // 0x20407c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x20407cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_204080:
    // 0x204080: 0xae820394  sw          $v0, 0x394($s4)
    ctx->pc = 0x204080u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 916), GPR_U32(ctx, 2));
label_204084:
    // 0x204084: 0x86820580  lh          $v0, 0x580($s4)
    ctx->pc = 0x204084u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1408)));
label_204088:
    // 0x204088: 0x8e850394  lw          $a1, 0x394($s4)
    ctx->pc = 0x204088u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 916)));
label_20408c:
    // 0x20408c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x20408cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_204090:
    // 0x204090: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x204090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_204094:
    // 0x204094: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x204094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_204098:
    // 0x204098: 0xc05224c  jal         func_148930
label_20409c:
    if (ctx->pc == 0x20409Cu) {
        ctx->pc = 0x20409Cu;
            // 0x20409c: 0x27a6024c  addiu       $a2, $sp, 0x24C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 588));
        ctx->pc = 0x2040A0u;
        goto label_2040a0;
    }
    ctx->pc = 0x204098u;
    SET_GPR_U32(ctx, 31, 0x2040A0u);
    ctx->pc = 0x20409Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204098u;
            // 0x20409c: 0x27a6024c  addiu       $a2, $sp, 0x24C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 588));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2040A0u; }
        if (ctx->pc != 0x2040A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2040A0u; }
        if (ctx->pc != 0x2040A0u) { return; }
    }
    ctx->pc = 0x2040A0u;
label_2040a0:
    // 0x2040a0: 0x8fa3024c  lw          $v1, 0x24C($sp)
    ctx->pc = 0x2040a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 588)));
label_2040a4:
    // 0x2040a4: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x2040a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_2040a8:
    // 0x2040a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2040ac:
    if (ctx->pc == 0x2040ACu) {
        ctx->pc = 0x2040ACu;
            // 0x2040ac: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x2040B0u;
        goto label_2040b0;
    }
    ctx->pc = 0x2040A8u;
    {
        const bool branch_taken_0x2040a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2040ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2040A8u;
            // 0x2040ac: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2040a8) {
            ctx->pc = 0x2040B8u;
            goto label_2040b8;
        }
    }
    ctx->pc = 0x2040B0u;
label_2040b0:
    // 0x2040b0: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x2040b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_2040b4:
    // 0x2040b4: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x2040b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2040b8:
    // 0x2040b8: 0xc04e748  jal         func_139D20
label_2040bc:
    if (ctx->pc == 0x2040BCu) {
        ctx->pc = 0x2040BCu;
            // 0x2040bc: 0x8fa400c0  lw          $a0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->pc = 0x2040C0u;
        goto label_2040c0;
    }
    ctx->pc = 0x2040B8u;
    SET_GPR_U32(ctx, 31, 0x2040C0u);
    ctx->pc = 0x2040BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2040B8u;
            // 0x2040bc: 0x8fa400c0  lw          $a0, 0xC0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2040C0u; }
        if (ctx->pc != 0x2040C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2040C0u; }
        if (ctx->pc != 0x2040C0u) { return; }
    }
    ctx->pc = 0x2040C0u;
label_2040c0:
    // 0x2040c0: 0x828205fc  lb          $v0, 0x5FC($s4)
    ctx->pc = 0x2040c0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 1532)));
label_2040c4:
    // 0x2040c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2040c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2040c8:
    // 0x2040c8: 0x10000058  b           . + 4 + (0x58 << 2)
label_2040cc:
    if (ctx->pc == 0x2040CCu) {
        ctx->pc = 0x2040CCu;
            // 0x2040cc: 0xa28205fc  sb          $v0, 0x5FC($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1532), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2040D0u;
        goto label_2040d0;
    }
    ctx->pc = 0x2040C8u;
    {
        const bool branch_taken_0x2040c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2040CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2040C8u;
            // 0x2040cc: 0xa28205fc  sb          $v0, 0x5FC($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1532), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2040c8) {
            ctx->pc = 0x20422Cu;
            goto label_20422c;
        }
    }
    ctx->pc = 0x2040D0u;
label_2040d0:
    // 0x2040d0: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
label_2040d4:
    if (ctx->pc == 0x2040D4u) {
        ctx->pc = 0x2040D4u;
            // 0x2040d4: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x2040D8u;
        goto label_2040d8;
    }
    ctx->pc = 0x2040D0u;
    {
        const bool branch_taken_0x2040d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2040D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2040D0u;
            // 0x2040d4: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2040d0) {
            ctx->pc = 0x20422Cu;
            goto label_20422c;
        }
    }
    ctx->pc = 0x2040D8u;
label_2040d8:
    // 0x2040d8: 0xc06334c  jal         func_18CD30
label_2040dc:
    if (ctx->pc == 0x2040DCu) {
        ctx->pc = 0x2040E0u;
        goto label_2040e0;
    }
    ctx->pc = 0x2040D8u;
    SET_GPR_U32(ctx, 31, 0x2040E0u);
    ctx->pc = 0x18CD30u;
    if (runtime->hasFunction(0x18CD30u)) {
        auto targetFn = runtime->lookupFunction(0x18CD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2040E0u; }
        if (ctx->pc != 0x2040E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndInitPort__Fi_0x18cd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2040E0u; }
        if (ctx->pc != 0x2040E0u) { return; }
    }
    ctx->pc = 0x2040E0u;
label_2040e0:
    // 0x2040e0: 0x828205fc  lb          $v0, 0x5FC($s4)
    ctx->pc = 0x2040e0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 1532)));
label_2040e4:
    // 0x2040e4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2040e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2040e8:
    // 0x2040e8: 0x10000050  b           . + 4 + (0x50 << 2)
label_2040ec:
    if (ctx->pc == 0x2040ECu) {
        ctx->pc = 0x2040ECu;
            // 0x2040ec: 0xa28205fc  sb          $v0, 0x5FC($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1532), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2040F0u;
        goto label_2040f0;
    }
    ctx->pc = 0x2040E8u;
    {
        const bool branch_taken_0x2040e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2040ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2040E8u;
            // 0x2040ec: 0xa28205fc  sb          $v0, 0x5FC($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1532), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2040e8) {
            ctx->pc = 0x20422Cu;
            goto label_20422c;
        }
    }
    ctx->pc = 0x2040F0u;
label_2040f0:
    // 0x2040f0: 0x8e830600  lw          $v1, 0x600($s4)
    ctx->pc = 0x2040f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1536)));
label_2040f4:
    // 0x2040f4: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2040f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2040f8:
    // 0x2040f8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x2040f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2040fc:
    // 0x2040fc: 0xae830600  sw          $v1, 0x600($s4)
    ctx->pc = 0x2040fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1536), GPR_U32(ctx, 3));
label_204100:
    // 0x204100: 0x8e830600  lw          $v1, 0x600($s4)
    ctx->pc = 0x204100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1536)));
label_204104:
    // 0x204104: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
label_204108:
    if (ctx->pc == 0x204108u) {
        ctx->pc = 0x20410Cu;
        goto label_20410c;
    }
    ctx->pc = 0x204104u;
    {
        const bool branch_taken_0x204104 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x204104) {
            ctx->pc = 0x20415Cu;
            goto label_20415c;
        }
    }
    ctx->pc = 0x20410Cu;
label_20410c:
    // 0x20410c: 0x86830580  lh          $v1, 0x580($s4)
    ctx->pc = 0x20410cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 1408)));
label_204110:
    // 0x204110: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x204110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_204114:
    // 0x204114: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_204118:
    if (ctx->pc == 0x204118u) {
        ctx->pc = 0x20411Cu;
        goto label_20411c;
    }
    ctx->pc = 0x204114u;
    {
        const bool branch_taken_0x204114 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x204114) {
            ctx->pc = 0x204128u;
            goto label_204128;
        }
    }
    ctx->pc = 0x20411Cu;
label_20411c:
    // 0x20411c: 0xc0941b0  jal         func_2506C0
label_204120:
    if (ctx->pc == 0x204120u) {
        ctx->pc = 0x204120u;
            // 0x204120: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x204124u;
        goto label_204124;
    }
    ctx->pc = 0x20411Cu;
    SET_GPR_U32(ctx, 31, 0x204124u);
    ctx->pc = 0x204120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20411Cu;
            // 0x204120: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2506C0u;
    if (runtime->hasFunction(0x2506C0u)) {
        auto targetFn = runtime->lookupFunction(0x2506C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204124u; }
        if (ctx->pc != 0x204124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRandI__Fi_0x2506c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204124u; }
        if (ctx->pc != 0x204124u) { return; }
    }
    ctx->pc = 0x204124u;
label_204124:
    // 0x204124: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x204124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_204128:
    // 0x204128: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x204128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_20412c:
    // 0x20412c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x20412cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_204130:
    // 0x204130: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x204130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_204134:
    // 0x204134: 0x2442ef10  addiu       $v0, $v0, -0x10F0
    ctx->pc = 0x204134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962960));
label_204138:
    // 0x204138: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x204138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_20413c:
    // 0x20413c: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x20413cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_204140:
    // 0x204140: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x204140u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_204144:
    // 0x204144: 0xc04a234  jal         func_1288D0
label_204148:
    if (ctx->pc == 0x204148u) {
        ctx->pc = 0x204148u;
            // 0x204148: 0x24a59678  addiu       $a1, $a1, -0x6988 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940280));
        ctx->pc = 0x20414Cu;
        goto label_20414c;
    }
    ctx->pc = 0x204144u;
    SET_GPR_U32(ctx, 31, 0x20414Cu);
    ctx->pc = 0x204148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204144u;
            // 0x204148: 0x24a59678  addiu       $a1, $a1, -0x6988 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20414Cu; }
        if (ctx->pc != 0x20414Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20414Cu; }
        if (ctx->pc != 0x20414Cu) { return; }
    }
    ctx->pc = 0x20414Cu;
label_20414c:
    // 0x20414c: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x20414cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
label_204150:
    // 0x204150: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x204150u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_204154:
    // 0x204154: 0xc062bbc  jal         func_18AEF0
label_204158:
    if (ctx->pc == 0x204158u) {
        ctx->pc = 0x204158u;
            // 0x204158: 0x27a601a0  addiu       $a2, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->pc = 0x20415Cu;
        goto label_20415c;
    }
    ctx->pc = 0x204154u;
    SET_GPR_U32(ctx, 31, 0x20415Cu);
    ctx->pc = 0x204158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204154u;
            // 0x204158: 0x27a601a0  addiu       $a2, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AEF0u;
    if (runtime->hasFunction(0x18AEF0u)) {
        auto targetFn = runtime->lookupFunction(0x18AEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20415Cu; }
        if (ctx->pc != 0x20415Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamOpenFast__6CSoundFiPc_0x18aef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20415Cu; }
        if (ctx->pc != 0x20415Cu) { return; }
    }
    ctx->pc = 0x20415Cu;
label_20415c:
    // 0x20415c: 0x8e820600  lw          $v0, 0x600($s4)
    ctx->pc = 0x20415cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1536)));
label_204160:
    // 0x204160: 0x1c400032  bgtz        $v0, . + 4 + (0x32 << 2)
label_204164:
    if (ctx->pc == 0x204164u) {
        ctx->pc = 0x204168u;
        goto label_204168;
    }
    ctx->pc = 0x204160u;
    {
        const bool branch_taken_0x204160 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x204160) {
            ctx->pc = 0x20422Cu;
            goto label_20422c;
        }
    }
    ctx->pc = 0x204168u;
label_204168:
    // 0x204168: 0xc0a2bec  jal         func_28AFB0
label_20416c:
    if (ctx->pc == 0x20416Cu) {
        ctx->pc = 0x20416Cu;
            // 0x20416c: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->pc = 0x204170u;
        goto label_204170;
    }
    ctx->pc = 0x204168u;
    SET_GPR_U32(ctx, 31, 0x204170u);
    ctx->pc = 0x20416Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204168u;
            // 0x20416c: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28AFB0u;
    if (runtime->hasFunction(0x28AFB0u)) {
        auto targetFn = runtime->lookupFunction(0x28AFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204170u; }
        if (ctx->pc != 0x204170u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamOpenState__6CSoundFv_0x28afb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204170u; }
        if (ctx->pc != 0x204170u) { return; }
    }
    ctx->pc = 0x204170u;
label_204170:
    // 0x204170: 0x0  nop
    ctx->pc = 0x204170u;
    // NOP
label_204174:
    // 0x204174: 0x0  nop
    ctx->pc = 0x204174u;
    // NOP
label_204178:
    // 0x204178: 0x0  nop
    ctx->pc = 0x204178u;
    // NOP
label_20417c:
    // 0x20417c: 0x0  nop
    ctx->pc = 0x20417cu;
    // NOP
label_204180:
    // 0x204180: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_204184:
    if (ctx->pc == 0x204184u) {
        ctx->pc = 0x204188u;
        goto label_204188;
    }
    ctx->pc = 0x204180u;
    {
        const bool branch_taken_0x204180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x204180) {
            ctx->pc = 0x204168u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_204168;
        }
    }
    ctx->pc = 0x204188u;
label_204188:
    // 0x204188: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x204188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
label_20418c:
    // 0x20418c: 0xc062c3c  jal         func_18B0F0
label_204190:
    if (ctx->pc == 0x204190u) {
        ctx->pc = 0x204190u;
            // 0x204190: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x204194u;
        goto label_204194;
    }
    ctx->pc = 0x20418Cu;
    SET_GPR_U32(ctx, 31, 0x204194u);
    ctx->pc = 0x204190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20418Cu;
            // 0x204190: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B0F0u;
    if (runtime->hasFunction(0x18B0F0u)) {
        auto targetFn = runtime->lookupFunction(0x18B0F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204194u; }
        if (ctx->pc != 0x204194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamStandBy__6CSoundFi_0x18b0f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204194u; }
        if (ctx->pc != 0x204194u) { return; }
    }
    ctx->pc = 0x204194u;
label_204194:
    // 0x204194: 0xc0a2bec  jal         func_28AFB0
label_204198:
    if (ctx->pc == 0x204198u) {
        ctx->pc = 0x204198u;
            // 0x204198: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->pc = 0x20419Cu;
        goto label_20419c;
    }
    ctx->pc = 0x204194u;
    SET_GPR_U32(ctx, 31, 0x20419Cu);
    ctx->pc = 0x204198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204194u;
            // 0x204198: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28AFB0u;
    if (runtime->hasFunction(0x28AFB0u)) {
        auto targetFn = runtime->lookupFunction(0x28AFB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20419Cu; }
        if (ctx->pc != 0x20419Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamOpenState__6CSoundFv_0x28afb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20419Cu; }
        if (ctx->pc != 0x20419Cu) { return; }
    }
    ctx->pc = 0x20419Cu;
label_20419c:
    // 0x20419c: 0x0  nop
    ctx->pc = 0x20419cu;
    // NOP
label_2041a0:
    // 0x2041a0: 0x0  nop
    ctx->pc = 0x2041a0u;
    // NOP
label_2041a4:
    // 0x2041a4: 0x0  nop
    ctx->pc = 0x2041a4u;
    // NOP
label_2041a8:
    // 0x2041a8: 0x0  nop
    ctx->pc = 0x2041a8u;
    // NOP
label_2041ac:
    // 0x2041ac: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_2041b0:
    if (ctx->pc == 0x2041B0u) {
        ctx->pc = 0x2041B4u;
        goto label_2041b4;
    }
    ctx->pc = 0x2041ACu;
    {
        const bool branch_taken_0x2041ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2041ac) {
            ctx->pc = 0x204194u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_204194;
        }
    }
    ctx->pc = 0x2041B4u;
label_2041b4:
    // 0x2041b4: 0x24067fff  addiu       $a2, $zero, 0x7FFF
    ctx->pc = 0x2041b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32767));
label_2041b8:
    // 0x2041b8: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x2041b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
label_2041bc:
    // 0x2041bc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2041bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2041c0:
    // 0x2041c0: 0xc062c28  jal         func_18B0A0
label_2041c4:
    if (ctx->pc == 0x2041C4u) {
        ctx->pc = 0x2041C4u;
            // 0x2041c4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2041C8u;
        goto label_2041c8;
    }
    ctx->pc = 0x2041C0u;
    SET_GPR_U32(ctx, 31, 0x2041C8u);
    ctx->pc = 0x2041C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2041C0u;
            // 0x2041c4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B0A0u;
    if (runtime->hasFunction(0x18B0A0u)) {
        auto targetFn = runtime->lookupFunction(0x18B0A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2041C8u; }
        if (ctx->pc != 0x2041C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamSetVol__6CSoundFiii_0x18b0a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2041C8u; }
        if (ctx->pc != 0x2041C8u) { return; }
    }
    ctx->pc = 0x2041C8u;
label_2041c8:
    // 0x2041c8: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x2041c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
label_2041cc:
    // 0x2041cc: 0xc062bf0  jal         func_18AFC0
label_2041d0:
    if (ctx->pc == 0x2041D0u) {
        ctx->pc = 0x2041D0u;
            // 0x2041d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2041D4u;
        goto label_2041d4;
    }
    ctx->pc = 0x2041CCu;
    SET_GPR_U32(ctx, 31, 0x2041D4u);
    ctx->pc = 0x2041D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2041CCu;
            // 0x2041d0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AFC0u;
    if (runtime->hasFunction(0x18AFC0u)) {
        auto targetFn = runtime->lookupFunction(0x18AFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2041D4u; }
        if (ctx->pc != 0x2041D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamPlay__6CSoundFi_0x18afc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2041D4u; }
        if (ctx->pc != 0x2041D4u) { return; }
    }
    ctx->pc = 0x2041D4u;
label_2041d4:
    // 0x2041d4: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x2041d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_2041d8:
    // 0x2041d8: 0xae820600  sw          $v0, 0x600($s4)
    ctx->pc = 0x2041d8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 1536), GPR_U32(ctx, 2));
label_2041dc:
    // 0x2041dc: 0x828205fc  lb          $v0, 0x5FC($s4)
    ctx->pc = 0x2041dcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 1532)));
label_2041e0:
    // 0x2041e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2041e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2041e4:
    // 0x2041e4: 0x10000011  b           . + 4 + (0x11 << 2)
label_2041e8:
    if (ctx->pc == 0x2041E8u) {
        ctx->pc = 0x2041E8u;
            // 0x2041e8: 0xa28205fc  sb          $v0, 0x5FC($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1532), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2041ECu;
        goto label_2041ec;
    }
    ctx->pc = 0x2041E4u;
    {
        const bool branch_taken_0x2041e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2041E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2041E4u;
            // 0x2041e8: 0xa28205fc  sb          $v0, 0x5FC($s4) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 20), 1532), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2041e4) {
            ctx->pc = 0x20422Cu;
            goto label_20422c;
        }
    }
    ctx->pc = 0x2041ECu;
label_2041ec:
    // 0x2041ec: 0x27848af0  addiu       $a0, $gp, -0x7510
    ctx->pc = 0x2041ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
label_2041f0:
    // 0x2041f0: 0xc062c2c  jal         func_18B0B0
label_2041f4:
    if (ctx->pc == 0x2041F4u) {
        ctx->pc = 0x2041F4u;
            // 0x2041f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2041F8u;
        goto label_2041f8;
    }
    ctx->pc = 0x2041F0u;
    SET_GPR_U32(ctx, 31, 0x2041F8u);
    ctx->pc = 0x2041F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2041F0u;
            // 0x2041f4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18B0B0u;
    if (runtime->hasFunction(0x18B0B0u)) {
        auto targetFn = runtime->lookupFunction(0x18B0B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2041F8u; }
        if (ctx->pc != 0x2041F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamGetState__6CSoundFi_0x18b0b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2041F8u; }
        if (ctx->pc != 0x2041F8u) { return; }
    }
    ctx->pc = 0x2041F8u;
label_2041f8:
    // 0x2041f8: 0x8e830600  lw          $v1, 0x600($s4)
    ctx->pc = 0x2041f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1536)));
label_2041fc:
    // 0x2041fc: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x2041fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_204200:
    // 0x204200: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x204200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_204204:
    // 0x204204: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_204208:
    if (ctx->pc == 0x204208u) {
        ctx->pc = 0x204208u;
            // 0x204208: 0xae830600  sw          $v1, 0x600($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1536), GPR_U32(ctx, 3));
        ctx->pc = 0x20420Cu;
        goto label_20420c;
    }
    ctx->pc = 0x204204u;
    {
        const bool branch_taken_0x204204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x204208u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204204u;
            // 0x204208: 0xae830600  sw          $v1, 0x600($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 1536), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204204) {
            ctx->pc = 0x20422Cu;
            goto label_20422c;
        }
    }
    ctx->pc = 0x20420Cu;
label_20420c:
    // 0x20420c: 0x8e820600  lw          $v0, 0x600($s4)
    ctx->pc = 0x20420cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 1536)));
label_204210:
    // 0x204210: 0x1c400006  bgtz        $v0, . + 4 + (0x6 << 2)
label_204214:
    if (ctx->pc == 0x204214u) {
        ctx->pc = 0x204214u;
            // 0x204214: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->pc = 0x204218u;
        goto label_204218;
    }
    ctx->pc = 0x204210u;
    {
        const bool branch_taken_0x204210 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x204214u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204210u;
            // 0x204214: 0x27848af0  addiu       $a0, $gp, -0x7510 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 28), 4294937328));
        ctx->in_delay_slot = false;
        if (branch_taken_0x204210) {
            ctx->pc = 0x20422Cu;
            goto label_20422c;
        }
    }
    ctx->pc = 0x204218u;
label_204218:
    // 0x204218: 0xc062bf8  jal         func_18AFE0
label_20421c:
    if (ctx->pc == 0x20421Cu) {
        ctx->pc = 0x20421Cu;
            // 0x20421c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x204220u;
        goto label_204220;
    }
    ctx->pc = 0x204218u;
    SET_GPR_U32(ctx, 31, 0x204220u);
    ctx->pc = 0x20421Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x204218u;
            // 0x20421c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18AFE0u;
    if (runtime->hasFunction(0x18AFE0u)) {
        auto targetFn = runtime->lookupFunction(0x18AFE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204220u; }
        if (ctx->pc != 0x204220u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StreamClose__6CSoundFi_0x18afe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x204220u; }
        if (ctx->pc != 0x204220u) { return; }
    }
    ctx->pc = 0x204220u;
label_204220:
    // 0x204220: 0x828205fc  lb          $v0, 0x5FC($s4)
    ctx->pc = 0x204220u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 1532)));
label_204224:
    // 0x204224: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x204224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_204228:
    // 0x204228: 0xa28205fc  sb          $v0, 0x5FC($s4)
    ctx->pc = 0x204228u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1532), (uint8_t)GPR_U32(ctx, 2));
label_20422c:
    // 0x20422c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x20422cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_204230:
    // 0x204230: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x204230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_204234:
    // 0x204234: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x204234u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_204238:
    // 0x204238: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x204238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_20423c:
    // 0x20423c: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x20423cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_204240:
    // 0x204240: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x204240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_204244:
    // 0x204244: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x204244u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_204248:
    // 0x204248: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x204248u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_20424c:
    // 0x20424c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x20424cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_204250:
    // 0x204250: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x204250u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_204254:
    // 0x204254: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x204254u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_204258:
    // 0x204258: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x204258u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_20425c:
    // 0x20425c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20425cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_204260:
    // 0x204260: 0x3e00008  jr          $ra
label_204264:
    if (ctx->pc == 0x204264u) {
        ctx->pc = 0x204264u;
            // 0x204264: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->pc = 0x204268u;
        goto label_fallthrough_0x204260;
    }
    ctx->pc = 0x204260u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x204264u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x204260u;
            // 0x204264: 0x27bd0250  addiu       $sp, $sp, 0x250 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x204260:
    ctx->pc = 0x204268u;
}
