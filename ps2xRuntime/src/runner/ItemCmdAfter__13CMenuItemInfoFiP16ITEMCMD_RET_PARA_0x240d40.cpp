#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: ItemCmdAfter__13CMenuItemInfoFiP16ITEMCMD_RET_PARA
// Address: 0x240d40 - 0x241f0c
void ItemCmdAfter__13CMenuItemInfoFiP16ITEMCMD_RET_PARA_0x240d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ItemCmdAfter__13CMenuItemInfoFiP16ITEMCMD_RET_PARA_0x240d40");
#endif

    switch (ctx->pc) {
        case 0x240d40u: goto label_240d40;
        case 0x240d44u: goto label_240d44;
        case 0x240d48u: goto label_240d48;
        case 0x240d4cu: goto label_240d4c;
        case 0x240d50u: goto label_240d50;
        case 0x240d54u: goto label_240d54;
        case 0x240d58u: goto label_240d58;
        case 0x240d5cu: goto label_240d5c;
        case 0x240d60u: goto label_240d60;
        case 0x240d64u: goto label_240d64;
        case 0x240d68u: goto label_240d68;
        case 0x240d6cu: goto label_240d6c;
        case 0x240d70u: goto label_240d70;
        case 0x240d74u: goto label_240d74;
        case 0x240d78u: goto label_240d78;
        case 0x240d7cu: goto label_240d7c;
        case 0x240d80u: goto label_240d80;
        case 0x240d84u: goto label_240d84;
        case 0x240d88u: goto label_240d88;
        case 0x240d8cu: goto label_240d8c;
        case 0x240d90u: goto label_240d90;
        case 0x240d94u: goto label_240d94;
        case 0x240d98u: goto label_240d98;
        case 0x240d9cu: goto label_240d9c;
        case 0x240da0u: goto label_240da0;
        case 0x240da4u: goto label_240da4;
        case 0x240da8u: goto label_240da8;
        case 0x240dacu: goto label_240dac;
        case 0x240db0u: goto label_240db0;
        case 0x240db4u: goto label_240db4;
        case 0x240db8u: goto label_240db8;
        case 0x240dbcu: goto label_240dbc;
        case 0x240dc0u: goto label_240dc0;
        case 0x240dc4u: goto label_240dc4;
        case 0x240dc8u: goto label_240dc8;
        case 0x240dccu: goto label_240dcc;
        case 0x240dd0u: goto label_240dd0;
        case 0x240dd4u: goto label_240dd4;
        case 0x240dd8u: goto label_240dd8;
        case 0x240ddcu: goto label_240ddc;
        case 0x240de0u: goto label_240de0;
        case 0x240de4u: goto label_240de4;
        case 0x240de8u: goto label_240de8;
        case 0x240decu: goto label_240dec;
        case 0x240df0u: goto label_240df0;
        case 0x240df4u: goto label_240df4;
        case 0x240df8u: goto label_240df8;
        case 0x240dfcu: goto label_240dfc;
        case 0x240e00u: goto label_240e00;
        case 0x240e04u: goto label_240e04;
        case 0x240e08u: goto label_240e08;
        case 0x240e0cu: goto label_240e0c;
        case 0x240e10u: goto label_240e10;
        case 0x240e14u: goto label_240e14;
        case 0x240e18u: goto label_240e18;
        case 0x240e1cu: goto label_240e1c;
        case 0x240e20u: goto label_240e20;
        case 0x240e24u: goto label_240e24;
        case 0x240e28u: goto label_240e28;
        case 0x240e2cu: goto label_240e2c;
        case 0x240e30u: goto label_240e30;
        case 0x240e34u: goto label_240e34;
        case 0x240e38u: goto label_240e38;
        case 0x240e3cu: goto label_240e3c;
        case 0x240e40u: goto label_240e40;
        case 0x240e44u: goto label_240e44;
        case 0x240e48u: goto label_240e48;
        case 0x240e4cu: goto label_240e4c;
        case 0x240e50u: goto label_240e50;
        case 0x240e54u: goto label_240e54;
        case 0x240e58u: goto label_240e58;
        case 0x240e5cu: goto label_240e5c;
        case 0x240e60u: goto label_240e60;
        case 0x240e64u: goto label_240e64;
        case 0x240e68u: goto label_240e68;
        case 0x240e6cu: goto label_240e6c;
        case 0x240e70u: goto label_240e70;
        case 0x240e74u: goto label_240e74;
        case 0x240e78u: goto label_240e78;
        case 0x240e7cu: goto label_240e7c;
        case 0x240e80u: goto label_240e80;
        case 0x240e84u: goto label_240e84;
        case 0x240e88u: goto label_240e88;
        case 0x240e8cu: goto label_240e8c;
        case 0x240e90u: goto label_240e90;
        case 0x240e94u: goto label_240e94;
        case 0x240e98u: goto label_240e98;
        case 0x240e9cu: goto label_240e9c;
        case 0x240ea0u: goto label_240ea0;
        case 0x240ea4u: goto label_240ea4;
        case 0x240ea8u: goto label_240ea8;
        case 0x240eacu: goto label_240eac;
        case 0x240eb0u: goto label_240eb0;
        case 0x240eb4u: goto label_240eb4;
        case 0x240eb8u: goto label_240eb8;
        case 0x240ebcu: goto label_240ebc;
        case 0x240ec0u: goto label_240ec0;
        case 0x240ec4u: goto label_240ec4;
        case 0x240ec8u: goto label_240ec8;
        case 0x240eccu: goto label_240ecc;
        case 0x240ed0u: goto label_240ed0;
        case 0x240ed4u: goto label_240ed4;
        case 0x240ed8u: goto label_240ed8;
        case 0x240edcu: goto label_240edc;
        case 0x240ee0u: goto label_240ee0;
        case 0x240ee4u: goto label_240ee4;
        case 0x240ee8u: goto label_240ee8;
        case 0x240eecu: goto label_240eec;
        case 0x240ef0u: goto label_240ef0;
        case 0x240ef4u: goto label_240ef4;
        case 0x240ef8u: goto label_240ef8;
        case 0x240efcu: goto label_240efc;
        case 0x240f00u: goto label_240f00;
        case 0x240f04u: goto label_240f04;
        case 0x240f08u: goto label_240f08;
        case 0x240f0cu: goto label_240f0c;
        case 0x240f10u: goto label_240f10;
        case 0x240f14u: goto label_240f14;
        case 0x240f18u: goto label_240f18;
        case 0x240f1cu: goto label_240f1c;
        case 0x240f20u: goto label_240f20;
        case 0x240f24u: goto label_240f24;
        case 0x240f28u: goto label_240f28;
        case 0x240f2cu: goto label_240f2c;
        case 0x240f30u: goto label_240f30;
        case 0x240f34u: goto label_240f34;
        case 0x240f38u: goto label_240f38;
        case 0x240f3cu: goto label_240f3c;
        case 0x240f40u: goto label_240f40;
        case 0x240f44u: goto label_240f44;
        case 0x240f48u: goto label_240f48;
        case 0x240f4cu: goto label_240f4c;
        case 0x240f50u: goto label_240f50;
        case 0x240f54u: goto label_240f54;
        case 0x240f58u: goto label_240f58;
        case 0x240f5cu: goto label_240f5c;
        case 0x240f60u: goto label_240f60;
        case 0x240f64u: goto label_240f64;
        case 0x240f68u: goto label_240f68;
        case 0x240f6cu: goto label_240f6c;
        case 0x240f70u: goto label_240f70;
        case 0x240f74u: goto label_240f74;
        case 0x240f78u: goto label_240f78;
        case 0x240f7cu: goto label_240f7c;
        case 0x240f80u: goto label_240f80;
        case 0x240f84u: goto label_240f84;
        case 0x240f88u: goto label_240f88;
        case 0x240f8cu: goto label_240f8c;
        case 0x240f90u: goto label_240f90;
        case 0x240f94u: goto label_240f94;
        case 0x240f98u: goto label_240f98;
        case 0x240f9cu: goto label_240f9c;
        case 0x240fa0u: goto label_240fa0;
        case 0x240fa4u: goto label_240fa4;
        case 0x240fa8u: goto label_240fa8;
        case 0x240facu: goto label_240fac;
        case 0x240fb0u: goto label_240fb0;
        case 0x240fb4u: goto label_240fb4;
        case 0x240fb8u: goto label_240fb8;
        case 0x240fbcu: goto label_240fbc;
        case 0x240fc0u: goto label_240fc0;
        case 0x240fc4u: goto label_240fc4;
        case 0x240fc8u: goto label_240fc8;
        case 0x240fccu: goto label_240fcc;
        case 0x240fd0u: goto label_240fd0;
        case 0x240fd4u: goto label_240fd4;
        case 0x240fd8u: goto label_240fd8;
        case 0x240fdcu: goto label_240fdc;
        case 0x240fe0u: goto label_240fe0;
        case 0x240fe4u: goto label_240fe4;
        case 0x240fe8u: goto label_240fe8;
        case 0x240fecu: goto label_240fec;
        case 0x240ff0u: goto label_240ff0;
        case 0x240ff4u: goto label_240ff4;
        case 0x240ff8u: goto label_240ff8;
        case 0x240ffcu: goto label_240ffc;
        case 0x241000u: goto label_241000;
        case 0x241004u: goto label_241004;
        case 0x241008u: goto label_241008;
        case 0x24100cu: goto label_24100c;
        case 0x241010u: goto label_241010;
        case 0x241014u: goto label_241014;
        case 0x241018u: goto label_241018;
        case 0x24101cu: goto label_24101c;
        case 0x241020u: goto label_241020;
        case 0x241024u: goto label_241024;
        case 0x241028u: goto label_241028;
        case 0x24102cu: goto label_24102c;
        case 0x241030u: goto label_241030;
        case 0x241034u: goto label_241034;
        case 0x241038u: goto label_241038;
        case 0x24103cu: goto label_24103c;
        case 0x241040u: goto label_241040;
        case 0x241044u: goto label_241044;
        case 0x241048u: goto label_241048;
        case 0x24104cu: goto label_24104c;
        case 0x241050u: goto label_241050;
        case 0x241054u: goto label_241054;
        case 0x241058u: goto label_241058;
        case 0x24105cu: goto label_24105c;
        case 0x241060u: goto label_241060;
        case 0x241064u: goto label_241064;
        case 0x241068u: goto label_241068;
        case 0x24106cu: goto label_24106c;
        case 0x241070u: goto label_241070;
        case 0x241074u: goto label_241074;
        case 0x241078u: goto label_241078;
        case 0x24107cu: goto label_24107c;
        case 0x241080u: goto label_241080;
        case 0x241084u: goto label_241084;
        case 0x241088u: goto label_241088;
        case 0x24108cu: goto label_24108c;
        case 0x241090u: goto label_241090;
        case 0x241094u: goto label_241094;
        case 0x241098u: goto label_241098;
        case 0x24109cu: goto label_24109c;
        case 0x2410a0u: goto label_2410a0;
        case 0x2410a4u: goto label_2410a4;
        case 0x2410a8u: goto label_2410a8;
        case 0x2410acu: goto label_2410ac;
        case 0x2410b0u: goto label_2410b0;
        case 0x2410b4u: goto label_2410b4;
        case 0x2410b8u: goto label_2410b8;
        case 0x2410bcu: goto label_2410bc;
        case 0x2410c0u: goto label_2410c0;
        case 0x2410c4u: goto label_2410c4;
        case 0x2410c8u: goto label_2410c8;
        case 0x2410ccu: goto label_2410cc;
        case 0x2410d0u: goto label_2410d0;
        case 0x2410d4u: goto label_2410d4;
        case 0x2410d8u: goto label_2410d8;
        case 0x2410dcu: goto label_2410dc;
        case 0x2410e0u: goto label_2410e0;
        case 0x2410e4u: goto label_2410e4;
        case 0x2410e8u: goto label_2410e8;
        case 0x2410ecu: goto label_2410ec;
        case 0x2410f0u: goto label_2410f0;
        case 0x2410f4u: goto label_2410f4;
        case 0x2410f8u: goto label_2410f8;
        case 0x2410fcu: goto label_2410fc;
        case 0x241100u: goto label_241100;
        case 0x241104u: goto label_241104;
        case 0x241108u: goto label_241108;
        case 0x24110cu: goto label_24110c;
        case 0x241110u: goto label_241110;
        case 0x241114u: goto label_241114;
        case 0x241118u: goto label_241118;
        case 0x24111cu: goto label_24111c;
        case 0x241120u: goto label_241120;
        case 0x241124u: goto label_241124;
        case 0x241128u: goto label_241128;
        case 0x24112cu: goto label_24112c;
        case 0x241130u: goto label_241130;
        case 0x241134u: goto label_241134;
        case 0x241138u: goto label_241138;
        case 0x24113cu: goto label_24113c;
        case 0x241140u: goto label_241140;
        case 0x241144u: goto label_241144;
        case 0x241148u: goto label_241148;
        case 0x24114cu: goto label_24114c;
        case 0x241150u: goto label_241150;
        case 0x241154u: goto label_241154;
        case 0x241158u: goto label_241158;
        case 0x24115cu: goto label_24115c;
        case 0x241160u: goto label_241160;
        case 0x241164u: goto label_241164;
        case 0x241168u: goto label_241168;
        case 0x24116cu: goto label_24116c;
        case 0x241170u: goto label_241170;
        case 0x241174u: goto label_241174;
        case 0x241178u: goto label_241178;
        case 0x24117cu: goto label_24117c;
        case 0x241180u: goto label_241180;
        case 0x241184u: goto label_241184;
        case 0x241188u: goto label_241188;
        case 0x24118cu: goto label_24118c;
        case 0x241190u: goto label_241190;
        case 0x241194u: goto label_241194;
        case 0x241198u: goto label_241198;
        case 0x24119cu: goto label_24119c;
        case 0x2411a0u: goto label_2411a0;
        case 0x2411a4u: goto label_2411a4;
        case 0x2411a8u: goto label_2411a8;
        case 0x2411acu: goto label_2411ac;
        case 0x2411b0u: goto label_2411b0;
        case 0x2411b4u: goto label_2411b4;
        case 0x2411b8u: goto label_2411b8;
        case 0x2411bcu: goto label_2411bc;
        case 0x2411c0u: goto label_2411c0;
        case 0x2411c4u: goto label_2411c4;
        case 0x2411c8u: goto label_2411c8;
        case 0x2411ccu: goto label_2411cc;
        case 0x2411d0u: goto label_2411d0;
        case 0x2411d4u: goto label_2411d4;
        case 0x2411d8u: goto label_2411d8;
        case 0x2411dcu: goto label_2411dc;
        case 0x2411e0u: goto label_2411e0;
        case 0x2411e4u: goto label_2411e4;
        case 0x2411e8u: goto label_2411e8;
        case 0x2411ecu: goto label_2411ec;
        case 0x2411f0u: goto label_2411f0;
        case 0x2411f4u: goto label_2411f4;
        case 0x2411f8u: goto label_2411f8;
        case 0x2411fcu: goto label_2411fc;
        case 0x241200u: goto label_241200;
        case 0x241204u: goto label_241204;
        case 0x241208u: goto label_241208;
        case 0x24120cu: goto label_24120c;
        case 0x241210u: goto label_241210;
        case 0x241214u: goto label_241214;
        case 0x241218u: goto label_241218;
        case 0x24121cu: goto label_24121c;
        case 0x241220u: goto label_241220;
        case 0x241224u: goto label_241224;
        case 0x241228u: goto label_241228;
        case 0x24122cu: goto label_24122c;
        case 0x241230u: goto label_241230;
        case 0x241234u: goto label_241234;
        case 0x241238u: goto label_241238;
        case 0x24123cu: goto label_24123c;
        case 0x241240u: goto label_241240;
        case 0x241244u: goto label_241244;
        case 0x241248u: goto label_241248;
        case 0x24124cu: goto label_24124c;
        case 0x241250u: goto label_241250;
        case 0x241254u: goto label_241254;
        case 0x241258u: goto label_241258;
        case 0x24125cu: goto label_24125c;
        case 0x241260u: goto label_241260;
        case 0x241264u: goto label_241264;
        case 0x241268u: goto label_241268;
        case 0x24126cu: goto label_24126c;
        case 0x241270u: goto label_241270;
        case 0x241274u: goto label_241274;
        case 0x241278u: goto label_241278;
        case 0x24127cu: goto label_24127c;
        case 0x241280u: goto label_241280;
        case 0x241284u: goto label_241284;
        case 0x241288u: goto label_241288;
        case 0x24128cu: goto label_24128c;
        case 0x241290u: goto label_241290;
        case 0x241294u: goto label_241294;
        case 0x241298u: goto label_241298;
        case 0x24129cu: goto label_24129c;
        case 0x2412a0u: goto label_2412a0;
        case 0x2412a4u: goto label_2412a4;
        case 0x2412a8u: goto label_2412a8;
        case 0x2412acu: goto label_2412ac;
        case 0x2412b0u: goto label_2412b0;
        case 0x2412b4u: goto label_2412b4;
        case 0x2412b8u: goto label_2412b8;
        case 0x2412bcu: goto label_2412bc;
        case 0x2412c0u: goto label_2412c0;
        case 0x2412c4u: goto label_2412c4;
        case 0x2412c8u: goto label_2412c8;
        case 0x2412ccu: goto label_2412cc;
        case 0x2412d0u: goto label_2412d0;
        case 0x2412d4u: goto label_2412d4;
        case 0x2412d8u: goto label_2412d8;
        case 0x2412dcu: goto label_2412dc;
        case 0x2412e0u: goto label_2412e0;
        case 0x2412e4u: goto label_2412e4;
        case 0x2412e8u: goto label_2412e8;
        case 0x2412ecu: goto label_2412ec;
        case 0x2412f0u: goto label_2412f0;
        case 0x2412f4u: goto label_2412f4;
        case 0x2412f8u: goto label_2412f8;
        case 0x2412fcu: goto label_2412fc;
        case 0x241300u: goto label_241300;
        case 0x241304u: goto label_241304;
        case 0x241308u: goto label_241308;
        case 0x24130cu: goto label_24130c;
        case 0x241310u: goto label_241310;
        case 0x241314u: goto label_241314;
        case 0x241318u: goto label_241318;
        case 0x24131cu: goto label_24131c;
        case 0x241320u: goto label_241320;
        case 0x241324u: goto label_241324;
        case 0x241328u: goto label_241328;
        case 0x24132cu: goto label_24132c;
        case 0x241330u: goto label_241330;
        case 0x241334u: goto label_241334;
        case 0x241338u: goto label_241338;
        case 0x24133cu: goto label_24133c;
        case 0x241340u: goto label_241340;
        case 0x241344u: goto label_241344;
        case 0x241348u: goto label_241348;
        case 0x24134cu: goto label_24134c;
        case 0x241350u: goto label_241350;
        case 0x241354u: goto label_241354;
        case 0x241358u: goto label_241358;
        case 0x24135cu: goto label_24135c;
        case 0x241360u: goto label_241360;
        case 0x241364u: goto label_241364;
        case 0x241368u: goto label_241368;
        case 0x24136cu: goto label_24136c;
        case 0x241370u: goto label_241370;
        case 0x241374u: goto label_241374;
        case 0x241378u: goto label_241378;
        case 0x24137cu: goto label_24137c;
        case 0x241380u: goto label_241380;
        case 0x241384u: goto label_241384;
        case 0x241388u: goto label_241388;
        case 0x24138cu: goto label_24138c;
        case 0x241390u: goto label_241390;
        case 0x241394u: goto label_241394;
        case 0x241398u: goto label_241398;
        case 0x24139cu: goto label_24139c;
        case 0x2413a0u: goto label_2413a0;
        case 0x2413a4u: goto label_2413a4;
        case 0x2413a8u: goto label_2413a8;
        case 0x2413acu: goto label_2413ac;
        case 0x2413b0u: goto label_2413b0;
        case 0x2413b4u: goto label_2413b4;
        case 0x2413b8u: goto label_2413b8;
        case 0x2413bcu: goto label_2413bc;
        case 0x2413c0u: goto label_2413c0;
        case 0x2413c4u: goto label_2413c4;
        case 0x2413c8u: goto label_2413c8;
        case 0x2413ccu: goto label_2413cc;
        case 0x2413d0u: goto label_2413d0;
        case 0x2413d4u: goto label_2413d4;
        case 0x2413d8u: goto label_2413d8;
        case 0x2413dcu: goto label_2413dc;
        case 0x2413e0u: goto label_2413e0;
        case 0x2413e4u: goto label_2413e4;
        case 0x2413e8u: goto label_2413e8;
        case 0x2413ecu: goto label_2413ec;
        case 0x2413f0u: goto label_2413f0;
        case 0x2413f4u: goto label_2413f4;
        case 0x2413f8u: goto label_2413f8;
        case 0x2413fcu: goto label_2413fc;
        case 0x241400u: goto label_241400;
        case 0x241404u: goto label_241404;
        case 0x241408u: goto label_241408;
        case 0x24140cu: goto label_24140c;
        case 0x241410u: goto label_241410;
        case 0x241414u: goto label_241414;
        case 0x241418u: goto label_241418;
        case 0x24141cu: goto label_24141c;
        case 0x241420u: goto label_241420;
        case 0x241424u: goto label_241424;
        case 0x241428u: goto label_241428;
        case 0x24142cu: goto label_24142c;
        case 0x241430u: goto label_241430;
        case 0x241434u: goto label_241434;
        case 0x241438u: goto label_241438;
        case 0x24143cu: goto label_24143c;
        case 0x241440u: goto label_241440;
        case 0x241444u: goto label_241444;
        case 0x241448u: goto label_241448;
        case 0x24144cu: goto label_24144c;
        case 0x241450u: goto label_241450;
        case 0x241454u: goto label_241454;
        case 0x241458u: goto label_241458;
        case 0x24145cu: goto label_24145c;
        case 0x241460u: goto label_241460;
        case 0x241464u: goto label_241464;
        case 0x241468u: goto label_241468;
        case 0x24146cu: goto label_24146c;
        case 0x241470u: goto label_241470;
        case 0x241474u: goto label_241474;
        case 0x241478u: goto label_241478;
        case 0x24147cu: goto label_24147c;
        case 0x241480u: goto label_241480;
        case 0x241484u: goto label_241484;
        case 0x241488u: goto label_241488;
        case 0x24148cu: goto label_24148c;
        case 0x241490u: goto label_241490;
        case 0x241494u: goto label_241494;
        case 0x241498u: goto label_241498;
        case 0x24149cu: goto label_24149c;
        case 0x2414a0u: goto label_2414a0;
        case 0x2414a4u: goto label_2414a4;
        case 0x2414a8u: goto label_2414a8;
        case 0x2414acu: goto label_2414ac;
        case 0x2414b0u: goto label_2414b0;
        case 0x2414b4u: goto label_2414b4;
        case 0x2414b8u: goto label_2414b8;
        case 0x2414bcu: goto label_2414bc;
        case 0x2414c0u: goto label_2414c0;
        case 0x2414c4u: goto label_2414c4;
        case 0x2414c8u: goto label_2414c8;
        case 0x2414ccu: goto label_2414cc;
        case 0x2414d0u: goto label_2414d0;
        case 0x2414d4u: goto label_2414d4;
        case 0x2414d8u: goto label_2414d8;
        case 0x2414dcu: goto label_2414dc;
        case 0x2414e0u: goto label_2414e0;
        case 0x2414e4u: goto label_2414e4;
        case 0x2414e8u: goto label_2414e8;
        case 0x2414ecu: goto label_2414ec;
        case 0x2414f0u: goto label_2414f0;
        case 0x2414f4u: goto label_2414f4;
        case 0x2414f8u: goto label_2414f8;
        case 0x2414fcu: goto label_2414fc;
        case 0x241500u: goto label_241500;
        case 0x241504u: goto label_241504;
        case 0x241508u: goto label_241508;
        case 0x24150cu: goto label_24150c;
        case 0x241510u: goto label_241510;
        case 0x241514u: goto label_241514;
        case 0x241518u: goto label_241518;
        case 0x24151cu: goto label_24151c;
        case 0x241520u: goto label_241520;
        case 0x241524u: goto label_241524;
        case 0x241528u: goto label_241528;
        case 0x24152cu: goto label_24152c;
        case 0x241530u: goto label_241530;
        case 0x241534u: goto label_241534;
        case 0x241538u: goto label_241538;
        case 0x24153cu: goto label_24153c;
        case 0x241540u: goto label_241540;
        case 0x241544u: goto label_241544;
        case 0x241548u: goto label_241548;
        case 0x24154cu: goto label_24154c;
        case 0x241550u: goto label_241550;
        case 0x241554u: goto label_241554;
        case 0x241558u: goto label_241558;
        case 0x24155cu: goto label_24155c;
        case 0x241560u: goto label_241560;
        case 0x241564u: goto label_241564;
        case 0x241568u: goto label_241568;
        case 0x24156cu: goto label_24156c;
        case 0x241570u: goto label_241570;
        case 0x241574u: goto label_241574;
        case 0x241578u: goto label_241578;
        case 0x24157cu: goto label_24157c;
        case 0x241580u: goto label_241580;
        case 0x241584u: goto label_241584;
        case 0x241588u: goto label_241588;
        case 0x24158cu: goto label_24158c;
        case 0x241590u: goto label_241590;
        case 0x241594u: goto label_241594;
        case 0x241598u: goto label_241598;
        case 0x24159cu: goto label_24159c;
        case 0x2415a0u: goto label_2415a0;
        case 0x2415a4u: goto label_2415a4;
        case 0x2415a8u: goto label_2415a8;
        case 0x2415acu: goto label_2415ac;
        case 0x2415b0u: goto label_2415b0;
        case 0x2415b4u: goto label_2415b4;
        case 0x2415b8u: goto label_2415b8;
        case 0x2415bcu: goto label_2415bc;
        case 0x2415c0u: goto label_2415c0;
        case 0x2415c4u: goto label_2415c4;
        case 0x2415c8u: goto label_2415c8;
        case 0x2415ccu: goto label_2415cc;
        case 0x2415d0u: goto label_2415d0;
        case 0x2415d4u: goto label_2415d4;
        case 0x2415d8u: goto label_2415d8;
        case 0x2415dcu: goto label_2415dc;
        case 0x2415e0u: goto label_2415e0;
        case 0x2415e4u: goto label_2415e4;
        case 0x2415e8u: goto label_2415e8;
        case 0x2415ecu: goto label_2415ec;
        case 0x2415f0u: goto label_2415f0;
        case 0x2415f4u: goto label_2415f4;
        case 0x2415f8u: goto label_2415f8;
        case 0x2415fcu: goto label_2415fc;
        case 0x241600u: goto label_241600;
        case 0x241604u: goto label_241604;
        case 0x241608u: goto label_241608;
        case 0x24160cu: goto label_24160c;
        case 0x241610u: goto label_241610;
        case 0x241614u: goto label_241614;
        case 0x241618u: goto label_241618;
        case 0x24161cu: goto label_24161c;
        case 0x241620u: goto label_241620;
        case 0x241624u: goto label_241624;
        case 0x241628u: goto label_241628;
        case 0x24162cu: goto label_24162c;
        case 0x241630u: goto label_241630;
        case 0x241634u: goto label_241634;
        case 0x241638u: goto label_241638;
        case 0x24163cu: goto label_24163c;
        case 0x241640u: goto label_241640;
        case 0x241644u: goto label_241644;
        case 0x241648u: goto label_241648;
        case 0x24164cu: goto label_24164c;
        case 0x241650u: goto label_241650;
        case 0x241654u: goto label_241654;
        case 0x241658u: goto label_241658;
        case 0x24165cu: goto label_24165c;
        case 0x241660u: goto label_241660;
        case 0x241664u: goto label_241664;
        case 0x241668u: goto label_241668;
        case 0x24166cu: goto label_24166c;
        case 0x241670u: goto label_241670;
        case 0x241674u: goto label_241674;
        case 0x241678u: goto label_241678;
        case 0x24167cu: goto label_24167c;
        case 0x241680u: goto label_241680;
        case 0x241684u: goto label_241684;
        case 0x241688u: goto label_241688;
        case 0x24168cu: goto label_24168c;
        case 0x241690u: goto label_241690;
        case 0x241694u: goto label_241694;
        case 0x241698u: goto label_241698;
        case 0x24169cu: goto label_24169c;
        case 0x2416a0u: goto label_2416a0;
        case 0x2416a4u: goto label_2416a4;
        case 0x2416a8u: goto label_2416a8;
        case 0x2416acu: goto label_2416ac;
        case 0x2416b0u: goto label_2416b0;
        case 0x2416b4u: goto label_2416b4;
        case 0x2416b8u: goto label_2416b8;
        case 0x2416bcu: goto label_2416bc;
        case 0x2416c0u: goto label_2416c0;
        case 0x2416c4u: goto label_2416c4;
        case 0x2416c8u: goto label_2416c8;
        case 0x2416ccu: goto label_2416cc;
        case 0x2416d0u: goto label_2416d0;
        case 0x2416d4u: goto label_2416d4;
        case 0x2416d8u: goto label_2416d8;
        case 0x2416dcu: goto label_2416dc;
        case 0x2416e0u: goto label_2416e0;
        case 0x2416e4u: goto label_2416e4;
        case 0x2416e8u: goto label_2416e8;
        case 0x2416ecu: goto label_2416ec;
        case 0x2416f0u: goto label_2416f0;
        case 0x2416f4u: goto label_2416f4;
        case 0x2416f8u: goto label_2416f8;
        case 0x2416fcu: goto label_2416fc;
        case 0x241700u: goto label_241700;
        case 0x241704u: goto label_241704;
        case 0x241708u: goto label_241708;
        case 0x24170cu: goto label_24170c;
        case 0x241710u: goto label_241710;
        case 0x241714u: goto label_241714;
        case 0x241718u: goto label_241718;
        case 0x24171cu: goto label_24171c;
        case 0x241720u: goto label_241720;
        case 0x241724u: goto label_241724;
        case 0x241728u: goto label_241728;
        case 0x24172cu: goto label_24172c;
        case 0x241730u: goto label_241730;
        case 0x241734u: goto label_241734;
        case 0x241738u: goto label_241738;
        case 0x24173cu: goto label_24173c;
        case 0x241740u: goto label_241740;
        case 0x241744u: goto label_241744;
        case 0x241748u: goto label_241748;
        case 0x24174cu: goto label_24174c;
        case 0x241750u: goto label_241750;
        case 0x241754u: goto label_241754;
        case 0x241758u: goto label_241758;
        case 0x24175cu: goto label_24175c;
        case 0x241760u: goto label_241760;
        case 0x241764u: goto label_241764;
        case 0x241768u: goto label_241768;
        case 0x24176cu: goto label_24176c;
        case 0x241770u: goto label_241770;
        case 0x241774u: goto label_241774;
        case 0x241778u: goto label_241778;
        case 0x24177cu: goto label_24177c;
        case 0x241780u: goto label_241780;
        case 0x241784u: goto label_241784;
        case 0x241788u: goto label_241788;
        case 0x24178cu: goto label_24178c;
        case 0x241790u: goto label_241790;
        case 0x241794u: goto label_241794;
        case 0x241798u: goto label_241798;
        case 0x24179cu: goto label_24179c;
        case 0x2417a0u: goto label_2417a0;
        case 0x2417a4u: goto label_2417a4;
        case 0x2417a8u: goto label_2417a8;
        case 0x2417acu: goto label_2417ac;
        case 0x2417b0u: goto label_2417b0;
        case 0x2417b4u: goto label_2417b4;
        case 0x2417b8u: goto label_2417b8;
        case 0x2417bcu: goto label_2417bc;
        case 0x2417c0u: goto label_2417c0;
        case 0x2417c4u: goto label_2417c4;
        case 0x2417c8u: goto label_2417c8;
        case 0x2417ccu: goto label_2417cc;
        case 0x2417d0u: goto label_2417d0;
        case 0x2417d4u: goto label_2417d4;
        case 0x2417d8u: goto label_2417d8;
        case 0x2417dcu: goto label_2417dc;
        case 0x2417e0u: goto label_2417e0;
        case 0x2417e4u: goto label_2417e4;
        case 0x2417e8u: goto label_2417e8;
        case 0x2417ecu: goto label_2417ec;
        case 0x2417f0u: goto label_2417f0;
        case 0x2417f4u: goto label_2417f4;
        case 0x2417f8u: goto label_2417f8;
        case 0x2417fcu: goto label_2417fc;
        case 0x241800u: goto label_241800;
        case 0x241804u: goto label_241804;
        case 0x241808u: goto label_241808;
        case 0x24180cu: goto label_24180c;
        case 0x241810u: goto label_241810;
        case 0x241814u: goto label_241814;
        case 0x241818u: goto label_241818;
        case 0x24181cu: goto label_24181c;
        case 0x241820u: goto label_241820;
        case 0x241824u: goto label_241824;
        case 0x241828u: goto label_241828;
        case 0x24182cu: goto label_24182c;
        case 0x241830u: goto label_241830;
        case 0x241834u: goto label_241834;
        case 0x241838u: goto label_241838;
        case 0x24183cu: goto label_24183c;
        case 0x241840u: goto label_241840;
        case 0x241844u: goto label_241844;
        case 0x241848u: goto label_241848;
        case 0x24184cu: goto label_24184c;
        case 0x241850u: goto label_241850;
        case 0x241854u: goto label_241854;
        case 0x241858u: goto label_241858;
        case 0x24185cu: goto label_24185c;
        case 0x241860u: goto label_241860;
        case 0x241864u: goto label_241864;
        case 0x241868u: goto label_241868;
        case 0x24186cu: goto label_24186c;
        case 0x241870u: goto label_241870;
        case 0x241874u: goto label_241874;
        case 0x241878u: goto label_241878;
        case 0x24187cu: goto label_24187c;
        case 0x241880u: goto label_241880;
        case 0x241884u: goto label_241884;
        case 0x241888u: goto label_241888;
        case 0x24188cu: goto label_24188c;
        case 0x241890u: goto label_241890;
        case 0x241894u: goto label_241894;
        case 0x241898u: goto label_241898;
        case 0x24189cu: goto label_24189c;
        case 0x2418a0u: goto label_2418a0;
        case 0x2418a4u: goto label_2418a4;
        case 0x2418a8u: goto label_2418a8;
        case 0x2418acu: goto label_2418ac;
        case 0x2418b0u: goto label_2418b0;
        case 0x2418b4u: goto label_2418b4;
        case 0x2418b8u: goto label_2418b8;
        case 0x2418bcu: goto label_2418bc;
        case 0x2418c0u: goto label_2418c0;
        case 0x2418c4u: goto label_2418c4;
        case 0x2418c8u: goto label_2418c8;
        case 0x2418ccu: goto label_2418cc;
        case 0x2418d0u: goto label_2418d0;
        case 0x2418d4u: goto label_2418d4;
        case 0x2418d8u: goto label_2418d8;
        case 0x2418dcu: goto label_2418dc;
        case 0x2418e0u: goto label_2418e0;
        case 0x2418e4u: goto label_2418e4;
        case 0x2418e8u: goto label_2418e8;
        case 0x2418ecu: goto label_2418ec;
        case 0x2418f0u: goto label_2418f0;
        case 0x2418f4u: goto label_2418f4;
        case 0x2418f8u: goto label_2418f8;
        case 0x2418fcu: goto label_2418fc;
        case 0x241900u: goto label_241900;
        case 0x241904u: goto label_241904;
        case 0x241908u: goto label_241908;
        case 0x24190cu: goto label_24190c;
        case 0x241910u: goto label_241910;
        case 0x241914u: goto label_241914;
        case 0x241918u: goto label_241918;
        case 0x24191cu: goto label_24191c;
        case 0x241920u: goto label_241920;
        case 0x241924u: goto label_241924;
        case 0x241928u: goto label_241928;
        case 0x24192cu: goto label_24192c;
        case 0x241930u: goto label_241930;
        case 0x241934u: goto label_241934;
        case 0x241938u: goto label_241938;
        case 0x24193cu: goto label_24193c;
        case 0x241940u: goto label_241940;
        case 0x241944u: goto label_241944;
        case 0x241948u: goto label_241948;
        case 0x24194cu: goto label_24194c;
        case 0x241950u: goto label_241950;
        case 0x241954u: goto label_241954;
        case 0x241958u: goto label_241958;
        case 0x24195cu: goto label_24195c;
        case 0x241960u: goto label_241960;
        case 0x241964u: goto label_241964;
        case 0x241968u: goto label_241968;
        case 0x24196cu: goto label_24196c;
        case 0x241970u: goto label_241970;
        case 0x241974u: goto label_241974;
        case 0x241978u: goto label_241978;
        case 0x24197cu: goto label_24197c;
        case 0x241980u: goto label_241980;
        case 0x241984u: goto label_241984;
        case 0x241988u: goto label_241988;
        case 0x24198cu: goto label_24198c;
        case 0x241990u: goto label_241990;
        case 0x241994u: goto label_241994;
        case 0x241998u: goto label_241998;
        case 0x24199cu: goto label_24199c;
        case 0x2419a0u: goto label_2419a0;
        case 0x2419a4u: goto label_2419a4;
        case 0x2419a8u: goto label_2419a8;
        case 0x2419acu: goto label_2419ac;
        case 0x2419b0u: goto label_2419b0;
        case 0x2419b4u: goto label_2419b4;
        case 0x2419b8u: goto label_2419b8;
        case 0x2419bcu: goto label_2419bc;
        case 0x2419c0u: goto label_2419c0;
        case 0x2419c4u: goto label_2419c4;
        case 0x2419c8u: goto label_2419c8;
        case 0x2419ccu: goto label_2419cc;
        case 0x2419d0u: goto label_2419d0;
        case 0x2419d4u: goto label_2419d4;
        case 0x2419d8u: goto label_2419d8;
        case 0x2419dcu: goto label_2419dc;
        case 0x2419e0u: goto label_2419e0;
        case 0x2419e4u: goto label_2419e4;
        case 0x2419e8u: goto label_2419e8;
        case 0x2419ecu: goto label_2419ec;
        case 0x2419f0u: goto label_2419f0;
        case 0x2419f4u: goto label_2419f4;
        case 0x2419f8u: goto label_2419f8;
        case 0x2419fcu: goto label_2419fc;
        case 0x241a00u: goto label_241a00;
        case 0x241a04u: goto label_241a04;
        case 0x241a08u: goto label_241a08;
        case 0x241a0cu: goto label_241a0c;
        case 0x241a10u: goto label_241a10;
        case 0x241a14u: goto label_241a14;
        case 0x241a18u: goto label_241a18;
        case 0x241a1cu: goto label_241a1c;
        case 0x241a20u: goto label_241a20;
        case 0x241a24u: goto label_241a24;
        case 0x241a28u: goto label_241a28;
        case 0x241a2cu: goto label_241a2c;
        case 0x241a30u: goto label_241a30;
        case 0x241a34u: goto label_241a34;
        case 0x241a38u: goto label_241a38;
        case 0x241a3cu: goto label_241a3c;
        case 0x241a40u: goto label_241a40;
        case 0x241a44u: goto label_241a44;
        case 0x241a48u: goto label_241a48;
        case 0x241a4cu: goto label_241a4c;
        case 0x241a50u: goto label_241a50;
        case 0x241a54u: goto label_241a54;
        case 0x241a58u: goto label_241a58;
        case 0x241a5cu: goto label_241a5c;
        case 0x241a60u: goto label_241a60;
        case 0x241a64u: goto label_241a64;
        case 0x241a68u: goto label_241a68;
        case 0x241a6cu: goto label_241a6c;
        case 0x241a70u: goto label_241a70;
        case 0x241a74u: goto label_241a74;
        case 0x241a78u: goto label_241a78;
        case 0x241a7cu: goto label_241a7c;
        case 0x241a80u: goto label_241a80;
        case 0x241a84u: goto label_241a84;
        case 0x241a88u: goto label_241a88;
        case 0x241a8cu: goto label_241a8c;
        case 0x241a90u: goto label_241a90;
        case 0x241a94u: goto label_241a94;
        case 0x241a98u: goto label_241a98;
        case 0x241a9cu: goto label_241a9c;
        case 0x241aa0u: goto label_241aa0;
        case 0x241aa4u: goto label_241aa4;
        case 0x241aa8u: goto label_241aa8;
        case 0x241aacu: goto label_241aac;
        case 0x241ab0u: goto label_241ab0;
        case 0x241ab4u: goto label_241ab4;
        case 0x241ab8u: goto label_241ab8;
        case 0x241abcu: goto label_241abc;
        case 0x241ac0u: goto label_241ac0;
        case 0x241ac4u: goto label_241ac4;
        case 0x241ac8u: goto label_241ac8;
        case 0x241accu: goto label_241acc;
        case 0x241ad0u: goto label_241ad0;
        case 0x241ad4u: goto label_241ad4;
        case 0x241ad8u: goto label_241ad8;
        case 0x241adcu: goto label_241adc;
        case 0x241ae0u: goto label_241ae0;
        case 0x241ae4u: goto label_241ae4;
        case 0x241ae8u: goto label_241ae8;
        case 0x241aecu: goto label_241aec;
        case 0x241af0u: goto label_241af0;
        case 0x241af4u: goto label_241af4;
        case 0x241af8u: goto label_241af8;
        case 0x241afcu: goto label_241afc;
        case 0x241b00u: goto label_241b00;
        case 0x241b04u: goto label_241b04;
        case 0x241b08u: goto label_241b08;
        case 0x241b0cu: goto label_241b0c;
        case 0x241b10u: goto label_241b10;
        case 0x241b14u: goto label_241b14;
        case 0x241b18u: goto label_241b18;
        case 0x241b1cu: goto label_241b1c;
        case 0x241b20u: goto label_241b20;
        case 0x241b24u: goto label_241b24;
        case 0x241b28u: goto label_241b28;
        case 0x241b2cu: goto label_241b2c;
        case 0x241b30u: goto label_241b30;
        case 0x241b34u: goto label_241b34;
        case 0x241b38u: goto label_241b38;
        case 0x241b3cu: goto label_241b3c;
        case 0x241b40u: goto label_241b40;
        case 0x241b44u: goto label_241b44;
        case 0x241b48u: goto label_241b48;
        case 0x241b4cu: goto label_241b4c;
        case 0x241b50u: goto label_241b50;
        case 0x241b54u: goto label_241b54;
        case 0x241b58u: goto label_241b58;
        case 0x241b5cu: goto label_241b5c;
        case 0x241b60u: goto label_241b60;
        case 0x241b64u: goto label_241b64;
        case 0x241b68u: goto label_241b68;
        case 0x241b6cu: goto label_241b6c;
        case 0x241b70u: goto label_241b70;
        case 0x241b74u: goto label_241b74;
        case 0x241b78u: goto label_241b78;
        case 0x241b7cu: goto label_241b7c;
        case 0x241b80u: goto label_241b80;
        case 0x241b84u: goto label_241b84;
        case 0x241b88u: goto label_241b88;
        case 0x241b8cu: goto label_241b8c;
        case 0x241b90u: goto label_241b90;
        case 0x241b94u: goto label_241b94;
        case 0x241b98u: goto label_241b98;
        case 0x241b9cu: goto label_241b9c;
        case 0x241ba0u: goto label_241ba0;
        case 0x241ba4u: goto label_241ba4;
        case 0x241ba8u: goto label_241ba8;
        case 0x241bacu: goto label_241bac;
        case 0x241bb0u: goto label_241bb0;
        case 0x241bb4u: goto label_241bb4;
        case 0x241bb8u: goto label_241bb8;
        case 0x241bbcu: goto label_241bbc;
        case 0x241bc0u: goto label_241bc0;
        case 0x241bc4u: goto label_241bc4;
        case 0x241bc8u: goto label_241bc8;
        case 0x241bccu: goto label_241bcc;
        case 0x241bd0u: goto label_241bd0;
        case 0x241bd4u: goto label_241bd4;
        case 0x241bd8u: goto label_241bd8;
        case 0x241bdcu: goto label_241bdc;
        case 0x241be0u: goto label_241be0;
        case 0x241be4u: goto label_241be4;
        case 0x241be8u: goto label_241be8;
        case 0x241becu: goto label_241bec;
        case 0x241bf0u: goto label_241bf0;
        case 0x241bf4u: goto label_241bf4;
        case 0x241bf8u: goto label_241bf8;
        case 0x241bfcu: goto label_241bfc;
        case 0x241c00u: goto label_241c00;
        case 0x241c04u: goto label_241c04;
        case 0x241c08u: goto label_241c08;
        case 0x241c0cu: goto label_241c0c;
        case 0x241c10u: goto label_241c10;
        case 0x241c14u: goto label_241c14;
        case 0x241c18u: goto label_241c18;
        case 0x241c1cu: goto label_241c1c;
        case 0x241c20u: goto label_241c20;
        case 0x241c24u: goto label_241c24;
        case 0x241c28u: goto label_241c28;
        case 0x241c2cu: goto label_241c2c;
        case 0x241c30u: goto label_241c30;
        case 0x241c34u: goto label_241c34;
        case 0x241c38u: goto label_241c38;
        case 0x241c3cu: goto label_241c3c;
        case 0x241c40u: goto label_241c40;
        case 0x241c44u: goto label_241c44;
        case 0x241c48u: goto label_241c48;
        case 0x241c4cu: goto label_241c4c;
        case 0x241c50u: goto label_241c50;
        case 0x241c54u: goto label_241c54;
        case 0x241c58u: goto label_241c58;
        case 0x241c5cu: goto label_241c5c;
        case 0x241c60u: goto label_241c60;
        case 0x241c64u: goto label_241c64;
        case 0x241c68u: goto label_241c68;
        case 0x241c6cu: goto label_241c6c;
        case 0x241c70u: goto label_241c70;
        case 0x241c74u: goto label_241c74;
        case 0x241c78u: goto label_241c78;
        case 0x241c7cu: goto label_241c7c;
        case 0x241c80u: goto label_241c80;
        case 0x241c84u: goto label_241c84;
        case 0x241c88u: goto label_241c88;
        case 0x241c8cu: goto label_241c8c;
        case 0x241c90u: goto label_241c90;
        case 0x241c94u: goto label_241c94;
        case 0x241c98u: goto label_241c98;
        case 0x241c9cu: goto label_241c9c;
        case 0x241ca0u: goto label_241ca0;
        case 0x241ca4u: goto label_241ca4;
        case 0x241ca8u: goto label_241ca8;
        case 0x241cacu: goto label_241cac;
        case 0x241cb0u: goto label_241cb0;
        case 0x241cb4u: goto label_241cb4;
        case 0x241cb8u: goto label_241cb8;
        case 0x241cbcu: goto label_241cbc;
        case 0x241cc0u: goto label_241cc0;
        case 0x241cc4u: goto label_241cc4;
        case 0x241cc8u: goto label_241cc8;
        case 0x241cccu: goto label_241ccc;
        case 0x241cd0u: goto label_241cd0;
        case 0x241cd4u: goto label_241cd4;
        case 0x241cd8u: goto label_241cd8;
        case 0x241cdcu: goto label_241cdc;
        case 0x241ce0u: goto label_241ce0;
        case 0x241ce4u: goto label_241ce4;
        case 0x241ce8u: goto label_241ce8;
        case 0x241cecu: goto label_241cec;
        case 0x241cf0u: goto label_241cf0;
        case 0x241cf4u: goto label_241cf4;
        case 0x241cf8u: goto label_241cf8;
        case 0x241cfcu: goto label_241cfc;
        case 0x241d00u: goto label_241d00;
        case 0x241d04u: goto label_241d04;
        case 0x241d08u: goto label_241d08;
        case 0x241d0cu: goto label_241d0c;
        case 0x241d10u: goto label_241d10;
        case 0x241d14u: goto label_241d14;
        case 0x241d18u: goto label_241d18;
        case 0x241d1cu: goto label_241d1c;
        case 0x241d20u: goto label_241d20;
        case 0x241d24u: goto label_241d24;
        case 0x241d28u: goto label_241d28;
        case 0x241d2cu: goto label_241d2c;
        case 0x241d30u: goto label_241d30;
        case 0x241d34u: goto label_241d34;
        case 0x241d38u: goto label_241d38;
        case 0x241d3cu: goto label_241d3c;
        case 0x241d40u: goto label_241d40;
        case 0x241d44u: goto label_241d44;
        case 0x241d48u: goto label_241d48;
        case 0x241d4cu: goto label_241d4c;
        case 0x241d50u: goto label_241d50;
        case 0x241d54u: goto label_241d54;
        case 0x241d58u: goto label_241d58;
        case 0x241d5cu: goto label_241d5c;
        case 0x241d60u: goto label_241d60;
        case 0x241d64u: goto label_241d64;
        case 0x241d68u: goto label_241d68;
        case 0x241d6cu: goto label_241d6c;
        case 0x241d70u: goto label_241d70;
        case 0x241d74u: goto label_241d74;
        case 0x241d78u: goto label_241d78;
        case 0x241d7cu: goto label_241d7c;
        case 0x241d80u: goto label_241d80;
        case 0x241d84u: goto label_241d84;
        case 0x241d88u: goto label_241d88;
        case 0x241d8cu: goto label_241d8c;
        case 0x241d90u: goto label_241d90;
        case 0x241d94u: goto label_241d94;
        case 0x241d98u: goto label_241d98;
        case 0x241d9cu: goto label_241d9c;
        case 0x241da0u: goto label_241da0;
        case 0x241da4u: goto label_241da4;
        case 0x241da8u: goto label_241da8;
        case 0x241dacu: goto label_241dac;
        case 0x241db0u: goto label_241db0;
        case 0x241db4u: goto label_241db4;
        case 0x241db8u: goto label_241db8;
        case 0x241dbcu: goto label_241dbc;
        case 0x241dc0u: goto label_241dc0;
        case 0x241dc4u: goto label_241dc4;
        case 0x241dc8u: goto label_241dc8;
        case 0x241dccu: goto label_241dcc;
        case 0x241dd0u: goto label_241dd0;
        case 0x241dd4u: goto label_241dd4;
        case 0x241dd8u: goto label_241dd8;
        case 0x241ddcu: goto label_241ddc;
        case 0x241de0u: goto label_241de0;
        case 0x241de4u: goto label_241de4;
        case 0x241de8u: goto label_241de8;
        case 0x241decu: goto label_241dec;
        case 0x241df0u: goto label_241df0;
        case 0x241df4u: goto label_241df4;
        case 0x241df8u: goto label_241df8;
        case 0x241dfcu: goto label_241dfc;
        case 0x241e00u: goto label_241e00;
        case 0x241e04u: goto label_241e04;
        case 0x241e08u: goto label_241e08;
        case 0x241e0cu: goto label_241e0c;
        case 0x241e10u: goto label_241e10;
        case 0x241e14u: goto label_241e14;
        case 0x241e18u: goto label_241e18;
        case 0x241e1cu: goto label_241e1c;
        case 0x241e20u: goto label_241e20;
        case 0x241e24u: goto label_241e24;
        case 0x241e28u: goto label_241e28;
        case 0x241e2cu: goto label_241e2c;
        case 0x241e30u: goto label_241e30;
        case 0x241e34u: goto label_241e34;
        case 0x241e38u: goto label_241e38;
        case 0x241e3cu: goto label_241e3c;
        case 0x241e40u: goto label_241e40;
        case 0x241e44u: goto label_241e44;
        case 0x241e48u: goto label_241e48;
        case 0x241e4cu: goto label_241e4c;
        case 0x241e50u: goto label_241e50;
        case 0x241e54u: goto label_241e54;
        case 0x241e58u: goto label_241e58;
        case 0x241e5cu: goto label_241e5c;
        case 0x241e60u: goto label_241e60;
        case 0x241e64u: goto label_241e64;
        case 0x241e68u: goto label_241e68;
        case 0x241e6cu: goto label_241e6c;
        case 0x241e70u: goto label_241e70;
        case 0x241e74u: goto label_241e74;
        case 0x241e78u: goto label_241e78;
        case 0x241e7cu: goto label_241e7c;
        case 0x241e80u: goto label_241e80;
        case 0x241e84u: goto label_241e84;
        case 0x241e88u: goto label_241e88;
        case 0x241e8cu: goto label_241e8c;
        case 0x241e90u: goto label_241e90;
        case 0x241e94u: goto label_241e94;
        case 0x241e98u: goto label_241e98;
        case 0x241e9cu: goto label_241e9c;
        case 0x241ea0u: goto label_241ea0;
        case 0x241ea4u: goto label_241ea4;
        case 0x241ea8u: goto label_241ea8;
        case 0x241eacu: goto label_241eac;
        case 0x241eb0u: goto label_241eb0;
        case 0x241eb4u: goto label_241eb4;
        case 0x241eb8u: goto label_241eb8;
        case 0x241ebcu: goto label_241ebc;
        case 0x241ec0u: goto label_241ec0;
        case 0x241ec4u: goto label_241ec4;
        case 0x241ec8u: goto label_241ec8;
        case 0x241eccu: goto label_241ecc;
        case 0x241ed0u: goto label_241ed0;
        case 0x241ed4u: goto label_241ed4;
        case 0x241ed8u: goto label_241ed8;
        case 0x241edcu: goto label_241edc;
        case 0x241ee0u: goto label_241ee0;
        case 0x241ee4u: goto label_241ee4;
        case 0x241ee8u: goto label_241ee8;
        case 0x241eecu: goto label_241eec;
        case 0x241ef0u: goto label_241ef0;
        case 0x241ef4u: goto label_241ef4;
        case 0x241ef8u: goto label_241ef8;
        case 0x241efcu: goto label_241efc;
        case 0x241f00u: goto label_241f00;
        case 0x241f04u: goto label_241f04;
        case 0x241f08u: goto label_241f08;
        default: break;
    }

    ctx->pc = 0x240d40u;

