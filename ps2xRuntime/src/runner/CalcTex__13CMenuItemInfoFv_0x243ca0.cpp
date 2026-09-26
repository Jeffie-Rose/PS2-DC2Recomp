#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: CalcTex__13CMenuItemInfoFv
// Address: 0x243ca0 - 0x2449a0
void CalcTex__13CMenuItemInfoFv_0x243ca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("CalcTex__13CMenuItemInfoFv_0x243ca0");
#endif

    switch (ctx->pc) {
        case 0x243ca0u: goto label_243ca0;
        case 0x243ca4u: goto label_243ca4;
        case 0x243ca8u: goto label_243ca8;
        case 0x243cacu: goto label_243cac;
        case 0x243cb0u: goto label_243cb0;
        case 0x243cb4u: goto label_243cb4;
        case 0x243cb8u: goto label_243cb8;
        case 0x243cbcu: goto label_243cbc;
        case 0x243cc0u: goto label_243cc0;
        case 0x243cc4u: goto label_243cc4;
        case 0x243cc8u: goto label_243cc8;
        case 0x243cccu: goto label_243ccc;
        case 0x243cd0u: goto label_243cd0;
        case 0x243cd4u: goto label_243cd4;
        case 0x243cd8u: goto label_243cd8;
        case 0x243cdcu: goto label_243cdc;
        case 0x243ce0u: goto label_243ce0;
        case 0x243ce4u: goto label_243ce4;
        case 0x243ce8u: goto label_243ce8;
        case 0x243cecu: goto label_243cec;
        case 0x243cf0u: goto label_243cf0;
        case 0x243cf4u: goto label_243cf4;
        case 0x243cf8u: goto label_243cf8;
        case 0x243cfcu: goto label_243cfc;
        case 0x243d00u: goto label_243d00;
        case 0x243d04u: goto label_243d04;
        case 0x243d08u: goto label_243d08;
        case 0x243d0cu: goto label_243d0c;
        case 0x243d10u: goto label_243d10;
        case 0x243d14u: goto label_243d14;
        case 0x243d18u: goto label_243d18;
        case 0x243d1cu: goto label_243d1c;
        case 0x243d20u: goto label_243d20;
        case 0x243d24u: goto label_243d24;
        case 0x243d28u: goto label_243d28;
        case 0x243d2cu: goto label_243d2c;
        case 0x243d30u: goto label_243d30;
        case 0x243d34u: goto label_243d34;
        case 0x243d38u: goto label_243d38;
        case 0x243d3cu: goto label_243d3c;
        case 0x243d40u: goto label_243d40;
        case 0x243d44u: goto label_243d44;
        case 0x243d48u: goto label_243d48;
        case 0x243d4cu: goto label_243d4c;
        case 0x243d50u: goto label_243d50;
        case 0x243d54u: goto label_243d54;
        case 0x243d58u: goto label_243d58;
        case 0x243d5cu: goto label_243d5c;
        case 0x243d60u: goto label_243d60;
        case 0x243d64u: goto label_243d64;
        case 0x243d68u: goto label_243d68;
        case 0x243d6cu: goto label_243d6c;
        case 0x243d70u: goto label_243d70;
        case 0x243d74u: goto label_243d74;
        case 0x243d78u: goto label_243d78;
        case 0x243d7cu: goto label_243d7c;
        case 0x243d80u: goto label_243d80;
        case 0x243d84u: goto label_243d84;
        case 0x243d88u: goto label_243d88;
        case 0x243d8cu: goto label_243d8c;
        case 0x243d90u: goto label_243d90;
        case 0x243d94u: goto label_243d94;
        case 0x243d98u: goto label_243d98;
        case 0x243d9cu: goto label_243d9c;
        case 0x243da0u: goto label_243da0;
        case 0x243da4u: goto label_243da4;
        case 0x243da8u: goto label_243da8;
        case 0x243dacu: goto label_243dac;
        case 0x243db0u: goto label_243db0;
        case 0x243db4u: goto label_243db4;
        case 0x243db8u: goto label_243db8;
        case 0x243dbcu: goto label_243dbc;
        case 0x243dc0u: goto label_243dc0;
        case 0x243dc4u: goto label_243dc4;
        case 0x243dc8u: goto label_243dc8;
        case 0x243dccu: goto label_243dcc;
        case 0x243dd0u: goto label_243dd0;
        case 0x243dd4u: goto label_243dd4;
        case 0x243dd8u: goto label_243dd8;
        case 0x243ddcu: goto label_243ddc;
        case 0x243de0u: goto label_243de0;
        case 0x243de4u: goto label_243de4;
        case 0x243de8u: goto label_243de8;
        case 0x243decu: goto label_243dec;
        case 0x243df0u: goto label_243df0;
        case 0x243df4u: goto label_243df4;
        case 0x243df8u: goto label_243df8;
        case 0x243dfcu: goto label_243dfc;
        case 0x243e00u: goto label_243e00;
        case 0x243e04u: goto label_243e04;
        case 0x243e08u: goto label_243e08;
        case 0x243e0cu: goto label_243e0c;
        case 0x243e10u: goto label_243e10;
        case 0x243e14u: goto label_243e14;
        case 0x243e18u: goto label_243e18;
        case 0x243e1cu: goto label_243e1c;
        case 0x243e20u: goto label_243e20;
        case 0x243e24u: goto label_243e24;
        case 0x243e28u: goto label_243e28;
        case 0x243e2cu: goto label_243e2c;
        case 0x243e30u: goto label_243e30;
        case 0x243e34u: goto label_243e34;
        case 0x243e38u: goto label_243e38;
        case 0x243e3cu: goto label_243e3c;
        case 0x243e40u: goto label_243e40;
        case 0x243e44u: goto label_243e44;
        case 0x243e48u: goto label_243e48;
        case 0x243e4cu: goto label_243e4c;
        case 0x243e50u: goto label_243e50;
        case 0x243e54u: goto label_243e54;
        case 0x243e58u: goto label_243e58;
        case 0x243e5cu: goto label_243e5c;
        case 0x243e60u: goto label_243e60;
        case 0x243e64u: goto label_243e64;
        case 0x243e68u: goto label_243e68;
        case 0x243e6cu: goto label_243e6c;
        case 0x243e70u: goto label_243e70;
        case 0x243e74u: goto label_243e74;
        case 0x243e78u: goto label_243e78;
        case 0x243e7cu: goto label_243e7c;
        case 0x243e80u: goto label_243e80;
        case 0x243e84u: goto label_243e84;
        case 0x243e88u: goto label_243e88;
        case 0x243e8cu: goto label_243e8c;
        case 0x243e90u: goto label_243e90;
        case 0x243e94u: goto label_243e94;
        case 0x243e98u: goto label_243e98;
        case 0x243e9cu: goto label_243e9c;
        case 0x243ea0u: goto label_243ea0;
        case 0x243ea4u: goto label_243ea4;
        case 0x243ea8u: goto label_243ea8;
        case 0x243eacu: goto label_243eac;
        case 0x243eb0u: goto label_243eb0;
        case 0x243eb4u: goto label_243eb4;
        case 0x243eb8u: goto label_243eb8;
        case 0x243ebcu: goto label_243ebc;
        case 0x243ec0u: goto label_243ec0;
        case 0x243ec4u: goto label_243ec4;
        case 0x243ec8u: goto label_243ec8;
        case 0x243eccu: goto label_243ecc;
        case 0x243ed0u: goto label_243ed0;
        case 0x243ed4u: goto label_243ed4;
        case 0x243ed8u: goto label_243ed8;
        case 0x243edcu: goto label_243edc;
        case 0x243ee0u: goto label_243ee0;
        case 0x243ee4u: goto label_243ee4;
        case 0x243ee8u: goto label_243ee8;
        case 0x243eecu: goto label_243eec;
        case 0x243ef0u: goto label_243ef0;
        case 0x243ef4u: goto label_243ef4;
        case 0x243ef8u: goto label_243ef8;
        case 0x243efcu: goto label_243efc;
        case 0x243f00u: goto label_243f00;
        case 0x243f04u: goto label_243f04;
        case 0x243f08u: goto label_243f08;
        case 0x243f0cu: goto label_243f0c;
        case 0x243f10u: goto label_243f10;
        case 0x243f14u: goto label_243f14;
        case 0x243f18u: goto label_243f18;
        case 0x243f1cu: goto label_243f1c;
        case 0x243f20u: goto label_243f20;
        case 0x243f24u: goto label_243f24;
        case 0x243f28u: goto label_243f28;
        case 0x243f2cu: goto label_243f2c;
        case 0x243f30u: goto label_243f30;
        case 0x243f34u: goto label_243f34;
        case 0x243f38u: goto label_243f38;
        case 0x243f3cu: goto label_243f3c;
        case 0x243f40u: goto label_243f40;
        case 0x243f44u: goto label_243f44;
        case 0x243f48u: goto label_243f48;
        case 0x243f4cu: goto label_243f4c;
        case 0x243f50u: goto label_243f50;
        case 0x243f54u: goto label_243f54;
        case 0x243f58u: goto label_243f58;
        case 0x243f5cu: goto label_243f5c;
        case 0x243f60u: goto label_243f60;
        case 0x243f64u: goto label_243f64;
        case 0x243f68u: goto label_243f68;
        case 0x243f6cu: goto label_243f6c;
        case 0x243f70u: goto label_243f70;
        case 0x243f74u: goto label_243f74;
        case 0x243f78u: goto label_243f78;
        case 0x243f7cu: goto label_243f7c;
        case 0x243f80u: goto label_243f80;
        case 0x243f84u: goto label_243f84;
        case 0x243f88u: goto label_243f88;
        case 0x243f8cu: goto label_243f8c;
        case 0x243f90u: goto label_243f90;
        case 0x243f94u: goto label_243f94;
        case 0x243f98u: goto label_243f98;
        case 0x243f9cu: goto label_243f9c;
        case 0x243fa0u: goto label_243fa0;
        case 0x243fa4u: goto label_243fa4;
        case 0x243fa8u: goto label_243fa8;
        case 0x243facu: goto label_243fac;
        case 0x243fb0u: goto label_243fb0;
        case 0x243fb4u: goto label_243fb4;
        case 0x243fb8u: goto label_243fb8;
        case 0x243fbcu: goto label_243fbc;
        case 0x243fc0u: goto label_243fc0;
        case 0x243fc4u: goto label_243fc4;
        case 0x243fc8u: goto label_243fc8;
        case 0x243fccu: goto label_243fcc;
        case 0x243fd0u: goto label_243fd0;
        case 0x243fd4u: goto label_243fd4;
        case 0x243fd8u: goto label_243fd8;
        case 0x243fdcu: goto label_243fdc;
        case 0x243fe0u: goto label_243fe0;
        case 0x243fe4u: goto label_243fe4;
        case 0x243fe8u: goto label_243fe8;
        case 0x243fecu: goto label_243fec;
        case 0x243ff0u: goto label_243ff0;
        case 0x243ff4u: goto label_243ff4;
        case 0x243ff8u: goto label_243ff8;
        case 0x243ffcu: goto label_243ffc;
        case 0x244000u: goto label_244000;
        case 0x244004u: goto label_244004;
        case 0x244008u: goto label_244008;
        case 0x24400cu: goto label_24400c;
        case 0x244010u: goto label_244010;
        case 0x244014u: goto label_244014;
        case 0x244018u: goto label_244018;
        case 0x24401cu: goto label_24401c;
        case 0x244020u: goto label_244020;
        case 0x244024u: goto label_244024;
        case 0x244028u: goto label_244028;
        case 0x24402cu: goto label_24402c;
        case 0x244030u: goto label_244030;
        case 0x244034u: goto label_244034;
        case 0x244038u: goto label_244038;
        case 0x24403cu: goto label_24403c;
        case 0x244040u: goto label_244040;
        case 0x244044u: goto label_244044;
        case 0x244048u: goto label_244048;
        case 0x24404cu: goto label_24404c;
        case 0x244050u: goto label_244050;
        case 0x244054u: goto label_244054;
        case 0x244058u: goto label_244058;
        case 0x24405cu: goto label_24405c;
        case 0x244060u: goto label_244060;
        case 0x244064u: goto label_244064;
        case 0x244068u: goto label_244068;
        case 0x24406cu: goto label_24406c;
        case 0x244070u: goto label_244070;
        case 0x244074u: goto label_244074;
        case 0x244078u: goto label_244078;
        case 0x24407cu: goto label_24407c;
        case 0x244080u: goto label_244080;
        case 0x244084u: goto label_244084;
        case 0x244088u: goto label_244088;
        case 0x24408cu: goto label_24408c;
        case 0x244090u: goto label_244090;
        case 0x244094u: goto label_244094;
        case 0x244098u: goto label_244098;
        case 0x24409cu: goto label_24409c;
        case 0x2440a0u: goto label_2440a0;
        case 0x2440a4u: goto label_2440a4;
        case 0x2440a8u: goto label_2440a8;
        case 0x2440acu: goto label_2440ac;
        case 0x2440b0u: goto label_2440b0;
        case 0x2440b4u: goto label_2440b4;
        case 0x2440b8u: goto label_2440b8;
        case 0x2440bcu: goto label_2440bc;
        case 0x2440c0u: goto label_2440c0;
        case 0x2440c4u: goto label_2440c4;
        case 0x2440c8u: goto label_2440c8;
        case 0x2440ccu: goto label_2440cc;
        case 0x2440d0u: goto label_2440d0;
        case 0x2440d4u: goto label_2440d4;
        case 0x2440d8u: goto label_2440d8;
        case 0x2440dcu: goto label_2440dc;
        case 0x2440e0u: goto label_2440e0;
        case 0x2440e4u: goto label_2440e4;
        case 0x2440e8u: goto label_2440e8;
        case 0x2440ecu: goto label_2440ec;
        case 0x2440f0u: goto label_2440f0;
        case 0x2440f4u: goto label_2440f4;
        case 0x2440f8u: goto label_2440f8;
        case 0x2440fcu: goto label_2440fc;
        case 0x244100u: goto label_244100;
        case 0x244104u: goto label_244104;
        case 0x244108u: goto label_244108;
        case 0x24410cu: goto label_24410c;
        case 0x244110u: goto label_244110;
        case 0x244114u: goto label_244114;
        case 0x244118u: goto label_244118;
        case 0x24411cu: goto label_24411c;
        case 0x244120u: goto label_244120;
        case 0x244124u: goto label_244124;
        case 0x244128u: goto label_244128;
        case 0x24412cu: goto label_24412c;
        case 0x244130u: goto label_244130;
        case 0x244134u: goto label_244134;
        case 0x244138u: goto label_244138;
        case 0x24413cu: goto label_24413c;
        case 0x244140u: goto label_244140;
        case 0x244144u: goto label_244144;
        case 0x244148u: goto label_244148;
        case 0x24414cu: goto label_24414c;
        case 0x244150u: goto label_244150;
        case 0x244154u: goto label_244154;
        case 0x244158u: goto label_244158;
        case 0x24415cu: goto label_24415c;
        case 0x244160u: goto label_244160;
        case 0x244164u: goto label_244164;
        case 0x244168u: goto label_244168;
        case 0x24416cu: goto label_24416c;
        case 0x244170u: goto label_244170;
        case 0x244174u: goto label_244174;
        case 0x244178u: goto label_244178;
        case 0x24417cu: goto label_24417c;
        case 0x244180u: goto label_244180;
        case 0x244184u: goto label_244184;
        case 0x244188u: goto label_244188;
        case 0x24418cu: goto label_24418c;
        case 0x244190u: goto label_244190;
        case 0x244194u: goto label_244194;
        case 0x244198u: goto label_244198;
        case 0x24419cu: goto label_24419c;
        case 0x2441a0u: goto label_2441a0;
        case 0x2441a4u: goto label_2441a4;
        case 0x2441a8u: goto label_2441a8;
        case 0x2441acu: goto label_2441ac;
        case 0x2441b0u: goto label_2441b0;
        case 0x2441b4u: goto label_2441b4;
        case 0x2441b8u: goto label_2441b8;
        case 0x2441bcu: goto label_2441bc;
        case 0x2441c0u: goto label_2441c0;
        case 0x2441c4u: goto label_2441c4;
        case 0x2441c8u: goto label_2441c8;
        case 0x2441ccu: goto label_2441cc;
        case 0x2441d0u: goto label_2441d0;
        case 0x2441d4u: goto label_2441d4;
        case 0x2441d8u: goto label_2441d8;
        case 0x2441dcu: goto label_2441dc;
        case 0x2441e0u: goto label_2441e0;
        case 0x2441e4u: goto label_2441e4;
        case 0x2441e8u: goto label_2441e8;
        case 0x2441ecu: goto label_2441ec;
        case 0x2441f0u: goto label_2441f0;
        case 0x2441f4u: goto label_2441f4;
        case 0x2441f8u: goto label_2441f8;
        case 0x2441fcu: goto label_2441fc;
        case 0x244200u: goto label_244200;
        case 0x244204u: goto label_244204;
        case 0x244208u: goto label_244208;
        case 0x24420cu: goto label_24420c;
        case 0x244210u: goto label_244210;
        case 0x244214u: goto label_244214;
        case 0x244218u: goto label_244218;
        case 0x24421cu: goto label_24421c;
        case 0x244220u: goto label_244220;
        case 0x244224u: goto label_244224;
        case 0x244228u: goto label_244228;
        case 0x24422cu: goto label_24422c;
        case 0x244230u: goto label_244230;
        case 0x244234u: goto label_244234;
        case 0x244238u: goto label_244238;
        case 0x24423cu: goto label_24423c;
        case 0x244240u: goto label_244240;
        case 0x244244u: goto label_244244;
        case 0x244248u: goto label_244248;
        case 0x24424cu: goto label_24424c;
        case 0x244250u: goto label_244250;
        case 0x244254u: goto label_244254;
        case 0x244258u: goto label_244258;
        case 0x24425cu: goto label_24425c;
        case 0x244260u: goto label_244260;
        case 0x244264u: goto label_244264;
        case 0x244268u: goto label_244268;
        case 0x24426cu: goto label_24426c;
        case 0x244270u: goto label_244270;
        case 0x244274u: goto label_244274;
        case 0x244278u: goto label_244278;
        case 0x24427cu: goto label_24427c;
        case 0x244280u: goto label_244280;
        case 0x244284u: goto label_244284;
        case 0x244288u: goto label_244288;
        case 0x24428cu: goto label_24428c;
        case 0x244290u: goto label_244290;
        case 0x244294u: goto label_244294;
        case 0x244298u: goto label_244298;
        case 0x24429cu: goto label_24429c;
        case 0x2442a0u: goto label_2442a0;
        case 0x2442a4u: goto label_2442a4;
        case 0x2442a8u: goto label_2442a8;
        case 0x2442acu: goto label_2442ac;
        case 0x2442b0u: goto label_2442b0;
        case 0x2442b4u: goto label_2442b4;
        case 0x2442b8u: goto label_2442b8;
        case 0x2442bcu: goto label_2442bc;
        case 0x2442c0u: goto label_2442c0;
        case 0x2442c4u: goto label_2442c4;
        case 0x2442c8u: goto label_2442c8;
        case 0x2442ccu: goto label_2442cc;
        case 0x2442d0u: goto label_2442d0;
        case 0x2442d4u: goto label_2442d4;
        case 0x2442d8u: goto label_2442d8;
        case 0x2442dcu: goto label_2442dc;
        case 0x2442e0u: goto label_2442e0;
        case 0x2442e4u: goto label_2442e4;
        case 0x2442e8u: goto label_2442e8;
        case 0x2442ecu: goto label_2442ec;
        case 0x2442f0u: goto label_2442f0;
        case 0x2442f4u: goto label_2442f4;
        case 0x2442f8u: goto label_2442f8;
        case 0x2442fcu: goto label_2442fc;
        case 0x244300u: goto label_244300;
        case 0x244304u: goto label_244304;
        case 0x244308u: goto label_244308;
        case 0x24430cu: goto label_24430c;
        case 0x244310u: goto label_244310;
        case 0x244314u: goto label_244314;
        case 0x244318u: goto label_244318;
        case 0x24431cu: goto label_24431c;
        case 0x244320u: goto label_244320;
        case 0x244324u: goto label_244324;
        case 0x244328u: goto label_244328;
        case 0x24432cu: goto label_24432c;
        case 0x244330u: goto label_244330;
        case 0x244334u: goto label_244334;
        case 0x244338u: goto label_244338;
        case 0x24433cu: goto label_24433c;
        case 0x244340u: goto label_244340;
        case 0x244344u: goto label_244344;
        case 0x244348u: goto label_244348;
        case 0x24434cu: goto label_24434c;
        case 0x244350u: goto label_244350;
        case 0x244354u: goto label_244354;
        case 0x244358u: goto label_244358;
        case 0x24435cu: goto label_24435c;
        case 0x244360u: goto label_244360;
        case 0x244364u: goto label_244364;
        case 0x244368u: goto label_244368;
        case 0x24436cu: goto label_24436c;
        case 0x244370u: goto label_244370;
        case 0x244374u: goto label_244374;
        case 0x244378u: goto label_244378;
        case 0x24437cu: goto label_24437c;
        case 0x244380u: goto label_244380;
        case 0x244384u: goto label_244384;
        case 0x244388u: goto label_244388;
        case 0x24438cu: goto label_24438c;
        case 0x244390u: goto label_244390;
        case 0x244394u: goto label_244394;
        case 0x244398u: goto label_244398;
        case 0x24439cu: goto label_24439c;
        case 0x2443a0u: goto label_2443a0;
        case 0x2443a4u: goto label_2443a4;
        case 0x2443a8u: goto label_2443a8;
        case 0x2443acu: goto label_2443ac;
        case 0x2443b0u: goto label_2443b0;
        case 0x2443b4u: goto label_2443b4;
        case 0x2443b8u: goto label_2443b8;
        case 0x2443bcu: goto label_2443bc;
        case 0x2443c0u: goto label_2443c0;
        case 0x2443c4u: goto label_2443c4;
        case 0x2443c8u: goto label_2443c8;
        case 0x2443ccu: goto label_2443cc;
        case 0x2443d0u: goto label_2443d0;
        case 0x2443d4u: goto label_2443d4;
        case 0x2443d8u: goto label_2443d8;
        case 0x2443dcu: goto label_2443dc;
        case 0x2443e0u: goto label_2443e0;
        case 0x2443e4u: goto label_2443e4;
        case 0x2443e8u: goto label_2443e8;
        case 0x2443ecu: goto label_2443ec;
        case 0x2443f0u: goto label_2443f0;
        case 0x2443f4u: goto label_2443f4;
        case 0x2443f8u: goto label_2443f8;
        case 0x2443fcu: goto label_2443fc;
        case 0x244400u: goto label_244400;
        case 0x244404u: goto label_244404;
        case 0x244408u: goto label_244408;
        case 0x24440cu: goto label_24440c;
        case 0x244410u: goto label_244410;
        case 0x244414u: goto label_244414;
        case 0x244418u: goto label_244418;
        case 0x24441cu: goto label_24441c;
        case 0x244420u: goto label_244420;
        case 0x244424u: goto label_244424;
        case 0x244428u: goto label_244428;
        case 0x24442cu: goto label_24442c;
        case 0x244430u: goto label_244430;
        case 0x244434u: goto label_244434;
        case 0x244438u: goto label_244438;
        case 0x24443cu: goto label_24443c;
        case 0x244440u: goto label_244440;
        case 0x244444u: goto label_244444;
        case 0x244448u: goto label_244448;
        case 0x24444cu: goto label_24444c;
        case 0x244450u: goto label_244450;
        case 0x244454u: goto label_244454;
        case 0x244458u: goto label_244458;
        case 0x24445cu: goto label_24445c;
        case 0x244460u: goto label_244460;
        case 0x244464u: goto label_244464;
        case 0x244468u: goto label_244468;
        case 0x24446cu: goto label_24446c;
        case 0x244470u: goto label_244470;
        case 0x244474u: goto label_244474;
        case 0x244478u: goto label_244478;
        case 0x24447cu: goto label_24447c;
        case 0x244480u: goto label_244480;
        case 0x244484u: goto label_244484;
        case 0x244488u: goto label_244488;
        case 0x24448cu: goto label_24448c;
        case 0x244490u: goto label_244490;
        case 0x244494u: goto label_244494;
        case 0x244498u: goto label_244498;
        case 0x24449cu: goto label_24449c;
        case 0x2444a0u: goto label_2444a0;
        case 0x2444a4u: goto label_2444a4;
        case 0x2444a8u: goto label_2444a8;
        case 0x2444acu: goto label_2444ac;
        case 0x2444b0u: goto label_2444b0;
        case 0x2444b4u: goto label_2444b4;
        case 0x2444b8u: goto label_2444b8;
        case 0x2444bcu: goto label_2444bc;
        case 0x2444c0u: goto label_2444c0;
        case 0x2444c4u: goto label_2444c4;
        case 0x2444c8u: goto label_2444c8;
        case 0x2444ccu: goto label_2444cc;
        case 0x2444d0u: goto label_2444d0;
        case 0x2444d4u: goto label_2444d4;
        case 0x2444d8u: goto label_2444d8;
        case 0x2444dcu: goto label_2444dc;
        case 0x2444e0u: goto label_2444e0;
        case 0x2444e4u: goto label_2444e4;
        case 0x2444e8u: goto label_2444e8;
        case 0x2444ecu: goto label_2444ec;
        case 0x2444f0u: goto label_2444f0;
        case 0x2444f4u: goto label_2444f4;
        case 0x2444f8u: goto label_2444f8;
        case 0x2444fcu: goto label_2444fc;
        case 0x244500u: goto label_244500;
        case 0x244504u: goto label_244504;
        case 0x244508u: goto label_244508;
        case 0x24450cu: goto label_24450c;
        case 0x244510u: goto label_244510;
        case 0x244514u: goto label_244514;
        case 0x244518u: goto label_244518;
        case 0x24451cu: goto label_24451c;
        case 0x244520u: goto label_244520;
        case 0x244524u: goto label_244524;
        case 0x244528u: goto label_244528;
        case 0x24452cu: goto label_24452c;
        case 0x244530u: goto label_244530;
        case 0x244534u: goto label_244534;
        case 0x244538u: goto label_244538;
        case 0x24453cu: goto label_24453c;
        case 0x244540u: goto label_244540;
        case 0x244544u: goto label_244544;
        case 0x244548u: goto label_244548;
        case 0x24454cu: goto label_24454c;
        case 0x244550u: goto label_244550;
        case 0x244554u: goto label_244554;
        case 0x244558u: goto label_244558;
        case 0x24455cu: goto label_24455c;
        case 0x244560u: goto label_244560;
        case 0x244564u: goto label_244564;
        case 0x244568u: goto label_244568;
        case 0x24456cu: goto label_24456c;
        case 0x244570u: goto label_244570;
        case 0x244574u: goto label_244574;
        case 0x244578u: goto label_244578;
        case 0x24457cu: goto label_24457c;
        case 0x244580u: goto label_244580;
        case 0x244584u: goto label_244584;
        case 0x244588u: goto label_244588;
        case 0x24458cu: goto label_24458c;
        case 0x244590u: goto label_244590;
        case 0x244594u: goto label_244594;
        case 0x244598u: goto label_244598;
        case 0x24459cu: goto label_24459c;
        case 0x2445a0u: goto label_2445a0;
        case 0x2445a4u: goto label_2445a4;
        case 0x2445a8u: goto label_2445a8;
        case 0x2445acu: goto label_2445ac;
        case 0x2445b0u: goto label_2445b0;
        case 0x2445b4u: goto label_2445b4;
        case 0x2445b8u: goto label_2445b8;
        case 0x2445bcu: goto label_2445bc;
        case 0x2445c0u: goto label_2445c0;
        case 0x2445c4u: goto label_2445c4;
        case 0x2445c8u: goto label_2445c8;
        case 0x2445ccu: goto label_2445cc;
        case 0x2445d0u: goto label_2445d0;
        case 0x2445d4u: goto label_2445d4;
        case 0x2445d8u: goto label_2445d8;
        case 0x2445dcu: goto label_2445dc;
        case 0x2445e0u: goto label_2445e0;
        case 0x2445e4u: goto label_2445e4;
        case 0x2445e8u: goto label_2445e8;
        case 0x2445ecu: goto label_2445ec;
        case 0x2445f0u: goto label_2445f0;
        case 0x2445f4u: goto label_2445f4;
        case 0x2445f8u: goto label_2445f8;
        case 0x2445fcu: goto label_2445fc;
        case 0x244600u: goto label_244600;
        case 0x244604u: goto label_244604;
        case 0x244608u: goto label_244608;
        case 0x24460cu: goto label_24460c;
        case 0x244610u: goto label_244610;
        case 0x244614u: goto label_244614;
        case 0x244618u: goto label_244618;
        case 0x24461cu: goto label_24461c;
        case 0x244620u: goto label_244620;
        case 0x244624u: goto label_244624;
        case 0x244628u: goto label_244628;
        case 0x24462cu: goto label_24462c;
        case 0x244630u: goto label_244630;
        case 0x244634u: goto label_244634;
        case 0x244638u: goto label_244638;
        case 0x24463cu: goto label_24463c;
        case 0x244640u: goto label_244640;
        case 0x244644u: goto label_244644;
        case 0x244648u: goto label_244648;
        case 0x24464cu: goto label_24464c;
        case 0x244650u: goto label_244650;
        case 0x244654u: goto label_244654;
        case 0x244658u: goto label_244658;
        case 0x24465cu: goto label_24465c;
        case 0x244660u: goto label_244660;
        case 0x244664u: goto label_244664;
        case 0x244668u: goto label_244668;
        case 0x24466cu: goto label_24466c;
        case 0x244670u: goto label_244670;
        case 0x244674u: goto label_244674;
        case 0x244678u: goto label_244678;
        case 0x24467cu: goto label_24467c;
        case 0x244680u: goto label_244680;
        case 0x244684u: goto label_244684;
        case 0x244688u: goto label_244688;
        case 0x24468cu: goto label_24468c;
        case 0x244690u: goto label_244690;
        case 0x244694u: goto label_244694;
        case 0x244698u: goto label_244698;
        case 0x24469cu: goto label_24469c;
        case 0x2446a0u: goto label_2446a0;
        case 0x2446a4u: goto label_2446a4;
        case 0x2446a8u: goto label_2446a8;
        case 0x2446acu: goto label_2446ac;
        case 0x2446b0u: goto label_2446b0;
        case 0x2446b4u: goto label_2446b4;
        case 0x2446b8u: goto label_2446b8;
        case 0x2446bcu: goto label_2446bc;
        case 0x2446c0u: goto label_2446c0;
        case 0x2446c4u: goto label_2446c4;
        case 0x2446c8u: goto label_2446c8;
        case 0x2446ccu: goto label_2446cc;
        case 0x2446d0u: goto label_2446d0;
        case 0x2446d4u: goto label_2446d4;
        case 0x2446d8u: goto label_2446d8;
        case 0x2446dcu: goto label_2446dc;
        case 0x2446e0u: goto label_2446e0;
        case 0x2446e4u: goto label_2446e4;
        case 0x2446e8u: goto label_2446e8;
        case 0x2446ecu: goto label_2446ec;
        case 0x2446f0u: goto label_2446f0;
        case 0x2446f4u: goto label_2446f4;
        case 0x2446f8u: goto label_2446f8;
        case 0x2446fcu: goto label_2446fc;
        case 0x244700u: goto label_244700;
        case 0x244704u: goto label_244704;
        case 0x244708u: goto label_244708;
        case 0x24470cu: goto label_24470c;
        case 0x244710u: goto label_244710;
        case 0x244714u: goto label_244714;
        case 0x244718u: goto label_244718;
        case 0x24471cu: goto label_24471c;
        case 0x244720u: goto label_244720;
        case 0x244724u: goto label_244724;
        case 0x244728u: goto label_244728;
        case 0x24472cu: goto label_24472c;
        case 0x244730u: goto label_244730;
        case 0x244734u: goto label_244734;
        case 0x244738u: goto label_244738;
        case 0x24473cu: goto label_24473c;
        case 0x244740u: goto label_244740;
        case 0x244744u: goto label_244744;
        case 0x244748u: goto label_244748;
        case 0x24474cu: goto label_24474c;
        case 0x244750u: goto label_244750;
        case 0x244754u: goto label_244754;
        case 0x244758u: goto label_244758;
        case 0x24475cu: goto label_24475c;
        case 0x244760u: goto label_244760;
        case 0x244764u: goto label_244764;
        case 0x244768u: goto label_244768;
        case 0x24476cu: goto label_24476c;
        case 0x244770u: goto label_244770;
        case 0x244774u: goto label_244774;
        case 0x244778u: goto label_244778;
        case 0x24477cu: goto label_24477c;
        case 0x244780u: goto label_244780;
        case 0x244784u: goto label_244784;
        case 0x244788u: goto label_244788;
        case 0x24478cu: goto label_24478c;
        case 0x244790u: goto label_244790;
        case 0x244794u: goto label_244794;
        case 0x244798u: goto label_244798;
        case 0x24479cu: goto label_24479c;
        case 0x2447a0u: goto label_2447a0;
        case 0x2447a4u: goto label_2447a4;
        case 0x2447a8u: goto label_2447a8;
        case 0x2447acu: goto label_2447ac;
        case 0x2447b0u: goto label_2447b0;
        case 0x2447b4u: goto label_2447b4;
        case 0x2447b8u: goto label_2447b8;
        case 0x2447bcu: goto label_2447bc;
        case 0x2447c0u: goto label_2447c0;
        case 0x2447c4u: goto label_2447c4;
        case 0x2447c8u: goto label_2447c8;
        case 0x2447ccu: goto label_2447cc;
        case 0x2447d0u: goto label_2447d0;
        case 0x2447d4u: goto label_2447d4;
        case 0x2447d8u: goto label_2447d8;
        case 0x2447dcu: goto label_2447dc;
        case 0x2447e0u: goto label_2447e0;
        case 0x2447e4u: goto label_2447e4;
        case 0x2447e8u: goto label_2447e8;
        case 0x2447ecu: goto label_2447ec;
        case 0x2447f0u: goto label_2447f0;
        case 0x2447f4u: goto label_2447f4;
        case 0x2447f8u: goto label_2447f8;
        case 0x2447fcu: goto label_2447fc;
        case 0x244800u: goto label_244800;
        case 0x244804u: goto label_244804;
        case 0x244808u: goto label_244808;
        case 0x24480cu: goto label_24480c;
        case 0x244810u: goto label_244810;
        case 0x244814u: goto label_244814;
        case 0x244818u: goto label_244818;
        case 0x24481cu: goto label_24481c;
        case 0x244820u: goto label_244820;
        case 0x244824u: goto label_244824;
        case 0x244828u: goto label_244828;
        case 0x24482cu: goto label_24482c;
        case 0x244830u: goto label_244830;
        case 0x244834u: goto label_244834;
        case 0x244838u: goto label_244838;
        case 0x24483cu: goto label_24483c;
        case 0x244840u: goto label_244840;
        case 0x244844u: goto label_244844;
        case 0x244848u: goto label_244848;
        case 0x24484cu: goto label_24484c;
        case 0x244850u: goto label_244850;
        case 0x244854u: goto label_244854;
        case 0x244858u: goto label_244858;
        case 0x24485cu: goto label_24485c;
        case 0x244860u: goto label_244860;
        case 0x244864u: goto label_244864;
        case 0x244868u: goto label_244868;
        case 0x24486cu: goto label_24486c;
        case 0x244870u: goto label_244870;
        case 0x244874u: goto label_244874;
        case 0x244878u: goto label_244878;
        case 0x24487cu: goto label_24487c;
        case 0x244880u: goto label_244880;
        case 0x244884u: goto label_244884;
        case 0x244888u: goto label_244888;
        case 0x24488cu: goto label_24488c;
        case 0x244890u: goto label_244890;
        case 0x244894u: goto label_244894;
        case 0x244898u: goto label_244898;
        case 0x24489cu: goto label_24489c;
        case 0x2448a0u: goto label_2448a0;
        case 0x2448a4u: goto label_2448a4;
        case 0x2448a8u: goto label_2448a8;
        case 0x2448acu: goto label_2448ac;
        case 0x2448b0u: goto label_2448b0;
        case 0x2448b4u: goto label_2448b4;
        case 0x2448b8u: goto label_2448b8;
        case 0x2448bcu: goto label_2448bc;
        case 0x2448c0u: goto label_2448c0;
        case 0x2448c4u: goto label_2448c4;
        case 0x2448c8u: goto label_2448c8;
        case 0x2448ccu: goto label_2448cc;
        case 0x2448d0u: goto label_2448d0;
        case 0x2448d4u: goto label_2448d4;
        case 0x2448d8u: goto label_2448d8;
        case 0x2448dcu: goto label_2448dc;
        case 0x2448e0u: goto label_2448e0;
        case 0x2448e4u: goto label_2448e4;
        case 0x2448e8u: goto label_2448e8;
        case 0x2448ecu: goto label_2448ec;
        case 0x2448f0u: goto label_2448f0;
        case 0x2448f4u: goto label_2448f4;
        case 0x2448f8u: goto label_2448f8;
        case 0x2448fcu: goto label_2448fc;
        case 0x244900u: goto label_244900;
        case 0x244904u: goto label_244904;
        case 0x244908u: goto label_244908;
        case 0x24490cu: goto label_24490c;
        case 0x244910u: goto label_244910;
        case 0x244914u: goto label_244914;
        case 0x244918u: goto label_244918;
        case 0x24491cu: goto label_24491c;
        case 0x244920u: goto label_244920;
        case 0x244924u: goto label_244924;
        case 0x244928u: goto label_244928;
        case 0x24492cu: goto label_24492c;
        case 0x244930u: goto label_244930;
        case 0x244934u: goto label_244934;
        case 0x244938u: goto label_244938;
        case 0x24493cu: goto label_24493c;
        case 0x244940u: goto label_244940;
        case 0x244944u: goto label_244944;
        case 0x244948u: goto label_244948;
        case 0x24494cu: goto label_24494c;
        case 0x244950u: goto label_244950;
        case 0x244954u: goto label_244954;
        case 0x244958u: goto label_244958;
        case 0x24495cu: goto label_24495c;
        case 0x244960u: goto label_244960;
        case 0x244964u: goto label_244964;
        case 0x244968u: goto label_244968;
        case 0x24496cu: goto label_24496c;
        case 0x244970u: goto label_244970;
        case 0x244974u: goto label_244974;
        case 0x244978u: goto label_244978;
        case 0x24497cu: goto label_24497c;
        case 0x244980u: goto label_244980;
        case 0x244984u: goto label_244984;
        case 0x244988u: goto label_244988;
        case 0x24498cu: goto label_24498c;
        case 0x244990u: goto label_244990;
        case 0x244994u: goto label_244994;
        case 0x244998u: goto label_244998;
        case 0x24499cu: goto label_24499c;
        default: break;
    }

    ctx->pc = 0x243ca0u;

