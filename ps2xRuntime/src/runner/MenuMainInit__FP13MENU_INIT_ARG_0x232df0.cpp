#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuMainInit__FP13MENU_INIT_ARG
// Address: 0x232df0 - 0x233c88
void MenuMainInit__FP13MENU_INIT_ARG_0x232df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuMainInit__FP13MENU_INIT_ARG_0x232df0");
#endif

    switch (ctx->pc) {
        case 0x232df0u: goto label_232df0;
        case 0x232df4u: goto label_232df4;
        case 0x232df8u: goto label_232df8;
        case 0x232dfcu: goto label_232dfc;
        case 0x232e00u: goto label_232e00;
        case 0x232e04u: goto label_232e04;
        case 0x232e08u: goto label_232e08;
        case 0x232e0cu: goto label_232e0c;
        case 0x232e10u: goto label_232e10;
        case 0x232e14u: goto label_232e14;
        case 0x232e18u: goto label_232e18;
        case 0x232e1cu: goto label_232e1c;
        case 0x232e20u: goto label_232e20;
        case 0x232e24u: goto label_232e24;
        case 0x232e28u: goto label_232e28;
        case 0x232e2cu: goto label_232e2c;
        case 0x232e30u: goto label_232e30;
        case 0x232e34u: goto label_232e34;
        case 0x232e38u: goto label_232e38;
        case 0x232e3cu: goto label_232e3c;
        case 0x232e40u: goto label_232e40;
        case 0x232e44u: goto label_232e44;
        case 0x232e48u: goto label_232e48;
        case 0x232e4cu: goto label_232e4c;
        case 0x232e50u: goto label_232e50;
        case 0x232e54u: goto label_232e54;
        case 0x232e58u: goto label_232e58;
        case 0x232e5cu: goto label_232e5c;
        case 0x232e60u: goto label_232e60;
        case 0x232e64u: goto label_232e64;
        case 0x232e68u: goto label_232e68;
        case 0x232e6cu: goto label_232e6c;
        case 0x232e70u: goto label_232e70;
        case 0x232e74u: goto label_232e74;
        case 0x232e78u: goto label_232e78;
        case 0x232e7cu: goto label_232e7c;
        case 0x232e80u: goto label_232e80;
        case 0x232e84u: goto label_232e84;
        case 0x232e88u: goto label_232e88;
        case 0x232e8cu: goto label_232e8c;
        case 0x232e90u: goto label_232e90;
        case 0x232e94u: goto label_232e94;
        case 0x232e98u: goto label_232e98;
        case 0x232e9cu: goto label_232e9c;
        case 0x232ea0u: goto label_232ea0;
        case 0x232ea4u: goto label_232ea4;
        case 0x232ea8u: goto label_232ea8;
        case 0x232eacu: goto label_232eac;
        case 0x232eb0u: goto label_232eb0;
        case 0x232eb4u: goto label_232eb4;
        case 0x232eb8u: goto label_232eb8;
        case 0x232ebcu: goto label_232ebc;
        case 0x232ec0u: goto label_232ec0;
        case 0x232ec4u: goto label_232ec4;
        case 0x232ec8u: goto label_232ec8;
        case 0x232eccu: goto label_232ecc;
        case 0x232ed0u: goto label_232ed0;
        case 0x232ed4u: goto label_232ed4;
        case 0x232ed8u: goto label_232ed8;
        case 0x232edcu: goto label_232edc;
        case 0x232ee0u: goto label_232ee0;
        case 0x232ee4u: goto label_232ee4;
        case 0x232ee8u: goto label_232ee8;
        case 0x232eecu: goto label_232eec;
        case 0x232ef0u: goto label_232ef0;
        case 0x232ef4u: goto label_232ef4;
        case 0x232ef8u: goto label_232ef8;
        case 0x232efcu: goto label_232efc;
        case 0x232f00u: goto label_232f00;
        case 0x232f04u: goto label_232f04;
        case 0x232f08u: goto label_232f08;
        case 0x232f0cu: goto label_232f0c;
        case 0x232f10u: goto label_232f10;
        case 0x232f14u: goto label_232f14;
        case 0x232f18u: goto label_232f18;
        case 0x232f1cu: goto label_232f1c;
        case 0x232f20u: goto label_232f20;
        case 0x232f24u: goto label_232f24;
        case 0x232f28u: goto label_232f28;
        case 0x232f2cu: goto label_232f2c;
        case 0x232f30u: goto label_232f30;
        case 0x232f34u: goto label_232f34;
        case 0x232f38u: goto label_232f38;
        case 0x232f3cu: goto label_232f3c;
        case 0x232f40u: goto label_232f40;
        case 0x232f44u: goto label_232f44;
        case 0x232f48u: goto label_232f48;
        case 0x232f4cu: goto label_232f4c;
        case 0x232f50u: goto label_232f50;
        case 0x232f54u: goto label_232f54;
        case 0x232f58u: goto label_232f58;
        case 0x232f5cu: goto label_232f5c;
        case 0x232f60u: goto label_232f60;
        case 0x232f64u: goto label_232f64;
        case 0x232f68u: goto label_232f68;
        case 0x232f6cu: goto label_232f6c;
        case 0x232f70u: goto label_232f70;
        case 0x232f74u: goto label_232f74;
        case 0x232f78u: goto label_232f78;
        case 0x232f7cu: goto label_232f7c;
        case 0x232f80u: goto label_232f80;
        case 0x232f84u: goto label_232f84;
        case 0x232f88u: goto label_232f88;
        case 0x232f8cu: goto label_232f8c;
        case 0x232f90u: goto label_232f90;
        case 0x232f94u: goto label_232f94;
        case 0x232f98u: goto label_232f98;
        case 0x232f9cu: goto label_232f9c;
        case 0x232fa0u: goto label_232fa0;
        case 0x232fa4u: goto label_232fa4;
        case 0x232fa8u: goto label_232fa8;
        case 0x232facu: goto label_232fac;
        case 0x232fb0u: goto label_232fb0;
        case 0x232fb4u: goto label_232fb4;
        case 0x232fb8u: goto label_232fb8;
        case 0x232fbcu: goto label_232fbc;
        case 0x232fc0u: goto label_232fc0;
        case 0x232fc4u: goto label_232fc4;
        case 0x232fc8u: goto label_232fc8;
        case 0x232fccu: goto label_232fcc;
        case 0x232fd0u: goto label_232fd0;
        case 0x232fd4u: goto label_232fd4;
        case 0x232fd8u: goto label_232fd8;
        case 0x232fdcu: goto label_232fdc;
        case 0x232fe0u: goto label_232fe0;
        case 0x232fe4u: goto label_232fe4;
        case 0x232fe8u: goto label_232fe8;
        case 0x232fecu: goto label_232fec;
        case 0x232ff0u: goto label_232ff0;
        case 0x232ff4u: goto label_232ff4;
        case 0x232ff8u: goto label_232ff8;
        case 0x232ffcu: goto label_232ffc;
        case 0x233000u: goto label_233000;
        case 0x233004u: goto label_233004;
        case 0x233008u: goto label_233008;
        case 0x23300cu: goto label_23300c;
        case 0x233010u: goto label_233010;
        case 0x233014u: goto label_233014;
        case 0x233018u: goto label_233018;
        case 0x23301cu: goto label_23301c;
        case 0x233020u: goto label_233020;
        case 0x233024u: goto label_233024;
        case 0x233028u: goto label_233028;
        case 0x23302cu: goto label_23302c;
        case 0x233030u: goto label_233030;
        case 0x233034u: goto label_233034;
        case 0x233038u: goto label_233038;
        case 0x23303cu: goto label_23303c;
        case 0x233040u: goto label_233040;
        case 0x233044u: goto label_233044;
        case 0x233048u: goto label_233048;
        case 0x23304cu: goto label_23304c;
        case 0x233050u: goto label_233050;
        case 0x233054u: goto label_233054;
        case 0x233058u: goto label_233058;
        case 0x23305cu: goto label_23305c;
        case 0x233060u: goto label_233060;
        case 0x233064u: goto label_233064;
        case 0x233068u: goto label_233068;
        case 0x23306cu: goto label_23306c;
        case 0x233070u: goto label_233070;
        case 0x233074u: goto label_233074;
        case 0x233078u: goto label_233078;
        case 0x23307cu: goto label_23307c;
        case 0x233080u: goto label_233080;
        case 0x233084u: goto label_233084;
        case 0x233088u: goto label_233088;
        case 0x23308cu: goto label_23308c;
        case 0x233090u: goto label_233090;
        case 0x233094u: goto label_233094;
        case 0x233098u: goto label_233098;
        case 0x23309cu: goto label_23309c;
        case 0x2330a0u: goto label_2330a0;
        case 0x2330a4u: goto label_2330a4;
        case 0x2330a8u: goto label_2330a8;
        case 0x2330acu: goto label_2330ac;
        case 0x2330b0u: goto label_2330b0;
        case 0x2330b4u: goto label_2330b4;
        case 0x2330b8u: goto label_2330b8;
        case 0x2330bcu: goto label_2330bc;
        case 0x2330c0u: goto label_2330c0;
        case 0x2330c4u: goto label_2330c4;
        case 0x2330c8u: goto label_2330c8;
        case 0x2330ccu: goto label_2330cc;
        case 0x2330d0u: goto label_2330d0;
        case 0x2330d4u: goto label_2330d4;
        case 0x2330d8u: goto label_2330d8;
        case 0x2330dcu: goto label_2330dc;
        case 0x2330e0u: goto label_2330e0;
        case 0x2330e4u: goto label_2330e4;
        case 0x2330e8u: goto label_2330e8;
        case 0x2330ecu: goto label_2330ec;
        case 0x2330f0u: goto label_2330f0;
        case 0x2330f4u: goto label_2330f4;
        case 0x2330f8u: goto label_2330f8;
        case 0x2330fcu: goto label_2330fc;
        case 0x233100u: goto label_233100;
        case 0x233104u: goto label_233104;
        case 0x233108u: goto label_233108;
        case 0x23310cu: goto label_23310c;
        case 0x233110u: goto label_233110;
        case 0x233114u: goto label_233114;
        case 0x233118u: goto label_233118;
        case 0x23311cu: goto label_23311c;
        case 0x233120u: goto label_233120;
        case 0x233124u: goto label_233124;
        case 0x233128u: goto label_233128;
        case 0x23312cu: goto label_23312c;
        case 0x233130u: goto label_233130;
        case 0x233134u: goto label_233134;
        case 0x233138u: goto label_233138;
        case 0x23313cu: goto label_23313c;
        case 0x233140u: goto label_233140;
        case 0x233144u: goto label_233144;
        case 0x233148u: goto label_233148;
        case 0x23314cu: goto label_23314c;
        case 0x233150u: goto label_233150;
        case 0x233154u: goto label_233154;
        case 0x233158u: goto label_233158;
        case 0x23315cu: goto label_23315c;
        case 0x233160u: goto label_233160;
        case 0x233164u: goto label_233164;
        case 0x233168u: goto label_233168;
        case 0x23316cu: goto label_23316c;
        case 0x233170u: goto label_233170;
        case 0x233174u: goto label_233174;
        case 0x233178u: goto label_233178;
        case 0x23317cu: goto label_23317c;
        case 0x233180u: goto label_233180;
        case 0x233184u: goto label_233184;
        case 0x233188u: goto label_233188;
        case 0x23318cu: goto label_23318c;
        case 0x233190u: goto label_233190;
        case 0x233194u: goto label_233194;
        case 0x233198u: goto label_233198;
        case 0x23319cu: goto label_23319c;
        case 0x2331a0u: goto label_2331a0;
        case 0x2331a4u: goto label_2331a4;
        case 0x2331a8u: goto label_2331a8;
        case 0x2331acu: goto label_2331ac;
        case 0x2331b0u: goto label_2331b0;
        case 0x2331b4u: goto label_2331b4;
        case 0x2331b8u: goto label_2331b8;
        case 0x2331bcu: goto label_2331bc;
        case 0x2331c0u: goto label_2331c0;
        case 0x2331c4u: goto label_2331c4;
        case 0x2331c8u: goto label_2331c8;
        case 0x2331ccu: goto label_2331cc;
        case 0x2331d0u: goto label_2331d0;
        case 0x2331d4u: goto label_2331d4;
        case 0x2331d8u: goto label_2331d8;
        case 0x2331dcu: goto label_2331dc;
        case 0x2331e0u: goto label_2331e0;
        case 0x2331e4u: goto label_2331e4;
        case 0x2331e8u: goto label_2331e8;
        case 0x2331ecu: goto label_2331ec;
        case 0x2331f0u: goto label_2331f0;
        case 0x2331f4u: goto label_2331f4;
        case 0x2331f8u: goto label_2331f8;
        case 0x2331fcu: goto label_2331fc;
        case 0x233200u: goto label_233200;
        case 0x233204u: goto label_233204;
        case 0x233208u: goto label_233208;
        case 0x23320cu: goto label_23320c;
        case 0x233210u: goto label_233210;
        case 0x233214u: goto label_233214;
        case 0x233218u: goto label_233218;
        case 0x23321cu: goto label_23321c;
        case 0x233220u: goto label_233220;
        case 0x233224u: goto label_233224;
        case 0x233228u: goto label_233228;
        case 0x23322cu: goto label_23322c;
        case 0x233230u: goto label_233230;
        case 0x233234u: goto label_233234;
        case 0x233238u: goto label_233238;
        case 0x23323cu: goto label_23323c;
        case 0x233240u: goto label_233240;
        case 0x233244u: goto label_233244;
        case 0x233248u: goto label_233248;
        case 0x23324cu: goto label_23324c;
        case 0x233250u: goto label_233250;
        case 0x233254u: goto label_233254;
        case 0x233258u: goto label_233258;
        case 0x23325cu: goto label_23325c;
        case 0x233260u: goto label_233260;
        case 0x233264u: goto label_233264;
        case 0x233268u: goto label_233268;
        case 0x23326cu: goto label_23326c;
        case 0x233270u: goto label_233270;
        case 0x233274u: goto label_233274;
        case 0x233278u: goto label_233278;
        case 0x23327cu: goto label_23327c;
        case 0x233280u: goto label_233280;
        case 0x233284u: goto label_233284;
        case 0x233288u: goto label_233288;
        case 0x23328cu: goto label_23328c;
        case 0x233290u: goto label_233290;
        case 0x233294u: goto label_233294;
        case 0x233298u: goto label_233298;
        case 0x23329cu: goto label_23329c;
        case 0x2332a0u: goto label_2332a0;
        case 0x2332a4u: goto label_2332a4;
        case 0x2332a8u: goto label_2332a8;
        case 0x2332acu: goto label_2332ac;
        case 0x2332b0u: goto label_2332b0;
        case 0x2332b4u: goto label_2332b4;
        case 0x2332b8u: goto label_2332b8;
        case 0x2332bcu: goto label_2332bc;
        case 0x2332c0u: goto label_2332c0;
        case 0x2332c4u: goto label_2332c4;
        case 0x2332c8u: goto label_2332c8;
        case 0x2332ccu: goto label_2332cc;
        case 0x2332d0u: goto label_2332d0;
        case 0x2332d4u: goto label_2332d4;
        case 0x2332d8u: goto label_2332d8;
        case 0x2332dcu: goto label_2332dc;
        case 0x2332e0u: goto label_2332e0;
        case 0x2332e4u: goto label_2332e4;
        case 0x2332e8u: goto label_2332e8;
        case 0x2332ecu: goto label_2332ec;
        case 0x2332f0u: goto label_2332f0;
        case 0x2332f4u: goto label_2332f4;
        case 0x2332f8u: goto label_2332f8;
        case 0x2332fcu: goto label_2332fc;
        case 0x233300u: goto label_233300;
        case 0x233304u: goto label_233304;
        case 0x233308u: goto label_233308;
        case 0x23330cu: goto label_23330c;
        case 0x233310u: goto label_233310;
        case 0x233314u: goto label_233314;
        case 0x233318u: goto label_233318;
        case 0x23331cu: goto label_23331c;
        case 0x233320u: goto label_233320;
        case 0x233324u: goto label_233324;
        case 0x233328u: goto label_233328;
        case 0x23332cu: goto label_23332c;
        case 0x233330u: goto label_233330;
        case 0x233334u: goto label_233334;
        case 0x233338u: goto label_233338;
        case 0x23333cu: goto label_23333c;
        case 0x233340u: goto label_233340;
        case 0x233344u: goto label_233344;
        case 0x233348u: goto label_233348;
        case 0x23334cu: goto label_23334c;
        case 0x233350u: goto label_233350;
        case 0x233354u: goto label_233354;
        case 0x233358u: goto label_233358;
        case 0x23335cu: goto label_23335c;
        case 0x233360u: goto label_233360;
        case 0x233364u: goto label_233364;
        case 0x233368u: goto label_233368;
        case 0x23336cu: goto label_23336c;
        case 0x233370u: goto label_233370;
        case 0x233374u: goto label_233374;
        case 0x233378u: goto label_233378;
        case 0x23337cu: goto label_23337c;
        case 0x233380u: goto label_233380;
        case 0x233384u: goto label_233384;
        case 0x233388u: goto label_233388;
        case 0x23338cu: goto label_23338c;
        case 0x233390u: goto label_233390;
        case 0x233394u: goto label_233394;
        case 0x233398u: goto label_233398;
        case 0x23339cu: goto label_23339c;
        case 0x2333a0u: goto label_2333a0;
        case 0x2333a4u: goto label_2333a4;
        case 0x2333a8u: goto label_2333a8;
        case 0x2333acu: goto label_2333ac;
        case 0x2333b0u: goto label_2333b0;
        case 0x2333b4u: goto label_2333b4;
        case 0x2333b8u: goto label_2333b8;
        case 0x2333bcu: goto label_2333bc;
        case 0x2333c0u: goto label_2333c0;
        case 0x2333c4u: goto label_2333c4;
        case 0x2333c8u: goto label_2333c8;
        case 0x2333ccu: goto label_2333cc;
        case 0x2333d0u: goto label_2333d0;
        case 0x2333d4u: goto label_2333d4;
        case 0x2333d8u: goto label_2333d8;
        case 0x2333dcu: goto label_2333dc;
        case 0x2333e0u: goto label_2333e0;
        case 0x2333e4u: goto label_2333e4;
        case 0x2333e8u: goto label_2333e8;
        case 0x2333ecu: goto label_2333ec;
        case 0x2333f0u: goto label_2333f0;
        case 0x2333f4u: goto label_2333f4;
        case 0x2333f8u: goto label_2333f8;
        case 0x2333fcu: goto label_2333fc;
        case 0x233400u: goto label_233400;
        case 0x233404u: goto label_233404;
        case 0x233408u: goto label_233408;
        case 0x23340cu: goto label_23340c;
        case 0x233410u: goto label_233410;
        case 0x233414u: goto label_233414;
        case 0x233418u: goto label_233418;
        case 0x23341cu: goto label_23341c;
        case 0x233420u: goto label_233420;
        case 0x233424u: goto label_233424;
        case 0x233428u: goto label_233428;
        case 0x23342cu: goto label_23342c;
        case 0x233430u: goto label_233430;
        case 0x233434u: goto label_233434;
        case 0x233438u: goto label_233438;
        case 0x23343cu: goto label_23343c;
        case 0x233440u: goto label_233440;
        case 0x233444u: goto label_233444;
        case 0x233448u: goto label_233448;
        case 0x23344cu: goto label_23344c;
        case 0x233450u: goto label_233450;
        case 0x233454u: goto label_233454;
        case 0x233458u: goto label_233458;
        case 0x23345cu: goto label_23345c;
        case 0x233460u: goto label_233460;
        case 0x233464u: goto label_233464;
        case 0x233468u: goto label_233468;
        case 0x23346cu: goto label_23346c;
        case 0x233470u: goto label_233470;
        case 0x233474u: goto label_233474;
        case 0x233478u: goto label_233478;
        case 0x23347cu: goto label_23347c;
        case 0x233480u: goto label_233480;
        case 0x233484u: goto label_233484;
        case 0x233488u: goto label_233488;
        case 0x23348cu: goto label_23348c;
        case 0x233490u: goto label_233490;
        case 0x233494u: goto label_233494;
        case 0x233498u: goto label_233498;
        case 0x23349cu: goto label_23349c;
        case 0x2334a0u: goto label_2334a0;
        case 0x2334a4u: goto label_2334a4;
        case 0x2334a8u: goto label_2334a8;
        case 0x2334acu: goto label_2334ac;
        case 0x2334b0u: goto label_2334b0;
        case 0x2334b4u: goto label_2334b4;
        case 0x2334b8u: goto label_2334b8;
        case 0x2334bcu: goto label_2334bc;
        case 0x2334c0u: goto label_2334c0;
        case 0x2334c4u: goto label_2334c4;
        case 0x2334c8u: goto label_2334c8;
        case 0x2334ccu: goto label_2334cc;
        case 0x2334d0u: goto label_2334d0;
        case 0x2334d4u: goto label_2334d4;
        case 0x2334d8u: goto label_2334d8;
        case 0x2334dcu: goto label_2334dc;
        case 0x2334e0u: goto label_2334e0;
        case 0x2334e4u: goto label_2334e4;
        case 0x2334e8u: goto label_2334e8;
        case 0x2334ecu: goto label_2334ec;
        case 0x2334f0u: goto label_2334f0;
        case 0x2334f4u: goto label_2334f4;
        case 0x2334f8u: goto label_2334f8;
        case 0x2334fcu: goto label_2334fc;
        case 0x233500u: goto label_233500;
        case 0x233504u: goto label_233504;
        case 0x233508u: goto label_233508;
        case 0x23350cu: goto label_23350c;
        case 0x233510u: goto label_233510;
        case 0x233514u: goto label_233514;
        case 0x233518u: goto label_233518;
        case 0x23351cu: goto label_23351c;
        case 0x233520u: goto label_233520;
        case 0x233524u: goto label_233524;
        case 0x233528u: goto label_233528;
        case 0x23352cu: goto label_23352c;
        case 0x233530u: goto label_233530;
        case 0x233534u: goto label_233534;
        case 0x233538u: goto label_233538;
        case 0x23353cu: goto label_23353c;
        case 0x233540u: goto label_233540;
        case 0x233544u: goto label_233544;
        case 0x233548u: goto label_233548;
        case 0x23354cu: goto label_23354c;
        case 0x233550u: goto label_233550;
        case 0x233554u: goto label_233554;
        case 0x233558u: goto label_233558;
        case 0x23355cu: goto label_23355c;
        case 0x233560u: goto label_233560;
        case 0x233564u: goto label_233564;
        case 0x233568u: goto label_233568;
        case 0x23356cu: goto label_23356c;
        case 0x233570u: goto label_233570;
        case 0x233574u: goto label_233574;
        case 0x233578u: goto label_233578;
        case 0x23357cu: goto label_23357c;
        case 0x233580u: goto label_233580;
        case 0x233584u: goto label_233584;
        case 0x233588u: goto label_233588;
        case 0x23358cu: goto label_23358c;
        case 0x233590u: goto label_233590;
        case 0x233594u: goto label_233594;
        case 0x233598u: goto label_233598;
        case 0x23359cu: goto label_23359c;
        case 0x2335a0u: goto label_2335a0;
        case 0x2335a4u: goto label_2335a4;
        case 0x2335a8u: goto label_2335a8;
        case 0x2335acu: goto label_2335ac;
        case 0x2335b0u: goto label_2335b0;
        case 0x2335b4u: goto label_2335b4;
        case 0x2335b8u: goto label_2335b8;
        case 0x2335bcu: goto label_2335bc;
        case 0x2335c0u: goto label_2335c0;
        case 0x2335c4u: goto label_2335c4;
        case 0x2335c8u: goto label_2335c8;
        case 0x2335ccu: goto label_2335cc;
        case 0x2335d0u: goto label_2335d0;
        case 0x2335d4u: goto label_2335d4;
        case 0x2335d8u: goto label_2335d8;
        case 0x2335dcu: goto label_2335dc;
        case 0x2335e0u: goto label_2335e0;
        case 0x2335e4u: goto label_2335e4;
        case 0x2335e8u: goto label_2335e8;
        case 0x2335ecu: goto label_2335ec;
        case 0x2335f0u: goto label_2335f0;
        case 0x2335f4u: goto label_2335f4;
        case 0x2335f8u: goto label_2335f8;
        case 0x2335fcu: goto label_2335fc;
        case 0x233600u: goto label_233600;
        case 0x233604u: goto label_233604;
        case 0x233608u: goto label_233608;
        case 0x23360cu: goto label_23360c;
        case 0x233610u: goto label_233610;
        case 0x233614u: goto label_233614;
        case 0x233618u: goto label_233618;
        case 0x23361cu: goto label_23361c;
        case 0x233620u: goto label_233620;
        case 0x233624u: goto label_233624;
        case 0x233628u: goto label_233628;
        case 0x23362cu: goto label_23362c;
        case 0x233630u: goto label_233630;
        case 0x233634u: goto label_233634;
        case 0x233638u: goto label_233638;
        case 0x23363cu: goto label_23363c;
        case 0x233640u: goto label_233640;
        case 0x233644u: goto label_233644;
        case 0x233648u: goto label_233648;
        case 0x23364cu: goto label_23364c;
        case 0x233650u: goto label_233650;
        case 0x233654u: goto label_233654;
        case 0x233658u: goto label_233658;
        case 0x23365cu: goto label_23365c;
        case 0x233660u: goto label_233660;
        case 0x233664u: goto label_233664;
        case 0x233668u: goto label_233668;
        case 0x23366cu: goto label_23366c;
        case 0x233670u: goto label_233670;
        case 0x233674u: goto label_233674;
        case 0x233678u: goto label_233678;
        case 0x23367cu: goto label_23367c;
        case 0x233680u: goto label_233680;
        case 0x233684u: goto label_233684;
        case 0x233688u: goto label_233688;
        case 0x23368cu: goto label_23368c;
        case 0x233690u: goto label_233690;
        case 0x233694u: goto label_233694;
        case 0x233698u: goto label_233698;
        case 0x23369cu: goto label_23369c;
        case 0x2336a0u: goto label_2336a0;
        case 0x2336a4u: goto label_2336a4;
        case 0x2336a8u: goto label_2336a8;
        case 0x2336acu: goto label_2336ac;
        case 0x2336b0u: goto label_2336b0;
        case 0x2336b4u: goto label_2336b4;
        case 0x2336b8u: goto label_2336b8;
        case 0x2336bcu: goto label_2336bc;
        case 0x2336c0u: goto label_2336c0;
        case 0x2336c4u: goto label_2336c4;
        case 0x2336c8u: goto label_2336c8;
        case 0x2336ccu: goto label_2336cc;
        case 0x2336d0u: goto label_2336d0;
        case 0x2336d4u: goto label_2336d4;
        case 0x2336d8u: goto label_2336d8;
        case 0x2336dcu: goto label_2336dc;
        case 0x2336e0u: goto label_2336e0;
        case 0x2336e4u: goto label_2336e4;
        case 0x2336e8u: goto label_2336e8;
        case 0x2336ecu: goto label_2336ec;
        case 0x2336f0u: goto label_2336f0;
        case 0x2336f4u: goto label_2336f4;
        case 0x2336f8u: goto label_2336f8;
        case 0x2336fcu: goto label_2336fc;
        case 0x233700u: goto label_233700;
        case 0x233704u: goto label_233704;
        case 0x233708u: goto label_233708;
        case 0x23370cu: goto label_23370c;
        case 0x233710u: goto label_233710;
        case 0x233714u: goto label_233714;
        case 0x233718u: goto label_233718;
        case 0x23371cu: goto label_23371c;
        case 0x233720u: goto label_233720;
        case 0x233724u: goto label_233724;
        case 0x233728u: goto label_233728;
        case 0x23372cu: goto label_23372c;
        case 0x233730u: goto label_233730;
        case 0x233734u: goto label_233734;
        case 0x233738u: goto label_233738;
        case 0x23373cu: goto label_23373c;
        case 0x233740u: goto label_233740;
        case 0x233744u: goto label_233744;
        case 0x233748u: goto label_233748;
        case 0x23374cu: goto label_23374c;
        case 0x233750u: goto label_233750;
        case 0x233754u: goto label_233754;
        case 0x233758u: goto label_233758;
        case 0x23375cu: goto label_23375c;
        case 0x233760u: goto label_233760;
        case 0x233764u: goto label_233764;
        case 0x233768u: goto label_233768;
        case 0x23376cu: goto label_23376c;
        case 0x233770u: goto label_233770;
        case 0x233774u: goto label_233774;
        case 0x233778u: goto label_233778;
        case 0x23377cu: goto label_23377c;
        case 0x233780u: goto label_233780;
        case 0x233784u: goto label_233784;
        case 0x233788u: goto label_233788;
        case 0x23378cu: goto label_23378c;
        case 0x233790u: goto label_233790;
        case 0x233794u: goto label_233794;
        case 0x233798u: goto label_233798;
        case 0x23379cu: goto label_23379c;
        case 0x2337a0u: goto label_2337a0;
        case 0x2337a4u: goto label_2337a4;
        case 0x2337a8u: goto label_2337a8;
        case 0x2337acu: goto label_2337ac;
        case 0x2337b0u: goto label_2337b0;
        case 0x2337b4u: goto label_2337b4;
        case 0x2337b8u: goto label_2337b8;
        case 0x2337bcu: goto label_2337bc;
        case 0x2337c0u: goto label_2337c0;
        case 0x2337c4u: goto label_2337c4;
        case 0x2337c8u: goto label_2337c8;
        case 0x2337ccu: goto label_2337cc;
        case 0x2337d0u: goto label_2337d0;
        case 0x2337d4u: goto label_2337d4;
        case 0x2337d8u: goto label_2337d8;
        case 0x2337dcu: goto label_2337dc;
        case 0x2337e0u: goto label_2337e0;
        case 0x2337e4u: goto label_2337e4;
        case 0x2337e8u: goto label_2337e8;
        case 0x2337ecu: goto label_2337ec;
        case 0x2337f0u: goto label_2337f0;
        case 0x2337f4u: goto label_2337f4;
        case 0x2337f8u: goto label_2337f8;
        case 0x2337fcu: goto label_2337fc;
        case 0x233800u: goto label_233800;
        case 0x233804u: goto label_233804;
        case 0x233808u: goto label_233808;
        case 0x23380cu: goto label_23380c;
        case 0x233810u: goto label_233810;
        case 0x233814u: goto label_233814;
        case 0x233818u: goto label_233818;
        case 0x23381cu: goto label_23381c;
        case 0x233820u: goto label_233820;
        case 0x233824u: goto label_233824;
        case 0x233828u: goto label_233828;
        case 0x23382cu: goto label_23382c;
        case 0x233830u: goto label_233830;
        case 0x233834u: goto label_233834;
        case 0x233838u: goto label_233838;
        case 0x23383cu: goto label_23383c;
        case 0x233840u: goto label_233840;
        case 0x233844u: goto label_233844;
        case 0x233848u: goto label_233848;
        case 0x23384cu: goto label_23384c;
        case 0x233850u: goto label_233850;
        case 0x233854u: goto label_233854;
        case 0x233858u: goto label_233858;
        case 0x23385cu: goto label_23385c;
        case 0x233860u: goto label_233860;
        case 0x233864u: goto label_233864;
        case 0x233868u: goto label_233868;
        case 0x23386cu: goto label_23386c;
        case 0x233870u: goto label_233870;
        case 0x233874u: goto label_233874;
        case 0x233878u: goto label_233878;
        case 0x23387cu: goto label_23387c;
        case 0x233880u: goto label_233880;
        case 0x233884u: goto label_233884;
        case 0x233888u: goto label_233888;
        case 0x23388cu: goto label_23388c;
        case 0x233890u: goto label_233890;
        case 0x233894u: goto label_233894;
        case 0x233898u: goto label_233898;
        case 0x23389cu: goto label_23389c;
        case 0x2338a0u: goto label_2338a0;
        case 0x2338a4u: goto label_2338a4;
        case 0x2338a8u: goto label_2338a8;
        case 0x2338acu: goto label_2338ac;
        case 0x2338b0u: goto label_2338b0;
        case 0x2338b4u: goto label_2338b4;
        case 0x2338b8u: goto label_2338b8;
        case 0x2338bcu: goto label_2338bc;
        case 0x2338c0u: goto label_2338c0;
        case 0x2338c4u: goto label_2338c4;
        case 0x2338c8u: goto label_2338c8;
        case 0x2338ccu: goto label_2338cc;
        case 0x2338d0u: goto label_2338d0;
        case 0x2338d4u: goto label_2338d4;
        case 0x2338d8u: goto label_2338d8;
        case 0x2338dcu: goto label_2338dc;
        case 0x2338e0u: goto label_2338e0;
        case 0x2338e4u: goto label_2338e4;
        case 0x2338e8u: goto label_2338e8;
        case 0x2338ecu: goto label_2338ec;
        case 0x2338f0u: goto label_2338f0;
        case 0x2338f4u: goto label_2338f4;
        case 0x2338f8u: goto label_2338f8;
        case 0x2338fcu: goto label_2338fc;
        case 0x233900u: goto label_233900;
        case 0x233904u: goto label_233904;
        case 0x233908u: goto label_233908;
        case 0x23390cu: goto label_23390c;
        case 0x233910u: goto label_233910;
        case 0x233914u: goto label_233914;
        case 0x233918u: goto label_233918;
        case 0x23391cu: goto label_23391c;
        case 0x233920u: goto label_233920;
        case 0x233924u: goto label_233924;
        case 0x233928u: goto label_233928;
        case 0x23392cu: goto label_23392c;
        case 0x233930u: goto label_233930;
        case 0x233934u: goto label_233934;
        case 0x233938u: goto label_233938;
        case 0x23393cu: goto label_23393c;
        case 0x233940u: goto label_233940;
        case 0x233944u: goto label_233944;
        case 0x233948u: goto label_233948;
        case 0x23394cu: goto label_23394c;
        case 0x233950u: goto label_233950;
        case 0x233954u: goto label_233954;
        case 0x233958u: goto label_233958;
        case 0x23395cu: goto label_23395c;
        case 0x233960u: goto label_233960;
        case 0x233964u: goto label_233964;
        case 0x233968u: goto label_233968;
        case 0x23396cu: goto label_23396c;
        case 0x233970u: goto label_233970;
        case 0x233974u: goto label_233974;
        case 0x233978u: goto label_233978;
        case 0x23397cu: goto label_23397c;
        case 0x233980u: goto label_233980;
        case 0x233984u: goto label_233984;
        case 0x233988u: goto label_233988;
        case 0x23398cu: goto label_23398c;
        case 0x233990u: goto label_233990;
        case 0x233994u: goto label_233994;
        case 0x233998u: goto label_233998;
        case 0x23399cu: goto label_23399c;
        case 0x2339a0u: goto label_2339a0;
        case 0x2339a4u: goto label_2339a4;
        case 0x2339a8u: goto label_2339a8;
        case 0x2339acu: goto label_2339ac;
        case 0x2339b0u: goto label_2339b0;
        case 0x2339b4u: goto label_2339b4;
        case 0x2339b8u: goto label_2339b8;
        case 0x2339bcu: goto label_2339bc;
        case 0x2339c0u: goto label_2339c0;
        case 0x2339c4u: goto label_2339c4;
        case 0x2339c8u: goto label_2339c8;
        case 0x2339ccu: goto label_2339cc;
        case 0x2339d0u: goto label_2339d0;
        case 0x2339d4u: goto label_2339d4;
        case 0x2339d8u: goto label_2339d8;
        case 0x2339dcu: goto label_2339dc;
        case 0x2339e0u: goto label_2339e0;
        case 0x2339e4u: goto label_2339e4;
        case 0x2339e8u: goto label_2339e8;
        case 0x2339ecu: goto label_2339ec;
        case 0x2339f0u: goto label_2339f0;
        case 0x2339f4u: goto label_2339f4;
        case 0x2339f8u: goto label_2339f8;
        case 0x2339fcu: goto label_2339fc;
        case 0x233a00u: goto label_233a00;
        case 0x233a04u: goto label_233a04;
        case 0x233a08u: goto label_233a08;
        case 0x233a0cu: goto label_233a0c;
        case 0x233a10u: goto label_233a10;
        case 0x233a14u: goto label_233a14;
        case 0x233a18u: goto label_233a18;
        case 0x233a1cu: goto label_233a1c;
        case 0x233a20u: goto label_233a20;
        case 0x233a24u: goto label_233a24;
        case 0x233a28u: goto label_233a28;
        case 0x233a2cu: goto label_233a2c;
        case 0x233a30u: goto label_233a30;
        case 0x233a34u: goto label_233a34;
        case 0x233a38u: goto label_233a38;
        case 0x233a3cu: goto label_233a3c;
        case 0x233a40u: goto label_233a40;
        case 0x233a44u: goto label_233a44;
        case 0x233a48u: goto label_233a48;
        case 0x233a4cu: goto label_233a4c;
        case 0x233a50u: goto label_233a50;
        case 0x233a54u: goto label_233a54;
        case 0x233a58u: goto label_233a58;
        case 0x233a5cu: goto label_233a5c;
        case 0x233a60u: goto label_233a60;
        case 0x233a64u: goto label_233a64;
        case 0x233a68u: goto label_233a68;
        case 0x233a6cu: goto label_233a6c;
        case 0x233a70u: goto label_233a70;
        case 0x233a74u: goto label_233a74;
        case 0x233a78u: goto label_233a78;
        case 0x233a7cu: goto label_233a7c;
        case 0x233a80u: goto label_233a80;
        case 0x233a84u: goto label_233a84;
        case 0x233a88u: goto label_233a88;
        case 0x233a8cu: goto label_233a8c;
        case 0x233a90u: goto label_233a90;
        case 0x233a94u: goto label_233a94;
        case 0x233a98u: goto label_233a98;
        case 0x233a9cu: goto label_233a9c;
        case 0x233aa0u: goto label_233aa0;
        case 0x233aa4u: goto label_233aa4;
        case 0x233aa8u: goto label_233aa8;
        case 0x233aacu: goto label_233aac;
        case 0x233ab0u: goto label_233ab0;
        case 0x233ab4u: goto label_233ab4;
        case 0x233ab8u: goto label_233ab8;
        case 0x233abcu: goto label_233abc;
        case 0x233ac0u: goto label_233ac0;
        case 0x233ac4u: goto label_233ac4;
        case 0x233ac8u: goto label_233ac8;
        case 0x233accu: goto label_233acc;
        case 0x233ad0u: goto label_233ad0;
        case 0x233ad4u: goto label_233ad4;
        case 0x233ad8u: goto label_233ad8;
        case 0x233adcu: goto label_233adc;
        case 0x233ae0u: goto label_233ae0;
        case 0x233ae4u: goto label_233ae4;
        case 0x233ae8u: goto label_233ae8;
        case 0x233aecu: goto label_233aec;
        case 0x233af0u: goto label_233af0;
        case 0x233af4u: goto label_233af4;
        case 0x233af8u: goto label_233af8;
        case 0x233afcu: goto label_233afc;
        case 0x233b00u: goto label_233b00;
        case 0x233b04u: goto label_233b04;
        case 0x233b08u: goto label_233b08;
        case 0x233b0cu: goto label_233b0c;
        case 0x233b10u: goto label_233b10;
        case 0x233b14u: goto label_233b14;
        case 0x233b18u: goto label_233b18;
        case 0x233b1cu: goto label_233b1c;
        case 0x233b20u: goto label_233b20;
        case 0x233b24u: goto label_233b24;
        case 0x233b28u: goto label_233b28;
        case 0x233b2cu: goto label_233b2c;
        case 0x233b30u: goto label_233b30;
        case 0x233b34u: goto label_233b34;
        case 0x233b38u: goto label_233b38;
        case 0x233b3cu: goto label_233b3c;
        case 0x233b40u: goto label_233b40;
        case 0x233b44u: goto label_233b44;
        case 0x233b48u: goto label_233b48;
        case 0x233b4cu: goto label_233b4c;
        case 0x233b50u: goto label_233b50;
        case 0x233b54u: goto label_233b54;
        case 0x233b58u: goto label_233b58;
        case 0x233b5cu: goto label_233b5c;
        case 0x233b60u: goto label_233b60;
        case 0x233b64u: goto label_233b64;
        case 0x233b68u: goto label_233b68;
        case 0x233b6cu: goto label_233b6c;
        case 0x233b70u: goto label_233b70;
        case 0x233b74u: goto label_233b74;
        case 0x233b78u: goto label_233b78;
        case 0x233b7cu: goto label_233b7c;
        case 0x233b80u: goto label_233b80;
        case 0x233b84u: goto label_233b84;
        case 0x233b88u: goto label_233b88;
        case 0x233b8cu: goto label_233b8c;
        case 0x233b90u: goto label_233b90;
        case 0x233b94u: goto label_233b94;
        case 0x233b98u: goto label_233b98;
        case 0x233b9cu: goto label_233b9c;
        case 0x233ba0u: goto label_233ba0;
        case 0x233ba4u: goto label_233ba4;
        case 0x233ba8u: goto label_233ba8;
        case 0x233bacu: goto label_233bac;
        case 0x233bb0u: goto label_233bb0;
        case 0x233bb4u: goto label_233bb4;
        case 0x233bb8u: goto label_233bb8;
        case 0x233bbcu: goto label_233bbc;
        case 0x233bc0u: goto label_233bc0;
        case 0x233bc4u: goto label_233bc4;
        case 0x233bc8u: goto label_233bc8;
        case 0x233bccu: goto label_233bcc;
        case 0x233bd0u: goto label_233bd0;
        case 0x233bd4u: goto label_233bd4;
        case 0x233bd8u: goto label_233bd8;
        case 0x233bdcu: goto label_233bdc;
        case 0x233be0u: goto label_233be0;
        case 0x233be4u: goto label_233be4;
        case 0x233be8u: goto label_233be8;
        case 0x233becu: goto label_233bec;
        case 0x233bf0u: goto label_233bf0;
        case 0x233bf4u: goto label_233bf4;
        case 0x233bf8u: goto label_233bf8;
        case 0x233bfcu: goto label_233bfc;
        case 0x233c00u: goto label_233c00;
        case 0x233c04u: goto label_233c04;
        case 0x233c08u: goto label_233c08;
        case 0x233c0cu: goto label_233c0c;
        case 0x233c10u: goto label_233c10;
        case 0x233c14u: goto label_233c14;
        case 0x233c18u: goto label_233c18;
        case 0x233c1cu: goto label_233c1c;
        case 0x233c20u: goto label_233c20;
        case 0x233c24u: goto label_233c24;
        case 0x233c28u: goto label_233c28;
        case 0x233c2cu: goto label_233c2c;
        case 0x233c30u: goto label_233c30;
        case 0x233c34u: goto label_233c34;
        case 0x233c38u: goto label_233c38;
        case 0x233c3cu: goto label_233c3c;
        case 0x233c40u: goto label_233c40;
        case 0x233c44u: goto label_233c44;
        case 0x233c48u: goto label_233c48;
        case 0x233c4cu: goto label_233c4c;
        case 0x233c50u: goto label_233c50;
        case 0x233c54u: goto label_233c54;
        case 0x233c58u: goto label_233c58;
        case 0x233c5cu: goto label_233c5c;
        case 0x233c60u: goto label_233c60;
        case 0x233c64u: goto label_233c64;
        case 0x233c68u: goto label_233c68;
        case 0x233c6cu: goto label_233c6c;
        case 0x233c70u: goto label_233c70;
        case 0x233c74u: goto label_233c74;
        case 0x233c78u: goto label_233c78;
        case 0x233c7cu: goto label_233c7c;
        case 0x233c80u: goto label_233c80;
        case 0x233c84u: goto label_233c84;
        default: break;
    }

    ctx->pc = 0x232df0u;