label_240d40:
    // 0x240d40: 0x27bdfd00  addiu       $sp, $sp, -0x300
    ctx->pc = 0x240d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966528));
label_240d44:
    // 0x240d44: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x240d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_240d48:
    // 0x240d48: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x240d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_240d4c:
    // 0x240d4c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x240d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_240d50:
    // 0x240d50: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x240d50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_240d54:
    // 0x240d54: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x240d54u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_240d58:
    // 0x240d58: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x240d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_240d5c:
    // 0x240d5c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x240d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_240d60:
    // 0x240d60: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x240d60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_240d64:
    // 0x240d64: 0x84830002  lh          $v1, 0x2($a0)
    ctx->pc = 0x240d64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_240d68:
    // 0x240d68: 0x1062044a  beq         $v1, $v0, . + 4 + (0x44A << 2)
label_240d6c:
    if (ctx->pc == 0x240D6Cu) {
        ctx->pc = 0x240D6Cu;
            // 0x240d6c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x240D70u;
        goto label_240d70;
    }
    ctx->pc = 0x240D68u;
    {
        const bool branch_taken_0x240d68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x240D6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240D68u;
            // 0x240d6c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240d68) {
            ctx->pc = 0x241E94u;
            goto label_241e94;
        }
    }
    ctx->pc = 0x240D70u;
label_240d70:
    // 0x240d70: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x240d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_240d74:
    // 0x240d74: 0x10620437  beq         $v1, $v0, . + 4 + (0x437 << 2)
label_240d78:
    if (ctx->pc == 0x240D78u) {
        ctx->pc = 0x240D78u;
            // 0x240d78: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x240D7Cu;
        goto label_240d7c;
    }
    ctx->pc = 0x240D74u;
    {
        const bool branch_taken_0x240d74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x240D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240D74u;
            // 0x240d78: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240d74) {
            ctx->pc = 0x241E54u;
            goto label_241e54;
        }
    }
    ctx->pc = 0x240D7Cu;
label_240d7c:
    // 0x240d7c: 0x1062040d  beq         $v1, $v0, . + 4 + (0x40D << 2)
label_240d80:
    if (ctx->pc == 0x240D80u) {
        ctx->pc = 0x240D80u;
            // 0x240d80: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x240D84u;
        goto label_240d84;
    }
    ctx->pc = 0x240D7Cu;
    {
        const bool branch_taken_0x240d7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x240D80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240D7Cu;
            // 0x240d80: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240d7c) {
            ctx->pc = 0x241DB4u;
            goto label_241db4;
        }
    }
    ctx->pc = 0x240D84u;
label_240d84:
    // 0x240d84: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x240d84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_240d88:
    // 0x240d88: 0x106203fa  beq         $v1, $v0, . + 4 + (0x3FA << 2)
label_240d8c:
    if (ctx->pc == 0x240D8Cu) {
        ctx->pc = 0x240D8Cu;
            // 0x240d8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x240D90u;
        goto label_240d90;
    }
    ctx->pc = 0x240D88u;
    {
        const bool branch_taken_0x240d88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x240D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240D88u;
            // 0x240d8c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240d88) {
            ctx->pc = 0x241D74u;
            goto label_241d74;
        }
    }
    ctx->pc = 0x240D90u;
label_240d90:
    // 0x240d90: 0x106203ef  beq         $v1, $v0, . + 4 + (0x3EF << 2)
label_240d94:
    if (ctx->pc == 0x240D94u) {
        ctx->pc = 0x240D98u;
        goto label_240d98;
    }
    ctx->pc = 0x240D90u;
    {
        const bool branch_taken_0x240d90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x240d90) {
            ctx->pc = 0x241D50u;
            goto label_241d50;
        }
    }
    ctx->pc = 0x240D98u;
label_240d98:
    // 0x240d98: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_240d9c:
    if (ctx->pc == 0x240D9Cu) {
        ctx->pc = 0x240DA0u;
        goto label_240da0;
    }
    ctx->pc = 0x240D98u;
    {
        const bool branch_taken_0x240d98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x240d98) {
            ctx->pc = 0x240DA8u;
            goto label_240da8;
        }
    }
    ctx->pc = 0x240DA0u;
label_240da0:
    // 0x240da0: 0x10000452  b           . + 4 + (0x452 << 2)
label_240da4:
    if (ctx->pc == 0x240DA4u) {
        ctx->pc = 0x240DA4u;
            // 0x240da4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x240DA8u;
        goto label_240da8;
    }
    ctx->pc = 0x240DA0u;
    {
        const bool branch_taken_0x240da0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240DA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240DA0u;
            // 0x240da4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240da0) {
            ctx->pc = 0x241EECu;
            goto label_241eec;
        }
    }
    ctx->pc = 0x240DA8u;
label_240da8:
    // 0x240da8: 0x82820002  lb          $v0, 0x2($s4)
    ctx->pc = 0x240da8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_240dac:
    // 0x240dac: 0x2842ffff  slti        $v0, $v0, -0x1
    ctx->pc = 0x240dacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967295) ? 1 : 0);
label_240db0:
    // 0x240db0: 0x1440044d  bnez        $v0, . + 4 + (0x44D << 2)
label_240db4:
    if (ctx->pc == 0x240DB4u) {
        ctx->pc = 0x240DB8u;
        goto label_240db8;
    }
    ctx->pc = 0x240DB0u;
    {
        const bool branch_taken_0x240db0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x240db0) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x240DB8u;
label_240db8:
    // 0x240db8: 0x8611005a  lh          $s1, 0x5A($s0)
    ctx->pc = 0x240db8u;
    SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 90)));
label_240dbc:
    // 0x240dbc: 0xc094274  jal         func_2509D0
label_240dc0:
    if (ctx->pc == 0x240DC0u) {
        ctx->pc = 0x240DC0u;
            // 0x240dc0: 0x86840000  lh          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x240DC4u;
        goto label_240dc4;
    }
    ctx->pc = 0x240DBCu;
    SET_GPR_U32(ctx, 31, 0x240DC4u);
    ctx->pc = 0x240DC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240DBCu;
            // 0x240dc0: 0x86840000  lh          $a0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240DC4u; }
        if (ctx->pc != 0x240DC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240DC4u; }
        if (ctx->pc != 0x240DC4u) { return; }
    }
    ctx->pc = 0x240DC4u;
label_240dc4:
    // 0x240dc4: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x240dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_240dc8:
    // 0x240dc8: 0x3c1201ed  lui         $s2, 0x1ED
    ctx->pc = 0x240dc8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)493 << 16));
label_240dcc:
    // 0x240dcc: 0x82850002  lb          $a1, 0x2($s4)
    ctx->pc = 0x240dccu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_240dd0:
    // 0x240dd0: 0x8c930070  lw          $s3, 0x70($a0)
    ctx->pc = 0x240dd0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_240dd4:
    // 0x240dd4: 0x2ca10030  sltiu       $at, $a1, 0x30
    ctx->pc = 0x240dd4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
label_240dd8:
    // 0x240dd8: 0x10200443  beqz        $at, . + 4 + (0x443 << 2)
label_240ddc:
    if (ctx->pc == 0x240DDCu) {
        ctx->pc = 0x240DDCu;
            // 0x240ddc: 0x2652dbf0  addiu       $s2, $s2, -0x2410 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294958064));
        ctx->pc = 0x240DE0u;
        goto label_240de0;
    }
    ctx->pc = 0x240DD8u;
    {
        const bool branch_taken_0x240dd8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x240DDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240DD8u;
            // 0x240ddc: 0x2652dbf0  addiu       $s2, $s2, -0x2410 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294958064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240dd8) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x240DE0u;
label_240de0:
    // 0x240de0: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x240de0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_240de4:
    // 0x240de4: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x240de4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_240de8:
    // 0x240de8: 0x2463ae60  addiu       $v1, $v1, -0x51A0
    ctx->pc = 0x240de8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946400));
label_240dec:
    // 0x240dec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x240decu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_240df0:
    // 0x240df0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x240df0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_240df4:
    // 0x240df4: 0x400008  jr          $v0
label_240df8:
    if (ctx->pc == 0x240DF8u) {
        ctx->pc = 0x240DFCu;
        goto label_240dfc;
    }
    ctx->pc = 0x240DF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x240DFCu: goto label_240dfc;
            case 0x240E38u: goto label_240e38;
            case 0x24100Cu: goto label_24100c;
            case 0x24117Cu: goto label_24117c;
            case 0x2412FCu: goto label_2412fc;
            case 0x241328u: goto label_241328;
            case 0x2413ECu: goto label_2413ec;
            case 0x241430u: goto label_241430;
            case 0x241484u: goto label_241484;
            case 0x2415F4u: goto label_2415f4;
            case 0x241620u: goto label_241620;
            case 0x24166Cu: goto label_24166c;
            case 0x2416A8u: goto label_2416a8;
            case 0x241704u: goto label_241704;
            case 0x241774u: goto label_241774;
            case 0x241898u: goto label_241898;
            case 0x2418F8u: goto label_2418f8;
            case 0x241964u: goto label_241964;
            case 0x2419DCu: goto label_2419dc;
            case 0x241A84u: goto label_241a84;
            case 0x241AD4u: goto label_241ad4;
            case 0x241B00u: goto label_241b00;
            case 0x241B30u: goto label_241b30;
            case 0x241C24u: goto label_241c24;
            case 0x241CA8u: goto label_241ca8;
            case 0x241EE8u: goto label_241ee8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x240DFCu;
label_240dfc:
    // 0x240dfc: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x240dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
label_240e00:
    // 0x240e00: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x240e00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_240e04:
    // 0x240e04: 0x2442cb30  addiu       $v0, $v0, -0x34D0
    ctx->pc = 0x240e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953776));
label_240e08:
    // 0x240e08: 0x8e0600d4  lw          $a2, 0xD4($s0)
    ctx->pc = 0x240e08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_240e0c:
    // 0x240e0c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x240e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_240e10:
    // 0x240e10: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x240e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_240e14:
    // 0x240e14: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x240e14u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_240e18:
    // 0x240e18: 0xc08e8ac  jal         func_23A2B0
label_240e1c:
    if (ctx->pc == 0x240E1Cu) {
        ctx->pc = 0x240E1Cu;
            // 0x240e1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x240E20u;
        goto label_240e20;
    }
    ctx->pc = 0x240E18u;
    SET_GPR_U32(ctx, 31, 0x240E20u);
    ctx->pc = 0x240E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240E18u;
            // 0x240e1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A2B0u;
    if (runtime->hasFunction(0x23A2B0u)) {
        auto targetFn = runtime->lookupFunction(0x23A2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240E20u; }
        if (ctx->pc != 0x240E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPreCmdTrush__FP14CBaseMenuClassiP13CGameDataUsedP16CMenuPosDataForm_0x23a2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240E20u; }
        if (ctx->pc != 0x240E20u) { return; }
    }
    ctx->pc = 0x240E20u;
label_240e20:
    // 0x240e20: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x240e20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_240e24:
    // 0x240e24: 0x8c420138  lw          $v0, 0x138($v0)
    ctx->pc = 0x240e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
label_240e28:
    // 0x240e28: 0x1040042f  beqz        $v0, . + 4 + (0x42F << 2)
label_240e2c:
    if (ctx->pc == 0x240E2Cu) {
        ctx->pc = 0x240E30u;
        goto label_240e30;
    }
    ctx->pc = 0x240E28u;
    {
        const bool branch_taken_0x240e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240e28) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x240E30u;
label_240e30:
    // 0x240e30: 0x1000042d  b           . + 4 + (0x42D << 2)
label_240e34:
    if (ctx->pc == 0x240E34u) {
        ctx->pc = 0x240E34u;
            // 0x240e34: 0xa0400001  sb          $zero, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x240E38u;
        goto label_240e38;
    }
    ctx->pc = 0x240E30u;
    {
        const bool branch_taken_0x240e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240E34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240E30u;
            // 0x240e34: 0xa0400001  sb          $zero, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240e30) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x240E38u;
label_240e38:
    // 0x240e38: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x240e38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_240e3c:
    // 0x240e3c: 0x8422d804  lh          $v0, -0x27FC($at)
    ctx->pc = 0x240e3cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294957060)));
label_240e40:
    // 0x240e40: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
label_240e44:
    if (ctx->pc == 0x240E44u) {
        ctx->pc = 0x240E44u;
            // 0x240e44: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x240E48u;
        goto label_240e48;
    }
    ctx->pc = 0x240E40u;
    {
        const bool branch_taken_0x240e40 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x240E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240E40u;
            // 0x240e44: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240e40) {
            ctx->pc = 0x240E78u;
            goto label_240e78;
        }
    }
    ctx->pc = 0x240E48u;
label_240e48:
    // 0x240e48: 0x8422d806  lh          $v0, -0x27FA($at)
    ctx->pc = 0x240e48u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294957062)));
label_240e4c:
    // 0x240e4c: 0x18400426  blez        $v0, . + 4 + (0x426 << 2)
label_240e50:
    if (ctx->pc == 0x240E50u) {
        ctx->pc = 0x240E50u;
            // 0x240e50: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->pc = 0x240E54u;
        goto label_240e54;
    }
    ctx->pc = 0x240E4Cu;
    {
        const bool branch_taken_0x240e4c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x240E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240E4Cu;
            // 0x240e50: 0x21880  sll         $v1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240e4c) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x240E54u;
label_240e54:
    // 0x240e54: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x240e54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_240e58:
    // 0x240e58: 0x24420eb0  addiu       $v0, $v0, 0xEB0
    ctx->pc = 0x240e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3760));
label_240e5c:
    // 0x240e5c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x240e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_240e60:
    // 0x240e60: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x240e60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_240e64:
    // 0x240e64: 0xc08e7cc  jal         func_239F30
label_240e68:
    if (ctx->pc == 0x240E68u) {
        ctx->pc = 0x240E68u;
            // 0x240e68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x240E6Cu;
        goto label_240e6c;
    }
    ctx->pc = 0x240E64u;
    SET_GPR_U32(ctx, 31, 0x240E6Cu);
    ctx->pc = 0x240E68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240E64u;
            // 0x240e68: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240E6Cu; }
        if (ctx->pc != 0x240E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240E6Cu; }
        if (ctx->pc != 0x240E6Cu) { return; }
    }
    ctx->pc = 0x240E6Cu;
label_240e6c:
    // 0x240e6c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x240e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240e70:
    // 0x240e70: 0x1000041d  b           . + 4 + (0x41D << 2)
label_240e74:
    if (ctx->pc == 0x240E74u) {
        ctx->pc = 0x240E74u;
            // 0x240e74: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x240E78u;
        goto label_240e78;
    }
    ctx->pc = 0x240E70u;
    {
        const bool branch_taken_0x240e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240E74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240E70u;
            // 0x240e74: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240e70) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x240E78u;
label_240e78:
    // 0x240e78: 0x86030110  lh          $v1, 0x110($s0)
    ctx->pc = 0x240e78u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_240e7c:
    // 0x240e7c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x240e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_240e80:
    // 0x240e80: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_240e84:
    if (ctx->pc == 0x240E84u) {
        ctx->pc = 0x240E84u;
            // 0x240e84: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x240E88u;
        goto label_240e88;
    }
    ctx->pc = 0x240E80u;
    {
        const bool branch_taken_0x240e80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x240E84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240E80u;
            // 0x240e84: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240e80) {
            ctx->pc = 0x240E90u;
            goto label_240e90;
        }
    }
    ctx->pc = 0x240E88u;