label_243ca0:
    // 0x243ca0: 0x27bdfe10  addiu       $sp, $sp, -0x1F0
    ctx->pc = 0x243ca0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966800));
label_243ca4:
    // 0x243ca4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x243ca4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_243ca8:
    // 0x243ca8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x243ca8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_243cac:
    // 0x243cac: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x243cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_243cb0:
    // 0x243cb0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x243cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_243cb4:
    // 0x243cb4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x243cb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_243cb8:
    // 0x243cb8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x243cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_243cbc:
    // 0x243cbc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x243cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_243cc0:
    // 0x243cc0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x243cc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_243cc4:
    // 0x243cc4: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x243cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_243cc8:
    // 0x243cc8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x243cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_243ccc:
    // 0x243ccc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x243cccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_243cd0:
    // 0x243cd0: 0xc08b050  jal         func_22C140
label_243cd4:
    if (ctx->pc == 0x243CD4u) {
        ctx->pc = 0x243CD4u;
            // 0x243cd4: 0x87849588  lh          $a0, -0x6A78($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940040)));
        ctx->pc = 0x243CD8u;
        goto label_243cd8;
    }
    ctx->pc = 0x243CD0u;
    SET_GPR_U32(ctx, 31, 0x243CD8u);
    ctx->pc = 0x243CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243CD0u;
            // 0x243cd4: 0x87849588  lh          $a0, -0x6A78($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940040)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22C140u;
    if (runtime->hasFunction(0x22C140u)) {
        auto targetFn = runtime->lookupFunction(0x22C140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243CD8u; }
        if (ctx->pc != 0x243CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Func_MenuItemBrdPosStep__Fi_0x22c140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243CD8u; }
        if (ctx->pc != 0x243CD8u) { return; }
    }
    ctx->pc = 0x243CD8u;
label_243cd8:
    // 0x243cd8: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x243cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_243cdc:
    // 0x243cdc: 0x838296c4  lb          $v0, -0x693C($gp)
    ctx->pc = 0x243cdcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940356)));
label_243ce0:
    // 0x243ce0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_243ce4:
    if (ctx->pc == 0x243CE4u) {
        ctx->pc = 0x243CE4u;
            // 0x243ce4: 0x8c7e0070  lw          $fp, 0x70($v1) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
        ctx->pc = 0x243CE8u;
        goto label_243ce8;
    }
    ctx->pc = 0x243CE0u;
    {
        const bool branch_taken_0x243ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243CE0u;
            // 0x243ce4: 0x8c7e0070  lw          $fp, 0x70($v1) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243ce0) {
            ctx->pc = 0x243CF4u;
            goto label_243cf4;
        }
    }
    ctx->pc = 0x243CE8u;
label_243ce8:
    // 0x243ce8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x243ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_243cec:
    // 0x243cec: 0xa38096c0  sb          $zero, -0x6940($gp)
    ctx->pc = 0x243cecu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940352), (uint8_t)GPR_U32(ctx, 0));
label_243cf0:
    // 0x243cf0: 0xa38296c4  sb          $v0, -0x693C($gp)
    ctx->pc = 0x243cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940356), (uint8_t)GPR_U32(ctx, 2));
label_243cf4:
    // 0x243cf4: 0xc087940  jal         func_21E500
label_243cf8:
    if (ctx->pc == 0x243CF8u) {
        ctx->pc = 0x243CF8u;
            // 0x243cf8: 0x8f849510  lw          $a0, -0x6AF0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939920)));
        ctx->pc = 0x243CFCu;
        goto label_243cfc;
    }
    ctx->pc = 0x243CF4u;
    SET_GPR_U32(ctx, 31, 0x243CFCu);
    ctx->pc = 0x243CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243CF4u;
            // 0x243cf8: 0x8f849510  lw          $a0, -0x6AF0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939920)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E500u;
    if (runtime->hasFunction(0x21E500u)) {
        auto targetFn = runtime->lookupFunction(0x21E500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243CFCu; }
        if (ctx->pc != 0x243CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckMove__13CMenuMoveItemFv_0x21e500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243CFCu; }
        if (ctx->pc != 0x243CFCu) { return; }
    }
    ctx->pc = 0x243CFCu;
label_243cfc:
    // 0x243cfc: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x243cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_243d00:
    // 0x243d00: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x243d00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243d04:
    // 0x243d04: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x243d04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243d08:
    // 0x243d08: 0x278383b0  addiu       $v1, $gp, -0x7C50
    ctx->pc = 0x243d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935472));
label_243d0c:
    // 0x243d0c: 0x86820110  lh          $v0, 0x110($s4)
    ctx->pc = 0x243d0cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 272)));
label_243d10:
    // 0x243d10: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x243d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_243d14:
    // 0x243d14: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x243d14u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_243d18:
    // 0x243d18: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_243d1c:
    if (ctx->pc == 0x243D1Cu) {
        ctx->pc = 0x243D1Cu;
            // 0x243d1c: 0x2911021  addu        $v0, $s4, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
        ctx->pc = 0x243D20u;
        goto label_243d20;
    }
    ctx->pc = 0x243D18u;
    {
        const bool branch_taken_0x243d18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x243D1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243D18u;
            // 0x243d1c: 0x2911021  addu        $v0, $s4, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243d18) {
            ctx->pc = 0x243D38u;
            goto label_243d38;
        }
    }
    ctx->pc = 0x243D20u;
label_243d20:
    // 0x243d20: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x243d20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_243d24:
    // 0x243d24: 0x8c440180  lw          $a0, 0x180($v0)
    ctx->pc = 0x243d24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
label_243d28:
    // 0x243d28: 0xc08a240  jal         func_228900
label_243d2c:
    if (ctx->pc == 0x243D2Cu) {
        ctx->pc = 0x243D2Cu;
            // 0x243d2c: 0x24a5b1d0  addiu       $a1, $a1, -0x4E30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947280));
        ctx->pc = 0x243D30u;
        goto label_243d30;
    }
    ctx->pc = 0x243D28u;
    SET_GPR_U32(ctx, 31, 0x243D30u);
    ctx->pc = 0x243D2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243D28u;
            // 0x243d2c: 0x24a5b1d0  addiu       $a1, $a1, -0x4E30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228900u;
    if (runtime->hasFunction(0x228900u)) {
        auto targetFn = runtime->lookupFunction(0x228900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243D30u; }
        if (ctx->pc != 0x243D30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAction__16CMenuPosDataFormFPc_0x228900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243D30u; }
        if (ctx->pc != 0x243D30u) { return; }
    }
    ctx->pc = 0x243D30u;
label_243d30:
    // 0x243d30: 0x10000016  b           . + 4 + (0x16 << 2)
label_243d34:
    if (ctx->pc == 0x243D34u) {
        ctx->pc = 0x243D38u;
        goto label_243d38;
    }
    ctx->pc = 0x243D30u;
    {
        const bool branch_taken_0x243d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243d30) {
            ctx->pc = 0x243D8Cu;
            goto label_243d8c;
        }
    }
    ctx->pc = 0x243D38u;
label_243d38:
    // 0x243d38: 0x2911021  addu        $v0, $s4, $s1
    ctx->pc = 0x243d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
label_243d3c:
    // 0x243d3c: 0x8c440180  lw          $a0, 0x180($v0)
    ctx->pc = 0x243d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
label_243d40:
    // 0x243d40: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x243d40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_243d44:
    // 0x243d44: 0x24520180  addiu       $s2, $v0, 0x180
    ctx->pc = 0x243d44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
label_243d48:
    // 0x243d48: 0xc08a240  jal         func_228900
label_243d4c:
    if (ctx->pc == 0x243D4Cu) {
        ctx->pc = 0x243D4Cu;
            // 0x243d4c: 0x24a5ad30  addiu       $a1, $a1, -0x52D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946096));
        ctx->pc = 0x243D50u;
        goto label_243d50;
    }
    ctx->pc = 0x243D48u;
    SET_GPR_U32(ctx, 31, 0x243D50u);
    ctx->pc = 0x243D4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243D48u;
            // 0x243d4c: 0x24a5ad30  addiu       $a1, $a1, -0x52D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228900u;
    if (runtime->hasFunction(0x228900u)) {
        auto targetFn = runtime->lookupFunction(0x228900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243D50u; }
        if (ctx->pc != 0x243D50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAction__16CMenuPosDataFormFPc_0x228900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243D50u; }
        if (ctx->pc != 0x243D50u) { return; }
    }
    ctx->pc = 0x243D50u;
label_243d50:
    // 0x243d50: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x243d50u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_243d54:
    // 0x243d54: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x243d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_243d58:
    // 0x243d58: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
label_243d5c:
    if (ctx->pc == 0x243D5Cu) {
        ctx->pc = 0x243D60u;
        goto label_243d60;
    }
    ctx->pc = 0x243D58u;
    {
        const bool branch_taken_0x243d58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x243d58) {
            ctx->pc = 0x243D8Cu;
            goto label_243d8c;
        }
    }
    ctx->pc = 0x243D60u;
label_243d60:
    // 0x243d60: 0xc08ca8c  jal         func_232A30
label_243d64:
    if (ctx->pc == 0x243D64u) {
        ctx->pc = 0x243D68u;
        goto label_243d68;
    }
    ctx->pc = 0x243D60u;
    SET_GPR_U32(ctx, 31, 0x243D68u);
    ctx->pc = 0x232A30u;
    if (runtime->hasFunction(0x232A30u)) {
        auto targetFn = runtime->lookupFunction(0x232A30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243D68u; }
        if (ctx->pc != 0x243D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckTrushMenu__Fv_0x232a30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243D68u; }
        if (ctx->pc != 0x243D68u) { return; }
    }
    ctx->pc = 0x243D68u;
label_243d68:
    // 0x243d68: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_243d6c:
    if (ctx->pc == 0x243D6Cu) {
        ctx->pc = 0x243D70u;
        goto label_243d70;
    }
    ctx->pc = 0x243D68u;
    {
        const bool branch_taken_0x243d68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x243d68) {
            ctx->pc = 0x243D8Cu;
            goto label_243d8c;
        }
    }
    ctx->pc = 0x243D70u;
label_243d70:
    // 0x243d70: 0x92820170  lbu         $v0, 0x170($s4)
    ctx->pc = 0x243d70u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 368)));
label_243d74:
    // 0x243d74: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_243d78:
    if (ctx->pc == 0x243D78u) {
        ctx->pc = 0x243D7Cu;
        goto label_243d7c;
    }
    ctx->pc = 0x243D74u;
    {
        const bool branch_taken_0x243d74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x243d74) {
            ctx->pc = 0x243D8Cu;
            goto label_243d8c;
        }
    }
    ctx->pc = 0x243D7Cu;