label_232df0:
    // 0x232df0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x232df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_232df4:
    // 0x232df4: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x232df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_232df8:
    // 0x232df8: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x232df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_232dfc:
    // 0x232dfc: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x232dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_232e00:
    // 0x232e00: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x232e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_232e04:
    // 0x232e04: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x232e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_232e08:
    // 0x232e08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x232e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_232e0c:
    // 0x232e0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x232e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_232e10:
    // 0x232e10: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x232e10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_232e14:
    // 0x232e14: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_232e18:
    if (ctx->pc == 0x232E18u) {
        ctx->pc = 0x232E18u;
            // 0x232e18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x232E1Cu;
        goto label_232e1c;
    }
    ctx->pc = 0x232E14u;
    {
        const bool branch_taken_0x232e14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x232E18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232E14u;
            // 0x232e18: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232e14) {
            ctx->pc = 0x232E24u;
            goto label_232e24;
        }
    }
    ctx->pc = 0x232E1Cu;
label_232e1c:
    // 0x232e1c: 0x3c1001ed  lui         $s0, 0x1ED
    ctx->pc = 0x232e1cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)493 << 16));
label_232e20:
    // 0x232e20: 0x2610d5f0  addiu       $s0, $s0, -0x2A10
    ctx->pc = 0x232e20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956528));
label_232e24:
    // 0x232e24: 0xc08cb30  jal         func_232CC0
label_232e28:
    if (ctx->pc == 0x232E28u) {
        ctx->pc = 0x232E28u;
            // 0x232e28: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x232E2Cu;
        goto label_232e2c;
    }
    ctx->pc = 0x232E24u;
    SET_GPR_U32(ctx, 31, 0x232E2Cu);
    ctx->pc = 0x232E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232E24u;
            // 0x232e28: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232CC0u;
    if (runtime->hasFunction(0x232CC0u)) {
        auto targetFn = runtime->lookupFunction(0x232CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232E2Cu; }
        if (ctx->pc != 0x232E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuFrameRate__Fi_0x232cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232E2Cu; }
        if (ctx->pc != 0x232E2Cu) { return; }
    }
    ctx->pc = 0x232E2Cu;
label_232e2c:
    // 0x232e2c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x232e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_232e30:
    // 0x232e30: 0xc050dc8  jal         func_143720
label_232e34:
    if (ctx->pc == 0x232E34u) {
        ctx->pc = 0x232E34u;
            // 0x232e34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x232E38u;
        goto label_232e38;
    }
    ctx->pc = 0x232E30u;
    SET_GPR_U32(ctx, 31, 0x232E38u);
    ctx->pc = 0x232E34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232E30u;
            // 0x232e34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143720u;
    if (runtime->hasFunction(0x143720u)) {
        auto targetFn = runtime->lookupFunction(0x143720u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232E38u; }
        if (ctx->pc != 0x232E38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgActiveLighting__Fii_0x143720(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232E38u; }
        if (ctx->pc != 0x232E38u) { return; }
    }
    ctx->pc = 0x232E38u;
label_232e38:
    // 0x232e38: 0xc050dbc  jal         func_1436F0
label_232e3c:
    if (ctx->pc == 0x232E3Cu) {
        ctx->pc = 0x232E3Cu;
            // 0x232e3c: 0xaf82952c  sw          $v0, -0x6AD4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939948), GPR_U32(ctx, 2));
        ctx->pc = 0x232E40u;
        goto label_232e40;
    }
    ctx->pc = 0x232E38u;
    SET_GPR_U32(ctx, 31, 0x232E40u);
    ctx->pc = 0x232E3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232E38u;
            // 0x232e3c: 0xaf82952c  sw          $v0, -0x6AD4($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939948), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1436F0u;
    if (runtime->hasFunction(0x1436F0u)) {
        auto targetFn = runtime->lookupFunction(0x1436F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232E40u; }
        if (ctx->pc != 0x232E40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgInitActiveLighting__Fv_0x1436f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232E40u; }
        if (ctx->pc != 0x232E40u) { return; }
    }
    ctx->pc = 0x232E40u;
label_232e40:
    // 0x232e40: 0xc08cb34  jal         func_232CD0
label_232e44:
    if (ctx->pc == 0x232E44u) {
        ctx->pc = 0x232E44u;
            // 0x232e44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x232E48u;
        goto label_232e48;
    }
    ctx->pc = 0x232E40u;
    SET_GPR_U32(ctx, 31, 0x232E48u);
    ctx->pc = 0x232E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232E40u;
            // 0x232e44: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232CD0u;
    if (runtime->hasFunction(0x232CD0u)) {
        auto targetFn = runtime->lookupFunction(0x232CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232E48u; }
        if (ctx->pc != 0x232E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMenuKeyCtrlEnv__Fi_0x232cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232E48u; }
        if (ctx->pc != 0x232E48u) { return; }
    }
    ctx->pc = 0x232E48u;
label_232e48:
    // 0x232e48: 0xc0c2720  jal         func_309C80
label_232e4c:
    if (ctx->pc == 0x232E4Cu) {
        ctx->pc = 0x232E4Cu;
            // 0x232e4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x232E50u;
        goto label_232e50;
    }
    ctx->pc = 0x232E48u;
    SET_GPR_U32(ctx, 31, 0x232E50u);
    ctx->pc = 0x232E4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232E48u;
            // 0x232e4c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x309C80u;
    if (runtime->hasFunction(0x309C80u)) {
        auto targetFn = runtime->lookupFunction(0x309C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232E50u; }
        if (ctx->pc != 0x232E50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        PauseEnable__Fi_0x309c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232E50u; }
        if (ctx->pc != 0x232E50u) { return; }
    }
    ctx->pc = 0x232E50u;
label_232e50:
    // 0x232e50: 0xc08cb60  jal         func_232D80
label_232e54:
    if (ctx->pc == 0x232E54u) {
        ctx->pc = 0x232E54u;
            // 0x232e54: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x232E58u;
        goto label_232e58;
    }
    ctx->pc = 0x232E50u;
    SET_GPR_U32(ctx, 31, 0x232E58u);
    ctx->pc = 0x232E54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232E50u;
            // 0x232e54: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232D80u;
    if (runtime->hasFunction(0x232D80u)) {
        auto targetFn = runtime->lookupFunction(0x232D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232E58u; }
        if (ctx->pc != 0x232E58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DisablePadReset__Fi_0x232d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232E58u; }
        if (ctx->pc != 0x232E58u) { return; }
    }
    ctx->pc = 0x232E58u;
label_232e58:
    // 0x232e58: 0xaf809520  sw          $zero, -0x6AE0($gp)
    ctx->pc = 0x232e58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939936), GPR_U32(ctx, 0));
label_232e5c:
    // 0x232e5c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x232e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_232e60:
    // 0x232e60: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x232e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_232e64:
    // 0x232e64: 0x2484d4f0  addiu       $a0, $a0, -0x2B10
    ctx->pc = 0x232e64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956272));
label_232e68:
    // 0x232e68: 0x8c430024  lw          $v1, 0x24($v0)
    ctx->pc = 0x232e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 36)));
label_232e6c:
    // 0x232e6c: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x232e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_232e70:
    // 0x232e70: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x232e70u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_232e74:
    // 0x232e74: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x232e74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_232e78:
    // 0x232e78: 0xc04e79c  jal         func_139E70
label_232e7c:
    if (ctx->pc == 0x232E7Cu) {
        ctx->pc = 0x232E7Cu;
            // 0x232e7c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x232E80u;
        goto label_232e80;
    }
    ctx->pc = 0x232E78u;
    SET_GPR_U32(ctx, 31, 0x232E80u);
    ctx->pc = 0x232E7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232E78u;
            // 0x232e7c: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232E80u; }
        if (ctx->pc != 0x232E80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232E80u; }
        if (ctx->pc != 0x232E80u) { return; }
    }
    ctx->pc = 0x232E80u;
label_232e80:
    // 0x232e80: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x232e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_232e84:
    // 0x232e84: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x232e84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_232e88:
    // 0x232e88: 0xac20d544  sw          $zero, -0x2ABC($at)
    ctx->pc = 0x232e88u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956356), GPR_U32(ctx, 0));
label_232e8c:
    // 0x232e8c: 0x2484d4f0  addiu       $a0, $a0, -0x2B10
    ctx->pc = 0x232e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956272));
label_232e90:
    // 0x232e90: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x232e90u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_232e94:
    // 0x232e94: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x232e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_232e98:
    // 0x232e98: 0xc04e748  jal         func_139D20
label_232e9c:
    if (ctx->pc == 0x232E9Cu) {
        ctx->pc = 0x232E9Cu;
            // 0x232e9c: 0xac20d53c  sw          $zero, -0x2AC4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956348), GPR_U32(ctx, 0));
        ctx->pc = 0x232EA0u;
        goto label_232ea0;
    }
    ctx->pc = 0x232E98u;
    SET_GPR_U32(ctx, 31, 0x232EA0u);
    ctx->pc = 0x232E9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232E98u;
            // 0x232e9c: 0xac20d53c  sw          $zero, -0x2AC4($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 4294956348), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232EA0u; }
        if (ctx->pc != 0x232EA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232EA0u; }
        if (ctx->pc != 0x232EA0u) { return; }
    }
    ctx->pc = 0x232EA0u;
label_232ea0:
    // 0x232ea0: 0x240400d0  addiu       $a0, $zero, 0xD0
    ctx->pc = 0x232ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 208));
label_232ea4:
    // 0x232ea4: 0xc04e638  jal         func_1398E0
label_232ea8:
    if (ctx->pc == 0x232EA8u) {
        ctx->pc = 0x232EA8u;
            // 0x232ea8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x232EACu;
        goto label_232eac;
    }
    ctx->pc = 0x232EA4u;
    SET_GPR_U32(ctx, 31, 0x232EACu);
    ctx->pc = 0x232EA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232EA4u;
            // 0x232ea8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232EACu; }
        if (ctx->pc != 0x232EACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232EACu; }
        if (ctx->pc != 0x232EACu) { return; }
    }
    ctx->pc = 0x232EACu;
label_232eac:
    // 0x232eac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_232eb0:
    if (ctx->pc == 0x232EB0u) {
        ctx->pc = 0x232EB0u;
            // 0x232eb0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x232EB4u;
        goto label_232eb4;
    }
    ctx->pc = 0x232EACu;
    {
        const bool branch_taken_0x232eac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232EB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232EACu;
            // 0x232eb0: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232eac) {
            ctx->pc = 0x232EC4u;
            goto label_232ec4;
        }
    }
    ctx->pc = 0x232EB4u;
label_232eb4:
    // 0x232eb4: 0x3c024100  lui         $v0, 0x4100
    ctx->pc = 0x232eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16640 << 16));
label_232eb8:
    // 0x232eb8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x232eb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_232ebc:
    // 0x232ebc: 0xc04c58c  jal         func_131630
label_232ec0:
    if (ctx->pc == 0x232EC0u) {
        ctx->pc = 0x232EC0u;
            // 0x232ec0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x232EC4u;
        goto label_232ec4;
    }
    ctx->pc = 0x232EBCu;
    SET_GPR_U32(ctx, 31, 0x232EC4u);
    ctx->pc = 0x232EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232EBCu;
            // 0x232ec0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131630u;
    if (runtime->hasFunction(0x131630u)) {
        auto targetFn = runtime->lookupFunction(0x131630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232EC4u; }
        if (ctx->pc != 0x232EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9mgCCameraFf_0x131630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232EC4u; }
        if (ctx->pc != 0x232EC4u) { return; }
    }
    ctx->pc = 0x232EC4u;
label_232ec4:
    // 0x232ec4: 0xaf9194f4  sw          $s1, -0x6B0C($gp)
    ctx->pc = 0x232ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939892), GPR_U32(ctx, 17));
label_232ec8:
    // 0x232ec8: 0x8e390060  lw          $t9, 0x60($s1)
    ctx->pc = 0x232ec8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_232ecc:
    // 0x232ecc: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x232eccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_232ed0:
    // 0x232ed0: 0x320f809  jalr        $t9
label_232ed4:
    if (ctx->pc == 0x232ED4u) {
        ctx->pc = 0x232ED4u;
            // 0x232ed4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x232ED8u;
        goto label_232ed8;
    }
    ctx->pc = 0x232ED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x232ED8u);
        ctx->pc = 0x232ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232ED0u;
            // 0x232ed4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x232ED8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x232ED8u; }
            if (ctx->pc != 0x232ED8u) { return; }
        }
        }
    }
    ctx->pc = 0x232ED8u;
label_232ed8:
    // 0x232ed8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x232ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_232edc:
    // 0x232edc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x232edcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_232ee0:
    // 0x232ee0: 0xc08d150  jal         func_234540
label_232ee4:
    if (ctx->pc == 0x232EE4u) {
        ctx->pc = 0x232EE8u;
        goto label_232ee8;
    }
    ctx->pc = 0x232EE0u;
    SET_GPR_U32(ctx, 31, 0x232EE8u);
    ctx->pc = 0x234540u;
    if (runtime->hasFunction(0x234540u)) {
        auto targetFn = runtime->lookupFunction(0x234540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232EE8u; }
        if (ctx->pc != 0x232EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCamInit__Ff_0x234540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232EE8u; }
        if (ctx->pc != 0x232EE8u) { return; }
    }
    ctx->pc = 0x232EE8u;
label_232ee8:
    // 0x232ee8: 0x8f8294f4  lw          $v0, -0x6B0C($gp)
    ctx->pc = 0x232ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
label_232eec:
    // 0x232eec: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x232eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
label_232ef0:
    // 0x232ef0: 0xc050d98  jal         func_143660
label_232ef4:
    if (ctx->pc == 0x232EF4u) {
        ctx->pc = 0x232EF4u;
            // 0x232ef4: 0xac4300a4  sw          $v1, 0xA4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 164), GPR_U32(ctx, 3));
        ctx->pc = 0x232EF8u;
        goto label_232ef8;
    }
    ctx->pc = 0x232EF0u;
    SET_GPR_U32(ctx, 31, 0x232EF8u);
    ctx->pc = 0x232EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232EF0u;
            // 0x232ef4: 0xac4300a4  sw          $v1, 0xA4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 164), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143660u;
    if (runtime->hasFunction(0x143660u)) {
        auto targetFn = runtime->lookupFunction(0x143660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232EF8u; }
        if (ctx->pc != 0x232EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgGetProjection__Fv_0x143660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232EF8u; }
        if (ctx->pc != 0x232EF8u) { return; }
    }
    ctx->pc = 0x232EF8u;
label_232ef8:
    // 0x232ef8: 0x8f8294f4  lw          $v0, -0x6B0C($gp)
    ctx->pc = 0x232ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
label_232efc:
    // 0x232efc: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x232efcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
label_232f00:
    // 0x232f00: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x232f00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
label_232f04:
    // 0x232f04: 0x3c0642a0  lui         $a2, 0x42A0
    ctx->pc = 0x232f04u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)17056 << 16));
label_232f08:
    // 0x232f08: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x232f08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
label_232f0c:
    // 0x232f0c: 0x24840880  addiu       $a0, $a0, 0x880
    ctx->pc = 0x232f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2176));
label_232f10:
    // 0x232f10: 0x24a508c0  addiu       $a1, $a1, 0x8C0
    ctx->pc = 0x232f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2240));
label_232f14:
    // 0x232f14: 0xe44000a8  swc1        $f0, 0xA8($v0)
    ctx->pc = 0x232f14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 168), bits); }
label_232f18:
    // 0x232f18: 0x8f8294f4  lw          $v0, -0x6B0C($gp)
    ctx->pc = 0x232f18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
label_232f1c:
    // 0x232f1c: 0xac4600c0  sw          $a2, 0xC0($v0)
    ctx->pc = 0x232f1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 192), GPR_U32(ctx, 6));