label_240e88:
    // 0x240e88: 0x14620014  bne         $v1, $v0, . + 4 + (0x14 << 2)
label_240e8c:
    if (ctx->pc == 0x240E8Cu) {
        ctx->pc = 0x240E90u;
        goto label_240e90;
    }
    ctx->pc = 0x240E88u;
    {
        const bool branch_taken_0x240e88 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x240e88) {
            ctx->pc = 0x240EDCu;
            goto label_240edc;
        }
    }
    ctx->pc = 0x240E90u;
label_240e90:
    // 0x240e90: 0x8e03017c  lw          $v1, 0x17C($s0)
    ctx->pc = 0x240e90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
label_240e94:
    // 0x240e94: 0x2402012e  addiu       $v0, $zero, 0x12E
    ctx->pc = 0x240e94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 302));
label_240e98:
    // 0x240e98: 0x84630002  lh          $v1, 0x2($v1)
    ctx->pc = 0x240e98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
label_240e9c:
    // 0x240e9c: 0xa6030116  sh          $v1, 0x116($s0)
    ctx->pc = 0x240e9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 278), (uint16_t)GPR_U32(ctx, 3));
label_240ea0:
    // 0x240ea0: 0x86030116  lh          $v1, 0x116($s0)
    ctx->pc = 0x240ea0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 278)));
label_240ea4:
    // 0x240ea4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_240ea8:
    if (ctx->pc == 0x240EA8u) {
        ctx->pc = 0x240EA8u;
            // 0x240ea8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x240EACu;
        goto label_240eac;
    }
    ctx->pc = 0x240EA4u;
    {
        const bool branch_taken_0x240ea4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x240EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240EA4u;
            // 0x240ea8: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240ea4) {
            ctx->pc = 0x240EBCu;
            goto label_240ebc;
        }
    }
    ctx->pc = 0x240EACu;
label_240eac:
    // 0x240eac: 0x2402012f  addiu       $v0, $zero, 0x12F
    ctx->pc = 0x240eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 303));
label_240eb0:
    // 0x240eb0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_240eb4:
    if (ctx->pc == 0x240EB4u) {
        ctx->pc = 0x240EB4u;
            // 0x240eb4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x240EB8u;
        goto label_240eb8;
    }
    ctx->pc = 0x240EB0u;
    {
        const bool branch_taken_0x240eb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x240EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240EB0u;
            // 0x240eb4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240eb0) {
            ctx->pc = 0x240EC4u;
            goto label_240ec4;
        }
    }
    ctx->pc = 0x240EB8u;
label_240eb8:
    // 0x240eb8: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x240eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_240ebc:
    // 0x240ebc: 0x10000002  b           . + 4 + (0x2 << 2)
label_240ec0:
    if (ctx->pc == 0x240EC0u) {
        ctx->pc = 0x240EC0u;
            // 0x240ec0: 0xa6020110  sh          $v0, 0x110($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 272), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x240EC4u;
        goto label_240ec4;
    }
    ctx->pc = 0x240EBCu;
    {
        const bool branch_taken_0x240ebc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240EC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240EBCu;
            // 0x240ec0: 0xa6020110  sh          $v0, 0x110($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 272), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240ebc) {
            ctx->pc = 0x240EC8u;
            goto label_240ec8;
        }
    }
    ctx->pc = 0x240EC4u;
label_240ec4:
    // 0x240ec4: 0xa6020110  sh          $v0, 0x110($s0)
    ctx->pc = 0x240ec4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 272), (uint16_t)GPR_U32(ctx, 2));
label_240ec8:
    // 0x240ec8: 0x86050110  lh          $a1, 0x110($s0)
    ctx->pc = 0x240ec8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_240ecc:
    // 0x240ecc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x240eccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240ed0:
    // 0x240ed0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x240ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_240ed4:
    // 0x240ed4: 0xc093114  jal         func_24C450
label_240ed8:
    if (ctx->pc == 0x240ED8u) {
        ctx->pc = 0x240ED8u;
            // 0x240ed8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x240EDCu;
        goto label_240edc;
    }
    ctx->pc = 0x240ED4u;
    SET_GPR_U32(ctx, 31, 0x240EDCu);
    ctx->pc = 0x240ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240ED4u;
            // 0x240ed8: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24C450u;
    if (runtime->hasFunction(0x24C450u)) {
        auto targetFn = runtime->lookupFunction(0x24C450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240EDCu; }
        if (ctx->pc != 0x240EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ModelReadStart__13CMenuItemInfoFiii_0x24c450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240EDCu; }
        if (ctx->pc != 0x240EDCu) { return; }
    }
    ctx->pc = 0x240EDCu;
label_240edc:
    // 0x240edc: 0x86040110  lh          $a0, 0x110($s0)
    ctx->pc = 0x240edcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_240ee0:
    // 0x240ee0: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
label_240ee4:
    if (ctx->pc == 0x240EE4u) {
        ctx->pc = 0x240EE4u;
            // 0x240ee4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x240EE8u;
        goto label_240ee8;
    }
    ctx->pc = 0x240EE0u;
    {
        const bool branch_taken_0x240ee0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x240EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240EE0u;
            // 0x240ee4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240ee0) {
            ctx->pc = 0x240EF4u;
            goto label_240ef4;
        }
    }
    ctx->pc = 0x240EE8u;
label_240ee8:
    // 0x240ee8: 0x82820003  lb          $v0, 0x3($s4)
    ctx->pc = 0x240ee8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
label_240eec:
    // 0x240eec: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_240ef0:
    if (ctx->pc == 0x240EF0u) {
        ctx->pc = 0x240EF4u;
        goto label_240ef4;
    }
    ctx->pc = 0x240EECu;
    {
        const bool branch_taken_0x240eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240eec) {
            ctx->pc = 0x240F08u;
            goto label_240f08;
        }
    }
    ctx->pc = 0x240EF4u;
label_240ef4:
    // 0x240ef4: 0x14830029  bne         $a0, $v1, . + 4 + (0x29 << 2)
label_240ef8:
    if (ctx->pc == 0x240EF8u) {
        ctx->pc = 0x240EFCu;
        goto label_240efc;
    }
    ctx->pc = 0x240EF4u;
    {
        const bool branch_taken_0x240ef4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x240ef4) {
            ctx->pc = 0x240F9Cu;
            goto label_240f9c;
        }
    }
    ctx->pc = 0x240EFCu;
label_240efc:
    // 0x240efc: 0x82820003  lb          $v0, 0x3($s4)
    ctx->pc = 0x240efcu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
label_240f00:
    // 0x240f00: 0x14430026  bne         $v0, $v1, . + 4 + (0x26 << 2)
label_240f04:
    if (ctx->pc == 0x240F04u) {
        ctx->pc = 0x240F08u;
        goto label_240f08;
    }
    ctx->pc = 0x240F00u;
    {
        const bool branch_taken_0x240f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x240f00) {
            ctx->pc = 0x240F9Cu;
            goto label_240f9c;
        }
    }
    ctx->pc = 0x240F08u;
label_240f08:
    // 0x240f08: 0x82850003  lb          $a1, 0x3($s4)
    ctx->pc = 0x240f08u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
label_240f0c:
    // 0x240f0c: 0xc090320  jal         func_240C80
label_240f10:
    if (ctx->pc == 0x240F10u) {
        ctx->pc = 0x240F10u;
            // 0x240f10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x240F14u;
        goto label_240f14;
    }
    ctx->pc = 0x240F0Cu;
    SET_GPR_U32(ctx, 31, 0x240F14u);
    ctx->pc = 0x240F10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240F0Cu;
            // 0x240f10: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240C80u;
    if (runtime->hasFunction(0x240C80u)) {
        auto targetFn = runtime->lookupFunction(0x240C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240F14u; }
        if (ctx->pc != 0x240F14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLoadInfo__13CMenuItemInfoFi_0x240c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240F14u; }
        if (ctx->pc != 0x240F14u) { return; }
    }
    ctx->pc = 0x240F14u;
label_240f14:
    // 0x240f14: 0x86850004  lh          $a1, 0x4($s4)
    ctx->pc = 0x240f14u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
label_240f18:
    // 0x240f18: 0xc0abf4c  jal         func_2AFD30
label_240f1c:
    if (ctx->pc == 0x240F1Cu) {
        ctx->pc = 0x240F1Cu;
            // 0x240f1c: 0x86040114  lh          $a0, 0x114($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 276)));
        ctx->pc = 0x240F20u;
        goto label_240f20;
    }
    ctx->pc = 0x240F18u;
    SET_GPR_U32(ctx, 31, 0x240F20u);
    ctx->pc = 0x240F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240F18u;
            // 0x240f1c: 0x86040114  lh          $a0, 0x114($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 276)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AFD30u;
    if (runtime->hasFunction(0x2AFD30u)) {
        auto targetFn = runtime->lookupFunction(0x2AFD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240F20u; }
        if (ctx->pc != 0x240F20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvertCharaLoadDataPhase__Fii_0x2afd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240F20u; }
        if (ctx->pc != 0x240F20u) { return; }
    }
    ctx->pc = 0x240F20u;
label_240f20:
    // 0x240f20: 0xa3829b74  sb          $v0, -0x648C($gp)
    ctx->pc = 0x240f20u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941556), (uint8_t)GPR_U32(ctx, 2));
label_240f24:
    // 0x240f24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x240f24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240f28:
    // 0x240f28: 0x83829b74  lb          $v0, -0x648C($gp)
    ctx->pc = 0x240f28u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941556)));
label_240f2c:
    // 0x240f2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x240f2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_240f30:
    // 0x240f30: 0xa3829b75  sb          $v0, -0x648B($gp)
    ctx->pc = 0x240f30u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941557), (uint8_t)GPR_U32(ctx, 2));
label_240f34:
    // 0x240f34: 0xa3809b72  sb          $zero, -0x648E($gp)
    ctx->pc = 0x240f34u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941554), (uint8_t)GPR_U32(ctx, 0));
label_240f38:
    // 0x240f38: 0x86050110  lh          $a1, 0x110($s0)
    ctx->pc = 0x240f38u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_240f3c:
    // 0x240f3c: 0xc093114  jal         func_24C450
label_240f40:
    if (ctx->pc == 0x240F40u) {
        ctx->pc = 0x240F40u;
            // 0x240f40: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x240F44u;
        goto label_240f44;
    }
    ctx->pc = 0x240F3Cu;
    SET_GPR_U32(ctx, 31, 0x240F44u);
    ctx->pc = 0x240F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240F3Cu;
            // 0x240f40: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24C450u;
    if (runtime->hasFunction(0x24C450u)) {
        auto targetFn = runtime->lookupFunction(0x24C450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240F44u; }
        if (ctx->pc != 0x240F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ModelReadStart__13CMenuItemInfoFiii_0x24c450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240F44u; }
        if (ctx->pc != 0x240F44u) { return; }
    }
    ctx->pc = 0x240F44u;
label_240f44:
    // 0x240f44: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x240f44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_240f48:
    // 0x240f48: 0x8e0500d4  lw          $a1, 0xD4($s0)
    ctx->pc = 0x240f48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_240f4c:
    // 0x240f4c: 0xc065ba0  jal         func_196E80
label_240f50:
    if (ctx->pc == 0x240F50u) {
        ctx->pc = 0x240F50u;
            // 0x240f50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x240F54u;
        goto label_240f54;
    }
    ctx->pc = 0x240F4Cu;
    SET_GPR_U32(ctx, 31, 0x240F54u);
    ctx->pc = 0x240F50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240F4Cu;
            // 0x240f50: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196E80u;
    if (runtime->hasFunction(0x196E80u)) {
        auto targetFn = runtime->lookupFunction(0x196E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240F54u; }
        if (ctx->pc != 0x240F54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GameDataSwap__FP13CGameDataUsedP13CGameDataUsedi_0x196e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240F54u; }
        if (ctx->pc != 0x240F54u) { return; }
    }
    ctx->pc = 0x240F54u;
label_240f54:
    // 0x240f54: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x240f54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_240f58:
    // 0x240f58: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x240f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_240f5c:
    // 0x240f5c: 0x24420ec0  addiu       $v0, $v0, 0xEC0
    ctx->pc = 0x240f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3776));
label_240f60:
    // 0x240f60: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x240f60u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_240f64:
    // 0x240f64: 0x78420010  lq          $v0, 0x10($v0)
    ctx->pc = 0x240f64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_240f68:
    // 0x240f68: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x240f68u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_240f6c:
    // 0x240f6c: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x240f6cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_240f70:
    // 0x240f70: 0x82820003  lb          $v0, 0x3($s4)
    ctx->pc = 0x240f70u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
label_240f74:
    // 0x240f74: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x240f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_240f78:
    // 0x240f78: 0x86820004  lh          $v0, 0x4($s4)
    ctx->pc = 0x240f78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
label_240f7c:
    // 0x240f7c: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x240f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
label_240f80:
    // 0x240f80: 0xc090adc  jal         func_242B70
label_240f84:
    if (ctx->pc == 0x240F84u) {
        ctx->pc = 0x240F84u;
            // 0x240f84: 0xafb3007c  sw          $s3, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 19));
        ctx->pc = 0x240F88u;
        goto label_240f88;
    }
    ctx->pc = 0x240F80u;
    SET_GPR_U32(ctx, 31, 0x240F88u);
    ctx->pc = 0x240F84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240F80u;
            // 0x240f84: 0xafb3007c  sw          $s3, 0x7C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242B70u;
    if (runtime->hasFunction(0x242B70u)) {
        auto targetFn = runtime->lookupFunction(0x242B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240F88u; }
        if (ctx->pc != 0x240F88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CommonSetMoveItemClass__FPA4_i_0x242b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240F88u; }
        if (ctx->pc != 0x240F88u) { return; }
    }
    ctx->pc = 0x240F88u;
label_240f88:
    // 0x240f88: 0xc090c40  jal         func_243100
label_240f8c:
    if (ctx->pc == 0x240F8Cu) {
        ctx->pc = 0x240F8Cu;
            // 0x240f8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x240F90u;
        goto label_240f90;
    }
    ctx->pc = 0x240F88u;
    SET_GPR_U32(ctx, 31, 0x240F90u);
    ctx->pc = 0x240F8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240F88u;
            // 0x240f8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243100u;
    if (runtime->hasFunction(0x243100u)) {
        auto targetFn = runtime->lookupFunction(0x243100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240F90u; }
        if (ctx->pc != 0x240F90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveCharaNo__13CMenuItemInfoFv_0x243100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240F90u; }
        if (ctx->pc != 0x240F90u) { return; }
    }
    ctx->pc = 0x240F90u;
label_240f90:
    // 0x240f90: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x240f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240f94:
    // 0x240f94: 0xc08ff3c  jal         func_23FCF0
label_240f98:
    if (ctx->pc == 0x240F98u) {
        ctx->pc = 0x240F98u;
            // 0x240f98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x240F9Cu;
        goto label_240f9c;
    }
    ctx->pc = 0x240F94u;
    SET_GPR_U32(ctx, 31, 0x240F9Cu);
    ctx->pc = 0x240F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240F94u;
            // 0x240f98: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23FCF0u;
    if (runtime->hasFunction(0x23FCF0u)) {
        auto targetFn = runtime->lookupFunction(0x23FCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240F9Cu; }
        if (ctx->pc != 0x240F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetEquipListNo__13CMenuItemInfoFi_0x23fcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240F9Cu; }
        if (ctx->pc != 0x240F9Cu) { return; }
    }
    ctx->pc = 0x240F9Cu;
label_240f9c:
    // 0x240f9c: 0x86030110  lh          $v1, 0x110($s0)
    ctx->pc = 0x240f9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_240fa0:
    // 0x240fa0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x240fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_240fa4:
    // 0x240fa4: 0x146203d0  bne         $v1, $v0, . + 4 + (0x3D0 << 2)
label_240fa8:
    if (ctx->pc == 0x240FA8u) {
        ctx->pc = 0x240FACu;
        goto label_240fac;
    }
    ctx->pc = 0x240FA4u;
    {
        const bool branch_taken_0x240fa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x240fa4) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x240FACu;
label_240fac:
    // 0x240fac: 0x82820003  lb          $v0, 0x3($s4)
    ctx->pc = 0x240facu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
label_240fb0:
    // 0x240fb0: 0x144003cd  bnez        $v0, . + 4 + (0x3CD << 2)
label_240fb4:
    if (ctx->pc == 0x240FB4u) {
        ctx->pc = 0x240FB8u;
        goto label_240fb8;
    }
    ctx->pc = 0x240FB0u;
    {
        const bool branch_taken_0x240fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x240fb0) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x240FB8u;
label_240fb8:
    // 0x240fb8: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x240fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_240fbc:
    // 0x240fbc: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x240fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_240fc0:
    // 0x240fc0: 0x80630004  lb          $v1, 0x4($v1)
    ctx->pc = 0x240fc0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_240fc4:
    // 0x240fc4: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_240fc8:
    if (ctx->pc == 0x240FC8u) {
        ctx->pc = 0x240FC8u;
            // 0x240fc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x240FCCu;
        goto label_240fcc;
    }
    ctx->pc = 0x240FC4u;
    {
        const bool branch_taken_0x240fc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x240FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x240FC4u;
            // 0x240fc8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240fc4) {
            ctx->pc = 0x240FD8u;
            goto label_240fd8;
        }
    }
    ctx->pc = 0x240FCCu;
label_240fcc:
    // 0x240fcc: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x240fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_240fd0:
    // 0x240fd0: 0x146203c5  bne         $v1, $v0, . + 4 + (0x3C5 << 2)
label_240fd4:
    if (ctx->pc == 0x240FD4u) {
        ctx->pc = 0x240FD8u;
        goto label_240fd8;
    }
    ctx->pc = 0x240FD0u;
    {
        const bool branch_taken_0x240fd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x240fd0) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x240FD8u;
label_240fd8:
    // 0x240fd8: 0xc090320  jal         func_240C80
label_240fdc:
    if (ctx->pc == 0x240FDCu) {
        ctx->pc = 0x240FDCu;
            // 0x240fdc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x240FE0u;
        goto label_240fe0;
    }
    ctx->pc = 0x240FD8u;
    SET_GPR_U32(ctx, 31, 0x240FE0u);
    ctx->pc = 0x240FDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240FD8u;
            // 0x240fdc: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240C80u;
    if (runtime->hasFunction(0x240C80u)) {
        auto targetFn = runtime->lookupFunction(0x240C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240FE0u; }
        if (ctx->pc != 0x240FE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLoadInfo__13CMenuItemInfoFi_0x240c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x240FE0u; }
        if (ctx->pc != 0x240FE0u) { return; }
    }
    ctx->pc = 0x240FE0u;
label_240fe0:
    // 0x240fe0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x240fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_240fe4:
    // 0x240fe4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x240fe4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240fe8:
    // 0x240fe8: 0xa3829b74  sb          $v0, -0x648C($gp)
    ctx->pc = 0x240fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941556), (uint8_t)GPR_U32(ctx, 2));
label_240fec:
    // 0x240fec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x240fecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_240ff0:
    // 0x240ff0: 0xa3829b75  sb          $v0, -0x648B($gp)
    ctx->pc = 0x240ff0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941557), (uint8_t)GPR_U32(ctx, 2));
label_240ff4:
    // 0x240ff4: 0xa3809b72  sb          $zero, -0x648E($gp)
    ctx->pc = 0x240ff4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941554), (uint8_t)GPR_U32(ctx, 0));
label_240ff8:
    // 0x240ff8: 0x86050110  lh          $a1, 0x110($s0)
    ctx->pc = 0x240ff8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_240ffc:
    // 0x240ffc: 0xc093114  jal         func_24C450
label_241000:
    if (ctx->pc == 0x241000u) {
        ctx->pc = 0x241000u;
            // 0x241000: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241004u;
        goto label_241004;
    }
    ctx->pc = 0x240FFCu;
    SET_GPR_U32(ctx, 31, 0x241004u);
    ctx->pc = 0x241000u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x240FFCu;
            // 0x241000: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24C450u;
    if (runtime->hasFunction(0x24C450u)) {
        auto targetFn = runtime->lookupFunction(0x24C450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241004u; }
        if (ctx->pc != 0x241004u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ModelReadStart__13CMenuItemInfoFiii_0x24c450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241004u; }
        if (ctx->pc != 0x241004u) { return; }
    }
    ctx->pc = 0x241004u;
label_241004:
    // 0x241004: 0x100003b8  b           . + 4 + (0x3B8 << 2)
label_241008:
    if (ctx->pc == 0x241008u) {
        ctx->pc = 0x24100Cu;
        goto label_24100c;
    }
    ctx->pc = 0x241004u;
    {
        const bool branch_taken_0x241004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241004) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x24100Cu;
label_24100c:
    // 0x24100c: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x24100cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_241010:
    // 0x241010: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x241010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_241014:
    // 0x241014: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_241018:
    if (ctx->pc == 0x241018u) {
        ctx->pc = 0x241018u;
            // 0x241018: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->pc = 0x24101Cu;
        goto label_24101c;
    }
    ctx->pc = 0x241014u;
    {
        const bool branch_taken_0x241014 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x241018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241014u;
            // 0x241018: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241014) {
            ctx->pc = 0x241024u;
            goto label_241024;
        }
    }
    ctx->pc = 0x24101Cu;
label_24101c:
    // 0x24101c: 0x14620020  bne         $v1, $v0, . + 4 + (0x20 << 2)
label_241020:
    if (ctx->pc == 0x241020u) {
        ctx->pc = 0x241024u;
        goto label_241024;
    }
    ctx->pc = 0x24101Cu;
    {
        const bool branch_taken_0x24101c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24101c) {
            ctx->pc = 0x2410A0u;
            goto label_2410a0;
        }
    }
    ctx->pc = 0x241024u;
label_241024:
    // 0x241024: 0x878395f0  lh          $v1, -0x6A10($gp)
    ctx->pc = 0x241024u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940144)));
label_241028:
    // 0x241028: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x241028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24102c:
    // 0x24102c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_241030:
    if (ctx->pc == 0x241030u) {
        ctx->pc = 0x241030u;
            // 0x241030: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x241034u;
        goto label_241034;
    }
    ctx->pc = 0x24102Cu;
    {
        const bool branch_taken_0x24102c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x241030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24102Cu;
            // 0x241030: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24102c) {
            ctx->pc = 0x241048u;
            goto label_241048;
        }
    }
    ctx->pc = 0x241034u;
label_241034:
    // 0x241034: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x241034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_241038:
    // 0x241038: 0xc08e7cc  jal         func_239F30
label_24103c:
    if (ctx->pc == 0x24103Cu) {
        ctx->pc = 0x24103Cu;
            // 0x24103c: 0x24a5ad68  addiu       $a1, $a1, -0x5298 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946152));
        ctx->pc = 0x241040u;
        goto label_241040;
    }
    ctx->pc = 0x241038u;
    SET_GPR_U32(ctx, 31, 0x241040u);
    ctx->pc = 0x24103Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241038u;
            // 0x24103c: 0x24a5ad68  addiu       $a1, $a1, -0x5298 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241040u; }
        if (ctx->pc != 0x241040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241040u; }
        if (ctx->pc != 0x241040u) { return; }
    }
    ctx->pc = 0x241040u;
label_241040:
    // 0x241040: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x241040u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241044:
    // 0x241044: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x241044u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_241048:
    // 0x241048: 0x878395f0  lh          $v1, -0x6A10($gp)
    ctx->pc = 0x241048u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940144)));
label_24104c:
    // 0x24104c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x24104cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_241050:
    // 0x241050: 0x146203a5  bne         $v1, $v0, . + 4 + (0x3A5 << 2)
label_241054:
    if (ctx->pc == 0x241054u) {
        ctx->pc = 0x241054u;
            // 0x241054: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x241058u;
        goto label_241058;
    }
    ctx->pc = 0x241050u;
    {
        const bool branch_taken_0x241050 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x241054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241050u;
            // 0x241054: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241050) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241058u;
label_241058:
    // 0x241058: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x241058u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24105c:
    // 0x24105c: 0xc08e7cc  jal         func_239F30
label_241060:
    if (ctx->pc == 0x241060u) {
        ctx->pc = 0x241060u;
            // 0x241060: 0x24a5ad78  addiu       $a1, $a1, -0x5288 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946168));
        ctx->pc = 0x241064u;
        goto label_241064;
    }
    ctx->pc = 0x24105Cu;
    SET_GPR_U32(ctx, 31, 0x241064u);
    ctx->pc = 0x241060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24105Cu;
            // 0x241060: 0x24a5ad78  addiu       $a1, $a1, -0x5288 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946168));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241064u; }
        if (ctx->pc != 0x241064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241064u; }
        if (ctx->pc != 0x241064u) { return; }
    }
    ctx->pc = 0x241064u;
label_241064:
    // 0x241064: 0xdf829698  ld          $v0, -0x6968($gp)
    ctx->pc = 0x241064u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294940312)));
label_241068:
    // 0x241068: 0x27a302c8  addiu       $v1, $sp, 0x2C8
    ctx->pc = 0x241068u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 712));
label_24106c:
    // 0x24106c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x24106cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_241070:
    // 0x241070: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x241070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_241074:
    // 0x241074: 0xc065dc0  jal         func_197700
label_241078:
    if (ctx->pc == 0x241078u) {
        ctx->pc = 0x241078u;
            // 0x241078: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x24107Cu;
        goto label_24107c;
    }
    ctx->pc = 0x241074u;
    SET_GPR_U32(ctx, 31, 0x24107Cu);
    ctx->pc = 0x241078u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241074u;
            // 0x241078: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197700u;
    if (runtime->hasFunction(0x197700u)) {
        auto targetFn = runtime->lookupFunction(0x197700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24107Cu; }
        if (ctx->pc != 0x24107Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetName__13CGameDataUsedFi_0x197700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24107Cu; }
        if (ctx->pc != 0x24107Cu) { return; }
    }
    ctx->pc = 0x24107Cu;
label_24107c:
    // 0x24107c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24107cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_241080:
    // 0x241080: 0xafa202c8  sw          $v0, 0x2C8($sp)
    ctx->pc = 0x241080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 712), GPR_U32(ctx, 2));
label_241084:
    // 0x241084: 0x8c24ca5c  lw          $a0, -0x35A4($at)
    ctx->pc = 0x241084u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
label_241088:
    // 0x241088: 0x27a502c8  addiu       $a1, $sp, 0x2C8
    ctx->pc = 0x241088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 712));
label_24108c:
    // 0x24108c: 0xc087720  jal         func_21DC80
label_241090:
    if (ctx->pc == 0x241090u) {
        ctx->pc = 0x241090u;
            // 0x241090: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x241094u;
        goto label_241094;
    }
    ctx->pc = 0x24108Cu;
    SET_GPR_U32(ctx, 31, 0x241094u);
    ctx->pc = 0x241090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24108Cu;
            // 0x241090: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241094u; }
        if (ctx->pc != 0x241094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241094u; }
        if (ctx->pc != 0x241094u) { return; }
    }
    ctx->pc = 0x241094u;
label_241094:
    // 0x241094: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x241094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241098:
    // 0x241098: 0x10000393  b           . + 4 + (0x393 << 2)
label_24109c:
    if (ctx->pc == 0x24109Cu) {
        ctx->pc = 0x24109Cu;
            // 0x24109c: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2410A0u;
        goto label_2410a0;
    }
    ctx->pc = 0x241098u;
    {
        const bool branch_taken_0x241098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24109Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241098u;
            // 0x24109c: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241098) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x2410A0u;
label_2410a0:
    // 0x2410a0: 0x86030110  lh          $v1, 0x110($s0)
    ctx->pc = 0x2410a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_2410a4:
    // 0x2410a4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2410a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2410a8:
    // 0x2410a8: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
label_2410ac:
    if (ctx->pc == 0x2410ACu) {
        ctx->pc = 0x2410ACu;
            // 0x2410ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2410B0u;
        goto label_2410b0;
    }
    ctx->pc = 0x2410A8u;
    {
        const bool branch_taken_0x2410a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2410ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2410A8u;
            // 0x2410ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2410a8) {
            ctx->pc = 0x241140u;
            goto label_241140;
        }
    }
    ctx->pc = 0x2410B0u;
label_2410b0:
    // 0x2410b0: 0xc090320  jal         func_240C80
label_2410b4:
    if (ctx->pc == 0x2410B4u) {
        ctx->pc = 0x2410B4u;
            // 0x2410b4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2410B8u;
        goto label_2410b8;
    }
    ctx->pc = 0x2410B0u;
    SET_GPR_U32(ctx, 31, 0x2410B8u);
    ctx->pc = 0x2410B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2410B0u;
            // 0x2410b4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240C80u;
    if (runtime->hasFunction(0x240C80u)) {
        auto targetFn = runtime->lookupFunction(0x240C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2410B8u; }
        if (ctx->pc != 0x2410B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLoadInfo__13CMenuItemInfoFi_0x240c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2410B8u; }
        if (ctx->pc != 0x2410B8u) { return; }
    }
    ctx->pc = 0x2410B8u;
label_2410b8:
    // 0x2410b8: 0x86850004  lh          $a1, 0x4($s4)
    ctx->pc = 0x2410b8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
label_2410bc:
    // 0x2410bc: 0xc0abf4c  jal         func_2AFD30
label_2410c0:
    if (ctx->pc == 0x2410C0u) {
        ctx->pc = 0x2410C0u;
            // 0x2410c0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2410C4u;
        goto label_2410c4;
    }
    ctx->pc = 0x2410BCu;
    SET_GPR_U32(ctx, 31, 0x2410C4u);
    ctx->pc = 0x2410C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2410BCu;
            // 0x2410c0: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AFD30u;
    if (runtime->hasFunction(0x2AFD30u)) {
        auto targetFn = runtime->lookupFunction(0x2AFD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2410C4u; }
        if (ctx->pc != 0x2410C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvertCharaLoadDataPhase__Fii_0x2afd30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2410C4u; }
        if (ctx->pc != 0x2410C4u) { return; }
    }
    ctx->pc = 0x2410C4u;
label_2410c4:
    // 0x2410c4: 0xa3829b74  sb          $v0, -0x648C($gp)
    ctx->pc = 0x2410c4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941556), (uint8_t)GPR_U32(ctx, 2));
label_2410c8:
    // 0x2410c8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2410c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2410cc:
    // 0x2410cc: 0x83829b74  lb          $v0, -0x648C($gp)
    ctx->pc = 0x2410ccu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294941556)));
label_2410d0:
    // 0x2410d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2410d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2410d4:
    // 0x2410d4: 0xa3829b75  sb          $v0, -0x648B($gp)
    ctx->pc = 0x2410d4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941557), (uint8_t)GPR_U32(ctx, 2));
label_2410d8:
    // 0x2410d8: 0xa3809b72  sb          $zero, -0x648E($gp)
    ctx->pc = 0x2410d8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941554), (uint8_t)GPR_U32(ctx, 0));
label_2410dc:
    // 0x2410dc: 0x86050110  lh          $a1, 0x110($s0)
    ctx->pc = 0x2410dcu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_2410e0:
    // 0x2410e0: 0xc093114  jal         func_24C450
label_2410e4:
    if (ctx->pc == 0x2410E4u) {
        ctx->pc = 0x2410E4u;
            // 0x2410e4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2410E8u;
        goto label_2410e8;
    }
    ctx->pc = 0x2410E0u;
    SET_GPR_U32(ctx, 31, 0x2410E8u);
    ctx->pc = 0x2410E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2410E0u;
            // 0x2410e4: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24C450u;
    if (runtime->hasFunction(0x24C450u)) {
        auto targetFn = runtime->lookupFunction(0x24C450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2410E8u; }
        if (ctx->pc != 0x2410E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ModelReadStart__13CMenuItemInfoFiii_0x24c450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2410E8u; }
        if (ctx->pc != 0x2410E8u) { return; }
    }
    ctx->pc = 0x2410E8u;
label_2410e8:
    // 0x2410e8: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x2410e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_2410ec:
    // 0x2410ec: 0x8e0500d4  lw          $a1, 0xD4($s0)
    ctx->pc = 0x2410ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_2410f0:
    // 0x2410f0: 0xc065ba0  jal         func_196E80
label_2410f4:
    if (ctx->pc == 0x2410F4u) {
        ctx->pc = 0x2410F4u;
            // 0x2410f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2410F8u;
        goto label_2410f8;
    }
    ctx->pc = 0x2410F0u;
    SET_GPR_U32(ctx, 31, 0x2410F8u);
    ctx->pc = 0x2410F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2410F0u;
            // 0x2410f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196E80u;
    if (runtime->hasFunction(0x196E80u)) {
        auto targetFn = runtime->lookupFunction(0x196E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2410F8u; }
        if (ctx->pc != 0x2410F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GameDataSwap__FP13CGameDataUsedP13CGameDataUsedi_0x196e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2410F8u; }
        if (ctx->pc != 0x2410F8u) { return; }
    }
    ctx->pc = 0x2410F8u;
label_2410f8:
    // 0x2410f8: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2410f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_2410fc:
    // 0x2410fc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2410fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_241100:
    // 0x241100: 0x24420ee0  addiu       $v0, $v0, 0xEE0
    ctx->pc = 0x241100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3808));
label_241104:
    // 0x241104: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x241104u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_241108:
    // 0x241108: 0x78420010  lq          $v0, 0x10($v0)
    ctx->pc = 0x241108u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_24110c:
    // 0x24110c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x24110cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_241110:
    // 0x241110: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x241110u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_241114:
    // 0x241114: 0x82820003  lb          $v0, 0x3($s4)
    ctx->pc = 0x241114u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
label_241118:
    // 0x241118: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x241118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
label_24111c:
    // 0x24111c: 0x86820004  lh          $v0, 0x4($s4)
    ctx->pc = 0x24111cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
label_241120:
    // 0x241120: 0xafa2008c  sw          $v0, 0x8C($sp)
    ctx->pc = 0x241120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
label_241124:
    // 0x241124: 0xc090adc  jal         func_242B70
label_241128:
    if (ctx->pc == 0x241128u) {
        ctx->pc = 0x241128u;
            // 0x241128: 0xafb3009c  sw          $s3, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 19));
        ctx->pc = 0x24112Cu;
        goto label_24112c;
    }
    ctx->pc = 0x241124u;
    SET_GPR_U32(ctx, 31, 0x24112Cu);
    ctx->pc = 0x241128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241124u;
            // 0x241128: 0xafb3009c  sw          $s3, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242B70u;
    if (runtime->hasFunction(0x242B70u)) {
        auto targetFn = runtime->lookupFunction(0x242B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24112Cu; }
        if (ctx->pc != 0x24112Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CommonSetMoveItemClass__FPA4_i_0x242b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24112Cu; }
        if (ctx->pc != 0x24112Cu) { return; }
    }
    ctx->pc = 0x24112Cu;