label_243d7c:
    // 0x243d7c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x243d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_243d80:
    // 0x243d80: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x243d80u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_243d84:
    // 0x243d84: 0xc08a240  jal         func_228900
label_243d88:
    if (ctx->pc == 0x243D88u) {
        ctx->pc = 0x243D88u;
            // 0x243d88: 0x24a5b1d0  addiu       $a1, $a1, -0x4E30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947280));
        ctx->pc = 0x243D8Cu;
        goto label_243d8c;
    }
    ctx->pc = 0x243D84u;
    SET_GPR_U32(ctx, 31, 0x243D8Cu);
    ctx->pc = 0x243D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243D84u;
            // 0x243d88: 0x24a5b1d0  addiu       $a1, $a1, -0x4E30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228900u;
    if (runtime->hasFunction(0x228900u)) {
        auto targetFn = runtime->lookupFunction(0x228900u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243D8Cu; }
        if (ctx->pc != 0x243D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetAction__16CMenuPosDataFormFPc_0x228900(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243D8Cu; }
        if (ctx->pc != 0x243D8Cu) { return; }
    }
    ctx->pc = 0x243D8Cu;
label_243d8c:
    // 0x243d8c: 0x0  nop
    ctx->pc = 0x243d8cu;
    // NOP
label_243d90:
    // 0x243d90: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x243d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
label_243d94:
    // 0x243d94: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x243d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_243d98:
    // 0x243d98: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x243d98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_243d9c:
    // 0x243d9c: 0xac4300b0  sw          $v1, 0xB0($v0)
    ctx->pc = 0x243d9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 176), GPR_U32(ctx, 3));
label_243da0:
    // 0x243da0: 0x2a020006  slti        $v0, $s0, 0x6
    ctx->pc = 0x243da0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
label_243da4:
    // 0x243da4: 0x1440ffd8  bnez        $v0, . + 4 + (-0x28 << 2)
label_243da8:
    if (ctx->pc == 0x243DA8u) {
        ctx->pc = 0x243DA8u;
            // 0x243da8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x243DACu;
        goto label_243dac;
    }
    ctx->pc = 0x243DA4u;
    {
        const bool branch_taken_0x243da4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243DA4u;
            // 0x243da8: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243da4) {
            ctx->pc = 0x243D08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_243d08;
        }
    }
    ctx->pc = 0x243DACu;
label_243dac:
    // 0x243dac: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x243dacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_243db0:
    // 0x243db0: 0xc093624  jal         func_24D890
label_243db4:
    if (ctx->pc == 0x243DB4u) {
        ctx->pc = 0x243DB4u;
            // 0x243db4: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x243DB8u;
        goto label_243db8;
    }
    ctx->pc = 0x243DB0u;
    SET_GPR_U32(ctx, 31, 0x243DB8u);
    ctx->pc = 0x243DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243DB0u;
            // 0x243db4: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24D890u;
    if (runtime->hasFunction(0x24D890u)) {
        auto targetFn = runtime->lookupFunction(0x24D890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243DB8u; }
        if (ctx->pc != 0x243DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemInfoCursorSet__Fi_0x24d890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243DB8u; }
        if (ctx->pc != 0x243DB8u) { return; }
    }
    ctx->pc = 0x243DB8u;
label_243db8:
    // 0x243db8: 0x8e830180  lw          $v1, 0x180($s4)
    ctx->pc = 0x243db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 384)));
label_243dbc:
    // 0x243dbc: 0x3c02c334  lui         $v0, 0xC334
    ctx->pc = 0x243dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49972 << 16));
label_243dc0:
    // 0x243dc0: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x243dc0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_243dc4:
    // 0x243dc4: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x243dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243dc8:
    // 0x243dc8: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x243dc8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243dcc:
    // 0x243dcc: 0x0  nop
    ctx->pc = 0x243dccu;
    // NOP
label_243dd0:
    // 0x243dd0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_243dd4:
    if (ctx->pc == 0x243DD4u) {
        ctx->pc = 0x243DD4u;
            // 0x243dd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x243DD8u;
        goto label_243dd8;
    }
    ctx->pc = 0x243DD0u;
    {
        const bool branch_taken_0x243dd0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x243DD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243DD0u;
            // 0x243dd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243dd0) {
            ctx->pc = 0x243DE0u;
            goto label_243de0;
        }
    }
    ctx->pc = 0x243DD8u;
label_243dd8:
    // 0x243dd8: 0x1000000b  b           . + 4 + (0xB << 2)
label_243ddc:
    if (ctx->pc == 0x243DDCu) {
        ctx->pc = 0x243DDCu;
            // 0x243ddc: 0xa0600001  sb          $zero, 0x1($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x243DE0u;
        goto label_243de0;
    }
    ctx->pc = 0x243DD8u;
    {
        const bool branch_taken_0x243dd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243DD8u;
            // 0x243ddc: 0xa0600001  sb          $zero, 0x1($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243dd8) {
            ctx->pc = 0x243E08u;
            goto label_243e08;
        }
    }
    ctx->pc = 0x243DE0u;
label_243de0:
    // 0x243de0: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x243de0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
label_243de4:
    // 0x243de4: 0x8e830180  lw          $v1, 0x180($s4)
    ctx->pc = 0x243de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 384)));
label_243de8:
    // 0x243de8: 0x90620058  lbu         $v0, 0x58($v1)
    ctx->pc = 0x243de8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 88)));
label_243dec:
    // 0x243dec: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
label_243df0:
    if (ctx->pc == 0x243DF0u) {
        ctx->pc = 0x243DF0u;
            // 0x243df0: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x243DF4u;
        goto label_243df4;
    }
    ctx->pc = 0x243DECu;
    {
        const bool branch_taken_0x243dec = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x243DF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243DECu;
            // 0x243df0: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243dec) {
            ctx->pc = 0x243DF8u;
            goto label_243df8;
        }
    }
    ctx->pc = 0x243DF4u;
label_243df4:
    // 0x243df4: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x243df4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_243df8:
    // 0x243df8: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x243df8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_243dfc:
    // 0x243dfc: 0x8c24d8c0  lw          $a0, -0x2740($at)
    ctx->pc = 0x243dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957248)));
label_243e00:
    // 0x243e00: 0xc0928bc  jal         func_24A2F0
label_243e04:
    if (ctx->pc == 0x243E04u) {
        ctx->pc = 0x243E04u;
            // 0x243e04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243E08u;
        goto label_243e08;
    }
    ctx->pc = 0x243E00u;
    SET_GPR_U32(ctx, 31, 0x243E08u);
    ctx->pc = 0x243E04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243E00u;
            // 0x243e04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24A2F0u;
    if (runtime->hasFunction(0x24A2F0u)) {
        auto targetFn = runtime->lookupFunction(0x24A2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243E08u; }
        if (ctx->pc != 0x243E08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemCharaViewCheck__FP10CHARA_DATAii_0x24a2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243E08u; }
        if (ctx->pc != 0x243E08u) { return; }
    }
    ctx->pc = 0x243E08u;
label_243e08:
    // 0x243e08: 0x8e830184  lw          $v1, 0x184($s4)
    ctx->pc = 0x243e08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 388)));
label_243e0c:
    // 0x243e0c: 0x3c02c334  lui         $v0, 0xC334
    ctx->pc = 0x243e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49972 << 16));
label_243e10:
    // 0x243e10: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x243e10u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_243e14:
    // 0x243e14: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x243e14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243e18:
    // 0x243e18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x243e18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243e1c:
    // 0x243e1c: 0x0  nop
    ctx->pc = 0x243e1cu;
    // NOP
label_243e20:
    // 0x243e20: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_243e24:
    if (ctx->pc == 0x243E24u) {
        ctx->pc = 0x243E24u;
            // 0x243e24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x243E28u;
        goto label_243e28;
    }
    ctx->pc = 0x243E20u;
    {
        const bool branch_taken_0x243e20 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x243E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243E20u;
            // 0x243e24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243e20) {
            ctx->pc = 0x243E30u;
            goto label_243e30;
        }
    }
    ctx->pc = 0x243E28u;
label_243e28:
    // 0x243e28: 0x1000000b  b           . + 4 + (0xB << 2)
label_243e2c:
    if (ctx->pc == 0x243E2Cu) {
        ctx->pc = 0x243E2Cu;
            // 0x243e2c: 0xa0600001  sb          $zero, 0x1($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x243E30u;
        goto label_243e30;
    }
    ctx->pc = 0x243E28u;
    {
        const bool branch_taken_0x243e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243E28u;
            // 0x243e2c: 0xa0600001  sb          $zero, 0x1($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243e28) {
            ctx->pc = 0x243E58u;
            goto label_243e58;
        }
    }
    ctx->pc = 0x243E30u;
label_243e30:
    // 0x243e30: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x243e30u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
label_243e34:
    // 0x243e34: 0x8e830184  lw          $v1, 0x184($s4)
    ctx->pc = 0x243e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 388)));
label_243e38:
    // 0x243e38: 0x90620058  lbu         $v0, 0x58($v1)
    ctx->pc = 0x243e38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 88)));
label_243e3c:
    // 0x243e3c: 0x1c400002  bgtz        $v0, . + 4 + (0x2 << 2)
label_243e40:
    if (ctx->pc == 0x243E40u) {
        ctx->pc = 0x243E40u;
            // 0x243e40: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x243E44u;
        goto label_243e44;
    }
    ctx->pc = 0x243E3Cu;
    {
        const bool branch_taken_0x243e3c = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x243E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243E3Cu;
            // 0x243e40: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243e3c) {
            ctx->pc = 0x243E48u;
            goto label_243e48;
        }
    }
    ctx->pc = 0x243E44u;
label_243e44:
    // 0x243e44: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x243e44u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_243e48:
    // 0x243e48: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x243e48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_243e4c:
    // 0x243e4c: 0x8c24d8c4  lw          $a0, -0x273C($at)
    ctx->pc = 0x243e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957252)));
label_243e50:
    // 0x243e50: 0xc0928bc  jal         func_24A2F0
label_243e54:
    if (ctx->pc == 0x243E54u) {
        ctx->pc = 0x243E54u;
            // 0x243e54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x243E58u;
        goto label_243e58;
    }
    ctx->pc = 0x243E50u;
    SET_GPR_U32(ctx, 31, 0x243E58u);
    ctx->pc = 0x243E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243E50u;
            // 0x243e54: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24A2F0u;
    if (runtime->hasFunction(0x24A2F0u)) {
        auto targetFn = runtime->lookupFunction(0x24A2F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243E58u; }
        if (ctx->pc != 0x243E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemCharaViewCheck__FP10CHARA_DATAii_0x24a2f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243E58u; }
        if (ctx->pc != 0x243E58u) { return; }
    }
    ctx->pc = 0x243E58u;
label_243e58:
    // 0x243e58: 0x8e830188  lw          $v1, 0x188($s4)
    ctx->pc = 0x243e58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 392)));
label_243e5c:
    // 0x243e5c: 0x3c02c32c  lui         $v0, 0xC32C
    ctx->pc = 0x243e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49964 << 16));
label_243e60:
    // 0x243e60: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x243e60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_243e64:
    // 0x243e64: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x243e64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243e68:
    // 0x243e68: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x243e68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243e6c:
    // 0x243e6c: 0x0  nop
    ctx->pc = 0x243e6cu;
    // NOP
label_243e70:
    // 0x243e70: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_243e74:
    if (ctx->pc == 0x243E74u) {
        ctx->pc = 0x243E74u;
            // 0x243e74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x243E78u;
        goto label_243e78;
    }
    ctx->pc = 0x243E70u;
    {
        const bool branch_taken_0x243e70 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x243E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243E70u;
            // 0x243e74: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243e70) {
            ctx->pc = 0x243E80u;
            goto label_243e80;
        }
    }
    ctx->pc = 0x243E78u;
label_243e78:
    // 0x243e78: 0x10000004  b           . + 4 + (0x4 << 2)
label_243e7c:
    if (ctx->pc == 0x243E7Cu) {
        ctx->pc = 0x243E7Cu;
            // 0x243e7c: 0xa0600001  sb          $zero, 0x1($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x243E80u;
        goto label_243e80;
    }
    ctx->pc = 0x243E78u;
    {
        const bool branch_taken_0x243e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243E78u;
            // 0x243e7c: 0xa0600001  sb          $zero, 0x1($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243e78) {
            ctx->pc = 0x243E8Cu;
            goto label_243e8c;
        }
    }
    ctx->pc = 0x243E80u;
label_243e80:
    // 0x243e80: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x243e80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
label_243e84:
    // 0x243e84: 0xc08fd44  jal         func_23F510
label_243e88:
    if (ctx->pc == 0x243E88u) {
        ctx->pc = 0x243E88u;
            // 0x243e88: 0x8e84017c  lw          $a0, 0x17C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 380)));
        ctx->pc = 0x243E8Cu;
        goto label_243e8c;
    }
    ctx->pc = 0x243E84u;
    SET_GPR_U32(ctx, 31, 0x243E8Cu);
    ctx->pc = 0x243E88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243E84u;
            // 0x243e88: 0x8e84017c  lw          $a0, 0x17C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 380)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23F510u;
    if (runtime->hasFunction(0x23F510u)) {
        auto targetFn = runtime->lookupFunction(0x23F510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243E8Cu; }
        if (ctx->pc != 0x243E8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuPosFormValueSetWeapon__FP13CGameDataUsed_0x23f510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243E8Cu; }
        if (ctx->pc != 0x243E8Cu) { return; }
    }
    ctx->pc = 0x243E8Cu;
label_243e8c:
    // 0x243e8c: 0x8e83018c  lw          $v1, 0x18C($s4)
    ctx->pc = 0x243e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 396)));
label_243e90:
    // 0x243e90: 0x3c02c32c  lui         $v0, 0xC32C
    ctx->pc = 0x243e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49964 << 16));
label_243e94:
    // 0x243e94: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x243e94u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_243e98:
    // 0x243e98: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x243e98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243e9c:
    // 0x243e9c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x243e9cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243ea0:
    // 0x243ea0: 0x0  nop
    ctx->pc = 0x243ea0u;
    // NOP
label_243ea4:
    // 0x243ea4: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_243ea8:
    if (ctx->pc == 0x243EA8u) {
        ctx->pc = 0x243EA8u;
            // 0x243ea8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x243EACu;
        goto label_243eac;
    }
    ctx->pc = 0x243EA4u;
    {
        const bool branch_taken_0x243ea4 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x243EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243EA4u;
            // 0x243ea8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243ea4) {
            ctx->pc = 0x243EB4u;
            goto label_243eb4;
        }
    }
    ctx->pc = 0x243EACu;
label_243eac:
    // 0x243eac: 0x10000006  b           . + 4 + (0x6 << 2)
label_243eb0:
    if (ctx->pc == 0x243EB0u) {
        ctx->pc = 0x243EB0u;
            // 0x243eb0: 0xa0600001  sb          $zero, 0x1($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x243EB4u;
        goto label_243eb4;
    }
    ctx->pc = 0x243EACu;
    {
        const bool branch_taken_0x243eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243EACu;
            // 0x243eb0: 0xa0600001  sb          $zero, 0x1($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243eac) {
            ctx->pc = 0x243EC8u;
            goto label_243ec8;
        }
    }
    ctx->pc = 0x243EB4u;
label_243eb4:
    // 0x243eb4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x243eb4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_243eb8:
    // 0x243eb8: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x243eb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
label_243ebc:
    // 0x243ebc: 0x8fa500bc  lw          $a1, 0xBC($sp)
    ctx->pc = 0x243ebcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
label_243ec0:
    // 0x243ec0: 0xc092954  jal         func_24A550
label_243ec4:
    if (ctx->pc == 0x243EC4u) {
        ctx->pc = 0x243EC4u;
            // 0x243ec4: 0x8c24d8c8  lw          $a0, -0x2738($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957256)));
        ctx->pc = 0x243EC8u;
        goto label_243ec8;
    }
    ctx->pc = 0x243EC0u;
    SET_GPR_U32(ctx, 31, 0x243EC8u);
    ctx->pc = 0x243EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243EC0u;
            // 0x243ec4: 0x8c24d8c8  lw          $a0, -0x2738($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957256)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24A550u;
    if (runtime->hasFunction(0x24A550u)) {
        auto targetFn = runtime->lookupFunction(0x24A550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243EC8u; }
        if (ctx->pc != 0x243EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuPosFormValueSetCharaRobo__FP9ROBO_DATAi_0x24a550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243EC8u; }
        if (ctx->pc != 0x243EC8u) { return; }
    }
    ctx->pc = 0x243EC8u;
label_243ec8:
    // 0x243ec8: 0x8e830190  lw          $v1, 0x190($s4)
    ctx->pc = 0x243ec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 400)));
label_243ecc:
    // 0x243ecc: 0x3c02c32c  lui         $v0, 0xC32C
    ctx->pc = 0x243eccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49964 << 16));
label_243ed0:
    // 0x243ed0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x243ed0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_243ed4:
    // 0x243ed4: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x243ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243ed8:
    // 0x243ed8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x243ed8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243edc:
    // 0x243edc: 0x0  nop
    ctx->pc = 0x243edcu;
    // NOP
label_243ee0:
    // 0x243ee0: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_243ee4:
    if (ctx->pc == 0x243EE4u) {
        ctx->pc = 0x243EE4u;
            // 0x243ee4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x243EE8u;
        goto label_243ee8;
    }
    ctx->pc = 0x243EE0u;
    {
        const bool branch_taken_0x243ee0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x243EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243EE0u;
            // 0x243ee4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243ee0) {
            ctx->pc = 0x243EF0u;
            goto label_243ef0;
        }
    }
    ctx->pc = 0x243EE8u;
label_243ee8:
    // 0x243ee8: 0x10000007  b           . + 4 + (0x7 << 2)
label_243eec:
    if (ctx->pc == 0x243EECu) {
        ctx->pc = 0x243EECu;
            // 0x243eec: 0xa0600001  sb          $zero, 0x1($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x243EF0u;
        goto label_243ef0;
    }
    ctx->pc = 0x243EE8u;
    {
        const bool branch_taken_0x243ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243EECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243EE8u;
            // 0x243eec: 0xa0600001  sb          $zero, 0x1($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243ee8) {
            ctx->pc = 0x243F08u;
            goto label_243f08;
        }
    }
    ctx->pc = 0x243EF0u;
label_243ef0:
    // 0x243ef0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x243ef0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_243ef4:
    // 0x243ef4: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x243ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
label_243ef8:
    // 0x243ef8: 0x8c24d8d4  lw          $a0, -0x272C($at)
    ctx->pc = 0x243ef8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957268)));
label_243efc:
    // 0x243efc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x243efcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_243f00:
    // 0x243f00: 0xc092a7c  jal         func_24A9F0
label_243f04:
    if (ctx->pc == 0x243F04u) {
        ctx->pc = 0x243F04u;
            // 0x243f04: 0x8c25d8c4  lw          $a1, -0x273C($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957252)));
        ctx->pc = 0x243F08u;
        goto label_243f08;
    }
    ctx->pc = 0x243F00u;
    SET_GPR_U32(ctx, 31, 0x243F08u);
    ctx->pc = 0x243F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243F00u;
            // 0x243f04: 0x8c25d8c4  lw          $a1, -0x273C($at) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957252)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24A9F0u;
    if (runtime->hasFunction(0x24A9F0u)) {
        auto targetFn = runtime->lookupFunction(0x24A9F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243F08u; }
        if (ctx->pc != 0x243F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuPosFormValueSetMonster__FP16MOS_CHANGE_PARAMP10CHARA_DATA_0x24a9f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243F08u; }
        if (ctx->pc != 0x243F08u) { return; }
    }
    ctx->pc = 0x243F08u;
label_243f08:
    // 0x243f08: 0x8e830194  lw          $v1, 0x194($s4)
    ctx->pc = 0x243f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 404)));
label_243f0c:
    // 0x243f0c: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_243f10:
    if (ctx->pc == 0x243F10u) {
        ctx->pc = 0x243F10u;
            // 0x243f10: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243F14u;
        goto label_243f14;
    }
    ctx->pc = 0x243F0Cu;
    {
        const bool branch_taken_0x243f0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x243F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243F0Cu;
            // 0x243f10: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243f0c) {
            ctx->pc = 0x243F4Cu;
            goto label_243f4c;
        }
    }
    ctx->pc = 0x243F14u;
label_243f14:
    // 0x243f14: 0xc461000c  lwc1        $f1, 0xC($v1)
    ctx->pc = 0x243f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_243f18:
    // 0x243f18: 0x3c02c32c  lui         $v0, 0xC32C
    ctx->pc = 0x243f18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49964 << 16));
label_243f1c:
    // 0x243f1c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x243f1cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_243f20:
    // 0x243f20: 0x0  nop
    ctx->pc = 0x243f20u;
    // NOP
label_243f24:
    // 0x243f24: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x243f24u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_243f28:
    // 0x243f28: 0x0  nop
    ctx->pc = 0x243f28u;
    // NOP
label_243f2c:
    // 0x243f2c: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_243f30:
    if (ctx->pc == 0x243F30u) {
        ctx->pc = 0x243F30u;
            // 0x243f30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x243F34u;
        goto label_243f34;
    }
    ctx->pc = 0x243F2Cu;
    {
        const bool branch_taken_0x243f2c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x243F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243F2Cu;
            // 0x243f30: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243f2c) {
            ctx->pc = 0x243F3Cu;
            goto label_243f3c;
        }
    }
    ctx->pc = 0x243F34u;
label_243f34:
    // 0x243f34: 0x10000004  b           . + 4 + (0x4 << 2)
label_243f38:
    if (ctx->pc == 0x243F38u) {
        ctx->pc = 0x243F38u;
            // 0x243f38: 0xa0600001  sb          $zero, 0x1($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x243F3Cu;
        goto label_243f3c;
    }
    ctx->pc = 0x243F34u;
    {
        const bool branch_taken_0x243f34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243F38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243F34u;
            // 0x243f38: 0xa0600001  sb          $zero, 0x1($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243f34) {
            ctx->pc = 0x243F48u;
            goto label_243f48;
        }
    }
    ctx->pc = 0x243F3Cu;
label_243f3c:
    // 0x243f3c: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x243f3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
label_243f40:
    // 0x243f40: 0xc08fec8  jal         func_23FB20
label_243f44:
    if (ctx->pc == 0x243F44u) {
        ctx->pc = 0x243F44u;
            // 0x243f44: 0x8e84017c  lw          $a0, 0x17C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 380)));
        ctx->pc = 0x243F48u;
        goto label_243f48;
    }
    ctx->pc = 0x243F40u;
    SET_GPR_U32(ctx, 31, 0x243F48u);
    ctx->pc = 0x243F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243F40u;
            // 0x243f44: 0x8e84017c  lw          $a0, 0x17C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 380)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23FB20u;
    if (runtime->hasFunction(0x23FB20u)) {
        auto targetFn = runtime->lookupFunction(0x23FB20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243F48u; }
        if (ctx->pc != 0x243F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuPosFormValueSetFishingRod__FP13CGameDataUsed_0x23fb20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243F48u; }
        if (ctx->pc != 0x243F48u) { return; }
    }
    ctx->pc = 0x243F48u;
label_243f48:
    // 0x243f48: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x243f48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243f4c:
    // 0x243f4c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x243f4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243f50:
    // 0x243f50: 0x86820110  lh          $v0, 0x110($s4)
    ctx->pc = 0x243f50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 272)));
label_243f54:
    // 0x243f54: 0x12220008  beq         $s1, $v0, . + 4 + (0x8 << 2)
label_243f58:
    if (ctx->pc == 0x243F58u) {
        ctx->pc = 0x243F58u;
            // 0x243f58: 0x2901021  addu        $v0, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->pc = 0x243F5Cu;
        goto label_243f5c;
    }
    ctx->pc = 0x243F54u;
    {
        const bool branch_taken_0x243f54 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x243F58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243F54u;
            // 0x243f58: 0x2901021  addu        $v0, $s4, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243f54) {
            ctx->pc = 0x243F78u;
            goto label_243f78;
        }
    }
    ctx->pc = 0x243F5Cu;
label_243f5c:
    // 0x243f5c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x243f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_243f60:
    // 0x243f60: 0x8c440180  lw          $a0, 0x180($v0)
    ctx->pc = 0x243f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
label_243f64:
    // 0x243f64: 0x2406fffc  addiu       $a2, $zero, -0x4
    ctx->pc = 0x243f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_243f68:
    // 0x243f68: 0xc0896cc  jal         func_225B30