label_232f20:
    // 0x232f20: 0x8f8294f4  lw          $v0, -0x6B0C($gp)
    ctx->pc = 0x232f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
label_232f24:
    // 0x232f24: 0xac4600c4  sw          $a2, 0xC4($v0)
    ctx->pc = 0x232f24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 196), GPR_U32(ctx, 6));
label_232f28:
    // 0x232f28: 0x8f8294f4  lw          $v0, -0x6B0C($gp)
    ctx->pc = 0x232f28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
label_232f2c:
    // 0x232f2c: 0xac4600c8  sw          $a2, 0xC8($v0)
    ctx->pc = 0x232f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 200), GPR_U32(ctx, 6));
label_232f30:
    // 0x232f30: 0x8f8294f4  lw          $v0, -0x6B0C($gp)
    ctx->pc = 0x232f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939892)));
label_232f34:
    // 0x232f34: 0xc050dd0  jal         func_143740
label_232f38:
    if (ctx->pc == 0x232F38u) {
        ctx->pc = 0x232F38u;
            // 0x232f38: 0xac4300cc  sw          $v1, 0xCC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 204), GPR_U32(ctx, 3));
        ctx->pc = 0x232F3Cu;
        goto label_232f3c;
    }
    ctx->pc = 0x232F34u;
    SET_GPR_U32(ctx, 31, 0x232F3Cu);
    ctx->pc = 0x232F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232F34u;
            // 0x232f38: 0xac4300cc  sw          $v1, 0xCC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 204), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x143740u;
    if (runtime->hasFunction(0x143740u)) {
        auto targetFn = runtime->lookupFunction(0x143740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232F3Cu; }
        if (ctx->pc != 0x232F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        mgSetLight__FPA4_fPA4_f_0x143740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232F3Cu; }
        if (ctx->pc != 0x232F3Cu) { return; }
    }
    ctx->pc = 0x232F3Cu;
label_232f3c:
    // 0x232f3c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x232f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_232f40:
    // 0x232f40: 0x2405005e  addiu       $a1, $zero, 0x5E
    ctx->pc = 0x232f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
label_232f44:
    // 0x232f44: 0xc04e748  jal         func_139D20
label_232f48:
    if (ctx->pc == 0x232F48u) {
        ctx->pc = 0x232F48u;
            // 0x232f48: 0x2484d4f0  addiu       $a0, $a0, -0x2B10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956272));
        ctx->pc = 0x232F4Cu;
        goto label_232f4c;
    }
    ctx->pc = 0x232F44u;
    SET_GPR_U32(ctx, 31, 0x232F4Cu);
    ctx->pc = 0x232F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232F44u;
            // 0x232f48: 0x2484d4f0  addiu       $a0, $a0, -0x2B10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232F4Cu; }
        if (ctx->pc != 0x232F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232F4Cu; }
        if (ctx->pc != 0x232F4Cu) { return; }
    }
    ctx->pc = 0x232F4Cu;
label_232f4c:
    // 0x232f4c: 0x240405bc  addiu       $a0, $zero, 0x5BC
    ctx->pc = 0x232f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1468));
label_232f50:
    // 0x232f50: 0xc04e638  jal         func_1398E0
label_232f54:
    if (ctx->pc == 0x232F54u) {
        ctx->pc = 0x232F54u;
            // 0x232f54: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x232F58u;
        goto label_232f58;
    }
    ctx->pc = 0x232F50u;
    SET_GPR_U32(ctx, 31, 0x232F58u);
    ctx->pc = 0x232F54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232F50u;
            // 0x232f54: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232F58u; }
        if (ctx->pc != 0x232F58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232F58u; }
        if (ctx->pc != 0x232F58u) { return; }
    }
    ctx->pc = 0x232F58u;
label_232f58:
    // 0x232f58: 0xaf829450  sw          $v0, -0x6BB0($gp)
    ctx->pc = 0x232f58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939728), GPR_U32(ctx, 2));
label_232f5c:
    // 0x232f5c: 0xc08b2c4  jal         func_22CB10
label_232f60:
    if (ctx->pc == 0x232F60u) {
        ctx->pc = 0x232F60u;
            // 0x232f60: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->pc = 0x232F64u;
        goto label_232f64;
    }
    ctx->pc = 0x232F5Cu;
    SET_GPR_U32(ctx, 31, 0x232F64u);
    ctx->pc = 0x232F60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232F5Cu;
            // 0x232f60: 0x8f849450  lw          $a0, -0x6BB0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939728)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22CB10u;
    if (runtime->hasFunction(0x22CB10u)) {
        auto targetFn = runtime->lookupFunction(0x22CB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232F64u; }
        if (ctx->pc != 0x232F64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitializeCMenuPosDataManage__18CMenuPosDataManageFv_0x22cb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232F64u; }
        if (ctx->pc != 0x232F64u) { return; }
    }
    ctx->pc = 0x232F64u;
label_232f64:
    // 0x232f64: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x232f64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_232f68:
    // 0x232f68: 0x24050018  addiu       $a1, $zero, 0x18
    ctx->pc = 0x232f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_232f6c:
    // 0x232f6c: 0xc04e748  jal         func_139D20
label_232f70:
    if (ctx->pc == 0x232F70u) {
        ctx->pc = 0x232F70u;
            // 0x232f70: 0x2484d4f0  addiu       $a0, $a0, -0x2B10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956272));
        ctx->pc = 0x232F74u;
        goto label_232f74;
    }
    ctx->pc = 0x232F6Cu;
    SET_GPR_U32(ctx, 31, 0x232F74u);
    ctx->pc = 0x232F70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232F6Cu;
            // 0x232f70: 0x2484d4f0  addiu       $a0, $a0, -0x2B10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232F74u; }
        if (ctx->pc != 0x232F74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232F74u; }
        if (ctx->pc != 0x232F74u) { return; }
    }
    ctx->pc = 0x232F74u;
label_232f74:
    // 0x232f74: 0x24040160  addiu       $a0, $zero, 0x160
    ctx->pc = 0x232f74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
label_232f78:
    // 0x232f78: 0xc04e638  jal         func_1398E0
label_232f7c:
    if (ctx->pc == 0x232F7Cu) {
        ctx->pc = 0x232F7Cu;
            // 0x232f7c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x232F80u;
        goto label_232f80;
    }
    ctx->pc = 0x232F78u;
    SET_GPR_U32(ctx, 31, 0x232F80u);
    ctx->pc = 0x232F7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232F78u;
            // 0x232f7c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232F80u; }
        if (ctx->pc != 0x232F80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232F80u; }
        if (ctx->pc != 0x232F80u) { return; }
    }
    ctx->pc = 0x232F80u;
label_232f80:
    // 0x232f80: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_232f84:
    if (ctx->pc == 0x232F84u) {
        ctx->pc = 0x232F84u;
            // 0x232f84: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x232F88u;
        goto label_232f88;
    }
    ctx->pc = 0x232F80u;
    {
        const bool branch_taken_0x232f80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232F84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232F80u;
            // 0x232f84: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232f80) {
            ctx->pc = 0x232FC4u;
            goto label_232fc4;
        }
    }
    ctx->pc = 0x232F88u;
label_232f88:
    // 0x232f88: 0x26240090  addiu       $a0, $s1, 0x90
    ctx->pc = 0x232f88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
label_232f8c:
    // 0x232f8c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x232f8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_232f90:
    // 0x232f90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x232f90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_232f94:
    // 0x232f94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x232f94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_232f98:
    // 0x232f98: 0xc04f8e4  jal         func_13E390
label_232f9c:
    if (ctx->pc == 0x232F9Cu) {
        ctx->pc = 0x232F9Cu;
            // 0x232f9c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x232FA0u;
        goto label_232fa0;
    }
    ctx->pc = 0x232F98u;
    SET_GPR_U32(ctx, 31, 0x232FA0u);
    ctx->pc = 0x232F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232F98u;
            // 0x232f9c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E390u;
    if (runtime->hasFunction(0x13E390u)) {
        auto targetFn = runtime->lookupFunction(0x13E390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232FA0u; }
        if (ctx->pc != 0x232FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_i_Fiiii_0x13e390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232FA0u; }
        if (ctx->pc != 0x232FA0u) { return; }
    }
    ctx->pc = 0x232FA0u;
label_232fa0:
    // 0x232fa0: 0xc065c24  jal         func_197090
label_232fa4:
    if (ctx->pc == 0x232FA4u) {
        ctx->pc = 0x232FA4u;
            // 0x232fa4: 0x262400c0  addiu       $a0, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->pc = 0x232FA8u;
        goto label_232fa8;
    }
    ctx->pc = 0x232FA0u;
    SET_GPR_U32(ctx, 31, 0x232FA8u);
    ctx->pc = 0x232FA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232FA0u;
            // 0x232fa4: 0x262400c0  addiu       $a0, $s1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x197090u;
    if (runtime->hasFunction(0x197090u)) {
        auto targetFn = runtime->lookupFunction(0x197090u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232FA8u; }
        if (ctx->pc != 0x232FA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__13CGameDataUsedFv_0x197090(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232FA8u; }
        if (ctx->pc != 0x232FA8u) { return; }
    }
    ctx->pc = 0x232FA8u;
label_232fa8:
    // 0x232fa8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x232fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_232fac:
    // 0x232fac: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232facu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_232fb0:
    // 0x232fb0: 0xa622012e  sh          $v0, 0x12E($s1)
    ctx->pc = 0x232fb0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 302), (uint16_t)GPR_U32(ctx, 2));
label_232fb4:
    // 0x232fb4: 0xa6200130  sh          $zero, 0x130($s1)
    ctx->pc = 0x232fb4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 304), (uint16_t)GPR_U32(ctx, 0));
label_232fb8:
    // 0x232fb8: 0xa6220132  sh          $v0, 0x132($s1)
    ctx->pc = 0x232fb8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 306), (uint16_t)GPR_U32(ctx, 2));
label_232fbc:
    // 0x232fbc: 0xc08ef24  jal         func_23BC90
label_232fc0:
    if (ctx->pc == 0x232FC0u) {
        ctx->pc = 0x232FC0u;
            // 0x232fc0: 0xa620012c  sh          $zero, 0x12C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 300), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x232FC4u;
        goto label_232fc4;
    }
    ctx->pc = 0x232FBCu;
    SET_GPR_U32(ctx, 31, 0x232FC4u);
    ctx->pc = 0x232FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232FBCu;
            // 0x232fc0: 0xa620012c  sh          $zero, 0x12C($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 300), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23BC90u;
    if (runtime->hasFunction(0x23BC90u)) {
        auto targetFn = runtime->lookupFunction(0x23BC90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232FC4u; }
        if (ctx->pc != 0x232FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__12CMenuKeyFuncFv_0x23bc90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232FC4u; }
        if (ctx->pc != 0x232FC4u) { return; }
    }
    ctx->pc = 0x232FC4u;
label_232fc4:
    // 0x232fc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x232fc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_232fc8:
    // 0x232fc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x232fc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_232fcc:
    // 0x232fcc: 0x24060160  addiu       $a2, $zero, 0x160
    ctx->pc = 0x232fccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
label_232fd0:
    // 0x232fd0: 0xc049c86  jal         func_127218
label_232fd4:
    if (ctx->pc == 0x232FD4u) {
        ctx->pc = 0x232FD4u;
            // 0x232fd4: 0xaf9194f8  sw          $s1, -0x6B08($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939896), GPR_U32(ctx, 17));
        ctx->pc = 0x232FD8u;
        goto label_232fd8;
    }
    ctx->pc = 0x232FD0u;
    SET_GPR_U32(ctx, 31, 0x232FD8u);
    ctx->pc = 0x232FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232FD0u;
            // 0x232fd4: 0xaf9194f8  sw          $s1, -0x6B08($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939896), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232FD8u; }
        if (ctx->pc != 0x232FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232FD8u; }
        if (ctx->pc != 0x232FD8u) { return; }
    }
    ctx->pc = 0x232FD8u;
label_232fd8:
    // 0x232fd8: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x232fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_232fdc:
    // 0x232fdc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x232fdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_232fe0:
    // 0x232fe0: 0xac430058  sw          $v1, 0x58($v0)
    ctx->pc = 0x232fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
label_232fe4:
    // 0x232fe4: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x232fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_232fe8:
    // 0x232fe8: 0xc065c30  jal         func_1970C0
label_232fec:
    if (ctx->pc == 0x232FECu) {
        ctx->pc = 0x232FECu;
            // 0x232fec: 0x244400c0  addiu       $a0, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->pc = 0x232FF0u;
        goto label_232ff0;
    }
    ctx->pc = 0x232FE8u;
    SET_GPR_U32(ctx, 31, 0x232FF0u);
    ctx->pc = 0x232FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232FE8u;
            // 0x232fec: 0x244400c0  addiu       $a0, $v0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1970C0u;
    if (runtime->hasFunction(0x1970C0u)) {
        auto targetFn = runtime->lookupFunction(0x1970C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232FF0u; }
        if (ctx->pc != 0x232FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Init__13CGameDataUsedFv_0x1970c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x232FF0u; }
        if (ctx->pc != 0x232FF0u) { return; }
    }
    ctx->pc = 0x232FF0u;
label_232ff0:
    // 0x232ff0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x232ff0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_232ff4:
    // 0x232ff4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x232ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_232ff8:
    // 0x232ff8: 0x8c23d514  lw          $v1, -0x2AEC($at)
    ctx->pc = 0x232ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956308)));
label_232ffc:
    // 0x232ffc: 0x2484d5c0  addiu       $a0, $a0, -0x2A40
    ctx->pc = 0x232ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956480));
label_233000:
    // 0x233000: 0x24060140  addiu       $a2, $zero, 0x140
    ctx->pc = 0x233000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_233004:
    // 0x233004: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x233004u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_233008:
    // 0x233008: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x233008u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_23300c:
    // 0x23300c: 0x8c22d510  lw          $v0, -0x2AF0($at)
    ctx->pc = 0x23300cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956304)));
label_233010:
    // 0x233010: 0xc04e79c  jal         func_139E70
label_233014:
    if (ctx->pc == 0x233014u) {
        ctx->pc = 0x233014u;
            // 0x233014: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x233018u;
        goto label_233018;
    }
    ctx->pc = 0x233010u;
    SET_GPR_U32(ctx, 31, 0x233018u);
    ctx->pc = 0x233014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233010u;
            // 0x233014: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E70u;
    if (runtime->hasFunction(0x139E70u)) {
        auto targetFn = runtime->lookupFunction(0x139E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233018u; }
        if (ctx->pc != 0x233018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        stSetBuffer__9mgCMemoryFP1i_0x139e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233018u; }
        if (ctx->pc != 0x233018u) { return; }
    }
    ctx->pc = 0x233018u;
label_233018:
    // 0x233018: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x233018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_23301c:
    // 0x23301c: 0x24050140  addiu       $a1, $zero, 0x140
    ctx->pc = 0x23301cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_233020:
    // 0x233020: 0xc04e748  jal         func_139D20
label_233024:
    if (ctx->pc == 0x233024u) {
        ctx->pc = 0x233024u;
            // 0x233024: 0x2484d4f0  addiu       $a0, $a0, -0x2B10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956272));
        ctx->pc = 0x233028u;
        goto label_233028;
    }
    ctx->pc = 0x233020u;
    SET_GPR_U32(ctx, 31, 0x233028u);
    ctx->pc = 0x233024u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233020u;
            // 0x233024: 0x2484d4f0  addiu       $a0, $a0, -0x2B10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233028u; }
        if (ctx->pc != 0x233028u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233028u; }
        if (ctx->pc != 0x233028u) { return; }
    }
    ctx->pc = 0x233028u;
label_233028:
    // 0x233028: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x233028u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_23302c:
    // 0x23302c: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x23302cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
label_233030:
    // 0x233030: 0x8c23d60c  lw          $v1, -0x29F4($at)
    ctx->pc = 0x233030u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956556)));
label_233034:
    // 0x233034: 0x26311ef0  addiu       $s1, $s1, 0x1EF0
    ctx->pc = 0x233034u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 7920));
label_233038:
    // 0x233038: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x233038u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_23303c:
    // 0x23303c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x23303cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_233040:
    // 0x233040: 0xa380978c  sb          $zero, -0x6874($gp)
    ctx->pc = 0x233040u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294940556), (uint8_t)GPR_U32(ctx, 0));
label_233044:
    // 0x233044: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x233044u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_233048:
    // 0x233048: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x233048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_23304c:
    // 0x23304c: 0xac4300a0  sw          $v1, 0xA0($v0)
    ctx->pc = 0x23304cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 3));
label_233050:
    // 0x233050: 0x8c23d62c  lw          $v1, -0x29D4($at)
    ctx->pc = 0x233050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956588)));
label_233054:
    // 0x233054: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x233054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_233058:
    // 0x233058: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x233058u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_23305c:
    // 0x23305c: 0xaf838300  sw          $v1, -0x7D00($gp)
    ctx->pc = 0x23305cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935296), GPR_U32(ctx, 3));
label_233060:
    // 0x233060: 0xac20d62c  sw          $zero, -0x29D4($at)
    ctx->pc = 0x233060u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956588), GPR_U32(ctx, 0));
label_233064:
    // 0x233064: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x233064u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_233068:
    // 0x233068: 0xac430060  sw          $v1, 0x60($v0)
    ctx->pc = 0x233068u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 3));
label_23306c:
    // 0x23306c: 0x8e030024  lw          $v1, 0x24($s0)
    ctx->pc = 0x23306cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_233070:
    // 0x233070: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x233070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_233074:
    // 0x233074: 0x1000000d  b           . + 4 + (0xD << 2)
label_233078:
    if (ctx->pc == 0x233078u) {
        ctx->pc = 0x233078u;
            // 0x233078: 0xac430064  sw          $v1, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
        ctx->pc = 0x23307Cu;
        goto label_23307c;
    }
    ctx->pc = 0x233074u;
    {
        const bool branch_taken_0x233074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233074u;
            // 0x233078: 0xac430064  sw          $v1, 0x64($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 100), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233074) {
            ctx->pc = 0x2330ACu;
            goto label_2330ac;
        }
    }
    ctx->pc = 0x23307Cu;
label_23307c:
    // 0x23307c: 0x8e03002c  lw          $v1, 0x2C($s0)
    ctx->pc = 0x23307cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_233080:
    // 0x233080: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x233080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_233084:
    // 0x233084: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x233084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_233088:
    // 0x233088: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x233088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_23308c:
    // 0x23308c: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x23308cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_233090:
    // 0x233090: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x233090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_233094:
    // 0x233094: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x233094u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_233098:
    // 0x233098: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x233098u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_23309c:
    // 0x23309c: 0xc04b950  jal         func_12E540
label_2330a0:
    if (ctx->pc == 0x2330A0u) {
        ctx->pc = 0x2330A0u;
            // 0x2330a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2330A4u;
        goto label_2330a4;
    }
    ctx->pc = 0x23309Cu;
    SET_GPR_U32(ctx, 31, 0x2330A4u);
    ctx->pc = 0x2330A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23309Cu;
            // 0x2330a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E540u;
    if (runtime->hasFunction(0x12E540u)) {
        auto targetFn = runtime->lookupFunction(0x12E540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2330A4u; }
        if (ctx->pc != 0x2330A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DeleteBlock__17mgCTextureManagerFi_0x12e540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2330A4u; }
        if (ctx->pc != 0x2330A4u) { return; }
    }
    ctx->pc = 0x2330A4u;
label_2330a4:
    // 0x2330a4: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x2330a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_2330a8:
    // 0x2330a8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2330a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2330ac:
    // 0x2330ac: 0x0  nop
    ctx->pc = 0x2330acu;
    // NOP
label_2330b0:
    // 0x2330b0: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x2330b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_2330b4:
    // 0x2330b4: 0x242082a  slt         $at, $s2, $v0
    ctx->pc = 0x2330b4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2330b8:
    // 0x2330b8: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_2330bc:
    if (ctx->pc == 0x2330BCu) {
        ctx->pc = 0x2330BCu;
            // 0x2330bc: 0x2a420010  slti        $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->pc = 0x2330C0u;
        goto label_2330c0;
    }
    ctx->pc = 0x2330B8u;
    {
        const bool branch_taken_0x2330b8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x2330BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2330B8u;
            // 0x2330bc: 0x2a420010  slti        $v0, $s2, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)16) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2330b8) {
            ctx->pc = 0x2330C8u;
            goto label_2330c8;
        }
    }
    ctx->pc = 0x2330C0u;
label_2330c0:
    // 0x2330c0: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_2330c4:
    if (ctx->pc == 0x2330C4u) {
        ctx->pc = 0x2330C8u;
        goto label_2330c8;
    }
    ctx->pc = 0x2330C0u;
    {
        const bool branch_taken_0x2330c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2330c0) {
            ctx->pc = 0x23307Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23307c;
        }
    }
    ctx->pc = 0x2330C8u;
label_2330c8:
    // 0x2330c8: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2330c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2330cc:
    // 0x2330cc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2330ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2330d0:
    // 0x2330d0: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2330d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2330d4:
    // 0x2330d4: 0xac43004c  sw          $v1, 0x4C($v0)
    ctx->pc = 0x2330d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 3));
label_2330d8:
    // 0x2330d8: 0xaf838304  sw          $v1, -0x7CFC($gp)
    ctx->pc = 0x2330d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935300), GPR_U32(ctx, 3));
label_2330dc:
    // 0x2330dc: 0xaf838308  sw          $v1, -0x7CF8($gp)
    ctx->pc = 0x2330dcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935304), GPR_U32(ctx, 3));
label_2330e0:
    // 0x2330e0: 0x86030028  lh          $v1, 0x28($s0)
    ctx->pc = 0x2330e0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 40)));
label_2330e4:
    // 0x2330e4: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2330e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2330e8:
    // 0x2330e8: 0xa4430050  sh          $v1, 0x50($v0)
    ctx->pc = 0x2330e8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 80), (uint16_t)GPR_U32(ctx, 3));
label_2330ec:
    // 0x2330ec: 0x8c22d5f8  lw          $v0, -0x2A08($at)
    ctx->pc = 0x2330ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956536)));
label_2330f0:
    // 0x2330f0: 0xc064220  jal         func_190880
label_2330f4:
    if (ctx->pc == 0x2330F4u) {
        ctx->pc = 0x2330F4u;
            // 0x2330f4: 0xaf829b6c  sw          $v0, -0x6494($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941548), GPR_U32(ctx, 2));
        ctx->pc = 0x2330F8u;
        goto label_2330f8;
    }
    ctx->pc = 0x2330F0u;
    SET_GPR_U32(ctx, 31, 0x2330F8u);
    ctx->pc = 0x2330F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2330F0u;
            // 0x2330f4: 0xaf829b6c  sw          $v0, -0x6494($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294941548), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190880u;
    if (runtime->hasFunction(0x190880u)) {
        auto targetFn = runtime->lookupFunction(0x190880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2330F8u; }
        if (ctx->pc != 0x2330F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSaveData__Fv_0x190880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2330F8u; }
        if (ctx->pc != 0x2330F8u) { return; }
    }
    ctx->pc = 0x2330F8u;
label_2330f8:
    // 0x2330f8: 0xaf8294a8  sw          $v0, -0x6B58($gp)
    ctx->pc = 0x2330f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939816), GPR_U32(ctx, 2));
label_2330fc:
    // 0x2330fc: 0x8f8494a8  lw          $a0, -0x6B58($gp)
    ctx->pc = 0x2330fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939816)));
label_233100:
    // 0x233100: 0xaf8094ac  sw          $zero, -0x6B54($gp)
    ctx->pc = 0x233100u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939820), GPR_U32(ctx, 0));
label_233104:
    // 0x233104: 0xaf8094b4  sw          $zero, -0x6B4C($gp)
    ctx->pc = 0x233104u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939828), GPR_U32(ctx, 0));
label_233108:
    // 0x233108: 0xaf8094b0  sw          $zero, -0x6B50($gp)
    ctx->pc = 0x233108u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939824), GPR_U32(ctx, 0));
label_23310c:
    // 0x23310c: 0xaf8094b8  sw          $zero, -0x6B48($gp)
    ctx->pc = 0x23310cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939832), GPR_U32(ctx, 0));
label_233110:
    // 0x233110: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
label_233114:
    if (ctx->pc == 0x233114u) {
        ctx->pc = 0x233114u;
            // 0x233114: 0xaf8094bc  sw          $zero, -0x6B44($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939836), GPR_U32(ctx, 0));
        ctx->pc = 0x233118u;
        goto label_233118;
    }
    ctx->pc = 0x233110u;
    {
        const bool branch_taken_0x233110 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x233114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233110u;
            // 0x233114: 0xaf8094bc  sw          $zero, -0x6B44($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939836), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233110) {
            ctx->pc = 0x233174u;
            goto label_233174;
        }
    }
    ctx->pc = 0x233118u;
label_233118:
    // 0x233118: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x233118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_23311c:
    // 0x23311c: 0x3421d2a0  ori         $at, $at, 0xD2A0
    ctx->pc = 0x23311cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)53920);
label_233120:
    // 0x233120: 0x811021  addu        $v0, $a0, $at
    ctx->pc = 0x233120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_233124:
    // 0x233124: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x233124u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_233128:
    // 0x233128: 0xaf8294ac  sw          $v0, -0x6B54($gp)
    ctx->pc = 0x233128u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939820), GPR_U32(ctx, 2));
label_23312c:
    // 0x23312c: 0x3421c574  ori         $at, $at, 0xC574
    ctx->pc = 0x23312cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50548);
label_233130:
    // 0x233130: 0x811821  addu        $v1, $a0, $at
    ctx->pc = 0x233130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_233134:
    // 0x233134: 0x3c010006  lui         $at, 0x6
    ctx->pc = 0x233134u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)6 << 16));
label_233138:
    // 0x233138: 0xaf8394b4  sw          $v1, -0x6B4C($gp)
    ctx->pc = 0x233138u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939828), GPR_U32(ctx, 3));
label_23313c:
    // 0x23313c: 0x342140c0  ori         $at, $at, 0x40C0
    ctx->pc = 0x23313cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)16576);
label_233140:
    // 0x233140: 0x811821  addu        $v1, $a0, $at
    ctx->pc = 0x233140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_233144:
    // 0x233144: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x233144u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_233148:
    // 0x233148: 0xaf8394b0  sw          $v1, -0x6B50($gp)
    ctx->pc = 0x233148u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939824), GPR_U32(ctx, 3));
label_23314c:
    // 0x23314c: 0x3421c5b4  ori         $at, $at, 0xC5B4
    ctx->pc = 0x23314cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)50612);
label_233150:
    // 0x233150: 0x811821  addu        $v1, $a0, $at
    ctx->pc = 0x233150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 1)));
label_233154:
    // 0x233154: 0xaf8394b8  sw          $v1, -0x6B48($gp)
    ctx->pc = 0x233154u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939832), GPR_U32(ctx, 3));
label_233158:
    // 0x233158: 0x3c010004  lui         $at, 0x4
    ctx->pc = 0x233158u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4 << 16));
label_23315c:
    // 0x23315c: 0x24434958  addiu       $v1, $v0, 0x4958
    ctx->pc = 0x23315cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 18776));
label_233160:
    // 0x233160: 0x410821  addu        $at, $v0, $at
    ctx->pc = 0x233160u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 1)));
label_233164:
    // 0x233164: 0x84224d96  lh          $v0, 0x4D96($at)
    ctx->pc = 0x233164u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 19862)));
label_233168:
    // 0x233168: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x233168u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_23316c:
    // 0x23316c: 0xaf8394bc  sw          $v1, -0x6B44($gp)
    ctx->pc = 0x23316cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939836), GPR_U32(ctx, 3));
label_233170:
    // 0x233170: 0xac22d628  sw          $v0, -0x29D8($at)
    ctx->pc = 0x233170u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294956584), GPR_U32(ctx, 2));
label_233174:
    // 0x233174: 0x8f8394ac  lw          $v1, -0x6B54($gp)
    ctx->pc = 0x233174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
label_233178:
    // 0x233178: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x233178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_23317c:
    // 0x23317c: 0xc06421c  jal         func_190870
label_233180:
    if (ctx->pc == 0x233180u) {
        ctx->pc = 0x233180u;
            // 0x233180: 0xac4300a0  sw          $v1, 0xA0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 3));
        ctx->pc = 0x233184u;
        goto label_233184;
    }
    ctx->pc = 0x23317Cu;
    SET_GPR_U32(ctx, 31, 0x233184u);
    ctx->pc = 0x233180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23317Cu;
            // 0x233180: 0xac4300a0  sw          $v1, 0xA0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x190870u;
    if (runtime->hasFunction(0x190870u)) {
        auto targetFn = runtime->lookupFunction(0x190870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233184u; }
        if (ctx->pc != 0x233184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMainScene__Fv_0x190870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233184u; }
        if (ctx->pc != 0x233184u) { return; }
    }
    ctx->pc = 0x233184u;
label_233184:
    // 0x233184: 0xaf8294a4  sw          $v0, -0x6B5C($gp)
    ctx->pc = 0x233184u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939812), GPR_U32(ctx, 2));
label_233188:
    // 0x233188: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x233188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_23318c:
    // 0x23318c: 0x8c422e60  lw          $v0, 0x2E60($v0)
    ctx->pc = 0x23318cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11872)));
label_233190:
    // 0x233190: 0xa78294c0  sh          $v0, -0x6B40($gp)
    ctx->pc = 0x233190u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294939840), (uint16_t)GPR_U32(ctx, 2));
label_233194:
    // 0x233194: 0xc0b49b8  jal         func_2D26E0
