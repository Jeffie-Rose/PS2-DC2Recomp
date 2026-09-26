#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: MenuItemDebugDraw__Fv
// Address: 0x246f10 - 0x2482b4
void MenuItemDebugDraw__Fv_0x246f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("MenuItemDebugDraw__Fv_0x246f10");
#endif

    switch (ctx->pc) {
        case 0x246f10u: goto label_246f10;
        case 0x246f14u: goto label_246f14;
        case 0x246f18u: goto label_246f18;
        case 0x246f1cu: goto label_246f1c;
        case 0x246f20u: goto label_246f20;
        case 0x246f24u: goto label_246f24;
        case 0x246f28u: goto label_246f28;
        case 0x246f2cu: goto label_246f2c;
        case 0x246f30u: goto label_246f30;
        case 0x246f34u: goto label_246f34;
        case 0x246f38u: goto label_246f38;
        case 0x246f3cu: goto label_246f3c;
        case 0x246f40u: goto label_246f40;
        case 0x246f44u: goto label_246f44;
        case 0x246f48u: goto label_246f48;
        case 0x246f4cu: goto label_246f4c;
        case 0x246f50u: goto label_246f50;
        case 0x246f54u: goto label_246f54;
        case 0x246f58u: goto label_246f58;
        case 0x246f5cu: goto label_246f5c;
        case 0x246f60u: goto label_246f60;
        case 0x246f64u: goto label_246f64;
        case 0x246f68u: goto label_246f68;
        case 0x246f6cu: goto label_246f6c;
        case 0x246f70u: goto label_246f70;
        case 0x246f74u: goto label_246f74;
        case 0x246f78u: goto label_246f78;
        case 0x246f7cu: goto label_246f7c;
        case 0x246f80u: goto label_246f80;
        case 0x246f84u: goto label_246f84;
        case 0x246f88u: goto label_246f88;
        case 0x246f8cu: goto label_246f8c;
        case 0x246f90u: goto label_246f90;
        case 0x246f94u: goto label_246f94;
        case 0x246f98u: goto label_246f98;
        case 0x246f9cu: goto label_246f9c;
        case 0x246fa0u: goto label_246fa0;
        case 0x246fa4u: goto label_246fa4;
        case 0x246fa8u: goto label_246fa8;
        case 0x246facu: goto label_246fac;
        case 0x246fb0u: goto label_246fb0;
        case 0x246fb4u: goto label_246fb4;
        case 0x246fb8u: goto label_246fb8;
        case 0x246fbcu: goto label_246fbc;
        case 0x246fc0u: goto label_246fc0;
        case 0x246fc4u: goto label_246fc4;
        case 0x246fc8u: goto label_246fc8;
        case 0x246fccu: goto label_246fcc;
        case 0x246fd0u: goto label_246fd0;
        case 0x246fd4u: goto label_246fd4;
        case 0x246fd8u: goto label_246fd8;
        case 0x246fdcu: goto label_246fdc;
        case 0x246fe0u: goto label_246fe0;
        case 0x246fe4u: goto label_246fe4;
        case 0x246fe8u: goto label_246fe8;
        case 0x246fecu: goto label_246fec;
        case 0x246ff0u: goto label_246ff0;
        case 0x246ff4u: goto label_246ff4;
        case 0x246ff8u: goto label_246ff8;
        case 0x246ffcu: goto label_246ffc;
        case 0x247000u: goto label_247000;
        case 0x247004u: goto label_247004;
        case 0x247008u: goto label_247008;
        case 0x24700cu: goto label_24700c;
        case 0x247010u: goto label_247010;
        case 0x247014u: goto label_247014;
        case 0x247018u: goto label_247018;
        case 0x24701cu: goto label_24701c;
        case 0x247020u: goto label_247020;
        case 0x247024u: goto label_247024;
        case 0x247028u: goto label_247028;
        case 0x24702cu: goto label_24702c;
        case 0x247030u: goto label_247030;
        case 0x247034u: goto label_247034;
        case 0x247038u: goto label_247038;
        case 0x24703cu: goto label_24703c;
        case 0x247040u: goto label_247040;
        case 0x247044u: goto label_247044;
        case 0x247048u: goto label_247048;
        case 0x24704cu: goto label_24704c;
        case 0x247050u: goto label_247050;
        case 0x247054u: goto label_247054;
        case 0x247058u: goto label_247058;
        case 0x24705cu: goto label_24705c;
        case 0x247060u: goto label_247060;
        case 0x247064u: goto label_247064;
        case 0x247068u: goto label_247068;
        case 0x24706cu: goto label_24706c;
        case 0x247070u: goto label_247070;
        case 0x247074u: goto label_247074;
        case 0x247078u: goto label_247078;
        case 0x24707cu: goto label_24707c;
        case 0x247080u: goto label_247080;
        case 0x247084u: goto label_247084;
        case 0x247088u: goto label_247088;
        case 0x24708cu: goto label_24708c;
        case 0x247090u: goto label_247090;
        case 0x247094u: goto label_247094;
        case 0x247098u: goto label_247098;
        case 0x24709cu: goto label_24709c;
        case 0x2470a0u: goto label_2470a0;
        case 0x2470a4u: goto label_2470a4;
        case 0x2470a8u: goto label_2470a8;
        case 0x2470acu: goto label_2470ac;
        case 0x2470b0u: goto label_2470b0;
        case 0x2470b4u: goto label_2470b4;
        case 0x2470b8u: goto label_2470b8;
        case 0x2470bcu: goto label_2470bc;
        case 0x2470c0u: goto label_2470c0;
        case 0x2470c4u: goto label_2470c4;
        case 0x2470c8u: goto label_2470c8;
        case 0x2470ccu: goto label_2470cc;
        case 0x2470d0u: goto label_2470d0;
        case 0x2470d4u: goto label_2470d4;
        case 0x2470d8u: goto label_2470d8;
        case 0x2470dcu: goto label_2470dc;
        case 0x2470e0u: goto label_2470e0;
        case 0x2470e4u: goto label_2470e4;
        case 0x2470e8u: goto label_2470e8;
        case 0x2470ecu: goto label_2470ec;
        case 0x2470f0u: goto label_2470f0;
        case 0x2470f4u: goto label_2470f4;
        case 0x2470f8u: goto label_2470f8;
        case 0x2470fcu: goto label_2470fc;
        case 0x247100u: goto label_247100;
        case 0x247104u: goto label_247104;
        case 0x247108u: goto label_247108;
        case 0x24710cu: goto label_24710c;
        case 0x247110u: goto label_247110;
        case 0x247114u: goto label_247114;
        case 0x247118u: goto label_247118;
        case 0x24711cu: goto label_24711c;
        case 0x247120u: goto label_247120;
        case 0x247124u: goto label_247124;
        case 0x247128u: goto label_247128;
        case 0x24712cu: goto label_24712c;
        case 0x247130u: goto label_247130;
        case 0x247134u: goto label_247134;
        case 0x247138u: goto label_247138;
        case 0x24713cu: goto label_24713c;
        case 0x247140u: goto label_247140;
        case 0x247144u: goto label_247144;
        case 0x247148u: goto label_247148;
        case 0x24714cu: goto label_24714c;
        case 0x247150u: goto label_247150;
        case 0x247154u: goto label_247154;
        case 0x247158u: goto label_247158;
        case 0x24715cu: goto label_24715c;
        case 0x247160u: goto label_247160;
        case 0x247164u: goto label_247164;
        case 0x247168u: goto label_247168;
        case 0x24716cu: goto label_24716c;
        case 0x247170u: goto label_247170;
        case 0x247174u: goto label_247174;
        case 0x247178u: goto label_247178;
        case 0x24717cu: goto label_24717c;
        case 0x247180u: goto label_247180;
        case 0x247184u: goto label_247184;
        case 0x247188u: goto label_247188;
        case 0x24718cu: goto label_24718c;
        case 0x247190u: goto label_247190;
        case 0x247194u: goto label_247194;
        case 0x247198u: goto label_247198;
        case 0x24719cu: goto label_24719c;
        case 0x2471a0u: goto label_2471a0;
        case 0x2471a4u: goto label_2471a4;
        case 0x2471a8u: goto label_2471a8;
        case 0x2471acu: goto label_2471ac;
        case 0x2471b0u: goto label_2471b0;
        case 0x2471b4u: goto label_2471b4;
        case 0x2471b8u: goto label_2471b8;
        case 0x2471bcu: goto label_2471bc;
        case 0x2471c0u: goto label_2471c0;
        case 0x2471c4u: goto label_2471c4;
        case 0x2471c8u: goto label_2471c8;
        case 0x2471ccu: goto label_2471cc;
        case 0x2471d0u: goto label_2471d0;
        case 0x2471d4u: goto label_2471d4;
        case 0x2471d8u: goto label_2471d8;
        case 0x2471dcu: goto label_2471dc;
        case 0x2471e0u: goto label_2471e0;
        case 0x2471e4u: goto label_2471e4;
        case 0x2471e8u: goto label_2471e8;
        case 0x2471ecu: goto label_2471ec;
        case 0x2471f0u: goto label_2471f0;
        case 0x2471f4u: goto label_2471f4;
        case 0x2471f8u: goto label_2471f8;
        case 0x2471fcu: goto label_2471fc;
        case 0x247200u: goto label_247200;
        case 0x247204u: goto label_247204;
        case 0x247208u: goto label_247208;
        case 0x24720cu: goto label_24720c;
        case 0x247210u: goto label_247210;
        case 0x247214u: goto label_247214;
        case 0x247218u: goto label_247218;
        case 0x24721cu: goto label_24721c;
        case 0x247220u: goto label_247220;
        case 0x247224u: goto label_247224;
        case 0x247228u: goto label_247228;
        case 0x24722cu: goto label_24722c;
        case 0x247230u: goto label_247230;
        case 0x247234u: goto label_247234;
        case 0x247238u: goto label_247238;
        case 0x24723cu: goto label_24723c;
        case 0x247240u: goto label_247240;
        case 0x247244u: goto label_247244;
        case 0x247248u: goto label_247248;
        case 0x24724cu: goto label_24724c;
        case 0x247250u: goto label_247250;
        case 0x247254u: goto label_247254;
        case 0x247258u: goto label_247258;
        case 0x24725cu: goto label_24725c;
        case 0x247260u: goto label_247260;
        case 0x247264u: goto label_247264;
        case 0x247268u: goto label_247268;
        case 0x24726cu: goto label_24726c;
        case 0x247270u: goto label_247270;
        case 0x247274u: goto label_247274;
        case 0x247278u: goto label_247278;
        case 0x24727cu: goto label_24727c;
        case 0x247280u: goto label_247280;
        case 0x247284u: goto label_247284;
        case 0x247288u: goto label_247288;
        case 0x24728cu: goto label_24728c;
        case 0x247290u: goto label_247290;
        case 0x247294u: goto label_247294;
        case 0x247298u: goto label_247298;
        case 0x24729cu: goto label_24729c;
        case 0x2472a0u: goto label_2472a0;
        case 0x2472a4u: goto label_2472a4;
        case 0x2472a8u: goto label_2472a8;
        case 0x2472acu: goto label_2472ac;
        case 0x2472b0u: goto label_2472b0;
        case 0x2472b4u: goto label_2472b4;
        case 0x2472b8u: goto label_2472b8;
        case 0x2472bcu: goto label_2472bc;
        case 0x2472c0u: goto label_2472c0;
        case 0x2472c4u: goto label_2472c4;
        case 0x2472c8u: goto label_2472c8;
        case 0x2472ccu: goto label_2472cc;
        case 0x2472d0u: goto label_2472d0;
        case 0x2472d4u: goto label_2472d4;
        case 0x2472d8u: goto label_2472d8;
        case 0x2472dcu: goto label_2472dc;
        case 0x2472e0u: goto label_2472e0;
        case 0x2472e4u: goto label_2472e4;
        case 0x2472e8u: goto label_2472e8;
        case 0x2472ecu: goto label_2472ec;
        case 0x2472f0u: goto label_2472f0;
        case 0x2472f4u: goto label_2472f4;
        case 0x2472f8u: goto label_2472f8;
        case 0x2472fcu: goto label_2472fc;
        case 0x247300u: goto label_247300;
        case 0x247304u: goto label_247304;
        case 0x247308u: goto label_247308;
        case 0x24730cu: goto label_24730c;
        case 0x247310u: goto label_247310;
        case 0x247314u: goto label_247314;
        case 0x247318u: goto label_247318;
        case 0x24731cu: goto label_24731c;
        case 0x247320u: goto label_247320;
        case 0x247324u: goto label_247324;
        case 0x247328u: goto label_247328;
        case 0x24732cu: goto label_24732c;
        case 0x247330u: goto label_247330;
        case 0x247334u: goto label_247334;
        case 0x247338u: goto label_247338;
        case 0x24733cu: goto label_24733c;
        case 0x247340u: goto label_247340;
        case 0x247344u: goto label_247344;
        case 0x247348u: goto label_247348;
        case 0x24734cu: goto label_24734c;
        case 0x247350u: goto label_247350;
        case 0x247354u: goto label_247354;
        case 0x247358u: goto label_247358;
        case 0x24735cu: goto label_24735c;
        case 0x247360u: goto label_247360;
        case 0x247364u: goto label_247364;
        case 0x247368u: goto label_247368;
        case 0x24736cu: goto label_24736c;
        case 0x247370u: goto label_247370;
        case 0x247374u: goto label_247374;
        case 0x247378u: goto label_247378;
        case 0x24737cu: goto label_24737c;
        case 0x247380u: goto label_247380;
        case 0x247384u: goto label_247384;
        case 0x247388u: goto label_247388;
        case 0x24738cu: goto label_24738c;
        case 0x247390u: goto label_247390;
        case 0x247394u: goto label_247394;
        case 0x247398u: goto label_247398;
        case 0x24739cu: goto label_24739c;
        case 0x2473a0u: goto label_2473a0;
        case 0x2473a4u: goto label_2473a4;
        case 0x2473a8u: goto label_2473a8;
        case 0x2473acu: goto label_2473ac;
        case 0x2473b0u: goto label_2473b0;
        case 0x2473b4u: goto label_2473b4;
        case 0x2473b8u: goto label_2473b8;
        case 0x2473bcu: goto label_2473bc;
        case 0x2473c0u: goto label_2473c0;
        case 0x2473c4u: goto label_2473c4;
        case 0x2473c8u: goto label_2473c8;
        case 0x2473ccu: goto label_2473cc;
        case 0x2473d0u: goto label_2473d0;
        case 0x2473d4u: goto label_2473d4;
        case 0x2473d8u: goto label_2473d8;
        case 0x2473dcu: goto label_2473dc;
        case 0x2473e0u: goto label_2473e0;
        case 0x2473e4u: goto label_2473e4;
        case 0x2473e8u: goto label_2473e8;
        case 0x2473ecu: goto label_2473ec;
        case 0x2473f0u: goto label_2473f0;
        case 0x2473f4u: goto label_2473f4;
        case 0x2473f8u: goto label_2473f8;
        case 0x2473fcu: goto label_2473fc;
        case 0x247400u: goto label_247400;
        case 0x247404u: goto label_247404;
        case 0x247408u: goto label_247408;
        case 0x24740cu: goto label_24740c;
        case 0x247410u: goto label_247410;
        case 0x247414u: goto label_247414;
        case 0x247418u: goto label_247418;
        case 0x24741cu: goto label_24741c;
        case 0x247420u: goto label_247420;
        case 0x247424u: goto label_247424;
        case 0x247428u: goto label_247428;
        case 0x24742cu: goto label_24742c;
        case 0x247430u: goto label_247430;
        case 0x247434u: goto label_247434;
        case 0x247438u: goto label_247438;
        case 0x24743cu: goto label_24743c;
        case 0x247440u: goto label_247440;
        case 0x247444u: goto label_247444;
        case 0x247448u: goto label_247448;
        case 0x24744cu: goto label_24744c;
        case 0x247450u: goto label_247450;
        case 0x247454u: goto label_247454;
        case 0x247458u: goto label_247458;
        case 0x24745cu: goto label_24745c;
        case 0x247460u: goto label_247460;
        case 0x247464u: goto label_247464;
        case 0x247468u: goto label_247468;
        case 0x24746cu: goto label_24746c;
        case 0x247470u: goto label_247470;
        case 0x247474u: goto label_247474;
        case 0x247478u: goto label_247478;
        case 0x24747cu: goto label_24747c;
        case 0x247480u: goto label_247480;
        case 0x247484u: goto label_247484;
        case 0x247488u: goto label_247488;
        case 0x24748cu: goto label_24748c;
        case 0x247490u: goto label_247490;
        case 0x247494u: goto label_247494;
        case 0x247498u: goto label_247498;
        case 0x24749cu: goto label_24749c;
        case 0x2474a0u: goto label_2474a0;
        case 0x2474a4u: goto label_2474a4;
        case 0x2474a8u: goto label_2474a8;
        case 0x2474acu: goto label_2474ac;
        case 0x2474b0u: goto label_2474b0;
        case 0x2474b4u: goto label_2474b4;
        case 0x2474b8u: goto label_2474b8;
        case 0x2474bcu: goto label_2474bc;
        case 0x2474c0u: goto label_2474c0;
        case 0x2474c4u: goto label_2474c4;
        case 0x2474c8u: goto label_2474c8;
        case 0x2474ccu: goto label_2474cc;
        case 0x2474d0u: goto label_2474d0;
        case 0x2474d4u: goto label_2474d4;
        case 0x2474d8u: goto label_2474d8;
        case 0x2474dcu: goto label_2474dc;
        case 0x2474e0u: goto label_2474e0;
        case 0x2474e4u: goto label_2474e4;
        case 0x2474e8u: goto label_2474e8;
        case 0x2474ecu: goto label_2474ec;
        case 0x2474f0u: goto label_2474f0;
        case 0x2474f4u: goto label_2474f4;
        case 0x2474f8u: goto label_2474f8;
        case 0x2474fcu: goto label_2474fc;
        case 0x247500u: goto label_247500;
        case 0x247504u: goto label_247504;
        case 0x247508u: goto label_247508;
        case 0x24750cu: goto label_24750c;
        case 0x247510u: goto label_247510;
        case 0x247514u: goto label_247514;
        case 0x247518u: goto label_247518;
        case 0x24751cu: goto label_24751c;
        case 0x247520u: goto label_247520;
        case 0x247524u: goto label_247524;
        case 0x247528u: goto label_247528;
        case 0x24752cu: goto label_24752c;
        case 0x247530u: goto label_247530;
        case 0x247534u: goto label_247534;
        case 0x247538u: goto label_247538;
        case 0x24753cu: goto label_24753c;
        case 0x247540u: goto label_247540;
        case 0x247544u: goto label_247544;
        case 0x247548u: goto label_247548;
        case 0x24754cu: goto label_24754c;
        case 0x247550u: goto label_247550;
        case 0x247554u: goto label_247554;
        case 0x247558u: goto label_247558;
        case 0x24755cu: goto label_24755c;
        case 0x247560u: goto label_247560;
        case 0x247564u: goto label_247564;
        case 0x247568u: goto label_247568;
        case 0x24756cu: goto label_24756c;
        case 0x247570u: goto label_247570;
        case 0x247574u: goto label_247574;
        case 0x247578u: goto label_247578;
        case 0x24757cu: goto label_24757c;
        case 0x247580u: goto label_247580;
        case 0x247584u: goto label_247584;
        case 0x247588u: goto label_247588;
        case 0x24758cu: goto label_24758c;
        case 0x247590u: goto label_247590;
        case 0x247594u: goto label_247594;
        case 0x247598u: goto label_247598;
        case 0x24759cu: goto label_24759c;
        case 0x2475a0u: goto label_2475a0;
        case 0x2475a4u: goto label_2475a4;
        case 0x2475a8u: goto label_2475a8;
        case 0x2475acu: goto label_2475ac;
        case 0x2475b0u: goto label_2475b0;
        case 0x2475b4u: goto label_2475b4;
        case 0x2475b8u: goto label_2475b8;
        case 0x2475bcu: goto label_2475bc;
        case 0x2475c0u: goto label_2475c0;
        case 0x2475c4u: goto label_2475c4;
        case 0x2475c8u: goto label_2475c8;
        case 0x2475ccu: goto label_2475cc;
        case 0x2475d0u: goto label_2475d0;
        case 0x2475d4u: goto label_2475d4;
        case 0x2475d8u: goto label_2475d8;
        case 0x2475dcu: goto label_2475dc;
        case 0x2475e0u: goto label_2475e0;
        case 0x2475e4u: goto label_2475e4;
        case 0x2475e8u: goto label_2475e8;
        case 0x2475ecu: goto label_2475ec;
        case 0x2475f0u: goto label_2475f0;
        case 0x2475f4u: goto label_2475f4;
        case 0x2475f8u: goto label_2475f8;
        case 0x2475fcu: goto label_2475fc;
        case 0x247600u: goto label_247600;
        case 0x247604u: goto label_247604;
        case 0x247608u: goto label_247608;
        case 0x24760cu: goto label_24760c;
        case 0x247610u: goto label_247610;
        case 0x247614u: goto label_247614;
        case 0x247618u: goto label_247618;
        case 0x24761cu: goto label_24761c;
        case 0x247620u: goto label_247620;
        case 0x247624u: goto label_247624;
        case 0x247628u: goto label_247628;
        case 0x24762cu: goto label_24762c;
        case 0x247630u: goto label_247630;
        case 0x247634u: goto label_247634;
        case 0x247638u: goto label_247638;
        case 0x24763cu: goto label_24763c;
        case 0x247640u: goto label_247640;
        case 0x247644u: goto label_247644;
        case 0x247648u: goto label_247648;
        case 0x24764cu: goto label_24764c;
        case 0x247650u: goto label_247650;
        case 0x247654u: goto label_247654;
        case 0x247658u: goto label_247658;
        case 0x24765cu: goto label_24765c;
        case 0x247660u: goto label_247660;
        case 0x247664u: goto label_247664;
        case 0x247668u: goto label_247668;
        case 0x24766cu: goto label_24766c;
        case 0x247670u: goto label_247670;
        case 0x247674u: goto label_247674;
        case 0x247678u: goto label_247678;
        case 0x24767cu: goto label_24767c;
        case 0x247680u: goto label_247680;
        case 0x247684u: goto label_247684;
        case 0x247688u: goto label_247688;
        case 0x24768cu: goto label_24768c;
        case 0x247690u: goto label_247690;
        case 0x247694u: goto label_247694;
        case 0x247698u: goto label_247698;
        case 0x24769cu: goto label_24769c;
        case 0x2476a0u: goto label_2476a0;
        case 0x2476a4u: goto label_2476a4;
        case 0x2476a8u: goto label_2476a8;
        case 0x2476acu: goto label_2476ac;
        case 0x2476b0u: goto label_2476b0;
        case 0x2476b4u: goto label_2476b4;
        case 0x2476b8u: goto label_2476b8;
        case 0x2476bcu: goto label_2476bc;
        case 0x2476c0u: goto label_2476c0;
        case 0x2476c4u: goto label_2476c4;
        case 0x2476c8u: goto label_2476c8;
        case 0x2476ccu: goto label_2476cc;
        case 0x2476d0u: goto label_2476d0;
        case 0x2476d4u: goto label_2476d4;
        case 0x2476d8u: goto label_2476d8;
        case 0x2476dcu: goto label_2476dc;
        case 0x2476e0u: goto label_2476e0;
        case 0x2476e4u: goto label_2476e4;
        case 0x2476e8u: goto label_2476e8;
        case 0x2476ecu: goto label_2476ec;
        case 0x2476f0u: goto label_2476f0;
        case 0x2476f4u: goto label_2476f4;
        case 0x2476f8u: goto label_2476f8;
        case 0x2476fcu: goto label_2476fc;
        case 0x247700u: goto label_247700;
        case 0x247704u: goto label_247704;
        case 0x247708u: goto label_247708;
        case 0x24770cu: goto label_24770c;
        case 0x247710u: goto label_247710;
        case 0x247714u: goto label_247714;
        case 0x247718u: goto label_247718;
        case 0x24771cu: goto label_24771c;
        case 0x247720u: goto label_247720;
        case 0x247724u: goto label_247724;
        case 0x247728u: goto label_247728;
        case 0x24772cu: goto label_24772c;
        case 0x247730u: goto label_247730;
        case 0x247734u: goto label_247734;
        case 0x247738u: goto label_247738;
        case 0x24773cu: goto label_24773c;
        case 0x247740u: goto label_247740;
        case 0x247744u: goto label_247744;
        case 0x247748u: goto label_247748;
        case 0x24774cu: goto label_24774c;
        case 0x247750u: goto label_247750;
        case 0x247754u: goto label_247754;
        case 0x247758u: goto label_247758;
        case 0x24775cu: goto label_24775c;
        case 0x247760u: goto label_247760;
        case 0x247764u: goto label_247764;
        case 0x247768u: goto label_247768;
        case 0x24776cu: goto label_24776c;
        case 0x247770u: goto label_247770;
        case 0x247774u: goto label_247774;
        case 0x247778u: goto label_247778;
        case 0x24777cu: goto label_24777c;
        case 0x247780u: goto label_247780;
        case 0x247784u: goto label_247784;
        case 0x247788u: goto label_247788;
        case 0x24778cu: goto label_24778c;
        case 0x247790u: goto label_247790;
        case 0x247794u: goto label_247794;
        case 0x247798u: goto label_247798;
        case 0x24779cu: goto label_24779c;
        case 0x2477a0u: goto label_2477a0;
        case 0x2477a4u: goto label_2477a4;
        case 0x2477a8u: goto label_2477a8;
        case 0x2477acu: goto label_2477ac;
        case 0x2477b0u: goto label_2477b0;
        case 0x2477b4u: goto label_2477b4;
        case 0x2477b8u: goto label_2477b8;
        case 0x2477bcu: goto label_2477bc;
        case 0x2477c0u: goto label_2477c0;
        case 0x2477c4u: goto label_2477c4;
        case 0x2477c8u: goto label_2477c8;
        case 0x2477ccu: goto label_2477cc;
        case 0x2477d0u: goto label_2477d0;
        case 0x2477d4u: goto label_2477d4;
        case 0x2477d8u: goto label_2477d8;
        case 0x2477dcu: goto label_2477dc;
        case 0x2477e0u: goto label_2477e0;
        case 0x2477e4u: goto label_2477e4;
        case 0x2477e8u: goto label_2477e8;
        case 0x2477ecu: goto label_2477ec;
        case 0x2477f0u: goto label_2477f0;
        case 0x2477f4u: goto label_2477f4;
        case 0x2477f8u: goto label_2477f8;
        case 0x2477fcu: goto label_2477fc;
        case 0x247800u: goto label_247800;
        case 0x247804u: goto label_247804;
        case 0x247808u: goto label_247808;
        case 0x24780cu: goto label_24780c;
        case 0x247810u: goto label_247810;
        case 0x247814u: goto label_247814;
        case 0x247818u: goto label_247818;
        case 0x24781cu: goto label_24781c;
        case 0x247820u: goto label_247820;
        case 0x247824u: goto label_247824;
        case 0x247828u: goto label_247828;
        case 0x24782cu: goto label_24782c;
        case 0x247830u: goto label_247830;
        case 0x247834u: goto label_247834;
        case 0x247838u: goto label_247838;
        case 0x24783cu: goto label_24783c;
        case 0x247840u: goto label_247840;
        case 0x247844u: goto label_247844;
        case 0x247848u: goto label_247848;
        case 0x24784cu: goto label_24784c;
        case 0x247850u: goto label_247850;
        case 0x247854u: goto label_247854;
        case 0x247858u: goto label_247858;
        case 0x24785cu: goto label_24785c;
        case 0x247860u: goto label_247860;
        case 0x247864u: goto label_247864;
        case 0x247868u: goto label_247868;
        case 0x24786cu: goto label_24786c;
        case 0x247870u: goto label_247870;
        case 0x247874u: goto label_247874;
        case 0x247878u: goto label_247878;
        case 0x24787cu: goto label_24787c;
        case 0x247880u: goto label_247880;
        case 0x247884u: goto label_247884;
        case 0x247888u: goto label_247888;
        case 0x24788cu: goto label_24788c;
        case 0x247890u: goto label_247890;
        case 0x247894u: goto label_247894;
        case 0x247898u: goto label_247898;
        case 0x24789cu: goto label_24789c;
        case 0x2478a0u: goto label_2478a0;
        case 0x2478a4u: goto label_2478a4;
        case 0x2478a8u: goto label_2478a8;
        case 0x2478acu: goto label_2478ac;
        case 0x2478b0u: goto label_2478b0;
        case 0x2478b4u: goto label_2478b4;
        case 0x2478b8u: goto label_2478b8;
        case 0x2478bcu: goto label_2478bc;
        case 0x2478c0u: goto label_2478c0;
        case 0x2478c4u: goto label_2478c4;
        case 0x2478c8u: goto label_2478c8;
        case 0x2478ccu: goto label_2478cc;
        case 0x2478d0u: goto label_2478d0;
        case 0x2478d4u: goto label_2478d4;
        case 0x2478d8u: goto label_2478d8;
        case 0x2478dcu: goto label_2478dc;
        case 0x2478e0u: goto label_2478e0;
        case 0x2478e4u: goto label_2478e4;
        case 0x2478e8u: goto label_2478e8;
        case 0x2478ecu: goto label_2478ec;
        case 0x2478f0u: goto label_2478f0;
        case 0x2478f4u: goto label_2478f4;
        case 0x2478f8u: goto label_2478f8;
        case 0x2478fcu: goto label_2478fc;
        case 0x247900u: goto label_247900;
        case 0x247904u: goto label_247904;
        case 0x247908u: goto label_247908;
        case 0x24790cu: goto label_24790c;
        case 0x247910u: goto label_247910;
        case 0x247914u: goto label_247914;
        case 0x247918u: goto label_247918;
        case 0x24791cu: goto label_24791c;
        case 0x247920u: goto label_247920;
        case 0x247924u: goto label_247924;
        case 0x247928u: goto label_247928;
        case 0x24792cu: goto label_24792c;
        case 0x247930u: goto label_247930;
        case 0x247934u: goto label_247934;
        case 0x247938u: goto label_247938;
        case 0x24793cu: goto label_24793c;
        case 0x247940u: goto label_247940;
        case 0x247944u: goto label_247944;
        case 0x247948u: goto label_247948;
        case 0x24794cu: goto label_24794c;
        case 0x247950u: goto label_247950;
        case 0x247954u: goto label_247954;
        case 0x247958u: goto label_247958;
        case 0x24795cu: goto label_24795c;
        case 0x247960u: goto label_247960;
        case 0x247964u: goto label_247964;
        case 0x247968u: goto label_247968;
        case 0x24796cu: goto label_24796c;
        case 0x247970u: goto label_247970;
        case 0x247974u: goto label_247974;
        case 0x247978u: goto label_247978;
        case 0x24797cu: goto label_24797c;
        case 0x247980u: goto label_247980;
        case 0x247984u: goto label_247984;
        case 0x247988u: goto label_247988;
        case 0x24798cu: goto label_24798c;
        case 0x247990u: goto label_247990;
        case 0x247994u: goto label_247994;
        case 0x247998u: goto label_247998;
        case 0x24799cu: goto label_24799c;
        case 0x2479a0u: goto label_2479a0;
        case 0x2479a4u: goto label_2479a4;
        case 0x2479a8u: goto label_2479a8;
        case 0x2479acu: goto label_2479ac;
        case 0x2479b0u: goto label_2479b0;
        case 0x2479b4u: goto label_2479b4;
        case 0x2479b8u: goto label_2479b8;
        case 0x2479bcu: goto label_2479bc;
        case 0x2479c0u: goto label_2479c0;
        case 0x2479c4u: goto label_2479c4;
        case 0x2479c8u: goto label_2479c8;
        case 0x2479ccu: goto label_2479cc;
        case 0x2479d0u: goto label_2479d0;
        case 0x2479d4u: goto label_2479d4;
        case 0x2479d8u: goto label_2479d8;
        case 0x2479dcu: goto label_2479dc;
        case 0x2479e0u: goto label_2479e0;
        case 0x2479e4u: goto label_2479e4;
        case 0x2479e8u: goto label_2479e8;
        case 0x2479ecu: goto label_2479ec;
        case 0x2479f0u: goto label_2479f0;
        case 0x2479f4u: goto label_2479f4;
        case 0x2479f8u: goto label_2479f8;
        case 0x2479fcu: goto label_2479fc;
        case 0x247a00u: goto label_247a00;
        case 0x247a04u: goto label_247a04;
        case 0x247a08u: goto label_247a08;
        case 0x247a0cu: goto label_247a0c;
        case 0x247a10u: goto label_247a10;
        case 0x247a14u: goto label_247a14;
        case 0x247a18u: goto label_247a18;
        case 0x247a1cu: goto label_247a1c;
        case 0x247a20u: goto label_247a20;
        case 0x247a24u: goto label_247a24;
        case 0x247a28u: goto label_247a28;
        case 0x247a2cu: goto label_247a2c;
        case 0x247a30u: goto label_247a30;
        case 0x247a34u: goto label_247a34;
        case 0x247a38u: goto label_247a38;
        case 0x247a3cu: goto label_247a3c;
        case 0x247a40u: goto label_247a40;
        case 0x247a44u: goto label_247a44;
        case 0x247a48u: goto label_247a48;
        case 0x247a4cu: goto label_247a4c;
        case 0x247a50u: goto label_247a50;
        case 0x247a54u: goto label_247a54;
        case 0x247a58u: goto label_247a58;
        case 0x247a5cu: goto label_247a5c;
        case 0x247a60u: goto label_247a60;
        case 0x247a64u: goto label_247a64;
        case 0x247a68u: goto label_247a68;
        case 0x247a6cu: goto label_247a6c;
        case 0x247a70u: goto label_247a70;
        case 0x247a74u: goto label_247a74;
        case 0x247a78u: goto label_247a78;
        case 0x247a7cu: goto label_247a7c;
        case 0x247a80u: goto label_247a80;
        case 0x247a84u: goto label_247a84;
        case 0x247a88u: goto label_247a88;
        case 0x247a8cu: goto label_247a8c;
        case 0x247a90u: goto label_247a90;
        case 0x247a94u: goto label_247a94;
        case 0x247a98u: goto label_247a98;
        case 0x247a9cu: goto label_247a9c;
        case 0x247aa0u: goto label_247aa0;
        case 0x247aa4u: goto label_247aa4;
        case 0x247aa8u: goto label_247aa8;
        case 0x247aacu: goto label_247aac;
        case 0x247ab0u: goto label_247ab0;
        case 0x247ab4u: goto label_247ab4;
        case 0x247ab8u: goto label_247ab8;
        case 0x247abcu: goto label_247abc;
        case 0x247ac0u: goto label_247ac0;
        case 0x247ac4u: goto label_247ac4;
        case 0x247ac8u: goto label_247ac8;
        case 0x247accu: goto label_247acc;
        case 0x247ad0u: goto label_247ad0;
        case 0x247ad4u: goto label_247ad4;
        case 0x247ad8u: goto label_247ad8;
        case 0x247adcu: goto label_247adc;
        case 0x247ae0u: goto label_247ae0;
        case 0x247ae4u: goto label_247ae4;
        case 0x247ae8u: goto label_247ae8;
        case 0x247aecu: goto label_247aec;
        case 0x247af0u: goto label_247af0;
        case 0x247af4u: goto label_247af4;
        case 0x247af8u: goto label_247af8;
        case 0x247afcu: goto label_247afc;
        case 0x247b00u: goto label_247b00;
        case 0x247b04u: goto label_247b04;
        case 0x247b08u: goto label_247b08;
        case 0x247b0cu: goto label_247b0c;
        case 0x247b10u: goto label_247b10;
        case 0x247b14u: goto label_247b14;
        case 0x247b18u: goto label_247b18;
        case 0x247b1cu: goto label_247b1c;
        case 0x247b20u: goto label_247b20;
        case 0x247b24u: goto label_247b24;
        case 0x247b28u: goto label_247b28;
        case 0x247b2cu: goto label_247b2c;
        case 0x247b30u: goto label_247b30;
        case 0x247b34u: goto label_247b34;
        case 0x247b38u: goto label_247b38;
        case 0x247b3cu: goto label_247b3c;
        case 0x247b40u: goto label_247b40;
        case 0x247b44u: goto label_247b44;
        case 0x247b48u: goto label_247b48;
        case 0x247b4cu: goto label_247b4c;
        case 0x247b50u: goto label_247b50;
        case 0x247b54u: goto label_247b54;
        case 0x247b58u: goto label_247b58;
        case 0x247b5cu: goto label_247b5c;
        case 0x247b60u: goto label_247b60;
        case 0x247b64u: goto label_247b64;
        case 0x247b68u: goto label_247b68;
        case 0x247b6cu: goto label_247b6c;
        case 0x247b70u: goto label_247b70;
        case 0x247b74u: goto label_247b74;
        case 0x247b78u: goto label_247b78;
        case 0x247b7cu: goto label_247b7c;
        case 0x247b80u: goto label_247b80;
        case 0x247b84u: goto label_247b84;
        case 0x247b88u: goto label_247b88;
        case 0x247b8cu: goto label_247b8c;
        case 0x247b90u: goto label_247b90;
        case 0x247b94u: goto label_247b94;
        case 0x247b98u: goto label_247b98;
        case 0x247b9cu: goto label_247b9c;
        case 0x247ba0u: goto label_247ba0;
        case 0x247ba4u: goto label_247ba4;
        case 0x247ba8u: goto label_247ba8;
        case 0x247bacu: goto label_247bac;
        case 0x247bb0u: goto label_247bb0;
        case 0x247bb4u: goto label_247bb4;
        case 0x247bb8u: goto label_247bb8;
        case 0x247bbcu: goto label_247bbc;
        case 0x247bc0u: goto label_247bc0;
        case 0x247bc4u: goto label_247bc4;
        case 0x247bc8u: goto label_247bc8;
        case 0x247bccu: goto label_247bcc;
        case 0x247bd0u: goto label_247bd0;
        case 0x247bd4u: goto label_247bd4;
        case 0x247bd8u: goto label_247bd8;
        case 0x247bdcu: goto label_247bdc;
        case 0x247be0u: goto label_247be0;
        case 0x247be4u: goto label_247be4;
        case 0x247be8u: goto label_247be8;
        case 0x247becu: goto label_247bec;
        case 0x247bf0u: goto label_247bf0;
        case 0x247bf4u: goto label_247bf4;
        case 0x247bf8u: goto label_247bf8;
        case 0x247bfcu: goto label_247bfc;
        case 0x247c00u: goto label_247c00;
        case 0x247c04u: goto label_247c04;
        case 0x247c08u: goto label_247c08;
        case 0x247c0cu: goto label_247c0c;
        case 0x247c10u: goto label_247c10;
        case 0x247c14u: goto label_247c14;
        case 0x247c18u: goto label_247c18;
        case 0x247c1cu: goto label_247c1c;
        case 0x247c20u: goto label_247c20;
        case 0x247c24u: goto label_247c24;
        case 0x247c28u: goto label_247c28;
        case 0x247c2cu: goto label_247c2c;
        case 0x247c30u: goto label_247c30;
        case 0x247c34u: goto label_247c34;
        case 0x247c38u: goto label_247c38;
        case 0x247c3cu: goto label_247c3c;
        case 0x247c40u: goto label_247c40;
        case 0x247c44u: goto label_247c44;
        case 0x247c48u: goto label_247c48;
        case 0x247c4cu: goto label_247c4c;
        case 0x247c50u: goto label_247c50;
        case 0x247c54u: goto label_247c54;
        case 0x247c58u: goto label_247c58;
        case 0x247c5cu: goto label_247c5c;
        case 0x247c60u: goto label_247c60;
        case 0x247c64u: goto label_247c64;
        case 0x247c68u: goto label_247c68;
        case 0x247c6cu: goto label_247c6c;
        case 0x247c70u: goto label_247c70;
        case 0x247c74u: goto label_247c74;
        case 0x247c78u: goto label_247c78;
        case 0x247c7cu: goto label_247c7c;
        case 0x247c80u: goto label_247c80;
        case 0x247c84u: goto label_247c84;
        case 0x247c88u: goto label_247c88;
        case 0x247c8cu: goto label_247c8c;
        case 0x247c90u: goto label_247c90;
        case 0x247c94u: goto label_247c94;
        case 0x247c98u: goto label_247c98;
        case 0x247c9cu: goto label_247c9c;
        case 0x247ca0u: goto label_247ca0;
        case 0x247ca4u: goto label_247ca4;
        case 0x247ca8u: goto label_247ca8;
        case 0x247cacu: goto label_247cac;
        case 0x247cb0u: goto label_247cb0;
        case 0x247cb4u: goto label_247cb4;
        case 0x247cb8u: goto label_247cb8;
        case 0x247cbcu: goto label_247cbc;
        case 0x247cc0u: goto label_247cc0;
        case 0x247cc4u: goto label_247cc4;
        case 0x247cc8u: goto label_247cc8;
        case 0x247cccu: goto label_247ccc;
        case 0x247cd0u: goto label_247cd0;
        case 0x247cd4u: goto label_247cd4;
        case 0x247cd8u: goto label_247cd8;
        case 0x247cdcu: goto label_247cdc;
        case 0x247ce0u: goto label_247ce0;
        case 0x247ce4u: goto label_247ce4;
        case 0x247ce8u: goto label_247ce8;
        case 0x247cecu: goto label_247cec;
        case 0x247cf0u: goto label_247cf0;
        case 0x247cf4u: goto label_247cf4;
        case 0x247cf8u: goto label_247cf8;
        case 0x247cfcu: goto label_247cfc;
        case 0x247d00u: goto label_247d00;
        case 0x247d04u: goto label_247d04;
        case 0x247d08u: goto label_247d08;
        case 0x247d0cu: goto label_247d0c;
        case 0x247d10u: goto label_247d10;
        case 0x247d14u: goto label_247d14;
        case 0x247d18u: goto label_247d18;
        case 0x247d1cu: goto label_247d1c;
        case 0x247d20u: goto label_247d20;
        case 0x247d24u: goto label_247d24;
        case 0x247d28u: goto label_247d28;
        case 0x247d2cu: goto label_247d2c;
        case 0x247d30u: goto label_247d30;
        case 0x247d34u: goto label_247d34;
        case 0x247d38u: goto label_247d38;
        case 0x247d3cu: goto label_247d3c;
        case 0x247d40u: goto label_247d40;
        case 0x247d44u: goto label_247d44;
        case 0x247d48u: goto label_247d48;
        case 0x247d4cu: goto label_247d4c;
        case 0x247d50u: goto label_247d50;
        case 0x247d54u: goto label_247d54;
        case 0x247d58u: goto label_247d58;
        case 0x247d5cu: goto label_247d5c;
        case 0x247d60u: goto label_247d60;
        case 0x247d64u: goto label_247d64;
        case 0x247d68u: goto label_247d68;
        case 0x247d6cu: goto label_247d6c;
        case 0x247d70u: goto label_247d70;
        case 0x247d74u: goto label_247d74;
        case 0x247d78u: goto label_247d78;
        case 0x247d7cu: goto label_247d7c;
        case 0x247d80u: goto label_247d80;
        case 0x247d84u: goto label_247d84;
        case 0x247d88u: goto label_247d88;
        case 0x247d8cu: goto label_247d8c;
        case 0x247d90u: goto label_247d90;
        case 0x247d94u: goto label_247d94;
        case 0x247d98u: goto label_247d98;
        case 0x247d9cu: goto label_247d9c;
        case 0x247da0u: goto label_247da0;
        case 0x247da4u: goto label_247da4;
        case 0x247da8u: goto label_247da8;
        case 0x247dacu: goto label_247dac;
        case 0x247db0u: goto label_247db0;
        case 0x247db4u: goto label_247db4;
        case 0x247db8u: goto label_247db8;
        case 0x247dbcu: goto label_247dbc;
        case 0x247dc0u: goto label_247dc0;
        case 0x247dc4u: goto label_247dc4;
        case 0x247dc8u: goto label_247dc8;
        case 0x247dccu: goto label_247dcc;
        case 0x247dd0u: goto label_247dd0;
        case 0x247dd4u: goto label_247dd4;
        case 0x247dd8u: goto label_247dd8;
        case 0x247ddcu: goto label_247ddc;
        case 0x247de0u: goto label_247de0;
        case 0x247de4u: goto label_247de4;
        case 0x247de8u: goto label_247de8;
        case 0x247decu: goto label_247dec;
        case 0x247df0u: goto label_247df0;
        case 0x247df4u: goto label_247df4;
        case 0x247df8u: goto label_247df8;
        case 0x247dfcu: goto label_247dfc;
        case 0x247e00u: goto label_247e00;
        case 0x247e04u: goto label_247e04;
        case 0x247e08u: goto label_247e08;
        case 0x247e0cu: goto label_247e0c;
        case 0x247e10u: goto label_247e10;
        case 0x247e14u: goto label_247e14;
        case 0x247e18u: goto label_247e18;
        case 0x247e1cu: goto label_247e1c;
        case 0x247e20u: goto label_247e20;
        case 0x247e24u: goto label_247e24;
        case 0x247e28u: goto label_247e28;
        case 0x247e2cu: goto label_247e2c;
        case 0x247e30u: goto label_247e30;
        case 0x247e34u: goto label_247e34;
        case 0x247e38u: goto label_247e38;
        case 0x247e3cu: goto label_247e3c;
        case 0x247e40u: goto label_247e40;
        case 0x247e44u: goto label_247e44;
        case 0x247e48u: goto label_247e48;
        case 0x247e4cu: goto label_247e4c;
        case 0x247e50u: goto label_247e50;
        case 0x247e54u: goto label_247e54;
        case 0x247e58u: goto label_247e58;
        case 0x247e5cu: goto label_247e5c;
        case 0x247e60u: goto label_247e60;
        case 0x247e64u: goto label_247e64;
        case 0x247e68u: goto label_247e68;
        case 0x247e6cu: goto label_247e6c;
        case 0x247e70u: goto label_247e70;
        case 0x247e74u: goto label_247e74;
        case 0x247e78u: goto label_247e78;
        case 0x247e7cu: goto label_247e7c;
        case 0x247e80u: goto label_247e80;
        case 0x247e84u: goto label_247e84;
        case 0x247e88u: goto label_247e88;
        case 0x247e8cu: goto label_247e8c;
        case 0x247e90u: goto label_247e90;
        case 0x247e94u: goto label_247e94;
        case 0x247e98u: goto label_247e98;
        case 0x247e9cu: goto label_247e9c;
        case 0x247ea0u: goto label_247ea0;
        case 0x247ea4u: goto label_247ea4;
        case 0x247ea8u: goto label_247ea8;
        case 0x247eacu: goto label_247eac;
        case 0x247eb0u: goto label_247eb0;
        case 0x247eb4u: goto label_247eb4;
        case 0x247eb8u: goto label_247eb8;
        case 0x247ebcu: goto label_247ebc;
        case 0x247ec0u: goto label_247ec0;
        case 0x247ec4u: goto label_247ec4;
        case 0x247ec8u: goto label_247ec8;
        case 0x247eccu: goto label_247ecc;
        case 0x247ed0u: goto label_247ed0;
        case 0x247ed4u: goto label_247ed4;
        case 0x247ed8u: goto label_247ed8;
        case 0x247edcu: goto label_247edc;
        case 0x247ee0u: goto label_247ee0;
        case 0x247ee4u: goto label_247ee4;
        case 0x247ee8u: goto label_247ee8;
        case 0x247eecu: goto label_247eec;
        case 0x247ef0u: goto label_247ef0;
        case 0x247ef4u: goto label_247ef4;
        case 0x247ef8u: goto label_247ef8;
        case 0x247efcu: goto label_247efc;
        case 0x247f00u: goto label_247f00;
        case 0x247f04u: goto label_247f04;
        case 0x247f08u: goto label_247f08;
        case 0x247f0cu: goto label_247f0c;
        case 0x247f10u: goto label_247f10;
        case 0x247f14u: goto label_247f14;
        case 0x247f18u: goto label_247f18;
        case 0x247f1cu: goto label_247f1c;
        case 0x247f20u: goto label_247f20;
        case 0x247f24u: goto label_247f24;
        case 0x247f28u: goto label_247f28;
        case 0x247f2cu: goto label_247f2c;
        case 0x247f30u: goto label_247f30;
        case 0x247f34u: goto label_247f34;
        case 0x247f38u: goto label_247f38;
        case 0x247f3cu: goto label_247f3c;
        case 0x247f40u: goto label_247f40;
        case 0x247f44u: goto label_247f44;
        case 0x247f48u: goto label_247f48;
        case 0x247f4cu: goto label_247f4c;
        case 0x247f50u: goto label_247f50;
        case 0x247f54u: goto label_247f54;
        case 0x247f58u: goto label_247f58;
        case 0x247f5cu: goto label_247f5c;
        case 0x247f60u: goto label_247f60;
        case 0x247f64u: goto label_247f64;
        case 0x247f68u: goto label_247f68;
        case 0x247f6cu: goto label_247f6c;
        case 0x247f70u: goto label_247f70;
        case 0x247f74u: goto label_247f74;
        case 0x247f78u: goto label_247f78;
        case 0x247f7cu: goto label_247f7c;
        case 0x247f80u: goto label_247f80;
        case 0x247f84u: goto label_247f84;
        case 0x247f88u: goto label_247f88;
        case 0x247f8cu: goto label_247f8c;
        case 0x247f90u: goto label_247f90;
        case 0x247f94u: goto label_247f94;
        case 0x247f98u: goto label_247f98;
        case 0x247f9cu: goto label_247f9c;
        case 0x247fa0u: goto label_247fa0;
        case 0x247fa4u: goto label_247fa4;
        case 0x247fa8u: goto label_247fa8;
        case 0x247facu: goto label_247fac;
        case 0x247fb0u: goto label_247fb0;
        case 0x247fb4u: goto label_247fb4;
        case 0x247fb8u: goto label_247fb8;
        case 0x247fbcu: goto label_247fbc;
        case 0x247fc0u: goto label_247fc0;
        case 0x247fc4u: goto label_247fc4;
        case 0x247fc8u: goto label_247fc8;
        case 0x247fccu: goto label_247fcc;
        case 0x247fd0u: goto label_247fd0;
        case 0x247fd4u: goto label_247fd4;
        case 0x247fd8u: goto label_247fd8;
        case 0x247fdcu: goto label_247fdc;
        case 0x247fe0u: goto label_247fe0;
        case 0x247fe4u: goto label_247fe4;
        case 0x247fe8u: goto label_247fe8;
        case 0x247fecu: goto label_247fec;
        case 0x247ff0u: goto label_247ff0;
        case 0x247ff4u: goto label_247ff4;
        case 0x247ff8u: goto label_247ff8;
        case 0x247ffcu: goto label_247ffc;
        case 0x248000u: goto label_248000;
        case 0x248004u: goto label_248004;
        case 0x248008u: goto label_248008;
        case 0x24800cu: goto label_24800c;
        case 0x248010u: goto label_248010;
        case 0x248014u: goto label_248014;
        case 0x248018u: goto label_248018;
        case 0x24801cu: goto label_24801c;
        case 0x248020u: goto label_248020;
        case 0x248024u: goto label_248024;
        case 0x248028u: goto label_248028;
        case 0x24802cu: goto label_24802c;
        case 0x248030u: goto label_248030;
        case 0x248034u: goto label_248034;
        case 0x248038u: goto label_248038;
        case 0x24803cu: goto label_24803c;
        case 0x248040u: goto label_248040;
        case 0x248044u: goto label_248044;
        case 0x248048u: goto label_248048;
        case 0x24804cu: goto label_24804c;
        case 0x248050u: goto label_248050;
        case 0x248054u: goto label_248054;
        case 0x248058u: goto label_248058;
        case 0x24805cu: goto label_24805c;
        case 0x248060u: goto label_248060;
        case 0x248064u: goto label_248064;
        case 0x248068u: goto label_248068;
        case 0x24806cu: goto label_24806c;
        case 0x248070u: goto label_248070;
        case 0x248074u: goto label_248074;
        case 0x248078u: goto label_248078;
        case 0x24807cu: goto label_24807c;
        case 0x248080u: goto label_248080;
        case 0x248084u: goto label_248084;
        case 0x248088u: goto label_248088;
        case 0x24808cu: goto label_24808c;
        case 0x248090u: goto label_248090;
        case 0x248094u: goto label_248094;
        case 0x248098u: goto label_248098;
        case 0x24809cu: goto label_24809c;
        case 0x2480a0u: goto label_2480a0;
        case 0x2480a4u: goto label_2480a4;
        case 0x2480a8u: goto label_2480a8;
        case 0x2480acu: goto label_2480ac;
        case 0x2480b0u: goto label_2480b0;
        case 0x2480b4u: goto label_2480b4;
        case 0x2480b8u: goto label_2480b8;
        case 0x2480bcu: goto label_2480bc;
        case 0x2480c0u: goto label_2480c0;
        case 0x2480c4u: goto label_2480c4;
        case 0x2480c8u: goto label_2480c8;
        case 0x2480ccu: goto label_2480cc;
        case 0x2480d0u: goto label_2480d0;
        case 0x2480d4u: goto label_2480d4;
        case 0x2480d8u: goto label_2480d8;
        case 0x2480dcu: goto label_2480dc;
        case 0x2480e0u: goto label_2480e0;
        case 0x2480e4u: goto label_2480e4;
        case 0x2480e8u: goto label_2480e8;
        case 0x2480ecu: goto label_2480ec;
        case 0x2480f0u: goto label_2480f0;
        case 0x2480f4u: goto label_2480f4;
        case 0x2480f8u: goto label_2480f8;
        case 0x2480fcu: goto label_2480fc;
        case 0x248100u: goto label_248100;
        case 0x248104u: goto label_248104;
        case 0x248108u: goto label_248108;
        case 0x24810cu: goto label_24810c;
        case 0x248110u: goto label_248110;
        case 0x248114u: goto label_248114;
        case 0x248118u: goto label_248118;
        case 0x24811cu: goto label_24811c;
        case 0x248120u: goto label_248120;
        case 0x248124u: goto label_248124;
        case 0x248128u: goto label_248128;
        case 0x24812cu: goto label_24812c;
        case 0x248130u: goto label_248130;
        case 0x248134u: goto label_248134;
        case 0x248138u: goto label_248138;
        case 0x24813cu: goto label_24813c;
        case 0x248140u: goto label_248140;
        case 0x248144u: goto label_248144;
        case 0x248148u: goto label_248148;
        case 0x24814cu: goto label_24814c;
        case 0x248150u: goto label_248150;
        case 0x248154u: goto label_248154;
        case 0x248158u: goto label_248158;
        case 0x24815cu: goto label_24815c;
        case 0x248160u: goto label_248160;
        case 0x248164u: goto label_248164;
        case 0x248168u: goto label_248168;
        case 0x24816cu: goto label_24816c;
        case 0x248170u: goto label_248170;
        case 0x248174u: goto label_248174;
        case 0x248178u: goto label_248178;
        case 0x24817cu: goto label_24817c;
        case 0x248180u: goto label_248180;
        case 0x248184u: goto label_248184;
        case 0x248188u: goto label_248188;
        case 0x24818cu: goto label_24818c;
        case 0x248190u: goto label_248190;
        case 0x248194u: goto label_248194;
        case 0x248198u: goto label_248198;
        case 0x24819cu: goto label_24819c;
        case 0x2481a0u: goto label_2481a0;
        case 0x2481a4u: goto label_2481a4;
        case 0x2481a8u: goto label_2481a8;
        case 0x2481acu: goto label_2481ac;
        case 0x2481b0u: goto label_2481b0;
        case 0x2481b4u: goto label_2481b4;
        case 0x2481b8u: goto label_2481b8;
        case 0x2481bcu: goto label_2481bc;
        case 0x2481c0u: goto label_2481c0;
        case 0x2481c4u: goto label_2481c4;
        case 0x2481c8u: goto label_2481c8;
        case 0x2481ccu: goto label_2481cc;
        case 0x2481d0u: goto label_2481d0;
        case 0x2481d4u: goto label_2481d4;
        case 0x2481d8u: goto label_2481d8;
        case 0x2481dcu: goto label_2481dc;
        case 0x2481e0u: goto label_2481e0;
        case 0x2481e4u: goto label_2481e4;
        case 0x2481e8u: goto label_2481e8;
        case 0x2481ecu: goto label_2481ec;
        case 0x2481f0u: goto label_2481f0;
        case 0x2481f4u: goto label_2481f4;
        case 0x2481f8u: goto label_2481f8;
        case 0x2481fcu: goto label_2481fc;
        case 0x248200u: goto label_248200;
        case 0x248204u: goto label_248204;
        case 0x248208u: goto label_248208;
        case 0x24820cu: goto label_24820c;
        case 0x248210u: goto label_248210;
        case 0x248214u: goto label_248214;
        case 0x248218u: goto label_248218;
        case 0x24821cu: goto label_24821c;
        case 0x248220u: goto label_248220;
        case 0x248224u: goto label_248224;
        case 0x248228u: goto label_248228;
        case 0x24822cu: goto label_24822c;
        case 0x248230u: goto label_248230;
        case 0x248234u: goto label_248234;
        case 0x248238u: goto label_248238;
        case 0x24823cu: goto label_24823c;
        case 0x248240u: goto label_248240;
        case 0x248244u: goto label_248244;
        case 0x248248u: goto label_248248;
        case 0x24824cu: goto label_24824c;
        case 0x248250u: goto label_248250;
        case 0x248254u: goto label_248254;
        case 0x248258u: goto label_248258;
        case 0x24825cu: goto label_24825c;
        case 0x248260u: goto label_248260;
        case 0x248264u: goto label_248264;
        case 0x248268u: goto label_248268;
        case 0x24826cu: goto label_24826c;
        case 0x248270u: goto label_248270;
        case 0x248274u: goto label_248274;
        case 0x248278u: goto label_248278;
        case 0x24827cu: goto label_24827c;
        case 0x248280u: goto label_248280;
        case 0x248284u: goto label_248284;
        case 0x248288u: goto label_248288;
        case 0x24828cu: goto label_24828c;
        case 0x248290u: goto label_248290;
        case 0x248294u: goto label_248294;
        case 0x248298u: goto label_248298;
        case 0x24829cu: goto label_24829c;
        case 0x2482a0u: goto label_2482a0;
        case 0x2482a4u: goto label_2482a4;
        case 0x2482a8u: goto label_2482a8;
        case 0x2482acu: goto label_2482ac;
        case 0x2482b0u: goto label_2482b0;
        default: break;
    }

    ctx->pc = 0x246f10u;