label_243f6c:
    if (ctx->pc == 0x243F6Cu) {
        ctx->pc = 0x243F6Cu;
            // 0x243f6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x243F70u;
        goto label_243f70;
    }
    ctx->pc = 0x243F68u;
    SET_GPR_U32(ctx, 31, 0x243F70u);
    ctx->pc = 0x243F6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243F68u;
            // 0x243f6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B30u;
    if (runtime->hasFunction(0x225B30u)) {
        auto targetFn = runtime->lookupFunction(0x225B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243F70u; }
        if (ctx->pc != 0x243F70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRGBACalcParam__16CMenuPosDataFormFiii_0x225b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243F70u; }
        if (ctx->pc != 0x243F70u) { return; }
    }
    ctx->pc = 0x243F70u;
label_243f70:
    // 0x243f70: 0x10000007  b           . + 4 + (0x7 << 2)
label_243f74:
    if (ctx->pc == 0x243F74u) {
        ctx->pc = 0x243F78u;
        goto label_243f78;
    }
    ctx->pc = 0x243F70u;
    {
        const bool branch_taken_0x243f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x243f70) {
            ctx->pc = 0x243F90u;
            goto label_243f90;
        }
    }
    ctx->pc = 0x243F78u;
label_243f78:
    // 0x243f78: 0x2901021  addu        $v0, $s4, $s0
    ctx->pc = 0x243f78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_243f7c:
    // 0x243f7c: 0x8c440180  lw          $a0, 0x180($v0)
    ctx->pc = 0x243f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
label_243f80:
    // 0x243f80: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x243f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_243f84:
    // 0x243f84: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x243f84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_243f88:
    // 0x243f88: 0xc0896cc  jal         func_225B30
label_243f8c:
    if (ctx->pc == 0x243F8Cu) {
        ctx->pc = 0x243F8Cu;
            // 0x243f8c: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x243F90u;
        goto label_243f90;
    }
    ctx->pc = 0x243F88u;
    SET_GPR_U32(ctx, 31, 0x243F90u);
    ctx->pc = 0x243F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243F88u;
            // 0x243f8c: 0x24070080  addiu       $a3, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225B30u;
    if (runtime->hasFunction(0x225B30u)) {
        auto targetFn = runtime->lookupFunction(0x225B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243F90u; }
        if (ctx->pc != 0x243F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetRGBACalcParam__16CMenuPosDataFormFiii_0x225b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243F90u; }
        if (ctx->pc != 0x243F90u) { return; }
    }
    ctx->pc = 0x243F90u;
label_243f90:
    // 0x243f90: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x243f90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_243f94:
    // 0x243f94: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x243f94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_243f98:
    // 0x243f98: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_243f9c:
    if (ctx->pc == 0x243F9Cu) {
        ctx->pc = 0x243F9Cu;
            // 0x243f9c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x243FA0u;
        goto label_243fa0;
    }
    ctx->pc = 0x243F98u;
    {
        const bool branch_taken_0x243f98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243F98u;
            // 0x243f9c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243f98) {
            ctx->pc = 0x243F50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_243f50;
        }
    }
    ctx->pc = 0x243FA0u;
label_243fa0:
    // 0x243fa0: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x243fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_243fa4:
    // 0x243fa4: 0x27a401c8  addiu       $a0, $sp, 0x1C8
    ctx->pc = 0x243fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 456));
label_243fa8:
    // 0x243fa8: 0x24421010  addiu       $v0, $v0, 0x1010
    ctx->pc = 0x243fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4112));
label_243fac:
    // 0x243fac: 0xdc430000  ld          $v1, 0x0($v0)
    ctx->pc = 0x243facu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 0)));
label_243fb0:
    // 0x243fb0: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x243fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_243fb4:
    // 0x243fb4: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x243fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_243fb8:
    // 0x243fb8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x243fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_243fbc:
    // 0x243fbc: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x243fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_243fc0:
    // 0x243fc0: 0x86840116  lh          $a0, 0x116($s4)
    ctx->pc = 0x243fc0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 278)));
label_243fc4:
    // 0x243fc4: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x243fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_243fc8:
    // 0x243fc8: 0xa7a401cc  sh          $a0, 0x1CC($sp)
    ctx->pc = 0x243fc8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 460), (uint16_t)GPR_U32(ctx, 4));
label_243fcc:
    // 0x243fcc: 0xa7a401d2  sh          $a0, 0x1D2($sp)
    ctx->pc = 0x243fccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 466), (uint16_t)GPR_U32(ctx, 4));
label_243fd0:
    // 0x243fd0: 0x846400c2  lh          $a0, 0xC2($v1)
    ctx->pc = 0x243fd0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 194)));
label_243fd4:
    // 0x243fd4: 0x86850110  lh          $a1, 0x110($s4)
    ctx->pc = 0x243fd4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 272)));
label_243fd8:
    // 0x243fd8: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x243fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
label_243fdc:
    // 0x243fdc: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x243fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_243fe0:
    // 0x243fe0: 0x847101c8  lh          $s1, 0x1C8($v1)
    ctx->pc = 0x243fe0u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 456)));
label_243fe4:
    // 0x243fe4: 0x10a20004  beq         $a1, $v0, . + 4 + (0x4 << 2)
label_243fe8:
    if (ctx->pc == 0x243FE8u) {
        ctx->pc = 0x243FE8u;
            // 0x243fe8: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x243FECu;
        goto label_243fec;
    }
    ctx->pc = 0x243FE4u;
    {
        const bool branch_taken_0x243fe4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x243FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243FE4u;
            // 0x243fe8: 0x2412ffff  addiu       $s2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243fe4) {
            ctx->pc = 0x243FF8u;
            goto label_243ff8;
        }
    }
    ctx->pc = 0x243FECu;
label_243fec:
    // 0x243fec: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x243fecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_243ff0:
    // 0x243ff0: 0x14a20004  bne         $a1, $v0, . + 4 + (0x4 << 2)
label_243ff4:
    if (ctx->pc == 0x243FF4u) {
        ctx->pc = 0x243FF8u;
        goto label_243ff8;
    }
    ctx->pc = 0x243FF0u;
    {
        const bool branch_taken_0x243ff0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x243ff0) {
            ctx->pc = 0x244004u;
            goto label_244004;
        }
    }
    ctx->pc = 0x243FF8u;
label_243ff8:
    // 0x243ff8: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x243ff8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_243ffc:
    // 0x243ffc: 0x1000001a  b           . + 4 + (0x1A << 2)
label_244000:
    if (ctx->pc == 0x244000u) {
        ctx->pc = 0x244000u;
            // 0x244000: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x244004u;
        goto label_244004;
    }
    ctx->pc = 0x243FFCu;
    {
        const bool branch_taken_0x243ffc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244000u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243FFCu;
            // 0x244000: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243ffc) {
            ctx->pc = 0x244068u;
            goto label_244068;
        }
    }
    ctx->pc = 0x244004u;
label_244004:
    // 0x244004: 0x1c800009  bgtz        $a0, . + 4 + (0x9 << 2)
label_244008:
    if (ctx->pc == 0x244008u) {
        ctx->pc = 0x24400Cu;
        goto label_24400c;
    }
    ctx->pc = 0x244004u;
    {
        const bool branch_taken_0x244004 = (GPR_S32(ctx, 4) > 0);
        if (branch_taken_0x244004) {
            ctx->pc = 0x24402Cu;
            goto label_24402c;
        }
    }
    ctx->pc = 0x24400Cu;
label_24400c:
    // 0x24400c: 0x86830014  lh          $v1, 0x14($s4)
    ctx->pc = 0x24400cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
label_244010:
    // 0x244010: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x244010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_244014:
    // 0x244014: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_244018:
    if (ctx->pc == 0x244018u) {
        ctx->pc = 0x244018u;
            // 0x244018: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x24401Cu;
        goto label_24401c;
    }
    ctx->pc = 0x244014u;
    {
        const bool branch_taken_0x244014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x244018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244014u;
            // 0x244018: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244014) {
            ctx->pc = 0x244024u;
            goto label_244024;
        }
    }
    ctx->pc = 0x24401Cu;
label_24401c:
    // 0x24401c: 0x14620012  bne         $v1, $v0, . + 4 + (0x12 << 2)
label_244020:
    if (ctx->pc == 0x244020u) {
        ctx->pc = 0x244024u;
        goto label_244024;
    }
    ctx->pc = 0x24401Cu;
    {
        const bool branch_taken_0x24401c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24401c) {
            ctx->pc = 0x244068u;
            goto label_244068;
        }
    }
    ctx->pc = 0x244024u;
label_244024:
    // 0x244024: 0x10000010  b           . + 4 + (0x10 << 2)
label_244028:
    if (ctx->pc == 0x244028u) {
        ctx->pc = 0x244028u;
            // 0x244028: 0x3c0902d  daddu       $s2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24402Cu;
        goto label_24402c;
    }
    ctx->pc = 0x244024u;
    {
        const bool branch_taken_0x244024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244024u;
            // 0x244028: 0x3c0902d  daddu       $s2, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244024) {
            ctx->pc = 0x244068u;
            goto label_244068;
        }
    }
    ctx->pc = 0x24402Cu;
label_24402c:
    // 0x24402c: 0xc0657b0  jal         func_195EC0
label_244030:
    if (ctx->pc == 0x244030u) {
        ctx->pc = 0x244034u;
        goto label_244034;
    }
    ctx->pc = 0x24402Cu;
    SET_GPR_U32(ctx, 31, 0x244034u);
    ctx->pc = 0x195EC0u;
    if (runtime->hasFunction(0x195EC0u)) {
        auto targetFn = runtime->lookupFunction(0x195EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244034u; }
        if (ctx->pc != 0x244034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemDataType__Fi_0x195ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244034u; }
        if (ctx->pc != 0x244034u) { return; }
    }
    ctx->pc = 0x244034u;
label_244034:
    // 0x244034: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x244034u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244038:
    // 0x244038: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x244038u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24403c:
    // 0x24403c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24403cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_244040:
    // 0x244040: 0xc068460  jal         func_1A1180
label_244044:
    if (ctx->pc == 0x244044u) {
        ctx->pc = 0x244044u;
            // 0x244044: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x244048u;
        goto label_244048;
    }
    ctx->pc = 0x244040u;
    SET_GPR_U32(ctx, 31, 0x244048u);
    ctx->pc = 0x244044u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244040u;
            // 0x244044: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1180u;
    if (runtime->hasFunction(0x1A1180u)) {
        auto targetFn = runtime->lookupFunction(0x1A1180u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244048u; }
        if (ctx->pc != 0x244048u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchEquipType__Fii_0x1a1180(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244048u; }
        if (ctx->pc != 0x244048u) { return; }
    }
    ctx->pc = 0x244048u;
label_244048:
    // 0x244048: 0x16620002  bne         $s3, $v0, . + 4 + (0x2 << 2)
label_24404c:
    if (ctx->pc == 0x24404Cu) {
        ctx->pc = 0x244050u;
        goto label_244050;
    }
    ctx->pc = 0x244048u;
    {
        const bool branch_taken_0x244048 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x244048) {
            ctx->pc = 0x244054u;
            goto label_244054;
        }
    }
    ctx->pc = 0x244050u;
label_244050:
    // 0x244050: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x244050u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_244054:
    // 0x244054: 0x0  nop
    ctx->pc = 0x244054u;
    // NOP
label_244058:
    // 0x244058: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x244058u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_24405c:
    // 0x24405c: 0x2a020004  slti        $v0, $s0, 0x4
    ctx->pc = 0x24405cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_244060:
    // 0x244060: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_244064:
    if (ctx->pc == 0x244064u) {
        ctx->pc = 0x244064u;
            // 0x244064: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x244068u;
        goto label_244068;
    }
    ctx->pc = 0x244060u;
    {
        const bool branch_taken_0x244060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x244064u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244060u;
            // 0x244064: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244060) {
            ctx->pc = 0x244040u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_244040;
        }
    }
    ctx->pc = 0x244068u;
label_244068:
    // 0x244068: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x244068u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_24406c:
    // 0x24406c: 0x8c30caa0  lw          $s0, -0x3560($at)
    ctx->pc = 0x24406cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953632)));
label_244070:
    // 0x244070: 0xa391838c  sb          $s1, -0x7C74($gp)
    ctx->pc = 0x244070u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294935436), (uint8_t)GPR_U32(ctx, 17));
label_244074:
    // 0x244074: 0x1200005b  beqz        $s0, . + 4 + (0x5B << 2)
label_244078:
    if (ctx->pc == 0x244078u) {
        ctx->pc = 0x244078u;
            // 0x244078: 0xa3928390  sb          $s2, -0x7C70($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935440), (uint8_t)GPR_U32(ctx, 18));
        ctx->pc = 0x24407Cu;
        goto label_24407c;
    }
    ctx->pc = 0x244074u;
    {
        const bool branch_taken_0x244074 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x244078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244074u;
            // 0x244078: 0xa3928390  sb          $s2, -0x7C70($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935440), (uint8_t)GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244074) {
            ctx->pc = 0x2441E4u;
            goto label_2441e4;
        }
    }
    ctx->pc = 0x24407Cu;
label_24407c:
    // 0x24407c: 0x8e8201a8  lw          $v0, 0x1A8($s4)
    ctx->pc = 0x24407cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 424)));
label_244080:
    // 0x244080: 0x3c044280  lui         $a0, 0x4280
    ctx->pc = 0x244080u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17024 << 16));
label_244084:
    // 0x244084: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x244084u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
label_244088:
    // 0x244088: 0xac440040  sw          $a0, 0x40($v0)
    ctx->pc = 0x244088u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 4));
label_24408c:
    // 0x24408c: 0x8e8201a8  lw          $v0, 0x1A8($s4)
    ctx->pc = 0x24408cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 424)));
label_244090:
    // 0x244090: 0xac440044  sw          $a0, 0x44($v0)
    ctx->pc = 0x244090u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 68), GPR_U32(ctx, 4));
label_244094:
    // 0x244094: 0x8e8201a8  lw          $v0, 0x1A8($s4)
    ctx->pc = 0x244094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 424)));
label_244098:
    // 0x244098: 0xac440048  sw          $a0, 0x48($v0)
    ctx->pc = 0x244098u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 4));
label_24409c:
    // 0x24409c: 0x8e8201a8  lw          $v0, 0x1A8($s4)
    ctx->pc = 0x24409cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 424)));
label_2440a0:
    // 0x2440a0: 0xac43004c  sw          $v1, 0x4C($v0)
    ctx->pc = 0x2440a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 3));
label_2440a4:
    // 0x2440a4: 0x86820110  lh          $v0, 0x110($s4)
    ctx->pc = 0x2440a4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 272)));
label_2440a8:
    // 0x2440a8: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x2440a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2440ac:
    // 0x2440ac: 0x1020004d  beqz        $at, . + 4 + (0x4D << 2)
label_2440b0:
    if (ctx->pc == 0x2440B0u) {
        ctx->pc = 0x2440B0u;
            // 0x2440b0: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2440B4u;
        goto label_2440b4;
    }
    ctx->pc = 0x2440ACu;
    {
        const bool branch_taken_0x2440ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2440B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2440ACu;
            // 0x2440b0: 0x3c030037  lui         $v1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2440ac) {
            ctx->pc = 0x2441E4u;
            goto label_2441e4;
        }
    }
    ctx->pc = 0x2440B4u;
label_2440b4:
    // 0x2440b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2440b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2440b8:
    // 0x2440b8: 0x2463b210  addiu       $v1, $v1, -0x4DF0
    ctx->pc = 0x2440b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947344));
label_2440bc:
    // 0x2440bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2440bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2440c0:
    // 0x2440c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2440c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2440c4:
    // 0x2440c4: 0x400008  jr          $v0
label_2440c8:
    if (ctx->pc == 0x2440C8u) {
        ctx->pc = 0x2440CCu;
        goto label_2440cc;
    }
    ctx->pc = 0x2440C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2440CCu: goto label_2440cc;
            case 0x2441A0u: goto label_2441a0;
            case 0x2441BCu: goto label_2441bc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2440CCu;
label_2440cc:
    // 0x2440cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2440ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2440d0:
    // 0x2440d0: 0x1622002e  bne         $s1, $v0, . + 4 + (0x2E << 2)
label_2440d4:
    if (ctx->pc == 0x2440D4u) {
        ctx->pc = 0x2440D8u;
        goto label_2440d8;
    }
    ctx->pc = 0x2440D0u;
    {
        const bool branch_taken_0x2440d0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x2440d0) {
            ctx->pc = 0x24418Cu;
            goto label_24418c;
        }
    }
    ctx->pc = 0x2440D8u;
label_2440d8:
    // 0x2440d8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2440d8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2440dc:
    // 0x2440dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2440dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2440e0:
    // 0x2440e0: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2440e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2440e4:
    // 0x2440e4: 0x320f809  jalr        $t9
label_2440e8:
    if (ctx->pc == 0x2440E8u) {
        ctx->pc = 0x2440E8u;
            // 0x2440e8: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x2440ECu;
        goto label_2440ec;
    }
    ctx->pc = 0x2440E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2440ECu);
        ctx->pc = 0x2440E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2440E4u;
            // 0x2440e8: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2440ECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2440ECu; }
            if (ctx->pc != 0x2440ECu) { return; }
        }
        }
    }
    ctx->pc = 0x2440ECu;
label_2440ec:
    // 0x2440ec: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2440ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2440f0:
    // 0x2440f0: 0x16420013  bne         $s2, $v0, . + 4 + (0x13 << 2)
label_2440f4:
    if (ctx->pc == 0x2440F4u) {
        ctx->pc = 0x2440F4u;
            // 0x2440f4: 0x27a300d4  addiu       $v1, $sp, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
        ctx->pc = 0x2440F8u;
        goto label_2440f8;
    }
    ctx->pc = 0x2440F0u;
    {
        const bool branch_taken_0x2440f0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2440F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2440F0u;
            // 0x2440f4: 0x27a300d4  addiu       $v1, $sp, 0xD4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2440f0) {
            ctx->pc = 0x244140u;
            goto label_244140;
        }
    }
    ctx->pc = 0x2440F8u;
label_2440f8:
    // 0x2440f8: 0x27a300d4  addiu       $v1, $sp, 0xD4
    ctx->pc = 0x2440f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 212));
label_2440fc:
    // 0x2440fc: 0x3c024049  lui         $v0, 0x4049
    ctx->pc = 0x2440fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16457 << 16));
label_244100:
    // 0x244100: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x244100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_244104:
    // 0x244104: 0x34420fdb  ori         $v0, $v0, 0xFDB
    ctx->pc = 0x244104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4059);
label_244108:
    // 0x244108: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244108u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_24410c:
    // 0x24410c: 0x0  nop
    ctx->pc = 0x24410cu;
    // NOP
label_244110:
    // 0x244110: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x244110u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_244114:
    // 0x244114: 0x0  nop
    ctx->pc = 0x244114u;
    // NOP
label_244118:
    // 0x244118: 0x45000007  bc1f        . + 4 + (0x7 << 2)
label_24411c:
    if (ctx->pc == 0x24411Cu) {
        ctx->pc = 0x24411Cu;
            // 0x24411c: 0x3c023e20  lui         $v0, 0x3E20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15904 << 16));
        ctx->pc = 0x244120u;
        goto label_244120;
    }
    ctx->pc = 0x244118u;
    {
        const bool branch_taken_0x244118 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x24411Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244118u;
            // 0x24411c: 0x3c023e20  lui         $v0, 0x3E20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15904 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244118) {
            ctx->pc = 0x244138u;
            goto label_244138;
        }
    }
    ctx->pc = 0x244120u;
label_244120:
    // 0x244120: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x244120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
label_244124:
    // 0x244124: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244124u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_244128:
    // 0x244128: 0x0  nop
    ctx->pc = 0x244128u;
    // NOP
label_24412c:
    // 0x24412c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x24412cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
label_244130:
    // 0x244130: 0x10000011  b           . + 4 + (0x11 << 2)
label_244134:
    if (ctx->pc == 0x244134u) {
        ctx->pc = 0x244134u;
            // 0x244134: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->pc = 0x244138u;
        goto label_244138;
    }
    ctx->pc = 0x244130u;
    {
        const bool branch_taken_0x244130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244130u;
            // 0x244134: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x244130) {
            ctx->pc = 0x244178u;
            goto label_244178;
        }
    }
    ctx->pc = 0x244138u;
label_244138:
    // 0x244138: 0x1000000f  b           . + 4 + (0xF << 2)
label_24413c:
    if (ctx->pc == 0x24413Cu) {
        ctx->pc = 0x24413Cu;
            // 0x24413c: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->pc = 0x244140u;
        goto label_244140;
    }
    ctx->pc = 0x244138u;
    {
        const bool branch_taken_0x244138 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24413Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244138u;
            // 0x24413c: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x244138) {
            ctx->pc = 0x244178u;
            goto label_244178;
        }
    }
    ctx->pc = 0x244140u;
label_244140:
    // 0x244140: 0xc4610000  lwc1        $f1, 0x0($v1)
    ctx->pc = 0x244140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_244144:
    // 0x244144: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x244144u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_244148:
    // 0x244148: 0x0  nop
    ctx->pc = 0x244148u;
    // NOP
label_24414c:
    // 0x24414c: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x24414cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_244150:
    // 0x244150: 0x0  nop
    ctx->pc = 0x244150u;
    // NOP
label_244154:
    // 0x244154: 0x45010007  bc1t        . + 4 + (0x7 << 2)
label_244158:
    if (ctx->pc == 0x244158u) {
        ctx->pc = 0x244158u;
            // 0x244158: 0x3c023e20  lui         $v0, 0x3E20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15904 << 16));
        ctx->pc = 0x24415Cu;
        goto label_24415c;
    }
    ctx->pc = 0x244154u;
    {
        const bool branch_taken_0x244154 = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x244158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244154u;
            // 0x244158: 0x3c023e20  lui         $v0, 0x3E20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15904 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244154) {
            ctx->pc = 0x244174u;
            goto label_244174;
        }
    }
    ctx->pc = 0x24415Cu;
label_24415c:
    // 0x24415c: 0x3442d97c  ori         $v0, $v0, 0xD97C
    ctx->pc = 0x24415cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55676);
label_244160:
    // 0x244160: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x244160u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_244164:
    // 0x244164: 0x0  nop
    ctx->pc = 0x244164u;
    // NOP
label_244168:
    // 0x244168: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x244168u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
label_24416c:
    // 0x24416c: 0x10000002  b           . + 4 + (0x2 << 2)
label_244170:
    if (ctx->pc == 0x244170u) {
        ctx->pc = 0x244170u;
            // 0x244170: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->pc = 0x244174u;
        goto label_244174;
    }
    ctx->pc = 0x24416Cu;
    {
        const bool branch_taken_0x24416c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24416Cu;
            // 0x244170: 0xe4600000  swc1        $f0, 0x0($v1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x24416c) {
            ctx->pc = 0x244178u;
            goto label_244178;
        }
    }
    ctx->pc = 0x244174u;
label_244174:
    // 0x244174: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x244174u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_244178:
    // 0x244178: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x244178u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24417c:
    // 0x24417c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24417cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_244180:
    // 0x244180: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x244180u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_244184:
    // 0x244184: 0x320f809  jalr        $t9
label_244188:
    if (ctx->pc == 0x244188u) {
        ctx->pc = 0x244188u;
            // 0x244188: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x24418Cu;
        goto label_24418c;
    }
    ctx->pc = 0x244184u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24418Cu);
        ctx->pc = 0x244188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244184u;
            // 0x244188: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x24418Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24418Cu; }
            if (ctx->pc != 0x24418Cu) { return; }
        }
        }
    }
    ctx->pc = 0x24418Cu;
label_24418c:
    // 0x24418c: 0x8f8495a8  lw          $a0, -0x6A58($gp)
    ctx->pc = 0x24418cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940072)));
label_244190:
    // 0x244190: 0xc0ae40c  jal         func_2B9030
label_244194:
    if (ctx->pc == 0x244194u) {
        ctx->pc = 0x244194u;
            // 0x244194: 0x87858364  lh          $a1, -0x7C9C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935396)));
        ctx->pc = 0x244198u;
        goto label_244198;
    }
    ctx->pc = 0x244190u;
    SET_GPR_U32(ctx, 31, 0x244198u);
    ctx->pc = 0x244194u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244190u;
            // 0x244194: 0x87858364  lh          $a1, -0x7C9C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935396)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B9030u;
    if (runtime->hasFunction(0x2B9030u)) {
        auto targetFn = runtime->lookupFunction(0x2B9030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244198u; }
        if (ctx->pc != 0x244198u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuWeaponRealStepEnvFunc__FP12CActionCharai_0x2b9030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244198u; }
        if (ctx->pc != 0x244198u) { return; }
    }
    ctx->pc = 0x244198u;
label_244198:
    // 0x244198: 0x10000013  b           . + 4 + (0x13 << 2)