label_233198:
    if (ctx->pc == 0x233198u) {
        ctx->pc = 0x233198u;
            // 0x233198: 0x878494c0  lh          $a0, -0x6B40($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939840)));
        ctx->pc = 0x23319Cu;
        goto label_23319c;
    }
    ctx->pc = 0x233194u;
    SET_GPR_U32(ctx, 31, 0x23319Cu);
    ctx->pc = 0x233198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233194u;
            // 0x233198: 0x878494c0  lh          $a0, -0x6B40($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939840)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D26E0u;
    if (runtime->hasFunction(0x2D26E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D26E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23319Cu; }
        if (ctx->pc != 0x23319Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapType__Fi_0x2d26e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23319Cu; }
        if (ctx->pc != 0x23319Cu) { return; }
    }
    ctx->pc = 0x23319Cu;
label_23319c:
    // 0x23319c: 0x8f8494a4  lw          $a0, -0x6B5C($gp)
    ctx->pc = 0x23319cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_2331a0:
    // 0x2331a0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2331a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2331a4:
    // 0x2331a4: 0xc0a0ed8  jal         func_283B60
label_2331a8:
    if (ctx->pc == 0x2331A8u) {
        ctx->pc = 0x2331A8u;
            // 0x2331a8: 0xa78294c4  sh          $v0, -0x6B3C($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294939844), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x2331ACu;
        goto label_2331ac;
    }
    ctx->pc = 0x2331A4u;
    SET_GPR_U32(ctx, 31, 0x2331ACu);
    ctx->pc = 0x2331A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2331A4u;
            // 0x2331a8: 0xa78294c4  sh          $v0, -0x6B3C($gp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 28), 4294939844), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x283B60u;
    if (runtime->hasFunction(0x283B60u)) {
        auto targetFn = runtime->lookupFunction(0x283B60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2331ACu; }
        if (ctx->pc != 0x2331ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharacter__6CSceneFi_0x283b60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2331ACu; }
        if (ctx->pc != 0x2331ACu) { return; }
    }
    ctx->pc = 0x2331ACu;
label_2331ac:
    // 0x2331ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2331acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2331b0:
    // 0x2331b0: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_2331b4:
    if (ctx->pc == 0x2331B4u) {
        ctx->pc = 0x2331B8u;
        goto label_2331b8;
    }
    ctx->pc = 0x2331B0u;
    {
        const bool branch_taken_0x2331b0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2331b0) {
            ctx->pc = 0x2331E8u;
            goto label_2331e8;
        }
    }
    ctx->pc = 0x2331B8u;
label_2331b8:
    // 0x2331b8: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2331b8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2331bc:
    // 0x2331bc: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x2331bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
label_2331c0:
    // 0x2331c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2331c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2331c4:
    // 0x2331c4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2331c4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2331c8:
    // 0x2331c8: 0x320f809  jalr        $t9
label_2331cc:
    if (ctx->pc == 0x2331CCu) {
        ctx->pc = 0x2331CCu;
            // 0x2331cc: 0x24a5d690  addiu       $a1, $a1, -0x2970 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956688));
        ctx->pc = 0x2331D0u;
        goto label_2331d0;
    }
    ctx->pc = 0x2331C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2331D0u);
        ctx->pc = 0x2331CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2331C8u;
            // 0x2331cc: 0x24a5d690  addiu       $a1, $a1, -0x2970 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956688));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2331D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2331D0u; }
            if (ctx->pc != 0x2331D0u) { return; }
        }
        }
    }
    ctx->pc = 0x2331D0u;
label_2331d0:
    // 0x2331d0: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x2331d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2331d4:
    // 0x2331d4: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x2331d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
label_2331d8:
    // 0x2331d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2331d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2331dc:
    // 0x2331dc: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2331dcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2331e0:
    // 0x2331e0: 0x320f809  jalr        $t9
label_2331e4:
    if (ctx->pc == 0x2331E4u) {
        ctx->pc = 0x2331E4u;
            // 0x2331e4: 0x24a5d6a0  addiu       $a1, $a1, -0x2960 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956704));
        ctx->pc = 0x2331E8u;
        goto label_2331e8;
    }
    ctx->pc = 0x2331E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2331E8u);
        ctx->pc = 0x2331E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2331E0u;
            // 0x2331e4: 0x24a5d6a0  addiu       $a1, $a1, -0x2960 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956704));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2331E8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2331E8u; }
            if (ctx->pc != 0x2331E8u) { return; }
        }
        }
    }
    ctx->pc = 0x2331E8u;
label_2331e8:
    // 0x2331e8: 0xc068614  jal         func_1A1850
label_2331ec:
    if (ctx->pc == 0x2331ECu) {
        ctx->pc = 0x2331F0u;
        goto label_2331f0;
    }
    ctx->pc = 0x2331E8u;
    SET_GPR_U32(ctx, 31, 0x2331F0u);
    ctx->pc = 0x1A1850u;
    if (runtime->hasFunction(0x1A1850u)) {
        auto targetFn = runtime->lookupFunction(0x1A1850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2331F0u; }
        if (ctx->pc != 0x2331F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        UserDataRefresh__Fv_0x1a1850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2331F0u; }
        if (ctx->pc != 0x2331F0u) { return; }
    }
    ctx->pc = 0x2331F0u;
label_2331f0:
    // 0x2331f0: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x2331f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_2331f4:
    // 0x2331f4: 0xc4402f6c  lwc1        $f0, 0x2F6C($v0)
    ctx->pc = 0x2331f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_2331f8:
    // 0x2331f8: 0xc08d344  jal         func_234D10
label_2331fc:
    if (ctx->pc == 0x2331FCu) {
        ctx->pc = 0x2331FCu;
            // 0x2331fc: 0xe78094e8  swc1        $f0, -0x6B18($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939880), bits); }
        ctx->pc = 0x233200u;
        goto label_233200;
    }
    ctx->pc = 0x2331F8u;
    SET_GPR_U32(ctx, 31, 0x233200u);
    ctx->pc = 0x2331FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2331F8u;
            // 0x2331fc: 0xe78094e8  swc1        $f0, -0x6B18($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939880), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x234D10u;
    if (runtime->hasFunction(0x234D10u)) {
        auto targetFn = runtime->lookupFunction(0x234D10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233200u; }
        if (ctx->pc != 0x233200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MakeMenuTopic__Fv_0x234d10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233200u; }
        if (ctx->pc != 0x233200u) { return; }
    }
    ctx->pc = 0x233200u;
label_233200:
    // 0x233200: 0xc08cac4  jal         func_232B10
label_233204:
    if (ctx->pc == 0x233204u) {
        ctx->pc = 0x233204u;
            // 0x233204: 0x24040068  addiu       $a0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->pc = 0x233208u;
        goto label_233208;
    }
    ctx->pc = 0x233200u;
    SET_GPR_U32(ctx, 31, 0x233208u);
    ctx->pc = 0x233204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233200u;
            // 0x233204: 0x24040068  addiu       $a0, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232B10u;
    if (runtime->hasFunction(0x232B10u)) {
        auto targetFn = runtime->lookupFunction(0x232B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233208u; }
        if (ctx->pc != 0x233208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBitFlagMenu__Fi_0x232b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233208u; }
        if (ctx->pc != 0x233208u) { return; }
    }
    ctx->pc = 0x233208u;
label_233208:
    // 0x233208: 0x14400026  bnez        $v0, . + 4 + (0x26 << 2)
label_23320c:
    if (ctx->pc == 0x23320Cu) {
        ctx->pc = 0x23320Cu;
            // 0x23320c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x233210u;
        goto label_233210;
    }
    ctx->pc = 0x233208u;
    {
        const bool branch_taken_0x233208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23320Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233208u;
            // 0x23320c: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233208) {
            ctx->pc = 0x2332A4u;
            goto label_2332a4;
        }
    }
    ctx->pc = 0x233210u;
label_233210:
    // 0x233210: 0xc08cac4  jal         func_232B10
label_233214:
    if (ctx->pc == 0x233214u) {
        ctx->pc = 0x233218u;
        goto label_233218;
    }
    ctx->pc = 0x233210u;
    SET_GPR_U32(ctx, 31, 0x233218u);
    ctx->pc = 0x232B10u;
    if (runtime->hasFunction(0x232B10u)) {
        auto targetFn = runtime->lookupFunction(0x232B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233218u; }
        if (ctx->pc != 0x233218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBitFlagMenu__Fi_0x232b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233218u; }
        if (ctx->pc != 0x233218u) { return; }
    }
    ctx->pc = 0x233218u;
label_233218:
    // 0x233218: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x233218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_23321c:
    // 0x23321c: 0x14430015  bne         $v0, $v1, . + 4 + (0x15 << 2)
label_233220:
    if (ctx->pc == 0x233220u) {
        ctx->pc = 0x233220u;
            // 0x233220: 0x24040066  addiu       $a0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->pc = 0x233224u;
        goto label_233224;
    }
    ctx->pc = 0x23321Cu;
    {
        const bool branch_taken_0x23321c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x233220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23321Cu;
            // 0x233220: 0x24040066  addiu       $a0, $zero, 0x66 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23321c) {
            ctx->pc = 0x233274u;
            goto label_233274;
        }
    }
    ctx->pc = 0x233224u;
label_233224:
    // 0x233224: 0x3c024192  lui         $v0, 0x4192
    ctx->pc = 0x233224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16786 << 16));
label_233228:
    // 0x233228: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x233228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_23322c:
    // 0x23322c: 0xc08cad4  jal         func_232B50
label_233230:
    if (ctx->pc == 0x233230u) {
        ctx->pc = 0x233230u;
            // 0x233230: 0xaf8294e8  sw          $v0, -0x6B18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939880), GPR_U32(ctx, 2));
        ctx->pc = 0x233234u;
        goto label_233234;
    }
    ctx->pc = 0x23322Cu;
    SET_GPR_U32(ctx, 31, 0x233234u);
    ctx->pc = 0x233230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23322Cu;
            // 0x233230: 0xaf8294e8  sw          $v0, -0x6B18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939880), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232B50u;
    if (runtime->hasFunction(0x232B50u)) {
        auto targetFn = runtime->lookupFunction(0x232B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233234u; }
        if (ctx->pc != 0x233234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckShortFlagMenu__Fi_0x232b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233234u; }
        if (ctx->pc != 0x233234u) { return; }
    }
    ctx->pc = 0x233234u;
label_233234:
    // 0x233234: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x233234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233238:
    // 0x233238: 0x14430005  bne         $v0, $v1, . + 4 + (0x5 << 2)
label_23323c:
    if (ctx->pc == 0x23323Cu) {
        ctx->pc = 0x23323Cu;
            // 0x23323c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x233240u;
        goto label_233240;
    }
    ctx->pc = 0x233238u;
    {
        const bool branch_taken_0x233238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23323Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233238u;
            // 0x23323c: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233238) {
            ctx->pc = 0x233250u;
            goto label_233250;
        }
    }
    ctx->pc = 0x233240u;
label_233240:
    // 0x233240: 0x3c0341a7  lui         $v1, 0x41A7
    ctx->pc = 0x233240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16807 << 16));
label_233244:
    // 0x233244: 0x34635c29  ori         $v1, $v1, 0x5C29
    ctx->pc = 0x233244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)23593);
label_233248:
    // 0x233248: 0xaf8394e8  sw          $v1, -0x6B18($gp)
    ctx->pc = 0x233248u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939880), GPR_U32(ctx, 3));
label_23324c:
    // 0x23324c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x23324cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_233250:
    // 0x233250: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_233254:
    if (ctx->pc == 0x233254u) {
        ctx->pc = 0x233254u;
            // 0x233254: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x233258u;
        goto label_233258;
    }
    ctx->pc = 0x233250u;
    {
        const bool branch_taken_0x233250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x233254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233250u;
            // 0x233254: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233250) {
            ctx->pc = 0x233264u;
            goto label_233264;
        }
    }
    ctx->pc = 0x233258u;
label_233258:
    // 0x233258: 0x3c0341aa  lui         $v1, 0x41AA
    ctx->pc = 0x233258u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16810 << 16));
label_23325c:
    // 0x23325c: 0xaf8394e8  sw          $v1, -0x6B18($gp)
    ctx->pc = 0x23325cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939880), GPR_U32(ctx, 3));
label_233260:
    // 0x233260: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x233260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_233264:
    // 0x233264: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
label_233268:
    if (ctx->pc == 0x233268u) {
        ctx->pc = 0x233268u;
            // 0x233268: 0x3c0241ac  lui         $v0, 0x41AC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16812 << 16));
        ctx->pc = 0x23326Cu;
        goto label_23326c;
    }
    ctx->pc = 0x233264u;
    {
        const bool branch_taken_0x233264 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x233268u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233264u;
            // 0x233268: 0x3c0241ac  lui         $v0, 0x41AC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16812 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233264) {
            ctx->pc = 0x2332A4u;
            goto label_2332a4;
        }
    }
    ctx->pc = 0x23326Cu;
label_23326c:
    // 0x23326c: 0x1000000d  b           . + 4 + (0xD << 2)
label_233270:
    if (ctx->pc == 0x233270u) {
        ctx->pc = 0x233270u;
            // 0x233270: 0xaf8294e8  sw          $v0, -0x6B18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939880), GPR_U32(ctx, 2));
        ctx->pc = 0x233274u;
        goto label_233274;
    }
    ctx->pc = 0x23326Cu;
    {
        const bool branch_taken_0x23326c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23326Cu;
            // 0x233270: 0xaf8294e8  sw          $v0, -0x6B18($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939880), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23326c) {
            ctx->pc = 0x2332A4u;
            goto label_2332a4;
        }
    }
    ctx->pc = 0x233274u;
label_233274:
    // 0x233274: 0xc08cac4  jal         func_232B10
label_233278:
    if (ctx->pc == 0x233278u) {
        ctx->pc = 0x23327Cu;
        goto label_23327c;
    }
    ctx->pc = 0x233274u;
    SET_GPR_U32(ctx, 31, 0x23327Cu);
    ctx->pc = 0x232B10u;
    if (runtime->hasFunction(0x232B10u)) {
        auto targetFn = runtime->lookupFunction(0x232B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23327Cu; }
        if (ctx->pc != 0x23327Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBitFlagMenu__Fi_0x232b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23327Cu; }
        if (ctx->pc != 0x23327Cu) { return; }
    }
    ctx->pc = 0x23327Cu;
label_23327c:
    // 0x23327c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x23327cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233280:
    // 0x233280: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_233284:
    if (ctx->pc == 0x233284u) {
        ctx->pc = 0x233284u;
            // 0x233284: 0x24040067  addiu       $a0, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->pc = 0x233288u;
        goto label_233288;
    }
    ctx->pc = 0x233280u;
    {
        const bool branch_taken_0x233280 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x233284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233280u;
            // 0x233284: 0x24040067  addiu       $a0, $zero, 0x67 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 103));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233280) {
            ctx->pc = 0x23328Cu;
            goto label_23328c;
        }
    }
    ctx->pc = 0x233288u;
label_233288:
    // 0x233288: 0xaf8094e8  sw          $zero, -0x6B18($gp)
    ctx->pc = 0x233288u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939880), GPR_U32(ctx, 0));
label_23328c:
    // 0x23328c: 0xc08cac4  jal         func_232B10
label_233290:
    if (ctx->pc == 0x233290u) {
        ctx->pc = 0x233294u;
        goto label_233294;
    }
    ctx->pc = 0x23328Cu;
    SET_GPR_U32(ctx, 31, 0x233294u);
    ctx->pc = 0x232B10u;
    if (runtime->hasFunction(0x232B10u)) {
        auto targetFn = runtime->lookupFunction(0x232B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233294u; }
        if (ctx->pc != 0x233294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBitFlagMenu__Fi_0x232b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233294u; }
        if (ctx->pc != 0x233294u) { return; }
    }
    ctx->pc = 0x233294u;
label_233294:
    // 0x233294: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x233294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233298:
    // 0x233298: 0x14430002  bne         $v0, $v1, . + 4 + (0x2 << 2)
label_23329c:
    if (ctx->pc == 0x23329Cu) {
        ctx->pc = 0x23329Cu;
            // 0x23329c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->pc = 0x2332A0u;
        goto label_2332a0;
    }
    ctx->pc = 0x233298u;
    {
        const bool branch_taken_0x233298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x23329Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233298u;
            // 0x23329c: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233298) {
            ctx->pc = 0x2332A4u;
            goto label_2332a4;
        }
    }
    ctx->pc = 0x2332A0u;
label_2332a0:
    // 0x2332a0: 0xaf8294e8  sw          $v0, -0x6B18($gp)
    ctx->pc = 0x2332a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939880), GPR_U32(ctx, 2));
label_2332a4:
    // 0x2332a4: 0xc0a98d4  jal         func_2A6350
label_2332a8:
    if (ctx->pc == 0x2332A8u) {
        ctx->pc = 0x2332A8u;
            // 0x2332a8: 0x8f8494a4  lw          $a0, -0x6B5C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
        ctx->pc = 0x2332ACu;
        goto label_2332ac;
    }
    ctx->pc = 0x2332A4u;
    SET_GPR_U32(ctx, 31, 0x2332ACu);
    ctx->pc = 0x2332A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2332A4u;
            // 0x2332a8: 0x8f8494a4  lw          $a0, -0x6B5C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A6350u;
    if (runtime->hasFunction(0x2A6350u)) {
        auto targetFn = runtime->lookupFunction(0x2A6350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2332ACu; }
        if (ctx->pc != 0x2332ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetVolBGM__6CSceneFv_0x2a6350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2332ACu; }
        if (ctx->pc != 0x2332ACu) { return; }
    }
    ctx->pc = 0x2332ACu;
label_2332ac:
    // 0x2332ac: 0x878494c0  lh          $a0, -0x6B40($gp)
    ctx->pc = 0x2332acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939840)));
label_2332b0:
    // 0x2332b0: 0xc0b4a20  jal         func_2D2880
label_2332b4:
    if (ctx->pc == 0x2332B4u) {
        ctx->pc = 0x2332B4u;
            // 0x2332b4: 0xaf829514  sw          $v0, -0x6AEC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939924), GPR_U32(ctx, 2));
        ctx->pc = 0x2332B8u;
        goto label_2332b8;
    }
    ctx->pc = 0x2332B0u;
    SET_GPR_U32(ctx, 31, 0x2332B8u);
    ctx->pc = 0x2332B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2332B0u;
            // 0x2332b4: 0xaf829514  sw          $v0, -0x6AEC($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939924), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2880u;
    if (runtime->hasFunction(0x2D2880u)) {
        auto targetFn = runtime->lookupFunction(0x2D2880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2332B8u; }
        if (ctx->pc != 0x2332B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapTitle__Fi_0x2d2880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2332B8u; }
        if (ctx->pc != 0x2332B8u) { return; }
    }
    ctx->pc = 0x2332B8u;
label_2332b8:
    // 0x2332b8: 0xaf8294e4  sw          $v0, -0x6B1C($gp)
    ctx->pc = 0x2332b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939876), GPR_U32(ctx, 2));
label_2332bc:
    // 0x2332bc: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x2332bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_2332c0:
    // 0x2332c0: 0x878294c0  lh          $v0, -0x6B40($gp)
    ctx->pc = 0x2332c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 28), 4294939840)));
label_2332c4:
    // 0x2332c4: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
label_2332c8:
    if (ctx->pc == 0x2332C8u) {
        ctx->pc = 0x2332C8u;
            // 0x2332c8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->pc = 0x2332CCu;
        goto label_2332cc;
    }
    ctx->pc = 0x2332C4u;
    {
        const bool branch_taken_0x2332c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2332C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2332C4u;
            // 0x2332c8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2332c4) {
            ctx->pc = 0x2332F0u;
            goto label_2332f0;
        }
    }
    ctx->pc = 0x2332CCu;
label_2332cc:
    // 0x2332cc: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x2332ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_2332d0:
    // 0x2332d0: 0x8c442e64  lw          $a0, 0x2E64($v0)
    ctx->pc = 0x2332d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 11876)));
label_2332d4:
    // 0x2332d4: 0x4810002  bgez        $a0, . + 4 + (0x2 << 2)
label_2332d8:
    if (ctx->pc == 0x2332D8u) {
        ctx->pc = 0x2332DCu;
        goto label_2332dc;
    }
    ctx->pc = 0x2332D4u;
    {
        const bool branch_taken_0x2332d4 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x2332d4) {
            ctx->pc = 0x2332E0u;
            goto label_2332e0;
        }
    }
    ctx->pc = 0x2332DCu;
label_2332dc:
    // 0x2332dc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2332dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2332e0:
    // 0x2332e0: 0xc0b4a20  jal         func_2D2880
label_2332e4:
    if (ctx->pc == 0x2332E4u) {
        ctx->pc = 0x2332E8u;
        goto label_2332e8;
    }
    ctx->pc = 0x2332E0u;
    SET_GPR_U32(ctx, 31, 0x2332E8u);
    ctx->pc = 0x2D2880u;
    if (runtime->hasFunction(0x2D2880u)) {
        auto targetFn = runtime->lookupFunction(0x2D2880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2332E8u; }
        if (ctx->pc != 0x2332E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMapTitle__Fi_0x2d2880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2332E8u; }
        if (ctx->pc != 0x2332E8u) { return; }
    }
    ctx->pc = 0x2332E8u;
label_2332e8:
    // 0x2332e8: 0xaf8294e4  sw          $v0, -0x6B1C($gp)
    ctx->pc = 0x2332e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939876), GPR_U32(ctx, 2));
label_2332ec:
    // 0x2332ec: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2332ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2332f0:
    // 0x2332f0: 0xc06354c  jal         func_18D530
label_2332f4:
    if (ctx->pc == 0x2332F4u) {
        ctx->pc = 0x2332F8u;
        goto label_2332f8;
    }
    ctx->pc = 0x2332F0u;
    SET_GPR_U32(ctx, 31, 0x2332F8u);
    ctx->pc = 0x18D530u;
    if (runtime->hasFunction(0x18D530u)) {
        auto targetFn = runtime->lookupFunction(0x18D530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2332F8u; }
        if (ctx->pc != 0x2332F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndGetPortVol__Fi_0x18d530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2332F8u; }
        if (ctx->pc != 0x2332F8u) { return; }
    }
    ctx->pc = 0x2332F8u;
label_2332f8:
    // 0x2332f8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2332f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2332fc:
    // 0x2332fc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x2332fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_233300:
    // 0x233300: 0xc063508  jal         func_18D420
label_233304:
    if (ctx->pc == 0x233304u) {
        ctx->pc = 0x233304u;
            // 0x233304: 0xe78094ec  swc1        $f0, -0x6B14($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939884), bits); }
        ctx->pc = 0x233308u;
        goto label_233308;
    }
    ctx->pc = 0x233300u;
    SET_GPR_U32(ctx, 31, 0x233308u);
    ctx->pc = 0x233304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233300u;
            // 0x233304: 0xe78094ec  swc1        $f0, -0x6B14($gp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 28), 4294939884), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D420u;
    if (runtime->hasFunction(0x18D420u)) {
        auto targetFn = runtime->lookupFunction(0x18D420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233308u; }
        if (ctx->pc != 0x233308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sndSetPortVol__Fif_0x18d420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233308u; }
        if (ctx->pc != 0x233308u) { return; }
    }
    ctx->pc = 0x233308u;
label_233308:
    // 0x233308: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x233308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_23330c:
    // 0x23330c: 0x24050013  addiu       $a1, $zero, 0x13
    ctx->pc = 0x23330cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_233310:
    // 0x233310: 0xc04e748  jal         func_139D20
label_233314:
    if (ctx->pc == 0x233314u) {
        ctx->pc = 0x233314u;
            // 0x233314: 0x2484d4f0  addiu       $a0, $a0, -0x2B10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956272));
        ctx->pc = 0x233318u;
        goto label_233318;
    }
    ctx->pc = 0x233310u;
    SET_GPR_U32(ctx, 31, 0x233318u);
    ctx->pc = 0x233314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233310u;
            // 0x233314: 0x2484d4f0  addiu       $a0, $a0, -0x2B10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233318u; }
        if (ctx->pc != 0x233318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233318u; }
        if (ctx->pc != 0x233318u) { return; }
    }
    ctx->pc = 0x233318u;
label_233318:
    // 0x233318: 0x24040110  addiu       $a0, $zero, 0x110
    ctx->pc = 0x233318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_23331c:
    // 0x23331c: 0xc04e638  jal         func_1398E0
label_233320:
    if (ctx->pc == 0x233320u) {
        ctx->pc = 0x233320u;
            // 0x233320: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233324u;
        goto label_233324;
    }
    ctx->pc = 0x23331Cu;
    SET_GPR_U32(ctx, 31, 0x233324u);
    ctx->pc = 0x233320u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23331Cu;
            // 0x233320: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233324u; }
        if (ctx->pc != 0x233324u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233324u; }
        if (ctx->pc != 0x233324u) { return; }
    }
    ctx->pc = 0x233324u;
label_233324:
    // 0x233324: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_233328:
    if (ctx->pc == 0x233328u) {
        ctx->pc = 0x233328u;
            // 0x233328: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23332Cu;
        goto label_23332c;
    }
    ctx->pc = 0x233324u;
    {
        const bool branch_taken_0x233324 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x233328u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233324u;
            // 0x233328: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233324) {
            ctx->pc = 0x233334u;
            goto label_233334;
        }
    }
    ctx->pc = 0x23332Cu;
label_23332c:
    // 0x23332c: 0xc04d0e8  jal         func_1343A0
label_233330:
    if (ctx->pc == 0x233330u) {
        ctx->pc = 0x233334u;
        goto label_233334;
    }
    ctx->pc = 0x23332Cu;
    SET_GPR_U32(ctx, 31, 0x233334u);
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233334u; }
        if (ctx->pc != 0x233334u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233334u; }
        if (ctx->pc != 0x233334u) { return; }
    }
    ctx->pc = 0x233334u;
label_233334:
    // 0x233334: 0xc065a18  jal         func_196860
label_233338:
    if (ctx->pc == 0x233338u) {
        ctx->pc = 0x233338u;
            // 0x233338: 0xaf8294d8  sw          $v0, -0x6B28($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939864), GPR_U32(ctx, 2));
        ctx->pc = 0x23333Cu;
        goto label_23333c;
    }
    ctx->pc = 0x233334u;
    SET_GPR_U32(ctx, 31, 0x23333Cu);
    ctx->pc = 0x233338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233334u;
            // 0x233338: 0xaf8294d8  sw          $v0, -0x6B28($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939864), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196860u;
    if (runtime->hasFunction(0x196860u)) {
        auto targetFn = runtime->lookupFunction(0x196860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23333Cu; }
        if (ctx->pc != 0x23333Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetSystemMesBuffer__Fv_0x196860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23333Cu; }
        if (ctx->pc != 0x23333Cu) { return; }
    }
    ctx->pc = 0x23333Cu;
label_23333c:
    // 0x23333c: 0xc08d1bc  jal         func_2346F0
label_233340:
    if (ctx->pc == 0x233340u) {
        ctx->pc = 0x233340u;
            // 0x233340: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233344u;
        goto label_233344;
    }
    ctx->pc = 0x23333Cu;
    SET_GPR_U32(ctx, 31, 0x233344u);
    ctx->pc = 0x233340u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23333Cu;
            // 0x233340: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2346F0u;
    if (runtime->hasFunction(0x2346F0u)) {
        auto targetFn = runtime->lookupFunction(0x2346F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233344u; }
        if (ctx->pc != 0x233344u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetMenuMainMessageBuffer__Fv_0x2346f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233344u; }
        if (ctx->pc != 0x233344u) { return; }
    }
    ctx->pc = 0x233344u;
label_233344:
    // 0x233344: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x233344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_233348:
    // 0x233348: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x233348u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23334c:
    // 0x23334c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x23334cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_233350:
    // 0x233350: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x233350u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_233354:
    // 0x233354: 0xc04e780  jal         func_139E00
label_233358:
    if (ctx->pc == 0x233358u) {
        ctx->pc = 0x233358u;
            // 0x233358: 0x2484d4f0  addiu       $a0, $a0, -0x2B10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956272));
        ctx->pc = 0x23335Cu;
        goto label_23335c;
    }
    ctx->pc = 0x233354u;
    SET_GPR_U32(ctx, 31, 0x23335Cu);
    ctx->pc = 0x233358u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233354u;
            // 0x233358: 0x2484d4f0  addiu       $a0, $a0, -0x2B10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23335Cu; }
        if (ctx->pc != 0x23335Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23335Cu; }
        if (ctx->pc != 0x23335Cu) { return; }
    }
    ctx->pc = 0x23335Cu;
label_23335c:
    // 0x23335c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x23335cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_233360:
    // 0x233360: 0x2405022f  addiu       $a1, $zero, 0x22F
    ctx->pc = 0x233360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 559));
label_233364:
    // 0x233364: 0xc04e748  jal         func_139D20
label_233368:
    if (ctx->pc == 0x233368u) {
        ctx->pc = 0x233368u;
            // 0x233368: 0x2484d4f0  addiu       $a0, $a0, -0x2B10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956272));
        ctx->pc = 0x23336Cu;
        goto label_23336c;
    }
    ctx->pc = 0x233364u;
    SET_GPR_U32(ctx, 31, 0x23336Cu);
    ctx->pc = 0x233368u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233364u;
            // 0x233368: 0x2484d4f0  addiu       $a0, $a0, -0x2B10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139D20u;
    if (runtime->hasFunction(0x139D20u)) {
        auto targetFn = runtime->lookupFunction(0x139D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23336Cu; }
        if (ctx->pc != 0x23336Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Alloc__9mgCMemoryFi_0x139d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23336Cu; }
        if (ctx->pc != 0x23336Cu) { return; }
    }
    ctx->pc = 0x23336Cu;
label_23336c:
    // 0x23336c: 0x240422d0  addiu       $a0, $zero, 0x22D0
    ctx->pc = 0x23336cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8912));
label_233370:
    // 0x233370: 0xc04e638  jal         func_1398E0