label_246f10:
    // 0x246f10: 0x27bdf820  addiu       $sp, $sp, -0x7E0
    ctx->pc = 0x246f10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294965280));
label_246f14:
    // 0x246f14: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x246f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_246f18:
    // 0x246f18: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x246f18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_246f1c:
    // 0x246f1c: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x246f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_246f20:
    // 0x246f20: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x246f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_246f24:
    // 0x246f24: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x246f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_246f28:
    // 0x246f28: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x246f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_246f2c:
    // 0x246f2c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x246f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_246f30:
    // 0x246f30: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x246f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_246f34:
    // 0x246f34: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x246f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_246f38:
    // 0x246f38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x246f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_246f3c:
    // 0x246f3c: 0xc0873cc  jal         func_21CF30
label_246f40:
    if (ctx->pc == 0x246F40u) {
        ctx->pc = 0x246F40u;
            // 0x246f40: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->pc = 0x246F44u;
        goto label_246f44;
    }
    ctx->pc = 0x246F3Cu;
    SET_GPR_U32(ctx, 31, 0x246F44u);
    ctx->pc = 0x246F40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246F3Cu;
            // 0x246f40: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21CF30u;
    if (runtime->hasFunction(0x21CF30u)) {
        auto targetFn = runtime->lookupFunction(0x21CF30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246F44u; }
        if (ctx->pc != 0x246F44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__9CMenuFontFv_0x21cf30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246F44u; }
        if (ctx->pc != 0x246F44u) { return; }
    }
    ctx->pc = 0x246F44u;
label_246f44:
    // 0x246f44: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x246f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_246f48:
    // 0x246f48: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x246f48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_246f4c:
    // 0x246f4c: 0x24421ef0  addiu       $v0, $v0, 0x1EF0
    ctx->pc = 0x246f4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 7920));
label_246f50:
    // 0x246f50: 0x27b000c0  addiu       $s0, $sp, 0xC0
    ctx->pc = 0x246f50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_246f54:
    // 0x246f54: 0xc04d0e8  jal         func_1343A0
label_246f58:
    if (ctx->pc == 0x246F58u) {
        ctx->pc = 0x246F58u;
            // 0x246f58: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
        ctx->pc = 0x246F5Cu;
        goto label_246f5c;
    }
    ctx->pc = 0x246F54u;
    SET_GPR_U32(ctx, 31, 0x246F5Cu);
    ctx->pc = 0x246F58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246F54u;
            // 0x246f58: 0xafa200a0  sw          $v0, 0xA0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1343A0u;
    if (runtime->hasFunction(0x1343A0u)) {
        auto targetFn = runtime->lookupFunction(0x1343A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246F5Cu; }
        if (ctx->pc != 0x246F5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ps2___ct__11mgCDrawPrimFv_0x1343a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246F5Cu; }
        if (ctx->pc != 0x246F5Cu) { return; }
    }
    ctx->pc = 0x246F5Cu;
label_246f5c:
    // 0x246f5c: 0x8f8395c0  lw          $v1, -0x6A40($gp)
    ctx->pc = 0x246f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_246f60:
    // 0x246f60: 0x8c71017c  lw          $s1, 0x17C($v1)
    ctx->pc = 0x246f60u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 380)));
label_246f64:
    // 0x246f64: 0x84630014  lh          $v1, 0x14($v1)
    ctx->pc = 0x246f64u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 20)));
label_246f68:
    // 0x246f68: 0x2c61000c  sltiu       $at, $v1, 0xC
    ctx->pc = 0x246f68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)12) ? 1 : 0);
label_246f6c:
    // 0x246f6c: 0x102004c5  beqz        $at, . + 4 + (0x4C5 << 2)
label_246f70:
    if (ctx->pc == 0x246F70u) {
        ctx->pc = 0x246F70u;
            // 0x246f70: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x246F74u;
        goto label_246f74;
    }
    ctx->pc = 0x246F6Cu;
    {
        const bool branch_taken_0x246f6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x246F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x246F6Cu;
            // 0x246f70: 0x3c040037  lui         $a0, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x246f6c) {
            ctx->pc = 0x248284u;
            goto label_248284;
        }
    }
    ctx->pc = 0x246F74u;
label_246f74:
    // 0x246f74: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x246f74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_246f78:
    // 0x246f78: 0x2484b840  addiu       $a0, $a0, -0x47C0
    ctx->pc = 0x246f78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948928));
label_246f7c:
    // 0x246f7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x246f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_246f80:
    // 0x246f80: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x246f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_246f84:
    // 0x246f84: 0x600008  jr          $v1
label_246f88:
    if (ctx->pc == 0x246F88u) {
        ctx->pc = 0x246F8Cu;
        goto label_246f8c;
    }
    ctx->pc = 0x246F84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x246F8Cu: goto label_246f8c;
            case 0x24785Cu: goto label_24785c;
            case 0x247AE0u: goto label_247ae0;
            case 0x247E8Cu: goto label_247e8c;
            case 0x24805Cu: goto label_24805c;
            case 0x248168u: goto label_248168;
            case 0x248284u: goto label_248284;
            default: break;
        }
        return;
    }
    ctx->pc = 0x246F8Cu;
label_246f8c:
    // 0x246f8c: 0x8f8294f8  lw          $v0, -0x6B08($gp)
    ctx->pc = 0x246f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_246f90:
    // 0x246f90: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x246f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_246f94:
    // 0x246f94: 0x8c450010  lw          $a1, 0x10($v0)
    ctx->pc = 0x246f94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_246f98:
    // 0x246f98: 0xc04ba14  jal         func_12E850
label_246f9c:
    if (ctx->pc == 0x246F9Cu) {
        ctx->pc = 0x246F9Cu;
            // 0x246f9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x246FA0u;
        goto label_246fa0;
    }
    ctx->pc = 0x246F98u;
    SET_GPR_U32(ctx, 31, 0x246FA0u);
    ctx->pc = 0x246F9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246F98u;
            // 0x246f9c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246FA0u; }
        if (ctx->pc != 0x246FA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246FA0u; }
        if (ctx->pc != 0x246FA0u) { return; }
    }
    ctx->pc = 0x246FA0u;
label_246fa0:
    // 0x246fa0: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x246fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_246fa4:
    // 0x246fa4: 0xc087ec4  jal         func_21FB10
label_246fa8:
    if (ctx->pc == 0x246FA8u) {
        ctx->pc = 0x246FA8u;
            // 0x246fa8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x246FACu;
        goto label_246fac;
    }
    ctx->pc = 0x246FA4u;
    SET_GPR_U32(ctx, 31, 0x246FACu);
    ctx->pc = 0x246FA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246FA4u;
            // 0x246fa8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246FACu; }
        if (ctx->pc != 0x246FACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246FACu; }
        if (ctx->pc != 0x246FACu) { return; }
    }
    ctx->pc = 0x246FACu;
label_246fac:
    // 0x246fac: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x246facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_246fb0:
    // 0x246fb0: 0xc04d128  jal         func_1344A0
label_246fb4:
    if (ctx->pc == 0x246FB4u) {
        ctx->pc = 0x246FB4u;
            // 0x246fb4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x246FB8u;
        goto label_246fb8;
    }
    ctx->pc = 0x246FB0u;
    SET_GPR_U32(ctx, 31, 0x246FB8u);
    ctx->pc = 0x246FB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246FB0u;
            // 0x246fb4: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246FB8u; }
        if (ctx->pc != 0x246FB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246FB8u; }
        if (ctx->pc != 0x246FB8u) { return; }
    }
    ctx->pc = 0x246FB8u;
label_246fb8:
    // 0x246fb8: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x246fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_246fbc:
    // 0x246fbc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x246fbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_246fc0:
    // 0x246fc0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x246fc0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_246fc4:
    // 0x246fc4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x246fc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_246fc8:
    // 0x246fc8: 0xc04d320  jal         func_134C80
label_246fcc:
    if (ctx->pc == 0x246FCCu) {
        ctx->pc = 0x246FCCu;
            // 0x246fcc: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x246FD0u;
        goto label_246fd0;
    }
    ctx->pc = 0x246FC8u;
    SET_GPR_U32(ctx, 31, 0x246FD0u);
    ctx->pc = 0x246FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246FC8u;
            // 0x246fcc: 0x24080040  addiu       $t0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246FD0u; }
        if (ctx->pc != 0x246FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246FD0u; }
        if (ctx->pc != 0x246FD0u) { return; }
    }
    ctx->pc = 0x246FD0u;
label_246fd0:
    // 0x246fd0: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x246fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_246fd4:
    // 0x246fd4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x246fd4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_246fd8:
    // 0x246fd8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x246fd8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_246fdc:
    // 0x246fdc: 0xc04d2c8  jal         func_134B20
label_246fe0:
    if (ctx->pc == 0x246FE0u) {
        ctx->pc = 0x246FE0u;
            // 0x246fe0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x246FE4u;
        goto label_246fe4;
    }
    ctx->pc = 0x246FDCu;
    SET_GPR_U32(ctx, 31, 0x246FE4u);
    ctx->pc = 0x246FE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246FDCu;
            // 0x246fe0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246FE4u; }
        if (ctx->pc != 0x246FE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246FE4u; }
        if (ctx->pc != 0x246FE4u) { return; }
    }
    ctx->pc = 0x246FE4u;
label_246fe4:
    // 0x246fe4: 0x8f858780  lw          $a1, -0x7880($gp)
    ctx->pc = 0x246fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936448)));
label_246fe8:
    // 0x246fe8: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x246fe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_246fec:
    // 0x246fec: 0x8f868784  lw          $a2, -0x787C($gp)
    ctx->pc = 0x246fecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294936452)));
label_246ff0:
    // 0x246ff0: 0xc04d2c8  jal         func_134B20
label_246ff4:
    if (ctx->pc == 0x246FF4u) {
        ctx->pc = 0x246FF4u;
            // 0x246ff4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x246FF8u;
        goto label_246ff8;
    }
    ctx->pc = 0x246FF0u;
    SET_GPR_U32(ctx, 31, 0x246FF8u);
    ctx->pc = 0x246FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x246FF0u;
            // 0x246ff4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246FF8u; }
        if (ctx->pc != 0x246FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x246FF8u; }
        if (ctx->pc != 0x246FF8u) { return; }
    }
    ctx->pc = 0x246FF8u;
label_246ff8:
    // 0x246ff8: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x246ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_246ffc:
    // 0x246ffc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x246ffcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247000:
    // 0x247000: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x247000u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247004:
    // 0x247004: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x247004u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247008:
    // 0x247008: 0xc04d320  jal         func_134C80
label_24700c:
    if (ctx->pc == 0x24700Cu) {
        ctx->pc = 0x24700Cu;
            // 0x24700c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x247010u;
        goto label_247010;
    }
    ctx->pc = 0x247008u;
    SET_GPR_U32(ctx, 31, 0x247010u);
    ctx->pc = 0x24700Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247008u;
            // 0x24700c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247010u; }
        if (ctx->pc != 0x247010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247010u; }
        if (ctx->pc != 0x247010u) { return; }
    }
    ctx->pc = 0x247010u;
label_247010:
    // 0x247010: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x247010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_247014:
    // 0x247014: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x247014u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_247018:
    // 0x247018: 0x2406003c  addiu       $a2, $zero, 0x3C
    ctx->pc = 0x247018u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
label_24701c:
    // 0x24701c: 0xc04d2c8  jal         func_134B20
label_247020:
    if (ctx->pc == 0x247020u) {
        ctx->pc = 0x247020u;
            // 0x247020: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247024u;
        goto label_247024;
    }
    ctx->pc = 0x24701Cu;
    SET_GPR_U32(ctx, 31, 0x247024u);
    ctx->pc = 0x247020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24701Cu;
            // 0x247020: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247024u; }
        if (ctx->pc != 0x247024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247024u; }
        if (ctx->pc != 0x247024u) { return; }
    }
    ctx->pc = 0x247024u;
label_247024:
    // 0x247024: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x247024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_247028:
    // 0x247028: 0x24050114  addiu       $a1, $zero, 0x114
    ctx->pc = 0x247028u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 276));
label_24702c:
    // 0x24702c: 0x2406013c  addiu       $a2, $zero, 0x13C
    ctx->pc = 0x24702cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 316));
label_247030:
    // 0x247030: 0xc04d2c8  jal         func_134B20
label_247034:
    if (ctx->pc == 0x247034u) {
        ctx->pc = 0x247034u;
            // 0x247034: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247038u;
        goto label_247038;
    }
    ctx->pc = 0x247030u;
    SET_GPR_U32(ctx, 31, 0x247038u);
    ctx->pc = 0x247034u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247030u;
            // 0x247034: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247038u; }
        if (ctx->pc != 0x247038u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247038u; }
        if (ctx->pc != 0x247038u) { return; }
    }
    ctx->pc = 0x247038u;
label_247038:
    // 0x247038: 0xc04d1a4  jal         func_134690
label_24703c:
    if (ctx->pc == 0x24703Cu) {
        ctx->pc = 0x24703Cu;
            // 0x24703c: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x247040u;
        goto label_247040;
    }
    ctx->pc = 0x247038u;
    SET_GPR_U32(ctx, 31, 0x247040u);
    ctx->pc = 0x24703Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247038u;
            // 0x24703c: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247040u; }
        if (ctx->pc != 0x247040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247040u; }
        if (ctx->pc != 0x247040u) { return; }
    }
    ctx->pc = 0x247040u;
label_247040:
    // 0x247040: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x247040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_247044:
    // 0x247044: 0xc087ec4  jal         func_21FB10
label_247048:
    if (ctx->pc == 0x247048u) {
        ctx->pc = 0x247048u;
            // 0x247048: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24704Cu;
        goto label_24704c;
    }
    ctx->pc = 0x247044u;
    SET_GPR_U32(ctx, 31, 0x24704Cu);
    ctx->pc = 0x247048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247044u;
            // 0x247048: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24704Cu; }
        if (ctx->pc != 0x24704Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24704Cu; }
        if (ctx->pc != 0x24704Cu) { return; }
    }
    ctx->pc = 0x24704Cu;
label_24704c:
    // 0x24704c: 0xc78083c0  lwc1        $f0, -0x7C40($gp)
    ctx->pc = 0x24704cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935488)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247050:
    // 0x247050: 0x27a207dc  addiu       $v0, $sp, 0x7DC
    ctx->pc = 0x247050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 2012));
label_247054:
    // 0x247054: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x247054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_247058:
    // 0x247058: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x247058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_24705c:
    // 0x24705c: 0x844202fe  lh          $v0, 0x2FE($v0)
    ctx->pc = 0x24705cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
label_247060:
    // 0x247060: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x247060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_247064:
    // 0x247064: 0x31183  sra         $v0, $v1, 6
    ctx->pc = 0x247064u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 6));
label_247068:
    // 0x247068: 0x4610004  bgez        $v1, . + 4 + (0x4 << 2)
label_24706c:
    if (ctx->pc == 0x24706Cu) {
        ctx->pc = 0x24706Cu;
            // 0x24706c: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->pc = 0x247070u;
        goto label_247070;
    }
    ctx->pc = 0x247068u;
    {
        const bool branch_taken_0x247068 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x24706Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247068u;
            // 0x24706c: 0xafa200b0  sw          $v0, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247068) {
            ctx->pc = 0x24707Cu;
            goto label_24707c;
        }
    }
    ctx->pc = 0x247070u;
label_247070:
    // 0x247070: 0x2462003f  addiu       $v0, $v1, 0x3F
    ctx->pc = 0x247070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 63));
label_247074:
    // 0x247074: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x247074u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
label_247078:
    // 0x247078: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x247078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
label_24707c:
    // 0x24707c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x24707cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247080:
    // 0x247080: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x247080u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247084:
    // 0x247084: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x247084u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247088:
    // 0x247088: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x247088u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24708c:
    // 0x24708c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x24708cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247090:
    // 0x247090: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x247090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_247094:
    // 0x247094: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x247094u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_247098:
    // 0x247098: 0x24430001  addiu       $v1, $v0, 0x1
    ctx->pc = 0x247098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_24709c:
    // 0x24709c: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x24709cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_2470a0:
    // 0x2470a0: 0x771821  addu        $v1, $v1, $s7
    ctx->pc = 0x2470a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_2470a4:
    // 0x2470a4: 0x223b021  addu        $s6, $s1, $v1
    ctx->pc = 0x2470a4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_2470a8:
    // 0x2470a8: 0x844202fe  lh          $v0, 0x2FE($v0)
    ctx->pc = 0x2470a8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