label_24419c:
    if (ctx->pc == 0x24419Cu) {
        ctx->pc = 0x24419Cu;
            // 0x24419c: 0x86830110  lh          $v1, 0x110($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 272)));
        ctx->pc = 0x2441A0u;
        goto label_2441a0;
    }
    ctx->pc = 0x244198u;
    {
        const bool branch_taken_0x244198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24419Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244198u;
            // 0x24419c: 0x86830110  lh          $v1, 0x110($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244198) {
            ctx->pc = 0x2441E8u;
            goto label_2441e8;
        }
    }
    ctx->pc = 0x2441A0u;
label_2441a0:
    // 0x2441a0: 0x3c023c56  lui         $v0, 0x3C56
    ctx->pc = 0x2441a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15446 << 16));
label_2441a4:
    // 0x2441a4: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x2441a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
label_2441a8:
    // 0x2441a8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2441a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2441ac:
    // 0x2441ac: 0xc094254  jal         func_250950
label_2441b0:
    if (ctx->pc == 0x2441B0u) {
        ctx->pc = 0x2441B0u;
            // 0x2441b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2441B4u;
        goto label_2441b4;
    }
    ctx->pc = 0x2441ACu;
    SET_GPR_U32(ctx, 31, 0x2441B4u);
    ctx->pc = 0x2441B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2441ACu;
            // 0x2441b0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250950u;
    if (runtime->hasFunction(0x250950u)) {
        auto targetFn = runtime->lookupFunction(0x250950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2441B4u; }
        if (ctx->pc != 0x2441B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddRotationCharaY__FP11CCharacter2f_0x250950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2441B4u; }
        if (ctx->pc != 0x2441B4u) { return; }
    }
    ctx->pc = 0x2441B4u;
label_2441b4:
    // 0x2441b4: 0x1000000b  b           . + 4 + (0xB << 2)
label_2441b8:
    if (ctx->pc == 0x2441B8u) {
        ctx->pc = 0x2441BCu;
        goto label_2441bc;
    }
    ctx->pc = 0x2441B4u;
    {
        const bool branch_taken_0x2441b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2441b4) {
            ctx->pc = 0x2441E4u;
            goto label_2441e4;
        }
    }
    ctx->pc = 0x2441BCu;
label_2441bc:
    // 0x2441bc: 0x8382962c  lb          $v0, -0x69D4($gp)
    ctx->pc = 0x2441bcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940204)));
label_2441c0:
    // 0x2441c0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2441c4:
    if (ctx->pc == 0x2441C4u) {
        ctx->pc = 0x2441C4u;
            // 0x2441c4: 0x3c023c56  lui         $v0, 0x3C56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15446 << 16));
        ctx->pc = 0x2441C8u;
        goto label_2441c8;
    }
    ctx->pc = 0x2441C0u;
    {
        const bool branch_taken_0x2441c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2441C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2441C0u;
            // 0x2441c4: 0x3c023c56  lui         $v0, 0x3C56 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15446 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2441c0) {
            ctx->pc = 0x2441E4u;
            goto label_2441e4;
        }
    }
    ctx->pc = 0x2441C8u;
label_2441c8:
    // 0x2441c8: 0x34427750  ori         $v0, $v0, 0x7750
    ctx->pc = 0x2441c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)30544);
label_2441cc:
    // 0x2441cc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2441ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2441d0:
    // 0x2441d0: 0xc094254  jal         func_250950
label_2441d4:
    if (ctx->pc == 0x2441D4u) {
        ctx->pc = 0x2441D4u;
            // 0x2441d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2441D8u;
        goto label_2441d8;
    }
    ctx->pc = 0x2441D0u;
    SET_GPR_U32(ctx, 31, 0x2441D8u);
    ctx->pc = 0x2441D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2441D0u;
            // 0x2441d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250950u;
    if (runtime->hasFunction(0x250950u)) {
        auto targetFn = runtime->lookupFunction(0x250950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2441D8u; }
        if (ctx->pc != 0x2441D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AddRotationCharaY__FP11CCharacter2f_0x250950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2441D8u; }
        if (ctx->pc != 0x2441D8u) { return; }
    }
    ctx->pc = 0x2441D8u;
label_2441d8:
    // 0x2441d8: 0x8f8495a8  lw          $a0, -0x6A58($gp)
    ctx->pc = 0x2441d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940072)));
label_2441dc:
    // 0x2441dc: 0xc0ae40c  jal         func_2B9030
label_2441e0:
    if (ctx->pc == 0x2441E0u) {
        ctx->pc = 0x2441E0u;
            // 0x2441e0: 0x87858364  lh          $a1, -0x7C9C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935396)));
        ctx->pc = 0x2441E4u;
        goto label_2441e4;
    }
    ctx->pc = 0x2441DCu;
    SET_GPR_U32(ctx, 31, 0x2441E4u);
    ctx->pc = 0x2441E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2441DCu;
            // 0x2441e0: 0x87858364  lh          $a1, -0x7C9C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294935396)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B9030u;
    if (runtime->hasFunction(0x2B9030u)) {
        auto targetFn = runtime->lookupFunction(0x2B9030u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2441E4u; }
        if (ctx->pc != 0x2441E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuWeaponRealStepEnvFunc__FP12CActionCharai_0x2b9030(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2441E4u; }
        if (ctx->pc != 0x2441E4u) { return; }
    }
    ctx->pc = 0x2441E4u;
label_2441e4:
    // 0x2441e4: 0x86830110  lh          $v1, 0x110($s4)
    ctx->pc = 0x2441e4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 272)));
label_2441e8:
    // 0x2441e8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2441e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2441ec:
    // 0x2441ec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2441ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2441f0:
    // 0x2441f0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2441f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2441f4:
    // 0x2441f4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_2441f8:
    if (ctx->pc == 0x2441F8u) {
        ctx->pc = 0x2441F8u;
            // 0x2441f8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2441FCu;
        goto label_2441fc;
    }
    ctx->pc = 0x2441F4u;
    {
        const bool branch_taken_0x2441f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2441F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2441F4u;
            // 0x2441f8: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2441f4) {
            ctx->pc = 0x244208u;
            goto label_244208;
        }
    }
    ctx->pc = 0x2441FCu;
label_2441fc:
    // 0x2441fc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2441fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_244200:
    // 0x244200: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_244204:
    if (ctx->pc == 0x244204u) {
        ctx->pc = 0x244208u;
        goto label_244208;
    }
    ctx->pc = 0x244200u;
    {
        const bool branch_taken_0x244200 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x244200) {
            ctx->pc = 0x244224u;
            goto label_244224;
        }
    }
    ctx->pc = 0x244208u;
label_244208:
    // 0x244208: 0x8f8495d8  lw          $a0, -0x6A28($gp)
    ctx->pc = 0x244208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940120)));
label_24420c:
    // 0x24420c: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_244210:
    if (ctx->pc == 0x244210u) {
        ctx->pc = 0x244214u;
        goto label_244214;
    }
    ctx->pc = 0x24420Cu;
    {
        const bool branch_taken_0x24420c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x24420c) {
            ctx->pc = 0x244224u;
            goto label_244224;
        }
    }
    ctx->pc = 0x244214u;
label_244214:
    // 0x244214: 0x8e82017c  lw          $v0, 0x17C($s4)
    ctx->pc = 0x244214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 380)));
label_244218:
    // 0x244218: 0x14440002  bne         $v0, $a0, . + 4 + (0x2 << 2)
label_24421c:
    if (ctx->pc == 0x24421Cu) {
        ctx->pc = 0x244220u;
        goto label_244220;
    }
    ctx->pc = 0x244218u;
    {
        const bool branch_taken_0x244218 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x244218) {
            ctx->pc = 0x244224u;
            goto label_244224;
        }
    }
    ctx->pc = 0x244220u;
label_244220:
    // 0x244220: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x244220u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_244224:
    // 0x244224: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_244228:
    if (ctx->pc == 0x244228u) {
        ctx->pc = 0x244228u;
            // 0x244228: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x24422Cu;
        goto label_24422c;
    }
    ctx->pc = 0x244224u;
    {
        const bool branch_taken_0x244224 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x244228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244224u;
            // 0x244228: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244224) {
            ctx->pc = 0x244234u;
            goto label_244234;
        }
    }
    ctx->pc = 0x24422Cu;
label_24422c:
    // 0x24422c: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_244230:
    if (ctx->pc == 0x244230u) {
        ctx->pc = 0x244234u;
        goto label_244234;
    }
    ctx->pc = 0x24422Cu;
    {
        const bool branch_taken_0x24422c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24422c) {
            ctx->pc = 0x244238u;
            goto label_244238;
        }
    }
    ctx->pc = 0x244234u;
label_244234:
    // 0x244234: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x244234u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_244238:
    // 0x244238: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x244238u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_24423c:
    // 0x24423c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x24423cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_244240:
    // 0x244240: 0x1462004e  bne         $v1, $v0, . + 4 + (0x4E << 2)
label_244244:
    if (ctx->pc == 0x244244u) {
        ctx->pc = 0x244248u;
        goto label_244248;
    }
    ctx->pc = 0x244240u;
    {
        const bool branch_taken_0x244240 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x244240) {
            ctx->pc = 0x24437Cu;
            goto label_24437c;
        }
    }
    ctx->pc = 0x244248u;
label_244248:
    // 0x244248: 0x86830002  lh          $v1, 0x2($s4)
    ctx->pc = 0x244248u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_24424c:
    // 0x24424c: 0x1860004b  blez        $v1, . + 4 + (0x4B << 2)
label_244250:
    if (ctx->pc == 0x244250u) {
        ctx->pc = 0x244250u;
            // 0x244250: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x244254u;
        goto label_244254;
    }
    ctx->pc = 0x24424Cu;
    {
        const bool branch_taken_0x24424c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x244250u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24424Cu;
            // 0x244250: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24424c) {
            ctx->pc = 0x24437Cu;
            goto label_24437c;
        }
    }
    ctx->pc = 0x244254u;
label_244254:
    // 0x244254: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_244258:
    if (ctx->pc == 0x244258u) {
        ctx->pc = 0x24425Cu;
        goto label_24425c;
    }
    ctx->pc = 0x244254u;
    {
        const bool branch_taken_0x244254 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x244254) {
            ctx->pc = 0x244260u;
            goto label_244260;
        }
    }
    ctx->pc = 0x24425Cu;
label_24425c:
    // 0x24425c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24425cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244260:
    // 0x244260: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x244260u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
label_244264:
    // 0x244264: 0x27a501d8  addiu       $a1, $sp, 0x1D8
    ctx->pc = 0x244264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
label_244268:
    // 0x244268: 0x8f868374  lw          $a2, -0x7C8C($gp)
    ctx->pc = 0x244268u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935412)));
label_24426c:
    // 0x24426c: 0xc08b0e0  jal         func_22C380
label_244270:
    if (ctx->pc == 0x244270u) {
        ctx->pc = 0x244270u;
            // 0x244270: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x244274u;
        goto label_244274;
    }
    ctx->pc = 0x24426Cu;
    SET_GPR_U32(ctx, 31, 0x244274u);
    ctx->pc = 0x244270u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24426Cu;
            // 0x244270: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22C380u;
    if (runtime->hasFunction(0x22C380u)) {
        auto targetFn = runtime->lookupFunction(0x22C380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244274u; }
        if (ctx->pc != 0x244274u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPosMenuItemOnItemBrd__18CMenuPosDataManageFPiii_0x22c380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244274u; }
        if (ctx->pc != 0x244274u) { return; }
    }
    ctx->pc = 0x244274u;
label_244274:
    // 0x244274: 0x86830014  lh          $v1, 0x14($s4)
    ctx->pc = 0x244274u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
label_244278:
    // 0x244278: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x244278u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24427c:
    // 0x24427c: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_244280:
    if (ctx->pc == 0x244280u) {
        ctx->pc = 0x244284u;
        goto label_244284;
    }
    ctx->pc = 0x24427Cu;
    {
        const bool branch_taken_0x24427c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24427c) {
            ctx->pc = 0x2442A0u;
            goto label_2442a0;
        }
    }
    ctx->pc = 0x244284u;
label_244284:
    // 0x244284: 0x87a301d8  lh          $v1, 0x1D8($sp)
    ctx->pc = 0x244284u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 472)));
label_244288:
    // 0x244288: 0x8f8295c8  lw          $v0, -0x6A38($gp)
    ctx->pc = 0x244288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940104)));
label_24428c:
    // 0x24428c: 0xa4430014  sh          $v1, 0x14($v0)
    ctx->pc = 0x24428cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 3));
label_244290:
    // 0x244290: 0x87a301dc  lh          $v1, 0x1DC($sp)
    ctx->pc = 0x244290u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 476)));
label_244294:
    // 0x244294: 0x8f8295c8  lw          $v0, -0x6A38($gp)
    ctx->pc = 0x244294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940104)));
label_244298:
    // 0x244298: 0x10000032  b           . + 4 + (0x32 << 2)
label_24429c:
    if (ctx->pc == 0x24429Cu) {
        ctx->pc = 0x24429Cu;
            // 0x24429c: 0xa4430016  sh          $v1, 0x16($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 22), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x2442A0u;
        goto label_2442a0;
    }
    ctx->pc = 0x244298u;
    {
        const bool branch_taken_0x244298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24429Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244298u;
            // 0x24429c: 0xa4430016  sh          $v1, 0x16($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 22), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244298) {
            ctx->pc = 0x244364u;
            goto label_244364;
        }
    }
    ctx->pc = 0x2442A0u;
label_2442a0:
    // 0x2442a0: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_2442a4:
    if (ctx->pc == 0x2442A4u) {
        ctx->pc = 0x2442A8u;
        goto label_2442a8;
    }
    ctx->pc = 0x2442A0u;
    {
        const bool branch_taken_0x2442a0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2442a0) {
            ctx->pc = 0x2442B0u;
            goto label_2442b0;
        }
    }
    ctx->pc = 0x2442A8u;
label_2442a8:
    // 0x2442a8: 0x1240002e  beqz        $s2, . + 4 + (0x2E << 2)
label_2442ac:
    if (ctx->pc == 0x2442ACu) {
        ctx->pc = 0x2442B0u;
        goto label_2442b0;
    }
    ctx->pc = 0x2442A8u;
    {
        const bool branch_taken_0x2442a8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2442a8) {
            ctx->pc = 0x244364u;
            goto label_244364;
        }
    }
    ctx->pc = 0x2442B0u;
label_2442b0:
    // 0x2442b0: 0x8f8295e4  lw          $v0, -0x6A1C($gp)
    ctx->pc = 0x2442b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940132)));
label_2442b4:
    // 0x2442b4: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_2442b8:
    if (ctx->pc == 0x2442B8u) {
        ctx->pc = 0x2442BCu;
        goto label_2442bc;
    }
    ctx->pc = 0x2442B4u;
    {
        const bool branch_taken_0x2442b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2442b4) {
            ctx->pc = 0x244364u;
            goto label_244364;
        }
    }
    ctx->pc = 0x2442BCu;
label_2442bc:
    // 0x2442bc: 0x8e8201a8  lw          $v0, 0x1A8($s4)
    ctx->pc = 0x2442bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 424)));
label_2442c0:
    // 0x2442c0: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_2442c4:
    if (ctx->pc == 0x2442C4u) {
        ctx->pc = 0x2442C8u;
        goto label_2442c8;
    }
    ctx->pc = 0x2442C0u;
    {
        const bool branch_taken_0x2442c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2442c0) {
            ctx->pc = 0x244364u;
            goto label_244364;
        }
    }
    ctx->pc = 0x2442C8u;
label_2442c8:
    // 0x2442c8: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x2442c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2442cc:
    // 0x2442cc: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_2442d0:
    if (ctx->pc == 0x2442D0u) {
        ctx->pc = 0x2442D0u;
            // 0x2442d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2442D4u;
        goto label_2442d4;
    }
    ctx->pc = 0x2442CCu;
    {
        const bool branch_taken_0x2442cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2442D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2442CCu;
            // 0x2442d0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2442cc) {
            ctx->pc = 0x244364u;
            goto label_244364;
        }
    }
    ctx->pc = 0x2442D4u;
label_2442d4:
    // 0x2442d4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_2442d8:
    if (ctx->pc == 0x2442D8u) {
        ctx->pc = 0x2442D8u;
            // 0x2442d8: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->pc = 0x2442DCu;
        goto label_2442dc;
    }
    ctx->pc = 0x2442D4u;
    {
        const bool branch_taken_0x2442d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2442D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2442D4u;
            // 0x2442d8: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2442d4) {
            ctx->pc = 0x2442E8u;
            goto label_2442e8;
        }
    }
    ctx->pc = 0x2442DCu;
label_2442dc:
    // 0x2442dc: 0x8c22caa0  lw          $v0, -0x3560($at)
    ctx->pc = 0x2442dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953632)));
label_2442e0:
    // 0x2442e0: 0x8c420070  lw          $v0, 0x70($v0)
    ctx->pc = 0x2442e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_2442e4:
    // 0x2442e4: 0x0  nop
    ctx->pc = 0x2442e4u;
    // NOP
label_2442e8:
    // 0x2442e8: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_2442ec:
    if (ctx->pc == 0x2442ECu) {
        ctx->pc = 0x2442F0u;
        goto label_2442f0;
    }
    ctx->pc = 0x2442E8u;
    {
        const bool branch_taken_0x2442e8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2442e8) {
            ctx->pc = 0x244320u;
            goto label_244320;
        }
    }
    ctx->pc = 0x2442F0u;
label_2442f0:
    // 0x2442f0: 0x86850114  lh          $a1, 0x114($s4)
    ctx->pc = 0x2442f0u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 276)));
label_2442f4:
    // 0x2442f4: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2442f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_2442f8:
    // 0x2442f8: 0x878395e0  lh          $v1, -0x6A20($gp)
    ctx->pc = 0x2442f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940128)));
label_2442fc:
    // 0x2442fc: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x2442fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_244300:
    // 0x244300: 0x24420c80  addiu       $v0, $v0, 0xC80
    ctx->pc = 0x244300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3200));
label_244304:
    // 0x244304: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x244304u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_244308:
    // 0x244308: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x244308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_24430c:
    // 0x24430c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24430cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_244310:
    // 0x244310: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x244310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_244314:
    // 0x244314: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x244314u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_244318:
    // 0x244318: 0xc05af3c  jal         func_16BCF0
label_24431c:
    if (ctx->pc == 0x24431Cu) {
        ctx->pc = 0x24431Cu;
            // 0x24431c: 0x8c24caa0  lw          $a0, -0x3560($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953632)));
        ctx->pc = 0x244320u;
        goto label_244320;
    }
    ctx->pc = 0x244318u;
    SET_GPR_U32(ctx, 31, 0x244320u);
    ctx->pc = 0x24431Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244318u;
            // 0x24431c: 0x8c24caa0  lw          $a0, -0x3560($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953632)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16BCF0u;
    if (runtime->hasFunction(0x16BCF0u)) {
        auto targetFn = runtime->lookupFunction(0x16BCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244320u; }
        if (ctx->pc != 0x244320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchObject__12CActionCharaFPc_0x16bcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244320u; }
        if (ctx->pc != 0x244320u) { return; }
    }
    ctx->pc = 0x244320u;
label_244320:
    // 0x244320: 0x8f8494f4  lw          $a0, -0x6B0C($gp)
    ctx->pc = 0x244320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
label_244324:
    // 0x244324: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x244324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244328:
    // 0x244328: 0xc094600  jal         func_251800
label_24432c:
    if (ctx->pc == 0x24432Cu) {
        ctx->pc = 0x24432Cu;
            // 0x24432c: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->pc = 0x244330u;
        goto label_244330;
    }
    ctx->pc = 0x244328u;
    SET_GPR_U32(ctx, 31, 0x244330u);
    ctx->pc = 0x24432Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244328u;
            // 0x24432c: 0x27a600e0  addiu       $a2, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251800u;
    if (runtime->hasFunction(0x251800u)) {
        auto targetFn = runtime->lookupFunction(0x251800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244330u; }
        if (ctx->pc != 0x244330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Trans3DPosTo2DPos__FP9mgCCameraP8mgCFramePi_0x251800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244330u; }
        if (ctx->pc != 0x244330u) { return; }
    }
    ctx->pc = 0x244330u;
label_244330:
    // 0x244330: 0x8fa300e0  lw          $v1, 0xE0($sp)
    ctx->pc = 0x244330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
label_244334:
    // 0x244334: 0x27a401dc  addiu       $a0, $sp, 0x1DC
    ctx->pc = 0x244334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
label_244338:
    // 0x244338: 0x8fa200e4  lw          $v0, 0xE4($sp)
    ctx->pc = 0x244338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 228)));
label_24433c:
    // 0x24433c: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x24433cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_244340:
    // 0x244340: 0xafa301d8  sw          $v1, 0x1D8($sp)
    ctx->pc = 0x244340u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 472), GPR_U32(ctx, 3));
label_244344:
    // 0x244344: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x244344u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_244348:
    // 0x244348: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x244348u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_24434c:
    // 0x24434c: 0x87a301d8  lh          $v1, 0x1D8($sp)
    ctx->pc = 0x24434cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 472)));
label_244350:
    // 0x244350: 0x8f8295c8  lw          $v0, -0x6A38($gp)
    ctx->pc = 0x244350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940104)));
label_244354:
    // 0x244354: 0xa4430014  sh          $v1, 0x14($v0)
    ctx->pc = 0x244354u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 3));
label_244358:
    // 0x244358: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x244358u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_24435c:
    // 0x24435c: 0x8f8295c8  lw          $v0, -0x6A38($gp)
    ctx->pc = 0x24435cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940104)));
label_244360:
    // 0x244360: 0xa4430016  sh          $v1, 0x16($v0)
    ctx->pc = 0x244360u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22), (uint16_t)GPR_U32(ctx, 3));
label_244364:
    // 0x244364: 0x87a301d8  lh          $v1, 0x1D8($sp)
    ctx->pc = 0x244364u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 472)));
label_244368:
    // 0x244368: 0x8f8295cc  lw          $v0, -0x6A34($gp)
    ctx->pc = 0x244368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940108)));
label_24436c:
    // 0x24436c: 0xa4430014  sh          $v1, 0x14($v0)
    ctx->pc = 0x24436cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 3));
label_244370:
    // 0x244370: 0x87a301dc  lh          $v1, 0x1DC($sp)
    ctx->pc = 0x244370u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 476)));
label_244374:
    // 0x244374: 0x8f8295cc  lw          $v0, -0x6A34($gp)
    ctx->pc = 0x244374u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940108)));
label_244378:
    // 0x244378: 0xa4430016  sh          $v1, 0x16($v0)
    ctx->pc = 0x244378u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22), (uint16_t)GPR_U32(ctx, 3));
label_24437c:
    // 0x24437c: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x24437cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_244380:
    // 0x244380: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x244380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_244384:
    // 0x244384: 0x1462001b  bne         $v1, $v0, . + 4 + (0x1B << 2)
label_244388:
    if (ctx->pc == 0x244388u) {
        ctx->pc = 0x24438Cu;
        goto label_24438c;
    }
    ctx->pc = 0x244384u;
    {
        const bool branch_taken_0x244384 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x244384) {
            ctx->pc = 0x2443F4u;
            goto label_2443f4;
        }
    }
    ctx->pc = 0x24438Cu;
label_24438c:
    // 0x24438c: 0x86820002  lh          $v0, 0x2($s4)
    ctx->pc = 0x24438cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
label_244390:
    // 0x244390: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
label_244394:
    if (ctx->pc == 0x244394u) {
        ctx->pc = 0x244398u;
        goto label_244398;
    }
    ctx->pc = 0x244390u;
    {
        const bool branch_taken_0x244390 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x244390) {
            ctx->pc = 0x2443F4u;
            goto label_2443f4;
        }
    }
    ctx->pc = 0x244398u;
label_244398:
    // 0x244398: 0x868600c0  lh          $a2, 0xC0($s4)
    ctx->pc = 0x244398u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 192)));
label_24439c:
    // 0x24439c: 0x27a501d8  addiu       $a1, $sp, 0x1D8
    ctx->pc = 0x24439cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
label_2443a0:
    // 0x2443a0: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2443a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
label_2443a4:
    // 0x2443a4: 0xc08b0f0  jal         func_22C3C0
label_2443a8:
    if (ctx->pc == 0x2443A8u) {
        ctx->pc = 0x2443A8u;
            // 0x2443a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2443ACu;
        goto label_2443ac;
    }
    ctx->pc = 0x2443A4u;
    SET_GPR_U32(ctx, 31, 0x2443ACu);
    ctx->pc = 0x2443A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2443A4u;
            // 0x2443a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22C3C0u;
    if (runtime->hasFunction(0x22C3C0u)) {
        auto targetFn = runtime->lookupFunction(0x22C3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2443ACu; }
        if (ctx->pc != 0x2443ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPosMenuItemBrdForEffect__18CMenuPosDataManageFPiii_0x22c3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2443ACu; }
        if (ctx->pc != 0x2443ACu) { return; }
    }
    ctx->pc = 0x2443ACu;