label_24112c:
    // 0x24112c: 0xc090c40  jal         func_243100
label_241130:
    if (ctx->pc == 0x241130u) {
        ctx->pc = 0x241130u;
            // 0x241130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241134u;
        goto label_241134;
    }
    ctx->pc = 0x24112Cu;
    SET_GPR_U32(ctx, 31, 0x241134u);
    ctx->pc = 0x241130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24112Cu;
            // 0x241130: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x243100u;
    if (runtime->hasFunction(0x243100u)) {
        auto targetFn = runtime->lookupFunction(0x243100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241134u; }
        if (ctx->pc != 0x241134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveCharaNo__13CMenuItemInfoFv_0x243100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241134u; }
        if (ctx->pc != 0x241134u) { return; }
    }
    ctx->pc = 0x241134u;
label_241134:
    // 0x241134: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x241134u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_241138:
    // 0x241138: 0xc08ff3c  jal         func_23FCF0
label_24113c:
    if (ctx->pc == 0x24113Cu) {
        ctx->pc = 0x24113Cu;
            // 0x24113c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241140u;
        goto label_241140;
    }
    ctx->pc = 0x241138u;
    SET_GPR_U32(ctx, 31, 0x241140u);
    ctx->pc = 0x24113Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241138u;
            // 0x24113c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23FCF0u;
    if (runtime->hasFunction(0x23FCF0u)) {
        auto targetFn = runtime->lookupFunction(0x23FCF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241140u; }
        if (ctx->pc != 0x241140u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetEquipListNo__13CMenuItemInfoFi_0x23fcf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241140u; }
        if (ctx->pc != 0x241140u) { return; }
    }
    ctx->pc = 0x241140u;
label_241140:
    // 0x241140: 0x86020110  lh          $v0, 0x110($s0)
    ctx->pc = 0x241140u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_241144:
    // 0x241144: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x241144u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_241148:
    // 0x241148: 0x14430367  bne         $v0, $v1, . + 4 + (0x367 << 2)
label_24114c:
    if (ctx->pc == 0x24114Cu) {
        ctx->pc = 0x241150u;
        goto label_241150;
    }
    ctx->pc = 0x241148u;
    {
        const bool branch_taken_0x241148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x241148) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241150u;
label_241150:
    // 0x241150: 0x8e02017c  lw          $v0, 0x17C($s0)
    ctx->pc = 0x241150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
label_241154:
    // 0x241154: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x241154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241158:
    // 0x241158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x241158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24115c:
    // 0x24115c: 0x84420002  lh          $v0, 0x2($v0)
    ctx->pc = 0x24115cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_241160:
    // 0x241160: 0xa6020116  sh          $v0, 0x116($s0)
    ctx->pc = 0x241160u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 278), (uint16_t)GPR_U32(ctx, 2));
label_241164:
    // 0x241164: 0xa6030110  sh          $v1, 0x110($s0)
    ctx->pc = 0x241164u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 272), (uint16_t)GPR_U32(ctx, 3));
label_241168:
    // 0x241168: 0x86050110  lh          $a1, 0x110($s0)
    ctx->pc = 0x241168u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_24116c:
    // 0x24116c: 0xc093114  jal         func_24C450
label_241170:
    if (ctx->pc == 0x241170u) {
        ctx->pc = 0x241170u;
            // 0x241170: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241174u;
        goto label_241174;
    }
    ctx->pc = 0x24116Cu;
    SET_GPR_U32(ctx, 31, 0x241174u);
    ctx->pc = 0x241170u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24116Cu;
            // 0x241170: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24C450u;
    if (runtime->hasFunction(0x24C450u)) {
        auto targetFn = runtime->lookupFunction(0x24C450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241174u; }
        if (ctx->pc != 0x241174u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ModelReadStart__13CMenuItemInfoFiii_0x24c450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241174u; }
        if (ctx->pc != 0x241174u) { return; }
    }
    ctx->pc = 0x241174u;
label_241174:
    // 0x241174: 0x1000035c  b           . + 4 + (0x35C << 2)
label_241178:
    if (ctx->pc == 0x241178u) {
        ctx->pc = 0x24117Cu;
        goto label_24117c;
    }
    ctx->pc = 0x241174u;
    {
        const bool branch_taken_0x241174 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241174) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x24117Cu;
label_24117c:
    // 0x24117c: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x24117cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_241180:
    // 0x241180: 0xc0657b0  jal         func_195EC0
label_241184:
    if (ctx->pc == 0x241184u) {
        ctx->pc = 0x241184u;
            // 0x241184: 0x84440002  lh          $a0, 0x2($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
        ctx->pc = 0x241188u;
        goto label_241188;
    }
    ctx->pc = 0x241180u;
    SET_GPR_U32(ctx, 31, 0x241188u);
    ctx->pc = 0x241184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241180u;
            // 0x241184: 0x84440002  lh          $a0, 0x2($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195EC0u;
    if (runtime->hasFunction(0x195EC0u)) {
        auto targetFn = runtime->lookupFunction(0x195EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241188u; }
        if (ctx->pc != 0x241188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemDataType__Fi_0x195ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241188u; }
        if (ctx->pc != 0x241188u) { return; }
    }
    ctx->pc = 0x241188u;
label_241188:
    // 0x241188: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_24118c:
    if (ctx->pc == 0x24118Cu) {
        ctx->pc = 0x24118Cu;
            // 0x24118c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x241190u;
        goto label_241190;
    }
    ctx->pc = 0x241188u;
    {
        const bool branch_taken_0x241188 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x24118Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241188u;
            // 0x24118c: 0x24110001  addiu       $s1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241188) {
            ctx->pc = 0x24119Cu;
            goto label_24119c;
        }
    }
    ctx->pc = 0x241190u;
label_241190:
    // 0x241190: 0x28410005  slti        $at, $v0, 0x5
    ctx->pc = 0x241190u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
label_241194:
    // 0x241194: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
label_241198:
    if (ctx->pc == 0x241198u) {
        ctx->pc = 0x24119Cu;
        goto label_24119c;
    }
    ctx->pc = 0x241194u;
    {
        const bool branch_taken_0x241194 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x241194) {
            ctx->pc = 0x2411A8u;
            goto label_2411a8;
        }
    }
    ctx->pc = 0x24119Cu;
label_24119c:
    // 0x24119c: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x24119cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2411a0:
    // 0x2411a0: 0x14430014  bne         $v0, $v1, . + 4 + (0x14 << 2)
label_2411a4:
    if (ctx->pc == 0x2411A4u) {
        ctx->pc = 0x2411A4u;
            // 0x2411a4: 0x28430010  slti        $v1, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->pc = 0x2411A8u;
        goto label_2411a8;
    }
    ctx->pc = 0x2411A0u;
    {
        const bool branch_taken_0x2411a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2411A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2411A0u;
            // 0x2411a4: 0x28430010  slti        $v1, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2411a0) {
            ctx->pc = 0x2411F4u;
            goto label_2411f4;
        }
    }
    ctx->pc = 0x2411A8u;
label_2411a8:
    // 0x2411a8: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x2411a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_2411ac:
    // 0x2411ac: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2411acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2411b0:
    // 0x2411b0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2411b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2411b4:
    // 0x2411b4: 0xae04017c  sw          $a0, 0x17C($s0)
    ctx->pc = 0x2411b4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 4));
label_2411b8:
    // 0x2411b8: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x2411b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_2411bc:
    // 0x2411bc: 0x84840002  lh          $a0, 0x2($a0)
    ctx->pc = 0x2411bcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_2411c0:
    // 0x2411c0: 0xa6040116  sh          $a0, 0x116($s0)
    ctx->pc = 0x2411c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 278), (uint16_t)GPR_U32(ctx, 4));
label_2411c4:
    // 0x2411c4: 0xa6030110  sh          $v1, 0x110($s0)
    ctx->pc = 0x2411c4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 272), (uint16_t)GPR_U32(ctx, 3));
label_2411c8:
    // 0x2411c8: 0xa6020014  sh          $v0, 0x14($s0)
    ctx->pc = 0x2411c8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
label_2411cc:
    // 0x2411cc: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2411ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2411d0:
    // 0x2411d0: 0xac400070  sw          $zero, 0x70($v0)
    ctx->pc = 0x2411d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 112), GPR_U32(ctx, 0));
label_2411d4:
    // 0x2411d4: 0xc0664ac  jal         func_1992B0
label_2411d8:
    if (ctx->pc == 0x2411D8u) {
        ctx->pc = 0x2411D8u;
            // 0x2411d8: 0x8e04017c  lw          $a0, 0x17C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
        ctx->pc = 0x2411DCu;
        goto label_2411dc;
    }
    ctx->pc = 0x2411D4u;
    SET_GPR_U32(ctx, 31, 0x2411DCu);
    ctx->pc = 0x2411D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2411D4u;
            // 0x2411d8: 0x8e04017c  lw          $a0, 0x17C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 380)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1992B0u;
    if (runtime->hasFunction(0x1992B0u)) {
        auto targetFn = runtime->lookupFunction(0x1992B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2411DCu; }
        if (ctx->pc != 0x2411DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsFishingRod__13CGameDataUsedFv_0x1992b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2411DCu; }
        if (ctx->pc != 0x2411DCu) { return; }
    }
    ctx->pc = 0x2411DCu;
label_2411dc:
    // 0x2411dc: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_2411e0:
    if (ctx->pc == 0x2411E0u) {
        ctx->pc = 0x2411E0u;
            // 0x2411e0: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2411E4u;
        goto label_2411e4;
    }
    ctx->pc = 0x2411DCu;
    {
        const bool branch_taken_0x2411dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2411E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2411DCu;
            // 0x2411e0: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2411dc) {
            ctx->pc = 0x2412B4u;
            goto label_2412b4;
        }
    }
    ctx->pc = 0x2411E4u;
label_2411e4:
    // 0x2411e4: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2411e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2411e8:
    // 0x2411e8: 0xa6030110  sh          $v1, 0x110($s0)
    ctx->pc = 0x2411e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 272), (uint16_t)GPR_U32(ctx, 3));
label_2411ec:
    // 0x2411ec: 0x10000031  b           . + 4 + (0x31 << 2)
label_2411f0:
    if (ctx->pc == 0x2411F0u) {
        ctx->pc = 0x2411F0u;
            // 0x2411f0: 0xa6020014  sh          $v0, 0x14($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2411F4u;
        goto label_2411f4;
    }
    ctx->pc = 0x2411ECu;
    {
        const bool branch_taken_0x2411ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2411F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2411ECu;
            // 0x2411f0: 0xa6020014  sh          $v0, 0x14($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2411ec) {
            ctx->pc = 0x2412B4u;
            goto label_2412b4;
        }
    }
    ctx->pc = 0x2411F4u;
label_2411f4:
    // 0x2411f4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_2411f8:
    if (ctx->pc == 0x2411F8u) {
        ctx->pc = 0x2411F8u;
            // 0x2411f8: 0x24030022  addiu       $v1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->pc = 0x2411FCu;
        goto label_2411fc;
    }
    ctx->pc = 0x2411F4u;
    {
        const bool branch_taken_0x2411f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2411F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2411F4u;
            // 0x2411f8: 0x24030022  addiu       $v1, $zero, 0x22 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2411f4) {
            ctx->pc = 0x241208u;
            goto label_241208;
        }
    }
    ctx->pc = 0x2411FCu;
label_2411fc:
    // 0x2411fc: 0x28410013  slti        $at, $v0, 0x13
    ctx->pc = 0x2411fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)19) ? 1 : 0);
label_241200:
    // 0x241200: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_241204:
    if (ctx->pc == 0x241204u) {
        ctx->pc = 0x241208u;
        goto label_241208;
    }
    ctx->pc = 0x241200u;
    {
        const bool branch_taken_0x241200 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x241200) {
            ctx->pc = 0x241210u;
            goto label_241210;
        }
    }
    ctx->pc = 0x241208u;
label_241208:
    // 0x241208: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
label_24120c:
    if (ctx->pc == 0x24120Cu) {
        ctx->pc = 0x241210u;
        goto label_241210;
    }
    ctx->pc = 0x241208u;
    {
        const bool branch_taken_0x241208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x241208) {
            ctx->pc = 0x241238u;
            goto label_241238;
        }
    }
    ctx->pc = 0x241210u;
label_241210:
    // 0x241210: 0x8e0500d4  lw          $a1, 0xD4($s0)
    ctx->pc = 0x241210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_241214:
    // 0x241214: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x241214u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241218:
    // 0x241218: 0x8f849598  lw          $a0, -0x6A68($gp)
    ctx->pc = 0x241218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940056)));
label_24121c:
    // 0x24121c: 0x84a60002  lh          $a2, 0x2($a1)
    ctx->pc = 0x24121cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_241220:
    // 0x241220: 0xc08fdf8  jal         func_23F7E0
label_241224:
    if (ctx->pc == 0x241224u) {
        ctx->pc = 0x241224u;
            // 0x241224: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241228u;
        goto label_241228;
    }
    ctx->pc = 0x241220u;
    SET_GPR_U32(ctx, 31, 0x241228u);
    ctx->pc = 0x241224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241220u;
            // 0x241224: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23F7E0u;
    if (runtime->hasFunction(0x23F7E0u)) {
        auto targetFn = runtime->lookupFunction(0x23F7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241228u; }
        if (ctx->pc != 0x241228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuFormUpdataAttachInfo__FP16CMenuPosDataFormP13CGameDataUsediiPs_0x23f7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241228u; }
        if (ctx->pc != 0x241228u) { return; }
    }
    ctx->pc = 0x241228u;
label_241228:
    // 0x241228: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x241228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24122c:
    // 0x24122c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x24122cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241230:
    // 0x241230: 0x10000020  b           . + 4 + (0x20 << 2)
label_241234:
    if (ctx->pc == 0x241234u) {
        ctx->pc = 0x241234u;
            // 0x241234: 0xa6020198  sh          $v0, 0x198($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 408), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x241238u;
        goto label_241238;
    }
    ctx->pc = 0x241230u;
    {
        const bool branch_taken_0x241230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241230u;
            // 0x241234: 0xa6020198  sh          $v0, 0x198($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 408), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241230) {
            ctx->pc = 0x2412B4u;
            goto label_2412b4;
        }
    }
    ctx->pc = 0x241238u;
label_241238:
    // 0x241238: 0x86020110  lh          $v0, 0x110($s0)
    ctx->pc = 0x241238u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_24123c:
    // 0x24123c: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x24123cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_241240:
    // 0x241240: 0x14470003  bne         $v0, $a3, . + 4 + (0x3 << 2)
label_241244:
    if (ctx->pc == 0x241244u) {
        ctx->pc = 0x241248u;
        goto label_241248;
    }
    ctx->pc = 0x241240u;
    {
        const bool branch_taken_0x241240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x241240) {
            ctx->pc = 0x241250u;
            goto label_241250;
        }
    }
    ctx->pc = 0x241248u;
label_241248:
    // 0x241248: 0x1000001a  b           . + 4 + (0x1A << 2)
label_24124c:
    if (ctx->pc == 0x24124Cu) {
        ctx->pc = 0x24124Cu;
            // 0x24124c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241250u;
        goto label_241250;
    }
    ctx->pc = 0x241248u;
    {
        const bool branch_taken_0x241248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24124Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241248u;
            // 0x24124c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241248) {
            ctx->pc = 0x2412B4u;
            goto label_2412b4;
        }
    }
    ctx->pc = 0x241250u;
label_241250:
    // 0x241250: 0x8f8694f8  lw          $a2, -0x6B08($gp)
    ctx->pc = 0x241250u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_241254:
    // 0x241254: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x241254u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_241258:
    // 0x241258: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x241258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_24125c:
    // 0x24125c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24125cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_241260:
    // 0x241260: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x241260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_241264:
    // 0x241264: 0xacc00070  sw          $zero, 0x70($a2)
    ctx->pc = 0x241264u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 112), GPR_U32(ctx, 0));
label_241268:
    // 0x241268: 0xa6070110  sh          $a3, 0x110($s0)
    ctx->pc = 0x241268u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 272), (uint16_t)GPR_U32(ctx, 7));
label_24126c:
    // 0x24126c: 0xa6030014  sh          $v1, 0x14($s0)
    ctx->pc = 0x24126cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
label_241270:
    // 0x241270: 0xa3829b74  sb          $v0, -0x648C($gp)
    ctx->pc = 0x241270u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941556), (uint8_t)GPR_U32(ctx, 2));
label_241274:
    // 0x241274: 0xa3809b72  sb          $zero, -0x648E($gp)
    ctx->pc = 0x241274u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294941554), (uint8_t)GPR_U32(ctx, 0));
label_241278:
    // 0x241278: 0xc090320  jal         func_240C80
label_24127c:
    if (ctx->pc == 0x24127Cu) {
        ctx->pc = 0x24127Cu;
            // 0x24127c: 0xa3809b75  sb          $zero, -0x648B($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941557), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x241280u;
        goto label_241280;
    }
    ctx->pc = 0x241278u;
    SET_GPR_U32(ctx, 31, 0x241280u);
    ctx->pc = 0x24127Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241278u;
            // 0x24127c: 0xa3809b75  sb          $zero, -0x648B($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294941557), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240C80u;
    if (runtime->hasFunction(0x240C80u)) {
        auto targetFn = runtime->lookupFunction(0x240C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241280u; }
        if (ctx->pc != 0x241280u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckLoadInfo__13CMenuItemInfoFi_0x240c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241280u; }
        if (ctx->pc != 0x241280u) { return; }
    }
    ctx->pc = 0x241280u;
label_241280:
    // 0x241280: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x241280u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_241284:
    // 0x241284: 0x3c0601f1  lui         $a2, 0x1F1
    ctx->pc = 0x241284u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)497 << 16));
label_241288:
    // 0x241288: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x241288u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24128c:
    // 0x24128c: 0x2484db90  addiu       $a0, $a0, -0x2470
    ctx->pc = 0x24128cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957968));
label_241290:
    // 0x241290: 0x24c6cac0  addiu       $a2, $a2, -0x3540
    ctx->pc = 0x241290u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294953664));
label_241294:
    // 0x241294: 0xc0ac028  jal         func_2B00A0
label_241298:
    if (ctx->pc == 0x241298u) {
        ctx->pc = 0x241298u;
            // 0x241298: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x24129Cu;
        goto label_24129c;
    }
    ctx->pc = 0x241294u;
    SET_GPR_U32(ctx, 31, 0x24129Cu);
    ctx->pc = 0x241298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241294u;
            // 0x241298: 0x24070002  addiu       $a3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B00A0u;
    if (runtime->hasFunction(0x2B00A0u)) {
        auto targetFn = runtime->lookupFunction(0x2B00A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24129Cu; }
        if (ctx->pc != 0x24129Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuMemoryAdjust__FP9mgCMemoryP9mgCMemoryP9mgCMemoryi_0x2b00a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24129Cu; }
        if (ctx->pc != 0x24129Cu) { return; }
    }
    ctx->pc = 0x24129Cu;
label_24129c:
    // 0x24129c: 0x3c0101f1  lui         $at, 0x1F1
    ctx->pc = 0x24129cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)497 << 16));
label_2412a0:
    // 0x2412a0: 0x8c24cab4  lw          $a0, -0x354C($at)
    ctx->pc = 0x2412a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953652)));
label_2412a4:
    // 0x2412a4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2412a4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2412a8:
    // 0x2412a8: 0x8f390118  lw          $t9, 0x118($t9)
    ctx->pc = 0x2412a8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 280)));
label_2412ac:
    // 0x2412ac: 0x320f809  jalr        $t9
label_2412b0:
    if (ctx->pc == 0x2412B0u) {
        ctx->pc = 0x2412B0u;
            // 0x2412b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2412B4u;
        goto label_2412b4;
    }
    ctx->pc = 0x2412ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2412B4u);
        ctx->pc = 0x2412B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2412ACu;
            // 0x2412b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2412B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2412B4u; }
            if (ctx->pc != 0x2412B4u) { return; }
        }
        }
    }
    ctx->pc = 0x2412B4u;
label_2412b4:
    // 0x2412b4: 0x1220030c  beqz        $s1, . + 4 + (0x30C << 2)
label_2412b8:
    if (ctx->pc == 0x2412B8u) {
        ctx->pc = 0x2412BCu;
        goto label_2412bc;
    }
    ctx->pc = 0x2412B4u;
    {
        const bool branch_taken_0x2412b4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2412b4) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x2412BCu;
label_2412bc:
    // 0x2412bc: 0x86080014  lh          $t0, 0x14($s0)
    ctx->pc = 0x2412bcu;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_2412c0:
    // 0x2412c0: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x2412c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
label_2412c4:
    // 0x2412c4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2412c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2412c8:
    // 0x2412c8: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2412c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2412cc:
    // 0x2412cc: 0x24630d00  addiu       $v1, $v1, 0xD00
    ctx->pc = 0x2412ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3328));
label_2412d0:
    // 0x2412d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2412d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2412d4:
    // 0x2412d4: 0x828c0  sll         $a1, $t0, 3
    ctx->pc = 0x2412d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_2412d8:
    // 0x2412d8: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x2412d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_2412dc:
    // 0x2412dc: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2412dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2412e0:
    // 0x2412e0: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2412e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2412e4:
    // 0x2412e4: 0xac430134  sw          $v1, 0x134($v0)
    ctx->pc = 0x2412e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 3));
label_2412e8:
    // 0x2412e8: 0x86050110  lh          $a1, 0x110($s0)
    ctx->pc = 0x2412e8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_2412ec:
    // 0x2412ec: 0xc093114  jal         func_24C450
label_2412f0:
    if (ctx->pc == 0x2412F0u) {
        ctx->pc = 0x2412F0u;
            // 0x2412f0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2412F4u;
        goto label_2412f4;
    }
    ctx->pc = 0x2412ECu;
    SET_GPR_U32(ctx, 31, 0x2412F4u);
    ctx->pc = 0x2412F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2412ECu;
            // 0x2412f0: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24C450u;
    if (runtime->hasFunction(0x24C450u)) {
        auto targetFn = runtime->lookupFunction(0x24C450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2412F4u; }
        if (ctx->pc != 0x2412F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ModelReadStart__13CMenuItemInfoFiii_0x24c450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2412F4u; }
        if (ctx->pc != 0x2412F4u) { return; }
    }
    ctx->pc = 0x2412F4u;
label_2412f4:
    // 0x2412f4: 0x100002fc  b           . + 4 + (0x2FC << 2)
label_2412f8:
    if (ctx->pc == 0x2412F8u) {
        ctx->pc = 0x2412FCu;
        goto label_2412fc;
    }
    ctx->pc = 0x2412F4u;
    {
        const bool branch_taken_0x2412f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2412f4) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x2412FCu;
label_2412fc:
    // 0x2412fc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2412fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_241300:
    // 0x241300: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x241300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241304:
    // 0x241304: 0x8423d804  lh          $v1, -0x27FC($at)
    ctx->pc = 0x241304u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294957060)));
label_241308:
    // 0x241308: 0x146202f7  bne         $v1, $v0, . + 4 + (0x2F7 << 2)
label_24130c:
    if (ctx->pc == 0x24130Cu) {
        ctx->pc = 0x241310u;
        goto label_241310;
    }
    ctx->pc = 0x241308u;
    {
        const bool branch_taken_0x241308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x241308) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241310u;
label_241310:
    // 0x241310: 0xc08fc00  jal         func_23F000
label_241314:
    if (ctx->pc == 0x241314u) {
        ctx->pc = 0x241318u;
        goto label_241318;
    }
    ctx->pc = 0x241310u;
    SET_GPR_U32(ctx, 31, 0x241318u);
    ctx->pc = 0x23F000u;
    if (runtime->hasFunction(0x23F000u)) {
        auto targetFn = runtime->lookupFunction(0x23F000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241318u; }
        if (ctx->pc != 0x241318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEnableHaveItemNum__Fv_0x23f000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241318u; }
        if (ctx->pc != 0x241318u) { return; }
    }
    ctx->pc = 0x241318u;
label_241318:
    // 0x241318: 0xc093444  jal         func_24D110
label_24131c:
    if (ctx->pc == 0x24131Cu) {
        ctx->pc = 0x24131Cu;
            // 0x24131c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241320u;
        goto label_241320;
    }
    ctx->pc = 0x241318u;
    SET_GPR_U32(ctx, 31, 0x241320u);
    ctx->pc = 0x24131Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241318u;
            // 0x24131c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24D110u;
    if (runtime->hasFunction(0x24D110u)) {
        auto targetFn = runtime->lookupFunction(0x24D110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241320u; }
        if (ctx->pc != 0x241320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetItemEffect__13CMenuItemInfoFv_0x24d110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241320u; }
        if (ctx->pc != 0x241320u) { return; }
    }
    ctx->pc = 0x241320u;
label_241320:
    // 0x241320: 0x100002f1  b           . + 4 + (0x2F1 << 2)
label_241324:
    if (ctx->pc == 0x241324u) {
        ctx->pc = 0x241328u;
        goto label_241328;
    }
    ctx->pc = 0x241320u;
    {
        const bool branch_taken_0x241320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241320) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241328u;
label_241328:
    // 0x241328: 0x86820004  lh          $v0, 0x4($s4)
    ctx->pc = 0x241328u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
label_24132c:
    // 0x24132c: 0x40082a  slt         $at, $v0, $zero
    ctx->pc = 0x24132cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 0)) ? 1 : 0);
label_241330:
    // 0x241330: 0x142002ed  bnez        $at, . + 4 + (0x2ED << 2)
label_241334:
    if (ctx->pc == 0x241334u) {
        ctx->pc = 0x241338u;
        goto label_241338;
    }
    ctx->pc = 0x241330u;
    {
        const bool branch_taken_0x241330 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x241330) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241338u;
label_241338:
    // 0x241338: 0x86030110  lh          $v1, 0x110($s0)
    ctx->pc = 0x241338u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_24133c:
    // 0x24133c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x24133cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_241340:
    // 0x241340: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_241344:
    if (ctx->pc == 0x241344u) {
        ctx->pc = 0x241344u;
            // 0x241344: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x241348u;
        goto label_241348;
    }
    ctx->pc = 0x241340u;
    {
        const bool branch_taken_0x241340 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x241344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241340u;
            // 0x241344: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241340) {
            ctx->pc = 0x241350u;
            goto label_241350;
        }
    }
    ctx->pc = 0x241348u;
label_241348:
    // 0x241348: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_24134c:
    if (ctx->pc == 0x24134Cu) {
        ctx->pc = 0x241350u;
        goto label_241350;
    }
    ctx->pc = 0x241348u;
    {
        const bool branch_taken_0x241348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x241348) {
            ctx->pc = 0x241360u;
            goto label_241360;
        }
    }
    ctx->pc = 0x241350u;
label_241350:
    // 0x241350: 0x86030114  lh          $v1, 0x114($s0)
    ctx->pc = 0x241350u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 276)));
label_241354:
    // 0x241354: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x241354u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241358:
    // 0x241358: 0x146202e3  bne         $v1, $v0, . + 4 + (0x2E3 << 2)
label_24135c:
    if (ctx->pc == 0x24135Cu) {
        ctx->pc = 0x241360u;
        goto label_241360;
    }
    ctx->pc = 0x241358u;
    {
        const bool branch_taken_0x241358 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x241358) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241360u;
label_241360:
    // 0x241360: 0x86830006  lh          $v1, 0x6($s4)
    ctx->pc = 0x241360u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 6)));
label_241364:
    // 0x241364: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x241364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_241368:
    // 0x241368: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
label_24136c:
    if (ctx->pc == 0x24136Cu) {
        ctx->pc = 0x24136Cu;
            // 0x24136c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x241370u;
        goto label_241370;
    }
    ctx->pc = 0x241368u;
    {
        const bool branch_taken_0x241368 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24136Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241368u;
            // 0x24136c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241368) {
            ctx->pc = 0x2413ACu;
            goto label_2413ac;
        }
    }
    ctx->pc = 0x241370u;
label_241370:
    // 0x241370: 0x8e0500d4  lw          $a1, 0xD4($s0)
    ctx->pc = 0x241370u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_241374:
    // 0x241374: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x241374u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_241378:
    // 0x241378: 0x2484de60  addiu       $a0, $a0, -0x21A0
    ctx->pc = 0x241378u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958688));
label_24137c:
    // 0x24137c: 0xc049c18  jal         func_127060
label_241380:
    if (ctx->pc == 0x241380u) {
        ctx->pc = 0x241380u;
            // 0x241380: 0x2406006c  addiu       $a2, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->pc = 0x241384u;
        goto label_241384;
    }
    ctx->pc = 0x24137Cu;
    SET_GPR_U32(ctx, 31, 0x241384u);
    ctx->pc = 0x241380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24137Cu;
            // 0x241380: 0x2406006c  addiu       $a2, $zero, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127060u;
    if (runtime->hasFunction(0x127060u)) {
        auto targetFn = runtime->lookupFunction(0x127060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241384u; }
        if (ctx->pc != 0x241384u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memcpy_0x127060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241384u; }
        if (ctx->pc != 0x241384u) { return; }
    }
    ctx->pc = 0x241384u;
label_241384:
    // 0x241384: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x241384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_241388:
    // 0x241388: 0xc065f4c  jal         func_197D30
label_24138c:
    if (ctx->pc == 0x24138Cu) {
        ctx->pc = 0x24138Cu;
            // 0x24138c: 0x8685000a  lh          $a1, 0xA($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
        ctx->pc = 0x241390u;
        goto label_241390;
    }
    ctx->pc = 0x241388u;
    SET_GPR_U32(ctx, 31, 0x241390u);
    ctx->pc = 0x24138Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241388u;
            // 0x24138c: 0x8685000a  lh          $a1, 0xA($s4) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 10)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197D30u;
    if (runtime->hasFunction(0x197D30u)) {
        auto targetFn = runtime->lookupFunction(0x197D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241390u; }
        if (ctx->pc != 0x241390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteNum__13CGameDataUsedFi_0x197d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241390u; }
        if (ctx->pc != 0x241390u) { return; }
    }
    ctx->pc = 0x241390u;
label_241390:
    // 0x241390: 0xc065cb8  jal         func_1972E0
label_241394:
    if (ctx->pc == 0x241394u) {
        ctx->pc = 0x241394u;
            // 0x241394: 0x8e0400d4  lw          $a0, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->pc = 0x241398u;
        goto label_241398;
    }
    ctx->pc = 0x241390u;
    SET_GPR_U32(ctx, 31, 0x241398u);
    ctx->pc = 0x241394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241390u;
            // 0x241394: 0x8e0400d4  lw          $a0, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1972E0u;
    if (runtime->hasFunction(0x1972E0u)) {
        auto targetFn = runtime->lookupFunction(0x1972E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241398u; }
        if (ctx->pc != 0x241398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNum__13CGameDataUsedFv_0x1972e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241398u; }
        if (ctx->pc != 0x241398u) { return; }
    }
    ctx->pc = 0x241398u;
label_241398:
    // 0x241398: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x241398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_24139c:
    // 0x24139c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x24139cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2413a0:
    // 0x2413a0: 0xc065f4c  jal         func_197D30
label_2413a4:
    if (ctx->pc == 0x2413A4u) {
        ctx->pc = 0x2413A4u;
            // 0x2413a4: 0x2484de60  addiu       $a0, $a0, -0x21A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958688));
        ctx->pc = 0x2413A8u;
        goto label_2413a8;
    }
    ctx->pc = 0x2413A0u;
    SET_GPR_U32(ctx, 31, 0x2413A8u);
    ctx->pc = 0x2413A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2413A0u;
            // 0x2413a4: 0x2484de60  addiu       $a0, $a0, -0x21A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197D30u;
    if (runtime->hasFunction(0x197D30u)) {
        auto targetFn = runtime->lookupFunction(0x197D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2413A8u; }
        if (ctx->pc != 0x2413A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteNum__13CGameDataUsedFi_0x197d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2413A8u; }
        if (ctx->pc != 0x2413A8u) { return; }
    }
    ctx->pc = 0x2413A8u;
label_2413a8:
    // 0x2413a8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2413a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2413ac:
    // 0x2413ac: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x2413acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
label_2413b0:
    // 0x2413b0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x2413b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2413b4:
    // 0x2413b4: 0x2442ded0  addiu       $v0, $v0, -0x2130
    ctx->pc = 0x2413b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958800));
label_2413b8:
    // 0x2413b8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2413b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2413bc:
    // 0x2413bc: 0x78420010  lq          $v0, 0x10($v0)
    ctx->pc = 0x2413bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_2413c0:
    // 0x2413c0: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2413c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_2413c4:
    // 0x2413c4: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x2413c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_2413c8:
    // 0x2413c8: 0x86020114  lh          $v0, 0x114($s0)
    ctx->pc = 0x2413c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 276)));
label_2413cc:
    // 0x2413cc: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x2413ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
label_2413d0:
    // 0x2413d0: 0x86820004  lh          $v0, 0x4($s4)
    ctx->pc = 0x2413d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
label_2413d4:
    // 0x2413d4: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x2413d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
label_2413d8:
    // 0x2413d8: 0xafa500b0  sw          $a1, 0xB0($sp)
    ctx->pc = 0x2413d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 5));
label_2413dc:
    // 0x2413dc: 0xc090adc  jal         func_242B70
label_2413e0:
    if (ctx->pc == 0x2413E0u) {
        ctx->pc = 0x2413E0u;
            // 0x2413e0: 0xafb300bc  sw          $s3, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 19));
        ctx->pc = 0x2413E4u;
        goto label_2413e4;
    }
    ctx->pc = 0x2413DCu;
    SET_GPR_U32(ctx, 31, 0x2413E4u);
    ctx->pc = 0x2413E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2413DCu;
            // 0x2413e0: 0xafb300bc  sw          $s3, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242B70u;
    if (runtime->hasFunction(0x242B70u)) {
        auto targetFn = runtime->lookupFunction(0x242B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2413E4u; }
        if (ctx->pc != 0x2413E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CommonSetMoveItemClass__FPA4_i_0x242b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2413E4u; }
        if (ctx->pc != 0x2413E4u) { return; }
    }
    ctx->pc = 0x2413E4u;
label_2413e4:
    // 0x2413e4: 0x100002c0  b           . + 4 + (0x2C0 << 2)