label_2470ac:
    // 0x2470ac: 0x16c2001d  bne         $s6, $v0, . + 4 + (0x1D << 2)
label_2470b0:
    if (ctx->pc == 0x2470B0u) {
        ctx->pc = 0x2470B0u;
            // 0x2470b0: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x2470B4u;
        goto label_2470b4;
    }
    ctx->pc = 0x2470ACu;
    {
        const bool branch_taken_0x2470ac = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        ctx->pc = 0x2470B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2470ACu;
            // 0x2470b0: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2470ac) {
            ctx->pc = 0x247124u;
            goto label_247124;
        }
    }
    ctx->pc = 0x2470B4u;
label_2470b4:
    // 0x2470b4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2470b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2470b8:
    // 0x2470b8: 0x26920018  addiu       $s2, $s4, 0x18
    ctx->pc = 0x2470b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
label_2470bc:
    // 0x2470bc: 0xc087ec4  jal         func_21FB10
label_2470c0:
    if (ctx->pc == 0x2470C0u) {
        ctx->pc = 0x2470C0u;
            // 0x2470c0: 0x26b3003c  addiu       $s3, $s5, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 60));
        ctx->pc = 0x2470C4u;
        goto label_2470c4;
    }
    ctx->pc = 0x2470BCu;
    SET_GPR_U32(ctx, 31, 0x2470C4u);
    ctx->pc = 0x2470C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2470BCu;
            // 0x2470c0: 0x26b3003c  addiu       $s3, $s5, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 21), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2470C4u; }
        if (ctx->pc != 0x2470C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2470C4u; }
        if (ctx->pc != 0x2470C4u) { return; }
    }
    ctx->pc = 0x2470C4u;
label_2470c4:
    // 0x2470c4: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x2470c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_2470c8:
    // 0x2470c8: 0xc04d128  jal         func_1344A0
label_2470cc:
    if (ctx->pc == 0x2470CCu) {
        ctx->pc = 0x2470CCu;
            // 0x2470cc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x2470D0u;
        goto label_2470d0;
    }
    ctx->pc = 0x2470C8u;
    SET_GPR_U32(ctx, 31, 0x2470D0u);
    ctx->pc = 0x2470CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2470C8u;
            // 0x2470cc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1344A0u;
    if (runtime->hasFunction(0x1344A0u)) {
        auto targetFn = runtime->lookupFunction(0x1344A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2470D0u; }
        if (ctx->pc != 0x2470D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Begin__11mgCDrawPrimFi_0x1344a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2470D0u; }
        if (ctx->pc != 0x2470D0u) { return; }
    }
    ctx->pc = 0x2470D0u;
label_2470d0:
    // 0x2470d0: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x2470d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2470d4:
    // 0x2470d4: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x2470d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_2470d8:
    // 0x2470d8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2470d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2470dc:
    // 0x2470dc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x2470dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2470e0:
    // 0x2470e0: 0xc04d320  jal         func_134C80
label_2470e4:
    if (ctx->pc == 0x2470E4u) {
        ctx->pc = 0x2470E4u;
            // 0x2470e4: 0x24080094  addiu       $t0, $zero, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
        ctx->pc = 0x2470E8u;
        goto label_2470e8;
    }
    ctx->pc = 0x2470E0u;
    SET_GPR_U32(ctx, 31, 0x2470E8u);
    ctx->pc = 0x2470E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2470E0u;
            // 0x2470e4: 0x24080094  addiu       $t0, $zero, 0x94 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 148));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134C80u;
    if (runtime->hasFunction(0x134C80u)) {
        auto targetFn = runtime->lookupFunction(0x134C80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2470E8u; }
        if (ctx->pc != 0x2470E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Color__11mgCDrawPrimFiiii_0x134c80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2470E8u; }
        if (ctx->pc != 0x2470E8u) { return; }
    }
    ctx->pc = 0x2470E8u;
label_2470e8:
    // 0x2470e8: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x2470e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_2470ec:
    // 0x2470ec: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2470ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2470f0:
    // 0x2470f0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2470f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2470f4:
    // 0x2470f4: 0xc04d2c8  jal         func_134B20
label_2470f8:
    if (ctx->pc == 0x2470F8u) {
        ctx->pc = 0x2470F8u;
            // 0x2470f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2470FCu;
        goto label_2470fc;
    }
    ctx->pc = 0x2470F4u;
    SET_GPR_U32(ctx, 31, 0x2470FCu);
    ctx->pc = 0x2470F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2470F4u;
            // 0x2470f8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2470FCu; }
        if (ctx->pc != 0x2470FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2470FCu; }
        if (ctx->pc != 0x2470FCu) { return; }
    }
    ctx->pc = 0x2470FCu;
label_2470fc:
    // 0x2470fc: 0x26450020  addiu       $a1, $s2, 0x20
    ctx->pc = 0x2470fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_247100:
    // 0x247100: 0x26660020  addiu       $a2, $s3, 0x20
    ctx->pc = 0x247100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
label_247104:
    // 0x247104: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x247104u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_247108:
    // 0x247108: 0xc04d2c8  jal         func_134B20
label_24710c:
    if (ctx->pc == 0x24710Cu) {
        ctx->pc = 0x24710Cu;
            // 0x24710c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247110u;
        goto label_247110;
    }
    ctx->pc = 0x247108u;
    SET_GPR_U32(ctx, 31, 0x247110u);
    ctx->pc = 0x24710Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247108u;
            // 0x24710c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134B20u;
    if (runtime->hasFunction(0x134B20u)) {
        auto targetFn = runtime->lookupFunction(0x134B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247110u; }
        if (ctx->pc != 0x247110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Vertex__11mgCDrawPrimFiii_0x134b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247110u; }
        if (ctx->pc != 0x247110u) { return; }
    }
    ctx->pc = 0x247110u;
label_247110:
    // 0x247110: 0xc04d1a4  jal         func_134690
label_247114:
    if (ctx->pc == 0x247114u) {
        ctx->pc = 0x247114u;
            // 0x247114: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->pc = 0x247118u;
        goto label_247118;
    }
    ctx->pc = 0x247110u;
    SET_GPR_U32(ctx, 31, 0x247118u);
    ctx->pc = 0x247114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247110u;
            // 0x247114: 0x27a40170  addiu       $a0, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x134690u;
    if (runtime->hasFunction(0x134690u)) {
        auto targetFn = runtime->lookupFunction(0x134690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247118u; }
        if (ctx->pc != 0x247118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        End__11mgCDrawPrimFv_0x134690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247118u; }
        if (ctx->pc != 0x247118u) { return; }
    }
    ctx->pc = 0x247118u;
label_247118:
    // 0x247118: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x247118u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_24711c:
    // 0x24711c: 0xc087ec4  jal         func_21FB10
label_247120:
    if (ctx->pc == 0x247120u) {
        ctx->pc = 0x247120u;
            // 0x247120: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247124u;
        goto label_247124;
    }
    ctx->pc = 0x24711Cu;
    SET_GPR_U32(ctx, 31, 0x247124u);
    ctx->pc = 0x247120u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24711Cu;
            // 0x247120: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x21FB10u;
    if (runtime->hasFunction(0x21FB10u)) {
        auto targetFn = runtime->lookupFunction(0x21FB10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247124u; }
        if (ctx->pc != 0x247124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetSpriteEnv__FP11mgCDrawPrimi_0x21fb10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247124u; }
        if (ctx->pc != 0x247124u) { return; }
    }
    ctx->pc = 0x247124u;
label_247124:
    // 0x247124: 0x0  nop
    ctx->pc = 0x247124u;
    // NOP
label_247128:
    // 0x247128: 0x3c024200  lui         $v0, 0x4200
    ctx->pc = 0x247128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16896 << 16));
label_24712c:
    // 0x24712c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x24712cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_247130:
    // 0x247130: 0x27a407b0  addiu       $a0, $sp, 0x7B0
    ctx->pc = 0x247130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1968));
label_247134:
    // 0x247134: 0x26820018  addiu       $v0, $s4, 0x18
    ctx->pc = 0x247134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 24));
label_247138:
    // 0x247138: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x247138u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_24713c:
    // 0x24713c: 0x460073c6  mov.s       $f15, $f14
    ctx->pc = 0x24713cu;
    ctx->f[15] = FPU_MOV_S(ctx->f[14]);
label_247140:
    // 0x247140: 0x26a2003c  addiu       $v0, $s5, 0x3C
    ctx->pc = 0x247140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 60));
label_247144:
    // 0x247144: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x247144u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_247148:
    // 0x247148: 0x0  nop
    ctx->pc = 0x247148u;
    // NOP
label_24714c:
    // 0x24714c: 0x46800b20  cvt.s.w     $f12, $f1
    ctx->pc = 0x24714cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
label_247150:
    // 0x247150: 0xc07c93c  jal         func_1F24F0
label_247154:
    if (ctx->pc == 0x247154u) {
        ctx->pc = 0x247154u;
            // 0x247154: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x247158u;
        goto label_247158;
    }
    ctx->pc = 0x247150u;
    SET_GPR_U32(ctx, 31, 0x247158u);
    ctx->pc = 0x247154u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247150u;
            // 0x247154: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F24F0u;
    if (runtime->hasFunction(0x1F24F0u)) {
        auto targetFn = runtime->lookupFunction(0x1F24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247158u; }
        if (ctx->pc != 0x247158u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        Set__9mgRect_f_Fffff_0x1f24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247158u; }
        if (ctx->pc != 0x247158u) { return; }
    }
    ctx->pc = 0x247158u;
label_247158:
    // 0x247158: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x247158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_24715c:
    // 0x24715c: 0x27a40170  addiu       $a0, $sp, 0x170
    ctx->pc = 0x24715cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
label_247160:
    // 0x247160: 0x27a507b0  addiu       $a1, $sp, 0x7B0
    ctx->pc = 0x247160u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1968));
label_247164:
    // 0x247164: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x247164u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247168:
    // 0x247168: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x247168u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24716c:
    // 0x24716c: 0x27a907dc  addiu       $t1, $sp, 0x7DC
    ctx->pc = 0x24716cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 2012));
label_247170:
    // 0x247170: 0xc0881fc  jal         func_2207F0
label_247174:
    if (ctx->pc == 0x247174u) {
        ctx->pc = 0x247174u;
            // 0x247174: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247178u;
        goto label_247178;
    }
    ctx->pc = 0x247170u;
    SET_GPR_U32(ctx, 31, 0x247178u);
    ctx->pc = 0x247174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247170u;
            // 0x247174: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2207F0u;
    if (runtime->hasFunction(0x2207F0u)) {
        auto targetFn = runtime->lookupFunction(0x2207F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247178u; }
        if (ctx->pc != 0x247178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawOneItem__FP11mgCDrawPrim9mgRect_f_iiP25MENU_PARTS_EFFECT_STRUCT1PUci_0x2207f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247178u; }
        if (ctx->pc != 0x247178u) { return; }
    }
    ctx->pc = 0x247178u;
label_247178:
    // 0x247178: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x247178u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_24717c:
    // 0x24717c: 0x2a220008  slti        $v0, $s1, 0x8
    ctx->pc = 0x24717cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)8) ? 1 : 0);
label_247180:
    // 0x247180: 0x1440ffc3  bnez        $v0, . + 4 + (-0x3D << 2)
label_247184:
    if (ctx->pc == 0x247184u) {
        ctx->pc = 0x247184u;
            // 0x247184: 0x26940020  addiu       $s4, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->pc = 0x247188u;
        goto label_247188;
    }
    ctx->pc = 0x247180u;
    {
        const bool branch_taken_0x247180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x247184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247180u;
            // 0x247184: 0x26940020  addiu       $s4, $s4, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247180) {
            ctx->pc = 0x247090u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_247090;
        }
    }
    ctx->pc = 0x247188u;
label_247188:
    // 0x247188: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x247188u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
label_24718c:
    // 0x24718c: 0x26f70008  addiu       $s7, $s7, 0x8
    ctx->pc = 0x24718cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 8));
label_247190:
    // 0x247190: 0x2bc20008  slti        $v0, $fp, 0x8
    ctx->pc = 0x247190u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)8) ? 1 : 0);
label_247194:
    // 0x247194: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
label_247198:
    if (ctx->pc == 0x247198u) {
        ctx->pc = 0x247198u;
            // 0x247198: 0x26b50020  addiu       $s5, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->pc = 0x24719Cu;
        goto label_24719c;
    }
    ctx->pc = 0x247194u;
    {
        const bool branch_taken_0x247194 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x247198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247194u;
            // 0x247198: 0x26b50020  addiu       $s5, $s5, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247194) {
            ctx->pc = 0x247088u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_247088;
        }
    }
    ctx->pc = 0x24719Cu;
label_24719c:
    // 0x24719c: 0x3c0101ed  lui         $at, 0x1ED
    ctx->pc = 0x24719cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)493 << 16));
label_2471a0:
    // 0x2471a0: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x2471a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2471a4:
    // 0x2471a4: 0x8c25d624  lw          $a1, -0x29DC($at)
    ctx->pc = 0x2471a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294956580)));
label_2471a8:
    // 0x2471a8: 0xc04ba14  jal         func_12E850
label_2471ac:
    if (ctx->pc == 0x2471ACu) {
        ctx->pc = 0x2471ACu;
            // 0x2471ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2471B0u;
        goto label_2471b0;
    }
    ctx->pc = 0x2471A8u;
    SET_GPR_U32(ctx, 31, 0x2471B0u);
    ctx->pc = 0x2471ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2471A8u;
            // 0x2471ac: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2471B0u; }
        if (ctx->pc != 0x2471B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2471B0u; }
        if (ctx->pc != 0x2471B0u) { return; }
    }
    ctx->pc = 0x2471B0u;
label_2471b0:
    // 0x2471b0: 0x3c0241a0  lui         $v0, 0x41A0
    ctx->pc = 0x2471b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16800 << 16));
label_2471b4:
    // 0x2471b4: 0x3c034220  lui         $v1, 0x4220
    ctx->pc = 0x2471b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16928 << 16));
label_2471b8:
    // 0x2471b8: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x2471b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_2471bc:
    // 0x2471bc: 0x24040060  addiu       $a0, $zero, 0x60
    ctx->pc = 0x2471bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
label_2471c0:
    // 0x2471c0: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x2471c0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2471c4:
    // 0x2471c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2471c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2471c8:
    // 0x2471c8: 0x3c0243aa  lui         $v0, 0x43AA
    ctx->pc = 0x2471c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17322 << 16));
label_2471cc:
    // 0x2471cc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2471ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2471d0:
    // 0x2471d0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2471d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2471d4:
    // 0x2471d4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2471d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2471d8:
    // 0x2471d8: 0xc0887b8  jal         func_221EE0
label_2471dc:
    if (ctx->pc == 0x2471DCu) {
        ctx->pc = 0x2471DCu;
            // 0x2471dc: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->pc = 0x2471E0u;
        goto label_2471e0;
    }
    ctx->pc = 0x2471D8u;
    SET_GPR_U32(ctx, 31, 0x2471E0u);
    ctx->pc = 0x2471DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2471D8u;
            // 0x2471dc: 0x460063c6  mov.s       $f15, $f12 (Delay Slot)
        ctx->f[15] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EE0u;
    if (runtime->hasFunction(0x221EE0u)) {
        auto targetFn = runtime->lookupFunction(0x221EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2471E0u; }
        if (ctx->pc != 0x2471E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fffffiiii_0x221ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2471E0u; }
        if (ctx->pc != 0x2471E0u) { return; }
    }
    ctx->pc = 0x2471E0u;
label_2471e0:
    // 0x2471e0: 0x8f9195c0  lw          $s1, -0x6A40($gp)
    ctx->pc = 0x2471e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_2471e4:
    // 0x2471e4: 0xc065810  jal         func_196040
label_2471e8:
    if (ctx->pc == 0x2471E8u) {
        ctx->pc = 0x2471E8u;
            // 0x2471e8: 0x862402fe  lh          $a0, 0x2FE($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
        ctx->pc = 0x2471ECu;
        goto label_2471ec;
    }
    ctx->pc = 0x2471E4u;
    SET_GPR_U32(ctx, 31, 0x2471ECu);
    ctx->pc = 0x2471E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2471E4u;
            // 0x2471e8: 0x862402fe  lh          $a0, 0x2FE($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 766)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196040u;
    if (runtime->hasFunction(0x196040u)) {
        auto targetFn = runtime->lookupFunction(0x196040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2471ECu; }
        if (ctx->pc != 0x2471ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessage__Fi_0x196040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2471ECu; }
        if (ctx->pc != 0x2471ECu) { return; }
    }
    ctx->pc = 0x2471ECu;
label_2471ec:
    // 0x2471ec: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2471ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2471f0:
    // 0x2471f0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2471f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2471f4:
    // 0x2471f4: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x2471f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_2471f8:
    // 0x2471f8: 0x27a40380  addiu       $a0, $sp, 0x380
    ctx->pc = 0x2471f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_2471fc:
    // 0x2471fc: 0x92280300  lbu         $t0, 0x300($s1)
    ctx->pc = 0x2471fcu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 768)));
label_247200:
    // 0x247200: 0x844602fe  lh          $a2, 0x2FE($v0)
    ctx->pc = 0x247200u;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
label_247204:
    // 0x247204: 0xc04a234  jal         func_1288D0
label_247208:
    if (ctx->pc == 0x247208u) {
        ctx->pc = 0x247208u;
            // 0x247208: 0x24a5b380  addiu       $a1, $a1, -0x4C80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947712));
        ctx->pc = 0x24720Cu;
        goto label_24720c;
    }
    ctx->pc = 0x247204u;
    SET_GPR_U32(ctx, 31, 0x24720Cu);
    ctx->pc = 0x247208u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247204u;
            // 0x247208: 0x24a5b380  addiu       $a1, $a1, -0x4C80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24720Cu; }
        if (ctx->pc != 0x24720Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24720Cu; }
        if (ctx->pc != 0x24720Cu) { return; }
    }
    ctx->pc = 0x24720Cu;
label_24720c:
    // 0x24720c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24720cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247210:
    // 0x247210: 0xc0b5160  jal         func_2D4580
label_247214:
    if (ctx->pc == 0x247214u) {
        ctx->pc = 0x247214u;
            // 0x247214: 0x27a50380  addiu       $a1, $sp, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
        ctx->pc = 0x247218u;
        goto label_247218;
    }
    ctx->pc = 0x247210u;
    SET_GPR_U32(ctx, 31, 0x247218u);
    ctx->pc = 0x247214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247210u;
            // 0x247214: 0x27a50380  addiu       $a1, $sp, 0x380 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247218u; }
        if (ctx->pc != 0x247218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247218u; }
        if (ctx->pc != 0x247218u) { return; }
    }
    ctx->pc = 0x247218u;
label_247218:
    // 0x247218: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24721c:
    // 0x24721c: 0x2405001a  addiu       $a1, $zero, 0x1A
    ctx->pc = 0x24721cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 26));
label_247220:
    // 0x247220: 0xc0b5130  jal         func_2D44C0
label_247224:
    if (ctx->pc == 0x247224u) {
        ctx->pc = 0x247224u;
            // 0x247224: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x247228u;
        goto label_247228;
    }
    ctx->pc = 0x247220u;
    SET_GPR_U32(ctx, 31, 0x247228u);
    ctx->pc = 0x247224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247220u;
            // 0x247224: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247228u; }
        if (ctx->pc != 0x247228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247228u; }
        if (ctx->pc != 0x247228u) { return; }
    }
    ctx->pc = 0x247228u;
label_247228:
    // 0x247228: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x247228u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_24722c:
    // 0x24722c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24722cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247230:
    // 0x247230: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x247230u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_247234:
    // 0x247234: 0xc0b5688  jal         func_2D5A20
label_247238:
    if (ctx->pc == 0x247238u) {
        ctx->pc = 0x247238u;
            // 0x247238: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24723Cu;
        goto label_24723c;
    }
    ctx->pc = 0x247234u;
    SET_GPR_U32(ctx, 31, 0x24723Cu);
    ctx->pc = 0x247238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247234u;
            // 0x247238: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24723Cu; }
        if (ctx->pc != 0x24723Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24723Cu; }
        if (ctx->pc != 0x24723Cu) { return; }
    }
    ctx->pc = 0x24723Cu;
label_24723c:
    // 0x24723c: 0x838396cc  lb          $v1, -0x6934($gp)
    ctx->pc = 0x24723cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940364)));
label_247240:
    // 0x247240: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x247240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_247244:
    // 0x247244: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_247248:
    if (ctx->pc == 0x247248u) {
        ctx->pc = 0x247248u;
            // 0x247248: 0x3c0341a0  lui         $v1, 0x41A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
        ctx->pc = 0x24724Cu;
        goto label_24724c;
    }
    ctx->pc = 0x247244u;
    {
        const bool branch_taken_0x247244 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x247248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247244u;
            // 0x247248: 0x3c0341a0  lui         $v1, 0x41A0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247244) {
            ctx->pc = 0x24727Cu;
            goto label_24727c;
        }
    }
    ctx->pc = 0x24724Cu;
label_24724c:
    // 0x24724c: 0xc7818780  lwc1        $f1, -0x7880($gp)
    ctx->pc = 0x24724cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936448)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_247250:
    // 0x247250: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x247250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_247254:
    // 0x247254: 0xc7808784  lwc1        $f0, -0x787C($gp)
    ctx->pc = 0x247254u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294936452)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_247258:
    // 0x247258: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x247258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24725c:
    // 0x24725c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x24725cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_247260:
    // 0x247260: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x247260u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247264:
    // 0x247264: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x247264u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247268:
    // 0x247268: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x247268u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_24726c:
    // 0x24726c: 0x46800ba0  cvt.s.w     $f14, $f1
    ctx->pc = 0x24726cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
label_247270:
    // 0x247270: 0xc0887b8  jal         func_221EE0
label_247274:
    if (ctx->pc == 0x247274u) {
        ctx->pc = 0x247274u;
            // 0x247274: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->pc = 0x247278u;
        goto label_247278;
    }
    ctx->pc = 0x247270u;
    SET_GPR_U32(ctx, 31, 0x247278u);
    ctx->pc = 0x247274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247270u;
            // 0x247274: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EE0u;
    if (runtime->hasFunction(0x221EE0u)) {
        auto targetFn = runtime->lookupFunction(0x221EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247278u; }
        if (ctx->pc != 0x247278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fffffiiii_0x221ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247278u; }
        if (ctx->pc != 0x247278u) { return; }
    }
    ctx->pc = 0x247278u;
label_247278:
    // 0x247278: 0x3c0341a0  lui         $v1, 0x41A0
    ctx->pc = 0x247278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16800 << 16));
label_24727c:
    // 0x24727c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x24727cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_247280:
    // 0x247280: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x247280u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_247284:
    // 0x247284: 0x24040052  addiu       $a0, $zero, 0x52
    ctx->pc = 0x247284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 82));
label_247288:
    // 0x247288: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x247288u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_24728c:
    // 0x24728c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24728cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247290:
    // 0x247290: 0x3c0343a5  lui         $v1, 0x43A5
    ctx->pc = 0x247290u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17317 << 16));
label_247294:
    // 0x247294: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x247294u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247298:
    // 0x247298: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x247298u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
label_24729c:
    // 0x24729c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x24729cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_2472a0:
    // 0x2472a0: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x2472a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2472a4:
    // 0x2472a4: 0xc0887b8  jal         func_221EE0
label_2472a8:
    if (ctx->pc == 0x2472A8u) {
        ctx->pc = 0x2472A8u;
            // 0x2472a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2472ACu;
        goto label_2472ac;
    }
    ctx->pc = 0x2472A4u;
    SET_GPR_U32(ctx, 31, 0x2472ACu);
    ctx->pc = 0x2472A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2472A4u;
            // 0x2472a8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EE0u;
    if (runtime->hasFunction(0x221EE0u)) {
        auto targetFn = runtime->lookupFunction(0x221EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2472ACu; }
        if (ctx->pc != 0x2472ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fffffiiii_0x221ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2472ACu; }
        if (ctx->pc != 0x2472ACu) { return; }
    }
    ctx->pc = 0x2472ACu;
label_2472ac:
    // 0x2472ac: 0x838296cc  lb          $v0, -0x6934($gp)
    ctx->pc = 0x2472acu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940364)));
label_2472b0:
    // 0x2472b0: 0x144000a7  bnez        $v0, . + 4 + (0xA7 << 2)
label_2472b4:
    if (ctx->pc == 0x2472B4u) {
        ctx->pc = 0x2472B4u;
            // 0x2472b4: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2472B8u;
        goto label_2472b8;
    }
    ctx->pc = 0x2472B0u;
    {
        const bool branch_taken_0x2472b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2472B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2472B0u;
            // 0x2472b4: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2472b0) {
            ctx->pc = 0x247550u;
            goto label_247550;
        }
    }
    ctx->pc = 0x2472B8u;
label_2472b8:
    // 0x2472b8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2472b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2472bc:
    // 0x2472bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2472bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2472c0:
    // 0x2472c0: 0xc0b5160  jal         func_2D4580
label_2472c4:
    if (ctx->pc == 0x2472C4u) {
        ctx->pc = 0x2472C4u;
            // 0x2472c4: 0x24a5b3a0  addiu       $a1, $a1, -0x4C60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947744));
        ctx->pc = 0x2472C8u;
        goto label_2472c8;
    }
    ctx->pc = 0x2472C0u;
    SET_GPR_U32(ctx, 31, 0x2472C8u);
    ctx->pc = 0x2472C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2472C0u;
            // 0x2472c4: 0x24a5b3a0  addiu       $a1, $a1, -0x4C60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947744));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2472C8u; }
        if (ctx->pc != 0x2472C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2472C8u; }
        if (ctx->pc != 0x2472C8u) { return; }
    }
    ctx->pc = 0x2472C8u;
label_2472c8:
    // 0x2472c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2472c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2472cc:
    // 0x2472cc: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x2472ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2472d0:
    // 0x2472d0: 0xc0b5130  jal         func_2D44C0
label_2472d4:
    if (ctx->pc == 0x2472D4u) {
        ctx->pc = 0x2472D4u;
            // 0x2472d4: 0x2406015e  addiu       $a2, $zero, 0x15E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
        ctx->pc = 0x2472D8u;
        goto label_2472d8;
    }
    ctx->pc = 0x2472D0u;
    SET_GPR_U32(ctx, 31, 0x2472D8u);
    ctx->pc = 0x2472D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2472D0u;
            // 0x2472d4: 0x2406015e  addiu       $a2, $zero, 0x15E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2472D8u; }
        if (ctx->pc != 0x2472D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2472D8u; }
        if (ctx->pc != 0x2472D8u) { return; }
    }
    ctx->pc = 0x2472D8u;
label_2472d8:
    // 0x2472d8: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x2472d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_2472dc:
    // 0x2472dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2472dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2472e0:
    // 0x2472e0: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x2472e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_2472e4:
    // 0x2472e4: 0xc0b5688  jal         func_2D5A20
label_2472e8:
    if (ctx->pc == 0x2472E8u) {
        ctx->pc = 0x2472E8u;
            // 0x2472e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2472ECu;
        goto label_2472ec;
    }
    ctx->pc = 0x2472E4u;
    SET_GPR_U32(ctx, 31, 0x2472ECu);
    ctx->pc = 0x2472E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2472E4u;
            // 0x2472e8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2472ECu; }
        if (ctx->pc != 0x2472ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2472ECu; }
        if (ctx->pc != 0x2472ECu) { return; }
    }
    ctx->pc = 0x2472ECu;
label_2472ec:
    // 0x2472ec: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2472ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2472f0:
    // 0x2472f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2472f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2472f4:
    // 0x2472f4: 0xc0b5160  jal         func_2D4580
label_2472f8:
    if (ctx->pc == 0x2472F8u) {
        ctx->pc = 0x2472F8u;
            // 0x2472f8: 0x24a5b3b0  addiu       $a1, $a1, -0x4C50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947760));
        ctx->pc = 0x2472FCu;
        goto label_2472fc;
    }
    ctx->pc = 0x2472F4u;
    SET_GPR_U32(ctx, 31, 0x2472FCu);
    ctx->pc = 0x2472F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2472F4u;
            // 0x2472f8: 0x24a5b3b0  addiu       $a1, $a1, -0x4C50 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2472FCu; }
        if (ctx->pc != 0x2472FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2472FCu; }
        if (ctx->pc != 0x2472FCu) { return; }
    }
    ctx->pc = 0x2472FCu;
label_2472fc:
    // 0x2472fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2472fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247300:
    // 0x247300: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x247300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_247304:
    // 0x247304: 0xc0b5130  jal         func_2D44C0
label_247308:
    if (ctx->pc == 0x247308u) {
        ctx->pc = 0x247308u;
            // 0x247308: 0x24060172  addiu       $a2, $zero, 0x172 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 370));
        ctx->pc = 0x24730Cu;
        goto label_24730c;
    }
    ctx->pc = 0x247304u;
    SET_GPR_U32(ctx, 31, 0x24730Cu);
    ctx->pc = 0x247308u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247304u;
            // 0x247308: 0x24060172  addiu       $a2, $zero, 0x172 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 370));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24730Cu; }
        if (ctx->pc != 0x24730Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24730Cu; }
        if (ctx->pc != 0x24730Cu) { return; }
    }
    ctx->pc = 0x24730Cu;
label_24730c:
    // 0x24730c: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x24730cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_247310:
    // 0x247310: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247310u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247314:
    // 0x247314: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x247314u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_247318:
    // 0x247318: 0xc0b5688  jal         func_2D5A20
label_24731c:
    if (ctx->pc == 0x24731Cu) {
        ctx->pc = 0x24731Cu;
            // 0x24731c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247320u;
        goto label_247320;
    }
    ctx->pc = 0x247318u;
    SET_GPR_U32(ctx, 31, 0x247320u);
    ctx->pc = 0x24731Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247318u;
            // 0x24731c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247320u; }
        if (ctx->pc != 0x247320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247320u; }
        if (ctx->pc != 0x247320u) { return; }
    }
    ctx->pc = 0x247320u;
label_247320:
    // 0x247320: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x247320u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_247324:
    // 0x247324: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247324u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247328:
    // 0x247328: 0xc0b5160  jal         func_2D4580
label_24732c:
    if (ctx->pc == 0x24732Cu) {
        ctx->pc = 0x24732Cu;
            // 0x24732c: 0x24a5b3d0  addiu       $a1, $a1, -0x4C30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947792));
        ctx->pc = 0x247330u;
        goto label_247330;
    }
    ctx->pc = 0x247328u;
    SET_GPR_U32(ctx, 31, 0x247330u);
    ctx->pc = 0x24732Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247328u;
            // 0x24732c: 0x24a5b3d0  addiu       $a1, $a1, -0x4C30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247330u; }
        if (ctx->pc != 0x247330u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247330u; }
        if (ctx->pc != 0x247330u) { return; }
    }
    ctx->pc = 0x247330u;
label_247330:
    // 0x247330: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247330u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247334:
    // 0x247334: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x247334u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_247338:
    // 0x247338: 0xc0b5130  jal         func_2D44C0
label_24733c:
    if (ctx->pc == 0x24733Cu) {
        ctx->pc = 0x24733Cu;
            // 0x24733c: 0x24060186  addiu       $a2, $zero, 0x186 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 390));
        ctx->pc = 0x247340u;
        goto label_247340;
    }
    ctx->pc = 0x247338u;
    SET_GPR_U32(ctx, 31, 0x247340u);
    ctx->pc = 0x24733Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247338u;
            // 0x24733c: 0x24060186  addiu       $a2, $zero, 0x186 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 390));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247340u; }
        if (ctx->pc != 0x247340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247340u; }
        if (ctx->pc != 0x247340u) { return; }
    }
    ctx->pc = 0x247340u;
label_247340:
    // 0x247340: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x247340u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_247344:
    // 0x247344: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247344u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247348:
    // 0x247348: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x247348u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_24734c:
    // 0x24734c: 0xc0b5688  jal         func_2D5A20
label_247350:
    if (ctx->pc == 0x247350u) {
        ctx->pc = 0x247350u;
            // 0x247350: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247354u;
        goto label_247354;
    }
    ctx->pc = 0x24734Cu;
    SET_GPR_U32(ctx, 31, 0x247354u);
    ctx->pc = 0x247350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24734Cu;
            // 0x247350: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247354u; }
        if (ctx->pc != 0x247354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247354u; }
        if (ctx->pc != 0x247354u) { return; }
    }
    ctx->pc = 0x247354u;
label_247354:
    // 0x247354: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x247354u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_247358:
    // 0x247358: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24735c:
    // 0x24735c: 0xc0b5160  jal         func_2D4580
label_247360:
    if (ctx->pc == 0x247360u) {
        ctx->pc = 0x247360u;
            // 0x247360: 0x24a5b3f0  addiu       $a1, $a1, -0x4C10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947824));
        ctx->pc = 0x247364u;
        goto label_247364;
    }
    ctx->pc = 0x24735Cu;
    SET_GPR_U32(ctx, 31, 0x247364u);
    ctx->pc = 0x247360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24735Cu;
            // 0x247360: 0x24a5b3f0  addiu       $a1, $a1, -0x4C10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947824));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247364u; }
        if (ctx->pc != 0x247364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247364u; }
        if (ctx->pc != 0x247364u) { return; }
    }
    ctx->pc = 0x247364u;
label_247364:
    // 0x247364: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247364u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247368:
    // 0x247368: 0x240500aa  addiu       $a1, $zero, 0xAA
    ctx->pc = 0x247368u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 170));
label_24736c:
    // 0x24736c: 0xc0b5130  jal         func_2D44C0
label_247370:
    if (ctx->pc == 0x247370u) {
        ctx->pc = 0x247370u;
            // 0x247370: 0x24060172  addiu       $a2, $zero, 0x172 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 370));
        ctx->pc = 0x247374u;
        goto label_247374;
    }
    ctx->pc = 0x24736Cu;
    SET_GPR_U32(ctx, 31, 0x247374u);
    ctx->pc = 0x247370u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24736Cu;
            // 0x247370: 0x24060172  addiu       $a2, $zero, 0x172 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 370));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247374u; }
        if (ctx->pc != 0x247374u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247374u; }
        if (ctx->pc != 0x247374u) { return; }
    }
    ctx->pc = 0x247374u;
label_247374:
    // 0x247374: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x247374u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_247378:
    // 0x247378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24737c:
    // 0x24737c: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x24737cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_247380:
    // 0x247380: 0xc0b5688  jal         func_2D5A20
label_247384:
    if (ctx->pc == 0x247384u) {
        ctx->pc = 0x247384u;
            // 0x247384: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247388u;
        goto label_247388;
    }
    ctx->pc = 0x247380u;
    SET_GPR_U32(ctx, 31, 0x247388u);
    ctx->pc = 0x247384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247380u;
            // 0x247384: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247388u; }
        if (ctx->pc != 0x247388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247388u; }
        if (ctx->pc != 0x247388u) { return; }
    }
    ctx->pc = 0x247388u;
label_247388:
    // 0x247388: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x247388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_24738c:
    // 0x24738c: 0x844402fe  lh          $a0, 0x2FE($v0)
    ctx->pc = 0x24738cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 766)));
label_247390:
    // 0x247390: 0xc06571c  jal         func_195C70
label_247394:
    if (ctx->pc == 0x247394u) {
        ctx->pc = 0x247394u;
            // 0x247394: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247398u;
        goto label_247398;
    }
    ctx->pc = 0x247390u;
    SET_GPR_U32(ctx, 31, 0x247398u);
    ctx->pc = 0x247394u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247390u;
            // 0x247394: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x195C70u;
    if (runtime->hasFunction(0x195C70u)) {
        auto targetFn = runtime->lookupFunction(0x195C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247398u; }
        if (ctx->pc != 0x247398u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemFileName__Fii_0x195c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247398u; }
        if (ctx->pc != 0x247398u) { return; }
    }
    ctx->pc = 0x247398u;
label_247398:
    // 0x247398: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_24739c:
    if (ctx->pc == 0x24739Cu) {
        ctx->pc = 0x24739Cu;
            // 0x24739c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2473A0u;
        goto label_2473a0;
    }
    ctx->pc = 0x247398u;
    {
        const bool branch_taken_0x247398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24739Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247398u;
            // 0x24739c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247398) {
            ctx->pc = 0x2473ECu;
            goto label_2473ec;
        }
    }
    ctx->pc = 0x2473A0u;
label_2473a0:
    // 0x2473a0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2473a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2473a4:
    // 0x2473a4: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2473a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2473a8:
    // 0x2473a8: 0x27a40400  addiu       $a0, $sp, 0x400
    ctx->pc = 0x2473a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
label_2473ac:
    // 0x2473ac: 0xc04a234  jal         func_1288D0
label_2473b0:
    if (ctx->pc == 0x2473B0u) {
        ctx->pc = 0x2473B0u;
            // 0x2473b0: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->pc = 0x2473B4u;
        goto label_2473b4;
    }
    ctx->pc = 0x2473ACu;
    SET_GPR_U32(ctx, 31, 0x2473B4u);
    ctx->pc = 0x2473B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2473ACu;
            // 0x2473b0: 0x24a5b410  addiu       $a1, $a1, -0x4BF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947856));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2473B4u; }
        if (ctx->pc != 0x2473B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2473B4u; }
        if (ctx->pc != 0x2473B4u) { return; }
    }
    ctx->pc = 0x2473B4u;