label_233374:
    if (ctx->pc == 0x233374u) {
        ctx->pc = 0x233374u;
            // 0x233374: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233378u;
        goto label_233378;
    }
    ctx->pc = 0x233370u;
    SET_GPR_U32(ctx, 31, 0x233378u);
    ctx->pc = 0x233374u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233370u;
            // 0x233374: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1398E0u;
    if (runtime->hasFunction(0x1398E0u)) {
        auto targetFn = runtime->lookupFunction(0x1398E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233378u; }
        if (ctx->pc != 0x233378u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___nw__FUiP1_0x1398e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233378u; }
        if (ctx->pc != 0x233378u) { return; }
    }
    ctx->pc = 0x233378u;
label_233378:
    // 0x233378: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_23337c:
    if (ctx->pc == 0x23337Cu) {
        ctx->pc = 0x23337Cu;
            // 0x23337c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233380u;
        goto label_233380;
    }
    ctx->pc = 0x233378u;
    {
        const bool branch_taken_0x233378 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23337Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233378u;
            // 0x23337c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233378) {
            ctx->pc = 0x233388u;
            goto label_233388;
        }
    }
    ctx->pc = 0x233380u;
label_233380:
    // 0x233380: 0xc0874b4  jal         func_21D2D0
label_233384:
    if (ctx->pc == 0x233384u) {
        ctx->pc = 0x233388u;
        goto label_233388;
    }
    ctx->pc = 0x233380u;
    SET_GPR_U32(ctx, 31, 0x233388u);
    ctx->pc = 0x21D2D0u;
    if (runtime->hasFunction(0x21D2D0u)) {
        auto targetFn = runtime->lookupFunction(0x21D2D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233388u; }
        if (ctx->pc != 0x233388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__7CDC2MesFv_0x21d2d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233388u; }
        if (ctx->pc != 0x233388u) { return; }
    }
    ctx->pc = 0x233388u;
label_233388:
    // 0x233388: 0x3c0301ed  lui         $v1, 0x1ED
    ctx->pc = 0x233388u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)493 << 16));
label_23338c:
    // 0x23338c: 0x2463ca40  addiu       $v1, $v1, -0x35C0
    ctx->pc = 0x23338cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953536));
label_233390:
    // 0x233390: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x233390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_233394:
    // 0x233394: 0x752821  addu        $a1, $v1, $s5
    ctx->pc = 0x233394u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_233398:
    // 0x233398: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x233398u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_23339c:
    // 0x23339c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x23339cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2333a0:
    // 0x2333a0: 0x8cb20000  lw          $s2, 0x0($a1)
    ctx->pc = 0x2333a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_2333a4:
    // 0x2333a4: 0xae4000b4  sw          $zero, 0xB4($s2)
    ctx->pc = 0x2333a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 180), GPR_U32(ctx, 0));
label_2333a8:
    // 0x2333a8: 0xae4000d4  sw          $zero, 0xD4($s2)
    ctx->pc = 0x2333a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 212), GPR_U32(ctx, 0));
label_2333ac:
    // 0x2333ac: 0xae4000d8  sw          $zero, 0xD8($s2)
    ctx->pc = 0x2333acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 216), GPR_U32(ctx, 0));
label_2333b0:
    // 0x2333b0: 0xae4000dc  sw          $zero, 0xDC($s2)
    ctx->pc = 0x2333b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 220), GPR_U32(ctx, 0));
label_2333b4:
    // 0x2333b4: 0xae4000e0  sw          $zero, 0xE0($s2)
    ctx->pc = 0x2333b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 224), GPR_U32(ctx, 0));
label_2333b8:
    // 0x2333b8: 0xae4000e4  sw          $zero, 0xE4($s2)
    ctx->pc = 0x2333b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 228), GPR_U32(ctx, 0));
label_2333bc:
    // 0x2333bc: 0x0  nop
    ctx->pc = 0x2333bcu;
    // NOP
label_2333c0:
    // 0x2333c0: 0x2442821  addu        $a1, $s2, $a0
    ctx->pc = 0x2333c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_2333c4:
    // 0x2333c4: 0xaca000e8  sw          $zero, 0xE8($a1)
    ctx->pc = 0x2333c4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 232), GPR_U32(ctx, 0));
label_2333c8:
    // 0x2333c8: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2333c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_2333cc:
    // 0x2333cc: 0xaca000ec  sw          $zero, 0xEC($a1)
    ctx->pc = 0x2333ccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 236), GPR_U32(ctx, 0));
label_2333d0:
    // 0x2333d0: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x2333d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
label_2333d4:
    // 0x2333d4: 0xaca000f0  sw          $zero, 0xF0($a1)
    ctx->pc = 0x2333d4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 240), GPR_U32(ctx, 0));
label_2333d8:
    // 0x2333d8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2333d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_2333dc:
    // 0x2333dc: 0xaca000f4  sw          $zero, 0xF4($a1)
    ctx->pc = 0x2333dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 244), GPR_U32(ctx, 0));
label_2333e0:
    // 0x2333e0: 0xaca000f8  sw          $zero, 0xF8($a1)
    ctx->pc = 0x2333e0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 248), GPR_U32(ctx, 0));
label_2333e4:
    // 0x2333e4: 0xaca000fc  sw          $zero, 0xFC($a1)
    ctx->pc = 0x2333e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 252), GPR_U32(ctx, 0));
label_2333e8:
    // 0x2333e8: 0xaca00100  sw          $zero, 0x100($a1)
    ctx->pc = 0x2333e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 256), GPR_U32(ctx, 0));
label_2333ec:
    // 0x2333ec: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
label_2333f0:
    if (ctx->pc == 0x2333F0u) {
        ctx->pc = 0x2333F0u;
            // 0x2333f0: 0xaca00104  sw          $zero, 0x104($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 260), GPR_U32(ctx, 0));
        ctx->pc = 0x2333F4u;
        goto label_2333f4;
    }
    ctx->pc = 0x2333ECu;
    {
        const bool branch_taken_0x2333ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2333F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2333ECu;
            // 0x2333f0: 0xaca00104  sw          $zero, 0x104($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 260), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2333ec) {
            ctx->pc = 0x2333BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2333bc;
        }
    }
    ctx->pc = 0x2333F4u;
label_2333f4:
    // 0x2333f4: 0xae400128  sw          $zero, 0x128($s2)
    ctx->pc = 0x2333f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 296), GPR_U32(ctx, 0));
label_2333f8:
    // 0x2333f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2333f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2333fc:
    // 0x2333fc: 0xae40012c  sw          $zero, 0x12C($s2)
    ctx->pc = 0x2333fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 300), GPR_U32(ctx, 0));
label_233400:
    // 0x233400: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x233400u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_233404:
    // 0x233404: 0xae400188  sw          $zero, 0x188($s2)
    ctx->pc = 0x233404u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 392), GPR_U32(ctx, 0));
label_233408:
    // 0x233408: 0xc0547dc  jal         func_151F70
label_23340c:
    if (ctx->pc == 0x23340Cu) {
        ctx->pc = 0x23340Cu;
            // 0x23340c: 0xae42018c  sw          $v0, 0x18C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 396), GPR_U32(ctx, 2));
        ctx->pc = 0x233410u;
        goto label_233410;
    }
    ctx->pc = 0x233408u;
    SET_GPR_U32(ctx, 31, 0x233410u);
    ctx->pc = 0x23340Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233408u;
            // 0x23340c: 0xae42018c  sw          $v0, 0x18C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 396), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x151F70u;
    if (runtime->hasFunction(0x151F70u)) {
        auto targetFn = runtime->lookupFunction(0x151F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233410u; }
        if (ctx->pc != 0x233410u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetDrawSpeedDef__6ClsMesFv_0x151f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233410u; }
        if (ctx->pc != 0x233410u) { return; }
    }
    ctx->pc = 0x233410u;
label_233410:
    // 0x233410: 0xe64001b8  swc1        $f0, 0x1B8($s2)
    ctx->pc = 0x233410u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 440), bits); }
label_233414:
    // 0x233414: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x233414u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_233418:
    // 0x233418: 0xae4001c0  sw          $zero, 0x1C0($s2)
    ctx->pc = 0x233418u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 448), GPR_U32(ctx, 0));
label_23341c:
    // 0x23341c: 0xae4001cc  sw          $zero, 0x1CC($s2)
    ctx->pc = 0x23341cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 460), GPR_U32(ctx, 0));
label_233420:
    // 0x233420: 0xae4001d0  sw          $zero, 0x1D0($s2)
    ctx->pc = 0x233420u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 464), GPR_U32(ctx, 0));
label_233424:
    // 0x233424: 0xae4001d4  sw          $zero, 0x1D4($s2)
    ctx->pc = 0x233424u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 468), GPR_U32(ctx, 0));
label_233428:
    // 0x233428: 0xae4001d8  sw          $zero, 0x1D8($s2)
    ctx->pc = 0x233428u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 472), GPR_U32(ctx, 0));
label_23342c:
    // 0x23342c: 0xc0557f0  jal         func_155FC0
label_233430:
    if (ctx->pc == 0x233430u) {
        ctx->pc = 0x233430u;
            // 0x233430: 0xae4001dc  sw          $zero, 0x1DC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 476), GPR_U32(ctx, 0));
        ctx->pc = 0x233434u;
        goto label_233434;
    }
    ctx->pc = 0x23342Cu;
    SET_GPR_U32(ctx, 31, 0x233434u);
    ctx->pc = 0x233430u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23342Cu;
            // 0x233430: 0xae4001dc  sw          $zero, 0x1DC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 476), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155FC0u;
    if (runtime->hasFunction(0x155FC0u)) {
        auto targetFn = runtime->lookupFunction(0x155FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233434u; }
        if (ctx->pc != 0x233434u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMesWinTbl__6ClsMesFv_0x155fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233434u; }
        if (ctx->pc != 0x233434u) { return; }
    }
    ctx->pc = 0x233434u;
label_233434:
    // 0x233434: 0x8e4517d0  lw          $a1, 0x17D0($s2)
    ctx->pc = 0x233434u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 6096)));
label_233438:
    // 0x233438: 0x2404001e  addiu       $a0, $zero, 0x1E
    ctx->pc = 0x233438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_23343c:
    // 0x23343c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x23343cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_233440:
    // 0x233440: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x233440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_233444:
    // 0x233444: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x233444u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_233448:
    // 0x233448: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x233448u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23344c:
    // 0x23344c: 0xae4517d4  sw          $a1, 0x17D4($s2)
    ctx->pc = 0x23344cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6100), GPR_U32(ctx, 5));
label_233450:
    // 0x233450: 0xae4017d8  sw          $zero, 0x17D8($s2)
    ctx->pc = 0x233450u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6104), GPR_U32(ctx, 0));
label_233454:
    // 0x233454: 0xae4017dc  sw          $zero, 0x17DC($s2)
    ctx->pc = 0x233454u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6108), GPR_U32(ctx, 0));
label_233458:
    // 0x233458: 0xae4417e0  sw          $a0, 0x17E0($s2)
    ctx->pc = 0x233458u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6112), GPR_U32(ctx, 4));
label_23345c:
    // 0x23345c: 0xae4317e4  sw          $v1, 0x17E4($s2)
    ctx->pc = 0x23345cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6116), GPR_U32(ctx, 3));
label_233460:
    // 0x233460: 0xae4017e8  sw          $zero, 0x17E8($s2)
    ctx->pc = 0x233460u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6120), GPR_U32(ctx, 0));
label_233464:
    // 0x233464: 0xa2421800  sb          $v0, 0x1800($s2)
    ctx->pc = 0x233464u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6144), (uint8_t)GPR_U32(ctx, 2));
label_233468:
    // 0x233468: 0x2541021  addu        $v0, $s2, $s4
    ctx->pc = 0x233468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
label_23346c:
    // 0x23346c: 0x24441801  addiu       $a0, $v0, 0x1801
    ctx->pc = 0x23346cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 6145));
label_233470:
    // 0x233470: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x233470u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_233474:
    // 0x233474: 0xc049c86  jal         func_127218
label_233478:
    if (ctx->pc == 0x233478u) {
        ctx->pc = 0x233478u;
            // 0x233478: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x23347Cu;
        goto label_23347c;
    }
    ctx->pc = 0x233474u;
    SET_GPR_U32(ctx, 31, 0x23347Cu);
    ctx->pc = 0x233478u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233474u;
            // 0x233478: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127218u;
    if (runtime->hasFunction(0x127218u)) {
        auto targetFn = runtime->lookupFunction(0x127218u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23347Cu; }
        if (ctx->pc != 0x23347Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        memset_0x127218(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23347Cu; }
        if (ctx->pc != 0x23347Cu) { return; }
    }
    ctx->pc = 0x23347Cu;
label_23347c:
    // 0x23347c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x23347cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_233480:
    // 0x233480: 0x2a620010  slti        $v0, $s3, 0x10
    ctx->pc = 0x233480u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)16) ? 1 : 0);
label_233484:
    // 0x233484: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_233488:
    if (ctx->pc == 0x233488u) {
        ctx->pc = 0x233488u;
            // 0x233488: 0x26940020  addiu       $s4, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->pc = 0x23348Cu;
        goto label_23348c;
    }
    ctx->pc = 0x233484u;
    {
        const bool branch_taken_0x233484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233484u;
            // 0x233488: 0x26940020  addiu       $s4, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233484) {
            ctx->pc = 0x233468u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233468;
        }
    }
    ctx->pc = 0x23348Cu;
label_23348c:
    // 0x23348c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x23348cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_233490:
    // 0x233490: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x233490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_233494:
    // 0x233494: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x233494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_233498:
    // 0x233498: 0x2453021  addu        $a2, $s2, $a1
    ctx->pc = 0x233498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_23349c:
    // 0x23349c: 0xacc31a04  sw          $v1, 0x1A04($a2)
    ctx->pc = 0x23349cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6660), GPR_U32(ctx, 3));
label_2334a0:
    // 0x2334a0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2334a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_2334a4:
    // 0x2334a4: 0xacc31a08  sw          $v1, 0x1A08($a2)
    ctx->pc = 0x2334a4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6664), GPR_U32(ctx, 3));
label_2334a8:
    // 0x2334a8: 0x28820010  slti        $v0, $a0, 0x10
    ctx->pc = 0x2334a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)16) ? 1 : 0);
label_2334ac:
    // 0x2334ac: 0xacc31a0c  sw          $v1, 0x1A0C($a2)
    ctx->pc = 0x2334acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6668), GPR_U32(ctx, 3));
label_2334b0:
    // 0x2334b0: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2334b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_2334b4:
    // 0x2334b4: 0xacc31a10  sw          $v1, 0x1A10($a2)
    ctx->pc = 0x2334b4u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6672), GPR_U32(ctx, 3));
label_2334b8:
    // 0x2334b8: 0xacc31a14  sw          $v1, 0x1A14($a2)
    ctx->pc = 0x2334b8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6676), GPR_U32(ctx, 3));
label_2334bc:
    // 0x2334bc: 0xacc31a18  sw          $v1, 0x1A18($a2)
    ctx->pc = 0x2334bcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6680), GPR_U32(ctx, 3));
label_2334c0:
    // 0x2334c0: 0xacc31a1c  sw          $v1, 0x1A1C($a2)
    ctx->pc = 0x2334c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 6684), GPR_U32(ctx, 3));
label_2334c4:
    // 0x2334c4: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_2334c8:
    if (ctx->pc == 0x2334C8u) {
        ctx->pc = 0x2334C8u;
            // 0x2334c8: 0xacc31a20  sw          $v1, 0x1A20($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 6688), GPR_U32(ctx, 3));
        ctx->pc = 0x2334CCu;
        goto label_2334cc;
    }
    ctx->pc = 0x2334C4u;
    {
        const bool branch_taken_0x2334c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2334C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2334C4u;
            // 0x2334c8: 0xacc31a20  sw          $v1, 0x1A20($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 6688), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2334c4) {
            ctx->pc = 0x233498u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233498;
        }
    }
    ctx->pc = 0x2334CCu;
label_2334cc:
    // 0x2334cc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x2334ccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2334d0:
    // 0x2334d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2334d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2334d4:
    // 0x2334d4: 0x0  nop
    ctx->pc = 0x2334d4u;
    // NOP
label_2334d8:
    // 0x2334d8: 0x2442821  addu        $a1, $s2, $a0
    ctx->pc = 0x2334d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_2334dc:
    // 0x2334dc: 0xaca01a44  sw          $zero, 0x1A44($a1)
    ctx->pc = 0x2334dcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6724), GPR_U32(ctx, 0));
label_2334e0:
    // 0x2334e0: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x2334e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
label_2334e4:
    // 0x2334e4: 0xaca01a84  sw          $zero, 0x1A84($a1)
    ctx->pc = 0x2334e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6788), GPR_U32(ctx, 0));
label_2334e8:
    // 0x2334e8: 0x28620010  slti        $v0, $v1, 0x10
    ctx->pc = 0x2334e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)16) ? 1 : 0);
label_2334ec:
    // 0x2334ec: 0xaca01a48  sw          $zero, 0x1A48($a1)
    ctx->pc = 0x2334ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6728), GPR_U32(ctx, 0));
label_2334f0:
    // 0x2334f0: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x2334f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_2334f4:
    // 0x2334f4: 0xaca01a88  sw          $zero, 0x1A88($a1)
    ctx->pc = 0x2334f4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6792), GPR_U32(ctx, 0));
label_2334f8:
    // 0x2334f8: 0xaca01a4c  sw          $zero, 0x1A4C($a1)
    ctx->pc = 0x2334f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6732), GPR_U32(ctx, 0));
label_2334fc:
    // 0x2334fc: 0xaca01a8c  sw          $zero, 0x1A8C($a1)
    ctx->pc = 0x2334fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6796), GPR_U32(ctx, 0));
label_233500:
    // 0x233500: 0xaca01a50  sw          $zero, 0x1A50($a1)
    ctx->pc = 0x233500u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6736), GPR_U32(ctx, 0));
label_233504:
    // 0x233504: 0xaca01a90  sw          $zero, 0x1A90($a1)
    ctx->pc = 0x233504u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6800), GPR_U32(ctx, 0));
label_233508:
    // 0x233508: 0xaca01a54  sw          $zero, 0x1A54($a1)
    ctx->pc = 0x233508u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6740), GPR_U32(ctx, 0));
label_23350c:
    // 0x23350c: 0xaca01a94  sw          $zero, 0x1A94($a1)
    ctx->pc = 0x23350cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6804), GPR_U32(ctx, 0));
label_233510:
    // 0x233510: 0xaca01a58  sw          $zero, 0x1A58($a1)
    ctx->pc = 0x233510u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6744), GPR_U32(ctx, 0));
label_233514:
    // 0x233514: 0xaca01a98  sw          $zero, 0x1A98($a1)
    ctx->pc = 0x233514u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6808), GPR_U32(ctx, 0));
label_233518:
    // 0x233518: 0xaca01a5c  sw          $zero, 0x1A5C($a1)
    ctx->pc = 0x233518u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6748), GPR_U32(ctx, 0));
label_23351c:
    // 0x23351c: 0xaca01a9c  sw          $zero, 0x1A9C($a1)
    ctx->pc = 0x23351cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6812), GPR_U32(ctx, 0));
label_233520:
    // 0x233520: 0xaca01a60  sw          $zero, 0x1A60($a1)
    ctx->pc = 0x233520u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 6752), GPR_U32(ctx, 0));
label_233524:
    // 0x233524: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_233528:
    if (ctx->pc == 0x233528u) {
        ctx->pc = 0x233528u;
            // 0x233528: 0xaca01aa0  sw          $zero, 0x1AA0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 6816), GPR_U32(ctx, 0));
        ctx->pc = 0x23352Cu;
        goto label_23352c;
    }
    ctx->pc = 0x233524u;
    {
        const bool branch_taken_0x233524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x233528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233524u;
            // 0x233528: 0xaca01aa0  sw          $zero, 0x1AA0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 6816), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233524) {
            ctx->pc = 0x2334D4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2334d4;
        }
    }
    ctx->pc = 0x23352Cu;
label_23352c:
    // 0x23352c: 0xae401ac4  sw          $zero, 0x1AC4($s2)
    ctx->pc = 0x23352cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6852), GPR_U32(ctx, 0));
label_233530:
    // 0x233530: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x233530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233534:
    // 0x233534: 0xae401ac8  sw          $zero, 0x1AC8($s2)
    ctx->pc = 0x233534u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6856), GPR_U32(ctx, 0));
label_233538:
    // 0x233538: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x233538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_23353c:
    // 0x23353c: 0xae421acc  sw          $v0, 0x1ACC($s2)
    ctx->pc = 0x23353cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6860), GPR_U32(ctx, 2));
label_233540:
    // 0x233540: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x233540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_233544:
    // 0x233544: 0xae401ad0  sw          $zero, 0x1AD0($s2)
    ctx->pc = 0x233544u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6864), GPR_U32(ctx, 0));
label_233548:
    // 0x233548: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x233548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23354c:
    // 0x23354c: 0xae401ad4  sw          $zero, 0x1AD4($s2)
    ctx->pc = 0x23354cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6868), GPR_U32(ctx, 0));
label_233550:
    // 0x233550: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x233550u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_233554:
    // 0x233554: 0xae401ad8  sw          $zero, 0x1AD8($s2)
    ctx->pc = 0x233554u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6872), GPR_U32(ctx, 0));
label_233558:
    // 0x233558: 0xae431adc  sw          $v1, 0x1ADC($s2)
    ctx->pc = 0x233558u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6876), GPR_U32(ctx, 3));
label_23355c:
    // 0x23355c: 0xae431ae0  sw          $v1, 0x1AE0($s2)
    ctx->pc = 0x23355cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6880), GPR_U32(ctx, 3));
label_233560:
    // 0x233560: 0xae431ae4  sw          $v1, 0x1AE4($s2)
    ctx->pc = 0x233560u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6884), GPR_U32(ctx, 3));
label_233564:
    // 0x233564: 0xae401ae8  sw          $zero, 0x1AE8($s2)
    ctx->pc = 0x233564u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6888), GPR_U32(ctx, 0));
label_233568:
    // 0x233568: 0xae401aec  sw          $zero, 0x1AEC($s2)
    ctx->pc = 0x233568u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6892), GPR_U32(ctx, 0));
label_23356c:
    // 0x23356c: 0xae401af0  sw          $zero, 0x1AF0($s2)
    ctx->pc = 0x23356cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6896), GPR_U32(ctx, 0));
label_233570:
    // 0x233570: 0xae401af4  sw          $zero, 0x1AF4($s2)
    ctx->pc = 0x233570u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6900), GPR_U32(ctx, 0));
label_233574:
    // 0x233574: 0xae401af8  sw          $zero, 0x1AF8($s2)
    ctx->pc = 0x233574u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6904), GPR_U32(ctx, 0));
label_233578:
    // 0x233578: 0xae401afc  sw          $zero, 0x1AFC($s2)
    ctx->pc = 0x233578u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6908), GPR_U32(ctx, 0));
label_23357c:
    // 0x23357c: 0xae401b00  sw          $zero, 0x1B00($s2)
    ctx->pc = 0x23357cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6912), GPR_U32(ctx, 0));
label_233580:
    // 0x233580: 0xae431b04  sw          $v1, 0x1B04($s2)
    ctx->pc = 0x233580u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6916), GPR_U32(ctx, 3));
label_233584:
    // 0x233584: 0xae431b08  sw          $v1, 0x1B08($s2)
    ctx->pc = 0x233584u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6920), GPR_U32(ctx, 3));
label_233588:
    // 0x233588: 0xae431b0c  sw          $v1, 0x1B0C($s2)
    ctx->pc = 0x233588u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6924), GPR_U32(ctx, 3));
label_23358c:
    // 0x23358c: 0xae431b10  sw          $v1, 0x1B10($s2)
    ctx->pc = 0x23358cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6928), GPR_U32(ctx, 3));
label_233590:
    // 0x233590: 0xae401b14  sw          $zero, 0x1B14($s2)
    ctx->pc = 0x233590u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6932), GPR_U32(ctx, 0));
label_233594:
    // 0x233594: 0xae401b18  sw          $zero, 0x1B18($s2)
    ctx->pc = 0x233594u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6936), GPR_U32(ctx, 0));
label_233598:
    // 0x233598: 0xae401b1c  sw          $zero, 0x1B1C($s2)
    ctx->pc = 0x233598u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6940), GPR_U32(ctx, 0));
label_23359c:
    // 0x23359c: 0xae401b20  sw          $zero, 0x1B20($s2)
    ctx->pc = 0x23359cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6944), GPR_U32(ctx, 0));
label_2335a0:
    // 0x2335a0: 0xae401b24  sw          $zero, 0x1B24($s2)
    ctx->pc = 0x2335a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6948), GPR_U32(ctx, 0));
label_2335a4:
    // 0x2335a4: 0xae401b28  sw          $zero, 0x1B28($s2)
    ctx->pc = 0x2335a4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6952), GPR_U32(ctx, 0));
label_2335a8:
    // 0x2335a8: 0xae401b30  sw          $zero, 0x1B30($s2)
    ctx->pc = 0x2335a8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6960), GPR_U32(ctx, 0));
label_2335ac:
    // 0x2335ac: 0xae401b34  sw          $zero, 0x1B34($s2)
    ctx->pc = 0x2335acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6964), GPR_U32(ctx, 0));
label_2335b0:
    // 0x2335b0: 0xae401b3c  sw          $zero, 0x1B3C($s2)
    ctx->pc = 0x2335b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6972), GPR_U32(ctx, 0));
label_2335b4:
    // 0x2335b4: 0xae401b38  sw          $zero, 0x1B38($s2)
    ctx->pc = 0x2335b4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6968), GPR_U32(ctx, 0));
label_2335b8:
    // 0x2335b8: 0xae401b40  sw          $zero, 0x1B40($s2)
    ctx->pc = 0x2335b8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6976), GPR_U32(ctx, 0));
label_2335bc:
    // 0x2335bc: 0x0  nop
    ctx->pc = 0x2335bcu;
    // NOP
label_2335c0:
    // 0x2335c0: 0x2453821  addu        $a3, $s2, $a1
    ctx->pc = 0x2335c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_2335c4:
    // 0x2335c4: 0x2461021  addu        $v0, $s2, $a2
    ctx->pc = 0x2335c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 6)));
label_2335c8:
    // 0x2335c8: 0xace01b44  sw          $zero, 0x1B44($a3)
    ctx->pc = 0x2335c8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 6980), GPR_U32(ctx, 0));
label_2335cc:
    // 0x2335cc: 0xac401b94  sw          $zero, 0x1B94($v0)
    ctx->pc = 0x2335ccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7060), GPR_U32(ctx, 0));
label_2335d0:
    // 0x2335d0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2335d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2335d4:
    // 0x2335d4: 0xac401b98  sw          $zero, 0x1B98($v0)
    ctx->pc = 0x2335d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 7064), GPR_U32(ctx, 0));
label_2335d8:
    // 0x2335d8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x2335d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_2335dc:
    // 0x2335dc: 0xace01c34  sw          $zero, 0x1C34($a3)
    ctx->pc = 0x2335dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7220), GPR_U32(ctx, 0));
label_2335e0:
    // 0x2335e0: 0x28820014  slti        $v0, $a0, 0x14
    ctx->pc = 0x2335e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)20) ? 1 : 0);
label_2335e4:
    // 0x2335e4: 0xace31c84  sw          $v1, 0x1C84($a3)
    ctx->pc = 0x2335e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7300), GPR_U32(ctx, 3));
label_2335e8:
    // 0x2335e8: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2335e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_2335ec:
    // 0x2335ec: 0xace01cd4  sw          $zero, 0x1CD4($a3)
    ctx->pc = 0x2335ecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7380), GPR_U32(ctx, 0));
label_2335f0:
    // 0x2335f0: 0xace01d24  sw          $zero, 0x1D24($a3)
    ctx->pc = 0x2335f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7460), GPR_U32(ctx, 0));
label_2335f4:
    // 0x2335f4: 0xace01d74  sw          $zero, 0x1D74($a3)
    ctx->pc = 0x2335f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7540), GPR_U32(ctx, 0));
label_2335f8:
    // 0x2335f8: 0xace01dc4  sw          $zero, 0x1DC4($a3)
    ctx->pc = 0x2335f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7620), GPR_U32(ctx, 0));
label_2335fc:
    // 0x2335fc: 0xace01e14  sw          $zero, 0x1E14($a3)
    ctx->pc = 0x2335fcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7700), GPR_U32(ctx, 0));
label_233600:
    // 0x233600: 0xace31e64  sw          $v1, 0x1E64($a3)
    ctx->pc = 0x233600u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7780), GPR_U32(ctx, 3));
label_233604:
    // 0x233604: 0xace01eb4  sw          $zero, 0x1EB4($a3)
    ctx->pc = 0x233604u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7860), GPR_U32(ctx, 0));
label_233608:
    // 0x233608: 0xace01f04  sw          $zero, 0x1F04($a3)
    ctx->pc = 0x233608u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 7940), GPR_U32(ctx, 0));
label_23360c:
    // 0x23360c: 0xace01f54  sw          $zero, 0x1F54($a3)
    ctx->pc = 0x23360cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8020), GPR_U32(ctx, 0));
label_233610:
    // 0x233610: 0xace31fa4  sw          $v1, 0x1FA4($a3)
    ctx->pc = 0x233610u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8100), GPR_U32(ctx, 3));
label_233614:
    // 0x233614: 0xace31ff4  sw          $v1, 0x1FF4($a3)
    ctx->pc = 0x233614u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8180), GPR_U32(ctx, 3));
label_233618:
    // 0x233618: 0xace02044  sw          $zero, 0x2044($a3)
    ctx->pc = 0x233618u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8260), GPR_U32(ctx, 0));
label_23361c:
    // 0x23361c: 0xace02094  sw          $zero, 0x2094($a3)
    ctx->pc = 0x23361cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8340), GPR_U32(ctx, 0));