label_2413e8:
    if (ctx->pc == 0x2413E8u) {
        ctx->pc = 0x2413ECu;
        goto label_2413ec;
    }
    ctx->pc = 0x2413E4u;
    {
        const bool branch_taken_0x2413e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2413e4) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x2413ECu;
label_2413ec:
    // 0x2413ec: 0x86820004  lh          $v0, 0x4($s4)
    ctx->pc = 0x2413ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
label_2413f0:
    // 0x2413f0: 0x44002bd  bltz        $v0, . + 4 + (0x2BD << 2)
label_2413f4:
    if (ctx->pc == 0x2413F4u) {
        ctx->pc = 0x2413F4u;
            // 0x2413f4: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->pc = 0x2413F8u;
        goto label_2413f8;
    }
    ctx->pc = 0x2413F0u;
    {
        const bool branch_taken_0x2413f0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2413F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2413F0u;
            // 0x2413f4: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2413f0) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x2413F8u;
label_2413f8:
    // 0x2413f8: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x2413f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2413fc:
    // 0x2413fc: 0x24420f00  addiu       $v0, $v0, 0xF00
    ctx->pc = 0x2413fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3840));
label_241400:
    // 0x241400: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x241400u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_241404:
    // 0x241404: 0x78420010  lq          $v0, 0x10($v0)
    ctx->pc = 0x241404u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_241408:
    // 0x241408: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x241408u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_24140c:
    // 0x24140c: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x24140cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_241410:
    // 0x241410: 0x86820004  lh          $v0, 0x4($s4)
    ctx->pc = 0x241410u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
label_241414:
    // 0x241414: 0xafa200cc  sw          $v0, 0xCC($sp)
    ctx->pc = 0x241414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 2));
label_241418:
    // 0x241418: 0x86020114  lh          $v0, 0x114($s0)
    ctx->pc = 0x241418u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 276)));
label_24141c:
    // 0x24141c: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x24141cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
label_241420:
    // 0x241420: 0xc090adc  jal         func_242B70
label_241424:
    if (ctx->pc == 0x241424u) {
        ctx->pc = 0x241424u;
            // 0x241424: 0xafb300dc  sw          $s3, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 19));
        ctx->pc = 0x241428u;
        goto label_241428;
    }
    ctx->pc = 0x241420u;
    SET_GPR_U32(ctx, 31, 0x241428u);
    ctx->pc = 0x241424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241420u;
            // 0x241424: 0xafb300dc  sw          $s3, 0xDC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242B70u;
    if (runtime->hasFunction(0x242B70u)) {
        auto targetFn = runtime->lookupFunction(0x242B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241428u; }
        if (ctx->pc != 0x241428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CommonSetMoveItemClass__FPA4_i_0x242b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241428u; }
        if (ctx->pc != 0x241428u) { return; }
    }
    ctx->pc = 0x241428u;
label_241428:
    // 0x241428: 0x100002af  b           . + 4 + (0x2AF << 2)
label_24142c:
    if (ctx->pc == 0x24142Cu) {
        ctx->pc = 0x241430u;
        goto label_241430;
    }
    ctx->pc = 0x241428u;
    {
        const bool branch_taken_0x241428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241428) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241430u;
label_241430:
    // 0x241430: 0x86820004  lh          $v0, 0x4($s4)
    ctx->pc = 0x241430u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
label_241434:
    // 0x241434: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
label_241438:
    if (ctx->pc == 0x241438u) {
        ctx->pc = 0x241438u;
            // 0x241438: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->pc = 0x24143Cu;
        goto label_24143c;
    }
    ctx->pc = 0x241434u;
    {
        const bool branch_taken_0x241434 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x241438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241434u;
            // 0x241438: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241434) {
            ctx->pc = 0x24146Cu;
            goto label_24146c;
        }
    }
    ctx->pc = 0x24143Cu;
label_24143c:
    // 0x24143c: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x24143cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
label_241440:
    // 0x241440: 0x24420f20  addiu       $v0, $v0, 0xF20
    ctx->pc = 0x241440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3872));
label_241444:
    // 0x241444: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x241444u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_241448:
    // 0x241448: 0x78420010  lq          $v0, 0x10($v0)
    ctx->pc = 0x241448u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_24144c:
    // 0x24144c: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x24144cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_241450:
    // 0x241450: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x241450u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_241454:
    // 0x241454: 0x86820004  lh          $v0, 0x4($s4)
    ctx->pc = 0x241454u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
label_241458:
    // 0x241458: 0xafa200ec  sw          $v0, 0xEC($sp)
    ctx->pc = 0x241458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 2));
label_24145c:
    // 0x24145c: 0x86020114  lh          $v0, 0x114($s0)
    ctx->pc = 0x24145cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 276)));
label_241460:
    // 0x241460: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x241460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
label_241464:
    // 0x241464: 0xc090adc  jal         func_242B70
label_241468:
    if (ctx->pc == 0x241468u) {
        ctx->pc = 0x241468u;
            // 0x241468: 0xafb300fc  sw          $s3, 0xFC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 19));
        ctx->pc = 0x24146Cu;
        goto label_24146c;
    }
    ctx->pc = 0x241464u;
    SET_GPR_U32(ctx, 31, 0x24146Cu);
    ctx->pc = 0x241468u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241464u;
            // 0x241468: 0xafb300fc  sw          $s3, 0xFC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242B70u;
    if (runtime->hasFunction(0x242B70u)) {
        auto targetFn = runtime->lookupFunction(0x242B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24146Cu; }
        if (ctx->pc != 0x24146Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CommonSetMoveItemClass__FPA4_i_0x242b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24146Cu; }
        if (ctx->pc != 0x24146Cu) { return; }
    }
    ctx->pc = 0x24146Cu;
label_24146c:
    // 0x24146c: 0x86050114  lh          $a1, 0x114($s0)
    ctx->pc = 0x24146cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 276)));
label_241470:
    // 0x241470: 0x3c0401f1  lui         $a0, 0x1F1
    ctx->pc = 0x241470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)497 << 16));
label_241474:
    // 0x241474: 0xc0aed10  jal         func_2BB440
label_241478:
    if (ctx->pc == 0x241478u) {
        ctx->pc = 0x241478u;
            // 0x241478: 0x2484ca80  addiu       $a0, $a0, -0x3580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953600));
        ctx->pc = 0x24147Cu;
        goto label_24147c;
    }
    ctx->pc = 0x241474u;
    SET_GPR_U32(ctx, 31, 0x24147Cu);
    ctx->pc = 0x241478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241474u;
            // 0x241478: 0x2484ca80  addiu       $a0, $a0, -0x3580 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953600));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB440u;
    if (runtime->hasFunction(0x2BB440u)) {
        auto targetFn = runtime->lookupFunction(0x2BB440u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24147Cu; }
        if (ctx->pc != 0x24147Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemCharaDataLoadEndCheckAfter__FPP17MENU_BGREAD_INFO2i_0x2bb440(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24147Cu; }
        if (ctx->pc != 0x24147Cu) { return; }
    }
    ctx->pc = 0x24147Cu;
label_24147c:
    // 0x24147c: 0x1000029a  b           . + 4 + (0x29A << 2)
label_241480:
    if (ctx->pc == 0x241480u) {
        ctx->pc = 0x241484u;
        goto label_241484;
    }
    ctx->pc = 0x24147Cu;
    {
        const bool branch_taken_0x24147c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24147c) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241484u;
label_241484:
    // 0x241484: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x241484u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_241488:
    // 0x241488: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x241488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24148c:
    // 0x24148c: 0x14620296  bne         $v1, $v0, . + 4 + (0x296 << 2)
label_241490:
    if (ctx->pc == 0x241490u) {
        ctx->pc = 0x241490u;
            // 0x241490: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x241494u;
        goto label_241494;
    }
    ctx->pc = 0x24148Cu;
    {
        const bool branch_taken_0x24148c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x241490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24148Cu;
            // 0x241490: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24148c) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241494u;
label_241494:
    // 0x241494: 0x8e88000c  lw          $t0, 0xC($s4)
    ctx->pc = 0x241494u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_241498:
    // 0x241498: 0x8c26cb40  lw          $a2, -0x34C0($at)
    ctx->pc = 0x241498u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953792)));
label_24149c:
    // 0x24149c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24149cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2414a0:
    // 0x2414a0: 0x8e0700d4  lw          $a3, 0xD4($s0)
    ctx->pc = 0x2414a0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_2414a4:
    // 0x2414a4: 0xc08e8f8  jal         func_23A3E0
label_2414a8:
    if (ctx->pc == 0x2414A8u) {
        ctx->pc = 0x2414A8u;
            // 0x2414a8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2414ACu;
        goto label_2414ac;
    }
    ctx->pc = 0x2414A4u;
    SET_GPR_U32(ctx, 31, 0x2414ACu);
    ctx->pc = 0x2414A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2414A4u;
            // 0x2414a8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A3E0u;
    if (runtime->hasFunction(0x23A3E0u)) {
        auto targetFn = runtime->lookupFunction(0x23A3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2414ACu; }
        if (ctx->pc != 0x2414ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPreCmdSpectolBreak__FP14CBaseMenuClassiP16CMenuPosDataFormP13CGameDataUsedP13CGameDataUsed_0x23a3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2414ACu; }
        if (ctx->pc != 0x2414ACu) { return; }
    }
    ctx->pc = 0x2414ACu;
label_2414ac:
    // 0x2414ac: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x2414acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2414b0:
    // 0x2414b0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2414b0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2414b4:
    // 0x2414b4: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x2414b4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_2414b8:
    // 0x2414b8: 0x8c31ca50  lw          $s1, -0x35B0($at)
    ctx->pc = 0x2414b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953552)));
label_2414bc:
    // 0x2414bc: 0xc065c24  jal         func_197090
label_2414c0:
    if (ctx->pc == 0x2414C0u) {
        ctx->pc = 0x2414C0u;
            // 0x2414c0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x2414C4u;
        goto label_2414c4;
    }
    ctx->pc = 0x2414BCu;
    SET_GPR_U32(ctx, 31, 0x2414C4u);
    ctx->pc = 0x2414C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2414BCu;
            // 0x2414c0: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197090u;
    if (runtime->hasFunction(0x197090u)) {
        auto targetFn = runtime->lookupFunction(0x197090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2414C4u; }
        if (ctx->pc != 0x2414C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13CGameDataUsedFv_0x197090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2414C4u; }
        if (ctx->pc != 0x2414C4u) { return; }
    }
    ctx->pc = 0x2414C4u;
label_2414c4:
    // 0x2414c4: 0x87869610  lh          $a2, -0x69F0($gp)
    ctx->pc = 0x2414c4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940176)));
label_2414c8:
    // 0x2414c8: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x2414c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_2414cc:
    // 0x2414cc: 0xc066284  jal         func_198A10
label_2414d0:
    if (ctx->pc == 0x2414D0u) {
        ctx->pc = 0x2414D0u;
            // 0x2414d0: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->pc = 0x2414D4u;
        goto label_2414d4;
    }
    ctx->pc = 0x2414CCu;
    SET_GPR_U32(ctx, 31, 0x2414D4u);
    ctx->pc = 0x2414D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2414CCu;
            // 0x2414d0: 0x27a50100  addiu       $a1, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x198A10u;
    if (runtime->hasFunction(0x198A10u)) {
        auto targetFn = runtime->lookupFunction(0x198A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2414D4u; }
        if (ctx->pc != 0x2414D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ToSpectolTrans__13CGameDataUsedFP13CGameDataUsedi_0x198a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2414D4u; }
        if (ctx->pc != 0x2414D4u) { return; }
    }
    ctx->pc = 0x2414D4u;
label_2414d4:
    // 0x2414d4: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x2414d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_2414d8:
    // 0x2414d8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2414d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2414dc:
    // 0x2414dc: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x2414dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_2414e0:
    // 0x2414e0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_2414e4:
    if (ctx->pc == 0x2414E4u) {
        ctx->pc = 0x2414E4u;
            // 0x2414e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2414E8u;
        goto label_2414e8;
    }
    ctx->pc = 0x2414E0u;
    {
        const bool branch_taken_0x2414e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2414E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2414E0u;
            // 0x2414e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2414e0) {
            ctx->pc = 0x2414F4u;
            goto label_2414f4;
        }
    }
    ctx->pc = 0x2414E8u;
label_2414e8:
    // 0x2414e8: 0x8482003c  lh          $v0, 0x3C($a0)
    ctx->pc = 0x2414e8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 60)));
label_2414ec:
    // 0x2414ec: 0x10000002  b           . + 4 + (0x2 << 2)
label_2414f0:
    if (ctx->pc == 0x2414F0u) {
        ctx->pc = 0x2414F0u;
            // 0x2414f0: 0xa7829614  sh          $v0, -0x69EC($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294940180), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2414F4u;
        goto label_2414f4;
    }
    ctx->pc = 0x2414ECu;
    {
        const bool branch_taken_0x2414ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2414F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2414ECu;
            // 0x2414f0: 0xa7829614  sh          $v0, -0x69EC($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294940180), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2414ec) {
            ctx->pc = 0x2414F8u;
            goto label_2414f8;
        }
    }
    ctx->pc = 0x2414F4u;
label_2414f4:
    // 0x2414f4: 0xa7829614  sh          $v0, -0x69EC($gp)
    ctx->pc = 0x2414f4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294940180), (uint16_t)GPR_U32(ctx, 2));
label_2414f8:
    // 0x2414f8: 0x8782960c  lh          $v0, -0x69F4($gp)
    ctx->pc = 0x2414f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940172)));
label_2414fc:
    // 0x2414fc: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x2414fcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_241500:
    // 0x241500: 0x14200016  bnez        $at, . + 4 + (0x16 << 2)
label_241504:
    if (ctx->pc == 0x241504u) {
        ctx->pc = 0x241504u;
            // 0x241504: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x241508u;
        goto label_241508;
    }
    ctx->pc = 0x241500u;
    {
        const bool branch_taken_0x241500 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        ctx->pc = 0x241504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241500u;
            // 0x241504: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241500) {
            ctx->pc = 0x24155Cu;
            goto label_24155c;
        }
    }
    ctx->pc = 0x241508u;
label_241508:
    // 0x241508: 0x87829610  lh          $v0, -0x69F0($gp)
    ctx->pc = 0x241508u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940176)));
label_24150c:
    // 0x24150c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24150cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_241510:
    // 0x241510: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x241510u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_241514:
    // 0x241514: 0x24a5ad88  addiu       $a1, $a1, -0x5278
    ctx->pc = 0x241514u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946184));
label_241518:
    // 0x241518: 0xc08e7cc  jal         func_239F30
label_24151c:
    if (ctx->pc == 0x24151Cu) {
        ctx->pc = 0x24151Cu;
            // 0x24151c: 0xaf829608  sw          $v0, -0x69F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940168), GPR_U32(ctx, 2));
        ctx->pc = 0x241520u;
        goto label_241520;
    }
    ctx->pc = 0x241518u;
    SET_GPR_U32(ctx, 31, 0x241520u);
    ctx->pc = 0x24151Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241518u;
            // 0x24151c: 0xaf829608  sw          $v0, -0x69F8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294940168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241520u; }
        if (ctx->pc != 0x241520u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241520u; }
        if (ctx->pc != 0x241520u) { return; }
    }
    ctx->pc = 0x241520u;
label_241520:
    // 0x241520: 0x3c0201ed  lui         $v0, 0x1ED
    ctx->pc = 0x241520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)493 << 16));
label_241524:
    // 0x241524: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x241524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_241528:
    // 0x241528: 0x2442def0  addiu       $v0, $v0, -0x2110
    ctx->pc = 0x241528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958832));
label_24152c:
    // 0x24152c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24152cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_241530:
    // 0x241530: 0x78420000  lq          $v0, 0x0($v0)
    ctx->pc = 0x241530u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_241534:
    // 0x241534: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x241534u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_241538:
    // 0x241538: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x241538u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
label_24153c:
    // 0x24153c: 0x8f839608  lw          $v1, -0x69F8($gp)
    ctx->pc = 0x24153cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940168)));
label_241540:
    // 0x241540: 0x87829614  lh          $v0, -0x69EC($gp)
    ctx->pc = 0x241540u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294940180)));
label_241544:
    // 0x241544: 0xafa30170  sw          $v1, 0x170($sp)
    ctx->pc = 0x241544u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 3));
label_241548:
    // 0x241548: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x241548u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_24154c:
    // 0x24154c: 0xc087778  jal         func_21DDE0
label_241550:
    if (ctx->pc == 0x241550u) {
        ctx->pc = 0x241550u;
            // 0x241550: 0xafa20174  sw          $v0, 0x174($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 2));
        ctx->pc = 0x241554u;
        goto label_241554;
    }
    ctx->pc = 0x24154Cu;
    SET_GPR_U32(ctx, 31, 0x241554u);
    ctx->pc = 0x241550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24154Cu;
            // 0x241550: 0xafa20174  sw          $v0, 0x174($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DDE0u;
    if (runtime->hasFunction(0x21DDE0u)) {
        auto targetFn = runtime->lookupFunction(0x21DDE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241554u; }
        if (ctx->pc != 0x241554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgVolumeNo__7CDC2MesFPii_0x21dde0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241554u; }
        if (ctx->pc != 0x241554u) { return; }
    }
    ctx->pc = 0x241554u;
label_241554:
    // 0x241554: 0x10000006  b           . + 4 + (0x6 << 2)
label_241558:
    if (ctx->pc == 0x241558u) {
        ctx->pc = 0x241558u;
            // 0x241558: 0x8e0400d4  lw          $a0, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->pc = 0x24155Cu;
        goto label_24155c;
    }
    ctx->pc = 0x241554u;
    {
        const bool branch_taken_0x241554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241554u;
            // 0x241558: 0x8e0400d4  lw          $a0, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241554) {
            ctx->pc = 0x241570u;
            goto label_241570;
        }
    }
    ctx->pc = 0x24155Cu;
label_24155c:
    // 0x24155c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24155cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_241560:
    // 0x241560: 0xc08e7cc  jal         func_239F30
label_241564:
    if (ctx->pc == 0x241564u) {
        ctx->pc = 0x241564u;
            // 0x241564: 0x24a5ad90  addiu       $a1, $a1, -0x5270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946192));
        ctx->pc = 0x241568u;
        goto label_241568;
    }
    ctx->pc = 0x241560u;
    SET_GPR_U32(ctx, 31, 0x241568u);
    ctx->pc = 0x241564u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241560u;
            // 0x241564: 0x24a5ad90  addiu       $a1, $a1, -0x5270 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241568u; }
        if (ctx->pc != 0x241568u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241568u; }
        if (ctx->pc != 0x241568u) { return; }
    }
    ctx->pc = 0x241568u;
label_241568:
    // 0x241568: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x241568u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
label_24156c:
    // 0x24156c: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x24156cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_241570:
    // 0x241570: 0xc065dc0  jal         func_197700
label_241574:
    if (ctx->pc == 0x241574u) {
        ctx->pc = 0x241574u;
            // 0x241574: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x241578u;
        goto label_241578;
    }
    ctx->pc = 0x241570u;
    SET_GPR_U32(ctx, 31, 0x241578u);
    ctx->pc = 0x241574u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241570u;
            // 0x241574: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197700u;
    if (runtime->hasFunction(0x197700u)) {
        auto targetFn = runtime->lookupFunction(0x197700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241578u; }
        if (ctx->pc != 0x241578u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetName__13CGameDataUsedFi_0x197700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241578u; }
        if (ctx->pc != 0x241578u) { return; }
    }
    ctx->pc = 0x241578u;
label_241578:
    // 0x241578: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_24157c:
    if (ctx->pc == 0x24157Cu) {
        ctx->pc = 0x24157Cu;
            // 0x24157c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x241580u;
        goto label_241580;
    }
    ctx->pc = 0x241578u;
    {
        const bool branch_taken_0x241578 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24157Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241578u;
            // 0x24157c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241578) {
            ctx->pc = 0x241590u;
            goto label_241590;
        }
    }
    ctx->pc = 0x241580u;
label_241580:
    // 0x241580: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x241580u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_241584:
    // 0x241584: 0xc04a3dc  jal         func_128F70
label_241588:
    if (ctx->pc == 0x241588u) {
        ctx->pc = 0x241588u;
            // 0x241588: 0x26241801  addiu       $a0, $s1, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 6145));
        ctx->pc = 0x24158Cu;
        goto label_24158c;
    }
    ctx->pc = 0x241584u;
    SET_GPR_U32(ctx, 31, 0x24158Cu);
    ctx->pc = 0x241588u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241584u;
            // 0x241588: 0x26241801  addiu       $a0, $s1, 0x1801 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 6145));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24158Cu; }
        if (ctx->pc != 0x24158Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24158Cu; }
        if (ctx->pc != 0x24158Cu) { return; }
    }
    ctx->pc = 0x24158Cu;
label_24158c:
    // 0x24158c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x24158cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241590:
    // 0x241590: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x241590u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_241594:
    // 0x241594: 0xa22321e9  sb          $v1, 0x21E9($s1)
    ctx->pc = 0x241594u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8681), (uint8_t)GPR_U32(ctx, 3));
label_241598:
    // 0x241598: 0x83a30110  lb          $v1, 0x110($sp)
    ctx->pc = 0x241598u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 272)));
label_24159c:
    // 0x24159c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_2415a0:
    if (ctx->pc == 0x2415A0u) {
        ctx->pc = 0x2415A0u;
            // 0x2415a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2415A4u;
        goto label_2415a4;
    }
    ctx->pc = 0x24159Cu;
    {
        const bool branch_taken_0x24159c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2415A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24159Cu;
            // 0x2415a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24159c) {
            ctx->pc = 0x2415BCu;
            goto label_2415bc;
        }
    }
    ctx->pc = 0x2415A4u;
label_2415a4:
    // 0x2415a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2415a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2415a8:
    // 0x2415a8: 0xc0877e0  jal         func_21DF80
label_2415ac:
    if (ctx->pc == 0x2415ACu) {
        ctx->pc = 0x2415ACu;
            // 0x2415ac: 0x240500bf  addiu       $a1, $zero, 0xBF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
        ctx->pc = 0x2415B0u;
        goto label_2415b0;
    }
    ctx->pc = 0x2415A8u;
    SET_GPR_U32(ctx, 31, 0x2415B0u);
    ctx->pc = 0x2415ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2415A8u;
            // 0x2415ac: 0x240500bf  addiu       $a1, $zero, 0xBF (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 191));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2415B0u; }
        if (ctx->pc != 0x2415B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2415B0u; }
        if (ctx->pc != 0x2415B0u) { return; }
    }
    ctx->pc = 0x2415B0u;
label_2415b0:
    // 0x2415b0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2415b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2415b4:
    // 0x2415b4: 0x1000024c  b           . + 4 + (0x24C << 2)
label_2415b8:
    if (ctx->pc == 0x2415B8u) {
        ctx->pc = 0x2415B8u;
            // 0x2415b8: 0xae22014c  sw          $v0, 0x14C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 2));
        ctx->pc = 0x2415BCu;
        goto label_2415bc;
    }
    ctx->pc = 0x2415B4u;
    {
        const bool branch_taken_0x2415b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2415B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2415B4u;
            // 0x2415b8: 0xae22014c  sw          $v0, 0x14C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 332), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2415b4) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x2415BCu;
label_2415bc:
    // 0x2415bc: 0xc087898  jal         func_21E260
label_2415c0:
    if (ctx->pc == 0x2415C0u) {
        ctx->pc = 0x2415C4u;
        goto label_2415c4;
    }
    ctx->pc = 0x2415BCu;
    SET_GPR_U32(ctx, 31, 0x2415C4u);
    ctx->pc = 0x21E260u;
    if (runtime->hasFunction(0x21E260u)) {
        auto targetFn = runtime->lookupFunction(0x21E260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2415C4u; }
        if (ctx->pc != 0x2415C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StepMsg__7CDC2MesFv_0x21e260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2415C4u; }
        if (ctx->pc != 0x2415C4u) { return; }
    }
    ctx->pc = 0x2415C4u;
label_2415c4:
    // 0x2415c4: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x2415c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_2415c8:
    // 0x2415c8: 0x27a50100  addiu       $a1, $sp, 0x100
    ctx->pc = 0x2415c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
label_2415cc:
    // 0x2415cc: 0x8f849598  lw          $a0, -0x6A68($gp)
    ctx->pc = 0x2415ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940056)));
label_2415d0:
    // 0x2415d0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2415d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2415d4:
    // 0x2415d4: 0x84460002  lh          $a2, 0x2($v0)
    ctx->pc = 0x2415d4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_2415d8:
    // 0x2415d8: 0xc08fdf8  jal         func_23F7E0
label_2415dc:
    if (ctx->pc == 0x2415DCu) {
        ctx->pc = 0x2415DCu;
            // 0x2415dc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2415E0u;
        goto label_2415e0;
    }
    ctx->pc = 0x2415D8u;
    SET_GPR_U32(ctx, 31, 0x2415E0u);
    ctx->pc = 0x2415DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2415D8u;
            // 0x2415dc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23F7E0u;
    if (runtime->hasFunction(0x23F7E0u)) {
        auto targetFn = runtime->lookupFunction(0x23F7E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2415E0u; }
        if (ctx->pc != 0x2415E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuFormUpdataAttachInfo__FP16CMenuPosDataFormP13CGameDataUsediiPs_0x23f7e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2415E0u; }
        if (ctx->pc != 0x2415E0u) { return; }
    }
    ctx->pc = 0x2415E0u;
label_2415e0:
    // 0x2415e0: 0x8f83959c  lw          $v1, -0x6A64($gp)
    ctx->pc = 0x2415e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940060)));
label_2415e4:
    // 0x2415e4: 0x10600240  beqz        $v1, . + 4 + (0x240 << 2)
label_2415e8:
    if (ctx->pc == 0x2415E8u) {
        ctx->pc = 0x2415E8u;
            // 0x2415e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2415ECu;
        goto label_2415ec;
    }
    ctx->pc = 0x2415E4u;
    {
        const bool branch_taken_0x2415e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2415E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2415E4u;
            // 0x2415e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2415e4) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x2415ECu;
label_2415ec:
    // 0x2415ec: 0x1000023e  b           . + 4 + (0x23E << 2)
label_2415f0:
    if (ctx->pc == 0x2415F0u) {
        ctx->pc = 0x2415F0u;
            // 0x2415f0: 0xa0620001  sb          $v0, 0x1($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2415F4u;
        goto label_2415f4;
    }
    ctx->pc = 0x2415ECu;
    {
        const bool branch_taken_0x2415ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2415F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2415ECu;
            // 0x2415f0: 0xa0620001  sb          $v0, 0x1($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2415ec) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x2415F4u;
label_2415f4:
    // 0x2415f4: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x2415f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_2415f8:
    // 0x2415f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2415f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2415fc:
    // 0x2415fc: 0x1462023a  bne         $v1, $v0, . + 4 + (0x23A << 2)
label_241600:
    if (ctx->pc == 0x241600u) {
        ctx->pc = 0x241604u;
        goto label_241604;
    }
    ctx->pc = 0x2415FCu;
    {
        const bool branch_taken_0x2415fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2415fc) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241604u;
label_241604:
    // 0x241604: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x241604u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_241608:
    // 0x241608: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x241608u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24160c:
    // 0x24160c: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x24160cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_241610:
    // 0x241610: 0xc08e898  jal         func_23A260
label_241614:
    if (ctx->pc == 0x241614u) {
        ctx->pc = 0x241614u;
            // 0x241614: 0xa6000178  sh          $zero, 0x178($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 376), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x241618u;
        goto label_241618;
    }
    ctx->pc = 0x241610u;
    SET_GPR_U32(ctx, 31, 0x241618u);
    ctx->pc = 0x241614u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241610u;
            // 0x241614: 0xa6000178  sh          $zero, 0x178($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 376), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A260u;
    if (runtime->hasFunction(0x23A260u)) {
        auto targetFn = runtime->lookupFunction(0x23A260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241618u; }
        if (ctx->pc != 0x241618u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOutMenu__14CBaseMenuClassFif_0x23a260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241618u; }
        if (ctx->pc != 0x241618u) { return; }
    }
    ctx->pc = 0x241618u;
label_241618:
    // 0x241618: 0x10000233  b           . + 4 + (0x233 << 2)
label_24161c:
    if (ctx->pc == 0x24161Cu) {
        ctx->pc = 0x241620u;
        goto label_241620;
    }
    ctx->pc = 0x241618u;
    {
        const bool branch_taken_0x241618 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241618) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241620u;
label_241620:
    // 0x241620: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x241620u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_241624:
    // 0x241624: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x241624u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241628:
    // 0x241628: 0x1462022f  bne         $v1, $v0, . + 4 + (0x22F << 2)
label_24162c:
    if (ctx->pc == 0x24162Cu) {
        ctx->pc = 0x241630u;
        goto label_241630;
    }
    ctx->pc = 0x241628u;
    {
        const bool branch_taken_0x241628 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x241628) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241630u;
label_241630:
    // 0x241630: 0xa6020178  sh          $v0, 0x178($s0)
    ctx->pc = 0x241630u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 376), (uint16_t)GPR_U32(ctx, 2));
label_241634:
    // 0x241634: 0x8e0201a8  lw          $v0, 0x1A8($s0)
    ctx->pc = 0x241634u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 424)));
label_241638:
    // 0x241638: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_24163c:
    if (ctx->pc == 0x24163Cu) {
        ctx->pc = 0x241640u;
        goto label_241640;
    }
    ctx->pc = 0x241638u;
    {
        const bool branch_taken_0x241638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241638) {
            ctx->pc = 0x241644u;
            goto label_241644;
        }
    }
    ctx->pc = 0x241640u;
label_241640:
    // 0x241640: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x241640u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_241644:
    // 0x241644: 0x8e0201ac  lw          $v0, 0x1AC($s0)
    ctx->pc = 0x241644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 428)));
label_241648:
    // 0x241648: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_24164c:
    if (ctx->pc == 0x24164Cu) {
        ctx->pc = 0x241650u;
        goto label_241650;
    }
    ctx->pc = 0x241648u;
    {
        const bool branch_taken_0x241648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241648) {
            ctx->pc = 0x241654u;
            goto label_241654;
        }
    }
    ctx->pc = 0x241650u;
label_241650:
    // 0x241650: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x241650u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_241654:
    // 0x241654: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x241654u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_241658:
    // 0x241658: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x241658u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24165c:
    // 0x24165c: 0xc08e898  jal         func_23A260
label_241660:
    if (ctx->pc == 0x241660u) {
        ctx->pc = 0x241660u;
            // 0x241660: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x241664u;
        goto label_241664;
    }
    ctx->pc = 0x24165Cu;
    SET_GPR_U32(ctx, 31, 0x241664u);
    ctx->pc = 0x241660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24165Cu;
            // 0x241660: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A260u;
    if (runtime->hasFunction(0x23A260u)) {
        auto targetFn = runtime->lookupFunction(0x23A260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241664u; }
        if (ctx->pc != 0x241664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOutMenu__14CBaseMenuClassFif_0x23a260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241664u; }
        if (ctx->pc != 0x241664u) { return; }
    }
    ctx->pc = 0x241664u;
label_241664:
    // 0x241664: 0x10000220  b           . + 4 + (0x220 << 2)
label_241668:
    if (ctx->pc == 0x241668u) {
        ctx->pc = 0x24166Cu;
        goto label_24166c;
    }
    ctx->pc = 0x241664u;
    {
        const bool branch_taken_0x241664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241664) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x24166Cu;
label_24166c:
    // 0x24166c: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x24166cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_241670:
    // 0x241670: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x241670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241674:
    // 0x241674: 0x1462021c  bne         $v1, $v0, . + 4 + (0x21C << 2)
label_241678:
    if (ctx->pc == 0x241678u) {
        ctx->pc = 0x24167Cu;
        goto label_24167c;
    }
    ctx->pc = 0x241674u;
    {
        const bool branch_taken_0x241674 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x241674) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x24167Cu;
label_24167c:
    // 0x24167c: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x24167cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_241680:
    // 0x241680: 0xaf829360  sw          $v0, -0x6CA0($gp)
    ctx->pc = 0x241680u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939488), GPR_U32(ctx, 2));
label_241684:
    // 0x241684: 0x8e0500d4  lw          $a1, 0xD4($s0)
    ctx->pc = 0x241684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_241688:
    // 0x241688: 0xc08e934  jal         func_23A4D0
label_24168c:
    if (ctx->pc == 0x24168Cu) {
        ctx->pc = 0x24168Cu;
            // 0x24168c: 0x8f8495c0  lw          $a0, -0x6A40($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
        ctx->pc = 0x241690u;
        goto label_241690;
    }
    ctx->pc = 0x241688u;
    SET_GPR_U32(ctx, 31, 0x241690u);
    ctx->pc = 0x24168Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241688u;
            // 0x24168c: 0x8f8495c0  lw          $a0, -0x6A40($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A4D0u;
    if (runtime->hasFunction(0x23A4D0u)) {
        auto targetFn = runtime->lookupFunction(0x23A4D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241690u; }
        if (ctx->pc != 0x241690u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPreCmdGiftBoxSelect__FP14CBaseMenuClassP13CGameDataUsed_0x23a4d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241690u; }
        if (ctx->pc != 0x241690u) { return; }
    }
    ctx->pc = 0x241690u;
label_241690:
    // 0x241690: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x241690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_241694:
    // 0x241694: 0x8c420138  lw          $v0, 0x138($v0)
    ctx->pc = 0x241694u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
label_241698:
    // 0x241698: 0x10400213  beqz        $v0, . + 4 + (0x213 << 2)
label_24169c:
    if (ctx->pc == 0x24169Cu) {
        ctx->pc = 0x2416A0u;
        goto label_2416a0;
    }
    ctx->pc = 0x241698u;
    {
        const bool branch_taken_0x241698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241698) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x2416A0u;
label_2416a0:
    // 0x2416a0: 0x10000211  b           . + 4 + (0x211 << 2)