label_2473b4:
    // 0x2473b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2473b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2473b8:
    // 0x2473b8: 0xc0b5160  jal         func_2D4580
label_2473bc:
    if (ctx->pc == 0x2473BCu) {
        ctx->pc = 0x2473BCu;
            // 0x2473bc: 0x27a50400  addiu       $a1, $sp, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
        ctx->pc = 0x2473C0u;
        goto label_2473c0;
    }
    ctx->pc = 0x2473B8u;
    SET_GPR_U32(ctx, 31, 0x2473C0u);
    ctx->pc = 0x2473BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2473B8u;
            // 0x2473bc: 0x27a50400  addiu       $a1, $sp, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2473C0u; }
        if (ctx->pc != 0x2473C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2473C0u; }
        if (ctx->pc != 0x2473C0u) { return; }
    }
    ctx->pc = 0x2473C0u;
label_2473c0:
    // 0x2473c0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2473c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2473c4:
    // 0x2473c4: 0x24050096  addiu       $a1, $zero, 0x96
    ctx->pc = 0x2473c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
label_2473c8:
    // 0x2473c8: 0xc0b5130  jal         func_2D44C0
label_2473cc:
    if (ctx->pc == 0x2473CCu) {
        ctx->pc = 0x2473CCu;
            // 0x2473cc: 0x2406014a  addiu       $a2, $zero, 0x14A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
        ctx->pc = 0x2473D0u;
        goto label_2473d0;
    }
    ctx->pc = 0x2473C8u;
    SET_GPR_U32(ctx, 31, 0x2473D0u);
    ctx->pc = 0x2473CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2473C8u;
            // 0x2473cc: 0x2406014a  addiu       $a2, $zero, 0x14A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2473D0u; }
        if (ctx->pc != 0x2473D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2473D0u; }
        if (ctx->pc != 0x2473D0u) { return; }
    }
    ctx->pc = 0x2473D0u;
label_2473d0:
    // 0x2473d0: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x2473d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_2473d4:
    // 0x2473d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2473d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2473d8:
    // 0x2473d8: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x2473d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_2473dc:
    // 0x2473dc: 0xc0b5688  jal         func_2D5A20
label_2473e0:
    if (ctx->pc == 0x2473E0u) {
        ctx->pc = 0x2473E0u;
            // 0x2473e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2473E4u;
        goto label_2473e4;
    }
    ctx->pc = 0x2473DCu;
    SET_GPR_U32(ctx, 31, 0x2473E4u);
    ctx->pc = 0x2473E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2473DCu;
            // 0x2473e0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2473E4u; }
        if (ctx->pc != 0x2473E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2473E4u; }
        if (ctx->pc != 0x2473E4u) { return; }
    }
    ctx->pc = 0x2473E4u;
label_2473e4:
    // 0x2473e4: 0x1000000d  b           . + 4 + (0xD << 2)
label_2473e8:
    if (ctx->pc == 0x2473E8u) {
        ctx->pc = 0x2473ECu;
        goto label_2473ec;
    }
    ctx->pc = 0x2473E4u;
    {
        const bool branch_taken_0x2473e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2473e4) {
            ctx->pc = 0x24741Cu;
            goto label_24741c;
        }
    }
    ctx->pc = 0x2473ECu;
label_2473ec:
    // 0x2473ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2473ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2473f0:
    // 0x2473f0: 0xc0b5160  jal         func_2D4580
label_2473f4:
    if (ctx->pc == 0x2473F4u) {
        ctx->pc = 0x2473F4u;
            // 0x2473f4: 0x24a5b428  addiu       $a1, $a1, -0x4BD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947880));
        ctx->pc = 0x2473F8u;
        goto label_2473f8;
    }
    ctx->pc = 0x2473F0u;
    SET_GPR_U32(ctx, 31, 0x2473F8u);
    ctx->pc = 0x2473F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2473F0u;
            // 0x2473f4: 0x24a5b428  addiu       $a1, $a1, -0x4BD8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2473F8u; }
        if (ctx->pc != 0x2473F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2473F8u; }
        if (ctx->pc != 0x2473F8u) { return; }
    }
    ctx->pc = 0x2473F8u;
label_2473f8:
    // 0x2473f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2473f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2473fc:
    // 0x2473fc: 0x24050096  addiu       $a1, $zero, 0x96
    ctx->pc = 0x2473fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
label_247400:
    // 0x247400: 0xc0b5130  jal         func_2D44C0
label_247404:
    if (ctx->pc == 0x247404u) {
        ctx->pc = 0x247404u;
            // 0x247404: 0x2406014a  addiu       $a2, $zero, 0x14A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
        ctx->pc = 0x247408u;
        goto label_247408;
    }
    ctx->pc = 0x247400u;
    SET_GPR_U32(ctx, 31, 0x247408u);
    ctx->pc = 0x247404u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247400u;
            // 0x247404: 0x2406014a  addiu       $a2, $zero, 0x14A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247408u; }
        if (ctx->pc != 0x247408u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247408u; }
        if (ctx->pc != 0x247408u) { return; }
    }
    ctx->pc = 0x247408u;
label_247408:
    // 0x247408: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x247408u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_24740c:
    // 0x24740c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24740cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247410:
    // 0x247410: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x247410u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_247414:
    // 0x247414: 0xc0b5688  jal         func_2D5A20
label_247418:
    if (ctx->pc == 0x247418u) {
        ctx->pc = 0x247418u;
            // 0x247418: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24741Cu;
        goto label_24741c;
    }
    ctx->pc = 0x247414u;
    SET_GPR_U32(ctx, 31, 0x24741Cu);
    ctx->pc = 0x247418u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247414u;
            // 0x247418: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24741Cu; }
        if (ctx->pc != 0x24741Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24741Cu; }
        if (ctx->pc != 0x24741Cu) { return; }
    }
    ctx->pc = 0x24741Cu;
label_24741c:
    // 0x24741c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24741cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_247420:
    // 0x247420: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247420u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247424:
    // 0x247424: 0xc0b5160  jal         func_2D4580
label_247428:
    if (ctx->pc == 0x247428u) {
        ctx->pc = 0x247428u;
            // 0x247428: 0x24a5b438  addiu       $a1, $a1, -0x4BC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947896));
        ctx->pc = 0x24742Cu;
        goto label_24742c;
    }
    ctx->pc = 0x247424u;
    SET_GPR_U32(ctx, 31, 0x24742Cu);
    ctx->pc = 0x247428u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247424u;
            // 0x247428: 0x24a5b438  addiu       $a1, $a1, -0x4BC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24742Cu; }
        if (ctx->pc != 0x24742Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24742Cu; }
        if (ctx->pc != 0x24742Cu) { return; }
    }
    ctx->pc = 0x24742Cu;
label_24742c:
    // 0x24742c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24742cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247430:
    // 0x247430: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x247430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_247434:
    // 0x247434: 0xc0b5130  jal         func_2D44C0
label_247438:
    if (ctx->pc == 0x247438u) {
        ctx->pc = 0x247438u;
            // 0x247438: 0x2406014a  addiu       $a2, $zero, 0x14A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
        ctx->pc = 0x24743Cu;
        goto label_24743c;
    }
    ctx->pc = 0x247434u;
    SET_GPR_U32(ctx, 31, 0x24743Cu);
    ctx->pc = 0x247438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247434u;
            // 0x247438: 0x2406014a  addiu       $a2, $zero, 0x14A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 330));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24743Cu; }
        if (ctx->pc != 0x24743Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24743Cu; }
        if (ctx->pc != 0x24743Cu) { return; }
    }
    ctx->pc = 0x24743Cu;
label_24743c:
    // 0x24743c: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x24743cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_247440:
    // 0x247440: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247440u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247444:
    // 0x247444: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x247444u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_247448:
    // 0x247448: 0xc0b5688  jal         func_2D5A20
label_24744c:
    if (ctx->pc == 0x24744Cu) {
        ctx->pc = 0x24744Cu;
            // 0x24744c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247450u;
        goto label_247450;
    }
    ctx->pc = 0x247448u;
    SET_GPR_U32(ctx, 31, 0x247450u);
    ctx->pc = 0x24744Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247448u;
            // 0x24744c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247450u; }
        if (ctx->pc != 0x247450u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247450u; }
        if (ctx->pc != 0x247450u) { return; }
    }
    ctx->pc = 0x247450u;
label_247450:
    // 0x247450: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x247450u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_247454:
    // 0x247454: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x247454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_247458:
    // 0x247458: 0xc04a3dc  jal         func_128F70
label_24745c:
    if (ctx->pc == 0x24745Cu) {
        ctx->pc = 0x24745Cu;
            // 0x24745c: 0x24a5b440  addiu       $a1, $a1, -0x4BC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947904));
        ctx->pc = 0x247460u;
        goto label_247460;
    }
    ctx->pc = 0x247458u;
    SET_GPR_U32(ctx, 31, 0x247460u);
    ctx->pc = 0x24745Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247458u;
            // 0x24745c: 0x24a5b440  addiu       $a1, $a1, -0x4BC0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947904));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128F70u;
    if (runtime->hasFunction(0x128F70u)) {
        auto targetFn = runtime->lookupFunction(0x128F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247460u; }
        if (ctx->pc != 0x247460u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcpy_0x128f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247460u; }
        if (ctx->pc != 0x247460u) { return; }
    }
    ctx->pc = 0x247460u;
label_247460:
    // 0x247460: 0x8f83967c  lw          $v1, -0x6984($gp)
    ctx->pc = 0x247460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940284)));
label_247464:
    // 0x247464: 0x10600090  beqz        $v1, . + 4 + (0x90 << 2)
label_247468:
    if (ctx->pc == 0x247468u) {
        ctx->pc = 0x24746Cu;
        goto label_24746c;
    }
    ctx->pc = 0x247464u;
    {
        const bool branch_taken_0x247464 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x247464) {
            ctx->pc = 0x2476A8u;
            goto label_2476a8;
        }
    }
    ctx->pc = 0x24746Cu;
label_24746c:
    // 0x24746c: 0x9466000a  lhu         $a2, 0xA($v1)
    ctx->pc = 0x24746cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 10)));
label_247470:
    // 0x247470: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x247470u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_247474:
    // 0x247474: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x247474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_247478:
    // 0x247478: 0xc04a234  jal         func_1288D0
label_24747c:
    if (ctx->pc == 0x24747Cu) {
        ctx->pc = 0x24747Cu;
            // 0x24747c: 0x24a5b450  addiu       $a1, $a1, -0x4BB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947920));
        ctx->pc = 0x247480u;
        goto label_247480;
    }
    ctx->pc = 0x247478u;
    SET_GPR_U32(ctx, 31, 0x247480u);
    ctx->pc = 0x24747Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247478u;
            // 0x24747c: 0x24a5b450  addiu       $a1, $a1, -0x4BB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947920));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247480u; }
        if (ctx->pc != 0x247480u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247480u; }
        if (ctx->pc != 0x247480u) { return; }
    }
    ctx->pc = 0x247480u;
label_247480:
    // 0x247480: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247480u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247484:
    // 0x247484: 0xc0b5160  jal         func_2D4580
label_247488:
    if (ctx->pc == 0x247488u) {
        ctx->pc = 0x247488u;
            // 0x247488: 0x27a50280  addiu       $a1, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = 0x24748Cu;
        goto label_24748c;
    }
    ctx->pc = 0x247484u;
    SET_GPR_U32(ctx, 31, 0x24748Cu);
    ctx->pc = 0x247488u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247484u;
            // 0x247488: 0x27a50280  addiu       $a1, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24748Cu; }
        if (ctx->pc != 0x24748Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24748Cu; }
        if (ctx->pc != 0x24748Cu) { return; }
    }
    ctx->pc = 0x24748Cu;
label_24748c:
    // 0x24748c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24748cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247490:
    // 0x247490: 0x2405012c  addiu       $a1, $zero, 0x12C
    ctx->pc = 0x247490u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_247494:
    // 0x247494: 0xc0b5130  jal         func_2D44C0
label_247498:
    if (ctx->pc == 0x247498u) {
        ctx->pc = 0x247498u;
            // 0x247498: 0x2406015e  addiu       $a2, $zero, 0x15E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
        ctx->pc = 0x24749Cu;
        goto label_24749c;
    }
    ctx->pc = 0x247494u;
    SET_GPR_U32(ctx, 31, 0x24749Cu);
    ctx->pc = 0x247498u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247494u;
            // 0x247498: 0x2406015e  addiu       $a2, $zero, 0x15E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 350));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24749Cu; }
        if (ctx->pc != 0x24749Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24749Cu; }
        if (ctx->pc != 0x24749Cu) { return; }
    }
    ctx->pc = 0x24749Cu;
label_24749c:
    // 0x24749c: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x24749cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_2474a0:
    // 0x2474a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2474a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2474a4:
    // 0x2474a4: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x2474a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_2474a8:
    // 0x2474a8: 0xc0b5688  jal         func_2D5A20
label_2474ac:
    if (ctx->pc == 0x2474ACu) {
        ctx->pc = 0x2474ACu;
            // 0x2474ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2474B0u;
        goto label_2474b0;
    }
    ctx->pc = 0x2474A8u;
    SET_GPR_U32(ctx, 31, 0x2474B0u);
    ctx->pc = 0x2474ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2474A8u;
            // 0x2474ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2474B0u; }
        if (ctx->pc != 0x2474B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2474B0u; }
        if (ctx->pc != 0x2474B0u) { return; }
    }
    ctx->pc = 0x2474B0u;
label_2474b0:
    // 0x2474b0: 0x8f82967c  lw          $v0, -0x6984($gp)
    ctx->pc = 0x2474b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940284)));
label_2474b4:
    // 0x2474b4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2474b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2474b8:
    // 0x2474b8: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x2474b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_2474bc:
    // 0x2474bc: 0x24a5b460  addiu       $a1, $a1, -0x4BA0
    ctx->pc = 0x2474bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947936));
label_2474c0:
    // 0x2474c0: 0xc04a234  jal         func_1288D0
label_2474c4:
    if (ctx->pc == 0x2474C4u) {
        ctx->pc = 0x2474C4u;
            // 0x2474c4: 0x2446000c  addiu       $a2, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->pc = 0x2474C8u;
        goto label_2474c8;
    }
    ctx->pc = 0x2474C0u;
    SET_GPR_U32(ctx, 31, 0x2474C8u);
    ctx->pc = 0x2474C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2474C0u;
            // 0x2474c4: 0x2446000c  addiu       $a2, $v0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2474C8u; }
        if (ctx->pc != 0x2474C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2474C8u; }
        if (ctx->pc != 0x2474C8u) { return; }
    }
    ctx->pc = 0x2474C8u;
label_2474c8:
    // 0x2474c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2474c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2474cc:
    // 0x2474cc: 0xc0b5160  jal         func_2D4580
label_2474d0:
    if (ctx->pc == 0x2474D0u) {
        ctx->pc = 0x2474D0u;
            // 0x2474d0: 0x27a50280  addiu       $a1, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = 0x2474D4u;
        goto label_2474d4;
    }
    ctx->pc = 0x2474CCu;
    SET_GPR_U32(ctx, 31, 0x2474D4u);
    ctx->pc = 0x2474D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2474CCu;
            // 0x2474d0: 0x27a50280  addiu       $a1, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2474D4u; }
        if (ctx->pc != 0x2474D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2474D4u; }
        if (ctx->pc != 0x2474D4u) { return; }
    }
    ctx->pc = 0x2474D4u;
label_2474d4:
    // 0x2474d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2474d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2474d8:
    // 0x2474d8: 0x2405012c  addiu       $a1, $zero, 0x12C
    ctx->pc = 0x2474d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_2474dc:
    // 0x2474dc: 0xc0b5130  jal         func_2D44C0
label_2474e0:
    if (ctx->pc == 0x2474E0u) {
        ctx->pc = 0x2474E0u;
            // 0x2474e0: 0x24060172  addiu       $a2, $zero, 0x172 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 370));
        ctx->pc = 0x2474E4u;
        goto label_2474e4;
    }
    ctx->pc = 0x2474DCu;
    SET_GPR_U32(ctx, 31, 0x2474E4u);
    ctx->pc = 0x2474E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2474DCu;
            // 0x2474e0: 0x24060172  addiu       $a2, $zero, 0x172 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 370));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2474E4u; }
        if (ctx->pc != 0x2474E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2474E4u; }
        if (ctx->pc != 0x2474E4u) { return; }
    }
    ctx->pc = 0x2474E4u;
label_2474e4:
    // 0x2474e4: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x2474e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_2474e8:
    // 0x2474e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2474e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2474ec:
    // 0x2474ec: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x2474ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_2474f0:
    // 0x2474f0: 0xc0b5688  jal         func_2D5A20
label_2474f4:
    if (ctx->pc == 0x2474F4u) {
        ctx->pc = 0x2474F4u;
            // 0x2474f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2474F8u;
        goto label_2474f8;
    }
    ctx->pc = 0x2474F0u;
    SET_GPR_U32(ctx, 31, 0x2474F8u);
    ctx->pc = 0x2474F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2474F0u;
            // 0x2474f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2474F8u; }
        if (ctx->pc != 0x2474F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2474F8u; }
        if (ctx->pc != 0x2474F8u) { return; }
    }
    ctx->pc = 0x2474F8u;
label_2474f8:
    // 0x2474f8: 0x8f82967c  lw          $v0, -0x6984($gp)
    ctx->pc = 0x2474f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940284)));
label_2474fc:
    // 0x2474fc: 0xc068598  jal         func_1A1660
label_247500:
    if (ctx->pc == 0x247500u) {
        ctx->pc = 0x247500u;
            // 0x247500: 0x84440002  lh          $a0, 0x2($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
        ctx->pc = 0x247504u;
        goto label_247504;
    }
    ctx->pc = 0x2474FCu;
    SET_GPR_U32(ctx, 31, 0x247504u);
    ctx->pc = 0x247500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2474FCu;
            // 0x247500: 0x84440002  lh          $a0, 0x2($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A1660u;
    if (runtime->hasFunction(0x1A1660u)) {
        auto targetFn = runtime->lookupFunction(0x1A1660u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247504u; }
        if (ctx->pc != 0x247504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckGetItemRemainNum__Fi_0x1a1660(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247504u; }
        if (ctx->pc != 0x247504u) { return; }
    }
    ctx->pc = 0x247504u;
label_247504:
    // 0x247504: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x247504u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_247508:
    // 0x247508: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x247508u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24750c:
    // 0x24750c: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x24750cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_247510:
    // 0x247510: 0xc04a234  jal         func_1288D0
label_247514:
    if (ctx->pc == 0x247514u) {
        ctx->pc = 0x247514u;
            // 0x247514: 0x24a5b470  addiu       $a1, $a1, -0x4B90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947952));
        ctx->pc = 0x247518u;
        goto label_247518;
    }
    ctx->pc = 0x247510u;
    SET_GPR_U32(ctx, 31, 0x247518u);
    ctx->pc = 0x247514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247510u;
            // 0x247514: 0x24a5b470  addiu       $a1, $a1, -0x4B90 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247518u; }
        if (ctx->pc != 0x247518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247518u; }
        if (ctx->pc != 0x247518u) { return; }
    }
    ctx->pc = 0x247518u;
label_247518:
    // 0x247518: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24751c:
    // 0x24751c: 0xc0b5160  jal         func_2D4580
label_247520:
    if (ctx->pc == 0x247520u) {
        ctx->pc = 0x247520u;
            // 0x247520: 0x27a50280  addiu       $a1, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = 0x247524u;
        goto label_247524;
    }
    ctx->pc = 0x24751Cu;
    SET_GPR_U32(ctx, 31, 0x247524u);
    ctx->pc = 0x247520u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24751Cu;
            // 0x247520: 0x27a50280  addiu       $a1, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247524u; }
        if (ctx->pc != 0x247524u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247524u; }
        if (ctx->pc != 0x247524u) { return; }
    }
    ctx->pc = 0x247524u;
label_247524:
    // 0x247524: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247524u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247528:
    // 0x247528: 0x2405012c  addiu       $a1, $zero, 0x12C
    ctx->pc = 0x247528u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_24752c:
    // 0x24752c: 0xc0b5130  jal         func_2D44C0
label_247530:
    if (ctx->pc == 0x247530u) {
        ctx->pc = 0x247530u;
            // 0x247530: 0x24060186  addiu       $a2, $zero, 0x186 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 390));
        ctx->pc = 0x247534u;
        goto label_247534;
    }
    ctx->pc = 0x24752Cu;
    SET_GPR_U32(ctx, 31, 0x247534u);
    ctx->pc = 0x247530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24752Cu;
            // 0x247530: 0x24060186  addiu       $a2, $zero, 0x186 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 390));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247534u; }
        if (ctx->pc != 0x247534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247534u; }
        if (ctx->pc != 0x247534u) { return; }
    }
    ctx->pc = 0x247534u;
label_247534:
    // 0x247534: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x247534u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_247538:
    // 0x247538: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247538u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24753c:
    // 0x24753c: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x24753cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_247540:
    // 0x247540: 0xc0b5688  jal         func_2D5A20
label_247544:
    if (ctx->pc == 0x247544u) {
        ctx->pc = 0x247544u;
            // 0x247544: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247548u;
        goto label_247548;
    }
    ctx->pc = 0x247540u;
    SET_GPR_U32(ctx, 31, 0x247548u);
    ctx->pc = 0x247544u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247540u;
            // 0x247544: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247548u; }
        if (ctx->pc != 0x247548u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247548u; }
        if (ctx->pc != 0x247548u) { return; }
    }
    ctx->pc = 0x247548u;
label_247548:
    // 0x247548: 0x10000058  b           . + 4 + (0x58 << 2)
label_24754c:
    if (ctx->pc == 0x24754Cu) {
        ctx->pc = 0x24754Cu;
            // 0x24754c: 0x838396cc  lb          $v1, -0x6934($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940364)));
        ctx->pc = 0x247550u;
        goto label_247550;
    }
    ctx->pc = 0x247548u;
    {
        const bool branch_taken_0x247548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24754Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247548u;
            // 0x24754c: 0x838396cc  lb          $v1, -0x6934($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940364)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247548) {
            ctx->pc = 0x2476ACu;
            goto label_2476ac;
        }
    }
    ctx->pc = 0x247550u;
label_247550:
    // 0x247550: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247550u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247554:
    // 0x247554: 0xc0b5160  jal         func_2D4580
label_247558:
    if (ctx->pc == 0x247558u) {
        ctx->pc = 0x247558u;
            // 0x247558: 0x24a5b480  addiu       $a1, $a1, -0x4B80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947968));
        ctx->pc = 0x24755Cu;
        goto label_24755c;
    }
    ctx->pc = 0x247554u;
    SET_GPR_U32(ctx, 31, 0x24755Cu);
    ctx->pc = 0x247558u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247554u;
            // 0x247558: 0x24a5b480  addiu       $a1, $a1, -0x4B80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24755Cu; }
        if (ctx->pc != 0x24755Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24755Cu; }
        if (ctx->pc != 0x24755Cu) { return; }
    }
    ctx->pc = 0x24755Cu;
label_24755c:
    // 0x24755c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24755cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247560:
    // 0x247560: 0x24050122  addiu       $a1, $zero, 0x122
    ctx->pc = 0x247560u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
label_247564:
    // 0x247564: 0xc0b5130  jal         func_2D44C0
label_247568:
    if (ctx->pc == 0x247568u) {
        ctx->pc = 0x247568u;
            // 0x247568: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->pc = 0x24756Cu;
        goto label_24756c;
    }
    ctx->pc = 0x247564u;
    SET_GPR_U32(ctx, 31, 0x24756Cu);
    ctx->pc = 0x247568u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247564u;
            // 0x247568: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24756Cu; }
        if (ctx->pc != 0x24756Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24756Cu; }
        if (ctx->pc != 0x24756Cu) { return; }
    }
    ctx->pc = 0x24756Cu;
label_24756c:
    // 0x24756c: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x24756cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_247570:
    // 0x247570: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247574:
    // 0x247574: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x247574u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_247578:
    // 0x247578: 0xc0b5688  jal         func_2D5A20
label_24757c:
    if (ctx->pc == 0x24757Cu) {
        ctx->pc = 0x24757Cu;
            // 0x24757c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247580u;
        goto label_247580;
    }
    ctx->pc = 0x247578u;
    SET_GPR_U32(ctx, 31, 0x247580u);
    ctx->pc = 0x24757Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247578u;
            // 0x24757c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247580u; }
        if (ctx->pc != 0x247580u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247580u; }
        if (ctx->pc != 0x247580u) { return; }
    }
    ctx->pc = 0x247580u;
label_247580:
    // 0x247580: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x247580u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_247584:
    // 0x247584: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247584u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247588:
    // 0x247588: 0xc0b5160  jal         func_2D4580
label_24758c:
    if (ctx->pc == 0x24758Cu) {
        ctx->pc = 0x24758Cu;
            // 0x24758c: 0x24a5b490  addiu       $a1, $a1, -0x4B70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947984));
        ctx->pc = 0x247590u;
        goto label_247590;
    }
    ctx->pc = 0x247588u;
    SET_GPR_U32(ctx, 31, 0x247590u);
    ctx->pc = 0x24758Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247588u;
            // 0x24758c: 0x24a5b490  addiu       $a1, $a1, -0x4B70 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247590u; }
        if (ctx->pc != 0x247590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247590u; }
        if (ctx->pc != 0x247590u) { return; }
    }
    ctx->pc = 0x247590u;
label_247590:
    // 0x247590: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247590u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247594:
    // 0x247594: 0x24050122  addiu       $a1, $zero, 0x122
    ctx->pc = 0x247594u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
label_247598:
    // 0x247598: 0xc0b5130  jal         func_2D44C0
label_24759c:
    if (ctx->pc == 0x24759Cu) {
        ctx->pc = 0x24759Cu;
            // 0x24759c: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x2475A0u;
        goto label_2475a0;
    }
    ctx->pc = 0x247598u;
    SET_GPR_U32(ctx, 31, 0x2475A0u);
    ctx->pc = 0x24759Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247598u;
            // 0x24759c: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2475A0u; }
        if (ctx->pc != 0x2475A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2475A0u; }
        if (ctx->pc != 0x2475A0u) { return; }
    }
    ctx->pc = 0x2475A0u;
label_2475a0:
    // 0x2475a0: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x2475a0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_2475a4:
    // 0x2475a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2475a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2475a8:
    // 0x2475a8: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x2475a8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_2475ac:
    // 0x2475ac: 0xc0b5688  jal         func_2D5A20
label_2475b0:
    if (ctx->pc == 0x2475B0u) {
        ctx->pc = 0x2475B0u;
            // 0x2475b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2475B4u;
        goto label_2475b4;
    }
    ctx->pc = 0x2475ACu;
    SET_GPR_U32(ctx, 31, 0x2475B4u);
    ctx->pc = 0x2475B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2475ACu;
            // 0x2475b0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2475B4u; }
        if (ctx->pc != 0x2475B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2475B4u; }
        if (ctx->pc != 0x2475B4u) { return; }
    }
    ctx->pc = 0x2475B4u;
label_2475b4:
    // 0x2475b4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2475b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2475b8:
    // 0x2475b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2475b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2475bc:
    // 0x2475bc: 0xc0b5160  jal         func_2D4580
label_2475c0:
    if (ctx->pc == 0x2475C0u) {
        ctx->pc = 0x2475C0u;
            // 0x2475c0: 0x24a5b4a0  addiu       $a1, $a1, -0x4B60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948000));
        ctx->pc = 0x2475C4u;
        goto label_2475c4;
    }
    ctx->pc = 0x2475BCu;
    SET_GPR_U32(ctx, 31, 0x2475C4u);
    ctx->pc = 0x2475C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2475BCu;
            // 0x2475c0: 0x24a5b4a0  addiu       $a1, $a1, -0x4B60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2475C4u; }
        if (ctx->pc != 0x2475C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2475C4u; }
        if (ctx->pc != 0x2475C4u) { return; }
    }
    ctx->pc = 0x2475C4u;
label_2475c4:
    // 0x2475c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2475c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2475c8:
    // 0x2475c8: 0x24050122  addiu       $a1, $zero, 0x122
    ctx->pc = 0x2475c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
label_2475cc:
    // 0x2475cc: 0xc0b5130  jal         func_2D44C0
label_2475d0:
    if (ctx->pc == 0x2475D0u) {
        ctx->pc = 0x2475D0u;
            // 0x2475d0: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x2475D4u;
        goto label_2475d4;
    }
    ctx->pc = 0x2475CCu;
    SET_GPR_U32(ctx, 31, 0x2475D4u);
    ctx->pc = 0x2475D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2475CCu;
            // 0x2475d0: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2475D4u; }
        if (ctx->pc != 0x2475D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2475D4u; }
        if (ctx->pc != 0x2475D4u) { return; }
    }
    ctx->pc = 0x2475D4u;
label_2475d4:
    // 0x2475d4: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x2475d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_2475d8:
    // 0x2475d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2475d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2475dc:
    // 0x2475dc: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x2475dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_2475e0:
    // 0x2475e0: 0xc0b5688  jal         func_2D5A20
label_2475e4:
    if (ctx->pc == 0x2475E4u) {
        ctx->pc = 0x2475E4u;
            // 0x2475e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2475E8u;
        goto label_2475e8;
    }
    ctx->pc = 0x2475E0u;
    SET_GPR_U32(ctx, 31, 0x2475E8u);
    ctx->pc = 0x2475E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2475E0u;
            // 0x2475e4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2475E8u; }
        if (ctx->pc != 0x2475E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2475E8u; }
        if (ctx->pc != 0x2475E8u) { return; }
    }
    ctx->pc = 0x2475E8u;
label_2475e8:
    // 0x2475e8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2475e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2475ec:
    // 0x2475ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2475ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2475f0:
    // 0x2475f0: 0xc0b5160  jal         func_2D4580
label_2475f4:
    if (ctx->pc == 0x2475F4u) {
        ctx->pc = 0x2475F4u;
            // 0x2475f4: 0x24a5b4c0  addiu       $a1, $a1, -0x4B40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948032));
        ctx->pc = 0x2475F8u;
        goto label_2475f8;
    }
    ctx->pc = 0x2475F0u;
    SET_GPR_U32(ctx, 31, 0x2475F8u);
    ctx->pc = 0x2475F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2475F0u;
            // 0x2475f4: 0x24a5b4c0  addiu       $a1, $a1, -0x4B40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948032));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2475F8u; }
        if (ctx->pc != 0x2475F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2475F8u; }
        if (ctx->pc != 0x2475F8u) { return; }
    }
    ctx->pc = 0x2475F8u;
label_2475f8:
    // 0x2475f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2475f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2475fc:
    // 0x2475fc: 0x24050122  addiu       $a1, $zero, 0x122
    ctx->pc = 0x2475fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
label_247600:
    // 0x247600: 0xc0b5130  jal         func_2D44C0
label_247604:
    if (ctx->pc == 0x247604u) {
        ctx->pc = 0x247604u;
            // 0x247604: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->pc = 0x247608u;
        goto label_247608;
    }
    ctx->pc = 0x247600u;
    SET_GPR_U32(ctx, 31, 0x247608u);
    ctx->pc = 0x247604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247600u;
            // 0x247604: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247608u; }
        if (ctx->pc != 0x247608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247608u; }
        if (ctx->pc != 0x247608u) { return; }
    }
    ctx->pc = 0x247608u;
label_247608:
    // 0x247608: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x247608u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_24760c:
    // 0x24760c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24760cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247610:
    // 0x247610: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x247610u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_247614:
    // 0x247614: 0xc0b5688  jal         func_2D5A20
label_247618:
    if (ctx->pc == 0x247618u) {
        ctx->pc = 0x247618u;
            // 0x247618: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24761Cu;
        goto label_24761c;
    }
    ctx->pc = 0x247614u;
    SET_GPR_U32(ctx, 31, 0x24761Cu);
    ctx->pc = 0x247618u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247614u;
            // 0x247618: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24761Cu; }
        if (ctx->pc != 0x24761Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24761Cu; }
        if (ctx->pc != 0x24761Cu) { return; }
    }
    ctx->pc = 0x24761Cu;
label_24761c:
    // 0x24761c: 0x8f8696e8  lw          $a2, -0x6918($gp)
    ctx->pc = 0x24761cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940392)));
label_247620:
    // 0x247620: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x247620u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_247624:
    // 0x247624: 0x27a40480  addiu       $a0, $sp, 0x480
    ctx->pc = 0x247624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
label_247628:
    // 0x247628: 0xc04a234  jal         func_1288D0
label_24762c:
    if (ctx->pc == 0x24762Cu) {
        ctx->pc = 0x24762Cu;
            // 0x24762c: 0x24a5b4e0  addiu       $a1, $a1, -0x4B20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948064));
        ctx->pc = 0x247630u;
        goto label_247630;
    }
    ctx->pc = 0x247628u;
    SET_GPR_U32(ctx, 31, 0x247630u);
    ctx->pc = 0x24762Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247628u;
            // 0x24762c: 0x24a5b4e0  addiu       $a1, $a1, -0x4B20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948064));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247630u; }
        if (ctx->pc != 0x247630u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247630u; }
        if (ctx->pc != 0x247630u) { return; }
    }
    ctx->pc = 0x247630u;
label_247630:
    // 0x247630: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247630u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247634:
    // 0x247634: 0xc0b5160  jal         func_2D4580
label_247638:
    if (ctx->pc == 0x247638u) {
        ctx->pc = 0x247638u;
            // 0x247638: 0x27a50480  addiu       $a1, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->pc = 0x24763Cu;
        goto label_24763c;
    }
    ctx->pc = 0x247634u;
    SET_GPR_U32(ctx, 31, 0x24763Cu);
    ctx->pc = 0x247638u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247634u;
            // 0x247638: 0x27a50480  addiu       $a1, $sp, 0x480 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1152));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24763Cu; }
        if (ctx->pc != 0x24763Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24763Cu; }
        if (ctx->pc != 0x24763Cu) { return; }
    }
    ctx->pc = 0x24763Cu;
label_24763c:
    // 0x24763c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24763cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247640:
    // 0x247640: 0x24050122  addiu       $a1, $zero, 0x122
    ctx->pc = 0x247640u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
label_247644:
    // 0x247644: 0xc0b5130  jal         func_2D44C0
label_247648:
    if (ctx->pc == 0x247648u) {
        ctx->pc = 0x247648u;
            // 0x247648: 0x2406008c  addiu       $a2, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->pc = 0x24764Cu;
        goto label_24764c;
    }
    ctx->pc = 0x247644u;
    SET_GPR_U32(ctx, 31, 0x24764Cu);
    ctx->pc = 0x247648u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247644u;
            // 0x247648: 0x2406008c  addiu       $a2, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24764Cu; }
        if (ctx->pc != 0x24764Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24764Cu; }
        if (ctx->pc != 0x24764Cu) { return; }
    }
    ctx->pc = 0x24764Cu;
label_24764c:
    // 0x24764c: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x24764cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_247650:
    // 0x247650: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247654:
    // 0x247654: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x247654u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_247658:
    // 0x247658: 0xc0b5688  jal         func_2D5A20
label_24765c:
    if (ctx->pc == 0x24765Cu) {
        ctx->pc = 0x24765Cu;
            // 0x24765c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247660u;
        goto label_247660;
    }
    ctx->pc = 0x247658u;
    SET_GPR_U32(ctx, 31, 0x247660u);
    ctx->pc = 0x24765Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247658u;
            // 0x24765c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247660u; }
        if (ctx->pc != 0x247660u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247660u; }
        if (ctx->pc != 0x247660u) { return; }
    }
    ctx->pc = 0x247660u;
label_247660:
    // 0x247660: 0x8f83967c  lw          $v1, -0x6984($gp)
    ctx->pc = 0x247660u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940284)));
label_247664:
    // 0x247664: 0x14600010  bnez        $v1, . + 4 + (0x10 << 2)
label_247668:
    if (ctx->pc == 0x247668u) {
        ctx->pc = 0x24766Cu;
        goto label_24766c;
    }
    ctx->pc = 0x247664u;
    {
        const bool branch_taken_0x247664 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x247664) {
            ctx->pc = 0x2476A8u;
            goto label_2476a8;
        }
    }
    ctx->pc = 0x24766Cu;
label_24766c:
    // 0x24766c: 0x8f8396ec  lw          $v1, -0x6914($gp)
    ctx->pc = 0x24766cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940396)));
label_247670:
    // 0x247670: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_247674:
    if (ctx->pc == 0x247674u) {
        ctx->pc = 0x247674u;
            // 0x247674: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x247678u;
        goto label_247678;
    }
    ctx->pc = 0x247670u;
    {
        const bool branch_taken_0x247670 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x247674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247670u;
            // 0x247674: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247670) {
            ctx->pc = 0x2476A8u;
            goto label_2476a8;
        }
    }
    ctx->pc = 0x247678u;
label_247678:
    // 0x247678: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24767c:
    // 0x24767c: 0xc0b5160  jal         func_2D4580