label_233620:
    // 0x233620: 0xace020e4  sw          $zero, 0x20E4($a3)
    ctx->pc = 0x233620u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8420), GPR_U32(ctx, 0));
label_233624:
    // 0x233624: 0xace02134  sw          $zero, 0x2134($a3)
    ctx->pc = 0x233624u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8500), GPR_U32(ctx, 0));
label_233628:
    // 0x233628: 0x1440ffe4  bnez        $v0, . + 4 + (-0x1C << 2)
label_23362c:
    if (ctx->pc == 0x23362Cu) {
        ctx->pc = 0x23362Cu;
            // 0x23362c: 0xace02184  sw          $zero, 0x2184($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8580), GPR_U32(ctx, 0));
        ctx->pc = 0x233630u;
        goto label_233630;
    }
    ctx->pc = 0x233628u;
    {
        const bool branch_taken_0x233628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23362Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233628u;
            // 0x23362c: 0xace02184  sw          $zero, 0x2184($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8580), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233628) {
            ctx->pc = 0x2335BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2335bc;
        }
    }
    ctx->pc = 0x233630u;
label_233630:
    // 0x233630: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x233630u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_233634:
    // 0x233634: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x233634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_233638:
    // 0x233638: 0x8c22d624  lw          $v0, -0x29DC($at)
    ctx->pc = 0x233638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
label_23363c:
    // 0x23363c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x23363cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_233640:
    // 0x233640: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x233640u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_233644:
    // 0x233644: 0xae421b2c  sw          $v0, 0x1B2C($s2)
    ctx->pc = 0x233644u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 6956), GPR_U32(ctx, 2));
label_233648:
    // 0x233648: 0xc0874d8  jal         func_21D360
label_23364c:
    if (ctx->pc == 0x23364Cu) {
        ctx->pc = 0x23364Cu;
            // 0x23364c: 0xae4021d4  sw          $zero, 0x21D4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8660), GPR_U32(ctx, 0));
        ctx->pc = 0x233650u;
        goto label_233650;
    }
    ctx->pc = 0x233648u;
    SET_GPR_U32(ctx, 31, 0x233650u);
    ctx->pc = 0x23364Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233648u;
            // 0x23364c: 0xae4021d4  sw          $zero, 0x21D4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8660), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21D360u;
    if (runtime->hasFunction(0x21D360u)) {
        auto targetFn = runtime->lookupFunction(0x21D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233650u; }
        if (ctx->pc != 0x233650u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetMessData__7CDC2MesFPsPs_0x21d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233650u; }
        if (ctx->pc != 0x233650u) { return; }
    }
    ctx->pc = 0x233650u;
label_233650:
    // 0x233650: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x233650u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_233654:
    // 0x233654: 0x2a220009  slti        $v0, $s1, 0x9
    ctx->pc = 0x233654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)9) ? 1 : 0);
label_233658:
    // 0x233658: 0x1440ff3d  bnez        $v0, . + 4 + (-0xC3 << 2)
label_23365c:
    if (ctx->pc == 0x23365Cu) {
        ctx->pc = 0x23365Cu;
            // 0x23365c: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->pc = 0x233660u;
        goto label_233660;
    }
    ctx->pc = 0x233658u;
    {
        const bool branch_taken_0x233658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23365Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233658u;
            // 0x23365c: 0x26b50004  addiu       $s5, $s5, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233658) {
            ctx->pc = 0x233350u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233350;
        }
    }
    ctx->pc = 0x233660u;
label_233660:
    // 0x233660: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x233660u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_233664:
    // 0x233664: 0xc0881c0  jal         func_220700
label_233668:
    if (ctx->pc == 0x233668u) {
        ctx->pc = 0x233668u;
            // 0x233668: 0x2484d4f0  addiu       $a0, $a0, -0x2B10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956272));
        ctx->pc = 0x23366Cu;
        goto label_23366c;
    }
    ctx->pc = 0x233664u;
    SET_GPR_U32(ctx, 31, 0x23366Cu);
    ctx->pc = 0x233668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233664u;
            // 0x233668: 0x2484d4f0  addiu       $a0, $a0, -0x2B10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220700u;
    if (runtime->hasFunction(0x220700u)) {
        auto targetFn = runtime->lookupFunction(0x220700u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23366Cu; }
        if (ctx->pc != 0x23366Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitSpectolRasterTable__FP9mgCMemory_0x220700(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23366Cu; }
        if (ctx->pc != 0x23366Cu) { return; }
    }
    ctx->pc = 0x23366Cu;
label_23366c:
    // 0x23366c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x23366cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_233670:
    // 0x233670: 0xaf8093a8  sw          $zero, -0x6C58($gp)
    ctx->pc = 0x233670u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939560), GPR_U32(ctx, 0));
label_233674:
    // 0x233674: 0xc08e978  jal         func_23A5E0
label_233678:
    if (ctx->pc == 0x233678u) {
        ctx->pc = 0x233678u;
            // 0x233678: 0x2484d8c0  addiu       $a0, $a0, -0x2740 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957248));
        ctx->pc = 0x23367Cu;
        goto label_23367c;
    }
    ctx->pc = 0x233674u;
    SET_GPR_U32(ctx, 31, 0x23367Cu);
    ctx->pc = 0x233678u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233674u;
            // 0x233678: 0x2484d8c0  addiu       $a0, $a0, -0x2740 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A5E0u;
    if (runtime->hasFunction(0x23A5E0u)) {
        auto targetFn = runtime->lookupFunction(0x23A5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23367Cu; }
        if (ctx->pc != 0x23367Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        AttachInfo__15CMENU_USERPARAMFv_0x23a5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23367Cu; }
        if (ctx->pc != 0x23367Cu) { return; }
    }
    ctx->pc = 0x23367Cu;
label_23367c:
    // 0x23367c: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x23367cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_233680:
    // 0x233680: 0xc087d60  jal         func_21F580
label_233684:
    if (ctx->pc == 0x233684u) {
        ctx->pc = 0x233684u;
            // 0x233684: 0x2484d570  addiu       $a0, $a0, -0x2A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956400));
        ctx->pc = 0x233688u;
        goto label_233688;
    }
    ctx->pc = 0x233680u;
    SET_GPR_U32(ctx, 31, 0x233688u);
    ctx->pc = 0x233684u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233680u;
            // 0x233684: 0x2484d570  addiu       $a0, $a0, -0x2A90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956400));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21F580u;
    if (runtime->hasFunction(0x21F580u)) {
        auto targetFn = runtime->lookupFunction(0x21F580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233688u; }
        if (ctx->pc != 0x233688u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Initialize__12CMenuItemUseFv_0x21f580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233688u; }
        if (ctx->pc != 0x233688u) { return; }
    }
    ctx->pc = 0x233688u;
label_233688:
    // 0x233688: 0xaf8094dc  sw          $zero, -0x6B24($gp)
    ctx->pc = 0x233688u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939868), GPR_U32(ctx, 0));
label_23368c:
    // 0x23368c: 0xaf8094e0  sw          $zero, -0x6B20($gp)
    ctx->pc = 0x23368cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939872), GPR_U32(ctx, 0));
label_233690:
    // 0x233690: 0xc08cb04  jal         func_232C10
label_233694:
    if (ctx->pc == 0x233694u) {
        ctx->pc = 0x233694u;
            // 0x233694: 0xaf809528  sw          $zero, -0x6AD8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939944), GPR_U32(ctx, 0));
        ctx->pc = 0x233698u;
        goto label_233698;
    }
    ctx->pc = 0x233690u;
    SET_GPR_U32(ctx, 31, 0x233698u);
    ctx->pc = 0x233694u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233690u;
            // 0x233694: 0xaf809528  sw          $zero, -0x6AD8($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294939944), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x232C10u;
    if (runtime->hasFunction(0x232C10u)) {
        auto targetFn = runtime->lookupFunction(0x232C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233698u; }
        if (ctx->pc != 0x233698u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMenuEtcSpecialFlag__Fv_0x232c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233698u; }
        if (ctx->pc != 0x233698u) { return; }
    }
    ctx->pc = 0x233698u;
label_233698:
    // 0x233698: 0xc088080  jal         func_220200
label_23369c:
    if (ctx->pc == 0x23369Cu) {
        ctx->pc = 0x23369Cu;
            // 0x23369c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2336A0u;
        goto label_2336a0;
    }
    ctx->pc = 0x233698u;
    SET_GPR_U32(ctx, 31, 0x2336A0u);
    ctx->pc = 0x23369Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233698u;
            // 0x23369c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x220200u;
    if (runtime->hasFunction(0x220200u)) {
        auto targetFn = runtime->lookupFunction(0x220200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2336A0u; }
        if (ctx->pc != 0x2336A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetModeMenuDrawItemBoard__Fi_0x220200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2336A0u; }
        if (ctx->pc != 0x2336A0u) { return; }
    }
    ctx->pc = 0x2336A0u;
label_2336a0:
    // 0x2336a0: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2336a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2336a4:
    // 0x2336a4: 0x3c0401ed  lui         $a0, 0x1ED
    ctx->pc = 0x2336a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)493 << 16));
label_2336a8:
    // 0x2336a8: 0x2484d4f0  addiu       $a0, $a0, -0x2B10
    ctx->pc = 0x2336a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956272));
label_2336ac:
    // 0x2336ac: 0xa3808f08  sb          $zero, -0x70F8($gp)
    ctx->pc = 0x2336acu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938376), (uint8_t)GPR_U32(ctx, 0));
label_2336b0:
    // 0x2336b0: 0xa3808f1c  sb          $zero, -0x70E4($gp)
    ctx->pc = 0x2336b0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938396), (uint8_t)GPR_U32(ctx, 0));
label_2336b4:
    // 0x2336b4: 0xa3808f20  sb          $zero, -0x70E0($gp)
    ctx->pc = 0x2336b4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938400), (uint8_t)GPR_U32(ctx, 0));
label_2336b8:
    // 0x2336b8: 0xc04e780  jal         func_139E00
label_2336bc:
    if (ctx->pc == 0x2336BCu) {
        ctx->pc = 0x2336BCu;
            // 0x2336bc: 0x2450000c  addiu       $s0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->pc = 0x2336C0u;
        goto label_2336c0;
    }
    ctx->pc = 0x2336B8u;
    SET_GPR_U32(ctx, 31, 0x2336C0u);
    ctx->pc = 0x2336BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2336B8u;
            // 0x2336bc: 0x2450000c  addiu       $s0, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139E00u;
    if (runtime->hasFunction(0x139E00u)) {
        auto targetFn = runtime->lookupFunction(0x139E00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2336C0u; }
        if (ctx->pc != 0x2336C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Align64__9mgCMemoryFv_0x139e00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2336C0u; }
        if (ctx->pc != 0x2336C0u) { return; }
    }
    ctx->pc = 0x2336C0u;
label_2336c0:
    // 0x2336c0: 0x3c1101ed  lui         $s1, 0x1ED
    ctx->pc = 0x2336c0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)493 << 16));
label_2336c4:
    // 0x2336c4: 0xa38094f0  sb          $zero, -0x6B10($gp)
    ctx->pc = 0x2336c4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939888), (uint8_t)GPR_U32(ctx, 0));
label_2336c8:
    // 0x2336c8: 0xc0684ec  jal         func_1A13B0
label_2336cc:
    if (ctx->pc == 0x2336CCu) {
        ctx->pc = 0x2336CCu;
            // 0x2336cc: 0x2631d4f0  addiu       $s1, $s1, -0x2B10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956272));
        ctx->pc = 0x2336D0u;
        goto label_2336d0;
    }
    ctx->pc = 0x2336C8u;
    SET_GPR_U32(ctx, 31, 0x2336D0u);
    ctx->pc = 0x2336CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2336C8u;
            // 0x2336cc: 0x2631d4f0  addiu       $s1, $s1, -0x2B10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294956272));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A13B0u;
    if (runtime->hasFunction(0x1A13B0u)) {
        auto targetFn = runtime->lookupFunction(0x1A13B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2336D0u; }
        if (ctx->pc != 0x2336D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckItemOver__Fv_0x1a13b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2336D0u; }
        if (ctx->pc != 0x2336D0u) { return; }
    }
    ctx->pc = 0x2336D0u;
label_2336d0:
    // 0x2336d0: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
label_2336d4:
    if (ctx->pc == 0x2336D4u) {
        ctx->pc = 0x2336D8u;
        goto label_2336d8;
    }
    ctx->pc = 0x2336D0u;
    {
        const bool branch_taken_0x2336d0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2336d0) {
            ctx->pc = 0x233708u;
            goto label_233708;
        }
    }
    ctx->pc = 0x2336D8u;
label_2336d8:
    // 0x2336d8: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2336d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2336dc:
    // 0x2336dc: 0x84430050  lh          $v1, 0x50($v0)
    ctx->pc = 0x2336dcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_2336e0:
    // 0x2336e0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2336e4:
    if (ctx->pc == 0x2336E4u) {
        ctx->pc = 0x2336E4u;
            // 0x2336e4: 0x24440050  addiu       $a0, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->pc = 0x2336E8u;
        goto label_2336e8;
    }
    ctx->pc = 0x2336E0u;
    {
        const bool branch_taken_0x2336e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2336E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2336E0u;
            // 0x2336e4: 0x24440050  addiu       $a0, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2336e0) {
            ctx->pc = 0x2336F4u;
            goto label_2336f4;
        }
    }
    ctx->pc = 0x2336E8u;
label_2336e8:
    // 0x2336e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2336e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2336ec:
    // 0x2336ec: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
label_2336f0:
    if (ctx->pc == 0x2336F0u) {
        ctx->pc = 0x2336F4u;
        goto label_2336f4;
    }
    ctx->pc = 0x2336ECu;
    {
        const bool branch_taken_0x2336ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2336ec) {
            ctx->pc = 0x233708u;
            goto label_233708;
        }
    }
    ctx->pc = 0x2336F4u;
label_2336f4:
    // 0x2336f4: 0x84830000  lh          $v1, 0x0($a0)
    ctx->pc = 0x2336f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_2336f8:
    // 0x2336f8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2336f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2336fc:
    // 0x2336fc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x2336fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_233700:
    // 0x233700: 0xa4830000  sh          $v1, 0x0($a0)
    ctx->pc = 0x233700u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
label_233704:
    // 0x233704: 0xa38294f0  sb          $v0, -0x6B10($gp)
    ctx->pc = 0x233704u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939888), (uint8_t)GPR_U32(ctx, 2));
label_233708:
    // 0x233708: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x233708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_23370c:
    // 0x23370c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23370cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233710:
    // 0x233710: 0xa38094fc  sb          $zero, -0x6B04($gp)
    ctx->pc = 0x233710u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939900), (uint8_t)GPR_U32(ctx, 0));
label_233714:
    // 0x233714: 0x84630050  lh          $v1, 0x50($v1)
    ctx->pc = 0x233714u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_233718:
    // 0x233718: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_23371c:
    if (ctx->pc == 0x23371Cu) {
        ctx->pc = 0x23371Cu;
            // 0x23371c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x233720u;
        goto label_233720;
    }
    ctx->pc = 0x233718u;
    {
        const bool branch_taken_0x233718 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x23371Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233718u;
            // 0x23371c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233718) {
            ctx->pc = 0x233740u;
            goto label_233740;
        }
    }
    ctx->pc = 0x233720u;
label_233720:
    // 0x233720: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x233720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_233724:
    // 0x233724: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_233728:
    if (ctx->pc == 0x233728u) {
        ctx->pc = 0x233728u;
            // 0x233728: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x23372Cu;
        goto label_23372c;
    }
    ctx->pc = 0x233724u;
    {
        const bool branch_taken_0x233724 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x233728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233724u;
            // 0x233728: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233724) {
            ctx->pc = 0x23373Cu;
            goto label_23373c;
        }
    }
    ctx->pc = 0x23372Cu;
label_23372c:
    // 0x23372c: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_233730:
    if (ctx->pc == 0x233730u) {
        ctx->pc = 0x233730u;
            // 0x233730: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->pc = 0x233734u;
        goto label_233734;
    }
    ctx->pc = 0x23372Cu;
    {
        const bool branch_taken_0x23372c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x233730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23372Cu;
            // 0x233730: 0x24020015  addiu       $v0, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23372c) {
            ctx->pc = 0x23373Cu;
            goto label_23373c;
        }
    }
    ctx->pc = 0x233734u;
label_233734:
    // 0x233734: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_233738:
    if (ctx->pc == 0x233738u) {
        ctx->pc = 0x23373Cu;
        goto label_23373c;
    }
    ctx->pc = 0x233734u;
    {
        const bool branch_taken_0x233734 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x233734) {
            ctx->pc = 0x233744u;
            goto label_233744;
        }
    }
    ctx->pc = 0x23373Cu;
label_23373c:
    // 0x23373c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23373cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233740:
    // 0x233740: 0xa38294fc  sb          $v0, -0x6B04($gp)
    ctx->pc = 0x233740u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939900), (uint8_t)GPR_U32(ctx, 2));
label_233744:
    // 0x233744: 0xc08d1d8  jal         func_234760
label_233748:
    if (ctx->pc == 0x233748u) {
        ctx->pc = 0x23374Cu;
        goto label_23374c;
    }
    ctx->pc = 0x233744u;
    SET_GPR_U32(ctx, 31, 0x23374Cu);
    ctx->pc = 0x234760u;
    if (runtime->hasFunction(0x234760u)) {
        auto targetFn = runtime->lookupFunction(0x234760u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23374Cu; }
        if (ctx->pc != 0x23374Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetCommonMenuModeID__Fv_0x234760(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23374Cu; }
        if (ctx->pc != 0x23374Cu) { return; }
    }
    ctx->pc = 0x23374Cu;
label_23374c:
    // 0x23374c: 0x8f8794f8  lw          $a3, -0x6B08($gp)
    ctx->pc = 0x23374cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_233750:
    // 0x233750: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x233750u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_233754:
    // 0x233754: 0xaf8094cc  sw          $zero, -0x6B34($gp)
    ctx->pc = 0x233754u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939852), GPR_U32(ctx, 0));
label_233758:
    // 0x233758: 0xa38094d4  sb          $zero, -0x6B2C($gp)
    ctx->pc = 0x233758u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294939860), (uint8_t)GPR_U32(ctx, 0));
label_23375c:
    // 0x23375c: 0xaf8094d0  sw          $zero, -0x6B30($gp)
    ctx->pc = 0x23375cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294939856), GPR_U32(ctx, 0));
label_233760:
    // 0x233760: 0x84e60050  lh          $a2, 0x50($a3)
    ctx->pc = 0x233760u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 7), 80)));
label_233764:
    // 0x233764: 0x2cc1001e  sltiu       $at, $a2, 0x1E
    ctx->pc = 0x233764u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
label_233768:
    // 0x233768: 0x10200138  beqz        $at, . + 4 + (0x138 << 2)
label_23376c:
    if (ctx->pc == 0x23376Cu) {
        ctx->pc = 0x23376Cu;
            // 0x23376c: 0x24e80050  addiu       $t0, $a3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
        ctx->pc = 0x233770u;
        goto label_233770;
    }
    ctx->pc = 0x233768u;
    {
        const bool branch_taken_0x233768 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x23376Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233768u;
            // 0x23376c: 0x24e80050  addiu       $t0, $a3, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 7), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233768) {
            ctx->pc = 0x233C4Cu;
            goto label_233c4c;
        }
    }
    ctx->pc = 0x233770u;
label_233770:
    // 0x233770: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x233770u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
label_233774:
    // 0x233774: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x233774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_233778:
    // 0x233778: 0x2463a770  addiu       $v1, $v1, -0x5890
    ctx->pc = 0x233778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944624));
label_23377c:
    // 0x23377c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23377cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_233780:
    // 0x233780: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x233780u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_233784:
    // 0x233784: 0x400008  jr          $v0
label_233788:
    if (ctx->pc == 0x233788u) {
        ctx->pc = 0x23378Cu;
        goto label_23378c;
    }
    ctx->pc = 0x233784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x23378Cu: goto label_23378c;
            case 0x2337A8u: goto label_2337a8;
            case 0x2337C0u: goto label_2337c0;
            case 0x2337F8u: goto label_2337f8;
            case 0x233874u: goto label_233874;
            case 0x23388Cu: goto label_23388c;
            case 0x233890u: goto label_233890;
            case 0x2338B4u: goto label_2338b4;
            case 0x2338E8u: goto label_2338e8;
            case 0x233910u: goto label_233910;
            case 0x233980u: goto label_233980;
            case 0x2339A4u: goto label_2339a4;
            case 0x2339C0u: goto label_2339c0;
            case 0x2339DCu: goto label_2339dc;
            case 0x233A08u: goto label_233a08;
            case 0x233A28u: goto label_233a28;
            case 0x233AD0u: goto label_233ad0;
            case 0x233B74u: goto label_233b74;
            case 0x233B94u: goto label_233b94;
            case 0x233BC8u: goto label_233bc8;
            case 0x233BECu: goto label_233bec;
            case 0x233C10u: goto label_233c10;
            case 0x233C30u: goto label_233c30;
            default: break;
        }
        return;
    }
    ctx->pc = 0x23378Cu;
label_23378c:
    // 0x23378c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x23378cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233790:
    // 0x233790: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x233790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_233794:
    // 0x233794: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x233794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_233798:
    // 0x233798: 0xc08d474  jal         func_2351D0
label_23379c:
    if (ctx->pc == 0x23379Cu) {
        ctx->pc = 0x23379Cu;
            // 0x23379c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2337A0u;
        goto label_2337a0;
    }
    ctx->pc = 0x233798u;
    SET_GPR_U32(ctx, 31, 0x2337A0u);
    ctx->pc = 0x23379Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233798u;
            // 0x23379c: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2351D0u;
    if (runtime->hasFunction(0x2351D0u)) {
        auto targetFn = runtime->lookupFunction(0x2351D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2337A0u; }
        if (ctx->pc != 0x2337A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuInternInit__FP9mgCMemoryii_0x2351d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2337A0u; }
        if (ctx->pc != 0x2337A0u) { return; }
    }
    ctx->pc = 0x2337A0u;
label_2337a0:
    // 0x2337a0: 0x1000012b  b           . + 4 + (0x12B << 2)
label_2337a4:
    if (ctx->pc == 0x2337A4u) {
        ctx->pc = 0x2337A4u;
            // 0x2337a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2337A8u;
        goto label_2337a8;
    }
    ctx->pc = 0x2337A0u;
    {
        const bool branch_taken_0x2337a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2337A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2337A0u;
            // 0x2337a4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2337a0) {
            ctx->pc = 0x233C50u;
            goto label_233c50;
        }
    }
    ctx->pc = 0x2337A8u;
label_2337a8:
    // 0x2337a8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2337a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2337ac:
    // 0x2337ac: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2337acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2337b0:
    // 0x2337b0: 0xc07c990  jal         func_1F2640
label_2337b4:
    if (ctx->pc == 0x2337B4u) {
        ctx->pc = 0x2337B4u;
            // 0x2337b4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2337B8u;
        goto label_2337b8;
    }
    ctx->pc = 0x2337B0u;
    SET_GPR_U32(ctx, 31, 0x2337B8u);
    ctx->pc = 0x2337B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2337B0u;
            // 0x2337b4: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F2640u;
    if (runtime->hasFunction(0x1F2640u)) {
        auto targetFn = runtime->lookupFunction(0x1F2640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2337B8u; }
        if (ctx->pc != 0x2337B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuGeoramaInit__FP9mgCMemoryi_0x1f2640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2337B8u; }
        if (ctx->pc != 0x2337B8u) { return; }
    }
    ctx->pc = 0x2337B8u;
label_2337b8:
    // 0x2337b8: 0x10000124  b           . + 4 + (0x124 << 2)
label_2337bc:
    if (ctx->pc == 0x2337BCu) {
        ctx->pc = 0x2337C0u;
        goto label_2337c0;
    }
    ctx->pc = 0x2337B8u;
    {
        const bool branch_taken_0x2337b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2337b8) {
            ctx->pc = 0x233C4Cu;
            goto label_233c4c;
        }
    }
    ctx->pc = 0x2337C0u;
label_2337c0:
    // 0x2337c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2337c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2337c4:
    // 0x2337c4: 0xa7808f0c  sh          $zero, -0x70F4($gp)
    ctx->pc = 0x2337c4u;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294938380), (uint16_t)GPR_U32(ctx, 0));
label_2337c8:
    // 0x2337c8: 0xa3828f08  sb          $v0, -0x70F8($gp)
    ctx->pc = 0x2337c8u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938376), (uint8_t)GPR_U32(ctx, 2));
label_2337cc:
    // 0x2337cc: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2337ccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2337d0:
    // 0x2337d0: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2337d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2337d4:
    // 0x2337d4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2337d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2337d8:
    // 0x2337d8: 0xace20054  sw          $v0, 0x54($a3)
    ctx->pc = 0x2337d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 84), GPR_U32(ctx, 2));
label_2337dc:
    // 0x2337dc: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2337dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2337e0:
    // 0x2337e0: 0x8c27d648  lw          $a3, -0x29B8($at)
    ctx->pc = 0x2337e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956616)));
label_2337e4:
    // 0x2337e4: 0x84460050  lh          $a2, 0x50($v0)
    ctx->pc = 0x2337e4u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_2337e8:
    // 0x2337e8: 0xc07c720  jal         func_1F1C80
label_2337ec:
    if (ctx->pc == 0x2337ECu) {
        ctx->pc = 0x2337ECu;
            // 0x2337ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2337F0u;
        goto label_2337f0;
    }
    ctx->pc = 0x2337E8u;
    SET_GPR_U32(ctx, 31, 0x2337F0u);
    ctx->pc = 0x2337ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2337E8u;
            // 0x2337ec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F1C80u;
    if (runtime->hasFunction(0x1F1C80u)) {
        auto targetFn = runtime->lookupFunction(0x1F1C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2337F0u; }
        if (ctx->pc != 0x2337F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DngTreeMapInit__FP9mgCMemoryPiii_0x1f1c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2337F0u; }
        if (ctx->pc != 0x2337F0u) { return; }
    }
    ctx->pc = 0x2337F0u;
label_2337f0:
    // 0x2337f0: 0x10000116  b           . + 4 + (0x116 << 2)
label_2337f4:
    if (ctx->pc == 0x2337F4u) {
        ctx->pc = 0x2337F8u;
        goto label_2337f8;
    }
    ctx->pc = 0x2337F0u;
    {
        const bool branch_taken_0x2337f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2337f0) {
            ctx->pc = 0x233C4Cu;
            goto label_233c4c;
        }
    }
    ctx->pc = 0x2337F8u;
label_2337f8:
    // 0x2337f8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2337f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2337fc:
    // 0x2337fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2337fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_233800:
    // 0x233800: 0xc08d474  jal         func_2351D0
label_233804:
    if (ctx->pc == 0x233804u) {
        ctx->pc = 0x233804u;
            // 0x233804: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233808u;
        goto label_233808;
    }
    ctx->pc = 0x233800u;
    SET_GPR_U32(ctx, 31, 0x233808u);
    ctx->pc = 0x233804u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233800u;
            // 0x233804: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2351D0u;
    if (runtime->hasFunction(0x2351D0u)) {
        auto targetFn = runtime->lookupFunction(0x2351D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233808u; }
        if (ctx->pc != 0x233808u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuInternInit__FP9mgCMemoryii_0x2351d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233808u; }
        if (ctx->pc != 0x233808u) { return; }
    }
    ctx->pc = 0x233808u;
label_233808:
    // 0x233808: 0xc05239c  jal         func_148E70
label_23380c:
    if (ctx->pc == 0x23380Cu) {
        ctx->pc = 0x233810u;
        goto label_233810;
    }
    ctx->pc = 0x233808u;
    SET_GPR_U32(ctx, 31, 0x233810u);
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233810u; }
        if (ctx->pc != 0x233810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233810u; }
        if (ctx->pc != 0x233810u) { return; }
    }
    ctx->pc = 0x233810u;
label_233810:
    // 0x233810: 0x0  nop
    ctx->pc = 0x233810u;
    // NOP
label_233814:
    // 0x233814: 0x0  nop
    ctx->pc = 0x233814u;
    // NOP
label_233818:
    // 0x233818: 0x0  nop
    ctx->pc = 0x233818u;
    // NOP
label_23381c:
    // 0x23381c: 0x0  nop
    ctx->pc = 0x23381cu;
    // NOP
label_233820:
    // 0x233820: 0x0  nop
    ctx->pc = 0x233820u;
    // NOP
label_233824:
    // 0x233824: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_233828:
    if (ctx->pc == 0x233828u) {
        ctx->pc = 0x23382Cu;
        goto label_23382c;
    }
    ctx->pc = 0x233824u;
    {
        const bool branch_taken_0x233824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x233824) {
            ctx->pc = 0x233808u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233808;
        }
    }
    ctx->pc = 0x23382Cu;
label_23382c:
    // 0x23382c: 0xc08d630  jal         func_2358C0
label_233830:
    if (ctx->pc == 0x233830u) {
        ctx->pc = 0x233830u;
            // 0x233830: 0x8f8494cc  lw          $a0, -0x6B34($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939852)));
        ctx->pc = 0x233834u;
        goto label_233834;
    }
    ctx->pc = 0x23382Cu;
    SET_GPR_U32(ctx, 31, 0x233834u);
    ctx->pc = 0x233830u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23382Cu;
            // 0x233830: 0x8f8494cc  lw          $a0, -0x6B34($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939852)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2358C0u;
    if (runtime->hasFunction(0x2358C0u)) {
        auto targetFn = runtime->lookupFunction(0x2358C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233834u; }
        if (ctx->pc != 0x233834u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEnd__10CMenuInterFv_0x2358c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233834u; }
        if (ctx->pc != 0x233834u) { return; }
    }
    ctx->pc = 0x233834u;