label_2416a4:
    if (ctx->pc == 0x2416A4u) {
        ctx->pc = 0x2416A4u;
            // 0x2416a4: 0xa0400001  sb          $zero, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2416A8u;
        goto label_2416a8;
    }
    ctx->pc = 0x2416A0u;
    {
        const bool branch_taken_0x2416a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2416A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2416A0u;
            // 0x2416a4: 0xa0400001  sb          $zero, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2416a0) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x2416A8u;
label_2416a8:
    // 0x2416a8: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x2416a8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_2416ac:
    // 0x2416ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2416acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2416b0:
    // 0x2416b0: 0x1462020d  bne         $v1, $v0, . + 4 + (0x20D << 2)
label_2416b4:
    if (ctx->pc == 0x2416B4u) {
        ctx->pc = 0x2416B4u;
            // 0x2416b4: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->pc = 0x2416B8u;
        goto label_2416b8;
    }
    ctx->pc = 0x2416B0u;
    {
        const bool branch_taken_0x2416b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2416B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2416B0u;
            // 0x2416b4: 0x2402001d  addiu       $v0, $zero, 0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2416b0) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x2416B8u;
label_2416b8:
    // 0x2416b8: 0x14a20002  bne         $a1, $v0, . + 4 + (0x2 << 2)
label_2416bc:
    if (ctx->pc == 0x2416BCu) {
        ctx->pc = 0x2416BCu;
            // 0x2416bc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2416C0u;
        goto label_2416c0;
    }
    ctx->pc = 0x2416B8u;
    {
        const bool branch_taken_0x2416b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2416BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2416B8u;
            // 0x2416bc: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2416b8) {
            ctx->pc = 0x2416C4u;
            goto label_2416c4;
        }
    }
    ctx->pc = 0x2416C0u;
label_2416c0:
    // 0x2416c0: 0xa6020178  sh          $v0, 0x178($s0)
    ctx->pc = 0x2416c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 376), (uint16_t)GPR_U32(ctx, 2));
label_2416c4:
    // 0x2416c4: 0x82830002  lb          $v1, 0x2($s4)
    ctx->pc = 0x2416c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_2416c8:
    // 0x2416c8: 0x24020026  addiu       $v0, $zero, 0x26
    ctx->pc = 0x2416c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_2416cc:
    // 0x2416cc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2416d0:
    if (ctx->pc == 0x2416D0u) {
        ctx->pc = 0x2416D0u;
            // 0x2416d0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2416D4u;
        goto label_2416d4;
    }
    ctx->pc = 0x2416CCu;
    {
        const bool branch_taken_0x2416cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2416D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2416CCu;
            // 0x2416d0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2416cc) {
            ctx->pc = 0x2416D8u;
            goto label_2416d8;
        }
    }
    ctx->pc = 0x2416D4u;
label_2416d4:
    // 0x2416d4: 0xa6020178  sh          $v0, 0x178($s0)
    ctx->pc = 0x2416d4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 376), (uint16_t)GPR_U32(ctx, 2));
label_2416d8:
    // 0x2416d8: 0x82830002  lb          $v1, 0x2($s4)
    ctx->pc = 0x2416d8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_2416dc:
    // 0x2416dc: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x2416dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_2416e0:
    // 0x2416e0: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2416e4:
    if (ctx->pc == 0x2416E4u) {
        ctx->pc = 0x2416E4u;
            // 0x2416e4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2416E8u;
        goto label_2416e8;
    }
    ctx->pc = 0x2416E0u;
    {
        const bool branch_taken_0x2416e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2416E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2416E0u;
            // 0x2416e4: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2416e0) {
            ctx->pc = 0x2416ECu;
            goto label_2416ec;
        }
    }
    ctx->pc = 0x2416E8u;
label_2416e8:
    // 0x2416e8: 0xa6020178  sh          $v0, 0x178($s0)
    ctx->pc = 0x2416e8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 376), (uint16_t)GPR_U32(ctx, 2));
label_2416ec:
    // 0x2416ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2416ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2416f0:
    // 0x2416f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2416f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2416f4:
    // 0x2416f4: 0xc08e898  jal         func_23A260
label_2416f8:
    if (ctx->pc == 0x2416F8u) {
        ctx->pc = 0x2416F8u;
            // 0x2416f8: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x2416FCu;
        goto label_2416fc;
    }
    ctx->pc = 0x2416F4u;
    SET_GPR_U32(ctx, 31, 0x2416FCu);
    ctx->pc = 0x2416F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2416F4u;
            // 0x2416f8: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A260u;
    if (runtime->hasFunction(0x23A260u)) {
        auto targetFn = runtime->lookupFunction(0x23A260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2416FCu; }
        if (ctx->pc != 0x2416FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOutMenu__14CBaseMenuClassFif_0x23a260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2416FCu; }
        if (ctx->pc != 0x2416FCu) { return; }
    }
    ctx->pc = 0x2416FCu;
label_2416fc:
    // 0x2416fc: 0x100001fa  b           . + 4 + (0x1FA << 2)
label_241700:
    if (ctx->pc == 0x241700u) {
        ctx->pc = 0x241704u;
        goto label_241704;
    }
    ctx->pc = 0x2416FCu;
    {
        const bool branch_taken_0x2416fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2416fc) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241704u;
label_241704:
    // 0x241704: 0x8e0800d4  lw          $t0, 0xD4($s0)
    ctx->pc = 0x241704u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_241708:
    // 0x241708: 0x3c030035  lui         $v1, 0x35
    ctx->pc = 0x241708u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)53 << 16));
label_24170c:
    // 0x24170c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24170cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241710:
    // 0x241710: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x241710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_241714:
    // 0x241714: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x241714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_241718:
    // 0x241718: 0x24630d00  addiu       $v1, $v1, 0xD00
    ctx->pc = 0x241718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3328));
label_24171c:
    // 0x24171c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24171cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_241720:
    // 0x241720: 0xae08017c  sw          $t0, 0x17C($s0)
    ctx->pc = 0x241720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 8));
label_241724:
    // 0x241724: 0x8e0800d4  lw          $t0, 0xD4($s0)
    ctx->pc = 0x241724u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_241728:
    // 0x241728: 0x85080002  lh          $t0, 0x2($t0)
    ctx->pc = 0x241728u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_24172c:
    // 0x24172c: 0xa6080116  sh          $t0, 0x116($s0)
    ctx->pc = 0x24172cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 278), (uint16_t)GPR_U32(ctx, 8));
label_241730:
    // 0x241730: 0xa6050110  sh          $a1, 0x110($s0)
    ctx->pc = 0x241730u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 272), (uint16_t)GPR_U32(ctx, 5));
label_241734:
    // 0x241734: 0xa6020014  sh          $v0, 0x14($s0)
    ctx->pc = 0x241734u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
label_241738:
    // 0x241738: 0x86080014  lh          $t0, 0x14($s0)
    ctx->pc = 0x241738u;
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_24173c:
    // 0x24173c: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x24173cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_241740:
    // 0x241740: 0x828c0  sll         $a1, $t0, 3
    ctx->pc = 0x241740u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 3));
label_241744:
    // 0x241744: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x241744u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_241748:
    // 0x241748: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x241748u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_24174c:
    // 0x24174c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x24174cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_241750:
    // 0x241750: 0xac430134  sw          $v1, 0x134($v0)
    ctx->pc = 0x241750u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 308), GPR_U32(ctx, 3));
label_241754:
    // 0x241754: 0x86050110  lh          $a1, 0x110($s0)
    ctx->pc = 0x241754u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_241758:
    // 0x241758: 0xc093114  jal         func_24C450
label_24175c:
    if (ctx->pc == 0x24175Cu) {
        ctx->pc = 0x24175Cu;
            // 0x24175c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241760u;
        goto label_241760;
    }
    ctx->pc = 0x241758u;
    SET_GPR_U32(ctx, 31, 0x241760u);
    ctx->pc = 0x24175Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241758u;
            // 0x24175c: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24C450u;
    if (runtime->hasFunction(0x24C450u)) {
        auto targetFn = runtime->lookupFunction(0x24C450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241760u; }
        if (ctx->pc != 0x241760u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ModelReadStart__13CMenuItemInfoFiii_0x24c450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241760u; }
        if (ctx->pc != 0x241760u) { return; }
    }
    ctx->pc = 0x241760u;
label_241760:
    // 0x241760: 0x8f8495c0  lw          $a0, -0x6A40($gp)
    ctx->pc = 0x241760u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_241764:
    // 0x241764: 0xc0901fc  jal         func_2407F0
label_241768:
    if (ctx->pc == 0x241768u) {
        ctx->pc = 0x241768u;
            // 0x241768: 0x8c85017c  lw          $a1, 0x17C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 380)));
        ctx->pc = 0x24176Cu;
        goto label_24176c;
    }
    ctx->pc = 0x241764u;
    SET_GPR_U32(ctx, 31, 0x24176Cu);
    ctx->pc = 0x241768u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241764u;
            // 0x241768: 0x8c85017c  lw          $a1, 0x17C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 380)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2407F0u;
    if (runtime->hasFunction(0x2407F0u)) {
        auto targetFn = runtime->lookupFunction(0x2407F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24176Cu; }
        if (ctx->pc != 0x24176Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NextModeBuildUpInfo__13CMenuItemInfoFP13CGameDataUsed_0x2407f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24176Cu; }
        if (ctx->pc != 0x24176Cu) { return; }
    }
    ctx->pc = 0x24176Cu;
label_24176c:
    // 0x24176c: 0x100001de  b           . + 4 + (0x1DE << 2)
label_241770:
    if (ctx->pc == 0x241770u) {
        ctx->pc = 0x241774u;
        goto label_241774;
    }
    ctx->pc = 0x24176Cu;
    {
        const bool branch_taken_0x24176c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24176c) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241774u;
label_241774:
    // 0x241774: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x241774u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_241778:
    // 0x241778: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x241778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24177c:
    // 0x24177c: 0x8423d804  lh          $v1, -0x27FC($at)
    ctx->pc = 0x24177cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294957060)));
label_241780:
    // 0x241780: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
label_241784:
    if (ctx->pc == 0x241784u) {
        ctx->pc = 0x241788u;
        goto label_241788;
    }
    ctx->pc = 0x241780u;
    {
        const bool branch_taken_0x241780 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x241780) {
            ctx->pc = 0x241800u;
            goto label_241800;
        }
    }
    ctx->pc = 0x241788u;
label_241788:
    // 0x241788: 0xc093444  jal         func_24D110
label_24178c:
    if (ctx->pc == 0x24178Cu) {
        ctx->pc = 0x24178Cu;
            // 0x24178c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241790u;
        goto label_241790;
    }
    ctx->pc = 0x241788u;
    SET_GPR_U32(ctx, 31, 0x241790u);
    ctx->pc = 0x24178Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241788u;
            // 0x24178c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24D110u;
    if (runtime->hasFunction(0x24D110u)) {
        auto targetFn = runtime->lookupFunction(0x24D110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241790u; }
        if (ctx->pc != 0x241790u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetItemEffect__13CMenuItemInfoFv_0x24d110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241790u; }
        if (ctx->pc != 0x241790u) { return; }
    }
    ctx->pc = 0x241790u;
label_241790:
    // 0x241790: 0xc08fc00  jal         func_23F000
label_241794:
    if (ctx->pc == 0x241794u) {
        ctx->pc = 0x241798u;
        goto label_241798;
    }
    ctx->pc = 0x241790u;
    SET_GPR_U32(ctx, 31, 0x241798u);
    ctx->pc = 0x23F000u;
    if (runtime->hasFunction(0x23F000u)) {
        auto targetFn = runtime->lookupFunction(0x23F000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241798u; }
        if (ctx->pc != 0x241798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckEnableHaveItemNum__Fv_0x23f000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241798u; }
        if (ctx->pc != 0x241798u) { return; }
    }
    ctx->pc = 0x241798u;
label_241798:
    // 0x241798: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x241798u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24179c:
    // 0x24179c: 0x24020184  addiu       $v0, $zero, 0x184
    ctx->pc = 0x24179cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 388));
label_2417a0:
    // 0x2417a0: 0x8423d806  lh          $v1, -0x27FA($at)
    ctx->pc = 0x2417a0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294957062)));
label_2417a4:
    // 0x2417a4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2417a8:
    if (ctx->pc == 0x2417A8u) {
        ctx->pc = 0x2417A8u;
            // 0x2417a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2417ACu;
        goto label_2417ac;
    }
    ctx->pc = 0x2417A4u;
    {
        const bool branch_taken_0x2417a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2417A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2417A4u;
            // 0x2417a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2417a4) {
            ctx->pc = 0x2417BCu;
            goto label_2417bc;
        }
    }
    ctx->pc = 0x2417ACu;
label_2417ac:
    // 0x2417ac: 0x24020185  addiu       $v0, $zero, 0x185
    ctx->pc = 0x2417acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 389));
label_2417b0:
    // 0x2417b0: 0x14620013  bne         $v1, $v0, . + 4 + (0x13 << 2)
label_2417b4:
    if (ctx->pc == 0x2417B4u) {
        ctx->pc = 0x2417B8u;
        goto label_2417b8;
    }
    ctx->pc = 0x2417B0u;
    {
        const bool branch_taken_0x2417b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2417b0) {
            ctx->pc = 0x241800u;
            goto label_241800;
        }
    }
    ctx->pc = 0x2417B8u;
label_2417b8:
    // 0x2417b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2417b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2417bc:
    // 0x2417bc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2417bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2417c0:
    // 0x2417c0: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x2417c0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_2417c4:
    // 0x2417c4: 0x8423d806  lh          $v1, -0x27FA($at)
    ctx->pc = 0x2417c4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294957062)));
label_2417c8:
    // 0x2417c8: 0x24020185  addiu       $v0, $zero, 0x185
    ctx->pc = 0x2417c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 389));
label_2417cc:
    // 0x2417cc: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_2417d0:
    if (ctx->pc == 0x2417D0u) {
        ctx->pc = 0x2417D0u;
            // 0x2417d0: 0x241100b8  addiu       $s1, $zero, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
        ctx->pc = 0x2417D4u;
        goto label_2417d4;
    }
    ctx->pc = 0x2417CCu;
    {
        const bool branch_taken_0x2417cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2417D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2417CCu;
            // 0x2417d0: 0x241100b8  addiu       $s1, $zero, 0xB8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2417cc) {
            ctx->pc = 0x2417D8u;
            goto label_2417d8;
        }
    }
    ctx->pc = 0x2417D4u;
label_2417d4:
    // 0x2417d4: 0x241100b9  addiu       $s1, $zero, 0xB9
    ctx->pc = 0x2417d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 185));
label_2417d8:
    // 0x2417d8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2417d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2417dc:
    // 0x2417dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2417dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2417e0:
    // 0x2417e0: 0xc08e7cc  jal         func_239F30
label_2417e4:
    if (ctx->pc == 0x2417E4u) {
        ctx->pc = 0x2417E4u;
            // 0x2417e4: 0x24a5ada0  addiu       $a1, $a1, -0x5260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946208));
        ctx->pc = 0x2417E8u;
        goto label_2417e8;
    }
    ctx->pc = 0x2417E0u;
    SET_GPR_U32(ctx, 31, 0x2417E8u);
    ctx->pc = 0x2417E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2417E0u;
            // 0x2417e4: 0x24a5ada0  addiu       $a1, $a1, -0x5260 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2417E8u; }
        if (ctx->pc != 0x2417E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2417E8u; }
        if (ctx->pc != 0x2417E8u) { return; }
    }
    ctx->pc = 0x2417E8u;
label_2417e8:
    // 0x2417e8: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2417e8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2417ec:
    // 0x2417ec: 0x8c24ca5c  lw          $a0, -0x35A4($at)
    ctx->pc = 0x2417ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
label_2417f0:
    // 0x2417f0: 0xc0877e0  jal         func_21DF80
label_2417f4:
    if (ctx->pc == 0x2417F4u) {
        ctx->pc = 0x2417F4u;
            // 0x2417f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2417F8u;
        goto label_2417f8;
    }
    ctx->pc = 0x2417F0u;
    SET_GPR_U32(ctx, 31, 0x2417F8u);
    ctx->pc = 0x2417F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2417F0u;
            // 0x2417f4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DF80u;
    if (runtime->hasFunction(0x21DF80u)) {
        auto targetFn = runtime->lookupFunction(0x21DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2417F8u; }
        if (ctx->pc != 0x2417F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMsg__7CDC2MesFi_0x21df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2417F8u; }
        if (ctx->pc != 0x2417F8u) { return; }
    }
    ctx->pc = 0x2417F8u;
label_2417f8:
    // 0x2417f8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2417f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2417fc:
    // 0x2417fc: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x2417fcu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_241800:
    // 0x241800: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x241800u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_241804:
    // 0x241804: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x241804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_241808:
    // 0x241808: 0x8423d804  lh          $v1, -0x27FC($at)
    ctx->pc = 0x241808u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294957060)));
label_24180c:
    // 0x24180c: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_241810:
    if (ctx->pc == 0x241810u) {
        ctx->pc = 0x241814u;
        goto label_241814;
    }
    ctx->pc = 0x24180Cu;
    {
        const bool branch_taken_0x24180c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24180c) {
            ctx->pc = 0x24182Cu;
            goto label_24182c;
        }
    }
    ctx->pc = 0x241814u;
label_241814:
    // 0x241814: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x241814u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_241818:
    // 0x241818: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x241818u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24181c:
    // 0x24181c: 0xc08e7cc  jal         func_239F30
label_241820:
    if (ctx->pc == 0x241820u) {
        ctx->pc = 0x241820u;
            // 0x241820: 0x24a5adb0  addiu       $a1, $a1, -0x5250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946224));
        ctx->pc = 0x241824u;
        goto label_241824;
    }
    ctx->pc = 0x24181Cu;
    SET_GPR_U32(ctx, 31, 0x241824u);
    ctx->pc = 0x241820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24181Cu;
            // 0x241820: 0x24a5adb0  addiu       $a1, $a1, -0x5250 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241824u; }
        if (ctx->pc != 0x241824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241824u; }
        if (ctx->pc != 0x241824u) { return; }
    }
    ctx->pc = 0x241824u;
label_241824:
    // 0x241824: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x241824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241828:
    // 0x241828: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x241828u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_24182c:
    // 0x24182c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24182cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_241830:
    // 0x241830: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x241830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_241834:
    // 0x241834: 0x8423d804  lh          $v1, -0x27FC($at)
    ctx->pc = 0x241834u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294957060)));
label_241838:
    // 0x241838: 0x146201ab  bne         $v1, $v0, . + 4 + (0x1AB << 2)
label_24183c:
    if (ctx->pc == 0x24183Cu) {
        ctx->pc = 0x24183Cu;
            // 0x24183c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x241840u;
        goto label_241840;
    }
    ctx->pc = 0x241838u;
    {
        const bool branch_taken_0x241838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24183Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241838u;
            // 0x24183c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241838) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241840u;
label_241840:
    // 0x241840: 0x27a402d0  addiu       $a0, $sp, 0x2D0
    ctx->pc = 0x241840u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_241844:
    // 0x241844: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x241844u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_241848:
    // 0x241848: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x241848u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24184c:
    // 0x24184c: 0xdf8383a0  ld          $v1, -0x7C60($gp)
    ctx->pc = 0x24184cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294935456)));
label_241850:
    // 0x241850: 0x24020185  addiu       $v0, $zero, 0x185
    ctx->pc = 0x241850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 389));
label_241854:
    // 0x241854: 0xfc830000  sd          $v1, 0x0($a0)
    ctx->pc = 0x241854u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 3));
label_241858:
    // 0x241858: 0x8423d806  lh          $v1, -0x27FA($at)
    ctx->pc = 0x241858u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294957062)));
label_24185c:
    // 0x24185c: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_241860:
    if (ctx->pc == 0x241860u) {
        ctx->pc = 0x241860u;
            // 0x241860: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x241864u;
        goto label_241864;
    }
    ctx->pc = 0x24185Cu;
    {
        const bool branch_taken_0x24185c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x241860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24185Cu;
            // 0x241860: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24185c) {
            ctx->pc = 0x24186Cu;
            goto label_24186c;
        }
    }
    ctx->pc = 0x241864u;
label_241864:
    // 0x241864: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x241864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_241868:
    // 0x241868: 0xafa202d0  sw          $v0, 0x2D0($sp)
    ctx->pc = 0x241868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 720), GPR_U32(ctx, 2));
label_24186c:
    // 0x24186c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24186cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_241870:
    // 0x241870: 0xc08e7cc  jal         func_239F30
label_241874:
    if (ctx->pc == 0x241874u) {
        ctx->pc = 0x241874u;
            // 0x241874: 0x24a5adb8  addiu       $a1, $a1, -0x5248 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946232));
        ctx->pc = 0x241878u;
        goto label_241878;
    }
    ctx->pc = 0x241870u;
    SET_GPR_U32(ctx, 31, 0x241878u);
    ctx->pc = 0x241874u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241870u;
            // 0x241874: 0x24a5adb8  addiu       $a1, $a1, -0x5248 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946232));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241878u; }
        if (ctx->pc != 0x241878u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241878u; }
        if (ctx->pc != 0x241878u) { return; }
    }
    ctx->pc = 0x241878u;
label_241878:
    // 0x241878: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x241878u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_24187c:
    // 0x24187c: 0x27a502d0  addiu       $a1, $sp, 0x2D0
    ctx->pc = 0x24187cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 720));
label_241880:
    // 0x241880: 0x8c24ca5c  lw          $a0, -0x35A4($at)
    ctx->pc = 0x241880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
label_241884:
    // 0x241884: 0xc0876ec  jal         func_21DBB0
label_241888:
    if (ctx->pc == 0x241888u) {
        ctx->pc = 0x241888u;
            // 0x241888: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x24188Cu;
        goto label_24188c;
    }
    ctx->pc = 0x241884u;
    SET_GPR_U32(ctx, 31, 0x24188Cu);
    ctx->pc = 0x241888u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241884u;
            // 0x241888: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DBB0u;
    if (runtime->hasFunction(0x21DBB0u)) {
        auto targetFn = runtime->lookupFunction(0x21DBB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24188Cu; }
        if (ctx->pc != 0x24188Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPii_0x21dbb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24188Cu; }
        if (ctx->pc != 0x24188Cu) { return; }
    }
    ctx->pc = 0x24188Cu;
label_24188c:
    // 0x24188c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x24188cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_241890:
    // 0x241890: 0x10000195  b           . + 4 + (0x195 << 2)
label_241894:
    if (ctx->pc == 0x241894u) {
        ctx->pc = 0x241894u;
            // 0x241894: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x241898u;
        goto label_241898;
    }
    ctx->pc = 0x241890u;
    {
        const bool branch_taken_0x241890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241894u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241890u;
            // 0x241894: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241890) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241898u;
label_241898:
    // 0x241898: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x241898u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_24189c:
    // 0x24189c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24189cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2418a0:
    // 0x2418a0: 0x14440191  bne         $v0, $a0, . + 4 + (0x191 << 2)
label_2418a4:
    if (ctx->pc == 0x2418A4u) {
        ctx->pc = 0x2418A4u;
            // 0x2418a4: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->pc = 0x2418A8u;
        goto label_2418a8;
    }
    ctx->pc = 0x2418A0u;
    {
        const bool branch_taken_0x2418a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2418A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2418A0u;
            // 0x2418a4: 0x3c0101f6  lui         $at, 0x1F6 (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2418a0) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x2418A8u;
label_2418a8:
    // 0x2418a8: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2418a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2418ac:
    // 0x2418ac: 0xa420dce0  sh          $zero, -0x2320($at)
    ctx->pc = 0x2418acu;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294958304), (uint16_t)GPR_U32(ctx, 0));
label_2418b0:
    // 0x2418b0: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x2418b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_2418b4:
    // 0x2418b4: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2418b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2418b8:
    // 0x2418b8: 0xac23dce4  sw          $v1, -0x231C($at)
    ctx->pc = 0x2418b8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958308), GPR_U32(ctx, 3));
label_2418bc:
    // 0x2418bc: 0x8e0300d4  lw          $v1, 0xD4($s0)
    ctx->pc = 0x2418bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_2418c0:
    // 0x2418c0: 0x80630004  lb          $v1, 0x4($v1)
    ctx->pc = 0x2418c0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4)));
label_2418c4:
    // 0x2418c4: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_2418c8:
    if (ctx->pc == 0x2418C8u) {
        ctx->pc = 0x2418C8u;
            // 0x2418c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2418CCu;
        goto label_2418cc;
    }
    ctx->pc = 0x2418C4u;
    {
        const bool branch_taken_0x2418c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2418C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2418C4u;
            // 0x2418c8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2418c4) {
            ctx->pc = 0x2418DCu;
            goto label_2418dc;
        }
    }
    ctx->pc = 0x2418CCu;
label_2418cc:
    // 0x2418cc: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2418ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2418d0:
    // 0x2418d0: 0xa424dce0  sh          $a0, -0x2320($at)
    ctx->pc = 0x2418d0u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294958304), (uint16_t)GPR_U32(ctx, 4));
label_2418d4:
    // 0x2418d4: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2418d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2418d8:
    // 0x2418d8: 0xac20dce4  sw          $zero, -0x231C($at)
    ctx->pc = 0x2418d8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958308), GPR_U32(ctx, 0));
label_2418dc:
    // 0x2418dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2418dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2418e0:
    // 0x2418e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2418e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2418e4:
    // 0x2418e4: 0xa6020178  sh          $v0, 0x178($s0)
    ctx->pc = 0x2418e4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 376), (uint16_t)GPR_U32(ctx, 2));
label_2418e8:
    // 0x2418e8: 0xc08e898  jal         func_23A260
label_2418ec:
    if (ctx->pc == 0x2418ECu) {
        ctx->pc = 0x2418ECu;
            // 0x2418ec: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x2418F0u;
        goto label_2418f0;
    }
    ctx->pc = 0x2418E8u;
    SET_GPR_U32(ctx, 31, 0x2418F0u);
    ctx->pc = 0x2418ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2418E8u;
            // 0x2418ec: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A260u;
    if (runtime->hasFunction(0x23A260u)) {
        auto targetFn = runtime->lookupFunction(0x23A260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2418F0u; }
        if (ctx->pc != 0x2418F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOutMenu__14CBaseMenuClassFif_0x23a260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2418F0u; }
        if (ctx->pc != 0x2418F0u) { return; }
    }
    ctx->pc = 0x2418F0u;
label_2418f0:
    // 0x2418f0: 0x1000017d  b           . + 4 + (0x17D << 2)
label_2418f4:
    if (ctx->pc == 0x2418F4u) {
        ctx->pc = 0x2418F8u;
        goto label_2418f8;
    }
    ctx->pc = 0x2418F0u;
    {
        const bool branch_taken_0x2418f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2418f0) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x2418F8u;
label_2418f8:
    // 0x2418f8: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x2418f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_2418fc:
    // 0x2418fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2418fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241900:
    // 0x241900: 0x14620179  bne         $v1, $v0, . + 4 + (0x179 << 2)
label_241904:
    if (ctx->pc == 0x241904u) {
        ctx->pc = 0x241908u;
        goto label_241908;
    }
    ctx->pc = 0x241900u;
    {
        const bool branch_taken_0x241900 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x241900) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241908u;
label_241908:
    // 0x241908: 0x86020110  lh          $v0, 0x110($s0)
    ctx->pc = 0x241908u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_24190c:
    // 0x24190c: 0x14400176  bnez        $v0, . + 4 + (0x176 << 2)
label_241910:
    if (ctx->pc == 0x241910u) {
        ctx->pc = 0x241914u;
        goto label_241914;
    }
    ctx->pc = 0x24190Cu;
    {
        const bool branch_taken_0x24190c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24190c) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241914u;
label_241914:
    // 0x241914: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x241914u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_241918:
    // 0x241918: 0x10800173  beqz        $a0, . + 4 + (0x173 << 2)
label_24191c:
    if (ctx->pc == 0x24191Cu) {
        ctx->pc = 0x241920u;
        goto label_241920;
    }
    ctx->pc = 0x241918u;
    {
        const bool branch_taken_0x241918 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x241918) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241920u;
label_241920:
    // 0x241920: 0xc065c30  jal         func_1970C0
label_241924:
    if (ctx->pc == 0x241924u) {
        ctx->pc = 0x241924u;
            // 0x241924: 0x84910002  lh          $s1, 0x2($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->pc = 0x241928u;
        goto label_241928;
    }
    ctx->pc = 0x241920u;
    SET_GPR_U32(ctx, 31, 0x241928u);
    ctx->pc = 0x241924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241920u;
            // 0x241924: 0x84910002  lh          $s1, 0x2($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1970C0u;
    if (runtime->hasFunction(0x1970C0u)) {
        auto targetFn = runtime->lookupFunction(0x1970C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241928u; }
        if (ctx->pc != 0x241928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__13CGameDataUsedFv_0x1970c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241928u; }
        if (ctx->pc != 0x241928u) { return; }
    }
    ctx->pc = 0x241928u;
label_241928:
    // 0x241928: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x241928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_24192c:
    // 0x24192c: 0xc066724  jal         func_199C90
label_241930:
    if (ctx->pc == 0x241930u) {
        ctx->pc = 0x241930u;
            // 0x241930: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241934u;
        goto label_241934;
    }
    ctx->pc = 0x24192Cu;
    SET_GPR_U32(ctx, 31, 0x241934u);
    ctx->pc = 0x241930u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24192Cu;
            // 0x241930: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x199C90u;
    if (runtime->hasFunction(0x199C90u)) {
        auto targetFn = runtime->lookupFunction(0x199C90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241934u; }
        if (ctx->pc != 0x241934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyDataItem__13CGameDataUsedFi_0x199c90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241934u; }
        if (ctx->pc != 0x241934u) { return; }
    }
    ctx->pc = 0x241934u;
label_241934:
    // 0x241934: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x241934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_241938:
    // 0x241938: 0x27a40180  addiu       $a0, $sp, 0x180
    ctx->pc = 0x241938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
label_24193c:
    // 0x24193c: 0x24420f40  addiu       $v0, $v0, 0xF40
    ctx->pc = 0x24193cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3904));
label_241940:
    // 0x241940: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x241940u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_241944:
    // 0x241944: 0x78420010  lq          $v0, 0x10($v0)
    ctx->pc = 0x241944u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_241948:
    // 0x241948: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x241948u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_24194c:
    // 0x24194c: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x24194cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_241950:
    // 0x241950: 0x86820004  lh          $v0, 0x4($s4)
    ctx->pc = 0x241950u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
label_241954:
    // 0x241954: 0xc090adc  jal         func_242B70
label_241958:
    if (ctx->pc == 0x241958u) {
        ctx->pc = 0x241958u;
            // 0x241958: 0xafa2019c  sw          $v0, 0x19C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
        ctx->pc = 0x24195Cu;
        goto label_24195c;
    }
    ctx->pc = 0x241954u;
    SET_GPR_U32(ctx, 31, 0x24195Cu);
    ctx->pc = 0x241958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241954u;
            // 0x241958: 0xafa2019c  sw          $v0, 0x19C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 412), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242B70u;
    if (runtime->hasFunction(0x242B70u)) {
        auto targetFn = runtime->lookupFunction(0x242B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24195Cu; }
        if (ctx->pc != 0x24195Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CommonSetMoveItemClass__FPA4_i_0x242b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24195Cu; }
        if (ctx->pc != 0x24195Cu) { return; }
    }
    ctx->pc = 0x24195Cu;
label_24195c:
    // 0x24195c: 0x10000162  b           . + 4 + (0x162 << 2)
label_241960:
    if (ctx->pc == 0x241960u) {
        ctx->pc = 0x241964u;
        goto label_241964;
    }
    ctx->pc = 0x24195Cu;
    {
        const bool branch_taken_0x24195c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24195c) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241964u;
label_241964:
    // 0x241964: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x241964u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_241968:
    // 0x241968: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x241968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24196c:
    // 0x24196c: 0x1462015e  bne         $v1, $v0, . + 4 + (0x15E << 2)
label_241970:
    if (ctx->pc == 0x241970u) {
        ctx->pc = 0x241974u;
        goto label_241974;
    }
    ctx->pc = 0x24196Cu;
    {
        const bool branch_taken_0x24196c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x24196c) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241974u;
label_241974:
    // 0x241974: 0x86020110  lh          $v0, 0x110($s0)
    ctx->pc = 0x241974u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_241978:
    // 0x241978: 0x1440015b  bnez        $v0, . + 4 + (0x15B << 2)
label_24197c:
    if (ctx->pc == 0x24197Cu) {
        ctx->pc = 0x241980u;
        goto label_241980;
    }
    ctx->pc = 0x241978u;
    {
        const bool branch_taken_0x241978 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241978) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241980u;
label_241980:
    // 0x241980: 0x86820008  lh          $v0, 0x8($s4)
    ctx->pc = 0x241980u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
label_241984:
    // 0x241984: 0x14400158  bnez        $v0, . + 4 + (0x158 << 2)
label_241988:
    if (ctx->pc == 0x241988u) {
        ctx->pc = 0x24198Cu;
        goto label_24198c;
    }
    ctx->pc = 0x241984u;
    {
        const bool branch_taken_0x241984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241984) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x24198Cu;
label_24198c:
    // 0x24198c: 0xc065af8  jal         func_196BE0
label_241990:
    if (ctx->pc == 0x241990u) {
        ctx->pc = 0x241994u;
        goto label_241994;
    }
    ctx->pc = 0x24198Cu;
    SET_GPR_U32(ctx, 31, 0x241994u);
    ctx->pc = 0x196BE0u;
    if (runtime->hasFunction(0x196BE0u)) {
        auto targetFn = runtime->lookupFunction(0x196BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241994u; }
        if (ctx->pc != 0x241994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetUserDataMan__Fv_0x196be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241994u; }
        if (ctx->pc != 0x241994u) { return; }
    }
    ctx->pc = 0x241994u;
label_241994:
    // 0x241994: 0xc0673b8  jal         func_19CEE0
label_241998:
    if (ctx->pc == 0x241998u) {
        ctx->pc = 0x241998u;
            // 0x241998: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24199Cu;
        goto label_24199c;
    }
    ctx->pc = 0x241994u;
    SET_GPR_U32(ctx, 31, 0x24199Cu);
    ctx->pc = 0x241998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241994u;
            // 0x241998: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19CEE0u;
    if (runtime->hasFunction(0x19CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x19CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24199Cu; }
        if (ctx->pc != 0x24199Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetActiveEsa__16CUserDataManagerFv_0x19cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24199Cu; }
        if (ctx->pc != 0x24199Cu) { return; }
    }
    ctx->pc = 0x24199Cu;
label_24199c:
    // 0x24199c: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x24199cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_2419a0:
    // 0x2419a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2419a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2419a4:
    // 0x2419a4: 0xc065ba0  jal         func_196E80
label_2419a8:
    if (ctx->pc == 0x2419A8u) {
        ctx->pc = 0x2419A8u;
            // 0x2419a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2419ACu;
        goto label_2419ac;
    }
    ctx->pc = 0x2419A4u;
    SET_GPR_U32(ctx, 31, 0x2419ACu);
    ctx->pc = 0x2419A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2419A4u;
            // 0x2419a8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196E80u;
    if (runtime->hasFunction(0x196E80u)) {
        auto targetFn = runtime->lookupFunction(0x196E80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2419ACu; }
        if (ctx->pc != 0x2419ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GameDataSwap__FP13CGameDataUsedP13CGameDataUsedi_0x196e80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2419ACu; }
        if (ctx->pc != 0x2419ACu) { return; }
    }
    ctx->pc = 0x2419ACu;