label_247680:
    if (ctx->pc == 0x247680u) {
        ctx->pc = 0x247680u;
            // 0x247680: 0x24a5b4f0  addiu       $a1, $a1, -0x4B10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948080));
        ctx->pc = 0x247684u;
        goto label_247684;
    }
    ctx->pc = 0x24767Cu;
    SET_GPR_U32(ctx, 31, 0x247684u);
    ctx->pc = 0x247680u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24767Cu;
            // 0x247680: 0x24a5b4f0  addiu       $a1, $a1, -0x4B10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247684u; }
        if (ctx->pc != 0x247684u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247684u; }
        if (ctx->pc != 0x247684u) { return; }
    }
    ctx->pc = 0x247684u;
label_247684:
    // 0x247684: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247684u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247688:
    // 0x247688: 0x24050122  addiu       $a1, $zero, 0x122
    ctx->pc = 0x247688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
label_24768c:
    // 0x24768c: 0xc0b5130  jal         func_2D44C0
label_247690:
    if (ctx->pc == 0x247690u) {
        ctx->pc = 0x247690u;
            // 0x247690: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x247694u;
        goto label_247694;
    }
    ctx->pc = 0x24768Cu;
    SET_GPR_U32(ctx, 31, 0x247694u);
    ctx->pc = 0x247690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24768Cu;
            // 0x247690: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247694u; }
        if (ctx->pc != 0x247694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247694u; }
        if (ctx->pc != 0x247694u) { return; }
    }
    ctx->pc = 0x247694u;
label_247694:
    // 0x247694: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x247694u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_247698:
    // 0x247698: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24769c:
    // 0x24769c: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x24769cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_2476a0:
    // 0x2476a0: 0xc0b5688  jal         func_2D5A20
label_2476a4:
    if (ctx->pc == 0x2476A4u) {
        ctx->pc = 0x2476A4u;
            // 0x2476a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2476A8u;
        goto label_2476a8;
    }
    ctx->pc = 0x2476A0u;
    SET_GPR_U32(ctx, 31, 0x2476A8u);
    ctx->pc = 0x2476A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2476A0u;
            // 0x2476a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2476A8u; }
        if (ctx->pc != 0x2476A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2476A8u; }
        if (ctx->pc != 0x2476A8u) { return; }
    }
    ctx->pc = 0x2476A8u;
label_2476a8:
    // 0x2476a8: 0x838396cc  lb          $v1, -0x6934($gp)
    ctx->pc = 0x2476a8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294940364)));
label_2476ac:
    // 0x2476ac: 0x106002f5  beqz        $v1, . + 4 + (0x2F5 << 2)
label_2476b0:
    if (ctx->pc == 0x2476B0u) {
        ctx->pc = 0x2476B4u;
        goto label_2476b4;
    }
    ctx->pc = 0x2476ACu;
    {
        const bool branch_taken_0x2476ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2476ac) {
            ctx->pc = 0x248284u;
            goto label_248284;
        }
    }
    ctx->pc = 0x2476B4u;
label_2476b4:
    // 0x2476b4: 0x8f8296f0  lw          $v0, -0x6910($gp)
    ctx->pc = 0x2476b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940400)));
label_2476b8:
    // 0x2476b8: 0x1040005a  beqz        $v0, . + 4 + (0x5A << 2)
label_2476bc:
    if (ctx->pc == 0x2476BCu) {
        ctx->pc = 0x2476BCu;
            // 0x2476bc: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x2476C0u;
        goto label_2476c0;
    }
    ctx->pc = 0x2476B8u;
    {
        const bool branch_taken_0x2476b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2476BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2476B8u;
            // 0x2476bc: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2476b8) {
            ctx->pc = 0x247824u;
            goto label_247824;
        }
    }
    ctx->pc = 0x2476C0u;
label_2476c0:
    // 0x2476c0: 0x8f8496ec  lw          $a0, -0x6914($gp)
    ctx->pc = 0x2476c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940396)));
label_2476c4:
    // 0x2476c4: 0x10800057  beqz        $a0, . + 4 + (0x57 << 2)
label_2476c8:
    if (ctx->pc == 0x2476C8u) {
        ctx->pc = 0x2476CCu;
        goto label_2476cc;
    }
    ctx->pc = 0x2476C4u;
    {
        const bool branch_taken_0x2476c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2476c4) {
            ctx->pc = 0x247824u;
            goto label_247824;
        }
    }
    ctx->pc = 0x2476CCu;
label_2476cc:
    // 0x2476cc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2476ccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2476d0:
    // 0x2476d0: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2476d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2476d4:
    // 0x2476d4: 0x320f809  jalr        $t9
label_2476d8:
    if (ctx->pc == 0x2476D8u) {
        ctx->pc = 0x2476D8u;
            // 0x2476d8: 0x27a504c0  addiu       $a1, $sp, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
        ctx->pc = 0x2476DCu;
        goto label_2476dc;
    }
    ctx->pc = 0x2476D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2476DCu);
        ctx->pc = 0x2476D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2476D4u;
            // 0x2476d8: 0x27a504c0  addiu       $a1, $sp, 0x4C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1216));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2476DCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2476DCu; }
            if (ctx->pc != 0x2476DCu) { return; }
        }
        }
    }
    ctx->pc = 0x2476DCu;
label_2476dc:
    // 0x2476dc: 0x8f8496ec  lw          $a0, -0x6914($gp)
    ctx->pc = 0x2476dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940396)));
label_2476e0:
    // 0x2476e0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2476e0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2476e4:
    // 0x2476e4: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x2476e4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_2476e8:
    // 0x2476e8: 0x320f809  jalr        $t9
label_2476ec:
    if (ctx->pc == 0x2476ECu) {
        ctx->pc = 0x2476ECu;
            // 0x2476ec: 0x27a504d0  addiu       $a1, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->pc = 0x2476F0u;
        goto label_2476f0;
    }
    ctx->pc = 0x2476E8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2476F0u);
        ctx->pc = 0x2476ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2476E8u;
            // 0x2476ec: 0x27a504d0  addiu       $a1, $sp, 0x4D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1232));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2476F0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2476F0u; }
            if (ctx->pc != 0x2476F0u) { return; }
        }
        }
    }
    ctx->pc = 0x2476F0u;
label_2476f0:
    // 0x2476f0: 0xc0a24f0  jal         func_2893C0
label_2476f4:
    if (ctx->pc == 0x2476F4u) {
        ctx->pc = 0x2476F4u;
            // 0x2476f4: 0xc7ac04d0  lwc1        $f12, 0x4D0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x2476F8u;
        goto label_2476f8;
    }
    ctx->pc = 0x2476F0u;
    SET_GPR_U32(ctx, 31, 0x2476F8u);
    ctx->pc = 0x2476F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2476F0u;
            // 0x2476f4: 0xc7ac04d0  lwc1        $f12, 0x4D0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1232)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2476F8u; }
        if (ctx->pc != 0x2476F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2476F8u; }
        if (ctx->pc != 0x2476F8u) { return; }
    }
    ctx->pc = 0x2476F8u;
label_2476f8:
    // 0x2476f8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2476f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2476fc:
    // 0x2476fc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2476fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247700:
    // 0x247700: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x247700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_247704:
    // 0x247704: 0xc04a234  jal         func_1288D0
label_247708:
    if (ctx->pc == 0x247708u) {
        ctx->pc = 0x247708u;
            // 0x247708: 0x24a5b510  addiu       $a1, $a1, -0x4AF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948112));
        ctx->pc = 0x24770Cu;
        goto label_24770c;
    }
    ctx->pc = 0x247704u;
    SET_GPR_U32(ctx, 31, 0x24770Cu);
    ctx->pc = 0x247708u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247704u;
            // 0x247708: 0x24a5b510  addiu       $a1, $a1, -0x4AF0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24770Cu; }
        if (ctx->pc != 0x24770Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24770Cu; }
        if (ctx->pc != 0x24770Cu) { return; }
    }
    ctx->pc = 0x24770Cu;
label_24770c:
    // 0x24770c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24770cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247710:
    // 0x247710: 0xc0b5160  jal         func_2D4580
label_247714:
    if (ctx->pc == 0x247714u) {
        ctx->pc = 0x247714u;
            // 0x247714: 0x27a50280  addiu       $a1, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = 0x247718u;
        goto label_247718;
    }
    ctx->pc = 0x247710u;
    SET_GPR_U32(ctx, 31, 0x247718u);
    ctx->pc = 0x247714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247710u;
            // 0x247714: 0x27a50280  addiu       $a1, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247718u; }
        if (ctx->pc != 0x247718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247718u; }
        if (ctx->pc != 0x247718u) { return; }
    }
    ctx->pc = 0x247718u;
label_247718:
    // 0x247718: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24771c:
    // 0x24771c: 0x24050122  addiu       $a1, $zero, 0x122
    ctx->pc = 0x24771cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
label_247720:
    // 0x247720: 0xc0b5130  jal         func_2D44C0
label_247724:
    if (ctx->pc == 0x247724u) {
        ctx->pc = 0x247724u;
            // 0x247724: 0x24060104  addiu       $a2, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x247728u;
        goto label_247728;
    }
    ctx->pc = 0x247720u;
    SET_GPR_U32(ctx, 31, 0x247728u);
    ctx->pc = 0x247724u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247720u;
            // 0x247724: 0x24060104  addiu       $a2, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247728u; }
        if (ctx->pc != 0x247728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247728u; }
        if (ctx->pc != 0x247728u) { return; }
    }
    ctx->pc = 0x247728u;
label_247728:
    // 0x247728: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x247728u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_24772c:
    // 0x24772c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24772cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247730:
    // 0x247730: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x247730u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_247734:
    // 0x247734: 0xc0b5688  jal         func_2D5A20
label_247738:
    if (ctx->pc == 0x247738u) {
        ctx->pc = 0x247738u;
            // 0x247738: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24773Cu;
        goto label_24773c;
    }
    ctx->pc = 0x247734u;
    SET_GPR_U32(ctx, 31, 0x24773Cu);
    ctx->pc = 0x247738u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247734u;
            // 0x247738: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24773Cu; }
        if (ctx->pc != 0x24773Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24773Cu; }
        if (ctx->pc != 0x24773Cu) { return; }
    }
    ctx->pc = 0x24773Cu;
label_24773c:
    // 0x24773c: 0xc0a24f0  jal         func_2893C0
label_247740:
    if (ctx->pc == 0x247740u) {
        ctx->pc = 0x247740u;
            // 0x247740: 0xc7ac04c0  lwc1        $f12, 0x4C0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x247744u;
        goto label_247744;
    }
    ctx->pc = 0x24773Cu;
    SET_GPR_U32(ctx, 31, 0x247744u);
    ctx->pc = 0x247740u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24773Cu;
            // 0x247740: 0xc7ac04c0  lwc1        $f12, 0x4C0($sp) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247744u; }
        if (ctx->pc != 0x247744u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247744u; }
        if (ctx->pc != 0x247744u) { return; }
    }
    ctx->pc = 0x247744u;
label_247744:
    // 0x247744: 0xc7ac04c4  lwc1        $f12, 0x4C4($sp)
    ctx->pc = 0x247744u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_247748:
    // 0x247748: 0xc0a24f0  jal         func_2893C0
label_24774c:
    if (ctx->pc == 0x24774Cu) {
        ctx->pc = 0x24774Cu;
            // 0x24774c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247750u;
        goto label_247750;
    }
    ctx->pc = 0x247748u;
    SET_GPR_U32(ctx, 31, 0x247750u);
    ctx->pc = 0x24774Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247748u;
            // 0x24774c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247750u; }
        if (ctx->pc != 0x247750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247750u; }
        if (ctx->pc != 0x247750u) { return; }
    }
    ctx->pc = 0x247750u;
label_247750:
    // 0x247750: 0xc7ac04c8  lwc1        $f12, 0x4C8($sp)
    ctx->pc = 0x247750u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_247754:
    // 0x247754: 0xc0a24f0  jal         func_2893C0
label_247758:
    if (ctx->pc == 0x247758u) {
        ctx->pc = 0x247758u;
            // 0x247758: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24775Cu;
        goto label_24775c;
    }
    ctx->pc = 0x247754u;
    SET_GPR_U32(ctx, 31, 0x24775Cu);
    ctx->pc = 0x247758u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247754u;
            // 0x247758: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2893C0u;
    if (runtime->hasFunction(0x2893C0u)) {
        auto targetFn = runtime->lookupFunction(0x2893C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24775Cu; }
        if (ctx->pc != 0x24775Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptodp_0x2893c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24775Cu; }
        if (ctx->pc != 0x24775Cu) { return; }
    }
    ctx->pc = 0x24775Cu;
label_24775c:
    // 0x24775c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24775cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_247760:
    // 0x247760: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x247760u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_247764:
    // 0x247764: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x247764u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_247768:
    // 0x247768: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x247768u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24776c:
    // 0x24776c: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x24776cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_247770:
    // 0x247770: 0xc04a234  jal         func_1288D0
label_247774:
    if (ctx->pc == 0x247774u) {
        ctx->pc = 0x247774u;
            // 0x247774: 0x24a5b520  addiu       $a1, $a1, -0x4AE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948128));
        ctx->pc = 0x247778u;
        goto label_247778;
    }
    ctx->pc = 0x247770u;
    SET_GPR_U32(ctx, 31, 0x247778u);
    ctx->pc = 0x247774u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247770u;
            // 0x247774: 0x24a5b520  addiu       $a1, $a1, -0x4AE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247778u; }
        if (ctx->pc != 0x247778u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247778u; }
        if (ctx->pc != 0x247778u) { return; }
    }
    ctx->pc = 0x247778u;
label_247778:
    // 0x247778: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24777c:
    // 0x24777c: 0xc0b5160  jal         func_2D4580
label_247780:
    if (ctx->pc == 0x247780u) {
        ctx->pc = 0x247780u;
            // 0x247780: 0x27a50280  addiu       $a1, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = 0x247784u;
        goto label_247784;
    }
    ctx->pc = 0x24777Cu;
    SET_GPR_U32(ctx, 31, 0x247784u);
    ctx->pc = 0x247780u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24777Cu;
            // 0x247780: 0x27a50280  addiu       $a1, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247784u; }
        if (ctx->pc != 0x247784u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247784u; }
        if (ctx->pc != 0x247784u) { return; }
    }
    ctx->pc = 0x247784u;
label_247784:
    // 0x247784: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247784u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247788:
    // 0x247788: 0x24050122  addiu       $a1, $zero, 0x122
    ctx->pc = 0x247788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
label_24778c:
    // 0x24778c: 0xc0b5130  jal         func_2D44C0
label_247790:
    if (ctx->pc == 0x247790u) {
        ctx->pc = 0x247790u;
            // 0x247790: 0x24060118  addiu       $a2, $zero, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
        ctx->pc = 0x247794u;
        goto label_247794;
    }
    ctx->pc = 0x24778Cu;
    SET_GPR_U32(ctx, 31, 0x247794u);
    ctx->pc = 0x247790u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24778Cu;
            // 0x247790: 0x24060118  addiu       $a2, $zero, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 280));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247794u; }
        if (ctx->pc != 0x247794u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247794u; }
        if (ctx->pc != 0x247794u) { return; }
    }
    ctx->pc = 0x247794u;
label_247794:
    // 0x247794: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x247794u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_247798:
    // 0x247798: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247798u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24779c:
    // 0x24779c: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x24779cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_2477a0:
    // 0x2477a0: 0xc0b5688  jal         func_2D5A20
label_2477a4:
    if (ctx->pc == 0x2477A4u) {
        ctx->pc = 0x2477A4u;
            // 0x2477a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2477A8u;
        goto label_2477a8;
    }
    ctx->pc = 0x2477A0u;
    SET_GPR_U32(ctx, 31, 0x2477A8u);
    ctx->pc = 0x2477A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2477A0u;
            // 0x2477a4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2477A8u; }
        if (ctx->pc != 0x2477A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2477A8u; }
        if (ctx->pc != 0x2477A8u) { return; }
    }
    ctx->pc = 0x2477A8u;
label_2477a8:
    // 0x2477a8: 0x8f8496f0  lw          $a0, -0x6910($gp)
    ctx->pc = 0x2477a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940400)));
label_2477ac:
    // 0x2477ac: 0x8c990060  lw          $t9, 0x60($a0)
    ctx->pc = 0x2477acu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
label_2477b0:
    // 0x2477b0: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x2477b0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_2477b4:
    // 0x2477b4: 0x320f809  jalr        $t9
label_2477b8:
    if (ctx->pc == 0x2477B8u) {
        ctx->pc = 0x2477B8u;
            // 0x2477b8: 0x27a504f0  addiu       $a1, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->pc = 0x2477BCu;
        goto label_2477bc;
    }
    ctx->pc = 0x2477B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2477BCu);
        ctx->pc = 0x2477B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2477B4u;
            // 0x2477b8: 0x27a504f0  addiu       $a1, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2477BCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2477BCu; }
            if (ctx->pc != 0x2477BCu) { return; }
        }
        }
    }
    ctx->pc = 0x2477BCu;
label_2477bc:
    // 0x2477bc: 0x8f8496f0  lw          $a0, -0x6910($gp)
    ctx->pc = 0x2477bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940400)));
label_2477c0:
    // 0x2477c0: 0xc04c574  jal         func_1315D0
label_2477c4:
    if (ctx->pc == 0x2477C4u) {
        ctx->pc = 0x2477C4u;
            // 0x2477c4: 0x27a504e0  addiu       $a1, $sp, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
        ctx->pc = 0x2477C8u;
        goto label_2477c8;
    }
    ctx->pc = 0x2477C0u;
    SET_GPR_U32(ctx, 31, 0x2477C8u);
    ctx->pc = 0x2477C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2477C0u;
            // 0x2477c4: 0x27a504e0  addiu       $a1, $sp, 0x4E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1315D0u;
    if (runtime->hasFunction(0x1315D0u)) {
        auto targetFn = runtime->lookupFunction(0x1315D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2477C8u; }
        if (ctx->pc != 0x2477C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetPos__9mgCCameraFPf_0x1315d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2477C8u; }
        if (ctx->pc != 0x2477C8u) { return; }
    }
    ctx->pc = 0x2477C8u;
label_2477c8:
    // 0x2477c8: 0xc041c7a  jal         func_1071E8
label_2477cc:
    if (ctx->pc == 0x2477CCu) {
        ctx->pc = 0x2477CCu;
            // 0x2477cc: 0x27a40570  addiu       $a0, $sp, 0x570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1392));
        ctx->pc = 0x2477D0u;
        goto label_2477d0;
    }
    ctx->pc = 0x2477C8u;
    SET_GPR_U32(ctx, 31, 0x2477D0u);
    ctx->pc = 0x2477CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2477C8u;
            // 0x2477cc: 0x27a40570  addiu       $a0, $sp, 0x570 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1392));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1071E8u;
    if (runtime->hasFunction(0x1071E8u)) {
        auto targetFn = runtime->lookupFunction(0x1071E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2477D0u; }
        if (ctx->pc != 0x2477D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0UnitMatrix_0x1071e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2477D0u; }
        if (ctx->pc != 0x2477D0u) { return; }
    }
    ctx->pc = 0x2477D0u;
label_2477d0:
    // 0x2477d0: 0x27a40530  addiu       $a0, $sp, 0x530
    ctx->pc = 0x2477d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1328));
label_2477d4:
    // 0x2477d4: 0x27a50570  addiu       $a1, $sp, 0x570
    ctx->pc = 0x2477d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1392));
label_2477d8:
    // 0x2477d8: 0xc041bbc  jal         func_106EF0
label_2477dc:
    if (ctx->pc == 0x2477DCu) {
        ctx->pc = 0x2477DCu;
            // 0x2477dc: 0x27a604f0  addiu       $a2, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->pc = 0x2477E0u;
        goto label_2477e0;
    }
    ctx->pc = 0x2477D8u;
    SET_GPR_U32(ctx, 31, 0x2477E0u);
    ctx->pc = 0x2477DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2477D8u;
            // 0x2477dc: 0x27a604f0  addiu       $a2, $sp, 0x4F0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x106EF0u;
    if (runtime->hasFunction(0x106EF0u)) {
        auto targetFn = runtime->lookupFunction(0x106EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2477E0u; }
        if (ctx->pc != 0x2477E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sceVu0MulMatrix_0x106ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2477E0u; }
        if (ctx->pc != 0x2477E0u) { return; }
    }
    ctx->pc = 0x2477E0u;
label_2477e0:
    // 0x2477e0: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x2477e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_2477e4:
    // 0x2477e4: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x2477e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
label_2477e8:
    // 0x2477e8: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x2477e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_2477ec:
    // 0x2477ec: 0xc04ba14  jal         func_12E850
label_2477f0:
    if (ctx->pc == 0x2477F0u) {
        ctx->pc = 0x2477F0u;
            // 0x2477f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2477F4u;
        goto label_2477f4;
    }
    ctx->pc = 0x2477ECu;
    SET_GPR_U32(ctx, 31, 0x2477F4u);
    ctx->pc = 0x2477F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2477ECu;
            // 0x2477f0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12E850u;
    if (runtime->hasFunction(0x12E850u)) {
        auto targetFn = runtime->lookupFunction(0x12E850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2477F4u; }
        if (ctx->pc != 0x2477F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        ReloadTexture__17mgCTextureManagerFiP13sceVif1Packet_0x12e850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2477F4u; }
        if (ctx->pc != 0x2477F4u) { return; }
    }
    ctx->pc = 0x2477F4u;
label_2477f4:
    // 0x2477f4: 0x8f8496ec  lw          $a0, -0x6914($gp)
    ctx->pc = 0x2477f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940396)));
label_2477f8:
    // 0x2477f8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2477f8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2477fc:
    // 0x2477fc: 0x8f3900d4  lw          $t9, 0xD4($t9)
    ctx->pc = 0x2477fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 212)));
label_247800:
    // 0x247800: 0x320f809  jalr        $t9
label_247804:
    if (ctx->pc == 0x247804u) {
        ctx->pc = 0x247808u;
        goto label_247808;
    }
    ctx->pc = 0x247800u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x247808u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x247808u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x247808u; }
            if (ctx->pc != 0x247808u) { return; }
        }
        }
    }
    ctx->pc = 0x247808u;
label_247808:
    // 0x247808: 0x8f8496ec  lw          $a0, -0x6914($gp)
    ctx->pc = 0x247808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940396)));
label_24780c:
    // 0x24780c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x24780cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_247810:
    // 0x247810: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x247810u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_247814:
    // 0x247814: 0x320f809  jalr        $t9
label_247818:
    if (ctx->pc == 0x247818u) {
        ctx->pc = 0x24781Cu;
        goto label_24781c;
    }
    ctx->pc = 0x247814u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x24781Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x24781Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x24781Cu; }
            if (ctx->pc != 0x24781Cu) { return; }
        }
        }
    }
    ctx->pc = 0x24781Cu;
label_24781c:
    // 0x24781c: 0x1000029a  b           . + 4 + (0x29A << 2)
label_247820:
    if (ctx->pc == 0x247820u) {
        ctx->pc = 0x247820u;
            // 0x247820: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x247824u;
        goto label_247824;
    }
    ctx->pc = 0x24781Cu;
    {
        const bool branch_taken_0x24781c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24781Cu;
            // 0x247820: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24781c) {
            ctx->pc = 0x248288u;
            goto label_248288;
        }
    }
    ctx->pc = 0x247824u;
label_247824:
    // 0x247824: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247824u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247828:
    // 0x247828: 0xc0b5160  jal         func_2D4580
label_24782c:
    if (ctx->pc == 0x24782Cu) {
        ctx->pc = 0x24782Cu;
            // 0x24782c: 0x24a5b550  addiu       $a1, $a1, -0x4AB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948176));
        ctx->pc = 0x247830u;
        goto label_247830;
    }
    ctx->pc = 0x247828u;
    SET_GPR_U32(ctx, 31, 0x247830u);
    ctx->pc = 0x24782Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247828u;
            // 0x24782c: 0x24a5b550  addiu       $a1, $a1, -0x4AB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247830u; }
        if (ctx->pc != 0x247830u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247830u; }
        if (ctx->pc != 0x247830u) { return; }
    }
    ctx->pc = 0x247830u;
label_247830:
    // 0x247830: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247830u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247834:
    // 0x247834: 0x24050122  addiu       $a1, $zero, 0x122
    ctx->pc = 0x247834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 290));
label_247838:
    // 0x247838: 0xc0b5130  jal         func_2D44C0
label_24783c:
    if (ctx->pc == 0x24783Cu) {
        ctx->pc = 0x24783Cu;
            // 0x24783c: 0x24060104  addiu       $a2, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x247840u;
        goto label_247840;
    }
    ctx->pc = 0x247838u;
    SET_GPR_U32(ctx, 31, 0x247840u);
    ctx->pc = 0x24783Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247838u;
            // 0x24783c: 0x24060104  addiu       $a2, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247840u; }
        if (ctx->pc != 0x247840u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247840u; }
        if (ctx->pc != 0x247840u) { return; }
    }
    ctx->pc = 0x247840u;
label_247840:
    // 0x247840: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x247840u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_247844:
    // 0x247844: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247844u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247848:
    // 0x247848: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x247848u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_24784c:
    // 0x24784c: 0xc0b5688  jal         func_2D5A20
label_247850:
    if (ctx->pc == 0x247850u) {
        ctx->pc = 0x247850u;
            // 0x247850: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247854u;
        goto label_247854;
    }
    ctx->pc = 0x24784Cu;
    SET_GPR_U32(ctx, 31, 0x247854u);
    ctx->pc = 0x247850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24784Cu;
            // 0x247850: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247854u; }
        if (ctx->pc != 0x247854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247854u; }
        if (ctx->pc != 0x247854u) { return; }
    }
    ctx->pc = 0x247854u;
label_247854:
    // 0x247854: 0x1000028b  b           . + 4 + (0x28B << 2)
label_247858:
    if (ctx->pc == 0x247858u) {
        ctx->pc = 0x24785Cu;
        goto label_24785c;
    }
    ctx->pc = 0x247854u;
    {
        const bool branch_taken_0x247854 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x247854) {
            ctx->pc = 0x248284u;
            goto label_248284;
        }
    }
    ctx->pc = 0x24785Cu;
label_24785c:
    // 0x24785c: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x24785cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_247860:
    // 0x247860: 0x3c024366  lui         $v0, 0x4366
    ctx->pc = 0x247860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17254 << 16));
label_247864:
    // 0x247864: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x247864u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_247868:
    // 0x247868: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x247868u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_24786c:
    // 0x24786c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x24786cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_247870:
    // 0x247870: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x247870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247874:
    // 0x247874: 0x3c03436c  lui         $v1, 0x436C
    ctx->pc = 0x247874u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17260 << 16));
label_247878:
    // 0x247878: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x247878u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24787c:
    // 0x24787c: 0x3c024348  lui         $v0, 0x4348
    ctx->pc = 0x24787cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17224 << 16));
label_247880:
    // 0x247880: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x247880u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_247884:
    // 0x247884: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x247884u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_247888:
    // 0x247888: 0xc0887b8  jal         func_221EE0
label_24788c:
    if (ctx->pc == 0x24788Cu) {
        ctx->pc = 0x24788Cu;
            // 0x24788c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247890u;
        goto label_247890;
    }
    ctx->pc = 0x247888u;
    SET_GPR_U32(ctx, 31, 0x247890u);
    ctx->pc = 0x24788Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247888u;
            // 0x24788c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EE0u;
    if (runtime->hasFunction(0x221EE0u)) {
        auto targetFn = runtime->lookupFunction(0x221EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247890u; }
        if (ctx->pc != 0x247890u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fffffiiii_0x221ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247890u; }
        if (ctx->pc != 0x247890u) { return; }
    }
    ctx->pc = 0x247890u;
label_247890:
    // 0x247890: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x247890u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_247894:
    // 0x247894: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247894u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247898:
    // 0x247898: 0xc0b5160  jal         func_2D4580
label_24789c:
    if (ctx->pc == 0x24789Cu) {
        ctx->pc = 0x24789Cu;
            // 0x24789c: 0x24a5b568  addiu       $a1, $a1, -0x4A98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948200));
        ctx->pc = 0x2478A0u;
        goto label_2478a0;
    }
    ctx->pc = 0x247898u;
    SET_GPR_U32(ctx, 31, 0x2478A0u);
    ctx->pc = 0x24789Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247898u;
            // 0x24789c: 0x24a5b568  addiu       $a1, $a1, -0x4A98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2478A0u; }
        if (ctx->pc != 0x2478A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2478A0u; }
        if (ctx->pc != 0x2478A0u) { return; }
    }
    ctx->pc = 0x2478A0u;
label_2478a0:
    // 0x2478a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2478a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2478a4:
    // 0x2478a4: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x2478a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_2478a8:
    // 0x2478a8: 0xc0b5130  jal         func_2D44C0
label_2478ac:
    if (ctx->pc == 0x2478ACu) {
        ctx->pc = 0x2478ACu;
            // 0x2478ac: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->pc = 0x2478B0u;
        goto label_2478b0;
    }
    ctx->pc = 0x2478A8u;
    SET_GPR_U32(ctx, 31, 0x2478B0u);
    ctx->pc = 0x2478ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2478A8u;
            // 0x2478ac: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2478B0u; }
        if (ctx->pc != 0x2478B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2478B0u; }
        if (ctx->pc != 0x2478B0u) { return; }
    }
    ctx->pc = 0x2478B0u;
label_2478b0:
    // 0x2478b0: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x2478b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_2478b4:
    // 0x2478b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2478b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2478b8:
    // 0x2478b8: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x2478b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_2478bc:
    // 0x2478bc: 0xc0b5688  jal         func_2D5A20
label_2478c0:
    if (ctx->pc == 0x2478C0u) {
        ctx->pc = 0x2478C0u;
            // 0x2478c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2478C4u;
        goto label_2478c4;
    }
    ctx->pc = 0x2478BCu;
    SET_GPR_U32(ctx, 31, 0x2478C4u);
    ctx->pc = 0x2478C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2478BCu;
            // 0x2478c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2478C4u; }
        if (ctx->pc != 0x2478C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2478C4u; }
        if (ctx->pc != 0x2478C4u) { return; }
    }
    ctx->pc = 0x2478C4u;
label_2478c4:
    // 0x2478c4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2478c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2478c8:
    // 0x2478c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2478c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2478cc:
    // 0x2478cc: 0xc0b5160  jal         func_2D4580
label_2478d0:
    if (ctx->pc == 0x2478D0u) {
        ctx->pc = 0x2478D0u;
            // 0x2478d0: 0x24a5b580  addiu       $a1, $a1, -0x4A80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948224));
        ctx->pc = 0x2478D4u;
        goto label_2478d4;
    }
    ctx->pc = 0x2478CCu;
    SET_GPR_U32(ctx, 31, 0x2478D4u);
    ctx->pc = 0x2478D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2478CCu;
            // 0x2478d0: 0x24a5b580  addiu       $a1, $a1, -0x4A80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948224));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2478D4u; }
        if (ctx->pc != 0x2478D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2478D4u; }
        if (ctx->pc != 0x2478D4u) { return; }
    }
    ctx->pc = 0x2478D4u;
label_2478d4:
    // 0x2478d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2478d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2478d8:
    // 0x2478d8: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x2478d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_2478dc:
    // 0x2478dc: 0xc0b5130  jal         func_2D44C0
label_2478e0:
    if (ctx->pc == 0x2478E0u) {
        ctx->pc = 0x2478E0u;
            // 0x2478e0: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x2478E4u;
        goto label_2478e4;
    }
    ctx->pc = 0x2478DCu;
    SET_GPR_U32(ctx, 31, 0x2478E4u);
    ctx->pc = 0x2478E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2478DCu;
            // 0x2478e0: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2478E4u; }
        if (ctx->pc != 0x2478E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2478E4u; }
        if (ctx->pc != 0x2478E4u) { return; }
    }
    ctx->pc = 0x2478E4u;
label_2478e4:
    // 0x2478e4: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x2478e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_2478e8:
    // 0x2478e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2478e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2478ec:
    // 0x2478ec: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x2478ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_2478f0:
    // 0x2478f0: 0xc0b5688  jal         func_2D5A20
label_2478f4:
    if (ctx->pc == 0x2478F4u) {
        ctx->pc = 0x2478F4u;
            // 0x2478f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2478F8u;
        goto label_2478f8;
    }
    ctx->pc = 0x2478F0u;
    SET_GPR_U32(ctx, 31, 0x2478F8u);
    ctx->pc = 0x2478F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2478F0u;
            // 0x2478f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2478F8u; }
        if (ctx->pc != 0x2478F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2478F8u; }
        if (ctx->pc != 0x2478F8u) { return; }
    }
    ctx->pc = 0x2478F8u;
label_2478f8:
    // 0x2478f8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2478f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2478fc:
    // 0x2478fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2478fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247900:
    // 0x247900: 0xc0b5160  jal         func_2D4580
label_247904:
    if (ctx->pc == 0x247904u) {
        ctx->pc = 0x247904u;
            // 0x247904: 0x24a5b5a0  addiu       $a1, $a1, -0x4A60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948256));
        ctx->pc = 0x247908u;
        goto label_247908;
    }
    ctx->pc = 0x247900u;
    SET_GPR_U32(ctx, 31, 0x247908u);
    ctx->pc = 0x247904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247900u;
            // 0x247904: 0x24a5b5a0  addiu       $a1, $a1, -0x4A60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247908u; }
        if (ctx->pc != 0x247908u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247908u; }
        if (ctx->pc != 0x247908u) { return; }
    }
    ctx->pc = 0x247908u;
label_247908:
    // 0x247908: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24790c:
    // 0x24790c: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x24790cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_247910:
    // 0x247910: 0xc0b5130  jal         func_2D44C0
label_247914:
    if (ctx->pc == 0x247914u) {
        ctx->pc = 0x247914u;
            // 0x247914: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x247918u;
        goto label_247918;
    }
    ctx->pc = 0x247910u;
    SET_GPR_U32(ctx, 31, 0x247918u);
    ctx->pc = 0x247914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247910u;
            // 0x247914: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247918u; }
        if (ctx->pc != 0x247918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247918u; }
        if (ctx->pc != 0x247918u) { return; }
    }
    ctx->pc = 0x247918u;
label_247918:
    // 0x247918: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x247918u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_24791c:
    // 0x24791c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24791cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247920:
    // 0x247920: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x247920u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_247924:
    // 0x247924: 0xc0b5688  jal         func_2D5A20
label_247928:
    if (ctx->pc == 0x247928u) {
        ctx->pc = 0x247928u;
            // 0x247928: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24792Cu;
        goto label_24792c;
    }
    ctx->pc = 0x247924u;
    SET_GPR_U32(ctx, 31, 0x24792Cu);
    ctx->pc = 0x247928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247924u;
            // 0x247928: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24792Cu; }
        if (ctx->pc != 0x24792Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24792Cu; }
        if (ctx->pc != 0x24792Cu) { return; }
    }
    ctx->pc = 0x24792Cu;
label_24792c:
    // 0x24792c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24792cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_247930:
    // 0x247930: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247930u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247934:
    // 0x247934: 0xc0b5160  jal         func_2D4580
label_247938:
    if (ctx->pc == 0x247938u) {
        ctx->pc = 0x247938u;
            // 0x247938: 0x24a5b5c0  addiu       $a1, $a1, -0x4A40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948288));
        ctx->pc = 0x24793Cu;
        goto label_24793c;
    }
    ctx->pc = 0x247934u;
    SET_GPR_U32(ctx, 31, 0x24793Cu);
    ctx->pc = 0x247938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247934u;
            // 0x247938: 0x24a5b5c0  addiu       $a1, $a1, -0x4A40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24793Cu; }
        if (ctx->pc != 0x24793Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24793Cu; }
        if (ctx->pc != 0x24793Cu) { return; }
    }
    ctx->pc = 0x24793Cu;
label_24793c:
    // 0x24793c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24793cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247940:
    // 0x247940: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x247940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_247944:
    // 0x247944: 0xc0b5130  jal         func_2D44C0
label_247948:
    if (ctx->pc == 0x247948u) {
        ctx->pc = 0x247948u;
            // 0x247948: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->pc = 0x24794Cu;
        goto label_24794c;
    }
    ctx->pc = 0x247944u;
    SET_GPR_U32(ctx, 31, 0x24794Cu);
    ctx->pc = 0x247948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247944u;
            // 0x247948: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24794Cu; }
        if (ctx->pc != 0x24794Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24794Cu; }
        if (ctx->pc != 0x24794Cu) { return; }
    }
    ctx->pc = 0x24794Cu;
label_24794c:
    // 0x24794c: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x24794cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_247950:
    // 0x247950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247954:
    // 0x247954: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x247954u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_247958:
    // 0x247958: 0xc0b5688  jal         func_2D5A20
label_24795c:
    if (ctx->pc == 0x24795Cu) {
        ctx->pc = 0x24795Cu;
            // 0x24795c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247960u;
        goto label_247960;
    }
    ctx->pc = 0x247958u;
    SET_GPR_U32(ctx, 31, 0x247960u);
    ctx->pc = 0x24795Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247958u;
            // 0x24795c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247960u; }
        if (ctx->pc != 0x247960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247960u; }
        if (ctx->pc != 0x247960u) { return; }
    }
    ctx->pc = 0x247960u;
label_247960:
    // 0x247960: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x247960u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_247964:
    // 0x247964: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247968:
    // 0x247968: 0xc0b5160  jal         func_2D4580