label_2443ac:
    // 0x2443ac: 0x87a301d8  lh          $v1, 0x1D8($sp)
    ctx->pc = 0x2443acu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 472)));
label_2443b0:
    // 0x2443b0: 0x27b201dc  addiu       $s2, $sp, 0x1DC
    ctx->pc = 0x2443b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 476));
label_2443b4:
    // 0x2443b4: 0x8f8295c8  lw          $v0, -0x6A38($gp)
    ctx->pc = 0x2443b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940104)));
label_2443b8:
    // 0x2443b8: 0x27a501d8  addiu       $a1, $sp, 0x1D8
    ctx->pc = 0x2443b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 472));
label_2443bc:
    // 0x2443bc: 0xa4430014  sh          $v1, 0x14($v0)
    ctx->pc = 0x2443bcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 20), (uint16_t)GPR_U32(ctx, 3));
label_2443c0:
    // 0x2443c0: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x2443c0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_2443c4:
    // 0x2443c4: 0x8f8295c8  lw          $v0, -0x6A38($gp)
    ctx->pc = 0x2443c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940104)));
label_2443c8:
    // 0x2443c8: 0xa4430016  sh          $v1, 0x16($v0)
    ctx->pc = 0x2443c8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 22), (uint16_t)GPR_U32(ctx, 3));
label_2443cc:
    // 0x2443cc: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x2443ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
label_2443d0:
    // 0x2443d0: 0x8f868374  lw          $a2, -0x7C8C($gp)
    ctx->pc = 0x2443d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935412)));
label_2443d4:
    // 0x2443d4: 0xc08b0f0  jal         func_22C3C0
label_2443d8:
    if (ctx->pc == 0x2443D8u) {
        ctx->pc = 0x2443D8u;
            // 0x2443d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2443DCu;
        goto label_2443dc;
    }
    ctx->pc = 0x2443D4u;
    SET_GPR_U32(ctx, 31, 0x2443DCu);
    ctx->pc = 0x2443D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2443D4u;
            // 0x2443d8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22C3C0u;
    if (runtime->hasFunction(0x22C3C0u)) {
        auto targetFn = runtime->lookupFunction(0x22C3C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2443DCu; }
        if (ctx->pc != 0x2443DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPosMenuItemBrdForEffect__18CMenuPosDataManageFPiii_0x22c3c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2443DCu; }
        if (ctx->pc != 0x2443DCu) { return; }
    }
    ctx->pc = 0x2443DCu;
label_2443dc:
    // 0x2443dc: 0x87a301d8  lh          $v1, 0x1D8($sp)
    ctx->pc = 0x2443dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 472)));
label_2443e0:
    // 0x2443e0: 0x8f8295c8  lw          $v0, -0x6A38($gp)
    ctx->pc = 0x2443e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940104)));
label_2443e4:
    // 0x2443e4: 0xa443001c  sh          $v1, 0x1C($v0)
    ctx->pc = 0x2443e4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 28), (uint16_t)GPR_U32(ctx, 3));
label_2443e8:
    // 0x2443e8: 0x86430000  lh          $v1, 0x0($s2)
    ctx->pc = 0x2443e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_2443ec:
    // 0x2443ec: 0x8f8295c8  lw          $v0, -0x6A38($gp)
    ctx->pc = 0x2443ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940104)));
label_2443f0:
    // 0x2443f0: 0xa443001e  sh          $v1, 0x1E($v0)
    ctx->pc = 0x2443f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 30), (uint16_t)GPR_U32(ctx, 3));
label_2443f4:
    // 0x2443f4: 0x8e8201a8  lw          $v0, 0x1A8($s4)
    ctx->pc = 0x2443f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 424)));
label_2443f8:
    // 0x2443f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2443f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2443fc:
    // 0x2443fc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2443fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_244400:
    // 0x244400: 0xc08eab0  jal         func_23AAC0
label_244404:
    if (ctx->pc == 0x244404u) {
        ctx->pc = 0x244404u;
            // 0x244404: 0x24460040  addiu       $a2, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->pc = 0x244408u;
        goto label_244408;
    }
    ctx->pc = 0x244400u;
    SET_GPR_U32(ctx, 31, 0x244408u);
    ctx->pc = 0x244404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244400u;
            // 0x244404: 0x24460040  addiu       $a2, $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23AAC0u;
    if (runtime->hasFunction(0x23AAC0u)) {
        auto targetFn = runtime->lookupFunction(0x23AAC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244408u; }
        if (ctx->pc != 0x244408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FusionColor__FiiPf_0x23aac0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244408u; }
        if (ctx->pc != 0x244408u) { return; }
    }
    ctx->pc = 0x244408u;
label_244408:
    // 0x244408: 0x86830110  lh          $v1, 0x110($s4)
    ctx->pc = 0x244408u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 272)));
label_24440c:
    // 0x24440c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24440cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_244410:
    // 0x244410: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_244414:
    if (ctx->pc == 0x244414u) {
        ctx->pc = 0x244414u;
            // 0x244414: 0x10102b  sltu        $v0, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->pc = 0x244418u;
        goto label_244418;
    }
    ctx->pc = 0x244410u;
    {
        const bool branch_taken_0x244410 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x244414u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244410u;
            // 0x244414: 0x10102b  sltu        $v0, $zero, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x244410) {
            ctx->pc = 0x244428u;
            goto label_244428;
        }
    }
    ctx->pc = 0x244418u;
label_244418:
    // 0x244418: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x244418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_24441c:
    // 0x24441c: 0x1462000f  bne         $v1, $v0, . + 4 + (0xF << 2)
label_244420:
    if (ctx->pc == 0x244420u) {
        ctx->pc = 0x244424u;
        goto label_244424;
    }
    ctx->pc = 0x24441Cu;
    {
        const bool branch_taken_0x24441c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24441c) {
            ctx->pc = 0x24445Cu;
            goto label_24445c;
        }
    }
    ctx->pc = 0x244424u;
label_244424:
    // 0x244424: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x244424u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_244428:
    // 0x244428: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_24442c:
    if (ctx->pc == 0x24442Cu) {
        ctx->pc = 0x24442Cu;
            // 0x24442c: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->pc = 0x244430u;
        goto label_244430;
    }
    ctx->pc = 0x244428u;
    {
        const bool branch_taken_0x244428 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24442Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244428u;
            // 0x24442c: 0x3c0101f1  lui         $at, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244428) {
            ctx->pc = 0x244434u;
            goto label_244434;
        }
    }
    ctx->pc = 0x244430u;
label_244430:
    // 0x244430: 0x11102b  sltu        $v0, $zero, $s1
    ctx->pc = 0x244430u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_244434:
    // 0x244434: 0x8c24caa0  lw          $a0, -0x3560($at)
    ctx->pc = 0x244434u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953632)));
label_244438:
    // 0x244438: 0xc08eb34  jal         func_23ACD0
label_24443c:
    if (ctx->pc == 0x24443Cu) {
        ctx->pc = 0x24443Cu;
            // 0x24443c: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->pc = 0x244440u;
        goto label_244440;
    }
    ctx->pc = 0x244438u;
    SET_GPR_U32(ctx, 31, 0x244440u);
    ctx->pc = 0x24443Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244438u;
            // 0x24443c: 0x304500ff  andi        $a1, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x23ACD0u;
    if (runtime->hasFunction(0x23ACD0u)) {
        auto targetFn = runtime->lookupFunction(0x23ACD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244440u; }
        if (ctx->pc != 0x244440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SpectolFrameCalc__FP12CActionCharai_0x23acd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244440u; }
        if (ctx->pc != 0x244440u) { return; }
    }
    ctx->pc = 0x244440u;
label_244440:
    // 0x244440: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x244440u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_244444:
    // 0x244444: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_244448:
    if (ctx->pc == 0x244448u) {
        ctx->pc = 0x244448u;
            // 0x244448: 0x8e8301ac  lw          $v1, 0x1AC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 428)));
        ctx->pc = 0x24444Cu;
        goto label_24444c;
    }
    ctx->pc = 0x244444u;
    {
        const bool branch_taken_0x244444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244444u;
            // 0x244448: 0x8e8301ac  lw          $v1, 0x1AC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 428)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244444) {
            ctx->pc = 0x244450u;
            goto label_244450;
        }
    }
    ctx->pc = 0x24444Cu;
label_24444c:
    // 0x24444c: 0x11102b  sltu        $v0, $zero, $s1
    ctx->pc = 0x24444cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_244450:
    // 0x244450: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x244450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_244454:
    // 0x244454: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x244454u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_244458:
    // 0x244458: 0xa0620001  sb          $v0, 0x1($v1)
    ctx->pc = 0x244458u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
label_24445c:
    // 0x24445c: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x24445cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
label_244460:
    // 0x244460: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x244460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
label_244464:
    // 0x244464: 0x24631020  addiu       $v1, $v1, 0x1020
    ctx->pc = 0x244464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4128));
label_244468:
    // 0x244468: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x244468u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
label_24446c:
    // 0x24446c: 0x78670000  lq          $a3, 0x0($v1)
    ctx->pc = 0x24446cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 3), 0)));
label_244470:
    // 0x244470: 0x27a800f0  addiu       $t0, $sp, 0xF0
    ctx->pc = 0x244470u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_244474:
    // 0x244474: 0x2442df10  addiu       $v0, $v0, -0x20F0
    ctx->pc = 0x244474u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958864));
label_244478:
    // 0x244478: 0x27a60110  addiu       $a2, $sp, 0x110
    ctx->pc = 0x244478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_24447c:
    // 0x24447c: 0x24a51040  addiu       $a1, $a1, 0x1040
    ctx->pc = 0x24447cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4160));
label_244480:
    // 0x244480: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x244480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_244484:
    // 0x244484: 0xdc630010  ld          $v1, 0x10($v1)
    ctx->pc = 0x244484u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_244488:
    // 0x244488: 0x7d070000  sq          $a3, 0x0($t0)
    ctx->pc = 0x244488u;
    WRITE128(ADD32(GPR_U32(ctx, 8), 0), GPR_VEC(ctx, 7));
label_24448c:
    // 0x24448c: 0xfd030010  sd          $v1, 0x10($t0)
    ctx->pc = 0x24448cu;
    WRITE64(ADD32(GPR_U32(ctx, 8), 16), GPR_U64(ctx, 3));
label_244490:
    // 0x244490: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x244490u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_244494:
    // 0x244494: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x244494u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
label_244498:
    // 0x244498: 0x7cc30000  sq          $v1, 0x0($a2)
    ctx->pc = 0x244498u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 3));
label_24449c:
    // 0x24449c: 0xfcc20010  sd          $v0, 0x10($a2)
    ctx->pc = 0x24449cu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 2));
label_2444a0:
    // 0x2444a0: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x2444a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
label_2444a4:
    // 0x2444a4: 0xc4a00018  lwc1        $f0, 0x18($a1)
    ctx->pc = 0x2444a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2444a8:
    // 0x2444a8: 0xdca20010  ld          $v0, 0x10($a1)
    ctx->pc = 0x2444a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 16)));
label_2444ac:
    // 0x2444ac: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2444acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_2444b0:
    // 0x2444b0: 0xfc820010  sd          $v0, 0x10($a0)
    ctx->pc = 0x2444b0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 2));
label_2444b4:
    // 0x2444b4: 0xe4800018  swc1        $f0, 0x18($a0)
    ctx->pc = 0x2444b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 24), bits); }
label_2444b8:
    // 0x2444b8: 0x8e84017c  lw          $a0, 0x17C($s4)
    ctx->pc = 0x2444b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 380)));
label_2444bc:
    // 0x2444bc: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_2444c0:
    if (ctx->pc == 0x2444C0u) {
        ctx->pc = 0x2444C0u;
            // 0x2444c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2444C4u;
        goto label_2444c4;
    }
    ctx->pc = 0x2444BCu;
    {
        const bool branch_taken_0x2444bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2444C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2444BCu;
            // 0x2444c0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2444bc) {
            ctx->pc = 0x2444DCu;
            goto label_2444dc;
        }
    }
    ctx->pc = 0x2444C4u;
label_2444c4:
    // 0x2444c4: 0xc065dc0  jal         func_197700
label_2444c8:
    if (ctx->pc == 0x2444C8u) {
        ctx->pc = 0x2444CCu;
        goto label_2444cc;
    }
    ctx->pc = 0x2444C4u;
    SET_GPR_U32(ctx, 31, 0x2444CCu);
    ctx->pc = 0x197700u;
    if (runtime->hasFunction(0x197700u)) {
        auto targetFn = runtime->lookupFunction(0x197700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2444CCu; }
        if (ctx->pc != 0x2444CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetName__13CGameDataUsedFi_0x197700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2444CCu; }
        if (ctx->pc != 0x2444CCu) { return; }
    }
    ctx->pc = 0x2444CCu;
label_2444cc:
    // 0x2444cc: 0x27a30138  addiu       $v1, $sp, 0x138
    ctx->pc = 0x2444ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 312));
label_2444d0:
    // 0x2444d0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x2444d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_2444d4:
    // 0x2444d4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2444d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2444d8:
    // 0x2444d8: 0xafa20144  sw          $v0, 0x144($sp)
    ctx->pc = 0x2444d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 324), GPR_U32(ctx, 2));
label_2444dc:
    // 0x2444dc: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x2444dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_2444e0:
    // 0x2444e0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2444e4:
    if (ctx->pc == 0x2444E4u) {
        ctx->pc = 0x2444E8u;
        goto label_2444e8;
    }
    ctx->pc = 0x2444E0u;
    {
        const bool branch_taken_0x2444e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2444e0) {
            ctx->pc = 0x2444F4u;
            goto label_2444f4;
        }
    }
    ctx->pc = 0x2444E8u;
label_2444e8:
    // 0x2444e8: 0xc067110  jal         func_19C440
label_2444ec:
    if (ctx->pc == 0x2444ECu) {
        ctx->pc = 0x2444F0u;
        goto label_2444f0;
    }
    ctx->pc = 0x2444E8u;
    SET_GPR_U32(ctx, 31, 0x2444F0u);
    ctx->pc = 0x19C440u;
    if (runtime->hasFunction(0x19C440u)) {
        auto targetFn = runtime->lookupFunction(0x19C440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2444F0u; }
        if (ctx->pc != 0x2444F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetRoboName__16CUserDataManagerFv_0x19c440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2444F0u; }
        if (ctx->pc != 0x2444F0u) { return; }
    }
    ctx->pc = 0x2444F0u;
label_2444f0:
    // 0x2444f0: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x2444f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
label_2444f4:
    // 0x2444f4: 0xc065af8  jal         func_196BE0
label_2444f8:
    if (ctx->pc == 0x2444F8u) {
        ctx->pc = 0x2444FCu;
        goto label_2444fc;
    }
    ctx->pc = 0x2444F4u;
    SET_GPR_U32(ctx, 31, 0x2444FCu);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2444FCu; }
        if (ctx->pc != 0x2444FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2444FCu; }
        if (ctx->pc != 0x2444FCu) { return; }
    }
    ctx->pc = 0x2444FCu;
label_2444fc:
    // 0x2444fc: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x2444fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_244500:
    // 0x244500: 0x34634d98  ori         $v1, $v1, 0x4D98
    ctx->pc = 0x244500u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)19864);
label_244504:
    // 0x244504: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x244504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_244508:
    // 0x244508: 0x84500000  lh          $s0, 0x0($v0)
    ctx->pc = 0x244508u;
    SET_GPR_S32(ctx, 16, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_24450c:
    // 0x24450c: 0x200082a  slt         $at, $s0, $zero
    ctx->pc = 0x24450cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_244510:
    // 0x244510: 0x1420000c  bnez        $at, . + 4 + (0xC << 2)
label_244514:
    if (ctx->pc == 0x244514u) {
        ctx->pc = 0x244518u;
        goto label_244518;
    }
    ctx->pc = 0x244510u;
    {
        const bool branch_taken_0x244510 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x244510) {
            ctx->pc = 0x244544u;
            goto label_244544;
        }
    }
    ctx->pc = 0x244518u;
label_244518:
    // 0x244518: 0xc0ad6c4  jal         func_2B5B10
label_24451c:
    if (ctx->pc == 0x24451Cu) {
        ctx->pc = 0x24451Cu;
            // 0x24451c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x244520u;
        goto label_244520;
    }
    ctx->pc = 0x244518u;
    SET_GPR_U32(ctx, 31, 0x244520u);
    ctx->pc = 0x24451Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244518u;
            // 0x24451c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244520u; }
        if (ctx->pc != 0x244520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterName__Fi_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244520u; }
        if (ctx->pc != 0x244520u) { return; }
    }
    ctx->pc = 0x244520u;
label_244520:
    // 0x244520: 0x8f8494ac  lw          $a0, -0x6B54($gp)
    ctx->pc = 0x244520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_244524:
    // 0x244524: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x244524u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_244528:
    // 0x244528: 0xc0670c0  jal         func_19C300
label_24452c:
    if (ctx->pc == 0x24452Cu) {
        ctx->pc = 0x24452Cu;
            // 0x24452c: 0xafa20140  sw          $v0, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
        ctx->pc = 0x244530u;
        goto label_244530;
    }
    ctx->pc = 0x244528u;
    SET_GPR_U32(ctx, 31, 0x244530u);
    ctx->pc = 0x24452Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244528u;
            // 0x24452c: 0xafa20140  sw          $v0, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C300u;
    if (runtime->hasFunction(0x19C300u)) {
        auto targetFn = runtime->lookupFunction(0x19C300u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244530u; }
        if (ctx->pc != 0x244530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterBajjiDataPtrMosId__16CUserDataManagerFi_0x19c300(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244530u; }
        if (ctx->pc != 0x244530u) { return; }
    }
    ctx->pc = 0x244530u;
label_244530:
    // 0x244530: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_244534:
    if (ctx->pc == 0x244534u) {
        ctx->pc = 0x244538u;
        goto label_244538;
    }
    ctx->pc = 0x244530u;
    {
        const bool branch_taken_0x244530 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244530) {
            ctx->pc = 0x244544u;
            goto label_244544;
        }
    }
    ctx->pc = 0x244538u;
label_244538:
    // 0x244538: 0x84420002  lh          $v0, 0x2($v0)
    ctx->pc = 0x244538u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_24453c:
    // 0x24453c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24453cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_244540:
    // 0x244540: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x244540u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_244544:
    // 0x244544: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x244544u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_244548:
    // 0x244548: 0x8c37ca4c  lw          $s7, -0x35B4($at)
    ctx->pc = 0x244548u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953548)));
label_24454c:
    // 0x24454c: 0xaee01ac8  sw          $zero, 0x1AC8($s7)
    ctx->pc = 0x24454cu;
    WRITE32(ADD32(GPR_U32(ctx, 23), 6856), GPR_U32(ctx, 0));
label_244550:
    // 0x244550: 0x8e820180  lw          $v0, 0x180($s4)
    ctx->pc = 0x244550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 384)));
label_244554:
    // 0x244554: 0x90420058  lbu         $v0, 0x58($v0)
    ctx->pc = 0x244554u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 88)));
label_244558:
    // 0x244558: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x244558u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_24455c:
    // 0x24455c: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
label_244560:
    if (ctx->pc == 0x244560u) {
        ctx->pc = 0x244560u;
            // 0x244560: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x244564u;
        goto label_244564;
    }
    ctx->pc = 0x24455Cu;
    {
        const bool branch_taken_0x24455c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x244560u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24455Cu;
            // 0x244560: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24455c) {
            ctx->pc = 0x244568u;
            goto label_244568;
        }
    }
    ctx->pc = 0x244564u;
label_244564:
    // 0x244564: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x244564u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
label_244568:
    // 0x244568: 0x8e820184  lw          $v0, 0x184($s4)
    ctx->pc = 0x244568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 388)));
label_24456c:
    // 0x24456c: 0x90420058  lbu         $v0, 0x58($v0)
    ctx->pc = 0x24456cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 88)));
label_244570:
    // 0x244570: 0x28410080  slti        $at, $v0, 0x80
    ctx->pc = 0x244570u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)128) ? 1 : 0);
label_244574:
    // 0x244574: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_244578:
    if (ctx->pc == 0x244578u) {
        ctx->pc = 0x244578u;
            // 0x244578: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24457Cu;
        goto label_24457c;
    }
    ctx->pc = 0x244574u;
    {
        const bool branch_taken_0x244574 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x244578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244574u;
            // 0x244578: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244574) {
            ctx->pc = 0x244584u;
            goto label_244584;
        }
    }
    ctx->pc = 0x24457Cu;
label_24457c:
    // 0x24457c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24457cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_244580:
    // 0x244580: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x244580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
label_244584:
    // 0x244584: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x244584u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244588:
    // 0x244588: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x244588u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24458c:
    // 0x24458c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x24458cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244590:
    // 0x244590: 0x2951021  addu        $v0, $s4, $s5
    ctx->pc = 0x244590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 21)));
label_244594:
    // 0x244594: 0x2dd1821  addu        $v1, $s6, $sp
    ctx->pc = 0x244594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 29)));
label_244598:
    // 0x244598: 0x8c440180  lw          $a0, 0x180($v0)
    ctx->pc = 0x244598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
label_24459c:
    // 0x24459c: 0x24710150  addiu       $s1, $v1, 0x150
    ctx->pc = 0x24459cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 336));
label_2445a0:
    // 0x2445a0: 0x26320004  addiu       $s2, $s1, 0x4
    ctx->pc = 0x2445a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2445a4:
    // 0x2445a4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2445a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2445a8:
    // 0x2445a8: 0x24a5b1d8  addiu       $a1, $a1, -0x4E28
    ctx->pc = 0x2445a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947288));
label_2445ac:
    // 0x2445ac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2445acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2445b0:
    // 0x2445b0: 0xc08974c  jal         func_225D30
label_2445b4:
    if (ctx->pc == 0x2445B4u) {
        ctx->pc = 0x2445B4u;
            // 0x2445b4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2445B8u;
        goto label_2445b8;
    }
    ctx->pc = 0x2445B0u;
    SET_GPR_U32(ctx, 31, 0x2445B8u);
    ctx->pc = 0x2445B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2445B0u;
            // 0x2445b4: 0x240382d  daddu       $a3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2445B8u; }
        if (ctx->pc != 0x2445B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2445B8u; }
        if (ctx->pc != 0x2445B8u) { return; }
    }
    ctx->pc = 0x2445B8u;
label_2445b8:
    // 0x2445b8: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2445b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2445bc:
    // 0x2445bc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2445bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2445c0:
    // 0x2445c0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2445c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_2445c4:
    // 0x2445c4: 0x12620009  beq         $s3, $v0, . + 4 + (0x9 << 2)
label_2445c8:
    if (ctx->pc == 0x2445C8u) {
        ctx->pc = 0x2445C8u;
            // 0x2445c8: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2445CCu;
        goto label_2445cc;
    }
    ctx->pc = 0x2445C4u;
    {
        const bool branch_taken_0x2445c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2445C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2445C4u;
            // 0x2445c8: 0xae430000  sw          $v1, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2445c4) {
            ctx->pc = 0x2445ECu;
            goto label_2445ec;
        }
    }
    ctx->pc = 0x2445CCu;
label_2445cc:
    // 0x2445cc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2445ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2445d0:
    // 0x2445d0: 0x2841000a  slti        $at, $v0, 0xA
    ctx->pc = 0x2445d0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)10) ? 1 : 0);
label_2445d4:
    // 0x2445d4: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2445d8:
    if (ctx->pc == 0x2445D8u) {
        ctx->pc = 0x2445D8u;
            // 0x2445d8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2445DCu;
        goto label_2445dc;
    }
    ctx->pc = 0x2445D4u;
    {
        const bool branch_taken_0x2445d4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2445D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2445D4u;
            // 0x2445d8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2445d4) {
            ctx->pc = 0x2445E4u;
            goto label_2445e4;
        }
    }
    ctx->pc = 0x2445DCu;
label_2445dc:
    // 0x2445dc: 0x21d1021  addu        $v0, $s0, $sp
    ctx->pc = 0x2445dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 29)));
label_2445e0:
    // 0x2445e0: 0xac4300f0  sw          $v1, 0xF0($v0)
    ctx->pc = 0x2445e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 240), GPR_U32(ctx, 3));
label_2445e4:
    // 0x2445e4: 0x0  nop
    ctx->pc = 0x2445e4u;
    // NOP
label_2445e8:
    // 0x2445e8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2445e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2445ec:
    // 0x2445ec: 0x0  nop
    ctx->pc = 0x2445ecu;
    // NOP