label_233834:
    // 0x233834: 0xc08d220  jal         func_234880
label_233838:
    if (ctx->pc == 0x233838u) {
        ctx->pc = 0x233838u;
            // 0x233838: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x23383Cu;
        goto label_23383c;
    }
    ctx->pc = 0x233834u;
    SET_GPR_U32(ctx, 31, 0x23383Cu);
    ctx->pc = 0x233838u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233834u;
            // 0x233838: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234880u;
    if (runtime->hasFunction(0x234880u)) {
        auto targetFn = runtime->lookupFunction(0x234880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23383Cu; }
        if (ctx->pc != 0x23383Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReturnMenuIntern__Fi_0x234880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23383Cu; }
        if (ctx->pc != 0x23383Cu) { return; }
    }
    ctx->pc = 0x23383Cu;
label_23383c:
    // 0x23383c: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x23383cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
label_233840:
    // 0x233840: 0x2606000c  addiu       $a2, $s0, 0xC
    ctx->pc = 0x233840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_233844:
    // 0x233844: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x233844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_233848:
    // 0x233848: 0xc08d0d0  jal         func_234340
label_23384c:
    if (ctx->pc == 0x23384Cu) {
        ctx->pc = 0x23384Cu;
            // 0x23384c: 0x24a5d520  addiu       $a1, $a1, -0x2AE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956320));
        ctx->pc = 0x233850u;
        goto label_233850;
    }
    ctx->pc = 0x233848u;
    SET_GPR_U32(ctx, 31, 0x233850u);
    ctx->pc = 0x23384Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233848u;
            // 0x23384c: 0x24a5d520  addiu       $a1, $a1, -0x2AE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234340u;
    if (runtime->hasFunction(0x234340u)) {
        auto targetFn = runtime->lookupFunction(0x234340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233850u; }
        if (ctx->pc != 0x233850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NextMenuInit__FiP9mgCMemoryPi_0x234340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233850u; }
        if (ctx->pc != 0x233850u) { return; }
    }
    ctx->pc = 0x233850u;
label_233850:
    // 0x233850: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x233850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_233854:
    // 0x233854: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x233854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_233858:
    // 0x233858: 0x2405001e  addiu       $a1, $zero, 0x1E
    ctx->pc = 0x233858u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
label_23385c:
    // 0x23385c: 0xac430054  sw          $v1, 0x54($v0)
    ctx->pc = 0x23385cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
label_233860:
    // 0x233860: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x233860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_233864:
    // 0x233864: 0xc05f5fc  jal         func_17D7F0
label_233868:
    if (ctx->pc == 0x233868u) {
        ctx->pc = 0x233868u;
            // 0x233868: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->pc = 0x23386Cu;
        goto label_23386c;
    }
    ctx->pc = 0x233864u;
    SET_GPR_U32(ctx, 31, 0x23386Cu);
    ctx->pc = 0x233868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233864u;
            // 0x233868: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D7F0u;
    if (runtime->hasFunction(0x17D7F0u)) {
        auto targetFn = runtime->lookupFunction(0x17D7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23386Cu; }
        if (ctx->pc != 0x23386Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeIn__10CFadeInOutFi_0x17d7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23386Cu; }
        if (ctx->pc != 0x23386Cu) { return; }
    }
    ctx->pc = 0x23386Cu;
label_23386c:
    // 0x23386c: 0x100000f7  b           . + 4 + (0xF7 << 2)
label_233870:
    if (ctx->pc == 0x233870u) {
        ctx->pc = 0x233874u;
        goto label_233874;
    }
    ctx->pc = 0x23386Cu;
    {
        const bool branch_taken_0x23386c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23386c) {
            ctx->pc = 0x233C4Cu;
            goto label_233c4c;
        }
    }
    ctx->pc = 0x233874u;
label_233874:
    // 0x233874: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x233874u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_233878:
    // 0x233878: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x233878u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23387c:
    // 0x23387c: 0xc0a51d4  jal         func_294750
label_233880:
    if (ctx->pc == 0x233880u) {
        ctx->pc = 0x233880u;
            // 0x233880: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x233884u;
        goto label_233884;
    }
    ctx->pc = 0x23387Cu;
    SET_GPR_U32(ctx, 31, 0x233884u);
    ctx->pc = 0x233880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23387Cu;
            // 0x233880: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294750u;
    if (runtime->hasFunction(0x294750u)) {
        auto targetFn = runtime->lookupFunction(0x294750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233884u; }
        if (ctx->pc != 0x233884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuShopInit__FP9mgCMemoryPii_0x294750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233884u; }
        if (ctx->pc != 0x233884u) { return; }
    }
    ctx->pc = 0x233884u;
label_233884:
    // 0x233884: 0x100000f1  b           . + 4 + (0xF1 << 2)
label_233888:
    if (ctx->pc == 0x233888u) {
        ctx->pc = 0x23388Cu;
        goto label_23388c;
    }
    ctx->pc = 0x233884u;
    {
        const bool branch_taken_0x233884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x233884) {
            ctx->pc = 0x233C4Cu;
            goto label_233c4c;
        }
    }
    ctx->pc = 0x23388Cu;
label_23388c:
    // 0x23388c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x23388cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233890:
    // 0x233890: 0x2402000f  addiu       $v0, $zero, 0xF
    ctx->pc = 0x233890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_233894:
    // 0x233894: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x233894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_233898:
    // 0x233898: 0xace20054  sw          $v0, 0x54($a3)
    ctx->pc = 0x233898u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 84), GPR_U32(ctx, 2));
label_23389c:
    // 0x23389c: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x23389cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2338a0:
    // 0x2338a0: 0x84460050  lh          $a2, 0x50($v0)
    ctx->pc = 0x2338a0u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_2338a4:
    // 0x2338a4: 0xc0940ec  jal         func_2503B0
label_2338a8:
    if (ctx->pc == 0x2338A8u) {
        ctx->pc = 0x2338A8u;
            // 0x2338a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2338ACu;
        goto label_2338ac;
    }
    ctx->pc = 0x2338A4u;
    SET_GPR_U32(ctx, 31, 0x2338ACu);
    ctx->pc = 0x2338A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2338A4u;
            // 0x2338a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2503B0u;
    if (runtime->hasFunction(0x2503B0u)) {
        auto targetFn = runtime->lookupFunction(0x2503B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2338ACu; }
        if (ctx->pc != 0x2338ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuItemSelectInit__FP9mgCMemoryPii_0x2503b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2338ACu; }
        if (ctx->pc != 0x2338ACu) { return; }
    }
    ctx->pc = 0x2338ACu;
label_2338ac:
    // 0x2338ac: 0x100000e7  b           . + 4 + (0xE7 << 2)
label_2338b0:
    if (ctx->pc == 0x2338B0u) {
        ctx->pc = 0x2338B4u;
        goto label_2338b4;
    }
    ctx->pc = 0x2338ACu;
    {
        const bool branch_taken_0x2338ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2338ac) {
            ctx->pc = 0x233C4Cu;
            goto label_233c4c;
        }
    }
    ctx->pc = 0x2338B4u;
label_2338b4:
    // 0x2338b4: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x2338b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2338b8:
    // 0x2338b8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2338b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2338bc:
    // 0x2338bc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2338bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2338c0:
    // 0x2338c0: 0xc08d474  jal         func_2351D0
label_2338c4:
    if (ctx->pc == 0x2338C4u) {
        ctx->pc = 0x2338C4u;
            // 0x2338c4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2338C8u;
        goto label_2338c8;
    }
    ctx->pc = 0x2338C0u;
    SET_GPR_U32(ctx, 31, 0x2338C8u);
    ctx->pc = 0x2338C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2338C0u;
            // 0x2338c4: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2351D0u;
    if (runtime->hasFunction(0x2351D0u)) {
        auto targetFn = runtime->lookupFunction(0x2351D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2338C8u; }
        if (ctx->pc != 0x2338C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuInternInit__FP9mgCMemoryii_0x2351d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2338C8u; }
        if (ctx->pc != 0x2338C8u) { return; }
    }
    ctx->pc = 0x2338C8u;
label_2338c8:
    // 0x2338c8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2338c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2338cc:
    // 0x2338cc: 0x2606000c  addiu       $a2, $s0, 0xC
    ctx->pc = 0x2338ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_2338d0:
    // 0x2338d0: 0xc08d0d0  jal         func_234340
label_2338d4:
    if (ctx->pc == 0x2338D4u) {
        ctx->pc = 0x2338D4u;
            // 0x2338d4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x2338D8u;
        goto label_2338d8;
    }
    ctx->pc = 0x2338D0u;
    SET_GPR_U32(ctx, 31, 0x2338D8u);
    ctx->pc = 0x2338D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2338D0u;
            // 0x2338d4: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234340u;
    if (runtime->hasFunction(0x234340u)) {
        auto targetFn = runtime->lookupFunction(0x234340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2338D8u; }
        if (ctx->pc != 0x2338D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NextMenuInit__FiP9mgCMemoryPi_0x234340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2338D8u; }
        if (ctx->pc != 0x2338D8u) { return; }
    }
    ctx->pc = 0x2338D8u;
label_2338d8:
    // 0x2338d8: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2338d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2338dc:
    // 0x2338dc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2338dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2338e0:
    // 0x2338e0: 0x100000da  b           . + 4 + (0xDA << 2)
label_2338e4:
    if (ctx->pc == 0x2338E4u) {
        ctx->pc = 0x2338E4u;
            // 0x2338e4: 0xac430054  sw          $v1, 0x54($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x2338E8u;
        goto label_2338e8;
    }
    ctx->pc = 0x2338E0u;
    {
        const bool branch_taken_0x2338e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2338E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2338E0u;
            // 0x2338e4: 0xac430054  sw          $v1, 0x54($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2338e0) {
            ctx->pc = 0x233C4Cu;
            goto label_233c4c;
        }
    }
    ctx->pc = 0x2338E8u;
label_2338e8:
    // 0x2338e8: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x2338e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_2338ec:
    // 0x2338ec: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x2338ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2338f0:
    // 0x2338f0: 0xace20054  sw          $v0, 0x54($a3)
    ctx->pc = 0x2338f0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 84), GPR_U32(ctx, 2));
label_2338f4:
    // 0x2338f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2338f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2338f8:
    // 0x2338f8: 0x8c27d648  lw          $a3, -0x29B8($at)
    ctx->pc = 0x2338f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956616)));
label_2338fc:
    // 0x2338fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2338fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_233900:
    // 0x233900: 0xc0aaa88  jal         func_2AAA20
label_233904:
    if (ctx->pc == 0x233904u) {
        ctx->pc = 0x233904u;
            // 0x233904: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x233908u;
        goto label_233908;
    }
    ctx->pc = 0x233900u;
    SET_GPR_U32(ctx, 31, 0x233908u);
    ctx->pc = 0x233904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233900u;
            // 0x233904: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AAA20u;
    if (runtime->hasFunction(0x2AAA20u)) {
        auto targetFn = runtime->lookupFunction(0x2AAA20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233908u; }
        if (ctx->pc != 0x233908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuChapterInit__FP9mgCMemoryPiii_0x2aaa20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233908u; }
        if (ctx->pc != 0x233908u) { return; }
    }
    ctx->pc = 0x233908u;
label_233908:
    // 0x233908: 0x100000d0  b           . + 4 + (0xD0 << 2)
label_23390c:
    if (ctx->pc == 0x23390Cu) {
        ctx->pc = 0x233910u;
        goto label_233910;
    }
    ctx->pc = 0x233908u;
    {
        const bool branch_taken_0x233908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x233908) {
            ctx->pc = 0x233C4Cu;
            goto label_233c4c;
        }
    }
    ctx->pc = 0x233910u;
label_233910:
    // 0x233910: 0xc0bc508  jal         func_2F1420
label_233914:
    if (ctx->pc == 0x233914u) {
        ctx->pc = 0x233914u;
            // 0x233914: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233918u;
        goto label_233918;
    }
    ctx->pc = 0x233910u;
    SET_GPR_U32(ctx, 31, 0x233918u);
    ctx->pc = 0x233914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233910u;
            // 0x233914: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F1420u;
    if (runtime->hasFunction(0x2F1420u)) {
        auto targetFn = runtime->lookupFunction(0x2F1420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233918u; }
        if (ctx->pc != 0x233918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetDngTreeFlag__Fi_0x2f1420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233918u; }
        if (ctx->pc != 0x233918u) { return; }
    }
    ctx->pc = 0x233918u;
label_233918:
    // 0x233918: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x233918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_23391c:
    // 0x23391c: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x23391cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_233920:
    // 0x233920: 0x84630050  lh          $v1, 0x50($v1)
    ctx->pc = 0x233920u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 80)));
label_233924:
    // 0x233924: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
label_233928:
    if (ctx->pc == 0x233928u) {
        ctx->pc = 0x233928u;
            // 0x233928: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23392Cu;
        goto label_23392c;
    }
    ctx->pc = 0x233924u;
    {
        const bool branch_taken_0x233924 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x233928u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233924u;
            // 0x233928: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233924) {
            ctx->pc = 0x23394Cu;
            goto label_23394c;
        }
    }
    ctx->pc = 0x23392Cu;
label_23392c:
    // 0x23392c: 0xc0b1430  jal         func_2C50C0
label_233930:
    if (ctx->pc == 0x233930u) {
        ctx->pc = 0x233934u;
        goto label_233934;
    }
    ctx->pc = 0x23392Cu;
    SET_GPR_U32(ctx, 31, 0x233934u);
    ctx->pc = 0x2C50C0u;
    if (runtime->hasFunction(0x2C50C0u)) {
        auto targetFn = runtime->lookupFunction(0x2C50C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233934u; }
        if (ctx->pc != 0x233934u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SaveMapInfo__Fi_0x2c50c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233934u; }
        if (ctx->pc != 0x233934u) { return; }
    }
    ctx->pc = 0x233934u;
label_233934:
    // 0x233934: 0xc064268  jal         func_1909A0
label_233938:
    if (ctx->pc == 0x233938u) {
        ctx->pc = 0x23393Cu;
        goto label_23393c;
    }
    ctx->pc = 0x233934u;
    SET_GPR_U32(ctx, 31, 0x23393Cu);
    ctx->pc = 0x1909A0u;
    if (runtime->hasFunction(0x1909A0u)) {
        auto targetFn = runtime->lookupFunction(0x1909A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23393Cu; }
        if (ctx->pc != 0x23393Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetNowLoopNo__Fv_0x1909a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23393Cu; }
        if (ctx->pc != 0x23393Cu) { return; }
    }
    ctx->pc = 0x23393Cu;
label_23393c:
    // 0x23393c: 0xa78285d4  sh          $v0, -0x7A2C($gp)
    ctx->pc = 0x23393cu;
    WRITE16(ADD32(GPR_U32(ctx, 28), 4294936020), (uint16_t)GPR_U32(ctx, 2));
label_233940:
    // 0x233940: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x233940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_233944:
    // 0x233944: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x233944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_233948:
    // 0x233948: 0xac430054  sw          $v1, 0x54($v0)
    ctx->pc = 0x233948u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
label_23394c:
    // 0x23394c: 0x8f8494f8  lw          $a0, -0x6B08($gp)
    ctx->pc = 0x23394cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_233950:
    // 0x233950: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x233950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_233954:
    // 0x233954: 0x84830050  lh          $v1, 0x50($a0)
    ctx->pc = 0x233954u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 80)));
label_233958:
    // 0x233958: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
label_23395c:
    if (ctx->pc == 0x23395Cu) {
        ctx->pc = 0x23395Cu;
            // 0x23395c: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x233960u;
        goto label_233960;
    }
    ctx->pc = 0x233958u;
    {
        const bool branch_taken_0x233958 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23395Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233958u;
            // 0x23395c: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233958) {
            ctx->pc = 0x233964u;
            goto label_233964;
        }
    }
    ctx->pc = 0x233960u;
label_233960:
    // 0x233960: 0xac820054  sw          $v0, 0x54($a0)
    ctx->pc = 0x233960u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 2));
label_233964:
    // 0x233964: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x233964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_233968:
    // 0x233968: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x233968u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_23396c:
    // 0x23396c: 0x84460050  lh          $a2, 0x50($v0)
    ctx->pc = 0x23396cu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_233970:
    // 0x233970: 0xc0b1474  jal         func_2C51D0
label_233974:
    if (ctx->pc == 0x233974u) {
        ctx->pc = 0x233974u;
            // 0x233974: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233978u;
        goto label_233978;
    }
    ctx->pc = 0x233970u;
    SET_GPR_U32(ctx, 31, 0x233978u);
    ctx->pc = 0x233974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233970u;
            // 0x233974: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C51D0u;
    if (runtime->hasFunction(0x2C51D0u)) {
        auto targetFn = runtime->lookupFunction(0x2C51D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233978u; }
        if (ctx->pc != 0x233978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSaveInit__FP9mgCMemoryPii_0x2c51d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233978u; }
        if (ctx->pc != 0x233978u) { return; }
    }
    ctx->pc = 0x233978u;
label_233978:
    // 0x233978: 0x100000b4  b           . + 4 + (0xB4 << 2)
label_23397c:
    if (ctx->pc == 0x23397Cu) {
        ctx->pc = 0x233980u;
        goto label_233980;
    }
    ctx->pc = 0x233978u;
    {
        const bool branch_taken_0x233978 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x233978) {
            ctx->pc = 0x233C4Cu;
            goto label_233c4c;
        }
    }
    ctx->pc = 0x233980u;
label_233980:
    // 0x233980: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x233980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_233984:
    // 0x233984: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x233984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_233988:
    // 0x233988: 0xace20054  sw          $v0, 0x54($a3)
    ctx->pc = 0x233988u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 84), GPR_U32(ctx, 2));
label_23398c:
    // 0x23398c: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x23398cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_233990:
    // 0x233990: 0x84460050  lh          $a2, 0x50($v0)
    ctx->pc = 0x233990u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_233994:
    // 0x233994: 0xc0b16cc  jal         func_2C5B30
label_233998:
    if (ctx->pc == 0x233998u) {
        ctx->pc = 0x233998u;
            // 0x233998: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23399Cu;
        goto label_23399c;
    }
    ctx->pc = 0x233994u;
    SET_GPR_U32(ctx, 31, 0x23399Cu);
    ctx->pc = 0x233998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233994u;
            // 0x233998: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C5B30u;
    if (runtime->hasFunction(0x2C5B30u)) {
        auto targetFn = runtime->lookupFunction(0x2C5B30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23399Cu; }
        if (ctx->pc != 0x23399Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SubGameSaveInit__FP9mgCMemoryPii_0x2c5b30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23399Cu; }
        if (ctx->pc != 0x23399Cu) { return; }
    }
    ctx->pc = 0x23399Cu;
label_23399c:
    // 0x23399c: 0x100000ab  b           . + 4 + (0xAB << 2)
label_2339a0:
    if (ctx->pc == 0x2339A0u) {
        ctx->pc = 0x2339A4u;
        goto label_2339a4;
    }
    ctx->pc = 0x23399Cu;
    {
        const bool branch_taken_0x23399c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23399c) {
            ctx->pc = 0x233C4Cu;
            goto label_233c4c;
        }
    }
    ctx->pc = 0x2339A4u;
label_2339a4:
    // 0x2339a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2339a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2339a8:
    // 0x2339a8: 0xc07f71c  jal         func_1FDC70
label_2339ac:
    if (ctx->pc == 0x2339ACu) {
        ctx->pc = 0x2339ACu;
            // 0x2339ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2339B0u;
        goto label_2339b0;
    }
    ctx->pc = 0x2339A8u;
    SET_GPR_U32(ctx, 31, 0x2339B0u);
    ctx->pc = 0x2339ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2339A8u;
            // 0x2339ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FDC70u;
    if (runtime->hasFunction(0x1FDC70u)) {
        auto targetFn = runtime->lookupFunction(0x1FDC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2339B0u; }
        if (ctx->pc != 0x2339B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuRemovalInit__FP9mgCMemoryPi_0x1fdc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2339B0u; }
        if (ctx->pc != 0x2339B0u) { return; }
    }
    ctx->pc = 0x2339B0u;
label_2339b0:
    // 0x2339b0: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2339b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2339b4:
    // 0x2339b4: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x2339b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_2339b8:
    // 0x2339b8: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_2339bc:
    if (ctx->pc == 0x2339BCu) {
        ctx->pc = 0x2339BCu;
            // 0x2339bc: 0xac430054  sw          $v1, 0x54($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x2339C0u;
        goto label_2339c0;
    }
    ctx->pc = 0x2339B8u;
    {
        const bool branch_taken_0x2339b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2339BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2339B8u;
            // 0x2339bc: 0xac430054  sw          $v1, 0x54($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2339b8) {
            ctx->pc = 0x233C4Cu;
            goto label_233c4c;
        }
    }
    ctx->pc = 0x2339C0u;
label_2339c0:
    // 0x2339c0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2339c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2339c4:
    // 0x2339c4: 0xc0ab674  jal         func_2AD9D0
label_2339c8:
    if (ctx->pc == 0x2339C8u) {
        ctx->pc = 0x2339C8u;
            // 0x2339c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2339CCu;
        goto label_2339cc;
    }
    ctx->pc = 0x2339C4u;
    SET_GPR_U32(ctx, 31, 0x2339CCu);
    ctx->pc = 0x2339C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2339C4u;
            // 0x2339c8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AD9D0u;
    if (runtime->hasFunction(0x2AD9D0u)) {
        auto targetFn = runtime->lookupFunction(0x2AD9D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2339CCu; }
        if (ctx->pc != 0x2339CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        WorldMoveInit__FP9mgCMemoryPii_0x2ad9d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2339CCu; }
        if (ctx->pc != 0x2339CCu) { return; }
    }
    ctx->pc = 0x2339CCu;
label_2339cc:
    // 0x2339cc: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2339ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2339d0:
    // 0x2339d0: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x2339d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2339d4:
    // 0x2339d4: 0x1000009d  b           . + 4 + (0x9D << 2)
label_2339d8:
    if (ctx->pc == 0x2339D8u) {
        ctx->pc = 0x2339D8u;
            // 0x2339d8: 0xac430054  sw          $v1, 0x54($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x2339DCu;
        goto label_2339dc;
    }
    ctx->pc = 0x2339D4u;
    {
        const bool branch_taken_0x2339d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2339D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2339D4u;
            // 0x2339d8: 0xac430054  sw          $v1, 0x54($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2339d4) {
            ctx->pc = 0x233C4Cu;
            goto label_233c4c;
        }
    }
    ctx->pc = 0x2339DCu;
label_2339dc:
    // 0x2339dc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2339dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2339e0:
    // 0x2339e0: 0x3c0101f6  lui         $at, 0x1F6
    ctx->pc = 0x2339e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)502 << 16));
label_2339e4:
    // 0x2339e4: 0xa422dce0  sh          $v0, -0x2320($at)
    ctx->pc = 0x2339e4u;
    WRITE16(ADD32(GPR_U32(ctx, 1), 4294958304), (uint16_t)GPR_U32(ctx, 2));
label_2339e8:
    // 0x2339e8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2339e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2339ec:
    // 0x2339ec: 0x85060000  lh          $a2, 0x0($t0)
    ctx->pc = 0x2339ecu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_2339f0:
    // 0x2339f0: 0xc0c2bdc  jal         func_30AF70
label_2339f4:
    if (ctx->pc == 0x2339F4u) {
        ctx->pc = 0x2339F4u;
            // 0x2339f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2339F8u;
        goto label_2339f8;
    }
    ctx->pc = 0x2339F0u;
    SET_GPR_U32(ctx, 31, 0x2339F8u);
    ctx->pc = 0x2339F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2339F0u;
            // 0x2339f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x30AF70u;
    if (runtime->hasFunction(0x30AF70u)) {
        auto targetFn = runtime->lookupFunction(0x30AF70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2339F8u; }
        if (ctx->pc != 0x2339F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NameRegistInit__FP9mgCMemoryPii_0x30af70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2339F8u; }
        if (ctx->pc != 0x2339F8u) { return; }
    }
    ctx->pc = 0x2339F8u;
label_2339f8:
    // 0x2339f8: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x2339f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2339fc:
    // 0x2339fc: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2339fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_233a00:
    // 0x233a00: 0x10000092  b           . + 4 + (0x92 << 2)
label_233a04:
    if (ctx->pc == 0x233A04u) {
        ctx->pc = 0x233A04u;
            // 0x233a04: 0xac430054  sw          $v1, 0x54($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x233A08u;
        goto label_233a08;
    }
    ctx->pc = 0x233A00u;
    {
        const bool branch_taken_0x233a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233A00u;
            // 0x233a04: 0xac430054  sw          $v1, 0x54($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a00) {
            ctx->pc = 0x233C4Cu;
            goto label_233c4c;
        }
    }
    ctx->pc = 0x233A08u;
label_233a08:
    // 0x233a08: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x233a08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_233a0c:
    // 0x233a0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x233a0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_233a10:
    // 0x233a10: 0xc086434  jal         func_2190D0
label_233a14:
    if (ctx->pc == 0x233A14u) {
        ctx->pc = 0x233A14u;
            // 0x233a14: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x233A18u;
        goto label_233a18;
    }
    ctx->pc = 0x233A10u;
    SET_GPR_U32(ctx, 31, 0x233A18u);
    ctx->pc = 0x233A14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233A10u;
            // 0x233a14: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2190D0u;
    if (runtime->hasFunction(0x2190D0u)) {
        auto targetFn = runtime->lookupFunction(0x2190D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233A18u; }
        if (ctx->pc != 0x233A18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuGyoraceFishSelInit__FP9mgCMemoryPii_0x2190d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233A18u; }
        if (ctx->pc != 0x233A18u) { return; }
    }
    ctx->pc = 0x233A18u;
label_233a18:
    // 0x233a18: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x233a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_233a1c:
    // 0x233a1c: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x233a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_233a20:
    // 0x233a20: 0x1000008a  b           . + 4 + (0x8A << 2)
label_233a24:
    if (ctx->pc == 0x233A24u) {
        ctx->pc = 0x233A24u;
            // 0x233a24: 0xac430054  sw          $v1, 0x54($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x233A28u;
        goto label_233a28;
    }
    ctx->pc = 0x233A20u;
    {
        const bool branch_taken_0x233a20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233A24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233A20u;
            // 0x233a24: 0xac430054  sw          $v1, 0x54($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233a20) {
            ctx->pc = 0x233C4Cu;
            goto label_233c4c;
        }
    }
    ctx->pc = 0x233A28u;
label_233a28:
    // 0x233a28: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x233a28u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_233a2c:
    // 0x233a2c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x233a2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_233a30:
    // 0x233a30: 0xc08d474  jal         func_2351D0
label_233a34:
    if (ctx->pc == 0x233A34u) {
        ctx->pc = 0x233A34u;
            // 0x233a34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233A38u;
        goto label_233a38;
    }
    ctx->pc = 0x233A30u;
    SET_GPR_U32(ctx, 31, 0x233A38u);
    ctx->pc = 0x233A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233A30u;
            // 0x233a34: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2351D0u;
    if (runtime->hasFunction(0x2351D0u)) {
        auto targetFn = runtime->lookupFunction(0x2351D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233A38u; }
        if (ctx->pc != 0x233A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuInternInit__FP9mgCMemoryii_0x2351d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233A38u; }
        if (ctx->pc != 0x233A38u) { return; }
    }
    ctx->pc = 0x233A38u;
label_233a38:
    // 0x233a38: 0xc05239c  jal         func_148E70
label_233a3c:
    if (ctx->pc == 0x233A3Cu) {
        ctx->pc = 0x233A40u;
        goto label_233a40;
    }
    ctx->pc = 0x233A38u;
    SET_GPR_U32(ctx, 31, 0x233A40u);
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233A40u; }
        if (ctx->pc != 0x233A40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233A40u; }
        if (ctx->pc != 0x233A40u) { return; }
    }
    ctx->pc = 0x233A40u;
label_233a40:
    // 0x233a40: 0x0  nop
    ctx->pc = 0x233a40u;
    // NOP
label_233a44:
    // 0x233a44: 0x0  nop
    ctx->pc = 0x233a44u;
    // NOP
label_233a48:
    // 0x233a48: 0x0  nop
    ctx->pc = 0x233a48u;
    // NOP
label_233a4c:
    // 0x233a4c: 0x0  nop
    ctx->pc = 0x233a4cu;
    // NOP
label_233a50:
    // 0x233a50: 0x0  nop
    ctx->pc = 0x233a50u;
    // NOP
label_233a54:
    // 0x233a54: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_233a58:
    if (ctx->pc == 0x233A58u) {
        ctx->pc = 0x233A5Cu;
        goto label_233a5c;
    }
    ctx->pc = 0x233A54u;
    {
        const bool branch_taken_0x233a54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x233a54) {
            ctx->pc = 0x233A38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233a38;
        }
    }
    ctx->pc = 0x233A5Cu;
label_233a5c:
    // 0x233a5c: 0xc08d630  jal         func_2358C0
label_233a60:
    if (ctx->pc == 0x233A60u) {
        ctx->pc = 0x233A60u;
            // 0x233a60: 0x8f8494cc  lw          $a0, -0x6B34($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939852)));
        ctx->pc = 0x233A64u;
        goto label_233a64;
    }
    ctx->pc = 0x233A5Cu;
    SET_GPR_U32(ctx, 31, 0x233A64u);
    ctx->pc = 0x233A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233A5Cu;
            // 0x233a60: 0x8f8494cc  lw          $a0, -0x6B34($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939852)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2358C0u;
    if (runtime->hasFunction(0x2358C0u)) {
        auto targetFn = runtime->lookupFunction(0x2358C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233A64u; }
        if (ctx->pc != 0x233A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEnd__10CMenuInterFv_0x2358c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233A64u; }
        if (ctx->pc != 0x233A64u) { return; }
    }
    ctx->pc = 0x233A64u;