label_24796c:
    if (ctx->pc == 0x24796Cu) {
        ctx->pc = 0x24796Cu;
            // 0x24796c: 0x24a5b5d0  addiu       $a1, $a1, -0x4A30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948304));
        ctx->pc = 0x247970u;
        goto label_247970;
    }
    ctx->pc = 0x247968u;
    SET_GPR_U32(ctx, 31, 0x247970u);
    ctx->pc = 0x24796Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247968u;
            // 0x24796c: 0x24a5b5d0  addiu       $a1, $a1, -0x4A30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948304));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247970u; }
        if (ctx->pc != 0x247970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247970u; }
        if (ctx->pc != 0x247970u) { return; }
    }
    ctx->pc = 0x247970u;
label_247970:
    // 0x247970: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247974:
    // 0x247974: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x247974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_247978:
    // 0x247978: 0xc0b5130  jal         func_2D44C0
label_24797c:
    if (ctx->pc == 0x24797Cu) {
        ctx->pc = 0x24797Cu;
            // 0x24797c: 0x2406008c  addiu       $a2, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->pc = 0x247980u;
        goto label_247980;
    }
    ctx->pc = 0x247978u;
    SET_GPR_U32(ctx, 31, 0x247980u);
    ctx->pc = 0x24797Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247978u;
            // 0x24797c: 0x2406008c  addiu       $a2, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247980u; }
        if (ctx->pc != 0x247980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247980u; }
        if (ctx->pc != 0x247980u) { return; }
    }
    ctx->pc = 0x247980u;
label_247980:
    // 0x247980: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x247980u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_247984:
    // 0x247984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247988:
    // 0x247988: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x247988u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_24798c:
    // 0x24798c: 0xc0b5688  jal         func_2D5A20
label_247990:
    if (ctx->pc == 0x247990u) {
        ctx->pc = 0x247990u;
            // 0x247990: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247994u;
        goto label_247994;
    }
    ctx->pc = 0x24798Cu;
    SET_GPR_U32(ctx, 31, 0x247994u);
    ctx->pc = 0x247990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24798Cu;
            // 0x247990: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247994u; }
        if (ctx->pc != 0x247994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247994u; }
        if (ctx->pc != 0x247994u) { return; }
    }
    ctx->pc = 0x247994u;
label_247994:
    // 0x247994: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x247994u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_247998:
    // 0x247998: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24799c:
    // 0x24799c: 0xc0b5160  jal         func_2D4580
label_2479a0:
    if (ctx->pc == 0x2479A0u) {
        ctx->pc = 0x2479A0u;
            // 0x2479a0: 0x24a5b5e0  addiu       $a1, $a1, -0x4A20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948320));
        ctx->pc = 0x2479A4u;
        goto label_2479a4;
    }
    ctx->pc = 0x24799Cu;
    SET_GPR_U32(ctx, 31, 0x2479A4u);
    ctx->pc = 0x2479A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24799Cu;
            // 0x2479a0: 0x24a5b5e0  addiu       $a1, $a1, -0x4A20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948320));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2479A4u; }
        if (ctx->pc != 0x2479A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2479A4u; }
        if (ctx->pc != 0x2479A4u) { return; }
    }
    ctx->pc = 0x2479A4u;
label_2479a4:
    // 0x2479a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2479a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2479a8:
    // 0x2479a8: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x2479a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_2479ac:
    // 0x2479ac: 0xc0b5130  jal         func_2D44C0
label_2479b0:
    if (ctx->pc == 0x2479B0u) {
        ctx->pc = 0x2479B0u;
            // 0x2479b0: 0x240600a0  addiu       $a2, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->pc = 0x2479B4u;
        goto label_2479b4;
    }
    ctx->pc = 0x2479ACu;
    SET_GPR_U32(ctx, 31, 0x2479B4u);
    ctx->pc = 0x2479B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2479ACu;
            // 0x2479b0: 0x240600a0  addiu       $a2, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2479B4u; }
        if (ctx->pc != 0x2479B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2479B4u; }
        if (ctx->pc != 0x2479B4u) { return; }
    }
    ctx->pc = 0x2479B4u;
label_2479b4:
    // 0x2479b4: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x2479b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_2479b8:
    // 0x2479b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2479b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2479bc:
    // 0x2479bc: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x2479bcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_2479c0:
    // 0x2479c0: 0xc0b5688  jal         func_2D5A20
label_2479c4:
    if (ctx->pc == 0x2479C4u) {
        ctx->pc = 0x2479C4u;
            // 0x2479c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2479C8u;
        goto label_2479c8;
    }
    ctx->pc = 0x2479C0u;
    SET_GPR_U32(ctx, 31, 0x2479C8u);
    ctx->pc = 0x2479C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2479C0u;
            // 0x2479c4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2479C8u; }
        if (ctx->pc != 0x2479C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2479C8u; }
        if (ctx->pc != 0x2479C8u) { return; }
    }
    ctx->pc = 0x2479C8u;
label_2479c8:
    // 0x2479c8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2479c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2479cc:
    // 0x2479cc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2479ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2479d0:
    // 0x2479d0: 0xc0b5160  jal         func_2D4580
label_2479d4:
    if (ctx->pc == 0x2479D4u) {
        ctx->pc = 0x2479D4u;
            // 0x2479d4: 0x24a5b5f0  addiu       $a1, $a1, -0x4A10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948336));
        ctx->pc = 0x2479D8u;
        goto label_2479d8;
    }
    ctx->pc = 0x2479D0u;
    SET_GPR_U32(ctx, 31, 0x2479D8u);
    ctx->pc = 0x2479D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2479D0u;
            // 0x2479d4: 0x24a5b5f0  addiu       $a1, $a1, -0x4A10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2479D8u; }
        if (ctx->pc != 0x2479D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2479D8u; }
        if (ctx->pc != 0x2479D8u) { return; }
    }
    ctx->pc = 0x2479D8u;
label_2479d8:
    // 0x2479d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2479d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2479dc:
    // 0x2479dc: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x2479dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_2479e0:
    // 0x2479e0: 0xc0b5130  jal         func_2D44C0
label_2479e4:
    if (ctx->pc == 0x2479E4u) {
        ctx->pc = 0x2479E4u;
            // 0x2479e4: 0x240600b4  addiu       $a2, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->pc = 0x2479E8u;
        goto label_2479e8;
    }
    ctx->pc = 0x2479E0u;
    SET_GPR_U32(ctx, 31, 0x2479E8u);
    ctx->pc = 0x2479E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2479E0u;
            // 0x2479e4: 0x240600b4  addiu       $a2, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2479E8u; }
        if (ctx->pc != 0x2479E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2479E8u; }
        if (ctx->pc != 0x2479E8u) { return; }
    }
    ctx->pc = 0x2479E8u;
label_2479e8:
    // 0x2479e8: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x2479e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_2479ec:
    // 0x2479ec: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2479ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2479f0:
    // 0x2479f0: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x2479f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_2479f4:
    // 0x2479f4: 0xc0b5688  jal         func_2D5A20
label_2479f8:
    if (ctx->pc == 0x2479F8u) {
        ctx->pc = 0x2479F8u;
            // 0x2479f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2479FCu;
        goto label_2479fc;
    }
    ctx->pc = 0x2479F4u;
    SET_GPR_U32(ctx, 31, 0x2479FCu);
    ctx->pc = 0x2479F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2479F4u;
            // 0x2479f8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2479FCu; }
        if (ctx->pc != 0x2479FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2479FCu; }
        if (ctx->pc != 0x2479FCu) { return; }
    }
    ctx->pc = 0x2479FCu;
label_2479fc:
    // 0x2479fc: 0x8f8295c0  lw          $v0, -0x6A40($gp)
    ctx->pc = 0x2479fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294940096)));
label_247a00:
    // 0x247a00: 0x84450114  lh          $a1, 0x114($v0)
    ctx->pc = 0x247a00u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 276)));
label_247a04:
    // 0x247a04: 0xc0670b0  jal         func_19C2C0
label_247a08:
    if (ctx->pc == 0x247A08u) {
        ctx->pc = 0x247A08u;
            // 0x247a08: 0x8f8494ac  lw          $a0, -0x6B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
        ctx->pc = 0x247A0Cu;
        goto label_247a0c;
    }
    ctx->pc = 0x247A04u;
    SET_GPR_U32(ctx, 31, 0x247A0Cu);
    ctx->pc = 0x247A08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247A04u;
            // 0x247a08: 0x8f8494ac  lw          $a0, -0x6B54($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939820)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C2C0u;
    if (runtime->hasFunction(0x19C2C0u)) {
        auto targetFn = runtime->lookupFunction(0x19C2C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247A0Cu; }
        if (ctx->pc != 0x247A0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetCharaStatusAttirbute__16CUserDataManagerFi_0x19c2c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247A0Cu; }
        if (ctx->pc != 0x247A0Cu) { return; }
    }
    ctx->pc = 0x247A0Cu;
label_247a0c:
    // 0x247a0c: 0x3c060035  lui         $a2, 0x35
    ctx->pc = 0x247a0cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)53 << 16));
label_247a10:
    // 0x247a10: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x247a10u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247a14:
    // 0x247a14: 0x24c61100  addiu       $a2, $a2, 0x1100
    ctx->pc = 0x247a14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4352));
label_247a18:
    // 0x247a18: 0x27a505b0  addiu       $a1, $sp, 0x5B0
    ctx->pc = 0x247a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1456));
label_247a1c:
    // 0x247a1c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x247a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_247a20:
    // 0x247a20: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x247a20u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
label_247a24:
    // 0x247a24: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x247a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_247a28:
    // 0x247a28: 0x78c20010  lq          $v0, 0x10($a2)
    ctx->pc = 0x247a28u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 6), 16)));
label_247a2c:
    // 0x247a2c: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x247a2cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
label_247a30:
    // 0x247a30: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x247a30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_247a34:
    // 0x247a34: 0x7ca20010  sq          $v0, 0x10($a1)
    ctx->pc = 0x247a34u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 2));
label_247a38:
    // 0x247a38: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
label_247a3c:
    if (ctx->pc == 0x247A3Cu) {
        ctx->pc = 0x247A3Cu;
            // 0x247a3c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->pc = 0x247A40u;
        goto label_247a40;
    }
    ctx->pc = 0x247A38u;
    {
        const bool branch_taken_0x247a38 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x247A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247A38u;
            // 0x247a3c: 0x24a50020  addiu       $a1, $a1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247a38) {
            ctx->pc = 0x247A20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_247a20;
        }
    }
    ctx->pc = 0x247A40u;
label_247a40:
    // 0x247a40: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x247a40u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247a44:
    // 0x247a44: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x247a44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247a48:
    // 0x247a48: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x247a48u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247a4c:
    // 0x247a4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x247a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_247a50:
    // 0x247a50: 0x2621004  sllv        $v0, $v0, $s3
    ctx->pc = 0x247a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), GPR_U32(ctx, 19) & 0x1F));
label_247a54:
    // 0x247a54: 0x2221024  and         $v0, $s1, $v0
    ctx->pc = 0x247a54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
label_247a58:
    // 0x247a58: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_247a5c:
    if (ctx->pc == 0x247A5Cu) {
        ctx->pc = 0x247A5Cu;
            // 0x247a5c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x247A60u;
        goto label_247a60;
    }
    ctx->pc = 0x247A58u;
    {
        const bool branch_taken_0x247a58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247A58u;
            // 0x247a5c: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247a58) {
            ctx->pc = 0x247A94u;
            goto label_247a94;
        }
    }
    ctx->pc = 0x247A60u;
label_247a60:
    // 0x247a60: 0x16420004  bne         $s2, $v0, . + 4 + (0x4 << 2)
label_247a64:
    if (ctx->pc == 0x247A64u) {
        ctx->pc = 0x247A64u;
            // 0x247a64: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x247A68u;
        goto label_247a68;
    }
    ctx->pc = 0x247A60u;
    {
        const bool branch_taken_0x247a60 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x247A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247A60u;
            // 0x247a64: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247a60) {
            ctx->pc = 0x247A74u;
            goto label_247a74;
        }
    }
    ctx->pc = 0x247A68u;
label_247a68:
    // 0x247a68: 0x27a405b0  addiu       $a0, $sp, 0x5B0
    ctx->pc = 0x247a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1456));
label_247a6c:
    // 0x247a6c: 0xc04a2da  jal         func_128B68
label_247a70:
    if (ctx->pc == 0x247A70u) {
        ctx->pc = 0x247A70u;
            // 0x247a70: 0x24a5b600  addiu       $a1, $a1, -0x4A00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948352));
        ctx->pc = 0x247A74u;
        goto label_247a74;
    }
    ctx->pc = 0x247A6Cu;
    SET_GPR_U32(ctx, 31, 0x247A74u);
    ctx->pc = 0x247A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247A6Cu;
            // 0x247a70: 0x24a5b600  addiu       $a1, $a1, -0x4A00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247A74u; }
        if (ctx->pc != 0x247A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247A74u; }
        if (ctx->pc != 0x247A74u) { return; }
    }
    ctx->pc = 0x247A74u;
label_247a74:
    // 0x247a74: 0x0  nop
    ctx->pc = 0x247a74u;
    // NOP
label_247a78:
    // 0x247a78: 0x3c020035  lui         $v0, 0x35
    ctx->pc = 0x247a78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
label_247a7c:
    // 0x247a7c: 0x244210e0  addiu       $v0, $v0, 0x10E0
    ctx->pc = 0x247a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4320));
label_247a80:
    // 0x247a80: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x247a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_247a84:
    // 0x247a84: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x247a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_247a88:
    // 0x247a88: 0xc04a2da  jal         func_128B68
label_247a8c:
    if (ctx->pc == 0x247A8Cu) {
        ctx->pc = 0x247A8Cu;
            // 0x247a8c: 0x27a405b0  addiu       $a0, $sp, 0x5B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1456));
        ctx->pc = 0x247A90u;
        goto label_247a90;
    }
    ctx->pc = 0x247A88u;
    SET_GPR_U32(ctx, 31, 0x247A90u);
    ctx->pc = 0x247A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247A88u;
            // 0x247a8c: 0x27a405b0  addiu       $a0, $sp, 0x5B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247A90u; }
        if (ctx->pc != 0x247A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247A90u; }
        if (ctx->pc != 0x247A90u) { return; }
    }
    ctx->pc = 0x247A90u;
label_247a90:
    // 0x247a90: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x247a90u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_247a94:
    // 0x247a94: 0x0  nop
    ctx->pc = 0x247a94u;
    // NOP
label_247a98:
    // 0x247a98: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x247a98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_247a9c:
    // 0x247a9c: 0x2a620006  slti        $v0, $s3, 0x6
    ctx->pc = 0x247a9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)6) ? 1 : 0);
label_247aa0:
    // 0x247aa0: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_247aa4:
    if (ctx->pc == 0x247AA4u) {
        ctx->pc = 0x247AA4u;
            // 0x247aa4: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->pc = 0x247AA8u;
        goto label_247aa8;
    }
    ctx->pc = 0x247AA0u;
    {
        const bool branch_taken_0x247aa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x247AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247AA0u;
            // 0x247aa4: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247aa0) {
            ctx->pc = 0x247A4Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_247a4c;
        }
    }
    ctx->pc = 0x247AA8u;
label_247aa8:
    // 0x247aa8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247aac:
    // 0x247aac: 0xc0b5160  jal         func_2D4580
label_247ab0:
    if (ctx->pc == 0x247AB0u) {
        ctx->pc = 0x247AB0u;
            // 0x247ab0: 0x27a505b0  addiu       $a1, $sp, 0x5B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1456));
        ctx->pc = 0x247AB4u;
        goto label_247ab4;
    }
    ctx->pc = 0x247AACu;
    SET_GPR_U32(ctx, 31, 0x247AB4u);
    ctx->pc = 0x247AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247AACu;
            // 0x247ab0: 0x27a505b0  addiu       $a1, $sp, 0x5B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247AB4u; }
        if (ctx->pc != 0x247AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247AB4u; }
        if (ctx->pc != 0x247AB4u) { return; }
    }
    ctx->pc = 0x247AB4u;
label_247ab4:
    // 0x247ab4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247ab8:
    // 0x247ab8: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x247ab8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_247abc:
    // 0x247abc: 0xc0b5130  jal         func_2D44C0
label_247ac0:
    if (ctx->pc == 0x247AC0u) {
        ctx->pc = 0x247AC0u;
            // 0x247ac0: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->pc = 0x247AC4u;
        goto label_247ac4;
    }
    ctx->pc = 0x247ABCu;
    SET_GPR_U32(ctx, 31, 0x247AC4u);
    ctx->pc = 0x247AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247ABCu;
            // 0x247ac0: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247AC4u; }
        if (ctx->pc != 0x247AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247AC4u; }
        if (ctx->pc != 0x247AC4u) { return; }
    }
    ctx->pc = 0x247AC4u;
label_247ac4:
    // 0x247ac4: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x247ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_247ac8:
    // 0x247ac8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247ac8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247acc:
    // 0x247acc: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x247accu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_247ad0:
    // 0x247ad0: 0xc0b5688  jal         func_2D5A20
label_247ad4:
    if (ctx->pc == 0x247AD4u) {
        ctx->pc = 0x247AD4u;
            // 0x247ad4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247AD8u;
        goto label_247ad8;
    }
    ctx->pc = 0x247AD0u;
    SET_GPR_U32(ctx, 31, 0x247AD8u);
    ctx->pc = 0x247AD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247AD0u;
            // 0x247ad4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247AD8u; }
        if (ctx->pc != 0x247AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247AD8u; }
        if (ctx->pc != 0x247AD8u) { return; }
    }
    ctx->pc = 0x247AD8u;
label_247ad8:
    // 0x247ad8: 0x100001ea  b           . + 4 + (0x1EA << 2)
label_247adc:
    if (ctx->pc == 0x247ADCu) {
        ctx->pc = 0x247AE0u;
        goto label_247ae0;
    }
    ctx->pc = 0x247AD8u;
    {
        const bool branch_taken_0x247ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x247ad8) {
            ctx->pc = 0x248284u;
            goto label_248284;
        }
    }
    ctx->pc = 0x247AE0u;
label_247ae0:
    // 0x247ae0: 0x3c03436c  lui         $v1, 0x436C
    ctx->pc = 0x247ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17260 << 16));
label_247ae4:
    // 0x247ae4: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x247ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_247ae8:
    // 0x247ae8: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x247ae8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_247aec:
    // 0x247aec: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x247aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_247af0:
    // 0x247af0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x247af0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_247af4:
    // 0x247af4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x247af4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247af8:
    // 0x247af8: 0x3c034366  lui         $v1, 0x4366
    ctx->pc = 0x247af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17254 << 16));
label_247afc:
    // 0x247afc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x247afcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247b00:
    // 0x247b00: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x247b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
label_247b04:
    // 0x247b04: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x247b04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_247b08:
    // 0x247b08: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x247b08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_247b0c:
    // 0x247b0c: 0xc0887b8  jal         func_221EE0
label_247b10:
    if (ctx->pc == 0x247B10u) {
        ctx->pc = 0x247B10u;
            // 0x247b10: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247B14u;
        goto label_247b14;
    }
    ctx->pc = 0x247B0Cu;
    SET_GPR_U32(ctx, 31, 0x247B14u);
    ctx->pc = 0x247B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247B0Cu;
            // 0x247b10: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EE0u;
    if (runtime->hasFunction(0x221EE0u)) {
        auto targetFn = runtime->lookupFunction(0x221EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247B14u; }
        if (ctx->pc != 0x247B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fffffiiii_0x221ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247B14u; }
        if (ctx->pc != 0x247B14u) { return; }
    }
    ctx->pc = 0x247B14u;
label_247b14:
    // 0x247b14: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x247b14u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_247b18:
    // 0x247b18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247b18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247b1c:
    // 0x247b1c: 0xc0b5160  jal         func_2D4580
label_247b20:
    if (ctx->pc == 0x247B20u) {
        ctx->pc = 0x247B20u;
            // 0x247b20: 0x24a5b610  addiu       $a1, $a1, -0x49F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948368));
        ctx->pc = 0x247B24u;
        goto label_247b24;
    }
    ctx->pc = 0x247B1Cu;
    SET_GPR_U32(ctx, 31, 0x247B24u);
    ctx->pc = 0x247B20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247B1Cu;
            // 0x247b20: 0x24a5b610  addiu       $a1, $a1, -0x49F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948368));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247B24u; }
        if (ctx->pc != 0x247B24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247B24u; }
        if (ctx->pc != 0x247B24u) { return; }
    }
    ctx->pc = 0x247B24u;
label_247b24:
    // 0x247b24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247b24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247b28:
    // 0x247b28: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x247b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_247b2c:
    // 0x247b2c: 0xc0b5130  jal         func_2D44C0
label_247b30:
    if (ctx->pc == 0x247B30u) {
        ctx->pc = 0x247B30u;
            // 0x247b30: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->pc = 0x247B34u;
        goto label_247b34;
    }
    ctx->pc = 0x247B2Cu;
    SET_GPR_U32(ctx, 31, 0x247B34u);
    ctx->pc = 0x247B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247B2Cu;
            // 0x247b30: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247B34u; }
        if (ctx->pc != 0x247B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247B34u; }
        if (ctx->pc != 0x247B34u) { return; }
    }
    ctx->pc = 0x247B34u;
label_247b34:
    // 0x247b34: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x247b34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_247b38:
    // 0x247b38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247b3c:
    // 0x247b3c: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x247b3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_247b40:
    // 0x247b40: 0xc0b5688  jal         func_2D5A20
label_247b44:
    if (ctx->pc == 0x247B44u) {
        ctx->pc = 0x247B44u;
            // 0x247b44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247B48u;
        goto label_247b48;
    }
    ctx->pc = 0x247B40u;
    SET_GPR_U32(ctx, 31, 0x247B48u);
    ctx->pc = 0x247B44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247B40u;
            // 0x247b44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247B48u; }
        if (ctx->pc != 0x247B48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247B48u; }
        if (ctx->pc != 0x247B48u) { return; }
    }
    ctx->pc = 0x247B48u;
label_247b48:
    // 0x247b48: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x247b48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_247b4c:
    // 0x247b4c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247b4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247b50:
    // 0x247b50: 0xc0b5160  jal         func_2D4580
label_247b54:
    if (ctx->pc == 0x247B54u) {
        ctx->pc = 0x247B54u;
            // 0x247b54: 0x24a5b620  addiu       $a1, $a1, -0x49E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948384));
        ctx->pc = 0x247B58u;
        goto label_247b58;
    }
    ctx->pc = 0x247B50u;
    SET_GPR_U32(ctx, 31, 0x247B58u);
    ctx->pc = 0x247B54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247B50u;
            // 0x247b54: 0x24a5b620  addiu       $a1, $a1, -0x49E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948384));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247B58u; }
        if (ctx->pc != 0x247B58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247B58u; }
        if (ctx->pc != 0x247B58u) { return; }
    }
    ctx->pc = 0x247B58u;
label_247b58:
    // 0x247b58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247b58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247b5c:
    // 0x247b5c: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x247b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_247b60:
    // 0x247b60: 0xc0b5130  jal         func_2D44C0
label_247b64:
    if (ctx->pc == 0x247B64u) {
        ctx->pc = 0x247B64u;
            // 0x247b64: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x247B68u;
        goto label_247b68;
    }
    ctx->pc = 0x247B60u;
    SET_GPR_U32(ctx, 31, 0x247B68u);
    ctx->pc = 0x247B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247B60u;
            // 0x247b64: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247B68u; }
        if (ctx->pc != 0x247B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247B68u; }
        if (ctx->pc != 0x247B68u) { return; }
    }
    ctx->pc = 0x247B68u;
label_247b68:
    // 0x247b68: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x247b68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_247b6c:
    // 0x247b6c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247b6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247b70:
    // 0x247b70: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x247b70u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_247b74:
    // 0x247b74: 0xc0b5688  jal         func_2D5A20
label_247b78:
    if (ctx->pc == 0x247B78u) {
        ctx->pc = 0x247B78u;
            // 0x247b78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247B7Cu;
        goto label_247b7c;
    }
    ctx->pc = 0x247B74u;
    SET_GPR_U32(ctx, 31, 0x247B7Cu);
    ctx->pc = 0x247B78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247B74u;
            // 0x247b78: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247B7Cu; }
        if (ctx->pc != 0x247B7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247B7Cu; }
        if (ctx->pc != 0x247B7Cu) { return; }
    }
    ctx->pc = 0x247B7Cu;
label_247b7c:
    // 0x247b7c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x247b7cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_247b80:
    // 0x247b80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247b84:
    // 0x247b84: 0xc0b5160  jal         func_2D4580
label_247b88:
    if (ctx->pc == 0x247B88u) {
        ctx->pc = 0x247B88u;
            // 0x247b88: 0x24a5b640  addiu       $a1, $a1, -0x49C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948416));
        ctx->pc = 0x247B8Cu;
        goto label_247b8c;
    }
    ctx->pc = 0x247B84u;
    SET_GPR_U32(ctx, 31, 0x247B8Cu);
    ctx->pc = 0x247B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247B84u;
            // 0x247b88: 0x24a5b640  addiu       $a1, $a1, -0x49C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247B8Cu; }
        if (ctx->pc != 0x247B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247B8Cu; }
        if (ctx->pc != 0x247B8Cu) { return; }
    }
    ctx->pc = 0x247B8Cu;
label_247b8c:
    // 0x247b8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247b8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247b90:
    // 0x247b90: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x247b90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_247b94:
    // 0x247b94: 0xc0b5130  jal         func_2D44C0
label_247b98:
    if (ctx->pc == 0x247B98u) {
        ctx->pc = 0x247B98u;
            // 0x247b98: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x247B9Cu;
        goto label_247b9c;
    }
    ctx->pc = 0x247B94u;
    SET_GPR_U32(ctx, 31, 0x247B9Cu);
    ctx->pc = 0x247B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247B94u;
            // 0x247b98: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247B9Cu; }
        if (ctx->pc != 0x247B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247B9Cu; }
        if (ctx->pc != 0x247B9Cu) { return; }
    }
    ctx->pc = 0x247B9Cu;
label_247b9c:
    // 0x247b9c: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x247b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_247ba0:
    // 0x247ba0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247ba0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247ba4:
    // 0x247ba4: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x247ba4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_247ba8:
    // 0x247ba8: 0xc0b5688  jal         func_2D5A20
label_247bac:
    if (ctx->pc == 0x247BACu) {
        ctx->pc = 0x247BACu;
            // 0x247bac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247BB0u;
        goto label_247bb0;
    }
    ctx->pc = 0x247BA8u;
    SET_GPR_U32(ctx, 31, 0x247BB0u);
    ctx->pc = 0x247BACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247BA8u;
            // 0x247bac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247BB0u; }
        if (ctx->pc != 0x247BB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247BB0u; }
        if (ctx->pc != 0x247BB0u) { return; }
    }
    ctx->pc = 0x247BB0u;
label_247bb0:
    // 0x247bb0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x247bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_247bb4:
    // 0x247bb4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247bb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247bb8:
    // 0x247bb8: 0xc0b5160  jal         func_2D4580
label_247bbc:
    if (ctx->pc == 0x247BBCu) {
        ctx->pc = 0x247BBCu;
            // 0x247bbc: 0x24a5b658  addiu       $a1, $a1, -0x49A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948440));
        ctx->pc = 0x247BC0u;
        goto label_247bc0;
    }
    ctx->pc = 0x247BB8u;
    SET_GPR_U32(ctx, 31, 0x247BC0u);
    ctx->pc = 0x247BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247BB8u;
            // 0x247bbc: 0x24a5b658  addiu       $a1, $a1, -0x49A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247BC0u; }
        if (ctx->pc != 0x247BC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247BC0u; }
        if (ctx->pc != 0x247BC0u) { return; }
    }
    ctx->pc = 0x247BC0u;
label_247bc0:
    // 0x247bc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247bc4:
    // 0x247bc4: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x247bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_247bc8:
    // 0x247bc8: 0xc0b5130  jal         func_2D44C0
label_247bcc:
    if (ctx->pc == 0x247BCCu) {
        ctx->pc = 0x247BCCu;
            // 0x247bcc: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->pc = 0x247BD0u;
        goto label_247bd0;
    }
    ctx->pc = 0x247BC8u;
    SET_GPR_U32(ctx, 31, 0x247BD0u);
    ctx->pc = 0x247BCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247BC8u;
            // 0x247bcc: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247BD0u; }
        if (ctx->pc != 0x247BD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247BD0u; }
        if (ctx->pc != 0x247BD0u) { return; }
    }
    ctx->pc = 0x247BD0u;
label_247bd0:
    // 0x247bd0: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x247bd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_247bd4:
    // 0x247bd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247bd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247bd8:
    // 0x247bd8: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x247bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_247bdc:
    // 0x247bdc: 0xc0b5688  jal         func_2D5A20
label_247be0:
    if (ctx->pc == 0x247BE0u) {
        ctx->pc = 0x247BE0u;
            // 0x247be0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247BE4u;
        goto label_247be4;
    }
    ctx->pc = 0x247BDCu;
    SET_GPR_U32(ctx, 31, 0x247BE4u);
    ctx->pc = 0x247BE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247BDCu;
            // 0x247be0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247BE4u; }
        if (ctx->pc != 0x247BE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247BE4u; }
        if (ctx->pc != 0x247BE4u) { return; }
    }
    ctx->pc = 0x247BE4u;
label_247be4:
    // 0x247be4: 0x12200028  beqz        $s1, . + 4 + (0x28 << 2)
label_247be8:
    if (ctx->pc == 0x247BE8u) {
        ctx->pc = 0x247BECu;
        goto label_247bec;
    }
    ctx->pc = 0x247BE4u;
    {
        const bool branch_taken_0x247be4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x247be4) {
            ctx->pc = 0x247C88u;
            goto label_247c88;
        }
    }
    ctx->pc = 0x247BECu;
label_247bec:
    // 0x247bec: 0xc0a248c  jal         func_289230
label_247bf0:
    if (ctx->pc == 0x247BF0u) {
        ctx->pc = 0x247BF0u;
            // 0x247bf0: 0xc62c001c  lwc1        $f12, 0x1C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->pc = 0x247BF4u;
        goto label_247bf4;
    }
    ctx->pc = 0x247BECu;
    SET_GPR_U32(ctx, 31, 0x247BF4u);
    ctx->pc = 0x247BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247BECu;
            // 0x247bf0: 0xc62c001c  lwc1        $f12, 0x1C($s1) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247BF4u; }
        if (ctx->pc != 0x247BF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247BF4u; }
        if (ctx->pc != 0x247BF4u) { return; }
    }
    ctx->pc = 0x247BF4u;
label_247bf4:
    // 0x247bf4: 0xc62c0018  lwc1        $f12, 0x18($s1)
    ctx->pc = 0x247bf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_247bf8:
    // 0x247bf8: 0xc0a248c  jal         func_289230
label_247bfc:
    if (ctx->pc == 0x247BFCu) {
        ctx->pc = 0x247BFCu;
            // 0x247bfc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247C00u;
        goto label_247c00;
    }
    ctx->pc = 0x247BF8u;
    SET_GPR_U32(ctx, 31, 0x247C00u);
    ctx->pc = 0x247BFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247BF8u;
            // 0x247bfc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x289230u;
    if (runtime->hasFunction(0x289230u)) {
        auto targetFn = runtime->lookupFunction(0x289230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247C00u; }
        if (ctx->pc != 0x247C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        fptosi_0x289230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247C00u; }
        if (ctx->pc != 0x247C00u) { return; }
    }
    ctx->pc = 0x247C00u;
label_247c00:
    // 0x247c00: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x247c00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_247c04:
    // 0x247c04: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x247c04u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_247c08:
    // 0x247c08: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x247c08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_247c0c:
    // 0x247c0c: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x247c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_247c10:
    // 0x247c10: 0xc04a234  jal         func_1288D0
label_247c14:
    if (ctx->pc == 0x247C14u) {
        ctx->pc = 0x247C14u;
            // 0x247c14: 0x24a5b668  addiu       $a1, $a1, -0x4998 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948456));
        ctx->pc = 0x247C18u;
        goto label_247c18;
    }
    ctx->pc = 0x247C10u;
    SET_GPR_U32(ctx, 31, 0x247C18u);
    ctx->pc = 0x247C14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247C10u;
            // 0x247c14: 0x24a5b668  addiu       $a1, $a1, -0x4998 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948456));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247C18u; }
        if (ctx->pc != 0x247C18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247C18u; }
        if (ctx->pc != 0x247C18u) { return; }
    }
    ctx->pc = 0x247C18u;
label_247c18:
    // 0x247c18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247c18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247c1c:
    // 0x247c1c: 0xc0b5160  jal         func_2D4580
label_247c20:
    if (ctx->pc == 0x247C20u) {
        ctx->pc = 0x247C20u;
            // 0x247c20: 0x27a50280  addiu       $a1, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = 0x247C24u;
        goto label_247c24;
    }
    ctx->pc = 0x247C1Cu;
    SET_GPR_U32(ctx, 31, 0x247C24u);
    ctx->pc = 0x247C20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247C1Cu;
            // 0x247c20: 0x27a50280  addiu       $a1, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247C24u; }
        if (ctx->pc != 0x247C24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247C24u; }
        if (ctx->pc != 0x247C24u) { return; }
    }
    ctx->pc = 0x247C24u;
label_247c24:
    // 0x247c24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247c24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247c28:
    // 0x247c28: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x247c28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
label_247c2c:
    // 0x247c2c: 0xc0b5130  jal         func_2D44C0
label_247c30:
    if (ctx->pc == 0x247C30u) {
        ctx->pc = 0x247C30u;
            // 0x247c30: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->pc = 0x247C34u;
        goto label_247c34;
    }
    ctx->pc = 0x247C2Cu;
    SET_GPR_U32(ctx, 31, 0x247C34u);
    ctx->pc = 0x247C30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247C2Cu;
            // 0x247c30: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247C34u; }
        if (ctx->pc != 0x247C34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247C34u; }
        if (ctx->pc != 0x247C34u) { return; }
    }
    ctx->pc = 0x247C34u;
label_247c34:
    // 0x247c34: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x247c34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_247c38:
    // 0x247c38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247c3c:
    // 0x247c3c: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x247c3cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_247c40:
    // 0x247c40: 0xc0b5688  jal         func_2D5A20
label_247c44:
    if (ctx->pc == 0x247C44u) {
        ctx->pc = 0x247C44u;
            // 0x247c44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247C48u;
        goto label_247c48;
    }
    ctx->pc = 0x247C40u;
    SET_GPR_U32(ctx, 31, 0x247C48u);
    ctx->pc = 0x247C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247C40u;
            // 0x247c44: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247C48u; }
        if (ctx->pc != 0x247C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247C48u; }
        if (ctx->pc != 0x247C48u) { return; }
    }
    ctx->pc = 0x247C48u;
label_247c48:
    // 0x247c48: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x247c48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_247c4c:
    // 0x247c4c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x247c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247c50:
    // 0x247c50: 0x27a607c0  addiu       $a2, $sp, 0x7C0
    ctx->pc = 0x247c50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 1984));
label_247c54:
    // 0x247c54: 0xc092afc  jal         func_24ABF0
label_247c58:
    if (ctx->pc == 0x247C58u) {
        ctx->pc = 0x247C58u;
            // 0x247c58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247C5Cu;
        goto label_247c5c;
    }
    ctx->pc = 0x247C54u;
    SET_GPR_U32(ctx, 31, 0x247C5Cu);
    ctx->pc = 0x247C58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247C54u;
            // 0x247c58: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x24ABF0u;
    if (runtime->hasFunction(0x24ABF0u)) {
        auto targetFn = runtime->lookupFunction(0x24ABF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247C5Cu; }
        if (ctx->pc != 0x247C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        CheckBuildUp__FP13CGameDataUsedPiPiPi_0x24abf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247C5Cu; }
        if (ctx->pc != 0x247C5Cu) { return; }
    }
    ctx->pc = 0x247C5Cu;
label_247c5c:
    // 0x247c5c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x247c5cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247c60:
    // 0x247c60: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x247c60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247c64:
    // 0x247c64: 0x23d1021  addu        $v0, $s1, $sp
    ctx->pc = 0x247c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
label_247c68:
    // 0x247c68: 0xc065810  jal         func_196040
label_247c6c:
    if (ctx->pc == 0x247C6Cu) {
        ctx->pc = 0x247C6Cu;
            // 0x247c6c: 0x8c4407c0  lw          $a0, 0x7C0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1984)));
        ctx->pc = 0x247C70u;
        goto label_247c70;
    }
    ctx->pc = 0x247C68u;
    SET_GPR_U32(ctx, 31, 0x247C70u);
    ctx->pc = 0x247C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247C68u;
            // 0x247c6c: 0x8c4407c0  lw          $a0, 0x7C0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1984)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x196040u;
    if (runtime->hasFunction(0x196040u)) {
        auto targetFn = runtime->lookupFunction(0x196040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247C70u; }
        if (ctx->pc != 0x247C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        GetItemMessage__Fi_0x196040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247C70u; }
        if (ctx->pc != 0x247C70u) { return; }
    }
    ctx->pc = 0x247C70u;
label_247c70:
    // 0x247c70: 0x23d1821  addu        $v1, $s1, $sp
    ctx->pc = 0x247c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 29)));
label_247c74:
    // 0x247c74: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x247c74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_247c78:
    // 0x247c78: 0xac6207d0  sw          $v0, 0x7D0($v1)
    ctx->pc = 0x247c78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 2000), GPR_U32(ctx, 2));