label_2445f0:
    // 0x2445f0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2445f0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2445f4:
    // 0x2445f4: 0x2a620006  slti        $v0, $s3, 0x6
    ctx->pc = 0x2445f4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)6) ? 1 : 0);
label_2445f8:
    // 0x2445f8: 0x26d60008  addiu       $s6, $s6, 0x8
    ctx->pc = 0x2445f8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
label_2445fc:
    // 0x2445fc: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
label_244600:
    if (ctx->pc == 0x244600u) {
        ctx->pc = 0x244600u;
            // 0x244600: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x244604u;
        goto label_244604;
    }
    ctx->pc = 0x2445FCu;
    {
        const bool branch_taken_0x2445fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x244600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2445FCu;
            // 0x244600: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2445fc) {
            ctx->pc = 0x244590u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_244590;
        }
    }
    ctx->pc = 0x244604u;
label_244604:
    // 0x244604: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x244604u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_244608:
    // 0x244608: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x244608u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
label_24460c:
    // 0x24460c: 0xc0876ec  jal         func_21DBB0
label_244610:
    if (ctx->pc == 0x244610u) {
        ctx->pc = 0x244610u;
            // 0x244610: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x244614u;
        goto label_244614;
    }
    ctx->pc = 0x24460Cu;
    SET_GPR_U32(ctx, 31, 0x244614u);
    ctx->pc = 0x244610u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24460Cu;
            // 0x244610: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DBB0u;
    if (runtime->hasFunction(0x21DBB0u)) {
        auto targetFn = runtime->lookupFunction(0x21DBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244614u; }
        if (ctx->pc != 0x244614u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPii_0x21dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244614u; }
        if (ctx->pc != 0x244614u) { return; }
    }
    ctx->pc = 0x244614u;
label_244614:
    // 0x244614: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x244614u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_244618:
    // 0x244618: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x244618u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_24461c:
    // 0x24461c: 0xc087720  jal         func_21DC80
label_244620:
    if (ctx->pc == 0x244620u) {
        ctx->pc = 0x244620u;
            // 0x244620: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x244624u;
        goto label_244624;
    }
    ctx->pc = 0x24461Cu;
    SET_GPR_U32(ctx, 31, 0x244624u);
    ctx->pc = 0x244620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24461Cu;
            // 0x244620: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244624u; }
        if (ctx->pc != 0x244624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244624u; }
        if (ctx->pc != 0x244624u) { return; }
    }
    ctx->pc = 0x244624u;
label_244624:
    // 0x244624: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x244624u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_244628:
    // 0x244628: 0x27a50110  addiu       $a1, $sp, 0x110
    ctx->pc = 0x244628u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
label_24462c:
    // 0x24462c: 0xc087778  jal         func_21DDE0
label_244630:
    if (ctx->pc == 0x244630u) {
        ctx->pc = 0x244630u;
            // 0x244630: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x244634u;
        goto label_244634;
    }
    ctx->pc = 0x24462Cu;
    SET_GPR_U32(ctx, 31, 0x244634u);
    ctx->pc = 0x244630u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24462Cu;
            // 0x244630: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DDE0u;
    if (runtime->hasFunction(0x21DDE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244634u; }
        if (ctx->pc != 0x244634u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNo__7CDC2MesFPii_0x21dde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244634u; }
        if (ctx->pc != 0x244634u) { return; }
    }
    ctx->pc = 0x244634u;
label_244634:
    // 0x244634: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x244634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_244638:
    // 0x244638: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x244638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_24463c:
    // 0x24463c: 0xc0877c4  jal         func_21DF10
label_244640:
    if (ctx->pc == 0x244640u) {
        ctx->pc = 0x244640u;
            // 0x244640: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x244644u;
        goto label_244644;
    }
    ctx->pc = 0x24463Cu;
    SET_GPR_U32(ctx, 31, 0x244644u);
    ctx->pc = 0x244640u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24463Cu;
            // 0x244640: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF10u;
    if (runtime->hasFunction(0x21DF10u)) {
        auto targetFn = runtime->lookupFunction(0x21DF10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244644u; }
        if (ctx->pc != 0x244644u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemPos__7CDC2MesFPii_0x21df10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244644u; }
        if (ctx->pc != 0x244644u) { return; }
    }
    ctx->pc = 0x244644u;
label_244644:
    // 0x244644: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x244644u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_244648:
    // 0x244648: 0xc0877e0  jal         func_21DF80
label_24464c:
    if (ctx->pc == 0x24464Cu) {
        ctx->pc = 0x24464Cu;
            // 0x24464c: 0x24050091  addiu       $a1, $zero, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
        ctx->pc = 0x244650u;
        goto label_244650;
    }
    ctx->pc = 0x244648u;
    SET_GPR_U32(ctx, 31, 0x244650u);
    ctx->pc = 0x24464Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244648u;
            // 0x24464c: 0x24050091  addiu       $a1, $zero, 0x91 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244650u; }
        if (ctx->pc != 0x244650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244650u; }
        if (ctx->pc != 0x244650u) { return; }
    }
    ctx->pc = 0x244650u;
label_244650:
    // 0x244650: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x244650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_244654:
    // 0x244654: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x244654u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_244658:
    // 0x244658: 0x24421060  addiu       $v0, $v0, 0x1060
    ctx->pc = 0x244658u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4192));
label_24465c:
    // 0x24465c: 0x8c30ca40  lw          $s0, -0x35C0($at)
    ctx->pc = 0x24465cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953536)));
label_244660:
    // 0x244660: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x244660u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_244664:
    // 0x244664: 0x27a50180  addiu       $a1, $sp, 0x180
    ctx->pc = 0x244664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_244668:
    // 0x244668: 0xdc420010  ld          $v0, 0x10($v0)
    ctx->pc = 0x244668u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 16)));
label_24466c:
    // 0x24466c: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x24466cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
label_244670:
    // 0x244670: 0xfca20010  sd          $v0, 0x10($a1)
    ctx->pc = 0x244670u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 2));
label_244674:
    // 0x244674: 0x86820110  lh          $v0, 0x110($s4)
    ctx->pc = 0x244674u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 272)));
label_244678:
    // 0x244678: 0x86840014  lh          $a0, 0x14($s4)
    ctx->pc = 0x244678u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
label_24467c:
    // 0x24467c: 0x2c410006  sltiu       $at, $v0, 0x6
    ctx->pc = 0x24467cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_244680:
    // 0x244680: 0x1020004b  beqz        $at, . + 4 + (0x4B << 2)
label_244684:
    if (ctx->pc == 0x244684u) {
        ctx->pc = 0x244684u;
            // 0x244684: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x244688u;
        goto label_244688;
    }
    ctx->pc = 0x244680u;
    {
        const bool branch_taken_0x244680 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x244684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244680u;
            // 0x244684: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244680) {
            ctx->pc = 0x2447B0u;
            goto label_2447b0;
        }
    }
    ctx->pc = 0x244688u;
label_244688:
    // 0x244688: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x244688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_24468c:
    // 0x24468c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x24468cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_244690:
    // 0x244690: 0x2463b1f0  addiu       $v1, $v1, -0x4E10
    ctx->pc = 0x244690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947312));
label_244694:
    // 0x244694: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x244694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_244698:
    // 0x244698: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x244698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_24469c:
    // 0x24469c: 0x400008  jr          $v0
label_2446a0:
    if (ctx->pc == 0x2446A0u) {
        ctx->pc = 0x2446A4u;
        goto label_2446a4;
    }
    ctx->pc = 0x24469Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2446A4u: goto label_2446a4;
            case 0x2446D4u: goto label_2446d4;
            case 0x24472Cu: goto label_24472c;
            case 0x244754u: goto label_244754;
            case 0x244794u: goto label_244794;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2446A4u;
label_2446a4:
    // 0x2446a4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2446a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2446a8:
    // 0x2446a8: 0x14820042  bne         $a0, $v0, . + 4 + (0x42 << 2)
label_2446ac:
    if (ctx->pc == 0x2446ACu) {
        ctx->pc = 0x2446ACu;
            // 0x2446ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2446B0u;
        goto label_2446b0;
    }
    ctx->pc = 0x2446A8u;
    {
        const bool branch_taken_0x2446a8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x2446ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2446A8u;
            // 0x2446ac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2446a8) {
            ctx->pc = 0x2447B4u;
            goto label_2447b4;
        }
    }
    ctx->pc = 0x2446B0u;
label_2446b0:
    // 0x2446b0: 0x86820114  lh          $v0, 0x114($s4)
    ctx->pc = 0x2446b0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 276)));
label_2446b4:
    // 0x2446b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2446b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2446b8:
    // 0x2446b8: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x2446b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2446bc:
    // 0x2446bc: 0x2411006a  addiu       $s1, $zero, 0x6A
    ctx->pc = 0x2446bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
label_2446c0:
    // 0x2446c0: 0x2442000a  addiu       $v0, $v0, 0xA
    ctx->pc = 0x2446c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10));
label_2446c4:
    // 0x2446c4: 0xc0876ec  jal         func_21DBB0
label_2446c8:
    if (ctx->pc == 0x2446C8u) {
        ctx->pc = 0x2446C8u;
            // 0x2446c8: 0xafa20180  sw          $v0, 0x180($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
        ctx->pc = 0x2446CCu;
        goto label_2446cc;
    }
    ctx->pc = 0x2446C4u;
    SET_GPR_U32(ctx, 31, 0x2446CCu);
    ctx->pc = 0x2446C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2446C4u;
            // 0x2446c8: 0xafa20180  sw          $v0, 0x180($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DBB0u;
    if (runtime->hasFunction(0x21DBB0u)) {
        auto targetFn = runtime->lookupFunction(0x21DBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2446CCu; }
        if (ctx->pc != 0x2446CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPii_0x21dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2446CCu; }
        if (ctx->pc != 0x2446CCu) { return; }
    }
    ctx->pc = 0x2446CCu;
label_2446cc:
    // 0x2446cc: 0x10000038  b           . + 4 + (0x38 << 2)
label_2446d0:
    if (ctx->pc == 0x2446D0u) {
        ctx->pc = 0x2446D4u;
        goto label_2446d4;
    }
    ctx->pc = 0x2446CCu;
    {
        const bool branch_taken_0x2446cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2446cc) {
            ctx->pc = 0x2447B0u;
            goto label_2447b0;
        }
    }
    ctx->pc = 0x2446D4u;
label_2446d4:
    // 0x2446d4: 0xc78083b8  lwc1        $f0, -0x7C48($gp)
    ctx->pc = 0x2446d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2446d8:
    // 0x2446d8: 0x27a201e8  addiu       $v0, $sp, 0x1E8
    ctx->pc = 0x2446d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 488));
label_2446dc:
    // 0x2446dc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2446dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2446e0:
    // 0x2446e0: 0x14860006  bne         $a0, $a2, . + 4 + (0x6 << 2)
label_2446e4:
    if (ctx->pc == 0x2446E4u) {
        ctx->pc = 0x2446E4u;
            // 0x2446e4: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->pc = 0x2446E8u;
        goto label_2446e8;
    }
    ctx->pc = 0x2446E0u;
    {
        const bool branch_taken_0x2446e0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x2446E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2446E0u;
            // 0x2446e4: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2446e0) {
            ctx->pc = 0x2446FCu;
            goto label_2446fc;
        }
    }
    ctx->pc = 0x2446E8u;
label_2446e8:
    // 0x2446e8: 0x86840116  lh          $a0, 0x116($s4)
    ctx->pc = 0x2446e8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 278)));
label_2446ec:
    // 0x2446ec: 0xc0657f8  jal         func_195FE0
label_2446f0:
    if (ctx->pc == 0x2446F0u) {
        ctx->pc = 0x2446F0u;
            // 0x2446f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2446F4u;
        goto label_2446f4;
    }
    ctx->pc = 0x2446ECu;
    SET_GPR_U32(ctx, 31, 0x2446F4u);
    ctx->pc = 0x2446F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2446ECu;
            // 0x2446f0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195FE0u;
    if (runtime->hasFunction(0x195FE0u)) {
        auto targetFn = runtime->lookupFunction(0x195FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2446F4u; }
        if (ctx->pc != 0x2446F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessageNo__Fii_0x195fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2446F4u; }
        if (ctx->pc != 0x2446F4u) { return; }
    }
    ctx->pc = 0x2446F4u;
label_2446f4:
    // 0x2446f4: 0x1000002e  b           . + 4 + (0x2E << 2)
label_2446f8:
    if (ctx->pc == 0x2446F8u) {
        ctx->pc = 0x2446F8u;
            // 0x2446f8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2446FCu;
        goto label_2446fc;
    }
    ctx->pc = 0x2446F4u;
    {
        const bool branch_taken_0x2446f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2446F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2446F4u;
            // 0x2446f8: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2446f4) {
            ctx->pc = 0x2447B0u;
            goto label_2447b0;
        }
    }
    ctx->pc = 0x2446FCu;
label_2446fc:
    // 0x2446fc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2446fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_244700:
    // 0x244700: 0x1082002b  beq         $a0, $v0, . + 4 + (0x2B << 2)
label_244704:
    if (ctx->pc == 0x244704u) {
        ctx->pc = 0x244704u;
            // 0x244704: 0x2482fffc  addiu       $v0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->pc = 0x244708u;
        goto label_244708;
    }
    ctx->pc = 0x244700u;
    {
        const bool branch_taken_0x244700 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x244704u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244700u;
            // 0x244704: 0x2482fffc  addiu       $v0, $a0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244700) {
            ctx->pc = 0x2447B0u;
            goto label_2447b0;
        }
    }
    ctx->pc = 0x244708u;
label_244708:
    // 0x244708: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x244708u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_24470c:
    // 0x24470c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24470cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_244710:
    // 0x244710: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x244710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_244714:
    // 0x244714: 0x844201e8  lh          $v0, 0x1E8($v0)
    ctx->pc = 0x244714u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 488)));
label_244718:
    // 0x244718: 0x24420064  addiu       $v0, $v0, 0x64
    ctx->pc = 0x244718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 100));
label_24471c:
    // 0x24471c: 0xc0876ec  jal         func_21DBB0
label_244720:
    if (ctx->pc == 0x244720u) {
        ctx->pc = 0x244720u;
            // 0x244720: 0x3c28821  addu        $s1, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->pc = 0x244724u;
        goto label_244724;
    }
    ctx->pc = 0x24471Cu;
    SET_GPR_U32(ctx, 31, 0x244724u);
    ctx->pc = 0x244720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24471Cu;
            // 0x244720: 0x3c28821  addu        $s1, $fp, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DBB0u;
    if (runtime->hasFunction(0x21DBB0u)) {
        auto targetFn = runtime->lookupFunction(0x21DBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244724u; }
        if (ctx->pc != 0x244724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPii_0x21dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244724u; }
        if (ctx->pc != 0x244724u) { return; }
    }
    ctx->pc = 0x244724u;
label_244724:
    // 0x244724: 0x10000022  b           . + 4 + (0x22 << 2)
label_244728:
    if (ctx->pc == 0x244728u) {
        ctx->pc = 0x24472Cu;
        goto label_24472c;
    }
    ctx->pc = 0x244724u;
    {
        const bool branch_taken_0x244724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x244724) {
            ctx->pc = 0x2447B0u;
            goto label_2447b0;
        }
    }
    ctx->pc = 0x24472Cu;
label_24472c:
    // 0x24472c: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x24472cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_244730:
    // 0x244730: 0x1482001f  bne         $a0, $v0, . + 4 + (0x1F << 2)
label_244734:
    if (ctx->pc == 0x244734u) {
        ctx->pc = 0x244734u;
            // 0x244734: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x244738u;
        goto label_244738;
    }
    ctx->pc = 0x244730u;
    {
        const bool branch_taken_0x244730 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x244734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244730u;
            // 0x244734: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244730) {
            ctx->pc = 0x2447B0u;
            goto label_2447b0;
        }
    }
    ctx->pc = 0x244738u;
label_244738:
    // 0x244738: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244738u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24473c:
    // 0x24473c: 0xafa20180  sw          $v0, 0x180($sp)
    ctx->pc = 0x24473cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 384), GPR_U32(ctx, 2));
label_244740:
    // 0x244740: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x244740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_244744:
    // 0x244744: 0xc0876ec  jal         func_21DBB0
label_244748:
    if (ctx->pc == 0x244748u) {
        ctx->pc = 0x244748u;
            // 0x244748: 0x2411006a  addiu       $s1, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->pc = 0x24474Cu;
        goto label_24474c;
    }
    ctx->pc = 0x244744u;
    SET_GPR_U32(ctx, 31, 0x24474Cu);
    ctx->pc = 0x244748u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244744u;
            // 0x244748: 0x2411006a  addiu       $s1, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DBB0u;
    if (runtime->hasFunction(0x21DBB0u)) {
        auto targetFn = runtime->lookupFunction(0x21DBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24474Cu; }
        if (ctx->pc != 0x24474Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPii_0x21dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24474Cu; }
        if (ctx->pc != 0x24474Cu) { return; }
    }
    ctx->pc = 0x24474Cu;
label_24474c:
    // 0x24474c: 0x10000018  b           . + 4 + (0x18 << 2)
label_244750:
    if (ctx->pc == 0x244750u) {
        ctx->pc = 0x244754u;
        goto label_244754;
    }
    ctx->pc = 0x24474Cu;
    {
        const bool branch_taken_0x24474c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24474c) {
            ctx->pc = 0x2447B0u;
            goto label_2447b0;
        }
    }
    ctx->pc = 0x244754u;
label_244754:
    // 0x244754: 0xc78096c8  lwc1        $f0, -0x6938($gp)
    ctx->pc = 0x244754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294940360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_244758:
    // 0x244758: 0x27a201ec  addiu       $v0, $sp, 0x1EC
    ctx->pc = 0x244758u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 492));
label_24475c:
    // 0x24475c: 0x2411006c  addiu       $s1, $zero, 0x6C
    ctx->pc = 0x24475cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_244760:
    // 0x244760: 0xc065af8  jal         func_196BE0
label_244764:
    if (ctx->pc == 0x244764u) {
        ctx->pc = 0x244764u;
            // 0x244764: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->pc = 0x244768u;
        goto label_244768;
    }
    ctx->pc = 0x244760u;
    SET_GPR_U32(ctx, 31, 0x244768u);
    ctx->pc = 0x244764u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244760u;
            // 0x244764: 0xe4400000  swc1        $f0, 0x0($v0) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244768u; }
        if (ctx->pc != 0x244768u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244768u; }
        if (ctx->pc != 0x244768u) { return; }
    }
    ctx->pc = 0x244768u;
label_244768:
    // 0x244768: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x244768u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_24476c:
    // 0x24476c: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x24476cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_244770:
    // 0x244770: 0xc0ad6c4  jal         func_2B5B10
label_244774:
    if (ctx->pc == 0x244774u) {
        ctx->pc = 0x244774u;
            // 0x244774: 0x84244d98  lh          $a0, 0x4D98($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19864)));
        ctx->pc = 0x244778u;
        goto label_244778;
    }
    ctx->pc = 0x244770u;
    SET_GPR_U32(ctx, 31, 0x244778u);
    ctx->pc = 0x244774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244770u;
            // 0x244774: 0x84244d98  lh          $a0, 0x4D98($at) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19864)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244778u; }
        if (ctx->pc != 0x244778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMonsterName__Fi_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244778u; }
        if (ctx->pc != 0x244778u) { return; }
    }
    ctx->pc = 0x244778u;
label_244778:
    // 0x244778: 0xafa201ec  sw          $v0, 0x1EC($sp)
    ctx->pc = 0x244778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 492), GPR_U32(ctx, 2));
label_24477c:
    // 0x24477c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24477cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_244780:
    // 0x244780: 0x27a501ec  addiu       $a1, $sp, 0x1EC
    ctx->pc = 0x244780u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 492));
label_244784:
    // 0x244784: 0xc087720  jal         func_21DC80
label_244788:
    if (ctx->pc == 0x244788u) {
        ctx->pc = 0x244788u;
            // 0x244788: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x24478Cu;
        goto label_24478c;
    }
    ctx->pc = 0x244784u;
    SET_GPR_U32(ctx, 31, 0x24478Cu);
    ctx->pc = 0x244788u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244784u;
            // 0x244788: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24478Cu; }
        if (ctx->pc != 0x24478Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24478Cu; }
        if (ctx->pc != 0x24478Cu) { return; }
    }
    ctx->pc = 0x24478Cu;
label_24478c:
    // 0x24478c: 0x10000008  b           . + 4 + (0x8 << 2)
label_244790:
    if (ctx->pc == 0x244790u) {
        ctx->pc = 0x244794u;
        goto label_244794;
    }
    ctx->pc = 0x24478Cu;
    {
        const bool branch_taken_0x24478c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24478c) {
            ctx->pc = 0x2447B0u;
            goto label_2447b0;
        }
    }
    ctx->pc = 0x244794u;
label_244794:
    // 0x244794: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x244794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_244798:
    // 0x244798: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
label_24479c:
    if (ctx->pc == 0x24479Cu) {
        ctx->pc = 0x24479Cu;
            // 0x24479c: 0x27d10085  addiu       $s1, $fp, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 133));
        ctx->pc = 0x2447A0u;
        goto label_2447a0;
    }
    ctx->pc = 0x244798u;
    {
        const bool branch_taken_0x244798 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x24479Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244798u;
            // 0x24479c: 0x27d10085  addiu       $s1, $fp, 0x85 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 30), 133));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244798) {
            ctx->pc = 0x2447B0u;
            goto label_2447b0;
        }
    }
    ctx->pc = 0x2447A0u;
label_2447a0:
    // 0x2447a0: 0x86840116  lh          $a0, 0x116($s4)
    ctx->pc = 0x2447a0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 278)));
label_2447a4:
    // 0x2447a4: 0xc0657f8  jal         func_195FE0
label_2447a8:
    if (ctx->pc == 0x2447A8u) {
        ctx->pc = 0x2447A8u;
            // 0x2447a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2447ACu;
        goto label_2447ac;
    }
    ctx->pc = 0x2447A4u;
    SET_GPR_U32(ctx, 31, 0x2447ACu);
    ctx->pc = 0x2447A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2447A4u;
            // 0x2447a8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195FE0u;
    if (runtime->hasFunction(0x195FE0u)) {
        auto targetFn = runtime->lookupFunction(0x195FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2447ACu; }
        if (ctx->pc != 0x2447ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessageNo__Fii_0x195fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2447ACu; }
        if (ctx->pc != 0x2447ACu) { return; }
    }
    ctx->pc = 0x2447ACu;
label_2447ac:
    // 0x2447ac: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2447acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2447b0:
    // 0x2447b0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2447b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2447b4:
    // 0x2447b4: 0xc090008  jal         func_240020
label_2447b8:
    if (ctx->pc == 0x2447B8u) {
        ctx->pc = 0x2447BCu;
        goto label_2447bc;
    }
    ctx->pc = 0x2447B4u;
    SET_GPR_U32(ctx, 31, 0x2447BCu);
    ctx->pc = 0x240020u;
    if (runtime->hasFunction(0x240020u)) {
        auto targetFn = runtime->lookupFunction(0x240020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2447BCu; }
        if (ctx->pc != 0x2447BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNowPosItemExist__13CMenuItemInfoFv_0x240020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2447BCu; }
        if (ctx->pc != 0x2447BCu) { return; }
    }
    ctx->pc = 0x2447BCu;
label_2447bc:
    // 0x2447bc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2447bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2447c0:
    // 0x2447c0: 0x12400010  beqz        $s2, . + 4 + (0x10 << 2)
label_2447c4:
    if (ctx->pc == 0x2447C4u) {
        ctx->pc = 0x2447C4u;
            // 0x2447c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2447C8u;
        goto label_2447c8;
    }
    ctx->pc = 0x2447C0u;
    {
        const bool branch_taken_0x2447c0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2447C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2447C0u;
            // 0x2447c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2447c0) {
            ctx->pc = 0x244804u;
            goto label_244804;
        }
    }
    ctx->pc = 0x2447C8u;
label_2447c8:
    // 0x2447c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2447c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2447cc:
    // 0x2447cc: 0xc0877f0  jal         func_21DFC0
label_2447d0:
    if (ctx->pc == 0x2447D0u) {
        ctx->pc = 0x2447D0u;
            // 0x2447d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2447D4u;
        goto label_2447d4;
    }
    ctx->pc = 0x2447CCu;
    SET_GPR_U32(ctx, 31, 0x2447D4u);
    ctx->pc = 0x2447D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2447CCu;
            // 0x2447d0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DFC0u;
    if (runtime->hasFunction(0x21DFC0u)) {
        auto targetFn = runtime->lookupFunction(0x21DFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2447D4u; }
        if (ctx->pc != 0x2447D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFP13CGameDataUsed_0x21dfc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2447D4u; }
        if (ctx->pc != 0x2447D4u) { return; }
    }
    ctx->pc = 0x2447D4u;