label_233a64:
    // 0x233a64: 0x8f8494cc  lw          $a0, -0x6B34($gp)
    ctx->pc = 0x233a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939852)));
label_233a68:
    // 0x233a68: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x233a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_233a6c:
    // 0x233a6c: 0xc08d840  jal         func_236100
label_233a70:
    if (ctx->pc == 0x233A70u) {
        ctx->pc = 0x233A70u;
            // 0x233a70: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x233A74u;
        goto label_233a74;
    }
    ctx->pc = 0x233A6Cu;
    SET_GPR_U32(ctx, 31, 0x233A74u);
    ctx->pc = 0x233A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233A6Cu;
            // 0x233a70: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x236100u;
    if (runtime->hasFunction(0x236100u)) {
        auto targetFn = runtime->lookupFunction(0x236100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233A74u; }
        if (ctx->pc != 0x233A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGTexture__10CMenuInterFii_0x236100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233A74u; }
        if (ctx->pc != 0x233A74u) { return; }
    }
    ctx->pc = 0x233A74u;
label_233a74:
    // 0x233a74: 0x8f8494cc  lw          $a0, -0x6B34($gp)
    ctx->pc = 0x233a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939852)));
label_233a78:
    // 0x233a78: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x233a78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_233a7c:
    // 0x233a7c: 0xc08d840  jal         func_236100
label_233a80:
    if (ctx->pc == 0x233A80u) {
        ctx->pc = 0x233A80u;
            // 0x233a80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233A84u;
        goto label_233a84;
    }
    ctx->pc = 0x233A7Cu;
    SET_GPR_U32(ctx, 31, 0x233A84u);
    ctx->pc = 0x233A80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233A7Cu;
            // 0x233a80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x236100u;
    if (runtime->hasFunction(0x236100u)) {
        auto targetFn = runtime->lookupFunction(0x236100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233A84u; }
        if (ctx->pc != 0x233A84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGTexture__10CMenuInterFii_0x236100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233A84u; }
        if (ctx->pc != 0x233A84u) { return; }
    }
    ctx->pc = 0x233A84u;
label_233a84:
    // 0x233a84: 0x0  nop
    ctx->pc = 0x233a84u;
    // NOP
label_233a88:
    // 0x233a88: 0x0  nop
    ctx->pc = 0x233a88u;
    // NOP
label_233a8c:
    // 0x233a8c: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
label_233a90:
    if (ctx->pc == 0x233A90u) {
        ctx->pc = 0x233A94u;
        goto label_233a94;
    }
    ctx->pc = 0x233A8Cu;
    {
        const bool branch_taken_0x233a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233a8c) {
            ctx->pc = 0x233A74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233a74;
        }
    }
    ctx->pc = 0x233A94u;
label_233a94:
    // 0x233a94: 0xc08d220  jal         func_234880
label_233a98:
    if (ctx->pc == 0x233A98u) {
        ctx->pc = 0x233A98u;
            // 0x233a98: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x233A9Cu;
        goto label_233a9c;
    }
    ctx->pc = 0x233A94u;
    SET_GPR_U32(ctx, 31, 0x233A9Cu);
    ctx->pc = 0x233A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233A94u;
            // 0x233a98: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234880u;
    if (runtime->hasFunction(0x234880u)) {
        auto targetFn = runtime->lookupFunction(0x234880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233A9Cu; }
        if (ctx->pc != 0x233A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReturnMenuIntern__Fi_0x234880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233A9Cu; }
        if (ctx->pc != 0x233A9Cu) { return; }
    }
    ctx->pc = 0x233A9Cu;
label_233a9c:
    // 0x233a9c: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x233a9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
label_233aa0:
    // 0x233aa0: 0x2606000c  addiu       $a2, $s0, 0xC
    ctx->pc = 0x233aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_233aa4:
    // 0x233aa4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x233aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_233aa8:
    // 0x233aa8: 0xc08d0d0  jal         func_234340
label_233aac:
    if (ctx->pc == 0x233AACu) {
        ctx->pc = 0x233AACu;
            // 0x233aac: 0x24a5d520  addiu       $a1, $a1, -0x2AE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956320));
        ctx->pc = 0x233AB0u;
        goto label_233ab0;
    }
    ctx->pc = 0x233AA8u;
    SET_GPR_U32(ctx, 31, 0x233AB0u);
    ctx->pc = 0x233AACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233AA8u;
            // 0x233aac: 0x24a5d520  addiu       $a1, $a1, -0x2AE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234340u;
    if (runtime->hasFunction(0x234340u)) {
        auto targetFn = runtime->lookupFunction(0x234340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233AB0u; }
        if (ctx->pc != 0x233AB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NextMenuInit__FiP9mgCMemoryPi_0x234340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233AB0u; }
        if (ctx->pc != 0x233AB0u) { return; }
    }
    ctx->pc = 0x233AB0u;
label_233ab0:
    // 0x233ab0: 0x8f8294a4  lw          $v0, -0x6B5C($gp)
    ctx->pc = 0x233ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939812)));
label_233ab4:
    // 0x233ab4: 0x24050028  addiu       $a1, $zero, 0x28
    ctx->pc = 0x233ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_233ab8:
    // 0x233ab8: 0xc05f5fc  jal         func_17D7F0
label_233abc:
    if (ctx->pc == 0x233ABCu) {
        ctx->pc = 0x233ABCu;
            // 0x233abc: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->pc = 0x233AC0u;
        goto label_233ac0;
    }
    ctx->pc = 0x233AB8u;
    SET_GPR_U32(ctx, 31, 0x233AC0u);
    ctx->pc = 0x233ABCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233AB8u;
            // 0x233abc: 0x24442c70  addiu       $a0, $v0, 0x2C70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 11376));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17D7F0u;
    if (runtime->hasFunction(0x17D7F0u)) {
        auto targetFn = runtime->lookupFunction(0x17D7F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233AC0u; }
        if (ctx->pc != 0x233AC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        FadeIn__10CFadeInOutFi_0x17d7f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233AC0u; }
        if (ctx->pc != 0x233AC0u) { return; }
    }
    ctx->pc = 0x233AC0u;
label_233ac0:
    // 0x233ac0: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x233ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_233ac4:
    // 0x233ac4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x233ac4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_233ac8:
    // 0x233ac8: 0x10000060  b           . + 4 + (0x60 << 2)
label_233acc:
    if (ctx->pc == 0x233ACCu) {
        ctx->pc = 0x233ACCu;
            // 0x233acc: 0xac430054  sw          $v1, 0x54($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x233AD0u;
        goto label_233ad0;
    }
    ctx->pc = 0x233AC8u;
    {
        const bool branch_taken_0x233ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233AC8u;
            // 0x233acc: 0xac430054  sw          $v1, 0x54($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233ac8) {
            ctx->pc = 0x233C4Cu;
            goto label_233c4c;
        }
    }
    ctx->pc = 0x233AD0u;
label_233ad0:
    // 0x233ad0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x233ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
label_233ad4:
    // 0x233ad4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x233ad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233ad8:
    // 0x233ad8: 0xc052c70  jal         func_14B1C0
label_233adc:
    if (ctx->pc == 0x233ADCu) {
        ctx->pc = 0x233ADCu;
            // 0x233adc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->pc = 0x233AE0u;
        goto label_233ae0;
    }
    ctx->pc = 0x233AD8u;
    SET_GPR_U32(ctx, 31, 0x233AE0u);
    ctx->pc = 0x233ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233AD8u;
            // 0x233adc: 0x248476e0  addiu       $a0, $a0, 0x76E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14B1C0u;
    if (runtime->hasFunction(0x14B1C0u)) {
        auto targetFn = runtime->lookupFunction(0x14B1C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233AE0u; }
        if (ctx->pc != 0x233AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        KeyLock__8CGamePadFi_0x14b1c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233AE0u; }
        if (ctx->pc != 0x233AE0u) { return; }
    }
    ctx->pc = 0x233AE0u;
label_233ae0:
    // 0x233ae0: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x233ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_233ae4:
    // 0x233ae4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x233ae4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_233ae8:
    // 0x233ae8: 0x84450050  lh          $a1, 0x50($v0)
    ctx->pc = 0x233ae8u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_233aec:
    // 0x233aec: 0xc08d474  jal         func_2351D0
label_233af0:
    if (ctx->pc == 0x233AF0u) {
        ctx->pc = 0x233AF0u;
            // 0x233af0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233AF4u;
        goto label_233af4;
    }
    ctx->pc = 0x233AECu;
    SET_GPR_U32(ctx, 31, 0x233AF4u);
    ctx->pc = 0x233AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233AECu;
            // 0x233af0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2351D0u;
    if (runtime->hasFunction(0x2351D0u)) {
        auto targetFn = runtime->lookupFunction(0x2351D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233AF4u; }
        if (ctx->pc != 0x233AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuInternInit__FP9mgCMemoryii_0x2351d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233AF4u; }
        if (ctx->pc != 0x233AF4u) { return; }
    }
    ctx->pc = 0x233AF4u;
label_233af4:
    // 0x233af4: 0xc05239c  jal         func_148E70
label_233af8:
    if (ctx->pc == 0x233AF8u) {
        ctx->pc = 0x233AFCu;
        goto label_233afc;
    }
    ctx->pc = 0x233AF4u;
    SET_GPR_U32(ctx, 31, 0x233AFCu);
    ctx->pc = 0x148E70u;
    if (runtime->hasFunction(0x148E70u)) {
        auto targetFn = runtime->lookupFunction(0x148E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233AFCu; }
        if (ctx->pc != 0x233AFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGSync__Fv_0x148e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233AFCu; }
        if (ctx->pc != 0x233AFCu) { return; }
    }
    ctx->pc = 0x233AFCu;
label_233afc:
    // 0x233afc: 0x0  nop
    ctx->pc = 0x233afcu;
    // NOP
label_233b00:
    // 0x233b00: 0x0  nop
    ctx->pc = 0x233b00u;
    // NOP
label_233b04:
    // 0x233b04: 0x0  nop
    ctx->pc = 0x233b04u;
    // NOP
label_233b08:
    // 0x233b08: 0x0  nop
    ctx->pc = 0x233b08u;
    // NOP
label_233b0c:
    // 0x233b0c: 0x0  nop
    ctx->pc = 0x233b0cu;
    // NOP
label_233b10:
    // 0x233b10: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_233b14:
    if (ctx->pc == 0x233B14u) {
        ctx->pc = 0x233B18u;
        goto label_233b18;
    }
    ctx->pc = 0x233B10u;
    {
        const bool branch_taken_0x233b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x233b10) {
            ctx->pc = 0x233AF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233af4;
        }
    }
    ctx->pc = 0x233B18u;
label_233b18:
    // 0x233b18: 0xc08d630  jal         func_2358C0
label_233b1c:
    if (ctx->pc == 0x233B1Cu) {
        ctx->pc = 0x233B1Cu;
            // 0x233b1c: 0x8f8494cc  lw          $a0, -0x6B34($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939852)));
        ctx->pc = 0x233B20u;
        goto label_233b20;
    }
    ctx->pc = 0x233B18u;
    SET_GPR_U32(ctx, 31, 0x233B20u);
    ctx->pc = 0x233B1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233B18u;
            // 0x233b1c: 0x8f8494cc  lw          $a0, -0x6B34($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939852)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2358C0u;
    if (runtime->hasFunction(0x2358C0u)) {
        auto targetFn = runtime->lookupFunction(0x2358C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233B20u; }
        if (ctx->pc != 0x233B20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitEnd__10CMenuInterFv_0x2358c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233B20u; }
        if (ctx->pc != 0x233B20u) { return; }
    }
    ctx->pc = 0x233B20u;
label_233b20:
    // 0x233b20: 0x8f8494cc  lw          $a0, -0x6B34($gp)
    ctx->pc = 0x233b20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939852)));
label_233b24:
    // 0x233b24: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x233b24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_233b28:
    // 0x233b28: 0xc08d840  jal         func_236100
label_233b2c:
    if (ctx->pc == 0x233B2Cu) {
        ctx->pc = 0x233B2Cu;
            // 0x233b2c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x233B30u;
        goto label_233b30;
    }
    ctx->pc = 0x233B28u;
    SET_GPR_U32(ctx, 31, 0x233B30u);
    ctx->pc = 0x233B2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233B28u;
            // 0x233b2c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x236100u;
    if (runtime->hasFunction(0x236100u)) {
        auto targetFn = runtime->lookupFunction(0x236100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233B30u; }
        if (ctx->pc != 0x233B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGTexture__10CMenuInterFii_0x236100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233B30u; }
        if (ctx->pc != 0x233B30u) { return; }
    }
    ctx->pc = 0x233B30u;
label_233b30:
    // 0x233b30: 0x8f8494cc  lw          $a0, -0x6B34($gp)
    ctx->pc = 0x233b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939852)));
label_233b34:
    // 0x233b34: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x233b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_233b38:
    // 0x233b38: 0xc08d840  jal         func_236100
label_233b3c:
    if (ctx->pc == 0x233B3Cu) {
        ctx->pc = 0x233B3Cu;
            // 0x233b3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233B40u;
        goto label_233b40;
    }
    ctx->pc = 0x233B38u;
    SET_GPR_U32(ctx, 31, 0x233B40u);
    ctx->pc = 0x233B3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233B38u;
            // 0x233b3c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x236100u;
    if (runtime->hasFunction(0x236100u)) {
        auto targetFn = runtime->lookupFunction(0x236100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233B40u; }
        if (ctx->pc != 0x233B40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReadBGTexture__10CMenuInterFii_0x236100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233B40u; }
        if (ctx->pc != 0x233B40u) { return; }
    }
    ctx->pc = 0x233B40u;
label_233b40:
    // 0x233b40: 0x0  nop
    ctx->pc = 0x233b40u;
    // NOP
label_233b44:
    // 0x233b44: 0x0  nop
    ctx->pc = 0x233b44u;
    // NOP
label_233b48:
    // 0x233b48: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
label_233b4c:
    if (ctx->pc == 0x233B4Cu) {
        ctx->pc = 0x233B50u;
        goto label_233b50;
    }
    ctx->pc = 0x233B48u;
    {
        const bool branch_taken_0x233b48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x233b48) {
            ctx->pc = 0x233B30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_233b30;
        }
    }
    ctx->pc = 0x233B50u;
label_233b50:
    // 0x233b50: 0xc08d220  jal         func_234880
label_233b54:
    if (ctx->pc == 0x233B54u) {
        ctx->pc = 0x233B54u;
            // 0x233b54: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x233B58u;
        goto label_233b58;
    }
    ctx->pc = 0x233B50u;
    SET_GPR_U32(ctx, 31, 0x233B58u);
    ctx->pc = 0x233B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233B50u;
            // 0x233b54: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234880u;
    if (runtime->hasFunction(0x234880u)) {
        auto targetFn = runtime->lookupFunction(0x234880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233B58u; }
        if (ctx->pc != 0x233B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReturnMenuIntern__Fi_0x234880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233B58u; }
        if (ctx->pc != 0x233B58u) { return; }
    }
    ctx->pc = 0x233B58u;
label_233b58:
    // 0x233b58: 0x3c0501ed  lui         $a1, 0x1ED
    ctx->pc = 0x233b58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)493 << 16));
label_233b5c:
    // 0x233b5c: 0x2606000c  addiu       $a2, $s0, 0xC
    ctx->pc = 0x233b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_233b60:
    // 0x233b60: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x233b60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_233b64:
    // 0x233b64: 0xc08d0d0  jal         func_234340
label_233b68:
    if (ctx->pc == 0x233B68u) {
        ctx->pc = 0x233B68u;
            // 0x233b68: 0x24a5d520  addiu       $a1, $a1, -0x2AE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956320));
        ctx->pc = 0x233B6Cu;
        goto label_233b6c;
    }
    ctx->pc = 0x233B64u;
    SET_GPR_U32(ctx, 31, 0x233B6Cu);
    ctx->pc = 0x233B68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233B64u;
            // 0x233b68: 0x24a5d520  addiu       $a1, $a1, -0x2AE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x234340u;
    if (runtime->hasFunction(0x234340u)) {
        auto targetFn = runtime->lookupFunction(0x234340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233B6Cu; }
        if (ctx->pc != 0x233B6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        NextMenuInit__FiP9mgCMemoryPi_0x234340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233B6Cu; }
        if (ctx->pc != 0x233B6Cu) { return; }
    }
    ctx->pc = 0x233B6Cu;
label_233b6c:
    // 0x233b6c: 0x10000037  b           . + 4 + (0x37 << 2)
label_233b70:
    if (ctx->pc == 0x233B70u) {
        ctx->pc = 0x233B74u;
        goto label_233b74;
    }
    ctx->pc = 0x233B6Cu;
    {
        const bool branch_taken_0x233b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x233b6c) {
            ctx->pc = 0x233C4Cu;
            goto label_233c4c;
        }
    }
    ctx->pc = 0x233B74u;
label_233b74:
    // 0x233b74: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x233b74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_233b78:
    // 0x233b78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x233b78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_233b7c:
    // 0x233b7c: 0xc0af7c8  jal         func_2BDF20
label_233b80:
    if (ctx->pc == 0x233B80u) {
        ctx->pc = 0x233B80u;
            // 0x233b80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233B84u;
        goto label_233b84;
    }
    ctx->pc = 0x233B7Cu;
    SET_GPR_U32(ctx, 31, 0x233B84u);
    ctx->pc = 0x233B80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233B7Cu;
            // 0x233b80: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BDF20u;
    if (runtime->hasFunction(0x2BDF20u)) {
        auto targetFn = runtime->lookupFunction(0x2BDF20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233B84u; }
        if (ctx->pc != 0x233B84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuCostumeInit__FP9mgCMemoryPii_0x2bdf20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233B84u; }
        if (ctx->pc != 0x233B84u) { return; }
    }
    ctx->pc = 0x233B84u;
label_233b84:
    // 0x233b84: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x233b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_233b88:
    // 0x233b88: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x233b88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_233b8c:
    // 0x233b8c: 0x1000002f  b           . + 4 + (0x2F << 2)
label_233b90:
    if (ctx->pc == 0x233B90u) {
        ctx->pc = 0x233B90u;
            // 0x233b90: 0xac430054  sw          $v1, 0x54($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x233B94u;
        goto label_233b94;
    }
    ctx->pc = 0x233B8Cu;
    {
        const bool branch_taken_0x233b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233B8Cu;
            // 0x233b90: 0xac430054  sw          $v1, 0x54($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233b8c) {
            ctx->pc = 0x233C4Cu;
            goto label_233c4c;
        }
    }
    ctx->pc = 0x233B94u;
label_233b94:
    // 0x233b94: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x233b94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_233b98:
    // 0x233b98: 0x14c20002  bne         $a2, $v0, . + 4 + (0x2 << 2)
label_233b9c:
    if (ctx->pc == 0x233B9Cu) {
        ctx->pc = 0x233B9Cu;
            // 0x233b9c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233BA0u;
        goto label_233ba0;
    }
    ctx->pc = 0x233B98u;
    {
        const bool branch_taken_0x233b98 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x233B9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233B98u;
            // 0x233b9c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233b98) {
            ctx->pc = 0x233BA4u;
            goto label_233ba4;
        }
    }
    ctx->pc = 0x233BA0u;
label_233ba0:
    // 0x233ba0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x233ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233ba4:
    // 0x233ba4: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x233ba4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_233ba8:
    // 0x233ba8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x233ba8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_233bac:
    // 0x233bac: 0x8c24d648  lw          $a0, -0x29B8($at)
    ctx->pc = 0x233bacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956616)));
label_233bb0:
    // 0x233bb0: 0xc0aedec  jal         func_2BB7B0
label_233bb4:
    if (ctx->pc == 0x233BB4u) {
        ctx->pc = 0x233BB4u;
            // 0x233bb4: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233BB8u;
        goto label_233bb8;
    }
    ctx->pc = 0x233BB0u;
    SET_GPR_U32(ctx, 31, 0x233BB8u);
    ctx->pc = 0x233BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233BB0u;
            // 0x233bb4: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BB7B0u;
    if (runtime->hasFunction(0x2BB7B0u)) {
        auto targetFn = runtime->lookupFunction(0x2BB7B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233BB8u; }
        if (ctx->pc != 0x233BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        InitMainCharaBG__FiP9mgCMemoryi_0x2bb7b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233BB8u; }
        if (ctx->pc != 0x233BB8u) { return; }
    }
    ctx->pc = 0x233BB8u;
label_233bb8:
    // 0x233bb8: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x233bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_233bbc:
    // 0x233bbc: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x233bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_233bc0:
    // 0x233bc0: 0x10000022  b           . + 4 + (0x22 << 2)
label_233bc4:
    if (ctx->pc == 0x233BC4u) {
        ctx->pc = 0x233BC4u;
            // 0x233bc4: 0xac430054  sw          $v1, 0x54($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x233BC8u;
        goto label_233bc8;
    }
    ctx->pc = 0x233BC0u;
    {
        const bool branch_taken_0x233bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233BC0u;
            // 0x233bc4: 0xac430054  sw          $v1, 0x54($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233bc0) {
            ctx->pc = 0x233C4Cu;
            goto label_233c4c;
        }
    }
    ctx->pc = 0x233BC8u;
label_233bc8:
    // 0x233bc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x233bc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_233bcc:
    // 0x233bcc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x233bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_233bd0:
    // 0x233bd0: 0xc086990  jal         func_21A640
label_233bd4:
    if (ctx->pc == 0x233BD4u) {
        ctx->pc = 0x233BD4u;
            // 0x233bd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233BD8u;
        goto label_233bd8;
    }
    ctx->pc = 0x233BD0u;
    SET_GPR_U32(ctx, 31, 0x233BD8u);
    ctx->pc = 0x233BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233BD0u;
            // 0x233bd4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21A640u;
    if (runtime->hasFunction(0x21A640u)) {
        auto targetFn = runtime->lookupFunction(0x21A640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233BD8u; }
        if (ctx->pc != 0x233BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GyoraceMenuInit__FP9mgCMemoryPii_0x21a640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233BD8u; }
        if (ctx->pc != 0x233BD8u) { return; }
    }
    ctx->pc = 0x233BD8u;
label_233bd8:
    // 0x233bd8: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x233bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_233bdc:
    // 0x233bdc: 0x24030019  addiu       $v1, $zero, 0x19
    ctx->pc = 0x233bdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_233be0:
    // 0x233be0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x233be0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233be4:
    // 0x233be4: 0x10000019  b           . + 4 + (0x19 << 2)
label_233be8:
    if (ctx->pc == 0x233BE8u) {
        ctx->pc = 0x233BE8u;
            // 0x233be8: 0xac430054  sw          $v1, 0x54($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x233BECu;
        goto label_233bec;
    }
    ctx->pc = 0x233BE4u;
    {
        const bool branch_taken_0x233be4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233BE4u;
            // 0x233be8: 0xac430054  sw          $v1, 0x54($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233be4) {
            ctx->pc = 0x233C4Cu;
            goto label_233c4c;
        }
    }
    ctx->pc = 0x233BECu;
label_233bec:
    // 0x233bec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x233becu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_233bf0:
    // 0x233bf0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x233bf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_233bf4:
    // 0x233bf4: 0xc0ab7cc  jal         func_2ADF30
label_233bf8:
    if (ctx->pc == 0x233BF8u) {
        ctx->pc = 0x233BF8u;
            // 0x233bf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233BFCu;
        goto label_233bfc;
    }
    ctx->pc = 0x233BF4u;
    SET_GPR_U32(ctx, 31, 0x233BFCu);
    ctx->pc = 0x233BF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233BF4u;
            // 0x233bf8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2ADF30u;
    if (runtime->hasFunction(0x2ADF30u)) {
        auto targetFn = runtime->lookupFunction(0x2ADF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233BFCu; }
        if (ctx->pc != 0x233BFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SphidaMenuInit__FP9mgCMemoryPii_0x2adf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233BFCu; }
        if (ctx->pc != 0x233BFCu) { return; }
    }
    ctx->pc = 0x233BFCu;
label_233bfc:
    // 0x233bfc: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x233bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_233c00:
    // 0x233c00: 0x2403001a  addiu       $v1, $zero, 0x1A
    ctx->pc = 0x233c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_233c04:
    // 0x233c04: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x233c04u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_233c08:
    // 0x233c08: 0x10000010  b           . + 4 + (0x10 << 2)
label_233c0c:
    if (ctx->pc == 0x233C0Cu) {
        ctx->pc = 0x233C0Cu;
            // 0x233c0c: 0xac430054  sw          $v1, 0x54($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x233C10u;
        goto label_233c10;
    }
    ctx->pc = 0x233C08u;
    {
        const bool branch_taken_0x233c08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233C0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233C08u;
            // 0x233c0c: 0xac430054  sw          $v1, 0x54($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233c08) {
            ctx->pc = 0x233C4Cu;
            goto label_233c4c;
        }
    }
    ctx->pc = 0x233C10u;
label_233c10:
    // 0x233c10: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x233c10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_233c14:
    // 0x233c14: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x233c14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_233c18:
    // 0x233c18: 0xc0abd18  jal         func_2AF460
label_233c1c:
    if (ctx->pc == 0x233C1Cu) {
        ctx->pc = 0x233C1Cu;
            // 0x233c1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x233C20u;
        goto label_233c20;
    }
    ctx->pc = 0x233C18u;
    SET_GPR_U32(ctx, 31, 0x233C20u);
    ctx->pc = 0x233C1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233C18u;
            // 0x233c1c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AF460u;
    if (runtime->hasFunction(0x2AF460u)) {
        auto targetFn = runtime->lookupFunction(0x2AF460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233C20u; }
        if (ctx->pc != 0x233C20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SphidaScoreViewInit__FP9mgCMemoryPii_0x2af460(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233C20u; }
        if (ctx->pc != 0x233C20u) { return; }
    }
    ctx->pc = 0x233C20u;
label_233c20:
    // 0x233c20: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x233c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_233c24:
    // 0x233c24: 0x2403001d  addiu       $v1, $zero, 0x1D
    ctx->pc = 0x233c24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_233c28:
    // 0x233c28: 0x10000008  b           . + 4 + (0x8 << 2)
label_233c2c:
    if (ctx->pc == 0x233C2Cu) {
        ctx->pc = 0x233C2Cu;
            // 0x233c2c: 0xac430054  sw          $v1, 0x54($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
        ctx->pc = 0x233C30u;
        goto label_233c30;
    }
    ctx->pc = 0x233C28u;
    {
        const bool branch_taken_0x233c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x233C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233C28u;
            // 0x233c2c: 0xac430054  sw          $v1, 0x54($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x233c28) {
            ctx->pc = 0x233C4Cu;
            goto label_233c4c;
        }
    }
    ctx->pc = 0x233C30u;
label_233c30:
    // 0x233c30: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x233c30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_233c34:
    // 0x233c34: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x233c34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_233c38:
    // 0x233c38: 0xc0afe58  jal         func_2BF960
label_233c3c:
    if (ctx->pc == 0x233C3Cu) {
        ctx->pc = 0x233C3Cu;
            // 0x233c3c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x233C40u;
        goto label_233c40;
    }
    ctx->pc = 0x233C38u;
    SET_GPR_U32(ctx, 31, 0x233C40u);
    ctx->pc = 0x233C3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x233C38u;
            // 0x233c3c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2BF960u;
    if (runtime->hasFunction(0x2BF960u)) {
        auto targetFn = runtime->lookupFunction(0x2BF960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233C40u; }
        if (ctx->pc != 0x233C40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MonsterBookInit__FP9mgCMemoryPii_0x2bf960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233C40u; }
        if (ctx->pc != 0x233C40u) { return; }
    }
    ctx->pc = 0x233C40u;
label_233c40:
    // 0x233c40: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x233c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_233c44:
    // 0x233c44: 0x2403001b  addiu       $v1, $zero, 0x1B
    ctx->pc = 0x233c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
label_233c48:
    // 0x233c48: 0xac430054  sw          $v1, 0x54($v0)
    ctx->pc = 0x233c48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 3));
label_233c4c:
    // 0x233c4c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x233c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_233c50:
    // 0x233c50: 0xc094274  jal         func_2509D0
label_233c54:
    if (ctx->pc == 0x233C54u) {
        ctx->pc = 0x233C58u;
        goto label_233c58;
    }
    ctx->pc = 0x233C50u;
    SET_GPR_U32(ctx, 31, 0x233C58u);
    ctx->pc = 0x2509D0u;
    if (runtime->hasFunction(0x2509D0u)) {
        auto targetFn = runtime->lookupFunction(0x2509D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233C58u; }
        if (ctx->pc != 0x233C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        MenuSePlay__Fi_0x2509d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x233C58u; }
        if (ctx->pc != 0x233C58u) { return; }
    }
    ctx->pc = 0x233C58u;
label_233c58:
    // 0x233c58: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x233c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_233c5c:
    // 0x233c5c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x233c5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_233c60:
    // 0x233c60: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x233c60u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_233c64:
    // 0x233c64: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x233c64u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_233c68:
    // 0x233c68: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x233c68u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_233c6c:
    // 0x233c6c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x233c6cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_233c70:
    // 0x233c70: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x233c70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_233c74:
    // 0x233c74: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x233c74u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_233c78:
    // 0x233c78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x233c78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_233c7c:
    // 0x233c7c: 0x84420050  lh          $v0, 0x50($v0)
    ctx->pc = 0x233c7cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 80)));
label_233c80:
    // 0x233c80: 0x3e00008  jr          $ra
label_233c84:
    if (ctx->pc == 0x233C84u) {
        ctx->pc = 0x233C84u;
            // 0x233c84: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x233C88u;
        goto label_fallthrough_0x233c80;
    }
    ctx->pc = 0x233C80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x233C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x233C80u;
            // 0x233c84: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x233c80:
    ctx->pc = 0x233C88u;
}