label_2419ac:
    // 0x2419ac: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x2419acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_2419b0:
    // 0x2419b0: 0x27a401a0  addiu       $a0, $sp, 0x1A0
    ctx->pc = 0x2419b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
label_2419b4:
    // 0x2419b4: 0x24420f60  addiu       $v0, $v0, 0xF60
    ctx->pc = 0x2419b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3936));
label_2419b8:
    // 0x2419b8: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x2419b8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_2419bc:
    // 0x2419bc: 0x78420010  lq          $v0, 0x10($v0)
    ctx->pc = 0x2419bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_2419c0:
    // 0x2419c0: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x2419c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
label_2419c4:
    // 0x2419c4: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x2419c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
label_2419c8:
    // 0x2419c8: 0x86820004  lh          $v0, 0x4($s4)
    ctx->pc = 0x2419c8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
label_2419cc:
    // 0x2419cc: 0xc090adc  jal         func_242B70
label_2419d0:
    if (ctx->pc == 0x2419D0u) {
        ctx->pc = 0x2419D0u;
            // 0x2419d0: 0xafa201ac  sw          $v0, 0x1AC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
        ctx->pc = 0x2419D4u;
        goto label_2419d4;
    }
    ctx->pc = 0x2419CCu;
    SET_GPR_U32(ctx, 31, 0x2419D4u);
    ctx->pc = 0x2419D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2419CCu;
            // 0x2419d0: 0xafa201ac  sw          $v0, 0x1AC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 428), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242B70u;
    if (runtime->hasFunction(0x242B70u)) {
        auto targetFn = runtime->lookupFunction(0x242B70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2419D4u; }
        if (ctx->pc != 0x2419D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CommonSetMoveItemClass__FPA4_i_0x242b70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2419D4u; }
        if (ctx->pc != 0x2419D4u) { return; }
    }
    ctx->pc = 0x2419D4u;
label_2419d4:
    // 0x2419d4: 0x10000144  b           . + 4 + (0x144 << 2)
label_2419d8:
    if (ctx->pc == 0x2419D8u) {
        ctx->pc = 0x2419DCu;
        goto label_2419dc;
    }
    ctx->pc = 0x2419D4u;
    {
        const bool branch_taken_0x2419d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2419d4) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x2419DCu;
label_2419dc:
    // 0x2419dc: 0x86820000  lh          $v0, 0x0($s4)
    ctx->pc = 0x2419dcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_2419e0:
    // 0x2419e0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2419e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2419e4:
    // 0x2419e4: 0x14430140  bne         $v0, $v1, . + 4 + (0x140 << 2)
label_2419e8:
    if (ctx->pc == 0x2419E8u) {
        ctx->pc = 0x2419ECu;
        goto label_2419ec;
    }
    ctx->pc = 0x2419E4u;
    {
        const bool branch_taken_0x2419e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2419e4) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x2419ECu;
label_2419ec:
    // 0x2419ec: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x2419ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_2419f0:
    // 0x2419f0: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2419f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_2419f4:
    // 0x2419f4: 0xae02017c  sw          $v0, 0x17C($s0)
    ctx->pc = 0x2419f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 2));
label_2419f8:
    // 0x2419f8: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x2419f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_2419fc:
    // 0x2419fc: 0x84420002  lh          $v0, 0x2($v0)
    ctx->pc = 0x2419fcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
label_241a00:
    // 0x241a00: 0xa6020116  sh          $v0, 0x116($s0)
    ctx->pc = 0x241a00u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 278), (uint16_t)GPR_U32(ctx, 2));
label_241a04:
    // 0x241a04: 0xa2030160  sb          $v1, 0x160($s0)
    ctx->pc = 0x241a04u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 352), (uint8_t)GPR_U32(ctx, 3));
label_241a08:
    // 0x241a08: 0x8e0500d4  lw          $a1, 0xD4($s0)
    ctx->pc = 0x241a08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_241a0c:
    // 0x241a0c: 0xc06666c  jal         func_1999B0
label_241a10:
    if (ctx->pc == 0x241A10u) {
        ctx->pc = 0x241A10u;
            // 0x241a10: 0x2484dc70  addiu       $a0, $a0, -0x2390 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958192));
        ctx->pc = 0x241A14u;
        goto label_241a14;
    }
    ctx->pc = 0x241A0Cu;
    SET_GPR_U32(ctx, 31, 0x241A14u);
    ctx->pc = 0x241A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241A0Cu;
            // 0x241a10: 0x2484dc70  addiu       $a0, $a0, -0x2390 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1999B0u;
    if (runtime->hasFunction(0x1999B0u)) {
        auto targetFn = runtime->lookupFunction(0x1999B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241A14u; }
        if (ctx->pc != 0x241A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CopyGameData__13CGameDataUsedFP13CGameDataUsed_0x1999b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241A14u; }
        if (ctx->pc != 0x241A14u) { return; }
    }
    ctx->pc = 0x241A14u;
label_241a14:
    // 0x241a14: 0x8f8894f8  lw          $t0, -0x6B08($gp)
    ctx->pc = 0x241a14u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_241a18:
    // 0x241a18: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x241a18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
label_241a1c:
    // 0x241a1c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x241a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241a20:
    // 0x241a20: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x241a20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_241a24:
    // 0x241a24: 0x24a50d00  addiu       $a1, $a1, 0xD00
    ctx->pc = 0x241a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3328));
label_241a28:
    // 0x241a28: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x241a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_241a2c:
    // 0x241a2c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x241a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_241a30:
    // 0x241a30: 0xad000070  sw          $zero, 0x70($t0)
    ctx->pc = 0x241a30u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 112), GPR_U32(ctx, 0));
label_241a34:
    // 0x241a34: 0xa6030014  sh          $v1, 0x14($s0)
    ctx->pc = 0x241a34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 3));
label_241a38:
    // 0x241a38: 0x86090014  lh          $t1, 0x14($s0)
    ctx->pc = 0x241a38u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 20)));
label_241a3c:
    // 0x241a3c: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x241a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_241a40:
    // 0x241a40: 0x940c0  sll         $t0, $t1, 3
    ctx->pc = 0x241a40u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 9), 3));
label_241a44:
    // 0x241a44: 0x1094021  addu        $t0, $t0, $t1
    ctx->pc = 0x241a44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 9)));
label_241a48:
    // 0x241a48: 0x84080  sll         $t0, $t0, 2
    ctx->pc = 0x241a48u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_241a4c:
    // 0x241a4c: 0xa82821  addu        $a1, $a1, $t0
    ctx->pc = 0x241a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 8)));
label_241a50:
    // 0x241a50: 0xac650134  sw          $a1, 0x134($v1)
    ctx->pc = 0x241a50u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 308), GPR_U32(ctx, 5));
label_241a54:
    // 0x241a54: 0xa6020110  sh          $v0, 0x110($s0)
    ctx->pc = 0x241a54u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 272), (uint16_t)GPR_U32(ctx, 2));
label_241a58:
    // 0x241a58: 0x86050110  lh          $a1, 0x110($s0)
    ctx->pc = 0x241a58u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 272)));
label_241a5c:
    // 0x241a5c: 0xc093114  jal         func_24C450
label_241a60:
    if (ctx->pc == 0x241A60u) {
        ctx->pc = 0x241A60u;
            // 0x241a60: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241A64u;
        goto label_241a64;
    }
    ctx->pc = 0x241A5Cu;
    SET_GPR_U32(ctx, 31, 0x241A64u);
    ctx->pc = 0x241A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241A5Cu;
            // 0x241a60: 0xc0382d  daddu       $a3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24C450u;
    if (runtime->hasFunction(0x24C450u)) {
        auto targetFn = runtime->lookupFunction(0x24C450u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241A64u; }
        if (ctx->pc != 0x241A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ModelReadStart__13CMenuItemInfoFiii_0x24c450(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241A64u; }
        if (ctx->pc != 0x241A64u) { return; }
    }
    ctx->pc = 0x241A64u;
label_241a64:
    // 0x241a64: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x241a64u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_241a68:
    // 0x241a68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x241a68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_241a6c:
    // 0x241a6c: 0xc08e7cc  jal         func_239F30
label_241a70:
    if (ctx->pc == 0x241A70u) {
        ctx->pc = 0x241A70u;
            // 0x241a70: 0x24a5adc8  addiu       $a1, $a1, -0x5238 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946248));
        ctx->pc = 0x241A74u;
        goto label_241a74;
    }
    ctx->pc = 0x241A6Cu;
    SET_GPR_U32(ctx, 31, 0x241A74u);
    ctx->pc = 0x241A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241A6Cu;
            // 0x241a70: 0x24a5adc8  addiu       $a1, $a1, -0x5238 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241A74u; }
        if (ctx->pc != 0x241A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241A74u; }
        if (ctx->pc != 0x241A74u) { return; }
    }
    ctx->pc = 0x241A74u;
label_241a74:
    // 0x241a74: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x241a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_241a78:
    // 0x241a78: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x241a78u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_241a7c:
    // 0x241a7c: 0x1000011a  b           . + 4 + (0x11A << 2)
label_241a80:
    if (ctx->pc == 0x241A80u) {
        ctx->pc = 0x241A80u;
            // 0x241a80: 0xa6000002  sh          $zero, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x241A84u;
        goto label_241a84;
    }
    ctx->pc = 0x241A7Cu;
    {
        const bool branch_taken_0x241a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241A7Cu;
            // 0x241a80: 0xa6000002  sh          $zero, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241a7c) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241A84u;
label_241a84:
    // 0x241a84: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x241a84u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_241a88:
    // 0x241a88: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x241a88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_241a8c:
    // 0x241a8c: 0x8c25d810  lw          $a1, -0x27F0($at)
    ctx->pc = 0x241a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294957072)));
label_241a90:
    // 0x241a90: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x241a90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241a94:
    // 0x241a94: 0xa7a202da  sh          $v0, 0x2DA($sp)
    ctx->pc = 0x241a94u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 730), (uint16_t)GPR_U32(ctx, 2));
label_241a98:
    // 0x241a98: 0x27a602d8  addiu       $a2, $sp, 0x2D8
    ctx->pc = 0x241a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 728));
label_241a9c:
    // 0x241a9c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x241a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_241aa0:
    // 0x241aa0: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x241aa0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_241aa4:
    // 0x241aa4: 0xa7a202de  sh          $v0, 0x2DE($sp)
    ctx->pc = 0x241aa4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 734), (uint16_t)GPR_U32(ctx, 2));
label_241aa8:
    // 0x241aa8: 0xa7b302dc  sh          $s3, 0x2DC($sp)
    ctx->pc = 0x241aa8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 732), (uint16_t)GPR_U32(ctx, 19));
label_241aac:
    // 0x241aac: 0xc08f9ac  jal         func_23E6B0
label_241ab0:
    if (ctx->pc == 0x241AB0u) {
        ctx->pc = 0x241AB0u;
            // 0x241ab0: 0xa7a002d8  sh          $zero, 0x2D8($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 728), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x241AB4u;
        goto label_241ab4;
    }
    ctx->pc = 0x241AACu;
    SET_GPR_U32(ctx, 31, 0x241AB4u);
    ctx->pc = 0x241AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241AACu;
            // 0x241ab0: 0xa7a002d8  sh          $zero, 0x2D8($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 728), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E6B0u;
    if (runtime->hasFunction(0x23E6B0u)) {
        auto targetFn = runtime->lookupFunction(0x23E6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241AB4u; }
        if (ctx->pc != 0x241AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSwapItem__12CMenuKeyFuncFP13CGameDataUsedP18MENU_SWAPITEM_INFOib_0x23e6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241AB4u; }
        if (ctx->pc != 0x241AB4u) { return; }
    }
    ctx->pc = 0x241AB4u;
label_241ab4:
    // 0x241ab4: 0x21840  sll         $v1, $v0, 1
    ctx->pc = 0x241ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_241ab8:
    // 0x241ab8: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x241ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_241abc:
    // 0x241abc: 0x24421460  addiu       $v0, $v0, 0x1460
    ctx->pc = 0x241abcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5216));
label_241ac0:
    // 0x241ac0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x241ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_241ac4:
    // 0x241ac4: 0xc094274  jal         func_2509D0
label_241ac8:
    if (ctx->pc == 0x241AC8u) {
        ctx->pc = 0x241AC8u;
            // 0x241ac8: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x241ACCu;
        goto label_241acc;
    }
    ctx->pc = 0x241AC4u;
    SET_GPR_U32(ctx, 31, 0x241ACCu);
    ctx->pc = 0x241AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241AC4u;
            // 0x241ac8: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241ACCu; }
        if (ctx->pc != 0x241ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241ACCu; }
        if (ctx->pc != 0x241ACCu) { return; }
    }
    ctx->pc = 0x241ACCu;
label_241acc:
    // 0x241acc: 0x10000106  b           . + 4 + (0x106 << 2)
label_241ad0:
    if (ctx->pc == 0x241AD0u) {
        ctx->pc = 0x241AD4u;
        goto label_241ad4;
    }
    ctx->pc = 0x241ACCu;
    {
        const bool branch_taken_0x241acc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241acc) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241AD4u;
label_241ad4:
    // 0x241ad4: 0x86820004  lh          $v0, 0x4($s4)
    ctx->pc = 0x241ad4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
label_241ad8:
    // 0x241ad8: 0x14400103  bnez        $v0, . + 4 + (0x103 << 2)
label_241adc:
    if (ctx->pc == 0x241ADCu) {
        ctx->pc = 0x241ADCu;
            // 0x241adc: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x241AE0u;
        goto label_241ae0;
    }
    ctx->pc = 0x241AD8u;
    {
        const bool branch_taken_0x241ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241ADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241AD8u;
            // 0x241adc: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241ad8) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241AE0u;
label_241ae0:
    // 0x241ae0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x241ae0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_241ae4:
    // 0x241ae4: 0xc08e7cc  jal         func_239F30
label_241ae8:
    if (ctx->pc == 0x241AE8u) {
        ctx->pc = 0x241AE8u;
            // 0x241ae8: 0x24a5add8  addiu       $a1, $a1, -0x5228 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946264));
        ctx->pc = 0x241AECu;
        goto label_241aec;
    }
    ctx->pc = 0x241AE4u;
    SET_GPR_U32(ctx, 31, 0x241AECu);
    ctx->pc = 0x241AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241AE4u;
            // 0x241ae8: 0x24a5add8  addiu       $a1, $a1, -0x5228 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241AECu; }
        if (ctx->pc != 0x241AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241AECu; }
        if (ctx->pc != 0x241AECu) { return; }
    }
    ctx->pc = 0x241AECu;
label_241aec:
    // 0x241aec: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x241aecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_241af0:
    // 0x241af0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x241af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241af4:
    // 0x241af4: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x241af4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_241af8:
    // 0x241af8: 0x100000fb  b           . + 4 + (0xFB << 2)
label_241afc:
    if (ctx->pc == 0x241AFCu) {
        ctx->pc = 0x241AFCu;
            // 0x241afc: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x241B00u;
        goto label_241b00;
    }
    ctx->pc = 0x241AF8u;
    {
        const bool branch_taken_0x241af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241AFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241AF8u;
            // 0x241afc: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241af8) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241B00u;
label_241b00:
    // 0x241b00: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x241b00u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_241b04:
    // 0x241b04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x241b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241b08:
    // 0x241b08: 0x146200f7  bne         $v1, $v0, . + 4 + (0xF7 << 2)
label_241b0c:
    if (ctx->pc == 0x241B0Cu) {
        ctx->pc = 0x241B0Cu;
            // 0x241b0c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x241B10u;
        goto label_241b10;
    }
    ctx->pc = 0x241B08u;
    {
        const bool branch_taken_0x241b08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x241B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241B08u;
            // 0x241b0c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241b08) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241B10u;
label_241b10:
    // 0x241b10: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x241b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_241b14:
    // 0x241b14: 0xc08e7cc  jal         func_239F30
label_241b18:
    if (ctx->pc == 0x241B18u) {
        ctx->pc = 0x241B18u;
            // 0x241b18: 0x24a5ade8  addiu       $a1, $a1, -0x5218 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946280));
        ctx->pc = 0x241B1Cu;
        goto label_241b1c;
    }
    ctx->pc = 0x241B14u;
    SET_GPR_U32(ctx, 31, 0x241B1Cu);
    ctx->pc = 0x241B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241B14u;
            // 0x241b18: 0x24a5ade8  addiu       $a1, $a1, -0x5218 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241B1Cu; }
        if (ctx->pc != 0x241B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241B1Cu; }
        if (ctx->pc != 0x241B1Cu) { return; }
    }
    ctx->pc = 0x241B1Cu;
label_241b1c:
    // 0x241b1c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x241b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_241b20:
    // 0x241b20: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x241b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_241b24:
    // 0x241b24: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x241b24u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_241b28:
    // 0x241b28: 0x100000ef  b           . + 4 + (0xEF << 2)
label_241b2c:
    if (ctx->pc == 0x241B2Cu) {
        ctx->pc = 0x241B2Cu;
            // 0x241b2c: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x241B30u;
        goto label_241b30;
    }
    ctx->pc = 0x241B28u;
    {
        const bool branch_taken_0x241b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241B28u;
            // 0x241b2c: 0xa6020002  sh          $v0, 0x2($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241b28) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241B30u;
label_241b30:
    // 0x241b30: 0x86830000  lh          $v1, 0x0($s4)
    ctx->pc = 0x241b30u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
label_241b34:
    // 0x241b34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x241b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241b38:
    // 0x241b38: 0x146200eb  bne         $v1, $v0, . + 4 + (0xEB << 2)
label_241b3c:
    if (ctx->pc == 0x241B3Cu) {
        ctx->pc = 0x241B3Cu;
            // 0x241b3c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x241B40u;
        goto label_241b40;
    }
    ctx->pc = 0x241B38u;
    {
        const bool branch_taken_0x241b38 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x241B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241B38u;
            // 0x241b3c: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241b38) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241B40u;
label_241b40:
    // 0x241b40: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x241b40u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_241b44:
    // 0x241b44: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x241b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_241b48:
    // 0x241b48: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x241b48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_241b4c:
    // 0x241b4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x241b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_241b50:
    // 0x241b50: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x241b50u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_241b54:
    // 0x241b54: 0xc08e7cc  jal         func_239F30
label_241b58:
    if (ctx->pc == 0x241B58u) {
        ctx->pc = 0x241B58u;
            // 0x241b58: 0x24a5adf0  addiu       $a1, $a1, -0x5210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946288));
        ctx->pc = 0x241B5Cu;
        goto label_241b5c;
    }
    ctx->pc = 0x241B54u;
    SET_GPR_U32(ctx, 31, 0x241B5Cu);
    ctx->pc = 0x241B58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241B54u;
            // 0x241b58: 0x24a5adf0  addiu       $a1, $a1, -0x5210 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241B5Cu; }
        if (ctx->pc != 0x241B5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241B5Cu; }
        if (ctx->pc != 0x241B5Cu) { return; }
    }
    ctx->pc = 0x241B5Cu;
label_241b5c:
    // 0x241b5c: 0xc066538  jal         func_1994E0
label_241b60:
    if (ctx->pc == 0x241B60u) {
        ctx->pc = 0x241B60u;
            // 0x241b60: 0x8e0400d4  lw          $a0, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->pc = 0x241B64u;
        goto label_241b64;
    }
    ctx->pc = 0x241B5Cu;
    SET_GPR_U32(ctx, 31, 0x241B64u);
    ctx->pc = 0x241B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241B5Cu;
            // 0x241b60: 0x8e0400d4  lw          $a0, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1994E0u;
    if (runtime->hasFunction(0x1994E0u)) {
        auto targetFn = runtime->lookupFunction(0x1994E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241B64u; }
        if (ctx->pc != 0x241B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckParamLimmit__13CGameDataUsedFv_0x1994e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241B64u; }
        if (ctx->pc != 0x241B64u) { return; }
    }
    ctx->pc = 0x241B64u;
label_241b64:
    // 0x241b64: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x241b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_241b68:
    // 0x241b68: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x241b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_241b6c:
    // 0x241b6c: 0xc065e7c  jal         func_1979F0
label_241b70:
    if (ctx->pc == 0x241B70u) {
        ctx->pc = 0x241B70u;
            // 0x241b70: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x241B74u;
        goto label_241b74;
    }
    ctx->pc = 0x241B6Cu;
    SET_GPR_U32(ctx, 31, 0x241B74u);
    ctx->pc = 0x241B70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241B6Cu;
            // 0x241b70: 0x2406000e  addiu       $a2, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1979F0u;
    if (runtime->hasFunction(0x1979F0u)) {
        auto targetFn = runtime->lookupFunction(0x1979F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241B74u; }
        if (ctx->pc != 0x241B74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        TransToPassword__13CGameDataUsedFPci_0x1979f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241B74u; }
        if (ctx->pc != 0x241B74u) { return; }
    }
    ctx->pc = 0x241B74u;
label_241b74:
    // 0x241b74: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x241b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_241b78:
    // 0x241b78: 0xc065dc0  jal         func_197700
label_241b7c:
    if (ctx->pc == 0x241B7Cu) {
        ctx->pc = 0x241B7Cu;
            // 0x241b7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241B80u;
        goto label_241b80;
    }
    ctx->pc = 0x241B78u;
    SET_GPR_U32(ctx, 31, 0x241B80u);
    ctx->pc = 0x241B7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241B78u;
            // 0x241b7c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197700u;
    if (runtime->hasFunction(0x197700u)) {
        auto targetFn = runtime->lookupFunction(0x197700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241B80u; }
        if (ctx->pc != 0x241B80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetName__13CGameDataUsedFi_0x197700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241B80u; }
        if (ctx->pc != 0x241B80u) { return; }
    }
    ctx->pc = 0x241B80u;
label_241b80:
    // 0x241b80: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x241b80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_241b84:
    // 0x241b84: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x241b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
label_241b88:
    // 0x241b88: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x241b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_241b8c:
    // 0x241b8c: 0x24070014  addiu       $a3, $zero, 0x14
    ctx->pc = 0x241b8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_241b90:
    // 0x241b90: 0x27a80200  addiu       $t0, $sp, 0x200
    ctx->pc = 0x241b90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_241b94:
    // 0x241b94: 0xc0c7490  jal         func_31D240
label_241b98:
    if (ctx->pc == 0x241B98u) {
        ctx->pc = 0x241B98u;
            // 0x241b98: 0x24090046  addiu       $t1, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->pc = 0x241B9Cu;
        goto label_241b9c;
    }
    ctx->pc = 0x241B94u;
    SET_GPR_U32(ctx, 31, 0x241B9Cu);
    ctx->pc = 0x241B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241B94u;
            // 0x241b98: 0x24090046  addiu       $t1, $zero, 0x46 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31D240u;
    if (runtime->hasFunction(0x31D240u)) {
        auto targetFn = runtime->lookupFunction(0x31D240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241B9Cu; }
        if (ctx->pc != 0x241B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        EncodePassword__FPUciPUciPci_0x31d240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241B9Cu; }
        if (ctx->pc != 0x241B9Cu) { return; }
    }
    ctx->pc = 0x241B9Cu;
label_241b9c:
    // 0x241b9c: 0x27a40200  addiu       $a0, $sp, 0x200
    ctx->pc = 0x241b9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 512));
label_241ba0:
    // 0x241ba0: 0xc0c2bbc  jal         func_30AEF0
label_241ba4:
    if (ctx->pc == 0x241BA4u) {
        ctx->pc = 0x241BA4u;
            // 0x241ba4: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->pc = 0x241BA8u;
        goto label_241ba8;
    }
    ctx->pc = 0x241BA0u;
    SET_GPR_U32(ctx, 31, 0x241BA8u);
    ctx->pc = 0x241BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241BA0u;
            // 0x241ba4: 0x27a50220  addiu       $a1, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30AEF0u;
    if (runtime->hasFunction(0x30AEF0u)) {
        auto targetFn = runtime->lookupFunction(0x30AEF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241BA8u; }
        if (ctx->pc != 0x241BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ConvertAscii2ShitJiss__FPcPc_0x30aef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241BA8u; }
        if (ctx->pc != 0x241BA8u) { return; }
    }
    ctx->pc = 0x241BA8u;
label_241ba8:
    // 0x241ba8: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x241ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_241bac:
    // 0x241bac: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x241bacu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_241bb0:
    // 0x241bb0: 0xa3a0024c  sb          $zero, 0x24C($sp)
    ctx->pc = 0x241bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 588), (uint8_t)GPR_U32(ctx, 0));
label_241bb4:
    // 0x241bb4: 0x24420f80  addiu       $v0, $v0, 0xF80
    ctx->pc = 0x241bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3968));
label_241bb8:
    // 0x241bb8: 0xa3a0024d  sb          $zero, 0x24D($sp)
    ctx->pc = 0x241bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 589), (uint8_t)GPR_U32(ctx, 0));
label_241bbc:
    // 0x241bbc: 0x27a702a0  addiu       $a3, $sp, 0x2A0
    ctx->pc = 0x241bbcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_241bc0:
    // 0x241bc0: 0x78460000  lq          $a2, 0x0($v0)
    ctx->pc = 0x241bc0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 2), 0)));
label_241bc4:
    // 0x241bc4: 0x2484df00  addiu       $a0, $a0, -0x2100
    ctx->pc = 0x241bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958848));
label_241bc8:
    // 0x241bc8: 0x27a302e0  addiu       $v1, $sp, 0x2E0
    ctx->pc = 0x241bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_241bcc:
    // 0x241bcc: 0x78420010  lq          $v0, 0x10($v0)
    ctx->pc = 0x241bccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 2), 16)));
label_241bd0:
    // 0x241bd0: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x241bd0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
label_241bd4:
    // 0x241bd4: 0x7ce20010  sq          $v0, 0x10($a3)
    ctx->pc = 0x241bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 16), GPR_VEC(ctx, 2));
label_241bd8:
    // 0x241bd8: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x241bd8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_241bdc:
    // 0x241bdc: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x241bdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_241be0:
    // 0x241be0: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x241be0u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_241be4:
    // 0x241be4: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x241be4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_241be8:
    // 0x241be8: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x241be8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_241bec:
    // 0x241bec: 0xc065dc0  jal         func_197700
label_241bf0:
    if (ctx->pc == 0x241BF0u) {
        ctx->pc = 0x241BF0u;
            // 0x241bf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241BF4u;
        goto label_241bf4;
    }
    ctx->pc = 0x241BECu;
    SET_GPR_U32(ctx, 31, 0x241BF4u);
    ctx->pc = 0x241BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241BECu;
            // 0x241bf0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197700u;
    if (runtime->hasFunction(0x197700u)) {
        auto targetFn = runtime->lookupFunction(0x197700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241BF4u; }
        if (ctx->pc != 0x241BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetName__13CGameDataUsedFi_0x197700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241BF4u; }
        if (ctx->pc != 0x241BF4u) { return; }
    }
    ctx->pc = 0x241BF4u;
label_241bf4:
    // 0x241bf4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x241bf4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_241bf8:
    // 0x241bf8: 0xafa202e0  sw          $v0, 0x2E0($sp)
    ctx->pc = 0x241bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 736), GPR_U32(ctx, 2));
label_241bfc:
    // 0x241bfc: 0x8c24ca5c  lw          $a0, -0x35A4($at)
    ctx->pc = 0x241bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
label_241c00:
    // 0x241c00: 0x27a202a0  addiu       $v0, $sp, 0x2A0
    ctx->pc = 0x241c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
label_241c04:
    // 0x241c04: 0xafa202e4  sw          $v0, 0x2E4($sp)
    ctx->pc = 0x241c04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 740), GPR_U32(ctx, 2));
label_241c08:
    // 0x241c08: 0x27a502e0  addiu       $a1, $sp, 0x2E0
    ctx->pc = 0x241c08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
label_241c0c:
    // 0x241c0c: 0x27a20220  addiu       $v0, $sp, 0x220
    ctx->pc = 0x241c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
label_241c10:
    // 0x241c10: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x241c10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_241c14:
    // 0x241c14: 0xc087720  jal         func_21DC80
label_241c18:
    if (ctx->pc == 0x241C18u) {
        ctx->pc = 0x241C18u;
            // 0x241c18: 0xafa202e8  sw          $v0, 0x2E8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 744), GPR_U32(ctx, 2));
        ctx->pc = 0x241C1Cu;
        goto label_241c1c;
    }
    ctx->pc = 0x241C14u;
    SET_GPR_U32(ctx, 31, 0x241C1Cu);
    ctx->pc = 0x241C18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241C14u;
            // 0x241c18: 0xafa202e8  sw          $v0, 0x2E8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 744), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21DC80u;
    if (runtime->hasFunction(0x21DC80u)) {
        auto targetFn = runtime->lookupFunction(0x21DC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241C1Cu; }
        if (ctx->pc != 0x241C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMsgItemNo__7CDC2MesFPPci_0x21dc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241C1Cu; }
        if (ctx->pc != 0x241C1Cu) { return; }
    }
    ctx->pc = 0x241C1Cu;
label_241c1c:
    // 0x241c1c: 0x100000b2  b           . + 4 + (0xB2 << 2)
label_241c20:
    if (ctx->pc == 0x241C20u) {
        ctx->pc = 0x241C24u;
        goto label_241c24;
    }
    ctx->pc = 0x241C1Cu;
    {
        const bool branch_taken_0x241c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241c1c) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241C24u;
label_241c24:
    // 0x241c24: 0x86830004  lh          $v1, 0x4($s4)
    ctx->pc = 0x241c24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 4)));
label_241c28:
    // 0x241c28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x241c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241c2c:
    // 0x241c2c: 0x146200ae  bne         $v1, $v0, . + 4 + (0xAE << 2)
label_241c30:
    if (ctx->pc == 0x241C30u) {
        ctx->pc = 0x241C34u;
        goto label_241c34;
    }
    ctx->pc = 0x241C2Cu;
    {
        const bool branch_taken_0x241c2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x241c2c) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241C34u;
label_241c34:
    // 0x241c34: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x241c34u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
label_241c38:
    // 0x241c38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x241c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_241c3c:
    // 0x241c3c: 0xc04e780  jal         func_139E00
label_241c40:
    if (ctx->pc == 0x241C40u) {
        ctx->pc = 0x241C40u;
            // 0x241c40: 0xae40001c  sw          $zero, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
        ctx->pc = 0x241C44u;
        goto label_241c44;
    }
    ctx->pc = 0x241C3Cu;
    SET_GPR_U32(ctx, 31, 0x241C44u);
    ctx->pc = 0x241C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241C3Cu;
            // 0x241c40: 0xae40001c  sw          $zero, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241C44u; }
        if (ctx->pc != 0x241C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241C44u; }
        if (ctx->pc != 0x241C44u) { return; }
    }
    ctx->pc = 0x241C44u;
label_241c44:
    // 0x241c44: 0xc052330  jal         func_148CC0
label_241c48:
    if (ctx->pc == 0x241C48u) {
        ctx->pc = 0x241C4Cu;
        goto label_241c4c;
    }
    ctx->pc = 0x241C44u;
    SET_GPR_U32(ctx, 31, 0x241C4Cu);
    ctx->pc = 0x148CC0u;
    if (runtime->hasFunction(0x148CC0u)) {
        auto targetFn = runtime->lookupFunction(0x148CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241C4Cu; }
        if (ctx->pc != 0x241C4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartReadBG__Fv_0x148cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241C4Cu; }
        if (ctx->pc != 0x241C4Cu) { return; }
    }
    ctx->pc = 0x241C4Cu;
label_241c4c:
    // 0x241c4c: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x241c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_241c50:
    // 0x241c50: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x241c50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_241c54:
    // 0x241c54: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x241c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_241c58:
    // 0x241c58: 0x2484ae00  addiu       $a0, $a0, -0x5200
    ctx->pc = 0x241c58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946304));
label_241c5c:
    // 0x241c5c: 0x27a602f8  addiu       $a2, $sp, 0x2F8
    ctx->pc = 0x241c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 760));
label_241c60:
    // 0x241c60: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x241c60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_241c64:
    // 0x241c64: 0xc05224c  jal         func_148930
label_241c68:
    if (ctx->pc == 0x241C68u) {
        ctx->pc = 0x241C68u;
            // 0x241c68: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x241C6Cu;
        goto label_241c6c;
    }
    ctx->pc = 0x241C64u;
    SET_GPR_U32(ctx, 31, 0x241C6Cu);
    ctx->pc = 0x241C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241C64u;
            // 0x241c68: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241C6Cu; }
        if (ctx->pc != 0x241C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241C6Cu; }
        if (ctx->pc != 0x241C6Cu) { return; }
    }
    ctx->pc = 0x241C6Cu;
label_241c6c:
    // 0x241c6c: 0xc08caa8  jal         func_232AA0
label_241c70:
    if (ctx->pc == 0x241C70u) {
        ctx->pc = 0x241C74u;
        goto label_241c74;
    }
    ctx->pc = 0x241C6Cu;
    SET_GPR_U32(ctx, 31, 0x241C74u);
    ctx->pc = 0x232AA0u;
    if (runtime->hasFunction(0x232AA0u)) {
        auto targetFn = runtime->lookupFunction(0x232AA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241C74u; }
        if (ctx->pc != 0x241C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        menu_GetBattleAreaScene__Fv_0x232aa0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241C74u; }
        if (ctx->pc != 0x241C74u) { return; }
    }
    ctx->pc = 0x241C74u;
label_241c74:
    // 0x241c74: 0x8e0400d4  lw          $a0, 0xD4($s0)
    ctx->pc = 0x241c74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
label_241c78:
    // 0x241c78: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x241c78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_241c7c:
    // 0x241c7c: 0xc065f4c  jal         func_197D30
label_241c80:
    if (ctx->pc == 0x241C80u) {
        ctx->pc = 0x241C80u;
            // 0x241c80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x241C84u;
        goto label_241c84;
    }
    ctx->pc = 0x241C7Cu;
    SET_GPR_U32(ctx, 31, 0x241C84u);
    ctx->pc = 0x241C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241C7Cu;
            // 0x241c80: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197D30u;
    if (runtime->hasFunction(0x197D30u)) {
        auto targetFn = runtime->lookupFunction(0x197D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241C84u; }
        if (ctx->pc != 0x241C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteNum__13CGameDataUsedFi_0x197d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241C84u; }
        if (ctx->pc != 0x241C84u) { return; }
    }
    ctx->pc = 0x241C84u;