label_2447d4:
    // 0x2447d4: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x2447d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2447d8:
    // 0x2447d8: 0x240200b9  addiu       $v0, $zero, 0xB9
    ctx->pc = 0x2447d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
label_2447dc:
    // 0x2447dc: 0x246500c0  addiu       $a1, $v1, 0xC0
    ctx->pc = 0x2447dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
label_2447e0:
    // 0x2447e0: 0x846300c2  lh          $v1, 0xC2($v1)
    ctx->pc = 0x2447e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 194)));
label_2447e4:
    // 0x2447e4: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_2447e8:
    if (ctx->pc == 0x2447E8u) {
        ctx->pc = 0x2447ECu;
        goto label_2447ec;
    }
    ctx->pc = 0x2447E4u;
    {
        const bool branch_taken_0x2447e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2447e4) {
            ctx->pc = 0x24480Cu;
            goto label_24480c;
        }
    }
    ctx->pc = 0x2447ECu;
label_2447ec:
    // 0x2447ec: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_2447f0:
    if (ctx->pc == 0x2447F0u) {
        ctx->pc = 0x2447F0u;
            // 0x2447f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2447F4u;
        goto label_2447f4;
    }
    ctx->pc = 0x2447ECu;
    {
        const bool branch_taken_0x2447ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2447F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2447ECu;
            // 0x2447f0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2447ec) {
            ctx->pc = 0x24480Cu;
            goto label_24480c;
        }
    }
    ctx->pc = 0x2447F4u;
label_2447f4:
    // 0x2447f4: 0xc087844  jal         func_21E110
label_2447f8:
    if (ctx->pc == 0x2447F8u) {
        ctx->pc = 0x2447F8u;
            // 0x2447f8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2447FCu;
        goto label_2447fc;
    }
    ctx->pc = 0x2447F4u;
    SET_GPR_U32(ctx, 31, 0x2447FCu);
    ctx->pc = 0x2447F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2447F4u;
            // 0x2447f8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21E110u;
    if (runtime->hasFunction(0x21E110u)) {
        auto targetFn = runtime->lookupFunction(0x21E110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2447FCu; }
        if (ctx->pc != 0x2447FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFP13CGameDataUsedP13CGameDataUsed_0x21e110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2447FCu; }
        if (ctx->pc != 0x2447FCu) { return; }
    }
    ctx->pc = 0x2447FCu;
label_2447fc:
    // 0x2447fc: 0x10000004  b           . + 4 + (0x4 << 2)
label_244800:
    if (ctx->pc == 0x244800u) {
        ctx->pc = 0x244800u;
            // 0x244800: 0x8f8294f8  lw          $v0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->pc = 0x244804u;
        goto label_244804;
    }
    ctx->pc = 0x2447FCu;
    {
        const bool branch_taken_0x2447fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2447FCu;
            // 0x244800: 0x8f8294f8  lw          $v0, -0x6B08($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2447fc) {
            ctx->pc = 0x244810u;
            goto label_244810;
        }
    }
    ctx->pc = 0x244804u;
label_244804:
    // 0x244804: 0xc0877e0  jal         func_21DF80
label_244808:
    if (ctx->pc == 0x244808u) {
        ctx->pc = 0x244808u;
            // 0x244808: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24480Cu;
        goto label_24480c;
    }
    ctx->pc = 0x244804u;
    SET_GPR_U32(ctx, 31, 0x24480Cu);
    ctx->pc = 0x244808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244804u;
            // 0x244808: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24480Cu; }
        if (ctx->pc != 0x24480Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24480Cu; }
        if (ctx->pc != 0x24480Cu) { return; }
    }
    ctx->pc = 0x24480Cu;
label_24480c:
    // 0x24480c: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x24480cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_244810:
    // 0x244810: 0x244600c0  addiu       $a2, $v0, 0xC0
    ctx->pc = 0x244810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
label_244814:
    // 0x244814: 0x844200c2  lh          $v0, 0xC2($v0)
    ctx->pc = 0x244814u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 194)));
label_244818:
    // 0x244818: 0x18400006  blez        $v0, . + 4 + (0x6 << 2)
label_24481c:
    if (ctx->pc == 0x24481Cu) {
        ctx->pc = 0x24481Cu;
            // 0x24481c: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x244820u;
        goto label_244820;
    }
    ctx->pc = 0x244818u;
    {
        const bool branch_taken_0x244818 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x24481Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244818u;
            // 0x24481c: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244818) {
            ctx->pc = 0x244834u;
            goto label_244834;
        }
    }
    ctx->pc = 0x244820u;
label_244820:
    // 0x244820: 0x8c25d8d0  lw          $a1, -0x2730($at)
    ctx->pc = 0x244820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957264)));
label_244824:
    // 0x244824: 0xc08ae68  jal         func_22B9A0
label_244828:
    if (ctx->pc == 0x244828u) {
        ctx->pc = 0x244828u;
            // 0x244828: 0x8e8401b4  lw          $a0, 0x1B4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 436)));
        ctx->pc = 0x24482Cu;
        goto label_24482c;
    }
    ctx->pc = 0x244824u;
    SET_GPR_U32(ctx, 31, 0x24482Cu);
    ctx->pc = 0x244828u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244824u;
            // 0x244828: 0x8e8401b4  lw          $a0, 0x1B4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 436)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B9A0u;
    if (runtime->hasFunction(0x22B9A0u)) {
        auto targetFn = runtime->lookupFunction(0x22B9A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24482Cu; }
        if (ctx->pc != 0x24482Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Func_MenuItemBrdPrepare2__FP18MENUFORMPARTS_TYPEP13CGameDataUsedP13CGameDataUsed_0x22b9a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24482Cu; }
        if (ctx->pc != 0x24482Cu) { return; }
    }
    ctx->pc = 0x24482Cu;
label_24482c:
    // 0x24482c: 0x10000005  b           . + 4 + (0x5 << 2)
label_244830:
    if (ctx->pc == 0x244830u) {
        ctx->pc = 0x244830u;
            // 0x244830: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x244834u;
        goto label_244834;
    }
    ctx->pc = 0x24482Cu;
    {
        const bool branch_taken_0x24482c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244830u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24482Cu;
            // 0x244830: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24482c) {
            ctx->pc = 0x244844u;
            goto label_244844;
        }
    }
    ctx->pc = 0x244834u;
label_244834:
    // 0x244834: 0x8e8501b4  lw          $a1, 0x1B4($s4)
    ctx->pc = 0x244834u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 436)));
label_244838:
    // 0x244838: 0xc08aff4  jal         func_22BFD0
label_24483c:
    if (ctx->pc == 0x24483Cu) {
        ctx->pc = 0x24483Cu;
            // 0x24483c: 0x8f8494ac  lw          $a0, -0x6B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
        ctx->pc = 0x244840u;
        goto label_244840;
    }
    ctx->pc = 0x244838u;
    SET_GPR_U32(ctx, 31, 0x244840u);
    ctx->pc = 0x24483Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244838u;
            // 0x24483c: 0x8f8494ac  lw          $a0, -0x6B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22BFD0u;
    if (runtime->hasFunction(0x22BFD0u)) {
        auto targetFn = runtime->lookupFunction(0x22BFD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244840u; }
        if (ctx->pc != 0x244840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckItemBoardFunc_MenuIconDrawPrepare__FP16CUserDataManagerP18MENUFORMPARTS_TYPE_0x22bfd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244840u; }
        if (ctx->pc != 0x244840u) { return; }
    }
    ctx->pc = 0x244840u;
label_244840:
    // 0x244840: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x244840u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_244844:
    // 0x244844: 0xc090008  jal         func_240020
label_244848:
    if (ctx->pc == 0x244848u) {
        ctx->pc = 0x24484Cu;
        goto label_24484c;
    }
    ctx->pc = 0x244844u;
    SET_GPR_U32(ctx, 31, 0x24484Cu);
    ctx->pc = 0x240020u;
    if (runtime->hasFunction(0x240020u)) {
        auto targetFn = runtime->lookupFunction(0x240020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24484Cu; }
        if (ctx->pc != 0x24484Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SearchNowPosItemExist__13CMenuItemInfoFv_0x240020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24484Cu; }
        if (ctx->pc != 0x24484Cu) { return; }
    }
    ctx->pc = 0x24484Cu;
label_24484c:
    // 0x24484c: 0xaf829360  sw          $v0, -0x6CA0($gp)
    ctx->pc = 0x24484cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939488), GPR_U32(ctx, 2));
label_244850:
    // 0x244850: 0x8f829364  lw          $v0, -0x6C9C($gp)
    ctx->pc = 0x244850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939492)));
label_244854:
    // 0x244854: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_244858:
    if (ctx->pc == 0x244858u) {
        ctx->pc = 0x24485Cu;
        goto label_24485c;
    }
    ctx->pc = 0x244854u;
    {
        const bool branch_taken_0x244854 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244854) {
            ctx->pc = 0x2448F8u;
            goto label_2448f8;
        }
    }
    ctx->pc = 0x24485Cu;
label_24485c:
    // 0x24485c: 0x86830014  lh          $v1, 0x14($s4)
    ctx->pc = 0x24485cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 20)));
label_244860:
    // 0x244860: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x244860u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_244864:
    // 0x244864: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
label_244868:
    if (ctx->pc == 0x244868u) {
        ctx->pc = 0x24486Cu;
        goto label_24486c;
    }
    ctx->pc = 0x244864u;
    {
        const bool branch_taken_0x244864 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x244864) {
            ctx->pc = 0x244888u;
            goto label_244888;
        }
    }
    ctx->pc = 0x24486Cu;
label_24486c:
    // 0x24486c: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x24486cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
label_244870:
    // 0x244870: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x244870u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_244874:
    // 0x244874: 0x27a501e0  addiu       $a1, $sp, 0x1E0
    ctx->pc = 0x244874u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_244878:
    // 0x244878: 0xc08b0e0  jal         func_22C380
label_24487c:
    if (ctx->pc == 0x24487Cu) {
        ctx->pc = 0x24487Cu;
            // 0x24487c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x244880u;
        goto label_244880;
    }
    ctx->pc = 0x244878u;
    SET_GPR_U32(ctx, 31, 0x244880u);
    ctx->pc = 0x24487Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244878u;
            // 0x24487c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22C380u;
    if (runtime->hasFunction(0x22C380u)) {
        auto targetFn = runtime->lookupFunction(0x22C380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244880u; }
        if (ctx->pc != 0x244880u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPosMenuItemOnItemBrd__18CMenuPosDataManageFPiii_0x22c380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244880u; }
        if (ctx->pc != 0x244880u) { return; }
    }
    ctx->pc = 0x244880u;
label_244880:
    // 0x244880: 0x10000012  b           . + 4 + (0x12 << 2)
label_244884:
    if (ctx->pc == 0x244884u) {
        ctx->pc = 0x244884u;
            // 0x244884: 0xc7a001e0  lwc1        $f0, 0x1E0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x244888u;
        goto label_244888;
    }
    ctx->pc = 0x244880u;
    {
        const bool branch_taken_0x244880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244880u;
            // 0x244884: 0xc7a001e0  lwc1        $f0, 0x1E0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x244880) {
            ctx->pc = 0x2448CCu;
            goto label_2448cc;
        }
    }
    ctx->pc = 0x244888u;
label_244888:
    // 0x244888: 0x1460000f  bnez        $v1, . + 4 + (0xF << 2)
label_24488c:
    if (ctx->pc == 0x24488Cu) {
        ctx->pc = 0x244890u;
        goto label_244890;
    }
    ctx->pc = 0x244888u;
    {
        const bool branch_taken_0x244888 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x244888) {
            ctx->pc = 0x2448C8u;
            goto label_2448c8;
        }
    }
    ctx->pc = 0x244890u;
label_244890:
    // 0x244890: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x244890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_244894:
    // 0x244894: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x244894u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_244898:
    // 0x244898: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x244898u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_24489c:
    // 0x24489c: 0x8c460070  lw          $a2, 0x70($v0)
    ctx->pc = 0x24489cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_2448a0:
    // 0x2448a0: 0xc04a234  jal         func_1288D0
label_2448a4:
    if (ctx->pc == 0x2448A4u) {
        ctx->pc = 0x2448A4u;
            // 0x2448a4: 0x24a5b1e0  addiu       $a1, $a1, -0x4E20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947296));
        ctx->pc = 0x2448A8u;
        goto label_2448a8;
    }
    ctx->pc = 0x2448A0u;
    SET_GPR_U32(ctx, 31, 0x2448A8u);
    ctx->pc = 0x2448A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2448A0u;
            // 0x2448a4: 0x24a5b1e0  addiu       $a1, $a1, -0x4E20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947296));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2448A8u; }
        if (ctx->pc != 0x2448A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2448A8u; }
        if (ctx->pc != 0x2448A8u) { return; }
    }
    ctx->pc = 0x2448A8u;
label_2448a8:
    // 0x2448a8: 0x86820114  lh          $v0, 0x114($s4)
    ctx->pc = 0x2448a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 276)));
label_2448ac:
    // 0x2448ac: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x2448acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_2448b0:
    // 0x2448b0: 0x27a601e0  addiu       $a2, $sp, 0x1E0
    ctx->pc = 0x2448b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 480));
label_2448b4:
    // 0x2448b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2448b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2448b8:
    // 0x2448b8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x2448b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_2448bc:
    // 0x2448bc: 0x8c440180  lw          $a0, 0x180($v0)
    ctx->pc = 0x2448bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 384)));
label_2448c0:
    // 0x2448c0: 0xc08974c  jal         func_225D30
label_2448c4:
    if (ctx->pc == 0x2448C4u) {
        ctx->pc = 0x2448C4u;
            // 0x2448c4: 0x27a701e4  addiu       $a3, $sp, 0x1E4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 484));
        ctx->pc = 0x2448C8u;
        goto label_2448c8;
    }
    ctx->pc = 0x2448C0u;
    SET_GPR_U32(ctx, 31, 0x2448C8u);
    ctx->pc = 0x2448C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2448C0u;
            // 0x2448c4: 0x27a701e4  addiu       $a3, $sp, 0x1E4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 484));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225D30u;
    if (runtime->hasFunction(0x225D30u)) {
        auto targetFn = runtime->lookupFunction(0x225D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2448C8u; }
        if (ctx->pc != 0x2448C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPutPosXY__16CMenuPosDataFormFPcRiRi_0x225d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2448C8u; }
        if (ctx->pc != 0x2448C8u) { return; }
    }
    ctx->pc = 0x2448C8u;
label_2448c8:
    // 0x2448c8: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x2448c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2448cc:
    // 0x2448cc: 0x8f839364  lw          $v1, -0x6C9C($gp)
    ctx->pc = 0x2448ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939492)));
label_2448d0:
    // 0x2448d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2448d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2448d4:
    // 0x2448d4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2448d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2448d8:
    // 0x2448d8: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x2448d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
label_2448dc:
    // 0x2448dc: 0xc7a001e4  lwc1        $f0, 0x1E4($sp)
    ctx->pc = 0x2448dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 484)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2448e0:
    // 0x2448e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2448e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2448e4:
    // 0x2448e4: 0xe4600010  swc1        $f0, 0x10($v1)
    ctx->pc = 0x2448e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 16), bits); }
label_2448e8:
    // 0x2448e8: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x2448e8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_2448ec:
    // 0x2448ec: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2448f0:
    if (ctx->pc == 0x2448F0u) {
        ctx->pc = 0x2448F4u;
        goto label_2448f4;
    }
    ctx->pc = 0x2448ECu;
    {
        const bool branch_taken_0x2448ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2448ec) {
            ctx->pc = 0x2448F8u;
            goto label_2448f8;
        }
    }
    ctx->pc = 0x2448F4u;
label_2448f4:
    // 0x2448f4: 0xaf809360  sw          $zero, -0x6CA0($gp)
    ctx->pc = 0x2448f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939488), GPR_U32(ctx, 0));
label_2448f8:
    // 0x2448f8: 0x838396c0  lb          $v1, -0x6940($gp)
    ctx->pc = 0x2448f8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940352)));
label_2448fc:
    // 0x2448fc: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x2448fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_244900:
    // 0x244900: 0x10430016  beq         $v0, $v1, . + 4 + (0x16 << 2)
label_244904:
    if (ctx->pc == 0x244904u) {
        ctx->pc = 0x244908u;
        goto label_244908;
    }
    ctx->pc = 0x244900u;
    {
        const bool branch_taken_0x244900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x244900) {
            ctx->pc = 0x24495Cu;
            goto label_24495c;
        }
    }
    ctx->pc = 0x244908u;
label_244908:
    // 0x244908: 0x86830110  lh          $v1, 0x110($s4)
    ctx->pc = 0x244908u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 272)));
label_24490c:
    // 0x24490c: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_244910:
    if (ctx->pc == 0x244910u) {
        ctx->pc = 0x244910u;
            // 0x244910: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x244914u;
        goto label_244914;
    }
    ctx->pc = 0x24490Cu;
    {
        const bool branch_taken_0x24490c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x244910u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24490Cu;
            // 0x244910: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24490c) {
            ctx->pc = 0x24492Cu;
            goto label_24492c;
        }
    }
    ctx->pc = 0x244914u;
label_244914:
    // 0x244914: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x244914u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_244918:
    // 0x244918: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x244918u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24491c:
    // 0x24491c: 0xc0aed10  jal         func_2BB440
label_244920:
    if (ctx->pc == 0x244920u) {
        ctx->pc = 0x244920u;
            // 0x244920: 0x2484ca80  addiu       $a0, $a0, -0x3580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953600));
        ctx->pc = 0x244924u;
        goto label_244924;
    }
    ctx->pc = 0x24491Cu;
    SET_GPR_U32(ctx, 31, 0x244924u);
    ctx->pc = 0x244920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24491Cu;
            // 0x244920: 0x2484ca80  addiu       $a0, $a0, -0x3580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB440u;
    if (runtime->hasFunction(0x2BB440u)) {
        auto targetFn = runtime->lookupFunction(0x2BB440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244924u; }
        if (ctx->pc != 0x244924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemCharaDataLoadEndCheckAfter__FPP17MENU_BGREAD_INFO2i_0x2bb440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244924u; }
        if (ctx->pc != 0x244924u) { return; }
    }
    ctx->pc = 0x244924u;
label_244924:
    // 0x244924: 0x1000000e  b           . + 4 + (0xE << 2)
label_244928:
    if (ctx->pc == 0x244928u) {
        ctx->pc = 0x244928u;
            // 0x244928: 0x8fa200ac  lw          $v0, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->pc = 0x24492Cu;
        goto label_24492c;
    }
    ctx->pc = 0x244924u;
    {
        const bool branch_taken_0x244924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244924u;
            // 0x244928: 0x8fa200ac  lw          $v0, 0xAC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244924) {
            ctx->pc = 0x244960u;
            goto label_244960;
        }
    }
    ctx->pc = 0x24492Cu;
label_24492c:
    // 0x24492c: 0x14650006  bne         $v1, $a1, . + 4 + (0x6 << 2)
label_244930:
    if (ctx->pc == 0x244930u) {
        ctx->pc = 0x244930u;
            // 0x244930: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x244934u;
        goto label_244934;
    }
    ctx->pc = 0x24492Cu;
    {
        const bool branch_taken_0x24492c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x244930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24492Cu;
            // 0x244930: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24492c) {
            ctx->pc = 0x244948u;
            goto label_244948;
        }
    }
    ctx->pc = 0x244934u;
label_244934:
    // 0x244934: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x244934u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_244938:
    // 0x244938: 0xc0aed10  jal         func_2BB440
label_24493c:
    if (ctx->pc == 0x24493Cu) {
        ctx->pc = 0x24493Cu;
            // 0x24493c: 0x2484ca80  addiu       $a0, $a0, -0x3580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953600));
        ctx->pc = 0x244940u;
        goto label_244940;
    }
    ctx->pc = 0x244938u;
    SET_GPR_U32(ctx, 31, 0x244940u);
    ctx->pc = 0x24493Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244938u;
            // 0x24493c: 0x2484ca80  addiu       $a0, $a0, -0x3580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB440u;
    if (runtime->hasFunction(0x2BB440u)) {
        auto targetFn = runtime->lookupFunction(0x2BB440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244940u; }
        if (ctx->pc != 0x244940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemCharaDataLoadEndCheckAfter__FPP17MENU_BGREAD_INFO2i_0x2bb440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244940u; }
        if (ctx->pc != 0x244940u) { return; }
    }
    ctx->pc = 0x244940u;
label_244940:
    // 0x244940: 0x10000006  b           . + 4 + (0x6 << 2)
label_244944:
    if (ctx->pc == 0x244944u) {
        ctx->pc = 0x244948u;
        goto label_244948;
    }
    ctx->pc = 0x244940u;
    {
        const bool branch_taken_0x244940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x244940) {
            ctx->pc = 0x24495Cu;
            goto label_24495c;
        }
    }
    ctx->pc = 0x244948u;
label_244948:
    // 0x244948: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_24494c:
    if (ctx->pc == 0x24494Cu) {
        ctx->pc = 0x24494Cu;
            // 0x24494c: 0x3c0401f1  lui         $a0, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
        ctx->pc = 0x244950u;
        goto label_244950;
    }
    ctx->pc = 0x244948u;
    {
        const bool branch_taken_0x244948 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24494Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244948u;
            // 0x24494c: 0x3c0401f1  lui         $a0, 0x1F1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244948) {
            ctx->pc = 0x24495Cu;
            goto label_24495c;
        }
    }
    ctx->pc = 0x244950u;
label_244950:
    // 0x244950: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x244950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_244954:
    // 0x244954: 0xc0aed10  jal         func_2BB440
label_244958:
    if (ctx->pc == 0x244958u) {
        ctx->pc = 0x244958u;
            // 0x244958: 0x2484ca80  addiu       $a0, $a0, -0x3580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953600));
        ctx->pc = 0x24495Cu;
        goto label_24495c;
    }
    ctx->pc = 0x244954u;
    SET_GPR_U32(ctx, 31, 0x24495Cu);
    ctx->pc = 0x244958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244954u;
            // 0x244958: 0x2484ca80  addiu       $a0, $a0, -0x3580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB440u;
    if (runtime->hasFunction(0x2BB440u)) {
        auto targetFn = runtime->lookupFunction(0x2BB440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24495Cu; }
        if (ctx->pc != 0x24495Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemCharaDataLoadEndCheckAfter__FPP17MENU_BGREAD_INFO2i_0x2bb440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24495Cu; }
        if (ctx->pc != 0x24495Cu) { return; }
    }
    ctx->pc = 0x24495Cu;
label_24495c:
    // 0x24495c: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x24495cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_244960:
    // 0x244960: 0xa38296c0  sb          $v0, -0x6940($gp)
    ctx->pc = 0x244960u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940352), (uint8_t)GPR_U32(ctx, 2));
label_244964:
    // 0x244964: 0x8e85019c  lw          $a1, 0x19C($s4)
    ctx->pc = 0x244964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 412)));
label_244968:
    // 0x244968: 0xc091410  jal         func_245040
label_24496c:
    if (ctx->pc == 0x24496Cu) {
        ctx->pc = 0x24496Cu;
            // 0x24496c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x244970u;
        goto label_244970;
    }
    ctx->pc = 0x244968u;
    SET_GPR_U32(ctx, 31, 0x244970u);
    ctx->pc = 0x24496Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x244968u;
            // 0x24496c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x245040u;
    if (runtime->hasFunction(0x245040u)) {
        auto targetFn = runtime->lookupFunction(0x245040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244970u; }
        if (ctx->pc != 0x244970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EffectDrawCheck__14CBaseMenuClassFP16CMenuPosDataForm_0x245040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x244970u; }
        if (ctx->pc != 0x244970u) { return; }
    }
    ctx->pc = 0x244970u;
label_244970:
    // 0x244970: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x244970u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_244974:
    // 0x244974: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x244974u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_244978:
    // 0x244978: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x244978u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_24497c:
    // 0x24497c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x24497cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_244980:
    // 0x244980: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x244980u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_244984:
    // 0x244984: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x244984u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_244988:
    // 0x244988: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x244988u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_24498c:
    // 0x24498c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x24498cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_244990:
    // 0x244990: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x244990u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_244994:
    // 0x244994: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x244994u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_244998:
    // 0x244998: 0x3e00008  jr          $ra
label_24499c:
    if (ctx->pc == 0x24499Cu) {
        ctx->pc = 0x24499Cu;
            // 0x24499c: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->pc = 0x2449A0u;
        goto label_fallthrough_0x244998;
    }
    ctx->pc = 0x244998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24499Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x244998u;
            // 0x24499c: 0x27bd01f0  addiu       $sp, $sp, 0x1F0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 496));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x244998:
    ctx->pc = 0x2449A0u;
}