label_247c7c:
    // 0x247c7c: 0x2a420003  slti        $v0, $s2, 0x3
    ctx->pc = 0x247c7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)3) ? 1 : 0);
label_247c80:
    // 0x247c80: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_247c84:
    if (ctx->pc == 0x247C84u) {
        ctx->pc = 0x247C84u;
            // 0x247c84: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x247C88u;
        goto label_247c88;
    }
    ctx->pc = 0x247C80u;
    {
        const bool branch_taken_0x247c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x247C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247C80u;
            // 0x247c84: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247c80) {
            ctx->pc = 0x247C64u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_247c64;
        }
    }
    ctx->pc = 0x247C88u;
label_247c88:
    // 0x247c88: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x247c88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_247c8c:
    // 0x247c8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247c90:
    // 0x247c90: 0xc0b5160  jal         func_2D4580
label_247c94:
    if (ctx->pc == 0x247C94u) {
        ctx->pc = 0x247C94u;
            // 0x247c94: 0x24a5b670  addiu       $a1, $a1, -0x4990 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948464));
        ctx->pc = 0x247C98u;
        goto label_247c98;
    }
    ctx->pc = 0x247C90u;
    SET_GPR_U32(ctx, 31, 0x247C98u);
    ctx->pc = 0x247C94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247C90u;
            // 0x247c94: 0x24a5b670  addiu       $a1, $a1, -0x4990 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948464));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247C98u; }
        if (ctx->pc != 0x247C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247C98u; }
        if (ctx->pc != 0x247C98u) { return; }
    }
    ctx->pc = 0x247C98u;
label_247c98:
    // 0x247c98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247c98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247c9c:
    // 0x247c9c: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x247c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_247ca0:
    // 0x247ca0: 0xc0b5130  jal         func_2D44C0
label_247ca4:
    if (ctx->pc == 0x247CA4u) {
        ctx->pc = 0x247CA4u;
            // 0x247ca4: 0x2406008c  addiu       $a2, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->pc = 0x247CA8u;
        goto label_247ca8;
    }
    ctx->pc = 0x247CA0u;
    SET_GPR_U32(ctx, 31, 0x247CA8u);
    ctx->pc = 0x247CA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247CA0u;
            // 0x247ca4: 0x2406008c  addiu       $a2, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247CA8u; }
        if (ctx->pc != 0x247CA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247CA8u; }
        if (ctx->pc != 0x247CA8u) { return; }
    }
    ctx->pc = 0x247CA8u;
label_247ca8:
    // 0x247ca8: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x247ca8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_247cac:
    // 0x247cac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247cacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247cb0:
    // 0x247cb0: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x247cb0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_247cb4:
    // 0x247cb4: 0xc0b5688  jal         func_2D5A20
label_247cb8:
    if (ctx->pc == 0x247CB8u) {
        ctx->pc = 0x247CB8u;
            // 0x247cb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247CBCu;
        goto label_247cbc;
    }
    ctx->pc = 0x247CB4u;
    SET_GPR_U32(ctx, 31, 0x247CBCu);
    ctx->pc = 0x247CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247CB4u;
            // 0x247cb8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247CBCu; }
        if (ctx->pc != 0x247CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247CBCu; }
        if (ctx->pc != 0x247CBCu) { return; }
    }
    ctx->pc = 0x247CBCu;
label_247cbc:
    // 0x247cbc: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x247cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_247cc0:
    // 0x247cc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247cc4:
    // 0x247cc4: 0xc0b5160  jal         func_2D4580
label_247cc8:
    if (ctx->pc == 0x247CC8u) {
        ctx->pc = 0x247CC8u;
            // 0x247cc8: 0x24a5b690  addiu       $a1, $a1, -0x4970 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948496));
        ctx->pc = 0x247CCCu;
        goto label_247ccc;
    }
    ctx->pc = 0x247CC4u;
    SET_GPR_U32(ctx, 31, 0x247CCCu);
    ctx->pc = 0x247CC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247CC4u;
            // 0x247cc8: 0x24a5b690  addiu       $a1, $a1, -0x4970 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948496));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247CCCu; }
        if (ctx->pc != 0x247CCCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247CCCu; }
        if (ctx->pc != 0x247CCCu) { return; }
    }
    ctx->pc = 0x247CCCu;
label_247ccc:
    // 0x247ccc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247cccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247cd0:
    // 0x247cd0: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x247cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_247cd4:
    // 0x247cd4: 0xc0b5130  jal         func_2D44C0
label_247cd8:
    if (ctx->pc == 0x247CD8u) {
        ctx->pc = 0x247CD8u;
            // 0x247cd8: 0x240600a0  addiu       $a2, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->pc = 0x247CDCu;
        goto label_247cdc;
    }
    ctx->pc = 0x247CD4u;
    SET_GPR_U32(ctx, 31, 0x247CDCu);
    ctx->pc = 0x247CD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247CD4u;
            // 0x247cd8: 0x240600a0  addiu       $a2, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247CDCu; }
        if (ctx->pc != 0x247CDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247CDCu; }
        if (ctx->pc != 0x247CDCu) { return; }
    }
    ctx->pc = 0x247CDCu;
label_247cdc:
    // 0x247cdc: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x247cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_247ce0:
    // 0x247ce0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247ce0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247ce4:
    // 0x247ce4: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x247ce4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_247ce8:
    // 0x247ce8: 0xc0b5688  jal         func_2D5A20
label_247cec:
    if (ctx->pc == 0x247CECu) {
        ctx->pc = 0x247CECu;
            // 0x247cec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247CF0u;
        goto label_247cf0;
    }
    ctx->pc = 0x247CE8u;
    SET_GPR_U32(ctx, 31, 0x247CF0u);
    ctx->pc = 0x247CECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247CE8u;
            // 0x247cec: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247CF0u; }
        if (ctx->pc != 0x247CF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247CF0u; }
        if (ctx->pc != 0x247CF0u) { return; }
    }
    ctx->pc = 0x247CF0u;
label_247cf0:
    // 0x247cf0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x247cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_247cf4:
    // 0x247cf4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247cf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247cf8:
    // 0x247cf8: 0xc0b5160  jal         func_2D4580
label_247cfc:
    if (ctx->pc == 0x247CFCu) {
        ctx->pc = 0x247CFCu;
            // 0x247cfc: 0x24a5b6a8  addiu       $a1, $a1, -0x4958 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948520));
        ctx->pc = 0x247D00u;
        goto label_247d00;
    }
    ctx->pc = 0x247CF8u;
    SET_GPR_U32(ctx, 31, 0x247D00u);
    ctx->pc = 0x247CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247CF8u;
            // 0x247cfc: 0x24a5b6a8  addiu       $a1, $a1, -0x4958 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948520));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247D00u; }
        if (ctx->pc != 0x247D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247D00u; }
        if (ctx->pc != 0x247D00u) { return; }
    }
    ctx->pc = 0x247D00u;
label_247d00:
    // 0x247d00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247d00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247d04:
    // 0x247d04: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x247d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_247d08:
    // 0x247d08: 0xc0b5130  jal         func_2D44C0
label_247d0c:
    if (ctx->pc == 0x247D0Cu) {
        ctx->pc = 0x247D0Cu;
            // 0x247d0c: 0x240600b4  addiu       $a2, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->pc = 0x247D10u;
        goto label_247d10;
    }
    ctx->pc = 0x247D08u;
    SET_GPR_U32(ctx, 31, 0x247D10u);
    ctx->pc = 0x247D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247D08u;
            // 0x247d0c: 0x240600b4  addiu       $a2, $zero, 0xB4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247D10u; }
        if (ctx->pc != 0x247D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247D10u; }
        if (ctx->pc != 0x247D10u) { return; }
    }
    ctx->pc = 0x247D10u;
label_247d10:
    // 0x247d10: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x247d10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_247d14:
    // 0x247d14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247d14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247d18:
    // 0x247d18: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x247d18u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_247d1c:
    // 0x247d1c: 0xc0b5688  jal         func_2D5A20
label_247d20:
    if (ctx->pc == 0x247D20u) {
        ctx->pc = 0x247D20u;
            // 0x247d20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247D24u;
        goto label_247d24;
    }
    ctx->pc = 0x247D1Cu;
    SET_GPR_U32(ctx, 31, 0x247D24u);
    ctx->pc = 0x247D20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247D1Cu;
            // 0x247d20: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247D24u; }
        if (ctx->pc != 0x247D24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247D24u; }
        if (ctx->pc != 0x247D24u) { return; }
    }
    ctx->pc = 0x247D24u;
label_247d24:
    // 0x247d24: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x247d24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_247d28:
    // 0x247d28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247d28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247d2c:
    // 0x247d2c: 0xc0b5160  jal         func_2D4580
label_247d30:
    if (ctx->pc == 0x247D30u) {
        ctx->pc = 0x247D30u;
            // 0x247d30: 0x24a5b6b8  addiu       $a1, $a1, -0x4948 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948536));
        ctx->pc = 0x247D34u;
        goto label_247d34;
    }
    ctx->pc = 0x247D2Cu;
    SET_GPR_U32(ctx, 31, 0x247D34u);
    ctx->pc = 0x247D30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247D2Cu;
            // 0x247d30: 0x24a5b6b8  addiu       $a1, $a1, -0x4948 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948536));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247D34u; }
        if (ctx->pc != 0x247D34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247D34u; }
        if (ctx->pc != 0x247D34u) { return; }
    }
    ctx->pc = 0x247D34u;
label_247d34:
    // 0x247d34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247d34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247d38:
    // 0x247d38: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x247d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_247d3c:
    // 0x247d3c: 0xc0b5130  jal         func_2D44C0
label_247d40:
    if (ctx->pc == 0x247D40u) {
        ctx->pc = 0x247D40u;
            // 0x247d40: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->pc = 0x247D44u;
        goto label_247d44;
    }
    ctx->pc = 0x247D3Cu;
    SET_GPR_U32(ctx, 31, 0x247D44u);
    ctx->pc = 0x247D40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247D3Cu;
            // 0x247d40: 0x240600c8  addiu       $a2, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247D44u; }
        if (ctx->pc != 0x247D44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247D44u; }
        if (ctx->pc != 0x247D44u) { return; }
    }
    ctx->pc = 0x247D44u;
label_247d44:
    // 0x247d44: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x247d44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_247d48:
    // 0x247d48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247d48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247d4c:
    // 0x247d4c: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x247d4cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_247d50:
    // 0x247d50: 0xc0b5688  jal         func_2D5A20
label_247d54:
    if (ctx->pc == 0x247D54u) {
        ctx->pc = 0x247D54u;
            // 0x247d54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247D58u;
        goto label_247d58;
    }
    ctx->pc = 0x247D50u;
    SET_GPR_U32(ctx, 31, 0x247D58u);
    ctx->pc = 0x247D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247D50u;
            // 0x247d54: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247D58u; }
        if (ctx->pc != 0x247D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247D58u; }
        if (ctx->pc != 0x247D58u) { return; }
    }
    ctx->pc = 0x247D58u;
label_247d58:
    // 0x247d58: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x247d58u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_247d5c:
    // 0x247d5c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247d5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247d60:
    // 0x247d60: 0xc0b5160  jal         func_2D4580
label_247d64:
    if (ctx->pc == 0x247D64u) {
        ctx->pc = 0x247D64u;
            // 0x247d64: 0x24a5b6c8  addiu       $a1, $a1, -0x4938 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948552));
        ctx->pc = 0x247D68u;
        goto label_247d68;
    }
    ctx->pc = 0x247D60u;
    SET_GPR_U32(ctx, 31, 0x247D68u);
    ctx->pc = 0x247D64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247D60u;
            // 0x247d64: 0x24a5b6c8  addiu       $a1, $a1, -0x4938 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948552));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247D68u; }
        if (ctx->pc != 0x247D68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247D68u; }
        if (ctx->pc != 0x247D68u) { return; }
    }
    ctx->pc = 0x247D68u;
label_247d68:
    // 0x247d68: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247d68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247d6c:
    // 0x247d6c: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x247d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_247d70:
    // 0x247d70: 0xc0b5130  jal         func_2D44C0
label_247d74:
    if (ctx->pc == 0x247D74u) {
        ctx->pc = 0x247D74u;
            // 0x247d74: 0x240600dc  addiu       $a2, $zero, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
        ctx->pc = 0x247D78u;
        goto label_247d78;
    }
    ctx->pc = 0x247D70u;
    SET_GPR_U32(ctx, 31, 0x247D78u);
    ctx->pc = 0x247D74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247D70u;
            // 0x247d74: 0x240600dc  addiu       $a2, $zero, 0xDC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 220));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247D78u; }
        if (ctx->pc != 0x247D78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247D78u; }
        if (ctx->pc != 0x247D78u) { return; }
    }
    ctx->pc = 0x247D78u;
label_247d78:
    // 0x247d78: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x247d78u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_247d7c:
    // 0x247d7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247d7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247d80:
    // 0x247d80: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x247d80u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_247d84:
    // 0x247d84: 0xc0b5688  jal         func_2D5A20
label_247d88:
    if (ctx->pc == 0x247D88u) {
        ctx->pc = 0x247D88u;
            // 0x247d88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247D8Cu;
        goto label_247d8c;
    }
    ctx->pc = 0x247D84u;
    SET_GPR_U32(ctx, 31, 0x247D8Cu);
    ctx->pc = 0x247D88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247D84u;
            // 0x247d88: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247D8Cu; }
        if (ctx->pc != 0x247D8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247D8Cu; }
        if (ctx->pc != 0x247D8Cu) { return; }
    }
    ctx->pc = 0x247D8Cu;
label_247d8c:
    // 0x247d8c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x247d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_247d90:
    // 0x247d90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247d94:
    // 0x247d94: 0xc0b5160  jal         func_2D4580
label_247d98:
    if (ctx->pc == 0x247D98u) {
        ctx->pc = 0x247D98u;
            // 0x247d98: 0x24a5b6d8  addiu       $a1, $a1, -0x4928 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948568));
        ctx->pc = 0x247D9Cu;
        goto label_247d9c;
    }
    ctx->pc = 0x247D94u;
    SET_GPR_U32(ctx, 31, 0x247D9Cu);
    ctx->pc = 0x247D98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247D94u;
            // 0x247d98: 0x24a5b6d8  addiu       $a1, $a1, -0x4928 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948568));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247D9Cu; }
        if (ctx->pc != 0x247D9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247D9Cu; }
        if (ctx->pc != 0x247D9Cu) { return; }
    }
    ctx->pc = 0x247D9Cu;
label_247d9c:
    // 0x247d9c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247d9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247da0:
    // 0x247da0: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x247da0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_247da4:
    // 0x247da4: 0xc0b5130  jal         func_2D44C0
label_247da8:
    if (ctx->pc == 0x247DA8u) {
        ctx->pc = 0x247DA8u;
            // 0x247da8: 0x240600f0  addiu       $a2, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->pc = 0x247DACu;
        goto label_247dac;
    }
    ctx->pc = 0x247DA4u;
    SET_GPR_U32(ctx, 31, 0x247DACu);
    ctx->pc = 0x247DA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247DA4u;
            // 0x247da8: 0x240600f0  addiu       $a2, $zero, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247DACu; }
        if (ctx->pc != 0x247DACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247DACu; }
        if (ctx->pc != 0x247DACu) { return; }
    }
    ctx->pc = 0x247DACu;
label_247dac:
    // 0x247dac: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x247dacu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_247db0:
    // 0x247db0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247db0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247db4:
    // 0x247db4: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x247db4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_247db8:
    // 0x247db8: 0xc0b5688  jal         func_2D5A20
label_247dbc:
    if (ctx->pc == 0x247DBCu) {
        ctx->pc = 0x247DBCu;
            // 0x247dbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247DC0u;
        goto label_247dc0;
    }
    ctx->pc = 0x247DB8u;
    SET_GPR_U32(ctx, 31, 0x247DC0u);
    ctx->pc = 0x247DBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247DB8u;
            // 0x247dbc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247DC0u; }
        if (ctx->pc != 0x247DC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247DC0u; }
        if (ctx->pc != 0x247DC0u) { return; }
    }
    ctx->pc = 0x247DC0u;
label_247dc0:
    // 0x247dc0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x247dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_247dc4:
    // 0x247dc4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247dc8:
    // 0x247dc8: 0xc0b5160  jal         func_2D4580
label_247dcc:
    if (ctx->pc == 0x247DCCu) {
        ctx->pc = 0x247DCCu;
            // 0x247dcc: 0x24a5b6e8  addiu       $a1, $a1, -0x4918 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948584));
        ctx->pc = 0x247DD0u;
        goto label_247dd0;
    }
    ctx->pc = 0x247DC8u;
    SET_GPR_U32(ctx, 31, 0x247DD0u);
    ctx->pc = 0x247DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247DC8u;
            // 0x247dcc: 0x24a5b6e8  addiu       $a1, $a1, -0x4918 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247DD0u; }
        if (ctx->pc != 0x247DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247DD0u; }
        if (ctx->pc != 0x247DD0u) { return; }
    }
    ctx->pc = 0x247DD0u;
label_247dd0:
    // 0x247dd0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247dd4:
    // 0x247dd4: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x247dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_247dd8:
    // 0x247dd8: 0xc0b5130  jal         func_2D44C0
label_247ddc:
    if (ctx->pc == 0x247DDCu) {
        ctx->pc = 0x247DDCu;
            // 0x247ddc: 0x24060104  addiu       $a2, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x247DE0u;
        goto label_247de0;
    }
    ctx->pc = 0x247DD8u;
    SET_GPR_U32(ctx, 31, 0x247DE0u);
    ctx->pc = 0x247DDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247DD8u;
            // 0x247ddc: 0x24060104  addiu       $a2, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247DE0u; }
        if (ctx->pc != 0x247DE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247DE0u; }
        if (ctx->pc != 0x247DE0u) { return; }
    }
    ctx->pc = 0x247DE0u;
label_247de0:
    // 0x247de0: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x247de0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_247de4:
    // 0x247de4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247de4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247de8:
    // 0x247de8: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x247de8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_247dec:
    // 0x247dec: 0xc0b5688  jal         func_2D5A20
label_247df0:
    if (ctx->pc == 0x247DF0u) {
        ctx->pc = 0x247DF0u;
            // 0x247df0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247DF4u;
        goto label_247df4;
    }
    ctx->pc = 0x247DECu;
    SET_GPR_U32(ctx, 31, 0x247DF4u);
    ctx->pc = 0x247DF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247DECu;
            // 0x247df0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247DF4u; }
        if (ctx->pc != 0x247DF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247DF4u; }
        if (ctx->pc != 0x247DF4u) { return; }
    }
    ctx->pc = 0x247DF4u;
label_247df4:
    // 0x247df4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x247df4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247df8:
    // 0x247df8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x247df8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247dfc:
    // 0x247dfc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x247dfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247e00:
    // 0x247e00: 0x25d1021  addu        $v0, $s2, $sp
    ctx->pc = 0x247e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 29)));
label_247e04:
    // 0x247e04: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x247e04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_247e08:
    // 0x247e08: 0x8c5407d0  lw          $s4, 0x7D0($v0)
    ctx->pc = 0x247e08u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 2000)));
label_247e0c:
    // 0x247e0c: 0x26260001  addiu       $a2, $s1, 0x1
    ctx->pc = 0x247e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_247e10:
    // 0x247e10: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x247e10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_247e14:
    // 0x247e14: 0x24a5b6f0  addiu       $a1, $a1, -0x4910
    ctx->pc = 0x247e14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948592));
label_247e18:
    // 0x247e18: 0xc04a234  jal         func_1288D0
label_247e1c:
    if (ctx->pc == 0x247E1Cu) {
        ctx->pc = 0x247E1Cu;
            // 0x247e1c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247E20u;
        goto label_247e20;
    }
    ctx->pc = 0x247E18u;
    SET_GPR_U32(ctx, 31, 0x247E20u);
    ctx->pc = 0x247E1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247E18u;
            // 0x247e1c: 0x280382d  daddu       $a3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247E20u; }
        if (ctx->pc != 0x247E20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247E20u; }
        if (ctx->pc != 0x247E20u) { return; }
    }
    ctx->pc = 0x247E20u;
label_247e20:
    // 0x247e20: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
label_247e24:
    if (ctx->pc == 0x247E24u) {
        ctx->pc = 0x247E24u;
            // 0x247e24: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x247E28u;
        goto label_247e28;
    }
    ctx->pc = 0x247E20u;
    {
        const bool branch_taken_0x247e20 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x247E24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247E20u;
            // 0x247e24: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247e20) {
            ctx->pc = 0x247E3Cu;
            goto label_247e3c;
        }
    }
    ctx->pc = 0x247E28u;
label_247e28:
    // 0x247e28: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x247e28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_247e2c:
    // 0x247e2c: 0x26260001  addiu       $a2, $s1, 0x1
    ctx->pc = 0x247e2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_247e30:
    // 0x247e30: 0x27a40280  addiu       $a0, $sp, 0x280
    ctx->pc = 0x247e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
label_247e34:
    // 0x247e34: 0xc04a234  jal         func_1288D0
label_247e38:
    if (ctx->pc == 0x247E38u) {
        ctx->pc = 0x247E38u;
            // 0x247e38: 0x24a5b700  addiu       $a1, $a1, -0x4900 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948608));
        ctx->pc = 0x247E3Cu;
        goto label_247e3c;
    }
    ctx->pc = 0x247E34u;
    SET_GPR_U32(ctx, 31, 0x247E3Cu);
    ctx->pc = 0x247E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247E34u;
            // 0x247e38: 0x24a5b700  addiu       $a1, $a1, -0x4900 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1288D0u;
    if (runtime->hasFunction(0x1288D0u)) {
        auto targetFn = runtime->lookupFunction(0x1288D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247E3Cu; }
        if (ctx->pc != 0x247E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sprintf_0x1288d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247E3Cu; }
        if (ctx->pc != 0x247E3Cu) { return; }
    }
    ctx->pc = 0x247E3Cu;
label_247e3c:
    // 0x247e3c: 0x0  nop
    ctx->pc = 0x247e3cu;
    // NOP
label_247e40:
    // 0x247e40: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247e40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247e44:
    // 0x247e44: 0xc0b5160  jal         func_2D4580
label_247e48:
    if (ctx->pc == 0x247E48u) {
        ctx->pc = 0x247E48u;
            // 0x247e48: 0x27a50280  addiu       $a1, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->pc = 0x247E4Cu;
        goto label_247e4c;
    }
    ctx->pc = 0x247E44u;
    SET_GPR_U32(ctx, 31, 0x247E4Cu);
    ctx->pc = 0x247E48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247E44u;
            // 0x247e48: 0x27a50280  addiu       $a1, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247E4Cu; }
        if (ctx->pc != 0x247E4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247E4Cu; }
        if (ctx->pc != 0x247E4Cu) { return; }
    }
    ctx->pc = 0x247E4Cu;
label_247e4c:
    // 0x247e4c: 0x26660118  addiu       $a2, $s3, 0x118
    ctx->pc = 0x247e4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 280));
label_247e50:
    // 0x247e50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247e54:
    // 0x247e54: 0xc0b5130  jal         func_2D44C0
label_247e58:
    if (ctx->pc == 0x247E58u) {
        ctx->pc = 0x247E58u;
            // 0x247e58: 0x240500ec  addiu       $a1, $zero, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
        ctx->pc = 0x247E5Cu;
        goto label_247e5c;
    }
    ctx->pc = 0x247E54u;
    SET_GPR_U32(ctx, 31, 0x247E5Cu);
    ctx->pc = 0x247E58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247E54u;
            // 0x247e58: 0x240500ec  addiu       $a1, $zero, 0xEC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247E5Cu; }
        if (ctx->pc != 0x247E5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247E5Cu; }
        if (ctx->pc != 0x247E5Cu) { return; }
    }
    ctx->pc = 0x247E5Cu;
label_247e5c:
    // 0x247e5c: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x247e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_247e60:
    // 0x247e60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247e60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247e64:
    // 0x247e64: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x247e64u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_247e68:
    // 0x247e68: 0xc0b5688  jal         func_2D5A20
label_247e6c:
    if (ctx->pc == 0x247E6Cu) {
        ctx->pc = 0x247E6Cu;
            // 0x247e6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247E70u;
        goto label_247e70;
    }
    ctx->pc = 0x247E68u;
    SET_GPR_U32(ctx, 31, 0x247E70u);
    ctx->pc = 0x247E6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247E68u;
            // 0x247e6c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247E70u; }
        if (ctx->pc != 0x247E70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247E70u; }
        if (ctx->pc != 0x247E70u) { return; }
    }
    ctx->pc = 0x247E70u;
label_247e70:
    // 0x247e70: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x247e70u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_247e74:
    // 0x247e74: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x247e74u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_247e78:
    // 0x247e78: 0x2a230003  slti        $v1, $s1, 0x3
    ctx->pc = 0x247e78u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
label_247e7c:
    // 0x247e7c: 0x1460ffe0  bnez        $v1, . + 4 + (-0x20 << 2)
label_247e80:
    if (ctx->pc == 0x247E80u) {
        ctx->pc = 0x247E80u;
            // 0x247e80: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->pc = 0x247E84u;
        goto label_247e84;
    }
    ctx->pc = 0x247E7Cu;
    {
        const bool branch_taken_0x247e7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x247E80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247E7Cu;
            // 0x247e80: 0x26730014  addiu       $s3, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247e7c) {
            ctx->pc = 0x247E00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_247e00;
        }
    }
    ctx->pc = 0x247E84u;
label_247e84:
    // 0x247e84: 0x100000ff  b           . + 4 + (0xFF << 2)
label_247e88:
    if (ctx->pc == 0x247E88u) {
        ctx->pc = 0x247E8Cu;
        goto label_247e8c;
    }
    ctx->pc = 0x247E84u;
    {
        const bool branch_taken_0x247e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x247e84) {
            ctx->pc = 0x248284u;
            goto label_248284;
        }
    }
    ctx->pc = 0x247E8Cu;
label_247e8c:
    // 0x247e8c: 0x122000fd  beqz        $s1, . + 4 + (0xFD << 2)
label_247e90:
    if (ctx->pc == 0x247E90u) {
        ctx->pc = 0x247E90u;
            // 0x247e90: 0x3c03436c  lui         $v1, 0x436C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17260 << 16));
        ctx->pc = 0x247E94u;
        goto label_247e94;
    }
    ctx->pc = 0x247E8Cu;
    {
        const bool branch_taken_0x247e8c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x247E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247E8Cu;
            // 0x247e90: 0x3c03436c  lui         $v1, 0x436C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17260 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247e8c) {
            ctx->pc = 0x248284u;
            goto label_248284;
        }
    }
    ctx->pc = 0x247E94u;
label_247e94:
    // 0x247e94: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x247e94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
label_247e98:
    // 0x247e98: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x247e98u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_247e9c:
    // 0x247e9c: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x247e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_247ea0:
    // 0x247ea0: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x247ea0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_247ea4:
    // 0x247ea4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x247ea4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247ea8:
    // 0x247ea8: 0x3c034366  lui         $v1, 0x4366
    ctx->pc = 0x247ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17254 << 16));
label_247eac:
    // 0x247eac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x247eacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247eb0:
    // 0x247eb0: 0x3c024382  lui         $v0, 0x4382
    ctx->pc = 0x247eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17282 << 16));
label_247eb4:
    // 0x247eb4: 0x44837000  mtc1        $v1, $f14
    ctx->pc = 0x247eb4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_247eb8:
    // 0x247eb8: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x247eb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_247ebc:
    // 0x247ebc: 0xc0887b8  jal         func_221EE0
label_247ec0:
    if (ctx->pc == 0x247EC0u) {
        ctx->pc = 0x247EC0u;
            // 0x247ec0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247EC4u;
        goto label_247ec4;
    }
    ctx->pc = 0x247EBCu;
    SET_GPR_U32(ctx, 31, 0x247EC4u);
    ctx->pc = 0x247EC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247EBCu;
            // 0x247ec0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EE0u;
    if (runtime->hasFunction(0x221EE0u)) {
        auto targetFn = runtime->lookupFunction(0x221EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247EC4u; }
        if (ctx->pc != 0x247EC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fffffiiii_0x221ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247EC4u; }
        if (ctx->pc != 0x247EC4u) { return; }
    }
    ctx->pc = 0x247EC4u;
label_247ec4:
    // 0x247ec4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x247ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_247ec8:
    // 0x247ec8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247ecc:
    // 0x247ecc: 0xc0b5160  jal         func_2D4580
label_247ed0:
    if (ctx->pc == 0x247ED0u) {
        ctx->pc = 0x247ED0u;
            // 0x247ed0: 0x24a5b710  addiu       $a1, $a1, -0x48F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948624));
        ctx->pc = 0x247ED4u;
        goto label_247ed4;
    }
    ctx->pc = 0x247ECCu;
    SET_GPR_U32(ctx, 31, 0x247ED4u);
    ctx->pc = 0x247ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247ECCu;
            // 0x247ed0: 0x24a5b710  addiu       $a1, $a1, -0x48F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247ED4u; }
        if (ctx->pc != 0x247ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247ED4u; }
        if (ctx->pc != 0x247ED4u) { return; }
    }
    ctx->pc = 0x247ED4u;
label_247ed4:
    // 0x247ed4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247ed4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247ed8:
    // 0x247ed8: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x247ed8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_247edc:
    // 0x247edc: 0xc0b5130  jal         func_2D44C0
label_247ee0:
    if (ctx->pc == 0x247EE0u) {
        ctx->pc = 0x247EE0u;
            // 0x247ee0: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->pc = 0x247EE4u;
        goto label_247ee4;
    }
    ctx->pc = 0x247EDCu;
    SET_GPR_U32(ctx, 31, 0x247EE4u);
    ctx->pc = 0x247EE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247EDCu;
            // 0x247ee0: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247EE4u; }
        if (ctx->pc != 0x247EE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247EE4u; }
        if (ctx->pc != 0x247EE4u) { return; }
    }
    ctx->pc = 0x247EE4u;
label_247ee4:
    // 0x247ee4: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x247ee4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_247ee8:
    // 0x247ee8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247ee8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247eec:
    // 0x247eec: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x247eecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_247ef0:
    // 0x247ef0: 0xc0b5688  jal         func_2D5A20
label_247ef4:
    if (ctx->pc == 0x247EF4u) {
        ctx->pc = 0x247EF4u;
            // 0x247ef4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247EF8u;
        goto label_247ef8;
    }
    ctx->pc = 0x247EF0u;
    SET_GPR_U32(ctx, 31, 0x247EF8u);
    ctx->pc = 0x247EF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247EF0u;
            // 0x247ef4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247EF8u; }
        if (ctx->pc != 0x247EF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247EF8u; }
        if (ctx->pc != 0x247EF8u) { return; }
    }
    ctx->pc = 0x247EF8u;
label_247ef8:
    // 0x247ef8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x247ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_247efc:
    // 0x247efc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247efcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247f00:
    // 0x247f00: 0xc0b5160  jal         func_2D4580
label_247f04:
    if (ctx->pc == 0x247F04u) {
        ctx->pc = 0x247F04u;
            // 0x247f04: 0x24a5b730  addiu       $a1, $a1, -0x48D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948656));
        ctx->pc = 0x247F08u;
        goto label_247f08;
    }
    ctx->pc = 0x247F00u;
    SET_GPR_U32(ctx, 31, 0x247F08u);
    ctx->pc = 0x247F04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247F00u;
            // 0x247f04: 0x24a5b730  addiu       $a1, $a1, -0x48D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948656));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247F08u; }
        if (ctx->pc != 0x247F08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247F08u; }
        if (ctx->pc != 0x247F08u) { return; }
    }
    ctx->pc = 0x247F08u;
label_247f08:
    // 0x247f08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247f08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247f0c:
    // 0x247f0c: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x247f0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_247f10:
    // 0x247f10: 0xc0b5130  jal         func_2D44C0
label_247f14:
    if (ctx->pc == 0x247F14u) {
        ctx->pc = 0x247F14u;
            // 0x247f14: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x247F18u;
        goto label_247f18;
    }
    ctx->pc = 0x247F10u;
    SET_GPR_U32(ctx, 31, 0x247F18u);
    ctx->pc = 0x247F14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247F10u;
            // 0x247f14: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247F18u; }
        if (ctx->pc != 0x247F18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247F18u; }
        if (ctx->pc != 0x247F18u) { return; }
    }
    ctx->pc = 0x247F18u;
label_247f18:
    // 0x247f18: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x247f18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_247f1c:
    // 0x247f1c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247f20:
    // 0x247f20: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x247f20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_247f24:
    // 0x247f24: 0xc0b5688  jal         func_2D5A20
label_247f28:
    if (ctx->pc == 0x247F28u) {
        ctx->pc = 0x247F28u;
            // 0x247f28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247F2Cu;
        goto label_247f2c;
    }
    ctx->pc = 0x247F24u;
    SET_GPR_U32(ctx, 31, 0x247F2Cu);
    ctx->pc = 0x247F28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247F24u;
            // 0x247f28: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247F2Cu; }
        if (ctx->pc != 0x247F2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247F2Cu; }
        if (ctx->pc != 0x247F2Cu) { return; }
    }
    ctx->pc = 0x247F2Cu;
label_247f2c:
    // 0x247f2c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x247f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_247f30:
    // 0x247f30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247f34:
    // 0x247f34: 0xc0b5160  jal         func_2D4580
label_247f38:
    if (ctx->pc == 0x247F38u) {
        ctx->pc = 0x247F38u;
            // 0x247f38: 0x24a5b750  addiu       $a1, $a1, -0x48B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948688));
        ctx->pc = 0x247F3Cu;
        goto label_247f3c;
    }
    ctx->pc = 0x247F34u;
    SET_GPR_U32(ctx, 31, 0x247F3Cu);
    ctx->pc = 0x247F38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247F34u;
            // 0x247f38: 0x24a5b750  addiu       $a1, $a1, -0x48B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948688));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247F3Cu; }
        if (ctx->pc != 0x247F3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247F3Cu; }
        if (ctx->pc != 0x247F3Cu) { return; }
    }
    ctx->pc = 0x247F3Cu;
label_247f3c:
    // 0x247f3c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247f3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247f40:
    // 0x247f40: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x247f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_247f44:
    // 0x247f44: 0xc0b5130  jal         func_2D44C0
label_247f48:
    if (ctx->pc == 0x247F48u) {
        ctx->pc = 0x247F48u;
            // 0x247f48: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->pc = 0x247F4Cu;
        goto label_247f4c;
    }
    ctx->pc = 0x247F44u;
    SET_GPR_U32(ctx, 31, 0x247F4Cu);
    ctx->pc = 0x247F48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247F44u;
            // 0x247f48: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247F4Cu; }
        if (ctx->pc != 0x247F4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247F4Cu; }
        if (ctx->pc != 0x247F4Cu) { return; }
    }
    ctx->pc = 0x247F4Cu;
label_247f4c:
    // 0x247f4c: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x247f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_247f50:
    // 0x247f50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247f54:
    // 0x247f54: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x247f54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_247f58:
    // 0x247f58: 0xc0b5688  jal         func_2D5A20
label_247f5c:
    if (ctx->pc == 0x247F5Cu) {
        ctx->pc = 0x247F5Cu;
            // 0x247f5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247F60u;
        goto label_247f60;
    }
    ctx->pc = 0x247F58u;
    SET_GPR_U32(ctx, 31, 0x247F60u);
    ctx->pc = 0x247F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247F58u;
            // 0x247f5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247F60u; }
        if (ctx->pc != 0x247F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247F60u; }
        if (ctx->pc != 0x247F60u) { return; }
    }
    ctx->pc = 0x247F60u;
label_247f60:
    // 0x247f60: 0xa3a006b0  sb          $zero, 0x6B0($sp)
    ctx->pc = 0x247f60u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1712), (uint8_t)GPR_U32(ctx, 0));
label_247f64:
    // 0x247f64: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x247f64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247f68:
    // 0x247f68: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x247f68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_247f6c:
    // 0x247f6c: 0x10000018  b           . + 4 + (0x18 << 2)
label_247f70:
    if (ctx->pc == 0x247F70u) {
        ctx->pc = 0x247F70u;
            // 0x247f70: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x247F74u;
        goto label_247f74;
    }
    ctx->pc = 0x247F6Cu;
    {
        const bool branch_taken_0x247f6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x247F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247F6Cu;
            // 0x247f70: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247f6c) {
            ctx->pc = 0x247FD0u;
            goto label_247fd0;
        }
    }
    ctx->pc = 0x247F74u;
label_247f74:
    // 0x247f74: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x247f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_247f78:
    // 0x247f78: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x247f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_247f7c:
    // 0x247f7c: 0x2631804  sllv        $v1, $v1, $s3
    ctx->pc = 0x247f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 19) & 0x1F));
label_247f80:
    // 0x247f80: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x247f80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_247f84:
    // 0x247f84: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_247f88:
    if (ctx->pc == 0x247F88u) {
        ctx->pc = 0x247F88u;
            // 0x247f88: 0x27a406b0  addiu       $a0, $sp, 0x6B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1712));
        ctx->pc = 0x247F8Cu;
        goto label_247f8c;
    }
    ctx->pc = 0x247F84u;
    {
        const bool branch_taken_0x247f84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x247F88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247F84u;
            // 0x247f88: 0x27a406b0  addiu       $a0, $sp, 0x6B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1712));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247f84) {
            ctx->pc = 0x247FC4u;
            goto label_247fc4;
        }
    }
    ctx->pc = 0x247F8Cu;