label_241c84:
    // 0x241c84: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_241c88:
    if (ctx->pc == 0x241C88u) {
        ctx->pc = 0x241C88u;
            // 0x241c88: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x241C8Cu;
        goto label_241c8c;
    }
    ctx->pc = 0x241C84u;
    {
        const bool branch_taken_0x241c84 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x241C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241C84u;
            // 0x241c88: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241c84) {
            ctx->pc = 0x241C9Cu;
            goto label_241c9c;
        }
    }
    ctx->pc = 0x241C8Cu;
label_241c8c:
    // 0x241c8c: 0x9622000c  lhu         $v0, 0xC($s1)
    ctx->pc = 0x241c8cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
label_241c90:
    // 0x241c90: 0x3042fff8  andi        $v0, $v0, 0xFFF8
    ctx->pc = 0x241c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65528);
label_241c94:
    // 0x241c94: 0xa622000c  sh          $v0, 0xC($s1)
    ctx->pc = 0x241c94u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 12), (uint16_t)GPR_U32(ctx, 2));
label_241c98:
    // 0x241c98: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x241c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_241c9c:
    // 0x241c9c: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x241c9cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_241ca0:
    // 0x241ca0: 0x10000091  b           . + 4 + (0x91 << 2)
label_241ca4:
    if (ctx->pc == 0x241CA4u) {
        ctx->pc = 0x241CA4u;
            // 0x241ca4: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x241CA8u;
        goto label_241ca8;
    }
    ctx->pc = 0x241CA0u;
    {
        const bool branch_taken_0x241ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241CA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241CA0u;
            // 0x241ca4: 0xa6020000  sh          $v0, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241ca0) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241CA8u;
label_241ca8:
    // 0x241ca8: 0xae400024  sw          $zero, 0x24($s2)
    ctx->pc = 0x241ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 36), GPR_U32(ctx, 0));
label_241cac:
    // 0x241cac: 0xc052330  jal         func_148CC0
label_241cb0:
    if (ctx->pc == 0x241CB0u) {
        ctx->pc = 0x241CB0u;
            // 0x241cb0: 0xae40001c  sw          $zero, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
        ctx->pc = 0x241CB4u;
        goto label_241cb4;
    }
    ctx->pc = 0x241CACu;
    SET_GPR_U32(ctx, 31, 0x241CB4u);
    ctx->pc = 0x241CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241CACu;
            // 0x241cb0: 0xae40001c  sw          $zero, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148CC0u;
    if (runtime->hasFunction(0x148CC0u)) {
        auto targetFn = runtime->lookupFunction(0x148CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241CB4u; }
        if (ctx->pc != 0x241CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        StartReadBG__Fv_0x148cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241CB4u; }
        if (ctx->pc != 0x241CB4u) { return; }
    }
    ctx->pc = 0x241CB4u;
label_241cb4:
    // 0x241cb4: 0xc04e780  jal         func_139E00
label_241cb8:
    if (ctx->pc == 0x241CB8u) {
        ctx->pc = 0x241CB8u;
            // 0x241cb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241CBCu;
        goto label_241cbc;
    }
    ctx->pc = 0x241CB4u;
    SET_GPR_U32(ctx, 31, 0x241CBCu);
    ctx->pc = 0x241CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241CB4u;
            // 0x241cb8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241CBCu; }
        if (ctx->pc != 0x241CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241CBCu; }
        if (ctx->pc != 0x241CBCu) { return; }
    }
    ctx->pc = 0x241CBCu;
label_241cbc:
    // 0x241cbc: 0x8e430024  lw          $v1, 0x24($s2)
    ctx->pc = 0x241cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
label_241cc0:
    // 0x241cc0: 0x3c040037  lui         $a0, 0x37
    ctx->pc = 0x241cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
label_241cc4:
    // 0x241cc4: 0x8e420020  lw          $v0, 0x20($s2)
    ctx->pc = 0x241cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_241cc8:
    // 0x241cc8: 0x2484ae20  addiu       $a0, $a0, -0x51E0
    ctx->pc = 0x241cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294946336));
label_241ccc:
    // 0x241ccc: 0x27a602fc  addiu       $a2, $sp, 0x2FC
    ctx->pc = 0x241cccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 764));
label_241cd0:
    // 0x241cd0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x241cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_241cd4:
    // 0x241cd4: 0xc05224c  jal         func_148930
label_241cd8:
    if (ctx->pc == 0x241CD8u) {
        ctx->pc = 0x241CD8u;
            // 0x241cd8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x241CDCu;
        goto label_241cdc;
    }
    ctx->pc = 0x241CD4u;
    SET_GPR_U32(ctx, 31, 0x241CDCu);
    ctx->pc = 0x241CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241CD4u;
            // 0x241cd8: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x148930u;
    if (runtime->hasFunction(0x148930u)) {
        auto targetFn = runtime->lookupFunction(0x148930u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241CDCu; }
        if (ctx->pc != 0x241CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        LoadFileBG__FPcP1Pi_0x148930(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241CDCu; }
        if (ctx->pc != 0x241CDCu) { return; }
    }
    ctx->pc = 0x241CDCu;
label_241cdc:
    // 0x241cdc: 0x8fa302fc  lw          $v1, 0x2FC($sp)
    ctx->pc = 0x241cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 764)));
label_241ce0:
    // 0x241ce0: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x241ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_241ce4:
    // 0x241ce4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_241ce8:
    if (ctx->pc == 0x241CE8u) {
        ctx->pc = 0x241CE8u;
            // 0x241ce8: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->pc = 0x241CECu;
        goto label_241cec;
    }
    ctx->pc = 0x241CE4u;
    {
        const bool branch_taken_0x241ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241CE4u;
            // 0x241ce8: 0x32902  srl         $a1, $v1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241ce4) {
            ctx->pc = 0x241CF4u;
            goto label_241cf4;
        }
    }
    ctx->pc = 0x241CECu;
label_241cec:
    // 0x241cec: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x241cecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_241cf0:
    // 0x241cf0: 0x24450001  addiu       $a1, $v0, 0x1
    ctx->pc = 0x241cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_241cf4:
    // 0x241cf4: 0xc04e748  jal         func_139D20
label_241cf8:
    if (ctx->pc == 0x241CF8u) {
        ctx->pc = 0x241CF8u;
            // 0x241cf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241CFCu;
        goto label_241cfc;
    }
    ctx->pc = 0x241CF4u;
    SET_GPR_U32(ctx, 31, 0x241CFCu);
    ctx->pc = 0x241CF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241CF4u;
            // 0x241cf8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241CFCu; }
        if (ctx->pc != 0x241CFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241CFCu; }
        if (ctx->pc != 0x241CFCu) { return; }
    }
    ctx->pc = 0x241CFCu;
label_241cfc:
    // 0x241cfc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x241cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_241d00:
    // 0x241d00: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x241d00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_241d04:
    // 0x241d04: 0xa6030002  sh          $v1, 0x2($s0)
    ctx->pc = 0x241d04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 3));
label_241d08:
    // 0x241d08: 0x27a502f0  addiu       $a1, $sp, 0x2F0
    ctx->pc = 0x241d08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
label_241d0c:
    // 0x241d0c: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x241d0cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_241d10:
    // 0x241d10: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x241d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_241d14:
    // 0x241d14: 0x8f849450  lw          $a0, -0x6BB0($gp)
    ctx->pc = 0x241d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
label_241d18:
    // 0x241d18: 0x8c460070  lw          $a2, 0x70($v0)
    ctx->pc = 0x241d18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 112)));
label_241d1c:
    // 0x241d1c: 0xc08b0e0  jal         func_22C380
label_241d20:
    if (ctx->pc == 0x241D20u) {
        ctx->pc = 0x241D20u;
            // 0x241d20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241D24u;
        goto label_241d24;
    }
    ctx->pc = 0x241D1Cu;
    SET_GPR_U32(ctx, 31, 0x241D24u);
    ctx->pc = 0x241D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241D1Cu;
            // 0x241d20: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22C380u;
    if (runtime->hasFunction(0x22C380u)) {
        auto targetFn = runtime->lookupFunction(0x22C380u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241D24u; }
        if (ctx->pc != 0x241D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPosMenuItemOnItemBrd__18CMenuPosDataManageFPiii_0x22c380(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241D24u; }
        if (ctx->pc != 0x241D24u) { return; }
    }
    ctx->pc = 0x241D24u;
label_241d24:
    // 0x241d24: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x241d24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_241d28:
    // 0x241d28: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x241d28u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_241d2c:
    // 0x241d2c: 0x24841ef0  addiu       $a0, $a0, 0x1EF0
    ctx->pc = 0x241d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 7920));
label_241d30:
    // 0x241d30: 0x24a5ae38  addiu       $a1, $a1, -0x51C8
    ctx->pc = 0x241d30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946360));
label_241d34:
    // 0x241d34: 0xc04b414  jal         func_12D050
label_241d38:
    if (ctx->pc == 0x241D38u) {
        ctx->pc = 0x241D38u;
            // 0x241d38: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x241D3Cu;
        goto label_241d3c;
    }
    ctx->pc = 0x241D34u;
    SET_GPR_U32(ctx, 31, 0x241D3Cu);
    ctx->pc = 0x241D38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241D34u;
            // 0x241d38: 0x2406ffff  addiu       $a2, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12D050u;
    if (runtime->hasFunction(0x12D050u)) {
        auto targetFn = runtime->lookupFunction(0x12D050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241D3Cu; }
        if (ctx->pc != 0x241D3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetTexture__17mgCTextureManagerFPci_0x12d050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241D3Cu; }
        if (ctx->pc != 0x241D3Cu) { return; }
    }
    ctx->pc = 0x241D3Cu;
label_241d3c:
    // 0x241d3c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x241d3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_241d40:
    // 0x241d40: 0xc08bd6c  jal         func_22F5B0
label_241d44:
    if (ctx->pc == 0x241D44u) {
        ctx->pc = 0x241D44u;
            // 0x241d44: 0x27a402f0  addiu       $a0, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->pc = 0x241D48u;
        goto label_241d48;
    }
    ctx->pc = 0x241D40u;
    SET_GPR_U32(ctx, 31, 0x241D48u);
    ctx->pc = 0x241D44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241D40u;
            // 0x241d44: 0x27a402f0  addiu       $a0, $sp, 0x2F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 752));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22F5B0u;
    if (runtime->hasFunction(0x22F5B0u)) {
        auto targetFn = runtime->lookupFunction(0x22F5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241D48u; }
        if (ctx->pc != 0x241D48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitFishBoiledEffect__FPiP10mgCTexture_0x22f5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241D48u; }
        if (ctx->pc != 0x241D48u) { return; }
    }
    ctx->pc = 0x241D48u;
label_241d48:
    // 0x241d48: 0x10000067  b           . + 4 + (0x67 << 2)
label_241d4c:
    if (ctx->pc == 0x241D4Cu) {
        ctx->pc = 0x241D50u;
        goto label_241d50;
    }
    ctx->pc = 0x241D48u;
    {
        const bool branch_taken_0x241d48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241d48) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241D50u;
label_241d50:
    // 0x241d50: 0x10a00065  beqz        $a1, . + 4 + (0x65 << 2)
label_241d54:
    if (ctx->pc == 0x241D54u) {
        ctx->pc = 0x241D54u;
            // 0x241d54: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x241D58u;
        goto label_241d58;
    }
    ctx->pc = 0x241D50u;
    {
        const bool branch_taken_0x241d50 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x241D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241D50u;
            // 0x241d54: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241d50) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241D58u;
label_241d58:
    // 0x241d58: 0x8c26cb4c  lw          $a2, -0x34B4($at)
    ctx->pc = 0x241d58u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953804)));
label_241d5c:
    // 0x241d5c: 0xc08e87c  jal         func_23A1F0
label_241d60:
    if (ctx->pc == 0x241D60u) {
        ctx->pc = 0x241D60u;
            // 0x241d60: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241D64u;
        goto label_241d64;
    }
    ctx->pc = 0x241D5Cu;
    SET_GPR_U32(ctx, 31, 0x241D64u);
    ctx->pc = 0x241D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241D5Cu;
            // 0x241d60: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A1F0u;
    if (runtime->hasFunction(0x23A1F0u)) {
        auto targetFn = runtime->lookupFunction(0x23A1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241D64u; }
        if (ctx->pc != 0x241D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsAskEnd__14CBaseMenuClassFiP16CMenuPosDataForm_0x23a1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241D64u; }
        if (ctx->pc != 0x241D64u) { return; }
    }
    ctx->pc = 0x241D64u;
label_241d64:
    // 0x241d64: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x241d64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_241d68:
    // 0x241d68: 0x8c22cb4c  lw          $v0, -0x34B4($at)
    ctx->pc = 0x241d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953804)));
label_241d6c:
    // 0x241d6c: 0x1000005e  b           . + 4 + (0x5E << 2)
label_241d70:
    if (ctx->pc == 0x241D70u) {
        ctx->pc = 0x241D70u;
            // 0x241d70: 0xa0400001  sb          $zero, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x241D74u;
        goto label_241d74;
    }
    ctx->pc = 0x241D6Cu;
    {
        const bool branch_taken_0x241d6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241D70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241D6Cu;
            // 0x241d70: 0xa0400001  sb          $zero, 0x1($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241d6c) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241D74u;
label_241d74:
    // 0x241d74: 0x10a0005c  beqz        $a1, . + 4 + (0x5C << 2)
label_241d78:
    if (ctx->pc == 0x241D78u) {
        ctx->pc = 0x241D78u;
            // 0x241d78: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x241D7Cu;
        goto label_241d7c;
    }
    ctx->pc = 0x241D74u;
    {
        const bool branch_taken_0x241d74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x241D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241D74u;
            // 0x241d78: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241d74) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241D7Cu;
label_241d7c:
    // 0x241d7c: 0x8c26cb4c  lw          $a2, -0x34B4($at)
    ctx->pc = 0x241d7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953804)));
label_241d80:
    // 0x241d80: 0xc08e87c  jal         func_23A1F0
label_241d84:
    if (ctx->pc == 0x241D84u) {
        ctx->pc = 0x241D84u;
            // 0x241d84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x241D88u;
        goto label_241d88;
    }
    ctx->pc = 0x241D80u;
    SET_GPR_U32(ctx, 31, 0x241D88u);
    ctx->pc = 0x241D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241D80u;
            // 0x241d84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A1F0u;
    if (runtime->hasFunction(0x23A1F0u)) {
        auto targetFn = runtime->lookupFunction(0x23A1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241D88u; }
        if (ctx->pc != 0x241D88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsAskEnd__14CBaseMenuClassFiP16CMenuPosDataForm_0x23a1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241D88u; }
        if (ctx->pc != 0x241D88u) { return; }
    }
    ctx->pc = 0x241D88u;
label_241d88:
    // 0x241d88: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x241d88u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_241d8c:
    // 0x241d8c: 0x8c22cb4c  lw          $v0, -0x34B4($at)
    ctx->pc = 0x241d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953804)));
label_241d90:
    // 0x241d90: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x241d90u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_241d94:
    // 0x241d94: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x241d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_241d98:
    // 0x241d98: 0x8c420138  lw          $v0, 0x138($v0)
    ctx->pc = 0x241d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
label_241d9c:
    // 0x241d9c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_241da0:
    if (ctx->pc == 0x241DA0u) {
        ctx->pc = 0x241DA4u;
        goto label_241da4;
    }
    ctx->pc = 0x241D9Cu;
    {
        const bool branch_taken_0x241d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241d9c) {
            ctx->pc = 0x241DA8u;
            goto label_241da8;
        }
    }
    ctx->pc = 0x241DA4u;
label_241da4:
    // 0x241da4: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x241da4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_241da8:
    // 0x241da8: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x241da8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
label_241dac:
    // 0x241dac: 0x1000004e  b           . + 4 + (0x4E << 2)
label_241db0:
    if (ctx->pc == 0x241DB0u) {
        ctx->pc = 0x241DB0u;
            // 0x241db0: 0xa6000000  sh          $zero, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x241DB4u;
        goto label_241db4;
    }
    ctx->pc = 0x241DACu;
    {
        const bool branch_taken_0x241dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241DACu;
            // 0x241db0: 0xa6000000  sh          $zero, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241dac) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241DB4u;
label_241db4:
    // 0x241db4: 0x8c24ca5c  lw          $a0, -0x35A4($at)
    ctx->pc = 0x241db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953564)));
label_241db8:
    // 0x241db8: 0xc087654  jal         func_21D950
label_241dbc:
    if (ctx->pc == 0x241DBCu) {
        ctx->pc = 0x241DBCu;
            // 0x241dbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241DC0u;
        goto label_241dc0;
    }
    ctx->pc = 0x241DB8u;
    SET_GPR_U32(ctx, 31, 0x241DC0u);
    ctx->pc = 0x241DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241DB8u;
            // 0x241dbc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D950u;
    if (runtime->hasFunction(0x21D950u)) {
        auto targetFn = runtime->lookupFunction(0x21D950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241DC0u; }
        if (ctx->pc != 0x241DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        YesNoCursor2__7CDC2MesFi_0x21d950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241DC0u; }
        if (ctx->pc != 0x241DC0u) { return; }
    }
    ctx->pc = 0x241DC0u;
label_241dc0:
    // 0x241dc0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x241dc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_241dc4:
    // 0x241dc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x241dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241dc8:
    // 0x241dc8: 0x16250011  bne         $s1, $a1, . + 4 + (0x11 << 2)
label_241dcc:
    if (ctx->pc == 0x241DCCu) {
        ctx->pc = 0x241DCCu;
            // 0x241dcc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x241DD0u;
        goto label_241dd0;
    }
    ctx->pc = 0x241DC8u;
    {
        const bool branch_taken_0x241dc8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 5));
        ctx->pc = 0x241DCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241DC8u;
            // 0x241dcc: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241dc8) {
            ctx->pc = 0x241E10u;
            goto label_241e10;
        }
    }
    ctx->pc = 0x241DD0u;
label_241dd0:
    // 0x241dd0: 0xc065f4c  jal         func_197D30
label_241dd4:
    if (ctx->pc == 0x241DD4u) {
        ctx->pc = 0x241DD4u;
            // 0x241dd4: 0x8e0400d4  lw          $a0, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->pc = 0x241DD8u;
        goto label_241dd8;
    }
    ctx->pc = 0x241DD0u;
    SET_GPR_U32(ctx, 31, 0x241DD8u);
    ctx->pc = 0x241DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241DD0u;
            // 0x241dd4: 0x8e0400d4  lw          $a0, 0xD4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197D30u;
    if (runtime->hasFunction(0x197D30u)) {
        auto targetFn = runtime->lookupFunction(0x197D30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241DD8u; }
        if (ctx->pc != 0x241DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteNum__13CGameDataUsedFi_0x197d30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241DD8u; }
        if (ctx->pc != 0x241DD8u) { return; }
    }
    ctx->pc = 0x241DD8u;
label_241dd8:
    // 0x241dd8: 0xc094274  jal         func_2509D0
label_241ddc:
    if (ctx->pc == 0x241DDCu) {
        ctx->pc = 0x241DDCu;
            // 0x241ddc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x241DE0u;
        goto label_241de0;
    }
    ctx->pc = 0x241DD8u;
    SET_GPR_U32(ctx, 31, 0x241DE0u);
    ctx->pc = 0x241DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241DD8u;
            // 0x241ddc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241DE0u; }
        if (ctx->pc != 0x241DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241DE0u; }
        if (ctx->pc != 0x241DE0u) { return; }
    }
    ctx->pc = 0x241DE0u;
label_241de0:
    // 0x241de0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x241de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_241de4:
    // 0x241de4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x241de4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241de8:
    // 0x241de8: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x241de8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_241dec:
    // 0x241dec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x241decu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_241df0:
    // 0x241df0: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x241df0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
label_241df4:
    // 0x241df4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x241df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_241df8:
    // 0x241df8: 0xa2020170  sb          $v0, 0x170($s0)
    ctx->pc = 0x241df8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 368), (uint8_t)GPR_U32(ctx, 2));
label_241dfc:
    // 0x241dfc: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x241dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_241e00:
    // 0x241e00: 0xa200016e  sb          $zero, 0x16E($s0)
    ctx->pc = 0x241e00u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 366), (uint8_t)GPR_U32(ctx, 0));
label_241e04:
    // 0x241e04: 0xc08e898  jal         func_23A260
label_241e08:
    if (ctx->pc == 0x241E08u) {
        ctx->pc = 0x241E08u;
            // 0x241e08: 0xa6000174  sh          $zero, 0x174($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 372), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x241E0Cu;
        goto label_241e0c;
    }
    ctx->pc = 0x241E04u;
    SET_GPR_U32(ctx, 31, 0x241E0Cu);
    ctx->pc = 0x241E08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241E04u;
            // 0x241e08: 0xa6000174  sh          $zero, 0x174($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 372), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A260u;
    if (runtime->hasFunction(0x23A260u)) {
        auto targetFn = runtime->lookupFunction(0x23A260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241E0Cu; }
        if (ctx->pc != 0x241E0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeOutMenu__14CBaseMenuClassFif_0x23a260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241E0Cu; }
        if (ctx->pc != 0x241E0Cu) { return; }
    }
    ctx->pc = 0x241E0Cu;
label_241e0c:
    // 0x241e0c: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x241e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_241e10:
    // 0x241e10: 0x16220035  bne         $s1, $v0, . + 4 + (0x35 << 2)
label_241e14:
    if (ctx->pc == 0x241E14u) {
        ctx->pc = 0x241E14u;
            // 0x241e14: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->pc = 0x241E18u;
        goto label_241e18;
    }
    ctx->pc = 0x241E10u;
    {
        const bool branch_taken_0x241e10 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        ctx->pc = 0x241E14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241E10u;
            // 0x241e14: 0x3c0101ed  lui         $at, 0x1ED (Delay Slot)
        SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241e10) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241E18u;
label_241e18:
    // 0x241e18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x241e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_241e1c:
    // 0x241e1c: 0x8c26cb4c  lw          $a2, -0x34B4($at)
    ctx->pc = 0x241e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953804)));
label_241e20:
    // 0x241e20: 0xc08e87c  jal         func_23A1F0
label_241e24:
    if (ctx->pc == 0x241E24u) {
        ctx->pc = 0x241E24u;
            // 0x241e24: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x241E28u;
        goto label_241e28;
    }
    ctx->pc = 0x241E20u;
    SET_GPR_U32(ctx, 31, 0x241E28u);
    ctx->pc = 0x241E24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241E20u;
            // 0x241e24: 0x24050005  addiu       $a1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A1F0u;
    if (runtime->hasFunction(0x23A1F0u)) {
        auto targetFn = runtime->lookupFunction(0x23A1F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241E28u; }
        if (ctx->pc != 0x241E28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        IsAskEnd__14CBaseMenuClassFiP16CMenuPosDataForm_0x23a1f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241E28u; }
        if (ctx->pc != 0x241E28u) { return; }
    }
    ctx->pc = 0x241E28u;
label_241e28:
    // 0x241e28: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x241e28u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_241e2c:
    // 0x241e2c: 0x8c22cb4c  lw          $v0, -0x34B4($at)
    ctx->pc = 0x241e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294953804)));
label_241e30:
    // 0x241e30: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x241e30u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_241e34:
    // 0x241e34: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x241e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_241e38:
    // 0x241e38: 0x8c420138  lw          $v0, 0x138($v0)
    ctx->pc = 0x241e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 312)));
label_241e3c:
    // 0x241e3c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_241e40:
    if (ctx->pc == 0x241E40u) {
        ctx->pc = 0x241E44u;
        goto label_241e44;
    }
    ctx->pc = 0x241E3Cu;
    {
        const bool branch_taken_0x241e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241e3c) {
            ctx->pc = 0x241E48u;
            goto label_241e48;
        }
    }
    ctx->pc = 0x241E44u;
label_241e44:
    // 0x241e44: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x241e44u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
label_241e48:
    // 0x241e48: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x241e48u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
label_241e4c:
    // 0x241e4c: 0x10000026  b           . + 4 + (0x26 << 2)
label_241e50:
    if (ctx->pc == 0x241E50u) {
        ctx->pc = 0x241E50u;
            // 0x241e50: 0xa6000000  sh          $zero, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x241E54u;
        goto label_241e54;
    }
    ctx->pc = 0x241E4Cu;
    {
        const bool branch_taken_0x241e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241E50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241E4Cu;
            // 0x241e50: 0xa6000000  sh          $zero, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241e4c) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241E54u;
label_241e54:
    // 0x241e54: 0xc05239c  jal         func_148E70
label_241e58:
    if (ctx->pc == 0x241E58u) {
        ctx->pc = 0x241E5Cu;
        goto label_241e5c;
    }
    ctx->pc = 0x241E54u;
    SET_GPR_U32(ctx, 31, 0x241E5Cu);
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241E5Cu; }
        if (ctx->pc != 0x241E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241E5Cu; }
        if (ctx->pc != 0x241E5Cu) { return; }
    }
    ctx->pc = 0x241E5Cu;
label_241e5c:
    // 0x241e5c: 0x14400022  bnez        $v0, . + 4 + (0x22 << 2)
label_241e60:
    if (ctx->pc == 0x241E60u) {
        ctx->pc = 0x241E60u;
            // 0x241e60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241E64u;
        goto label_241e64;
    }
    ctx->pc = 0x241E5Cu;
    {
        const bool branch_taken_0x241e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241E5Cu;
            // 0x241e60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241e5c) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241E64u;
label_241e64:
    // 0x241e64: 0xc05231c  jal         func_148C70
label_241e68:
    if (ctx->pc == 0x241E68u) {
        ctx->pc = 0x241E6Cu;
        goto label_241e6c;
    }
    ctx->pc = 0x241E64u;
    SET_GPR_U32(ctx, 31, 0x241E6Cu);
    ctx->pc = 0x148C70u;
    if (runtime->hasFunction(0x148C70u)) {
        auto targetFn = runtime->lookupFunction(0x148C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241E6Cu; }
        if (ctx->pc != 0x241E6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetReadBGFile__Fi_0x148c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241E6Cu; }
        if (ctx->pc != 0x241E6Cu) { return; }
    }
    ctx->pc = 0x241E6Cu;
label_241e6c:
    // 0x241e6c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_241e70:
    if (ctx->pc == 0x241E70u) {
        ctx->pc = 0x241E74u;
        goto label_241e74;
    }
    ctx->pc = 0x241E6Cu;
    {
        const bool branch_taken_0x241e6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241e6c) {
            ctx->pc = 0x241E88u;
            goto label_241e88;
        }
    }
    ctx->pc = 0x241E74u;
label_241e74:
    // 0x241e74: 0x8c450110  lw          $a1, 0x110($v0)
    ctx->pc = 0x241e74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
label_241e78:
    // 0x241e78: 0x3c0601ed  lui         $a2, 0x1ED
    ctx->pc = 0x241e78u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)493 << 16));
label_241e7c:
    // 0x241e7c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x241e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241e80:
    // 0x241e80: 0xc094288  jal         func_250A20
label_241e84:
    if (ctx->pc == 0x241E84u) {
        ctx->pc = 0x241E84u;
            // 0x241e84: 0x24c6d5c0  addiu       $a2, $a2, -0x2A40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956480));
        ctx->pc = 0x241E88u;
        goto label_241e88;
    }
    ctx->pc = 0x241E80u;
    SET_GPR_U32(ctx, 31, 0x241E88u);
    ctx->pc = 0x241E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241E80u;
            // 0x241e84: 0x24c6d5c0  addiu       $a2, $a2, -0x2A40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250A20u;
    if (runtime->hasFunction(0x250A20u)) {
        auto targetFn = runtime->lookupFunction(0x250A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241E88u; }
        if (ctx->pc != 0x241E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__FiPUiP9mgCMemory_0x250a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241E88u; }
        if (ctx->pc != 0x241E88u) { return; }
    }
    ctx->pc = 0x241E88u;
label_241e88:
    // 0x241e88: 0xa6000002  sh          $zero, 0x2($s0)
    ctx->pc = 0x241e88u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 0));
label_241e8c:
    // 0x241e8c: 0x10000016  b           . + 4 + (0x16 << 2)
label_241e90:
    if (ctx->pc == 0x241E90u) {
        ctx->pc = 0x241E90u;
            // 0x241e90: 0xa6000000  sh          $zero, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x241E94u;
        goto label_241e94;
    }
    ctx->pc = 0x241E8Cu;
    {
        const bool branch_taken_0x241e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241E8Cu;
            // 0x241e90: 0xa6000000  sh          $zero, 0x0($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241e8c) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241E94u;
label_241e94:
    // 0x241e94: 0xc05239c  jal         func_148E70
label_241e98:
    if (ctx->pc == 0x241E98u) {
        ctx->pc = 0x241E9Cu;
        goto label_241e9c;
    }
    ctx->pc = 0x241E94u;
    SET_GPR_U32(ctx, 31, 0x241E9Cu);
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241E9Cu; }
        if (ctx->pc != 0x241E9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241E9Cu; }
        if (ctx->pc != 0x241E9Cu) { return; }
    }
    ctx->pc = 0x241E9Cu;
label_241e9c:
    // 0x241e9c: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_241ea0:
    if (ctx->pc == 0x241EA0u) {
        ctx->pc = 0x241EA0u;
            // 0x241ea0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241EA4u;
        goto label_241ea4;
    }
    ctx->pc = 0x241E9Cu;
    {
        const bool branch_taken_0x241e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241E9Cu;
            // 0x241ea0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241e9c) {
            ctx->pc = 0x241EE8u;
            goto label_241ee8;
        }
    }
    ctx->pc = 0x241EA4u;
label_241ea4:
    // 0x241ea4: 0xc05231c  jal         func_148C70
label_241ea8:
    if (ctx->pc == 0x241EA8u) {
        ctx->pc = 0x241EACu;
        goto label_241eac;
    }
    ctx->pc = 0x241EA4u;
    SET_GPR_U32(ctx, 31, 0x241EACu);
    ctx->pc = 0x148C70u;
    if (runtime->hasFunction(0x148C70u)) {
        auto targetFn = runtime->lookupFunction(0x148C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241EACu; }
        if (ctx->pc != 0x241EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetReadBGFile__Fi_0x148c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241EACu; }
        if (ctx->pc != 0x241EACu) { return; }
    }
    ctx->pc = 0x241EACu;
label_241eac:
    // 0x241eac: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_241eb0:
    if (ctx->pc == 0x241EB0u) {
        ctx->pc = 0x241EB4u;
        goto label_241eb4;
    }
    ctx->pc = 0x241EACu;
    {
        const bool branch_taken_0x241eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241eac) {
            ctx->pc = 0x241EC8u;
            goto label_241ec8;
        }
    }
    ctx->pc = 0x241EB4u;
label_241eb4:
    // 0x241eb4: 0x8c450110  lw          $a1, 0x110($v0)
    ctx->pc = 0x241eb4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 272)));
label_241eb8:
    // 0x241eb8: 0x3c0601ed  lui         $a2, 0x1ED
    ctx->pc = 0x241eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)493 << 16));
label_241ebc:
    // 0x241ebc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x241ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241ec0:
    // 0x241ec0: 0xc094288  jal         func_250A20
label_241ec4:
    if (ctx->pc == 0x241EC4u) {
        ctx->pc = 0x241EC4u;
            // 0x241ec4: 0x24c6d5c0  addiu       $a2, $a2, -0x2A40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956480));
        ctx->pc = 0x241EC8u;
        goto label_241ec8;
    }
    ctx->pc = 0x241EC0u;
    SET_GPR_U32(ctx, 31, 0x241EC8u);
    ctx->pc = 0x241EC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241EC0u;
            // 0x241ec4: 0x24c6d5c0  addiu       $a2, $a2, -0x2A40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956480));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250A20u;
    if (runtime->hasFunction(0x250A20u)) {
        auto targetFn = runtime->lookupFunction(0x250A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241EC8u; }
        if (ctx->pc != 0x241EC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__FiPUiP9mgCMemory_0x250a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241EC8u; }
        if (ctx->pc != 0x241EC8u) { return; }
    }
    ctx->pc = 0x241EC8u;
label_241ec8:
    // 0x241ec8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x241ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_241ecc:
    // 0x241ecc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x241eccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_241ed0:
    // 0x241ed0: 0xc08e7cc  jal         func_239F30
label_241ed4:
    if (ctx->pc == 0x241ED4u) {
        ctx->pc = 0x241ED4u;
            // 0x241ed4: 0x24a5ae48  addiu       $a1, $a1, -0x51B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946376));
        ctx->pc = 0x241ED8u;
        goto label_241ed8;
    }
    ctx->pc = 0x241ED0u;
    SET_GPR_U32(ctx, 31, 0x241ED8u);
    ctx->pc = 0x241ED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241ED0u;
            // 0x241ed4: 0x24a5ae48  addiu       $a1, $a1, -0x51B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x239F30u;
    if (runtime->hasFunction(0x239F30u)) {
        auto targetFn = runtime->lookupFunction(0x239F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241ED8u; }
        if (ctx->pc != 0x241ED8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ExeScript__14CBaseMenuClassFPc_0x239f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241ED8u; }
        if (ctx->pc != 0x241ED8u) { return; }
    }
    ctx->pc = 0x241ED8u;
label_241ed8:
    // 0x241ed8: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x241ed8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_241edc:
    // 0x241edc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x241edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_241ee0:
    // 0x241ee0: 0xa6030000  sh          $v1, 0x0($s0)
    ctx->pc = 0x241ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 3));
label_241ee4:
    // 0x241ee4: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x241ee4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_241ee8:
    // 0x241ee8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x241ee8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_241eec:
    // 0x241eec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x241eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_241ef0:
    // 0x241ef0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x241ef0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_241ef4:
    // 0x241ef4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x241ef4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_241ef8:
    // 0x241ef8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x241ef8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_241efc:
    // 0x241efc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x241efcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_241f00:
    // 0x241f00: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x241f00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_241f04:
    // 0x241f04: 0x3e00008  jr          $ra
label_241f08:
    if (ctx->pc == 0x241F08u) {
        ctx->pc = 0x241F08u;
            // 0x241f08: 0x27bd0300  addiu       $sp, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->pc = 0x241F0Cu;
        goto label_fallthrough_0x241f04;
    }
    ctx->pc = 0x241F04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241F04u;
            // 0x241f08: 0x27bd0300  addiu       $sp, $sp, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 768));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x241f04:
    ctx->pc = 0x241F0Cu;
}