label_247f8c:
    // 0x247f8c: 0xc04a2da  jal         func_128B68
label_247f90:
    if (ctx->pc == 0x247F90u) {
        ctx->pc = 0x247F94u;
        goto label_247f94;
    }
    ctx->pc = 0x247F8Cu;
    SET_GPR_U32(ctx, 31, 0x247F94u);
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247F94u; }
        if (ctx->pc != 0x247F94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247F94u; }
        if (ctx->pc != 0x247F94u) { return; }
    }
    ctx->pc = 0x247F94u;
label_247f94:
    // 0x247f94: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x247f94u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_247f98:
    // 0x247f98: 0x6410004  bgez        $s2, . + 4 + (0x4 << 2)
label_247f9c:
    if (ctx->pc == 0x247F9Cu) {
        ctx->pc = 0x247F9Cu;
            // 0x247f9c: 0x32430003  andi        $v1, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
        ctx->pc = 0x247FA0u;
        goto label_247fa0;
    }
    ctx->pc = 0x247F98u;
    {
        const bool branch_taken_0x247f98 = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x247F9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247F98u;
            // 0x247f9c: 0x32430003  andi        $v1, $s2, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x247f98) {
            ctx->pc = 0x247FACu;
            goto label_247fac;
        }
    }
    ctx->pc = 0x247FA0u;
label_247fa0:
    // 0x247fa0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_247fa4:
    if (ctx->pc == 0x247FA4u) {
        ctx->pc = 0x247FA4u;
            // 0x247fa4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x247FA8u;
        goto label_247fa8;
    }
    ctx->pc = 0x247FA0u;
    {
        const bool branch_taken_0x247fa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x247FA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247FA0u;
            // 0x247fa4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247fa0) {
            ctx->pc = 0x247FB0u;
            goto label_247fb0;
        }
    }
    ctx->pc = 0x247FA8u;
label_247fa8:
    // 0x247fa8: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x247fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_247fac:
    // 0x247fac: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x247facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_247fb0:
    // 0x247fb0: 0x14620004  bne         $v1, $v0, . + 4 + (0x4 << 2)
label_247fb4:
    if (ctx->pc == 0x247FB4u) {
        ctx->pc = 0x247FB4u;
            // 0x247fb4: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x247FB8u;
        goto label_247fb8;
    }
    ctx->pc = 0x247FB0u;
    {
        const bool branch_taken_0x247fb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x247FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247FB0u;
            // 0x247fb4: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247fb0) {
            ctx->pc = 0x247FC4u;
            goto label_247fc4;
        }
    }
    ctx->pc = 0x247FB8u;
label_247fb8:
    // 0x247fb8: 0x27a406b0  addiu       $a0, $sp, 0x6B0
    ctx->pc = 0x247fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 1712));
label_247fbc:
    // 0x247fbc: 0xc04a2da  jal         func_128B68
label_247fc0:
    if (ctx->pc == 0x247FC0u) {
        ctx->pc = 0x247FC0u;
            // 0x247fc0: 0x24a5b770  addiu       $a1, $a1, -0x4890 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948720));
        ctx->pc = 0x247FC4u;
        goto label_247fc4;
    }
    ctx->pc = 0x247FBCu;
    SET_GPR_U32(ctx, 31, 0x247FC4u);
    ctx->pc = 0x247FC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247FBCu;
            // 0x247fc0: 0x24a5b770  addiu       $a1, $a1, -0x4890 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948720));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128B68u;
    if (runtime->hasFunction(0x128B68u)) {
        auto targetFn = runtime->lookupFunction(0x128B68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247FC4u; }
        if (ctx->pc != 0x247FC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        strcat_0x128b68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247FC4u; }
        if (ctx->pc != 0x247FC4u) { return; }
    }
    ctx->pc = 0x247FC4u;
label_247fc4:
    // 0x247fc4: 0x0  nop
    ctx->pc = 0x247fc4u;
    // NOP
label_247fc8:
    // 0x247fc8: 0x26940004  addiu       $s4, $s4, 0x4
    ctx->pc = 0x247fc8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
label_247fcc:
    // 0x247fcc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x247fccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_247fd0:
    // 0x247fd0: 0x2a61000c  slti        $at, $s3, 0xC
    ctx->pc = 0x247fd0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)12) ? 1 : 0);
label_247fd4:
    // 0x247fd4: 0x10200006  beqz        $at, . + 4 + (0x6 << 2)
label_247fd8:
    if (ctx->pc == 0x247FD8u) {
        ctx->pc = 0x247FD8u;
            // 0x247fd8: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->pc = 0x247FDCu;
        goto label_247fdc;
    }
    ctx->pc = 0x247FD4u;
    {
        const bool branch_taken_0x247fd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x247FD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247FD4u;
            // 0x247fd8: 0x3c020035  lui         $v0, 0x35 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)53 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247fd4) {
            ctx->pc = 0x247FF0u;
            goto label_247ff0;
        }
    }
    ctx->pc = 0x247FDCu;
label_247fdc:
    // 0x247fdc: 0x24421200  addiu       $v0, $v0, 0x1200
    ctx->pc = 0x247fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4608));
label_247fe0:
    // 0x247fe0: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x247fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_247fe4:
    // 0x247fe4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x247fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_247fe8:
    // 0x247fe8: 0x14a0ffe2  bnez        $a1, . + 4 + (-0x1E << 2)
label_247fec:
    if (ctx->pc == 0x247FECu) {
        ctx->pc = 0x247FF0u;
        goto label_247ff0;
    }
    ctx->pc = 0x247FE8u;
    {
        const bool branch_taken_0x247fe8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x247fe8) {
            ctx->pc = 0x247F74u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_247f74;
        }
    }
    ctx->pc = 0x247FF0u;
label_247ff0:
    // 0x247ff0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x247ff0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_247ff4:
    // 0x247ff4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x247ff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_247ff8:
    // 0x247ff8: 0xc0b5160  jal         func_2D4580
label_247ffc:
    if (ctx->pc == 0x247FFCu) {
        ctx->pc = 0x247FFCu;
            // 0x247ffc: 0x24a5b780  addiu       $a1, $a1, -0x4880 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948736));
        ctx->pc = 0x248000u;
        goto label_248000;
    }
    ctx->pc = 0x247FF8u;
    SET_GPR_U32(ctx, 31, 0x248000u);
    ctx->pc = 0x247FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247FF8u;
            // 0x247ffc: 0x24a5b780  addiu       $a1, $a1, -0x4880 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248000u; }
        if (ctx->pc != 0x248000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248000u; }
        if (ctx->pc != 0x248000u) { return; }
    }
    ctx->pc = 0x248000u;
label_248000:
    // 0x248000: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248000u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248004:
    // 0x248004: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x248004u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_248008:
    // 0x248008: 0xc0b5130  jal         func_2D44C0
label_24800c:
    if (ctx->pc == 0x24800Cu) {
        ctx->pc = 0x24800Cu;
            // 0x24800c: 0x2406008c  addiu       $a2, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->pc = 0x248010u;
        goto label_248010;
    }
    ctx->pc = 0x248008u;
    SET_GPR_U32(ctx, 31, 0x248010u);
    ctx->pc = 0x24800Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248008u;
            // 0x24800c: 0x2406008c  addiu       $a2, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248010u; }
        if (ctx->pc != 0x248010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248010u; }
        if (ctx->pc != 0x248010u) { return; }
    }
    ctx->pc = 0x248010u;
label_248010:
    // 0x248010: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x248010u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_248014:
    // 0x248014: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248018:
    // 0x248018: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x248018u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_24801c:
    // 0x24801c: 0xc0b5688  jal         func_2D5A20
label_248020:
    if (ctx->pc == 0x248020u) {
        ctx->pc = 0x248020u;
            // 0x248020: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248024u;
        goto label_248024;
    }
    ctx->pc = 0x24801Cu;
    SET_GPR_U32(ctx, 31, 0x248024u);
    ctx->pc = 0x248020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24801Cu;
            // 0x248020: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248024u; }
        if (ctx->pc != 0x248024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248024u; }
        if (ctx->pc != 0x248024u) { return; }
    }
    ctx->pc = 0x248024u;
label_248024:
    // 0x248024: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248028:
    // 0x248028: 0xc0b5160  jal         func_2D4580
label_24802c:
    if (ctx->pc == 0x24802Cu) {
        ctx->pc = 0x24802Cu;
            // 0x24802c: 0x27a506b0  addiu       $a1, $sp, 0x6B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1712));
        ctx->pc = 0x248030u;
        goto label_248030;
    }
    ctx->pc = 0x248028u;
    SET_GPR_U32(ctx, 31, 0x248030u);
    ctx->pc = 0x24802Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248028u;
            // 0x24802c: 0x27a506b0  addiu       $a1, $sp, 0x6B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 1712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248030u; }
        if (ctx->pc != 0x248030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248030u; }
        if (ctx->pc != 0x248030u) { return; }
    }
    ctx->pc = 0x248030u;
label_248030:
    // 0x248030: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248030u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248034:
    // 0x248034: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x248034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_248038:
    // 0x248038: 0xc0b5130  jal         func_2D44C0
label_24803c:
    if (ctx->pc == 0x24803Cu) {
        ctx->pc = 0x24803Cu;
            // 0x24803c: 0x240600a0  addiu       $a2, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->pc = 0x248040u;
        goto label_248040;
    }
    ctx->pc = 0x248038u;
    SET_GPR_U32(ctx, 31, 0x248040u);
    ctx->pc = 0x24803Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248038u;
            // 0x24803c: 0x240600a0  addiu       $a2, $zero, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248040u; }
        if (ctx->pc != 0x248040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248040u; }
        if (ctx->pc != 0x248040u) { return; }
    }
    ctx->pc = 0x248040u;
label_248040:
    // 0x248040: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x248040u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_248044:
    // 0x248044: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248044u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248048:
    // 0x248048: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x248048u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_24804c:
    // 0x24804c: 0xc0b5688  jal         func_2D5A20
label_248050:
    if (ctx->pc == 0x248050u) {
        ctx->pc = 0x248050u;
            // 0x248050: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248054u;
        goto label_248054;
    }
    ctx->pc = 0x24804Cu;
    SET_GPR_U32(ctx, 31, 0x248054u);
    ctx->pc = 0x248050u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24804Cu;
            // 0x248050: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248054u; }
        if (ctx->pc != 0x248054u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248054u; }
        if (ctx->pc != 0x248054u) { return; }
    }
    ctx->pc = 0x248054u;
label_248054:
    // 0x248054: 0x1000008b  b           . + 4 + (0x8B << 2)
label_248058:
    if (ctx->pc == 0x248058u) {
        ctx->pc = 0x24805Cu;
        goto label_24805c;
    }
    ctx->pc = 0x248054u;
    {
        const bool branch_taken_0x248054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248054) {
            ctx->pc = 0x248284u;
            goto label_248284;
        }
    }
    ctx->pc = 0x24805Cu;
label_24805c:
    // 0x24805c: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x24805cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_248060:
    // 0x248060: 0x3c024366  lui         $v0, 0x4366
    ctx->pc = 0x248060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17254 << 16));
label_248064:
    // 0x248064: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x248064u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_248068:
    // 0x248068: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x248068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_24806c:
    // 0x24806c: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x24806cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_248070:
    // 0x248070: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x248070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_248074:
    // 0x248074: 0x3c034382  lui         $v1, 0x4382
    ctx->pc = 0x248074u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17282 << 16));
label_248078:
    // 0x248078: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x248078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24807c:
    // 0x24807c: 0x3c02436c  lui         $v0, 0x436C
    ctx->pc = 0x24807cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17260 << 16));
label_248080:
    // 0x248080: 0x44837800  mtc1        $v1, $f15
    ctx->pc = 0x248080u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_248084:
    // 0x248084: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x248084u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_248088:
    // 0x248088: 0xc0887b8  jal         func_221EE0
label_24808c:
    if (ctx->pc == 0x24808Cu) {
        ctx->pc = 0x24808Cu;
            // 0x24808c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248090u;
        goto label_248090;
    }
    ctx->pc = 0x248088u;
    SET_GPR_U32(ctx, 31, 0x248090u);
    ctx->pc = 0x24808Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248088u;
            // 0x24808c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EE0u;
    if (runtime->hasFunction(0x221EE0u)) {
        auto targetFn = runtime->lookupFunction(0x221EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248090u; }
        if (ctx->pc != 0x248090u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fffffiiii_0x221ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248090u; }
        if (ctx->pc != 0x248090u) { return; }
    }
    ctx->pc = 0x248090u;
label_248090:
    // 0x248090: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x248090u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_248094:
    // 0x248094: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248098:
    // 0x248098: 0xc0b5160  jal         func_2D4580
label_24809c:
    if (ctx->pc == 0x24809Cu) {
        ctx->pc = 0x24809Cu;
            // 0x24809c: 0x24a5b658  addiu       $a1, $a1, -0x49A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948440));
        ctx->pc = 0x2480A0u;
        goto label_2480a0;
    }
    ctx->pc = 0x248098u;
    SET_GPR_U32(ctx, 31, 0x2480A0u);
    ctx->pc = 0x24809Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248098u;
            // 0x24809c: 0x24a5b658  addiu       $a1, $a1, -0x49A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948440));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2480A0u; }
        if (ctx->pc != 0x2480A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2480A0u; }
        if (ctx->pc != 0x2480A0u) { return; }
    }
    ctx->pc = 0x2480A0u;
label_2480a0:
    // 0x2480a0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2480a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2480a4:
    // 0x2480a4: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x2480a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_2480a8:
    // 0x2480a8: 0xc0b5130  jal         func_2D44C0
label_2480ac:
    if (ctx->pc == 0x2480ACu) {
        ctx->pc = 0x2480ACu;
            // 0x2480ac: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x2480B0u;
        goto label_2480b0;
    }
    ctx->pc = 0x2480A8u;
    SET_GPR_U32(ctx, 31, 0x2480B0u);
    ctx->pc = 0x2480ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2480A8u;
            // 0x2480ac: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2480B0u; }
        if (ctx->pc != 0x2480B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2480B0u; }
        if (ctx->pc != 0x2480B0u) { return; }
    }
    ctx->pc = 0x2480B0u;
label_2480b0:
    // 0x2480b0: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x2480b0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_2480b4:
    // 0x2480b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2480b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2480b8:
    // 0x2480b8: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x2480b8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_2480bc:
    // 0x2480bc: 0xc0b5688  jal         func_2D5A20
label_2480c0:
    if (ctx->pc == 0x2480C0u) {
        ctx->pc = 0x2480C0u;
            // 0x2480c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2480C4u;
        goto label_2480c4;
    }
    ctx->pc = 0x2480BCu;
    SET_GPR_U32(ctx, 31, 0x2480C4u);
    ctx->pc = 0x2480C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2480BCu;
            // 0x2480c0: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2480C4u; }
        if (ctx->pc != 0x2480C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2480C4u; }
        if (ctx->pc != 0x2480C4u) { return; }
    }
    ctx->pc = 0x2480C4u;
label_2480c4:
    // 0x2480c4: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2480c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2480c8:
    // 0x2480c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2480c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2480cc:
    // 0x2480cc: 0xc0b5160  jal         func_2D4580
label_2480d0:
    if (ctx->pc == 0x2480D0u) {
        ctx->pc = 0x2480D0u;
            // 0x2480d0: 0x24a5b798  addiu       $a1, $a1, -0x4868 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948760));
        ctx->pc = 0x2480D4u;
        goto label_2480d4;
    }
    ctx->pc = 0x2480CCu;
    SET_GPR_U32(ctx, 31, 0x2480D4u);
    ctx->pc = 0x2480D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2480CCu;
            // 0x2480d0: 0x24a5b798  addiu       $a1, $a1, -0x4868 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948760));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2480D4u; }
        if (ctx->pc != 0x2480D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2480D4u; }
        if (ctx->pc != 0x2480D4u) { return; }
    }
    ctx->pc = 0x2480D4u;
label_2480d4:
    // 0x2480d4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2480d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2480d8:
    // 0x2480d8: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x2480d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_2480dc:
    // 0x2480dc: 0xc0b5130  jal         func_2D44C0
label_2480e0:
    if (ctx->pc == 0x2480E0u) {
        ctx->pc = 0x2480E0u;
            // 0x2480e0: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->pc = 0x2480E4u;
        goto label_2480e4;
    }
    ctx->pc = 0x2480DCu;
    SET_GPR_U32(ctx, 31, 0x2480E4u);
    ctx->pc = 0x2480E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2480DCu;
            // 0x2480e0: 0x24060064  addiu       $a2, $zero, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2480E4u; }
        if (ctx->pc != 0x2480E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2480E4u; }
        if (ctx->pc != 0x2480E4u) { return; }
    }
    ctx->pc = 0x2480E4u;
label_2480e4:
    // 0x2480e4: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x2480e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_2480e8:
    // 0x2480e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2480e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2480ec:
    // 0x2480ec: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x2480ecu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_2480f0:
    // 0x2480f0: 0xc0b5688  jal         func_2D5A20
label_2480f4:
    if (ctx->pc == 0x2480F4u) {
        ctx->pc = 0x2480F4u;
            // 0x2480f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2480F8u;
        goto label_2480f8;
    }
    ctx->pc = 0x2480F0u;
    SET_GPR_U32(ctx, 31, 0x2480F8u);
    ctx->pc = 0x2480F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2480F0u;
            // 0x2480f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2480F8u; }
        if (ctx->pc != 0x2480F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2480F8u; }
        if (ctx->pc != 0x2480F8u) { return; }
    }
    ctx->pc = 0x2480F8u;
label_2480f8:
    // 0x2480f8: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2480f8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2480fc:
    // 0x2480fc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2480fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248100:
    // 0x248100: 0xc0b5160  jal         func_2D4580
label_248104:
    if (ctx->pc == 0x248104u) {
        ctx->pc = 0x248104u;
            // 0x248104: 0x24a5b7a8  addiu       $a1, $a1, -0x4858 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948776));
        ctx->pc = 0x248108u;
        goto label_248108;
    }
    ctx->pc = 0x248100u;
    SET_GPR_U32(ctx, 31, 0x248108u);
    ctx->pc = 0x248104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248100u;
            // 0x248104: 0x24a5b7a8  addiu       $a1, $a1, -0x4858 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948776));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248108u; }
        if (ctx->pc != 0x248108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248108u; }
        if (ctx->pc != 0x248108u) { return; }
    }
    ctx->pc = 0x248108u;
label_248108:
    // 0x248108: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24810c:
    // 0x24810c: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x24810cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_248110:
    // 0x248110: 0xc0b5130  jal         func_2D44C0
label_248114:
    if (ctx->pc == 0x248114u) {
        ctx->pc = 0x248114u;
            // 0x248114: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->pc = 0x248118u;
        goto label_248118;
    }
    ctx->pc = 0x248110u;
    SET_GPR_U32(ctx, 31, 0x248118u);
    ctx->pc = 0x248114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248110u;
            // 0x248114: 0x24060078  addiu       $a2, $zero, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248118u; }
        if (ctx->pc != 0x248118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248118u; }
        if (ctx->pc != 0x248118u) { return; }
    }
    ctx->pc = 0x248118u;
label_248118:
    // 0x248118: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x248118u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_24811c:
    // 0x24811c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24811cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248120:
    // 0x248120: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x248120u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_248124:
    // 0x248124: 0xc0b5688  jal         func_2D5A20
label_248128:
    if (ctx->pc == 0x248128u) {
        ctx->pc = 0x248128u;
            // 0x248128: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24812Cu;
        goto label_24812c;
    }
    ctx->pc = 0x248124u;
    SET_GPR_U32(ctx, 31, 0x24812Cu);
    ctx->pc = 0x248128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248124u;
            // 0x248128: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24812Cu; }
        if (ctx->pc != 0x24812Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24812Cu; }
        if (ctx->pc != 0x24812Cu) { return; }
    }
    ctx->pc = 0x24812Cu;
label_24812c:
    // 0x24812c: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x24812cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_248130:
    // 0x248130: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248130u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248134:
    // 0x248134: 0xc0b5160  jal         func_2D4580
label_248138:
    if (ctx->pc == 0x248138u) {
        ctx->pc = 0x248138u;
            // 0x248138: 0x24a5b7c0  addiu       $a1, $a1, -0x4840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948800));
        ctx->pc = 0x24813Cu;
        goto label_24813c;
    }
    ctx->pc = 0x248134u;
    SET_GPR_U32(ctx, 31, 0x24813Cu);
    ctx->pc = 0x248138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248134u;
            // 0x248138: 0x24a5b7c0  addiu       $a1, $a1, -0x4840 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948800));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24813Cu; }
        if (ctx->pc != 0x24813Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24813Cu; }
        if (ctx->pc != 0x24813Cu) { return; }
    }
    ctx->pc = 0x24813Cu;
label_24813c:
    // 0x24813c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24813cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248140:
    // 0x248140: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x248140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_248144:
    // 0x248144: 0xc0b5130  jal         func_2D44C0
label_248148:
    if (ctx->pc == 0x248148u) {
        ctx->pc = 0x248148u;
            // 0x248148: 0x2406008c  addiu       $a2, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->pc = 0x24814Cu;
        goto label_24814c;
    }
    ctx->pc = 0x248144u;
    SET_GPR_U32(ctx, 31, 0x24814Cu);
    ctx->pc = 0x248148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248144u;
            // 0x248148: 0x2406008c  addiu       $a2, $zero, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24814Cu; }
        if (ctx->pc != 0x24814Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24814Cu; }
        if (ctx->pc != 0x24814Cu) { return; }
    }
    ctx->pc = 0x24814Cu;
label_24814c:
    // 0x24814c: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x24814cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_248150:
    // 0x248150: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248154:
    // 0x248154: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x248154u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_248158:
    // 0x248158: 0xc0b5688  jal         func_2D5A20
label_24815c:
    if (ctx->pc == 0x24815Cu) {
        ctx->pc = 0x24815Cu;
            // 0x24815c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248160u;
        goto label_248160;
    }
    ctx->pc = 0x248158u;
    SET_GPR_U32(ctx, 31, 0x248160u);
    ctx->pc = 0x24815Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248158u;
            // 0x24815c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248160u; }
        if (ctx->pc != 0x248160u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248160u; }
        if (ctx->pc != 0x248160u) { return; }
    }
    ctx->pc = 0x248160u;
label_248160:
    // 0x248160: 0x10000048  b           . + 4 + (0x48 << 2)
label_248164:
    if (ctx->pc == 0x248164u) {
        ctx->pc = 0x248168u;
        goto label_248168;
    }
    ctx->pc = 0x248160u;
    {
        const bool branch_taken_0x248160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x248160) {
            ctx->pc = 0x248284u;
            goto label_248284;
        }
    }
    ctx->pc = 0x248168u;
label_248168:
    // 0x248168: 0x3c03436c  lui         $v1, 0x436C
    ctx->pc = 0x248168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17260 << 16));
label_24816c:
    // 0x24816c: 0x3c024382  lui         $v0, 0x4382
    ctx->pc = 0x24816cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17282 << 16));
label_248170:
    // 0x248170: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x248170u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_248174:
    // 0x248174: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x248174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_248178:
    // 0x248178: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x248178u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_24817c:
    // 0x24817c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24817cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_248180:
    // 0x248180: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x248180u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
label_248184:
    // 0x248184: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x248184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_248188:
    // 0x248188: 0x3c024366  lui         $v0, 0x4366
    ctx->pc = 0x248188u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17254 << 16));
label_24818c:
    // 0x24818c: 0x44836800  mtc1        $v1, $f13
    ctx->pc = 0x24818cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
label_248190:
    // 0x248190: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x248190u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_248194:
    // 0x248194: 0xc0887b8  jal         func_221EE0
label_248198:
    if (ctx->pc == 0x248198u) {
        ctx->pc = 0x248198u;
            // 0x248198: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24819Cu;
        goto label_24819c;
    }
    ctx->pc = 0x248194u;
    SET_GPR_U32(ctx, 31, 0x24819Cu);
    ctx->pc = 0x248198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248194u;
            // 0x248198: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x221EE0u;
    if (runtime->hasFunction(0x221EE0u)) {
        auto targetFn = runtime->lookupFunction(0x221EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24819Cu; }
        if (ctx->pc != 0x24819Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawMenuFillBox__Fffffiiii_0x221ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24819Cu; }
        if (ctx->pc != 0x24819Cu) { return; }
    }
    ctx->pc = 0x24819Cu;
label_24819c:
    // 0x24819c: 0x8f8394f8  lw          $v1, -0x6B08($gp)
    ctx->pc = 0x24819cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294939896)));
label_2481a0:
    // 0x2481a0: 0x8c710070  lw          $s1, 0x70($v1)
    ctx->pc = 0x2481a0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 112)));
label_2481a4:
    // 0x2481a4: 0x1620001c  bnez        $s1, . + 4 + (0x1C << 2)
label_2481a8:
    if (ctx->pc == 0x2481A8u) {
        ctx->pc = 0x2481A8u;
            // 0x2481a8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2481ACu;
        goto label_2481ac;
    }
    ctx->pc = 0x2481A4u;
    {
        const bool branch_taken_0x2481a4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2481A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2481A4u;
            // 0x2481a8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2481a4) {
            ctx->pc = 0x248218u;
            goto label_248218;
        }
    }
    ctx->pc = 0x2481ACu;
label_2481ac:
    // 0x2481ac: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2481acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2481b0:
    // 0x2481b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2481b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2481b4:
    // 0x2481b4: 0xc0b5160  jal         func_2D4580
label_2481b8:
    if (ctx->pc == 0x2481B8u) {
        ctx->pc = 0x2481B8u;
            // 0x2481b8: 0x24a5b7e0  addiu       $a1, $a1, -0x4820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948832));
        ctx->pc = 0x2481BCu;
        goto label_2481bc;
    }
    ctx->pc = 0x2481B4u;
    SET_GPR_U32(ctx, 31, 0x2481BCu);
    ctx->pc = 0x2481B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2481B4u;
            // 0x2481b8: 0x24a5b7e0  addiu       $a1, $a1, -0x4820 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948832));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2481BCu; }
        if (ctx->pc != 0x2481BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2481BCu; }
        if (ctx->pc != 0x2481BCu) { return; }
    }
    ctx->pc = 0x2481BCu;
label_2481bc:
    // 0x2481bc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2481bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2481c0:
    // 0x2481c0: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x2481c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_2481c4:
    // 0x2481c4: 0xc0b5130  jal         func_2D44C0
label_2481c8:
    if (ctx->pc == 0x2481C8u) {
        ctx->pc = 0x2481C8u;
            // 0x2481c8: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->pc = 0x2481CCu;
        goto label_2481cc;
    }
    ctx->pc = 0x2481C4u;
    SET_GPR_U32(ctx, 31, 0x2481CCu);
    ctx->pc = 0x2481C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2481C4u;
            // 0x2481c8: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2481CCu; }
        if (ctx->pc != 0x2481CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2481CCu; }
        if (ctx->pc != 0x2481CCu) { return; }
    }
    ctx->pc = 0x2481CCu;
label_2481cc:
    // 0x2481cc: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x2481ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_2481d0:
    // 0x2481d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2481d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2481d4:
    // 0x2481d4: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x2481d4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_2481d8:
    // 0x2481d8: 0xc0b5688  jal         func_2D5A20
label_2481dc:
    if (ctx->pc == 0x2481DCu) {
        ctx->pc = 0x2481DCu;
            // 0x2481dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2481E0u;
        goto label_2481e0;
    }
    ctx->pc = 0x2481D8u;
    SET_GPR_U32(ctx, 31, 0x2481E0u);
    ctx->pc = 0x2481DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2481D8u;
            // 0x2481dc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2481E0u; }
        if (ctx->pc != 0x2481E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2481E0u; }
        if (ctx->pc != 0x2481E0u) { return; }
    }
    ctx->pc = 0x2481E0u;
label_2481e0:
    // 0x2481e0: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x2481e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_2481e4:
    // 0x2481e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2481e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2481e8:
    // 0x2481e8: 0xc0b5160  jal         func_2D4580
label_2481ec:
    if (ctx->pc == 0x2481ECu) {
        ctx->pc = 0x2481ECu;
            // 0x2481ec: 0x24a5b800  addiu       $a1, $a1, -0x4800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948864));
        ctx->pc = 0x2481F0u;
        goto label_2481f0;
    }
    ctx->pc = 0x2481E8u;
    SET_GPR_U32(ctx, 31, 0x2481F0u);
    ctx->pc = 0x2481ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2481E8u;
            // 0x2481ec: 0x24a5b800  addiu       $a1, $a1, -0x4800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2481F0u; }
        if (ctx->pc != 0x2481F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2481F0u; }
        if (ctx->pc != 0x2481F0u) { return; }
    }
    ctx->pc = 0x2481F0u;
label_2481f0:
    // 0x2481f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2481f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2481f4:
    // 0x2481f4: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x2481f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_2481f8:
    // 0x2481f8: 0xc0b5130  jal         func_2D44C0
label_2481fc:
    if (ctx->pc == 0x2481FCu) {
        ctx->pc = 0x2481FCu;
            // 0x2481fc: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x248200u;
        goto label_248200;
    }
    ctx->pc = 0x2481F8u;
    SET_GPR_U32(ctx, 31, 0x248200u);
    ctx->pc = 0x2481FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2481F8u;
            // 0x2481fc: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248200u; }
        if (ctx->pc != 0x248200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248200u; }
        if (ctx->pc != 0x248200u) { return; }
    }
    ctx->pc = 0x248200u;
label_248200:
    // 0x248200: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x248200u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_248204:
    // 0x248204: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248208:
    // 0x248208: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x248208u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_24820c:
    // 0x24820c: 0xc0b5688  jal         func_2D5A20
label_248210:
    if (ctx->pc == 0x248210u) {
        ctx->pc = 0x248210u;
            // 0x248210: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248214u;
        goto label_248214;
    }
    ctx->pc = 0x24820Cu;
    SET_GPR_U32(ctx, 31, 0x248214u);
    ctx->pc = 0x248210u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24820Cu;
            // 0x248210: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248214u; }
        if (ctx->pc != 0x248214u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248214u; }
        if (ctx->pc != 0x248214u) { return; }
    }
    ctx->pc = 0x248214u;
label_248214:
    // 0x248214: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x248214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_248218:
    // 0x248218: 0x1623001a  bne         $s1, $v1, . + 4 + (0x1A << 2)
label_24821c:
    if (ctx->pc == 0x24821Cu) {
        ctx->pc = 0x24821Cu;
            // 0x24821c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x248220u;
        goto label_248220;
    }
    ctx->pc = 0x248218u;
    {
        const bool branch_taken_0x248218 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 3));
        ctx->pc = 0x24821Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x248218u;
            // 0x24821c: 0x3c050037  lui         $a1, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x248218) {
            ctx->pc = 0x248284u;
            goto label_248284;
        }
    }
    ctx->pc = 0x248220u;
label_248220:
    // 0x248220: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248220u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248224:
    // 0x248224: 0xc0b5160  jal         func_2D4580
label_248228:
    if (ctx->pc == 0x248228u) {
        ctx->pc = 0x248228u;
            // 0x248228: 0x24a5b820  addiu       $a1, $a1, -0x47E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948896));
        ctx->pc = 0x24822Cu;
        goto label_24822c;
    }
    ctx->pc = 0x248224u;
    SET_GPR_U32(ctx, 31, 0x24822Cu);
    ctx->pc = 0x248228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248224u;
            // 0x248228: 0x24a5b820  addiu       $a1, $a1, -0x47E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24822Cu; }
        if (ctx->pc != 0x24822Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24822Cu; }
        if (ctx->pc != 0x24822Cu) { return; }
    }
    ctx->pc = 0x24822Cu;
label_24822c:
    // 0x24822c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24822cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248230:
    // 0x248230: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x248230u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_248234:
    // 0x248234: 0xc0b5130  jal         func_2D44C0
label_248238:
    if (ctx->pc == 0x248238u) {
        ctx->pc = 0x248238u;
            // 0x248238: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->pc = 0x24823Cu;
        goto label_24823c;
    }
    ctx->pc = 0x248234u;
    SET_GPR_U32(ctx, 31, 0x24823Cu);
    ctx->pc = 0x248238u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248234u;
            // 0x248238: 0x2406003c  addiu       $a2, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24823Cu; }
        if (ctx->pc != 0x24823Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24823Cu; }
        if (ctx->pc != 0x24823Cu) { return; }
    }
    ctx->pc = 0x24823Cu;
label_24823c:
    // 0x24823c: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x24823cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_248240:
    // 0x248240: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248244:
    // 0x248244: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x248244u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_248248:
    // 0x248248: 0xc0b5688  jal         func_2D5A20
label_24824c:
    if (ctx->pc == 0x24824Cu) {
        ctx->pc = 0x24824Cu;
            // 0x24824c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248250u;
        goto label_248250;
    }
    ctx->pc = 0x248248u;
    SET_GPR_U32(ctx, 31, 0x248250u);
    ctx->pc = 0x24824Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248248u;
            // 0x24824c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248250u; }
        if (ctx->pc != 0x248250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248250u; }
        if (ctx->pc != 0x248250u) { return; }
    }
    ctx->pc = 0x248250u;
label_248250:
    // 0x248250: 0x3c050037  lui         $a1, 0x37
    ctx->pc = 0x248250u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)55 << 16));
label_248254:
    // 0x248254: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248258:
    // 0x248258: 0xc0b5160  jal         func_2D4580
label_24825c:
    if (ctx->pc == 0x24825Cu) {
        ctx->pc = 0x24825Cu;
            // 0x24825c: 0x24a5b800  addiu       $a1, $a1, -0x4800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948864));
        ctx->pc = 0x248260u;
        goto label_248260;
    }
    ctx->pc = 0x248258u;
    SET_GPR_U32(ctx, 31, 0x248260u);
    ctx->pc = 0x24825Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248258u;
            // 0x24825c: 0x24a5b800  addiu       $a1, $a1, -0x4800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948864));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4580u;
    if (runtime->hasFunction(0x2D4580u)) {
        auto targetFn = runtime->lookupFunction(0x2D4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248260u; }
        if (ctx->pc != 0x248260u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetStr__5CFontFPc_0x2d4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248260u; }
        if (ctx->pc != 0x248260u) { return; }
    }
    ctx->pc = 0x248260u;
label_248260:
    // 0x248260: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248260u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248264:
    // 0x248264: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x248264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
label_248268:
    // 0x248268: 0xc0b5130  jal         func_2D44C0
label_24826c:
    if (ctx->pc == 0x24826Cu) {
        ctx->pc = 0x24826Cu;
            // 0x24826c: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->pc = 0x248270u;
        goto label_248270;
    }
    ctx->pc = 0x248268u;
    SET_GPR_U32(ctx, 31, 0x248270u);
    ctx->pc = 0x24826Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x248268u;
            // 0x24826c: 0x24060050  addiu       $a2, $zero, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D44C0u;
    if (runtime->hasFunction(0x2D44C0u)) {
        auto targetFn = runtime->lookupFunction(0x2D44C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248270u; }
        if (ctx->pc != 0x248270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        SetPos__5CFontFii_0x2d44c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248270u; }
        if (ctx->pc != 0x248270u) { return; }
    }
    ctx->pc = 0x248270u;
label_248270:
    // 0x248270: 0x8e060094  lw          $a2, 0x94($s0)
    ctx->pc = 0x248270u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_248274:
    // 0x248274: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x248274u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_248278:
    // 0x248278: 0x8e070098  lw          $a3, 0x98($s0)
    ctx->pc = 0x248278u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_24827c:
    // 0x24827c: 0xc0b5688  jal         func_2D5A20
label_248280:
    if (ctx->pc == 0x248280u) {
        ctx->pc = 0x248280u;
            // 0x248280: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x248284u;
        goto label_248284;
    }
    ctx->pc = 0x24827Cu;
    SET_GPR_U32(ctx, 31, 0x248284u);
    ctx->pc = 0x248280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24827Cu;
            // 0x248280: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D5A20u;
    if (runtime->hasFunction(0x2D5A20u)) {
        auto targetFn = runtime->lookupFunction(0x2D5A20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248284u; }
        if (ctx->pc != 0x248284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        DrawDirect__5CFontFPcii_0x2d5a20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x248284u; }
        if (ctx->pc != 0x248284u) { return; }
    }
    ctx->pc = 0x248284u;
label_248284:
    // 0x248284: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x248284u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_248288:
    // 0x248288: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x248288u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_24828c:
    // 0x24828c: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x24828cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_248290:
    // 0x248290: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x248290u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_248294:
    // 0x248294: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x248294u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_248298:
    // 0x248298: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x248298u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_24829c:
    // 0x24829c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x24829cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2482a0:
    // 0x2482a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2482a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2482a4:
    // 0x2482a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2482a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2482a8:
    // 0x2482a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2482a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2482ac:
    // 0x2482ac: 0x3e00008  jr          $ra
label_2482b0:
    if (ctx->pc == 0x2482B0u) {
        ctx->pc = 0x2482B0u;
            // 0x2482b0: 0x27bd07e0  addiu       $sp, $sp, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2016));
        ctx->pc = 0x2482B4u;
        goto label_fallthrough_0x2482ac;
    }
    ctx->pc = 0x2482ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2482B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2482ACu;
            // 0x2482b0: 0x27bd07e0  addiu       $sp, $sp, 0x7E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 2016));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2482ac:
    ctx->pc = 0x2482B4u;
}
